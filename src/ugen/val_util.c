__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000F510:
    # 0044E9D0 emit_composite_val
    .ascii "                "

RO_1000F520:
    # 0044EC1C emit_val
    .ascii "val_util.p"

RO_1000F52A:
    # 0044EC1C emit_val
    .ascii "null value                                                                      "

RO_1000F57A:
    # 0044EC1C emit_val
    .asciz "val_util.p                                                                      "

    .balign 4
jtbl_1000F5CC:
    # 0044EC1C emit_val
    .gpword .L0044ECBC
    .gpword .L0044EDB8
    .gpword .L0044EDB8
    .gpword .L0044EDB8
    .gpword .L0044EE08
    .gpword .L0044EEA0
    .gpword .L0044EEA0
    .gpword .L0044EEA0
    .gpword .L0044F094
    .gpword .L0044EF08

RO_1000F5F4:
    # 0044F160 find_val_type
    .ascii "unknown data type                                                               "

RO_1000F644:
    # 0044F160 find_val_type
    .ascii "val_util.p                                                                      "

RO_1000F694:
    # 0044F160 find_val_type
    .ascii "extended floating point not yet supported                                       "

RO_1000F6E4:
    # 0044F160 find_val_type
    .ascii "val_util.p                                                                      "

    .balign 4
jtbl_1000F734:
    # 0044F160 find_val_type
    .gpword .L0044F1E8
    .gpword .L0044F31C
    .gpword .L0044F210
    .gpword .L0044F31C
    .gpword .L0044F1E8
    .gpword .L0044F1A4
    .gpword .L0044F1A4
    .gpword .L0044F1A4
    .gpword .L0044F1A4
    .gpword .L0044F208
    .gpword .L0044F210
    .gpword .L0044F31C
    .gpword .L0044F200
    .gpword .L0044F1F8
    .gpword .L0044F218
    .gpword .L0044F1F0
    .gpword .L0044F220

.data
# 10016FD0
glabel val_dir_tab
    # 0044EC1C emit_val
    # 0044F0BC emit_label_val
    .byte 0x07,0x0e,0x16,0x3b,0x0d,0x0b,0x05,0x16,0x07
    .type val_dir_tab, @object
    .size val_dir_tab, .-val_dir_tab # 9
    .space 3

# 10016FDC
glabel hi
    # 0044EC1C emit_val
    .byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    .type hi, @object
    .size hi, .-hi # 128
    .space 4




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel emit_composite_val
    .ent emit_composite_val
    # 0044EC1C emit_val
