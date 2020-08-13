#ifndef UOPTDATA_H
#define UOPTDATA_H

#include "common.h"
#include "ucode.h"
#include "libp/libp.h"
#include "libxmalloc/xmalloc.h"

#include "bitvector.h"

struct StrList {
    char str[1024];
    int len;
    struct StrList *next;
};

struct livbb {
    void *unk0; //BittabItemUnk4, previous livbb?
    struct livbb *next;
    int unk8;
    int unkC;
    unsigned short unk10;
    unsigned char unk12;
    unsigned char unk13;
    bool firstisstr;
    bool needreglod;
    bool needregsave;
    bool deadout;
};

struct optabrec {
    bool unk0; // seems to be set if a BB ends with this instruction and for Uaent
    bool unk1;
    bool is_binary_op;
};

struct Label {
    unsigned int addr;
    int len; // should probably be endaddr and not len
    bool unk8; // or unsigned char?
    bool branched_back;
    struct Label *left;
    struct Label *right;
};

// See insertvar
struct VariableInner {
    int addr; // can be negative, stack offset?
    unsigned int unk4bFFFFF800: 21;
    unsigned int memtype: 3;
    unsigned int level: 8; // see furthervarintree
};
struct Variable {
    Datatype dtype;
    bool unk1;
    bool unk2;
    struct VariableInner inner;
    int size;

    struct Variable *left; // 0x10
    struct Variable *right; // 0x14
};

struct LdatabEntry {
    struct VariableInner var;
    int size;
    struct LdatabEntry *next;
};

struct Expression;

struct UstackEntry {
    struct Expression *expr;
    int value;
    struct UstackEntry *up;
    struct UstackEntry *down;
};

struct ParstackEntry {
    struct Statement *unk0;
    int unk4;
    struct ParstackEntry *down;
};

struct RealstoreData {
    char c[256];
    struct RealstoreData *next;
};

struct Statement;

struct VarAccessList {
    struct VarAccessList *prev; // towards head
    struct VarAccessList *next; // towards tail
    bool unk8; // or unsigned char?
    unsigned char type; // 0: none?, 1: store (Statement), 2: var (Expression), 3: ? (see Upmov in readnxtinst)
    union {
        struct Statement *store; // 0xC
        struct Expression *var; // 0xC
    } data;
};

struct Graphnode;
struct GraphnodeList {
    struct Graphnode *graphnode;
    struct GraphnodeList *next;
};

// See put_in_fallthru_bb and put_in_jump_bb
struct JumpFallthroughBB {
    bool unk0;
    bool unk1;
    void *unk4; // Taken from unk44 array in Graphnode
    struct JumpFallthroughBB *next;
};

struct Graphnode {
    int blockno;
    bool unk4;
    unsigned char unk5; // enum: notloopfirstbb, loopfirstbb, canunroll (see printregs)
    unsigned char unk6;
    unsigned char unk7;
    unsigned short num; // 0x8
    unsigned char loopdepth; // 0xA
    unsigned char unkBb8: 1;
    unsigned char unkBb4: 1;
    struct Graphnode *next; // 0xC
    int unk10;
    struct GraphnodeList *predecessors; // 0x14
    struct GraphnodeList *successors; // 0x18
    struct Statement *stat_head; // 0x1C
    struct Statement *stat_tail; // 0x20
    struct VarAccessList *varlisthead; // 0x24
    struct VarAccessList *varlisttail; // 0x28
    int unk2C;
    int unk30;
    int regsused[2][2]; // 0x34, should be two 64-bit values, but then alignment fails
    void *unk44[35]; // see printregs
    int unkD0[(0xEC - 0xD0) / 4];
    struct JumpFallthroughBB *fallthrough_bbs; // 0xEC
    struct JumpFallthroughBB *jump_bbs; // 0xF0

    struct BitVector indiracc; // 0xF4
    struct BitVector hoistedexp; // 0xFC
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
            struct BitVector unk15C; // 0x15C
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
            int unk124;
            int eeavin; // 0x128
            int unk12C;
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
    int id;
    struct Variable *vartree;
    bool unk8; // bool or char?
    bool unk9; // bool or char?
    bool unkA; // bool or char?
    bool unkB; // set to lang == LANG_COBOL
    bool o3opt; // written to allcallersave in procinit
    bool unkD; // set to lang == LANG_COBOL
    bool unkE; // bool or char?
    bool unkF; // bool or char?
    unsigned char level; // initialized to 2 in prepass, also set to lexlev for Ucup in oneprocprepass
    unsigned short num_bbs; // 0x12
    bool unk14; // bool or char?
    bool unk15;
    struct ProcList *callees; // linked list of Procs (see oneprocprepass, insertcallee)
    struct IjpLabel *ijp_labels; // 0x1C, sorted tree
    unsigned int bvsize; // 0x20
    struct RegstakenParregs *regstaken_parregs; // 0x24
    struct Label *labels; // sent to searchlab
    struct Proc *left; // binary search tree left (root is prochead)
    struct Proc *right; // binary search tree right (root is prochead)
    void *unk34;
    int unk38; // mtag uses this
};

