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
void swap_fd(FDR *pfd, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        pfd[i].adr                = swap_word(pfd[i].adr);
        pfd[i].rss                = swap_word(pfd[i].rss);
        pfd[i].issBase            = swap_word(pfd[i].issBase);
        pfd[i].cbSs               = swap_word(pfd[i].cbSs);
        pfd[i].isymBase           = swap_word(pfd[i].isymBase);
        pfd[i].csym               = swap_word(pfd[i].csym);
        pfd[i].ilineBase          = swap_word(pfd[i].ilineBase);
        pfd[i].cline              = swap_word(pfd[i].cline);
        pfd[i].ioptBase           = swap_word(pfd[i].ioptBase);
        pfd[i].copt               = swap_word(pfd[i].copt);
        pfd[i].ipdFirst           = swap_half(pfd[i].ipdFirst);
        pfd[i].cpd                = swap_half(pfd[i].cpd);
        pfd[i].iauxBase           = swap_word(pfd[i].iauxBase);
        pfd[i].caux               = swap_word(pfd[i].caux);
        pfd[i].rfdBase            = swap_word(pfd[i].rfdBase);
        pfd[i].crfd               = swap_word(pfd[i].crfd);
        *((int*)&pfd[i].crfd + 1) = swap_word(*((int*)&pfd[i].crfd + 1));
        pfd[i].cbLineOffset       = swap_word(pfd[i].cbLineOffset);
        pfd[i].cbLine             = swap_word(pfd[i].cbLine);
    }
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
void swap_sym(SYMR *psym, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        psym[i].iss = swap_word(psym[i].iss);
        psym[i].value = swap_word(psym[i].value);
        // swap bitfields
        *((int*)&psym[i].value + 1) = swap_word(*((int*)&psym[i].value + 1));
    }
}

/*
0048D0E0 st_readst
*/
void swap_ext(EXTR *pext, int count, int destsex) {
    for (int i = 0; i < count; i++) {
        // swap bitfields
        *((short*)&pext[i]) = swap_half(*((short*)&pext[i]));
        pext[i].ifd = swap_half(pext[i].ifd);
        swap_sym(&pext[i].asym, 1, destsex);
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

/*
0048D0E0 st_readst
*/
void swap_opt(OPTR *popt, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        // swap bitfields
        *((int*)&popt[i]) = swap_word(*((int*)&popt[i]));
        *((int*)&popt[i] + 1) = swap_word(*((int*)&popt[i]) + 1);
        popt[i].offset = swap_word(popt[i].offset);
    }
}
