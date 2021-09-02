#ifndef UOPTDATA_H
#define UOPTDATA_H

#include "common.h"
#include "ucode.h"
#include "libp/libp.h"
#include "libxmalloc/xmalloc.h"

#include "bitvector.h"

enum MipsRegister {
    r_zero,
    r_at,
    r_v0, r_v1,
    r_a0, r_a1, r_a2, r_a3,
    r_t0, r_t1, r_t2, r_t3, r_t4, r_t5, r_t6, r_t7,
    r_s0, r_s1, r_s2, r_s3, r_s4, r_s5, r_s6, r_s7,
    r_t8, r_t9,
    r_k0, r_k1,
    r_gp,
    r_sp, r_fp, r_s8=r_fp,
    r_ra,
    r_f0, r_f1, r_f2, r_f3,
    r_f4, r_f5, r_f6, r_f7, r_f8, r_f9, r_f10, r_f11,
    r_f12, r_f13, r_f14, r_f15,
    r_f16, r_f17, r_f18, r_f19,
    r_f20, r_f21, r_f22, r_f23, r_f24,
    r_f25, r_f26, r_f27, r_f28, r_f29, r_f30, r_f31,
}
#ifdef __GNUC__
__attribute__((packed))
#endif
;

#ifdef __GNUC__
typedef enum MipsRegister MipsRegister;
#else
typedef unsigned char MipsRegister;
#endif

// see coloroffset
enum RegisterColor {
    uncolored,
    // call"er"-saved registers
    er_v0=1, er_v1, er_a0, er_a1, er_a2, er_a3, er_t0, er_t1, er_t2, er_t3, er_t4, er_t5, er_ra,
    // call"ee"-saved registers
    ee_s0,   ee_s1, ee_s2, ee_s3, ee_s4, ee_s5, ee_s6, ee_s7, ee_fp, ee_ra,
    // floating point
    fp_f0,  fp_f2,  fp_f12, fp_f14, fp_f16, fp_f18,
    fp_f20, fp_f22, fp_f24, fp_f26, fp_f28, fp_f30,
}
#ifdef __GNUC__
__attribute__((packed))
#endif
;

#ifdef __GNUC__
typedef enum RegisterColor RegisterColor;
#else
typedef unsigned char RegisterColor;
#endif



#define IS_UNSIGNED(dtype) \
    (dtype == Adt || \
     dtype == Hdt || \
     dtype == Jdt || \
     dtype == Ldt)

#define IS_INTEGRAL(dtype) \
    (dtype == Adt || \
     dtype == Hdt || \
     dtype == Idt || \
     dtype == Kdt || \
     dtype == Jdt || \
     dtype == Ldt)

#define IS_REAL(dtype) \
    (dtype == Qdt || \
     dtype == Rdt)

struct StrList {
    char str[1024];
    int len;
    struct StrList *next;
};

struct optabrec {
    bool ends_bb;
    bool executable;
    bool is_binary_op;
};

struct Label {
    /* 0x00 */ unsigned int addr;
    /* 0x04 */ int merged_label;
    /* 0x08 */ bool referenced;
    /* 0x09 */ bool branched_back;
    /* 0x0C */ struct Label *left;
    /* 0x10 */ struct Label *right;
}; // size 0x14

struct LabelMap {
    int blockno;
    int unk4;
    struct Graphnode *graphnode;
    struct LabelMap *next;
};

// See insertvar
struct VariableLocation {
    int addr; // can be negative, stack offset?
              // register number if memtype == Rmt. see exprimage, checks for 2, 29, 32, 33, 34.
    unsigned int blockno: 21;
    unsigned int memtype: 3;
    unsigned int level: 8; // see furthervarintree
};

struct Variable {
    Datatype dtype;
    bool veqv;
    bool unk2;
    struct VariableLocation location;
    int size;

    struct Variable *left; // 0x10
    struct Variable *right; // 0x14
};

struct LdatabEntry {
    struct VariableLocation var;
    int size;
    struct LdatabEntry *next;
};

struct UstackEntry {
    struct Expression *expr;
    int value;
    struct UstackEntry *up;
    struct UstackEntry *down;
};

struct ParstackEntry {
    struct Statement *par; // Upar, Uxpar or Upmov
    struct ParstackEntry *up;
    struct ParstackEntry *down;
};

struct RealstoreData {
    char c[256];
    struct RealstoreData *next;
};

struct Statement;

struct VarAccessList {
    /* 0x00 */ struct VarAccessList *prev; // towards head
    /* 0x04 */ struct VarAccessList *next; // towards tail
    /* 0x08 */ bool unk8; // expr->isvar_issvar.unk22
    /* 0x09 */ unsigned char type; // 0: none?, 1: store (Statement), 2: load (Expression), 3: move (Statement)
    /* 0x0C */ union {
                   struct Statement *store;
                   struct Expression *var;
                   struct Statement *move;
               } data;
};

