#include <ncurses.h>

#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptreg2.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

#include "debug.h"

//#define COLOR_BLACK	0
//#define COLOR_RED	1
//#define COLOR_GREEN	2
//#define COLOR_YELLOW	3
//#define COLOR_BLUE	4
//#define COLOR_MAGENTA	5
//#define COLOR_CYAN	6
//#define COLOR_WHITE	7

#define COLOR_BRIGHTGRAY	8
#define COLOR_BRIGHTRED	        9
#define COLOR_BRIGHTGREEN	10
#define COLOR_BRIGHTYELLOW	11
#define COLOR_BRIGHTBLUE	12
#define COLOR_BRIGHTMAGENTA	13
#define COLOR_BRIGHTCYAN	14
#define COLOR_BRIGHTWHITE	15

#define COLOR_CUBE(r, g, b) /* TODO? (c < 0x5f ? 0 : 1 + ((c - 0x5f) / 40)) */

#define COLOR_GRAY1   232
#define COLOR_GRAY2   233
#define COLOR_GRAY3   234
#define COLOR_GRAY4   235
#define COLOR_GRAY5   236
#define COLOR_GRAY6   237
#define COLOR_GRAY7   238
#define COLOR_GRAY8   239
#define COLOR_GRAY9   240
#define COLOR_GRAY10  241
#define COLOR_GRAY11  242
#define COLOR_GRAY12  243
#define COLOR_GRAY13  244
#define COLOR_GRAY14  245
#define COLOR_GRAY15  246
#define COLOR_GRAY16  247
#define COLOR_GRAY17  248
#define COLOR_GRAY18  249
#define COLOR_GRAY19  250
#define COLOR_GRAY20  251
#define COLOR_GRAY21  252
#define COLOR_GRAY22  253
#define COLOR_GRAY23  254
#define COLOR_GRAY24  255

#define BG(i) (COLORS + i)

// input
#define CTRL(x) ((x) & 0x1f)

// approximations of the RGB colors because nc is special -_-
const int reg_nc_colors[] = {
    // temp registers
    [r_zero ... r_f31] = 51,

    // constant registers
    [r_zero ... r_at] = 217,

    // Return registers
    [r_v0] = 227,
    [r_ra] = 227,
    [r_f0 ... r_f1] = 227,

    // saved registers
    [r_s0  ... r_s7]  = 204,
    [r_f20 ... r_f31] = 207,

    // float registers
    [r_f2 ... r_f19] = 105,

    // arg registers
    [r_a0  ... r_a3]  = 83,
    [r_f12 ... r_f15] = 83,

    // stack registers
    [r_sp] = 38,
    [r_fp] = 38,

    // special-purpose registers
    [r_k0 ... r_k1] = 214,
    [r_gp]          = 214,
};

static inline int nc_reg_color(int reg)
{
    if (reg < 0 || reg > sizeof(reg_nc_colors) / sizeof (reg_nc_colors[0])) return 0;

    return reg_nc_colors[reg];
}

enum StringRepType {
    UNDEFINED,
    STATEMENT,
    EXPRESSION,
    ICHAIN,
    LIVERANGE,
    GRAPHNODE,
    REGISTER,
    MISC,
};

struct StringRep {
    int start, len; // indices into DisplayLine, used for chgat
    int line;

    //struct StringRep *parent; // who knows
    int numChildren;
    struct StringRep *children[4]; // left to right

    enum StringRepType type;
    // pointer to original struct
    union {
        struct Statement *stat;
        struct Expression *expr;
        struct IChain *ichain;
        struct LiveRange *liverange;
        struct Graphnode *node;
        int reg;
        void *data;
    };
};

struct Highlighter {
    const char *name;
    bool (*shouldHighlight)(struct StringRep *sr, void *arg); // should always be this->arg
    int (*getColorPair)(struct StringRep *sr);
    void *arg; // points to whatever is needed by shouldHighlight
    int defaultColorPair;
    bool topLevelOnly; // don't recurse to children when highlighting
};

struct DisplayLine {
    int pos;
    int len; // number of used chars in s
    int maxLen; // number of chars allocated in s
    char *s;
    struct StringRep *top;
};

struct LineBuffer {
    int numLines;
    struct DisplayLine **lines;
};

