#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptdbg.h"
#include "uoptutil.h"
#include "uoptind.h"

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
static void func_00474FC8(struct Statement *stat, struct Graphnode *node_shared74) {
    int sp80;
    bool sp7A;
    struct IChain *sp70;
    int sp6C;
    int loopno;
    bool sp62;
    struct Loop *loop;
    int temp_s1;
    struct IChain *ichain_s2;
    struct ScmThing *unkThing2;
    int block;
    int i;
    unsigned int bit;
    struct ExpSourceThing *phi_s0;
    struct ExpSourceThing *expSourceThing;
    bool inpath;
    bool found;

    sp80 = func_00474DC0(stat->u.store.ichain->isop.op2);
    loop = node_shared74->loop;
    block = 0;
    if (loop == 0 || node_shared74->unkBb8) {
        sp62 = 0;
    } else {
        sp62 = 1;
        loopno = loop->loopno;
    }

    i = 0;
    if (bitposcount > 0) {
        do {
            if (BVBLOCKEMPTY(node_shared74->bvs.stage1.u.cm.cand, block) || BVBLOCKEMPTY(node_shared74->bvs.stage1.u.scm.region, block)) {
                i += 0x80;
            } else {
                bit = 0;
                while (i < bitposcount && bit != 0x80) {
                    
                    
                    if (BVINBLOCK(bit, block, node_shared74->bvs.stage1.u.cm.cand)) {
                        
                        if (BVINBLOCK(bit, block, node_shared74->bvs.stage1.u.scm.region) ||
                                BVINBLOCK(bit, block, node_shared74->bvs.stage1.u.cm.subinsert)) {
                            ichain_s2 = bittab[i].ichain;
                            if (bvectin(i, &trapop)) {
                                inpath = false;
                            } else if (bvectin(i, &node_shared74->bvs.stage1.u.cm.ppin)) {
                                if (bvectin(i, &node_shared74->bvs.stage1.u.cm.ppout)) {
                                    inpath = true;
                                } else {
                                    inpath = inpathafter(ichain_s2, stat);
                                }
                            } else if (bvectin(i, &node_shared74->bvs.stage1.u.cm.ppout)) {
                                inpath = ichain_s2->type == issvar || inpathbefore(ichain_s2, stat);
                            } else {
                                inpath = false;
                            }

                            if (inpath) {
                                if (ichain_s2->type != isop || (ichain_s2->isop.opc != Uilod && ichain_s2->isop.opc != Uirld)) {
                                    temp_s1 = ivfactor(ichain_s2, stat->u.store.ichain->isop.op1, &sp7A, &sp70, &sp6C);
                                    if (temp_s1 != 0 || sp70 != NULL) {
                                        phi_s0 = stat->u.store.u.str.unk2C;
                                        if (phi_s0 == NULL) {
                                            expSourceThing = alloc_new(sizeof(struct ExpSourceThing), &perm_heap);
                                            stat->u.store.u.str.unk2C = expSourceThing;
                                        } else {
                                            while (phi_s0->next != NULL) {
                                                phi_s0 = phi_s0->next;
                                            }
                                            expSourceThing = alloc_new(sizeof(struct ExpSourceThing), &perm_heap);
                                            phi_s0->next = expSourceThing;
                                        }

                                        expSourceThing->ichain = ichain_s2;
                                        expSourceThing->next = NULL;
                                        expSourceThing->unk8 = sp80;
                                        expSourceThing->unkC = temp_s1;
                                        if (sp70 != NULL) {
                                            expSourceThing->ichain_unk10 = sp70;
                                            expSourceThing->unk14 = sp6C;
                                            expSourceThing->unk18 = 0;
                                            if (ichain_s2->isop.unk24_cand != nota_candof && !node_shared74->unkBb8) {
                                                if ((ichain_s2->isop.unk24_cand != 0) || (sp6C * sp80 == 1 && temp_s1 == 0) || (sp70->type != isvar)) {
                                                    ichain_s2->isop.unk24_cand = nota_candof;
                                                } else {
                                                    ichain_s2->isop.unk24_cand = expSourceThing;
                                                    ichain_s2->isop.stat = NULL;
                                                }
                                            }
                                        } else {
                                            expSourceThing->ichain_unk10 = NULL;
                                        }


                                        if (mipsflag == 3 && sp62 != 0) {
                                            if (looptab[loopno].unk9 != 0) {
                                                if (looptab[loopno].unk8 == 0) {
                                                    unkThing2 = alloc_new(sizeof(struct ScmThing), &perm_heap);
                                                    unkThing2->ichain = ichain_s2;
                                                    unkThing2->unk4 = expSourceThing;
                                                    unkThing2->unk10 = 0;
                                                    unkThing2->unk11 = 0;
                                                    unkThing2->next = looptab[loopno].unk4;
                                                    looptab[loopno].unk4 = unkThing2;
                                                } else {
                                                    unkThing2 = looptab[loopno].unk4;
                                                    found = false;
                                                    while (unkThing2 != NULL && !found) {
                                                        if (unkThing2->ichain == ichain_s2) {
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
                    i = i + 1;
                    bit = bit + 1;
                }
            }
            block++;
        } while (i < bitposcount);
    }

    if (mipsflag == 3 && sp62 != 0) {
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
    struct Graphnode *node_s2;
    struct GraphnodeList *succ;
    struct Statement *stat;
    bool done;
    bool changed;

    lastdftime = getclock();
    numdataflow += 1;
    node_s2 = graphhead;
    while (node_s2 != NULL) {
        // SINK = (SUBDELETE & ~(ALTERS & AVLOC) & SUBINSERT) | (DELETE & ~SUBDELETE)
        bvectcopy(&node_s2->bvs.stage1.u.scm.sink, &node_s2->bvs.stage1.u.cm.subdelete);
        bvectminus(&node_s2->bvs.stage1.u.scm.sink, &node_s2->bvs.stage1.alters);
        unionnot(&node_s2->bvs.stage1.u.scm.sink, &node_s2->bvs.stage1.avlocs);
        bvectintsect(&node_s2->bvs.stage1.u.scm.sink, &node_s2->bvs.stage1.u.cm.subinsert);
        unionminus(&node_s2->bvs.stage1.u.scm.sink, &node_s2->bvs.stage1.u.cm.delete, &node_s2->bvs.stage1.u.cm.subdelete);
        bvectminus(&node_s2->bvs.stage1.u.scm.sink, &storeop);
        bvectminus(&node_s2->bvs.stage1.u.scm.sink, &trapop);
        
        initbv(&node_s2->bvs.stage1.u.scm.region, (struct BitVectorBlock) {0});

        // SOURCE = AVLOC & (ALTERS | ~DELETE) | INSERT
        bvectcopy(&node_s2->bvs.stage1.u.scm.source, &node_s2->bvs.stage1.alters);
        unionnot(&node_s2->bvs.stage1.u.scm.source, &node_s2->bvs.stage1.u.cm.delete);
        bvectintsect(&node_s2->bvs.stage1.u.scm.source, &node_s2->bvs.stage1.avlocs);
        bvectminus(&node_s2->bvs.stage1.u.scm.source, &asgnbits);
        bvectunion(&node_s2->bvs.stage1.u.scm.source, &node_s2->bvs.stage1.u.cm.insert);
        node_s2 = node_s2->next;
    }

    do {
        node_s2 = graphtail;
        dataflowiter += 1;
        changed = false;
        while (node_s2 != NULL) {
            if (node_s2->successors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node_s2->bvs.stage1.u.scm.region);
                }

                succ = node_s2->successors;
                while (succ != NULL) {
                    bvectunion(&node_s2->bvs.stage1.u.scm.region, &succ->graphnode->bvs.stage1.u.scm.sink);
                    succ = succ->next;
                }
                if (!changed && !bvecteq(&old, &node_s2->bvs.stage1.u.scm.region)) {
                    changed = true;
                }
            }
            if (!changed) {
                bvectcopy(&old, &node_s2->bvs.stage1.u.scm.sink);
            }

            unionminus(&node_s2->bvs.stage1.u.scm.sink, &node_s2->bvs.stage1.u.scm.region, &node_s2->bvs.stage1.u.scm.source);
            if (!changed && !bvecteq(&old, &node_s2->bvs.stage1.u.scm.sink)) {
                changed = true;
            }

            node_s2 = node_s2->prev;
        }
    } while (changed);

    if (mipsflag == 3) {
        looptab = alloc_new(curloopno * sizeof(struct LooptabItem), &perm_heap);
        func_0047558C(toplevelloops);
    }

    checkbvlist(&coloreditems);
    node_s2 = graphhead;
    while (node_s2 != NULL) {
        bvectintsect(&node_s2->bvs.stage1.u.scm.source, &node_s2->bvs.stage1.u.scm.region);
        bvectunion(&node_s2->bvs.stage1.u.scm.region, &node_s2->bvs.stage1.u.scm.sink);
        bvectunion(&coloreditems, &node_s2->bvs.stage1.u.scm.region);

        stat = node_s2->stat_head;
        done = false;
        while (!done && stat != NULL) {
            if ((stat->opc == Uisst || stat->opc == Ustr) && stat->is_increment) {
                func_00474FC8(stat, node_s2);
                if (outofmem) {
                    return;
                }
            }

            if (stat->next != NULL) {
                done = stat->next->graphnode != stat->graphnode;
            }
            stat = stat->next;
        }

        bvectunion(&node_s2->bvs.stage1.alters, &node_s2->bvs.stage1.u.cm.cand);
        node_s2 = node_s2->next;
    }
}
