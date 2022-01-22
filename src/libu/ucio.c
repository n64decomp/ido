#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdbool.h>

#include "libmld/sex.h"

/*
100118F0 D_100118F0
*/
static int ugetbuf[4096];

/*
00487624 ugetbufinit
00487668 ugetint
00487848 ugeteof
*/
static int ugetpos;

/*
00487218 uputint
00487328 uputflush
*/
static int uputbuf[4096];

/*
00487218 uputint
00487328 uputflush
*/
static int uputpos;

/*
0048752C ugetinit
*/
static char ugetpath[1024 + 8];

/*
00487120 uputinit
00487458 uputkill
*/
static char uputpath[1024 + 24];


/*
00487624 ugetbufinit
00487668 ugetint
*/
static int *ugetbufp = ugetbuf;

/*
00487624 ugetbufinit
00487668 ugetint
00487848 ugeteof
*/
static int ugetbuflen = -1;

/*
0048752C ugetinit
0048760C ugetinitfd
00487624 ugetbufinit
00487668 ugetint
004878AC ugetclose
*/
static int ugetfd = -1;

/*
00487120 uputinit
00487200 uputinitfd
00487218 uputint
00487328 uputflush
00487408 uputclose
00487458 uputkill
*/
static int uputfd = -1;

/*
00486690 inituwrite
*/
void uputinit(const char *path) {
    char *pos;

    pos = uputpath;
    while (*path != '\0' && *path != ' ') {
        *pos++ = *path++;
        if (pos >= uputpath + 1024) {
            break;
        }
    }
    *pos = '\0';
    if (uputpath[0] != '\0') {
        uputfd = open(uputpath, O_WRONLY | O_CREAT | O_TRUNC, 0666);
        if (uputfd < 0) {
            perror(uputpath);
            exit(1);
        }
    }
}

// unused
void uputinitfd(int fd) {
    uputfd = fd;
}

/*
00486880 uwrite
*/
void uputint(int value, bool swap) {
    if (uputfd < 0) {
        fprintf(stderr, "uput: output file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (uputpos >= 0x1000) {
        if (write(uputfd, uputbuf, 0x4000) != 0x4000) {
            perror("writing out file");
            exit(1);
        }
        uputpos = 0;
    }

#ifdef UOPT_LITTLE_ENDIAN
    // Convert back to big endian, except strings
    if (swap) {
        value = swap_word(value);
    }
#endif
    uputbuf[uputpos++] = value;
}

/*
00487408 uputclose
*/
void uputflush(void) {
    if (uputfd < 0) {
        fprintf(stderr, "uput: output file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (write(uputfd, uputbuf, uputpos * 4) != (uputpos * 4)) {
        perror("writing out file");
        exit(1);
    }
}

/*
0045806C main
*/
void uputclose(void) {
    uputflush();
    close(uputfd);
    uputfd = -1;
}

/*
00486E50 stopucode
*/
void uputkill(void) {
    if (uputfd < 0) {
        fprintf(stderr, "uput: output file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (uputpath[0] != '\0') {
        unlink(uputpath);
        return;
    }
    fprintf(stderr, "uput: cannot unlink because uputinitfd was used\n");
    fflush(stderr);
}

/*
00487E48 initur
*/
void ugetinit(const char *path) {
    char *pos;

    pos = ugetpath;
    while (*path != '\0' && *path != ' ') {
        *pos++ = *path++;
        if (pos >= ugetpath + 1024) {
            break;
        }
    }
    *pos = '\0';
    if (ugetpath[0] != '\0') {
        ugetfd = open(ugetpath, O_RDONLY, 0);
        if (ugetfd < 0) {
            perror(ugetpath);
            exit(1);
        }
    }
}

// unused
void ugetinitfd(int fd) {
    ugetfd = fd;
}

// unused
void ugetbufinit(int *buf, int len_bytes) {
    ugetfd = 0xFFFF;
    ugetbufp = buf;
    ugetbuflen = len_bytes / 4;
    ugetpos = 0;
}

/*
00487848 ugeteof
00487B7C readuinstr
*/
int ugetint(bool swap) {
    int nread;
    int in;

    if (ugetfd < 0) {
        fprintf(stderr, "uget: input file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (ugetpos >= ugetbuflen) { // pos >= end
        if (ugetfd == 0xFFFF) {
            if (ugetbuflen > 0) { // This feels buggy, inverted if?
                ugetbuflen = 0;
            } else {
                fprintf(stderr, "read too much from get buffer\n");
                exit(1);
            }
            nread = ugetbuflen;
        } else {
            nread = read(ugetfd, ugetbufp, 0x4000);
            if (nread < 0) {
                perror("reading in file");
                exit(1);
            }
            //! bug, read can return any amount of data in every chunk
            if ((nread & 3) != 0) {
                fprintf(stderr, "input buffer on non-int boundry\n");
                exit(1);
            }
        }
        ugetbuflen = nread / 4;
        ugetpos = 0;
    }

    in = ugetbufp[ugetpos++];
#ifdef UOPT_LITTLE_ENDIAN
    // Most data should be converted to little endian, except for strings
    if (swap) {
        in = swap_word(in);
    }
#endif
    return in;
}

/*
00487B7C readuinstr
*/
int ugeteof(void) {
    ugetint(true);
    if (ugetbuflen == 0) {
        return true;
    } else {
        ugetpos--;
        return false;
    }
}

/*
00487960 resetur
*/
void ugetclose(void) {
    if (ugetfd < 0) {
        fprintf(stderr, "uget: input file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (ugetfd != 0xFFFF) {
        close(ugetfd);
    }
    ugetfd = -1;
}
