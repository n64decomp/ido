#ifndef __mips
#include <ncurses.h>

#include "libu/libu.h"
#include "uopt/uoptdata.h"
#include "uopt/uoptutil.h"
#include "uopt/uoptreg2.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

#include <math.h>

#include "debug.h"

#undef UCVT
#undef UENT
#undef UIEQU
#undef OPC
#undef DTYPE
#undef MTYPE
#undef LEXLEV
#undef IONE
#undef DTYPE2
#undef POP
#undef PUSH
#undef EXTRNAL
#undef LENGTH
#undef OFFSET
#undef CONSTVAL
#undef OFFSET2
#undef ARYOFF
#undef INITVAL
#undef LBOUND
#undef HBOUND
#undef LBOUND_L
#undef LBOUND_H
#undef HBOUND_L
#undef HBOUND_H

#define UCVT(u)    Uopcde
#define UENT(u)    Uopcde.uent
#define UIEQU(u)   Uopcde.uiequ1
#define OPC(u)     (u).Ucode.Opc
#define DTYPE(u)   (u).Ucode.Dtype
#define MTYPE(u)   (u).Ucode.Mtype
#define LEXLEV(u)  (u).Ucode.Lexlev
#define IONE(u)    (u).Ucode.I1
#define DTYPE2(u)  (u).Ucode.Uopcde.secondty.Dtype2
#define POP(u)     (u).Ucode.Uopcde.uent.Pop
#define PUSH(u)    (u).Ucode.Uopcde.uent.Push
#define EXTRNAL(u) (u).Ucode.Uopcde.uent.Extrnal
#define LENGTH(u)  (u).Ucode.Uopcde.uiequ1.Length
#define OFFSET(u)   (u).Ucode.Uopcde.uiequ1.offset
#define CONSTVAL(u) (u).Ucode.Uopcde.uiequ1.uop2.Constval
#define OFFSET2(u)  (u).Ucode.Uopcde.uiequ1.uop2.uinit.offset2
#define ARYOFF(u)   (u).Ucode.Uopcde.uiequ1.uop2.uinit.aryoff
#define INITVAL(u)  (u).Ucode.Uopcde.uiequ1.uop2.uinit.initval
#define LBOUND(u)  (u).Ucode.Uopcde.uiequ1.uop2.uxjp.dwbnds.lbound
#define HBOUND(u)  (u).Ucode.Uopcde.uiequ1.uop2.uxjp.dwbnds.hbound
#define LBOUND_L(u)  (u).Ucode.Uopcde.uiequ1.uop2.uxjp.swbnds.lbound_l
#define LBOUND_H(u)  (u).Ucode.Uopcde.uiequ1.uop2.uxjp.swbnds.lbound_h
#define HBOUND_L(u)  (u).Ucode.Uopcde.uiequ1.uop2.uxjp.swbnds.hbound_l
#define HBOUND_H(u)  (u).Ucode.Uopcde.uiequ1.uop2.uxjp.swbnds.hbound_h

const char *reg_names[64] = {
    "$zero",
    "$at",
    "$v0", "$v1",
    "$a0", "$a1", "$a2", "$a3",
    "$t0", "$t1", "$t2", "$t3", "$t4", "$t5", "$t6", "$t7",
    "$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7",
    "$t8", "$t9",
    "$k0", "$k1",
    "$gp",
    "$sp", "$fp",
    "$ra",
    "$f0", "$f1", "$f2", "$f3",
    "$f4", "$f5", "$f6", "$f7", "$f8", "$f9", "$f10", "$f11",
    "$f12", "$f13", "$f14", "$f15",
    "$f16", "$f17", "$f18", "$f19",
    "$f20", "$f21", "$f22", "$f23", "$f24", "$f25",
    "$f26", "$f27", "$f28", "$f29", "$f30", "$f31",
};

struct FieldNames {
    const char *lexlev;
    const char *ione;
    const char *offset;
    const char *length;
};

static struct FieldNames field_names[Uirsv + 1] = {
    [Uloc] = {.lexlev="page", .ione="line"},

    [Uixa] = {.ione="i"},
    [Uilod] = {/* .lexlev="bits", */ .ione="i"},
    [Uistr] = {/* .lexlev="bits", */ .ione="i"},
    [Umov] = {.lexlev="dst_align", .ione="src_align"},

