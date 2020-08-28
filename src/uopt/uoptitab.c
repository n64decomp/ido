#include <string.h>
#include "libxmalloc/xmalloc.h"
#include "uoptdata.h"
#include "uoptitab.h"
#include "uoptions.h"
#include "uoptcontrolflow.h"
#include "libu/libu.h"
#include "uoptkill.h"
#include "uoptutil.h"
#include "uoptmtag.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

/*
# 004150E4 func_004150E4
# 0041550C func_0041550C
# 004175BC copypropagate
# 00445E44 exprimage
# 0046BA10 change_to_const_eq
# 0046BD90 change_to_var_eq
*/
int isconstihash(int value) {
    int hash = value % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 0041550C func_0041550C
# 00445E44 exprimage
*/
int realihash(union Constant value) {
    // only the u16 at value+0x2 is used, but 8 bytes are always passed to this function, see func_0041550C asm
    int hash = ((value.real.len * value.real.len) << 6) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 0041550C func_0041550C
# 004175BC copypropagate
# 0042020C gen_static_link
# 00445E44 exprimage
# 004471AC codeimage
*/
int isvarihash(struct VariableInner var) {
    int hash = (((var.memtype << 6) + var.blockno + var.addr) << 4) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 0041550C func_0041550C
# 00445E44 exprimage
# 0046BA10 change_to_const_eq
*/
int isldaihash(struct VariableInner var, unsigned int addr) {
    int hash = (((var.memtype << 6) + var.blockno + addr) << 4) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 00410204 codemotion
# 0041550C func_0041550C
# 004175BC copypropagate
# 00445E44 exprimage
# 004471AC codeimage
# 0046BA10 change_to_const_eq
# 0046BD90 change_to_var_eq
*/
int isopihash(Uopcode opc, struct IChain *op1, struct IChain *op2) {
    int hash;

    if (op2 != NULL) {
        hash = (((opc << 3) + op1->table_index * op2->table_index +
                             (op1->chain_index + 2) * (op2->chain_index + 2)) * 10) % 0x653;
    } else {
        hash = (((opc << 3) + op1->table_index * (op1->chain_index + 2)) * 10) % 0x653;
    }
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 004150E4 func_004150E4
# 0041550C func_0041550C
# 00445AEC trep_image
# 00445E44 exprimage
*/
int opvalihash(Uopcode opc, struct IChain *ichain, unsigned short number) {
    int hash = ((opc * 8) + ((ichain->table_index + number) * (ichain->chain_index + 2))) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
00444A84 isearchloop
00445AEC trep_image
00446E18 searchstore
*/
struct IChain *appendichain(unsigned short table_index, bool not_isop) {
    struct IChain *pos;
    struct IChain *new_entry;
    unsigned short chain_index;

    pos = itable[table_index];
    if (pos == NULL) {
        new_entry = (struct IChain *)alloc_new(sizeof(struct IChain), &perm_heap);
        pos = new_entry;
        itable[table_index] = new_entry;
        chain_index = 0;
    } else {
        while (pos->next != NULL) {
            pos = pos->next;
        }
        new_entry = (struct IChain *)alloc_new(sizeof(struct IChain), &perm_heap);
        pos->next = new_entry;
        chain_index = pos->chain_index + 1;
    }
    if (new_entry == NULL) {
        outofmem = true;
        return NULL; // originally some unused stack slot value was returned
    }
#ifdef AVOID_UB
    *new_entry = (struct IChain){0};
    new_entry->chain_index = chain_index;
    new_entry->table_index = table_index;
#else
    new_entry->type = empty;
    new_entry->chain_index = chain_index;
    new_entry->next = NULL;
    new_entry->stat = NULL;
    new_entry->unk8 = 0;
    new_entry->table_index = table_index;
#endif
    return new_entry;
}

/*
# 004150E4 func_004150E4
# 0041550C func_0041550C
# 004175BC copypropagate
# 00445E44 exprimage
# 004471AC codeimage
# 0046BA10 change_to_const_eq
# 0046BD90 change_to_var_eq
*/
struct IChain *isearchloop(unsigned short hash, struct Expression *expr, struct IChain *op1, struct IChain *op2) {
    struct IChain *ichain; // s0
    bool found; // t0, sp37

    ichain = itable[hash];
    found = false;
    while (ichain != NULL && found == false) {
        switch (expr->type) {
            case isconst:
                if (ichain->type != isconst || ichain->dtype != expr->datatype) {
                    break;
                }
                switch (ichain->dtype) {
                    case Adt:
                    case Fdt:
                    case Gdt:
                    case Hdt:
                    case Jdt:
                    case Ldt:
                    case Ndt:
                        if (expr->data.isconst.number.intval == ichain->isconst.number.intval) {
                            found = true;
                        }
                        break;

                    case Idt:
                    case Kdt:
                        if (ichain->isconst.number.intval == expr->data.isconst.number.intval &&
                                ichain->isconst.number.intval2 == expr->data.isconst.number.intval2) {
                            found = true;
                        }
                        break;

                    case Mdt:
                        if (expr->data.isconst.number.string.disp == ichain->isconst.number.string.disp) {
                            found = true;
                        }
                        break;

                    default:    // Cdt, Pdt, Qdt, Rdt, Sdt, Wdt, Xdt, Zdt
                        if (expr->data.isconst.number.real.disp == ichain->isconst.number.real.disp) {
                            found = true;
                        }
                        break;
                }
                break;

            case isrconst:
                if (ichain->type != isrconst || ichain->dtype != expr->datatype) {
                    break;
                }
                if (expr->data.isrconst.unk20 == ichain->isrconst.unk10) {
                    found = true;
                }
                break;

            case islda:
                if (ichain->type != islda || expr->data.islda_isilda.addr != ichain->islda_isilda.addr) {
                    break;
                }
                if (expr->data.islda_isilda.var_data.blockno == ichain->islda_isilda.var_data.blockno) {
                    found = true;
                }
                break;

            case isilda:
                if (ichain->type != isilda ||
                        expr->data.islda_isilda.addr != ichain->islda_isilda.addr ||
                        expr->data.islda_isilda.size != ichain->islda_isilda.size) {
                    break;
                }
                if (addreq(ichain->islda_isilda.var_data, expr->data.islda_isilda.var_data)) {
                    found = true;
                }
                break;

            case isvar:
                if (ichain->type != isvar) {
                    break;
                }
                if (addreq(ichain->isvar_issvar.var_data, expr->data.isvar_issvar.var_data)) {
                    found = true;
                }
                break;

            case issvar:
                if (ichain->type != issvar) {
                    break;
                }
                if (addreq(ichain->isvar_issvar.var_data, expr->data.isvar_issvar.var_data)) {
                    found = true;
                }
                break;

            case isop:
                if (ichain->type != isop || ichain->isop.opc != expr->data.isop.opc) {
                    break;
                }
                switch (expr->data.isop.opc) {
                    // Commutative ops with overflow
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
                        if ((ichain->isop.op1 == op1 && ichain->isop.op2 == op2) ||
                                (ichain->isop.op1 == op2 && ichain->isop.op2 == op1)) {
                            if (expr->data.isop.aux2.v1.overflow_attr == ichain->isop.overflow_attr) {
                                found = true;
                            }
                        }
                        break;

                    // Commutative ops
                    case Uequ:
                    case Uneq:
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if ((ichain->isop.op1 == op1 && ichain->isop.op2 == op2) ||
                                (ichain->isop.op1 == op2 && ichain->isop.op2 == op1)) {
                            found = true;
                        }
                        break;

                    // Noncommutative ops with overflow
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
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if (ichain->isop.op1 == op1 && ichain->isop.op2 == op2) {
                            if (expr->data.isop.aux2.v1.overflow_attr == ichain->isop.overflow_attr) {
                                found = true;
                            }
                        }
                        break;

                    // Noncommutative ops
                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if (ichain->isop.op1 == op1 && ichain->isop.op2 == op2) {
                            found = true;
                        }
                        break;

                    case Uinn:
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if (ichain->isop.op1 == op1 && ichain->isop.op2 == op2) {
                            if (expr->data.isop.aux2.v1.unk3C == ichain->isop.s.bit) {
                                found = true;
                            }
                        }
                        break;

                    case Uixa:
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if (expr->data.isop.datasize != ichain->isop.size) {
                            break;
                        }
                        if (ichain->isop.op1 == op1 && ichain->isop.op2 == op2) {
                            found = true;
                        }
                        break;

                    // Unary ops with overflow
                    case Uabs:
                    case Ulnot:
                    case Uneg:
                    case Unot:
                    case Uodd:
                    case Usgs:
                    case Usqr:
                    case Usqrt:
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if (ichain->isop.op1 != op1) {
                            break;
                        }
                        if (expr->data.isop.aux2.v1.overflow_attr != ichain->isop.overflow_attr) {
                            break;
                        }
                        found = true;
                        break;

                    case Uchkh:
                    case Uchkl:
                    case Ucvtl:
                    case Udec:
                    case Uinc:
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if (ichain->isop.op1 != op1) {
                            break;
                        }
                        if (expr->data.isop.datasize != ichain->isop.size) {
                            break;
                        }
                        if (expr->data.isop.aux2.v1.overflow_attr != ichain->isop.overflow_attr) {
                            break;
                        }
                        found = true;
                        break;

                    case Ucvt:
                    case Urnd:
                    case Utyp:
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if (expr->data.isop.aux.cvtfrom != ichain->isop.cvtfrom) {
                            break;
                        }
                        if (ichain->isop.op1 != op1) {
                            break;
                        }
                        if (expr->data.isop.aux2.v1.overflow_attr != ichain->isop.overflow_attr) {
                            break;
                        }
                        found = true;
                        break;

                    case Uadj:
                        if (expr->data.isop.datasize != ichain->isop.size) {
                            break;
                        }
                        if (expr->data.isop.aux2.v1.unk3C != ichain->isop.s.bit) {
                            break;
                        }
                        if (ichain->isop.op1 != op1) {
                            break;
                        }
                        found = true;
                        break;

                    case Uchkn:
                        if (ichain->isop.op1 == op1) {
                            found = true;
                        }
                        break;

                    case Uildv:
                    case Uilod:
                    case Uirld:
                    case Uirlv:
                        if (expr->datatype != ichain->dtype) {
                            break;
                        }
                        if (ichain->isop.op1 != op1) {
                            break;
                        }
                        if (expr->data.isop.datasize != ichain->isop.size) {
                            break;
                        }
                        if (expr->data.isop.aux2.v1.unk3C != ichain->isop.s.bit) {
                            break;
                        }
                        found = true;
                        break;

                    case Uiequ:
                    case Uineq:
                        if ((ichain->isop.op1 == op1 && ichain->isop.op2 == op2) ||
                            (ichain->isop.op1 == op2 && ichain->isop.op2 == op1)) {
                            if (ichain->isop.size == expr->data.isop.datasize) {
                                found = true;
                            }
                        }
                        break;

                    case Uigeq:
                    case Uigrt:
                    case Uileq:
                    case Uiles:
                        if (ichain->isop.op1 == op1 && ichain->isop.op2 == op2) {
                            if (ichain->isop.size == expr->data.isop.datasize) {
                                found = true;
                            }
                        }
                        break;

                    default:
                        caseerror(1, 0xB1, "uoptitab.p", 0xA);
                        break;

                }
                break;

            case dumped:
            default:
                caseerror(1, 0x7B, "uoptitab.p", 0xA);
                break;
        }

        if (found == false) {
            ichain = ichain->next;
        }
    }

    expr->type = expr->type;
    if (found == false) {
        ichain = appendichain(hash, expr->type != isop);
        if (ichain == NULL) {
            outofmem = true;
            return ichain; // used to return sp3C
        }
        ichain->type = expr->type;
        ichain->dtype = expr->datatype;
        switch (expr->type) {
            case dumped:
                write_string(err.c_file, "Warning: kind dumped: ignored", 0x1DU, 0x1DU);
                writeln(err.c_file);
                break;

            case isconst:
                ichain->isconst.number = expr->data.isconst.number;
                ichain->isconst.size   = expr->data.isconst.size;
                break;

            case isrconst:
                ichain->isconst.number = expr->data.isconst.number;
                break;

            case islda:
                ichain->islda_isilda.addr = expr->data.islda_isilda.addr;
                ichain->islda_isilda.var_data = expr->data.islda_isilda.var_data;
                ichain->islda_isilda.size = expr->data.islda_isilda.size;
                break;

            case isilda:
                ichain->islda_isilda.addr = expr->data.islda_isilda.addr;
                ichain->islda_isilda.var_data = expr->data.islda_isilda.var_data;
                ichain->islda_isilda.size = expr->data.islda_isilda.size;

                ichain->islda_isilda.ichain = expr->data.islda_isilda.unk34->ichain;
                break;

            case isvar:
                ichain->isvar_issvar.var_data = expr->data.isvar_issvar.var_data;
                ichain->isvar_issvar.size = expr->data.isvar_issvar.size;

                // The two bools' order is swapped!
                ichain->isvar_issvar.unk19 = expr->data.isvar_issvar.unk22;
                ichain->isvar_issvar.unk1A = expr->data.isvar_issvar.unk21;
                ichain->expr = expr;
                break;

            case issvar:
                ichain->isvar_issvar.var_data = expr->data.isvar_issvar.var_data;
                ichain->isvar_issvar.size = expr->data.isvar_issvar.size;

                // The two bools' order is swapped!
                ichain->isvar_issvar.unk19 = expr->data.isvar_issvar.unk22;
                ichain->isvar_issvar.unk1A = expr->data.isvar_issvar.unk21;

                ichain->expr = expr;
                ichain->isvar_issvar.ichain = expr->data.isvar_issvar.unk24->ichain;
                break;

            case isop:
                ichain->isop.op1 = op1;
                ichain->isop.op2 = op2;
                ichain->isop.opc = expr->data.isop.opc;

                ichain->isop.datatype = expr->data.isop.datatype;

                switch (expr->data.isop.opc) {
                    case Uequ:
                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                    case Uneq:
                        break;

                    default:
                        ichain->isop.overflow_attr = expr->data.isop.aux2.v1.overflow_attr;
                        break;
                }

                ichain->isop.s.word = 0;

                switch (expr->data.isop.opc) {
                    case Udif:
                    case Uint:
                    case Umus:
                    case Usgs:
                    case Uuni:
                        ichain->isop.size = expr->data.isop.datasize;
                        break;

                    case Uinn:
                        ichain->isop.size = expr->data.isop.datasize;
                        ichain->isop.s.bit = expr->data.isop.aux2.v1.unk3C;
                        break;

                    case Uixa:
                        ichain->isop.size = expr->data.isop.datasize;
                        break;

                    case Uchkh:
                    case Uchkl:
                    case Ucvtl:
                    case Udec:
                    case Uinc:
                        ichain->isop.size = expr->data.isop.datasize;
                        break;

                    case Ucvt:
                    case Urnd:
                    case Utyp:
                        ichain->isop.cvtfrom = expr->data.isop.aux.cvtfrom;
                        break;

                    case Uadj:
                        ichain->isop.size = expr->data.isop.datasize;
                        ichain->isop.s.bit = expr->data.isop.aux2.v1.unk3C;
                        break;

                    case Uildv:
                    case Uilod:
                    case Uirld:
                    case Uirlv:
                        ichain->isop.size = expr->data.isop.datasize;
                        ichain->isop.s.bit = expr->data.isop.aux2.v1.unk3C;
                        ichain->isop.unk13 = expr->data.isop.aux2.v1.unk3F;
                        ichain->expr = expr;

                        // what is this... and why is the order swapped?
                        // asm used lw then sh, not lhu
                        ichain->isop.s.unk2 = expr->data.isop.aux.unk38_int;
                        break;

                    case Uiequ:
                    case Uineq:
                        ichain->isop.size = expr->data.isop.datasize;
                        ichain->expr = expr;
                        ichain->isop.s.bit = expr->data.isop.aux2.v1.unk3C;
                        break;

                    case Uigeq:
                    case Uigrt:
                    case Uileq:
                    case Uiles:
                        ichain->isop.size = expr->data.isop.datasize;
                        ichain->expr = expr;
                        ichain->isop.s.bit = expr->data.isop.aux2.v1.unk3C;
                        break;

                    // Ignored ops
                    case Uabs:
                    case Uadd:
                    case Uand:
                    case Ubsub:
                    case Uchkn:
                    case Udiv:
                    case Uequ:
                    case Ugeq:
                    case Ugrt:
                    case Uior:
                    case Ulbd:
                    case Uleq:
                    case Ules:
                    case Ulnot:
                    case Umax:
                    case Umin:
                    case Umod:
                    case Umpy:
                    case Uneg:
                    case Uneq:
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
                        caseerror(1, 0x135, "uoptitab.p" /* not null-terminated */, 0xA);
                        break;
                }
                break;

            default:
                caseerror(1, 0x100, "uoptitab.p" /* not null-terminated */, 0xA);
        }

        if (expr->type == islda || expr->type == isconst) {
            ichain->bitpos = -1;
        } else if (expr->type == isvar ||
                expr->type == isop ||
                expr->type == isilda ||
                expr->type == issvar) {

            ichain->bitpos = newbit(ichain, 0);

            if (expr->type == isvar || expr->type == issvar) {
                setbit(&varbits, ichain->bitpos);
                ichain->isvar_issvar.assignbit = newbit(ichain, 0);
                setbit(&asgnbits, ichain->isvar_issvar.assignbit);

                if (expr->type == issvar) {
                    setbit(&slvarbits, ichain->bitpos);
                    setbit(&slasgnbits, ichain->isvar_issvar.assignbit);
                }
            } else if (expr->type == isop) {
                // non floating-point multiplies
                if (expr->data.isop.opc == Umpy &&
                        expr->datatype != Qdt && expr->datatype != Rdt) {

                    if (ichain->isop.op1->type != isconst ||
                            ichain->isop.op2->type != isconst) {

                        if ((ichain->isop.op1->type == isconst ||
                             ichain->isop.op1->type == isvar   ||
                             ichain->isop.op1->type == issvar)
                             || // bug from short-circuit eval?
                                // if op1 is const,var,svar, op2 can be any type
                            (ichain->isop.op2->type == isconst ||
                             ichain->isop.op2->type == isvar   ||
                             ichain->isop.op2->type == issvar)) {
                            if (in_indmults(ichain->isop.op1) && in_indmults(ichain->isop.op2)) {
                                setbit(&indmults, ichain->bitpos);
                            }
                        }
                    }
                } else if ((expr->data.isop.opc == Uadd ||
                            expr->data.isop.opc == Udec ||
                            expr->data.isop.opc == Uinc ||
                            expr->data.isop.opc == Uixa ||
                            expr->data.isop.opc == Uneg ||
                            expr->data.isop.opc == Usub) &&
                        (expr->datatype != Qdt && expr->datatype != Rdt)) {
                    if (in_indmults(ichain->isop.op1) && in_indmults(ichain->isop.op2)) {
                        setbit(&indmults, ichain->bitpos);
                    }
                } else if (expr->data.isop.opc == Uilod) {
                    if (in_indmults(ichain->isop.op1)) {
                        setbit(&indmults, ichain->bitpos);
                    }
                } else if ((expr->data.isop.opc == Uequ ||
                            expr->data.isop.opc == Ugeq ||
                            expr->data.isop.opc == Ugrt ||
                            expr->data.isop.opc == Uinn ||
                            expr->data.isop.opc == Uleq ||
                            expr->data.isop.opc == Ules ||
                            expr->data.isop.opc == Uneq)) {
                    setbit(&boolexp, ichain->bitpos);
                }
            }
        }
    } else {
        if (expr->type == islda) {
            int expr_varlen = expr->data.islda_isilda.var_data.addr + expr->data.islda_isilda.size;

            if ((ichain->islda_isilda.var_data.addr + ichain->isvar_issvar.size) < expr_varlen) {
                ichain->islda_isilda.size = (expr_varlen - ichain->islda_isilda.var_data.addr);
            }

            if (expr->data.islda_isilda.var_data.addr < ichain->islda_isilda.var_data.addr) {
                ichain->islda_isilda.var_data.addr = expr->data.islda_isilda.var_data.addr;
            }
        }
    }

    expr->ichain = ichain;
    return ichain;
}

__asm__(R""(
.set noat
.set noreorder

glabel trep_image
    .ent trep_image
    # 0041550C func_0041550C
    # 00445E44 exprimage
    # 0046BD90 change_to_var_eq
/* 00445AEC 3C1C0FBD */  .cpload $t9
/* 00445AF0 279C47A4 */
/* 00445AF4 0399E021 */
/* 00445AF8 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00445AFC AFA50044 */  sw    $a1, 0x44($sp)
/* 00445B00 93AE0047 */  lbu   $t6, 0x47($sp)
/* 00445B04 AFB00014 */  sw    $s0, 0x14($sp)
/* 00445B08 00808025 */  move  $s0, $a0
/* 00445B0C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00445B10 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00445B14 AFA60048 */  sw    $a2, 0x48($sp)
/* 00445B18 11C00003 */  beqz  $t6, .L00445B28
/* 00445B1C AFA7004C */   sw    $a3, 0x4c($sp)
/* 00445B20 10000002 */  b     .L00445B2C
/* 00445B24 8C870024 */   lw    $a3, 0x24($a0)
.L00445B28:
/* 00445B28 8E070028 */  lw    $a3, 0x28($s0)
.L00445B2C:
/* 00445B2C 90EF0000 */  lbu   $t7, ($a3)
/* 00445B30 3C011200 */  lui   $at, 0x1200
/* 00445B34 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00445B38 0018C823 */  negu  $t9, $t8
/* 00445B3C 03215024 */  and   $t2, $t9, $at
/* 00445B40 01EA5804 */  sllv  $t3, $t2, $t7
/* 00445B44 05610016 */  bgez  $t3, .L00445BA0
/* 00445B48 00000000 */   nop
/* 00445B4C 8CE20030 */  lw    $v0, 0x30($a3)
/* 00445B50 10400013 */  beqz  $v0, .L00445BA0
/* 00445B54 00000000 */   nop
/* 00445B58 8F8389CC */  lw     $v1, %got(nocopy)($gp)
/* 00445B5C 8C630000 */  lw    $v1, ($v1)
/* 00445B60 1062000F */  beq   $v1, $v0, .L00445BA0
/* 00445B64 00000000 */   nop
/* 00445B68 904C0000 */  lbu   $t4, ($v0)
.L00445B6C:
/* 00445B6C 3C011200 */  lui   $at, 0x1200
/* 00445B70 00403825 */  move  $a3, $v0
/* 00445B74 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 00445B78 000D7023 */  negu  $t6, $t5
/* 00445B7C 01C1C024 */  and   $t8, $t6, $at
/* 00445B80 0198C804 */  sllv  $t9, $t8, $t4
/* 00445B84 07210006 */  bgez  $t9, .L00445BA0
/* 00445B88 00000000 */   nop
/* 00445B8C 8C420030 */  lw    $v0, 0x30($v0)
/* 00445B90 10400003 */  beqz  $v0, .L00445BA0
/* 00445B94 00000000 */   nop
/* 00445B98 5462FFF4 */  bnel  $v1, $v0, .L00445B6C
/* 00445B9C 904C0000 */   lbu   $t4, ($v0)
.L00445BA0:
/* 00445BA0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00445BA4 24040030 */  li    $a0, 48
/* 00445BA8 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00445BAC 0320F809 */  jalr  $t9
/* 00445BB0 AFA7002C */   sw    $a3, 0x2c($sp)
/* 00445BB4 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00445BB8 3C016400 */  lui   $at, 0x6400
/* 00445BBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445BC0 90E30000 */  lbu   $v1, ($a3)
/* 00445BC4 AFA20030 */  sw    $v0, 0x30($sp)
/* 00445BC8 2C6A0020 */  sltiu $t2, $v1, 0x20
/* 00445BCC 000A7823 */  negu  $t7, $t2
/* 00445BD0 01E15824 */  and   $t3, $t7, $at
/* 00445BD4 006B6804 */  sllv  $t5, $t3, $v1
/* 00445BD8 05A10003 */  bgez  $t5, .L00445BE8
/* 00445BDC 24010003 */   li    $at, 3
/* 00445BE0 1000008B */  b     .L00445E10
/* 00445BE4 AC400000 */   sw    $zero, ($v0)
.L00445BE8:
/* 00445BE8 10610007 */  beq   $v1, $at, .L00445C08
/* 00445BEC 2404000A */   li    $a0, 10
/* 00445BF0 94EE0006 */  lhu   $t6, 6($a3)
/* 00445BF4 24010001 */  li    $at, 1
/* 00445BF8 51C10004 */  beql  $t6, $at, .L00445C0C
/* 00445BFC 8E180010 */   lw    $t8, 0x10($s0)
/* 00445C00 10000083 */  b     .L00445E10
/* 00445C04 AC400000 */   sw    $zero, ($v0)
.L00445C08:
/* 00445C08 8E180010 */  lw    $t8, 0x10($s0)
.L00445C0C:
/* 00445C0C 8F998344 */  lw    $t9, %call16(opvalihash)($gp)
/* 00445C10 8CE50014 */  lw    $a1, 0x14($a3)
/* 00445C14 97060008 */  lhu   $a2, 8($t8)
/* 00445C18 0320F809 */  jalr  $t9
/* 00445C1C AFA7002C */   sw    $a3, 0x2c($sp)
/* 00445C20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445C24 304CFFFF */  andi  $t4, $v0, 0xffff
/* 00445C28 000CC880 */  sll   $t9, $t4, 2
/* 00445C2C 8F8A8DF0 */  lw     $t2, %got(itable)($gp)
/* 00445C30 A7A2003C */  sh    $v0, 0x3c($sp)
/* 00445C34 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00445C38 032A7821 */  addu  $t7, $t9, $t2
/* 00445C3C 8DE30000 */  lw    $v1, ($t7)
/* 00445C40 00002025 */  move  $a0, $zero
/* 00445C44 2408000A */  li    $t0, 10
/* 00445C48 10600017 */  beqz  $v1, .L00445CA8
/* 00445C4C 24060004 */   li    $a2, 4
/* 00445C50 906B0000 */  lbu   $t3, ($v1)
.L00445C54:
/* 00445C54 54CB0010 */  bnel  $a2, $t3, .L00445C98
/* 00445C58 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C5C 906D0010 */  lbu   $t5, 0x10($v1)
/* 00445C60 550D000D */  bnel  $t0, $t5, .L00445C98
/* 00445C64 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C68 8CEE0014 */  lw    $t6, 0x14($a3)
/* 00445C6C 8C780014 */  lw    $t8, 0x14($v1)
/* 00445C70 55D80009 */  bnel  $t6, $t8, .L00445C98
/* 00445C74 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C78 8E0C0010 */  lw    $t4, 0x10($s0)
/* 00445C7C 8C6A001C */  lw    $t2, 0x1c($v1)
/* 00445C80 95990008 */  lhu   $t9, 8($t4)
/* 00445C84 572A0004 */  bnel  $t9, $t2, .L00445C98
/* 00445C88 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C8C 10000002 */  b     .L00445C98
/* 00445C90 24040001 */   li    $a0, 1
/* 00445C94 8C63000C */  lw    $v1, 0xc($v1)
.L00445C98:
/* 00445C98 14800003 */  bnez  $a0, .L00445CA8
/* 00445C9C 00000000 */   nop
/* 00445CA0 5460FFEC */  bnezl $v1, .L00445C54
/* 00445CA4 906B0000 */   lbu   $t3, ($v1)
.L00445CA8:
/* 00445CA8 10800005 */  beqz  $a0, .L00445CC0
/* 00445CAC 93AF0053 */   lbu   $t7, 0x53($sp)
/* 00445CB0 15E0002A */  bnez  $t7, .L00445D5C
/* 00445CB4 8FAB0030 */   lw    $t3, 0x30($sp)
/* 00445CB8 10000055 */  b     .L00445E10
/* 00445CBC AD600000 */   sw    $zero, ($t3)
.L00445CC0:
/* 00445CC0 8F998348 */  lw    $t9, %call16(appendichain)($gp)
/* 00445CC4 97A4003C */  lhu   $a0, 0x3c($sp)
/* 00445CC8 00002825 */  move  $a1, $zero
/* 00445CCC 0320F809 */  jalr  $t9
/* 00445CD0 AFA7002C */   sw    $a3, 0x2c($sp)
/* 00445CD4 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00445CD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445CDC 24060004 */  li    $a2, 4
/* 00445CE0 A0460000 */  sb    $a2, ($v0)
/* 00445CE4 90ED0001 */  lbu   $t5, 1($a3)
/* 00445CE8 2408000A */  li    $t0, 10
/* 00445CEC 00402025 */  move  $a0, $v0
/* 00445CF0 A04D0001 */  sb    $t5, 1($v0)
/* 00445CF4 920E0023 */  lbu   $t6, 0x23($s0)
/* 00445CF8 A0480010 */  sb    $t0, 0x10($v0)
/* 00445CFC 00002825 */  move  $a1, $zero
/* 00445D00 A04E0012 */  sb    $t6, 0x12($v0)
/* 00445D04 8CF80014 */  lw    $t8, 0x14($a3)
/* 00445D08 AC400018 */  sw    $zero, 0x18($v0)
/* 00445D0C AC580014 */  sw    $t8, 0x14($v0)
/* 00445D10 8E0C0010 */  lw    $t4, 0x10($s0)
/* 00445D14 95990008 */  lhu   $t9, 8($t4)
/* 00445D18 AC400008 */  sw    $zero, 8($v0)
/* 00445D1C AC59001C */  sw    $t9, 0x1c($v0)
/* 00445D20 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 00445D24 AFA20024 */  sw    $v0, 0x24($sp)
/* 00445D28 AFA20038 */  sw    $v0, 0x38($sp)
/* 00445D2C 0320F809 */  jalr  $t9
/* 00445D30 00000000 */   nop
/* 00445D34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445D38 8FA90024 */  lw    $t1, 0x24($sp)
/* 00445D3C 3045FFFF */  andi  $a1, $v0, 0xffff
/* 00445D40 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445D44 8F848D04 */  lw     $a0, %got(trepexp)($gp)
/* 00445D48 A5220002 */  sh    $v0, 2($t1)
/* 00445D4C 0320F809 */  jalr  $t9
/* 00445D50 00000000 */   nop
/* 00445D54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445D58 8FA30038 */  lw    $v1, 0x38($sp)
.L00445D5C:
/* 00445D5C 93A2004B */  lbu   $v0, 0x4b($sp)
/* 00445D60 8FAA0030 */  lw    $t2, 0x30($sp)
/* 00445D64 10400002 */  beqz  $v0, .L00445D70
/* 00445D68 AD430000 */   sw    $v1, ($t2)
/* 00445D6C 93A2004F */  lbu   $v0, 0x4f($sp)
.L00445D70:
/* 00445D70 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445D74 8E040010 */  lw    $a0, 0x10($s0)
/* 00445D78 94650002 */  lhu   $a1, 2($v1)
/* 00445D7C AFA20028 */  sw    $v0, 0x28($sp)
/* 00445D80 AFA30038 */  sw    $v1, 0x38($sp)
/* 00445D84 0320F809 */  jalr  $t9
/* 00445D88 2484012C */   addiu $a0, $a0, 0x12c
/* 00445D8C 93AF004B */  lbu   $t7, 0x4b($sp)
/* 00445D90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445D94 8FA30038 */  lw    $v1, 0x38($sp)
/* 00445D98 51E0000A */  beql  $t7, $zero, .L00445DC4
/* 00445D9C 93AB004F */   lbu   $t3, 0x4f($sp)
/* 00445DA0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445DA4 8E040010 */  lw    $a0, 0x10($s0)
/* 00445DA8 94650002 */  lhu   $a1, 2($v1)
/* 00445DAC AFA30038 */  sw    $v1, 0x38($sp)
/* 00445DB0 0320F809 */  jalr  $t9
/* 00445DB4 24840104 */   addiu $a0, $a0, 0x104
/* 00445DB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445DBC 8FA30038 */  lw    $v1, 0x38($sp)
/* 00445DC0 93AB004F */  lbu   $t3, 0x4f($sp)
.L00445DC4:
/* 00445DC4 5160000A */  beql  $t3, $zero, .L00445DF0
/* 00445DC8 93AD002B */   lbu   $t5, 0x2b($sp)
/* 00445DCC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445DD0 8E040010 */  lw    $a0, 0x10($s0)
/* 00445DD4 94650002 */  lhu   $a1, 2($v1)
/* 00445DD8 AFA30038 */  sw    $v1, 0x38($sp)
/* 00445DDC 0320F809 */  jalr  $t9
/* 00445DE0 24840114 */   addiu $a0, $a0, 0x114
/* 00445DE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445DE8 8FA30038 */  lw    $v1, 0x38($sp)
/* 00445DEC 93AD002B */  lbu   $t5, 0x2b($sp)
.L00445DF0:
/* 00445DF0 55A00008 */  bnezl $t5, .L00445E14
/* 00445DF4 93AE0047 */   lbu   $t6, 0x47($sp)
/* 00445DF8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445DFC 8E040010 */  lw    $a0, 0x10($s0)
/* 00445E00 94650002 */  lhu   $a1, 2($v1)
/* 00445E04 0320F809 */  jalr  $t9
/* 00445E08 2484010C */   addiu $a0, $a0, 0x10c
/* 00445E0C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00445E10:
/* 00445E10 93AE0047 */  lbu   $t6, 0x47($sp)
.L00445E14:
/* 00445E14 8FB80030 */  lw    $t8, 0x30($sp)
/* 00445E18 8FAC0030 */  lw    $t4, 0x30($sp)
/* 00445E1C 51C00004 */  beql  $t6, $zero, .L00445E30
/* 00445E20 AE0C003C */   sw    $t4, 0x3c($s0)
/* 00445E24 10000002 */  b     .L00445E30
/* 00445E28 AE180038 */   sw    $t8, 0x38($s0)
/* 00445E2C AE0C003C */  sw    $t4, 0x3c($s0)
.L00445E30:
/* 00445E30 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00445E34 8FB00014 */  lw    $s0, 0x14($sp)
/* 00445E38 27BD0040 */  addiu $sp, $sp, 0x40
/* 00445E3C 03E00008 */  jr    $ra
/* 00445E40 00000000 */   nop
    .type trep_image, @function
    .size trep_image, .-trep_image
    .end trep_image
)"");

/*
# 00445E44 exprimage
# 004471AC codeimage
*/
struct IChain *exprimage(struct Expression *expr, bool *anticipated, bool *available) {
    struct IChain *ichain;      // sp84
    bool op1ant;                // sp83
    bool op1av;                 // sp82
    bool op2ant;                // sp81
    bool op2av;                 // sp80
    struct IChain *op1_ichain;  // sp78
    struct IChain *op2_ichain;  // sp74
    unsigned int newblocks;     // sp6C
    unsigned short hash;
    unsigned char r2bb;

    if (expr->ichain != NULL) {
        ichain = expr->ichain;
        if (expr->type == islda || expr->type == isconst) {
            *anticipated = true;
            *available = true;
        } else if (expr->type == isilda) {
            *anticipated = true;
            *available = true;
        } else if (expr->type == isvar || expr->type == issvar) {
            *anticipated = expr->unk3;
            *available = !expr->unk2;
        } else {    // empty, isop, dumped, isrconst
            *anticipated = expr->data.isop.unk21;
            *available = expr->data.isop.unk22;
        }
    } else {
        switch (expr->type) {
            case isconst:
                switch (expr->datatype) {
                    case Adt:
                    case Fdt:
                    case Gdt:
                    case Hdt:
                    case Jdt:
                    case Ldt:
                    case Ndt:
                        hash = isconstihash(expr->data.isconst.number.intval);
                        break;

                    case Idt:
                    case Kdt:
                        hash = isconstihash(expr->data.isconst.number.intval2);
                        break;

                    default:    // Cdt, Mdt, Pdt, Qdt, Rdt, Sdt, Wdt, Xdt, Zdt
                        hash = realihash(expr->data.isconst.number);
                        //hash = realihash(expr->data.islda_isilda.addr, expr->data.islda_isilda.size);
                        break;
                }
                ichain = isearchloop(hash, expr, 0, 0);
                *anticipated = true;
                *available = true;
                break;

            case isrconst:
                ichain = isearchloop(isconstihash(expr->data.isrconst.unk20), expr, 0, 0);
                *anticipated = true;
                *available = true;
                break;

            case islda:
                ichain = isearchloop(isldaihash(expr->data.islda_isilda.var_data, expr->data.islda_isilda.addr), expr, 0, 0);
                *anticipated = true;
                *available = true;
                break;

            case isilda:
                exprimage(expr->data.islda_isilda.unk34, anticipated, available);
                ichain = isearchloop(isvarihash(expr->data.islda_isilda.var_data), expr, 0, 0);
                if (outofmem) return NULL; // used to return UB sp8C

                if (expr->data.islda_isilda.unk34->type != issvar) {
                    *anticipated = true;
                    *available = true;
                } else {
                    *anticipated = expr->data.islda_isilda.unk34->unk3;
                    *available = !expr->data.islda_isilda.unk34->unk2;
                }

                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                if (*anticipated) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->bitpos);
                }
                if (*available) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                }
                if (!*anticipated || !*available) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                }
                break;

            case isvar:
                ichain = isearchloop(isvarihash(expr->data.isvar_issvar.var_data), expr, 0, 0);
                if (outofmem) return NULL; // used to return UB sp8C

                // Most iffy part... compiler originally added 1 to r2bb and subtracted 4/8 from r2bitpos/setofr2bbs.
                if (expr->data.isvar_issvar.var_data.memtype == Rmt) {
                    if (expr->data.isvar_issvar.var_data.addr != 29) { // $sp?
                        switch (expr->data.isvar_issvar.var_data.addr) {
                            case 0x02:      // $v0?
                                r2bb = 0;
                                break;

                            case 0x20:      // $f0?
                                r2bb = 1;
                                break;

                            case 0x22:      // $f2?
                                r2bb = 2;
                                break;

                            case 0x21:      // $f1?
                            default:
                                dbgerror(0x202);
                                break;

                        }
                        r2bitpos[r2bb] = ichain->bitpos;

                        if (curgraphnode->num >= (setofr2bbs[r2bb].num_blocks << 7)) {
                            newblocks = ((unsigned) curstaticno >> 7) + 1;
                            setofr2bbs[r2bb].blocks = alloc_realloc(setofr2bbs[r2bb].blocks, setofr2bbs[r2bb].num_blocks, newblocks, &perm_heap);

                            memset(setofr2bbs[r2bb].blocks + setofr2bbs[r2bb].num_blocks, 0, (newblocks - setofr2bbs[r2bb].num_blocks) * sizeof(struct BitVectorBlock));
                            setofr2bbs[r2bb].num_blocks = newblocks;
                        }
                        setbitbb(&setofr2bbs[r2bb], curgraphnode->num);
                        // Original:
                        //unsigned int blockpos = curgraphnode->num & 0x7F;
                        //setofr2bbs[r2bb].blocks[curgraphnode->num >> 7].words[0] |= (blockpos < 0x20U) << ((~blockpos) & 0x1f);
                        //setofr2bbs[r2bb].blocks[curgraphnode->num >> 7].words[1] |= ((unsigned) (blockpos - 0x20) < 0x20U) << ((~blockpos) & 0x1f);
                        //setofr2bbs[r2bb].blocks[curgraphnode->num >> 7].words[2] |= ((unsigned) (blockpos - 0x40) < 0x20U) << ((~blockpos) & 0x1f);
                        //setofr2bbs[r2bb].blocks[curgraphnode->num >> 7].words[3] |= ((unsigned) (blockpos - 0x60) < 0x20U) << ((~blockpos) & 0x1f);
                    }
                }
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->isop.s.bit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                if (expr->data.isvar_issvar.unk21) {
                    *anticipated = false;
                    *available = false;
                    setbit(&vareqv, ichain->bitpos);
                    setbit(&asgneqv, ichain->isop.s.bit);
                } else {
                    *anticipated = expr->unk3;
                    *available = !expr->unk2;
                }

                if (*anticipated) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->bitpos);
                }
                if (*available) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                }
                if (!*anticipated || !*available) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                }
                break;

            case issvar:
                exprimage(expr->data.isvar_issvar.unk24, anticipated, available);
                if (outofmem) return NULL; // used to return UB sp8C

                ichain = isearchloop(isvarihash(expr->data.isvar_issvar.var_data), expr, 0, 0);
                if (outofmem) return NULL; // used to return UB sp8C

                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->isop.s.bit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                if (expr->data.isvar_issvar.unk21) {
                    *anticipated = false;
                    *available = false;
                    setbit(&vareqv, ichain->bitpos);
                    setbit(&asgneqv, ichain->isop.s.bit);
                } else {
                    *anticipated = expr->unk3;
                    *available = !expr->unk2;
                }

                if (*anticipated) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->bitpos);
                }
                if (*available) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                }
                if (!*anticipated || !*available) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                }
                break;

            case isop:
                op1_ichain = exprimage(expr->data.isop.op1, &op1ant, &op1av);
                if (outofmem) return NULL; // used to return UB sp8C

                if (op1_ichain->type == isop) {
                    switch (op1_ichain->isop.opc) {
                        case Uequ:
                        case Ugeq:
                        case Ugrt:
                        case Uinn:
                        case Uleq:
                        case Ules:
                        case Uneq:
                            resetbit(&boolexp, op1_ichain->bitpos);
                            break;

                        default:
                            break;
                    }
                }

                if (optab[expr->data.isop.opc].is_binary_op) {
                    op2_ichain = exprimage(expr->data.isop.op2, &op2ant, &op2av);
                    if (outofmem) return NULL; // used to return UB sp8C

                    if (op2_ichain->type == isop) {
                        switch (op2_ichain->isop.opc) {
                            case Uequ:
                            case Ugeq:
                            case Ugrt:
                            case Uinn:
                            case Uleq:
                            case Ules:
                            case Uneq:
                                resetbit(&boolexp, op2_ichain->bitpos);
                                break;

                            default:
                                break;
                        }
                    }
                    ichain = isearchloop(isopihash(expr->data.isop.opc, op1_ichain, op2_ichain), expr, op1_ichain, op2_ichain);
                    *anticipated = op1ant ? op2ant : op1ant;
                    *available = op1av ? op2av : op1av;

                    switch (expr->data.isop.opc) {
                        case Uiequ:
                        case Uigeq:
                        case Uigrt:
                        case Uileq:
                        case Uiles:
                        case Uineq:
                            *anticipated = *anticipated ? expr->unk3 : *anticipated;
                            *available = *available ? !expr->unk2 : *available;
                            break;

                        default:
                            break;
                    }
                } else {
                    if (expr->data.isop.opc == Uilod) {
                        if (expr->data.isop.aux.unk38_int == 0) {
                            expr->data.isop.aux.unk38_int = assign_mtag(expr->data.isop.unk34);
                        }
                    }

                    switch (expr->data.isop.opc) {
                        case Uilod:
                        case Uirld:
                            hash = opvalihash(expr->data.isop.opc, op1_ichain, 0);
                            break;

                        case Uadj:
                        case Uchkh:
                        case Uchkl:
                        case Ucvtl:
                        case Udec:
                        case Uildv:
                        case Uinc:
                        case Uirlv:
                            hash = opvalihash(expr->data.isop.opc, op1_ichain, expr->data.isop.datasize);
                            break;

                        default:
                            hash = isopihash(expr->data.isop.opc, op1_ichain, NULL);
                            break;
                    }
                    ichain = isearchloop(hash, expr, op1_ichain, 0);

                    switch (expr->data.isop.opc) {
                        case Uildv:
                        case Uilod:
                        case Uirld:
                        case Uirlv:
                            *anticipated = op1ant ? expr->unk3 : op1ant;
                            *available = op1av ? !expr->unk2 : op1av;
                            break;

                        default:
                            *anticipated = op1ant;
                            *available = op1av;
                            break;
                    }
                }
                if (outofmem) return NULL; // used to return UB sp8C

                if (expr->data.isop.datatype == Sdt) {
                    *anticipated = false;
                    *available = false;
                }
                expr->data.isop.unk21 = *anticipated;
                expr->data.isop.unk22 = *available;
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                if (*anticipated) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->bitpos);
                }
                if (*available) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                }
                if (!*anticipated || !*available) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                }

                switch (expr->data.isop.opc) {
                    case Uequ:
                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                    case Uneq:
                        if (expr->data.isop.aux.unk38_int == 0) {
                            trep_image(expr, 1, op1ant, op1av, 0);
                            trep_image(expr, 0, op2ant, op2av, 0);
                        }
                        break;

                    default:
                        break;
                }
                break;

            case dumped:
