__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000F210:
    # 0048CD18 st_changeauxrndx
    .asciz "tried to replace rndx aux (%d) that fits into one word (%d, %d) with one that can't (%d,%d)\n"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel st_tqhigh_iaux
    .ent st_tqhigh_iaux
/* 0048C6F0 3C1C0FB9 */  .cpload $t9
/* 0048C6F4 279CDBA0 */  
/* 0048C6F8 0399E021 */  
/* 0048C6FC 8F9987C4 */  lw    $t9, %call16(st_paux_iaux)($gp)
/* 0048C700 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048C704 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048C708 0320F809 */  jalr  $t9
/* 0048C70C AFBC0018 */   sw    $gp, 0x18($sp)
/* 0048C710 944E0000 */  lhu   $t6, ($v0)
/* 0048C714 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C718 00401825 */  move  $v1, $v0
/* 0048C71C 31CF000F */  andi  $t7, $t6, 0xf
/* 0048C720 11E00004 */  beqz  $t7, .L0048C734
/* 0048C724 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0048C728 94620000 */  lhu   $v0, ($v1)
/* 0048C72C 10000025 */  b     .L0048C7C4
/* 0048C730 3042000F */   andi  $v0, $v0, 0xf
.L0048C734:
/* 0048C734 90580001 */  lbu   $t8, 1($v0)
/* 0048C738 0018C902 */  srl   $t9, $t8, 4
/* 0048C73C 53200005 */  beql  $t9, $zero, .L0048C754
/* 0048C740 8C480000 */   lw    $t0, ($v0)
/* 0048C744 90620001 */  lbu   $v0, 1($v1)
/* 0048C748 1000001E */  b     .L0048C7C4
/* 0048C74C 00021102 */   srl   $v0, $v0, 4
/* 0048C750 8C480000 */  lw    $t0, ($v0)
.L0048C754:
/* 0048C754 3109000F */  andi  $t1, $t0, 0xf
/* 0048C758 51200005 */  beql  $t1, $zero, .L0048C770
/* 0048C75C 904A0003 */   lbu   $t2, 3($v0)
/* 0048C760 8C620000 */  lw    $v0, ($v1)
/* 0048C764 10000017 */  b     .L0048C7C4
/* 0048C768 3042000F */   andi  $v0, $v0, 0xf
/* 0048C76C 904A0003 */  lbu   $t2, 3($v0)
.L0048C770:
/* 0048C770 000A5902 */  srl   $t3, $t2, 4
/* 0048C774 51600005 */  beql  $t3, $zero, .L0048C78C
/* 0048C778 904C0002 */   lbu   $t4, 2($v0)
/* 0048C77C 90620003 */  lbu   $v0, 3($v1)
/* 0048C780 10000010 */  b     .L0048C7C4
/* 0048C784 00021102 */   srl   $v0, $v0, 4
/* 0048C788 904C0002 */  lbu   $t4, 2($v0)
.L0048C78C:
/* 0048C78C 318D000F */  andi  $t5, $t4, 0xf
/* 0048C790 51A00005 */  beql  $t5, $zero, .L0048C7A8
/* 0048C794 944E0002 */   lhu   $t6, 2($v0)
/* 0048C798 90620002 */  lbu   $v0, 2($v1)
/* 0048C79C 10000009 */  b     .L0048C7C4
/* 0048C7A0 3042000F */   andi  $v0, $v0, 0xf
/* 0048C7A4 944E0002 */  lhu   $t6, 2($v0)
.L0048C7A8:
/* 0048C7A8 00001025 */  move  $v0, $zero
/* 0048C7AC 000E7B02 */  srl   $t7, $t6, 0xc
/* 0048C7B0 11E00004 */  beqz  $t7, .L0048C7C4
/* 0048C7B4 00000000 */   nop   
/* 0048C7B8 94620002 */  lhu   $v0, 2($v1)
/* 0048C7BC 10000001 */  b     .L0048C7C4
/* 0048C7C0 00021302 */   srl   $v0, $v0, 0xc
.L0048C7C4:
/* 0048C7C4 03E00008 */  jr    $ra
/* 0048C7C8 27BD0020 */   addiu $sp, $sp, 0x20
    .type st_tqhigh_iaux, @function
    .size st_tqhigh_iaux, .-st_tqhigh_iaux
    .end st_tqhigh_iaux

glabel st_shifttq
    .ent st_shifttq
