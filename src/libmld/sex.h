/* Copyright (C) 1989 Silicon Graphics, Inc. All rights reserved.  */
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
/* $Header: /proj/irix5.3/isms/cmplrs/commonlib/include/RCS/sex.h,v 7.7 1993/06/08 01:18:56 bettina Exp $ */

/* $Revision: 7.7 $ */
#ifndef __INCLUDE_SEX_H__
#define __INCLUDE_SEX_H__

#ifdef __cplusplus
extern "C" {
#endif

/*
 * This file contains macro constant names for byte sex flags, the macros for
 * byte swapping words and half words, and the external declarations for the
 * routines in libsex.a which change the sex of structures that appear
 * in object files.
 */

/*
 * Byte sex constants
 */
#define BIGENDIAN	0
#define LITTLEENDIAN	1
#define UNKNOWNENDIAN	2

/*
 * Byte swaps for word and half words.
 */
#define swap_word(a) ( ((a) << 24) | \
		      (((a) << 8) & 0x00ff0000) | \
		      (((a) >> 8) & 0x0000ff00) | \
	((unsigned int)(a) >>24) )

#define swap_half(a) ( ((a & 0xff) << 8) | ((unsigned short)(a) >> 8) )

#include "syms.h"
struct aouthdr;
struct filehdr;
union  gp_table;
struct reloc;
struct scnhdr;

int gethostsex(void);

void swap_filehdr(struct filehdr *, int);

void swap_aouthdr(struct aouthdr *, int);

void swap_scnhdr(struct scnhdr *, int);

void swap_hdr(struct __sgi_hdrr_s *, int);

void swap_fd(struct fdr *, int, int);

void swap_fi(pFIT pfi, int count, int destsex);

void swap_sym(struct __sgi_symr_s *, int, int);

void swap_ext(struct __sgi_extr__ *, int, int);

void swap_dn(pDNR pdn, int idnMax, int hostsex);

void swap_pd(struct pdr *, int, int);

void swap_opt(struct __sgi_optr_s *, int, int);

void swap_aux(union __sgi_auxu_u *, int, int);

#if 0 /* currently no such function available */
void swap_line();
#endif

void swap_reloc(struct reloc *, int, int);

#ifndef __sgi /* prototype moved to ar.h */
struct ranlib;
void swap_ranlib(struct ranlib *, int);
#endif

void swap_gpt(union gp_table *, int, int);

#ifdef __cplusplus
}
#endif

#endif	/* __INCLUDE_SEX_H__ */
