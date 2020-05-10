#ifndef UOPTPPSS_H
#define UOPTPPSS_H

#include "common.h"
#include "uoptdata.h"

struct Proc *getproc(int unk);
struct Label *searchlab(int arg0, struct Label *list);
void prepass(void);
bool proc_suppressed(void);

#endif