    [Uregs] = {.ione="class"},
};

static struct FieldNames default_names = {.lexlev="lexlev", .ione="num", .offset="off", .length="len"};

static const char *lexlev_name(union Bcode *b) {
    if (field_names[OPC(*b)].lexlev != NULL) return field_names[OPC(*b)].lexlev;

    return default_names.lexlev;
}

static const char *num_name(union Bcode *b) {
    if (field_names[OPC(*b)].ione != NULL) return field_names[OPC(*b)].ione;

    return default_names.ione;
}

char mtype_name(enum Memtype type) {
    switch (type) {
        default:  return 'U';
        case Zmt: return 'Z';
        case Pmt: return 'P';
        case Tmt: return 'T';
        case Smt: return 'S';
        case Mmt: return 'M';
        case Rmt: return 'R';
        case Amt: return 'A';
    }
}
/* 

char dtype_name(enum Datatype type) {
    switch (type) {
        case Adt: return 'A';
        case Cdt: return 'C';
        case Fdt: return 'F';
        case Gdt: return 'G';
        case Hdt: return 'H';
        case Idt: return 'I';
        case Jdt: return 'J';
        case Kdt: return 'K';
        case Ldt: return 'L';
        case Mdt: return 'M';
        case Ndt: return 'N';
        case Pdt: return 'P';
        case Qdt: return 'Q';
        case Rdt: return 'R';
        case Sdt: return 'S';
        case Wdt: return 'W';
        case Xdt: return 'X';
        case Zdt: return 'Z';
        default:  return 'U';
    }
}
 */

void dl_print_dtype(struct DisplayLine *dl, enum Datatype type) {
    dl_printf(dl, "%s ", dtype_name(type));
            /* 
    char dt = dtype_name(type);
    switch (dt)
    {
        case 'I': dl_printf(dl, "s64 ");       break;
        case 'J': dl_printf(dl, "s32 ");       break;
        case 'K': dl_printf(dl, "u64 ");       break;
        case 'L': dl_printf(dl, "u32 ");       break;
        case 'Q': dl_printf(dl, "f64 ");       break;
        case 'R': dl_printf(dl, "f32 ");       break;
        default:  dl_printf(dl, "%cdt ", dt);  break;
    }
    if (dt == 'U') dl_printf (dl, "(%hhu) ", type);
     */
}
/* 

void dl_print_small_dtype(enum Datatype type, int length) {
    char dtypeSign;
    switch (DTYPE(*b)) {
        case Idt:
        case Jdt: dtypeSign = 's'; break;
        case Kdt:
        case Ldt: dtypeSign = 'u'; break;

        default: dl_print_dtype(dl, type); return;
    }

    dl_printf(dl, "%c%d ", dtypeSign, length);
}
 */


void dl_print_mtype(struct DisplayLine *dl, enum Memtype type) {
    char mt = mtype_name(type);
    dl_printf(dl, "%cmt ", mt);
    if (mt == 'U') dl_printf(dl, "(%hhu) ", type);
}

void dl_print_unsigned(struct DisplayLine *dl, union Valu v, union Bcode *b)
{
    switch (LENGTH(*b)) {
        case 1: dl_printf(dl, "%hhu", (unsigned char)v.swpart.Ival); break;
        case 2: dl_printf(dl, "%hu", (unsigned short)v.swpart.Ival); break;
        case 4: if (v.swpart.Ival > 0x1000u) dl_printf(dl, "0x%x", v.swpart.Ival);
                else                         dl_printf(dl, "%u", v.swpart.Ival);
                break;
        case 8: dl_printf(dl, "%llu", v.dwval); break;
    }
}

// Print in hex if the number is bigger than 0x1000
void dl_print_signed(struct DisplayLine *dl, union Valu v, union Bcode *b)
{
    switch (LENGTH(*b)) {
        case 1: dl_printf(dl, "%hhd", (char)v.swpart.Ival); break;
        case 2: dl_printf(dl, "%hd", (short)v.swpart.Ival); break;
        case 4: if (v.swpart.Ival >  0x1000 ||
                    v.swpart.Ival < -0x1000) dl_printf(dl, "0x%x", v.swpart.Ival);
                else                         dl_printf(dl, "%d", v.swpart.Ival);
                break;
        case 8: dl_printf(dl, "%lld", v.dwval); break;
    }
}

