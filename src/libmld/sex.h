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
	((unsigned long)(a) >>24) )

#define swap_half(a) ( ((a & 0xff) << 8) | ((unsigned short)(a) >> 8) )

struct aouthdr;
struct fdr;
struct filehdr;
union  gp_table;
struct pdr;
struct reloc;
struct scnhdr;
union  __sgi_auxu_u;
struct __sgi_extr__;
struct __sgi_hdrr_s;
struct __sgi_optr_s;
struct __sgi_symr_s;

extern
int
gethostsex(void);

extern
void
swap_filehdr(struct filehdr *, long);

extern
void
swap_aouthdr(struct aouthdr *, long);

extern
void
swap_scnhdr(struct scnhdr *, long);

extern
void
swap_hdr(struct __sgi_hdrr_s *, long);

extern
void
swap_fd(struct fdr *, long, long);

extern
void
swap_fi(long * , long, long);

extern
void
swap_sym(struct __sgi_symr_s *, long,long);

extern
void
swap_ext(struct __sgi_extr__ *,long,long);

extern
void
swap_pd(struct pdr *,long,long);

extern
void
swap_opt(struct __sgi_optr_s *,long,long);

extern
void
swap_aux(union __sgi_auxu_u *,long,long);

#if 0 /* currently no such function available */
extern
void
swap_line();
#endif

extern
void
swap_reloc(struct reloc *,long,long);

#ifndef __sgi /* prototype moved to ar.h */
extern
void
swap_ranlib(struct ranlib *,long);
#endif

extern
void
swap_gpt(union gp_table *,long,long);

#ifdef __cplusplus
}
#endif

#endif	/* __INCLUDE_SEX_H__ */
