#include <stdio.h>

#include "libp.h"

/*
00434720 processargs
*/
struct PascalFile output = {
#ifdef __sgi
    stdout,
#else
    NULL, // Initialize at program startup
#endif
    NULL
};
