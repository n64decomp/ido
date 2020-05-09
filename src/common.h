#ifndef COMMON_H
#define COMMON_H

#ifdef __sgi
typedef unsigned char bool;
#define true 1
#define false 0
#else
#include <stdbool.h>
#endif

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Set bits [start..end) in a 64-bit word to ones (bit with index 0 is the msb)
#define GENMASK(start, end) ((((MAX((long long int)(start), 0LL) - MIN((long long int)(end), 64LL)) >> 63) << ((MAX((start), 0) - MIN((end), 64)) & 63)) >> MAX((start), 0))

#endif
