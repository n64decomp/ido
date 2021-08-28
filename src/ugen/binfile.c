#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

static char output_bin_filename[136];
static FILE *output_bin_file;

/* 
0044BF18 main
*/
void open_bin_file(char *file) {
    strcpy(output_bin_filename, file);
    output_bin_file = fopen(file, "w");
    if (output_bin_file == NULL) {
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
        exit(EXIT_FAILURE);
    }
}

/* 
0044BF18 main
*/
void close_bin_file(void) {
    fclose(output_bin_file);
}


/* 
0044BF18 main

TODO: fix types, binasm?
*/
void output_inst_bin(unsigned char *data2, unsigned int num2, unsigned char *data1, unsigned int num1) {
    char *error_message;
#ifndef __sgi
    char buf[1024];
#endif

    while (num1 != 0) {
        if (fwrite(data1, 16, 1, output_bin_file) != 1) {
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
            fprintf(stderr, "ugen: internal error writing binasm to %s:  %s\n", output_bin_filename, error_message);
            fprintf(stderr, "suggestion:  you may want to use TMPDIR to change where temporary files are written\n");
            fflush(stderr);
            exit(EXIT_FAILURE);
        }
        num1--;
        data1 -= 16;
    }

    if (fwrite(data2, 16, num2, output_bin_file) != num2) {
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
        fprintf(stderr, "ugen: internal error writing binasm to %s:  %s\n", output_bin_filename, error_message);
        fflush(stderr);
        exit(EXIT_FAILURE);
    }
}

/* 
0044BF18 main
*/
void cat_files(char *file1, char *file2) {
    char buf[0x2000];
#ifndef __sgi
    char error_buf[1024];
    int saved_errno;
#endif
    int fd1;
    int fd2;
    int nread;
    int written;
    char *error_message;

    fd1 = open(file1, O_WRONLY | O_APPEND);
    if (fd1 < 0) {
        fprintf(stderr, "ugen: internal: cannot open %s\n", file1);
        fflush(stderr);
        exit(EXIT_FAILURE);
    }

    fd2 = open(file2, O_RDONLY);
    if (fd2 < 0) {
        fprintf(stderr, "ugen: internal: cannot open %s\n", file2);
        fflush(stderr);
        exit(EXIT_FAILURE);
    }

    if (lseek(fd1, 0, SEEK_END) < 0) {
        fprintf(stderr, "ugen: internal: error in seek\n");
        fflush(stderr);
        exit(EXIT_FAILURE);
    }

    while ((nread = read(fd2, &buf, sizeof(buf))) != 0) {
        if (nread < 0) {
            error_message = "(unknown)";
#ifdef __sgi
            if (errno < sys_nerr) {
                error_message = sys_errlist[errno];
            }
#else
            if (strerror_r(errno, error_buf, sizeof(error_buf)) == 0) {
                error_message = error_buf;
            }
#endif
            fprintf(stderr, "ugen: internal error reading from %s:  %s\n", file2, error_message);
            fflush(stderr);
            exit(EXIT_FAILURE);
        }

        written = write(fd1, &buf, nread);
        if (written != nread) {
            if (errno == 0) {
                write(fd1, &buf + written, nread - written);
            }
            fprintf(stderr, "ugen: internal error writing to %s: ", file1);
#ifdef __sgi
            if (errno < sys_nerr) {
                fprintf(stderr, "%s\n", sys_errlist[errno]);
            } else {
                fprintf(stderr, "errno is %d\n", errno);
            }
#else
            saved_errno = errno;
            if (strerror_r(errno, error_buf, sizeof(error_buf)) == 0) {
                fprintf(stderr, "%s\n", error_buf);
            } else {
                fprintf(stderr, "errno is %d\n", saved_errno);
            }
#endif
            fflush(stderr);
            exit(EXIT_FAILURE);
        }
    }

    close(fd1);
    close(fd2);
}