#ifdef AVOID_UB
                ichain = NULL;
#endif
                break;

            default:
                caseerror(1, 0x248, "uoptitab.p", 0xA);
                break;
        }
    }

    return ichain;
}

/*
# 004175BC copypropagate
# 004471AC codeimage
*/
struct IChain *searchstore(unsigned short hash, Uopcode opc /* sp3f */, struct IChain *op1, struct IChain *op2, int unk1, int size) {
    struct IChain *ichain;      // s0
    bool found; // sp2F


    ichain = itable[hash];
    found = false;

    while (!found && ichain != NULL) {
        if (ichain->type == isop && ichain->isop.opc == opc && ichain->isop.op1 == op1) {
            switch (ichain->isop.opc) {
                case Uisst:
                case Ustr:
                    found = ichain->isop.op2 == op2;
                    break;

                case Uistr:
                case Uistv:
                case Uirsv:
                case Uirst:
                    found = ichain->isop.op2 == op2 && ichain->isop.s.word == unk1 && ichain->isop.size == size;
                    break;

                case Umov:
                case Umovv:
                    found = ichain->isop.op2 == op2;
                    break;

                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                    found = ichain->isop.op2 == op2 && ichain->isop.size == unk1;
                    break;

                case Uchkt:
                    found = true;
                    break;

                default:
                    caseerror(1, 827, "uoptitab.p", 10);
                    break;
            }
        }

        if (!found) {
            ichain = ichain->next;
        }
    }