bool dl_print_reg(struct DisplayLine *dl, int regNum) {
    if (regNum < sizeof(reg_names) / sizeof(reg_names[0])) {
        dl_printf(dl, "%s ", reg_names[regNum]);
        return true;
    }

    return false;
}

void dl_print_register_ucode(struct DisplayLine *dl, struct StringRep *parent, int regNum)
{
    //if (regColor <= 0) return 0;

    struct StringRep *sr = sr_newchild(dl, parent);
    sr->start = dl->pos;
    sr->type = REGISTER;
    if (regNum < sizeof(reg_names) / sizeof(reg_names[0])) {
        sr->reg = regNum;
        dl_printf(dl, "%s ", reg_names[regNum]);
    }
    /* 
    if (regColor >= 1 && regColor <= 35) {
        sr->reg = coloroffset(regColor);
        dl_printf(dl, "%s", regnames[sr->reg]);
    } else {
        sr->reg = regColor;
        dl_printf(dl, "%d", sr->reg);

    }
         */

    sr->len = dl->pos - sr->start;
}

void dl_print_offset(struct DisplayLine *dl, int offset, bool hasMemType, union Bcode *b) {
    if (hasMemType && MTYPE(*b) == Rmt) {
        if (offset < sizeof(reg_names) / sizeof(reg_names[0])) {
            dl_print_register_ucode(dl, dl->top, offset);
            return;
        }
    }

    dl_printf(dl, "off %d ", offset);
}

void dl_print_lexlev(struct DisplayLine *dl, unsigned short lexlev, union Bcode *b) {
    dl_printf(dl, "%s %hu ", lexlev_name(b), lexlev);
}

void dl_print_ione(struct DisplayLine *dl, int ione, union Bcode *b) {
    dl_printf(dl, "%s %d ", num_name(b), ione);
}

void dl_print_block(struct DisplayLine *dl, int block) {
    dl_printf(dl, "block %d ", block);
}

void dl_print_escaped_string(struct DisplayLine *dl, int length, char *str) {
    if (str == NULL) {
        return;
    }

    for (int i = 0; i < length; i++) {
        switch (str[i]) {
            case '\a': dl_printf(dl, "\\a");  break;
            case '\b': dl_printf(dl, "\\b");  break;
            case '\f': dl_printf(dl, "\\f");  break;
            case '\n': dl_printf(dl, "\\n");  break;
            case '\r': dl_printf(dl, "\\r");  break;
            case '\t': dl_printf(dl, "\\t");  break;
            case '\v': dl_printf(dl, "\\v");  break;
            case '\\': dl_printf(dl, "\\\\"); break;
            case '\?': dl_printf(dl, "\\\?"); break;
            case '\'': dl_printf(dl, "\\\'"); break;
            case '\"': dl_printf(dl, "\\\""); break;

            case '\0': return; // handle nul?

            default:   dl_printf(dl, "%c", str[i]); break;
        }
    }
}

void dl_print_valu(struct DisplayLine *dl, union Valu v, union Bcode *b)
{
    if (((1 << DTYPE(*b)) & ((1 << Mdt) | (1 << Qdt) | (1 << Rdt) | (1 << Sdt) | (1 << Xdt))) || OPC(*b) == Ucomm) {
#if 1
        dl_printf(dl, "\"");
        dl_print_escaped_string(dl, v.swpart.Ival, v.swpart.Chars);
        dl_printf(dl, "\"");
#else
        dl_printf(dl, "\"%.*s\"", v.swpart.Ival, v.swpart.Chars);
#endif
    } else {
        switch (DTYPE(*b)) {
/* address (pointer)             */ case Adt: dl_printf(dl, "0x%x", v.swpart.Ival); break;
/* pointer to readonly data      */ case Cdt: dl_printf(dl, "0x%x", v.swpart.Ival); break;
/* C pointer to function         */ case Fdt: dl_printf(dl, "func %d", v.swpart.Ival); break;
/* address of label              */ case Gdt: dl_printf(dl, "label %d", v.swpart.Ival); break;
/* address in the heap           */ case Hdt: dl_printf(dl, "heapptr 0x%x", v.swpart.Ival); break;
/* integer, double word          */ case Idt:
/* integer, single word          */ case Jdt: dl_print_signed(dl, v, b); break;
/* unsigned integer, double word */ case Kdt:
/* unsigned integer, single word */ case Ldt: dl_print_unsigned(dl, v, b); break;
/* non-local labels              */ case Ndt: dl_printf(dl, "label %d", v.swpart.Ival); break;
/* procedure, untyped            */ case Pdt: dl_printf(dl, "proc %d", v.swpart.Ival); break;
/* 64 bit wide pointer           */ case Wdt: dl_printf(dl, "wptr 0x%llx", v.dwval); break;
/* undefined                     */ case Zdt: dl_printf(dl, "undefined %lld", v.dwval); break;
        }
    }
}


