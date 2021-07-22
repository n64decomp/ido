#include "libp/libp.h"
#include "libu/libu.h"
#include "ucode.h"
#include "uoptions.h"
#include "uoptutil.h"
#include "uoptdata.h"
#include "uoptkill.h"
#include "uoptdbg.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
    .balign 4
jtbl_1000D4E0:
    # 0045CB3C expinalter
    .gpword .L0045CB8C
    .gpword .L0045CB8C
    .gpword .L0045CB94
    .gpword .L0045CB94
    .gpword .L0045CB94
    .gpword .L0045CB94
    .gpword .L0045CBB4
    .gpword .L0045CB8C

RO_1000D500:
    # 0045CBDC cupaltered
    .asciz "uoptprep.p"

    .balign 4
jtbl_1000D50C:
    # 0045CBDC cupaltered
    .gpword .L0045CC3C
    .gpword .L0045CC3C
    .gpword .L0045CC4C
    .gpword .L0045CC6C
    .gpword .L0045CC44
    .gpword .L0045CC4C
    .gpword .L0045CD40
    .gpword .L0045CC3C

.data
D_10010D40:
    # 0045C8A0 lvalaltered
    .byte 0x00,0x00,0x01,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00
    # Ucup Uicuf Urcuf

D_10010D54:
    # 0045CAA0 lvalantloc
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10
    # Uisst Ustr

D_10010D60:
    # 0045CBDC cupaltered
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20
    # Uiequ Uineq Uigeq Uigrt Uileq Uiles Uilod Uildv Uirld Uirlv




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel lvalaltered
    .ent lvalaltered
    # 004122D8 vardelete
