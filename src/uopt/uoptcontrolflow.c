__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000B3C0:
    # 0042EB10 incorp_feedback
    .ascii "uopt: Internal error: Feedback file length doesn't match its structure."

RO_1000B407:
    # 0042EB10 incorp_feedback
    .ascii " Got: "

RO_1000B40D:
    # 0042EB10 incorp_feedback
    .ascii "                      Expected: "

RO_1000B42D:
    # 0042EB10 incorp_feedback
    .ascii "uopt: Internal error: Callee record magic number mismatch in feedback file."

RO_1000B478:
    # 0042EF10 func_0042EF10
    .ascii " Got: "

RO_1000B47E:
    # 0042EF10 func_0042EF10
    .ascii "                \t    Expected: "

RO_1000B49D:
    # 0042EF10 func_0042EF10
    .asciz " uopt: Internal error: Basic block record magic number mismatch in feedback file."

RO_1000B4F0:
    # 0042F6CC controlflow
    .ascii " undefined."

RO_1000B4FB:
    # 0042F6CC controlflow
    .ascii ": label L"

RO_1000B504:
    # 0042F6CC controlflow
    .asciz "uopt: Internal: "

.data
D_10010690:
    # 0042EEA8 empty_bb
    .byte 0x00,0x80,0x40,0x10,0x80,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x80,0x00,0x00,0x00

D_100106A0:
    # 0042F6CC controlflow
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_100106A8:
    # 0042F6CC controlflow
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10

D_100106B8:
    # 0042F6CC controlflow
    .byte 0x10,0x80,0xe7,0x12,0x80,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x42,0x00,0x82,0x00,0x00

D_100106CC:
    # 0042F6CC controlflow
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel incorp_feedback
    .ent incorp_feedback
    # 0043771C optinit
/* 0042EB10 3C1C0FBF */  .cpload $t9
/* 0042EB14 279CB780 */  
/* 0042EB18 0399E021 */  
/* 0042EB1C 8F868948 */  lw     $a2, %got(feedback)($gp)
/* 0042EB20 27BDFF80 */  addiu $sp, $sp, -0x80
/* 0042EB24 AFB50028 */  sw    $s5, 0x28($sp)
/* 0042EB28 8CC60000 */  lw    $a2, ($a2)
/* 0042EB2C AFB00014 */  sw    $s0, 0x14($sp)
/* 0042EB30 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0042EB34 8CD5001C */  lw    $s5, 0x1c($a2)
/* 0042EB38 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0042EB3C AFB6002C */  sw    $s6, 0x2c($sp)
/* 0042EB40 AFB40024 */  sw    $s4, 0x24($sp)
/* 0042EB44 AFB30020 */  sw    $s3, 0x20($sp)
/* 0042EB48 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0042EB4C AFB10018 */  sw    $s1, 0x18($sp)
/* 0042EB50 12A00021 */  beqz  $s5, .L0042EBD8
/* 0042EB54 24D00060 */   addiu $s0, $a2, 0x60
/* 0042EB58 32A30003 */  andi  $v1, $s5, 3
/* 0042EB5C 00031823 */  negu  $v1, $v1
/* 0042EB60 1060000A */  beqz  $v1, .L0042EB8C
/* 0042EB64 02A09025 */   move  $s2, $s5
/* 0042EB68 00751021 */  addu  $v0, $v1, $s5
/* 0042EB6C 2413FFFC */  li    $s3, -4
.L0042EB70:
/* 0042EB70 8E0E0000 */  lw    $t6, ($s0)
/* 0042EB74 2652FFFF */  addiu $s2, $s2, -1
/* 0042EB78 01D37824 */  and   $t7, $t6, $s3
/* 0042EB7C 020F8021 */  addu  $s0, $s0, $t7
/* 0042EB80 1452FFFB */  bne   $v0, $s2, .L0042EB70
/* 0042EB84 26100008 */   addiu $s0, $s0, 8
/* 0042EB88 12400013 */  beqz  $s2, .L0042EBD8
.L0042EB8C:
/* 0042EB8C 2413FFFC */   li    $s3, -4
.L0042EB90:
/* 0042EB90 8E180000 */  lw    $t8, ($s0)
/* 0042EB94 2652FFFC */  addiu $s2, $s2, -4
/* 0042EB98 0313C824 */  and   $t9, $t8, $s3
/* 0042EB9C 02198021 */  addu  $s0, $s0, $t9
/* 0042EBA0 8E080008 */  lw    $t0, 8($s0)
/* 0042EBA4 26100008 */  addiu $s0, $s0, 8
/* 0042EBA8 01134824 */  and   $t1, $t0, $s3
/* 0042EBAC 02098021 */  addu  $s0, $s0, $t1
/* 0042EBB0 8E0A0008 */  lw    $t2, 8($s0)
/* 0042EBB4 26100008 */  addiu $s0, $s0, 8
/* 0042EBB8 01535824 */  and   $t3, $t2, $s3
/* 0042EBBC 020B8021 */  addu  $s0, $s0, $t3
/* 0042EBC0 8E0C0008 */  lw    $t4, 8($s0)
/* 0042EBC4 26100008 */  addiu $s0, $s0, 8
/* 0042EBC8 01936824 */  and   $t5, $t4, $s3
/* 0042EBCC 020D8021 */  addu  $s0, $s0, $t5
/* 0042EBD0 1640FFEF */  bnez  $s2, .L0042EB90
/* 0042EBD4 26100008 */   addiu $s0, $s0, 8
.L0042EBD8:
/* 0042EBD8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0042EBDC 8CC40008 */  lw    $a0, 8($a2)
/* 0042EBE0 2413FFFC */  li    $s3, -4
/* 0042EBE4 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0042EBE8 AFA6007C */  sw    $a2, 0x7c($sp)
/* 0042EBEC 0320F809 */  jalr  $t9
/* 0042EBF0 00042080 */   sll   $a0, $a0, 2
/* 0042EBF4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EBF8 8FAE007C */  lw    $t6, 0x7c($sp)
/* 0042EBFC 0040B025 */  move  $s6, $v0
/* 0042EC00 8F9988B4 */  lw    $t9, %call16(xmalloc)($gp)
/* 0042EC04 8DC40008 */  lw    $a0, 8($t6)
/* 0042EC08 0320F809 */  jalr  $t9
/* 0042EC0C 00000000 */   nop   
/* 0042EC10 8FAF007C */  lw    $t7, 0x7c($sp)
/* 0042EC14 AFA20064 */  sw    $v0, 0x64($sp)
/* 0042EC18 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EC1C 8DF50008 */  lw    $s5, 8($t7)
/* 0042EC20 0000A025 */  move  $s4, $zero
/* 0042EC24 02C08825 */  move  $s1, $s6
/* 0042EC28 26B50000 */  addiu $s5, $s5, 0
/* 0042EC2C 0015C080 */  sll   $t8, $s5, 2
/* 0042EC30 AFB80038 */  sw    $t8, 0x38($sp)
/* 0042EC34 2412FFFF */  li    $s2, -1
.L0042EC38:
/* 0042EC38 8F998178 */  lw    $t9, %call16(path_blockno)($gp)
/* 0042EC3C AE200000 */  sw    $zero, ($s1)
/* 0042EC40 8E050000 */  lw    $a1, ($s0)
/* 0042EC44 0320F809 */  jalr  $t9
/* 0042EC48 26040004 */   addiu $a0, $s0, 4
/* 0042EC4C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EC50 10520006 */  beq   $v0, $s2, .L0042EC6C
/* 0042EC54 00402025 */   move  $a0, $v0
/* 0042EC58 8F99843C */  lw    $t9, %call16(getproc)($gp)
/* 0042EC5C 0320F809 */  jalr  $t9
/* 0042EC60 00000000 */   nop   
/* 0042EC64 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EC68 AE220000 */  sw    $v0, ($s1)
.L0042EC6C:
/* 0042EC6C 8E190000 */  lw    $t9, ($s0)
/* 0042EC70 8FA90038 */  lw    $t1, 0x38($sp)
/* 0042EC74 26940004 */  addiu $s4, $s4, 4
/* 0042EC78 03334024 */  and   $t0, $t9, $s3
/* 0042EC7C 02088021 */  addu  $s0, $s0, $t0
/* 0042EC80 26100008 */  addiu $s0, $s0, 8
/* 0042EC84 1689FFEC */  bne   $s4, $t1, .L0042EC38
/* 0042EC88 26310004 */   addiu $s1, $s1, 4
/* 0042EC8C 8FAA007C */  lw    $t2, 0x7c($sp)
/* 0042EC90 3C14636F */  lui   $s4, 0x636f
/* 0042EC94 36947270 */  ori   $s4, $s4, 0x7270
/* 0042EC98 8D550004 */  lw    $s5, 4($t2)
/* 0042EC9C 02008825 */  move  $s1, $s0
/* 0042ECA0 02809821 */  move  $s3, $s4
/* 0042ECA4 12A00052 */  beqz  $s5, .L0042EDF0
/* 0042ECA8 02A09025 */   move  $s2, $s5
/* 0042ECAC 2415000C */  li    $s5, 12
/* 0042ECB0 8F908908 */  lw     $s0, %got(err)($gp)
.L0042ECB4:
/* 0042ECB4 8E2B0000 */  lw    $t3, ($s1)
/* 0042ECB8 2406004B */  li    $a2, 75
/* 0042ECBC 2407004B */  li    $a3, 75
/* 0042ECC0 526B003B */  beql  $s3, $t3, .L0042EDB0
/* 0042ECC4 8E2C0004 */   lw    $t4, 4($s1)
/* 0042ECC8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042ECCC 8F858044 */  lw    $a1, %got(RO_1000B42D)($gp)
/* 0042ECD0 8E040000 */  lw    $a0, ($s0)
/* 0042ECD4 0320F809 */  jalr  $t9
/* 0042ECD8 24A5B42D */   addiu $a1, %lo(RO_1000B42D) # addiu $a1, $a1, -0x4bd3
/* 0042ECDC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042ECE0 8E040000 */  lw    $a0, ($s0)
/* 0042ECE4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0042ECE8 0320F809 */  jalr  $t9
/* 0042ECEC 00000000 */   nop   
/* 0042ECF0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042ECF4 8E040000 */  lw    $a0, ($s0)
/* 0042ECF8 24060020 */  li    $a2, 32
/* 0042ECFC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042ED00 8F858044 */  lw    $a1, %got(RO_1000B40D)($gp)
/* 0042ED04 24070020 */  li    $a3, 32
/* 0042ED08 0320F809 */  jalr  $t9
/* 0042ED0C 24A5B40D */   addiu $a1, %lo(RO_1000B40D) # addiu $a1, $a1, -0x4bf3
/* 0042ED10 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042ED14 8E040000 */  lw    $a0, ($s0)
/* 0042ED18 02802825 */  move  $a1, $s4
/* 0042ED1C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0042ED20 24060001 */  li    $a2, 1
/* 0042ED24 24070010 */  li    $a3, 16
/* 0042ED28 0320F809 */  jalr  $t9
/* 0042ED2C 00000000 */   nop   
/* 0042ED30 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042ED34 8E040000 */  lw    $a0, ($s0)
/* 0042ED38 24060006 */  li    $a2, 6
/* 0042ED3C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042ED40 8F858044 */  lw    $a1, %got(RO_1000B407)($gp)
/* 0042ED44 24070006 */  li    $a3, 6
/* 0042ED48 0320F809 */  jalr  $t9
/* 0042ED4C 24A5B407 */   addiu $a1, %lo(RO_1000B407) # addiu $a1, $a1, -0x4bf9
/* 0042ED50 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042ED54 8E040000 */  lw    $a0, ($s0)
/* 0042ED58 8E250000 */  lw    $a1, ($s1)
/* 0042ED5C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0042ED60 24060001 */  li    $a2, 1
/* 0042ED64 24070010 */  li    $a3, 16
/* 0042ED68 0320F809 */  jalr  $t9
/* 0042ED6C 00000000 */   nop   
/* 0042ED70 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042ED74 8E040000 */  lw    $a0, ($s0)
/* 0042ED78 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0042ED7C 0320F809 */  jalr  $t9
/* 0042ED80 00000000 */   nop   
/* 0042ED84 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042ED88 8E040000 */  lw    $a0, ($s0)
/* 0042ED8C 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0042ED90 0320F809 */  jalr  $t9
/* 0042ED94 00000000 */   nop   
/* 0042ED98 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042ED9C 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0042EDA0 0320F809 */  jalr  $t9
/* 0042EDA4 00000000 */   nop   
/* 0042EDA8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EDAC 8E2C0004 */  lw    $t4, 4($s1)
.L0042EDB0:
/* 0042EDB0 000C6880 */  sll   $t5, $t4, 2
/* 0042EDB4 02CD7021 */  addu  $t6, $s6, $t5
/* 0042EDB8 8DC20000 */  lw    $v0, ($t6)
/* 0042EDBC 50400003 */  beql  $v0, $zero, .L0042EDCC
/* 0042EDC0 8E280020 */   lw    $t0, 0x20($s1)
/* 0042EDC4 AC510034 */  sw    $s1, 0x34($v0)
/* 0042EDC8 8E280020 */  lw    $t0, 0x20($s1)
.L0042EDCC:
/* 0042EDCC 8E2F001C */  lw    $t7, 0x1c($s1)
/* 0042EDD0 2652FFFF */  addiu $s2, $s2, -1
/* 0042EDD4 01150019 */  multu $t0, $s5
/* 0042EDD8 000FC100 */  sll   $t8, $t7, 4
/* 0042EDDC 0238C821 */  addu  $t9, $s1, $t8
/* 0042EDE0 00004812 */  mflo  $t1
/* 0042EDE4 03298821 */  addu  $s1, $t9, $t1
/* 0042EDE8 1640FFB2 */  bnez  $s2, .L0042ECB4
/* 0042EDEC 26310038 */   addiu $s1, $s1, 0x38
.L0042EDF0:
/* 0042EDF0 8F8A894C */  lw     $t2, %got(feedback_end)($gp)
/* 0042EDF4 8F908908 */  lw     $s0, %got(err)($gp)
/* 0042EDF8 24060047 */  li    $a2, 71
/* 0042EDFC 8D4A0000 */  lw    $t2, ($t2)
/* 0042EE00 24070047 */  li    $a3, 71
/* 0042EE04 122A0015 */  beq   $s1, $t2, .L0042EE5C
/* 0042EE08 00000000 */   nop   
/* 0042EE0C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042EE10 8F858044 */  lw    $a1, %got(RO_1000B3C0)($gp)
/* 0042EE14 8E040000 */  lw    $a0, ($s0)
/* 0042EE18 0320F809 */  jalr  $t9
/* 0042EE1C 24A5B3C0 */   addiu $a1, %lo(RO_1000B3C0) # addiu $a1, $a1, -0x4c40
/* 0042EE20 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EE24 8E040000 */  lw    $a0, ($s0)
/* 0042EE28 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0042EE2C 0320F809 */  jalr  $t9
/* 0042EE30 00000000 */   nop   
/* 0042EE34 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EE38 8E040000 */  lw    $a0, ($s0)
/* 0042EE3C 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0042EE40 0320F809 */  jalr  $t9
/* 0042EE44 00000000 */   nop   
/* 0042EE48 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EE4C 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0042EE50 0320F809 */  jalr  $t9
/* 0042EE54 00000000 */   nop   
/* 0042EE58 8FBC0030 */  lw    $gp, 0x30($sp)
.L0042EE5C:
/* 0042EE5C 8F998774 */  lw    $t9, %call16(st_free)($gp)
/* 0042EE60 0320F809 */  jalr  $t9
/* 0042EE64 00000000 */   nop   
/* 0042EE68 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EE6C 8FA40064 */  lw    $a0, 0x64($sp)
/* 0042EE70 8F9988AC */  lw    $t9, %call16(xfree)($gp)
/* 0042EE74 0320F809 */  jalr  $t9
/* 0042EE78 00000000 */   nop   
/* 0042EE7C 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0042EE80 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042EE84 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042EE88 8FB10018 */  lw    $s1, 0x18($sp)
/* 0042EE8C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042EE90 8FB30020 */  lw    $s3, 0x20($sp)
/* 0042EE94 8FB40024 */  lw    $s4, 0x24($sp)
/* 0042EE98 8FB50028 */  lw    $s5, 0x28($sp)
/* 0042EE9C 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0042EEA0 03E00008 */  jr    $ra
/* 0042EEA4 27BD0080 */   addiu $sp, $sp, 0x80
    .type incorp_feedback, @function
    .size incorp_feedback, .-incorp_feedback
    .end incorp_feedback

