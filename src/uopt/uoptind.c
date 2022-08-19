#include <stdlib.h>
#include <string.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptkill.h"
#include "uoptreg1.h"
#include "uoptutil.h"
#include "uoptfeedback.h"
#include "uopttemp.h"
#include "uoptppss.h"
#include "uoptitab.h"
#include "uoptind.h"
#include "uoptprep.h"

/*
00430680 func_00430680
*/
static bool func_0042FEA0(struct IChain *offset_ilod, struct Statement *stat, struct Graphnode *node) {
    bool result = false;
    struct Statement *search = stat;

    while (search != node->stat_head) {
        search = search->prev;

        if (search->opc == Uisst || search->opc == Ustr) {
            if (stat->u.store.ichain->isop.op1 == search->expr->ichain) {
                return false;
            }
            result = exproccurred(offset_ilod, search->expr->data.isvar_issvar.assigned_value);
        } else if (search->opc != Uaent &&
                   search->opc != Ubgnb &&
                   search->opc != Ucia &&
                   search->opc != Uclab &&
                   search->opc != Uclbd &&
                   search->opc != Uctrl &&
                   search->opc != Ucubd &&
                   search->opc != Ucup &&
                   search->opc != Udef &&
                   search->opc != Udup &&
                   search->opc != Uendb &&
                   search->opc != Uicuf &&
                   search->opc != Ulab &&
                   search->opc != Ulbdy &&
                   search->opc != Ulbgn &&
                   search->opc != Ulend &&
                   search->opc != Uloc &&
                   search->opc != Ultrm &&
                   search->opc != Umst &&
                   search->opc != Unop &&
                   search->opc != Uret &&
                   search->opc != Ustep &&
                   search->opc != Uujp &&
                   search->opc != Uxpar &&
                   search->opc != Urcuf) {
            result = exproccurred(offset_ilod, search->expr);
            if (!result) {
                if (search->opc == Uistr || search->opc == Uistv ||
                        search->opc == Uirst || search->opc == Uirsv ||
                        search->opc == Umov || search->opc == Umovv ||
                        search->opc == Utpeq || search->opc == Utpne ||
                        search->opc == Utpgt || search->opc == Utpge ||
                        search->opc == Utplt || search->opc == Utple) {
                    result = exproccurred(offset_ilod, search->u.store.expr);
                }
            }
        }

        if (result) {
            return true;
        }
    }

    return false;
}

/*
0043005C func_0043005C
0043019C func_0043019C
*/
static bool func_0043005C(struct IChain *ichain, struct Expression *expr, struct Expression **dest) {
    bool result = false;

    switch (expr->type) {
        case islda:
        case isconst:
        case isvar:
        case isilda:
        case issvar:
        case dumped:
        case isrconst:
            result = false;
            break;

        case isop:
            if (expr->ichain == ichain) {
                expr->count++;
                *dest = expr;
                result = true;
            } else if (optab[expr->data.isop.opc].is_binary_op) {
                result = func_0043005C(ichain, expr->data.isop.op1, dest) ||
                         func_0043005C(ichain, expr->data.isop.op2, dest);
            } else {
                return func_0043005C(ichain, expr->data.isop.op1, dest);
            }
            break;

        default: // empty
            caseerror(1, 100, "uoptind.p", 9);
            break;
    }
    return result;
}

/*
00430680 func_00430680
*/
static void func_0043019C(struct IChain *ilod, struct Expression **expr, struct Statement *stat, struct Graphnode *node) {
    bool result = false;
    struct Statement *search = stat;

    do {
        search = search->prev;
        if (search->opc == Uisst || search->opc == Ustr) {
            if (stat->u.store.ichain->isop.op1 == search->expr->ichain) {
                TRAP_IF(false == false);
            }
            result = func_0043005C(ilod, search->expr->data.isvar_issvar.assigned_value, expr);
        } else if (search->opc != Uaent &&
                   search->opc != Ubgnb &&
                   search->opc != Ucia &&
                   search->opc != Uclab &&
                   search->opc != Uclbd &&
                   search->opc != Uctrl &&
                   search->opc != Ucubd &&
                   search->opc != Ucup &&
                   search->opc != Udef &&
                   search->opc != Udup &&
                   search->opc != Uendb &&
                   search->opc != Uicuf &&
                   search->opc != Ulab &&
                   search->opc != Ulbdy &&
                   search->opc != Ulbgn &&
                   search->opc != Ulend &&
                   search->opc != Uloc &&
                   search->opc != Ultrm &&
                   search->opc != Umst &&
                   search->opc != Unop &&
                   search->opc != Uret &&
                   search->opc != Ustep &&
                   search->opc != Uujp &&
                   search->opc != Uxpar &&
                   search->opc != Urcuf) {
            result = func_0043005C(ilod, search->expr, expr);
            if (!result) {
                if (search->opc == Uistr || search->opc == Uistv ||
                        search->opc == Uirst || search->opc == Uirsv ||
                        search->opc == Umov || search->opc == Umovv ||
                        search->opc == Utpeq || search->opc == Utpne ||
                        search->opc == Utpgt || search->opc == Utpge ||
                        search->opc == Utplt || search->opc == Utple) {
                    result = func_0043005C(ilod, search->u.store.expr, expr);
                }
            }
        }
        
        if (result) {
            return;
        }
    } while (search != node->stat_head);
    TRAP_IF(false == false);
}

