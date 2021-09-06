#include "sex.h"

int gethostsex(void) {
    union {
        int i;
        char b;
    } u;

    u.i = 1;
    return u.b == 1 ? LITTLEENDIAN : BIGENDIAN;
}
