__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000E570:
    # 0044B384 func_0044B384
    .ascii "illegal register type                                                           "

RO_1000E5C0:
    # 0044B384 func_0044B384
    .ascii "ugen.p                                                                          "

RO_1000E610:
    # 0044B384 func_0044B384
    .ascii "insufficient code generator registers                                           "

RO_1000E660:
    # 0044B384 func_0044B384
    .ascii "ugen.p                                                                          "

    .balign 4
jtbl_1000E6B0:
    # 0044B384 func_0044B384
    .gpword .L0044B3A4
    .gpword .L0044B4E4
    .gpword .L0044B4E4
    .gpword .L0044B4E4
    .gpword .L0044B4D8
    .gpword .L0044B4E4
    .gpword .L0044B3B0

RO_1000E6CC:
    # 0044B640 func_0044B640
    .ascii "illegal register type                                                           "

RO_1000E71C:
    # 0044B640 func_0044B640
    .ascii "ugen.p                                                                          "

RO_1000E76C:
    # 0044B640 func_0044B640
    .ascii "insufficient code generator fp registers                                        "

RO_1000E7BC:
    # 0044B640 func_0044B640
    .ascii "ugen.p                                                                          "

RO_1000E80C:
    # 0044B640 func_0044B640
    .ascii "insufficient code generator fp registers                                        "

RO_1000E85C:
    # 0044B640 func_0044B640
    .ascii "ugen.p                                                                          "

    .balign 4
jtbl_1000E8AC:
    # 0044B640 func_0044B640
    .gpword .L0044B660
    .gpword .L0044B8DC
    .gpword .L0044B8DC
    .gpword .L0044B8DC
    .gpword .L0044B794
    .gpword .L0044B8DC
    .gpword .L0044B66C

RO_1000E8C8:
    # 0044BA38 func_0044BA38
    .ascii "Tree dump after "

RO_1000E8D8:
    # 0044BA38 func_0044BA38
    .ascii "Tree dump after "

RO_1000E8E8:
    # 0044BC78 func_0044BC78
    .ascii "No suitable file can be created                                                 "

RO_1000E938:
    # 0044BC78 func_0044BC78
    .ascii "ugen.p                                                                          "

RO_1000E988:
    # 0044BC78 func_0044BC78
    .ascii "/tmp/ugentmpXXXXXX              "

RO_1000E9A8:
    # 0044BF18 main1
    .ascii "Translate   "

RO_1000E9B4:
    # 0044BF18 main1
    .ascii "Build       "

RO_1000E9C0:
    # 0044BF18 main1
    .ascii "ugen:"

RO_1000E9C5:
    # 0044BF18 main1
    .ascii "Cannot read symbol table file"

RO_1000E9E2:
    # 0044BF18 main1
    .ascii "fp32regs is only legal for mips3 and future architectures                       "

RO_1000EA32:
    # 0044BF18 main1
    .ascii "ugen.p                                                                          "

RO_1000EA82:
    # 0044BF18 main1
    .ascii "too many fp registers                                                           "

RO_1000EAD2:
    # 0044BF18 main1
    .ascii "ugen.p                                                                          "

RO_1000EB22:
    # 0044BF18 main1
    .ascii "too many registers                                                              "

RO_1000EB72:
    # 0044BF18 main1
    .ascii "ugen.p                                                                          "

RO_1000EBC2:
    # 0044BF18 main1
    .ascii "Must specify .F file"

RO_1000EBD6:
    # 0044BF18 main1
    .ascii " not understood"

RO_1000EBE5:
    # 0044BF18 main1
    .ascii " not understood"

RO_1000EBF4:
    # 0044BF18 main1
    .ascii "numeric argument required for -checkstack"

RO_1000EC1D:
    # 0044BF18 main1
    .ascii "-checkstack                     "

RO_1000EC3D:
    # 0044BF18 main1
    .ascii "-cpalias                        "

RO_1000EC5D:
    # 0044BF18 main1
    .ascii "-align64                        "

RO_1000EC7D:
    # 0044BF18 main1
    .ascii "-align32                        "

RO_1000EC9D:
    # 0044BF18 main1
    .ascii "-align16                        "

RO_1000ECBD:
    # 0044BF18 main1
    .ascii "-align8                         "

RO_1000ECDD:
    # 0044BF18 main1
    .ascii "-pic2 implies -G 0. -G option ignored"

RO_1000ED02:
    # 0044BF18 main1
    .ascii "-pic2                           "

RO_1000ED22:
    # 0044BF18 main1
    .ascii "-pic                            "

RO_1000ED42:
    # 0044BF18 main1
    .ascii "-pic1                           "

RO_1000ED62:
    # 0044BF18 main1
    .ascii "-pic0                           "

RO_1000ED82:
    # 0044BF18 main1
    .ascii "-mscoff                         "

RO_1000EDA2:
    # 0044BF18 main1
    .ascii "-mips3                          "

RO_1000EDC2:
    # 0044BF18 main1
    .ascii "-mips2                          "

RO_1000EDE2:
    # 0044BF18 main1
    .ascii "-mips1                          "

RO_1000EE02:
    # 0044BF18 main1
    .ascii "-nounsignedconv                 "

RO_1000EE22:
    # 0044BF18 main1
    .ascii "-notailopt                      "

RO_1000EE42:
    # 0044BF18 main1
    .ascii "-nocpalias                      "

RO_1000EE62:
    # 0044BF18 main1
    .ascii "-nooffsetopt                    "

RO_1000EE82:
    # 0044BF18 main1
    .ascii "-fp32regs                       "

RO_1000EEA2:
    # 0044BF18 main1
    .ascii "-pic2 implies -G 0. -G option ignored"

RO_1000EEC7:
    # 0044BF18 main1
    .ascii "numeric argument required for -G"

RO_1000EEE7:
    # 0044BF18 main1
    .ascii "numeric argument required for -O"

RO_1000EF07:
    # 0044BF18 main1
    .ascii "numeric argument required for -g"

RO_1000EF27:
    # 0044BF18 main1
    .ascii "-domtag                         "

RO_1000EF47:
    # 0044BF18 main1
    .ascii "-dwopcode                       "

RO_1000EF67:
    # 0044BF18 main1
    .ascii "filename required after -e"

RO_1000EF81:
    # 0044BF18 main1
    .ascii "filename required after -t"

RO_1000EF9B:
    # 0044BF18 main1
    .ascii "filename required after -temp"

RO_1000EFB8:
    # 0044BF18 main1
    .ascii "filename required after -l"

RO_1000EFD2:
    # 0044BF18 main1
    .ascii "filename required after -u"

RO_1000EFEC:
    # 0044BF18 main1
    .ascii "filename required after -o"

RO_1000F006:
    # 0044BF18 main1
    .ascii "Usage is: ugen [-o binfile] [-l listfile] [-e dumpfile] [-t symbolfilename] [-d] [-trapuv] [-G smallsize] [-p] file.F"

RO_1000F07B:
    # 0044BF18 main1
    .asciz "_XPG                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            "

    .balign 4
jtbl_1000F47C:
    # 0044BF18 main1
    .gpword .L0044D928
    .gpword .L0044D938
    .gpword .L0044D944

    .balign 4
jtbl_1000F488:
    # 0044BF18 main1
    .gpword .L0044C858
    .gpword .L0044CC40
    .gpword .L0044C954
    .gpword .L0044DD40
    .gpword .L0044DD40
    .gpword .L0044DD40
    .gpword .L0044DD40
    .gpword .L0044CC2C
    .gpword .L0044DD40
    .gpword .L0044DD40
    .gpword .L0044C8F0

    .balign 4
jtbl_1000F4B4:
    # 0044BF18 main1
    .gpword .L0044D5C0
    .gpword .L0044DD40
    .gpword .L0044D964
    .gpword .L0044C6B0
    .gpword .L0044C5E4
    .gpword .L0044CAE4
    .gpword .L0044C88C
    .gpword .L0044DD40
    .gpword .L0044DD40
    .gpword .L0044C26C
    .gpword .L0044DD40
    .gpword .L0044C3EC
    .gpword .L0044CF68
    .gpword .L0044CC70
    .gpword .L0044C2A0
    .gpword .L0044D26C
    .gpword .L0044DD40
    .gpword .L0044CA64
    .gpword .L0044DD40
    .gpword .L0044C47C
    .gpword .L0044C324
    .gpword .L0044CC5C
    .gpword .L0044D8F8




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
    .type func_0044B290, @function
func_0044B290:
    # 0044BF18 main1
/* 0044B290 908E0000 */  lbu   $t6, ($a0)
/* 0044B294 24060020 */  li    $a2, 32
/* 0044B298 00001825 */  move  $v1, $zero
/* 0044B29C 10CE0011 */  beq   $a2, $t6, .L0044B2E4
/* 0044B2A0 24820001 */   addiu $v0, $a0, 1
/* 0044B2A4 9045FFFF */  lbu   $a1, -1($v0)
/* 0044B2A8 2404000A */  li    $a0, 10
/* 0044B2AC 24AFFFE0 */  addiu $t7, $a1, -0x20
.L0044B2B0:
/* 0044B2B0 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0044B2B4 0018C823 */  negu  $t9, $t8
/* 0044B2B8 3328FFC0 */  andi  $t0, $t9, 0xffc0
/* 0044B2BC 01E84804 */  sllv  $t1, $t0, $t7
/* 0044B2C0 012002B0 */  tge   $t1, $zero, 0xa
/* 0044B2C4 00640019 */  multu $v1, $a0
/* 0044B2C8 24420001 */  addiu $v0, $v0, 1
/* 0044B2CC 00005012 */  mflo  $t2
/* 0044B2D0 01451821 */  addu  $v1, $t2, $a1
/* 0044B2D4 9045FFFF */  lbu   $a1, -1($v0)
/* 0044B2D8 2463FFD0 */  addiu $v1, $v1, -0x30
/* 0044B2DC 54C5FFF4 */  bnel  $a2, $a1, .L0044B2B0
/* 0044B2E0 24AFFFE0 */   addiu $t7, $a1, -0x20
.L0044B2E4:
/* 0044B2E4 03E00008 */  jr    $ra
/* 0044B2E8 00601025 */   move  $v0, $v1

    .type func_0044B2EC, @function
func_0044B2EC:
    # 0044BF18 main1
/* 0044B2EC 3C1C0FBD */  .cpload $t9
/* 0044B2F0 279C4764 */  
/* 0044B2F4 0399E021 */  
/* 0044B2F8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0044B2FC AFB00018 */  sw    $s0, 0x18($sp)
/* 0044B300 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0044B304 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0044B308 AFB30024 */  sw    $s3, 0x24($sp)
/* 0044B30C AFB20020 */  sw    $s2, 0x20($sp)
/* 0044B310 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0044B314 10800014 */  beqz  $a0, .L0044B368
/* 0044B318 00808025 */   move  $s0, $a0
/* 0044B31C 24130011 */  li    $s3, 17
/* 0044B320 24120001 */  li    $s2, 1
/* 0044B324 24110042 */  li    $s1, 66
/* 0044B328 92020020 */  lbu   $v0, 0x20($s0)
.L0044B32C:
/* 0044B32C 16220004 */  bne   $s1, $v0, .L0044B340
/* 0044B330 00000000 */   nop   
/* 0044B334 960E0022 */  lhu   $t6, 0x22($s0)
/* 0044B338 164E0003 */  bne   $s2, $t6, .L0044B348
/* 0044B33C 00000000 */   nop   
.L0044B340:
/* 0044B340 56620007 */  bnel  $s3, $v0, .L0044B360
/* 0044B344 8E100008 */   lw    $s0, 8($s0)
.L0044B348:
/* 0044B348 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0044B34C 0320F809 */  jalr  $t9
/* 0044B350 00000000 */   nop   
/* 0044B354 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044B358 AE020024 */  sw    $v0, 0x24($s0)
/* 0044B35C 8E100008 */  lw    $s0, 8($s0)
.L0044B360:
/* 0044B360 5600FFF2 */  bnel  $s0, $zero, .L0044B32C
/* 0044B364 92020020 */   lbu   $v0, 0x20($s0)
.L0044B368:
/* 0044B368 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0044B36C 8FB00018 */  lw    $s0, 0x18($sp)
/* 0044B370 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0044B374 8FB20020 */  lw    $s2, 0x20($sp)
/* 0044B378 8FB30024 */  lw    $s3, 0x24($sp)
/* 0044B37C 03E00008 */  jr    $ra
/* 0044B380 27BD0030 */   addiu $sp, $sp, 0x30

    .type func_0044B384, @function
func_0044B384:
    # 0044BF18 main1
/* 0044B384 3C1C0FBD */  .cpload $t9
/* 0044B388 279C46CC */  
/* 0044B38C 0399E021 */  
/* 0044B390 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 0044B394 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0044B398 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0044B39C 10000090 */  b     .L0044B5E0
/* 0044B3A0 AFA400B8 */   sw    $a0, 0xb8($sp)
.L0044B3A4:
/* 0044B3A4 8F8189FC */  lw     $at, %got(n_parm_regs)($gp)
/* 0044B3A8 100000A1 */  b     .L0044B630
/* 0044B3AC AC250000 */   sw    $a1, ($at)
.L0044B3B0:
/* 0044B3B0 28A10004 */  slti  $at, $a1, 4
/* 0044B3B4 10200042 */  beqz  $at, .L0044B4C0
/* 0044B3B8 24040004 */   li    $a0, 4
/* 0044B3BC 8F8E8038 */  lw    $t6, %got(RO_1000E660)($gp)
/* 0044B3C0 2405008A */  li    $a1, 138
/* 0044B3C4 03A0C825 */  move  $t9, $sp
/* 0044B3C8 25CEE660 */  addiu $t6, %lo(RO_1000E660) # addiu $t6, $t6, -0x19a0
/* 0044B3CC 25C80048 */  addiu $t0, $t6, 0x48
.L0044B3D0:
/* 0044B3D0 89D80000 */  lwl   $t8, ($t6)
/* 0044B3D4 99D80003 */  lwr   $t8, 3($t6)
/* 0044B3D8 25CE000C */  addiu $t6, $t6, 0xc
/* 0044B3DC 2739000C */  addiu $t9, $t9, 0xc
/* 0044B3E0 AB38FFFC */  swl   $t8, -4($t9)
/* 0044B3E4 BB38FFFF */  swr   $t8, -1($t9)
/* 0044B3E8 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0044B3EC 99CFFFFB */  lwr   $t7, -5($t6)
/* 0044B3F0 AB2F0000 */  swl   $t7, ($t9)
/* 0044B3F4 BB2F0003 */  swr   $t7, 3($t9)
/* 0044B3F8 89D8FFFC */  lwl   $t8, -4($t6)
/* 0044B3FC 99D8FFFF */  lwr   $t8, -1($t6)
/* 0044B400 AB380004 */  swl   $t8, 4($t9)
/* 0044B404 15C8FFF2 */  bne   $t6, $t0, .L0044B3D0
/* 0044B408 BB380007 */   swr   $t8, 7($t9)
/* 0044B40C 89D80000 */  lwl   $t8, ($t6)
/* 0044B410 99D80003 */  lwr   $t8, 3($t6)
/* 0044B414 8F898038 */  lw    $t1, %got(RO_1000E610)($gp)
/* 0044B418 03A06025 */  move  $t4, $sp
/* 0044B41C AB380008 */  swl   $t8, 8($t9)
/* 0044B420 BB38000B */  swr   $t8, 0xb($t9)
/* 0044B424 89CF0004 */  lwl   $t7, 4($t6)
/* 0044B428 99CF0007 */  lwr   $t7, 7($t6)
/* 0044B42C 2529E610 */  addiu $t1, %lo(RO_1000E610) # addiu $t1, $t1, -0x19f0
/* 0044B430 252D0048 */  addiu $t5, $t1, 0x48
/* 0044B434 AB2F000C */  swl   $t7, 0xc($t9)
/* 0044B438 BB2F000F */  swr   $t7, 0xf($t9)
.L0044B43C:
/* 0044B43C 892B0000 */  lwl   $t3, ($t1)
/* 0044B440 992B0003 */  lwr   $t3, 3($t1)
/* 0044B444 2529000C */  addiu $t1, $t1, 0xc
/* 0044B448 258C000C */  addiu $t4, $t4, 0xc
/* 0044B44C A98B004C */  swl   $t3, 0x4c($t4)
/* 0044B450 B98B004F */  swr   $t3, 0x4f($t4)
/* 0044B454 892AFFF8 */  lwl   $t2, -8($t1)
/* 0044B458 992AFFFB */  lwr   $t2, -5($t1)
/* 0044B45C A98A0050 */  swl   $t2, 0x50($t4)
/* 0044B460 B98A0053 */  swr   $t2, 0x53($t4)
/* 0044B464 892BFFFC */  lwl   $t3, -4($t1)
/* 0044B468 992BFFFF */  lwr   $t3, -1($t1)
/* 0044B46C A98B0054 */  swl   $t3, 0x54($t4)
/* 0044B470 152DFFF2 */  bne   $t1, $t5, .L0044B43C
/* 0044B474 B98B0057 */   swr   $t3, 0x57($t4)
/* 0044B478 892B0000 */  lwl   $t3, ($t1)
/* 0044B47C 992B0003 */  lwr   $t3, 3($t1)
/* 0044B480 A98B0058 */  swl   $t3, 0x58($t4)
/* 0044B484 B98B005B */  swr   $t3, 0x5b($t4)
/* 0044B488 892A0004 */  lwl   $t2, 4($t1)
/* 0044B48C 992A0007 */  lwr   $t2, 7($t1)
/* 0044B490 A98A005C */  swl   $t2, 0x5c($t4)
/* 0044B494 B98A005F */  swr   $t2, 0x5f($t4)
/* 0044B498 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044B49C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044B4A0 8FA60008 */  lw    $a2, 8($sp)
/* 0044B4A4 0320F809 */  jalr  $t9
/* 0044B4A8 00000000 */   nop   
/* 0044B4AC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044B4B0 24080004 */  li    $t0, 4
/* 0044B4B4 8F818A14 */  lw     $at, %got(n_cg_regs)($gp)
/* 0044B4B8 1000005D */  b     .L0044B630
/* 0044B4BC AC280000 */   sw    $t0, ($at)
.L0044B4C0:
/* 0044B4C0 8F818A14 */  lw     $at, %got(n_cg_regs)($gp)
/* 0044B4C4 1000005A */  b     .L0044B630
/* 0044B4C8 AC250000 */   sw    $a1, ($at)
.L0044B4CC:
/* 0044B4CC 8F818A0C */  lw     $at, %got(n_unsaved_regs)($gp)
/* 0044B4D0 10000057 */  b     .L0044B630
/* 0044B4D4 AC250000 */   sw    $a1, ($at)
.L0044B4D8:
/* 0044B4D8 8F818A04 */  lw     $at, %got(n_saved_regs)($gp)
/* 0044B4DC 10000054 */  b     .L0044B630
/* 0044B4E0 AC250000 */   sw    $a1, ($at)
.L0044B4E4:
/* 0044B4E4 8F8E8038 */  lw    $t6, %got(RO_1000E5C0)($gp)
/* 0044B4E8 24040004 */  li    $a0, 4
/* 0044B4EC 2405009A */  li    $a1, 154
/* 0044B4F0 25CEE5C0 */  addiu $t6, %lo(RO_1000E5C0) # addiu $t6, $t6, -0x1a40
/* 0044B4F4 25CD0048 */  addiu $t5, $t6, 0x48
/* 0044B4F8 03A0C025 */  move  $t8, $sp
.L0044B4FC:
/* 0044B4FC 89CF0000 */  lwl   $t7, ($t6)
/* 0044B500 99CF0003 */  lwr   $t7, 3($t6)
/* 0044B504 25CE000C */  addiu $t6, $t6, 0xc
/* 0044B508 2718000C */  addiu $t8, $t8, 0xc
/* 0044B50C AB0FFFFC */  swl   $t7, -4($t8)
/* 0044B510 BB0FFFFF */  swr   $t7, -1($t8)
/* 0044B514 89D9FFF8 */  lwl   $t9, -8($t6)
/* 0044B518 99D9FFFB */  lwr   $t9, -5($t6)
/* 0044B51C AB190000 */  swl   $t9, ($t8)
/* 0044B520 BB190003 */  swr   $t9, 3($t8)
/* 0044B524 89CFFFFC */  lwl   $t7, -4($t6)
/* 0044B528 99CFFFFF */  lwr   $t7, -1($t6)
/* 0044B52C AB0F0004 */  swl   $t7, 4($t8)
/* 0044B530 15CDFFF2 */  bne   $t6, $t5, .L0044B4FC
/* 0044B534 BB0F0007 */   swr   $t7, 7($t8)
/* 0044B538 89CF0000 */  lwl   $t7, ($t6)
/* 0044B53C 99CF0003 */  lwr   $t7, 3($t6)
/* 0044B540 8F898038 */  lw    $t1, %got(RO_1000E570)($gp)
/* 0044B544 03A05825 */  move  $t3, $sp
/* 0044B548 AB0F0008 */  swl   $t7, 8($t8)
/* 0044B54C BB0F000B */  swr   $t7, 0xb($t8)
/* 0044B550 89D90004 */  lwl   $t9, 4($t6)
/* 0044B554 99D90007 */  lwr   $t9, 7($t6)
/* 0044B558 2529E570 */  addiu $t1, %lo(RO_1000E570) # addiu $t1, $t1, -0x1a90
/* 0044B55C 25280048 */  addiu $t0, $t1, 0x48
/* 0044B560 AB19000C */  swl   $t9, 0xc($t8)
/* 0044B564 BB19000F */  swr   $t9, 0xf($t8)
.L0044B568:
/* 0044B568 892A0000 */  lwl   $t2, ($t1)
/* 0044B56C 992A0003 */  lwr   $t2, 3($t1)
/* 0044B570 2529000C */  addiu $t1, $t1, 0xc
/* 0044B574 256B000C */  addiu $t3, $t3, 0xc
/* 0044B578 A96A004C */  swl   $t2, 0x4c($t3)
/* 0044B57C B96A004F */  swr   $t2, 0x4f($t3)
/* 0044B580 892CFFF8 */  lwl   $t4, -8($t1)
/* 0044B584 992CFFFB */  lwr   $t4, -5($t1)
/* 0044B588 A96C0050 */  swl   $t4, 0x50($t3)
/* 0044B58C B96C0053 */  swr   $t4, 0x53($t3)
/* 0044B590 892AFFFC */  lwl   $t2, -4($t1)
/* 0044B594 992AFFFF */  lwr   $t2, -1($t1)
/* 0044B598 A96A0054 */  swl   $t2, 0x54($t3)
/* 0044B59C 1528FFF2 */  bne   $t1, $t0, .L0044B568
/* 0044B5A0 B96A0057 */   swr   $t2, 0x57($t3)
/* 0044B5A4 892A0000 */  lwl   $t2, ($t1)
/* 0044B5A8 992A0003 */  lwr   $t2, 3($t1)
/* 0044B5AC A96A0058 */  swl   $t2, 0x58($t3)
/* 0044B5B0 B96A005B */  swr   $t2, 0x5b($t3)
/* 0044B5B4 892C0004 */  lwl   $t4, 4($t1)
/* 0044B5B8 992C0007 */  lwr   $t4, 7($t1)
/* 0044B5BC A96C005C */  swl   $t4, 0x5c($t3)
/* 0044B5C0 B96C005F */  swr   $t4, 0x5f($t3)
/* 0044B5C4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044B5C8 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044B5CC 8FA60008 */  lw    $a2, 8($sp)
/* 0044B5D0 0320F809 */  jalr  $t9
/* 0044B5D4 00000000 */   nop   
/* 0044B5D8 10000015 */  b     .L0044B630
/* 0044B5DC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0044B5E0:
/* 0044B5E0 2C810068 */  sltiu $at, $a0, 0x68
/* 0044B5E4 14200005 */  bnez  $at, .L0044B5FC
/* 0044B5E8 24010072 */   li    $at, 114
/* 0044B5EC 1081FFB7 */  beq   $a0, $at, .L0044B4CC
/* 0044B5F0 00000000 */   nop   
/* 0044B5F4 1000FFBB */  b     .L0044B4E4
/* 0044B5F8 00000000 */   nop   
.L0044B5FC:
/* 0044B5FC 24010020 */  li    $at, 32
/* 0044B600 1081000B */  beq   $a0, $at, .L0044B630
/* 0044B604 248DFF9F */   addiu $t5, $a0, -0x61
/* 0044B608 2DA10007 */  sltiu $at, $t5, 7
/* 0044B60C 1020FFB5 */  beqz  $at, .L0044B4E4
/* 0044B610 00000000 */   nop   
/* 0044B614 8F818038 */  lw    $at, %got(jtbl_1000E6B0)($gp)
/* 0044B618 000D6880 */  sll   $t5, $t5, 2
/* 0044B61C 002D0821 */  addu  $at, $at, $t5
/* 0044B620 8C2DE6B0 */  lw    $t5, %lo(jtbl_1000E6B0)($at)
/* 0044B624 01BC6821 */  addu  $t5, $t5, $gp
/* 0044B628 01A00008 */  jr    $t5
/* 0044B62C 00000000 */   nop   
.L0044B630:
/* 0044B630 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0044B634 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 0044B638 03E00008 */  jr    $ra
/* 0044B63C 00000000 */   nop   

    .type func_0044B640, @function
func_0044B640:
    # 0044BF18 main1
