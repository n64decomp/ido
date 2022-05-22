#ifdef UOPT_DEBUG
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

int bittabdigits;

/* StringRep */
struct StringRep *sr_new()
{
    struct StringRep *sr = calloc(1, sizeof(struct StringRep));
    sr->children = vec_new();
    return sr;
}

void sr_free(struct StringRep *sr)
{
    if (sr == NULL) return;

    for (int i = 0; i < sr->children->length; i++) {
        sr_free(sr->children->items[i]);
    }

    vec_free(sr->children);
    free(sr);
}

struct StringRep *sr_lastchild(struct StringRep *parent)
{
    return parent->children->items[parent->children->length - 1];
}

struct StringRep *sr_newchild(struct DisplayLine *dl, struct StringRep *parent)
{
    if (parent == NULL) {
        dl->top = sr_new();
        return dl->top;
    }
    struct StringRep *child = sr_new();
    vec_add(parent->children, child);
    return child;
    //parent->children[parent->numChildren] = sr_new();
    //return parent->children[parent->numChildren++];
}

struct StringRep *sr_get_child_at_pos(struct StringRep *sr, int pos)
{
    for (int c = 0; c < sr->children->length; c++) {
        struct StringRep *child = sr->children->items[c];
        if (pos >= child->start && pos < child->start + child->len) {
            return sr_get_child_at_pos(child, pos);
        }
    }
    return sr;
}

struct StringRep *dl_get_sr_at_pos(struct DisplayLine *dl, int pos)
{
    if (pos < 0 || pos >= dl->len) return NULL;
    return sr_get_child_at_pos(dl->top, pos);
}


/* DisplayLine */
struct DisplayLine *dl_new()
{
    struct DisplayLine *dl = calloc(1, sizeof(struct DisplayLine));
    dl->s = calloc(1, 128 * sizeof(dl->s[0]));
    dl->maxLen = 128;
    return dl;
}

void dl_free(struct DisplayLine *dl)
{
    free(dl->s);
    sr_free(dl->top);
    free(dl);
}

void dl_realloc(struct DisplayLine *restrict dl)
{
    // don't double size because lines are rarely longer than 100 chars
    dl->s = realloc(dl->s, (dl->maxLen + 128) * sizeof(dl->s[0]));
    dl->maxLen += 128;
}

// TODO: use temp files instead of strings?
static int dl_vprintf(struct DisplayLine *restrict dl, char *restrict fmt, va_list args)
{
    int printed;
    int maxLen;
    do {
        printed = vsnprintf(dl->s + dl->pos, dl->maxLen - dl->pos, fmt, args);

        maxLen = dl->maxLen;
        if (dl->pos + printed >= maxLen) {
            dl_realloc(dl);
        }
    } while (dl->pos + printed >= maxLen);
    dl->pos += printed;
    return printed;

}

int dl_printf(struct DisplayLine *restrict dl, char *restrict fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int printed = dl_vprintf(dl, fmt, args);
    va_end(args);
    return printed;

    /*
    int printed;
    int maxLen;
    do {
        va_start(args, fmt);
        printed = vsnprintf(dl->s + dl->pos, dl->maxLen - dl->pos, fmt, args);
        va_end(args);

        maxLen = dl->maxLen;
        if (dl->pos + printed >= maxLen) {
            dl_realloc(dl);
        }
    } while (dl->pos + printed >= maxLen);
    dl->pos += printed;
    return printed;
     */
}

void dl_print_opcode(struct DisplayLine *dl, struct StringRep *parent, Uopcode opc)
{
    struct StringRep *sr = sr_newchild(dl, parent);
    sr->type = OPCODE;
    sr->opc = opc;
    sr->start = dl->pos;
    dl_printf(dl, "%.4s ", utab[opc].opcname);
    sr->len = dl->pos - sr->start;
}

void dl_print_variable(struct DisplayLine *dl, struct VariableLocation loc)
{
    switch (loc.memtype) {
        case Mmt:
            dl_printf(dl, "local%02X", -loc.addr); break;

        case Rmt:
            dl_printf(dl, "%s", regnames[loc.addr]); break;

        case Pmt:
            dl_printf(dl, "arg%d", loc.addr / 4); break;

        case Smt:
            dl_printf(dl, "global%d", loc.blockno); break;

        default:
            dl_printf(dl, "var(%cmt, %d, %d)", getmtyname(loc.memtype), loc.addr, loc.blockno); break;
    }
}

void dl_print_constant(struct DisplayLine *dl, Datatype dtype, union Constant constval)
{
    struct RealstoreData *real;
    switch (dtype) {
        case Fdt:
            dl_printf(dl, "proc%d", constval.intval); break;

        case Adt:
        case Gdt:
        case Hdt:
        case Jdt:
        case Ldt:
        case Ndt:
            dl_printf(dl, "%d", constval.intval); break;

        case Idt:
        case Kdt:
            dl_printf(dl, "%lld", constval.longval); break;

        default:
            real = realstore;
            for (int i = 0; i < (constval.real.disp >> 8); i++) {
                real = real->next;
            }
            dl_printf(dl, "%.*s%s", constval.real.len, &real->c[constval.real.disp & 0xff], dtype == Rdt ? "f" : ""); break;
    }
}

