#include "common.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#include "libmld.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000F34C:
    # 0048E148 st_writebinary
    .asciz "cannot open symbol table file %s\n"

RO_1000F370:
    # 0048E1D8 st_writest
    .asciz "w"

RO_1000F374:
    # 0048E1D8 st_writest
    .asciz "st_writest: cannot write to file number %d\n"

RO_1000F3A0:
    # 0048E1D8 st_writest
    .asciz "cannot write round bytes for lines\n"

RO_1000F3C4:
    # 0048E1D8 st_writest
    .asciz "cannot write round bytes for strings\n"

RO_1000F3EC:
    # 0048E1D8 st_writest
    .asciz "cannot write round bytes for strings\n"

RO_1000F414:
    # 0048E1D8 st_writest
    .asciz "cannot write symbol header\n"

.data
# 10011B40
glabel stmagic
    # 0048E1D8 st_writest
    # 0048F128 st_setstmagic
    .byte 0x70, 0x09
    .type stmagic, @object
    .size stmagic, .-stmagic # 2
    .space 2

# 10011B44
glabel msg_werr
    # 0048E1D8 st_writest
    .ascii "cannot write pfield\x00"
    .type msg_werr, @object
    .size msg_werr, .-msg_werr # 20

# 10011B58
glabel msg_err
    # 0048E1D8 st_writest
    .ascii "cannot write cur table\n\x00"
    .type msg_err, @object
    .size msg_err, .-msg_err # 24


.bss
B_1001C2B0:
    # 0048E1D8 st_writest
    .space 16



.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

