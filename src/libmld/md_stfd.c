#include "libmld.h"
/*
00488BB0 st_currentifd
00488C1C st_setfd
00488C8C st_fdadd
0048932C st_auxadd
00489458 st_pdadd
004895E4 st_lineadd
0048970C st_stradd
00489AA0 st_str_iss
00489CA0 st_symadd
00489F38 st_ifd_pcfd
0048A194 st_paux_iaux
0048A5E8 _md_st_str_iss
0048A6B4 _md_st_currentifd
0048A86C _md_st_setfd
*/
CFDR* pcfdcur;

int st_ifd_pcfd(CFDR *pcfd1) {
    if (st_pchdr->pcfd == 0) {
        _md_st_internal("routine: you didn't initialize with st_cuinit or st_readst\n");
    }
    if (pcfdcur == 0) {
        _md_st_internal("routine: no current routine, see fdadd or setfd\n");
    }
    return (pcfd1 - st_pchdr->pcfd) >> 6;
}

/*
0040BCA0 path_blockno
0048A260 st_str_ifd_iss
0048A330 st_ppd_ifd_isym
0048A954 st_extadd
0048B120 st_endallfiles
0048B2F0 st_fileend
0048BA18 st_procend
0048BC7C st_procbegin
0048D0E0 st_readst
0048E1D8 st_writest
*/
CFDR *st_pcfd_ifd(int ifd) {
    if (st_pchdr->pcfd == NULL) {
        _md_st_internal("routine: you didn't initialize with st_cuinit or st_readst\n", ifd);
    }
    if (ifd < 0 || ifd >= st_pchdr->cfd) {
        _md_st_internal("st_pcfd_ifd: ifd (%d) out of range\n", ifd);
    }
    return &st_pchdr->pcfd[ifd];
}

/*
0040BAE0 func_0040BAE0
0040BCA0 path_blockno
0048B120 st_endallfiles
0048B2F0 st_fileend
0048B83C st_blockend
0048BA18 st_procend
0048BE8C st_sym_idn
0048BF74 st_str_idn
0048C008 st_fglobal_idn
0048C0B0 st_psym_idn_offset
0048C494 st_fixiss
*/
SYMR *st_psym_ifd_isym(int ifd, int isym) {

    if (st_pchdr->pcfd == NULL) {
        _md_st_internal("routine: you didn't initialize with st_cuinit or st_readst\n");
    }
    if (ifd == ST_EXTIFD) {
        return &st_pext_iext(isym)->asym;
    }

    if (ifd < 0 || isym < 0 || ifd >= st_pchdr->cfd || isym >= st_pchdr->pcfd[ifd].pfd->csym) {
        _md_st_internal("st_psym_ifd_isym: ifd (%d) or isym (%d) out of range\n", ifd, isym);
    }
    return &st_pchdr->pcfd[ifd].psym[isym];
}

/*
0040BAE0 func_0040BAE0
0040BCA0 path_blockno
0048AE84 st_filebegin
0048BE8C st_sym_idn
0048BF74 st_str_idn
0048C56C st_file_idn
*/
char *st_str_ifd_iss(int ifd, int iss) {
    CFDR *cfd;

    if (st_pchdr->pcfd == NULL) {
        _md_st_internal("routine: you didn't initialize with st_cuinit or st_readst\n");
    }

    if (ifd == ST_EXTIFD) {
        return _md_st_str_extiss(iss);
    }

    cfd = st_pcfd_ifd(ifd);
    if (cfd->pfd->cbSs != 0 && iss < cfd->pfd->cbSs) {
        return &cfd->pss[iss];
    }
    return NULL;
}