glabel empty_bb
    .ent empty_bb
    # 0042F0FC bb_frequencies
/* 0042EEA8 8C82001C */  lw    $v0, 0x1c($a0)
.L0042EEAC:
/* 0042EEAC 904E0000 */  lbu   $t6, ($v0)
/* 0042EEB0 2DCF0080 */  sltiu $t7, $t6, 0x80
/* 0042EEB4 11E00009 */  beqz  $t7, .L0042EEDC
/* 0042EEB8 00000000 */   nop   
/* 0042EEBC 8F888044 */  lw    $t0, %got(D_10010690)($gp)
/* 0042EEC0 000EC143 */  sra   $t8, $t6, 5
/* 0042EEC4 0018C880 */  sll   $t9, $t8, 2
/* 0042EEC8 25080690 */  addiu $t0, %lo(D_10010690) # addiu $t0, $t0, 0x690
/* 0042EECC 01194821 */  addu  $t1, $t0, $t9
/* 0042EED0 8D2A0000 */  lw    $t2, ($t1)
/* 0042EED4 01CA5804 */  sllv  $t3, $t2, $t6
/* 0042EED8 296F0000 */  slti  $t7, $t3, 0
.L0042EEDC:
/* 0042EEDC 55E00004 */  bnezl $t7, .L0042EEF0
/* 0042EEE0 8C8D0020 */   lw    $t5, 0x20($a0)
/* 0042EEE4 03E00008 */  jr    $ra
/* 0042EEE8 00001025 */   move  $v0, $zero

/* 0042EEEC 8C8D0020 */  lw    $t5, 0x20($a0)
.L0042EEF0:
/* 0042EEF0 144D0003 */  bne   $v0, $t5, .L0042EF00
/* 0042EEF4 00000000 */   nop   
/* 0042EEF8 03E00008 */  jr    $ra
/* 0042EEFC 24020001 */   li    $v0, 1

.L0042EF00:
/* 0042EF00 1000FFEA */  b     .L0042EEAC
/* 0042EF04 8C420008 */   lw    $v0, 8($v0)
/* 0042EF08 03E00008 */  jr    $ra
/* 0042EF0C 00000000 */   nop   
    .type empty_bb, @function
    .size empty_bb, .-empty_bb
    .end empty_bb

    .type func_0042EF10, @function
func_0042EF10:
    # 0042F0FC bb_frequencies
/* 0042EF10 3C1C0FBF */  .cpload $t9
/* 0042EF14 279CB380 */  
/* 0042EF18 0399E021 */  
/* 0042EF1C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0042EF20 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042EF24 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0042EF28 AFB00014 */  sw    $s0, 0x14($sp)
/* 0042EF2C AFA40020 */  sw    $a0, 0x20($sp)
/* 0042EF30 8C8F0000 */  lw    $t7, ($a0)
/* 0042EF34 3C016C6D */  lui   $at, 0x6c6d
/* 0042EF38 34215E2C */  ori   $at, $at, 0x5e2c
/* 0042EF3C 11E1003C */  beq   $t7, $at, .L0042F030
/* 0042EF40 24060051 */   li    $a2, 81
/* 0042EF44 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042EF48 8F908908 */  lw     $s0, %got(err)($gp)
/* 0042EF4C 8F858044 */  lw    $a1, %got(RO_1000B49D)($gp)
/* 0042EF50 24070051 */  li    $a3, 81
/* 0042EF54 8E040000 */  lw    $a0, ($s0)
/* 0042EF58 0320F809 */  jalr  $t9
/* 0042EF5C 24A5B49D */   addiu $a1, %lo(RO_1000B49D) # addiu $a1, $a1, -0x4b63
/* 0042EF60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042EF64 8E040000 */  lw    $a0, ($s0)
/* 0042EF68 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0042EF6C 0320F809 */  jalr  $t9
/* 0042EF70 00000000 */   nop   
/* 0042EF74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042EF78 8E040000 */  lw    $a0, ($s0)
/* 0042EF7C 2406001F */  li    $a2, 31
/* 0042EF80 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042EF84 8F858044 */  lw    $a1, %got(RO_1000B47E)($gp)
/* 0042EF88 2407001F */  li    $a3, 31
/* 0042EF8C 0320F809 */  jalr  $t9
/* 0042EF90 24A5B47E */   addiu $a1, %lo(RO_1000B47E) # addiu $a1, $a1, -0x4b82
/* 0042EF94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042EF98 3C056C6D */  lui   $a1, 0x6c6d
/* 0042EF9C 34A55E2C */  ori   $a1, $a1, 0x5e2c
/* 0042EFA0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0042EFA4 8E040000 */  lw    $a0, ($s0)
/* 0042EFA8 24060001 */  li    $a2, 1
/* 0042EFAC 0320F809 */  jalr  $t9
/* 0042EFB0 24070010 */   li    $a3, 16
/* 0042EFB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042EFB8 8E040000 */  lw    $a0, ($s0)
/* 0042EFBC 24060006 */  li    $a2, 6
/* 0042EFC0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042EFC4 8F858044 */  lw    $a1, %got(RO_1000B478)($gp)
/* 0042EFC8 24070006 */  li    $a3, 6
/* 0042EFCC 0320F809 */  jalr  $t9
/* 0042EFD0 24A5B478 */   addiu $a1, %lo(RO_1000B478) # addiu $a1, $a1, -0x4b88
/* 0042EFD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042EFD8 8FB80020 */  lw    $t8, 0x20($sp)
/* 0042EFDC 8E040000 */  lw    $a0, ($s0)
/* 0042EFE0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0042EFE4 24060001 */  li    $a2, 1
/* 0042EFE8 24070010 */  li    $a3, 16
/* 0042EFEC 0320F809 */  jalr  $t9
/* 0042EFF0 8F050000 */   lw    $a1, ($t8)
/* 0042EFF4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042EFF8 8E040000 */  lw    $a0, ($s0)
/* 0042EFFC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0042F000 0320F809 */  jalr  $t9
/* 0042F004 00000000 */   nop   
/* 0042F008 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042F00C 8E040000 */  lw    $a0, ($s0)
/* 0042F010 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0042F014 0320F809 */  jalr  $t9
/* 0042F018 00000000 */   nop   
/* 0042F01C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042F020 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0042F024 0320F809 */  jalr  $t9
/* 0042F028 00000000 */   nop   
/* 0042F02C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0042F030:
/* 0042F030 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0042F034 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042F038 27BD0020 */  addiu $sp, $sp, 0x20
/* 0042F03C 03E00008 */  jr    $ra
/* 0042F040 00000000 */   nop   

    .type func_0042F044, @function