struct Graphnode;

struct Loop {
    /* 0x00 */ int loopno;
    /* 0x04 */ unsigned short depth;
    /* 0x08 */ struct Graphnode *body;
    /* 0x0C */ struct Loop *inner;
    /* 0x10 */ struct Loop *outer;
    /* 0x14 */ struct Loop *next;
}; // size 0x18

// probably related to induction variables or loop invariant
// only used when mipsflag == 3
struct ExpSourceThing {
    /* 0x00 */ struct IChain *ichain;
    /* 0x04 */ struct ExpSourceThing *next;
    /* 0x08 */ int unk8;
    /* 0x0C */ int unkC;
    /* 0x10 */ struct IChain *ichain_unk10;
    /* 0x14 */ int unk14;
    /* 0x18 */ int unk18; // bitpos
}; // size 0x1C

// probably related to induction variables or loop invariant
// only used when mipsflag == 3
struct ScmThing {
    /* 0x00 */ struct IChain *ichain;
    /* 0x04 */ struct ExpSourceThing *unk4;
    /* 0x08 */ struct ScmThing *next;
    /* 0x10 */ unsigned char unk10;
    /* 0x11 */ unsigned char unk11;
}; // size 0x14

struct LooptabItem {
    /* 0x0 */ struct Loop *loop;
    /* 0x4 */ struct ScmThing *unk4;
    /* 0x8 */ bool unk8;
    /* 0x9 */ bool unk9;
    /* 0xA */ unsigned char unkA;
}; // size 0xC


struct IntervalList {
    /* 0x00 */ struct Interval* intv;
    /* 0x04 */ struct IntervalList* next;
}; // size 0x8

enum IntervalType {
    intv_unvisited, // 0
    intv_unreduced, // 1
    intv_acyclic,   // 2
    intv_loop       // 3
};

typedef unsigned char IntervalType;

struct Interval {
    /* 0x00 */ struct Graphnode *graphnode;
    /* 0x04 */ struct IntervalList *region;
    /* 0x08 */ struct Interval *parent;
    /* 0x0C */ struct Interval *child;
    /* 0x10 */ struct IntervalList *successors;
    /* 0x14 */ struct IntervalList *predecessors;

    /* 0x18 */ struct Interval *next;
    /* 0x1C */ int numPredecessors;
    /* 0x20 */ struct Interval *first;
    /* 0x24 */ struct Loop *loop;
    /* 0x28 */ IntervalType type;
    /* 0x29 */ unsigned char interprocedural_controlflow;
    /* 0x2A */ unsigned char loopdepth;
}; // size 0x2C

struct GraphnodeList {
    struct Graphnode *graphnode;
    struct GraphnodeList *next;
};

// See put_in_fallthru_bb and put_in_jump_bb
struct JumpFallthroughBB {
    unsigned char reg;
    bool unk1; // true = rlod, false = rstr
    struct IChain *ichain;
    struct JumpFallthroughBB *next;
};

struct RegisterNode { // TODO: probably the same as JumpFallthroughBB
    /* 0x0 */ unsigned char reg;
    /* 0x1 */ bool unk1;
    /* 0x4 */ struct IChain *ichain;
    /* 0x8 */ struct RegisterNode *next;
}; // size 0xC

enum unk5enum {
    notloopfirstbb,
    loopfirstbb,
    canunroll
};

struct Graphnode {
    /* 0x00 */ int blockno;
    /* 0x04 */ bool interprocedural_controlflow;
    /* 0x05 */ unsigned char unk5; // enum: notloopfirstbb, loopfirstbb, canunroll (see printregs)
    /* 0x06 */ bool terminal;
    /* 0x07 */ unsigned char unk7;     // 0 = unseen, 1 = graphhead, 2 = graphtail?
    /* 0x08 */ unsigned short num;
    /* 0x0A */ unsigned char loopdepth;
    /* 0x0B */ unsigned char unkBb8: 1;
    /* 0x0B */ unsigned char unkBb4: 1;
    /* 0x0C */ struct Graphnode *next;
    /* 0x10 */ struct Graphnode *prev;
    /* 0x14 */ struct GraphnodeList *predecessors;
    /* 0x18 */ struct GraphnodeList *successors;
    /* 0x1C */ struct Statement *stat_head;
    /* 0x20 */ struct Statement *stat_tail;
    /* 0x24 */ struct VarAccessList *varlisthead;
    /* 0x28 */ struct VarAccessList *varlisttail;
    /* 0x2C */ unsigned int unk2C;      // checked in func_00453E7C analoop.c
    /* 0x30 */ struct LiveUnit *liveunit;
    ///* 0x34 */ long long regsused[2];
    /* 0x34 */ int regsused[2][2]; // should be two 64-bit values, but then alignment fails
    /* 0x44 */ struct RegisterData {
                   struct IChain *unk44[35];
               } regdata;
    // packed array of bools, great
    /* 0xD0 */ unsigned char unkD0[5]; // rlods
    /* 0xD5 */ unsigned char unkD5[5]; // rstrs
    /* 0xDA */ unsigned char unkDA[5];
    /* 0xE0 */ struct RegisterNode *unkE0;
    /* 0xE4 */ struct RegisterNode *unkE4;
    /* 0xE8 */ struct Loop *loop;
    /* 0xEC */ struct JumpFallthroughBB *fallthrough_bbs;
    /* 0xF0 */ struct JumpFallthroughBB *jump_bbs;

