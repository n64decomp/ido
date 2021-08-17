#ifndef COMMON_H
#define COMMON_H

#ifdef __sgi
#define TRAP_IF(cond)
#else
#include <assert.h>
#define TRAP_IF(cond) assert(!(cond))
#endif

#ifdef __sgi
typedef unsigned char bool;
#define true 1
#define false 0
#else
#include <stdbool.h>
#endif

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define ABS(x)    ((x) <  0  ? (x) :-(x))

// Set bits [start..end) in a 64-bit word to ones (bit with index 0 is the msb)
//#define GENMASK(start, end) ((((MAX((long long int)(start), 0LL) - MIN((long long int)(end), 64LL)) >> 63) << ((MAX((start), 0) - MIN((end), 64)) & 63)) >> MAX((start), 0))
#define GENMASK(start, end) ((unsigned long long)(((MAX((long long)(start), 0LL) - MIN((long long)(end), 64LL)) >> 63) << ((MAX((start), 0) - MIN((end), 64)) & 63)) >> MAX((start), 0ULL))

//#define GETBIT32(set, index) ((int)(((unsigned int)(set) & -((unsigned int)(index) < 32)) << ((index) & 31)) < 0)
#define GETBIT32(set, index) ((unsigned int)(index) < 32U && ((set) & (1U << (31 - (index)))))



#define SET_INIT(set, value)                                            \
    set[0] = ((unsigned) (value) < 0x20U) << (~(value) & 31);           \
    set[1] = ((unsigned) ((value) - 0x20) < 0x20U) << (~(value) & 31);

#define SET_ADD(set, value)                                             \
    set[0] |= ((unsigned) (value) < 0x20U) << (~(value) & 31);          \
    set[1] |= ((unsigned) ((value) - 0x20) < 0x20U) << (~(value) & 31);


#define SET_IN(set, value) (GETBIT32((set)[0], (value)) || GETBIT32((set)[1], (value) - 0x20))

#define SET_UNION(set1, set2)                                       \
    (set1)[0] |= (set2)[0],                                         \
    (set1)[1] |= (set2)[1]

#define SET_EMPTY(set) (((set)[0] | (set)[1]) == 0)

#define SET64_INIT(set, value) (set) = ((unsigned long long)((value) < 64U) << ((~(value)) & 63));
#define SET64_ADD(set, value) (set) |= ((unsigned long long)((value) < 64U) << ((~(value)) & 63))
//#define SET64_IN(set, value) (((set) & (1ll << ((~(value)) & 0x3f))) != 0)
#define SET64_IN(set, value) ((unsigned int)(value) < 64U && ((set) & (1ULL << (~(value) & 63))))
#define SET64_MINUS(set, value) ((set) & ~((unsigned long long)((value) < 64U) << ((~(value)) & 63)))
// (documentation)
#define SET64_EMPTY(set) ((set) == 0LL)

#define BITARR_SET(arr, index, value) \
            (arr)[(index) >> 3] = ((((((value) & 1) ^ (((unsigned int)((arr)[(index) >> 3]) << (((index) & 7) + 24)) >> 31)) << 31) >> (((index) & 7) + 24)) ^ (arr)[(index) >> 3])

#define BITARR_GET(arr, index) \
            (((unsigned int)(arr)[(index) >> 3] << (((index) & 7) + 24)) >> 31)

#endif
