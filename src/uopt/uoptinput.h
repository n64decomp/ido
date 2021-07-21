#ifndef UOPTINPUT_H
#define UOPTINPUT_H

#include "uoptdata.h"

void getop(void);
void copyline(void);
void readnxtinst(void);
void appendstorelist(void);
void appendbbvarlst(struct Expression *var);
void incroccurrence(struct Expression **entry);
bool bigtree(struct Expression *expr, int levels);
bool treekilled(struct Expression *expr);

#endif
