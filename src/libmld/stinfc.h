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
/* $Header: /proj/irix5.3/isms/cmplrs/include/cmplrs/RCS/stinfc.h,v 7.4 1992/01/20 13:00:25 daveb Exp $ */
/*
 * Author	Larry B Weber
 * Date Started	6/11/85
 * Purpose	provide procedure and function headers to st routines
 */

#ifdef _LANGUAGE_PASCAL
type
  st_string = packed array[1..128] of char; { always null terminated	      }
  pst_string = ^st_string;
  pSYMR = ^integer;
  pCFDR = ^integer;
  RNDXR = integer;
  pRNDXR = ^RNDXR;
  AUXU = integer;
  pAUXR = ^AUXU;

function st_readbinary( 		{ open and read-in st by file name    }
       var filename : st_string;	{ null terminated		      }
	   fhow : char) 		{ r - readonly; a - read & append     }
   : integer;				{ returns negative then fails	      }
  external;

function st_readst(			{ read-in an open st		      }
	   fn : integer;		{ UNIX file number		      }
	   fhow : char) 		{ r - readonly; a - read & append     }
   : integer;				{ returns negative then fails	      }
  external;

procedure st_cuinit;			{ create st			      }
  external;

procedure st_writebinary(		{ write-out st to file by file name   }
	var filename : st_string;	{ null terminated		      }
	flags : integer);		{ if -1 write all, see stsupport.h    }
  external;

procedure st_writest(			{ write-out st to open file	      }
	    fn : integer;		{ UNIX file number		      }
	    flags : integer);		{ if -1 write all, see stsupport.h    }
  external;

procedure st_dump(			{ dump st to stderr		      }
	    fn : integer;		{ 0 for STDOUT, else file number      }
	    flags : integer);		{ see stsupport.h, -1 for all	      }
  external;

function st_extadd(			{ add entry to external table	      }
	   iss : integer;		{ index into string space	      }
	   value : integer;		{ address, length, based on sc/st     }
	   st : integer;		{ symbol types, defines in sym.h      }
	   sc : integer;		{ storage classes, defines in sym.h   }
	   index : integer)		{ index into sym or aux 	      }
   : integer;				{ returns index of newly added entry  }
  external;

function st_idn_index_fext(		{ create dense number of sym entry    }
	   index : integer;		{ sym index of entry		      }
	   fext : integer)		{ 1 = ext; 0 = current file	      }
   : integer;				{ returned dense number 	      }
  external;

function st_currentifd			{ get index to current file	      }
   : integer;				{ index to current file 	      }
  external;

function st_ifdmax			{ get num of files		      }
   : integer;				{ returns num of active files	      }
  external;

procedure st_setfd(			{ sets current file		      }
	    index : integer);		{ index of current file 	      }
  external;

function st_fdadd(			{ add file name to file descriptors   }
       var filename : st_string)	{ null terminated		      }
   : integer;				{ returns -1 if existed, else ifd     }
  external;

function st_iss_str(			{ look up str in current file	      }
       var str : st_string)		{ null terminated		      }
   : integer;				{ -1 if not found, else iss	      }
  external;

function st_symadd(			{ add entry to sym table	      }
	   iss : integer;		{ index into string space	      }
	   value : integer;		{ address, length, based on sc	      }
	   st : integer;		{ symbol types, defines in sym.h      }
	   sc : integer;		{ storage classes, defines in sym.h   }
	   index : integer)		{ index into sym or aux 	      }
   : integer;				{ returns index of newly added entry  }
  external;

function st_extstradd(			{ place string in extern string table }
       var str : st_string)		{ nul terminated		      }
   : integer;				{ returns iss			      }
  external;

function st_stradd(			{ place string in string table	      }
       var str : st_string)		{ nul terminated		      }
   : integer;				{ returns iss			      }
  external;

function st_str_iss(			{ get string from iss		      }
	   iss : integer)		{ iss				      }
   : pst_string;			{ returns null terminated string      }
  external;

function st_str_ifd_iss(		{ get string from iss in ifd	      }
	   ifd : integer;		{ ifd of file (255 = ext)	      }
	   iss : integer)		{ iss				      }
   : pst_string;			{ returns null terminated string      }
  external;

function st_filebegin(			{ start a new file		      }
       var str : st_string;		{ null terminated		      }
       language: integer;		{ the language constant in symconst.h }
       merge_flag: integer;		{ 1 if can be merged in the loader    }
       g_level: integer)		{ the G level constant in symconst.h  }
	: integer;			{ returns dense number		      }
  external;

function st_fileend(			{ end file			      }
	   idn : integer)		{ dense number from file begin	      }
   : integer;				{ returns dense number for ustp ucode }
  external;

function st_blockbegin( 		{ start a block 		      }
	   iss : integer;		{ specifies name of block or 0	      }
	   value : integer;		{ ???				      }
	   sc : integer)		{ storage class of block	      }
   : integer;				{ dense number of block 	      }
  external;

function st_blockend(			{ end a block			      }
	    size : integer)		{ block sc dependent value	      }
   : integer;				{ dense number of block 	      }
  external;

function st_procbegin(			{ start a proc			      }
	   idn : integer)		{ dense number of added ext sym       }
   : integer;				{ returns dense number for procend    }
  external;

