#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptdbg.h"
#include "uoptutil.h"
#include "uoptind.h"

#include "debug.h"

/*
00410098 delete_unmoved_recur
00474FC8 func_00474FC8
*/
bool inpathbefore(struct IChain *ichain, struct Statement *stat) {
    bool inpath;

    stat = stat->next;
    inpath = false;
    do {
        stat = stat->prev;
        if (stat->opc == Uisst || stat->opc == Ustr) {
            inpath = exproccurred(ichain, stat->expr->data.isvar_issvar.assigned_value);
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
            inpath = exproccurred(ichain, stat->expr);

            if (!inpath) {
                if (stat->opc == Uistr ||
                        stat->opc == Uistv ||
                        stat->opc == Umov ||
                        stat->opc == Umovv ||
                        stat->opc == Utpeq ||
                        stat->opc == Utpge ||
                        stat->opc == Utpgt ||
                        stat->opc == Utple ||
                        stat->opc == Utplt ||
                        stat->opc == Utpne ||
                        stat->opc == Uirst ||
                        stat->opc == Uirsv) {
                    inpath = exproccurred(ichain, stat->u.store.expr);
                }
            }
        }
    } while (!inpath && (stat != stat->graphnode->stat_head));

    return inpath;
}

/*
00410098 delete_unmoved_recur
00474FC8 func_00474FC8
*/
bool inpathafter(struct IChain *ichain, struct Statement *stat) {
    bool inpath;

    inpath = false;
    do {
        stat = stat->next;
        if (stat->opc == Uisst || stat->opc == Ustr) {
            inpath = exproccurred(ichain, stat->expr->data.isvar_issvar.assigned_value);
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
            inpath = exproccurred(ichain, stat->expr);

            if (!inpath) {
                if (stat->opc == Uistr ||
                        stat->opc == Uistv ||
                        stat->opc == Umov ||
                        stat->opc == Umovv ||
                        stat->opc == Utpeq ||
                        stat->opc == Utpge ||
                        stat->opc == Utpgt ||
                        stat->opc == Utple ||
                        stat->opc == Utplt ||
                        stat->opc == Utpne ||
                        stat->opc == Uirst ||
                        stat->opc == Uirsv) {
                    inpath = exproccurred(ichain, stat->u.store.expr);
                }
            }
        }
    } while (!inpath && stat != stat->graphnode->stat_tail);

    return inpath;
}

/*
00474DC0 func_00474DC0
00474FC8 func_00474FC8
*/
static int func_00474DC0(struct IChain *ichain) {
    int sp28;
    int sp24;

    switch (ichain->type) {
        case isconst:
            sp28 = ichain->isconst.number.intval;
            break;

        case islda:
        case isvar:
        case isilda:
        case issvar:
        case isrconst:
            sp28 = 0;
            break;

        case isop:
            if (optab[ichain->isop.opc].is_binary_op) {
                sp24 = func_00474DC0(ichain->isop.op1);
                sp28 = func_00474DC0(ichain->isop.op2);
                if (ichain->isop.opc == Uadd) {
                    sp28 = sp24 + sp28;
                } else {
                    sp28 = sp24 - sp28;
                }
            } else {
                sp24 = func_00474DC0(ichain->isop.op1);
                switch (ichain->isop.opc) {
                    case Uneg:
                        sp28 = -sp24;
                        break;
                    case Ucvt:
                        sp28 = sp24;
                        break;

                    case Uinc:
                        sp28 = sp24 + ichain->isop.size;
                        break;
                    case Udec:
                        sp28 = sp24 - ichain->isop.size;
                        break;

                    default:
                        caseerror(1, 131, "uoptscm.p", 9);
                        break;
                }
            }
            break;

        default:
        case dumped:
            caseerror(1, 118, "uoptscm.p", 9);
            break;
    }
    return sp28;
}