/* 0044B640 3C1C0FBD */  .cpload $t9
/* 0044B644 279C4410 */  
/* 0044B648 0399E021 */  
/* 0044B64C 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 0044B650 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0044B654 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0044B658 100000DF */  b     .L0044B9D8
/* 0044B65C AFA400B8 */   sw    $a0, 0xb8($sp)
.L0044B660:
/* 0044B660 8F818A00 */  lw     $at, %got(n_fp_parm_regs)($gp)
/* 0044B664 100000F0 */  b     .L0044BA28
/* 0044B668 AC250000 */   sw    $a1, ($at)
.L0044B66C:
/* 0044B66C 28A10002 */  slti  $at, $a1, 2
/* 0044B670 10200042 */  beqz  $at, .L0044B77C
/* 0044B674 24040004 */   li    $a0, 4
/* 0044B678 8F8E8038 */  lw    $t6, %got(RO_1000E85C)($gp)
/* 0044B67C 240500A6 */  li    $a1, 166
/* 0044B680 03A0C825 */  move  $t9, $sp
/* 0044B684 25CEE85C */  addiu $t6, %lo(RO_1000E85C) # addiu $t6, $t6, -0x17a4
/* 0044B688 25C80048 */  addiu $t0, $t6, 0x48
.L0044B68C:
/* 0044B68C 89D80000 */  lwl   $t8, ($t6)
/* 0044B690 99D80003 */  lwr   $t8, 3($t6)
/* 0044B694 25CE000C */  addiu $t6, $t6, 0xc
/* 0044B698 2739000C */  addiu $t9, $t9, 0xc
/* 0044B69C AB38FFFC */  swl   $t8, -4($t9)
/* 0044B6A0 BB38FFFF */  swr   $t8, -1($t9)
/* 0044B6A4 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0044B6A8 99CFFFFB */  lwr   $t7, -5($t6)
/* 0044B6AC AB2F0000 */  swl   $t7, ($t9)
/* 0044B6B0 BB2F0003 */  swr   $t7, 3($t9)
/* 0044B6B4 89D8FFFC */  lwl   $t8, -4($t6)
/* 0044B6B8 99D8FFFF */  lwr   $t8, -1($t6)
/* 0044B6BC AB380004 */  swl   $t8, 4($t9)
/* 0044B6C0 15C8FFF2 */  bne   $t6, $t0, .L0044B68C
/* 0044B6C4 BB380007 */   swr   $t8, 7($t9)
/* 0044B6C8 89D80000 */  lwl   $t8, ($t6)
/* 0044B6CC 99D80003 */  lwr   $t8, 3($t6)
/* 0044B6D0 8F898038 */  lw    $t1, %got(RO_1000E80C)($gp)
/* 0044B6D4 03A06025 */  move  $t4, $sp
/* 0044B6D8 AB380008 */  swl   $t8, 8($t9)
/* 0044B6DC BB38000B */  swr   $t8, 0xb($t9)
/* 0044B6E0 89CF0004 */  lwl   $t7, 4($t6)
/* 0044B6E4 99CF0007 */  lwr   $t7, 7($t6)
/* 0044B6E8 2529E80C */  addiu $t1, %lo(RO_1000E80C) # addiu $t1, $t1, -0x17f4
/* 0044B6EC 252D0048 */  addiu $t5, $t1, 0x48
/* 0044B6F0 AB2F000C */  swl   $t7, 0xc($t9)
/* 0044B6F4 BB2F000F */  swr   $t7, 0xf($t9)
.L0044B6F8:
/* 0044B6F8 892B0000 */  lwl   $t3, ($t1)
/* 0044B6FC 992B0003 */  lwr   $t3, 3($t1)
/* 0044B700 2529000C */  addiu $t1, $t1, 0xc
/* 0044B704 258C000C */  addiu $t4, $t4, 0xc
/* 0044B708 A98B004C */  swl   $t3, 0x4c($t4)
/* 0044B70C B98B004F */  swr   $t3, 0x4f($t4)
/* 0044B710 892AFFF8 */  lwl   $t2, -8($t1)
/* 0044B714 992AFFFB */  lwr   $t2, -5($t1)
/* 0044B718 A98A0050 */  swl   $t2, 0x50($t4)
/* 0044B71C B98A0053 */  swr   $t2, 0x53($t4)
/* 0044B720 892BFFFC */  lwl   $t3, -4($t1)
/* 0044B724 992BFFFF */  lwr   $t3, -1($t1)
/* 0044B728 A98B0054 */  swl   $t3, 0x54($t4)
/* 0044B72C 152DFFF2 */  bne   $t1, $t5, .L0044B6F8
/* 0044B730 B98B0057 */   swr   $t3, 0x57($t4)
/* 0044B734 892B0000 */  lwl   $t3, ($t1)
/* 0044B738 992B0003 */  lwr   $t3, 3($t1)
/* 0044B73C A98B0058 */  swl   $t3, 0x58($t4)
/* 0044B740 B98B005B */  swr   $t3, 0x5b($t4)
/* 0044B744 892A0004 */  lwl   $t2, 4($t1)
/* 0044B748 992A0007 */  lwr   $t2, 7($t1)
/* 0044B74C A98A005C */  swl   $t2, 0x5c($t4)
/* 0044B750 B98A005F */  swr   $t2, 0x5f($t4)
/* 0044B754 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044B758 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044B75C 8FA60008 */  lw    $a2, 8($sp)
/* 0044B760 0320F809 */  jalr  $t9
/* 0044B764 00000000 */   nop   
/* 0044B768 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044B76C 24080002 */  li    $t0, 2
/* 0044B770 8F818A18 */  lw     $at, %got(n_fp_cg_regs)($gp)
/* 0044B774 100000AC */  b     .L0044BA28
/* 0044B778 AC280000 */   sw    $t0, ($at)
.L0044B77C:
/* 0044B77C 8F818A18 */  lw     $at, %got(n_fp_cg_regs)($gp)
/* 0044B780 100000A9 */  b     .L0044BA28
/* 0044B784 AC250000 */   sw    $a1, ($at)
.L0044B788:
/* 0044B788 8F818A10 */  lw     $at, %got(n_unsaved_fp_regs)($gp)
/* 0044B78C 100000A6 */  b     .L0044BA28
/* 0044B790 AC250000 */   sw    $a1, ($at)
.L0044B794:
/* 0044B794 8F818A08 */  lw     $at, %got(n_saved_fp_regs)($gp)
/* 0044B798 100000A3 */  b     .L0044BA28
/* 0044B79C AC250000 */   sw    $a1, ($at)
.L0044B7A0:
/* 0044B7A0 8F818A00 */  lw     $at, %got(n_fp_parm_regs)($gp)
/* 0044B7A4 24040004 */  li    $a0, 4
/* 0044B7A8 AC200000 */  sw    $zero, ($at)
/* 0044B7AC 8F818A10 */  lw     $at, %got(n_unsaved_fp_regs)($gp)
/* 0044B7B0 AC200000 */  sw    $zero, ($at)
/* 0044B7B4 8F818A08 */  lw     $at, %got(n_saved_fp_regs)($gp)
/* 0044B7B8 AC200000 */  sw    $zero, ($at)
/* 0044B7BC 28A10002 */  slti  $at, $a1, 2
/* 0044B7C0 10200042 */  beqz  $at, .L0044B8CC
/* 0044B7C4 00000000 */   nop   
/* 0044B7C8 8F8E8038 */  lw    $t6, %got(RO_1000E7BC)($gp)
/* 0044B7CC 240500B6 */  li    $a1, 182
/* 0044B7D0 03A0C025 */  move  $t8, $sp
/* 0044B7D4 25CEE7BC */  addiu $t6, %lo(RO_1000E7BC) # addiu $t6, $t6, -0x1844
/* 0044B7D8 25CD0048 */  addiu $t5, $t6, 0x48
.L0044B7DC:
/* 0044B7DC 89CF0000 */  lwl   $t7, ($t6)
/* 0044B7E0 99CF0003 */  lwr   $t7, 3($t6)
/* 0044B7E4 25CE000C */  addiu $t6, $t6, 0xc
/* 0044B7E8 2718000C */  addiu $t8, $t8, 0xc
/* 0044B7EC AB0FFFFC */  swl   $t7, -4($t8)
/* 0044B7F0 BB0FFFFF */  swr   $t7, -1($t8)
/* 0044B7F4 89D9FFF8 */  lwl   $t9, -8($t6)
/* 0044B7F8 99D9FFFB */  lwr   $t9, -5($t6)
/* 0044B7FC AB190000 */  swl   $t9, ($t8)
/* 0044B800 BB190003 */  swr   $t9, 3($t8)
/* 0044B804 89CFFFFC */  lwl   $t7, -4($t6)
/* 0044B808 99CFFFFF */  lwr   $t7, -1($t6)
/* 0044B80C AB0F0004 */  swl   $t7, 4($t8)
/* 0044B810 15CDFFF2 */  bne   $t6, $t5, .L0044B7DC
/* 0044B814 BB0F0007 */   swr   $t7, 7($t8)
/* 0044B818 89CF0000 */  lwl   $t7, ($t6)
/* 0044B81C 99CF0003 */  lwr   $t7, 3($t6)
/* 0044B820 8F898038 */  lw    $t1, %got(RO_1000E76C)($gp)
/* 0044B824 03A05825 */  move  $t3, $sp
/* 0044B828 AB0F0008 */  swl   $t7, 8($t8)
/* 0044B82C BB0F000B */  swr   $t7, 0xb($t8)
/* 0044B830 89D90004 */  lwl   $t9, 4($t6)
/* 0044B834 99D90007 */  lwr   $t9, 7($t6)
/* 0044B838 2529E76C */  addiu $t1, %lo(RO_1000E76C) # addiu $t1, $t1, -0x1894
/* 0044B83C 25280048 */  addiu $t0, $t1, 0x48
/* 0044B840 AB19000C */  swl   $t9, 0xc($t8)
/* 0044B844 BB19000F */  swr   $t9, 0xf($t8)
.L0044B848:
/* 0044B848 892A0000 */  lwl   $t2, ($t1)
/* 0044B84C 992A0003 */  lwr   $t2, 3($t1)
/* 0044B850 2529000C */  addiu $t1, $t1, 0xc
/* 0044B854 256B000C */  addiu $t3, $t3, 0xc
/* 0044B858 A96A004C */  swl   $t2, 0x4c($t3)
/* 0044B85C B96A004F */  swr   $t2, 0x4f($t3)
/* 0044B860 892CFFF8 */  lwl   $t4, -8($t1)
/* 0044B864 992CFFFB */  lwr   $t4, -5($t1)
/* 0044B868 A96C0050 */  swl   $t4, 0x50($t3)
/* 0044B86C B96C0053 */  swr   $t4, 0x53($t3)
/* 0044B870 892AFFFC */  lwl   $t2, -4($t1)
/* 0044B874 992AFFFF */  lwr   $t2, -1($t1)
/* 0044B878 A96A0054 */  swl   $t2, 0x54($t3)
/* 0044B87C 1528FFF2 */  bne   $t1, $t0, .L0044B848
/* 0044B880 B96A0057 */   swr   $t2, 0x57($t3)
/* 0044B884 892A0000 */  lwl   $t2, ($t1)
/* 0044B888 992A0003 */  lwr   $t2, 3($t1)
/* 0044B88C A96A0058 */  swl   $t2, 0x58($t3)
/* 0044B890 B96A005B */  swr   $t2, 0x5b($t3)
/* 0044B894 892C0004 */  lwl   $t4, 4($t1)
/* 0044B898 992C0007 */  lwr   $t4, 7($t1)
/* 0044B89C A96C005C */  swl   $t4, 0x5c($t3)
/* 0044B8A0 B96C005F */  swr   $t4, 0x5f($t3)
/* 0044B8A4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044B8A8 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044B8AC 8FA60008 */  lw    $a2, 8($sp)
/* 0044B8B0 0320F809 */  jalr  $t9
/* 0044B8B4 00000000 */   nop   
/* 0044B8B8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044B8BC 240D0002 */  li    $t5, 2
/* 0044B8C0 8F818A18 */  lw     $at, %got(n_fp_cg_regs)($gp)
/* 0044B8C4 10000058 */  b     .L0044BA28
/* 0044B8C8 AC2D0000 */   sw    $t5, ($at)
.L0044B8CC:
/* 0044B8CC 8F818A18 */  lw     $at, %got(n_fp_cg_regs)($gp)
/* 0044B8D0 24AEFFFF */  addiu $t6, $a1, -1
/* 0044B8D4 10000054 */  b     .L0044BA28
/* 0044B8D8 AC2E0000 */   sw    $t6, ($at)
.L0044B8DC:
/* 0044B8DC 8F988038 */  lw    $t8, %got(RO_1000E71C)($gp)
/* 0044B8E0 24040004 */  li    $a0, 4
/* 0044B8E4 240500C1 */  li    $a1, 193
/* 0044B8E8 2718E71C */  addiu $t8, %lo(RO_1000E71C) # addiu $t8, $t8, -0x18e4
/* 0044B8EC 27090048 */  addiu $t1, $t8, 0x48
/* 0044B8F0 03A04025 */  move  $t0, $sp
.L0044B8F4:
/* 0044B8F4 8B0F0000 */  lwl   $t7, ($t8)
/* 0044B8F8 9B0F0003 */  lwr   $t7, 3($t8)
/* 0044B8FC 2718000C */  addiu $t8, $t8, 0xc
/* 0044B900 2508000C */  addiu $t0, $t0, 0xc
/* 0044B904 A90FFFFC */  swl   $t7, -4($t0)
/* 0044B908 B90FFFFF */  swr   $t7, -1($t0)
/* 0044B90C 8B19FFF8 */  lwl   $t9, -8($t8)
/* 0044B910 9B19FFFB */  lwr   $t9, -5($t8)
/* 0044B914 A9190000 */  swl   $t9, ($t0)
/* 0044B918 B9190003 */  swr   $t9, 3($t0)
/* 0044B91C 8B0FFFFC */  lwl   $t7, -4($t8)
/* 0044B920 9B0FFFFF */  lwr   $t7, -1($t8)
/* 0044B924 A90F0004 */  swl   $t7, 4($t0)
/* 0044B928 1709FFF2 */  bne   $t8, $t1, .L0044B8F4
/* 0044B92C B90F0007 */   swr   $t7, 7($t0)
/* 0044B930 8B0F0000 */  lwl   $t7, ($t8)
/* 0044B934 9B0F0003 */  lwr   $t7, 3($t8)
/* 0044B938 8F8B8038 */  lw    $t3, %got(RO_1000E6CC)($gp)
/* 0044B93C 03A06825 */  move  $t5, $sp
/* 0044B940 A90F0008 */  swl   $t7, 8($t0)
/* 0044B944 B90F000B */  swr   $t7, 0xb($t0)
/* 0044B948 8B190004 */  lwl   $t9, 4($t8)
/* 0044B94C 9B190007 */  lwr   $t9, 7($t8)
/* 0044B950 256BE6CC */  addiu $t3, %lo(RO_1000E6CC) # addiu $t3, $t3, -0x1934
/* 0044B954 256E0048 */  addiu $t6, $t3, 0x48
/* 0044B958 A919000C */  swl   $t9, 0xc($t0)
/* 0044B95C B919000F */  swr   $t9, 0xf($t0)
.L0044B960:
/* 0044B960 896A0000 */  lwl   $t2, ($t3)
/* 0044B964 996A0003 */  lwr   $t2, 3($t3)
/* 0044B968 256B000C */  addiu $t3, $t3, 0xc
/* 0044B96C 25AD000C */  addiu $t5, $t5, 0xc
/* 0044B970 A9AA004C */  swl   $t2, 0x4c($t5)
/* 0044B974 B9AA004F */  swr   $t2, 0x4f($t5)
/* 0044B978 896CFFF8 */  lwl   $t4, -8($t3)
/* 0044B97C 996CFFFB */  lwr   $t4, -5($t3)
/* 0044B980 A9AC0050 */  swl   $t4, 0x50($t5)
/* 0044B984 B9AC0053 */  swr   $t4, 0x53($t5)
/* 0044B988 896AFFFC */  lwl   $t2, -4($t3)
/* 0044B98C 996AFFFF */  lwr   $t2, -1($t3)
/* 0044B990 A9AA0054 */  swl   $t2, 0x54($t5)
/* 0044B994 156EFFF2 */  bne   $t3, $t6, .L0044B960
/* 0044B998 B9AA0057 */   swr   $t2, 0x57($t5)
/* 0044B99C 896A0000 */  lwl   $t2, ($t3)
/* 0044B9A0 996A0003 */  lwr   $t2, 3($t3)
/* 0044B9A4 A9AA0058 */  swl   $t2, 0x58($t5)
/* 0044B9A8 B9AA005B */  swr   $t2, 0x5b($t5)
/* 0044B9AC 896C0004 */  lwl   $t4, 4($t3)
/* 0044B9B0 996C0007 */  lwr   $t4, 7($t3)
/* 0044B9B4 A9AC005C */  swl   $t4, 0x5c($t5)
/* 0044B9B8 B9AC005F */  swr   $t4, 0x5f($t5)
/* 0044B9BC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044B9C0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044B9C4 8FA60008 */  lw    $a2, 8($sp)
/* 0044B9C8 0320F809 */  jalr  $t9
/* 0044B9CC 00000000 */   nop   
/* 0044B9D0 10000015 */  b     .L0044BA28
/* 0044B9D4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0044B9D8:
/* 0044B9D8 2C810068 */  sltiu $at, $a0, 0x68
/* 0044B9DC 14200005 */  bnez  $at, .L0044B9F4
/* 0044B9E0 24010072 */   li    $at, 114
/* 0044B9E4 1081FF68 */  beq   $a0, $at, .L0044B788
/* 0044B9E8 00000000 */   nop   
/* 0044B9EC 1000FFBB */  b     .L0044B8DC
/* 0044B9F0 00000000 */   nop   
.L0044B9F4:
/* 0044B9F4 24010020 */  li    $at, 32
/* 0044B9F8 1081FF69 */  beq   $a0, $at, .L0044B7A0
/* 0044B9FC 2489FF9F */   addiu $t1, $a0, -0x61
/* 0044BA00 2D210007 */  sltiu $at, $t1, 7
/* 0044BA04 1020FFB5 */  beqz  $at, .L0044B8DC
/* 0044BA08 00000000 */   nop   
/* 0044BA0C 8F818038 */  lw    $at, %got(jtbl_1000E8AC)($gp)
/* 0044BA10 00094880 */  sll   $t1, $t1, 2
/* 0044BA14 00290821 */  addu  $at, $at, $t1
/* 0044BA18 8C29E8AC */  lw    $t1, %lo(jtbl_1000E8AC)($at)
/* 0044BA1C 013C4821 */  addu  $t1, $t1, $gp
/* 0044BA20 01200008 */  jr    $t1
/* 0044BA24 00000000 */   nop   
.L0044BA28:
/* 0044BA28 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0044BA2C 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 0044BA30 03E00008 */  jr    $ra
/* 0044BA34 00000000 */   nop   

    .type func_0044BA38, @function
func_0044BA38:
    # 0044BF18 main1
/* 0044BA38 3C1C0FBD */  .cpload $t9
/* 0044BA3C 279C4018 */  
/* 0044BA40 0399E021 */  
/* 0044BA44 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044BA48 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044BA4C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044BA50 AFB00014 */  sw    $s0, 0x14($sp)
/* 0044BA54 AFA40020 */  sw    $a0, 0x20($sp)
/* 0044BA58 AFA50024 */  sw    $a1, 0x24($sp)
/* 0044BA5C AFA60028 */  sw    $a2, 0x28($sp)
/* 0044BA60 AFA7002C */  sw    $a3, 0x2c($sp)
/* 0044BA64 904EFC00 */  lbu   $t6, -0x400($v0)
/* 0044BA68 00408025 */  move  $s0, $v0
/* 0044BA6C 24070010 */  li    $a3, 16
/* 0044BA70 11C0002D */  beqz  $t6, .L0044BB28
/* 0044BA74 24060010 */   li    $a2, 16
/* 0044BA78 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044BA7C 8F858038 */  lw    $a1, %got(RO_1000E8D8)($gp)
/* 0044BA80 8C44FBF8 */  lw    $a0, -0x408($v0)
/* 0044BA84 24060010 */  li    $a2, 16
/* 0044BA88 0320F809 */  jalr  $t9
/* 0044BA8C 24A5E8D8 */   addiu $a1, %lo(RO_1000E8D8) # addiu $a1, $a1, -0x1728
/* 0044BA90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BA94 8E04FBF8 */  lw    $a0, -0x408($s0)
/* 0044BA98 27A50024 */  addiu $a1, $sp, 0x24
/* 0044BA9C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044BAA0 2406000C */  li    $a2, 12
/* 0044BAA4 00003825 */  move  $a3, $zero
/* 0044BAA8 0320F809 */  jalr  $t9
/* 0044BAAC 00000000 */   nop   
/* 0044BAB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BAB4 8E04FBF8 */  lw    $a0, -0x408($s0)
/* 0044BAB8 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044BABC 0320F809 */  jalr  $t9
/* 0044BAC0 00000000 */   nop   
/* 0044BAC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BAC8 8E04FBF8 */  lw    $a0, -0x408($s0)
/* 0044BACC 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044BAD0 0320F809 */  jalr  $t9
/* 0044BAD4 00000000 */   nop   
/* 0044BAD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BADC 3C067FFF */  lui   $a2, 0x7fff
/* 0044BAE0 34C6FFFF */  ori   $a2, $a2, 0xffff
/* 0044BAE4 8F998648 */  lw    $t9, %call16(print_tree)($gp)
/* 0044BAE8 00C03825 */  move  $a3, $a2
/* 0044BAEC 2604FBF8 */  addiu $a0, $s0, -0x408
/* 0044BAF0 0320F809 */  jalr  $t9
/* 0044BAF4 8FA50020 */   lw    $a1, 0x20($sp)
/* 0044BAF8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BAFC 8E04FBF8 */  lw    $a0, -0x408($s0)
/* 0044BB00 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044BB04 0320F809 */  jalr  $t9
/* 0044BB08 00000000 */   nop   
/* 0044BB0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BB10 8E04FBF8 */  lw    $a0, -0x408($s0)
/* 0044BB14 8F998084 */  lw    $t9, %call16(fflush)($gp)
/* 0044BB18 0320F809 */  jalr  $t9
/* 0044BB1C 00000000 */   nop   
/* 0044BB20 10000028 */  b     .L0044BBC4
/* 0044BB24 8FBC0018 */   lw    $gp, 0x18($sp)
.L0044BB28:
/* 0044BB28 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044BB2C 8F908950 */  lw     $s0, %got(err)($gp)
/* 0044BB30 8F858038 */  lw    $a1, %got(RO_1000E8C8)($gp)
/* 0044BB34 24070010 */  li    $a3, 16
/* 0044BB38 8E040000 */  lw    $a0, ($s0)
/* 0044BB3C 0320F809 */  jalr  $t9
/* 0044BB40 24A5E8C8 */   addiu $a1, %lo(RO_1000E8C8) # addiu $a1, $a1, -0x1738
/* 0044BB44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BB48 8E040000 */  lw    $a0, ($s0)
/* 0044BB4C 27A50024 */  addiu $a1, $sp, 0x24
/* 0044BB50 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044BB54 2406000C */  li    $a2, 12
/* 0044BB58 00003825 */  move  $a3, $zero
/* 0044BB5C 0320F809 */  jalr  $t9
/* 0044BB60 00000000 */   nop   
/* 0044BB64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BB68 8E040000 */  lw    $a0, ($s0)
/* 0044BB6C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044BB70 0320F809 */  jalr  $t9
/* 0044BB74 00000000 */   nop   
/* 0044BB78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BB7C 8E040000 */  lw    $a0, ($s0)
/* 0044BB80 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044BB84 0320F809 */  jalr  $t9
/* 0044BB88 00000000 */   nop   
/* 0044BB8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BB90 3C067FFF */  lui   $a2, 0x7fff
/* 0044BB94 34C6FFFF */  ori   $a2, $a2, 0xffff
/* 0044BB98 8F998648 */  lw    $t9, %call16(print_tree)($gp)
/* 0044BB9C 00C03825 */  move  $a3, $a2
/* 0044BBA0 02002025 */  move  $a0, $s0
/* 0044BBA4 0320F809 */  jalr  $t9
/* 0044BBA8 8FA50020 */   lw    $a1, 0x20($sp)
/* 0044BBAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BBB0 8E040000 */  lw    $a0, ($s0)
/* 0044BBB4 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044BBB8 0320F809 */  jalr  $t9
/* 0044BBBC 00000000 */   nop   
/* 0044BBC0 8FBC0018 */  lw    $gp, 0x18($sp)
.L0044BBC4:
/* 0044BBC4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044BBC8 8FB00014 */  lw    $s0, 0x14($sp)
/* 0044BBCC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044BBD0 03E00008 */  jr    $ra
/* 0044BBD4 00000000 */   nop   

    .type func_0044BBD8, @function
func_0044BBD8:
    # 0044BC78 func_0044BC78
/* 0044BBD8 AFA50004 */  sw    $a1, 4($sp)
/* 0044BBDC 93AE0004 */  lbu   $t6, 4($sp)
/* 0044BBE0 24080020 */  li    $t0, 32
/* 0044BBE4 AFA60008 */  sw    $a2, 8($sp)
/* 0044BBE8 AFA7000C */  sw    $a3, 0xc($sp)
/* 0044BBEC 110E000A */  beq   $t0, $t6, .L0044BC18
/* 0044BBF0 24020001 */   li    $v0, 1
/* 0044BBF4 27A50004 */  addiu $a1, $sp, 4
/* 0044BBF8 90A60000 */  lbu   $a2, ($a1)
/* 0044BBFC 24830001 */  addiu $v1, $a0, 1
.L0044BC00:
/* 0044BC00 A066FFFF */  sb    $a2, -1($v1)
/* 0044BC04 90A60001 */  lbu   $a2, 1($a1)
/* 0044BC08 24420001 */  addiu $v0, $v0, 1
/* 0044BC0C 24630001 */  addiu $v1, $v1, 1
/* 0044BC10 1506FFFB */  bne   $t0, $a2, .L0044BC00
/* 0044BC14 24A50001 */   addiu $a1, $a1, 1
.L0044BC18:
/* 0044BC18 28410401 */  slti  $at, $v0, 0x401
/* 0044BC1C 10200014 */  beqz  $at, .L0044BC70
/* 0044BC20 00402825 */   move  $a1, $v0
/* 0044BC24 24090401 */  li    $t1, 1025
/* 0044BC28 01253823 */  subu  $a3, $t1, $a1
/* 0044BC2C 30E70003 */  andi  $a3, $a3, 3
/* 0044BC30 10E00007 */  beqz  $a3, .L0044BC50
/* 0044BC34 00E53021 */   addu  $a2, $a3, $a1
/* 0044BC38 00821821 */  addu  $v1, $a0, $v0
.L0044BC3C:
/* 0044BC3C 24420001 */  addiu $v0, $v0, 1
/* 0044BC40 A068FFFF */  sb    $t0, -1($v1)
/* 0044BC44 14C2FFFD */  bne   $a2, $v0, .L0044BC3C
/* 0044BC48 24630001 */   addiu $v1, $v1, 1
/* 0044BC4C 10490008 */  beq   $v0, $t1, .L0044BC70
.L0044BC50:
/* 0044BC50 00821821 */   addu  $v1, $a0, $v0
.L0044BC54:
/* 0044BC54 24420004 */  addiu $v0, $v0, 4
/* 0044BC58 A068FFFF */  sb    $t0, -1($v1)
/* 0044BC5C A0680000 */  sb    $t0, ($v1)
/* 0044BC60 A0680001 */  sb    $t0, 1($v1)
/* 0044BC64 A0680002 */  sb    $t0, 2($v1)
/* 0044BC68 1449FFFA */  bne   $v0, $t1, .L0044BC54
/* 0044BC6C 24630004 */   addiu $v1, $v1, 4
.L0044BC70:
/* 0044BC70 03E00008 */  jr    $ra
/* 0044BC74 00000000 */   nop   

    .type func_0044BC78, @function
func_0044BC78:
    # 0044BF18 main1
/* 0044BC78 3C1C0FBD */  .cpload $t9
/* 0044BC7C 279C3DD8 */  
/* 0044BC80 0399E021 */  
/* 0044BC84 8F8E8038 */  lw    $t6, %got(RO_1000E988)($gp)
/* 0044BC88 27BDFF38 */  addiu $sp, $sp, -0xc8
/* 0044BC8C AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0044BC90 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0044BC94 25CEE988 */  addiu $t6, %lo(RO_1000E988) # addiu $t6, $t6, -0x1678
/* 0044BC98 89D80000 */  lwl   $t8, ($t6)
/* 0044BC9C 99D80003 */  lwr   $t8, 3($t6)
/* 0044BCA0 8F998028 */  lw    $t9, %got(func_0044BBD8)($gp)
/* 0044BCA4 2444F7F8 */  addiu $a0, $v0, -0x808
/* 0044BCA8 ABB80004 */  swl   $t8, 4($sp)
/* 0044BCAC BBB80007 */  swr   $t8, 7($sp)
/* 0044BCB0 89CF0004 */  lwl   $t7, 4($t6)
/* 0044BCB4 99CF0007 */  lwr   $t7, 7($t6)
/* 0044BCB8 2739BBD8 */  addiu $t9, %lo(func_0044BBD8) # addiu $t9, $t9, -0x4428
/* 0044BCBC 8FA50004 */  lw    $a1, 4($sp)
/* 0044BCC0 ABAF0008 */  swl   $t7, 8($sp)
/* 0044BCC4 BBAF000B */  swr   $t7, 0xb($sp)
/* 0044BCC8 89D80008 */  lwl   $t8, 8($t6)
/* 0044BCCC 99D8000B */  lwr   $t8, 0xb($t6)
/* 0044BCD0 8FA60008 */  lw    $a2, 8($sp)
/* 0044BCD4 ABB8000C */  swl   $t8, 0xc($sp)
/* 0044BCD8 BBB8000F */  swr   $t8, 0xf($sp)
/* 0044BCDC 89CF000C */  lwl   $t7, 0xc($t6)
/* 0044BCE0 99CF000F */  lwr   $t7, 0xf($t6)
/* 0044BCE4 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044BCE8 ABAF0010 */  swl   $t7, 0x10($sp)
/* 0044BCEC BBAF0013 */  swr   $t7, 0x13($sp)
/* 0044BCF0 89D80010 */  lwl   $t8, 0x10($t6)
/* 0044BCF4 99D80013 */  lwr   $t8, 0x13($t6)
/* 0044BCF8 ABB80014 */  swl   $t8, 0x14($sp)
/* 0044BCFC BBB80017 */  swr   $t8, 0x17($sp)
/* 0044BD00 89CF0014 */  lwl   $t7, 0x14($t6)
/* 0044BD04 99CF0017 */  lwr   $t7, 0x17($t6)
/* 0044BD08 ABAF0018 */  swl   $t7, 0x18($sp)
/* 0044BD0C BBAF001B */  swr   $t7, 0x1b($sp)
/* 0044BD10 89D80018 */  lwl   $t8, 0x18($t6)
/* 0044BD14 99D8001B */  lwr   $t8, 0x1b($t6)
/* 0044BD18 ABB8001C */  swl   $t8, 0x1c($sp)
/* 0044BD1C BBB8001F */  swr   $t8, 0x1f($sp)
/* 0044BD20 89CF001C */  lwl   $t7, 0x1c($t6)
/* 0044BD24 99CF001F */  lwr   $t7, 0x1f($t6)
/* 0044BD28 AFA400BC */  sw    $a0, 0xbc($sp)
/* 0044BD2C AFA200C4 */  sw    $v0, 0xc4($sp)
/* 0044BD30 ABAF0020 */  swl   $t7, 0x20($sp)
/* 0044BD34 0320F809 */  jalr  $t9
/* 0044BD38 BBAF0023 */   swr   $t7, 0x23($sp)
/* 0044BD3C 8FA300C4 */  lw    $v1, 0xc4($sp)
/* 0044BD40 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044BD44 8FA400BC */  lw    $a0, 0xbc($sp)
/* 0044BD48 A060F80A */  sb    $zero, -0x7f6($v1)
/* 0044BD4C 8F9980C8 */  lw    $t9, %call16(mktemp)($gp)
/* 0044BD50 0320F809 */  jalr  $t9
/* 0044BD54 00000000 */   nop   
/* 0044BD58 8FA300C4 */  lw    $v1, 0xc4($sp)
/* 0044BD5C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044BD60 1440003F */  bnez  $v0, .L0044BE60
/* 0044BD64 AC62F7F4 */   sw    $v0, -0x80c($v1)
/* 0044BD68 8F998038 */  lw    $t9, %got(RO_1000E938)($gp)
/* 0044BD6C 24040004 */  li    $a0, 4
/* 0044BD70 240500FE */  li    $a1, 254
/* 0044BD74 2739E938 */  addiu $t9, %lo(RO_1000E938) # addiu $t9, $t9, -0x16c8
/* 0044BD78 272B0048 */  addiu $t3, $t9, 0x48
/* 0044BD7C 03A05025 */  move  $t2, $sp
.L0044BD80:
/* 0044BD80 8B290000 */  lwl   $t1, ($t9)
/* 0044BD84 9B290003 */  lwr   $t1, 3($t9)
/* 0044BD88 2739000C */  addiu $t9, $t9, 0xc
/* 0044BD8C 254A000C */  addiu $t2, $t2, 0xc
/* 0044BD90 A949FFFC */  swl   $t1, -4($t2)
/* 0044BD94 B949FFFF */  swr   $t1, -1($t2)
/* 0044BD98 8B28FFF8 */  lwl   $t0, -8($t9)
/* 0044BD9C 9B28FFFB */  lwr   $t0, -5($t9)
/* 0044BDA0 A9480000 */  swl   $t0, ($t2)
/* 0044BDA4 B9480003 */  swr   $t0, 3($t2)
/* 0044BDA8 8B29FFFC */  lwl   $t1, -4($t9)
/* 0044BDAC 9B29FFFF */  lwr   $t1, -1($t9)
/* 0044BDB0 A9490004 */  swl   $t1, 4($t2)
/* 0044BDB4 172BFFF2 */  bne   $t9, $t3, .L0044BD80
/* 0044BDB8 B9490007 */   swr   $t1, 7($t2)
/* 0044BDBC 8B290000 */  lwl   $t1, ($t9)
/* 0044BDC0 9B290003 */  lwr   $t1, 3($t9)
/* 0044BDC4 8F8C8038 */  lw    $t4, %got(RO_1000E8E8)($gp)
/* 0044BDC8 03A07825 */  move  $t7, $sp
/* 0044BDCC A9490008 */  swl   $t1, 8($t2)
/* 0044BDD0 B949000B */  swr   $t1, 0xb($t2)
/* 0044BDD4 8B280004 */  lwl   $t0, 4($t9)
/* 0044BDD8 9B280007 */  lwr   $t0, 7($t9)
/* 0044BDDC 258CE8E8 */  addiu $t4, %lo(RO_1000E8E8) # addiu $t4, $t4, -0x1718
/* 0044BDE0 25980048 */  addiu $t8, $t4, 0x48
/* 0044BDE4 A948000C */  swl   $t0, 0xc($t2)
/* 0044BDE8 B948000F */  swr   $t0, 0xf($t2)
.L0044BDEC:
/* 0044BDEC 898E0000 */  lwl   $t6, ($t4)
/* 0044BDF0 998E0003 */  lwr   $t6, 3($t4)
/* 0044BDF4 258C000C */  addiu $t4, $t4, 0xc
/* 0044BDF8 25EF000C */  addiu $t7, $t7, 0xc
/* 0044BDFC A9EE004C */  swl   $t6, 0x4c($t7)
/* 0044BE00 B9EE004F */  swr   $t6, 0x4f($t7)
/* 0044BE04 898DFFF8 */  lwl   $t5, -8($t4)
/* 0044BE08 998DFFFB */  lwr   $t5, -5($t4)
/* 0044BE0C A9ED0050 */  swl   $t5, 0x50($t7)
/* 0044BE10 B9ED0053 */  swr   $t5, 0x53($t7)
/* 0044BE14 898EFFFC */  lwl   $t6, -4($t4)
/* 0044BE18 998EFFFF */  lwr   $t6, -1($t4)
/* 0044BE1C A9EE0054 */  swl   $t6, 0x54($t7)
/* 0044BE20 1598FFF2 */  bne   $t4, $t8, .L0044BDEC
/* 0044BE24 B9EE0057 */   swr   $t6, 0x57($t7)
/* 0044BE28 898E0000 */  lwl   $t6, ($t4)
/* 0044BE2C 998E0003 */  lwr   $t6, 3($t4)
/* 0044BE30 A9EE0058 */  swl   $t6, 0x58($t7)
/* 0044BE34 B9EE005B */  swr   $t6, 0x5b($t7)
/* 0044BE38 898D0004 */  lwl   $t5, 4($t4)
/* 0044BE3C 998D0007 */  lwr   $t5, 7($t4)
/* 0044BE40 A9ED005C */  swl   $t5, 0x5c($t7)
/* 0044BE44 B9ED005F */  swr   $t5, 0x5f($t7)
/* 0044BE48 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044BE4C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044BE50 8FA60008 */  lw    $a2, 8($sp)
/* 0044BE54 0320F809 */  jalr  $t9
/* 0044BE58 00000000 */   nop   
/* 0044BE5C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L0044BE60:
/* 0044BE60 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0044BE64 27BD00C8 */  addiu $sp, $sp, 0xc8
/* 0044BE68 03E00008 */  jr    $ra
/* 0044BE6C 00000000 */   nop   

    .type func_0044BE70, @function
func_0044BE70:
    # 0044BF18 main1
/* 0044BE70 3C1C0FBD */  .cpload $t9
/* 0044BE74 279C3BE0 */  
/* 0044BE78 0399E021 */  
/* 0044BE7C 8F9980CC */  lw    $t9, %call16(unlink)($gp)
/* 0044BE80 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044BE84 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044BE88 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044BE8C 0320F809 */  jalr  $t9
/* 0044BE90 2444F7F8 */   addiu $a0, $v0, -0x808
/* 0044BE94 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044BE98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044BE9C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044BEA0 03E00008 */  jr    $ra
/* 0044BEA4 00000000 */   nop   

    .type func_0044BEA8, @function
func_0044BEA8:
    # 0044BF18 main1
