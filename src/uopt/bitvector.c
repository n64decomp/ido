#include <stddef.h>
#include "uoptdata.h"
#include "uoptutil.h"
#include "bitvector.h"
#include "common.h"

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00448C94 find_ix_loadstores
00455D38 analoop
00461AAC makelivranges
004638C0 regdataflow
00464BFC localcolor
00465E50 spilltemps
00475680 getexpsources
00476AA0 findbbtemps
00479DC4 eliminduct
*/
void initbv(struct BitVector *bv, struct BitVectorBlock repeated_data) {
    int i;

    for (i = 0; i < bv->num_blocks; i++) {
        bv->blocks[i] = repeated_data;
    }
}

/*
0040FB70 setsubinsert
00410204 codemotion
004122D8 vardelete
004123C4 varinsert
00414108 func_00414108
004150E4 func_004150E4
0041550C func_0041550C
004175BC copypropagate
00430FF4 func_00430FF4
00431508 func_00431508
004324F4 findinduct
00444A84 isearchloop
00445AEC trep_image
00445E44 exprimage
00446E18 searchstore
004471AC codeimage
00447F90 check_loop_coincidence
00448928 check_loop_induct_usages
00448C94 find_ix_loadstores
0045CD78 expaltered
0045D208 patchvectors
0045DA18 formlivbb
0045E45C func_0045E45C
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461084 func_00461084
0046123C func_0046123C
00461640 func_00461640
00461AAC makelivranges
004638C0 regdataflow
00465E50 spilltemps
00467F04 split
00469280 globalcolor
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
00476AA0 findbbtemps
00477E20 func_00477E20
00478B8C func_00478B8C
00478ED4 func_00478ED4
00478FA0 func_00478FA0
00479778 func_00479778
00479DC4 eliminduct
*/
void setbit(struct BitVector *bv, int bitpos) {
    int i;
    int pos_in_block;

    if (bv->num_blocks < bitvectorsize) {
        bv->blocks = alloc_realloc(bv->blocks, bv->num_blocks, bitvectorsize, &perm_heap);
        for (i = bv->num_blocks; i < bitvectorsize; i++) {
            bv->blocks[i].words[0] = 0;
            bv->blocks[i].words[1] = 0;
            bv->blocks[i].words[2] = 0;
            bv->blocks[i].words[3] = 0;
        }
        bv->num_blocks = bitvectorsize;
    }

    pos_in_block = bitpos & 0x7f;
    bv->blocks[bitpos >> 7].words[pos_in_block >> 5] |= (1U << (~pos_in_block & 0x1f));
}


/*
0040F8D0 resetsubdelete
00410204 codemotion
004122D8 vardelete
004123C4 varinsert
004127C8 checkexpoccur
00412CB4 checkexp_ant_av
00413000 exprdelete
00413428 checkstatoccur
0041550C func_0041550C
004175BC copypropagate
004324F4 findinduct
00445E44 exprimage
004471AC codeimage
004638C0 regdataflow
00464BFC localcolor
004669A8 addadjacents
00467008 updatelivran
004673B0 func_004673B0
00467514 contiguous
00467C34 needsplit
00467F04 split
00469280 globalcolor
0046BD90 change_to_var_eq
0046C654 del_orig_cond
00478B8C func_00478B8C
004793C4 func_004793C4
0047966C func_0047966C
00479778 func_00479778
00479DC4 eliminduct
*/
void resetbit(struct BitVector *bv, int bitpos) {
    int pos_in_block;

    if (bitpos < (bv->num_blocks << 7)) {
        pos_in_block = bitpos & 0x7f;
        bv->blocks[bitpos >> 7].words[pos_in_block >> 5] &= ~(1U << (~pos_in_block & 0x1f));
    }
}

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
0045D208 patchvectors
00461AAC makelivranges
004638C0 regdataflow
00465E50 spilltemps
00469280 globalcolor
00475680 getexpsources
00479DC4 eliminduct
*/
void checkbvlist(struct BitVector *bv) {
    int i;

    if (bv->num_blocks < bitvectorsize) {
        bv->blocks = alloc_realloc(bv->blocks, bv->num_blocks, bitvectorsize, &perm_heap);
        for (i = bv->num_blocks; i < bitvectorsize; i++) {
            bv->blocks[i].words[0] = 0;
            bv->blocks[i].words[1] = 0;
            bv->blocks[i].words[2] = 0;
            bv->blocks[i].words[3] = 0;
        }
        bv->num_blocks = bitvectorsize;
    }
}

