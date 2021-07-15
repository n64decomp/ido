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

// Set bits [start..end) in a 64-bit word to ones (bit with index 0 is the msb)
#define GENMASK(start, end) ((((MAX((long long int)(start), 0LL) - MIN((long long int)(end), 64LL)) >> 63) << ((MAX((start), 0) - MIN((end), 64)) & 63)) >> MAX((start), 0))

//#define GETBIT32(value, index) ((int)(((unsigned int)(value) & -((unsigned int)(index) < 32)) << ((index) & 31)) < 0)
#define GETBIT32(value, index) ((unsigned int)(index) < 32 && ((value) & (1U << (31 - (index)))))

enum MipsRegister {
    r_zero,
    r_at,
    r_v0, r_v1,
    r_a0, r_a1, r_a2, r_a3,
    r_t0, r_t1, r_t2, r_t3, r_t4, r_t5, r_t6, r_t7,
    r_s0, r_s1, r_s2, r_s3, r_s4, r_s5, r_s6, r_s7,
    r_t8, r_t9,
    r_k0, r_k1,
    r_gp,
    r_sp, r_fp, r_s8=r_fp,
    r_ra,
    r_f0, r_f1, r_f2, r_f3,
    r_f4, r_f5, r_f6, r_f7, r_f8, r_f9, r_f10, r_f11,
    r_f12, r_f13, r_f14, r_f15,
    r_f16, r_f17, r_f18, r_f19,
    r_f20, r_f21, r_f22, r_f23, r_f24,
    r_f25, r_f26, r_f27, r_f28, r_f29, r_f30, r_f31,
};

typedef unsigned char MipsRegister;

#endif
