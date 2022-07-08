#include <stdlib.h>
#include <string.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "ucode.h"
#include "uoptions.h"
#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptcopy.h"
#include "uoptdbg.h"
#include "uoptppss.h"
#include "uoptitab.h"
#include "uoptkill.h"
#include "uoptprep.h"
#include "uoptloc.h"

/* 
00414108 insert_copied_expr
0041550C find_replacements
004175BC copypropagate
*/
bool entryav(struct Expression *expr) {
    bool available;

    if (expr == NULL) {
        return false;
    } 

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            available = true;
            break;

        case isilda:
            if (expr->data.islda_isilda.outer_stack->type != issvar) {
                available = true;
            } else {
                available = !expr->data.islda_isilda.outer_stack->killed;
            }
            break;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                return entryav(expr->data.isvar_issvar.copy);
            }
            available = !expr->killed;
            break;

        case isop:
            available = expr->data.isop.available;
            break;

        case dumped:
        default:
            caseerror(1, 70, "uoptcopy.p", 10);
            available = false; // UB
            break;

    }

    return available;
}

/* 
0041550C find_replacements
004175BC copypropagate
*/
bool entryant(struct Expression *expr) {
    bool anticipated; // sp27

    if (expr == NULL) {
        return false;
    } 

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            anticipated = true;
            break;

        case isilda:
            if (expr->data.islda_isilda.outer_stack->type != issvar) {
                anticipated = true;
            } else {
                anticipated = expr->data.islda_isilda.outer_stack->initialVal;
            }
            break;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                return entryant(expr->data.isvar_issvar.copy);
            } else {
                anticipated = expr->initialVal;
            }
            break;

        case isop:
            anticipated = expr->data.isop.anticipated;
            break;

        case dumped:
        default:
            caseerror(1, 89, "uoptcopy.p", 10);
            anticipated = false; // UB
            break;
    }

    return anticipated;
}

/* 
00413000 exprdelete
0041550C find_replacements
*/
void vardelete(struct Expression *expr, struct Graphnode *node) {
    if (expr->type == isvar || expr->type == issvar) {
        if (!expr->ichain->isvar_issvar.veqv) {
            if (bvectin(expr->ichain->isvar_issvar.assignbit, &node->bvs.stage1.alters) && !lvalaltered(expr->ichain, node)) {
                resetbit(&node->bvs.stage1.alters, expr->ichain->isvar_issvar.assignbit);
                if (lvalantloc(expr->ichain, node)) {
                    setbit(&node->bvs.stage1.antlocs, expr->ichain->isvar_issvar.assignbit);
                }
            }
        }
    }
}

/* 
00414108 insert_copied_expr
*/
void varinsert(struct Expression *expr, struct Graphnode *node) {
    struct Statement *stat;
    bool done;
    int i;

    done = false;
    for (stat = node->stat_head; !done && stat != NULL; stat = stat->next) {
        if ((stat->opc == Uistr ||
             stat->opc == Uistv ||
             stat->opc == Umov ||
             stat->opc == Umovv ||
             stat->opc == Uirst ||
             stat->opc == Uirsv) &&
                ((expr->type != isvar && expr->type != issvar) || !expr->ichain->isvar_issvar.vreg)) {
            if (stat->u.store.ichain != NULL && slkilled(stat, expr)) {
                stat->u.store.lval_ant = false;
                resetbit(&node->bvs.stage1.antlocs, stat->u.store.ichain->bitpos);
                setbit(&node->bvs.stage1.alters, stat->u.store.ichain->bitpos);
            }
        } else if ((stat->opc == Uisst ||
                    stat->opc == Ustr) &&
                !stat->expr->data.isvar_issvar.veqv &&
                stat->u.store.ichain != NULL && slkilled(stat, expr)) {
            stat->u.store.lval_ant = false;
            resetbit(&node->bvs.stage1.antlocs, stat->u.store.ichain->bitpos);
            setbit(&node->bvs.stage1.alters, stat->u.store.ichain->bitpos);
        }

        if (stat->next != NULL) {
            done = stat->next->graphnode != stat->graphnode;
        }
    }

    if ((expr->type == isvar || expr->type == issvar) &&
            !expr->ichain->isvar_issvar.veqv) {
        resetbit(&node->bvs.stage1.antlocs, expr->ichain->isvar_issvar.assignbit);
        setbit(&node->bvs.stage1.alters, expr->ichain->isvar_issvar.assignbit);
    }
    

    for (i = 0; i < bitposcount; i++) {
        if (bvectin0(i, &storeop) && !bvectin0(i, &node->bvs.stage1.u.precm.expoccur)) {
            if ((bittab[i].ichain->isop.opc == Uistr ||
                 bittab[i].ichain->isop.opc == Uistv ||
                 bittab[i].ichain->isop.opc == Umov ||
                 bittab[i].ichain->isop.opc == Umovv ||
                 bittab[i].ichain->isop.opc == Uirst ||
                 bittab[i].ichain->isop.opc == Uirsv) &&
                    ((expr->type != isvar && expr->type != issvar) || !expr->ichain->isvar_issvar.vreg) &&
                    slkilled(bittab[i].ichain->isop.stat, expr)) {
                setbit(&node->bvs.stage1.alters, i);
            }

            if ((bittab[i].ichain->isop.opc == Uisst ||
                 bittab[i].ichain->isop.opc == Ustr) &&
                    !bittab[i].ichain->isop.op1->isvar_issvar.veqv &&
                    slkilled(bittab[i].ichain->isop.stat, expr)) {
                setbit(&node->bvs.stage1.alters, i);
            }
        }
    }
}

/* 
00413000 exprdelete
0041550C find_replacements
004175BC copypropagate
0046C654 del_orig_cond
*/
void checkexpoccur(struct IChain *ichain, struct Graphnode *node) {
    struct Statement *stat;
    bool done;
    bool occurred;

    done = false;
    occurred = false;
    for (stat = node->stat_head; !done && !occurred && stat != NULL; stat = stat->next) {
        if (stat->opc == Uisst || stat->opc == Ustr) {
            occurred = exproccurred(ichain, stat->expr->data.isvar_issvar.assigned_value);
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
            occurred = exproccurred(ichain, stat->expr);
            if (!occurred &&
                    (stat->opc == Uistr ||
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
                     stat->opc == Uirsv)) {
                occurred = exproccurred(ichain, stat->u.store.expr);
            }
        }

        if (stat->next != NULL) {
            done = stat->next->graphnode != stat->graphnode;
        }
    }

    if (!occurred) {
        resetbit(&node->bvs.stage1.u.precm.expoccur, ichain->bitpos);
    }
}

/* 
0041297C exprant
00412CB4 checkexp_ant_av
*/
static bool exprant(struct IChain *ichain, struct Expression *expr) {
    bool anticipated;

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            anticipated = false;
            break;

        case isilda:
            if (expr->ichain == ichain) {
                anticipated = true;
            } else {
                anticipated = exprant(ichain, expr->data.islda_isilda.outer_stack);
            }
            break;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                anticipated = exprant(ichain, expr->data.isvar_issvar.copy);
            } else if (expr->ichain == ichain) {
                anticipated = expr->initialVal;
            } else if (expr->type == issvar) {
                anticipated = exprant(ichain, expr->data.isvar_issvar.outer_stack);
            } else {
                anticipated = false;
            }
            break;

        case isop:
            if (expr->ichain == ichain) {
                anticipated = expr->data.isop.anticipated;
            } else if (optab[expr->data.isop.opc].is_binary_op) {
                anticipated = exprant(ichain, expr->data.isop.op1) || exprant(ichain, expr->data.isop.op2);
            } else {
                anticipated = exprant(ichain, expr->data.isop.op1);
            }
            break;

        case dumped:
            anticipated = false;
            break;

        default:
            caseerror(1, 220, "uoptcopy.p", 10);
            anticipated = false;
            break;
    }

    return anticipated;
}

/* 
00412B18 exprav
00412CB4 checkexp_ant_av
*/
static bool exprav(struct IChain *ichain, struct Expression *expr) {
    bool available;

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            available = false;
            break;

        case isilda:
            if (expr->ichain == ichain) {
                available = true;
            } else {
                available = exprav(ichain, expr->data.islda_isilda.outer_stack);
            }
            break;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                available = exprav(ichain, expr->data.isvar_issvar.copy);
            } else if (expr->ichain == ichain) {
                available = expr->initialVal;
            } else if (expr->type == issvar) {
                available = exprav(ichain, expr->data.isvar_issvar.outer_stack);
            } else {
                available = false;
            }
            break;

        case isop:
            if (expr->ichain == ichain) {
                available = expr->data.isop.available;
            } else if (optab[expr->data.isop.opc].is_binary_op) {
                available = exprav(ichain, expr->data.isop.op1) || exprav(ichain, expr->data.isop.op2);
            } else {
                available = exprav(ichain, expr->data.isop.op1);
            }
            break;

        case dumped:
            available = false;
            break;

        default:
            caseerror(1, 264, "uoptcopy.p", 10);
            available = false;
    }
    return available;
}

/* 
00413000 exprdelete
*/
void checkexp_ant_av(struct IChain *ichain, struct Graphnode *node) {
    struct Statement *stat;
    bool done;
    bool anticipated;
    bool available;

    stat = node->stat_head;
    done = false;
    anticipated = false;
    while (stat != NULL && !done && !anticipated) {
        if (stat->opc == Uisst || stat->opc == Ustr) {
            anticipated = exprant(ichain, stat->expr->data.isvar_issvar.assigned_value);
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
            anticipated = exprant(ichain, stat->expr);

            if (!anticipated &&
                    (stat->opc == Uistr ||
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
                     stat->opc == Uirsv)) {
                anticipated = exprant(ichain, stat->u.store.expr);
            }
        }
        if (stat->next != NULL) {
            done = stat->next->graphnode != stat->graphnode;
        }
        stat = stat->next;
    }

    if (!anticipated) {
        resetbit(&node->bvs.stage1.antlocs, ichain->bitpos);
    }

    stat = node->stat_tail;
    done = false;
    available = false;
    while (stat != NULL && !done && !available) {
        if (stat->opc == Uisst || stat->opc == Ustr) {
            available = exprav(ichain, stat->expr->data.isvar_issvar.assigned_value);
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
            available = exprav(ichain, stat->expr);

            if (!available &&
                    (stat->opc == Uistr ||
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
                     stat->opc == Uirsv)) {
                available = exprav(ichain, stat->u.store.expr);
            }
        }
        if (stat->prev != NULL) {
            done = stat->prev->graphnode != stat->graphnode;
        }
        stat = stat->prev;
    }
    if (!available) {
        resetbit(&node->bvs.stage1.avlocs, ichain->bitpos);
    }
}

/* 
00413000 exprdelete
0041550C find_replacements
004175BC copypropagate
*/
void exprdelete(struct Expression *expr, struct Graphnode *node) {
    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            break;

        case isilda:
            if (--expr->count == 0) {
                exprdelete(expr->data.islda_isilda.outer_stack, node);
                delentry(expr);
                checkexpoccur(expr->ichain, node);
                if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.precm.expoccur)) {
                    resetbit(&node->bvs.stage1.antlocs, expr->ichain->bitpos);
                    resetbit(&node->bvs.stage1.avlocs, expr->ichain->bitpos);
                } else {
                    checkexp_ant_av(expr->ichain, node);
                }
            }
            break;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                expr->count--;
                exprdelete(expr->data.isvar_issvar.copy, node);
                if (expr->count == 0) {
                    delentry(expr);
                }
            } else if (--expr->count == 0) {
                expr->var_access_list->type = 0;

                if (expr->type == issvar &&
                        (expr->data.isvar_issvar.assignment == NULL ||
                         expr->data.isvar_issvar.assignment->opc == Unop)) {
                    exprdelete(expr->data.isvar_issvar.outer_stack, node);
                }

                if (expr->initialVal) {
                    resetbit(&node->bvs.stage1.antlocs, expr->ichain->bitpos);
                }

                if (!expr->killed) {
                    resetbit(&node->bvs.stage1.avlocs, expr->ichain->bitpos);
                }

                vardelete(expr, node);
                if (expr->type == issvar) {
                    checkexpoccur(expr->ichain, node);
                }

                delentry(expr);
            }
            break;

        case isop:
            if (--expr->count == 0) {
                exprdelete(expr->data.isop.op1, node);
                if (optab[expr->data.isop.opc].is_binary_op) {
                    exprdelete(expr->data.isop.op2, node);
                }

                if (expr->data.isop.opc == Uiequ ||
                        expr->data.isop.opc == Uigeq ||
                        expr->data.isop.opc == Uineq ||
                        expr->data.isop.opc == Uigrt ||
                        expr->data.isop.opc == Uileq ||
                        expr->data.isop.opc == Uiles ||
                        expr->data.isop.opc == Uilod ||
                        expr->data.isop.opc == Uildv ||
                        expr->data.isop.opc == Uirld ||
                        expr->data.isop.opc == Uirlv) {
                    expr->var_access_list->type = 0;
                    // doesn't do anything
                    vardelete(expr, node);
                }

                delentry(expr);

                checkexpoccur(expr->ichain, node);
                if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.precm.expoccur)) {
                    if (expr->data.isop.anticipated) {
                        resetbit(&node->bvs.stage1.antlocs, expr->ichain->bitpos);
                    }
                    if (expr->data.isop.available) {
                        resetbit(&node->bvs.stage1.avlocs, expr->ichain->bitpos);
                    }
                } else {
                    checkexp_ant_av(expr->ichain, node);
                }
            }
            break;

        case dumped:
        default:
            caseerror(1, 349, "uoptcopy.p", 10);
            break;
    }
}

