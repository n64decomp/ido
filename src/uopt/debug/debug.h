#pragma once
#include "uopt/uoptdata.h"

#include "uopt/debug/dlprint.h"
#include "uopt/debug/buffer.h"
#include "uopt/debug/tile.h"
#include "uopt/debug/input.h"
#include "uopt/debug/highlight.h"
#include "uopt/debug/hlcond.h"
#include "uopt/debug/memberdata.h"
#include "uopt/debug/examine.h"
#include "uopt/debug/cmtrace.h"
#include "uopt/debug/menu.h"

#define C_RED "\e[91m"
#define C_GREEN "\e[92m"
#define C_YELLOW "\e[93m"
#define C_BLUE "\e[94m"
#define C_PURPLE "\e[95m"
#define C_CYAN "\e[96m"
#define C_WHITE "\e[97m"
#define C_RESET "\e[m"

// make sure to use decimal
#define COLOR_RGB(r, g, b) "\e[38;2;" #r ";" #g ";" #b "m"



#if 0
#define REDPRINT(fmt, ...)
#define GREENPRINT(fmt, ...)
#define YELLOWPRINT(fmt, ...)
#define BLUEPRINT(fmt, ...)
#define PURPLEPRINT(fmt, ...)
#define RGBPRINT()
#else
#define RGBPRINT(r,g,b, fmt, ...) printf(COLOR_RGB(r,g,b) fmt C_RESET __VA_OPT__(,) __VA_ARGS__)
#define REDPRINT(fmt, ...) printf(C_RED fmt C_RESET __VA_OPT__(,) __VA_ARGS__)
#define GREENPRINT(fmt, ...) printf(C_GREEN fmt C_RESET __VA_OPT__(,) __VA_ARGS__)
#define YELLOWPRINT(fmt, ...) printf(C_YELLOW fmt C_RESET __VA_OPT__(,) __VA_ARGS__)
#define BLUEPRINT(fmt, ...) printf(C_BLUE fmt C_RESET __VA_OPT__(,) __VA_ARGS__)
#define PURPLEPRINT(fmt, ...) printf(C_PURPLE fmt C_RESET __VA_OPT__(,) __VA_ARGS__)
#define EXPRTYPENAME(type) \
    (unsigned)(type) < 9u ? (const char *[]){"empty", "islda", "isconst", "isvar", "isop", "isilda", "issvar", "dumped", "isrconst"}[(type)] : "unknown"
#endif

#define ENTNAM_FMT() "%.*s "
#define ENTNAM() entnam0len, entnam0 

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

#define ARRAYLEN(arr) (sizeof((arr)) / sizeof((arr)[0]))

void ucode_output_clear();
void ucode_input_clear();
void push_input(union Bcode *b);
void new_ucode_input();
void push_output(union Bcode *b);
void push_trace(const char *message);
#define _STRINGIFY(msg) #msg
#define STRINGIFY(msg) _STRINGIFY(msg)
#define TRACE_LINE() push_trace(__FILE__ " " STRINGIFY(__LINE__))
void output_new_stat(struct Statement *s);
void output_new_graphnode(struct Graphnode *node);

void trace_indent();
void trace_dedent();

void print_regset64(const char *name, long long set);
void print_function_statements(const char *desc);
void print_node_statements(struct Graphnode *node);
void print_statement(struct Statement *stat);
void print_expr(struct Expression *expr);
void print_image(struct IChain *image);
void print_bitvector(struct BitVector *bv);
void print_constant(Datatype dtype, union Constant constval);
void print_variable(struct VariableLocation loc);
void print_small_dtype(enum Datatype type, int length);
void print_opcode(Uopcode opc);

void ncdebug();

extern const char *regnames[];

const char *opcode_name(Uopcode opc);
const char *regname(int reg);
const char *regname_color(int reg);
const char *dtype_name(enum Datatype type);
const char *exprtype_name(ExpressionType type);
const char *opc_operator(Uopcode opc);

extern int opc_precedence[Uirsv + 1];
int higher_precedence_expr(Uopcode opc, struct Expression *op);
int higher_precedence_image(Uopcode opc, struct IChain *op);
struct Expression *expr_base(struct Expression *expr);

bool sr_has_opcode(struct StringRep *sr, void *);
int sr_ucode_color(struct StringRep *sr);