/*
00430680 func_00430680

stat: increment statement
*/
static int func_00430354(struct IChain *ichain, int offset, struct Statement *stat, struct Graphnode *node) {
    struct Statement *search = stat;
    while (search != node->stat_head) {
        search = search->prev;
        if (search->opc == Uisst || search->opc == Ustr) {
            if (stat->u.store.ichain->isop.op1 == search->expr->ichain) { // direct store to the increment...?
                return 0;
            }
        } else if (search->opc == Uistr && search->expr->ichain == ichain && search->u.store.u.istr.offset == offset) {
            if (search->u.store.expr->type == isop) {
                return 1;
            } else {
                return -1;
            }
        }
    }

    return 0;
}

/*
00430680 func_00430680
*/
static bool func_0043044C(struct IChain *ichain, int arg1, struct Expression **expr, struct Statement *stat, struct Graphnode *node) {
    struct Statement *search = stat;
    do {
        search = search->prev;

        if (search->opc == Uisst || search->opc == Ustr) {
            if (stat->u.store.ichain->isop.op1 == search->expr->ichain) {
                return false;
            }
        } else if (search->opc == Uistr && search->expr->ichain == ichain && search->u.store.u.istr.offset == arg1) {
            search->u.store.expr->count++;
            *expr = search->u.store.expr;
            return true;
        }
    } while (search != node->stat_head);

    return false;
}

/*
00430548 func_00430548
   asm shared outer function's arg2 through shared stack, somehow, with outer
   function storing `positive` at sp50 and this function accessing through $v0 + 11
*/
static int func_00430528(int offset1, int offset2, bool positive) {
    if (positive) {
        return offset1 < offset2;
    } else {
        return offset2 < offset1;
    }
}

/*
00430680 func_00430680
   uncalled
*/
static void func_00430548(struct RecurThing *recur, struct Statement *stat, bool positive) {
    struct RecurThing *stat_recur; // s1
    struct RecurThing *next;

    stat_recur = stat->u.store.u.str.unk30;
    if (stat_recur == NULL ||
            (stat_recur->ichain->isop.op1 == recur->ichain->isop.op1 &&
             func_00430528(recur->ichain->isop.size, stat_recur->ichain->isop.size, positive))) {
        stat->u.store.u.str.unk30 = recur;
        recur->next = stat_recur;
    } else {
        next = stat_recur->next;
        while (next != NULL &&
                (recur->ichain->isop.op1 != next->ichain->isop.op1 ||
                 func_00430528(next->ichain->isop.size, recur->ichain->isop.size, positive))) {
            stat_recur = next;
            next = next->next;
        }
        stat_recur->next = recur;
        recur->next = next;
    }
}

/*
00431508 candidate
*/
static bool func_00430680(struct IChain *ilod, struct Graphnode *node) {
    //void *sp84;
    struct Statement *stat; // sp7C
    bool overflow;
    struct IChain *multiplier;
    int mult_factor;
    int increment;
    int factor;
    struct RecurThing *recur;
    struct IChain *offset_ilod;
    bool found;
    struct IChain *iv_ichain;
    bool done;

    stat = node->stat_head;
    iv_ichain = NULL;
    done = false;
    do {
        if ((stat->opc == Uisst || stat->opc == Ustr) && stat->is_increment) {
            factor = ivfactor(ilod->isop.op1, stat->u.store.ichain->isop.op1, &overflow, &multiplier, &mult_factor);
            if (multiplier != NULL) {
                return false;
            }

            if (factor != 0) {
                increment = findincre(stat->expr->data.isvar_issvar.assigned_value);
                switch (func_00430354(ilod->isop.op1, ilod->isop.size + increment * factor, stat, node)) {
                    case 0:
                        offset_ilod = itable[ilod->table_index];
                        found = false;
                        while (!found && offset_ilod != NULL) {
                            if (offset_ilod->type == isop &&
                                    (offset_ilod->isop.opc == Uilod || offset_ilod->isop.opc == Uirld) &&
                                    offset_ilod->isop.op1 == ilod->isop.op1 &&
                                    offset_ilod->isop.size == ilod->isop.size + increment * factor &&
                                    bvectin(offset_ilod->bitpos, &node->bvs.stage1.u.precm.expoccur)) {
                                found = true;
                            } else {
                                offset_ilod = offset_ilod->next;
                            }
                        }

                        if (!found) {
                            return false;
                        }

                        // check if offset_ilod occurred in the same node,
                        // before the increment statement, but after any
                        // assignments to the iv
                        if (!func_0042FEA0(offset_ilod, stat, node)) {
                            return false;
                        }

                        if (iv_ichain == NULL) {
                            iv_ichain = stat->expr->ichain;
                        } else if (iv_ichain != stat->expr->ichain) {
                            return false;
                        }
                        break;

                    case -1:
                        return false;

                    case 1:
                        if (iv_ichain == NULL) {
                            iv_ichain = stat->expr->ichain;
                        } else if (iv_ichain != stat->expr->ichain) {
                            return false;
                        }
                        break;

                    default:
                        caseerror(1, 234, "uoptind.p", 9);
                        break;
                }
            }
        }

        if (stat == node->stat_tail) {
            done = true;
        }
        stat = stat->next;
    } while (!done);

    done = false;
    stat = node->stat_head;
    do {
        if (stat->opc == Uisst || stat->opc == Ustr) {
            if (stat->is_increment) {
                factor = ivfactor(ilod->isop.op1, stat->u.store.ichain->isop.op1, &overflow, &multiplier, &mult_factor);
                if (factor != 0) {
                    TRAP_IF(multiplier != NULL);
                    increment = findincre(stat->expr->data.isvar_issvar.assigned_value);
                    recur = alloc_new(sizeof (struct RecurThing), &perm_heap);
                    recur->ichain = ilod;
                    func_00430548(recur, stat, increment * factor > 0);
                    if (!func_0043044C(ilod->isop.op1, ilod->isop.size + increment * factor, &recur->expr, stat, node)) {
                        offset_ilod = itable[ilod->table_index];
                        found = false;
                        do {
                            if (offset_ilod->type == isop &&
                                    (offset_ilod->isop.opc == Uilod || offset_ilod->isop.opc == Uirld) &&
                                    offset_ilod->isop.op1 == ilod->isop.op1 &&
                                    offset_ilod->isop.size == ilod->isop.size + increment * factor &&
                                    bvectin(offset_ilod->bitpos, &node->bvs.stage1.u.precm.expoccur)) {
                                found = true;
                            } else {
                                offset_ilod = offset_ilod->next;
                            }
                        } while (!found);
                        func_0043019C(offset_ilod, &recur->expr, stat, node);
                    }
                }
            }
        }

        if (stat == node->stat_tail) {
            done = true;
        }
        stat = stat->next;
    } while (!done);

    return true;
}

