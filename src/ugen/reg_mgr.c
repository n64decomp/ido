__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000B770:
    # 00439910 find_non_special_reg
    .ascii "Needed register: all permantently allocated: impossible                         "

RO_1000B7C0:
    # 00439910 find_non_special_reg
    .ascii "reg_mgr.p                                                                       "

RO_1000B810:
    # 0043A020 dump_reg
    .ascii ", usage "

RO_1000B818:
    # 0043A020 dump_reg
    .ascii ":  kind "

RO_1000B820:
    # 0043A020 dump_reg
    .ascii "register "

RO_1000B829:
    # 0043A1B8 print_regs
    .ascii "reg_list: "

RO_1000B833:
    # 0043A5E8 spill
    .ascii "register content is empty                                                       "

RO_1000B883:
    # 0043A5E8 spill
    .ascii "reg_mgr.p                                                                       "

RO_1000B8D3:
    # 0043A888 spill_reg
    .ascii " illegal register type                                                          "

RO_1000B923:
    # 0043A888 spill_reg
    .ascii "reg_mgr.p                                                                       "

RO_1000B973:
    # 0043A888 spill_reg
    .ascii " register kind  = "

RO_1000B985:
    # 0043A888 spill_reg
    .asciz "reg = "

    .balign 4
jtbl_1000B98C:
    # 0043A888 spill_reg
    .gpword .L0043A914
    .gpword .L0043A938
    .gpword .L0043A95C
    .gpword .L0043A980
    .gpword .L0043A980
    .gpword .L0043A914
    .gpword .L0043A914

RO_1000B9A8:
    # 0043AB48 get_one_reg
    .ascii "register not on used/free list                                                  "

RO_1000B9F8:
    # 0043AB48 get_one_reg
    .ascii "reg_mgr.p                                                                       "

RO_1000BA48:
    # 0043B0F8 get_fp_reg
    .ascii "fp register not on used/free list                                               "

RO_1000BA98:
    # 0043B0F8 get_fp_reg
    .ascii "reg_mgr.p                                                                       "

RO_1000BAE8:
    # 0043B478 spill_two_regs
    .ascii "register not on used/free list                                                  "

RO_1000BB38:
    # 0043B478 spill_two_regs
    .ascii "reg_mgr.p                                                                       "

RO_1000BB88:
    # 0043BC80 content_of
    .ascii "register content is empty                                                       "

RO_1000BBD8:
    # 0043BC80 content_of
    .ascii "reg_mgr.p                                                                       "

RO_1000BC28:
    # 0043BE04 dec_usage
    .ascii "usage count is 0, cannot decrement                                              "

RO_1000BC78:
    # 0043BE04 dec_usage
    .ascii "reg_mgr.p                                                                       "

RO_1000BCC8:
    # 0043BE04 dec_usage
    .ascii "usage count is 0, cannot decrement                                              "

RO_1000BD18:
    # 0043BE04 dec_usage
    .ascii "reg_mgr.p                                                                       "

RO_1000BD68:
    # 0043C098 free_reg
    .ascii "register to be removed not on free list                                         "

RO_1000BDB8:
    # 0043C098 free_reg
    .ascii "reg_mgr.p                                                                       "

RO_1000BE08:
    # 0043C098 free_reg
    .ascii "register to be removed not on used list                                         "

RO_1000BE58:
    # 0043C098 free_reg
    .ascii "reg_mgr.p                                                                       "

RO_1000BEA8:
    # 0043C410 free_fp_reg
    .ascii "fp register to be removed not on free list                                      "

RO_1000BEF8:
    # 0043C410 free_fp_reg
    .ascii "reg_mgr.p                                                                       "

RO_1000BF48:
    # 0043C674 add_to_free_list
    .ascii "register not free                                                               "

RO_1000BF98:
    # 0043C674 add_to_free_list
    .ascii "reg_mgr.p                                                                       "

RO_1000BFE8:
    # 0043C804 add_to_fp_free_list
    .ascii "fp register not free                                                            "

RO_1000C038:
    # 0043C804 add_to_fp_free_list
    .ascii "reg_mgr.p                                                                       "

RO_1000C088:
    # 0043C994 remove_from_free_list
    .ascii "register not free                                                               "

RO_1000C0D8:
    # 0043C994 remove_from_free_list
    .ascii "reg_mgr.p                                                                       "

RO_1000C128:
    # 0043C994 remove_from_free_list
    .ascii "register not free                                                               "

RO_1000C178:
    # 0043C994 remove_from_free_list
    .ascii "reg_mgr.p                                                                       "

RO_1000C1C8:
    # 0043CCA0 remove_from_fp_free_list
    .ascii "fp register not free                                                            "

RO_1000C218:
    # 0043CCA0 remove_from_fp_free_list
    .ascii "reg_mgr.p                                                                       "

RO_1000C268:
    # 0043CE54 check_no_used
    .ascii "fp registers left in use at bb boundary                                         "

RO_1000C2B8:
    # 0043CE54 check_no_used
    .ascii "reg_mgr.p                                                                       "

RO_1000C308:
    # 0043CE54 check_no_used
    .ascii "gp registers left in use at bb boundary                                         "

RO_1000C358:
    # 0043CE54 check_no_used
    .ascii "reg_mgr.p                                                                       "

RO_1000C3A8:
    # 0043D1A4 get_free_fp_reg_special
    .ascii "could not remove register from fp_regs_used list!                               "

RO_1000C3F8:
    # 0043D1A4 get_free_fp_reg_special
    .ascii "reg_mgr.p                                                                       "

RO_1000C448:
    # 0043D3F8 get_free_reg_special
    .ascii "could not remove register from regs_used list!                                  "

RO_1000C498:
    # 0043D3F8 get_free_reg_special
    .asciz "reg_mgr.p                                                                       "

.data
# 10016300
glabel kind_tab
    # 00439A94 get_reg_kind
    .byte 0x01,0x00,0x01,0x01,0x01,0x06,0x01,0x06,0x01,0x00,0x01,0x00,0x03,0x02,0x01,0x06,0x04,0x00
    .type kind_tab, @object
    .size kind_tab, .-kind_tab # 18
    .space 2

# 10016314
glabel size_tab
    # 0043A888 spill_reg
    # 0043B478 spill_two_regs
    # 0043B854 get_one_free_reg
    # 0043BAA8 get_free_fp_reg
    # 0043D1A4 get_free_fp_reg_special
    # 0043D3F8 get_free_reg_special
    .byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x04
    .type size_tab, @object
    .size size_tab, .-size_tab # 32

# 10016334
glabel size_tab2
    # 0043A888 spill_reg
    # 0043B854 get_one_free_reg
    # 0043BAA8 get_free_fp_reg
    .byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08
    .type size_tab2, @object
    .size size_tab2, .-size_tab2 # 32

# 10016354
glabel mips_cg_regs
    # 00439AE0 init_regs
    .byte 0x0e,0x0f,0x18,0x19
    .type mips_cg_regs, @object
    .size mips_cg_regs, .-mips_cg_regs # 4

# 10016358
glabel name_tab
    .ascii "$0   $1   $2   $3   $4   $5   $6   $7   $8   $9   $10  $11  $12  $13  $14  $15  $16  $17  $18  $19  $20  $21  $22  $23  $24  $25  $26  $27  $gp  $sp  $30  $31  $f0  $f1  $f2  $f3  $f4  $f5  $f6  $f7  $f8  $f9  $f10 $f11 $f12 $f13 $f14 $f15 $f16 $f17 $f18 $f19 $f20 $f21 $f22 $f23 $f24 $f25 $f26 $f27 $f28 $f29 $f30 $f31 $fcc0$fcc1$fcc2$fcc3$fcc4$fcc5$fcc6$fcc7none \0\0\0"
    .type name_tab, @object
    .size name_tab, .-name_tab # 368

D_100164C8:
    # 0043A020 dump_reg
    # 0043A1B8 print_regs
    # 0043A888 spill_reg
    .ascii "xr0\0xr1\0xr2\0xr3\0xr4\0xr5\0xr6\0xr7\0xr8\0xr9\0xr10\0   xr11\0   xr12\0   xr13\0   xr14\0   xr15\0   xr16\0   xr17\0   xr18\0   xr19\0   xr20\0   xr21\0   xr22\0   xr23\0   xr24\0   xr25\0   xr26\0   xr27\0   xr28\0   xr29\0   xr30\0   xr31\0   xfr0\0   xfr1\0   xfr2\0   xfr3\0   xfr4\0   xfr5\0   xfr6\0   xfr7\0   xfr8\0   xfr9\0   xfr10\0  xfr11\0  xfr12\0  xfr13\0  xfr14\0  xfr15\0  xfr16\0  xfr17\0  xfr18\0  xfr19\0  xfr20\0  xfr21\0  xfr22\0  xfr23\0  xfr24\0  xfr25\0  xfr26\0  xfr27\0  xfr28\0  xfr29\0  xfr30\0  xfr31\0  xfcc0\0  xfcc1\0  xfcc2\0  xfcc3\0  xfcc4\0  xfcc5\0  xfcc6\0  xfcc7\0  xnoreg\0\0"

D_100166E8:
    # 0043A020 dump_reg
    # 0043A888 spill_reg
    .ascii "no_reg\0 i_reg\0  f_reg\0  d_reg\0  x_reg\0  q_reg\0  di_reg\0 di_s_reg\0\0  \0\0\0\0"



.bss
    .balign 4
# 100213D4
glabel gp_regs_free
    # 00439AE0 init_regs
    # 0043A5E8 spill
    # 0043A888 spill_reg
    # 0043AB48 get_one_reg
    # 0043AE78 get_reg1
    # 0043B3D4 free_reg_is_available
    # 0043B478 spill_two_regs
    # 0043B6AC get_two_free_regs
    # 0043B854 get_one_free_reg
    # 0043C098 free_reg
    # 0043C5D4 force_free_reg
    # 0043C674 add_to_free_list
    # 0043C994 remove_from_free_list
    # 0043D3F8 get_free_reg_special
    .space 4
    .size gp_regs_free, 4
    .type gp_regs_free, @object

    .balign 4
# 100213D8
glabel gp_regs_used
    # 00439AE0 init_regs
    # 0043A5E8 spill
    # 0043A888 spill_reg
    # 0043AB48 get_one_reg
    # 0043AE78 get_reg1
    # 0043B478 spill_two_regs
    # 0043B6AC get_two_free_regs
    # 0043B854 get_one_free_reg
    # 0043C098 free_reg
    # 0043C5D4 force_free_reg
    # 0043CE54 check_no_used
    # 0043D148 move_to_end_gp_list
    # 0043D3F8 get_free_reg_special
    .space 4
    .size gp_regs_used, 4
    .type gp_regs_used, @object

    .balign 4
# 100213DC
glabel fp_regs_free
    # 00439AE0 init_regs
    # 0043A888 spill_reg
    # 0043B0F8 get_fp_reg
    # 0043B30C get_fp_reg1
    # 0043BAA8 get_free_fp_reg
    # 0043C410 free_fp_reg
    # 0043C804 add_to_fp_free_list
    # 0043CCA0 remove_from_fp_free_list
    # 0043D1A4 get_free_fp_reg_special
    .space 4
    .size fp_regs_free, 4
    .type fp_regs_free, @object

    .balign 4
# 100213E0
glabel fp_regs_used
    # 00439AE0 init_regs
    # 0043A888 spill_reg
    # 0043B0F8 get_fp_reg
    # 0043B30C get_fp_reg1
    # 0043BAA8 get_free_fp_reg
    # 0043C410 free_fp_reg
    # 0043CE54 check_no_used
    # 0043D0EC move_to_end_fp_list
    # 0043D1A4 get_free_fp_reg_special
    .space 4
    .size fp_regs_used, 4
    .type fp_regs_used, @object

    .balign 16
# 10021920
glabel restricted_regs
    # 00439850 clear_restricted_regs
    # 004398B8 add_restricted_reg
    # 0043D3F8 get_free_reg_special
    .space 292
    .size restricted_regs, 292
    .type restricted_regs, @object

    .balign 16
# 10021A48
glabel restricted_fp_regs
    # 00439850 clear_restricted_regs
    # 004398E4 add_restricted_fp_reg
    # 0043D1A4 get_free_fp_reg_special
    .space 292
    .size restricted_fp_regs, 292
    .type restricted_fp_regs, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel clear_restricted_regs
    .ent clear_restricted_regs
/* 00439850 3C1C0FBE */  .cpload $t9
/* 00439854 279C6200 */  
/* 00439858 0399E021 */  
/* 0043985C 8F818BC4 */  lw     $at, %got(restricted_regs)($gp)
/* 00439860 8F838BC4 */  lw     $v1, %got(restricted_regs)($gp)
/* 00439864 8F848BC8 */  lw     $a0, %got(restricted_fp_regs)($gp)
/* 00439868 AC200000 */  sw    $zero, ($at)
/* 0043986C 8F818BC8 */  lw     $at, %got(restricted_fp_regs)($gp)
/* 00439870 8F828BC8 */  lw     $v0, %got(restricted_fp_regs)($gp)
/* 00439874 24630004 */  addiu $v1, $v1, 4
/* 00439878 24840004 */  addiu $a0, $a0, 4
/* 0043987C AC200000 */  sw    $zero, ($at)
/* 00439880 24420124 */  addiu $v0, $v0, 0x124
.L00439884:
/* 00439884 24840010 */  addiu $a0, $a0, 0x10
/* 00439888 AC600000 */  sw    $zero, ($v1)
/* 0043988C AC80FFF0 */  sw    $zero, -0x10($a0)
/* 00439890 AC600004 */  sw    $zero, 4($v1)
/* 00439894 AC80FFF4 */  sw    $zero, -0xc($a0)
/* 00439898 AC600008 */  sw    $zero, 8($v1)
/* 0043989C AC80FFF8 */  sw    $zero, -8($a0)
/* 004398A0 AC60000C */  sw    $zero, 0xc($v1)
/* 004398A4 AC80FFFC */  sw    $zero, -4($a0)
/* 004398A8 1482FFF6 */  bne   $a0, $v0, .L00439884
/* 004398AC 24630010 */   addiu $v1, $v1, 0x10
/* 004398B0 03E00008 */  jr    $ra
/* 004398B4 00000000 */   nop   
    .type clear_restricted_regs, @function
    .size clear_restricted_regs, .-clear_restricted_regs
    .end clear_restricted_regs

glabel add_restricted_reg
    .ent add_restricted_reg
/* 004398B8 3C1C0FBE */  .cpload $t9
/* 004398BC 279C6198 */  
/* 004398C0 0399E021 */  
/* 004398C4 8F8F8BC4 */  lw     $t7, %got(restricted_regs)($gp)
/* 004398C8 00047080 */  sll   $t6, $a0, 2
/* 004398CC AFA40000 */  sw    $a0, ($sp)
/* 004398D0 01CF1021 */  addu  $v0, $t6, $t7
/* 004398D4 8C580000 */  lw    $t8, ($v0)
/* 004398D8 27190001 */  addiu $t9, $t8, 1
/* 004398DC 03E00008 */  jr    $ra
/* 004398E0 AC590000 */   sw    $t9, ($v0)
    .type add_restricted_reg, @function
    .size add_restricted_reg, .-add_restricted_reg
    .end add_restricted_reg

glabel add_restricted_fp_reg
    .ent add_restricted_fp_reg
/* 004398E4 3C1C0FBE */  .cpload $t9
/* 004398E8 279C616C */  
/* 004398EC 0399E021 */  
/* 004398F0 8F8F8BC8 */  lw     $t7, %got(restricted_fp_regs)($gp)
/* 004398F4 00047080 */  sll   $t6, $a0, 2
/* 004398F8 AFA40000 */  sw    $a0, ($sp)
/* 004398FC 01CF1021 */  addu  $v0, $t6, $t7
/* 00439900 8C580000 */  lw    $t8, ($v0)
/* 00439904 27190001 */  addiu $t9, $t8, 1
/* 00439908 03E00008 */  jr    $ra
/* 0043990C AC590000 */   sw    $t9, ($v0)
    .type add_restricted_fp_reg, @function
    .size add_restricted_fp_reg, .-add_restricted_fp_reg
    .end add_restricted_fp_reg

glabel find_non_special_reg
    .ent find_non_special_reg
    # 0043D1A4 get_free_fp_reg_special
    # 0043D3F8 get_free_reg_special
/* 00439910 3C1C0FBE */  .cpload $t9
/* 00439914 279C6140 */  
/* 00439918 0399E021 */  
/* 0043991C 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00439920 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 00439924 8FA401E4 */  lw    $a0, 0x1e4($sp)
/* 00439928 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043992C AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00439930 AFA500C4 */  sw    $a1, 0xc4($sp)
/* 00439934 AFA600C8 */  sw    $a2, 0xc8($sp)
/* 00439938 AFA700CC */  sw    $a3, 0xcc($sp)
/* 0043993C 90830000 */  lbu   $v1, ($a0)
/* 00439940 90820001 */  lbu   $v0, 1($a0)
/* 00439944 27A400C0 */  addiu $a0, $sp, 0xc0
/* 00439948 2406000C */  li    $a2, 12
/* 0043994C 1062000F */  beq   $v1, $v0, .L0043998C
/* 00439950 03A06025 */   move  $t4, $sp
/* 00439954 8F858BCC */  lw     $a1, %got(regs)($gp)
/* 00439958 00037080 */  sll   $t6, $v1, 2
.L0043995C:
/* 0043995C 008E7821 */  addu  $t7, $a0, $t6
/* 00439960 8DF80000 */  lw    $t8, ($t7)
/* 00439964 17000003 */  bnez  $t8, .L00439974
/* 00439968 00000000 */   nop   
/* 0043996C 10000045 */  b     .L00439A84
/* 00439970 00601025 */   move  $v0, $v1
.L00439974:
/* 00439974 00660019 */  multu $v1, $a2
/* 00439978 0000C812 */  mflo  $t9
/* 0043997C 00B94021 */  addu  $t0, $a1, $t9
/* 00439980 91030006 */  lbu   $v1, 6($t0)
/* 00439984 5462FFF5 */  bnel  $v1, $v0, .L0043995C
/* 00439988 00037080 */   sll   $t6, $v1, 2
.L0043998C:
/* 0043998C 8F898038 */  lw    $t1, %got(RO_1000B7C0)($gp)
/* 00439990 24040004 */  li    $a0, 4
/* 00439994 24050118 */  li    $a1, 280
/* 00439998 2529B7C0 */  addiu $t1, %lo(RO_1000B7C0) # addiu $t1, $t1, -0x4840
/* 0043999C 252D0048 */  addiu $t5, $t1, 0x48
.L004399A0:
/* 004399A0 892B0000 */  lwl   $t3, ($t1)
/* 004399A4 992B0003 */  lwr   $t3, 3($t1)
/* 004399A8 2529000C */  addiu $t1, $t1, 0xc
/* 004399AC 258C000C */  addiu $t4, $t4, 0xc
/* 004399B0 A98BFFFC */  swl   $t3, -4($t4)
/* 004399B4 B98BFFFF */  swr   $t3, -1($t4)
/* 004399B8 892AFFF8 */  lwl   $t2, -8($t1)
/* 004399BC 992AFFFB */  lwr   $t2, -5($t1)
/* 004399C0 A98A0000 */  swl   $t2, ($t4)
/* 004399C4 B98A0003 */  swr   $t2, 3($t4)
/* 004399C8 892BFFFC */  lwl   $t3, -4($t1)
/* 004399CC 992BFFFF */  lwr   $t3, -1($t1)
/* 004399D0 A98B0004 */  swl   $t3, 4($t4)
/* 004399D4 152DFFF2 */  bne   $t1, $t5, .L004399A0
/* 004399D8 B98B0007 */   swr   $t3, 7($t4)
/* 004399DC 892B0000 */  lwl   $t3, ($t1)
/* 004399E0 992B0003 */  lwr   $t3, 3($t1)
/* 004399E4 8F8E8038 */  lw    $t6, %got(RO_1000B770)($gp)
/* 004399E8 03A0C825 */  move  $t9, $sp
/* 004399EC A98B0008 */  swl   $t3, 8($t4)
/* 004399F0 B98B000B */  swr   $t3, 0xb($t4)
/* 004399F4 892A0004 */  lwl   $t2, 4($t1)
/* 004399F8 992A0007 */  lwr   $t2, 7($t1)
/* 004399FC 25CEB770 */  addiu $t6, %lo(RO_1000B770) # addiu $t6, $t6, -0x4890
/* 00439A00 25C80048 */  addiu $t0, $t6, 0x48
/* 00439A04 A98A000C */  swl   $t2, 0xc($t4)
/* 00439A08 B98A000F */  swr   $t2, 0xf($t4)
.L00439A0C:
/* 00439A0C 89D80000 */  lwl   $t8, ($t6)
/* 00439A10 99D80003 */  lwr   $t8, 3($t6)
/* 00439A14 25CE000C */  addiu $t6, $t6, 0xc
/* 00439A18 2739000C */  addiu $t9, $t9, 0xc
/* 00439A1C AB38004C */  swl   $t8, 0x4c($t9)
/* 00439A20 BB38004F */  swr   $t8, 0x4f($t9)
/* 00439A24 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00439A28 99CFFFFB */  lwr   $t7, -5($t6)
/* 00439A2C AB2F0050 */  swl   $t7, 0x50($t9)
/* 00439A30 BB2F0053 */  swr   $t7, 0x53($t9)
/* 00439A34 89D8FFFC */  lwl   $t8, -4($t6)
/* 00439A38 99D8FFFF */  lwr   $t8, -1($t6)
/* 00439A3C AB380054 */  swl   $t8, 0x54($t9)
/* 00439A40 15C8FFF2 */  bne   $t6, $t0, .L00439A0C
/* 00439A44 BB380057 */   swr   $t8, 0x57($t9)
/* 00439A48 89D80000 */  lwl   $t8, ($t6)
/* 00439A4C 99D80003 */  lwr   $t8, 3($t6)
/* 00439A50 AB380058 */  swl   $t8, 0x58($t9)
/* 00439A54 BB38005B */  swr   $t8, 0x5b($t9)
/* 00439A58 89CF0004 */  lwl   $t7, 4($t6)
/* 00439A5C 99CF0007 */  lwr   $t7, 7($t6)
/* 00439A60 AB2F005C */  swl   $t7, 0x5c($t9)
/* 00439A64 BB2F005F */  swr   $t7, 0x5f($t9)
/* 00439A68 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00439A6C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00439A70 8FA60008 */  lw    $a2, 8($sp)
/* 00439A74 0320F809 */  jalr  $t9
/* 00439A78 00000000 */   nop   
/* 00439A7C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00439A80 93A200BF */  lbu   $v0, 0xbf($sp)
.L00439A84:
/* 00439A84 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00439A88 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 00439A8C 03E00008 */  jr    $ra
/* 00439A90 00000000 */   nop   
    .type find_non_special_reg, @function
    .size find_non_special_reg, .-find_non_special_reg
    .end find_non_special_reg

glabel get_reg_kind
    .ent get_reg_kind
/* 00439A94 3C1C0FBE */  .cpload $t9
/* 00439A98 279C5FBC */  
/* 00439A9C 0399E021 */  
/* 00439AA0 8F8E88F0 */  lw     $t6, %got(kind_tab)($gp)
/* 00439AA4 AFA40000 */  sw    $a0, ($sp)
/* 00439AA8 008E7821 */  addu  $t7, $a0, $t6
/* 00439AAC 03E00008 */  jr    $ra
/* 00439AB0 91E20000 */   lbu   $v0, ($t7)
    .type get_reg_kind, @function
    .size get_reg_kind, .-get_reg_kind
    .end get_reg_kind

glabel kind_of_register
    .ent kind_of_register
    # 00441308 spill_to_temp
/* 00439AB4 3C1C0FBE */  .cpload $t9
/* 00439AB8 279C5F9C */  
/* 00439ABC 0399E021 */  
/* 00439AC0 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 00439AC4 00047080 */  sll   $t6, $a0, 2
/* 00439AC8 01C47023 */  subu  $t6, $t6, $a0
/* 00439ACC 000E7080 */  sll   $t6, $t6, 2
/* 00439AD0 AFA40000 */  sw    $a0, ($sp)
/* 00439AD4 01CFC021 */  addu  $t8, $t6, $t7
/* 00439AD8 03E00008 */  jr    $ra
/* 00439ADC 93020008 */   lbu   $v0, 8($t8)
    .type kind_of_register, @function
    .size kind_of_register, .-kind_of_register
    .end kind_of_register

glabel init_regs
    .ent init_regs
    # 0042BDAC eval
/* 00439AE0 3C1C0FBE */  .cpload $t9
/* 00439AE4 279C5F70 */  
/* 00439AE8 0399E021 */  
/* 00439AEC 8F818BCC */  lw     $at, %got(regs)($gp)
/* 00439AF0 240E0048 */  li    $t6, 72
/* 00439AF4 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 00439AF8 AC200000 */  sw    $zero, ($at)
/* 00439AFC 8F818BCC */  lw     $at, %got(regs)($gp)
/* 00439B00 8F828BCC */  lw     $v0, %got(regs)($gp)
/* 00439B04 8F838BCC */  lw     $v1, %got(regs)($gp)
/* 00439B08 A4200004 */  sh    $zero, 4($at)
/* 00439B0C 8F818BCC */  lw     $at, %got(regs)($gp)
/* 00439B10 AFB30024 */  sw    $s3, 0x24($sp)
/* 00439B14 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00439B18 A02E0006 */  sb    $t6, 6($at)
/* 00439B1C 8F818BCC */  lw     $at, %got(regs)($gp)
/* 00439B20 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00439B24 AFB20020 */  sw    $s2, 0x20($sp)
/* 00439B28 A0200007 */  sb    $zero, 7($at)
/* 00439B2C 8F818BCC */  lw     $at, %got(regs)($gp)
/* 00439B30 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00439B34 AFB00018 */  sw    $s0, 0x18($sp)
/* 00439B38 24130048 */  li    $s3, 72
/* 00439B3C 2442000C */  addiu $v0, $v0, 0xc
/* 00439B40 2463036C */  addiu $v1, $v1, 0x36c
/* 00439B44 A0200008 */  sb    $zero, 8($at)
.L00439B48:
/* 00439B48 24420030 */  addiu $v0, $v0, 0x30
/* 00439B4C AC40FFD0 */  sw    $zero, -0x30($v0)
/* 00439B50 A440FFD4 */  sh    $zero, -0x2c($v0)
/* 00439B54 A053FFD6 */  sb    $s3, -0x2a($v0)
/* 00439B58 A040FFD7 */  sb    $zero, -0x29($v0)
/* 00439B5C A040FFD8 */  sb    $zero, -0x28($v0)
/* 00439B60 AC40FFDC */  sw    $zero, -0x24($v0)
/* 00439B64 A440FFE0 */  sh    $zero, -0x20($v0)
/* 00439B68 A053FFE2 */  sb    $s3, -0x1e($v0)
/* 00439B6C A040FFE3 */  sb    $zero, -0x1d($v0)
/* 00439B70 A040FFE4 */  sb    $zero, -0x1c($v0)
/* 00439B74 AC40FFE8 */  sw    $zero, -0x18($v0)
/* 00439B78 A440FFEC */  sh    $zero, -0x14($v0)
/* 00439B7C A053FFEE */  sb    $s3, -0x12($v0)
/* 00439B80 A040FFEF */  sb    $zero, -0x11($v0)
/* 00439B84 A040FFF0 */  sb    $zero, -0x10($v0)
/* 00439B88 AC40FFF4 */  sw    $zero, -0xc($v0)
/* 00439B8C A440FFF8 */  sh    $zero, -8($v0)
/* 00439B90 A053FFFA */  sb    $s3, -6($v0)
/* 00439B94 A040FFFB */  sb    $zero, -5($v0)
/* 00439B98 1443FFEB */  bne   $v0, $v1, .L00439B48
/* 00439B9C A040FFFC */   sb    $zero, -4($v0)
/* 00439BA0 8F828AF4 */  lw     $v0, %got(gp_regs_free)($gp)
/* 00439BA4 8F928A14 */  lw     $s2, %got(n_cg_regs)($gp)
/* 00439BA8 A0530000 */  sb    $s3, ($v0)
/* 00439BAC A0530001 */  sb    $s3, 1($v0)
/* 00439BB0 8E520000 */  lw    $s2, ($s2)
/* 00439BB4 1240000F */  beqz  $s2, .L00439BF4
/* 00439BB8 00000000 */   nop   
/* 00439BBC 8F9088FC */  lw     $s0, %got(mips_cg_regs)($gp)
/* 00439BC0 26520001 */  addiu $s2, $s2, 1
/* 00439BC4 260FFFFF */  addiu $t7, $s0, -1
/* 00439BC8 024F1021 */  addu  $v0, $s2, $t7
.L00439BCC:
/* 00439BCC 8F99851C */  lw    $t9, %call16(add_to_free_list)($gp)
/* 00439BD0 92040000 */  lbu   $a0, ($s0)
/* 00439BD4 AFA20034 */  sw    $v0, 0x34($sp)
/* 00439BD8 0320F809 */  jalr  $t9
/* 00439BDC 00000000 */   nop   
/* 00439BE0 8FA20034 */  lw    $v0, 0x34($sp)
/* 00439BE4 26100001 */  addiu $s0, $s0, 1
/* 00439BE8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00439BEC 1602FFF7 */  bne   $s0, $v0, .L00439BCC
/* 00439BF0 00000000 */   nop   
.L00439BF4:
/* 00439BF4 8F918A0C */  lw     $s1, %got(n_unsaved_regs)($gp)
/* 00439BF8 24100008 */  li    $s0, 8
/* 00439BFC 8E310000 */  lw    $s1, ($s1)
/* 00439C00 26310007 */  addiu $s1, $s1, 7
/* 00439C04 2E210008 */  sltiu $at, $s1, 8
/* 00439C08 14200008 */  bnez  $at, .L00439C2C
/* 00439C0C 26310001 */   addiu $s1, $s1, 1
.L00439C10:
/* 00439C10 8F99851C */  lw    $t9, %call16(add_to_free_list)($gp)
/* 00439C14 02002025 */  move  $a0, $s0
/* 00439C18 0320F809 */  jalr  $t9
/* 00439C1C 00000000 */   nop   
/* 00439C20 26100001 */  addiu $s0, $s0, 1
/* 00439C24 1611FFFA */  bne   $s0, $s1, .L00439C10
/* 00439C28 8FBC0028 */   lw    $gp, 0x28($sp)
.L00439C2C:
/* 00439C2C 8F828AFC */  lw     $v0, %got(fp_regs_free)($gp)
/* 00439C30 8F928A18 */  lw     $s2, %got(n_fp_cg_regs)($gp)
/* 00439C34 24100024 */  li    $s0, 36
/* 00439C38 A0530000 */  sb    $s3, ($v0)
/* 00439C3C A0530001 */  sb    $s3, 1($v0)
/* 00439C40 8E520000 */  lw    $s2, ($s2)
/* 00439C44 24110001 */  li    $s1, 1
/* 00439C48 1240000B */  beqz  $s2, .L00439C78
/* 00439C4C 26520001 */   addiu $s2, $s2, 1
.L00439C50:
/* 00439C50 8F998520 */  lw    $t9, %call16(add_to_fp_free_list)($gp)
/* 00439C54 02002025 */  move  $a0, $s0
/* 00439C58 00002825 */  move  $a1, $zero
/* 00439C5C 0320F809 */  jalr  $t9
/* 00439C60 00000000 */   nop   
/* 00439C64 26100002 */  addiu $s0, $s0, 2
/* 00439C68 26310001 */  addiu $s1, $s1, 1
/* 00439C6C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00439C70 1632FFF7 */  bne   $s1, $s2, .L00439C50
/* 00439C74 321000FF */   andi  $s0, $s0, 0xff
.L00439C78:
/* 00439C78 8F928A10 */  lw     $s2, %got(n_unsaved_fp_regs)($gp)
/* 00439C7C 24100030 */  li    $s0, 48
/* 00439C80 24110001 */  li    $s1, 1
/* 00439C84 8E520000 */  lw    $s2, ($s2)
/* 00439C88 1240000B */  beqz  $s2, .L00439CB8
/* 00439C8C 26520001 */   addiu $s2, $s2, 1
.L00439C90:
/* 00439C90 8F998520 */  lw    $t9, %call16(add_to_fp_free_list)($gp)
/* 00439C94 02002025 */  move  $a0, $s0
/* 00439C98 00002825 */  move  $a1, $zero
/* 00439C9C 0320F809 */  jalr  $t9
/* 00439CA0 00000000 */   nop   
/* 00439CA4 26100002 */  addiu $s0, $s0, 2
/* 00439CA8 26310001 */  addiu $s1, $s1, 1
/* 00439CAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00439CB0 1632FFF7 */  bne   $s1, $s2, .L00439C90
/* 00439CB4 321000FF */   andi  $s0, $s0, 0xff
.L00439CB8:
/* 00439CB8 8F988A24 */  lw     $t8, %got(fp32regs)($gp)
/* 00439CBC 24100021 */  li    $s0, 33
/* 00439CC0 24110001 */  li    $s1, 1
/* 00439CC4 93180000 */  lbu   $t8, ($t8)
/* 00439CC8 24120011 */  li    $s2, 17
/* 00439CCC 1300000B */  beqz  $t8, .L00439CFC
/* 00439CD0 00000000 */   nop   
.L00439CD4:
/* 00439CD4 8F998520 */  lw    $t9, %call16(add_to_fp_free_list)($gp)
/* 00439CD8 02002025 */  move  $a0, $s0
/* 00439CDC 00002825 */  move  $a1, $zero
/* 00439CE0 0320F809 */  jalr  $t9
/* 00439CE4 00000000 */   nop   
/* 00439CE8 26100002 */  addiu $s0, $s0, 2
/* 00439CEC 26310001 */  addiu $s1, $s1, 1
/* 00439CF0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00439CF4 1632FFF7 */  bne   $s1, $s2, .L00439CD4
/* 00439CF8 321000FF */   andi  $s0, $s0, 0xff
.L00439CFC:
/* 00439CFC 8F9189FC */  lw     $s1, %got(n_parm_regs)($gp)
/* 00439D00 8E310000 */  lw    $s1, ($s1)
/* 00439D04 26310003 */  addiu $s1, $s1, 3
/* 00439D08 2E210004 */  sltiu $at, $s1, 4
/* 00439D0C 14200025 */  bnez  $at, .L00439DA4
/* 00439D10 26310001 */   addiu $s1, $s1, 1
/* 00439D14 2624FFFC */  addiu $a0, $s1, -4
/* 00439D18 30840003 */  andi  $a0, $a0, 3
/* 00439D1C 1080000E */  beqz  $a0, .L00439D58
/* 00439D20 24100004 */   li    $s0, 4
/* 00439D24 8F888BCC */  lw     $t0, %got(regs)($gp)
/* 00439D28 0010C880 */  sll   $t9, $s0, 2
/* 00439D2C 0330C823 */  subu  $t9, $t9, $s0
/* 00439D30 0019C880 */  sll   $t9, $t9, 2
/* 00439D34 24830004 */  addiu $v1, $a0, 4
/* 00439D38 03281021 */  addu  $v0, $t9, $t0
.L00439D3C:
/* 00439D3C 26100001 */  addiu $s0, $s0, 1
/* 00439D40 A0400007 */  sb    $zero, 7($v0)
/* 00439D44 A4400004 */  sh    $zero, 4($v0)
/* 00439D48 1470FFFC */  bne   $v1, $s0, .L00439D3C
/* 00439D4C 2442000C */   addiu $v0, $v0, 0xc
/* 00439D50 12110014 */  beq   $s0, $s1, .L00439DA4
/* 00439D54 00000000 */   nop   
.L00439D58:
/* 00439D58 8F8A8BCC */  lw     $t2, %got(regs)($gp)
/* 00439D5C 00104880 */  sll   $t1, $s0, 2
/* 00439D60 00115880 */  sll   $t3, $s1, 2
/* 00439D64 01715823 */  subu  $t3, $t3, $s1
/* 00439D68 01304823 */  subu  $t1, $t1, $s0
/* 00439D6C 00094880 */  sll   $t1, $t1, 2
/* 00439D70 000B5880 */  sll   $t3, $t3, 2
/* 00439D74 016A1821 */  addu  $v1, $t3, $t2
/* 00439D78 012A1021 */  addu  $v0, $t1, $t2
.L00439D7C:
/* 00439D7C 24420030 */  addiu $v0, $v0, 0x30
/* 00439D80 A040FFD7 */  sb    $zero, -0x29($v0)
/* 00439D84 A440FFD4 */  sh    $zero, -0x2c($v0)
/* 00439D88 A040FFE3 */  sb    $zero, -0x1d($v0)
/* 00439D8C A440FFE0 */  sh    $zero, -0x20($v0)
/* 00439D90 A040FFEF */  sb    $zero, -0x11($v0)
/* 00439D94 A440FFEC */  sh    $zero, -0x14($v0)
/* 00439D98 A040FFFB */  sb    $zero, -5($v0)
/* 00439D9C 1443FFF7 */  bne   $v0, $v1, .L00439D7C
/* 00439DA0 A440FFF8 */   sh    $zero, -8($v0)
.L00439DA4:
/* 00439DA4 8F838A00 */  lw     $v1, %got(n_fp_parm_regs)($gp)
/* 00439DA8 2410002C */  li    $s0, 44
/* 00439DAC 8C630000 */  lw    $v1, ($v1)
/* 00439DB0 00031840 */  sll   $v1, $v1, 1
/* 00439DB4 2463002A */  addiu $v1, $v1, 0x2a
/* 00439DB8 2C61002C */  sltiu $at, $v1, 0x2c
/* 00439DBC 1420000A */  bnez  $at, .L00439DE8
/* 00439DC0 00000000 */   nop   
/* 00439DC4 8F828BCC */  lw     $v0, %got(regs)($gp)
/* 00439DC8 24420210 */  addiu $v0, $v0, 0x210
.L00439DCC:
/* 00439DCC 26100002 */  addiu $s0, $s0, 2
/* 00439DD0 321000FF */  andi  $s0, $s0, 0xff
/* 00439DD4 0070082B */  sltu  $at, $v1, $s0
/* 00439DD8 A0400007 */  sb    $zero, 7($v0)
/* 00439DDC A4400004 */  sh    $zero, 4($v0)
/* 00439DE0 1020FFFA */  beqz  $at, .L00439DCC
/* 00439DE4 24420018 */   addiu $v0, $v0, 0x18
.L00439DE8:
/* 00439DE8 8F918A04 */  lw     $s1, %got(n_saved_regs)($gp)
/* 00439DEC 8E310000 */  lw    $s1, ($s1)
/* 00439DF0 2631000F */  addiu $s1, $s1, 0xf
/* 00439DF4 2E210010 */  sltiu $at, $s1, 0x10
/* 00439DF8 14200025 */  bnez  $at, .L00439E90
/* 00439DFC 26310001 */   addiu $s1, $s1, 1
/* 00439E00 2624FFF0 */  addiu $a0, $s1, -0x10
/* 00439E04 30840003 */  andi  $a0, $a0, 3
/* 00439E08 1080000E */  beqz  $a0, .L00439E44
/* 00439E0C 24100010 */   li    $s0, 16
/* 00439E10 8F8D8BCC */  lw     $t5, %got(regs)($gp)
/* 00439E14 00106080 */  sll   $t4, $s0, 2
/* 00439E18 01906023 */  subu  $t4, $t4, $s0
/* 00439E1C 000C6080 */  sll   $t4, $t4, 2
/* 00439E20 24830010 */  addiu $v1, $a0, 0x10
/* 00439E24 018D1021 */  addu  $v0, $t4, $t5
.L00439E28:
/* 00439E28 26100001 */  addiu $s0, $s0, 1
/* 00439E2C A0400007 */  sb    $zero, 7($v0)
/* 00439E30 A4400004 */  sh    $zero, 4($v0)
/* 00439E34 1470FFFC */  bne   $v1, $s0, .L00439E28
/* 00439E38 2442000C */   addiu $v0, $v0, 0xc
/* 00439E3C 12110014 */  beq   $s0, $s1, .L00439E90
/* 00439E40 00000000 */   nop   
.L00439E44:
/* 00439E44 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 00439E48 00107080 */  sll   $t6, $s0, 2
/* 00439E4C 0011C080 */  sll   $t8, $s1, 2
/* 00439E50 0311C023 */  subu  $t8, $t8, $s1
/* 00439E54 01D07023 */  subu  $t6, $t6, $s0
/* 00439E58 000E7080 */  sll   $t6, $t6, 2
/* 00439E5C 0018C080 */  sll   $t8, $t8, 2
/* 00439E60 030F1821 */  addu  $v1, $t8, $t7
/* 00439E64 01CF1021 */  addu  $v0, $t6, $t7
.L00439E68:
/* 00439E68 24420030 */  addiu $v0, $v0, 0x30
/* 00439E6C A040FFD7 */  sb    $zero, -0x29($v0)
/* 00439E70 A440FFD4 */  sh    $zero, -0x2c($v0)
/* 00439E74 A040FFE3 */  sb    $zero, -0x1d($v0)
/* 00439E78 A440FFE0 */  sh    $zero, -0x20($v0)
/* 00439E7C A040FFEF */  sb    $zero, -0x11($v0)
/* 00439E80 A440FFEC */  sh    $zero, -0x14($v0)
/* 00439E84 A040FFFB */  sb    $zero, -5($v0)
/* 00439E88 1443FFF7 */  bne   $v0, $v1, .L00439E68
/* 00439E8C A440FFF8 */   sh    $zero, -8($v0)
.L00439E90:
/* 00439E90 8F838A08 */  lw     $v1, %got(n_saved_fp_regs)($gp)
/* 00439E94 24100034 */  li    $s0, 52
/* 00439E98 8C630000 */  lw    $v1, ($v1)
/* 00439E9C 00031840 */  sll   $v1, $v1, 1
/* 00439EA0 24630032 */  addiu $v1, $v1, 0x32
/* 00439EA4 2C610034 */  sltiu $at, $v1, 0x34
/* 00439EA8 1420001B */  bnez  $at, .L00439F18
/* 00439EAC 00000000 */   nop   
/* 00439EB0 8F928BCC */  lw     $s2, %got(regs)($gp)
/* 00439EB4 8F918A20 */  lw     $s1, %got(ufsm)($gp)
/* 00439EB8 92390000 */  lbu   $t9, ($s1)
.L00439EBC:
/* 00439EBC 00104080 */  sll   $t0, $s0, 2
/* 00439EC0 01104023 */  subu  $t0, $t0, $s0
/* 00439EC4 1320000C */  beqz  $t9, .L00439EF8
/* 00439EC8 00084080 */   sll   $t0, $t0, 2
/* 00439ECC 8F998520 */  lw    $t9, %call16(add_to_fp_free_list)($gp)
/* 00439ED0 02002025 */  move  $a0, $s0
/* 00439ED4 00002825 */  move  $a1, $zero
/* 00439ED8 0320F809 */  jalr  $t9
/* 00439EDC 00000000 */   nop   
/* 00439EE0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00439EE4 8F838A08 */  lw     $v1, %got(n_saved_fp_regs)($gp)
/* 00439EE8 8C630000 */  lw    $v1, ($v1)
/* 00439EEC 00031840 */  sll   $v1, $v1, 1
/* 00439EF0 10000004 */  b     .L00439F04
/* 00439EF4 24630032 */   addiu $v1, $v1, 0x32
.L00439EF8:
/* 00439EF8 02481021 */  addu  $v0, $s2, $t0
/* 00439EFC A0400007 */  sb    $zero, 7($v0)
/* 00439F00 A4400004 */  sh    $zero, 4($v0)
.L00439F04:
/* 00439F04 26100002 */  addiu $s0, $s0, 2
/* 00439F08 321000FF */  andi  $s0, $s0, 0xff
/* 00439F0C 0070082B */  sltu  $at, $v1, $s0
/* 00439F10 5020FFEA */  beql  $at, $zero, .L00439EBC
/* 00439F14 92390000 */   lbu   $t9, ($s1)
.L00439F18:
/* 00439F18 8F828AF8 */  lw     $v0, %got(gp_regs_used)($gp)
/* 00439F1C 8F838B00 */  lw     $v1, %got(fp_regs_used)($gp)
/* 00439F20 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00439F24 A0530000 */  sb    $s3, ($v0)
/* 00439F28 A0530001 */  sb    $s3, 1($v0)
/* 00439F2C A0730000 */  sb    $s3, ($v1)
/* 00439F30 A0730001 */  sb    $s3, 1($v1)
/* 00439F34 8FB30024 */  lw    $s3, 0x24($sp)
/* 00439F38 8FB00018 */  lw    $s0, 0x18($sp)
/* 00439F3C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00439F40 8FB20020 */  lw    $s2, 0x20($sp)
/* 00439F44 03E00008 */  jr    $ra
/* 00439F48 27BD0058 */   addiu $sp, $sp, 0x58
    .type init_regs, @function
    .size init_regs, .-init_regs
    .end init_regs

