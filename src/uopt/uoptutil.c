#include <stdlib.h>
#include <string.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "ucode.h"
#include "uoptions.h"
#include "uoptutil.h"
#include "uoptdata.h"
#include "uoptdbg.h"

#include "debug.h"

/*
0047B51C ovfwwarning
*/
const char uopcode_enum_values[] = "uabs\x00   uadd\x00   uadj\x00   uaent\x00  uand\x00   uaos\x00   uasym\x00  ubgn\x00   ubgnb\x00  ubsub\x00  ucg1\x00   ucg2\x00   uchkh\x00  uchkl\x00  uchkn\x00  uchkt\x00  ucia\x00   uclab\x00  uclbd\x00  ucomm\x00  ucsym\x00  uctrl\x00  ucubd\x00  ucup\x00   ucvt\x00   ucvtl\x00  udec\x00   udef\x00   udif\x00   udiv\x00   udup\x00   uend\x00   uendb\x00  uent\x00   ueof\x00   uequ\x00   uesym\x00  ufill\x00  ufjp\x00   ufsym\x00  ugeq\x00   ugrt\x00   ugsym\x00  uhsym\x00  uicuf\x00  uidx\x00   uiequ\x00  uigeq\x00  uigrt\x00  uijp\x00   uilda\x00  uildv\x00  uileq\x00  uiles\x00  uilod\x00  uinc\x00   uineq\x00  uinit\x00  uinn\x00   uint\x00   uior\x00   uisld\x00  uisst\x00  uistr\x00  uistv\x00  uixa\x00   ulab\x00   ulbd\x00   ulbdy\x00  ulbgn\x00  ulca\x00   ulda\x00   uldap\x00  uldc\x00   uldef\x00  uldsp\x00  ulend\x00  uleq\x00   ules\x00   ulex\x00   ulnot\x00  uloc\x00   ulod\x00   ulsym\x00  ultrm\x00  umax\x00   umin\x00   umod\x00   umov\x00   umovv\x00  umpmv\x00  umpy\x00   umst\x00   umus\x00   uneg\x00   uneq\x00   unop\x00   unot\x00   uodd\x00   uoptn\x00  upar\x00   updef\x00  upmov\x00  upop\x00   uregs\x00  urem\x00   uret\x00   urlda\x00  urldc\x00  urlod\x00  urnd\x00   urpar\x00  urstr\x00  usdef\x00  usgs\x00   ushl\x00   ushr\x00   usign\x00  usqr\x00   usqrt\x00  ussym\x00  ustep\x00  ustp\x00   ustr\x00   ustsp\x00  usub\x00   uswp\x00   utjp\x00   utpeq\x00  utpge\x00  utpgt\x00  utple\x00  utplt\x00  utpne\x00  utyp\x00   uubd\x00   uujp\x00   uunal\x00  uuni\x00   uvreg\x00  uxjp\x00   uxor\x00   uxpar\x00  umtag\x00  ualia\x00  uildi\x00  uisti\x00  uirld\x00  uirst\x00  uldrc\x00  umsym\x00  urcuf\x00  uksym\x00  uosym\x00  uirlv\x00  uirsv\x00\x00 ";

/*
004137DC copy_searchloop
00417480 func_00417480
0041F22C base_noalias
0042020C gen_static_link
00425618 func_00425618
00439FA4 formal_parm_vreg
0043B334 func_0043B334
0043B504 func_0043B504
0043CBFC func_0043CBFC
00444A84 isearchloop
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044EDF8 ilodfold
00459564 update_veqv_in_table
0045FBB4 func_0045FBB4
0046C710 unroll_searchloop
00473504 func_00473504
00473D84 func_00473D84
0047BFEC findsimilar
0047D610 searchvar
0047E24C enter_lda
0047E938 checkincre
*/
bool addreq(struct VariableLocation a, struct VariableLocation b) {
    return a.addr == b.addr && a.memtype == b.memtype && a.blockno == b.blockno;
}

/*
00456A2C oneproc
*/
void stackerror(void) {
    writeln(err.c_file);
    write_string(err.c_file, "uopt: Internal: ", 16, 16);
    write_string(err.c_file, entnam0, 1024, entnam0len);
    write_string(err.c_file, ": stack error", 13, 13);
    writeln(err.c_file);
    fflush(err.c_file);
    abort();
}

/*
00425618 func_00425618
0042BF08 reemit
0044F3C0 unaryfold
00452DAC constarith
*/
void boundswarning(void) {
    if (warn_flag != 1) {
        warned = true;
        writeln(err.c_file);
        write_string(err.c_file, "uopt: Warning: ", 15, 15);
        write_string(err.c_file, entnam0, 1024, entnam0len);
        write_string(err.c_file, " line ", 6, 6);
        write_integer(err.c_file, curlocln, 0, 10);
        write_string(err.c_file, ": bounds error", 14, 14);
        writeln(err.c_file);
        fflush(err.c_file);
    }
}

/*
0041550C find_replacements
00425618 func_00425618
0044F738 linearize
00451764 restructure
*/
void ovfwwarning(Uopcode opc) {
    if (warn_flag != 1) {
        warned = true;
        writeln(err.c_file);
        write_string(err.c_file, "uopt: Warning: ", 15, 15);
        write_string(err.c_file, entnam0, 1024, entnam0len);
        write_string(err.c_file, " line ", 6, 6);
        write_integer(err.c_file, curlocln, 0, 10);
        write_string(err.c_file, ": ", 2, 2);

        switch (opc) {
            case Uadd:
                write_string(err.c_file, "addition", 8, 8);
                break;
            case Usub:
                write_string(err.c_file, "subtraction", 11, 11);
                break;
            case Umpy:
                write_string(err.c_file, "multiplication", 14, 14);
                break;
            case Udiv:
            case Urem:
                write_string(err.c_file, "division by zero", 16, 16);
                break;
            case Umod:
                write_string(err.c_file, "modulus", 7, 7);
                break;
            case Uneg:
                write_string(err.c_file, "negation", 8, 8);
                break;
            case Uabs:
                write_string(err.c_file, "absolute value", 14, 14);
                break;
            case Udec:
                write_string(err.c_file, "decrement", 9, 9);
                break;
            case Uinc:
                write_string(err.c_file, "increment", 9, 9);
                break;
            case Uixa:
                write_string(err.c_file, "memory indexing", 15, 15);
                break;
            case Ushl:
                write_string(err.c_file, "shift left", 10, 10);
                break;
            case Ushr:
                write_string(err.c_file, "shift right", 11, 11);
                break;
            case Uuni:
                write_string(err.c_file, "set union", 9, 9);
                break;
            case Uint:
                write_string(err.c_file, "set intersection", 16, 16);
                break;
            case Udif:
                write_string(err.c_file, "set difference", 14, 14);
                break;
            case Uinn:
                write_string(err.c_file, "element in set", 14, 14);
                break;
            case Umus:
                write_string(err.c_file, "multiple set", 12, 12);
                break;
            case Uequ:
                write_string(err.c_file, "equality comparison", 19, 19);
                break;
            case Ugrt:
                write_string(err.c_file, "greater than", 12, 12);
                break;
            case Ugeq:
                write_string(err.c_file, "greater than or eqaul to", 24, 24);
                break;
            case Ules:
                write_string(err.c_file, "less than", 9, 9);
                break;
            case Uleq:
                write_string(err.c_file, "less than or equal to", 21, 21);
                break;
            case Umin:
                write_string(err.c_file, "minimum", 7, 7);
                break;
            case Umax:
                write_string(err.c_file, "maximum", 7, 7);
                break;
            case Uxor:
                write_string(err.c_file, "exclusive or", 12, 12);
                break;
            case Uodd:
                write_string(err.c_file, "odd integer", 11, 11);
                break;
            case Usqr:
                write_string(err.c_file, "square a number", 15, 15);
                break;
            case Ulnot:
                write_string(err.c_file, "logical not", 11, 11);
                break;
            case Unot:
                write_string(err.c_file, "not", 3, 3);
                break;
            case Uchkh:
                write_string(err.c_file, "check against upper bound", 25, 25);
                break;
            case Uchkl:
                write_string(err.c_file, "check against lower bound", 25, 25);
                break;
            case Ucvtl:
                write_string(err.c_file, "convert a length", 16, 16);
                break;

            default:
                write_string(err.c_file, "Ucode op:", 9, 9);
                write_enum(err.c_file, opc, uopcode_enum_values, 0);
                break;
        }

        write_string(err.c_file, " constant evaluation found", 26, 26);
        writeln(err.c_file);
        write_string(err.c_file, "questionable result as a result of copy propagation or other optimizations.", 75, 75);
        writeln(err.c_file);
        write_string(err.c_file, "Constant evaluation left to run time for this case.", 51, 51);
        writeln(err.c_file);
        fflush(err.c_file);
    }
}

