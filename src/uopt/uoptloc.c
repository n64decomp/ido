#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptitab.h"
#include "uoptcopy.h"
#include "uoptinput.h"
#include "uoptppss.h"
#include "uoptcontrolflow.h"

/* 
0041550C func_0041550C
0044FF6C mergeconst
004510A0 distrlaw
00451764 restructure
*/
bool binaryovfw(Datatype dtype, Uopcode opc, struct Expression *left, struct Expression *right) {
    bool overflow;

    switch (opc) {
        case Uadd:
            if (left->type == islda && right->type == islda) {
                overflow = true;
            } else if (left->type == islda) {
                overflow = addovfw(Adt, left->data.islda_isilda.addr, right->data.isconst.number.intval);
            } else if (right->type == islda) {
                overflow = addovfw(Adt, right->data.islda_isilda.addr, left->data.isconst.number.intval);
            } else {
                overflow = addovfw(dtype, left->data.isconst.number.intval, right->data.isconst.number.intval);
            }
            break;

        case Usub:
            if (left->type == islda && right->type == islda) {
                overflow = false;
            } else if (left->type == islda) {
                overflow = subovfw(Adt, left->data.islda_isilda.addr, right->data.isconst.number.intval);
            } else if (right->type == islda) {
                overflow = subovfw(Adt, left->data.isconst.number.intval, right->data.islda_isilda.addr);
            } else {
                overflow = subovfw(dtype, left->data.isconst.number.intval, right->data.isconst.number.intval);
            }
            break;

        case Umpy:
            overflow = mpyovfw(dtype, left->data.isconst.number.intval, right->data.isconst.number.intval);
            break;

        case Udiv:
        case Urem:
            if (right->data.isconst.number.intval == 0) {
                overflow = true;
            } else if (dtype == Idt || dtype == Jdt) {
                overflow = left->data.isconst.number.intval == 0x80000000 && right->data.isconst.number.intval == -1;
            }
            break;

        case Umod:
            overflow = right->data.isconst.number.intval == 0;
            break;

        case Ushl:
        case Ushr:
            overflow = right->data.isconst.number.intval < 0 || right->data.isconst.number.intval >= 32;
            break;

        case Usign:
            overflow = left->data.isconst.number.intval == 0x80000000 && right->data.isconst.number.intval >= 0;
            break;

        case Uand:
        case Ubsub:
        case Udif:
        case Uequ:
        case Ugeq:
        case Ugrt:
        case Uinn:
        case Uint:
        case Uior:
        case Uleq:
        case Ules:
        case Umax:
        case Umin:
        case Umus:
        case Uneq:
        case Uuni:
        case Uxor:
            overflow = false;
            break;

        default:
            caseerror(1, 59, "uoptloc.p", 9);
            overflow = false; // idk
            break;
    }

    return overflow;
}

/* 
0041550C func_0041550C
0044FF6C mergeconst
00451764 restructure
*/
bool ixaovfw(struct Expression *expr, struct Expression *left, struct Expression *right) {
    unsigned int address;

    if (left->type == islda) {
        address = left->data.islda_isilda.addr;
    } else {
        address = left->data.isconst.number.intval;
    }
    if (mpyovfw(expr->datatype, right->data.isconst.number.intval, expr->data.isop.datasize)) {
        return true;
    } else {
        return addovfw(Adt, address, right->data.isconst.number.intval * expr->data.isop.datasize);
    }
}

/* 
0041550C func_0041550C
00451764 restructure
*/
bool unaryovfw(struct Expression *expr) {
    bool overflow;

    switch (expr->data.isop.opc) {
        case Uneg:
        case Uabs:
            overflow = expr->data.isop.op1->data.isconst.number.uintval == 0x80000000;
            break;

        case Udec:
            if (expr->data.isop.op1->type == islda) {
                overflow = subovfw(expr->datatype, expr->data.isop.op1->data.islda_isilda.addr, expr->data.isop.datasize);
            } else {
                overflow = subovfw(expr->datatype, expr->data.isop.op1->data.isconst.number.intval, expr->data.isop.datasize);
            }
            break;

        case Uinc:
            if (expr->data.isop.op1->type == islda) {
                overflow = addovfw(expr->datatype, expr->data.isop.op1->data.islda_isilda.addr, expr->data.isop.datasize);
            } else {
                overflow = addovfw(expr->datatype, expr->data.isop.op1->data.isconst.number.intval, expr->data.isop.datasize);
            }
            break;

        case Unot:
        case Uodd:
        case Ucvtl:
        case Usgs:
        case Usqr:
        case Ulnot:
        case Uchkh:
        case Uchkl:
            overflow = false;
            break;

        default:
            caseerror(1, 105, "uoptloc.p", 9);
            return false;
            break;
    }

    return overflow;
}

/* 
0041550C func_0041550C
0044FF6C mergeconst
004510A0 distrlaw
00451764 restructure
*/
void binaryfold(Uopcode opc, Datatype dtype, struct Expression *left, struct Expression *right, struct Expression *dest) {
    int value;
    bool lda;
    int rightval;
    int leftval;

    if (left->type == islda && right->type == islda) {
        dtype = Jdt;
        lda = false;
        rightval = right->data.islda_isilda.addr;
        leftval = left->data.islda_isilda.addr;
    } else if (left->type == islda) {
        lda = true;
        rightval = right->data.isconst.number.intval;
        leftval = left->data.islda_isilda.addr;
    } else if (right->type == islda) {
        lda = true;
        rightval = right->data.islda_isilda.addr;
        leftval = left->data.isconst.number.intval;
    } else {
        lda = false;
        rightval = right->data.isconst.number.intval;
        leftval = left->data.isconst.number.intval;
    }

    switch (opc) {
        case Uadd:
            value = leftval + rightval;
            break;

        case Usub:
            value = leftval - rightval;
            break;

        case Umpy:
            value = leftval * rightval;
            break;

        case Udiv:
            if (dtype == Idt || dtype == Jdt) value = leftval / rightval;
            else value = (unsigned)leftval / (unsigned)rightval;
            break;

        case Umod:
            if (dtype == Idt || dtype == Jdt) value = leftval % rightval;
            else value = (unsigned)leftval % (unsigned)rightval;
            
            if (value ^ rightval < 0) {
                value += rightval;
            }
            break;

        case Urem:
            if (dtype == Idt || dtype == Jdt) value = leftval - ((leftval / rightval) * rightval);
             else value = leftval - (((unsigned)leftval / (unsigned)rightval) * rightval);
            
            break;

        case Uand:
            value = leftval & rightval;
            break;

        case Uior:
            value = leftval | rightval;
            break;

        case Uxor:
            value = leftval ^ rightval;
            break;

        case Ushl:
            value = leftval << rightval;
            break;

        case Ushr:
            if (dtype == Idt || dtype == Jdt) value = leftval >> rightval;
            else value = (unsigned)leftval >> (unsigned)rightval;
            break;

        case Usign:
            if (rightval >= 0) {
                value = leftval;
                if (leftval < 0) {
                    value = -leftval;
                }
            } else {
                value = leftval;
                if (leftval < 0) {
                    value = -leftval;
                }
                value = -value;
            }
            break;

        case Uequ:
            if (lda) {
                lda = false;
                value = false;
            } else {
                value = leftval == rightval;
            }
            break;

        case Uneq:
            if (lda) {
                lda = false;
                value = true;
            } else {
                value = leftval != rightval;
            }
            break;

        case Ugeq:
            if (dtype == Idt || dtype == Jdt) value = leftval >= rightval;
            else value = (unsigned)leftval >= (unsigned)rightval;
            break;

        case Ugrt:
            if (dtype == Idt || dtype == Jdt) value = leftval > rightval;
            else value = (unsigned)leftval > (unsigned)rightval;
            break;

        case Uleq:
            if (dtype == Idt || dtype == Jdt) value = leftval <= rightval;
            else value = (unsigned)leftval <= (unsigned)rightval;
            break;

        case Ules:
            if (dtype == Idt || dtype == Jdt) value = leftval < rightval;
            else value = (unsigned)leftval < (unsigned)rightval;
            break;

        case Umin:
            if (dtype == Idt || dtype == Jdt) value = MIN(leftval, rightval);
            else value = MIN((unsigned)leftval, (unsigned)rightval);
            break;

        case Umax:
            if (dtype == Idt || dtype == Jdt) value = MAX(leftval, rightval);
            else value = MAX((unsigned)leftval, (unsigned)rightval);
            break;

        default:
            caseerror(1, 149, "uoptloc.p", 9);
            break;
    }

    if (lda) {
        if (left->type == islda) {
            copycoderep(dest, left);
            dest->data.islda_isilda.addr = value;
        } else {
            copycoderep(dest, right);
            dest->data.islda_isilda.addr = value;
        }
    } else {
        dest->type = isconst;
        dest->data.isconst.size = sizeoftyp(dtype);
        dest->var_access_list = NULL;
        dest->unk4 = false;
        dest->data.isconst.number.intval = value;
        dest->datatype = dtype;
    }
    dest->ichain = NULL;
}