    if (!found) {
        ichain = appendichain(hash, false);
        if (ichain == NULL) {
            outofmem = true;
            return NULL;        // used to return sp34
        }

        ichain->isop.opc = opc;
        ichain->type = isop;
        ichain->isop.op2 = op2;
        ichain->isop.op1 = op1;
        ichain->bitpos = newbit(ichain, NULL);

        switch (ichain->isop.opc) {
            case Uchkt:
            case Utpeq:
            case Utpge:
            case Utpgt:
            case Utple:
            case Utplt:
            case Utpne:
                setbit(&trapop, ichain->bitpos);
                if (ichain->isop.opc != Uchkt) {
                    ichain->isop.size = unk1;
                    if (ichain->isop.opc == Utpge
                            || ichain->isop.opc == Utpgt
                            || ichain->isop.opc == Utple
                            || ichain->isop.opc == Utplt) {
                        if (ichain->isop.op2->type == isconst) {
                            ichain->isop.op2->dtype = ichain->isop.op2->dtype;
                            switch (ichain->isop.op2->dtype) {
                                case Adt:
                                case Hdt:
                                case Idt:
                                case Jdt:
                                case Kdt:
                                case Ldt:
                                    setbit(&trapconstop, (int) ichain->bitpos);
                                    break;
                                default:
                                    break;
                            }
                        }
                    }
                }
                break;
            default:
                setbit(&storeop, ichain->bitpos);
                break;
        }
    }