/*
00410204 codemotion
0041550C find_replacements
0041FD3C genloadnum
004230F0 emit_expr
00424FFC func_00424FFC
00425618 func_00425618
00426DE8 func_00426DE8
0042BF08 reemit
0043ABD0 incroccurrence
0043CFCC readnxtinst
00445E44 exprimage
004471AC codeimage
0044821C expr_has_direct_usage
0044D8C4 strlkilled
0045CB3C expinalter
00461778 func_00461778
00464BFC localcolor
00467F04 split
00469280 globalcolor
00477118 func_00477118
00477854 func_00477854
00477B0C func_00477B0C
00478820 func_00478820
00479778 func_00479778
*/
void dbgerror(int code) {
    writeln(err.c_file);
    write_string(err.c_file, "uopt: Internal: ", 16, 16);
    write_string(err.c_file, entnam0, 1024, entnam0len);
    write_string(err.c_file, ": code: ", 8, 8);
    write_integer(err.c_file, code, 12, 10);
    writeln(err.c_file);
    fflush(err.c_file);
    abort();
}

/*
004137DC copy_searchloop
004150E4 add_cvtl
0043B334 func_0043B334
0043B504 func_0043B504
0043CBFC func_0043CBFC
0043CFCC readnxtinst
0044EDF8 ilodfold
0044F1B8 istrfold
0044FF6C mergeconst
004510A0 distrlaw
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
0046C710 unroll_searchloop
0046E77C oneloopblockstmt
0047090C form_bop
00470AAC form_rem
00470DD8 form_neq0
00470F88 form_neg
004710F0 str_to_temporary
00473504 func_00473504
004737E0 par_to_str
00473D84 func_00473D84
0047C53C fixcorr
0047D610 searchvar
0047E100 enter_const
0047E24C enter_lda
0047E3BC binopwithconst
*/
struct Expression *appendchain(unsigned short table_index) {
    struct Expression *pos;
    struct Expression *new_entry;
    int chain_index;

    pos = table[table_index];
    if (pos == NULL) {
        new_entry = (struct Expression *)alloc_new(sizeof(struct Expression), &perm_heap);
        pos = new_entry;
        table[table_index] = new_entry;
        chain_index = 0;
    } else {
        while (pos->next != NULL) {
            pos = pos->next;
        }
        new_entry = (struct Expression *)alloc_new(sizeof(struct Expression), &perm_heap);
        pos->next = new_entry;
        chain_index = pos->chain_index + 1;
    }
    if (new_entry == NULL) {
        outofmem = true;
        return NULL; // originally some unused stack slot value was returned
    }
#ifdef AVOID_UB
    *new_entry = (struct Expression){0};
#endif
    new_entry->type = empty;
    new_entry->ichain = NULL;
    new_entry->chain_index = chain_index;
    new_entry->next = NULL;
    new_entry->table_index = table_index;
    return new_entry;
}

/*
0047C53C fixcorr
*/
struct Expression *findsimilar(struct Expression *expr) {
    struct Expression *similar = table[expr->table_index];
    bool found = false;

    while (!found && similar != NULL) {
        if (similar->type == expr->type && similar != expr) {
            if (similar->ichain != NULL) {
                switch (expr->type) {
                    case isvar:
                    case issvar:
                        found = addreq(expr->data.isvar_issvar.location, similar->data.isvar_issvar.location);
                        break;

                    case isop:
                        if (similar->data.isop.opc == expr->data.isop.opc && similar->datatype == expr->datatype) {
                            switch (expr->data.isop.opc) {
                                case Uilod:
                                case Uildv:
                                case Uirld:
                                case Uirlv:
                                    if (similar->data.isop.op1 == expr->data.isop.op1) {
                                        if (similar->data.isop.datasize == expr->data.isop.datasize) {
                                            found = similar->data.isop.aux2.v1.unk3C == expr->data.isop.aux2.v1.unk3C;
                                        }
                                    }
                                    break;

                                case Uigeq:
                                case Uigrt:
                                case Uileq:
                                case Uiles:
                                    if (similar->data.isop.op1 == expr->data.isop.op1) {
                                        if (similar->data.isop.op2 == expr->data.isop.op2) {
                                            found = similar->data.isop.datasize == expr->data.isop.datasize;
                                        }
                                    }
                                    break;

                                case Uiequ:
                                case Uineq:
                                    if ((similar->data.isop.op1 == expr->data.isop.op1 &&
                                                similar->data.isop.op2 == expr->data.isop.op2) ||
                                            (similar->data.isop.op1 == expr->data.isop.op2 &&
                                             similar->data.isop.op2 == expr->data.isop.op1)) {
                                        found = similar->data.isop.datasize == expr->data.isop.datasize;
                                    }
                                    break;

                                default:
                                    break;
                            }
                            break;
                        }
                        break;

                    default:
                        caseerror(1, 209, "uoptutil.p", 10);
                        break;
                }
            }
        }

        if (!found) {
            similar = similar->next;
        }
    }
    return similar;
}

/* 
00414108 insert_copied_expr
0041550C find_replacements
0044E604 binaryfold
0044ED5C ixafold
0044EDF8 ilodfold
0044F3C0 unaryfold
0044FF6C mergeconst
00451764 restructure
0047C53C fixcorr
*/
void copycoderep(struct Expression *dest, struct Expression *src) {
    unsigned short table_index;
    int chain_index;
    struct Expression *next;

    if (src->type == isop) {
        // originally this was a struct copy
        table_index = dest->table_index;
        chain_index = dest->chain_index;

        next = dest->next;

        *dest = *src;

        dest->next = next;

        // originally this was a struct copy
        dest->table_index = table_index;
        dest->chain_index = chain_index;
        return;
    }

    dest->type = src->type;
    dest->datatype = src->datatype;
    dest->graphnode = src->graphnode;
    dest->ichain = src->ichain;
    dest->var_access_list = src->var_access_list;
    switch (src->type) {
        case islda:
            dest->data.islda_isilda.offset = src->data.islda_isilda.offset;
            dest->data.islda_isilda.size = src->data.islda_isilda.size;
            dest->data.islda_isilda.level = src->data.islda_isilda.level;
            dest->data.islda_isilda.address = src->data.islda_isilda.address;
            break;

        case isilda:
            dest->data.islda_isilda.offset = src->data.islda_isilda.offset;
            dest->data.islda_isilda.size = src->data.islda_isilda.size;
            dest->data.islda_isilda.level = src->data.islda_isilda.level;
            dest->data.islda_isilda.address = src->data.islda_isilda.address;

            dest->data.islda_isilda.outer_stack = src->data.islda_isilda.outer_stack;
            dest->data.islda_isilda.temploc = src->data.islda_isilda.temploc;

            dest->unk4 = src->unk4;
            dest->visited = src->visited;
            dest->count = src->count;
            break;

        case isconst:
            dest->data.isconst.number = src->data.isconst.number;

            dest->data.isconst.size = src->data.isconst.size;
            dest->data.isconst.real_significand = src->data.isconst.real_significand;
            dest->data.isconst.real_exponent = src->data.isconst.real_exponent;
            break;

        case isrconst:
            dest->data.isrconst.value = src->data.isrconst.value;
            dest->data.isrconst.unk24 = src->data.isrconst.unk24;
            break;

        case isvar:
        case issvar:
            dest->killed = src->killed;
            dest->initialVal = src->initialVal;
            dest->unk4 = src->unk4;
            dest->visited = src->visited;
            dest->count = src->count;

            dest->data.isvar_issvar.size = src->data.isvar_issvar.size;
            dest->data.isvar_issvar.veqv = src->data.isvar_issvar.veqv;
            dest->data.isvar_issvar.vreg = src->data.isvar_issvar.vreg;
            dest->data.isvar_issvar.is_volatile = src->data.isvar_issvar.is_volatile;
            dest->data.isvar_issvar.location = src->data.isvar_issvar.location;

            dest->data.isvar_issvar.copy = src->data.isvar_issvar.copy;
            dest->data.isvar_issvar.assigned_value = src->data.isvar_issvar.assigned_value;
            dest->data.isvar_issvar.assignment = src->data.isvar_issvar.assignment;
            dest->data.isvar_issvar.outer_stack = src->data.isvar_issvar.outer_stack;
            dest->data.isvar_issvar.temploc = src->data.isvar_issvar.temploc;
            break;

        default:
        case isop:
        case dumped:
            caseerror(1, 255, "uoptutil.p", 10);
            break;
    }
}

/*
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044BDFC cskilled
0044D0C4 pskilled
0044DBC4 indirectaccessed
00478FA0 func_00478FA0
*/
void fix_sbase(struct Statement *stat) {
    if (stat->u.store.baseaddr->ichain != NULL) {
        if (stat->u.store.baseaddr->ichain->expr != NULL) {
            stat->u.store.baseaddr = stat->u.store.baseaddr->ichain->expr;
        }
    }
}