/* 0048C7CC 3C1C0FB9 */  .cpload $t9
/* 0048C7D0 279CDAC4 */  
/* 0048C7D4 0399E021 */  
/* 0048C7D8 8F9987C4 */  lw    $t9, %call16(st_paux_iaux)($gp)
/* 0048C7DC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048C7E0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048C7E4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048C7E8 0320F809 */  jalr  $t9
/* 0048C7EC AFA50024 */   sw    $a1, 0x24($sp)
/* 0048C7F0 90430001 */  lbu   $v1, 1($v0)
/* 0048C7F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C7F8 90440003 */  lbu   $a0, 3($v0)
/* 0048C7FC 00037102 */  srl   $t6, $v1, 4
/* 0048C800 31CF000F */  andi  $t7, $t6, 0xf
/* 0048C804 3078FFF0 */  andi  $t8, $v1, 0xfff0
/* 0048C808 01F86025 */  or    $t4, $t7, $t8
/* 0048C80C A04C0001 */  sb    $t4, 1($v0)
/* 0048C810 8C490000 */  lw    $t1, ($v0)
/* 0048C814 318D000F */  andi  $t5, $t4, 0xf
/* 0048C818 00047902 */  srl   $t7, $a0, 4
/* 0048C81C 00095900 */  sll   $t3, $t1, 4
/* 0048C820 90490002 */  lbu   $t1, 2($v0)
/* 0048C824 016D7025 */  or    $t6, $t3, $t5
/* 0048C828 31F8000F */  andi  $t8, $t7, 0xf
/* 0048C82C 3099FFF0 */  andi  $t9, $a0, 0xfff0
/* 0048C830 03195825 */  or    $t3, $t8, $t9
/* 0048C834 A04E0001 */  sb    $t6, 1($v0)
/* 0048C838 316D000F */  andi  $t5, $t3, 0xf
/* 0048C83C 00096100 */  sll   $t4, $t1, 4
/* 0048C840 A04B0003 */  sb    $t3, 3($v0)
/* 0048C844 018D7025 */  or    $t6, $t4, $t5
/* 0048C848 A04E0003 */  sb    $t6, 3($v0)
/* 0048C84C 944F0002 */  lhu   $t7, 2($v0)
/* 0048C850 3128FFF0 */  andi  $t0, $t1, 0xfff0
/* 0048C854 000FC302 */  srl   $t8, $t7, 0xc
/* 0048C858 3319000F */  andi  $t9, $t8, 0xf
/* 0048C85C 03287025 */  or    $t6, $t9, $t0
/* 0048C860 A04E0002 */  sb    $t6, 2($v0)
/* 0048C864 8FAB0024 */  lw    $t3, 0x24($sp)
/* 0048C868 31CF000F */  andi  $t7, $t6, 0xf
/* 0048C86C 000B6900 */  sll   $t5, $t3, 4
/* 0048C870 01AFC025 */  or    $t8, $t5, $t7
/* 0048C874 A0580002 */  sb    $t8, 2($v0)
/* 0048C878 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048C87C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048C880 03E00008 */  jr    $ra
/* 0048C884 00000000 */   nop   
    .type st_shifttq, @function
    .size st_shifttq, .-st_shifttq
    .end st_shifttq

glabel st_iaux_copyty
    .ent st_iaux_copyty
    # 0048BC7C st_procbegin
