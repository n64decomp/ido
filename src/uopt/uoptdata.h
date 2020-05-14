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
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    unsigned short unk10;
    unsigned char unk12;
    unsigned char unk13;
    unsigned char unk14;
    unsigned char unk15;
    unsigned char unk16;
    unsigned char unk17;
};

struct optabrec {
    bool unk0; // seems to be set if a BB ends with this instruction and for Uaent
    bool unk1;
    bool is_binary_op;
};

struct Label {
    unsigned int unk0; // identifier?
    int len;
    bool unk8; // or unsigned char?
    bool branched_back;
    struct Label *prev;
    struct Label *next;
};

// See insertvar
struct VariableInner {
    int unk0; // can be negative
    int unk4bFFFFF800: 21;
    int memtype: 3;
    int pad4bFF: 8;
};
struct Variable {
    bool unk0;
    bool unk1;
    bool unk2;
    struct VariableInner inner;
    int unkC; // some index/idendifier?

    struct Variable *left; // 0x10
    struct Variable *right; // 0x14
};

struct UstackEntry {
    void *unk0;
    int unk4;
    int unk8;
    struct UstackEntry *next;
};

struct ParstackEntry {
    void *unk0;
    int unk4;
    struct ParstackEntry *next;
};

struct RealstoreData {
    char c[256];
    struct RealstoreData *next;
};

struct Var;

struct VarList {
    struct VarList *prev; // towards head
    struct VarList *next; // towards tail
    bool unk8; // or unsigned char?
    unsigned char unk9; // some enum
    struct Var *var; // 0xC
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
    int unk0;
    unsigned char unk4;
    unsigned char unk5; // enum: notloopfirstbb, loopfirstbb, canunroll (see printregs)
    unsigned char unk6;
    unsigned char unk7;
    unsigned short num; // 0x8
    unsigned char loopdepth; // 0xA
    unsigned char unkBb8: 1;
    unsigned char unkBb4: 1;
    struct Graphnode *next; // 0xC
    int unk10;
    struct GraphnodeList *unk14; // head
    struct GraphnodeList *unk18; // tail
    struct Var *stat_head; // 0x1C
    struct Var *stat_tail; // 0x20
    struct VarList *varlisthead; // 0x24
    struct VarList *varlisttail; // 0x28
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
            };
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
    bool regstaken[36]; // might be smaller
    int parregs[36]; // might be other size
    // might be more fields here
};

struct Proc;

// Sorted list by unk0 in Proc
struct ProcList {
    struct Proc *proc;
    struct ProcList *next;
};

struct Proc {
    int unk0;
    struct Variable *vartree;
    bool unk8; // bool or char?
    unsigned char unk9; // bool or char?
    unsigned char unkA; // bool or char?
    bool unkB; // set to lang == 5
    bool o3opt; // written to allcallersave in procinit
    bool unkD; // set to lang == 5
    bool unkE; // bool or char?
    bool unkF; // bool or char?
    unsigned char unk10; // initialized to 2 in prepass
    unsigned short num_bbs; // 0x12
    bool unk14; // bool or char?
    bool unk15;
    struct ProcList *callees; // linked list of Procs (see oneprocprepass, insertcallee)
    int unk1C;
    int bvsize; // 0x20
    struct RegstakenParregs *regstaken_parregs; // 0x24
    struct Label *labels; // sent to searchlab
    struct Proc *unk2C;
    struct Proc *next;
    void *unk34;
    int unk38; // mtag uses this
};

// Not sure what this really is
struct Var {
    unsigned char unk0;
    int unk4;
    struct Var *next; // 0x8, towards tail
    struct Var *prev; // 0xC, towards head
    struct Graphnode *graphnode; // 0x10
    unsigned char dtype; // 0x14, this seems wrong, should be block index (see tail_recursion)
    unsigned char unk15;
    unsigned char unk16; // variable size?
    struct VarList *varlist; // 0x18
    int unk1C;
    void *unk20;
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
};

struct Temploc {
    int index;
    int disp; // start offset (leftmost) in stack frame
    int size;
    bool not_spilled;
    struct Temploc *next;
};

struct BittabItem {
    void *unk0; // a pointer returned by appendichain
    int unk4;
};

enum TableEntryType {
    empty,
    islda,
    isconst,
    isvar,
    isop,
    isilda,
    issvar,
    dumped,
    isrconst
}
#ifdef __GNUC__
__attribute__((packed));
#endif
;

#ifdef __GNUC__
typedef enum TableEntryType TableEntryType;
#else
typedef unsigned char TableEntryType;
#endif

struct TableEntry {
    TableEntryType type;
    Datatype datatype;
    unsigned short unk2;
    unsigned short unk4;
    unsigned short unk6; // some counter, see exprdelete
    unsigned short int table_index; // 0x8
    int chain_index; // 0xC
    int unk10; // 32-bit integer used as bool?
    void *unk14;
    int unk18;
    struct TableEntry *next; // 0x1C

    union {
        struct {
            int unk20;
            int unk24;
            int unk28;
            struct VariableInner var_data; // 0x2C
            // maybe same struct as isilda?
        } islda;
        struct {
            union {
                int intval;
                long long int longval;
            } number;
            int size; // in bytes
        } isconst_isrconst;
        struct {
            unsigned char unk20;
            bool unk21;
            bool unk22;
            struct TableEntry *unk24;
            struct VariableInner var_data; // 0x28
            struct TableEntry *unk30;
            struct TableEntry *unk34;
            struct Var* unk38; // a bit unsure about this type, see delentry
            int unk3C;
        } isvar_issvar;
        struct {
            Uopcode opc; // 0x20
            struct TableEntry *op1; // 0x24
            struct TableEntry *op2; // 0x28
            int unk2C; // calculated result?
            int unk30;
            int unk34;
            Datatype cvtfrom; // if opc == Ucvt
        } isop;
        struct {
            int unk20;
            int unk24;
            int unk28;
            int unk2C;
            int unk30;
            struct TableEntry *unk34;
        } isilda;
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
extern struct TableEntry *table[9113]; // hash table of all values used in one proc
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
extern struct Var *stathead;
extern struct Var *stattail;
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
extern void *pdeftab; // TODO: fix type
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
extern void *aentptr; // TODO: fix type (some struct ptr)
extern void *curmst; // TODO: fix type (some struct ptr)
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
extern void *ldatab[3113]; // TODO: fix type (0x10 bytes allocated)
extern struct Proc *curproc;
extern struct Proc *indirprocs;
extern struct Proc *ciaprocs;
extern void *gsptr; // TODO: fix type (0x34 bytes allocated)

#endif