    /* 0xF4 */ struct BitVector indiracc;
    /* 0xFC */ struct BitVector hoistedexp;
    union {
        struct {
            int unk104[(0x134 - 0x104) / 4];
            int line; // 0x134
        } init;
        struct {
            struct BitVector antlocs; // 0x104
            struct BitVector alters; // 0x10C
            struct BitVector avlocs; // 0x114
            struct BitVector absalters; // 0x11C
            union {
                struct {
                    struct BitVector pavlocs; // 0x124
                    struct BitVector expoccur; // 0x12C
                    struct BitVector unk134; // 0x134
                    struct BitVector unk13C; // 0x13C
                    struct BitVector avin; // 0x144
                    struct BitVector avout; // 0x14C
                    struct BitVector antin; // 0x154
                    struct BitVector antout; // 0x15C
                    struct BitVector pavin; // 0x164
                    struct BitVector pavout; // 0x16C
                } precm;
                struct {
                    struct BitVector delete; // 0x124
                    struct BitVector ppin; // 0x12C
                    struct BitVector iv; // 0x134
                    struct BitVector cand; // 0x13C
                    struct BitVector subdelete; // 0x144
                    struct BitVector subinsert; // 0x14C
                    struct BitVector antin; // 0x154
                    struct BitVector antout; // 0x15C
                    struct BitVector insert; // 0x164
                    struct BitVector ppout; // 0x16C
                } cm;
                struct {
                    struct BitVector unk124; // 0x124
                    struct BitVector unk12C; // 0x12C
                    struct BitVector sink; // 0x134
                    struct BitVector unk13C; // 0x13C
                    struct BitVector unk144; // 0x144
                    struct BitVector unk14C; // 0x14C
                    struct BitVector source; // 0x154
                    struct BitVector region; // 0x15C
                    struct BitVector unk164; // 0x164
                    struct BitVector unk16C; // 0x16C
                } scm;
            } u;
        } stage1;
        struct {
            struct BitVector appear; // 0x104
            struct BitVector locdef; // 0x10C
            struct BitVector loclive; // 0x114
            struct BitVector unk11C; // 0x11C
            struct BitVector unk124; // 0x124
            struct BitVector ppin; // 0x12C
            struct BitVector active; // 0x134
            struct BitVector unk13C; // 0x13C
            struct BitVector liveout; // 0x144
            struct BitVector unk14C; // 0x14C
            struct BitVector unk154; // 0x154
            struct BitVector unk15C; // 0x15C findbbtemps
            struct BitVector unk164; // 0x164
            struct BitVector unk16C; // 0x16C
        } stage2;
        struct {
            int app; // 0x104
            int av; // 0x108
            int ant; // 0x10C
            int eeantin; // 0x110
            int eeantout; // 0x114
            int unk118;
            int strinsertin; // 0x11C
            int lodinsertout; // 0x120
            int unk124; // eravin?
            int eeavin; // 0x128
            int unk12C; // eravout?
            int eeavout; // 0x130
            int unk134[(0x174 - 0x134) / 4];
        } stage3;
    } bvs;
};

// Derived from printinterproc
struct RegstakenParregs {
    bool regstaken[35];
    int parregs[35];
};

struct Proc;

// Sorted list by id in Proc
struct ProcList {
    struct Proc *proc;
    struct ProcList *next;
};

struct IjpLabel {
    int num;
    struct IjpLabel *left;
    struct IjpLabel *right;
};

struct Proc {
    /* 0x00 */ int id;
    /* 0x04 */ struct Variable *vartree;
    /* 0x08 */ bool unk8; // bool or char?
    /* 0x09 */ bool unk9; // bool or char?
    /* 0x0A */ bool unkA; // bool or char?
    /* 0x0B */ bool unkB; // set to lang == LANG_COBOL
    /* 0x0C */ bool o3opt; // written to allcallersave in procinit
    /* 0x0D */ bool unkD; // set to lang == LANG_COBOL
    /* 0x0E */ bool no_sideeffects;
    /* 0x0F */ bool has_longjmp;
    /* 0x10 */ unsigned char level; // initialized to 2 in prepass, also set to lexlev for Ucup in oneprocprepass
    /* 0x12 */ unsigned short num_bbs;
    /* 0x14 */ bool nonlocal_goto;
    /* 0x15 */ bool has_trap;
    /* 0x18 */ struct ProcList *callees; // linked list of Procs (see oneprocprepass, insertcallee)
    /* 0x1C */ struct IjpLabel *ijp_labels; // 0x1C, sorted tree
    /* 0x20 */ unsigned int bvsize;
    /* 0x24 */ struct RegstakenParregs *regstaken_parregs;
    /* 0x28 */ struct Label *labels; // sent to searchlab
    /* 0x2C */ struct Proc *left; // binary search tree left (root is prochead)
    /* 0x30 */ struct Proc *right; // binary search tree right (root is prochead)
    /* 0x34 */ void *feedback_data; // related to usefeedback
    /* 0x38 */ int unk38; // mtag uses this
};