glabel fill_reg
    .ent fill_reg
    # 0042BDAC eval
    # 0043A5E8 spill
    # 0043AB48 get_one_reg
    # 0043AE78 get_reg1
    # 0043B0F8 get_fp_reg
    # 0043B30C get_fp_reg1
    # 0043B6AC get_two_free_regs
    # 0043B854 get_one_free_reg
    # 0043BAA8 get_free_fp_reg
    # 0043C098 free_reg
    # 0043C410 free_fp_reg
    # 0043C5D4 force_free_reg
    # 0043C674 add_to_free_list
    # 0043C804 add_to_fp_free_list
    # 0043C994 remove_from_free_list
    # 0043CCA0 remove_from_fp_free_list
    # 0043D1A4 get_free_fp_reg_special
    # 0043D3F8 get_free_reg_special
/* 00439F4C 3C1C0FBE */  .cpload $t9
/* 00439F50 279C5B04 */  
/* 00439F54 0399E021 */  
/* 00439F58 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 00439F5C 00047080 */  sll   $t6, $a0, 2
/* 00439F60 01C47023 */  subu  $t6, $t6, $a0
/* 00439F64 000E7080 */  sll   $t6, $t6, 2
/* 00439F68 01CF1021 */  addu  $v0, $t6, $t7
/* 00439F6C AFA40000 */  sw    $a0, ($sp)
/* 00439F70 AFA60008 */  sw    $a2, 8($sp)
/* 00439F74 AFA7000C */  sw    $a3, 0xc($sp)
/* 00439F78 AC450000 */  sw    $a1, ($v0)
/* 00439F7C A4460004 */  sh    $a2, 4($v0)
/* 00439F80 03E00008 */  jr    $ra
/* 00439F84 A0470008 */   sb    $a3, 8($v0)
    .type fill_reg, @function
    .size fill_reg, .-fill_reg
    .end fill_reg

glabel copy_reg
    .ent copy_reg
    # 0043A5E8 spill
/* 00439F88 3C1C0FBE */  .cpload $t9
/* 00439F8C 279C5AC8 */  
/* 00439F90 0399E021 */  
/* 00439F94 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00439F98 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00439F9C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00439FA0 AFA50024 */  sw    $a1, 0x24($sp)
/* 00439FA4 AFA60028 */  sw    $a2, 0x28($sp)
/* 00439FA8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00439FAC AFA40020 */  sw    $a0, 0x20($sp)
/* 00439FB0 93A5002B */  lbu   $a1, 0x2b($sp)
/* 00439FB4 0320F809 */  jalr  $t9
/* 00439FB8 93A60027 */   lbu   $a2, 0x27($sp)
/* 00439FBC 93AE002B */  lbu   $t6, 0x2b($sp)
/* 00439FC0 2405000C */  li    $a1, 12
/* 00439FC4 93B80027 */  lbu   $t8, 0x27($sp)
/* 00439FC8 01C50019 */  multu $t6, $a1
/* 00439FCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439FD0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00439FD4 8F848BCC */  lw     $a0, %got(regs)($gp)
/* 00439FD8 00007812 */  mflo  $t7
/* 00439FDC 008F1021 */  addu  $v0, $a0, $t7
/* 00439FE0 00000000 */  nop   
/* 00439FE4 03050019 */  multu $t8, $a1
/* 00439FE8 0000C812 */  mflo  $t9
/* 00439FEC 00991821 */  addu  $v1, $a0, $t9
/* 00439FF0 8C680000 */  lw    $t0, ($v1)
/* 00439FF4 AC480000 */  sw    $t0, ($v0)
/* 00439FF8 94690004 */  lhu   $t1, 4($v1)
/* 00439FFC A4490004 */  sh    $t1, 4($v0)
/* 0043A000 906A0008 */  lbu   $t2, 8($v1)
/* 0043A004 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043A008 03E00008 */  jr    $ra
/* 0043A00C A04A0008 */   sb    $t2, 8($v0)
    .type copy_reg, @function
    .size copy_reg, .-copy_reg
    .end copy_reg

glabel list_is_empty
    .ent list_is_empty
    # 0043A45C append_to_list
    # 0043A5E8 spill
    # 0043B854 get_one_free_reg
    # 0043BAA8 get_free_fp_reg
    # 0043CE54 check_no_used
    # 0043D1A4 get_free_fp_reg_special
    # 0043D3F8 get_free_reg_special
/* 0043A010 90820000 */  lbu   $v0, ($a0)
/* 0043A014 38420048 */  xori  $v0, $v0, 0x48
/* 0043A018 03E00008 */  jr    $ra
/* 0043A01C 2C420001 */   sltiu $v0, $v0, 1
    .type list_is_empty, @function
    .size list_is_empty, .-list_is_empty
    .end list_is_empty

glabel dump_reg
    .ent dump_reg
/* 0043A020 3C1C0FBE */  .cpload $t9
/* 0043A024 279C5A30 */  
/* 0043A028 0399E021 */  
/* 0043A02C 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0043A030 AFB70038 */  sw    $s7, 0x38($sp)
/* 0043A034 AFB4002C */  sw    $s4, 0x2c($sp)
/* 0043A038 8F948038 */  lw    $s4, %got(D_100164C8)($gp)
/* 0043A03C 8F978038 */  lw    $s7, %got(D_100166E8)($gp)
/* 0043A040 AFBE0040 */  sw    $fp, 0x40($sp)
/* 0043A044 AFB60034 */  sw    $s6, 0x34($sp)
/* 0043A048 AFB50030 */  sw    $s5, 0x30($sp)
/* 0043A04C AFB30028 */  sw    $s3, 0x28($sp)
/* 0043A050 AFB20024 */  sw    $s2, 0x24($sp)
/* 0043A054 8F928954 */  lw     $s2, %got(output)($gp)
/* 0043A058 309300FF */  andi  $s3, $a0, 0xff
/* 0043A05C 8F958BCC */  lw     $s5, %got(regs)($gp)
/* 0043A060 2416000C */  li    $s6, 12
/* 0043A064 241E0006 */  li    $fp, 6
/* 0043A068 AFBF0044 */  sw    $ra, 0x44($sp)
/* 0043A06C AFBC003C */  sw    $gp, 0x3c($sp)
/* 0043A070 AFB10020 */  sw    $s1, 0x20($sp)
/* 0043A074 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0043A078 AFA40048 */  sw    $a0, 0x48($sp)
/* 0043A07C 269464C8 */  addiu $s4, %lo(D_100164C8) # addiu $s4, $s4, 0x64c8
/* 0043A080 26F766E8 */  addiu $s7, %lo(D_100166E8) # addiu $s7, $s7, 0x66e8
.L0043A084:
/* 0043A084 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043A088 8F858038 */  lw    $a1, %got(RO_1000B820)($gp)
/* 0043A08C 8E440000 */  lw    $a0, ($s2)
/* 0043A090 24060009 */  li    $a2, 9
/* 0043A094 24070009 */  li    $a3, 9
/* 0043A098 0320F809 */  jalr  $t9
/* 0043A09C 24A5B820 */   addiu $a1, %lo(RO_1000B820) # addiu $a1, $a1, -0x47e0
/* 0043A0A0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0043A0A4 8E500000 */  lw    $s0, ($s2)
/* 0043A0A8 240E000A */  li    $t6, 10
/* 0043A0AC 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0043A0B0 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0043A0B4 02602825 */  move  $a1, $s3
/* 0043A0B8 02803025 */  move  $a2, $s4
/* 0043A0BC 00003825 */  move  $a3, $zero
/* 0043A0C0 0320F809 */  jalr  $t9
/* 0043A0C4 02002025 */   move  $a0, $s0
/* 0043A0C8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0043A0CC 02002025 */  move  $a0, $s0
/* 0043A0D0 24060008 */  li    $a2, 8
/* 0043A0D4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043A0D8 8F858038 */  lw    $a1, %got(RO_1000B818)($gp)
/* 0043A0DC 24070008 */  li    $a3, 8
/* 0043A0E0 0320F809 */  jalr  $t9
/* 0043A0E4 24A5B818 */   addiu $a1, %lo(RO_1000B818) # addiu $a1, $a1, -0x47e8
/* 0043A0E8 02760019 */  multu $s3, $s6
/* 0043A0EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0043A0F0 8E500000 */  lw    $s0, ($s2)
/* 0043A0F4 2418000A */  li    $t8, 10
/* 0043A0F8 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0043A0FC AFB80010 */  sw    $t8, 0x10($sp)
/* 0043A100 02E03025 */  move  $a2, $s7
/* 0043A104 00003825 */  move  $a3, $zero
/* 0043A108 02002025 */  move  $a0, $s0
/* 0043A10C 00007812 */  mflo  $t7
/* 0043A110 02AF8821 */  addu  $s1, $s5, $t7
/* 0043A114 0320F809 */  jalr  $t9
/* 0043A118 92250008 */   lbu   $a1, 8($s1)
/* 0043A11C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0043A120 02002025 */  move  $a0, $s0
/* 0043A124 24060008 */  li    $a2, 8
/* 0043A128 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043A12C 8F858038 */  lw    $a1, %got(RO_1000B810)($gp)
/* 0043A130 24070008 */  li    $a3, 8
/* 0043A134 0320F809 */  jalr  $t9
/* 0043A138 24A5B810 */   addiu $a1, %lo(RO_1000B810) # addiu $a1, $a1, -0x47f0
/* 0043A13C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0043A140 8E440000 */  lw    $a0, ($s2)
/* 0043A144 96250004 */  lhu   $a1, 4($s1)
/* 0043A148 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0043A14C 02C03025 */  move  $a2, $s6
/* 0043A150 2407000A */  li    $a3, 10
/* 0043A154 0320F809 */  jalr  $t9
/* 0043A158 00000000 */   nop   
/* 0043A15C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0043A160 8E440000 */  lw    $a0, ($s2)
/* 0043A164 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0043A168 0320F809 */  jalr  $t9
/* 0043A16C 00000000 */   nop   
/* 0043A170 92390008 */  lbu   $t9, 8($s1)
/* 0043A174 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0043A178 57D90004 */  bnel  $fp, $t9, .L0043A18C
/* 0043A17C 8FBF0044 */   lw    $ra, 0x44($sp)
/* 0043A180 1000FFC0 */  b     .L0043A084
/* 0043A184 92330009 */   lbu   $s3, 9($s1)
/* 0043A188 8FBF0044 */  lw    $ra, 0x44($sp)
.L0043A18C:
/* 0043A18C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0043A190 8FB10020 */  lw    $s1, 0x20($sp)
/* 0043A194 8FB20024 */  lw    $s2, 0x24($sp)
/* 0043A198 8FB30028 */  lw    $s3, 0x28($sp)
/* 0043A19C 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0043A1A0 8FB50030 */  lw    $s5, 0x30($sp)
/* 0043A1A4 8FB60034 */  lw    $s6, 0x34($sp)
/* 0043A1A8 8FB70038 */  lw    $s7, 0x38($sp)
/* 0043A1AC 8FBE0040 */  lw    $fp, 0x40($sp)
/* 0043A1B0 03E00008 */  jr    $ra
/* 0043A1B4 27BD0048 */   addiu $sp, $sp, 0x48
    .type dump_reg, @function
    .size dump_reg, .-dump_reg
    .end dump_reg

glabel print_regs
    .ent print_regs
    # 0043CE54 check_no_used
/* 0043A1B8 3C1C0FBE */  .cpload $t9
/* 0043A1BC 279C5898 */  
/* 0043A1C0 0399E021 */  
/* 0043A1C4 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0043A1C8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043A1CC AFB7003C */  sw    $s7, 0x3c($sp)
/* 0043A1D0 AFB60038 */  sw    $s6, 0x38($sp)
/* 0043A1D4 8F978950 */  lw     $s7, %got(err)($gp)
/* 0043A1D8 8F858038 */  lw    $a1, %got(RO_1000B829)($gp)
/* 0043A1DC AFBF0044 */  sw    $ra, 0x44($sp)
/* 0043A1E0 AFBC0040 */  sw    $gp, 0x40($sp)
/* 0043A1E4 AFB50034 */  sw    $s5, 0x34($sp)
/* 0043A1E8 AFB40030 */  sw    $s4, 0x30($sp)
/* 0043A1EC AFB3002C */  sw    $s3, 0x2c($sp)
/* 0043A1F0 AFB20028 */  sw    $s2, 0x28($sp)
/* 0043A1F4 AFB10024 */  sw    $s1, 0x24($sp)
/* 0043A1F8 AFB00020 */  sw    $s0, 0x20($sp)
/* 0043A1FC 0080B025 */  move  $s6, $a0
/* 0043A200 90910000 */  lbu   $s1, ($a0)
/* 0043A204 2406000A */  li    $a2, 10
/* 0043A208 2407000A */  li    $a3, 10
/* 0043A20C 8EE40000 */  lw    $a0, ($s7)
/* 0043A210 0320F809 */  jalr  $t9
/* 0043A214 24A5B829 */   addiu $a1, %lo(RO_1000B829) # addiu $a1, $a1, -0x47d7
/* 0043A218 8FBC0040 */  lw    $gp, 0x40($sp)
/* 0043A21C 8EE40000 */  lw    $a0, ($s7)
/* 0043A220 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0043A224 0320F809 */  jalr  $t9
/* 0043A228 00000000 */   nop   
/* 0043A22C 92CE0001 */  lbu   $t6, 1($s6)
/* 0043A230 8FBC0040 */  lw    $gp, 0x40($sp)
/* 0043A234 24140048 */  li    $s4, 72
/* 0043A238 122E001F */  beq   $s1, $t6, .L0043A2B8
/* 0043A23C 00000000 */   nop   
/* 0043A240 1234001D */  beq   $s1, $s4, .L0043A2B8
/* 0043A244 00000000 */   nop   
/* 0043A248 8F958038 */  lw    $s5, %got(D_100164C8)($gp)
/* 0043A24C 2413000C */  li    $s3, 12
/* 0043A250 8F928BCC */  lw     $s2, %got(regs)($gp)
/* 0043A254 26B564C8 */  addiu $s5, %lo(D_100164C8) # addiu $s5, $s5, 0x64c8
.L0043A258:
/* 0043A258 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0043A25C 8EF00000 */  lw    $s0, ($s7)
/* 0043A260 240F000A */  li    $t7, 10
/* 0043A264 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0043A268 02202825 */  move  $a1, $s1
/* 0043A26C 02A03025 */  move  $a2, $s5
/* 0043A270 00003825 */  move  $a3, $zero
/* 0043A274 0320F809 */  jalr  $t9
/* 0043A278 02002025 */   move  $a0, $s0
/* 0043A27C 8FBC0040 */  lw    $gp, 0x40($sp)
/* 0043A280 02002025 */  move  $a0, $s0
/* 0043A284 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0043A288 0320F809 */  jalr  $t9
/* 0043A28C 00000000 */   nop   
/* 0043A290 02330019 */  multu $s1, $s3
/* 0043A294 92C80001 */  lbu   $t0, 1($s6)
/* 0043A298 8FBC0040 */  lw    $gp, 0x40($sp)
/* 0043A29C 0000C012 */  mflo  $t8
/* 0043A2A0 0258C821 */  addu  $t9, $s2, $t8
/* 0043A2A4 93310006 */  lbu   $s1, 6($t9)
/* 0043A2A8 12280003 */  beq   $s1, $t0, .L0043A2B8
/* 0043A2AC 00000000 */   nop   
/* 0043A2B0 1634FFE9 */  bne   $s1, $s4, .L0043A258
/* 0043A2B4 00000000 */   nop   
.L0043A2B8:
/* 0043A2B8 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0043A2BC 8F958038 */  lw    $s5, -0x7fc8($gp)
/* 0043A2C0 8EF00000 */  lw    $s0, ($s7)
/* 0043A2C4 2409000A */  li    $t1, 10
/* 0043A2C8 AFA90010 */  sw    $t1, 0x10($sp)
/* 0043A2CC 02202825 */  move  $a1, $s1
/* 0043A2D0 00003825 */  move  $a3, $zero
/* 0043A2D4 26A664C8 */  addiu $a2, $s5, 0x64c8
/* 0043A2D8 0320F809 */  jalr  $t9
/* 0043A2DC 02002025 */   move  $a0, $s0
/* 0043A2E0 8FBC0040 */  lw    $gp, 0x40($sp)
/* 0043A2E4 02002025 */  move  $a0, $s0
/* 0043A2E8 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0043A2EC 0320F809 */  jalr  $t9
/* 0043A2F0 00000000 */   nop   
/* 0043A2F4 92CA0001 */  lbu   $t2, 1($s6)
/* 0043A2F8 8FBC0040 */  lw    $gp, 0x40($sp)
/* 0043A2FC 8FB00020 */  lw    $s0, 0x20($sp)
/* 0043A300 022A02B6 */  tne   $s1, $t2, 0xa
/* 0043A304 8FBF0044 */  lw    $ra, 0x44($sp)
/* 0043A308 8FB10024 */  lw    $s1, 0x24($sp)
/* 0043A30C 8FB20028 */  lw    $s2, 0x28($sp)
/* 0043A310 8FB3002C */  lw    $s3, 0x2c($sp)
/* 0043A314 8FB40030 */  lw    $s4, 0x30($sp)
/* 0043A318 8FB50034 */  lw    $s5, 0x34($sp)
/* 0043A31C 8FB60038 */  lw    $s6, 0x38($sp)
/* 0043A320 8FB7003C */  lw    $s7, 0x3c($sp)
/* 0043A324 03E00008 */  jr    $ra
/* 0043A328 27BD0048 */   addiu $sp, $sp, 0x48
    .type print_regs, @function
    .size print_regs, .-print_regs
    .end print_regs

glabel remove_direg
    .ent remove_direg
    # 0043B478 spill_two_regs
    # 0043B6AC get_two_free_regs
/* 0043A32C 3C1C0FBE */  .cpload $t9
/* 0043A330 279C5724 */  
/* 0043A334 0399E021 */  
/* 0043A338 90820000 */  lbu   $v0, ($a0)
/* 0043A33C 24060048 */  li    $a2, 72
/* 0043A340 2408000C */  li    $t0, 12
/* 0043A344 00C202B4 */  teq   $a2, $v0, 0xa
/* 0043A348 304E0001 */  andi  $t6, $v0, 1
/* 0043A34C 304300FF */  andi  $v1, $v0, 0xff
/* 0043A350 11C0000A */  beqz  $t6, .L0043A37C
/* 0043A354 304500FF */   andi  $a1, $v0, 0xff
/* 0043A358 8F878BCC */  lw     $a3, %got(regs)($gp)
.L0043A35C:
/* 0043A35C 00680019 */  multu $v1, $t0
/* 0043A360 306500FF */  andi  $a1, $v1, 0xff
/* 0043A364 00007812 */  mflo  $t7
/* 0043A368 00EFC021 */  addu  $t8, $a3, $t7
/* 0043A36C 93030006 */  lbu   $v1, 6($t8)
/* 0043A370 30790001 */  andi  $t9, $v1, 1
/* 0043A374 1720FFF9 */  bnez  $t9, .L0043A35C
/* 0043A378 00000000 */   nop   
.L0043A37C:
/* 0043A37C 8F878BCC */  lw     $a3, %got(regs)($gp)
/* 0043A380 14620007 */  bne   $v1, $v0, .L0043A3A0
/* 0043A384 2408000C */   li    $t0, 12
/* 0043A388 00680019 */  multu $v1, $t0
/* 0043A38C 00004812 */  mflo  $t1
/* 0043A390 00E95021 */  addu  $t2, $a3, $t1
/* 0043A394 914B0006 */  lbu   $t3, 6($t2)
/* 0043A398 10000009 */  b     .L0043A3C0
/* 0043A39C A08B0000 */   sb    $t3, ($a0)
.L0043A3A0:
/* 0043A3A0 00680019 */  multu $v1, $t0
/* 0043A3A4 00006012 */  mflo  $t4
/* 0043A3A8 00EC6821 */  addu  $t5, $a3, $t4
/* 0043A3AC 91AE0006 */  lbu   $t6, 6($t5)
/* 0043A3B0 00A80019 */  multu $a1, $t0
/* 0043A3B4 00007812 */  mflo  $t7
/* 0043A3B8 00EFC021 */  addu  $t8, $a3, $t7
/* 0043A3BC A30E0006 */  sb    $t6, 6($t8)
.L0043A3C0:
/* 0043A3C0 90990001 */  lbu   $t9, 1($a0)
/* 0043A3C4 14790008 */  bne   $v1, $t9, .L0043A3E8
/* 0043A3C8 00000000 */   nop   
/* 0043A3CC 90890000 */  lbu   $t1, ($a0)
/* 0043A3D0 00601025 */  move  $v0, $v1
/* 0043A3D4 54C90004 */  bnel  $a2, $t1, .L0043A3E8
/* 0043A3D8 A0850001 */   sb    $a1, 1($a0)
/* 0043A3DC 03E00008 */  jr    $ra
/* 0043A3E0 A0860001 */   sb    $a2, 1($a0)

/* 0043A3E4 A0850001 */  sb    $a1, 1($a0)
.L0043A3E8:
/* 0043A3E8 03E00008 */  jr    $ra
/* 0043A3EC 00601025 */   move  $v0, $v1
    .type remove_direg, @function
    .size remove_direg, .-remove_direg
    .end remove_direg

glabel get_head
    .ent get_head
    # 0043B854 get_one_free_reg
/* 0043A3F0 AFA40000 */  sw    $a0, ($sp)
/* 0043A3F4 93A40000 */  lbu   $a0, ($sp)
/* 0043A3F8 240E0048 */  li    $t6, 72
/* 0043A3FC 008E02B4 */  teq   $a0, $t6, 0xa
/* 0043A400 03E00008 */  jr    $ra
/* 0043A404 00801025 */   move  $v0, $a0
    .type get_head, @function
    .size get_head, .-get_head
    .end get_head

glabel remove_head
    .ent remove_head
    # 0043A5E8 spill
    # 0043B854 get_one_free_reg
    # 0043BAA8 get_free_fp_reg
/* 0043A408 3C1C0FBE */  .cpload $t9
/* 0043A40C 279C5648 */  
/* 0043A410 0399E021 */  
/* 0043A414 90820000 */  lbu   $v0, ($a0)
/* 0043A418 24050048 */  li    $a1, 72
/* 0043A41C 00A202B4 */  teq   $a1, $v0, 0xa
/* 0043A420 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043A424 00027080 */  sll   $t6, $v0, 2
/* 0043A428 01C27023 */  subu  $t6, $t6, $v0
/* 0043A42C 000E7080 */  sll   $t6, $t6, 2
/* 0043A430 90880001 */  lbu   $t0, 1($a0)
/* 0043A434 01CFC021 */  addu  $t8, $t6, $t7
/* 0043A438 93190006 */  lbu   $t9, 6($t8)
/* 0043A43C 304300FF */  andi  $v1, $v0, 0xff
/* 0043A440 14680004 */  bne   $v1, $t0, .L0043A454
/* 0043A444 A0990000 */   sb    $t9, ($a0)
/* 0043A448 332900FF */  andi  $t1, $t9, 0xff
/* 0043A44C 00A902B6 */  tne   $a1, $t1, 0xa
/* 0043A450 A0850001 */  sb    $a1, 1($a0)
.L0043A454:
/* 0043A454 03E00008 */  jr    $ra
/* 0043A458 00601025 */   move  $v0, $v1
    .type remove_head, @function
    .size remove_head, .-remove_head
    .end remove_head

glabel append_to_list
    .ent append_to_list
    # 0043A5E8 spill
    # 0043AB48 get_one_reg
    # 0043AE78 get_reg1
    # 0043B0F8 get_fp_reg
    # 0043B30C get_fp_reg1
    # 0043B6AC get_two_free_regs
    # 0043B854 get_one_free_reg
    # 0043BAA8 get_free_fp_reg
    # 0043C098 free_reg
    # 0043C410 free_fp_reg
    # 0043C5D4 force_free_reg
    # 0043C674 add_to_free_list
    # 0043C804 add_to_fp_free_list
    # 0043D0EC move_to_end_fp_list
    # 0043D148 move_to_end_gp_list
    # 0043D1A4 get_free_fp_reg_special
    # 0043D3F8 get_free_reg_special
/* 0043A45C 3C1C0FBE */  .cpload $t9
/* 0043A460 279C55F4 */  
/* 0043A464 0399E021 */  
/* 0043A468 308600FF */  andi  $a2, $a0, 0xff
/* 0043A46C 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043A470 00067080 */  sll   $t6, $a2, 2
/* 0043A474 01C67023 */  subu  $t6, $t6, $a2
/* 0043A478 000E7080 */  sll   $t6, $t6, 2
/* 0043A47C 01CF1021 */  addu  $v0, $t6, $t7
/* 0043A480 90580007 */  lbu   $t8, 7($v0)
/* 0043A484 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043A488 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043A48C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043A490 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043A494 030002B4 */  teq   $t8, $zero, 0xa
/* 0043A498 24190048 */  li    $t9, 72
/* 0043A49C A0590006 */  sb    $t9, 6($v0)
/* 0043A4A0 8F9984AC */  lw    $t9, %call16(list_is_empty)($gp)
/* 0043A4A4 00A02025 */  move  $a0, $a1
/* 0043A4A8 AFA50024 */  sw    $a1, 0x24($sp)
/* 0043A4AC 0320F809 */  jalr  $t9
/* 0043A4B0 A3A60023 */   sb    $a2, 0x23($sp)
/* 0043A4B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A4B8 8FA50024 */  lw    $a1, 0x24($sp)
/* 0043A4BC 10400004 */  beqz  $v0, .L0043A4D0
/* 0043A4C0 93A60023 */   lbu   $a2, 0x23($sp)
/* 0043A4C4 A0A60000 */  sb    $a2, ($a1)
/* 0043A4C8 10000009 */  b     .L0043A4F0
/* 0043A4CC A0A60001 */   sb    $a2, 1($a1)
.L0043A4D0:
/* 0043A4D0 90A80001 */  lbu   $t0, 1($a1)
/* 0043A4D4 8F8A8BCC */  lw     $t2, %got(regs)($gp)
/* 0043A4D8 00084880 */  sll   $t1, $t0, 2
/* 0043A4DC 01284823 */  subu  $t1, $t1, $t0
/* 0043A4E0 00094880 */  sll   $t1, $t1, 2
/* 0043A4E4 012A5821 */  addu  $t3, $t1, $t2
/* 0043A4E8 A1660006 */  sb    $a2, 6($t3)
/* 0043A4EC A0A60001 */  sb    $a2, 1($a1)
.L0043A4F0:
/* 0043A4F0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043A4F4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043A4F8 03E00008 */  jr    $ra
/* 0043A4FC 00000000 */   nop   
    .type append_to_list, @function
    .size append_to_list, .-append_to_list
    .end append_to_list

glabel remove_from_list
    .ent remove_from_list
    # 0043A5E8 spill
    # 0043AB48 get_one_reg
    # 0043AE78 get_reg1
    # 0043B0F8 get_fp_reg
    # 0043B30C get_fp_reg1
    # 0043B478 spill_two_regs
    # 0043C098 free_reg
    # 0043C410 free_fp_reg
    # 0043C5D4 force_free_reg
    # 0043C994 remove_from_free_list
    # 0043CCA0 remove_from_fp_free_list
    # 0043D0EC move_to_end_fp_list
    # 0043D148 move_to_end_gp_list
    # 0043D1A4 get_free_fp_reg_special
    # 0043D3F8 get_free_reg_special
