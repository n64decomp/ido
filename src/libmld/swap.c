#include "libmld.h"

/*
0048D0E0 st_readst
*/
void swap_hdr(HDRR *phdr, int hostsex) {
    phdr->magic         = swap_half(phdr->magic);        
    phdr->vstamp        = swap_half(phdr->vstamp);       
    phdr->ilineMax      = swap_word(phdr->ilineMax);
    phdr->cbLine        = swap_word(phdr->cbLine);
    phdr->cbLineOffset  = swap_word(phdr->cbLineOffset);
    phdr->idnMax        = swap_word(phdr->idnMax);
    phdr->cbDnOffset    = swap_word(phdr->cbDnOffset);
    phdr->ipdMax        = swap_word(phdr->ipdMax);
    phdr->cbPdOffset    = swap_word(phdr->cbPdOffset);
    phdr->isymMax       = swap_word(phdr->isymMax);
    phdr->cbSymOffset   = swap_word(phdr->cbSymOffset);
    phdr->ioptMax       = swap_word(phdr->ioptMax);
    phdr->cbOptOffset   = swap_word(phdr->cbOptOffset);
    phdr->iauxMax       = swap_word(phdr->iauxMax);
    phdr->cbAuxOffset   = swap_word(phdr->cbAuxOffset);
    phdr->issMax        = swap_word(phdr->issMax);
    phdr->cbSsOffset    = swap_word(phdr->cbSsOffset);
    phdr->issExtMax     = swap_word(phdr->issExtMax);
    phdr->cbSsExtOffset = swap_word(phdr->cbSsExtOffset);
    phdr->ifdMax        = swap_word(phdr->ifdMax);
    phdr->cbFdOffset    = swap_word(phdr->cbFdOffset);
    phdr->crfd          = swap_word(phdr->crfd);
    phdr->cbRfdOffset   = swap_word(phdr->cbRfdOffset);
    phdr->iextMax       = swap_word(phdr->iextMax);
    phdr->cbExtOffset   = swap_word(phdr->cbExtOffset);
}

/*
0048D0E0 st_readst
*/
void swap_fi(pFIT pfi, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        pfi[i] = swap_word(pfi[i]);
    }
}

/*
0048D0E0 st_readst
*/
void swap_pd(PDR *pdr, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        pdr[i].adr          = swap_word(pdr[i].adr);
        pdr[i].isym         = swap_word(pdr[i].isym);
        pdr[i].iline        = swap_word(pdr[i].iline);
        pdr[i].regmask      = swap_word(pdr[i].regmask);
        pdr[i].regoffset    = swap_word(pdr[i].regoffset);
        pdr[i].iopt         = swap_word(pdr[i].iopt);
        pdr[i].fregmask     = swap_word(pdr[i].fregmask);
        pdr[i].fregoffset   = swap_word(pdr[i].fregoffset);
        pdr[i].frameoffset  = swap_word(pdr[i].frameoffset);
        pdr[i].framereg     = swap_half(pdr[i].framereg);
        pdr[i].pcreg        = swap_half(pdr[i].pcreg);
        pdr[i].lnLow        = swap_word(pdr[i].lnLow);
        pdr[i].lnHigh       = swap_word(pdr[i].lnHigh);
        pdr[i].cbLineOffset = swap_word(pdr[i].cbLineOffset);
    }
}

/*
0048D0E0 st_readst
*/
void swap_dn(DNR *dn, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        dn[i].rfd   = swap_word(dn[i].rfd);
        dn[i].index = swap_word(dn[i].index);
    }
}