struct Statement {
    /*  0x0 */ Uopcode opc;
    /*  0x1 */ bool is_increment;
    /*  0x2 */ bool unk2; // bool or unsigned char?
    /*  0x3 */ bool outpar; // first store to parameter build area?
    /*  0x4 */ struct Expression *expr;
    /*  0x8 */ struct Statement *next; // towards tail
    /*  0xC */ struct Statement *prev; // towards head
    /* 0x10 */ struct Graphnode *graphnode;

    union {
        struct {
            struct Expression *expr; // 0x14
            struct VarAccessList *var_access_list_item; // 0x18
            bool unk1C; // not strlkilled
            bool unk1D;
            bool unk1E; // not strskilled
            bool unk1F;
            int size; // 0x20
            struct Expression *baseaddr; // 0x24
            struct IChain *ichain; //0x28
            union {
                struct { // opc = Ustr, outpar = true
                    struct Statement *par;

                } outpar;
                struct {
                    struct ExpSourceThing *unk2C;
                    struct RecurThing *unk30; // used when emitting vreg
                } str;
                struct {
                    Datatype dtype; // 0x2C
                    unsigned char align; // LEXLEV&~7 or LENGTH*8
                    unsigned short mtagno; // 0x2E
                    int offset; // IONE+ustack->value
                } istr; // and istv, irst, irsv
                struct { // struct copies
                    struct Expression *baseaddr; // 0x2C
                    unsigned short offset; // 0x30, OFFSET for Upmov
                    unsigned char src_align; // based on largest member of the struct
                    unsigned char dst_align; // alignment of destination. when the struct is on the stack, it's 32/64
                } mov; // and movv
            } u;
        } store;

        struct {
            int blockno; // 0x14
            int length; // 0x18
            bool unk1C; // 0/1 if matched a reference
            int unk20;
            unsigned char flags; // 0x24, LEXLEV
            int unk28; // initialized to 0 in tail_recursion
        } label;

        struct {
            int unk14; // IONE
        } lbgn;

        struct {
            int blockno; // IONE
        } bgnb; // and endb

        struct {
            unsigned char unk14; // LEXLEV
        } lbdy;

        struct {
            int page; // 0x14
            int line; // 0x18
        } loc;

        struct {
            int flags; // 0x14
        } nop;

        struct {
            Datatype dtype; // 0x14
            int unk18; // IONE
        } clbd_cubd_step;

        struct {
            Datatype dtype; // 0x14
            unsigned char unk15; // LENGTH
            struct VariableLocation var; // 0x18, OFFSET, IONE, MTYPE
        } ctrl;

        struct {
            /* 0x14 */ int cup_level; // LEXLEV
            /* 0x18 */ int fp_offset; // Upar/Uxpar OFFSET+LENGTH if passbyfp
            /* 0x1C */ int loc; // VariableLocation loc
            /* 0x20 */ struct Proc *proc; // indirprocs/ciaprocs
        } mst;

        // check true
        struct {
            int unk14;
            int unk18; // initialized to 0
        } chkt;

        struct {
            unsigned char mtype; // 0x14
            int unk18; // LENGTH, tempdisp
        } def;

        struct {
            /* 0x14 */ Datatype dtype;
            /* 0x15 */ unsigned char size;
            /* 0x16 */ unsigned char reg; // unset, but used in reg1
            /* 0x17 */ unsigned char unk17;
            /* 0x18 */ int index; // parcount or OFFSET/4
            /* 0x1C */ int loc; // OFFSET
            /* 0x20 */ struct Expression *baseaddr;
            /* 0x24 */ struct Statement *next; // linked list of parameters
        } par; // and xpar

        struct {
            Datatype dtype; // 0x14
            unsigned char unk15; // 1 from Uicuf, POP from Uaent
            unsigned char unk16; // used in reg1
        } pop;

        // might be in the same union as store
        struct {
            struct Expression *expr2; // 0x14, first expr at 0x4
            int unk18; // initialized to 0
            int unk1C;
            int unk20;
            int unk24;
            int unk28;
            Datatype dtype; // 0x2C
            int num; // 0x30, IONE
        } trap;

