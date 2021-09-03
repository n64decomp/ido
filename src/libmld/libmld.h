#ifndef LIBMLD_H
#define LIBMLD_H
#include "syms.h"
#include "stext.h"
#include "sex.h"

extern char *st_errname;
extern CHDRR *st_pchdr;

void st_error(const char *format, ...);
void st_warning(const char *format, ...);
void st_internal(const char *format, ...);
int ldfsymorder(pHDRR hdr, int offset);

#endif
