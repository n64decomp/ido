#include "uoptdata.h"
#include "uoptions.h"
#include "uoptkill.h"
#include "uoptprep.h"
#include "uoptutil.h"
#include "uoptppss.h"
#include "stdio.h"


struct AllocBlock *intv_heap;

/*
00455D38 analoop
*/
static struct Interval *reduce_control_tree(struct Interval *intvHead) {
    struct Interval *newHead;
    struct IntervalList *pred;
    struct Interval *child;
    struct Interval *parent;
    struct IntervalList *region;
    struct IntervalList* curList;
    struct IntervalList* childSucc;
    struct IntervalList* parentSucc;
    bool done;
    bool repeat;

    intvHead->first = intvHead;
    intvHead->type = intv_unreduced;
    child = intvHead->next;
    while (child != NULL) {
        if (child->unk29 != 0) { // in oot, unk29 is always zero
            child->first = child;
            child->type = intv_unreduced;
        }
        child = child->next;
    }

    done = false;
    numintval = 0;
    child = intvHead;

    // Create the next level of the tree from acyclic intervals in the current level
    do {
        if (child == intvHead) {
            newHead = alloc_new(sizeof(struct Interval), &intv_heap);
            parent = newHead;
        } else {
            parent->next = alloc_new(sizeof(struct Interval), &intv_heap);
            parent = parent->next;
        }

        parent->graphnode = NULL;
        parent->numPredecessors = 0;
        parent->first = NULL;
        parent->type = intv_unvisited;
        parent->parent = NULL;
        parent->successors = NULL;
        parent->predecessors = NULL;
        parent->loopdepth = 0;
        parent->child = child;
        parent->loop = NULL;

        child->parent = parent;
        child->type = intv_acyclic;

        parent->unk29 = child->unk29;
        parent->region = alloc_new(sizeof(struct IntervalList), &intv_heap);
        parent->region->intv = child;

        numintval++;

        region = parent->region;
        curList = region;
        repeat = false;

        while (region != NULL) {
            region->intv->type = intv_acyclic;
            childSucc = region->intv->successors;

            while (childSucc != NULL) {
                childSucc->intv->numPredecessors--;

                if (childSucc->intv->first == NULL) {
                    childSucc->intv->first = parent->region->intv;

                    // Add the child to the region
                    if (childSucc->intv->numPredecessors == 0) {
                        curList->next = alloc_new(sizeof(struct IntervalList), &intv_heap);
                        curList->next->intv = childSucc->intv;
                        childSucc->intv->parent = parent;
                        curList = curList->next;
                    } else {
                        childSucc->intv->type = intv_unreduced;
                    }
                } else if (parent->region->intv == childSucc->intv->first 
                        && childSucc->intv->numPredecessors == 0 
                        && childSucc->intv->type != intv_acyclic) {

                    curList->next = alloc_new(sizeof(struct IntervalList), &intv_heap);
                    curList->next->intv = childSucc->intv;
                    childSucc->intv->parent = parent;
                    childSucc->intv->type = intv_unvisited;
                    curList = curList->next;
                }

                childSucc = childSucc->next;
            }

            curList->next = NULL;
            region = region->next;
        }

        // Repeat from the next unreduced child
        do {
            child = child->next;
            if (child != NULL) {
                repeat = child->type == intv_unreduced;
            }
        } while (!repeat && child != NULL);

        // Look for any intervals that were missed in the first pass
        if (!repeat) {
            child = intvHead;
            do {
                child = child->next;
                if (child == NULL) {
                    done = true;
                } else {
                    repeat = child->type == intv_unreduced;
                }
            } while(!repeat && !done);
        }
    } while (!done);
    parent->next = NULL;

