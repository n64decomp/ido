#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "libp.h"

/*
00434720 processargs
00439188 procinit
0047DBB4 getoption
00480794 openoutput
*/
void rewrite(struct PascalFile *file, const char *path, size_t pathlen, size_t size) {
    char *pathbuf;
    FILE *c_file;

    while (pathlen != 0 && path[pathlen - 1] == ' ') {
        --pathlen;
    }
    if (pathlen != 0) {
        pathbuf = malloc(pathlen + 1);
        memcpy(pathbuf, path, pathlen);
        pathbuf[pathlen] = '\0';
        file->path = pathbuf;
    } else {
        pathbuf = file->path;
        if (file->path == NULL) {
            if (file->c_file != NULL) {
                fseek(file->c_file, 0, SEEK_SET);
                return;
            }
            pathbuf = malloc(24);
            _libp_pascal_file_counter++;
            sprintf(pathbuf, "/tmp/pas%d.%d", _libp_pascal_file_counter, getpid());
            file->path = pathbuf;
        }
    }
    if (file->c_file != NULL) {
        c_file = freopen(pathbuf, "w", file->c_file);
        if (c_file == NULL) {
            fprintf(stderr, "Permission Denied, rewrite to a protected file\n");
            exit(13);
        }
    } else {
        c_file = fopen(pathbuf, "w");
    }
    if (c_file != NULL) {
#ifdef __sgi
        if (c_file->_base == NULL) {
            _getbuf(c_file, size != 0 : size : 1);
        }
#endif
    }
    file->c_file = c_file;
}
