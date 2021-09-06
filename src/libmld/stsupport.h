/*
 * |-----------------------------------------------------------|
 * | Copyright (c) 1991, 1990 MIPS Computer Systems, Inc.      |
 * | All Rights Reserved                                       |
 * |-----------------------------------------------------------|
 * |          Restricted Rights Legend                         |
 * | Use, duplication, or disclosure by the Government is      |
 * | subject to restrictions as set forth in                   |
 * | subparagraph (c)(1)(ii) of the Rights in Technical        |
 * | Data and Computer Software Clause of DFARS 252.227-7013.  |
 * |         MIPS Computer Systems, Inc.                       |
 * |         950 DeGuigne Avenue                               |
 * |         Sunnyvale, California 94088-3650, USA             |
 * |-----------------------------------------------------------|
 */
/* $Header: /proj/irix5.3/isms/cmplrs/include/RCS/stsupport.h,v 7.7 1992/06/26 14:22:53 daveb Exp $ */
/*
 * Author       Mark I. Himelstein
 * Date Started 5/15/85
 * Purpose      provide support to uc to produce mips symbol tables.
 */
#ifndef __CMPLRS_STSUPPORT_H
#define __CMPLRS_STSUPPORT_H

#if 1//(defined(_LANGUAGE_C) || (defined(_LANGUAGE_C_PLUS_PLUS)))
extern AUXU _auxtemp;
#define AUXINT(c) ((_auxtemp.isym = c), _auxtemp)


/* the following struct frames the FDR dtructure and is used at runtime
 *      to access the objects in the FDR with pointers (since the FDR
 *      only has indeces.
 */
typedef struct {
    /*  0x0 */ pFDR    pfd;            /* file descriptor for this file */
    /*  0x4 */ pSYMR   psym;           /* symbols for this file */
    /*  0x8 */ int     csymMax;        /* max allocated */
    /*  0xC */ pAUXU   paux;           /* auxiliaries for this file */
    /* 0x10 */ int     cauxMax;        /* max allocated */
    /* 0x14 */ char    *pss;           /* strings space for this file */
    /* 0x18 */ int     cbssMax;        /* max bytes allowed in ss */
    /* 0x1C */ pOPTR   popt;           /* optimization table for this file */
    /* 0x20 */ int     coptMax;        /* max allocated */
    /* 0x24 */ pLINER  pline;          /* lines for this file */
    /* 0x28 */ int     clineMax;       /* max allocated */
    /* 0x2C */ pRFDT   prfd;           /* file indirect for this file */
    /* 0x30 */ int     crfdMax;        /* max allocated */
    /* 0x34 */ pPDR    ppd;            /* procedure descriptor tables */
    /* 0x38 */ int     cpdMax;         /* max allocated */
    /* 0x3C */ int     freadin;        /* set if read in */
} CFDR, *pCFDR; // size 0x40
#define cbCFDR sizeof (CFDR)
#define cfdNil ((pCFDR) 0)
#define icfdNil -1


/* the following struct embodies the HDRR dtructure and is used at runtime
 *      to access the objects in the HDRR with pointers (since the HDRR
 *      only has indeces.
 */
typedef struct {
    /*  0x0 */ int     fappend;        /* are we appending to this beast ? */
    /*  0x4 */ pCFDR   pcfd;           /* the compile time file descriptors */
    /*  0x8 */ pFDR    pfd;            /* all of the file descriptors in this cu */
    /*  0xC */ int     cfd;            /* count of file descriptors */
    /* 0x10 */ int     cfdMax;         /* max file descriptors */
    /* 0x14 */ pSYMR   psym;           /* the symbols for this cu */
    /* 0x18 */ pEXTR   pext;           /* externals for this cu */
    /* 0x1C */ int     cext;           /* number of externals */
    /* 0x20 */ int     cextMax;        /* max currently allowed */
    /* 0x24 */ char    *pssext;        /* string space for externals */
    /* 0x28 */ int     cbssext;        /* # of bytes in ss */
    /* 0x2C */ int     cbssextMax;     /* # of bytes allowed in ss */
    /* 0x30 */ pAUXU   paux;           /* auxiliaries for this cu */
    /* 0x34 */ char    *pss;           /* string space for this cu */
    /* 0x38 */ pDNR    pdn;            /* dense number table for this cu */
    /* 0x3C */ int     cdn;            /* number of dn's */
    /* 0x40 */ int     cdnMax;         /* max currently allowed */
    /* 0x44 */ pOPTR   popt;           /* optimization table for this cu */
    /* 0x48 */ pLINER  pline;          /* lines for this cu */
    /* 0x4C */ pRFDT   prfd;           /* file indirect for this cu */
    /* 0x50 */ pPDR    ppd;            /* procedure descriptor tables */
    /* 0x54 */ int     flags;          /* which has been read in already */
    /* 0x58 */ int     fswap;          /* do dubtables need to be swapped */
    /* 0x5C */ HDRR    hdr;            /* header from disk */
} CHDRR, *pCHDRR; // size 0xBC