    // Find the successors and predecessors of each of the parents
    // If a child's successor has a different parent, that parent is a successor of the current parent
    parent = newHead;
    do {
        region = parent->region;
        do {
            childSucc = region->intv->successors;

            while (childSucc != NULL) {
                if (childSucc->intv->parent != parent) {
                    if (parent->successors == NULL) {
                        parent->successors = alloc_new(sizeof(struct IntervalList), &intv_heap);
                        parent->successors->intv = childSucc->intv->parent;
                        parent->successors->next = NULL;
                        childSucc->intv->parent->numPredecessors++;

                        pred = alloc_new(sizeof(struct IntervalList), &intv_heap);
                        pred->intv = parent;
                        pred->next = childSucc->intv->parent->predecessors;
                        childSucc->intv->parent->predecessors = pred;
                    } else {
                        // Determine if the parent is already a successor
                        parentSucc = parent->successors;

                        if (parentSucc->intv != childSucc->intv->parent) {
                            parentSucc = parent->successors;

                            while (parentSucc->next != NULL && parentSucc->intv != childSucc->intv->parent) {
                                parentSucc = parentSucc->next;
                            }
                        }

                        if (parentSucc->intv != childSucc->intv->parent) {
                            parentSucc->next = alloc_new(sizeof(struct IntervalList), &intv_heap);
                            parentSucc->next->next = 0;
                            parentSucc->next->intv = childSucc->intv->parent;
                            childSucc->intv->parent->numPredecessors++;

                            pred = alloc_new(sizeof(struct IntervalList), &intv_heap);
                            pred->intv = parent;
                            pred->next = childSucc->intv->parent->predecessors;
                            childSucc->intv->parent->predecessors = pred;
                        }
                    }
                }
                childSucc = childSucc->next;
            }
            region = region->next;
        } while (region != NULL);
        parent = parent->next;
    } while (parent != NULL);
    return newHead;
}

/* 
00453914 find_acyclic_loop_depth
*/
static struct Interval *find_common_ancestor(struct Interval *child, struct Interval *succ) {
    struct Interval *ancestor = child;
    struct Interval *succParent;
    struct Interval *childParent;

    childParent = child->parent;
    succParent = succ->parent;
    while (succParent != childParent) {
        ancestor = childParent;
        childParent = childParent->parent;
        succParent = succParent->parent;
    }
    return ancestor;
}

/* 
00453914 find_acyclic_loop_depth
00453C20 find_loop_relations
*/
static void find_acyclic_loop_depth(struct Interval *child, struct Interval *parent) {
    struct IntervalList *succ;

    succ = child->successors;
    if (succ == NULL) {
        child->loopdepth = 1;
        return;
    }

    if (child->loopdepth == 0) {
        child->loopdepth = 1;

        do {
            if (succ->intv->parent != parent) {
                struct Interval *ancestor = find_common_ancestor(parent, succ->intv->parent);
                if (child->loopdepth < ancestor->loopdepth) {
                    child->loopdepth = ancestor->loopdepth;
                    child->loop = ancestor->loop;
                }
            } else {
                find_acyclic_loop_depth(succ->intv, parent);
                if (child->loopdepth < succ->intv->loopdepth) {
                    child->loopdepth = succ->intv->loopdepth;
                    child->loop = succ->intv->loop;
                }
            }
            succ = succ->next;
        } while (succ != NULL);
    }
}