/* 0044BEA8 AFA50004 */  sw    $a1, 4($sp)
/* 0044BEAC 93AE0004 */  lbu   $t6, 4($sp)
/* 0044BEB0 AFA7000C */  sw    $a3, 0xc($sp)
/* 0044BEB4 24070020 */  li    $a3, 32
/* 0044BEB8 00802825 */  move  $a1, $a0
/* 0044BEBC AFA40000 */  sw    $a0, ($sp)
/* 0044BEC0 AFA60008 */  sw    $a2, 8($sp)
/* 0044BEC4 10EE000E */  beq   $a3, $t6, .L0044BF00
/* 0044BEC8 24030001 */   li    $v1, 1
/* 0044BECC 27A20004 */  addiu $v0, $sp, 4
/* 0044BED0 90440000 */  lbu   $a0, ($v0)
/* 0044BED4 24A60001 */  addiu $a2, $a1, 1
.L0044BED8:
/* 0044BED8 90D8FFFF */  lbu   $t8, -1($a2)
/* 0044BEDC 50980004 */  beql  $a0, $t8, .L0044BEF0
/* 0044BEE0 90440001 */   lbu   $a0, 1($v0)
/* 0044BEE4 03E00008 */  jr    $ra
/* 0044BEE8 00001025 */   move  $v0, $zero

/* 0044BEEC 90440001 */  lbu   $a0, 1($v0)
.L0044BEF0:
/* 0044BEF0 24630001 */  addiu $v1, $v1, 1
/* 0044BEF4 24420001 */  addiu $v0, $v0, 1
/* 0044BEF8 14E4FFF7 */  bne   $a3, $a0, .L0044BED8
/* 0044BEFC 24C60001 */   addiu $a2, $a2, 1
.L0044BF00:
/* 0044BF00 00A3C821 */  addu  $t9, $a1, $v1
/* 0044BF04 9328FFFF */  lbu   $t0, -1($t9)
/* 0044BF08 00E81026 */  xor   $v0, $a3, $t0
/* 0044BF0C 2C420001 */  sltiu $v0, $v0, 1
/* 0044BF10 03E00008 */  jr    $ra
/* 0044BF14 00000000 */   nop   

glabel main1
    .ent main1
