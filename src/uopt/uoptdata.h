#ifndef UOPTDATA_H
#define UOPTDATA_H

#include "common.h"
#include "ucode.h"
#include "libxmalloc/xmalloc.h"

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

extern struct Bcrec u;

extern char *ustrptr;

extern struct PascalFile list;

extern struct AllocBlock *perm_heap;
extern struct AllocBlock *heapptr;

extern int *ustackbot; // TODO: fix type
extern int *ustack; // TODO: fix type
extern int *parstackbot; // TODO: fix type
extern int *parstack; // TODO: fix type

extern struct {
    bool unk0, unk1, unk2; // TODO what are these?
} optab[0x9C];

extern long timer;

extern int bitvectorsize;
extern int bvlivransize;

extern int curlevel;
extern bool filteringout;
extern bool suppressopt;
extern bool o0o1specified;
extern unsigned char lang;
extern bool listwritten;
extern bool doingcopy;
extern bool doassoc;
extern bool dowhyuncolor;
extern bool doprecolor;
extern bool dorlodrstropt;
extern bool doheurab;
extern bool do_opt_saved_regs;
extern bool docreatebb;
extern bool do_const_in_reg;
extern bool docodehoist;
extern bool dorecur;
extern bool dogenvreg;
extern bool dotail;
extern bool domtag;
extern bool usingregoption;
extern bool no_r23;
extern bool nopalias;
extern bool no_r3;
extern bool nof77alias;
extern bool fortran_lang;
extern bool moremotion;
extern bool genbbnum;
extern bool f77_static_flag;
extern bool kpic_flag;
extern bool dokpicopt;
extern int g_num;
extern bool dwopcode;
extern int int_reg_size;
extern unsigned char mipsflag;
extern bool mips3_64data;
extern bool stack_reversed;
extern bool strictieee;
extern bool fp32reg;
extern int varreflimit;
extern int dbugno;
extern char proc_to_print[1024];
extern int ctrl_head;
extern float movcostused;
extern bool docopyprog;
extern bool dordstore;
extern bool doscm;
extern bool docm;
extern bool bigendian;
extern bool o3opt;
extern bool update_sym_file;
extern int sizethreshold;
extern bool multibbunroll;
extern int unroll_times;
extern int unroll_limit;
extern int actnuminterregs;
extern int actnuminteeregs;
extern bool usefeedback;
extern void *nocopy; // TODO: fix type (0x40 bytes allocated)
extern void *nota_candof; // TODO: fix type (0x1C bytes allocated)
extern void *constprop; // TODO: fix type (0x10 bytes allocated)
extern int regsinclass1;
extern int firsterreg[2];
extern int firsteereg[2];
extern int firstparmreg[2];
extern int numoferregs[2];
extern int regsinclass[2];
extern int lasterreg[2];
extern int lasteereg[2];
extern unsigned int seterregs[4];
extern unsigned int seteeregs[4];
extern unsigned int setregs[4];
extern void *gsptr; // TODO: fix type (0x34 bytes allocated)
extern struct livbb *dft_livbb;

extern int numlcse;
extern int numlrdstr;
extern int numgcopy;
extern int numgcse;
extern int numrdstr;
extern int numinsert;
extern int numtstrep;
extern int numsrinc;
extern int numexpr;
extern int numstr;
extern int totvarref;
extern int totvarrref;
extern int totvarsav;
extern int totvarrsav;
extern int totexpref;
extern int totexprref;
extern int totexpsav;
extern int totexprsav;
extern int totvarrlods;
extern int totvarrstrs;
extern int totexprlods;
extern int totexprstrs;
extern int lopttime;
extern int dataflowtime;
extern int dataflowiter;
extern int numdataflow;
extern int regaloctime;

extern bool verbose;
extern bool warned;
extern bool outofmem;
extern bool warn_flag;

#endif
