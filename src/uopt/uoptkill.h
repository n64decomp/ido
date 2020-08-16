#ifndef UOPTKILL_H
#define UOPTKILL_H

#include "uoptdata.h"

bool overlapping(struct VariableInner a, struct VariableInner b, int size_a, int size_b);
bool slkilled(struct Statement *stmt, struct Expression *expr);
void lodkillprev(struct Expression *expr);
bool cskilled(int level, struct Proc *proc, struct Statement *stat);
bool listpskilled(struct Statement *parameters, struct Statement *stat, int arg3);

#endif
