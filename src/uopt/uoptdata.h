#ifndef UOPTDATA_H
#define UOPTDATA_H

#include "ucode.h"
#include "libxmalloc/xmalloc.h"

struct Bcrec u;

extern char *ustrptr;

extern struct PascalFile list;

extern struct AllocBlock *perm_heap;

extern long timer;

extern int bitvectorsize;
extern int bvlivransize;

extern unsigned char suppressopt;
extern unsigned char o0o1specified;
extern unsigned char listwritten;
extern unsigned char verbose;
extern unsigned char warned;
extern unsigned char outofmem;
extern unsigned char warn_flag;

#endif
