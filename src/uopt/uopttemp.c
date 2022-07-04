#include "libu/libu.h"
#include "bitvector.h"
#include "uoptdata.h"

/*
0042BF08 reemit
*/
void findbbtemps(struct Graphnode *node) {
    int i;
    struct IChain *ichain;
    struct Temploc *pos;

    initbv(&setofspills, (struct BitVectorBlock) {0});

    for (i = 0; i < firstconstbit; i++) {
        if (bvectin(i, &node->bvs.stage1.u.scm.region) && bvectin(i, &coloreditems)) {
            ichain = bittab[i].ichain;
            switch (ichain->type) {
                case isop:
                    setbit(&setofspills, ichain->isop.temploc->index);
                    break;

                case isilda:
                    setbit(&setofspills, ichain->islda_isilda.temploc->index);
                    break;

                case issvar:
                    setbit(&setofspills, ichain->isvar_issvar.temploc->index);
                    break;

                default:
                    caseerror(1, 40, "uopttemp.p", 10);
                    break;
            }
        }
    }

    for (pos = templochead; pos != NULL; pos = pos->next) {
        pos->not_spilled = !bvectin(pos->index, &setofspills);
    }
}

/*
004230F0 emit_expr
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
