#ifndef FEEDBACK_H
#define FEEDBACK_H
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
/* $Header: /proj/irix5.3/isms/cmplrs/include/cmplrs/RCS/feedback.h,v 7.4 1992/01/20 12:59:57 daveb Exp $ */
/* Definition of the "mprof" feedback file format */

#if 1//(defined(_LANGUAGE_C) || (defined(_LANGUAGE_C_PLUS_PLUS)))
# define FEEDBACK_MAGIC 0x64656566
# define PROC_FEEDBACK 0x636f7270
# define CALL_FEEDBACK 0x6c6c6163
# define BB_FEEDBACK 0x6c6d5e2c
#endif
#ifdef _LANGUAGE_PASCAL
# define FEEDBACK_MAGIC 16#64656566
# define PROC_FEEDBACK 16#636f7270
# define CALL_FEEDBACK 16#6c6c6163
# define BB_FEEDBACK 16#6c6d5e2c
#endif

#define NO_LINE -1
#define NO_INVOCATIONS -1
#define H_EXPANSION 7
#define PP_EXPANSION 3
#define STAMPLEN 28

struct f_header {
    /*  0x0 */ int magic; /* = FEEDBACK_MAGIC */
    /*  0x4 */ int callee_count; /* number of callees in this file */
    /*  0x8 */ int proc_count; /* number of procedure names (union of callers, callees) */
    /*  0xC */ int uid, gid, euid, egid; /* Unix user, group, effective user, group ids */
    /* 0x1C */ int argc; /* Number of command-line arguments */
    /* 0x20 */ int ms_stamp, ls_stamp; /* Compiler system stamp (e.g. 0, 19 -> "0.19") */
    /* 0x28 */ int for_expansion[H_EXPANSION];
    /* 0x44 */ char stamp[STAMPLEN]; /* Like Unix "asctime", null-padded up to *4 chars */
}; // size 0x60

/* Describes one callee */
struct f_per_proc {
    /*  0x0 */ int magic; // = PROC_FEEDBACK
    /*  0x4 */ unsigned n_id; /* callee's id (zero-origin index into list of procedure ids) */
    /*  0x8 */ unsigned start_line; /* = NO_LINE if we don't know it */
    /*  0xC */ unsigned invocations; /* based on own invocation counts */
    /* 0x10 */ unsigned cycles[2]; /* based on bb counts; 0th element is low-order half */
                                   /* size, excluding profiling code inserted by assembler */
    /* 0x18 */ unsigned instructions;
    /* 0x1C */ unsigned caller_count; /* number of points-of-call for this callee */
    /* 0x20 */ unsigned bb_count; /* number of basic blocks for this callee */
    /* 0x24 */ unsigned regmask, fregmask; /* sets of gp and fp registers used in callee */
    /* 0x2C */ int for_expansion[PP_EXPANSION];
}; // size 0x38

/* Describes one point-of-call */
struct f_per_call {
    /* 0x0 */ int magic; // = CALL_FEEDBACK
    /* 0x4 */ unsigned n_id; /* Caller's id */
    /* 0x8 */ int relative_line; /* = NO_LINE if we don't know it */
    /* 0xC */ unsigned invocations; /* = NO_INVOCATIONS if we don't know how many */
}; // size 0x10

/* Describes one basic block */
struct f_per_bb {
    /* 0x0 */ int magic; // = BB_FEEDBACK
    /* 0x4 */ int relative_line; /* = NO_LINE if we don't know it */
    /* 0x8 */ unsigned bb_freq; /* = NO_INVOCATIONS if we don't know how many */
}; // size 0xC

/*

To describe the file format, we introduce a mythical parameterized type,
which consists of a string padded with at least one null (and enough to
align the end with an integer boundary):

  struct padded_string(name) {
    int length = strlen(name);
    char padded_name[((strlen(name) + sizeof(int)) / sizeof(int)) * sizeof(int)];
    };

Then the file itself consists of:

  struct f_header fh;

  struct padded_string(<argument>) argv[fh.argc];
  struct padded_string(<procedure name>) idstring[fh.proc_count];

  struct {

    int magic = PROC_FEEDBACK;
    struct f_per_proc callee_info;

       struct {
	 int magic = CALL_FEEDBACK;
	 struct f_per_call caller_info;
	 } callers[callee_info.caller_count];

       struct {
	 int magic = BB_FEEDBACK;
	 struct f_per_bb bb_info;
	 } bbs[callee_info.bb_count];

    } callees[fh.callee_count];

The idstring for an unnested procedure is the name of its source file,
followed by a null, followed by the procedure's name.  The idstring for
a nested procedure is the concatenation of its parent's idstring, a
dot, and its own name (apply this definition recursively).

If we don't know a procedure's name (because, for example, we saw an
invocation for it but no symbol information for it), its idstring will
be the empty string.

*/
#endif /*FEEDBACK_H */
