#include <stdlib.h>
#include <string.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "ucode.h"
#include "uoptions.h"
#include "uoptutil.h"
#include "uoptdata.h"
#include "uoptdbg.h"
#include "uoptkill.h"
#include "uoptind.h"

/*
00476ECC func_00476ECC
00477E20 func_00477E20
*/
static struct IChain *induction_base;

// mainly so that I can use the macros
struct SharedBcode {
    union Bcode u;
};

/*
00476ECC func_00476ECC
*/
static bool func_00476E40(struct IChain *var_ichain) {
    struct Expression *var;
    for (var = table[isvarhash(var_ichain->isvar_issvar.location)]; var != NULL; var = var->next) {
        if (var->ichain == var_ichain && var->data.isvar_issvar.assignment != NULL) {
            return false;
        }
    }
    return true;
}

/*
00476ECC func_00476ECC
00477E20 func_00477E20
*/
static int func_00476ECC(struct IChain *op1, struct IChain *mult, bool op2_not_const) {
    int sp28;
    int sp24;
    int sp20;

    switch (mult->type) {
        case islda:
        case isconst:
        case isrconst:
            sp28 = 0;
            break;

        case isilda:
            sp28 = -1;
            break;

        case isvar:
        case issvar:
            if (mult == op1) {
                sp28 = 1;
            } else {
                sp28 = -1;
            }
            break;

        case isop:
            if (mult->isop.opc == Uadd || mult->isop.opc == Usub || mult->isop.opc == Uixa || mult->isop.opc == Umpy) {
                if (op2_not_const && mult->isop.opc == Uixa &&
                        mult->isop.op1->type == isvar && func_00476E40(mult->isop.op1)) {
                    induction_base = mult->isop.op1;
                    sp24 = 1;
                } else {
                    sp24 = func_00476ECC(op1, mult->isop.op1, op2_not_const);
                }

                if (sp24 == -1) {
                    sp28 = -1;
                } else {
                    sp20 = func_00476ECC(op1, mult->isop.op2, op2_not_const);
                    if (sp20 == -1) {
                        sp28 = -1;
                    } else {
                        if (sp24 + sp20 < 2) {
                            sp28 = sp24 + sp20;
                        } else if (mult->isop.opc == Umpy) {
                            sp28 = -1;
                        } else {
                            sp28 = 1;
                        }
                    }
                }
            } else if (mult->isop.opc == Uinc ||
                    mult->isop.opc == Udec ||
                    mult->isop.opc == Uneg) {
                sp28 = func_00476ECC(op1, mult->isop.op1, op2_not_const);
            } else {
                sp28 = -1;
            }
            break;

        default:
            caseerror(1, 81, "uopttrep.p", 10);
            break;
    }
    return sp28;
}

/*
00477118 func_00477118
00477E20 func_00477E20
*/
static int func_00477118(struct IChain *mult, struct IChain *op1, struct Expression *op2, bool *sp82, struct SharedBcode *sb, bool *overflow) {
    int sp40;
    int sp3C;
    int sp38;
    bool sp37;
    bool sp36;

    switch (mult->type) {
        case isilda:
            dbgerror(0x263);
            break;

        case islda:
            sp40 = mult->islda_isilda.offset;
            *sp82 = true;
            sb->OPC = Ulda;
            sb->MTYPE = mult->islda_isilda.address.memtype;
            sb->IONE = mult->islda_isilda.address.blockno;
            sb->LENGTH = mult->islda_isilda.size;
            sb->OFFSET2 = mult->islda_isilda.address.addr;
            break;

        case isconst:
            sp40 = mult->isconst.number.intval;
            *sp82 = false;
            break;

        case isvar:
        case issvar:
            if (mult == op1 && op2->type == isconst) {
                sp40 = op2->data.isconst.number.intval;
            } else {
                sp40 = 0;
            }
            *sp82 = false;
            break;

        case isop:
            sp3C = func_00477118(mult->isop.op1, op1, op2, &sp37, sb, overflow);
            if (*overflow == false) {
                if (mult->isop.opc == Uinc || mult->isop.opc == Udec || mult->isop.opc == Uneg) {
                    switch (mult->isop.opc) {
                        case Uneg:
                            if (sp3C != 0x80000000) {
                                sp40 = -sp3C;
                            } else {
                                *overflow = true;
                            }
                            break;

                        case Udec:
                            if (sp37) {
                                if (subovfw(mult->dtype, sp3C, mult->isop.size)) {
                                    *overflow = true;
                                } else {
                                    sp40 = sp3C - mult->isop.size;
                                }
                            } else {
                                if (subovfw(mult->dtype, sp3C, mult->isop.size)) {
                                    *overflow = true;
                                } else {
                                    sp40 = sp3C - mult->isop.size;
                                }
                            }
                            break;

                        case Uinc:
                            // ...there's no difference
                            if (sp37) {
                                if (addovfw(mult->dtype, sp3C, mult->isop.size)) {
                                    *overflow = true;
                                } else {
                                    sp40 = sp3C + mult->isop.size;
                                }
                            } else {
                                if (addovfw(mult->dtype, sp3C, mult->isop.size)) {
                                    *overflow = true;
                                } else {
                                    sp40 = sp3C + mult->isop.size;
                                }
                            }
                            break;

                        default:
                            caseerror(1, 165, "uopttrep.p", 10);
                            break;
                    }
                    *sp82 = sp37;
                } else {
                    sp38 = func_00477118(mult->isop.op2, op1, op2, &sp36, sb, overflow);
                    if (*overflow == 0) {
                        switch (mult->isop.opc) {
                            case Uadd:
                                if (sp37) {
                                    if (addovfw(mult->dtype, sp3C, sp38)) {
                                        *overflow = true;
                                    } else {
                                        sp40 = sp3C + sp38;
                                    }
                                } else if (sp36) {
                                    if (addovfw(mult->dtype, sp38, sp3C)) {
                                        *overflow = true;
                                    } else {
                                        sp40 = sp3C + sp38;
                                    }
                                } else {
                                    if (addovfw(mult->dtype, sp3C, sp38)) {
                                        *overflow = true;
                                    } else {
                                        sp40 = sp3C + sp38;
                                    }
                                }
                                break;

                            case Usub:
                                if (sp37 && sp36) {
                                    if (subovfw(mult->dtype, sp3C, sp38)) {
                                        *overflow = true;
                                    } else {
                                        sp40 = sp3C - sp38;
                                    }
                                    sp37 = false;
                                    sp36 = false;
                                } else if (sp37) {
                                    if (subovfw(mult->dtype, sp3C, sp38)) {
                                        *overflow = true;
                                    } else {
                                        sp40 = sp3C - sp38;
                                    }
                                } else if (sp36) {
                                    if (subovfw(mult->dtype, sp38, sp3C)) {
                                        *overflow = true;
                                    } else {
                                        sp40 = sp3C - sp38;
                                    }
                                } else {
                                    if (subovfw(mult->dtype, sp3C, sp38)) {
                                        *overflow = true;
                                    } else {
                                        sp40 = sp3C - sp38;
                                    }
                                }
                                break;

                            case Uixa:
                                if (mpyovfw(mult->dtype, sp38, mult->isop.size)) {
                                    *overflow = true;
                                } else {
                                    if (addovfw(Adt, sp3C, sp38 * mult->isop.size)) {
                                        *overflow = true;
                                    } else {
                                        sp40 = sp3C + (sp38 * mult->isop.size);
                                    }
                                }
                                break;

                            case Umpy:
                                if (mpyovfw(mult->dtype, sp3C, sp38)) {
                                    *overflow = true;
                                } else {
                                    sp40 = sp3C * sp38;
                                }
                                break;

                            default:
                                caseerror(1, 193, "uopttrep.p", 10);
                                break;
                        }
                    }
                    *sp82 = sp37 || sp37;
                }
            }
            break;
        default:
            caseerror(1, 133, "uopttrep.p", 10);
            break;
    }
    return sp40;
}

