#ifndef UOPTIONS_H
#define UOPTIONS_H

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

/* Options names for the Uoptn Ucode */
#define UCO_SOURCE      0
#define UCO_VARARGS     1       /* function receives variable number of arguments */
/* TVARARGS <value>, where value is the position of va_alist in the actual
         parameter list. va_alist is defined in /usr/include/varargs.h. */
#define UCO_STACK_LIMIT 2       /* block number of variable containing stacklimit */
#define UCO_NO_R23      3       /* register 23 reserved to store the stack limit, in Ada only */
#define UCO_STACK_REVERSED 4    /* stack is upward growing instead of the
                                     default downward growing */
#define UCO_RSTEXT      5       /* this option specifies that all the text in
                                   the current file is to be put in the
                                   special section named by .Trstext */
#define UCO_IVDEP       6       /* this option specifies that the current loop
                                   contains no inter-loop data dependency */
#define UCO_USE_AS0     7       /* this option specifies that the back-end
                                   compilation will involving generating
                                   the ascii assembler file and calling as0
                                   to translate it back to binary assembler */

/* Option names for the OPTN UCO_SOURCE that specifies the source language */
#define PASCAL_SOURCE           1
#define FORTRAN_SOURCE          2
#define C_SOURCE                3
#define ADA_SOURCE              4
#define PL1_SOURCE              5
#define COBOL_SOURCE            6
#define RESERVED1_SOURCE        7

/* Defines for the lang variable */
#define LANG_PASCAL             0
#define LANG_FORTRAN            1
#define LANG_C                  2
#define LANG_ADA                3
#define LANG_PL1                4
#define LANG_COBOL              5
#define LANG_RESERVED1          6

/* uopt options */
#define UCO_ZMARK       401
#define UCO_ZVREF       402
#define UCO_ZDBUG       403
#define UCO_ZMOVC       404
#define UCO_ZCOPY       405
#define UCO_ZCOMO       406
#define UCO_ZSTOR       407
#define UCO_ZSCM        408
#define UCO_ZALOC       409

#endif
