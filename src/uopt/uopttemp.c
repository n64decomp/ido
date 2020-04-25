__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000DC70:
    # 00476AA0 findbbtemps
    .asciz "uopttemp.p"

    .balign 4
jtbl_1000DC7C:
    # 00476AA0 findbbtemps
    .gpword .L00476C00
    .gpword .L00476BC8
    .gpword .L00476BE4




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel findbbtemps
    .ent findbbtemps
    # 0042BF08 reemit
/* 00476AA0 3C1C0FBA */  .cpload $t9
/* 00476AA4 279C37F0 */  
/* 00476AA8 0399E021 */  
/* 00476AAC 27BDFF90 */  addiu $sp, $sp, -0x70
/* 00476AB0 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00476AB4 AFBC0038 */  sw    $gp, 0x38($sp)
/* 00476AB8 AFB50034 */  sw    $s5, 0x34($sp)
/* 00476ABC AFB40030 */  sw    $s4, 0x30($sp)
/* 00476AC0 AFB3002C */  sw    $s3, 0x2c($sp)
/* 00476AC4 AFB20028 */  sw    $s2, 0x28($sp)
/* 00476AC8 AFB10024 */  sw    $s1, 0x24($sp)
/* 00476ACC AFB00020 */  sw    $s0, 0x20($sp)
/* 00476AD0 AFA00054 */  sw    $zero, 0x54($sp)
/* 00476AD4 AFA00058 */  sw    $zero, 0x58($sp)
/* 00476AD8 AFA0005C */  sw    $zero, 0x5c($sp)
/* 00476ADC AFA00060 */  sw    $zero, 0x60($sp)
/* 00476AE0 27AE0054 */  addiu $t6, $sp, 0x54
/* 00476AE4 8DD80000 */  lw    $t8, ($t6)
/* 00476AE8 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00476AEC 8F918D30 */  lw     $s1, %got(setofspills)($gp)
/* 00476AF0 AFB80004 */  sw    $t8, 4($sp)
/* 00476AF4 8DCF0004 */  lw    $t7, 4($t6)
/* 00476AF8 0080A025 */  move  $s4, $a0
/* 00476AFC 8FA50004 */  lw    $a1, 4($sp)
/* 00476B00 AFAF0008 */  sw    $t7, 8($sp)
/* 00476B04 8DC70008 */  lw    $a3, 8($t6)
/* 00476B08 8FA60008 */  lw    $a2, 8($sp)
/* 00476B0C 02202025 */  move  $a0, $s1
/* 00476B10 AFA7000C */  sw    $a3, 0xc($sp)
/* 00476B14 8DCF000C */  lw    $t7, 0xc($t6)
/* 00476B18 0320F809 */  jalr  $t9
/* 00476B1C AFAF0010 */   sw    $t7, 0x10($sp)
/* 00476B20 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00476B24 00008025 */  move  $s0, $zero
/* 00476B28 2693015C */  addiu $s3, $s4, 0x15c
/* 00476B2C 8F9289E8 */  lw     $s2, %got(firstconstbit)($gp)
/* 00476B30 8E520000 */  lw    $s2, ($s2)
/* 00476B34 2652FFFF */  addiu $s2, $s2, -1
/* 00476B38 06400041 */  bltz  $s2, .L00476C40
/* 00476B3C 26520001 */   addiu $s2, $s2, 1
/* 00476B40 8F9589EC */  lw     $s5, %got(bittab)($gp)
/* 00476B44 8F948D18 */  lw     $s4, %got(coloreditems)($gp)
.L00476B48:
/* 00476B48 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00476B4C 02002025 */  move  $a0, $s0
/* 00476B50 02602825 */  move  $a1, $s3
/* 00476B54 0320F809 */  jalr  $t9
/* 00476B58 00000000 */   nop   
/* 00476B5C 10400035 */  beqz  $v0, .L00476C34
/* 00476B60 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00476B64 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00476B68 02002025 */  move  $a0, $s0
/* 00476B6C 02802825 */  move  $a1, $s4
/* 00476B70 0320F809 */  jalr  $t9
/* 00476B74 00000000 */   nop   
/* 00476B78 1040002E */  beqz  $v0, .L00476C34
/* 00476B7C 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00476B80 8EB90000 */  lw    $t9, ($s5)
/* 00476B84 001040C0 */  sll   $t0, $s0, 3
/* 00476B88 24040001 */  li    $a0, 1
/* 00476B8C 03284821 */  addu  $t1, $t9, $t0
/* 00476B90 8D220000 */  lw    $v0, ($t1)
/* 00476B94 24050028 */  li    $a1, 40
/* 00476B98 90430000 */  lbu   $v1, ($v0)
/* 00476B9C 246AFFFC */  addiu $t2, $v1, -4
/* 00476BA0 2D410003 */  sltiu $at, $t2, 3
/* 00476BA4 1020001D */  beqz  $at, .L00476C1C
/* 00476BA8 00000000 */   nop   
/* 00476BAC 8F818044 */  lw    $at, %got(jtbl_1000DC7C)($gp)
/* 00476BB0 000A5080 */  sll   $t2, $t2, 2
/* 00476BB4 002A0821 */  addu  $at, $at, $t2
/* 00476BB8 8C2ADC7C */  lw    $t2, %lo(jtbl_1000DC7C)($at)
/* 00476BBC 015C5021 */  addu  $t2, $t2, $gp
/* 00476BC0 01400008 */  jr    $t2
/* 00476BC4 00000000 */   nop   
.L00476BC8:
/* 00476BC8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00476BCC 8C4B0024 */  lw    $t3, 0x24($v0)
/* 00476BD0 02202025 */  move  $a0, $s1
/* 00476BD4 0320F809 */  jalr  $t9
/* 00476BD8 8D650000 */   lw    $a1, ($t3)
/* 00476BDC 10000015 */  b     .L00476C34
/* 00476BE0 8FBC0038 */   lw    $gp, 0x38($sp)
.L00476BE4:
/* 00476BE4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00476BE8 8C4C0020 */  lw    $t4, 0x20($v0)
/* 00476BEC 02202025 */  move  $a0, $s1
/* 00476BF0 0320F809 */  jalr  $t9
/* 00476BF4 8D850000 */   lw    $a1, ($t4)
/* 00476BF8 1000000E */  b     .L00476C34
/* 00476BFC 8FBC0038 */   lw    $gp, 0x38($sp)
.L00476C00:
/* 00476C00 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00476C04 8C4D0020 */  lw    $t5, 0x20($v0)
/* 00476C08 02202025 */  move  $a0, $s1
/* 00476C0C 0320F809 */  jalr  $t9
/* 00476C10 8DA50000 */   lw    $a1, ($t5)
/* 00476C14 10000007 */  b     .L00476C34
/* 00476C18 8FBC0038 */   lw    $gp, 0x38($sp)
.L00476C1C:
/* 00476C1C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00476C20 8F868044 */  lw    $a2, %got(RO_1000DC70)($gp)
/* 00476C24 2407000A */  li    $a3, 10
/* 00476C28 0320F809 */  jalr  $t9
/* 00476C2C 24C6DC70 */   addiu $a2, %lo(RO_1000DC70) # addiu $a2, $a2, -0x2390
/* 00476C30 8FBC0038 */  lw    $gp, 0x38($sp)
.L00476C34:
/* 00476C34 26100001 */  addiu $s0, $s0, 1
/* 00476C38 1612FFC3 */  bne   $s0, $s2, .L00476B48
/* 00476C3C 00000000 */   nop   
.L00476C40:
/* 00476C40 8F908974 */  lw     $s0, %got(templochead)($gp)
/* 00476C44 8E100000 */  lw    $s0, ($s0)
/* 00476C48 5200000D */  beql  $s0, $zero, .L00476C80
/* 00476C4C 8FBF003C */   lw    $ra, 0x3c($sp)
.L00476C50:
/* 00476C50 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00476C54 8E040000 */  lw    $a0, ($s0)
/* 00476C58 02202825 */  move  $a1, $s1
/* 00476C5C 0320F809 */  jalr  $t9
/* 00476C60 00000000 */   nop   
/* 00476C64 2C4E0001 */  sltiu $t6, $v0, 1
/* 00476C68 A20E000C */  sb    $t6, 0xc($s0)
/* 00476C6C 8E100010 */  lw    $s0, 0x10($s0)
/* 00476C70 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00476C74 1600FFF6 */  bnez  $s0, .L00476C50
/* 00476C78 00000000 */   nop   
/* 00476C7C 8FBF003C */  lw    $ra, 0x3c($sp)
.L00476C80:
/* 00476C80 8FB00020 */  lw    $s0, 0x20($sp)
/* 00476C84 8FB10024 */  lw    $s1, 0x24($sp)
/* 00476C88 8FB20028 */  lw    $s2, 0x28($sp)
/* 00476C8C 8FB3002C */  lw    $s3, 0x2c($sp)
/* 00476C90 8FB40030 */  lw    $s4, 0x30($sp)
/* 00476C94 8FB50034 */  lw    $s5, 0x34($sp)
/* 00476C98 03E00008 */  jr    $ra
/* 00476C9C 27BD0070 */   addiu $sp, $sp, 0x70
    .type findbbtemps, @function
    .size findbbtemps, .-findbbtemps
    .end findbbtemps