/*
00430BF4 func_00430BF4
00430D74 func_00430D74
00431508 candidate
*/
static bool func_00430BF4(struct IChain *ichain, struct Graphnode *node) {
    bool result;

    if (ichain->type != isop) {
        return true;
    }

    if (!bvectin(ichain->bitpos, &node->bvs.stage1.alters)) {
        return true;
    }

    if (!optab[ichain->isop.opc].is_binary_op) {
        return func_00430BF4(ichain->isop.op1, node);
    }

    if (ichain->isop.opc == Umpy) {
        if (ichain->isop.op1->type != isconst && ichain->isop.op2->type != isconst) {
            return false;
        }
        result = func_00430BF4(ichain->isop.op1, node) && func_00430BF4(ichain->isop.op2, node);
    } else {
        result = func_00430BF4(ichain->isop.op1, node) && func_00430BF4(ichain->isop.op2, node);
    }

    return result;
}


/*
00430D74 func_00430D74
00431508 candidate
*/
static bool func_00430D74(struct IChain *ichain, struct Graphnode *node) {
    bool result;

    switch (ichain->type) {
        case islda:
        case isilda:
        case isconst:
            result = true;
            break;

        case isrconst:
            result = false;
            break;

        case isvar:
        case issvar:
            result = bvectin(ichain->bitpos, &node->bvs.stage1.u.cm.iv) || !bvectin(ichain->bitpos, &node->bvs.stage1.alters);
            break;

        case isop:
            if (ichain->isop.opc == Udec || ichain->isop.opc == Uinc || ichain->isop.opc == Uneg) {
                return func_00430D74(ichain->isop.op1, node);
            }

            if (ichain->isop.opc == Uadd || ichain->isop.opc == Usub) {
                result = func_00430D74(ichain->isop.op1, node) && func_00430D74(ichain->isop.op2, node) &&
                        (func_00430BF4(ichain->isop.op1, node) || func_00430BF4(ichain->isop.op2, node));
            } else if (ichain->isop.opc == Uilod || ichain->isop.opc == Uirld) {
                result = !bvectin(ichain->bitpos, &node->bvs.stage1.alters);
            } else {
                result = bvectin(ichain->bitpos, &node->bvs.stage1.u.cm.cand) || !bvectin(ichain->bitpos, &node->bvs.stage1.alters);
            }
            break;

        default:
            caseerror(1, 333, "uoptind.p", 9);
            result = false;
            break;
    }

    return result;
}

/*
00430FF4 func_00430FF4
00431508 candidate
*/
static void func_00430FF4(struct IChain *ichain, struct Graphnode *node) {
    if (ichain->type == isop) {
        if (bvectin(ichain->bitpos, &node->bvs.stage1.alters)) {
            setbit(&node->bvs.stage1.u.cm.cand, ichain->bitpos);
        }

        func_00430FF4(ichain->isop.op1, node);
        if (optab[ichain->isop.opc].is_binary_op) {
            func_00430FF4(ichain->isop.op2, node);
        }
    }
}

/*
00431508 candidate
*/
static bool func_004310EC(struct IChain *ichain, bool *sp43, struct Graphnode *node) {
    bool result = false;

    switch (ichain->type) {
        case islda:
        case isconst:
        case isilda:
            result = true;
            break;

        case isrconst:
            *sp43 = false;
            break;

        case isvar:
        case issvar:
            result = !bvectin(ichain->bitpos, &node->bvs.stage1.alters);
            break;

        case isop:
            if (ichain->isop.opc == Uilod || ichain->isop.opc == Uirld) {
                result = !bvectin(ichain->bitpos, &node->bvs.stage1.alters);
            } else {
                result = bvectin(ichain->bitpos, &node->bvs.stage1.u.cm.cand) || !bvectin(ichain->bitpos, &node->bvs.stage1.alters);
            }
            break;

        default:
            caseerror(1, 391, "uoptind.p", 9);
            break;
    }
    return result;
}

/*
00431508 candidate
*/
static bool func_00431268(struct IChain *ichain, struct VarAccessList *list, struct Graphnode *node) {
    struct VarAccessList *access;
    bool result;

    access = list;
    result = false;
    while (access != NULL && !result) {
        if (access->type == 1 && !access->unk8) {
            result = slkilled(access->data.store, ichain->expr);
            if (result) {
                if ((access->data.store->opc == Uistr || access->data.store->opc == Uirst) &&
                        access->data.store->expr->ichain == ichain->isop.op1 &&
                        bvectin(ichain->bitpos, &node->bvs.stage1.u.precm.expoccur)) {
                    result = access->data.store->u.store.u.istr.offset >= ichain->isop.size;
                    if (result != 0) {
                        result = (access->data.store->u.store.u.istr.offset - ichain->isop.size) < ichain->isop.unk24_u16;
                    }

                    if (!result) {
                        result = ichain->isop.size >= access->data.store->u.store.u.istr.offset;
                        if (result != 0) {
                            result = (ichain->isop.size - access->data.store->u.store.u.istr.offset) < access->data.store->u.store.size;
                        }
                    }
                }
            }
        }
        access = access->next;
    }
    return result;
}

