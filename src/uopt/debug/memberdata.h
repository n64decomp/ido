#ifndef MEMBERDATA_H
#define MEMBERDATA_H
#include <stdlib.h>
#include <stddef.h>

struct Member {
    const char *name;
    const char *typeName;
    size_t offset;
    size_t size;
    int numElements; // > 1 if member is an array, 1 otherwise
};

extern struct Member liveRangeMembers[];
extern struct Member liveUnitMembers[];

#endif
