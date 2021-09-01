#ifndef UOPTPPSS_H
#define UOPTPPSS_H

#include "common.h"
#include "uoptdata.h"

unsigned char compareloc(struct VariableLocation a, struct VariableLocation b, int size_a, int size_b);
int compareaddr(struct VariableLocation a, struct VariableLocation b);
struct Proc *searchproc(int id, int level);
void change_to_o2(struct Proc *proc);
struct Proc *getproc(int unk);
void insertijplab(int num, struct IjpLabel **pos);
struct Label *updatelab(unsigned int addr, struct Label **pos, bool referenced);
struct Label *searchlab(unsigned int addr, struct Label *tree);
void update_veqv_in_table(struct Variable *var);
void make_subloc_veqv(struct VariableLocation loc, int size, struct Variable **pos);
struct Variable *insertvar(struct VariableLocation var, int size, Datatype dtype, struct Variable **pos, bool arg5_unused, bool arg6, bool arg7);
void enterfsymtab(int num);
void del_fsymtab(int num);
void enter_gp_rel_tab(int num);
void insertlda(struct VariableLocation loc, int size);
bool insertcallee(struct Proc *proc, struct ProcList **callee_list);
void check_gp_relative(void);
void oneinstruction(void);
void oneprocprepass(void);
bool mergecallees(struct ProcList **dest, struct ProcList *src);
void processcallgraph(void);
void checkforvreg(struct Variable *var);
void findallvregs(struct Proc *proc);
void prepass(void);
bool varintree(struct VariableLocation loc, struct Variable *tree);
bool furthervarintree(struct Expression *expr, struct Proc *proc);
bool in_fsym(int num);
bool is_gp_relative(int num);
bool proc_suppressed(void);

#endif
