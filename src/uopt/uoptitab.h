#ifndef UOPTITAB_H
#define UOPTITAB_H

void codeimage(void);

struct IChain *isearchloop(unsigned short hash, struct Expression *expr, struct IChain *op1, struct IChain *op2);
struct IChain *exprimage(struct Expression *expr, bool *arg1, bool *arg2);
void trep_image(struct Expression *expr, bool arg1, bool arg2, bool arg3, bool arg4);

struct IChain *searchstore(unsigned short hash, Uopcode opc, struct IChain *op1, struct IChain *op2, int unk1, int size);

int isconstihash(int value);
int realihash(union Constant value);
int isvarihash(struct VariableInner var);
int isldaihash(struct VariableInner var, unsigned int addr);
int isopihash(Uopcode opc, struct IChain *op1, struct IChain *op2);
int opvalihash(Uopcode opc, struct IChain *ichain, unsigned short number);

#endif
