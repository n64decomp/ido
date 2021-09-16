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

#ifndef UCODE_H
#define UCODE_H

#include "common.h"

#ifndef _MIPSEB // built-in gcc
#define _MIPSEB
#endif
#define _LONGLONG

/* LOD, ILOD, STR, ISTR flags (lexlev field) */
#define VOLATILE_ATTR 1         /* data is volatile */

/* ABS, ADD, SQR, CVT, CVTL, DEC, INC, NEG, DIV, MOD, MPY, SUB and
   REM flags (lexlev field) */
#define OVERFLOW_ATTR 2         /* overflow checking required */

/* Data area designation (lexlev field)
 * Four bits are reserved to designate the data area.
 * Default means the data area is selected based upon size and initialization
 * This field occupies the high order 4 bits of the lexlevel field
 */
#define DATA_AREA_MASK 240      /* 0xF0 mask to isolate this field          */
#define DATA_AREA_BIT_OFS 4     /* number of bits to shift to get this field*/
#define DEFAULT_DATA_AREA 0     /* data defaults into appropriate data area */
#define READONLY_DATA_AREA 1    /* data put in readonly data area (rdata)   */
#define SMALL_DATA_AREA 2       /* data put in small data area (sdata,sbss) */
#define LARGE_DATA_AREA 3       /* data put in large data area (data,bss)   */
#define TEXT_AREA 4             /* data put in text area */
#define EXCEPTION_DATA_AREA 5   /* data put in exception area */
/* LSYM, FSYM, etc alignment designation (lexlev field)
 * Four bits are reserved to designate the alignment.
 * This field occupies bits 0..3 of the lexlev field
 */
#define SYM_ALIGNMENT_MASK 15	/* 0x0F mask to isolate this field	    */
#define SYM_ALIGNMENT_BIT_OFS 0	/* number of bits to shift to get this field*/

/* ENT flag attributes (extrnal field) */
#define EXTERNAL_ATTR       1   /* external entry point */
#define FRAMEPTR_ATTR       2   /* manifest real frame pointer */
#define PRESERVE_STACK_ATTR 4   /* prevent cutting back stack on exit */
#define STACK_OVERFLOW_ATTR 8   /* check for stack overflow */
#define LOAD_STACKLIMIT_ON_ENTRY_ATTR 16 /* load stack limit register */
#define NO_INLINE_ATTR     32   /* disable inlining */
#define VARSIZE_LOCAL_ATTR 64   /* some local var with relocatable sizes */
#define VARARG_SUB_ATTR   128   /* the function is a variable argument rtn */
#define IS_VARARG_SUB_ATTR(x) (((x) & VARARG_SUB_ATTR) != 0)
#define THUNK_ENT_ATTR    256   /* A thunk function */
#define RA_OFFSET_ATTR    512   /* offset to save/restore return address */

/* CUP flag attributes (extrnal field) */
#define NOSIDEEFFECT_ATTR 1             /* indicates call has no side effect */
#define RETURN_ATTR 2                   /* indicates call will not return */
/* 4 used in 1.31 for reloading stack limit for ada, but then removed in 2.0 */
#define RELOAD_STACK_ATTR 4             /* Placeholder */
#define REALLOC_ARG_ATTR 8              /* reallocate the arg build area */
#define GOTO_ATTR 16                    /* indicates call is the Pascal GOOB*/
#define COMPOSITE_CALL_ATTR 32          /* call returns a composite object */
#define INLINE_ATTR  64                 /* inline call */
#define THUNK_CALL_ATTR   128           /* The call in thunk functions */
#define TEMP_REGISTERS_INTACT_ATTR 256  /* The call leaves temp regs intact */

/* CUP flag attributes (push field) */
#define STDARGS_NUM_MASK  224   /* 0xE0 mask to isolate this field */
#define STDARGS_NUM_BIT_OFS 5   /* number of bits to shift to get this field*/
#define STDARGS_NUM_MAX     4   /* max vararg starting position encodable */
                                /* beyond STDARGS_NUM_MAX, use STDARGS_NUM_MAX */
                                /* since there is no effect > 4 anyways (for now */