func_0042F044:
    # 0042F044 func_0042F044
    # 0042F0FC bb_frequencies
/* 0042F044 3C1C0FBF */  .cpload $t9
/* 0042F048 279CB24C */  
/* 0042F04C 0399E021 */  
/* 0042F050 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0042F054 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042F058 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0042F05C 00802825 */  move  $a1, $a0
/* 0042F060 00403025 */  move  $a2, $v0
/* 0042F064 8C830020 */  lw    $v1, 0x20($a0)
/* 0042F068 8C630008 */  lw    $v1, 8($v1)
.L0042F06C:
/* 0042F06C 10600004 */  beqz  $v1, .L0042F080
/* 0042F070 00000000 */   nop   
/* 0042F074 8C6E0010 */  lw    $t6, 0x10($v1)
/* 0042F078 50AEFFFC */  beql  $a1, $t6, .L0042F06C
/* 0042F07C 8C630008 */   lw    $v1, 8($v1)
.L0042F080:
/* 0042F080 54600004 */  bnezl $v1, .L0042F094
/* 0042F084 8C640010 */   lw    $a0, 0x10($v1)
/* 0042F088 10000018 */  b     .L0042F0EC
/* 0042F08C 00001025 */   move  $v0, $zero
/* 0042F090 8C640010 */  lw    $a0, 0x10($v1)
.L0042F094:
/* 0042F094 8C820014 */  lw    $v0, 0x14($a0)
/* 0042F098 50400014 */  beql  $v0, $zero, .L0042F0EC
/* 0042F09C 00801025 */   move  $v0, $a0
/* 0042F0A0 8C4F0004 */  lw    $t7, 4($v0)
/* 0042F0A4 55E00011 */  bnezl $t7, .L0042F0EC
/* 0042F0A8 00801025 */   move  $v0, $a0
/* 0042F0AC 8C580000 */  lw    $t8, ($v0)
/* 0042F0B0 54B8000E */  bnel  $a1, $t8, .L0042F0EC
/* 0042F0B4 00801025 */   move  $v0, $a0
/* 0042F0B8 8CB90018 */  lw    $t9, 0x18($a1)
/* 0042F0BC 8F280004 */  lw    $t0, 4($t9)
/* 0042F0C0 5500000A */  bnezl $t0, .L0042F0EC
/* 0042F0C4 00801025 */   move  $v0, $a0
/* 0042F0C8 8F998020 */  lw    $t9, %got(func_0042F044)($gp)
/* 0042F0CC 8CA9002C */  lw    $t1, 0x2c($a1)
/* 0042F0D0 00C01025 */  move  $v0, $a2
/* 0042F0D4 2739F044 */  addiu $t9, %lo(func_0042F044) # addiu $t9, $t9, -0xfbc
/* 0042F0D8 0320F809 */  jalr  $t9
/* 0042F0DC AC89002C */   sw    $t1, 0x2c($a0)
/* 0042F0E0 10000002 */  b     .L0042F0EC
/* 0042F0E4 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0042F0E8 00801025 */  move  $v0, $a0
.L0042F0EC:
/* 0042F0EC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0042F0F0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0042F0F4 03E00008 */  jr    $ra
/* 0042F0F8 00000000 */   nop   

glabel bb_frequencies
    .ent bb_frequencies
    # 00456A2C oneproc
/* 0042F0FC 3C1C0FBF */  .cpload $t9
/* 0042F100 279CB194 */  
/* 0042F104 0399E021 */  
/* 0042F108 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0042F10C 8F8E8B6C */  lw     $t6, %got(curproc)($gp)
/* 0042F110 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0042F114 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0042F118 8DCE0000 */  lw    $t6, ($t6)
/* 0042F11C AFB6002C */  sw    $s6, 0x2c($sp)
/* 0042F120 AFB50028 */  sw    $s5, 0x28($sp)
/* 0042F124 AFB40024 */  sw    $s4, 0x24($sp)
/* 0042F128 AFB30020 */  sw    $s3, 0x20($sp)
/* 0042F12C AFB2001C */  sw    $s2, 0x1c($sp)
/* 0042F130 AFB10018 */  sw    $s1, 0x18($sp)
/* 0042F134 AFB00014 */  sw    $s0, 0x14($sp)
/* 0042F138 8DD50034 */  lw    $s5, 0x34($t6)
/* 0042F13C 8F9689AC */  lw     $s6, %got(graphhead)($gp)
/* 0042F140 27B20058 */  addiu $s2, $sp, 0x58
/* 0042F144 8EAF001C */  lw    $t7, 0x1c($s5)
/* 0042F148 8EB30020 */  lw    $s3, 0x20($s5)
/* 0042F14C 8ED00000 */  lw    $s0, ($s6)
/* 0042F150 000FC100 */  sll   $t8, $t7, 4
/* 0042F154 02B88821 */  addu  $s1, $s5, $t8
/* 0042F158 26310038 */  addiu $s1, $s1, 0x38
/* 0042F15C 8E340008 */  lw    $s4, 8($s1)
/* 0042F160 8E190134 */  lw    $t9, 0x134($s0)
.L0042F164:
/* 0042F164 02002025 */  move  $a0, $s0
/* 0042F168 1720000A */  bnez  $t9, .L0042F194
/* 0042F16C 00000000 */   nop   
/* 0042F170 8F998020 */  lw    $t9, %got(func_0042F044)($gp)
/* 0042F174 8E280008 */  lw    $t0, 8($s1)
/* 0042F178 02401025 */  move  $v0, $s2
/* 0042F17C 2739F044 */  addiu $t9, %lo(func_0042F044) # addiu $t9, $t9, -0xfbc
/* 0042F180 0320F809 */  jalr  $t9
/* 0042F184 AE08002C */   sw    $t0, 0x2c($s0)
/* 0042F188 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042F18C 10000047 */  b     .L0042F2AC
/* 0042F190 00408025 */   move  $s0, $v0
.L0042F194:
/* 0042F194 8F9982BC */  lw    $t9, %call16(empty_bb)($gp)
/* 0042F198 02002025 */  move  $a0, $s0
/* 0042F19C 0320F809 */  jalr  $t9
/* 0042F1A0 00000000 */   nop   
/* 0042F1A4 10400012 */  beqz  $v0, .L0042F1F0
/* 0042F1A8 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0042F1AC 8EC90000 */  lw    $t1, ($s6)
/* 0042F1B0 52090010 */  beql  $s0, $t1, .L0042F1F4
/* 0042F1B4 8E2B0004 */   lw    $t3, 4($s1)
/* 0042F1B8 8E2A0008 */  lw    $t2, 8($s1)
/* 0042F1BC 028A082B */  sltu  $at, $s4, $t2
/* 0042F1C0 10200002 */  beqz  $at, .L0042F1CC
/* 0042F1C4 00000000 */   nop   
/* 0042F1C8 02805025 */  move  $t2, $s4
.L0042F1CC:
/* 0042F1CC 8F998020 */  lw    $t9, %got(func_0042F044)($gp)
/* 0042F1D0 AE0A002C */  sw    $t2, 0x2c($s0)
/* 0042F1D4 02002025 */  move  $a0, $s0
/* 0042F1D8 2739F044 */  addiu $t9, %lo(func_0042F044) # addiu $t9, $t9, -0xfbc
/* 0042F1DC 0320F809 */  jalr  $t9
/* 0042F1E0 02401025 */   move  $v0, $s2
/* 0042F1E4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042F1E8 10000030 */  b     .L0042F2AC
/* 0042F1EC 00408025 */   move  $s0, $v0
.L0042F1F0:
/* 0042F1F0 8E2B0004 */  lw    $t3, 4($s1)
.L0042F1F4:
/* 0042F1F4 8EAC0008 */  lw    $t4, 8($s5)
/* 0042F1F8 8E030134 */  lw    $v1, 0x134($s0)
/* 0042F1FC 016C1021 */  addu  $v0, $t3, $t4
/* 0042F200 0043082A */  slt   $at, $v0, $v1
/* 0042F204 5020000C */  beql  $at, $zero, .L0042F238
/* 0042F208 0062082A */   slt   $at, $v1, $v0
/* 0042F20C 8F998020 */  lw    $t9, %got(func_0042EF10)($gp)
/* 0042F210 02202025 */  move  $a0, $s1
/* 0042F214 02401025 */  move  $v0, $s2
/* 0042F218 2739EF10 */  addiu $t9, %lo(func_0042EF10) # addiu $t9, $t9, -0x10f0
/* 0042F21C 0320F809 */  jalr  $t9
/* 0042F220 00000000 */   nop   
/* 0042F224 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042F228 2631000C */  addiu $s1, $s1, 0xc
/* 0042F22C 1000001F */  b     .L0042F2AC
/* 0042F230 2673FFFF */   addiu $s3, $s3, -1
/* 0042F234 0062082A */  slt   $at, $v1, $v0
.L0042F238:
/* 0042F238 1020000A */  beqz  $at, .L0042F264
/* 0042F23C 00000000 */   nop   
/* 0042F240 8F998020 */  lw    $t9, %got(func_0042F044)($gp)
/* 0042F244 AE14002C */  sw    $s4, 0x2c($s0)
/* 0042F248 02002025 */  move  $a0, $s0
/* 0042F24C 2739F044 */  addiu $t9, %lo(func_0042F044) # addiu $t9, $t9, -0xfbc
/* 0042F250 0320F809 */  jalr  $t9
/* 0042F254 02401025 */   move  $v0, $s2
/* 0042F258 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042F25C 10000013 */  b     .L0042F2AC
/* 0042F260 00408025 */   move  $s0, $v0
.L0042F264:
/* 0042F264 8F998020 */  lw    $t9, %got(func_0042EF10)($gp)
/* 0042F268 02202025 */  move  $a0, $s1
/* 0042F26C 02401025 */  move  $v0, $s2
/* 0042F270 2739EF10 */  addiu $t9, %lo(func_0042EF10) # addiu $t9, $t9, -0x10f0
/* 0042F274 0320F809 */  jalr  $t9
/* 0042F278 00000000 */   nop   
/* 0042F27C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042F280 8E340008 */  lw    $s4, 8($s1)
/* 0042F284 2631000C */  addiu $s1, $s1, 0xc
/* 0042F288 8F998020 */  lw    $t9, %got(func_0042F044)($gp)
/* 0042F28C 2673FFFF */  addiu $s3, $s3, -1
/* 0042F290 02002025 */  move  $a0, $s0
/* 0042F294 2739F044 */  addiu $t9, %lo(func_0042F044) # addiu $t9, $t9, -0xfbc
/* 0042F298 02401025 */  move  $v0, $s2
/* 0042F29C 0320F809 */  jalr  $t9
/* 0042F2A0 AE14002C */   sw    $s4, 0x2c($s0)
/* 0042F2A4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042F2A8 00408025 */  move  $s0, $v0
.L0042F2AC:
/* 0042F2AC 12600003 */  beqz  $s3, .L0042F2BC
/* 0042F2B0 00000000 */   nop   
/* 0042F2B4 5600FFAB */  bnezl $s0, .L0042F164
/* 0042F2B8 8E190134 */   lw    $t9, 0x134($s0)
.L0042F2BC:
/* 0042F2BC 5200000B */  beql  $s0, $zero, .L0042F2EC
/* 0042F2C0 8FBF0034 */   lw    $ra, 0x34($sp)
.L0042F2C4:
/* 0042F2C4 8F998020 */  lw    $t9, %got(func_0042F044)($gp)
/* 0042F2C8 AE14002C */  sw    $s4, 0x2c($s0)
/* 0042F2CC 02002025 */  move  $a0, $s0
/* 0042F2D0 2739F044 */  addiu $t9, %lo(func_0042F044) # addiu $t9, $t9, -0xfbc
/* 0042F2D4 0320F809 */  jalr  $t9
/* 0042F2D8 02401025 */   move  $v0, $s2
/* 0042F2DC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042F2E0 1440FFF8 */  bnez  $v0, .L0042F2C4
/* 0042F2E4 00408025 */   move  $s0, $v0
/* 0042F2E8 8FBF0034 */  lw    $ra, 0x34($sp)
.L0042F2EC:
/* 0042F2EC 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042F2F0 8FB10018 */  lw    $s1, 0x18($sp)
/* 0042F2F4 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042F2F8 8FB30020 */  lw    $s3, 0x20($sp)
/* 0042F2FC 8FB40024 */  lw    $s4, 0x24($sp)
/* 0042F300 8FB50028 */  lw    $s5, 0x28($sp)
/* 0042F304 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0042F308 03E00008 */  jr    $ra
/* 0042F30C 27BD0058 */   addiu $sp, $sp, 0x58
    .type bb_frequencies, @function
    .size bb_frequencies, .-bb_frequencies
    .end bb_frequencies

