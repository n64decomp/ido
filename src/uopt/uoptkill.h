#ifndef UOPTKILL_H
#define UOPTKILL_H

#include "uoptdata.h"

struct Expression *findbaseaddr(struct Expression *expr);
struct Expression *findbaseaddr_ada(struct Expression *expr);

bool overlapping(struct VariableLocation a, struct VariableLocation b, int size_a, int size_b);
bool aliaswithptr(struct VariableLocation *location);
bool pointtoheap(struct Expression *baseaddr);
bool slkilled(struct Statement *stat, struct Expression *expr);
bool smkilled(struct Statement *stat, struct Statement *stat2);
bool sskilled(struct Statement *stat, struct Statement *stat2);
void movkillprev(struct Statement *stat);
void strkillprev(struct Statement *stat);
void lodkillprev(struct Expression *expr);
bool clkilled(int level, struct Proc *proc, struct Expression *expr);
bool cmkilled(int level, struct Proc *proc, struct Statement *stat);
bool cskilled(int level, struct Proc *proc, struct Statement *stat);
void cupkillprev(int level, struct Proc *proc);
void ciakillprev(void);
bool listplkilled(struct Statement *parameters, struct Expression *expr, int arg2);
bool listpskilled(struct Statement *parameters, struct Statement *stat, int arg3);
void parkillprev(struct Statement *parameters);

bool varkilled(struct Expression *expr, struct VarAccessList *varlist);
bool strlkilled(struct Statement *stat, struct VarAccessList *varlist);
bool strskilled(struct Statement *stat, struct VarAccessList *varlist);
bool strlant(struct Statement *stat, struct VarAccessList *varlist);
bool indirectaccessed(struct VariableLocation location, unsigned char size, struct VarAccessList *varlist);

#endif
