#include <stdlib.h>
#include <sys/times.h>

/*
004807E0 getclock
*/
long clock(void) {
    struct tms buf;

    if (times(&buf) == -1) {
        exit(123);
    }

    return (buf.tms_utime * 1000) / 100;
}