enum ContainerType {
    CONTAINER_SPLIT_VERTICAL,
    CONTAINER_SPLIT_HORIZONTAL,
    CONTAINER_LEAF, // has a window
};

struct Tile {
    WINDOW *win;
    WINDOW *titleWin;
    char *title;

    struct Container *container;

    // displayed data
    struct LineBuffer buf;

    // Highlighting
    int numHighlighters;
    int highlighterCap;
    struct Highlighter **highlighters;

    // window dimensions (note the order is y,x to match with ncurses's absurdity)
    int wy, wx;
    int wrows, wcols;
    // passed to pnoutrefresh. They're 0-indexed, unlike the nlines and ncols args for newwin(), because why not?
    int smaxrow, smaxcol;
    // viewport position
    int viewRow, viewCol;
    int cursRow, cursCol;

    void (*input)(struct Tile *tile, int c);
    void *draw;
};

struct Container {
    enum ContainerType type;

    int y, x;
    int height, width;

    struct Container *next; // next sibling
    struct Container *prev; // prev sibling
    struct Container *up; // NULL if root
    struct Container *down; // first child or NULL if leaf

    struct Tile *tile; // NULL unless leaf
};

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
    for (int i = 0; i < sr->numChildren; i++)
    {
        sr_free(sr->children[i]);
    }

    free(sr);
}

struct StringRep *sr_addchild(struct StringRep *parent)
{
    parent->children[parent->numChildren] = sr_new(parent->line);
    return parent->children[parent->numChildren++];
}

/* DisplayLine */
void dl_realloc(struct DisplayLine *restrict dl) {
    // don't double size because lines are rarely longer than 100 chars
    dl->s = realloc(dl->s, dl->maxLen + 128);
    dl->maxLen += 128;
}

struct DisplayLine *dl_new()
{
    struct DisplayLine *dl = calloc(1, sizeof(struct DisplayLine));
    dl->s = calloc(1, 128);
    dl->maxLen = 128;
    return dl;
}

void dl_free(struct DisplayLine *dl)
{
    free(dl->s);
    sr_free(dl->top);
    free(dl);
}

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
    } while(dl->pos + printed >= maxLen);
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

    struct StringRep *sr = sr_addchild(parent);
    sr->start = dl->pos;
    sr->type = REGISTER;
    sr->reg = coloroffset(regColor);

    printed += dl_printf(dl, "%s", regnames[sr->reg]);

    sr->len = dl->pos - sr->start;
    return printed;
}