/*
00431508 candidate
*/
static int func_004313E4(struct IChain *ichain, struct Graphnode *node) {
    struct VarAccessList *access;
    int incre_result;
    int result = 0;

    access = node->varlisthead;
    while (access != NULL) {
        if (access->type == 1) {
            if ((access->data.store->opc == Uisst || access->data.store->opc == Ustr) &&
                    access->data.store->is_increment && ichain == access->data.store->expr->ichain) {
                incre_result = findincre(access->data.store->expr->data.isvar_issvar.assigned_value);
                if (result == 0 ||
                        (incre_result > 0 && result > 0) ||
                        (incre_result < 0 && result < 0)) {
                    result = incre_result;
                } else {
                    return 0;
                }
            }
        }
        access = access->next;
    }

    return result;
}

/*
004324F4 findinduct
    determine if the expression is a candidate for operator strength reduction
*/
static bool candidate(struct IChain *ichain, struct Graphnode *node) {
    bool sp43 = false; // ???
    bool iscand = false; // t0
    bool sp41 = false; // a3
    bool rhs_const = false; // sp40

    switch (ichain->isop.opc) {
        case Umpy:
            iscand = true;
            if (ichain->isop.op2->type == isconst) {
                rhs_const = true;
                if (ichain->isop.op1->type == isconst) {
                    iscand = false;
                }
            } else if (ichain->isop.op1->type == isconst) {
                rhs_const = false;
            } else {
                iscand = false;
            }

            if (iscand) {
                if (rhs_const) {
                    if (!bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.alters)) {
                        iscand = false;
                    } else if (bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand)) {
                        if (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld) {
                            iscand = true;
                        } else {
                            iscand = false;
                        }
                    } else {
                        iscand = func_00430D74(ichain->isop.op1, node);
                        if (iscand) {
                            func_00430FF4(ichain->isop.op1, node);
                        }
                    }
                } else {
                    if (!bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.alters)) {
                        iscand = false;
                    } else if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.cand)) {
                        if (ichain->isop.op2->isop.opc != Uilod && ichain->isop.op2->isop.opc != Uirld) {
                            iscand = true;
                        } else {
                            iscand = false;
                        }
                    } else {
                        iscand = func_00430D74(ichain->isop.op2, node);
                        if (iscand) {
                            func_00430FF4(ichain->isop.op2, node);
                        }
                    }
                }
            } else if (func_00430D74(ichain->isop.op1, node) && func_00430D74(ichain->isop.op2, node)) {
                if (ichain->isop.op2->type == isvar) {
                    iscand = func_00430BF4(ichain->isop.op1, node);
                    if (iscand) {
                        iscand = !iexproccurred(ichain->isop.op2, ichain->isop.op1);
                    }
                    if (iscand) {
                        func_00430FF4(ichain->isop.op1, node);
                    }
                    setbit(&varfactor_muls, ichain->bitpos);
                } else if (ichain->isop.op1->type == isvar) {
                    iscand = func_00430BF4(ichain->isop.op2, node);
                    if (iscand) {
                        iscand = !iexproccurred(ichain->isop.op1, ichain->isop.op2);
                    }
                    if (iscand) {
                        func_00430FF4(ichain->isop.op2, node);
                    }
                    setbit(&varfactor_muls, ichain->bitpos);
                } else {
                    iscand = false;
                }
            }
            break;

        case Uixa:
            switch (ichain->isop.op2->type) {
                case isconst:
                    if (ichain->isop.op1->type != isop) {
                        iscand = false;
                    } else {
                        iscand = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand);
                        if (iscand) {
                            iscand = (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld);
                        }
                    }
                    break;

                case isvar:
                case issvar:
                    iscand = false;
                    if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.iv)) {
                        iscand = func_004310EC(ichain->isop.op1, &sp43, node);
                    }
                    if (!bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.alters)) {
                        if (ichain->isop.op1->type == isop) {
                            if (bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand)) {
                                if (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld) {
                                    iscand = true;
                                }
                            }
                        }
                    }
                    break;

                case isop:
                    iscand = false;
                    if (!bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.alters)) {
                        if (ichain->isop.op1->type == isop) {
                            if (bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand)) {
                                if (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld) {
                                    iscand = true;
                                }
                            }
                        }
                    } else {
                        if (func_004310EC(ichain->isop.op1, &sp43, node)) {
                            if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.cand)) {
                                if (ichain->isop.op2->isop.opc != Uilod && ichain->isop.op2->isop.opc != Uirld) {
                                    iscand = true;
                                }
                            } else {
                                iscand = func_00430D74(ichain->isop.op2, node);
                                if (iscand) {
                                    func_00430FF4(ichain->isop.op2, node);
                                }
                            }
                        }
                    }
                    break;

                case isrconst:
                    iscand = false;
                    break;

                default:
                    caseerror(1, 521, "uoptind.p", 9);
                    break;
            }

            if (iscand) {
                iscand = func_00430BF4(ichain->isop.op1, node) || func_00430BF4(ichain->isop.op2, node);
            }
            break;

        case Uneg:
        case Uinc:
        case Udec:
            if (ichain->isop.op1->type != isop) {
                iscand = false;
            } else {
                iscand = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand);
                if (iscand) {
                    iscand = ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld;
                }
            }
            break;

        case Usub:
        case Uadd:
            iscand = false;
            if (ichain->isop.op1->type == isop) {
                if (bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand)) {
                    if (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld) {
                        iscand = func_004310EC(ichain->isop.op2, &sp43, node);
                    }
                }

                if (!iscand) {
                    if (ichain->isop.op2->type == isop) {
                        if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.cand)) {
                            if (ichain->isop.op2->isop.opc != Uilod && ichain->isop.op2->isop.opc != Uirld) {
                                iscand = func_004310EC(ichain->isop.op1, &sp43, node);
                            }
                        }
                    }
                }
            } else {
                if (ichain->isop.op2->type == isop) {
                    if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.cand)) {
                        if (ichain->isop.op2->isop.opc != Uilod && ichain->isop.op2->isop.opc != Uirld) {
                            iscand = func_004310EC(ichain->isop.op1, &sp43, node);
                        }
                    }
                }
            }

            if (iscand) {
                iscand = func_00430BF4(ichain->isop.op1, node) || func_00430BF4(ichain->isop.op2, node);
            }

            if (!iscand) {
                if (ichain->isop.op1->type == isvar) {
                    if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == isop) {
                        iscand = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.iv) && func_004310EC(ichain->isop.op2, &sp43, node);
                    }
                }
            }

            if (!iscand) {
                if (ichain->isop.op2->type == isvar) {
                    if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == isop) {
                        iscand = bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.iv) && func_004310EC(ichain->isop.op1, &sp43, node);
                    }
                }
            }
            break;

        case Uilod:
        case Uirld:
            if (ichain->isop.op1->type != isop) {
                iscand = false;
            } else {
                iscand = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand);
                if (iscand) {
                    iscand = ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld;
                }
            }

            if (iscand) {
                sp41 = func_00431268(ichain, node->varlisthead, node);
                if (!sp41) {
                    if (node->stat_tail->opc == Ucia) {
                        if (lang == LANG_ADA ||
                                (IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags) && cupaltered(ichain, curlevel, indirprocs)) ||
                                listplkilled(node->stat_tail->u.cia.parameters, ichain->expr, false)) {
                            sp41 = true;
                        }
                    } else if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf || node->stat_tail->opc == Urcuf) {
                        if (cupaltered(ichain, node->stat_tail->u.call.level, node->stat_tail->u.call.proc) ||
                                listplkilled(node->stat_tail->u.call.parameters, ichain->expr, false)) {
                            sp41 = true;
                        }
                    }
                }
                iscand = !sp41;
            }

            if (iscand) {
                iscand = dorecur && func_00430680(ichain, node);
            }
            break;

        case Utpeq:
        case Utpne:
        case Uchkt:
            iscand = false;
            break;

        case Utpge:
        case Utpgt:
        case Utple:
        case Utplt:
            if (((ichain->isop.op2->type == islda || ichain->isop.op2->type == isilda || ichain->isop.op2->type == isconst) ||
                        !bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.alters)) &&
                    bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.iv)) {
                switch (ichain->isop.opc) {
                    case Utpge:
                    case Utpgt:
                        iscand = func_004313E4(ichain->isop.op1, node) < 0;
                        break;

                    case Utple:
                    case Utplt:
                        iscand = func_004313E4(ichain->isop.op1, node) > 0;
                        break;

                    default:
                        caseerror(1, 616, "uoptind.p", 9);
                        break;
                }
            } else {
                iscand = false;
            }
            break;

        default:
            caseerror(1, 459, "uoptind.p", 9);
            break;
    }

    return iscand;
}

