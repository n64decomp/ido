#ifndef BITVECTOR_H
#define BITVECTOR_H

struct BitVectorBlock {
    int words[4];
};

struct BitVector {
    int num_blocks;
    struct BitVectorBlock *blocks;
};

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