/* 0043A500 3C1C0FBE */  .cpload $t9
/* 0043A504 279C5550 */  
/* 0043A508 0399E021 */  
/* 0043A50C AFA40000 */  sw    $a0, ($sp)
/* 0043A510 90A20000 */  lbu   $v0, ($a1)
/* 0043A514 54820012 */  bnel  $a0, $v0, .L0043A560
/* 0043A518 90A30001 */   lbu   $v1, 1($a1)
/* 0043A51C 90AE0001 */  lbu   $t6, 1($a1)
/* 0043A520 24080048 */  li    $t0, 72
/* 0043A524 240A000C */  li    $t2, 12
/* 0043A528 148E0004 */  bne   $a0, $t6, .L0043A53C
/* 0043A52C 24020001 */   li    $v0, 1
/* 0043A530 A0A80000 */  sb    $t0, ($a1)
/* 0043A534 03E00008 */  jr    $ra
/* 0043A538 A0A80001 */   sb    $t0, 1($a1)

.L0043A53C:
/* 0043A53C 008A0019 */  multu $a0, $t2
/* 0043A540 8F898BCC */  lw     $t1, %got(regs)($gp)
/* 0043A544 00007812 */  mflo  $t7
/* 0043A548 012FC021 */  addu  $t8, $t1, $t7
/* 0043A54C 93190006 */  lbu   $t9, 6($t8)
/* 0043A550 A0B90000 */  sb    $t9, ($a1)
/* 0043A554 03E00008 */  jr    $ra
/* 0043A558 24020001 */   li    $v0, 1

/* 0043A55C 90A30001 */  lbu   $v1, 1($a1)
.L0043A560:
/* 0043A560 304600FF */  andi  $a2, $v0, 0xff
/* 0043A564 24080048 */  li    $t0, 72
/* 0043A568 50C3001D */  beql  $a2, $v1, .L0043A5E0
/* 0043A56C 00001025 */   move  $v0, $zero
/* 0043A570 10C8001A */  beq   $a2, $t0, .L0043A5DC
/* 0043A574 240A000C */   li    $t2, 12
/* 0043A578 8F898BCC */  lw     $t1, %got(regs)($gp)
.L0043A57C:
/* 0043A57C 00CA0019 */  multu $a2, $t2
/* 0043A580 00005812 */  mflo  $t3
/* 0043A584 012B1021 */  addu  $v0, $t1, $t3
/* 0043A588 90470006 */  lbu   $a3, 6($v0)
/* 0043A58C 5487000F */  bnel  $a0, $a3, .L0043A5CC
/* 0043A590 30E600FF */   andi  $a2, $a3, 0xff
/* 0043A594 14670005 */  bne   $v1, $a3, .L0043A5AC
/* 0043A598 00000000 */   nop   
/* 0043A59C A0A60001 */  sb    $a2, 1($a1)
/* 0043A5A0 A0480006 */  sb    $t0, 6($v0)
/* 0043A5A4 03E00008 */  jr    $ra
/* 0043A5A8 24020001 */   li    $v0, 1

.L0043A5AC:
/* 0043A5AC 008A0019 */  multu $a0, $t2
/* 0043A5B0 00006012 */  mflo  $t4
/* 0043A5B4 012C6821 */  addu  $t5, $t1, $t4
/* 0043A5B8 91AE0006 */  lbu   $t6, 6($t5)
/* 0043A5BC A04E0006 */  sb    $t6, 6($v0)
/* 0043A5C0 03E00008 */  jr    $ra
/* 0043A5C4 24020001 */   li    $v0, 1

/* 0043A5C8 30E600FF */  andi  $a2, $a3, 0xff
.L0043A5CC:
/* 0043A5CC 50C30004 */  beql  $a2, $v1, .L0043A5E0
/* 0043A5D0 00001025 */   move  $v0, $zero
/* 0043A5D4 14C8FFE9 */  bne   $a2, $t0, .L0043A57C
/* 0043A5D8 00000000 */   nop   
.L0043A5DC:
/* 0043A5DC 00001025 */  move  $v0, $zero
.L0043A5E0:
/* 0043A5E0 03E00008 */  jr    $ra
/* 0043A5E4 00000000 */   nop   
    .type remove_from_list, @function
    .size remove_from_list, .-remove_from_list
    .end remove_from_list

glabel spill
    .ent spill
    # 0043A888 spill_reg
/* 0043A5E8 3C1C0FBE */  .cpload $t9
/* 0043A5EC 279C5468 */  
/* 0043A5F0 0399E021 */  
/* 0043A5F4 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0043A5F8 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043A5FC AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043A600 91CE0000 */  lbu   $t6, ($t6)
/* 0043A604 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043A608 AFB000AC */  sw    $s0, 0xac($sp)
/* 0043A60C AFA400C0 */  sw    $a0, 0xc0($sp)
/* 0043A610 AFA600C8 */  sw    $a2, 0xc8($sp)
/* 0043A614 15C00026 */  bnez  $t6, .L0043A6B0
/* 0043A618 AFA700CC */   sw    $a3, 0xcc($sp)
/* 0043A61C 93AF00C3 */  lbu   $t7, 0xc3($sp)
/* 0043A620 8F998BCC */  lw     $t9, %got(regs)($gp)
/* 0043A624 24010006 */  li    $at, 6
/* 0043A628 000FC080 */  sll   $t8, $t7, 2
/* 0043A62C 030FC023 */  subu  $t8, $t8, $t7
/* 0043A630 0018C080 */  sll   $t8, $t8, 2
/* 0043A634 03198021 */  addu  $s0, $t8, $t9
/* 0043A638 92080008 */  lbu   $t0, 8($s0)
/* 0043A63C 1501001C */  bne   $t0, $at, .L0043A6B0
/* 0043A640 00000000 */   nop   
/* 0043A644 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043A648 01E02025 */  move  $a0, $t7
/* 0043A64C 0320F809 */  jalr  $t9
/* 0043A650 00000000 */   nop   
/* 0043A654 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043A658 92040009 */  lbu   $a0, 9($s0)
/* 0043A65C 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043A660 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043A664 0320F809 */  jalr  $t9
/* 0043A668 00000000 */   nop   
/* 0043A66C 10400081 */  beqz  $v0, .L0043A874
/* 0043A670 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0043A674 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043A678 92040009 */  lbu   $a0, 9($s0)
/* 0043A67C 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043A680 0320F809 */  jalr  $t9
/* 0043A684 00000000 */   nop   
/* 0043A688 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043A68C 92040009 */  lbu   $a0, 9($s0)
/* 0043A690 00002825 */  move  $a1, $zero
/* 0043A694 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043A698 00003025 */  move  $a2, $zero
/* 0043A69C 24070001 */  li    $a3, 1
/* 0043A6A0 0320F809 */  jalr  $t9
/* 0043A6A4 00000000 */   nop   
/* 0043A6A8 10000072 */  b     .L0043A874
/* 0043A6AC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043A6B0:
/* 0043A6B0 8F9984AC */  lw    $t9, %call16(list_is_empty)($gp)
/* 0043A6B4 8FA400C8 */  lw    $a0, 0xc8($sp)
/* 0043A6B8 AFA500C4 */  sw    $a1, 0xc4($sp)
/* 0043A6BC 0320F809 */  jalr  $t9
/* 0043A6C0 00000000 */   nop   
/* 0043A6C4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043A6C8 10400007 */  beqz  $v0, .L0043A6E8
/* 0043A6CC 8FA500C4 */   lw    $a1, 0xc4($sp)
/* 0043A6D0 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043A6D4 93A400C3 */  lbu   $a0, 0xc3($sp)
/* 0043A6D8 0320F809 */  jalr  $t9
/* 0043A6DC 00000000 */   nop   
/* 0043A6E0 10000064 */  b     .L0043A874
/* 0043A6E4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043A6E8:
/* 0043A6E8 93A900C3 */  lbu   $t1, 0xc3($sp)
/* 0043A6EC 8F9984BC */  lw    $t9, %call16(remove_head)($gp)
/* 0043A6F0 8F8B8BCC */  lw     $t3, %got(regs)($gp)
/* 0043A6F4 00095080 */  sll   $t2, $t1, 2
/* 0043A6F8 01495023 */  subu  $t2, $t2, $t1
/* 0043A6FC 000A5080 */  sll   $t2, $t2, 2
/* 0043A700 8FA400C8 */  lw    $a0, 0xc8($sp)
/* 0043A704 0320F809 */  jalr  $t9
/* 0043A708 014B8021 */   addu  $s0, $t2, $t3
/* 0043A70C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043A710 A3A200BF */  sb    $v0, 0xbf($sp)
/* 0043A714 97A400D2 */  lhu   $a0, 0xd2($sp)
/* 0043A718 8F9984A8 */  lw    $t9, %call16(copy_reg)($gp)
/* 0043A71C 93A500C3 */  lbu   $a1, 0xc3($sp)
/* 0043A720 304600FF */  andi  $a2, $v0, 0xff
/* 0043A724 0320F809 */  jalr  $t9
/* 0043A728 00000000 */   nop   
/* 0043A72C 8E040000 */  lw    $a0, ($s0)
/* 0043A730 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043A734 24050221 */  li    $a1, 545
/* 0043A738 54800040 */  bnel  $a0, $zero, .L0043A83C
/* 0043A73C 90830019 */   lbu   $v1, 0x19($a0)
/* 0043A740 8F8C8038 */  lw    $t4, %got(RO_1000B883)($gp)
/* 0043A744 24040004 */  li    $a0, 4
/* 0043A748 03A0C025 */  move  $t8, $sp
/* 0043A74C 258CB883 */  addiu $t4, %lo(RO_1000B883) # addiu $t4, $t4, -0x477d
/* 0043A750 25990048 */  addiu $t9, $t4, 0x48
.L0043A754:
/* 0043A754 898E0000 */  lwl   $t6, ($t4)
/* 0043A758 998E0003 */  lwr   $t6, 3($t4)
/* 0043A75C 258C000C */  addiu $t4, $t4, 0xc
/* 0043A760 2718000C */  addiu $t8, $t8, 0xc
/* 0043A764 AB0EFFFC */  swl   $t6, -4($t8)
/* 0043A768 BB0EFFFF */  swr   $t6, -1($t8)
/* 0043A76C 898DFFF8 */  lwl   $t5, -8($t4)
/* 0043A770 998DFFFB */  lwr   $t5, -5($t4)
/* 0043A774 AB0D0000 */  swl   $t5, ($t8)
/* 0043A778 BB0D0003 */  swr   $t5, 3($t8)
/* 0043A77C 898EFFFC */  lwl   $t6, -4($t4)
/* 0043A780 998EFFFF */  lwr   $t6, -1($t4)
/* 0043A784 AB0E0004 */  swl   $t6, 4($t8)
/* 0043A788 1599FFF2 */  bne   $t4, $t9, .L0043A754
/* 0043A78C BB0E0007 */   swr   $t6, 7($t8)
/* 0043A790 898E0000 */  lwl   $t6, ($t4)
/* 0043A794 998E0003 */  lwr   $t6, 3($t4)
/* 0043A798 8F888038 */  lw    $t0, %got(RO_1000B833)($gp)
/* 0043A79C 03A05025 */  move  $t2, $sp
/* 0043A7A0 AB0E0008 */  swl   $t6, 8($t8)
/* 0043A7A4 BB0E000B */  swr   $t6, 0xb($t8)
/* 0043A7A8 898D0004 */  lwl   $t5, 4($t4)
/* 0043A7AC 998D0007 */  lwr   $t5, 7($t4)
/* 0043A7B0 2508B833 */  addiu $t0, %lo(RO_1000B833) # addiu $t0, $t0, -0x47cd
/* 0043A7B4 250B0048 */  addiu $t3, $t0, 0x48
/* 0043A7B8 AB0D000C */  swl   $t5, 0xc($t8)
/* 0043A7BC BB0D000F */  swr   $t5, 0xf($t8)
.L0043A7C0:
/* 0043A7C0 89090000 */  lwl   $t1, ($t0)
/* 0043A7C4 99090003 */  lwr   $t1, 3($t0)
/* 0043A7C8 2508000C */  addiu $t0, $t0, 0xc
/* 0043A7CC 254A000C */  addiu $t2, $t2, 0xc
/* 0043A7D0 A949004C */  swl   $t1, 0x4c($t2)
/* 0043A7D4 B949004F */  swr   $t1, 0x4f($t2)
/* 0043A7D8 890FFFF8 */  lwl   $t7, -8($t0)
/* 0043A7DC 990FFFFB */  lwr   $t7, -5($t0)
/* 0043A7E0 A94F0050 */  swl   $t7, 0x50($t2)
/* 0043A7E4 B94F0053 */  swr   $t7, 0x53($t2)
/* 0043A7E8 8909FFFC */  lwl   $t1, -4($t0)
/* 0043A7EC 9909FFFF */  lwr   $t1, -1($t0)
/* 0043A7F0 A9490054 */  swl   $t1, 0x54($t2)
/* 0043A7F4 150BFFF2 */  bne   $t0, $t3, .L0043A7C0
/* 0043A7F8 B9490057 */   swr   $t1, 0x57($t2)
/* 0043A7FC 89090000 */  lwl   $t1, ($t0)
/* 0043A800 99090003 */  lwr   $t1, 3($t0)
/* 0043A804 A9490058 */  swl   $t1, 0x58($t2)
/* 0043A808 B949005B */  swr   $t1, 0x5b($t2)
/* 0043A80C 890F0004 */  lwl   $t7, 4($t0)
/* 0043A810 990F0007 */  lwr   $t7, 7($t0)
/* 0043A814 A94F005C */  swl   $t7, 0x5c($t2)
/* 0043A818 B94F005F */  swr   $t7, 0x5f($t2)
/* 0043A81C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043A820 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043A824 8FA60008 */  lw    $a2, 8($sp)
/* 0043A828 0320F809 */  jalr  $t9
/* 0043A82C 00000000 */   nop   
/* 0043A830 1000000A */  b     .L0043A85C
/* 0043A834 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0043A838 90830019 */  lbu   $v1, 0x19($a0)
.L0043A83C:
/* 0043A83C 93B900BF */  lbu   $t9, 0xbf($sp)
/* 0043A840 00036600 */  sll   $t4, $v1, 0x18
/* 0043A844 000CC642 */  srl   $t8, $t4, 0x19
/* 0043A848 03386826 */  xor   $t5, $t9, $t8
/* 0043A84C 000D7640 */  sll   $t6, $t5, 0x19
/* 0043A850 000E5E02 */  srl   $t3, $t6, 0x18
/* 0043A854 01634026 */  xor   $t0, $t3, $v1
/* 0043A858 A0880019 */  sb    $t0, 0x19($a0)
.L0043A85C:
/* 0043A85C 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043A860 93A400BF */  lbu   $a0, 0xbf($sp)
/* 0043A864 8FA500CC */  lw    $a1, 0xcc($sp)
/* 0043A868 0320F809 */  jalr  $t9
/* 0043A86C 00000000 */   nop   
/* 0043A870 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043A874:
/* 0043A874 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043A878 8FB000AC */  lw    $s0, 0xac($sp)
/* 0043A87C 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043A880 03E00008 */  jr    $ra
/* 0043A884 00000000 */   nop   
    .type spill, @function
    .size spill, .-spill
    .end spill

glabel spill_reg
    .ent spill_reg
    # 0043AB48 get_one_reg
    # 0043B0F8 get_fp_reg
/* 0043A888 3C1C0FBE */  .cpload $t9
/* 0043A88C 279C51C8 */  
/* 0043A890 0399E021 */  
/* 0043A894 8F8E89B8 */  lw     $t6, %got(isa)($gp)
/* 0043A898 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 0043A89C AFB000AC */  sw    $s0, 0xac($sp)
/* 0043A8A0 91CE0000 */  lbu   $t6, ($t6)
/* 0043A8A4 30B000FF */  andi  $s0, $a1, 0xff
/* 0043A8A8 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043A8AC 2DC10002 */  sltiu $at, $t6, 2
/* 0043A8B0 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043A8B4 AFA400B8 */  sw    $a0, 0xb8($sp)
/* 0043A8B8 14200006 */  bnez  $at, .L0043A8D4
/* 0043A8BC AFA500BC */   sw    $a1, 0xbc($sp)
/* 0043A8C0 8F9888F8 */  lw     $t8, %got(size_tab2)($gp)
/* 0043A8C4 00107880 */  sll   $t7, $s0, 2
/* 0043A8C8 01F8C821 */  addu  $t9, $t7, $t8
/* 0043A8CC 10000005 */  b     .L0043A8E4
/* 0043A8D0 8F250000 */   lw    $a1, ($t9)
.L0043A8D4:
/* 0043A8D4 8F8988F4 */  lw     $t1, %got(size_tab)($gp)
/* 0043A8D8 00104080 */  sll   $t0, $s0, 2
/* 0043A8DC 01095021 */  addu  $t2, $t0, $t1
/* 0043A8E0 8D450000 */  lw    $a1, ($t2)
.L0043A8E4:
/* 0043A8E4 320200FF */  andi  $v0, $s0, 0xff
/* 0043A8E8 244BFFFF */  addiu $t3, $v0, -1
/* 0043A8EC 2D610007 */  sltiu $at, $t3, 7
/* 0043A8F0 10200023 */  beqz  $at, .L0043A980
/* 0043A8F4 00000000 */   nop   
/* 0043A8F8 8F818038 */  lw    $at, %got(jtbl_1000B98C)($gp)
/* 0043A8FC 000B5880 */  sll   $t3, $t3, 2
/* 0043A900 002B0821 */  addu  $at, $at, $t3
/* 0043A904 8C2BB98C */  lw    $t3, %lo(jtbl_1000B98C)($at)
/* 0043A908 017C5821 */  addu  $t3, $t3, $gp
/* 0043A90C 01600008 */  jr    $t3
/* 0043A910 00000000 */   nop   
.L0043A914:
/* 0043A914 8F9984C8 */  lw    $t9, %call16(spill)($gp)
/* 0043A918 240C0031 */  li    $t4, 49
/* 0043A91C AFAC0010 */  sw    $t4, 0x10($sp)
/* 0043A920 93A400BB */  lbu   $a0, 0xbb($sp)
/* 0043A924 8F868AF4 */  lw     $a2, %got(gp_regs_free)($gp)
/* 0043A928 0320F809 */  jalr  $t9
/* 0043A92C 8F878AF8 */   lw     $a3, %got(gp_regs_used)($gp)
/* 0043A930 10000080 */  b     .L0043AB34
/* 0043A934 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043A938:
/* 0043A938 8F9984C8 */  lw    $t9, %call16(spill)($gp)
/* 0043A93C 240D008B */  li    $t5, 139
/* 0043A940 AFAD0010 */  sw    $t5, 0x10($sp)
/* 0043A944 93A400BB */  lbu   $a0, 0xbb($sp)
/* 0043A948 8F868AFC */  lw     $a2, %got(fp_regs_free)($gp)
/* 0043A94C 0320F809 */  jalr  $t9
/* 0043A950 8F878B00 */   lw     $a3, %got(fp_regs_used)($gp)
/* 0043A954 10000077 */  b     .L0043AB34
/* 0043A958 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043A95C:
/* 0043A95C 8F9984C8 */  lw    $t9, %call16(spill)($gp)
/* 0043A960 240E008C */  li    $t6, 140
/* 0043A964 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0043A968 93A400BB */  lbu   $a0, 0xbb($sp)
/* 0043A96C 8F868AFC */  lw     $a2, %got(fp_regs_free)($gp)
/* 0043A970 0320F809 */  jalr  $t9
/* 0043A974 8F878B00 */   lw     $a3, %got(fp_regs_used)($gp)
/* 0043A978 1000006E */  b     .L0043AB34
/* 0043A97C 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043A980:
/* 0043A980 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043A984 8F848950 */  lw     $a0, %got(err)($gp)
/* 0043A988 8F858038 */  lw    $a1, %got(RO_1000B985)($gp)
/* 0043A98C 24060006 */  li    $a2, 6
/* 0043A990 24070006 */  li    $a3, 6
/* 0043A994 A3B000BF */  sb    $s0, 0xbf($sp)
/* 0043A998 8C840000 */  lw    $a0, ($a0)
/* 0043A99C 0320F809 */  jalr  $t9
/* 0043A9A0 24A5B985 */   addiu $a1, %lo(RO_1000B985) # addiu $a1, $a1, -0x467b
/* 0043A9A4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043A9A8 240F000A */  li    $t7, 10
/* 0043A9AC AFAF0010 */  sw    $t7, 0x10($sp)
/* 0043A9B0 8F908950 */  lw     $s0, %got(err)($gp)
/* 0043A9B4 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0043A9B8 8F868038 */  lw    $a2, %got(D_100164C8)($gp)
/* 0043A9BC 8E100000 */  lw    $s0, ($s0)
/* 0043A9C0 93A500BB */  lbu   $a1, 0xbb($sp)
/* 0043A9C4 00003825 */  move  $a3, $zero
/* 0043A9C8 24C664C8 */  addiu $a2, %lo(D_100164C8) # addiu $a2, $a2, 0x64c8
/* 0043A9CC 0320F809 */  jalr  $t9
/* 0043A9D0 02002025 */   move  $a0, $s0
/* 0043A9D4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043A9D8 02002025 */  move  $a0, $s0
/* 0043A9DC 24060012 */  li    $a2, 18
/* 0043A9E0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043A9E4 8F858038 */  lw    $a1, %got(RO_1000B973)($gp)
/* 0043A9E8 24070012 */  li    $a3, 18
/* 0043A9EC 0320F809 */  jalr  $t9
/* 0043A9F0 24A5B973 */   addiu $a1, %lo(RO_1000B973) # addiu $a1, $a1, -0x468d
/* 0043A9F4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043A9F8 2418000A */  li    $t8, 10
/* 0043A9FC AFB80010 */  sw    $t8, 0x10($sp)
/* 0043AA00 8F908950 */  lw     $s0, %got(err)($gp)
/* 0043AA04 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0043AA08 8F868038 */  lw    $a2, %got(D_100166E8)($gp)
/* 0043AA0C 8E100000 */  lw    $s0, ($s0)
/* 0043AA10 93A500BF */  lbu   $a1, 0xbf($sp)
/* 0043AA14 00003825 */  move  $a3, $zero
/* 0043AA18 24C666E8 */  addiu $a2, %lo(D_100166E8) # addiu $a2, $a2, 0x66e8
/* 0043AA1C 0320F809 */  jalr  $t9
/* 0043AA20 02002025 */   move  $a0, $s0
/* 0043AA24 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043AA28 02002025 */  move  $a0, $s0
/* 0043AA2C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0043AA30 0320F809 */  jalr  $t9
/* 0043AA34 00000000 */   nop   
/* 0043AA38 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043AA3C 24040004 */  li    $a0, 4
/* 0043AA40 24050240 */  li    $a1, 576
/* 0043AA44 8F998038 */  lw    $t9, %got(RO_1000B923)($gp)
/* 0043AA48 03A05025 */  move  $t2, $sp
/* 0043AA4C 2739B923 */  addiu $t9, %lo(RO_1000B923) # addiu $t9, $t9, -0x46dd
/* 0043AA50 272B0048 */  addiu $t3, $t9, 0x48
.L0043AA54:
/* 0043AA54 8B290000 */  lwl   $t1, ($t9)
/* 0043AA58 9B290003 */  lwr   $t1, 3($t9)
/* 0043AA5C 2739000C */  addiu $t9, $t9, 0xc
/* 0043AA60 254A000C */  addiu $t2, $t2, 0xc
/* 0043AA64 A949FFFC */  swl   $t1, -4($t2)
/* 0043AA68 B949FFFF */  swr   $t1, -1($t2)
/* 0043AA6C 8B28FFF8 */  lwl   $t0, -8($t9)
/* 0043AA70 9B28FFFB */  lwr   $t0, -5($t9)
/* 0043AA74 A9480000 */  swl   $t0, ($t2)
/* 0043AA78 B9480003 */  swr   $t0, 3($t2)
/* 0043AA7C 8B29FFFC */  lwl   $t1, -4($t9)
/* 0043AA80 9B29FFFF */  lwr   $t1, -1($t9)
/* 0043AA84 A9490004 */  swl   $t1, 4($t2)
/* 0043AA88 172BFFF2 */  bne   $t9, $t3, .L0043AA54
/* 0043AA8C B9490007 */   swr   $t1, 7($t2)
/* 0043AA90 8B290000 */  lwl   $t1, ($t9)
/* 0043AA94 9B290003 */  lwr   $t1, 3($t9)
/* 0043AA98 8F8C8038 */  lw    $t4, %got(RO_1000B8D3)($gp)
/* 0043AA9C 03A07825 */  move  $t7, $sp
/* 0043AAA0 A9490008 */  swl   $t1, 8($t2)
/* 0043AAA4 B949000B */  swr   $t1, 0xb($t2)
/* 0043AAA8 8B280004 */  lwl   $t0, 4($t9)
/* 0043AAAC 9B280007 */  lwr   $t0, 7($t9)
/* 0043AAB0 258CB8D3 */  addiu $t4, %lo(RO_1000B8D3) # addiu $t4, $t4, -0x472d
/* 0043AAB4 25980048 */  addiu $t8, $t4, 0x48
/* 0043AAB8 A948000C */  swl   $t0, 0xc($t2)
/* 0043AABC B948000F */  swr   $t0, 0xf($t2)
.L0043AAC0:
/* 0043AAC0 898E0000 */  lwl   $t6, ($t4)
/* 0043AAC4 998E0003 */  lwr   $t6, 3($t4)
/* 0043AAC8 258C000C */  addiu $t4, $t4, 0xc
/* 0043AACC 25EF000C */  addiu $t7, $t7, 0xc
/* 0043AAD0 A9EE004C */  swl   $t6, 0x4c($t7)
/* 0043AAD4 B9EE004F */  swr   $t6, 0x4f($t7)
/* 0043AAD8 898DFFF8 */  lwl   $t5, -8($t4)
/* 0043AADC 998DFFFB */  lwr   $t5, -5($t4)
/* 0043AAE0 A9ED0050 */  swl   $t5, 0x50($t7)
/* 0043AAE4 B9ED0053 */  swr   $t5, 0x53($t7)
/* 0043AAE8 898EFFFC */  lwl   $t6, -4($t4)
/* 0043AAEC 998EFFFF */  lwr   $t6, -1($t4)
/* 0043AAF0 A9EE0054 */  swl   $t6, 0x54($t7)
/* 0043AAF4 1598FFF2 */  bne   $t4, $t8, .L0043AAC0
/* 0043AAF8 B9EE0057 */   swr   $t6, 0x57($t7)
/* 0043AAFC 898E0000 */  lwl   $t6, ($t4)
/* 0043AB00 998E0003 */  lwr   $t6, 3($t4)
/* 0043AB04 A9EE0058 */  swl   $t6, 0x58($t7)
/* 0043AB08 B9EE005B */  swr   $t6, 0x5b($t7)
/* 0043AB0C 898D0004 */  lwl   $t5, 4($t4)
/* 0043AB10 998D0007 */  lwr   $t5, 7($t4)
/* 0043AB14 A9ED005C */  swl   $t5, 0x5c($t7)
/* 0043AB18 B9ED005F */  swr   $t5, 0x5f($t7)
/* 0043AB1C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043AB20 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043AB24 8FA60008 */  lw    $a2, 8($sp)
/* 0043AB28 0320F809 */  jalr  $t9
/* 0043AB2C 00000000 */   nop   
/* 0043AB30 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043AB34:
/* 0043AB34 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043AB38 8FB000AC */  lw    $s0, 0xac($sp)
/* 0043AB3C 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 0043AB40 03E00008 */  jr    $ra
/* 0043AB44 00000000 */   nop   
    .type spill_reg, @function
    .size spill_reg, .-spill_reg
    .end spill_reg

glabel get_one_reg
    .ent get_one_reg
    # 0043AD54 get_two_regs
    # 0043ADE8 get_reg
    # 0043B6AC get_two_free_regs
/* 0043AB48 3C1C0FBE */  .cpload $t9
/* 0043AB4C 279C4F08 */  
/* 0043AB50 0399E021 */  
/* 0043AB54 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 0043AB58 AFB000AC */  sw    $s0, 0xac($sp)
/* 0043AB5C 309000FF */  andi  $s0, $a0, 0xff
/* 0043AB60 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043AB64 00107080 */  sll   $t6, $s0, 2
/* 0043AB68 01D07023 */  subu  $t6, $t6, $s0
/* 0043AB6C 000E7080 */  sll   $t6, $t6, 2
/* 0043AB70 01CF1021 */  addu  $v0, $t6, $t7
/* 0043AB74 90580007 */  lbu   $t8, 7($v0)
/* 0043AB78 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043AB7C AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043AB80 AFA400B8 */  sw    $a0, 0xb8($sp)
/* 0043AB84 AFA500BC */  sw    $a1, 0xbc($sp)
/* 0043AB88 AFA600C0 */  sw    $a2, 0xc0($sp)
/* 0043AB8C 1700000B */  bnez  $t8, .L0043ABBC
/* 0043AB90 AFA700C4 */   sw    $a3, 0xc4($sp)
/* 0043AB94 94590004 */  lhu   $t9, 4($v0)
/* 0043AB98 13200062 */  beqz  $t9, .L0043AD24
/* 0043AB9C 00000000 */   nop   
/* 0043ABA0 8F9984CC */  lw    $t9, %call16(spill_reg)($gp)
/* 0043ABA4 02002025 */  move  $a0, $s0
/* 0043ABA8 93A500C7 */  lbu   $a1, 0xc7($sp)
/* 0043ABAC 0320F809 */  jalr  $t9
/* 0043ABB0 00000000 */   nop   
/* 0043ABB4 1000005B */  b     .L0043AD24
/* 0043ABB8 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043ABBC:
/* 0043ABBC 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043ABC0 02002025 */  move  $a0, $s0
/* 0043ABC4 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043ABC8 0320F809 */  jalr  $t9
/* 0043ABCC 00000000 */   nop   
/* 0043ABD0 1440004E */  bnez  $v0, .L0043AD0C
/* 0043ABD4 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0043ABD8 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043ABDC 02002025 */  move  $a0, $s0
/* 0043ABE0 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043ABE4 0320F809 */  jalr  $t9
/* 0043ABE8 00000000 */   nop   
/* 0043ABEC 10400008 */  beqz  $v0, .L0043AC10
/* 0043ABF0 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0043ABF4 8F9984CC */  lw    $t9, %call16(spill_reg)($gp)
/* 0043ABF8 02002025 */  move  $a0, $s0
/* 0043ABFC 93A500C7 */  lbu   $a1, 0xc7($sp)
/* 0043AC00 0320F809 */  jalr  $t9
/* 0043AC04 00000000 */   nop   
/* 0043AC08 10000040 */  b     .L0043AD0C
/* 0043AC0C 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043AC10:
/* 0043AC10 8F888038 */  lw    $t0, %got(RO_1000B9F8)($gp)
/* 0043AC14 24040004 */  li    $a0, 4
/* 0043AC18 24050252 */  li    $a1, 594
/* 0043AC1C 2508B9F8 */  addiu $t0, %lo(RO_1000B9F8) # addiu $t0, $t0, -0x4608
/* 0043AC20 250C0048 */  addiu $t4, $t0, 0x48
/* 0043AC24 03A05825 */  move  $t3, $sp
.L0043AC28:
/* 0043AC28 890A0000 */  lwl   $t2, ($t0)
/* 0043AC2C 990A0003 */  lwr   $t2, 3($t0)
/* 0043AC30 2508000C */  addiu $t0, $t0, 0xc
/* 0043AC34 256B000C */  addiu $t3, $t3, 0xc
/* 0043AC38 A96AFFFC */  swl   $t2, -4($t3)
/* 0043AC3C B96AFFFF */  swr   $t2, -1($t3)
/* 0043AC40 8909FFF8 */  lwl   $t1, -8($t0)
/* 0043AC44 9909FFFB */  lwr   $t1, -5($t0)
/* 0043AC48 A9690000 */  swl   $t1, ($t3)
/* 0043AC4C B9690003 */  swr   $t1, 3($t3)
/* 0043AC50 890AFFFC */  lwl   $t2, -4($t0)
/* 0043AC54 990AFFFF */  lwr   $t2, -1($t0)
/* 0043AC58 A96A0004 */  swl   $t2, 4($t3)
/* 0043AC5C 150CFFF2 */  bne   $t0, $t4, .L0043AC28
/* 0043AC60 B96A0007 */   swr   $t2, 7($t3)
/* 0043AC64 890A0000 */  lwl   $t2, ($t0)
/* 0043AC68 990A0003 */  lwr   $t2, 3($t0)
/* 0043AC6C 8F8D8038 */  lw    $t5, %got(RO_1000B9A8)($gp)
/* 0043AC70 03A0C025 */  move  $t8, $sp
/* 0043AC74 A96A0008 */  swl   $t2, 8($t3)
/* 0043AC78 B96A000B */  swr   $t2, 0xb($t3)
/* 0043AC7C 89090004 */  lwl   $t1, 4($t0)
/* 0043AC80 99090007 */  lwr   $t1, 7($t0)
/* 0043AC84 25ADB9A8 */  addiu $t5, %lo(RO_1000B9A8) # addiu $t5, $t5, -0x4658
/* 0043AC88 25B90048 */  addiu $t9, $t5, 0x48
/* 0043AC8C A969000C */  swl   $t1, 0xc($t3)
/* 0043AC90 B969000F */  swr   $t1, 0xf($t3)
.L0043AC94:
/* 0043AC94 89AF0000 */  lwl   $t7, ($t5)
/* 0043AC98 99AF0003 */  lwr   $t7, 3($t5)
/* 0043AC9C 25AD000C */  addiu $t5, $t5, 0xc
/* 0043ACA0 2718000C */  addiu $t8, $t8, 0xc
/* 0043ACA4 AB0F004C */  swl   $t7, 0x4c($t8)
/* 0043ACA8 BB0F004F */  swr   $t7, 0x4f($t8)
/* 0043ACAC 89AEFFF8 */  lwl   $t6, -8($t5)
/* 0043ACB0 99AEFFFB */  lwr   $t6, -5($t5)
/* 0043ACB4 AB0E0050 */  swl   $t6, 0x50($t8)
/* 0043ACB8 BB0E0053 */  swr   $t6, 0x53($t8)
/* 0043ACBC 89AFFFFC */  lwl   $t7, -4($t5)
/* 0043ACC0 99AFFFFF */  lwr   $t7, -1($t5)
/* 0043ACC4 AB0F0054 */  swl   $t7, 0x54($t8)
/* 0043ACC8 15B9FFF2 */  bne   $t5, $t9, .L0043AC94
/* 0043ACCC BB0F0057 */   swr   $t7, 0x57($t8)
/* 0043ACD0 89AF0000 */  lwl   $t7, ($t5)
/* 0043ACD4 99AF0003 */  lwr   $t7, 3($t5)
/* 0043ACD8 AB0F0058 */  swl   $t7, 0x58($t8)
/* 0043ACDC BB0F005B */  swr   $t7, 0x5b($t8)
/* 0043ACE0 89AE0004 */  lwl   $t6, 4($t5)
/* 0043ACE4 99AE0007 */  lwr   $t6, 7($t5)
/* 0043ACE8 AB0E005C */  swl   $t6, 0x5c($t8)
/* 0043ACEC BB0E005F */  swr   $t6, 0x5f($t8)
/* 0043ACF0 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043ACF4 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043ACF8 8FA60008 */  lw    $a2, 8($sp)
/* 0043ACFC 0320F809 */  jalr  $t9
/* 0043AD00 00000000 */   nop   
/* 0043AD04 1000000E */  b     .L0043AD40
/* 0043AD08 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043AD0C:
/* 0043AD0C 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043AD10 02002025 */  move  $a0, $s0
/* 0043AD14 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043AD18 0320F809 */  jalr  $t9
/* 0043AD1C 00000000 */   nop   
/* 0043AD20 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043AD24:
/* 0043AD24 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043AD28 02002025 */  move  $a0, $s0
/* 0043AD2C 8FA500BC */  lw    $a1, 0xbc($sp)
/* 0043AD30 97A600C2 */  lhu   $a2, 0xc2($sp)
/* 0043AD34 0320F809 */  jalr  $t9
/* 0043AD38 93A700C7 */   lbu   $a3, 0xc7($sp)
/* 0043AD3C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043AD40:
/* 0043AD40 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043AD44 8FB000AC */  lw    $s0, 0xac($sp)
/* 0043AD48 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 0043AD4C 03E00008 */  jr    $ra
/* 0043AD50 00000000 */   nop   
    .type get_one_reg, @function
    .size get_one_reg, .-get_one_reg
    .end get_one_reg

glabel get_two_regs
    .ent get_two_regs
    # 0043ADE8 get_reg
