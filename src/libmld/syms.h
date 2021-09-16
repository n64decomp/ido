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
/* $Header: /proj/irix5.3/isms/cmplrs/include/RCS/syms.h,v 7.13 1994/08/08 23:13:41 gischer Exp $ */

/*	Copyright (c) 1984 AT&T	*/
/*	  All Rights Reserved  	*/

/*	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T	*/
/*	The copyright notice above does not evidence any   	*/
/*	actual or intended publication of such source code.	*/

#ifndef __SYMS_H__
#define __SYMS_H__

#ifdef __cplusplus
extern "C" {
#endif

/*	Defines for "special" symbols   */


#if 1//(defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS))
#define _ETEXT	"_etext"
#define	_EDATA	"_edata"
#define	_END	"_end"
#define _LIB_VERSION "_lib_version"
#define _UNWIND "__unwind"
#define _WEAK_ETEXT     "etext"
#define _WEAK_EDATA     "edata"
#define _WEAK_END       "end"
#define _WEAK_UNWIND "unwind"
#endif /* defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS) */
#ifdef _LANGUAGE_PASCAL
#define _ETEXT	'_etext\0'
#define	_EDATA	'_edata\0'
#define	_END	'_end\0'
#define _UNWIND '__unwind\0'
#define _WEAK_ETEXT     'etext\0'
#define _WEAK_EDATA     'edata\0'
#define _WEAK_END       'end\0'
#define _WEAK_UNWIND    'unwind\0'
#endif /* _LANGUAGE_PASCAL */
/*
 * The displacement of the gp is from the start of the small data section
 * is GP_DISP.  The GP_PAD is the padding of the gp area so small negitive
 * offset from gp relocation values can allways be used.
 */
#define GP_PAD	16
#define GP_DISP	(32768 - GP_PAD)
#define GP_SIZE (GP_DISP+32767)
/* "special" symbols for starts of sections */
#if 1// (defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS))
#define	_FTEXT	"_ftext"
#define	_FDATA	"_fdata"
#define	_FBSS	"_fbss"
#define	_GP	"_gp"
#define _GP_DISPLACEMENT	"_gp_disp"
#define	_FPDATA	"_fpdata"
#define	_FPDATA_SIZE	"_fpdata_size"
#define	_PROCEDURE_TABLE	"_procedure_table"
#define	_PROCEDURE_TABLE_SIZE	"_procedure_table_size"
#define	_PROCEDURE_STRING_TABLE	"_procedure_string_table"
#define	_RT_SYMBOL_TABLE	"_rt_symbol_table"
#define	_RT_SYMBOL_TABLE_SIZE	"_rt_symbol_table_size"
#define	_RT_SYMBOL_STRING_TABLE	"_rt_symbol_string_table"
#define	_PC_NLC_GOTO   	"__pc_nloc_goto"
#define	_COBOL_MAIN	"_cobol_main"
#endif /* defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS) */
#ifdef _LANGUAGE_PASCAL
#define	_FTEXT	'_ftext\0'
#define	_FDATA	'_fdata\0'
#define	_FBSS	'_fbss\0'
#define	_GP	'_gp\0'
#define _GP_DISPLACEMENT	'_gp_disp\0'
#define	_FPDATA	'_fpdata\0'
#define	_FPDATA_SIZE	'_fpdata_size\0'
#define	_PROCEDURE_TABLE	'_procedure_table\0'
#define	_PROCEDURE_TABLE_SIZE	'_procedure_table_size\0'
#define	_PROCEDURE_STRING_TABLE	'_procedure_string_table\0'
#define	_RT_SYMBOL_TABLE	'_rt_symbol_table\0'
#define	_RT_SYMBOL_TABLE_SIZE	'_rt_symbol_table_size\0'
#define	_RT_SYMBOL_STRING_TABLE	'_rt_symbol_string_table\0'
#define	_PC_NLC_GOTO   	'__pc_nlc_goto\0'
#define	_COBOL_MAIN	'_cobol_main\0'
#endif /* _LANGUAGE_PASCAL */


#if 1//(defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS))
#define _START	"__start"
#endif /* defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS) */
#ifdef _LANGUAGE_PASCAL
#define _START	'__start\0'
#endif /* _LANGUAGE_PASCAL */

//#if  defined(__mips)

#include "symconst.h"
#if 1//(defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS))
#include "sym.h"
#include "stsupport.h"
#endif /* defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS) */

#if 0 /* !defined(__mips) */

/*		Storage Classes are defined in storclass.h  */
#include "storclass.h"

/*		Number of characters in a symbol name */
#define  SYMNMLEN	8
/*		Number of characters in a file name */
#define  FILNMLEN	14
/*		Number of array dimensions in auxiliary entry */
#define  DIMNUM		4

#if _MIPS_SZLONG == 32
struct syment
{
	union
	{
		char		_n_name[SYMNMLEN];	/* old COFF version */
		struct
		{
			int	_n_zeroes;	/* new == 0 */
			int	_n_offset;	/* offset into string table */
		} _n_n;
		char		*_n_nptr[2];	/* allows for overlaying */
	} _n;
#ifndef __pdp11
	unsigned
#endif
	int			n_value;	/* value of symbol */
	short			n_scnum;	/* section number */
	unsigned short		n_type;		/* type and derived type */
	char			n_sclass;	/* storage class */
	char			n_numaux;	/* number of aux. entries */
};
#endif /* _MIPS_SZLONG == 32 */

#if _MIPS_SZLONG == 64
#include "sgidefs.h"
struct syment
{
	union
	{
		char		_n_name[SYMNMLEN];	/* old COFF version */
		struct
		{
			__int32_t	_n_zeroes;	/* new == 0 */
			__int32_t	_n_offset;	/* offset into string table */
		} _n_n;
		char		*_n_nptr[2];	/* allows for overlaying */
	} _n;
#ifndef __pdp11
	unsigned
#endif
	__int32_t			n_value;	/* value of symbol */
	short			n_scnum;	/* section number */
	unsigned short		n_type;		/* type and derived type */
	char			n_sclass;	/* storage class */
	char			n_numaux;	/* number of aux. entries */
};
#endif /* _MIPS_SZLONG == 64 */

#define n_name		_n._n_name
#define n_nptr		_n._n_nptr[1]
#define n_zeroes	_n._n_n._n_zeroes
#define n_offset	_n._n_n._n_offset

/*
   Relocatable symbols have a section number of the
   section in which they are defined.  Otherwise, section
   numbers have the following meanings:
*/
        /* undefined symbol */
#define  N_UNDEF	0
        /* value of symbol is absolute */
#define  N_ABS		-1
        /* special debugging symbol -- value of symbol is meaningless */
#define  N_DEBUG	-2
	/* indicates symbol needs transfer vector (preload) */
#define  N_TV		(unsigned short)-3

	/* indicates symbol needs transfer vector (postload) */

#define  P_TV		(unsigned short)-4

/*
   The fundamental type of a symbol packed into the low 
   4 bits of the word.
*/

#define  _EF	".ef"

#define  T_NULL     0
#define  T_ARG      1          /* function argument (only used by compiler) */
#define  T_CHAR     2          /* character */
#define  T_SHORT    3          /* short integer */
#define  T_INT      4          /* integer */
#define  T_LONG     5          /* long integer */
#define  T_FLOAT    6          /* floating point */
#define  T_DOUBLE   7          /* double word */
#define  T_STRUCT   8          /* structure  */
#define  T_UNION    9          /* union  */
#define  T_ENUM     10         /* enumeration  */
#define  T_MOE      11         /* member of enumeration */
#define  T_UCHAR    12         /* unsigned character */
#define  T_USHORT   13         /* unsigned short */
#define  T_UINT     14         /* unsigned integer */
#define  T_ULONG    15         /* unsigned long */

/*
 * derived types are:
 */

#define  DT_NON      0          /* no derived type */
#define  DT_PTR      1          /* pointer */
#define  DT_FCN      2          /* function */
#define  DT_ARY      3          /* array */

/*
 *   type packing constants
 */

#define  N_BTMASK     017
#define  N_TMASK      060
#define  N_TMASK1     0300
#define  N_TMASK2     0360
#define  N_BTSHFT     4
#define  N_TSHIFT     2

/*
 *   MACROS
 */

	/*   Basic Type of  x   */

#define  BTYPE(x)  ((x) & N_BTMASK)

	/*   Is  x  a  pointer ?   */

#define  ISPTR(x)  (((x) & N_TMASK) == (DT_PTR << N_BTSHFT))

	/*   Is  x  a  function ?  */

#define  ISFCN(x)  (((x) & N_TMASK) == (DT_FCN << N_BTSHFT))

	/*   Is  x  an  array ?   */

#define  ISARY(x)  (((x) & N_TMASK) == (DT_ARY << N_BTSHFT))

	/* Is x a structure, union, or enumeration TAG? */

#define ISTAG(x)  ((x)==C_STRTAG || (x)==C_UNTAG || (x)==C_ENTAG)

#define  INCREF(x) ((((x)&~N_BTMASK)<<N_TSHIFT)|(DT_PTR<<N_BTSHFT)|(x&N_BTMASK))

#define  DECREF(x) ((((x)>>N_TSHIFT)&~N_BTMASK)|((x)&N_BTMASK))

/*
 *	AUXILIARY ENTRY FORMAT
 */
#if _MIPS_SZLONG == 32
union auxent
{
	struct
	{
		int		x_tagndx;	/* str, un, or enum tag indx */
		union
		{
			struct
			{
				unsigned short	x_lnno;	/* declaration line number */
				unsigned short	x_size;	/* str, union, array size */
			} x_lnsz;
			int	x_fsize;	/* size of function */
		} x_misc;
		union
		{
			struct			/* if ISFCN, tag, or .bb */
			{
				int	x_lnnoptr;	/* ptr to fcn line # */
				int	x_endndx;	/* entry ndx past block end */
			} 	x_fcn;
			struct			/* if ISARY, up to 4 dimen. */
			{
				unsigned short	x_dimen[DIMNUM];
			} 	x_ary;
		}		x_fcnary;
		unsigned short  x_tvndx;		/* tv index */
	} 	x_sym;
	struct
	{
		char	x_fname[FILNMLEN];
	} 	x_file;
        struct
        {
                int    x_scnlen;          /* section length */
                unsigned short  x_nreloc;  /* number of relocation entries */
                unsigned short  x_nlinno;  /* number of line numbers */
        }       x_scn;

	struct
	{
		int		x_tvfill;	/* tv fill value */
		unsigned short	x_tvlen;	/* length of .tv */
		unsigned short	x_tvran[2];	/* tv range */
	}	x_tv;	/* info about .tv section (in auxent of symbol .tv)) */
};
#endif /* _MIPS_SZLONG == 32 */
#if _MIPS_SZLONG == 64
union auxent
{
	struct
	{
		__int32_t		x_tagndx;	/* str, un, or enum tag indx */
		union
		{
			struct
			{
				unsigned short	x_lnno;	/* declaration line number */
				unsigned short	x_size;	/* str, union, array size */
			} x_lnsz;
			__int32_t	x_fsize;	/* size of function */
		} x_misc;
		union
		{
			struct			/* if ISFCN, tag, or .bb */
			{
				__int32_t	x_lnnoptr;	/* ptr to fcn line # */
				__int32_t	x_endndx;	/* entry ndx past block end */
			} 	x_fcn;
			struct			/* if ISARY, up to 4 dimen. */
			{
				unsigned short	x_dimen[DIMNUM];
			} 	x_ary;
		}		x_fcnary;
		unsigned short  x_tvndx;		/* tv index */
	} 	x_sym;
	struct
	{
		char	x_fname[FILNMLEN];
	} 	x_file;
        struct
        {
                __int32_t    x_scnlen;          /* section length */
                unsigned short  x_nreloc;  /* number of relocation entries */
                unsigned short  x_nlinno;  /* number of line numbers */
        }       x_scn;

	struct
	{
		__int32_t	x_tvfill;	/* tv fill value */
		unsigned short	x_tvlen;	/* length of .tv */
		unsigned short	x_tvran[2];	/* tv range */
	}	x_tv;	/* info about .tv section (in auxent of symbol .tv)) */
};
#endif /* _MIPS_SZLONG == 64 */

#define	SYMENT	struct syment
#define	SYMESZ	18	/* sizeof(SYMENT) */

#define	AUXENT	union auxent
#define	AUXESZ	18	/* sizeof(AUXENT) */

#endif /* __mips */

#ifdef __cplusplus
}
#endif

#endif	/* __SYMS_H__ */