/* 
0041550C func_0041550C
0044FF6C mergeconst
00451764 restructure
*/
void ixafold(struct Expression *ixa, struct Expression *left, struct Expression *right, struct Expression *dest) {
    int address;
    int offset;

    if (left->type == islda) {
        address = left->data.islda_isilda.addr;
    } else {
        address = left->data.isconst.number.intval;
    }

    offset = right->data.isconst.number.intval * ixa->data.isop.datasize;
    if (dest != left) {
        copycoderep(dest, left);
    }

    if (dest->type == islda) {
        dest->data.islda_isilda.addr = address + offset;
    } else {
        dest->data.isconst.number.intval = address + offset;
    }
    dest->ichain = NULL;
}

/* 
0041550C func_0041550C
00451764 restructure
*/
struct Expression *ilodfold(struct Expression *ilod) {
    struct VariableInner var;
    unsigned short hash;
    struct Expression *left;
    struct Expression *expr;
    struct Expression *prev;
    bool found;

    left = ilod->data.isop.op1;
    var = left->data.islda_isilda.var_data;
    var.addr = left->data.islda_isilda.addr + ilod->data.isop.datasize;
    if (insertvar(var, ilod->data.isop.aux2.v1.unk3C, ilod->datatype, &curproc->vartree, 1, 0, 0)->unk1 != 0) {
        return ilod;
    }
    hash = isvarhash(var);
    expr = table[hash];
    found = false;
    prev = NULL;
    while (!found && expr != 0) {
        if (expr->type == isvar && addreq(expr->data.isvar_issvar.var_data, var)) {
            found = ilod->graphnode == expr->graphnode &&
                ilod->unk2 == expr->unk2 &&
                ilod->unk3 == expr->unk3 &&
                (expr->data.isvar_issvar.unk30 == NULL || nocopy == expr->data.isvar_issvar.unk30);

            prev = expr;
            if (found && expr->unk2 && !expr->unk3) {
                found = false;
            }
        }

        if (!found) {
            expr = expr->next;
        }
    }

    if (!found) {
        expr = appendchain(hash);
        if (outofmem != 0) {
            return NULL;
        }
        if (!inlopt && prev != NULL) {
            copycoderep(expr, prev);
        } else {
            expr->type = isvar;
            expr->datatype = ilod->datatype;
            expr->unk4 = false;
            expr->unk5 = false;
            expr->data.isvar_issvar.unk21 = false;
            expr->data.isvar_issvar.unk22 = false;
            expr->data.isvar_issvar.var_data = var;
            expr->data.isvar_issvar.unk24 = NULL;
            expr->data.isvar_issvar.size = ilod->data.isop.aux2.v1.unk3C;
            expr->data.isvar_issvar.var_data.level = blktolev(var.blockno);
            expr->data.isvar_issvar.unk3C = 0;
            expr->data.isvar_issvar.is_volatile = false;
        }
        expr->count = 1;
        expr->data.isvar_issvar.unk30 = NULL;
        expr->data.isvar_issvar.assignment = NULL;
        expr->data.isvar_issvar.assigned_value = NULL;
        expr->graphnode = ilod->graphnode;
        expr->unk3 = ilod->unk3;
        expr->unk2 = ilod->unk2;
    } else {
        increasecount(expr);
    }

    if (!found || expr->var_access_list == NULL) {
        expr->var_access_list = alloc_new(sizeof(struct VarAccessList), &perm_heap);
        expr->var_access_list->prev = ilod->var_access_list->prev;
        if (expr->var_access_list->prev != 0) {
            expr->var_access_list->prev->next = expr->var_access_list;
        } else {
            expr->graphnode->varlisthead = expr->var_access_list;
        }
        expr->var_access_list->next = ilod->var_access_list;
        ilod->var_access_list->prev = expr->var_access_list;
        expr->var_access_list->unk8 = false;
        expr->var_access_list->type = 2;
        expr->var_access_list->data.var = expr;
    }
    decreasecount(ilod);
    return expr;
}

/* 
004175BC copypropagate
00452DAC constarith
*/
void istrfold(struct Statement *stmt) {
    struct VariableInner var;
    struct Expression *expr;
    int increment;
    struct Expression *istr;

    istr = stmt->expr;
    var = istr->data.islda_isilda.var_data;
    var.addr = istr->data.islda_isilda.addr + stmt->u.store.u.istr.s.word;
    if (insertvar(var, stmt->u.store.size, stmt->u.store.u.istr.dtype, &curproc->vartree, 0, 0, 0)->unk1 == 0) {
        expr = appendchain(isvarhash(var));
        if (outofmem) {
            return;
        }
        expr->type = isvar;
        expr->datatype = stmt->u.store.u.istr.dtype;
        expr->unk2 = !stmt->u.store.unk1F;
        expr->unk3 = false;
        expr->unk4 = false;
        expr->unk5 = false;
        expr->count = 0;
        expr->graphnode = stmt->graphnode;
        expr->var_access_list = NULL;

        expr->data.isvar_issvar.size = stmt->u.store.size;
        expr->data.isvar_issvar.unk21 = false;
        expr->data.isvar_issvar.unk22 = false;
        expr->data.isvar_issvar.is_volatile = false;
        expr->data.isvar_issvar.unk24 = NULL;
        expr->data.isvar_issvar.var_data = var;
        expr->data.isvar_issvar.var_data.level = blktolev(var.blockno);
        expr->data.isvar_issvar.unk30 = NULL;
        expr->data.isvar_issvar.assigned_value = stmt->u.store.expr;
        expr->data.isvar_issvar.assignment = stmt;
        expr->data.isvar_issvar.unk3C = 0;

        stmt->opc = Ustr;
        stmt->unk1 = false;
        stmt->expr = expr;
        if (checkincre(expr->data.isvar_issvar.assigned_value, expr, &increment) && increment == 1) {
            stmt->unk1 = true;
        }
        stmt->unk2 = false;
        stmt->unk3 = false;
        stmt->u.store.var_access_list_item->unk8 = NULL;
        stmt->u.store.u.str.unk2C = 0;
        stmt->u.store.u.str.unk30 = 0;
    }
}

/* 
0041550C func_0041550C
00451764 restructure
*/
void cvtfold(struct Expression *cvt) {
    cvt->type = isconst;
    cvt->var_access_list = NULL;
    cvt->ichain = NULL;
    cvt->data.isconst = cvt->data.isop.op1->data.isconst;
}

/* 
004150E4 func_004150E4
0041550C func_0041550C
00451764 restructure
*/
void unaryfold(struct Expression *expr) { //! wtf
    int result;
    int value;
    struct Expression *phi_a1;

    if (expr->type == islda) {
        phi_a1 = expr->data.isop.op1; // wtf. did they mean isvar?
    } else {
        phi_a1 = expr->data.isop.op1;
    }

    value = phi_a1->data.isconst.number.intval;
    switch (expr->data.isop.opc) {
        case Uabs:
            result = value;
            if (expr->datatype == Idt || expr->datatype == Jdt) {
                result = ABS(value);
            }
            break;

        case Uodd:
            result = false;
            if (value & 1) {
                result = true;
            }
            break;

        case Usqr:
            result = value * value;
            break;

        case Uneg:
            result = -value;
            break;

        case Unot:
            result = ~value;
            break;

        case Ulnot:
            if (expr->type == islda) {
                result = false;
            } else {
                result = !value;
            }
            break;

        case Usgs:
            //! result undefined
            break;

        case Udec:
            if (phi_a1->type == islda) { // wtf...
                result = value - expr->data.isop.datasize;
            } else {
                result = value - expr->data.isop.datasize;
            }
            break;

        case Uinc:
            if (phi_a1->type == islda) { // wtf, why?
                result = value + expr->data.isop.datasize;
            } else {
                result = value + expr->data.isop.datasize;
            }
            break;

        case Uchkh:
            result = value;
            if (expr->data.isop.datasize < value) {
                boundswarning();
            }
            break;

        case Uchkl:
            result = value;
            if (value < expr->data.isop.datasize) {
                boundswarning();
            }
            break;

        case Ucvtl:
            result = cutbits(value, expr->data.isop.datasize, expr->datatype);
            break;

        case Uneq:
        case Unop:
        default:
            caseerror(1, 470, "uoptloc.p", 9);
            break;
    }

    if (phi_a1->type == islda && expr->data.isop.opc != Ulnot) {
        copycoderep(expr, phi_a1);
        expr->data.islda_isilda.addr = result;
    } else {
        expr->type = isconst;
        if (phi_a1->type == islda) {
            expr->data.isconst.size = 4;
        } else {
            expr->data.isconst.size = phi_a1->data.isconst.size;
        }
        expr->data.isconst.number.intval = result;
        expr->var_access_list = NULL;
    }
    expr->ichain = NULL;
}

