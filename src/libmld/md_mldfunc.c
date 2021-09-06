#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "libmld.h"

/*
00489CA0 st_symadd
00489F38 st_ifd_pcfd
00489FC4 st_pcfd_ifd
0048A06C st_psym_ifd_isym
0048A194 st_paux_iaux
0048A260 st_str_ifd_iss
0048A330 st_ppd_ifd_isym
0048A5E8 _md_st_str_iss
0048A86C _md_st_setfd
0048A954 st_extadd
0048AB3C st_pext_iext
0048ABB0 st_idn_index_fext
0048ACEC st_pdn_idn
*/
void _Noreturn _md_st_internal(const char *format, ...) {
    va_list arglist;

    fprintf(stderr, "%s: Internal: ", st_errname);
    va_start(arglist, format);
    vfprintf(stderr, format, arglist);
    va_end(arglist);
    fprintf(stderr, "\n");
    exit(1);
}

/*
0048A704 _md_st_malloc
0048A8E0 st_cuinit
*/
void _Noreturn _md_st_error(const char *format, ...) {
    va_list arglist;

    fprintf(stderr, "%s: Error: ", st_errname);
    va_start(arglist, format);
    vfprintf(stderr, format, arglist);
    va_end(arglist);
    fprintf(stderr, "\n");
    exit(1);
}

/* 
0048A260 st_str_ifd_iss
*/
char *_md_st_str_extiss(int index) {

    if ((index >= 0) && (index < st_pchdr->cbssext)) {
        return &st_pchdr->pssext[index];
    } else {
        return NULL;
    }
}

char *_md_st_str_iss(int iss) {
    if (st_pchdr->pcfd == NULL) {
        _md_st_internal("routine: you didn't initialize with st_cuinit or st_readst\n");
    }
    if (pcfdcur == NULL) {
        _md_st_internal("routine: no current routine, see fdadd or setfd\n");
    }

    if (pcfdcur->pfd->cbSs != 0 && iss < pcfdcur->pfd->cbSs) {
        return &pcfdcur->pss[iss];
    }
    return NULL;
}

int _md_st_iextmax(void) {
    return st_pchdr->cext;
}

/*
0048A954 st_extadd
0048ABB0 st_idn_index_fext
*/
int _md_st_currentifd(void) {
    if (pcfdcur == NULL) {
        return -1;
    } else {
        return st_ifd_pcfd(pcfdcur);
    }
}

/*
00489CA0 st_symadd
0048A954 st_extadd
0048ABB0 st_idn_index_fext
*/
void *_md_st_malloc(void *ptr, int *size, int itemsize, int basesize) {
    void *result;

    if (*size == 0 || ptr == NULL || ptr == (void *)-1) {
        *size = basesize;
        if (basesize == 0) {
            result = malloc(1);
            if (result == NULL) {
                _md_st_error("_md_st_malloc: cannot allocate item of 1 byte with malloc(3)\n");
            }
        } else {
            result = malloc(*size * itemsize);
            if (result == NULL) {
                if (*size * itemsize != 0) {
                    _md_st_error("_md_st_malloc: cannot allocate item of %ld bytes with malloc(3)\n", *size * itemsize);
                }
            }
        }
    } else {
        *size *= 2;
        result = realloc(ptr, *size * itemsize);
        if (result == NULL) {
            _md_st_error("_md_st_malloc: cannot grow item to %ld bytes with realloc(3)\n", *size * itemsize);
        }
    }
    return result;
}

int _md_st_ifdmax(void) {
    return st_pchdr->cfd;
}

void _md_st_setfd(int fd) {
    if (st_pchdr->pcfd == NULL) {
        _md_st_internal("routine: you didn't initialize with st_cuinit or st_readst\n");
    } else {
        pcfdcur = &st_pchdr->pcfd[fd];
    }
}