glabel ingraph
    .ent ingraph
    # 0043CA8C func_0043CA8C
    # 0043CFCC readnxtinst
/* 0042F310 3C1C0FBF */  .cpload $t9
/* 0042F314 279CAF80 */  
/* 0042F318 0399E021 */  
/* 0042F31C 8F8289AC */  lw     $v0, %got(graphhead)($gp)
/* 0042F320 00001825 */  move  $v1, $zero
/* 0042F324 8C420000 */  lw    $v0, ($v0)
/* 0042F328 1040000B */  beqz  $v0, .L0042F358
/* 0042F32C 00000000 */   nop   
/* 0042F330 8C4E0000 */  lw    $t6, ($v0)
.L0042F334:
/* 0042F334 548E0004 */  bnel  $a0, $t6, .L0042F348
/* 0042F338 8C42000C */   lw    $v0, 0xc($v0)
/* 0042F33C 10000002 */  b     .L0042F348
/* 0042F340 24030001 */   li    $v1, 1
/* 0042F344 8C42000C */  lw    $v0, 0xc($v0)
.L0042F348:
/* 0042F348 14600003 */  bnez  $v1, .L0042F358
/* 0042F34C 00000000 */   nop   
/* 0042F350 5440FFF8 */  bnezl $v0, .L0042F334
/* 0042F354 8C4E0000 */   lw    $t6, ($v0)
.L0042F358:
/* 0042F358 50600004 */  beql  $v1, $zero, .L0042F36C
/* 0042F35C 00001825 */   move  $v1, $zero
/* 0042F360 03E00008 */  jr    $ra
/* 0042F364 00000000 */   nop   

/* 0042F368 00001825 */  move  $v1, $zero
.L0042F36C:
/* 0042F36C 03E00008 */  jr    $ra
/* 0042F370 00601025 */   move  $v0, $v1
    .type ingraph, @function
    .size ingraph, .-ingraph
    .end ingraph

glabel init_graphnode
    .ent init_graphnode
    # 0042F424 appendgraph
    # 0046FA20 new_header_node
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
/* 0042F374 3C1C0FBF */  .cpload $t9
/* 0042F378 279CAF1C */  
/* 0042F37C 0399E021 */  
/* 0042F380 908E000B */  lbu   $t6, 0xb($a0)
/* 0042F384 8F888A44 */  lw     $t0, %got(curlocln)($gp)
/* 0042F388 2401FFBF */  li    $at, -65
/* 0042F38C 31CFFF7F */  andi  $t7, $t6, 0xff7f
/* 0042F390 31F800FF */  andi  $t8, $t7, 0xff
/* 0042F394 A08F000B */  sb    $t7, 0xb($a0)
/* 0042F398 0301C824 */  and   $t9, $t8, $at
/* 0042F39C AC800000 */  sw    $zero, ($a0)
/* 0042F3A0 AC800014 */  sw    $zero, 0x14($a0)
/* 0042F3A4 AC800018 */  sw    $zero, 0x18($a0)
/* 0042F3A8 AC80000C */  sw    $zero, 0xc($a0)
/* 0042F3AC A0800006 */  sb    $zero, 6($a0)
/* 0042F3B0 A0800007 */  sb    $zero, 7($a0)
/* 0042F3B4 A0800004 */  sb    $zero, 4($a0)
/* 0042F3B8 A0800005 */  sb    $zero, 5($a0)
/* 0042F3BC A099000B */  sb    $t9, 0xb($a0)
/* 0042F3C0 AC80001C */  sw    $zero, 0x1c($a0)
/* 0042F3C4 AC800020 */  sw    $zero, 0x20($a0)
/* 0042F3C8 AC800024 */  sw    $zero, 0x24($a0)
/* 0042F3CC AC800028 */  sw    $zero, 0x28($a0)
/* 0042F3D0 AC800030 */  sw    $zero, 0x30($a0)
/* 0042F3D4 AC8000EC */  sw    $zero, 0xec($a0)
/* 0042F3D8 AC8000F0 */  sw    $zero, 0xf0($a0)
/* 0042F3DC 8D080000 */  lw    $t0, ($t0)
/* 0042F3E0 03E00008 */  jr    $ra
/* 0042F3E4 AC880134 */   sw    $t0, 0x134($a0)
    .type init_graphnode, @function
    .size init_graphnode, .-init_graphnode
    .end init_graphnode

glabel init_node_vectors
    .ent init_node_vectors
    # 0042F6CC controlflow
    # 004471AC codeimage
    # 00456310 func_00456310
    # 00456A2C oneproc
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
/* 0042F3E8 AC80010C */  sw    $zero, 0x10c($a0)
/* 0042F3EC AC800110 */  sw    $zero, 0x110($a0)
/* 0042F3F0 AC800104 */  sw    $zero, 0x104($a0)
/* 0042F3F4 AC800108 */  sw    $zero, 0x108($a0)
/* 0042F3F8 AC800114 */  sw    $zero, 0x114($a0)
/* 0042F3FC AC800118 */  sw    $zero, 0x118($a0)
/* 0042F400 AC80011C */  sw    $zero, 0x11c($a0)
/* 0042F404 AC800120 */  sw    $zero, 0x120($a0)
/* 0042F408 AC800124 */  sw    $zero, 0x124($a0)
/* 0042F40C AC800128 */  sw    $zero, 0x128($a0)
/* 0042F410 AC80012C */  sw    $zero, 0x12c($a0)
/* 0042F414 AC800130 */  sw    $zero, 0x130($a0)
/* 0042F418 AC8000F4 */  sw    $zero, 0xf4($a0)
/* 0042F41C 03E00008 */  jr    $ra
/* 0042F420 AC8000F8 */   sw    $zero, 0xf8($a0)
    .type init_node_vectors, @function
    .size init_node_vectors, .-init_node_vectors
    .end init_node_vectors

glabel appendgraph
    .ent appendgraph
    # 0043CA8C func_0043CA8C
    # 0043CFCC readnxtinst
    # 00456310 func_00456310
    # 00456A2C oneproc
/* 0042F424 3C1C0FBF */  .cpload $t9
/* 0042F428 279CAE6C */  
/* 0042F42C 0399E021 */  
/* 0042F430 8F8389AC */  lw     $v1, %got(graphhead)($gp)
/* 0042F434 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0042F438 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042F43C 8C6E0000 */  lw    $t6, ($v1)
/* 0042F440 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0042F444 15C0000C */  bnez  $t6, .L0042F478
/* 0042F448 00000000 */   nop   
/* 0042F44C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0042F450 24040174 */  li    $a0, 372
/* 0042F454 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0042F458 0320F809 */  jalr  $t9
/* 0042F45C 00000000 */   nop   
/* 0042F460 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042F464 8F8389AC */  lw     $v1, %got(graphhead)($gp)
/* 0042F468 8F8589B0 */  lw     $a1, %got(graphtail)($gp)
/* 0042F46C AC620000 */  sw    $v0, ($v1)
/* 0042F470 1000000B */  b     .L0042F4A0
/* 0042F474 ACA20000 */   sw    $v0, ($a1)
.L0042F478:
/* 0042F478 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0042F47C 24040174 */  li    $a0, 372
/* 0042F480 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0042F484 0320F809 */  jalr  $t9
/* 0042F488 00000000 */   nop   
/* 0042F48C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042F490 8F8589B0 */  lw     $a1, %got(graphtail)($gp)
/* 0042F494 8CB80000 */  lw    $t8, ($a1)
/* 0042F498 AF02000C */  sw    $v0, 0xc($t8)
/* 0042F49C ACA20000 */  sw    $v0, ($a1)
.L0042F4A0:
/* 0042F4A0 8CA40000 */  lw    $a0, ($a1)
/* 0042F4A4 14800005 */  bnez  $a0, .L0042F4BC
/* 0042F4A8 00000000 */   nop   
/* 0042F4AC 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 0042F4B0 24190001 */  li    $t9, 1
/* 0042F4B4 10000005 */  b     .L0042F4CC
/* 0042F4B8 A0390000 */   sb    $t9, ($at)
.L0042F4BC:
/* 0042F4BC 8F9982C8 */  lw    $t9, %call16(init_graphnode)($gp)
/* 0042F4C0 0320F809 */  jalr  $t9
/* 0042F4C4 00000000 */   nop   
/* 0042F4C8 8FBC0018 */  lw    $gp, 0x18($sp)
.L0042F4CC:
/* 0042F4CC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0042F4D0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0042F4D4 03E00008 */  jr    $ra
/* 0042F4D8 00000000 */   nop   
    .type appendgraph, @function
    .size appendgraph, .-appendgraph
    .end appendgraph

    .type func_0042F4DC, @function