void dl_print_small_dtype(struct DisplayLine *dl, enum Datatype type, int length)
{
    char dtypeSign;
    switch (type) {
        case Idt:
        case Jdt: dtypeSign = 's'; break;
        case Kdt:
        case Ldt: dtypeSign = 'u'; break;

        default: dl_printf(dl, "%s", dtype_name(type)); return;
    }

    dl_printf(dl, "%c%d", dtypeSign, length);
}

void dl_print_register(struct DisplayLine *dl, struct StringRep *parent, int regColor)
{
    //if (regColor <= 0) return 0;

    struct StringRep *sr = sr_newchild(dl, parent);
    sr->start = dl->pos;
    sr->type = REGISTER;
    if (regColor >= 1 && regColor <= 35) {
        sr->reg = coloroffset(regColor);
        dl_printf(dl, "%s", regnames[sr->reg]);
    } else {
        sr->reg = regColor;
        dl_printf(dl, "%d", sr->reg);

    }

    sr->len = dl->pos - sr->start;
}

void dl_print_regset64(struct DisplayLine *dl, struct StringRep *parent, int set[static 2])
{
    struct StringRep *sr = sr_newchild(dl, parent);
    sr->start = dl->pos;
    sr->type = REGSET64;
    sr->regset[0] = set[0];
    sr->regset[1] = set[1];
    bool firstPrint = true;
    dl_printf(dl, "[");
    for (int reg = 1; reg <= 35; reg++) {
        if (SET_IN(set, reg)) {
            if (firstPrint) {
                firstPrint = false;
            } else {
                dl_printf(dl, " ");
            }
            dl_print_register(dl, sr, reg);
        }
    }
    dl_printf(dl, "]");
    sr->len = dl->pos - sr->start;
}

void dl_print_reg_boolarray(struct DisplayLine *dl, struct StringRep *parent, char regs[static 5])
{
    struct StringRep *sr = sr_newchild(dl, parent);
    sr->start = dl->pos;
    sr->type = REGBOOLARRAY;
    for (int i = 0; i < 5; i++) {
        sr->regboolarray[i] = regs[i];
    }
    bool firstPrint = true;

    dl_printf(dl, "[");
    for (int reg = 1; reg <= 35; reg++) {
        if (BITARR_GET(regs, reg - 1)) {
            if (firstPrint) {
                firstPrint = false;
            } else {
                dl_printf(dl, " ");
            }
            dl_print_register(dl, sr, reg);
        }
    }
    dl_printf(dl, "]");
    sr->len = dl->pos - sr->start;
}

