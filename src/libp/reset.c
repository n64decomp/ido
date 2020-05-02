#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "common.h"
#include "libp.h"

/*
00498034 reset
004983F0 _getbuf
*/
size_t calc_size(FILE *unused, size_t size) {
    size_t temp_lo;

    temp_lo = (0x1000U / size) * size;
    if (size < temp_lo) {
        return temp_lo;
    }
    return size;
}

/*
0041FD3C genloadnum
0042BF08 reemit
00434434 func_00434434
00480748 openinput
*/
void reset(struct PascalFile *file, const char *path, int pathlen, size_t bufsize) {
    char *used_path;
    int free_used_path;
    char *buf;
    int ch;
    int i;
    FILE *c_file;
    int new_pathlen;

    free_used_path = false;
    new_pathlen = pathlen;
    if (pathlen != 0) {
        for (i = pathlen - 1; path[i] == ' '; i--) {
            new_pathlen = i;
            if (i == 0) {
                break;
            }
        }
    }
    if (new_pathlen != 0) {
        pathlen = new_pathlen;
        used_path = malloc(new_pathlen + 1);
        memcpy(used_path, path, pathlen);
        used_path[pathlen] = '\0';
        file->path = used_path;
        free_used_path = true;
    } else {
        used_path = file->path;
        if (file->path == NULL) {
            if (file->c_file != NULL) {
                fseek(file->c_file, 0, SEEK_SET);
                return;
            }
            used_path = malloc(24);
            free_used_path = true;
            sprintf(used_path, "/tmp/pas%d.%d", ++_libp_pascal_file_counter, getpid());
            file->path = used_path;
        }
    }
    if (file->c_file != NULL) {
        c_file = freopen(used_path, "r", file->c_file);
    } else {
        c_file = fopen(used_path, "r");
    }
#ifdef __sgi
    if (c_file != NULL && bufsize != 0) {
        bufsize = calc_size(c_file, bufsize) + 8;
        if (c_file == stdin) {
            c_file->base = _sibuf;
        } else {
            buf = malloc(bufsize);
            setvbuf(c_file, buf, buf != NULL ? _IOFBF : _IONBF, bufsize);
            if (buf != NULL) {
                c_file->_flag |= _IOMYBUF;
            }
        }
        ch = __filbuf(c_file);
        if (ch != EOF) {
            ungetc(ch, c_file);
        }
    }
#endif
    file->c_file = c_file;
    if (free_used_path) {
        free(used_path);
    }
}
