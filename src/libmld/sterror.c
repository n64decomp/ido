#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "libmld.h"

/*
00488434 st_extstradd
00488C8C st_fdadd
0048970C st_stradd
00489B50 st_malloc
0048D0E0 st_readst
0048E148 st_writebinary
0048E1D8 st_writest
*/
void st_error(const char *format, ...) {
    va_list arglist;

    fprintf(stderr, "%s: Error: ", st_errname);
    va_start(arglist, format);
    vfprintf(stderr, format, arglist);
    fprintf(stderr, "\n");
    exit(1);
}
