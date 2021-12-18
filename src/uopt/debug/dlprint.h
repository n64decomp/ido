#pragma once

#include "uopt/uoptdata.h"

extern const int reg_nc_colors[];

enum StringRepType {
    UNDEFINED,
    STATEMENT,
    EXPRESSION,
    ICHAIN,
    LIVERANGE,
    GRAPHNODE,
    VAR_ACCESS,
    REGISTER,
    MENU,
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
        struct VarAccessList *varAccess;
        int reg;
        struct TileCreation *menuEntry;
        void *data;
    };
};

struct DisplayLine {
    int pos;
    int len; // number of used chars in s
    int maxLen; // number of chars allocated in s
    char *s;
    struct StringRep *top;
};

struct StringRep *sr_new(int line);
void sr_free(struct StringRep *sr);
struct StringRep *sr_newchild(struct StringRep *parent);
struct StringRep *sr_get_child_at_pos(struct StringRep *sr, int pos);
struct StringRep *dl_get_sr_at_pos(struct DisplayLine *dl, int pos);

struct DisplayLine *dl_new();
void dl_free(struct DisplayLine *dl);

int dl_printf(struct DisplayLine *restrict dl, char *restrict fmt, ...);
int dl_print_opcode(struct DisplayLine *dl, Uopcode opc);
int dl_print_variable(struct DisplayLine *dl, struct VariableLocation loc);
int dl_print_constant(struct DisplayLine *dl, Datatype dtype, union Constant constval);
int dl_print_small_dtype(struct DisplayLine *dl, enum Datatype type, int length);
int dl_print_register(struct DisplayLine *dl, struct StringRep *parent, int regColor);
int dl_print_expr(struct DisplayLine *dl, struct StringRep *parent, struct Expression *expr);
int dl_print_ichain(struct DisplayLine *dl, struct StringRep *parent, struct IChain *ichain);
int dl_print_liverange(struct DisplayLine *dl, struct StringRep *parent, struct LiveRange *liverange);
int dl_print_assignment(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
void dl_print_istr(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
int dl_print_mov(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
int dl_print_other_store(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
int dl_print_trap(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
void dl_print_statement(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);

/* top level builders */

struct DisplayLine *dl_from_statement(int line, struct Statement *stat);
struct DisplayLine *dl_from_graphnode(int line, struct Graphnode *node, bool print_pred_succ);
struct DisplayLine *dl_from_var_access(int line, struct VarAccessList *access);
struct DisplayLine *dl_from_bittab_ichain(int bitpos, struct IChain *ichain);
struct DisplayLine *dl_from_bittab_liverange(int line, struct LiveRange *liverange);
struct DisplayLine *dl_placeholder(int line, char *message);