        struct {
            Datatype dtype; // 0x14
            int cases_blockno; // 0x18, points to a Uclab graphnode
            int default_blockno; // 0x1C
            struct Statement *case_stmts; // 0x20, points to the Uclab statement
            int lbound_h; // 0x24, can't be 64-bit due to alignment
            int lbound_l; // 0x28
            int hbound_h; // 0x2C
            int hbound_l; // 0x30
        } xjp;

        struct {
            int target_blockno; // 0x14
            int unk18;
            int incre; // initialized to 0 for tjp/fjp
            struct Expression* unk20; // initial_value? store Statement->expr->data.isvar_issvar.unk34
            bool unk24;
            bool loop_if_true; // tjp -> start of loop, or fjp -> outside of loop
            bool unk26; // true if iterator == op1 of loop condition
            bool has_const_init; // constant comparison? true if expr->data.isvar_issvar.unk34->type == isconst
            int unk28;
            int unk2C;
            int unk30;
        } jp; // tjp, fjp, ujp

        struct {
            struct Proc *proc; // 0x14
            Datatype returntype; // 0x18
            unsigned char level; // 0x19
            unsigned short extrnal_flags; // 0x1A, EXTRNAL
            unsigned char pop; // 0x1C, POP
            unsigned char push_flags; // 0x1D, PUSH (stdarg flags)
            int unk20; // IONE for Urcuf, register number?
            struct Statement *parameters; // 0x24, from parstack, linked list
        } call; // cup, icuf, rcuf

        struct {
            int strp_pos; // 0x14
            unsigned char flags; // 0x18, LEXLEV
            Datatype returntype; // 0x19
            int unk1C; // LENGTH
            int unk20; // OFFSET
            int len; // 0x24, CONSTVAL.swpart.Ival
            struct Statement *parameters; // 0x28, from parstack
        } cia;

        struct {
            Datatype returntype; // 0x14
            unsigned char pop; // 0x15, POP
            unsigned char push; // 0x16, PUSH
            unsigned char extrnal_flags; // 0x17, EXTRNAL
            int blockno; // 0x18, IONE
            int unk1C; // initialized to 0
        } aent;
    } u;
}; // size 0x34

struct Temploc {
    /* 0x00 */ int index;
    /* 0x04 */ int disp; // start offset (leftmost) in stack frame
    /* 0x08 */ int size;
    /* 0x0C */ bool not_spilled;
    /* 0x10 */ struct Temploc *next;
}; // size 0x14

union Constant {
    struct {
        int intval;
        int intval2;
    };
    struct {
        unsigned int uintval;
        unsigned int uintval2;
    };
    long long int longval;
    struct {
        unsigned short disp; // index to first character in realdisp data
        unsigned short len; // length of the float string
    } real;
    struct {
        unsigned short disp;
        unsigned short len;
    } string;
};


enum ExpressionType {
    /* 0 */ empty,
    /* 1 */ islda,
    /* 2 */ isconst,
    /* 3 */ isvar,
    /* 4 */ isop,
    /* 5 */ isilda, // address of shared var
    /* 6 */ issvar, // shared var
    /* 7 */ dumped,
    /* 8 */ isrconst
}
#ifdef __GNUC__
__attribute__((packed));
#endif
;

#ifdef __GNUC__
typedef enum ExpressionType ExpressionType;
#else
typedef unsigned char ExpressionType;
#endif

// Probably "Image (Chain)"
// Global
struct IChain { // TODO: rename
    /* 0x0 */ ExpressionType type;
    /* 0x1 */ Datatype dtype;
    /* 0x2 */ unsigned short bitpos;
    /* 0x4 */ unsigned short table_index;
    /* 0x6 */ unsigned short chain_index;
    /* 0x8 */ struct Expression *expr;
    /* 0xC */ struct IChain *next;

    union {
        struct {
            /* 0x10 */ int offset;
            /* 0x14 */ int size;
                       // missing level
            /* 0x18 */ struct VariableLocation address;
            /* 0x20 */ struct IChain *outer_stack_ichain;
            /* 0x24 */ struct Temploc *temploc;
        } islda_isilda;
        struct {
            /* 0x10 */ struct VariableLocation location;
            /* 0x18 */ unsigned char size;
                       // The order of these two bools is swapped from expr's isvar_issvar
                       // 0x19 = 0x22, and 0x1A = 0x21
            /* 0x19 */ bool unk19; // see fix_par_vreg inner function
            /* 0x1A */ bool veqv;
            /* 0x1B */ unsigned char unk1B;
            /* 0x1C */ struct IChain *outer_stack_ichain;
            /* 0x20 */ struct Temploc *temploc;
            union {
                /* 0x24 */ unsigned short assignbit;
                /* 0x24 */ int unk24;
            };
        } isvar_issvar;
        struct {
            /* 0x10 */ Uopcode opc;
            /* 0x11 */ unsigned char overflow_attr;
            /* 0x12 */ Datatype datatype;
            /* 0x13 */ unsigned char unk13; // codeimage
            /* 0x14 */ struct IChain *op1;
            /* 0x18 */ struct IChain *op2;
            /* 0x1C */ int size;
            union {
                /* 0x20 */ struct Statement *stat;
                /* 0x20 */ struct Temploc *temploc;
            };
            union {
                /* 0x24 */ Datatype cvtfrom;
                /* 0x24 */ unsigned short unk24_u16;
                struct ExpSourceThing *unk24_cand;
                union {
                    /* 0x24 */ int word; // XXX: note whether the asm uses lw/sw or lh/sh ichain->unk24
                    struct {
                        /* 0x24 */ unsigned short bit;
                        /* 0x26 */ unsigned short mtagno;
                    };
                } s;

            };
        } isop;
        struct {
            /* 0x10 */ union Constant number;
            /* 0x18 */ int size;
        } isconst;
        struct {
            /* 0x10 */ unsigned short unk10;
            /* 0x14 */ int unk14; // is this ever defined?
        } isrconst;
    };
}; // size 0x28