/* 
004175BC copypropagate
*/
void checkstatoccur(struct IChain *ichain, struct Graphnode *node) {
    struct Statement *stat;
    bool done;
    bool occurred;
    
    done = false;
    occurred = false;
    for (stat = node->stat_head; !done && !occurred && stat != NULL; stat = stat->next) {
        if (stat->opc == Uisst || stat->opc == Ustr) {
            occurred = stat->u.store.ichain == ichain;
        }

        if (stat->next != NULL) {
            done = stat->next->graphnode != stat->graphnode;
        }
    }

    if (!occurred) {
        resetbit(&node->bvs.stage1.u.precm.expoccur, ichain->bitpos);
    }
}
/* 
00413684 func_00413684
00414108 insert_copied_expr
0041550C find_replacements
*/
static void adjust_count(struct Expression *expr, int count) {
    switch (expr->type) {
        case isvar:
        case issvar:
            expr->count += count;
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                adjust_count(expr->data.isvar_issvar.copy, count);
            }
            break;

        case isop:
        case isilda:
            expr->count += count;
            break;

        case islda:
        case isconst:
        case isrconst:
            break;

        case dumped:
        default:
            caseerror(1, 455, "uoptcopy.p", 10);
    }
}

/* 
00413684 func_00413684
*/
static void func_004135CC(struct Expression *expr) {
    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            break;

        case isvar:
        case issvar:
            expr->count--;
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                expr->data.isvar_issvar.copy->count--;
            }
            break;

        case isop:
        case isilda:
            expr->count--;
            break;

        case dumped:
        default:
            caseerror(1, 470, "uoptcopy.p", 10);
            break;
    }
}

/* 
00414108 insert_copied_expr
*/
static void func_00413684(struct Expression *expr) {
    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            break;

        case isvar:
        case issvar:
            adjust_count(expr, 1);
            break;

        case isilda:
            if (++expr->count > 1) {
                func_004135CC(expr->data.islda_isilda.outer_stack);
            }
            break;

        case isop:
            if (++expr->count > 1) {
                func_004135CC(expr->data.isop.op1);
                if (optab[expr->data.isop.opc].is_binary_op) {
                    func_004135CC(expr->data.isop.op2);
                }
            }
            break;

        case dumped:
        default:
            caseerror(1, 485, "uoptcopy.p", 10);
            break;
    }
    
}
/* 
00414108 insert_copied_expr
func_004137DC
*/
static struct Expression *copy_searchloop(unsigned short hash, struct IChain *ichain, struct Expression *parent, struct Expression *left, struct Expression *right, struct Graphnode *node) {
    struct Expression *expr;
    bool found;

    expr = table[hash];
    found = false;
    while (!found && expr != NULL) {
        if (expr->type == isilda ||
                expr->type == isop ||
                expr->type == issvar ||
                expr->type == isvar) {
            if (node != expr->graphnode) {
                goto next;
            }
        }

        switch (ichain->type) {
            case isconst:
                if (expr->type != isconst) {
                    break;
                }
                if (ichain->dtype != expr->datatype) {
                    break;
                }
                if (expr->ichain == NULL) {
                    break;
                }
                switch (expr->datatype) {
                    case Adt:
                    case Fdt:
                    case Gdt:
                    case Hdt:
                    case Jdt:
                    case Ldt:
                    case Ndt:
                        if (ichain->isconst.number.intval == expr->data.isconst.number.intval) {
                            found = true;
                        }
                        break;

                    case Idt:
                    case Kdt:
                        if (ichain->isconst.number.intval  == expr->data.isconst.number.intval &&
                                ichain->isconst.number.intval2 == expr->data.isconst.number.intval2) {
                            found = true;
                        }
                        break;

                    case Mdt:
                        if (ichain->isconst.number.string.disp == expr->data.isconst.number.string.disp) {
                            found = true;
                        }
                        break;

                    default:
                        if (ichain->isconst.number.real.disp == expr->data.isconst.number.real.disp) {
                            found = true;
                        }
                        break;
                }
                break;

            case isrconst:
                if (expr->type == isrconst &&
                        ichain->dtype == expr->datatype &&
                        expr->ichain != NULL &&
                        ichain->isrconst.unk10 == expr->data.isrconst.value) {
                    found = true;
                }
                break;

            case islda:
                if (expr->type == islda &&
                        expr->ichain != NULL &&
                        ichain->islda_isilda.offset == expr->data.islda_isilda.offset &&
                        parent->data.islda_isilda.size == expr->data.islda_isilda.size &&
                        addreq(expr->data.islda_isilda.address, parent->data.islda_isilda.address)) {
                    found = true;
                }
                break;

            case isilda:
                if (expr->type == isilda && // doesn't check for null?
                        ichain->islda_isilda.offset == expr->data.islda_isilda.offset &&
                        parent->data.isop.op1 == expr->data.isop.op1 &&
                        addreq(expr->data.islda_isilda.address, parent->data.islda_isilda.address)) {
                    found = true;
                }
                break;

            case isvar:
                if (expr->type == isvar && addreq(expr->data.isvar_issvar.location, ichain->isvar_issvar.location)) {
                    found = expr->initialVal;
                }
                break;

            case issvar:
                if (expr->type == issvar && addreq(expr->data.isvar_issvar.location, ichain->isvar_issvar.location)) {
                    found = expr->initialVal;
                }
                break;

            case isop:
                if (expr->type != isop) {
                    break;
                }
                if (ichain->isop.opc != expr->data.isop.opc) {
                    break;
                }

                switch (ichain->isop.opc) {
                    case Uadd:
                    case Uand:
                    case Uint:
                    case Uior:
                    case Umpy:
                    case Uuni:
                    case Uxor:
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if (((left == expr->data.isop.op1 && right == expr->data.isop.op2) ||
                                    (right == expr->data.isop.op1 && left == expr->data.isop.op2)) &&
                                ichain->isop.overflow_attr == expr->data.isop.aux2.v1.overflow_attr) {
                            found = true;
                        }
                        break;

                    case Uequ:
                    case Uneq:
                        if (ichain->dtype != expr->datatype) {
                            break;
                        }
                        if ((left == expr->data.isop.op1 && right == expr->data.isop.op2) ||
                                (right == expr->data.isop.op1 && left == expr->data.isop.op2)) {
                            found = true;
                        }
                        break;

                    case Ubsub:
                    case Usub:
                    case Udiv:
                    case Umod:
                    case Urem:
                    case Umin:
                    case Umax:
                    case Udif:
                    case Umus:
                    case Ushl:
                    case Ushr:
                    case Usign:
                        if (ichain->dtype != expr->datatype) {
                            break;
                        }
                        if (left == expr->data.isop.op1 && right == expr->data.isop.op2) {
                            if (ichain->isop.overflow_attr == expr->data.isop.aux2.v1.overflow_attr) {
                                found = true;
                            }
                        }
                        break;

                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                        if (ichain->dtype != expr->datatype) {
                            break;
                        }
                        if (left == expr->data.isop.op1 && right == expr->data.isop.op2) {
                            found = true;
                        }
                        break;

                    case Uinn:
                        if (ichain->dtype != expr->datatype) {
                            break;
                        }
                        if (left == expr->data.isop.op1 && right == expr->data.isop.op2) {
                            if (ichain->isop.unk24_u16 == expr->data.isop.aux2.v1.unk3C) {
                                found = true;
                            }
                        }
                        break;

                    case Uixa:
                        if (ichain->dtype != expr->datatype) {
                            break;
                        }
                        if (expr->data.isop.op1 == left  && expr->data.isop.op2 == right) {
                            if (ichain->isop.size == expr->data.isop.datasize) {
                                found = true;
                            }
                        }
                        break;

                    case Uabs:
                    case Ulnot:
                    case Uneg:
                    case Unot:
                    case Uodd:
                    case Usgs:
                    case Usqr:
                    case Usqrt:
                        if (ichain->dtype != expr->datatype) {
                            break;
                        }
                        if (left != expr->data.isop.op1) {
                            break;
                        }
                        if (ichain->isop.overflow_attr != expr->data.isop.aux2.v1.overflow_attr) {
                            break;
                        }
                        found = true;
                        break;

                    case Uchkh:
                    case Uchkl:
                    case Ucvtl:
                    case Udec:
                    case Uinc:
                        if (ichain->dtype != expr->datatype) {
                            break;
                        }
                        if (left != expr->data.isop.op1) {
                            break;
                        }
                        if (ichain->isop.size != expr->data.isop.datasize) {
                            break;
                        }
                        if (ichain->isop.overflow_attr != expr->data.isop.aux2.v1.overflow_attr) {
                            break;
                        }
                        found = true;
                        break;

                    case Ucvt:
                    case Urnd:
                    case Utyp:
                        if (ichain->dtype != expr->datatype) {
                            break;
                        }
                        if (ichain->isop.cvtfrom != expr->data.isop.aux.cvtfrom) {
                            break;
                        }
                        if (left != expr->data.isop.op1) {
                            break;
                        }
                        if (ichain->isop.overflow_attr != expr->data.isop.aux2.v1.overflow_attr) {
                            break;
                        }
                        found = true;
                        break;

                    case Uadj:
                        if (ichain->isop.size != expr->data.isop.datasize) {
                            break;
                        }
                        if (ichain->isop.unk24_u16 != expr->data.isop.aux2.v1.unk3C) {
                            break;
                        }
                        if (left != expr->data.isop.op1) {
                            break;
                        }
                        found = true;
                        break;

                    case Uchkn:
                        if (left != expr->data.isop.op1) {
                            break;
                        }
                        found = true;
                        break;

                    case Uilod:
                    case Uirld:
                        if (ichain->dtype != expr->datatype) {
                            break;
                        }
                        if (left != expr->data.isop.op1) {
                            break;
                        }
                        if (ichain->isop.size != expr->data.isop.datasize) {
                            break;
                        }
                        if (ichain->isop.unk24_u16 != expr->data.isop.aux2.v1.unk3C) {
                            break;
                        }
                        found = expr->initialVal;
                        break;

                    case Uildv:
                    case Uirlv:
                        while (expr->next != NULL) {
                            expr = expr->next;
                        }
                        break;

                    case Uiequ:
                    case Uineq:
                        if ((left == expr->data.isop.op1 && right == expr->data.isop.op2) ||
                                (right == expr->data.isop.op1 && left == expr->data.isop.op2)) {
                            if (ichain->isop.size == expr->data.isop.datasize) {
                                found = expr->initialVal;
                            }
                        }
                        break;

                    case Uigeq:
                    case Uigrt:
                    case Uileq:
                    case Uiles:
                        if (expr->data.isop.op1 == left && expr->data.isop.op2 == right) {
                            if (ichain->isop.size == expr->data.isop.datasize) {
                                found = expr->initialVal;
                            }
                        }
                        break;

                    default:
                        caseerror(1, 566, "uoptcopy.p", 10);
                        break;
                }
                break;

            case dumped:
            default:
                caseerror(1, 527, "uoptcopy.p", 10);
                break;
        }

next:
        if (!found) {
            expr = expr->next;
        }
    }

    if (!found) {
        expr = appendchain(hash);
        if (outofmem) {
            return expr;
        }
        expr->graphnode = node;
    }

    return expr;
}