struct Statement {
    Uopcode opc;
    bool unk1;
    bool unk2; // bool or unsigned char?
    bool unk3; // bool or unsigned char?
    struct Expression *expr; // 0x4
    struct Statement *next; // 0x8, towards tail
    struct Statement *prev; // 0xC, towards head
    struct Graphnode *graphnode; // 0x10

    union {
        struct {
            struct Expression *expr; // 0x14
            struct VarAccessList *next; // 0x18
            bool unk1C; // not strlkilled
            bool unk1D;
            bool unk1E; // not strskilled
            bool unk1F;
            int size; // 0x20
            struct Expression *baseaddr; // 0x24
            int unk28;
            union {
                struct {
                    int unk2C;
                    int unk30;
                } str;
                struct {
                    Datatype dtype;
                    unsigned char unk2D; // LEXLEV&~7 or LENGTH*8
                    unsigned short offset; // 0x2E
                    int unk30; // IONE+ustack->value
                } istr; // and istv, irst, irsv, mov, movv
            } u;
            struct {
                unsigned char unk32; // IONE
                unsigned char unk33; // LEXLEV&~7
            } mov; // and movv
        } store;

        struct {
            int blockno; // 0x14
            int length; // 0x18
            bool unk1C; // 0/1 if matched a reference
            int unk20;
            unsigned char flags; // 0x24, LEXLEV
        } label;

        struct {
            int unk14; // IONE
        } lbgn;

        struct {
            unsigned char unk14; // LEXLEV
        } lbdy;

        struct {
            int page; // 0x14
            int line; // 0x18
        } loc;

        struct {
            Datatype dtype; // 0x14
            int unk18; // IONE
        } clbd_cubd_step;

        struct {
            Datatype dtype; // 0x14
            unsigned char unk15; // LENGTH
            struct VariableInner var; // 0x18, OFFSET, IONE, MTYPE
        } ctrl;

        struct {
            int unk14; // LEXLEV
            int unk18; // Upar/Uxpar OFFSET+LENGTH if passbyfp
            int loc; // 0x1C, VariableInner loc
            struct Proc *proc; // indirprocs/ciaprocs
        } mst;

        struct {
            int unk14;
            int unk18; // initialized to 0
        } chkt;

        struct {
            unsigned char mtype; // 0x14
            int unk18; // LENGTH, tempdisp
        } def;

        struct {
            Datatype dtype; // 0x14
            unsigned char size; // 0x15
            int index; // 0x18, parcount or OFFSET/4
            int loc; // 0x1C, OFFSET
            struct Expression *baseaddr; // 0x20
        } par; // and xpar

        struct {
            int unk14;
            struct VarAccessList *next; // 0x18
            int unk1C;
            int size; // 0x20
            int unk24;
            int unk28;
            struct Expression *baseaddr; // 0x2C
            unsigned short offset; // 0x30, OFFSET
            unsigned char level; // 0x32, LEXLEV
        } pmov;

        struct {
            Datatype dtype; // 0x14
            unsigned char unk15; // 1 from Uicuf, POP from Uaent
        } pop;

        struct {
            struct Expression *expr2; // 0x14, first expr at 0x4
            int unk18; // initialized to 0
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
            int unk1C; // initialized to 0 for tjp/fjp
        } jp; // tjp, fjp, uujp

        struct {
            struct Proc *proc; // 0x14
            Datatype dtype; // 0x18
            unsigned char level; // 0x19
            unsigned short extrnal_flags; // 0x1A, EXTRNAL
            unsigned char pop; // 0x1C, POP
            unsigned char push_flags; // 0x1D, POP (vararg flags)
            int unk20; // IONE for Urcuf, register number?
            struct Statement *unk24; // from parstack
        } call; // cup, icuf, rcuf

        struct {
            char *strp; // 0x14
            unsigned char flags; // 0x18, LEXLEV
            Datatype dtype; // 0x19
            int unk1C; // LENGTH
            int unk20; // OFFSET
            int len; // 0x24, CONSTVAL.swpart.Ival
            struct Statement *unk28; // from parstack
        } cia;

        struct {
            Datatype dtype; // 0x14
            unsigned char pop; // 0x15, POP
            unsigned char push; // 0x16, PUSH
            unsigned char extrnal_flags; // 0x17, EXTRNAL
            int blockno; // 0x18, IONE
            int unk1C; // initialized to 0
        } aent;
    } u;
};

struct Temploc {
    int index;
    int disp; // start offset (leftmost) in stack frame
    int size;
    bool not_spilled;
    struct Temploc *next;
};

struct IChain
{
    char unk0[0x28];
}; // size 0x28

