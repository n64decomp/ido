#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char *B_10018638;
static FILE *B_10018630;

/* 
0044BF18 main
*/
void open_bin_file(char *file) {
    strcpy(&B_10018638, file);
    B_10018630 = fopen(file, "w");
    if (B_10018630 == NULL) {
#ifdef __sgi
        if (errno < sys_nerr) {
            fprintf(stderr, "ugen: internal error opening %s: %s, ", file, sys_errlist[errno]);
        } else {
            fprintf(stderr, "ugen: internal error opening %s: %s\n", file, "(unknown)");
        }
#else
        char buf[1024];
        int saved_errno = errno;
        if (strerror_r(errno, buf, sizeof(buf)) == 0) {
            fprintf(stderr, "ugen: internal error opening %s:  %s\n", file, buf);
        } else {
            fprintf(stderr, "ugen: internal error opening %s:  %s\n", file, "(unknown)");
        }
#endif
        exit(1);
    }
}

/* 
0044BF18 main
*/
void close_bin_file(void) {
    fclose(B_10018630);
}


/* 
0044BF18 main
*/
void output_inst_bin(unsigned char *arg0, int arg1, unsigned char *arg2, int arg3) {
    char *phi_s1;
    int phi_s0;
#ifdef __sgi
    char *error_message;
#else
    char error_message[1024];
#endif

    fprintf(stderr, "\e[91moutput_inst_bin\e[m\n");
    phi_s1 = arg2;
    phi_s0 = arg3;
    while (phi_s0 != 0) {
        if (fwrite(phi_s1, 16, 1, B_10018630) != 1) {
#ifdef __sgi
            error_message = "(unknown)";
            if (errno < sys_nerr) {
                error_message = sys_errlist[errno];
            }
            fprintf(stderr, "ugen: internal error writing binasm to %s:  %s\n", &B_10018638, error_message);
#else
            if (strerror_r(errno, error_message, sizeof(error_message)) == 0) {
                fprintf(stderr, "ugen: internal error writing binasm to %s:  %s\n", &B_10018638, error_message);
            } else {
                fprintf(stderr, "ugen: internal error writing binasm to %s:  %s\n", &B_10018638, "(unknown)");
            }
#endif
            fprintf(stderr, "suggestion:  you may want to use TMPDIR to change where temporary files are written\n");
            fflush(stderr);
            exit(1);
        }
        phi_s0--;
        phi_s1 -= 0x10;
    }
    if (fwrite(arg0, 0x10, arg1, B_10018630) != arg1) {
#ifdef __sgi
        if (errno < sys_nerr) {
            error_message = sys_errlist[errno];
        } else {
            error_message = "(unknown)";
        }
        fprintf(stderr, "ugen: internal error writing binasm to %s:  %s\n", &B_10018638, error_message);
#else
        if (strerror_r(errno, error_message, sizeof(error_message)) == 0) {
            fprintf(stderr, "ugen: internal error writing binasm to %s:  %s\n", &B_10018638, error_message);
        } else {
            fprintf(stderr, "ugen: internal error writing binasm to %s:  %s\n", &B_10018638, "(unknown)");
        }
#endif
        fflush(stderr);
        exit(1);
    }
}

/* 
0044BF18 main
*/
void cat_files(char *arg0, char *arg1) {
    char sp58[0x2000];
    int fd2_sp50;
    int fd_s7;
    int nread;
    int written;
    char *error_message;
#ifndef __sgi
    char buf[1024];
    int saved_errno;
#endif

    fd_s7 = open(arg0, 9);
    if (fd_s7 < 0) {
        fprintf(stderr, "ugen: internal: cannot open %s\n", arg0);
        fflush(stderr);
        exit(1);
    }
    fd2_sp50 = open(arg1, 0);
    if (fd2_sp50 < 0) {
        fprintf(stderr, "ugen: internal: cannot open %s\n", arg1);
        fflush(stderr);
        exit(1);
    }
    if (lseek(fd_s7, 0, 2) < 0) {
        fprintf(stderr, "ugen: internal: error in seek\n");
        fflush(stderr);
        exit(1);
    }

    while ((nread = read(fd2_sp50, &sp58, 0x2000)) != 0) {
        if (nread < 0) {
            error_message = "(unknown)";
#ifdef __sgi
            if (errno < sys_nerr) {
                error_message = sys_errlist[errno];
            }
#else
            if (strerror_r(errno, buf, sizeof(buf)) == 0) {
                error_message = buf;
            }
#endif
            fprintf(stderr, "ugen: internal error reading from %s:  %s\n", arg1, error_message);
            fflush(stderr);
            exit(1);
        }
        written = write(fd_s7, &sp58, nread);
        if (written != nread) {
            if (errno == 0) {
                write(fd_s7, &sp58 + written, nread - written);
            }
            fprintf(stderr, "ugen: internal error writing to %s: ", arg0);
#ifdef __sgi
            if (errno < sys_nerr) {
                fprintf(stderr, "%s\n", sys_errlist[errno]);
            } else {
                fprintf(stderr, "errno is %d\n", errno);
            }
#else
            saved_errno = errno;
            if (strerror_r(errno, buf, sizeof(buf)) == 0) {
                fprintf(stderr, "%s\n", buf);
            } else {
                fprintf(stderr, "errno is %d\n", saved_errno);
            }
#endif
            fflush(stderr);
            exit(1);
        }
    }
    close(fd_s7);
    close(fd2_sp50);
}
