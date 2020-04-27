#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/*
100118F0 D_100118F0
*/
static int B_10013920[4096];

/*
00487624 ugetbufinit
00487668 ugetint
00487848 ugeteof
*/
static int B_10017920;

/*
00487218 uputint
00487328 uputflush
*/
static int B_10017928[4096];

/*
00487218 uputint
00487328 uputflush
*/
static int B_1001B928;

/*
0048752C ugetinit
*/
static char B_1001B930[1024 + 8];

/*
00487120 uputinit
00487458 uputkill
*/
static char B_1001BD38[1024 + 24];


/*
00487624 ugetbufinit
00487668 ugetint
*/
static int *D_100118F0 = B_10013920;

/*
00487624 ugetbufinit
00487668 ugetint
00487848 ugeteof
*/
static int D_100118F4 = -1;

/*
0048752C ugetinit
0048760C ugetinitfd
00487624 ugetbufinit
00487668 ugetint
004878AC ugetclose
*/
static int D_100118F8 = -1;

/*
00487120 uputinit
00487200 uputinitfd
00487218 uputint
00487328 uputflush
00487408 uputclose
00487458 uputkill
*/
static int D_100118FC = -1;

/*
00486690 inituwrite
*/
void uputinit(const char *path) {
    char *pos;

    pos = B_1001BD38;
    while (*path != '\0' && *path != ' ') {
        *pos++ = *path++;
        if (pos >= B_1001BD38 + 1024) {
            break;
        }
    }
    *pos = '\0';
    if (B_1001BD38[0] != '\0') {
        D_100118FC = open(B_1001BD38, O_WRONLY | O_CREAT | O_TRUNC, 0666);
        if (D_100118FC < 0) {
            perror(B_1001BD38);
            exit(1);
        }
    }
}

// unused
void uputinitfd(int fd) {
    D_100118FC = fd;
}

/*
00486880 uwrite
*/
void uputint(int value) {
    if (D_100118FC < 0) {
        fprintf(stderr, "uput: output file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (B_1001B928 >= 0x1000) {
        if (write(D_100118FC, B_10017928, 0x4000) != 0x4000) {
            perror("writing out file");
            exit(1);
        }
        B_1001B928 = 0;
    }
    B_10017928[B_1001B928++] = value;
}

/*
00487408 uputclose
*/
void uputflush(void) {
    if (D_100118FC < 0) {
        fprintf(stderr, "uput: output file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (write(D_100118FC, B_10017928, B_1001B928 * 4) != (B_1001B928 * 4)) {
        perror("writing out file");
        exit(1);
    }
}

/*
0045806C main
*/
void uputclose(void) {
    uputflush();
    close(D_100118FC);
    D_100118FC = -1;
}

/*
00486E50 stopucode
*/
void uputkill(void) {
    if (D_100118FC < 0) {
        fprintf(stderr, "uput: output file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (B_1001BD38[0] != '\0') {
        unlink(B_1001BD38);
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

    pos = B_1001B930;
    while (*path != '\0' && *path != ' ') {
        *pos++ = *path++;
        if (pos >= B_1001B930 + 1024) {
            break;
        }
    }
    *pos = '\0';
    if (B_1001B930[0] != '\0') {
        D_100118F8 = open(B_1001B930, O_RDONLY, 0);
        if (D_100118F8 < 0) {
            perror(B_1001B930);
            exit(1);
        }
    }
}

// unused
void ugetinitfd(int fd) {
    D_100118F8 = fd;
}

// unused
void ugetbufinit(int *buf, int len_bytes) {
    D_100118F8 = 0xFFFF;
    D_100118F0 = buf;
    D_100118F4 = len_bytes / 4;
    B_10017920 = 0;
}

/*
00487848 ugeteof
00487B7C readuinstr
*/
int ugetint(void) {
    int nread;

    if (D_100118F8 < 0) {
        fprintf(stderr, "uget: input file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (B_10017920 >= D_100118F4) { // pos >= end
        if (D_100118F8 == 0xFFFF) {
            if (D_100118F4 > 0) { // This feels buggy, inverted if?
                D_100118F4 = 0;
            } else {
                fprintf(stderr, "read too much from get buffer\n");
                exit(1);
            }
            nread = D_100118F4;
        } else {
            nread = read(D_100118F8, D_100118F0, 0x4000);
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
        D_100118F4 = nread / 4;
        B_10017920 = 0;
    }
    return D_100118F0[B_10017920++];
}

/*
00487B7C readuinstr
*/
int ugeteof(void) {
    ugetint();
    if (D_100118F4 == 0) {
        return 1;
    } else {
        B_10017920--;
        return 0;
    }
}

/*
00487960 resetur
*/
void ugetclose(void) {
    if (D_100118F8 < 0) {
        fprintf(stderr, "uget: input file not initialized\n");
        fflush(stderr);
        exit(1);
    }
    if (D_100118F8 != 0xFFFF) {
        close(D_100118F8);
    }
    D_100118F8 = -1;
}
