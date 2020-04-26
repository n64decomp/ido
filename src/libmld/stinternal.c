#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "libmld.h"

/*
00488434 st_extstradd
00488590 st_idn_dn
004886A8 st_idn_rndx
004887CC st_rndx_idn
004888DC st_setidn
00488984 st_pext_dn
00488C1C st_setfd
00488C8C st_fdadd
0048932C st_auxadd
00489458 st_pdadd
004895E4 st_lineadd
0048970C st_stradd
004898C0 st_paux_ifd_iaux
004899B0 st_pline_ifd_iline
00489AA0 st_str_iss
0048AE84 st_filebegin
0048B490 st_textblock
0048C56C st_file_idn
0048CD18 st_changeauxrndx
0048D0E0 st_readst
*/
void st_internal(const char *format, ...) {
    va_list arglist;

    fprintf(stderr, "%s: Internal: ", st_errname);
    va_start(arglist, format);
    vfprintf(stderr, format, arglist);
    fprintf(stderr, "\n");
    exit(1);
}
