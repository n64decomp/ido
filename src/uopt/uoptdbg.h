#ifndef UOPTDBG_H
#define UOPTDBG_H

#include "bitvector.h"

extern int numlcse;
extern int numlrdstr;
extern int numgcopy;
extern int numgcse;
extern int numrdstr;
extern int numinsert;
extern int numtstrep;
extern int numsrinc;
extern int numexpr;
extern int numstr;
extern int totvarref;
extern int totvarrref;
extern int totvarsav;
extern int totvarrsav;
extern int totexpref;
extern int totexprref;
extern int totexpsav;
extern int totexprsav;
extern int totvarrlods;
extern int totvarrstrs;
extern int totexprlods;
extern int totexprstrs;
extern int lopttime;
extern int dataflowtime;
extern int dataflowiter;
extern int numdataflow;
extern int regaloctime;

void printitab(void);
void printtab(void);
void printbv(struct BitVector *bv);
void printlinfo(void);
void printcm(void);
void printscm(void);
void printregs(void);
void printinterproc(void);
void printsav(void);
void printstat(void);
void print_loop_relations(void *, int num_dashes); // TODO: arg0 type

#endif
