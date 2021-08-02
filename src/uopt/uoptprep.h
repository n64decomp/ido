#ifndef UOPTPREP_H
#define UOPTPREP_H

bool lvalaltered(struct IChain *ichain, struct Graphnode *node);
bool lvalantloc(struct IChain *ichain, struct Graphnode *node);
bool expinalter(struct IChain *ichain, struct Graphnode *node);
bool cupaltered(struct IChain *ichain, int level, struct Proc *proc);
bool expaltered(struct IChain *ichain, struct Graphnode *node);
void patchvectors(void);

#endif
