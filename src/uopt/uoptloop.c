#include "uoptdata.h"
#include "uoptions.h"
#include "uoptkill.h"
#include "uoptprep.h"
#include "uoptutil.h"
#include "uoptppss.h"


struct AllocBlock *intv_heap;

/* Inner function
00455D38 analoop
*/
static struct Interval *reduce_control_tree(struct Interval *intvHead) {
    struct Interval *newHead;
    struct IntervalList *pred;
    struct Interval *child;
    struct Interval *parent;
    struct IntervalList *region;
    struct IntervalList* regionEnd;
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
        regionEnd = region;
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
                        regionEnd->next = alloc_new(sizeof(struct IntervalList), &intv_heap);
                        regionEnd->next->intv = childSucc->intv;
                        childSucc->intv->parent = parent;
                        regionEnd = regionEnd->next;
                    } else {
                        childSucc->intv->type = intv_unreduced;
                    }
                } else if (childSucc->intv->first == parent->region->intv
                        && childSucc->intv->numPredecessors == 0 
                        && childSucc->intv->type != intv_acyclic) {

                    // ordinary flow control
                    regionEnd->next = alloc_new(sizeof(struct IntervalList), &intv_heap);
                    regionEnd->next->intv = childSucc->intv;
                    childSucc->intv->parent = parent;
                    childSucc->intv->type = intv_unvisited;
                    regionEnd = regionEnd->next;
                }

                childSucc = childSucc->next;
            }

            regionEnd->next = NULL;
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

                        if (childSucc->intv->parent != parentSucc->intv) {
                            parentSucc->next = alloc_new(sizeof(struct IntervalList), &intv_heap);
                            parentSucc->next->next = NULL;
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

/* Inner function
00453914 find_acyclic_loop_depth
*/
static struct Interval *find_common_ancestor(struct Interval *parent, struct Interval *succ) {
    struct Interval *ancestor = parent;
    struct Interval *successorAncestor;
    struct Interval *directAncestor;

    directAncestor = parent->parent;
    successorAncestor = succ->parent;
    while (directAncestor != successorAncestor) {
        ancestor = directAncestor;
        directAncestor = directAncestor->parent;
        successorAncestor = successorAncestor->parent;
    }
    return ancestor;
}

/* Inner function
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
            if (parent != succ->intv->parent) {
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

/* Inner function
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
        newLoop->graphnode = NULL;
        newLoop->inner = NULL;
        newLoop->outer = parent->loop;

        newLoop->next = parent->loop->inner;
        parent->loop->inner = newLoop;
        return newLoop;
    }

    if (parent->parent != NULL) {
        return new_loop(parent->parent);
    }

    newLoop = alloc_new(sizeof(struct Loop), &perm_heap);
    newLoop->loopno = curloopno++;
    newLoop->depth = 1;
    newLoop->graphnode = NULL;
    newLoop->inner = NULL;
    newLoop->outer = NULL;

    newLoop->next = toplevelloops;
    toplevelloops = newLoop;
    return newLoop;
}

/* Inner function
00453C20 find_loop_relations
00455D38 analoop
*/
static void find_loop_relations(struct Interval *intv, int depth) {
    struct IntervalList *region;
    struct Graphnode *node;
    struct Loop *loop;

    // Leaf interval
    if (intv->region == NULL) {
        node = intv->graphnode;
        node->loopdepth = intv->loopdepth;
        node->loop = intv->loop;

        // The first Graphnode in the region
        if (intv->loop != NULL && intv->loop->graphnode == NULL) {
            intv->loop->graphnode = node;
        }

        // some kind of weight?
        if (usefeedback == 0 || curproc->unk34 == NULL) {
            node->unk2C = power_10(intv->loopdepth - 1);
        }
    } else if (depth == 0) {
        region = intv->region;
        loop = NULL;

        do {
            if (region->intv->type == intv_loop) {
                region->intv->loopdepth = intv->loopdepth + 1;
                if (loop == NULL) {
                    loop = new_loop(intv);
                }
                region->intv->loop = loop;
            } else if (region->intv->loopdepth == 0) {
                find_acyclic_loop_depth(region->intv, intv);
            }

            region = region->next;
        } while (region != NULL);
    } else {
        region = intv->region;

        do {
            find_loop_relations(region->intv, depth - 1);
            region = region->next;
        } while (region != NULL);
    }
    
}

/* Inner function
00453DC0 find_loop_body
00453ECC find_loops

Define all the predecessors with the same parent as being in a loop.
*/
static void find_loop_body(struct Interval *child, struct Interval *parent) {
    struct IntervalList *pred;

    if (child->type == intv_loop) {
        return;
    }
    child->type = intv_loop;

    pred = child->predecessors;
    while (pred != NULL) {
        if (pred->intv->parent == parent) {
            find_loop_body(pred->intv, parent);
        }
        pred = pred->next;
    }
}

/* Inner function
00453ECC find_loops
00455C48 find_unrollable_loops
*/
static struct Graphnode *interval_first_node(struct Interval *intv) {
    while (intv->region != NULL) {
        intv = intv->child;
    }
    return intv->graphnode;
}

/* Inner function
00453ECC find_loops

usefeedback && curproc->unk34 != NULL
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

/* Inner function
00453ECC find_loops
00455D38 analoop
*/
static void find_loops(struct Interval *child, struct Interval *parent) {
    struct Graphnode *loopFirstNode;
    struct IntervalList *pred;
    struct IntervalList *region;

    // if the first child in an interval has a predecessor with the same parent,
    // then the first child is in a loop
    if (child != NULL) {
        pred = child->predecessors;

        while (pred != NULL) {
            if (pred->intv->parent == parent) {
                child->type = intv_loop;

                find_loop_body(pred->intv, parent);
                loopFirstNode = interval_first_node(child);
                if (loopFirstNode->unk4 == 0) {
                    if (usefeedback == 0 || curproc->unk34 == NULL || node_has_higher_weight(loopFirstNode)) {
                        loopFirstNode->unk5 = 1; // loopfirstbb
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

/* Inner function
00455518 determine_if_unrollable

loopCond->isop.op2->type = isconst
*/
static void check_const_invariant(struct Statement *loopJump, struct Expression *loopCond, int incre) {
    int diff;
    unsigned int initial;
    unsigned int range;

    if (loopCond->data.isop.opc == Uequ || loopCond->data.isop.opc == Uneq) {
        if ((loopJump->u.jp.unk25 != 0 && loopCond->data.isop.opc == Uneq) || (loopJump->u.jp.unk25 == 0 && loopCond->data.isop.opc == Uequ)) {
            // s64 or s32
            if (loopCond->datatype == Idt || loopCond->datatype == Jdt) {
                if (incre > 0) {
                    diff = loopCond->data.isop.op2->data.isconst.number.intval - loopJump->u.jp.unk20->data.isconst.number.intval;
                    if ((diff > 0) && ((diff % incre) == 0)) {
                        loopJump->u.jp.incre = incre;
                        return;
                    }
                } else {
                    diff = loopJump->u.jp.unk20->data.isconst.number.intval - loopCond->data.isop.op2->data.isconst.number.intval;
                    if ((diff > 0) && ((diff % incre) == 0)) {
                        loopJump->u.jp.incre = incre;
                        return;
                    }
                }
            // u64 or u32
            } else if (incre > 0) {
                initial = loopJump->u.jp.unk20->data.isconst.number.uintval;
                range = loopCond->data.isop.op2->data.isconst.number.uintval;
                if ((initial < range) && ((signed int)(range - initial) % incre) == 0) {
                    loopJump->u.jp.incre = incre;
                    return;
                }
            } else {
                initial = loopJump->u.jp.unk20->data.isconst.number.uintval;
                range = loopCond->data.isop.op2->data.isconst.number.uintval;
                if ((range < initial) && ((signed int)(initial - range) % incre) == 0) {
                    loopJump->u.jp.incre = incre;
                    return;
                }
            }
        }
    } else {
        if ((loopJump->u.jp.unk25 != 0 && loopCond->data.isop.opc == Ules) || (loopJump->u.jp.unk25 == 0 && loopCond->data.isop.opc == Ugeq)) {
            // s64 or s32
            if (loopCond->datatype == Idt || loopCond->datatype == Jdt) {
                if (incre > 0 && ((loopCond->data.isop.op2->data.isconst.number.intval - loopJump->u.jp.unk20->data.isconst.number.intval) > 0)) {
                    loopJump->u.jp.incre = incre;
                    return;
                }
            // u64 or u32
            } else if (incre > 0 && (loopJump->u.jp.unk20->data.isconst.number.uintval < loopCond->data.isop.op2->data.isconst.number.uintval)) {
                loopJump->u.jp.incre = incre;
                return;
            }
        } else {
            // s64 or s32
            if (loopCond->datatype == Idt || loopCond->datatype == Jdt) {
                if (incre < 0 && (loopJump->u.jp.unk20->data.isconst.number.intval - loopCond->data.isop.op2->data.isconst.number.intval) > 0) {
                    loopJump->u.jp.incre = incre;
                    return;
                }
            // u64 or u32
            } else if (incre < 0 && (loopCond->data.isop.op2->data.isconst.number.uintval < loopJump->u.jp.unk20->data.isconst.number.uintval)) {
                loopJump->u.jp.incre = incre;
            }
        }


    }
}

/* Inner function
00454514 check_loop_inequality
*/
static bool check_initial_cond(bool invertIneq, struct Expression *initialCond, struct Expression *loopCond, struct Expression *loopVar, struct Expression *loopVarInit) {
    bool constLoopCond;
    Uopcode phi_a0;
    struct IChain *var_ichain;
    bool phi_t1;

    if (initialCond->type != isop) {
        return false;
    }

    if (initialCond->data.isop.op2 == NULL) {
        return false;
    }

    if (loopVar == loopCond->data.isop.op2) {
        invertIneq = !invertIneq;
        constLoopCond = false;
        var_ichain = loopCond->data.isop.op1->ichain;
        phi_t1 = false;
    } else {
        if (loopVarInit->type == isconst) {
            constLoopCond = true;
            phi_t1 = true; // used to be undefined sp2
        } else {
            invertIneq = !invertIneq;
            constLoopCond = false;
            phi_t1 = true;
        }
        var_ichain = loopCond->data.isop.op2->ichain;
    }

    phi_a0 = loopCond->data.isop.opc;
    if (invertIneq) {
        if (loopCond->data.isop.opc == Ules) {
            phi_a0 = Ugeq;
        } else {
            phi_a0 = Ules;
        }
    }

    if (constLoopCond) {
        return initialCond->data.isop.opc == phi_a0
            && initialCond->data.isop.op1->ichain == var_ichain
            && initialCond->data.isop.op2->data.isconst.number.intval == (loopVarInit->data.isconst.number.intval + 1);
    } else if (!phi_t1) {
        return initialCond->data.isop.opc == phi_a0
            && initialCond->data.isop.op1->ichain == var_ichain
            && initialCond->data.isop.op2->ichain == loopVarInit->ichain;
    } else {
        return initialCond->data.isop.opc == phi_a0
            && initialCond->data.isop.op2->ichain == var_ichain
            && initialCond->data.isop.op1->ichain == loopVarInit->ichain;
    }

    return false;
}

/* Inner function
00454920 check_loop_condition
*/
static bool check_loop_inequality(struct Graphnode *loopFirstNode, struct Expression *loopCond, struct Expression *loopVar, struct Expression *loopVarInit, bool jp_unk25) {
    struct GraphnodeList *pred;
    struct Graphnode *successorNode;
    struct Graphnode *curnode;
    bool cond_v0;
    struct Graphnode *phi_a1;

    pred = loopFirstNode->predecessors;
    while (pred != NULL &&
            (!bvectin(pred->graphnode->num, &loopFirstNode->bvs.stage1.u.precm.pavin) ||
             pred->graphnode == loopFirstNode)) {
        pred = pred->next;
    }

    if (pred == NULL) {
        return false;
    }

    curnode = pred->graphnode;
    if (curnode->stat_tail->opc == Ucia
            || curnode->stat_tail->opc == Ucup
            || curnode->stat_tail->opc == Uicuf
            || curnode->stat_tail->opc == Ufjp
            || curnode->stat_tail->opc == Utjp) {
        return false;
    }

    /* Check if the invariant var is modified right before the loop.
     *
     * BUG: If the var is initialized just before the loop, the check fails and loop unrolling doesn't happen.
     * However, if control flow appears (even an `if (1) {}`) anywhere between
     * the initialization and the loop, the check succeeds.
     *
     * fails:
     *     int end = 8;
     *     for (i = 0; i < end; i++)
     *
     * unrolls:
     *     int end = 8;
     *     if (1) {}
     *     for (i = 0; i < end; i++)
     */
    if (loopCond->data.isop.op1 == loopVar) {
        if (bvectin0(loopCond->data.isop.op2->ichain->bitpos, &curnode->bvs.stage1.alters)) {
            return false;
        }
    } else {
        if (bvectin0(loopCond->data.isop.op1->ichain->bitpos, &curnode->bvs.stage1.alters)) {
            return false;
        }
    }

    if (loopVarInit->type != islda && loopVarInit->type != isconst) {
        if (bvectin0(loopVarInit->ichain->bitpos, &curnode->bvs.stage1.alters)) {
            return false;
        }
    }

    pred = curnode->predecessors;
    while (pred != NULL && pred->next == NULL) {
        successorNode = curnode;
        curnode = pred->graphnode;
        if (loopVarInit->type != islda && loopVarInit->type != isconst) {
            if (bvectin0(loopVarInit->ichain->bitpos, &curnode->bvs.stage1.alters)) {
                return false;
            }
        }

        if (curnode->stat_tail->opc == Ufjp || curnode->stat_tail->opc == Utjp) {
            if (curnode->stat_tail->u.jp.target_blockno == curnode->successors->graphnode->blockno) {
                phi_a1 = curnode->successors->graphnode;
            } else {
                phi_a1 = curnode->successors->next->graphnode;
            }

            cond_v0 = (curnode->stat_tail->opc == Ufjp && phi_a1 == successorNode) ||
                (curnode->stat_tail->opc == Utjp && phi_a1 != successorNode);
            if (jp_unk25 == cond_v0) {
                if (check_initial_cond(false, curnode->stat_tail->expr, loopCond, loopVar, loopVarInit)
                        || loopCond->ichain == curnode->stat_tail->expr->ichain) {
                    return true;
                }
            } else {
                if (check_initial_cond(true, curnode->stat_tail->expr, loopCond, loopVar, loopVarInit)) {
                    return true;
                }
            }
        } else {

            if (curnode->stat_tail->opc == Ucia
                    || curnode->stat_tail->opc == Ucup
                    || curnode->stat_tail->opc == Uicuf) {
                return false;
            }

            if (loopVar == loopCond->data.isop.op1) {
                if (bvectin0(loopCond->data.isop.op2->ichain->bitpos, &curnode->bvs.stage1.alters)) {
                    return false;
                }
            } else {
                if (bvectin0(loopCond->data.isop.op1->ichain->bitpos, &curnode->bvs.stage1.alters)) {
                    return false;
                }
            }
        }

        pred = curnode->predecessors;
    }

    return false;
}

/* Inner function
00455518 determine_if_unrollable
*/
static void check_loop_condition(struct Statement *loopJump, struct Expression *loopCond, struct Expression *loopVar, struct Graphnode *loopFirstNode, int incre) {

    if (loopCond->data.isop.opc == Uequ || loopCond->data.isop.opc == Uneq) {
        if ((loopJump->u.jp.unk25 != 0 && loopCond->data.isop.opc == Uneq) ||
            (loopJump->u.jp.unk25 == 0 && loopCond->data.isop.opc == Uequ)) {
            loopJump->u.jp.incre = incre;
        }
        return;
    }

    if ((((loopJump->u.jp.unk25 != 0 && loopVar == loopCond->data.isop.op1) ||
          (loopJump->u.jp.unk25 == 0 && loopVar == loopCond->data.isop.op2)) 
                && loopCond->data.isop.opc == Ules) ||

        (((loopJump->u.jp.unk25 == 0 && loopVar == loopCond->data.isop.op1) ||
          (loopJump->u.jp.unk25 != 0 && loopVar == loopCond->data.isop.op2)) 
                && loopCond->data.isop.opc == Ugeq)) {
        if (incre == 1 && check_loop_inequality(loopFirstNode, loopCond, loopVar, loopJump->u.jp.unk20, loopJump->u.jp.unk25)) {
            loopJump->u.jp.incre = 1;
        }
    } else {
        if (incre == -1 && check_loop_inequality(loopFirstNode, loopCond, loopVar, loopJump->u.jp.unk20, loopJump->u.jp.unk25)) {
            loopJump->u.jp.incre = -1;
        }
    }
}

/* Inner function
00455518 determine_if_unrollable

Searches backwards for the nearest statement that initializes loopVar
*/
static bool find_loopvar_init(struct Graphnode *loopFirstNode, struct IChain *loopVarIChain, struct Statement **init) {
    struct Graphnode *predNode;
    struct GraphnodeList *pred;
    struct Statement *stat;
    bool found;
    bool done;

    pred = loopFirstNode->predecessors;
    while (pred != NULL && (!bvectin(pred->graphnode->num, &loopFirstNode->bvs.stage1.u.precm.pavin) || loopFirstNode == pred->graphnode)) {
        pred = pred->next;
    }
    
    if (pred == NULL) {
        return false;
    }

    predNode = pred->graphnode;
    stat = predNode->stat_tail;

    found = false;
    done = false;

    while (!found && !done) {
        if ((stat->opc == Uisst || stat->opc == Ustr) && stat->expr->ichain == loopVarIChain) {
            found = true;
        } else {
            if (stat->prev == NULL) {
                done = true;
            } else {
                done = predNode != stat->prev->graphnode;
                stat = stat->prev;
            }
        }
    }

    while (!found && predNode->predecessors != NULL && predNode->predecessors->next == NULL) {
        predNode = predNode->predecessors->graphnode;
        done = false;

        while (!found && !done) {
            if ((stat->opc == Uisst || stat->opc == Ustr) && stat->expr->ichain == loopVarIChain) {
                found = true;
            } else {
                if (stat->prev == NULL) {
                    done = true;
                } else {
                    done = predNode != stat->prev->graphnode;
                    stat = stat->prev;
                }
            }
        }
    }

    *init = stat;
    return found;
}

/* Inner function
00454D08 invariant_var_preserved
00454F00 is_const_invariant
*/
static bool invariant_var_preserved(struct Interval *intv, struct Expression *invariantVar, struct Graphnode *childNode) {
    struct Graphnode *node;

    if (intv->region == NULL) {
        node = intv->graphnode;
        if (node->loopdepth < childNode->loopdepth) {
            return true;
        } else {
            if (bvectin0(invariantVar->ichain->bitpos, &node->bvs.stage1.alters)) {
                return false;
            }
            if ((node->stat_tail->opc == Ucia) && (lang == LANG_ADA)) {
                return false;
            }
            if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
                if (clkilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, invariantVar)) {
                    return false;
                }
                if (listplkilled(node->stat_tail->u.call.parameters, invariantVar, 1)) {
                    return false;
                }
            } else if (node->stat_tail->opc == Ucia) {
                if ((node->stat_tail->u.cia.flags & 1) && clkilled(curlevel, indirprocs, invariantVar)) {
                    return false;
                }
                if (listplkilled(node->stat_tail->u.cia.parameters, invariantVar, 1)) {
                    return false;
                }
            }
        }
    } else {
        struct IntervalList *region = intv->region;

        do {
            if (!invariant_var_preserved(region->intv, invariantVar, childNode)) {
                return false;
            }
            region = region->next;
        } while (region != NULL);
    }
    return true;
}

/* Inner function
00454F00 is_const_invariant
00455518 determine_if_unrollable
*/
static bool is_const_invariant(struct Interval *parent, struct Expression *invariant, struct Graphnode *childNode) {
    bool ret;

    switch (invariant->type) {
        case islda:
        case isilda:
        case isconst:
        case isrconst:
            return true;

        case isvar:
        case issvar:
            return invariant_var_preserved(parent, invariant, childNode);

        case isop:
            if (invariant->data.isop.opc == Uiequ || invariant->data.isop.opc == Uigeq
                    || invariant->data.isop.opc == Uigrt || invariant->data.isop.opc == Uildv
                    || invariant->data.isop.opc == Uileq || invariant->data.isop.opc == Uiles
                    || invariant->data.isop.opc == Uilod || invariant->data.isop.opc == Uineq) {
                return false;
            }
            
            ret = is_const_invariant(parent, invariant->data.isop.op1, childNode);
            if (ret && optab[invariant->data.isop.opc].is_binary_op) {
                ret = is_const_invariant(parent, invariant->data.isop.op2, childNode);
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

/* Inner function
00455060 find_increment_expr
00455518 determine_if_unrollable
*/
static void find_increment_expr(struct Interval *intv, struct Graphnode* childNode, struct Expression *loopVar, bool *failed, struct Expression **loopIncrement) {
    struct Graphnode *curnode;

    struct VarAccessList *varlist;

    if (intv->region == NULL) {
        curnode = intv->graphnode;
        if (curnode->loopdepth >= childNode->loopdepth) {

            // call inline asm
            if ((curnode->stat_tail->opc == Ucia) && (lang == LANG_ADA)) {
                *failed = true;
                return;
            }

            if (curnode->stat_tail->opc == Ucup || curnode->stat_tail->opc == Uicuf) {
                if (cupaltered(loopVar->ichain, curnode->stat_tail->u.call.level, curnode->stat_tail->u.call.proc)) {
                    *failed = true;
                    return;
                }
                if (listplkilled(curnode->stat_tail->u.call.parameters, loopVar, 1)) {
                    *failed = true;
                    return;
                }
            } else if (curnode->stat_tail->opc == Ucia) {
                //! wtf
                if ((curnode->stat_tail->u.cia.flags & 1) && cupaltered(loopVar->ichain, curnode->stat_tail->u.call.level, curnode->stat_tail->u.call.proc)) {
                    *failed = true;
                    return;
                }
                if (listplkilled(curnode->stat_tail->u.cia.parameters, loopVar, 1)) {
                    *failed = true;
                    return;
                }
            }

            if (!bvectin0(loopVar->ichain->bitpos, &curnode->bvs.stage1.alters)) {
                return;
            }

            if (curnode->loopdepth > childNode->loopdepth) {
                *failed = true;
                return;
            }
        }

        varlist = curnode->varlisthead;
        while (varlist != NULL) {
            if (varlist->type == 1
                    && (varlist->data.store->opc == Uisst || varlist->data.store->opc == Ustr)
                    && loopVar->ichain == varlist->data.store->expr->ichain) {

                // unk1 seems to only be true when unk34 is `var + constant` or `var - constant`
                if ((varlist->data.store->unk1 == false) || *loopIncrement != NULL) {
                    *failed = true;
                    return;
                }


                if (!bvectin(curnode->num, &childNode->bvs.stage1.u.precm.pavin)) {
                    *failed = true;
                    return;
                }

                *loopIncrement = varlist->data.store->expr->data.isvar_issvar.unk34;
            }
            varlist = varlist->next;
        }
    } else {
        struct IntervalList *region = intv->region;

        do {
            find_increment_expr(region->intv, childNode, loopVar, failed, loopIncrement);
            region = region->next;
        } while (region != NULL && *failed == false);
    }
}

/* Inner function
00455354 complex_control_flow_in_interval
00455518 determine_if_unrollable
*/
static bool complex_control_flow_in_interval(struct Interval *intv) {

    if (intv->region == NULL) {
        if (intv->graphnode->stat_tail->opc == Uclab
                || intv->graphnode->stat_tail->opc == Ucup
                || intv->graphnode->stat_tail->opc == Uicuf
                || intv->graphnode->stat_tail->opc == Uijp
                || intv->graphnode->stat_tail->opc == Uxjp) {
            return true;
        }
    } else {
        struct IntervalList *region = intv->region;
        do {
            if (complex_control_flow_in_interval(region->intv)) {
                return true;
            }
            region = region->next;
        } while (region != NULL);
    }
    return false;
}

/* Inner function
00455518 determine_if_unrollable
*/
static bool no_early_exits(struct Interval *parent, int startNum, int endNum) {
    struct Graphnode *curnode;
    struct Graphnode *successor;
    struct IntervalList *region;
    int count;

    region = parent->region;
    count = 0;
    do {
        curnode = region->intv->graphnode;
        if (startNum <= curnode->num && curnode->num <= endNum) {
            count++;
            if (curnode->stat_tail->opc == Ufjp
                    || curnode->stat_tail->opc == Utjp
                    || curnode->stat_tail->opc == Uujp) {
                successor = curnode->successors->graphnode;

                if (curnode->stat_tail->u.jp.target_blockno != curnode->successors->graphnode->blockno) {
                    successor = curnode->successors->next->graphnode;
                }

                // check if any control flow jumps outside
                if (startNum > successor->num || successor->num > endNum) {
                    return false;
                }
            }
        } else {
            if (region->intv->type == intv_loop) {
                return false;
            }
        }
        region = region->next;
    } while (region != NULL); 

    return count == ((endNum - startNum) + 1);
}

/* Inner function
00455518 determine_if_unrollable
00455C48 find_unrollable_loops
*/
static void determine_if_unrollable(struct Interval *child, struct Interval *outerChild, struct Interval *parent, struct Graphnode *loopFirstNode) {
    struct IntervalList *region;       //   <
    struct Graphnode *childNode;       // S |
    struct Statement *loopJump;        // h | type = jp
    struct Statement *loopVarInit;     // a | type = store
    struct Expression *loopCond;       // r | type = isop
    struct Expression *loopVar;        // e | type = isvar
    bool failed;                       // d |
    struct Expression *loopIncrement;  //   <

    int incre; // shared

    struct Graphnode *phi_a1;
    struct Graphnode *phi_a0;

    // Child is a leaf interval
    if (child->region == NULL) {
        childNode = child->graphnode;

        // The acyclic graphnodes after a loop
        if (loopFirstNode->loopdepth != childNode->loopdepth) {
            return;
        }

        loopJump = childNode->stat_tail;
        // only conditional jumps allowed
        if (loopJump->opc != Ufjp && loopJump->opc != Utjp) {
            return;
        }

        // The Graphnode is an if-then or if-else-then instead of a looping conditional
        if (childNode->successors->next->graphnode->loopdepth == childNode->successors->graphnode->loopdepth) {
            return;
        }

        loopCond = loopJump->expr;
        if (loopCond->type != isop) {
            return;
        }

        // no Ugrt or Uleq?
        if (loopCond->data.isop.opc != Uequ
                && loopCond->data.isop.opc != Ugeq
                && loopCond->data.isop.opc != Ules
                && loopCond->data.isop.opc != Uneq) {
            return;
        }

        // More than two entry points (the acyclic region before the loop, and the loop condition)
        // `if (1) { continue; }` prevents unrolling
        if (loopFirstNode->predecessors->next->next != NULL) {
            return;
        }

        // pointer, int, and unsigned int only
        // `i == <constant>ll` prevents unrolling
        if (loopCond->datatype != Adt
                && loopCond->datatype != Jdt
                && loopCond->datatype != Ldt) {
            return;
        }

        loopVar = loopCond->data.isop.op1;

        if (loopVar->type != isvar) {
            return;
        }

        failed = false;
        loopIncrement = NULL;
        if (loopVar->data.isvar_issvar.unk22) {
            find_increment_expr(parent, childNode, loopVar, &failed, &loopIncrement);
        }

        if (failed || loopIncrement == NULL) {
            loopVar = loopJump->expr->data.isop.op2;
            if (loopVar->type == isvar) {
                failed = false;
                loopIncrement = NULL;
                if (loopVar->data.isvar_issvar.unk22) {
                    find_increment_expr(parent, childNode, loopVar, &failed, &loopIncrement);
                }
            }
        }

        if (failed || loopIncrement == NULL) {
            return;
        }

        if (find_loopvar_init(loopFirstNode, loopVar->ichain, &loopVarInit)) {
            loopJump->u.jp.unk20 = loopVarInit->expr->data.isvar_issvar.unk34;
            if (loopVarInit->expr->data.isvar_issvar.unk34->type == isconst) {
                loopJump->u.jp.has_const_init = true;
            } else {
                loopJump->u.jp.has_const_init = false;
            }
        } else {
            loopJump->u.jp.has_const_init = false;
            loopJump->u.jp.unk20 = NULL;
        }

        if (loopJump->u.jp.target_blockno == childNode->successors->graphnode->blockno) {
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
            loopJump->u.jp.unk25 = loopJump->opc == Utjp;
        } else {
            if (phi_a1 != loopFirstNode) {
                if (phi_a1->successors->next != NULL || loopFirstNode != phi_a1->successors->graphnode) {
                    return;
                }
            }
            loopJump->u.jp.unk25 = loopJump->opc == Ufjp;
        }

        incre = findincre(loopIncrement);
        if (loopJump->u.jp.has_const_init && loopCond->data.isop.op2->type == isconst) {
            check_const_invariant(loopJump, loopCond, incre);
        } else {
            // Only i++ or i-- allowed if the comparison is not == or !=
            if (((incre == 1 || incre == -1) && loopJump->u.jp.unk20 != NULL)
                    || (loopCond->data.isop.opc == Uequ || loopCond->data.isop.opc == Uneq)) {
                if (loopVar == loopCond->data.isop.op1) {
                    if (is_const_invariant(parent, loopCond->data.isop.op2, childNode)) {
                        check_loop_condition(loopJump, loopCond, loopVar, loopFirstNode, incre);
                        loopJump->u.jp.unk26 = true;
                        loopJump->u.jp.has_const_init = false;
                    }
                } else {
                    if (is_const_invariant(parent, loopCond->data.isop.op1, childNode)) {
                        check_loop_condition(loopJump, loopCond, loopVar, loopFirstNode, incre);
                        loopJump->u.jp.unk26 = false;
                        loopJump->u.jp.has_const_init = false;
                    }
                }
            }
        }

        if (loopJump->u.jp.incre == 0) {
            return;
        }

        //! BUG: Most of the time, stat_head->prev->opc is Unop, but in a few cases it's Uloc
        // if loopFirstNode->unkBb4 != 0 and u.loc.page is odd, loop unrolling will be prevented
        if ((!loopFirstNode->unkBb4 || !(loopFirstNode->stat_head->prev->u.nop.flags & 1)) &&
                (childNode == loopFirstNode
                 // Loop contains control flow
                 || (outerChild->region == NULL
                     && !complex_control_flow_in_interval(parent)
                     && no_early_exits(parent, loopFirstNode->num, childNode->num)
                     // Local vars, parameters, or function-static vars
                     && (loopVar->data.isvar_issvar.var_data.memtype == Mmt
                      || loopVar->data.isvar_issvar.var_data.memtype == Pmt
                      || in_fsym(loopVar->data.isvar_issvar.var_data.blockno))))) {
            if (loopFirstNode->predecessors->next->next == NULL) { //! redundant check
                if (loopFirstNode->predecessors->graphnode == childNode && loopFirstNode->predecessors->next->graphnode->successors->next == NULL) {
                    loopFirstNode->unk5 = 2; // canunroll
                } else if (loopFirstNode->predecessors->graphnode->successors->next == NULL && loopFirstNode->predecessors->next->graphnode == loopFirstNode) {
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
            determine_if_unrollable(region->intv, outerChild, parent, loopFirstNode);
            region = region->next;
        } while (region != NULL);
    }
}

/* Inner function
00455C48 find_unrollable_loops
00455D38 analoop
*/
static void find_unrollable_loops(struct Interval *child, struct Interval *parent) {
    struct Graphnode *loopFirstNode;
    struct IntervalList *region;

    if (child != NULL) {
        if (child->type == intv_loop) {
            loopFirstNode = interval_first_node(child);

            if (!loopFirstNode->unk4) {
                region = parent->region;
                do {
                    if (region->intv->type == intv_loop) {
                        determine_if_unrollable(region->intv, child, parent, loopFirstNode);
                    }
                    region = region->next;
                } while (region != NULL);
            }
        }

        region = parent->region;
        do {
            find_unrollable_loops(region->intv->child, region->intv);
            region = region->next;
        } while (region != NULL);
    }
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
    int depth;

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

    do {
        oldInterval = numintval;
        intvRoot = reduce_control_tree(intvRoot);
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

    graphhead->loopdepth = 0;
    depth = 0;

    do {
        curIntv = intvRoot;

        do {
            find_loop_relations(curIntv, depth);
            curIntv = curIntv->next;
        } while (curIntv != NULL);

        depth++;
    } while (graphhead->loopdepth == 0);

    curnode = graphhead;
    while (curnode != NULL) {
        curnode->bvs.stage1.u.precm.pavin.num_blocks = 0;
        curnode->bvs.stage1.u.precm.pavin.blocks = NULL;
        checkinitbvlivran(&curnode->bvs.stage1.u.precm.pavin);
        if (curnode->predecessors == NULL || curnode->unk4) {
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
        find_unrollable_loops(curIntv->child, curIntv);
        curIntv = curIntv->next;
    }
    alloc_release(&intv_heap, heapBlock);
}
