#ifndef BITVECTOR_H
#define BITVECTOR_H

struct BitVectorBlock {
    int words[4];
};

struct BitVector {
    int num_blocks;
    struct BitVectorBlock *blocks;
};

// parameter order for these macros follows the inconsistent order used in the functions, with block always after bit
// maybe not a good idea...

#define BVBLOCK_SETBIT(bv, bit, block) ((bv).blocks[(block)].words[((bit) & 0x7f) >> 5] |= (1U << (~(bit) & 0x1f)))
#define BVBLOCK_RESETBIT(bv, bit, block) ((bv).blocks[(block)].words[((bit) & 0x7f) >> 5] &= ~(1U << (~(bit) & 0x1f)))
#define BVINBLOCK(bit, block, bv) (((bv).blocks[(block)].words[((bit) & 0x7f) >> 5] << ((bit) & 0x1f)) < 0)
#define BVBLOCKEMPTY(bv, block)            \
    (((bv).blocks[(block)].words[0] |      \
      (bv).blocks[(block)].words[1] |      \
      (bv).blocks[(block)].words[2] |      \
      (bv).blocks[(block)].words[3]) == 0)

int bvectin(int bitpos, struct BitVector *bv);
int bvectin0(int bitpos, struct BitVector *bv);

void initbv(struct BitVector *bv, struct BitVectorBlock repeated_data);
void setbit(struct BitVector *bv, int bitpos);
void resetbit(struct BitVector *bv, int bitpos);
void checkbvlist(struct BitVector *bv);
int bvectcard(struct BitVector *bv);
void bvectcopy(struct BitVector *to, struct BitVector *from);
void bvcopynot(struct BitVector *to, struct BitVector *from);
unsigned char bvecteq(struct BitVector *a, struct BitVector *b);
unsigned char bvectempty(struct BitVector *bv);
void bvectunion(struct BitVector *a, struct BitVector *b);
void bvectintsect(struct BitVector *a, struct BitVector *b);
void bvectminus(struct BitVector *a, struct BitVector *b);
void unionminus(struct BitVector *a, struct BitVector *b, struct BitVector *c);
void minusminus(struct BitVector *a, struct BitVector *b, struct BitVector *c);
void unionintsect(struct BitVector *a, struct BitVector *b, struct BitVector *c);
void uintsectminus(struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d);
void intsectunion(struct BitVector *a, struct BitVector *b, struct BitVector *c);
void unionnot(struct BitVector *a, struct BitVector *b);
void uminusminus(struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d);
void bvectglop(struct BitVector *dest, struct BitVector *a, struct BitVector *b, struct BitVector *c);
void bvecthoistglop(struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d);
void bvectpp1(struct BitVector *dest, struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d);
void bvectpp2(struct BitVector *a, struct BitVector *b, struct BitVector *c);
void bvectinsert(struct BitVector *dest, struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d);
void formbvlivran(struct BitVector *bv);
void setbitbb(struct BitVector *bv, int bitpos);
void checkinitbvlivran(struct BitVector *bv);

#endif
