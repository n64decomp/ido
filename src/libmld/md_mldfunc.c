#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "libmld.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000EF84:
    # 0048A704 _md_st_malloc
    .asciz "_md_st_malloc: cannot allocate item of 1 byte with malloc(3)\n"

RO_1000EFC4:
    # 0048A704 _md_st_malloc
    .asciz "_md_st_malloc: cannot allocate item of %ld bytes with malloc(3)\n"

RO_1000F008:
    # 0048A704 _md_st_malloc
    .asciz "_md_st_malloc: cannot grow item to %ld bytes with realloc(3)\n"

.data
D_10011AC0:
    # 0048A5E8 _md_st_str_iss
    # 0048A86C _md_st_setfd
    .ascii "routine: you didn't initialize with st_cuinit or st_readst\n\x00"

D_10011AFC:
    # 0048A5E8 _md_st_str_iss
    .ascii "routine: no current routine, see fdadd or setfd\n\x00\x00\x00\x00"



.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

/*
00489CA0 st_symadd
00489F38 st_ifd_pcfd
00489FC4 st_pcfd_ifd
0048A06C st_psym_ifd_isym
0048A194 st_paux_iaux
0048A260 st_str_ifd_iss
0048A330 st_ppd_ifd_isym
0048A5E8 _md_st_str_iss
0048A86C _md_st_setfd
0048A954 st_extadd
0048AB3C st_pext_iext
0048ABB0 st_idn_index_fext
0048ACEC st_pdn_idn
*/
void _md_st_internal(const char *format, ...) {
    va_list arglist;

    fprintf(stderr, "%s: Internal: ", st_errname);
    va_start(arglist, format);
    vfprintf(stderr, format, arglist);
    fprintf(stderr, "\n");
    exit(1);
}

/*
0048A704 _md_st_malloc
0048A8E0 st_cuinit
*/
void _md_st_error(const char *format, ...) {
    va_list arglist;

    fprintf(stderr, "%s: Error: ", st_errname);
    va_start(arglist, format);
    vfprintf(stderr, format, arglist);
    fprintf(stderr, "\n");
    exit(1);
}

