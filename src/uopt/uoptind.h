#ifndef UOPTIND_H
#define UOPTIND_H

void findinduct(void);

int ivfactor(struct IChain *ichain, struct IChain *iv, bool *overflow, struct IChain **multiplier, int *mult_factor);


#endif
