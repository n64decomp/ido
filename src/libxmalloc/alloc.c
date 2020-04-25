#include <stddef.h>
#include "xmalloc.h"

/*
00498760 xrealloc
00498798 xfree
00498A50 xmalloc
*/
struct AllocBlock *malloc_scb;

void *xrealloc(void *addr, ssize_t size) {
    return alloc_resize(addr, size, &malloc_scb);
}

/*
0042EB10 incorp_feedback
00497C54 dispose
*/
void xfree(void *addr) {
    return alloc_dispose(addr, &malloc_scb);
}

/*
0047F26C alloc_realloc
00498798 xfree
00499018 alloc_resize
*/
void alloc_dispose(void *addr, struct AllocBlock **heap) {
    ssize_t temp_a0;
    ssize_t temp_a0_2;
    ssize_t temp_a1;
    ssize_t temp_t3;
    struct AllocBlock *temp_a3;
    struct AllocBlock *temp_a3_2;
    struct AllocBlock *temp_a3_3;
    struct AllocItem *temp_a2;
    struct AllocItem *temp_t0;
    struct AllocItem *temp_t1;
    struct AllocItem *temp_t2;
    struct AllocItem *temp_t2_2;
    struct AllocItem *temp_t2_3;
    struct AllocItem *temp_t2_4;
    struct AllocItem *temp_t4;
    ssize_t phi_t8;
    struct AllocBlock *phi_a3;
    ssize_t phi_t7;
    struct AllocBlock *phi_a3_2;
    ssize_t phi_t8_2;
    struct AllocBlock *phi_a3_3;
    ssize_t phi_t7_2;
    struct AllocBlock *phi_a3_4;
    struct AllocBlock *phi_a3_5;
    struct AllocBlock *phi_a3_6;
    struct AllocBlock *phi_a3_7;

    temp_a2 = (struct AllocItem *)((unsigned char *)addr - 2 * sizeof(ssize_t));
    phi_a3_7 = *heap;
    if ((*heap)->prev != NULL) {
        phi_a3_2 = *heap;
        if (*heap != NULL) {
            phi_a3 = *heap;
            if ((unsigned char *)temp_a2 >= (unsigned char *)*heap) {
                phi_t8 = (*heap)->size;
                if ((*heap)->size < 0) {
                    phi_t8 = -(*heap)->size;
                }
                phi_a3 = *heap;
                phi_a3_2 = *heap;
                if (((unsigned char *)*heap + phi_t8) < (unsigned char *)temp_a2) {
loop_6:
                    temp_a3 = phi_a3->next;
                    phi_a3_2 = temp_a3;
                    if (temp_a3 != NULL) {
                        phi_a3 = temp_a3;
                        if ((unsigned char *)temp_a2 < (unsigned char *)temp_a3) {
                            goto loop_6;
                        }
                        phi_t7 = temp_a3->size;
                        if (temp_a3->size < 0) {
                            phi_t7 = -temp_a3->size;
                        }
                        phi_a3 = temp_a3;
                        phi_a3_2 = temp_a3;
                        if (((unsigned char *)temp_a3 + phi_t7) < (unsigned char *)temp_a2) {
                            goto loop_6;
                        }
                    }
                }
            } else {
                goto loop_6;
            }
        }
        phi_a3_5 = phi_a3_2;
        if (phi_a3_2 == NULL) {
            phi_a3_4 = *heap;
            if (*heap != NULL) {
                phi_a3_3 = *heap;
                if ((unsigned char *)temp_a2 >= (unsigned char *)*heap) {
                    phi_t8_2 = (*heap)->size;
                    if ((*heap)->size < 0) {
                        phi_t8_2 = -(*heap)->size;
                    }
                    phi_a3_3 = *heap;
                    phi_a3_4 = *heap;
                    if (((unsigned char *)*heap + phi_t8_2) < (unsigned char *)temp_a2) {
loop_17:
                        temp_a3_2 = phi_a3_3->prev;
                        phi_a3_4 = temp_a3_2;
                        if (temp_a3_2 != NULL) {
                            phi_a3_3 = temp_a3_2;
                            if ((unsigned char *)temp_a2 < (unsigned char *)temp_a3_2) {
                                goto loop_17;
                            }
                            phi_t7_2 = temp_a3_2->size;
                            if (temp_a3_2->size < 0) {
                                phi_t7_2 = -temp_a3_2->size;
                            }
                            phi_a3_3 = temp_a3_2;
                            phi_a3_4 = temp_a3_2;
                            if (((unsigned char *)temp_a3_2 + phi_t7_2) < (unsigned char *)temp_a2) {
                                goto loop_17;
                            }
                        }
                    }
                } else {
                    goto loop_17;
                }
            }
            phi_a3_5 = phi_a3_4;
            if (phi_a3_4 != NULL) {
block_23:
                phi_a3_6 = phi_a3_5;
                phi_a3_7 = phi_a3_5;
                if (phi_a3_5->size < 0) {
loop_24:
                    temp_a3_3 = phi_a3_6->prev;
                    phi_a3_6 = temp_a3_3;
                    phi_a3_7 = temp_a3_3;
                    if (temp_a3_3->size < 0) {
                        goto loop_24;
                    }
                }
block_25:
                temp_a1 = temp_a2->size & -4;
                temp_t1 = (struct AllocItem *)((unsigned char *)temp_a2 + temp_a1);
                temp_t0 = temp_t1;
                temp_t3 = temp_t0->size & -4;
                if ((temp_a2->size & 2) == 0) {
                    temp_t4 = (struct AllocItem *)((unsigned char *)temp_a2 - temp_a2->prev_size);
                    if ((temp_t0->size & 1) != 0) {
                        temp_a0 = temp_a2->prev_size + temp_a1;
                        if (temp_a0 >= 0x100) {
                            if (temp_a2->prev_size < 0x100) {
                                temp_t2 = phi_a3_7->item_list;
                                temp_t4->next = temp_t2;
                                temp_t4->prev = temp_t2->prev;
                                temp_t2->prev->next = temp_t4;
                                temp_t2->prev = temp_t4;
                            }
                        }
                        temp_t4->size = temp_a0 + 2;
                        temp_t0->size = temp_t3 + 1;
                        ((struct AllocItem *)((unsigned char *)temp_t4 + temp_a0))->prev_size = temp_a0;
                        return;
                    }
                    temp_a0_2 = (temp_a2->prev_size + temp_a1) + temp_t3;
                    temp_t2_2 = phi_a3_7->item_list;
                    if (temp_a0_2 >= 0x100) {
                        if (temp_a2->prev_size < 0x100) {
                            temp_t4->next = temp_t2_2;
                            temp_t4->prev = temp_t2_2->prev;
                            temp_t2_2->prev->next = temp_t4;
                            temp_t2_2->prev = temp_t4;
                        }
                    }
                    temp_t4->size = temp_a0_2 + 2;
                    ((struct AllocItem *)((unsigned char *)temp_t4 + temp_a0_2))->prev_size = temp_a0_2;
                    if (temp_t3 >= 0x100) {
                        temp_t0->prev->next = temp_t0->next;
                        temp_t0->next->prev = temp_t0->prev;
                        if (temp_t2_2 == temp_t0) {
                            phi_a3_7->item_list = temp_t0->next;
                            return;
                        }
                    }
                } else {
                    if ((temp_t0->size & 1) != 0) {
                        if (temp_a1 >= 0x100) {
                            temp_t2_3 = phi_a3_7->item_list;
                            temp_a2->next = temp_t2_3;
                            temp_a2->prev= temp_t2_3->prev;
                            temp_t2_3->prev->next = temp_a2;
                            temp_t2_3->prev = temp_a2;
                        }
                        temp_t1->prev_size = temp_a1;
                        temp_a2->size = temp_a1 + 2;
                        temp_t0->size = temp_t3 + 1;
                        return;
                    }
                    temp_a1 = temp_a1 + temp_t3;
                    temp_t2_4 = phi_a3_7->item_list;
                    if (temp_a1 >= 0x100) {
                        temp_a2->next = temp_t2_4;
                        temp_a2->prev = temp_t2_4->prev;
                        temp_t2_4->prev->next = temp_a2;
                        temp_t2_4->prev = temp_a2;
                    }
                    ((struct AllocItem *)((unsigned char *)temp_a2 + temp_a1))->prev_size = temp_a1;
                    temp_a2->size = temp_a1 + 2;
                    if (temp_t3 >= 0x100) {
                        temp_t0->prev->next = temp_t0->next;
                        temp_t0->next->prev = temp_t0->prev;
                        if (temp_t2_4 == temp_t0) {
                            phi_a3_7->item_list = temp_t0->next;
                            return;
                        }
                    }
                }
            }
        } else {
            goto block_23;
        }
    } else {
        goto block_25;
    }
}

