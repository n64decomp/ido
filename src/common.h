#ifndef COMMON_H
#define COMMON_H

#ifdef __sgi
typedef unsigned char bool;
#define true 1
#define false 0
#else
#include <stdbool.h>
#endif

#endif