/* 0043AD54 3C1C0FBE */  .cpload $t9
/* 0043AD58 279C4CFC */  
/* 0043AD5C 0399E021 */  
/* 0043AD60 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043AD64 308E0001 */  andi  $t6, $a0, 1
/* 0043AD68 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043AD6C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043AD70 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043AD74 AFA50024 */  sw    $a1, 0x24($sp)
/* 0043AD78 AFA60028 */  sw    $a2, 0x28($sp)
/* 0043AD7C 01C002B6 */  tne   $t6, $zero, 0xa
/* 0043AD80 8F9984D0 */  lw    $t9, %call16(get_one_reg)($gp)
/* 0043AD84 8FA50024 */  lw    $a1, 0x24($sp)
/* 0043AD88 97A6002A */  lhu   $a2, 0x2a($sp)
/* 0043AD8C 24070006 */  li    $a3, 6
/* 0043AD90 0320F809 */  jalr  $t9
/* 0043AD94 A3A40023 */   sb    $a0, 0x23($sp)
/* 0043AD98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043AD9C 93A20023 */  lbu   $v0, 0x23($sp)
/* 0043ADA0 24070007 */  li    $a3, 7
/* 0043ADA4 8F988BCC */  lw     $t8, %got(regs)($gp)
/* 0043ADA8 00027880 */  sll   $t7, $v0, 2
/* 0043ADAC 01E27823 */  subu  $t7, $t7, $v0
/* 0043ADB0 000F7880 */  sll   $t7, $t7, 2
/* 0043ADB4 24440001 */  addiu $a0, $v0, 1
/* 0043ADB8 01F8C821 */  addu  $t9, $t7, $t8
/* 0043ADBC A3240009 */  sb    $a0, 9($t9)
/* 0043ADC0 8F9984D0 */  lw    $t9, %call16(get_one_reg)($gp)
/* 0043ADC4 97A6002A */  lhu   $a2, 0x2a($sp)
/* 0043ADC8 8FA50024 */  lw    $a1, 0x24($sp)
/* 0043ADCC 0320F809 */  jalr  $t9
/* 0043ADD0 00000000 */   nop   
/* 0043ADD4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043ADD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043ADDC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043ADE0 03E00008 */  jr    $ra
/* 0043ADE4 00000000 */   nop   
    .type get_two_regs, @function
    .size get_two_regs, .-get_two_regs
    .end get_two_regs

glabel get_reg
    .ent get_reg
    # 00420810 gen_entry_exit
    # 004258CC get_dest
    # 00428C38 copy
    # 0042BDAC eval
/* 0043ADE8 3C1C0FBE */  .cpload $t9
/* 0043ADEC 279C4C68 */  
/* 0043ADF0 0399E021 */  
/* 0043ADF4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043ADF8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043ADFC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043AE00 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043AE04 10A00013 */  beqz  $a1, .L0043AE54
/* 0043AE08 AFA60028 */   sw    $a2, 0x28($sp)
/* 0043AE0C 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0043AE10 91CE0000 */  lbu   $t6, ($t6)
/* 0043AE14 15C0000F */  bnez  $t6, .L0043AE54
/* 0043AE18 00000000 */   nop   
/* 0043AE1C 90AF0021 */  lbu   $t7, 0x21($a1)
/* 0043AE20 3C010501 */  lui   $at, 0x501
/* 0043AE24 31F8001F */  andi  $t8, $t7, 0x1f
/* 0043AE28 2F190020 */  sltiu $t9, $t8, 0x20
/* 0043AE2C 00194023 */  negu  $t0, $t9
/* 0043AE30 01014824 */  and   $t1, $t0, $at
/* 0043AE34 03095004 */  sllv  $t2, $t1, $t8
/* 0043AE38 05410006 */  bgez  $t2, .L0043AE54
/* 0043AE3C 00000000 */   nop   
/* 0043AE40 8F9984D4 */  lw    $t9, %call16(get_two_regs)($gp)
/* 0043AE44 0320F809 */  jalr  $t9
/* 0043AE48 00000000 */   nop   
/* 0043AE4C 10000006 */  b     .L0043AE68
/* 0043AE50 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043AE54:
/* 0043AE54 8F9984D0 */  lw    $t9, %call16(get_one_reg)($gp)
/* 0043AE58 24070001 */  li    $a3, 1
/* 0043AE5C 0320F809 */  jalr  $t9
/* 0043AE60 00000000 */   nop   
/* 0043AE64 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043AE68:
/* 0043AE68 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043AE6C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043AE70 03E00008 */  jr    $ra
/* 0043AE74 00000000 */   nop   
    .type get_reg, @function
    .size get_reg, .-get_reg
    .end get_reg

glabel get_reg1
    .ent get_reg1
    # 0042BDAC eval
/* 0043AE78 3C1C0FBE */  .cpload $t9
/* 0043AE7C 279C4BD8 */  
/* 0043AE80 0399E021 */  
/* 0043AE84 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043AE88 00047080 */  sll   $t6, $a0, 2
/* 0043AE8C 01C47023 */  subu  $t6, $t6, $a0
/* 0043AE90 000E7080 */  sll   $t6, $t6, 2
/* 0043AE94 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0043AE98 01CF1821 */  addu  $v1, $t6, $t7
/* 0043AE9C 90780007 */  lbu   $t8, 7($v1)
/* 0043AEA0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0043AEA4 00A08025 */  move  $s0, $a1
/* 0043AEA8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043AEAC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043AEB0 AFA40028 */  sw    $a0, 0x28($sp)
/* 0043AEB4 1300002C */  beqz  $t8, .L0043AF68
/* 0043AEB8 AFA60030 */   sw    $a2, 0x30($sp)
/* 0043AEBC 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043AEC0 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043AEC4 AFA30020 */  sw    $v1, 0x20($sp)
/* 0043AEC8 0320F809 */  jalr  $t9
/* 0043AECC A3A4002B */   sb    $a0, 0x2b($sp)
/* 0043AED0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043AED4 8FA30020 */  lw    $v1, 0x20($sp)
/* 0043AED8 10400023 */  beqz  $v0, .L0043AF68
/* 0043AEDC 93A4002B */   lbu   $a0, 0x2b($sp)
/* 0043AEE0 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043AEE4 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043AEE8 A3A4002B */  sb    $a0, 0x2b($sp)
/* 0043AEEC 0320F809 */  jalr  $t9
/* 0043AEF0 00000000 */   nop   
/* 0043AEF4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043AEF8 93A4002B */  lbu   $a0, 0x2b($sp)
/* 0043AEFC 8F9989D8 */  lw     $t9, %got(opcode_arch)($gp)
/* 0043AF00 93390000 */  lbu   $t9, ($t9)
/* 0043AF04 17200011 */  bnez  $t9, .L0043AF4C
/* 0043AF08 00000000 */   nop   
/* 0043AF0C 92080021 */  lbu   $t0, 0x21($s0)
/* 0043AF10 3C010501 */  lui   $at, 0x501
/* 0043AF14 3109001F */  andi  $t1, $t0, 0x1f
/* 0043AF18 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 0043AF1C 000A5823 */  negu  $t3, $t2
/* 0043AF20 01616024 */  and   $t4, $t3, $at
/* 0043AF24 012C6804 */  sllv  $t5, $t4, $t1
/* 0043AF28 05A10008 */  bgez  $t5, .L0043AF4C
/* 0043AF2C 00000000 */   nop   
/* 0043AF30 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043AF34 02002825 */  move  $a1, $s0
/* 0043AF38 97A60032 */  lhu   $a2, 0x32($sp)
/* 0043AF3C 0320F809 */  jalr  $t9
/* 0043AF40 24070006 */   li    $a3, 6
/* 0043AF44 10000067 */  b     .L0043B0E4
/* 0043AF48 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043AF4C:
/* 0043AF4C 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043AF50 02002825 */  move  $a1, $s0
/* 0043AF54 97A60032 */  lhu   $a2, 0x32($sp)
/* 0043AF58 0320F809 */  jalr  $t9
/* 0043AF5C 24070001 */   li    $a3, 1
/* 0043AF60 10000060 */  b     .L0043B0E4
/* 0043AF64 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043AF68:
/* 0043AF68 8F998508 */  lw    $t9, %call16(inc_usage)($gp)
/* 0043AF6C 97A50032 */  lhu   $a1, 0x32($sp)
/* 0043AF70 AFA30020 */  sw    $v1, 0x20($sp)
/* 0043AF74 0320F809 */  jalr  $t9
/* 0043AF78 A3A4002B */   sb    $a0, 0x2b($sp)
/* 0043AF7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043AF80 8FA30020 */  lw    $v1, 0x20($sp)
/* 0043AF84 93A4002B */  lbu   $a0, 0x2b($sp)
/* 0043AF88 8F8289D8 */  lw     $v0, %got(opcode_arch)($gp)
/* 0043AF8C 90420000 */  lbu   $v0, ($v0)
/* 0043AF90 1440000C */  bnez  $v0, .L0043AFC4
/* 0043AF94 00000000 */   nop   
/* 0043AF98 920E0021 */  lbu   $t6, 0x21($s0)
/* 0043AF9C 3C010501 */  lui   $at, 0x501
/* 0043AFA0 240B0006 */  li    $t3, 6
/* 0043AFA4 31CF001F */  andi  $t7, $t6, 0x1f
/* 0043AFA8 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0043AFAC 0018C823 */  negu  $t9, $t8
/* 0043AFB0 03214024 */  and   $t0, $t9, $at
/* 0043AFB4 01E85004 */  sllv  $t2, $t0, $t7
/* 0043AFB8 05410002 */  bgez  $t2, .L0043AFC4
/* 0043AFBC 00000000 */   nop   
/* 0043AFC0 A06B0008 */  sb    $t3, 8($v1)
.L0043AFC4:
/* 0043AFC4 52000048 */  beql  $s0, $zero, .L0043B0E8
/* 0043AFC8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0043AFCC 54400046 */  bnel  $v0, $zero, .L0043B0E8
/* 0043AFD0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0043AFD4 920C0021 */  lbu   $t4, 0x21($s0)
/* 0043AFD8 3C010501 */  lui   $at, 0x501
/* 0043AFDC 24820001 */  addiu $v0, $a0, 1
/* 0043AFE0 3189001F */  andi  $t1, $t4, 0x1f
/* 0043AFE4 2D2D0020 */  sltiu $t5, $t1, 0x20
/* 0043AFE8 000D7023 */  negu  $t6, $t5
/* 0043AFEC 01C1C024 */  and   $t8, $t6, $at
/* 0043AFF0 0138C804 */  sllv  $t9, $t8, $t1
/* 0043AFF4 0721003B */  bgez  $t9, .L0043B0E4
/* 0043AFF8 304800FF */   andi  $t0, $v0, 0xff
/* 0043AFFC 8F8A8BCC */  lw     $t2, %got(regs)($gp)
/* 0043B000 00087880 */  sll   $t7, $t0, 2
/* 0043B004 01E87823 */  subu  $t7, $t7, $t0
/* 0043B008 000F7880 */  sll   $t7, $t7, 2
/* 0043B00C A3A20027 */  sb    $v0, 0x27($sp)
/* 0043B010 A0620009 */  sb    $v0, 9($v1)
/* 0043B014 01EA5821 */  addu  $t3, $t7, $t2
/* 0043B018 916C0007 */  lbu   $t4, 7($t3)
/* 0043B01C 11800017 */  beqz  $t4, .L0043B07C
/* 0043B020 00000000 */   nop   
/* 0043B024 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043B028 304400FF */  andi  $a0, $v0, 0xff
/* 0043B02C 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043B030 0320F809 */  jalr  $t9
/* 0043B034 00000000 */   nop   
/* 0043B038 10400010 */  beqz  $v0, .L0043B07C
/* 0043B03C 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0043B040 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043B044 93A40027 */  lbu   $a0, 0x27($sp)
/* 0043B048 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043B04C 0320F809 */  jalr  $t9
/* 0043B050 00000000 */   nop   
/* 0043B054 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B058 93A40027 */  lbu   $a0, 0x27($sp)
/* 0043B05C 02002825 */  move  $a1, $s0
/* 0043B060 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043B064 97A60032 */  lhu   $a2, 0x32($sp)
/* 0043B068 24070007 */  li    $a3, 7
/* 0043B06C 0320F809 */  jalr  $t9
/* 0043B070 00000000 */   nop   
/* 0043B074 1000001B */  b     .L0043B0E4
/* 0043B078 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043B07C:
/* 0043B07C 8F998508 */  lw    $t9, %call16(inc_usage)($gp)
/* 0043B080 93A40027 */  lbu   $a0, 0x27($sp)
/* 0043B084 97A50032 */  lhu   $a1, 0x32($sp)
/* 0043B088 0320F809 */  jalr  $t9
/* 0043B08C 00000000 */   nop   
/* 0043B090 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B094 8F8D89D8 */  lw     $t5, %got(opcode_arch)($gp)
/* 0043B098 91AD0000 */  lbu   $t5, ($t5)
/* 0043B09C 55A00012 */  bnel  $t5, $zero, .L0043B0E8
/* 0043B0A0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0043B0A4 920E0021 */  lbu   $t6, 0x21($s0)
/* 0043B0A8 3C010501 */  lui   $at, 0x501
/* 0043B0AC 93AB0027 */  lbu   $t3, 0x27($sp)
/* 0043B0B0 31D8001F */  andi  $t8, $t6, 0x1f
/* 0043B0B4 2F090020 */  sltiu $t1, $t8, 0x20
/* 0043B0B8 0009C823 */  negu  $t9, $t1
/* 0043B0BC 03214024 */  and   $t0, $t9, $at
/* 0043B0C0 03087804 */  sllv  $t7, $t0, $t8
/* 0043B0C4 05E10007 */  bgez  $t7, .L0043B0E4
/* 0043B0C8 000B6080 */   sll   $t4, $t3, 2
/* 0043B0CC 8F8D8BCC */  lw     $t5, %got(regs)($gp)
/* 0043B0D0 018B6023 */  subu  $t4, $t4, $t3
/* 0043B0D4 000C6080 */  sll   $t4, $t4, 2
/* 0043B0D8 240A0007 */  li    $t2, 7
/* 0043B0DC 018D7021 */  addu  $t6, $t4, $t5
/* 0043B0E0 A1CA0008 */  sb    $t2, 8($t6)
.L0043B0E4:
/* 0043B0E4 8FBF001C */  lw    $ra, 0x1c($sp)
.L0043B0E8:
/* 0043B0E8 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043B0EC 27BD0028 */  addiu $sp, $sp, 0x28
/* 0043B0F0 03E00008 */  jr    $ra
/* 0043B0F4 00000000 */   nop   
    .type get_reg1, @function
    .size get_reg1, .-get_reg1
    .end get_reg1

glabel get_fp_reg
    .ent get_fp_reg
    # 004258CC get_dest
    # 004287AC eval_fp_min_max
/* 0043B0F8 3C1C0FBE */  .cpload $t9
/* 0043B0FC 279C4958 */  
/* 0043B100 0399E021 */  
/* 0043B104 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043B108 AFB000AC */  sw    $s0, 0xac($sp)
/* 0043B10C 309000FF */  andi  $s0, $a0, 0xff
/* 0043B110 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043B114 00107080 */  sll   $t6, $s0, 2
/* 0043B118 01D07023 */  subu  $t6, $t6, $s0
/* 0043B11C 000E7080 */  sll   $t6, $t6, 2
/* 0043B120 01CF1821 */  addu  $v1, $t6, $t7
/* 0043B124 90780007 */  lbu   $t8, 7($v1)
/* 0043B128 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043B12C AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043B130 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 0043B134 AFA500C4 */  sw    $a1, 0xc4($sp)
/* 0043B138 AFA600C8 */  sw    $a2, 0xc8($sp)
/* 0043B13C 1700000B */  bnez  $t8, .L0043B16C
/* 0043B140 AFA700CC */   sw    $a3, 0xcc($sp)
/* 0043B144 94790004 */  lhu   $t9, 4($v1)
/* 0043B148 13200064 */  beqz  $t9, .L0043B2DC
/* 0043B14C 00000000 */   nop   
/* 0043B150 8F9984CC */  lw    $t9, %call16(spill_reg)($gp)
/* 0043B154 02002025 */  move  $a0, $s0
/* 0043B158 90650008 */  lbu   $a1, 8($v1)
/* 0043B15C 0320F809 */  jalr  $t9
/* 0043B160 00000000 */   nop   
/* 0043B164 1000005D */  b     .L0043B2DC
/* 0043B168 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043B16C:
/* 0043B16C 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043B170 02002025 */  move  $a0, $s0
/* 0043B174 8F858AFC */  lw     $a1, %got(fp_regs_free)($gp)
/* 0043B178 0320F809 */  jalr  $t9
/* 0043B17C AFA300BC */   sw    $v1, 0xbc($sp)
/* 0043B180 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043B184 1440004F */  bnez  $v0, .L0043B2C4
/* 0043B188 8FA300BC */   lw    $v1, 0xbc($sp)
/* 0043B18C 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043B190 02002025 */  move  $a0, $s0
/* 0043B194 8F858B00 */  lw     $a1, %got(fp_regs_used)($gp)
/* 0043B198 0320F809 */  jalr  $t9
/* 0043B19C AFA300BC */   sw    $v1, 0xbc($sp)
/* 0043B1A0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043B1A4 10400008 */  beqz  $v0, .L0043B1C8
/* 0043B1A8 8FA300BC */   lw    $v1, 0xbc($sp)
/* 0043B1AC 8F9984CC */  lw    $t9, %call16(spill_reg)($gp)
/* 0043B1B0 02002025 */  move  $a0, $s0
/* 0043B1B4 90650008 */  lbu   $a1, 8($v1)
/* 0043B1B8 0320F809 */  jalr  $t9
/* 0043B1BC 00000000 */   nop   
/* 0043B1C0 10000040 */  b     .L0043B2C4
/* 0043B1C4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043B1C8:
/* 0043B1C8 8F888038 */  lw    $t0, %got(RO_1000BA98)($gp)
/* 0043B1CC 24040004 */  li    $a0, 4
/* 0043B1D0 240502A6 */  li    $a1, 678
/* 0043B1D4 2508BA98 */  addiu $t0, %lo(RO_1000BA98) # addiu $t0, $t0, -0x4568
/* 0043B1D8 250C0048 */  addiu $t4, $t0, 0x48
/* 0043B1DC 03A05825 */  move  $t3, $sp
.L0043B1E0:
/* 0043B1E0 890A0000 */  lwl   $t2, ($t0)
/* 0043B1E4 990A0003 */  lwr   $t2, 3($t0)
/* 0043B1E8 2508000C */  addiu $t0, $t0, 0xc
/* 0043B1EC 256B000C */  addiu $t3, $t3, 0xc
/* 0043B1F0 A96AFFFC */  swl   $t2, -4($t3)
/* 0043B1F4 B96AFFFF */  swr   $t2, -1($t3)
/* 0043B1F8 8909FFF8 */  lwl   $t1, -8($t0)
/* 0043B1FC 9909FFFB */  lwr   $t1, -5($t0)
/* 0043B200 A9690000 */  swl   $t1, ($t3)
/* 0043B204 B9690003 */  swr   $t1, 3($t3)
/* 0043B208 890AFFFC */  lwl   $t2, -4($t0)
/* 0043B20C 990AFFFF */  lwr   $t2, -1($t0)
/* 0043B210 A96A0004 */  swl   $t2, 4($t3)
/* 0043B214 150CFFF2 */  bne   $t0, $t4, .L0043B1E0
/* 0043B218 B96A0007 */   swr   $t2, 7($t3)
/* 0043B21C 890A0000 */  lwl   $t2, ($t0)
/* 0043B220 990A0003 */  lwr   $t2, 3($t0)
/* 0043B224 8F8D8038 */  lw    $t5, %got(RO_1000BA48)($gp)
/* 0043B228 03A0C025 */  move  $t8, $sp
/* 0043B22C A96A0008 */  swl   $t2, 8($t3)
/* 0043B230 B96A000B */  swr   $t2, 0xb($t3)
/* 0043B234 89090004 */  lwl   $t1, 4($t0)
/* 0043B238 99090007 */  lwr   $t1, 7($t0)
/* 0043B23C 25ADBA48 */  addiu $t5, %lo(RO_1000BA48) # addiu $t5, $t5, -0x45b8
/* 0043B240 25B90048 */  addiu $t9, $t5, 0x48
/* 0043B244 A969000C */  swl   $t1, 0xc($t3)
/* 0043B248 B969000F */  swr   $t1, 0xf($t3)
.L0043B24C:
/* 0043B24C 89AF0000 */  lwl   $t7, ($t5)
/* 0043B250 99AF0003 */  lwr   $t7, 3($t5)
/* 0043B254 25AD000C */  addiu $t5, $t5, 0xc
/* 0043B258 2718000C */  addiu $t8, $t8, 0xc
/* 0043B25C AB0F004C */  swl   $t7, 0x4c($t8)
/* 0043B260 BB0F004F */  swr   $t7, 0x4f($t8)
/* 0043B264 89AEFFF8 */  lwl   $t6, -8($t5)
/* 0043B268 99AEFFFB */  lwr   $t6, -5($t5)
/* 0043B26C AB0E0050 */  swl   $t6, 0x50($t8)
/* 0043B270 BB0E0053 */  swr   $t6, 0x53($t8)
/* 0043B274 89AFFFFC */  lwl   $t7, -4($t5)
/* 0043B278 99AFFFFF */  lwr   $t7, -1($t5)
/* 0043B27C AB0F0054 */  swl   $t7, 0x54($t8)
/* 0043B280 15B9FFF2 */  bne   $t5, $t9, .L0043B24C
/* 0043B284 BB0F0057 */   swr   $t7, 0x57($t8)
/* 0043B288 89AF0000 */  lwl   $t7, ($t5)
/* 0043B28C 99AF0003 */  lwr   $t7, 3($t5)
/* 0043B290 AB0F0058 */  swl   $t7, 0x58($t8)
/* 0043B294 BB0F005B */  swr   $t7, 0x5b($t8)
/* 0043B298 89AE0004 */  lwl   $t6, 4($t5)
/* 0043B29C 99AE0007 */  lwr   $t6, 7($t5)
/* 0043B2A0 AB0E005C */  swl   $t6, 0x5c($t8)
/* 0043B2A4 BB0E005F */  swr   $t6, 0x5f($t8)
/* 0043B2A8 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043B2AC 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043B2B0 8FA60008 */  lw    $a2, 8($sp)
/* 0043B2B4 0320F809 */  jalr  $t9
/* 0043B2B8 00000000 */   nop   
/* 0043B2BC 1000000E */  b     .L0043B2F8
/* 0043B2C0 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043B2C4:
/* 0043B2C4 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043B2C8 02002025 */  move  $a0, $s0
/* 0043B2CC 8F858B00 */  lw     $a1, %got(fp_regs_used)($gp)
/* 0043B2D0 0320F809 */  jalr  $t9
/* 0043B2D4 00000000 */   nop   
/* 0043B2D8 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043B2DC:
/* 0043B2DC 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043B2E0 02002025 */  move  $a0, $s0
/* 0043B2E4 8FA500C4 */  lw    $a1, 0xc4($sp)
/* 0043B2E8 97A600CE */  lhu   $a2, 0xce($sp)
/* 0043B2EC 0320F809 */  jalr  $t9
/* 0043B2F0 93A700CB */   lbu   $a3, 0xcb($sp)
/* 0043B2F4 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043B2F8:
/* 0043B2F8 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043B2FC 8FB000AC */  lw    $s0, 0xac($sp)
/* 0043B300 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043B304 03E00008 */  jr    $ra
/* 0043B308 00000000 */   nop   
    .type get_fp_reg, @function
    .size get_fp_reg, .-get_fp_reg
    .end get_fp_reg

glabel get_fp_reg1
    .ent get_fp_reg1
    # 0042BDAC eval
/* 0043B30C 3C1C0FBE */  .cpload $t9
/* 0043B310 279C4744 */  
/* 0043B314 0399E021 */  
/* 0043B318 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043B31C 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043B320 00047080 */  sll   $t6, $a0, 2
/* 0043B324 01C47023 */  subu  $t6, $t6, $a0
/* 0043B328 000E7080 */  sll   $t6, $t6, 2
/* 0043B32C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043B330 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043B334 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043B338 AFA50024 */  sw    $a1, 0x24($sp)
/* 0043B33C AFA60028 */  sw    $a2, 0x28($sp)
/* 0043B340 AFA7002C */  sw    $a3, 0x2c($sp)
/* 0043B344 01CFC021 */  addu  $t8, $t6, $t7
/* 0043B348 93190007 */  lbu   $t9, 7($t8)
/* 0043B34C 13200018 */  beqz  $t9, .L0043B3B0
/* 0043B350 00000000 */   nop   
/* 0043B354 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043B358 8F858AFC */  lw     $a1, %got(fp_regs_free)($gp)
/* 0043B35C A3A40023 */  sb    $a0, 0x23($sp)
/* 0043B360 0320F809 */  jalr  $t9
/* 0043B364 00000000 */   nop   
/* 0043B368 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B36C 10400010 */  beqz  $v0, .L0043B3B0
/* 0043B370 93A40023 */   lbu   $a0, 0x23($sp)
/* 0043B374 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043B378 8F858B00 */  lw     $a1, %got(fp_regs_used)($gp)
/* 0043B37C A3A40023 */  sb    $a0, 0x23($sp)
/* 0043B380 0320F809 */  jalr  $t9
/* 0043B384 00000000 */   nop   
/* 0043B388 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B38C 93A40023 */  lbu   $a0, 0x23($sp)
/* 0043B390 8FA50024 */  lw    $a1, 0x24($sp)
/* 0043B394 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043B398 97A6002E */  lhu   $a2, 0x2e($sp)
/* 0043B39C 93A7002B */  lbu   $a3, 0x2b($sp)
/* 0043B3A0 0320F809 */  jalr  $t9
/* 0043B3A4 00000000 */   nop   
/* 0043B3A8 10000006 */  b     .L0043B3C4
/* 0043B3AC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043B3B0:
/* 0043B3B0 8F998508 */  lw    $t9, %call16(inc_usage)($gp)
/* 0043B3B4 97A5002E */  lhu   $a1, 0x2e($sp)
/* 0043B3B8 0320F809 */  jalr  $t9
/* 0043B3BC 00000000 */   nop   
/* 0043B3C0 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043B3C4:
/* 0043B3C4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043B3C8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043B3CC 03E00008 */  jr    $ra
/* 0043B3D0 00000000 */   nop   
    .type get_fp_reg1, @function
    .size get_fp_reg1, .-get_fp_reg1
    .end get_fp_reg1

glabel free_reg_is_available
    .ent free_reg_is_available
    # 00428D14 eval_mov
/* 0043B3D4 3C1C0FBE */  .cpload $t9
/* 0043B3D8 279C467C */  
/* 0043B3DC 0399E021 */  
/* 0043B3E0 8F8E8AF4 */  lw     $t6, %got(gp_regs_free)($gp)
/* 0043B3E4 24010048 */  li    $at, 72
/* 0043B3E8 24020001 */  li    $v0, 1
/* 0043B3EC 91CE0000 */  lbu   $t6, ($t6)
/* 0043B3F0 15C10003 */  bne   $t6, $at, .L0043B400
/* 0043B3F4 00000000 */   nop   
/* 0043B3F8 03E00008 */  jr    $ra
/* 0043B3FC 00001025 */   move  $v0, $zero

.L0043B400:
/* 0043B400 03E00008 */  jr    $ra
/* 0043B404 00000000 */   nop   
    .type free_reg_is_available, @function
    .size free_reg_is_available, .-free_reg_is_available
    .end free_reg_is_available

glabel can_get_two_regs
    .ent can_get_two_regs
    # 0043B6AC get_two_free_regs
/* 0043B408 3C1C0FBE */  .cpload $t9
/* 0043B40C 279C4648 */  
/* 0043B410 0399E021 */  
/* 0043B414 AFA40000 */  sw    $a0, ($sp)
/* 0043B418 93A40000 */  lbu   $a0, ($sp)
/* 0043B41C 24030048 */  li    $v1, 72
/* 0043B420 14830003 */  bne   $a0, $v1, .L0043B430
/* 0043B424 308E0001 */   andi  $t6, $a0, 1
/* 0043B428 03E00008 */  jr    $ra
/* 0043B42C 00001025 */   move  $v0, $zero

.L0043B430:
/* 0043B430 11C0000A */  beqz  $t6, .L0043B45C
/* 0043B434 308200FF */   andi  $v0, $a0, 0xff
/* 0043B438 2405000C */  li    $a1, 12
/* 0043B43C 8F848BCC */  lw     $a0, %got(regs)($gp)
.L0043B440:
/* 0043B440 00450019 */  multu $v0, $a1
/* 0043B444 00007812 */  mflo  $t7
/* 0043B448 008FC021 */  addu  $t8, $a0, $t7
/* 0043B44C 93020006 */  lbu   $v0, 6($t8)
/* 0043B450 30590001 */  andi  $t9, $v0, 1
/* 0043B454 1720FFFA */  bnez  $t9, .L0043B440
/* 0043B458 00000000 */   nop   
.L0043B45C:
/* 0043B45C 54430004 */  bnel  $v0, $v1, .L0043B470
/* 0043B460 24020001 */   li    $v0, 1
/* 0043B464 03E00008 */  jr    $ra
/* 0043B468 00001025 */   move  $v0, $zero

/* 0043B46C 24020001 */  li    $v0, 1
.L0043B470:
/* 0043B470 03E00008 */  jr    $ra
/* 0043B474 00000000 */   nop   
    .type can_get_two_regs, @function
    .size can_get_two_regs, .-can_get_two_regs
    .end can_get_two_regs

glabel spill_two_regs
    .ent spill_two_regs
    # 0043B6AC get_two_free_regs
    # 0043B854 get_one_free_reg
/* 0043B478 3C1C0FBE */  .cpload $t9
/* 0043B47C 279C45D8 */  
/* 0043B480 0399E021 */  
/* 0043B484 8F9984B4 */  lw    $t9, %call16(remove_direg)($gp)
/* 0043B488 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043B48C AFBF00BC */  sw    $ra, 0xbc($sp)
/* 0043B490 AFBC00B8 */  sw    $gp, 0xb8($sp)
/* 0043B494 AFB100B4 */  sw    $s1, 0xb4($sp)
/* 0043B498 AFB000B0 */  sw    $s0, 0xb0($sp)
/* 0043B49C 0320F809 */  jalr  $t9
/* 0043B4A0 8F848AF8 */   lw     $a0, %got(gp_regs_used)($gp)
/* 0043B4A4 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0043B4A8 304E00FF */  andi  $t6, $v0, 0xff
/* 0043B4AC 000E7880 */  sll   $t7, $t6, 2
/* 0043B4B0 8F988BCC */  lw     $t8, %got(regs)($gp)
/* 0043B4B4 01EE7823 */  subu  $t7, $t7, $t6
/* 0043B4B8 000F7880 */  sll   $t7, $t7, 2
/* 0043B4BC 01F8C821 */  addu  $t9, $t7, $t8
/* 0043B4C0 93280008 */  lbu   $t0, 8($t9)
/* 0043B4C4 24010006 */  li    $at, 6
/* 0043B4C8 305100FF */  andi  $s1, $v0, 0xff
/* 0043B4CC 15010011 */  bne   $t0, $at, .L0043B514
/* 0043B4D0 00000000 */   nop   
/* 0043B4D4 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043B4D8 8F8588F4 */  lw     $a1, %got(size_tab)($gp)
/* 0043B4DC 02202025 */  move  $a0, $s1
/* 0043B4E0 0320F809 */  jalr  $t9
/* 0043B4E4 8CA50018 */   lw    $a1, 0x18($a1)
/* 0043B4E8 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0043B4EC 26300001 */  addiu $s0, $s1, 1
/* 0043B4F0 02002025 */  move  $a0, $s0
/* 0043B4F4 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043B4F8 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043B4FC 0320F809 */  jalr  $t9
/* 0043B500 00000000 */   nop   
/* 0043B504 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0043B508 004002B4 */  teq   $v0, $zero, 0xa
/* 0043B50C 1000005B */  b     .L0043B67C
/* 0043B510 00000000 */   nop   
.L0043B514:
/* 0043B514 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043B518 8F8588F4 */  lw     $a1, %got(size_tab)($gp)
/* 0043B51C 02202025 */  move  $a0, $s1
/* 0043B520 0320F809 */  jalr  $t9
/* 0043B524 8CA50004 */   lw    $a1, 4($a1)
/* 0043B528 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0043B52C 26300001 */  addiu $s0, $s1, 1
/* 0043B530 02002025 */  move  $a0, $s0
/* 0043B534 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043B538 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043B53C 0320F809 */  jalr  $t9
/* 0043B540 00000000 */   nop   
/* 0043B544 10400008 */  beqz  $v0, .L0043B568
/* 0043B548 8FBC00B8 */   lw    $gp, 0xb8($sp)
/* 0043B54C 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043B550 8F8588F4 */  lw     $a1, %got(size_tab)($gp)
/* 0043B554 02002025 */  move  $a0, $s0
/* 0043B558 0320F809 */  jalr  $t9
/* 0043B55C 8CA50004 */   lw    $a1, 4($a1)
/* 0043B560 10000046 */  b     .L0043B67C
/* 0043B564 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L0043B568:
/* 0043B568 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043B56C 02002025 */  move  $a0, $s0
/* 0043B570 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043B574 0320F809 */  jalr  $t9
/* 0043B578 00000000 */   nop   
/* 0043B57C 1440003F */  bnez  $v0, .L0043B67C
/* 0043B580 8FBC00B8 */   lw    $gp, 0xb8($sp)
/* 0043B584 8F898038 */  lw    $t1, %got(RO_1000BB38)($gp)
/* 0043B588 24040004 */  li    $a0, 4
/* 0043B58C 24050305 */  li    $a1, 773
/* 0043B590 2529BB38 */  addiu $t1, %lo(RO_1000BB38) # addiu $t1, $t1, -0x44c8
/* 0043B594 252D0048 */  addiu $t5, $t1, 0x48
/* 0043B598 03A06025 */  move  $t4, $sp
.L0043B59C:
/* 0043B59C 892B0000 */  lwl   $t3, ($t1)
/* 0043B5A0 992B0003 */  lwr   $t3, 3($t1)
/* 0043B5A4 2529000C */  addiu $t1, $t1, 0xc
/* 0043B5A8 258C000C */  addiu $t4, $t4, 0xc
/* 0043B5AC A98BFFFC */  swl   $t3, -4($t4)
/* 0043B5B0 B98BFFFF */  swr   $t3, -1($t4)
/* 0043B5B4 892AFFF8 */  lwl   $t2, -8($t1)
/* 0043B5B8 992AFFFB */  lwr   $t2, -5($t1)
/* 0043B5BC A98A0000 */  swl   $t2, ($t4)
/* 0043B5C0 B98A0003 */  swr   $t2, 3($t4)
/* 0043B5C4 892BFFFC */  lwl   $t3, -4($t1)
/* 0043B5C8 992BFFFF */  lwr   $t3, -1($t1)
/* 0043B5CC A98B0004 */  swl   $t3, 4($t4)
/* 0043B5D0 152DFFF2 */  bne   $t1, $t5, .L0043B59C
/* 0043B5D4 B98B0007 */   swr   $t3, 7($t4)
/* 0043B5D8 892B0000 */  lwl   $t3, ($t1)
/* 0043B5DC 992B0003 */  lwr   $t3, 3($t1)
/* 0043B5E0 8F8E8038 */  lw    $t6, %got(RO_1000BAE8)($gp)
/* 0043B5E4 03A0C825 */  move  $t9, $sp
/* 0043B5E8 A98B0008 */  swl   $t3, 8($t4)
/* 0043B5EC B98B000B */  swr   $t3, 0xb($t4)
/* 0043B5F0 892A0004 */  lwl   $t2, 4($t1)
/* 0043B5F4 992A0007 */  lwr   $t2, 7($t1)
/* 0043B5F8 25CEBAE8 */  addiu $t6, %lo(RO_1000BAE8) # addiu $t6, $t6, -0x4518
/* 0043B5FC 25C80048 */  addiu $t0, $t6, 0x48
/* 0043B600 A98A000C */  swl   $t2, 0xc($t4)
/* 0043B604 B98A000F */  swr   $t2, 0xf($t4)
.L0043B608:
/* 0043B608 89D80000 */  lwl   $t8, ($t6)
/* 0043B60C 99D80003 */  lwr   $t8, 3($t6)
/* 0043B610 25CE000C */  addiu $t6, $t6, 0xc
/* 0043B614 2739000C */  addiu $t9, $t9, 0xc
/* 0043B618 AB38004C */  swl   $t8, 0x4c($t9)
/* 0043B61C BB38004F */  swr   $t8, 0x4f($t9)
/* 0043B620 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0043B624 99CFFFFB */  lwr   $t7, -5($t6)
/* 0043B628 AB2F0050 */  swl   $t7, 0x50($t9)
/* 0043B62C BB2F0053 */  swr   $t7, 0x53($t9)
/* 0043B630 89D8FFFC */  lwl   $t8, -4($t6)
/* 0043B634 99D8FFFF */  lwr   $t8, -1($t6)
/* 0043B638 AB380054 */  swl   $t8, 0x54($t9)
/* 0043B63C 15C8FFF2 */  bne   $t6, $t0, .L0043B608
/* 0043B640 BB380057 */   swr   $t8, 0x57($t9)
/* 0043B644 89D80000 */  lwl   $t8, ($t6)
/* 0043B648 99D80003 */  lwr   $t8, 3($t6)
/* 0043B64C AB380058 */  swl   $t8, 0x58($t9)
/* 0043B650 BB38005B */  swr   $t8, 0x5b($t9)
/* 0043B654 89CF0004 */  lwl   $t7, 4($t6)
/* 0043B658 99CF0007 */  lwr   $t7, 7($t6)
/* 0043B65C AB2F005C */  swl   $t7, 0x5c($t9)
/* 0043B660 BB2F005F */  swr   $t7, 0x5f($t9)
/* 0043B664 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043B668 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043B66C 8FA60008 */  lw    $a2, 8($sp)
/* 0043B670 0320F809 */  jalr  $t9
/* 0043B674 00000000 */   nop   
/* 0043B678 8FBC00B8 */  lw    $gp, 0xb8($sp)
.L0043B67C:
/* 0043B67C 8F898BCC */  lw     $t1, %got(regs)($gp)
/* 0043B680 00116880 */  sll   $t5, $s1, 2
/* 0043B684 01B16823 */  subu  $t5, $t5, $s1
/* 0043B688 000D6880 */  sll   $t5, $t5, 2
/* 0043B68C 01A96021 */  addu  $t4, $t5, $t1
/* 0043B690 A1900009 */  sb    $s0, 9($t4)
/* 0043B694 8FBF00BC */  lw    $ra, 0xbc($sp)
/* 0043B698 02201025 */  move  $v0, $s1
/* 0043B69C 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 0043B6A0 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 0043B6A4 03E00008 */  jr    $ra
/* 0043B6A8 27BD00C0 */   addiu $sp, $sp, 0xc0
    .type spill_two_regs, @function
    .size spill_two_regs, .-spill_two_regs
    .end spill_two_regs