/* 0048C888 3C1C0FB9 */  .cpload $t9
/* 0048C88C 279CDA08 */  
/* 0048C890 0399E021 */  
/* 0048C894 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0048C898 8F9987A8 */  lw    $t9, %call16(st_paux_ifd_iaux)($gp)
/* 0048C89C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048C8A0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048C8A4 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0048C8A8 AFB10018 */  sw    $s1, 0x18($sp)
/* 0048C8AC AFB00014 */  sw    $s0, 0x14($sp)
/* 0048C8B0 AFA5003C */  sw    $a1, 0x3c($sp)
/* 0048C8B4 8CA50008 */  lw    $a1, 8($a1)
/* 0048C8B8 3C01000F */  lui   $at, 0xf
/* 0048C8BC 3421FFFF */  ori   $at, $at, 0xffff
/* 0048C8C0 00809025 */  move  $s2, $a0
/* 0048C8C4 00008825 */  move  $s1, $zero
/* 0048C8C8 0320F809 */  jalr  $t9
/* 0048C8CC 00A12824 */   and   $a1, $a1, $at
/* 0048C8D0 8FA7003C */  lw    $a3, 0x3c($sp)
/* 0048C8D4 24010006 */  li    $at, 6
/* 0048C8D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048C8DC 8CEF0008 */  lw    $t7, 8($a3)
/* 0048C8E0 000FC682 */  srl   $t8, $t7, 0x1a
/* 0048C8E4 57010003 */  bnel  $t8, $at, .L0048C8F4
/* 0048C8E8 00111880 */   sll   $v1, $s1, 2
/* 0048C8EC 24110001 */  li    $s1, 1
/* 0048C8F0 00111880 */  sll   $v1, $s1, 2
.L0048C8F4:
/* 0048C8F4 00623021 */  addu  $a2, $v1, $v0
/* 0048C8F8 90C40000 */  lbu   $a0, ($a2)
/* 0048C8FC 24010025 */  li    $at, 37
/* 0048C900 24630004 */  addiu $v1, $v1, 4
/* 0048C904 3084003F */  andi  $a0, $a0, 0x3f
/* 0048C908 1481000C */  bne   $a0, $at, .L0048C93C
/* 0048C90C 26310001 */   addiu $s1, $s1, 1
/* 0048C910 0043C821 */  addu  $t9, $v0, $v1
/* 0048C914 8F290000 */  lw    $t1, ($t9)
/* 0048C918 24080FFF */  li    $t0, 4095
/* 0048C91C 00095502 */  srl   $t2, $t1, 0x14
/* 0048C920 550A0004 */  bnel  $t0, $t2, .L0048C934
/* 0048C924 26310001 */   addiu $s1, $s1, 1
/* 0048C928 26310001 */  addiu $s1, $s1, 1
/* 0048C92C 24630004 */  addiu $v1, $v1, 4
/* 0048C930 26310001 */  addiu $s1, $s1, 1
.L0048C934:
/* 0048C934 10000025 */  b     .L0048C9CC
/* 0048C938 24630004 */   addiu $v1, $v1, 4
.L0048C93C:
/* 0048C93C 24010011 */  li    $at, 17
/* 0048C940 1081000C */  beq   $a0, $at, .L0048C974
/* 0048C944 00435821 */   addu  $t3, $v0, $v1
/* 0048C948 24010014 */  li    $at, 20
/* 0048C94C 10810009 */  beq   $a0, $at, .L0048C974
/* 0048C950 2401000C */   li    $at, 12
/* 0048C954 10810007 */  beq   $a0, $at, .L0048C974
/* 0048C958 2401000D */   li    $at, 13
/* 0048C95C 10810005 */  beq   $a0, $at, .L0048C974
/* 0048C960 2401000F */   li    $at, 15
/* 0048C964 10810003 */  beq   $a0, $at, .L0048C974
/* 0048C968 2401000E */   li    $at, 14
/* 0048C96C 5481000C */  bnel  $a0, $at, .L0048C9A0
/* 0048C970 24010010 */   li    $at, 16
.L0048C974:
/* 0048C974 8D6C0000 */  lw    $t4, ($t3)
/* 0048C978 24080FFF */  li    $t0, 4095
/* 0048C97C 000C6D02 */  srl   $t5, $t4, 0x14
/* 0048C980 550D0004 */  bnel  $t0, $t5, .L0048C994
/* 0048C984 26310001 */   addiu $s1, $s1, 1
/* 0048C988 26310001 */  addiu $s1, $s1, 1
/* 0048C98C 24630004 */  addiu $v1, $v1, 4
/* 0048C990 26310001 */  addiu $s1, $s1, 1
.L0048C994:
/* 0048C994 1000000D */  b     .L0048C9CC
/* 0048C998 24630004 */   addiu $v1, $v1, 4
/* 0048C99C 24010010 */  li    $at, 16
.L0048C9A0:
/* 0048C9A0 1481000A */  bne   $a0, $at, .L0048C9CC
/* 0048C9A4 00437021 */   addu  $t6, $v0, $v1
/* 0048C9A8 8DCF0000 */  lw    $t7, ($t6)
/* 0048C9AC 24080FFF */  li    $t0, 4095
/* 0048C9B0 000FC502 */  srl   $t8, $t7, 0x14
/* 0048C9B4 55180004 */  bnel  $t0, $t8, .L0048C9C8
/* 0048C9B8 26310003 */   addiu $s1, $s1, 3
/* 0048C9BC 26310001 */  addiu $s1, $s1, 1
/* 0048C9C0 24630004 */  addiu $v1, $v1, 4
/* 0048C9C4 26310003 */  addiu $s1, $s1, 3
.L0048C9C8:
/* 0048C9C8 2463000C */  addiu $v1, $v1, 0xc
.L0048C9CC:
/* 0048C9CC 94D90002 */  lhu   $t9, 2($a2)
/* 0048C9D0 24040003 */  li    $a0, 3
/* 0048C9D4 24080FFF */  li    $t0, 4095
/* 0048C9D8 00194B02 */  srl   $t1, $t9, 0xc
/* 0048C9DC 14890009 */  bne   $a0, $t1, .L0048CA04
/* 0048C9E0 00435021 */   addu  $t2, $v0, $v1
/* 0048C9E4 8D4B0000 */  lw    $t3, ($t2)
/* 0048C9E8 000B6502 */  srl   $t4, $t3, 0x14
/* 0048C9EC 550C0004 */  bnel  $t0, $t4, .L0048CA00
/* 0048C9F0 26310004 */   addiu $s1, $s1, 4
/* 0048C9F4 26310001 */  addiu $s1, $s1, 1
/* 0048C9F8 24630004 */  addiu $v1, $v1, 4
/* 0048C9FC 26310004 */  addiu $s1, $s1, 4
.L0048CA00:
/* 0048CA00 24630010 */  addiu $v1, $v1, 0x10
.L0048CA04:
/* 0048CA04 90CD0002 */  lbu   $t5, 2($a2)
/* 0048CA08 00437821 */  addu  $t7, $v0, $v1
/* 0048CA0C 31AE000F */  andi  $t6, $t5, 0xf
/* 0048CA10 548E000A */  bnel  $a0, $t6, .L0048CA3C
/* 0048CA14 90C90003 */   lbu   $t1, 3($a2)
/* 0048CA18 8DF80000 */  lw    $t8, ($t7)
/* 0048CA1C 0018CD02 */  srl   $t9, $t8, 0x14
/* 0048CA20 55190004 */  bnel  $t0, $t9, .L0048CA34
/* 0048CA24 26310004 */   addiu $s1, $s1, 4
/* 0048CA28 26310001 */  addiu $s1, $s1, 1
/* 0048CA2C 24630004 */  addiu $v1, $v1, 4
/* 0048CA30 26310004 */  addiu $s1, $s1, 4
.L0048CA34:
/* 0048CA34 24630010 */  addiu $v1, $v1, 0x10
/* 0048CA38 90C90003 */  lbu   $t1, 3($a2)
.L0048CA3C:
/* 0048CA3C 00435821 */  addu  $t3, $v0, $v1
/* 0048CA40 00095102 */  srl   $t2, $t1, 4
/* 0048CA44 548A000A */  bnel  $a0, $t2, .L0048CA70
/* 0048CA48 8CC50000 */   lw    $a1, ($a2)
/* 0048CA4C 8D6C0000 */  lw    $t4, ($t3)
/* 0048CA50 000C6D02 */  srl   $t5, $t4, 0x14
/* 0048CA54 550D0004 */  bnel  $t0, $t5, .L0048CA68
/* 0048CA58 26310004 */   addiu $s1, $s1, 4
/* 0048CA5C 26310001 */  addiu $s1, $s1, 1
/* 0048CA60 24630004 */  addiu $v1, $v1, 4
/* 0048CA64 26310004 */  addiu $s1, $s1, 4
.L0048CA68:
/* 0048CA68 24630010 */  addiu $v1, $v1, 0x10
/* 0048CA6C 8CC50000 */  lw    $a1, ($a2)
.L0048CA70:
/* 0048CA70 00437821 */  addu  $t7, $v0, $v1
/* 0048CA74 30AE000F */  andi  $t6, $a1, 0xf
/* 0048CA78 548E000A */  bnel  $a0, $t6, .L0048CAA4
/* 0048CA7C 90C90001 */   lbu   $t1, 1($a2)
/* 0048CA80 8DF80000 */  lw    $t8, ($t7)
/* 0048CA84 0018CD02 */  srl   $t9, $t8, 0x14
/* 0048CA88 55190004 */  bnel  $t0, $t9, .L0048CA9C
/* 0048CA8C 26310004 */   addiu $s1, $s1, 4
/* 0048CA90 26310001 */  addiu $s1, $s1, 1
/* 0048CA94 24630004 */  addiu $v1, $v1, 4
/* 0048CA98 26310004 */  addiu $s1, $s1, 4
.L0048CA9C:
/* 0048CA9C 24630010 */  addiu $v1, $v1, 0x10
/* 0048CAA0 90C90001 */  lbu   $t1, 1($a2)
.L0048CAA4:
/* 0048CAA4 00435821 */  addu  $t3, $v0, $v1
/* 0048CAA8 00095102 */  srl   $t2, $t1, 4
/* 0048CAAC 548A000A */  bnel  $a0, $t2, .L0048CAD8
/* 0048CAB0 94CE0000 */   lhu   $t6, ($a2)
/* 0048CAB4 8D6C0000 */  lw    $t4, ($t3)
/* 0048CAB8 000C6D02 */  srl   $t5, $t4, 0x14
/* 0048CABC 550D0004 */  bnel  $t0, $t5, .L0048CAD0
/* 0048CAC0 26310004 */   addiu $s1, $s1, 4
/* 0048CAC4 26310001 */  addiu $s1, $s1, 1
/* 0048CAC8 24630004 */  addiu $v1, $v1, 4
/* 0048CACC 26310004 */  addiu $s1, $s1, 4
.L0048CAD0:
/* 0048CAD0 24630010 */  addiu $v1, $v1, 0x10
/* 0048CAD4 94CE0000 */  lhu   $t6, ($a2)
.L0048CAD8:
/* 0048CAD8 0043C021 */  addu  $t8, $v0, $v1
/* 0048CADC 000557C2 */  srl   $t2, $a1, 0x1f
/* 0048CAE0 31CF000F */  andi  $t7, $t6, 0xf
/* 0048CAE4 148F0007 */  bne   $a0, $t7, .L0048CB04
/* 0048CAE8 00000000 */   nop   
/* 0048CAEC 8F190000 */  lw    $t9, ($t8)
/* 0048CAF0 00194D02 */  srl   $t1, $t9, 0x14
/* 0048CAF4 55090003 */  bnel  $t0, $t1, .L0048CB04
/* 0048CAF8 26310004 */   addiu $s1, $s1, 4
/* 0048CAFC 26310001 */  addiu $s1, $s1, 1
/* 0048CB00 26310004 */  addiu $s1, $s1, 4
.L0048CB04:
/* 0048CB04 11400002 */  beqz  $t2, .L0048CB10
/* 0048CB08 00000000 */   nop   
/* 0048CB0C 26310001 */  addiu $s1, $s1, 1
.L0048CB10:
/* 0048CB10 1A200025 */  blez  $s1, .L0048CBA8
/* 0048CB14 00008025 */   move  $s0, $zero
/* 0048CB18 8FA7003C */  lw    $a3, 0x3c($sp)
.L0048CB1C:
/* 0048CB1C 02402025 */  move  $a0, $s2
/* 0048CB20 16000011 */  bnez  $s0, .L0048CB68
/* 0048CB24 8CE20008 */   lw    $v0, 8($a3)
/* 0048CB28 8F9987A8 */  lw    $t9, %call16(st_paux_ifd_iaux)($gp)
/* 0048CB2C 3C01000F */  lui   $at, 0xf
/* 0048CB30 3421FFFF */  ori   $at, $at, 0xffff
/* 0048CB34 00415824 */  and   $t3, $v0, $at
/* 0048CB38 01702821 */  addu  $a1, $t3, $s0
/* 0048CB3C 0320F809 */  jalr  $t9
/* 0048CB40 02402025 */   move  $a0, $s2
/* 0048CB44 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048CB48 8C440000 */  lw    $a0, ($v0)
/* 0048CB4C 8F99879C */  lw    $t9, %call16(st_auxadd)($gp)
/* 0048CB50 AFA40000 */  sw    $a0, ($sp)
/* 0048CB54 0320F809 */  jalr  $t9
/* 0048CB58 00000000 */   nop   
/* 0048CB5C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048CB60 1000000E */  b     .L0048CB9C
/* 0048CB64 AFA2002C */   sw    $v0, 0x2c($sp)
.L0048CB68:
/* 0048CB68 8F9987A8 */  lw    $t9, %call16(st_paux_ifd_iaux)($gp)
/* 0048CB6C 3C01000F */  lui   $at, 0xf
/* 0048CB70 3421FFFF */  ori   $at, $at, 0xffff
/* 0048CB74 00417024 */  and   $t6, $v0, $at
/* 0048CB78 0320F809 */  jalr  $t9
/* 0048CB7C 01D02821 */   addu  $a1, $t6, $s0
/* 0048CB80 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048CB84 8C440000 */  lw    $a0, ($v0)
/* 0048CB88 8F99879C */  lw    $t9, %call16(st_auxadd)($gp)
/* 0048CB8C AFA40000 */  sw    $a0, ($sp)
/* 0048CB90 0320F809 */  jalr  $t9
/* 0048CB94 00000000 */   nop   
/* 0048CB98 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048CB9C:
/* 0048CB9C 26100001 */  addiu $s0, $s0, 1
/* 0048CBA0 5611FFDE */  bnel  $s0, $s1, .L0048CB1C
/* 0048CBA4 8FA7003C */   lw    $a3, 0x3c($sp)
.L0048CBA8:
/* 0048CBA8 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048CBAC 8FA2002C */  lw    $v0, 0x2c($sp)
/* 0048CBB0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0048CBB4 8FB10018 */  lw    $s1, 0x18($sp)
/* 0048CBB8 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0048CBBC 03E00008 */  jr    $ra
/* 0048CBC0 27BD0038 */   addiu $sp, $sp, 0x38
    .type st_iaux_copyty, @function
    .size st_iaux_copyty, .-st_iaux_copyty
    .end st_iaux_copyty

