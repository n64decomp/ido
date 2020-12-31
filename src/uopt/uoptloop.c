#include "uoptdata.h"
#include "uoptions.h"
#include "uoptkill.h"
#include "uoptprep.h"
#include "uoptutil.h"
#include "uoptppss.h"


struct AllocBlock *intv_heap;

/*
00455D38 analoop

Notes: Only called when graphnode->terminal == true
*/
static struct Intval *func_00453430(struct Intval *intvHead) {
    struct Intval *sp44;
    bool done;
    struct Intval *temp_a2;
    struct IntvalList *newList;
    struct Intval *intv_s7;
    struct Intval *intv_s2;
    struct IntvalList *phi_v0;
    struct IntvalList *phi_s6;
    struct IntvalList* succ_s1;
    struct IntvalList* list_s0;
    bool found;
    int phi_v1;

    intvHead->prev = intvHead;
    intvHead->unk28 = 1;
    intv_s7 = intvHead->next;
    while (intv_s7 != NULL) {
        if (intv_s7->unk29 != 0) {
            intv_s7->prev = intv_s7;
            intv_s7->unk28 = 1;
        }
        intv_s7 = intv_s7->next;
    }

    done = 0;
    numintval = 0;
    intv_s7 = intvHead;

    do {
        if (intv_s7 == intvHead) {
            sp44 = alloc_new(sizeof(struct Intval), &intv_heap);
            intv_s2 = sp44;
        } else {
            intv_s2->next = alloc_new(sizeof(struct Intval), &intv_heap);
            intv_s2 = intv_s2->next;
        }

        intv_s2->graphnode = NULL;
        intv_s2->unk1C = 0;
        intv_s2->prev = 0;
        intv_s2->unk28 = 0;
        intv_s2->intv8 = 0;
        intv_s2->successors = NULL;
        intv_s2->predecessors = NULL;
        intv_s2->loopdepth = 0;
        intv_s2->intvC = intv_s7;
        intv_s2->loop = NULL;

        intv_s7->intv8 = intv_s2;
        intv_s7->unk28 = 2;

        intv_s2->unk29 = intv_s7->unk29;
        intv_s2->intvList4 = alloc_new(sizeof(struct IntvalList), &intv_heap);
        intv_s2->intvList4->intv = intv_s7;

        numintval++;

        phi_s6 = intv_s2->intvList4;
        list_s0 = phi_s6;
        found = 0;

        while (phi_s6 != NULL) {
            phi_s6->intv->unk28 = 2;
            succ_s1 = phi_s6->intv->successors;

            while (succ_s1 != NULL) {
                succ_s1->intv->unk1C--;

                if (succ_s1->intv->prev == NULL) {
                    succ_s1->intv->prev = intv_s2->intvList4->intv;
                    if (succ_s1->intv->unk1C == 0) {

                        list_s0->next = alloc_new(sizeof(struct IntvalList), &intv_heap);
                        list_s0->next->intv = succ_s1->intv;
                        succ_s1->intv->intv8 = intv_s2;
                        list_s0 = list_s0->next;
                    } else {
                        succ_s1->intv->unk28 = 1; // set to 1 here
                    }
                } else if (intv_s2->intvList4->intv == succ_s1->intv->prev 
                        && succ_s1->intv->unk1C == 0 
                        && succ_s1->intv->unk28 != 2) {

                    list_s0->next = alloc_new(sizeof(struct IntvalList), &intv_heap);
                    list_s0->next->intv = succ_s1->intv;
                    succ_s1->intv->intv8 = intv_s2;
                    succ_s1->intv->unk28 = 0;
                    list_s0 = list_s0->next;
                }

                succ_s1 = succ_s1->next;
            }

            list_s0->next = NULL;
            phi_s6 = phi_s6->next;
            found = 0;
        }

        do {
            intv_s7 = intv_s7->next;
            if (intv_s7 != NULL) {
                found = intv_s7->unk28 == 1;
            }

            if (found != 0) {
                break;
            }
        } while (intv_s7 != 0);

        if (found == 0) {
            intv_s7 = intvHead;
            do {
                intv_s7 = intv_s7->next;
                if (intv_s7 == 0) {
                    done = 1;
                } else {
                    found = intv_s7->unk28 == 1;
                }
                if (found) {
                    break;
                }
            } while(done == 0);
        }
    } while (done == 0);
    intv_s2->next = NULL;

    intv_s2 = sp44;

    do {
        phi_s6 = intv_s2->intvList4;

        do {
            succ_s1 = phi_s6->intv->successors;

            while (succ_s1 != NULL) {
                temp_a2 = succ_s1->intv->intv8;
                if (intv_s2 != temp_a2) {
                    if (intv_s2->successors == 0) {
                        intv_s2->successors = alloc_new(sizeof(struct IntvalList), &intv_heap);
                        intv_s2->successors->intv = succ_s1->intv->intv8;
                        intv_s2->successors->next = NULL;
                        succ_s1->intv->intv8->unk1C++;
                        newList = alloc_new(sizeof(struct IntvalList), &intv_heap);
                        newList->intv = intv_s2;
                        newList->next = succ_s1->intv->intv8->predecessors;
                        succ_s1->intv->intv8->predecessors = newList;
                    } else {
                        phi_v1 = temp_a2 != intv_s2->successors->intv;
                        list_s0 = intv_s2->successors;
                        if (phi_v1) {
                            phi_v0 = intv_s2->successors->next;
                            list_s0 = intv_s2->successors;

                            while (phi_v0 != NULL) {
                                list_s0 = phi_v0;
                                phi_v1 = temp_a2 != phi_v0->intv;
                                if (phi_v1 == 0) {
                                    break;
                                }
                                phi_v0 = phi_v0->next;
                            }
                        }

                        if (phi_v1) {
                            list_s0->next = alloc_new(sizeof(struct IntvalList), &intv_heap);
                            list_s0->next->next = 0;
                            list_s0->next->intv = succ_s1->intv->intv8;
                            succ_s1->intv->intv8->unk1C++;

                            newList = alloc_new(sizeof(struct IntvalList), &intv_heap);
                            newList->intv = intv_s2;
                            newList->next = succ_s1->intv->intv8->predecessors;
                            succ_s1->intv->intv8->predecessors = newList;
                        }
                    }
                }
                succ_s1 = succ_s1->next;
            }
            phi_s6 = phi_s6->next;
        } while (phi_s6 != NULL);
        intv_s2 = intv_s2->next;
    } while (intv_s2 != NULL);
    return sp44;
}

