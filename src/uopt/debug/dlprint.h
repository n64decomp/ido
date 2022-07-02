#pragma once

#include "uopt/uoptdata.h"
#include "uopt/debug/vec.h"

extern const int reg_nc_colors[];

enum TypeID {
    UNDEFINED,
    STATEMENT,
    STATEMENT_OPC,
    EXPRESSION,
    ICHAIN,
    LIVERANGE,
    INTERFERELIST,
    LIVEUNIT,
    BITVECTOR,
    BITVECTORBB,
    GRAPHNODE,
    VAR_ACCESS,
    TREP,
    TEMPLOC,
    VARIABLE,
    LDATAB_ENTRY,
    CONSTANT,
    VARLOC,
    LABEL,
    REGISTER,
    REGSET64,
    REGBOOLARRAY,
    UCODE,
    UCODEOPC,
    UCODEDATA,
    MENU,
    MISC,
    INFO,
    FIELDNAME,

    EXPRTYPE,
    DATATYPE,
    OPCODE,
    BOOL,
    CHAR,
    SHORT,
    INT,
    LONG,
    FLOAT,
    DOUBLE,
    TYPE_ID_MAX
} 
#ifdef __GNUC__
__attribute__((packed));
#endif

struct StringRep {
    int start, len; // indices into DisplayLine, used for chgat

    Vec(struct StringRep *) *children; // left to right

    enum TypeID type;
    // pointer to original struct
    union {
        struct Statement *stat;
        struct Expression *expr;
        struct IChain *ichain;
        struct LiveRange *liverange;
        struct LiveUnit *liveunit;
        struct InterfereList *interfere;
        struct Graphnode *node;
        struct VarAccessList *varAccess;
        struct Temploc *temploc;
        struct Variable *variable;
        struct LdatabEntry *ldatabEntry;
        struct BitVector bitvector;
        int reg;
        int regset[2];
        char regboolarray[5];
        struct TileCreation *menuEntry;
        Uopcode opc;
        void *data;
        int   data32;
        short data16;
        char  data8;
        union Bcode *ucode;
        const char *message;
    };
};

struct OutputTrace {
    int indent;
    enum TypeID type;
    union {
        const char *message;
        union Bcode bcode;
    };
};

struct StatOutput {
    enum TypeID type;
    void *data;
    //struct Statement *stat;
    Vec (struct OutputTrace *) *out;
    struct StatOutput *next;
};

struct UcodeList {
    struct Statement *stat;
    Vec (union Bcode *) *out;
    struct UcodeList *next;
};

extern struct UcodeList *gUcodeInput;
extern struct UcodeList *gCurInput;
extern struct StatOutput *gOutput;
extern struct StatOutput *gCurOutput;
extern bool gDebugTracingInput;


struct DisplayLine {
    int pos;
    int len; // number of used chars in s
    int maxLen; // number of chars allocated in s
    char *s;
    struct StringRep *top;
};

extern int bittabdigits; // maximum digits in an ichain/liverange's bitpos

struct StringRep *sr_new();
void sr_free(struct StringRep *sr);
struct StringRep *sr_newchild(struct DisplayLine *dl, struct StringRep *parent);
struct StringRep *sr_get_child_at_pos(struct StringRep *sr, int pos);
struct StringRep *dl_get_sr_at_pos(struct DisplayLine *dl, int pos);

struct DisplayLine *dl_new();
void dl_free(struct DisplayLine *dl);

void dlprint_init();

int dl_printf(struct DisplayLine *restrict dl, char *restrict fmt, ...);
void dl_print_opcode(struct DisplayLine *dl, struct StringRep *parent, Uopcode opc);
void dl_print_variable(struct DisplayLine *dl, struct VariableLocation loc);
void dl_print_constant(struct DisplayLine *dl, Datatype dtype, union Constant constval);
void dl_print_small_dtype(struct DisplayLine *dl, enum Datatype type, int length);
void dl_print_register(struct DisplayLine *dl, struct StringRep *parent, int regColor);
void dl_print_graphnode(struct DisplayLine *dl, struct StringRep *parent, struct Graphnode *node, bool printPredSucc);
void dl_print_var_access(struct DisplayLine *dl, struct StringRep *parent, struct VarAccessList *access);
void dl_print_expr(struct DisplayLine *dl, struct StringRep *parent, struct Expression *expr);
void dl_print_ichain(struct DisplayLine *dl, struct StringRep *parent, struct IChain *ichain);
void dl_print_trepimage(struct DisplayLine *dl, struct StringRep *parent, struct TrepImageThing *trepimage);
void dl_print_liveunit(struct DisplayLine *dl, struct StringRep *parent, struct LiveUnit *liveunit);
void dl_print_interferelist(struct DisplayLine *dl, struct StringRep *parent, struct InterfereList *interfere);
void dl_print_liverange(struct DisplayLine *dl, struct StringRep *parent, struct LiveRange *liverange);
struct DisplayLine *dl_from_reg_assignment(int reg, struct IChain *ichain);
void dl_print_assignment(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
void dl_print_istr(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
void dl_print_mov(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
void dl_print_other_store(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
void dl_print_trap(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
void dl_print_statement(struct DisplayLine *dl, struct StringRep *sr, struct Statement *stat);
void dl_print_temploc(struct DisplayLine *dl, struct Temploc *temp);
void dl_print_bitvector(struct DisplayLine *dl, struct StringRep *parent, struct BitVector *bv);
void dl_print_bitvectorbb(struct DisplayLine *dl, struct StringRep *parent, struct BitVector *bv);
void dl_print_regset64(struct DisplayLine *dl, struct StringRep *parent, int set[static 2]);
void dl_print_reg_boolarray(struct DisplayLine *dl, struct StringRep *parent, char regs[static 5]);

/* top level builders */

struct DisplayLine *dl_from_statement(struct Statement *stat);
struct DisplayLine *dl_from_graphnode(struct Graphnode *node, bool print_pred_succ);
struct DisplayLine *dl_from_var_access(struct VarAccessList *access);
struct DisplayLine *dl_from_bittab_ichain(int bitpos, struct IChain *ichain);
struct DisplayLine *dl_from_bittab_liverange(int bit, struct LiveRange *liverange);
struct DisplayLine *dl_new_printf(char *fmt, ...);
struct DisplayLine *dl_placeholder(const char *message);
struct DisplayLine *dl_from_variable(struct Variable *var);
struct DisplayLine *dl_from_ldatab(struct LdatabEntry *lda);
struct DisplayLine *dl_from_temploc(struct Temploc *temp);
struct DisplayLine *dl_from_bitvector(struct BitVector *bv, const char *name);
struct DisplayLine *dl_from_ucode(union Bcode *b);
