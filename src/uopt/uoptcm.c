#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptions.h"
#include "uoptdata.h"
#include "bitvector.h"
#include "uoptcm.h"
#include "uoptdbg.h"
#include "uoptitab.h"

/*
0040F8D0 resetsubdelete
00410098 delete_unmoved_recur
00410204 codemotion
*/
void resetsubdelete(struct Expression *expr, struct Graphnode *node) {
    bool phi_s1;

    if (expr == NULL) {
        return;
    }

    if ((expr->type == isvar || expr->type == issvar) && expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
        resetsubdelete(expr->data.isvar_issvar.copy, node);
    } else if (expr->type == isop || expr->type == isilda || expr->type == issvar) {
        switch (expr->type) {
            case isilda:
                if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) &&
                        (expr->data.islda_isilda.outer_stack->type != issvar ||
                         expr->data.islda_isilda.outer_stack->unk3 ||
                         bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                    resetbit(&node->bvs.stage1.u.precm.avin, expr->ichain->bitpos);
                } else {
                    resetsubdelete(expr->data.islda_isilda.outer_stack, node);
                }
                break;

            case issvar:
                if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) && (expr->unk3 || bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                    resetbit(&node->bvs.stage1.u.precm.avin, expr->ichain->bitpos);
                } else {
                    resetsubdelete(expr->data.isvar_issvar.outer_stack, node);
                }
                break;

            case isop:
                if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) && (expr->data.isop.unk21 || bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                    resetbit(&node->bvs.stage1.u.precm.avin, expr->ichain->bitpos);
                    phi_s1 = false;
                } else {
                    phi_s1 = true;
                }

                if (phi_s1) {
                    resetsubdelete(expr->data.isop.op1, node);
                    if (optab[expr->data.isop.opc].is_binary_op) {
                        resetsubdelete(expr->data.isop.op2, node);
                    }
                }
                break;

            default:
                caseerror(1, 0x2D, "uoptcm.p", 8);
                break;
        }
    }
}

/*
00410204 codemotion
*/
void setsubinsert(struct IChain *ichain, struct Graphnode *node) {
    if (ichain->type == isop || ichain->type == isilda || ichain->type == issvar) {
        if (!bvectin(ichain->bitpos, &node->bvs.stage1.u.cm.insert)) {
            setbit(&node->bvs.stage1.u.cm.subinsert, ichain->bitpos);
        }
    }
}

/* 
00410204 codemotion
*/
bool has_assert(struct Graphnode *node, struct Statement **stat) {
    struct GraphnodeList *pred;
    struct Statement *assertjump;
    bool assertion;

    pred = node->predecessors;
    if (pred == NULL) {
        return false;
    }
    if (pred->next == NULL) {
        if ((pred->graphnode->stat_tail->opc == Ufjp || pred->graphnode->stat_tail->opc == Utjp) &&
                pred->graphnode->successors->next != NULL) {
            *stat = pred->graphnode->stat_tail;
            assertion = pred->graphnode->stat_tail->expr->type == isop &&
                (pred->graphnode->stat_tail->expr->data.isop.opc == Ugeq ||
                 pred->graphnode->stat_tail->expr->data.isop.opc == Ugrt ||
                 pred->graphnode->stat_tail->expr->data.isop.opc == Uleq ||
                 pred->graphnode->stat_tail->expr->data.isop.opc == Ules);
        }
        return false;
    }

    assertjump = pred->graphnode->stat_tail;
    if (assertjump->opc != Ufjp && assertjump->opc != Utjp) {
        assertjump = pred->next->graphnode->stat_tail;
    }
    if (assertjump->opc != Ufjp && assertjump->opc != Utjp) {
        return false;
    }

    *stat = assertjump;
    return assertjump->u.jp.incre != 0;
}