/* LAB flag attributes (lexlev field) */
#define GOOB_TARGET    1        /* label is target of GOOB (non-local goto) */
#define EXCEPTION_ATTR 2        /* label is jumped to due to an exception */
#define EXTERN_LAB_ATTR 4       /* label is referenced both externally and
                                   internally (for PL/1 only) */
#define IJP_ATTR 8              /* label is target of IJP (for f77 and PL/1) */
#define EXCEPTION_END_ATTR 16   /* label is jumped to due to an exception end*/
#define EXCEPTION_FRAME_ATTR 32 /* code region covered by exception handler */


#define EXCEPTION_FRAME_START_ATTR    EXCEPTION_FRAME_ATTR
#define EXCEPTION_FRAME_END_ATTR      64
#define EXCEPTION_HANDLER_START_ATTR  EXCEPTION_ATTR
#define EXCEPTION_HANDLER_END_ATTR    EXCEPTION_END_ATTR

/* PDEF flag attributes (lexlev field) */
#define IN_MODE     1           /* parameter passing modes */
#define OUT_MODE    2
#define INOUT_MODE  3

/* BGN pointer size (i1 field) */
#define THIRTY2_ADDR	0	/* 32-bit pointers */
#define SIXTY4_ADDR	1	/* 64-bit pointers */

/* CIA flag attributes (lexlev field) */
#define CIA_CALLS_ATTR		1	/* CIA contains a call */
#define CIA_RETTYP_MASK		6	/* Make for return type */
#define CIA_RETTYP_BIT_OFS	1	/* Number of bits to shift for this field */

#define CIA_RETTYP_NONE		0	/* void return type */
#define CIA_RETTYP_LONG		1	/* long return type */
#define CIA_RETTYP_FLOAT	2	/* float return type */
#define CIA_RETTYP_DOUBLE	3	/* double return type */

/*****************************************************************************/
/* This file contains all types that define U-code                           */
/*****************************************************************************/
  /* set constant representation in Ucode                                    */
#define  Maxoperands  10                /* maximum number of operands in     */
                                        /* u-code instruction + 1            */
#define  Maxinstlength  8               /* maximum size of a b-code          */
                                        /* instruction, in host words, = max */
                                        /* (size of largest set constant (in */
                                        /* bits), size of largest string     */
                                        /* constant (in bits)) div wordsize+ */
                                        /* 2;                                */

/* macros to test and set attributes */
#define IS_INLINE_ATTR(x) (((x) & INLINE_ATTR) != 0)
#define SET_INLINE_ATTR(x) x = ((x) | INLINE_ATTR)
#define IS_VOLATILE_ATTR(x) (((x) & VOLATILE_ATTR) != 0)
#define SET_VOLATILE_ATTR(x) x = ((x) | VOLATILE_ATTR)
#define IS_SCALAR8_ATTR(x) (x & SCALAR8_ATTR) 
#define SET_SCALAR8_ATTR(x) x = (x | SCALAR8_ATTR)
#define IS_SCALAR4_ATTR(x) (x & SCALAR4_ATTR) 
#define SET_SCALAR4_ATTR(x) x = (x | SCALAR4_ATTR)
#define IS_FRAMEPTR_ATTR(x) (((x) & FRAMEPTR_ATTR) != 0)
#define SET_FRAMEPTR_ATTR(x) x = ((x) | FRAMEPTR_ATTR)
#define IS_EXTERNAL_ATTR(x) (((x) & EXTERNAL_ATTR) != 0)
#define IS_OVERFLOW_ATTR(x) (((x) & OVERFLOW_ATTR) != 0)
#define SET_OVERFLOW_ATTR(x) x = ((x) | OVERFLOW_ATTR)


