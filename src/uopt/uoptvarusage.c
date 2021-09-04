#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptkill.h"
#include "uoptreg1.h"
#include "uoptutil.h"

/*
00447F90 check_loop_coincidence
00448928 check_loop_induct_usages
00448C94 find_ix_loadstores
*/
static struct BitVector visited_bbs;

/*
00447F90 check_loop_coincidence
00448C94 find_ix_loadstores
*/
void check_loop_coincidence(struct Graphnode *node, int loopno, struct ScmThing *scm) {
    struct GraphnodeList *pred;
    struct GraphnodeList *succ;

    pred = node->predecessors;
    while (pred != 0) {
        if (inside_loop(pred->graphnode->loop, loopno)) {
            if (!bvectin(pred->graphnode->num, &visited_bbs)) {
                setbit(&visited_bbs, pred->graphnode->num);
                if (!bvectin(scm->ichain->bitpos, &pred->graphnode->bvs.stage1.u.scm.region) ||
                        bvectin(scm->ichain->bitpos, &pred->graphnode->bvs.stage1.u.scm.source)) {
                    scm->unk10 = 2;
                    return;
                }
                check_loop_coincidence(pred->graphnode, loopno, scm);
            }
        } else {
            if (!bvectin(scm->ichain->bitpos, &pred->graphnode->bvs.stage1.u.scm.region)) {
                scm->unk10 = 2;
                return;
            }
            if (!bvectin(scm->ichain->bitpos, &pred->graphnode->bvs.stage1.u.scm.unk164)) {
                scm->unk10 = 3;
            }
        }

        pred = pred->next;
    }

    succ = node->successors;
    while (succ != 0) {
        if (inside_loop(succ->graphnode->loop, loopno)) {
            if (!bvectin(succ->graphnode->num, &visited_bbs)) {
                setbit(&visited_bbs, succ->graphnode->num);
                if (!bvectin(scm->ichain->bitpos, &succ->graphnode->bvs.stage1.u.scm.region) ||
                        bvectin(scm->ichain->bitpos, &succ->graphnode->bvs.stage1.u.scm.source)) {
                    scm->unk10 = 2;
                    return;
                }
                check_loop_coincidence(succ->graphnode, loopno, scm);
            }
        } else if (bvectin(scm->ichain->bitpos, &succ->graphnode->bvs.stage1.u.scm.region)) {
            scm->unk10 = 3;
        }
        succ = succ->next;
    }
}

/*
0044821C expr_has_direct_usage
00448530 has_direct_induct_usage
*/
bool expr_has_direct_usage(struct Graphnode *node, struct Expression *expr, struct ScmThing *scm, bool arg3, int arg4) {
    if (expr == NULL) {
        return false;
    }

    switch (expr->type) {
        case islda:
        case isconst:
        case isilda:
        case isrconst:
            return false;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                return expr_has_direct_usage(node, expr->data.isvar_issvar.copy, scm, arg3, arg4);
            }
            return false;

        case isop:
            if (expr->ichain == scm->ichain) {
                if (!arg3) {
                    return true;
                }
                if (scm->unk10 == 0) {
                    scm->unk10 = true;
                    scm->unkC = arg4;
                    return false;
                }
                TRAP_IF(scm->unk10 != true);
                return arg4 != scm->unkC;
            }
            if ((!expr->data.isop.unk21 && !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.scm.unk13C)) ||
                    !bvectin(expr->ichain->bitpos, &node->bvs.stage1.antlocs)) {
                if (!optab[expr->data.isop.opc].is_binary_op) {
                    arg3 = false;
                    if (expr->data.isop.opc == Uilod || expr->data.isop.opc == Uildv) {
                        if (expr->datatype == Qdt || expr->datatype == Rdt) {
                            arg3 = sizeoftyp(expr->datatype) * 8 == expr->data.isop.aux2.v1.align;
                        }
                    }
                    return expr_has_direct_usage(node, expr->data.isop.op1, scm, arg3, expr->data.isop.datasize);
                }

                if ((expr->data.isop.opc == Uequ ||
                            expr->data.isop.opc == Uneq ||
                            expr->data.isop.opc == Ugeq ||
                            expr->data.isop.opc == Ugrt ||
                            expr->data.isop.opc == Uleq ||
                            expr->data.isop.opc == Ules) &&
                        (expr->data.isop.aux.unk38_trep->ichain2 != NULL || expr->data.isop.aux2.unk3C_trep->ichain2 != NULL)) {
                    if (expr->data.isop.aux.unk38_trep->ichain2 != NULL && scm->ichain == expr->data.isop.aux.unk38_trep->ichain2) {
                        return true;
                    }
                    if (expr->data.isop.aux2.unk3C_trep->ichain2 != NULL && scm->ichain == expr->data.isop.aux2.unk3C_trep->ichain2) {
                        return true;
                    }
                    return false;
                }
                return expr_has_direct_usage(node, expr->data.isop.op1, scm, false, 0) ||
                    expr_has_direct_usage(node, expr->data.isop.op2, scm, false, 0);
            }
            return false;

        default:
            dbgerror(0x394);
            return false;
    }
}