glabel gettemp
    .ent gettemp
    # 004230F0 func_004230F0
    # 0042BF08 reemit
/* 00476CA0 3C1C0FBA */  .cpload $t9
/* 00476CA4 279C35F0 */  
/* 00476CA8 0399E021 */  
/* 00476CAC 8F878974 */  lw     $a3, %got(templochead)($gp)
/* 00476CB0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00476CB4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00476CB8 8CE70000 */  lw    $a3, ($a3)
/* 00476CBC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00476CC0 AFA40020 */  sw    $a0, 0x20($sp)
/* 00476CC4 00A03025 */  move  $a2, $a1
/* 00476CC8 00001025 */  move  $v0, $zero
/* 00476CCC 10E0000E */  beqz  $a3, .L00476D08
/* 00476CD0 00E01825 */   move  $v1, $a3
/* 00476CD4 906E000C */  lbu   $t6, 0xc($v1)
.L00476CD8:
/* 00476CD8 51C00007 */  beql  $t6, $zero, .L00476CF8
/* 00476CDC 8C630010 */   lw    $v1, 0x10($v1)
/* 00476CE0 8C6F0008 */  lw    $t7, 8($v1)
/* 00476CE4 54CF0004 */  bnel  $a2, $t7, .L00476CF8
/* 00476CE8 8C630010 */   lw    $v1, 0x10($v1)
/* 00476CEC 10000002 */  b     .L00476CF8
/* 00476CF0 24020001 */   li    $v0, 1
/* 00476CF4 8C630010 */  lw    $v1, 0x10($v1)
.L00476CF8:
/* 00476CF8 10600003 */  beqz  $v1, .L00476D08
/* 00476CFC 00000000 */   nop   
/* 00476D00 5040FFF5 */  beql  $v0, $zero, .L00476CD8
/* 00476D04 906E000C */   lbu   $t6, 0xc($v1)
.L00476D08:
/* 00476D08 54400046 */  bnezl $v0, .L00476E24
/* 00476D0C 8FB90020 */   lw    $t9, 0x20($sp)
/* 00476D10 14E0000D */  bnez  $a3, .L00476D48
/* 00476D14 00000000 */   nop   
/* 00476D18 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00476D1C 24040014 */  li    $a0, 20
/* 00476D20 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00476D24 0320F809 */  jalr  $t9
/* 00476D28 AFA60024 */   sw    $a2, 0x24($sp)
/* 00476D2C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00476D30 8FA60024 */  lw    $a2, 0x24($sp)
/* 00476D34 00401825 */  move  $v1, $v0
/* 00476D38 8F818974 */  lw     $at, %got(templochead)($gp)
/* 00476D3C AC220000 */  sw    $v0, ($at)
/* 00476D40 1000000D */  b     .L00476D78
/* 00476D44 AC400010 */   sw    $zero, 0x10($v0)
.L00476D48:
/* 00476D48 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00476D4C 24040014 */  li    $a0, 20
/* 00476D50 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00476D54 0320F809 */  jalr  $t9
/* 00476D58 AFA60024 */   sw    $a2, 0x24($sp)
/* 00476D5C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00476D60 8FA60024 */  lw    $a2, 0x24($sp)
/* 00476D64 00401825 */  move  $v1, $v0
/* 00476D68 8F988978 */  lw     $t8, %got(temploctail)($gp)
/* 00476D6C 8F180000 */  lw    $t8, ($t8)
/* 00476D70 AF020010 */  sw    $v0, 0x10($t8)
/* 00476D74 AC400010 */  sw    $zero, 0x10($v0)
.L00476D78:
/* 00476D78 8F818978 */  lw     $at, %got(temploctail)($gp)
/* 00476D7C 8F878970 */  lw     $a3, %got(tempdisp)($gp)
/* 00476D80 AC220000 */  sw    $v0, ($at)
/* 00476D84 8CE40000 */  lw    $a0, ($a3)
/* 00476D88 0086001A */  div   $zero, $a0, $a2
/* 00476D8C 00002810 */  mfhi  $a1
/* 00476D90 00A6C826 */  xor   $t9, $a1, $a2
/* 00476D94 14C00002 */  bnez  $a2, .L00476DA0
/* 00476D98 00000000 */   nop   
/* 00476D9C 0007000D */  break 7
.L00476DA0:
/* 00476DA0 2401FFFF */  li    $at, -1
/* 00476DA4 14C10004 */  bne   $a2, $at, .L00476DB8
/* 00476DA8 3C018000 */   lui   $at, 0x8000
/* 00476DAC 14810002 */  bne   $a0, $at, .L00476DB8
/* 00476DB0 00000000 */   nop   
/* 00476DB4 0006000D */  break 6
.L00476DB8:
/* 00476DB8 00864821 */  addu  $t1, $a0, $a2
/* 00476DBC 07210002 */  bgez  $t9, .L00476DC8
/* 00476DC0 00000000 */   nop   
/* 00476DC4 00A62821 */  addu  $a1, $a1, $a2
.L00476DC8:
/* 00476DC8 10A00003 */  beqz  $a1, .L00476DD8
/* 00476DCC 00000000 */   nop   
/* 00476DD0 01252023 */  subu  $a0, $t1, $a1
/* 00476DD4 ACE40000 */  sw    $a0, ($a3)
.L00476DD8:
/* 00476DD8 8F888A2C */  lw     $t0, %got(tempcount)($gp)
/* 00476DDC 8F8C8B48 */  lw     $t4, %got(stack_reversed)($gp)
/* 00476DE0 00866821 */  addu  $t5, $a0, $a2
/* 00476DE4 8D050000 */  lw    $a1, ($t0)
/* 00476DE8 000D7823 */  negu  $t7, $t5
/* 00476DEC 0086C021 */  addu  $t8, $a0, $a2
/* 00476DF0 AC450000 */  sw    $a1, ($v0)
/* 00476DF4 24AB0001 */  addiu $t3, $a1, 1
/* 00476DF8 AD0B0000 */  sw    $t3, ($t0)
/* 00476DFC 918C0000 */  lbu   $t4, ($t4)
/* 00476E00 55800005 */  bnezl $t4, .L00476E18
/* 00476E04 AC440004 */   sw    $a0, 4($v0)
/* 00476E08 ACED0000 */  sw    $t5, ($a3)
/* 00476E0C 10000003 */  b     .L00476E1C
/* 00476E10 AC4F0004 */   sw    $t7, 4($v0)
/* 00476E14 AC440004 */  sw    $a0, 4($v0)
.L00476E18:
/* 00476E18 ACF80000 */  sw    $t8, ($a3)
.L00476E1C:
/* 00476E1C AC460008 */  sw    $a2, 8($v0)
/* 00476E20 8FB90020 */  lw    $t9, 0x20($sp)
.L00476E24:
/* 00476E24 A060000C */  sb    $zero, 0xc($v1)
/* 00476E28 AF230000 */  sw    $v1, ($t9)
/* 00476E2C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00476E30 27BD0020 */  addiu $sp, $sp, 0x20
/* 00476E34 03E00008 */  jr    $ra
/* 00476E38 00000000 */   nop   
    .type gettemp, @function
    .size gettemp, .-gettemp
    .end gettemp
)"");