struct InterfereWith {
    void *unk0;
    struct InterfereWith *next;
};

struct BittabItemUnk4 {
    /*  0x0 */ void *unk0; // active?
    /*  0x4 */ int unk4;   // printregs
    /*  0x8 */ struct livbb *unk8;
    /*  0xC */ struct BitVector *unkC;
    /* 0x10 */ int unk10;
    /* 0x14 */ int unk14;
    /* 0x18 */ int unk18;
    /* 0x1C */ int unk1C;
    /* 0x20 */ short unk20; // printregs
    /* 0x22 */ bool hasstore; // 0x22
    /* 0x23 */ bool unk23;
    /* 0x24 */ int unk24;
    /* 0x28 */ int unk28;
    /* 0x2C */ int unk2C;
    /* 0x30 */ float adjsave; // 0x30
    /* 0x34 */ struct BittabItemUnk4 *next; // 0x34
    /* 0x38 */ struct InterfereWith *interfere; //0x38
}; // size 0x3C

struct BittabItem {
    struct IChain *unk0; // a pointer returned by appendichain
    struct BittabItemUnk4 *unk4;
};

struct PdefEntry {
    Uopcode opc;
    Datatype dtype;
    bool unk2; // lexlev & 2
    bool unk3;
    bool unk4; // lexlev & 1
    int offset; // from u.intarray[3]
    int size; // from u.intarray[2]
};

enum ExpressionType {
    empty, // 0
    islda, // 1
    isconst, // 2
    isvar, // 3
    isop, // 4
    isilda, // 5
    issvar, // 6
    dumped, // 7
    isrconst // 8
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

struct Expression {
    ExpressionType type;
    Datatype datatype;
    bool unk2; // bool or unsigned char?
    bool unk3; // not varkilled
    bool unk4; // bool or unsigned char?
    bool unk5; // bool or unsigned char?
    unsigned short unk6; // some counter, see exprdelete
    unsigned short int table_index; // 0x8
    int chain_index; // 0xC
    struct Graphnode *graphnode; // 0x10
    void *unk14;
    struct VarAccessList *var_access_list; // 0x18
    struct Expression *next; // 0x1C

    union {
        struct {
            int addr;
            int size; // 0x24
            int level; // 0x28
            struct VariableInner var_data; // 0x2C
            // maybe same struct as isilda? (at least until this point the struct is shared)
            int unk34;
        } islda;
        struct {
            union {
                int intval;
                long long int longval;
                struct {
                    unsigned short disp; // index to first character in realdisp data
                    unsigned short len; // length of the float string
                } real;
                struct {
                    unsigned short disp;
                    unsigned short len;
                } string;
            } number; // 0x20
            int size; // 0x28, in bytes
            int real_significand; // 0x2C
            int real_exponent; // 0x30
        } isconst;
        struct {
            unsigned char size; // 0x20, in bytes
            bool unk21;
            bool unk22;
            bool is_volatile; // 0x23
            struct Expression *unk24;
            struct VariableInner var_data; // 0x28
            struct Expression *unk30;
            struct Expression *unk34;
            struct Statement* unk38; // a bit unsure about this type, see delentry
            int unk3C;
        } isvar_issvar;
        struct {
            Uopcode opc; // 0x20
            unsigned char pad21;
            unsigned char pad22;
            Datatype datatype; // 0x23
            struct Expression *op1; // 0x24
            struct Expression *op2; // 0x28
            int datasize; // calculated result? seems to also sometimes be size in bits of the datatype
            int unk30;
            struct Expression *unk34; // return value from findbaseaddr
            union {
                Datatype cvtfrom; // if opc == Ucvt, seems to be a union here
                int unk38_int;
                struct Expression *unk38; // return value from findbaseaddr
            } aux;
            union {
                struct {
                    unsigned short unk3C; // some size, used before createcvtl
                    bool overflow_attr; // 0x3E
                    unsigned char unk3F; // see Uildv and Uilod in readnxtinst
                } v1;
                struct {
                    unsigned int unk3C;
                } v2;
            } aux2;
        } isop;
        struct {
            int unk20;
            int unk24;
            int unk28;
            int unk2C;
            int unk30;
            struct Expression *unk34;
            int unk38;
        } isilda;
        struct {
            unsigned short unk20;
            int unk24;
        } isrconst;
    } data; // 0x20
};

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
extern void *nocopy; // TODO: fix type (0x40 bytes allocated)
extern void *nota_candof; // TODO: fix type (0x1C bytes allocated)
extern void *constprop; // TODO: fix type (0x10 bytes allocated)
extern int maxlabnam;
extern struct livbb *dft_livbb;
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
extern void *itable[1619]; // TODO: fix type
extern void *toplevelloops; // TODO: fix type (some linked list of 20 bytes data + 4 byte next ptr)
extern void *looptab; // TODO: fix type
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
extern void *gsptr; // TODO: fix type (0x34 bytes allocated)

#endif