glabel st_changeaux
    .ent st_changeaux
/* 0048CBC4 3C1C0FB9 */  .cpload $t9
/* 0048CBC8 279CD6CC */  
/* 0048CBCC 0399E021 */  
/* 0048CBD0 8F9987C4 */  lw    $t9, %call16(st_paux_iaux)($gp)
/* 0048CBD4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048CBD8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048CBDC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048CBE0 0320F809 */  jalr  $t9
/* 0048CBE4 AFA50024 */   sw    $a1, 0x24($sp)
/* 0048CBE8 27AE0024 */  addiu $t6, $sp, 0x24
/* 0048CBEC 8DD80000 */  lw    $t8, ($t6)
/* 0048CBF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CBF4 AC580000 */  sw    $t8, ($v0)
/* 0048CBF8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048CBFC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048CC00 03E00008 */  jr    $ra
/* 0048CC04 00000000 */   nop   
    .type st_changeaux, @function
    .size st_changeaux, .-st_changeaux
    .end st_changeaux

glabel st_addtq
    .ent st_addtq
/* 0048CC08 3C1C0FB9 */  .cpload $t9
/* 0048CC0C 279CD688 */  
/* 0048CC10 0399E021 */  
/* 0048CC14 8F9987C4 */  lw    $t9, %call16(st_paux_iaux)($gp)
/* 0048CC18 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048CC1C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048CC20 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048CC24 0320F809 */  jalr  $t9
/* 0048CC28 AFA50024 */   sw    $a1, 0x24($sp)
/* 0048CC2C 944E0002 */  lhu   $t6, 2($v0)
/* 0048CC30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CC34 8FA50024 */  lw    $a1, 0x24($sp)
/* 0048CC38 000E7B02 */  srl   $t7, $t6, 0xc
/* 0048CC3C 55E00009 */  bnezl $t7, .L0048CC64
/* 0048CC40 90430002 */   lbu   $v1, 2($v0)
/* 0048CC44 90490002 */  lbu   $t1, 2($v0)
/* 0048CC48 30B8000F */  andi  $t8, $a1, 0xf
/* 0048CC4C 0018C900 */  sll   $t9, $t8, 4
/* 0048CC50 312AFF0F */  andi  $t2, $t1, 0xff0f
/* 0048CC54 032A5825 */  or    $t3, $t9, $t2
/* 0048CC58 1000002B */  b     .L0048CD08
/* 0048CC5C A04B0002 */   sb    $t3, 2($v0)
/* 0048CC60 90430002 */  lbu   $v1, 2($v0)
.L0048CC64:
/* 0048CC64 30AE000F */  andi  $t6, $a1, 0xf
/* 0048CC68 306C000F */  andi  $t4, $v1, 0xf
/* 0048CC6C 15800004 */  bnez  $t4, .L0048CC80
/* 0048CC70 306FFFF0 */   andi  $t7, $v1, 0xfff0
/* 0048CC74 01CFC025 */  or    $t8, $t6, $t7
/* 0048CC78 10000023 */  b     .L0048CD08
/* 0048CC7C A0580002 */   sb    $t8, 2($v0)
.L0048CC80:
/* 0048CC80 90430003 */  lbu   $v1, 3($v0)
/* 0048CC84 00055100 */  sll   $t2, $a1, 4
/* 0048CC88 0003C902 */  srl   $t9, $v1, 4
/* 0048CC8C 17200004 */  bnez  $t9, .L0048CCA0
/* 0048CC90 306BFF0F */   andi  $t3, $v1, 0xff0f
/* 0048CC94 014B6025 */  or    $t4, $t2, $t3
/* 0048CC98 1000001B */  b     .L0048CD08
/* 0048CC9C A04C0003 */   sb    $t4, 3($v0)
.L0048CCA0:
/* 0048CCA0 8C4D0000 */  lw    $t5, ($v0)
/* 0048CCA4 30B8000F */  andi  $t8, $a1, 0xf
/* 0048CCA8 31AE000F */  andi  $t6, $t5, 0xf
/* 0048CCAC 55C00006 */  bnezl $t6, .L0048CCC8
/* 0048CCB0 90430001 */   lbu   $v1, 1($v0)
/* 0048CCB4 3079FFF0 */  andi  $t9, $v1, 0xfff0
/* 0048CCB8 03194825 */  or    $t1, $t8, $t9
/* 0048CCBC 10000012 */  b     .L0048CD08
/* 0048CCC0 A0490003 */   sb    $t1, 3($v0)
/* 0048CCC4 90430001 */  lbu   $v1, 1($v0)
.L0048CCC8:
/* 0048CCC8 00056100 */  sll   $t4, $a1, 4
/* 0048CCCC 00034102 */  srl   $t0, $v1, 4
/* 0048CCD0 15000004 */  bnez  $t0, .L0048CCE4
/* 0048CCD4 306DFF0F */   andi  $t5, $v1, 0xff0f
/* 0048CCD8 018D7025 */  or    $t6, $t4, $t5
/* 0048CCDC 1000000A */  b     .L0048CD08
/* 0048CCE0 A04E0001 */   sb    $t6, 1($v0)
.L0048CCE4:
/* 0048CCE4 944F0000 */  lhu   $t7, ($v0)
/* 0048CCE8 3068FFF0 */  andi  $t0, $v1, 0xfff0
/* 0048CCEC 31F8000F */  andi  $t8, $t7, 0xf
/* 0048CCF0 57000006 */  bnezl $t8, .L0048CD0C
/* 0048CCF4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0048CCF8 30B9000F */  andi  $t9, $a1, 0xf
/* 0048CCFC 3329000F */  andi  $t1, $t9, 0xf
/* 0048CD00 01285025 */  or    $t2, $t1, $t0
/* 0048CD04 A04A0001 */  sb    $t2, 1($v0)
.L0048CD08:
/* 0048CD08 8FBF001C */  lw    $ra, 0x1c($sp)
.L0048CD0C:
/* 0048CD0C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048CD10 03E00008 */  jr    $ra
/* 0048CD14 00000000 */   nop   
    .type st_addtq, @function
    .size st_addtq, .-st_addtq
    .end st_addtq