/*
00477854 func_00477854
00477B0C func_00477B0C
*/
static int func_00477854(struct IChain *operand) {
    int result;
    int leftValue;

    switch (operand->type) {
        case isconst:
            result = operand->isconst.number.intval;
            break;

        case isop:
            leftValue = func_00477854(operand->isop.op1);

            if (operand->isop.opc == Uinc || operand->isop.opc == Udec || operand->isop.opc == Uneg) {
                switch (operand->isop.opc) {
                    case Uneg:
                        result = -leftValue;
                        break;

                    case Udec:
                        result = leftValue - operand->isop.size;
                        break;

                    case Uinc:
                        result = leftValue + operand->isop.size;
                        break;

                    default:
                        caseerror(1, 252, "uopttrep.p", 10);
                        break;
                }
            } else {
                switch (operand->isop.opc) {
                    case Uadd:
                        result = leftValue + func_00477854(operand->isop.op2);
                        break;

                    case Usub:
                        result = leftValue - func_00477854(operand->isop.op2);
                        break;

                    case Uixa:
                        result = leftValue + func_00477854(operand->isop.op2) * operand->isop.size;
                        break;

                    case Umpy:
                        result = leftValue * func_00477854(operand->isop.op2);
                        break;

                    default:
                        caseerror(1, 257, "uopttrep.p", 10);
                        break;

                }
            }
            break;

        default:
            dbgerror(0x2F1E);
            break;
    }
    return result;
}

/*
00477B0C func_00477B0C
00477E20 func_00477E20
*/
static int func_00477B0C(struct IChain *mult, struct IChain *op1) {
    int sp28;
    int sp24; // v0
    int sp20; // v0_2

    switch (mult->type) {
        case isilda:
            dbgerror(0x263);
            break;

        case islda:
        case isconst:
            sp28 = 0;
            break;

        case isvar:
        case issvar:
            if (mult == op1) {
                sp28 = 1;
            } else {
                sp28 = 0;
            }
            break;

        case isop:
            sp24 = func_00477B0C(mult->isop.op1, op1);
            if (mult->isop.opc == Uinc || mult->isop.opc == Udec || mult->isop.opc == Uneg) {
                switch (mult->isop.opc) {
                    case Uneq:
                        sp28 = -sp24;
                        break;

                    case Udec:
                    case Uinc:
                        sp28 = sp24;
                        break;

                    default:
                        caseerror(1, 290, "uopttrep.p", 10);
                        break;
                }
            } else {
                sp20 = func_00477B0C(mult->isop.op2, op1);
                switch (mult->isop.opc) {
                    case Uadd:
                        sp28 = sp24 + sp20;
                        break;

                    case Usub:
                        sp28 = sp24 - sp20;
                        break;

                    case Uixa:
                        sp28 = sp24 + (sp20 * mult->isop.size);
                        break;

                    case Umpy:
                        if (sp24 != 0 && sp20 != 0) {
                            dbgerror(0x4B8);
                        } else if (sp24 == 0 && sp20 == 0) {
                            sp28 = 0;
                        } else if (sp24 == 0) {
                            sp28 = sp20 * func_00477854(mult->isop.op1);
                        } else {
                            sp28 = sp24 * func_00477854(mult->isop.op2);
                        }
                        break;

                    default:
                        break;
                }
            }
            break;

        default:
            caseerror(1, 280, "uopttrep.p", 10);
            break;
    }
    return sp28;
}