/*
00475680 getexpsources
*/
static void func_00474FC8(struct Statement *stat, struct Graphnode *node) {
    int increment; // sp80
    bool overflow; // sp7B
    struct IChain *multiplier; // sp70
    int mult_factor; // sp6C
    int loopno;
    bool inloop;
    struct Loop *loop;
    int factor;
    struct IChain *ichain;
    struct ScmThing *unkThing2;
    int block;
    int i;
    unsigned int bit;
    struct StrengthReductionCand *sc;
    struct StrengthReductionCand *srcand;
    bool inpath;
    bool found;

    increment = func_00474DC0(stat->u.store.ichain->isop.op2);
    loop = node->loop;
    block = 0;
    if (loop == NULL || node->in_rolled_preloop) {
        inloop = false;
    } else {
        inloop = true;
        loopno = loop->loopno;
    }

    i = 0;
    if (bitposcount > 0) {
        do {
            if (BVBLOCKEMPTY(node->bvs.stage1.u.cm.cand, block) || BVBLOCKEMPTY(node->bvs.stage1.u.scm.region, block)) {
                i += 0x80;
            } else {
                bit = 0;
                while (i < bitposcount && bit != 0x80) {
                    if (BVINBLOCK(bit, block, node->bvs.stage1.u.cm.cand)) {
                        if (BVINBLOCK(bit, block, node->bvs.stage1.u.scm.region) ||
                                BVINBLOCK(bit, block, node->bvs.stage1.u.cm.subinsert)) {
                            ichain = bittab[i].ichain;
                            if (bvectin(i, &trapop)) {
                                inpath = false;
                            } else if (bvectin(i, &node->bvs.stage1.u.cm.ppin)) {
                                if (bvectin(i, &node->bvs.stage1.u.cm.ppout)) {
                                    inpath = true;
                                } else {
                                    inpath = inpathafter(ichain, stat);
                                }
                            } else if (bvectin(i, &node->bvs.stage1.u.cm.ppout)) {
                                inpath = ichain->type == issvar || inpathbefore(ichain, stat);
                            } else {
                                inpath = false;
                            }

                            if (inpath) {
                                if (ichain->type != isop || (ichain->isop.opc != Uilod && ichain->isop.opc != Uirld)) {
                                    factor = ivfactor(ichain, stat->u.store.ichain->isop.op1, &overflow, &multiplier, &mult_factor);
                                    if (factor != 0 || multiplier != NULL) {
                                        if (stat->u.store.u.str.srcands == NULL) {
                                            srcand = alloc_new(sizeof(struct StrengthReductionCand), &perm_heap);
                                            stat->u.store.u.str.srcands = srcand;
                                        } else {
                                            sc = stat->u.store.u.str.srcands;
                                            while (sc->next != NULL) {
                                                sc = sc->next;
                                            }
                                            srcand = alloc_new(sizeof(struct StrengthReductionCand), &perm_heap);
                                            sc->next = srcand;
                                        }
#ifdef AVOID_UB
                                        *srcand = (struct StrengthReductionCand){0};
#endif

                                        srcand->target = ichain;
                                        srcand->next = NULL;
                                        srcand->increment = increment;
                                        srcand->iv_factor = factor;
                                        if (multiplier != NULL) {
                                            srcand->multiplier = multiplier;
                                            srcand->mult_factor = mult_factor;
                                            srcand->tempbit = 0;
                                            if (ichain->isop.srcand != nota_candof && !node->in_rolled_preloop) {
                                                if (ichain->isop.srcand != NULL ||
                                                        (mult_factor * increment == 1 && factor == 0) ||
                                                        multiplier->type != isvar) {
                                                    ichain->isop.srcand = nota_candof;
                                                } else {
                                                    ichain->isop.srcand = srcand;
                                                    ichain->isop.stat = NULL;
                                                }
                                            }
                                        } else {
                                            srcand->multiplier = NULL;
                                        }

                                        // unused
                                        if (mipsflag == 3 && inloop) {
                                            if (looptab[loopno].unk9 != 0) {
                                                if (looptab[loopno].unk8 == 0) {
                                                    unkThing2 = alloc_new(sizeof(struct ScmThing), &perm_heap);
#ifdef AVOID_UB
                                                    *unkThing2 = (struct ScmThing){0};
#endif
                                                    unkThing2->ichain = ichain;
                                                    unkThing2->unk4 = srcand;
                                                    unkThing2->unk10 = 0;
                                                    unkThing2->unk11 = 0;
                                                    unkThing2->next = looptab[loopno].unk4;
                                                    looptab[loopno].unk4 = unkThing2;
                                                } else {
                                                    unkThing2 = looptab[loopno].unk4;
                                                    found = false;
                                                    while (unkThing2 != NULL && !found) {
                                                        if (unkThing2->ichain == ichain) {
                                                            found = true;
                                                        } else {
                                                            unkThing2 = unkThing2->next;
                                                        }
                                                    }
                                                    if (!found) {
                                                        looptab[loopno].unk9 = 0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    i++;
                    bit++;
                }
            }
            block++;
        } while (i < bitposcount);
    }

    if (mipsflag == 3 && inloop != 0) {
        if (looptab[loopno].unk4 != NULL) {
            looptab[loopno].unk8 = 1;
        }
    }
}

/*
0047558C func_0047558C
00475680 getexpsources
*/
static void func_0047558C(struct Loop *loop) {
    while (loop != NULL) {
        looptab[loop->loopno].loop = loop;
        looptab[loop->loopno].unk4 = 0;
        looptab[loop->loopno].unk9 = true;
        looptab[loop->loopno].unk8 = 0;
        looptab[loop->loopno].unkA = 0;
        func_0047558C(loop->inner);
        loop = loop->next;
    }
}

/*
00456A2C oneproc
*/
void getexpsources(void) {
    struct Graphnode *node;
    struct GraphnodeList *succ;
    struct Statement *stat;
    bool done;
    bool changed;

    lastdftime = getclock();
    numdataflow += 1;
    node = graphhead;
    while (node != NULL) {
        // sink = (delete & ~subdelete) | (subinsert & ~avlocs) | (subinsert & subdelete & ~altered)
        //
        // 1. redundant, and not nested in a larger redundant expression (delete & ~subdelete)
        //
        // 2. nested in inserted expression, not locally available (subinsert & ~avlocs)
        //     subinsert = ~insert = ~ppout | avout | (ppin & ~altered)
        //       avout = avloc | (~altered & avin)
        //     
        // 3. what the hell (subinsert & subdelete & ~altered)
        //      This means:
        //        expr is a subexpression of INSERT and not INSERT itself
        //        expr also only appears as a subexpression of DELETE
        //        expr is not modified by the block
        //
        //    It is possible for an expression to be both INSERT and DELETE, such as an indirect increment x->a++
        //
        //    However, not sure if an expression can be both SUBINSERT and SUBDELETE... AND not altered.
        //
        //    Some work towards simplifying this case:
        //
        //     subdelete = delete = antloc & ppin
        //     subinsert & subdelete & ~altered = (~ppout | avout | (ppin & ~altered)) & (antloc & ppin) & ~altered
        //                                      = (~ppout | avout) & ppin & ~altered & antloc 
        //
        //     ~altered & antloc => expression is also avloc => avout          (TODO: not sure if this is actually true)
        //     case simplies to:
        //                                      = ppin & ~altered & antloc     (& avloc)
        //
        //     ppin = pavin & antin & (antloc | ~altered & ppout) & all pred (ppout | avout)
        //     antloc => antin & (antloc | ~altered & ppout)
        //
        //                                      = pavin & all pred (ppout | avout) & ~altered & antloc     (& avloc)
        bvectcopy(&node->bvs.stage1.u.scm.sink, &node->bvs.stage1.u.cm.subdelete);
        bvectminus(&node->bvs.stage1.u.scm.sink, &node->bvs.stage1.alters);
        unionnot(&node->bvs.stage1.u.scm.sink, &node->bvs.stage1.avlocs);
        bvectintsect(&node->bvs.stage1.u.scm.sink, &node->bvs.stage1.u.cm.subinsert);
        unionminus(&node->bvs.stage1.u.scm.sink, &node->bvs.stage1.u.cm.delete, &node->bvs.stage1.u.cm.subdelete);
        bvectminus(&node->bvs.stage1.u.scm.sink, &storeop);
        bvectminus(&node->bvs.stage1.u.scm.sink, &trapop);
        
        initbv(&node->bvs.stage1.u.scm.region, (struct BitVectorBlock) {0});

        // SOURCE = AVLOC & (ALTERS | ~DELETE) | INSERT
        bvectcopy(&node->bvs.stage1.u.scm.source, &node->bvs.stage1.alters);
        unionnot(&node->bvs.stage1.u.scm.source, &node->bvs.stage1.u.cm.delete);
        bvectintsect(&node->bvs.stage1.u.scm.source, &node->bvs.stage1.avlocs);
        bvectminus(&node->bvs.stage1.u.scm.source, &asgnbits);
        bvectunion(&node->bvs.stage1.u.scm.source, &node->bvs.stage1.u.cm.insert);
        node = node->next;
    }

    do {
        node = graphtail;
        dataflowiter += 1;
        changed = false;
        while (node != NULL) {
            if (node->successors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.scm.region);
                }

                // region = union of succ->sink
                for (succ = node->successors; succ != NULL; succ = succ->next) {
                    bvectunion(&node->bvs.stage1.u.scm.region, &succ->graphnode->bvs.stage1.u.scm.sink);
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.scm.region)) {
                    changed = true;
                }
            }
            if (!changed) {
                bvectcopy(&old, &node->bvs.stage1.u.scm.sink);
            }

            // sink = sink | (region & ~source)
            unionminus(&node->bvs.stage1.u.scm.sink, &node->bvs.stage1.u.scm.region, &node->bvs.stage1.u.scm.source);
            if (!changed && !bvecteq(&old, &node->bvs.stage1.u.scm.sink)) {
                changed = true;
            }

            node = node->prev;
        }
    } while (changed);

    if (mipsflag == 3) {
        looptab = alloc_new(curloopno * sizeof(struct LooptabItem), &perm_heap);
        func_0047558C(toplevelloops);
    }

    checkbvlist(&coloreditems);
    node = graphhead;
    while (node != NULL) {
        bvectintsect(&node->bvs.stage1.u.scm.source, &node->bvs.stage1.u.scm.region);
        bvectunion(&node->bvs.stage1.u.scm.region, &node->bvs.stage1.u.scm.sink);
        bvectunion(&coloreditems, &node->bvs.stage1.u.scm.region);

        stat = node->stat_head;
        done = false;
        while (!done && stat != NULL) {
            if ((stat->opc == Uisst || stat->opc == Ustr) && stat->is_increment) {
                func_00474FC8(stat, node);
                if (outofmem) {
                    return;
                }
            }

            if (stat->next != NULL) {
                done = stat->next->graphnode != stat->graphnode;
            }
            stat = stat->next;
        }

        bvectunion(&node->bvs.stage1.alters, &node->bvs.stage1.u.cm.cand);
        node = node->next;
    }

#ifdef UOPT_DEBUG
    cmtrace_trace_all_scm();
#endif
}