/*
00456A2C oneproc
*/
void findinduct(void) {
    struct Graphnode *node; // spE4
    struct GraphnodeList *succ;
    struct GraphnodeList *pred;
    struct VarAccessList *access;
    struct IChain *ichain;
    int block; // s7
    int i; // s5
    unsigned int bit; // s2
    bool changed;

    checkbvlist(&indmults);
    checkbvlist(&boolexp);
    checkbvlist(&trepexp);
    checkbvlist(&varbits);
    checkbvlist(&slvarbits);

    node = graphhead;
    while (node != NULL) {
        node->bvs.stage1.u.cm.iv.num_blocks = 0;
        node->bvs.stage1.u.cm.iv.blocks = NULL;
        checkbvlist(&node->bvs.stage1.u.cm.iv);
        bvectcopy(&node->bvs.stage1.u.cm.iv, &varbits);
        bvectminus(&node->bvs.stage1.u.cm.iv, &vareqv);
        bvectintsect(&node->bvs.stage1.u.cm.iv, &node->bvs.stage1.alters);

        if (node->stat_tail->opc == Ucia) {
            if (lang == LANG_ADA) {
                initbv(&node->bvs.stage1.u.cm.iv, (struct BitVectorBlock) {0});
            } else {
                block = 0;
                i = 0;
                while (i < bitposcount) {
                    if (BVBLOCKEMPTY(node->bvs.stage1.u.cm.iv, block)) {
                        i += 0x80;
                    } else {
                        bit = 0;
                        while (i < bitposcount && bit < 0x80) {
                            if (BVINBLOCK(bit, block, node->bvs.stage1.u.cm.iv)) {
                                if (IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags) && cupaltered(bittab[i].ichain, curlevel, indirprocs)) {
                                    BVBLOCK_RESETBIT(node->bvs.stage1.u.cm.iv, bit, block);
                                } else if (listplkilled(node->stat_tail->u.cia.parameters, bittab[i].ichain->expr, bittab[i].ichain->isvar_issvar.vreg)) {
                                    BVBLOCK_RESETBIT(node->bvs.stage1.u.cm.iv, bit, block);
                                }
                            }
                            i++;
                            bit++;
                        }
                    }
                    block++;
                }
            }
        } else if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf || node->stat_tail->opc == Urcuf) {
            block = 0;
            i = 0;
            while (i < bitposcount) {
                if (BVBLOCKEMPTY(node->bvs.stage1.u.cm.iv, block)) {
                    i += 0x80;
                } else {
                    bit = 0;
                    while (i < bitposcount && bit < 0x80) {
                        if (BVINBLOCK(bit, block, node->bvs.stage1.u.cm.iv)) {
                            if (cupaltered(bittab[i].ichain, node->stat_tail->u.call.level, node->stat_tail->u.call.proc)) {
                                BVBLOCK_RESETBIT(node->bvs.stage1.u.cm.iv, bit, block);
                            } else if (listplkilled(node->stat_tail->u.call.parameters, bittab[i].ichain->expr, bittab[i].ichain->isvar_issvar.vreg)) {
                                BVBLOCK_RESETBIT(node->bvs.stage1.u.cm.iv, bit, block);
                            }
                        }
                        i++;
                        bit++;
                    }
                }
                block++;
            }
        }

        access = node->varlisthead;
        while (access != NULL) {
            if (access->type == 1) {
                if (access->data.store->opc == Uisst || access->data.store->opc == Ustr) {
                    if (!access->data.store->is_increment) {
                        resetbit(&node->bvs.stage1.u.cm.iv, access->data.store->expr->ichain->bitpos);
                    }
                } else {
                    block = 0;
                    i = 0;
                    while (i < bitposcount) {
                        if (BVBLOCKEMPTY(node->bvs.stage1.u.cm.iv, block)) {
                            i += 0x80;
                        } else {
                            bit = 0;
                            while (i < bitposcount && bit < 0x80) {
                                if (BVINBLOCK(bit, block, node->bvs.stage1.u.cm.iv) &&
                                        bvectin(i, &node->indiracc) &&
                                        slkilled(access->data.store, bittab[i].ichain->expr)) {
                                    BVBLOCK_RESETBIT(node->bvs.stage1.u.cm.iv, bit, block);
                                }
                                i++;
                                bit++;
                            }
                        }
                        block++;
                    }
                }
            }
            access = access->next;
        }

        // find strength reduction candidates
        node->bvs.stage1.u.cm.cand.num_blocks = 0;
        node->bvs.stage1.u.cm.cand.blocks = NULL;
        checkbvlist(&node->bvs.stage1.u.cm.cand);
        bvectcopy(&node->bvs.stage1.u.cm.cand, &indmults);
        bvectunion(&node->bvs.stage1.u.cm.cand, &trapop);
        bvectintsect(&node->bvs.stage1.u.cm.cand, &node->bvs.stage1.alters);
        block = 0;
        i = 0;
        while (i < bitposcount) {
            if (BVBLOCKEMPTY(node->bvs.stage1.u.cm.cand, block)) {
                i += 0x80;
            } else {
                bit = 0;
                while (i < bitposcount && bit < 0x80) {
                    if (BVINBLOCK(bit, block, node->bvs.stage1.u.cm.cand) &&
                            !candidate(bittab[i].ichain, node)) {
                        BVBLOCK_RESETBIT(node->bvs.stage1.u.cm.cand, bit, block);
                    }
                    i++;
                    bit++;
                }
            }
            block++;
        }

        unionintsect(&node->bvs.stage1.u.cm.cand, &slvarbits, &node->bvs.stage1.u.cm.iv);
        if (curproc->has_trap) {
            bvectcopy(&old, &trapconstop);
            intsectunion(&old, &node->bvs.stage1.antlocs, &node->bvs.stage1.avlocs);

            block = 0;
            i = 0;
            while (i < bitposcount) {
                if (BVBLOCKEMPTY(old, block)) {
                    i += 0x80;
                } else {
                    bit = 0;
                    while (i < bitposcount && bit < 0x80) {
                        if (BVINBLOCK(bit, block, old)) {
                            ichain = itable[bittab[i].ichain->table_index];
                            if (bvectin(i, &node->bvs.stage1.antlocs)) {
                                if (bvectin(i, &node->bvs.stage1.avlocs)) {
                                    do {
                                        if (trap_imply(bittab[i].ichain, ichain)) {
                                            if (!bvectin(ichain->bitpos, &node->bvs.stage1.antlocs)) {
                                                setbit(&node->bvs.stage1.antlocs, ichain->bitpos);
                                            }

                                            if (!bvectin(ichain->bitpos, &node->bvs.stage1.avlocs)) {
                                                setbit(&node->bvs.stage1.avlocs, ichain->bitpos);
                                            }
                                            resetbit(&old, ichain->bitpos);
                                        }
                                        ichain = ichain->next;
                                    } while (ichain != NULL);
                                } else {
                                    do {
                                        if (trap_imply(bittab[i].ichain, ichain) && !bvectin(ichain->bitpos, &node->bvs.stage1.antlocs)) {
                                            setbit(&node->bvs.stage1.antlocs, ichain->bitpos);
                                        }
                                        ichain = ichain->next;
                                    } while (ichain != NULL);
                                }
                            } else {
                                do {
                                    if (trap_imply(bittab[i].ichain, ichain) && !bvectin(ichain->bitpos, &node->bvs.stage1.avlocs)) {
                                        setbit(&node->bvs.stage1.avlocs, ichain->bitpos);
                                    }
                                    ichain = ichain->next;
                                } while (ichain != NULL);
                            }
                        }
                        i++;
                        bit++;
                    }
                }
                block++;
            }
        }

        node = node->next;
    }

    node = graphhead;
    while (node != NULL) {
        checkbvlist(&node->bvs.stage1.u.precm.antin);
        checkbvlist(&node->bvs.stage1.u.precm.antout);
        bvcopynot(&node->bvs.stage1.u.precm.antin, &asgnbits);
        bvectminus(&node->bvs.stage1.u.precm.antin, &varbits);

        if (node->successors == NULL) {
            initbv(&node->bvs.stage1.u.precm.antout, (struct BitVectorBlock) {0});
        } else if (!node->terminal) {
            if (node->successors->next == NULL) {
                bvcopynot(&node->bvs.stage1.u.precm.antout, &asgnbits);
                bvectminus(&node->bvs.stage1.u.precm.antout, &varbits);
                bvectminus(&node->bvs.stage1.u.precm.antout, &boolexp);
            } else {
                initbv(&node->bvs.stage1.u.precm.antout, (struct BitVectorBlock) {0});
            }
        } else {
            bvcopynot(&node->bvs.stage1.u.precm.antout, &asgnbits);
            bvectminus(&node->bvs.stage1.u.precm.antout, &varbits);
            bvectminus(&node->bvs.stage1.u.precm.antout, &boolexp);
        }

        node->bvs.stage1.u.precm.pavin.num_blocks = 0;
        node->bvs.stage1.u.precm.pavin.blocks = NULL;
        checkbvlist(&node->bvs.stage1.u.precm.pavin);
        bvectcopy(&node->bvs.stage1.u.precm.pavin, &asgnbits);
        bvectunion(&node->bvs.stage1.u.precm.pavin, &varbits);
        node->bvs.stage1.u.precm.pavout.num_blocks = 0;
        node->bvs.stage1.u.precm.pavout.blocks = NULL;
        checkbvlist(&node->bvs.stage1.u.precm.pavout);
        bvectcopy(&node->bvs.stage1.u.precm.pavout, &node->bvs.stage1.avlocs);
        bvectunion(&node->bvs.stage1.u.precm.pavout, &asgnbits);
        bvectunion(&node->bvs.stage1.u.precm.pavout, &varbits);
        node = node->next;
    }

    if (docodehoist) {
        do {
            node = graphtail;
            changed = false;
            while (node != NULL) {
                if (node->successors != NULL) {
                    if (!changed) {
                        bvectcopy(&old, &node->bvs.stage1.u.precm.antout);
                    }

                    succ = node->successors;
                    while (succ != NULL) {
                        bvectintsect(&node->bvs.stage1.u.precm.antout, &succ->graphnode->bvs.stage1.u.precm.antin);
                        succ = succ->next;
                    }

                    if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.antout)) {
                        changed = true;
                    }
                }

                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.precm.antin);
                }

                bvectglop(&node->bvs.stage1.u.precm.antin, &node->bvs.stage1.antlocs, &node->bvs.stage1.u.precm.antout, &node->bvs.stage1.alters);
                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.antin)) {
                    changed = true;
                }
                node = node->prev;
            }
        } while (changed);

        do {
            changed = false;
            node = graphhead;
            while (node != NULL) {
                if (node->predecessors != NULL) {
                    if (!changed) {
                        bvectcopy(&old, &node->bvs.stage1.u.precm.pavin);
                    }

                    pred = node->predecessors;
                    while (pred != NULL) {
                        bvectunion(&node->bvs.stage1.u.precm.pavin, &pred->graphnode->bvs.stage1.u.precm.pavout);
                        pred = pred->next;
                    }

                    if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.pavin)) {
                        changed = true;
                    }
                }

                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.precm.pavout);
                }

                unionminus(&node->bvs.stage1.u.precm.pavout, &node->bvs.stage1.u.precm.pavin, &node->bvs.stage1.alters);
                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.pavout)) {
                    changed = true;
                }
                node = node->next;
            }
        } while (changed);

        if (dbugno == 21) {
            printhoist(0);
        }

        initbv(&graphhead->bvs.stage1.u.precm.antin, (struct BitVectorBlock) {0});

        node = graphhead;
        while (node != NULL) {
            if (node->interprocedural_controlflow) {
                initbv(&node->bvs.stage1.u.precm.antin, (struct BitVectorBlock) {0});
            } else if (node->predecessors != NULL && node->predecessors->next != NULL) {
                bvectcopy(&old, &node->predecessors->graphnode->bvs.stage1.u.precm.pavout);

                pred = node->predecessors->next;
                do {
                    bvectunion(&old, &pred->graphnode->bvs.stage1.u.precm.pavout);
                    pred = pred->next;
                } while (pred != NULL);
                bvectintsect(&node->bvs.stage1.u.precm.antin, &old);
            }
            node = node->next;
        }

        if (dbugno == 22) {
            printhoist(0);
        }

        do {
            changed = false;
            node = graphtail;
            while (node != NULL) {
                if (node->successors != NULL) {
                    if (!bvectempty(&node->bvs.stage1.u.precm.antout)) {
                        if (!changed) {
                            bvectcopy(&old, &node->bvs.stage1.u.precm.antout);
                        }

                        succ = node->successors;
                        while (succ != NULL) {
                            bvectintsect(&node->bvs.stage1.u.precm.antout, &succ->graphnode->bvs.stage1.u.precm.antin);
                            succ = succ->next;
                        }

                        if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.antout)) {
                            changed = true;
                        }
                    }
                }

                if (!bvectempty(&node->bvs.stage1.u.precm.antin)) {
                    if (!changed) {
                        bvectcopy(&old, &node->bvs.stage1.u.precm.antin);
                    }

                    bvecthoistglop(&node->bvs.stage1.u.precm.antin, &node->bvs.stage1.antlocs, &node->bvs.stage1.u.precm.antout, &node->bvs.stage1.alters);
                    if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.antin)) {
                        changed = true;
                    }
                }
                node = node->prev;
            }
        } while (changed);

        node = graphhead;
        while (node != NULL) {
            node->hoistedexp.num_blocks = 0;
            node->hoistedexp.blocks = NULL;
            checkbvlist(&node->hoistedexp);
            bvectcopy(&node->hoistedexp, &node->bvs.stage1.u.precm.antout);
            minusminus(&node->hoistedexp, &node->bvs.stage1.u.precm.antin, &node->bvs.stage1.alters);
            bvectminus(&node->hoistedexp, &node->bvs.stage1.avlocs);
            bvectminus(&node->hoistedexp, &node->bvs.stage1.u.precm.pavlocs);
            if (node->successors != NULL && node->successors->next == NULL) {
                bvectminus(&node->successors->graphnode->bvs.stage1.u.precm.antin, &node->hoistedexp);
                initbv(&node->hoistedexp, (struct BitVectorBlock) {0});
            }
            node = node->next;
        }

        if (dbugno == 23) {
            printhoist(1);
        }
    }
}