/* 
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044BDFC cskilled
0044D0C4 pskilled
0044DBC4 indirectaccessed
00478FA0 func_00478FA0
 */
void fix_base(struct Expression *expr) {
    if (expr->data.islda_isilda.outer_stack->ichain != NULL) {
        if (expr->data.islda_isilda.outer_stack->ichain->expr != NULL) {
            expr->data.islda_isilda.outer_stack = expr->data.islda_isilda.outer_stack->ichain->expr;
        }
    }
}

/* 
0041550C find_replacements
004712A4 reset_images
004713E8 loopunroll
0047C650 delentry
*/
void fixcorr(struct Expression *expr) {
    if (expr->ichain->expr == expr) {
        if (expr->type == isop || expr->type == isvar || expr->type == issvar) {
            if (expr->type != isop ||
                    (expr->data.isop.opc == Uiequ ||
                     expr->data.isop.opc == Uigeq ||
                     expr->data.isop.opc == Uigrt ||
                     expr->data.isop.opc == Uildv ||
                     expr->data.isop.opc == Uileq ||
                     expr->data.isop.opc == Uiles ||
                     expr->data.isop.opc == Uilod ||
                     expr->data.isop.opc == Uineq ||
                     expr->data.isop.opc == Uirld ||
                     expr->data.isop.opc == Uirlv)) {
                expr->ichain->expr = findsimilar(expr);
                if (expr->ichain->expr == NULL) {
                    expr->ichain->expr = appendchain(expr->table_index);
                    copycoderep(expr->ichain->expr, expr);
                    expr->ichain->expr->graphnode = NULL;
                }
            }
        }
    }
}

/*
00413000 exprdelete
0041550C find_replacements
0043CFCC readnxtinst
0044FF6C mergeconst
00451764 restructure
0047C6E8 decreasecount
0047D878 deccount
*/
void delentry(struct Expression *entry) {
    if (entry->type == isvar || entry->type == issvar) {
        if (entry->data.isvar_issvar.assignment != NULL && entry->data.isvar_issvar.assignment->opc != Unop) {
            return;
        }
    }
    if (entry->ichain != NULL) {
        fixcorr(entry);
    }
    entry->type = dumped;
}

/* 
0042F6CC controlflow
0043ABD0 incroccurrence
0043CBFC func_0043CBFC
0043CE64 func_0043CE64
0043CFCC readnxtinst
0044EDF8 ilodfold
00451764 restructure
0046C654 del_orig_cond
0046D158 unroll_check_istr_propcopy
0046D2C0 unroll_check_irst_propcopy
0046E77C oneloopblockstmt
004713E8 loopunroll
004737E0 par_to_str
004787B0 func_004787B0
0047C6E8 decreasecount
0047C960 increasecount
0047E3BC binopwithconst
*/
void decreasecount(struct Expression *expr) {
    if (expr == NULL) {
        return;
    }

    switch(expr->type) {
        case islda:
        case isconst:
        case isrconst:
            return;

        case isilda:
            expr->count--;
            if (expr->count == 0) {
                decreasecount(expr->data.islda_isilda.outer_stack);
                delentry(expr);
            }
            return;

        case isvar:
            if (expr->data.isvar_issvar.copy != NULL 
                    && expr->data.isvar_issvar.copy != nocopy) {
                decreasecount(expr->data.isvar_issvar.copy);
            } else {
                expr->count--;
                if (expr->count == 0) {
                    expr->var_access_list->type = 0; // type 0 = deleted?
                    delentry(expr);
                }
            }
            return;

        case issvar:
            if (expr->data.isvar_issvar.copy != NULL 
                    && expr->data.isvar_issvar.copy != nocopy) {
                decreasecount(expr->data.isvar_issvar.copy);
            } else {
                expr->count--;
                if (expr->count == 0) {
                    expr->var_access_list->type = 0;
                    if (expr->data.isvar_issvar.assignment == NULL || expr->data.isvar_issvar.assignment->opc == Unop) {
                        decreasecount(expr->data.isvar_issvar.outer_stack);
                    } else {
                        delentry(expr);
                    }
                }
            }
            return;

        case isop:
            expr->count--;
            if (expr->count == 0) {
                switch (expr->data.isop.opc) {
                    case Uiequ:
                    case Uigeq:
                    case Uigrt:
                    case Uildv:
                    case Uileq:
                    case Uiles:
                    case Uilod:
                    case Uineq:
                    case Uirld:
                    case Uirlv:
                        expr->var_access_list->type = 0;
                        break;

                    default:
                        break;
                }

                decreasecount(expr->data.isop.op1);
                if (optab[expr->data.isop.opc].is_binary_op) {
                    decreasecount(expr->data.isop.op2);
                }

                delentry(expr);
            }
            return;

        case empty:
        case dumped:
        default:
            caseerror(1, 365, "uoptutil.p", 10);
            break;
    }
}

/* 
0043ABD0 incroccurrence
0043CBFC func_0043CBFC
0043CFCC readnxtinst
0044EDF8 ilodfold
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
0046D428 oneloopblockexpr
0047090C form_bop
00470AAC form_rem
00470DD8 form_neq0
00470F88 form_neg
*/
void increasecount(struct Expression *expr) {
    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            return;

        case isvar:
            expr->count++;
            return;

        case issvar:
            expr->count++;
            if (expr->count > 1) {
                decreasecount(expr->data.isvar_issvar.outer_stack);
            }
            return;

        case isilda:
            expr->count++;
            if (expr->count > 1) {
                decreasecount(expr->data.islda_isilda.outer_stack);
            }
            return;

        case isop:
            expr->count++;
            numlcse++; // local common subexpressions
            if (expr->count > 1) {
                decreasecount(expr->data.isop.op1);
                if (optab[expr->data.isop.opc].is_binary_op) {
                    decreasecount(expr->data.isop.op2);
                }
            }
            return;

        case dumped:
        default:
            caseerror(1, 423, "uoptutil.p", 10);
            return;
    }
}

/*
00414108 insert_copied_expr
0043CFCC readnxtinst
0047E100 enter_const
*/
int isconsthash(int number) {
    int ret = number % 9113;
    return ret < 0 ? ret + 9113 : ret;
}

/*
00414108 insert_copied_expr
0043C248 func_0043C248
0043C56C func_0043C56C
0043CFCC readnxtinst
*/
int realhash(int len) {
    int hash = 0;
    int i;

    for (i = 0; i < len; i++) {
        hash += (unsigned char)ustrptr[i];
    }

    hash = ((hash * len) << 6) % 9113; // note: same size as table variable
    return hash < 0 ? hash + 9113 : hash;
}

/*
00414108 insert_copied_expr
00425618 func_00425618
00439FA4 formal_parm_vreg
0043CBFC func_0043CBFC
0043CFCC readnxtinst
0044EDF8 ilodfold
0044F1B8 istrfold
00459564 update_veqv_in_table
0045FBB4 func_0045FBB4
004710F0 str_to_temporary
004737E0 par_to_str
00473F04 pmov_to_mov
00475E38 func_00475E38
00476E40 func_00476E40
0047D768 vartreeinfo
0047E24C enter_lda
*/
int isvarhash(struct VariableLocation loc) {
    int hash = (((loc.memtype << 6) + loc.blockno + loc.addr) << 4) % 9113;
    return hash < 0 ? hash + 9113 : hash;
}

/*
00414108 insert_copied_expr
0043CFCC readnxtinst
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
0046D428 oneloopblockexpr
0047090C form_bop
00470AAC form_rem
00470DD8 form_neq0
00470F88 form_neg
0047E3BC binopwithconst
*/
int isophash(Uopcode opc, struct Expression *op1, struct Expression *op2) {
    int hash;

    if (op2 == NULL && op1 == NULL) {
        hash = (opc * 79) % 9113;
        if (hash < 0) {
            hash += 9113;
        }
    } else if (op2 == NULL) {
        hash = (((opc * 8) + (op1->table_index * (op1->chain_index + 2))) * 10) % 9113;
        if (hash < 0) {
            hash += 9113;
        }
    }
    else if (op1 == NULL) {
        hash = (((opc * 8) + (op2->table_index * (op2->chain_index + 3))) * 10) % 9113;
        if (hash < 0) {
            hash += 9113;
        }
    } else {
        hash = (((opc * 8) + (op1->table_index * op2->table_index) + ((op1->chain_index + 2) * (op2->chain_index + 2))) * 10) % 9113;
        if (hash < 0) {
            hash += 9113;
        }
    }
    return hash;
}

/*
00414108 insert_copied_expr
004150E4 add_cvtl
0043CFCC readnxtinst
0046D428 oneloopblockexpr
*/
int opvalhash(Uopcode opc, struct Expression *op1, int value) {
    int hash;

    if (op1 != NULL) {
        hash = ((opc * 8) + ((op1->table_index + value) * (op1->chain_index + 2))) % 9113;
        if (hash < 0) {
            hash += 9113;
        }
    } else {
        hash = ((opc * 8) + (value * 2)) % 9113;
        if (hash < 0) {
            hash += 9113;
        }
    }
    return hash;
}

