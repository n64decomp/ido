#include "bitvector.h"

/*
0040F8D0 resetsubdelete
0040FB70 setsubinsert
00410098 delete_unmoved_recur
00410204 codemotion
004122D8 vardelete
00413000 exprdelete
00414108 func_00414108
004175BC copypropagate
0041C914 printregs
00426FA4 func_00426FA4
00428DD8 func_00428DD8
0042AADC func_0042AADC
00430680 func_00430680
00430BF4 func_00430BF4
00430D74 func_00430D74
00430FF4 func_00430FF4
004310EC func_004310EC
00431268 func_00431268
00431508 candidate
004324F4 findinduct
00447F90 check_loop_coincidence
0044821C expr_has_direct_usage
00448530 has_direct_induct_usage
00448928 check_loop_induct_usages
00448C94 find_ix_loadstores
00454514 func_00454514
00454AB8 func_00454AB8
00455060 func_00455060
0045CB3C expinalter
0045D208 patchvectors
0045DA18 formlivbb
0045E1F8 caninsertearly
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461AAC makelivranges
004638C0 regdataflow
00464778 prehascup
00464848 func_00464848
00464910 allsucmember
00464A4C preallmember
00464BFC localcolor
00465E50 spilltemps
0046684C findsharedintf
00466904 marksharedintf
004669A8 addadjacents
00466CFC somepostmember
00466EE4 allsucppin
00467008 updatelivran
004673B0 func_004673B0
004675F0 canmoverlod
0046791C whyuncolored
00467F04 split
00468A14 cupcosts
00469280 globalcolor
0046BD90 change_to_var_eq
00474FC8 func_00474FC8
00476AA0 findbbtemps
00477E20 func_00477E20
0047847C func_0047847C
00478820 func_00478820
00478ED4 func_00478ED4
00478FA0 func_00478FA0
004793C4 func_004793C4
00479778 func_00479778
00479B80 func_00479B80
00479DC4 eliminduct
0047D878 deccount
*/
int bvectin(int bitpos, struct BitVector *bv) {
    int pos_in_block = bitpos & 0x7f;

    return (bv->blocks[bitpos >> 7].words[pos_in_block >> 5] << (pos_in_block & 0x1f)) < 0;
}

/*
004123C4 varinsert
00414108 func_00414108
0041550C func_0041550C
00454514 func_00454514
00454D08 func_00454D08
00455060 func_00455060
0045FBB4 func_0045FBB4
00461AAC makelivranges
00467F04 split
00469280 globalcolor
0047E8C8 in_indmults
*/
int bvectin0(int bitpos, struct BitVector *bv) {
    int pos_in_block;

    if (bitpos >= (bv->num_blocks << 7)) {
        return 0;
    }

    pos_in_block = bitpos & 0x7f;
    return (bv->blocks[bitpos >> 7].words[pos_in_block >> 5] << (pos_in_block & 0x1f)) < 0;
}