/* 
00414108 insert_copied_expr
0041550C find_replacements
func_00414108
*/
static void insert_copied_expr(struct IChain *ichain, struct Expression *expr, struct VarAccessList *varlist, struct Expression **dest, struct Graphnode *node) {
    struct Expression *sp7C;
    struct Expression *sp78;
    unsigned short hash;
    struct RealstoreData *real;
    int i;

    while ((expr->type == isvar || expr->type == issvar) &&
            expr->data.isvar_issvar.copy != NULL &&
            expr->ichain != ichain) {
        expr = expr->data.isvar_issvar.copy;
    }

    switch (ichain->type) {
        case islda:
        case isilda:
            if (ichain->type == isilda) {
                insert_copied_expr(ichain->islda_isilda.outer_stack_ichain, expr->data.islda_isilda.outer_stack, varlist, &sp7C, node);
            }

            *dest = copy_searchloop(isvarhash(ichain->islda_isilda.address), ichain, expr, NULL, NULL, node);
            if (*dest == NULL) {
                outofmem = true;
                return;
            }

            if ((*dest)->type == empty) {
                (*dest)->type = ichain->type;
                (*dest)->datatype = Adt;
                (*dest)->ichain = ichain;
                (*dest)->var_access_list = NULL;
                (*dest)->data.islda_isilda.offset = ichain->islda_isilda.offset;
                (*dest)->data.islda_isilda.size = expr->data.islda_isilda.size;
                (*dest)->data.islda_isilda.address = expr->data.islda_isilda.address;

                if (ichain->type == isilda) {
                    (*dest)->unk4 = 0;
                    (*dest)->visited = 0;
                    (*dest)->count = 0;
                    (*dest)->data.islda_isilda.outer_stack = sp7C;
                    (*dest)->data.islda_isilda.temploc = 0;

                    setbit(&node->bvs.stage1.antlocs, ichain->bitpos);
                    setbit(&node->bvs.stage1.avlocs, ichain->bitpos);
                    setbit(&node->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                }
            }

            if (ichain->type == isilda) {
                func_00413684(*dest);
            }
            break;

        case isconst:
            switch (ichain->dtype) {
                case Adt:
                case Fdt:
                case Gdt:
                case Hdt:
                case Jdt:
                case Ldt:
                case Ndt:
                    hash = isconsthash(ichain->isconst.number.intval);
                    break;

                case Idt:
                case Kdt:
                    hash = isconsthash(ichain->isconst.number.intval2);
                    break;

                default:
                    real = realstore;
                    for (i = 0; i < (ichain->isconst.number.real.disp >> 8); i++) {
                        real = real->next;
                    }
                    memcpy(ustrptr, &real->c[ichain->isconst.number.real.disp & 0xff], ichain->isconst.number.real.len);

                    hash = realhash(ichain->isconst.number.real.len);
                    break;
            }

            *dest = copy_searchloop(hash, ichain, expr, NULL, NULL, node);
            if (*dest == NULL) {
                outofmem = true;
                return;
            }

            if ((*dest)->type == empty) {
                (*dest)->type = isconst;
                (*dest)->datatype = ichain->dtype;

                (*dest)->data.isconst.number = ichain->isconst.number;
                if (ichain->dtype == Qdt || ichain->dtype == Rdt) {
                    (*dest)->data.isconst.real_significand = getfloatval(*dest, &(*dest)->data.isconst.real_exponent);
                }
                (*dest)->data.isconst.size = ichain->isconst.size;

                (*dest)->ichain = ichain;
                (*dest)->var_access_list = NULL;
            }
            break;

        case isrconst:
            *dest = copy_searchloop(isconsthash(ichain->isconst.number.intval), ichain, expr, NULL, NULL, node);
            if (*dest == NULL) {
                outofmem = true;
                break;
            }

            if ((*dest)->type == empty) {
                (*dest)->type = isrconst;
                (*dest)->datatype = ichain->dtype;
                (*dest)->data.isrconst.value = ichain->isrconst.unk10;
                (*dest)->data.isrconst.unk24 = ichain->isrconst.unk14;
                (*dest)->ichain = ichain;
                (*dest)->var_access_list = NULL;
            }
            break;

        case isvar:
        case issvar:
            if (ichain->type == issvar) {
                insert_copied_expr(ichain->isvar_issvar.outer_stack_ichain, expr->data.isvar_issvar.outer_stack, varlist, &sp7C, node);
            }

            if (outofmem) {
                break;
            }
            *dest = copy_searchloop(isvarhash(ichain->isvar_issvar.location), ichain, expr, NULL, NULL, node);
            if (*dest == NULL) {
                outofmem = true;
                break;
            }

            if ((*dest)->type == empty) {
                copycoderep((*dest), ichain->expr);
                (*dest)->initialVal = true;
                (*dest)->count = 0;
                (*dest)->graphnode = node;
                (*dest)->data.isvar_issvar.copy = NULL;
                (*dest)->data.isvar_issvar.assignment = NULL;
                if (ichain->type == issvar) {
                    (*dest)->data.isvar_issvar.outer_stack = sp7C;
                }

                setbit(&node->bvs.stage1.antlocs, ichain->bitpos);
                (*dest)->var_access_list = alloc_new(sizeof(struct VarAccessList), &perm_heap);
                if ((*dest)->var_access_list == NULL) {
                    outofmem = true;
                    break;
                }

                (*dest)->var_access_list->prev = varlist->prev;
                if (varlist->prev != NULL) {
                    varlist->prev->next = (*dest)->var_access_list;
                } else {
                    node->varlisthead = (*dest)->var_access_list;
                }

                (*dest)->var_access_list->next = varlist;
                varlist->prev = (*dest)->var_access_list;
                (*dest)->var_access_list->unk8 = (*dest)->data.isvar_issvar.vreg;
                (*dest)->var_access_list->type = 2;
                (*dest)->var_access_list->data.var = *dest;
                varinsert(*dest, node);

                (*dest)->killed = bvectin(ichain->bitpos, &node->bvs.stage1.alters);
                if (!(*dest)->killed) {
                    setbit(&node->bvs.stage1.avlocs, ichain->bitpos);
                }

                setbit(&node->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                setbit(&node->bvs.stage1.u.precm.expoccur, ichain->isvar_issvar.assignbit);
            }
            adjust_count(*dest, 1);
            break;

        case isop:
            if (optab[ichain->isop.opc].is_binary_op) {
                if (ichain->isop.op1 == expr->data.isop.op1->ichain ||
                        ichain->isop.op2 == expr->data.isop.op2->ichain) {
                    insert_copied_expr(ichain->isop.op1, expr->data.isop.op1, varlist, &sp7C, node);
                    insert_copied_expr(ichain->isop.op2, expr->data.isop.op2, varlist, &sp78, node);
                } else {
                    insert_copied_expr(ichain->isop.op1, expr->data.isop.op2, varlist, &sp7C, node);
                    insert_copied_expr(ichain->isop.op2, expr->data.isop.op1, varlist, &sp78, node);
                }
            } else {
                insert_copied_expr(ichain->isop.op1, expr->data.isop.op1, varlist, &sp7C, node);
                sp78 = NULL;
            }

            if (outofmem) {
                break;
            }

            if (ichain->isop.opc == Uadj ||
                    ichain->isop.opc == Uchkh ||
                    ichain->isop.opc == Uchkl ||
                    ichain->isop.opc == Ucvtl ||
                    ichain->isop.opc == Udec ||
                    ichain->isop.opc == Uildv ||
                    ichain->isop.opc == Uilod ||
                    ichain->isop.opc == Uinc ||
                    ichain->isop.opc == Uirld ||
                    ichain->isop.opc == Uirlv) {
                hash = opvalhash(ichain->isop.opc, sp7C, ichain->isop.size);
            } else {
                hash = isophash(ichain->isop.opc, sp7C, sp78);
            }

            *dest = copy_searchloop(hash, ichain, expr, sp7C, sp78, node);
            if (*dest == NULL) {
                outofmem = true;
                break;
            }

            if ((*dest)->type == empty) {
                (*dest)->type = isop;
                (*dest)->datatype = ichain->dtype;
                (*dest)->unk4 = 0;
                (*dest)->visited = 2;
                (*dest)->count = 0;
                (*dest)->data.isop.opc = ichain->isop.opc;
                (*dest)->data.isop.datatype = ichain->isop.datatype;
                (*dest)->data.isop.op1 = sp7C;
                (*dest)->data.isop.op2 = sp78;

                if (ichain->isop.opc != Uequ &&
                        ichain->isop.opc != Ugeq &&
                        ichain->isop.opc != Ugrt &&
                        ichain->isop.opc != Uleq &&
                        ichain->isop.opc != Ules &&
                        ichain->isop.opc != Uneq) {
                    (*dest)->data.isop.aux2.v1.overflow_attr = ichain->isop.overflow_attr;
                }

                (*dest)->graphnode = node;
                (*dest)->ichain = ichain;
                (*dest)->data.isop.temploc = 0;

                switch ((*dest)->data.isop.opc) {
                    case Uequ:
                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                    case Uneq:
                        (*dest)->data.isop.aux.unk38_trep = alloc_new(sizeof(struct TrepImageThing), &perm_heap);
#ifdef AVOID_UB
                        *(*dest)->data.isop.aux.unk38_trep = (struct TrepImageThing){0};
#endif
                        (*dest)->data.isop.aux.unk38_trep->ichain = NULL;
                        (*dest)->data.isop.aux2.unk3C_trep = alloc_new(sizeof(struct TrepImageThing), &perm_heap);
#ifdef AVOID_UB
                        *(*dest)->data.isop.aux2.unk3C_trep = (struct TrepImageThing){0};
#endif
                        (*dest)->data.isop.aux2.unk3C_trep->ichain = NULL;
                        break;

                    case Udif:
                    case Uint:
                    case Usgs:
                    case Uuni:
                        (*dest)->data.isop.datasize = ichain->isop.size;
                        break;

                    case Uinn:
                        (*dest)->data.isop.datasize = ichain->isop.size;
                        (*dest)->data.isop.aux2.v1.unk3C = ichain->isop.unk24_u16;
                        break;

                    case Uixa:
                        (*dest)->data.isop.datasize = ichain->isop.size;
                        break;

                    case Uchkh:
                    case Uchkl:
                    case Ucvtl:
                    case Udec:
                    case Uinc:
                        (*dest)->data.isop.datasize = ichain->isop.size;
                        break;

                    case Ucvt:
                    case Urnd:
                    case Utyp:
                        (*dest)->data.isop.aux.cvtfrom = ichain->isop.cvtfrom;
                        break;

                    case Uadj:
                        (*dest)->data.isop.datasize = ichain->isop.size;
                        (*dest)->data.isop.aux2.v1.unk3C = ichain->isop.unk24_u16;
                        break;

                    case Uildv:
                    case Uilod:
                    case Uirld:
                    case Uirlv:
                        (*dest)->data.isop.datasize = ichain->isop.size;
                        (*dest)->data.isop.aux2.v1.unk3C = ichain->isop.unk24_u16;
                        (*dest)->data.isop.aux2.v1.align = ichain->isop.unk13;
                        (*dest)->data.isop.unk34 = ichain->expr->data.isop.unk34;
                        (*dest)->data.isop.aux.mtagno = 0;
                        break;

                    case Uiequ:
                    case Uineq:
                        (*dest)->data.isop.datasize = ichain->isop.size;
                        (*dest)->data.isop.aux2.v1.unk3C = ichain->isop.unk24_u16;
                        (*dest)->data.isop.unk34 = ichain->expr->data.isop.unk34;
                        (*dest)->data.isop.aux.unk38 = ichain->expr->data.isop.aux.unk38;
                        break;

                    case Uigeq:
                    case Uigrt:
                    case Uileq:
                    case Uiles:
                        (*dest)->data.isop.datasize = ichain->isop.size;
                        (*dest)->data.isop.aux2.v1.unk3C = ichain->isop.unk24_u16;
                        (*dest)->data.isop.unk34 = ichain->expr->data.isop.unk34;
                        (*dest)->data.isop.aux.unk38 = ichain->expr->data.isop.aux.unk38;
                        break;

                    case Uabs:
                    case Uadd:
                    case Uand:
                    case Ubsub:
                    case Uchkn:
                    case Udiv:
                    case Uior:
                    case Ulbd:
                    case Ulnot:
                    case Umax:
                    case Umin:
                    case Umod:
                    case Umpy:
                    case Umus:
                    case Uneg:
                    case Unot:
                    case Uodd:
                    case Urem:
                    case Ushl:
                    case Ushr:
                    case Usign:
                    case Usqr:
                    case Usqrt:
                    case Usub:
                    case Uubd:
                    case Uxor:
                        break;

                    default:
                        caseerror(1, 855, "uoptcopy.p", 10);
                        break;
                }

                setbit(&node->bvs.stage1.antlocs, ichain->bitpos);

                (*dest)->data.isop.anticipated = true;
                (*dest)->data.isop.available = entryav((*dest)->data.isop.op1);
                if (optab[ichain->isop.opc].is_binary_op) {
                    (*dest)->data.isop.available = (*dest)->data.isop.available && entryav((*dest)->data.isop.op2);
                }

                if (ichain->isop.opc == Uiequ ||
                        ichain->isop.opc == Uigeq ||
                        ichain->isop.opc == Uigrt ||
                        ichain->isop.opc == Uildv ||
                        ichain->isop.opc == Uileq ||
                        ichain->isop.opc == Uiles ||
                        ichain->isop.opc == Uilod ||
                        ichain->isop.opc == Uineq ||
                        ichain->isop.opc == Uirld ||
                        ichain->isop.opc == Uirlv) {
                    (*dest)->var_access_list = alloc_new(sizeof(struct VarAccessList), &perm_heap);
                    if ((*dest)->var_access_list == NULL) {
                        outofmem = true;
                        break;
                    }

                    (*dest)->var_access_list->prev = varlist->prev;
                    if (varlist->prev != NULL) {
                        varlist->prev->next = (*dest)->var_access_list;
                    } else {
                        node->varlisthead = (*dest)->var_access_list;
                    }

                    (*dest)->var_access_list->next = varlist;
                    varlist->prev = (*dest)->var_access_list;
                    (*dest)->var_access_list->unk8 = false;
                    (*dest)->var_access_list->type = 2;
                    (*dest)->var_access_list->data.var = *dest;
                    varinsert(*dest, node);
                    (*dest)->initialVal = true;
                    (*dest)->killed = bvectin0(ichain->bitpos, &node->bvs.stage1.alters);
                    (*dest)->data.isop.available = (*dest)->data.isop.available && !(*dest)->killed;
                }

                if ((*dest)->data.isop.available) {
                    setbit(&node->bvs.stage1.avlocs, ichain->bitpos);
                }
                setbit(&node->bvs.stage1.u.precm.expoccur, ichain->bitpos);
            }

            func_00413684(*dest);
            break;

        case dumped:
        default:
            caseerror(1, 686, "uoptcopy.p", 10);
            break;
    }

    return;
}

/* 
0041550C find_replacements
func_004150E4
*/
static struct Expression *add_cvtl(struct Expression *expr, int size, Datatype dtype, struct Graphnode *node) {
    struct Expression *cvtl;
    struct IChain *temp_s1;
    unsigned short hash;
    bool found;

    if ((expr->type == isvar || expr->type == issvar) && expr->data.isvar_issvar.size * 8 <= size) {
        return expr;
    }

    if (expr->type == isop) {
        if (((expr->data.isop.opc == Uildv ||
              expr->data.isop.opc == Uilod ||
              expr->data.isop.opc == Uirld ||
              expr->data.isop.opc == Uirlv) && size >= expr->data.isop.aux2.v1.unk3C * 8) ||
                (expr->data.isop.opc == Ucvtl && expr->data.isop.datasize <= size)) {
            return expr;
        }
    }

    hash = opvalhash(Ucvtl, expr, size);
    cvtl = table[hash];
    found = false;
    while (!found && cvtl != NULL) {
        if (cvtl->type == isop &&
                cvtl->data.isop.opc == Ucvtl &&
                cvtl->data.isop.op1 == expr &&
                cvtl->data.isop.datasize == size &&
                cvtl->datatype == dtype) {
            found = true;
        }

        if (!found) {
            cvtl = cvtl->next;
        }
    }
    if (!found) {
        cvtl = appendchain(hash);
        if (outofmem) {
            return cvtl;
        }
    }

    if (cvtl->type == empty) {
        cvtl->type = isop;
        cvtl->datatype = dtype;
        cvtl->unk4 = 0;
        cvtl->visited = 2;
        cvtl->count = 0;
        cvtl->graphnode = node;
        cvtl->data.isop.opc = Ucvtl;
        cvtl->data.isop.datatype = dtype;
        cvtl->data.isop.op1 = expr;
        cvtl->data.isop.op2 = NULL;
        cvtl->data.isop.aux2.v1.overflow_attr = false;
        cvtl->data.isop.temploc = 0;
        cvtl->data.isop.datasize = size;
        cvtl->data.isop.anticipated = true;

        //! when expr is isconst, unaryfold overwrites this
        // but expr can also be isvar/issvar. this happens in oot
        // is this a bug, or are unk21/unk22 the same for isop/isvar/issvar
        if (expr->type == isop) {
            cvtl->data.isop.available = expr->data.isop.available;
        } else {
            // unaligned on x86_64
            cvtl->data.isop.available = expr->data.isvar_issvar.vreg;
        }
    }
    cvtl->count++;

    if (expr->type == isconst && 
            (dtype == Idt ||
             dtype == Jdt ||
             dtype == Kdt ||
             dtype == Ldt)) {
        unaryfold(cvtl);
        cvtl->var_access_list = constprop;
        isearchloop(isconstihash(cvtl->data.isconst.number.intval), cvtl, NULL, NULL);
        return cvtl;
    }

    temp_s1 = isearchloop(opvalihash(Ucvtl, expr->ichain, size), cvtl, expr->ichain, NULL);
    if (outofmem) {
        return cvtl;
    }
    cvtl->ichain = temp_s1;
    setbit(&node->bvs.stage1.antlocs, temp_s1->bitpos);
    setbit(&node->bvs.stage1.u.precm.expoccur, temp_s1->bitpos);
    if (cvtl->data.isop.available) {
        setbit(&node->bvs.stage1.avlocs, temp_s1->bitpos);
    }
    if (temp_s1->bitpos >= oldbitposcount && (!cvtl->data.isop.anticipated || !cvtl->data.isop.available)) {
        setbit(&node->bvs.stage1.alters, temp_s1->bitpos);
    }

    return cvtl;
}

/* 
0041550C find_replacements
func_004154AC
*/
static bool defined_locally(struct IChain *ichain, struct VarAccessList *access) {
    bool found = false;

    while (access != NULL && !found) {
        if (access->type == 1 && access->data.store->opc == Ustr && access->data.store->expr->ichain == ichain) {
            found = true;
        } else {
            access = access->prev;
        }
    }
    return !found;
}

/* 
0041550C find_replacements
004175BC copypropagate
func_0041550C
*/
static void find_replacements(struct Expression *orig, struct IChain **copied_ichain, bool no_nested_ops, struct Statement *stat, struct Graphnode *node) {
    struct IChain *spB4;
    struct IChain *spB0;
    struct IChain *spA4;
    struct Expression *new_value;
    bool sp9F;
    unsigned short hash;
    struct Expression *sp94;
    struct Expression *copied_expr;
    int byte_size;
    struct Expression *search2;
    struct IChain *asgn2;
    struct IChain *temp_s5;
    struct IChain *asgn;
    struct Expression *search;

    *copied_ichain = NULL;
    if (orig == NULL) {
        return;
    }

    switch (orig->type) {
        case islda:
        case isilda:
        case isconst:
        case isrconst:
            if (orig->var_access_list == constprop) {
                *copied_ichain = orig->ichain;
            }
            break;

        case isvar:
        case issvar:
            if (orig->data.isvar_issvar.copy == NULL) {
                orig->data.isvar_issvar.copy = nocopy;
                if (!orig->initialVal) {
                    break;
                }

                if ((stat->opc != Ufjp && stat->opc != Utjp) ||
                        (node->successors->graphnode->unk5 == notloopfirstbb &&
                         node->successors->next->graphnode->unk5 == notloopfirstbb)) {

                    // search for orig's assignment, if it has one
                    for (search = table[orig->table_index]; search != NULL; search = search->next) {
                        if (search->ichain != orig->ichain ||
                                search->data.isvar_issvar.assignment == NULL ||
                                search->data.isvar_issvar.assignment->outpar ||
                                !bvectin0(search->data.isvar_issvar.assignment->u.store.ichain->bitpos, &node->bvs.stage1.u.precm.avin)) {
                            continue;
                        }

                        asgn = search->data.isvar_issvar.assignment->u.store.ichain;

                        // if orig was assigned a register, check that the register was defined in this node
                        if ((asgn->isop.op2->type == isvar &&
                                    asgn->isop.op2->isvar_issvar.location.memtype == Rmt &&
                                    asgn->isop.op2->isvar_issvar.location.addr != r_sp &&
                                    defined_locally(asgn->isop.op2, node->varlisttail) &&
                                    (node->stat_tail->opc != Ucia &&
                                     node->stat_tail->opc != Ucup &&
                                     node->stat_tail->opc != Uicuf)) ||
                                !expinalter(asgn->isop.op2, node)) {

                            if (asgn->isop.op2->type == isop) {
                                // is assignment->expr->assigned_value ever different from search->assigned_value?
                                // in oot, they're always the same
                                if (has_ilod(search->data.isvar_issvar.assignment->expr->data.isvar_issvar.assigned_value) ||
                                        is_incr(search->data.isvar_issvar.assignment->expr->data.isvar_issvar.assigned_value) ||
                                        ((!orig->data.isvar_issvar.vreg || curblk != orig->data.isvar_issvar.location.blockno) &&
                                         !doingcopy && !curproc->has_trap) ||
                                        no_nested_ops ||
                                        countvars(asgn->isop.op2) >= 10) {
                                    continue;
                                }
                            }

                            // get the assigned value
                            *copied_ichain = asgn->isop.op2;
                            copied_expr = search->data.isvar_issvar.assignment->expr->data.isvar_issvar.assigned_value;
                            if (orig->data.isvar_issvar.size < 4) {
                                byte_size = orig->data.isvar_issvar.size * 8;
                            } else {
                                byte_size = 0;
                            }

                            resetbit(&node->bvs.stage1.antlocs, orig->ichain->bitpos);
                            if (!orig->killed) {
                                resetbit(&node->bvs.stage1.avlocs, orig->ichain->bitpos);
                            }

                            // delete the original expression
                            orig->var_access_list->type = 0;
                            vardelete(orig, node);
                            if (asgn->isop.opc == Uisst) {
                                exprdelete(orig->data.isvar_issvar.outer_stack, node);
                            }

                            // recurse: as long as the copied expression is a variable, keep looking for its definition
                            sp9F = true;
                            while (sp9F && ((*copied_ichain)->type == isvar || (*copied_ichain)->type == issvar)) {
                                sp9F = false;
                                for (search2 = table[(*copied_ichain)->expr->table_index]; search2 != NULL; search2 = search2->next) {
                                    if (search2->ichain != *copied_ichain ||
                                            search2->data.isvar_issvar.assignment == NULL ||
                                            search2->data.isvar_issvar.assignment->outpar ||
                                            !bvectin0(search2->data.isvar_issvar.assignment->u.store.ichain->bitpos, &node->bvs.stage1.u.precm.avin)) {
                                        continue;
                                    }

                                    asgn2 = search2->data.isvar_issvar.assignment->u.store.ichain;

                                    if (asgn2->isop.opc != Uisst && asgn2->isop.opc != Ustr) {
                                        dbgerror(4282);
                                    }

                                    if ((asgn2->isop.op2->type == isvar &&
                                                asgn2->isop.op2->isvar_issvar.location.memtype == Rmt &&
                                                asgn2->isop.op2->isvar_issvar.location.addr != r_sp &&
                                                defined_locally(asgn2->isop.op2, node->varlisttail) &&
                                                (node->stat_tail->opc != Ucia &&
                                                 node->stat_tail->opc != Ucup &&
                                                 node->stat_tail->opc != Uicuf)) ||
                                            !expinalter(asgn2->isop.op2, node)) {

                                        //! buggy:
                                        // this can copy things that shouldn't be copied as long as there's an intermediate variable.
                                        //
                                        // Luckily, has_ilod used the correct argument.
                                        //
                                        // ex:
                                        // here, `a` would not be copied:
                                        //    int a = v1 + ... + v10; (sum of 10 variables)
                                        //    return a + a;
                                        // 
                                        // but with another variable in between, a is copied twice:
                                        //    int a = v1 + ... + v10;
                                        //    int b = a;
                                        //    return b + b;
                                        //
                                        // this becomes:
                                        //    int a = v1 + ... + v10;
                                        //    int b = a;
                                        //    return (v1 + ... + v10) + (v1 + ... + v10);
                                        if (asgn2->isop.op2->type == isop) {
                                            if (has_ilod(search2->data.isvar_issvar.assigned_value) ||
                                                    // should be search2
                                                    is_incr(search->data.isvar_issvar.assignment->expr->data.isvar_issvar.assigned_value) ||
                                                    ((!(*copied_ichain)->isvar_issvar.vreg || curblk != (*copied_ichain)->isvar_issvar.location.blockno) && !doingcopy && !curproc->has_trap) ||
                                                    no_nested_ops ||
                                                    //! should be asgn2
                                                    countvars(asgn->isop.op2) >= 10) {
                                                continue;
                                            }
                                        }

                                        *copied_ichain = asgn2->isop.op2;
                                        copied_expr = search2->data.isvar_issvar.assigned_value;
                                        if (search2->data.isvar_issvar.size < 4) {
                                            if (byte_size == 0) {
                                                byte_size = search2->data.isvar_issvar.size * 8;
                                            } else if (search2->data.isvar_issvar.size * 8 < byte_size) {
                                                byte_size = search2->data.isvar_issvar.size * 8;
                                            }
                                        }

                                        sp9F = true;
                                        break;
                                    }
                                }
                            }

                            // insert the copied expression into the node
                            insert_copied_expr(*copied_ichain, copied_expr, orig->var_access_list, &new_value, node);
                            if (outofmem) {
                                return;
                            }

                            if (byte_size != 0) {
                                orig->data.isvar_issvar.copy = add_cvtl(new_value, byte_size, orig->datatype, node);
                                if (outofmem) {
                                    return;
                                }
                                new_value = orig->data.isvar_issvar.copy;
                                *copied_ichain = orig->data.isvar_issvar.copy->ichain;
                            } else {
                                orig->data.isvar_issvar.copy = new_value;
                                if (new_value->type == orig->type &&
                                        new_value->data.isvar_issvar.location.memtype == Rmt &&
                                        new_value->data.isvar_issvar.size != orig->data.isvar_issvar.size) {
                                    new_value->datatype = orig->datatype;
                                    new_value->data.isvar_issvar.size = orig->data.isvar_issvar.size;
                                }
                            }

                            adjust_count(new_value, orig->count - 1);

                            if (new_value->type != islda &&
                                    new_value->type != isconst &&
                                    new_value->type != isilda &&
                                    new_value->type != isrconst) {
                                find_replacements(new_value, &spA4, 0U, stat, node);
                                if (spA4 != NULL) {
                                    *copied_ichain = spA4;
                                }
                            } else {
                                fixcorr(orig);
                                copycoderep(orig, new_value);
                                orig->var_access_list = constprop;
                                if (new_value->type == isilda) {
                                    find_replacements(new_value, &spA4, 0U, stat, node);
                                }
                            }
                            return;
                        }
                    }
                }
            } else if (orig->data.isvar_issvar.copy != nocopy) {
                do {
                    orig = orig->data.isvar_issvar.copy;
                    if (orig->type == isvar || orig->type == issvar) {
                        sp9F = orig->data.isvar_issvar.copy != nocopy;
                    } else {
                        sp9F = false;
                    }
                } while (sp9F);
                *copied_ichain = orig->ichain;
            }
            break;

        case isop:
            find_replacements(orig->data.isop.op1, &spB4, orig->data.isop.opc == Umpy && orig->data.isop.op2->type == isop, stat, node);
            if (spB4 != NULL && spB4->type == isop) {
                resetbit(&boolexp, spB4->bitpos);
            }

            if (optab[orig->data.isop.opc].is_binary_op) {
                find_replacements(orig->data.isop.op2, &spB0, orig->data.isop.opc == Umpy && orig->data.isop.op1->type == isop, stat, node);
                if (spB0 != NULL && spB0->type == isop) {
                    resetbit(&boolexp, spB0->bitpos);
                }

                if (outofmem) {
                    return;
                }
                if (spB4 == NULL && spB0 == NULL) {
                    return;
                }

                if (orig->data.isop.opc == Uequ ||
                        orig->data.isop.opc == Ugeq ||
                        orig->data.isop.opc == Ugrt ||
                        orig->data.isop.opc == Uleq ||
                        orig->data.isop.opc == Ules ||
                        orig->data.isop.opc == Uneq) {
                    orig->data.isop.aux.unk38_trep->ichain = NULL;
                    orig->data.isop.aux2.unk3C_trep->ichain = NULL;
                }

                temp_s5 = orig->ichain;
                if (orig->data.isop.anticipated) {
                    resetbit(&node->bvs.stage1.antlocs, temp_s5->bitpos);
                }

                if (orig->data.isop.available) {
                    resetbit(&node->bvs.stage1.avlocs, temp_s5->bitpos);
                }

                if ((orig->datatype == Adt || orig->datatype == Hdt || orig->datatype == Jdt || orig->datatype == Ldt) &&
                        (orig->data.isop.op1->type == islda || orig->data.isop.op1->type == isconst) &&
                        (orig->data.isop.op2->type == islda || orig->data.isop.op2->type == isconst)) {
                    if (orig->data.isop.opc == Uixa) {
                        if (ixaovfw(orig, orig->data.isop.op1, orig->data.isop.op2)) {
                            ovfwwarning(Uixa);
                        } else {
                            ixafold(orig, orig->data.isop.op1, orig->data.isop.op2, orig);
                            orig->var_access_list = constprop;
                        }
                    } else if (binaryovfw(orig->datatype, orig->data.isop.opc, orig->data.isop.op1, orig->data.isop.op2)) {
                        if (orig->data.isop.aux2.v1.overflow_attr) {
                            ovfwwarning(orig->data.isop.opc);
                        }
                    } else if (orig->data.isop.op1->type != islda || orig->data.isop.op2->type != islda  
                            || orig->data.isop.op1->data.islda_isilda.address.blockno == orig->data.isop.op2->data.islda_isilda.address.blockno) {

                        if ((orig->data.isop.op2->type == orig->data.isop.op1->type ||
                                    (orig->data.isop.opc == Uadd ||
                                     orig->data.isop.opc == Usub)) &&
                                (orig->data.isop.opc != Ubsub &&
                                 orig->data.isop.opc != Uinn &&
                                 orig->data.isop.opc != Umus)) {
                            binaryfold(orig->data.isop.opc, orig->datatype, orig->data.isop.op1, orig->data.isop.op2, orig);
                            orig->var_access_list = constprop;
                        }

                    }
                }

                if (orig->type == isop && orig->data.isop.opc == Umpy &&
                        (orig->datatype == Qdt ||
                         orig->datatype == Rdt)) {
                    if (!strictieee && orig->data.isop.op1->type == isconst && orig->data.isop.op1->data.isconst.real_significand == 0) {
                        exprdelete(orig->data.isop.op2, node);
                        copycoderep(orig, orig->data.isop.op1);
                        orig->var_access_list = constprop;
                    } else if (!strictieee && orig->data.isop.op2->type == isconst && orig->data.isop.op2->data.isconst.real_significand == 0) {
                        exprdelete(orig->data.isop.op1, node);
                        copycoderep(orig, orig->data.isop.op2);
                        orig->var_access_list = constprop;
                    }
                }

                if (orig->type == islda || orig->type == isconst) {
                    switch (orig->type) {
                        case islda:
                            hash = isldaihash(orig->data.islda_isilda.address, orig->data.islda_isilda.offset);
                            break;

                        case isconst:
                            switch (orig->datatype) {
                                case Adt:
                                case Fdt:
                                case Gdt:
                                case Hdt:
                                case Jdt:
                                case Ldt:
                                case Ndt:
                                    hash = isconstihash(orig->data.isconst.number.intval);
                                    break;

                                case Idt:
                                case Kdt:
                                    hash = isconstihash(orig->data.isconst.number.intval2);
                                    break;

                                default:
                                    hash = realihash(orig->data.isconst.number);
                                    break;
                            }
                            break;

                        default:
                            caseerror(1, 1264, "uoptcopy.p", 10);
                    }

                    *copied_ichain = isearchloop(hash, orig, NULL, NULL);
                    if (outofmem) {
                        return;
                    }

                    checkexpoccur(temp_s5, node);
                    return;
                } else if (orig->type == isop && orig->data.isop.opc == Uneq) {
                    if (orig->data.isop.op2->type == isconst && orig->data.isop.op2->data.isconst.number.intval == 0 &&
                            spB4 != NULL && spB4->type == isop &&
                            (spB4->isop.opc == Uequ ||
                             spB4->isop.opc == Ugeq ||
                             spB4->isop.opc == Ugrt ||
                             spB4->isop.opc == Uleq ||
                             spB4->isop.opc == Ules ||
                             spB4->isop.opc == Uneq)) {

                        *copied_ichain = spB4;
                        checkexpoccur(temp_s5, node);
                        orig->var_access_list = constprop;
                        return;
                    } else if (orig->data.isop.op1->type == isconst && orig->data.isop.op1->data.isconst.number.intval == 0 &&
                            spB0 != NULL && spB0->type == isop &&
                            (spB0->isop.opc == Uequ ||
                             spB0->isop.opc == Ugeq ||
                             spB0->isop.opc == Ugrt ||
                             spB0->isop.opc == Uleq ||
                             spB0->isop.opc == Ules ||
                             spB0->isop.opc == Uneq)) {
                        *copied_ichain = spB0;
                        checkexpoccur(temp_s5, node);
                        orig->var_access_list = constprop;
                        return;
                    }
                }

                if (spB4 != NULL && spB0 != NULL) {
                    *copied_ichain = isearchloop(isopihash(orig->data.isop.opc, spB4, spB0), orig, spB4, spB0);
                } else if (spB4 == NULL) {
                    *copied_ichain = isearchloop(isopihash(orig->data.isop.opc, orig->data.isop.op1->ichain, spB0), orig, orig->data.isop.op1->ichain, spB0);
                } else {
                    *copied_ichain = isearchloop(isopihash(orig->data.isop.opc, spB4, orig->data.isop.op2->ichain), orig, spB4, orig->data.isop.op2->ichain);
                }

                if (outofmem) {
                    return;
                }

                checkexpoccur(temp_s5, node);
                if (orig->data.isop.anticipated) {
                    setbit(&node->bvs.stage1.antlocs, (*copied_ichain)->bitpos);
                }
                setbit(&node->bvs.stage1.u.precm.expoccur, (*copied_ichain)->bitpos);

                orig->data.isop.available = entryav(orig->data.isop.op1) && entryav(orig->data.isop.op2);
                if (orig->data.isop.available && 
                        (orig->data.isop.opc == Uiequ ||
                         orig->data.isop.opc == Uineq ||
                         orig->data.isop.opc == Uigeq ||
                         orig->data.isop.opc == Uigrt ||
                         orig->data.isop.opc == Uileq ||
                         orig->data.isop.opc == Uiles)) {
                    orig->data.isop.available = !orig->killed;
                }

                if (orig->data.isop.available) {
                    setbit(&node->bvs.stage1.avlocs, (*copied_ichain)->bitpos);
                }

                if (!orig->data.isop.anticipated || !orig->data.isop.available) {
                    setbit(&node->bvs.stage1.alters, (*copied_ichain)->bitpos);
                } else {
                    resetbit(&node->bvs.stage1.alters, (*copied_ichain)->bitpos);
                }

                if ((*copied_ichain)->bitpos < oldbitposcount) {
                    if (orig->data.isop.opc == Umpy &&
                            (orig->datatype != Qdt &&
                             orig->datatype != Rdt)) {

                        // multiply with one variable and one constant
                        if ((orig->data.isop.op1->type != isconst || orig->data.isop.op2->type != isconst) &&
                                ((orig->data.isop.op1->type == isconst ||
                                  orig->data.isop.op1->type == isvar ||
                                  orig->data.isop.op1->type == issvar) ||
                                 (orig->data.isop.op2->type == isconst ||
                                  orig->data.isop.op2->type == isvar ||
                                  orig->data.isop.op2->type == issvar)) &&
                                in_indmults((*copied_ichain)->isop.op1) && in_indmults((*copied_ichain)->isop.op2)) {
                            setbit(&indmults, (*copied_ichain)->bitpos);
                        }
                    } else if ((orig->data.isop.opc == Uadd ||
                                orig->data.isop.opc == Udec ||
                                orig->data.isop.opc == Uinc ||
                                orig->data.isop.opc == Uixa ||
                                orig->data.isop.opc == Uneg ||
                                orig->data.isop.opc == Usub) &&
                            (orig->datatype != Qdt &&
                             orig->datatype != Rdt) &&
                            in_indmults((*copied_ichain)->isop.op1) && in_indmults((*copied_ichain)->isop.op2)) {
                        setbit(&indmults, (*copied_ichain)->bitpos);
                    }
                }

                if (orig->data.isop.opc == Uequ ||
                        orig->data.isop.opc == Ugeq ||
                        orig->data.isop.opc == Ugrt ||
                        orig->data.isop.opc == Uleq ||
                        orig->data.isop.opc == Ules ||
                        orig->data.isop.opc == Uneq) {
                    trep_image(orig, true,  entryant(orig->data.isop.op1), entryav(orig->data.isop.op1), false);
                    trep_image(orig, false, entryant(orig->data.isop.op2), entryav(orig->data.isop.op2), false);
                }
            } else { // unary op
                if (outofmem) {
                    return;
                }

                if (spB4 == NULL) {
                    return;
                }

                temp_s5 = orig->ichain;
                if (orig->data.isop.anticipated) {
                    resetbit(&node->bvs.stage1.antlocs, temp_s5->bitpos);
                }

                if (orig->data.isop.available) {
                    resetbit(&node->bvs.stage1.avlocs, temp_s5->bitpos);
                }

                if (orig->data.isop.op1->type == islda || orig->data.isop.op1->type == isconst) {
                    if (orig->data.isop.opc == Uilod) {
                        sp9F = (orig->data.isop.op1->type == islda);
                    } else if (orig->data.isop.opc != Ucvt) {
                        sp9F = (orig->data.isop.opc == Uabs ||
                                orig->data.isop.opc == Uchkh ||
                                orig->data.isop.opc == Uchkl ||
                                orig->data.isop.opc == Ucvtl ||
                                orig->data.isop.opc == Udec ||
                                orig->data.isop.opc == Uinc ||
                                orig->data.isop.opc == Ulnot ||
                                orig->data.isop.opc == Uneg ||
                                orig->data.isop.opc == Uodd ||
                                orig->data.isop.opc == Usqr) &&
                            (orig->datatype == Adt ||
                             orig->datatype == Hdt ||
                             orig->datatype == Jdt ||
                             orig->datatype == Ldt);
                    } else {
                        sp9F = (orig->datatype == Adt ||
                                orig->datatype == Hdt ||
                                orig->datatype == Idt ||
                                orig->datatype == Jdt ||
                                orig->datatype == Kdt ||
                                orig->datatype == Ldt) &&
                            (orig->data.isop.aux.cvtfrom == Adt ||
                             orig->data.isop.aux.cvtfrom == Hdt ||
                             orig->data.isop.aux.cvtfrom == Idt ||
                             orig->data.isop.aux.cvtfrom == Jdt ||
                             orig->data.isop.aux.cvtfrom == Kdt ||
                             orig->data.isop.aux.cvtfrom == Ldt) &&
                            sizeoftyp(orig->datatype) == sizeoftyp(orig->data.isop.aux.cvtfrom) &&
                            orig->data.isop.op1->type != islda;
                    }

                    if (sp9F) {
                        if (orig->data.isop.opc == Uilod) {
                            sp94 = ilodfold(orig);
                            if (outofmem) {
                                return;
                            }

                            if (sp94->type == isvar) {
                                if (sp94->data.isvar_issvar.copy == NULL) {
                                    sp94->data.isvar_issvar.copy = nocopy;
                                }

                                if (orig->type == isop) {
                                    sp94->count += orig->count;
                                    orig->var_access_list->type = 0;
                                    delentry(orig);
                                }

                                copycoderep(orig, sp94);
                                orig->data.isvar_issvar.copy = sp94;
                            }
                        } else if (orig->data.isop.opc == Ucvt) {
                            cvtfold(orig);
                            orig->var_access_list = constprop;
                        } else if (unaryovfw(orig)) {
                            if (orig->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(orig->data.isop.opc);
                            }
                        } else {
                            unaryfold(orig);
                            orig->var_access_list = constprop;
                        }
                    }
                }

                checkexpoccur(temp_s5, node);

                if (orig->type == islda || orig->type == isconst || orig->type == isrconst) {
                    switch (orig->type) {
                        case islda:
                            hash = isldaihash(orig->data.islda_isilda.address, orig->data.islda_isilda.offset);
                            break;

                        case isconst:
                            switch (orig->datatype) {
                                case Adt:
                                case Fdt:
                                case Gdt:
                                case Hdt:
                                case Jdt:
                                case Ldt:
                                case Ndt:
                                    hash = isconstihash(orig->data.isconst.number.intval);
                                    break;

                                case Idt:
                                case Kdt:
                                    hash = isconstihash(orig->data.isconst.number.intval2);
                                    break;

                                default:
                                    hash = realihash(orig->data.isconst.number);
                                    break;
                            }
                            break;

                        case isrconst:
                            //! loads s32, but isrconst offset 0x20 is supposed to be u16
                            hash = isconstihash(orig->data.isconst.number.intval);
                            break;

                        default:
                            caseerror(1, 1423, "uoptcopy.p", 10);
                            break;
                    }

                    *copied_ichain = isearchloop(hash, orig, NULL, NULL);
                } else if (orig->type == isvar) {
                    *copied_ichain = isearchloop(isvarihash(orig->data.isvar_issvar.location), sp94, NULL, NULL);
                    if (outofmem) {
                        return;
                    }

                    orig->ichain = *copied_ichain;
                    if (sp94->initialVal) {
                        setbit(&node->bvs.stage1.antlocs, (*copied_ichain)->bitpos);
                    }

                    if (!sp94->killed) {
                        setbit(&node->bvs.stage1.avlocs, (*copied_ichain)->bitpos);
                    }

                    if (!sp94->initialVal || sp94->killed) {
                        setbit(&node->bvs.stage1.alters, (*copied_ichain)->bitpos);
                    }
                    setbit(&node->bvs.stage1.alters, (*copied_ichain)->isvar_issvar.assignbit);

                    setbit(&node->bvs.stage1.u.precm.expoccur, (*copied_ichain)->bitpos);
                    setbit(&node->bvs.stage1.u.precm.expoccur, (*copied_ichain)->isvar_issvar.assignbit);
                } else {
                    if (orig->data.isop.opc == Uilod || orig->data.isop.opc == Uirld) {
                        hash = opvalihash(orig->data.isop.opc, spB4, 0);
                    } else if (orig->data.isop.opc == Uadj ||
                            orig->data.isop.opc == Uchkh ||
                            orig->data.isop.opc == Uchkl ||
                            orig->data.isop.opc == Ucvtl ||
                            orig->data.isop.opc == Udec ||
                            orig->data.isop.opc == Uildv ||
                            orig->data.isop.opc == Uinc) {
                        hash = opvalihash(orig->data.isop.opc, spB4, orig->data.isop.datasize);
                    } else {
                        hash = isopihash(orig->data.isop.opc, spB4, NULL);
                    }

                    *copied_ichain = isearchloop(hash, orig, spB4, NULL);
                    if (outofmem) {
                        return;
                    }

                    if (orig->data.isop.anticipated) {
                        setbit(&node->bvs.stage1.antlocs, (*copied_ichain)->bitpos);
                    }

                    setbit(&node->bvs.stage1.u.precm.expoccur, (*copied_ichain)->bitpos);
                    orig->data.isop.available = entryav(orig->data.isop.op1);

                    if (orig->data.isop.opc == Uildv ||
                            orig->data.isop.opc == Uilod ||
                            orig->data.isop.opc == Uirld ||
                            orig->data.isop.opc == Uirlv) {
                        if (orig->data.isop.available) {
                            orig->data.isop.available = !orig->killed;
                        }
                    }

                    if (orig->data.isop.available) {
                        setbit(&node->bvs.stage1.avlocs, (*copied_ichain)->bitpos);
                    }

                    if (!orig->data.isop.anticipated || !orig->data.isop.available) {
                        setbit(&node->bvs.stage1.alters, (*copied_ichain)->bitpos);
                    } else  {
                        resetbit(&node->bvs.stage1.alters, (*copied_ichain)->bitpos);
                    }
                }
            }
            break;

        case dumped:
        default:
            caseerror(1, 1057, "uoptcopy.p", 10);
            break;
    }
}

/* 
004175BC copypropagate
   check if one of the parameters is a function pointer that indirectly calls longjmp
*/
static bool func_004173EC(struct Statement *parameters) {
    struct Statement *par;

    for (par = parameters; par != NULL; par = par->u.par.next) {
        if (par->u.par.dtype == Fdt && par->u.par.baseaddr->type == isconst && getproc(par->u.par.baseaddr->data.isconst.number.intval)->has_longjmp) {
            return true;
        }
    }

    return false;
}

/* 
004175BC copypropagate
   count total accesses to a var
*/
static int func_00417480(struct IChain *ichain, struct Graphnode *node) {
    struct VarAccessList *access;
    int accesses;

    access = node->varlisthead;
    accesses = 0;
    while (access != NULL) {
            if (access->type == 2 && !access->unk8) {
                if (access->data.var->type != isop && addreq(access->data.var->data.isvar_issvar.location, ichain->isvar_issvar.location)) {
                    accesses += access->data.var->count;
                }
            } else if (access->type == 1 && !access->unk8) {
                if (addreq(access->data.store->expr->data.isvar_issvar.location, ichain->isvar_issvar.location)) {
                    accesses++;
                }
            }
            access = access->next;
    }
    return accesses;
}

/* 
00456A2C oneproc
*/
void copypropagate(void) {
    struct Graphnode *node; // spD4 / s5, shared
    bool done; // spD2
    struct IChain *spBC;
    struct IChain *spB8; // s6
    struct IChain *spB0; // s4
    struct Statement *stat; // spAC / s2, shared
    struct BitVector aliases;
    bool sp93;
    //struct Graphnode *sp88;
    struct GraphnodeList *pred;
    struct GraphnodeList *succ;
    struct IChain *temp_s7;
    struct IChain *temp_s4_3;
    unsigned short hash;
    int i;
    int p;
    bool changed;
    bool phi_s1;
    bool phi_s2;
    bool phi_s3;
    bool phi_s8;

    checkbvlist(&storeop);
    checkbvlist(&trapop);
    lastdftime = getclock();
    old.blocks = NULL;
    old.num_blocks = 0;
    numdataflow++;
    checkbvlist(&old);

    for (node = graphhead; node != NULL; node = node->next) {
        node->bvs.stage1.u.precm.avin.num_blocks = 0;
        node->bvs.stage1.u.precm.avin.blocks = 0;
        checkbvlist(&node->bvs.stage1.u.precm.avin);
        if (node->predecessors != NULL && !node->interprocedural_controlflow) {
            bvectcopy(&node->bvs.stage1.u.precm.avin, &storeop);
        }

        node->bvs.stage1.u.precm.avout.num_blocks = 0;
        node->bvs.stage1.u.precm.avout.blocks = 0;
        checkbvlist(&node->bvs.stage1.u.precm.avout);
        bvectcopy(&node->bvs.stage1.u.precm.avout, &storeop);
    }

    if (outofmem) {
        return;
    }

    oldbitposcount = bitposcount;
    if (docopyprog) {
        // compute availability for statements
        do {
            dataflowiter++;
            changed = false;
            for (node = graphhead; node != NULL; node = node->next) {
                if (node->predecessors != NULL) {
                    if (!changed) {
                        bvectcopy(&old, &node->bvs.stage1.u.precm.avin);
                    }
                
                    for (pred = node->predecessors; pred != NULL; pred = pred->next) {
                        bvectintsect(&node->bvs.stage1.u.precm.avin, &pred->graphnode->bvs.stage1.u.precm.avout);
                    }

                    if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.avin)) {
                        changed = true;
                    }
                }
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.precm.avout);
                }

                // AVOUT = PAVLOCS | (AVIN & ~ABSALTERED)
                bvectglop(&node->bvs.stage1.u.precm.avout, &node->bvs.stage1.u.precm.pavlocs, &node->bvs.stage1.u.precm.avin, &node->bvs.stage1.absalters);
                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.avout)) {
                    changed = true;
                }
            }
        } while (changed);

        dataflowtime = (dataflowtime + getclock()) - lastdftime;
        node = graphtail;
        curlocpg = 0;
        curlocln = 0;
        while (node != NULL) {
            done = false;
            stat = node->stat_head;

            while (!done && stat != NULL) {
                if (stat->opc == Uisst || stat->opc == Ustr) {
                    if (!stat->outpar) {
                        phi_s8 = entryav(stat->expr->data.isvar_issvar.assigned_value);
                        find_replacements(stat->expr->data.isvar_issvar.assigned_value, &spB8, false, stat, node);

                        if (outofmem) {
                            return;
                        }

                        if (spB8 != NULL) {
                            if (spB8->type == isop) {
                                resetbit(&boolexp, spB8->bitpos);
                            }

                            hash = isopihash(stat->opc, stat->expr->ichain, spB8);
                            temp_s7 = stat->u.store.ichain;
                            spB0 = searchstore(hash, stat->opc, stat->expr->ichain, spB8, 0, 0);
                            if (outofmem) {
                                return;
                            }
                            setbit(&node->bvs.stage1.u.precm.expoccur, spB0->bitpos);
                            spB0->isop.stat = stat;
                            stat->u.store.ichain = spB0;
                            stat->is_increment = false;

                            if (stat->u.store.lval_ant && stat->u.store.store_ant && entryant(stat->expr->data.isvar_issvar.assigned_value)) {
                                resetbit(&node->bvs.stage1.antlocs, temp_s7->bitpos);
                                setbit(&node->bvs.stage1.antlocs, spB0->bitpos);
                            }
                            if (stat->u.store.store_av && phi_s8) {
                                resetbit(&node->bvs.stage1.u.precm.pavlocs, temp_s7->bitpos);
                            }
                            checkexpoccur(temp_s7, node);

                            phi_s1 = entryav(stat->expr->data.isvar_issvar.assigned_value) && stat->u.store.store_av;
                            if (phi_s1) {
                                setbit(&node->bvs.stage1.u.precm.pavlocs, spB0->bitpos);
                            }

                            if (spB0->bitpos >= oldbitposcount) {
                                if (!phi_s1 ||
                                        !stat->u.store.store_av ||
                                        !stat->u.store.store_ant) {
                                    setbit(&node->bvs.stage1.absalters, spB0->bitpos);
                                }

                                if (!phi_s1 ||
                                        !stat->u.store.store_av ||
                                        !stat->u.store.lval_av ||
                                        !stat->u.store.store_ant ||
                                        !stat->u.store.lval_ant) {
                                    setbit(&node->bvs.stage1.alters, spB0->bitpos);
                                }
                            }
                        }
                    }
                } else if (stat->opc == Utpeq ||
                           stat->opc == Utpne ||
                           stat->opc == Utpge ||
                           stat->opc == Utpgt ||
                           stat->opc == Utple ||
                           stat->opc == Utplt ||
                           stat->opc == Uistr ||
                           stat->opc == Uistv ||
                           stat->opc == Uirst ||
                           stat->opc == Uirsv ||
                           stat->opc == Umov ||
                           stat->opc == Umovv) {
                    phi_s8 = entryav(stat->expr) && entryav(stat->u.store.expr);
                    find_replacements(stat->expr, &spBC, false, stat, node);
                    find_replacements(stat->u.store.expr, &spB8, false, stat, node);

                    if (outofmem) {
                        return;
                    }

                    if (spBC != NULL || spB8 != NULL) {
                        if (spBC != NULL && spBC->type == isop) {
                            resetbit(&boolexp, spBC->bitpos);
                        }

                        if (spB8 != NULL && spB8->type == isop) {
                            resetbit(&boolexp, spB8->bitpos);
                        }

                        temp_s7 = stat->u.store.ichain;
                        if (stat->expr->type == islda && (stat->opc == Uistr || stat->opc == Uistv)) {
                            istrfold(stat);
                            if (outofmem) {
                                return;
                            }
                        }

                        if (stat->expr->type == isconst &&
                                (stat->opc == Utpeq ||
                                 stat->opc == Utpge ||
                                 stat->opc == Utpgt ||
                                 stat->opc == Utple ||
                                 stat->opc == Utplt ||
                                 stat->opc == Utpne) &&
                                stat->u.trap.expr2->type == isconst &&
                                (stat->u.trap.dtype == Qdt ||
                                 stat->u.trap.dtype == Rdt ||
                                 stat->u.trap.dtype == Sdt)) {
                            switch (stat->opc) {
                                case Utpeq:
                                    sp93 = stat->u.trap.expr2->data.isconst.number.intval == stat->expr->data.isconst.number.intval;
                                    break;

                                case Utpne:
                                    sp93 = stat->u.trap.expr2->data.isconst.number.intval != stat->expr->data.isconst.number.intval;
                                    break;

                                case Utplt:
                                    if (stat->u.trap.dtype == Jdt) {
                                        sp93 = stat->expr->data.isconst.number.intval < stat->u.trap.expr2->data.isconst.number.intval;
                                    } else {
                                        sp93 = stat->expr->data.isconst.number.uintval < stat->u.trap.expr2->data.isconst.number.uintval;
                                    }
                                    break;

                                case Utple:
                                    if (stat->u.trap.dtype == Jdt) {
                                        sp93 = stat->expr->data.isconst.number.intval <= stat->u.trap.expr2->data.isconst.number.intval;
                                    } else {
                                        sp93 = stat->expr->data.isconst.number.uintval <= stat->u.trap.expr2->data.isconst.number.uintval;
                                    }
                                    break;

                                case Utpgt:
                                    if (stat->u.trap.dtype == Jdt) {
                                        sp93 = stat->expr->data.isconst.number.intval > stat->u.trap.expr2->data.isconst.number.intval;
                                    } else {
                                        sp93 = stat->expr->data.isconst.number.uintval > stat->u.trap.expr2->data.isconst.number.uintval;
                                    }
                                    break;

                                case Utpge:
                                    if (stat->u.trap.dtype == Jdt) {
                                        sp93 = stat->expr->data.isconst.number.intval >= stat->u.trap.expr2->data.isconst.number.intval;
                                    } else {
                                        sp93 = stat->expr->data.isconst.number.uintval >= stat->u.trap.expr2->data.isconst.number.uintval;
                                    }
                                    break;

                                default:
                                    caseerror(1, 1644, "uoptcopy.p", 10);
                                    break;
                            }

                            if (sp93) {
                                stat->opc = Uchkt;
                                stat->expr->data.isconst.number.intval = 0;
                                spB0 = searchstore(isopihash(Uchkt, isearchloop(isconstihash(false), stat->expr, NULL, NULL), NULL), Uchkt, stat->expr->ichain, NULL, 0, 0);
                                setbit(&node->bvs.stage1.u.precm.expoccur, spB0->bitpos);
                                spB0->isop.stat = stat;
                                stat->u.store.ichain = spB0;
                                setbit(&node->bvs.stage1.antlocs, spB0->bitpos);
                                setbit(&node->bvs.stage1.avlocs, spB0->bitpos);
                            } else {
                                stat->opc = Unop;
                                stat->u.store.ichain = NULL;
                            }

                            resetbit(&node->bvs.stage1.antlocs, temp_s7->bitpos);
                            resetbit(&node->bvs.stage1.avlocs, temp_s7->bitpos);
                            checkexpoccur(temp_s7, node);
                        } else if (stat->opc == Ustr) { // BUG: did they mean istr?
                            temp_s4_3 = isearchloop(isvarihash(stat->expr->data.isvar_issvar.location), stat->expr, NULL, NULL);
                            if (outofmem) {
                                return;
                            }

                            setbit(&node->bvs.stage1.u.precm.expoccur, temp_s4_3->bitpos);
                            setbit(&node->bvs.stage1.u.precm.expoccur, temp_s4_3->isvar_issvar.assignbit);
                            setbit(&node->bvs.stage1.alters, temp_s4_3->bitpos);

                            if (!stat->u.store.lval_av || !stat->u.store.lval_ant) {
                                setbit(&node->bvs.stage1.alters, temp_s4_3->isvar_issvar.assignbit);
                            }

                            if (!temp_s4_3->isvar_issvar.veqv && stat->u.store.lval_ant) {
                                setbit(&node->bvs.stage1.antlocs, temp_s4_3->isvar_issvar.assignbit);
                            }

                            if (spB8 == NULL) {
                                spB8 = stat->u.store.expr->ichain;
                            }

                            spB0 = searchstore(isopihash(stat->opc, stat->expr->ichain, spB8), stat->opc, stat->expr->ichain, spB8, 0, 0);
                            if (outofmem) {
                                return;
                            }

                            setbit(&node->bvs.stage1.u.precm.expoccur, spB0->bitpos);
                            spB0->isop.stat = stat;
                            stat->u.store.ichain = spB0;
                            stat->is_increment = false;
                            if (stat->u.store.lval_ant && stat->u.store.store_ant && entryant(stat->expr->data.isvar_issvar.assigned_value)) {
                                resetbit(&node->bvs.stage1.antlocs, temp_s7->bitpos);
                                setbit(&node->bvs.stage1.antlocs, spB0->bitpos);
                            }

                            if (stat->u.store.store_av && phi_s8) {
                                resetbit(&node->bvs.stage1.u.precm.pavlocs, temp_s7->bitpos);
                            }

                            checkexpoccur(temp_s7, node);
                            phi_s1 = entryav(stat->expr->data.isvar_issvar.assigned_value) && stat->u.store.store_av;

                            if (phi_s1) {
                                setbit(&node->bvs.stage1.u.precm.pavlocs, spB0->bitpos);
                            }

                            if (spB0->bitpos >= oldbitposcount) {
                                if (!phi_s1 ||
                                        !stat->u.store.store_av ||
                                        !stat->u.store.store_ant) {
                                    setbit(&node->bvs.stage1.absalters, spB0->bitpos);
                                }

                                if (!phi_s1 ||
                                        !stat->u.store.store_av ||
                                        !stat->u.store.lval_av ||
                                        !stat->u.store.store_ant ||
                                        !stat->u.store.lval_ant) {
                                    setbit(&node->bvs.stage1.alters, spB0->bitpos);
                                }
                            }
                        } else {
                            if (spBC != NULL && spB8 != NULL) {
                                if (spB8->type == isconst &&
                                        (stat->opc == Utpge ||
                                         stat->opc == Utpgt ||
                                         stat->opc == Utple ||
                                         stat->opc == Utplt)) {
                                    hash = isopihash(stat->opc, spBC, NULL);
                                } else {
                                    hash = isopihash(stat->opc, spBC, spB8);
                                }

                                if (stat->opc == Uistr ||
                                        stat->opc == Uistv ||
                                        stat->opc == Uirst ||
                                        stat->opc == Uirsv) {
                                    spB0 = searchstore(hash, stat->opc, spBC, spB8, stat->u.store.u.istr.offset, stat->u.store.size);
                                } else if (stat->opc == Utpeq ||
                                        stat->opc == Utpge ||
                                        stat->opc == Utpgt ||
                                        stat->opc == Utple ||
                                        stat->opc == Utplt ||
                                        stat->opc == Utpne) {
                                    spB0 = searchstore(hash, stat->opc, spBC, spB8, stat->u.trap.num, 0);
                                } else {
                                    spB0 = searchstore(hash, stat->opc, spBC, spB8, 0, 0);
                                }
                            } else if (spBC == NULL) {
                                if (spB8->type == isconst &&
                                        (stat->opc == Utpge ||
                                         stat->opc == Utpgt ||
                                         stat->opc == Utple ||
                                         stat->opc == Utplt)) {
                                    hash = isopihash(stat->opc, stat->expr->ichain, NULL);
                                } else {
                                    hash = isopihash(stat->opc, stat->expr->ichain, spB8);
                                }

                                if (stat->opc == Uistr ||
                                        stat->opc == Uistv ||
                                        stat->opc == Uirst ||
                                        stat->opc == Uirsv) {
                                    spB0 = searchstore(hash, stat->opc, stat->expr->ichain, spB8, stat->u.store.u.istr.offset, stat->u.store.size);
                                } else if (stat->opc == Utpeq ||
                                        stat->opc == Utpge ||
                                        stat->opc == Utpgt ||
                                        stat->opc == Utple ||
                                        stat->opc == Utplt ||
                                        stat->opc == Utpne) {
                                    spB0 = searchstore(hash, stat->opc, stat->expr->ichain, spB8, stat->u.trap.num, 0);
                                } else {
                                    spB0 = searchstore(hash, stat->opc, stat->expr->ichain, spB8, 0, 0);
                                }
                            } else {
                                if (stat->u.store.expr->type == isconst &&
                                        (stat->opc == Utpge ||
                                         stat->opc == Utpgt ||
                                         stat->opc == Utple ||
                                         stat->opc == Utplt)) {
                                    hash = isopihash(stat->opc, spBC, NULL);
                                } else {
                                    hash = isopihash(stat->opc, spBC, stat->u.store.expr->ichain);
                                }

                                if (stat->opc == Uistr ||
                                        stat->opc == Uistv ||
                                        stat->opc == Uirst ||
                                        stat->opc == Uirsv) {
                                    spB0 = searchstore(hash, stat->opc, spBC, stat->u.store.expr->ichain, stat->u.store.u.istr.offset, stat->u.store.size);
                                } else if (stat->opc == Utpeq ||
                                        stat->opc == Utpge ||
                                        stat->opc == Utpgt ||
                                        stat->opc == Utple ||
                                        stat->opc == Utplt ||
                                        stat->opc == Utpne) {
                                    spB0 = searchstore(hash, stat->opc, spBC, stat->u.trap.expr2->ichain, stat->u.trap.num, 0);
                                } else {
                                    spB0 = searchstore(hash, stat->opc, spBC, stat->u.trap.expr2->ichain, 0, 0);
                                }
                            }

                            if (outofmem) {
                                return;
                            }

                            setbit(&node->bvs.stage1.u.precm.expoccur, spB0->bitpos);
                            spB0->isop.stat = stat;
                            stat->u.store.ichain = spB0;
                            phi_s1 = entryant(stat->expr) && entryant(stat->u.store.expr);

                            checkexpoccur(temp_s7, node);
                            if (stat->opc == Uistr ||
                                    stat->opc == Uistv ||
                                    stat->opc == Umov ||
                                    stat->opc == Umovv ||
                                    stat->opc == Uirst ||
                                    stat->opc == Uirsv) {
                                spB0->isop.size = stat->u.store.size;
                                if (stat->opc == Uistr ||
                                        stat->opc == Uistv ||
                                        stat->opc == Uirst ||
                                        stat->opc == Uirsv) {
                                    spB0->dtype = stat->u.store.u.istr.dtype;
                                    spB0->isop.unk13 = stat->u.store.u.istr.align;
                                    spB0->isop.s.word = stat->u.store.u.istr.offset;
                                }
                                if (stat->opc == Umov || stat->opc == Umovv) {
                                    spB0->isop.unk24_u16 = stat->u.store.u.mov.src_align + (stat->u.store.u.mov.dst_align << 8);
                                }
                                if (stat->u.store.lval_ant && stat->u.store.store_ant && phi_s1) {
                                    resetbit(&node->bvs.stage1.antlocs, temp_s7->bitpos);
                                    setbit(&node->bvs.stage1.antlocs, spB0->bitpos);
                                }

                                if (stat->u.store.store_av && phi_s8) {
                                    resetbit(&node->bvs.stage1.u.precm.pavlocs, temp_s7->bitpos);
                                }

                                phi_s1 = entryav(stat->expr) && entryav(stat->u.store.expr) && stat->u.store.store_av;
                                if (phi_s1) {
                                    setbit(&node->bvs.stage1.u.precm.pavlocs, spB0->bitpos);
                                }

                                if (spB0->bitpos < oldbitposcount) {
                                    if (!phi_s1 ||
                                        !stat->u.store.store_av ||
                                        !stat->u.store.store_ant) {
                                        setbit(&node->bvs.stage1.absalters, spB0->bitpos);
                                    }

                                    if (!phi_s1 ||
                                        !stat->u.store.lval_av ||
                                        !stat->u.store.store_av ||
                                        !stat->u.store.lval_ant ||
                                        !stat->u.store.store_ant) {
                                        setbit(&node->bvs.stage1.alters, spB0->bitpos);
                                    }
                                }
                            } else {
                                spB0->dtype = stat->u.store.u.istr.dtype;
                                if (phi_s1) {
                                    resetbit(&node->bvs.stage1.antlocs, temp_s7->bitpos);
                                    setbit(&node->bvs.stage1.antlocs, spB0->bitpos);
                                }
                                if (phi_s8) {
                                    resetbit(&node->bvs.stage1.avlocs, temp_s7->bitpos);
                                }

                                phi_s1 = entryav(stat->expr) && entryav(stat->u.store.expr);

                                if (phi_s1) {
                                    setbit(&node->bvs.stage1.avlocs, spB0->bitpos);
                                }

                                if (spB0->bitpos >= oldbitposcount) {
                                    if (!phi_s1) {
                                        setbit(&node->bvs.stage1.alters, spB0->bitpos);
                                    }
                                }
                            }
                        }
                    }
                } else if (stat->opc != Uaent &&
                           stat->opc != Ubgnb &&
                           stat->opc != Uendb &&
                           stat->opc != Umst &&
                           stat->opc != Ucup &&
                           stat->opc != Uicuf &&
                           stat->opc != Ucia &&
                           stat->opc != Uret &&
                           stat->opc != Ulab &&
                           stat->opc != Uclab &&
                           stat->opc != Uctrl &&
                           stat->opc != Uclbd &&
                           stat->opc != Ucubd &&
                           stat->opc != Udef &&
                           stat->opc != Udup &&
                           stat->opc != Ulbdy &&
                           stat->opc != Ulbgn &&
                           stat->opc != Ulend &&
                           stat->opc != Ultrm &&
                           stat->opc != Uloc &&
                           stat->opc != Unop &&
                           stat->opc != Ustep &&
                           stat->opc != Uujp &&
                           stat->opc != Uxpar) {
                    find_replacements(stat->expr, &spB0, false, stat, node);
                    if (stat->opc == Uchkt && spB0 != NULL) {
                        if (spB0->type == isop) {
                            resetbit(&boolexp, spB0->bitpos);
                        }
                    }
                } else if (stat->opc == Uloc) {
                    curlocpg = stat->u.loc.page;
                    curlocln = stat->u.loc.line;
                }

                if (outofmem) {
                    return;
                }
                if (stat->next != NULL) {
                    done = stat->next->graphnode != stat->graphnode;
                }
                stat = stat->next;
            }

            node = node->prev;
        }
    }

    checkbvlist(&varbits);
    checkbvlist(&asgnbits);
    checkbvlist(&slasgnbits);
    checkbvlist(&storeop);
    checkbvlist(&trapop);
    checkbvlist(&trapconstop);
    aliasedlu = 0;
    aliasedoc = 0;

    node = graphhead;
    while (node != NULL) {
        checkbvlist(&node->bvs.stage1.antlocs);
        checkbvlist(&node->bvs.stage1.avlocs);
        checkbvlist(&node->bvs.stage1.alters);
        checkbvlist(&node->bvs.stage1.u.precm.pavlocs);
        checkbvlist(&node->bvs.stage1.absalters);
        checkbvlist(&node->bvs.stage1.u.precm.expoccur);
        checkbvlist(&node->indiracc);
        
        if (node->stat_tail->opc == Ucup &&
                node->successors != NULL  &&
                curproc->has_trap &&
                (lang == LANG_PL1 ||
                 (lang == LANG_PASCAL && (node->stat_tail->u.call.proc->has_longjmp || func_004173EC(node->stat_tail->u.call.parameters))))) {
            bvectcopy(&node->indiracc, &varbits);
            bvectunion(&node->indiracc, &asgnbits);

            for (i = 0; i < 3; i++) {
                if (r2bitpos[i] != -1) {
                    resetbit(&node->indiracc, r2bitpos[i]);
                    resetbit(&node->indiracc, r2bitpos[i] + 1);
                }
            }
        } else if (node->varlisthead != NULL) {
            for (i = 0; i < bitposcount; i++) {
                if (bvectin(i, &varbits)) {
                    if (!bittab[i].ichain->isvar_issvar.vreg && !bittab[i].ichain->isvar_issvar.veqv && indirectaccessed(bittab[i].ichain->isvar_issvar.location, bittab[i].ichain->isvar_issvar.size, node->varlisthead)) {
                        setbit(&node->indiracc, i);
                        setbit(&node->indiracc, i + 1);
                        aliasedlu++;
                        if (dowhyuncolor) {
                            aliasedoc += func_00417480(bittab[i].ichain, node);
                        }
                    }
                }
            }
            
        }

        for (i = oldbitposcount; i < bitposcount; i++) {
            if (bvectin(i, &asgnbits)) {
                if (!bvectin(i, &node->bvs.stage1.alters) && !bvectin(i, &node->bvs.stage1.u.precm.expoccur)) {
                    gsptr->expr = bittab[i].ichain->expr;
                    if (strlkilled(gsptr, node->varlisthead)) {
                        setbit(&node->bvs.stage1.alters, i);
                    }
                }
            } else if (!bvectin(i, &node->bvs.stage1.u.precm.expoccur)) {
                if (!bvectin(i, &storeop)) {
                    if ((bittab[i].ichain->type == isvar || bittab[i].ichain->type == issvar) && bittab[i].ichain->isvar_issvar.veqv) {
                        phi_s3 = true;
                    } else {
                        phi_s3 = expaltered(bittab[i].ichain, node);
                    }

                    if (phi_s3) {
                        setbit(&node->bvs.stage1.alters, bittab[i].ichain->bitpos);
                    }
                } else {
                    if (expinalter(bittab[i].ichain->isop.op2, node)) {
                        phi_s2 = true;
                        phi_s1 = true;
                    } else if (bittab[i].ichain->isop.opc == Uisst || bittab[i].ichain->isop.opc == Ustr) {
                        if (bittab[i].ichain->isop.op1->isvar_issvar.veqv) {
                            phi_s2 = true;
                            phi_s1 = true;
                        } else {
                            phi_s2 = bvectin(bittab[i].ichain->isop.op1->isvar_issvar.assignbit, &node->bvs.stage1.alters);
                            phi_s1 = bvectin(bittab[i].ichain->isop.op1->bitpos, &node->bvs.stage1.alters);
                        }
                    } else if (expinalter(bittab[i].ichain->isop.op1, node)) {
                        phi_s2 = true;
                        phi_s1 = true;
                    } else {
                        phi_s2 = strlkilled(bittab[i].ichain->isop.stat, node->varlisthead);
                        phi_s1 = strskilled(bittab[i].ichain->isop.stat, node->varlisthead);
                    }

                    if (!phi_s1 && 
                            (node->stat_tail->opc == Ucia ||
                             node->stat_tail->opc == Ucup ||
                             node->stat_tail->opc == Uicuf)
                            && (bittab[i].ichain->isop.opc != Uisst &&
                                bittab[i].ichain->isop.opc != Ustr)) {
                        if (node->stat_tail->opc == Ucia) {
                            if (lang == LANG_ADA ||
                                    (IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags) && cskilled(curlevel, indirprocs, bittab[i].ichain->isop.stat)) ||
                                    listpskilled(node->stat_tail->u.cia.parameters, bittab[i].ichain->isop.stat, 0) ||
                                    ((bittab[i].ichain->isop.opc == Umov ||
                                      bittab[i].ichain->isop.opc == Umovv) &&
                                     cmkilled(curlevel, indirprocs, bittab[i].ichain->isop.stat))) {
                                phi_s2 = true;
                                phi_s1 = true;
                            }
                        } else if (cskilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, bittab[i].ichain->isop.stat) ||
                                listpskilled(node->stat_tail->u.call.parameters, bittab[i].ichain->isop.stat, 0) ||
                                ((bittab[i].ichain->isop.opc == Umov ||
                                  bittab[i].ichain->isop.opc == Umovv) &&
                                 cmkilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, bittab[i].ichain->isop.stat))) {
                            phi_s2 = true;
                            phi_s1 = true;
                        }

                    }

                    if (phi_s1) {
                        setbit(&node->bvs.stage1.absalters, i);
                    }

                    if (!phi_s1 || phi_s2) {
                        setbit(&node->bvs.stage1.alters, i);
                    }
                }
            }
        }
        
        node = node->next;
    }

    if (outofmem) {
        return;
    }

    if (listwritten) {
        aliases.num_blocks = 0;
        aliases.blocks = NULL;
        checkbvlist(&aliases);

        node = graphhead;
        while (node != NULL) {
            bvectunion(&aliases, &node->indiracc);
            node = node->next;
        }

        bvectintsect(&aliases, &varbits);
        aliasedlr = bvectcard(&aliases);
    }

    checkbvlist(&outmodebits);
    checkbvlist(&notinmodebits);
    checkbvlist(&mvarbits);
    for (i = 0; i < bitposcount; i++) {
        if (bittab[i].ichain->type == isvar || bittab[i].ichain->type == issvar) {
            if (lang == LANG_C) {
                if ((!has_exc_handler &&
                            curlevel == 1 &&
                            bittab[i].ichain->isvar_issvar.location.memtype != Rmt &&
                            lang != LANG_COBOL) || // what <_<
                        curblk == bittab[i].ichain->isvar_issvar.location.blockno) {
                    setbit(&mvarbits, i);
                }
            } else if (lang != LANG_ADA) {
                if ((curlevel == 1 &&
                            bittab[i].ichain->isvar_issvar.location.memtype != Rmt &&
                            lang != LANG_COBOL &&
                            aentptr == NULL) || 
                        curblk == bittab[i].ichain->isvar_issvar.location.blockno) {
                    setbit(&mvarbits, i);
                }
                if (lang == LANG_FORTRAN) {
                    if (bittab[i].ichain->isvar_issvar.location.memtype == Smt &&
                            in_fsym(bittab[i].ichain->isvar_issvar.location.blockno) &&
                            aentptr == NULL) {
                        checkbvlist(&fsymbits);
                        setbit(&fsymbits, i);
                        setbit(&mvarbits, i);
                    }
                }
            } else if (curblk == bittab[i].ichain->isvar_issvar.location.blockno) { // LANG_ADA
                if (bittab[i].ichain->isvar_issvar.location.memtype == Pmt) {
                    p = bittab[i].ichain->isvar_issvar.location.addr / 4;
                    while (pdeftab[p].opc == Unop) {
                        p++;
                    }

                    if (!pdeftab[p].outmode) {
                        if (!IS_PRESERVE_STACK_ATTR(entflag) && !has_exc_handler) {
                            setbit(&mvarbits, i);
                        }
                    } else {
                        setbit(&outmodebits, i);
                        if (!pdeftab[p].inmode) {
                            setbit(&notinmodebits, i);
                        }
                    }
                } else if (!IS_PRESERVE_STACK_ATTR(entflag) && !has_exc_handler) {
                    setbit(&mvarbits, i);
                }
            }
        }
    }
    

    time1 = getclock();
    if (listwritten) {
        write_string(list.c_file, " * * ", 5, 5);
        write_integer(list.c_file, (time1 - lasttime) / 1000, 4, 10);
        write_char(list.c_file, '.', 1);
        write_integer(list.c_file, (time1 - lasttime) % 1000, 3, 10);
        write_string(list.c_file, " SECONDS IN COPY PROPAGATION OF ", 32, 32);
        write_string(list.c_file, entnam0, 1024, entnam0len);
        writeln(list.c_file);
    }
    lasttime = time1;

    checkbvlist(&old);
    checkbvlist(&vareqv);
    checkbvlist(&asgneqv);
    lastdftime = getclock();
    numdataflow++;

    node = graphhead;
    while (node != NULL) {
        node->bvs.stage1.u.precm.antin.num_blocks = 0;
        node->bvs.stage1.u.precm.antin.blocks = NULL;
        checkbvlist(&node->bvs.stage1.u.precm.antin);
        bvectcopy(&node->bvs.stage1.u.precm.antin, &asgnbits);
        bvectminus(&node->bvs.stage1.u.precm.antin, &asgneqv);

        node->bvs.stage1.u.precm.antout.num_blocks = 0;
        node->bvs.stage1.u.precm.antout.blocks = NULL;
        checkbvlist(&node->bvs.stage1.u.precm.antout);
        if (node->successors == NULL) {
            bvectcopy(&node->bvs.stage1.u.precm.antout, &mvarbits);
            bvectminus(&node->bvs.stage1.u.precm.antout, &varbits);
            bvectminus(&node->bvs.stage1.u.precm.antout, &asgneqv);
        } else if (!node->terminal) {
            if (has_exc_handler &&
                    (node->stat_tail->opc == Ucia ||
                     node->stat_tail->opc == Ucup ||
                     node->stat_tail->opc == Uicuf)) {
                initbv(&node->bvs.stage1.u.precm.antout, (struct BitVectorBlock) {0});
            } else if (node->successors->next == NULL) {
                bvectcopy(&node->bvs.stage1.u.precm.antout, &asgnbits);
                bvectminus(&node->bvs.stage1.u.precm.antout, &asgneqv);
            } else {
                bvectcopy(&node->bvs.stage1.u.precm.antout, &mvarbits);
                bvectminus(&node->bvs.stage1.u.precm.antout, &varbits);
                bvectminus(&node->bvs.stage1.u.precm.antout, &asgneqv);
            }
        } else {
            bvectcopy(&node->bvs.stage1.u.precm.antout, &asgnbits);
            bvectminus(&node->bvs.stage1.u.precm.antout, &asgneqv);
        }

        node = node->next;
    }

    if (outofmem) {
        return;
    }

    // redundant store elimination
    if (dordstore) {
        changed = true;
        while (changed) {
            changed = false;
            dataflowiter++;
            node = graphtail;
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
                } else if (fsymbits.num_blocks != 0) {
                    if (!changed) {
                        bvectcopy(&old, &node->bvs.stage1.u.precm.antout);
                    }

                    // ANTOUT = ANTIN or ~FSYM
                    minusminus(&node->bvs.stage1.u.precm.antout, &fsymbits, &graphhead->bvs.stage1.u.precm.antin);
                    if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.antout)) {
                        changed = true;
                    }
                }

                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.precm.antin);
                }

                // ANTIN = ANTLOC | (ANTOUT & ~ALTERED)
                bvectglop(&node->bvs.stage1.u.precm.antin, &node->bvs.stage1.antlocs, &node->bvs.stage1.u.precm.antout, &node->bvs.stage1.alters);
                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.precm.antin)) {
                    changed = true;
                }

                node = node->prev;
            }
        }
        dataflowtime = (dataflowtime + getclock()) - lastdftime;

        node = graphhead;
        while (node != NULL) {
            done = false;
            stat = node->stat_head;
            while (!done && stat != NULL) {
                if ((stat->opc == Uisst || stat->opc == Ustr) && !stat->outpar && stat->u.store.lval_av && stat->u.store.store_av && bvectin(stat->expr->ichain->isvar_issvar.assignbit, &node->bvs.stage1.u.precm.antout)) {
                    stat->u.store.var_access_list_item->type = 0;
                    resetbit(&node->bvs.stage1.antlocs, stat->expr->ichain->isvar_issvar.assignbit);
                    if (stat->u.store.ichain != NULL) {
                        resetbit(&node->bvs.stage1.u.precm.pavlocs, stat->u.store.ichain->bitpos);
                        resetbit(&node->bvs.stage1.avlocs, stat->u.store.ichain->bitpos);
                        if (!bvectin(stat->u.store.ichain->bitpos, &node->bvs.stage1.alters)) {
                            resetbit(&node->bvs.stage1.antlocs, stat->u.store.ichain->bitpos);
                        }
                    }

                    if (stat->u.store.ichain != NULL && !has_volt_ovfw(stat->expr->data.isvar_issvar.assigned_value)) {
                        if (stat->opc == Uisst) {
                            exprdelete(stat->u.store.expr, node);
                        }

                        if (stat->u.store.ichain != NULL) {
                            exprdelete(stat->expr->data.isvar_issvar.assigned_value, node);
                        }

                        stat->opc = Unop;
                        checkstatoccur(stat->u.store.ichain, node);
                    } else {
                        stat->opc = Upop;
                        stat->u.pop.dtype = stat->expr->datatype;
                        if (stat->u.store.ichain == NULL) {
                            stat->expr = NULL;
                        } else {
                            stat->expr = stat->expr->data.isvar_issvar.assigned_value;
                        }
                        stat->u.pop.unk15 = 0;
                    }
                    numrdstr++;
                }

                if (stat->next != NULL) {
                    done = stat->next->graphnode != stat->graphnode;
                }

                stat = stat->next;
            }

            node = node->next;
        }
    }
}
