#ifndef LIBU_H
#define LIBU_H

#include <stdbool.h>
#include "ucode.h"
#include "libp/libp.h"

// uscan.c
void openstdout(struct PascalFile *file);
long getclock(void);

// bread.c
void initur(const char *path);
void readuinstr(union Bcode *bcode, char *ustr);

// bwri.c
extern struct utabrec utab[0x9C];
void inituwrite(const char *path);
void uwrite(union Bcode *bcode);
char getdtyname(enum Datatype type);
char getmtyname(enum Memtype type);

// ucio.c
void uputinit(const char *path);
void uputint(int value, bool swap);
void uputclose(void);
void uputkill(void);
void ugetinit(const char *path);
int ugetint(bool swap);
int ugeteof(void);
void ugetclose(void);

// uini.c
void uini(void);


#endif
