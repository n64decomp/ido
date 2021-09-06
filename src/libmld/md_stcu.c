#include <stdlib.h> /* calloc */
#include <string.h> /* bzero */
#include "libmld.h"

/*
00488120 st_setchdr
00488138 st_currentpchdr
00488150 st_free
00488434 st_extstradd
00488550 st_str_extiss
00488590 st_idn_dn
004886A8 st_idn_rndx
004887CC st_rndx_idn
004888DC st_setidn
00488984 st_pext_dn
00488A2C st_iextmax
00488C00 st_ifdmax
00488C1C st_setfd
00488C8C st_fdadd
0048932C st_auxadd
00489458 st_pdadd
004895E4 st_lineadd
0048970C st_stradd
004898C0 st_paux_ifd_iaux
004899B0 st_pline_ifd_iline
00489AA0 st_str_iss
00489CA0 st_symadd
00489F38 st_ifd_pcfd
00489FC4 st_pcfd_ifd
0048A06C st_psym_ifd_isym
0048A194 st_paux_iaux
0048A260 st_str_ifd_iss
0048A330 st_ppd_ifd_isym
0048A5A8 _md_st_str_extiss
0048A5E8 _md_st_str_iss
0048A698 _md_st_iextmax
0048A850 _md_st_ifdmax
0048A86C _md_st_setfd
0048A8E0 st_cuinit
0048A954 st_extadd
0048AB3C st_pext_iext
0048ABB0 st_idn_index_fext
0048ACEC st_pdn_idn
0048D0E0 st_readst
0048E1D8 st_writest
*/
CHDRR *st_pchdr;

CHDRR *st_cuinit(void) {
    st_pchdr = calloc(sizeof(CHDRR), 1);
    if (st_pchdr == NULL) {
        _md_st_error("st_cuinit: cannot allocate current chdr\n");
    }
    st_pchdr->cdn = 2;
    return st_pchdr;
}

/*
0040BCA0 path_blockno
0048A06C st_psym_ifd_isym
0048BA18 st_procend
0048BC7C st_procbegin
0048C0B0 st_psym_idn_offset
0048C2E0 st_fixextindex
0048C394 st_fixextsc
0048C410 st_pdadd_idn
0048C494 st_fixiss
*/
EXTR *st_pext_iext(int index) {
    if (index < 0 || st_pchdr->cext < index) {
        _md_st_internal("st_pext_iext: index out of range (%d)\n", index);
    }

    return &st_pchdr->pext[index];
}

/*
0048AE84 st_filebegin
0048B83C st_blockend
0048BA18 st_procend
*/
int st_idn_index_fext(int index, int fext) {
    DNR dn;

    if (st_pchdr == NULL) {
        _md_st_internal("st_idn_index_fext: you didn't initialize with cuinit or readst\n");
    }

    if (st_pchdr->cdn >= st_pchdr->cdnMax) {
        st_pchdr->pdn = _md_st_malloc(st_pchdr->pdn, &st_pchdr->cdnMax, sizeof(DNR), 16 * sizeof(DNR));
    }

    if (st_pchdr->cdnMax == 0) {
        bzero(st_pchdr->pdn, 2 * sizeof(DNR));
    }

    dn.index = index;
    if (fext != 0) {
        dn.rfd = ST_EXTIFD;
    } else {
        dn.rfd = _md_st_currentifd();
    }

    st_pchdr->pdn[st_pchdr->cdn].rfd = dn.rfd;
    st_pchdr->pdn[st_pchdr->cdn].index = dn.index;
    return st_pchdr->cdn++;
}

/*
0040BCA0 path_blockno
0048B2F0 st_fileend
0048BA18 st_procend
0048BC7C st_procbegin
0048BE8C st_sym_idn
0048BF74 st_str_idn
0048C008 st_fglobal_idn
0048C0B0 st_psym_idn_offset
0048C2E0 st_fixextindex
0048C394 st_fixextsc
0048C410 st_pdadd_idn
0048C494 st_fixiss
0048C520 st_changedn
0048CFAC st_auxrndxadd_idn
*/
DNR* st_pdn_idn(int idn) {
    if ((idn < 0) || (st_pchdr->cdn < idn)) {
        _md_st_internal("st_pdn_idn: idn (%d) less than 0 or greater than max (%d)\n", idn, st_pchdr->cdn);
    }
    return &st_pchdr->pdn[idn];
}