#define IS_PRESERVE_STACK_ATTR(x) (((x) & PRESERVE_STACK_ATTR) != 0)
#define SET_PRESERVE_STACK_ATTR(x) x = ((x) | PRESERVE_STACK_ATTR)
#define IS_EXCEPTION_ATTR(x) (((x) & EXCEPTION_ATTR) != 0)
#define SET_EXCEPTION_ATTR(x) x = ((x) | EXCEPTION_ATTR)
#define IS_EXCEPTION_END_ATTR(x) (((x) & EXCEPTION_END_ATTR) != 0)
#define SET_EXCEPTION_END_ATTR(x) x = ((x) | EXCEPTION_END_ATTR)
#define IS_EXTERN_LAB_ATTR(x) (((x) & EXTERN_LAB_ATTR) != 0)
#define SET_EXTERN_LAB_ATTR(x) x = ((x) | EXTERN_LAB_ATTR)
#define IS_STACK_OVERFLOW_ATTR(x) (((x) & STACK_OVERFLOW_ATTR) != 0)
#define SET_STACK_OVERFLOW_ATTR(x)  x = ((x) |  STACK_OVERFLOW_ATTR)
#define IS_LOAD_STACKLIMIT_ON_ENTRY_ATTR(x) (((x) & LOAD_STACKLIMIT_ON_ENTRY_ATTR) != 0)
#define SET_LOAD_STACKLIMIT_ON_ENTRY_ATTR(x) x = ((x) | LOAD_STACKLIMIT_ON_ENTRY_ATTR)
#define SET_NO_INLINE_ATTR(x) x = ((x) | NO_INLINE_ATTR)
#define IS_NO_INLINE_ATTR(x) (((x) & NO_INLINE_ATTR) != 0)
#define IS_REALLOC_ARG_ATTR(x) (((x) & REALLOC_ARG_ATTR) != 0)
#define SET_REALLOC_ARG_ATTR(x) x = ((x) | REALLOC_ARG_ATTR)


#define IS_CIA_CALLS_ATTR(x) (x & CIA_CALLS_ATTR)
#define SET_CIA_CALLS_ATTR(x) x = (x | CIA_CALLS_ATTR)
#define SET_CIA_RETTYP(x,v) x = ((x & ~CIA_RETTYP_MASK)|(v << CIA_RETTYP_BIT_OFS))
#define GET_CIA_RETTYP(x) ((x & CIA_RETTYP_MASK) >> CIA_RETTYP_BIT_OFS)
#define SET_DATA_AREA(x,v) x = (((x) & ~DATA_AREA_MASK)|((v) << DATA_AREA_BIT_OFS))
#define GET_DATA_AREA(x) (((x) & DATA_AREA_MASK) >> DATA_AREA_BIT_OFS)
#define SET_SYM_ALIGNMENT(x,v) x = ((x & ~SYM_ALIGNMENT_MASK)|(v << SYM_ALIGNMENT_BIT_OFS))
#define GET_SYM_ALIGNMENT(x) ((x & SYM_ALIGNMENT_MASK) >> SYM_ALIGNMENT_BIT_OFS)
#define IS_RETURN_ATTR(x) (((x) & RETURN_ATTR) != 0)
#define SET_RETURN_ATTR(x) x = ((x) | RETURN_ATTR)
#define IS_NOSIDEEFFECT_ATTR(x) (((x) & NOSIDEEFFECT_ATTR) != 0)
#define SET_NOSIDEEFFECT_ATTR(x) x = ((x) | NOSIDEEFFECT_ATTR)
#define IS_RELOAD_STACK_ATTR(x) (((x) & RELOAD_STACK_ATTR) != 0)
#define IS_GOTO_ATTR(x) (((x) & GOTO_ATTR) != 0)
#define SET_GOTO_ATTR(x) x = ((x) | GOTO_ATTR)
#define IS_COMPOSITE_CALL_ATTR(x) (((x) & COMPOSITE_CALL_ATTR) != 0)
#define SET_COMPOSITE_CALL_ATTR(x) x = ((x) | COMPOSITE_CALL_ATTR)
#define SET_STDARGS_NUM(x,v) x = (((x) & ~STDARGS_NUM_MASK)|((v) << STDARGS_NUM_BIT_OFS))
#define GET_STDARGS_NUM(x) (((x) & STDARGS_NUM_MASK) >> STDARGS_NUM_BIT_OFS)
#define IS_TEMP_REGISTERS_INTACT_ATTR(x) (((x) & TEMP_REGISTERS_INTACT_ATTR) != 0)
#define SET_TEMP_REGISTERS_INTACT_ATTR(x)  x = ((x) | TEMP_REGISTERS_INTACT_ATTR)