/* 0044E9D0 3C1C0FBD */  .cpload $t9
/* 0044E9D4 279C1080 */  
/* 0044E9D8 0399E021 */  
/* 0044E9DC 27BDFF98 */  addiu $sp, $sp, -0x68
/* 0044E9E0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0044E9E4 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0044E9E8 AFB40024 */  sw    $s4, 0x24($sp)
/* 0044E9EC AFB30020 */  sw    $s3, 0x20($sp)
/* 0044E9F0 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0044E9F4 AFB10018 */  sw    $s1, 0x18($sp)
/* 0044E9F8 AFB00014 */  sw    $s0, 0x14($sp)
/* 0044E9FC AFA00048 */  sw    $zero, 0x48($sp)
/* 0044EA00 AFA0004C */  sw    $zero, 0x4c($sp)
/* 0044EA04 AFA00050 */  sw    $zero, 0x50($sp)
/* 0044EA08 AFA00054 */  sw    $zero, 0x54($sp)
/* 0044EA0C 8C820000 */  lw    $v0, ($a0)
/* 0044EA10 00808025 */  move  $s0, $a0
/* 0044EA14 24120001 */  li    $s2, 1
/* 0044EA18 04410003 */  bgez  $v0, .L0044EA28
/* 0044EA1C 00027103 */   sra   $t6, $v0, 4
/* 0044EA20 2441000F */  addiu $at, $v0, 0xf
/* 0044EA24 00017103 */  sra   $t6, $at, 4
.L0044EA28:
/* 0044EA28 304F000F */  andi  $t7, $v0, 0xf
/* 0044EA2C AFAE0064 */  sw    $t6, 0x64($sp)
/* 0044EA30 11C00026 */  beqz  $t6, .L0044EACC
/* 0044EA34 AFAF0060 */   sw    $t7, 0x60($sp)
/* 0044EA38 25D30001 */  addiu $s3, $t6, 1
/* 0044EA3C 27B40048 */  addiu $s4, $sp, 0x48
/* 0044EA40 24110011 */  li    $s1, 17
.L0044EA44:
/* 0044EA44 00122100 */  sll   $a0, $s2, 4
/* 0044EA48 2484FFF0 */  addiu $a0, $a0, -0x10
/* 0044EA4C 24020001 */  li    $v0, 1
/* 0044EA50 27A30048 */  addiu $v1, $sp, 0x48
.L0044EA54:
/* 0044EA54 8E190004 */  lw    $t9, 4($s0)
/* 0044EA58 24630004 */  addiu $v1, $v1, 4
/* 0044EA5C 03244021 */  addu  $t0, $t9, $a0
/* 0044EA60 01024821 */  addu  $t1, $t0, $v0
/* 0044EA64 912AFFFF */  lbu   $t2, -1($t1)
/* 0044EA68 A06AFFFC */  sb    $t2, -4($v1)
/* 0044EA6C 8E0B0004 */  lw    $t3, 4($s0)
/* 0044EA70 01646021 */  addu  $t4, $t3, $a0
/* 0044EA74 01826821 */  addu  $t5, $t4, $v0
/* 0044EA78 91AE0000 */  lbu   $t6, ($t5)
/* 0044EA7C A06EFFFD */  sb    $t6, -3($v1)
/* 0044EA80 8E0F0004 */  lw    $t7, 4($s0)
/* 0044EA84 01E4C021 */  addu  $t8, $t7, $a0
/* 0044EA88 0302C821 */  addu  $t9, $t8, $v0
/* 0044EA8C 93280001 */  lbu   $t0, 1($t9)
/* 0044EA90 A068FFFE */  sb    $t0, -2($v1)
/* 0044EA94 8E090004 */  lw    $t1, 4($s0)
/* 0044EA98 01245021 */  addu  $t2, $t1, $a0
/* 0044EA9C 01425821 */  addu  $t3, $t2, $v0
/* 0044EAA0 916C0002 */  lbu   $t4, 2($t3)
/* 0044EAA4 24420004 */  addiu $v0, $v0, 4
/* 0044EAA8 1451FFEA */  bne   $v0, $s1, .L0044EA54
/* 0044EAAC A06CFFFF */   sb    $t4, -1($v1)
/* 0044EAB0 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0044EAB4 02802025 */  move  $a0, $s4
/* 0044EAB8 0320F809 */  jalr  $t9
/* 0044EABC 00000000 */   nop   
/* 0044EAC0 26520001 */  addiu $s2, $s2, 1
/* 0044EAC4 1653FFDF */  bne   $s2, $s3, .L0044EA44
/* 0044EAC8 8FBC0028 */   lw    $gp, 0x28($sp)
.L0044EACC:
/* 0044EACC 8FAD0060 */  lw    $t5, 0x60($sp)
/* 0044EAD0 27B40048 */  addiu $s4, $sp, 0x48
/* 0044EAD4 51A0004A */  beql  $t5, $zero, .L0044EC00
/* 0044EAD8 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0044EADC 8F8E8038 */  lw    $t6, %got(RO_1000F510)($gp)
/* 0044EAE0 25CEF510 */  addiu $t6, %lo(RO_1000F510) # addiu $t6, $t6, -0xaf0
/* 0044EAE4 89D80000 */  lwl   $t8, ($t6)
/* 0044EAE8 99D80003 */  lwr   $t8, 3($t6)
/* 0044EAEC AA980000 */  swl   $t8, ($s4)
/* 0044EAF0 BA980003 */  swr   $t8, 3($s4)
/* 0044EAF4 89CF0004 */  lwl   $t7, 4($t6)
/* 0044EAF8 99CF0007 */  lwr   $t7, 7($t6)
/* 0044EAFC AA8F0004 */  swl   $t7, 4($s4)
/* 0044EB00 BA8F0007 */  swr   $t7, 7($s4)
/* 0044EB04 89D80008 */  lwl   $t8, 8($t6)
/* 0044EB08 99D8000B */  lwr   $t8, 0xb($t6)
/* 0044EB0C AA980008 */  swl   $t8, 8($s4)
/* 0044EB10 BA98000B */  swr   $t8, 0xb($s4)
/* 0044EB14 89CF000C */  lwl   $t7, 0xc($t6)
/* 0044EB18 99CF000F */  lwr   $t7, 0xf($t6)
/* 0044EB1C AA8F000C */  swl   $t7, 0xc($s4)
/* 0044EB20 BA8F000F */  swr   $t7, 0xf($s4)
/* 0044EB24 8FB90060 */  lw    $t9, 0x60($sp)
/* 0044EB28 1320002F */  beqz  $t9, .L0044EBE8
/* 0044EB2C 27330001 */   addiu $s3, $t9, 1
/* 0044EB30 2665FFFF */  addiu $a1, $s3, -1
/* 0044EB34 30A50003 */  andi  $a1, $a1, 3
/* 0044EB38 10A00010 */  beqz  $a1, .L0044EB7C
/* 0044EB3C 24120001 */   li    $s2, 1
/* 0044EB40 8FA30064 */  lw    $v1, 0x64($sp)
/* 0044EB44 27A80047 */  addiu $t0, $sp, 0x47
/* 0044EB48 02481021 */  addu  $v0, $s2, $t0
/* 0044EB4C 24A40001 */  addiu $a0, $a1, 1
/* 0044EB50 00031900 */  sll   $v1, $v1, 4
.L0044EB54:
/* 0044EB54 8E090004 */  lw    $t1, 4($s0)
/* 0044EB58 24420001 */  addiu $v0, $v0, 1
/* 0044EB5C 01235021 */  addu  $t2, $t1, $v1
/* 0044EB60 01525821 */  addu  $t3, $t2, $s2
/* 0044EB64 916CFFFF */  lbu   $t4, -1($t3)
/* 0044EB68 26520001 */  addiu $s2, $s2, 1
/* 0044EB6C 1492FFF9 */  bne   $a0, $s2, .L0044EB54
/* 0044EB70 A04CFFFF */   sb    $t4, -1($v0)
/* 0044EB74 1253001C */  beq   $s2, $s3, .L0044EBE8
/* 0044EB78 00000000 */   nop   
.L0044EB7C:
/* 0044EB7C 8FA30064 */  lw    $v1, 0x64($sp)
/* 0044EB80 27AD0047 */  addiu $t5, $sp, 0x47
/* 0044EB84 024D1021 */  addu  $v0, $s2, $t5
/* 0044EB88 00031900 */  sll   $v1, $v1, 4
.L0044EB8C:
/* 0044EB8C 8E0E0004 */  lw    $t6, 4($s0)
/* 0044EB90 24420004 */  addiu $v0, $v0, 4
/* 0044EB94 01C37821 */  addu  $t7, $t6, $v1
/* 0044EB98 01F2C021 */  addu  $t8, $t7, $s2
/* 0044EB9C 9319FFFF */  lbu   $t9, -1($t8)
/* 0044EBA0 A059FFFC */  sb    $t9, -4($v0)
/* 0044EBA4 8E080004 */  lw    $t0, 4($s0)
/* 0044EBA8 01034821 */  addu  $t1, $t0, $v1
/* 0044EBAC 01325021 */  addu  $t2, $t1, $s2
/* 0044EBB0 914B0000 */  lbu   $t3, ($t2)
/* 0044EBB4 A04BFFFD */  sb    $t3, -3($v0)
/* 0044EBB8 8E0C0004 */  lw    $t4, 4($s0)
/* 0044EBBC 01836821 */  addu  $t5, $t4, $v1
/* 0044EBC0 01B27021 */  addu  $t6, $t5, $s2
/* 0044EBC4 91CF0001 */  lbu   $t7, 1($t6)
/* 0044EBC8 A04FFFFE */  sb    $t7, -2($v0)
/* 0044EBCC 8E180004 */  lw    $t8, 4($s0)
/* 0044EBD0 0303C821 */  addu  $t9, $t8, $v1
/* 0044EBD4 03324021 */  addu  $t0, $t9, $s2
/* 0044EBD8 91090002 */  lbu   $t1, 2($t0)
/* 0044EBDC 26520004 */  addiu $s2, $s2, 4
/* 0044EBE0 1653FFEA */  bne   $s2, $s3, .L0044EB8C
/* 0044EBE4 A049FFFF */   sb    $t1, -1($v0)
.L0044EBE8:
/* 0044EBE8 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0044EBEC 02802025 */  move  $a0, $s4
/* 0044EBF0 0320F809 */  jalr  $t9
/* 0044EBF4 00000000 */   nop   
/* 0044EBF8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044EBFC 8FBF002C */  lw    $ra, 0x2c($sp)
.L0044EC00:
/* 0044EC00 8FB00014 */  lw    $s0, 0x14($sp)
/* 0044EC04 8FB10018 */  lw    $s1, 0x18($sp)
/* 0044EC08 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0044EC0C 8FB30020 */  lw    $s3, 0x20($sp)
/* 0044EC10 8FB40024 */  lw    $s4, 0x24($sp)
/* 0044EC14 03E00008 */  jr    $ra
/* 0044EC18 27BD0068 */   addiu $sp, $sp, 0x68
    .type emit_composite_val, @function
    .size emit_composite_val, .-emit_composite_val
    .end emit_composite_val

