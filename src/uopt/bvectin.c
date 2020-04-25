__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel bvectin
    .ent bvectin
    # 0040F8D0 resetsubdelete
    # 0040FB70 setsubinsert
    # 00410098 delete_unmoved_recur
    # 00410204 codemotion
    # 004122D8 vardelete
    # 00413000 exprdelete
    # 00414108 func_00414108
    # 004175BC copypropagate
    # 0041C914 printregs
    # 00426FA4 func_00426FA4
    # 00428DD8 func_00428DD8
    # 0042AADC func_0042AADC
    # 00430680 func_00430680
    # 00430BF4 func_00430BF4
    # 00430D74 func_00430D74
    # 00430FF4 func_00430FF4
    # 004310EC func_004310EC
    # 00431268 func_00431268
    # 00431508 func_00431508
    # 004324F4 findinduct
    # 00447F90 check_loop_coincidence
    # 0044821C expr_has_direct_usage
    # 00448530 has_direct_induct_usage
    # 00448928 check_loop_induct_usages
    # 00448C94 find_ix_loadstores
    # 00454514 func_00454514
    # 00454AB8 func_00454AB8
    # 00455060 func_00455060
    # 0045CB3C expinalter
    # 0045D208 patchvectors
    # 0045DA18 formlivbb
    # 0045E1F8 caninsertearly
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464778 prehascup
    # 00464848 func_00464848
    # 00464910 allsucmember
    # 00464A4C preallmember
    # 00464BFC localcolor
    # 00465E50 spilltemps
    # 0046684C findsharedintf
    # 00466904 marksharedintf
    # 004669A8 addadjacents
    # 00466CFC somepostmember
    # 00466EE4 allsucppin
    # 00467008 updatelivran
    # 004673B0 func_004673B0
    # 004675F0 canmoverlod
    # 0046791C whyuncolored
    # 00467F04 split
    # 00468A14 cupcosts
    # 00469280 globalcolor
    # 0046BD90 change_to_var_eq
    # 00474FC8 func_00474FC8
    # 00476AA0 findbbtemps
    # 00477E20 func_00477E20
    # 0047847C func_0047847C
    # 00478820 func_00478820
    # 00478ED4 func_00478ED4
    # 00478FA0 func_00478FA0
    # 004793C4 func_004793C4
    # 00479778 func_00479778
    # 00479B80 func_00479B80
    # 00479DC4 eliminduct
    # 0047D878 deccount
/* 0040B750 8CB80004 */  lw    $t8, 4($a1)
/* 0040B754 3082007F */  andi  $v0, $a0, 0x7f
/* 0040B758 0004C9C3 */  sra   $t9, $a0, 7
/* 0040B75C 00194100 */  sll   $t0, $t9, 4
/* 0040B760 00025143 */  sra   $t2, $v0, 5
/* 0040B764 000A5880 */  sll   $t3, $t2, 2
/* 0040B768 03084821 */  addu  $t1, $t8, $t0
/* 0040B76C 012B6021 */  addu  $t4, $t1, $t3
/* 0040B770 8D8D0000 */  lw    $t5, ($t4)
/* 0040B774 004D7804 */  sllv  $t7, $t5, $v0
/* 0040B778 03E00008 */  jr    $ra
/* 0040B77C 29E20000 */   slti  $v0, $t7, 0
    .type bvectin, @function
    .size bvectin, .-bvectin
    .end bvectin

glabel bvectin0
    .ent bvectin0
    # 004123C4 varinsert
    # 00414108 func_00414108
    # 0041550C func_0041550C
    # 00454514 func_00454514
    # 00454D08 func_00454D08
    # 00455060 func_00455060
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 00467F04 split
    # 00469280 globalcolor
    # 0047E8C8 in_indmults
/* 0040B780 8CAE0000 */  lw    $t6, ($a1)
/* 0040B784 000E79C0 */  sll   $t7, $t6, 7
/* 0040B788 008F082A */  slt   $at, $a0, $t7
/* 0040B78C 14200003 */  bnez  $at, .L0040B79C
/* 0040B790 00000000 */   nop   
/* 0040B794 1000000C */  b     .L0040B7C8
/* 0040B798 00001025 */   move  $v0, $zero
.L0040B79C:
/* 0040B79C 8CA80004 */  lw    $t0, 4($a1)
/* 0040B7A0 3098007F */  andi  $t8, $a0, 0x7f
/* 0040B7A4 000449C3 */  sra   $t1, $a0, 7
/* 0040B7A8 00095100 */  sll   $t2, $t1, 4
/* 0040B7AC 00186143 */  sra   $t4, $t8, 5
/* 0040B7B0 000C6880 */  sll   $t5, $t4, 2
/* 0040B7B4 010A5821 */  addu  $t3, $t0, $t2
/* 0040B7B8 016D7021 */  addu  $t6, $t3, $t5
/* 0040B7BC 8DCF0000 */  lw    $t7, ($t6)
/* 0040B7C0 030FC804 */  sllv  $t9, $t7, $t8
/* 0040B7C4 2B220000 */  slti  $v0, $t9, 0
.L0040B7C8:
/* 0040B7C8 03E00008 */  jr    $ra
/* 0040B7CC 00000000 */   nop   
    .type bvectin0, @function
    .size bvectin0, .-bvectin0
    .end bvectin0
)"");