extern CHDRR *st_pchdr;

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
    int line;
    int lineMax;
    int error;
    int append;
    int fsymorder;
    int phi_s1;
    int proc;
    int i; // s2
    int phi_a0_2;
    int phi_ra;
    int lnHigh;
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
            swap_sym(st_pchdr->psym, spC0.isymMax, gethostsex());
        }
        if (sp58) {
            swap_opt(st_pchdr->popt, spC0.ioptMax, gethostsex());
        }
        if (sp40) {
            swap_fd(st_pchdr->pfd, spC0.ifdMax, gethostsex());
        }
        if (sp54) {
            swap_fi(st_pchdr->prfd, spC0.crfd, gethostsex());
        }
        if (sp4C) {
            swap_ext(st_pchdr->pext, spC0.iextMax, gethostsex());
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

    if (fsymorder == 0 && lseek(fn, fileOffset, 0) != fileOffset) {
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

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel st_writest
    .ent st_writest
    # 0048E148 st_writebinary
/* 0048E1D8 3C1C0FB9 */  .cpload $t9
/* 0048E1DC 279CC0B8 */  
/* 0048E1E0 0399E021 */  
/* 0048E1E4 27BDFE28 */  addiu $sp, $sp, -0x1d8
/* 0048E1E8 8F9980BC */  lw    $t9, %call16(bzero)($gp)
/* 0048E1EC AFB00014 */  sw    $s0, 0x14($sp)
/* 0048E1F0 00808025 */  move  $s0, $a0
/* 0048E1F4 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0048E1F8 AFA501DC */  sw    $a1, 0x1dc($sp)
/* 0048E1FC AFBE0038 */  sw    $fp, 0x38($sp)
/* 0048E200 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0048E204 AFB70030 */  sw    $s7, 0x30($sp)
/* 0048E208 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0048E20C AFB50028 */  sw    $s5, 0x28($sp)
/* 0048E210 AFB40024 */  sw    $s4, 0x24($sp)
/* 0048E214 AFB30020 */  sw    $s3, 0x20($sp)
/* 0048E218 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0048E21C AFB10018 */  sw    $s1, 0x18($sp)
/* 0048E220 24050048 */  li    $a1, 72
/* 0048E224 27A4018C */  addiu $a0, $sp, 0x18c
/* 0048E228 0320F809 */  jalr  $t9
/* 0048E22C AFA00120 */   sw    $zero, 0x120($sp)
/* 0048E230 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E234 27A40128 */  addiu $a0, $sp, 0x128
/* 0048E238 24050060 */  li    $a1, 96
/* 0048E23C 8F9980BC */  lw    $t9, %call16(bzero)($gp)
/* 0048E240 0320F809 */  jalr  $t9
/* 0048E244 00000000 */   nop   
/* 0048E248 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E24C 8F998790 */  lw    $t9, %call16(st_ifdmax)($gp)
/* 0048E250 0320F809 */  jalr  $t9
/* 0048E254 00000000 */   nop   
/* 0048E258 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E25C AFA20114 */  sw    $v0, 0x114($sp)
/* 0048E260 02002025 */  move  $a0, $s0
/* 0048E264 8F9980F4 */  lw    $t9, %call16(lseek)($gp)
/* 0048E268 00002825 */  move  $a1, $zero
/* 0048E26C 24060001 */  li    $a2, 1
/* 0048E270 0320F809 */  jalr  $t9
/* 0048E274 00000000 */   nop   
/* 0048E278 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E27C AFA20110 */  sw    $v0, 0x110($sp)
/* 0048E280 02002025 */  move  $a0, $s0
/* 0048E284 8F9980F4 */  lw    $t9, %call16(lseek)($gp)
/* 0048E288 24050060 */  li    $a1, 96
/* 0048E28C 24060001 */  li    $a2, 1
/* 0048E290 0320F809 */  jalr  $t9
/* 0048E294 00000000 */   nop   
/* 0048E298 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E29C 8FAE0114 */  lw    $t6, 0x114($sp)
/* 0048E2A0 AFA2011C */  sw    $v0, 0x11c($sp)
/* 0048E2A4 8F8F8CB8 */  lw     $t7, %got(st_pchdr)($gp)
/* 0048E2A8 02002025 */  move  $a0, $s0
/* 0048E2AC 8DEF0000 */  lw    $t7, ($t7)
/* 0048E2B0 ADEE000C */  sw    $t6, 0xc($t7)
/* 0048E2B4 8F9980FC */  lw    $t9, %call16(dup)($gp)
/* 0048E2B8 0320F809 */  jalr  $t9
/* 0048E2BC 00000000 */   nop   
/* 0048E2C0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E2C4 00402025 */  move  $a0, $v0
/* 0048E2C8 8F9980F8 */  lw    $t9, %call16(fdopen)($gp)
/* 0048E2CC 8F858044 */  lw    $a1, %got(RO_1000F370)($gp)
/* 0048E2D0 0320F809 */  jalr  $t9
/* 0048E2D4 24A5F370 */   addiu $a1, %lo(RO_1000F370) # addiu $a1, $a1, -0xc90
/* 0048E2D8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E2DC 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E2E0 14400009 */  bnez  $v0, .L0048E308
/* 0048E2E4 AFA2010C */   sw    $v0, 0x10c($sp)
/* 0048E2E8 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E2EC 8F848044 */  lw    $a0, %got(RO_1000F374)($gp)
/* 0048E2F0 02002825 */  move  $a1, $s0
/* 0048E2F4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E2F8 0320F809 */  jalr  $t9
/* 0048E2FC 2484F374 */   addiu $a0, %lo(RO_1000F374) # addiu $a0, $a0, -0xc8c
/* 0048E300 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E304 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048E308:
/* 0048E308 8FB801DC */  lw    $t8, 0x1dc($sp)
/* 0048E30C 33190004 */  andi  $t9, $t8, 4
/* 0048E310 532000DA */  beql  $t9, $zero, .L0048E67C
/* 0048E314 8FAE01DC */   lw    $t6, 0x1dc($sp)
/* 0048E318 8FAC0114 */  lw    $t4, 0x114($sp)
/* 0048E31C 2416FFFF */  li    $s6, -1
/* 0048E320 598000B8 */  blezl $t4, .L0048E604
/* 0048E324 8FAC012C */   lw    $t4, 0x12c($sp)
/* 0048E328 AFA00118 */  sw    $zero, 0x118($sp)
/* 0048E32C 27BE0068 */  addiu $fp, $sp, 0x68
.L0048E330:
/* 0048E330 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048E334 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048E338 AFA00124 */  sw    $zero, 0x124($sp)
/* 0048E33C 0320F809 */  jalr  $t9
/* 0048E340 AFAB0120 */   sw    $t3, 0x120($sp)
/* 0048E344 8C4D0000 */  lw    $t5, ($v0)
/* 0048E348 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E34C 8FAA0124 */  lw    $t2, 0x124($sp)
/* 0048E350 AFAD0188 */  sw    $t5, 0x188($sp)
/* 0048E354 8DA3001C */  lw    $v1, 0x1c($t5)
/* 0048E358 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E35C 00404825 */  move  $t1, $v0
/* 0048E360 506000A3 */  beql  $v1, $zero, .L0048E5F0
/* 0048E364 8FA20118 */   lw    $v0, 0x118($sp)
/* 0048E368 8C4F0024 */  lw    $t7, 0x24($v0)
/* 0048E36C 8FB8012C */  lw    $t8, 0x12c($sp)
/* 0048E370 51E0009F */  beql  $t7, $zero, .L0048E5F0
/* 0048E374 8FA20118 */   lw    $v0, 0x118($sp)
/* 0048E378 ADB80018 */  sw    $t8, 0x18($t5)
/* 0048E37C 8FAC012C */  lw    $t4, 0x12c($sp)
/* 0048E380 8FAE0188 */  lw    $t6, 0x188($sp)
/* 0048E384 01836821 */  addu  $t5, $t4, $v1
/* 0048E388 AFAD012C */  sw    $t5, 0x12c($sp)
/* 0048E38C ADCB0040 */  sw    $t3, 0x40($t6)
/* 0048E390 8FAF0188 */  lw    $t7, 0x188($sp)
/* 0048E394 AFA00108 */  sw    $zero, 0x108($sp)
/* 0048E398 95F1002A */  lhu   $s1, 0x2a($t7)
/* 0048E39C 52200092 */  beql  $s1, $zero, .L0048E5E8
/* 0048E3A0 8FB80188 */   lw    $t8, 0x188($sp)
/* 0048E3A4 AFA00058 */  sw    $zero, 0x58($sp)
.L0048E3A8:
/* 0048E3A8 8D380034 */  lw    $t8, 0x34($t1)
/* 0048E3AC 8FB90058 */  lw    $t9, 0x58($sp)
/* 0048E3B0 03194021 */  addu  $t0, $t8, $t9
/* 0048E3B4 8D0C0008 */  lw    $t4, 8($t0)
/* 0048E3B8 52CC0083 */  beql  $s6, $t4, .L0048E5C8
/* 0048E3BC 8FB90108 */   lw    $t9, 0x108($sp)
/* 0048E3C0 8D0D0028 */  lw    $t5, 0x28($t0)
/* 0048E3C4 52CD0080 */  beql  $s6, $t5, .L0048E5C8
/* 0048E3C8 8FB90108 */   lw    $t9, 0x108($sp)
/* 0048E3CC 8D0E002C */  lw    $t6, 0x2c($t0)
/* 0048E3D0 8FAF0188 */  lw    $t7, 0x188($sp)
/* 0048E3D4 52CE007C */  beql  $s6, $t6, .L0048E5C8
/* 0048E3D8 8FB90108 */   lw    $t9, 0x108($sp)
/* 0048E3DC 8DF80040 */  lw    $t8, 0x40($t7)
/* 0048E3E0 00002025 */  move  $a0, $zero
/* 0048E3E4 0178C823 */  subu  $t9, $t3, $t8
/* 0048E3E8 AD190030 */  sw    $t9, 0x30($t0)
/* 0048E3EC 8FAC0188 */  lw    $t4, 0x188($sp)
/* 0048E3F0 9591002A */  lhu   $s1, 0x2a($t4)
/* 0048E3F4 8D85001C */  lw    $a1, 0x1c($t4)
/* 0048E3F8 12200015 */  beqz  $s1, .L0048E450
/* 0048E3FC 00000000 */   nop   
/* 0048E400 8D060008 */  lw    $a2, 8($t0)
/* 0048E404 8D230034 */  lw    $v1, 0x34($t1)
.L0048E408:
/* 0048E408 8C620008 */  lw    $v0, 8($v1)
/* 0048E40C 24840001 */  addiu $a0, $a0, 1
/* 0048E410 00C2082A */  slt   $at, $a2, $v0
/* 0048E414 5020000C */  beql  $at, $zero, .L0048E448
/* 0048E418 0091082B */   sltu  $at, $a0, $s1
/* 0048E41C 8C6D0028 */  lw    $t5, 0x28($v1)
/* 0048E420 52CD0009 */  beql  $s6, $t5, .L0048E448
/* 0048E424 0091082B */   sltu  $at, $a0, $s1
/* 0048E428 8C6E002C */  lw    $t6, 0x2c($v1)
/* 0048E42C 0045082A */  slt   $at, $v0, $a1
/* 0048E430 52CE0005 */  beql  $s6, $t6, .L0048E448
/* 0048E434 0091082B */   sltu  $at, $a0, $s1
/* 0048E438 50200003 */  beql  $at, $zero, .L0048E448
/* 0048E43C 0091082B */   sltu  $at, $a0, $s1
/* 0048E440 00402825 */  move  $a1, $v0
/* 0048E444 0091082B */  sltu  $at, $a0, $s1
.L0048E448:
/* 0048E448 1420FFEF */  bnez  $at, .L0048E408
/* 0048E44C 24630034 */   addiu $v1, $v1, 0x34
.L0048E450:
/* 0048E450 58A0005D */  blezl $a1, .L0048E5C8
/* 0048E454 8FB90108 */   lw    $t9, 0x108($sp)
/* 0048E458 8D060008 */  lw    $a2, 8($t0)
/* 0048E45C 02C09025 */  move  $s2, $s6
/* 0048E460 0000A025 */  move  $s4, $zero
/* 0048E464 04C00057 */  bltz  $a2, .L0048E5C4
/* 0048E468 00067880 */   sll   $t7, $a2, 2
/* 0048E46C 8D220024 */  lw    $v0, 0x24($t1)
/* 0048E470 0005B880 */  sll   $s7, $a1, 2
/* 0048E474 8D150028 */  lw    $s5, 0x28($t0)
/* 0048E478 004F9821 */  addu  $s3, $v0, $t7
/* 0048E47C 00571821 */  addu  $v1, $v0, $s7
/* 0048E480 0073082B */  sltu  $at, $v1, $s3
/* 0048E484 1420004F */  bnez  $at, .L0048E5C4
/* 0048E488 03C08025 */   move  $s0, $fp
.L0048E48C:
/* 0048E48C 16630003 */  bne   $s3, $v1, .L0048E49C
/* 0048E490 24010008 */   li    $at, 8
/* 0048E494 10000009 */  b     .L0048E4BC
/* 0048E498 24030001 */   li    $v1, 1
.L0048E49C:
/* 0048E49C 8E620000 */  lw    $v0, ($s3)
/* 0048E4A0 14400003 */  bnez  $v0, .L0048E4B0
/* 0048E4A4 00402025 */   move  $a0, $v0
/* 0048E4A8 10000001 */  b     .L0048E4B0
/* 0048E4AC 8D040028 */   lw    $a0, 0x28($t0)
.L0048E4B0:
/* 0048E4B0 00951823 */  subu  $v1, $a0, $s5
/* 0048E4B4 00031C00 */  sll   $v1, $v1, 0x10
/* 0048E4B8 00031C03 */  sra   $v1, $v1, 0x10
.L0048E4BC:
/* 0048E4BC 14600003 */  bnez  $v1, .L0048E4CC
/* 0048E4C0 03C02025 */   move  $a0, $fp
/* 0048E4C4 1641001A */  bne   $s2, $at, .L0048E530
/* 0048E4C8 26020003 */   addiu $v0, $s0, 3
.L0048E4CC:
/* 0048E4CC 1256000A */  beq   $s2, $s6, .L0048E4F8
/* 0048E4D0 02A3A821 */   addu  $s5, $s5, $v1
/* 0048E4D4 2A81FFF9 */  slti  $at, $s4, -7
/* 0048E4D8 14200007 */  bnez  $at, .L0048E4F8
/* 0048E4DC 2A810008 */   slti  $at, $s4, 8
/* 0048E4E0 10200005 */  beqz  $at, .L0048E4F8
/* 0048E4E4 00146100 */   sll   $t4, $s4, 4
/* 0048E4E8 01926825 */  or    $t5, $t4, $s2
/* 0048E4EC A20D0000 */  sb    $t5, ($s0)
/* 0048E4F0 1000000A */  b     .L0048E51C
/* 0048E4F4 26100001 */   addiu $s0, $s0, 1
.L0048E4F8:
/* 0048E4F8 12560008 */  beq   $s2, $s6, .L0048E51C
/* 0048E4FC 0014C203 */   sra   $t8, $s4, 8
/* 0048E500 A2120000 */  sb    $s2, ($s0)
/* 0048E504 820E0000 */  lb    $t6, ($s0)
/* 0048E508 A2180001 */  sb    $t8, 1($s0)
/* 0048E50C A2140002 */  sb    $s4, 2($s0)
/* 0048E510 35CF0080 */  ori   $t7, $t6, 0x80
/* 0048E514 A20F0000 */  sb    $t7, ($s0)
/* 0048E518 26100003 */  addiu $s0, $s0, 3
.L0048E51C:
/* 0048E51C 0003A400 */  sll   $s4, $v1, 0x10
/* 0048E520 00009025 */  move  $s2, $zero
/* 0048E524 0014A403 */  sra   $s4, $s4, 0x10
/* 0048E528 10000002 */  b     .L0048E534
/* 0048E52C 26020003 */   addiu $v0, $s0, 3
.L0048E530:
/* 0048E530 26520001 */  addiu $s2, $s2, 1
.L0048E534:
/* 0048E534 27AC00E8 */  addiu $t4, $sp, 0xe8
/* 0048E538 004C082B */  sltu  $at, $v0, $t4
/* 0048E53C 10200008 */  beqz  $at, .L0048E560
/* 0048E540 021E8823 */   subu  $s1, $s0, $fp
/* 0048E544 8D2D0024 */  lw    $t5, 0x24($t1)
/* 0048E548 021E7023 */  subu  $t6, $s0, $fp
/* 0048E54C 01B71821 */  addu  $v1, $t5, $s7
/* 0048E550 56630017 */  bnel  $s3, $v1, .L0048E5B0
/* 0048E554 26730004 */   addiu $s3, $s3, 4
/* 0048E558 59C00015 */  blezl $t6, .L0048E5B0
/* 0048E55C 26730004 */   addiu $s3, $s3, 4
.L0048E560:
/* 0048E560 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E564 02202825 */  move  $a1, $s1
/* 0048E568 24060001 */  li    $a2, 1
/* 0048E56C 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048E570 AFA800FC */  sw    $t0, 0xfc($sp)
/* 0048E574 AFA901D4 */  sw    $t1, 0x1d4($sp)
/* 0048E578 AFAA0124 */  sw    $t2, 0x124($sp)
/* 0048E57C 0320F809 */  jalr  $t9
/* 0048E580 AFAB0120 */   sw    $t3, 0x120($sp)
/* 0048E584 8FA901D4 */  lw    $t1, 0x1d4($sp)
/* 0048E588 8FAA0124 */  lw    $t2, 0x124($sp)
/* 0048E58C 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E590 8D2F0024 */  lw    $t7, 0x24($t1)
/* 0048E594 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E598 8FA800FC */  lw    $t0, 0xfc($sp)
/* 0048E59C 03C08025 */  move  $s0, $fp
/* 0048E5A0 01515021 */  addu  $t2, $t2, $s1
/* 0048E5A4 01715821 */  addu  $t3, $t3, $s1
/* 0048E5A8 01F71821 */  addu  $v1, $t7, $s7
/* 0048E5AC 26730004 */  addiu $s3, $s3, 4
.L0048E5B0:
/* 0048E5B0 0073082B */  sltu  $at, $v1, $s3
/* 0048E5B4 1020FFB5 */  beqz  $at, .L0048E48C
/* 0048E5B8 00000000 */   nop   
/* 0048E5BC 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E5C0 9711002A */  lhu   $s1, 0x2a($t8)
.L0048E5C4:
/* 0048E5C4 8FB90108 */  lw    $t9, 0x108($sp)
.L0048E5C8:
/* 0048E5C8 8FAD0058 */  lw    $t5, 0x58($sp)
/* 0048E5CC 272C0001 */  addiu $t4, $t9, 1
/* 0048E5D0 0191082B */  sltu  $at, $t4, $s1
/* 0048E5D4 25AE0034 */  addiu $t6, $t5, 0x34
/* 0048E5D8 AFAE0058 */  sw    $t6, 0x58($sp)
/* 0048E5DC 1420FF72 */  bnez  $at, .L0048E3A8
/* 0048E5E0 AFAC0108 */   sw    $t4, 0x108($sp)
/* 0048E5E4 8FB80188 */  lw    $t8, 0x188($sp)
.L0048E5E8:
/* 0048E5E8 AF0A0044 */  sw    $t2, 0x44($t8)
/* 0048E5EC 8FA20118 */  lw    $v0, 0x118($sp)
.L0048E5F0:
/* 0048E5F0 8FB90114 */  lw    $t9, 0x114($sp)
/* 0048E5F4 24420001 */  addiu $v0, $v0, 1
/* 0048E5F8 1459FF4D */  bne   $v0, $t9, .L0048E330
/* 0048E5FC AFA20118 */   sw    $v0, 0x118($sp)
/* 0048E600 8FAC012C */  lw    $t4, 0x12c($sp)
.L0048E604:
/* 0048E604 000B8023 */  negu  $s0, $t3
/* 0048E608 32100003 */  andi  $s0, $s0, 3
/* 0048E60C 5180001B */  beql  $t4, $zero, .L0048E67C
/* 0048E610 8FAE01DC */   lw    $t6, 0x1dc($sp)
/* 0048E614 12000015 */  beqz  $s0, .L0048E66C
/* 0048E618 24050001 */   li    $a1, 1
/* 0048E61C 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E620 8F848048 */  lw    $a0, %got(B_1001C2B0)($gp)
/* 0048E624 02003025 */  move  $a2, $s0
/* 0048E628 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048E62C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E630 0320F809 */  jalr  $t9
/* 0048E634 2484C2B0 */   addiu $a0, %lo(B_1001C2B0) # addiu $a0, $a0, -0x3d50
/* 0048E638 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E63C 10500008 */  beq   $v0, $s0, .L0048E660
/* 0048E640 8FAB0120 */   lw    $t3, 0x120($sp)
/* 0048E644 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E648 8F848044 */  lw    $a0, %got(RO_1000F3A0)($gp)
/* 0048E64C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E650 0320F809 */  jalr  $t9
/* 0048E654 2484F3A0 */   addiu $a0, %lo(RO_1000F3A0) # addiu $a0, $a0, -0xc60
/* 0048E658 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E65C 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048E660:
/* 0048E660 256B0003 */  addiu $t3, $t3, 3
/* 0048E664 2401FFFC */  li    $at, -4
/* 0048E668 01615824 */  and   $t3, $t3, $at
.L0048E66C:
/* 0048E66C 8FAD011C */  lw    $t5, 0x11c($sp)
/* 0048E670 AFAB0130 */  sw    $t3, 0x130($sp)
/* 0048E674 AFAD0134 */  sw    $t5, 0x134($sp)
/* 0048E678 8FAE01DC */  lw    $t6, 0x1dc($sp)
.L0048E67C:
/* 0048E67C 31CF0100 */  andi  $t7, $t6, 0x100
/* 0048E680 51E00047 */  beql  $t7, $zero, .L0048E7A0
/* 0048E684 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E688 8FB8011C */  lw    $t8, 0x11c($sp)
/* 0048E68C 8FAC0114 */  lw    $t4, 0x114($sp)
/* 0048E690 24100034 */  li    $s0, 52
/* 0048E694 030BC821 */  addu  $t9, $t8, $t3
/* 0048E698 AFB9011C */  sw    $t9, 0x11c($sp)
/* 0048E69C 1980003A */  blez  $t4, .L0048E788
/* 0048E6A0 00005825 */   move  $t3, $zero
/* 0048E6A4 AFA00118 */  sw    $zero, 0x118($sp)
/* 0048E6A8 8F928900 */  lw     $s2, %got(msg_werr)($gp)
.L0048E6AC:
/* 0048E6AC 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048E6B0 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048E6B4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E6B8 0320F809 */  jalr  $t9
/* 0048E6BC 00000000 */   nop   
/* 0048E6C0 8C4D0000 */  lw    $t5, ($v0)
/* 0048E6C4 97AE01B4 */  lhu   $t6, 0x1b4($sp)
/* 0048E6C8 97AF01B6 */  lhu   $t7, 0x1b6($sp)
/* 0048E6CC 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E6D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E6D4 AFAD0188 */  sw    $t5, 0x188($sp)
/* 0048E6D8 01CFC021 */  addu  $t8, $t6, $t7
/* 0048E6DC A5B80028 */  sh    $t8, 0x28($t5)
/* 0048E6E0 8FAC0188 */  lw    $t4, 0x188($sp)
/* 0048E6E4 02002825 */  move  $a1, $s0
/* 0048E6E8 9591002A */  lhu   $s1, 0x2a($t4)
/* 0048E6EC 02300019 */  multu $s1, $s0
/* 0048E6F0 02203025 */  move  $a2, $s1
/* 0048E6F4 00002012 */  mflo  $a0
/* 0048E6F8 01645821 */  addu  $t3, $t3, $a0
/* 0048E6FC 52200014 */  beql  $s1, $zero, .L0048E750
/* 0048E700 97AF01B4 */   lhu   $t7, 0x1b4($sp)
/* 0048E704 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E708 8C440034 */  lw    $a0, 0x34($v0)
/* 0048E70C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E710 0320F809 */  jalr  $t9
/* 0048E714 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048E718 8FAD0188 */  lw    $t5, 0x188($sp)
/* 0048E71C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E720 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E724 95AE002A */  lhu   $t6, 0x2a($t5)
/* 0048E728 504E0009 */  beql  $v0, $t6, .L0048E750
/* 0048E72C 97AF01B4 */   lhu   $t7, 0x1b4($sp)
/* 0048E730 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E734 02402025 */  move  $a0, $s2
/* 0048E738 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E73C 0320F809 */  jalr  $t9
/* 0048E740 00000000 */   nop   
/* 0048E744 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E748 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E74C 97AF01B4 */  lhu   $t7, 0x1b4($sp)
.L0048E750:
/* 0048E750 97B801B6 */  lhu   $t8, 0x1b6($sp)
/* 0048E754 8FAC0188 */  lw    $t4, 0x188($sp)
/* 0048E758 8FA30118 */  lw    $v1, 0x118($sp)
/* 0048E75C 01F8C821 */  addu  $t9, $t7, $t8
/* 0048E760 A7B901B4 */  sh    $t9, 0x1b4($sp)
/* 0048E764 8FAD0140 */  lw    $t5, 0x140($sp)
/* 0048E768 9582002A */  lhu   $v0, 0x2a($t4)
/* 0048E76C 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048E770 24630001 */  addiu $v1, $v1, 1
/* 0048E774 01A27021 */  addu  $t6, $t5, $v0
/* 0048E778 AFAE0140 */  sw    $t6, 0x140($sp)
/* 0048E77C AFA30118 */  sw    $v1, 0x118($sp)
/* 0048E780 146FFFCA */  bne   $v1, $t7, .L0048E6AC
/* 0048E784 A7A201B6 */   sh    $v0, 0x1b6($sp)
.L0048E788:
/* 0048E788 8FB80140 */  lw    $t8, 0x140($sp)
/* 0048E78C 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048E790 53000003 */  beql  $t8, $zero, .L0048E7A0
/* 0048E794 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E798 AFB90144 */  sw    $t9, 0x144($sp)
/* 0048E79C 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048E7A0:
/* 0048E7A0 8F928900 */  lw     $s2, %got(msg_werr)($gp)
/* 0048E7A4 318D0002 */  andi  $t5, $t4, 2
/* 0048E7A8 51A00045 */  beql  $t5, $zero, .L0048E8C0
/* 0048E7AC 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E7B0 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048E7B4 8FB80114 */  lw    $t8, 0x114($sp)
/* 0048E7B8 2410000C */  li    $s0, 12
/* 0048E7BC 01CB7821 */  addu  $t7, $t6, $t3
/* 0048E7C0 AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048E7C4 1B000038 */  blez  $t8, .L0048E8A8
/* 0048E7C8 00005825 */   move  $t3, $zero
/* 0048E7CC AFA00118 */  sw    $zero, 0x118($sp)
.L0048E7D0:
/* 0048E7D0 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048E7D4 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048E7D8 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E7DC 0320F809 */  jalr  $t9
/* 0048E7E0 00000000 */   nop   
/* 0048E7E4 8C590000 */  lw    $t9, ($v0)
/* 0048E7E8 8FAC019C */  lw    $t4, 0x19c($sp)
/* 0048E7EC 8FAD01A0 */  lw    $t5, 0x1a0($sp)
/* 0048E7F0 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E7F4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E7F8 AFB90188 */  sw    $t9, 0x188($sp)
/* 0048E7FC 018D7021 */  addu  $t6, $t4, $t5
/* 0048E800 AF2E0010 */  sw    $t6, 0x10($t9)
/* 0048E804 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E808 02002825 */  move  $a1, $s0
/* 0048E80C 8F060014 */  lw    $a2, 0x14($t8)
/* 0048E810 00D00019 */  multu $a2, $s0
/* 0048E814 00002012 */  mflo  $a0
/* 0048E818 01645821 */  addu  $t3, $t3, $a0
/* 0048E81C 50C00014 */  beql  $a2, $zero, .L0048E870
/* 0048E820 8FAD019C */   lw    $t5, 0x19c($sp)
/* 0048E824 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E828 8C440004 */  lw    $a0, 4($v0)
/* 0048E82C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E830 0320F809 */  jalr  $t9
/* 0048E834 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048E838 8FB90188 */  lw    $t9, 0x188($sp)
/* 0048E83C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E840 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E844 8F2C0014 */  lw    $t4, 0x14($t9)
/* 0048E848 504C0009 */  beql  $v0, $t4, .L0048E870
/* 0048E84C 8FAD019C */   lw    $t5, 0x19c($sp)
/* 0048E850 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E854 02402025 */  move  $a0, $s2
/* 0048E858 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E85C 0320F809 */  jalr  $t9
/* 0048E860 00000000 */   nop   
/* 0048E864 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E868 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E86C 8FAD019C */  lw    $t5, 0x19c($sp)
.L0048E870:
/* 0048E870 8FAE01A0 */  lw    $t6, 0x1a0($sp)
/* 0048E874 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E878 8FB90148 */  lw    $t9, 0x148($sp)
/* 0048E87C 01AE7821 */  addu  $t7, $t5, $t6
/* 0048E880 AFAF019C */  sw    $t7, 0x19c($sp)
/* 0048E884 8FAD0118 */  lw    $t5, 0x118($sp)
/* 0048E888 8F040014 */  lw    $a0, 0x14($t8)
/* 0048E88C 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048E890 25AE0001 */  addiu $t6, $t5, 1
/* 0048E894 03246021 */  addu  $t4, $t9, $a0
/* 0048E898 AFAC0148 */  sw    $t4, 0x148($sp)
/* 0048E89C AFAE0118 */  sw    $t6, 0x118($sp)
/* 0048E8A0 15CFFFCB */  bne   $t6, $t7, .L0048E7D0
/* 0048E8A4 AFA401A0 */   sw    $a0, 0x1a0($sp)
.L0048E8A8:
/* 0048E8A8 8FB80148 */  lw    $t8, 0x148($sp)
/* 0048E8AC 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048E8B0 53000003 */  beql  $t8, $zero, .L0048E8C0
/* 0048E8B4 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E8B8 AFB9014C */  sw    $t9, 0x14c($sp)
/* 0048E8BC 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048E8C0:
/* 0048E8C0 2410000C */  li    $s0, 12
/* 0048E8C4 318D0020 */  andi  $t5, $t4, 0x20
/* 0048E8C8 51A00044 */  beql  $t5, $zero, .L0048E9DC
/* 0048E8CC 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E8D0 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048E8D4 8FB80114 */  lw    $t8, 0x114($sp)
/* 0048E8D8 01CB7821 */  addu  $t7, $t6, $t3
/* 0048E8DC AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048E8E0 1B000038 */  blez  $t8, .L0048E9C4
/* 0048E8E4 00005825 */   move  $t3, $zero
/* 0048E8E8 AFA00118 */  sw    $zero, 0x118($sp)
.L0048E8EC:
/* 0048E8EC 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048E8F0 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048E8F4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E8F8 0320F809 */  jalr  $t9
/* 0048E8FC 00000000 */   nop   
/* 0048E900 8C590000 */  lw    $t9, ($v0)
/* 0048E904 8FAC01AC */  lw    $t4, 0x1ac($sp)
/* 0048E908 8FAD01B0 */  lw    $t5, 0x1b0($sp)
/* 0048E90C 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E910 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E914 AFB90188 */  sw    $t9, 0x188($sp)
/* 0048E918 018D7021 */  addu  $t6, $t4, $t5
/* 0048E91C AF2E0020 */  sw    $t6, 0x20($t9)
/* 0048E920 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E924 02002825 */  move  $a1, $s0
/* 0048E928 8F060024 */  lw    $a2, 0x24($t8)
/* 0048E92C 00D00019 */  multu $a2, $s0
/* 0048E930 00002012 */  mflo  $a0
/* 0048E934 01645821 */  addu  $t3, $t3, $a0
/* 0048E938 50C00014 */  beql  $a2, $zero, .L0048E98C
/* 0048E93C 8FAD01AC */   lw    $t5, 0x1ac($sp)
/* 0048E940 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E944 8C44001C */  lw    $a0, 0x1c($v0)
/* 0048E948 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E94C 0320F809 */  jalr  $t9
/* 0048E950 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048E954 8FB90188 */  lw    $t9, 0x188($sp)
/* 0048E958 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E95C 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E960 8F2C0024 */  lw    $t4, 0x24($t9)
/* 0048E964 504C0009 */  beql  $v0, $t4, .L0048E98C
/* 0048E968 8FAD01AC */   lw    $t5, 0x1ac($sp)
/* 0048E96C 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E970 02402025 */  move  $a0, $s2
/* 0048E974 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E978 0320F809 */  jalr  $t9
/* 0048E97C 00000000 */   nop   
/* 0048E980 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E984 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E988 8FAD01AC */  lw    $t5, 0x1ac($sp)
.L0048E98C:
/* 0048E98C 8FAE01B0 */  lw    $t6, 0x1b0($sp)
/* 0048E990 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E994 8FB90150 */  lw    $t9, 0x150($sp)
/* 0048E998 01AE7821 */  addu  $t7, $t5, $t6
/* 0048E99C AFAF01AC */  sw    $t7, 0x1ac($sp)
/* 0048E9A0 8FAD0118 */  lw    $t5, 0x118($sp)
/* 0048E9A4 8F040024 */  lw    $a0, 0x24($t8)
/* 0048E9A8 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048E9AC 25AE0001 */  addiu $t6, $t5, 1
/* 0048E9B0 03246021 */  addu  $t4, $t9, $a0
/* 0048E9B4 AFAC0150 */  sw    $t4, 0x150($sp)
/* 0048E9B8 AFAE0118 */  sw    $t6, 0x118($sp)
/* 0048E9BC 15CFFFCB */  bne   $t6, $t7, .L0048E8EC
/* 0048E9C0 AFA401B0 */   sw    $a0, 0x1b0($sp)
.L0048E9C4:
/* 0048E9C4 8FB80150 */  lw    $t8, 0x150($sp)
/* 0048E9C8 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048E9CC 53000003 */  beql  $t8, $zero, .L0048E9DC
/* 0048E9D0 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E9D4 AFB90154 */  sw    $t9, 0x154($sp)
/* 0048E9D8 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048E9DC:
/* 0048E9DC 318D0400 */  andi  $t5, $t4, 0x400
/* 0048E9E0 51A00042 */  beql  $t5, $zero, .L0048EAEC
/* 0048E9E4 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E9E8 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048E9EC 8FB80114 */  lw    $t8, 0x114($sp)
/* 0048E9F0 01CB7821 */  addu  $t7, $t6, $t3
/* 0048E9F4 AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048E9F8 1B000036 */  blez  $t8, .L0048EAD4
/* 0048E9FC 00005825 */   move  $t3, $zero
/* 0048EA00 AFA00118 */  sw    $zero, 0x118($sp)
.L0048EA04:
/* 0048EA04 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048EA08 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048EA0C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EA10 0320F809 */  jalr  $t9
/* 0048EA14 00000000 */   nop   
/* 0048EA18 8C590000 */  lw    $t9, ($v0)
/* 0048EA1C 8FAC01B8 */  lw    $t4, 0x1b8($sp)
/* 0048EA20 8FAD01BC */  lw    $t5, 0x1bc($sp)
/* 0048EA24 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EA28 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EA2C AFB90188 */  sw    $t9, 0x188($sp)
/* 0048EA30 018D7021 */  addu  $t6, $t4, $t5
/* 0048EA34 AF2E002C */  sw    $t6, 0x2c($t9)
/* 0048EA38 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048EA3C 24050004 */  li    $a1, 4
/* 0048EA40 8F060030 */  lw    $a2, 0x30($t8)
/* 0048EA44 00062080 */  sll   $a0, $a2, 2
/* 0048EA48 10C00013 */  beqz  $a2, .L0048EA98
/* 0048EA4C 01645821 */   addu  $t3, $t3, $a0
/* 0048EA50 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EA54 8C44000C */  lw    $a0, 0xc($v0)
/* 0048EA58 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EA5C 0320F809 */  jalr  $t9
/* 0048EA60 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EA64 8FB90188 */  lw    $t9, 0x188($sp)
/* 0048EA68 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EA6C 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EA70 8F2C0030 */  lw    $t4, 0x30($t9)
/* 0048EA74 504C0009 */  beql  $v0, $t4, .L0048EA9C
/* 0048EA78 8FAD01B8 */   lw    $t5, 0x1b8($sp)
/* 0048EA7C 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EA80 02402025 */  move  $a0, $s2
/* 0048EA84 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EA88 0320F809 */  jalr  $t9
/* 0048EA8C 00000000 */   nop   
/* 0048EA90 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EA94 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EA98:
/* 0048EA98 8FAD01B8 */  lw    $t5, 0x1b8($sp)
.L0048EA9C:
/* 0048EA9C 8FAE01BC */  lw    $t6, 0x1bc($sp)
/* 0048EAA0 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048EAA4 8FB90158 */  lw    $t9, 0x158($sp)
/* 0048EAA8 01AE7821 */  addu  $t7, $t5, $t6
/* 0048EAAC AFAF01B8 */  sw    $t7, 0x1b8($sp)
/* 0048EAB0 8FAD0118 */  lw    $t5, 0x118($sp)
/* 0048EAB4 8F040030 */  lw    $a0, 0x30($t8)
/* 0048EAB8 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048EABC 25AE0001 */  addiu $t6, $t5, 1
/* 0048EAC0 03246021 */  addu  $t4, $t9, $a0
/* 0048EAC4 AFAC0158 */  sw    $t4, 0x158($sp)
/* 0048EAC8 AFAE0118 */  sw    $t6, 0x118($sp)
/* 0048EACC 15CFFFCD */  bne   $t6, $t7, .L0048EA04
/* 0048EAD0 AFA401BC */   sw    $a0, 0x1bc($sp)
.L0048EAD4:
/* 0048EAD4 8FB80158 */  lw    $t8, 0x158($sp)
/* 0048EAD8 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048EADC 53000003 */  beql  $t8, $zero, .L0048EAEC
/* 0048EAE0 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048EAE4 AFB9015C */  sw    $t9, 0x15c($sp)
/* 0048EAE8 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048EAEC:
/* 0048EAEC 318D0080 */  andi  $t5, $t4, 0x80
/* 0048EAF0 51A00058 */  beql  $t5, $zero, .L0048EC54
/* 0048EAF4 8FB901DC */   lw    $t9, 0x1dc($sp)
/* 0048EAF8 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048EAFC 8FB80114 */  lw    $t8, 0x114($sp)
/* 0048EB00 01CB7821 */  addu  $t7, $t6, $t3
/* 0048EB04 AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048EB08 1B000035 */  blez  $t8, .L0048EBE0
/* 0048EB0C 00005825 */   move  $t3, $zero
/* 0048EB10 AFA00118 */  sw    $zero, 0x118($sp)
.L0048EB14:
/* 0048EB14 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048EB18 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048EB1C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EB20 0320F809 */  jalr  $t9
/* 0048EB24 00000000 */   nop   
/* 0048EB28 8C590000 */  lw    $t9, ($v0)
/* 0048EB2C 8FAC0194 */  lw    $t4, 0x194($sp)
/* 0048EB30 8FAD0198 */  lw    $t5, 0x198($sp)
/* 0048EB34 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EB38 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EB3C AFB90188 */  sw    $t9, 0x188($sp)
/* 0048EB40 018D7021 */  addu  $t6, $t4, $t5
/* 0048EB44 AF2E0008 */  sw    $t6, 8($t9)
/* 0048EB48 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048EB4C 24050001 */  li    $a1, 1
/* 0048EB50 8F06000C */  lw    $a2, 0xc($t8)
/* 0048EB54 10C00013 */  beqz  $a2, .L0048EBA4
/* 0048EB58 01665821 */   addu  $t3, $t3, $a2
/* 0048EB5C 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EB60 8C440014 */  lw    $a0, 0x14($v0)
/* 0048EB64 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EB68 0320F809 */  jalr  $t9
/* 0048EB6C 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EB70 8FB90188 */  lw    $t9, 0x188($sp)
/* 0048EB74 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EB78 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EB7C 8F2C000C */  lw    $t4, 0xc($t9)
/* 0048EB80 504C0009 */  beql  $v0, $t4, .L0048EBA8
/* 0048EB84 8FAD0194 */   lw    $t5, 0x194($sp)
/* 0048EB88 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EB8C 02402025 */  move  $a0, $s2
/* 0048EB90 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EB94 0320F809 */  jalr  $t9
/* 0048EB98 00000000 */   nop   
/* 0048EB9C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EBA0 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EBA4:
/* 0048EBA4 8FAD0194 */  lw    $t5, 0x194($sp)
.L0048EBA8:
/* 0048EBA8 8FAE0198 */  lw    $t6, 0x198($sp)
/* 0048EBAC 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048EBB0 8FB90160 */  lw    $t9, 0x160($sp)
/* 0048EBB4 01AE7821 */  addu  $t7, $t5, $t6
/* 0048EBB8 AFAF0194 */  sw    $t7, 0x194($sp)
/* 0048EBBC 8FAD0118 */  lw    $t5, 0x118($sp)
/* 0048EBC0 8F04000C */  lw    $a0, 0xc($t8)
/* 0048EBC4 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048EBC8 25AE0001 */  addiu $t6, $t5, 1
/* 0048EBCC 03246021 */  addu  $t4, $t9, $a0
/* 0048EBD0 AFAC0160 */  sw    $t4, 0x160($sp)
/* 0048EBD4 AFAE0118 */  sw    $t6, 0x118($sp)
/* 0048EBD8 15CFFFCE */  bne   $t6, $t7, .L0048EB14
/* 0048EBDC AFA40198 */   sw    $a0, 0x198($sp)
.L0048EBE0:
/* 0048EBE0 000B8023 */  negu  $s0, $t3
/* 0048EBE4 32100003 */  andi  $s0, $s0, 3
/* 0048EBE8 12000015 */  beqz  $s0, .L0048EC40
/* 0048EBEC 24050001 */   li    $a1, 1
/* 0048EBF0 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EBF4 8F848048 */  lw    $a0, %got(B_1001C2B0)($gp)
/* 0048EBF8 02003025 */  move  $a2, $s0
/* 0048EBFC 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048EC00 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EC04 0320F809 */  jalr  $t9
/* 0048EC08 2484C2B0 */   addiu $a0, %lo(B_1001C2B0) # addiu $a0, $a0, -0x3d50
/* 0048EC0C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EC10 10500008 */  beq   $v0, $s0, .L0048EC34
/* 0048EC14 8FAB0120 */   lw    $t3, 0x120($sp)
/* 0048EC18 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EC1C 8F848044 */  lw    $a0, %got(RO_1000F3C4)($gp)
/* 0048EC20 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EC24 0320F809 */  jalr  $t9
/* 0048EC28 2484F3C4 */   addiu $a0, %lo(RO_1000F3C4) # addiu $a0, $a0, -0xc3c
/* 0048EC2C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EC30 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EC34:
/* 0048EC34 256B0003 */  addiu $t3, $t3, 3
/* 0048EC38 2401FFFC */  li    $at, -4
/* 0048EC3C 01615824 */  and   $t3, $t3, $at
.L0048EC40:
/* 0048EC40 11600003 */  beqz  $t3, .L0048EC50
/* 0048EC44 AFAB0160 */   sw    $t3, 0x160($sp)
/* 0048EC48 8FB8011C */  lw    $t8, 0x11c($sp)
/* 0048EC4C AFB80164 */  sw    $t8, 0x164($sp)
.L0048EC50:
/* 0048EC50 8FB901DC */  lw    $t9, 0x1dc($sp)
.L0048EC54:
/* 0048EC54 332C0800 */  andi  $t4, $t9, 0x800
/* 0048EC58 5180003D */  beql  $t4, $zero, .L0048ED50
/* 0048EC5C 8FAD01DC */   lw    $t5, 0x1dc($sp)
/* 0048EC60 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048EC64 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048EC68 8D020000 */  lw    $v0, ($t0)
/* 0048EC6C 01CB7821 */  addu  $t7, $t6, $t3
/* 0048EC70 00005825 */  move  $t3, $zero
/* 0048EC74 8C4D0028 */  lw    $t5, 0x28($v0)
/* 0048EC78 AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048EC7C 11A0001A */  beqz  $t5, .L0048ECE8
/* 0048EC80 AFAD0168 */   sw    $t5, 0x168($sp)
/* 0048EC84 8C4B0028 */  lw    $t3, 0x28($v0)
/* 0048EC88 AFAF016C */  sw    $t7, 0x16c($sp)
/* 0048EC8C 8C430028 */  lw    $v1, 0x28($v0)
/* 0048EC90 24050001 */  li    $a1, 1
/* 0048EC94 10600014 */  beqz  $v1, .L0048ECE8
/* 0048EC98 00603025 */   move  $a2, $v1
/* 0048EC9C 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048ECA0 8C440024 */  lw    $a0, 0x24($v0)
/* 0048ECA4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048ECA8 0320F809 */  jalr  $t9
/* 0048ECAC 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048ECB0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048ECB4 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048ECB8 8F998CB8 */  lw     $t9, %got(st_pchdr)($gp)
/* 0048ECBC 8F390000 */  lw    $t9, ($t9)
/* 0048ECC0 8F2C0028 */  lw    $t4, 0x28($t9)
/* 0048ECC4 504C0009 */  beql  $v0, $t4, .L0048ECEC
/* 0048ECC8 000B8023 */   negu  $s0, $t3
/* 0048ECCC 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048ECD0 8F848904 */  lw     $a0, %got(msg_err)($gp)
/* 0048ECD4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048ECD8 0320F809 */  jalr  $t9
/* 0048ECDC 00000000 */   nop   
/* 0048ECE0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048ECE4 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048ECE8:
/* 0048ECE8 000B8023 */  negu  $s0, $t3
.L0048ECEC:
/* 0048ECEC 32100003 */  andi  $s0, $s0, 3
/* 0048ECF0 12000015 */  beqz  $s0, .L0048ED48
/* 0048ECF4 24050001 */   li    $a1, 1
/* 0048ECF8 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048ECFC 8F848048 */  lw    $a0, %got(B_1001C2B0)($gp)
/* 0048ED00 02003025 */  move  $a2, $s0
/* 0048ED04 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048ED08 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048ED0C 0320F809 */  jalr  $t9
/* 0048ED10 2484C2B0 */   addiu $a0, %lo(B_1001C2B0) # addiu $a0, $a0, -0x3d50
/* 0048ED14 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048ED18 10500008 */  beq   $v0, $s0, .L0048ED3C
/* 0048ED1C 8FAB0120 */   lw    $t3, 0x120($sp)
/* 0048ED20 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048ED24 8F848044 */  lw    $a0, %got(RO_1000F3EC)($gp)
/* 0048ED28 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048ED2C 0320F809 */  jalr  $t9
/* 0048ED30 2484F3EC */   addiu $a0, %lo(RO_1000F3EC) # addiu $a0, $a0, -0xc14
/* 0048ED34 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048ED38 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048ED3C:
/* 0048ED3C 256B0003 */  addiu $t3, $t3, 3
/* 0048ED40 2401FFFC */  li    $at, -4
/* 0048ED44 01615824 */  and   $t3, $t3, $at
.L0048ED48:
/* 0048ED48 AFAB0168 */  sw    $t3, 0x168($sp)
/* 0048ED4C 8FAD01DC */  lw    $t5, 0x1dc($sp)
.L0048ED50:
/* 0048ED50 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048ED54 8F918904 */  lw     $s1, %got(msg_err)($gp)
/* 0048ED58 31AE0200 */  andi  $t6, $t5, 0x200
/* 0048ED5C 51C00028 */  beql  $t6, $zero, .L0048EE00
/* 0048ED60 8FB801DC */   lw    $t8, 0x1dc($sp)
/* 0048ED64 8D020000 */  lw    $v0, ($t0)
/* 0048ED68 8FAF011C */  lw    $t7, 0x11c($sp)
/* 0048ED6C 8C58000C */  lw    $t8, 0xc($v0)
/* 0048ED70 01EBC821 */  addu  $t9, $t7, $t3
/* 0048ED74 AFB9011C */  sw    $t9, 0x11c($sp)
/* 0048ED78 00005825 */  move  $t3, $zero
/* 0048ED7C 1300001E */  beqz  $t8, .L0048EDF8
/* 0048ED80 AFB80170 */   sw    $t8, 0x170($sp)
/* 0048ED84 8C4B000C */  lw    $t3, 0xc($v0)
/* 0048ED88 AFB90174 */  sw    $t9, 0x174($sp)
/* 0048ED8C 8C43000C */  lw    $v1, 0xc($v0)
/* 0048ED90 01600821 */  move  $at, $t3
/* 0048ED94 000B58C0 */  sll   $t3, $t3, 3
/* 0048ED98 01615821 */  addu  $t3, $t3, $at
/* 0048ED9C 10600016 */  beqz  $v1, .L0048EDF8
/* 0048EDA0 000B58C0 */   sll   $t3, $t3, 3
/* 0048EDA4 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EDA8 8C440008 */  lw    $a0, 8($v0)
/* 0048EDAC AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EDB0 24050048 */  li    $a1, 72
/* 0048EDB4 00603025 */  move  $a2, $v1
/* 0048EDB8 0320F809 */  jalr  $t9
/* 0048EDBC 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EDC0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EDC4 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EDC8 8F8D8CB8 */  lw     $t5, %got(st_pchdr)($gp)
/* 0048EDCC 8DAD0000 */  lw    $t5, ($t5)
/* 0048EDD0 8DAE000C */  lw    $t6, 0xc($t5)
/* 0048EDD4 104E0008 */  beq   $v0, $t6, .L0048EDF8
/* 0048EDD8 00000000 */   nop   
/* 0048EDDC 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EDE0 02202025 */  move  $a0, $s1
/* 0048EDE4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EDE8 0320F809 */  jalr  $t9
/* 0048EDEC 00000000 */   nop   
/* 0048EDF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EDF4 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EDF8:
/* 0048EDF8 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048EDFC 8FB801DC */  lw    $t8, 0x1dc($sp)
.L0048EE00:
/* 0048EE00 8FAC011C */  lw    $t4, 0x11c($sp)
/* 0048EE04 330F0040 */  andi  $t7, $t8, 0x40
/* 0048EE08 51E00042 */  beql  $t7, $zero, .L0048EF14
/* 0048EE0C 8FB801DC */   lw    $t8, 0x1dc($sp)
/* 0048EE10 8FAD0114 */  lw    $t5, 0x114($sp)
/* 0048EE14 018BC821 */  addu  $t9, $t4, $t3
/* 0048EE18 AFB9011C */  sw    $t9, 0x11c($sp)
/* 0048EE1C 19A00037 */  blez  $t5, .L0048EEFC
/* 0048EE20 00005825 */   move  $t3, $zero
/* 0048EE24 AFA00118 */  sw    $zero, 0x118($sp)
.L0048EE28:
/* 0048EE28 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048EE2C 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048EE30 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EE34 0320F809 */  jalr  $t9
/* 0048EE38 00000000 */   nop   
/* 0048EE3C 8C4E0000 */  lw    $t6, ($v0)
/* 0048EE40 8FB801C0 */  lw    $t8, 0x1c0($sp)
/* 0048EE44 8FAF01C4 */  lw    $t7, 0x1c4($sp)
/* 0048EE48 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EE4C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EE50 AFAE0188 */  sw    $t6, 0x188($sp)
/* 0048EE54 030F6021 */  addu  $t4, $t8, $t7
/* 0048EE58 ADCC0034 */  sw    $t4, 0x34($t6)
/* 0048EE5C 8FAD0188 */  lw    $t5, 0x188($sp)
/* 0048EE60 24050004 */  li    $a1, 4
/* 0048EE64 8DA60038 */  lw    $a2, 0x38($t5)
/* 0048EE68 00062080 */  sll   $a0, $a2, 2
/* 0048EE6C 10C00013 */  beqz  $a2, .L0048EEBC
/* 0048EE70 01645821 */   addu  $t3, $t3, $a0
/* 0048EE74 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EE78 8C44002C */  lw    $a0, 0x2c($v0)
/* 0048EE7C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EE80 0320F809 */  jalr  $t9
/* 0048EE84 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EE88 8FAE0188 */  lw    $t6, 0x188($sp)
/* 0048EE8C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EE90 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EE94 8DD80038 */  lw    $t8, 0x38($t6)
/* 0048EE98 50580009 */  beql  $v0, $t8, .L0048EEC0
/* 0048EE9C 8FAF01C0 */   lw    $t7, 0x1c0($sp)
/* 0048EEA0 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EEA4 02402025 */  move  $a0, $s2
/* 0048EEA8 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EEAC 0320F809 */  jalr  $t9
/* 0048EEB0 00000000 */   nop   
/* 0048EEB4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EEB8 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EEBC:
/* 0048EEBC 8FAF01C0 */  lw    $t7, 0x1c0($sp)
.L0048EEC0:
/* 0048EEC0 8FAC01C4 */  lw    $t4, 0x1c4($sp)
/* 0048EEC4 8FAD0188 */  lw    $t5, 0x188($sp)
/* 0048EEC8 8FAE0178 */  lw    $t6, 0x178($sp)
/* 0048EECC 01ECC821 */  addu  $t9, $t7, $t4
/* 0048EED0 AFB901C0 */  sw    $t9, 0x1c0($sp)
/* 0048EED4 8FAF0118 */  lw    $t7, 0x118($sp)
/* 0048EED8 8DA40038 */  lw    $a0, 0x38($t5)
/* 0048EEDC 8FB90114 */  lw    $t9, 0x114($sp)
/* 0048EEE0 25EC0001 */  addiu $t4, $t7, 1
/* 0048EEE4 01C4C021 */  addu  $t8, $t6, $a0
/* 0048EEE8 AFB80178 */  sw    $t8, 0x178($sp)
/* 0048EEEC AFAC0118 */  sw    $t4, 0x118($sp)
/* 0048EEF0 1599FFCD */  bne   $t4, $t9, .L0048EE28
/* 0048EEF4 AFA401C4 */   sw    $a0, 0x1c4($sp)
/* 0048EEF8 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
.L0048EEFC:
/* 0048EEFC 8FAD0178 */  lw    $t5, 0x178($sp)
/* 0048EF00 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048EF04 51A00003 */  beql  $t5, $zero, .L0048EF14
/* 0048EF08 8FB801DC */   lw    $t8, 0x1dc($sp)
/* 0048EF0C AFAE017C */  sw    $t6, 0x17c($sp)
/* 0048EF10 8FB801DC */  lw    $t8, 0x1dc($sp)
.L0048EF14:
/* 0048EF14 330F0001 */  andi  $t7, $t8, 1
/* 0048EF18 51E00025 */  beql  $t7, $zero, .L0048EFB0
/* 0048EF1C 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048EF20 8D020000 */  lw    $v0, ($t0)
/* 0048EF24 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048EF28 8C4C001C */  lw    $t4, 0x1c($v0)
/* 0048EF2C 032B6821 */  addu  $t5, $t9, $t3
/* 0048EF30 AFAD011C */  sw    $t5, 0x11c($sp)
/* 0048EF34 00005825 */  move  $t3, $zero
/* 0048EF38 1180001B */  beqz  $t4, .L0048EFA8
/* 0048EF3C AFAC0180 */   sw    $t4, 0x180($sp)
/* 0048EF40 8C4B001C */  lw    $t3, 0x1c($v0)
/* 0048EF44 AFAD0184 */  sw    $t5, 0x184($sp)
/* 0048EF48 8C43001C */  lw    $v1, 0x1c($v0)
/* 0048EF4C 24050010 */  li    $a1, 16
/* 0048EF50 000B5900 */  sll   $t3, $t3, 4
/* 0048EF54 10600014 */  beqz  $v1, .L0048EFA8
/* 0048EF58 00603025 */   move  $a2, $v1
/* 0048EF5C 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EF60 8C440018 */  lw    $a0, 0x18($v0)
/* 0048EF64 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EF68 0320F809 */  jalr  $t9
/* 0048EF6C 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EF70 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EF74 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EF78 8F988CB8 */  lw     $t8, %got(st_pchdr)($gp)
/* 0048EF7C 8F180000 */  lw    $t8, ($t8)
/* 0048EF80 8F0F001C */  lw    $t7, 0x1c($t8)
/* 0048EF84 104F0008 */  beq   $v0, $t7, .L0048EFA8
/* 0048EF88 00000000 */   nop   
/* 0048EF8C 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EF90 02202025 */  move  $a0, $s1
/* 0048EF94 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EF98 0320F809 */  jalr  $t9
/* 0048EF9C 00000000 */   nop   
/* 0048EFA0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EFA4 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EFA8:
/* 0048EFA8 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048EFAC 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048EFB0:
/* 0048EFB0 31990010 */  andi  $t9, $t4, 0x10
/* 0048EFB4 1320002C */  beqz  $t9, .L0048F068
/* 0048EFB8 00000000 */   nop   
/* 0048EFBC 8D020000 */  lw    $v0, ($t0)
/* 0048EFC0 8C4E003C */  lw    $t6, 0x3c($v0)
/* 0048EFC4 11C00028 */  beqz  $t6, .L0048F068
/* 0048EFC8 00000000 */   nop   
/* 0048EFCC 8C4D0038 */  lw    $t5, 0x38($v0)
/* 0048EFD0 ADA00000 */  sw    $zero, ($t5)
/* 0048EFD4 8D180000 */  lw    $t8, ($t0)
/* 0048EFD8 8F0F0038 */  lw    $t7, 0x38($t8)
/* 0048EFDC ADE00004 */  sw    $zero, 4($t7)
/* 0048EFE0 8D0C0000 */  lw    $t4, ($t0)
/* 0048EFE4 8D990038 */  lw    $t9, 0x38($t4)
/* 0048EFE8 AF200008 */  sw    $zero, 8($t9)
/* 0048EFEC 8D0E0000 */  lw    $t6, ($t0)
/* 0048EFF0 8DCD0038 */  lw    $t5, 0x38($t6)
/* 0048EFF4 ADA0000C */  sw    $zero, 0xc($t5)
/* 0048EFF8 8D020000 */  lw    $v0, ($t0)
/* 0048EFFC 8FAF011C */  lw    $t7, 0x11c($sp)
/* 0048F000 8C58003C */  lw    $t8, 0x3c($v0)
/* 0048F004 01EB6021 */  addu  $t4, $t7, $t3
/* 0048F008 AFAC011C */  sw    $t4, 0x11c($sp)
/* 0048F00C 13000016 */  beqz  $t8, .L0048F068
/* 0048F010 AFB80138 */   sw    $t8, 0x138($sp)
/* 0048F014 AFAC013C */  sw    $t4, 0x13c($sp)
/* 0048F018 8C43003C */  lw    $v1, 0x3c($v0)
/* 0048F01C 24050008 */  li    $a1, 8
/* 0048F020 10600011 */  beqz  $v1, .L0048F068
/* 0048F024 00000000 */   nop   
/* 0048F028 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048F02C 8C440038 */  lw    $a0, 0x38($v0)
/* 0048F030 00603025 */  move  $a2, $v1
/* 0048F034 0320F809 */  jalr  $t9
/* 0048F038 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048F03C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048F040 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048F044 8DCE0000 */  lw    $t6, ($t6)
/* 0048F048 8DCD003C */  lw    $t5, 0x3c($t6)
/* 0048F04C 104D0006 */  beq   $v0, $t5, .L0048F068
/* 0048F050 00000000 */   nop   
/* 0048F054 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048F058 02202025 */  move  $a0, $s1
/* 0048F05C 0320F809 */  jalr  $t9
/* 0048F060 00000000 */   nop   
/* 0048F064 8FBC0034 */  lw    $gp, 0x34($sp)
.L0048F068:
/* 0048F068 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0048F06C 8FA4010C */  lw    $a0, 0x10c($sp)
/* 0048F070 0320F809 */  jalr  $t9
/* 0048F074 00000000 */   nop   
/* 0048F078 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048F07C 8FA4010C */  lw    $a0, 0x10c($sp)
/* 0048F080 8FA50110 */  lw    $a1, 0x110($sp)
/* 0048F084 8F998104 */  lw    $t9, %call16(fseek)($gp)
/* 0048F088 00003025 */  move  $a2, $zero
/* 0048F08C 0320F809 */  jalr  $t9
/* 0048F090 00000000 */   nop   
/* 0048F094 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048F098 2418070A */  li    $t8, 1802
/* 0048F09C A7B8012A */  sh    $t8, 0x12a($sp)
/* 0048F0A0 8F8F88FC */  lw     $t7, %got(stmagic)($gp)
/* 0048F0A4 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048F0A8 27A40128 */  addiu $a0, $sp, 0x128
/* 0048F0AC 85EF0000 */  lh    $t7, ($t7)
/* 0048F0B0 24050001 */  li    $a1, 1
/* 0048F0B4 24060060 */  li    $a2, 96
/* 0048F0B8 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048F0BC 0320F809 */  jalr  $t9
/* 0048F0C0 A7AF0128 */   sh    $t7, 0x128($sp)
/* 0048F0C4 24010060 */  li    $at, 96
/* 0048F0C8 10410006 */  beq   $v0, $at, .L0048F0E4
/* 0048F0CC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0048F0D0 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048F0D4 8F848044 */  lw    $a0, %got(RO_1000F414)($gp)
/* 0048F0D8 0320F809 */  jalr  $t9
/* 0048F0DC 2484F414 */   addiu $a0, %lo(RO_1000F414) # addiu $a0, $a0, -0xbec
/* 0048F0E0 8FBC0034 */  lw    $gp, 0x34($sp)
.L0048F0E4:
/* 0048F0E4 8F998108 */  lw    $t9, %call16(fclose)($gp)
/* 0048F0E8 8FA4010C */  lw    $a0, 0x10c($sp)
/* 0048F0EC 0320F809 */  jalr  $t9
/* 0048F0F0 00000000 */   nop   
/* 0048F0F4 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0048F0F8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048F0FC 8FB00014 */  lw    $s0, 0x14($sp)
/* 0048F100 8FB10018 */  lw    $s1, 0x18($sp)
/* 0048F104 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0048F108 8FB30020 */  lw    $s3, 0x20($sp)
/* 0048F10C 8FB40024 */  lw    $s4, 0x24($sp)
/* 0048F110 8FB50028 */  lw    $s5, 0x28($sp)
/* 0048F114 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0048F118 8FB70030 */  lw    $s7, 0x30($sp)
/* 0048F11C 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0048F120 03E00008 */  jr    $ra
/* 0048F124 27BD01D8 */   addiu $sp, $sp, 0x1d8
    .type st_writest, @function
    .size st_writest, .-st_writest
    .end st_writest
)"");
#if 0
? bzero(s16 *, ?); // extern
s32 dup(s32); // extern
? fclose(s32); // extern
s32 fdopen(s32, ? *); // extern
? fflush(s32); // extern
? fseek(s32, s32, ?); // extern
s32 fwrite(s8 *, s32, u16, s32); // extern
s32 lseek(s32, ?, ?); // extern
? st_error(? *, s32); // static
static s8 B_1001C2B0;
static ? msg_err; // unable to generate initializer
static ? msg_werr; // unable to generate initializer
static void *st_pchdr;
static s16 stmagic = 0x7009;

