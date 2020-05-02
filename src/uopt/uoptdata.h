#ifndef UOPTDATA_H
#define UOPTDATA_H

#include "common.h"
#include "ucode.h"
#include "libxmalloc/xmalloc.h"

struct Bcrec u;

extern char *ustrptr;

extern struct PascalFile list;

extern struct AllocBlock *perm_heap;

extern long timer;

extern int bitvectorsize;
extern int bvlivransize;

extern bool suppressopt;
extern bool o0o1specified;
extern bool listwritten;
extern bool verbose;
extern bool warned;
extern bool outofmem;
extern bool warn_flag;

#endif