glabel get_two_free_regs
    .ent get_two_free_regs
    # 0043BA20 get_free_reg
/* 0043B6AC 3C1C0FBE */  .cpload $t9
/* 0043B6B0 279C43A4 */  
/* 0043B6B4 0399E021 */  
/* 0043B6B8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0043B6BC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0043B6C0 0004182B */  sltu  $v1, $zero, $a0
/* 0043B6C4 00808825 */  move  $s1, $a0
/* 0043B6C8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0043B6CC AFBC0020 */  sw    $gp, 0x20($sp)
/* 0043B6D0 AFB00018 */  sw    $s0, 0x18($sp)
/* 0043B6D4 1060000E */  beqz  $v1, .L0043B710
/* 0043B6D8 AFA5002C */   sw    $a1, 0x2c($sp)
/* 0043B6DC 8F8389D8 */  lw     $v1, %got(opcode_arch)($gp)
/* 0043B6E0 90630000 */  lbu   $v1, ($v1)
/* 0043B6E4 2C630001 */  sltiu $v1, $v1, 1
/* 0043B6E8 10600009 */  beqz  $v1, .L0043B710
/* 0043B6EC 00000000 */   nop   
/* 0043B6F0 908E0021 */  lbu   $t6, 0x21($a0)
/* 0043B6F4 3C010501 */  lui   $at, 0x501
/* 0043B6F8 31CF001F */  andi  $t7, $t6, 0x1f
/* 0043B6FC 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0043B700 0018C823 */  negu  $t9, $t8
/* 0043B704 03214824 */  and   $t1, $t9, $at
/* 0043B708 01E91804 */  sllv  $v1, $t1, $t7
/* 0043B70C 28630000 */  slti  $v1, $v1, 0
.L0043B710:
/* 0043B710 8F908AF4 */  lw     $s0, %got(gp_regs_free)($gp)
/* 0043B714 006002B4 */  teq   $v1, $zero, 0xa
/* 0043B718 920B0000 */  lbu   $t3, ($s0)
/* 0043B71C 8F9984EC */  lw    $t9, %call16(can_get_two_regs)($gp)
/* 0043B720 A3AB0000 */  sb    $t3, ($sp)
/* 0043B724 920A0001 */  lbu   $t2, 1($s0)
/* 0043B728 A3AA0001 */  sb    $t2, 1($sp)
/* 0043B72C 0320F809 */  jalr  $t9
/* 0043B730 8FA40000 */   lw    $a0, ($sp)
/* 0043B734 10400017 */  beqz  $v0, .L0043B794
/* 0043B738 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0043B73C 8F9984B4 */  lw    $t9, %call16(remove_direg)($gp)
/* 0043B740 02002025 */  move  $a0, $s0
/* 0043B744 0320F809 */  jalr  $t9
/* 0043B748 00000000 */   nop   
/* 0043B74C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B750 304300FF */  andi  $v1, $v0, 0xff
/* 0043B754 00036080 */  sll   $t4, $v1, 2
/* 0043B758 8F8D8BCC */  lw     $t5, %got(regs)($gp)
/* 0043B75C 01836023 */  subu  $t4, $t4, $v1
/* 0043B760 000C6080 */  sll   $t4, $t4, 2
/* 0043B764 246E0001 */  addiu $t6, $v1, 1
/* 0043B768 018D4021 */  addu  $t0, $t4, $t5
/* 0043B76C A10E0009 */  sb    $t6, 9($t0)
/* 0043B770 8F9984D0 */  lw    $t9, %call16(get_one_reg)($gp)
/* 0043B774 305000FF */  andi  $s0, $v0, 0xff
/* 0043B778 31C400FF */  andi  $a0, $t6, 0xff
/* 0043B77C 02202825 */  move  $a1, $s1
/* 0043B780 97A6002E */  lhu   $a2, 0x2e($sp)
/* 0043B784 0320F809 */  jalr  $t9
/* 0043B788 24070007 */   li    $a3, 7
/* 0043B78C 1000001D */  b     .L0043B804
/* 0043B790 8FBC0020 */   lw    $gp, 0x20($sp)
.L0043B794:
/* 0043B794 8F9984F0 */  lw    $t9, %call16(spill_two_regs)($gp)
/* 0043B798 0320F809 */  jalr  $t9
/* 0043B79C 00000000 */   nop   
/* 0043B7A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B7A4 305800FF */  andi  $t8, $v0, 0xff
/* 0043B7A8 0018C880 */  sll   $t9, $t8, 2
/* 0043B7AC 8F898BCC */  lw     $t1, %got(regs)($gp)
/* 0043B7B0 0338C823 */  subu  $t9, $t9, $t8
/* 0043B7B4 0019C880 */  sll   $t9, $t9, 2
/* 0043B7B8 03297821 */  addu  $t7, $t9, $t1
/* 0043B7BC 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043B7C0 305000FF */  andi  $s0, $v0, 0xff
/* 0043B7C4 91E40009 */  lbu   $a0, 9($t7)
/* 0043B7C8 0320F809 */  jalr  $t9
/* 0043B7CC 8F858AF8 */   lw     $a1, %got(gp_regs_used)($gp)
/* 0043B7D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B7D4 00105080 */  sll   $t2, $s0, 2
/* 0043B7D8 01505023 */  subu  $t2, $t2, $s0
/* 0043B7DC 8F8B8BCC */  lw     $t3, %got(regs)($gp)
/* 0043B7E0 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043B7E4 000A5080 */  sll   $t2, $t2, 2
/* 0043B7E8 014B6021 */  addu  $t4, $t2, $t3
/* 0043B7EC 91840009 */  lbu   $a0, 9($t4)
/* 0043B7F0 02202825 */  move  $a1, $s1
/* 0043B7F4 97A6002E */  lhu   $a2, 0x2e($sp)
/* 0043B7F8 0320F809 */  jalr  $t9
/* 0043B7FC 24070007 */   li    $a3, 7
/* 0043B800 8FBC0020 */  lw    $gp, 0x20($sp)
.L0043B804:
/* 0043B804 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043B808 02002025 */  move  $a0, $s0
/* 0043B80C 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043B810 0320F809 */  jalr  $t9
/* 0043B814 00000000 */   nop   
/* 0043B818 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B81C 02002025 */  move  $a0, $s0
/* 0043B820 02202825 */  move  $a1, $s1
/* 0043B824 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043B828 97A6002E */  lhu   $a2, 0x2e($sp)
/* 0043B82C 24070006 */  li    $a3, 6
/* 0043B830 0320F809 */  jalr  $t9
/* 0043B834 00000000 */   nop   
/* 0043B838 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0043B83C 02001025 */  move  $v0, $s0
/* 0043B840 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B844 8FB00018 */  lw    $s0, 0x18($sp)
/* 0043B848 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0043B84C 03E00008 */  jr    $ra
/* 0043B850 27BD0028 */   addiu $sp, $sp, 0x28
    .type get_two_free_regs, @function
    .size get_two_free_regs, .-get_two_free_regs
    .end get_two_free_regs

glabel get_one_free_reg
    .ent get_one_free_reg
    # 0043BA20 get_free_reg
/* 0043B854 3C1C0FBE */  .cpload $t9
/* 0043B858 279C41FC */  
/* 0043B85C 0399E021 */  
/* 0043B860 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043B864 8F9984AC */  lw    $t9, %call16(list_is_empty)($gp)
/* 0043B868 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043B86C AFA40020 */  sw    $a0, 0x20($sp)
/* 0043B870 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043B874 AFB00014 */  sw    $s0, 0x14($sp)
/* 0043B878 AFA50024 */  sw    $a1, 0x24($sp)
/* 0043B87C 0320F809 */  jalr  $t9
/* 0043B880 8F848AF4 */   lw     $a0, %got(gp_regs_free)($gp)
/* 0043B884 1040004D */  beqz  $v0, .L0043B9BC
/* 0043B888 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0043B88C 8F8E8AF8 */  lw     $t6, %got(gp_regs_used)($gp)
/* 0043B890 8F9984B8 */  lw    $t9, %call16(get_head)($gp)
/* 0043B894 91D80000 */  lbu   $t8, ($t6)
/* 0043B898 A3B80000 */  sb    $t8, ($sp)
/* 0043B89C 91CF0001 */  lbu   $t7, 1($t6)
/* 0043B8A0 A3AF0001 */  sb    $t7, 1($sp)
/* 0043B8A4 0320F809 */  jalr  $t9
/* 0043B8A8 8FA40000 */   lw    $a0, ($sp)
/* 0043B8AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B8B0 305900FF */  andi  $t9, $v0, 0xff
/* 0043B8B4 00194080 */  sll   $t0, $t9, 2
/* 0043B8B8 8F898BCC */  lw     $t1, %got(regs)($gp)
/* 0043B8BC 01194023 */  subu  $t0, $t0, $t9
/* 0043B8C0 00084080 */  sll   $t0, $t0, 2
/* 0043B8C4 01095021 */  addu  $t2, $t0, $t1
/* 0043B8C8 91430008 */  lbu   $v1, 8($t2)
/* 0043B8CC 24010006 */  li    $at, 6
/* 0043B8D0 10610003 */  beq   $v1, $at, .L0043B8E0
/* 0043B8D4 24010007 */   li    $at, 7
/* 0043B8D8 1461001F */  bne   $v1, $at, .L0043B958
/* 0043B8DC 00000000 */   nop   
.L0043B8E0:
/* 0043B8E0 8F9984F0 */  lw    $t9, %call16(spill_two_regs)($gp)
/* 0043B8E4 0320F809 */  jalr  $t9
/* 0043B8E8 00000000 */   nop   
/* 0043B8EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B8F0 304B00FF */  andi  $t3, $v0, 0xff
/* 0043B8F4 000B6080 */  sll   $t4, $t3, 2
/* 0043B8F8 8F8D8BCC */  lw     $t5, %got(regs)($gp)
/* 0043B8FC 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043B900 018B6023 */  subu  $t4, $t4, $t3
/* 0043B904 000C6080 */  sll   $t4, $t4, 2
/* 0043B908 018D7021 */  addu  $t6, $t4, $t5
/* 0043B90C 305000FF */  andi  $s0, $v0, 0xff
/* 0043B910 91C40009 */  lbu   $a0, 9($t6)
/* 0043B914 0320F809 */  jalr  $t9
/* 0043B918 8F858AF4 */   lw     $a1, %got(gp_regs_free)($gp)
/* 0043B91C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B920 00107880 */  sll   $t7, $s0, 2
/* 0043B924 01F07823 */  subu  $t7, $t7, $s0
/* 0043B928 8F988BCC */  lw     $t8, %got(regs)($gp)
/* 0043B92C 000F7880 */  sll   $t7, $t7, 2
/* 0043B930 00002825 */  move  $a1, $zero
/* 0043B934 01F8C821 */  addu  $t9, $t7, $t8
/* 0043B938 93240009 */  lbu   $a0, 9($t9)
/* 0043B93C 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043B940 00003025 */  move  $a2, $zero
/* 0043B944 24070001 */  li    $a3, 1
/* 0043B948 0320F809 */  jalr  $t9
/* 0043B94C 00000000 */   nop   
/* 0043B950 10000020 */  b     .L0043B9D4
/* 0043B954 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043B958:
/* 0043B958 8F9984BC */  lw    $t9, %call16(remove_head)($gp)
/* 0043B95C 8F848AF8 */  lw     $a0, %got(gp_regs_used)($gp)
/* 0043B960 0320F809 */  jalr  $t9
/* 0043B964 00000000 */   nop   
/* 0043B968 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B96C 24010001 */  li    $at, 1
/* 0043B970 305000FF */  andi  $s0, $v0, 0xff
/* 0043B974 8F8889D8 */  lw     $t0, %got(opcode_arch)($gp)
/* 0043B978 91080000 */  lbu   $t0, ($t0)
/* 0043B97C 15010008 */  bne   $t0, $at, .L0043B9A0
/* 0043B980 00000000 */   nop   
/* 0043B984 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043B988 8F8588F8 */  lw     $a1, %got(size_tab2)($gp)
/* 0043B98C 02002025 */  move  $a0, $s0
/* 0043B990 0320F809 */  jalr  $t9
/* 0043B994 8CA50004 */   lw    $a1, 4($a1)
/* 0043B998 1000000E */  b     .L0043B9D4
/* 0043B99C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043B9A0:
/* 0043B9A0 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043B9A4 8F8588F4 */  lw     $a1, %got(size_tab)($gp)
/* 0043B9A8 02002025 */  move  $a0, $s0
/* 0043B9AC 0320F809 */  jalr  $t9
/* 0043B9B0 8CA50004 */   lw    $a1, 4($a1)
/* 0043B9B4 10000007 */  b     .L0043B9D4
/* 0043B9B8 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043B9BC:
/* 0043B9BC 8F9984BC */  lw    $t9, %call16(remove_head)($gp)
/* 0043B9C0 8F848AF4 */  lw     $a0, %got(gp_regs_free)($gp)
/* 0043B9C4 0320F809 */  jalr  $t9
/* 0043B9C8 00000000 */   nop   
/* 0043B9CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B9D0 305000FF */  andi  $s0, $v0, 0xff
.L0043B9D4:
/* 0043B9D4 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043B9D8 02002025 */  move  $a0, $s0
/* 0043B9DC 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043B9E0 0320F809 */  jalr  $t9
/* 0043B9E4 00000000 */   nop   
/* 0043B9E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B9EC 02002025 */  move  $a0, $s0
/* 0043B9F0 8FA50020 */  lw    $a1, 0x20($sp)
/* 0043B9F4 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043B9F8 97A60026 */  lhu   $a2, 0x26($sp)
/* 0043B9FC 24070001 */  li    $a3, 1
/* 0043BA00 0320F809 */  jalr  $t9
/* 0043BA04 00000000 */   nop   
/* 0043BA08 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043BA0C 02001025 */  move  $v0, $s0
/* 0043BA10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043BA14 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043BA18 03E00008 */  jr    $ra
/* 0043BA1C 27BD0020 */   addiu $sp, $sp, 0x20
    .type get_one_free_reg, @function
    .size get_one_free_reg, .-get_one_free_reg
    .end get_one_free_reg

glabel get_free_reg
    .ent get_free_reg
    # 0041C388 emit_branch_rill
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041FC98 dw_emit_rri
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 00424934 restore_from_temp
    # 004258CC get_dest
    # 0042670C loadstore
    # 00426B44 func_00426B44
    # 00426C54 func_00426C54
    # 00427BFC unaligned_loadstore_for_fp_word
    # 00427CE4 unaligned_loadstore_for_two_fp_w
    # 00428C38 copy
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
    # 0043D3F8 get_free_reg_special
/* 0043BA20 3C1C0FBE */  .cpload $t9
/* 0043BA24 279C4030 */  
/* 0043BA28 0399E021 */  
/* 0043BA2C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043BA30 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043BA34 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043BA38 10800013 */  beqz  $a0, .L0043BA88
/* 0043BA3C AFA50024 */   sw    $a1, 0x24($sp)
/* 0043BA40 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0043BA44 91CE0000 */  lbu   $t6, ($t6)
/* 0043BA48 15C0000F */  bnez  $t6, .L0043BA88
/* 0043BA4C 00000000 */   nop   
/* 0043BA50 908F0021 */  lbu   $t7, 0x21($a0)
/* 0043BA54 3C010501 */  lui   $at, 0x501
/* 0043BA58 31F8001F */  andi  $t8, $t7, 0x1f
/* 0043BA5C 2F190020 */  sltiu $t9, $t8, 0x20
/* 0043BA60 00194023 */  negu  $t0, $t9
/* 0043BA64 01014824 */  and   $t1, $t0, $at
/* 0043BA68 03095004 */  sllv  $t2, $t1, $t8
/* 0043BA6C 05410006 */  bgez  $t2, .L0043BA88
/* 0043BA70 00000000 */   nop   
/* 0043BA74 8F9984F4 */  lw    $t9, %call16(get_two_free_regs)($gp)
/* 0043BA78 0320F809 */  jalr  $t9
/* 0043BA7C 00000000 */   nop   
/* 0043BA80 10000005 */  b     .L0043BA98
/* 0043BA84 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043BA88:
/* 0043BA88 8F9984F8 */  lw    $t9, %call16(get_one_free_reg)($gp)
/* 0043BA8C 0320F809 */  jalr  $t9
/* 0043BA90 00000000 */   nop   
/* 0043BA94 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043BA98:
/* 0043BA98 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043BA9C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043BAA0 03E00008 */  jr    $ra
/* 0043BAA4 00000000 */   nop   
    .type get_free_reg, @function
    .size get_free_reg, .-get_free_reg
    .end get_free_reg

glabel get_free_fp_reg
    .ent get_free_fp_reg
    # 00424934 restore_from_temp
    # 004254B8 flt_reg
    # 0042567C func_0042567C
    # 004258CC get_dest
    # 004287AC eval_fp_min_max
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 00434878 eval_flt_flt_cvt
    # 0043D1A4 get_free_fp_reg_special
/* 0043BAA8 3C1C0FBE */  .cpload $t9
/* 0043BAAC 279C3FA8 */  
/* 0043BAB0 0399E021 */  
/* 0043BAB4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043BAB8 8F9984AC */  lw    $t9, %call16(list_is_empty)($gp)
/* 0043BABC AFB00014 */  sw    $s0, 0x14($sp)
/* 0043BAC0 8F908AFC */  lw     $s0, %got(fp_regs_free)($gp)
/* 0043BAC4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043BAC8 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043BACC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043BAD0 AFA50024 */  sw    $a1, 0x24($sp)
/* 0043BAD4 AFA60028 */  sw    $a2, 0x28($sp)
/* 0043BAD8 0320F809 */  jalr  $t9
/* 0043BADC 02002025 */   move  $a0, $s0
/* 0043BAE0 1040002B */  beqz  $v0, .L0043BB90
/* 0043BAE4 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0043BAE8 8F9984BC */  lw    $t9, %call16(remove_head)($gp)
/* 0043BAEC 8F848B00 */  lw     $a0, %got(fp_regs_used)($gp)
/* 0043BAF0 0320F809 */  jalr  $t9
/* 0043BAF4 00000000 */   nop   
/* 0043BAF8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043BAFC 305000FF */  andi  $s0, $v0, 0xff
/* 0043BB00 02002025 */  move  $a0, $s0
/* 0043BB04 8F8E89B8 */  lw     $t6, %got(isa)($gp)
/* 0043BB08 00107880 */  sll   $t7, $s0, 2
/* 0043BB0C 00106080 */  sll   $t4, $s0, 2
/* 0043BB10 91CE0000 */  lbu   $t6, ($t6)
/* 0043BB14 2DC10002 */  sltiu $at, $t6, 2
/* 0043BB18 1420000E */  bnez  $at, .L0043BB54
/* 0043BB1C 00000000 */   nop   
/* 0043BB20 8F988BCC */  lw     $t8, %got(regs)($gp)
/* 0043BB24 01F07823 */  subu  $t7, $t7, $s0
/* 0043BB28 000F7880 */  sll   $t7, $t7, 2
/* 0043BB2C 01F8C821 */  addu  $t9, $t7, $t8
/* 0043BB30 93280008 */  lbu   $t0, 8($t9)
/* 0043BB34 8F8A88F8 */  lw     $t2, %got(size_tab2)($gp)
/* 0043BB38 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043BB3C 00084880 */  sll   $t1, $t0, 2
/* 0043BB40 012A5821 */  addu  $t3, $t1, $t2
/* 0043BB44 0320F809 */  jalr  $t9
/* 0043BB48 8D650000 */   lw    $a1, ($t3)
/* 0043BB4C 10000039 */  b     .L0043BC34
/* 0043BB50 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043BB54:
/* 0043BB54 8F8D8BCC */  lw     $t5, %got(regs)($gp)
/* 0043BB58 01906023 */  subu  $t4, $t4, $s0
/* 0043BB5C 000C6080 */  sll   $t4, $t4, 2
/* 0043BB60 018D7021 */  addu  $t6, $t4, $t5
/* 0043BB64 91CF0008 */  lbu   $t7, 8($t6)
/* 0043BB68 8F9988F4 */  lw     $t9, %got(size_tab)($gp)
/* 0043BB6C 02002025 */  move  $a0, $s0
/* 0043BB70 000FC080 */  sll   $t8, $t7, 2
/* 0043BB74 03194021 */  addu  $t0, $t8, $t9
/* 0043BB78 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043BB7C 8D050000 */  lw    $a1, ($t0)
/* 0043BB80 0320F809 */  jalr  $t9
/* 0043BB84 00000000 */   nop   
/* 0043BB88 1000002A */  b     .L0043BC34
/* 0043BB8C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043BB90:
/* 0043BB90 8F9984BC */  lw    $t9, %call16(remove_head)($gp)
/* 0043BB94 02002025 */  move  $a0, $s0
/* 0043BB98 0320F809 */  jalr  $t9
/* 0043BB9C 00000000 */   nop   
/* 0043BBA0 304300FF */  andi  $v1, $v0, 0xff
/* 0043BBA4 2C690060 */  sltiu $t1, $v1, 0x60
/* 0043BBA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043BBAC 11200008 */  beqz  $t1, .L0043BBD0
/* 0043BBB0 305000FF */   andi  $s0, $v0, 0xff
/* 0043BBB4 8F8C8B8C */  lw     $t4, %got(ugen_fp_callee_saved)($gp)
/* 0043BBB8 00035143 */  sra   $t2, $v1, 5
/* 0043BBBC 000A5880 */  sll   $t3, $t2, 2
/* 0043BBC0 016C6821 */  addu  $t5, $t3, $t4
/* 0043BBC4 8DAE0000 */  lw    $t6, ($t5)
/* 0043BBC8 006E7804 */  sllv  $t7, $t6, $v1
/* 0043BBCC 29E90000 */  slti  $t1, $t7, 0
.L0043BBD0:
/* 0043BBD0 11200018 */  beqz  $t1, .L0043BC34
/* 0043BBD4 2C790020 */   sltiu $t9, $v1, 0x20
/* 0043BBD8 8F8B8B90 */  lw     $t3, %got(saved_regs)($gp)
/* 0043BBDC 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 0043BBE0 00604027 */  not   $t0, $v1
/* 0043BBE4 8D6B0000 */  lw    $t3, ($t3)
/* 0043BBE8 8F988B90 */  lw     $t8, %got(saved_regs)($gp)
/* 0043BBEC 01195004 */  sllv  $t2, $t9, $t0
/* 0043BBF0 016A6025 */  or    $t4, $t3, $t2
/* 0043BBF4 AC2C0000 */  sw    $t4, ($at)
/* 0043BBF8 8F180004 */  lw    $t8, 4($t8)
/* 0043BBFC 246DFFE0 */  addiu $t5, $v1, -0x20
/* 0043BC00 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 0043BC04 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0043BC08 8F8C8B90 */  lw     $t4, %got(saved_regs)($gp)
/* 0043BC0C 010E7804 */  sllv  $t7, $t6, $t0
/* 0043BC10 030F4825 */  or    $t1, $t8, $t7
/* 0043BC14 AC290004 */  sw    $t1, 4($at)
/* 0043BC18 8D8C0008 */  lw    $t4, 8($t4)
/* 0043BC1C 2479FFC0 */  addiu $t9, $v1, -0x40
/* 0043BC20 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 0043BC24 2F2B0020 */  sltiu $t3, $t9, 0x20
/* 0043BC28 010B5004 */  sllv  $t2, $t3, $t0
/* 0043BC2C 018A6825 */  or    $t5, $t4, $t2
/* 0043BC30 AC2D0008 */  sw    $t5, 8($at)
.L0043BC34:
/* 0043BC34 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043BC38 02002025 */  move  $a0, $s0
/* 0043BC3C 8F858B00 */  lw     $a1, %got(fp_regs_used)($gp)
/* 0043BC40 0320F809 */  jalr  $t9
/* 0043BC44 00000000 */   nop   
/* 0043BC48 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043BC4C 02002025 */  move  $a0, $s0
/* 0043BC50 8FA50020 */  lw    $a1, 0x20($sp)
/* 0043BC54 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043BC58 97A6002A */  lhu   $a2, 0x2a($sp)
/* 0043BC5C 93A70027 */  lbu   $a3, 0x27($sp)
/* 0043BC60 0320F809 */  jalr  $t9
/* 0043BC64 00000000 */   nop   
/* 0043BC68 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043BC6C 02001025 */  move  $v0, $s0
/* 0043BC70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043BC74 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043BC78 03E00008 */  jr    $ra
/* 0043BC7C 27BD0020 */   addiu $sp, $sp, 0x20
    .type get_free_fp_reg, @function
    .size get_free_fp_reg, .-get_free_fp_reg
    .end get_free_fp_reg

glabel content_of
    .ent content_of
    # 00441308 spill_to_temp
/* 0043BC80 3C1C0FBE */  .cpload $t9
/* 0043BC84 279C3DD0 */  
/* 0043BC88 0399E021 */  
/* 0043BC8C 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043BC90 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043BC94 00047080 */  sll   $t6, $a0, 2
/* 0043BC98 01C47023 */  subu  $t6, $t6, $a0
/* 0043BC9C 000E7080 */  sll   $t6, $t6, 2
/* 0043BCA0 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043BCA4 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043BCA8 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 0043BCAC 01CFC021 */  addu  $t8, $t6, $t7
/* 0043BCB0 8F030000 */  lw    $v1, ($t8)
/* 0043BCB4 24040004 */  li    $a0, 4
/* 0043BCB8 14600040 */  bnez  $v1, .L0043BDBC
/* 0043BCBC 00601025 */   move  $v0, $v1
/* 0043BCC0 8F998038 */  lw    $t9, %got(RO_1000BBD8)($gp)
/* 0043BCC4 24050363 */  li    $a1, 867
/* 0043BCC8 03A05025 */  move  $t2, $sp
/* 0043BCCC 2739BBD8 */  addiu $t9, %lo(RO_1000BBD8) # addiu $t9, $t9, -0x4428
/* 0043BCD0 272B0048 */  addiu $t3, $t9, 0x48
.L0043BCD4:
/* 0043BCD4 8B290000 */  lwl   $t1, ($t9)
/* 0043BCD8 9B290003 */  lwr   $t1, 3($t9)
/* 0043BCDC 2739000C */  addiu $t9, $t9, 0xc
/* 0043BCE0 254A000C */  addiu $t2, $t2, 0xc
/* 0043BCE4 A949FFFC */  swl   $t1, -4($t2)
/* 0043BCE8 B949FFFF */  swr   $t1, -1($t2)
/* 0043BCEC 8B28FFF8 */  lwl   $t0, -8($t9)
/* 0043BCF0 9B28FFFB */  lwr   $t0, -5($t9)
/* 0043BCF4 A9480000 */  swl   $t0, ($t2)
/* 0043BCF8 B9480003 */  swr   $t0, 3($t2)
/* 0043BCFC 8B29FFFC */  lwl   $t1, -4($t9)
/* 0043BD00 9B29FFFF */  lwr   $t1, -1($t9)
/* 0043BD04 A9490004 */  swl   $t1, 4($t2)
/* 0043BD08 172BFFF2 */  bne   $t9, $t3, .L0043BCD4
/* 0043BD0C B9490007 */   swr   $t1, 7($t2)
/* 0043BD10 8B290000 */  lwl   $t1, ($t9)
/* 0043BD14 9B290003 */  lwr   $t1, 3($t9)
/* 0043BD18 8F8C8038 */  lw    $t4, %got(RO_1000BB88)($gp)
/* 0043BD1C 03A07825 */  move  $t7, $sp
/* 0043BD20 A9490008 */  swl   $t1, 8($t2)
/* 0043BD24 B949000B */  swr   $t1, 0xb($t2)
/* 0043BD28 8B280004 */  lwl   $t0, 4($t9)
/* 0043BD2C 9B280007 */  lwr   $t0, 7($t9)
/* 0043BD30 258CBB88 */  addiu $t4, %lo(RO_1000BB88) # addiu $t4, $t4, -0x4478
/* 0043BD34 25980048 */  addiu $t8, $t4, 0x48
/* 0043BD38 A948000C */  swl   $t0, 0xc($t2)
/* 0043BD3C B948000F */  swr   $t0, 0xf($t2)
.L0043BD40:
/* 0043BD40 898E0000 */  lwl   $t6, ($t4)
/* 0043BD44 998E0003 */  lwr   $t6, 3($t4)
/* 0043BD48 258C000C */  addiu $t4, $t4, 0xc
/* 0043BD4C 25EF000C */  addiu $t7, $t7, 0xc
/* 0043BD50 A9EE004C */  swl   $t6, 0x4c($t7)
/* 0043BD54 B9EE004F */  swr   $t6, 0x4f($t7)
/* 0043BD58 898DFFF8 */  lwl   $t5, -8($t4)
/* 0043BD5C 998DFFFB */  lwr   $t5, -5($t4)
/* 0043BD60 A9ED0050 */  swl   $t5, 0x50($t7)
/* 0043BD64 B9ED0053 */  swr   $t5, 0x53($t7)
/* 0043BD68 898EFFFC */  lwl   $t6, -4($t4)
/* 0043BD6C 998EFFFF */  lwr   $t6, -1($t4)
/* 0043BD70 A9EE0054 */  swl   $t6, 0x54($t7)
/* 0043BD74 1598FFF2 */  bne   $t4, $t8, .L0043BD40
/* 0043BD78 B9EE0057 */   swr   $t6, 0x57($t7)
/* 0043BD7C 898E0000 */  lwl   $t6, ($t4)
/* 0043BD80 998E0003 */  lwr   $t6, 3($t4)
/* 0043BD84 A9EE0058 */  swl   $t6, 0x58($t7)
/* 0043BD88 B9EE005B */  swr   $t6, 0x5b($t7)
/* 0043BD8C 898D0004 */  lwl   $t5, 4($t4)
/* 0043BD90 998D0007 */  lwr   $t5, 7($t4)
/* 0043BD94 A9ED005C */  swl   $t5, 0x5c($t7)
/* 0043BD98 B9ED005F */  swr   $t5, 0x5f($t7)
/* 0043BD9C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043BDA0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043BDA4 8FA60008 */  lw    $a2, 8($sp)
/* 0043BDA8 0320F809 */  jalr  $t9
/* 0043BDAC 00000000 */   nop   
/* 0043BDB0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043BDB4 10000001 */  b     .L0043BDBC
/* 0043BDB8 8FA200BC */   lw    $v0, 0xbc($sp)
.L0043BDBC:
/* 0043BDBC 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043BDC0 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043BDC4 03E00008 */  jr    $ra
/* 0043BDC8 00000000 */   nop   
    .type content_of, @function
    .size content_of, .-content_of
    .end content_of

glabel inc_usage
    .ent inc_usage
    # 0042BDAC eval
    # 0043AE78 get_reg1
    # 0043B30C get_fp_reg1
/* 0043BDCC 3C1C0FBE */  .cpload $t9
/* 0043BDD0 279C3C84 */  
/* 0043BDD4 0399E021 */  
/* 0043BDD8 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043BDDC 00047080 */  sll   $t6, $a0, 2
/* 0043BDE0 01C47023 */  subu  $t6, $t6, $a0
/* 0043BDE4 000E7080 */  sll   $t6, $t6, 2
/* 0043BDE8 01CF1021 */  addu  $v0, $t6, $t7
/* 0043BDEC 94580004 */  lhu   $t8, 4($v0)
/* 0043BDF0 AFA40000 */  sw    $a0, ($sp)
/* 0043BDF4 AFA50004 */  sw    $a1, 4($sp)
/* 0043BDF8 0305C821 */  addu  $t9, $t8, $a1
/* 0043BDFC 03E00008 */  jr    $ra
/* 0043BE00 A4590004 */   sh    $t9, 4($v0)
    .type inc_usage, @function
    .size inc_usage, .-inc_usage
    .end inc_usage

glabel dec_usage
    .ent dec_usage
    # 0043C098 free_reg
    # 0043C410 free_fp_reg