/*
0047847C func_0047847C
*/
static void func_00477E20(struct Expression *op1, struct Expression *op2, struct Graphnode *node, struct TrepImageThing **trep, struct IChain *ichain1, struct Expression *expr_shared, struct SharedBcode *sb, bool *overflow) {
    int i; // sp90
    bool sp83;
    bool sp82;
    bool sp7B;
    struct IChain *sp74;
    int sp70;
    int temp_s3;
    int temp_s7;
    struct IChain *indmult;
    int block; // s8/fp
    int bit; // s4


    if (ichain1 == NULL && op2->type != isconst) {
        return;
    }

    switch (op2->type) {
        case isvar:
        case issvar:
            if (ichain1->expr != NULL || !op2->initialVal || !bvectin(ichain1->bitpos, &node->bvs.stage1.u.cm.delete)) {
                return;
            }
            break;

        case isop:
            if (ichain1->expr != NULL || !op2->data.isop.anticipated || !bvectin(ichain1->bitpos, &node->bvs.stage1.u.cm.delete)) {
                return;
            }
            break;

        case isilda:
        default: // islda, isconst, isrconst
            break;
    }

    if (op1->data.isvar_issvar.copy != NULL && op1->data.isvar_issvar.copy != nocopy) {
        return;
    }

    if (op1->ichain->isvar_issvar.veqv || (op1->type == issvar && bvectin(op1->ichain->bitpos, &node->bvs.stage1.u.cm.delete))) {
        return;
    }


    sp83 = false;
    i = bitposcount - 1;
    block = i >> 7;
    while (!sp83 && i >= 0) {
        if (BVBLOCKEMPTY(indmults, block)) {
            i = (i - (i & 0x7f)) - 1;
        } else {

            bit = i & 0x7f;
            while (bit >= 0) {
                if (BVINBLOCK(bit, block, indmults)) {
                    indmult = bittab[i].ichain;
                    induction_base = NULL;
                    if (func_00476ECC(op1->ichain, indmult, op2->type != isconst) == 1 &&
                            ivfactor(indmult, op1->ichain, &sp7B, &sp74, &sp70) != 0 &&
                            BVINBLOCK(bit, block, node->bvs.stage1.u.cm.ppin) &&
                            !BVINBLOCK(bit, block, node->bvs.stage1.u.cm.subdelete) &&
                            !BVINBLOCK(bit, block, node->bvs.stage1.alters)) {
                        *overflow = false;
                        temp_s3 = func_00477118(indmult, op1->ichain, op2, &sp82, sb, overflow);
                        temp_s7 = func_00477B0C(indmult, op1->ichain);
                        if (*overflow == false) {
                            if (temp_s3 != 0 || (indmult->dtype != Ldt && indmult->dtype != Kdt) ||
                                    (expr_shared->data.isop.opc != Ugeq &&
                                     expr_shared->data.isop.opc != Ugrt &&
                                     expr_shared->data.isop.opc != Uleq &&
                                     expr_shared->data.isop.opc != Ules)) {
                                if (temp_s7 >= 0 || indmult->dtype == op1->datatype) {
                                    sp83 = true;
                                    (*trep)->ichain2 = indmult;
                                    setbit(&savedexp,  indmult->bitpos);
                                    (*trep)->unk28 = alloc_new(sizeof (struct IChain), &perm_heap);

                                    if (sp82) {
                                        (*trep)->u = sb->u;
                                        (*trep)->OFFSET = temp_s3;
                                        (*trep)->unk28->type = islda;
                                        (*trep)->unk28->dtype = Adt;
                                        (*trep)->unk28->islda_isilda.address.blockno = sb->IONE;
                                        (*trep)->unk28->islda_isilda.offset = temp_s3;
                                        (*trep)->unk28->islda_isilda.address.memtype = sb->MTYPE;
                                    } else {
                                        sb->OPC = Uldc;
                                        sb->DTYPE = op2->datatype;
                                        sb->LENGTH = 4;
                                        sb->CONSTVAL.swpart.Ival = temp_s3;

                                        (*trep)->u = sb->u;
                                        (*trep)->unk28->type = isconst;
                                        (*trep)->unk28->isconst.number.intval = temp_s3;
                                        (*trep)->unk28->isconst.size = 4;
                                        (*trep)->unk28->dtype = sb->DTYPE;
                                    }

                                    (*trep)->unk2C = temp_s7;
                                    if (op2->type != isconst) {
                                        ichain1->isop.opc = Ucg2;
                                        ichain1->expr = expr_shared;
                                        if (induction_base != 0) {
                                            ichain1->isop.op2 = induction_base;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                bit--;
                i--;
                if (sp83) {
                    break;
                }
            }
        }
        block--;
    }
}

/*
0047847C func_0047847C
00479DC4 eliminduct
*/
static void func_0047847C(struct Expression *expr, struct SharedBcode *sb) {
    bool sp43; // shared
    struct Expression *phi_t0;

    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case islda:
        case isilda:
        case isconst:
        case isrconst:
            break;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_0047847C(expr->data.isvar_issvar.copy, sb);
            }
            break;

        case isop:
            if (expr->visited == 3) {
                break;
            }

            expr->visited = 3;
            phi_t0 = expr;
            if (((!expr->data.isop.anticipated && !bvectin(expr->ichain->bitpos, &expr->graphnode->bvs.stage1.u.cm.cand)) ||
                        !bvectin(expr->ichain->bitpos, &expr->graphnode->bvs.stage1.u.cm.delete))) {
                func_0047847C(expr->data.isop.op1, sb);
                if (optab[expr->data.isop.opc].is_binary_op) {
                    func_0047847C(expr->data.isop.op2, sb);
                }

                if ((expr->data.isop.opc == Uequ || expr->data.isop.opc == Uneq ||
                            expr->data.isop.opc == Ugeq || expr->data.isop.opc == Ugrt ||
                            expr->data.isop.opc == Uleq || expr->data.isop.opc == Ules)) {
                    expr->data.isop.aux.unk38_trep->ichain2 = NULL;
                    expr->data.isop.aux2.unk3C_trep->ichain2 = NULL;

                    if (expr->datatype == Idt ||
                            expr->datatype == Jdt ||
                            expr->datatype == Kdt ||
                            expr->datatype == Ldt) {
                        if ((expr->ichain->isop.op1->type == isvar || expr->ichain->isop.op1->type == issvar) &&
                                (expr->datatype == expr->data.isop.op1->datatype ||
                                 expr->data.isop.opc == Uequ || expr->data.isop.opc == Uneq)) {
                            func_00477E20(phi_t0->data.isop.op1, phi_t0->data.isop.op2, phi_t0->graphnode, &phi_t0->data.isop.aux.unk38_trep, phi_t0->data.isop.aux2.unk3C_trep->ichain, expr, sb, &sp43);
                        }
                        if (phi_t0->data.isop.aux.unk38_trep->ichain2 == NULL &&
                                (phi_t0->ichain->isop.op2->type == isvar || phi_t0->ichain->isop.op2->type == issvar) &&
                                (phi_t0->datatype == phi_t0->data.isop.op2->datatype ||
                                 phi_t0->data.isop.opc == Uequ || phi_t0->data.isop.opc == Uneq)) {
                            func_00477E20(phi_t0->data.isop.op2, phi_t0->data.isop.op1, phi_t0->graphnode, &phi_t0->data.isop.aux2.unk3C_trep, phi_t0->data.isop.aux.unk38_trep->ichain, expr, sb, &sp43);
                        }
                    }
                }
            }
            break;

        default:
            caseerror(1, 449, "uopttrep.p", 10);
            break;
    }
}

/*
00478820 func_00478820
00479DC4 eliminduct
*/
static void func_004787B0(struct Expression *expr) {
    if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
        return;
    }

    if (expr->count == 1) {
        expr->count = 0;
        expr->var_access_list->type = 0;
    } else {
        decreasecount(expr);
    }
}

/*
00478820 func_00478820
00479DC4 eliminduct
*/
static void func_00478820(struct Expression *expr, struct Graphnode *node) {
    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            break;

        case isilda:
            if (expr->visited == 4) {
                break;
            }

            if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete)) {
                if (expr->data.islda_isilda.outer_stack->type == isvar || expr->data.islda_isilda.outer_stack->type == issvar) {
                    func_004787B0(expr->data.islda_isilda.outer_stack);
                }
            }

            func_00478820(expr->data.islda_isilda.outer_stack, node);
            expr->visited = 4;
            break;

        case isvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_00478820(expr->data.isvar_issvar.copy, node);
            }
            break;

        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_00478820(expr->data.isvar_issvar.copy, node);
            }

            if (expr->visited == 4) {
                break;
            }

            if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) &&
                    (expr->initialVal != 0 ||
                     bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                if (expr->data.isvar_issvar.outer_stack->type == isvar || expr->data.isvar_issvar.outer_stack->type == issvar) {
                    func_004787B0(expr->data.isvar_issvar.outer_stack);
                }
            }

            func_00478820(expr->data.isvar_issvar.outer_stack, node);
            expr->visited = 4;
            break;

        case isop:
            if (expr->visited == 4) {
                break;
            }
            if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) &&
                    (expr->data.isop.anticipated ||
                     bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                if (expr->data.isop.op1->type == isvar || expr->data.isop.op1->type == issvar) {
                    func_004787B0(expr->data.isop.op1);
                }

                if (optab[expr->data.isop.opc].is_binary_op) {
                    if (expr->data.isop.op2->type == isvar || expr->data.isop.op2->type == issvar) {
                        func_004787B0(expr->data.isop.op2);
                    }
                }
            }

            func_00478820(expr->data.isop.op1, node);
            if (optab[expr->data.isop.opc].is_binary_op != 0) {
                func_00478820(expr->data.isop.op2, node);
            }
            expr->visited = 4;
            break;

        default:
            dbgerror(0x19F);
            break;
    }
}