/* Inner function
00453C20 find_loop_relations
*/
static int power_10(unsigned int power) {
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
00453B04 new_loop
00453C20 find_loop_relations
*/
static struct Loop *new_loop(struct Interval *parent) {
    struct Loop *newLoop;

    // nested loop
    if (parent->loop != NULL) {
        newLoop = alloc_new(sizeof(struct Loop), &perm_heap);
        newLoop->loopno = curloopno++;
        newLoop->depth = parent->loop->depth + 1;
        newLoop->graphnode = 0;
        newLoop->child = NULL;
        newLoop->parent = parent->loop;

        newLoop->next = parent->loop->child;
        parent->loop->child = newLoop;
        return newLoop;
    }

    if (parent->parent != NULL) {
        return new_loop(parent->parent);
    }

    newLoop = alloc_new(sizeof(struct Loop), &perm_heap);
    newLoop->loopno = curloopno++;
    newLoop->depth = 1;
    newLoop->graphnode = NULL;
    newLoop->child = NULL;
    newLoop->parent = NULL;

    newLoop->next = toplevelloops;
    toplevelloops = newLoop;
    return newLoop;
}

/* 
00453C20 find_loop_relations
00455D38 analoop
*/
static void find_loop_relations(struct Interval *parent, int depth) {
    struct IntervalList *region;
    struct Graphnode *node;
    struct Loop *loop;

    // Leaf interval
    if (parent->region == NULL) {
        node = parent->graphnode;
        node->loopdepth = parent->loopdepth;
        node->loop = parent->loop;
        if (parent->loop != NULL && parent->loop->graphnode == NULL) {
            parent->loop->graphnode = node;
        }

        // some kind of weight?
        if (usefeedback == 0 || curproc->unk34 == 0) {
            node->unk2C = power_10(parent->loopdepth - 1);
        }
    } else if (depth == 0) {
        region = parent->region;
        loop = NULL;

        do {
            if (region->intv->type == intv_loop) {
                region->intv->loopdepth = parent->loopdepth + 1;
                if (loop == NULL) {
                    loop = new_loop(parent);
                }
                region->intv->loop = loop;
            } else if (region->intv->loopdepth == 0) {
                find_acyclic_loop_depth(region->intv, parent);
            }

            region = region->next;
        } while (region != NULL);
    } else {
        region = parent->region;

        do {
            find_loop_relations(region->intv, depth - 1);
            region = region->next;
        } while (region != NULL);
    }
    
}

/* 
00453DC0 extend_loop
00453ECC find_loops

Define all the predecessors with the same parent as being in a loop.
*/
static void extend_loop(struct Interval *child, struct Interval *parent) {
    struct IntervalList *pred;

    if (child->type == intv_loop) {
        return;
    }
    child->type = intv_loop;

    pred = child->predecessors;
    while (pred != NULL) {
        if (pred->intv->parent == parent) {
            extend_loop(pred->intv, parent);
        }
        pred = pred->next;
    }
}

/* 
00453ECC find_loops
00455C48 func_00455C48
*/
static struct Graphnode *find_loop_first_node(struct Interval *intv) {
    while (intv->region != NULL) {
        intv = intv->child;
    }
    return intv->graphnode;
}

/* 
00453ECC find_loops

usefeedback && node->unk34 != NULL
*/
static bool node_has_higher_weight(struct Graphnode *node) {
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
00453ECC find_loops
00455D38 analoop
*/
static void find_loops(struct Interval *child, struct Interval *parent) {
    struct Graphnode *firstLoopNode;
    struct IntervalList *pred;
    struct IntervalList *region;

    // if the first child in an interval has a predecessor (with the same parent),
    // then the first child is in a loop
    if (child != NULL) {
        pred = child->predecessors;
        while (pred != NULL) {
            if (pred->intv->parent == parent) {
                child->type = intv_loop;

                extend_loop(pred->intv, parent);
                firstLoopNode = find_loop_first_node(child);
                if (firstLoopNode->unk4 == 0) {
                    if (usefeedback == 0 || curproc->unk34 == NULL || node_has_higher_weight(firstLoopNode)) {
                        firstLoopNode->unk5 = 1; // loopfirstbb
                    }
                }
            }
            pred = pred->next;
        }

        region = parent->region;
        do {
            find_loops(region->intv->child, region->intv);
            region = region->next;
        } while(region != NULL);
    }
}


/* Inner function
00455D38 analoop
*/
static struct Interval *find_interval_with_graphnode(struct Graphnode *node, struct Interval *intvHead) {
    struct Interval *l = intvHead;

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
        if (bvectin0(expr_sp54->data.isop.op2->ichain->bitpos, &node_s2->bvs.stage1.alters)) {
            return false;
        }
    } else {
        if (bvectin0(expr_sp54->data.isop.op1->ichain->bitpos, &node_s2->bvs.stage1.alters)) {
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
        if (incre == 1 && func_00454514(node_shared_sp30, expr_sp54, expr_op_sp50, stat->u.jp.unk20, stat->u.jp.unk25)) {
            stat->u.jp.unk1C = 1;
        }
    } else {
        if (incre == -1 && func_00454514(node_shared_sp30, expr_sp54, expr_op_sp50, stat->u.jp.unk20, stat->u.jp.unk25)) {
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
static bool func_00454D08(struct Interval *intv, struct Expression *expr, struct Graphnode *sp60) {
    struct Graphnode *node_s0;
    struct IntervalList *intvlist_s0;

    if (intv->region == NULL) {
        node_s0 = intv->graphnode;
        if (node_s0->loopdepth < sp60->loopdepth) {
            return true;
        } else {
            //0x10C
            if (bvectin0(expr->ichain->bitpos, &node_s0->bvs.stage1.alters)) {
                return false;
            }
            if ((node_s0->stat_tail->opc == Ucia) && (lang == LANG_ADA)) {
                return false;
            }
            if (node_s0->stat_tail->opc == Ucup || node_s0->stat_tail->opc == Uicuf) {
                if (clkilled(node_s0->stat_tail->u.call.level, node_s0->stat_tail->u.call.proc, expr)) {
                    return false;
                }
                if (listplkilled(node_s0->stat_tail->u.call.parameters, expr, 1)) {
                    return false;
                }
            } else if (node_s0->stat_tail->opc == Ucia) {
                if ((node_s0->stat_tail->u.cia.flags & 1) && clkilled(curlevel, indirprocs, expr)) {
                    return false;
                }
                if (listplkilled(node_s0->stat_tail->u.cia.parameters, expr, 1)) {
                    return false;
                }
            }
        }
    } else {
        intvlist_s0 = intv->region;

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
static bool func_00454F00(struct Interval *arg0, struct Expression *expr, struct Graphnode *sp60) {
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
static void func_00455060(struct Interval *intv_parent_arg1, struct Graphnode* sp60, struct Expression *expr_op_sp50, bool *sp4F, struct Expression **expr_sp48) {
    struct Graphnode *node_s2;

    struct VarAccessList *vl_s0;
    struct IntervalList *phi_s0;

    if (intv_parent_arg1->region == NULL) {
        node_s2 = intv_parent_arg1->graphnode;
        if (node_s2->loopdepth >= sp60->loopdepth) {

            // call inline asm
            if ((node_s2->stat_tail->opc == Ucia) && (lang == LANG_ADA)) {
                *sp4F = true;
                return;
            }

            if (node_s2->stat_tail->opc == Ucup || node_s2->stat_tail->opc == Uicuf) {
                if (cupaltered(expr_op_sp50->ichain, node_s2->stat_tail->u.call.level, node_s2->stat_tail->u.call.proc)) {
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
        while (vl_s0 != NULL) {
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
        phi_s0 = intv_parent_arg1->region;
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
static bool func_00455354(struct Interval *arg0) {
    struct IntervalList *phi_s0;

    if (arg0->region == NULL) {
        if (arg0->graphnode->stat_tail->opc == Uclab
                || arg0->graphnode->stat_tail->opc == Ucup
                || arg0->graphnode->stat_tail->opc == Uicuf
                || arg0->graphnode->stat_tail->opc == Uijp
                || arg0->graphnode->stat_tail->opc == Uxjp) {
            return true;
        }
    } else {
        phi_s0 = arg0->region;
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
static bool func_00455418(struct Interval *arg0, int arg1, int arg2) {
    struct Graphnode *node_a0;
    struct Graphnode *node_a2;
    struct IntervalList *phi_v0;
    int count;

    phi_v0 = arg0->region;
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
            if (phi_v0->intv->type == intv_loop) {
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
static void func_00455518(struct Interval *child, struct Interval *firstChild, struct Interval *parent, struct Graphnode *loopFirstNode) {
    struct IntervalList *region;       //   < unused in inner functions, whew
    struct Graphnode *childNode;       // S |
    struct Statement *loopStat;        // h | type = jp
    struct Statement *stat_sp58;       // a | type = store
    struct Expression *expr_sp54;      // r | type = isop
    struct Expression *expr_op_sp50;   // e | type = isvar
    bool sp4F;                         // d |
    struct Expression *expr_sp48;      //   <

    int incre; // shared

    struct Graphnode *phi_a1;
    struct Graphnode *phi_a0;

    // Child is a leaf interval
    if (child->region == NULL) {
        childNode = child->graphnode;
        if (loopFirstNode->loopdepth != childNode->loopdepth) {
            return;
        }
        loopStat = childNode->stat_tail;
        // only conditional jumps allowed
        if (loopStat->opc != Ufjp && loopStat->opc != Utjp) {
            return;
        }
        if (childNode->successors->next->graphnode->loopdepth == childNode->successors->graphnode->loopdepth) {
            return;
        }
        expr_sp54 = loopStat->expr;
        if (expr_sp54->type != isop) {
            return;
        }
        if (expr_sp54->data.isop.opc != Uequ
                && expr_sp54->data.isop.opc != Ugeq
                && expr_sp54->data.isop.opc != Ules
                && expr_sp54->data.isop.opc != Uneq) {
            return;
        }

        if (loopFirstNode->predecessors->next->next != NULL) {
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
            func_00455060(parent, childNode, expr_op_sp50, &sp4F, &expr_sp48);
        }

        if (sp4F != false || expr_sp48 == NULL) {
            expr_op_sp50 = loopStat->expr->data.isop.op2;
            if (expr_op_sp50->type == isvar) {
                sp4F = false;
                expr_sp48 = NULL;
                if (expr_op_sp50->data.isvar_issvar.unk22) {
                    func_00455060(parent, childNode, expr_op_sp50, &sp4F, &expr_sp48);
                }
            }
        }

        if (sp4F || expr_sp48 == NULL) {
            return;
        }

        if (func_00454AB8(loopFirstNode, expr_op_sp50->ichain, &stat_sp58)) {
            loopStat->u.jp.unk20 = stat_sp58->expr->data.isvar_issvar.unk34;
            if (stat_sp58->expr->data.isvar_issvar.unk34->type == isconst) {
                loopStat->u.jp.unk27 = true;
            } else {
                loopStat->u.jp.unk27 = false;
            }
        } else {
            loopStat->u.jp.unk27 = false;
            loopStat->u.jp.unk20 = NULL;
        }

        if (loopStat->u.jp.target_blockno == childNode->successors->graphnode->blockno) {
            phi_a1 = childNode->successors->next->graphnode;
            phi_a0 = childNode->successors->graphnode;
        } else {
            phi_a1 = childNode->successors->graphnode;
            phi_a0 = childNode->successors->next->graphnode;
        }

        if (phi_a1->loopdepth == phi_a0->loopdepth) {
            return;
        }

        if (phi_a1->loopdepth < phi_a0->loopdepth) {
            if (phi_a0 != loopFirstNode) {
                if (phi_a0->successors->next != NULL || loopFirstNode != phi_a0->successors->graphnode) {
                    return;
                }
            }
            loopStat->u.jp.unk25 = loopStat->opc == Utjp;
        } else {
            if (phi_a1 != loopFirstNode) {
                if (phi_a1->successors->next != NULL || loopFirstNode != phi_a1->successors->graphnode) {
                    return;
                }
            }
            loopStat->u.jp.unk25 = loopStat->opc == Ufjp;
        }

        incre = findincre(expr_sp48);
        if (loopStat->u.jp.unk27 && expr_sp54->data.isop.op2->type == isconst) {
            func_00454060(loopStat, expr_sp54, incre);
        } else {
            if (((incre == 1 || incre == -1) && loopStat->u.jp.unk20 != NULL)
                    || (expr_sp54->data.isop.opc == Uequ || expr_sp54->data.isop.opc == Uneq)) {
                if (expr_op_sp50 == expr_sp54->data.isop.op1) {
                    if (func_00454F00(parent, expr_sp54->data.isop.op2, childNode)) {
                        func_00454920(loopStat, expr_sp54, expr_op_sp50, loopFirstNode, incre);
                        loopStat->u.jp.unk26 = true;
                        loopStat->u.jp.unk27 = false;
                    }
                } else {
                    if (func_00454F00(parent, expr_sp54->data.isop.op1, childNode)) {
                        func_00454920(loopStat, expr_sp54, expr_op_sp50, loopFirstNode, incre);
                        loopStat->u.jp.unk26 = false;
                        loopStat->u.jp.unk27 = false;
                    }
                }
            }
        }

        if (loopStat->u.jp.unk1C == 0) {
            return;
        }

        //! BUG: Most of the time, stat_head->prev->opc is Unop, but in a few cases it's Uloc
        // if loopFirstNode->unkBb4 != 0 and u.loc.page is odd, loop unrolling will be prevented
        if ((!loopFirstNode->unkBb4 || (loopFirstNode->stat_head->prev->u.nop.flags & 1) == 0) &&
                (childNode == loopFirstNode
                 || (firstChild->region == NULL
                     && !func_00455354(parent)
                     && func_00455418(parent, loopFirstNode->num, childNode->num)
                     && ((expr_op_sp50->data.isvar_issvar.var_data.memtype == Mmt
                             || expr_op_sp50->data.isvar_issvar.var_data.memtype == Pmt)
                         || in_fsym(expr_op_sp50->data.isvar_issvar.var_data.blockno))))) {
            if (loopFirstNode->predecessors->next->next == 0) {
                if (childNode == loopFirstNode->predecessors->graphnode && loopFirstNode->predecessors->next->graphnode->successors->next == NULL) {
                    loopFirstNode->unk5 = 2; // canunroll
                } else if (loopFirstNode->predecessors->graphnode->successors->next == NULL && loopFirstNode == loopFirstNode->predecessors->next->graphnode) {
                    loopFirstNode->unk5 = 2; // canunroll
                }
            }
        }

        if (listwritten) {
            write_string(list.c_file, "EQ_INEQ at BB:", 14, 14);
            write_integer(list.c_file, childNode->num, 12, 10);
            writeln(list.c_file);
        }
        return;
    } else {
        region = child->region;
        do {
            func_00455518(region->intv, firstChild, parent, loopFirstNode);
            region = region->next;
        } while (region != NULL);
    }
}

/* 
00455C48 func_00455C48
00455D38 analoop
*/
static void func_00455C48(struct Interval *child, struct Interval *parent) {
    struct Graphnode *loopFirstNode;
    struct IntervalList *region;

    if (child != NULL) {
        if (child->type == intv_loop) {
            loopFirstNode = find_loop_first_node(child);

            if (loopFirstNode->unk4 == 0) {
                region = parent->region;
                do {
                    if (region->intv->type == intv_loop) {
                        func_00455518(region->intv, child, parent, loopFirstNode);
                    }
                    region = region->next;
                } while (region != NULL);
            }
        }

        region = parent->region;
        do {
            func_00455C48(region->intv->child, region->intv);
            region = region->next;
        } while (region != NULL);
    }
}

//! debug function
void print_intval_list(const char *name, struct IntervalList *intvList)
{
    int i;
    printf("%-17s: %x\n", name, intvList);

    i = 0;
    while(intvList != NULL) {
        printf("\t\t%d : %x\n", i, intvList->intv);
        intvList = intvList->next;
        i++;
    }
}

//! debug function
void print_interval(struct Interval *intv) {
    if (intv == NULL) return;
    printf("interval        : %x\n", intv);
    printf("\tgraphnode       : %x\n",   intv->graphnode);
    print_intval_list("\tregion",  intv->region);
    printf("\tparent          : %x\n",   intv->parent);
    printf("\tchild           : %x\n",   intv->child);
    print_intval_list("\tsuccessors", intv->successors);
    print_intval_list("\tpredecessors",  intv->predecessors);
    printf("\tnext            : %x\n",   intv->next);
    printf("\tnumPredecessors : %d\n",   intv->numPredecessors);
    printf("\tfirst           : %x\n",   intv->first);
    printf("\tloop            : %x\n",   intv->loop);
    printf("\tunk28           : %hhd\n", intv->type);
    printf("\tunk29           : %hhd\n", intv->unk29);
    printf("\tloopdepth       : %hhd\n", intv->loopdepth);
    puts("");
}

/* 
00456A2C oneproc

Interval analysis
*/
void analoop() {
    struct Interval *intvRoot;
    struct AllocBlock *heapBlock;
    struct BitVector pavin;
    struct BitVectorBlock sp48;
    struct Interval *curIntv;
    struct Interval *newIntv;
    struct GraphnodeList *nodeSucc;
    struct GraphnodeList *nodePred;
    struct IntervalList *intvSucc;
    struct IntervalList *intvPred;
    struct Graphnode *curnode;
    bool repeat;
    int oldInterval;
    int i;

    printf("\nStarting analoop %.*s\n", entnam0len, entnam0);

    bvlivransize = ((unsigned) (curstaticno - 1) >> 7) + 1; // (curstaticno / 128) + 1, but 33554432 at 0
    heapBlock = alloc_mark(&intv_heap);
    intvRoot = alloc_new(sizeof(struct Interval), &intv_heap);
    intvRoot->child = NULL;
    intvRoot->numPredecessors = 0;
    intvRoot->region = NULL;
    intvRoot->parent = NULL;
    intvRoot->first = NULL;
    intvRoot->loop = NULL;
    intvRoot->type = intv_unvisited;
    intvRoot->loopdepth = 0;
    intvRoot->unk29 = 0;
    intvRoot->graphnode = graphhead;

    curIntv = intvRoot;
    numintval = 1;
    curnode = graphhead->next;

    while (curnode != NULL) {
        newIntv = alloc_new(sizeof(struct Interval), &intv_heap);
        newIntv->child = NULL;
        newIntv->graphnode = curnode;

        // count the number of predecessors
        newIntv->numPredecessors = 0;
        nodePred = curnode->predecessors;
        while (nodePred != NULL) {
            newIntv->numPredecessors++;
            nodePred = nodePred->next;
        }
        newIntv->region = NULL;
        newIntv->parent = NULL;
        newIntv->first = NULL;
        newIntv->loop = NULL;
        newIntv->type = intv_unvisited;
        newIntv->loopdepth = 0;
        newIntv->unk29 = curnode->unk4; // in oot, always zero

        curIntv->next = newIntv;
        curIntv = newIntv;

        numintval++;
        curnode = curnode->next;
    }
    curIntv->next = NULL;

    curnode = graphhead;
    curIntv = intvRoot;

    // find successors and predecessors
    while (curIntv != NULL) {
        if (curnode->successors == NULL) {
            curIntv->successors = NULL;
        } else {
            curIntv->successors = alloc_new(sizeof(struct IntervalList), &intv_heap);
            curIntv->successors->intv = find_interval_with_graphnode(curnode->successors->graphnode, intvRoot);

            intvSucc = curIntv->successors;
            nodeSucc = curnode->successors->next;

            while (nodeSucc != NULL) {
                intvSucc->next = alloc_new(sizeof(struct IntervalList), &intv_heap);
                intvSucc->next->intv = find_interval_with_graphnode(nodeSucc->graphnode, intvRoot);

                nodeSucc = nodeSucc->next;
                intvSucc = intvSucc->next;
            }
            intvSucc->next = NULL;
        }

        if (curnode->predecessors == NULL) {
            curIntv->predecessors = NULL;
        } else {
            curIntv->predecessors = alloc_new(sizeof(struct IntervalList), &intv_heap);
            curIntv->predecessors->intv = find_interval_with_graphnode(curnode->predecessors->graphnode, intvRoot);

            intvPred = curIntv->predecessors;
            nodePred = curnode->predecessors->next;

            while (nodePred != NULL) {
                intvPred->next = alloc_new(sizeof(struct IntervalList), &intv_heap);
                intvPred->next->intv = find_interval_with_graphnode(nodePred->graphnode, intvRoot);

                nodePred = nodePred->next;
                intvPred = intvPred->next;
            }
            intvPred->next = NULL;
        }

        curIntv = curIntv->next;
        curnode = curnode->next;
    }

    // DEBUG
    puts("\033[32mInitial List \033[m\n");
    curIntv = intvRoot;
    while (curIntv != NULL) {
        print_interval(curIntv);
        curIntv = curIntv->next;
    }
    struct IntervalList *region;
    ////////////////////////////

    do {
        oldInterval = numintval;
        intvRoot = reduce_control_tree(intvRoot);
    // DEBUG
    puts("\033[32m################################################################################\033[m\n");
    puts("\033[32mAfter reduce_control_tree \033[m\n");
    curIntv = intvRoot;
    while (curIntv != NULL) {
        print_interval(curIntv);
        curIntv = curIntv->next;
    }
    puts("\033[36mHead region \033[m\n");
    region = intvRoot->region;
    while (region != NULL) {
        print_interval(region->intv);
        region = region->next;
    }
    ////////////////////////////

        if (numintval == oldInterval) {
            break;
        }
    } while (numintval != 1);

    curIntv = intvRoot;
    do {
        curIntv->loopdepth = 1;
        find_loops(curIntv->child, curIntv);
        curIntv = curIntv->next;
    } while (curIntv != NULL);

    // DEBUG
    puts("\033[33m################################################################################\033[m\n");
    puts("\033[33mAfter find_loops \033[m\n");
    curIntv = intvRoot;
    while (curIntv != NULL) {
        print_interval(curIntv);
        curIntv = curIntv->next;
    }
    puts("\033[36mHead region \033[m\n");
    region = intvRoot->region;
    while (region != NULL) {
        print_interval(region->intv);
        region = region->next;
    }
    ////////////////////////////


    graphhead->loopdepth = 0;
    i = 0;

    do {
        curIntv = intvRoot;

        do {
            find_loop_relations(curIntv, i);
            curIntv = curIntv->next;
        } while (curIntv != NULL);

        i++;
    } while (graphhead->loopdepth == 0);

    // DEBUG
    puts("\033[34m################################################################################\033[m\n");
    puts("\033[34mAfter find_loop_relations \033[m\n");
    curIntv = intvRoot;
    while (curIntv != NULL) {
        print_interval(curIntv);
        curIntv = curIntv->next;
    }
    //puts("\033[36m################################################################################\033[m\n");
    puts("\033[36mHead region \033[m\n");
    region = intvRoot->region;
    while (region != NULL) {
        print_interval(region->intv);
        region = region->next;
    }
    ////////////////////////////

    curnode = graphhead;
    while (curnode != NULL) {
        curnode->bvs.stage1.u.precm.pavin.num_blocks = 0;
        curnode->bvs.stage1.u.precm.pavin.blocks = 0;
        checkinitbvlivran(&curnode->bvs.stage1.u.precm.pavin);
        if (curnode->predecessors == NULL || curnode->unk4 != 0) {
            setbitbb(&curnode->bvs.stage1.u.precm.pavin, curnode->num);
        } else {
            sp48.words[0] = -1;
            sp48.words[1] = -1;
            sp48.words[2] = -1;
            sp48.words[3] = -1;
            initbv(&curnode->bvs.stage1.u.precm.pavin, sp48);
        }
        curnode = curnode->next;
    }

    pavin.num_blocks = 0;
    pavin.blocks = NULL;
    checkinitbvlivran(&pavin);


    do {
        curnode = graphhead;
        repeat = false;
        while (curnode != NULL) {
            nodePred = curnode->predecessors;
            if (nodePred != NULL) {
                if (!repeat) {
                    bvectcopy(&pavin, &curnode->bvs.stage1.u.precm.pavin);
                }

                do {
                    bvectintsect(&curnode->bvs.stage1.u.precm.pavin, &nodePred->graphnode->bvs.stage1.u.precm.pavin);
                    nodePred = nodePred->next;
                } while (nodePred != NULL);

                setbitbb(&curnode->bvs.stage1.u.precm.pavin, curnode->num);
                if (!repeat) {
                    if (!bvecteq(&pavin, &curnode->bvs.stage1.u.precm.pavin)) {
                        repeat = true;
                    }
                }
            }
            curnode = curnode->next;
        }
    } while (repeat);

    curIntv = intvRoot;
    while (curIntv != NULL) {
        func_00455C48(curIntv->child, curIntv);
        curIntv = curIntv->next;
    }
    alloc_release(&intv_heap, heapBlock);
    puts("\033[mEnding analoop\n");
}