glabel st_changeauxrndx
    .ent st_changeauxrndx
/* 0048CD18 3C1C0FB9 */  .cpload $t9
/* 0048CD1C 279CD578 */  
/* 0048CD20 0399E021 */  
/* 0048CD24 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0048CD28 8F9987C4 */  lw    $t9, %call16(st_paux_iaux)($gp)
/* 0048CD2C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048CD30 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048CD34 AFA40038 */  sw    $a0, 0x38($sp)
/* 0048CD38 AFA5003C */  sw    $a1, 0x3c($sp)
/* 0048CD3C 0320F809 */  jalr  $t9
/* 0048CD40 AFA60040 */   sw    $a2, 0x40($sp)
/* 0048CD44 8C4E0000 */  lw    $t6, ($v0)
/* 0048CD48 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048CD4C 8FA8003C */  lw    $t0, 0x3c($sp)
/* 0048CD50 000E7D02 */  srl   $t7, $t6, 0x14
/* 0048CD54 2DE10FFF */  sltiu $at, $t7, 0xfff
/* 0048CD58 10200014 */  beqz  $at, .L0048CDAC
/* 0048CD5C 00401825 */   move  $v1, $v0
/* 0048CD60 29010FFF */  slti  $at, $t0, 0xfff
/* 0048CD64 14200011 */  bnez  $at, .L0048CDAC
/* 0048CD68 8FA50038 */   lw    $a1, 0x38($sp)
/* 0048CD6C 8C420000 */  lw    $v0, ($v0)
/* 0048CD70 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 0048CD74 8F848044 */  lw    $a0, %got(RO_1000F210)($gp)
/* 0048CD78 8FB80040 */  lw    $t8, 0x40($sp)
/* 0048CD7C 3C01000F */  lui   $at, 0xf
/* 0048CD80 3421FFFF */  ori   $at, $at, 0xffff
/* 0048CD84 AFA3002C */  sw    $v1, 0x2c($sp)
/* 0048CD88 AFA80010 */  sw    $t0, 0x10($sp)
/* 0048CD8C 00413824 */  and   $a3, $v0, $at
/* 0048CD90 00023502 */  srl   $a2, $v0, 0x14
/* 0048CD94 2484F210 */  addiu $a0, %lo(RO_1000F210) # addiu $a0, $a0, -0xdf0
/* 0048CD98 0320F809 */  jalr  $t9
/* 0048CD9C AFB80014 */   sw    $t8, 0x14($sp)
/* 0048CDA0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048CDA4 8FA3002C */  lw    $v1, 0x2c($sp)
/* 0048CDA8 8FA8003C */  lw    $t0, 0x3c($sp)
.L0048CDAC:
/* 0048CDAC 8C790000 */  lw    $t9, ($v1)
/* 0048CDB0 00194D02 */  srl   $t1, $t9, 0x14
/* 0048CDB4 2D210FFF */  sltiu $at, $t1, 0xfff
/* 0048CDB8 50200008 */  beql  $at, $zero, .L0048CDDC
/* 0048CDBC AC680004 */   sw    $t0, 4($v1)
/* 0048CDC0 946D0000 */  lhu   $t5, ($v1)
/* 0048CDC4 00086100 */  sll   $t4, $t0, 4
/* 0048CDC8 31AE000F */  andi  $t6, $t5, 0xf
/* 0048CDCC 018E7825 */  or    $t7, $t4, $t6
/* 0048CDD0 10000002 */  b     .L0048CDDC
/* 0048CDD4 A46F0000 */   sh    $t7, ($v1)
/* 0048CDD8 AC680004 */  sw    $t0, 4($v1)
.L0048CDDC:
/* 0048CDDC 8FB80040 */  lw    $t8, 0x40($sp)
/* 0048CDE0 8C620000 */  lw    $v0, ($v1)
/* 0048CDE4 3C01000F */  lui   $at, 0xf
/* 0048CDE8 3421FFFF */  ori   $at, $at, 0xffff
/* 0048CDEC 0301C824 */  and   $t9, $t8, $at
/* 0048CDF0 03224826 */  xor   $t1, $t9, $v0
/* 0048CDF4 00095300 */  sll   $t2, $t1, 0xc
/* 0048CDF8 000A5B02 */  srl   $t3, $t2, 0xc
/* 0048CDFC 01626826 */  xor   $t5, $t3, $v0
/* 0048CE00 AC6D0000 */  sw    $t5, ($v1)
/* 0048CE04 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048CE08 27BD0038 */  addiu $sp, $sp, 0x38
/* 0048CE0C 03E00008 */  jr    $ra
/* 0048CE10 00000000 */   nop   
    .type st_changeauxrndx, @function
    .size st_changeauxrndx, .-st_changeauxrndx
    .end st_changeauxrndx