/*
00478C14 func_00478C14
00479DC4 eliminduct
*/
static void func_00478B8C(struct IChain *ichain, struct Graphnode *node) {
    setbit(&node->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
    setbit(&node->bvs.stage1.absalters, ichain->isvar_issvar.assignbit);
    resetbit(&node->bvs.stage1.u.cm.iv, ichain->isvar_issvar.assignbit);
}

/*
00479DC4 eliminduct
*/
static void func_00478C14(struct IChain *ichain, struct Graphnode *node) {
    if (ichain->type == isilda) {
        if (ichain->islda_isilda.outer_stack_ichain->type == isvar || ichain->islda_isilda.outer_stack_ichain->type == issvar) {
            func_00478B8C(ichain->islda_isilda.outer_stack_ichain, node);
            return;
        }
    } else if (ichain->type == issvar) {
        if (ichain->isvar_issvar.outer_stack_ichain->type == isvar || ichain->isvar_issvar.outer_stack_ichain->type == issvar) {
            func_00478B8C(ichain->isvar_issvar.outer_stack_ichain, node);
            return;
        }
    } else if (ichain->type == isop) {
        switch (ichain->isop.opc) {
            case Uisst:
            case Ustr:
                if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == issvar) {
                    func_00478B8C(ichain->isop.op2, node);
                }
                break;

            case Uistr:
            case Uistv:
            case Umov:
            case Umovv:
            case Uirst:
            case Uirsv:
            case Utpeq:
            case Utpne:
            case Utpge:
            case Utpgt:
            case Utple:
            case Utplt:
                if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                    func_00478B8C(ichain->isop.op1, node);
                }
                if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == issvar) {
                    func_00478B8C(ichain->isop.op2, node);
                }
                break;

            case Ucg1:
                break;

            default:
                if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                    func_00478B8C(ichain->isop.op1, node);
                }
                if (optab[ichain->isop.opc].is_binary_op) {
                    if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == issvar) {
                        func_00478B8C(ichain->isop.op2, node);
                    }
                }
                break;
        }
    }
}

/*
00479DC4 eliminduct
*/
static void func_00478ED4(struct Graphnode *node) {
    int i;

    for (i = 0; i < bitposcount; i++) {
        if (bvectin(i, &asgnbits) && !bittab[i].ichain->isvar_issvar.vreg) {
            setbit(&node->bvs.stage1.alters, i);
        }
    }
}