/*
00410204 codemotion
*/
bool trap_implying(Uopcode opc, struct IChain *op1, union Constant *constant, struct IChain *trap_ichain) {
    if (trap_ichain->type != isop) {
        return false;
    }

    if (opc != trap_ichain->isop.opc || op1 != trap_ichain->isop.op1) {
        return false;
    }

    switch (opc) {

        case Utpge:
            if (trap_ichain->dtype == Jdt) {
                return (trap_ichain->isop.op2->isconst.number.intval >= constant->intval);
            }
            if (trap_ichain->dtype == Ldt) {
                return (trap_ichain->isop.op2->isconst.number.uintval >= constant->uintval);
            }
            return false;

        case Utpgt:
            if (trap_ichain->dtype == Jdt) {
                return (trap_ichain->isop.op2->isconst.number.intval >= constant->intval);
            }
            if (trap_ichain->dtype == Ldt) {
                return (trap_ichain->isop.op2->isconst.number.uintval >= constant->uintval);
            }
            return false;

        case Utple:
            if (trap_ichain->dtype == Jdt) {
                return (trap_ichain->isop.op2->isconst.number.intval <= constant->intval);
            }
            if (trap_ichain->dtype == Ldt) {
                return (trap_ichain->isop.op2->isconst.number.uintval <= constant->uintval);
            }
            return false;

        case Utplt:
            if (trap_ichain->dtype == Jdt) {
                return (trap_ichain->isop.op2->isconst.number.intval <= constant->intval);
            }
            if (trap_ichain->dtype == Ldt) {
                return (trap_ichain->isop.op2->isconst.number.uintval <= constant->uintval);
            }
            return false;

        default:
            caseerror(1, 141, "uoptcm.p", 8);
            return false;
    }
}

/*
00410204 codemotion
*/
bool trap_implying_v(Uopcode opc, struct IChain *op1, struct IChain *op2, struct IChain *trap_ichain) {
    if (trap_ichain->type != isop) {
        return false;
    }

    if (op1 != trap_ichain->isop.op1 || op2 != trap_ichain->isop.op2) {
        return false;
    }

    switch (opc) {
        case Utple:
            return trap_ichain->isop.opc == Utple || trap_ichain->isop.opc == Utplt;

        case Utplt:
            return trap_ichain->isop.opc == Utplt;

        case Utpgt:
            return trap_ichain->isop.opc == Utpgt;

        case Utpge:
            return trap_ichain->isop.opc == Utpge || trap_ichain->isop.opc == Utpgt;

        default:
            caseerror(1, 172, "uoptcm.p", 8);
            return false;
    }
}

/*
00410204 codemotion
*/
void delete_unmoved_recur(struct Statement *stat, struct Graphnode *node) {
    struct RecurThing *recur;
    struct RecurThing *last_inpath;
    bool inpath;

    last_inpath = NULL;
    recur = stat->u.store.u.str.unk30; // always NULL in oot. what sets this?
    while (recur != NULL) {
        if (bvectin(recur->ichain->bitpos, &node->bvs.stage1.u.precm.expoccur)) {
            if (bvectin(recur->ichain->bitpos, &node->bvs.stage1.u.precm.pavout)) {
                inpath = true;
            } else {
                inpath = inpathafter(recur->ichain, stat);
            }
        } else if (bvectin(recur->ichain->bitpos, &node->bvs.stage1.u.precm.pavout)) {
            inpath = inpathbefore(recur->ichain, stat);
        } else {
            inpath = false;
        }

        if (!inpath) {
            recur->expr->count--;
            if (last_inpath == NULL) {
                stat->u.store.u.str.unk30 = recur->next;
            } else {
                last_inpath->next = recur->next;
            }
        } else {
            resetsubdelete(recur->expr, node);
            last_inpath = recur;
        }
        recur = recur->next;
    }
}