/* 
00453914 func_00453914
*/
static struct Intval *func_004538E8(struct Intval *arg0, struct Intval *arg1) {
    struct Intval *phi_v0;
    struct Intval *phi_v1;

    phi_v0 = arg1->intv8;
    phi_v1 = arg0->intv8;
    while (phi_v0 != phi_v1) {
        arg0 = phi_v1;
        phi_v1 = phi_v1->intv8;
        phi_v0 = phi_v0->intv8;
    }
    return arg0;
}

/* 
00453914 func_00453914
00453C20 func_00453C20
*/
static void func_00453914(struct Intval *arg0, struct Intval *arg1) {
    struct Intval *ret_intv;
    struct IntvalList *succ;

    succ = arg0->successors;
    if (succ == NULL) {
        arg0->loopdepth = 1;
        return;
    }

    if (arg0->loopdepth == 0) {
        arg0->loopdepth = 1;

        do {
            if (succ->intv->intv8 != arg1) {
                ret_intv = func_004538E8(arg1, succ->intv->intv8);
                if (arg0->loopdepth < ret_intv->loopdepth) {
                    arg0->loopdepth = ret_intv->loopdepth;
                    arg0->loop = ret_intv->loop;
                }
            } else {
                func_00453914(succ->intv, arg1);
                if (arg0->loopdepth < succ->intv->loopdepth) {
                    arg0->loopdepth = succ->intv->loopdepth;
                    arg0->loop = succ->intv->loop;
                }
            }
            succ = succ->next;
        } while (succ != NULL);
    }
}

/* Inner function
00453C20 func_00453C20
*/
static int func_00453A30(unsigned int power) {
    switch (power) {
        case 0:
            return 1;
        case 1:
            return 10;
        case 2:
            return 100;
        case 3:
            return 1000;
        case 4:
            return 10000;
        case 5:
            return 100000;
        case 6:
            return 1000000;
        case 7:
            return 10000000;
        case 8:
            return 100000000;
        case 9:
            return 1000000000;
        default:
            // what
            return (power * 100) + 1000000000;
    }
}

/* 
00453B04 func_00453B04
00453C20 func_00453C20
*/
static struct Loop *func_00453B04(struct Intval *arg0) {
    struct Loop *newLoop;

    if (arg0->loop != 0) {
        newLoop = alloc_new(sizeof(struct Loop), &perm_heap);
        newLoop->loopno = curloopno++;
        newLoop->unk4 = arg0->loop->unk4 + 1;
        newLoop->graphnode = 0;
        newLoop->loopC = NULL;
        newLoop->loop10 = arg0->loop;
        newLoop->loop14 = arg0->loop->loopC;
        arg0->loop->loopC = newLoop;
        return newLoop;
    }

    if (arg0->intv8 != 0) {
        return func_00453B04(arg0->intv8);
    }

    newLoop = alloc_new(sizeof(struct Loop), &perm_heap);
    newLoop->loopno = curloopno++;
    newLoop->unk4 = 1;
    newLoop->graphnode = 0;
    newLoop->loopC = 0;
    newLoop->loop10 = NULL;
    newLoop->loop14 = toplevelloops;
    toplevelloops = newLoop;
    return newLoop;
}

/* 
00453C20 func_00453C20
00455D38 analoop
*/
static void func_00453C20(struct Intval *arg0, int arg1) {
    struct Graphnode *node;
    struct IntvalList *phi_s0;
    struct Loop *phi_s1;

    if (arg0->intvList4 == 0) {
        node = arg0->graphnode;
        node->loopdepth = arg0->loopdepth;
        node->unkE8 = arg0->loop;
        if (arg0->loop != NULL && arg0->loop->graphnode == NULL) {
            arg0->loop->graphnode = node;
        }
        if (usefeedback == 0 || curproc->unk34 == 0) {
            node->unk2C = func_00453A30(arg0->loopdepth - 1);
        }
    } else if (arg1 == 0) {
        phi_s0 = arg0->intvList4;
        phi_s1 = NULL;

        do {
            if (phi_s0->intv->unk28 == 3) {
                phi_s0->intv->loopdepth = arg0->loopdepth + 1;
                if (phi_s1 == 0) {
                    phi_s1 = func_00453B04(arg0);
                }
                phi_s0->intv->loop = phi_s1;
            } else if (phi_s0->intv->loopdepth == 0) {
                func_00453914(phi_s0->intv, arg0);
            }

            phi_s0 = phi_s0->next;
        } while (phi_s0 != 0);
    } else {
        phi_s0 = arg0->intvList4;

        do {
            func_00453C20(phi_s0->intv, arg1 - 1);
            phi_s0 = phi_s0->next;
        } while (phi_s0 != NULL);
    }
    
}

/* 
00453DC0 func_00453DC0
00453ECC func_00453ECC
*/
static void func_00453DC0(struct Intval *arg0, struct Intval *arg1) {
    struct IntvalList *pred;

    if (arg0->unk28 == 3U) {
        return;
    }
    pred = arg0->predecessors;
    arg0->unk28 = 3U;

    while (pred != NULL) {
        if (arg1 == pred->intv->intv8) {
            func_00453DC0(pred->intv, arg1);
        }
        pred = pred->next;
    }
}

/* 
00453ECC func_00453ECC
00455C48 func_00455C48
*/
static struct Graphnode *func_00453E58(struct Intval *intv) {
    while (intv->intvList4 != NULL) {
        intv = intv->intvC;
    }
    return intv->graphnode;
}

/* 
00453ECC func_00453ECC
*/
static int func_00453E7C(struct Graphnode *node) {
    struct GraphnodeList *pred;

    pred = node->predecessors;
    while (pred != NULL) {
        if (pred->graphnode->unk2C != 0 && (pred->graphnode->unk2C << 3) < node->unk2C) {
            return true;
        }
        pred = pred->next;
    }
    return false;
}

