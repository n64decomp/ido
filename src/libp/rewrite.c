__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000FB90:
    # 00497C90 rewrite
    .asciz "/tmp/pas%d.%d"

RO_1000FBA0:
    # 00497C90 rewrite
    .asciz "w"

RO_1000FBA4:
    # 00497C90 rewrite
    .asciz "Permission Denied, rewrite to a protected file\n"

RO_1000FBD4:
    # 00497C90 rewrite
    .asciz "w"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel rewrite
    .ent rewrite
    # 00434720 processargs
    # 00439188 procinit
    # 0047DBB4 getoption
    # 00480794 openoutput
/* 00497C90 3C1C0FB8 */  .cpload $t9
/* 00497C94 279C2600 */  
/* 00497C98 0399E021 */  
/* 00497C9C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00497CA0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00497CA4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00497CA8 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00497CAC AFB00018 */  sw    $s0, 0x18($sp)
/* 00497CB0 AFA40028 */  sw    $a0, 0x28($sp)
/* 00497CB4 AFA70034 */  sw    $a3, 0x34($sp)
/* 00497CB8 10C0000E */  beqz  $a2, .L00497CF4
/* 00497CBC 8C910000 */   lw    $s1, ($a0)
/* 00497CC0 24C2FFFF */  addiu $v0, $a2, -1
/* 00497CC4 00457821 */  addu  $t7, $v0, $a1
/* 00497CC8 91F80000 */  lbu   $t8, ($t7)
/* 00497CCC 24030020 */  li    $v1, 32
/* 00497CD0 14780008 */  bne   $v1, $t8, .L00497CF4
/* 00497CD4 00000000 */   nop   
.L00497CD8:
/* 00497CD8 10400006 */  beqz  $v0, .L00497CF4
/* 00497CDC 00403025 */   move  $a2, $v0
/* 00497CE0 2442FFFF */  addiu $v0, $v0, -1
/* 00497CE4 0045C821 */  addu  $t9, $v0, $a1
/* 00497CE8 93280000 */  lbu   $t0, ($t9)
/* 00497CEC 1068FFFA */  beq   $v1, $t0, .L00497CD8
/* 00497CF0 00000000 */   nop   
.L00497CF4:
/* 00497CF4 10C00015 */  beqz  $a2, .L00497D4C
/* 00497CF8 8FAB0028 */   lw    $t3, 0x28($sp)
/* 00497CFC 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 00497D00 24C40001 */  addiu $a0, $a2, 1
/* 00497D04 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00497D08 0320F809 */  jalr  $t9
/* 00497D0C AFA60030 */   sw    $a2, 0x30($sp)
/* 00497D10 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497D14 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00497D18 8FA60030 */  lw    $a2, 0x30($sp)
/* 00497D1C 8F998138 */  lw    $t9, %call16(memcpy)($gp)
/* 00497D20 00408025 */  move  $s0, $v0
/* 00497D24 00402025 */  move  $a0, $v0
/* 00497D28 0320F809 */  jalr  $t9
/* 00497D2C 00000000 */   nop   
/* 00497D30 8FA60030 */  lw    $a2, 0x30($sp)
/* 00497D34 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497D38 02064821 */  addu  $t1, $s0, $a2
/* 00497D3C A1200000 */  sb    $zero, ($t1)
/* 00497D40 8FAA0028 */  lw    $t2, 0x28($sp)
/* 00497D44 10000026 */  b     .L00497DE0
/* 00497D48 AD500004 */   sw    $s0, 4($t2)
.L00497D4C:
/* 00497D4C 8D700004 */  lw    $s0, 4($t3)
/* 00497D50 16000023 */  bnez  $s0, .L00497DE0
/* 00497D54 00000000 */   nop   
/* 00497D58 12200008 */  beqz  $s1, .L00497D7C
/* 00497D5C 00000000 */   nop   
/* 00497D60 8F998104 */  lw    $t9, %call16(fseek)($gp)
/* 00497D64 02202025 */  move  $a0, $s1
/* 00497D68 00002825 */  move  $a1, $zero
/* 00497D6C 0320F809 */  jalr  $t9
/* 00497D70 00003025 */   move  $a2, $zero
/* 00497D74 10000049 */  b     .L00497E9C
/* 00497D78 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497D7C:
/* 00497D7C 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 00497D80 24040018 */  li    $a0, 24
/* 00497D84 0320F809 */  jalr  $t9
/* 00497D88 00000000 */   nop   
/* 00497D8C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497D90 00408025 */  move  $s0, $v0
/* 00497D94 8F838CC0 */  lw     $v1, %got(_libp_pascal_file_counter)($gp)
/* 00497D98 8C6C0000 */  lw    $t4, ($v1)
/* 00497D9C 258D0001 */  addiu $t5, $t4, 1
/* 00497DA0 AC6D0000 */  sw    $t5, ($v1)
/* 00497DA4 8F99813C */  lw    $t9, %call16(getpid)($gp)
/* 00497DA8 0320F809 */  jalr  $t9
/* 00497DAC 00000000 */   nop   
/* 00497DB0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497DB4 02002025 */  move  $a0, $s0
/* 00497DB8 00403825 */  move  $a3, $v0
/* 00497DBC 8F9980E0 */  lw    $t9, %call16(sprintf)($gp)
/* 00497DC0 8F858044 */  lw    $a1, %got(RO_1000FB90)($gp)
/* 00497DC4 8F868CC0 */  lw     $a2, %got(_libp_pascal_file_counter)($gp)
/* 00497DC8 24A5FB90 */  addiu $a1, %lo(RO_1000FB90) # addiu $a1, $a1, -0x470
/* 00497DCC 0320F809 */  jalr  $t9
/* 00497DD0 8CC60000 */   lw    $a2, ($a2)
/* 00497DD4 8FAE0028 */  lw    $t6, 0x28($sp)
/* 00497DD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497DDC ADD00004 */  sw    $s0, 4($t6)
.L00497DE0:
/* 00497DE0 12200016 */  beqz  $s1, .L00497E3C
/* 00497DE4 02002025 */   move  $a0, $s0
/* 00497DE8 8F998140 */  lw    $t9, %call16(freopen)($gp)
/* 00497DEC 8F858044 */  lw    $a1, %got(RO_1000FBA0)($gp)
/* 00497DF0 02203025 */  move  $a2, $s1
/* 00497DF4 0320F809 */  jalr  $t9
/* 00497DF8 24A5FBA0 */   addiu $a1, %lo(RO_1000FBA0) # addiu $a1, $a1, -0x460
/* 00497DFC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497E00 14400015 */  bnez  $v0, .L00497E58
/* 00497E04 00408825 */   move  $s1, $v0
/* 00497E08 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00497E0C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00497E10 8F858044 */  lw    $a1, %got(RO_1000FBA4)($gp)
/* 00497E14 24840020 */  addiu $a0, $a0, 0x20
/* 00497E18 0320F809 */  jalr  $t9
/* 00497E1C 24A5FBA4 */   addiu $a1, %lo(RO_1000FBA4) # addiu $a1, $a1, -0x45c
/* 00497E20 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497E24 2404000D */  li    $a0, 13
/* 00497E28 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 00497E2C 0320F809 */  jalr  $t9
/* 00497E30 00000000 */   nop   
/* 00497E34 10000008 */  b     .L00497E58
/* 00497E38 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497E3C:
/* 00497E3C 8F998144 */  lw    $t9, %call16(fopen)($gp)
/* 00497E40 8F858044 */  lw    $a1, %got(RO_1000FBD4)($gp)
/* 00497E44 02002025 */  move  $a0, $s0
/* 00497E48 0320F809 */  jalr  $t9
/* 00497E4C 24A5FBD4 */   addiu $a1, %lo(RO_1000FBD4) # addiu $a1, $a1, -0x42c
/* 00497E50 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497E54 00408825 */  move  $s1, $v0
.L00497E58:
/* 00497E58 5220000F */  beql  $s1, $zero, .L00497E98
/* 00497E5C 8FB90028 */   lw    $t9, 0x28($sp)
/* 00497E60 8E2F0008 */  lw    $t7, 8($s1)
/* 00497E64 8FB80034 */  lw    $t8, 0x34($sp)
/* 00497E68 55E0000B */  bnezl $t7, .L00497E98
/* 00497E6C 8FB90028 */   lw    $t9, 0x28($sp)
/* 00497E70 13000003 */  beqz  $t8, .L00497E80
/* 00497E74 24050001 */   li    $a1, 1
/* 00497E78 10000001 */  b     .L00497E80
/* 00497E7C 03002825 */   move  $a1, $t8
.L00497E80:
/* 00497E80 8F9988A0 */  lw    $t9, %call16(_getbuf)($gp)
/* 00497E84 02202025 */  move  $a0, $s1
/* 00497E88 0320F809 */  jalr  $t9
/* 00497E8C 00000000 */   nop   
/* 00497E90 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497E94 8FB90028 */  lw    $t9, 0x28($sp)
.L00497E98:
/* 00497E98 AF310000 */  sw    $s1, ($t9)
.L00497E9C:
/* 00497E9C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00497EA0 8FB00018 */  lw    $s0, 0x18($sp)
/* 00497EA4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00497EA8 03E00008 */  jr    $ra
/* 00497EAC 27BD0028 */   addiu $sp, $sp, 0x28
    .type rewrite, @function
    .size rewrite, .-rewrite
    .end rewrite
)"");