/* 
00451764 restructure
*/
void linearize(struct Expression *expr) {
    int datasize;
    struct Expression *right;
    struct Expression *left;
    bool associative;

    if (!doassoc && (expr->datatype == Qdt || expr->datatype == Rdt)) {
        return;
    }

    if (outofmem) {
        return;
    }

    right = expr->data.isop.op2;
    associative = false;
    if (right->type == isop) {
        if (!expr->data.isop.aux2.v1.overflow_attr) {
            if (expr->data.isop.opc == right->data.isop.opc) {
                associative = true;
            } else if ((right->data.isop.opc == Uadd ||
                        right->data.isop.opc == Udec ||
                        right->data.isop.opc == Uinc ||
                        right->data.isop.opc == Uixa ||
                        right->data.isop.opc == Usub) &&
                    (expr->data.isop.opc == Uadd ||
                     expr->data.isop.opc == Uixa ||
                     expr->data.isop.opc == Usub)) {
                associative = true;
            } else if (right->data.isop.opc == Umpy &&
                    (expr->data.isop.opc == Udiv ||
                     expr->data.isop.opc == Umpy)) {
                associative = true;
            }
        }
    }

    if (associative && right->data.isop.opc == Udiv && (expr->datatype == Idt || expr->datatype == Jdt || expr->datatype == Kdt || expr->datatype == Ldt)) {
        associative = false;
    }
    
    if (!associative || right->count != 1) {
        return;
    }

    if (right->data.isop.opc != Udec && right->data.isop.opc != Uinc) {
        expr->data.isop.op2 = right->data.isop.op2;
    }

    right->data.isop.op2 = right->data.isop.op1;
    right->data.isop.op1 = expr->data.isop.op1;
    expr->data.isop.op1 = right;
    right->unk5 = false;

    switch (expr->data.isop.opc) {
        case Usub:
            left = expr->data.isop.op1;
            switch (expr->data.isop.op1->data.isop.opc) {
                case Usub:
                    expr->data.isop.opc = Uadd;
                    break;

                case Uadd:
                    left->data.isop.opc = Usub;
                    break;

                case Udec:
                    left->data.isop.opc = Usub;
                    expr->data.isop.opc = Uinc;
                    expr->data.isop.op2 = NULL;
                    expr->data.isop.datasize = expr->data.isop.op1->data.isop.datasize;
                    break;

                case Uinc:
                    left->data.isop.opc = Usub;
                    expr->data.isop.opc = Udec;
                    expr->data.isop.op2 = NULL;
                    expr->data.isop.datasize = expr->data.isop.op1->data.isop.datasize;
                    break;

                case Uixa:
                    expr->data.isop.opc = Uixa;
                    expr->datatype = left->datatype;
                    expr->data.isop.datatype = left->data.isop.datatype;
                    expr->data.isop.datasize = -left->data.isop.datasize;
                    left->data.isop.opc = Usub;
                    expr->data.isop.op1->datatype = Adt;
                    break;

                default:
                    caseerror(1, 552, "uoptloc.p", 9);
                    break;
            }
            break;

        case Uadd:
            left = expr->data.isop.op1;
            switch (expr->data.isop.op1->data.isop.opc) {
                case Usub:
                    expr->data.isop.opc = Usub;
                    left->data.isop.opc = Uadd;
                    break;

                case Udec:
                    left->data.isop.opc = Uadd;
                    expr->data.isop.opc = Udec;
                    expr->data.isop.op2 = NULL;
                    expr->data.isop.datasize = expr->data.isop.op1->data.isop.datasize;
                    break;

                case Uinc:
                    left->data.isop.opc = Uadd;
                    expr->data.isop.opc = Uinc;
                    expr->data.isop.op2 = NULL;
                    expr->data.isop.datasize = expr->data.isop.op1->data.isop.datasize;
                    break;

                case Uixa:
                    expr->data.isop.opc = Uixa;
                    expr->datatype = left->datatype;
                    expr->data.isop.datatype = left->data.isop.datatype;
                    expr->data.isop.datasize = left->data.isop.datasize;
                    left->data.isop.opc = Uadd;
                    expr->data.isop.op1->datatype = Adt;
                    break;

                default:
                    caseerror(1, 577, "uoptloc.p", 9);
                    break;
            }
            break;

        case Uixa:
            left = expr->data.isop.op1;
            datasize = left->data.isop.datasize;
            left->data.isop.datasize = expr->data.isop.datasize;
            switch (expr->data.isop.op1->data.isop.opc) {
                case Usub:
                    expr->data.isop.datasize = -expr->data.isop.datasize;
                    break;

                case Udec:
                    if (mpyovfw(expr->datatype, expr->data.isop.datasize, datasize)) {
                        ovfwwarning(Uixa);
                        datasize = 1;
                    }
                    expr->datatype = Adt;
                    expr->data.isop.opc = Udec;
                    expr->data.isop.op2 = NULL;
                    expr->data.isop.datasize *= datasize;
                    break;

                case Uinc:
                    if (mpyovfw(expr->datatype, expr->data.isop.datasize, datasize)) {
                        ovfwwarning(Uixa);
                        datasize = 1;
                    }
                    expr->datatype = Adt;
                    expr->data.isop.opc = Uinc;
                    expr->data.isop.op2 = NULL;
                    expr->data.isop.datasize *= datasize;
                    break;

                default:
                    caseerror(1, 609, "uoptloc.p", 9);
                    break;
            }
            expr->data.isop.op1->data.isop.opc = Uixa;
            expr->data.isop.op1->data.isop.datatype = expr->data.isop.datatype;
            break;

        case Udiv:
            left = expr->data.isop.op1;
            if (left->data.isop.opc != Udiv) {
                left->data.isop.opc = Udiv;
            } else {
                expr->data.isop.opc = Umpy;
            }
            break;

        case Umpy:
            left = expr->data.isop.op1;
            if (left->data.isop.opc == Udiv) {
                left->data.isop.opc = Umpy;
                expr->data.isop.opc = Udiv;
            }
            break;

        default:
            caseerror(1, 547, "uoptloc.p", 9);
            break;

        case Uuni:
        case Uint:
        case Uior:
        case Uand:
            break;
    }
}

/* 
0044FF6C mergeconst
*/
static bool func_0044FD9C(Uopcode opc, struct Expression *expr) {
    if (expr->type != isop) {
        return expr->type == isconst;
    } else if (expr->count != 1 || expr->data.isop.aux2.v1.overflow_attr) {
        return false;
    } else if (expr->data.isop.opc == Udiv && (expr->datatype == Idt || expr->datatype == Jdt || expr->datatype == Kdt || expr->datatype == Ldt)) {
        return false;
    } else if (opc != expr->data.isop.opc 
            // one/both of the opcodes are not addition or multiplication
            && (!(expr->data.isop.opc == Uadd ||
                  expr->data.isop.opc == Udec ||
                  expr->data.isop.opc == Uinc ||
                  expr->data.isop.opc == Uixa ||
                  expr->data.isop.opc == Usub)
                || !(opc == Uadd ||
                     opc == Udec ||
                     opc == Uinc ||
                     opc == Uixa ||
                     opc == Usub))
            && (!(expr->data.isop.opc == Udiv ||
                  expr->data.isop.opc == Umpy)
                 || !(opc == Udiv ||
                      opc == Umpy))) {
        return false;
    } else if (expr->data.isop.opc == Udec || expr->data.isop.opc == Uinc) {
        return true;
    } else if (expr->data.isop.op2->type == isconst) {
        return true;
    } else {
        return func_0044FD9C(opc, expr->data.isop.op1);
    }
}