function st_procend(			{ end a proc			      }
	   idn : integer)		{ idn of ext sym		      }
   : integer;				{ idn used in end ucode op	      }
  external;

function st_sym_idn(			{ get string from idn		      }
	   idn : integer;		{ dense number of block we desire     }
	var sc,				{ returned: sc field of sym	      }
	    st,				{ returned: st field of sym	      }
	    value,			{ returned: value field of sym	      }
	    index: integer)		{ returned: index field of sym	      }
   : pst_string;			{ returns pointer to string, null     }
					{ terminated			      }
  external;

function st_str_idn(			{ get string from idn		      }
	   idn : integer)		{ dense number of block we desire     }
   : pst_string;			{ returns pointer to string, null     }
					{ terminated			      }
  external;

function st_rndx_idn(			{ get rndx from dense number	      }
	   index : integer)		{ dense number			      }
   : RNDXR;				{ returns rndx structure	      }
  external;

/* not likely used directly in Pascal					     */

function st_pext_index( 		{ get address of ext entry	      }
	   index : integer)		{ sym table index of ext table	      }
   : pSYMR;				{ address (pointer) of entry	      }
  external;

procedure st_nextsym(			{ ???				      }
	var prndx : RNDXR);
  external;

function st_ifd_pcfd(			{ map a ifd into a cfd		      }
	   pcfd1 : pCFDR)
   : integer;
  external;

function st_pcfd_ifd(			{ map a cfd into ifd		      }
	   ifd : integer)
   : pcfdR;
  external;

function st_auxadd(			{ add an aux entry to current file    }
	   aux : integer)		{ entry to be added		      }
   : integer;				{ index in aux table		      }
  external;

function st_psym_index( 		{ get pointer to sym from index       }
	   index : integer)		{ index of sym in current file	      }
   : pSYMR;				{ return pointer of sym entry	      }
  external;

function st_paux_ifd_iaux(		{ get pointer to aux entry	      }
	   ifd : integer;		{ number of file		      }
	   iaux : integer)		{ index in aux table		      }
   : pAUXR;				{ return pointer		      }
  external;

function st_paux_iaux(			{ getpointer to auxentry	      }
	   iaux : integer)		{ index in aux table		      }
   : pAUXR;				{ return pointer		      }
  external;

function st_tqhigh_aux( 		{ get most signif. type qualifier     }
	   iaux : integer)		{ aux entry			      }
   : integer;				{ return type qualifier, see sym.h    }
  external;

procedure st_shifttq(			{ place type qualifier in current     }
					{ file				      }
	    iaux : integer;		{ index of aux entry		      }
	    tq : integer);		{ type qualifier to be added	      }
  external;

procedure st_addtq(			{ same as shifttq but in opposite     }
					{ direction			      }
	    iaux : integer;		{ index of aux entry		      }
	    tq : integer);		{ type qualifier to be added	      }
  external;

function st_iaux_copyty(		{ copy the type qualifier	      }
	   ifd : integer;		{ file of source of copy	      }
	   psym : pSYMR)		{ pointer for symbol		      }
   : integer;				{ return aux entry		      }
  external;

procedure st_changeaux( 		{ replace aux entry		      }
	    iaux : integer;		{ index to be replaced		      }
	    aux : integer);		{ new aux entry 		      }
  external;

function st_fglobal_idn (		{is the sym for this idn not static?  }
	    idn : integer)		{ dense number index		      }
	    : integer;
    external;

procedure st_pdadd(
	    isym: integer);
    external;

procedure st_setidn(			{copy content of dense number table}
	    idndest,			{destination of the copy}
	    idnsrc: integer);		{source of the copy}
  external;

procedure st_endallfiles;
  external;

{following 4 are added for upas}

function st_auxbtadd (
	bt: integer)		{ basic type to be added }
    : integer;			{ index in aux table }
  external;

function st_auxrndxadd (
	ifd, 			{ index into file indirect table }
	index: integer)		{ index into sym/aux/iss tables }
    : integer;			{ index in aux table }
  external;

function st_auxrndxadd_idn (
	idn: integer)		{ dense number table index}
    : integer;			{ index in aux table }
  external;

#if 0
function st_index_idn (		{ get symbol table index from idn }
	idn: integer)		{ dense number table index }
    : integer;
  external;
#endif

function st_textblock: integer; { called after st_blockbegin is called }
  external;
   
procedure st_changeauxrndx (iaux, {index of aux table entry to be changed}
			    ifd, {index into file indirect table}
			    index: integer); {index into sym/aux/iss tables}
  external;
procedure st_fixextindex(idn, 		{dense number table index}
		    index: integer); {new content of index field}
  external;
procedure st_fixextsc(idn,		{dense number table index}
		    sc: integer); {new storage class}
  external;
function st_auxbtsize(iaux,		{aux table index of TIR}
		    size: integer) {size allocated for basic type}
    : integer;			{ index in aux table }
  external;
procedure st_fixiss(idn, 		{dense number table index}
		    iss: integer);	{specifies the name}
  external;
procedure st_changedn(idn, 		{dense number table index}
		      ifd, {index into file indirect table}
		      index: integer); {index into sym/aux/iss tables}
  external;
{following added for uopt}
procedure st_free;			{free space allocated for symbol table}
  external;

#endif /* _LANGUAGE_PASCAL */