// reemit inner function, used for constant folding
struct IChainList {
    /*  0x0 */ struct IChain ichain; // why
    /* 0x28 */ struct IChainList *prev;
    /* 0x2C */ struct IChainList *next;
}; // size 0x30

struct LiveUnit {
    /* 0x00 */ struct Graphnode *node;
    /* 0x04 */ struct LiveUnit *next;
    /* 0x08 */ struct LiveRange *liverange;
    /* 0x0C */ struct LiveUnit *next_in_block;
    /* 0x10 */ unsigned short load_count;
    /* 0x12 */ unsigned char store_count;
    /* 0x13 */ unsigned char reg;
    /* 0x14 */ bool firstisstr;
    /* 0x15 */ bool needreglod;
    /* 0x16 */ bool needregsave;
    /* 0x17 */ bool deadout;
}; // size 0x18

struct InterfereList {
    /* 0x0 */ struct LiveRange *liverange;
    /* 0x4 */ struct InterfereList *next;
    /* 0x8 */ unsigned char unk8;
    /* 0x9 */ unsigned char shared;
}; // size 0xC

struct LiveRange {
    /*  0x0 */ struct IChain *ichain; // active?
    /*  0x4 */ int bitpos;
    /*  0x8 */ struct LiveUnit *liveunits;
    /*  0xC */ struct BitVector unkC;
    /* 0x14 */ struct BitVector unk14; // livebbs?
    /* 0x1C */ int unk1C; // precolor?
    /* 0x20 */ char assigned_reg; // printregs
    /* 0x21 */ unsigned char unk21; // regsleft
    /* 0x22 */ bool hasstore;
    /* 0x23 */ unsigned char unk23;
    /* 0x24 */ int unk24; // num_interfering
    /* 0x28 */ int forbidden[2];
    /* 0x30 */ float adjsave;
    /* 0x34 */ struct LiveRange *next;
    union {
        /* 0x38 */ struct InterfereList *interfere;
        /* 0x38 */ struct LiveUnit *unk38_lu; // it gets nulled out in localcolor, so why?
                                              // aliased units?
    };
}; // size 0x3C

struct BittabItem {
    struct IChain *ichain;
    struct LiveRange *liverange;
};

struct PdefEntry {
    /* 0x0 */ Uopcode opc;
    /* 0x1 */ Datatype dtype;
    /* 0x2 */ bool outmode; // lexlev & 2
    /* 0x3 */ bool unk3;
    /* 0x4 */ bool inmode; // lexlev & 1
    /* 0x8 */ int offset;
    /* 0xC */ int size;
}; // size 0x10

struct TailRecParameter {
    /* 0x00 */ struct Statement *stat;
    /* 0x04 */ int parnum;
    /* 0x08 */ int unk8; // set to tempdisp in tail_recursion
    /* 0x0C */ struct Expression* expr;
    /* 0x10 */ struct TailRecParameter *next;
}; // size 0x14

// Statement.u.store.u.str.unk30
struct RecurThing {
    /* 0x00 */ struct IChain *ichain;
    /* 0x04 */ struct Expression *expr;
    /* 0x08 */ struct RecurThing *next;
}; // size 0xC

struct Expression {
    /* 0x00 */ ExpressionType type;
    /* 0x01 */ Datatype datatype;
    /* 0x02 */ bool unk2; // killed? true if ichain in altered
    /* 0x03 */ bool unk3; // not varkilled
    /* 0x04 */ unsigned char unk4;  // ExpressionType? (definitely an enum)
    /* 0x05 */ unsigned char unk5;  // ExpressionType?
    /* 0x06 */ unsigned short count; // use count, see exprdelete
    // struct {    // see copycoderep
    /* 0x08 */ unsigned short table_index; // identifies the expression
    /* 0x0C */ int chain_index;
    // };
    /* 0x10 */ struct Graphnode *graphnode;
    /* 0x14 */ struct IChain *ichain;
    /* 0x18 */ struct VarAccessList *var_access_list;
    /* 0x1C */ struct Expression *next;

