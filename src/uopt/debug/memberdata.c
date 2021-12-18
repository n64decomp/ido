#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include "uoptdata.h"
#include "debug.h"
#include "memberdata.h"

#define MEMBER_DEF(member_type, member, nelems) \
(struct Member)                                 \
{                                               \
    .name = #member,                            \
    .typeName = #member_type,                   \
    .offset=offsetof(PARENT_TYPE, member),      \
    .size=sizeof(member_type),                  \
    .numElements = nelems                       \
}

#define MEMBER(member_type, member) MEMBER_DEF(member_type, member, 1)
#define MEMBER_ARRAY(member_type, member) MEMBER_DEF(member_type, member, sizeof(((PARENT_TYPE *)0)->member) / sizeof(((PARENT_TYPE *)0)->member[0]))

#define PARENT_TYPE struct LiveRange
struct Member liveRangeMembers[] = {
    MEMBER(struct IChain *, ichain),
    MEMBER(int, bitpos),
    MEMBER(struct LiveUnit *,liveunits),
    MEMBER(struct BitVector, reachingbbs),
    MEMBER(struct BitVector, livebbs),
    MEMBER(int, unk1C),
    MEMBER(char, assigned_reg),
    MEMBER(unsigned char, unk21),
    MEMBER(bool, hasstore),
    MEMBER(unsigned char, unk23),
    MEMBER(int, unk24),
    MEMBER_ARRAY(int[2], forbidden),
    MEMBER(float, adjsave),
    MEMBER(struct LiveRange *, next),
    MEMBER(struct InterfereList *, interfere),
    MEMBER(struct LiveUnit *, liveunitsTail),
};
#undef PARENT_TYPE

#define PARENT_TYPE struct LiveUnit
struct Member liveUnitMembers[] = {
    MEMBER(struct Graphnode *, node),
    MEMBER(struct LiveUnit *, next),
    MEMBER(struct LiveRange *, liverange),
    MEMBER(struct LiveUnit *, next_in_block),
    MEMBER(unsigned short, load_count),
    MEMBER(unsigned char, store_count),
    MEMBER(unsigned char, reg),
    MEMBER(bool, firstisstr),
    MEMBER(bool, needreglod),
    MEMBER(bool, needregsave),
    MEMBER(bool, deadout),
};
#undef PARENT_TYPE
