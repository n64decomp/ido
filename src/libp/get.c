#ifdef __sgi

#include <stdio.h>

void get(FILE *file, int size) {
    int ch;
    int new_count;

    if ((file->_flag & _IOREAD) == 0) {
        fprintf(stderr, "get called on a file open for writing.\n");
        return;
    }
    new_count = file->_cnt - size;
    file->_ptr += size;
    file->_cnt = new_count;
    if (new_count < size) {
        if (new_count > 0) {
            fprintf(stderr, "Buffer not a multiple of record size.\n");
        }
        ch = __filbuf(file);
        if (ch != EOF) {
            ungetc(ch, file);
        }
    }
}

#endif
