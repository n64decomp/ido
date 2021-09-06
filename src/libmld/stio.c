#include "common.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#include "libmld.h"

// XXX: Needs to be changed for little endian
static short stmagic = 0x7009;
const char *msg_werr = "cannot write pfield";
const char *msg_err = "cannot write cur table\n";

/*
00434720 processargs
*/
int st_readbinary(char *filename, char how) {
    int fn;
    int result;

    fn = open(filename, O_RDONLY, 0);
    if (fn < 0) {
        return -2;
    }

    result = st_readst(fn, how, 0, NULL, -1);
    close(fn);
    return result;
}

static int st_read(int fn, int fsymorder, int fileOffset, void *ptr, int size);

/*
0048D050 st_readbinary
*/
int st_readst(int fn, char how, int filebase, CHDRR *pchdr, int flags) {
    HDRR spC0;
    int size; // spA0
    char *lineData = NULL; // sp9C
    char *linePtr;
    int sp68;
    int sp64;
    int sp60;
    int sp5C;
    int sp58;
    int sp54;
    int sp50;
    int sp4C;
    int sp48;
    int sp44;
    int sp40;
    CFDR *cfdr;
    int lineMax;
    int error;
    int append;
    int fsymorder;
    int proc;
    int i; // s2
    int phi_a0_2;
    int phi_ra;
    off_t seek_offset;
    char a3;
    int iline;
    int p;
    int lineNum;

    if (how == 'r') {
        append = false;
    } else {
        append = true;
    }
    if (append) {
        flags = -1;
    }

    if (pchdr == NULL) {
        st_pchdr = calloc(sizeof (CHDRR), 1);
    } else {
        st_pchdr = pchdr;
    }

    flags &= ~st_pchdr->flags;
    if (pchdr == NULL || (flags & ST_PHEADER)) {
        seek_offset = lseek(fn, 0, SEEK_CUR);
        flags |= (ST_PFDS | ST_PHEADER);
        if (read(fn, &spC0, sizeof (HDRR)) != sizeof (HDRR)) {
            return -3;
        }

        if ((spC0.magic != 0x7009) && (spC0.magic != 0x7109)) {
            if ((spC0.magic == 0x0970) || (spC0.magic == 0x0971)) {
                swap_hdr(&spC0, gethostsex());
                st_pchdr->fswap = true;
            } else {
                st_error("bad magic in hdr. expected 0x%x, got 0x%x\n", 0x7009, spC0.magic);
            }
        }
        // 0x100 + 30 = 1.30
        if (spC0.vstamp < 0x11E && spC0.idnMax != 0) {
            st_internal("st_readst: dense number incompatible from versions less than 1.30, please recompile from scratch and use compatible components\n");
        }
        fsymorder = 0;
        if (flags == -1) {
            fsymorder = ldfsymorder(&spC0, seek_offset - filebase);
        }
        st_pchdr->hdr = spC0;
    } else {
        spC0 = st_pchdr->hdr;
        fsymorder = 0;
    }

    sp68 = flags & ST_PSYMS;
    if (sp68) {
        if (st_pchdr->psym == NULL) {
            st_pchdr->psym = st_malloc(st_pchdr->psym, &size, sizeof (SYMR), spC0.isymMax);
        }
    }

    sp64 = flags & ST_PAUXS;
    if (sp64) {
        if (st_pchdr->paux == NULL) {
            st_pchdr->paux = st_malloc(st_pchdr->paux, &size, sizeof (AUXU), spC0.iauxMax);
        }
    }

    sp60 = flags & ST_PSSS;
    if (sp60) {
        if (st_pchdr->pss == NULL) {
            st_pchdr->pss = st_malloc(st_pchdr->pss, &size, sizeof (char), spC0.issMax);
        }
    }

    sp5C = flags & ST_PLINES;
    if (sp5C) {
        lineData = st_malloc(NULL, &size, 1, spC0.cbLine);
    }

    if (sp5C) {
        if (st_pchdr->pline == NULL) {
            st_pchdr->pline = st_malloc(st_pchdr->pline, &size, sizeof (LINER), spC0.ilineMax);
        }
    }

    sp58 = flags & ST_POPTS;
    if (sp58) {
        if (st_pchdr->popt == NULL) {
            st_pchdr->popt = st_malloc(st_pchdr->popt, &size, sizeof (OPTR), spC0.ioptMax);
        }
    }

    sp54 = flags & ST_PRFDS;
    if (sp54) {
        if (st_pchdr->prfd == NULL) {
            st_pchdr->prfd = st_malloc(st_pchdr->prfd, &size, sizeof (RFDT), spC0.crfd);
        }
    }

    sp50 = flags & ST_PPDS;
    if (sp50) {
        if (st_pchdr->ppd == NULL) {
            st_pchdr->ppd = st_malloc(st_pchdr->ppd, &size, sizeof (PDR), spC0.ipdMax);
        }
    }

    sp4C = flags & ST_PEXTS;
    if (sp4C) {
        if (st_pchdr->pext == NULL) {
            st_pchdr->pext = st_malloc(st_pchdr->pext, &size, sizeof (EXTR), spC0.iextMax + 1);
        }
    }

    sp48 = flags & ST_PSSEXTS;
    if (sp48) {
        if (st_pchdr->pssext == NULL) {
            st_pchdr->pssext = st_malloc(st_pchdr->pssext, &size, sizeof (char), spC0.issExtMax + 8);
        }
    }

    sp44 = flags & ST_PDNS;
    if (sp44) {
        if (st_pchdr->pdn == NULL) {
            st_pchdr->pdn = st_malloc(st_pchdr->pdn, &size, sizeof (DNR), spC0.idnMax);
        }
    }

    sp40 = flags & ST_PFDS;
    if (sp40) {
        if (st_pchdr->pfd == NULL) {
            st_pchdr->pfd = st_malloc(st_pchdr->pfd, &size, sizeof (FDR), spC0.ifdMax);
        }
    }

    if (sp40) {
        if (st_pchdr->pcfd == NULL) {
            if (sp40 && (st_pchdr->pcfd == NULL)) {
                st_pchdr->pcfd = st_malloc(st_pchdr->pcfd, &size, sizeof (CFDR), spC0.ifdMax);
            }
            bzero(st_pchdr->pcfd, spC0.ifdMax * sizeof (CFDR));
        }
    }
    if (sp4C) {
        st_pchdr->cextMax = spC0.iextMax;
        st_pchdr->cext = st_pchdr->cextMax;
    }
    if (sp48) {
        st_pchdr->cbssextMax = spC0.issExtMax;
        st_pchdr->cbssext = st_pchdr->cbssextMax;
    }
    if (sp44) {
        st_pchdr->cdnMax = spC0.idnMax;
        st_pchdr->cdn = st_pchdr->cdnMax;
    }
    if (sp40) {
        st_pchdr->cfdMax = spC0.ifdMax;
        st_pchdr->cfd = st_pchdr->cfdMax;
    }
    if (sp5C && (error = st_read(fn, fsymorder, spC0.cbLineOffset + filebase, lineData, spC0.cbLine))) {
        return error;
    }
    if (sp50 && (error = st_read(fn, fsymorder, spC0.cbPdOffset + filebase, st_pchdr->ppd, spC0.ipdMax * sizeof (PDR)))) {
        return error;
    }
    if (sp68 && (error = st_read(fn, fsymorder, spC0.cbSymOffset + filebase, st_pchdr->psym, spC0.isymMax * sizeof (SYMR)))) {
        return error;
    }
    if (sp58 && (error = st_read(fn, fsymorder, spC0.cbOptOffset + filebase, st_pchdr->popt, spC0.ioptMax * sizeof (OPTR)))) {
        return error;
    }
    if (sp64 && (error = st_read(fn, fsymorder, spC0.cbAuxOffset + filebase, st_pchdr->paux, spC0.iauxMax * sizeof (AUXU)))) {
        return error;
    }
    if (sp60 && (error = st_read(fn, fsymorder, spC0.cbSsOffset + filebase, st_pchdr->pss, spC0.issMax))) {
        return error;
    }
    if (sp48 && (error = st_read(fn, fsymorder, spC0.cbSsExtOffset + filebase, st_pchdr->pssext, spC0.issExtMax))) {
        return error;
    }
    if (sp40 && (error = st_read(fn, fsymorder, spC0.cbFdOffset + filebase, st_pchdr->pfd, spC0.ifdMax * sizeof (FDR)))) {
        return error;
    }
    if (sp54 && (error = st_read(fn, fsymorder, spC0.cbRfdOffset + filebase, st_pchdr->prfd, spC0.crfd * sizeof (RFDT)))) {
        return error;
    }
    if (sp4C && (error = st_read(fn, fsymorder, spC0.cbExtOffset + filebase, st_pchdr->pext, spC0.iextMax * sizeof (EXTR)))) {
        return error;
    }
    if (sp44 && (error = st_read(fn, fsymorder, spC0.cbDnOffset + filebase, st_pchdr->pdn, spC0.idnMax * sizeof (DNR)))) {
        return error;
    }

    if (st_pchdr->fswap) {
        if (sp50) {
            swap_pd(st_pchdr->ppd, spC0.ipdMax, gethostsex());
        }
        if (sp68) {
            //swap_sym(st_pchdr->psym, spC0.isymMax, gethostsex());
        }
        if (sp58) {
            //swap_opt(st_pchdr->popt, spC0.ioptMax, gethostsex());
        }
        if (sp40) {
            //swap_fd(st_pchdr->pfd, spC0.ifdMax, gethostsex());
        }
        if (sp54) {
            swap_fi(st_pchdr->prfd, spC0.crfd, gethostsex());
        }
        if (sp4C) {
            //swap_ext(st_pchdr->pext, spC0.iextMax, gethostsex());
        }
        if (sp44) {
            swap_dn(st_pchdr->pdn, spC0.idnMax, gethostsex());
        }
    }

    proc = 0;
    for (i = 0; i < spC0.ifdMax; i++) {
        cfdr = st_pcfd_ifd(i);
        cfdr->pfd = &st_pchdr->pfd[i];
        if (sp68 && cfdr->pfd->csym > 0) {
            cfdr->psym = &st_pchdr->psym[cfdr->pfd->isymBase];
            cfdr->freadin |= ST_PSYMS;
        }
        if (sp64) {
            if (cfdr->pfd->caux > 0) {
                cfdr->paux = &st_pchdr->paux[cfdr->pfd->iauxBase];
                cfdr->freadin |= ST_PAUXS;
            }
        }
        if (sp58) {
            if (cfdr->pfd->copt > 0) {
                cfdr->popt = &st_pchdr->popt[cfdr->pfd->ioptBase];
                cfdr->freadin |= ST_POPTS;
            }
        }
        if (sp54) {
            if (cfdr->pfd->crfd > 0) {
                cfdr->prfd = &st_pchdr->prfd[cfdr->pfd->rfdBase];
                cfdr->freadin |= ST_PRFDS;
            }
        }
        if (sp60) {
            if (cfdr->pfd->cbSs > 0) {
                cfdr->pss = &st_pchdr->pss[cfdr->pfd->issBase];
                cfdr->freadin |= ST_PSSS;
            }
        }
        if (sp50) {
            if (cfdr->pfd->cpd > 0) {
                cfdr->ppd = &st_pchdr->ppd[proc];
                cfdr->freadin |= ST_PPDS;
                proc += cfdr->pfd->cpd;
            }
        }
        if (sp5C) {
            if (cfdr->pfd->cline > 0) {
                cfdr->pline = &st_pchdr->pline[cfdr->pfd->ilineBase];
                cfdr->freadin |= ST_PLINES;
            }
        }
    }

    if (sp5C) {
        i = spC0.ifdMax - 1;
        while (i >= 0) {
            cfdr = st_pcfd_ifd(i);
            i--;
            if (cfdr->pfd->cline != 0) {
                phi_ra = 0;
                linePtr = &lineData[cfdr->pfd->cbLineOffset];
                while (phi_ra < cfdr->pfd->cpd) {
                    if (cfdr->ppd[phi_ra].iline != -1 && cfdr->ppd[phi_ra].lnHigh != -1 && cfdr->ppd[phi_ra].cbLineOffset != -1) {
                        // nested procedures, I guess
                        lineMax = cfdr->pfd->cline;
                        p = 0;
                        while (p < cfdr->pfd->cpd) {
                            if (cfdr->ppd[p].iline > cfdr->ppd[phi_ra].iline &&
                                    cfdr->ppd[p].lnLow != -1 && cfdr->ppd[p].lnHigh != -1 &&
                                    cfdr->ppd[p].iline < lineMax) {
                                lineMax = cfdr->ppd[p].iline;
                            }
                            p++;
                        }

                        lineNum = cfdr->ppd[phi_ra].lnHigh;
                        iline = cfdr->ppd[phi_ra].iline;
                        if (iline < lineMax) {
                            phi_a0_2 = linePtr[0] & 0xF;
                            a3 = linePtr[0] >> 4;
                            linePtr++;
                            if (a3 == -8) {
                                lineNum += (short)((linePtr[1] & 0xFF) | (linePtr[0] << 8));
                                linePtr += 2;
                            } else {
                                lineNum += a3;
                            }

                            while (phi_a0_2 >= 0) {
                                cfdr->pline[iline] = lineNum;
                                iline++;
                                phi_a0_2--;
                            }
                        }
                    }
                    phi_ra++;
                }
            }
        }
    }

    st_pchdr->flags |= flags;
    if (lineData != 0) {
        free(lineData);
    }
    return 0;
}

