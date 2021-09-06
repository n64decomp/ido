#ifndef STEXT_H
#define STEXT_H
#include <stdio.h>
#include "syms.h"

//TODO: some types might be wrong
int st_readbinary(char *filename, char how);
int st_readst(int fn, char how, int filebase, pCHDRR pchdr, int flags);
void st_writebinary(char *filename, int flags);
void st_writest(int fn, int flags);
void st_shifttq(int iaux, int tq);
int st_iaux_copyty(int ifd, pSYMR psym);
void st_changeaux(int iaux, AUXU aux);
void st_addtq(int iaux, int tq);
void st_changeauxrndx(int iaux, int ifd, int index);
int st_auxbtadd(int bt);
int st_auxisymadd(int isym);
int st_auxrndxadd(int ifd, int index);
int st_auxbtsize(int iaux, int width);
int st_auxrndxadd_idn(int idn);
void st_addcontinued(int iaux);
/*
extern char *st_mlang_ascii [];
extern char *st_mst_ascii [];
extern char *st_msc_ascii [];
extern char *st_mbt_ascii [];
extern char *st_mtq_ascii [];
 */
void st_dump(FILE *fd, int flags);
void st_printfd(FILE *fd, int ifd, int flags);
int st_currentifd(void);
int st_ifdmax(void);
void st_setfd(int index);
void st_fdadd(char *filename, int lang, int merge, int glevel);
int st_symadd(int iss, int value, int st, int sc, int index);
int st_auxadd(AUXU aux);
int st_pdadd(int isym);
int st_lineadd(int lineno);
int st_stradd(char *cp);
pSYMR st_psym_ifd_isym(int ifd, int isym);
pAUXU st_paux_ifd_iaux(int ifd, int iaux);
pLINER st_pline_ifd_iline(int ifd, int iline);
pAUXU st_paux_iaux(int iaux);
pPDR st_ppd_ifd_isym(int ifd, int isym);
int st_ifd_pcfd(pCFDR pcfd1);
pCFDR st_pcfd_ifd(int ifd);
char *st_str_iss(int iss);
char *st_str_ifd_iss(int ifd, int iss);
void *st_malloc(void *ptr, int *size, int itemsize, int basesize);
int st_filebegin(char *filename, int lang, int merge, int glevel);
void st_endallfiles(void);
int st_fileend(int idn);
int st_textblock(void);
int st_blockbegin(int iss, int value, int sc);
int st_blockend(int size);
void st_blockpop(void);
int st_procend(int idn);
int st_procbegin(int idn);
char *st_sym_idn(int idn, int *sc, int *st, int *value, int *index);
char *st_str_idn(int idn);
int st_fglobal_idn(int idn);
pSYMR st_psym_idn_offset(int idn, int offset);
void st_fixextindex(int idn, int index);
void st_fixextsc(int idn, int sc);
int st_pdadd_idn(int idn);
void st_fixiss(int idn, int iss);
void st_changedn(int idn, int ifd, int index);
pCHDRR st_cuinit(void);
void st_setchdr(pCHDRR pchdr);
pCHDRR st_currentpchdr(void);
void st_free(void);
int st_extadd(int iss, int value, int st, int sc, int index);
int st_extstradd(char *cp);
char *st_str_extiss(int iss);
int st_idn_index_fext(int index, int fext);
int st_idn_dn(int dn);
int st_idn_rndx(RNDXR rndx);
RNDXR st_rndx_idn(int idn);
pDNR st_pdn_idn(int idn);
void st_setidn(int idndest, int idnsrc);
pEXTR st_pext_dn(int dn);
pEXTR st_pext_iext(int index);
int st_iextmax(void);

void _md_st_error(const char *format, ...);
void _md_st_internal(const char *format, ...);
char *_md_st_str_extiss(int index);
char *_md_st_str_iss(int iss);
int _md_st_iextmax(void);
int _md_st_currentifd(void);
void *_md_st_malloc(void *ptr, int *size, int itemsize, int basesize);
int _md_st_ifdmax(void);
void _md_st_setfd(int fd);

#endif /*STEXT_H */