/*
004175BC copypropagate
00467514 contiguous
004676CC compute_save
00467F04 split
*/
int bvectcard(struct BitVector *bv) {
    int i;
    int cnt = 0;

    for (i = 0; i < bv->num_blocks; i++) {
#ifdef __sgi
        int j;
        for (j = 0; j < 128; j++) {
            cnt += (bv->blocks[i].words[j >> 5] << (j & 0x1f)) < 0;
        }
#else
        cnt += __builtin_popcount(bv->blocks[i].words[0]);
        cnt += __builtin_popcount(bv->blocks[i].words[1]);
        cnt += __builtin_popcount(bv->blocks[i].words[2]);
        cnt += __builtin_popcount(bv->blocks[i].words[3]);
#endif
    }

    return cnt;
}

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00455D38 analoop
00461AAC makelivranges
004638C0 regdataflow
00465D30 intfering
00467514 contiguous
00469280 globalcolor
00475680 getexpsources
00479DC4 eliminduct
*/
void bvectcopy(struct BitVector *to, struct BitVector *from) {
    int i;

    for (i = 0; i < from->num_blocks; i++) {
        to->blocks[i] = from->blocks[i];
    }
}

/*
00410204 codemotion
004324F4 findinduct
*/
void bvcopynot(struct BitVector *to, struct BitVector *from) {
    int i;

    for (i = 0; i < from->num_blocks; i++) {
        to->blocks[i].words[0] = ~from->blocks[i].words[0];
        to->blocks[i].words[1] = ~from->blocks[i].words[1];
        to->blocks[i].words[2] = ~from->blocks[i].words[2];
        to->blocks[i].words[3] = ~from->blocks[i].words[3];
    }
}

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00455D38 analoop
004638C0 regdataflow
00475680 getexpsources
00479DC4 eliminduct
*/
unsigned char bvecteq(struct BitVector *a, struct BitVector *b) {
    int i;
    unsigned char ret = true;

    for (i = 0; i < a->num_blocks; i++) {
        ret = ((a->blocks[i].words[0] ^ b->blocks[i].words[0]) |
               (a->blocks[i].words[1] ^ b->blocks[i].words[1]) |
               (a->blocks[i].words[2] ^ b->blocks[i].words[2]) |
               (a->blocks[i].words[3] ^ b->blocks[i].words[3])) == 0;
        if (!ret) {
            break;
        }
    }

    return ret;
}