glabel st_auxbtadd
    .ent st_auxbtadd
/* 0048CE14 3C1C0FB9 */  .cpload $t9
/* 0048CE18 279CD47C */  
/* 0048CE1C 0399E021 */  
/* 0048CE20 8F9980F0 */  lw    $t9, %call16(memset)($gp)
/* 0048CE24 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0048CE28 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048CE2C AFA40028 */  sw    $a0, 0x28($sp)
/* 0048CE30 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048CE34 27A40024 */  addiu $a0, $sp, 0x24
/* 0048CE38 00002825 */  move  $a1, $zero
/* 0048CE3C 0320F809 */  jalr  $t9
/* 0048CE40 24060004 */   li    $a2, 4
/* 0048CE44 8FAF0028 */  lw    $t7, 0x28($sp)
/* 0048CE48 93B90024 */  lbu   $t9, 0x24($sp)
/* 0048CE4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CE50 31F8003F */  andi  $t8, $t7, 0x3f
/* 0048CE54 3328FFC0 */  andi  $t0, $t9, 0xffc0
/* 0048CE58 03084825 */  or    $t1, $t8, $t0
/* 0048CE5C 8F99879C */  lw    $t9, %call16(st_auxadd)($gp)
/* 0048CE60 A3A90024 */  sb    $t1, 0x24($sp)
/* 0048CE64 8FA40024 */  lw    $a0, 0x24($sp)
/* 0048CE68 0320F809 */  jalr  $t9
/* 0048CE6C AFA40000 */   sw    $a0, ($sp)
/* 0048CE70 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048CE74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CE78 27BD0028 */  addiu $sp, $sp, 0x28
/* 0048CE7C 03E00008 */  jr    $ra
/* 0048CE80 00000000 */   nop   
    .type st_auxbtadd, @function
    .size st_auxbtadd, .-st_auxbtadd
    .end st_auxbtadd