/*
0040B930 read_feedback_file
0042EB10 incorp_feedback
00497BE0 new
*/
void *xmalloc(ssize_t size) {
    return alloc_new(size, &malloc_scb);
}

/*
0040F610 formbvlivran
00414108 func_00414108
0042020C gen_static_link
00425618 func_00425618
0042EB10 incorp_feedback
0042F424 appendgraph
0042F6CC controlflow
00430680 func_00430680
00434434 func_00434434
0043771C optinit
00439188 procinit
0043A88C insert_outparlist
0043AA18 appendstorelist
0043AAF4 appendbbvarlst
0043B15C func_0043B15C
0043B2B8 func_0043B2B8
0043C248 func_0043C248
0043C56C func_0043C56C
0043CA8C func_0043CA8C
0043CFCC readnxtinst
00444984 appendichain
00445AEC trep_image
0044EDF8 ilodfold
00453430 func_00453430
00453B04 func_00453B04
00455D38 analoop
00456310 func_00456310
0045877C searchmtag_parm
00458998 func_00458998
00458B88 assign_mtag
004590C8 searchproc
00459360 insertijplab
00459400 updatelab
00459828 insertvar
00459C9C enterfsymtab
00459E84 enter_gp_rel_tab
00459FB0 insertlda
0045A25C insertcallee
0045B978 mergecallees
0045BCA8 func_0045BCA8
0045C150 prepass
0045DA18 formlivbb
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
0046123C func_0046123C
00464AD4 alloc_livbb
00464BFC localcolor
00465CB8 insintf
00465E50 spilltemps
00467F04 split
00469198 put_in_fallthru_bb
0046920C put_in_jump_bb
00469280 globalcolor
0046F994 create_edge
0046FA20 new_header_node
0046FB40 record_labels
004713E8 loopunroll
00474FC8 func_00474FC8
00475680 getexpsources
0047606C func_0047606C
004761D0 tail_recursion
00476CA0 gettemp
00477E20 func_00477E20
0047BEF4 appendchain
0047CDA4 extendstat
0047F26C alloc_realloc
00498A50 xmalloc
00499018 alloc_resize
*/
void *alloc_new(ssize_t size, struct AllocBlock **heap) {
    ssize_t temp_t2;
    struct AllocItem *first_item;
    struct AllocItem *temp_t3;
    struct AllocItem *temp_t3_2;
    struct AllocItem *temp_t3_3;
    struct AllocItem *temp_t4;
    struct AllocBlock *phi_t0;
    struct AllocItem *phi_t1;
    ssize_t free_size;

    size = size + 0xF;
    phi_t0 = *heap;
    if (*heap == NULL) {
        if (alloc_mark(heap) == NULL) {
            return NULL;
        }
        phi_t0 = *heap;
    }
    first_item = phi_t0->item_list;
    size = size & -8;
    if (size < 0x10) {
        size = 0x10;
    }
    free_size = first_item->size & -8;
    phi_t1 = first_item;
    while (phi_t1->size < size) {
        phi_t1 = phi_t1->next;
        if (phi_t1 != first_item) {
            free_size = phi_t1->size & -8;
        } else {
            // We came back to the beginning of the list
            if (!alloc_next_scb(size - 4, heap)) {
                return NULL;
            }
            free_size = phi_t0->item_list->size & -8;
            phi_t1 = phi_t0->item_list;
            break;
        }
    }


    if (size >= (free_size - 0x100)) {
        // Don't leave a hole of up to 256 bytes,
        // so waste this whole item,
        // and remove from the free list.
        temp_t3_2 = phi_t1->prev;
        temp_t4 = phi_t1->next;
        temp_t3_2->next = temp_t4;
        temp_t4->prev = temp_t3_2;

        phi_t0->item_list = temp_t3_2;

        phi_t1->size |= 1;

        temp_t3_3 = (struct AllocItem *)((unsigned char *)phi_t1 + free_size);
        temp_t3_3->size |= 2;
        return (void *)&phi_t1->prev;
    } else {
        temp_t3 = (struct AllocItem *)((unsigned char *)phi_t1 + free_size);

        temp_t3->prev_size = size;
        temp_t3->size |= 2;

        temp_t3 = (struct AllocItem *)((unsigned char *)temp_t3 - size);
        temp_t3->size = size | 1;
        temp_t2 = free_size - size;
        temp_t3->prev_size = temp_t2;

        phi_t1->size = temp_t2 | 2;
        return (void *)&temp_t3->prev;
    }
}