enum Datatype {
      /* 0  */ Adt, /* address (pointer)                 */
      /* 1  */ Cdt, /* pointer to readonly data          */
      /* 2  */ Fdt, /* C pointer to function             */
      /* 3  */ Gdt, /* address of label                  */
      /* 4  */ Hdt, /* address that only points to heap  */
      /* 5  */ Idt, /* integer, double word              */
      /* 6  */ Jdt, /* integer, single word              */
      /* 7  */ Kdt, /* unsigned integer, double word     */
      /* 8  */ Ldt, /* non-negative integer, single word */
      /* 9  */ Mdt, /* array or record                   */
      /* 10 */ Ndt, /* non-local labels                  */
      /* 11 */ Pdt, /* procedure, untyped                */
      /* 12 */ Qdt, /* real, double word                 */
      /* 13 */ Rdt, /* real, single word                 */
      /* 14 */ Sdt, /* set                               */
      /* 15 */ Wdt, /* 64 bit wide pointer               */
      /* 16 */ Xdt, /* extended precision                */
      /* 17 */ Zdt, /* undefined                         */
}
#ifdef __GNUC__
__attribute__((packed))
#endif
;

#ifdef __GNUC__
typedef enum Datatype Datatype;
#else
typedef unsigned char Datatype;
#endif


enum Memtype {
    /* 0 */ Zmt, /* undefined                         */
    /* 1 */ Mmt, /* complex variables (local?)        */
    /* 2 */ Pmt, /* parameters                        */
    /* 3 */ Rmt, /* register                          */
    /* 4 */ Smt, /* statically allocated memory       */
    /* 5 */ Amt, /* Parameter build area              */
    /* 6 */ Tmt, /* used internally by ugen           */
    /* 7 */ Kmt, /* static class data member in C++   */
};

#ifdef __GNUC__
typedef enum Memtype Memtype;
#else
typedef unsigned char Memtype;
#endif


  /***************************************************************************/
  /* constants                                                               */
  /***************************************************************************/
//typedef char Stringtext[Strglgth];

union Valu {
#ifdef _LONGLONG
  long long dwval;
#endif
  struct {
#ifdef LITTLE_ENDIAN
    int dwval_l, dwval_h;
#else /* _MIPSEB */
    int dwval_h, dwval_l;
#endif
    } dwpart;
  struct {
    int Ival;
    char *Chars;
    } swpart;
};

  /***************************************************************************/
  /* ucode instructions                                                      */
  /***************************************************************************/