glabel st_auxisymadd
    .ent st_auxisymadd
    # 0048CEC0 st_auxrndxadd
    # 0048CF54 st_auxbtsize
/* 0048CE84 3C1C0FB9 */  .cpload $t9
/* 0048CE88 279CD40C */  
/* 0048CE8C 0399E021 */  
/* 0048CE90 8F99879C */  lw    $t9, %call16(st_auxadd)($gp)
/* 0048CE94 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0048CE98 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048CE9C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048CEA0 AFA40024 */  sw    $a0, 0x24($sp)
/* 0048CEA4 0320F809 */  jalr  $t9
/* 0048CEA8 AFA40000 */   sw    $a0, ($sp)
/* 0048CEAC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048CEB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CEB4 27BD0028 */  addiu $sp, $sp, 0x28
/* 0048CEB8 03E00008 */  jr    $ra
/* 0048CEBC 00000000 */   nop   
    .type st_auxisymadd, @function
    .size st_auxisymadd, .-st_auxisymadd
    .end st_auxisymadd

glabel st_auxrndxadd
    .ent st_auxrndxadd
    # 0048CFAC st_auxrndxadd_idn
/* 0048CEC0 3C1C0FB9 */  .cpload $t9
/* 0048CEC4 279CD3D0 */  
/* 0048CEC8 0399E021 */  
/* 0048CECC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0048CED0 97AF002C */  lhu   $t7, 0x2c($sp)
/* 0048CED4 3C01000F */  lui   $at, 0xf
/* 0048CED8 3421FFFF */  ori   $at, $at, 0xffff
/* 0048CEDC 35F8FFF0 */  ori   $t8, $t7, 0xfff0
/* 0048CEE0 A7B8002C */  sh    $t8, 0x2c($sp)
/* 0048CEE4 8FA8002C */  lw    $t0, 0x2c($sp)
/* 0048CEE8 00A1C824 */  and   $t9, $a1, $at
/* 0048CEEC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048CEF0 03284826 */  xor   $t1, $t9, $t0
/* 0048CEF4 00095300 */  sll   $t2, $t1, 0xc
/* 0048CEF8 000A5B02 */  srl   $t3, $t2, 0xc
/* 0048CEFC 01686026 */  xor   $t4, $t3, $t0
/* 0048CF00 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048CF04 AFA40030 */  sw    $a0, 0x30($sp)
/* 0048CF08 AFAC002C */  sw    $t4, 0x2c($sp)
/* 0048CF0C 27AD002C */  addiu $t5, $sp, 0x2c
/* 0048CF10 8DA40000 */  lw    $a0, ($t5)
/* 0048CF14 8F99879C */  lw    $t9, %call16(st_auxadd)($gp)
/* 0048CF18 27A20028 */  addiu $v0, $sp, 0x28
/* 0048CF1C AC440000 */  sw    $a0, ($v0)
/* 0048CF20 0320F809 */  jalr  $t9
/* 0048CF24 AFA40000 */   sw    $a0, ($sp)
/* 0048CF28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CF2C AFA20024 */  sw    $v0, 0x24($sp)
/* 0048CF30 8FA40030 */  lw    $a0, 0x30($sp)
/* 0048CF34 8F998800 */  lw    $t9, %call16(st_auxisymadd)($gp)
/* 0048CF38 0320F809 */  jalr  $t9
/* 0048CF3C 00000000 */   nop   
/* 0048CF40 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048CF44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CF48 8FA20024 */  lw    $v0, 0x24($sp)
/* 0048CF4C 03E00008 */  jr    $ra
/* 0048CF50 27BD0030 */   addiu $sp, $sp, 0x30
    .type st_auxrndxadd, @function
    .size st_auxrndxadd, .-st_auxrndxadd
    .end st_auxrndxadd