glabel emit_val
    .ent emit_val
    # 00436758 emit_list
    # 0043FBF8 emit_init
/* 0044EC1C 3C1C0FBD */  .cpload $t9
/* 0044EC20 279C0E34 */  
/* 0044EC24 0399E021 */  
/* 0044EC28 27BDFF00 */  addiu $sp, $sp, -0x100
/* 0044EC2C AFB600C4 */  sw    $s6, 0xc4($sp)
/* 0044EC30 AFB200B4 */  sw    $s2, 0xb4($sp)
/* 0044EC34 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 0044EC38 AFB000AC */  sw    $s0, 0xac($sp)
/* 0044EC3C 00E08025 */  move  $s0, $a3
/* 0044EC40 30B100FF */  andi  $s1, $a1, 0xff
/* 0044EC44 00809025 */  move  $s2, $a0
/* 0044EC48 00C0B025 */  move  $s6, $a2
/* 0044EC4C AFBF00CC */  sw    $ra, 0xcc($sp)
/* 0044EC50 AFBC00C8 */  sw    $gp, 0xc8($sp)
/* 0044EC54 AFB500C0 */  sw    $s5, 0xc0($sp)
/* 0044EC58 AFB400BC */  sw    $s4, 0xbc($sp)
/* 0044EC5C AFB300B8 */  sw    $s3, 0xb8($sp)
/* 0044EC60 AFA50104 */  sw    $a1, 0x104($sp)
/* 0044EC64 AFA000F0 */  sw    $zero, 0xf0($sp)
/* 0044EC68 AFA000F4 */  sw    $zero, 0xf4($sp)
/* 0044EC6C AFA000F8 */  sw    $zero, 0xf8($sp)
/* 0044EC70 10800007 */  beqz  $a0, .L0044EC90
/* 0044EC74 AFA000FC */   sw    $zero, 0xfc($sp)
/* 0044EC78 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0044EC7C 00002025 */  move  $a0, $zero
/* 0044EC80 02402825 */  move  $a1, $s2
/* 0044EC84 0320F809 */  jalr  $t9
/* 0044EC88 00000000 */   nop   
/* 0044EC8C 8FBC00C8 */  lw    $gp, 0xc8($sp)
.L0044EC90:
/* 0044EC90 322200FF */  andi  $v0, $s1, 0xff
/* 0044EC94 2C41000A */  sltiu $at, $v0, 0xa
/* 0044EC98 102000F7 */  beqz  $at, .L0044F078
/* 0044EC9C 24040001 */   li    $a0, 1
/* 0044ECA0 8F818038 */  lw    $at, %got(jtbl_1000F5CC)($gp)
/* 0044ECA4 00027080 */  sll   $t6, $v0, 2
/* 0044ECA8 002E0821 */  addu  $at, $at, $t6
/* 0044ECAC 8C2EF5CC */  lw    $t6, %lo(jtbl_1000F5CC)($at)
/* 0044ECB0 01DC7021 */  addu  $t6, $t6, $gp
/* 0044ECB4 01C00008 */  jr    $t6
/* 0044ECB8 00000000 */   nop   
.L0044ECBC:
/* 0044ECBC 8F8F8038 */  lw    $t7, %got(RO_1000F57A)($gp)
/* 0044ECC0 24040004 */  li    $a0, 4
/* 0044ECC4 24050087 */  li    $a1, 135
/* 0044ECC8 25EFF57A */  addiu $t7, %lo(RO_1000F57A) # addiu $t7, $t7, -0xa86
/* 0044ECCC 25E90048 */  addiu $t1, $t7, 0x48
/* 0044ECD0 03A04025 */  move  $t0, $sp
.L0044ECD4:
/* 0044ECD4 89F90000 */  lwl   $t9, ($t7)
/* 0044ECD8 99F90003 */  lwr   $t9, 3($t7)
/* 0044ECDC 25EF000C */  addiu $t7, $t7, 0xc
/* 0044ECE0 2508000C */  addiu $t0, $t0, 0xc
/* 0044ECE4 A919FFFC */  swl   $t9, -4($t0)
/* 0044ECE8 B919FFFF */  swr   $t9, -1($t0)
/* 0044ECEC 89F8FFF8 */  lwl   $t8, -8($t7)
/* 0044ECF0 99F8FFFB */  lwr   $t8, -5($t7)
/* 0044ECF4 A9180000 */  swl   $t8, ($t0)
/* 0044ECF8 B9180003 */  swr   $t8, 3($t0)
/* 0044ECFC 89F9FFFC */  lwl   $t9, -4($t7)
/* 0044ED00 99F9FFFF */  lwr   $t9, -1($t7)
/* 0044ED04 A9190004 */  swl   $t9, 4($t0)
/* 0044ED08 15E9FFF2 */  bne   $t7, $t1, .L0044ECD4
/* 0044ED0C B9190007 */   swr   $t9, 7($t0)
/* 0044ED10 89F90000 */  lwl   $t9, ($t7)
/* 0044ED14 99F90003 */  lwr   $t9, 3($t7)
/* 0044ED18 8F8A8038 */  lw    $t2, %got(RO_1000F52A)($gp)
/* 0044ED1C 03A06825 */  move  $t5, $sp
/* 0044ED20 A9190008 */  swl   $t9, 8($t0)
/* 0044ED24 B919000B */  swr   $t9, 0xb($t0)
/* 0044ED28 89F80004 */  lwl   $t8, 4($t7)
/* 0044ED2C 99F80007 */  lwr   $t8, 7($t7)
/* 0044ED30 254AF52A */  addiu $t2, %lo(RO_1000F52A) # addiu $t2, $t2, -0xad6
/* 0044ED34 254E0048 */  addiu $t6, $t2, 0x48
/* 0044ED38 A918000C */  swl   $t8, 0xc($t0)
/* 0044ED3C B918000F */  swr   $t8, 0xf($t0)
.L0044ED40:
/* 0044ED40 894C0000 */  lwl   $t4, ($t2)
/* 0044ED44 994C0003 */  lwr   $t4, 3($t2)
/* 0044ED48 254A000C */  addiu $t2, $t2, 0xc
/* 0044ED4C 25AD000C */  addiu $t5, $t5, 0xc
/* 0044ED50 A9AC004C */  swl   $t4, 0x4c($t5)
/* 0044ED54 B9AC004F */  swr   $t4, 0x4f($t5)
/* 0044ED58 894BFFF8 */  lwl   $t3, -8($t2)
/* 0044ED5C 994BFFFB */  lwr   $t3, -5($t2)
/* 0044ED60 A9AB0050 */  swl   $t3, 0x50($t5)
/* 0044ED64 B9AB0053 */  swr   $t3, 0x53($t5)
/* 0044ED68 894CFFFC */  lwl   $t4, -4($t2)
/* 0044ED6C 994CFFFF */  lwr   $t4, -1($t2)
/* 0044ED70 A9AC0054 */  swl   $t4, 0x54($t5)
/* 0044ED74 154EFFF2 */  bne   $t2, $t6, .L0044ED40
/* 0044ED78 B9AC0057 */   swr   $t4, 0x57($t5)
/* 0044ED7C 894C0000 */  lwl   $t4, ($t2)
/* 0044ED80 994C0003 */  lwr   $t4, 3($t2)
/* 0044ED84 A9AC0058 */  swl   $t4, 0x58($t5)
/* 0044ED88 B9AC005B */  swr   $t4, 0x5b($t5)
/* 0044ED8C 894B0004 */  lwl   $t3, 4($t2)
/* 0044ED90 994B0007 */  lwr   $t3, 7($t2)
/* 0044ED94 A9AB005C */  swl   $t3, 0x5c($t5)
/* 0044ED98 B9AB005F */  swr   $t3, 0x5f($t5)
/* 0044ED9C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044EDA0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044EDA4 8FA60008 */  lw    $a2, 8($sp)
/* 0044EDA8 0320F809 */  jalr  $t9
/* 0044EDAC 00000000 */   nop   
/* 0044EDB0 100000B8 */  b     .L0044F094
/* 0044EDB4 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L0044EDB8:
/* 0044EDB8 8F898934 */  lw     $t1, %got(val_dir_tab)($gp)
/* 0044EDBC 93B800F5 */  lbu   $t8, 0xf5($sp)
/* 0044EDC0 27A400F0 */  addiu $a0, $sp, 0xf0
/* 0044EDC4 2529FFFF */  addiu $t1, $t1, -1
/* 0044EDC8 02297821 */  addu  $t7, $s1, $t1
/* 0044EDCC 91E80000 */  lbu   $t0, ($t7)
/* 0044EDD0 0018CE80 */  sll   $t9, $t8, 0x1a
/* 0044EDD4 00197682 */  srl   $t6, $t9, 0x1a
/* 0044EDD8 010E5026 */  xor   $t2, $t0, $t6
/* 0044EDDC 314D003F */  andi  $t5, $t2, 0x3f
/* 0044EDE0 01B85826 */  xor   $t3, $t5, $t8
/* 0044EDE4 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0044EDE8 A3AB00F5 */  sb    $t3, 0xf5($sp)
/* 0044EDEC 8ECC0000 */  lw    $t4, ($s6)
/* 0044EDF0 AFB000FC */  sw    $s0, 0xfc($sp)
/* 0044EDF4 AFA000F0 */  sw    $zero, 0xf0($sp)
/* 0044EDF8 0320F809 */  jalr  $t9
/* 0044EDFC AFAC00F8 */   sw    $t4, 0xf8($sp)
/* 0044EE00 100000A4 */  b     .L0044F094
/* 0044EE04 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L0044EE08:
/* 0044EE08 8F898934 */  lw     $t1, %got(val_dir_tab)($gp)
/* 0044EE0C 93B900F5 */  lbu   $t9, 0xf5($sp)
/* 0044EE10 27B300F0 */  addiu $s3, $sp, 0xf0
/* 0044EE14 2529FFFF */  addiu $t1, $t1, -1
/* 0044EE18 02299021 */  addu  $s2, $s1, $t1
/* 0044EE1C 924F0000 */  lbu   $t7, ($s2)
/* 0044EE20 00194680 */  sll   $t0, $t9, 0x1a
/* 0044EE24 00087682 */  srl   $t6, $t0, 0x1a
/* 0044EE28 01EE5026 */  xor   $t2, $t7, $t6
/* 0044EE2C 314D003F */  andi  $t5, $t2, 0x3f
/* 0044EE30 01B9C026 */  xor   $t8, $t5, $t9
/* 0044EE34 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0044EE38 A3B800F5 */  sb    $t8, 0xf5($sp)
/* 0044EE3C 8ECB0000 */  lw    $t3, ($s6)
/* 0044EE40 AFB000FC */  sw    $s0, 0xfc($sp)
/* 0044EE44 AFA000F0 */  sw    $zero, 0xf0($sp)
/* 0044EE48 02602025 */  move  $a0, $s3
/* 0044EE4C 0320F809 */  jalr  $t9
/* 0044EE50 AFAB00F8 */   sw    $t3, 0xf8($sp)
/* 0044EE54 93A900F5 */  lbu   $t1, 0xf5($sp)
/* 0044EE58 924C0000 */  lbu   $t4, ($s2)
/* 0044EE5C 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0044EE60 00094680 */  sll   $t0, $t1, 0x1a
/* 0044EE64 00087E82 */  srl   $t7, $t0, 0x1a
/* 0044EE68 018F7026 */  xor   $t6, $t4, $t7
/* 0044EE6C 31CA003F */  andi  $t2, $t6, 0x3f
/* 0044EE70 01496826 */  xor   $t5, $t2, $t1
/* 0044EE74 A3AD00F5 */  sb    $t5, 0xf5($sp)
/* 0044EE78 8ED90004 */  lw    $t9, 4($s6)
/* 0044EE7C AFB000FC */  sw    $s0, 0xfc($sp)
/* 0044EE80 AFA000F0 */  sw    $zero, 0xf0($sp)
/* 0044EE84 AFB900F8 */  sw    $t9, 0xf8($sp)
/* 0044EE88 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0044EE8C 02602025 */  move  $a0, $s3
/* 0044EE90 0320F809 */  jalr  $t9
/* 0044EE94 00000000 */   nop   
/* 0044EE98 1000007E */  b     .L0044F094
/* 0044EE9C 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L0044EEA0:
/* 0044EEA0 8F988934 */  lw     $t8, %got(val_dir_tab)($gp)
/* 0044EEA4 93AC00F5 */  lbu   $t4, 0xf5($sp)
/* 0044EEA8 27A400F0 */  addiu $a0, $sp, 0xf0
/* 0044EEAC 2718FFFF */  addiu $t8, $t8, -1
/* 0044EEB0 02385821 */  addu  $t3, $s1, $t8
/* 0044EEB4 91680000 */  lbu   $t0, ($t3)
/* 0044EEB8 000C7E80 */  sll   $t7, $t4, 0x1a
/* 0044EEBC 000F7682 */  srl   $t6, $t7, 0x1a
/* 0044EEC0 010E5026 */  xor   $t2, $t0, $t6
/* 0044EEC4 3149003F */  andi  $t1, $t2, 0x3f
/* 0044EEC8 012C6826 */  xor   $t5, $t1, $t4
/* 0044EECC A3AD00F5 */  sb    $t5, 0xf5($sp)
/* 0044EED0 8ED90000 */  lw    $t9, ($s6)
/* 0044EED4 AFA000F0 */  sw    $zero, 0xf0($sp)
/* 0044EED8 AFB000FC */  sw    $s0, 0xfc($sp)
/* 0044EEDC AFB900F8 */  sw    $t9, 0xf8($sp)
/* 0044EEE0 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0044EEE4 0320F809 */  jalr  $t9
/* 0044EEE8 00000000 */   nop   
/* 0044EEEC 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0044EEF0 02C02025 */  move  $a0, $s6
/* 0044EEF4 8F9986A4 */  lw    $t9, %call16(emit_composite_val)($gp)
/* 0044EEF8 0320F809 */  jalr  $t9
/* 0044EEFC 00000000 */   nop   
/* 0044EF00 10000064 */  b     .L0044F094
/* 0044EF04 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L0044EF08:
/* 0044EF08 8EC20000 */  lw    $v0, ($s6)
/* 0044EF0C 30580001 */  andi  $t8, $v0, 1
/* 0044EF10 030002B6 */  tne   $t8, $zero, 0xa
/* 0044EF14 8F8B898C */  lw     $t3, %got(lsb_first)($gp)
/* 0044EF18 916B0000 */  lbu   $t3, ($t3)
/* 0044EF1C 1560002C */  bnez  $t3, .L0044EFD0
/* 0044EF20 00000000 */   nop   
/* 0044EF24 04410003 */  bgez  $v0, .L0044EF34
/* 0044EF28 0002A043 */   sra   $s4, $v0, 1
/* 0044EF2C 24410001 */  addiu $at, $v0, 1
/* 0044EF30 0001A043 */  sra   $s4, $at, 1
.L0044EF34:
/* 0044EF34 1A800057 */  blez  $s4, .L0044F094
/* 0044EF38 24100002 */   li    $s0, 2
/* 0044EF3C 8F8F8934 */  lw     $t7, %got(val_dir_tab)($gp)
/* 0044EF40 26940001 */  addiu $s4, $s4, 1
/* 0044EF44 0014A840 */  sll   $s5, $s4, 1
/* 0044EF48 25EFFFFF */  addiu $t7, $t7, -1
/* 0044EF4C 022F9021 */  addu  $s2, $s1, $t7
/* 0044EF50 8F918938 */  lw     $s1, %got(hi)($gp)
/* 0044EF54 27B300F0 */  addiu $s3, $sp, 0xf0
.L0044EF58:
/* 0044EF58 93AE00F5 */  lbu   $t6, 0xf5($sp)
/* 0044EF5C 92480000 */  lbu   $t0, ($s2)
/* 0044EF60 02602025 */  move  $a0, $s3
/* 0044EF64 000E5680 */  sll   $t2, $t6, 0x1a
/* 0044EF68 000A4E82 */  srl   $t1, $t2, 0x1a
/* 0044EF6C 01096026 */  xor   $t4, $t0, $t1
/* 0044EF70 318D003F */  andi  $t5, $t4, 0x3f
/* 0044EF74 01AEC826 */  xor   $t9, $t5, $t6
/* 0044EF78 A3B900F5 */  sb    $t9, 0xf5($sp)
/* 0044EF7C 8ED80004 */  lw    $t8, 4($s6)
/* 0044EF80 24190001 */  li    $t9, 1
/* 0044EF84 03101021 */  addu  $v0, $t8, $s0
/* 0044EF88 904BFFFE */  lbu   $t3, -2($v0)
/* 0044EF8C 9049FFFF */  lbu   $t1, -1($v0)
/* 0044EF90 022B7821 */  addu  $t7, $s1, $t3
/* 0044EF94 91EA0000 */  lbu   $t2, ($t7)
/* 0044EF98 02296021 */  addu  $t4, $s1, $t1
/* 0044EF9C 918D0000 */  lbu   $t5, ($t4)
/* 0044EFA0 AFB900FC */  sw    $t9, 0xfc($sp)
/* 0044EFA4 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0044EFA8 000A4100 */  sll   $t0, $t2, 4
/* 0044EFAC 010D7021 */  addu  $t6, $t0, $t5
/* 0044EFB0 AFAE00F8 */  sw    $t6, 0xf8($sp)
/* 0044EFB4 0320F809 */  jalr  $t9
/* 0044EFB8 AFA000F0 */   sw    $zero, 0xf0($sp)
/* 0044EFBC 26100002 */  addiu $s0, $s0, 2
/* 0044EFC0 1615FFE5 */  bne   $s0, $s5, .L0044EF58
/* 0044EFC4 8FBC00C8 */   lw    $gp, 0xc8($sp)
/* 0044EFC8 10000033 */  b     .L0044F098
/* 0044EFCC 8FBF00CC */   lw    $ra, 0xcc($sp)
.L0044EFD0:
/* 0044EFD0 04410003 */  bgez  $v0, .L0044EFE0
/* 0044EFD4 0002A043 */   sra   $s4, $v0, 1
/* 0044EFD8 24410001 */  addiu $at, $v0, 1
/* 0044EFDC 0001A043 */  sra   $s4, $at, 1
.L0044EFE0:
/* 0044EFE0 5A80002D */  blezl $s4, .L0044F098
/* 0044EFE4 8FBF00CC */   lw    $ra, 0xcc($sp)
/* 0044EFE8 8F988934 */  lw     $t8, %got(val_dir_tab)($gp)
/* 0044EFEC 00148040 */  sll   $s0, $s4, 1
/* 0044EFF0 27B300F0 */  addiu $s3, $sp, 0xf0
/* 0044EFF4 2718FFFF */  addiu $t8, $t8, -1
/* 0044EFF8 02389021 */  addu  $s2, $s1, $t8
/* 0044EFFC 8F918938 */  lw     $s1, %got(hi)($gp)
.L0044F000:
/* 0044F000 93AF00F5 */  lbu   $t7, 0xf5($sp)
/* 0044F004 924B0000 */  lbu   $t3, ($s2)
/* 0044F008 02602025 */  move  $a0, $s3
/* 0044F00C 000F5680 */  sll   $t2, $t7, 0x1a
/* 0044F010 000A4E82 */  srl   $t1, $t2, 0x1a
/* 0044F014 01696026 */  xor   $t4, $t3, $t1
/* 0044F018 3188003F */  andi  $t0, $t4, 0x3f
/* 0044F01C 010F6826 */  xor   $t5, $t0, $t7
/* 0044F020 A3AD00F5 */  sb    $t5, 0xf5($sp)
/* 0044F024 8ECE0004 */  lw    $t6, 4($s6)
/* 0044F028 240D0001 */  li    $t5, 1
/* 0044F02C 01D01021 */  addu  $v0, $t6, $s0
/* 0044F030 9059FFFE */  lbu   $t9, -2($v0)
/* 0044F034 9049FFFF */  lbu   $t1, -1($v0)
/* 0044F038 0239C021 */  addu  $t8, $s1, $t9
/* 0044F03C 930A0000 */  lbu   $t2, ($t8)
/* 0044F040 02296021 */  addu  $t4, $s1, $t1
/* 0044F044 91880000 */  lbu   $t0, ($t4)
/* 0044F048 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0044F04C 000A5900 */  sll   $t3, $t2, 4
/* 0044F050 01687821 */  addu  $t7, $t3, $t0
/* 0044F054 AFAF00F8 */  sw    $t7, 0xf8($sp)
/* 0044F058 AFAD00FC */  sw    $t5, 0xfc($sp)
/* 0044F05C 0320F809 */  jalr  $t9
/* 0044F060 AFA000F0 */   sw    $zero, 0xf0($sp)
/* 0044F064 2610FFFE */  addiu $s0, $s0, -2
/* 0044F068 1600FFE5 */  bnez  $s0, .L0044F000
/* 0044F06C 8FBC00C8 */   lw    $gp, 0xc8($sp)
/* 0044F070 10000009 */  b     .L0044F098
/* 0044F074 8FBF00CC */   lw    $ra, 0xcc($sp)
.L0044F078:
/* 0044F078 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 0044F07C 8F868038 */  lw    $a2, %got(RO_1000F520)($gp)
/* 0044F080 24050085 */  li    $a1, 133
/* 0044F084 2407000A */  li    $a3, 10
/* 0044F088 0320F809 */  jalr  $t9
/* 0044F08C 24C6F520 */   addiu $a2, %lo(RO_1000F520) # addiu $a2, $a2, -0xae0
/* 0044F090 8FBC00C8 */  lw    $gp, 0xc8($sp)
.L0044F094:
/* 0044F094 8FBF00CC */  lw    $ra, 0xcc($sp)
.L0044F098:
/* 0044F098 8FB000AC */  lw    $s0, 0xac($sp)
/* 0044F09C 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 0044F0A0 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 0044F0A4 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 0044F0A8 8FB400BC */  lw    $s4, 0xbc($sp)
/* 0044F0AC 8FB500C0 */  lw    $s5, 0xc0($sp)
/* 0044F0B0 8FB600C4 */  lw    $s6, 0xc4($sp)
/* 0044F0B4 03E00008 */  jr    $ra
/* 0044F0B8 27BD0100 */   addiu $sp, $sp, 0x100
    .type emit_val, @function
    .size emit_val, .-emit_val
    .end emit_val

