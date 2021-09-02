#include <stdio.h>
#include <stdarg.h>
#include "libmld.h"

/*
0048E078 st_read
*/
void st_warning(const char *format, ...) {
    va_list arglist;

    fprintf(stderr, "\n");
    fprintf(stderr, "%s: Warning: ", st_errname);
    va_start(arglist, format);
    vfprintf(stderr, format, arglist);
    va_end(arglist);
    fprintf(stderr, "\n");
}
