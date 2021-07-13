#ifndef UOPTPPSS_H
#define UOPTPPSS_H

#include "common.h"
#include "uoptdata.h"

struct Proc *getproc(int unk);
struct Label *searchlab(unsigned int addr, struct Label *tree);
void prepass(void);
bool proc_suppressed(void);
bool in_fsym(int num);
struct Variable *insertvar(struct VariableInner var, int size, Datatype dtype, struct Variable **pos, bool arg5_unused, bool arg6, bool arg7);

#endif