/*
00479DC4 eliminduct
*/
static void func_00478FA0(struct IChain *ichain, struct Graphnode *node) {
    struct Expression *expr; // s0
    struct IChain *var; // s1
    bool indir; // s2
    int i; // s3

    for (i = 0; i < bitposcount; i++) {
        if (!bvectin(i, &varbits)) {
            continue;
        }

        var = bittab[i].ichain;
        if (var->isvar_issvar.vreg == 0 && var->isvar_issvar.veqv == 0) {
            if (bvectin(i, &node->indiracc) == 0) {
                indir = false;
                if (ichain->isop.opc == Uilod || ichain->isop.opc == Uirld) {
                    expr = ichain->expr->data.isvar_issvar.assigned_value;
                    if (expr->type == dumped) {
                        fix_base(ichain->expr);
                        expr = ichain->expr->data.isvar_issvar.assigned_value;
                    }

                    if (expr->type == islda || expr->type == isilda) {
                        indir = overlapping(var->isvar_issvar.location, expr->data.islda_isilda.address, var->isvar_issvar.size, expr->data.islda_isilda.size);
                    } else if ((expr->type == isvar || expr->type == isop || expr->type == issvar || expr->type == dumped) &&
                            !pointtoheap(expr)) {

                        indir = aliaswithptr(&var->isvar_issvar.location);
                    }
                } else if (ichain->isop.opc == Uistr ||
                        ichain->isop.opc == Umov ||
                        ichain->isop.opc == Uirst ||
                        ichain->isop.opc == Uirsv) {
                    expr = ichain->isop.stat->u.store.baseaddr;
                    if (expr->type == dumped) {
                        fix_sbase(ichain->isop.stat);
                        expr = ichain->isop.stat->u.store.baseaddr;
                    }

                    if (expr->type == islda || expr->type == isilda) {
                        indir = overlapping(var->isvar_issvar.location, expr->data.islda_isilda.address, var->isvar_issvar.size, expr->data.islda_isilda.size);
                    } else if ((expr->type == isvar ||
                                expr->type == isop ||
                                expr->type == issvar ||
                                expr->type == dumped) &&
                            !pointtoheap(expr)) {
                        indir = aliaswithptr(&var->isvar_issvar.location);
                    }

                    if (!indir && ichain->isop.opc == Umov) {
                        expr = ichain->isop.stat->u.store.u.mov.baseaddr;
                        if (expr->type == islda || expr->type == isilda) {
                            indir = overlapping(var->isvar_issvar.location, expr->data.islda_isilda.address, var->isvar_issvar.size, expr->data.islda_isilda.size);
                        } else if ((expr->type == isvar ||
                                    expr->type == isop ||
                                    expr->type == issvar ||
                                    expr->type == dumped) &&
                                !pointtoheap(expr)) {
                            indir = aliaswithptr(&var->isvar_issvar.location);
                        }
                    }
                }

                if (indir) {
                    setbit(&node->indiracc, i);
                    setbit(&node->indiracc, i + 1);
                }
            }
        }
    }
}

/*
004793C4 func_004793C4
00479DC4 eliminduct
*/
static void func_004793C4(struct Expression *expr, struct Graphnode *node) {
    //! asm passed node through $a1 AND through shared stack,
    //  only using the shared node for the recursive calls in case isop

    switch (expr->type) {
        case isilda:
            if (expr->visited != 5) {
                expr->visited = 5;
                func_004793C4(expr->data.islda_isilda.outer_stack, node);
            }
            break;

        case islda:
        case isconst:
        case isrconst:
            break;

        case isvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_004793C4(expr->data.isvar_issvar.copy, node);
            } else {
                resetbit(&node->bvs.stage1.u.cm.iv,  expr->ichain->isvar_issvar.assignbit);
            }
            break;

        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_004793C4(expr->data.isvar_issvar.copy, node);
            } else if ((!expr->initialVal && !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand)) ||
                    !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete)) {
                resetbit(&node->bvs.stage1.u.cm.iv, expr->ichain->isvar_issvar.assignbit);
                func_004793C4(expr->data.isvar_issvar.outer_stack, node);
            }
            break;

        case isop:
            if (expr->visited == 5) {
                break;
            }
            expr->visited = 5;

            if ((!expr->data.isop.anticipated && !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand)) ||
                        !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete)) {
                if (expr->data.isop.opc == Uequ ||
                        expr->data.isop.opc == Ugeq ||
                        expr->data.isop.opc == Ugrt ||
                        expr->data.isop.opc == Uleq ||
                        expr->data.isop.opc == Ules ||
                        expr->data.isop.opc == Uneq) {
                    if (expr->data.isop.aux.unk38_trep->ichain2 == NULL) {
                        func_004793C4(expr->data.isop.op1, node);
                    }
                    if (expr->data.isop.aux2.unk3C_trep->ichain2 == NULL) {
                        func_004793C4(expr->data.isop.op2, node);
                    }
                } else {
                    func_004793C4(expr->data.isop.op1, node);
                    if (optab[expr->data.isop.opc].is_binary_op) {
                        func_004793C4(expr->data.isop.op2, node);
                    }
                }
            }
            break;

        default:
            caseerror(1, 701, "uopttrep.p", 10);
            break;
    }
}

/*
0047966C func_0047966C
00479DC4 eliminduct
*/
static void func_0047966C(struct IChain *ichain, struct Graphnode *node) {
    switch (ichain->type) {
        case isvar:
        case issvar:
            resetbit(&node->bvs.stage1.u.cm.iv, ichain->isvar_issvar.assignbit);
            break;

        case isop:
            func_0047966C(ichain->isop.op1, node);
            if (optab[ichain->isop.opc].is_binary_op) {
                func_0047966C(ichain->isop.op2, node);
            }
            break;

        case islda:
        case isconst:
        case isilda:
        case isrconst:
            break;

        default:
            caseerror(1, 747, "uopttrep.p", 10);
            break;
    }
}