/* 0043BE04 3C1C0FBE */  .cpload $t9
/* 0043BE08 279C3C4C */  
/* 0043BE0C 0399E021 */  
/* 0043BE10 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043BE14 00047080 */  sll   $t6, $a0, 2
/* 0043BE18 01C47023 */  subu  $t6, $t6, $a0
/* 0043BE1C 000E7080 */  sll   $t6, $t6, 2
/* 0043BE20 01CF1821 */  addu  $v1, $t6, $t7
/* 0043BE24 94620004 */  lhu   $v0, 4($v1)
/* 0043BE28 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043BE2C AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043BE30 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043BE34 14400041 */  bnez  $v0, .L0043BF3C
/* 0043BE38 AFA400C0 */   sw    $a0, 0xc0($sp)
/* 0043BE3C 8F988038 */  lw    $t8, %got(RO_1000BD18)($gp)
/* 0043BE40 24040004 */  li    $a0, 4
/* 0043BE44 24050374 */  li    $a1, 884
/* 0043BE48 2718BD18 */  addiu $t8, %lo(RO_1000BD18) # addiu $t8, $t8, -0x42e8
/* 0043BE4C 270A0048 */  addiu $t2, $t8, 0x48
/* 0043BE50 03A04825 */  move  $t1, $sp
.L0043BE54:
/* 0043BE54 8B080000 */  lwl   $t0, ($t8)
/* 0043BE58 9B080003 */  lwr   $t0, 3($t8)
/* 0043BE5C 2718000C */  addiu $t8, $t8, 0xc
/* 0043BE60 2529000C */  addiu $t1, $t1, 0xc
/* 0043BE64 A928FFFC */  swl   $t0, -4($t1)
/* 0043BE68 B928FFFF */  swr   $t0, -1($t1)
/* 0043BE6C 8B19FFF8 */  lwl   $t9, -8($t8)
/* 0043BE70 9B19FFFB */  lwr   $t9, -5($t8)
/* 0043BE74 A9390000 */  swl   $t9, ($t1)
/* 0043BE78 B9390003 */  swr   $t9, 3($t1)
/* 0043BE7C 8B08FFFC */  lwl   $t0, -4($t8)
/* 0043BE80 9B08FFFF */  lwr   $t0, -1($t8)
/* 0043BE84 A9280004 */  swl   $t0, 4($t1)
/* 0043BE88 170AFFF2 */  bne   $t8, $t2, .L0043BE54
/* 0043BE8C B9280007 */   swr   $t0, 7($t1)
/* 0043BE90 8B080000 */  lwl   $t0, ($t8)
/* 0043BE94 9B080003 */  lwr   $t0, 3($t8)
/* 0043BE98 8F8B8038 */  lw    $t3, %got(RO_1000BCC8)($gp)
/* 0043BE9C 03A07025 */  move  $t6, $sp
/* 0043BEA0 A9280008 */  swl   $t0, 8($t1)
/* 0043BEA4 B928000B */  swr   $t0, 0xb($t1)
/* 0043BEA8 8B190004 */  lwl   $t9, 4($t8)
/* 0043BEAC 9B190007 */  lwr   $t9, 7($t8)
/* 0043BEB0 256BBCC8 */  addiu $t3, %lo(RO_1000BCC8) # addiu $t3, $t3, -0x4338
/* 0043BEB4 256F0048 */  addiu $t7, $t3, 0x48
/* 0043BEB8 A939000C */  swl   $t9, 0xc($t1)
/* 0043BEBC B939000F */  swr   $t9, 0xf($t1)
.L0043BEC0:
/* 0043BEC0 896D0000 */  lwl   $t5, ($t3)
/* 0043BEC4 996D0003 */  lwr   $t5, 3($t3)
/* 0043BEC8 256B000C */  addiu $t3, $t3, 0xc
/* 0043BECC 25CE000C */  addiu $t6, $t6, 0xc
/* 0043BED0 A9CD004C */  swl   $t5, 0x4c($t6)
/* 0043BED4 B9CD004F */  swr   $t5, 0x4f($t6)
/* 0043BED8 896CFFF8 */  lwl   $t4, -8($t3)
/* 0043BEDC 996CFFFB */  lwr   $t4, -5($t3)
/* 0043BEE0 A9CC0050 */  swl   $t4, 0x50($t6)
/* 0043BEE4 B9CC0053 */  swr   $t4, 0x53($t6)
/* 0043BEE8 896DFFFC */  lwl   $t5, -4($t3)
/* 0043BEEC 996DFFFF */  lwr   $t5, -1($t3)
/* 0043BEF0 A9CD0054 */  swl   $t5, 0x54($t6)
/* 0043BEF4 156FFFF2 */  bne   $t3, $t7, .L0043BEC0
/* 0043BEF8 B9CD0057 */   swr   $t5, 0x57($t6)
/* 0043BEFC 896D0000 */  lwl   $t5, ($t3)
/* 0043BF00 996D0003 */  lwr   $t5, 3($t3)
/* 0043BF04 A9CD0058 */  swl   $t5, 0x58($t6)
/* 0043BF08 B9CD005B */  swr   $t5, 0x5b($t6)
/* 0043BF0C 896C0004 */  lwl   $t4, 4($t3)
/* 0043BF10 996C0007 */  lwr   $t4, 7($t3)
/* 0043BF14 A9CC005C */  swl   $t4, 0x5c($t6)
/* 0043BF18 B9CC005F */  swr   $t4, 0x5f($t6)
/* 0043BF1C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043BF20 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043BF24 8FA60008 */  lw    $a2, 8($sp)
/* 0043BF28 0320F809 */  jalr  $t9
/* 0043BF2C AFA300B8 */   sw    $v1, 0xb8($sp)
/* 0043BF30 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043BF34 10000003 */  b     .L0043BF44
/* 0043BF38 8FA300B8 */   lw    $v1, 0xb8($sp)
.L0043BF3C:
/* 0043BF3C 244AFFFF */  addiu $t2, $v0, -1
/* 0043BF40 A46A0004 */  sh    $t2, 4($v1)
.L0043BF44:
/* 0043BF44 8F9889D8 */  lw     $t8, %got(opcode_arch)($gp)
/* 0043BF48 93180000 */  lbu   $t8, ($t8)
/* 0043BF4C 5700004F */  bnel  $t8, $zero, .L0043C08C
/* 0043BF50 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 0043BF54 90690008 */  lbu   $t1, 8($v1)
/* 0043BF58 24010006 */  li    $at, 6
/* 0043BF5C 5521004B */  bnel  $t1, $at, .L0043C08C
/* 0043BF60 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 0043BF64 90620009 */  lbu   $v0, 9($v1)
/* 0043BF68 8F888BCC */  lw     $t0, %got(regs)($gp)
/* 0043BF6C 03A06025 */  move  $t4, $sp
/* 0043BF70 0002C880 */  sll   $t9, $v0, 2
/* 0043BF74 0322C823 */  subu  $t9, $t9, $v0
/* 0043BF78 0019C880 */  sll   $t9, $t9, 2
/* 0043BF7C 03282021 */  addu  $a0, $t9, $t0
/* 0043BF80 94850004 */  lhu   $a1, 4($a0)
/* 0043BF84 14A0003F */  bnez  $a1, .L0043C084
/* 0043BF88 24ADFFFF */   addiu $t5, $a1, -1
/* 0043BF8C 8F8F8038 */  lw    $t7, %got(RO_1000BC78)($gp)
/* 0043BF90 24040004 */  li    $a0, 4
/* 0043BF94 2405037B */  li    $a1, 891
/* 0043BF98 25EFBC78 */  addiu $t7, %lo(RO_1000BC78) # addiu $t7, $t7, -0x4388
/* 0043BF9C 25ED0048 */  addiu $t5, $t7, 0x48
.L0043BFA0:
/* 0043BFA0 89EE0000 */  lwl   $t6, ($t7)
/* 0043BFA4 99EE0003 */  lwr   $t6, 3($t7)
/* 0043BFA8 25EF000C */  addiu $t7, $t7, 0xc
/* 0043BFAC 258C000C */  addiu $t4, $t4, 0xc
/* 0043BFB0 A98EFFFC */  swl   $t6, -4($t4)
/* 0043BFB4 B98EFFFF */  swr   $t6, -1($t4)
/* 0043BFB8 89EBFFF8 */  lwl   $t3, -8($t7)
/* 0043BFBC 99EBFFFB */  lwr   $t3, -5($t7)
/* 0043BFC0 A98B0000 */  swl   $t3, ($t4)
/* 0043BFC4 B98B0003 */  swr   $t3, 3($t4)
/* 0043BFC8 89EEFFFC */  lwl   $t6, -4($t7)
/* 0043BFCC 99EEFFFF */  lwr   $t6, -1($t7)
/* 0043BFD0 A98E0004 */  swl   $t6, 4($t4)
/* 0043BFD4 15EDFFF2 */  bne   $t7, $t5, .L0043BFA0
/* 0043BFD8 B98E0007 */   swr   $t6, 7($t4)
/* 0043BFDC 89EE0000 */  lwl   $t6, ($t7)
/* 0043BFE0 99EE0003 */  lwr   $t6, 3($t7)
/* 0043BFE4 8F8A8038 */  lw    $t2, %got(RO_1000BC28)($gp)
/* 0043BFE8 03A0C825 */  move  $t9, $sp
/* 0043BFEC A98E0008 */  swl   $t6, 8($t4)
/* 0043BFF0 B98E000B */  swr   $t6, 0xb($t4)
/* 0043BFF4 89EB0004 */  lwl   $t3, 4($t7)
/* 0043BFF8 99EB0007 */  lwr   $t3, 7($t7)
/* 0043BFFC 254ABC28 */  addiu $t2, %lo(RO_1000BC28) # addiu $t2, $t2, -0x43d8
/* 0043C000 25480048 */  addiu $t0, $t2, 0x48
/* 0043C004 A98B000C */  swl   $t3, 0xc($t4)
/* 0043C008 B98B000F */  swr   $t3, 0xf($t4)
.L0043C00C:
/* 0043C00C 89490000 */  lwl   $t1, ($t2)
/* 0043C010 99490003 */  lwr   $t1, 3($t2)
/* 0043C014 254A000C */  addiu $t2, $t2, 0xc
/* 0043C018 2739000C */  addiu $t9, $t9, 0xc
/* 0043C01C AB29004C */  swl   $t1, 0x4c($t9)
/* 0043C020 BB29004F */  swr   $t1, 0x4f($t9)
/* 0043C024 8958FFF8 */  lwl   $t8, -8($t2)
/* 0043C028 9958FFFB */  lwr   $t8, -5($t2)
/* 0043C02C AB380050 */  swl   $t8, 0x50($t9)
/* 0043C030 BB380053 */  swr   $t8, 0x53($t9)
/* 0043C034 8949FFFC */  lwl   $t1, -4($t2)
/* 0043C038 9949FFFF */  lwr   $t1, -1($t2)
/* 0043C03C AB290054 */  swl   $t1, 0x54($t9)
/* 0043C040 1548FFF2 */  bne   $t2, $t0, .L0043C00C
/* 0043C044 BB290057 */   swr   $t1, 0x57($t9)
/* 0043C048 89490000 */  lwl   $t1, ($t2)
/* 0043C04C 99490003 */  lwr   $t1, 3($t2)
/* 0043C050 AB290058 */  swl   $t1, 0x58($t9)
/* 0043C054 BB29005B */  swr   $t1, 0x5b($t9)
/* 0043C058 89580004 */  lwl   $t8, 4($t2)
/* 0043C05C 99580007 */  lwr   $t8, 7($t2)
/* 0043C060 AB38005C */  swl   $t8, 0x5c($t9)
/* 0043C064 BB38005F */  swr   $t8, 0x5f($t9)
/* 0043C068 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043C06C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043C070 8FA60008 */  lw    $a2, 8($sp)
/* 0043C074 0320F809 */  jalr  $t9
/* 0043C078 00000000 */   nop   
/* 0043C07C 10000002 */  b     .L0043C088
/* 0043C080 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043C084:
/* 0043C084 A48D0004 */  sh    $t5, 4($a0)
.L0043C088:
/* 0043C088 8FBF00B4 */  lw    $ra, 0xb4($sp)
.L0043C08C:
/* 0043C08C 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043C090 03E00008 */  jr    $ra
/* 0043C094 00000000 */   nop   
    .type dec_usage, @function
    .size dec_usage, .-dec_usage
    .end dec_usage

glabel free_reg
    .ent free_reg
    # 0041C388 emit_branch_rill
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041FC98 dw_emit_rri
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 00424F70 reg
    # 00425140 binary_regs
    # 0042670C loadstore
    # 00426B44 func_00426B44
    # 00426C54 func_00426C54
    # 00427BFC unaligned_loadstore_for_fp_word
    # 00427CE4 unaligned_loadstore_for_two_fp_w
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
/* 0043C098 3C1C0FBE */  .cpload $t9
/* 0043C09C 279C39B8 */  
/* 0043C0A0 0399E021 */  
/* 0043C0A4 8F99850C */  lw    $t9, %call16(dec_usage)($gp)
/* 0043C0A8 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043C0AC AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043C0B0 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 0043C0B4 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043C0B8 0320F809 */  jalr  $t9
/* 0043C0BC 93A400C3 */   lbu   $a0, 0xc3($sp)
/* 0043C0C0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C0C4 93A400C3 */  lbu   $a0, 0xc3($sp)
/* 0043C0C8 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043C0CC 00047080 */  sll   $t6, $a0, 2
/* 0043C0D0 01C47023 */  subu  $t6, $t6, $a0
/* 0043C0D4 000E7080 */  sll   $t6, $t6, 2
/* 0043C0D8 01CF1821 */  addu  $v1, $t6, $t7
/* 0043C0DC 94780004 */  lhu   $t8, 4($v1)
/* 0043C0E0 570000C8 */  bnel  $t8, $zero, .L0043C404
/* 0043C0E4 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 0043C0E8 90790007 */  lbu   $t9, 7($v1)
/* 0043C0EC 13200050 */  beqz  $t9, .L0043C230
/* 0043C0F0 00000000 */   nop   
/* 0043C0F4 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043C0F8 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043C0FC AFA300B8 */  sw    $v1, 0xb8($sp)
/* 0043C100 0320F809 */  jalr  $t9
/* 0043C104 00000000 */   nop   
/* 0043C108 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C10C 14400040 */  bnez  $v0, .L0043C210
/* 0043C110 8FA300B8 */   lw    $v1, 0xb8($sp)
/* 0043C114 8F888038 */  lw    $t0, %got(RO_1000BE58)($gp)
/* 0043C118 24040004 */  li    $a0, 4
/* 0043C11C 2405038B */  li    $a1, 907
/* 0043C120 2508BE58 */  addiu $t0, %lo(RO_1000BE58) # addiu $t0, $t0, -0x41a8
/* 0043C124 250C0048 */  addiu $t4, $t0, 0x48
/* 0043C128 03A05825 */  move  $t3, $sp
.L0043C12C:
/* 0043C12C 890A0000 */  lwl   $t2, ($t0)
/* 0043C130 990A0003 */  lwr   $t2, 3($t0)
/* 0043C134 2508000C */  addiu $t0, $t0, 0xc
/* 0043C138 256B000C */  addiu $t3, $t3, 0xc
/* 0043C13C A96AFFFC */  swl   $t2, -4($t3)
/* 0043C140 B96AFFFF */  swr   $t2, -1($t3)
/* 0043C144 8909FFF8 */  lwl   $t1, -8($t0)
/* 0043C148 9909FFFB */  lwr   $t1, -5($t0)
/* 0043C14C A9690000 */  swl   $t1, ($t3)
/* 0043C150 B9690003 */  swr   $t1, 3($t3)
/* 0043C154 890AFFFC */  lwl   $t2, -4($t0)
/* 0043C158 990AFFFF */  lwr   $t2, -1($t0)
/* 0043C15C A96A0004 */  swl   $t2, 4($t3)
/* 0043C160 150CFFF2 */  bne   $t0, $t4, .L0043C12C
/* 0043C164 B96A0007 */   swr   $t2, 7($t3)
/* 0043C168 890A0000 */  lwl   $t2, ($t0)
/* 0043C16C 990A0003 */  lwr   $t2, 3($t0)
/* 0043C170 8F8D8038 */  lw    $t5, %got(RO_1000BE08)($gp)
/* 0043C174 03A0C025 */  move  $t8, $sp
/* 0043C178 A96A0008 */  swl   $t2, 8($t3)
/* 0043C17C B96A000B */  swr   $t2, 0xb($t3)
/* 0043C180 89090004 */  lwl   $t1, 4($t0)
/* 0043C184 99090007 */  lwr   $t1, 7($t0)
/* 0043C188 25ADBE08 */  addiu $t5, %lo(RO_1000BE08) # addiu $t5, $t5, -0x41f8
/* 0043C18C 25B90048 */  addiu $t9, $t5, 0x48
/* 0043C190 A969000C */  swl   $t1, 0xc($t3)
/* 0043C194 B969000F */  swr   $t1, 0xf($t3)
.L0043C198:
/* 0043C198 89AF0000 */  lwl   $t7, ($t5)
/* 0043C19C 99AF0003 */  lwr   $t7, 3($t5)
/* 0043C1A0 25AD000C */  addiu $t5, $t5, 0xc
/* 0043C1A4 2718000C */  addiu $t8, $t8, 0xc
/* 0043C1A8 AB0F004C */  swl   $t7, 0x4c($t8)
/* 0043C1AC BB0F004F */  swr   $t7, 0x4f($t8)
/* 0043C1B0 89AEFFF8 */  lwl   $t6, -8($t5)
/* 0043C1B4 99AEFFFB */  lwr   $t6, -5($t5)
/* 0043C1B8 AB0E0050 */  swl   $t6, 0x50($t8)
/* 0043C1BC BB0E0053 */  swr   $t6, 0x53($t8)
/* 0043C1C0 89AFFFFC */  lwl   $t7, -4($t5)
/* 0043C1C4 99AFFFFF */  lwr   $t7, -1($t5)
/* 0043C1C8 AB0F0054 */  swl   $t7, 0x54($t8)
/* 0043C1CC 15B9FFF2 */  bne   $t5, $t9, .L0043C198
/* 0043C1D0 BB0F0057 */   swr   $t7, 0x57($t8)
/* 0043C1D4 89AF0000 */  lwl   $t7, ($t5)
/* 0043C1D8 99AF0003 */  lwr   $t7, 3($t5)
/* 0043C1DC AB0F0058 */  swl   $t7, 0x58($t8)
/* 0043C1E0 BB0F005B */  swr   $t7, 0x5b($t8)
/* 0043C1E4 89AE0004 */  lwl   $t6, 4($t5)
/* 0043C1E8 99AE0007 */  lwr   $t6, 7($t5)
/* 0043C1EC AB0E005C */  swl   $t6, 0x5c($t8)
/* 0043C1F0 BB0E005F */  swr   $t6, 0x5f($t8)
/* 0043C1F4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043C1F8 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043C1FC 8FA60008 */  lw    $a2, 8($sp)
/* 0043C200 0320F809 */  jalr  $t9
/* 0043C204 00000000 */   nop   
/* 0043C208 1000007D */  b     .L0043C400
/* 0043C20C 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043C210:
/* 0043C210 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043C214 93A400C3 */  lbu   $a0, 0xc3($sp)
/* 0043C218 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043C21C 0320F809 */  jalr  $t9
/* 0043C220 AFA300B8 */   sw    $v1, 0xb8($sp)
/* 0043C224 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C228 8FA300B8 */  lw    $v1, 0xb8($sp)
/* 0043C22C 93A400C3 */  lbu   $a0, 0xc3($sp)
.L0043C230:
/* 0043C230 8F8C89D8 */  lw     $t4, %got(opcode_arch)($gp)
/* 0043C234 918C0000 */  lbu   $t4, ($t4)
/* 0043C238 1580006B */  bnez  $t4, .L0043C3E8
/* 0043C23C 00000000 */   nop   
/* 0043C240 90680008 */  lbu   $t0, 8($v1)
/* 0043C244 24010006 */  li    $at, 6
/* 0043C248 00002825 */  move  $a1, $zero
/* 0043C24C 15010066 */  bne   $t0, $at, .L0043C3E8
/* 0043C250 00000000 */   nop   
/* 0043C254 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043C258 00003025 */  move  $a2, $zero
/* 0043C25C 24070001 */  li    $a3, 1
/* 0043C260 0320F809 */  jalr  $t9
/* 0043C264 AFA300B8 */   sw    $v1, 0xb8($sp)
/* 0043C268 8FA300B8 */  lw    $v1, 0xb8($sp)
/* 0043C26C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C270 90640009 */  lbu   $a0, 9($v1)
/* 0043C274 8F898BCC */  lw     $t1, %got(regs)($gp)
/* 0043C278 00045880 */  sll   $t3, $a0, 2
/* 0043C27C 01645823 */  subu  $t3, $t3, $a0
/* 0043C280 000B5880 */  sll   $t3, $t3, 2
/* 0043C284 01695021 */  addu  $t2, $t3, $t1
/* 0043C288 91590007 */  lbu   $t9, 7($t2)
/* 0043C28C 1320004F */  beqz  $t9, .L0043C3CC
/* 0043C290 00000000 */   nop   
/* 0043C294 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043C298 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043C29C A3A400BF */  sb    $a0, 0xbf($sp)
/* 0043C2A0 0320F809 */  jalr  $t9
/* 0043C2A4 00000000 */   nop   
/* 0043C2A8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C2AC 14400040 */  bnez  $v0, .L0043C3B0
/* 0043C2B0 93A400BF */   lbu   $a0, 0xbf($sp)
/* 0043C2B4 8F8D8038 */  lw    $t5, %got(RO_1000BDB8)($gp)
/* 0043C2B8 24040004 */  li    $a0, 4
/* 0043C2BC 24050395 */  li    $a1, 917
/* 0043C2C0 25ADBDB8 */  addiu $t5, %lo(RO_1000BDB8) # addiu $t5, $t5, -0x4248
/* 0043C2C4 25AC0048 */  addiu $t4, $t5, 0x48
/* 0043C2C8 03A07825 */  move  $t7, $sp
.L0043C2CC:
/* 0043C2CC 89AE0000 */  lwl   $t6, ($t5)
/* 0043C2D0 99AE0003 */  lwr   $t6, 3($t5)
/* 0043C2D4 25AD000C */  addiu $t5, $t5, 0xc
/* 0043C2D8 25EF000C */  addiu $t7, $t7, 0xc
/* 0043C2DC A9EEFFFC */  swl   $t6, -4($t7)
/* 0043C2E0 B9EEFFFF */  swr   $t6, -1($t7)
/* 0043C2E4 89B8FFF8 */  lwl   $t8, -8($t5)
/* 0043C2E8 99B8FFFB */  lwr   $t8, -5($t5)
/* 0043C2EC A9F80000 */  swl   $t8, ($t7)
/* 0043C2F0 B9F80003 */  swr   $t8, 3($t7)
/* 0043C2F4 89AEFFFC */  lwl   $t6, -4($t5)
/* 0043C2F8 99AEFFFF */  lwr   $t6, -1($t5)
/* 0043C2FC A9EE0004 */  swl   $t6, 4($t7)
/* 0043C300 15ACFFF2 */  bne   $t5, $t4, .L0043C2CC
/* 0043C304 B9EE0007 */   swr   $t6, 7($t7)
/* 0043C308 89AE0000 */  lwl   $t6, ($t5)
/* 0043C30C 99AE0003 */  lwr   $t6, 3($t5)
/* 0043C310 8F888038 */  lw    $t0, %got(RO_1000BD68)($gp)
/* 0043C314 03A05025 */  move  $t2, $sp
/* 0043C318 A9EE0008 */  swl   $t6, 8($t7)
/* 0043C31C B9EE000B */  swr   $t6, 0xb($t7)
/* 0043C320 89B80004 */  lwl   $t8, 4($t5)
/* 0043C324 99B80007 */  lwr   $t8, 7($t5)
/* 0043C328 2508BD68 */  addiu $t0, %lo(RO_1000BD68) # addiu $t0, $t0, -0x4298
/* 0043C32C 25190048 */  addiu $t9, $t0, 0x48
/* 0043C330 A9F8000C */  swl   $t8, 0xc($t7)
/* 0043C334 B9F8000F */  swr   $t8, 0xf($t7)
.L0043C338:
/* 0043C338 89090000 */  lwl   $t1, ($t0)
/* 0043C33C 99090003 */  lwr   $t1, 3($t0)
/* 0043C340 2508000C */  addiu $t0, $t0, 0xc
/* 0043C344 254A000C */  addiu $t2, $t2, 0xc
/* 0043C348 A949004C */  swl   $t1, 0x4c($t2)
/* 0043C34C B949004F */  swr   $t1, 0x4f($t2)
/* 0043C350 890BFFF8 */  lwl   $t3, -8($t0)
/* 0043C354 990BFFFB */  lwr   $t3, -5($t0)
/* 0043C358 A94B0050 */  swl   $t3, 0x50($t2)
/* 0043C35C B94B0053 */  swr   $t3, 0x53($t2)
/* 0043C360 8909FFFC */  lwl   $t1, -4($t0)
/* 0043C364 9909FFFF */  lwr   $t1, -1($t0)
/* 0043C368 A9490054 */  swl   $t1, 0x54($t2)
/* 0043C36C 1519FFF2 */  bne   $t0, $t9, .L0043C338
/* 0043C370 B9490057 */   swr   $t1, 0x57($t2)
/* 0043C374 89090000 */  lwl   $t1, ($t0)
/* 0043C378 99090003 */  lwr   $t1, 3($t0)
/* 0043C37C A9490058 */  swl   $t1, 0x58($t2)
/* 0043C380 B949005B */  swr   $t1, 0x5b($t2)
/* 0043C384 890B0004 */  lwl   $t3, 4($t0)
/* 0043C388 990B0007 */  lwr   $t3, 7($t0)
/* 0043C38C A94B005C */  swl   $t3, 0x5c($t2)
/* 0043C390 B94B005F */  swr   $t3, 0x5f($t2)
/* 0043C394 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043C398 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043C39C 8FA60008 */  lw    $a2, 8($sp)
/* 0043C3A0 0320F809 */  jalr  $t9
/* 0043C3A4 00000000 */   nop   
/* 0043C3A8 10000015 */  b     .L0043C400
/* 0043C3AC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043C3B0:
/* 0043C3B0 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043C3B4 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043C3B8 A3A400BF */  sb    $a0, 0xbf($sp)
/* 0043C3BC 0320F809 */  jalr  $t9
/* 0043C3C0 00000000 */   nop   
/* 0043C3C4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C3C8 93A400BF */  lbu   $a0, 0xbf($sp)
.L0043C3CC:
/* 0043C3CC 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043C3D0 00002825 */  move  $a1, $zero
/* 0043C3D4 00003025 */  move  $a2, $zero
/* 0043C3D8 0320F809 */  jalr  $t9
/* 0043C3DC 24070001 */   li    $a3, 1
/* 0043C3E0 10000007 */  b     .L0043C400
/* 0043C3E4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043C3E8:
/* 0043C3E8 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043C3EC 00002825 */  move  $a1, $zero
/* 0043C3F0 00003025 */  move  $a2, $zero
/* 0043C3F4 0320F809 */  jalr  $t9
/* 0043C3F8 24070001 */   li    $a3, 1
/* 0043C3FC 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043C400:
/* 0043C400 8FBF00B4 */  lw    $ra, 0xb4($sp)
.L0043C404:
/* 0043C404 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043C408 03E00008 */  jr    $ra
/* 0043C40C 00000000 */   nop   
    .type free_reg, @function
    .size free_reg, .-free_reg
    .end free_reg

glabel free_fp_reg
    .ent free_fp_reg
    # 00424F70 reg
    # 00425140 binary_regs
    # 004254B8 flt_reg
    # 0042567C func_0042567C
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 00434878 eval_flt_flt_cvt
/* 0043C410 3C1C0FBE */  .cpload $t9
/* 0043C414 279C3640 */  
/* 0043C418 0399E021 */  
/* 0043C41C 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 0043C420 8F99850C */  lw    $t9, %call16(dec_usage)($gp)
/* 0043C424 AFB000AC */  sw    $s0, 0xac($sp)
/* 0043C428 309000FF */  andi  $s0, $a0, 0xff
/* 0043C42C AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043C430 AFA400B8 */  sw    $a0, 0xb8($sp)
/* 0043C434 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043C438 AFA500BC */  sw    $a1, 0xbc($sp)
/* 0043C43C 0320F809 */  jalr  $t9
/* 0043C440 02002025 */   move  $a0, $s0
/* 0043C444 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C448 00107080 */  sll   $t6, $s0, 2
/* 0043C44C 01D07023 */  subu  $t6, $t6, $s0
/* 0043C450 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043C454 000E7080 */  sll   $t6, $t6, 2
/* 0043C458 01CF1021 */  addu  $v0, $t6, $t7
/* 0043C45C 94580004 */  lhu   $t8, 4($v0)
/* 0043C460 57000058 */  bnel  $t8, $zero, .L0043C5C4
/* 0043C464 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 0043C468 90590007 */  lbu   $t9, 7($v0)
/* 0043C46C 1320004D */  beqz  $t9, .L0043C5A4
/* 0043C470 00000000 */   nop   
/* 0043C474 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043C478 02002025 */  move  $a0, $s0
/* 0043C47C 8F858B00 */  lw     $a1, %got(fp_regs_used)($gp)
/* 0043C480 0320F809 */  jalr  $t9
/* 0043C484 00000000 */   nop   
/* 0043C488 14400040 */  bnez  $v0, .L0043C58C
/* 0043C48C 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0043C490 8F888038 */  lw    $t0, %got(RO_1000BEF8)($gp)
/* 0043C494 24040004 */  li    $a0, 4
/* 0043C498 240503A9 */  li    $a1, 937
/* 0043C49C 2508BEF8 */  addiu $t0, %lo(RO_1000BEF8) # addiu $t0, $t0, -0x4108
/* 0043C4A0 250C0048 */  addiu $t4, $t0, 0x48
/* 0043C4A4 03A05825 */  move  $t3, $sp
.L0043C4A8:
/* 0043C4A8 890A0000 */  lwl   $t2, ($t0)
/* 0043C4AC 990A0003 */  lwr   $t2, 3($t0)
/* 0043C4B0 2508000C */  addiu $t0, $t0, 0xc
/* 0043C4B4 256B000C */  addiu $t3, $t3, 0xc
/* 0043C4B8 A96AFFFC */  swl   $t2, -4($t3)
/* 0043C4BC B96AFFFF */  swr   $t2, -1($t3)
/* 0043C4C0 8909FFF8 */  lwl   $t1, -8($t0)
/* 0043C4C4 9909FFFB */  lwr   $t1, -5($t0)
/* 0043C4C8 A9690000 */  swl   $t1, ($t3)
/* 0043C4CC B9690003 */  swr   $t1, 3($t3)
/* 0043C4D0 890AFFFC */  lwl   $t2, -4($t0)
/* 0043C4D4 990AFFFF */  lwr   $t2, -1($t0)
/* 0043C4D8 A96A0004 */  swl   $t2, 4($t3)
/* 0043C4DC 150CFFF2 */  bne   $t0, $t4, .L0043C4A8
/* 0043C4E0 B96A0007 */   swr   $t2, 7($t3)
/* 0043C4E4 890A0000 */  lwl   $t2, ($t0)
/* 0043C4E8 990A0003 */  lwr   $t2, 3($t0)
/* 0043C4EC 8F8D8038 */  lw    $t5, %got(RO_1000BEA8)($gp)
/* 0043C4F0 03A0C025 */  move  $t8, $sp
/* 0043C4F4 A96A0008 */  swl   $t2, 8($t3)
/* 0043C4F8 B96A000B */  swr   $t2, 0xb($t3)
/* 0043C4FC 89090004 */  lwl   $t1, 4($t0)
/* 0043C500 99090007 */  lwr   $t1, 7($t0)
/* 0043C504 25ADBEA8 */  addiu $t5, %lo(RO_1000BEA8) # addiu $t5, $t5, -0x4158
/* 0043C508 25B90048 */  addiu $t9, $t5, 0x48
/* 0043C50C A969000C */  swl   $t1, 0xc($t3)
/* 0043C510 B969000F */  swr   $t1, 0xf($t3)
.L0043C514:
/* 0043C514 89AF0000 */  lwl   $t7, ($t5)
/* 0043C518 99AF0003 */  lwr   $t7, 3($t5)
/* 0043C51C 25AD000C */  addiu $t5, $t5, 0xc
/* 0043C520 2718000C */  addiu $t8, $t8, 0xc
/* 0043C524 AB0F004C */  swl   $t7, 0x4c($t8)
/* 0043C528 BB0F004F */  swr   $t7, 0x4f($t8)
/* 0043C52C 89AEFFF8 */  lwl   $t6, -8($t5)
/* 0043C530 99AEFFFB */  lwr   $t6, -5($t5)
/* 0043C534 AB0E0050 */  swl   $t6, 0x50($t8)
/* 0043C538 BB0E0053 */  swr   $t6, 0x53($t8)
/* 0043C53C 89AFFFFC */  lwl   $t7, -4($t5)
/* 0043C540 99AFFFFF */  lwr   $t7, -1($t5)
/* 0043C544 AB0F0054 */  swl   $t7, 0x54($t8)
/* 0043C548 15B9FFF2 */  bne   $t5, $t9, .L0043C514
/* 0043C54C BB0F0057 */   swr   $t7, 0x57($t8)
/* 0043C550 89AF0000 */  lwl   $t7, ($t5)
/* 0043C554 99AF0003 */  lwr   $t7, 3($t5)
/* 0043C558 AB0F0058 */  swl   $t7, 0x58($t8)
/* 0043C55C BB0F005B */  swr   $t7, 0x5b($t8)
/* 0043C560 89AE0004 */  lwl   $t6, 4($t5)
/* 0043C564 99AE0007 */  lwr   $t6, 7($t5)
/* 0043C568 AB0E005C */  swl   $t6, 0x5c($t8)
/* 0043C56C BB0E005F */  swr   $t6, 0x5f($t8)
/* 0043C570 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043C574 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043C578 8FA60008 */  lw    $a2, 8($sp)
/* 0043C57C 0320F809 */  jalr  $t9
/* 0043C580 00000000 */   nop   
/* 0043C584 1000000E */  b     .L0043C5C0
/* 0043C588 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043C58C:
/* 0043C58C 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043C590 02002025 */  move  $a0, $s0
/* 0043C594 8F858AFC */  lw     $a1, %got(fp_regs_free)($gp)
/* 0043C598 0320F809 */  jalr  $t9
/* 0043C59C 00000000 */   nop   
/* 0043C5A0 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043C5A4:
/* 0043C5A4 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043C5A8 02002025 */  move  $a0, $s0
/* 0043C5AC 00002825 */  move  $a1, $zero
/* 0043C5B0 00003025 */  move  $a2, $zero
/* 0043C5B4 0320F809 */  jalr  $t9
/* 0043C5B8 93A700BF */   lbu   $a3, 0xbf($sp)
/* 0043C5BC 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043C5C0:
/* 0043C5C0 8FBF00B4 */  lw    $ra, 0xb4($sp)
.L0043C5C4:
/* 0043C5C4 8FB000AC */  lw    $s0, 0xac($sp)
/* 0043C5C8 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 0043C5CC 03E00008 */  jr    $ra
/* 0043C5D0 00000000 */   nop   
    .type free_fp_reg, @function
    .size free_fp_reg, .-free_fp_reg
    .end free_fp_reg

glabel force_free_reg
    .ent force_free_reg
    # 004254B8 flt_reg
    # 0042567C func_0042567C
/* 0043C5D4 3C1C0FBE */  .cpload $t9
/* 0043C5D8 279C347C */  
/* 0043C5DC 0399E021 */  
/* 0043C5E0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043C5E4 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043C5E8 93AE0023 */  lbu   $t6, 0x23($sp)
/* 0043C5EC 8F988BCC */  lw     $t8, %got(regs)($gp)
/* 0043C5F0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043C5F4 000E7880 */  sll   $t7, $t6, 2
/* 0043C5F8 01EE7823 */  subu  $t7, $t7, $t6
/* 0043C5FC 000F7880 */  sll   $t7, $t7, 2
/* 0043C600 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043C604 01F8C821 */  addu  $t9, $t7, $t8
/* 0043C608 93280007 */  lbu   $t0, 7($t9)
/* 0043C60C 1100000E */  beqz  $t0, .L0043C648
/* 0043C610 00000000 */   nop   
/* 0043C614 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043C618 01C02025 */  move  $a0, $t6
/* 0043C61C 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043C620 0320F809 */  jalr  $t9
/* 0043C624 00000000 */   nop   
/* 0043C628 1040000E */  beqz  $v0, .L0043C664
/* 0043C62C 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0043C630 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043C634 93A40023 */  lbu   $a0, 0x23($sp)
/* 0043C638 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043C63C 0320F809 */  jalr  $t9
/* 0043C640 00000000 */   nop   
/* 0043C644 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043C648:
/* 0043C648 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043C64C 93A40023 */  lbu   $a0, 0x23($sp)
/* 0043C650 00002825 */  move  $a1, $zero
/* 0043C654 00003025 */  move  $a2, $zero
/* 0043C658 0320F809 */  jalr  $t9
/* 0043C65C 24070001 */   li    $a3, 1
/* 0043C660 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043C664:
/* 0043C664 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043C668 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043C66C 03E00008 */  jr    $ra
/* 0043C670 00000000 */   nop   
    .type force_free_reg, @function
    .size force_free_reg, .-force_free_reg
    .end force_free_reg

glabel add_to_free_list
    .ent add_to_free_list
    # 0042BDAC eval
    # 00439AE0 init_regs
