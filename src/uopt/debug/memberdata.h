#pragma once
#include <stdlib.h>
#include <stddef.h>

#include "uopt/debug/dlprint.h"

struct Member {
    enum TypeID type;
    const char *name;
    const char *typeName;
    size_t offset;
    size_t size;
    int numElements; // > 1 if member is an array, 1 otherwise

    bool isUnion;
    int numUnionMembers;
    struct Member *unionMembers;
    bool (*unionCond)(void *);

    bool isList;
    size_t listNextOffset;
};

#define MEMBER_GET(pointer, member) ((void*)((char*)(pointer) + (member)->offset))
#define LIST_MEMBER_NEXT(pointer, member) ((void*)((char*)(pointer) + (member)->listNextOffset))

struct StructData {
    enum TypeID type;
    const char *structName;
    int numMembers;
    struct Member *members;
};

extern struct StructData gStructData[TYPE_ID_MAX];


extern struct Member liveRangeMembers[];
extern struct Member liveUnitMembers[];
extern struct Member expressionMembers[];

//offsetof(struct LiveRange, livebbs);
