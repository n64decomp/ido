#ifndef STEXT_H
#define STEXT_H
#include "syms.h"

//TODO: some types might be wrong
int st_readbinary(char *filename, char how);
int st_readst(int fn, char how, long filebase, pCHDRR pchdr, long flags);
void st_writebinary(char *filename, long flags);
void st_writest(int fn, long flags);
void st_shifttq(int iaux, int tq);
long st_iaux_copyty(long ifd, pSYMR psym);
void st_changeaux(int iaux, AUXU aux);
void st_addtq(int iaux, int tq);
void st_changeauxrndx(int iaux, long ifd, long index);
long st_auxbtadd(long bt);
long st_auxisymadd(long isym);
long st_auxrndxadd(long ifd, long index);
long st_auxbtsize(int iaux, long width);
long st_auxrndxadd_idn(long idn);
void st_addcontinued(int iaux);
/*
extern char *st_mlang_ascii [];
extern char *st_mst_ascii [];
extern char *st_msc_ascii [];
extern char *st_mbt_ascii [];
extern char *st_mtq_ascii [];
 */
void st_dump(FILE *fd, long flags);
void st_printfd(FILE *fd, long ifd, long flags);
long st_currentifd(void);
long st_ifdmax(void);
void st_setfd(long index);
void st_fdadd(char *filename, long lang, long merge, long glevel);
long st_symadd(long iss, long value, long st, long sc, long index);
long st_auxadd(AUXU aux);
long st_pdadd(long isym);
long st_lineadd(long lineno);
long st_stradd(char *cp);
pSYMR st_psym_ifd_isym(long ifd, long isym);
pAUXU st_paux_ifd_iaux(long ifd, int iaux);
pLINER st_pline_ifd_iline(long ifd, long iline);
pAUXU st_paux_iaux(int iaux);
pPDR st_ppd_ifd_isym(long ifd, long isym);
long st_ifd_pcfd(pCFDR pcfd1);
pCFDR st_pcfd_ifd(long ifd);
char *st_str_iss(long iss);
char *st_str_ifd_iss(long ifd, long iss);
char *st_malloc(char *ptr, long *size, long itemsize, long basesize);
long st_filebegin(char *filename, long lang, long merge, long glevel);
void st_endallfiles(void);
long st_fileend(long idn);
long st_textblock(void);
long st_blockbegin(long iss, long value, long sc);
long st_blockend(long size);
void st_blockpop(void);
long st_procend(long idn);
long st_procbegin(long idn);
char *st_sym_idn(long idn, long *sc, long *st, long *value, long *index);
char *st_str_idn(long idn);
long st_fglobal_idn(long idn);
pSYMR st_psym_idn_offset(long idn, long offset);
void st_fixextindex(long idn, long index);
void st_fixextsc(long idn, long sc);
long st_pdadd_idn(long idn);
void st_fixiss(long idn, long iss);
void st_changedn(long idn, long ifd, long index);
pCHDRR st_cuinit(void);
void st_setchdr(pCHDRR pchdr);
pCHDRR st_currentpchdr(void);
void st_free(void);
long st_extadd(long iss, long value, long st, long sc, long index);
long st_extstradd(char *cp);
char *st_str_extiss(long iss);
long st_idn_index_fext(long index, long fext);
long st_idn_dn(long dn);
long st_idn_rndx(RNDXR rndx);
RNDXR st_rndx_idn(long idn);
pDNR st_pdn_idn(long idn);
void st_setidn(long idndest, long idnsrc);
pEXTR st_pext_dn(long dn);
pEXTR st_pext_iext(long index);
long st_iextmax(void);
#endif /*STEXT_H */