/*
00448928 check_loop_induct_usages
00448C94 find_ix_loadstores
*/
bool has_direct_induct_usage(struct Graphnode *node, struct ScmThing *scm) {
    struct Statement *stat;
    int i;
    unsigned int bit;
    bool done;
    bool arg3;

    stat = node->stat_head;
    done = 0;
    while (!done && stat != NULL) {
        if (stat->opc == Ustr) {
            TRAP_IF(stat->outpar != 0);
            if (stat->unk2 != 1 && expr_has_direct_usage(node, stat->expr->data.isvar_issvar.assigned_value, scm, 0, 0)) {
                return true;
            }
        } else if (stat->opc == Uisst) {
            if (stat->unk2 != 1 &&
                    (expr_has_direct_usage(node, stat->u.store.expr, scm, 0, 0) ||
                     expr_has_direct_usage(node, stat->expr->data.isvar_issvar.assigned_value, scm, 0, 0))) {
                return true;
            }
        } else if (stat->opc == Uistr || stat->opc == Uistv ||
                stat->opc == Uirst || stat->opc == Uirsv ||
                stat->opc == Umov  || stat->opc == Umovv ||
                stat->opc == Utpeq || stat->opc == Utpne ||
                stat->opc == Utpge || stat->opc == Utpgt ||
                stat->opc == Utple || stat->opc == Utplt) {
            arg3 = false;
            if (stat->opc == Uistr || stat->opc == Uistv || stat->opc == Uirst || stat->opc == Uirsv) {
                if ((stat->u.store.u.istr.dtype == Qdt || stat->u.store.u.istr.dtype == Rdt) &&
                        sizeoftyp(stat->u.store.u.istr.dtype) * 8 == stat->u.store.u.istr.align) {
                    arg3 = true;
                }
            }
            if (expr_has_direct_usage(node, stat->expr, scm, arg3, stat->u.store.u.istr.offset) ||
                    expr_has_direct_usage(node, stat->u.store.expr, scm, 0, 0)) {
                return true;
            }
        } else if ((stat->opc != Uaent &&
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
                    stat->opc != Uxpar) &&
                    expr_has_direct_usage(node, stat->expr, scm, 0, 0)) {
            return true;
        }

        if (stat->next != NULL) {
            done = stat->next->graphnode != stat->graphnode;
        }
        stat = stat->next;
    }

    if (bvectin(scm->ichain->bitpos, &node->bvs.stage1.u.scm.unk164)) {
        return true;
    }

    i = scm->ichain->bitpos + 1;
    while (i < bitposcount) {
        if (BVBLOCKEMPTY(node->bvs.stage1.u.scm.unk164, i >> 7)) {
            i += 0x80;
        } else {
            bit = i & 0x7F;
            while (i < bitposcount && bit < 0x80) {
                if (BVINBLOCK(bit, i >> 7, node->bvs.stage1.u.scm.unk164) &&
                        bittab[i].ichain->type == isop &&
                        (bittab[i].ichain->isop.op1 == scm->ichain ||
                         (optab[bittab[i].ichain->isop.opc].is_binary_op &&
                          bittab[i].ichain->isop.op2 == scm->ichain))) {
                    return true;
                }
                i++;
                bit++;
            }
        }
    }

    return false;
}

/*
00448928 check_loop_induct_usages
00448C94 find_ix_loadstores
*/
void check_loop_induct_usages(struct Graphnode *node, int loopno, struct ScmThing *scm) {
    int i; // a0
    unsigned int bit; // v1
    struct GraphnodeList *pred;
    struct GraphnodeList *succ;

    pred = node->predecessors;
    while (pred != NULL) {
        if (inside_loop(pred->graphnode->loop, loopno)) {
            if (!bvectin(pred->graphnode->num, &visited_bbs)) {
                setbit(&visited_bbs, pred->graphnode->num);
                if (has_direct_induct_usage(pred->graphnode, scm)) {
                    scm->unk10 = 3;
                    return;
                }
                check_loop_induct_usages(pred->graphnode, loopno, scm);
            }
        } else {
            i = scm->ichain->bitpos + 1;
            while (i < bitposcount) {
                if (BVBLOCKEMPTY(node->bvs.stage1.u.scm.unk164, i >> 7)) {
                    i += 0x80;
                } else {
                    bit = i & 0x7F;
                    while (i < bitposcount && bit < 0x80) {
                        if (BVINBLOCK(bit, i >> 7, node->bvs.stage1.u.scm.unk164) &&
                                bittab[i].ichain->type == isop &&
                                (bittab[i].ichain->isop.op1 == scm->ichain ||
                                 (optab[bittab[i].ichain->isop.opc].is_binary_op &&
                                  bittab[i].ichain->isop.op2 == scm->ichain))) {
                            scm->unk10 = 3;
                            return;
                        }
                        i++;
                        bit++;
                    }
                }
            }
        }

        pred = pred->next;
    }

    succ = node->successors;
    while (succ != NULL) {
        if (inside_loop(succ->graphnode->loop, loopno) && !bvectin(succ->graphnode->num, &visited_bbs)) {
            setbit(&visited_bbs, succ->graphnode->num);
            if (has_direct_induct_usage(succ->graphnode, scm)) {
                scm->unk10 = 3;
                return;
            }
            check_loop_induct_usages(succ->graphnode, loopno, scm);
        }

        succ = succ->next;
    }
}