/* 
00453ECC func_00453ECC
00455D38 analoop
*/
static void func_00453ECC(struct Intval *arg0, struct Intval *arg1) {
    struct IntvalList *pred;
    struct Graphnode *node;
    struct IntvalList *list_s0;

    if (arg0 != NULL) {
        pred = arg0->predecessors;
        while (pred != NULL) {
            if (pred->intv->intv8 == arg1) {
                arg0->unk28 = 3;
                func_00453DC0(pred->intv, arg1);
                node = func_00453E58(arg0);
                if (node->unk4 == 0) {
                    if (usefeedback == 0 || curproc->unk34 == NULL || func_00453E7C(node) != 0) {
                        node->unk5 = 1;
                    }
                }
            }
            pred = pred->next;
        }

        list_s0 = arg1->intvList4;
        do {
            func_00453ECC(list_s0->intv->intvC, list_s0->intv);
            list_s0 = list_s0->next;
        } while(list_s0 != 0);
    }
}


/* Inner function
00455D38 analoop
*/
static struct Intval *func_00454038(struct Graphnode *node, struct Intval *intvHead) {
    struct Intval *l = intvHead;

    while (l->graphnode != node) {
        l = l->next;
    }
    return l;
}

/* 
00455518 func_00455518

expr->isop.op2->type = isconst
*/
static void func_00454060(struct Statement *stat, struct Expression *expr, int incre) {
    int diff;
    unsigned int initial;
    unsigned int range;

    if (expr->data.isop.opc == Uequ || expr->data.isop.opc == Uneq) {
        if ((stat->u.jp.unk25 != 0 && expr->data.isop.opc == Uneq) || (stat->u.jp.unk25 == 0 && expr->data.isop.opc == Uequ)) {
            // s64 or s32
            if (expr->datatype == Idt || expr->datatype == Jdt) {
                if (incre > 0) {
                    diff = expr->data.isop.op2->data.isconst.number.intval - stat->u.jp.unk20->data.isconst.number.intval;
                    if ((diff > 0) && ((diff % incre) == 0)) {
                        stat->u.jp.unk1C = incre;
                        return;
                    }
                } else {
                    diff = stat->u.jp.unk20->data.isconst.number.intval - expr->data.isop.op2->data.isconst.number.intval;
                    if ((diff > 0) && ((diff % incre) == 0)) {
                        stat->u.jp.unk1C = incre;
                        return;
                    }
                }
            // u64 or u32
            } else if (incre > 0) {
                initial = stat->u.jp.unk20->data.isconst.number.uintval;
                range = expr->data.isop.op2->data.isconst.number.uintval;
                if ((initial < range) && ((signed int)(range - initial) % incre) == 0) {
                    stat->u.jp.unk1C = incre;
                    return;
                }
            } else {
                initial = stat->u.jp.unk20->data.isconst.number.uintval;
                range = expr->data.isop.op2->data.isconst.number.uintval;
                if ((range < initial) && ((signed int)(initial - range) % incre) == 0) {
                    stat->u.jp.unk1C = incre;
                    return;
                }
            }
        }
    } else {
        if ((stat->u.jp.unk25 != 0 && expr->data.isop.opc == Ules) || (stat->u.jp.unk25 == 0 && expr->data.isop.opc == Ugeq)) {
            // s64 or s32
            if (expr->datatype == Idt || expr->datatype == Jdt) {
                if (incre > 0 && ((expr->data.isop.op2->data.isconst.number.intval - stat->u.jp.unk20->data.isconst.number.intval) > 0)) {
                    stat->u.jp.unk1C = incre;
                    return;
                }
            // u64 or u32
            } else if (incre > 0 && (stat->u.jp.unk20->data.isconst.number.uintval < expr->data.isop.op2->data.isconst.number.uintval)) {
                stat->u.jp.unk1C = incre;
                return;
            }
        } else {
            // s64 or s32
            if (expr->datatype == Idt || expr->datatype == Jdt) {
                if (incre < 0 && (stat->u.jp.unk20->data.isconst.number.intval - expr->data.isop.op2->data.isconst.number.intval) > 0) {
                    stat->u.jp.unk1C = incre;
                    return;
                }
            // u64 or u32
            } else if (incre < 0 && (expr->data.isop.op2->data.isconst.number.uintval < stat->u.jp.unk20->data.isconst.number.uintval)) {
                stat->u.jp.unk1C = incre;
            }
        }


    }
}

/* 
00454514 func_00454514
*/
static bool func_00454378(bool arg0, struct Expression *stat_expr, struct Expression *expr_sp54, struct Expression *expr_op_sp50, struct Expression *expr_unk20) {
    Uopcode temp_a3;
    bool unk20_isconst;
    Uopcode phi_a0;
    struct IChain *var_ichain;
    bool phi_t1;

    if (stat_expr->type != isop) {
        return false;
    }

    if (stat_expr->data.isop.op2 == NULL) {
        return false;
    }
    temp_a3 = expr_sp54->data.isop.opc;

    if (expr_op_sp50 == expr_sp54->data.isop.op2) {
        arg0 = !arg0;
        unk20_isconst = false;
        var_ichain = expr_sp54->data.isop.op1->ichain;
        phi_t1 = false;
    } else {
        if (expr_unk20->type == isconst) {
            unk20_isconst = true;
            phi_t1 = true; // used to be undefined sp2
        } else {
            arg0 = !arg0;
            unk20_isconst = false;
            phi_t1 = true;
        }
        var_ichain = expr_sp54->data.isop.op2->ichain;
    }

    phi_a0 = temp_a3;
    if (arg0) {
        if (temp_a3 == Ules) {
            phi_a0 = Ugeq;
        } else {
            phi_a0 = Ules;
        }
    }

    if (unk20_isconst) {
        return stat_expr->data.isop.opc == phi_a0
            && stat_expr->data.isop.op1->ichain == var_ichain
            && (expr_unk20->data.isconst.number.intval + 1) == stat_expr->data.isop.op2->data.isconst.number.intval;
    } else if (!phi_t1) {
        return stat_expr->data.isop.opc == phi_a0
            && stat_expr->data.isop.op1->ichain == var_ichain
            && stat_expr->data.isop.op2->ichain == expr_unk20->ichain;
    } else {
        return stat_expr->data.isop.opc == phi_a0
            && stat_expr->data.isop.op2->ichain == var_ichain
            && stat_expr->data.isop.op1->ichain == expr_unk20->ichain;
    }

    return false;
}