/* 0044BF18 3C1C0FBD */  .cpload $t9
/* 0044BF1C 279C3B38 */  
/* 0044BF20 0399E021 */  
/* 0044BF24 27BDDE30 */  addiu $sp, $sp, -0x21d0
/* 0044BF28 8F8E8038 */  lw    $t6, %got(RO_1000F07B)($gp)
/* 0044BF2C 27A40108 */  addiu $a0, $sp, 0x108
/* 0044BF30 AFBF00D4 */  sw    $ra, 0xd4($sp)
/* 0044BF34 25CEF07B */  addiu $t6, %lo(RO_1000F07B) # addiu $t6, $t6, -0xf85
/* 0044BF38 AFBE00D0 */  sw    $fp, 0xd0($sp)
/* 0044BF3C AFBC00CC */  sw    $gp, 0xcc($sp)
/* 0044BF40 AFB700C8 */  sw    $s7, 0xc8($sp)
/* 0044BF44 AFB600C4 */  sw    $s6, 0xc4($sp)
/* 0044BF48 AFB500C0 */  sw    $s5, 0xc0($sp)
/* 0044BF4C AFB400BC */  sw    $s4, 0xbc($sp)
/* 0044BF50 AFB300B8 */  sw    $s3, 0xb8($sp)
/* 0044BF54 AFB200B4 */  sw    $s2, 0xb4($sp)
/* 0044BF58 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 0044BF5C AFB000AC */  sw    $s0, 0xac($sp)
/* 0044BF60 AFA00534 */  sw    $zero, 0x534($sp)
/* 0044BF64 AFA00538 */  sw    $zero, 0x538($sp)
/* 0044BF68 AFA01DC8 */  sw    $zero, 0x1dc8($sp)
/* 0044BF6C AFA01DCC */  sw    $zero, 0x1dcc($sp)
/* 0044BF70 A3A0050F */  sb    $zero, 0x50f($sp)
/* 0044BF74 25C803FC */  addiu $t0, $t6, 0x3fc
/* 0044BF78 0080C825 */  move  $t9, $a0
.L0044BF7C:
/* 0044BF7C 89D80000 */  lwl   $t8, ($t6)
/* 0044BF80 99D80003 */  lwr   $t8, 3($t6)
/* 0044BF84 25CE000C */  addiu $t6, $t6, 0xc
/* 0044BF88 2739000C */  addiu $t9, $t9, 0xc
/* 0044BF8C AB38FFF4 */  swl   $t8, -0xc($t9)
/* 0044BF90 BB38FFF7 */  swr   $t8, -9($t9)
/* 0044BF94 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0044BF98 99CFFFFB */  lwr   $t7, -5($t6)
/* 0044BF9C AB2FFFF8 */  swl   $t7, -8($t9)
/* 0044BFA0 BB2FFFFB */  swr   $t7, -5($t9)
/* 0044BFA4 89D8FFFC */  lwl   $t8, -4($t6)
/* 0044BFA8 99D8FFFF */  lwr   $t8, -1($t6)
/* 0044BFAC AB38FFFC */  swl   $t8, -4($t9)
/* 0044BFB0 15C8FFF2 */  bne   $t6, $t0, .L0044BF7C
/* 0044BFB4 BB38FFFF */   swr   $t8, -1($t9)
/* 0044BFB8 89D80000 */  lwl   $t8, ($t6)
/* 0044BFBC 99D80003 */  lwr   $t8, 3($t6)
/* 0044BFC0 AB380000 */  swl   $t8, ($t9)
/* 0044BFC4 BB380003 */  swr   $t8, 3($t9)
/* 0044BFC8 8F9980D0 */  lw    $t9, %call16(getenv)($gp)
/* 0044BFCC A3A0010C */  sb    $zero, 0x10c($sp)
/* 0044BFD0 0320F809 */  jalr  $t9
/* 0044BFD4 00000000 */   nop   
/* 0044BFD8 10400003 */  beqz  $v0, .L0044BFE8
/* 0044BFDC 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044BFE0 24090001 */  li    $t1, 1
/* 0044BFE4 A3A9050F */  sb    $t1, 0x50f($sp)
.L0044BFE8:
/* 0044BFE8 8F8A8960 */  lw     $t2, %got(__Argc)($gp)
/* 0044BFEC 24060075 */  li    $a2, 117
/* 0044BFF0 240B0008 */  li    $t3, 8
/* 0044BFF4 8D4A0000 */  lw    $t2, ($t2)
/* 0044BFF8 00002025 */  move  $a0, $zero
/* 0044BFFC 29410002 */  slti  $at, $t2, 2
/* 0044C000 10200010 */  beqz  $at, .L0044C044
/* 0044C004 00000000 */   nop   
/* 0044C008 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C00C 8F968950 */  lw     $s6, %got(err)($gp)
/* 0044C010 8F858038 */  lw    $a1, %got(RO_1000F006)($gp)
/* 0044C014 24070075 */  li    $a3, 117
/* 0044C018 8EC40000 */  lw    $a0, ($s6)
/* 0044C01C 0320F809 */  jalr  $t9
/* 0044C020 24A5F006 */   addiu $a1, %lo(RO_1000F006) # addiu $a1, $a1, -0xffa
/* 0044C024 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C028 8EC40000 */  lw    $a0, ($s6)
/* 0044C02C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C030 0320F809 */  jalr  $t9
/* 0044C034 00000000 */   nop   
/* 0044C038 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C03C 10000A56 */  b     .L0044E998
/* 0044C040 00001025 */   move  $v0, $zero
.L0044C044:
/* 0044C044 8F818990 */  lw     $at, %got(sdata_max)($gp)
/* 0044C048 8F9981B0 */  lw    $t9, %call16(set_domtag)($gp)
/* 0044C04C A3A015C0 */  sb    $zero, 0x15c0($sp)
/* 0044C050 AC2B0000 */  sw    $t3, ($at)
/* 0044C054 8F81898C */  lw     $at, %got(lsb_first)($gp)
/* 0044C058 A3A011C0 */  sb    $zero, 0x11c0($sp)
/* 0044C05C A3A00DC0 */  sb    $zero, 0xdc0($sp)
/* 0044C060 A0200000 */  sb    $zero, ($at)
/* 0044C064 8F8189A0 */  lw     $at, %got(fp_initialized)($gp)
/* 0044C068 A3A009C0 */  sb    $zero, 0x9c0($sp)
/* 0044C06C A3A00940 */  sb    $zero, 0x940($sp)
/* 0044C070 A0200000 */  sb    $zero, ($at)
/* 0044C074 8F818994 */  lw     $at, %got(ascii_out)($gp)
/* 0044C078 A3A019C8 */  sb    $zero, 0x19c8($sp)
/* 0044C07C A3A01DD0 */  sb    $zero, 0x1dd0($sp)
/* 0044C080 A0200000 */  sb    $zero, ($at)
/* 0044C084 8F8189EC */  lw     $at, %got(saw_cap_g)($gp)
/* 0044C088 A3A00515 */  sb    $zero, 0x515($sp)
/* 0044C08C A3A0093F */  sb    $zero, 0x93f($sp)
/* 0044C090 0320F809 */  jalr  $t9
/* 0044C094 A0200000 */   sb    $zero, ($at)
/* 0044C098 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C09C 24020004 */  li    $v0, 4
/* 0044C0A0 24040002 */  li    $a0, 2
/* 0044C0A4 8F81896C */  lw     $at, %got(excpt)($gp)
/* 0044C0A8 240C0008 */  li    $t4, 8
/* 0044C0AC 24030006 */  li    $v1, 6
/* 0044C0B0 A0200000 */  sb    $zero, ($at)
/* 0044C0B4 8F818970 */  lw     $at, %got(non_local_mtag)($gp)
/* 0044C0B8 24150001 */  li    $s5, 1
/* 0044C0BC 240DFFFF */  li    $t5, -1
/* 0044C0C0 AC200000 */  sw    $zero, ($at)
/* 0044C0C4 8F818A88 */  lw     $at, %got(init_dynmem)($gp)
/* 0044C0C8 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C0CC A3A0093E */  sb    $zero, 0x93e($sp)
/* 0044C0D0 A0200000 */  sb    $zero, ($at)
/* 0044C0D4 8F818A68 */  lw     $at, %got(use_real_fp_for_all)($gp)
/* 0044C0D8 8E100000 */  lw    $s0, ($s0)
/* 0044C0DC A3A00516 */  sb    $zero, 0x516($sp)
/* 0044C0E0 A0200000 */  sb    $zero, ($at)
/* 0044C0E4 8F8189E0 */  lw     $at, %got(debug_ugen)($gp)
/* 0044C0E8 A3A0051C */  sb    $zero, 0x51c($sp)
/* 0044C0EC A3B50518 */  sb    $s5, 0x518($sp)
/* 0044C0F0 A0200000 */  sb    $zero, ($at)
/* 0044C0F4 8F8189E4 */  lw     $at, %got(pic_level)($gp)
/* 0044C0F8 AFA00510 */  sw    $zero, 0x510($sp)
/* 0044C0FC 02A09025 */  move  $s2, $s5
/* 0044C100 AC200000 */  sw    $zero, ($at)
/* 0044C104 8F8189E8 */  lw     $at, %got(cpalias_ok)($gp)
/* 0044C108 27B721D0 */  addiu $s7, $sp, 0x21d0
/* 0044C10C 24140020 */  li    $s4, 32
/* 0044C110 A0200000 */  sb    $zero, ($at)
/* 0044C114 8F8189FC */  lw     $at, %got(n_parm_regs)($gp)
/* 0044C118 27B3053E */  addiu $s3, $sp, 0x53e
/* 0044C11C 8FB10530 */  lw    $s1, 0x530($sp)
/* 0044C120 AC220000 */  sw    $v0, ($at)
/* 0044C124 8F818A00 */  lw     $at, %got(n_fp_parm_regs)($gp)
/* 0044C128 AC240000 */  sw    $a0, ($at)
/* 0044C12C 8F818A14 */  lw     $at, %got(n_cg_regs)($gp)
/* 0044C130 AC220000 */  sw    $v0, ($at)
/* 0044C134 8F818A18 */  lw     $at, %got(n_fp_cg_regs)($gp)
/* 0044C138 AC220000 */  sw    $v0, ($at)
/* 0044C13C 8F818A04 */  lw     $at, %got(n_saved_regs)($gp)
/* 0044C140 AC2C0000 */  sw    $t4, ($at)
/* 0044C144 8F818A08 */  lw     $at, %got(n_saved_fp_regs)($gp)
/* 0044C148 AC230000 */  sw    $v1, ($at)
/* 0044C14C 8F818A0C */  lw     $at, %got(n_unsaved_regs)($gp)
/* 0044C150 AC230000 */  sw    $v1, ($at)
/* 0044C154 8F818A10 */  lw     $at, %got(n_unsaved_fp_regs)($gp)
/* 0044C158 AC240000 */  sw    $a0, ($at)
/* 0044C15C 8F8189BC */  lw     $at, %got(apc)($gp)
/* 0044C160 A0200000 */  sb    $zero, ($at)
/* 0044C164 8F8189C0 */  lw     $at, %got(align8)($gp)
/* 0044C168 A0200000 */  sb    $zero, ($at)
/* 0044C16C 8F8189C4 */  lw     $at, %got(align16)($gp)
/* 0044C170 A0200000 */  sb    $zero, ($at)
/* 0044C174 8F8189C8 */  lw     $at, %got(align32)($gp)
/* 0044C178 A0200000 */  sb    $zero, ($at)
/* 0044C17C 8F8189CC */  lw     $at, %got(align64)($gp)
/* 0044C180 A0200000 */  sb    $zero, ($at)
/* 0044C184 8F818A1C */  lw     $at, %got(ufsa)($gp)
/* 0044C188 A0200000 */  sb    $zero, ($at)
/* 0044C18C 8F818A20 */  lw     $at, %got(ufsm)($gp)
/* 0044C190 A0200000 */  sb    $zero, ($at)
/* 0044C194 8F818A40 */  lw     $at, %got(tail_call_opt)($gp)
/* 0044C198 A0350000 */  sb    $s5, ($at)
/* 0044C19C 8F818A4C */  lw     $at, %got(sgi_unsigned_conv)($gp)
/* 0044C1A0 A0350000 */  sb    $s5, ($at)
/* 0044C1A4 8F8189B0 */  lw     $at, %got(no_jal_use_jalr_only)($gp)
/* 0044C1A8 A0200000 */  sb    $zero, ($at)
/* 0044C1AC 8F818A9C */  lw     $at, %got(first_ent)($gp)
/* 0044C1B0 A0350000 */  sb    $s5, ($at)
/* 0044C1B4 8F818964 */  lw     $at, %got(print_warnings)($gp)
/* 0044C1B8 A0350000 */  sb    $s5, ($at)
/* 0044C1BC 8F818A8C */  lw     $at, %got(max_stack)($gp)
/* 0044C1C0 AC2D0000 */  sw    $t5, ($at)
/* 0044C1C4 8F8189D8 */  lw     $at, %got(opcode_arch)($gp)
/* 0044C1C8 A0200000 */  sb    $zero, ($at)
/* 0044C1CC 8F8189DC */  lw     $at, %got(basicint)($gp)
/* 0044C1D0 A0200000 */  sb    $zero, ($at)
/* 0044C1D4 8F818A28 */  lw     $at, %got(addr_dtype)($gp)
/* 0044C1D8 A0200000 */  sb    $zero, ($at)
/* 0044C1DC 8F818A2C */  lw     $at, %got(unitsperaddr)($gp)
/* 0044C1E0 AC220000 */  sw    $v0, ($at)
/* 0044C1E4 8F818A24 */  lw     $at, %got(fp32regs)($gp)
/* 0044C1E8 A0200000 */  sb    $zero, ($at)
/* 0044C1EC 2A010002 */  slti  $at, $s0, 2
/* 0044C1F0 54200712 */  bnel  $at, $zero, .L0044DE3C
/* 0044C1F4 93AB15C0 */   lbu   $t3, 0x15c0($sp)
/* 0044C1F8 27BE0107 */  addiu $fp, $sp, 0x107
/* 0044C1FC 8F968950 */  lw     $s6, %got(err)($gp)
.L0044C200:
/* 0044C200 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044C204 02402025 */  move  $a0, $s2
/* 0044C208 02602825 */  move  $a1, $s3
/* 0044C20C 0320F809 */  jalr  $t9
/* 0044C210 24060400 */   li    $a2, 1024
/* 0044C214 93A8053E */  lbu   $t0, 0x53e($sp)
/* 0044C218 2401002D */  li    $at, 45
/* 0044C21C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C220 150106F0 */  bne   $t0, $at, .L0044DDE4
/* 0044C224 02402025 */   move  $a0, $s2
/* 0044C228 93A2053F */  lbu   $v0, 0x53f($sp)
/* 0044C22C 2C410037 */  sltiu $at, $v0, 0x37
/* 0044C230 142006DA */  bnez  $at, .L0044DD9C
/* 0044C234 2C410050 */   sltiu $at, $v0, 0x50
/* 0044C238 142006E0 */  bnez  $at, .L0044DDBC
/* 0044C23C 2459FFBB */   addiu $t9, $v0, -0x45
/* 0044C240 244EFF9F */  addiu $t6, $v0, -0x61
/* 0044C244 2DC10017 */  sltiu $at, $t6, 0x17
/* 0044C248 102006BD */  beqz  $at, .L0044DD40
/* 0044C24C 00000000 */   nop   
/* 0044C250 8F818038 */  lw    $at, %got(jtbl_1000F4B4)($gp)
/* 0044C254 000E7080 */  sll   $t6, $t6, 2
/* 0044C258 002E0821 */  addu  $at, $at, $t6
/* 0044C25C 8C2EF4B4 */  lw    $t6, %lo(jtbl_1000F4B4)($at)
/* 0044C260 01DC7021 */  addu  $t6, $t6, $gp
/* 0044C264 01C00008 */  jr    $t6
/* 0044C268 00000000 */   nop   
.L0044C26C:
/* 0044C26C 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C270 24010061 */  li    $at, 97
/* 0044C274 93B90541 */  lbu   $t9, 0x541($sp)
/* 0044C278 146106B1 */  bne   $v1, $at, .L0044DD40
/* 0044C27C 2401006C */   li    $at, 108
/* 0044C280 172106AF */  bne   $t9, $at, .L0044DD40
/* 0044C284 93A20542 */   lbu   $v0, 0x542($sp)
/* 0044C288 24010072 */  li    $at, 114
/* 0044C28C 144106AC */  bne   $v0, $at, .L0044DD40
/* 0044C290 00000000 */   nop   
/* 0044C294 8F8189B0 */  lw     $at, %got(no_jal_use_jalr_only)($gp)
/* 0044C298 100006E2 */  b     .L0044DE24
/* 0044C29C A0350000 */   sb    $s5, ($at)
.L0044C2A0:
/* 0044C2A0 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C2A4 264F0001 */  addiu $t7, $s2, 1
/* 0044C2A8 147406A5 */  bne   $v1, $s4, .L0044DD40
/* 0044C2AC 00000000 */   nop   
/* 0044C2B0 15F00014 */  bne   $t7, $s0, .L0044C304
/* 0044C2B4 2406001A */   li    $a2, 26
/* 0044C2B8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C2BC 8F858038 */  lw    $a1, %got(RO_1000EFEC)($gp)
/* 0044C2C0 8EC40000 */  lw    $a0, ($s6)
/* 0044C2C4 2407001A */  li    $a3, 26
/* 0044C2C8 0320F809 */  jalr  $t9
/* 0044C2CC 24A5EFEC */   addiu $a1, %lo(RO_1000EFEC) # addiu $a1, $a1, -0x1014
/* 0044C2D0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C2D4 8EC40000 */  lw    $a0, ($s6)
/* 0044C2D8 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C2DC 0320F809 */  jalr  $t9
/* 0044C2E0 00000000 */   nop   
/* 0044C2E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C2E8 24040001 */  li    $a0, 1
/* 0044C2EC 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044C2F0 0320F809 */  jalr  $t9
/* 0044C2F4 00000000 */   nop   
/* 0044C2F8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C2FC 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C300 8E100000 */  lw    $s0, ($s0)
.L0044C304:
/* 0044C304 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044C308 26520001 */  addiu $s2, $s2, 1
/* 0044C30C 02402025 */  move  $a0, $s2
/* 0044C310 27A511C0 */  addiu $a1, $sp, 0x11c0
/* 0044C314 0320F809 */  jalr  $t9
/* 0044C318 24060400 */   li    $a2, 1024
/* 0044C31C 100006C1 */  b     .L0044DE24
/* 0044C320 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044C324:
/* 0044C324 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C328 24010066 */  li    $at, 102
/* 0044C32C 93B80541 */  lbu   $t8, 0x541($sp)
/* 0044C330 1461000F */  bne   $v1, $at, .L0044C370
/* 0044C334 24010073 */   li    $at, 115
/* 0044C338 1701000D */  bne   $t8, $at, .L0044C370
/* 0044C33C 93A20542 */   lbu   $v0, 0x542($sp)
/* 0044C340 24010061 */  li    $at, 97
/* 0044C344 54410005 */  bnel  $v0, $at, .L0044C35C
/* 0044C348 2401006D */   li    $at, 109
/* 0044C34C 8F818A1C */  lw     $at, %got(ufsa)($gp)
/* 0044C350 100006B4 */  b     .L0044DE24
/* 0044C354 A0350000 */   sb    $s5, ($at)
/* 0044C358 2401006D */  li    $at, 109
.L0044C35C:
/* 0044C35C 14410678 */  bne   $v0, $at, .L0044DD40
/* 0044C360 00000000 */   nop   
/* 0044C364 8F818A20 */  lw     $at, %got(ufsm)($gp)
/* 0044C368 100006AE */  b     .L0044DE24
/* 0044C36C A0350000 */   sb    $s5, ($at)
.L0044C370:
/* 0044C370 14740673 */  bne   $v1, $s4, .L0044DD40
/* 0044C374 26490001 */   addiu $t1, $s2, 1
/* 0044C378 15300014 */  bne   $t1, $s0, .L0044C3CC
/* 0044C37C 2406001A */   li    $a2, 26
/* 0044C380 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C384 8F858038 */  lw    $a1, %got(RO_1000EFD2)($gp)
/* 0044C388 8EC40000 */  lw    $a0, ($s6)
/* 0044C38C 2407001A */  li    $a3, 26
/* 0044C390 0320F809 */  jalr  $t9
/* 0044C394 24A5EFD2 */   addiu $a1, %lo(RO_1000EFD2) # addiu $a1, $a1, -0x102e
/* 0044C398 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C39C 8EC40000 */  lw    $a0, ($s6)
/* 0044C3A0 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C3A4 0320F809 */  jalr  $t9
/* 0044C3A8 00000000 */   nop   
/* 0044C3AC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C3B0 24040001 */  li    $a0, 1
/* 0044C3B4 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044C3B8 0320F809 */  jalr  $t9
/* 0044C3BC 00000000 */   nop   
/* 0044C3C0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C3C4 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C3C8 8E100000 */  lw    $s0, ($s0)
.L0044C3CC:
/* 0044C3CC 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044C3D0 26520001 */  addiu $s2, $s2, 1
/* 0044C3D4 02402025 */  move  $a0, $s2
/* 0044C3D8 27A509C0 */  addiu $a1, $sp, 0x9c0
/* 0044C3DC 0320F809 */  jalr  $t9
/* 0044C3E0 24060400 */   li    $a2, 1024
/* 0044C3E4 1000068F */  b     .L0044DE24
/* 0044C3E8 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044C3EC:
/* 0044C3EC 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C3F0 264A0001 */  addiu $t2, $s2, 1
/* 0044C3F4 14740652 */  bne   $v1, $s4, .L0044DD40
/* 0044C3F8 00000000 */   nop   
/* 0044C3FC 15500014 */  bne   $t2, $s0, .L0044C450
/* 0044C400 2406001A */   li    $a2, 26
/* 0044C404 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C408 8F858038 */  lw    $a1, %got(RO_1000EFB8)($gp)
/* 0044C40C 8EC40000 */  lw    $a0, ($s6)
/* 0044C410 2407001A */  li    $a3, 26
/* 0044C414 0320F809 */  jalr  $t9
/* 0044C418 24A5EFB8 */   addiu $a1, %lo(RO_1000EFB8) # addiu $a1, $a1, -0x1048
/* 0044C41C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C420 8EC40000 */  lw    $a0, ($s6)
/* 0044C424 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C428 0320F809 */  jalr  $t9
/* 0044C42C 00000000 */   nop   
/* 0044C430 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C434 24040001 */  li    $a0, 1
/* 0044C438 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044C43C 0320F809 */  jalr  $t9
/* 0044C440 00000000 */   nop   
/* 0044C444 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C448 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C44C 8E100000 */  lw    $s0, ($s0)
.L0044C450:
/* 0044C450 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044C454 8F818994 */  lw     $at, %got(ascii_out)($gp)
/* 0044C458 26520001 */  addiu $s2, $s2, 1
/* 0044C45C 240B0001 */  li    $t3, 1
/* 0044C460 02402025 */  move  $a0, $s2
/* 0044C464 27A50DC0 */  addiu $a1, $sp, 0xdc0
/* 0044C468 24060400 */  li    $a2, 1024
/* 0044C46C 0320F809 */  jalr  $t9
/* 0044C470 A02B0000 */   sb    $t3, ($at)
/* 0044C474 1000066B */  b     .L0044DE24
/* 0044C478 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044C47C:
/* 0044C47C 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C480 24010065 */  li    $at, 101
/* 0044C484 93AC0541 */  lbu   $t4, 0x541($sp)
/* 0044C488 14610025 */  bne   $v1, $at, .L0044C520
/* 0044C48C 2401006D */   li    $at, 109
/* 0044C490 15810023 */  bne   $t4, $at, .L0044C520
/* 0044C494 93A20542 */   lbu   $v0, 0x542($sp)
/* 0044C498 24010070 */  li    $at, 112
/* 0044C49C 14410020 */  bne   $v0, $at, .L0044C520
/* 0044C4A0 240D0001 */   li    $t5, 1
/* 0044C4A4 26480001 */  addiu $t0, $s2, 1
/* 0044C4A8 15100015 */  bne   $t0, $s0, .L0044C500
/* 0044C4AC A3AD0515 */   sb    $t5, 0x515($sp)
/* 0044C4B0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C4B4 8F858038 */  lw    $a1, %got(RO_1000EF9B)($gp)
/* 0044C4B8 8EC40000 */  lw    $a0, ($s6)
/* 0044C4BC 2406001D */  li    $a2, 29
/* 0044C4C0 2407001D */  li    $a3, 29
/* 0044C4C4 0320F809 */  jalr  $t9
/* 0044C4C8 24A5EF9B */   addiu $a1, %lo(RO_1000EF9B) # addiu $a1, $a1, -0x1065
/* 0044C4CC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C4D0 8EC40000 */  lw    $a0, ($s6)
/* 0044C4D4 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C4D8 0320F809 */  jalr  $t9
/* 0044C4DC 00000000 */   nop   
/* 0044C4E0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C4E4 24040001 */  li    $a0, 1
/* 0044C4E8 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044C4EC 0320F809 */  jalr  $t9
/* 0044C4F0 00000000 */   nop   
/* 0044C4F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C4F8 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C4FC 8E100000 */  lw    $s0, ($s0)
.L0044C500:
/* 0044C500 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044C504 26520001 */  addiu $s2, $s2, 1
/* 0044C508 02402025 */  move  $a0, $s2
/* 0044C50C 27A519C8 */  addiu $a1, $sp, 0x19c8
/* 0044C510 0320F809 */  jalr  $t9
/* 0044C514 24060400 */   li    $a2, 1024
/* 0044C518 10000642 */  b     .L0044DE24
/* 0044C51C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044C520:
/* 0044C520 24010072 */  li    $at, 114
/* 0044C524 14610010 */  bne   $v1, $at, .L0044C568
/* 0044C528 93A20542 */   lbu   $v0, 0x542($sp)
/* 0044C52C 93AE0541 */  lbu   $t6, 0x541($sp)
/* 0044C530 24010061 */  li    $at, 97
/* 0044C534 15C1000C */  bne   $t6, $at, .L0044C568
/* 0044C538 24010070 */   li    $at, 112
/* 0044C53C 1441000A */  bne   $v0, $at, .L0044C568
/* 0044C540 93B90543 */   lbu   $t9, 0x543($sp)
/* 0044C544 24010075 */  li    $at, 117
/* 0044C548 17210007 */  bne   $t9, $at, .L0044C568
/* 0044C54C 93AF0544 */   lbu   $t7, 0x544($sp)
/* 0044C550 24010076 */  li    $at, 118
/* 0044C554 15E10004 */  bne   $t7, $at, .L0044C568
/* 0044C558 00000000 */   nop   
/* 0044C55C 8F818A88 */  lw     $at, %got(init_dynmem)($gp)
/* 0044C560 10000630 */  b     .L0044DE24
/* 0044C564 A0350000 */   sb    $s5, ($at)
.L0044C568:
/* 0044C568 147405F5 */  bne   $v1, $s4, .L0044DD40
/* 0044C56C 26580001 */   addiu $t8, $s2, 1
/* 0044C570 17100014 */  bne   $t8, $s0, .L0044C5C4
/* 0044C574 2406001A */   li    $a2, 26
/* 0044C578 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C57C 8F858038 */  lw    $a1, %got(RO_1000EF81)($gp)
/* 0044C580 8EC40000 */  lw    $a0, ($s6)
/* 0044C584 2407001A */  li    $a3, 26
/* 0044C588 0320F809 */  jalr  $t9
/* 0044C58C 24A5EF81 */   addiu $a1, %lo(RO_1000EF81) # addiu $a1, $a1, -0x107f
/* 0044C590 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C594 8EC40000 */  lw    $a0, ($s6)
/* 0044C598 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C59C 0320F809 */  jalr  $t9
/* 0044C5A0 00000000 */   nop   
/* 0044C5A4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C5A8 24040001 */  li    $a0, 1
/* 0044C5AC 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044C5B0 0320F809 */  jalr  $t9
/* 0044C5B4 00000000 */   nop   
/* 0044C5B8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C5BC 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C5C0 8E100000 */  lw    $s0, ($s0)
.L0044C5C4:
/* 0044C5C4 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044C5C8 26520001 */  addiu $s2, $s2, 1
/* 0044C5CC 02402025 */  move  $a0, $s2
/* 0044C5D0 27A50940 */  addiu $a1, $sp, 0x940
/* 0044C5D4 0320F809 */  jalr  $t9
/* 0044C5D8 24060080 */   li    $a2, 128
/* 0044C5DC 10000611 */  b     .L0044DE24
/* 0044C5E0 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044C5E4:
/* 0044C5E4 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C5E8 24090001 */  li    $t1, 1
/* 0044C5EC 264A0001 */  addiu $t2, $s2, 1
/* 0044C5F0 1474001F */  bne   $v1, $s4, .L0044C670
/* 0044C5F4 24010078 */   li    $at, 120
/* 0044C5F8 15500015 */  bne   $t2, $s0, .L0044C650
/* 0044C5FC A3A9093F */   sb    $t1, 0x93f($sp)
/* 0044C600 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C604 8F858038 */  lw    $a1, %got(RO_1000EF67)($gp)
/* 0044C608 8EC40000 */  lw    $a0, ($s6)
/* 0044C60C 2406001A */  li    $a2, 26
/* 0044C610 2407001A */  li    $a3, 26
/* 0044C614 0320F809 */  jalr  $t9
/* 0044C618 24A5EF67 */   addiu $a1, %lo(RO_1000EF67) # addiu $a1, $a1, -0x1099
/* 0044C61C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C620 8EC40000 */  lw    $a0, ($s6)
/* 0044C624 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C628 0320F809 */  jalr  $t9
/* 0044C62C 00000000 */   nop   
/* 0044C630 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C634 24040001 */  li    $a0, 1
/* 0044C638 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044C63C 0320F809 */  jalr  $t9
/* 0044C640 00000000 */   nop   
/* 0044C644 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C648 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C64C 8E100000 */  lw    $s0, ($s0)
.L0044C650:
/* 0044C650 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044C654 26520001 */  addiu $s2, $s2, 1
/* 0044C658 02402025 */  move  $a0, $s2
/* 0044C65C 27A51DD0 */  addiu $a1, $sp, 0x1dd0
/* 0044C660 0320F809 */  jalr  $t9
/* 0044C664 24060400 */   li    $a2, 1024
/* 0044C668 100005EE */  b     .L0044DE24
/* 0044C66C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044C670:
/* 0044C670 146105B3 */  bne   $v1, $at, .L0044DD40
/* 0044C674 93AB0541 */   lbu   $t3, 0x541($sp)
/* 0044C678 24010063 */  li    $at, 99
/* 0044C67C 156105B0 */  bne   $t3, $at, .L0044DD40
/* 0044C680 93A20542 */   lbu   $v0, 0x542($sp)
/* 0044C684 24010070 */  li    $at, 112
/* 0044C688 144105AD */  bne   $v0, $at, .L0044DD40
/* 0044C68C 93AC0543 */   lbu   $t4, 0x543($sp)
/* 0044C690 24010074 */  li    $at, 116
/* 0044C694 158105AA */  bne   $t4, $at, .L0044DD40
/* 0044C698 93AD0544 */   lbu   $t5, 0x544($sp)
/* 0044C69C 15B405A8 */  bne   $t5, $s4, .L0044DD40
/* 0044C6A0 00000000 */   nop   
/* 0044C6A4 8F81896C */  lw     $at, %got(excpt)($gp)
/* 0044C6A8 100005DE */  b     .L0044DE24
/* 0044C6AC A0350000 */   sb    $s5, ($at)
.L0044C6B0:
/* 0044C6B0 8F888038 */  lw    $t0, %got(RO_1000EF47)($gp)
/* 0044C6B4 02602025 */  move  $a0, $s3
/* 0044C6B8 02E01025 */  move  $v0, $s7
/* 0044C6BC 2508EF47 */  addiu $t0, %lo(RO_1000EF47) # addiu $t0, $t0, -0x10b9
/* 0044C6C0 89190000 */  lwl   $t9, ($t0)
/* 0044C6C4 99190003 */  lwr   $t9, 3($t0)
/* 0044C6C8 ABB90004 */  swl   $t9, 4($sp)
/* 0044C6CC BBB90007 */  swr   $t9, 7($sp)
/* 0044C6D0 890E0004 */  lwl   $t6, 4($t0)
/* 0044C6D4 990E0007 */  lwr   $t6, 7($t0)
/* 0044C6D8 8FA50004 */  lw    $a1, 4($sp)
/* 0044C6DC ABAE0008 */  swl   $t6, 8($sp)
/* 0044C6E0 BBAE000B */  swr   $t6, 0xb($sp)
/* 0044C6E4 89190008 */  lwl   $t9, 8($t0)
/* 0044C6E8 9919000B */  lwr   $t9, 0xb($t0)
/* 0044C6EC 8FA60008 */  lw    $a2, 8($sp)
/* 0044C6F0 ABB9000C */  swl   $t9, 0xc($sp)
/* 0044C6F4 BBB9000F */  swr   $t9, 0xf($sp)
/* 0044C6F8 890E000C */  lwl   $t6, 0xc($t0)
/* 0044C6FC 990E000F */  lwr   $t6, 0xf($t0)
/* 0044C700 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044C704 ABAE0010 */  swl   $t6, 0x10($sp)
/* 0044C708 BBAE0013 */  swr   $t6, 0x13($sp)
/* 0044C70C 89190010 */  lwl   $t9, 0x10($t0)
/* 0044C710 99190013 */  lwr   $t9, 0x13($t0)
/* 0044C714 ABB90014 */  swl   $t9, 0x14($sp)
/* 0044C718 BBB90017 */  swr   $t9, 0x17($sp)
/* 0044C71C 890E0014 */  lwl   $t6, 0x14($t0)
/* 0044C720 990E0017 */  lwr   $t6, 0x17($t0)
/* 0044C724 ABAE0018 */  swl   $t6, 0x18($sp)
/* 0044C728 BBAE001B */  swr   $t6, 0x1b($sp)
/* 0044C72C 89190018 */  lwl   $t9, 0x18($t0)
/* 0044C730 9919001B */  lwr   $t9, 0x1b($t0)
/* 0044C734 ABB9001C */  swl   $t9, 0x1c($sp)
/* 0044C738 BBB9001F */  swr   $t9, 0x1f($sp)
/* 0044C73C 890E001C */  lwl   $t6, 0x1c($t0)
/* 0044C740 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044C744 990E001F */  lwr   $t6, 0x1f($t0)
/* 0044C748 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044C74C ABAE0020 */  swl   $t6, 0x20($sp)
/* 0044C750 0320F809 */  jalr  $t9
/* 0044C754 BBAE0023 */   swr   $t6, 0x23($sp)
/* 0044C758 10400007 */  beqz  $v0, .L0044C778
/* 0044C75C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044C760 8F8189B8 */  lw     $at, %got(isa)($gp)
/* 0044C764 240F0002 */  li    $t7, 2
/* 0044C768 A02F0000 */  sb    $t7, ($at)
/* 0044C76C 8F8189D8 */  lw     $at, %got(opcode_arch)($gp)
/* 0044C770 10000036 */  b     .L0044C84C
/* 0044C774 A0350000 */   sb    $s5, ($at)
.L0044C778:
/* 0044C778 8F988038 */  lw    $t8, %got(RO_1000EF27)($gp)
/* 0044C77C 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044C780 02602025 */  move  $a0, $s3
/* 0044C784 2718EF27 */  addiu $t8, %lo(RO_1000EF27) # addiu $t8, $t8, -0x10d9
/* 0044C788 8B0A0000 */  lwl   $t2, ($t8)
/* 0044C78C 9B0A0003 */  lwr   $t2, 3($t8)
/* 0044C790 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044C794 02E01025 */  move  $v0, $s7
/* 0044C798 ABAA0004 */  swl   $t2, 4($sp)
/* 0044C79C BBAA0007 */  swr   $t2, 7($sp)
/* 0044C7A0 8B090004 */  lwl   $t1, 4($t8)
/* 0044C7A4 9B090007 */  lwr   $t1, 7($t8)
/* 0044C7A8 8FA50004 */  lw    $a1, 4($sp)
/* 0044C7AC ABA90008 */  swl   $t1, 8($sp)
/* 0044C7B0 BBA9000B */  swr   $t1, 0xb($sp)
/* 0044C7B4 8B0A0008 */  lwl   $t2, 8($t8)
/* 0044C7B8 9B0A000B */  lwr   $t2, 0xb($t8)
/* 0044C7BC 8FA60008 */  lw    $a2, 8($sp)
/* 0044C7C0 ABAA000C */  swl   $t2, 0xc($sp)
/* 0044C7C4 BBAA000F */  swr   $t2, 0xf($sp)
/* 0044C7C8 8B09000C */  lwl   $t1, 0xc($t8)
/* 0044C7CC 9B09000F */  lwr   $t1, 0xf($t8)
/* 0044C7D0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044C7D4 ABA90010 */  swl   $t1, 0x10($sp)
/* 0044C7D8 BBA90013 */  swr   $t1, 0x13($sp)
/* 0044C7DC 8B0A0010 */  lwl   $t2, 0x10($t8)
/* 0044C7E0 9B0A0013 */  lwr   $t2, 0x13($t8)
/* 0044C7E4 ABAA0014 */  swl   $t2, 0x14($sp)
/* 0044C7E8 BBAA0017 */  swr   $t2, 0x17($sp)
/* 0044C7EC 8B090014 */  lwl   $t1, 0x14($t8)
/* 0044C7F0 9B090017 */  lwr   $t1, 0x17($t8)
/* 0044C7F4 ABA90018 */  swl   $t1, 0x18($sp)
/* 0044C7F8 BBA9001B */  swr   $t1, 0x1b($sp)
/* 0044C7FC 8B0A0018 */  lwl   $t2, 0x18($t8)
/* 0044C800 9B0A001B */  lwr   $t2, 0x1b($t8)
/* 0044C804 ABAA001C */  swl   $t2, 0x1c($sp)
/* 0044C808 BBAA001F */  swr   $t2, 0x1f($sp)
/* 0044C80C 8B09001C */  lwl   $t1, 0x1c($t8)
/* 0044C810 9B09001F */  lwr   $t1, 0x1f($t8)
/* 0044C814 ABA90020 */  swl   $t1, 0x20($sp)
/* 0044C818 0320F809 */  jalr  $t9
/* 0044C81C BBA90023 */   swr   $t1, 0x23($sp)
/* 0044C820 10400007 */  beqz  $v0, .L0044C840
/* 0044C824 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044C828 8F9981B0 */  lw    $t9, %call16(set_domtag)($gp)
/* 0044C82C 02A02025 */  move  $a0, $s5
/* 0044C830 0320F809 */  jalr  $t9
/* 0044C834 00000000 */   nop   
/* 0044C838 10000004 */  b     .L0044C84C
/* 0044C83C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044C840:
/* 0044C840 8F8189E0 */  lw     $at, %got(debug_ugen)($gp)
/* 0044C844 A3B5093F */  sb    $s5, 0x93f($sp)
/* 0044C848 A0350000 */  sb    $s5, ($at)
.L0044C84C:
/* 0044C84C 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C850 10000574 */  b     .L0044DE24
/* 0044C854 8E100000 */   lw    $s0, ($s0)
.L0044C858:
/* 0044C858 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C85C 2401004C */  li    $at, 76
/* 0044C860 54610005 */  bnel  $v1, $at, .L0044C878
/* 0044C864 24010042 */   li    $at, 66
/* 0044C868 8F81898C */  lw     $at, %got(lsb_first)($gp)
/* 0044C86C 1000056D */  b     .L0044DE24
/* 0044C870 A0350000 */   sb    $s5, ($at)
/* 0044C874 24010042 */  li    $at, 66
.L0044C878:
/* 0044C878 14610531 */  bne   $v1, $at, .L0044DD40
/* 0044C87C 00000000 */   nop   
/* 0044C880 8F81898C */  lw     $at, %got(lsb_first)($gp)
/* 0044C884 10000567 */  b     .L0044DE24
/* 0044C888 A0200000 */   sb    $zero, ($at)
.L0044C88C:
/* 0044C88C 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C890 02803025 */  move  $a2, $s4
/* 0044C894 02803825 */  move  $a3, $s4
/* 0044C898 1474000F */  bne   $v1, $s4, .L0044C8D8
/* 0044C89C 2C610030 */   sltiu $at, $v1, 0x30
/* 0044C8A0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C8A4 8F858038 */  lw    $a1, %got(RO_1000EF07)($gp)
/* 0044C8A8 8EC40000 */  lw    $a0, ($s6)
/* 0044C8AC 0320F809 */  jalr  $t9
/* 0044C8B0 24A5EF07 */   addiu $a1, %lo(RO_1000EF07) # addiu $a1, $a1, -0x10f9
/* 0044C8B4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C8B8 8EC40000 */  lw    $a0, ($s6)
/* 0044C8BC 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C8C0 0320F809 */  jalr  $t9
/* 0044C8C4 00000000 */   nop   
/* 0044C8C8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C8CC 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C8D0 10000554 */  b     .L0044DE24
/* 0044C8D4 8E100000 */   lw    $s0, ($s0)
.L0044C8D8:
/* 0044C8D8 14200519 */  bnez  $at, .L0044DD40
/* 0044C8DC 2C610035 */   sltiu $at, $v1, 0x35
/* 0044C8E0 10200517 */  beqz  $at, .L0044DD40
/* 0044C8E4 246BFFD0 */   addiu $t3, $v1, -0x30
/* 0044C8E8 1000054E */  b     .L0044DE24
/* 0044C8EC A3AB051C */   sb    $t3, 0x51c($sp)
.L0044C8F0:
/* 0044C8F0 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C8F4 02803025 */  move  $a2, $s4
/* 0044C8F8 02803825 */  move  $a3, $s4
/* 0044C8FC 1474000F */  bne   $v1, $s4, .L0044C93C
/* 0044C900 2C610030 */   sltiu $at, $v1, 0x30
/* 0044C904 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C908 8F858038 */  lw    $a1, %got(RO_1000EEE7)($gp)
/* 0044C90C 8EC40000 */  lw    $a0, ($s6)
/* 0044C910 0320F809 */  jalr  $t9
/* 0044C914 24A5EEE7 */   addiu $a1, %lo(RO_1000EEE7) # addiu $a1, $a1, -0x1119
/* 0044C918 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C91C 8EC40000 */  lw    $a0, ($s6)
/* 0044C920 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C924 0320F809 */  jalr  $t9
/* 0044C928 00000000 */   nop   
/* 0044C92C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C930 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044C934 1000053B */  b     .L0044DE24
/* 0044C938 8E100000 */   lw    $s0, ($s0)
.L0044C93C:
/* 0044C93C 14200500 */  bnez  $at, .L0044DD40
/* 0044C940 2C610035 */   sltiu $at, $v1, 0x35
/* 0044C944 102004FE */  beqz  $at, .L0044DD40
/* 0044C948 246CFFD0 */   addiu $t4, $v1, -0x30
/* 0044C94C 10000535 */  b     .L0044DE24
/* 0044C950 A3AC0518 */   sb    $t4, 0x518($sp)
.L0044C954:
/* 0044C954 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044C958 264D0001 */  addiu $t5, $s2, 1
/* 0044C95C 147404F8 */  bne   $v1, $s4, .L0044DD40
/* 0044C960 00000000 */   nop   
/* 0044C964 15B00012 */  bne   $t5, $s0, .L0044C9B0
/* 0044C968 02803025 */   move  $a2, $s4
/* 0044C96C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044C970 8F858038 */  lw    $a1, %got(RO_1000EEC7)($gp)
/* 0044C974 8EC40000 */  lw    $a0, ($s6)
/* 0044C978 02803825 */  move  $a3, $s4
/* 0044C97C 0320F809 */  jalr  $t9
/* 0044C980 24A5EEC7 */   addiu $a1, %lo(RO_1000EEC7) # addiu $a1, $a1, -0x1139
/* 0044C984 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C988 8EC40000 */  lw    $a0, ($s6)
/* 0044C98C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044C990 0320F809 */  jalr  $t9
/* 0044C994 00000000 */   nop   
/* 0044C998 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C99C 24040001 */  li    $a0, 1
/* 0044C9A0 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044C9A4 0320F809 */  jalr  $t9
/* 0044C9A8 00000000 */   nop   
/* 0044C9AC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044C9B0:
/* 0044C9B0 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044C9B4 26520001 */  addiu $s2, $s2, 1
/* 0044C9B8 02402025 */  move  $a0, $s2
/* 0044C9BC 02602825 */  move  $a1, $s3
/* 0044C9C0 0320F809 */  jalr  $t9
/* 0044C9C4 24060400 */   li    $a2, 1024
/* 0044C9C8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C9CC 02602025 */  move  $a0, $s3
/* 0044C9D0 02E01025 */  move  $v0, $s7
/* 0044C9D4 8F998028 */  lw    $t9, %got(func_0044B290)($gp)
/* 0044C9D8 2739B290 */  addiu $t9, %lo(func_0044B290) # addiu $t9, $t9, -0x4d70
/* 0044C9DC 0320F809 */  jalr  $t9
/* 0044C9E0 00000000 */   nop   
/* 0044C9E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044C9E8 8F8889E4 */  lw     $t0, %got(pic_level)($gp)
/* 0044C9EC 8F818990 */  lw     $at, %got(sdata_max)($gp)
/* 0044C9F0 8D080000 */  lw    $t0, ($t0)
/* 0044C9F4 AC220000 */  sw    $v0, ($at)
/* 0044C9F8 29010002 */  slti  $at, $t0, 2
/* 0044C9FC 14200016 */  bnez  $at, .L0044CA58
/* 0044CA00 00000000 */   nop   
/* 0044CA04 8F8E8990 */  lw     $t6, %got(sdata_max)($gp)
/* 0044CA08 24060025 */  li    $a2, 37
/* 0044CA0C 24070025 */  li    $a3, 37
/* 0044CA10 8DCE0000 */  lw    $t6, ($t6)
/* 0044CA14 11C00010 */  beqz  $t6, .L0044CA58
/* 0044CA18 00000000 */   nop   
/* 0044CA1C 8F8189EC */  lw     $at, %got(saw_cap_g)($gp)
/* 0044CA20 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044CA24 8F858038 */  lw    $a1, %got(RO_1000EEA2)($gp)
/* 0044CA28 A0350000 */  sb    $s5, ($at)
/* 0044CA2C 8EC40000 */  lw    $a0, ($s6)
/* 0044CA30 0320F809 */  jalr  $t9
/* 0044CA34 24A5EEA2 */   addiu $a1, %lo(RO_1000EEA2) # addiu $a1, $a1, -0x115e
/* 0044CA38 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044CA3C 8EC40000 */  lw    $a0, ($s6)
/* 0044CA40 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044CA44 0320F809 */  jalr  $t9
/* 0044CA48 00000000 */   nop   
/* 0044CA4C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044CA50 8F818990 */  lw     $at, %got(sdata_max)($gp)
/* 0044CA54 AC200000 */  sw    $zero, ($at)
.L0044CA58:
/* 0044CA58 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044CA5C 100004F1 */  b     .L0044DE24
/* 0044CA60 8E100000 */   lw    $s0, ($s0)
.L0044CA64:
/* 0044CA64 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044CA68 24010065 */  li    $at, 101
/* 0044CA6C 93B90541 */  lbu   $t9, 0x541($sp)
/* 0044CA70 146104B3 */  bne   $v1, $at, .L0044DD40
/* 0044CA74 24010067 */   li    $at, 103
/* 0044CA78 172104B1 */  bne   $t9, $at, .L0044DD40
/* 0044CA7C 93B00542 */   lbu   $s0, 0x542($sp)
/* 0044CA80 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044CA84 26520001 */  addiu $s2, $s2, 1
/* 0044CA88 02402025 */  move  $a0, $s2
/* 0044CA8C 02602825 */  move  $a1, $s3
/* 0044CA90 0320F809 */  jalr  $t9
/* 0044CA94 24060400 */   li    $a2, 1024
/* 0044CA98 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044CA9C 02602025 */  move  $a0, $s3
/* 0044CAA0 02E01025 */  move  $v0, $s7
/* 0044CAA4 8F998028 */  lw    $t9, %got(func_0044B290)($gp)
/* 0044CAA8 2739B290 */  addiu $t9, %lo(func_0044B290) # addiu $t9, $t9, -0x4d70
/* 0044CAAC 0320F809 */  jalr  $t9
/* 0044CAB0 00000000 */   nop   
/* 0044CAB4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044CAB8 00402825 */  move  $a1, $v0
/* 0044CABC 02E01025 */  move  $v0, $s7
/* 0044CAC0 8F998028 */  lw    $t9, %got(func_0044B384)($gp)
/* 0044CAC4 02002025 */  move  $a0, $s0
/* 0044CAC8 2739B384 */  addiu $t9, %lo(func_0044B384) # addiu $t9, $t9, -0x4c7c
/* 0044CACC 0320F809 */  jalr  $t9
/* 0044CAD0 00000000 */   nop   
/* 0044CAD4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044CAD8 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044CADC 100004D1 */  b     .L0044DE24
/* 0044CAE0 8E100000 */   lw    $s0, ($s0)
.L0044CAE4:
/* 0044CAE4 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044CAE8 24010072 */  li    $at, 114
/* 0044CAEC 93AF0541 */  lbu   $t7, 0x541($sp)
/* 0044CAF0 1461001D */  bne   $v1, $at, .L0044CB68
/* 0044CAF4 24010065 */   li    $at, 101
/* 0044CAF8 15E1001B */  bne   $t7, $at, .L0044CB68
/* 0044CAFC 93A20542 */   lbu   $v0, 0x542($sp)
/* 0044CB00 24010067 */  li    $at, 103
/* 0044CB04 14410018 */  bne   $v0, $at, .L0044CB68
/* 0044CB08 93B00543 */   lbu   $s0, 0x543($sp)
/* 0044CB0C 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044CB10 26520001 */  addiu $s2, $s2, 1
/* 0044CB14 02402025 */  move  $a0, $s2
/* 0044CB18 02602825 */  move  $a1, $s3
/* 0044CB1C 0320F809 */  jalr  $t9
/* 0044CB20 24060400 */   li    $a2, 1024
/* 0044CB24 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044CB28 02602025 */  move  $a0, $s3
/* 0044CB2C 02E01025 */  move  $v0, $s7
/* 0044CB30 8F998028 */  lw    $t9, %got(func_0044B290)($gp)
/* 0044CB34 2739B290 */  addiu $t9, %lo(func_0044B290) # addiu $t9, $t9, -0x4d70
/* 0044CB38 0320F809 */  jalr  $t9
/* 0044CB3C 00000000 */   nop   
/* 0044CB40 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044CB44 00402825 */  move  $a1, $v0
/* 0044CB48 02E01025 */  move  $v0, $s7
/* 0044CB4C 8F998028 */  lw    $t9, %got(func_0044B640)($gp)
/* 0044CB50 02002025 */  move  $a0, $s0
/* 0044CB54 2739B640 */  addiu $t9, %lo(func_0044B640) # addiu $t9, $t9, -0x49c0
/* 0044CB58 0320F809 */  jalr  $t9
/* 0044CB5C 00000000 */   nop   
/* 0044CB60 1000002F */  b     .L0044CC20
/* 0044CB64 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044CB68:
/* 0044CB68 8F988038 */  lw    $t8, %got(RO_1000EE82)($gp)
/* 0044CB6C 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044CB70 02602025 */  move  $a0, $s3
/* 0044CB74 2718EE82 */  addiu $t8, %lo(RO_1000EE82) # addiu $t8, $t8, -0x117e
/* 0044CB78 8B0A0000 */  lwl   $t2, ($t8)
/* 0044CB7C 9B0A0003 */  lwr   $t2, 3($t8)
/* 0044CB80 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044CB84 02E01025 */  move  $v0, $s7
/* 0044CB88 ABAA0004 */  swl   $t2, 4($sp)
/* 0044CB8C BBAA0007 */  swr   $t2, 7($sp)
/* 0044CB90 8B090004 */  lwl   $t1, 4($t8)
/* 0044CB94 9B090007 */  lwr   $t1, 7($t8)
/* 0044CB98 8FA50004 */  lw    $a1, 4($sp)
/* 0044CB9C ABA90008 */  swl   $t1, 8($sp)
/* 0044CBA0 BBA9000B */  swr   $t1, 0xb($sp)
/* 0044CBA4 8B0A0008 */  lwl   $t2, 8($t8)
/* 0044CBA8 9B0A000B */  lwr   $t2, 0xb($t8)
/* 0044CBAC 8FA60008 */  lw    $a2, 8($sp)
/* 0044CBB0 ABAA000C */  swl   $t2, 0xc($sp)
/* 0044CBB4 BBAA000F */  swr   $t2, 0xf($sp)
/* 0044CBB8 8B09000C */  lwl   $t1, 0xc($t8)
/* 0044CBBC 9B09000F */  lwr   $t1, 0xf($t8)
/* 0044CBC0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044CBC4 ABA90010 */  swl   $t1, 0x10($sp)
/* 0044CBC8 BBA90013 */  swr   $t1, 0x13($sp)
/* 0044CBCC 8B0A0010 */  lwl   $t2, 0x10($t8)
/* 0044CBD0 9B0A0013 */  lwr   $t2, 0x13($t8)
/* 0044CBD4 ABAA0014 */  swl   $t2, 0x14($sp)
/* 0044CBD8 BBAA0017 */  swr   $t2, 0x17($sp)
/* 0044CBDC 8B090014 */  lwl   $t1, 0x14($t8)
/* 0044CBE0 9B090017 */  lwr   $t1, 0x17($t8)
/* 0044CBE4 ABA90018 */  swl   $t1, 0x18($sp)
/* 0044CBE8 BBA9001B */  swr   $t1, 0x1b($sp)
/* 0044CBEC 8B0A0018 */  lwl   $t2, 0x18($t8)
/* 0044CBF0 9B0A001B */  lwr   $t2, 0x1b($t8)
/* 0044CBF4 ABAA001C */  swl   $t2, 0x1c($sp)
/* 0044CBF8 BBAA001F */  swr   $t2, 0x1f($sp)
/* 0044CBFC 8B09001C */  lwl   $t1, 0x1c($t8)
/* 0044CC00 9B09001F */  lwr   $t1, 0x1f($t8)
/* 0044CC04 ABA90020 */  swl   $t1, 0x20($sp)
/* 0044CC08 0320F809 */  jalr  $t9
/* 0044CC0C BBA90023 */   swr   $t1, 0x23($sp)
/* 0044CC10 1040044B */  beqz  $v0, .L0044DD40
/* 0044CC14 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044CC18 8F818A24 */  lw     $at, %got(fp32regs)($gp)
/* 0044CC1C A0350000 */  sb    $s5, ($at)
.L0044CC20:
/* 0044CC20 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044CC24 1000047F */  b     .L0044DE24
/* 0044CC28 8E100000 */   lw    $s0, ($s0)
.L0044CC2C:
/* 0044CC2C 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044CC30 14740443 */  bne   $v1, $s4, .L0044DD40
/* 0044CC34 00000000 */   nop   
/* 0044CC38 1000047A */  b     .L0044DE24
/* 0044CC3C A3B50516 */   sb    $s5, 0x516($sp)
.L0044CC40:
/* 0044CC40 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044CC44 24010050 */  li    $at, 80
/* 0044CC48 1461043D */  bne   $v1, $at, .L0044DD40
/* 0044CC4C 00000000 */   nop   
/* 0044CC50 8F818A68 */  lw     $at, %got(use_real_fp_for_all)($gp)
/* 0044CC54 10000473 */  b     .L0044DE24
/* 0044CC58 A0350000 */   sb    $s5, ($at)
.L0044CC5C:
/* 0044CC5C 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044CC60 14740437 */  bne   $v1, $s4, .L0044DD40
/* 0044CC64 00000000 */   nop   
/* 0044CC68 1000046E */  b     .L0044DE24
/* 0044CC6C A3B5093E */   sb    $s5, 0x93e($sp)
.L0044CC70:
/* 0044CC70 8F8B8038 */  lw    $t3, %got(RO_1000EE62)($gp)
/* 0044CC74 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044CC78 02602025 */  move  $a0, $s3
/* 0044CC7C 256BEE62 */  addiu $t3, %lo(RO_1000EE62) # addiu $t3, $t3, -0x119e
/* 0044CC80 896D0000 */  lwl   $t5, ($t3)
/* 0044CC84 996D0003 */  lwr   $t5, 3($t3)
/* 0044CC88 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044CC8C 02E01025 */  move  $v0, $s7
/* 0044CC90 ABAD0004 */  swl   $t5, 4($sp)
/* 0044CC94 BBAD0007 */  swr   $t5, 7($sp)
/* 0044CC98 896C0004 */  lwl   $t4, 4($t3)
/* 0044CC9C 996C0007 */  lwr   $t4, 7($t3)
/* 0044CCA0 8FA50004 */  lw    $a1, 4($sp)
/* 0044CCA4 ABAC0008 */  swl   $t4, 8($sp)
/* 0044CCA8 BBAC000B */  swr   $t4, 0xb($sp)
/* 0044CCAC 896D0008 */  lwl   $t5, 8($t3)
/* 0044CCB0 996D000B */  lwr   $t5, 0xb($t3)
/* 0044CCB4 8FA60008 */  lw    $a2, 8($sp)
/* 0044CCB8 ABAD000C */  swl   $t5, 0xc($sp)
/* 0044CCBC BBAD000F */  swr   $t5, 0xf($sp)
/* 0044CCC0 896C000C */  lwl   $t4, 0xc($t3)
/* 0044CCC4 996C000F */  lwr   $t4, 0xf($t3)
/* 0044CCC8 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044CCCC ABAC0010 */  swl   $t4, 0x10($sp)
/* 0044CCD0 BBAC0013 */  swr   $t4, 0x13($sp)
/* 0044CCD4 896D0010 */  lwl   $t5, 0x10($t3)
/* 0044CCD8 996D0013 */  lwr   $t5, 0x13($t3)
/* 0044CCDC ABAD0014 */  swl   $t5, 0x14($sp)
/* 0044CCE0 BBAD0017 */  swr   $t5, 0x17($sp)
/* 0044CCE4 896C0014 */  lwl   $t4, 0x14($t3)
/* 0044CCE8 996C0017 */  lwr   $t4, 0x17($t3)
/* 0044CCEC ABAC0018 */  swl   $t4, 0x18($sp)
/* 0044CCF0 BBAC001B */  swr   $t4, 0x1b($sp)
/* 0044CCF4 896D0018 */  lwl   $t5, 0x18($t3)
/* 0044CCF8 996D001B */  lwr   $t5, 0x1b($t3)
/* 0044CCFC ABAD001C */  swl   $t5, 0x1c($sp)
/* 0044CD00 BBAD001F */  swr   $t5, 0x1f($sp)
/* 0044CD04 896C001C */  lwl   $t4, 0x1c($t3)
/* 0044CD08 996C001F */  lwr   $t4, 0x1f($t3)
/* 0044CD0C ABAC0020 */  swl   $t4, 0x20($sp)
/* 0044CD10 0320F809 */  jalr  $t9
/* 0044CD14 BBAC0023 */   swr   $t4, 0x23($sp)
/* 0044CD18 10400004 */  beqz  $v0, .L0044CD2C
/* 0044CD1C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044CD20 8F818A50 */  lw     $at, %got(nooffsetopt)($gp)
/* 0044CD24 1000008D */  b     .L0044CF5C
/* 0044CD28 A0350000 */   sb    $s5, ($at)
.L0044CD2C:
/* 0044CD2C 8F888038 */  lw    $t0, %got(RO_1000EE42)($gp)
/* 0044CD30 02602025 */  move  $a0, $s3
/* 0044CD34 02E01025 */  move  $v0, $s7
/* 0044CD38 2508EE42 */  addiu $t0, %lo(RO_1000EE42) # addiu $t0, $t0, -0x11be
/* 0044CD3C 89190000 */  lwl   $t9, ($t0)
/* 0044CD40 99190003 */  lwr   $t9, 3($t0)
/* 0044CD44 ABB90004 */  swl   $t9, 4($sp)
/* 0044CD48 BBB90007 */  swr   $t9, 7($sp)
/* 0044CD4C 890E0004 */  lwl   $t6, 4($t0)
/* 0044CD50 990E0007 */  lwr   $t6, 7($t0)
/* 0044CD54 8FA50004 */  lw    $a1, 4($sp)
/* 0044CD58 ABAE0008 */  swl   $t6, 8($sp)
/* 0044CD5C BBAE000B */  swr   $t6, 0xb($sp)
/* 0044CD60 89190008 */  lwl   $t9, 8($t0)
/* 0044CD64 9919000B */  lwr   $t9, 0xb($t0)
/* 0044CD68 8FA60008 */  lw    $a2, 8($sp)
/* 0044CD6C ABB9000C */  swl   $t9, 0xc($sp)
/* 0044CD70 BBB9000F */  swr   $t9, 0xf($sp)
/* 0044CD74 890E000C */  lwl   $t6, 0xc($t0)
/* 0044CD78 990E000F */  lwr   $t6, 0xf($t0)
/* 0044CD7C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044CD80 ABAE0010 */  swl   $t6, 0x10($sp)
/* 0044CD84 BBAE0013 */  swr   $t6, 0x13($sp)
/* 0044CD88 89190010 */  lwl   $t9, 0x10($t0)
/* 0044CD8C 99190013 */  lwr   $t9, 0x13($t0)
/* 0044CD90 ABB90014 */  swl   $t9, 0x14($sp)
/* 0044CD94 BBB90017 */  swr   $t9, 0x17($sp)
/* 0044CD98 890E0014 */  lwl   $t6, 0x14($t0)
/* 0044CD9C 990E0017 */  lwr   $t6, 0x17($t0)
/* 0044CDA0 ABAE0018 */  swl   $t6, 0x18($sp)
/* 0044CDA4 BBAE001B */  swr   $t6, 0x1b($sp)
/* 0044CDA8 89190018 */  lwl   $t9, 0x18($t0)
/* 0044CDAC 9919001B */  lwr   $t9, 0x1b($t0)
/* 0044CDB0 ABB9001C */  swl   $t9, 0x1c($sp)
/* 0044CDB4 BBB9001F */  swr   $t9, 0x1f($sp)
/* 0044CDB8 890E001C */  lwl   $t6, 0x1c($t0)
/* 0044CDBC 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044CDC0 990E001F */  lwr   $t6, 0x1f($t0)
/* 0044CDC4 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044CDC8 ABAE0020 */  swl   $t6, 0x20($sp)
/* 0044CDCC 0320F809 */  jalr  $t9
/* 0044CDD0 BBAE0023 */   swr   $t6, 0x23($sp)
/* 0044CDD4 10400004 */  beqz  $v0, .L0044CDE8
/* 0044CDD8 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044CDDC 8F8189E8 */  lw     $at, %got(cpalias_ok)($gp)
/* 0044CDE0 1000005E */  b     .L0044CF5C
/* 0044CDE4 A0200000 */   sb    $zero, ($at)
.L0044CDE8:
/* 0044CDE8 8F8F8038 */  lw    $t7, %got(RO_1000EE22)($gp)
/* 0044CDEC 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044CDF0 02602025 */  move  $a0, $s3
/* 0044CDF4 25EFEE22 */  addiu $t7, %lo(RO_1000EE22) # addiu $t7, $t7, -0x11de
/* 0044CDF8 89E90000 */  lwl   $t1, ($t7)
/* 0044CDFC 99E90003 */  lwr   $t1, 3($t7)
/* 0044CE00 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044CE04 02E01025 */  move  $v0, $s7
/* 0044CE08 ABA90004 */  swl   $t1, 4($sp)
/* 0044CE0C BBA90007 */  swr   $t1, 7($sp)
/* 0044CE10 89F80004 */  lwl   $t8, 4($t7)
/* 0044CE14 99F80007 */  lwr   $t8, 7($t7)
/* 0044CE18 8FA50004 */  lw    $a1, 4($sp)
/* 0044CE1C ABB80008 */  swl   $t8, 8($sp)
/* 0044CE20 BBB8000B */  swr   $t8, 0xb($sp)
/* 0044CE24 89E90008 */  lwl   $t1, 8($t7)
/* 0044CE28 99E9000B */  lwr   $t1, 0xb($t7)
/* 0044CE2C 8FA60008 */  lw    $a2, 8($sp)
/* 0044CE30 ABA9000C */  swl   $t1, 0xc($sp)
/* 0044CE34 BBA9000F */  swr   $t1, 0xf($sp)
/* 0044CE38 89F8000C */  lwl   $t8, 0xc($t7)
/* 0044CE3C 99F8000F */  lwr   $t8, 0xf($t7)
/* 0044CE40 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044CE44 ABB80010 */  swl   $t8, 0x10($sp)
/* 0044CE48 BBB80013 */  swr   $t8, 0x13($sp)
/* 0044CE4C 89E90010 */  lwl   $t1, 0x10($t7)
/* 0044CE50 99E90013 */  lwr   $t1, 0x13($t7)
/* 0044CE54 ABA90014 */  swl   $t1, 0x14($sp)
/* 0044CE58 BBA90017 */  swr   $t1, 0x17($sp)
/* 0044CE5C 89F80014 */  lwl   $t8, 0x14($t7)
/* 0044CE60 99F80017 */  lwr   $t8, 0x17($t7)
/* 0044CE64 ABB80018 */  swl   $t8, 0x18($sp)
/* 0044CE68 BBB8001B */  swr   $t8, 0x1b($sp)
/* 0044CE6C 89E90018 */  lwl   $t1, 0x18($t7)
/* 0044CE70 99E9001B */  lwr   $t1, 0x1b($t7)
/* 0044CE74 ABA9001C */  swl   $t1, 0x1c($sp)
/* 0044CE78 BBA9001F */  swr   $t1, 0x1f($sp)
/* 0044CE7C 89F8001C */  lwl   $t8, 0x1c($t7)
/* 0044CE80 99F8001F */  lwr   $t8, 0x1f($t7)
/* 0044CE84 ABB80020 */  swl   $t8, 0x20($sp)
/* 0044CE88 0320F809 */  jalr  $t9
/* 0044CE8C BBB80023 */   swr   $t8, 0x23($sp)
/* 0044CE90 10400004 */  beqz  $v0, .L0044CEA4
/* 0044CE94 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044CE98 8F818A40 */  lw     $at, %got(tail_call_opt)($gp)
/* 0044CE9C 1000002F */  b     .L0044CF5C
/* 0044CEA0 A0200000 */   sb    $zero, ($at)
.L0044CEA4:
/* 0044CEA4 8F8A8038 */  lw    $t2, %got(RO_1000EE02)($gp)
/* 0044CEA8 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044CEAC 02602025 */  move  $a0, $s3
/* 0044CEB0 254AEE02 */  addiu $t2, %lo(RO_1000EE02) # addiu $t2, $t2, -0x11fe
/* 0044CEB4 894C0000 */  lwl   $t4, ($t2)
/* 0044CEB8 994C0003 */  lwr   $t4, 3($t2)
/* 0044CEBC 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044CEC0 02E01025 */  move  $v0, $s7
/* 0044CEC4 ABAC0004 */  swl   $t4, 4($sp)
/* 0044CEC8 BBAC0007 */  swr   $t4, 7($sp)
/* 0044CECC 894B0004 */  lwl   $t3, 4($t2)
/* 0044CED0 994B0007 */  lwr   $t3, 7($t2)
/* 0044CED4 8FA50004 */  lw    $a1, 4($sp)
/* 0044CED8 ABAB0008 */  swl   $t3, 8($sp)
/* 0044CEDC BBAB000B */  swr   $t3, 0xb($sp)
/* 0044CEE0 894C0008 */  lwl   $t4, 8($t2)
/* 0044CEE4 994C000B */  lwr   $t4, 0xb($t2)
/* 0044CEE8 8FA60008 */  lw    $a2, 8($sp)
/* 0044CEEC ABAC000C */  swl   $t4, 0xc($sp)
/* 0044CEF0 BBAC000F */  swr   $t4, 0xf($sp)
/* 0044CEF4 894B000C */  lwl   $t3, 0xc($t2)
/* 0044CEF8 994B000F */  lwr   $t3, 0xf($t2)
/* 0044CEFC 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044CF00 ABAB0010 */  swl   $t3, 0x10($sp)
/* 0044CF04 BBAB0013 */  swr   $t3, 0x13($sp)
/* 0044CF08 894C0010 */  lwl   $t4, 0x10($t2)
/* 0044CF0C 994C0013 */  lwr   $t4, 0x13($t2)
/* 0044CF10 ABAC0014 */  swl   $t4, 0x14($sp)
/* 0044CF14 BBAC0017 */  swr   $t4, 0x17($sp)
/* 0044CF18 894B0014 */  lwl   $t3, 0x14($t2)
/* 0044CF1C 994B0017 */  lwr   $t3, 0x17($t2)
/* 0044CF20 ABAB0018 */  swl   $t3, 0x18($sp)
/* 0044CF24 BBAB001B */  swr   $t3, 0x1b($sp)
/* 0044CF28 894C0018 */  lwl   $t4, 0x18($t2)
/* 0044CF2C 994C001B */  lwr   $t4, 0x1b($t2)
/* 0044CF30 ABAC001C */  swl   $t4, 0x1c($sp)
/* 0044CF34 BBAC001F */  swr   $t4, 0x1f($sp)
/* 0044CF38 894B001C */  lwl   $t3, 0x1c($t2)
/* 0044CF3C 994B001F */  lwr   $t3, 0x1f($t2)
/* 0044CF40 ABAB0020 */  swl   $t3, 0x20($sp)
/* 0044CF44 0320F809 */  jalr  $t9
/* 0044CF48 BBAB0023 */   swr   $t3, 0x23($sp)
/* 0044CF4C 1040037C */  beqz  $v0, .L0044DD40
/* 0044CF50 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044CF54 8F818A4C */  lw     $at, %got(sgi_unsigned_conv)($gp)
/* 0044CF58 A0200000 */  sb    $zero, ($at)
.L0044CF5C:
/* 0044CF5C 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044CF60 100003B0 */  b     .L0044DE24
/* 0044CF64 8E100000 */   lw    $s0, ($s0)
.L0044CF68:
/* 0044CF68 8F8D8038 */  lw    $t5, %got(RO_1000EDE2)($gp)
/* 0044CF6C 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044CF70 02602025 */  move  $a0, $s3
/* 0044CF74 25ADEDE2 */  addiu $t5, %lo(RO_1000EDE2) # addiu $t5, $t5, -0x121e
/* 0044CF78 89AE0000 */  lwl   $t6, ($t5)
/* 0044CF7C 99AE0003 */  lwr   $t6, 3($t5)
/* 0044CF80 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044CF84 02E01025 */  move  $v0, $s7
/* 0044CF88 ABAE0004 */  swl   $t6, 4($sp)
/* 0044CF8C BBAE0007 */  swr   $t6, 7($sp)
/* 0044CF90 89A80004 */  lwl   $t0, 4($t5)
/* 0044CF94 99A80007 */  lwr   $t0, 7($t5)
/* 0044CF98 8FA50004 */  lw    $a1, 4($sp)
/* 0044CF9C ABA80008 */  swl   $t0, 8($sp)
/* 0044CFA0 BBA8000B */  swr   $t0, 0xb($sp)
/* 0044CFA4 89AE0008 */  lwl   $t6, 8($t5)
/* 0044CFA8 99AE000B */  lwr   $t6, 0xb($t5)
/* 0044CFAC 8FA60008 */  lw    $a2, 8($sp)
/* 0044CFB0 ABAE000C */  swl   $t6, 0xc($sp)
/* 0044CFB4 BBAE000F */  swr   $t6, 0xf($sp)
/* 0044CFB8 89A8000C */  lwl   $t0, 0xc($t5)
/* 0044CFBC 99A8000F */  lwr   $t0, 0xf($t5)
/* 0044CFC0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044CFC4 ABA80010 */  swl   $t0, 0x10($sp)
/* 0044CFC8 BBA80013 */  swr   $t0, 0x13($sp)
/* 0044CFCC 89AE0010 */  lwl   $t6, 0x10($t5)
/* 0044CFD0 99AE0013 */  lwr   $t6, 0x13($t5)
/* 0044CFD4 ABAE0014 */  swl   $t6, 0x14($sp)
/* 0044CFD8 BBAE0017 */  swr   $t6, 0x17($sp)
/* 0044CFDC 89A80014 */  lwl   $t0, 0x14($t5)
/* 0044CFE0 99A80017 */  lwr   $t0, 0x17($t5)
/* 0044CFE4 ABA80018 */  swl   $t0, 0x18($sp)
/* 0044CFE8 BBA8001B */  swr   $t0, 0x1b($sp)
/* 0044CFEC 89AE0018 */  lwl   $t6, 0x18($t5)
/* 0044CFF0 99AE001B */  lwr   $t6, 0x1b($t5)
/* 0044CFF4 ABAE001C */  swl   $t6, 0x1c($sp)
/* 0044CFF8 BBAE001F */  swr   $t6, 0x1f($sp)
/* 0044CFFC 89A8001C */  lwl   $t0, 0x1c($t5)
/* 0044D000 99A8001F */  lwr   $t0, 0x1f($t5)
/* 0044D004 ABA80020 */  swl   $t0, 0x20($sp)
/* 0044D008 0320F809 */  jalr  $t9
/* 0044D00C BBA80023 */   swr   $t0, 0x23($sp)
/* 0044D010 10400004 */  beqz  $v0, .L0044D024
/* 0044D014 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D018 8F8189B8 */  lw     $at, %got(isa)($gp)
/* 0044D01C 10000090 */  b     .L0044D260
/* 0044D020 A0200000 */   sb    $zero, ($at)
.L0044D024:
/* 0044D024 8F998038 */  lw    $t9, %got(RO_1000EDC2)($gp)
/* 0044D028 02602025 */  move  $a0, $s3
/* 0044D02C 02E01025 */  move  $v0, $s7
/* 0044D030 2739EDC2 */  addiu $t9, %lo(RO_1000EDC2) # addiu $t9, $t9, -0x123e
/* 0044D034 8B380000 */  lwl   $t8, ($t9)
/* 0044D038 9B380003 */  lwr   $t8, 3($t9)
/* 0044D03C ABB80004 */  swl   $t8, 4($sp)
/* 0044D040 BBB80007 */  swr   $t8, 7($sp)
/* 0044D044 8B2F0004 */  lwl   $t7, 4($t9)
/* 0044D048 9B2F0007 */  lwr   $t7, 7($t9)
/* 0044D04C 8FA50004 */  lw    $a1, 4($sp)
/* 0044D050 ABAF0008 */  swl   $t7, 8($sp)
/* 0044D054 BBAF000B */  swr   $t7, 0xb($sp)
/* 0044D058 8B380008 */  lwl   $t8, 8($t9)
/* 0044D05C 9B38000B */  lwr   $t8, 0xb($t9)
/* 0044D060 8FA60008 */  lw    $a2, 8($sp)
/* 0044D064 ABB8000C */  swl   $t8, 0xc($sp)
/* 0044D068 BBB8000F */  swr   $t8, 0xf($sp)
/* 0044D06C 8B2F000C */  lwl   $t7, 0xc($t9)
/* 0044D070 9B2F000F */  lwr   $t7, 0xf($t9)
/* 0044D074 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D078 ABAF0010 */  swl   $t7, 0x10($sp)
/* 0044D07C BBAF0013 */  swr   $t7, 0x13($sp)
/* 0044D080 8B380010 */  lwl   $t8, 0x10($t9)
/* 0044D084 9B380013 */  lwr   $t8, 0x13($t9)
/* 0044D088 ABB80014 */  swl   $t8, 0x14($sp)
/* 0044D08C BBB80017 */  swr   $t8, 0x17($sp)
/* 0044D090 8B2F0014 */  lwl   $t7, 0x14($t9)
/* 0044D094 9B2F0017 */  lwr   $t7, 0x17($t9)
/* 0044D098 ABAF0018 */  swl   $t7, 0x18($sp)
/* 0044D09C BBAF001B */  swr   $t7, 0x1b($sp)
/* 0044D0A0 8B380018 */  lwl   $t8, 0x18($t9)
/* 0044D0A4 9B38001B */  lwr   $t8, 0x1b($t9)
/* 0044D0A8 ABB8001C */  swl   $t8, 0x1c($sp)
/* 0044D0AC BBB8001F */  swr   $t8, 0x1f($sp)
/* 0044D0B0 8B2F001C */  lwl   $t7, 0x1c($t9)
/* 0044D0B4 9B2F001F */  lwr   $t7, 0x1f($t9)
/* 0044D0B8 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D0BC ABAF0020 */  swl   $t7, 0x20($sp)
/* 0044D0C0 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D0C4 0320F809 */  jalr  $t9
/* 0044D0C8 BBAF0023 */   swr   $t7, 0x23($sp)
/* 0044D0CC 10400004 */  beqz  $v0, .L0044D0E0
/* 0044D0D0 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D0D4 8F8189B8 */  lw     $at, %got(isa)($gp)
/* 0044D0D8 10000061 */  b     .L0044D260
/* 0044D0DC A0350000 */   sb    $s5, ($at)
.L0044D0E0:
/* 0044D0E0 8F898038 */  lw    $t1, %got(RO_1000EDA2)($gp)
/* 0044D0E4 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D0E8 02602025 */  move  $a0, $s3
/* 0044D0EC 2529EDA2 */  addiu $t1, %lo(RO_1000EDA2) # addiu $t1, $t1, -0x125e
/* 0044D0F0 892B0000 */  lwl   $t3, ($t1)
/* 0044D0F4 992B0003 */  lwr   $t3, 3($t1)
/* 0044D0F8 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D0FC 02E01025 */  move  $v0, $s7
/* 0044D100 ABAB0004 */  swl   $t3, 4($sp)
/* 0044D104 BBAB0007 */  swr   $t3, 7($sp)
/* 0044D108 892A0004 */  lwl   $t2, 4($t1)
/* 0044D10C 992A0007 */  lwr   $t2, 7($t1)
/* 0044D110 8FA50004 */  lw    $a1, 4($sp)
/* 0044D114 ABAA0008 */  swl   $t2, 8($sp)
/* 0044D118 BBAA000B */  swr   $t2, 0xb($sp)
/* 0044D11C 892B0008 */  lwl   $t3, 8($t1)
/* 0044D120 992B000B */  lwr   $t3, 0xb($t1)
/* 0044D124 8FA60008 */  lw    $a2, 8($sp)
/* 0044D128 ABAB000C */  swl   $t3, 0xc($sp)
/* 0044D12C BBAB000F */  swr   $t3, 0xf($sp)
/* 0044D130 892A000C */  lwl   $t2, 0xc($t1)
/* 0044D134 992A000F */  lwr   $t2, 0xf($t1)
/* 0044D138 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D13C ABAA0010 */  swl   $t2, 0x10($sp)
/* 0044D140 BBAA0013 */  swr   $t2, 0x13($sp)
/* 0044D144 892B0010 */  lwl   $t3, 0x10($t1)
/* 0044D148 992B0013 */  lwr   $t3, 0x13($t1)
/* 0044D14C ABAB0014 */  swl   $t3, 0x14($sp)
/* 0044D150 BBAB0017 */  swr   $t3, 0x17($sp)
/* 0044D154 892A0014 */  lwl   $t2, 0x14($t1)
/* 0044D158 992A0017 */  lwr   $t2, 0x17($t1)
/* 0044D15C ABAA0018 */  swl   $t2, 0x18($sp)
/* 0044D160 BBAA001B */  swr   $t2, 0x1b($sp)
/* 0044D164 892B0018 */  lwl   $t3, 0x18($t1)
/* 0044D168 992B001B */  lwr   $t3, 0x1b($t1)
/* 0044D16C ABAB001C */  swl   $t3, 0x1c($sp)
/* 0044D170 BBAB001F */  swr   $t3, 0x1f($sp)
/* 0044D174 892A001C */  lwl   $t2, 0x1c($t1)
/* 0044D178 992A001F */  lwr   $t2, 0x1f($t1)
/* 0044D17C ABAA0020 */  swl   $t2, 0x20($sp)
/* 0044D180 0320F809 */  jalr  $t9
/* 0044D184 BBAA0023 */   swr   $t2, 0x23($sp)
/* 0044D188 10400007 */  beqz  $v0, .L0044D1A8
/* 0044D18C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D190 8F8189B8 */  lw     $at, %got(isa)($gp)
/* 0044D194 240C0002 */  li    $t4, 2
/* 0044D198 A02C0000 */  sb    $t4, ($at)
/* 0044D19C 8F8189D8 */  lw     $at, %got(opcode_arch)($gp)
/* 0044D1A0 1000002F */  b     .L0044D260
/* 0044D1A4 A0350000 */   sb    $s5, ($at)
.L0044D1A8:
/* 0044D1A8 8F8D8038 */  lw    $t5, %got(RO_1000ED82)($gp)
/* 0044D1AC 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D1B0 02602025 */  move  $a0, $s3
/* 0044D1B4 25ADED82 */  addiu $t5, %lo(RO_1000ED82) # addiu $t5, $t5, -0x127e
/* 0044D1B8 89AE0000 */  lwl   $t6, ($t5)
/* 0044D1BC 99AE0003 */  lwr   $t6, 3($t5)
/* 0044D1C0 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D1C4 02E01025 */  move  $v0, $s7
/* 0044D1C8 ABAE0004 */  swl   $t6, 4($sp)
/* 0044D1CC BBAE0007 */  swr   $t6, 7($sp)
/* 0044D1D0 89A80004 */  lwl   $t0, 4($t5)
/* 0044D1D4 99A80007 */  lwr   $t0, 7($t5)
/* 0044D1D8 8FA50004 */  lw    $a1, 4($sp)
/* 0044D1DC ABA80008 */  swl   $t0, 8($sp)
/* 0044D1E0 BBA8000B */  swr   $t0, 0xb($sp)
/* 0044D1E4 89AE0008 */  lwl   $t6, 8($t5)
/* 0044D1E8 99AE000B */  lwr   $t6, 0xb($t5)
/* 0044D1EC 8FA60008 */  lw    $a2, 8($sp)
/* 0044D1F0 ABAE000C */  swl   $t6, 0xc($sp)
/* 0044D1F4 BBAE000F */  swr   $t6, 0xf($sp)
/* 0044D1F8 89A8000C */  lwl   $t0, 0xc($t5)
/* 0044D1FC 99A8000F */  lwr   $t0, 0xf($t5)
/* 0044D200 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D204 ABA80010 */  swl   $t0, 0x10($sp)
/* 0044D208 BBA80013 */  swr   $t0, 0x13($sp)
/* 0044D20C 89AE0010 */  lwl   $t6, 0x10($t5)
/* 0044D210 99AE0013 */  lwr   $t6, 0x13($t5)
/* 0044D214 ABAE0014 */  swl   $t6, 0x14($sp)
/* 0044D218 BBAE0017 */  swr   $t6, 0x17($sp)
/* 0044D21C 89A80014 */  lwl   $t0, 0x14($t5)
/* 0044D220 99A80017 */  lwr   $t0, 0x17($t5)
/* 0044D224 ABA80018 */  swl   $t0, 0x18($sp)
/* 0044D228 BBA8001B */  swr   $t0, 0x1b($sp)
/* 0044D22C 89AE0018 */  lwl   $t6, 0x18($t5)
/* 0044D230 99AE001B */  lwr   $t6, 0x1b($t5)
/* 0044D234 ABAE001C */  swl   $t6, 0x1c($sp)
/* 0044D238 BBAE001F */  swr   $t6, 0x1f($sp)
/* 0044D23C 89A8001C */  lwl   $t0, 0x1c($t5)
/* 0044D240 99A8001F */  lwr   $t0, 0x1f($t5)
/* 0044D244 ABA80020 */  swl   $t0, 0x20($sp)
/* 0044D248 0320F809 */  jalr  $t9
/* 0044D24C BBA80023 */   swr   $t0, 0x23($sp)
/* 0044D250 104002BB */  beqz  $v0, .L0044DD40
/* 0044D254 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D258 8F8189D0 */  lw     $at, %got(mscoff)($gp)
/* 0044D25C A0350000 */  sb    $s5, ($at)
.L0044D260:
/* 0044D260 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044D264 100002EF */  b     .L0044DE24
/* 0044D268 8E100000 */   lw    $s0, ($s0)
.L0044D26C:
/* 0044D26C 8F998038 */  lw    $t9, %got(RO_1000ED62)($gp)
/* 0044D270 02602025 */  move  $a0, $s3
/* 0044D274 02E01025 */  move  $v0, $s7
/* 0044D278 2739ED62 */  addiu $t9, %lo(RO_1000ED62) # addiu $t9, $t9, -0x129e
/* 0044D27C 8B380000 */  lwl   $t8, ($t9)
/* 0044D280 9B380003 */  lwr   $t8, 3($t9)
/* 0044D284 ABB80004 */  swl   $t8, 4($sp)
/* 0044D288 BBB80007 */  swr   $t8, 7($sp)
/* 0044D28C 8B2F0004 */  lwl   $t7, 4($t9)
/* 0044D290 9B2F0007 */  lwr   $t7, 7($t9)
/* 0044D294 8FA50004 */  lw    $a1, 4($sp)
/* 0044D298 ABAF0008 */  swl   $t7, 8($sp)
/* 0044D29C BBAF000B */  swr   $t7, 0xb($sp)
/* 0044D2A0 8B380008 */  lwl   $t8, 8($t9)
/* 0044D2A4 9B38000B */  lwr   $t8, 0xb($t9)
/* 0044D2A8 8FA60008 */  lw    $a2, 8($sp)
/* 0044D2AC ABB8000C */  swl   $t8, 0xc($sp)
/* 0044D2B0 BBB8000F */  swr   $t8, 0xf($sp)
/* 0044D2B4 8B2F000C */  lwl   $t7, 0xc($t9)
/* 0044D2B8 9B2F000F */  lwr   $t7, 0xf($t9)
/* 0044D2BC 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D2C0 ABAF0010 */  swl   $t7, 0x10($sp)
/* 0044D2C4 BBAF0013 */  swr   $t7, 0x13($sp)
/* 0044D2C8 8B380010 */  lwl   $t8, 0x10($t9)
/* 0044D2CC 9B380013 */  lwr   $t8, 0x13($t9)
/* 0044D2D0 ABB80014 */  swl   $t8, 0x14($sp)
/* 0044D2D4 BBB80017 */  swr   $t8, 0x17($sp)
/* 0044D2D8 8B2F0014 */  lwl   $t7, 0x14($t9)
/* 0044D2DC 9B2F0017 */  lwr   $t7, 0x17($t9)
/* 0044D2E0 ABAF0018 */  swl   $t7, 0x18($sp)
/* 0044D2E4 BBAF001B */  swr   $t7, 0x1b($sp)
/* 0044D2E8 8B380018 */  lwl   $t8, 0x18($t9)
/* 0044D2EC 9B38001B */  lwr   $t8, 0x1b($t9)
/* 0044D2F0 ABB8001C */  swl   $t8, 0x1c($sp)
/* 0044D2F4 BBB8001F */  swr   $t8, 0x1f($sp)
/* 0044D2F8 8B2F001C */  lwl   $t7, 0x1c($t9)
/* 0044D2FC 9B2F001F */  lwr   $t7, 0x1f($t9)
/* 0044D300 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D304 ABAF0020 */  swl   $t7, 0x20($sp)
/* 0044D308 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D30C 0320F809 */  jalr  $t9
/* 0044D310 BBAF0023 */   swr   $t7, 0x23($sp)
/* 0044D314 10400004 */  beqz  $v0, .L0044D328
/* 0044D318 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D31C 8F8189E4 */  lw     $at, %got(pic_level)($gp)
/* 0044D320 1000008C */  b     .L0044D554
/* 0044D324 AC200000 */   sw    $zero, ($at)
.L0044D328:
/* 0044D328 8F898038 */  lw    $t1, %got(RO_1000ED42)($gp)
/* 0044D32C 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D330 02602025 */  move  $a0, $s3
/* 0044D334 2529ED42 */  addiu $t1, %lo(RO_1000ED42) # addiu $t1, $t1, -0x12be
/* 0044D338 892B0000 */  lwl   $t3, ($t1)
/* 0044D33C 992B0003 */  lwr   $t3, 3($t1)
/* 0044D340 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D344 02E01025 */  move  $v0, $s7
/* 0044D348 ABAB0004 */  swl   $t3, 4($sp)
/* 0044D34C BBAB0007 */  swr   $t3, 7($sp)
/* 0044D350 892A0004 */  lwl   $t2, 4($t1)
/* 0044D354 992A0007 */  lwr   $t2, 7($t1)
/* 0044D358 8FA50004 */  lw    $a1, 4($sp)
/* 0044D35C ABAA0008 */  swl   $t2, 8($sp)
/* 0044D360 BBAA000B */  swr   $t2, 0xb($sp)
/* 0044D364 892B0008 */  lwl   $t3, 8($t1)
/* 0044D368 992B000B */  lwr   $t3, 0xb($t1)
/* 0044D36C 8FA60008 */  lw    $a2, 8($sp)
/* 0044D370 ABAB000C */  swl   $t3, 0xc($sp)
/* 0044D374 BBAB000F */  swr   $t3, 0xf($sp)
/* 0044D378 892A000C */  lwl   $t2, 0xc($t1)
/* 0044D37C 992A000F */  lwr   $t2, 0xf($t1)
/* 0044D380 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D384 ABAA0010 */  swl   $t2, 0x10($sp)
/* 0044D388 BBAA0013 */  swr   $t2, 0x13($sp)
/* 0044D38C 892B0010 */  lwl   $t3, 0x10($t1)
/* 0044D390 992B0013 */  lwr   $t3, 0x13($t1)
/* 0044D394 ABAB0014 */  swl   $t3, 0x14($sp)
/* 0044D398 BBAB0017 */  swr   $t3, 0x17($sp)
/* 0044D39C 892A0014 */  lwl   $t2, 0x14($t1)
/* 0044D3A0 992A0017 */  lwr   $t2, 0x17($t1)
/* 0044D3A4 ABAA0018 */  swl   $t2, 0x18($sp)
/* 0044D3A8 BBAA001B */  swr   $t2, 0x1b($sp)
/* 0044D3AC 892B0018 */  lwl   $t3, 0x18($t1)
/* 0044D3B0 992B001B */  lwr   $t3, 0x1b($t1)
/* 0044D3B4 ABAB001C */  swl   $t3, 0x1c($sp)
/* 0044D3B8 BBAB001F */  swr   $t3, 0x1f($sp)
/* 0044D3BC 892A001C */  lwl   $t2, 0x1c($t1)
/* 0044D3C0 992A001F */  lwr   $t2, 0x1f($t1)
/* 0044D3C4 ABAA0020 */  swl   $t2, 0x20($sp)
/* 0044D3C8 0320F809 */  jalr  $t9
/* 0044D3CC BBAA0023 */   swr   $t2, 0x23($sp)
/* 0044D3D0 1440002D */  bnez  $v0, .L0044D488
/* 0044D3D4 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D3D8 8F8C8038 */  lw    $t4, %got(RO_1000ED22)($gp)
/* 0044D3DC 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D3E0 02602025 */  move  $a0, $s3
/* 0044D3E4 258CED22 */  addiu $t4, %lo(RO_1000ED22) # addiu $t4, $t4, -0x12de
/* 0044D3E8 89880000 */  lwl   $t0, ($t4)
/* 0044D3EC 99880003 */  lwr   $t0, 3($t4)
/* 0044D3F0 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D3F4 02E01025 */  move  $v0, $s7
/* 0044D3F8 ABA80004 */  swl   $t0, 4($sp)
/* 0044D3FC BBA80007 */  swr   $t0, 7($sp)
/* 0044D400 898D0004 */  lwl   $t5, 4($t4)
/* 0044D404 998D0007 */  lwr   $t5, 7($t4)
/* 0044D408 8FA50004 */  lw    $a1, 4($sp)
/* 0044D40C ABAD0008 */  swl   $t5, 8($sp)
/* 0044D410 BBAD000B */  swr   $t5, 0xb($sp)
/* 0044D414 89880008 */  lwl   $t0, 8($t4)
/* 0044D418 9988000B */  lwr   $t0, 0xb($t4)
/* 0044D41C 8FA60008 */  lw    $a2, 8($sp)
/* 0044D420 ABA8000C */  swl   $t0, 0xc($sp)
/* 0044D424 BBA8000F */  swr   $t0, 0xf($sp)
/* 0044D428 898D000C */  lwl   $t5, 0xc($t4)
/* 0044D42C 998D000F */  lwr   $t5, 0xf($t4)
/* 0044D430 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D434 ABAD0010 */  swl   $t5, 0x10($sp)
/* 0044D438 BBAD0013 */  swr   $t5, 0x13($sp)
/* 0044D43C 89880010 */  lwl   $t0, 0x10($t4)
/* 0044D440 99880013 */  lwr   $t0, 0x13($t4)
/* 0044D444 ABA80014 */  swl   $t0, 0x14($sp)
/* 0044D448 BBA80017 */  swr   $t0, 0x17($sp)
/* 0044D44C 898D0014 */  lwl   $t5, 0x14($t4)
/* 0044D450 998D0017 */  lwr   $t5, 0x17($t4)
/* 0044D454 ABAD0018 */  swl   $t5, 0x18($sp)
/* 0044D458 BBAD001B */  swr   $t5, 0x1b($sp)
/* 0044D45C 89880018 */  lwl   $t0, 0x18($t4)
/* 0044D460 9988001B */  lwr   $t0, 0x1b($t4)
/* 0044D464 ABA8001C */  swl   $t0, 0x1c($sp)
/* 0044D468 BBA8001F */  swr   $t0, 0x1f($sp)
/* 0044D46C 898D001C */  lwl   $t5, 0x1c($t4)
/* 0044D470 998D001F */  lwr   $t5, 0x1f($t4)
/* 0044D474 ABAD0020 */  swl   $t5, 0x20($sp)
/* 0044D478 0320F809 */  jalr  $t9
/* 0044D47C BBAD0023 */   swr   $t5, 0x23($sp)
/* 0044D480 10400005 */  beqz  $v0, .L0044D498
/* 0044D484 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044D488:
/* 0044D488 8F8189E4 */  lw     $at, %got(pic_level)($gp)
/* 0044D48C 240E0001 */  li    $t6, 1
/* 0044D490 10000030 */  b     .L0044D554
/* 0044D494 AC2E0000 */   sw    $t6, ($at)
.L0044D498:
/* 0044D498 8F998038 */  lw    $t9, %got(RO_1000ED02)($gp)
/* 0044D49C 02602025 */  move  $a0, $s3
/* 0044D4A0 02E01025 */  move  $v0, $s7
/* 0044D4A4 2739ED02 */  addiu $t9, %lo(RO_1000ED02) # addiu $t9, $t9, -0x12fe
/* 0044D4A8 8B380000 */  lwl   $t8, ($t9)
/* 0044D4AC 9B380003 */  lwr   $t8, 3($t9)
/* 0044D4B0 ABB80004 */  swl   $t8, 4($sp)
/* 0044D4B4 BBB80007 */  swr   $t8, 7($sp)
/* 0044D4B8 8B2F0004 */  lwl   $t7, 4($t9)
/* 0044D4BC 9B2F0007 */  lwr   $t7, 7($t9)
/* 0044D4C0 8FA50004 */  lw    $a1, 4($sp)
/* 0044D4C4 ABAF0008 */  swl   $t7, 8($sp)
/* 0044D4C8 BBAF000B */  swr   $t7, 0xb($sp)
/* 0044D4CC 8B380008 */  lwl   $t8, 8($t9)
/* 0044D4D0 9B38000B */  lwr   $t8, 0xb($t9)
/* 0044D4D4 8FA60008 */  lw    $a2, 8($sp)
/* 0044D4D8 ABB8000C */  swl   $t8, 0xc($sp)
/* 0044D4DC BBB8000F */  swr   $t8, 0xf($sp)
/* 0044D4E0 8B2F000C */  lwl   $t7, 0xc($t9)
/* 0044D4E4 9B2F000F */  lwr   $t7, 0xf($t9)
/* 0044D4E8 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D4EC ABAF0010 */  swl   $t7, 0x10($sp)
/* 0044D4F0 BBAF0013 */  swr   $t7, 0x13($sp)
/* 0044D4F4 8B380010 */  lwl   $t8, 0x10($t9)
/* 0044D4F8 9B380013 */  lwr   $t8, 0x13($t9)
/* 0044D4FC ABB80014 */  swl   $t8, 0x14($sp)
/* 0044D500 BBB80017 */  swr   $t8, 0x17($sp)
/* 0044D504 8B2F0014 */  lwl   $t7, 0x14($t9)
/* 0044D508 9B2F0017 */  lwr   $t7, 0x17($t9)
/* 0044D50C ABAF0018 */  swl   $t7, 0x18($sp)
/* 0044D510 BBAF001B */  swr   $t7, 0x1b($sp)
/* 0044D514 8B380018 */  lwl   $t8, 0x18($t9)
/* 0044D518 9B38001B */  lwr   $t8, 0x1b($t9)
/* 0044D51C ABB8001C */  swl   $t8, 0x1c($sp)
/* 0044D520 BBB8001F */  swr   $t8, 0x1f($sp)
/* 0044D524 8B2F001C */  lwl   $t7, 0x1c($t9)
/* 0044D528 9B2F001F */  lwr   $t7, 0x1f($t9)
/* 0044D52C 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D530 ABAF0020 */  swl   $t7, 0x20($sp)
/* 0044D534 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D538 0320F809 */  jalr  $t9
/* 0044D53C BBAF0023 */   swr   $t7, 0x23($sp)
/* 0044D540 104001FF */  beqz  $v0, .L0044DD40
/* 0044D544 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D548 8F8189E4 */  lw     $at, %got(pic_level)($gp)
/* 0044D54C 24090002 */  li    $t1, 2
/* 0044D550 AC290000 */  sw    $t1, ($at)
.L0044D554:
/* 0044D554 8F8A89E4 */  lw     $t2, %got(pic_level)($gp)
/* 0044D558 8D4A0000 */  lw    $t2, ($t2)
/* 0044D55C 29410002 */  slti  $at, $t2, 2
/* 0044D560 14200014 */  bnez  $at, .L0044D5B4
/* 0044D564 00000000 */   nop   
/* 0044D568 8F8B89EC */  lw     $t3, %got(saw_cap_g)($gp)
/* 0044D56C 8F818990 */  lw     $at, %got(sdata_max)($gp)
/* 0044D570 24060025 */  li    $a2, 37
/* 0044D574 916B0000 */  lbu   $t3, ($t3)
/* 0044D578 24070025 */  li    $a3, 37
/* 0044D57C AC200000 */  sw    $zero, ($at)
/* 0044D580 1160000C */  beqz  $t3, .L0044D5B4
/* 0044D584 00000000 */   nop   
/* 0044D588 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044D58C 8F858038 */  lw    $a1, %got(RO_1000ECDD)($gp)
/* 0044D590 8EC40000 */  lw    $a0, ($s6)
/* 0044D594 0320F809 */  jalr  $t9
/* 0044D598 24A5ECDD */   addiu $a1, %lo(RO_1000ECDD) # addiu $a1, $a1, -0x1323
/* 0044D59C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044D5A0 8EC40000 */  lw    $a0, ($s6)
/* 0044D5A4 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044D5A8 0320F809 */  jalr  $t9
/* 0044D5AC 00000000 */   nop   
/* 0044D5B0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044D5B4:
/* 0044D5B4 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044D5B8 1000021A */  b     .L0044DE24
/* 0044D5BC 8E100000 */   lw    $s0, ($s0)
.L0044D5C0:
/* 0044D5C0 93A30540 */  lbu   $v1, 0x540($sp)
/* 0044D5C4 24010070 */  li    $at, 112
/* 0044D5C8 93AC0541 */  lbu   $t4, 0x541($sp)
/* 0044D5CC 14610006 */  bne   $v1, $at, .L0044D5E8
/* 0044D5D0 24010063 */   li    $at, 99
/* 0044D5D4 15810004 */  bne   $t4, $at, .L0044D5E8
/* 0044D5D8 00000000 */   nop   
/* 0044D5DC 8F8189BC */  lw     $at, %got(apc)($gp)
/* 0044D5E0 10000210 */  b     .L0044DE24
/* 0044D5E4 A0350000 */   sb    $s5, ($at)
.L0044D5E8:
/* 0044D5E8 8F8D8038 */  lw    $t5, %got(RO_1000ECBD)($gp)
/* 0044D5EC 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D5F0 02602025 */  move  $a0, $s3
/* 0044D5F4 25ADECBD */  addiu $t5, %lo(RO_1000ECBD) # addiu $t5, $t5, -0x1343
/* 0044D5F8 89AE0000 */  lwl   $t6, ($t5)
/* 0044D5FC 99AE0003 */  lwr   $t6, 3($t5)
/* 0044D600 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D604 02E01025 */  move  $v0, $s7
/* 0044D608 ABAE0004 */  swl   $t6, 4($sp)
/* 0044D60C BBAE0007 */  swr   $t6, 7($sp)
/* 0044D610 89A80004 */  lwl   $t0, 4($t5)
/* 0044D614 99A80007 */  lwr   $t0, 7($t5)
/* 0044D618 8FA50004 */  lw    $a1, 4($sp)
/* 0044D61C ABA80008 */  swl   $t0, 8($sp)
/* 0044D620 BBA8000B */  swr   $t0, 0xb($sp)
/* 0044D624 89AE0008 */  lwl   $t6, 8($t5)
/* 0044D628 99AE000B */  lwr   $t6, 0xb($t5)
/* 0044D62C 8FA60008 */  lw    $a2, 8($sp)
/* 0044D630 ABAE000C */  swl   $t6, 0xc($sp)
/* 0044D634 BBAE000F */  swr   $t6, 0xf($sp)
/* 0044D638 89A8000C */  lwl   $t0, 0xc($t5)
/* 0044D63C 99A8000F */  lwr   $t0, 0xf($t5)
/* 0044D640 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D644 ABA80010 */  swl   $t0, 0x10($sp)
/* 0044D648 BBA80013 */  swr   $t0, 0x13($sp)
/* 0044D64C 89AE0010 */  lwl   $t6, 0x10($t5)
/* 0044D650 99AE0013 */  lwr   $t6, 0x13($t5)
/* 0044D654 ABAE0014 */  swl   $t6, 0x14($sp)
/* 0044D658 BBAE0017 */  swr   $t6, 0x17($sp)
/* 0044D65C 89A80014 */  lwl   $t0, 0x14($t5)
/* 0044D660 99A80017 */  lwr   $t0, 0x17($t5)
/* 0044D664 ABA80018 */  swl   $t0, 0x18($sp)
/* 0044D668 BBA8001B */  swr   $t0, 0x1b($sp)
/* 0044D66C 89AE0018 */  lwl   $t6, 0x18($t5)
/* 0044D670 99AE001B */  lwr   $t6, 0x1b($t5)
/* 0044D674 ABAE001C */  swl   $t6, 0x1c($sp)
/* 0044D678 BBAE001F */  swr   $t6, 0x1f($sp)
/* 0044D67C 89A8001C */  lwl   $t0, 0x1c($t5)
/* 0044D680 99A8001F */  lwr   $t0, 0x1f($t5)
/* 0044D684 ABA80020 */  swl   $t0, 0x20($sp)
/* 0044D688 0320F809 */  jalr  $t9
/* 0044D68C BBA80023 */   swr   $t0, 0x23($sp)
/* 0044D690 10400006 */  beqz  $v0, .L0044D6AC
/* 0044D694 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D698 8F8189C0 */  lw     $at, %got(align8)($gp)
/* 0044D69C 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044D6A0 A0350000 */  sb    $s5, ($at)
/* 0044D6A4 100001DF */  b     .L0044DE24
/* 0044D6A8 8E100000 */   lw    $s0, ($s0)
.L0044D6AC:
/* 0044D6AC 8F998038 */  lw    $t9, %got(RO_1000EC9D)($gp)
/* 0044D6B0 02602025 */  move  $a0, $s3
/* 0044D6B4 02E01025 */  move  $v0, $s7
/* 0044D6B8 2739EC9D */  addiu $t9, %lo(RO_1000EC9D) # addiu $t9, $t9, -0x1363
/* 0044D6BC 8B380000 */  lwl   $t8, ($t9)
/* 0044D6C0 9B380003 */  lwr   $t8, 3($t9)
/* 0044D6C4 ABB80004 */  swl   $t8, 4($sp)
/* 0044D6C8 BBB80007 */  swr   $t8, 7($sp)
/* 0044D6CC 8B2F0004 */  lwl   $t7, 4($t9)
/* 0044D6D0 9B2F0007 */  lwr   $t7, 7($t9)
/* 0044D6D4 8FA50004 */  lw    $a1, 4($sp)
/* 0044D6D8 ABAF0008 */  swl   $t7, 8($sp)
/* 0044D6DC BBAF000B */  swr   $t7, 0xb($sp)
/* 0044D6E0 8B380008 */  lwl   $t8, 8($t9)
/* 0044D6E4 9B38000B */  lwr   $t8, 0xb($t9)
/* 0044D6E8 8FA60008 */  lw    $a2, 8($sp)
/* 0044D6EC ABB8000C */  swl   $t8, 0xc($sp)
/* 0044D6F0 BBB8000F */  swr   $t8, 0xf($sp)
/* 0044D6F4 8B2F000C */  lwl   $t7, 0xc($t9)
/* 0044D6F8 9B2F000F */  lwr   $t7, 0xf($t9)
/* 0044D6FC 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D700 ABAF0010 */  swl   $t7, 0x10($sp)
/* 0044D704 BBAF0013 */  swr   $t7, 0x13($sp)
/* 0044D708 8B380010 */  lwl   $t8, 0x10($t9)
/* 0044D70C 9B380013 */  lwr   $t8, 0x13($t9)
/* 0044D710 ABB80014 */  swl   $t8, 0x14($sp)
/* 0044D714 BBB80017 */  swr   $t8, 0x17($sp)
/* 0044D718 8B2F0014 */  lwl   $t7, 0x14($t9)
/* 0044D71C 9B2F0017 */  lwr   $t7, 0x17($t9)
/* 0044D720 ABAF0018 */  swl   $t7, 0x18($sp)
/* 0044D724 BBAF001B */  swr   $t7, 0x1b($sp)
/* 0044D728 8B380018 */  lwl   $t8, 0x18($t9)
/* 0044D72C 9B38001B */  lwr   $t8, 0x1b($t9)
/* 0044D730 ABB8001C */  swl   $t8, 0x1c($sp)
/* 0044D734 BBB8001F */  swr   $t8, 0x1f($sp)
/* 0044D738 8B2F001C */  lwl   $t7, 0x1c($t9)
/* 0044D73C 9B2F001F */  lwr   $t7, 0x1f($t9)
/* 0044D740 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D744 ABAF0020 */  swl   $t7, 0x20($sp)
/* 0044D748 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D74C 0320F809 */  jalr  $t9
/* 0044D750 BBAF0023 */   swr   $t7, 0x23($sp)
/* 0044D754 10400006 */  beqz  $v0, .L0044D770
/* 0044D758 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D75C 8F8189C4 */  lw     $at, %got(align16)($gp)
/* 0044D760 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044D764 A0350000 */  sb    $s5, ($at)
/* 0044D768 100001AE */  b     .L0044DE24
/* 0044D76C 8E100000 */   lw    $s0, ($s0)
.L0044D770:
/* 0044D770 8F898038 */  lw    $t1, %got(RO_1000EC7D)($gp)
/* 0044D774 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D778 02602025 */  move  $a0, $s3
/* 0044D77C 2529EC7D */  addiu $t1, %lo(RO_1000EC7D) # addiu $t1, $t1, -0x1383
/* 0044D780 892B0000 */  lwl   $t3, ($t1)
/* 0044D784 992B0003 */  lwr   $t3, 3($t1)
/* 0044D788 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D78C 02E01025 */  move  $v0, $s7
/* 0044D790 ABAB0004 */  swl   $t3, 4($sp)
/* 0044D794 BBAB0007 */  swr   $t3, 7($sp)
/* 0044D798 892A0004 */  lwl   $t2, 4($t1)
/* 0044D79C 992A0007 */  lwr   $t2, 7($t1)
/* 0044D7A0 8FA50004 */  lw    $a1, 4($sp)
/* 0044D7A4 ABAA0008 */  swl   $t2, 8($sp)
/* 0044D7A8 BBAA000B */  swr   $t2, 0xb($sp)
/* 0044D7AC 892B0008 */  lwl   $t3, 8($t1)
/* 0044D7B0 992B000B */  lwr   $t3, 0xb($t1)
/* 0044D7B4 8FA60008 */  lw    $a2, 8($sp)
/* 0044D7B8 ABAB000C */  swl   $t3, 0xc($sp)
/* 0044D7BC BBAB000F */  swr   $t3, 0xf($sp)
/* 0044D7C0 892A000C */  lwl   $t2, 0xc($t1)
/* 0044D7C4 992A000F */  lwr   $t2, 0xf($t1)
/* 0044D7C8 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D7CC ABAA0010 */  swl   $t2, 0x10($sp)
/* 0044D7D0 BBAA0013 */  swr   $t2, 0x13($sp)
/* 0044D7D4 892B0010 */  lwl   $t3, 0x10($t1)
/* 0044D7D8 992B0013 */  lwr   $t3, 0x13($t1)
/* 0044D7DC ABAB0014 */  swl   $t3, 0x14($sp)
/* 0044D7E0 BBAB0017 */  swr   $t3, 0x17($sp)
/* 0044D7E4 892A0014 */  lwl   $t2, 0x14($t1)
/* 0044D7E8 992A0017 */  lwr   $t2, 0x17($t1)
/* 0044D7EC ABAA0018 */  swl   $t2, 0x18($sp)
/* 0044D7F0 BBAA001B */  swr   $t2, 0x1b($sp)
/* 0044D7F4 892B0018 */  lwl   $t3, 0x18($t1)
/* 0044D7F8 992B001B */  lwr   $t3, 0x1b($t1)
/* 0044D7FC ABAB001C */  swl   $t3, 0x1c($sp)
/* 0044D800 BBAB001F */  swr   $t3, 0x1f($sp)
/* 0044D804 892A001C */  lwl   $t2, 0x1c($t1)
/* 0044D808 992A001F */  lwr   $t2, 0x1f($t1)
/* 0044D80C ABAA0020 */  swl   $t2, 0x20($sp)
/* 0044D810 0320F809 */  jalr  $t9
/* 0044D814 BBAA0023 */   swr   $t2, 0x23($sp)
/* 0044D818 10400006 */  beqz  $v0, .L0044D834
/* 0044D81C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D820 8F8189C8 */  lw     $at, %got(align32)($gp)
/* 0044D824 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044D828 A0350000 */  sb    $s5, ($at)
/* 0044D82C 1000017D */  b     .L0044DE24
/* 0044D830 8E100000 */   lw    $s0, ($s0)
.L0044D834:
/* 0044D834 8F8C8038 */  lw    $t4, %got(RO_1000EC5D)($gp)
/* 0044D838 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D83C 02602025 */  move  $a0, $s3
/* 0044D840 258CEC5D */  addiu $t4, %lo(RO_1000EC5D) # addiu $t4, $t4, -0x13a3
/* 0044D844 89880000 */  lwl   $t0, ($t4)
/* 0044D848 99880003 */  lwr   $t0, 3($t4)
/* 0044D84C 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D850 02E01025 */  move  $v0, $s7
/* 0044D854 ABA80004 */  swl   $t0, 4($sp)
/* 0044D858 BBA80007 */  swr   $t0, 7($sp)
/* 0044D85C 898D0004 */  lwl   $t5, 4($t4)
/* 0044D860 998D0007 */  lwr   $t5, 7($t4)
/* 0044D864 8FA50004 */  lw    $a1, 4($sp)
/* 0044D868 ABAD0008 */  swl   $t5, 8($sp)
/* 0044D86C BBAD000B */  swr   $t5, 0xb($sp)
/* 0044D870 89880008 */  lwl   $t0, 8($t4)
/* 0044D874 9988000B */  lwr   $t0, 0xb($t4)
/* 0044D878 8FA60008 */  lw    $a2, 8($sp)
/* 0044D87C ABA8000C */  swl   $t0, 0xc($sp)
/* 0044D880 BBA8000F */  swr   $t0, 0xf($sp)
/* 0044D884 898D000C */  lwl   $t5, 0xc($t4)
/* 0044D888 998D000F */  lwr   $t5, 0xf($t4)
/* 0044D88C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D890 ABAD0010 */  swl   $t5, 0x10($sp)
/* 0044D894 BBAD0013 */  swr   $t5, 0x13($sp)
/* 0044D898 89880010 */  lwl   $t0, 0x10($t4)
/* 0044D89C 99880013 */  lwr   $t0, 0x13($t4)
/* 0044D8A0 ABA80014 */  swl   $t0, 0x14($sp)
/* 0044D8A4 BBA80017 */  swr   $t0, 0x17($sp)
/* 0044D8A8 898D0014 */  lwl   $t5, 0x14($t4)
/* 0044D8AC 998D0017 */  lwr   $t5, 0x17($t4)
/* 0044D8B0 ABAD0018 */  swl   $t5, 0x18($sp)
/* 0044D8B4 BBAD001B */  swr   $t5, 0x1b($sp)
/* 0044D8B8 89880018 */  lwl   $t0, 0x18($t4)
/* 0044D8BC 9988001B */  lwr   $t0, 0x1b($t4)
/* 0044D8C0 ABA8001C */  swl   $t0, 0x1c($sp)
/* 0044D8C4 BBA8001F */  swr   $t0, 0x1f($sp)
/* 0044D8C8 898D001C */  lwl   $t5, 0x1c($t4)
/* 0044D8CC 998D001F */  lwr   $t5, 0x1f($t4)
/* 0044D8D0 ABAD0020 */  swl   $t5, 0x20($sp)
/* 0044D8D4 0320F809 */  jalr  $t9
/* 0044D8D8 BBAD0023 */   swr   $t5, 0x23($sp)
/* 0044D8DC 10400118 */  beqz  $v0, .L0044DD40
/* 0044D8E0 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044D8E4 8F8189CC */  lw     $at, %got(align64)($gp)
/* 0044D8E8 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044D8EC A0350000 */  sb    $s5, ($at)
/* 0044D8F0 1000014C */  b     .L0044DE24
/* 0044D8F4 8E100000 */   lw    $s0, ($s0)
.L0044D8F8:
/* 0044D8F8 93A20540 */  lbu   $v0, 0x540($sp)
/* 0044D8FC 244EFFCF */  addiu $t6, $v0, -0x31
/* 0044D900 2DC10003 */  sltiu $at, $t6, 3
/* 0044D904 10200014 */  beqz  $at, .L0044D958
/* 0044D908 00000000 */   nop   
/* 0044D90C 8F818038 */  lw    $at, %got(jtbl_1000F47C)($gp)
/* 0044D910 000E7080 */  sll   $t6, $t6, 2
/* 0044D914 002E0821 */  addu  $at, $at, $t6
/* 0044D918 8C2EF47C */  lw    $t6, %lo(jtbl_1000F47C)($at)
/* 0044D91C 01DC7021 */  addu  $t6, $t6, $gp
/* 0044D920 01C00008 */  jr    $t6
/* 0044D924 00000000 */   nop   
.L0044D928:
/* 0044D928 8F818964 */  lw     $at, %got(print_warnings)($gp)
/* 0044D92C AFB50510 */  sw    $s5, 0x510($sp)
/* 0044D930 1000013C */  b     .L0044DE24
/* 0044D934 A0200000 */   sb    $zero, ($at)
.L0044D938:
/* 0044D938 24190002 */  li    $t9, 2
/* 0044D93C 10000139 */  b     .L0044DE24
/* 0044D940 AFB90510 */   sw    $t9, 0x510($sp)
.L0044D944:
/* 0044D944 8F818964 */  lw     $at, %got(print_warnings)($gp)
/* 0044D948 240F0003 */  li    $t7, 3
/* 0044D94C AFAF0510 */  sw    $t7, 0x510($sp)
/* 0044D950 10000134 */  b     .L0044DE24
/* 0044D954 A0200000 */   sb    $zero, ($at)
.L0044D958:
/* 0044D958 8F818964 */  lw     $at, %got(print_warnings)($gp)
/* 0044D95C 10000131 */  b     .L0044DE24
/* 0044D960 A0200000 */   sb    $zero, ($at)
.L0044D964:
/* 0044D964 8F988038 */  lw    $t8, %got(RO_1000EC3D)($gp)
/* 0044D968 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044D96C 02602025 */  move  $a0, $s3
/* 0044D970 2718EC3D */  addiu $t8, %lo(RO_1000EC3D) # addiu $t8, $t8, -0x13c3
/* 0044D974 8B0A0000 */  lwl   $t2, ($t8)
/* 0044D978 9B0A0003 */  lwr   $t2, 3($t8)
/* 0044D97C 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044D980 02E01025 */  move  $v0, $s7
/* 0044D984 ABAA0004 */  swl   $t2, 4($sp)
/* 0044D988 BBAA0007 */  swr   $t2, 7($sp)
/* 0044D98C 8B090004 */  lwl   $t1, 4($t8)
/* 0044D990 9B090007 */  lwr   $t1, 7($t8)
/* 0044D994 8FA50004 */  lw    $a1, 4($sp)
/* 0044D998 ABA90008 */  swl   $t1, 8($sp)
/* 0044D99C BBA9000B */  swr   $t1, 0xb($sp)
/* 0044D9A0 8B0A0008 */  lwl   $t2, 8($t8)
/* 0044D9A4 9B0A000B */  lwr   $t2, 0xb($t8)
/* 0044D9A8 8FA60008 */  lw    $a2, 8($sp)
/* 0044D9AC ABAA000C */  swl   $t2, 0xc($sp)
/* 0044D9B0 BBAA000F */  swr   $t2, 0xf($sp)
/* 0044D9B4 8B09000C */  lwl   $t1, 0xc($t8)
/* 0044D9B8 9B09000F */  lwr   $t1, 0xf($t8)
/* 0044D9BC 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044D9C0 ABA90010 */  swl   $t1, 0x10($sp)
/* 0044D9C4 BBA90013 */  swr   $t1, 0x13($sp)
/* 0044D9C8 8B0A0010 */  lwl   $t2, 0x10($t8)
/* 0044D9CC 9B0A0013 */  lwr   $t2, 0x13($t8)
/* 0044D9D0 ABAA0014 */  swl   $t2, 0x14($sp)
/* 0044D9D4 BBAA0017 */  swr   $t2, 0x17($sp)
/* 0044D9D8 8B090014 */  lwl   $t1, 0x14($t8)
/* 0044D9DC 9B090017 */  lwr   $t1, 0x17($t8)
/* 0044D9E0 ABA90018 */  swl   $t1, 0x18($sp)
/* 0044D9E4 BBA9001B */  swr   $t1, 0x1b($sp)
/* 0044D9E8 8B0A0018 */  lwl   $t2, 0x18($t8)
/* 0044D9EC 9B0A001B */  lwr   $t2, 0x1b($t8)
/* 0044D9F0 ABAA001C */  swl   $t2, 0x1c($sp)
/* 0044D9F4 BBAA001F */  swr   $t2, 0x1f($sp)
/* 0044D9F8 8B09001C */  lwl   $t1, 0x1c($t8)
/* 0044D9FC 9B09001F */  lwr   $t1, 0x1f($t8)
/* 0044DA00 ABA90020 */  swl   $t1, 0x20($sp)
/* 0044DA04 0320F809 */  jalr  $t9
/* 0044DA08 BBA90023 */   swr   $t1, 0x23($sp)
/* 0044DA0C 10400004 */  beqz  $v0, .L0044DA20
/* 0044DA10 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044DA14 8F8189E8 */  lw     $at, %got(cpalias_ok)($gp)
/* 0044DA18 10000054 */  b     .L0044DB6C
/* 0044DA1C A0350000 */   sb    $s5, ($at)
.L0044DA20:
/* 0044DA20 8F8B8038 */  lw    $t3, %got(RO_1000EC1D)($gp)
/* 0044DA24 8F998028 */  lw    $t9, %got(func_0044BEA8)($gp)
/* 0044DA28 02602025 */  move  $a0, $s3
/* 0044DA2C 256BEC1D */  addiu $t3, %lo(RO_1000EC1D) # addiu $t3, $t3, -0x13e3
/* 0044DA30 896D0000 */  lwl   $t5, ($t3)
/* 0044DA34 996D0003 */  lwr   $t5, 3($t3)
/* 0044DA38 2739BEA8 */  addiu $t9, %lo(func_0044BEA8) # addiu $t9, $t9, -0x4158
/* 0044DA3C 02E01025 */  move  $v0, $s7
/* 0044DA40 ABAD0004 */  swl   $t5, 4($sp)
/* 0044DA44 BBAD0007 */  swr   $t5, 7($sp)
/* 0044DA48 896C0004 */  lwl   $t4, 4($t3)
/* 0044DA4C 996C0007 */  lwr   $t4, 7($t3)
/* 0044DA50 8FA50004 */  lw    $a1, 4($sp)
/* 0044DA54 ABAC0008 */  swl   $t4, 8($sp)
/* 0044DA58 BBAC000B */  swr   $t4, 0xb($sp)
/* 0044DA5C 896D0008 */  lwl   $t5, 8($t3)
/* 0044DA60 996D000B */  lwr   $t5, 0xb($t3)
/* 0044DA64 8FA60008 */  lw    $a2, 8($sp)
/* 0044DA68 ABAD000C */  swl   $t5, 0xc($sp)
/* 0044DA6C BBAD000F */  swr   $t5, 0xf($sp)
/* 0044DA70 896C000C */  lwl   $t4, 0xc($t3)
/* 0044DA74 996C000F */  lwr   $t4, 0xf($t3)
/* 0044DA78 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044DA7C ABAC0010 */  swl   $t4, 0x10($sp)
/* 0044DA80 BBAC0013 */  swr   $t4, 0x13($sp)
/* 0044DA84 896D0010 */  lwl   $t5, 0x10($t3)
/* 0044DA88 996D0013 */  lwr   $t5, 0x13($t3)
/* 0044DA8C ABAD0014 */  swl   $t5, 0x14($sp)
/* 0044DA90 BBAD0017 */  swr   $t5, 0x17($sp)
/* 0044DA94 896C0014 */  lwl   $t4, 0x14($t3)
/* 0044DA98 996C0017 */  lwr   $t4, 0x17($t3)
/* 0044DA9C ABAC0018 */  swl   $t4, 0x18($sp)
/* 0044DAA0 BBAC001B */  swr   $t4, 0x1b($sp)
/* 0044DAA4 896D0018 */  lwl   $t5, 0x18($t3)
/* 0044DAA8 996D001B */  lwr   $t5, 0x1b($t3)
/* 0044DAAC ABAD001C */  swl   $t5, 0x1c($sp)
/* 0044DAB0 BBAD001F */  swr   $t5, 0x1f($sp)
/* 0044DAB4 896C001C */  lwl   $t4, 0x1c($t3)
/* 0044DAB8 996C001F */  lwr   $t4, 0x1f($t3)
/* 0044DABC ABAC0020 */  swl   $t4, 0x20($sp)
/* 0044DAC0 0320F809 */  jalr  $t9
/* 0044DAC4 BBAC0023 */   swr   $t4, 0x23($sp)
/* 0044DAC8 1040009D */  beqz  $v0, .L0044DD40
/* 0044DACC 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044DAD0 8F8E8960 */  lw     $t6, %got(__Argc)($gp)
/* 0044DAD4 26480001 */  addiu $t0, $s2, 1
/* 0044DAD8 24060029 */  li    $a2, 41
/* 0044DADC 8DCE0000 */  lw    $t6, ($t6)
/* 0044DAE0 24070029 */  li    $a3, 41
/* 0044DAE4 150E0011 */  bne   $t0, $t6, .L0044DB2C
/* 0044DAE8 00000000 */   nop   
/* 0044DAEC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044DAF0 8F858038 */  lw    $a1, %got(RO_1000EBF4)($gp)
/* 0044DAF4 8EC40000 */  lw    $a0, ($s6)
/* 0044DAF8 0320F809 */  jalr  $t9
/* 0044DAFC 24A5EBF4 */   addiu $a1, %lo(RO_1000EBF4) # addiu $a1, $a1, -0x140c
/* 0044DB00 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DB04 8EC40000 */  lw    $a0, ($s6)
/* 0044DB08 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044DB0C 0320F809 */  jalr  $t9
/* 0044DB10 00000000 */   nop   
/* 0044DB14 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DB18 24040001 */  li    $a0, 1
/* 0044DB1C 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044DB20 0320F809 */  jalr  $t9
/* 0044DB24 00000000 */   nop   
/* 0044DB28 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044DB2C:
/* 0044DB2C 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044DB30 26520001 */  addiu $s2, $s2, 1
/* 0044DB34 02402025 */  move  $a0, $s2
/* 0044DB38 02602825 */  move  $a1, $s3
/* 0044DB3C 0320F809 */  jalr  $t9
/* 0044DB40 24060400 */   li    $a2, 1024
/* 0044DB44 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DB48 02602025 */  move  $a0, $s3
/* 0044DB4C 02E01025 */  move  $v0, $s7
/* 0044DB50 8F998028 */  lw    $t9, %got(func_0044B290)($gp)
/* 0044DB54 2739B290 */  addiu $t9, %lo(func_0044B290) # addiu $t9, $t9, -0x4d70
/* 0044DB58 0320F809 */  jalr  $t9
/* 0044DB5C 00000000 */   nop   
/* 0044DB60 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DB64 8F818A8C */  lw     $at, %got(max_stack)($gp)
/* 0044DB68 AC220000 */  sw    $v0, ($at)
.L0044DB6C:
/* 0044DB6C 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044DB70 100000AC */  b     .L0044DE24
/* 0044DB74 8E100000 */   lw    $s0, ($s0)
.L0044DB78:
/* 0044DB78 24010034 */  li    $at, 52
/* 0044DB7C 14610070 */  bne   $v1, $at, .L0044DD40
/* 0044DB80 93B90541 */   lbu   $t9, 0x541($sp)
/* 0044DB84 24010064 */  li    $at, 100
/* 0044DB88 1721006D */  bne   $t9, $at, .L0044DD40
/* 0044DB8C 93A20542 */   lbu   $v0, 0x542($sp)
/* 0044DB90 24010061 */  li    $at, 97
/* 0044DB94 1441006A */  bne   $v0, $at, .L0044DD40
/* 0044DB98 93AF0543 */   lbu   $t7, 0x543($sp)
/* 0044DB9C 24010074 */  li    $at, 116
/* 0044DBA0 15E10067 */  bne   $t7, $at, .L0044DD40
/* 0044DBA4 93B80544 */   lbu   $t8, 0x544($sp)
/* 0044DBA8 24010061 */  li    $at, 97
/* 0044DBAC 17010064 */  bne   $t8, $at, .L0044DD40
/* 0044DBB0 93A90545 */   lbu   $t1, 0x545($sp)
/* 0044DBB4 15340062 */  bne   $t1, $s4, .L0044DD40
/* 0044DBB8 00000000 */   nop   
/* 0044DBBC 8F8189B8 */  lw     $at, %got(isa)($gp)
/* 0044DBC0 240A0002 */  li    $t2, 2
/* 0044DBC4 240B000F */  li    $t3, 15
/* 0044DBC8 A02A0000 */  sb    $t2, ($at)
/* 0044DBCC 8F8189D8 */  lw     $at, %got(opcode_arch)($gp)
/* 0044DBD0 240C0008 */  li    $t4, 8
/* 0044DBD4 A0350000 */  sb    $s5, ($at)
/* 0044DBD8 8F8189DC */  lw     $at, %got(basicint)($gp)
/* 0044DBDC A0350000 */  sb    $s5, ($at)
/* 0044DBE0 8F818A28 */  lw     $at, %got(addr_dtype)($gp)
/* 0044DBE4 A02B0000 */  sb    $t3, ($at)
/* 0044DBE8 8F818A2C */  lw     $at, %got(unitsperaddr)($gp)
/* 0044DBEC 1000008D */  b     .L0044DE24
/* 0044DBF0 AC2C0000 */   sw    $t4, ($at)
.L0044DBF4:
/* 0044DBF4 15B5008B */  bne   $t5, $s5, .L0044DE24
/* 0044DBF8 93A30540 */   lbu   $v1, 0x540($sp)
/* 0044DBFC 2401002D */  li    $at, 45
/* 0044DC00 14610088 */  bne   $v1, $at, .L0044DE24
/* 0044DC04 02402025 */   move  $a0, $s2
/* 0044DC08 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044DC0C 27A50108 */  addiu $a1, $sp, 0x108
/* 0044DC10 24060400 */  li    $a2, 1024
/* 0044DC14 0320F809 */  jalr  $t9
/* 0044DC18 24110400 */   li    $s1, 1024
/* 0044DC1C 93A80507 */  lbu   $t0, 0x507($sp)
/* 0044DC20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DC24 02602825 */  move  $a1, $s3
/* 0044DC28 16880007 */  bne   $s4, $t0, .L0044DC48
/* 0044DC2C 00000000 */   nop   
/* 0044DC30 2631FFFF */  addiu $s1, $s1, -1
.L0044DC34:
/* 0044DC34 12200004 */  beqz  $s1, .L0044DC48
/* 0044DC38 03D17021 */   addu  $t6, $fp, $s1
/* 0044DC3C 91D90000 */  lbu   $t9, ($t6)
/* 0044DC40 5299FFFC */  beql  $s4, $t9, .L0044DC34
/* 0044DC44 2631FFFF */   addiu $s1, $s1, -1
.L0044DC48:
/* 0044DC48 12200003 */  beqz  $s1, .L0044DC58
/* 0044DC4C 03D17821 */   addu  $t7, $fp, $s1
/* 0044DC50 10000016 */  b     .L0044DCAC
/* 0044DC54 A1E00001 */   sb    $zero, 1($t7)
.L0044DC58:
/* 0044DC58 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044DC5C 8EC40000 */  lw    $a0, ($s6)
/* 0044DC60 24060400 */  li    $a2, 1024
/* 0044DC64 0320F809 */  jalr  $t9
/* 0044DC68 00003825 */   move  $a3, $zero
/* 0044DC6C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DC70 8EC40000 */  lw    $a0, ($s6)
/* 0044DC74 2406000F */  li    $a2, 15
/* 0044DC78 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044DC7C 8F858038 */  lw    $a1, %got(RO_1000EBE5)($gp)
/* 0044DC80 2407000F */  li    $a3, 15
/* 0044DC84 0320F809 */  jalr  $t9
/* 0044DC88 24A5EBE5 */   addiu $a1, %lo(RO_1000EBE5) # addiu $a1, $a1, -0x141b
/* 0044DC8C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DC90 8EC40000 */  lw    $a0, ($s6)
/* 0044DC94 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044DC98 0320F809 */  jalr  $t9
/* 0044DC9C 00000000 */   nop   
/* 0044DCA0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DCA4 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044DCA8 8E100000 */  lw    $s0, ($s0)
.L0044DCAC:
/* 0044DCAC 26220001 */  addiu $v0, $s1, 1
/* 0044DCB0 28410003 */  slti  $at, $v0, 3
/* 0044DCB4 1420005B */  bnez  $at, .L0044DE24
/* 0044DCB8 24460001 */   addiu $a2, $v0, 1
/* 0044DCBC 24C7FFFD */  addiu $a3, $a2, -3
/* 0044DCC0 30E70003 */  andi  $a3, $a3, 3
/* 0044DCC4 10E0000C */  beqz  $a3, .L0044DCF8
/* 0044DCC8 24040003 */   li    $a0, 3
/* 0044DCCC 27B815BF */  addiu $t8, $sp, 0x15bf
/* 0044DCD0 00981821 */  addu  $v1, $a0, $t8
/* 0044DCD4 24E50003 */  addiu $a1, $a3, 3
/* 0044DCD8 03C41021 */  addu  $v0, $fp, $a0
.L0044DCDC:
/* 0044DCDC 90490000 */  lbu   $t1, ($v0)
/* 0044DCE0 24840001 */  addiu $a0, $a0, 1
/* 0044DCE4 24630001 */  addiu $v1, $v1, 1
/* 0044DCE8 24420001 */  addiu $v0, $v0, 1
/* 0044DCEC 14A4FFFB */  bne   $a1, $a0, .L0044DCDC
/* 0044DCF0 A069FFFD */   sb    $t1, -3($v1)
/* 0044DCF4 1086004B */  beq   $a0, $a2, .L0044DE24
.L0044DCF8:
/* 0044DCF8 27AA15BF */   addiu $t2, $sp, 0x15bf
/* 0044DCFC 27AB0107 */  addiu $t3, $sp, 0x107
/* 0044DD00 00CB2821 */  addu  $a1, $a2, $t3
/* 0044DD04 008A1821 */  addu  $v1, $a0, $t2
/* 0044DD08 03C41021 */  addu  $v0, $fp, $a0
.L0044DD0C:
/* 0044DD0C 904C0000 */  lbu   $t4, ($v0)
/* 0044DD10 904D0001 */  lbu   $t5, 1($v0)
/* 0044DD14 90480002 */  lbu   $t0, 2($v0)
/* 0044DD18 904E0003 */  lbu   $t6, 3($v0)
/* 0044DD1C 24420004 */  addiu $v0, $v0, 4
/* 0044DD20 24630004 */  addiu $v1, $v1, 4
/* 0044DD24 A06CFFFA */  sb    $t4, -6($v1)
/* 0044DD28 A06DFFFB */  sb    $t5, -5($v1)
/* 0044DD2C A068FFFC */  sb    $t0, -4($v1)
/* 0044DD30 1445FFF6 */  bne   $v0, $a1, .L0044DD0C
/* 0044DD34 A06EFFFD */   sb    $t6, -3($v1)
/* 0044DD38 1000003B */  b     .L0044DE28
/* 0044DD3C 26520001 */   addiu $s2, $s2, 1
.L0044DD40:
/* 0044DD40 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044DD44 8EC40000 */  lw    $a0, ($s6)
/* 0044DD48 02602825 */  move  $a1, $s3
/* 0044DD4C 24060400 */  li    $a2, 1024
/* 0044DD50 0320F809 */  jalr  $t9
/* 0044DD54 00003825 */   move  $a3, $zero
/* 0044DD58 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DD5C 8EC40000 */  lw    $a0, ($s6)
/* 0044DD60 2406000F */  li    $a2, 15
/* 0044DD64 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044DD68 8F858038 */  lw    $a1, %got(RO_1000EBD6)($gp)
/* 0044DD6C 2407000F */  li    $a3, 15
/* 0044DD70 0320F809 */  jalr  $t9
/* 0044DD74 24A5EBD6 */   addiu $a1, %lo(RO_1000EBD6) # addiu $a1, $a1, -0x142a
/* 0044DD78 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DD7C 8EC40000 */  lw    $a0, ($s6)
/* 0044DD80 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044DD84 0320F809 */  jalr  $t9
/* 0044DD88 00000000 */   nop   
/* 0044DD8C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DD90 8F908960 */  lw     $s0, %got(__Argc)($gp)
/* 0044DD94 10000023 */  b     .L0044DE24
/* 0044DD98 8E100000 */   lw    $s0, ($s0)
.L0044DD9C:
/* 0044DD9C 2401002D */  li    $at, 45
/* 0044DDA0 1041FF94 */  beq   $v0, $at, .L0044DBF4
/* 0044DDA4 93AD050F */   lbu   $t5, 0x50f($sp)
/* 0044DDA8 24010036 */  li    $at, 54
/* 0044DDAC 1041FF72 */  beq   $v0, $at, .L0044DB78
/* 0044DDB0 93A30540 */   lbu   $v1, 0x540($sp)
/* 0044DDB4 1000FFE2 */  b     .L0044DD40
/* 0044DDB8 00000000 */   nop   
.L0044DDBC:
/* 0044DDBC 2F21000B */  sltiu $at, $t9, 0xb
/* 0044DDC0 1020FFDF */  beqz  $at, .L0044DD40
/* 0044DDC4 00000000 */   nop   
/* 0044DDC8 8F818038 */  lw    $at, %got(jtbl_1000F488)($gp)
/* 0044DDCC 0019C880 */  sll   $t9, $t9, 2
/* 0044DDD0 00390821 */  addu  $at, $at, $t9
/* 0044DDD4 8C39F488 */  lw    $t9, %lo(jtbl_1000F488)($at)
/* 0044DDD8 033CC821 */  addu  $t9, $t9, $gp
/* 0044DDDC 03200008 */  jr    $t9
/* 0044DDE0 00000000 */   nop   
.L0044DDE4:
/* 0044DDE4 8F9987F4 */  lw    $t9, %call16(get_arg)($gp)
/* 0044DDE8 27A515C0 */  addiu $a1, $sp, 0x15c0
/* 0044DDEC 24060400 */  li    $a2, 1024
/* 0044DDF0 0320F809 */  jalr  $t9
/* 0044DDF4 24110400 */   li    $s1, 1024
/* 0044DDF8 93AF19BF */  lbu   $t7, 0x19bf($sp)
/* 0044DDFC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DE00 568F0009 */  bnel  $s4, $t7, .L0044DE28
/* 0044DE04 26520001 */   addiu $s2, $s2, 1
/* 0044DE08 2631FFFF */  addiu $s1, $s1, -1
.L0044DE0C:
/* 0044DE0C 12200005 */  beqz  $s1, .L0044DE24
/* 0044DE10 27B815BF */   addiu $t8, $sp, 0x15bf
/* 0044DE14 02384821 */  addu  $t1, $s1, $t8
/* 0044DE18 912A0000 */  lbu   $t2, ($t1)
/* 0044DE1C 528AFFFB */  beql  $s4, $t2, .L0044DE0C
/* 0044DE20 2631FFFF */   addiu $s1, $s1, -1
.L0044DE24:
/* 0044DE24 26520001 */  addiu $s2, $s2, 1
.L0044DE28:
/* 0044DE28 0250082A */  slt   $at, $s2, $s0
/* 0044DE2C 1420F8F4 */  bnez  $at, .L0044C200
/* 0044DE30 00000000 */   nop   
/* 0044DE34 AFB10530 */  sw    $s1, 0x530($sp)
/* 0044DE38 93AB15C0 */  lbu   $t3, 0x15c0($sp)
.L0044DE3C:
/* 0044DE3C 8FB10530 */  lw    $s1, 0x530($sp)
/* 0044DE40 24140020 */  li    $s4, 32
/* 0044DE44 8F968950 */  lw     $s6, %got(err)($gp)
/* 0044DE48 15600013 */  bnez  $t3, .L0044DE98
/* 0044DE4C 27B721D0 */   addiu $s7, $sp, 0x21d0
/* 0044DE50 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044DE54 8F858038 */  lw    $a1, %got(RO_1000EBC2)($gp)
/* 0044DE58 8EC40000 */  lw    $a0, ($s6)
/* 0044DE5C 24060014 */  li    $a2, 20
/* 0044DE60 24070014 */  li    $a3, 20
/* 0044DE64 0320F809 */  jalr  $t9
/* 0044DE68 24A5EBC2 */   addiu $a1, %lo(RO_1000EBC2) # addiu $a1, $a1, -0x143e
/* 0044DE6C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DE70 8EC40000 */  lw    $a0, ($s6)
/* 0044DE74 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044DE78 0320F809 */  jalr  $t9
/* 0044DE7C 00000000 */   nop   
/* 0044DE80 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DE84 24040001 */  li    $a0, 1
/* 0044DE88 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044DE8C 0320F809 */  jalr  $t9
/* 0044DE90 00000000 */   nop   
/* 0044DE94 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044DE98:
/* 0044DE98 8F8C89FC */  lw     $t4, %got(n_parm_regs)($gp)
/* 0044DE9C 8F8D8A04 */  lw     $t5, %got(n_saved_regs)($gp)
/* 0044DEA0 8F8E8A0C */  lw     $t6, %got(n_unsaved_regs)($gp)
/* 0044DEA4 8D8C0000 */  lw    $t4, ($t4)
/* 0044DEA8 8DAD0000 */  lw    $t5, ($t5)
/* 0044DEAC 8DCE0000 */  lw    $t6, ($t6)
/* 0044DEB0 24040004 */  li    $a0, 4
/* 0044DEB4 018D4021 */  addu  $t0, $t4, $t5
/* 0044DEB8 010EC821 */  addu  $t9, $t0, $t6
/* 0044DEBC 2B210013 */  slti  $at, $t9, 0x13
/* 0044DEC0 14200043 */  bnez  $at, .L0044DFD0
/* 0044DEC4 00000000 */   nop   
/* 0044DEC8 8F8F8038 */  lw    $t7, %got(RO_1000EB72)($gp)
/* 0044DECC 2405030B */  li    $a1, 779
/* 0044DED0 03A05025 */  move  $t2, $sp
/* 0044DED4 25EFEB72 */  addiu $t7, %lo(RO_1000EB72) # addiu $t7, $t7, -0x148e
/* 0044DED8 25EB0048 */  addiu $t3, $t7, 0x48
.L0044DEDC:
/* 0044DEDC 89E90000 */  lwl   $t1, ($t7)
/* 0044DEE0 99E90003 */  lwr   $t1, 3($t7)
/* 0044DEE4 25EF000C */  addiu $t7, $t7, 0xc
/* 0044DEE8 254A000C */  addiu $t2, $t2, 0xc
/* 0044DEEC A949FFFC */  swl   $t1, -4($t2)
/* 0044DEF0 B949FFFF */  swr   $t1, -1($t2)
/* 0044DEF4 89F8FFF8 */  lwl   $t8, -8($t7)
/* 0044DEF8 99F8FFFB */  lwr   $t8, -5($t7)
/* 0044DEFC A9580000 */  swl   $t8, ($t2)
/* 0044DF00 B9580003 */  swr   $t8, 3($t2)
/* 0044DF04 89E9FFFC */  lwl   $t1, -4($t7)
/* 0044DF08 99E9FFFF */  lwr   $t1, -1($t7)
/* 0044DF0C A9490004 */  swl   $t1, 4($t2)
/* 0044DF10 15EBFFF2 */  bne   $t7, $t3, .L0044DEDC
/* 0044DF14 B9490007 */   swr   $t1, 7($t2)
/* 0044DF18 89E90000 */  lwl   $t1, ($t7)
/* 0044DF1C 99E90003 */  lwr   $t1, 3($t7)
/* 0044DF20 8F8C8038 */  lw    $t4, %got(RO_1000EB22)($gp)
/* 0044DF24 03A07025 */  move  $t6, $sp
/* 0044DF28 A9490008 */  swl   $t1, 8($t2)
/* 0044DF2C B949000B */  swr   $t1, 0xb($t2)
/* 0044DF30 89F80004 */  lwl   $t8, 4($t7)
/* 0044DF34 99F80007 */  lwr   $t8, 7($t7)
/* 0044DF38 258CEB22 */  addiu $t4, %lo(RO_1000EB22) # addiu $t4, $t4, -0x14de
/* 0044DF3C 25990048 */  addiu $t9, $t4, 0x48
/* 0044DF40 A958000C */  swl   $t8, 0xc($t2)
/* 0044DF44 B958000F */  swr   $t8, 0xf($t2)
.L0044DF48:
/* 0044DF48 89880000 */  lwl   $t0, ($t4)
/* 0044DF4C 99880003 */  lwr   $t0, 3($t4)
/* 0044DF50 258C000C */  addiu $t4, $t4, 0xc
/* 0044DF54 25CE000C */  addiu $t6, $t6, 0xc
/* 0044DF58 A9C8004C */  swl   $t0, 0x4c($t6)
/* 0044DF5C B9C8004F */  swr   $t0, 0x4f($t6)
/* 0044DF60 898DFFF8 */  lwl   $t5, -8($t4)
/* 0044DF64 998DFFFB */  lwr   $t5, -5($t4)
/* 0044DF68 A9CD0050 */  swl   $t5, 0x50($t6)
/* 0044DF6C B9CD0053 */  swr   $t5, 0x53($t6)
/* 0044DF70 8988FFFC */  lwl   $t0, -4($t4)
/* 0044DF74 9988FFFF */  lwr   $t0, -1($t4)
/* 0044DF78 A9C80054 */  swl   $t0, 0x54($t6)
/* 0044DF7C 1599FFF2 */  bne   $t4, $t9, .L0044DF48
/* 0044DF80 B9C80057 */   swr   $t0, 0x57($t6)
/* 0044DF84 89880000 */  lwl   $t0, ($t4)
/* 0044DF88 99880003 */  lwr   $t0, 3($t4)
/* 0044DF8C A9C80058 */  swl   $t0, 0x58($t6)
/* 0044DF90 B9C8005B */  swr   $t0, 0x5b($t6)
/* 0044DF94 898D0004 */  lwl   $t5, 4($t4)
/* 0044DF98 998D0007 */  lwr   $t5, 7($t4)
/* 0044DF9C A9CD005C */  swl   $t5, 0x5c($t6)
/* 0044DFA0 B9CD005F */  swr   $t5, 0x5f($t6)
/* 0044DFA4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044DFA8 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044DFAC 8FA60008 */  lw    $a2, 8($sp)
/* 0044DFB0 0320F809 */  jalr  $t9
/* 0044DFB4 00000000 */   nop   
/* 0044DFB8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044DFBC 24040001 */  li    $a0, 1
/* 0044DFC0 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044DFC4 0320F809 */  jalr  $t9
/* 0044DFC8 00000000 */   nop   
/* 0044DFCC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044DFD0:
/* 0044DFD0 8F8B8A00 */  lw     $t3, %got(n_fp_parm_regs)($gp)
/* 0044DFD4 8F8F8A08 */  lw     $t7, %got(n_saved_fp_regs)($gp)
/* 0044DFD8 8F988A10 */  lw     $t8, %got(n_unsaved_fp_regs)($gp)
/* 0044DFDC 8D6B0000 */  lw    $t3, ($t3)
/* 0044DFE0 8DEF0000 */  lw    $t7, ($t7)
/* 0044DFE4 8F180000 */  lw    $t8, ($t8)
/* 0044DFE8 24040004 */  li    $a0, 4
/* 0044DFEC 016F5021 */  addu  $t2, $t3, $t7
/* 0044DFF0 01584821 */  addu  $t1, $t2, $t8
/* 0044DFF4 2921000B */  slti  $at, $t1, 0xb
/* 0044DFF8 14200043 */  bnez  $at, .L0044E108
/* 0044DFFC 00000000 */   nop   
/* 0044E000 8F998038 */  lw    $t9, %got(RO_1000EAD2)($gp)
/* 0044E004 24050310 */  li    $a1, 784
/* 0044E008 03A06825 */  move  $t5, $sp
/* 0044E00C 2739EAD2 */  addiu $t9, %lo(RO_1000EAD2) # addiu $t9, $t9, -0x152e
/* 0044E010 27280048 */  addiu $t0, $t9, 0x48
.L0044E014:
/* 0044E014 8B2E0000 */  lwl   $t6, ($t9)
/* 0044E018 9B2E0003 */  lwr   $t6, 3($t9)
/* 0044E01C 2739000C */  addiu $t9, $t9, 0xc
/* 0044E020 25AD000C */  addiu $t5, $t5, 0xc
/* 0044E024 A9AEFFFC */  swl   $t6, -4($t5)
/* 0044E028 B9AEFFFF */  swr   $t6, -1($t5)
/* 0044E02C 8B2CFFF8 */  lwl   $t4, -8($t9)
/* 0044E030 9B2CFFFB */  lwr   $t4, -5($t9)
/* 0044E034 A9AC0000 */  swl   $t4, ($t5)
/* 0044E038 B9AC0003 */  swr   $t4, 3($t5)
/* 0044E03C 8B2EFFFC */  lwl   $t6, -4($t9)
/* 0044E040 9B2EFFFF */  lwr   $t6, -1($t9)
/* 0044E044 A9AE0004 */  swl   $t6, 4($t5)
/* 0044E048 1728FFF2 */  bne   $t9, $t0, .L0044E014
/* 0044E04C B9AE0007 */   swr   $t6, 7($t5)
/* 0044E050 8B2E0000 */  lwl   $t6, ($t9)
/* 0044E054 9B2E0003 */  lwr   $t6, 3($t9)
/* 0044E058 8F8B8038 */  lw    $t3, %got(RO_1000EA82)($gp)
/* 0044E05C 03A0C025 */  move  $t8, $sp
/* 0044E060 A9AE0008 */  swl   $t6, 8($t5)
/* 0044E064 B9AE000B */  swr   $t6, 0xb($t5)
/* 0044E068 8B2C0004 */  lwl   $t4, 4($t9)
/* 0044E06C 9B2C0007 */  lwr   $t4, 7($t9)
/* 0044E070 256BEA82 */  addiu $t3, %lo(RO_1000EA82) # addiu $t3, $t3, -0x157e
/* 0044E074 25690048 */  addiu $t1, $t3, 0x48
/* 0044E078 A9AC000C */  swl   $t4, 0xc($t5)
/* 0044E07C B9AC000F */  swr   $t4, 0xf($t5)
.L0044E080:
/* 0044E080 896A0000 */  lwl   $t2, ($t3)
/* 0044E084 996A0003 */  lwr   $t2, 3($t3)
/* 0044E088 256B000C */  addiu $t3, $t3, 0xc
/* 0044E08C 2718000C */  addiu $t8, $t8, 0xc
/* 0044E090 AB0A004C */  swl   $t2, 0x4c($t8)
/* 0044E094 BB0A004F */  swr   $t2, 0x4f($t8)
/* 0044E098 896FFFF8 */  lwl   $t7, -8($t3)
/* 0044E09C 996FFFFB */  lwr   $t7, -5($t3)
/* 0044E0A0 AB0F0050 */  swl   $t7, 0x50($t8)
/* 0044E0A4 BB0F0053 */  swr   $t7, 0x53($t8)
/* 0044E0A8 896AFFFC */  lwl   $t2, -4($t3)
/* 0044E0AC 996AFFFF */  lwr   $t2, -1($t3)
/* 0044E0B0 AB0A0054 */  swl   $t2, 0x54($t8)
/* 0044E0B4 1569FFF2 */  bne   $t3, $t1, .L0044E080
/* 0044E0B8 BB0A0057 */   swr   $t2, 0x57($t8)
/* 0044E0BC 896A0000 */  lwl   $t2, ($t3)
/* 0044E0C0 996A0003 */  lwr   $t2, 3($t3)
/* 0044E0C4 AB0A0058 */  swl   $t2, 0x58($t8)
/* 0044E0C8 BB0A005B */  swr   $t2, 0x5b($t8)
/* 0044E0CC 896F0004 */  lwl   $t7, 4($t3)
/* 0044E0D0 996F0007 */  lwr   $t7, 7($t3)
/* 0044E0D4 AB0F005C */  swl   $t7, 0x5c($t8)
/* 0044E0D8 BB0F005F */  swr   $t7, 0x5f($t8)
/* 0044E0DC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044E0E0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044E0E4 8FA60008 */  lw    $a2, 8($sp)
/* 0044E0E8 0320F809 */  jalr  $t9
/* 0044E0EC 00000000 */   nop   
/* 0044E0F0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E0F4 24040001 */  li    $a0, 1
/* 0044E0F8 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044E0FC 0320F809 */  jalr  $t9
/* 0044E100 00000000 */   nop   
/* 0044E104 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E108:
/* 0044E108 8F888A24 */  lw     $t0, %got(fp32regs)($gp)
/* 0044E10C 91080000 */  lbu   $t0, ($t0)
/* 0044E110 1100004A */  beqz  $t0, .L0044E23C
/* 0044E114 00000000 */   nop   
/* 0044E118 8F8289B8 */  lw     $v0, %got(isa)($gp)
/* 0044E11C 24040004 */  li    $a0, 4
/* 0044E120 90420000 */  lbu   $v0, ($v0)
/* 0044E124 10400003 */  beqz  $v0, .L0044E134
/* 0044E128 00000000 */   nop   
/* 0044E12C 16A20043 */  bne   $s5, $v0, .L0044E23C
/* 0044E130 00000000 */   nop   
.L0044E134:
/* 0044E134 8F998038 */  lw    $t9, %got(RO_1000EA32)($gp)
/* 0044E138 24050315 */  li    $a1, 789
/* 0044E13C 03A07025 */  move  $t6, $sp
/* 0044E140 2739EA32 */  addiu $t9, %lo(RO_1000EA32) # addiu $t9, $t9, -0x15ce
/* 0044E144 27290048 */  addiu $t1, $t9, 0x48
.L0044E148:
/* 0044E148 8B2C0000 */  lwl   $t4, ($t9)
/* 0044E14C 9B2C0003 */  lwr   $t4, 3($t9)
/* 0044E150 2739000C */  addiu $t9, $t9, 0xc
/* 0044E154 25CE000C */  addiu $t6, $t6, 0xc
/* 0044E158 A9CCFFFC */  swl   $t4, -4($t6)
/* 0044E15C B9CCFFFF */  swr   $t4, -1($t6)
/* 0044E160 8B2DFFF8 */  lwl   $t5, -8($t9)
/* 0044E164 9B2DFFFB */  lwr   $t5, -5($t9)
/* 0044E168 A9CD0000 */  swl   $t5, ($t6)
/* 0044E16C B9CD0003 */  swr   $t5, 3($t6)
/* 0044E170 8B2CFFFC */  lwl   $t4, -4($t9)
/* 0044E174 9B2CFFFF */  lwr   $t4, -1($t9)
/* 0044E178 A9CC0004 */  swl   $t4, 4($t6)
/* 0044E17C 1729FFF2 */  bne   $t9, $t1, .L0044E148
/* 0044E180 B9CC0007 */   swr   $t4, 7($t6)
/* 0044E184 8B2C0000 */  lwl   $t4, ($t9)
/* 0044E188 9B2C0003 */  lwr   $t4, 3($t9)
/* 0044E18C 8F8B8038 */  lw    $t3, %got(RO_1000E9E2)($gp)
/* 0044E190 03A05025 */  move  $t2, $sp
/* 0044E194 A9CC0008 */  swl   $t4, 8($t6)
/* 0044E198 B9CC000B */  swr   $t4, 0xb($t6)
/* 0044E19C 8B2D0004 */  lwl   $t5, 4($t9)
/* 0044E1A0 9B2D0007 */  lwr   $t5, 7($t9)
/* 0044E1A4 256BE9E2 */  addiu $t3, %lo(RO_1000E9E2) # addiu $t3, $t3, -0x161e
/* 0044E1A8 25680048 */  addiu $t0, $t3, 0x48
/* 0044E1AC A9CD000C */  swl   $t5, 0xc($t6)
/* 0044E1B0 B9CD000F */  swr   $t5, 0xf($t6)
.L0044E1B4:
/* 0044E1B4 896F0000 */  lwl   $t7, ($t3)
/* 0044E1B8 996F0003 */  lwr   $t7, 3($t3)
/* 0044E1BC 256B000C */  addiu $t3, $t3, 0xc
/* 0044E1C0 254A000C */  addiu $t2, $t2, 0xc
/* 0044E1C4 A94F004C */  swl   $t7, 0x4c($t2)
/* 0044E1C8 B94F004F */  swr   $t7, 0x4f($t2)
/* 0044E1CC 8978FFF8 */  lwl   $t8, -8($t3)
/* 0044E1D0 9978FFFB */  lwr   $t8, -5($t3)
/* 0044E1D4 A9580050 */  swl   $t8, 0x50($t2)
/* 0044E1D8 B9580053 */  swr   $t8, 0x53($t2)
/* 0044E1DC 896FFFFC */  lwl   $t7, -4($t3)
/* 0044E1E0 996FFFFF */  lwr   $t7, -1($t3)
/* 0044E1E4 A94F0054 */  swl   $t7, 0x54($t2)
/* 0044E1E8 1568FFF2 */  bne   $t3, $t0, .L0044E1B4
/* 0044E1EC B94F0057 */   swr   $t7, 0x57($t2)
/* 0044E1F0 896F0000 */  lwl   $t7, ($t3)
/* 0044E1F4 996F0003 */  lwr   $t7, 3($t3)
/* 0044E1F8 A94F0058 */  swl   $t7, 0x58($t2)
/* 0044E1FC B94F005B */  swr   $t7, 0x5b($t2)
/* 0044E200 89780004 */  lwl   $t8, 4($t3)
/* 0044E204 99780007 */  lwr   $t8, 7($t3)
/* 0044E208 A958005C */  swl   $t8, 0x5c($t2)
/* 0044E20C B958005F */  swr   $t8, 0x5f($t2)
/* 0044E210 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044E214 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044E218 8FA60008 */  lw    $a2, 8($sp)
/* 0044E21C 0320F809 */  jalr  $t9
/* 0044E220 00000000 */   nop   
/* 0044E224 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E228 24040001 */  li    $a0, 1
/* 0044E22C 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044E230 0320F809 */  jalr  $t9
/* 0044E234 00000000 */   nop   
/* 0044E238 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E23C:
/* 0044E23C 8F898994 */  lw     $t1, %got(ascii_out)($gp)
/* 0044E240 93B911BF */  lbu   $t9, 0x11bf($sp)
/* 0044E244 27A40534 */  addiu $a0, $sp, 0x534
/* 0044E248 91290000 */  lbu   $t1, ($t1)
/* 0044E24C 11200065 */  beqz  $t1, .L0044E3E4
/* 0044E250 00000000 */   nop   
/* 0044E254 16990008 */  bne   $s4, $t9, .L0044E278
/* 0044E258 24020400 */   li    $v0, 1024
/* 0044E25C 27A30DBF */  addiu $v1, $sp, 0xdbf
/* 0044E260 2442FFFF */  addiu $v0, $v0, -1
.L0044E264:
/* 0044E264 10400004 */  beqz  $v0, .L0044E278
/* 0044E268 00627021 */   addu  $t6, $v1, $v0
/* 0044E26C 91CD0000 */  lbu   $t5, ($t6)
/* 0044E270 528DFFFC */  beql  $s4, $t5, .L0044E264
/* 0044E274 2442FFFF */   addiu $v0, $v0, -1
.L0044E278:
/* 0044E278 27A30DBF */  addiu $v1, $sp, 0xdbf
/* 0044E27C 00626021 */  addu  $t4, $v1, $v0
/* 0044E280 A1800001 */  sb    $zero, 1($t4)
/* 0044E284 8F9987F0 */  lw    $t9, %call16(rewrite)($gp)
/* 0044E288 27A50DC0 */  addiu $a1, $sp, 0xdc0
/* 0044E28C 24060400 */  li    $a2, 1024
/* 0044E290 0320F809 */  jalr  $t9
/* 0044E294 00003825 */   move  $a3, $zero
/* 0044E298 93A80940 */  lbu   $t0, 0x940($sp)
/* 0044E29C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E2A0 2622FFFF */  addiu $v0, $s1, -1
/* 0044E2A4 5500002A */  bnel  $t0, $zero, .L0044E350
/* 0044E2A8 93AA09BE */   lbu   $t2, 0x9be($sp)
/* 0044E2AC 10400022 */  beqz  $v0, .L0044E338
/* 0044E2B0 24080054 */   li    $t0, 84
/* 0044E2B4 24450001 */  addiu $a1, $v0, 1
/* 0044E2B8 24A6FFFF */  addiu $a2, $a1, -1
/* 0044E2BC 30C60003 */  andi  $a2, $a2, 3
/* 0044E2C0 10C0000D */  beqz  $a2, .L0044E2F8
/* 0044E2C4 24120001 */   li    $s2, 1
/* 0044E2C8 27AB093F */  addiu $t3, $sp, 0x93f
/* 0044E2CC 27AA15BF */  addiu $t2, $sp, 0x15bf
/* 0044E2D0 024A1021 */  addu  $v0, $s2, $t2
/* 0044E2D4 024B1821 */  addu  $v1, $s2, $t3
/* 0044E2D8 24C40001 */  addiu $a0, $a2, 1
.L0044E2DC:
/* 0044E2DC 90580000 */  lbu   $t8, ($v0)
/* 0044E2E0 26520001 */  addiu $s2, $s2, 1
/* 0044E2E4 24630001 */  addiu $v1, $v1, 1
/* 0044E2E8 24420001 */  addiu $v0, $v0, 1
/* 0044E2EC 1492FFFB */  bne   $a0, $s2, .L0044E2DC
/* 0044E2F0 A078FFFF */   sb    $t8, -1($v1)
/* 0044E2F4 12450010 */  beq   $s2, $a1, .L0044E338
.L0044E2F8:
/* 0044E2F8 27A915BF */   addiu $t1, $sp, 0x15bf
/* 0044E2FC 27AF093F */  addiu $t7, $sp, 0x93f
/* 0044E300 024F1821 */  addu  $v1, $s2, $t7
/* 0044E304 02491021 */  addu  $v0, $s2, $t1
/* 0044E308 00A92021 */  addu  $a0, $a1, $t1
.L0044E30C:
/* 0044E30C 90590000 */  lbu   $t9, ($v0)
/* 0044E310 904E0001 */  lbu   $t6, 1($v0)
/* 0044E314 904D0002 */  lbu   $t5, 2($v0)
/* 0044E318 904C0003 */  lbu   $t4, 3($v0)
/* 0044E31C 24420004 */  addiu $v0, $v0, 4
/* 0044E320 24630004 */  addiu $v1, $v1, 4
/* 0044E324 A079FFFC */  sb    $t9, -4($v1)
/* 0044E328 A06EFFFD */  sb    $t6, -3($v1)
/* 0044E32C A06DFFFE */  sb    $t5, -2($v1)
/* 0044E330 1444FFF6 */  bne   $v0, $a0, .L0044E30C
/* 0044E334 A06CFFFF */   sb    $t4, -1($v1)
.L0044E338:
/* 0044E338 27A3093F */  addiu $v1, $sp, 0x93f
/* 0044E33C 00715821 */  addu  $t3, $v1, $s1
/* 0044E340 02201025 */  move  $v0, $s1
/* 0044E344 1000000B */  b     .L0044E374
/* 0044E348 A1680000 */   sb    $t0, ($t3)
/* 0044E34C 93AA09BE */  lbu   $t2, 0x9be($sp)
.L0044E350:
/* 0044E350 2402007F */  li    $v0, 127
/* 0044E354 168A0007 */  bne   $s4, $t2, .L0044E374
/* 0044E358 27A3093F */   addiu $v1, $sp, 0x93f
/* 0044E35C 2442FFFF */  addiu $v0, $v0, -1
.L0044E360:
/* 0044E360 10400004 */  beqz  $v0, .L0044E374
/* 0044E364 0062C021 */   addu  $t8, $v1, $v0
/* 0044E368 930F0000 */  lbu   $t7, ($t8)
/* 0044E36C 528FFFFC */  beql  $s4, $t7, .L0044E360
/* 0044E370 2442FFFF */   addiu $v0, $v0, -1
.L0044E374:
/* 0044E374 27A3093F */  addiu $v1, $sp, 0x93f
/* 0044E378 00624821 */  addu  $t1, $v1, $v0
/* 0044E37C A1200001 */  sb    $zero, 1($t1)
/* 0044E380 8F998780 */  lw    $t9, %call16(st_readbinary)($gp)
/* 0044E384 27A40940 */  addiu $a0, $sp, 0x940
/* 0044E388 24050072 */  li    $a1, 114
/* 0044E38C 0320F809 */  jalr  $t9
/* 0044E390 00000000 */   nop   
/* 0044E394 04410013 */  bgez  $v0, .L0044E3E4
/* 0044E398 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044E39C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044E3A0 8F858038 */  lw    $a1, %got(RO_1000E9C5)($gp)
/* 0044E3A4 8EC40000 */  lw    $a0, ($s6)
/* 0044E3A8 2406001D */  li    $a2, 29
/* 0044E3AC 2407001D */  li    $a3, 29
/* 0044E3B0 0320F809 */  jalr  $t9
/* 0044E3B4 24A5E9C5 */   addiu $a1, %lo(RO_1000E9C5) # addiu $a1, $a1, -0x163b
/* 0044E3B8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E3BC 8EC40000 */  lw    $a0, ($s6)
/* 0044E3C0 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044E3C4 0320F809 */  jalr  $t9
/* 0044E3C8 00000000 */   nop   
/* 0044E3CC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E3D0 24040001 */  li    $a0, 1
/* 0044E3D4 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044E3D8 0320F809 */  jalr  $t9
/* 0044E3DC 00000000 */   nop   
/* 0044E3E0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E3E4:
/* 0044E3E4 8F99864C */  lw    $t9, %call16(initialize_tree)($gp)
/* 0044E3E8 0320F809 */  jalr  $t9
/* 0044E3EC 00000000 */   nop   
/* 0044E3F0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E3F4 8F9981D0 */  lw    $t9, %call16(init_ibuffer)($gp)
/* 0044E3F8 0320F809 */  jalr  $t9
/* 0044E3FC 00000000 */   nop   
/* 0044E400 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E404 8F9986B4 */  lw    $t9, %call16(uini)($gp)
/* 0044E408 0320F809 */  jalr  $t9
/* 0044E40C 00000000 */   nop   
/* 0044E410 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E414 27A415C0 */  addiu $a0, $sp, 0x15c0
/* 0044E418 8F9986E8 */  lw    $t9, %call16(initur)($gp)
/* 0044E41C 0320F809 */  jalr  $t9
/* 0044E420 00000000 */   nop   
/* 0044E424 93B911C0 */  lbu   $t9, 0x11c0($sp)
/* 0044E428 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E42C 1720001C */  bnez  $t9, .L0044E4A0
/* 0044E430 27AD15C0 */   addiu $t5, $sp, 0x15c0
/* 0044E434 27A311BF */  addiu $v1, $sp, 0x11bf
/* 0044E438 25AB03FC */  addiu $t3, $t5, 0x3fc
/* 0044E43C 27AE11C0 */  addiu $t6, $sp, 0x11c0
.L0044E440:
/* 0044E440 89A80000 */  lwl   $t0, ($t5)
/* 0044E444 99A80003 */  lwr   $t0, 3($t5)
/* 0044E448 25AD000C */  addiu $t5, $t5, 0xc
/* 0044E44C 25CE000C */  addiu $t6, $t6, 0xc
/* 0044E450 A9C8FFF4 */  swl   $t0, -0xc($t6)
/* 0044E454 B9C8FFF7 */  swr   $t0, -9($t6)
/* 0044E458 89ACFFF8 */  lwl   $t4, -8($t5)
/* 0044E45C 99ACFFFB */  lwr   $t4, -5($t5)
/* 0044E460 A9CCFFF8 */  swl   $t4, -8($t6)
/* 0044E464 B9CCFFFB */  swr   $t4, -5($t6)
/* 0044E468 89A8FFFC */  lwl   $t0, -4($t5)
/* 0044E46C 99A8FFFF */  lwr   $t0, -1($t5)
/* 0044E470 A9C8FFFC */  swl   $t0, -4($t6)
/* 0044E474 15ABFFF2 */  bne   $t5, $t3, .L0044E440
/* 0044E478 B9C8FFFF */   swr   $t0, -1($t6)
/* 0044E47C 89A80000 */  lwl   $t0, ($t5)
/* 0044E480 99A80003 */  lwr   $t0, 3($t5)
/* 0044E484 240A0047 */  li    $t2, 71
/* 0044E488 0071C021 */  addu  $t8, $v1, $s1
/* 0044E48C A9C80000 */  swl   $t0, ($t6)
/* 0044E490 B9C80003 */  swr   $t0, 3($t6)
/* 0044E494 A30A0000 */  sb    $t2, ($t8)
/* 0044E498 1000000B */  b     .L0044E4C8
/* 0044E49C 02201025 */   move  $v0, $s1
.L0044E4A0:
/* 0044E4A0 93AF15BF */  lbu   $t7, 0x15bf($sp)
/* 0044E4A4 24020400 */  li    $v0, 1024
/* 0044E4A8 168F0007 */  bne   $s4, $t7, .L0044E4C8
/* 0044E4AC 27A311BF */   addiu $v1, $sp, 0x11bf
/* 0044E4B0 2442FFFF */  addiu $v0, $v0, -1
.L0044E4B4:
/* 0044E4B4 10400004 */  beqz  $v0, .L0044E4C8
/* 0044E4B8 00624821 */   addu  $t1, $v1, $v0
/* 0044E4BC 91390000 */  lbu   $t9, ($t1)
/* 0044E4C0 5299FFFC */  beql  $s4, $t9, .L0044E4B4
/* 0044E4C4 2442FFFF */   addiu $v0, $v0, -1
.L0044E4C8:
/* 0044E4C8 27A311BF */  addiu $v1, $sp, 0x11bf
/* 0044E4CC 00625821 */  addu  $t3, $v1, $v0
/* 0044E4D0 AFAB00E4 */  sw    $t3, 0xe4($sp)
/* 0044E4D4 A1600001 */  sb    $zero, 1($t3)
/* 0044E4D8 93AE19C8 */  lbu   $t6, 0x19c8($sp)
/* 0044E4DC 93AC1DC7 */  lbu   $t4, 0x1dc7($sp)
/* 0044E4E0 15C00008 */  bnez  $t6, .L0044E504
/* 0044E4E4 00000000 */   nop   
/* 0044E4E8 8F998028 */  lw    $t9, %got(func_0044BC78)($gp)
/* 0044E4EC 02E01025 */  move  $v0, $s7
/* 0044E4F0 2739BC78 */  addiu $t9, %lo(func_0044BC78) # addiu $t9, $t9, -0x4388
/* 0044E4F4 0320F809 */  jalr  $t9
/* 0044E4F8 00000000 */   nop   
/* 0044E4FC 1000000D */  b     .L0044E534
/* 0044E500 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044E504:
/* 0044E504 168C0008 */  bne   $s4, $t4, .L0044E528
/* 0044E508 24020400 */   li    $v0, 1024
/* 0044E50C 27A319C7 */  addiu $v1, $sp, 0x19c7
/* 0044E510 2442FFFF */  addiu $v0, $v0, -1
.L0044E514:
/* 0044E514 10400004 */  beqz  $v0, .L0044E528
/* 0044E518 00624021 */   addu  $t0, $v1, $v0
/* 0044E51C 910A0000 */  lbu   $t2, ($t0)
/* 0044E520 528AFFFC */  beql  $s4, $t2, .L0044E514
/* 0044E524 2442FFFF */   addiu $v0, $v0, -1
.L0044E528:
/* 0044E528 27A319C7 */  addiu $v1, $sp, 0x19c7
/* 0044E52C 0062C021 */  addu  $t8, $v1, $v0
/* 0044E530 A3000001 */  sb    $zero, 1($t8)
.L0044E534:
/* 0044E534 93AF1DD0 */  lbu   $t7, 0x1dd0($sp)
/* 0044E538 27A41DC8 */  addiu $a0, $sp, 0x1dc8
/* 0044E53C 11E00007 */  beqz  $t7, .L0044E55C
/* 0044E540 00000000 */   nop   
/* 0044E544 8F9987F0 */  lw    $t9, %call16(rewrite)($gp)
/* 0044E548 27A51DD0 */  addiu $a1, $sp, 0x1dd0
/* 0044E54C 24060400 */  li    $a2, 1024
/* 0044E550 0320F809 */  jalr  $t9
/* 0044E554 00003825 */   move  $a3, $zero
/* 0044E558 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E55C:
/* 0044E55C 8F998478 */  lw    $t9, %call16(set_opts)($gp)
/* 0044E560 93A40518 */  lbu   $a0, 0x518($sp)
/* 0044E564 93A5051C */  lbu   $a1, 0x51c($sp)
/* 0044E568 0320F809 */  jalr  $t9
/* 0044E56C 00000000 */   nop   
/* 0044E570 93A9093E */  lbu   $t1, 0x93e($sp)
/* 0044E574 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E578 24060005 */  li    $a2, 5
/* 0044E57C 11200007 */  beqz  $t1, .L0044E59C
/* 0044E580 24070005 */   li    $a3, 5
/* 0044E584 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044E588 8F858038 */  lw    $a1, %got(RO_1000E9C0)($gp)
/* 0044E58C 8EC40000 */  lw    $a0, ($s6)
/* 0044E590 0320F809 */  jalr  $t9
/* 0044E594 24A5E9C0 */   addiu $a1, %lo(RO_1000E9C0) # addiu $a1, $a1, -0x1640
/* 0044E598 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E59C:
/* 0044E59C 8F998560 */  lw    $t9, %call16(clear_sym_tab)($gp)
/* 0044E5A0 0320F809 */  jalr  $t9
/* 0044E5A4 00000000 */   nop   
/* 0044E5A8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E5AC 27A419C8 */  addiu $a0, $sp, 0x19c8
/* 0044E5B0 8F998164 */  lw    $t9, %call16(open_bin_file)($gp)
/* 0044E5B4 0320F809 */  jalr  $t9
/* 0044E5B8 00000000 */   nop   
/* 0044E5BC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E5C0 8F9981C0 */  lw    $t9, %call16(init_build)($gp)
/* 0044E5C4 0320F809 */  jalr  $t9
/* 0044E5C8 00000000 */   nop   
/* 0044E5CC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E5D0 8F9E897C */  lw     $fp, %got(i_ptr)($gp)
/* 0044E5D4 8F958978 */  lw     $s5, %got(ibuffer)($gp)
/* 0044E5D8 8F938A34 */  lw     $s3, %got(opt_labels)($gp)
/* 0044E5DC 8F928A5C */  lw     $s2, %got(tree_heap_mark)($gp)
/* 0044E5E0 8F918A58 */  lw     $s1, %got(tree_heap)($gp)
.L0044E5E4:
/* 0044E5E4 8F9982A8 */  lw    $t9, %call16(clear_ibuffer)($gp)
/* 0044E5E8 0320F809 */  jalr  $t9
/* 0044E5EC 00000000 */   nop   
/* 0044E5F0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E5F4 02202025 */  move  $a0, $s1
/* 0044E5F8 8F99882C */  lw    $t9, %call16(alloc_mark)($gp)
/* 0044E5FC 0320F809 */  jalr  $t9
/* 0044E600 00000000 */   nop   
/* 0044E604 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E608 AE420000 */  sw    $v0, ($s2)
/* 0044E60C 93A4093E */  lbu   $a0, 0x93e($sp)
/* 0044E610 8F9981C4 */  lw    $t9, %call16(build_tree)($gp)
/* 0044E614 0320F809 */  jalr  $t9
/* 0044E618 00000000 */   nop   
/* 0044E61C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E620 10400082 */  beqz  $v0, .L0044E82C
/* 0044E624 00408025 */   move  $s0, $v0
/* 0044E628 93B9093F */  lbu   $t9, 0x93f($sp)
/* 0044E62C 13200018 */  beqz  $t9, .L0044E690
/* 0044E630 00000000 */   nop   
/* 0044E634 8F8B8038 */  lw    $t3, %got(RO_1000E9B4)($gp)
/* 0044E638 8F998028 */  lw    $t9, %got(func_0044BA38)($gp)
/* 0044E63C 00402025 */  move  $a0, $v0
/* 0044E640 256BE9B4 */  addiu $t3, %lo(RO_1000E9B4) # addiu $t3, $t3, -0x164c
/* 0044E644 896E0000 */  lwl   $t6, ($t3)
/* 0044E648 996E0003 */  lwr   $t6, 3($t3)
/* 0044E64C 2739BA38 */  addiu $t9, %lo(func_0044BA38) # addiu $t9, $t9, -0x45c8
/* 0044E650 02E01025 */  move  $v0, $s7
/* 0044E654 ABAE0004 */  swl   $t6, 4($sp)
/* 0044E658 BBAE0007 */  swr   $t6, 7($sp)
/* 0044E65C 896D0004 */  lwl   $t5, 4($t3)
/* 0044E660 996D0007 */  lwr   $t5, 7($t3)
/* 0044E664 8FA50004 */  lw    $a1, 4($sp)
/* 0044E668 ABAD0008 */  swl   $t5, 8($sp)
/* 0044E66C BBAD000B */  swr   $t5, 0xb($sp)
/* 0044E670 896E0008 */  lwl   $t6, 8($t3)
/* 0044E674 996E000B */  lwr   $t6, 0xb($t3)
/* 0044E678 8FA60008 */  lw    $a2, 8($sp)
/* 0044E67C ABAE000C */  swl   $t6, 0xc($sp)
/* 0044E680 BBAE000F */  swr   $t6, 0xf($sp)
/* 0044E684 0320F809 */  jalr  $t9
/* 0044E688 8FA7000C */   lw    $a3, 0xc($sp)
/* 0044E68C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E690:
/* 0044E690 8F9985F0 */  lw    $t9, %call16(translate_tree)($gp)
/* 0044E694 02002025 */  move  $a0, $s0
/* 0044E698 0320F809 */  jalr  $t9
/* 0044E69C 00000000 */   nop   
/* 0044E6A0 93AC093F */  lbu   $t4, 0x93f($sp)
/* 0044E6A4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E6A8 00408025 */  move  $s0, $v0
/* 0044E6AC 51800019 */  beql  $t4, $zero, .L0044E714
/* 0044E6B0 926F0000 */   lbu   $t7, ($s3)
/* 0044E6B4 8F888038 */  lw    $t0, %got(RO_1000E9A8)($gp)
/* 0044E6B8 8F998028 */  lw    $t9, %got(func_0044BA38)($gp)
/* 0044E6BC 00402025 */  move  $a0, $v0
/* 0044E6C0 2508E9A8 */  addiu $t0, %lo(RO_1000E9A8) # addiu $t0, $t0, -0x1658
/* 0044E6C4 89180000 */  lwl   $t8, ($t0)
/* 0044E6C8 99180003 */  lwr   $t8, 3($t0)
/* 0044E6CC 2739BA38 */  addiu $t9, %lo(func_0044BA38) # addiu $t9, $t9, -0x45c8
/* 0044E6D0 02E01025 */  move  $v0, $s7
/* 0044E6D4 ABB80004 */  swl   $t8, 4($sp)
/* 0044E6D8 BBB80007 */  swr   $t8, 7($sp)
/* 0044E6DC 890A0004 */  lwl   $t2, 4($t0)
/* 0044E6E0 990A0007 */  lwr   $t2, 7($t0)
/* 0044E6E4 8FA50004 */  lw    $a1, 4($sp)
/* 0044E6E8 ABAA0008 */  swl   $t2, 8($sp)
/* 0044E6EC BBAA000B */  swr   $t2, 0xb($sp)
/* 0044E6F0 89180008 */  lwl   $t8, 8($t0)
/* 0044E6F4 9918000B */  lwr   $t8, 0xb($t0)
/* 0044E6F8 8FA60008 */  lw    $a2, 8($sp)
/* 0044E6FC ABB8000C */  swl   $t8, 0xc($sp)
/* 0044E700 BBB8000F */  swr   $t8, 0xf($sp)
/* 0044E704 0320F809 */  jalr  $t9
/* 0044E708 8FA7000C */   lw    $a3, 0xc($sp)
/* 0044E70C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E710 926F0000 */  lbu   $t7, ($s3)
.L0044E714:
/* 0044E714 93A91DD0 */  lbu   $t1, 0x1dd0($sp)
/* 0044E718 11E00011 */  beqz  $t7, .L0044E760
/* 0044E71C 00000000 */   nop   
/* 0044E720 11200009 */  beqz  $t1, .L0044E748
/* 0044E724 02002025 */   move  $a0, $s0
/* 0044E728 8F998418 */  lw    $t9, %call16(labelopt)($gp)
/* 0044E72C 02002025 */  move  $a0, $s0
/* 0044E730 27A51DC8 */  addiu $a1, $sp, 0x1dc8
/* 0044E734 93A6093F */  lbu   $a2, 0x93f($sp)
/* 0044E738 0320F809 */  jalr  $t9
/* 0044E73C 93A70516 */   lbu   $a3, 0x516($sp)
/* 0044E740 10000007 */  b     .L0044E760
/* 0044E744 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044E748:
/* 0044E748 8F998418 */  lw    $t9, %call16(labelopt)($gp)
/* 0044E74C 02C02825 */  move  $a1, $s6
/* 0044E750 93A6093F */  lbu   $a2, 0x93f($sp)
/* 0044E754 0320F809 */  jalr  $t9
/* 0044E758 93A70516 */   lbu   $a3, 0x516($sp)
/* 0044E75C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E760:
/* 0044E760 8F998028 */  lw    $t9, %got(func_0044B2EC)($gp)
/* 0044E764 02002025 */  move  $a0, $s0
/* 0044E768 02E01025 */  move  $v0, $s7
/* 0044E76C 2739B2EC */  addiu $t9, %lo(func_0044B2EC) # addiu $t9, $t9, -0x4d14
/* 0044E770 0320F809 */  jalr  $t9
/* 0044E774 00000000 */   nop   
/* 0044E778 93B909C0 */  lbu   $t9, 0x9c0($sp)
/* 0044E77C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E780 1320000B */  beqz  $t9, .L0044E7B0
/* 0044E784 00000000 */   nop   
/* 0044E788 8F9986B8 */  lw    $t9, %call16(inituwrite)($gp)
/* 0044E78C 27A409C0 */  addiu $a0, $sp, 0x9c0
/* 0044E790 0320F809 */  jalr  $t9
/* 0044E794 00000000 */   nop   
/* 0044E798 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E79C 02002025 */  move  $a0, $s0
/* 0044E7A0 8F99869C */  lw    $t9, %call16(u_tree)($gp)
/* 0044E7A4 0320F809 */  jalr  $t9
/* 0044E7A8 00000000 */   nop   
/* 0044E7AC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E7B0:
/* 0044E7B0 8F9983D4 */  lw    $t9, %call16(init_eval)($gp)
/* 0044E7B4 0320F809 */  jalr  $t9
/* 0044E7B8 00000000 */   nop   
/* 0044E7BC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E7C0 02002025 */  move  $a0, $s0
/* 0044E7C4 24050048 */  li    $a1, 72
/* 0044E7C8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0044E7CC 0320F809 */  jalr  $t9
/* 0044E7D0 00000000 */   nop   
/* 0044E7D4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E7D8 8EA40000 */  lw    $a0, ($s5)
/* 0044E7DC 8FC50000 */  lw    $a1, ($fp)
/* 0044E7E0 8F828974 */  lw     $v0, %got(ibuffer_size)($gp)
/* 0044E7E4 8F8D8984 */  lw     $t5, %got(d_ptr)($gp)
/* 0044E7E8 8F99816C */  lw    $t9, %call16(output_inst_bin)($gp)
/* 0044E7EC 8C420000 */  lw    $v0, ($v0)
/* 0044E7F0 8DAD0000 */  lw    $t5, ($t5)
/* 0044E7F4 24A5FFFF */  addiu $a1, $a1, -1
/* 0044E7F8 00025900 */  sll   $t3, $v0, 4
/* 0044E7FC 008B3021 */  addu  $a2, $a0, $t3
/* 0044E800 24C6FFF0 */  addiu $a2, $a2, -0x10
/* 0044E804 0320F809 */  jalr  $t9
/* 0044E808 004D3823 */   subu  $a3, $v0, $t5
/* 0044E80C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E810 02202025 */  move  $a0, $s1
/* 0044E814 8E450000 */  lw    $a1, ($s2)
/* 0044E818 8F998830 */  lw    $t9, %call16(alloc_release)($gp)
/* 0044E81C 0320F809 */  jalr  $t9
/* 0044E820 00000000 */   nop   
/* 0044E824 1000FF6F */  b     .L0044E5E4
/* 0044E828 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0044E82C:
/* 0044E82C 8F998168 */  lw    $t9, %call16(close_bin_file)($gp)
/* 0044E830 0320F809 */  jalr  $t9
/* 0044E834 00000000 */   nop   
/* 0044E838 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E83C 8F9982A8 */  lw    $t9, %call16(clear_ibuffer)($gp)
/* 0044E840 0320F809 */  jalr  $t9
/* 0044E844 00000000 */   nop   
/* 0044E848 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E84C 8F9981DC */  lw    $t9, %call16(emit_vers)($gp)
/* 0044E850 0320F809 */  jalr  $t9
/* 0044E854 00000000 */   nop   
/* 0044E858 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E85C 8F9982B0 */  lw    $t9, %call16(emit_pic)($gp)
/* 0044E860 8F8489E4 */  lw     $a0, %got(pic_level)($gp)
/* 0044E864 0320F809 */  jalr  $t9
/* 0044E868 8C840000 */   lw    $a0, ($a0)
/* 0044E86C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E870 8F998590 */  lw    $t9, %call16(output_decls)($gp)
/* 0044E874 0320F809 */  jalr  $t9
/* 0044E878 00000000 */   nop   
/* 0044E87C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E880 27A411C0 */  addiu $a0, $sp, 0x11c0
/* 0044E884 8F998164 */  lw    $t9, %call16(open_bin_file)($gp)
/* 0044E888 0320F809 */  jalr  $t9
/* 0044E88C 00000000 */   nop   
/* 0044E890 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E894 8EA40000 */  lw    $a0, ($s5)
/* 0044E898 8FC50000 */  lw    $a1, ($fp)
/* 0044E89C 8F828974 */  lw     $v0, %got(ibuffer_size)($gp)
/* 0044E8A0 8F8C8984 */  lw     $t4, %got(d_ptr)($gp)
/* 0044E8A4 8F99816C */  lw    $t9, %call16(output_inst_bin)($gp)
/* 0044E8A8 8C420000 */  lw    $v0, ($v0)
/* 0044E8AC 8D8C0000 */  lw    $t4, ($t4)
/* 0044E8B0 24A5FFFF */  addiu $a1, $a1, -1
/* 0044E8B4 00027100 */  sll   $t6, $v0, 4
/* 0044E8B8 008E3021 */  addu  $a2, $a0, $t6
/* 0044E8BC 24C6FFF0 */  addiu $a2, $a2, -0x10
/* 0044E8C0 0320F809 */  jalr  $t9
/* 0044E8C4 004C3823 */   subu  $a3, $v0, $t4
/* 0044E8C8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E8CC 8F998168 */  lw    $t9, %call16(close_bin_file)($gp)
/* 0044E8D0 0320F809 */  jalr  $t9
/* 0044E8D4 00000000 */   nop   
/* 0044E8D8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E8DC 27A411C0 */  addiu $a0, $sp, 0x11c0
/* 0044E8E0 27A519C8 */  addiu $a1, $sp, 0x19c8
/* 0044E8E4 8F998170 */  lw    $t9, %call16(cat_files)($gp)
/* 0044E8E8 0320F809 */  jalr  $t9
/* 0044E8EC 00000000 */   nop   
/* 0044E8F0 93A80515 */  lbu   $t0, 0x515($sp)
/* 0044E8F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E8F8 15000007 */  bnez  $t0, .L0044E918
/* 0044E8FC 00000000 */   nop   
/* 0044E900 8F998028 */  lw    $t9, %got(func_0044BE70)($gp)
/* 0044E904 02E01025 */  move  $v0, $s7
/* 0044E908 2739BE70 */  addiu $t9, %lo(func_0044BE70) # addiu $t9, $t9, -0x4190
/* 0044E90C 0320F809 */  jalr  $t9
/* 0044E910 00000000 */   nop   
/* 0044E914 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E918:
/* 0044E918 8F8A8994 */  lw     $t2, %got(ascii_out)($gp)
/* 0044E91C 8FB800E4 */  lw    $t8, 0xe4($sp)
/* 0044E920 914A0000 */  lbu   $t2, ($t2)
/* 0044E924 51400009 */  beql  $t2, $zero, .L0044E94C
/* 0044E928 93AF093E */   lbu   $t7, 0x93e($sp)
/* 0044E92C A3140001 */  sb    $s4, 1($t8)
/* 0044E930 8F9981AC */  lw    $t9, %call16(output_inst_ascii)($gp)
/* 0044E934 27A411C0 */  addiu $a0, $sp, 0x11c0
/* 0044E938 27A50534 */  addiu $a1, $sp, 0x534
/* 0044E93C 0320F809 */  jalr  $t9
/* 0044E940 00000000 */   nop   
/* 0044E944 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0044E948 93AF093E */  lbu   $t7, 0x93e($sp)
.L0044E94C:
/* 0044E94C 11E00006 */  beqz  $t7, .L0044E968
/* 0044E950 00000000 */   nop   
/* 0044E954 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044E958 8EC40000 */  lw    $a0, ($s6)
/* 0044E95C 0320F809 */  jalr  $t9
/* 0044E960 00000000 */   nop   
/* 0044E964 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E968:
/* 0044E968 8F998544 */  lw    $t9, %call16(has_errors)($gp)
/* 0044E96C 8FA40510 */  lw    $a0, 0x510($sp)
/* 0044E970 0320F809 */  jalr  $t9
/* 0044E974 00000000 */   nop   
/* 0044E978 10400006 */  beqz  $v0, .L0044E994
/* 0044E97C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0044E980 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0044E984 24040001 */  li    $a0, 1
/* 0044E988 0320F809 */  jalr  $t9
/* 0044E98C 00000000 */   nop   
/* 0044E990 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0044E994:
/* 0044E994 00001025 */  move  $v0, $zero
.L0044E998:
/* 0044E998 8FBF00D4 */  lw    $ra, 0xd4($sp)
/* 0044E99C 8FB000AC */  lw    $s0, 0xac($sp)
/* 0044E9A0 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 0044E9A4 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 0044E9A8 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 0044E9AC 8FB400BC */  lw    $s4, 0xbc($sp)
/* 0044E9B0 8FB500C0 */  lw    $s5, 0xc0($sp)
/* 0044E9B4 8FB600C4 */  lw    $s6, 0xc4($sp)
/* 0044E9B8 8FB700C8 */  lw    $s7, 0xc8($sp)
/* 0044E9BC 8FBE00D0 */  lw    $fp, 0xd0($sp)
/* 0044E9C0 03E00008 */  jr    $ra
/* 0044E9C4 27BD21D0 */   addiu $sp, $sp, 0x21d0
    .type main1, @function
    .size main1, .-main1
    .end main1
)"");