/*
00479778 func_00479778
00479DC4 eliminduct
*/
static void func_00479778(struct Expression *expr, struct Graphnode *node) {
    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case islda:
        case isilda:
        case isconst:
        case isrconst:
            break;

        case isvar:
        case issvar:
            // why recurse if copy is always isvar or issvar?
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_00479778(expr->data.isvar_issvar.copy, node);
            }
            break;

        case isop:
            if (expr->visited == 6) {
                break;
            }

            expr->visited = 6;
            if ((!expr->data.isop.anticipated && !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand)) ||
                    !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete)) {
                func_00479778(expr->data.isop.op1, node);
                if (optab[expr->data.isop.opc].is_binary_op) {
                    func_00479778(expr->data.isop.op2, node);
                }

                if (expr->data.isop.opc == Uequ ||
                    expr->data.isop.opc == Uneq ||
                    expr->data.isop.opc == Ugeq ||
                    expr->data.isop.opc == Ugrt ||
                    expr->data.isop.opc == Uleq ||
                    expr->data.isop.opc == Ules) {

                    if (expr->data.isop.aux.unk38_trep->ichain2 != NULL) {
                        if (!bvectin(expr->data.isop.op1->ichain->isvar_issvar.assignbit, &expr->graphnode->bvs.stage1.u.cm.antout)) {
                            expr->data.isop.aux.unk38_trep->ichain2 = NULL;
                        } else {
                            numtstrep++;
                            if (expr->data.isop.op1->type == issvar) {
                                deccount(expr->data.isop.op1->data.isvar_issvar.outer_stack, expr->graphnode);
                            }
                            deccount(expr->data.isop.op1, expr->graphnode);

                            setbit(&expr->graphnode->bvs.stage1.u.cm.subinsert, expr->data.isop.aux.unk38_trep->ichain2->bitpos);
                            if (expr->data.isop.op2->type != isconst && expr->data.isop.op2->type != isrconst) {
                                resetbit(&node->bvs.stage1.u.cm.subdelete, expr->data.isop.aux2.unk3C_trep->ichain->bitpos);
                                setbit(&used_trepexp, expr->data.isop.aux2.unk3C_trep->ichain->bitpos);
                            }
                        }
                    }

                    if (expr->data.isop.aux2.unk3C_trep->ichain2 != NULL) {
                        if (!bvectin(expr->data.isop.op2->ichain->isvar_issvar.assignbit, &expr->graphnode->bvs.stage1.u.cm.antout)) {
                            expr->data.isop.aux2.unk3C_trep->ichain2 = NULL;
                        } else {
                            numtstrep++;
                            if (expr->data.isop.op2->type == issvar) {
                                deccount(expr->data.isop.op2->data.isvar_issvar.outer_stack, expr->graphnode);
                            }
                            deccount(expr->data.isop.op2, expr->graphnode);

                            setbit(&expr->graphnode->bvs.stage1.u.cm.subinsert, expr->data.isop.aux2.unk3C_trep->ichain2->bitpos);
                            if (expr->data.isop.op1->type != isconst && expr->data.isop.op1->type != isrconst) {
                                resetbit(&node->bvs.stage1.u.cm.subdelete, expr->data.isop.aux.unk38_trep->ichain->bitpos);
                                if (expr->data.isop.aux.unk38_trep->ichain->isop.op1->type != isvar) {
                                    setbit(&node->bvs.stage1.u.cm.subdelete, expr->data.isop.aux.unk38_trep->ichain->isop.op1->bitpos);
                                }
                                setbit(&used_trepexp, expr->data.isop.aux.unk38_trep->ichain->bitpos);
                            }
                        }
                    }
                }
            }
            break;

        default: // empty
            dbgerror(0x102D);
            return;
    }

}

/*
00479B80 func_00479B80
00479DC4 eliminduct
*/
static bool func_00479B80(struct Expression *expr) {
    bool result;

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            result = false;
            break;

        case isvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                return func_00479B80(expr->data.isvar_issvar.copy);
            }
            result = false;
            break;

        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                return func_00479B80(expr->data.isvar_issvar.copy);
            }

            if (expr->count > 1 || bvectin(expr->ichain->bitpos, &savedexp)) {
                result = true;
            } else {
                result = func_00479B80(expr->data.isvar_issvar.outer_stack);
            }
            break;

        case isilda:
            if (expr->count > 1 || bvectin(expr->ichain->bitpos, &savedexp)) {
                result = true;
            } else {
                result = func_00479B80(expr->data.islda_isilda.outer_stack);
            }
            break;

        case isop:
            if (expr->count > 1 || bvectin(expr->ichain->bitpos, &savedexp)) {
                result = true;
            } else if (func_00479B80(expr->data.isop.op1)) {
                result = true;
            } else if (optab[expr->data.isop.opc].is_binary_op) {
                result = func_00479B80(expr->data.isop.op2);
            } else {
                result = false;
            }
            break;

        default:
            caseerror(1, 829, "uopttrep.p", 10);
            result = false;
            break;
    }

    return result;
}