/* 
00454920 func_00454920
*/
static bool func_00454514(struct Graphnode *node_shared_sp30, struct Expression *expr_sp54, struct Expression *expr_op_sp50, struct Expression *expr_unk20, bool jp_unk25) {
    struct Graphnode *prev_node_s0;
    struct GraphnodeList *pred_s0;
    struct Graphnode *node_s2;
    struct GraphnodeList *predecessors;
    bool cond_v0;
    struct Graphnode *phi_a1;

    pred_s0 = node_shared_sp30->predecessors;
    while (pred_s0 != NULL &&
            (!bvectin(pred_s0->graphnode->num, &node_shared_sp30->bvs.stage1.u.precm.pavin) ||
             pred_s0->graphnode == node_shared_sp30)) {
        pred_s0 = pred_s0->next;
    }

    if (pred_s0 == NULL) {
        return false;
    }

    node_s2 = pred_s0->graphnode;
    if (node_s2->stat_tail->opc == Ucia
            || node_s2->stat_tail->opc == Ucup
            || node_s2->stat_tail->opc == Uicuf
            || node_s2->stat_tail->opc == Ufjp
            || node_s2->stat_tail->opc == Utjp) {
        return false;
    }

    if (expr_op_sp50 == expr_sp54->data.isop.op1) {
        if (bvectin0(expr_sp54->data.isop.op2->ichain->bitpos, &node_s2->bvs.stage1.alters) != 0) {
            return false;
        }
    } else {
        if (bvectin0(expr_sp54->data.isop.op1->ichain->bitpos, &node_s2->bvs.stage1.alters) != 0) {
            return false;
        }
    }

    if (expr_unk20->type != islda && expr_unk20->type != isconst) {
        if (bvectin0(expr_unk20->ichain->bitpos, &node_s2->bvs.stage1.alters)) {
            return false;
        }
    }

    predecessors = node_s2->predecessors;
    while (predecessors != NULL && predecessors->next == NULL) {
        prev_node_s0 = node_s2;
        node_s2 = predecessors->graphnode;
        if (expr_unk20->type != islda && expr_unk20->type != isconst) {
            if (bvectin0(expr_unk20->ichain->bitpos, &node_s2->bvs.stage1.alters)) {
                return false;
            }
        }

        if (node_s2->stat_tail->opc == Ufjp || node_s2->stat_tail->opc == Utjp) {
            if (node_s2->stat_tail->u.jp.target_blockno == node_s2->successors->graphnode->blockno) {
                phi_a1 = node_s2->successors->graphnode;
            } else {
                phi_a1 = node_s2->successors->next->graphnode;
            }

            cond_v0 = (node_s2->stat_tail->opc == Ufjp && phi_a1 == prev_node_s0) ||
                (node_s2->stat_tail->opc == Utjp && phi_a1 != prev_node_s0);
            if (jp_unk25 == cond_v0) {
                if (func_00454378(false, node_s2->stat_tail->expr, expr_sp54, expr_op_sp50, expr_unk20)
                        || expr_sp54->ichain == node_s2->stat_tail->expr->ichain) {
                    return true;
                }
            } else {
                if (func_00454378(true, node_s2->stat_tail->expr, expr_sp54, expr_op_sp50, expr_unk20)) {
                    return true;
                }
            }
        } else {

            if (node_s2->stat_tail->opc == Ucia
                    || node_s2->stat_tail->opc == Ucup
                    || node_s2->stat_tail->opc == Uicuf) {
                return false;
            }
            //temp_s0_6 = node_s2 + 0x10C;
            if (expr_op_sp50 == expr_sp54->data.isop.op1) {
                if (bvectin0(expr_sp54->data.isop.op2->ichain->bitpos, &node_s2->bvs.stage1.alters)) {
                    return false;
                }
            } else {
                if (bvectin0(expr_sp54->data.isop.op1->ichain->bitpos, &node_s2->bvs.stage1.alters)) {
                    return false;
                }
            }
        }

        predecessors = node_s2->predecessors;
    }

    return false;
}

/* 
00455518 func_00455518
*/
static void func_00454920(struct Statement *stat, struct Expression *expr_sp54, struct Expression *expr_op_sp50, struct Graphnode *node_shared_sp30, int incre) {

    if (expr_sp54->data.isop.opc == Uequ || expr_sp54->data.isop.opc == Uneq) {
        if ((stat->u.jp.unk25 != 0 && expr_sp54->data.isop.opc == Uneq) ||
                (stat->u.jp.unk25 == 0 && expr_sp54->data.isop.opc == Uequ)) {
            stat->u.jp.unk1C = incre;
        }
        return;
    }

    if ((((stat->u.jp.unk25 != 0 && expr_op_sp50 == expr_sp54->data.isop.op1) ||
          (stat->u.jp.unk25 == 0 && expr_op_sp50 == expr_sp54->data.isop.op2)) 
                && expr_sp54->data.isop.opc == Ules) ||

        (((stat->u.jp.unk25 == 0 && expr_op_sp50 == expr_sp54->data.isop.op1) ||
          (stat->u.jp.unk25 != 0 && expr_op_sp50 == expr_sp54->data.isop.op2)) 
                && expr_sp54->data.isop.opc == Ugeq)) {
        if (incre == 1 && func_00454514(node_shared_sp30, expr_sp54, expr_op_sp50, stat->u.jp.unk20, stat->u.jp.unk25) != 0) {
            stat->u.jp.unk1C = 1;
        }
    } else {
        if (incre == -1 && func_00454514(node_shared_sp30, expr_sp54, expr_op_sp50, stat->u.jp.unk20, stat->u.jp.unk25) != 0) {
            stat->u.jp.unk1C = -1;
        }
    }
}

