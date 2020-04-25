__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000FCC0:
    # 00498640 exit
    .asciz "/tmp/pas%d.%d"

RO_1000FCD0:
    .asciz "@(#)$Header: IRIX 6.4:1263370533 built 11/12/96 at slayer:/slayer_xlv0/ficussg-nov05/root $"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel exit
    .ent exit
    # 0040B7D0 func_0040B7D0
    # 0040B930 read_feedback_file
    # 0040BCA0 path_blockno
    # 0045806C main
    # 00480700 abort
    # 00487120 uputinit
    # 00487218 uputint
    # 00487328 uputflush
    # 00487458 uputkill
    # 0048752C ugetinit
    # 00487668 ugetint
    # 004878AC ugetclose
    # 00488A48 st_setmsgname
    # 00488AF0 st_error
    # 0048A430 _md_st_internal
    # 0048A4EC _md_st_error
    # 0048AD70 st_internal
    # 00497C90 rewrite
    # 00497F70 clock
    # 004983F0 _getbuf
/* 00498640 3C1C0FB8 */  .cpload $t9
/* 00498644 279C1C50 */  
/* 00498648 0399E021 */  
/* 0049864C 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 00498650 AFB00014 */  sw    $s0, 0x14($sp)
/* 00498654 8F908CC0 */  lw     $s0, %got(_libp_pascal_file_counter)($gp)
/* 00498658 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0049865C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00498660 8E100000 */  lw    $s0, ($s0)
/* 00498664 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00498668 AFB10018 */  sw    $s1, 0x18($sp)
/* 0049866C 12000017 */  beqz  $s0, .L004986CC
/* 00498670 AFA40050 */   sw    $a0, 0x50($sp)
/* 00498674 8F928044 */  lw    $s2, %got(RO_1000FCC0)($gp)
/* 00498678 27B10034 */  addiu $s1, $sp, 0x34
/* 0049867C 2652FCC0 */  addiu $s2, %lo(RO_1000FCC0) # addiu $s2, $s2, -0x340
.L00498680:
/* 00498680 8F99813C */  lw    $t9, %call16(getpid)($gp)
/* 00498684 0320F809 */  jalr  $t9
/* 00498688 00000000 */   nop   
/* 0049868C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00498690 02202025 */  move  $a0, $s1
/* 00498694 02402825 */  move  $a1, $s2
/* 00498698 8F9980E0 */  lw    $t9, %call16(sprintf)($gp)
/* 0049869C 02003025 */  move  $a2, $s0
/* 004986A0 00403825 */  move  $a3, $v0
/* 004986A4 0320F809 */  jalr  $t9
/* 004986A8 00000000 */   nop   
/* 004986AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004986B0 02202025 */  move  $a0, $s1
/* 004986B4 8F9980B0 */  lw    $t9, %call16(unlink)($gp)
/* 004986B8 0320F809 */  jalr  $t9
/* 004986BC 00000000 */   nop   
/* 004986C0 2610FFFF */  addiu $s0, $s0, -1
/* 004986C4 1600FFEE */  bnez  $s0, .L00498680
/* 004986C8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004986CC:
/* 004986CC 8F998154 */  lw    $t9, %call16(_prctl)($gp)
/* 004986D0 2404000E */  li    $a0, 14
/* 004986D4 0320F809 */  jalr  $t9
/* 004986D8 00000000 */   nop   
/* 004986DC 28410002 */  slti  $at, $v0, 2
/* 004986E0 1020000D */  beqz  $at, .L00498718
/* 004986E4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004986E8 8F998158 */  lw    $t9, %call16(_exithandle)($gp)
/* 004986EC 0320F809 */  jalr  $t9
/* 004986F0 00000000 */   nop   
/* 004986F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004986F8 8F8E8068 */  lw     $t6, %got(_DYNAMIC_LINK)($gp)
/* 004986FC 11C00006 */  beqz  $t6, .L00498718
/* 00498700 00000000 */   nop   
/* 00498704 8F99815C */  lw    $t9, %call16(_rld_new_interface)($gp)
/* 00498708 00002025 */  move  $a0, $zero
/* 0049870C 0320F809 */  jalr  $t9
/* 00498710 00000000 */   nop   
/* 00498714 8FBC0020 */  lw    $gp, 0x20($sp)
.L00498718:
/* 00498718 8F998160 */  lw    $t9, %call16(_cleanup)($gp)
/* 0049871C 0320F809 */  jalr  $t9
/* 00498720 00000000 */   nop   
/* 00498724 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00498728 8FA40050 */  lw    $a0, 0x50($sp)
/* 0049872C 8F998164 */  lw    $t9, %call16(_exit)($gp)
/* 00498730 0320F809 */  jalr  $t9
/* 00498734 00000000 */   nop   
/* 00498738 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0049873C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00498740 8FB00014 */  lw    $s0, 0x14($sp)
/* 00498744 8FB10018 */  lw    $s1, 0x18($sp)
/* 00498748 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0049874C 03E00008 */  jr    $ra
/* 00498750 27BD0050 */   addiu $sp, $sp, 0x50
    .type exit, @function
    .size exit, .-exit
    .end exit
)"");
