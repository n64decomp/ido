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

/*
004150E4 func_004150E4
0041550C func_0041550C
004175BC copypropagate
00445E44 exprimage
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
*/
int isconstihash(int value) {
    int hash = value % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
0041550C func_0041550C
00445E44 exprimage
*/
int realihash(union Constant value) {
    // only the u16 at value+0x2 is used, but 8 bytes are always passed to this function, see func_0041550C asm
    int hash = ((value.real.len * value.real.len) << 6) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
0041550C func_0041550C
004175BC copypropagate
0042020C gen_static_link
00445E44 exprimage
004471AC codeimage
*/
int isvarihash(struct VariableLocation loc) {
    int hash = (((loc.memtype << 6) + loc.blockno + loc.addr) << 4) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
0041550C func_0041550C
00445E44 exprimage
0046BA10 change_to_const_eq
*/
int isldaihash(struct VariableLocation loc, unsigned int addr) {
    int hash = (((loc.memtype << 6) + loc.blockno + addr) << 4) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
00410204 codemotion
0041550C func_0041550C
004175BC copypropagate
00445E44 exprimage
004471AC codeimage
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
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
004150E4 func_004150E4
0041550C func_0041550C
00445AEC trep_image
00445E44 exprimage
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
004150E4 func_004150E4
0041550C func_0041550C
004175BC copypropagate
00445E44 exprimage
004471AC codeimage
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
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

                    default:    // Cdt, Pdt, Qdt, Rdt, Sdt, Wdt, Xdt, Zdt
                        if (ichain->isconst.number.real.disp == expr->data.isconst.number.real.disp) {
                            found = true;
                        }
                        break;
                }
                break;

            case isrconst:
                if (ichain->type == isrconst && ichain->dtype == expr->datatype &&
                        ichain->isrconst.unk10 == expr->data.isrconst.value) {
                    found = true;
                }
                break;

            case islda:
                if (ichain->type == islda && ichain->islda_isilda.offset == expr->data.islda_isilda.offset &&
                        ichain->islda_isilda.address.blockno == expr->data.islda_isilda.address.blockno) {
                    found = true;
                }
                break;

            case isilda:
                if (ichain->type == isilda &&
                        ichain->islda_isilda.offset == expr->data.islda_isilda.offset &&
                        ichain->islda_isilda.size == expr->data.islda_isilda.size &&
                        addreq(ichain->islda_isilda.address, expr->data.islda_isilda.address)) {
                    found = true;
                }
                break;

            case isvar:
                if (ichain->type == isvar &&
                        addreq(ichain->isvar_issvar.location, expr->data.isvar_issvar.location)) {
                    found = true;
                }
                break;

            case issvar:
                if (ichain->type == issvar &&
                        addreq(ichain->isvar_issvar.location, expr->data.isvar_issvar.location)) {
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
                        if (ichain->dtype == expr->datatype && 
                                ((ichain->isop.op1 == op1 && ichain->isop.op2 == op2) ||
                                 (ichain->isop.op1 == op2 && ichain->isop.op2 == op1))) {
                            if (ichain->isop.overflow_attr == expr->data.isop.aux2.v1.overflow_attr) {
                                found = true;
                            }
                        }
                        break;

                    // Commutative ops
                    case Uequ:
                    case Uneq:
                        if (ichain->dtype == expr->datatype && 
                                ((ichain->isop.op1 == op1 && ichain->isop.op2 == op2) ||
                                 (ichain->isop.op1 == op2 && ichain->isop.op2 == op1))) {
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
                        if (ichain->dtype == expr->datatype && 
                                (ichain->isop.op1 == op1 && ichain->isop.op2 == op2)) {
                            if (ichain->isop.overflow_attr == expr->data.isop.aux2.v1.overflow_attr) {
                                found = true;
                            }
                        }
                        break;

                    // Noncommutative ops
                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                        if (ichain->dtype == expr->datatype && 
                                ichain->isop.op1 == op1 && ichain->isop.op2 == op2) {
                            found = true;
                        }
                        break;

                    case Uinn:
                        if (ichain->dtype == expr->datatype && 
                                ichain->isop.op1 == op1 && ichain->isop.op2 == op2 &&
                                ichain->isop.s.bit == expr->data.isop.aux2.v1.unk3C) {
                            found = true;
                        }
                        
                        break;

                    case Uixa:
                        if (ichain->dtype == expr->datatype && 
                                ichain->isop.size == expr->data.isop.datasize &&
                                (ichain->isop.op1 == op1 && ichain->isop.op2 == op2)) {
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
                        if (ichain->dtype == expr->datatype &&
                                ichain->isop.op1 == op1 &&
                                ichain->isop.overflow_attr == expr->data.isop.aux2.v1.overflow_attr) {
                            found = true;
                        }
                        break;

                    case Uchkh:
                    case Uchkl:
                    case Ucvtl:
                    case Udec:
                    case Uinc:
                        if (ichain->dtype == expr->datatype &&
                                ichain->isop.op1 == op1 &&
                                ichain->isop.size == expr->data.isop.datasize &&
                                ichain->isop.overflow_attr == expr->data.isop.aux2.v1.overflow_attr) {
                            found = true;
                        }
                        break;

                    case Ucvt:
                    case Urnd:
                    case Utyp:
                        if (ichain->dtype == expr->datatype &&
                                ichain->isop.cvtfrom == expr->data.isop.aux.cvtfrom &&
                                ichain->isop.op1 == op1 &&
                                ichain->isop.overflow_attr == expr->data.isop.aux2.v1.overflow_attr) {
                            found = true;
                        }
                        break;

                    case Uadj:
                        if (ichain->isop.size == expr->data.isop.datasize &&
                                ichain->isop.s.bit == expr->data.isop.aux2.v1.unk3C &&
                                ichain->isop.op1 == op1) {
                            found = true;
                        }
                        break;

                    case Uchkn:
                        if (ichain->isop.op1 == op1) {
                            found = true;
                        }
                        break;

                    case Uilod:
                    case Uirld:
                    case Uildv:
                    case Uirlv:
                        if (ichain->dtype == expr->datatype &&
                                ichain->isop.op1 == op1 &&
                                ichain->isop.size == expr->data.isop.datasize &&
                                ichain->isop.s.bit == expr->data.isop.aux2.v1.unk3C) {
                            found = true;
                        }
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
                        caseerror(1, 177, "uoptitab.p", 10);
                        break;

                }
                break;

            case dumped:
            default:
                caseerror(1, 123, "uoptitab.p", 10);
                break;
        }

        if (found == false) {
            ichain = ichain->next;
        }
    }

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
                write_string(err.c_file, "Warning: kind dumped: ignored", 29, 29);
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
                ichain->islda_isilda.offset = expr->data.islda_isilda.offset;
                ichain->islda_isilda.address = expr->data.islda_isilda.address;
                ichain->islda_isilda.size = expr->data.islda_isilda.size;
                break;

            case isilda:
                ichain->islda_isilda.offset = expr->data.islda_isilda.offset;
                ichain->islda_isilda.address = expr->data.islda_isilda.address;
                ichain->islda_isilda.size = expr->data.islda_isilda.size;

                ichain->islda_isilda.outer_stack_ichain = expr->data.islda_isilda.outer_stack->ichain;
                break;

            case isvar:
                ichain->isvar_issvar.location = expr->data.isvar_issvar.location;
                ichain->isvar_issvar.size = expr->data.isvar_issvar.size;

                // The two bools' order is swapped!
                ichain->isvar_issvar.unk19 = expr->data.isvar_issvar.unk22;
                ichain->isvar_issvar.unk1A = expr->data.isvar_issvar.unk21;
                ichain->expr = expr;
                break;

            case issvar:
                ichain->isvar_issvar.location = expr->data.isvar_issvar.location;
                ichain->isvar_issvar.size = expr->data.isvar_issvar.size;

                // The two bools' order is swapped!
                ichain->isvar_issvar.unk19 = expr->data.isvar_issvar.unk22;
                ichain->isvar_issvar.unk1A = expr->data.isvar_issvar.unk21;
                ichain->expr = expr;

                ichain->isvar_issvar.outer_stack_ichain = expr->data.isvar_issvar.outer_stack->ichain;
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
                        ichain->isop.size = expr->data.isop.datasize; //! this is actually an offset from baseaddr
                        ichain->isop.s.bit = expr->data.isop.aux2.v1.unk3C;
                        ichain->isop.unk13 = expr->data.isop.aux2.v1.align;
                        ichain->expr = expr;

                        // what is this... and why is the order swapped?
                        // asm used lw then sh, not lhu
                        ichain->isop.s.mtagno = expr->data.isop.aux.mtagno;
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
                        caseerror(1, 309, "uoptitab.p", 10);
                        break;
                }
                break;

            default:
                caseerror(1, 256, "uoptitab.p", 10);
        }

        if (expr->type == islda || expr->type == isconst) {
            ichain->bitpos = -1;
        } else if (expr->type == isvar ||
                expr->type == isop ||
                expr->type == isilda ||
                expr->type == issvar) {

            ichain->bitpos = newbit(ichain, NULL);

            if (expr->type == isvar || expr->type == issvar) {
                setbit(&varbits, ichain->bitpos);
                ichain->isvar_issvar.assignbit = newbit(ichain, NULL);
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
            int expr_varlen = expr->data.islda_isilda.address.addr + expr->data.islda_isilda.size;

            if ((ichain->islda_isilda.address.addr + ichain->isvar_issvar.size) < expr_varlen) {
                ichain->islda_isilda.size = (expr_varlen - ichain->islda_isilda.address.addr);
            }

            if (expr->data.islda_isilda.address.addr < ichain->islda_isilda.address.addr) {
                ichain->islda_isilda.address.addr = expr->data.islda_isilda.address.addr;
            }
        }
    }

    expr->ichain = ichain;
    return ichain;
}

