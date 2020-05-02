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

// Set bits [start..end) in a 32-bit word to ones (bit with index 0 is the msb)
#define GENMASK(start, end) ((((MAX((start), 0) - MIN((end), 32)) >> 31) << ((MAX((start), 0) - MIN((end), 32)) & 31)) >> MAX((start), 0))

#endif