    return ichain;
}

/*
00456310 func_00456310
0046FCD4 link_jump_in_loop
00470048 pre_loopblock
00470248 post_loopblock
004713E8 loopunroll
004761D0 tail_recursion
*/
void codeimage(void) {
    bool exprant; // expr 1
    bool exprav; // expr 1
    bool storeant; // expr 2
    bool storeav; // expr 2
    unsigned short opihash;
    struct IChain *ichain; // s3, antlocs
    struct IChain *store_ichain; // s1, avlocs
    struct Statement *stat_tail;
    struct Statement *stat;

    init_node_vectors(curgraphnode);
    stat = curgraphnode->stat_head;

    do {
        if (stat->opc == Uisst || stat->opc == Ustr) {
            if (stat->opc == Uisst) {
                exprimage(stat->u.store.expr, &exprant, &exprav);
                if (outofmem) return;
            }

            ichain = isearchloop(isvarihash(stat->expr->data.isvar_issvar.var_data), stat->expr, 0, 0);
            if (outofmem) return;

            if (!stat->unk3) {
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->isop.s.bit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                if (stat->expr->unk6) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                    if (!stat->expr->unk2) {
                        setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                    }
                }

                if (ichain->isvar_issvar.unk1A) {
                    setbit(&vareqv, ichain->bitpos);
                    setbit(&asgneqv, ichain->isop.s.bit);
                }

                if (stat->u.store.unk1C) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->isop.s.bit);
                }

                if (!stat->u.store.unk1C || !stat->u.store.unk1D) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                }
                else
                {
                    stat_tail = curgraphnode->stat_tail;
                    if (stat_tail->opc == Ucia) {
                        if (lang == LANG_ADA) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                        } else if (((stat_tail->u.cia.flags & 1) && cskilled(curlevel, indirprocs, stat)) ||
                                listpskilled(stat_tail->u.cia.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                        }

                    } else if (stat_tail->opc == Ucup || stat_tail->opc == Uicuf) {
                        if (cskilled(stat_tail->u.call.level, stat_tail->u.call.proc, stat) ||
                                listpskilled(stat_tail->u.call.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                        }
                    }
                }

                store_ichain = exprimage(stat->expr->data.isvar_issvar.unk34, &storeant, &storeav);
                if (outofmem) return;
                if (store_ichain == NULL) {
                    dbgerror(0x1AC);
                }
                if (store_ichain->type == isop) {
                    // store_chain->opc in [Uequ, ...]
                    // Bool expressions
                    switch (store_ichain->isop.opc) {
                        case Uequ:
                        case Ugeq:
                        case Ugrt:
                        case Uinn:
                        case Uleq:
                        case Ules:
                        case Uneq:
                            resetbit(&boolexp, store_ichain->bitpos);
                            break;

                        default:
                            break;
                    }
                }

                store_ichain = searchstore(isopihash(stat->opc, ichain, store_ichain), stat->opc, ichain, store_ichain, 0, 0);
                if (outofmem) return;

                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, store_ichain->bitpos);
                store_ichain->isop.stat = stat;
                store_ichain->dtype = ichain->dtype;
                stat->u.store.ichain = store_ichain;
                if (stat->u.store.unk1C && stat->u.store.unk1E && storeant) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, store_ichain->bitpos);
                }
                if (!stat->u.store.unk1E || !stat->u.store.unk1F ||
                        !stat->u.store.unk1C || !stat->u.store.unk1D ||
                        !storeant || !storeav) {
                    setbit(&curgraphnode->bvs.stage1.alters, store_ichain->bitpos);
                }
                if (stat->u.store.unk1F && storeav) {
                    setbit(&curgraphnode->bvs.stage1.u.precm.pavlocs, store_ichain->bitpos);
                }
                if (!stat->u.store.unk1E || !stat->u.store.unk1F ||
                        !storeant || !storeav) {
                    setbit(&curgraphnode->bvs.stage1.absalters, store_ichain->bitpos);
                }
            } else {
                setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                if (stat->expr->unk6) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                    if (!stat->expr->unk2) {
                        setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                    }
                }

                setbit(&curgraphnode->bvs.stage1.antlocs, ichain->isop.s.bit);
                if (!stat->u.store.unk1D) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                } else {
                    stat_tail = curgraphnode->stat_tail;
                    if (stat_tail->opc == Ucia) {
                        setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                    }
                    else if (stat_tail->opc == Ucup || stat_tail->opc == Uicuf) {
                        if (cskilled(stat_tail->u.call.level, stat_tail->u.call.proc, stat) ||
                                listpskilled(curgraphnode->stat_tail->u.call.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->isop.s.bit);
                        }
                    }
                }
                stat->u.store.ichain = NULL;
            }
        } else {
            // stat->opc not in [Uaent, ...]
            switch (stat->opc) {
                case Uaent:
                case Ubgnb:
                case Ucia:
                case Uclab:
                case Uclbd:
                case Uctrl:
                case Ucubd:
                case Ucup:
                case Udef:
                case Uendb:
                case Uicuf:
                case Ulab:
                case Ulbdy:
                case Ulbgn:
                case Ulend:
                case Uloc:
                case Ultrm:
                case Umst:
                case Unop:
                case Uret:
                case Ustep:
                case Uujp:
                case Urcuf:
                    continue;

                default:
                    ichain = exprimage(stat->expr, &exprant, &exprav);
                    if (outofmem) return;
                    break;
            }

            // stat->opc in [Uchkt, ...]
            switch (stat->opc) {
                default:
                    continue;

                case Uchkt:
                case Uistr:
                case Uistv:
                case  Umov:
                case Umovv:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                case Uirst:
                case Uirsv:
                    break;
            }

            store_ichain = NULL;
            if (stat->opc != Uchkt) {
                store_ichain = exprimage(stat->u.store.expr, &storeant, &storeav);
            }
            if (outofmem) return;

            // stat->opc in [Uistr, ...]
            switch (stat->opc) {
                default:
                    break;

                case Uistr:
                case Uistv:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                case Uirst:
                case Uirsv:
                    if (store_ichain->type == isop) {
                        switch (store_ichain->isop.opc) {
                            default:
                                break;

                            case Uequ:
                            case Ugeq:
                            case Ugrt:
                            case Uinn:
                            case Uleq:
                            case Ules:
                            case Uneq:
                                resetbit(&boolexp, store_ichain->bitpos);
                                break;
                        }
                    }
            }

            // stat->opc in [Uchkt, ...]
            // Trapped bool expressions
            switch (stat->opc) {
                case Uchkt:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                    if (ichain->type == isop) {
                        switch (ichain->isop.opc) {
                            default:
                                break;

                            case Uequ:
                            case Ugeq:
                            case Ugrt:
                            case Uinn:
                            case Uleq:
                            case Ules:
                            case Uneq:
                                resetbit(&boolexp, ichain->bitpos);
                                break;
                        }
                    }
                    break;

                default:
                    break;
            }

            if ((stat->opc == Utpge || stat->opc == Utpgt || stat->opc == Utple || stat->opc == Utplt) &&
                    (store_ichain->type == isconst)) {
                opihash = isopihash(stat->opc, ichain, NULL);
            } else {
                opihash = isopihash(stat->opc, ichain, store_ichain);

            }
            switch (stat->opc) {
                case Uistr:
                case Uistv:
                case Uirst:
                case Uirsv:
                    store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, stat->u.store.u.istr.s.word, stat->u.store.size);
                    break;

                default:
                    switch (stat->opc) {
                        case Uchkt:
                        case Utpeq:
                        case Utpge:
                        case Utpgt:
                        case Utple:
                        case Utplt:
                        case Utpne:
                            store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, stat->u.trap.num, 0);
                            break;

                        default:
                            store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, 0, 0);
                            break;
                    } break;
            }
            if (outofmem) return;

            setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, store_ichain->bitpos);
            store_ichain->isop.stat = stat;
            stat->u.store.ichain = store_ichain;

            if (stat->opc == Uistr ||
                    stat->opc == Uistv ||
                    stat->opc == Umov  ||
                    stat->opc == Umovv ||
                    stat->opc == Uirst ||
                    stat->opc == Uirsv) {
                store_ichain->isop.size = stat->u.store.size;

                if (stat->opc == Uistr ||
                        stat->opc == Uistv ||
                        stat->opc == Uirst ||
                        stat->opc == Uirsv) {
                    store_ichain->isop.s = stat->u.store.u.istr.s;
                    store_ichain->dtype = stat->u.store.u.istr.dtype;
                    store_ichain->isop.unk13 = stat->u.store.u.istr.unk2D;
                }


                if (stat->opc == Umov || stat->opc == Umovv) {
                    store_ichain->isop.s.bit = stat->u.store.u.mov.unk32 + (stat->u.store.u.mov.unk33 << 8);
                }

                if (stat->u.store.unk1C && stat->u.store.unk1E && exprant && storeant) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, store_ichain->bitpos);
                }

                if (!stat->u.store.unk1C || !stat->u.store.unk1D ||
                        !stat->u.store.unk1E || !stat->u.store.unk1F ||
                        !exprant || !exprav || !storeant || !storeav) {
                    setbit(&curgraphnode->bvs.stage1.alters, store_ichain->bitpos);
                }
                if (stat->u.store.unk1F && exprav && storeav) {
                    setbit(&curgraphnode->bvs.stage1.u.precm.pavlocs, store_ichain->bitpos);
                }
                if (!stat->u.store.unk1E || !stat->u.store.unk1F ||
                        !exprant || !exprav || !storeant || !storeav) {
                    setbit(&curgraphnode->bvs.stage1.absalters, store_ichain->bitpos);
                }
            } else {
                // traps
                if (stat->opc == Uchkt) {
                    storeant = true;
                    storeav = true;
                } else {
                    store_ichain->dtype = stat->u.trap.dtype;
                }
                if (exprant && storeant) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, store_ichain->bitpos);
                }
                if (exprav && storeav) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, store_ichain->bitpos);
                }
                if (!exprant || !exprav || !storeant || !storeav) {
                    setbit(&curgraphnode->bvs.stage1.alters, store_ichain->bitpos);
                }
            }

            if (stat->opc == Uistr && stat->u.store.u.istr.offset == 0) {
                stat->u.store.u.istr.offset = assign_mtag(stat->u.store.baseaddr);
            }
        }
    } while ((stat = stat->next) != NULL);
}