/* 0045C8A0 3C1C0FBC */  .cpload $t9
/* 0045C8A4 279CD9F0 */  
/* 0045C8A8 0399E021 */  
/* 0045C8AC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0045C8B0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045C8B4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045C8B8 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045C8BC AFA50034 */  sw    $a1, 0x34($sp)
/* 0045C8C0 8CA20024 */  lw    $v0, 0x24($a1)
/* 0045C8C4 00808025 */  move  $s0, $a0
/* 0045C8C8 00003825 */  move  $a3, $zero
/* 0045C8CC 1040000F */  beqz  $v0, .L0045C90C
/* 0045C8D0 24030002 */   li    $v1, 2
/* 0045C8D4 904F0009 */  lbu   $t7, 9($v0)
.L0045C8D8:
/* 0045C8D8 546F0008 */  bnel  $v1, $t7, .L0045C8FC
/* 0045C8DC 8C420004 */   lw    $v0, 4($v0)
/* 0045C8E0 8C58000C */  lw    $t8, 0xc($v0)
/* 0045C8E4 8F190014 */  lw    $t9, 0x14($t8)
/* 0045C8E8 56190004 */  bnel  $s0, $t9, .L0045C8FC
/* 0045C8EC 8C420004 */   lw    $v0, 4($v0)
/* 0045C8F0 10000002 */  b     .L0045C8FC
/* 0045C8F4 24070001 */   li    $a3, 1
/* 0045C8F8 8C420004 */  lw    $v0, 4($v0)
.L0045C8FC:
/* 0045C8FC 54E00004 */  bnezl $a3, .L0045C910
/* 0045C900 92080019 */   lbu   $t0, 0x19($s0)
/* 0045C904 5440FFF4 */  bnezl $v0, .L0045C8D8
/* 0045C908 904F0009 */   lbu   $t7, 9($v0)
.L0045C90C:
/* 0045C90C 92080019 */  lbu   $t0, 0x19($s0)
.L0045C910:
/* 0045C910 15000010 */  bnez  $t0, .L0045C954
/* 0045C914 00000000 */   nop   
/* 0045C918 14E0000E */  bnez  $a3, .L0045C954
/* 0045C91C 00000000 */   nop   
/* 0045C920 8F848B78 */  lw     $a0, %got(gsptr)($gp)
/* 0045C924 8E090008 */  lw    $t1, 8($s0)
/* 0045C928 8FAA0034 */  lw    $t2, 0x34($sp)
/* 0045C92C 8C840000 */  lw    $a0, ($a0)
/* 0045C930 8F9983D0 */  lw    $t9, %call16(strlant)($gp)
/* 0045C934 AC890004 */  sw    $t1, 4($a0)
/* 0045C938 8D450028 */  lw    $a1, 0x28($t2)
/* 0045C93C 0320F809 */  jalr  $t9
/* 0045C940 A3A70027 */   sb    $a3, 0x27($sp)
/* 0045C944 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C948 14400002 */  bnez  $v0, .L0045C954
/* 0045C94C 93A70027 */   lbu   $a3, 0x27($sp)
/* 0045C950 24070001 */  li    $a3, 1
.L0045C954:
/* 0045C954 14E0004D */  bnez  $a3, .L0045CA8C
/* 0045C958 8FAB0034 */   lw    $t3, 0x34($sp)
/* 0045C95C 8D620020 */  lw    $v0, 0x20($t3)
/* 0045C960 24010010 */  li    $at, 16
/* 0045C964 90430000 */  lbu   $v1, ($v0)
/* 0045C968 54610027 */  bnel  $v1, $at, .L0045CA08
/* 0045C96C 2C7900A0 */   sltiu $t9, $v1, 0xa0
/* 0045C970 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 0045C974 24010003 */  li    $at, 3
/* 0045C978 918C0000 */  lbu   $t4, ($t4)
/* 0045C97C 55810004 */  bnel  $t4, $at, .L0045C990
/* 0045C980 904D0018 */   lbu   $t5, 0x18($v0)
/* 0045C984 10000041 */  b     .L0045CA8C
/* 0045C988 24070001 */   li    $a3, 1
/* 0045C98C 904D0018 */  lbu   $t5, 0x18($v0)
.L0045C990:
/* 0045C990 31AE0001 */  andi  $t6, $t5, 1
/* 0045C994 51C0000F */  beql  $t6, $zero, .L0045C9D4
/* 0045C998 8FAF0034 */   lw    $t7, 0x34($sp)
/* 0045C99C 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 0045C9A0 8F84897C */  lw     $a0, %got(curlevel)($gp)
/* 0045C9A4 8F858B70 */  lw     $a1, %got(indirprocs)($gp)
/* 0045C9A8 8E060008 */  lw    $a2, 8($s0)
/* 0045C9AC A3A70027 */  sb    $a3, 0x27($sp)
/* 0045C9B0 8C840000 */  lw    $a0, ($a0)
/* 0045C9B4 0320F809 */  jalr  $t9
/* 0045C9B8 8CA50000 */   lw    $a1, ($a1)
/* 0045C9BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C9C0 10400003 */  beqz  $v0, .L0045C9D0
/* 0045C9C4 93A70027 */   lbu   $a3, 0x27($sp)
/* 0045C9C8 10000030 */  b     .L0045CA8C
/* 0045C9CC 24070001 */   li    $a3, 1
.L0045C9D0:
/* 0045C9D0 8FAF0034 */  lw    $t7, 0x34($sp)
.L0045C9D4:
/* 0045C9D4 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 0045C9D8 8E050008 */  lw    $a1, 8($s0)
/* 0045C9DC 8DF80020 */  lw    $t8, 0x20($t7)
/* 0045C9E0 92060019 */  lbu   $a2, 0x19($s0)
/* 0045C9E4 8F040028 */  lw    $a0, 0x28($t8)
/* 0045C9E8 0320F809 */  jalr  $t9
/* 0045C9EC A3A70027 */   sb    $a3, 0x27($sp)
/* 0045C9F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C9F4 10400025 */  beqz  $v0, .L0045CA8C
/* 0045C9F8 93A70027 */   lbu   $a3, 0x27($sp)
/* 0045C9FC 10000023 */  b     .L0045CA8C
/* 0045CA00 24070001 */   li    $a3, 1
/* 0045CA04 2C7900A0 */  sltiu $t9, $v1, 0xa0
.L0045CA08:
/* 0045CA08 13200009 */  beqz  $t9, .L0045CA30
/* 0045CA0C 00000000 */   nop   
/* 0045CA10 8F8A8044 */  lw    $t2, %got(D_10010D40)($gp)
/* 0045CA14 00034143 */  sra   $t0, $v1, 5
/* 0045CA18 00084880 */  sll   $t1, $t0, 2
/* 0045CA1C 254A0D40 */  addiu $t2, %lo(D_10010D40) # addiu $t2, $t2, 0xd40
/* 0045CA20 01495821 */  addu  $t3, $t2, $t1
/* 0045CA24 8D6C0000 */  lw    $t4, ($t3)
/* 0045CA28 006C6804 */  sllv  $t5, $t4, $v1
/* 0045CA2C 29B90000 */  slti  $t9, $t5, 0
.L0045CA30:
/* 0045CA30 53200017 */  beql  $t9, $zero, .L0045CA90
/* 0045CA34 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0045CA38 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 0045CA3C 90440019 */  lbu   $a0, 0x19($v0)
/* 0045CA40 8C450014 */  lw    $a1, 0x14($v0)
/* 0045CA44 8E060008 */  lw    $a2, 8($s0)
/* 0045CA48 0320F809 */  jalr  $t9
/* 0045CA4C A3A70027 */   sb    $a3, 0x27($sp)
/* 0045CA50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CA54 1440000C */  bnez  $v0, .L0045CA88
/* 0045CA58 93A70027 */   lbu   $a3, 0x27($sp)
/* 0045CA5C 8FAF0034 */  lw    $t7, 0x34($sp)
/* 0045CA60 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 0045CA64 8E050008 */  lw    $a1, 8($s0)
/* 0045CA68 8DF80020 */  lw    $t8, 0x20($t7)
/* 0045CA6C 92060019 */  lbu   $a2, 0x19($s0)
/* 0045CA70 8F040024 */  lw    $a0, 0x24($t8)
/* 0045CA74 0320F809 */  jalr  $t9
/* 0045CA78 A3A70027 */   sb    $a3, 0x27($sp)
/* 0045CA7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CA80 10400002 */  beqz  $v0, .L0045CA8C
/* 0045CA84 93A70027 */   lbu   $a3, 0x27($sp)
.L0045CA88:
/* 0045CA88 24070001 */  li    $a3, 1
.L0045CA8C:
/* 0045CA8C 8FBF001C */  lw    $ra, 0x1c($sp)
.L0045CA90:
/* 0045CA90 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045CA94 27BD0030 */  addiu $sp, $sp, 0x30
/* 0045CA98 03E00008 */  jr    $ra
/* 0045CA9C 00E01025 */   move  $v0, $a3
    .type lvalaltered, @function
    .size lvalaltered, .-lvalaltered
    .end lvalaltered