func_0042F4DC:
    # 0042F4DC func_0042F4DC
    # 0042F6CC controlflow
/* 0042F4DC 3C1C0FBF */  .cpload $t9
/* 0042F4E0 279CADB4 */  
/* 0042F4E4 0399E021 */  
/* 0042F4E8 908E0007 */  lbu   $t6, 7($a0)
/* 0042F4EC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0042F4F0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042F4F4 00408825 */  move  $s1, $v0
/* 0042F4F8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0042F4FC AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042F500 15C00010 */  bnez  $t6, .L0042F544
/* 0042F504 AFB00018 */   sw    $s0, 0x18($sp)
/* 0042F508 8C900018 */  lw    $s0, 0x18($a0)
/* 0042F50C 240F0001 */  li    $t7, 1
/* 0042F510 A08F0007 */  sb    $t7, 7($a0)
/* 0042F514 5200000C */  beql  $s0, $zero, .L0042F548
/* 0042F518 8FBF0024 */   lw    $ra, 0x24($sp)
.L0042F51C:
/* 0042F51C 8F998020 */  lw    $t9, %got(func_0042F4DC)($gp)
/* 0042F520 8E040000 */  lw    $a0, ($s0)
/* 0042F524 02201025 */  move  $v0, $s1
/* 0042F528 2739F4DC */  addiu $t9, %lo(func_0042F4DC) # addiu $t9, $t9, -0xb24
/* 0042F52C 0320F809 */  jalr  $t9
/* 0042F530 00000000 */   nop   
/* 0042F534 8E100004 */  lw    $s0, 4($s0)
/* 0042F538 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042F53C 1600FFF7 */  bnez  $s0, .L0042F51C
/* 0042F540 00000000 */   nop   
.L0042F544:
/* 0042F544 8FBF0024 */  lw    $ra, 0x24($sp)
.L0042F548:
/* 0042F548 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042F54C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042F550 03E00008 */  jr    $ra
/* 0042F554 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0042F558, @function
func_0042F558:
    # 0042F558 func_0042F558
    # 0042F6CC controlflow
/* 0042F558 3C1C0FBF */  .cpload $t9
/* 0042F55C 279CAD38 */  
/* 0042F560 0399E021 */  
/* 0042F564 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0042F568 AFB00018 */  sw    $s0, 0x18($sp)
/* 0042F56C 8C900014 */  lw    $s0, 0x14($a0)
/* 0042F570 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042F574 240E0001 */  li    $t6, 1
/* 0042F578 00408825 */  move  $s1, $v0
/* 0042F57C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0042F580 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042F584 1200000E */  beqz  $s0, .L0042F5C0
/* 0042F588 A08E0006 */   sb    $t6, 6($a0)
/* 0042F58C 8E040000 */  lw    $a0, ($s0)
.L0042F590:
/* 0042F590 908F0006 */  lbu   $t7, 6($a0)
/* 0042F594 55E00008 */  bnezl $t7, .L0042F5B8
/* 0042F598 8E100004 */   lw    $s0, 4($s0)
/* 0042F59C 8F998020 */  lw    $t9, %got(func_0042F558)($gp)
/* 0042F5A0 02201025 */  move  $v0, $s1
/* 0042F5A4 2739F558 */  addiu $t9, %lo(func_0042F558) # addiu $t9, $t9, -0xaa8
/* 0042F5A8 0320F809 */  jalr  $t9
/* 0042F5AC 00000000 */   nop   
/* 0042F5B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042F5B4 8E100004 */  lw    $s0, 4($s0)
.L0042F5B8:
/* 0042F5B8 5600FFF5 */  bnezl $s0, .L0042F590
/* 0042F5BC 8E040000 */   lw    $a0, ($s0)
.L0042F5C0:
/* 0042F5C0 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0042F5C4 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042F5C8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042F5CC 03E00008 */  jr    $ra
/* 0042F5D0 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0042F5D4, @function
func_0042F5D4:
    # 0042F5D4 func_0042F5D4
    # 0042F6CC controlflow
/* 0042F5D4 3C1C0FBF */  .cpload $t9
/* 0042F5D8 279CACBC */  
/* 0042F5DC 0399E021 */  
/* 0042F5E0 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0042F5E4 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0042F5E8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0042F5EC AFB30024 */  sw    $s3, 0x24($sp)
/* 0042F5F0 AFB20020 */  sw    $s2, 0x20($sp)
/* 0042F5F4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042F5F8 AFB00018 */  sw    $s0, 0x18($sp)
/* 0042F5FC 908E0007 */  lbu   $t6, 7($a0)
/* 0042F600 24030002 */  li    $v1, 2
/* 0042F604 00809025 */  move  $s2, $a0
/* 0042F608 106E0029 */  beq   $v1, $t6, .L0042F6B0
/* 0042F60C 00409825 */   move  $s3, $v0
/* 0042F610 8F8289B0 */  lw     $v0, %got(graphtail)($gp)
/* 0042F614 00008825 */  move  $s1, $zero
/* 0042F618 8C4F0000 */  lw    $t7, ($v0)
/* 0042F61C ADE4000C */  sw    $a0, 0xc($t7)
/* 0042F620 AC440000 */  sw    $a0, ($v0)
/* 0042F624 8C900018 */  lw    $s0, 0x18($a0)
/* 0042F628 A0830007 */  sb    $v1, 7($a0)
/* 0042F62C 52000014 */  beql  $s0, $zero, .L0042F680
/* 0042F630 8E500018 */   lw    $s0, 0x18($s2)
/* 0042F634 8E040000 */  lw    $a0, ($s0)
.L0042F638:
/* 0042F638 96580008 */  lhu   $t8, 8($s2)
/* 0042F63C 94880008 */  lhu   $t0, 8($a0)
/* 0042F640 27190001 */  addiu $t9, $t8, 1
/* 0042F644 57280009 */  bnel  $t9, $t0, .L0042F66C
/* 0042F648 8E100004 */   lw    $s0, 4($s0)
/* 0042F64C 8F998020 */  lw    $t9, %got(func_0042F5D4)($gp)
/* 0042F650 02601025 */  move  $v0, $s3
/* 0042F654 24110001 */  li    $s1, 1
/* 0042F658 2739F5D4 */  addiu $t9, %lo(func_0042F5D4) # addiu $t9, $t9, -0xa2c
/* 0042F65C 0320F809 */  jalr  $t9
/* 0042F660 00000000 */   nop   
/* 0042F664 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042F668 8E100004 */  lw    $s0, 4($s0)
.L0042F66C:
/* 0042F66C 52000004 */  beql  $s0, $zero, .L0042F680
/* 0042F670 8E500018 */   lw    $s0, 0x18($s2)
/* 0042F674 5220FFF0 */  beql  $s1, $zero, .L0042F638
/* 0042F678 8E040000 */   lw    $a0, ($s0)
/* 0042F67C 8E500018 */  lw    $s0, 0x18($s2)
.L0042F680:
/* 0042F680 5200000C */  beql  $s0, $zero, .L0042F6B4
/* 0042F684 8FBF002C */   lw    $ra, 0x2c($sp)
.L0042F688:
/* 0042F688 8F998020 */  lw    $t9, %got(func_0042F5D4)($gp)
/* 0042F68C 8E040000 */  lw    $a0, ($s0)
/* 0042F690 02601025 */  move  $v0, $s3
/* 0042F694 2739F5D4 */  addiu $t9, %lo(func_0042F5D4) # addiu $t9, $t9, -0xa2c
/* 0042F698 0320F809 */  jalr  $t9
/* 0042F69C 00000000 */   nop   
/* 0042F6A0 8E100004 */  lw    $s0, 4($s0)
/* 0042F6A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042F6A8 1600FFF7 */  bnez  $s0, .L0042F688
/* 0042F6AC 00000000 */   nop   
.L0042F6B0:
/* 0042F6B0 8FBF002C */  lw    $ra, 0x2c($sp)
.L0042F6B4:
/* 0042F6B4 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042F6B8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042F6BC 8FB20020 */  lw    $s2, 0x20($sp)
/* 0042F6C0 8FB30024 */  lw    $s3, 0x24($sp)
/* 0042F6C4 03E00008 */  jr    $ra
/* 0042F6C8 27BD0030 */   addiu $sp, $sp, 0x30

glabel controlflow
    .ent controlflow
    # 00456A2C oneproc
