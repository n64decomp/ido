#ifdef __sgi
__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm



.bss
    .balign 4
# 10021210
glabel __Argv
    # 00466A00 get_arg
    .space 4
    .size __Argv, 4
    .type __Argv, @object

    .balign 4
# 10021214
glabel __rld_obj_head
    .space 4
    .size __rld_obj_head, 4
    .type __rld_obj_head, @object

    .balign 4
# 10021218
glabel __Argc
    # 0044BF18 main
    # 00466A00 get_arg
    .space 4
    .size __Argc, 4
    .type __Argc, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel __start
    .ent __start
/* 0040A5E0 03E04025 */  move  $t0, $ra
/* 0040A5E4 04110001 */  bal   func_0040A5EC
/* 0040A5E8 00000000 */   nop   
func_0040A5EC:
/* 0040A5EC 3C1C0FC1 */  lui   $gp, 0xfc1
/* 0040A5F0 279C5464 */  addiu $gp, $gp, 0x5464
/* 0040A5F4 039FE021 */  addu  $gp, $gp, $ra
/* 0040A5F8 0100F825 */  move  $ra, $t0
/* 0040A5FC 3C070000 */  lui   $a3, 0
/* 0040A600 00FC3821 */  addu  $a3, $a3, $gp
/* 0040A604 8CE78044 */  lw    $a3, -0x7fbc($a3)
/* 0040A608 8FA40000 */  lw    $a0, ($sp)
/* 0040A60C 27A50004 */  addiu $a1, $sp, 4
/* 0040A610 8CE70000 */  lw    $a3, ($a3)
/* 0040A614 2401FFF0 */  li    $at, -16
/* 0040A618 03A1E824 */  and   $sp, $sp, $at
/* 0040A61C 24A60004 */  addiu $a2, $a1, 4
/* 0040A620 00041080 */  sll   $v0, $a0, 2
/* 0040A624 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0040A628 14E00005 */  bnez  $a3, .L0040A640
/* 0040A62C 00C23021 */   addu  $a2, $a2, $v0
/* 0040A630 3C010000 */  lui   $at, 0
/* 0040A634 003C0821 */  addu  $at, $at, $gp
/* 0040A638 8C218044 */  lw    $at, -0x7fbc($at)
/* 0040A63C AC260000 */  sw    $a2, ($at)
.L0040A640:
/* 0040A640 3C010000 */  lui   $at, 0
/* 0040A644 003C0821 */  addu  $at, $at, $gp
/* 0040A648 8C218960 */  lw    $at, -0x76a0($at)
/* 0040A64C 3C190000 */  lui   $t9, 0
/* 0040A650 033CC821 */  addu  $t9, $t9, $gp
/* 0040A654 AC240000 */  sw    $a0, ($at)
/* 0040A658 3C010000 */  lui   $at, 0
/* 0040A65C 8F39883C */  lw    $t9, -0x77c4($t9)
/* 0040A660 003C0821 */  addu  $at, $at, $gp
/* 0040A664 8C21895C */  lw    $at, -0x76a4($at)
/* 0040A668 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040A66C AFA0001C */  sw    $zero, 0x1c($sp)
/* 0040A670 0000F025 */  move  $fp, $zero
/* 0040A674 0320F809 */  jalr  $t9
/* 0040A678 AC250000 */   sw    $a1, ($at)
/* 0040A67C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040A680 3C190000 */  lui   $t9, 0
/* 0040A684 033CC821 */  addu  $t9, $t9, $gp
/* 0040A688 8F39806C */  lw    $t9, -0x7f94($t9)
/* 0040A68C 0320F809 */  jalr  $t9
/* 0040A690 00000000 */   nop   
/* 0040A694 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040A698 3C190000 */  lui   $t9, 0
/* 0040A69C 3C040000 */  lui   $a0, 0
/* 0040A6A0 3C050000 */  lui   $a1, 0
/* 0040A6A4 3C060000 */  lui   $a2, 0
/* 0040A6A8 033CC821 */  addu  $t9, $t9, $gp
/* 0040A6AC 8F3986A0 */  lw    $t9, -0x7960($t9)
/* 0040A6B0 009C2021 */  addu  $a0, $a0, $gp
/* 0040A6B4 00BC2821 */  addu  $a1, $a1, $gp
/* 0040A6B8 00DC3021 */  addu  $a2, $a2, $gp
/* 0040A6BC 8C848960 */  lw    $a0, -0x76a0($a0)
/* 0040A6C0 8CA5895C */  lw    $a1, -0x76a4($a1)
/* 0040A6C4 8CC68044 */  lw    $a2, -0x7fbc($a2)
/* 0040A6C8 8C840000 */  lw    $a0, ($a0)
/* 0040A6CC 8CA50000 */  lw    $a1, ($a1)
/* 0040A6D0 0320F809 */  jalr  $t9
/* 0040A6D4 8CC60000 */   lw    $a2, ($a2)
/* 0040A6D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040A6DC 3C190000 */  lui   $t9, 0
/* 0040A6E0 00402025 */  move  $a0, $v0
/* 0040A6E4 033CC821 */  addu  $t9, $t9, $gp
/* 0040A6E8 8F39880C */  lw    $t9, -0x77f4($t9)
/* 0040A6EC 0320F809 */  jalr  $t9
/* 0040A6F0 00000000 */   nop   
/* 0040A6F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040A6F8 0000000D */  break 
    .type __start, @function
    .size __start, .-__start
    .end __start
glabel _mcount
    .ent _mcount
/* 0040A6FC 27BD0010 */  addiu $sp, $sp, 0x10
/* 0040A700 03E00008 */  jr    $ra
/* 0040A704 0020F825 */   move  $ra, $at
    .type _mcount, @function
    .size _mcount, .-_mcount
    .end _mcount
)"");
#endif