/* 0043C674 3C1C0FBE */  .cpload $t9
/* 0043C678 279C33DC */  
/* 0043C67C 0399E021 */  
/* 0043C680 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043C684 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 0043C688 93AE00C3 */  lbu   $t6, 0xc3($sp)
/* 0043C68C 8F988BCC */  lw     $t8, %got(regs)($gp)
/* 0043C690 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043C694 000E7880 */  sll   $t7, $t6, 2
/* 0043C698 01EE7823 */  subu  $t7, $t7, $t6
/* 0043C69C 000F7880 */  sll   $t7, $t7, 2
/* 0043C6A0 01F81021 */  addu  $v0, $t7, $t8
/* 0043C6A4 94590004 */  lhu   $t9, 4($v0)
/* 0043C6A8 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043C6AC 24040004 */  li    $a0, 4
/* 0043C6B0 1320003F */  beqz  $t9, .L0043C7B0
/* 0043C6B4 00000000 */   nop   
/* 0043C6B8 8F888038 */  lw    $t0, %got(RO_1000BF98)($gp)
/* 0043C6BC 240503C7 */  li    $a1, 967
/* 0043C6C0 03A05825 */  move  $t3, $sp
/* 0043C6C4 2508BF98 */  addiu $t0, %lo(RO_1000BF98) # addiu $t0, $t0, -0x4068
/* 0043C6C8 250C0048 */  addiu $t4, $t0, 0x48
.L0043C6CC:
/* 0043C6CC 890A0000 */  lwl   $t2, ($t0)
/* 0043C6D0 990A0003 */  lwr   $t2, 3($t0)
/* 0043C6D4 2508000C */  addiu $t0, $t0, 0xc
/* 0043C6D8 256B000C */  addiu $t3, $t3, 0xc
/* 0043C6DC A96AFFFC */  swl   $t2, -4($t3)
/* 0043C6E0 B96AFFFF */  swr   $t2, -1($t3)
/* 0043C6E4 8909FFF8 */  lwl   $t1, -8($t0)
/* 0043C6E8 9909FFFB */  lwr   $t1, -5($t0)
/* 0043C6EC A9690000 */  swl   $t1, ($t3)
/* 0043C6F0 B9690003 */  swr   $t1, 3($t3)
/* 0043C6F4 890AFFFC */  lwl   $t2, -4($t0)
/* 0043C6F8 990AFFFF */  lwr   $t2, -1($t0)
/* 0043C6FC A96A0004 */  swl   $t2, 4($t3)
/* 0043C700 150CFFF2 */  bne   $t0, $t4, .L0043C6CC
/* 0043C704 B96A0007 */   swr   $t2, 7($t3)
/* 0043C708 890A0000 */  lwl   $t2, ($t0)
/* 0043C70C 990A0003 */  lwr   $t2, 3($t0)
/* 0043C710 8F8D8038 */  lw    $t5, %got(RO_1000BF48)($gp)
/* 0043C714 03A0C025 */  move  $t8, $sp
/* 0043C718 A96A0008 */  swl   $t2, 8($t3)
/* 0043C71C B96A000B */  swr   $t2, 0xb($t3)
/* 0043C720 89090004 */  lwl   $t1, 4($t0)
/* 0043C724 99090007 */  lwr   $t1, 7($t0)
/* 0043C728 25ADBF48 */  addiu $t5, %lo(RO_1000BF48) # addiu $t5, $t5, -0x40b8
/* 0043C72C 25B90048 */  addiu $t9, $t5, 0x48
/* 0043C730 A969000C */  swl   $t1, 0xc($t3)
/* 0043C734 B969000F */  swr   $t1, 0xf($t3)
.L0043C738:
/* 0043C738 89AF0000 */  lwl   $t7, ($t5)
/* 0043C73C 99AF0003 */  lwr   $t7, 3($t5)
/* 0043C740 25AD000C */  addiu $t5, $t5, 0xc
/* 0043C744 2718000C */  addiu $t8, $t8, 0xc
/* 0043C748 AB0F004C */  swl   $t7, 0x4c($t8)
/* 0043C74C BB0F004F */  swr   $t7, 0x4f($t8)
/* 0043C750 89AEFFF8 */  lwl   $t6, -8($t5)
/* 0043C754 99AEFFFB */  lwr   $t6, -5($t5)
/* 0043C758 AB0E0050 */  swl   $t6, 0x50($t8)
/* 0043C75C BB0E0053 */  swr   $t6, 0x53($t8)
/* 0043C760 89AFFFFC */  lwl   $t7, -4($t5)
/* 0043C764 99AFFFFF */  lwr   $t7, -1($t5)
/* 0043C768 AB0F0054 */  swl   $t7, 0x54($t8)
/* 0043C76C 15B9FFF2 */  bne   $t5, $t9, .L0043C738
/* 0043C770 BB0F0057 */   swr   $t7, 0x57($t8)
/* 0043C774 89AF0000 */  lwl   $t7, ($t5)
/* 0043C778 99AF0003 */  lwr   $t7, 3($t5)
/* 0043C77C AB0F0058 */  swl   $t7, 0x58($t8)
/* 0043C780 BB0F005B */  swr   $t7, 0x5b($t8)
/* 0043C784 89AE0004 */  lwl   $t6, 4($t5)
/* 0043C788 99AE0007 */  lwr   $t6, 7($t5)
/* 0043C78C AB0E005C */  swl   $t6, 0x5c($t8)
/* 0043C790 BB0E005F */  swr   $t6, 0x5f($t8)
/* 0043C794 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043C798 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043C79C 8FA60008 */  lw    $a2, 8($sp)
/* 0043C7A0 0320F809 */  jalr  $t9
/* 0043C7A4 AFA200BC */   sw    $v0, 0xbc($sp)
/* 0043C7A8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C7AC 8FA200BC */  lw    $v0, 0xbc($sp)
.L0043C7B0:
/* 0043C7B0 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043C7B4 93A400C3 */  lbu   $a0, 0xc3($sp)
/* 0043C7B8 00002825 */  move  $a1, $zero
/* 0043C7BC 00003025 */  move  $a2, $zero
/* 0043C7C0 24070001 */  li    $a3, 1
/* 0043C7C4 0320F809 */  jalr  $t9
/* 0043C7C8 AFA200BC */   sw    $v0, 0xbc($sp)
/* 0043C7CC 8FA200BC */  lw    $v0, 0xbc($sp)
/* 0043C7D0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C7D4 240C0001 */  li    $t4, 1
/* 0043C7D8 A04C0007 */  sb    $t4, 7($v0)
/* 0043C7DC 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043C7E0 93A400C3 */  lbu   $a0, 0xc3($sp)
/* 0043C7E4 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043C7E8 0320F809 */  jalr  $t9
/* 0043C7EC 00000000 */   nop   
/* 0043C7F0 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043C7F4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C7F8 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043C7FC 03E00008 */  jr    $ra
/* 0043C800 00000000 */   nop   
    .type add_to_free_list, @function
    .size add_to_free_list, .-add_to_free_list
    .end add_to_free_list

glabel add_to_fp_free_list
    .ent add_to_fp_free_list
    # 00439AE0 init_regs
/* 0043C804 3C1C0FBE */  .cpload $t9
/* 0043C808 279C324C */  
/* 0043C80C 0399E021 */  
/* 0043C810 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043C814 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 0043C818 93AE00C3 */  lbu   $t6, 0xc3($sp)
/* 0043C81C 8F988BCC */  lw     $t8, %got(regs)($gp)
/* 0043C820 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043C824 000E7880 */  sll   $t7, $t6, 2
/* 0043C828 01EE7823 */  subu  $t7, $t7, $t6
/* 0043C82C 000F7880 */  sll   $t7, $t7, 2
/* 0043C830 01F81021 */  addu  $v0, $t7, $t8
/* 0043C834 94590004 */  lhu   $t9, 4($v0)
/* 0043C838 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043C83C AFA500C4 */  sw    $a1, 0xc4($sp)
/* 0043C840 1320003F */  beqz  $t9, .L0043C940
/* 0043C844 24040004 */   li    $a0, 4
/* 0043C848 8F888038 */  lw    $t0, %got(RO_1000C038)($gp)
/* 0043C84C 240503D1 */  li    $a1, 977
/* 0043C850 03A05825 */  move  $t3, $sp
/* 0043C854 2508C038 */  addiu $t0, %lo(RO_1000C038) # addiu $t0, $t0, -0x3fc8
/* 0043C858 250C0048 */  addiu $t4, $t0, 0x48
.L0043C85C:
/* 0043C85C 890A0000 */  lwl   $t2, ($t0)
/* 0043C860 990A0003 */  lwr   $t2, 3($t0)
/* 0043C864 2508000C */  addiu $t0, $t0, 0xc
/* 0043C868 256B000C */  addiu $t3, $t3, 0xc
/* 0043C86C A96AFFFC */  swl   $t2, -4($t3)
/* 0043C870 B96AFFFF */  swr   $t2, -1($t3)
/* 0043C874 8909FFF8 */  lwl   $t1, -8($t0)
/* 0043C878 9909FFFB */  lwr   $t1, -5($t0)
/* 0043C87C A9690000 */  swl   $t1, ($t3)
/* 0043C880 B9690003 */  swr   $t1, 3($t3)
/* 0043C884 890AFFFC */  lwl   $t2, -4($t0)
/* 0043C888 990AFFFF */  lwr   $t2, -1($t0)
/* 0043C88C A96A0004 */  swl   $t2, 4($t3)
/* 0043C890 150CFFF2 */  bne   $t0, $t4, .L0043C85C
/* 0043C894 B96A0007 */   swr   $t2, 7($t3)
/* 0043C898 890A0000 */  lwl   $t2, ($t0)
/* 0043C89C 990A0003 */  lwr   $t2, 3($t0)
/* 0043C8A0 8F8D8038 */  lw    $t5, %got(RO_1000BFE8)($gp)
/* 0043C8A4 03A0C025 */  move  $t8, $sp
/* 0043C8A8 A96A0008 */  swl   $t2, 8($t3)
/* 0043C8AC B96A000B */  swr   $t2, 0xb($t3)
/* 0043C8B0 89090004 */  lwl   $t1, 4($t0)
/* 0043C8B4 99090007 */  lwr   $t1, 7($t0)
/* 0043C8B8 25ADBFE8 */  addiu $t5, %lo(RO_1000BFE8) # addiu $t5, $t5, -0x4018
/* 0043C8BC 25B90048 */  addiu $t9, $t5, 0x48
/* 0043C8C0 A969000C */  swl   $t1, 0xc($t3)
/* 0043C8C4 B969000F */  swr   $t1, 0xf($t3)
.L0043C8C8:
/* 0043C8C8 89AF0000 */  lwl   $t7, ($t5)
/* 0043C8CC 99AF0003 */  lwr   $t7, 3($t5)
/* 0043C8D0 25AD000C */  addiu $t5, $t5, 0xc
/* 0043C8D4 2718000C */  addiu $t8, $t8, 0xc
/* 0043C8D8 AB0F004C */  swl   $t7, 0x4c($t8)
/* 0043C8DC BB0F004F */  swr   $t7, 0x4f($t8)
/* 0043C8E0 89AEFFF8 */  lwl   $t6, -8($t5)
/* 0043C8E4 99AEFFFB */  lwr   $t6, -5($t5)
/* 0043C8E8 AB0E0050 */  swl   $t6, 0x50($t8)
/* 0043C8EC BB0E0053 */  swr   $t6, 0x53($t8)
/* 0043C8F0 89AFFFFC */  lwl   $t7, -4($t5)
/* 0043C8F4 99AFFFFF */  lwr   $t7, -1($t5)
/* 0043C8F8 AB0F0054 */  swl   $t7, 0x54($t8)
/* 0043C8FC 15B9FFF2 */  bne   $t5, $t9, .L0043C8C8
/* 0043C900 BB0F0057 */   swr   $t7, 0x57($t8)
/* 0043C904 89AF0000 */  lwl   $t7, ($t5)
/* 0043C908 99AF0003 */  lwr   $t7, 3($t5)
/* 0043C90C AB0F0058 */  swl   $t7, 0x58($t8)
/* 0043C910 BB0F005B */  swr   $t7, 0x5b($t8)
/* 0043C914 89AE0004 */  lwl   $t6, 4($t5)
/* 0043C918 99AE0007 */  lwr   $t6, 7($t5)
/* 0043C91C AB0E005C */  swl   $t6, 0x5c($t8)
/* 0043C920 BB0E005F */  swr   $t6, 0x5f($t8)
/* 0043C924 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043C928 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043C92C 8FA60008 */  lw    $a2, 8($sp)
/* 0043C930 0320F809 */  jalr  $t9
/* 0043C934 AFA200BC */   sw    $v0, 0xbc($sp)
/* 0043C938 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C93C 8FA200BC */  lw    $v0, 0xbc($sp)
.L0043C940:
/* 0043C940 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043C944 93A400C3 */  lbu   $a0, 0xc3($sp)
/* 0043C948 00002825 */  move  $a1, $zero
/* 0043C94C 00003025 */  move  $a2, $zero
/* 0043C950 93A700C7 */  lbu   $a3, 0xc7($sp)
/* 0043C954 0320F809 */  jalr  $t9
/* 0043C958 AFA200BC */   sw    $v0, 0xbc($sp)
/* 0043C95C 8FA200BC */  lw    $v0, 0xbc($sp)
/* 0043C960 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C964 240C0001 */  li    $t4, 1
/* 0043C968 A04C0007 */  sb    $t4, 7($v0)
/* 0043C96C 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043C970 93A400C3 */  lbu   $a0, 0xc3($sp)
/* 0043C974 8F858AFC */  lw     $a1, %got(fp_regs_free)($gp)
/* 0043C978 0320F809 */  jalr  $t9
/* 0043C97C 00000000 */   nop   
/* 0043C980 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043C984 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C988 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043C98C 03E00008 */  jr    $ra
/* 0043C990 00000000 */   nop   
    .type add_to_fp_free_list, @function
    .size add_to_fp_free_list, .-add_to_fp_free_list
    .end add_to_fp_free_list

glabel remove_from_free_list
    .ent remove_from_free_list
    # 0042A64C save_vreg
    # 0042AB88 gen_regs
    # 0042BDAC eval
/* 0043C994 3C1C0FBE */  .cpload $t9
/* 0043C998 279C30BC */  
/* 0043C99C 0399E021 */  
/* 0043C9A0 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043C9A4 00047080 */  sll   $t6, $a0, 2
/* 0043C9A8 01C47023 */  subu  $t6, $t6, $a0
/* 0043C9AC 000E7080 */  sll   $t6, $t6, 2
/* 0043C9B0 01CF1821 */  addu  $v1, $t6, $t7
/* 0043C9B4 90780007 */  lbu   $t8, 7($v1)
/* 0043C9B8 27BDFF38 */  addiu $sp, $sp, -0xc8
/* 0043C9BC AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043C9C0 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043C9C4 1300004A */  beqz  $t8, .L0043CAF0
/* 0043C9C8 AFA400C8 */   sw    $a0, 0xc8($sp)
/* 0043C9CC 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043C9D0 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043C9D4 AFA300C0 */  sw    $v1, 0xc0($sp)
/* 0043C9D8 0320F809 */  jalr  $t9
/* 0043C9DC A3A400CB */   sb    $a0, 0xcb($sp)
/* 0043C9E0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043C9E4 8FA300C0 */  lw    $v1, 0xc0($sp)
/* 0043C9E8 14400040 */  bnez  $v0, .L0043CAEC
/* 0043C9EC 93A400CB */   lbu   $a0, 0xcb($sp)
/* 0043C9F0 8F998038 */  lw    $t9, %got(RO_1000C178)($gp)
/* 0043C9F4 24040004 */  li    $a0, 4
/* 0043C9F8 240503DE */  li    $a1, 990
/* 0043C9FC 2739C178 */  addiu $t9, %lo(RO_1000C178) # addiu $t9, $t9, -0x3e88
/* 0043CA00 272B0048 */  addiu $t3, $t9, 0x48
/* 0043CA04 03A05025 */  move  $t2, $sp
.L0043CA08:
/* 0043CA08 8B290000 */  lwl   $t1, ($t9)
/* 0043CA0C 9B290003 */  lwr   $t1, 3($t9)
/* 0043CA10 2739000C */  addiu $t9, $t9, 0xc
/* 0043CA14 254A000C */  addiu $t2, $t2, 0xc
/* 0043CA18 A949FFFC */  swl   $t1, -4($t2)
/* 0043CA1C B949FFFF */  swr   $t1, -1($t2)
/* 0043CA20 8B28FFF8 */  lwl   $t0, -8($t9)
/* 0043CA24 9B28FFFB */  lwr   $t0, -5($t9)
/* 0043CA28 A9480000 */  swl   $t0, ($t2)
/* 0043CA2C B9480003 */  swr   $t0, 3($t2)
/* 0043CA30 8B29FFFC */  lwl   $t1, -4($t9)
/* 0043CA34 9B29FFFF */  lwr   $t1, -1($t9)
/* 0043CA38 A9490004 */  swl   $t1, 4($t2)
/* 0043CA3C 172BFFF2 */  bne   $t9, $t3, .L0043CA08
/* 0043CA40 B9490007 */   swr   $t1, 7($t2)
/* 0043CA44 8B290000 */  lwl   $t1, ($t9)
/* 0043CA48 9B290003 */  lwr   $t1, 3($t9)
/* 0043CA4C 8F8C8038 */  lw    $t4, %got(RO_1000C128)($gp)
/* 0043CA50 03A07825 */  move  $t7, $sp
/* 0043CA54 A9490008 */  swl   $t1, 8($t2)
/* 0043CA58 B949000B */  swr   $t1, 0xb($t2)
/* 0043CA5C 8B280004 */  lwl   $t0, 4($t9)
/* 0043CA60 9B280007 */  lwr   $t0, 7($t9)
/* 0043CA64 258CC128 */  addiu $t4, %lo(RO_1000C128) # addiu $t4, $t4, -0x3ed8
/* 0043CA68 25980048 */  addiu $t8, $t4, 0x48
/* 0043CA6C A948000C */  swl   $t0, 0xc($t2)
/* 0043CA70 B948000F */  swr   $t0, 0xf($t2)
.L0043CA74:
/* 0043CA74 898E0000 */  lwl   $t6, ($t4)
/* 0043CA78 998E0003 */  lwr   $t6, 3($t4)
/* 0043CA7C 258C000C */  addiu $t4, $t4, 0xc
/* 0043CA80 25EF000C */  addiu $t7, $t7, 0xc
/* 0043CA84 A9EE004C */  swl   $t6, 0x4c($t7)
/* 0043CA88 B9EE004F */  swr   $t6, 0x4f($t7)
/* 0043CA8C 898DFFF8 */  lwl   $t5, -8($t4)
/* 0043CA90 998DFFFB */  lwr   $t5, -5($t4)
/* 0043CA94 A9ED0050 */  swl   $t5, 0x50($t7)
/* 0043CA98 B9ED0053 */  swr   $t5, 0x53($t7)
/* 0043CA9C 898EFFFC */  lwl   $t6, -4($t4)
/* 0043CAA0 998EFFFF */  lwr   $t6, -1($t4)
/* 0043CAA4 A9EE0054 */  swl   $t6, 0x54($t7)
/* 0043CAA8 1598FFF2 */  bne   $t4, $t8, .L0043CA74
/* 0043CAAC B9EE0057 */   swr   $t6, 0x57($t7)
/* 0043CAB0 898E0000 */  lwl   $t6, ($t4)
/* 0043CAB4 998E0003 */  lwr   $t6, 3($t4)
/* 0043CAB8 A9EE0058 */  swl   $t6, 0x58($t7)
/* 0043CABC B9EE005B */  swr   $t6, 0x5b($t7)
/* 0043CAC0 898D0004 */  lwl   $t5, 4($t4)
/* 0043CAC4 998D0007 */  lwr   $t5, 7($t4)
/* 0043CAC8 A9ED005C */  swl   $t5, 0x5c($t7)
/* 0043CACC B9ED005F */  swr   $t5, 0x5f($t7)
/* 0043CAD0 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043CAD4 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043CAD8 8FA60008 */  lw    $a2, 8($sp)
/* 0043CADC 0320F809 */  jalr  $t9
/* 0043CAE0 00000000 */   nop   
/* 0043CAE4 1000006A */  b     .L0043CC90
/* 0043CAE8 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043CAEC:
/* 0043CAEC A0600007 */  sb    $zero, 7($v1)
.L0043CAF0:
/* 0043CAF0 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043CAF4 00002825 */  move  $a1, $zero
/* 0043CAF8 00003025 */  move  $a2, $zero
/* 0043CAFC 24070001 */  li    $a3, 1
/* 0043CB00 0320F809 */  jalr  $t9
/* 0043CB04 AFA300C0 */   sw    $v1, 0xc0($sp)
/* 0043CB08 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043CB0C 8FA300C0 */  lw    $v1, 0xc0($sp)
/* 0043CB10 8F8B89D8 */  lw     $t3, %got(opcode_arch)($gp)
/* 0043CB14 916B0000 */  lbu   $t3, ($t3)
/* 0043CB18 5560005E */  bnel  $t3, $zero, .L0043CC94
/* 0043CB1C 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 0043CB20 90790008 */  lbu   $t9, 8($v1)
/* 0043CB24 24010006 */  li    $at, 6
/* 0043CB28 5721005A */  bnel  $t9, $at, .L0043CC94
/* 0043CB2C 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 0043CB30 90640009 */  lbu   $a0, 9($v1)
/* 0043CB34 8F888BCC */  lw     $t0, %got(regs)($gp)
/* 0043CB38 00045080 */  sll   $t2, $a0, 2
/* 0043CB3C 01445023 */  subu  $t2, $t2, $a0
/* 0043CB40 000A5080 */  sll   $t2, $t2, 2
/* 0043CB44 01483021 */  addu  $a2, $t2, $t0
/* 0043CB48 90C90007 */  lbu   $t1, 7($a2)
/* 0043CB4C 1120004A */  beqz  $t1, .L0043CC78
/* 0043CB50 00000000 */   nop   
/* 0043CB54 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043CB58 8F858AF4 */  lw     $a1, %got(gp_regs_free)($gp)
/* 0043CB5C A3A400C7 */  sb    $a0, 0xc7($sp)
/* 0043CB60 0320F809 */  jalr  $t9
/* 0043CB64 AFA600BC */   sw    $a2, 0xbc($sp)
/* 0043CB68 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043CB6C 93A400C7 */  lbu   $a0, 0xc7($sp)
/* 0043CB70 14400040 */  bnez  $v0, .L0043CC74
/* 0043CB74 8FA600BC */   lw    $a2, 0xbc($sp)
/* 0043CB78 8F988038 */  lw    $t8, %got(RO_1000C0D8)($gp)
/* 0043CB7C 24040004 */  li    $a0, 4
/* 0043CB80 240503E8 */  li    $a1, 1000
/* 0043CB84 2718C0D8 */  addiu $t8, %lo(RO_1000C0D8) # addiu $t8, $t8, -0x3f28
/* 0043CB88 270E0048 */  addiu $t6, $t8, 0x48
/* 0043CB8C 03A06825 */  move  $t5, $sp
.L0043CB90:
/* 0043CB90 8B0F0000 */  lwl   $t7, ($t8)
/* 0043CB94 9B0F0003 */  lwr   $t7, 3($t8)
/* 0043CB98 2718000C */  addiu $t8, $t8, 0xc
/* 0043CB9C 25AD000C */  addiu $t5, $t5, 0xc
/* 0043CBA0 A9AFFFFC */  swl   $t7, -4($t5)
/* 0043CBA4 B9AFFFFF */  swr   $t7, -1($t5)
/* 0043CBA8 8B0CFFF8 */  lwl   $t4, -8($t8)
/* 0043CBAC 9B0CFFFB */  lwr   $t4, -5($t8)
/* 0043CBB0 A9AC0000 */  swl   $t4, ($t5)
/* 0043CBB4 B9AC0003 */  swr   $t4, 3($t5)
/* 0043CBB8 8B0FFFFC */  lwl   $t7, -4($t8)
/* 0043CBBC 9B0FFFFF */  lwr   $t7, -1($t8)
/* 0043CBC0 A9AF0004 */  swl   $t7, 4($t5)
/* 0043CBC4 170EFFF2 */  bne   $t8, $t6, .L0043CB90
/* 0043CBC8 B9AF0007 */   swr   $t7, 7($t5)
/* 0043CBCC 8B0F0000 */  lwl   $t7, ($t8)
/* 0043CBD0 9B0F0003 */  lwr   $t7, 3($t8)
/* 0043CBD4 8F8B8038 */  lw    $t3, %got(RO_1000C088)($gp)
/* 0043CBD8 03A04025 */  move  $t0, $sp
/* 0043CBDC A9AF0008 */  swl   $t7, 8($t5)
/* 0043CBE0 B9AF000B */  swr   $t7, 0xb($t5)
/* 0043CBE4 8B0C0004 */  lwl   $t4, 4($t8)
/* 0043CBE8 9B0C0007 */  lwr   $t4, 7($t8)
/* 0043CBEC 256BC088 */  addiu $t3, %lo(RO_1000C088) # addiu $t3, $t3, -0x3f78
/* 0043CBF0 25690048 */  addiu $t1, $t3, 0x48
/* 0043CBF4 A9AC000C */  swl   $t4, 0xc($t5)
/* 0043CBF8 B9AC000F */  swr   $t4, 0xf($t5)
.L0043CBFC:
/* 0043CBFC 896A0000 */  lwl   $t2, ($t3)
/* 0043CC00 996A0003 */  lwr   $t2, 3($t3)
/* 0043CC04 256B000C */  addiu $t3, $t3, 0xc
/* 0043CC08 2508000C */  addiu $t0, $t0, 0xc
/* 0043CC0C A90A004C */  swl   $t2, 0x4c($t0)
/* 0043CC10 B90A004F */  swr   $t2, 0x4f($t0)
/* 0043CC14 8979FFF8 */  lwl   $t9, -8($t3)
/* 0043CC18 9979FFFB */  lwr   $t9, -5($t3)
/* 0043CC1C A9190050 */  swl   $t9, 0x50($t0)
/* 0043CC20 B9190053 */  swr   $t9, 0x53($t0)
/* 0043CC24 896AFFFC */  lwl   $t2, -4($t3)
/* 0043CC28 996AFFFF */  lwr   $t2, -1($t3)
/* 0043CC2C A90A0054 */  swl   $t2, 0x54($t0)
/* 0043CC30 1569FFF2 */  bne   $t3, $t1, .L0043CBFC
/* 0043CC34 B90A0057 */   swr   $t2, 0x57($t0)
/* 0043CC38 896A0000 */  lwl   $t2, ($t3)
/* 0043CC3C 996A0003 */  lwr   $t2, 3($t3)
/* 0043CC40 A90A0058 */  swl   $t2, 0x58($t0)
/* 0043CC44 B90A005B */  swr   $t2, 0x5b($t0)
/* 0043CC48 89790004 */  lwl   $t9, 4($t3)
/* 0043CC4C 99790007 */  lwr   $t9, 7($t3)
/* 0043CC50 A919005C */  swl   $t9, 0x5c($t0)
/* 0043CC54 B919005F */  swr   $t9, 0x5f($t0)
/* 0043CC58 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043CC5C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043CC60 8FA60008 */  lw    $a2, 8($sp)
/* 0043CC64 0320F809 */  jalr  $t9
/* 0043CC68 00000000 */   nop   
/* 0043CC6C 10000008 */  b     .L0043CC90
/* 0043CC70 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043CC74:
/* 0043CC74 A0C00007 */  sb    $zero, 7($a2)
.L0043CC78:
/* 0043CC78 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043CC7C 00002825 */  move  $a1, $zero
/* 0043CC80 00003025 */  move  $a2, $zero
/* 0043CC84 0320F809 */  jalr  $t9
/* 0043CC88 24070001 */   li    $a3, 1
/* 0043CC8C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043CC90:
/* 0043CC90 8FBF00B4 */  lw    $ra, 0xb4($sp)
.L0043CC94:
/* 0043CC94 27BD00C8 */  addiu $sp, $sp, 0xc8
/* 0043CC98 03E00008 */  jr    $ra
/* 0043CC9C 00000000 */   nop   
    .type remove_from_free_list, @function
    .size remove_from_free_list, .-remove_from_free_list
    .end remove_from_free_list

glabel remove_from_fp_free_list
    .ent remove_from_fp_free_list
    # 0042A64C save_vreg
    # 0042AB88 gen_regs
/* 0043CCA0 3C1C0FBE */  .cpload $t9
/* 0043CCA4 279C2DB0 */  
/* 0043CCA8 0399E021 */  
/* 0043CCAC 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043CCB0 00047080 */  sll   $t6, $a0, 2
/* 0043CCB4 01C47023 */  subu  $t6, $t6, $a0
/* 0043CCB8 000E7080 */  sll   $t6, $t6, 2
/* 0043CCBC 01CF1821 */  addu  $v1, $t6, $t7
/* 0043CCC0 90780007 */  lbu   $t8, 7($v1)
/* 0043CCC4 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043CCC8 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043CCCC AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043CCD0 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 0043CCD4 1300004A */  beqz  $t8, .L0043CE00
/* 0043CCD8 AFA500C4 */   sw    $a1, 0xc4($sp)
/* 0043CCDC 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043CCE0 8F858AFC */  lw     $a1, %got(fp_regs_free)($gp)
/* 0043CCE4 AFA300BC */  sw    $v1, 0xbc($sp)
/* 0043CCE8 0320F809 */  jalr  $t9
/* 0043CCEC A3A400C3 */   sb    $a0, 0xc3($sp)
/* 0043CCF0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043CCF4 8FA300BC */  lw    $v1, 0xbc($sp)
/* 0043CCF8 14400040 */  bnez  $v0, .L0043CDFC
/* 0043CCFC 93A400C3 */   lbu   $a0, 0xc3($sp)
/* 0043CD00 8F998038 */  lw    $t9, %got(RO_1000C218)($gp)
/* 0043CD04 24040004 */  li    $a0, 4
/* 0043CD08 240503F5 */  li    $a1, 1013
/* 0043CD0C 2739C218 */  addiu $t9, %lo(RO_1000C218) # addiu $t9, $t9, -0x3de8
/* 0043CD10 272B0048 */  addiu $t3, $t9, 0x48
/* 0043CD14 03A05025 */  move  $t2, $sp
.L0043CD18:
/* 0043CD18 8B290000 */  lwl   $t1, ($t9)
/* 0043CD1C 9B290003 */  lwr   $t1, 3($t9)
/* 0043CD20 2739000C */  addiu $t9, $t9, 0xc
/* 0043CD24 254A000C */  addiu $t2, $t2, 0xc
/* 0043CD28 A949FFFC */  swl   $t1, -4($t2)
/* 0043CD2C B949FFFF */  swr   $t1, -1($t2)
/* 0043CD30 8B28FFF8 */  lwl   $t0, -8($t9)
/* 0043CD34 9B28FFFB */  lwr   $t0, -5($t9)
/* 0043CD38 A9480000 */  swl   $t0, ($t2)
/* 0043CD3C B9480003 */  swr   $t0, 3($t2)
/* 0043CD40 8B29FFFC */  lwl   $t1, -4($t9)
/* 0043CD44 9B29FFFF */  lwr   $t1, -1($t9)
/* 0043CD48 A9490004 */  swl   $t1, 4($t2)
/* 0043CD4C 172BFFF2 */  bne   $t9, $t3, .L0043CD18
/* 0043CD50 B9490007 */   swr   $t1, 7($t2)
/* 0043CD54 8B290000 */  lwl   $t1, ($t9)
/* 0043CD58 9B290003 */  lwr   $t1, 3($t9)
/* 0043CD5C 8F8C8038 */  lw    $t4, %got(RO_1000C1C8)($gp)
/* 0043CD60 03A07825 */  move  $t7, $sp
/* 0043CD64 A9490008 */  swl   $t1, 8($t2)
/* 0043CD68 B949000B */  swr   $t1, 0xb($t2)
/* 0043CD6C 8B280004 */  lwl   $t0, 4($t9)
/* 0043CD70 9B280007 */  lwr   $t0, 7($t9)
/* 0043CD74 258CC1C8 */  addiu $t4, %lo(RO_1000C1C8) # addiu $t4, $t4, -0x3e38
/* 0043CD78 25980048 */  addiu $t8, $t4, 0x48
/* 0043CD7C A948000C */  swl   $t0, 0xc($t2)
/* 0043CD80 B948000F */  swr   $t0, 0xf($t2)
.L0043CD84:
/* 0043CD84 898E0000 */  lwl   $t6, ($t4)
/* 0043CD88 998E0003 */  lwr   $t6, 3($t4)
/* 0043CD8C 258C000C */  addiu $t4, $t4, 0xc
/* 0043CD90 25EF000C */  addiu $t7, $t7, 0xc
/* 0043CD94 A9EE004C */  swl   $t6, 0x4c($t7)
/* 0043CD98 B9EE004F */  swr   $t6, 0x4f($t7)
/* 0043CD9C 898DFFF8 */  lwl   $t5, -8($t4)
/* 0043CDA0 998DFFFB */  lwr   $t5, -5($t4)
/* 0043CDA4 A9ED0050 */  swl   $t5, 0x50($t7)
/* 0043CDA8 B9ED0053 */  swr   $t5, 0x53($t7)
/* 0043CDAC 898EFFFC */  lwl   $t6, -4($t4)
/* 0043CDB0 998EFFFF */  lwr   $t6, -1($t4)
/* 0043CDB4 A9EE0054 */  swl   $t6, 0x54($t7)
/* 0043CDB8 1598FFF2 */  bne   $t4, $t8, .L0043CD84
/* 0043CDBC B9EE0057 */   swr   $t6, 0x57($t7)
/* 0043CDC0 898E0000 */  lwl   $t6, ($t4)
/* 0043CDC4 998E0003 */  lwr   $t6, 3($t4)
/* 0043CDC8 A9EE0058 */  swl   $t6, 0x58($t7)
/* 0043CDCC B9EE005B */  swr   $t6, 0x5b($t7)
/* 0043CDD0 898D0004 */  lwl   $t5, 4($t4)
/* 0043CDD4 998D0007 */  lwr   $t5, 7($t4)
/* 0043CDD8 A9ED005C */  swl   $t5, 0x5c($t7)
/* 0043CDDC B9ED005F */  swr   $t5, 0x5f($t7)
/* 0043CDE0 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043CDE4 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043CDE8 8FA60008 */  lw    $a2, 8($sp)
/* 0043CDEC 0320F809 */  jalr  $t9
/* 0043CDF0 00000000 */   nop   
/* 0043CDF4 10000008 */  b     .L0043CE18
/* 0043CDF8 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043CDFC:
/* 0043CDFC A0600007 */  sb    $zero, 7($v1)
.L0043CE00:
/* 0043CE00 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043CE04 00002825 */  move  $a1, $zero
/* 0043CE08 00003025 */  move  $a2, $zero
/* 0043CE0C 0320F809 */  jalr  $t9
/* 0043CE10 93A700C7 */   lbu   $a3, 0xc7($sp)
/* 0043CE14 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043CE18:
/* 0043CE18 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043CE1C 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043CE20 03E00008 */  jr    $ra
/* 0043CE24 00000000 */   nop   
    .type remove_from_fp_free_list, @function
    .size remove_from_fp_free_list, .-remove_from_fp_free_list
    .end remove_from_fp_free_list

glabel is_available
    .ent is_available
    # 004287AC eval_fp_min_max
    # 00428C38 copy
    # 0042BDAC eval
/* 0043CE28 3C1C0FBE */  .cpload $t9
/* 0043CE2C 279C2C28 */  
/* 0043CE30 0399E021 */  
/* 0043CE34 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043CE38 00047080 */  sll   $t6, $a0, 2
/* 0043CE3C 01C47023 */  subu  $t6, $t6, $a0
/* 0043CE40 000E7080 */  sll   $t6, $t6, 2
/* 0043CE44 AFA40000 */  sw    $a0, ($sp)
/* 0043CE48 01CFC021 */  addu  $t8, $t6, $t7
/* 0043CE4C 03E00008 */  jr    $ra
/* 0043CE50 93020007 */   lbu   $v0, 7($t8)
    .type is_available, @function
    .size is_available, .-is_available
    .end is_available

glabel check_no_used
    .ent check_no_used
    # 0042BDAC eval