/*
0043CFCC readnxtinst
00456310 one_block
00456A2C oneproc
0046E77C oneloopblockstmt
004704B0 termination_test
004710F0 str_to_temporary
004713E8 loopunroll
004737E0 par_to_str
00473F04 pmov_to_mov
004761D0 tail_recursion
*/
void extendstat(Uopcode opc) {
    struct Statement *stat;

    stat = (struct Statement *)alloc_new(sizeof(struct Statement), &perm_heap);
    if (stat == NULL) {
        outofmem = true;
        return;
    }
#ifdef AVOID_UB
    *stat = (struct Statement) {0};
#endif
    stat->next = NULL;
    stat->opc = opc;
    stat->u.store.ichain = NULL;
    stat->graphnode = curgraphnode;
    if (stathead == NULL) {
        stathead = stat;
        stat->prev = NULL;
    } else {
        stat->prev = stattail;
        stattail->next = stat;
    }

#ifdef UOPT_DEBUG
    if (gDebugTracingInput) {
        gCurInput->stat = stat;
        new_ucode_input();
    }
#endif

    stattail = stat;
    if (curgraphnode != NULL && curgraphnode->stat_head == NULL) {
        curgraphnode->stat_head = stattail;
    }
}

/*
0041550C find_replacements
0041F048 genrop
0041FB20 spilltemplodstr
004205F8 genrlodrstr
004230F0 emit_expr
00426FA4 func_00426FA4
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
0042BF08 reemit
0043CFCC readnxtinst
0044821C expr_has_direct_usage
00448530 has_direct_induct_usage
0044E604 binaryfold
00465E50 spilltemps
004710F0 str_to_temporary
004713E8 loopunroll
004737E0 par_to_str
0047E100 enter_const
*/
int sizeoftyp(Datatype t) {
    return (t == Idt || t == Kdt || t == Qdt) ? 8 : 4;
}

/*
0043CFCC readnxtinst
0044EDF8 ilodfold
0044F1B8 istrfold
*/
int blktolev(int blk) {
    int lev = curlevel;
    bool stop = false;

    while (!stop && lev >= 2) {
        if (blk == blklev[lev - 1]) {
            stop = true;
        } else {
            lev--;
        }
    }

    return blk == 0 ? 0 : lev;
}

/*
00444A84 isearchloop
00445AEC trep_image
00446E18 searchstore
0045E45C func_0045E45C
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
0046123C func_0046123C
00467F04 split
*/
int newbit(struct IChain *ichain, struct LiveRange *liverange) {
    int insertpos;
    int newcount;

    if (bittabsize == bitposcount) {
        bittab = (struct BittabItem *)alloc_realloc(bittab,
            bittabsize * (int)sizeof(struct BittabItem) / 16,
            ((bittabsize + 128) * (int)sizeof(struct BittabItem)) / 16,
            &perm_heap);
        bittabsize += 128;
    }
    insertpos = bitposcount++;
    newcount = bitposcount;
    bittab[insertpos].ichain = ichain;
    bittab[insertpos].liverange = liverange;
    if ((bitvectorsize << 7) < newcount) {
        bitvectorsize++;
    }
    return insertpos;
}

/*
004127C8 checkexpoccur
0042FEA0 func_0042FEA0
00474AF0 inpathbefore
00474C58 inpathafter
0047D000 exproccurred
*/
bool exproccurred(struct IChain *ichain, struct Expression *expr) {
    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            return false;
            break;

        case isilda:
            if (ichain == expr->ichain) {
                return true;
            } else {
                return exproccurred(ichain, expr->data.islda_isilda.outer_stack);
            }
            break;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                return exproccurred(ichain, expr->data.isvar_issvar.copy);
            } else if (ichain == expr->ichain) {
                return true;
            } else if (expr->type == issvar) {
                return exproccurred(ichain, expr->data.isvar_issvar.outer_stack);
            } else {
                return false;
            }

        case isop:
            if (ichain == expr->ichain) {
                return true;
            } else if (optab[expr->data.isop.opc].is_binary_op) {
                return exproccurred(ichain, expr->data.isop.op1) ||  exproccurred(ichain, expr->data.isop.op2);
            } else {
                return exproccurred(ichain, expr->data.isop.op1);
            }
            break;

        case dumped:
            return false;
            break;

        default:
            caseerror(1, 0x254, "uoptutil.p", 0xA);
            break;
    }
    return false;
}

/*
00431508 candidate
0047D188 iexproccurred
*/
bool iexproccurred(struct IChain *target, struct IChain *ichain2) {
    switch (ichain2->type) {
        case islda:
        case isconst:
        case isrconst:
            return false;
            break;

        case isilda:
            if (ichain2 == target) {
                return true;
            } else {
                return iexproccurred(target, ichain2->islda_isilda.outer_stack_ichain);
            }
            break;

        case isvar:
        case issvar:
            if (ichain2 == target) {
                return true;
            } else if (ichain2->type == issvar) {
                return iexproccurred(target, ichain2->isvar_issvar.outer_stack_ichain);
            } else {
                return false;
            }

            break;

        case isop:
            if (ichain2 == target) {
                return true;
            } else if (optab[ichain2->isop.opc].is_binary_op) {
                return iexproccurred(target, ichain2->isop.op1) || iexproccurred(target, ichain2->isop.op2);
            } else {
                return iexproccurred(target, ichain2->isop.op1);
            }
            break;

        default:
            caseerror(1, 0x27A, "uoptutil.p", 0xA);
            break;
    }

    return false;
}

/*
0047D4A8 addovfw
*/
bool addovfw_signed(int a, int b) {
    if (a < 0 && b < 0 && b < (int)(0x80000000U - (unsigned int)a)) {
        return true;
    }
    if (a > 0 && b > 0 && (int)(0x7fffffffU - (unsigned int)a) < b) {
        return true;
    }
    return false;
}

/*
0047D520 subovfw
*/
bool subovfw_signed(int a, int b) {
    if (a < 0 && b > 0 && a < (int)((unsigned int)b + 0x80000000U)) {
        return true;
    }
    if (a > 0 && b < 0 && (int)((unsigned int)b + 0x7fffffffU) < a) {
        return true;
    }
    return false;
}

/*
0047D598 mpyovfw
0047FBE0 val_when_exponent0
*/
bool mpyovfw_signed(int a, int b) {
    if (a == 0 || b == 0 || b == 1 || a == 1) {
        return false;
    }
    if (a < 0) {
        if ((unsigned int)a == 0x80000000U) {
            return true;
        }
        a = -a;
    }
    if (b < 0) {
        if ((unsigned int)b == 0x80000000U) {
            return true;
        }
        b = -b;
    }
    return 0x7fffffff / b < a;
}

/*
0047D4A8 addovfw
*/
bool addovfw_unsigned(unsigned int a, unsigned int b) {
    return a + b < a;
}

/*
0047D520 subovfw
*/
bool subovfw_unsigned(unsigned int a, unsigned int b) {
    return a < b;
}

/*
0047D598 mpyovfw
*/
bool mpyovfw_unsigned(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0 || b == 1 || a == 1) {
        return false;
    }
    return 0xffffffffU / b < a;
}

/*
00425618 func_00425618
0043CFCC readnxtinst
0044DF30 binaryovfw
0044E35C ixaovfw
0044E410 unaryovfw
0044FF6C mergeconst
00477118 func_00477118
*/
bool addovfw(enum Datatype t, int a, int b) {
    if (t != Ldt) {
        return addovfw_signed(a, b);
    } else {
        return addovfw_unsigned((unsigned int)a, (unsigned int)b);
    }
}

/*
00425618 func_00425618
0043CFCC readnxtinst
0044DF30 binaryovfw
0044E410 unaryovfw
0044FF6C mergeconst
00477118 func_00477118
*/
bool subovfw(enum Datatype t, int a, int b) {
    if (t != Ldt) {
        return subovfw_signed(a, b);
    } else {
        return subovfw_unsigned((unsigned int)a, (unsigned int)b);
    }
}

/*
00425618 func_00425618
0044DF30 binaryovfw
0044E35C ixaovfw
0044F738 linearize
0044FF6C mergeconst
004510A0 distrlaw
00477118 func_00477118
*/
bool mpyovfw(enum Datatype t, int a, int b) {
    if (t != Ldt) {
        return mpyovfw_signed(a, b);
    } else {
        return mpyovfw_unsigned((unsigned int)a, (unsigned int)b);
    }
}

/*
0043CFCC readnxtinst
00459564 update_veqv_in_table
0047D768 vartreeinfo
*/
struct Expression *searchvar(unsigned short table_index, struct VariableLocation *loc) {
    struct Expression *entry = table[table_index];
    bool found = false;