glabel emit_label_val
    .ent emit_label_val
    # 0043FBF8 emit_init
/* 0044F0BC 3C1C0FBD */  .cpload $t9
/* 0044F0C0 279C0994 */  
/* 0044F0C4 0399E021 */  
/* 0044F0C8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0044F0CC 24010002 */  li    $at, 2
/* 0044F0D0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044F0D4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044F0D8 AFA40030 */  sw    $a0, 0x30($sp)
/* 0044F0DC 14E1000B */  bne   $a3, $at, .L0044F10C
/* 0044F0E0 AFA00024 */   sw    $zero, 0x24($sp)
/* 0044F0E4 8F8E8934 */  lw     $t6, %got(val_dir_tab)($gp)
/* 0044F0E8 93AF0025 */  lbu   $t7, 0x25($sp)
/* 0044F0EC 91CE0001 */  lbu   $t6, 1($t6)
/* 0044F0F0 000FC680 */  sll   $t8, $t7, 0x1a
/* 0044F0F4 0018CE82 */  srl   $t9, $t8, 0x1a
/* 0044F0F8 01D94026 */  xor   $t0, $t6, $t9
/* 0044F0FC 3109003F */  andi  $t1, $t0, 0x3f
/* 0044F100 012F5026 */  xor   $t2, $t1, $t7
/* 0044F104 1000000A */  b     .L0044F130
/* 0044F108 A3AA0025 */   sb    $t2, 0x25($sp)
.L0044F10C:
/* 0044F10C 8F8B8934 */  lw     $t3, %got(val_dir_tab)($gp)
/* 0044F110 93AC0025 */  lbu   $t4, 0x25($sp)
/* 0044F114 916B0007 */  lbu   $t3, 7($t3)
/* 0044F118 000C6E80 */  sll   $t5, $t4, 0x1a
/* 0044F11C 000DC682 */  srl   $t8, $t5, 0x1a
/* 0044F120 01787026 */  xor   $t6, $t3, $t8
/* 0044F124 31D9003F */  andi  $t9, $t6, 0x3f
/* 0044F128 032C4026 */  xor   $t0, $t9, $t4
/* 0044F12C A3A80025 */  sb    $t0, 0x25($sp)
.L0044F130:
/* 0044F130 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0044F134 24090001 */  li    $t1, 1
/* 0044F138 AFA60028 */  sw    $a2, 0x28($sp)
/* 0044F13C AFA9002C */  sw    $t1, 0x2c($sp)
/* 0044F140 AFA50020 */  sw    $a1, 0x20($sp)
/* 0044F144 0320F809 */  jalr  $t9
/* 0044F148 27A40020 */   addiu $a0, $sp, 0x20
/* 0044F14C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044F150 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044F154 27BD0030 */  addiu $sp, $sp, 0x30
/* 0044F158 03E00008 */  jr    $ra
/* 0044F15C 00000000 */   nop   
    .type emit_label_val, @function
    .size emit_label_val, .-emit_label_val
    .end emit_label_val

