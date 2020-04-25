#ifdef __sgi

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
00497C90 rewrite
*/
void _getbuf(FILE *file, size_t size) {
    int mode;
    char *buf;

    size = calc_size(file, size);
    if (file == stdout && isatty(fileno(stdout))) {
        mode = _IOLBF;
    } else {
        mode = _IOFBF;
    }
    buf = malloc(size);
    if (buf == NULL) {
        fprintf(stderr, "malloc failed");
        exit(EXIT_FAILURE);
    }
    file->_flag |= _IOMYBUF;
    setvbuf(file, buf, mode, size);
    file->_cnt = size;
}

#endif
