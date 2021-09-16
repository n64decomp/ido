#include <string.h>
#include <inttypes.h>
#include <stdlib.h>
#include <unistd.h>
#include "xmalloc.h"

/*
00498BE0 alloc_page
00498C9C alloc_free
*/
struct AllocBlock *alloc_anchor = NULL;

/*
00498CD0 alloc_scb
*/
struct AllocBlock *alloc_page(ssize_t size) {
    ssize_t extra;
    void *ret;

    if ((alloc_anchor == NULL) || (alloc_anchor->size < size)) {
        ret = sbrk(size);
        if (ret == (void *)-1) {
            ret = NULL;
        } else {
            if ((intptr_t)ret != ((intptr_t)ret & -0x1000)) {
                extra = (((intptr_t)ret + 0xFFF) & -0x1000) - (intptr_t)ret;
                sbrk(extra);
                ret += extra;
            }
        }
    } else {
        ret = (void *)alloc_anchor;
        alloc_anchor = alloc_anchor->next;
    }
    return (struct AllocBlock *)ret;
}

/*
00498E6C alloc_release
*/
void alloc_free(struct AllocBlock *block) {
    struct AllocBlock *anchor = alloc_anchor;
    alloc_anchor = block;
    block->next = anchor;

    if (block->size < 0) {
        block->size = -block->size;
    }
}

/*
00498D68 alloc_mark
00498F34 alloc_next_scb
*/
void alloc_scb(struct AllocBlock **block, ssize_t size) {
    ssize_t temp_a1;
    struct AllocBlock *temp_ret;
    struct AllocItem *temp_v1;
    struct AllocItem *temp_a0;

    temp_ret = alloc_page(size);
    *block = temp_ret;
    if (temp_ret != 0) {
        temp_a0 = (struct AllocItem *)(((unsigned char *)temp_ret + size) - 2 * sizeof(ssize_t));
        temp_a1 = (unsigned char *)temp_a0 - (unsigned char *)temp_ret;
        temp_ret->size = -size;
        temp_ret->prev = NULL;
        temp_ret->next = NULL;
        temp_v1 = (struct AllocItem *)(temp_ret + 1);
        temp_v1->prev_size = 0;
        temp_v1->size = (temp_a1 - sizeof(struct AllocItem)) + 2;
        temp_a0->prev_size = temp_a1 - sizeof(struct AllocItem);
        temp_a0->size = 1;
        temp_v1->prev = temp_v1;
        temp_v1->next = temp_v1;
        temp_ret->item_list = temp_v1;
    }
}

/*
00426DE8 func_00426DE8
0043771C optinit
00455D38 analoop
00456A2C oneproc
0045C150 prepass
00498A6C alloc_new
*/
struct AllocBlock *alloc_mark(struct AllocBlock **heap) {
    struct AllocBlock *block;
    ssize_t temp_a2;
    struct AllocItem *temp_a0;
    struct AllocItem *temp_a1;
    struct AllocBlock *phi_v0;
    struct AllocBlock *last_block;
    ssize_t phi_t2;

    alloc_scb(&block, 0x10000);
    if (block == NULL) {
        return NULL;
    }
    if (*heap != NULL) {
        phi_v0 = (*heap)->next;
        last_block = *heap;
        while (phi_v0 != NULL) {
            last_block = phi_v0;
            phi_v0 = phi_v0->next;
        }
        last_block->next = block;
        block->prev = last_block;
    }
    *heap = block;
    phi_t2 = block->size;
    if (block->size < 0) {
        phi_t2 = -block->size;
    }
    block->size = phi_t2;
    temp_a0 = block->item_list + 1;
    block->item_list->next = temp_a0;
    temp_a1 = (struct AllocItem *)((unsigned char *)block->item_list + (block->item_list->size & -4));
    temp_a2 = (unsigned char *)temp_a1 - (unsigned char *)block->item_list;
    block->item_list->prev = temp_a0;
    block->item_list[1].next = block->item_list;
    block->item_list[1].prev = block->item_list;
    temp_a1->prev_size = temp_a2 - sizeof(struct AllocItem);
    block->item_list[1].size = (temp_a2 - sizeof(struct AllocItem)) + 2;
    block->item_list->size = 2;
    block->item_list = temp_a0;
    return block;
}

/*
00426DE8 func_00426DE8
00455D38 analoop
00456A2C oneproc
0045C150 prepass
*/
void alloc_release(struct AllocBlock **heap, struct AllocBlock *mark) {
    struct AllocBlock *next;
    struct AllocBlock *block;
    struct AllocBlock *prev;
    struct AllocBlock *cur;

    block = *heap;
    if (*heap != mark) {
        while (block != NULL) {
            block = block->prev;
            if (block == mark) {
                break;
            }
        }
    }
    if (block != NULL) {
        if (mark->prev != NULL) {
            mark->prev->next = NULL;
        }
        prev = mark->prev;
        while (prev != NULL && prev->size < 0) {
            prev = prev->prev;
        }
        *heap = prev;
        cur = mark;
        do {
            next = cur->next;
            alloc_free(cur);
            cur = next;
        } while (next != NULL);
    }
}

/*
00498A6C alloc_new
*/
int alloc_next_scb(ssize_t size, struct AllocBlock **heap) {
    struct AllocBlock *sp2C;
    ssize_t phi_a1;
    struct AllocBlock *phi_v0;
    struct AllocBlock *last_block;

    phi_a1 = (size + 0x1017) & 0x7FFFF000;
    if (phi_a1 < 0x10000) {
        phi_a1 = 0x10000;
    }
    alloc_scb(&sp2C, phi_a1);
    if (sp2C == NULL) {
        return 0;
    }
    phi_v0 = (*heap)->next;
    last_block = *heap;
    while (phi_v0 != NULL) {
        last_block = phi_v0;
        phi_v0 = phi_v0->next;
    }
    last_block->next = sp2C;
    sp2C->prev = last_block;
    if ((*heap)->item_list != NULL) {
        sp2C->item_list->next = (*heap)->item_list;
        sp2C->item_list->prev = (*heap)->item_list->prev;
        (*heap)->item_list->prev->next = sp2C->item_list;
        (*heap)->item_list->prev = sp2C->item_list;
    }
    (*heap)->item_list = sp2C->item_list;
    return 1;
}

/*
00498760 xrealloc
*/
void *alloc_resize(void *addr, ssize_t size, struct AllocBlock **heap) {
    ssize_t old_size;
    void *new_addr;

    if (addr != 0) {
        if ((((ssize_t *)addr)[-1] & 1) == 0) {
            // Not an allocated object
            return NULL;
        }
        old_size = ((ssize_t *)addr - 2)[1] & -4;
        if (old_size >= (size + 4)) {
            return addr;
        }
        new_addr = alloc_new(size, heap);
        if (new_addr == 0) {
            return NULL;
        }
        memcpy(new_addr, addr, old_size);
        alloc_dispose(addr, heap);
    } else {
        new_addr = alloc_new(size, heap);
    }
    return new_addr;
}