/* 
0041550C func_0041550C
00445E44 exprimage
0046BD90 change_to_var_eq
*/
void trep_image(struct Expression *expr, bool op1, bool ant, bool av, bool arg4) {
    unsigned short cg1hash; // sp3C
    struct IChain *ichain; // sp38, sp24
    struct TrepImageThing *trepThing;    // sp30
    struct Expression *op; // a3, sp2C
    struct Expression *next;
    bool found;

    if (op1) {
        op = expr->data.isop.op1;
    } else {
        op = expr->data.isop.op2;
    }

    if (op->type == isvar || op->type == issvar) {
        next = op->data.isvar_issvar.copy;
        while (next != NULL && next != nocopy) {
            op = next;

            if (next->type == isvar || next->type == issvar) {
                next = next->data.isvar_issvar.copy;
            } else {
                break;
            }
        }
    }

    trepThing = alloc_new(sizeof (struct TrepImageThing), &perm_heap);
    if (op->type == islda || op->type == isilda || op->type == isconst) {
        trepThing->ichain = NULL;
    } else if (op->type != isvar && op->count != 1) {
        trepThing->ichain = NULL;
    } else {
        cg1hash = opvalihash(Ucg1, op->ichain, expr->graphnode->num);
        ichain = itable[cg1hash];
        found = false;

        while (!found && ichain != NULL) {
            if (ichain->type == isop && ichain->isop.opc == Ucg1 && ichain->isop.op1 == op->ichain && ichain->isop.size == expr->graphnode->num) {
                found = true;
            } else {
                ichain = ichain->next;
            }
        }

        if (found && !arg4) {
            trepThing->ichain = NULL;
        } else {
            if (!found) {
                ichain = appendichain(cg1hash, false);
                ichain->type = isop;
                ichain->dtype = op->datatype;
                ichain->isop.opc = Ucg1;
                ichain->isop.datatype = expr->data.isop.datatype;
                ichain->isop.op2 = NULL;
                ichain->isop.op1 = op->ichain;
                ichain->expr = NULL;
                ichain->isop.size = expr->graphnode->num;
                ichain->bitpos = newbit(ichain, NULL);
                setbit(&trepexp, ichain->bitpos);
            }

            trepThing->ichain = ichain;
            setbit(&expr->graphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
            if (ant) {
                setbit(&expr->graphnode->bvs.stage1.antlocs, ichain->bitpos);
            }
            if (av) {
                setbit(&expr->graphnode->bvs.stage1.avlocs, ichain->bitpos);
            }
            if (!ant || !av) {
                setbit(&expr->graphnode->bvs.stage1.alters, ichain->bitpos);
            }
        }
    }

    if (op1) {
        expr->data.isop.aux.unk38_trep = trepThing;
    } else {
        expr->data.isop.aux2.unk3C_trep = trepThing;
    }
}

/*
00445E44 exprimage
004471AC codeimage
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
                        //hash = realihash(expr->data.islda_isilda.offset, expr->data.islda_isilda.size);
                        break;
                }
                ichain = isearchloop(hash, expr, NULL, NULL);
                *anticipated = true;
                *available = true;
                break;

            case isrconst:
                ichain = isearchloop(isconstihash(expr->data.isrconst.value), expr, NULL, NULL);
                *anticipated = true;
                *available = true;
                break;

            case islda:
                ichain = isearchloop(isldaihash(expr->data.islda_isilda.address, expr->data.islda_isilda.offset), expr, NULL, NULL);
                *anticipated = true;
                *available = true;
                break;

            case isilda:
                exprimage(expr->data.islda_isilda.outer_stack, anticipated, available);
                ichain = isearchloop(isvarihash(expr->data.islda_isilda.address), expr, NULL, NULL);
                if (outofmem) return NULL; // used to return UB sp8C

                if (expr->data.islda_isilda.outer_stack->type != issvar) {
                    *anticipated = true;
                    *available = true;
                } else {
                    *anticipated = expr->data.islda_isilda.outer_stack->unk3;
                    *available = !expr->data.islda_isilda.outer_stack->unk2;
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
                ichain = isearchloop(isvarihash(expr->data.isvar_issvar.location), expr, NULL, NULL);
                if (outofmem) return NULL; // used to return UB sp8C

                // Most iffy part... compiler originally added 1 to r2bb and subtracted 4/8 from r2bitpos/setofr2bbs.
                if (expr->data.isvar_issvar.location.memtype == Rmt) {
                    if (expr->data.isvar_issvar.location.addr != r_sp) {
                        switch (expr->data.isvar_issvar.location.addr) {
                            case r_v0:
                                r2bb = 0;
                                break;

                            case r_f0:
                                r2bb = 1;
                                break;

                            case r_f2:
                                r2bb = 2;
                                break;

                            case r_f1:
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
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->isvar_issvar.assignbit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                if (expr->data.isvar_issvar.unk21) {
                    *anticipated = false;
                    *available = false;
                    setbit(&vareqv, ichain->bitpos);
                    setbit(&asgneqv, ichain->isvar_issvar.assignbit);
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
                exprimage(expr->data.isvar_issvar.outer_stack, anticipated, available);
                if (outofmem) return NULL; // used to return UB sp8C

                ichain = isearchloop(isvarihash(expr->data.isvar_issvar.location), expr, NULL, NULL);
                if (outofmem) return NULL; // used to return UB sp8C

                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->isvar_issvar.assignbit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                if (expr->data.isvar_issvar.unk21) {
                    *anticipated = false;
                    *available = false;
                    setbit(&vareqv, ichain->bitpos);
                    setbit(&asgneqv, ichain->isvar_issvar.assignbit);
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
                        case Uneq:
                        case Ugeq:
                        case Ugrt:
                        case Uinn:
                        case Uleq:
                        case Ules:
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
                            case Uneq:
                            case Ugeq:
                            case Ugrt:
                            case Uinn:
                            case Uleq:
                            case Ules:
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
                        if (expr->data.isop.aux.mtagno == 0) {
                            expr->data.isop.aux.mtagno = assign_mtag(expr->data.isop.unk34);
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
                    ichain = isearchloop(hash, expr, op1_ichain, NULL);

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
                    case Uneq:
                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                        if (expr->data.isop.aux.unk38_trep == NULL) {
                            trep_image(expr, true,  op1ant, op1av, false);
                            trep_image(expr, false, op2ant, op2av, false);
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
                caseerror(1, 584, "uoptitab.p", 10);
                break;
        }
    }

    return ichain;
}

/*
004175BC copypropagate
004471AC codeimage
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

            ichain = isearchloop(isvarihash(stat->expr->data.isvar_issvar.location), stat->expr, NULL, NULL);
            if (outofmem) return;

            if (!stat->unk3) {
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->isvar_issvar.assignbit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                if (stat->expr->count != 0) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                    if (!stat->expr->unk2) {
                        setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                    }
                }

                if (ichain->isvar_issvar.unk1A) {
                    setbit(&vareqv, ichain->bitpos);
                    setbit(&asgneqv, ichain->isvar_issvar.assignbit);
                }

                if (stat->u.store.unk1C) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->isvar_issvar.assignbit);
                }

                if (!stat->u.store.unk1C || !stat->u.store.unk1D) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                }
                else
                {
                    stat_tail = curgraphnode->stat_tail;
                    if (stat_tail->opc == Ucia) {
                        if (lang == LANG_ADA) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                        } else if ((IS_CIA_CALLS_ATTR(stat_tail->u.cia.flags) && cskilled(curlevel, indirprocs, stat)) ||
                                listpskilled(stat_tail->u.cia.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                        }

                    } else if (stat_tail->opc == Ucup || stat_tail->opc == Uicuf) {
                        if (cskilled(stat_tail->u.call.level, stat_tail->u.call.proc, stat) ||
                                listpskilled(stat_tail->u.call.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                        }
                    }
                }

                store_ichain = exprimage(stat->expr->data.isvar_issvar.assigned_value, &storeant, &storeav);
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
                if (stat->expr->count) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                    if (!stat->expr->unk2) {
                        setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                    }
                }

                setbit(&curgraphnode->bvs.stage1.antlocs, ichain->isvar_issvar.assignbit);
                if (!stat->u.store.unk1D) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                } else {
                    stat_tail = curgraphnode->stat_tail;
                    if (stat_tail->opc == Ucia) {
                        setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                    }
                    else if (stat_tail->opc == Ucup || stat_tail->opc == Uicuf) {
                        if (cskilled(stat_tail->u.call.level, stat_tail->u.call.proc, stat) ||
                                listpskilled(curgraphnode->stat_tail->u.call.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
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
                    store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, stat->u.store.u.istr.offset, stat->u.store.size);
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
                    }
                    break;
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
                    store_ichain->isop.s.word = stat->u.store.u.istr.offset;
                    store_ichain->dtype = stat->u.store.u.istr.dtype;
                    store_ichain->isop.unk13 = stat->u.store.u.istr.align;
                }


                if (stat->opc == Umov || stat->opc == Umovv) {
                    store_ichain->isop.s.bit = stat->u.store.u.mov.src_align + (stat->u.store.u.mov.dst_align << 8);
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

            if (stat->opc == Uistr && stat->u.store.u.istr.mtagno == 0) {
                stat->u.store.u.istr.mtagno = assign_mtag(stat->u.store.baseaddr);
            }
        }
    } while ((stat = stat->next) != NULL);
}
