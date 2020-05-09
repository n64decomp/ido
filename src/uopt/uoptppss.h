#ifndef UOPTPPSS_H
#define UOPTPPSS_H

#include "common.h"
#include "uoptdata.h"

void prepass(void);
struct Proc *getproc(int unk);
bool proc_suppressed(void);

#endif