    while (!found && entry != NULL) {
        if ((entry->type == isvar || entry->type == issvar) && addreq(entry->data.isvar_issvar.location, *loc)) {
            found = true;
        } else {
            entry = entry->next;
        }
    }

    if (!found) {
        entry = appendchain(table_index);
    }

    if (loc->memtype == Rmt || loc->memtype == Smt || curblk == loc->blockno) {
        entry->type = isvar;
    } else {
        entry->type = issvar;
    }
    entry->data.isvar_issvar.location = *loc;
    return entry;
}

/*
0047D768 vartreeinfo
0047D838 entervregveqv
*/
void vartreeinfo(struct Variable *var) {
    struct Expression *entry;

    while (var != NULL) {
        if (var->vreg || var->veqv) {
            entry = searchvar(isvarhash(var->location), &var->location);
            entry->graphnode = NULL;
            entry->data.isvar_issvar.size = (unsigned char)var->size;
            entry->data.isvar_issvar.vreg = var->vreg;
            entry->data.isvar_issvar.veqv = var->veqv;
        }
        vartreeinfo(var->left);
        var = var->right;
    }
}

/*
00456A2C oneproc
*/
void entervregveqv(void) {
    vartreeinfo(curproc->vartree);
}

/*
00479778 func_00479778
00479DC4 eliminduct
0047D878 deccount
*/
void deccount(struct Expression *expr, struct Graphnode *node) {
    switch (expr->type) {
        case isvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                deccount(expr->data.isvar_issvar.copy, node);
            } else {
                expr->count--;
                if (expr->count == 0) {
                    expr->var_access_list->type = 0;
                    delentry(expr);
                }
            }
            break;

        case islda:
        case isconst:
        case isrconst:
            break;

        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                deccount(expr->data.isvar_issvar.copy, node);
            } else if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) ||
                    (!expr->initialVal && !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                expr->count--;
                if (expr->count == 0) {
                    expr->var_access_list->type = 0;
                    if (expr->data.isvar_issvar.assignment == NULL || expr->data.isvar_issvar.assignment->opc == Unop) {
                        deccount(expr->data.isvar_issvar.outer_stack, node);
                    }
                    delentry(expr);
                }
            }
            break;

        case isilda:
            if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete)) {
                expr->count--;
                if (expr->count == 0) {
                    deccount(expr->data.islda_isilda.outer_stack, node);
                    delentry(expr);
                }
            }
            break;

        case isop:
            if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) ||
                    (!expr->data.isop.anticipated && !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                expr->count--;
                if (expr->count == 0) {
                    if (expr->data.isop.opc == Uiequ ||
                            expr->data.isop.opc == Uigeq ||
                            expr->data.isop.opc == Uigrt ||
                            expr->data.isop.opc == Uildv ||
                            expr->data.isop.opc == Uileq ||
                            expr->data.isop.opc == Uiles ||
                            expr->data.isop.opc == Uilod ||
                            expr->data.isop.opc == Uineq ||
                            expr->data.isop.opc == Uirld ||
                            expr->data.isop.opc == Uirlv) {
                        expr->var_access_list->type = 0;
                    }

                    deccount(expr->data.isop.op1, node);
                    if (optab[expr->data.isop.opc].is_binary_op) {
                        deccount(expr->data.isop.op2, node);
                    }

                    delentry(expr);
                }
            }
            break;

        default:
            caseerror(1, 788, "uoptutil.p", 10);
            break;
    }
}

/*
00434720 processargs
0043A0CC copyline
*/
void getoption(int uopt_option, int n) {
    int new_pdeftabsize;
    int i;

    switch (uopt_option) {
        case UCO_VARARGS:
            if (pdeftabsize < 4) {
                pdeftab = (struct PdefEntry *)alloc_realloc(pdeftab, pdeftabsize * 16 / 16, (pdeftabsize * 16 + 8 * 16) / 16, &perm_heap);
                new_pdeftabsize = pdeftabsize + 8;
                for (i = pdeftabsize; i < new_pdeftabsize; i++) {
                    pdeftab[i].opc = Unop;
                }
                pdeftabsize = new_pdeftabsize;
            }
            if (pdefmax < 0) {
                i = 0;
            } else {
                i = pdefmax + (pdeftab[pdefmax].size + 3) / 4;
            }
            while (i < 4) {
                struct PdefEntry *entry = &pdeftab[i];
                entry->opc = Updef;
                entry->dtype = Ldt;
                entry->offset = i * 4;
                entry->size = 4;
                entry->unk3 = true;
                pdefmax = i++;
            }
            can_elim_tail = false;
            highestmdef = ((n >> 16) & 0xffff) + 8;
            break;

        case UCO_SOURCE:
            if (!fortran_lang) {
                switch (n) {
                    case PASCAL_SOURCE:
                        lang = LANG_PASCAL;
                        break;
                    case FORTRAN_SOURCE:
                        lang = LANG_FORTRAN;
                        break;
                    case C_SOURCE:
                        lang = LANG_C;
                        break;
                    case ADA_SOURCE:
                        lang = LANG_ADA;
                        break;
                    case PL1_SOURCE:
                        lang = LANG_PL1;
                        break;
                    case COBOL_SOURCE:
                        lang = LANG_COBOL;
                        break;
                    case RESERVED1_SOURCE:
                        lang = LANG_RESERVED1;
                        break;
                    default:
                        caseerror(1, 881, "uoptutil.p", 10);
                        break;
                }
            }
            break;

        case UCO_NO_R23:
            no_r23 = n != 0;
            break;

        case UCO_STACK_REVERSED:
            stack_reversed = true;
            break;

        case UCO_ZDBUG:
            dbugno = n;
            if (n > 0 && !listwritten) {
                rewrite(&list, listname, 1024, 0);
                listwritten = true;
            }
            break;

        case UCO_ZMOVC:
            movcostused = (float)n;
            break;

        case UCO_ZCOPY:
            docopyprog = n != 0;
            break;

        case UCO_ZCOMO:
            docm = n != 0;
            break;

        case UCO_ZSTOR:
            dordstore = n != 0;
            break;

        case UCO_ZSCM:
            doscm = n != 0;
            break;
    }
}

/* 
00425618 func_00425618
0043CFCC readnxtinst
0044F3C0 unaryfold
0047DFDC cutbits64
*/
int cutbits(int val, int length, enum Datatype dtype) {
    int result;

    // XXX: undefined behavior, mips sllv automatically masks the lowest 5 bits
    result = val & ((1 << (length & 31)) - 1);
    if (dtype == Jdt) {
        val = 1 << ((length + 31) & 31);
        result = (result ^ val) - val;
    }
    return result;
}

/* 
0043CFCC readnxtinst
*/
long long cutbits64(long long val, int length, enum Datatype dtype) {
    union Valu t;
    t.dwval = val;

    if (length > 32) {
        if (dtype == Kdt) {
            t.dwpart.dwval_h = cutbits(t.dwpart.dwval_h, length - 32, Ldt);
        } else {
            t.dwpart.dwval_h = cutbits(t.dwpart.dwval_h, length - 32, Jdt);
        }
    } else if (length == 32) {
        if (dtype == Kdt) {
            t.dwpart.dwval_h = 0;
        } else {
            // sign extend
            t.dwpart.dwval_h = t.dwpart.dwval_l >> 31;
        }
    } else if (dtype == Kdt) {
        t.dwpart.dwval_l = cutbits(t.dwpart.dwval_l, length, Ldt);
        t.dwpart.dwval_h = 0;
    } else {
        t.dwpart.dwval_l = cutbits(t.dwpart.dwval_l, length, Jdt);
        // sign extend
        t.dwpart.dwval_h = t.dwpart.dwval_l >> 31;
    }
    return t.dwval;
}

/*
0043B334 func_0043B334
0043CFCC readnxtinst
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
00470AAC form_rem
00470DD8 form_neq0
0047E3BC binopwithconst
*/
struct Expression *enter_const(int num, Datatype datatype, struct Graphnode *graphnode) {
    unsigned short hash;
    struct Expression *entry;
    bool found;

    hash = isconsthash(num);
    entry = table[hash];
    found = false;

    while (!found && entry != NULL) {
        if (entry->type == isconst && entry->datatype == datatype && entry->data.isconst.number.intval == num) {
            found = true;
        } else {
            entry = entry->next;
        }
    }

    if (!found) {
        entry = appendchain(hash);
        entry->type = isconst;
        entry->datatype = datatype;
        if (datatype == Idt || datatype == Kdt) {
            entry->data.isconst.number.longval = num;
        } else {
            entry->data.isconst.number.intval = num;
        }
        entry->data.isconst.size = sizeoftyp(datatype);
        entry->var_access_list = NULL;
        entry->graphnode = graphnode;
    }

    return entry;
}

/* 
0046BA10 change_to_const_eq
*/
struct Expression *enter_lda(int addr, struct Expression *expr, struct Graphnode *graphnode) {
    unsigned short hash;
    struct Expression *lda;
    bool found;