/* 0042F6CC 3C1C0FBF */  .cpload $t9
/* 0042F6D0 279CABC4 */  
/* 0042F6D4 0399E021 */  
/* 0042F6D8 27BDFF78 */  addiu $sp, $sp, -0x88
/* 0042F6DC 8F998020 */  lw    $t9, %got(func_0042F4DC)($gp)
/* 0042F6E0 8F8489AC */  lw     $a0, %got(graphhead)($gp)
/* 0042F6E4 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0042F6E8 2739F4DC */  addiu $t9, %lo(func_0042F4DC) # addiu $t9, $t9, -0xb24
/* 0042F6EC AFBE0038 */  sw    $fp, 0x38($sp)
/* 0042F6F0 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0042F6F4 AFB70030 */  sw    $s7, 0x30($sp)
/* 0042F6F8 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0042F6FC AFB50028 */  sw    $s5, 0x28($sp)
/* 0042F700 AFB40024 */  sw    $s4, 0x24($sp)
/* 0042F704 AFB30020 */  sw    $s3, 0x20($sp)
/* 0042F708 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0042F70C AFB10018 */  sw    $s1, 0x18($sp)
/* 0042F710 AFB00014 */  sw    $s0, 0x14($sp)
/* 0042F714 27A20088 */  addiu $v0, $sp, 0x88
/* 0042F718 0320F809 */  jalr  $t9
/* 0042F71C 8C840000 */   lw    $a0, ($a0)
/* 0042F720 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042F724 AFA0007C */  sw    $zero, 0x7c($sp)
/* 0042F728 8F8289AC */  lw     $v0, %got(graphhead)($gp)
/* 0042F72C 8C420000 */  lw    $v0, ($v0)
/* 0042F730 8C52000C */  lw    $s2, 0xc($v0)
/* 0042F734 1240001A */  beqz  $s2, .L0042F7A0
/* 0042F738 00000000 */   nop   
/* 0042F73C 924E0004 */  lbu   $t6, 4($s2)
.L0042F740:
/* 0042F740 51C00013 */  beql  $t6, $zero, .L0042F790
/* 0042F744 8E52000C */   lw    $s2, 0xc($s2)
/* 0042F748 8F998020 */  lw    $t9, %got(func_0042F4DC)($gp)
/* 0042F74C 02402025 */  move  $a0, $s2
/* 0042F750 27A20088 */  addiu $v0, $sp, 0x88
/* 0042F754 2739F4DC */  addiu $t9, %lo(func_0042F4DC) # addiu $t9, $t9, -0xb24
/* 0042F758 0320F809 */  jalr  $t9
/* 0042F75C 00000000 */   nop   
/* 0042F760 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042F764 24040008 */  li    $a0, 8
/* 0042F768 00002825 */  move  $a1, $zero
/* 0042F76C 8F998884 */  lw    $t9, %call16(new)($gp)
/* 0042F770 0320F809 */  jalr  $t9
/* 0042F774 00000000 */   nop   
/* 0042F778 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042F77C AC520000 */  sw    $s2, ($v0)
/* 0042F780 8FAF007C */  lw    $t7, 0x7c($sp)
/* 0042F784 AC4F0004 */  sw    $t7, 4($v0)
/* 0042F788 AFA2007C */  sw    $v0, 0x7c($sp)
/* 0042F78C 8E52000C */  lw    $s2, 0xc($s2)
.L0042F790:
/* 0042F790 5640FFEB */  bnezl $s2, .L0042F740
/* 0042F794 924E0004 */   lbu   $t6, 4($s2)
/* 0042F798 8F8289AC */  lw     $v0, %got(graphhead)($gp)
/* 0042F79C 8C420000 */  lw    $v0, ($v0)
.L0042F7A0:
/* 0042F7A0 104000FF */  beqz  $v0, .L0042FBA0
/* 0042F7A4 00409025 */   move  $s2, $v0
/* 0042F7A8 8F9E8908 */  lw     $fp, %got(err)($gp)
/* 0042F7AC 2417003E */  li    $s7, 62
/* 0042F7B0 2416008C */  li    $s6, 140
/* 0042F7B4 24150011 */  li    $s5, 17
/* 0042F7B8 92580007 */  lbu   $t8, 7($s2)
.L0042F7BC:
/* 0042F7BC 570000B3 */  bnezl $t8, .L0042FA8C
/* 0042F7C0 8E4B0000 */   lw    $t3, ($s2)
/* 0042F7C4 8E42001C */  lw    $v0, 0x1c($s2)
/* 0042F7C8 50400009 */  beql  $v0, $zero, .L0042F7F0
/* 0042F7CC 8E500018 */   lw    $s0, 0x18($s2)
/* 0042F7D0 90590000 */  lbu   $t9, ($v0)
/* 0042F7D4 56B90006 */  bnel  $s5, $t9, .L0042F7F0
/* 0042F7D8 8E500018 */   lw    $s0, 0x18($s2)
/* 0042F7DC 9048001C */  lbu   $t0, 0x1c($v0)
/* 0042F7E0 55000003 */  bnezl $t0, .L0042F7F0
/* 0042F7E4 8E500018 */   lw    $s0, 0x18($s2)
/* 0042F7E8 AE400018 */  sw    $zero, 0x18($s2)
/* 0042F7EC 8E500018 */  lw    $s0, 0x18($s2)
.L0042F7F0:
/* 0042F7F0 52000019 */  beql  $s0, $zero, .L0042F858
/* 0042F7F4 8E42001C */   lw    $v0, 0x1c($s2)
/* 0042F7F8 8E020000 */  lw    $v0, ($s0)
.L0042F7FC:
/* 0042F7FC 8C440014 */  lw    $a0, 0x14($v0)
/* 0042F800 8C890000 */  lw    $t1, ($a0)
/* 0042F804 56490005 */  bnel  $s2, $t1, .L0042F81C
/* 0042F808 8C820004 */   lw    $v0, 4($a0)
/* 0042F80C 8C8A0004 */  lw    $t2, 4($a0)
/* 0042F810 1000000D */  b     .L0042F848
/* 0042F814 AC4A0014 */   sw    $t2, 0x14($v0)
/* 0042F818 8C820004 */  lw    $v0, 4($a0)
.L0042F81C:
/* 0042F81C 00801825 */  move  $v1, $a0
/* 0042F820 8C4B0000 */  lw    $t3, ($v0)
/* 0042F824 524B0007 */  beql  $s2, $t3, .L0042F844
/* 0042F828 8C4D0004 */   lw    $t5, 4($v0)
/* 0042F82C 00401825 */  move  $v1, $v0
.L0042F830:
/* 0042F830 8C420004 */  lw    $v0, 4($v0)
/* 0042F834 8C4C0000 */  lw    $t4, ($v0)
/* 0042F838 564CFFFD */  bnel  $s2, $t4, .L0042F830
/* 0042F83C 00401825 */   move  $v1, $v0
/* 0042F840 8C4D0004 */  lw    $t5, 4($v0)
.L0042F844:
/* 0042F844 AC6D0004 */  sw    $t5, 4($v1)
.L0042F848:
/* 0042F848 8E100004 */  lw    $s0, 4($s0)
/* 0042F84C 5600FFEB */  bnezl $s0, .L0042F7FC
/* 0042F850 8E020000 */   lw    $v0, ($s0)
/* 0042F854 8E42001C */  lw    $v0, 0x1c($s2)
.L0042F858:
/* 0042F858 504000CD */  beql  $v0, $zero, .L0042FB90
/* 0042F85C 8E52000C */   lw    $s2, 0xc($s2)
/* 0042F860 8C51000C */  lw    $s1, 0xc($v0)
/* 0042F864 00009825 */  move  $s3, $zero
/* 0042F868 8E300008 */  lw    $s0, 8($s1)
/* 0042F86C 8E140010 */  lw    $s4, 0x10($s0)
/* 0042F870 92020000 */  lbu   $v0, ($s0)
.L0042F874:
/* 0042F874 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 0042F878 000E7823 */  negu  $t7, $t6
/* 0042F87C 31F84010 */  andi  $t8, $t7, 0x4010
/* 0042F880 0058C804 */  sllv  $t9, $t8, $v0
/* 0042F884 07220053 */  bltzl $t9, .L0042F9D4
/* 0042F888 8E290010 */   lw    $t1, 0x10($s1)
/* 0042F88C 56C20004 */  bnel  $s6, $v0, .L0042F8A0
/* 0042F890 8E090008 */   lw    $t1, 8($s0)
/* 0042F894 8E080020 */  lw    $t0, 0x20($s0)
/* 0042F898 A100001C */  sb    $zero, 0x1c($t0)
/* 0042F89C 8E090008 */  lw    $t1, 8($s0)
.L0042F8A0:
/* 0042F8A0 AE290008 */  sw    $t1, 8($s1)
/* 0042F8A4 8E020008 */  lw    $v0, 8($s0)
/* 0042F8A8 50400003 */  beql  $v0, $zero, .L0042F8B8
/* 0042F8AC 92020000 */   lbu   $v0, ($s0)
/* 0042F8B0 AC51000C */  sw    $s1, 0xc($v0)
/* 0042F8B4 92020000 */  lbu   $v0, ($s0)
.L0042F8B8:
/* 0042F8B8 244AFFE0 */  addiu $t2, $v0, -0x20
/* 0042F8BC 2D4B0060 */  sltiu $t3, $t2, 0x60
/* 0042F8C0 11600009 */  beqz  $t3, .L0042F8E8
/* 0042F8C4 00000000 */   nop   
/* 0042F8C8 8F8E8044 */  lw    $t6, %got(D_100106CC)($gp)
/* 0042F8CC 000A6143 */  sra   $t4, $t2, 5
/* 0042F8D0 000C6880 */  sll   $t5, $t4, 2
/* 0042F8D4 25CE06CC */  addiu $t6, %lo(D_100106CC) # addiu $t6, $t6, 0x6cc
/* 0042F8D8 01CD7821 */  addu  $t7, $t6, $t5
/* 0042F8DC 8DF80000 */  lw    $t8, ($t7)
/* 0042F8E0 0158C804 */  sllv  $t9, $t8, $t2
/* 0042F8E4 2B2B0000 */  slti  $t3, $t9, 0
.L0042F8E8:
/* 0042F8E8 11600012 */  beqz  $t3, .L0042F934
/* 0042F8EC 2C4E00A0 */   sltiu $t6, $v0, 0xa0
/* 0042F8F0 92090003 */  lbu   $t1, 3($s0)
/* 0042F8F4 15200007 */  bnez  $t1, .L0042F914
/* 0042F8F8 00000000 */   nop   
/* 0042F8FC 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0042F900 8E0C0004 */  lw    $t4, 4($s0)
/* 0042F904 0320F809 */  jalr  $t9
/* 0042F908 8D840034 */   lw    $a0, 0x34($t4)
/* 0042F90C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042F910 92020000 */  lbu   $v0, ($s0)
.L0042F914:
/* 0042F914 16E2002C */  bne   $s7, $v0, .L0042F9C8
/* 0042F918 00000000 */   nop   
/* 0042F91C 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0042F920 8E040014 */  lw    $a0, 0x14($s0)
/* 0042F924 0320F809 */  jalr  $t9
/* 0042F928 00000000 */   nop   
/* 0042F92C 10000026 */  b     .L0042F9C8
/* 0042F930 8FBC0034 */   lw    $gp, 0x34($sp)
.L0042F934:
/* 0042F934 11C00009 */  beqz  $t6, .L0042F95C
/* 0042F938 00000000 */   nop   
/* 0042F93C 8F988044 */  lw    $t8, %got(D_100106B8)($gp)
/* 0042F940 00026943 */  sra   $t5, $v0, 5
/* 0042F944 000D7880 */  sll   $t7, $t5, 2
/* 0042F948 271806B8 */  addiu $t8, %lo(D_100106B8) # addiu $t8, $t8, 0x6b8
/* 0042F94C 030F5021 */  addu  $t2, $t8, $t7
/* 0042F950 8D590000 */  lw    $t9, ($t2)
/* 0042F954 00594004 */  sllv  $t0, $t9, $v0
/* 0042F958 290E0000 */  slti  $t6, $t0, 0
.L0042F95C:
/* 0042F95C 15C0001A */  bnez  $t6, .L0042F9C8
/* 0042F960 00000000 */   nop   
/* 0042F964 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0042F968 8E040004 */  lw    $a0, 4($s0)
/* 0042F96C 0320F809 */  jalr  $t9
/* 0042F970 00000000 */   nop   
/* 0042F974 92090000 */  lbu   $t1, ($s0)
/* 0042F978 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042F97C 252CFFE0 */  addiu $t4, $t1, -0x20
/* 0042F980 2D8D0080 */  sltiu $t5, $t4, 0x80
/* 0042F984 11A00009 */  beqz  $t5, .L0042F9AC
/* 0042F988 00000000 */   nop   
/* 0042F98C 8F8A8044 */  lw    $t2, %got(D_100106A8)($gp)
/* 0042F990 000CC143 */  sra   $t8, $t4, 5
/* 0042F994 00187880 */  sll   $t7, $t8, 2
/* 0042F998 254A06A8 */  addiu $t2, %lo(D_100106A8) # addiu $t2, $t2, 0x6a8
/* 0042F99C 014FC821 */  addu  $t9, $t2, $t7
/* 0042F9A0 8F280000 */  lw    $t0, ($t9)
/* 0042F9A4 01885804 */  sllv  $t3, $t0, $t4
/* 0042F9A8 296D0000 */  slti  $t5, $t3, 0
.L0042F9AC:
/* 0042F9AC 11A00006 */  beqz  $t5, .L0042F9C8
/* 0042F9B0 00000000 */   nop   
/* 0042F9B4 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0042F9B8 8E040014 */  lw    $a0, 0x14($s0)
/* 0042F9BC 0320F809 */  jalr  $t9
/* 0042F9C0 00000000 */   nop   
/* 0042F9C4 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042F9C8:
/* 0042F9C8 10000023 */  b     .L0042FA58
/* 0042F9CC 8E020008 */   lw    $v0, 8($s0)
/* 0042F9D0 8E290010 */  lw    $t1, 0x10($s1)
.L0042F9D4:
/* 0042F9D4 16A2001E */  bne   $s5, $v0, .L0042FA50
/* 0042F9D8 AE090010 */   sw    $t1, 0x10($s0)
/* 0042F9DC 8E040018 */  lw    $a0, 0x18($s0)
/* 0042F9E0 1880001B */  blez  $a0, .L0042FA50
/* 0042F9E4 24840001 */   addiu $a0, $a0, 1
/* 0042F9E8 2485FFFF */  addiu $a1, $a0, -1
/* 0042F9EC 30A50003 */  andi  $a1, $a1, 3
/* 0042F9F0 10A00009 */  beqz  $a1, .L0042FA18
/* 0042F9F4 24020001 */   li    $v0, 1
/* 0042F9F8 24A30001 */  addiu $v1, $a1, 1
.L0042F9FC:
/* 0042F9FC 8E100008 */  lw    $s0, 8($s0)
/* 0042FA00 8E380010 */  lw    $t8, 0x10($s1)
/* 0042FA04 24420001 */  addiu $v0, $v0, 1
/* 0042FA08 1462FFFC */  bne   $v1, $v0, .L0042F9FC
/* 0042FA0C AE180010 */   sw    $t8, 0x10($s0)
/* 0042FA10 50440010 */  beql  $v0, $a0, .L0042FA54
/* 0042FA14 02008825 */   move  $s1, $s0
.L0042FA18:
/* 0042FA18 8E100008 */  lw    $s0, 8($s0)
/* 0042FA1C 8E2A0010 */  lw    $t2, 0x10($s1)
/* 0042FA20 24420004 */  addiu $v0, $v0, 4
/* 0042FA24 AE0A0010 */  sw    $t2, 0x10($s0)
/* 0042FA28 8E2F0010 */  lw    $t7, 0x10($s1)
/* 0042FA2C 8E100008 */  lw    $s0, 8($s0)
/* 0042FA30 AE0F0010 */  sw    $t7, 0x10($s0)
/* 0042FA34 8E390010 */  lw    $t9, 0x10($s1)
/* 0042FA38 8E100008 */  lw    $s0, 8($s0)
/* 0042FA3C AE190010 */  sw    $t9, 0x10($s0)
/* 0042FA40 8E280010 */  lw    $t0, 0x10($s1)
/* 0042FA44 8E100008 */  lw    $s0, 8($s0)
/* 0042FA48 1444FFF3 */  bne   $v0, $a0, .L0042FA18
/* 0042FA4C AE080010 */   sw    $t0, 0x10($s0)
.L0042FA50:
/* 0042FA50 02008825 */  move  $s1, $s0
.L0042FA54:
/* 0042FA54 8E020008 */  lw    $v0, 8($s0)
.L0042FA58:
/* 0042FA58 10400005 */  beqz  $v0, .L0042FA70
/* 0042FA5C 00000000 */   nop   
/* 0042FA60 8C4C0010 */  lw    $t4, 0x10($v0)
/* 0042FA64 028C9826 */  xor   $s3, $s4, $t4
/* 0042FA68 0013982B */  sltu  $s3, $zero, $s3
/* 0042FA6C 327300FF */  andi  $s3, $s3, 0xff
.L0042FA70:
/* 0042FA70 10400046 */  beqz  $v0, .L0042FB8C
/* 0042FA74 00408025 */   move  $s0, $v0
/* 0042FA78 5260FF7E */  beql  $s3, $zero, .L0042F874
/* 0042FA7C 92020000 */   lbu   $v0, ($s0)
/* 0042FA80 10000043 */  b     .L0042FB90
/* 0042FA84 8E52000C */   lw    $s2, 0xc($s2)
/* 0042FA88 8E4B0000 */  lw    $t3, ($s2)
.L0042FA8C:
/* 0042FA8C 51600040 */  beql  $t3, $zero, .L0042FB90
/* 0042FA90 8E52000C */   lw    $s2, 0xc($s2)
/* 0042FA94 8E4E001C */  lw    $t6, 0x1c($s2)
/* 0042FA98 55C0003D */  bnezl $t6, .L0042FB90
/* 0042FA9C 8E52000C */   lw    $s2, 0xc($s2)
/* 0042FAA0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0042FAA4 8FC40000 */  lw    $a0, ($fp)
/* 0042FAA8 0320F809 */  jalr  $t9
/* 0042FAAC 00000000 */   nop   
/* 0042FAB0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FAB4 8FC40000 */  lw    $a0, ($fp)
/* 0042FAB8 24060010 */  li    $a2, 16
/* 0042FABC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042FAC0 8F858044 */  lw    $a1, %got(RO_1000B504)($gp)
/* 0042FAC4 24070010 */  li    $a3, 16
/* 0042FAC8 0320F809 */  jalr  $t9
/* 0042FACC 24A5B504 */   addiu $a1, %lo(RO_1000B504) # addiu $a1, $a1, -0x4afc
/* 0042FAD0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FAD4 8FC40000 */  lw    $a0, ($fp)
/* 0042FAD8 24060400 */  li    $a2, 1024
/* 0042FADC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042FAE0 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 0042FAE4 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 0042FAE8 0320F809 */  jalr  $t9
/* 0042FAEC 8CE70000 */   lw    $a3, ($a3)
/* 0042FAF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FAF4 8FC40000 */  lw    $a0, ($fp)
/* 0042FAF8 24060009 */  li    $a2, 9
/* 0042FAFC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042FB00 8F858044 */  lw    $a1, %got(RO_1000B4FB)($gp)
/* 0042FB04 24070009 */  li    $a3, 9
/* 0042FB08 0320F809 */  jalr  $t9
/* 0042FB0C 24A5B4FB */   addiu $a1, %lo(RO_1000B4FB) # addiu $a1, $a1, -0x4b05
/* 0042FB10 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FB14 8FC40000 */  lw    $a0, ($fp)
/* 0042FB18 8E450000 */  lw    $a1, ($s2)
/* 0042FB1C 8F998878 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0042FB20 00003025 */  move  $a2, $zero
/* 0042FB24 2407000A */  li    $a3, 10
/* 0042FB28 0320F809 */  jalr  $t9
/* 0042FB2C 00000000 */   nop   
/* 0042FB30 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FB34 8FC40000 */  lw    $a0, ($fp)
/* 0042FB38 2406000B */  li    $a2, 11
/* 0042FB3C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0042FB40 8F858044 */  lw    $a1, %got(RO_1000B4F0)($gp)
/* 0042FB44 2407000B */  li    $a3, 11
/* 0042FB48 0320F809 */  jalr  $t9
/* 0042FB4C 24A5B4F0 */   addiu $a1, %lo(RO_1000B4F0) # addiu $a1, $a1, -0x4b10
/* 0042FB50 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FB54 8FC40000 */  lw    $a0, ($fp)
/* 0042FB58 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0042FB5C 0320F809 */  jalr  $t9
/* 0042FB60 00000000 */   nop   
/* 0042FB64 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FB68 8FC40000 */  lw    $a0, ($fp)
/* 0042FB6C 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0042FB70 0320F809 */  jalr  $t9
/* 0042FB74 00000000 */   nop   
/* 0042FB78 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FB7C 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0042FB80 0320F809 */  jalr  $t9
/* 0042FB84 00000000 */   nop   
/* 0042FB88 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042FB8C:
/* 0042FB8C 8E52000C */  lw    $s2, 0xc($s2)
.L0042FB90:
/* 0042FB90 5640FF0A */  bnezl $s2, .L0042F7BC
/* 0042FB94 92580007 */   lbu   $t8, 7($s2)
/* 0042FB98 8F8289AC */  lw     $v0, %got(graphhead)($gp)
/* 0042FB9C 8C420000 */  lw    $v0, ($v0)
.L0042FBA0:
/* 0042FBA0 8C500018 */  lw    $s0, 0x18($v0)
/* 0042FBA4 8F9589B0 */  lw     $s5, %got(graphtail)($gp)
/* 0042FBA8 240D0002 */  li    $t5, 2
/* 0042FBAC A04D0007 */  sb    $t5, 7($v0)
/* 0042FBB0 1200000B */  beqz  $s0, .L0042FBE0
/* 0042FBB4 AEA20000 */   sw    $v0, ($s5)
.L0042FBB8:
/* 0042FBB8 8F998020 */  lw    $t9, %got(func_0042F5D4)($gp)
/* 0042FBBC 8E040000 */  lw    $a0, ($s0)
/* 0042FBC0 27A20088 */  addiu $v0, $sp, 0x88
/* 0042FBC4 2739F5D4 */  addiu $t9, %lo(func_0042F5D4) # addiu $t9, $t9, -0xa2c
/* 0042FBC8 0320F809 */  jalr  $t9
/* 0042FBCC 00000000 */   nop   
/* 0042FBD0 8E100004 */  lw    $s0, 4($s0)
/* 0042FBD4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FBD8 1600FFF7 */  bnez  $s0, .L0042FBB8
/* 0042FBDC 00000000 */   nop   
.L0042FBE0:
/* 0042FBE0 8FA9007C */  lw    $t1, 0x7c($sp)
/* 0042FBE4 5120000D */  beql  $t1, $zero, .L0042FC1C
/* 0042FBE8 8EB90000 */   lw    $t9, ($s5)
.L0042FBEC:
/* 0042FBEC 8F998020 */  lw    $t9, %got(func_0042F5D4)($gp)
/* 0042FBF0 8FB8007C */  lw    $t8, 0x7c($sp)
/* 0042FBF4 27A20088 */  addiu $v0, $sp, 0x88
/* 0042FBF8 2739F5D4 */  addiu $t9, %lo(func_0042F5D4) # addiu $t9, $t9, -0xa2c
/* 0042FBFC 0320F809 */  jalr  $t9
/* 0042FC00 8F040000 */   lw    $a0, ($t8)
/* 0042FC04 8FAA007C */  lw    $t2, 0x7c($sp)
/* 0042FC08 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FC0C 8D4F0004 */  lw    $t7, 4($t2)
/* 0042FC10 15E0FFF6 */  bnez  $t7, .L0042FBEC
/* 0042FC14 AFAF007C */   sw    $t7, 0x7c($sp)
/* 0042FC18 8EB90000 */  lw    $t9, ($s5)
.L0042FC1C:
/* 0042FC1C 8F9289AC */  lw     $s2, %got(graphhead)($gp)
/* 0042FC20 AF20000C */  sw    $zero, 0xc($t9)
/* 0042FC24 8E520000 */  lw    $s2, ($s2)
/* 0042FC28 1240008E */  beqz  $s2, .L0042FE64
/* 0042FC2C AE400010 */   sw    $zero, 0x10($s2)
/* 0042FC30 24160060 */  li    $s6, 96
/* 0042FC34 8F9489B8 */  lw     $s4, %got(curstaticno)($gp)
/* 0042FC38 8F938954 */  lw     $s3, %got(perm_heap)($gp)
/* 0042FC3C 8E42000C */  lw    $v0, 0xc($s2)
.L0042FC40:
/* 0042FC40 50400003 */  beql  $v0, $zero, .L0042FC50
/* 0042FC44 92480006 */   lbu   $t0, 6($s2)
/* 0042FC48 AC520010 */  sw    $s2, 0x10($v0)
/* 0042FC4C 92480006 */  lbu   $t0, 6($s2)
.L0042FC50:
/* 0042FC50 5500000C */  bnezl $t0, .L0042FC84
/* 0042FC54 8E4B0020 */   lw    $t3, 0x20($s2)
/* 0042FC58 8E4C0018 */  lw    $t4, 0x18($s2)
/* 0042FC5C 55800009 */  bnezl $t4, .L0042FC84
/* 0042FC60 8E4B0020 */   lw    $t3, 0x20($s2)
/* 0042FC64 8F998020 */  lw    $t9, %got(func_0042F558)($gp)
/* 0042FC68 02402025 */  move  $a0, $s2
/* 0042FC6C 27A20088 */  addiu $v0, $sp, 0x88
/* 0042FC70 2739F558 */  addiu $t9, %lo(func_0042F558) # addiu $t9, $t9, -0xaa8
/* 0042FC74 0320F809 */  jalr  $t9
/* 0042FC78 00000000 */   nop   
/* 0042FC7C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FC80 8E4B0020 */  lw    $t3, 0x20($s2)
.L0042FC84:
/* 0042FC84 916E0000 */  lbu   $t6, ($t3)
/* 0042FC88 2DCD0040 */  sltiu $t5, $t6, 0x40
/* 0042FC8C 11A00009 */  beqz  $t5, .L0042FCB4
/* 0042FC90 00000000 */   nop   
/* 0042FC94 8F8A8044 */  lw    $t2, %got(D_100106A0)($gp)
/* 0042FC98 000E4943 */  sra   $t1, $t6, 5
/* 0042FC9C 0009C080 */  sll   $t8, $t1, 2
/* 0042FCA0 254A06A0 */  addiu $t2, %lo(D_100106A0) # addiu $t2, $t2, 0x6a0
/* 0042FCA4 01587821 */  addu  $t7, $t2, $t8
/* 0042FCA8 8DF90000 */  lw    $t9, ($t7)
/* 0042FCAC 01D94004 */  sllv  $t0, $t9, $t6
/* 0042FCB0 290D0000 */  slti  $t5, $t0, 0
.L0042FCB4:
/* 0042FCB4 51A00069 */  beql  $t5, $zero, .L0042FE5C
/* 0042FCB8 8E52000C */   lw    $s2, 0xc($s2)
/* 0042FCBC 8E420018 */  lw    $v0, 0x18($s2)
/* 0042FCC0 50400066 */  beql  $v0, $zero, .L0042FE5C
/* 0042FCC4 8E52000C */   lw    $s2, 0xc($s2)
/* 0042FCC8 8C430000 */  lw    $v1, ($v0)
/* 0042FCCC 8C6B0000 */  lw    $t3, ($v1)
/* 0042FCD0 51600062 */  beql  $t3, $zero, .L0042FE5C
/* 0042FCD4 8E52000C */   lw    $s2, 0xc($s2)
/* 0042FCD8 8C690014 */  lw    $t1, 0x14($v1)
/* 0042FCDC 8D2A0004 */  lw    $t2, 4($t1)
/* 0042FCE0 5140005E */  beql  $t2, $zero, .L0042FE5C
/* 0042FCE4 8E52000C */   lw    $s2, 0xc($s2)
/* 0042FCE8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0042FCEC 24040174 */  li    $a0, 372
/* 0042FCF0 02602825 */  move  $a1, $s3
/* 0042FCF4 0320F809 */  jalr  $t9
/* 0042FCF8 00000000 */   nop   
/* 0042FCFC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FD00 00408825 */  move  $s1, $v0
/* 0042FD04 0240C825 */  move  $t9, $s2
/* 0042FD08 00407025 */  move  $t6, $v0
/* 0042FD0C 26480174 */  addiu $t0, $s2, 0x174
.L0042FD10:
/* 0042FD10 8F2F0000 */  lw    $t7, ($t9)
/* 0042FD14 2739000C */  addiu $t9, $t9, 0xc
/* 0042FD18 25CE000C */  addiu $t6, $t6, 0xc
/* 0042FD1C ADCFFFF4 */  sw    $t7, -0xc($t6)
/* 0042FD20 8F38FFF8 */  lw    $t8, -8($t9)
/* 0042FD24 ADD8FFF8 */  sw    $t8, -8($t6)
/* 0042FD28 8F2FFFFC */  lw    $t7, -4($t9)
/* 0042FD2C 1728FFF8 */  bne   $t9, $t0, .L0042FD10
/* 0042FD30 ADCFFFFC */   sw    $t7, -4($t6)
/* 0042FD34 AE42000C */  sw    $v0, 0xc($s2)
/* 0042FD38 8C43000C */  lw    $v1, 0xc($v0)
/* 0042FD3C 50600003 */  beql  $v1, $zero, .L0042FD4C
/* 0042FD40 8E820000 */   lw    $v0, ($s4)
/* 0042FD44 AC620010 */  sw    $v0, 0x10($v1)
/* 0042FD48 8E820000 */  lw    $v0, ($s4)
.L0042FD4C:
/* 0042FD4C AE320010 */  sw    $s2, 0x10($s1)
/* 0042FD50 AE200000 */  sw    $zero, ($s1)
/* 0042FD54 244C0001 */  addiu $t4, $v0, 1
/* 0042FD58 AE8C0000 */  sw    $t4, ($s4)
/* 0042FD5C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0042FD60 24040008 */  li    $a0, 8
/* 0042FD64 02602825 */  move  $a1, $s3
/* 0042FD68 0320F809 */  jalr  $t9
/* 0042FD6C A6220008 */   sh    $v0, 8($s1)
/* 0042FD70 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FD74 AE220014 */  sw    $v0, 0x14($s1)
/* 0042FD78 AC520000 */  sw    $s2, ($v0)
/* 0042FD7C 8E2D0014 */  lw    $t5, 0x14($s1)
/* 0042FD80 24040008 */  li    $a0, 8
/* 0042FD84 02602825 */  move  $a1, $s3
/* 0042FD88 ADA00004 */  sw    $zero, 4($t5)
/* 0042FD8C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0042FD90 0320F809 */  jalr  $t9
/* 0042FD94 00000000 */   nop   
/* 0042FD98 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FD9C AE420018 */  sw    $v0, 0x18($s2)
/* 0042FDA0 AC510000 */  sw    $s1, ($v0)
/* 0042FDA4 8E4B0018 */  lw    $t3, 0x18($s2)
/* 0042FDA8 24040034 */  li    $a0, 52
/* 0042FDAC AD600004 */  sw    $zero, 4($t3)
/* 0042FDB0 8E290018 */  lw    $t1, 0x18($s1)
/* 0042FDB4 8D2A0000 */  lw    $t2, ($t1)
/* 0042FDB8 8D500014 */  lw    $s0, 0x14($t2)
/* 0042FDBC 8E080000 */  lw    $t0, ($s0)
/* 0042FDC0 12480005 */  beq   $s2, $t0, .L0042FDD8
/* 0042FDC4 00000000 */   nop   
/* 0042FDC8 8E100004 */  lw    $s0, 4($s0)
.L0042FDCC:
/* 0042FDCC 8E190000 */  lw    $t9, ($s0)
/* 0042FDD0 5659FFFE */  bnel  $s2, $t9, .L0042FDCC
/* 0042FDD4 8E100004 */   lw    $s0, 4($s0)
.L0042FDD8:
/* 0042FDD8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0042FDDC AE110000 */  sw    $s1, ($s0)
/* 0042FDE0 A2200004 */  sb    $zero, 4($s1)
/* 0042FDE4 0320F809 */  jalr  $t9
/* 0042FDE8 02602825 */   move  $a1, $s3
/* 0042FDEC AE22001C */  sw    $v0, 0x1c($s1)
/* 0042FDF0 8E4E0020 */  lw    $t6, 0x20($s2)
/* 0042FDF4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FDF8 02202025 */  move  $a0, $s1
/* 0042FDFC AC4E000C */  sw    $t6, 0xc($v0)
/* 0042FE00 8E580020 */  lw    $t8, 0x20($s2)
/* 0042FE04 8F0F0008 */  lw    $t7, 8($t8)
/* 0042FE08 AC4F0008 */  sw    $t7, 8($v0)
/* 0042FE0C 8E2C001C */  lw    $t4, 0x1c($s1)
/* 0042FE10 8E4D0020 */  lw    $t5, 0x20($s2)
/* 0042FE14 ADAC0008 */  sw    $t4, 8($t5)
/* 0042FE18 8E2B001C */  lw    $t3, 0x1c($s1)
/* 0042FE1C 8C490008 */  lw    $t1, 8($v0)
/* 0042FE20 AD2B000C */  sw    $t3, 0xc($t1)
/* 0042FE24 A0560000 */  sb    $s6, ($v0)
/* 0042FE28 AC510010 */  sw    $s1, 0x10($v0)
/* 0042FE2C 8F9982CC */  lw    $t9, %call16(init_node_vectors)($gp)
/* 0042FE30 8E2A001C */  lw    $t2, 0x1c($s1)
/* 0042FE34 AE200024 */  sw    $zero, 0x24($s1)
/* 0042FE38 AE200028 */  sw    $zero, 0x28($s1)
/* 0042FE3C 0320F809 */  jalr  $t9
/* 0042FE40 AE2A0020 */   sw    $t2, 0x20($s1)
/* 0042FE44 8EA80000 */  lw    $t0, ($s5)
/* 0042FE48 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042FE4C 56480003 */  bnel  $s2, $t0, .L0042FE5C
/* 0042FE50 8E52000C */   lw    $s2, 0xc($s2)
/* 0042FE54 AEB10000 */  sw    $s1, ($s5)
/* 0042FE58 8E52000C */  lw    $s2, 0xc($s2)
.L0042FE5C:
/* 0042FE5C 5640FF78 */  bnezl $s2, .L0042FC40
/* 0042FE60 8E42000C */   lw    $v0, 0xc($s2)
.L0042FE64:
/* 0042FE64 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0042FE68 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042FE6C 8FB10018 */  lw    $s1, 0x18($sp)
/* 0042FE70 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042FE74 8FB30020 */  lw    $s3, 0x20($sp)
/* 0042FE78 8FB40024 */  lw    $s4, 0x24($sp)
/* 0042FE7C 8FB50028 */  lw    $s5, 0x28($sp)
/* 0042FE80 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0042FE84 8FB70030 */  lw    $s7, 0x30($sp)
/* 0042FE88 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0042FE8C 03E00008 */  jr    $ra
/* 0042FE90 27BD0088 */   addiu $sp, $sp, 0x88
    .type controlflow, @function
    .size controlflow, .-controlflow
    .end controlflow
)"");