/*
00448C94 find_ix_loadstores
*/
int same_scale(struct ExpSourceThing *es1, struct ExpSourceThing *es2) {
    if (es2->unkC == es1->unkC) {
        if (es1->ichain_unk10 != NULL || es2->ichain_unk10 != NULL) {
            if (es2->ichain_unk10 == es1->ichain_unk10) {
                return es2->unk14 == es1->unk14;
            }
        }
    }
    return false;
}

/*
00456A2C oneproc
   XXX: untested
*/
void find_ix_loadstores(void) {
    struct Graphnode *body; // s1
    struct ScmThing *scm; // s0
    struct ScmThing *phi_s1;
    struct ScmThing *phi_v1;
    int phi_s6;
    int phi_s2;
    int phi_a1;
    int phi_a0;

    formbvlivran(&visited_bbs);
    phi_s6 = 0;
    for (phi_s6 = 0; phi_s6 < curloopno; phi_s6++) {
        body = looptab[phi_s6].loop->body;
        if (looptab[phi_s6].unk9 && looptab[phi_s6].unk4 != 0) {
            scm = looptab[phi_s6].unk4;
            while (scm != NULL) {
                if (!bvectin(scm->ichain->bitpos, &body->bvs.stage1.u.scm.region)) {
                    scm->unk10 = 2;
                } else {
                    initbv(&visited_bbs, (struct BitVectorBlock) {0});
                    setbit(&visited_bbs, body->num);
                    check_loop_coincidence(body, phi_s6, scm);
                }

                if (scm->unk10 == 0) {
                    if (has_direct_induct_usage(body, scm)) {
                        scm->unk10 = 3;
                    } else {
                        initbv(&visited_bbs, (struct BitVectorBlock) {0});
                        setbit(&visited_bbs, body->num);
                        check_loop_induct_usages(body, phi_s6, scm);
                    }
                }
                scm = scm->next;
            }

            scm = looptab[phi_s6].unk4;
            while (scm != NULL) {
                if (scm->unk10 != 2) {
                    TRAP_IF(scm->unk10 == 0);
                    phi_s1 = looptab[phi_s6].unk4;
                    phi_s2 = 0;
                    while (!phi_s2 && phi_s1 != scm) {
                        if (same_scale(phi_s1->unk4, scm->unk4)) {
                            phi_s2 = true;
                        } else {
                            phi_s1 = phi_s1->next;
                        }
                    }
                    if (phi_s2 != 0) {
                        scm->unk11 = phi_s1->unk11;
                    } else {
                        looptab[phi_s6].unkA++;
                        scm->unk11 = looptab[phi_s6].unkA;
                    }
                }
                scm = scm->next;
            }

            for (phi_a1 = 1; phi_a1 <= looptab[phi_s6].unkA; phi_a1++) {
                scm = looptab[phi_s6].unk4;
                phi_v1 = NULL;
                phi_a0 = 0;
                while (scm != NULL) {
                    if (phi_a1 == scm->unk11) {
                        if (scm->unk10 == 1) {
                            phi_a0++;
                        } else if (scm->unk10 != 2) {
                            if (phi_v1 == 0) {
                                phi_v1 = scm;
                            } else if (phi_v1->ichain->bitpos < scm->ichain->bitpos) {
                                scm->unk10 = 2;
                            } else {
                                phi_v1->unk10 = 2;
                                phi_v1 = scm;
                            }
                        }
                    }
                    scm = scm->next;
                }

                if (phi_a0 == 0 || (phi_a0 == 1 && phi_v1 == NULL)) {
                    scm = looptab[phi_s6].unk4;
                    while (scm != NULL) {
                        if (scm->unk11 == phi_a1) {
                            scm->unk10 = 2;
                        }
                        scm = scm->next;
                    }
                } else if (phi_v1 == 0) {
                    phi_v1 = looptab[phi_s6].unk4;
                    while (phi_v1->unk11 != phi_a1 || phi_v1->unk10 != 1) {
                        phi_v1 = phi_v1->next;
                    }
                    phi_v1->unk10 = 3;
                }
            }
        }
    }
}