/*
0048D0E0 st_readst
*/
static int st_read(int fn, int fsymorder, int fileOffset, void *ptr, int size) {
    if (size == 0) {
        return 0;
    }

    if (fsymorder == 0 && lseek(fn, fileOffset, SEEK_SET) != fileOffset) {
        st_warning("st_read: error seeking\n");
        return -5;
    }
    if (read(fn, ptr, size) != size) {
        st_warning("st_read: error reading\n");
        return -6;
    }
    return 0;
}

/*
00439B60 write_updated_st
*/
void st_writebinary(char *filename, int flags) {
    int fn;

    fn = open(filename, O_CREAT | O_RDWR, 0666);
    if (fn < 0) {
        st_error("cannot open symbol table file %s\n", filename);
    }
    st_writest(fn, flags);
    close(fn);
}

/*
0048E148 st_writebinary
*/
void st_writest(int fn, int flags) {
    static char pad[16];
    pCFDR cfd; // t1, sp1D4
    FDR fdr; //sp18C;
    pFDR pfd; // sp188
    HDRR hdr; //sp128;
    int sp124;
    int sp120; // t3
    int fileOffset; // sp11C
    int ifd; // sp118
    int ifdmax; // sp114
    int startOffset; // sp110
    FILE *out; // sp10C
    unsigned int sp108; // t4
    pPDR spFC;
    char linebuf[128]; // 0x80
    char *linedata;
    unsigned int proc;
    int lineMax;
    pLINER phi_s3;
    short phi_v1_3;
    char phi_s2;
    int phi_s4;
    int phi_s5;

    sp120 = 0;
    bzero(&fdr, sizeof(FDR));
    bzero(&hdr, sizeof(HDRR));
    ifdmax = st_ifdmax();
    startOffset = lseek(fn, 0, SEEK_CUR);
    fileOffset = lseek(fn, sizeof(HDRR), SEEK_CUR);
    st_pchdr->cfd = ifdmax;
    out = fdopen(dup(fn), "w");
    if (out == 0) {
        st_error("st_writest: cannot write to file number %d\n", fn);
    }
    if (flags & ST_PLINES) {
        for (ifd = 0; ifd < ifdmax; ifd++) {
            sp124 = 0;
            cfd = st_pcfd_ifd(ifd);
            pfd = cfd->pfd;
            if (pfd->cline != 0 && cfd->pline != 0) {
                pfd->ilineBase = hdr.ilineMax;
                hdr.ilineMax += pfd->cline;
                pfd->cbLineOffset = sp120;
                sp108 = 0;
                for (sp108 = 0; sp108 < pfd->cpd; sp108++) {
                    spFC = &cfd->ppd[sp108];
                    if (spFC->iline != ilineNil && spFC->lnLow != ilineNil && spFC->lnHigh != ilineNil) {
                        spFC->cbLineOffset = (sp120 - pfd->cbLineOffset);
                        lineMax = pfd->cline;
                        for (proc = 0; proc < pfd->cpd; proc++) {
                            if (cfd->ppd[proc].iline > spFC->iline &&
                                    cfd->ppd[proc].lnLow != ilineNil && cfd->ppd[proc].lnHigh != ilineNil &&
                                    cfd->ppd[proc].iline < lineMax) {
                                lineMax = cfd->ppd[proc].iline;
                            }
                        }

                        if (lineMax > 0) {
                            phi_s2 = -1;
                            phi_s4 = 0;
                            if (spFC->iline >= 0) {
                                phi_s3 = &cfd->pline[spFC->iline];
                                linedata = linebuf;
                                phi_s5 = spFC->lnLow;
                                while (phi_s3 <= &cfd->pline[lineMax]) {
                                    if (phi_s3 == &cfd->pline[lineMax]) {
                                        phi_v1_3 = 1;
                                    } else {
                                        phi_v1_3 = (*phi_s3 == 0 ? spFC->lnLow : *phi_s3) - phi_s5;
                                    }

                                    if (phi_v1_3 != 0 || phi_s2 == 8) {
                                        phi_s5 += phi_v1_3;
                                        if (phi_s2 != -1 && phi_s4 >= -7 && phi_s4 < 8) {
                                            linedata[0] = (phi_s4 << 4) | phi_s2;
                                            linedata++;
                                        } else if (phi_s2 != -1) {
                                            linedata[0] = phi_s2;
                                            linedata[0] |= 0x80;
                                            linedata[1] = phi_s4 >> 8;
                                            linedata[2] = phi_s4;
                                            linedata += 3;
                                        }
                                        phi_s2 = 0;
                                        phi_s4 = phi_v1_3;
                                    } else {
                                        phi_s2 += 1;
                                    }

                                    if (linedata + 3 >= linebuf + sizeof(linebuf)  || (phi_s3 == &cfd->pline[lineMax] && linedata > linebuf)) {
                                        fwrite(linebuf, linedata - linebuf, 1U, out);
                                        sp124 += linedata - linebuf;
                                        sp120 += linedata - linebuf;
                                        linedata = linebuf;
                                    }
                                    phi_s3++;
                                }
                            }
                        }
                    }
                }
                pfd->cbLine = sp124;
            }
        }

        if (hdr.ilineMax != 0) {
            if ((-sp120 & 3) != 0) {
                if (fwrite(pad, 1, -sp120 & 3, out) != (-sp120 & 3)) {
                    st_error("cannot write round bytes for lines\n");
                }
                sp120 += 3;
                sp120 &= -4;
            }
            hdr.cbLine = sp120;
            hdr.cbLineOffset = fileOffset;
        }
    }

    if (flags & ST_PPDS) {
        fileOffset += sp120;
        sp120 = 0;
        for (ifd = 0; ifd < ifdmax; ifd++) {
            cfd = st_pcfd_ifd(ifd);
            pfd = cfd->pfd;
            pfd->ipdFirst = fdr.ipdFirst + fdr.cpd;
            sp120 += pfd->cpd * sizeof(PDR);
            if (pfd->cpd != 0) {
                if (fwrite(cfd->ppd, sizeof(PDR), pfd->cpd, out) != pfd->cpd) {
                    st_error("cannot write pfield");
                }
            }
            fdr.ipdFirst += fdr.cpd;
            hdr.ipdMax += pfd->cpd;
            fdr.cpd = pfd->cpd;
        }
        if (hdr.ipdMax != 0) {
            hdr.cbPdOffset = fileOffset;
        }
    }

    if (flags & ST_PSYMS) {
        fileOffset += sp120;
        sp120 = 0;
        for (ifd = 0; ifd < ifdmax; ifd++) {
            cfd = st_pcfd_ifd(ifd);
            pfd = cfd->pfd;
            pfd->isymBase = fdr.isymBase + fdr.csym;
            sp120 += pfd->csym * sizeof(SYMR);
            if (pfd->csym != 0) {
                if (fwrite(cfd->psym, sizeof(SYMR), pfd->csym, out) != pfd->csym) {
                    st_error("cannot write pfield");
                }
            }
            fdr.isymBase += fdr.csym;
            hdr.isymMax += pfd->csym;
            fdr.csym = pfd->csym;
        }
        if (hdr.isymMax != 0) {
            hdr.cbSymOffset = fileOffset;
        }
    }

    if (flags & ST_POPTS) {
        fileOffset += sp120;
        sp120 = 0;
        for (ifd = 0; ifd < ifdmax; ifd++) {
            cfd = st_pcfd_ifd(ifd);
            pfd = cfd->pfd;
            pfd->ioptBase = fdr.ioptBase + fdr.copt;
            sp120 += pfd->copt * sizeof(OPTR);
            if (pfd->copt != 0) {
                if (fwrite(cfd->popt, sizeof(OPTR), pfd->copt, out) != pfd->copt) {
                    st_error("cannot write pfield");
                }
            }
            fdr.ioptBase += fdr.copt;
            hdr.ioptMax += pfd->copt;
            fdr.copt = pfd->copt;
        }
        if (hdr.ioptMax != 0) {
            hdr.cbOptOffset = fileOffset;
        }
    }
    if (flags & ST_PAUXS) {
        fileOffset += sp120;
        sp120 = 0;
        for (ifd = 0; ifd < ifdmax; ifd++) {
            cfd = st_pcfd_ifd(ifd);
            pfd = cfd->pfd;
            pfd->iauxBase = fdr.iauxBase + fdr.caux;
            sp120 += pfd->caux * 4;
            if (pfd->caux != 0) {
                if (fwrite(cfd->paux, sizeof (AUXU), pfd->caux, out) != pfd->caux) {
                    st_error("cannot write pfield");
                }
            }
            fdr.iauxBase += fdr.caux;
            hdr.iauxMax += pfd->caux;
            fdr.caux = pfd->caux;
        }
        if (hdr.iauxMax != 0) {
            hdr.cbAuxOffset = fileOffset;
        }
    }
    if (flags & ST_PSSS) {
        fileOffset += sp120;
        sp120 = 0;
        for (ifd = 0; ifd < ifdmax; ifd++) {
            cfd = st_pcfd_ifd(ifd);
            pfd = cfd->pfd;
            pfd->issBase = fdr.issBase + fdr.cbSs;
            sp120 += pfd->cbSs;
            if (pfd->cbSs != 0) {
                if (fwrite(cfd->pss, 1, pfd->cbSs, out) != pfd->cbSs) {
                    st_error("cannot write pfield");
                }
            }
            fdr.issBase += fdr.cbSs;
            hdr.issMax += pfd->cbSs;
            fdr.cbSs = pfd->cbSs;
        }
        if ((-sp120 & 3) != 0) {
            if (fwrite(pad, 1, -sp120 & 3, out) != (-sp120 & 3)) {
                st_error("cannot write round bytes for strings\n");
            }
            sp120 += 3;
            sp120 &= -4;
        }
        hdr.issMax = sp120;
        if (sp120 != 0) {
            hdr.cbSsOffset = fileOffset;
        }
    }

    if (flags & ST_PSSEXTS) {
        fileOffset += sp120;
        sp120 = 0;
        hdr.issExtMax = st_pchdr->cbssext;
        if (hdr.issExtMax != 0) {
            sp120 = st_pchdr->cbssext;
            hdr.cbSsExtOffset = fileOffset;
            if (st_pchdr->cbssext != 0) {
                if (fwrite(st_pchdr->pssext, sizeof(char), st_pchdr->cbssext, out) != st_pchdr->cbssext) {
                    st_error("cannot write cur table\n");
                }
            }
        }

        if ((-sp120 & 3) != 0) {
            if (fwrite(pad, 1, -sp120 & 3, out) != (-sp120 & 3)) {
                st_error("cannot write round bytes for strings\n");
            }
            sp120 += 3;
            sp120 &= -4;
        }
        hdr.issExtMax = sp120;
    }

    if (flags & ST_PFDS) {
        hdr.ifdMax = st_pchdr->cfd;
        fileOffset += sp120;
        sp120 = 0;
        if (hdr.ifdMax != 0) {
            sp120 = st_pchdr->cfd * sizeof(FDR);
            hdr.cbFdOffset = fileOffset;
            if (st_pchdr->cfd != 0) {
                if (fwrite(st_pchdr->pfd, sizeof(FDR), st_pchdr->cfd, out) != st_pchdr->cfd) {
                    st_error("cannot write cur table\n");
                }
            }
        }
    }

    if (flags & ST_PRFDS) {
        fileOffset += sp120;
        sp120 = 0;
        for (ifd = 0; ifd < ifdmax; ifd++) {
            cfd = st_pcfd_ifd(ifd);
            pfd = cfd->pfd;
            pfd->rfdBase = fdr.rfdBase + fdr.crfd;
            sp120 += pfd->crfd * sizeof(RFDT);
            if (pfd->crfd != 0) {
                if (fwrite(cfd->prfd, sizeof(RFDT), pfd->crfd, out) != pfd->crfd) {
                    st_error("cannot write pfield");
                }
            }
            fdr.rfdBase += fdr.crfd;
            hdr.crfd += pfd->crfd;
            fdr.crfd = pfd->crfd;
        }
        if (hdr.crfd != 0) {
            hdr.cbRfdOffset = fileOffset;
        }
    }

    if (flags & ST_PEXTS) {
        hdr.iextMax = st_pchdr->cext;
        fileOffset = fileOffset + sp120;
        sp120 = 0;
        if (hdr.iextMax != 0) {
            sp120 = st_pchdr->cext;
            hdr.cbExtOffset = fileOffset;
            sp120 *= sizeof(EXTR);
            if (st_pchdr->cext != 0) {
                if (fwrite(st_pchdr->pext, sizeof(EXTR), st_pchdr->cext, out) != st_pchdr->cext) {
                    st_error("cannot write cur table\n");
                }
            }
        }
    }

    if (flags & ST_PDNS) {
        if (st_pchdr->cdn != 0) {
            st_pchdr->pdn[0].rfd = 0;
            st_pchdr->pdn[0].index = 0;
            st_pchdr->pdn[1].rfd = 0;
            st_pchdr->pdn[1].index = 0;
            hdr.cbDnOffset = fileOffset + sp120;
            fileOffset = hdr.cbDnOffset;
            hdr.idnMax = st_pchdr->cdn;
            if (st_pchdr->cdn != 0) {
                // ?
                if (st_pchdr->cdn != 0 && fwrite(st_pchdr->pdn, 8, st_pchdr->cdn, out) != st_pchdr->cdn) {
                    st_error("cannot write cur table\n");
                }
            }
        }
    }

    fflush(out);
    fseek(out, startOffset, SEEK_SET);
    hdr.vstamp = 0x070A; // 7.10
    hdr.magic = stmagic;
    if (fwrite(&hdr, 1, sizeof(HDRR), out) != sizeof(HDRR)) {
        st_error("cannot write symbol header\n");
    }
    fclose(out);
}

void st_setstmagic(short magic) {
    stmagic = magic;
}
