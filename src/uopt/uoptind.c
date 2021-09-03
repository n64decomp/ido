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
static bool func_0042FEA0(struct IChain *ichain, struct Statement *stat, struct Graphnode *node) {
    bool result = false;

    while (stat != node->stat_head) {
        stat = stat->prev;

        if (stat->opc == Uisst || stat->opc == Ustr) {
            if (stat->u.store.ichain->isop.op1 == stat->expr->ichain) {
                return false;
            }
            result = exproccurred(ichain, stat->expr->data.isvar_issvar.assigned_value);
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
                   stat->opc != Uxpar &&
                   stat->opc != Urcuf) {
            result = exproccurred(ichain, stat->expr);
            if (!result) {
                if (stat->opc == Uistr || stat->opc == Uistv ||
                        stat->opc == Uirst || stat->opc == Uirsv ||
                        stat->opc == Umov || stat->opc == Umovv ||
                        stat->opc == Utpeq || stat->opc == Utpne ||
                        stat->opc == Utpgt || stat->opc == Utpge ||
                        stat->opc == Utplt || stat->opc == Utple) {
                    result = exproccurred(ichain, stat->u.store.expr);
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
    bool result;

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
static void func_0043019C(struct IChain *ichain, struct Expression **expr, struct Statement *stat, struct Graphnode *node) {
    bool result = false;

    do {
        stat = stat->prev;
        if (stat->opc == Uisst || stat->opc == Ustr) {
            if (stat->u.store.ichain->isop.op1 == stat->expr->ichain) {
                TRAP_IF(false == false);
            }
            result = func_0043005C(ichain, stat->expr->data.isvar_issvar.assigned_value, expr);
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
                   stat->opc != Uxpar &&
                   stat->opc != Urcuf) {
            result = func_0043005C(ichain, stat->expr, expr);
            if (!result) {
                if (stat->opc == Uistr || stat->opc == Uistv ||
                        stat->opc == Uirst || stat->opc == Uirsv ||
                        stat->opc == Umov || stat->opc == Umovv ||
                        stat->opc == Utpeq || stat->opc == Utpne ||
                        stat->opc == Utpgt || stat->opc == Utpge ||
                        stat->opc == Utplt || stat->opc == Utple) {
                    result = func_0043005C(ichain, stat->u.store.expr, expr);
                }
            }
        }
        
        if (result) {
            return;
        }
    } while (stat != node->stat_head);
    TRAP_IF(false == false);
}

/*
00430680 func_00430680
*/
static int func_00430354(struct IChain *ichain, int arg1, struct Statement *stat, struct Graphnode *node) {
    while (stat != node->stat_head) {
        stat = stat->prev;
        if (stat->opc == Uisst || stat->opc == Ustr) {
            if (stat->u.store.ichain->isop.op1 == stat->expr->ichain) {
                return 0;
            }
        } else if (stat->opc == Uistr && stat->expr->ichain == ichain && stat->u.store.u.istr.offset == arg1) {
            if (stat->u.store.expr->type == isop) {
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
    do {
        stat = stat->prev;

        if (stat->opc == Uisst || stat->opc == Ustr) {
            if (stat->u.store.ichain->isop.op1 == stat->expr->ichain) {
                return false;
            }
        } else if (stat->opc == Uistr && stat->expr->ichain == ichain && stat->u.store.u.istr.offset == arg1) {
            stat->u.store.expr->count++;
            *expr = stat->u.store.expr;
            return true;
        }
    } while (stat != node->stat_head);

    return false;
}

/*
00430548 func_00430548
   asm shared outer function's arg2 through shared stack, somehow, with outer
   function storing `positive` at sp50 and this function accessing through $v0 + 11
*/
static int func_00430528(int size, int size2, bool positive) {
    if (positive) {
        return size < size2;
    } else {
        return size2 < size;
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
00431508 func_00431508
*/
static bool func_00430680(struct IChain *ichain, struct Graphnode *node) {
    //void *sp84;
    struct Statement *stat; // sp7C
    bool overflow;
    struct IChain *sp64;
    int sp60;
    int incre_result;
    int factor;
    struct RecurThing *recur;
    struct IChain *ichain_s0;
    bool found;
    struct IChain *ichain_s2;
    int temp_v0_3;
    bool done;

    stat = node->stat_head;
    ichain_s2 = NULL;
    done = false;
    do {
        if ((stat->opc == Uisst || stat->opc == Ustr) && stat->is_increment) {
            factor = ivfactor(ichain->isop.op1, stat->u.store.ichain->isop.op1, &overflow, &sp64, &sp60);
            if (sp64 != NULL) {
                return false;
            }

            if (factor != 0) {
                incre_result = findincre(stat->expr->data.isvar_issvar.assigned_value);
                temp_v0_3 = func_00430354(ichain->isop.op1, ichain->isop.size + (incre_result * factor), stat, node);
                switch (temp_v0_3) {
                    case 0:
                        ichain_s0 = itable[ichain->table_index];
                        found = false;
                        while (!found && ichain_s0 != NULL) {
                            if (ichain_s0->type == isop &&
                                    (ichain_s0->isop.opc == Uilod || ichain_s0->isop.opc == Uirld) &&
                                    ichain_s0->isop.op1 == ichain->isop.op1 &&
                                    ichain_s0->isop.size == ichain->isop.size + incre_result * factor &&
                                    bvectin(ichain_s0->bitpos, &node->bvs.stage1.u.precm.expoccur)) {
                                found = 1;
                            } else {
                                ichain_s0 = ichain_s0->next;
                            }
                        }

                        if (!found) {
                            return false;
                        }

                        if (!func_0042FEA0(ichain_s0, stat, node)) {
                            return false;
                        }

                        if (ichain_s2 == NULL) {
                            ichain_s2 = stat->expr->ichain;
                        } else if (ichain_s2 != stat->expr->ichain) {
                            return false;
                        }
                        break;

                    case -1:
                        return false;

                    case 1:
                        if (ichain_s2 == NULL) {
                            ichain_s2 = stat->expr->ichain;
                        } else if (ichain_s2 != stat->expr->ichain) {
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
                factor = ivfactor(ichain->isop.op1, stat->u.store.ichain->isop.op1, &overflow, &sp64, &sp60);
                if (factor != 0) {
                    TRAP_IF(sp64 != NULL);
                    incre_result = findincre(stat->expr->data.isvar_issvar.assigned_value);
                    recur = alloc_new(sizeof (struct RecurThing), &perm_heap);
                    recur->ichain = ichain;
                    func_00430548(recur, stat, incre_result * factor > 0);
                    if (!func_0043044C(ichain->isop.op1, ichain->isop.size + incre_result * factor, &recur->expr, stat, node)) {
                        ichain_s0 = itable[ichain->table_index];
                        found = false;
                        do {
                            if (ichain_s0->type == isop &&
                                    (ichain_s0->isop.opc == Uilod || ichain_s0->isop.opc == Uirld) &&
                                    ichain_s0->isop.op1 == ichain->isop.op1 &&
                                    ichain_s0->isop.size == ichain->isop.size + incre_result * factor &&
                                    bvectin(ichain_s0->bitpos, &node->bvs.stage1.u.precm.expoccur)) {
                                found = true;
                            } else {
                                ichain_s0 = ichain_s0->next;
                            }
                        } while (!found);
                        func_0043019C(ichain_s0, &recur->expr, stat, node);
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
00431508 func_00431508
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
00431508 func_00431508
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
            break;
    }

    return result;
}

/*
00430FF4 func_00430FF4
00431508 func_00431508
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
00431508 func_00431508
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
# 00431508 func_00431508
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
00431508 func_00431508
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
*/
static bool func_00431508(struct IChain *ichain, struct Graphnode *node) {
    //void *sp44;
    bool sp43; // ???
    bool sp42; // t0
    bool sp41; // a3
    bool sp40;

    //sp44 = MIPS2C_ERROR(Read from unset register $v0);
    switch (ichain->isop.opc) {
        case Umpy:
            sp42 = true;
            if (ichain->isop.op2->type == isconst) {
                sp40 = true;
                if (ichain->isop.op1->type == isconst) {
                    sp42 = false;
                }
            } else if (ichain->isop.op1->type == isconst) {
                sp40 = false;
            } else {
                sp42 = false;
            }

            if (sp42) {
                if (sp40) {
                    if (!bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.alters)) {
                        sp42 = false;
                    } else if (bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand)) {
                        if (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld) {
                            sp42 = true;
                        } else {
                            sp42 = false;
                        }
                    } else {
                        sp42 = func_00430D74(ichain->isop.op1, node);
                        if (sp42) {
                            func_00430FF4(ichain->isop.op1, node);
                        }
                    }
                } else {
                    if (!bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.alters)) {
                        sp42 = false;
                    } else if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.cand)) {
                        if (ichain->isop.op2->isop.opc != Uilod && ichain->isop.op2->isop.opc != Uirld) {
                            sp42 = true;
                        } else {
                            sp42 = false;
                        }
                    } else {
                        sp42 = func_00430D74(ichain->isop.op2, node);
                        if (sp42) {
                            func_00430FF4(ichain->isop.op2, node);
                        }
                    }
                }
            } else if (func_00430D74(ichain->isop.op1, node) && func_00430D74(ichain->isop.op2, node)) {
                if (ichain->isop.op2->type == isvar) {
                    sp42 = func_00430BF4(ichain->isop.op1, node);
                    if (sp42) {
                        sp42 = !iexproccurred(ichain->isop.op2, ichain->isop.op1);
                    }
                    if (sp42) {
                        func_00430FF4(ichain->isop.op1, node);
                    }
                    setbit(&varfactor_muls, ichain->bitpos);
                } else if (ichain->isop.op1->type == isvar) {
                    sp42 = func_00430BF4(ichain->isop.op2, node);
                    if (sp42) {
                        sp42 = !iexproccurred(ichain->isop.op1, ichain->isop.op2);
                    }
                    if (sp42) {
                        func_00430FF4(ichain->isop.op2, node);
                    }
                    setbit(&varfactor_muls, ichain->bitpos);
                } else {
                    sp42 = false;
                }
            }
            break;

        case Uixa:
            switch (ichain->isop.op2->type) {
                case isconst:
                    if (ichain->isop.op1->type != isop) {
                        sp42 = false;
                    } else {
                        sp42 = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand);
                        if (sp42) {
                            sp42 = (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld);
                        }
                    }
                    break;

                case isvar:
                case issvar:
                    sp42 = false;
                    if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.iv)) {
                        sp42 = func_004310EC(ichain->isop.op1, &sp43, node);
                    }
                    if (!bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.alters)) {
                        if (ichain->isop.op1->type == isop) {
                            if (bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand)) {
                                if (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld) {
                                    sp42 = true;
                                }
                            }
                        }
                    }
                    break;

                case isop:
                    sp42 = false;
                    if (!bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.alters)) {
                        if (ichain->isop.op1->type == isop) {
                            if (bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand)) {
                                if (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld) {
                                    sp42 = true;
                                }
                            }
                        }
                    } else {
                        if (func_004310EC(ichain->isop.op1, &sp43, node)) {
                            if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.cand)) {
                                if (ichain->isop.op2->isop.opc != Uilod && ichain->isop.op2->isop.opc != Uirld) {
                                    sp42 = true;
                                }
                            } else {
                                sp42 = func_00430D74(ichain->isop.op2, node);
                                if (sp42) {
                                    func_00430FF4(ichain->isop.op2, node);
                                }
                            }
                        }
                    }
                    break;

                case isrconst:
                    sp42 = false;
                    break;

                default:
                    caseerror(1, 521, "uoptind.p", 9);
                    break;
            }

            if (sp42) {
                sp42 = func_00430BF4(ichain->isop.op1, node) || func_00430BF4(ichain->isop.op2, node);
            }
            break;

        case Uneg:
        case Uinc:
        case Udec:
            if (ichain->isop.op1->type != isop) {
                sp42 = false;
            } else {
                sp42 = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand);
                if (sp42) {
                    sp42 = ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld;
                }
            }
            break;

        case Usub:
        case Uadd:
            sp42 = false;
            if (ichain->isop.op1->type == isop) {
                if (bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand)) {
                    if (ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld) {
                        sp42 = func_004310EC(ichain->isop.op2, &sp43, node);
                    }
                }

                if (!sp42) {
                    if (ichain->isop.op2->type == isop) {
                        if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.cand)) {
                            if (ichain->isop.op2->isop.opc != Uilod && ichain->isop.op2->isop.opc != Uirld) {
                                sp42 = func_004310EC(ichain->isop.op1, &sp43, node);
                            }
                        }
                    }
                }
            } else {
                if (ichain->isop.op2->type == isop) {
                    if (bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.cand)) {
                        if (ichain->isop.op2->isop.opc != Uilod && ichain->isop.op2->isop.opc != Uirld) {
                            sp42 = func_004310EC(ichain->isop.op1, &sp43, node);
                        }
                    }
                }
            }

            if (sp42) {
                sp42 = func_00430BF4(ichain->isop.op1, node) || func_00430BF4(ichain->isop.op2, node);
            }

            if (!sp42) {
                if (ichain->isop.op1->type == isvar) {
                    if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == isop) {
                        sp42 = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.iv) && func_004310EC(ichain->isop.op2, &sp43, node);
                    }
                }
            }

            if (!sp42) {
                if (ichain->isop.op2->type == isvar) {
                    if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == isop) {
                        sp42 = bvectin(ichain->isop.op2->bitpos, &node->bvs.stage1.u.cm.iv) && func_004310EC(ichain->isop.op1, &sp43, node);
                    }
                }
            }
            break;

        case Uilod:
        case Uirld:
            if (ichain->isop.op1->type != isop) {
                sp42 = false;
            } else {
                sp42 = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.cand);
                if (sp42) {
                    sp42 = ichain->isop.op1->isop.opc != Uilod && ichain->isop.op1->isop.opc != Uirld;
                }
            }

            if (sp42) {
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
                sp42 = !sp41;
            }

            if (sp42) {
                sp42 = dorecur && func_00430680(ichain, node);
            }
            break;

        case Utpeq:
        case Utpne:
        case Uchkt:
            sp42 = false;
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
                        sp42 = func_004313E4(ichain->isop.op1, node) < 0;
                        break;

                    case Utple:
                    case Utplt:
                        sp42 = func_004313E4(ichain->isop.op1, node) > 0;
                        break;

                    default:
                        caseerror(1, 616, "uoptind.p", 9);
                        break;
                }
            } else {
                sp42 = false;
            }
            break;

        default:
            caseerror(1, 459, "uoptind.p", 9);
            break;
    }

    return sp42;
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
                                } else if (listplkilled(node->stat_tail->u.cia.parameters, bittab[i].ichain->expr, bittab[i].ichain->isvar_issvar.unk19)) {
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
                            } else if (listplkilled(node->stat_tail->u.call.parameters, bittab[i].ichain->expr, bittab[i].ichain->isvar_issvar.unk19)) {
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
                            !func_00431508(bittab[i].ichain, node)) {
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
int ivfactor(struct IChain *ichain, struct IChain *iv, bool *overflow, struct IChain **arg3, int *arg4) {
    int sp54; // t1
    int sp50;
    bool sp4B;
    struct IChain *sp44;
    int sp4C;
    int sp40;

    *overflow = false;
    *arg3 = NULL;
    *arg4 = 1;

    if (ichain->type == isvar || ichain->type == issvar) {
        if (ichain == iv) {
            sp54 = 1;
        } else {
            sp54 = 0;
        }

    } else if (ichain->type == islda || ichain->type == isilda || ichain->type == isconst || ichain->type == isrconst) {
        sp54 = 0;
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
                    sp54 = ichain->isop.op1->isconst.number.intval * ivfactor(ichain->isop.op2, iv, overflow, arg3, arg4);
                    if (*arg3 != NULL) {
                        *arg4 = (ichain->isop.op1->isconst.number.intval * *arg4);
                    }
                } else if (ichain->isop.op2->type == isconst) {
                    sp54 = ichain->isop.op2->isconst.number.intval * ivfactor(ichain->isop.op1, iv, overflow, arg3, arg4);
                    if (*arg3 != NULL) {
                        *arg4 = (ichain->isop.op2->isconst.number.intval * *arg4);
                    }
                } else {
                    sp54 = 0;
                    sp50 = ivfactor(ichain->isop.op1, iv, overflow, arg3, arg4);
                    sp4C = ivfactor(ichain->isop.op2, iv, &sp4B, &sp44, &sp40);
                    if (sp50 != 0) {
                        TRAP_IF(sp4C != 0);
                        TRAP_IF(*arg3 != 0);
                        *arg3 = ichain->isop.op2;
                        *arg4 = sp50;
                    } else if (sp4C != 0) {
                        TRAP_IF(sp50 != 0);
                        TRAP_IF(sp44 != 0);
                        *arg3 = ichain->isop.op1;
                        *arg4 = sp4C;
                    }
                }
                break;

            case Udec:
            case Uinc:
                sp54 = ivfactor(ichain->isop.op1, iv, overflow, arg3, arg4);
                break;

            case Uneg: // switch 2
                sp54 = -ivfactor(ichain->isop.op1, iv, overflow, arg3, arg4);
                if (*arg3 != 0) {
                    *arg4 = -*arg4;
                }
                break;

            case Usub:
            case Uadd:
                sp50 = ivfactor(ichain->isop.op1, iv, overflow, arg3, arg4);
                sp4C = ivfactor(ichain->isop.op2, iv, &sp4B, &sp44, &sp40);
                sp54 = sp50 - sp4C;
                if (!*overflow) {
                    *overflow = sp4B;
                }

                if (ichain->isop.opc == Uadd) {
                    sp54 = sp50 + sp4C;
                }

                if (*arg3 == 0) {
                    *arg3 = sp44;
                    if (ichain->isop.opc == Uadd) {
                        *arg4 = sp40;
                    } else {
                        *arg4 = -sp40;
                    }
                }
                break;

            case Uixa:
                sp50 = ivfactor(ichain->isop.op1, iv, overflow, arg3, arg4);
                switch (ichain->isop.op2->type) {
                    case isconst:
                    case isrconst:
                        sp54 = sp50;
                        break;

                    case isvar:
                    case issvar:
                        if (ichain->isop.op2 == iv) {
                            sp54 = sp50 + ichain->isop.size;
                        } else {
                            sp54 = sp50;
                        }
                        break;

                    case isop:
                        sp4C = ivfactor(ichain->isop.op2, iv, &sp4B, &sp44, &sp40) * ichain->isop.size;
                        if (!*overflow) {
                            *overflow = sp4B;
                        }

                        if (*arg3 == NULL) {
                            *arg3 = sp44;
                            sp54 = sp50 + sp4C;
                            *arg4 = sp40 * ichain->isop.size;
                        } else {
                            sp54 = sp50 + sp4C;
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
        sp54 = 0;
    }
    
    return sp54;
}