bool print_uregs(struct DisplayLine *dl, union Bcode *b) {
    dl_print_ione(dl, IONE(*b), b);
    int next = 1;
    if (IONE(*b) == 3 || IONE(*b) == 4) {
        next = 2; // skip odd registers for floating point classes
    }
    for (int i = OFFSET(*b); i < OFFSET(*b) + LENGTH(*b); i += next) {
        dl_print_register_ucode(dl, dl->top, i);
        dl_printf(dl, " ");
        //dl_printf(dl, "%s ", reg_names[i]);
    }
    return true;
}

// some kind of link between two registers
// unaliased?
bool print_unal(struct DisplayLine *dl, union Bcode *b) {
    dl_print_register_ucode(dl, dl->top, LEXLEV(*b));
    dl_printf(dl, " ");
    dl_print_register_ucode(dl, dl->top, IONE(*b));
    dl_printf(dl, "%d", DTYPE(*b));
    return true;
}

bool print_lodstr(struct DisplayLine *dl, union Bcode *b) {
    if (MTYPE(*b) == Rmt) {
        dl_print_dtype(dl, DTYPE(*b));
        dl_print_mtype(dl, MTYPE(*b));
        dl_print_register_ucode(dl, dl->top, OFFSET(*b));
        return true;
    }
    return false;
}

bool print_rlodrstr(struct DisplayLine *dl, union Bcode *b) {
    dl_print_dtype(dl, DTYPE(*b));
    dl_print_mtype(dl, MTYPE(*b));
    dl_print_block(dl, IONE(*b));
    dl_print_offset(dl, OFFSET(*b), false, b);
    dl_print_register_ucode(dl, dl->top, LEXLEV(*b));
    return true;
}

bool print_ldc(struct DisplayLine *dl, union Bcode *b) {
    dl_print_dtype(dl, DTYPE(*b));
    dl_print_valu(dl, CONSTVAL(*b), b);
    return true;
}

bool print_rldc(struct DisplayLine *dl, union Bcode *b) {
    dl_print_dtype(dl, DTYPE(*b));
    dl_print_register_ucode(dl, dl->top, IONE(*b));
    dl_printf(dl, " ");
    dl_print_valu(dl, CONSTVAL(*b), b);
    return true;
}

bool print_rlda(struct DisplayLine *dl, union Bcode *b) {
    dl_print_mtype(dl, MTYPE(*b));
    dl_print_block(dl, IONE(*b));
    dl_print_offset(dl, OFFSET(*b), false, b);
    dl_print_register_ucode(dl, dl->top, LENGTH(*b));
    return true;
}

bool print_rpar(struct DisplayLine *dl, union Bcode *b) {
    dl_print_dtype(dl, DTYPE(*b));
    dl_print_mtype(dl, MTYPE(*b));
    dl_print_offset(dl, OFFSET(*b), false, b);
    dl_print_register_ucode(dl, dl->top, LEXLEV(*b));
    return true;
}

bool print_lab(struct DisplayLine *dl, union Bcode *b) {
    dl_printf(dl, "%d ", IONE(*b));
    if (LEXLEV(*b) != 0) {
        dl_print_lexlev(dl, LEXLEV(*b), b);
    }
    if (LENGTH(*b) != 0) {
        dl_printf(dl, "len %d ", LENGTH(*b));
    }
    return true;
}

bool print_ilodistr(struct DisplayLine *dl, union Bcode *b) {
    dl_print_small_dtype(dl, DTYPE(*b), LEXLEV(*b));
    dl_printf(dl, " ");
    dl_print_ione(dl, IONE(*b), b);

    // this field isn't actually an offset. it seems to be unused
    dl_print_offset(dl, OFFSET(*b), false, b);
    return true;
}