/*
00430680 func_00430680
00433B00 ivfactor
00474FC8 func_00474FC8
00477E20 func_00477E20
*/
int ivfactor(struct IChain *ichain, struct IChain *iv, bool *overflow, struct IChain **multiplier, int *mult_factor) {
    int factor; // t1, sp54
    int left; // sp50
    int right; // sp4C
    bool right_ovf; // sp4B
    struct IChain *right_mult; // sp44
    int right_mult_factor; // sp40

    *overflow = false;
    *multiplier = NULL;
    *mult_factor = 1;

    if (ichain->type == isvar || ichain->type == issvar) {
        if (ichain == iv) {
            factor = 1;
        } else {
            factor = 0;
        }
    } else if (ichain->type == islda || ichain->type == isilda || ichain->type == isconst || ichain->type == isrconst) {
        factor = 0;
    } else if (ichain->isop.opc == Uadd ||
               ichain->isop.opc == Udec ||
               ichain->isop.opc == Uinc ||
               ichain->isop.opc == Uixa ||
               ichain->isop.opc == Umpy ||
               ichain->isop.opc == Uneg ||
               ichain->isop.opc == Usub) {
        switch (ichain->isop.opc) {
            case Umpy:
                if (ichain->isop.op1->type == isconst) {
                    factor = ichain->isop.op1->isconst.number.intval * ivfactor(ichain->isop.op2, iv, overflow, multiplier, mult_factor);
                    if (*multiplier != NULL) {
                        *mult_factor = (ichain->isop.op1->isconst.number.intval * *mult_factor);
                    }
                } else if (ichain->isop.op2->type == isconst) {
                    factor = ichain->isop.op2->isconst.number.intval * ivfactor(ichain->isop.op1, iv, overflow, multiplier, mult_factor);
                    if (*multiplier != NULL) {
                        *mult_factor = (ichain->isop.op2->isconst.number.intval * *mult_factor);
                    }
                } else {
                    factor = 0;
                    left = ivfactor(ichain->isop.op1, iv, overflow, multiplier, mult_factor);
                    right = ivfactor(ichain->isop.op2, iv, &right_ovf, &right_mult, &right_mult_factor);
                    if (left != 0) {
                        TRAP_IF(right != 0);
                        TRAP_IF(*multiplier != 0);
                        *multiplier = ichain->isop.op2;
                        *mult_factor = left;
                    } else if (right != 0) {
                        TRAP_IF(left != 0);
                        TRAP_IF(right_mult != 0);
                        *multiplier = ichain->isop.op1;
                        *mult_factor = right;
                    }
                }
                break;

            case Udec:
            case Uinc:
                factor = ivfactor(ichain->isop.op1, iv, overflow, multiplier, mult_factor);
                break;

            case Uneg:
                factor = -ivfactor(ichain->isop.op1, iv, overflow, multiplier, mult_factor);
                if (*multiplier != NULL) {
                    *mult_factor = -*mult_factor;
                }
                break;

            case Usub:
            case Uadd:
                left = ivfactor(ichain->isop.op1, iv, overflow, multiplier, mult_factor);
                right = ivfactor(ichain->isop.op2, iv, &right_ovf, &right_mult, &right_mult_factor);

                if (!*overflow) {
                    *overflow = right_ovf;
                }

                if (ichain->isop.opc == Uadd) {
                    factor = left + right;
                } else {
                    factor = left - right;
                }

                if (*multiplier == NULL) {
                    *multiplier = right_mult;
                    if (ichain->isop.opc == Uadd) {
                        *mult_factor = right_mult_factor;
                    } else {
                        *mult_factor = -right_mult_factor;
                    }
                }
                break;

            case Uixa:
                left = ivfactor(ichain->isop.op1, iv, overflow, multiplier, mult_factor);
                switch (ichain->isop.op2->type) {
                    case isconst:
                    case isrconst:
                        factor = left;
                        break;

                    case isvar:
                    case issvar:
                        if (ichain->isop.op2 == iv) {
                            factor = left + ichain->isop.size;
                        } else {
                            factor = left;
                        }
                        break;

                    case isop:
                        right = ivfactor(ichain->isop.op2, iv, &right_ovf, &right_mult, &right_mult_factor) * ichain->isop.size;
                        if (!*overflow) {
                            *overflow = right_ovf;
                        }

                        if (*multiplier == NULL) {
                            *multiplier = right_mult;
                            factor = left + right;
                            *mult_factor = right_mult_factor * ichain->isop.size;
                        } else {
                            factor = left + right;
                        }
                        break;

                    default:
                        caseerror(1, 1111, "uoptind.p", 9);
                        break;
                }
                break;

            default:
                caseerror(1, 1055, "uoptind.p", 9);
                break;
        }

        if (*overflow == false) {
            *overflow = ichain->isop.overflow_attr;
        }
    } else {
        factor = 0;
    }
    
    return factor;
}