    hash = isvarhash(expr->data.islda_isilda.address);
    lda = table[hash];
    found = false;
    while (!found && lda != NULL) {
        if (lda->type == islda && lda->data.islda_isilda.offset == addr &&
                addreq(lda->data.islda_isilda.address, expr->data.islda_isilda.address) &&
                lda->data.islda_isilda.size == expr->data.islda_isilda.size) {
            found = true;
        } else {
            lda = lda->next;
        }
    }

    if (!found) {
        lda = appendchain(hash);
        lda->type = islda;
        lda->datatype = Adt;
        lda->graphnode = graphnode;
        lda->var_access_list = NULL;
        lda->data.islda_isilda.offset = addr;
        lda->data.islda_isilda.size = expr->data.islda_isilda.size;
        lda->data.islda_isilda.address = expr->data.islda_isilda.address;
    }

    return lda;
}

/* 
0043B1DC func_0043B1DC
0043B23C func_0043B23C
0043CFCC readnxtinst
004516BC reduceixa
0046D07C unroll_resetincr
0046D0D8 unroll_resetincr_mod
0046E77C oneloopblockstmt
*/
struct Expression *binopwithconst(Uopcode opc, struct Expression *left, int value) {
    struct Expression *constant; // sp30
    struct Expression *binop;    // sp2C
    unsigned short hash;
    Datatype dtype;
    bool found;

    if (left->type == isop) {
        dtype = left->data.isop.datatype;
    } else {
        dtype = left->datatype;
    }

    if (left->type == isconst) {
        switch (opc) {
            case Uadd:
                binop = enter_const(left->data.isconst.number.intval + value, dtype, curgraphnode);
                break;

            case Umpy:
                binop = enter_const(left->data.isconst.number.intval * value, dtype, curgraphnode);
                break;

            case Uneq:
                binop = enter_const(left->data.isconst.number.intval != value, dtype, curgraphnode);
                break;

            default:
                caseerror(1, 1056, "uoptutil.p", 10);
                break;
        }
    } else {
        constant = enter_const(value, dtype, curgraphnode);
        hash = isophash(opc, left, constant);
        binop = table[hash];
        found = false;
        while (!found && binop != NULL) {
            if (binop->type == isop && binop->data.isop.opc == opc && binop->datatype == dtype && binop->graphnode == curgraphnode &&
            ((binop->data.isop.op1 == constant && binop->data.isop.op2 == left) ||
             (binop->data.isop.op1 == left && binop->data.isop.op2 == constant))) {
                found = true;
            } else {
                binop = binop->next;
            }
        }

        if (!found) {
            binop = appendchain(hash);
            binop->type = isop;
            binop->datatype = dtype;
            binop->unk4 = false;
            binop->visited = 0;
            binop->count = 1;
            binop->graphnode = curgraphnode;
            binop->data.isop.opc = opc;
            binop->data.isop.datatype = dtype;
            binop->data.isop.op1 = left;
            binop->data.isop.op2 = constant;
            binop->data.isop.aux2.v1.overflow_attr = false;
            binop->data.isop.temploc = 0;
        } else {
            binop->count++;
            decreasecount(left);
        }
    }

    return binop;
}

/* 
0041F138 inreg
0045DA18 formlivbb
0045DFAC passedinreg
0045FBB4 func_0045FBB4
00464BFC localcolor
0046732C isconstrained
00469280 globalcolor
*/
int regclassof(struct IChain *ichain) {
    Datatype dtype;

    if (ichain->type == isop) {
        dtype = ichain->isop.datatype;
    } else {
        dtype = ichain->dtype;
    }

    if (dtype == Qdt || dtype == Rdt) {
        return 2;
    } else {
        return 1;
    }
}

/*
004230F0 emit_expr
00426FA4 func_00426FA4
0045E45C func_0045E45C
0045E5C4 func_0045E5C4
   TODO: enum for optype
*/
bool constinreg(Datatype dtype, int unused, union Constant cval, unsigned char optype) {
    if (!do_const_in_reg) {
        return false;
    } else if (optype == 4) {
        return false;
    } else if (dtype == Qdt || dtype == Rdt || dtype == Fdt) {
        return true;
    } else if ((dtype == Gdt || dtype == Mdt || dtype == Ndt || dtype == Sdt) || cval.intval == 0 || (!mips3_64data && (dtype == Idt || dtype == Kdt))) {
        return false;
    } else if (optype == 5) {
        return !is_power2(cval.intval);
    } else if (cval.intval < -0x8000 || cval.intval >= 0x10000) {
        return 1;
    } else {
        switch (optype) {
            case 0:
                return false;

            case 3:
                return true;

            case 1:
                return cval.intval >= 0x8000;

            case 2:
                return cval.intval < 0;

            default:
                caseerror(1, 1127, "uoptutil.p", 10);
                break;
        }
    }
    return false;
}

/*
0045E5C4 func_0045E5C4
*/
bool ldainreg(Memtype mtype, int addr, unsigned char optype) {
    if (!do_const_in_reg) {
        return false;
    }
    if (optype == 4) {
        return false;
    }
    return true;
}

/*
0041550C find_replacements
00444A84 isearchloop
*/
bool in_indmults(struct IChain *ichain) {
    if (ichain != NULL && ichain->type == isop){
        return bvectin0(ichain->bitpos, &indmults);
    } else {
        return true; // ?
    }
}

/*
0043CFCC readnxtinst
0044F1B8 istrfold
0047E938 checkincre
*/
bool checkincre(struct Expression *entry, struct Expression *entry2, int *result) {
    int result1;
    int result2;

    switch (entry->type) {
        case isvar:
        case issvar:
            if (addreq(entry->data.isvar_issvar.location, entry2->data.isvar_issvar.location)) {
                *result = 1;
                return true;
            }
            return false;

        case isop:
            if (optab[entry->data.isop.opc].is_binary_op) {
                if (entry->data.isop.opc == Uadd || entry->data.isop.opc == Usub) {
                    if (checkincre(entry->data.isop.op1, entry2, &result1) && checkincre(entry->data.isop.op2, entry2, &result2)) {
                        *result = entry->data.isop.opc == Uadd ? result1 + result2 : result1 - result2;
                        return true;
                    }
                }
            } else if (entry->data.isop.opc == Udec || entry->data.isop.opc == Uinc || entry->data.isop.opc == Uneg ||
                      (entry->data.isop.opc == Ucvt &&
                        (entry->datatype == Adt || entry->datatype == Hdt || entry->datatype == Jdt || entry->datatype == Ldt) &&
                        (entry->data.isop.aux.cvtfrom == Adt || entry->data.isop.aux.cvtfrom == Hdt || entry->data.isop.aux.cvtfrom == Jdt || entry->data.isop.aux.cvtfrom == Ldt)))
            {
                if (checkincre(entry->data.isop.op1, entry2, &result1)) {
                    *result = entry->data.isop.opc == Uneg ? -result1 : result1;
                    return true;
                }
            }
            return false;

        case islda:
        case isconst:
        case isilda:
        case isrconst:
            *result = 0;
            return true;

        default:
            caseerror(1, 1194, "uoptutil.p", 10);
            return false; // originally returned uninitialized stack variable
    }
}

/*
00430680 func_00430680
004313E4 func_004313E4
00455518 func_00455518
0047EBB0 findincre
*/
int findincre(struct Expression *entry) {
    int result1;
    int result2;

    switch (entry->type) {
        case isconst:
            return entry->data.isconst.number.intval;

        case islda:
        case isvar:
        case isilda:
        case issvar:
        case isrconst:
            return 0;

        case isop:
            if (optab[entry->data.isop.opc].is_binary_op) {
                result1 = findincre(entry->data.isop.op1);
                result2 = findincre(entry->data.isop.op2);
                return entry->data.isop.opc == Uadd ? result1 + result2 : result1 - result2;
            }
            result1 = findincre(entry->data.isop.op1);
            switch (entry->data.isop.opc) {
                case Uneg:
                    return -result1;
                case Ucvt:
                    return result1;
                case Uinc:
                    return result1 + entry->data.isop.datasize;
                case Udec:
                    return result1 + entry->data.isop.datasize;
                default:
                    caseerror(1, 1251, "uoptutil.p", 10);
                    return 0; // originally an uninitialized stack value was returned
            }
            return 0;

        default:
            caseerror(1, 1238, "uoptutil.p", 10);
            return 0; // originally an uninitialized stack value was returned
    }
}

/*
0041550C find_replacements
0047ED9C countvars
*/
int countvars(struct IChain *ichain) {
    switch (ichain->type) {
        case islda:
        case isconst:
        case isilda:
        case isrconst:
            return 0;

        case isvar:
        case issvar:
            return 1;

        case isop:
            if (optab[ichain->isop.opc].is_binary_op) {
                return countvars(ichain->isop.op1) + countvars(ichain->isop.op2);
            } else {
                return countvars(ichain->isop.op1);
            }

        default:
            caseerror(1, 1265, "uoptutil.p", 10);
            return 0;
    }
}

