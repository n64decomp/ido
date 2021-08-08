#ifndef UOPTUTIL_H
#define UOPTUTIL_H

#include "libxmalloc/xmalloc.h"
#include "uoptdata.h"


bool addreq(struct VariableLocation a, struct VariableLocation b);
void stackerror(void);
void boundswarning(void);
void ovfwwarning(Uopcode opc);
void dbgerror(int code);
struct Expression *appendchain(unsigned short table_index);
struct Expression *findsimilar(struct Expression *expr);
void copycoderep(struct Expression *dest, struct Expression *src);
void fix_sbase(struct Statement *stat);
void fix_base(struct Expression *expr);
void fixcorr(struct Expression *expr);

void delentry(struct Expression *entry);
void decreasecount(struct Expression *expr);
void increasecount(struct Expression *expr);

int isconsthash(int number);
int realhash(int len);
int isvarhash(struct VariableLocation loc);
int isophash(Uopcode opc, struct Expression *op1, struct Expression *op2);
int opvalhash(Uopcode opc, struct Expression *op1, int value);

void extendstat(Uopcode opc);
int sizeoftyp(Datatype t);
int blktolev(int blk);
int newbit(struct IChain *ichain, void *unk4);

bool exproccurred(struct IChain *ichain, struct Expression *expr);

bool addovfw_signed(int a, int b);
bool subovfw_signed(int a, int b);
bool mpyovfw_signed(int a, int b);
bool addovfw_unsigned(unsigned int a, unsigned int b);
bool subovfw_unsigned(unsigned int a, unsigned int b);
bool mpyovfw_unsigned(unsigned int a, unsigned int b);
bool addovfw(enum Datatype t, int a, int b);
bool subovfw(enum Datatype t, int a, int b);
bool mpyovfw(enum Datatype t, int a, int b);

struct Expression *searchvar(unsigned short table_index, struct VariableLocation *loc);
void vartreeinfo(struct Variable *var);
void entervregveqv(void);
void getoption(int uopt_option, int n);
int cutbits(int val, int length, enum Datatype dtype);
long long int cutbits64(long long val, int length, enum Datatype dtype);
struct Expression *enter_const(int num, Datatype datatype, struct Graphnode *graphnode);
struct Expression *enter_lda(int addr, struct Expression *expr, struct Graphnode *graphnode);
struct Expression *binopwithconst(Uopcode opc, struct Expression *left, int value);
int regclassof(struct IChain *ichain);
bool in_indmults(struct IChain *ichain);
bool checkincre(struct Expression *entry, struct Expression *entry2, int *result);
int findincre(struct Expression *entry);
int countvars(struct IChain *ichain);

bool hasvolatile(struct Expression *expr);
bool has_volt_ovfw(struct Expression *expr);
bool has_ilod(struct Expression *expr);
bool is_incr(struct Expression *expr);
void *alloc_realloc(void *old_ptr, ssize_t old_size_16_byte_blocks, ssize_t new_size_16_byte_blocks, struct AllocBlock **heap);
bool fitparmreg(int arg0, int arg1, int arg2, int arg3);

bool trap_imply(struct IChain *trap_ichain, struct IChain *ichain);
int trapstat_imply(struct Statement *stmt, struct Expression *op1, struct Expression *op2);

bool is_power2(unsigned int v);
int getfloatval(struct Expression *expr, int *exponent10);
int val_when_exponent0(int a, int exponent10);
int coloroffset(int index);
int in_reg_masks(int index, int arg1, int arg2);
void skipproc(int reason);
#endif
