#ifndef XMALLOC_H
#define XMALLOC_H

#include <sys/types.h>

struct AllocItem {
    ssize_t prev_size;
    ssize_t size;
    struct AllocItem *prev;
    struct AllocItem *next;
};

struct AllocBlock {
    struct AllocBlock *prev;
    struct AllocBlock *next;
    struct AllocItem *item_list;
    ssize_t size;
    //struct AllocItem data[1];
};

int alloc_next_scb(ssize_t size, struct AllocBlock **heap);

struct AllocBlock *alloc_mark(struct AllocBlock **heap);
void alloc_release(struct AllocBlock **heap, struct AllocBlock *mark);
void *alloc_resize(void *addr, ssize_t size, struct AllocBlock **heap);

void alloc_dispose(void *addr, struct AllocBlock **heap);
void *alloc_new(ssize_t size, struct AllocBlock **heap);

void *xmalloc(ssize_t size);
void *xrealloc(void *addr, ssize_t size);
void xfree(void *addr);

#endif
