/*
 * |-----------------------------------------------------------|
 * | Copyright (c) 1991 MIPS Computer Systems, Inc.            |
 * | All Rights Reserved                                       |
 * |-----------------------------------------------------------|
 * |          Restricted Rights Legend                         |
 * | Use, duplication, or disclosure by the Government is      |
 * | subject to restrictions as set forth in                   |
 * | subparagraph (c)(1)(ii) of the Rights in Technical        |
 * | Data and Computer Software Clause of DFARS 52.227-7013.   |
 * |         MIPS Computer Systems, Inc.                       |
 * |         950 DeGuigne Drive                                |
 * |         Sunnyvale, CA 94086                               |
 * |-----------------------------------------------------------|
 */
/* $Header: /proj/irix5.3/isms/cmplrs/include/RCS/symconst.h,v 7.17 1994/06/02 22:55:40 dlai Exp $ */

/* (C) Copyright 1984 by Third Eye Software, Inc.
 *
 * Third Eye Software, Inc. grants reproduction and use rights to
 * all parties, PROVIDED that this comment is maintained in the copy.
 *
 * Third Eye makes no claims about the applicability of this
 * symbol table to a particular use.
 */
#ifndef __SYMCONST_H__
#define __SYMCONST_H__

#ifdef __cplusplus
extern "C" {
#endif

/* glevels for field in FDR */
#define GLEVEL_0	2
#define GLEVEL_1	1
#define GLEVEL_2	0	/* for upward compat reasons. */
#define GLEVEL_3	3

/* magic number fo symheader */
#define magicSym	0x07009
#define magicSym_cia    0x07109  /* uld need to preserve symbols inside cia's */


/* Language codes */
#define langC		0	
#define langPascal	1
#define langFortran	2
#define	langAssembler	3	/* one Assembley inst might map to many mach */
#define langMachine	4
#define langNil		5
#define langAda		6
#define langPl1		7
#define langCobol	8
#ifdef __sgi
#define langStdc	langC
#define langCplusplus   9
#define langCplusplusV2 10
#define langMax         32  /* max allowed 32:  5 bits  */
#else
#define langStdc	9
#define langMIPSCxx	10	/* Mips C++ */
#define langDECCxx	11	/* DEC C++ */
#define langMax		32	/* maximun allowed 32 -- 5 bits */
#endif

/* The following are value definitions for the fields in the SYMR */

/*
 * Storage Classes
 */

#define scNil		0
#define scText		1	/* text symbol */
#define scData		2	/* initialized data symbol */
#define scBss		3	/* un-initialized data symbol */
#define scRegister	4	/* value of symbol is register number */
#define scAbs		5	/* value of symbol is absolute */
#define scUndefined	6	/* who knows? */
#define scCdbLocal	7	/* variable's value is IN se->va.?? */
#define scBits		8	/* this is a bit field */
#define scCdbSystem	9	/* variable's value is IN CDB's address space */
#define scDbx		9	/* overlap dbx internal use */
#define scRegImage	10	/* register value saved on stack */
#define scInfo		11	/* symbol contains debugger information */
#define scUserStruct	12	/* address in struct user for current process */
#define scSData		13	/* load time only small data */
#define scSBss		14	/* load time only small common */
#define scRData		15	/* load time only read only data */
#define scVar		16	/* Var parameter (fortran,pascal) */
#define scCommon	17	/* common variable */
#define scSCommon	18	/* small common */
#define scVarRegister	19	/* Var parameter in a register */
#define scVariant	20	/* Variant record */
#define scSUndefined	21	/* small undefined(external) data */
#define scInit		22	/* .init section symbol */
#define scBasedVar	23	/* Fortran or PL/1 ptr based var */ 
#define scXData         24      /* exception handling data */
#define scPData         25      /* Procedure section */
#define scFini          26      /* .fini section */
#ifdef __sgi
#define scNonGP         27      /* don't put this symbol in GP region */
#endif
#define scVirtual	scRegister	/* C++ virtual */
#define scPure		scRegImage	/* C++ pure */
#define scFriend	scVarRegister	/* C++ friend */
#define scClass         scPData         /* class member */
#define scStatic        scCommon        /* static function or base */
#define scVirStatic     scSCommon       /* virtual static base */

#define scMax		32


/*
 *   Symbol Types
 */

#define stNil		0	/* Nuthin' special */
#define stGlobal	1	/* external symbol */
#define stStatic	2	/* static */
#define stParam		3	/* procedure argument */
#define stLocal		4	/* local variable */
#define stLabel		5	/* label */
#define stProc		6	/*     "      "	 Procedure */
#define stBlock		7	/* beginnning of block */
#define stEnd		8	/* end (of anything) */
#define stMember	9	/* member (of anything	- struct/union/enum */
#define stTypedef	10	/* type definition */
#define stFile		11	/* file name */
#define stRegReloc	12	/* register relocation */
#define stForward	13	/* forwarding address */
#define stStaticProc	14	/* load time only static procs */
#define stConstant	15	/* const */
#define stStaParam	16	/* Fortran static parameters */
#define stBase          17      /* DEC */
#define stTag           18      /*  DEC */
#define stAdjMember     19      /*  DEC INTERLUDE */
#define stPublic        20      /* public access divider */
#define stProtected     21      /* protected access divider */                
#define stPrivate       22      /* private access divider */
#define stTemp          23	/* template */
#define stTempProc      24	/* template function */
#define stDefArg	25	/* default argument */

#if 1//def __sgi
#define stStruct        26      /* begin Struct kind of stBlock */
#define stUnion         27      /* begin Union kind of stBlock */
#define stEnum          28      /* begin Enum  kind of stBlock */
#endif

#define stVtbl          29	/* virtual table */
#define stQMember	30	/* qualified member */
#define	stDeltaReloc	31	/* delta relocation symbol */
#define	stCDeltaReloc	32	/* delta relocation symbol */
#define	stMemberProc	33	/* member function */

#define	stIndirect	34	/* Indirect type specification */
/* Next two entries are used by the Workshop Interpreter */
#define stStaticIdx     35      /* indirection table index for static var */
#define stStaticProcIdx 36      /* indirection table index for static func */

    /* Psuedo-symbols - internal to debugger */
#define stStr		60	/* string */
#define stNumber	61	/* pure number (ie. 4 NOR 2+2) */
#define stExpr		62	/* 2+2 vs. 4 */
#define stType		63	/* post-coersion SER */
#define stMax		64

#define	drQualifier	0	/* qualifier for following reloc record */
#define	drOffset	1	/* offset to member */
#define	drVFuncOffset	2	/* offset to virtual function member */
#define	drClassSize	3	/* size of class */
#define	drStaticMember	4	/* static member variable */
#define	drClassAlign	5	/* alignment of class */
#define	drVbaseOffset	6	/* offset to vbase pointer within a class */
#define	drClassOffset	7	/* offset to base class within a class */
#define	drLeftShift	8	/* left shift for bitfield */
#define	drRightShift	9	/* right shift for bitfield */
#define	drInverseSizeShift	10	/* inverse size shift for bitfield */
#define	drBitFieldMask	11	/* Mask for Bit field right shifted */
#define	drIBitFieldMask	12	/* Mask for bit field in place */
#define	drFunction	13	/* member function */
#define	drThisOffset	14	/* offset to add to thois when calling a non-virtual member function */
#define	drVirtThisOffset 15	/* offset to add to this when calling a virtual member function */
#define	drVtblOffset	16	/* offset to vtbl pointer */
#define	drVFuncDataOffset 17	/* Offset to data field in virtual table */
#define	drInstanceSize	18	/* size in value field for class instance */
#define	drInstanceClass	19	/* class decl in value field */
#define	drExtTblRef	20	/* In local table points to real info in external table */
#define	drPmInit1	21	/* word 1 initialization of pointer to member */
#define	drPmInit2	22	/* word 2 initialization of pointer to member */
#define	drPmInit3	23	/* word 3 initialization of pointer to member */
#define	drPmData	24	/* offset for pointer to member data */
#define	drValue		25	/* indicates possible value is in value field of last word - used for pointer to members */
#define	drBeginBlock	26	/* Begin of a local block with class instances */
#define	drLocalInstance	27	/* Pointer to a local instance for calculating stack offset */
#define	drEndBlock	28	/* End of a local block with class instances */
#define	drVirtualClassOffset	29	/* Actual offset to virtual base class - not to vbase ptr */
#define drHasVBS	29	/* Has Virtual bases */
	/* *** NOTE: ajp says drHasVBS will be removed soon *** */
#define	drVBaseFunction	30	/* Vbase ptr to use when calling a function */
#define	drVBaseInstance	31	/* Vbase ptr to use when referencing an instance */
#define	drMaxValue	32	/* This is the largest number of relocations */
/* definitions for fields in TIR */

/* type qualifiers for ti.tq0 -> ti.(itqMax-1) */
#define tqNil	0	/* bt is what you see */
#define tqPtr	1	/* pointer */
#define tqProc	2	/* procedure */
#define tqArray 3	/* duh */
#define tqFar	4	/* longer addressing - 8086/8 land */
#define tqVol	5	/* volatile */
#define tqConst 6	/* const */
#define tqRef   7	/* DEC C++: reference */
#define tqPtrMem	8	/* C++ pointer to member */
#define tqPtrMemFunc	9	/* C++ pointer to member function */
#define tqMax	10

/* basic types as seen in ti.bt */
#define btNil		0	/* undefined */
#define btAdr32		1	/* 32-bit address */
#define btAdr		btAdr32	/* address - integer same size as pointer */
#define btChar		2	/* character */
#define btUChar		3	/* unsigned character */
#define btShort		4	/* short */
#define btUShort	5	/* unsigned short */
#define btInt32		6	/* 32-bit int */
#define btInt		btInt32	/* int */
#define btUInt32	7	/* 32-bit unsigned int */
#define btUInt		btUInt32	/* unsigned int */
#define btLong32	8	/* 32-bit long */
#define btLong		btLong32	/* long */
#define btULong32	9	/* 32-bit unsigned long */
#define btULong		btULong32	/* unsigned long */
#define btFloat		10	/* float (real) */
#define btDouble	11	/* Double (real) */
#define btStruct	12	/* Structure (Record) */
#define btUnion		13	/* Union (variant) */
#define btEnum		14	/* Enumerated */
#define btTypedef	15	/* defined via a typedef, isymRef points */
#define btRange		16	/* subrange of int */
#define btSet		17	/* pascal sets */
#define btComplex	18	/* fortran complex */
#define btDComplex	19	/* fortran double complex */
#define btIndirect	20	/* forward or unnamed typedef */
#define btFixedDec	21	/* Fixed Decimal */
#define btFloatDec	22	/* Float Decimal */
#define btString	23	/* Varying Length Character String */
#define btBit		24	/* Aligned Bit String */
#define btPicture	25	/* Picture */
#define btVoid		26	/* void */
#define btPtrMem	27	/* DEC C++:  Pointer to member */
#define btVptr		28	/* DEC C++:  Virtual Pointer */
#define btClass		29	/* DEC C++:  Class */
#define btLong64	30	/* 64-bit long */
#define btULong64	31	/* 64-bit unsigned long */
#define btLongLong64	32	/* 64-bit long long */
#define btLongLong	btLongLong64	/* long long */
#define btULongLong64	33	/* 64-bit unsigned long long */
#define btULongLong	btULongLong64	/* unsigned long long */
#define btAdr64		34	/* 64-bit address */
#define	btPlainChar	35	/* Plain char for C++ */
#define	btLongDouble	36	/* Long double */
#define	btPtrBasedVar	37	/* Pointer Based Variable for Fortran */
#define btMax		64

#if (_MFG == _MIPS)
/* optimization type codes */
#define otNil		0
#define otReg		1	/* move var to reg */
#define otBlock		2	/* begin basic block */
#define	otProc		3	/* procedure */
#define otInline	4	/* inline procedure */
#define otEnd		5	/* whatever you started */
#define otMax		6	/* KEEP UP TO DATE */
#endif /* (_MFG == _MIPS) */

/* tag type codes for C++ stTag entry */
#define ttDynClass      1       /* dynamic class type */
#define ttClass         2       /* non-dynamic class type */
#define ttStruct        3       /* structure type */
#define ttUnion         4       /* union type */
#define ttEnum          5       /* enumerated type */
#define	ttMaxValue	6
#ifdef __cplusplus
}
#endif

#endif  /* __SYMCONST_H__ */
