#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptions.h"
#include "uoptutil.h"
#include "uoptdata.h"
#include "bitvector.h"
#include "uoptcm.h"
#include "uoptscm.h"
#include "uoptdbg.h"
#include "uoptitab.h"

#include "debug.h"

/*
0040F8D0 resetsubdelete
00410098 delete_unmoved_recur
00410204 codemotion
*/
void resetsubdelete(struct Expression *expr, struct Graphnode *node) {
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
                         expr->data.islda_isilda.outer_stack->initialVal ||
                         bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                    resetbit(&node->bvs.stage1.u.cm.subdelete, expr->ichain->bitpos);
                } else {
                    resetsubdelete(expr->data.islda_isilda.outer_stack, node);
                }
                break;

            case issvar:
                if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) && (expr->initialVal || bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                    resetbit(&node->bvs.stage1.u.cm.subdelete, expr->ichain->bitpos);
                } else {
                    resetsubdelete(expr->data.isvar_issvar.outer_stack, node);
                }
                break;

            case isop:
                if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) && (expr->data.isop.anticipated || bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                    resetbit(&node->bvs.stage1.u.cm.subdelete, expr->ichain->bitpos);
                } else {
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
        assertion = false;
        if ((pred->graphnode->stat_tail->opc == Ufjp || pred->graphnode->stat_tail->opc == Utjp) &&
                pred->graphnode->successors->next != NULL) {
            *stat = pred->graphnode->stat_tail;
            assertion = pred->graphnode->stat_tail->expr->type == isop &&
                (pred->graphnode->stat_tail->expr->data.isop.opc == Ugeq ||
                 pred->graphnode->stat_tail->expr->data.isop.opc == Ugrt ||
                 pred->graphnode->stat_tail->expr->data.isop.opc == Uleq ||
                 pred->graphnode->stat_tail->expr->data.isop.opc == Ules);
        }
        return assertion;
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
    recur = stat->u.store.u.str.unk30; // always NULL in oot
    while (recur != NULL) {
        if (bvectin(recur->ichain->bitpos, &node->bvs.stage1.u.cm.ppin)) {
            if (bvectin(recur->ichain->bitpos, &node->bvs.stage1.u.cm.ppout)) {
                inpath = true;
            } else {
                inpath = inpathafter(recur->ichain, stat);
            }
        } else if (bvectin(recur->ichain->bitpos, &node->bvs.stage1.u.cm.ppout)) {
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
    struct Statement *assert_jump;
    union Constant sp1C0;
    Uopcode trapopc; // sp1BB
    struct Graphnode *node;
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

    // for each node, initialize avin, avout, antin, antout, pavin, pavout
    
    for (node = graphhead; node != NULL; node = node->next) {
        checkbvlist(&node->bvs.stage1.u.precm.expoccur);

        // update data flow attributes with strength reduction candidate information:
        //
        // ALTERS  -= CAND
        // ANTLOCS |= EXPOCCUR & CAND
        // AVLOCS  |= EXPOCCUR & CAND
        //
        // this allows candidate expressions to be moved across blocks
        if (curproc->has_trap) {
            minusminus(&node->bvs.stage1.alters, &node->bvs.stage1.u.cm.cand, &trapconstop);
            uintsectminus(&node->bvs.stage1.antlocs, &node->bvs.stage1.u.precm.expoccur, &node->bvs.stage1.u.cm.cand, &trapconstop);
            uintsectminus(&node->bvs.stage1.avlocs, &node->bvs.stage1.u.precm.expoccur, &node->bvs.stage1.u.cm.cand, &trapconstop);
        } else {
            bvectminus(&node->bvs.stage1.alters, &node->bvs.stage1.u.cm.cand);
            unionintsect(&node->bvs.stage1.antlocs, &node->bvs.stage1.u.precm.expoccur, &node->bvs.stage1.u.cm.cand);
            unionintsect(&node->bvs.stage1.avlocs, &node->bvs.stage1.u.precm.expoccur, &node->bvs.stage1.u.cm.cand);
        }

        bvectunion(&node->bvs.stage1.u.precm.pavlocs, &node->bvs.stage1.avlocs);
        unionminus(&node->bvs.stage1.absalters, &node->bvs.stage1.alters, &storeop);

        // never true in C
        if (curproc->has_trap) {
            unionintsect(&node->bvs.stage1.u.precm.pavlocs, &node->bvs.stage1.u.precm.expoccur, &node->bvs.stage1.u.cm.cand);
            bvectminus(&node->bvs.stage1.absalters, &node->bvs.stage1.u.cm.cand);
            initbv(&node->bvs.stage1.u.precm.expoccur, (struct BitVectorBlock) {0});

            if (has_assert(node, &assert_jump)) {
                if (node->blockno == 0) {
                    phi_v1 = assert_jump->opc == Ufjp;
                } else if (assert_jump->u.jp.target_blockno == node->blockno) {
                    phi_v1 = assert_jump->opc == Utjp;
                } else {
                    phi_v1 = assert_jump->opc == Ufjp;
                }

                if (assert_jump->u.jp.incre < 0) {
                    trapopc = Utple;
                } else if (assert_jump->u.jp.incre > 0) {
                    trapopc = Utpge;
                } else if (!phi_v1) {
                    switch (assert_jump->expr->data.isop.opc) {
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
                    switch (assert_jump->expr->data.isop.opc) {
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

                if (assert_jump->expr->data.isop.op2->type == isconst) {
                    sp1C0 = assert_jump->expr->data.isop.op2->data.isconst.number;

                    if (assert_jump->u.jp.incre > 1) {
                        sp1C0.intval = (sp1C0.intval - assert_jump->u.jp.incre) + 1;
                    } else if (assert_jump->u.jp.incre < -1) {
                        sp1C0.intval = (sp1C0.intval - assert_jump->u.jp.incre) - 1;
                    }

                    if (trapopc == Utple) {
                        sp1C0.intval += 1;
                        trapopc = Utplt;
                    } else if (trapopc == Utpgt) {
                        sp1C0.intval += 1;
                        trapopc = Utpge;
                    }
                    
                    hash = isopihash(trapopc, assert_jump->expr->ichain->isop.op1, NULL);
                    const_trap = true;
                } else {
                    hash = isopihash(trapopc, assert_jump->expr->ichain->isop.op1, assert_jump->expr->ichain->isop.op2);
                    const_trap = false;
                }

                trap_ichain = itable[hash];
                while (trap_ichain != NULL) {
                    if (trap_ichain->dtype == assert_jump->expr->datatype) {
                        if (const_trap) {
                            if (trap_implying(trapopc, assert_jump->expr->ichain->isop.op1, &sp1C0, trap_ichain)) {
                                setbit(&node->bvs.stage1.u.precm.expoccur, trap_ichain->bitpos);
                            }
                        } else {
                            if (trap_implying_v(trapopc, assert_jump->expr->ichain->isop.op1, assert_jump->expr->ichain->isop.op2, trap_ichain)) {
                                setbit(&node->bvs.stage1.u.precm.expoccur, trap_ichain->bitpos);
                            }
                        }
                    }
                    trap_ichain = trap_ichain->next;
                }
            }
        }

        checkbvlist(&node->bvs.stage1.u.precm.avin);
        checkbvlist(&node->bvs.stage1.u.precm.avout);

        if (node->predecessors == NULL || node->interprocedural_controlflow) {
            initbv(&node->bvs.stage1.u.precm.avin, (struct BitVectorBlock) {0});
        } else {
            bvcopynot(&node->bvs.stage1.u.precm.avin, &asgnbits);
            bvectminus(&node->bvs.stage1.u.precm.avin, &varbits);
        }

        bvcopynot(&node->bvs.stage1.u.precm.avout, &asgnbits);
        bvectminus(&node->bvs.stage1.u.precm.avout, &varbits);

        bvcopynot(&node->bvs.stage1.u.precm.antin, &asgnbits);
        bvectminus(&node->bvs.stage1.u.precm.antin, &varbits);

        if (node->successors == NULL) {
            initbv(&node->bvs.stage1.u.precm.antout, (struct BitVectorBlock) {0});
        } else if (!node->terminal) {
            if (node->successors->next == NULL) {
                bvcopynot(&node->bvs.stage1.u.precm.antout, &asgnbits);
                bvectminus(&node->bvs.stage1.u.precm.antout, &varbits);
            } else {
                initbv(&node->bvs.stage1.u.precm.antout, (struct BitVectorBlock) {0});
            }
        } else {
            bvcopynot(&node->bvs.stage1.u.precm.antout, &asgnbits);
            bvectminus(&node->bvs.stage1.u.precm.antout, &varbits);
        }

        bvectcopy(&node->bvs.stage1.u.precm.pavin, &asgnbits);
        bvectunion(&node->bvs.stage1.u.precm.pavin, &varbits);
        if (curproc->has_trap) {
            bvectunion(&node->bvs.stage1.u.precm.pavin, &node->bvs.stage1.u.precm.expoccur);
        }

        bvectcopy(&node->bvs.stage1.u.precm.pavout, &node->bvs.stage1.u.precm.pavlocs);
        if (docodehoist) {
            bvectunion(&node->bvs.stage1.u.precm.pavout, &node->hoistedexp);
        }
        bvectunion(&node->bvs.stage1.u.precm.pavout, &asgnbits);
        bvectunion(&node->bvs.stage1.u.precm.pavout, &varbits);
        if (outofmem) {
            return;
        }
    }

    savedexp.num_blocks = 0;
    savedexp.blocks = NULL;
    checkbvlist(&savedexp);
    if (!docm) {
        for (node = graphhead; node != NULL; node = node->next) {
            initbv(&node->bvs.stage1.u.precm.pavlocs, (struct BitVectorBlock) {0});
            initbv(&node->bvs.stage1.u.precm.avin, (struct BitVectorBlock)  {0});
            initbv(&node->bvs.stage1.u.precm.pavin, (struct BitVectorBlock) {0});
            initbv(&node->bvs.stage1.u.precm.avout, (struct BitVectorBlock) {0});
            initbv(&node->bvs.stage1.u.precm.antin, (struct BitVectorBlock) {0});
            initbv(&node->bvs.stage1.u.precm.antout, (struct BitVectorBlock) {0});
            initbv(&node->bvs.stage1.u.precm.expoccur, (struct BitVectorBlock) {0});
            initbv(&node->bvs.stage1.u.precm.pavout, (struct BitVectorBlock) {0});
            checkbvlist(&node->bvs.stage1.u.precm.pavin);
        }
        return;
    }

    /* Compute global availability of expressions.
     *
     * An expression is available at a point if every path leading to that point contains the expression.
     * In other words the expression doesn't need to be recomputed since it was computed earlier, and the value hasn't changed.
     */
    do {
        dataflowiter += 1;
        changed = false;
        for (node = graphhead; node != NULL; node = node->next) {
            // update AVIN
            if (node->predecessors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.precm.avin);
                }

                // expression is AVIN if it is AVOUT in every predecessor
                for (pred = node->predecessors; pred != NULL; pred = pred->next) {
                    bvectintsect(&node->bvs.stage1.u.precm.avin, &pred->graphnode->bvs.stage1.u.precm.avout);
                }

                if (curproc->has_trap) {
                    bvectunion(&node->bvs.stage1.u.precm.avin, &node->bvs.stage1.u.precm.expoccur);
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.avin)) {
                    changed = true;
                }
            }

            // update AVOUT
            if (!changed) {
                bvectcopy(&old, &node->bvs.stage1.u.precm.avout);
            }

            // avout = pavlocs | (avin & ~absalters)
            // 
            // The expression is already locally available, (pavlocs)
            // or it's available going into the the block (avin), and the block doesn't change the value (~abslaters)
            bvectglop(&node->bvs.stage1.u.precm.avout, &node->bvs.stage1.u.precm.pavlocs, &node->bvs.stage1.u.precm.avin, &node->bvs.stage1.absalters);
            if (docodehoist) {
                bvectunion(&node->bvs.stage1.u.precm.avout, &node->hoistedexp);
            }

            if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.avout)) {
                changed = true;
            }
        }
    } while (changed);

    /* Global anticipatability
     *
     * An expression is anticipated at a point if every path leading out from that point contains the expression.
     * In other words the expression is precomputed at this point.
     *
     * Note that anticipatability implies backwards code motion, while availability does not.
     * This means ALTERED must be used instead of ABSALTERED, because ALTERED is more strictly applied to assignments.
     */
    do {
        dataflowiter += 1;
        changed = false;
        for (node = graphtail; node != NULL; node = node->prev) {
            // update ANTOUT
            if (node->successors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.precm.antout);
                }

                // expression is ANTOUT if it is ANTIN in every successor
                for (succ = node->successors; succ != NULL; succ = succ->next) {
                    bvectintsect(&node->bvs.stage1.u.precm.antout, &succ->graphnode->bvs.stage1.u.precm.antin);
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.antout)) {
                    changed = true;
                }
            }

            // update ANTIN
            if (!changed) {
                bvectcopy(&old, &node->bvs.stage1.u.precm.antin);
            }

            // antin = antlocs | (antout & ~alters)
            //
            // The expression is already locally anticipated, (antlocs)
            // or it's anticipated at the exit (antout) and not altered in this block (~alters)
            bvectglop(&node->bvs.stage1.u.precm.antin, &node->bvs.stage1.antlocs, &node->bvs.stage1.u.precm.antout, &node->bvs.stage1.alters);

            if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.antin)) {
                changed = true;
            }
        }
    } while (changed);

    /* Partial availability
     *
     * Same as availability, but only one path leading to the point needs to have the expression.
     */
    do {
        dataflowiter += 1;
        changed = false;
        for (node = graphhead; node != NULL; node = node->next) {
            if (node->predecessors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.precm.pavin);
                }

                // note union instead of intsect
                for (pred = node->predecessors; pred != NULL; pred = pred->next) {
                    bvectunion(&node->bvs.stage1.u.precm.pavin, &pred->graphnode->bvs.stage1.u.precm.pavout);
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.pavin)) {
                    changed = true;
                }
            }

            if (!changed) {
                bvectcopy(&old, &node->bvs.stage1.u.precm.pavout);
            }

            // note pavout is already initialized to pavlocs.
            // pavout |= pavin & ~absalters
            //
            // pavout accumulates pavin, but this is fine because pavin doesn't fluctuate
            unionminus(&node->bvs.stage1.u.precm.pavout, &node->bvs.stage1.u.precm.pavin, &node->bvs.stage1.absalters);

            if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.pavout)) {
                changed = true;
            }
        }
    } while (changed);

    if (dbugno == 25) {
        printprecm();
    }