/*
0041C914 printregs
004324F4 findinduct
00464BFC localcolor
00465D30 intfering
00467008 updatelivran
00467514 contiguous
00467F04 split
00468A14 cupcosts
00469280 globalcolor
00479DC4 eliminduct
*/
unsigned char bvectempty(struct BitVector *bv) {
    int i;
    unsigned char ret = true;

    for (i = 0; i < bv->num_blocks; i++) {
        ret = (bv->blocks[i].words[0] | bv->blocks[i].words[1] |
               bv->blocks[i].words[2] | bv->blocks[i].words[3]) == 0;
        if (!ret) {
            break;
        }
    }

    return ret;
}

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00461AAC makelivranges
004638C0 regdataflow
00464BFC localcolor
00475680 getexpsources
00479DC4 eliminduct
*/
void bvectunion(struct BitVector *a, struct BitVector *b) {
    int i;

    for (i = 0; i < b->num_blocks; i++) {
        a->blocks[i].words[0] |= b->blocks[i].words[0];
        a->blocks[i].words[1] |= b->blocks[i].words[1];
        a->blocks[i].words[2] |= b->blocks[i].words[2];
        a->blocks[i].words[3] |= b->blocks[i].words[3];
    }
}

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00455D38 analoop
00461AAC makelivranges
004638C0 regdataflow
00465D30 intfering
00475680 getexpsources
00479DC4 eliminduct
*/
void bvectintsect(struct BitVector *a, struct BitVector *b) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] &= b->blocks[i].words[0];
        a->blocks[i].words[1] &= b->blocks[i].words[1];
        a->blocks[i].words[2] &= b->blocks[i].words[2];
        a->blocks[i].words[3] &= b->blocks[i].words[3];
    }
}

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00461AAC makelivranges
004638C0 regdataflow
00469280 globalcolor
00475680 getexpsources
00479DC4 eliminduct
*/
void bvectminus(struct BitVector *a, struct BitVector *b) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] &= ~b->blocks[i].words[0];
        a->blocks[i].words[1] &= ~b->blocks[i].words[1];
        a->blocks[i].words[2] &= ~b->blocks[i].words[2];
        a->blocks[i].words[3] &= ~b->blocks[i].words[3];
    }
}

/*
00410204 codemotion
004324F4 findinduct
004638C0 regdataflow
00475680 getexpsources
*/
void unionminus(struct BitVector *a, struct BitVector *b, struct BitVector *c) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] |= b->blocks[i].words[0] & ~c->blocks[i].words[0];
        a->blocks[i].words[1] |= b->blocks[i].words[1] & ~c->blocks[i].words[1];
        a->blocks[i].words[2] |= b->blocks[i].words[2] & ~c->blocks[i].words[2];
        a->blocks[i].words[3] |= b->blocks[i].words[3] & ~c->blocks[i].words[3];
    }
}

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00479DC4 eliminduct
*/
void minusminus(struct BitVector *a, struct BitVector *b, struct BitVector *c) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] &= ~(b->blocks[i].words[0] & ~c->blocks[i].words[0]);
        a->blocks[i].words[1] &= ~(b->blocks[i].words[1] & ~c->blocks[i].words[1]);
        a->blocks[i].words[2] &= ~(b->blocks[i].words[2] & ~c->blocks[i].words[2]);
        a->blocks[i].words[3] &= ~(b->blocks[i].words[3] & ~c->blocks[i].words[3]);
    }
}

/*
00410204 codemotion
004324F4 findinduct
004638C0 regdataflow
*/
void unionintsect(struct BitVector *a, struct BitVector *b, struct BitVector *c) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] |= b->blocks[i].words[0] & c->blocks[i].words[0];
        a->blocks[i].words[1] |= b->blocks[i].words[1] & c->blocks[i].words[1];
        a->blocks[i].words[2] |= b->blocks[i].words[2] & c->blocks[i].words[2];
        a->blocks[i].words[3] |= b->blocks[i].words[3] & c->blocks[i].words[3];
    }
}

/*
00410204 codemotion
004638C0 regdataflow
*/
void uintsectminus(struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] |= b->blocks[i].words[0] & (c->blocks[i].words[0] & ~d->blocks[i].words[0]);
        a->blocks[i].words[1] |= b->blocks[i].words[1] & (c->blocks[i].words[1] & ~d->blocks[i].words[1]);
        a->blocks[i].words[2] |= b->blocks[i].words[2] & (c->blocks[i].words[2] & ~d->blocks[i].words[2]);
        a->blocks[i].words[3] |= b->blocks[i].words[3] & (c->blocks[i].words[3] & ~d->blocks[i].words[3]);
    }
}