/* 
00456A2C oneproc
*/
void codemotion(void) {
    struct Statement *sp1E4;
    union Constant sp1C0;
    Uopcode trapopc; // sp1BB
    struct Graphnode *node_s5;
    struct GraphnodeList *pred;
    struct GraphnodeList *succ;
    struct Statement *stat;
    unsigned short hash;
    bool phi_v1;
    bool const_trap;
    bool done;
    bool changed;

    struct IChain *trap_ichain;
    struct IChain *ichain;
    struct IChain *insertichain;

    int i, block, bit;

    lastdftime = getclock();
    numdataflow += 4;

    // static link vars and assignments (pascal)
    bvectminus(&varbits, &slvarbits);
    bvectminus(&asgnbits, &slasgnbits);

    node_s5 = graphhead;
    while (node_s5 != 0) {
        checkbvlist(&node_s5->bvs.stage1.u.precm.expoccur);
        if (curproc->has_trap) {
            minusminus(&node_s5->bvs.stage1.alters, &node_s5->bvs.stage1.u.cm.cand, &trapconstop);
            uintsectminus(&node_s5->bvs.stage1.antlocs, &node_s5->bvs.stage1.u.precm.expoccur, &node_s5->bvs.stage1.u.cm.cand, &trapconstop);
            uintsectminus(&node_s5->bvs.stage1.avlocs, &node_s5->bvs.stage1.u.precm.expoccur, &node_s5->bvs.stage1.u.cm.cand, &trapconstop);
        } else {
            bvectminus(&node_s5->bvs.stage1.alters, &node_s5->bvs.stage1.u.cm.cand);
            unionintsect(&node_s5->bvs.stage1.antlocs, &node_s5->bvs.stage1.u.precm.expoccur, &node_s5->bvs.stage1.u.cm.cand);
            unionintsect(&node_s5->bvs.stage1.avlocs, &node_s5->bvs.stage1.u.precm.expoccur, &node_s5->bvs.stage1.u.cm.cand);
        }
        bvectunion(&node_s5->bvs.stage1.u.precm.pavlocs, &node_s5->bvs.stage1.avlocs);
        unionminus(&node_s5->bvs.stage1.absalters, &node_s5->bvs.stage1.alters, &storeop);
        if (curproc->has_trap) {
            unionintsect(&node_s5->bvs.stage1.u.precm.pavlocs, &node_s5->bvs.stage1.u.precm.expoccur, &node_s5->bvs.stage1.u.cm.cand);
            bvectminus(&node_s5->bvs.stage1.absalters, &node_s5->bvs.stage1.u.cm.cand);
            initbv(&node_s5->bvs.stage1.u.precm.expoccur, (struct BitVectorBlock) {0});

            if (has_assert(node_s5, &sp1E4)) {
                if (node_s5->blockno == 0) {
                    phi_v1 = sp1E4->opc == Ufjp;
                } else if (sp1E4->u.jp.target_blockno == node_s5->blockno) {
                    phi_v1 = sp1E4->opc == Utjp;
                } else {
                    phi_v1 = sp1E4->opc == Ufjp;
                }

                if (sp1E4->u.jp.incre < 0) {
                    trapopc = Utple;
                } else if (sp1E4->u.jp.incre > 0) {
                    trapopc = Utpge;
                } else if (!phi_v1) {
                    switch (sp1E4->expr->data.isop.opc) {
                        case Ules:
                            trapopc = Utplt;
                            break;
                        case Uleq:
                            trapopc = Utple;
                            break;
                        case Ugrt:
                            trapopc = Utpgt;
                            break;
                        case Ugeq:
                            trapopc = Utpge;
                            break;

                        default:
                            caseerror(1, 289, "uoptcm.p", 8);
                            break;
                    }
                } else {
                    switch (sp1E4->expr->data.isop.opc) {
                        case Ules:
                            trapopc = Utpge;
                            break;

                        case Uleq:
                            trapopc = Utpgt;
                            break;

                        case Ugrt:
                            trapopc = Utple;
                            break;

                        case Ugeq:
                            trapopc = Utplt;
                            break;

                        default:
                            caseerror(1, 295, "uoptcm.p", 8);
                            break;
                    }
                }

                if (sp1E4->expr->data.isop.op2->type == isconst) {
                    sp1C0 = sp1E4->expr->data.isop.op2->data.isconst.number;

                    if (sp1E4->u.jp.incre > 1) {
                        sp1C0.intval = (sp1C0.intval - sp1E4->u.jp.incre) + 1;
                    } else if (sp1E4->u.jp.incre < -1) {
                        sp1C0.intval = (sp1C0.intval - sp1E4->u.jp.incre) - 1;
                    }

                    if (trapopc == Utple) {
                        sp1C0.intval += 1;
                        trapopc = Utplt;
                    } else if (trapopc == Utpgt) {
                        sp1C0.intval += 1;
                        trapopc = Utpge;
                    }
                    
                    hash = isopihash(trapopc, sp1E4->expr->ichain->isop.op1, NULL);
                    const_trap = true;
                } else {
                    hash = isopihash(trapopc, sp1E4->expr->ichain->isop.op1, sp1E4->expr->ichain->isop.op2);
                    const_trap = false;
                }

                trap_ichain = itable[hash];
                while (trap_ichain != NULL) {
                    if (trap_ichain->dtype == sp1E4->expr->datatype) {
                        if (const_trap) {
                            if (trap_implying(trapopc, sp1E4->expr->ichain->isop.op1, &sp1C0, trap_ichain)) {
                                setbit(&node_s5->bvs.stage1.u.precm.expoccur, trap_ichain->bitpos);
                            }
                        } else {
                            if (trap_implying_v(trapopc, sp1E4->expr->ichain->isop.op1, sp1E4->expr->ichain->isop.op2, trap_ichain)) {
                                setbit(&node_s5->bvs.stage1.u.precm.expoccur, trap_ichain->bitpos);
                            }
                        }
                    }
                    trap_ichain = trap_ichain->next;
                }
            }
        }

        checkbvlist(&node_s5->bvs.stage1.u.precm.avin);
        checkbvlist(&node_s5->bvs.stage1.u.precm.avout);

        if (node_s5->predecessors == NULL || node_s5->interprocedural_controlflow) {
            initbv(&node_s5->bvs.stage1.u.precm.avin, (struct BitVectorBlock) {0});
        } else {
            bvcopynot(&node_s5->bvs.stage1.u.precm.avin, &asgnbits);
            bvectminus(&node_s5->bvs.stage1.u.precm.avin, &varbits);
        }

        bvcopynot(&node_s5->bvs.stage1.u.precm.avout, &asgnbits);
        bvectminus(&node_s5->bvs.stage1.u.precm.avout, &varbits);

        bvcopynot(&node_s5->bvs.stage1.u.precm.antin, &asgnbits);
        bvectminus(&node_s5->bvs.stage1.u.precm.antin, &varbits);

        if (node_s5->successors == NULL) {
            initbv(&node_s5->bvs.stage1.u.precm.antout, (struct BitVectorBlock) {0});
        } else if (!node_s5->terminal) {
            if (node_s5->successors->next == NULL) {
                bvcopynot(&node_s5->bvs.stage1.u.precm.antout, &asgnbits);
                bvectminus(&node_s5->bvs.stage1.u.precm.antout, &varbits);
            } else {
                initbv(&node_s5->bvs.stage1.u.precm.antout, (struct BitVectorBlock) {0});
            }
        } else {
            bvcopynot(&node_s5->bvs.stage1.u.precm.antout, &asgnbits);
            bvectminus(&node_s5->bvs.stage1.u.precm.antout, &varbits);
        }

        bvectcopy(&node_s5->bvs.stage1.u.precm.pavin, &asgnbits);
        bvectunion(&node_s5->bvs.stage1.u.precm.pavin, &varbits);
        if (curproc->has_trap) {
            bvectunion(&node_s5->bvs.stage1.u.precm.pavin, &node_s5->bvs.stage1.u.precm.expoccur);
        }

        bvectcopy(&node_s5->bvs.stage1.u.precm.pavout, &node_s5->bvs.stage1.u.precm.pavlocs);
        if (docodehoist != 0) {
            bvectunion(&node_s5->bvs.stage1.u.precm.pavout, &node_s5->hoistedexp);
        }

        bvectunion(&node_s5->bvs.stage1.u.precm.pavout, &asgnbits);
        bvectunion(&node_s5->bvs.stage1.u.precm.pavout, &varbits);
        if (outofmem) {
            return;
        }

        node_s5 = node_s5->next;
    }

    savedexp.num_blocks = 0;
    savedexp.blocks = NULL;
    checkbvlist(&savedexp);
    if (!docm) {
        node_s5 = graphhead;
        while (node_s5 != NULL) {
            initbv(&node_s5->bvs.stage1.u.precm.pavlocs, (struct BitVectorBlock) {0});
            initbv(&node_s5->bvs.stage1.u.precm.avin, (struct BitVectorBlock)  {0});
            initbv(&node_s5->bvs.stage1.u.precm.pavin, (struct BitVectorBlock) {0});
            initbv(&node_s5->bvs.stage1.u.precm.avout, (struct BitVectorBlock) {0});
            initbv(&node_s5->bvs.stage1.u.precm.antin, (struct BitVectorBlock) {0});
            initbv(&node_s5->bvs.stage1.u.precm.antout, (struct BitVectorBlock) {0});
            initbv(&node_s5->bvs.stage1.u.precm.expoccur, (struct BitVectorBlock) {0});
            initbv(&node_s5->bvs.stage1.u.precm.pavout, (struct BitVectorBlock) {0});
            checkbvlist(&node_s5->bvs.stage1.u.precm.pavin);
            node_s5 = node_s5->next;
        }
        return;
    }

    do {
        dataflowiter += 1;
        changed = false;
        node_s5 = graphhead;
        while (node_s5 != NULL) {
            if (node_s5->predecessors != 0) {
                if (!changed) {
                    bvectcopy(&old, &node_s5->bvs.stage1.u.precm.avin);
                }

                pred = node_s5->predecessors;
                while (pred != NULL) {
                    bvectintsect(&node_s5->bvs.stage1.u.precm.avin, &pred->graphnode->bvs.stage1.u.precm.avout);
                    pred = pred->next;
                }

                if (curproc->has_trap) {
                    bvectunion(&node_s5->bvs.stage1.u.precm.avin, &node_s5->bvs.stage1.u.precm.expoccur);
                }

                if (!changed && !bvecteq(&old, &node_s5->bvs.stage1.u.precm.avin)) {
                    changed = true;
                }
            }
            if (!changed) {
                bvectcopy(&old, &node_s5->bvs.stage1.u.precm.avout);
            }
            bvectglop(&node_s5->bvs.stage1.u.precm.avout, &node_s5->bvs.stage1.u.precm.pavlocs, &node_s5->bvs.stage1.u.precm.avin, &node_s5->bvs.stage1.absalters);
            if (docodehoist != 0) {
                bvectunion(&node_s5->bvs.stage1.u.precm.avout, &node_s5->hoistedexp);
            }

            if (!changed && !bvecteq(&old, &node_s5->bvs.stage1.u.precm.avout)) {
                changed = true;
            }
            node_s5 = node_s5->next;
        }
    } while (changed);

    do {
        dataflowiter += 1;
        changed = false;
        node_s5 = graphtail;
        while (node_s5 != NULL) {
            if (node_s5->successors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node_s5->bvs.stage1.u.precm.antout);
                }

                succ = node_s5->successors;
                while (succ != NULL) {
                    bvectintsect(&node_s5->bvs.stage1.u.precm.antout, &succ->graphnode->bvs.stage1.u.precm.antin);
                    succ = succ->next;
                }

                if (!changed && !bvecteq(&old, &node_s5->bvs.stage1.u.precm.antout)) {
                    changed = true;
                }
            }

            if (!changed) {
                bvectcopy(&old, &node_s5->bvs.stage1.u.precm.antin);
            }

            bvectglop(&node_s5->bvs.stage1.u.precm.antin, &node_s5->bvs.stage1.antlocs, &node_s5->bvs.stage1.u.precm.antout, &node_s5->bvs.stage1.alters);

            if (!changed && !bvecteq(&old, &node_s5->bvs.stage1.u.precm.antin)) {
                changed = true;
            }
            
            node_s5 = node_s5->prev;
        }
    } while (changed);

    do {
        dataflowiter += 1;
        changed = false;
        node_s5 = graphhead;
        while (node_s5 != NULL) {
            if (node_s5->predecessors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node_s5->bvs.stage1.u.precm.pavin);
                }

                pred = node_s5->predecessors;
                while (pred != NULL) {
                    bvectunion(&node_s5->bvs.stage1.u.precm.pavin, &pred->graphnode->bvs.stage1.u.precm.pavout);
                    pred = pred->next;
                }

                if (!changed && !bvecteq(&old, &node_s5->bvs.stage1.u.precm.pavin)) {
                    changed = true;
                }
            }

            if (!changed) {
                bvectcopy(&old, &node_s5->bvs.stage1.u.precm.pavout);
            }

            unionminus(&node_s5->bvs.stage1.u.precm.pavout, &node_s5->bvs.stage1.u.precm.pavin, &node_s5->bvs.stage1.absalters);

            if (!changed && !bvecteq(&old, &node_s5->bvs.stage1.u.precm.pavout)) {
                changed = true;
            }
            
            node_s5 = node_s5->next;
        }
    } while (changed);

    if (dbugno == 25) {
        printprecm();
    }

    // End of precm

    node_s5 = graphhead;
    while (node_s5 != NULL) {
        if (!moremotion) {
            bvectintsect(&node_s5->bvs.stage1.u.precm.pavin, &node_s5->bvs.stage1.u.precm.antin);
        } else {
            bvectcopy(&node_s5->bvs.stage1.u.precm.pavin, &node_s5->bvs.stage1.u.precm.antin);
        }
        bvectminus(&node_s5->bvs.stage1.u.precm.pavin, &boolexp);

        if (lang == LANG_ADA && node_s5->blockno != 0) {
            stat = node_s5->stat_head;

            while (stat->opc != Ulab) {
                stat = stat->next;
            }
            if (stat->u.label.flags & 0xB2) {
                initbv(&node_s5->bvs.stage1.u.precm.pavin, (struct BitVectorBlock) {0});
            }
        }

        if (node_s5->predecessors == NULL || node_s5->interprocedural_controlflow) {
            initbv(&node_s5->bvs.stage1.u.cm.ppin, (struct BitVectorBlock) {0});
        } else {
            initbv(&node_s5->bvs.stage1.u.cm.ppin, (struct BitVectorBlock) {-1, -1, -1, -1});
            bvcopynot(&node_s5->bvs.stage1.u.cm.ppin, &asgnbits);
            bvectminus(&node_s5->bvs.stage1.u.cm.ppin, &varbits);
        }

        if (node_s5->successors == NULL) {
            initbv(&node_s5->bvs.stage1.u.cm.ppout, (struct BitVectorBlock) {0});
        } else if (!node_s5->terminal) {
            if (node_s5->successors->next == NULL) {
                initbv(&node_s5->bvs.stage1.u.cm.ppout, (struct BitVectorBlock) {-1, -1, -1, -1});
                bvcopynot(&node_s5->bvs.stage1.u.cm.ppout, &asgnbits);
                bvectminus(&node_s5->bvs.stage1.u.cm.ppout, &varbits);
            } else {
                initbv(&node_s5->bvs.stage1.u.cm.ppout, (struct BitVectorBlock) {0});
            }
        } else {
            initbv(&node_s5->bvs.stage1.u.cm.ppout, (struct BitVectorBlock) {-1, -1, -1, -1});
            bvcopynot(&node_s5->bvs.stage1.u.cm.ppout, &asgnbits);
            bvectminus(&node_s5->bvs.stage1.u.cm.ppout, &varbits);
        }

        node_s5 = node_s5->next;
    }

    do {
        dataflowiter += 1;
        node_s5 = graphtail;
        changed = false;
        while (node_s5 != NULL) {
            if (node_s5->successors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node_s5->bvs.stage1.u.cm.ppout);
                }

                succ = node_s5->successors;
                while (succ != NULL) {
                    bvectintsect(&node_s5->bvs.stage1.u.cm.ppout, &succ->graphnode->bvs.stage1.u.cm.ppin);
                    succ = succ->next;
                }

                if (!changed && !bvecteq(&old, &node_s5->bvs.stage1.u.cm.ppout)) {
                    changed = true;
                }
            }

            if (node_s5->predecessors != NULL) {
                pred = node_s5->predecessors;
                if (!node_s5->interprocedural_controlflow) {
                    if (!changed) {
                        bvectcopy(&old, &node_s5->bvs.stage1.u.cm.ppin);
                    }
                    bvectpp1(&node_s5->bvs.stage1.u.cm.ppin, &node_s5->bvs.stage1.u.precm.pavin, &node_s5->bvs.stage1.antlocs, &node_s5->bvs.stage1.alters, &node_s5->bvs.stage1.u.cm.ppout);
                    while (pred != NULL) {
                        bvectpp2(&node_s5->bvs.stage1.u.cm.ppin, &pred->graphnode->bvs.stage1.u.cm.ppout, &pred->graphnode->bvs.stage1.u.precm.avout);
                        pred = pred->next;
                    }

                    if (!changed && !bvecteq(&old, &node_s5->bvs.stage1.u.cm.ppin)) {
                        changed = true;
                    }
                }
            }
            node_s5 = node_s5->prev;
        }
    } while (changed);

    dataflowtime = (dataflowtime + getclock()) - lastdftime;
    node_s5 = graphhead;
    while (node_s5 != NULL) {
        bvectinsert(&node_s5->bvs.stage1.u.cm.insert, &node_s5->bvs.stage1.u.cm.ppout, &node_s5->bvs.stage1.u.precm.avout, &node_s5->bvs.stage1.u.cm.ppin, &node_s5->bvs.stage1.alters);
        if (docodehoist) {
            bvectunion(&node_s5->bvs.stage1.u.cm.insert, &node_s5->hoistedexp);
        }

        if (curproc->has_trap) {
            block = 0;
            i = 0;
            while (i < bitposcount) {
                if (BVBLOCKEMPTY(node_s5->bvs.stage1.u.cm.insert, block)) {
                    i += 0x80;
                } else {
                    bit = 0;
                    while (i < bitposcount && bit < 0x80) {
                        if (BVINBLOCK(bit, block, node_s5->bvs.stage1.u.cm.insert) && bvectin(i, &trapconstop)) {
                            trap_ichain = bittab[i].ichain;
                            ichain = itable[trap_ichain->table_index];

                            while (ichain != NULL) {
                                if (trap_imply(trap_ichain, ichain)) {
                                    resetbit(&node_s5->bvs.stage1.u.cm.insert, ichain->bitpos);
                                }
                                ichain = ichain->next;
                            }
                        }
                        i++;
                        bit++;
                    }
                }
                block++;
            }
        }

        bvectunion(&node_s5->bvs.stage1.u.cm.ppout, &node_s5->bvs.stage1.u.precm.avout);

        initbv(&node_s5->bvs.stage1.u.cm.subinsert, (struct BitVectorBlock) {0});
        block = 0;
        i = 0;
        while (i < bitposcount) {
            if (BVBLOCKEMPTY(node_s5->bvs.stage1.u.cm.insert, block)) {
                i += 0x80;
            } else {
                bit = 0;
                while (i < bitposcount && bit < 0x80) {
                    if (BVINBLOCK(bit, block, node_s5->bvs.stage1.u.cm.insert)) {
                        insertichain = bittab[i].ichain;
                        if (insertichain->type == isilda) {
                            setsubinsert(insertichain->islda_isilda.outer_stack_ichain, node_s5);
                        } else if (insertichain->type == issvar) {
                            setsubinsert(insertichain->isvar_issvar.outer_stack_ichain, node_s5);
                        } else if (insertichain->type != isop) {
                            dbgerror(0x2BE);
                        } else if (insertichain->isop.opc == Ustr) {
                            setsubinsert(insertichain->isop.op2, node_s5);
                        }
                        else if (insertichain->isop.opc == Uisst) {
                            setsubinsert(insertichain->isop.op1->isvar_issvar.outer_stack_ichain, node_s5);
                            setsubinsert(insertichain->isop.op2, node_s5);
                        } else if (insertichain->isop.opc == Uistr ||
                                insertichain->isop.opc == Uistv ||
                                insertichain->isop.opc == Umov  ||
                                insertichain->isop.opc == Umovv ||
                                insertichain->isop.opc == Utpeq ||
                                insertichain->isop.opc == Utpge ||
                                insertichain->isop.opc == Utpgt ||
                                insertichain->isop.opc == Utple ||
                                insertichain->isop.opc == Utplt ||
                                insertichain->isop.opc == Utpne ||
                                insertichain->isop.opc == Uirst ||
                                insertichain->isop.opc == Uirsv) {
                            setsubinsert(insertichain->isop.op1, node_s5);
                            setsubinsert(insertichain->isop.op2, node_s5);
                        } else if (optab[insertichain->isop.opc].is_binary_op) {
                            setsubinsert(insertichain->isop.op1, node_s5);
                            setsubinsert(insertichain->isop.op2, node_s5);
                        } else if (insertichain->isop.opc != Ucg1) {
                            setsubinsert(insertichain->isop.op1, node_s5);
                        }
                        numinsert += 1;
                    }
                    i++;
                    bit++;
                }
            }

            block++;
        }
        bvectunion(&savedexp, &node_s5->bvs.stage1.u.cm.subinsert);
        node_s5 = node_s5->next;
    }

    if (outofmem) {
        return;
    }

    node_s5 = graphhead;
    while (node_s5 != NULL) {
        bvectunion(&node_s5->bvs.stage1.u.cm.ppin, &node_s5->bvs.stage1.u.cm.subdelete);
        bvectcopy(&node_s5->bvs.stage1.u.cm.delete, &node_s5->bvs.stage1.u.cm.ppin);
        bvectminus(&node_s5->bvs.stage1.u.cm.delete, &boolexp);
        bvectintsect(&node_s5->bvs.stage1.u.cm.delete, &node_s5->bvs.stage1.antlocs);

        initbv(&node_s5->bvs.stage1.u.cm.subdelete, (struct BitVectorBlock) {0});
        bvectcopy(&node_s5->bvs.stage1.u.cm.subdelete, &node_s5->bvs.stage1.u.cm.delete);
        bvectminus(&node_s5->bvs.stage1.u.cm.subdelete, &storeop);
        bvectminus(&node_s5->bvs.stage1.u.cm.subdelete, &trapop);

        stat = node_s5->stat_head;
        done = 0;
        while (!done && stat != NULL) {
            if (stat->opc == Uisst || stat->opc == Ustr) {
                if (!stat->outpar) {
                    if (stat->u.store.ichain == NULL) {
                        resetsubdelete(stat->expr->data.isvar_issvar.assigned_value, node_s5);
                    } else if (!bvectin(stat->u.store.ichain->bitpos, &node_s5->bvs.stage1.u.cm.delete) || !stat->u.store.unk1E) {
                        resetsubdelete(stat->expr->data.isvar_issvar.assigned_value, node_s5);
                    }

                    if (stat->opc == Uisst) {
                        resetsubdelete(stat->expr->data.isvar_issvar.outer_stack, node_s5);
                    }

                    if (stat->is_increment) {
                        delete_unmoved_recur(stat, node_s5);
                    }
                }
            } else if (stat->opc == Uistr ||
                       stat->opc == Uistv ||
                       stat->opc == Umov ||
                       stat->opc == Umovv ||
                       stat->opc == Uirst ||
                       stat->opc == Uirsv) {
                if (stat->u.store.ichain == NULL) {
                    resetsubdelete(stat->expr, node_s5);
                    resetsubdelete(stat->u.store.expr, node_s5);
                } else if (!bvectin(stat->u.store.ichain->bitpos, &node_s5->bvs.stage1.u.cm.delete) || !stat->u.store.unk1E) {
                    resetsubdelete(stat->expr, node_s5);
                    resetsubdelete(stat->u.store.expr, node_s5);
                }
            } else if (stat->opc == Uchkt ||
                       stat->opc == Utpeq ||
                       stat->opc == Utpge ||
                       stat->opc == Utpgt ||
                       stat->opc == Utple ||
                       stat->opc == Utplt ||
                       stat->opc == Utpne) {
                if (bvectin(stat->u.store.ichain->bitpos, &node_s5->bvs.stage1.u.cm.delete) == 0) {
                    resetsubdelete(stat->expr, node_s5);
                    if (stat->opc != Uchkt) {
                        resetsubdelete(stat->u.trap.expr2, node_s5);
                    }
                }
            } else if (stat->opc != Uaent &&
                       stat->opc != Ubgnb &&
                       stat->opc != Ucia &&
                       stat->opc != Uclab &&
                       stat->opc != Uclbd &&
                       stat->opc != Uctrl &&
                       stat->opc != Ucubd &&
                       stat->opc != Ucup &&
                       stat->opc != Udef &&
                       stat->opc != Udup &&
                       stat->opc != Uendb &&
                       stat->opc != Uicuf &&
                       stat->opc != Ulab &&
                       stat->opc != Ulbdy &&
                       stat->opc != Ulbgn &&
                       stat->opc != Ulend &&
                       stat->opc != Uloc &&
                       stat->opc != Ultrm &&
                       stat->opc != Umst &&
                       stat->opc != Unop &&
                       stat->opc != Uret &&
                       stat->opc != Ustep &&
                       stat->opc != Uujp &&
                       stat->opc != Uxpar) {
                resetsubdelete(stat->expr, node_s5);
            }

            if (stat->next != NULL) {
                done = stat->next->graphnode != stat->graphnode;
            }
            stat = stat->next;
        }
        unionminus(&savedexp, &node_s5->bvs.stage1.u.cm.delete, &node_s5->bvs.stage1.u.cm.subdelete);
        node_s5 = node_s5->next;
    }
}