glabel st_auxbtsize
    .ent st_auxbtsize
/* 0048CF54 3C1C0FB9 */  .cpload $t9
/* 0048CF58 279CD33C */  
/* 0048CF5C 0399E021 */  
/* 0048CF60 8F9987C4 */  lw    $t9, %call16(st_paux_iaux)($gp)
/* 0048CF64 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048CF68 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048CF6C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048CF70 0320F809 */  jalr  $t9
/* 0048CF74 AFA50024 */   sw    $a1, 0x24($sp)
/* 0048CF78 904F0000 */  lbu   $t7, ($v0)
/* 0048CF7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CF80 35F80080 */  ori   $t8, $t7, 0x80
/* 0048CF84 A0580000 */  sb    $t8, ($v0)
/* 0048CF88 8F998800 */  lw    $t9, %call16(st_auxisymadd)($gp)
/* 0048CF8C 8FA40024 */  lw    $a0, 0x24($sp)
/* 0048CF90 0320F809 */  jalr  $t9
/* 0048CF94 00000000 */   nop   
/* 0048CF98 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048CF9C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CFA0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048CFA4 03E00008 */  jr    $ra
/* 0048CFA8 00000000 */   nop   
    .type st_auxbtsize, @function
    .size st_auxbtsize, .-st_auxbtsize
    .end st_auxbtsize

glabel st_auxrndxadd_idn
    .ent st_auxrndxadd_idn
/* 0048CFAC 3C1C0FB9 */  .cpload $t9
/* 0048CFB0 279CD2E4 */  
/* 0048CFB4 0399E021 */  
/* 0048CFB8 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048CFBC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048CFC0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048CFC4 0320F809 */  jalr  $t9
/* 0048CFC8 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0048CFCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CFD0 8C440000 */  lw    $a0, ($v0)
/* 0048CFD4 8C450004 */  lw    $a1, 4($v0)
/* 0048CFD8 8F998804 */  lw    $t9, %call16(st_auxrndxadd)($gp)
/* 0048CFDC 0320F809 */  jalr  $t9
/* 0048CFE0 00000000 */   nop   
/* 0048CFE4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048CFE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048CFEC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048CFF0 03E00008 */  jr    $ra
/* 0048CFF4 00000000 */   nop   
    .type st_auxrndxadd_idn, @function
    .size st_auxrndxadd_idn, .-st_auxrndxadd_idn
    .end st_auxrndxadd_idn

glabel st_addcontinued
    .ent st_addcontinued
/* 0048CFF8 3C1C0FB9 */  .cpload $t9
/* 0048CFFC 279CD298 */  
/* 0048D000 0399E021 */  
/* 0048D004 8F9987C4 */  lw    $t9, %call16(st_paux_iaux)($gp)
/* 0048D008 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048D00C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048D010 0320F809 */  jalr  $t9
/* 0048D014 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0048D018 904F0000 */  lbu   $t7, ($v0)
/* 0048D01C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048D020 35F80040 */  ori   $t8, $t7, 0x40
/* 0048D024 A0580000 */  sb    $t8, ($v0)
/* 0048D028 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048D02C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048D030 03E00008 */  jr    $ra
/* 0048D034 00000000 */   nop   
    .type st_addcontinued, @function
    .size st_addcontinued, .-st_addcontinued
    .end st_addcontinued
)"");