// Searches towards arg0->stat_head for a store statement
/* 
00455518 func_00455518
*/
static bool func_00454AB8(struct Graphnode *arg0, struct IChain *arg1, struct Statement **arg2) {
    struct BitVector *sp2C;
    struct Graphnode *node_a2;
    struct GraphnodeList *nodelist_pred_s0;
    struct Statement *stat_v1;
    bool phi_a1;
    bool phi_a0;

    nodelist_pred_s0 = arg0->predecessors;
    sp2C = &arg0->bvs.stage1.u.precm.pavin;
    while (nodelist_pred_s0 != NULL && (bvectin(nodelist_pred_s0->graphnode->num, sp2C) == 0 || arg0 == nodelist_pred_s0->graphnode)) {
        nodelist_pred_s0 = nodelist_pred_s0->next;
    }
    
    if (nodelist_pred_s0 == NULL) {
        return false;
    }

    node_a2 = nodelist_pred_s0->graphnode;
    stat_v1 = node_a2->stat_tail;

    phi_a1 = false;
    phi_a0 = false;

    while (!phi_a1 && !phi_a0) {
        if ((stat_v1->opc == Uisst || stat_v1->opc == Ustr) && arg1 == stat_v1->expr->ichain) {
            phi_a1 = true;
        } else {
            if (stat_v1->prev == NULL) {
                phi_a0 = true;
            } else {
                phi_a0 = node_a2 != stat_v1->prev->graphnode;
                stat_v1 = stat_v1->prev;
            }
        }
    }

    while (!phi_a1 && node_a2->predecessors != NULL && node_a2->predecessors->next == NULL) {

        node_a2 = node_a2->predecessors->graphnode;
        phi_a0 = false;
        while (!phi_a1 && !phi_a0) {
            if ((stat_v1->opc == Uisst || stat_v1->opc == Ustr) && arg1 == stat_v1->expr->ichain) {
                phi_a1 = true;
            } else {
                if (stat_v1->prev == NULL) {
                    phi_a0 = true;
                } else {
                    phi_a0 = node_a2 != stat_v1->prev->graphnode;
                    stat_v1 = stat_v1->prev;
                }
            }
        }
    }

    *arg2 = stat_v1;
    return phi_a1;
}

/* 
00454D08 func_00454D08
00454F00 func_00454F00
*/
static bool func_00454D08(struct Intval *intv, struct Expression *expr, struct Graphnode *sp60) {
    struct Graphnode *node_s0;
    struct IntvalList *intvlist_s0;

    if (intv->intvList4 == NULL) {
        node_s0 = intv->graphnode;
        if (node_s0->loopdepth < sp60->loopdepth) {
            return true;
        } else {
            //0x10C
            if (bvectin0(expr->ichain->bitpos, &node_s0->bvs.stage1.alters) != 0) {
                return false;
            }
            if ((node_s0->stat_tail->opc == Ucia) && (lang == LANG_ADA)) {
                return false;
            }
            if (node_s0->stat_tail->opc == Ucup || node_s0->stat_tail->opc == Uicuf) {
                if (clkilled(node_s0->stat_tail->u.call.level, node_s0->stat_tail->u.call.proc, expr) != 0) {
                    return false;
                }
                if (listplkilled(node_s0->stat_tail->u.call.parameters, expr, 1) != 0) {
                    return false;
                }
            } else if (node_s0->stat_tail->opc == Ucia) {
                if (((node_s0->stat_tail->u.cia.flags & 1) != 0) && (clkilled(curlevel, indirprocs, expr) != 0)) {
                    return false;
                }
                if (listplkilled(node_s0->stat_tail->u.cia.parameters, expr, 1) != 0) {
                    return false;
                }
            }
        }
    } else {
        intvlist_s0 = intv->intvList4;

        do {
            if (!func_00454D08(intvlist_s0->intv, expr, sp60)) {
                return false;
            }
            intvlist_s0 = intvlist_s0->next;
        } while (intvlist_s0 != NULL);
    }
    return true;
}

/* 
00454F00 func_00454F00
00455518 func_00455518
*/
static bool func_00454F00(struct Intval *arg0, struct Expression *expr, struct Graphnode *sp60) {
    bool ret;

    switch (expr->type) {
        case islda:
        case isilda:
        case isconst:
        case isrconst:
            return true;

        case isvar:
        case issvar:
            return func_00454D08(arg0, expr, sp60);

        case isop:
            if (expr->data.isop.opc == Uiequ || expr->data.isop.opc == Uigeq
                    || expr->data.isop.opc == Uigrt || expr->data.isop.opc == Uildv
                    || expr->data.isop.opc == Uileq || expr->data.isop.opc == Uiles
                    || expr->data.isop.opc == Uilod || expr->data.isop.opc == Uineq) {
                return false;
            }
            
            ret = func_00454F00(arg0, expr->data.isop.op1, sp60);
            if (ret && optab[expr->data.isop.opc].is_binary_op) {
                ret = func_00454F00(arg0, expr->data.isop.op2, sp60);
            }
            
            return ret;

        default:
        case empty:
        case dumped:
            caseerror(1, 0x33D, "uoptloop.p", 0xA);
            return false; // previously undefined
    }

    return false;
}

/* 
00455060 func_00455060
00455518 func_00455518
*/
static void func_00455060(struct Intval *intv_parent_arg1, struct Graphnode* sp60, struct Expression *expr_op_sp50, bool *sp4F, struct Expression **expr_sp48) {
    struct Graphnode *node_s2;

    struct VarAccessList *vl_s0;
    struct IntvalList *phi_s0;

    if (intv_parent_arg1->intvList4 == NULL) {
        node_s2 = intv_parent_arg1->graphnode;
        if (node_s2->loopdepth >= sp60->loopdepth) {

            // call inline asm
            if ((node_s2->stat_tail->opc == Ucia) && (lang == LANG_ADA)) {
                *sp4F = true;
                return;
            }

            if (node_s2->stat_tail->opc == Ucup || node_s2->stat_tail->opc == Uicuf) {
                if (cupaltered(expr_op_sp50->ichain, node_s2->stat_tail->u.call.level, node_s2->stat_tail->u.call.proc) != 0) {
                    *sp4F = true;
                    return;
                }
                if (listplkilled(node_s2->stat_tail->u.call.parameters, expr_op_sp50, 1)) {
                    *sp4F = true;
                    return;
                }
            } else if (node_s2->stat_tail->opc == Ucia) {
                //! wtf
                if ((node_s2->stat_tail->u.cia.flags & 1) && cupaltered(expr_op_sp50->ichain, node_s2->stat_tail->u.call.level, node_s2->stat_tail->u.call.proc)) {
                    *sp4F = true;
                    return;
                }
                if (listplkilled(node_s2->stat_tail->u.cia.parameters, expr_op_sp50, 1)) {
                    *sp4F = true;
                    return;
                }
            }

            // 0x10C
            if (bvectin0(expr_op_sp50->ichain->bitpos, &node_s2->bvs.stage1.alters) == 0) {
                return;
            }

            if (node_s2->loopdepth > sp60->loopdepth) {
                *sp4F = true;
                return;
            }
        }

        vl_s0 = node_s2->varlisthead;
        while (vl_s0 != 0) {
            if (vl_s0->type == 1
                    && (vl_s0->data.store->opc == Uisst || vl_s0->data.store->opc == Ustr)
                    && expr_op_sp50->ichain == vl_s0->data.store->expr->ichain) {

                if ((vl_s0->data.store->unk1 == false) || *expr_sp48 != NULL) {
                    *sp4F = true;
                    return;
                }

                // 0x164
                if (bvectin(node_s2->num, &sp60->bvs.stage1.u.precm.pavin) == 0) {
                    *sp4F = true;
                    return;
                }

                *expr_sp48 = vl_s0->data.store->expr->data.isvar_issvar.unk34;
            }
            vl_s0 = vl_s0->next;
        }

    } else {
        phi_s0 = intv_parent_arg1->intvList4;
        do {
            func_00455060(phi_s0->intv, sp60, expr_op_sp50, sp4F, expr_sp48);
            phi_s0 = phi_s0->next;
        } while (phi_s0 != NULL && *sp4F == false);
    }
}