//_Static_assert(sizeof(CHDRR) == 188);
#define cbCHDRR sizeof (CHDRR)
#define chdrNil ((pCHDRR) 0)
#define ichdrNil -1
#endif /* _LANGUAGE_C */

/* constants and macros */

#define ST_FILESINIT    25      /* initial number of files */
#define ST_STRTABINIT   512     /* initial number of bytes in strring space */
#define ST_EXTINIT      32      /* initial number of symbols/file */
#define ST_SYMINIT      64      /* initial number of symbols/file */
#define ST_AUXINIT      64      /* initial number of auxiliaries/file */
#define ST_LINEINIT     512     /* initial number of auxiliaries/file */
#define ST_PDINIT       32      /* initial number of procedures in one file */
#define ST_DNINIT       128     /* initial # of dense numbers */
#define ST_FDISS        1       /* we expect a fd's iss to be this */
#define ST_IDNINIT      2       /* start the dense num tab with this entry */
#define ST_PROCTIROFFSET 1      /* offset from aux of proc's tir */
#define ST_RELOC        1       /* this sym has been reloced already */

#ifdef _LANGUAGE_FORTRAN
#define ST_EXTIFD       0x7fffffff      /* ifd for externals */
#define ST_RFDESCAPE    0xfff   /* rndx.rfd escape says next aux is rfd */
#define ST_ANONINDEX    0xfffff /* rndx.index for anonymous names */
#endif

#if 1//(defined(_LANGUAGE_C) || (defined(_LANGUAGE_C_PLUS_PLUS)))
#define ST_EXTIFD       0x7fffffff      /* ifd for externals */
#define ST_RFDESCAPE    0xfff   /* rndx.rfd escape says next aux is rfd */
#define ST_ANONINDEX    0xfffff /* rndx.index for anonymous names */
#define ST_PEXTS        0x01    /* mask, if set externals */
#define ST_PSYMS        0x02    /* mask, if set symbols */
#define ST_PLINES       0x04    /* mask, if set lines */
#define ST_PHEADER      0x08    /* mask, if set headers */
#define ST_PDNS         0x10    /* mask, if set dense numbers */
#define ST_POPTS        0x20    /* mask, if set optimization entries */
#define ST_PRFDS        0x40    /* mask, if set file indirect entries */
#define ST_PSSS         0x80    /* mask, if set string space */
#define ST_PPDS         0x100   /* mask, if set proc descriptors */
#define ST_PFDS         0x200   /* mask, if set file descriptors */
#define ST_PAUXS        0x400   /* mask, if set auxiliaries */
#define ST_PSSEXTS      0x800   /* mask, if set external string space */
#endif /* _LANGUAGE_C */

#ifdef _LANGUAGE_PASCAL
#define ST_EXTIFD       16#7fffffff     /* ifd for externals */
#define ST_RFDESCAPE    16#fff  /* rndx.rfd escape says next aux is rfd */
#define ST_ANONINDEX    16#fffff /* rndx.index for anonymous names */
#define ST_PEXTS        16#01   /* mask, if set externals */
#define ST_PSYMS        16#02   /* mask, if set symbols */
#define ST_PLINES       16#04   /* mask, if set lines */
#define ST_HEADER       16#08   /* mask, if set header */
#define ST_PDNS         16#10   /* mask, if set dense numbers */
#define ST_POPTS        16#20   /* mask, if set optimization entries */
#define ST_PRFDS        16#40   /* mask, if set file indirect entries */
#define ST_PSSS         16#80   /* mask, if set string space */
#define ST_PPDS         16#100  /* mask, if set proc descriptors */
#define ST_PFDS         16#200  /* mask, if set file descriptors */
#define ST_PAUXS        16#400  /* mask, if set auxiliaries */
#define ST_PSSEXTS      16#800  /* mask, if set external string space */
#endif /* _LANGUAGE_PASCAL */

#define ST_FCOMPLEXBT(bt) ((bt == btStruct) || (bt == btUnion) || (bt == btTypedef) || (bt == btEnum))
#define valueNil        0
#define export

/*
 * Constants to describe aux types used in swap_aux( , ,type);
 */
#define ST_AUX_TIR      0
#define ST_AUX_RNDXR    1
#define ST_AUX_DNLOW    2
#define ST_AUX_DNMAC    3
#define ST_AUX_ISYM     4
#define ST_AUX_ISS      5
#define ST_AUX_WIDTH    6

#endif
