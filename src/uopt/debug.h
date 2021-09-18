#pragma once
#include "uopt/uoptdata.h"

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
    (type) < 9 ? (const char *[]){"empty", "islda", "isconst", "isvar", "isop", "isilda", "issvar", "dumped", "isrconst"}[(type)] : "unknown"
#endif

#define ENTNAM_FMT() "%.*s "
#define ENTNAM() entnam0len, entnam0 

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
const char *opc_operator(Uopcode opc);

extern int opc_precedence[Uirsv + 1];
int higher_precedence_expr(int cur_precedence, struct Expression *op);
int higher_precedence_image(int cur_precedence, struct IChain *op);
