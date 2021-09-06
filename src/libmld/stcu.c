#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libmld.h"

/*
00488A48 st_setmsgname
00488AF0 st_error
0048A430 _md_st_internal
0048A4EC _md_st_error
0048AD70 st_internal
00491FD0 st_warning
*/
char *st_errname = "libmld";

void st_setchdr(CHDRR *pchdr) {
    st_pchdr = pchdr;
}

/*
0040BCA0 path_blockno
0048C56C st_file_idn
*/
CHDRR *st_currentpchdr(void) {
    return st_pchdr;
}

#define NULLp1 ((void*)1)
#define NULLn1 ((void*)-1)
/*
0042EB10 incorp_feedback
*/
void st_free(void) {
    if (st_pchdr != NULL) {
        if (st_pchdr->pdn != NULL && st_pchdr->pdn != NULLn1 && st_pchdr->pdn != NULLp1) {
            free(st_pchdr->pdn);
        }
        if (st_pchdr->pext != NULL && st_pchdr->pext != NULLn1 && st_pchdr->pext != NULLp1) {
            free(st_pchdr->pext);
        }
        if (st_pchdr->pssext != NULL && st_pchdr->pssext != NULLn1 && st_pchdr->pssext != NULLp1) {
            free(st_pchdr->pssext);
        }
        if (st_pchdr->pfd != NULL && st_pchdr->pfd != NULLn1 && st_pchdr->pfd != NULLp1) {
            free(st_pchdr->pfd);
        }
        if (st_pchdr->pcfd != NULL && st_pchdr->pcfd != NULLn1 && st_pchdr->pcfd != NULLp1) {
            free(st_pchdr->pcfd);
        }
        if (st_pchdr->psym != NULL && st_pchdr->psym != NULLn1 && st_pchdr->psym != NULLp1) {
            free(st_pchdr->psym);
        }
        if (st_pchdr->paux != NULL && st_pchdr->paux != NULLn1 && st_pchdr->paux != NULLp1) {
            free(st_pchdr->paux);
        }
        if (st_pchdr->popt != NULL && st_pchdr->popt != NULLn1 && st_pchdr->popt != NULLp1) {
            free(st_pchdr->popt);
        }
        if (st_pchdr->ppd != NULL && st_pchdr->ppd != NULLn1 && st_pchdr->ppd != NULLp1) {
            free(st_pchdr->ppd);
        }
        if (st_pchdr->pline != NULL && st_pchdr->pline != NULLn1 && st_pchdr->pline != NULLp1) {
            free(st_pchdr->pline);
        }
        if (st_pchdr->pss != NULL && st_pchdr->pss != NULLn1 && st_pchdr->pss != NULLp1) {
            free(st_pchdr->pss);
        }
        if (st_pchdr->prfd != NULL && st_pchdr->prfd != NULLn1 && st_pchdr->prfd != NULLp1) {
            free(st_pchdr->prfd);
        }
        bzero(st_pchdr, 0x60);
    }
}

/*
0040BCA0 path_blockno
*/
int st_iextmax(void) {
    return st_pchdr->cext;
}

// unused
void st_setmsgname(const char *name) {
    st_errname = malloc(strlen(name) + 1);
    if (st_errname == NULL) {
        fprintf(stderr, "libmld: Internal: cannot allocate to initialize component name for libmld errors\n");
        exit(1);
    }
    strcpy(st_errname, name);
}
