#include "libu/libu.h"
#include "bitvector.h"
#include "uoptdata.h"

/*
0042BF08 reemit
*/
void findbbtemps(void *arg0) {
    int i;
    struct BitVectorBlock zero = {0};
    unsigned char *ptr;
    struct Temploc *pos;

    initbv(&setofspills, zero);

    for (i = 0; i < firstconstbit; i++) {
        if (bvectin(i, (struct BitVector *)((char *)arg0 + 0x15c))) {
            if (bvectin(i, &coloreditems)) {
                ptr = (unsigned char *)bittab[i].unk0;
                switch (*ptr) {
                    case 4:
                        setbit(&setofspills, **(int **)(ptr + 0x20));
                        break;
                    case 5:
                        setbit(&setofspills, **(int **)(ptr + 0x24));
                        break;
                    case 6:
                        setbit(&setofspills, **(int **)(ptr + 0x20));
                        break;
                    default:
                        caseerror(1, 40, "uopttemp.p", 10);
                        break;
                }
            }
        }
    }

    for (pos = templochead; pos != NULL; pos = pos->next) {
        pos->not_spilled = !bvectin(pos->index, &setofspills);
    }
}

/*
004230F0 func_004230F0
0042BF08 reemit
*/
void gettemp(struct Temploc **out_result, int size) {
    struct Temploc *item = templochead;
    bool stop = false;
    int rem;
    int stackendpos;

    while (item != NULL && !stop) {
        if (item->not_spilled && size == item->size) {
            stop = true;
        } else {
            item = item->next;
        }
    }

    if (item == NULL) {
        if (templochead == NULL) {
            item = alloc_new(sizeof(struct Temploc), &perm_heap);
            templochead = item;
        } else {
            item = alloc_new(sizeof(struct Temploc), &perm_heap);
            temploctail->next = item;
        }
        item->next = NULL;
        temploctail = item;
        rem = tempdisp % size;
        if (rem != 0) {
            // add padding for alignment
            tempdisp += size - rem;
        }
        stackendpos = tempdisp + size;
        item->index = tempcount++;
        if (!stack_reversed) {
            tempdisp = stackendpos;
            item->disp = -stackendpos;
        } else {
            item->disp = tempdisp;
            tempdisp = stackendpos;
        }
        item->size = size;
    }
    item->not_spilled = false;
    *out_result = item;
}