/*
004324F4 findinduct
*/
void intsectunion(struct BitVector *a, struct BitVector *b, struct BitVector *c) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] &= b->blocks[i].words[0] | c->blocks[i].words[0];
        a->blocks[i].words[1] &= b->blocks[i].words[1] | c->blocks[i].words[1];
        a->blocks[i].words[2] &= b->blocks[i].words[2] | c->blocks[i].words[2];
        a->blocks[i].words[3] &= b->blocks[i].words[3] | c->blocks[i].words[3];
    }
}

/*
00475680 getexpsources
*/
void unionnot(struct BitVector *a, struct BitVector *b) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] |= ~b->blocks[i].words[0];
        a->blocks[i].words[1] |= ~b->blocks[i].words[1];
        a->blocks[i].words[2] |= ~b->blocks[i].words[2];
        a->blocks[i].words[3] |= ~b->blocks[i].words[3];
    }
}

/*
004638C0 regdataflow
*/
void uminusminus(struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] |= (b->blocks[i].words[0] & ~c->blocks[i].words[0]) & ~d->blocks[i].words[0];
        a->blocks[i].words[1] |= (b->blocks[i].words[1] & ~c->blocks[i].words[1]) & ~d->blocks[i].words[1];
        a->blocks[i].words[2] |= (b->blocks[i].words[2] & ~c->blocks[i].words[2]) & ~d->blocks[i].words[2];
        a->blocks[i].words[3] |= (b->blocks[i].words[3] & ~c->blocks[i].words[3]) & ~d->blocks[i].words[3];
    }
}

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00479DC4 eliminduct
*/
void bvectglop(struct BitVector *dest, struct BitVector *a, struct BitVector *b, struct BitVector *c) {
    int i;

    for (i = 0; i < dest->num_blocks; i++) {
        dest->blocks[i].words[0] = a->blocks[i].words[0] | (b->blocks[i].words[0] & ~c->blocks[i].words[0]);
        dest->blocks[i].words[1] = a->blocks[i].words[1] | (b->blocks[i].words[1] & ~c->blocks[i].words[1]);
        dest->blocks[i].words[2] = a->blocks[i].words[2] | (b->blocks[i].words[2] & ~c->blocks[i].words[2]);
        dest->blocks[i].words[3] = a->blocks[i].words[3] | (b->blocks[i].words[3] & ~c->blocks[i].words[3]);
    }
}

/*
004324F4 findinduct
*/
void bvecthoistglop(struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d) {
    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] &= b->blocks[i].words[0] | (c->blocks[i].words[0] & ~d->blocks[i].words[0]);
        a->blocks[i].words[1] &= b->blocks[i].words[1] | (c->blocks[i].words[1] & ~d->blocks[i].words[1]);
        a->blocks[i].words[2] &= b->blocks[i].words[2] | (c->blocks[i].words[2] & ~d->blocks[i].words[2]);
        a->blocks[i].words[3] &= b->blocks[i].words[3] | (c->blocks[i].words[3] & ~d->blocks[i].words[3]);
    }
}

/*
00410204 codemotion
*/
void bvectpp1(struct BitVector *dest, struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d) {
    int i;

    for (i = 0; i < dest->num_blocks; i++) {
        dest->blocks[i].words[0] = a->blocks[i].words[0] & (b->blocks[i].words[0] | (d->blocks[i].words[0] & ~c->blocks[i].words[0]));
        dest->blocks[i].words[1] = a->blocks[i].words[1] & (b->blocks[i].words[1] | (d->blocks[i].words[1] & ~c->blocks[i].words[1]));
        dest->blocks[i].words[2] = a->blocks[i].words[2] & (b->blocks[i].words[2] | (d->blocks[i].words[2] & ~c->blocks[i].words[2]));
        dest->blocks[i].words[3] = a->blocks[i].words[3] & (b->blocks[i].words[3] | (d->blocks[i].words[3] & ~c->blocks[i].words[3]));

    }
}