__asm__(R""(
.set noreorder
glabel _md_st_str_extiss
    .ent _md_st_str_extiss
    # 0048A260 st_str_ifd_iss
/* 0048A5A8 3C1C0FB9 */  .cpload $t9
/* 0048A5AC 279CFCE8 */  
/* 0048A5B0 0399E021 */  
/* 0048A5B4 0480000A */  bltz  $a0, .L0048A5E0
/* 0048A5B8 00001025 */   move  $v0, $zero
/* 0048A5BC 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048A5C0 8C630000 */  lw    $v1, ($v1)
/* 0048A5C4 8C6E0028 */  lw    $t6, 0x28($v1)
/* 0048A5C8 008E082A */  slt   $at, $a0, $t6
/* 0048A5CC 10200004 */  beqz  $at, .L0048A5E0
/* 0048A5D0 00000000 */   nop   
/* 0048A5D4 8C6F0024 */  lw    $t7, 0x24($v1)
/* 0048A5D8 03E00008 */  jr    $ra
/* 0048A5DC 01E41021 */   addu  $v0, $t7, $a0

.L0048A5E0:
/* 0048A5E0 03E00008 */  jr    $ra
/* 0048A5E4 00000000 */   nop   
    .type _md_st_str_extiss, @function
    .size _md_st_str_extiss, .-_md_st_str_extiss
    .end _md_st_str_extiss

glabel _md_st_str_iss
    .ent _md_st_str_iss
/* 0048A5E8 3C1C0FB9 */  .cpload $t9
/* 0048A5EC 279CFCA8 */  
/* 0048A5F0 0399E021 */  
/* 0048A5F4 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048A5F8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048A5FC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048A600 8DCE0000 */  lw    $t6, ($t6)
/* 0048A604 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048A608 AFA40020 */  sw    $a0, 0x20($sp)
/* 0048A60C 8DCF0004 */  lw    $t7, 4($t6)
/* 0048A610 15E00006 */  bnez  $t7, .L0048A62C
/* 0048A614 00000000 */   nop   
/* 0048A618 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A61C 8F848044 */  lw    $a0, %got(D_10011AC0)($gp)
/* 0048A620 0320F809 */  jalr  $t9
/* 0048A624 24841AC0 */   addiu $a0, %lo(D_10011AC0) # addiu $a0, $a0, 0x1ac0
/* 0048A628 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048A62C:
/* 0048A62C 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 0048A630 8C630000 */  lw    $v1, ($v1)
/* 0048A634 54600009 */  bnezl $v1, .L0048A65C
/* 0048A638 8C780000 */   lw    $t8, ($v1)
/* 0048A63C 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A640 8F848044 */  lw    $a0, %got(D_10011AFC)($gp)
/* 0048A644 0320F809 */  jalr  $t9
/* 0048A648 24841AFC */   addiu $a0, %lo(D_10011AFC) # addiu $a0, $a0, 0x1afc
/* 0048A64C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A650 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 0048A654 8C630000 */  lw    $v1, ($v1)
/* 0048A658 8C780000 */  lw    $t8, ($v1)
.L0048A65C:
/* 0048A65C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048A660 8F02000C */  lw    $v0, 0xc($t8)
/* 0048A664 5040000A */  beql  $v0, $zero, .L0048A690
/* 0048A668 00001025 */   move  $v0, $zero
/* 0048A66C 8FB90020 */  lw    $t9, 0x20($sp)
/* 0048A670 8FA90020 */  lw    $t1, 0x20($sp)
/* 0048A674 0322082A */  slt   $at, $t9, $v0
/* 0048A678 50200005 */  beql  $at, $zero, .L0048A690
/* 0048A67C 00001025 */   move  $v0, $zero
/* 0048A680 8C680014 */  lw    $t0, 0x14($v1)
/* 0048A684 10000002 */  b     .L0048A690
/* 0048A688 01091021 */   addu  $v0, $t0, $t1
/* 0048A68C 00001025 */  move  $v0, $zero
.L0048A690:
/* 0048A690 03E00008 */  jr    $ra
/* 0048A694 27BD0020 */   addiu $sp, $sp, 0x20
    .type _md_st_str_iss, @function
    .size _md_st_str_iss, .-_md_st_str_iss
    .end _md_st_str_iss

glabel _md_st_iextmax
    .ent _md_st_iextmax
/* 0048A698 3C1C0FB9 */  .cpload $t9
/* 0048A69C 279CFBF8 */  
/* 0048A6A0 0399E021 */  
/* 0048A6A4 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048A6A8 8DCE0000 */  lw    $t6, ($t6)
/* 0048A6AC 03E00008 */  jr    $ra
/* 0048A6B0 8DC2001C */   lw    $v0, 0x1c($t6)
    .type _md_st_iextmax, @function
    .size _md_st_iextmax, .-_md_st_iextmax
    .end _md_st_iextmax

glabel _md_st_currentifd
    .ent _md_st_currentifd
    # 0048A954 st_extadd
    # 0048ABB0 st_idn_index_fext
/* 0048A6B4 3C1C0FB9 */  .cpload $t9
/* 0048A6B8 279CFBDC */  
/* 0048A6BC 0399E021 */  
/* 0048A6C0 8F848CBC */  lw     $a0, %got(pcfdcur)($gp)
/* 0048A6C4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048A6C8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048A6CC 8C840000 */  lw    $a0, ($a0)
/* 0048A6D0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048A6D4 14800003 */  bnez  $a0, .L0048A6E4
/* 0048A6D8 00000000 */   nop   
/* 0048A6DC 10000005 */  b     .L0048A6F4
/* 0048A6E0 2402FFFF */   li    $v0, -1
.L0048A6E4:
/* 0048A6E4 8F9987B8 */  lw    $t9, %call16(st_ifd_pcfd)($gp)
/* 0048A6E8 0320F809 */  jalr  $t9
/* 0048A6EC 00000000 */   nop   
/* 0048A6F0 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048A6F4:
/* 0048A6F4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048A6F8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048A6FC 03E00008 */  jr    $ra
/* 0048A700 00000000 */   nop   
    .type _md_st_currentifd, @function
    .size _md_st_currentifd, .-_md_st_currentifd
    .end _md_st_currentifd

glabel _md_st_malloc
    .ent _md_st_malloc
    # 00489CA0 st_symadd
    # 0048A954 st_extadd
    # 0048ABB0 st_idn_index_fext
/* 0048A704 3C1C0FB9 */  .cpload $t9
/* 0048A708 279CFB8C */  
/* 0048A70C 0399E021 */  
/* 0048A710 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0048A714 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048A718 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048A71C AFB1001C */  sw    $s1, 0x1c($sp)
/* 0048A720 AFB00018 */  sw    $s0, 0x18($sp)
/* 0048A724 AFA60030 */  sw    $a2, 0x30($sp)
/* 0048A728 8CA20000 */  lw    $v0, ($a1)
/* 0048A72C 00A08025 */  move  $s0, $a1
/* 0048A730 00808825 */  move  $s1, $a0
/* 0048A734 10400005 */  beqz  $v0, .L0048A74C
/* 0048A738 00000000 */   nop   
/* 0048A73C 10800003 */  beqz  $a0, .L0048A74C
/* 0048A740 2401FFFF */   li    $at, -1
/* 0048A744 14810027 */  bne   $a0, $at, .L0048A7E4
/* 0048A748 00024040 */   sll   $t0, $v0, 1
.L0048A74C:
/* 0048A74C 14E0000F */  bnez  $a3, .L0048A78C
/* 0048A750 AE070000 */   sw    $a3, ($s0)
/* 0048A754 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 0048A758 24040001 */  li    $a0, 1
/* 0048A75C 0320F809 */  jalr  $t9
/* 0048A760 00000000 */   nop   
/* 0048A764 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048A768 14400006 */  bnez  $v0, .L0048A784
/* 0048A76C 00408825 */   move  $s1, $v0
/* 0048A770 8F9987D4 */  lw    $t9, %call16(_md_st_error)($gp)
/* 0048A774 8F848044 */  lw    $a0, %got(RO_1000EF84)($gp)
/* 0048A778 0320F809 */  jalr  $t9
/* 0048A77C 2484EF84 */   addiu $a0, %lo(RO_1000EF84) # addiu $a0, $a0, -0x107c
/* 0048A780 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048A784:
/* 0048A784 1000002D */  b     .L0048A83C
/* 0048A788 02201025 */   move  $v0, $s1
.L0048A78C:
/* 0048A78C 8E0E0000 */  lw    $t6, ($s0)
/* 0048A790 8FAF0030 */  lw    $t7, 0x30($sp)
/* 0048A794 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 0048A798 01CF0019 */  multu $t6, $t7
/* 0048A79C 00002012 */  mflo  $a0
/* 0048A7A0 0320F809 */  jalr  $t9
/* 0048A7A4 00000000 */   nop   
/* 0048A7A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048A7AC 14400022 */  bnez  $v0, .L0048A838
/* 0048A7B0 00408825 */   move  $s1, $v0
/* 0048A7B4 8E180000 */  lw    $t8, ($s0)
/* 0048A7B8 8FB90030 */  lw    $t9, 0x30($sp)
/* 0048A7BC 03190019 */  multu $t8, $t9
/* 0048A7C0 00002812 */  mflo  $a1
/* 0048A7C4 50A0001D */  beql  $a1, $zero, .L0048A83C
/* 0048A7C8 02201025 */   move  $v0, $s1
/* 0048A7CC 8F9987D4 */  lw    $t9, %call16(_md_st_error)($gp)
/* 0048A7D0 8F848044 */  lw    $a0, %got(RO_1000EFC4)($gp)
/* 0048A7D4 0320F809 */  jalr  $t9
/* 0048A7D8 2484EFC4 */   addiu $a0, %lo(RO_1000EFC4) # addiu $a0, $a0, -0x103c
/* 0048A7DC 10000016 */  b     .L0048A838
/* 0048A7E0 8FBC0020 */   lw    $gp, 0x20($sp)
.L0048A7E4:
/* 0048A7E4 AE080000 */  sw    $t0, ($s0)
/* 0048A7E8 8FAA0030 */  lw    $t2, 0x30($sp)
/* 0048A7EC 8F9980E8 */  lw    $t9, %call16(realloc)($gp)
/* 0048A7F0 02202025 */  move  $a0, $s1
/* 0048A7F4 010A0019 */  multu $t0, $t2
/* 0048A7F8 00002812 */  mflo  $a1
/* 0048A7FC 0320F809 */  jalr  $t9
/* 0048A800 00000000 */   nop   
/* 0048A804 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048A808 1440000B */  bnez  $v0, .L0048A838
/* 0048A80C 00408825 */   move  $s1, $v0
/* 0048A810 8E0B0000 */  lw    $t3, ($s0)
/* 0048A814 8FAC0030 */  lw    $t4, 0x30($sp)
/* 0048A818 8F9987D4 */  lw    $t9, %call16(_md_st_error)($gp)
/* 0048A81C 8F848044 */  lw    $a0, %got(RO_1000F008)($gp)
/* 0048A820 016C0019 */  multu $t3, $t4
/* 0048A824 2484F008 */  addiu $a0, %lo(RO_1000F008) # addiu $a0, $a0, -0xff8
/* 0048A828 00002812 */  mflo  $a1
/* 0048A82C 0320F809 */  jalr  $t9
/* 0048A830 00000000 */   nop   
/* 0048A834 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048A838:
/* 0048A838 02201025 */  move  $v0, $s1
.L0048A83C:
/* 0048A83C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048A840 8FB00018 */  lw    $s0, 0x18($sp)
/* 0048A844 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0048A848 03E00008 */  jr    $ra
/* 0048A84C 27BD0028 */   addiu $sp, $sp, 0x28
    .type _md_st_malloc, @function
    .size _md_st_malloc, .-_md_st_malloc
    .end _md_st_malloc

glabel _md_st_ifdmax
    .ent _md_st_ifdmax
/* 0048A850 3C1C0FB9 */  .cpload $t9
/* 0048A854 279CFA40 */  
/* 0048A858 0399E021 */  
/* 0048A85C 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048A860 8DCE0000 */  lw    $t6, ($t6)
/* 0048A864 03E00008 */  jr    $ra
/* 0048A868 8DC2000C */   lw    $v0, 0xc($t6)
    .type _md_st_ifdmax, @function
    .size _md_st_ifdmax, .-_md_st_ifdmax
    .end _md_st_ifdmax

glabel _md_st_setfd
    .ent _md_st_setfd
/* 0048A86C 3C1C0FB9 */  .cpload $t9
/* 0048A870 279CFA24 */  
/* 0048A874 0399E021 */  
/* 0048A878 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048A87C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048A880 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048A884 8DCE0000 */  lw    $t6, ($t6)
/* 0048A888 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048A88C AFA40020 */  sw    $a0, 0x20($sp)
/* 0048A890 8DC20004 */  lw    $v0, 4($t6)
/* 0048A894 5440000A */  bnezl $v0, .L0048A8C0
/* 0048A898 8FB80020 */   lw    $t8, 0x20($sp)
/* 0048A89C 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A8A0 8F848044 */  lw    $a0, %got(D_10011AC0)($gp)
/* 0048A8A4 0320F809 */  jalr  $t9
/* 0048A8A8 24841AC0 */   addiu $a0, %lo(D_10011AC0) # addiu $a0, $a0, 0x1ac0
/* 0048A8AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A8B0 8F8F8CB8 */  lw     $t7, %got(st_pchdr)($gp)
/* 0048A8B4 8DEF0000 */  lw    $t7, ($t7)
/* 0048A8B8 8DE20004 */  lw    $v0, 4($t7)
/* 0048A8BC 8FB80020 */  lw    $t8, 0x20($sp)
.L0048A8C0:
/* 0048A8C0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048A8C4 8F818CBC */  lw     $at, %got(pcfdcur)($gp)
/* 0048A8C8 0018C980 */  sll   $t9, $t8, 6
/* 0048A8CC 00594021 */  addu  $t0, $v0, $t9
/* 0048A8D0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048A8D4 03E00008 */  jr    $ra
/* 0048A8D8 AC280000 */   sw    $t0, ($at)
    .type _md_st_setfd, @function
    .size _md_st_setfd, .-_md_st_setfd
    .end _md_st_setfd
)"");
