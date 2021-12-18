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

#include "debug.h"

/* StringRep */
struct StringRep *sr_new(int line)
{
    struct StringRep *sr = calloc(1, sizeof(struct StringRep));
    sr->line = line;
    return sr;
}

void sr_free(struct StringRep *sr)
{
    if (sr == NULL) return;
    for (int i = 0; i < sr->numChildren; i++) {
        sr_free(sr->children[i]);
    }

    free(sr);
}

struct StringRep *sr_newchild(struct StringRep *parent)
{
    parent->children[parent->numChildren] = sr_new(parent->line);
    return parent->children[parent->numChildren++];
}

struct StringRep *sr_get_child_at_pos(struct StringRep *sr, int pos)
{
    for (int c = 0; c < sr->numChildren; c++) {
        struct StringRep *child = sr->children[c];
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

// TODO: use temp files instead strings?
int dl_printf(struct DisplayLine *restrict dl, char *restrict fmt, ...)
{
    va_list args;
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
}

int dl_print_opcode(struct DisplayLine *dl, Uopcode opc)
{
    return dl_printf(dl, "%.4s ", utab[opc].opcname);
}

int dl_print_variable(struct DisplayLine *dl, struct VariableLocation loc)
{
    switch (loc.memtype) {
        case Mmt:
            return dl_printf(dl, "local%02X", -loc.addr);

        case Rmt:
            return dl_printf(dl, "%s", regnames[loc.addr]);

        case Pmt:
            return dl_printf(dl, "arg%d", loc.addr / 4);

        case Smt:
            return dl_printf(dl, "global%d", loc.blockno);

        default:
            return dl_printf(dl, "var(%cmt, %d, %d)", getmtyname(loc.memtype), loc.addr, loc.blockno);
    }
}

int dl_print_constant(struct DisplayLine *dl, Datatype dtype, union Constant constval)
{
    struct RealstoreData *real;
    switch (dtype) {
        case Fdt:
            return dl_printf(dl, "proc%d", constval.intval);

        case Adt:
        case Gdt:
        case Hdt:
        case Jdt:
        case Ldt:
        case Ndt:
            return dl_printf(dl, "%d", constval.intval);

        case Idt:
        case Kdt:
            return dl_printf(dl, "%lld", constval.longval);

        default:
            real = realstore;
            for (int i = 0; i < (constval.real.disp >> 8); i++) {
                real = real->next;
            }
            return dl_printf(dl, "%.*s%s", constval.real.len, &real->c[constval.real.disp & 0xff], dtype == Rdt ? "f" : "");
    }
}

int dl_print_small_dtype(struct DisplayLine *dl, enum Datatype type, int length)
{
    char dtypeSign;
    switch (type) {
        case Idt:
        case Jdt: dtypeSign = 's'; break;
        case Kdt:
        case Ldt: dtypeSign = 'u'; break;

        default: return dl_printf(dl, "%s", dtype_name(type));
    }

    return dl_printf(dl, "%c%d", dtypeSign, length);
}

int dl_print_register(struct DisplayLine *dl, struct StringRep *parent, int regColor)
{
    int printed = 0;
    if (regColor <= 0) return 0;

    struct StringRep *sr = sr_newchild(parent);
    sr->start = dl->pos;
    sr->type = REGISTER;
    sr->reg = coloroffset(regColor);

    printed += dl_printf(dl, "%s", regnames[sr->reg]);

    sr->len = dl->pos - sr->start;
    return printed;
}

// TODO: it's weird that this and dl_print_ichain create a child, while dl_print_statement does not
int dl_print_expr(struct DisplayLine *dl, struct StringRep *parent, struct Expression *expr)
{
    int printed = 0;
    bool leftParens = false;
    bool rightParens = false;
    if (expr == NULL) return 0;

    struct StringRep *sr = sr_newchild(parent);

    sr->start = dl->pos;
    sr->type = EXPRESSION;
    sr->expr = expr;

    switch (expr->type) {
        case isconst:
            printed += dl_print_constant(dl, expr->datatype, expr->data.isconst.number);
            break;

        case isvar:
        case issvar:
            printed += dl_print_variable(dl, expr->data.isvar_issvar.location);
            break;

        case islda:
        case isilda:
            printed += dl_printf(dl, "&");
            printed += dl_print_variable(dl, expr->data.islda_isilda.address);
            break;

        case isop:
            if (optab[expr->data.isop.opc].is_binary_op) {
                leftParens = higher_precedence_expr(opc_precedence[expr->data.isop.opc], expr->data.isop.op1);
                rightParens = higher_precedence_expr(opc_precedence[expr->data.isop.opc], expr->data.isop.op2);
            } else {
                leftParens = higher_precedence_expr(opc_precedence[expr->data.isop.opc], expr->data.isop.op1);
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
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (leftParens) {
                        printed += dl_printf(dl,  ")");
                    }

                    printed += dl_printf(dl, " %s ", opc_operator(expr->data.isop.opc));

                    if (rightParens) {
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_expr(dl, sr, expr->data.isop.op2);
                    if (rightParens) {
                        printed += dl_printf(dl,  ")");
                    }
                    break;

                case Ulda:
                case Unot:
                case Ulnot:
                case Uneg:
                    printed += dl_printf(dl, "%s", opc_operator(expr->data.isop.opc));
                    if (leftParens) {
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (leftParens) {
                        printed += dl_printf(dl,  ")");
                    }
                    break;

                case Uilod:
                    {
                        bool closeInnerParens = false;
                        bool closeParens = false;
                        bool hasOffset = expr->data.isop.datasize != 0;

                        // output: *((e1 + e2) + offset)
                        printed += dl_printf(dl, "%s", opc_operator(expr->data.isop.opc));
                        if (hasOffset || higher_precedence_expr(opc_precedence[expr->data.isop.opc], expr->data.isop.op1)) {
                            closeParens = true;
                            printed += dl_printf(dl,  "(");
                        }
                        if (hasOffset && higher_precedence_expr(opc_precedence[Uadd], expr->data.isop.op1)) {
                            closeInnerParens = true;
                            printed += dl_printf(dl,  "(");
                        }
                        
                        printed += dl_print_expr(dl, sr, expr->data.isop.op1);

                        if (closeInnerParens) {
                            printed += dl_printf(dl,  ")");
                        }
                        if (hasOffset) {
                            printed += dl_printf(dl, " + %d", expr->data.isop.datasize);
                        }
                        if (closeParens) {
                            printed += dl_printf(dl,  ")");
                        }
                    }
                    break;


                case Uixa:
                    printed += dl_print_expr(dl, sr, expr->data.isop.op1);
                    printed += dl_printf(dl,  "[");
                    printed += dl_print_expr(dl, sr, expr->data.isop.op2);
                    printed += dl_printf(dl,  "]");
                    break;

                case Ucvtl:
                    printed += dl_printf(dl,  "(");
                    printed += dl_print_small_dtype(dl, expr->datatype, expr->data.isop.datasize);
                    printed += dl_printf(dl,  ")");

                    if (leftParens) {
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (leftParens) {
                        printed += dl_printf(dl,  ")");
                    }
                    break;

                case Ucvt:
                    printed += dl_printf(dl,  "(%s)", dtype_name(expr->data.isop.datatype));
                    if (leftParens) {
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (leftParens) {
                        printed += dl_printf(dl,  ")");
                    }
                    break;

                default:
                    printed += dl_print_opcode(dl, expr->data.isop.opc);
                    printed += dl_printf(dl, "(");
                    printed += dl_print_expr(dl, sr, expr->data.isop.op1);
                    if (optab[expr->data.isop.opc].is_binary_op) {
                        printed += dl_printf(dl,  ", ");
                        printed += dl_print_expr(dl, sr, expr->data.isop.op2);
                    }
                    printed += dl_printf(dl, ")");
                    break;
            }
            break;

        case dumped:
            printed += dl_printf(dl, "dumped");
            break;

        case empty:
            printed += dl_printf(dl, "empty");
            break;

        default:
            fprintf(stderr, "unhandled expr type");
            break;
    }

    sr->len = dl->pos - sr->start;

    return printed;
}

// duplicate code because IChains are ridiculously similar to Expressions. 
// it was the 80's or something, so uopt didn't just reuse Expression
int dl_print_ichain(struct DisplayLine *dl, struct StringRep *parent, struct IChain *ichain)
{
    int printed = 0;
    bool leftParens = false;
    bool rightParens = false;
    if (ichain == NULL) return 0;

    struct StringRep *sr = sr_newchild(parent);

    sr->start = dl->pos;
    sr->type = ICHAIN;
    sr->ichain = ichain;

    switch (ichain->type) {
        case isconst:
            printed += dl_print_constant(dl, ichain->dtype, ichain->isconst.number);
            break;

        case isvar:
        case issvar:
            printed += dl_print_variable(dl, ichain->isvar_issvar.location);
            break;

        case islda:
        case isilda:
            printed += dl_printf(dl, "&");
            printed += dl_print_variable(dl, ichain->islda_isilda.address);
            break;

        case isop:
            if (optab[ichain->isop.opc].is_binary_op) {
                leftParens = higher_precedence_image(opc_precedence[ichain->isop.opc], ichain->isop.op1);
                rightParens = higher_precedence_image(opc_precedence[ichain->isop.opc], ichain->isop.op2);
            } else {
                leftParens = higher_precedence_image(opc_precedence[ichain->isop.opc], ichain->isop.op1);
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
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (leftParens) {
                        printed += dl_printf(dl,  ")");
                    }

                    printed += dl_printf(dl, " %s ", opc_operator(ichain->isop.opc));

                    if (rightParens) {
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_ichain(dl, sr, ichain->isop.op2);
                    if (rightParens) {
                        printed += dl_printf(dl,  ")");
                    }
                    break;

                case Ulda:
                case Unot:
                case Ulnot:
                case Uneg:
                    printed += dl_printf(dl, "%s", opc_operator(ichain->isop.opc));
                    if (leftParens) {
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (leftParens) {
                        printed += dl_printf(dl,  ")");
                    }
                    break;

                case Uilod:
                    {
                        bool closeInnerParens = false;
                        bool closeParens = false;
                        bool hasOffset = ichain->isop.size != 0;

                        // output: *((e1 + e2) + offset)
                        printed += dl_printf(dl, "%s", opc_operator(ichain->isop.opc));
                        if (hasOffset || higher_precedence_image(opc_precedence[ichain->isop.opc], ichain->isop.op1)) {
                            closeParens = true;
                            printed += dl_printf(dl,  "(");
                        }
                        if (hasOffset && higher_precedence_image(opc_precedence[Uadd], ichain->isop.op1)) {
                            closeInnerParens = true;
                            printed += dl_printf(dl,  "(");
                        }
                        
                        printed += dl_print_ichain(dl, sr, ichain->isop.op1);

                        if (closeInnerParens) {
                            printed += dl_printf(dl,  ")");
                        }
                        if (hasOffset) {
                            printed += dl_printf(dl, " + %d", ichain->isop.size);
                        }
                        if (closeParens) {
                            printed += dl_printf(dl,  ")");
                        }
                    }
                    break;


                case Uixa:
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    printed += dl_printf(dl,  "[");
                    printed += dl_print_ichain(dl, sr, ichain->isop.op2);
                    printed += dl_printf(dl,  "]");
                    break;

                case Ucvtl:
                    printed += dl_printf(dl,  "(");
                    printed += dl_print_small_dtype(dl, ichain->dtype, ichain->isop.size);
                    printed += dl_printf(dl,  ")");

                    if (leftParens) {
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (leftParens) {
                        printed += dl_printf(dl,  ")");
                    }
                    break;

                case Ucvt:
                    printed += dl_printf(dl,  "(%s)", dtype_name(ichain->isop.datatype));
                    if (leftParens) {
                        printed += dl_printf(dl,  "(");
                    }
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (leftParens) {
                        printed += dl_printf(dl,  ")");
                    }
                    break;

                // store ops (traps are considered storeops apparently)
                // these aren't marked as binary operators, even though they have two operands
                case Uisst:
                case Ustr:
                    printed += dl_print_opcode(dl, ichain->isop.opc);
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    printed += dl_printf(dl, " = ");
                    printed += dl_print_ichain(dl, sr, ichain->isop.op2);
                    break;

                case Uistr:
                case Uistv:
                    {
                        bool closeInnerParens = false;
                        bool closeParens = false;
                        bool hasOffset = ichain->isop.s.word != 0;

                        printed += dl_print_opcode(dl, ichain->isop.opc);
                        // *((e1 + e2) + offset) = op2
                        printed += dl_printf(dl, "%s", opc_operator(ichain->isop.opc));
                        if (hasOffset || higher_precedence_image(opc_precedence[ichain->isop.opc], ichain->isop.op1)) {
                            closeParens = true;
                            printed += dl_printf(dl,  "(");
                        }
                        if (hasOffset && higher_precedence_image(opc_precedence[Uadd], ichain->isop.op1)) {
                            closeInnerParens = true;
                            printed += dl_printf(dl,  "(");
                        }
                        printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                        if (closeInnerParens) {
                            printed += dl_printf(dl,  ")");
                        }
                        if (hasOffset) {
                            printed += dl_printf(dl, " + %d", ichain->isop.s.word);
                        }
                        if (closeParens) {
                            printed += dl_printf(dl,  ")");
                        }

                        printed += dl_printf(dl, " = ");
                        printed += dl_print_ichain(dl, sr, ichain->isop.op2);
                    }
                    break;

                case Umov:
                case Umovv:
                    printed += dl_print_opcode(dl, ichain->isop.opc);
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    printed += dl_printf(dl, " <- ");
                    printed += dl_print_ichain(dl, sr, ichain->isop.op2);
                    break;

                case Uirsv:
                case Uirst:
                    printed += dl_print_opcode(dl, ichain->isop.opc);
                    // print rhs first
                    printed += dl_print_ichain(dl, sr, ichain->isop.op2);
                    printed += dl_printf(dl, ", ");
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    break;

                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                    printed += dl_print_opcode(dl, ichain->isop.opc);
                    // lhs first
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    printed += dl_printf(dl, ", ");
                    printed += dl_print_ichain(dl, sr, ichain->isop.op2);
                    break;

                case Uchkt:
                default:
                    printed += dl_print_opcode(dl, ichain->isop.opc);
                    printed += dl_printf(dl, "(");
                    printed += dl_print_ichain(dl, sr, ichain->isop.op1);
                    if (optab[ichain->isop.opc].is_binary_op) {
                        printed += dl_printf(dl,  ", ");
                        printed += dl_print_ichain(dl, sr, ichain->isop.op2);
                    }
                    printed += dl_printf(dl, ")");
                    break;
            }
            break;

        case dumped:
            printed += dl_printf(dl, "dumped");
            break;

        case empty:
            printed += dl_printf(dl, "empty");
            break;

        default:
            fprintf(stderr, "unhandled ichain type %d", ichain->type);
            break;
    }

    sr->len = dl->pos - sr->start;

    return printed;
}

int dl_print_liverange(struct DisplayLine *dl, struct StringRep *parent, struct LiveRange *liverange)
{
    int printed = 0;
    if (liverange == NULL) return 0;

    struct StringRep *sr = sr_newchild(parent);

    sr->start = dl->pos;
    sr->type = LIVERANGE;
    sr->liverange = liverange;

    if (liverange->ichain != NULL) {
        if (liverange->assigned_reg > 0) {
            printed += dl_print_register(dl, sr, liverange->assigned_reg);
            printed += dl_printf(dl, " -> ");
        }

        printed += dl_print_ichain(dl, sr, liverange->ichain);
    } else {
        printed += dl_printf(dl, "ichain NULL?!");
    }

    sr->len = dl->pos - sr->start;
    return printed;
}

int dl_print_assignment(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    int printed = 0;
    // this should always be true, but who knows
    assert(stat->expr->type == isvar || stat->expr->type == issvar);
    printed += dl_print_expr(dl, sr, stat->expr);
    if (stat->expr->data.isvar_issvar.assigned_value != NULL) {
        printed += dl_printf(dl, " = ");
        printed += dl_print_expr(dl, sr, stat->expr->data.isvar_issvar.assigned_value);
    }

    return printed;
}

void dl_print_istr(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    // *(expr + offset)
    dl_printf(dl, "*(");
    dl_print_expr(dl, sr, stat->expr);

    // TODO: hacky. printing needs a refactor
    struct StringRep *dest = sr->children[sr->numChildren-1];

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

int dl_print_mov(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    int printed = 0;

    printed += dl_print_expr(dl, sr, stat->expr);
    if (stat->u.store.expr != NULL) {
        printed += dl_printf(dl, " <- ");
        printed += dl_print_expr(dl, sr, stat->u.store.expr);
    }

    return printed;
}

int dl_print_other_store(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    int printed = 0;
    if (stat->u.store.expr != NULL) {
        printed += dl_print_expr(dl, sr, stat->u.store.expr);
        printed += dl_printf(dl, ", ");
    }
    printed += dl_print_expr(dl, sr, stat->expr);
    return printed;
}

int dl_print_trap(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    bool leftParens, rightParens;
    int printed = 0;

    leftParens = higher_precedence_expr(opc_precedence[stat->opc], stat->expr);
    rightParens = higher_precedence_expr(opc_precedence[stat->opc], stat->u.store.expr);

    if (leftParens) {
        printed += dl_printf(dl,  "(");
    }
    printed += dl_print_expr(dl, sr, stat->expr);
    if (leftParens) {
        printed += dl_printf(dl,  ")");
    }

    printed += dl_printf(dl, " %s ", opc_operator(stat->opc));

    if (rightParens) {
        printed += dl_printf(dl,  "(");
    }
    printed += dl_print_expr(dl, sr, stat->u.store.expr);
    if (rightParens) {
        printed += dl_printf(dl,  ")");
    }
    return printed;
}

void dl_print_statement(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat)
{
    dl_print_opcode(dl, stat->opc);
    
    switch (stat->opc) {
        case Unop:
            break;
        case Udef:
            dl_printf(dl, "%cmt, %d", getmtyname(stat->u.def.mtype), stat->u.def.unk18);
            break;

        case Uxjp:
            dl_print_expr(dl, sr, stat->expr);
            dl_printf(dl, ", %d [%lld-%lld], def %d", stat->u.xjp.cases_blockno, (((long long)stat->u.xjp.lbound_l << 32) | (long long)stat->u.xjp.lbound_h), (((long long)stat->u.xjp.hbound_l << 32) | (long long)stat->u.xjp.hbound_h), stat->u.xjp.default_blockno);
            break;

        case Uclab:
            dl_printf(dl, "%d", stat->u.label.blockno);
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
            dl_printf(dl, "%d", stat->u.jp.target_blockno);
            break;

        case Ufjp:
        case Utjp:
            dl_print_expr(dl, sr, stat->expr);
            dl_printf(dl, ", %d", stat->u.jp.target_blockno);
            break;

        case Ulab:
            dl_printf(dl, "%d", stat->u.label.blockno);
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
}

/* top-level */

struct DisplayLine *dl_from_statement(int line, struct Statement *stat)
{
    if (stat == NULL) return NULL;

    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(line);
    sr->type = STATEMENT;
    sr->stat = stat;
    sr->start = dl->pos;

    dl_print_statement(dl, sr, stat);

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

struct DisplayLine *dl_from_graphnode(int line, struct Graphnode *node, bool print_pred_succ)
{
    if (node == NULL) return NULL;
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(line);
    sr->type = GRAPHNODE;
    sr->node = node;
    sr->start = dl->pos;

    dl_printf(dl, "node %d ", node->num);

    if (print_pred_succ) {
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
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

struct DisplayLine *dl_from_var_access(int line, struct VarAccessList *access)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(line);
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

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

struct DisplayLine *dl_from_bittab_ichain(int bitpos, struct IChain *ichain)
{
    if (ichain == NULL) return NULL;
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(bitpos);
    sr->type = MISC;
    sr->start = dl->pos;

    dl_printf(dl, "%d: ", bitpos);
    dl_print_ichain(dl, sr, ichain);

    if ((ichain->type == isvar || ichain->type == issvar) && ichain->isvar_issvar.assignbit == bitpos) {
        dl_printf(dl, " (assign)", bitpos);
    }

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

struct DisplayLine *dl_from_bittab_liverange(int line, struct LiveRange *liverange)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(line);
    sr->type = LIVERANGE;
    sr->liverange = liverange;
    sr->start = dl->pos;

    if (liverange != NULL) {
        dl_printf(dl, "%d: ", liverange->bitpos);
        dl_print_liverange(dl, sr, liverange);
    } else {
        dl_printf(dl, "%d: NULL", line);
    }

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

struct DisplayLine *dl_placeholder(int line, char *message)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(line);
    sr->type = MISC;
    sr->data = message;
    sr->start = dl->pos;

    dl_printf(dl, "%s", message);

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

#endif