#ifdef UOPT_DEBUG
    cmtrace_trace_all_precm();
#endif
    
    // End of precm
    for (node = graphhead; node != NULL; node = node->next) {
        if (!moremotion) {
            // note insert overlaps with precm.pavin, but this is still pavin since pavin is part of ppin's definition later
            // pavin & antin
            bvectintsect(&node->bvs.stage1.u.precm.pavin, &node->bvs.stage1.u.precm.antin);
        } else {
            bvectcopy(&node->bvs.stage1.u.precm.pavin, &node->bvs.stage1.u.precm.antin);
        }
        bvectminus(&node->bvs.stage1.u.precm.pavin, &boolexp);

        if (lang == LANG_ADA && node->blockno != 0) {
            stat = node->stat_head;
            while (stat->opc != Ulab) {
                stat = stat->next;
            }
            if (stat->u.label.flags & 0xB2) {
                initbv(&node->bvs.stage1.u.precm.pavin, (struct BitVectorBlock) {0});
            }
        }

        if (node->predecessors == NULL || node->interprocedural_controlflow) {
            initbv(&node->bvs.stage1.u.cm.ppin, (struct BitVectorBlock) {0});
        } else {
            initbv(&node->bvs.stage1.u.cm.ppin, (struct BitVectorBlock) {{-1, -1, -1, -1}});
            bvcopynot(&node->bvs.stage1.u.cm.ppin, &asgnbits);
            bvectminus(&node->bvs.stage1.u.cm.ppin, &varbits);
        }

        if (node->successors == NULL) {
            initbv(&node->bvs.stage1.u.cm.ppout, (struct BitVectorBlock) {0});
        } else if (!node->terminal) {
            if (node->successors->next == NULL) {
                initbv(&node->bvs.stage1.u.cm.ppout, (struct BitVectorBlock) {{-1, -1, -1, -1}});
                bvcopynot(&node->bvs.stage1.u.cm.ppout, &asgnbits);
                bvectminus(&node->bvs.stage1.u.cm.ppout, &varbits);
            } else {
                initbv(&node->bvs.stage1.u.cm.ppout, (struct BitVectorBlock) {0});
            }
        } else {
            initbv(&node->bvs.stage1.u.cm.ppout, (struct BitVectorBlock) {{-1, -1, -1, -1}});
            bvcopynot(&node->bvs.stage1.u.cm.ppout, &asgnbits);
            bvectminus(&node->bvs.stage1.u.cm.ppout, &varbits);
        }
    }

    /* Placement Possible:
     *
     * Expression is PP if it is anticipated, and inserting at this point would make later instances of the expression redundant.
     */
    do {
        dataflowiter += 1;
        changed = false;
        for (node = graphtail; node != NULL; node = node->prev) {
            if (node->successors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.cm.ppout);
                }

                for (succ = node->successors; succ != NULL; succ = succ->next) {
                    bvectintsect(&node->bvs.stage1.u.cm.ppout, &succ->graphnode->bvs.stage1.u.cm.ppin);
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.cm.ppout)) {
                    changed = true;
                }
            }

            if (node->predecessors != NULL) {
                if (!node->interprocedural_controlflow) {
                    if (!changed) {
                        bvectcopy(&old, &node->bvs.stage1.u.cm.ppin);
                    }
                    // ppin = (pavin & antin) & (antlocs | (~alters & ppout))
                    //
                    // note pavin was intersected with antin earlier
                    bvectpp1(&node->bvs.stage1.u.cm.ppin, &node->bvs.stage1.u.precm.pavin, &node->bvs.stage1.antlocs, &node->bvs.stage1.alters, &node->bvs.stage1.u.cm.ppout);
                    
                    // expressions are also ppout if they are avout
                    for (pred = node->predecessors; pred != NULL; pred = pred->next) {
                        // ppin = ppin & pred->(ppout | avout)
                        bvectpp2(&node->bvs.stage1.u.cm.ppin, &pred->graphnode->bvs.stage1.u.cm.ppout, &pred->graphnode->bvs.stage1.u.precm.avout);
                    }

                    if (!changed && !bvecteq(&old, &node->bvs.stage1.u.cm.ppin)) {
                        changed = true;
                    }
                }
            }
        }
    } while (changed);

    dataflowtime = (dataflowtime + getclock()) - lastdftime;
    for (node = graphhead; node != NULL; node = node->next) {
        // insert = ppout & ~avout & (~ppin | alters)
        bvectinsert(&node->bvs.stage1.u.cm.insert, &node->bvs.stage1.u.cm.ppout, &node->bvs.stage1.u.precm.avout, &node->bvs.stage1.u.cm.ppin, &node->bvs.stage1.alters);
        if (docodehoist) {
            bvectunion(&node->bvs.stage1.u.cm.insert, &node->hoistedexp);
        }

        if (curproc->has_trap) {
            block = 0;
            i = 0;
            while (i < bitposcount) {
                if (BVBLOCKEMPTY(node->bvs.stage1.u.cm.insert, block)) {
                    i += 0x80;
                } else {
                    bit = 0;
                    while (i < bitposcount && bit < 0x80) {
                        if (BVINBLOCK(bit, block, node->bvs.stage1.u.cm.insert) && bvectin(i, &trapconstop)) {
                            trap_ichain = bittab[i].ichain;
                            ichain = itable[trap_ichain->table_index];

                            while (ichain != NULL) {
                                if (trap_imply(trap_ichain, ichain)) {
                                    resetbit(&node->bvs.stage1.u.cm.insert, ichain->bitpos);
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

        // expressions are also PPOUT if they are AVOUT
        bvectunion(&node->bvs.stage1.u.cm.ppout, &node->bvs.stage1.u.precm.avout);

        // subinsert: expressions that are not in INSERT, but are nested in a larger expression that is in INSERT.
        // the subexpressions are already available, and don't need to be recomputed at the insertion
        initbv(&node->bvs.stage1.u.cm.subinsert, (struct BitVectorBlock) {0});
        block = 0;
        i = 0;
        while (i < bitposcount) {
            if (BVBLOCKEMPTY(node->bvs.stage1.u.cm.insert, block)) {
                i += 0x80;
            } else {
                bit = 0;
                while (i < bitposcount && bit < 0x80) {
                    if (BVINBLOCK(bit, block, node->bvs.stage1.u.cm.insert)) {
                        insertichain = bittab[i].ichain;
                        if (insertichain->type == isilda) {
                            setsubinsert(insertichain->islda_isilda.outer_stack_ichain, node);
                        } else if (insertichain->type == issvar) {
                            setsubinsert(insertichain->isvar_issvar.outer_stack_ichain, node);
                        } else if (insertichain->type != isop) {
                            dbgerror(0x2BE);
                        } else if (insertichain->isop.opc == Ustr) {
                            setsubinsert(insertichain->isop.op2, node);
                        } else if (insertichain->isop.opc == Uisst) {
                            setsubinsert(insertichain->isop.op1->isvar_issvar.outer_stack_ichain, node);
                            setsubinsert(insertichain->isop.op2, node);
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
                            setsubinsert(insertichain->isop.op1, node);
                            setsubinsert(insertichain->isop.op2, node);
                        } else if (optab[insertichain->isop.opc].is_binary_op) {
                            setsubinsert(insertichain->isop.op1, node);
                            setsubinsert(insertichain->isop.op2, node);
                        } else if (insertichain->isop.opc != Ucg1) {
                            setsubinsert(insertichain->isop.op1, node);
                        }
                        numinsert += 1;
                    }
                    i++;
                    bit++;
                }
            }

            block++;
        }
        bvectunion(&savedexp, &node->bvs.stage1.u.cm.subinsert);
    }

    if (outofmem) {
        return;
    }

    for (node = graphhead; node != NULL; node = node->next) {
        // expressions are also PPIN if they are AVIN
        bvectunion(&node->bvs.stage1.u.cm.ppin, &node->bvs.stage1.u.precm.avin);

        // delete = ppin & antlocs
        bvectcopy(&node->bvs.stage1.u.cm.delete, &node->bvs.stage1.u.cm.ppin);
        bvectminus(&node->bvs.stage1.u.cm.delete, &boolexp);
        bvectintsect(&node->bvs.stage1.u.cm.delete, &node->bvs.stage1.antlocs);

        // subdelete: expressions that are DELETE and only appear nested inside a larger expression that is also DELETE.
        // Only the value of the outermost expression needs to be saved, so subexpressions need to be marked to indicate
        // that they aren't used in this block
        initbv(&node->bvs.stage1.u.cm.subdelete, (struct BitVectorBlock) {0});
        bvectcopy(&node->bvs.stage1.u.cm.subdelete, &node->bvs.stage1.u.cm.delete);
        bvectminus(&node->bvs.stage1.u.cm.subdelete, &storeop);
        bvectminus(&node->bvs.stage1.u.cm.subdelete, &trapop);

        stat = node->stat_head;
        done = false;
        while (!done && stat != NULL) {
            if (stat->opc == Uisst || stat->opc == Ustr) {
                if (!stat->outpar) {
                    if (stat->u.store.ichain == NULL) {
                        resetsubdelete(stat->expr->data.isvar_issvar.assigned_value, node);
                    } else if (!bvectin(stat->u.store.ichain->bitpos, &node->bvs.stage1.u.cm.delete) || !stat->u.store.store_ant) {
                        resetsubdelete(stat->expr->data.isvar_issvar.assigned_value, node);
                    }

                    if (stat->opc == Uisst) {
                        resetsubdelete(stat->expr->data.isvar_issvar.outer_stack, node);
                    }

                    if (stat->is_increment) {
                        delete_unmoved_recur(stat, node);
                    }
                }
            } else if (stat->opc == Uistr ||
                       stat->opc == Uistv ||
                       stat->opc == Umov ||
                       stat->opc == Umovv ||
                       stat->opc == Uirst ||
                       stat->opc == Uirsv) {
                if (stat->u.store.ichain == NULL) {
                    resetsubdelete(stat->expr, node);
                    resetsubdelete(stat->u.store.expr, node);
                } else if (!bvectin(stat->u.store.ichain->bitpos, &node->bvs.stage1.u.cm.delete) || !stat->u.store.store_ant) {
                    resetsubdelete(stat->expr, node);
                    resetsubdelete(stat->u.store.expr, node);
                }
            } else if (stat->opc == Uchkt ||
                       stat->opc == Utpeq ||
                       stat->opc == Utpge ||
                       stat->opc == Utpgt ||
                       stat->opc == Utple ||
                       stat->opc == Utplt ||
                       stat->opc == Utpne) {
                if (!bvectin(stat->u.store.ichain->bitpos, &node->bvs.stage1.u.cm.delete)) {
                    resetsubdelete(stat->expr, node);
                    if (stat->opc != Uchkt) {
                        resetsubdelete(stat->u.trap.expr2, node);
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
                resetsubdelete(stat->expr, node);
            }

            if (stat->next != NULL) {
                done = stat->next->graphnode != stat->graphnode;
            }
            stat = stat->next;
        }
        unionminus(&savedexp, &node->bvs.stage1.u.cm.delete, &node->bvs.stage1.u.cm.subdelete);
    }

#ifdef UOPT_DEBUG
    cmtrace_trace_all_cm();
#endif
}