int dl_print_expr(struct DisplayLine *dl, struct StringRep *parent, struct Expression *expr)
{
    int printed = 0;
    bool leftParens = false;
    bool rightParens = false;
    if (expr == NULL) return 0;

    struct StringRep *sr = sr_addchild(parent);

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

    struct StringRep *sr = sr_addchild(parent);

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
                case Uistr:
                case Uistv:
                case Uirsv:
                case Uirst:
                case Umov:
                case Umovv:
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

    struct StringRep *sr = sr_addchild(parent);

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
    if (stat->expr->data.isvar_issvar.assigned_value != NULL) {
        printed += dl_print_expr(dl, sr, stat->expr->data.isvar_issvar.assigned_value);
        printed += dl_printf(dl, ", ");
    }
    printed += dl_print_expr(dl, sr, stat->expr);

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

struct DisplayLine *dl_from_statement(int line, struct Statement *stat) {
    if (stat == NULL) return NULL;

    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(line);
    sr->type = STATEMENT;
    sr->stat = stat;
    sr->start = dl->pos;

    dl_print_opcode(dl, stat->opc);
    
    switch (stat->opc) {
        case Unop:
            break;
        case Udef:
            dl_printf(dl, "%cmt, %d", getmtyname(stat->u.def.mtype), stat->u.def.unk18);
            break;

        case Uxjp:
        case Uclab:
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
            dl_print_other_store(dl, sr, stat);
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
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

struct DisplayLine *dl_from_graphnode(int line, struct Graphnode *node)
{
    if (node == NULL) return NULL;
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(line);
    sr->type = GRAPHNODE;
    sr->node = node;
    sr->start = dl->pos;

    dl_printf(dl, "node %d ", node->num);
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
    

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

struct DisplayLine *dl_from_bittab_ichain(int line, struct IChain *ichain)
{
    if (ichain == NULL) return NULL;
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(line);
    sr->type = ICHAIN;
    sr->ichain = ichain;
    sr->start = dl->pos;

    dl_printf(dl, "%d: ", ichain->bitpos);
    dl_print_ichain(dl, sr, ichain);

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

/* Store the string representation of the statements in a buffer of DisplayLines.
 *
 * Each line stores the string representation of an entire statement/graphnode/thing
 * as well as a tree of StringRep nodes which correspond to ranges inside the string:
 *
 *          STR 100 + -0x4($sp), -0x8($sp)   The DisplayLine itself
 *          ^----------------------------^   StringRep for entire Statement ("top")
 *              ^-------------^              top->children[0]
 *              ^-^                          top->children[0]->children[0]
 *                    ^-------^              top->children[0]->chlidren[1]
 *                               ^-------^   top->chilrden[1]
 *      
 * This allows us to just inorder traverse, checking the corresponding uopt structs, using mvwchgat() to update highlights.
 * 
 * TODO: it's probably fine to just reprint the highlighted part?
 */
struct LineBuffer build_proc_buffer()
{
    struct DisplayLine **dlines;
    struct Statement *stat = graphhead->stat_head;
    int numStatements = 0;
    int numNodes = 1; // 1 for graphhead

    while (stat != NULL) {
        numStatements++;
        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            numNodes++;
        }
        stat = stat->next;
    }

    int numLines = numNodes + numStatements;

    dlines = calloc(numLines, sizeof (struct DisplayLine *));

    int i = 0;

    stat = graphhead->stat_head;
    bool changedNode = true;
    while (stat != NULL) {
        if (changedNode) {
            dlines[i] = dl_from_graphnode(i, stat->graphnode);
            i++;
            changedNode = false;
        }

        dlines[i] = dl_from_statement(i, stat);
        i++;
        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            changedNode = true;
        }
        stat = stat->next;
    }

    return (struct LineBuffer) {.numLines = numLines, .lines = dlines};
}

struct LineBuffer build_info_buffer()
{
    int numLines = bitposcount;
    struct DisplayLine **lines = calloc(numLines, sizeof (struct DisplayLine));

    if (numLines == 0) {
        numLines = 1;
        lines[0] = dl_placeholder(0, "No IChains created");
    } else {
        for (int i = 0; i < numLines; i++) {
            lines[i] = dl_from_bittab_ichain(i, bittab[i].ichain);
        }
    }

    return (struct LineBuffer) {.numLines = numLines, .lines = lines};
}

struct LineBuffer build_liverange_buffer()
{
    int numLines = 0;
    for (int i = 0; i < bitposcount; i++) {
        if (bittab[i].liverange != NULL) {
            numLines++;
        }
    }

        struct DisplayLine **lines;
    if (numLines == 0) {
        numLines = 1;
        lines = calloc(numLines, sizeof (struct DisplayLine));
        lines[0] = dl_placeholder(0, "No liveranges created");
    } else {
        lines = calloc(numLines, sizeof (struct DisplayLine));
        int curLine = 0;
        for (int i = 0; i < bitposcount; i++) {
            if (bittab[i].liverange != NULL) {
                lines[curLine] = dl_from_bittab_liverange(curLine, bittab[i].liverange);
                curLine++;
            }
        }
    }

    return (struct LineBuffer) {.numLines = numLines, .lines = lines};
}

void free_line_buffer(struct LineBuffer dbg)
{
    for (int i = 0; i < dbg.numLines; i++) {
        dl_free(dbg.lines[i]);
    }

    free(dbg.lines);
}

void ncurses_init()
{
    static bool init = false;
    if (!init) {
        initscr();
        init = true;

        if (has_colors()) {
            start_color();
            for (int i = 1; i < COLORS; i++) {
                init_pair(i, i, COLOR_BLACK);
                init_pair(BG(i), COLOR_BLACK, i);
            }
        }
    } else {
        refresh();
    }
    cbreak();
    noecho();
    nonl();
    intrflush(stdscr, false);
    keypad(stdscr, true);
}

void ncurses_end()
{
    clear();
    refresh();
    endwin();
}

// set row without wmove
void cursor_updaterow(struct Tile *tile, int row)
{
    tile->cursRow = row;
    if (tile->cursRow < tile->viewRow) {
        tile->viewRow = MAX(row, 0); 
        tile->cursRow = tile->viewRow;
    } else if (tile->cursRow >= MIN(tile->viewRow + tile->wrows, tile->buf.numLines)) {
        tile->viewRow = MAX(MIN(row, tile->buf.numLines - 1) - (tile->wrows - 1), 0); 
        tile->cursRow = MIN(row, tile->buf.numLines - 1);
    }
}

// set column without wmove
void cursor_updatecol(struct Tile *tile, int col)
{
    tile->cursCol = col;
    if (tile->cursCol < tile->viewCol) {
        tile->viewCol = MAX(col, 0); 
        tile->cursCol = tile->viewCol;
    } else if (tile->cursCol >= MIN(tile->viewCol + tile->wcols, tile->buf.lines[tile->cursRow]->len)) {
        tile->viewCol = MAX(MIN(col, tile->buf.lines[tile->cursRow]->len - 1) - (tile->wcols - 1), 0); 
        tile->cursCol = MIN(col, tile->buf.lines[tile->cursRow]->len - 1);
    }
}

void cursor_setrow(struct Tile *tile, int row)
{
    cursor_updaterow(tile, row);
    wmove(tile->win, tile->cursRow, tile->cursCol);
}

void cursor_setcol(struct Tile *tile, int col)
{
    cursor_updatecol(tile, col);
    wmove(tile->win, tile->cursRow, tile->cursCol);
}

void cursor_absmove(struct Tile *tile, int y, int x)
{
    cursor_updaterow(tile, y);
    cursor_updatecol(tile, x);
    wmove(tile->win, tile->cursRow, tile->cursCol);
}

void cursor_move(struct Tile *tile, int dy, int dx)
{
    cursor_absmove(tile, tile->cursRow + dy, tile->cursCol + dx);
}

void tile_setdims(struct Tile *tile, int y, int x, int rows, int cols)
{
    tile->wy = y + 1;
    tile->wx = x;
    tile->wrows = rows - 1;
    tile->wcols = cols;

    tile->smaxrow = y + rows - 1;
    tile->smaxcol = x + cols - 1;
}

struct Tile *tile_new()
{
    struct Tile *tile = calloc(1, sizeof(struct Tile));
    tile->highlighters = calloc(10, sizeof(struct Highligther *));
    tile->highlighterCap = 10;

    return tile;
}

static inline void tile_wmove_to_cursor(struct Tile *tile)
{
    wmove(tile->win, tile->cursRow, tile->cursCol);
}

void sr_highlight(struct Tile *tile, struct StringRep *sr, struct Highlighter *hl);
void tile_redraw(struct Tile *tile)
{
    for (int line = 0; line < tile->buf.numLines; line++) {
        if (tile->buf.lines[line]->top->type == GRAPHNODE) {
            mvwchgat(tile->win, line, 0, -1, 0, COLOR_BLUE, NULL);
        } else {
            mvwchgat(tile->win, line, 0, -1, 0, 0, NULL);
        }
        for (int h = 0; h < tile->numHighlighters; h++) {
            sr_highlight(tile, tile->buf.lines[line]->top, tile->highlighters[h]);
        }
    }
    tile_wmove_to_cursor(tile);
}

void tile_fill_window(struct Tile *tile, struct LineBuffer buf)
{
    tile->buf = buf;

    int maxWidth = 0;
    for (int i = 0; i < buf.numLines; i++) {
        if (maxWidth < buf.lines[i]->len) {
            maxWidth = buf.lines[i]->len;
        }
    }

    tile->win = newpad(buf.numLines, maxWidth);
    intrflush(tile->win, false);
    keypad(tile->win, true);

    // print lines
    for (int line = 0; line < buf.numLines; line++) {
        if (buf.lines[line]->top->type == GRAPHNODE) {
            wcolor_set(tile->win, COLOR_BLUE, NULL);
        } else {
            wcolor_set(tile->win, 0, NULL);
        }
        mvwaddnstr(tile->win, line, 0, buf.lines[line]->s, buf.lines[line]->len);
    }
}

void tile_set_title(struct Tile *tile, char *title, int len)
{
    tile->titleWin = newpad(1, len);
    waddnstr(tile->titleWin, title, len);
}

struct Tile *build_proc_tile()
{
    struct Tile *tile = tile_new();
    struct LineBuffer dbg = build_proc_buffer();
    tile_fill_window(tile, dbg);
    tile_set_title(tile, entnam0, entnam0len);
    return tile;
}

struct Tile *build_ichain_tile()
{
    struct Tile *tile = tile_new();
    struct LineBuffer buf = build_info_buffer();
    tile_fill_window(tile, buf);
    char *title = "IChains";
    tile_set_title(tile, title, strlen(title));
    return tile;
}

struct Tile *build_liverange_tile()
{
    struct Tile *tile = tile_new();
    struct LineBuffer buf = build_liverange_buffer();
    tile_fill_window(tile, buf);
    tile_set_title(tile, entnam0, entnam0len);
    char *title = "Regalloc - Live Ranges";
    tile_set_title(tile, title, strlen(title));
    return tile;
}

void tile_free(struct Tile *tile)
{
    /* 
    for (int i = 0; i < tile->numChildren; i++) {
        tile_free(tile->children[i]);
    }
     */
    free_line_buffer(tile->buf);
    for (int i = 0; i < tile->numHighlighters; i++)
    {
        free(tile->highlighters[i]);
    }
    free(tile->highlighters);
    delwin(tile->titleWin);
    delwin(tile->win);
    free(tile);
}

void free_proc_tile(struct Tile *tile)
{
    tile_free(tile);
}

void tile_nc_refresh(struct Tile *tile)
{
    pnoutrefresh(tile->titleWin, 0, 0, tile->wy - 1, tile->wx, tile->wy - 1, tile->smaxcol);
    pnoutrefresh(tile->win, tile->viewRow, tile->viewCol, tile->wy, tile->wx, tile->smaxrow, tile->smaxcol);
    doupdate();
}

bool expr_in_bvect(struct Expression *expr, struct BitVector *bv)
{
    switch (expr->type) {
        case isop:
            return bvectin0(expr->ichain->bitpos, bv);

        case isvar:
            return bvectin0(expr->ichain->bitpos, bv);

        case isilda:
        case issvar:
            // warn about pascal 
        case islda:
        case isconst:
        case isrconst:
        default:
            break;
    }

    return false;
}

bool stat_in_bvect(struct Statement *stat, struct BitVector *bv)
{
    switch (stat->opc) {
        case Uisst:
        case  Ustr:
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
            if (stat->u.store.ichain != NULL) {
                return bvectin0(stat->u.store.ichain->bitpos, bv);
            }
            break;

        default:
            break;
    }
    return false;
}

bool sr_ichain_equals(struct StringRep *sr, void *ichain)
{
    switch (sr->type) {
        case STATEMENT:
            switch (sr->stat->opc) {
                case Uisst:
                case  Ustr:
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
                    if (sr->stat->u.store.ichain != NULL) {
                        return sr->stat->u.store.ichain == ichain;
                    }
                    break;

                default:
                    break;
            }
            return false;

        case EXPRESSION:
            return sr->expr->ichain == ichain;

        case ICHAIN:
            return sr->ichain == ichain;

        default:
            // unhandled type
            return false;
    }
}

bool sr_in_bv(struct StringRep *sr, void *bv)
{
    switch (sr->type) {
        case STATEMENT:
            return stat_in_bvect(sr->stat, bv);

        case EXPRESSION:
            return expr_in_bvect(sr->expr, bv);

        case ICHAIN:
            return bvectin0(sr->ichain->bitpos, bv);

        default:
            // unhandled type
            return false;
    }
}

bool sr_bv_notempty(struct StringRep *sr, void *bv)
{
    switch (sr->type) {
        case LIVERANGE:
            if (sr == NULL) return false;
            // TODO add macro, use memberdata.c
            return !bvectempty((struct BitVector*)(((char*)sr->liverange) + *(int*)bv));

        default:
            // unhandled type
            return false;
    }
}

bool sr_lr_contig(struct StringRep *sr, void *bv)
{
    switch (sr->type) {
        case LIVERANGE:
            if (sr == NULL) return false;
            return contiguous(sr->liverange);

        default:
            // unhandled type
            return false;
    }
}

bool sr_in_node(struct StringRep *sr, void *node)
{
    switch (sr->type) {
        case STATEMENT:
            return sr->stat->graphnode == node;

            /* 
        case EXPRESSION:
            return sr->expr->graphnode == node;
            //return expr_in_bvect(sr->expr, bv);

        case ICHAIN:
            return bvectin0(sr->ichain->bitpos, bv);
             */

        default:
            // unhandled type
            return false;
    }
}

bool sr_stat_node_in_bv(struct StringRep *sr, void *bv)
{
    switch (sr->type) {
        case STATEMENT:
            return bvectin0(sr->stat->graphnode->num, bv);

        default:
            return false;
    }
}

void tile_highlight_sr(struct Tile *tile, struct StringRep *sr, int colorPair)
{
    mvwchgat(tile->win, sr->line, sr->start, sr->len, 0, colorPair, NULL);
}

int sr_get_register(struct StringRep *sr)
{
    switch (sr->type) {
        case REGISTER:
            return sr->reg;

        case EXPRESSION:
            if (sr->expr->type == isvar && sr->expr->data.isvar_issvar.location.memtype == Rmt) {
                return sr->expr->data.isvar_issvar.location.addr;
            }
            break;

        case ICHAIN:
            if (sr->ichain->type == isvar && sr->ichain->isvar_issvar.location.memtype == Rmt) {
                return sr->ichain->isvar_issvar.location.addr;
            }
            break;

        default:
            break;
    }
    
    return -1;
}

bool sr_is_register(struct StringRep *sr, void *unused)
{
    switch (sr->type) {
        case REGISTER:
            return true;

        case EXPRESSION:
            if (sr->expr->type == isvar && sr->expr->data.isvar_issvar.location.memtype == Rmt) {
                return true;
            }
            return false;

        case ICHAIN:
            if (sr->ichain->type == isvar && sr->ichain->isvar_issvar.location.memtype == Rmt) {
                return true;
            }
            return false;

        default:
            return false;
    }
}

int sr_register_color(struct StringRep *sr)
{
    return nc_reg_color(sr_get_register(sr));
}

void sr_highlight(struct Tile *tile, struct StringRep *sr, struct Highlighter *hl)
{
    if (sr == NULL || sr->data == NULL) return;

    if (hl->shouldHighlight(sr, hl->arg)) {
        int colorPair = hl->defaultColorPair;
        if (hl->getColorPair != NULL) {
            colorPair = hl->getColorPair(sr);
        }
        tile_highlight_sr(tile, sr, colorPair);
        return;
    }

    if (hl->topLevelOnly) {
        return;
    }

    // now check children. Since children on the same level don't necessarily overlap, need to check every one
    for (int i = 0; i < sr->numChildren; i++) {
        sr_highlight(tile, sr->children[i], hl);
    }
}

void tile_highlight_once(struct Tile *tile, struct Highlighter *hl)
{
    for (int i = 0; i < tile->buf.numLines; i++) {
        sr_highlight(tile, tile->buf.lines[i]->top, hl);
    }
    tile_wmove_to_cursor(tile);
}

struct Graphnode *get_closest_node(struct LineBuffer buf, int line)
{
    if (line < 0 || line > buf.numLines) return NULL;

    for (int i = line; i >= 0; i--) {
        if (buf.lines[i]->top->type == GRAPHNODE) {
            return buf.lines[i]->top->node;
        }
    }

    return NULL;
}

struct Highlighter *tile_find_highlighter(struct Tile *tile, struct Highlighter *hl)
{
    if (hl == NULL) {
        return NULL;
    }

    for (int i = 0; i < tile->numHighlighters; i++) {
        if (memcmp(hl, tile->highlighters[i], sizeof(struct Highlighter)) == 0) {
            return tile->highlighters[i];
        }
    }
    return NULL;
}

void tile_add_highlighter(struct Tile *tile, struct Highlighter hl)
{
    if (tile_find_highlighter(tile, &hl) == NULL) {
        if (tile->numHighlighters >= tile->highlighterCap) {
            tile->highlighters = realloc(tile->highlighters, (tile->highlighterCap + 10) * sizeof(struct Highlighter *));
            tile->highlighterCap += 10;
        }

        tile->highlighters[tile->numHighlighters] = malloc(sizeof(struct Highlighter));
        *tile->highlighters[tile->numHighlighters] = hl;
        tile->numHighlighters++;
    }
}

void tile_remove_highlighter(struct Tile *tile, int index)
{
    if (index < 0 || index >= tile->numHighlighters) return;
    free(tile->highlighters[index]);
    for (int i = index; i < tile->numHighlighters; i++) {
        tile->highlighters[i] = tile->highlighters[i + 1];
    }
    tile->numHighlighters--;
}

// TODO: move to Container?
static int swapTile = 0;

void proc_tile_input(struct Tile *tile, int c)
{
    switch (c) {
        case '!':
            {
                struct Highlighter hl_bv = {
                    .shouldHighlight = sr_in_bv,
                    .arg = &iscolored12,
                    .defaultColorPair = COLOR_BRIGHTRED,
                };
                tile_highlight_once(tile, &hl_bv);
            }
            break;

        case '@':
            {
                struct Graphnode *node = get_closest_node(tile->buf, tile->cursRow);
                struct Highlighter hl = {
                    .shouldHighlight = sr_in_node,
                    .arg = node,
                    .defaultColorPair = COLOR_GRAY9
                };
                tile_highlight_once(tile, &hl);
            }
            break;
    }
}

void ichain_tile_input(struct Tile *tile, int c)
{
    switch (c) {
        case '!':
            {
                struct Highlighter hl_bv = {
                    .shouldHighlight = sr_in_bv,
                    .arg = &iscolored12,
                    .defaultColorPair = COLOR_BRIGHTRED,
                    .topLevelOnly = true
                };
                tile_highlight_once(tile, &hl_bv);
            }
            break;
    }
}

static struct Tile *procTile;

void liverange_tile_input(struct Tile *tile, int c)
{
    if (tile->buf.lines[tile->cursRow]->top->type == LIVERANGE) {
        struct LiveRange *lr = tile->buf.lines[tile->cursRow]->top->liverange;
        if (lr == NULL) return;
        switch (c) {
            case '3':
                {
                    int offset = offsetof(struct LiveRange, livebbs);
                    struct Highlighter hl = {
                        .shouldHighlight = sr_bv_notempty,
                        .arg = &offset,
                        .defaultColorPair = COLOR_GREEN,
                        .topLevelOnly = true,
                    };
                    tile_highlight_once(tile, &hl);
                }
                break;

            case '2':
                {
                    int offset = offsetof(struct LiveRange, reachingbbs);
                    struct Highlighter hl = {
                        .shouldHighlight = sr_bv_notempty,
                        .arg = &offset,
                        .defaultColorPair = COLOR_BRIGHTBLUE,
                        .topLevelOnly = true,
                    };
                    tile_highlight_once(tile, &hl);
                }
                break;

            case '1':
                {
                    // contiguous liveranges
                    struct Highlighter hl_contig = {
                        .shouldHighlight = sr_lr_contig,
                        .arg = lr,
                        .defaultColorPair = COLOR_BRIGHTYELLOW,
                        .topLevelOnly = true,
                    };
                    tile_highlight_once(tile, &hl_contig);
                }
                break;

            case '#':
                {

                    struct Highlighter hl_lr = {
                        .shouldHighlight = sr_stat_node_in_bv,
                        .arg = &lr->livebbs,
                        .defaultColorPair = 150,
                        .topLevelOnly = true,
                    };
                    tile_highlight_once(procTile, &hl_lr);
                    tile_nc_refresh(procTile);
                    tile_highlight_sr(tile, tile->buf.lines[tile->cursRow]->top, COLOR_CYAN);
                }
                break;

            case '@':
                {

                    struct Highlighter hl_lr = {
                        .shouldHighlight = sr_stat_node_in_bv,
                        .arg = &lr->reachingbbs,
                        .defaultColorPair = 203,
                        .topLevelOnly = true,
                    };
                    tile_highlight_once(procTile, &hl_lr);
                    tile_nc_refresh(procTile);
                    tile_highlight_sr(tile, tile->buf.lines[tile->cursRow]->top, COLOR_CYAN);
                }
                break;

            case '!':
                {
                    struct Highlighter hl_lr_ichain = {
                        .shouldHighlight = sr_ichain_equals,
                        .arg = lr->ichain,
                        .defaultColorPair = COLOR_BRIGHTCYAN
                    };
                    tile_highlight_once(procTile, &hl_lr_ichain);
                    tile_nc_refresh(procTile);
                    tile_highlight_sr(tile, tile->buf.lines[tile->cursRow]->top, COLOR_CYAN);
                }
                break;


        }
    }
}

bool tile_base_input(struct Tile *tile)
{
    int n = 1; // in case I ever want to allow vim-style counts before commands
    int c;
    
    c = wgetch(tile->win);
    switch (c) {
        case 'j':
        case KEY_DOWN:
            cursor_move(tile, n, 0);
            break;

        case 'k':
        case KEY_UP:
            cursor_move(tile, -n, 0);
            break;

        case 'l':
        case KEY_RIGHT:
            cursor_move(tile, 0, n);
            break;

        case 'h':
        case KEY_LEFT:
            cursor_move(tile, 0, -n);
            break;

        case '$':
        case KEY_END:
            cursor_setcol(tile, tile->buf.lines[tile->cursRow]->len - 1);
            break;

        case '^':
        case KEY_HOME:
            cursor_setcol(tile, 0);
            break;

        case 'g':
            cursor_absmove(tile, 0, tile->cursCol);
            break;

        case 'G':
            cursor_absmove(tile, tile->buf.numLines - 1, tile->cursCol);
            break;

        case CTRL('F'):
        case KEY_NPAGE:
            cursor_move(tile, n * (LINES - 1), 0);
            break;

        case CTRL('B'):
        case KEY_PPAGE:
            cursor_move(tile, -n * (LINES - 1), 0);
            break;

        case CTRL('D'):
        case 'd':
            cursor_move(tile, n * (LINES - 1) / 2, 0);
            break;

        case CTRL('U'):
        case 'u':
            cursor_move(tile, -n * (LINES - 1) / 2, 0);
            break;

        case 'q':
        case 'Q':
            return true;

        case 's':
            swapTile = 1;
            break;

        case 'S':
            swapTile = -1;
            break;

        case CTRL('L'):
            tile_redraw(tile);
            break;

        default:
            if (tile->input != NULL) {
                tile->input(tile, c);
            }
            break;
    }
    return false;
}

void ncurses_loop()
{
    ncurses_init();
    // TODO: use a tree structure
    int numWindows = 3;
    int numBorders = numWindows - 1;
    struct Tile *tiles[numWindows];
    tiles[0] = build_proc_tile();
    tiles[0]->input = proc_tile_input;
    tiles[1] = build_ichain_tile();
    tiles[1]->input = ichain_tile_input;
    tiles[2] = build_liverange_tile();
    tiles[2]->input = liverange_tile_input;

    WINDOW *borders[numBorders];

    int space = COLS - numBorders;
    int baseWidth = space / numWindows;
    int remainderSpace = space % numWindows;

    for (int i = 0; i < numWindows; i++) {
        int bordersBefore = i;
        int remspaceBefore = MIN(i, remainderSpace);
        int x = (i * baseWidth) + bordersBefore + remspaceBefore;

        int width = baseWidth + (i < remainderSpace);

        tile_setdims(tiles[i], 0, x, LINES, width);

        if (i < numBorders) {
            borders[i] = newwin(LINES, 1, 0, x + width);
        }
    }

    for (int i = 0; i < numBorders; i++) {
        wcolor_set(borders[i], BG(COLOR_GRAY17), NULL);
        wvline(borders[i], (chtype)0, LINES);
        wrefresh(borders[i]);
    }
    struct Highlighter highlight_registers = {
        .shouldHighlight = sr_is_register,
        .getColorPair = sr_register_color
    };
    procTile = tiles[0];

    for (int i = 0; i < numWindows; i++) {
        tile_add_highlighter(tiles[i], highlight_registers);
        tile_redraw(tiles[i]);
        tile_nc_refresh(tiles[i]);
        cursor_absmove(tiles[i], 0, 0);
    }
    
    int curTileIndex = 0;
    struct Tile *curTile = tiles[curTileIndex];
    bool done = false;
    while (!done) {
        tile_nc_refresh(curTile);
        done = tile_base_input(curTile);
        if (swapTile != 0) {
            curTileIndex = curTileIndex + swapTile;
            if (curTileIndex < 0) curTileIndex = numWindows - 1;
            if (curTileIndex >= numWindows) curTileIndex = 0;
            curTile = tiles[curTileIndex];
            swapTile = 0;
        }
    }

    for (int i = 0; i < numWindows; i++) {
        tile_free(tiles[i]);
    }
    
    for (int i = 0; i < numBorders; i++) {
        delwin(borders[i]);
    }
    ncurses_end();
}

void ncdebug()
{
    ncurses_loop();
}