/* 
00455354 func_00455354
00455518 func_00455518
*/
static bool func_00455354(struct Intval *arg0) {
    struct IntvalList *phi_s0;

    if (arg0->intvList4 == NULL) {
        if (arg0->graphnode->stat_tail->opc == Uclab
                || arg0->graphnode->stat_tail->opc == Ucup
                || arg0->graphnode->stat_tail->opc == Uicuf
                || arg0->graphnode->stat_tail->opc == Uijp
                || arg0->graphnode->stat_tail->opc == Uxjp) {
            return true;
        }
    } else {
        phi_s0 = arg0->intvList4;
        do {
            if (func_00455354(phi_s0->intv)) {
                return true;
            }
            phi_s0 = phi_s0->next;
        } while (phi_s0 != NULL);
    }
    return false;
}

/* 
00455518 func_00455518
*/
static bool func_00455418(struct Intval *arg0, int arg1, int arg2) {
    struct Graphnode *node_a0;
    struct Graphnode *node_a2;
    struct IntvalList *phi_v0;
    int count;

    phi_v0 = arg0->intvList4;
    count = 0;
    do {
        node_a0 = phi_v0->intv->graphnode;
        if (node_a0->num >= arg1 && arg2 >= node_a0->num) {
            count++;
            if (node_a0->stat_tail->opc == Ufjp
                    || node_a0->stat_tail->opc == Utjp
                    || node_a0->stat_tail->opc == Uujp) {
                node_a2 = node_a0->successors->graphnode;
                if (node_a0->stat_tail->u.jp.target_blockno != node_a0->successors->graphnode->blockno) {
                    node_a2 = node_a0->successors->next->graphnode;
                }
                if (node_a2->num < arg1) {
                    return false;
                }
                if (arg2 < node_a2->num) {
                    return false;
                }
            }
        } else {
            if (phi_v0->intv->unk28 == 3) {
                return false;
            }
        }
        phi_v0 = phi_v0->next;
    } while (phi_v0 != NULL); 

    return count == ((arg2 - arg1) + 1);
}

