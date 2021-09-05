#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "libxmalloc/xmalloc.h"
#include "common.h"
#include "libmld/libmld.h"
#include "uoptfeedback.h"

// See /usr/include/cmplrs/feedback.h for feedback structure

/*
0040B930 read_feedback_file
0042EB10 incorp_feedback
*/
unsigned char *feedback; // TODO: pointer to a feedback struct

/*
0040B930 read_feedback_file
0042EB10 incorp_feedback
*/
unsigned char *feedback_end; // TODO: pointer to a feedback struct

/*
0040C0C0 local_in_reg
00439B60 write_updated_st
*/
bool sym_file_updated = false;

extern char **__Argv;

/*
0040B930 read_feedback_file
*/
static void func_0040B7D0(const char *format, ...) {
    va_list arglist;

#ifdef __sgi
    if (errno < sys_nerr) {
        fprintf(stderr, "%s: %s, ", __Argv[0], sys_errlist[errno]);
    } else {
        fprintf(stderr, "%s: error %d (error code unknown), ", __Argv[0], errno);
    }
#else
    char buf[1024];
    int saved_errno = errno;
    if (strerror_r(errno, buf, sizeof(buf)) == 0) {
        fprintf(stderr, "%s: %s, ", __Argv[0], buf);
    } else {
        fprintf(stderr, "%s: error %d (error code unknown), ", __Argv[0], saved_errno);
    }
#endif

    va_start(arglist, format);
#ifdef __sgi
    _doprnt(format, arglist, stderr);
#else
    vfprintf(stderr, format, arglist);
#endif
    va_end(arglist);
    putc('\n', stderr);
    exit(1);
}

/*
00434720 processargs
*/
void read_feedback_file(const char *path) {
    int fd;
    struct stat statbuf;
    unsigned char *filebuf;

    fd = open(path, O_RDONLY);
    if (fd < 0) {
        func_0040B7D0("opening feedback input %s.", path);
    }
    if (fstat(fd, &statbuf) < 0) {
        func_0040B7D0("getting status on %s.", path);
    }
    filebuf = xmalloc(statbuf.st_size);
    if (filebuf == NULL) {
        fprintf(stderr, "%s: unable to allocate %d byte feedback buffer.\n", __Argv[0], (int)statbuf.st_size);
        exit(1);
    }
    if (read(fd, filebuf, statbuf.st_size) < 0) {
        func_0040B7D0("reading feedback file %s.", path);
    }
    close(fd);
    if (FEEDBACK_MAGIC != *(int *)filebuf) {
        fprintf(stderr, "%s: feedback file stamp = %x, not %x.\n", __Argv[0], *(int *)filebuf, FEEDBACK_MAGIC);
        exit(1);
    }
    feedback = filebuf;
    feedback_end = filebuf + statbuf.st_size;
}

/*
0040BAE0 func_0040BAE0
0040BCA0 path_blockno
*/
static int func_0040BAE0(int ifd, int isym, char **str) {
    SYMR *sym;
    int temp_s5;
    int result;

    sym = st_psym_ifd_isym(ifd, isym);
    isym++;
    if (sym->index == indexNil) {
        return -1;
    }

    temp_s5 = st_paux_ifd_iaux(ifd, sym->index)->isym;
    if (temp_s5 == -1) {
        return -1;
    }

    do {
        sym = st_psym_ifd_isym(ifd, isym);
        if (sym->st == stStaticProc && sym->index != indexNil && strcmp(str[0], st_str_ifd_iss(ifd, sym->iss)) == 0) {
            if (str[1] == 0) {
                return isym;
            }

            result = func_0040BAE0(ifd, isym, str + 1);
            if (result != -1) {
                return result;
            }

            isym = st_paux_ifd_iaux(ifd, sym->index)->isym;
        }

        isym++;
    } while (isym < temp_s5);

    return -1;
}

/*
0042EB10 incorp_feedback
*/
int path_blockno(char *name, int length) {
    CFDR *cfd;
    int ifdmax;
    char **s0;
    char *p;
    char c;
    int ifd;
    PDR *pd;
    int isym;
    char *sp68[32];
    SYMR *sym;
    int iextmax;
    int iext;
    EXTR *pext;
    int idn;
    CHDRR *chdr;
    DNR *dn;

    p = name;
    s0 = sp68;
    *s0++ = p;
    while (c = *p++) {
    }
    *s0++ = p;

    while (c = *p++) {
        if (c == '.') {
            *(p - 1) = '\0';
            if (s0 != (sp68 + 31)) {
                *s0++ = p;
            }
        }
    }

    if (p != (name + length + 1)) {
        fprintf(stderr, "name/length inconsistency in feedback file.\n");
        exit(1);
    }

    *s0 = 0;
    ifdmax = st_ifdmax();
    isym = -1;
    for (ifd = 0; ifd < ifdmax; ifd++) {
        cfd = st_pcfd_ifd(ifd);
        if (strcmp(sp68[0], st_str_ifd_iss(ifd, cfd->pfd->rss)) == 0){
            pd = cfd->ppd;
            while (pd < &cfd->ppd[cfd->pfd->cpd]) {
                sym = st_psym_ifd_isym(ifd, pd->isym);
                if (strcmp(sp68[1], st_str_ifd_iss(ifd, sym->iss)) == 0) {
                    if (sp68[2] == NULL) {
                        isym = pd->isym;
                        break;
                    } else if (sym->index != indexNil) {
                        isym = func_0040BAE0(ifd, pd->isym, &sp68[2]);
                        if (isym != -1) {
                            break;
                        }
                    } else break;
                }
                pd++;
            }
            if(isym != -1) {
                break;
            }
        }
    }

    if (isym == -1) {
        return -1;
    }

    sym = st_psym_ifd_isym(ifd, isym);
    if (sym->st == stProc) {
        iextmax = st_iextmax();
        for (iext = 0; iext < iextmax; iext++) {
            pext = st_pext_iext(iext);

            if (pext->asym.index == isym && (unsigned short)pext->ifd == ifd && 
                    (pext->asym.st == stProc || pext->asym.st == stStaticProc) &&
                    pext->asym.sc == scText) {
                break;
            }

        }

        if (iext == iextmax) {
            fprintf(stderr, "symbol table anomaly isym (%d) not referred to by external\n", isym);
            return -1;
        }
        ifd = ST_EXTIFD;
        isym = iext;
    }

    idn = 1;
    while ((chdr = st_currentpchdr())->cdn != idn) {
        dn = st_pdn_idn(idn);
        if (dn->rfd == ifd && dn->index == isym) {
            return idn;
        }
        idn++;
    }
    return -1;
}

/*
00469280 globalcolor
*/
void local_in_reg(int blockno, int var_addr, int reg) {
    SYMR *sym;

    sym_file_updated = true;
    sym = st_psym_idn_offset(blockno, var_addr);
    if (sym != NULL) {
        if (sym->sc == scVar) {
            sym->sc = scVarRegister;
        } else {
            sym->sc = scRegister;
        }
        sym->value = reg;
    }
}
