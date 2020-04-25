__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm



.bss
    .balign 4
# 1001C2E0
glabel __Argv
    # 0040B7D0 func_0040B7D0
    # 0040B930 read_feedback_file
    # 00497EB0 get_arg
    .space 4
    .size __Argv, 4
    .type __Argv, @object

    .balign 4
# 1001C2E4
glabel __rld_obj_head
    .space 4
    .size __rld_obj_head, 4
    .type __rld_obj_head, @object

    .balign 4
# 1001C2E8
glabel __Argc
    # 00434720 processargs
    # 00497EB0 get_arg
    .space 4
    .size __Argc, 4
    .type __Argc, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel __start
    .ent __start
/* 0040B620 03E04025 */  move  $t0, $ra
/* 0040B624 04110001 */  bal   func_0040B62C
/* 0040B628 00000000 */   nop   
func_0040B62C:
/* 0040B62C 3C1C0FC1 */  lui   $gp, 0xfc1
/* 0040B630 279CEC64 */  addiu $gp, $gp, -0x139c
/* 0040B634 039FE021 */  addu  $gp, $gp, $ra
/* 0040B638 0100F825 */  move  $ra, $t0
/* 0040B63C 3C070000 */  lui   $a3, 0
/* 0040B640 00FC3821 */  addu  $a3, $a3, $gp
/* 0040B644 8CE78050 */  lw    $a3, -0x7fb0($a3)
/* 0040B648 8FA40000 */  lw    $a0, ($sp)
/* 0040B64C 27A50004 */  addiu $a1, $sp, 4
/* 0040B650 8CE70000 */  lw    $a3, ($a3)
/* 0040B654 2401FFF0 */  li    $at, -16
/* 0040B658 03A1E824 */  and   $sp, $sp, $at
/* 0040B65C 24A60004 */  addiu $a2, $a1, 4
/* 0040B660 00041080 */  sll   $v0, $a0, 2
/* 0040B664 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0040B668 14E00005 */  bnez  $a3, .L0040B680
/* 0040B66C 00C23021 */   addu  $a2, $a2, $v0
/* 0040B670 3C010000 */  lui   $at, 0
/* 0040B674 003C0821 */  addu  $at, $at, $gp
/* 0040B678 8C218050 */  lw    $at, -0x7fb0($at)
/* 0040B67C AC260000 */  sw    $a2, ($at)
.L0040B680:
/* 0040B680 3C010000 */  lui   $at, 0
/* 0040B684 003C0821 */  addu  $at, $at, $gp
/* 0040B688 8C218944 */  lw    $at, -0x76bc($at)
/* 0040B68C 3C190000 */  lui   $t9, 0
/* 0040B690 033CC821 */  addu  $t9, $t9, $gp
/* 0040B694 AC240000 */  sw    $a0, ($at)
/* 0040B698 3C010000 */  lui   $at, 0
/* 0040B69C 8F3988D8 */  lw    $t9, -0x7728($t9)
/* 0040B6A0 003C0821 */  addu  $at, $at, $gp
/* 0040B6A4 8C218940 */  lw    $at, -0x76c0($at)
/* 0040B6A8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040B6AC AFA0001C */  sw    $zero, 0x1c($sp)
/* 0040B6B0 0000F025 */  move  $fp, $zero
/* 0040B6B4 0320F809 */  jalr  $t9
/* 0040B6B8 AC250000 */   sw    $a1, ($at)
/* 0040B6BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040B6C0 3C190000 */  lui   $t9, 0
/* 0040B6C4 033CC821 */  addu  $t9, $t9, $gp
/* 0040B6C8 8F398078 */  lw    $t9, -0x7f88($t9)
/* 0040B6CC 0320F809 */  jalr  $t9
/* 0040B6D0 00000000 */   nop   
/* 0040B6D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040B6D8 3C190000 */  lui   $t9, 0
/* 0040B6DC 3C040000 */  lui   $a0, 0
/* 0040B6E0 3C050000 */  lui   $a1, 0
/* 0040B6E4 3C060000 */  lui   $a2, 0
/* 0040B6E8 033CC821 */  addu  $t9, $t9, $gp
/* 0040B6EC 8F398418 */  lw    $t9, -0x7be8($t9)
/* 0040B6F0 009C2021 */  addu  $a0, $a0, $gp
/* 0040B6F4 00BC2821 */  addu  $a1, $a1, $gp
/* 0040B6F8 00DC3021 */  addu  $a2, $a2, $gp
/* 0040B6FC 8C848944 */  lw    $a0, -0x76bc($a0)
/* 0040B700 8CA58940 */  lw    $a1, -0x76c0($a1)
/* 0040B704 8CC68050 */  lw    $a2, -0x7fb0($a2)
/* 0040B708 8C840000 */  lw    $a0, ($a0)
/* 0040B70C 8CA50000 */  lw    $a1, ($a1)
/* 0040B710 0320F809 */  jalr  $t9
/* 0040B714 8CC60000 */   lw    $a2, ($a2)
/* 0040B718 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040B71C 3C190000 */  lui   $t9, 0
/* 0040B720 00402025 */  move  $a0, $v0
/* 0040B724 033CC821 */  addu  $t9, $t9, $gp
/* 0040B728 8F3988A8 */  lw    $t9, -0x7758($t9)
/* 0040B72C 0320F809 */  jalr  $t9
/* 0040B730 00000000 */   nop   
/* 0040B734 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040B738 0000000D */  break 
    .type __start, @function
    .size __start, .-__start
    .end __start
glabel _mcount
    .ent _mcount
/* 0040B73C 27BD0010 */  addiu $sp, $sp, 0x10
/* 0040B740 03E00008 */  jr    $ra
/* 0040B744 0020F825 */   move  $ra, $at
    .type _mcount, @function
    .size _mcount, .-_mcount
    .end _mcount
)"");
