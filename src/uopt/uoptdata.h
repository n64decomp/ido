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
    bool unk0, unk1, unk2; // TODO what are these?
};

extern struct Bcrec u;
extern char *ustrptr;
extern struct PascalFile list;
extern struct PascalFile strp;
extern int sym[2]; // unused, unknown type
extern char sourcename[1024];
extern char uopt_uname[1024];
extern char listname[1024];
extern char strpname[1024];
extern char symname[1024];
extern struct Bcrec lastcopiedu;
extern struct AllocBlock *perm_heap;
extern struct AllocBlock *heapptr;
extern struct optabrec optab[0x9C];
extern bool endblock;
extern void *table[9113]; // TODO: fix type
extern int *ustackbot; // TODO: fix type
extern int *ustack; // TODO: fix type
extern int *parstackbot; // TODO: fix type
extern int *parstack; // TODO: fix type
extern int tempdisp;
extern void *templochead; // TODO: fix type (0x14 bytes allocated)
extern void *temploctail; // TODO: fix type
extern bool curlevel;
extern int curblk;
extern char entnam0[1024];
extern size_t entnam0len;
extern void *realstore; // TODO: fix type (some linked list of 256 bytes data + 4 byte next ptr)
extern void *currealpool; // TODO: same as above
extern int realdispdiv;
extern unsigned char realdispmod;
extern int strpdisplace;
extern bool filteringout;
extern long time1;
extern long timer;
extern long lasttime;
extern void *graphhead; // TODO: fix type
extern void *graphtail; // TODO: fix type
extern void *curgraphnode; // TODO: fix type
extern int curstaticno;
extern int curloopno;
extern void *stathead; // TODO: fix type (0x34 bytes allocated)
extern void *stattail; // TODO: same as above
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

extern void *bittab; // TODO: fix type
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
extern int seterregs[4]; // likely two 64-bit words
extern int seteeregs[4]; // likely two 64-bit words
extern int setregs[4]; // likely two 64-bit words
extern int usedeeregs[2][2]; // likely two 64-bit words
extern int dftregsused[2];
extern int regscantpass[2]; // likely 64-bit word
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
extern void *curproc; // TODO: fix type
extern void *indirprocs; // TODO: fix type (0x3c bytes allocated, see prepass)
extern void *ciaprocs; // TODO: same as above
extern void *gsptr; // TODO: fix type (0x34 bytes allocated)

#endif
