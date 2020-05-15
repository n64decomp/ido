#ifndef UOPTUTIL_H
#define UOPTUTIL_H

#include "libxmalloc/xmalloc.h"
#include "uoptdata.h"

void *alloc_realloc(void *old_ptr, ssize_t old_size_16_byte_blocks, ssize_t new_size_16_byte_blocks, struct AllocBlock **heap);

bool addreq(struct VariableInner a, struct VariableInner b);
void stackerror(void);
int realhash(int len);
int isvarhash(struct VariableInner var);
struct TableEntry *searchvar(unsigned short table_index, struct VariableInner *var);
void getoption(int uopt_option, int n);
void extendstat(unsigned char unk);
void entervregveqv(void);
void skipproc(int reason);

#endif