/*
00456A2C oneproc
*/
void eliminduct(void) {
    struct Graphnode *node; // s7, spAC
    struct SharedBcode sb; // sp70, no idea why this needs to be shared -_-
    struct GraphnodeList *succ;
    struct IChain *store_ichain;
    bool done; // s1
    int i; // s3
    int block; // s2
    unsigned int bit; // s0
    int changed; // s2
    struct Statement *stat;

    sb = (struct SharedBcode) {0};
    bvectunion(&indmults, &slvarbits);
    stat = graphhead->stat_head;
    do {
        if (stat->opc == Uisst || stat->opc == Ustr) {
            func_0047847C(stat->expr->data.isvar_issvar.assigned_value, &sb);
        } else if (stat->opc == Uistr || stat->opc == Uistv ||
                   stat->opc == Umov  || stat->opc == Umovv ||
                   stat->opc == Uirst || stat->opc == Uirsv) {
            func_0047847C(stat->expr, &sb);
            func_0047847C(stat->u.store.expr, &sb);
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
            func_0047847C(stat->expr, &sb);
        }
        stat = stat->next;
    } while (stat != NULL);

    bvectunion(&varbits, &slvarbits);
    bvectunion(&asgnbits, &slasgnbits);
    node = graphhead;
    while (node != 0) {
        stat = node->stat_head;
        done = false;
        while (stat != NULL && !done) {
            if (stat->opc == Uisst || stat->opc == Ustr) {
                if (stat->opc == Uisst) {
                    func_00478820(stat->expr->data.isvar_issvar.outer_stack, node);
                }
                if (stat->u.store.ichain != NULL &&
                        bvectin(stat->u.store.ichain->bitpos, &node->bvs.stage1.u.cm.delete) &&
                        stat->u.store.store_ant) {

                    stat->u.store.var_access_list_item->type = 0;
                    if (!stat->u.store.ichain->isop.op1->isvar_issvar.veqv) {
                        resetbit(&node->bvs.stage1.antlocs, stat->u.store.ichain->isop.op1->isvar_issvar.assignbit);
                    }

                    if (stat->opc == Uisst) {
                        if (stat->expr->data.isop.op1->type == isvar || stat->expr->data.isop.op1->type == issvar) {
                            func_004787B0(stat->expr->data.isop.op1);
                        }
                    }

                    stat->opc = Unop;
                    if (stat->expr->data.isvar_issvar.assigned_value->type == isvar ||
                            stat->expr->data.isvar_issvar.assigned_value->type == issvar) {
                        func_004787B0(stat->expr->data.isvar_issvar.assigned_value);
                    }
                }
                func_00478820(stat->expr->data.isvar_issvar.assigned_value, node);
            } else if (stat->opc == Uchkt ||
                    stat->opc == Uistr ||
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
                if (stat->u.store.ichain != NULL &&
                        bvectin(stat->u.store.ichain->bitpos, &node->bvs.stage1.u.cm.delete) &&
                        (stat->u.store.store_ant
                         || (stat->opc == Uchkt ||
                             stat->opc == Utpeq ||
                             stat->opc == Utpge ||
                             stat->opc == Utpgt ||
                             stat->opc == Utple ||
                             stat->opc == Utplt ||
                             stat->opc == Utpne))) {
                    if (stat->u.store.var_access_list_item != NULL) {
                        stat->u.store.var_access_list_item->type = 0;
                    }

                    if (stat->expr->type == isvar || stat->expr->type == issvar) {
                        func_004787B0(stat->expr);
                    }

                    if (stat->opc != Uchkt) {
                        if (stat->u.store.expr->type == isvar || stat->u.store.expr->type == issvar) {
                            func_004787B0(stat->u.store.expr);
                        }
                    }

                    if (stat->opc != Uchkt) {
                        func_00478820(stat->u.store.expr, node);
                    }
                    stat->opc = Unop;
                } else if (stat->opc != Uchkt) {
                    func_00478820(stat->u.store.expr, node);
                }

                func_00478820(stat->expr, node);
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
                func_00478820(stat->expr, node);
            }

            if (stat->next != NULL) {
                done = stat->next->graphnode != stat->graphnode;
            }
            stat = stat->next;
        }

        for (i = 0; i < bitposcount; i++) {
            if (bvectin(i, &varbits)) {
                if (bvectin(i, &node->bvs.stage1.u.cm.iv) || !bvectin(i, &node->bvs.stage1.alters)) {
                    setbit(&node->bvs.stage1.u.cm.iv, i + 1);
                }

                if (bvectin(i, &node->bvs.stage1.u.cm.insert) && bvectin(i, &slvarbits)) {
                    func_00478C14(bittab[i].ichain, node);
                    func_00478B8C(bittab[i].ichain, node);
                }
                i++; // skip assignment bit
            } else {
                if (bvectin(i, &node->bvs.stage1.u.cm.insert)) {
                    store_ichain = bittab[i].ichain;
                    if (bvectin(i, &storeop)) {
                        if (store_ichain->isop.opc == Uisst || store_ichain->isop.opc == Ustr) {
                            if (!store_ichain->isop.op1->isvar_issvar.veqv &&
                                    !bvectin(store_ichain->isop.op1->isvar_issvar.assignbit, &node->bvs.stage1.alters)) {
                                setbit(&node->bvs.stage1.antlocs, store_ichain->isop.op1->isvar_issvar.assignbit);
                            }
                        } else {
                            func_00478ED4(node);
                        }
                    }

                    if (store_ichain->isop.opc == Uilod ||
                            store_ichain->isop.opc == Uistr ||
                            store_ichain->isop.opc == Umov ||
                            store_ichain->isop.opc == Uirld ||
                            store_ichain->isop.opc == Uirst) {
                        func_00478FA0(store_ichain, node);
                    }
                    func_00478C14(store_ichain, node);
                }
            }
        }
        node = node->next;
    }

    if (dordstore) {
        checkbvlist(&varfactor_muls);
        node = graphhead;
        while (node != NULL) {
            stat = node->stat_head;
            done = false;
            while (stat != NULL && !done) {
                if (stat->opc == Uisst || stat->opc == Ustr) {
                    if (!stat->outpar) {
                        if (!stat->is_increment) {
                            func_004793C4(stat->expr->data.isvar_issvar.assigned_value, node);
                        } else {
                            if (!bvectin(stat->expr->ichain->bitpos, &node->bvs.stage1.u.cm.iv)) {
                                func_004793C4(stat->expr->data.isvar_issvar.assigned_value, node);
                            }
                        }
                    }
                } else if (stat->opc == Uistr ||
                        stat->opc == Uistv ||
                        stat->opc == Umov  ||
                        stat->opc == Umovv ||
                        stat->opc == Utpeq ||
                        stat->opc == Utpge ||
                        stat->opc == Utpgt ||
                        stat->opc == Utple ||
                        stat->opc == Utplt ||
                        stat->opc == Utpne ||
                        stat->opc == Uirst ||
                        stat->opc == Uirsv) {
                    func_004793C4(stat->expr, node);
                    func_004793C4(stat->u.store.expr, node);
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
                    func_004793C4(stat->expr, node);
                }

                if (stat->next != NULL) {
                    done = stat->next->graphnode != stat->graphnode;
                }
                stat = stat->next;
            }

            bvectcopy(&old, &node->bvs.stage1.u.cm.ppin);
            bvectunion(&old, &node->bvs.stage1.u.cm.ppout);
            bvectintsect(&old, &varfactor_muls);
            if (!bvectempty(&old)) {
                block = 0;
                i = 0;
                while (i < bitposcount) {
                    if (BVBLOCKEMPTY(old, block)) {
                        i += 0x80;
                    } else {
                        bit = 0;
                        while (i < bitposcount && bit < 0x80) {
                            if (BVINBLOCK(bit, block, old)) {
                                func_0047966C(bittab[i].ichain, node);
                            }
                            i++;
                            bit++;
                        }
                    }
                    block++;
                }
            }
            bvectminus(&node->bvs.stage1.u.cm.iv, &node->indiracc);
            node = node->next;
        }

        lastdftime = getclock();
        numdataflow += 1;
        node = graphhead;
        while (node != NULL) {
            bvectminus(&node->bvs.stage1.absalters, &node->bvs.stage1.u.cm.iv);
            bvectcopy(&node->bvs.stage1.u.cm.antin, &asgnbits);
            bvectminus(&node->bvs.stage1.u.cm.antin, &asgneqv);
            if (node->successors == NULL) {
                bvectcopy(&node->bvs.stage1.u.cm.antout, &mvarbits);
                bvectminus(&node->bvs.stage1.u.cm.antout, &varbits);
                bvectminus(&node->bvs.stage1.u.cm.antout, &asgneqv);
            } else if (!node->terminal) {
                if (has_exc_handler &&
                        (node->stat_tail->opc == Ucia ||
                         node->stat_tail->opc == Ucup ||
                         node->stat_tail->opc == Uicuf ||
                         node->stat_tail->opc == Urcuf)) {
                    initbv(&node->bvs.stage1.u.cm.antout, (struct BitVectorBlock) {0});
                } else if (node->successors->next == NULL) {
                    bvectcopy(&node->bvs.stage1.u.cm.antout, &asgnbits);
                    bvectminus(&node->bvs.stage1.u.cm.antout, &asgneqv);
                } else {
                    bvectcopy(&node->bvs.stage1.u.cm.antout, &mvarbits);
                    bvectminus(&node->bvs.stage1.u.cm.antout, &varbits);
                    bvectminus(&node->bvs.stage1.u.cm.antout, &asgneqv);
                }
            } else {
                bvectcopy(&node->bvs.stage1.u.cm.antout, &asgnbits);
                bvectminus(&node->bvs.stage1.u.cm.antout, &asgneqv);
            }
            node = node->next;
        }

        do {
            node = graphtail;
            dataflowiter++;
            changed = false;
            while (node != NULL) {
                if (node->successors != NULL) {
                    if (!changed) {
                        bvectcopy(&old, &node->bvs.stage1.u.cm.antout);
                    }

                    succ = node->successors;
                    while (succ != NULL) {
                        bvectintsect(&node->bvs.stage1.u.cm.antout, &succ->graphnode->bvs.stage1.u.cm.antin);
                        succ = succ->next;
                    }

                    if (!changed && !bvecteq(&old, &node->bvs.stage1.u.cm.antout)) {
                        changed = true;
                    }
                } else if (fsymbits.num_blocks != 0) {
                    if (!changed) {
                        bvectcopy(&old, &node->bvs.stage1.u.cm.antout);
                    }

                    minusminus(&node->bvs.stage1.u.cm.antout, &fsymbits, &graphhead->bvs.stage1.u.cm.antin);

                    if (!changed && !bvecteq(&old, &node->bvs.stage1.u.cm.antout)) {
                        changed = true;
                    }
                }

                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage1.u.cm.antin);
                }

                bvectglop(&node->bvs.stage1.u.cm.antin, &node->bvs.stage1.antlocs, &node->bvs.stage1.u.cm.antout, &node->bvs.stage1.absalters);
                if (!changed && !bvecteq(&old, &node->bvs.stage1.u.cm.antin)) {
                    changed = true;
                }
                node = node->prev;
            }
        } while (changed);
        dataflowtime = (dataflowtime + getclock()) - lastdftime;
    }

    used_trepexp.num_blocks = 0;
    used_trepexp.blocks = NULL;
    checkbvlist(&used_trepexp);
    node = graphhead;
    while (node != NULL) {
        stat = node->stat_head;
        done = false;

        while (stat != NULL && !done) {
            if (stat->opc == Uisst || stat->opc == Ustr) {
                if (stat->u.store.ichain != NULL) {
                    if (bvectin(stat->expr->ichain->isvar_issvar.assignbit, &node->bvs.stage1.u.cm.antout) &&
                       !bvectin(stat->expr->ichain->isvar_issvar.assignbit, &node->bvs.stage1.absalters)) {

                        if (dordstore) {
                            stat->u.store.var_access_list_item->type = 0;
                            if (!stat->is_increment &&
                                    (has_volt_ovfw(stat->expr->data.isvar_issvar.assigned_value) ||
                                     func_00479B80(stat->expr->data.isvar_issvar.assigned_value))) {
                                stat->opc = Upop;
                                stat->u.pop.dtype = stat->expr->datatype;
                                stat->u.pop.unk15 = 0;
                                stat->expr = stat->expr->data.isvar_issvar.assigned_value;
                                func_00479778(stat->expr, node);
                            } else {
                                stat->suppressed_iv = true;
                                if (stat->opc == Uisst) {
                                    deccount(stat->u.store.expr, node);
                                }
                                deccount(stat->expr->data.isvar_issvar.assigned_value, node);
                            }
                        }
                    } else {
                        func_00479778(stat->expr->data.isvar_issvar.assigned_value, node);
                    }
                }
            } else if (stat->opc == Uistr ||
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
                func_00479778(stat->expr, node);
                func_00479778(stat->u.store.expr, node);
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
                func_00479778(stat->expr, node);
            }

            if (stat->next != NULL) {
                done = stat->next->graphnode != stat->graphnode;
            }
            stat = stat->next;
        }
        node = node->next;
    }

    bvectminus(&varbits, &slvarbits);
    bvectminus(&asgnbits, &slasgnbits);
    node = graphhead;
    while (node != NULL) {
        minusminus(&node->bvs.stage1.u.cm.insert, &trepexp, &used_trepexp);
        bvectcopy(&savedexp, &node->bvs.stage1.u.cm.insert);
        bvectintsect(&savedexp, &used_trepexp);
        block = 0;
        i = 0;
        while (i < bitposcount) {
            if (BVBLOCKEMPTY(savedexp, block)) {
                i += 0x80;
            } else {
                bit = 0;
                while (i < bitposcount && bit < 0x80) {
                    if (BVINBLOCK(bit, block, savedexp)) {
                        TRAP_IF(bittab[i].ichain->isop.opc != Ucg2);
                        if ((bittab[i].ichain->isop.op1->type == isop ||
                                    bittab[i].ichain->isop.op1->type == isilda ||
                                    bittab[i].ichain->isop.op1->type == issvar) &&
                                !bvectin(bittab[i].ichain->isop.op1->bitpos, &node->bvs.stage1.u.cm.insert)) {
                            setbit(&node->bvs.stage1.u.cm.subinsert, bittab[i].ichain->isop.op1->bitpos);
                        }
                    }
                    i++;
                    bit++;
                }
            }
            block++;
        }
        node = node->next;
    }
}