enum
  Uopcode   {
        Uabs,   Uadd,   Uadj,   Uaent,  Uand,   Uaos,   Uasym,  Ubgn,
        Ubgnb,  Ubsub,  Ucg1,   Ucg2,   Uchkh,  Uchkl,  Uchkn,  Uchkt,
        Ucia,   Uclab,  Uclbd,  Ucomm,  Ucsym,  Uctrl,  Ucubd,  Ucup,
        Ucvt,   Ucvtl,  Udec,   Udef,   Udif,   Udiv,   Udup,   Uend,
        Uendb,  Uent,   Ueof,   Uequ,   Uesym,  Ufill,  Ufjp,   Ufsym,
        Ugeq,   Ugrt,   Ugsym,  Uhsym,  Uicuf,  Uidx,   Uiequ,  Uigeq,
        Uigrt,  Uijp,   Uilda,  Uildv,  Uileq,  Uiles,  Uilod,  Uinc,
        Uineq,  Uinit,  Uinn,   Uint,   Uior,   Uisld,  Uisst,  Uistr,
        Uistv,  Uixa,   Ulab,   Ulbd,   Ulbdy,  Ulbgn,  Ulca,   Ulda,
        Uldap,  Uldc,   Uldef,  Uldsp,  Ulend,  Uleq,   Ules,   Ulex,
        Ulnot,  Uloc,   Ulod,   Ulsym,  Ultrm,  Umax,   Umin,   Umod,
        Umov,   Umovv,  Umpmv,  Umpy,   Umst,   Umus,   Uneg,   Uneq,
        Unop,   Unot,   Uodd,   Uoptn,  Upar,   Updef,  Upmov,  Upop,
        Uregs,  Urem,   Uret,   Urlda,  Urldc,  Urlod,  Urnd,   Urpar,
        Urstr,  Usdef,  Usgs,   Ushl,   Ushr,   Usign,  Usqr,   Usqrt,
        Ussym,  Ustep,  Ustp,   Ustr,   Ustsp,  Usub,   Uswp,   Utjp,
        Utpeq,  Utpge,  Utpgt,  Utple,  Utplt,  Utpne,  Utyp,   Uubd,
        Uujp,   Uunal,  Uuni,   Uvreg,  Uxjp,   Uxor,   Uxpar,  Umtag,
        Ualia,  Uildi,  Uisti,  Uirld,  Uirst,  Uldrc,  Umsym,  Urcuf,
        Uksym,  Uosym,  Uirlv,  Uirsv}
#ifdef __GNUC__
__attribute__((packed))
#endif
;
/* The following opcodes are only used internally in UOPT: MOVV, ILDV, ISTV. */
/* The following opcodes are only used internally in UGEN: CG1, CG2. */
/* Warning: Add ucodes at the end only */

#ifdef __GNUC__
typedef enum Uopcode Uopcode;
#else
typedef unsigned char Uopcode;
#endif

struct Bcrec   {
#ifdef LITTLE_ENDIAN
          unsigned short Lexlev;
          unsigned char  Dtype :5;
          unsigned char  Mtype :3;
          Uopcode Opc;
#else
          Uopcode Opc;
          unsigned char  Mtype :3;
          unsigned char  Dtype :5;
          unsigned short  Lexlev;
#endif
          int  I1;
          /* ------- 2 words ------- */
          union {
            struct {
#ifdef LITTLE_ENDIAN
              unsigned :24; enum Datatype Dtype2:8;
#else
              enum Datatype Dtype2:8; unsigned :24;
#endif
            }secondty;
            struct {
#ifdef LITTLE_ENDIAN
               unsigned int pad :16;
               unsigned int Push :8, Pop :8;
#else
               unsigned int Pop :8, Push :8;
#endif
               unsigned int Extrnal;
            }uent;
            struct {
              int Length;
              int offset;
          /* ------- 4 words ------- */
              union {
                union Valu Constval;
          /* ------- 6 words ------- */
                union {
#ifdef _LONGLONG
                  struct {
                    long long lbound;
                    long long hbound;
                    } dwbnds;
#endif
                  struct {
#ifdef LITTLE_ENDIAN
                    int lbound_l, lbound_h;
                    int hbound_l, hbound_h;
#else        /* _MIPSEB */
                    int lbound_h, lbound_l;
                    int hbound_h, hbound_l;
#endif
                    } swbnds;
                  } uxjp;
                struct {
                      int offset2;
                      int aryoff;
                      union Valu initval;
          /* ------- 8 words ------- */
                    } uinit;
              }uop2;
            }uiequ1;
          }Uopcde;
};

union Bcode {
  struct Bcrec Ucode;
  int intarray[Maxinstlength];
#ifdef _LONGLONG
  long long dw_array[Maxinstlength / 2];
#endif
};

