#include <stdio.h>

struct PascalFile {
    FILE *c_file;
    char *path;
};

extern int _libp_pascal_file_counter; // really a common variable declared in every libp file