glabel find_val_type
    .ent find_val_type
    # 0043FBF8 emit_init
/* 0044F160 3C1C0FBD */  .cpload $t9
/* 0044F164 279C08F0 */  
/* 0044F168 0399E021 */  
/* 0044F16C 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0044F170 308200FF */  andi  $v0, $a0, 0xff
/* 0044F174 2C410011 */  sltiu $at, $v0, 0x11
/* 0044F178 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0044F17C AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0044F180 10200066 */  beqz  $at, .L0044F31C
/* 0044F184 AFA400C0 */   sw    $a0, 0xc0($sp)
/* 0044F188 8F818038 */  lw    $at, %got(jtbl_1000F734)($gp)
/* 0044F18C 00027080 */  sll   $t6, $v0, 2
/* 0044F190 002E0821 */  addu  $at, $at, $t6
/* 0044F194 8C2EF734 */  lw    $t6, %lo(jtbl_1000F734)($at)
/* 0044F198 01DC7021 */  addu  $t6, $t6, $gp
/* 0044F19C 01C00008 */  jr    $t6
/* 0044F1A0 00000000 */   nop   
.L0044F1A4:
/* 0044F1A4 24010001 */  li    $at, 1
/* 0044F1A8 54A10004 */  bnel  $a1, $at, .L0044F1BC
/* 0044F1AC 28A10003 */   slti  $at, $a1, 3
/* 0044F1B0 10000099 */  b     .L0044F418
/* 0044F1B4 24020001 */   li    $v0, 1
/* 0044F1B8 28A10003 */  slti  $at, $a1, 3
.L0044F1BC:
/* 0044F1BC 50200004 */  beql  $at, $zero, .L0044F1D0
/* 0044F1C0 28A10005 */   slti  $at, $a1, 5
/* 0044F1C4 10000094 */  b     .L0044F418
/* 0044F1C8 24020002 */   li    $v0, 2
/* 0044F1CC 28A10005 */  slti  $at, $a1, 5
.L0044F1D0:
/* 0044F1D0 10200003 */  beqz  $at, .L0044F1E0
/* 0044F1D4 00000000 */   nop   
/* 0044F1D8 1000008F */  b     .L0044F418
/* 0044F1DC 24020003 */   li    $v0, 3
.L0044F1E0:
/* 0044F1E0 1000008D */  b     .L0044F418
/* 0044F1E4 24020004 */   li    $v0, 4
.L0044F1E8:
/* 0044F1E8 1000008B */  b     .L0044F418
/* 0044F1EC 24020003 */   li    $v0, 3
.L0044F1F0:
/* 0044F1F0 10000089 */  b     .L0044F418
/* 0044F1F4 24020004 */   li    $v0, 4
.L0044F1F8:
/* 0044F1F8 10000087 */  b     .L0044F418
/* 0044F1FC 24020005 */   li    $v0, 5
.L0044F200:
/* 0044F200 10000085 */  b     .L0044F418
/* 0044F204 24020006 */   li    $v0, 6
.L0044F208:
/* 0044F208 10000083 */  b     .L0044F418
/* 0044F20C 24020007 */   li    $v0, 7
.L0044F210:
/* 0044F210 10000081 */  b     .L0044F418
/* 0044F214 24020008 */   li    $v0, 8
.L0044F218:
/* 0044F218 1000007F */  b     .L0044F418
/* 0044F21C 24020009 */   li    $v0, 9
.L0044F220:
/* 0044F220 8F8F8038 */  lw    $t7, %got(RO_1000F6E4)($gp)
/* 0044F224 24040004 */  li    $a0, 4
/* 0044F228 240500F2 */  li    $a1, 242
/* 0044F22C 25EFF6E4 */  addiu $t7, %lo(RO_1000F6E4) # addiu $t7, $t7, -0x91c
/* 0044F230 25E90048 */  addiu $t1, $t7, 0x48
/* 0044F234 03A04025 */  move  $t0, $sp
.L0044F238:
/* 0044F238 89F90000 */  lwl   $t9, ($t7)
/* 0044F23C 99F90003 */  lwr   $t9, 3($t7)
/* 0044F240 25EF000C */  addiu $t7, $t7, 0xc
/* 0044F244 2508000C */  addiu $t0, $t0, 0xc
/* 0044F248 A919FFFC */  swl   $t9, -4($t0)
/* 0044F24C B919FFFF */  swr   $t9, -1($t0)
/* 0044F250 89F8FFF8 */  lwl   $t8, -8($t7)
/* 0044F254 99F8FFFB */  lwr   $t8, -5($t7)
/* 0044F258 A9180000 */  swl   $t8, ($t0)
/* 0044F25C B9180003 */  swr   $t8, 3($t0)
/* 0044F260 89F9FFFC */  lwl   $t9, -4($t7)
/* 0044F264 99F9FFFF */  lwr   $t9, -1($t7)
/* 0044F268 A9190004 */  swl   $t9, 4($t0)
/* 0044F26C 15E9FFF2 */  bne   $t7, $t1, .L0044F238
/* 0044F270 B9190007 */   swr   $t9, 7($t0)
/* 0044F274 89F90000 */  lwl   $t9, ($t7)
/* 0044F278 99F90003 */  lwr   $t9, 3($t7)
/* 0044F27C 8F8A8038 */  lw    $t2, %got(RO_1000F694)($gp)
/* 0044F280 03A06825 */  move  $t5, $sp
/* 0044F284 A9190008 */  swl   $t9, 8($t0)
/* 0044F288 B919000B */  swr   $t9, 0xb($t0)
/* 0044F28C 89F80004 */  lwl   $t8, 4($t7)
/* 0044F290 99F80007 */  lwr   $t8, 7($t7)
/* 0044F294 254AF694 */  addiu $t2, %lo(RO_1000F694) # addiu $t2, $t2, -0x96c
/* 0044F298 254E0048 */  addiu $t6, $t2, 0x48
/* 0044F29C A918000C */  swl   $t8, 0xc($t0)
/* 0044F2A0 B918000F */  swr   $t8, 0xf($t0)
.L0044F2A4:
/* 0044F2A4 894C0000 */  lwl   $t4, ($t2)
/* 0044F2A8 994C0003 */  lwr   $t4, 3($t2)
/* 0044F2AC 254A000C */  addiu $t2, $t2, 0xc
/* 0044F2B0 25AD000C */  addiu $t5, $t5, 0xc
/* 0044F2B4 A9AC004C */  swl   $t4, 0x4c($t5)
/* 0044F2B8 B9AC004F */  swr   $t4, 0x4f($t5)
/* 0044F2BC 894BFFF8 */  lwl   $t3, -8($t2)
/* 0044F2C0 994BFFFB */  lwr   $t3, -5($t2)
/* 0044F2C4 A9AB0050 */  swl   $t3, 0x50($t5)
/* 0044F2C8 B9AB0053 */  swr   $t3, 0x53($t5)
/* 0044F2CC 894CFFFC */  lwl   $t4, -4($t2)
/* 0044F2D0 994CFFFF */  lwr   $t4, -1($t2)
/* 0044F2D4 A9AC0054 */  swl   $t4, 0x54($t5)
/* 0044F2D8 154EFFF2 */  bne   $t2, $t6, .L0044F2A4
/* 0044F2DC B9AC0057 */   swr   $t4, 0x57($t5)
/* 0044F2E0 894C0000 */  lwl   $t4, ($t2)
/* 0044F2E4 994C0003 */  lwr   $t4, 3($t2)
/* 0044F2E8 A9AC0058 */  swl   $t4, 0x58($t5)
/* 0044F2EC B9AC005B */  swr   $t4, 0x5b($t5)
/* 0044F2F0 894B0004 */  lwl   $t3, 4($t2)
/* 0044F2F4 994B0007 */  lwr   $t3, 7($t2)
/* 0044F2F8 A9AB005C */  swl   $t3, 0x5c($t5)
/* 0044F2FC B9AB005F */  swr   $t3, 0x5f($t5)
/* 0044F300 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044F304 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044F308 8FA60008 */  lw    $a2, 8($sp)
/* 0044F30C 0320F809 */  jalr  $t9
/* 0044F310 00000000 */   nop   
/* 0044F314 1000003F */  b     .L0044F414
/* 0044F318 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0044F31C:
/* 0044F31C 8F898038 */  lw    $t1, %got(RO_1000F644)($gp)
/* 0044F320 24040004 */  li    $a0, 4
/* 0044F324 240500F8 */  li    $a1, 248
/* 0044F328 2529F644 */  addiu $t1, %lo(RO_1000F644) # addiu $t1, $t1, -0x9bc
/* 0044F32C 25390048 */  addiu $t9, $t1, 0x48
/* 0044F330 03A0C025 */  move  $t8, $sp
.L0044F334:
/* 0044F334 89280000 */  lwl   $t0, ($t1)
/* 0044F338 99280003 */  lwr   $t0, 3($t1)
/* 0044F33C 2529000C */  addiu $t1, $t1, 0xc
/* 0044F340 2718000C */  addiu $t8, $t8, 0xc
/* 0044F344 AB08FFFC */  swl   $t0, -4($t8)
/* 0044F348 BB08FFFF */  swr   $t0, -1($t8)
/* 0044F34C 892FFFF8 */  lwl   $t7, -8($t1)
/* 0044F350 992FFFFB */  lwr   $t7, -5($t1)
/* 0044F354 AB0F0000 */  swl   $t7, ($t8)
/* 0044F358 BB0F0003 */  swr   $t7, 3($t8)
/* 0044F35C 8928FFFC */  lwl   $t0, -4($t1)
/* 0044F360 9928FFFF */  lwr   $t0, -1($t1)
/* 0044F364 AB080004 */  swl   $t0, 4($t8)
/* 0044F368 1539FFF2 */  bne   $t1, $t9, .L0044F334
/* 0044F36C BB080007 */   swr   $t0, 7($t8)
/* 0044F370 89280000 */  lwl   $t0, ($t1)
/* 0044F374 99280003 */  lwr   $t0, 3($t1)
/* 0044F378 8F8E8038 */  lw    $t6, %got(RO_1000F5F4)($gp)
/* 0044F37C 03A05825 */  move  $t3, $sp
/* 0044F380 AB080008 */  swl   $t0, 8($t8)
/* 0044F384 BB08000B */  swr   $t0, 0xb($t8)
/* 0044F388 892F0004 */  lwl   $t7, 4($t1)
/* 0044F38C 992F0007 */  lwr   $t7, 7($t1)
/* 0044F390 25CEF5F4 */  addiu $t6, %lo(RO_1000F5F4) # addiu $t6, $t6, -0xa0c
/* 0044F394 25CC0048 */  addiu $t4, $t6, 0x48
/* 0044F398 AB0F000C */  swl   $t7, 0xc($t8)
/* 0044F39C BB0F000F */  swr   $t7, 0xf($t8)
.L0044F3A0:
/* 0044F3A0 89CD0000 */  lwl   $t5, ($t6)
/* 0044F3A4 99CD0003 */  lwr   $t5, 3($t6)
/* 0044F3A8 25CE000C */  addiu $t6, $t6, 0xc
/* 0044F3AC 256B000C */  addiu $t3, $t3, 0xc
/* 0044F3B0 A96D004C */  swl   $t5, 0x4c($t3)
/* 0044F3B4 B96D004F */  swr   $t5, 0x4f($t3)
/* 0044F3B8 89CAFFF8 */  lwl   $t2, -8($t6)
/* 0044F3BC 99CAFFFB */  lwr   $t2, -5($t6)
/* 0044F3C0 A96A0050 */  swl   $t2, 0x50($t3)
/* 0044F3C4 B96A0053 */  swr   $t2, 0x53($t3)
/* 0044F3C8 89CDFFFC */  lwl   $t5, -4($t6)
/* 0044F3CC 99CDFFFF */  lwr   $t5, -1($t6)
/* 0044F3D0 A96D0054 */  swl   $t5, 0x54($t3)
/* 0044F3D4 15CCFFF2 */  bne   $t6, $t4, .L0044F3A0
/* 0044F3D8 B96D0057 */   swr   $t5, 0x57($t3)
/* 0044F3DC 89CD0000 */  lwl   $t5, ($t6)
/* 0044F3E0 99CD0003 */  lwr   $t5, 3($t6)
/* 0044F3E4 A96D0058 */  swl   $t5, 0x58($t3)
/* 0044F3E8 B96D005B */  swr   $t5, 0x5b($t3)
/* 0044F3EC 89CA0004 */  lwl   $t2, 4($t6)
/* 0044F3F0 99CA0007 */  lwr   $t2, 7($t6)
/* 0044F3F4 A96A005C */  swl   $t2, 0x5c($t3)
/* 0044F3F8 B96A005F */  swr   $t2, 0x5f($t3)
/* 0044F3FC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044F400 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044F404 8FA60008 */  lw    $a2, 8($sp)
/* 0044F408 0320F809 */  jalr  $t9
/* 0044F40C 00000000 */   nop   
/* 0044F410 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0044F414:
/* 0044F414 93A200BF */  lbu   $v0, 0xbf($sp)
.L0044F418:
/* 0044F418 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0044F41C 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0044F420 03E00008 */  jr    $ra
/* 0044F424 00000000 */   nop   
    .type find_val_type, @function
    .size find_val_type, .-find_val_type
    .end find_val_type
)"");