void dl_print_expr(struct DisplayLine *dl, struct StringRep *parent, struct Expression *expr)
{
    bool leftParens = false;
    bool rightParens = false;

    expr = expr_base(expr); // follow the copy links to the base expression
                            // doing this here should make highlighting
                            // consistent since we highlight based on the StringRep's expr
    if (expr == NULL) return;

    struct StringRep *sr = sr_newchild(dl, parent);

    sr->start = dl->pos;
    sr->type = EXPRESSION;
    sr->expr = expr;


//copy:

    switch (expr->type) {
        case isconst:
            dl_print_constant(dl, expr->datatype, expr->data.isconst.number);
            break;

        case isvar:
        case issvar:
            // TODO: make this optional
            /*
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                expr = expr->data.isvar_issvar.copy;
                goto copy;
            }
             */

            dl_print_variable(dl, expr->data.isvar_issvar.location);
            break;

        case isilda:
            dl_printf(dl, "ILDA");
        case islda:
            if (expr->data.islda_isilda.offset != expr->data.islda_isilda.address.addr) {
                dl_printf(dl, "(");
            }
            dl_printf(dl, "&");
            dl_print_variable(dl, expr->data.islda_isilda.address);
            if (expr->data.islda_isilda.offset != expr->data.islda_isilda.address.addr) {
                dl_printf(dl, " + %d)", expr->data.islda_isilda.offset - expr->data.islda_isilda.address.addr);
            }
            break;

        case isop:
            if (optab[expr->data.isop.opc].is_binary_op) {
                leftParens = higher_precedence_expr(expr->data.isop.opc, expr->data.isop.op1);
                rightParens = higher_precedence_expr(expr->data.isop.opc, expr->data.isop.op2);
            } else {
                leftParens = higher_precedence_expr(expr->data.isop.opc, expr->data.isop.op1);
                rightParens = false;
            }
            switch (expr->data.isop.opc) {
                case Uadd:
                case Usub:
                case Umpy:
                case Udiv:
                case Umod:
                case Urem:
                case Uequ:
                case Uneq:
                case Ules:
                case Uleq:
                case Ugrt:
                case Ugeq:
                case Uand:
                case Uior:
                case Uxor:
                case Ushr:
                case Ushl:
                    if (leftParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (leftParens) {
                        dl_printf(dl,  ")");
                    }

                    dl_printf(dl, " %s ", opc_operator(expr->data.isop.opc));

                    if (rightParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_expr(dl, sr, expr->data.isop.op2);
                    if (rightParens) {
                        dl_printf(dl,  ")");
                    }
                    break;

                case Ulda:
                case Unot:
                case Ulnot:
                case Uneg:
                    dl_printf(dl, "%s", opc_operator(expr->data.isop.opc));
                    if (leftParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (leftParens) {
                        dl_printf(dl,  ")");
                    }
                    break;

                case Uilod:
                    {
                        bool closeInnerParens = false;
                        bool closeParens = false;
                        bool hasOffset = expr->data.isop.datasize != 0;

                        // output: *((e1 + e2) + offset)
                        dl_printf(dl, "%s", opc_operator(expr->data.isop.opc));
                        if (hasOffset || higher_precedence_expr(expr->data.isop.opc, expr->data.isop.op1)) {
                            closeParens = true;
                            dl_printf(dl,  "(");
                        }
                        if (hasOffset && higher_precedence_expr(Uadd, expr->data.isop.op1)) {
                            closeInnerParens = true;
                            dl_printf(dl,  "(");
                        }

                        dl_print_expr(dl, sr, expr->data.isop.op1);

                        if (closeInnerParens) {
                            dl_printf(dl,  ")");
                        }
                        if (hasOffset) {
                            dl_printf(dl, " + %d", expr->data.isop.datasize);
                        }
                        if (closeParens) {
                            dl_printf(dl,  ")");
                        }
                    }
                    break;


                case Uixa:
                    dl_print_expr(dl, sr, expr->data.isop.op1);
                    dl_printf(dl,  "[");
                    dl_print_expr(dl, sr, expr->data.isop.op2);
                    dl_printf(dl,  "]");
                    break;

                case Ucvtl:
                    dl_printf(dl,  "(");
                    dl_print_small_dtype(dl, expr->datatype, expr->data.isop.datasize);
                    dl_printf(dl,  ")");

                    if (leftParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (leftParens) {
                        dl_printf(dl,  ")");
                    }
                    break;

                case Ucvt:
                    dl_printf(dl,  "(%s)", dtype_name(expr->data.isop.datatype));
                    if (leftParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (leftParens) {
                        dl_printf(dl,  ")");
                    }
                    break;

                default:
                    dl_print_opcode(dl, sr, expr->data.isop.opc);
                    dl_printf(dl, "(");
                    dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (optab[expr->data.isop.opc].is_binary_op) {
                        dl_printf(dl,  ", ");
                        dl_print_expr(dl, sr, expr->data.isop.op2);
                    }
                    dl_printf(dl, ")");
                    break;
            }
            break;

        case dumped:
            dl_printf(dl, "dumped");
            break;

        case empty:
            dl_printf(dl, "empty");
            break;

        default:
            fprintf(stderr, "unhandled expr type %p %d", expr, expr->type);
            break;
    }
    sr->len = dl->pos - sr->start;
}

// duplicate code because IChains are ridiculously similar to Expressions.
// it was the 80's or something, so uopt didn't just reuse Expression
void dl_print_ichain(struct DisplayLine *dl, struct StringRep *parent, struct IChain *ichain)
{
    bool leftParens = false;
    bool rightParens = false;
    if (ichain == NULL) return;

    struct StringRep *sr = sr_newchild(dl, parent);

    sr->start = dl->pos;
    sr->type = ICHAIN;
    sr->ichain = ichain;

    switch (ichain->type) {
        case isconst:
            dl_print_constant(dl, ichain->dtype, ichain->isconst.number);
            break;

        case isvar:
        case issvar:
            dl_print_variable(dl, ichain->isvar_issvar.location);
            break;

        case islda:
        case isilda:
            if (ichain->islda_isilda.offset != ichain->islda_isilda.address.addr) {
                dl_printf(dl, "(");
            }
            dl_printf(dl, "&");
            dl_print_variable(dl, ichain->islda_isilda.address);
            if (ichain->islda_isilda.offset != ichain->islda_isilda.address.addr) {
                dl_printf(dl, " + %d)", ichain->islda_isilda.offset - ichain->islda_isilda.address.addr);
            }
            break;

        case isop:
            if (optab[ichain->isop.opc].is_binary_op) {
                leftParens = higher_precedence_image(ichain->isop.opc, ichain->isop.op1);
                rightParens = higher_precedence_image(ichain->isop.opc, ichain->isop.op2);
            } else {
                leftParens = higher_precedence_image(ichain->isop.opc, ichain->isop.op1);
                rightParens = false;
            }

            switch (ichain->isop.opc) {
                case Uadd:
                case Usub:
                case Umpy:
                case Udiv:
                case Umod:
                case Urem:
                case Uequ:
                case Uneq:
                case Ules:
                case Uleq:
                case Ugrt:
                case Ugeq:
                case Uand:
                case Uior:
                case Uxor:
                case Ushr:
                case Ushl:
                    if (leftParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (leftParens) {
                        dl_printf(dl,  ")");
                    }

                    dl_printf(dl, " %s ", opc_operator(ichain->isop.opc));

                    if (rightParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_ichain(dl, sr, ichain->isop.op2);
                    if (rightParens) {
                        dl_printf(dl,  ")");
                    }
                    break;

                case Ulda:
                case Unot:
                case Ulnot:
                case Uneg:
                    dl_printf(dl, "%s", opc_operator(ichain->isop.opc));
                    if (leftParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (leftParens) {
                        dl_printf(dl,  ")");
                    }
                    break;

                case Uilod:
                    {
                        bool closeInnerParens = false;
                        bool closeParens = false;
                        bool hasOffset = ichain->isop.size != 0;

                        // output: *((e1 + e2) + offset)
                        dl_printf(dl, "%s", opc_operator(ichain->isop.opc));
                        if (hasOffset || higher_precedence_image(ichain->isop.opc, ichain->isop.op1)) {
                            closeParens = true;
                            dl_printf(dl,  "(");
                        }
                        if (hasOffset && higher_precedence_image(Uadd, ichain->isop.op1)) {
                            closeInnerParens = true;
                            dl_printf(dl,  "(");
                        }

                        dl_print_ichain(dl, sr, ichain->isop.op1);

                        if (closeInnerParens) {
                            dl_printf(dl,  ")");
                        }
                        if (hasOffset) {
                            dl_printf(dl, " + %d", ichain->isop.size);
                        }
                        if (closeParens) {
                            dl_printf(dl,  ")");
                        }
                    }
                    break;


                case Uixa:
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    dl_printf(dl,  "[");
                    dl_print_ichain(dl, sr, ichain->isop.op2);
                    dl_printf(dl,  "]");
                    break;

                case Ucvtl:
                    dl_printf(dl,  "(");
                    dl_print_small_dtype(dl, ichain->dtype, ichain->isop.size);
                    dl_printf(dl,  ")");

                    if (leftParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (leftParens) {
                        dl_printf(dl,  ")");
                    }
                    break;

                case Ucvt:
                    dl_printf(dl,  "(%s)", dtype_name(ichain->isop.datatype));
                    if (leftParens) {
                        dl_printf(dl,  "(");
                    }
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (leftParens) {
                        dl_printf(dl,  ")");
                    }
                    break;

                // store ops (traps are considered storeops apparently)
                // these aren't marked as binary operators, even though they have two operands
                case Uisst:
                case Ustr:
                    dl_print_opcode(dl, sr, ichain->isop.opc);
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    dl_printf(dl, " = ");
                    dl_print_ichain(dl, sr, ichain->isop.op2);
                    break;

                case Uistr:
                case Uistv:
                    {
                        bool closeInnerParens = false;
                        bool closeParens = false;
                        bool hasOffset = ichain->isop.s.word != 0;

                        dl_print_opcode(dl, sr, ichain->isop.opc);
                        // *((e1 + e2) + offset) = op2
                        dl_printf(dl, "%s", opc_operator(ichain->isop.opc));
                        if (hasOffset || higher_precedence_image(ichain->isop.opc, ichain->isop.op1)) {
                            closeParens = true;
                            dl_printf(dl,  "(");
                        }
                        if (hasOffset && higher_precedence_image(Uadd, ichain->isop.op1)) {
                            closeInnerParens = true;
                            dl_printf(dl,  "(");
                        }
                        dl_print_ichain(dl, sr, ichain->isop.op1);
                        if (closeInnerParens) {
                            dl_printf(dl,  ")");
                        }
                        if (hasOffset) {
                            dl_printf(dl, " + %d", ichain->isop.s.word);
                        }
                        if (closeParens) {
                            dl_printf(dl,  ")");
                        }

                        dl_printf(dl, " = ");
                        dl_print_ichain(dl, sr, ichain->isop.op2);
                    }
                    break;

                case Umov:
                case Umovv:
                    dl_print_opcode(dl, sr, ichain->isop.opc);
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    dl_printf(dl, " <- ");
                    dl_print_ichain(dl, sr, ichain->isop.op2);
                    break;

                case Uirsv:
                case Uirst:
                    dl_print_opcode(dl, sr, ichain->isop.opc);
                    // print rhs first
                    dl_print_ichain(dl, sr, ichain->isop.op2);
                    dl_printf(dl, ", ");
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    break;

                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                    dl_print_opcode(dl, sr, ichain->isop.opc);
                    // lhs first
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    dl_printf(dl, ", ");
                    dl_print_ichain(dl, sr, ichain->isop.op2);
                    break;

                case Ucg1:
                    dl_print_opcode(dl, sr, ichain->isop.opc);
                    dl_printf(dl, "(");
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (optab[ichain->isop.opc].is_binary_op) {
                        dl_printf(dl,  ", ");
                        dl_print_ichain(dl, sr, ichain->isop.op2);
                    }
                    dl_printf(dl, ")");
                    dl_printf(dl, " node %d", ichain->isop.size);
                    break;

                case Uchkt:
                default:
                    dl_print_opcode(dl, sr, ichain->isop.opc);
                    dl_printf(dl, "(");
                    dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (optab[ichain->isop.opc].is_binary_op) {
                        dl_printf(dl,  ", ");
                        dl_print_ichain(dl, sr, ichain->isop.op2);
                    }
                    dl_printf(dl, ")");
                    break;
            }
            break;

        case dumped:
            dl_printf(dl, "dumped");
            break;

        case empty:
            dl_printf(dl, "empty");
            break;

        default:
            fprintf(stderr, "unhandled ichain type %d", ichain->type);
            break;
    }

    sr->len = dl->pos - sr->start;
}

void dl_print_trepimage(struct DisplayLine *dl, struct StringRep *parent, struct TrepImageThing *trep)
{
    if (trep->ichain != NULL)
    {
        dl_print_ichain(dl, parent, trep->ichain);
    }
    if (trep->ichain2 != NULL)
    {
        dl_printf(dl, ", 2: ");
        dl_print_ichain(dl, parent, trep->ichain2);
    }
    if (trep->OPC != 0)
    {
        dl_printf(dl, " opc: %.4s", utab[trep->OPC].opcname);
    }
    if (trep->unk28 != NULL)
    {
        dl_printf(dl, ", 3: ");
        dl_print_ichain(dl, parent, trep->unk28);
    }
}

void dl_print_liveunit(struct DisplayLine *dl, struct StringRep *parent, struct LiveUnit *liveunit)
{
    if (liveunit == NULL) return;

    struct StringRep *sr = sr_newchild(dl, parent);

    sr->start = dl->pos;
    sr->type = LIVEUNIT;
    sr->liveunit = liveunit;

    dl_printf(dl, "lu: ");
    if (liveunit->liverange != NULL && liveunit->liverange->ichain != NULL)
    {
        if (liveunit->reg != 0) {
            dl_print_register(dl, sr, liveunit->reg);
            dl_printf(dl, " -> ");
        }
        dl_print_ichain(dl, sr, liveunit->liverange->ichain);
        dl_printf(dl, " in ");
    }
    if (liveunit->node != NULL) {
        dl_print_graphnode(dl, sr, liveunit->node, false);
    }
    sr->len = dl->pos - sr->start;
}

void dl_print_interferelist(struct DisplayLine *dl, struct StringRep *parent, struct InterfereList *interfere)
{
    if (interfere == NULL) return;

    struct StringRep *sr = sr_newchild(dl, parent);
    sr->start = dl->pos;
    sr->type = INTERFERELIST;
    sr->interfere = interfere;

    /*
    bool firstPrint = true;
    dl_printf(dl, "interfere: [");
    while (interfere != NULL) {
        if (!firstPrint) {
            dl_printf(dl, ", ");
        } else {
            firstPrint = false;
        }
        dl_print_liverange(dl, sr, interfere->liverange);

        interfere = interfere->next;
    }
     */

    dl_printf(dl, "interfere: ");
    if (interfere->liverange != NULL) {
        dl_print_liverange(dl, sr, interfere->liverange);
    } else {
        dl_printf(dl, "none");
    }


    sr->len = dl->pos - sr->start;
}

void dl_print_liverange(struct DisplayLine *dl, struct StringRep *parent, struct LiveRange *liverange)
{
    if (liverange == NULL) return;

    struct StringRep *sr = sr_newchild(dl, parent);

    sr->start = dl->pos;
    sr->type = LIVERANGE;
    sr->liverange = liverange;

    dl_printf(dl, "%*d: % .2f ", bittabdigits, liverange->bitpos, liverange->adjsave);
    if (liverange->ichain != NULL) {
        if (liverange->assigned_reg > 0) {
            dl_print_register(dl, sr, liverange->assigned_reg);
            dl_printf(dl, " -> ");
        }

        dl_print_ichain(dl, sr, liverange->ichain);
    } else {
        dl_printf(dl, "ichain NULL?!");
    }

    sr->len = dl->pos - sr->start;
}

void dl_print_assignment(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    // this should always be true, but who knows
    assert(stat->expr->type == isvar || stat->expr->type == issvar);
    dl_print_expr(dl, sr, stat->expr);
    if (stat->expr->data.isvar_issvar.assigned_value != NULL) {
        dl_printf(dl, " = ");
        dl_print_expr(dl, sr, stat->expr->data.isvar_issvar.assigned_value);
    }

    return;
}

void dl_print_istr(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    // *(expr + offset)
    dl_printf(dl, "*(");
    dl_print_expr(dl, sr, stat->expr);

    // TODO: hacky. printing needs a refactor
    struct StringRep *dest = sr->children->items[sr->children->length-1];

    dest->start -= 2;
    dest->len += 2;
    if (stat->u.store.u.istr.offset != 0) {
        dest->len += dl_printf(dl, " + %d)", stat->u.store.u.istr.offset);
    } else {
        dest->len += dl_printf(dl, ")");
    }

    if (stat->u.store.expr != NULL) {
        dl_printf(dl, " = ");
        dl_print_expr(dl, sr, stat->u.store.expr);
    }
}

void dl_print_mov(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    dl_print_expr(dl, sr, stat->expr);
    if (stat->u.store.expr != NULL) {
        dl_printf(dl, " <- ");
        dl_print_expr(dl, sr, stat->u.store.expr);
    }
}

void dl_print_other_store(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    if (stat->u.store.expr != NULL) {
        dl_print_expr(dl, sr, stat->u.store.expr);
        dl_printf(dl, ", ");
    }
    dl_print_expr(dl, sr, stat->expr);
}

void dl_print_trap(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    bool leftParens, rightParens;

    leftParens = higher_precedence_expr(stat->opc, stat->expr);
    rightParens = higher_precedence_expr(stat->opc, stat->u.store.expr);

    if (leftParens) {
        dl_printf(dl,  "(");
    }
    dl_print_expr(dl, sr, stat->expr);
    if (leftParens) {
        dl_printf(dl,  ")");
    }

    dl_printf(dl, " %s ", opc_operator(stat->opc));

    if (rightParens) {
        dl_printf(dl,  "(");
    }
    dl_print_expr(dl, sr, stat->u.store.expr);
    if (rightParens) {
        dl_printf(dl,  ")");
    }
}

void dl_print_label(struct DisplayLine *dl, struct StringRep *parent, int label)
{
    struct StringRep *sr = sr_newchild(dl, parent);

    sr->start = dl->pos;
    sr->type = LABEL;
    sr->data32 = label;

    dl_printf(dl, "L%d", label);

    sr->len = dl->pos - sr->start;
}

void dl_print_statement(struct DisplayLine *dl, struct StringRep *parent, struct Statement *stat)
{
    if (stat == NULL) return;
    struct StringRep *sr = sr_newchild(dl, parent);
    sr->type = STATEMENT;
    sr->stat = stat;
    sr->start = dl->pos;

    dl_print_opcode(dl, sr, stat->opc);
    struct StringRep *sr_opc = sr_lastchild(sr);
    sr_opc->type = STATEMENT_OPC;
    sr_opc->stat = stat;

    switch (stat->opc) {
        case Unop:
            break;
        case Udef:
            dl_printf(dl, "%cmt, %d", getmtyname(stat->u.def.mtype), stat->u.def.unk18);
            break;

        case Uxjp:
            dl_print_expr(dl, sr, stat->expr);
            dl_printf(dl, ", %d [%lld-%lld], def ", stat->u.xjp.cases_blockno, (((long long)stat->u.xjp.lbound_l << 32) | (long long)stat->u.xjp.lbound_h), (((long long)stat->u.xjp.hbound_l << 32) | (long long)stat->u.xjp.hbound_h));
            dl_print_label(dl, sr, stat->u.xjp.default_blockno);
            break;

        case Uclab:
            //dl_printf(dl, "%d", stat->u.label.blockno);
            dl_print_label(dl, sr, stat->u.label.blockno);
            break;

        case Ubgnb:
        case Uendb:
        case Uret:
        case Uaent:
        case Ulbgn:
        case Ulend:
        case Ultrm:
        case Ulbdy:
        case Uclbd:
        case Ucubd:
        case Ustep:
        case Uctrl:
            break;

        case Umst:
            dl_printf(dl, "%d", stat->u.mst.loc);
            break;

        case Ucia:
            break;

        case Uicuf:
        case Urcuf:
            break;

        case Ucup:
            if (stat->u.call.proc != NULL)
            dl_printf(dl, "%s %d", dtype_name(stat->u.call.returntype), stat->u.call.proc->id);
            break;

        case Uloc:
            dl_printf(dl, "%d", stat->u.loc.line);
            break;

        case Uujp:
            dl_print_label(dl, sr, stat->u.jp.target_blockno);
            //dl_printf(dl, "%d", stat->u.jp.target_blockno);
            break;

        case Ufjp:
        case Utjp:
            dl_print_expr(dl, sr, stat->expr);
            dl_printf(dl, ", ");
            dl_print_label(dl, sr, stat->u.jp.target_blockno);
            //dl_printf(dl, ", %d", stat->u.jp.target_blockno);
            break;

        case Ulab:
            dl_print_label(dl, sr, stat->u.label.blockno);
            //blocknodl_printf(dl, "%d", stat->u.label.blockno);
            break;

        case Uisst:
        case  Ustr:
            dl_print_assignment(dl, sr, stat);
            break;

        case Uistr:
        case Uistv:
        case Uirst:
        case Uirsv:
            dl_print_istr(dl, sr, stat);
            break;

        case  Umov:
        case Umovv:
            dl_print_mov(dl, sr, stat);
            break;
            dl_print_other_store(dl, sr, stat);
            break;

        //case Uchkt: // only has one expression
        case Utpeq:
        case Utpge:
        case Utpgt:
        case Utple:
        case Utplt:
        case Utpne:
            dl_print_trap(dl, sr, stat);
            break;

        case Upar:
            dl_printf(dl, "%d, ", stat->u.par.index);
            dl_print_expr(dl, sr, stat->expr);
            /*
            if (stat->u.par.dtype == Adt) {
                dl_printf(dl, ", ");
                dl_print_expr(dl, sr, stat->u.par.baseaddr);
            }
             */
            break;

            // unknown, but expr != NULL
        default:
            dl_print_expr(dl, sr, stat->expr);
            break;
    }
    sr->len = dl->pos - sr->start;
}


// TODO: special cases where bitvectors are sets of registers/graphnodes
void dl_print_bitvectorbb(struct DisplayLine *dl, struct StringRep *parent, struct BitVector *bv)
{
    struct StringRep *sr = sr_newchild(dl, parent);
    sr->type = BITVECTORBB;
    sr->bitvector = *bv;
    sr->start = dl->pos;
    int blockpos;
    int word = 0;
    int i;
    bool at_first = true;

    if (bv->blocks == NULL) {
        dl_printf(dl, "(0) []");
        return;
    }

    dl_printf(dl, "(%d) [", bv->num_blocks);


    for (blockpos = 0; blockpos < bv->num_blocks && blockpos <= (bitposcount - 1) >> 7; blockpos++) {
        for (i = word; i < word + 128; i++) {
            if (bv->blocks[blockpos].words[(i & 0x7f) >> 5] & (1U << (31 - (i & 0x1f)))) {
                    if (at_first) {
                        dl_printf(dl, "%d", i);
                        at_first = false;
                    } else {
                        dl_printf(dl, ", %d", i);
                    }
            }
        }
        word += 128;
    }
    dl_printf(dl, "]");
    sr->len = dl->pos - sr->start;
    //dl->top = sr;
    //dl->len = sr->len;
}

// TODO: special cases where bitvectors are sets of registers/graphnodes
void dl_print_bitvector(struct DisplayLine *dl, struct StringRep *parent, struct BitVector *bv)
{
    struct StringRep *sr = sr_newchild(dl, parent);
    sr->type = BITVECTOR;
    sr->bitvector = *bv;
    sr->start = dl->pos;
    int blockpos;
    int word = 0;
    int i;
    bool at_first = true;

    if (bv->blocks == NULL) {
        dl_printf(dl, "(0) []");
        return;
    }

    dl_printf(dl, "(%d) [", bv->num_blocks);


    for (blockpos = 0; blockpos < bv->num_blocks && blockpos <= (bitposcount - 1) >> 7; blockpos++) {
        for (i = word; i < word + 128; i++) {
            if (bv->blocks[blockpos].words[(i & 0x7f) >> 5] & (1U << (31 - (i & 0x1f)))) {
                    if (at_first) {
                        dl_printf(dl, "%d", i);
                        at_first = false;
                    } else {
                        dl_printf(dl, ", %d", i);
                    }
            }
        }
        word += 128;
    }
    dl_printf(dl, "]");
    sr->len = dl->pos - sr->start;
    //dl->top = sr;
    //dl->len = sr->len;
}

/* top-level */

struct DisplayLine *dl_from_statement(struct Statement *stat)
{
    if (stat == NULL) return NULL;

    struct DisplayLine *dl = dl_new();
    /*
    struct StringRep *sr = sr_new();
    sr->type = STATEMENT;
    sr->stat = stat;
    sr->start = dl->pos;
     */

    dl_print_statement(dl, NULL, stat);

    /*
    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
     */
    dl->len = dl->top->len;
    return dl;
}

void dl_print_graphnode(struct DisplayLine *dl, struct StringRep *parent, struct Graphnode *node, bool printPredSucc)
{
    if (node == NULL) return;
    struct StringRep *sr = sr_newchild(dl, parent);
    sr->type = GRAPHNODE;
    sr->node = node;
    sr->start = dl->pos;
    if (node == NULL) {
        dl_printf(dl, "NULL");
        return;
    }
    dl_printf(dl, "node %d ", node->num);

    if (printPredSucc) {
        if (node->prev != NULL) {
            dl_printf(dl, "p%d ", node->prev->num);
        }
        if (node->next != NULL) {
            dl_printf(dl, "n%d ", node->next->num);
        }
        if (node->predecessors != NULL) {
            dl_printf(dl, "(pred");
            for (struct GraphnodeList *pred = node->predecessors; pred != NULL; pred = pred->next) {
                dl_printf(dl, " %d", pred->graphnode->num);
            }
            dl_printf(dl, ") ");
        }
        if (node->successors != NULL) {
            dl_printf(dl, "(succ");
            for (struct GraphnodeList *succ = node->successors; succ != NULL; succ = succ->next) {
                dl_printf(dl, " %d", succ->graphnode->num);
            }
            dl_printf(dl, ")");
        }
    }
    sr->len = dl->pos - sr->start;
}

struct DisplayLine *dl_from_graphnode(struct Graphnode *node, bool printPredSucc)
{
    if (node == NULL) return NULL;
    struct DisplayLine *dl = dl_new();
    /*
    struct StringRep *sr = sr_new();
    sr->type = GRAPHNODE;
    sr->node = node;
    sr->start = dl->pos;
     */

    dl_print_graphnode(dl, NULL, node, printPredSucc);

    /*
    sr->len = dl->pos - sr->start;
    dl->top = sr;
     */
    dl->len = dl->top->len;
    return dl;
}

void dl_print_var_access(struct DisplayLine *dl, struct StringRep *parent, struct VarAccessList *access)
{
    struct StringRep *sr = sr_newchild(dl, parent);
    sr->type = VAR_ACCESS;
    sr->varAccess = access;
    sr->start = dl->pos;
    switch (access->type) {
        case 1: // store
            dl_printf(dl, "store: ");
            dl_print_statement(dl, sr, access->data.store);
            break;

        case 2: // load
            dl_printf(dl, "load: ");
            dl_print_expr(dl, sr, access->data.var);
            break;

        case 3: // move
            dl_printf(dl, "move: ");
            dl_print_statement(dl, sr, access->data.move);
            break;
    }
    sr->len = dl->pos - sr->start;
}

struct DisplayLine *dl_from_var_access(struct VarAccessList *access)
{
    struct DisplayLine *dl = dl_new();
    /*
    struct StringRep *sr = sr_new();
    sr->type = VAR_ACCESS;
    sr->varAccess = access;
    sr->start = dl->pos;
     */

    dl_print_var_access(dl, NULL, access);

    //dl_printf(dl, "node %d ", node->num);
    //if (node->prev != NULL) {
    //    dl_printf(dl, "p%d ", node->prev->num);
    //}
    //if (node->next != NULL) {
    //    dl_printf(dl, "n%d ", node->next->num);
    //}
    //if (node->predecessors != NULL) {
    //    dl_printf(dl, "(pred");
    //    for (struct GraphnodeList *pred = node->predecessors; pred != NULL; pred = pred->next) {
    //        dl_printf(dl, " %d", pred->graphnode->num);
    //    }
    //    dl_printf(dl, ") ");
    //}
    //if (node->successors != NULL) {
    //    dl_printf(dl, "(succ");
    //    for (struct GraphnodeList *succ = node->successors; succ != NULL; succ = succ->next) {
    //        dl_printf(dl, " %d", succ->graphnode->num);
    //    }
    //    dl_printf(dl, ")");
    //}

    /*
    sr->len = dl->pos - sr->start;
    dl->top = sr;
     */
    dl->len = dl->top->len;
    return dl;
}

struct DisplayLine *dl_from_bittab_ichain(int bitpos, struct IChain *ichain)
{
    if (ichain == NULL) return NULL;
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new();
    sr->type = MISC;
    sr->start = dl->pos;

    dl_printf(dl, "%*d: ", bittabdigits, bitpos);
    dl_print_ichain(dl, sr, ichain);

    if ((ichain->type == isvar || ichain->type == issvar) && ichain->isvar_issvar.assignbit == bitpos) {
        dl_printf(dl, " (assign)");
    }

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

struct DisplayLine *dl_from_bittab_liverange(int bit, struct LiveRange *liverange)
{
    struct DisplayLine *dl = dl_new();
    //struct StringRep *sr = sr_new();
    //sr->type = LIVERANGE;
    //sr->liverange = liverange;
    //sr->start = dl->pos;

    if (liverange != NULL) {
        dl_print_liverange(dl, NULL, liverange);
    } else {
        dl_printf(dl, "%d: NULL", bit);
    }

    //sr->len = dl->pos - sr->start;
    //dl->top = sr;
    dl->len = dl->top->len;
    return dl;
}

struct DisplayLine *dl_from_bitvector(struct BitVector *bv, const char *name)
{
    struct DisplayLine *dl = dl_new();

    struct StringRep *n = sr_newchild(dl, dl->top);
    n->type = INFO;
    n->start = dl->pos;

    dl_printf(dl, "%s: ", name);
    n->len = dl->pos - n->start;

    dl_print_bitvector(dl, dl->top, bv);

    dl->len = dl->pos;
    return dl;
}

struct DisplayLine *dl_from_reg_assignment(int reg, struct IChain *ichain)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new();
    sr->type = MISC;
    sr->start = dl->pos;

    if (ichain != NULL) {
        dl_print_register(dl, sr, reg);
        dl_printf(dl, " -> ");
        dl_printf(dl, "%d: ", ichain->bitpos);
        dl_print_ichain(dl, sr, ichain);
    } else {
        dl_print_register(dl, sr, reg);
        dl_printf(dl, " -> ");
        dl_printf(dl, "NULL");
    }

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

struct DisplayLine *dl_from_variable(struct Variable *var)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new();
    sr->type = VARIABLE;
    sr->variable = var;
    sr->start = dl->pos;

    sr->start += dl_printf(dl, " % 4d: ", var->location.addr);
    dl_print_variable(dl, var->location);
    //dl_printf(dl, "temp %d: offset %d, %s", temp->index, temp->disp, temp->not_spilled ? "not spilled" : "spilled");

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = dl->pos;
    return dl;
}

struct DisplayLine *dl_from_ldatab(struct LdatabEntry *lda)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new();
    sr->type = LDATAB_ENTRY;
    sr->ldatabEntry = lda;
    sr->start = dl->pos;

    sr->start += dl_printf(dl, " % 4d: ", lda->var.addr);
    dl_print_variable(dl, lda->var);
    dl_printf(dl, " (lda only)");
    //dl_printf(dl, "temp %d: offset %d, %s", temp->index, temp->disp, temp->not_spilled ? "not spilled" : "spilled");

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = dl->pos;
    return dl;
}

void dl_print_temploc(struct DisplayLine *dl, struct Temploc *temp)
{
    dl_printf(dl, "% 4d: temp %d, %s", temp->disp, temp->index, temp->not_spilled ? "not spilled" : "spilled");
}

struct DisplayLine *dl_from_temploc(struct Temploc *temp)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new();
    sr->type = TEMPLOC;
    sr->temploc = temp;
    sr->start = dl->pos;

    sr->start += dl_printf(dl, " % 4d: ", temp->disp);
    dl_printf(dl, "temp %d, %s", temp->index, temp->not_spilled ? "not spilled" : "spilled");

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = dl->pos;//sr->len;
    return dl;
}


struct DisplayLine *dl_new_printf(char *fmt, ...)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new();
    sr->type = INFO;
    sr->data = NULL;
    //sr->data = message;
    sr->start = dl->pos;

    va_list args;
    va_start(args, fmt);
    dl_vprintf(dl, fmt, args);
    va_end(args);

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}


struct DisplayLine *dl_placeholder(const char *message)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new();
    sr->type = INFO;
    sr->message = message;
    sr->start = dl->pos;

    dl_printf(dl, "%s", message);

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

void dlprint_init()
{
    bittabdigits = (int)log10(bitposcount) + 1;
}
#endif