/*
00410204 codemotion
*/
void bvectpp2(struct BitVector *a, struct BitVector *b, struct BitVector *c) {
    // same as intsectunion

    int i;

    for (i = 0; i < a->num_blocks; i++) {
        a->blocks[i].words[0] &= b->blocks[i].words[0] | c->blocks[i].words[0];
        a->blocks[i].words[1] &= b->blocks[i].words[1] | c->blocks[i].words[1];
        a->blocks[i].words[2] &= b->blocks[i].words[2] | c->blocks[i].words[2];
        a->blocks[i].words[3] &= b->blocks[i].words[3] | c->blocks[i].words[3];
    }
}

/*
00410204 codemotion
*/
void bvectinsert(struct BitVector *dest, struct BitVector *a, struct BitVector *b, struct BitVector *c, struct BitVector *d) {
    int i;

    for (i = 0; i < dest->num_blocks; i++) {
        dest->blocks[i].words[0] = a->blocks[i].words[0] & ~b->blocks[i].words[0];
        dest->blocks[i].words[1] = a->blocks[i].words[1] & ~b->blocks[i].words[1];
        dest->blocks[i].words[2] = a->blocks[i].words[2] & ~b->blocks[i].words[2];
        dest->blocks[i].words[3] = a->blocks[i].words[3] & ~b->blocks[i].words[3];

        dest->blocks[i].words[0] = (dest->blocks[i].words[0] & ~c->blocks[i].words[0]) | (dest->blocks[i].words[0] & d->blocks[i].words[0]);
        dest->blocks[i].words[1] = (dest->blocks[i].words[1] & ~c->blocks[i].words[1]) | (dest->blocks[i].words[1] & d->blocks[i].words[1]);
        dest->blocks[i].words[2] = (dest->blocks[i].words[2] & ~c->blocks[i].words[2]) | (dest->blocks[i].words[2] & d->blocks[i].words[2]);
        dest->blocks[i].words[3] = (dest->blocks[i].words[3] & ~c->blocks[i].words[3]) | (dest->blocks[i].words[3] & d->blocks[i].words[3]);
    }
}

/*
00448C94 find_ix_loadstores
0045DA18 formlivbb
00464BFC localcolor
00467F04 split
*/
void formbvlivran(struct BitVector *bv) {
    int i;
    int size;

    bv->blocks = alloc_new(bvlivransize * sizeof(struct BitVectorBlock), &perm_heap);
    if (bv->blocks == NULL) {
        outofmem = true;
        return;
    }

    size = bvlivransize;

    for (i = 0; i < size; i++) {
        bv->blocks[i].words[0] = 0;
        bv->blocks[i].words[1] = 0;
        bv->blocks[i].words[2] = 0;
        bv->blocks[i].words[3] = 0;
    }

    bv->num_blocks = size;
}

/*
00455D38 analoop
0045DA18 formlivbb
004638C0 regdataflow
00464BFC localcolor
004669A8 addadjacents
00467F04 split
*/
void setbitbb(struct BitVector *bv, int bitpos) {
    int pos_in_block = bitpos & 0x7f;

    bv->blocks[bitpos >> 7].words[pos_in_block >> 5] |= (1U << (~pos_in_block & 0x1f));
}

/*
00455D38 analoop
004638C0 regdataflow
*/
void checkinitbvlivran(struct BitVector *bv) {
    int i;
    int size;

    if (bv->num_blocks < bvlivransize) {
        bv->blocks = alloc_realloc(bv->blocks, bv->num_blocks, bvlivransize, &perm_heap);
    }

    size = bvlivransize;

    for (i = 0; i < size; i++) {
        bv->blocks[i].words[0] = 0;
        bv->blocks[i].words[1] = 0;
        bv->blocks[i].words[2] = 0;
        bv->blocks[i].words[3] = 0;
    }

    bv->num_blocks = size;
}
