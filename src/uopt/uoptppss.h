#ifndef UOPTPPSS_H
#define UOPTPPSS_H

#include "common.h"
#include "uoptdata.h"

struct Proc *getproc(int unk);
struct Label *searchlab(unsigned int addr, struct Label *tree);
void prepass(void);
bool varintree(struct VariableLocation loc, struct Variable *tree);
bool furthervarintree(struct Expression *expr, struct Proc *proc);
bool proc_suppressed(void);
bool in_fsym(int num);
bool is_gp_relative(int num);
struct Variable *insertvar(struct VariableLocation var, int size, Datatype dtype, struct Variable **pos, bool arg5_unused, bool arg6, bool arg7);

#endif