glabel lvalantloc
    .ent lvalantloc
    # 004122D8 vardelete
/* 0045CAA0 8CA20024 */  lw    $v0, 0x24($a1)
/* 0045CAA4 00803025 */  move  $a2, $a0
/* 0045CAA8 00001825 */  move  $v1, $zero
/* 0045CAAC 10400021 */  beqz  $v0, .L0045CB34
/* 0045CAB0 24070001 */   li    $a3, 1
/* 0045CAB4 904E0009 */  lbu   $t6, 9($v0)
.L0045CAB8:
/* 0045CAB8 54EE001A */  bnel  $a3, $t6, .L0045CB24
/* 0045CABC 8C420004 */   lw    $v0, 4($v0)
/* 0045CAC0 8C44000C */  lw    $a0, 0xc($v0)
/* 0045CAC4 908F0000 */  lbu   $t7, ($a0)
/* 0045CAC8 25F8FFE0 */  addiu $t8, $t7, -0x20
/* 0045CACC 2F190060 */  sltiu $t9, $t8, 0x60
/* 0045CAD0 13200009 */  beqz  $t9, .L0045CAF8
/* 0045CAD4 00000000 */   nop   
/* 0045CAD8 8F8A8044 */  lw    $t2, %got(D_10010D54)($gp)
/* 0045CADC 00184143 */  sra   $t0, $t8, 5
/* 0045CAE0 00084880 */  sll   $t1, $t0, 2
/* 0045CAE4 254A0D54 */  addiu $t2, %lo(D_10010D54) # addiu $t2, $t2, 0xd54
/* 0045CAE8 01495821 */  addu  $t3, $t2, $t1
/* 0045CAEC 8D6C0000 */  lw    $t4, ($t3)
/* 0045CAF0 030C6804 */  sllv  $t5, $t4, $t8
/* 0045CAF4 29B90000 */  slti  $t9, $t5, 0
.L0045CAF8:
/* 0045CAF8 5320000A */  beql  $t9, $zero, .L0045CB24
/* 0045CAFC 8C420004 */   lw    $v0, 4($v0)
/* 0045CB00 8C850004 */  lw    $a1, 4($a0)
/* 0045CB04 50A00007 */  beql  $a1, $zero, .L0045CB24
/* 0045CB08 8C420004 */   lw    $v0, 4($v0)
/* 0045CB0C 8CAF0014 */  lw    $t7, 0x14($a1)
/* 0045CB10 54CF0004 */  bnel  $a2, $t7, .L0045CB24
/* 0045CB14 8C420004 */   lw    $v0, 4($v0)
/* 0045CB18 10000002 */  b     .L0045CB24
/* 0045CB1C 30E300FF */   andi  $v1, $a3, 0xff
/* 0045CB20 8C420004 */  lw    $v0, 4($v0)
.L0045CB24:
/* 0045CB24 14600003 */  bnez  $v1, .L0045CB34
/* 0045CB28 00000000 */   nop   
/* 0045CB2C 5440FFE2 */  bnezl $v0, .L0045CAB8
/* 0045CB30 904E0009 */   lbu   $t6, 9($v0)
.L0045CB34:
/* 0045CB34 03E00008 */  jr    $ra
/* 0045CB38 00601025 */   move  $v0, $v1
    .type lvalantloc, @function
    .size lvalantloc, .-lvalantloc
    .end lvalantloc

