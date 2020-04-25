#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

struct _FILE_WRAPPER;

typedef struct _FILE_WRAPPER FILE_WRAPPER;

int __us_rsthread_stdio = 1;

int __iob[3 * 0x20];

unsigned char _sibuf[1];

extern int __Argc;
extern char **__Argv;

void _doprnt() {
    puts("doprnt");
}

int __filbuf(FILE_WRAPPER *stream) {
    puts("__filbuf");
    return 0;
}

int __flsbuf (int c, FILE_WRAPPER *stream) {
    puts("__flsbuf");
    return c;
}

int __semputc(int c, FILE_WRAPPER *stream) {
    puts("__semputc");
    return c;
}

int __semgetc(FILE_WRAPPER *stream) {
    puts("__semgetc");
    return 0;
}

double _atod(const char *str) {
    return atof(str);
}

int main1(int argc, char *argv[]);

int main(int argc, char *argv[]) {
    puts("main");
    __Argc = argc;
    __Argv = argv;
    main1(argc, argv);
    return 0;
}
