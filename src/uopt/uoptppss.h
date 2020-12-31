#ifndef UOPTPPSS_H
#define UOPTPPSS_H

#include "common.h"
#include "uoptdata.h"

struct Proc *getproc(int unk);
struct Label *searchlab(unsigned int addr, struct Label *tree);
void prepass(void);
bool proc_suppressed(void);
bool in_fsym(int num);

#endif