glabel expinalter
    .ent expinalter
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 0045CD78 expaltered
    # 0045D208 patchvectors
/* 0045CB3C 3C1C0FBC */  .cpload $t9
/* 0045CB40 279CD754 */  
/* 0045CB44 0399E021 */  
/* 0045CB48 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045CB4C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045CB50 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045CB54 90820000 */  lbu   $v0, ($a0)
/* 0045CB58 00803025 */  move  $a2, $a0
/* 0045CB5C 00A03825 */  move  $a3, $a1
/* 0045CB60 244EFFFF */  addiu $t6, $v0, -1
/* 0045CB64 2DC10008 */  sltiu $at, $t6, 8
/* 0045CB68 10200012 */  beqz  $at, .L0045CBB4
/* 0045CB6C 00000000 */   nop   
/* 0045CB70 8F818044 */  lw    $at, %got(jtbl_1000D4E0)($gp)
/* 0045CB74 000E7080 */  sll   $t6, $t6, 2
/* 0045CB78 002E0821 */  addu  $at, $at, $t6
/* 0045CB7C 8C2ED4E0 */  lw    $t6, %lo(jtbl_1000D4E0)($at)
/* 0045CB80 01DC7021 */  addu  $t6, $t6, $gp
/* 0045CB84 01C00008 */  jr    $t6
/* 0045CB88 00000000 */   nop   
.L0045CB8C:
/* 0045CB8C 1000000E */  b     .L0045CBC8
/* 0045CB90 A3A00027 */   sb    $zero, 0x27($sp)
.L0045CB94:
/* 0045CB94 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045CB98 94C40002 */  lhu   $a0, 2($a2)
/* 0045CB9C 24E5010C */  addiu $a1, $a3, 0x10c
/* 0045CBA0 0320F809 */  jalr  $t9
/* 0045CBA4 00000000 */   nop   
/* 0045CBA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CBAC 10000006 */  b     .L0045CBC8
/* 0045CBB0 A3A20027 */   sb    $v0, 0x27($sp)
.L0045CBB4:
/* 0045CBB4 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0045CBB8 2404019E */  li    $a0, 414
/* 0045CBBC 0320F809 */  jalr  $t9
/* 0045CBC0 00000000 */   nop   
/* 0045CBC4 8FBC0018 */  lw    $gp, 0x18($sp)
.L0045CBC8:
/* 0045CBC8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0045CBCC 93A20027 */  lbu   $v0, 0x27($sp)
/* 0045CBD0 27BD0028 */  addiu $sp, $sp, 0x28
/* 0045CBD4 03E00008 */  jr    $ra
/* 0045CBD8 00000000 */   nop   
    .type expinalter, @function
    .size expinalter, .-expinalter
    .end expinalter