/*
0043CFCC readnxtinst
0047EEA4 hasvolatile
*/
bool hasvolatile(struct Expression *expr) {
    if (expr->type != isop) {
        return expr->type == isvar && expr->data.isvar_issvar.is_volatile;
    }

    if (expr->data.isop.opc == Uildv) {
        return true;
    }

    if (hasvolatile(expr->data.isop.op1)) {
        return true;
    }

    return optab[expr->data.isop.opc].is_binary_op && hasvolatile(expr->data.isop.op2);
}

/*
004175BC copypropagate
0043CFCC readnxtinst
0046E77C oneloopblockstmt
004737E0 par_to_str
00479DC4 eliminduct
0047EF74 has_volt_ovfw
*/
bool has_volt_ovfw(struct Expression *expr) {
    if (expr->type != isop) {
        return expr->type == isvar && expr->data.isvar_issvar.is_volatile;
    } else if (expr->data.isop.opc == Uildv) {
        return true;
    } else if (expr->count > 1) {
        return false;
    } else if (expr->data.isop.aux2.v1.overflow_attr &&
            (expr->data.isop.opc != Uequ &&
             expr->data.isop.opc != Ugeq &&
             expr->data.isop.opc != Ugrt &&
             expr->data.isop.opc != Uleq &&
             expr->data.isop.opc != Ules &&
             expr->data.isop.opc != Uneq)) {
        return true;
    } else {
        return has_volt_ovfw(expr->data.isop.op1) ||
            (optab[expr->data.isop.opc].is_binary_op && has_volt_ovfw(expr->data.isop.op2));
    }
}

/*
0041550C find_replacements
0043ABD0 incroccurrence
0043CFCC readnxtinst
0047F0AC has_ilod
*/
bool has_ilod(struct Expression *expr) {
    if (expr->type != isop) {
        return false;
    }

    if (expr->data.isop.opc == Uilod) {
        return true;
    }

    if (has_ilod(expr->data.isop.op1)) {
        return true;
    }

    return optab[expr->data.isop.opc].is_binary_op && has_ilod(expr->data.isop.op2);
}

/*
0041550C find_replacements
*/
bool is_incr(struct Expression *expr) {
    if (expr->type != isop) {
        return false;
    }

    if (expr->data.isop.opc != Uadd && expr->data.isop.opc != Usub) {
        return false;
    }

    if (expr->datatype != Idt && expr->datatype != Jdt && expr->datatype != Kdt && expr->datatype != Ldt) {
        return false;
    }

    if (expr->data.isop.op1->type == isvar &&
        expr->data.isop.op1->data.isvar_issvar.location.memtype == Pmt &&
        expr->data.isop.op2->type == isconst)
    {
        return true;
    }

    if (expr->data.isop.op2->type == isvar &&
        expr->data.isop.op2->data.isvar_issvar.location.memtype == Pmt &&
        expr->data.isop.op1->type == isconst)
    {
        return true;
    }

    return false;
}

/*
0040C254 setbit
0040C4C4 checkbvlist
0040F7B8 checkinitbvlivran
0043A0CC copyline
00445E44 exprimage
0047CF0C newbit
0047DBB4 getoption
*/
void *alloc_realloc(void *old, ssize_t oldsize16, ssize_t newsize16, struct AllocBlock **heap) {
    // Did they miss that alloc_resize already exist?

    void *addr;

    addr = alloc_new(newsize16 * 16, heap);
    if (addr == NULL) {
        outofmem = true;
        return old;
    }

    memcpy(addr, old, oldsize16 * 16);

    if (old != NULL) {
        alloc_dispose(old, heap);
    }

    return addr;
}

/*
00420A3C prolog
00421C00 epilog
0045DA18 formlivbb
*/
bool fitparmreg(int arg0, int arg1, int arg2, int arg3) {
    if ((arg0 % int_reg_size) == 0) {
        if ((arg1 % int_reg_size) == 0) {
            return true;
        }
    }
    if (!bigendian) {
        return (arg0 == arg2);
    }
    return ((arg2 + arg3) == (arg0 + arg1));
}

/*
00410204 codemotion
004324F4 findinduct
*/
bool trap_imply(struct IChain *trap_ichain, struct IChain *ichain) {
    if (ichain->type != isop) {
        return false;
    }

    if (trap_ichain->isop.opc != ichain->isop.opc || trap_ichain->isop.op1 != ichain->isop.op1 || ichain == trap_ichain) {
        return false;
    }

    switch (trap_ichain->isop.opc) {
        case Utpge:
        case Utpgt:
            if (trap_ichain->dtype == Jdt) {
                return trap_ichain->isop.op2->isconst.number.intval < ichain->isop.op2->isconst.number.intval;
            }
            if (trap_ichain->dtype == Ldt) {
                return trap_ichain->isop.op2->isconst.number.uintval < ichain->isop.op2->isconst.number.uintval;
            }
            return false;

        case Utple:
        case Utplt:
            if (trap_ichain->dtype == Jdt) {
                return trap_ichain->isop.op2->isconst.number.intval > ichain->isop.op2->isconst.number.intval;
            }
            if (trap_ichain->dtype == Ldt) {
                return trap_ichain->isop.op2->isconst.number.uintval > ichain->isop.op2->isconst.number.uintval;
            }
            return false;

        default:
            caseerror(1, 1397, "uoptutil.p", 10);
            return false;
    }
}

/*
0043CFCC readnxtinst
0046E77C oneloopblockstmt
*/
int trapstat_imply(struct Statement *stat, struct Expression *op1, struct Expression *op2) {
    if (op1 != stat->expr) {
        return 0;
    }
    if (op2 == stat->u.trap.expr2) {
        return 1;
    }

    if (stat->opc == Utpeq || stat->opc == Utpne) {
        return 0;
    }

    if (stat->u.trap.expr2->type != isconst || op2->type != isconst) {
        return 0;
    }
    if (stat->u.trap.expr2->type != isrconst || op2->type != isrconst) { // wait what
        return 0;
    }

    // dead code
    if (stat->u.trap.dtype == Jdt) {
        switch (stat->opc) {
            case Utpge:
            case Utpgt:
                if (stat->u.trap.expr2->data.isconst.number.intval < op2->data.isconst.number.intval) {
                    return 1;
                } else {
                    return -1;
                }

            case Utple:
            case Utplt:
                if (op2->data.isconst.number.intval < stat->u.trap.expr2->data.isconst.number.intval) {
                    return 1;
                } else {
                    return -1;
                }

            default: 
                caseerror(1, 1422, "uoptutil.p", 10);
                break;
        }
    } else if (stat->u.trap.dtype == Ldt) {
        switch (stat->opc) {
            case Utpge:
            case Utpgt:
                if (stat->u.trap.expr2->data.isconst.number.uintval < op2->data.isconst.number.uintval) {
                    return 1;
                } else {
                    return -1;
                }

            case Utple:
            case Utplt:
                if (op2->data.isconst.number.uintval < stat->u.trap.expr2->data.isconst.number.uintval) {
                    return 1;
                } else {
                    return -1;
                }

            default:
                caseerror(1, 1429, "uoptutil.p", 10);
                break;
        }
    }

    return 0;
}

/*
0043C56C func_0043C56C
0043CFCC readnxtinst
00470AAC form_rem
0047E6D8 constinreg
*/
bool is_power2(unsigned int v) {
    return (v & (v - 1)) == 0 && v != 0;
}

/*
0047F850 is_power5
*/
bool is_power5(unsigned int v) {
    if (v == 0) {
        return false;
    }
    if (v == 1) {
        return true;
    }
    if ((v % 5U) != 0U) {
        return false;
    }
    return is_power5(v / 5U);
}

/*
00414108 insert_copied_expr
0043CFCC readnxtinst
*/
int getfloatval(struct Expression *expr, int *exponent10) {
    struct RealstoreData *pos;
    int div;
    char *str;
    bool negative;
    int i;
    int len;
    int val;
    bool in_fraction;
    int num_decimals;
    bool e_negative;
    int e_val;

    div = expr->data.isconst.number.real.disp / 256;
    pos = realstore;
    while (div > 0) {
        pos = pos->next;
        div--;
    }
    str = &pos->c[expr->data.isconst.number.real.disp & 0xff];
    negative = str[0] == '-';
    if (negative || str[0] == '+') {
        i = 1;
    } else {
        i = 0;
    }
    len = CONSTVAL.swpart.Ival;
    val = 0;
    in_fraction = false;
    num_decimals = 0;
    for (; str[i] != 'e' && i != len; i++) {
        if (str[i] != '.') {
            if (val >= 100000000) {
                return 0x7FFFFFFF;
            }
            val = val * 10 + (str[i] - '0');
            if (in_fraction) {
                num_decimals++;
            }
        } else {
            in_fraction = true;
        }
    }
    if (len > i) {
        i++; // e
        e_negative = str[i] == '-';
        if (e_negative || str[i] == '+') {
            i++;
        }
        e_val = 0;
        for (; i != len; i++) {
            if (e_val >= 100000000) {
                return 0x7FFFFFFF;
            }
            e_val = e_val * 10 + (str[i] - '0');
        }
        if (e_negative) {
            *exponent10 = -num_decimals - e_val;
        } else {
            *exponent10 = e_val - num_decimals;
        }
    } else {
        *exponent10 = -num_decimals;
    }
    if (val != 0) {
        while (val % 10 == 0) {
            val /= 10;
            (*exponent10)++;
        }
    }
    return negative ? -val : val;
}

