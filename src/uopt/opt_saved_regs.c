#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptkill.h"
#include "uoptreg1.h"
#include "uoptutil.h"
#include "uoptfeedback.h"

/*
00474110 opt_saved_regs
*/
static int eeregsetmask;

/*
00456A2C oneproc
*/
void opt_saved_regs(void) {
    struct Graphnode *node;
    struct GraphnodeList *succ;
    struct GraphnodeList *pred;
    int reg; // t4
    int app; // t1
    int oldvalue; // t3
    int tempset; // a3
    bool app_changed; // t4
    bool changed; // a1

    eeregsetmask = GENMASK32(firsteereg[0] - 13, lasteereg[0] - 13 + 1) | GENMASK32(firsteereg[1] - 13, lasteereg[1] - 13 + 1);
    if (!do_opt_saved_regs || lang == LANG_PL1 || curproc->has_longjmp) {
        ugen_saved_eeregs = eeregsetmask;
        node = graphhead;
        while (node != NULL) {
            node->bvs.stage3.strinsertin = 0;
            node->bvs.stage3.lodinsertout = 0;
            node = node->next;
        }
        return;
    }

    // initialize APP for each node
    node = graphhead;
    while (node != NULL) {
        app = 0;

        for (reg = firsteereg[0]; reg <= lasteereg[0]; reg++) {
            if (node->regdata.unk44[reg - 1] != NULL) {
                SET32_ADD(app, reg - 13);
            }
        }
        for (reg = firsteereg[1]; reg <= lasteereg[1]; reg++) {
            if (node->regdata.unk44[reg - 1] != NULL) {
                SET32_ADD(app, reg - 13);
            }
        }
        
        if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
            if (node->stat_tail->u.call.proc->o3opt) {
                for (reg = firsteereg[0]; reg <= lasteereg[0]; reg++) {
                    if (node->stat_tail->u.call.proc->regstaken_parregs->regstaken[reg - 1]) {
                        SET32_ADD(app, reg - 13);
                    }
                }
                for (reg = firsteereg[1]; reg <= lasteereg[1]; reg++) {
                    if (node->stat_tail->u.call.proc->regstaken_parregs->regstaken[reg - 1]) {
                        SET32_ADD(app, reg - 13);
                    }
                }
            }
        }
        node->bvs.stage3.app = app;
        node = node->next;
    }

    do {
        changed = false;

        node = graphtail;
        while (node != NULL) {
            if (node->loopdepth > 1 || numintval > 1) {
                pred = node->predecessors;
                while (pred != NULL) {
                    if (pred->graphnode->loopdepth > 1 || numintval > 1) {
                        if (SET32_DIFFERENCE(node->bvs.stage3.app, pred->graphnode->bvs.stage3.app) != 0) {
                            pred->graphnode->bvs.stage3.app |= node->bvs.stage3.app;
                            changed = true;
                        }
                    }
                    pred = pred->next;
                }
            }
            node = node->prev;
        }
    } while (changed);

    do {
        app_changed = false;

        // set ANTIN, ANTOUT, AVIN, AVOUT to all saved registers initially
        node = graphhead;
        while (node != NULL) {
            node->bvs.stage3.eeantin = eeregsetmask;
            if (node->successors == NULL || !node->terminal) {
                node->bvs.stage3.eeantout = 0;
            } else {
                node->bvs.stage3.eeantout = eeregsetmask;
            }

            node->bvs.stage3.eeavout = eeregsetmask;
            if (node->predecessors == NULL || node->interprocedural_controlflow) {
                node->bvs.stage3.eeavin = 0;
            } else {
                node->bvs.stage3.eeavin = eeregsetmask;
            }
            node = node->next;
        }

        // AVIN, AVOUT
        do {
            changed = false;
            node = graphhead;
            while (node != NULL) {

                if (node->predecessors != NULL) {
                    if (!changed) {
                        oldvalue = node->bvs.stage3.eeavin;
                    }

                    // AVIN = interesection of all predecessors' AVOUT
                    pred = node->predecessors;
                    do {
                        node->bvs.stage3.eeavin &= pred->graphnode->bvs.stage3.eeavout;
                        pred = pred->next;
                    } while (pred != NULL);

                    if (!changed && node->bvs.stage3.eeavin != oldvalue) {
                        changed = true;
                    }
                }

                // AVOUT = APP | AVIN
                node->bvs.stage3.eeavout = node->bvs.stage3.eeavin | node->bvs.stage3.app;
                node = node->next;
            }
        } while (changed);

        // ANTIN, ANTOUT
        do {
            changed = false;
            node = graphtail;
            while (node != NULL) {
                if (node->successors != NULL) {
                    if (!changed) {
                        oldvalue = node->bvs.stage3.eeantout;
                    }

                    // ANTOUT = interesection of all successors' ANTIN
                    succ = node->successors;
                    do {
                        node->bvs.stage3.eeantout &= succ->graphnode->bvs.stage3.eeantin;
                        succ = succ->next;
                    } while (succ != NULL);

                    if (!changed && oldvalue != node->bvs.stage3.eeantout) {
                        changed = true;
                    }
                }

                // ANTIN = APP | ANTOUT
                node->bvs.stage3.eeantin = node->bvs.stage3.eeantout | node->bvs.stage3.app;
                node = node->prev;
            }
        } while (changed);

        // extend the range of APP for each node
        node = graphhead;
        while (node != NULL) {
            if (node->predecessors != NULL) {
                if (node->predecessors->next != NULL) {
                    tempset = 0;
                    pred = node->predecessors;
                    do {
                        tempset |= pred->graphnode->bvs.stage3.eeavout | pred->graphnode->bvs.stage3.eeantin;
                        pred = pred->next;
                    } while (pred != NULL);

                    // ANTIN here, AVOUT or ANTIN in any predecessor
                    tempset = SET32_INTERSECT(tempset, node->bvs.stage3.eeantin);
                    if (tempset != 0) {
                        pred = node->predecessors;
                        do {
                            if ((tempset & ~(pred->graphnode->bvs.stage3.eeavout | pred->graphnode->bvs.stage3.eeantin)) != 0) {
                                pred->graphnode->bvs.stage3.app |= (tempset & ~pred->graphnode->bvs.stage3.eeavout & ~pred->graphnode->bvs.stage3.eeantin);
                                app_changed = true;
                            }
                            pred = pred->next;
                        } while (pred != NULL);
                    }
                }
            }

            if (node->successors != NULL) {
                if (node->successors->next != NULL) {
                    tempset = 0;
                    succ = node->successors;
                    do {
                        tempset |= succ->graphnode->bvs.stage3.eeantin | succ->graphnode->bvs.stage3.eeavout;
                        succ = succ->next;
                    } while (succ != NULL);

                    tempset = SET32_INTERSECT(tempset, node->bvs.stage3.eeavout);
                    if (tempset != 0) {
                        succ = node->successors;
                        do {
                            if ((tempset & ~(succ->graphnode->bvs.stage3.eeantin | succ->graphnode->bvs.stage3.eeavout)) != 0) {
                                succ->graphnode->bvs.stage3.app |= tempset & ~(succ->graphnode->bvs.stage3.eeantin | succ->graphnode->bvs.stage3.eeavout);
                                app_changed = true;
                            }
                            succ = succ->next;
                        } while (succ != NULL);
                    }
                }
            }
            node = node->next;
        }
    } while (app_changed);

    ugen_saved_eeregs = graphhead->bvs.stage3.eeantin;
    node = graphhead;
    while (node != NULL) {
        if (node->predecessors == NULL) {
            if (!node->interprocedural_controlflow) {
                node->bvs.stage3.strinsertin = 0;
            } else {
                node->bvs.stage3.strinsertin = node->bvs.stage3.eeantin & ~ugen_saved_eeregs;
            }
        } else {
            tempset = node->predecessors->graphnode->bvs.stage3.eeantin;
            pred = node->predecessors->next;
            while (pred != NULL) {
                tempset |= pred->graphnode->bvs.stage3.eeantin;
                pred = pred->next;
            }
            node->bvs.stage3.strinsertin = node->bvs.stage3.eeantin & ~node->bvs.stage3.eeavin & ~tempset;
        }

        if (node->successors == NULL) {
            node->bvs.stage3.lodinsertout = node->bvs.stage3.eeavout & ~ugen_saved_eeregs;
        } else {
            tempset = node->successors->graphnode->bvs.stage3.eeavout;
            succ = node->successors->next;
            while (succ != NULL) {
                tempset |= succ->graphnode->bvs.stage3.eeavout;
                succ = succ->next;
            }
            node->bvs.stage3.lodinsertout = node->bvs.stage3.eeavout & ~node->bvs.stage3.eeantout & ~tempset;
        }

        node = node->next;
    }
}