/* 0043CE54 3C1C0FBE */  .cpload $t9
/* 0043CE58 279C2BFC */  
/* 0043CE5C 0399E021 */  
/* 0043CE60 8F9984AC */  lw    $t9, %call16(list_is_empty)($gp)
/* 0043CE64 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 0043CE68 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043CE6C AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043CE70 0320F809 */  jalr  $t9
/* 0043CE74 8F848AF8 */   lw     $a0, %got(gp_regs_used)($gp)
/* 0043CE78 14400044 */  bnez  $v0, .L0043CF8C
/* 0043CE7C 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0043CE80 8F9984B0 */  lw    $t9, %call16(print_regs)($gp)
/* 0043CE84 8F848AF8 */  lw     $a0, %got(gp_regs_used)($gp)
/* 0043CE88 0320F809 */  jalr  $t9
/* 0043CE8C 00000000 */   nop   
/* 0043CE90 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043CE94 24040004 */  li    $a0, 4
/* 0043CE98 24050407 */  li    $a1, 1031
/* 0043CE9C 8F8E8038 */  lw    $t6, %got(RO_1000C358)($gp)
/* 0043CEA0 03A0C825 */  move  $t9, $sp
/* 0043CEA4 25CEC358 */  addiu $t6, %lo(RO_1000C358) # addiu $t6, $t6, -0x3ca8
/* 0043CEA8 25C80048 */  addiu $t0, $t6, 0x48
.L0043CEAC:
/* 0043CEAC 89D80000 */  lwl   $t8, ($t6)
/* 0043CEB0 99D80003 */  lwr   $t8, 3($t6)
/* 0043CEB4 25CE000C */  addiu $t6, $t6, 0xc
/* 0043CEB8 2739000C */  addiu $t9, $t9, 0xc
/* 0043CEBC AB38FFFC */  swl   $t8, -4($t9)
/* 0043CEC0 BB38FFFF */  swr   $t8, -1($t9)
/* 0043CEC4 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0043CEC8 99CFFFFB */  lwr   $t7, -5($t6)
/* 0043CECC AB2F0000 */  swl   $t7, ($t9)
/* 0043CED0 BB2F0003 */  swr   $t7, 3($t9)
/* 0043CED4 89D8FFFC */  lwl   $t8, -4($t6)
/* 0043CED8 99D8FFFF */  lwr   $t8, -1($t6)
/* 0043CEDC AB380004 */  swl   $t8, 4($t9)
/* 0043CEE0 15C8FFF2 */  bne   $t6, $t0, .L0043CEAC
/* 0043CEE4 BB380007 */   swr   $t8, 7($t9)
/* 0043CEE8 89D80000 */  lwl   $t8, ($t6)
/* 0043CEEC 99D80003 */  lwr   $t8, 3($t6)
/* 0043CEF0 8F898038 */  lw    $t1, %got(RO_1000C308)($gp)
/* 0043CEF4 03A06025 */  move  $t4, $sp
/* 0043CEF8 AB380008 */  swl   $t8, 8($t9)
/* 0043CEFC BB38000B */  swr   $t8, 0xb($t9)
/* 0043CF00 89CF0004 */  lwl   $t7, 4($t6)
/* 0043CF04 99CF0007 */  lwr   $t7, 7($t6)
/* 0043CF08 2529C308 */  addiu $t1, %lo(RO_1000C308) # addiu $t1, $t1, -0x3cf8
/* 0043CF0C 252D0048 */  addiu $t5, $t1, 0x48
/* 0043CF10 AB2F000C */  swl   $t7, 0xc($t9)
/* 0043CF14 BB2F000F */  swr   $t7, 0xf($t9)
.L0043CF18:
/* 0043CF18 892B0000 */  lwl   $t3, ($t1)
/* 0043CF1C 992B0003 */  lwr   $t3, 3($t1)
/* 0043CF20 2529000C */  addiu $t1, $t1, 0xc
/* 0043CF24 258C000C */  addiu $t4, $t4, 0xc
/* 0043CF28 A98B004C */  swl   $t3, 0x4c($t4)
/* 0043CF2C B98B004F */  swr   $t3, 0x4f($t4)
/* 0043CF30 892AFFF8 */  lwl   $t2, -8($t1)
/* 0043CF34 992AFFFB */  lwr   $t2, -5($t1)
/* 0043CF38 A98A0050 */  swl   $t2, 0x50($t4)
/* 0043CF3C B98A0053 */  swr   $t2, 0x53($t4)
/* 0043CF40 892BFFFC */  lwl   $t3, -4($t1)
/* 0043CF44 992BFFFF */  lwr   $t3, -1($t1)
/* 0043CF48 A98B0054 */  swl   $t3, 0x54($t4)
/* 0043CF4C 152DFFF2 */  bne   $t1, $t5, .L0043CF18
/* 0043CF50 B98B0057 */   swr   $t3, 0x57($t4)
/* 0043CF54 892B0000 */  lwl   $t3, ($t1)
/* 0043CF58 992B0003 */  lwr   $t3, 3($t1)
/* 0043CF5C A98B0058 */  swl   $t3, 0x58($t4)
/* 0043CF60 B98B005B */  swr   $t3, 0x5b($t4)
/* 0043CF64 892A0004 */  lwl   $t2, 4($t1)
/* 0043CF68 992A0007 */  lwr   $t2, 7($t1)
/* 0043CF6C A98A005C */  swl   $t2, 0x5c($t4)
/* 0043CF70 B98A005F */  swr   $t2, 0x5f($t4)
/* 0043CF74 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043CF78 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043CF7C 8FA60008 */  lw    $a2, 8($sp)
/* 0043CF80 0320F809 */  jalr  $t9
/* 0043CF84 00000000 */   nop   
/* 0043CF88 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043CF8C:
/* 0043CF8C 8F9984AC */  lw    $t9, %call16(list_is_empty)($gp)
/* 0043CF90 8F848B00 */  lw     $a0, %got(fp_regs_used)($gp)
/* 0043CF94 0320F809 */  jalr  $t9
/* 0043CF98 00000000 */   nop   
/* 0043CF9C 14400044 */  bnez  $v0, .L0043D0B0
/* 0043CFA0 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0043CFA4 8F888038 */  lw    $t0, %got(RO_1000C2B8)($gp)
/* 0043CFA8 24040004 */  li    $a0, 4
/* 0043CFAC 2405040A */  li    $a1, 1034
/* 0043CFB0 2508C2B8 */  addiu $t0, %lo(RO_1000C2B8) # addiu $t0, $t0, -0x3d48
/* 0043CFB4 25180048 */  addiu $t8, $t0, 0x48
/* 0043CFB8 03A07825 */  move  $t7, $sp
.L0043CFBC:
/* 0043CFBC 89190000 */  lwl   $t9, ($t0)
/* 0043CFC0 99190003 */  lwr   $t9, 3($t0)
/* 0043CFC4 2508000C */  addiu $t0, $t0, 0xc
/* 0043CFC8 25EF000C */  addiu $t7, $t7, 0xc
/* 0043CFCC A9F9FFFC */  swl   $t9, -4($t7)
/* 0043CFD0 B9F9FFFF */  swr   $t9, -1($t7)
/* 0043CFD4 890EFFF8 */  lwl   $t6, -8($t0)
/* 0043CFD8 990EFFFB */  lwr   $t6, -5($t0)
/* 0043CFDC A9EE0000 */  swl   $t6, ($t7)
/* 0043CFE0 B9EE0003 */  swr   $t6, 3($t7)
/* 0043CFE4 8919FFFC */  lwl   $t9, -4($t0)
/* 0043CFE8 9919FFFF */  lwr   $t9, -1($t0)
/* 0043CFEC A9F90004 */  swl   $t9, 4($t7)
/* 0043CFF0 1518FFF2 */  bne   $t0, $t8, .L0043CFBC
/* 0043CFF4 B9F90007 */   swr   $t9, 7($t7)
/* 0043CFF8 89190000 */  lwl   $t9, ($t0)
/* 0043CFFC 99190003 */  lwr   $t9, 3($t0)
/* 0043D000 8F8D8038 */  lw    $t5, %got(RO_1000C268)($gp)
/* 0043D004 03A05025 */  move  $t2, $sp
/* 0043D008 A9F90008 */  swl   $t9, 8($t7)
/* 0043D00C B9F9000B */  swr   $t9, 0xb($t7)
/* 0043D010 890E0004 */  lwl   $t6, 4($t0)
/* 0043D014 990E0007 */  lwr   $t6, 7($t0)
/* 0043D018 25ADC268 */  addiu $t5, %lo(RO_1000C268) # addiu $t5, $t5, -0x3d98
/* 0043D01C 25AB0048 */  addiu $t3, $t5, 0x48
/* 0043D020 A9EE000C */  swl   $t6, 0xc($t7)
/* 0043D024 B9EE000F */  swr   $t6, 0xf($t7)
.L0043D028:
/* 0043D028 89AC0000 */  lwl   $t4, ($t5)
/* 0043D02C 99AC0003 */  lwr   $t4, 3($t5)
/* 0043D030 25AD000C */  addiu $t5, $t5, 0xc
/* 0043D034 254A000C */  addiu $t2, $t2, 0xc
/* 0043D038 A94C004C */  swl   $t4, 0x4c($t2)
/* 0043D03C B94C004F */  swr   $t4, 0x4f($t2)
/* 0043D040 89A9FFF8 */  lwl   $t1, -8($t5)
/* 0043D044 99A9FFFB */  lwr   $t1, -5($t5)
/* 0043D048 A9490050 */  swl   $t1, 0x50($t2)
/* 0043D04C B9490053 */  swr   $t1, 0x53($t2)
/* 0043D050 89ACFFFC */  lwl   $t4, -4($t5)
/* 0043D054 99ACFFFF */  lwr   $t4, -1($t5)
/* 0043D058 A94C0054 */  swl   $t4, 0x54($t2)
/* 0043D05C 15ABFFF2 */  bne   $t5, $t3, .L0043D028
/* 0043D060 B94C0057 */   swr   $t4, 0x57($t2)
/* 0043D064 89AC0000 */  lwl   $t4, ($t5)
/* 0043D068 99AC0003 */  lwr   $t4, 3($t5)
/* 0043D06C A94C0058 */  swl   $t4, 0x58($t2)
/* 0043D070 B94C005B */  swr   $t4, 0x5b($t2)
/* 0043D074 89A90004 */  lwl   $t1, 4($t5)
/* 0043D078 99A90007 */  lwr   $t1, 7($t5)
/* 0043D07C A949005C */  swl   $t1, 0x5c($t2)
/* 0043D080 B949005F */  swr   $t1, 0x5f($t2)
/* 0043D084 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043D088 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043D08C 8FA60008 */  lw    $a2, 8($sp)
/* 0043D090 0320F809 */  jalr  $t9
/* 0043D094 00000000 */   nop   
/* 0043D098 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043D09C 8F9984B0 */  lw    $t9, %call16(print_regs)($gp)
/* 0043D0A0 8F848B00 */  lw     $a0, %got(fp_regs_used)($gp)
/* 0043D0A4 0320F809 */  jalr  $t9
/* 0043D0A8 00000000 */   nop   
/* 0043D0AC 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0043D0B0:
/* 0043D0B0 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043D0B4 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 0043D0B8 03E00008 */  jr    $ra
/* 0043D0BC 00000000 */   nop   
    .type check_no_used, @function
    .size check_no_used, .-check_no_used
    .end check_no_used

glabel usage_count
    .ent usage_count
    # 004254B8 flt_reg
    # 0042567C func_0042567C
    # 004287AC eval_fp_min_max
    # 00428C38 copy
    # 0042BDAC eval
    # 00441308 spill_to_temp
/* 0043D0C0 3C1C0FBE */  .cpload $t9
/* 0043D0C4 279C2990 */  
/* 0043D0C8 0399E021 */  
/* 0043D0CC 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0043D0D0 00047080 */  sll   $t6, $a0, 2
/* 0043D0D4 01C47023 */  subu  $t6, $t6, $a0
/* 0043D0D8 000E7080 */  sll   $t6, $t6, 2
/* 0043D0DC AFA40000 */  sw    $a0, ($sp)
/* 0043D0E0 01CFC021 */  addu  $t8, $t6, $t7
/* 0043D0E4 03E00008 */  jr    $ra
/* 0043D0E8 97020004 */   lhu   $v0, 4($t8)
    .type usage_count, @function
    .size usage_count, .-usage_count
    .end usage_count

glabel move_to_end_fp_list
    .ent move_to_end_fp_list
    # 0042BDAC eval
/* 0043D0EC 3C1C0FBE */  .cpload $t9
/* 0043D0F0 279C2964 */  
/* 0043D0F4 0399E021 */  
/* 0043D0F8 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043D0FC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043D100 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043D104 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043D108 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043D10C 93A40023 */  lbu   $a0, 0x23($sp)
/* 0043D110 0320F809 */  jalr  $t9
/* 0043D114 8F858B00 */   lw     $a1, %got(fp_regs_used)($gp)
/* 0043D118 10400007 */  beqz  $v0, .L0043D138
/* 0043D11C 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0043D120 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043D124 93A40023 */  lbu   $a0, 0x23($sp)
/* 0043D128 8F858B00 */  lw     $a1, %got(fp_regs_used)($gp)
/* 0043D12C 0320F809 */  jalr  $t9
/* 0043D130 00000000 */   nop   
/* 0043D134 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043D138:
/* 0043D138 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043D13C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043D140 03E00008 */  jr    $ra
/* 0043D144 00000000 */   nop   
    .type move_to_end_fp_list, @function
    .size move_to_end_fp_list, .-move_to_end_fp_list
    .end move_to_end_fp_list

glabel move_to_end_gp_list
    .ent move_to_end_gp_list
    # 0042BDAC eval
/* 0043D148 3C1C0FBE */  .cpload $t9
/* 0043D14C 279C2908 */  
/* 0043D150 0399E021 */  
/* 0043D154 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043D158 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043D15C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043D160 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043D164 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043D168 93A40023 */  lbu   $a0, 0x23($sp)
/* 0043D16C 0320F809 */  jalr  $t9
/* 0043D170 8F858AF8 */   lw     $a1, %got(gp_regs_used)($gp)
/* 0043D174 10400007 */  beqz  $v0, .L0043D194
/* 0043D178 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0043D17C 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043D180 93A40023 */  lbu   $a0, 0x23($sp)
/* 0043D184 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043D188 0320F809 */  jalr  $t9
/* 0043D18C 00000000 */   nop   
/* 0043D190 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043D194:
/* 0043D194 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043D198 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043D19C 03E00008 */  jr    $ra
/* 0043D1A0 00000000 */   nop   
    .type move_to_end_gp_list, @function
    .size move_to_end_gp_list, .-move_to_end_gp_list
    .end move_to_end_gp_list

glabel get_free_fp_reg_special
    .ent get_free_fp_reg_special
/* 0043D1A4 3C1C0FBE */  .cpload $t9
/* 0043D1A8 279C28AC */  
/* 0043D1AC 0399E021 */  
/* 0043D1B0 27BDFEC8 */  addiu $sp, $sp, -0x138
/* 0043D1B4 8F9984AC */  lw    $t9, %call16(list_is_empty)($gp)
/* 0043D1B8 AFBF0134 */  sw    $ra, 0x134($sp)
/* 0043D1BC AFA40138 */  sw    $a0, 0x138($sp)
/* 0043D1C0 AFBC0130 */  sw    $gp, 0x130($sp)
/* 0043D1C4 AFB0012C */  sw    $s0, 0x12c($sp)
/* 0043D1C8 AFA5013C */  sw    $a1, 0x13c($sp)
/* 0043D1CC AFA60140 */  sw    $a2, 0x140($sp)
/* 0043D1D0 0320F809 */  jalr  $t9
/* 0043D1D4 8F848AFC */   lw     $a0, %got(fp_regs_free)($gp)
/* 0043D1D8 14400008 */  bnez  $v0, .L0043D1FC
/* 0043D1DC 8FBC0130 */   lw    $gp, 0x130($sp)
/* 0043D1E0 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 0043D1E4 8FA40138 */  lw    $a0, 0x138($sp)
/* 0043D1E8 93A5013F */  lbu   $a1, 0x13f($sp)
/* 0043D1EC 0320F809 */  jalr  $t9
/* 0043D1F0 97A60142 */   lhu   $a2, 0x142($sp)
/* 0043D1F4 1000007B */  b     .L0043D3E4
/* 0043D1F8 8FBC0130 */   lw    $gp, 0x130($sp)
.L0043D1FC:
/* 0043D1FC 8F8E8BC8 */  lw     $t6, %got(restricted_fp_regs)($gp)
/* 0043D200 03A0C825 */  move  $t9, $sp
/* 0043D204 25C80120 */  addiu $t0, $t6, 0x120
.L0043D208:
/* 0043D208 8DD80000 */  lw    $t8, ($t6)
/* 0043D20C 25CE000C */  addiu $t6, $t6, 0xc
/* 0043D210 2739000C */  addiu $t9, $t9, 0xc
/* 0043D214 AF38FFF4 */  sw    $t8, -0xc($t9)
/* 0043D218 8DCFFFF8 */  lw    $t7, -8($t6)
/* 0043D21C AF2FFFF8 */  sw    $t7, -8($t9)
/* 0043D220 8DD8FFFC */  lw    $t8, -4($t6)
/* 0043D224 15C8FFF8 */  bne   $t6, $t0, .L0043D208
/* 0043D228 AF38FFFC */   sw    $t8, -4($t9)
/* 0043D22C 8DD80000 */  lw    $t8, ($t6)
/* 0043D230 8F898B00 */  lw     $t1, %got(fp_regs_used)($gp)
/* 0043D234 AF380000 */  sw    $t8, ($t9)
/* 0043D238 8F998498 */  lw    $t9, %call16(find_non_special_reg)($gp)
/* 0043D23C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043D240 8FA60008 */  lw    $a2, 8($sp)
/* 0043D244 8FA50004 */  lw    $a1, 4($sp)
/* 0043D248 8FA40000 */  lw    $a0, ($sp)
/* 0043D24C 0320F809 */  jalr  $t9
/* 0043D250 AFA90124 */   sw    $t1, 0x124($sp)
/* 0043D254 8FBC0130 */  lw    $gp, 0x130($sp)
/* 0043D258 305000FF */  andi  $s0, $v0, 0xff
/* 0043D25C 304400FF */  andi  $a0, $v0, 0xff
/* 0043D260 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043D264 8F858B00 */  lw     $a1, %got(fp_regs_used)($gp)
/* 0043D268 0320F809 */  jalr  $t9
/* 0043D26C 00000000 */   nop   
/* 0043D270 1440003F */  bnez  $v0, .L0043D370
/* 0043D274 8FBC0130 */   lw    $gp, 0x130($sp)
/* 0043D278 8F8A8038 */  lw    $t2, %got(RO_1000C3F8)($gp)
/* 0043D27C 24040004 */  li    $a0, 4
/* 0043D280 24050433 */  li    $a1, 1075
/* 0043D284 254AC3F8 */  addiu $t2, %lo(RO_1000C3F8) # addiu $t2, $t2, -0x3c08
/* 0043D288 25480048 */  addiu $t0, $t2, 0x48
/* 0043D28C 03A06825 */  move  $t5, $sp
.L0043D290:
/* 0043D290 894C0000 */  lwl   $t4, ($t2)
/* 0043D294 994C0003 */  lwr   $t4, 3($t2)
/* 0043D298 254A000C */  addiu $t2, $t2, 0xc
/* 0043D29C 25AD000C */  addiu $t5, $t5, 0xc
/* 0043D2A0 A9ACFFFC */  swl   $t4, -4($t5)
/* 0043D2A4 B9ACFFFF */  swr   $t4, -1($t5)
/* 0043D2A8 894BFFF8 */  lwl   $t3, -8($t2)
/* 0043D2AC 994BFFFB */  lwr   $t3, -5($t2)
/* 0043D2B0 A9AB0000 */  swl   $t3, ($t5)
/* 0043D2B4 B9AB0003 */  swr   $t3, 3($t5)
/* 0043D2B8 894CFFFC */  lwl   $t4, -4($t2)
/* 0043D2BC 994CFFFF */  lwr   $t4, -1($t2)
/* 0043D2C0 A9AC0004 */  swl   $t4, 4($t5)
/* 0043D2C4 1548FFF2 */  bne   $t2, $t0, .L0043D290
/* 0043D2C8 B9AC0007 */   swr   $t4, 7($t5)
/* 0043D2CC 894C0000 */  lwl   $t4, ($t2)
/* 0043D2D0 994C0003 */  lwr   $t4, 3($t2)
/* 0043D2D4 8F8E8038 */  lw    $t6, %got(RO_1000C3A8)($gp)
/* 0043D2D8 03A0C025 */  move  $t8, $sp
/* 0043D2DC A9AC0008 */  swl   $t4, 8($t5)
/* 0043D2E0 B9AC000B */  swr   $t4, 0xb($t5)
/* 0043D2E4 894B0004 */  lwl   $t3, 4($t2)
/* 0043D2E8 994B0007 */  lwr   $t3, 7($t2)
/* 0043D2EC 25CEC3A8 */  addiu $t6, %lo(RO_1000C3A8) # addiu $t6, $t6, -0x3c58
/* 0043D2F0 25C90048 */  addiu $t1, $t6, 0x48
/* 0043D2F4 A9AB000C */  swl   $t3, 0xc($t5)
/* 0043D2F8 B9AB000F */  swr   $t3, 0xf($t5)
.L0043D2FC:
/* 0043D2FC 89CF0000 */  lwl   $t7, ($t6)
/* 0043D300 99CF0003 */  lwr   $t7, 3($t6)
/* 0043D304 25CE000C */  addiu $t6, $t6, 0xc
/* 0043D308 2718000C */  addiu $t8, $t8, 0xc
/* 0043D30C AB0F004C */  swl   $t7, 0x4c($t8)
/* 0043D310 BB0F004F */  swr   $t7, 0x4f($t8)
/* 0043D314 89D9FFF8 */  lwl   $t9, -8($t6)
/* 0043D318 99D9FFFB */  lwr   $t9, -5($t6)
/* 0043D31C AB190050 */  swl   $t9, 0x50($t8)
/* 0043D320 BB190053 */  swr   $t9, 0x53($t8)
/* 0043D324 89CFFFFC */  lwl   $t7, -4($t6)
/* 0043D328 99CFFFFF */  lwr   $t7, -1($t6)
/* 0043D32C AB0F0054 */  swl   $t7, 0x54($t8)
/* 0043D330 15C9FFF2 */  bne   $t6, $t1, .L0043D2FC
/* 0043D334 BB0F0057 */   swr   $t7, 0x57($t8)
/* 0043D338 89CF0000 */  lwl   $t7, ($t6)
/* 0043D33C 99CF0003 */  lwr   $t7, 3($t6)
/* 0043D340 AB0F0058 */  swl   $t7, 0x58($t8)
/* 0043D344 BB0F005B */  swr   $t7, 0x5b($t8)
/* 0043D348 89D90004 */  lwl   $t9, 4($t6)
/* 0043D34C 99D90007 */  lwr   $t9, 7($t6)
/* 0043D350 AB19005C */  swl   $t9, 0x5c($t8)
/* 0043D354 BB19005F */  swr   $t9, 0x5f($t8)
/* 0043D358 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043D35C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043D360 8FA60008 */  lw    $a2, 8($sp)
/* 0043D364 0320F809 */  jalr  $t9
/* 0043D368 00000000 */   nop   
/* 0043D36C 8FBC0130 */  lw    $gp, 0x130($sp)
.L0043D370:
/* 0043D370 8F8A8BCC */  lw     $t2, %got(regs)($gp)
/* 0043D374 00104080 */  sll   $t0, $s0, 2
/* 0043D378 01104023 */  subu  $t0, $t0, $s0
/* 0043D37C 00084080 */  sll   $t0, $t0, 2
/* 0043D380 010A6821 */  addu  $t5, $t0, $t2
/* 0043D384 91AB0008 */  lbu   $t3, 8($t5)
/* 0043D388 8F8988F4 */  lw     $t1, %got(size_tab)($gp)
/* 0043D38C 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043D390 000B6080 */  sll   $t4, $t3, 2
/* 0043D394 01897021 */  addu  $t6, $t4, $t1
/* 0043D398 8DC50000 */  lw    $a1, ($t6)
/* 0043D39C 0320F809 */  jalr  $t9
/* 0043D3A0 02002025 */   move  $a0, $s0
/* 0043D3A4 8FBC0130 */  lw    $gp, 0x130($sp)
/* 0043D3A8 02002025 */  move  $a0, $s0
/* 0043D3AC 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043D3B0 8F858B00 */  lw     $a1, %got(fp_regs_used)($gp)
/* 0043D3B4 0320F809 */  jalr  $t9
/* 0043D3B8 00000000 */   nop   
/* 0043D3BC 8FBC0130 */  lw    $gp, 0x130($sp)
/* 0043D3C0 02002025 */  move  $a0, $s0
/* 0043D3C4 8FA50138 */  lw    $a1, 0x138($sp)
/* 0043D3C8 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043D3CC 97A60142 */  lhu   $a2, 0x142($sp)
/* 0043D3D0 93A7013F */  lbu   $a3, 0x13f($sp)
/* 0043D3D4 0320F809 */  jalr  $t9
/* 0043D3D8 00000000 */   nop   
/* 0043D3DC 8FBC0130 */  lw    $gp, 0x130($sp)
/* 0043D3E0 02001025 */  move  $v0, $s0
.L0043D3E4:
/* 0043D3E4 8FBF0134 */  lw    $ra, 0x134($sp)
/* 0043D3E8 8FB0012C */  lw    $s0, 0x12c($sp)
/* 0043D3EC 27BD0138 */  addiu $sp, $sp, 0x138
/* 0043D3F0 03E00008 */  jr    $ra
/* 0043D3F4 00000000 */   nop   
    .type get_free_fp_reg_special, @function
    .size get_free_fp_reg_special, .-get_free_fp_reg_special
    .end get_free_fp_reg_special

glabel get_free_reg_special
    .ent get_free_reg_special
/* 0043D3F8 3C1C0FBE */  .cpload $t9
/* 0043D3FC 279C2658 */  
/* 0043D400 0399E021 */  
/* 0043D404 27BDFEC8 */  addiu $sp, $sp, -0x138
/* 0043D408 8F9984AC */  lw    $t9, %call16(list_is_empty)($gp)
/* 0043D40C AFBF0134 */  sw    $ra, 0x134($sp)
/* 0043D410 AFA40138 */  sw    $a0, 0x138($sp)
/* 0043D414 AFBC0130 */  sw    $gp, 0x130($sp)
/* 0043D418 AFB0012C */  sw    $s0, 0x12c($sp)
/* 0043D41C AFA5013C */  sw    $a1, 0x13c($sp)
/* 0043D420 0320F809 */  jalr  $t9
/* 0043D424 8F848AF4 */   lw     $a0, %got(gp_regs_free)($gp)
/* 0043D428 14400008 */  bnez  $v0, .L0043D44C
/* 0043D42C 8FBC0130 */   lw    $gp, 0x130($sp)
/* 0043D430 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0043D434 8FA40138 */  lw    $a0, 0x138($sp)
/* 0043D438 97A5013E */  lhu   $a1, 0x13e($sp)
/* 0043D43C 0320F809 */  jalr  $t9
/* 0043D440 00000000 */   nop   
/* 0043D444 1000007B */  b     .L0043D634
/* 0043D448 8FBC0130 */   lw    $gp, 0x130($sp)
.L0043D44C:
/* 0043D44C 8F8E8BC4 */  lw     $t6, %got(restricted_regs)($gp)
/* 0043D450 03A0C825 */  move  $t9, $sp
/* 0043D454 25C80120 */  addiu $t0, $t6, 0x120
.L0043D458:
/* 0043D458 8DD80000 */  lw    $t8, ($t6)
/* 0043D45C 25CE000C */  addiu $t6, $t6, 0xc
/* 0043D460 2739000C */  addiu $t9, $t9, 0xc
/* 0043D464 AF38FFF4 */  sw    $t8, -0xc($t9)
/* 0043D468 8DCFFFF8 */  lw    $t7, -8($t6)
/* 0043D46C AF2FFFF8 */  sw    $t7, -8($t9)
/* 0043D470 8DD8FFFC */  lw    $t8, -4($t6)
/* 0043D474 15C8FFF8 */  bne   $t6, $t0, .L0043D458
/* 0043D478 AF38FFFC */   sw    $t8, -4($t9)
/* 0043D47C 8DD80000 */  lw    $t8, ($t6)
/* 0043D480 8F898AF8 */  lw     $t1, %got(gp_regs_used)($gp)
/* 0043D484 AF380000 */  sw    $t8, ($t9)
/* 0043D488 8F998498 */  lw    $t9, %call16(find_non_special_reg)($gp)
/* 0043D48C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043D490 8FA60008 */  lw    $a2, 8($sp)
/* 0043D494 8FA50004 */  lw    $a1, 4($sp)
/* 0043D498 8FA40000 */  lw    $a0, ($sp)
/* 0043D49C 0320F809 */  jalr  $t9
/* 0043D4A0 AFA90124 */   sw    $t1, 0x124($sp)
/* 0043D4A4 8FBC0130 */  lw    $gp, 0x130($sp)
/* 0043D4A8 305000FF */  andi  $s0, $v0, 0xff
/* 0043D4AC 304400FF */  andi  $a0, $v0, 0xff
/* 0043D4B0 8F9984C4 */  lw    $t9, %call16(remove_from_list)($gp)
/* 0043D4B4 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043D4B8 0320F809 */  jalr  $t9
/* 0043D4BC 00000000 */   nop   
/* 0043D4C0 1440003F */  bnez  $v0, .L0043D5C0
/* 0043D4C4 8FBC0130 */   lw    $gp, 0x130($sp)
/* 0043D4C8 8F8A8038 */  lw    $t2, %got(RO_1000C498)($gp)
/* 0043D4CC 24040004 */  li    $a0, 4
/* 0043D4D0 24050446 */  li    $a1, 1094
/* 0043D4D4 254AC498 */  addiu $t2, %lo(RO_1000C498) # addiu $t2, $t2, -0x3b68
/* 0043D4D8 25480048 */  addiu $t0, $t2, 0x48
/* 0043D4DC 03A06825 */  move  $t5, $sp
.L0043D4E0:
/* 0043D4E0 894C0000 */  lwl   $t4, ($t2)
/* 0043D4E4 994C0003 */  lwr   $t4, 3($t2)
/* 0043D4E8 254A000C */  addiu $t2, $t2, 0xc
/* 0043D4EC 25AD000C */  addiu $t5, $t5, 0xc
/* 0043D4F0 A9ACFFFC */  swl   $t4, -4($t5)
/* 0043D4F4 B9ACFFFF */  swr   $t4, -1($t5)
/* 0043D4F8 894BFFF8 */  lwl   $t3, -8($t2)
/* 0043D4FC 994BFFFB */  lwr   $t3, -5($t2)
/* 0043D500 A9AB0000 */  swl   $t3, ($t5)
/* 0043D504 B9AB0003 */  swr   $t3, 3($t5)
/* 0043D508 894CFFFC */  lwl   $t4, -4($t2)
/* 0043D50C 994CFFFF */  lwr   $t4, -1($t2)
/* 0043D510 A9AC0004 */  swl   $t4, 4($t5)
/* 0043D514 1548FFF2 */  bne   $t2, $t0, .L0043D4E0
/* 0043D518 B9AC0007 */   swr   $t4, 7($t5)
/* 0043D51C 894C0000 */  lwl   $t4, ($t2)
/* 0043D520 994C0003 */  lwr   $t4, 3($t2)
/* 0043D524 8F8E8038 */  lw    $t6, %got(RO_1000C448)($gp)
/* 0043D528 03A0C025 */  move  $t8, $sp
/* 0043D52C A9AC0008 */  swl   $t4, 8($t5)
/* 0043D530 B9AC000B */  swr   $t4, 0xb($t5)
/* 0043D534 894B0004 */  lwl   $t3, 4($t2)
/* 0043D538 994B0007 */  lwr   $t3, 7($t2)
/* 0043D53C 25CEC448 */  addiu $t6, %lo(RO_1000C448) # addiu $t6, $t6, -0x3bb8
/* 0043D540 25C90048 */  addiu $t1, $t6, 0x48
/* 0043D544 A9AB000C */  swl   $t3, 0xc($t5)
/* 0043D548 B9AB000F */  swr   $t3, 0xf($t5)
.L0043D54C:
/* 0043D54C 89CF0000 */  lwl   $t7, ($t6)
/* 0043D550 99CF0003 */  lwr   $t7, 3($t6)
/* 0043D554 25CE000C */  addiu $t6, $t6, 0xc
/* 0043D558 2718000C */  addiu $t8, $t8, 0xc
/* 0043D55C AB0F004C */  swl   $t7, 0x4c($t8)
/* 0043D560 BB0F004F */  swr   $t7, 0x4f($t8)
/* 0043D564 89D9FFF8 */  lwl   $t9, -8($t6)
/* 0043D568 99D9FFFB */  lwr   $t9, -5($t6)
/* 0043D56C AB190050 */  swl   $t9, 0x50($t8)
/* 0043D570 BB190053 */  swr   $t9, 0x53($t8)
/* 0043D574 89CFFFFC */  lwl   $t7, -4($t6)
/* 0043D578 99CFFFFF */  lwr   $t7, -1($t6)
/* 0043D57C AB0F0054 */  swl   $t7, 0x54($t8)
/* 0043D580 15C9FFF2 */  bne   $t6, $t1, .L0043D54C
/* 0043D584 BB0F0057 */   swr   $t7, 0x57($t8)
/* 0043D588 89CF0000 */  lwl   $t7, ($t6)
/* 0043D58C 99CF0003 */  lwr   $t7, 3($t6)
/* 0043D590 AB0F0058 */  swl   $t7, 0x58($t8)
/* 0043D594 BB0F005B */  swr   $t7, 0x5b($t8)
/* 0043D598 89D90004 */  lwl   $t9, 4($t6)
/* 0043D59C 99D90007 */  lwr   $t9, 7($t6)
/* 0043D5A0 AB19005C */  swl   $t9, 0x5c($t8)
/* 0043D5A4 BB19005F */  swr   $t9, 0x5f($t8)
/* 0043D5A8 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043D5AC 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043D5B0 8FA60008 */  lw    $a2, 8($sp)
/* 0043D5B4 0320F809 */  jalr  $t9
/* 0043D5B8 00000000 */   nop   
/* 0043D5BC 8FBC0130 */  lw    $gp, 0x130($sp)
.L0043D5C0:
/* 0043D5C0 8F8A8BCC */  lw     $t2, %got(regs)($gp)
/* 0043D5C4 00104080 */  sll   $t0, $s0, 2
/* 0043D5C8 01104023 */  subu  $t0, $t0, $s0
/* 0043D5CC 00084080 */  sll   $t0, $t0, 2
/* 0043D5D0 010A6821 */  addu  $t5, $t0, $t2
/* 0043D5D4 91AB0008 */  lbu   $t3, 8($t5)
/* 0043D5D8 8F8988F4 */  lw     $t1, %got(size_tab)($gp)
/* 0043D5DC 8F9985B8 */  lw    $t9, %call16(spill_to_temp)($gp)
/* 0043D5E0 000B6080 */  sll   $t4, $t3, 2
/* 0043D5E4 01897021 */  addu  $t6, $t4, $t1
/* 0043D5E8 8DC50000 */  lw    $a1, ($t6)
/* 0043D5EC 0320F809 */  jalr  $t9
/* 0043D5F0 02002025 */   move  $a0, $s0
/* 0043D5F4 8FBC0130 */  lw    $gp, 0x130($sp)
/* 0043D5F8 02002025 */  move  $a0, $s0
/* 0043D5FC 8F9984C0 */  lw    $t9, %call16(append_to_list)($gp)
/* 0043D600 8F858AF8 */  lw     $a1, %got(gp_regs_used)($gp)
/* 0043D604 0320F809 */  jalr  $t9
/* 0043D608 00000000 */   nop   
/* 0043D60C 8FBC0130 */  lw    $gp, 0x130($sp)
/* 0043D610 02002025 */  move  $a0, $s0
/* 0043D614 8FA50138 */  lw    $a1, 0x138($sp)
/* 0043D618 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 0043D61C 97A6013E */  lhu   $a2, 0x13e($sp)
/* 0043D620 24070001 */  li    $a3, 1
/* 0043D624 0320F809 */  jalr  $t9
/* 0043D628 00000000 */   nop   
/* 0043D62C 8FBC0130 */  lw    $gp, 0x130($sp)
/* 0043D630 02001025 */  move  $v0, $s0
.L0043D634:
/* 0043D634 8FBF0134 */  lw    $ra, 0x134($sp)
/* 0043D638 8FB0012C */  lw    $s0, 0x12c($sp)
/* 0043D63C 27BD0138 */  addiu $sp, $sp, 0x138
/* 0043D640 03E00008 */  jr    $ra
/* 0043D644 00000000 */   nop   
    .type get_free_reg_special, @function
    .size get_free_reg_special, .-get_free_reg_special
    .end get_free_reg_special
)"");