/* 
00451764 restructure
*/
void mergeconst(struct Expression *expr) {
    struct Expression *left;
    struct Expression *constant;
    struct Expression *tempExpr;
    struct Expression *newExpr;
    bool done;
    bool overflow;

    if ((expr->datatype == Adt || expr->datatype == Hdt || expr->datatype == Jdt || expr->datatype == Ldt) && func_0044FD9C(expr->data.isop.opc, expr->data.isop.op1)) {
        left = expr->data.isop.op1;
        done = false;
        overflow = false;
        while (!done && !overflow) {
            if (left->data.isop.opc != Udec || left->data.isop.opc != Uinc) {
                constant = left->data.isop.op2;
                if (constant != NULL && constant->type == isconst) {
                    if (expr->data.isop.opc == Uixa) {
                        switch (left->data.isop.opc) {
                            case Uixa:
                                if (mpyovfw(left->datatype, constant->data.isconst.number.intval, left->data.isop.datasize)) {
                                    overflow = true;
                                } else if (mpyovfw(expr->datatype, expr->data.isop.op2->data.isconst.number.intval, expr->data.isop.datasize)) {
                                    overflow = true;
                                } else {
                                    overflow = addovfw(false, constant->data.isconst.number.intval * left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize);
                                }
                                break;

                            default:
                                caseerror(1U, 705, "uoptloc.p", 9);
                                break;
                        }
                    } else if (expr->data.isop.opc == Udec) {
                        switch (left->data.isop.opc) {
                            case Uadd:
                                overflow = subovfw(expr->datatype, constant->data.isconst.number.intval, expr->data.isop.datasize);
                                break;

                            case Usub:
                                overflow = subovfw(expr->datatype, -constant->data.isconst.number.intval, expr->data.isop.datasize);
                                break;

                            case Uixa:
                                if (mpyovfw(left->datatype, left->data.isop.datasize, constant->data.isconst.number.intval)) {
                                    overflow = true;
                                } else {
                                    overflow = subovfw(expr->datatype, left->data.isop.datasize * constant->data.isconst.number.intval, expr->data.isop.datasize);
                                }
                                break;

                            default:
                                caseerror(1, 714, "uoptloc.p", 9);
                                break;
                        }
                    } else if (expr->data.isop.opc == Uinc) {
                        switch (left->data.isop.opc) {
                            case Uadd:
                                overflow = addovfw(expr->datatype, constant->data.isconst.number.intval, expr->data.isop.datasize);
                                break;

                            case Usub:
                                overflow = addovfw(expr->datatype, -constant->data.isconst.number.intval, expr->data.isop.datasize);
                                break;

                            case Uixa:
                                if (mpyovfw(left->datatype, left->data.isop.datasize, constant->data.isconst.number.intval)) {
                                    overflow = true;
                                } else {
                                    overflow = addovfw(expr->datatype, left->data.isop.datasize * constant->data.isconst.number.intval, expr->data.isop.datasize);
                                }
                                break;

                            default:
                                caseerror(1, 723, "uoptloc.p", 9);
                                break;
                        }
                    } else if (left->data.isop.opc == Uixa) {
                        if (mpyovfw(left->datatype, left->data.isop.datasize, constant->data.isconst.number.intval)) {
                            overflow = true;
                        } else {
                            if (expr->data.isop.opc == Uadd) {
                                overflow = addovfw(expr->datatype, left->data.isop.datasize * constant->data.isconst.number.intval, expr->data.isop.op2->data.isconst.number.intval);
                            } else {
                                overflow = subovfw(expr->datatype, left->data.isop.datasize * constant->data.isconst.number.intval, expr->data.isop.op2->data.isconst.number.intval);
                            }
                        }
                    } else if (left->data.isop.opc != Usub && left->data.isop.opc != Udiv) {
                        overflow = binaryovfw(expr->datatype, expr->data.isop.opc, constant, expr->data.isop.op2);
                    } else if (expr->data.isop.opc == left->data.isop.opc) {
                        if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                            overflow = binaryovfw(expr->datatype, Uadd, constant, expr->data.isop.op2);
                        } else if (expr->data.isop.opc == Udiv || expr->data.isop.opc == Umpy) {
                            overflow = binaryovfw(expr->datatype, Umpy, constant, expr->data.isop.op2);
                        } else {
                            overflow = binaryovfw(expr->datatype, expr->data.isop.opc, constant, expr->data.isop.op2);
                        }
                    } else if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                        overflow = binaryovfw(expr->datatype, Usub, constant, expr->data.isop.op2) &&
                            binaryovfw(expr->datatype, Usub, expr->data.isop.op2, constant);
                    } else {
                        overflow = binaryovfw(expr->datatype, Udiv, constant, expr->data.isop.op2);
                    }

                    if (overflow == false) {
                        done = true;
                        if (expr->data.isop.opc == Uixa) {
                            switch (left->data.isop.opc) {
                                case Uixa:
                                    left->data.isop.op2 = NULL;
                                    left->data.isop.opc = Uinc;
                                    left->datatype = Adt;
                                    left->data.isop.datasize *= constant->data.isconst.number.intval;
                                    left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize;
                                    break;

                                default:
                                    caseerror(1, 757, "uoptloc.p", 9);
                                    break;
                            }
                        } else if (expr->data.isop.opc == Udec) {
                            switch (left->data.isop.opc) {
                                case Uadd:
                                    left->data.isop.datasize = constant->data.isconst.number.intval - expr->data.isop.datasize;
                                    break;

                                case Usub:
                                    left->data.isop.datasize = -constant->data.isconst.number.intval - expr->data.isop.datasize;
                                    break;

                                case Uixa:
                                    left->datatype = Adt;
                                    left->data.isop.datasize *= constant->data.isconst.number.intval;
                                    left->data.isop.datasize -= expr->data.isop.datasize;
                                    break;

                                default:
                                    caseerror(1, 767, "uoptloc.p", 9);
                                    break;
                            }

                            left->data.isop.opc = Uinc;
                            left->data.isop.op2 = NULL;
                        } else if (expr->data.isop.opc == Uinc) {
                            switch (left->data.isop.opc) {
                                case Uadd:
                                    left->data.isop.datasize = expr->data.isop.datasize + constant->data.isconst.number.intval;
                                    break;

                                case Usub:
                                    left->data.isop.datasize = expr->data.isop.datasize - constant->data.isconst.number.intval;
                                    break;

                                case Uixa:
                                    left->datatype = Adt;
                                    left->data.isop.datasize *= constant->data.isconst.number.intval;
                                    left->data.isop.datasize += expr->data.isop.datasize;
                                    break;

                                default:
                                    caseerror(1, 780, "uoptloc.p", 9);
                                    break;
                            }

                            left->data.isop.opc = Uinc;
                            left->data.isop.op2 = NULL;
                        } else if (left->data.isop.opc == Uixa) {
                            left->data.isop.datasize = left->data.isop.datasize * constant->data.isconst.number.intval;
                            if (expr->data.isop.opc == Uadd) {
                                left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.op2->data.isconst.number.intval;
                            }

                            left->datatype = Adt;
                            left->data.isop.opc = Uinc;
                            left->data.isop.op2 = NULL;
                        } else {
                            newExpr = appendchain(left->table_index);
                            if (outofmem) {
                                return;
                            }
                            if (left->data.isop.opc != Usub && left->data.isop.opc != Udiv) {
                                binaryfold(expr->data.isop.opc, expr->datatype, constant, expr->data.isop.op2, newExpr);
                            } else if (expr->data.isop.opc == left->data.isop.opc) {
                                if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                                    binaryfold(Uadd, expr->datatype, constant, expr->data.isop.op2, newExpr);
                                } else if (expr->data.isop.opc == Udiv || expr->data.isop.opc == Umpy) {
                                    binaryfold(Umpy, expr->datatype, constant, expr->data.isop.op2, newExpr);
                                } else {
                                    binaryfold(expr->data.isop.opc, expr->datatype, constant, expr->data.isop.op2, newExpr);
                                }
                            } else if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                                binaryfold(Usub, expr->datatype, constant, expr->data.isop.op2, newExpr);
                            } else {
                                binaryfold(Udiv, expr->datatype, constant, expr->data.isop.op2, newExpr);
                            }
                            left->data.isop.op2 = newExpr;
                        }

                        expr->data.isop.op1->count = expr->count;
                        tempExpr = expr->data.isop.op1;
                        copycoderep(expr, expr->data.isop.op1);
                        delentry(tempExpr);
                    }
                }
            } else {
                switch (expr->data.isop.opc) {
                    case Udec:
                        if (left->data.isop.opc == Udec) {
                            overflow = addovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.datasize);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.datasize);
                        }
                        break;

                    case Uinc:
                        if (left->data.isop.opc == Uinc) {
                            overflow = addovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.datasize);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.datasize);
                        }
                        break;

                    case Uadd:
                        if (left->data.isop.opc == Uinc) {
                            overflow = addovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval);
                        }
                        break;

                    case Usub:
                        if (left->data.isop.opc == Udec) {
                            overflow = addovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval);
                        }
                        break;

                    case Uixa:
                        if (mpyovfw(expr->datatype, expr->data.isop.op2->data.isconst.number.intval, expr->data.isop.datasize)) {
                            overflow = true;
                        } else if (left->data.isop.opc == Uinc) {
                            overflow = addovfw(Adt, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize);
                        } else {
                            overflow = subovfw(Adt, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize);
                        }
                        break;

                    default:
                        caseerror(1, 827, "uoptloc.p", 9);
                        break;
                }

                if (overflow == false) {
                    done = true;
                    switch (expr->data.isop.opc) {
                        case Udec:
                            if (left->data.isop.opc == Udec) {
                                left->data.isop.datasize += expr->data.isop.datasize;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.datasize;
                            }
                            break;

                        case Uinc:
                            if (left->data.isop.opc == Uinc) {
                                left->data.isop.datasize += expr->data.isop.datasize;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.datasize;
                            }
                            break;

                        case Uadd:
                            if (left->data.isop.opc == Uinc) {
                                left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.op2->data.isconst.number.intval;
                            }
                            break;

                        case Usub:
                            if (left->data.isop.opc == Udec) {
                                left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.op2->data.isconst.number.intval;
                            }
                            break;

                        case Uixa:
                            if (left->data.isop.opc == Uinc) {
                                left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize;
                            }
                            break;

                        default:
                            caseerror(1, 849, "uoptloc.p", 9);
                            break;
                    }

                    expr->data.isop.op1->count = expr->count;
                    tempExpr = expr->data.isop.op1;
                    copycoderep(expr, expr->data.isop.op1);
                    delentry(tempExpr);
                }
            }

            if (!done && !overflow) {
                if (left->data.isop.op1->type != isop) {
                    if (expr->data.isop.opc == Uixa) {
                        overflow = ixaovfw(expr, left->data.isop.op1, expr->data.isop.op2);
                    } else if (expr->data.isop.opc != Udec && expr->data.isop.opc != Uinc) {
                        overflow = binaryovfw(expr->datatype, expr->data.isop.opc, left->data.isop.op1, expr->data.isop.op2);
                    } else if (expr->data.isop.opc == Udec) {
                        if (left->data.isop.op1->type == islda) {
                            overflow = subovfw(Adt, left->data.isop.op1->data.islda_isilda.addr, expr->data.isop.datasize);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.op1->data.isconst.number.intval, expr->data.isop.datasize);
                        }
                    } else if (left->data.isop.op1->type == islda) {
                        overflow = addovfw(Adt, left->data.isop.op1->data.islda_isilda.addr, expr->data.isop.datasize);
                    } else {
                        overflow = addovfw(expr->datatype, left->data.isop.op1->data.isconst.number.intval, expr->data.isop.datasize);
                    }

                    if (!overflow) {
                        done = true;
                        newExpr = appendchain(left->data.isop.op1->table_index);
                        if (outofmem) {
                            return;
                        }
                        if (expr->data.isop.opc == Uixa) {
                            ixafold(expr, left->data.isop.op1, expr->data.isop.op2, newExpr);
                        } else if (expr->data.isop.opc != Udec && expr->data.isop.opc != Uinc) {
                            binaryfold(expr->data.isop.opc, expr->datatype, left->data.isop.op1, expr->data.isop.op2, newExpr);
                        } else {
                            copycoderep(newExpr, left->data.isop.op1);
                            newExpr->ichain = NULL;
                            if (expr->data.isop.opc == Udec) {
                                if (newExpr->type == islda) {
                                    newExpr->data.islda_isilda.addr -= expr->data.isop.datasize;
                                } else {
                                    newExpr->data.isconst.number.intval -= expr->data.isop.datasize;
                                }
                            } else {
                                if (newExpr->type == islda) {
                                    newExpr->data.islda_isilda.addr += expr->data.isop.datasize;
                                } else {
                                    newExpr->data.isconst.number.intval += expr->data.isop.datasize;
                                }
                            }
                        }

                        left->data.isop.op1 = newExpr;
                        expr->data.isop.op1->count = expr->count;
                        tempExpr = expr->data.isop.op1;
                        copycoderep(expr, expr->data.isop.op1);
                        delentry(tempExpr);
                    }
                } else {
                    left = left->data.isop.op1;
                }
            }
        }
    }
}

