#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "libp/libp.h"

int __Argc;
char **__Argv;

double _atod(const char *str) {
    return atof(str);
}

int main1(int argc, char *argv[]);

int main(int argc, char *argv[]) {
    puts("main");
    __Argc = argc;
    __Argv = argv;
    output.c_file = stdout;
    err.c_file = stderr;
    main1(argc, argv);
    return 0;
}