/* 
00455518 func_00455518
00455C48 func_00455C48
*/
static void func_00455518(struct Intval *arg0, struct Intval *intv_parent_arg0, struct Intval *intv_parent_arg1, struct Graphnode *node_shared_sp30) {
    //void *sp6C;                      //   <
    struct IntvalList *sp68;           // S | unused in inner functions, whew
    struct Graphnode *node_sp60;       // h |
    struct Statement *stat_sp5C;       // a | type = jp
    struct Statement *stat_sp58;       // r | type = store
    struct Expression *expr_sp54;      // e | type = isop
    struct Expression *expr_op_sp50;   // d | type = isvar
    bool sp4F;                         //   |
    struct Expression *expr_sp48;      //   <

    int incre; // shared
    //struct Graphnode *node_shared_sp30; // sp38, shared
    //struct Intval *intv_parent_arg1; // (*(sp6C+4), sp3c in parent) sp34, shared
    //struct Intval *intv_parent_arg0; // (*(sp6C), sp38 in parent), shared

    //s32 sp2C; // shared from analoop

    //void *temp_t0;
    struct Graphnode *phi_a1;
    struct Graphnode *phi_a0;

    if (arg0->intvList4 == NULL) {
        node_sp60 = arg0->graphnode;
        if (node_shared_sp30->loopdepth != node_sp60->loopdepth) {
            return;
        }
        stat_sp5C = node_sp60->stat_tail;
        // only conditional jumps allowed
        if (stat_sp5C->opc != Ufjp && stat_sp5C->opc != Utjp) {
            return;
        }
        if (node_sp60->successors->next->graphnode->loopdepth == node_sp60->successors->graphnode->loopdepth) {
            return;
        }
        expr_sp54 = stat_sp5C->expr;
        if (expr_sp54->type != isop) {
            return;
        }
        if (expr_sp54->data.isop.opc != Uequ
                && expr_sp54->data.isop.opc != Ugeq
                && expr_sp54->data.isop.opc != Ules
                && expr_sp54->data.isop.opc != Uneq) {
            return;
        }

        if (node_shared_sp30->predecessors->next->next != NULL) {
            return;
        }

        // pointer, int, and unsigned int only
        // would == <constant>ll prevent unrolling?
        if (expr_sp54->datatype != Adt
                && expr_sp54->datatype != Jdt
                && expr_sp54->datatype != Ldt) {
            return;
        }

        expr_op_sp50 = expr_sp54->data.isop.op1;

        if (expr_op_sp50->type != isvar) {
            return;
        }

        sp4F = false; // set in 00455060
        expr_sp48 = NULL; // set in 00455060
        if (expr_op_sp50->data.isvar_issvar.unk22) {
            func_00455060(intv_parent_arg1, node_sp60, expr_op_sp50, &sp4F, &expr_sp48);
        }

        if (sp4F != false || expr_sp48 == NULL) {
            expr_op_sp50 = stat_sp5C->expr->data.isop.op2;
            if (expr_op_sp50->type == isvar) {
                sp4F = false;
                expr_sp48 = NULL;
                if (expr_op_sp50->data.isvar_issvar.unk22) {
                    func_00455060(intv_parent_arg1, node_sp60, expr_op_sp50, &sp4F, &expr_sp48);
                }
            }
        }

        if (sp4F != 0 || expr_sp48 == NULL) {
            return;
        }

        if (func_00454AB8(node_shared_sp30, expr_op_sp50->ichain, &stat_sp58)) {
            stat_sp5C->u.jp.unk20 = stat_sp58->expr->data.isvar_issvar.unk34;
            if (stat_sp58->expr->data.isvar_issvar.unk34->type == isconst) {
                stat_sp5C->u.jp.unk27 = true;
            } else {
                stat_sp5C->u.jp.unk27 = false;
            }
        } else {
            stat_sp5C->u.jp.unk27 = false;
            stat_sp5C->u.jp.unk20 = NULL;
        }

        if (stat_sp5C->u.jp.target_blockno == node_sp60->successors->graphnode->blockno) {
            phi_a1 = node_sp60->successors->next->graphnode;
            phi_a0 = node_sp60->successors->graphnode;
        } else {
            phi_a1 = node_sp60->successors->graphnode;
            phi_a0 = node_sp60->successors->next->graphnode;
        }

        if (phi_a1->loopdepth == phi_a0->loopdepth) {
            return;
        }

        if (phi_a1->loopdepth < phi_a0->loopdepth) {
            if (phi_a0 != node_shared_sp30) {
                if (phi_a0->successors->next != NULL || node_shared_sp30 != phi_a0->successors->graphnode) {
                    return;
                }
            }
            stat_sp5C->u.jp.unk25 = stat_sp5C->opc == Utjp;
        } else {
            if (phi_a1 != node_shared_sp30) {
                if (phi_a1->successors->next != NULL || node_shared_sp30 != phi_a1->successors->graphnode) {
                    return;
                }
            }
            stat_sp5C->u.jp.unk25 = stat_sp5C->opc == Ufjp;
        }

        incre = findincre(expr_sp48);
        if (stat_sp5C->u.jp.unk27 && expr_sp54->data.isop.op2->type == isconst) {
            func_00454060(stat_sp5C, expr_sp54, incre);
        } else {
            if (((incre == 1 || incre == -1) && stat_sp5C->u.jp.unk20 != NULL)
                    || (expr_sp54->data.isop.opc == Uequ || expr_sp54->data.isop.opc == Uneq)) {
                if (expr_op_sp50 == expr_sp54->data.isop.op1) {
                    if (func_00454F00(intv_parent_arg1, expr_sp54->data.isop.op2, node_sp60)) {
                        func_00454920(stat_sp5C, expr_sp54, expr_op_sp50, node_shared_sp30, incre);
                        stat_sp5C->u.jp.unk26 = true;
                        stat_sp5C->u.jp.unk27 = false;
                    }
                } else {
                    if (func_00454F00(intv_parent_arg1, expr_sp54->data.isop.op1, node_sp60)) {
                        func_00454920(stat_sp5C, expr_sp54, expr_op_sp50, node_shared_sp30, incre);
                        stat_sp5C->u.jp.unk26 = false;
                        stat_sp5C->u.jp.unk27 = false;
                    }
                }
            }
        }

        if (stat_sp5C->u.jp.unk1C == 0) {
            return;
        }

        //! BUG: Most of the time, stat_head->prev->opc is Unop, but in a few cases it's Uloc
        // if node_shared_sp30->unkBb4 != 0 and u.loc.page is odd, loop unrolling will be prevented
        if ((!node_shared_sp30->unkBb4 || (node_shared_sp30->stat_head->prev->u.nop.flags & 1) == 0) &&
                (node_sp60 == node_shared_sp30
                 || (intv_parent_arg0->intvList4 == NULL
                     && !func_00455354(intv_parent_arg1)
                     && func_00455418(intv_parent_arg1, node_shared_sp30->num, node_sp60->num)
                     && ((expr_op_sp50->data.isvar_issvar.var_data.memtype == Mmt
                             || expr_op_sp50->data.isvar_issvar.var_data.memtype == Pmt)
                         || in_fsym(expr_op_sp50->data.isvar_issvar.var_data.blockno))))) {
            if (node_shared_sp30->predecessors->next->next == 0) {
                if (node_sp60 == node_shared_sp30->predecessors->graphnode && node_shared_sp30->predecessors->next->graphnode->successors->next == NULL) {
                    node_shared_sp30->unk5 = 2; // canunroll
                } else if (node_shared_sp30->predecessors->graphnode->successors->next == NULL && node_shared_sp30 == node_shared_sp30->predecessors->next->graphnode) {
                    node_shared_sp30->unk5 = 2; // canunroll
                }
            }
        }

        if (listwritten) {
            write_string(list.c_file, "EQ_INEQ at BB:", 14, 14);
            write_integer(list.c_file, node_sp60->num, 12, 10);
            writeln(list.c_file);
        }
        return;
    } else {
        //sp6C = temp_t0;
        sp68 = arg0->intvList4;
        do {
            func_00455518(sp68->intv, intv_parent_arg0, intv_parent_arg1, node_shared_sp30);
            sp68 = sp68->next;
        } while (sp68 != 0);
    }
}

/* 
00455C48 func_00455C48
00455D38 analoop
*/
static void func_00455C48(struct Intval *arg0, struct Intval *arg1) {
    // sp38: shared stack for this function
    //s32 sp34; // shared stack from analoop
    //void *sp30; // node
    struct Graphnode *node_shared_sp30;
    struct IntvalList *list_s0;

    //sp34 = ERROR(Read from unset register $v0);
    if (arg0 != NULL) {
        if (arg0->unk28 == 3) {
            node_shared_sp30 = func_00453E58(arg0);
            if (node_shared_sp30->unk4 == 0) {
                list_s0 = arg1->intvList4;
                do {
                    if (list_s0->intv->unk28 == 3) {
                        func_00455518(list_s0->intv, arg0, arg1, node_shared_sp30);
                    }
                    list_s0 = list_s0->next;
                } while (list_s0 != NULL);
            }
        }
        list_s0 = arg1->intvList4;
        do {
            func_00455C48(list_s0->intv->intvC, list_s0->intv);
            list_s0 = list_s0->next;
        } while (list_s0 != NULL);
    }
}