/* 
00451764 restructure
*/
void distrlaw(Uopcode opc, struct Expression *expr) {
    struct Expression *newExpr;
    Datatype dtype;
    Uopcode tempopc;
    struct Expression *left;     // s1
    struct Expression *right;    // a3

    dtype = expr->datatype;
    if ((dtype == Adt || dtype == Hdt || dtype == Jdt || dtype == Ldt) && !expr->data.isop.aux2.v1.overflow_attr) {
        if (((opc == Uadd || opc == Udec || opc == Uinc || opc == Uixa || opc == Usub) && expr->data.isop.opc == Umpy)
                || (opc == Uand && expr->data.isop.opc == Uior)
                || (opc == Uior && expr->data.isop.opc == Uand)) {

            left = expr->data.isop.op1;
            right = expr->data.isop.op2;
            if (right->type == isconst && left->type == isop) {
                if ((((left->data.isop.opc == Uadd || left->data.isop.opc == Udec || left->data.isop.opc == Uinc || left->data.isop.opc == Usub) && expr->data.isop.opc == Umpy)
                            || (left->data.isop.opc == Uand && expr->data.isop.opc == Uior)
                            || (left->data.isop.opc == Uior && expr->data.isop.opc == Uand))
                        && left->count == 1) {
                    if (left->data.isop.opc == Udec || left->data.isop.opc == Uinc) {
                        if (mpyovfw(dtype, left->data.isop.datasize, right->data.isconst.number.intval)) {
                            return;
                        }
                        left->data.isop.op2 = right;
                        left = expr->data.isop.op1;
                        expr->data.isop.datasize = left->data.isop.datasize * right->data.isconst.number.intval;
                        expr->data.isop.op2 = NULL;
                        expr->data.isop.opc = left->data.isop.opc;
                        left->data.isop.opc = Umpy;

                    } else if (left->data.isop.op2->type == isconst) {
                        if (binaryovfw(dtype, expr->data.isop.opc, left->data.isop.op2, right)) {
                            return;
                        }
                        newExpr = appendchain(right->table_index);
                        if (outofmem) {
                            return;
                        }
                        binaryfold(expr->data.isop.opc, dtype, left->data.isop.op2, right, newExpr);
                        left->data.isop.op2 = right;
                        expr->data.isop.op2 = newExpr;
                        tempopc = expr->data.isop.opc;
                        expr->data.isop.opc = left->data.isop.opc;
                        left->data.isop.opc = tempopc;

                    } else if (left->data.isop.op1->type == isconst)  {
                        if (binaryovfw(dtype, expr->data.isop.opc, left->data.isop.op1, right)) {
                            return;
                        }
                        newExpr = appendchain(right->table_index);
                        if (outofmem) {
                            return;
                        }
                        binaryfold(expr->data.isop.opc, dtype, left->data.isop.op1, right, newExpr);
                        left->data.isop.op1 = left->data.isop.op2;
                        left->data.isop.op2 = right;
                        tempopc = left->data.isop.opc;
                        left->data.isop.opc = expr->data.isop.opc;
                        expr->data.isop.opc = tempopc;
                        expr->data.isop.op1 = newExpr;
                        expr->data.isop.op2 = left;
                    }
                }
            } else if (left->type == isconst && right->type == isop) {
                if ((((right->data.isop.opc == Uadd || right->data.isop.opc == Udec || right->data.isop.opc == Uinc || right->data.isop.opc == Usub) && expr->data.isop.opc == Umpy)
                            || (right->data.isop.opc == Uand && expr->data.isop.opc == Uior)
                            || (right->data.isop.opc == Uior && expr->data.isop.opc == Uand))
                        && right->count == 1) {
                    if (right->data.isop.opc == Udec || right->data.isop.opc == Uinc) {
                        if (mpyovfw(dtype, right->data.isop.datasize, left->data.isconst.number.intval)) {
                            return;
                        }
                        right->data.isop.op2 = right->data.isop.op1;
                        right->data.isop.op1 = left;
                        expr->data.isop.datasize = right->data.isop.datasize * left->data.isconst.number.intval;
                        expr->data.isop.opc = right->data.isop.opc;
                        right->data.isop.opc = Umpy;
                        expr->data.isop.op2 = NULL;
                        expr->data.isop.op1 = right;
                    } else if (right->data.isop.op1->type == isconst) {
                        if (binaryovfw(dtype, expr->data.isop.opc, left, right->data.isop.op1)) {
                            return;
                        }
                        newExpr = appendchain(right->table_index);
                        if (outofmem) {
                            return;
                        }
                        binaryfold(expr->data.isop.opc, dtype, left, right->data.isop.op1, newExpr);
                        right->data.isop.op1 = left;
                        expr->data.isop.op1 = newExpr;
                        tempopc = expr->data.isop.opc;
                        expr->data.isop.opc = right->data.isop.opc;
                        right->data.isop.opc = tempopc;

                    } else if (right->data.isop.op2->type == isconst) { 
                        if (binaryovfw(dtype, expr->data.isop.opc, left, right->data.isop.op2)) {
                            return;
                        }

                        newExpr = appendchain(right->table_index);
                        if (outofmem) {
                            return;
                        }
                        binaryfold(expr->data.isop.opc, dtype, left, right->data.isop.op2, newExpr);
                        right->data.isop.op2 = right->data.isop.op1;
                        right->data.isop.op1 = left;
                        tempopc = right->data.isop.opc;
                        right->data.isop.opc = expr->data.isop.opc;
                        expr->data.isop.opc = tempopc;
                        expr->data.isop.op1 = right;
                        expr->data.isop.op2 = newExpr;
                    }
                }
            }
        }
    }
}