glabel cupaltered
    .ent cupaltered
    # 00431508 func_00431508
    # 004324F4 findinduct
    # 00455060 func_00455060
    # 0045CBDC cupaltered
    # 0045CD78 expaltered
/* 0045CBDC 3C1C0FBC */  .cpload $t9
/* 0045CBE0 279CD6B4 */  
/* 0045CBE4 0399E021 */  
/* 0045CBE8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0045CBEC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045CBF0 AFB00018 */  sw    $s0, 0x18($sp)
/* 0045CBF4 00A08025 */  move  $s0, $a1
/* 0045CBF8 00C08825 */  move  $s1, $a2
/* 0045CBFC AFBF0024 */  sw    $ra, 0x24($sp)
/* 0045CC00 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0045CC04 00803825 */  move  $a3, $a0
.L0045CC08:
/* 0045CC08 90E20000 */  lbu   $v0, ($a3)
/* 0045CC0C 00E01825 */  move  $v1, $a3
/* 0045CC10 244EFFFF */  addiu $t6, $v0, -1
/* 0045CC14 2DC10008 */  sltiu $at, $t6, 8
/* 0045CC18 10200049 */  beqz  $at, .L0045CD40
/* 0045CC1C 00000000 */   nop   
/* 0045CC20 8F818044 */  lw    $at, %got(jtbl_1000D50C)($gp)
/* 0045CC24 000E7080 */  sll   $t6, $t6, 2
/* 0045CC28 002E0821 */  addu  $at, $at, $t6
/* 0045CC2C 8C2ED50C */  lw    $t6, %lo(jtbl_1000D50C)($at)
/* 0045CC30 01DC7021 */  addu  $t6, $t6, $gp
/* 0045CC34 01C00008 */  jr    $t6
/* 0045CC38 00000000 */   nop   
.L0045CC3C:
/* 0045CC3C 10000048 */  b     .L0045CD60
/* 0045CC40 A3A0002F */   sb    $zero, 0x2f($sp)
.L0045CC44:
/* 0045CC44 1000FFF0 */  b     .L0045CC08
/* 0045CC48 8C670020 */   lw    $a3, 0x20($v1)
.L0045CC4C:
/* 0045CC4C 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 0045CC50 02002025 */  move  $a0, $s0
/* 0045CC54 02202825 */  move  $a1, $s1
/* 0045CC58 0320F809 */  jalr  $t9
/* 0045CC5C 8CE60008 */   lw    $a2, 8($a3)
/* 0045CC60 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045CC64 1000003E */  b     .L0045CD60
/* 0045CC68 A3A2002F */   sb    $v0, 0x2f($sp)
.L0045CC6C:
/* 0045CC6C 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 0045CC70 8CE40014 */  lw    $a0, 0x14($a3)
/* 0045CC74 02002825 */  move  $a1, $s0
/* 0045CC78 02203025 */  move  $a2, $s1
/* 0045CC7C 0320F809 */  jalr  $t9
/* 0045CC80 AFA70030 */   sw    $a3, 0x30($sp)
/* 0045CC84 304300FF */  andi  $v1, $v0, 0xff
/* 0045CC88 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045CC8C 14600012 */  bnez  $v1, .L0045CCD8
/* 0045CC90 8FA70030 */   lw    $a3, 0x30($sp)
/* 0045CC94 90EF0010 */  lbu   $t7, 0x10($a3)
/* 0045CC98 8F998DBC */  lw     $t9, %got(optab)($gp)
/* 0045CC9C 02002825 */  move  $a1, $s0
/* 0045CCA0 000FC080 */  sll   $t8, $t7, 2
/* 0045CCA4 030FC023 */  subu  $t8, $t8, $t7
/* 0045CCA8 03194021 */  addu  $t0, $t8, $t9
/* 0045CCAC 91090002 */  lbu   $t1, 2($t0)
/* 0045CCB0 5120000A */  beql  $t1, $zero, .L0045CCDC
/* 0045CCB4 90EA0010 */   lbu   $t2, 0x10($a3)
/* 0045CCB8 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 0045CCBC 8CE40018 */  lw    $a0, 0x18($a3)
/* 0045CCC0 02203025 */  move  $a2, $s1
/* 0045CCC4 0320F809 */  jalr  $t9
/* 0045CCC8 AFA70030 */   sw    $a3, 0x30($sp)
/* 0045CCCC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045CCD0 8FA70030 */  lw    $a3, 0x30($sp)
/* 0045CCD4 304300FF */  andi  $v1, $v0, 0xff
.L0045CCD8:
/* 0045CCD8 90EA0010 */  lbu   $t2, 0x10($a3)
.L0045CCDC:
/* 0045CCDC 254BFFE0 */  addiu $t3, $t2, -0x20
/* 0045CCE0 2D6C0080 */  sltiu $t4, $t3, 0x80
/* 0045CCE4 11800009 */  beqz  $t4, .L0045CD0C
/* 0045CCE8 00000000 */   nop   
/* 0045CCEC 8F8F8044 */  lw    $t7, %got(D_10010D60)($gp)
/* 0045CCF0 000B6943 */  sra   $t5, $t3, 5
/* 0045CCF4 000D7080 */  sll   $t6, $t5, 2
/* 0045CCF8 25EF0D60 */  addiu $t7, %lo(D_10010D60) # addiu $t7, $t7, 0xd60
/* 0045CCFC 01EEC021 */  addu  $t8, $t7, $t6
/* 0045CD00 8F190000 */  lw    $t9, ($t8)
/* 0045CD04 01794004 */  sllv  $t0, $t9, $t3
/* 0045CD08 290C0000 */  slti  $t4, $t0, 0
.L0045CD0C:
/* 0045CD0C 1180000A */  beqz  $t4, .L0045CD38
/* 0045CD10 00000000 */   nop   
/* 0045CD14 14600008 */  bnez  $v1, .L0045CD38
/* 0045CD18 00000000 */   nop   
/* 0045CD1C 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 0045CD20 02002025 */  move  $a0, $s0
/* 0045CD24 02202825 */  move  $a1, $s1
/* 0045CD28 0320F809 */  jalr  $t9
/* 0045CD2C 8CE60008 */   lw    $a2, 8($a3)
/* 0045CD30 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045CD34 304300FF */  andi  $v1, $v0, 0xff
.L0045CD38:
/* 0045CD38 10000009 */  b     .L0045CD60
/* 0045CD3C A3A3002F */   sb    $v1, 0x2f($sp)
.L0045CD40:
/* 0045CD40 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045CD44 8F868044 */  lw    $a2, %got(RO_1000D500)($gp)
/* 0045CD48 24040001 */  li    $a0, 1
/* 0045CD4C 24050065 */  li    $a1, 101
/* 0045CD50 2407000A */  li    $a3, 10
/* 0045CD54 0320F809 */  jalr  $t9
/* 0045CD58 24C6D500 */   addiu $a2, %lo(RO_1000D500) # addiu $a2, $a2, -0x2b00
/* 0045CD5C 8FBC0020 */  lw    $gp, 0x20($sp)
.L0045CD60:
/* 0045CD60 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0045CD64 93A2002F */  lbu   $v0, 0x2f($sp)
/* 0045CD68 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045CD6C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045CD70 03E00008 */  jr    $ra
/* 0045CD74 27BD0030 */   addiu $sp, $sp, 0x30
    .type cupaltered, @function
    .size cupaltered, .-cupaltered
    .end cupaltered
)"");