bool print_cvtl(struct DisplayLine *dl, union Bcode *b) {
    dl_print_small_dtype(dl, DTYPE(*b), IONE(*b));
    return true;
}

// Most opcodes sometimes treat one field as a register...
// but the field is different for almost every opcode -_-
static bool (*print_function[Uirsv + 1])(struct DisplayLine *dl, union Bcode *b) = {
    [Uregs] = print_uregs,
    [Uunal] = print_unal,
    [Ulod]  = print_lodstr,
    [Ustr]  = print_lodstr,
    [Uilod] = print_ilodistr,
    [Uistr] = print_ilodistr,
    [Urlod] = print_rlodrstr,
    [Urstr] = print_rlodrstr,
    [Urpar] = print_rpar,
    [Uldc]  = print_ldc,
    [Urldc] = print_rldc,
    [Urlda] = print_rlda,

    [Ulab] = print_lab,

    [Ucvtl] = print_cvtl,
};

void dl_print_ucode(struct DisplayLine *dl, struct StringRep *parent, union Bcode *b) {
    //if (OPC(*b) == Ueof) return;

    struct StringRep *sr = sr_newchild(dl, parent);
    sr->type = UCODE;
    sr->ucode = b;
    sr->start = dl->pos;

    struct utabrec urec = utab[OPC(*b)];

    //if (OPC(*b) == Uent) puts("");
    dl_printf(dl, "  %.4s ", urec.opcname);

    // handle unique opcodes, usually just to print the right field as a register
    if (print_function[OPC(*b)] != NULL) {
        if (print_function[OPC(*b)](dl, b)) {
            //puts("");
            sr->len = dl->pos - sr->start;
            return;
        }
    }

    // default output, print field by field
    bool hasMemType = false;
    for (int i = 0; urec.format[i] != Send; i++) {
        switch (urec.format[i]) {
            case Sdtype: dl_print_dtype(dl, DTYPE(*b));                        break;
            case Smtype: hasMemType = true; dl_print_mtype(dl, MTYPE(*b));     break;
            case Sdtype2: dl_print_dtype(dl, DTYPE2(*b));      break;
            case Sdtypenum: dl_printf(dl, "dtnum %d ", DTYPE(*b));             break;

            case Slexlev: dl_print_lexlev(dl, LEXLEV(*b), b); break;

            case Slabel0: dl_printf(dl, "lab0 %d ", IONE(*b));                 break;
            case Slabel1: dl_printf(dl, "lab1 %d ", IONE(*b));                 break;
            case Sblockno: dl_print_block(dl, IONE(*b));                       break;
            case Ssomenumber: dl_print_ione(dl, IONE(*b), b);   break;

            case Spop: dl_printf(dl, "pop %u ", POP(*b));                      break;
            case Spush: dl_printf(dl, "push %u ", PUSH(*b));                   break;
            case Sexternal: dl_printf(dl, "ext %u ", EXTRNAL(*b));             break;
            case Slength: dl_printf(dl, "len %d ", LENGTH(*b));                break;

            case Sconstval: dl_printf(dl, "cval ");
            case Scomment:  dl_print_valu(dl, CONSTVAL(*b), b);                break;

            case Sinitval:  dl_printf(dl, "init "); dl_print_valu(dl, INITVAL(*b), b);   break;

            case Soffset: dl_print_offset(dl, OFFSET(*b), hasMemType, b);      break;
            case Soffset2: dl_printf(dl, "off2 %d ", OFFSET2(*b));             break;
            case Slabel2: dl_printf(dl, "lab2 %d ", LENGTH(*b));               break;
            case SarrayOffset: dl_printf(dl, "aryoff %d ", ARYOFF(*b));        break;

            case Slbound: dl_printf(dl, "%lld-", LBOUND(*b));                  break;
            case Shbound: dl_printf(dl, "%lld",  HBOUND(*b));                  break;

            case Send:
            default:                                                break;
        }
    }
    //puts("");
    sr->len = dl->pos - sr->start;
}

struct DisplayLine *dl_from_ucode(union Bcode *b)
{
    struct DisplayLine *dl = dl_new();
    dl_print_ucode(dl, NULL, b);
    dl->len = dl->pos;
    return dl;
}
#endif