/* 
00451764 restructure
00452DAC constarith
*/
void reduceixa(struct Expression *ixa) {
    int datasize;

    datasize = ixa->data.isop.datasize;
    if (datasize < 0) {
        datasize = -datasize;
    }
    if (datasize > 1) {
        ixa->data.isop.op2 = binopwithconst(Umpy, ixa->data.isop.op2, datasize);
        ixa->data.isop.datasize /= datasize;
    }
}

/* 
00451764 restructure
00452DAC constarith
*/
bool restructure(Uopcode opc, struct Expression **expr) {
    bool result = false;
    bool leftResult; // op1
    bool rightResult; // op2
    struct Expression *sp4C;
    struct Expression *left;
    struct Expression *right;
    struct Expression *expr2;
    struct Expression *expr_s0;

    if (outofmem) {
        return false;
    }

    expr_s0 = *expr;
    switch (expr_s0->type) {
        case isvar:
        case issvar:
        case isrconst:
            result = false;
            break;

        case islda:
            result = true;
            break;

        case isilda:
            result = false;
            break;

        case isconst:
            if (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt) {
                result = true;
            } else {
                result = false;
            }
            break;

        case isop:
            result = false;
            if (expr_s0->unk5 == 1) {
                return false;
            }

            switch (expr_s0->data.isop.opc) {
                case Uadd:
                case Usub:
                case Umpy:
                case Uixa:
                case Uint:
                case Uuni:
                    restructure(expr_s0->data.isop.opc, &expr_s0->data.isop.op2);
                    linearize(*expr);
                    leftResult = restructure(expr_s0->data.isop.opc, &expr_s0->data.isop.op1);
                    if (outofmem) {
                        return false;
                    }

                    if (expr_s0->data.isop.opc == Udec || expr_s0->data.isop.opc == Uinc) {
                        if (leftResult) {
                            if (unaryovfw(*expr)) {
                                result = false;
                                if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                    ovfwwarning(expr_s0->data.isop.opc);
                                }
                            } else {
                                result = true;
                                unaryfold(*expr);
                            }
                        } else {
                            result = false;
                            mergeconst(*expr);
                            if (outofmem) {
                                return false;
                            }

                            if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                                reduceixa(expr_s0->data.isop.op1);
                            }
                        }
                    } else if (expr_s0->data.isop.opc == Uint || expr_s0->data.isop.opc == Uuni) {
                        result = false;
                    } else if (leftResult && expr_s0->data.isop.op2->type == isconst) {
                        if (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt) {
                            if (expr_s0->data.isop.opc == Uixa) {
                                if (ixaovfw(*expr, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                                    result = false;
                                    ovfwwarning(Uixa);
                                } else {
                                    result = true;
                                    ixafold(*expr, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                                }
                            } else if (expr_s0->data.isop.op1->type == islda && expr_s0->data.isop.op2->type == islda) {
                                result = false;
                            } else if (binaryovfw(expr_s0->datatype, expr_s0->data.isop.opc, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                                result = false;
                                if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                    ovfwwarning(expr_s0->data.isop.opc);
                                }
                            } else {
                                result = true;
                                binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                            }
                        } else {
                            result = false;
                        }
                    } else if (!leftResult) {
                        result = false;
                        if (expr_s0->data.isop.op2->type == isconst) {
                            mergeconst(*expr);
                        }
                        if (outofmem) {
                            return false;
                        }
                        if (expr_s0->data.isop.opc != Uixa) {
                            distrlaw(opc, *expr);
                            if (outofmem) {
                                return false;
                            }
                            if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                                reduceixa(expr_s0->data.isop.op1);
                            }
                        }
                    } else {
                        result = false;
                        distrlaw(opc, *expr);
                        if (outofmem) {
                            return false;
                        }
                        if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                            reduceixa(expr_s0->data.isop.op1);
                        }
                    }
                    break;

                case Udiv:
                    if (expr_s0->datatype == Qdt || expr_s0->datatype == Rdt) {
                        restructure(expr_s0->data.isop.opc, &expr_s0->data.isop.op2);
                        linearize(*expr);
                        if (outofmem) {
                            return false;
                        }

                        result = false;
                        if (!restructure(expr_s0->data.isop.opc, &expr_s0->data.isop.op1) && expr_s0->data.isop.op2->type == isconst) {
                            mergeconst(*expr);
                        }
                    } else {
                        rightResult = restructure(Unop, &expr_s0->data.isop.op2);
                        if (rightResult && restructure(Unop, &expr_s0->data.isop.op1)) {
                            if (binaryovfw(expr_s0->datatype, expr_s0->data.isop.opc, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                                result = false;
                                if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                    ovfwwarning(expr_s0->data.isop.opc);
                                }
                            } else {
                                result = true;
                                binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                            }
                        } else {
                            result = false;
                        }
                    }
                    break;

                case Uand:
                case Uior:
                    restructure(expr_s0->data.isop.opc, &expr_s0->data.isop.op2);
                    linearize(*expr);
                    leftResult = restructure(expr_s0->data.isop.opc, &expr_s0->data.isop.op1);
                    if (outofmem) {
                        return false;
                    }

                    right = expr_s0->data.isop.op2;
                    if (leftResult && (right->type == isconst && (right->datatype == Adt || right->datatype == Hdt || right->datatype == Jdt || right->datatype == Ldt))) {
                        result = true;
                        binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, right, *expr);
                    } else if (leftResult) {
                        switch (expr_s0->data.isop.opc) {
                            case Uand:
                                if (expr_s0->data.isop.op1->data.isconst.number.intval == 0) {
                                    result = true;
                                    decreasecount(right);
                                    copycoderep(*expr, expr_s0->data.isop.op1);
                                } else if (expr_s0->data.isop.op1->data.isconst.number.intval == -1) {
                                    if (right->count != 1) {
                                        result = false;
                                    } else {
                                        result = false;
                                        right->count = expr_s0->count;
                                        right = expr_s0->data.isop.op2;
                                        sp4C = expr_s0->data.isop.op2;
                                        copycoderep(*expr, expr_s0->data.isop.op2);

                                        if (sp4C->type == isvar) {
                                            sp4C->var_access_list->data.var = *expr;
                                        } else if (sp4C->data.isop.opc == Uiequ ||
                                                   sp4C->data.isop.opc == Uigeq ||
                                                   sp4C->data.isop.opc == Uigrt ||
                                                   sp4C->data.isop.opc == Uildv ||
                                                   sp4C->data.isop.opc == Uileq ||
                                                   sp4C->data.isop.opc == Uiles ||
                                                   sp4C->data.isop.opc == Uilod ||
                                                   sp4C->data.isop.opc == Uineq ||
                                                   sp4C->data.isop.opc == Uirld ||
                                                   sp4C->data.isop.opc == Uirlv) {
                                            sp4C->var_access_list->data.var = *expr;
                                        }

                                        delentry(sp4C);
                                    }
                                } else {
                                    result = false;
                                }
                                break;

                            case Uior:
                                if (expr_s0->data.isop.op1->data.isconst.number.intval == -1) {
                                    result = true;
                                    decreasecount(right);
                                    copycoderep(*expr, expr_s0->data.isop.op1);
                                } else if (expr_s0->data.isop.op1->data.isconst.number.intval == 0) {
                                    if (right->count != 1) {
                                        result = false;
                                    } else {
                                        result = false;
                                        right->count = expr_s0->count;
                                        right = expr_s0->data.isop.op2;
                                        sp4C = expr_s0->data.isop.op2;
                                        copycoderep(*expr, expr_s0->data.isop.op2);
                                        if (sp4C->type == isvar) {
                                            sp4C->var_access_list->data.var = *expr;
                                        } else if (sp4C->data.isop.opc == Uiequ ||
                                                   sp4C->data.isop.opc == Uigeq ||
                                                   sp4C->data.isop.opc == Uigrt ||
                                                   sp4C->data.isop.opc == Uildv ||
                                                   sp4C->data.isop.opc == Uileq ||
                                                   sp4C->data.isop.opc == Uiles ||
                                                   sp4C->data.isop.opc == Uilod ||
                                                   sp4C->data.isop.opc == Uineq ||
                                                   sp4C->data.isop.opc == Uirld ||
                                                   sp4C->data.isop.opc == Uirlv) {
                                            sp4C->var_access_list->data.var = *expr;
                                        }
                                        delentry(sp4C);
                                    }
                                } else {
                                    result = false;
                                }
                                break;

                            default:
                                caseerror(1, 1245, "uoptloc.p", 9);
                                break;
                        }
                    } else if (right->type == isconst && (right->datatype == Adt || right->datatype == Hdt || right->datatype == Jdt || right->datatype == Ldt)) {
                        switch (expr_s0->data.isop.opc) {
                            case Uand:
                                if (right->data.isconst.number.intval == 0) {
                                    result = true;
                                    decreasecount(expr_s0->data.isop.op1);
                                    copycoderep(*expr, expr_s0->data.isop.op2);
                                } else if (right->data.isconst.number.intval == -1) {
                                    if (expr_s0->data.isop.op1->count != 1) {
                                        result = false;
                                    } else {
                                        expr_s0->data.isop.op1->count = expr_s0->count;
                                        result = false;
                                        sp4C = expr_s0->data.isop.op1;
                                        copycoderep(*expr, expr_s0->data.isop.op1);
                                        if (sp4C->type == isvar) {
                                            sp4C->var_access_list->data.var = *expr;
                                        } else if (sp4C->data.isop.opc == Uiequ ||
                                                   sp4C->data.isop.opc == Uigeq ||
                                                   sp4C->data.isop.opc == Uigrt ||
                                                   sp4C->data.isop.opc == Uildv ||
                                                   sp4C->data.isop.opc == Uileq ||
                                                   sp4C->data.isop.opc == Uiles ||
                                                   sp4C->data.isop.opc == Uilod ||
                                                   sp4C->data.isop.opc == Uineq ||
                                                   sp4C->data.isop.opc == Uirld ||
                                                   sp4C->data.isop.opc == Uirlv) {
                                            sp4C->var_access_list->data.var = *expr;
                                        }

                                        delentry(sp4C);
                                    }
                                } else {
                                    result = false;
                                }
                                break;

                            case Uior:
                                if (right->data.isconst.number.intval == -1) {
                                    result = true;
                                    decreasecount(expr_s0->data.isop.op1);
                                    copycoderep(*expr, expr_s0->data.isop.op2);
                                } else if (right->data.isconst.number.intval == 0) {
                                    if (expr_s0->data.isop.op1->count != 1) {
                                        result = false;
                                    } else {
                                        expr_s0->data.isop.op1->count = expr_s0->count;
                                        result = false;
                                        sp4C = expr_s0->data.isop.op1;
                                        copycoderep(*expr, expr_s0->data.isop.op1);
                                        if (sp4C->type == isvar) {
                                            sp4C->var_access_list->data.var = *expr;
                                        } else if (sp4C->data.isop.opc == Uiequ ||
                                                   sp4C->data.isop.opc == Uigeq ||
                                                   sp4C->data.isop.opc == Uigrt ||
                                                   sp4C->data.isop.opc == Uildv ||
                                                   sp4C->data.isop.opc == Uileq ||
                                                   sp4C->data.isop.opc == Uiles ||
                                                   sp4C->data.isop.opc == Uilod ||
                                                   sp4C->data.isop.opc == Uineq ||
                                                   sp4C->data.isop.opc == Uirld ||
                                                   sp4C->data.isop.opc == Uirlv) {
                                            sp4C->var_access_list->data.var = *expr;
                                        }
                                        delentry(sp4C);
                                    }
                                } else {
                                    result = false;
                                }
                                break;

                            default:
                                caseerror(1, 1291, "uoptloc.p", 9);
                                break;
                        }
                    } else {
                        result = false;
                    }
                    break;

                case Udif:
                case Uequ:
                case Ugeq:
                case Ugrt:
                case Uinn:
                case Uleq:
                case Ules:
                case Umax:
                case Umin:
                case Umod:
                case Umus:
                case Uneq:
                case Urem:
                case Ushl:
                case Ushr:
                case Usign:
                case Uxor:
                    leftResult = restructure(Unop, &expr_s0->data.isop.op1);
                    if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op1);
                    }

                    rightResult = restructure(Unop, &expr_s0->data.isop.op2);
                    if (outofmem) {
                        return false;
                    }

                    if (expr_s0->data.isop.op2->type == isop && expr_s0->data.isop.op2->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op2);
                    }

                    if (leftResult && rightResult && (expr_s0->data.isop.opc != Udif && expr_s0->data.isop.opc != Uinn && expr_s0->data.isop.opc != Umus)) {
                        if (expr_s0->data.isop.op1->type == islda && expr_s0->data.isop.op2->type == islda
                                && expr_s0->data.isop.op2->data.islda_isilda.var_data.blockno != expr_s0->data.isop.op1->data.islda_isilda.var_data.blockno) {
                            result = false;
                        } else if (binaryovfw(expr_s0->datatype, expr_s0->data.isop.opc, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                            result = false;
                            if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(expr_s0->data.isop.opc);
                            }
                        } else {
                            result = true;
                            binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                        }
                    } else {
                        result = false;
                    }
                    break;

                case Uildv:
                case Uilod:
                    result = false;
                    if (restructure(Unop, &expr_s0->data.isop.op1)) {
                        if (expr_s0->data.isop.opc == Uilod && expr_s0->data.isop.op1->type == islda) {
                            if (expr_s0->data.isop.op1->data.islda_isilda.var_data.memtype != Smt || is_gp_relative(expr_s0->data.isop.op1->data.islda_isilda.var_data.blockno) || !dokpicopt) {
                                *expr = ilodfold(*expr);
                                return false;
                            }
                        }
                    } else if (expr_s0->data.isop.op1->type == isop && (expr_s0->data.isop.op1->data.isop.opc == Udec || expr_s0->data.isop.op1->data.isop.opc == Uinc)) {
                        if (expr_s0->data.isop.op1->data.isop.opc == Udec) {
                            expr_s0->data.isop.datasize -= expr_s0->data.isop.op1->data.isop.datasize;
                        } else {
                            expr_s0->data.isop.datasize += expr_s0->data.isop.op1->data.isop.datasize;
                        }

                        expr2 = expr_s0->data.isop.op1;
                        expr_s0->data.isop.op1 = expr_s0->data.isop.op1->data.isop.op1;
                        expr_s0->data.isop.op1->count += 1;
                        decreasecount(expr2);
                    } else if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op1);
                    }
                    break;

                case Uirld:
                case Uirlv:
                    restructure(Unop, &expr_s0->data.isop.op1);
                    result = false;
                    break;

                case Ucvt:
                    if (restructure(Unop, &expr_s0->data.isop.op1)
                            && (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt)
                            && (expr_s0->data.isop.aux.cvtfrom == Adt || expr_s0->data.isop.aux.cvtfrom == Hdt || expr_s0->data.isop.aux.cvtfrom == Jdt || expr_s0->data.isop.aux.cvtfrom == Ldt)) {
                        if (expr_s0->data.isop.op1->type == islda) {
                            result = false;
                        } else {
                            result = true;
                            cvtfold(*expr);
                        }
                    } else {
                        result = false;
                    }
                    break;

                case Uchkn:
                case Urnd:
                case Usgs:
                case Utyp:
                    if (restructure(Unop, &expr_s0->data.isop.op1)) {
                        noop = false;
                    }
                    result = false;
                    break;

                case Uabs:
                case Uchkh:
                case Uchkl:
                case Ucvtl:
                case Ulnot:
                case Uneg:
                case Unot:
                case Uodd:
                case Usqr:
                    if (restructure(Unop, &expr_s0->data.isop.op1)
                            && (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt)) {
                        if (unaryovfw(*expr)) {
                            result = false;
                            if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(expr_s0->data.isop.opc);
                            }
                        } else {
                            result = true;
                            unaryfold(*expr);
                        }
                    } else {
                        result = false;
                    }
                    break;

                case Udec:
                case Uinc:
                    if (restructure(expr_s0->data.isop.opc, &expr_s0->data.isop.op1)) {
                        if (unaryovfw(*expr)) {
                            result = false;
                            if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(expr_s0->data.isop.opc);
                            }
                        } else {
                            result = true;
                            unaryfold(*expr);
                        }
                    } else {
                        result = false;
                        mergeconst(*expr);
                        if (outofmem) {
                            return false;
                        }

                        if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                            reduceixa(expr_s0->data.isop.op1);
                        }
                    }
                    break;

                case Uadj:
                case Usqrt:
                    restructure(Unop, &expr_s0->data.isop.op1);
                    result = false;
                    break;

                case Uiequ:
                case Uigeq:
                case Uigrt:
                case Uileq:
                case Uiles:
                case Uineq:
                    restructure(Unop, &expr_s0->data.isop.op1);
                    if (outofmem) {
                        return false;
                    }

                    if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op1);
                    }
                    restructure(Unop, &expr_s0->data.isop.op2);
                    if (outofmem) {
                        return false;
                    }

                    if (expr_s0->data.isop.op2->type == isop && expr_s0->data.isop.op2->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op2);
                    } else {
                        result = false;
                    }
                    break;

                default:
                    caseerror(1, 1124, "uoptloc.p", 9);
                    break;
            }

            if (expr_s0->type == isop) {
                expr_s0->unk5 = true;
            }
            break;

        case dumped:
        default:
            caseerror(1, 1113, "uoptloc.p", 9);
            break;
    }

    return result;
}