/*
004175BC copypropagate
0045D208 patchvectors
*/
bool expaltered(struct IChain *ichain, struct Graphnode *node) {
    bool altered; // sp27
    bool sp26;
    bool sp25;

    switch (ichain->type) {
        case islda:
        case isconst:
        case isrconst:
            altered = false;
            break;

        case isilda:
            altered = false;
            break;

        case isvar:
        case issvar:
            if (ichain->isvar_issvar.unk1A) {
                altered = true;
            } else {
                sp26 = false;
                if (!ichain->isvar_issvar.unk19) {
                    sp26 = varkilled(ichain->expr, node->varlisthead);
                }
                sp25 = false;
                if (node->stat_tail->opc == Ucia) {
                    if (lang == LANG_ADA) {
                        sp25 = true;
                    }
                    else if ((node->stat_tail->u.cia.flags & 1) && cupaltered(ichain, curlevel, indirprocs)) {
                        sp25 = true;
                    }
                    else if (listplkilled(node->stat_tail->u.cia.parameters, ichain->expr, ichain->isvar_issvar.unk19)) {
                        sp25 = true;
                    }
                } else {
                    if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf || node->stat_tail->opc == Urcuf) {
                        if (cupaltered(ichain, node->stat_tail->u.call.level, node->stat_tail->u.call.proc)) {
                            sp25 = true;
                        } else if (listplkilled(node->stat_tail->u.call.parameters, ichain->expr, ichain->isvar_issvar.unk19)) {
                            sp25 = true;
                        }
                    }
                }

                if (sp25) {
                    setbit(&node->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                }
                altered = sp26 || sp25;
            }
            break;

        case isop:
            sp26 = expinalter(ichain->isop.op1, node);
            if (!sp26 && optab[ichain->isop.opc].is_binary_op) {
                sp26 = expinalter(ichain->isop.op2, node);
            }

            if (!sp26 &&
                    (ichain->isop.opc == Uiequ ||
                     ichain->isop.opc == Uineq ||
                     ichain->isop.opc == Uigeq ||
                     ichain->isop.opc == Uigrt ||
                     ichain->isop.opc == Uileq ||
                     ichain->isop.opc == Uiles ||
                     ichain->isop.opc == Uilod ||
                     ichain->isop.opc == Uildv ||
                     ichain->isop.opc == Uirld ||
                     ichain->isop.opc == Uirlv)) {
                sp26 = varkilled(ichain->expr, node->varlisthead);
                if (!sp26) {
                    if (node->stat_tail->opc == Ucia) {
                        if (lang == LANG_ADA) {
                            sp26 = true;
                        } else if ((node->stat_tail->u.cia.flags & 1) && cupaltered(ichain, curlevel, indirprocs)) {
                            sp26 = true;
                        } else if (listplkilled(node->stat_tail->u.cia.parameters, ichain->expr, 0)) {
                            sp26 = true;
                        } 
                    } else if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf || node->stat_tail->opc == Urcuf) {
                        if (cupaltered(ichain, node->stat_tail->u.call.level, node->stat_tail->u.call.proc)) {
                            sp26 = true;
                        } else if (listplkilled(node->stat_tail->u.call.parameters, ichain->expr, 0)) {
                            sp26 = true;
                        }
                    } 
                }
            }
            altered = sp26;
            break;

        default:
        case dumped:
            caseerror(1, 132, "uoptprep.p", 10);
            altered = false;
    }
    return altered;
}

