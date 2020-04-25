#include <string.h>

#include "libxmalloc/xmalloc.h"

/*
0042F6CC controlflow
00486AF4 ucoid
00486C78 ucofname
*/
void *new(size_t size, int zero) {
    void *result;

    result = xmalloc(size);
    if (zero && result != NULL) {
        memset(result, 0, size);
    }
    return result;
}

/*
00486AF4 ucoid
00486C78 ucofname
*/
void dispose(void *addr, size_t size) {
    xfree(addr);
}