void st_writest(s32 fn, s32 flags) {
    CFDR *sp1D4;
    s32 sp1C4;
    s32 sp1C0;
    s32 sp1BC;
    s32 sp1B8;
    u16 sp1B6;
    u16 sp1B4;
    s32 sp1B0;
    s32 sp1AC;
    s32 sp1A0;
    s32 sp19C;
    s32 sp198;
    s32 sp194;
    s16 sp18C;
    void *sp188;
    s32 sp184;
    s32 sp180;
    s32 sp17C;
    s32 sp178;
    s32 sp174;
    s32 sp170;
    s32 sp16C;
    s32 sp168;
    s32 sp164;
    s32 sp160;
    s32 sp15C;
    s32 sp158;
    s32 sp154;
    s32 sp150;
    s32 sp14C;
    s32 sp148;
    s32 sp144;
    s32 sp140;
    s32 sp13C;
    s32 sp138;
    s32 sp134;
    s32 sp130;
    s32 sp12C;
    s16 sp12A;
    s16 sp128;
    s32 sp124;
    s32 sp120;
    s32 sp11C;
    s32 sp118;
    s32 sp114;
    s32 sp110;
    s32 sp10C;
    u32 sp108;
    void *spFC;
    ? spE8;
    s8 sp68;
    s32 sp58;
    CFDR *temp_v0_10;
    CFDR *temp_v0_11;
    CFDR *temp_v0_12;
    CFDR *temp_v0_15;
    CFDR *temp_v0_7;
    CFDR *temp_v0_9;
    s16 *temp_a0_7;
    s32 *temp_s3;
    s32 *temp_s3_2;
    s32 *temp_v0_4;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a2_6;
    s32 temp_s1_3;
    s32 temp_t4_2;
    s32 temp_t4_3;
    s32 temp_t4_4;
    s32 temp_t5_3;
    s32 temp_t5_4;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t6_4;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t9_5;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    u16 temp_s0;
    u16 temp_s0_2;
    u16 temp_s0_3;
    u16 temp_s1;
    u16 temp_s1_2;
    u16 temp_s1_4;
    u16 temp_v0_8;
    u32 temp_a0;
    u32 temp_t4;
    void *temp_t0;
    void *temp_t5_2;
    void *temp_t6_5;
    void *temp_t9;
    void *temp_t9_2;
    void *temp_t9_3;
    void *temp_t9_4;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    PDR *phi_v1;
    s32 phi_a1;
    u32 phi_a0;
    s32 phi_a1_2;
    s32 *phi_s3;
    s32 *phi_v1_2;
    s16 phi_v1_3;
    s8 phi_s2;
    s32 phi_s4;
    s8 *phi_s0;
    u32 phi_v0;
    s8 *phi_s0_2;
    void *phi_t0;
    s32 phi_t2;
    u32 phi_v1_4;
    u32 phi_s1;
    s32 phi_t2_2;
    void **phi_t0_2;
    void **phi_t0_3;
    s32 phi_a1_3;
    s32 phi_a0_2;
    s32 phi_s5;
    s8 *phi_s0_3;
    s32 phi_t2_3;
    s32 phi_t2_4;
    s32 phi_t2_5;
    s32 t3;
    CFDR *t1;

    sp120 = 0;
    bzero(&sp18C, 0x48);
    bzero(&sp128, sizeof (HDRR)); // 0x60
    sp114 = st_ifdmax();
    sp110 = lseek(fn, 0, 1);
    sp11C = lseek(fn, 0x60, 1);
    st_pchdr->unkC = sp114;
    temp_v0 = fdopen(dup(fn), "w");
    t3 = sp120;
    sp10C = temp_v0;
    if (temp_v0 == 0) {
        sp120 = t3;
        st_error("st_writest: cannot write to file number %d\n", fn);
    }

    if ((flags & ST_PLINES) != 0) {
        if (sp114 > 0) {
            sp118 = 0;
            do {
                sp124 = 0;
                sp120 = t3;
                t1 = st_pcfd_ifd(sp118);
                sp188 = t1->pfd;
                temp_v1 = t1->pfd->unk1C;
                phi_t2_2 = sp124;
                phi_t2_3 = sp124;
                if ((temp_v1 != 0) && (t1->pline != 0)) {
                    t1->pfd->unk18 = sp12C;
                    sp12C += temp_v1;
                    sp188->unk40 = t3;
                    sp108 = 0;
                    temp_s1 = sp188->unk2A;
                    phi_s1 = (u32) temp_s1;
                    if (temp_s1 != 0) {
                        sp58 = 0;
                        do {
                            temp_t0 = t1->ppd + sp58;
                            phi_t0 = temp_t0;
                            phi_t2 = phi_t2_3;
                            phi_t2_5 = phi_t2_3;
                            if ((temp_t0->unk8 != -1) && (temp_t0->unk28 != -1) && (temp_t0->unk2C != -1)) {
                                temp_t0->unk30 = (s32) (t3 - sp188->unk40);
                                temp_s1_2 = sp188->unk2A;
                                temp_a1 = sp188->unk1C;
                                phi_a1 = temp_a1;
                                phi_a0 = 0U;
                                phi_a1_2 = temp_a1;
                                phi_s1 = (u32) temp_s1_2;
                                if (temp_s1_2 != 0) {
                                    phi_v1 = t1->ppd;
                                    do {
                                        temp_v0_3 = phi_v1->iline;
                                        temp_a0 = phi_a0 + 1;
                                        phi_a0 = temp_a0;
                                        phi_a1_3 = phi_a1;
                                        if ((temp_t0->unk8 < temp_v0_3) && (phi_v1->lnLow != -1) && (phi_v1->lnHigh != -1) && (temp_v0_3 < phi_a1)) {
                                            phi_a1_3 = temp_v0_3;
                                        }
                                        phi_v1 += 0x34;
                                        phi_a1 = phi_a1_3;
                                        phi_a1_2 = phi_a1_3;
                                    } while (temp_a0 < (u32) temp_s1_2);
                                }
                                if (phi_a1_2 > 0) {
                                    temp_a2 = temp_t0->unk8;
                                    phi_s2 = -1;
                                    phi_s4 = 0;
                                    if (temp_a2 >= 0) {
                                        temp_v0_4 = t1->pline;
                                        temp_s3 = &temp_v0_4[temp_a2];
                                        temp_v1_2 = &temp_v0_4[phi_a1_2];
                                        phi_s3 = temp_s3;
                                        phi_v1_2 = temp_v1_2;
                                        phi_s0 = &sp68;
                                        phi_s5 = temp_t0->unk28;
                                        if ((u32) temp_v1_2 >= (u32) temp_s3) {
                                            do {
                                                phi_s0_2 = phi_s0;
                                                phi_s0_3 = phi_s0;
                                                phi_t2_4 = phi_t2;
                                                if (phi_s3 == phi_v1_2) {
                                                    phi_v1_3 = 1;
                                                } else {
                                                    temp_v0_5 = *phi_s3;
                                                    phi_a0_2 = temp_v0_5;
                                                    if (temp_v0_5 == 0) {
                                                        phi_a0_2 = phi_t0->unk28;
                                                    }
                                                    phi_v1_3 = (s16) (phi_a0_2 - phi_s5);
                                                }
                                                if ((phi_v1_3 != 0) || (phi_v0 = phi_s0 + 3, (phi_s2 == 8))) {
                                                    phi_s5 += phi_v1_3;
                                                    if ((phi_s2 != -1) && (phi_s4 >= -7) && (phi_s4 < 8)) {
                                                        phi_s0->unk0 = (s8) ((phi_s4 * 0x10) | phi_s2);
                                                        phi_s0_3 = phi_s0 + 1;
                                                    } else if (phi_s2 != -1) {
                                                        phi_s0->unk0 = phi_s2;
                                                        phi_s0->unk1 = (s8) (phi_s4 >> 8);
                                                        phi_s0->unk2 = (s8) phi_s4;
                                                        phi_s0->unk0 = (s8) (phi_s0->unk0 | 0x80);
                                                        phi_s0_3 = phi_s0 + 3;
                                                    }
                                                    phi_v0 = phi_s0_3 + 3;
                                                    phi_s0_2 = phi_s0_3;
                                                    phi_s2 = 0;
                                                    phi_s4 = (s32) phi_v1_3;
                                                } else {
                                                    phi_s2 += 1;
                                                }
                                                temp_s1_3 = phi_s0_2 - &sp68;
                                                phi_s0 = phi_s0_2;
                                                if ((phi_v0 >= (u32) &spE8) || ((temp_v1_3 = &t1->pline[phi_a1_2], phi_v1_4 = (u32) temp_v1_3, (phi_s3 == temp_v1_3)) && ((phi_s0_2 - &sp68) > 0))) {
                                                    spFC = phi_t0;
                                                    sp1D4 = t1;
                                                    sp124 = phi_t2;
                                                    sp120 = t3;
                                                    fwrite(&sp68, temp_s1_3, 1U, sp10C);
                                                    t3 += temp_s1_3;
                                                    phi_v1_4 = (u32) &t1->pline[phi_a1_2];
                                                    phi_s0 = &sp68;
                                                    phi_t2_4 = phi_t2 + temp_s1_3;
                                                }
                                                temp_s3_2 = phi_s3 + 4;
                                                phi_s3 = temp_s3_2;
                                                phi_v1_2 = (s32 *) phi_v1_4;
                                                phi_t2 = phi_t2_4;
                                                phi_t2_5 = phi_t2_4;
                                            } while (phi_v1_4 >= (u32) temp_s3_2);
                                            phi_s1 = (u32) sp188->unk2A;
                                        }
                                    }
                                }
                            }
                            temp_t4 = sp108 + 1;
                            sp58 += 0x34;
                            sp108 = temp_t4;
                            phi_t2_2 = phi_t2_5;
                            phi_t2_3 = phi_t2_5;
                        } while (temp_t4 < phi_s1);
                    }
                    sp188->unk44 = phi_t2_2;
                }
                temp_v0_6 = sp118 + 1;
                sp118 = temp_v0_6;
            } while (temp_v0_6 != sp114);
        }
        temp_s0 = -t3 & 3;
        if (sp12C != 0) {
            if (temp_s0 != 0) {
                sp120 = t3;
                if (fwrite(&B_1001C2B0, 1, temp_s0, sp10C) != temp_s0) {
                    sp120 = t3;
                    st_error("cannot write round bytes for lines\n");
                }
                t3 += 3;
                t3 &= -4;
            }
            sp130 = t3;
            sp134 = sp11C;
        }
    }

    if ((flags & 0x100) != 0) {
        sp11C += t3;
        t3 = 0;
        if (sp114 > 0) {
            sp118 = 0;
            do {
                sp120 = t3;
                temp_v0_7 = st_pcfd_ifd(sp118);
                temp_t5_2 = temp_v0_7->pfd;
                sp188 = temp_t5_2;
                temp_t5_2->unk28 = (s16) (sp1B4 + sp1B6);
                temp_s1_4 = sp188->unk2A;
                t3 += temp_s1_4 * 0x34;
                if (temp_s1_4 != 0) {
                    sp120 = t3;
                    if (fwrite((s8 *) temp_v0_7->ppd, 0x34, temp_s1_4, sp10C) != sp188->unk2A) {
                        sp120 = t3;
                        st_error("cannot write pfield");
                    }
                }
                sp1B4 += sp1B6;
                temp_v0_8 = sp188->unk2A;
                temp_v1_4 = sp118 + 1;
                sp140 += temp_v0_8;
                sp118 = temp_v1_4;
                sp1B6 = temp_v0_8;
            } while (temp_v1_4 != sp114);
        }
        if (sp140 != 0) {
            sp144 = sp11C;
        }
    }
    if ((flags & 2) != 0) {
        sp11C += t3;
        t3 = 0;
        if (sp114 > 0) {
            sp118 = 0;
            do {
                sp120 = t3;
                temp_v0_9 = st_pcfd_ifd(sp118);
                temp_t9 = temp_v0_9->pfd;
                sp188 = temp_t9;
                temp_t9->unk10 = (s32) (sp19C + sp1A0);
                temp_a2_2 = sp188->unk14;
                t3 += temp_a2_2 * 0xC;
                if (temp_a2_2 != 0) {
                    sp120 = t3;
                    if (fwrite((s8 *) temp_v0_9->psym, 0xC, (u16) temp_a2_2, sp10C) != sp188->unk14) {
                        sp120 = t3;
                        st_error("cannot write pfield");
                    }
                }
                sp19C += sp1A0;
                temp_a0_2 = sp188->unk14;
                temp_t6 = sp118 + 1;
                sp148 += temp_a0_2;
                sp118 = temp_t6;
                sp1A0 = temp_a0_2;
            } while (temp_t6 != sp114);
        }
        if (sp148 != 0) {
            sp14C = sp11C;
        }
    }
    if ((flags & 0x20) != 0) {
        sp11C += t3;
        t3 = 0;
        if (sp114 > 0) {
            sp118 = 0;
            do {
                sp120 = t3;
                temp_v0_10 = st_pcfd_ifd(sp118);
                temp_t9_2 = temp_v0_10->pfd;
                sp188 = temp_t9_2;
                temp_t9_2->unk20 = (s32) (sp1AC + sp1B0);
                temp_a2_3 = sp188->unk24;
                t3 += temp_a2_3 * 0xC;
                if (temp_a2_3 != 0) {
                    sp120 = t3;
                    if (fwrite((s8 *) temp_v0_10->popt, 0xC, (u16) temp_a2_3, sp10C) != sp188->unk24) {
                        sp120 = t3;
                        st_error("cannot write pfield");
                    }
                }
                sp1AC += sp1B0;
                temp_a0_3 = sp188->unk24;
                temp_t6_2 = sp118 + 1;
                sp150 += temp_a0_3;
                sp118 = temp_t6_2;
                sp1B0 = temp_a0_3;
            } while (temp_t6_2 != sp114);
        }
        if (sp150 != 0) {
            sp154 = sp11C;
        }
    }
    if ((flags & 0x400) != 0) {
        sp11C += t3;
        t3 = 0;
        if (sp114 > 0) {
            sp118 = 0;
            do {
                sp120 = t3;
                temp_v0_11 = st_pcfd_ifd(sp118);
                temp_t9_3 = temp_v0_11->pfd;
                sp188 = temp_t9_3;
                temp_t9_3->unk2C = (s32) (sp1B8 + sp1BC);
                temp_a2_4 = sp188->unk30;
                t3 += temp_a2_4 * 4;
                if (temp_a2_4 != 0) {
                    sp120 = t3;
                    if (fwrite((s8 *) temp_v0_11->paux, 4, (u16) temp_a2_4, sp10C) != sp188->unk30) {
                        sp120 = t3;
                        st_error("cannot write pfield");
                    }
                }
                sp1B8 += sp1BC;
                temp_a0_4 = sp188->unk30;
                temp_t6_3 = sp118 + 1;
                sp158 += temp_a0_4;
                sp118 = temp_t6_3;
                sp1BC = temp_a0_4;
            } while (temp_t6_3 != sp114);
        }
        if (sp158 != 0) {
            sp15C = sp11C;
        }
    }
    if ((flags & 0x80) != 0) {
        sp11C += t3;
        t3 = 0;
        if (sp114 > 0) {
            sp118 = 0;
            do {
                sp120 = t3;
                temp_v0_12 = st_pcfd_ifd(sp118);
                temp_t9_4 = temp_v0_12->pfd;
                sp188 = temp_t9_4;
                temp_t9_4->unk8 = (s32) (sp194 + sp198);
                temp_a2_5 = sp188->unkC;
                t3 += temp_a2_5;
                if (temp_a2_5 != 0) {
                    sp120 = t3;
                    if (fwrite(temp_v0_12->pss, 1, (u16) temp_a2_5, sp10C) != sp188->unkC) {
                        sp120 = t3;
                        st_error("cannot write pfield");
                    }
                }
                sp194 += sp198;
                temp_a0_5 = sp188->unkC;
                temp_t6_4 = sp118 + 1;
                sp160 += temp_a0_5;
                sp118 = temp_t6_4;
                sp198 = temp_a0_5;
            } while (temp_t6_4 != sp114);
        }
        temp_s0_2 = -t3 & 3;
        if (temp_s0_2 != 0) {
            sp120 = t3;
            if (fwrite(&B_1001C2B0, 1, temp_s0_2, sp10C) != temp_s0_2) {
                sp120 = t3;
                st_error("cannot write round bytes for strings\n");
            }
            t3 += 3;
            t3 &= -4;
        }
        sp160 = t3;
        if (t3 != 0) {
            sp164 = sp11C;
        }
    }
    if ((flags & 0x800) != 0) {
        temp_v0_13 = st_pchdr;
        temp_t7 = sp11C + t3;
        t3 = 0;
        temp_t5_3 = temp_v0_13->unk28;
        sp11C = temp_t7;
        sp168 = temp_t5_3;
        if (temp_t5_3 != 0) {
            t3 = temp_v0_13->unk28;
            sp16C = temp_t7;
            temp_v1_5 = temp_v0_13->unk28;
            if (temp_v1_5 != 0) {
                sp120 = t3;
                if (fwrite(temp_v0_13->unk24, 1, (u16) temp_v1_5, sp10C) != st_pchdr->unk28) {
                    sp120 = t3;
                    st_error("cannot write cur table\n");
                }
            }
        }
        temp_s0_3 = -t3 & 3;
        if (temp_s0_3 != 0) {
            sp120 = t3;
            if (fwrite(&B_1001C2B0, 1, temp_s0_3, sp10C) != temp_s0_3) {
                sp120 = t3;
                st_error("cannot write round bytes for strings\n");
            }
            t3 += 3;
            t3 &= -4;
        }
        sp168 = t3;
    }
    if ((flags & 0x200) != 0) {
        temp_v0_14 = st_pchdr;
        temp_t8 = temp_v0_14->unkC;
        temp_t9_5 = sp11C + t3;
        sp11C = temp_t9_5;
        t3 = 0;
        sp170 = temp_t8;
        if (temp_t8 != 0) {
            t3 = temp_v0_14->unkC;
            sp174 = temp_t9_5;
            temp_v1_6 = temp_v0_14->unkC;
            t3 *= 8;
            t3 *= 2;
            t3 *= 8;
            if (temp_v1_6 != 0) {
                sp120 = t3;
                if (fwrite(temp_v0_14->unk8, 0x48, (u16) temp_v1_6, sp10C) != st_pchdr->unkC) {
                    sp120 = t3;
                    st_error("cannot write cur table\n");
                }
            }
        }
    }
    phi_t0_2 = &st_pchdr;
    phi_t0_2 = &st_pchdr;
    if ((flags & 0x40) != 0) {
        sp11C += t3;
        t3 = 0;
        if (sp114 > 0) {
            sp118 = 0;
            do {
                sp120 = t3;
                temp_v0_15 = st_pcfd_ifd(sp118);
                temp_t6_5 = temp_v0_15->pfd;
                sp188 = temp_t6_5;
                temp_t6_5->unk34 = (s32) (sp1C0 + sp1C4);
                temp_a2_6 = sp188->unk38;
                t3 += temp_a2_6 * 4;
                if (temp_a2_6 != 0) {
                    sp120 = t3;
                    if (fwrite((s8 *) temp_v0_15->prfd, 4, (u16) temp_a2_6, sp10C) != sp188->unk38) {
                        sp120 = t3;
                        st_error("cannot write pfield");
                    }
                }
                sp1C0 += sp1C4;
                temp_a0_6 = sp188->unk38;
                temp_t4_2 = sp118 + 1;
                sp178 += temp_a0_6;
                sp118 = temp_t4_2;
                sp1C4 = temp_a0_6;
            } while (temp_t4_2 != sp114);
            phi_t0_2 = &st_pchdr;
        }
        if (sp178 != 0) {
            sp17C = sp11C;
        }
    }
    phi_t0_3 = phi_t0_2;
    if ((flags & 1) != 0) {
        temp_v0_16 = *phi_t0_2;
        temp_t4_3 = temp_v0_16->unk1C;
        temp_t5_4 = sp11C + t3;
        sp11C = temp_t5_4;
        t3 = 0;
        sp180 = temp_t4_3;
        if (temp_t4_3 != 0) {
            t3 = temp_v0_16->unk1C;
            sp184 = temp_t5_4;
            temp_v1_7 = temp_v0_16->unk1C;
            t3 *= 0x10;
            if (temp_v1_7 != 0) {
                sp120 = t3;
                if (fwrite(temp_v0_16->unk18, 0x10, (u16) temp_v1_7, sp10C) != st_pchdr->unk1C) {
                    sp120 = t3;
                    st_error("cannot write cur table\n");
                }
            }
        }
        phi_t0_3 = &st_pchdr;
    }
    if ((flags & 0x10) != 0) {
        temp_v0_17 = *phi_t0_3;
        if (temp_v0_17->unk3C != 0) {
            *temp_v0_17->unk38 = 0;
            (*phi_t0_3)->unk38->unk4 = 0;
            (*phi_t0_3)->unk38->unk8 = 0;
            (*phi_t0_3)->unk38->unkC = 0;
            temp_v0_18 = *phi_t0_3;
            temp_t8_2 = temp_v0_18->unk3C;
            temp_t4_4 = sp11C + t3;
            sp11C = temp_t4_4;
            sp138 = temp_t8_2;
            if (temp_t8_2 != 0) {
                sp13C = temp_t4_4;
                temp_v1_8 = temp_v0_18->unk3C;
                if ((temp_v1_8 != 0) && (fwrite(temp_v0_18->unk38, 8, (u16) temp_v1_8, sp10C) != st_pchdr->unk3C)) {
                    st_error("cannot write cur table\n");
                }
            }
        }
    }
    fflush(sp10C);
    fseek(sp10C, sp110, 0);
    sp12A = 0x70A;
    temp_a0_7 = &sp128;
    sp128 = stmagic;
    if (fwrite((s8 *) temp_a0_7, 1, 0x60U, sp10C) != 0x60) {
        st_error("cannot write symbol header\n");
    }
    fclose(sp10C);
}
#endif

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel st_setstmagic
    .ent st_setstmagic
/* 0048F128 3C1C0FB9 */  .cpload $t9
/* 0048F12C 279CB168 */  
/* 0048F130 0399E021 */  
/* 0048F134 AFA40000 */  sw    $a0, ($sp)
/* 0048F138 8F8188FC */  lw     $at, %got(stmagic)($gp)
/* 0048F13C 00042400 */  sll   $a0, $a0, 0x10
/* 0048F140 00042403 */  sra   $a0, $a0, 0x10
/* 0048F144 03E00008 */  jr    $ra
/* 0048F148 A4240000 */   sh    $a0, ($at)
    .type st_setstmagic, @function
    .size st_setstmagic, .-st_setstmagic
    .end st_setstmagic
)"");