    union {
        struct {
            /* 0x20 */ int offset; // when different from Location.addr, acts as offset from base address
            /* 0x24 */ int size;
            /* 0x28 */ int level;
            /* 0x2C */ struct VariableLocation address; // absolute address
            /* 0x34 */ struct Expression *outer_stack;
            /* 0x38 */ struct Temploc *unk38;
        } islda_isilda;
        struct {
            /* 0x20 */ unsigned char size; // in bytes
            /* 0x21 */ bool veqv;
            /* 0x22 */ bool unk22;
            /* 0x23 */ bool is_volatile;
            /* 0x24 */ struct Expression *outer_stack;
            /* 0x28 */ struct VariableLocation location;
            /* 0x30 */ struct Expression *copy;   // copypropagate, points to the expression that this one is a copy of
            /* 0x34 */ struct Expression *assigned_value;
            /* 0x38 */ struct Statement *assignment;
            /* 0x3C */ struct Temploc *unk3C;
        } isvar_issvar;
        struct {
            /* 0x20 */ Uopcode opc;
            /* 0x21 */ bool unk21; // anticipatable? exprimage
            /* 0x22 */ bool unk22; // available? exprimage
            /* 0x23 */ Datatype datatype;
            /* 0x24 */ struct Expression *op1;
            /* 0x28 */ struct Expression *op2;
            /* 0x2C */ int datasize; // calculated result? seems to also sometimes be size in bits of the datatype.
                                     // Also used as offset in bytes for ilod
            /* 0x30 */ struct Temploc *unk30;
            /* 0x34 */ struct Expression *unk34; // return value from findbaseaddr
            union {
                /* 0x38 */ Datatype cvtfrom; // if opc == Ucvt, seems to be a union here
                /* 0x38 */ int mtagno;
                /* 0x38 */ struct Expression *unk38; // return value from findbaseaddr
                /* 0x38 */ struct TrepImageThing *unk38_trep;
            } aux;
            union {
                struct {
                    /* 0x3C */ unsigned short unk3C; // some size, used before createcvtl. used with Uinn
                    /* 0x3E */ bool overflow_attr;
                    /* 0x3F */ unsigned char align; // see Uildv and Uilod in readnxtinst
                } v1;
                struct {
                    /* 0x3C */ unsigned int unk3C_int; // unused?
                } v2;
                /* 0x3C */ struct TrepImageThing *unk3C_trep;
            } aux2;
        } isop;
        struct {
            /* 0x20 */ union Constant number;
            /* 0x28 */ int size; // in bytes
            /* 0x2C */ int real_significand;
            /* 0x30 */ int real_exponent;
        } isconst;
        struct {
            /* 0x20 */ unsigned short value;
            /* 0x24 */ int unk24;
        } isrconst;
    } data;
}; // size 0x40

// Linear Function Test Replacement
struct TrepImageThing {
    /* 0x00 */ struct IChain *ichain;
    /* 0x04 */ struct IChain *ichain2;
    /* 0x08 */ union Bcode u;
    /* 0x28 */ struct IChain *unk28;
    /* 0x2C */ int unk2C;
}; // size 0x30

extern union Bcode u;
extern char *ustrptr;
extern struct PascalFile list;
extern struct PascalFile strp;
extern int sym[2]; // unused, unknown type
extern char sourcename[1024];
extern char uopt_uname[1024];
extern char listname[1024];
extern char strpname[1024];
extern char symname[1024];
extern union Bcode lastcopiedu;
extern struct AllocBlock *perm_heap;
extern struct AllocBlock *heapptr;
extern struct optabrec optab[0x9C];
extern bool endblock;
extern struct Expression *table[9113]; // hash table of all values used in one proc
extern struct UstackEntry *ustackbot;
extern struct UstackEntry *ustack;
extern struct ParstackEntry *parstackbot;
extern struct ParstackEntry *parstack;
extern int tempdisp;
extern struct Temploc *templochead;
extern struct Temploc *temploctail;
extern int curlevel;
extern int curblk;
extern char entnam0[1024];
extern size_t entnam0len;
extern struct RealstoreData *realstore;
extern struct RealstoreData *currealpool;
extern int realdispdiv;
extern unsigned char realdispmod;
extern int strpdisplace;
extern bool filteringout;
extern long time1;
extern long timer;
extern long lasttime;
extern struct Graphnode *graphhead;
extern struct Graphnode *graphtail;
extern struct Graphnode *curgraphnode;
extern unsigned int curstaticno;
extern int curloopno;
extern struct Statement *stathead;
extern struct Statement *stattail;
extern int blklev[128];
extern int staticlinkloc;
extern struct Expression *nocopy;
extern void *nota_candof; // TODO: fix type (0x1C bytes allocated)
extern struct VarAccessList *constprop;
extern int maxlabnam;
extern struct LiveUnit *dft_livbb;
extern int bitposcount;
extern int oldbitposcount;
extern int firstconstbit;
extern int r2bitpos[3];