/* access paths to members of the U_code structure */
#define UCVT    Uopcde
#define UENT    Uopcde.uent
#define UIEQU   Uopcde.uiequ1
#define OPC     u.Ucode.Opc
#define DTYPE   u.Ucode.Dtype
#define MTYPE   u.Ucode.Mtype
#define LEXLEV  u.Ucode.Lexlev
#define IONE    u.Ucode.I1
#define DTYPE2  u.Ucode.Uopcde.secondty.Dtype2
#define POP     u.Ucode.Uopcde.uent.Pop
#define PUSH    u.Ucode.Uopcde.uent.Push
#define EXTRNAL u.Ucode.Uopcde.uent.Extrnal
#define LENGTH  u.Ucode.Uopcde.uiequ1.Length
#define OFFSET   u.Ucode.Uopcde.uiequ1.offset
#define CONSTVAL u.Ucode.Uopcde.uiequ1.uop2.Constval
#define OFFSET2  u.Ucode.Uopcde.uiequ1.uop2.uinit.offset2
#define ARYOFF   u.Ucode.Uopcde.uiequ1.uop2.uinit.aryoff
#define INITVAL  u.Ucode.Uopcde.uiequ1.uop2.uinit.initval
#define LBOUND  u.Ucode.Uopcde.uiequ1.uop2.uxjp.dwbnds.lbound
#define HBOUND  u.Ucode.Uopcde.uiequ1.uop2.uxjp.dwbnds.hbound
#define LBOUND_L  u.Ucode.Uopcde.uiequ1.uop2.uxjp.swbnds.lbound_l
#define LBOUND_H  u.Ucode.Uopcde.uiequ1.uop2.uxjp.swbnds.lbound_h
#define HBOUND_L  u.Ucode.Uopcde.uiequ1.uop2.uxjp.swbnds.hbound_l
#define HBOUND_H  u.Ucode.Uopcde.uiequ1.uop2.uxjp.swbnds.hbound_h

enum uoperand {Sdtype, Smtype, Slexlev, Slabel0, Slabel1, Sblockno, Sdtype2,
          Spop, Spush, Sexternal, Slength, Sconstval, Scomment, Soffset,
          Ssomenumber, Soffset2, Sinitval, Slabel2, SarrayOffset,
          Sdtypenum, Slbound, Shbound, Send}
#ifdef __GNUC__
__attribute__((packed));
#endif
;
  /* describes the order and type of operands in a u-code instruction:
    Slabel0: label stored in the I1 field that is a label that needs to be
             written left-justified in ascii ucode;
    Slabel1: label stored in the I1 field that is a label but does not need
             to be written left-justified in ascii ucode;
    Slabel2: label stored in the Length field;
    Sblockno: the I1 field storing a block number;
    Scomment: the constval field storing a comment;
    Ssomenumber: the I1 field not storing a block number;
    Sdtypenum: the dtype field storing a number;                */

#ifdef __GNUC__
typedef enum uoperand uoperand;
#else
typedef unsigned char uoperand;
#endif

struct utabrec {
    uoperand format[Maxoperands]; // operands
    char opcname[4];            // opcode name table
    bool hasattr;               // true if using lexlev field for \v and \o attributes
    bool hasconst;              // true if instruction requires constant
    unsigned char instlength;   // length of instruction (1..8)
    unsigned char stack_pop;    // whether leaf, unary or binary op (0..3)
    unsigned char stack_push;   // whether statement or expression (0..1)
};

enum mtagtype {
    /* 0 */ mtag_anything,              /* can dereference anything */
    /* 1 */ mtag_heap,                  /* only dereference heap memory */
    /* 2 */ mtag_readonly,              /* only dereference readonly memory */
    /* 3 */ mtag_non_local,             /* only dereference non-local memory */
    /* 4 */ mtag_local_stack,           /* only dereference local M memory */
    /* 5 */ mtag_uplevel_stack,         /* only dereference up-level M memory */
    /* 6 */ mtag_local_static,          /* only dereference FSYM symbols */
    /* 7 */ mtag_global_static,         /* only dereference non-FSYM static symbols */
    /* 8 */ mtag_f77_parm,              /* based on a specific f77 parameter */
    /* 9 */ mtag_vreg                   /* only emitted by ugen */
};

#endif
