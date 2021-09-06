#include <stdlib.h>
#include "libmld.h"

/*
0048AE84 st_filebegin
0048B120 st_endallfiles
0048B2F0 st_fileend
0048B490 st_textblock
0048B590 _sgi_st_blockbegin
0048B6E8 st_blockbegin
0048B83C st_blockend
0048BA18 st_procend
0048BC7C st_procbegin
0048C2E0 st_fixextindex
*/
int st_currentifd(void) {
    if (pcfdcur == NULL) {
        return -1;
    }
    return st_ifd_pcfd(pcfdcur);
}

/*
0040BCA0 path_blockno
0048AE84 st_filebegin
0048B120 st_endallfiles
0048C56C st_file_idn
0048E1D8 st_writest
*/
int st_ifdmax(void) {
    return st_pchdr->cfd;
}

/*
0040BAE0 func_0040BAE0
0048C0B0 st_psym_idn_offset
0048C888 st_iaux_copyty
*/
AUXU *st_paux_ifd_iaux(int ifd, int iaux) {
    if (st_pchdr->pcfd == NULL) {
        st_internal("routine: you didn't initialize with st_cuinit or st_readst\n");
    }
    if (ifd < 0 || iaux < 0 || ifd >= st_pchdr->cfd || iaux >= st_pchdr->pcfd[ifd].pfd->caux) {
        st_internal("st_paux_ifd_iaux: ifd (%d) or iaux (%d) out of range\n", ifd, iaux);
    }

    return &st_pchdr->pcfd[ifd].paux[iaux];
}

/*
00488434 st_extstradd
00488590 st_idn_dn
004886A8 st_idn_rndx
00488C8C st_fdadd
0048932C st_auxadd
00489458 st_pdadd
004895E4 st_lineadd
0048970C st_stradd
0048AE84 st_filebegin
0048B590 _sgi_st_blockbegin
0048B6E8 st_blockbegin
0048D0E0 st_readst
*/
void *st_malloc(void *ptr, int *size, int itemsize, int basesize) {
    void *result;

    if (*size == 0 || ptr == NULL || ptr == (void *)-1) {
        *size = basesize;
        if (basesize == 0) {
            result = malloc(1);
            if (result == NULL) {
                st_error("st_malloc: cannot allocate item of 1 byte with malloc(3)\n");
            }
        } else {
            result = malloc(*size * itemsize);
            if (result == NULL) {
                if (*size * itemsize != 0) {
                    st_error("st_malloc: cannot allocate item of %ld bytes with malloc(3)\n", *size * itemsize);
                }
            }
        }
    } else {
        *size *= 2;
        result = realloc(ptr, *size * itemsize);
        if (result == 0) {
            st_error("st_malloc: cannot grow item to %ld bytes with realloc(3)\n", *size * itemsize);
        }
    }
    return result;
}