extern struct BitVector varbits;
extern struct BitVector mvarbits;
extern struct BitVector fsymbits;
extern struct BitVector asgnbits;
extern struct BitVector slvarbits;
extern struct BitVector slasgnbits;
extern struct BitVector storeop;
extern struct BitVector trapop;
extern struct BitVector trapconstop;
extern struct BitVector indmults;
extern struct BitVector boolexp;
extern struct BitVector savedexp;
extern struct BitVector trepexp;
extern struct BitVector used_trepexp;
extern struct BitVector outmodebits;
extern struct BitVector notinmodebits;
extern struct BitVector varfactor_muls;
extern struct BitVector coloreditems;
extern struct BitVector vareqv;
extern struct BitVector asgneqv;
extern struct BitVector coloredparms;
extern struct BitVector iscolored12;
extern struct BitVector iscolored[2];
extern struct BitVector old;
extern struct BitVector workbvect;

extern struct BittabItem *bittab; // dynamically allocated array
extern int bittabsize;
extern struct PdefEntry *pdeftab; // dynamically allocated array
extern int pdeftabsize;
extern int highestmdef;
extern int pdefmax;
extern int pdefno;
extern struct IChain *itable[1619];
extern struct Loop *toplevelloops;
extern struct LooptabItem *looptab;
extern int actnuminteeregs;
extern int actnuminterregs;
extern struct BitVector setofr2bbs[3];
extern struct BitVector setofspills;
extern int firsterreg[2];
extern int firsteereg[2];
extern int lasterreg[2];
extern int lasteereg[2];
extern int firstparmreg[2];
extern int numoferregs[2];
extern int regsinclass[2];
extern int highesterreg[2];
extern int highesteereg[2];
extern int regsinclass1;
extern long long int seterregs[2];
extern long long int seteeregs[2];
extern long long int setregs[2];
extern long long int usedeeregs[2];
extern long long int dftregsused;
extern long long int regscantpass;
extern int ugen_saved_eeregs;
extern float movcostused;
extern bool passedbyfp;
extern int offsetpassedbyint;
extern int tempcount;
extern struct Statement *aentptr;
extern struct Statement *curmst;
extern int parnumber; // unused
extern int numintval;
extern int noop;
extern int curlocpg;
extern int curlocln;
extern bool loc_not_yet_seen;
extern int bitvectorsize;
extern int bvlivransize;
extern bool suppressopt;
extern bool o0o1specified;
extern unsigned char lang;
extern bool inlopt;
extern bool listwritten;
extern bool symwritten;
extern bool usefeedback;
extern int varrefs;
extern int totalvarref; // unused
extern int varreflimit;
extern int curvarreflimit;
extern bool docopyprog;
extern bool dordstore;
extern bool doscm;
extern bool docm;
extern char proc_to_print[1024];
extern bool at_proc_to_print;
extern struct StrList *ctrl_head;
extern int dbugno;
extern bool genbbnum;
extern bool doingcopy;
extern bool doassoc;
extern bool doprecolor;
extern bool dorlodrstropt;
extern bool doheurab;
extern bool docreatebb;
extern bool do_opt_saved_regs;
extern bool do_const_in_reg;
extern bool docodehoist;
extern bool dorecur;
extern bool dogenvreg;
extern bool dotail;
extern bool domtag;
extern bool usingregoption;
extern bool no_r23;
extern bool no_r3;
extern bool dowhyuncolor;
extern bool nof77alias;
extern bool nopalias;
extern bool fortran_lang;
extern bool moremotion;
extern bool verbose;
extern bool bigendian;
extern bool usefp;
extern bool someusefp;
extern bool o3opt;
extern bool update_sym_file;
extern bool warned;
extern bool allcallersave;
extern bool propagate_ee_saves;
extern bool f77_static_flag;
extern bool kpic_flag;
extern bool dokpicopt;
extern bool outofmem;
extern unsigned char mipsflag;
extern bool mips3_64data;
extern bool dwopcode;
extern int g_num;
extern int int_reg_size;
extern bool leaf_for_ugen;
extern bool has_exc_handler;
extern bool can_elim_tail;
extern bool use_c_semantics;
extern bool stack_reversed;
extern bool strictieee;
extern bool fp32reg;
extern bool multibbunroll;
extern unsigned char warn_flag;
extern unsigned char entflag;
extern int unroll_times;
extern int unroll_limit;
extern int sizethreshold;
extern struct LdatabEntry *ldatab[3113];
extern struct Proc *curproc;
extern struct Proc *indirprocs;
extern struct Proc *ciaprocs;
extern struct Statement *gsptr;

#endif