/* 
00456A2C oneproc
*/
void analoop() {
    struct Intval *sp88;
    struct AllocBlock *sp6C;
    struct BitVector sp64;
    struct BitVectorBlock sp48;
    struct Intval *intv_s2;
    struct Intval *tempIntval;
    struct GraphnodeList *nodelist_s0;
    struct IntvalList *intvList_s1;
    struct Graphnode *node_s3;
    bool repeat;
    int oldIntval;
    int it_s0;

    bvlivransize = ((unsigned) (curstaticno - 1) >> 7) + 1; // (curstaticno / 128) + 1, but 33554432 at 0
    sp6C = alloc_mark(&intv_heap);
    sp88 = alloc_new(sizeof(struct Intval), &intv_heap);
    sp88->intvC = NULL;
    sp88->unk1C = 0;
    sp88->intvList4 = NULL;
    sp88->intv8 = NULL;
    sp88->prev = NULL;
    sp88->loop = NULL;
    sp88->unk28 = 0;
    sp88->loopdepth = 0;
    sp88->unk29 = 0;
    sp88->graphnode = graphhead;

    intv_s2  = sp88;
    node_s3 = graphhead->next;
    numintval = 1;

    while (node_s3 != NULL) {
        tempIntval = alloc_new(sizeof(struct Intval), &intv_heap);
        intv_s2->next = tempIntval;
        tempIntval->intvC = NULL;
        tempIntval->graphnode = node_s3;

        tempIntval->unk1C = 0;
        nodelist_s0 = node_s3->predecessors;
        while (nodelist_s0 != NULL) {
            tempIntval->unk1C++;
            nodelist_s0 = nodelist_s0->next;
        }
        tempIntval->intvList4 = NULL;
        tempIntval->intv8 = NULL;
        tempIntval->prev = NULL;
        tempIntval->loop = NULL;
        tempIntval->unk28 = 0;
        tempIntval->loopdepth = 0;
        tempIntval->unk29 = node_s3->unk4;
        node_s3 = node_s3->next;
        numintval++;
        intv_s2 = tempIntval;
    }

    intv_s2->next = NULL;
    node_s3 = graphhead;
    intv_s2 = sp88;
    while (intv_s2 != 0) {
        if (node_s3->successors == NULL) {
            intv_s2->successors = NULL;
        } else {
            intv_s2->successors = alloc_new(sizeof(struct IntvalList), &intv_heap);
            intv_s2->successors->intv = func_00454038(node_s3->successors->graphnode, sp88);
            intvList_s1 = intv_s2->successors;
            nodelist_s0 = node_s3->successors->next;
            while (nodelist_s0 != NULL) {
                intvList_s1->next = alloc_new(sizeof(struct IntvalList), &intv_heap);
                intvList_s1->next->intv = func_00454038(nodelist_s0->graphnode, sp88);
                nodelist_s0 = nodelist_s0->next;
                intvList_s1 = intvList_s1->next;
            }
            intvList_s1->next = NULL;
        }

        if (node_s3->predecessors == 0) {
            intv_s2->predecessors = NULL;
        } else {
            intv_s2->predecessors = alloc_new(sizeof(struct IntvalList), &intv_heap);
            intv_s2->predecessors->intv = func_00454038(node_s3->predecessors->graphnode, sp88);
            intvList_s1 = intv_s2->predecessors;
            nodelist_s0 = node_s3->predecessors->next;
            while (nodelist_s0 != NULL) {
                intvList_s1->next = alloc_new(sizeof(struct IntvalList), &intv_heap);
                intvList_s1->next->intv = func_00454038(nodelist_s0->graphnode, sp88);
                nodelist_s0 = nodelist_s0->next;
                intvList_s1 = intvList_s1->next;
            }
            intvList_s1->next = 0;
        }
        intv_s2 = intv_s2->next;
        node_s3 = node_s3->next;
    }

    do {
        oldIntval = numintval;
        sp88 = func_00453430(sp88);
        if (numintval == oldIntval) {
            break;
        }
    } while (numintval != 1);

    intv_s2 = sp88;
    do {
        intv_s2->loopdepth = 1;
        func_00453ECC(intv_s2->intvC, intv_s2);
        intv_s2 = intv_s2->next;
    } while (intv_s2 != NULL);

    graphhead->loopdepth = 0;
    it_s0 = 0;

    do {
        intv_s2 = sp88;

        do {
            func_00453C20(intv_s2, it_s0);
            intv_s2 = intv_s2->next;
        } while (intv_s2 != NULL);

        it_s0++;
    } while (graphhead->loopdepth == 0);

    node_s3 = graphhead;
    while (node_s3 != NULL) {

        node_s3->bvs.stage1.u.precm.pavin.num_blocks = 0;
        node_s3->bvs.stage1.u.precm.pavin.blocks = 0;
        checkinitbvlivran(&node_s3->bvs.stage1.u.precm.pavin);
        if (node_s3->predecessors == NULL || node_s3->unk4 != 0) {
            setbitbb(&node_s3->bvs.stage1.u.precm.pavin, node_s3->num);
        } else {
            sp48.words[0] = -1;
            sp48.words[1] = -1;
            sp48.words[2] = -1;
            sp48.words[3] = -1;
            initbv(&node_s3->bvs.stage1.u.precm.pavin, sp48);
        }
        node_s3 = node_s3->next;
    }

    sp64.num_blocks = 0;
    sp64.blocks = NULL;
    checkinitbvlivran(&sp64);


    do {
        node_s3 = graphhead;
        repeat = 0;
        while (node_s3 != NULL) {
            nodelist_s0 = node_s3->predecessors;
            if (nodelist_s0 != 0) {
                if (repeat == 0) {
                    bvectcopy(&sp64, &node_s3->bvs.stage1.u.precm.pavin);
                }

                do {
                    bvectintsect(&node_s3->bvs.stage1.u.precm.pavin, &nodelist_s0->graphnode->bvs.stage1.u.precm.pavin);
                    nodelist_s0 = nodelist_s0->next;
                } while (nodelist_s0 != NULL);

                setbitbb(&node_s3->bvs.stage1.u.precm.pavin, node_s3->num);
                if (repeat == 0) {
                    if (bvecteq(&sp64, &node_s3->bvs.stage1.u.precm.pavin) == 0) {
                        repeat = 1;
                    }
                }
            }
            node_s3 = node_s3->next;
        }
    } while (repeat != 0);

    intv_s2 = sp88;
    while (intv_s2 != NULL) {
        func_00455C48(intv_s2->intvC, intv_s2);
        intv_s2 = intv_s2->next;
    }
    alloc_release(&intv_heap, sp6C);
}
