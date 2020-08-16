#ifndef UOPTITAB_H
#define UOPTITAB_H

void codeimage(void);

struct IChain *isearchloop(unsigned short hash, struct Expression *expr, int arg2, int arg3);
struct IChain *exprimage(struct Expression *expr, char *arg1, char *arg2);
struct IChain *searchstore(unsigned short hash, Uopcode opc, struct IChain *ichain1, struct IChain *ichain2, int unk1, int size);
unsigned short isopihash(Uopcode opc, struct IChain *ichain1, struct IChain *ichain2);

#endif
