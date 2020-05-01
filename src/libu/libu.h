#ifndef LIBU_H
#define LIBU_H

#include "ucode.h"
#include "libp/libp.h"

void openstdout(struct PascalFile *file);
long getclock(void);

// bread.c
void readuinstr(struct Bcrec *uinstr, char *ustr);

// bwri.c
void uwrite(struct Bcrec *uinstr);

// ucio.c
void uputinit(const char *path);
void uputint(int value);
void uputclose(void);
void uputkill(void);
void ugetinit(const char *path);
int ugetint(void);
int ugeteof(void);
void ugetclose(void);


#endif