/* 
00456A2C oneproc
*/
void patchvectors(void) {
    struct IChain *ichain;
    struct Graphnode *node;
    int i;
    bool phi_s1;
    bool phi_s2;

    checkbvlist(&storeop);
    checkbvlist(&trapop);
    checkbvlist(&varbits);
    checkbvlist(&asgnbits);
    if (outofmem) {
        return;
    }

    leaf_for_ugen = true;
    node = graphhead;
    while (node != NULL) {
        checkbvlist(&node->bvs.stage1.antlocs);
        checkbvlist(&node->bvs.stage1.avlocs);
        checkbvlist(&node->bvs.stage1.alters);
        checkbvlist(&node->bvs.stage1.u.precm.pavlocs);
        checkbvlist(&node->bvs.stage1.absalters);
        checkbvlist(&node->bvs.stage1.u.precm.expoccur);
        if (outofmem) {
            return;
        }

        if (((node->stat_tail->opc == Ucup ||
              node->stat_tail->opc == Uicuf ||
              node->stat_tail->opc == Urcuf) && !IS_RETURN_ATTR(node->stat_tail->u.call.extrnal_flags))
          || (node->stat_tail->opc == Ucia && (node->stat_tail->u.cia.flags & 1))) {
            leaf_for_ugen = false;
        }

        if (node->varlisthead != NULL ||
                (node->stat_tail->opc == Ucia ||
                 node->stat_tail->opc == Ucup ||
                 node->stat_tail->opc == Uicuf ||
                 node->stat_tail->opc == Urcuf)) {

            for(i = 0; i < bitposcount; i++) {
                ichain = bittab[i].ichain;
                if (bvectin(i, &asgnbits)) {
                    if (!ichain->isvar_issvar.unk19) {
                        if (ichain->isvar_issvar.unk1A) {
                            setbit(&node->bvs.stage1.alters, i);
                        } else if (!bvectin(i, &node->bvs.stage1.alters) && !bvectin(i, &node->bvs.stage1.u.precm.expoccur)) {
                            gsptr->expr = ichain->expr;
                            if (strlkilled(gsptr, node->varlisthead)) {
                                setbit(&node->bvs.stage1.alters, i);
                            }
                        }
                    }
                } else if (!bvectin(i, &node->bvs.stage1.u.precm.expoccur)) {
                    if (!bvectin(i, &storeop)) {
                        if ((ichain->type == isvar || ichain->type == issvar) && ichain->isvar_issvar.unk1A) {
                            setbit(&node->bvs.stage1.alters, i);
                        } else if (!bvectin(i, &node->bvs.stage1.alters) && expaltered(ichain, node)) {
                            setbit(&node->bvs.stage1.alters, i);
                        }
                    } else {
                        if (expinalter(ichain->isop.op2, node)) {
                            phi_s1 = true;
                            phi_s2 = true;
                        } else if (ichain->isop.opc == Uisst || ichain->isop.opc == Ustr) {
                            if (ichain->isop.op1->isvar_issvar.unk1A) {
                                phi_s1 = true;
                                phi_s2 = true;
                            } else {
                                phi_s2 = bvectin(ichain->isop.op1->isvar_issvar.assignbit, &node->bvs.stage1.alters);
                                phi_s1 = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.alters);
                            }
                        } else if (expinalter(ichain->isop.op1, node)) {
                            phi_s1 = true;
                            phi_s2 = true;
                        } else {
                            phi_s2 = strlkilled(ichain->isop.stat, node->varlisthead);
                            phi_s1 = strskilled(ichain->isop.stat, node->varlisthead);
                        }

                        if (!phi_s1 &&
                                (node->stat_tail->opc == Ucia ||
                                 node->stat_tail->opc == Ucup ||
                                 node->stat_tail->opc == Uicuf ||
                                 node->stat_tail->opc == Urcuf)) {

                            if (!(ichain->isop.opc == Uisst || ichain->isop.opc == Ustr)) {
                                if (node->stat_tail->opc == Ucia) {
                                    if (lang == LANG_ADA ||
                                            ((node->stat_tail->u.cia.flags & 1) &&
                                             cskilled(curlevel, indirprocs, ichain->isop.stat)) ||
                                            listpskilled(node->stat_tail->u.cia.parameters, ichain->isop.stat, 0) ||
                                            ((ichain->isop.opc == Umov ||
                                              ichain->isop.opc == Umovv) &&
                                             cmkilled(curlevel, indirprocs, ichain->isop.stat))) {
                                        phi_s1 = true;
                                        phi_s2 = true;
                                    }
                                } else if (cskilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, ichain->isop.stat) ||
                                        listpskilled(node->stat_tail->u.call.parameters, ichain->isop.stat, 0) ||
                                        ((ichain->isop.opc == Umov ||
                                          ichain->isop.opc == Umovv) &&
                                         cmkilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, ichain->isop.stat))) {
                                    phi_s1 = true;
                                    phi_s2 = true;
                                }
                            }
                        }

                        if (phi_s1) {
                            setbit(&node->bvs.stage1.absalters, i);
                        }
                        if (phi_s1 || phi_s2) {
                            setbit(&node->bvs.stage1.alters, i);
                        }
                    }
                }
            }
        }

        if (outofmem) {
            return;
        }

        node = node->next;
    }
}