/*
0043CFCC readnxtinst
*/
int val_when_exponent0(int a, int exponent10) { // returns a * 10^exponent10
    int value;

    if (a == 0x7FFFFFFF || exponent10 < -9 || exponent10 >= 10) {
        return 0x7FFFFFFF;
    }
    if (exponent10 == 0) {
        return a;
    }
    if (exponent10 < 0) {
        value = 1;
        do {
            value *= 10;
        } while (++exponent10 < 0);

        if ((a % value) == 0) {
            return a / value;
        }
        return 0x7FFFFFFF;
    } else {
        do {
            if (mpyovfw_signed(a, 10)) {
                return 0x7FFFFFFF;
            }
            a *= 10;
        } while (--exponent10 > 0);
        return a;
    }
}


/*
0041F048 genrop
0041F6F0 base_in_reg
0042020C gen_static_link
004205F8 genrlodrstr
00420A3C prolog
00421C00 epilog
00422AF0 func_00422AF0
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
0042BF08 reemit
00469280 globalcolor
0047FDB4 in_reg_masks
*/
int coloroffset(int index) {
    static MipsRegister coloroffsettable[35] = {
        // class 0 (23), general purpose registers
        // 1     2     3     4     5     6     7     8     9    10    11    12    13
        r_v0, r_v1, r_a0, r_a1, r_a2, r_a3, r_t0, r_t1, r_t2, r_t3, r_t4, r_t5, r_ra,   // caller-saved registers ("er"regs)
        //14    15    16    17    18    19    20    21    22    23
        r_s0, r_s1, r_s2, r_s3, r_s4, r_s5, r_s6, r_s7, r_fp, r_ra,                     // callee-saved registers ("ee"regs)
        // class 1 (12), floating point registers
        //24     25      26     27     28     29
        r_f0,  r_f2,  r_f12, r_f14, r_f16, r_f18,   // caller-saved fp registers
        //30     31      32     33     34     35
        r_f20, r_f22, r_f24, r_f26, r_f28, r_f30,   // callee-saved fp registers
    };
    return coloroffsettable[index - 1];
}

/*
00468A14 cupcosts
00469280 globalcolor
*/
int in_reg_masks(int index, int arg1, int arg2) {
    int bit_index;
    int shifted;

    bit_index = coloroffset(index) >> 2;

    // Maybe arg1 and arg2 are really one single 64-bit integer
    if (bit_index < 32) {
        shifted = (int)((unsigned int)arg1 << bit_index);
    } else {
        shifted = (int)((unsigned int)arg2 << bit_index);
    }
    return shifted < 0;
}

/*
0047FF7C skipproc
*/
static bool func_0047FE1C(void) {
    if (lastcopiedu.Ucode.Opc != OPC) {
        return false;
    }

    switch (OPC) {
        case Ucsym:
        case Uesym:
        case Ufsym:
        case Ugsym:
        case Ulsym:
            return lastcopiedu.Ucode.I1 == IONE;

        case Usdef:
            return lastcopiedu.Ucode.I1 == IONE && lastcopiedu.intarray[2] == u.intarray[2];

        case Uvreg:
            return lastcopiedu.Ucode.I1 == IONE && lastcopiedu.intarray[3] == u.intarray[3];

        default:
            caseerror(1, 1619, "uoptutil.p", 10);
            return false; // originally uninitialized stack value was returned
    }
}

/*
00456A2C oneproc
*/
void skipproc(int reason) {
    bool unk;

    if (warn_flag != 1) {
        writeln(err.c_file);
        if (reason == 0) {
            write_string(err.c_file, "uopt: Warning: ", 15, 15);
            write_string(err.c_file, entnam0, 1024, entnam0len);
            write_string(err.c_file, ": this procedure not optimized due to memory limitation.", 56, 56);
            writeln(err.c_file);
        } else if (reason == 1) {
            write_string(err.c_file, "uopt: Warning: ", 15, 15);
            write_string(err.c_file, entnam0, 1024, entnam0len);
            write_string(err.c_file, ": this procedure not optimized because it", 41, 41);
            writeln(err.c_file);
            write_string(err.c_file, "      exceeds size threshold; to optimize this procedure, use -Olimit option", 76, 76);
            writeln(err.c_file);
            write_string(err.c_file, "      with value >=", 19, 19);
            write_integer(err.c_file, curproc->num_bbs, 5, 10);
            write_char(err.c_file, '.', 1);
            writeln(err.c_file);
        } else if (reason == 2) {
            write_string(err.c_file, "uopt: Warning: ", 15, 15);
            write_string(err.c_file, entnam0, 1024, entnam0len);
            write_string(err.c_file, ": optimization suppressed by control file.", 42, 42);
            writeln(err.c_file);
        }
        warned = true;
    }
    if (o3opt && reason == 0) {
        write_string(err.c_file, "                 Recompilation with -O2 required.", 49, 49);
        writeln(err.c_file);
        abort();
    }
    fflush(err.c_file);
    if (reason == 0) {
        initur(sourcename);
        do {
            readuinstr(&u, ustrptr);
            if (OPC == Ueof) {
                write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up......", 59, 59);
                writeln(err.c_file);
                fflush(err.c_file);
                abort();
            }
        } while (!(OPC == Uent && curblk == IONE));
    }
    unk = lastcopiedu.Ucode.Opc != Unop;
    do {
        readuinstr(&u, ustrptr);
        if (OPC == Ueof) {
            write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up.......", 60, 60);
            writeln(err.c_file);
            fflush(err.c_file);
            abort();
        }
        if (unk) {
            switch (OPC) {
                case Ucsym:
                case Uesym:
                case Ufsym:
                case Ugsym:
                case Uinit:
                case Ulsym:
                case Usdef:
                case Uvreg:
                    unk = !func_0047FE1C();
                    if (OPC == Uvreg) {
                        uwrite(&u);
                    }
                    break;

                default:
                    uwrite(&u);
                    break;
            }
        } else {
            // was originally the same BB as the default case above
            uwrite(&u);
        }
    } while (OPC != Uend);
}

/*
00447F90 check_loop_coincidence
00448928 check_loop_induct_usages
*/
bool inside_loop(struct Loop *loop, int loopno) {
    while (loop != NULL) {
        if (loop->loopno == loopno) {
            return true;
        }
        loop = loop->outer;
    }
    return false;
}

/*
0042AADC func_0042AADC
0042B890 func_0042B890
0046123C func_0046123C
00480540 check_loop_nest_ix_cand
*/
bool check_ix_candidate(struct IChain *ichain, int loopno) {
    struct ScmThing *scm;

    scm = looptab[loopno].unk4;
    while (scm != NULL) {
        if (scm->ichain == ichain) {
            if (scm->unk10 == 1) {
                return scm->unk11;
            }
            break;
        }
        scm = scm->next;
    }

    return false;
}

/*
004230F0 emit_expr
*/
void check_loop_nest_ix_cand(struct IChain *ichain, int *loopno, int *ix_cand) {
    struct Loop *loop;

    *ix_cand = check_ix_candidate(ichain, *loopno);
    loop = looptab[*loopno].loop->outer;
    while (!*ix_cand && loop != NULL) {
        *loopno = loop->loopno;
        *ix_cand = check_ix_candidate(ichain, *loopno);
        loop = looptab[*loopno].loop->outer;
    }
}

/*
0046123C func_0046123C
*/
bool check_ix_source(struct IChain *ichain, int loopno) {
    struct ScmThing *scm;

    scm = looptab[loopno].unk4;
    while (scm != NULL) {
        if (scm->ichain == ichain) {
            if (scm->unk10 == 3) {
                return scm->unk11;
            }
            break;
        }
        scm = scm->next;
    }

    return false;
}

/*
004230F0 emit_expr
0042AADC func_0042AADC
*/
struct ScmThing *get_ix_source(unsigned char unk11, int loopnum) {
    struct ScmThing *source;

    source = looptab[loopnum].unk4;
    if (source->unk11 != unk11 || source->unk10 != 3) {
        source = source->next;
    }
    return source;
}