/* 
00456310 func_00456310
*/
void constarith(void) {
    int oldpage = curlocpg;
    int oldline = curlocln;
    struct Statement *stmt;

    curlocpg = 0;
    curlocln = 0;

    for (stmt = curgraphnode->stat_head; stmt != NULL; stmt = stmt->next) {
        switch (stmt->opc) {
            case Ustr:
                restructure(Unop, &stmt->expr->data.isvar_issvar.assigned_value);
                if (stmt->expr->data.isvar_issvar.assigned_value->type == isop && stmt->expr->data.isvar_issvar.assigned_value->data.isop.opc == Uixa) {
                    reduceixa(stmt->expr->data.isvar_issvar.assigned_value);
                }
                break;

            default:
                restructure(Unop, &stmt->expr);
                if (stmt->expr->type == isop && stmt->expr->data.isop.opc == Uixa) {
                    reduceixa(stmt->expr);
                }
                if (stmt->opc == Uistr || stmt->opc == Uistv || stmt->opc == Umov || stmt->opc == Umovv) {
                    restructure(Unop, &stmt->u.store.expr);
                    if (stmt->opc == Umov || stmt->opc == Umovv) {
                        if (stmt->u.store.expr->type == isop && stmt->u.store.expr->data.isop.opc == Uixa) {
                            reduceixa(stmt->u.store.expr);
                        }
                    }
                    if (stmt->opc == Uistr && stmt->expr->type == islda && (stmt->expr->data.islda_isilda.var_data.memtype != Smt || is_gp_relative(stmt->expr->data.islda_isilda.var_data.blockno, stmt->expr) || !dokpicopt)) {
                        istrfold(stmt);
                    }
                    
                }
                break;

            case Uaent:
            case Ubgnb:
            case Ucia:
            case Uclab:
            case Uclbd:
            case Uctrl:
            case Ucubd:
            case Ucup:
            case Udef:
            case Udup:
            case Uendb:
            case Uicuf:
            case Ulab:
            case Ulbdy:
            case Ulbgn:
            case Ulend:
            case Ultrm:
            case Umst:
            case Unop:
            case Uret:
            case Ustep:
            case Uswp:
            case Uujp:
            case Uxpar:
            case Urcuf:
                break;

            case Ufjp:
            case Utjp:
                if (restructure(Unop, &stmt->expr)) {
                    if (stmt->expr->type == isconst) {
                        if ((stmt->opc == Ufjp && stmt->expr->data.isconst.number.intval != false) || (stmt->opc == Utjp && stmt->expr->data.isconst.number.intval == false)) {
                            stmt->opc = Unop;
                            curgraphnode->successors->graphnode->predecessors = curgraphnode->successors->graphnode->predecessors->next;
                            curgraphnode->successors = curgraphnode->successors->next;
                        } else {
                            stmt->opc = Uujp;
                            filteringout = true;
                        }
                    }
                }
                break;

            case Uchkt:
                if (restructure(Unop, &stmt->expr) && stmt->expr->data.isconst.number.intval == true) {
                    stmt->opc = Unop;
                }
                break;


            case Utpeq:
            case Utpgt:
            case Utple:
            case Utplt:
            case Utpne:
                if (restructure(Unop, &stmt->expr) && restructure(Unop, &stmt->u.trap.expr2)) {
                    bool outofbounds;

                    if (stmt->u.trap.dtype == Qdt || stmt->u.trap.dtype == Rdt || stmt->u.trap.dtype == Sdt) {
                        break;
                    }

                    // -_-
                    switch (stmt->opc) {
                        case Utpeq:
                            outofbounds = stmt->u.trap.expr2->data.isconst.number.intval == stmt->expr->data.isconst.number.intval;
                            break;

                        case Utpge:
                            if (stmt->u.trap.dtype == Jdt) {
                                outofbounds = !(stmt->expr->data.isconst.number.intval < stmt->u.trap.expr2->data.isconst.number.intval);
                            } else {
                                outofbounds = !(stmt->expr->data.isconst.number.uintval < stmt->u.trap.expr2->data.isconst.number.uintval);
                            }
                            break;

                        case Utpgt:
                            if (stmt->u.trap.dtype == Jdt) {
                                outofbounds = stmt->u.trap.expr2->data.isconst.number.intval < stmt->expr->data.isconst.number.intval;
                            } else {
                                outofbounds = stmt->u.trap.expr2->data.isconst.number.uintval < stmt->expr->data.isconst.number.uintval;
                            }
                            break;

                        case Utple:
                            if (stmt->u.trap.dtype == Jdt) {
                                outofbounds = !(stmt->u.trap.expr2->data.isconst.number.intval < stmt->expr->data.isconst.number.intval);
                            } else {
                                outofbounds = !(stmt->u.trap.expr2->data.isconst.number.uintval < stmt->expr->data.isconst.number.uintval);
                            }
                            break;

                        case Utplt:
                            if (stmt->u.trap.dtype == Jdt) {
                                outofbounds = stmt->expr->data.isconst.number.intval < stmt->u.trap.expr2->data.isconst.number.intval;
                            } else {
                                outofbounds = stmt->expr->data.isconst.number.uintval < stmt->u.trap.expr2->data.isconst.number.uintval;
                            }
                            break;

                        case Utpne:
                            outofbounds = stmt->u.trap.expr2->data.isconst.number.intval != stmt->expr->data.isconst.number.intval;
                            break;

                        default:
                            caseerror(1, 1541, "uoptloc.p", 9);
                            break;
                    }

                    if (outofbounds) {
                        boundswarning();
                    } else {
                        stmt->opc = Unop;
                    }
                    
                }
                break;

            case Uloc:
                if (stmt->opc == Uloc) {
                    curlocpg = stmt->u.loc.page;
                    curlocln = stmt->u.loc.line;
                }
                break;
        }

        if (outofmem) {
            return;
        }
    }

    curlocpg = oldpage;
    curlocln = oldline;
}
