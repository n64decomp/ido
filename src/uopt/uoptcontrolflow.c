#include <stdlib.h>

#include "uoptdata.h"
#include "uoptutil.h"

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

)"");

/*
0043CA8C func_0043CA8C
0043CFCC readnxtinst
*/
struct Graphnode *ingraph(int blockno) {
    struct Graphnode *graphnode = graphhead;
    bool found = false;

    while (!found && graphnode != NULL) {
        if (blockno == graphnode->blockno) {
            found = true;
        } else {
            graphnode = graphnode->next;
        }
    }

    return found ? graphnode : NULL;
}

/*
0042F424 appendgraph
0046FA20 new_header_node
004713E8 loopunroll
004761D0 tail_recursion
*/
void init_graphnode(struct Graphnode *node) {
    node->unkBb8 = 0;
    node->blockno = 0;
    node->predecessors = NULL;
    node->successors = NULL;
    node->next = NULL;
    node->terminal = false;
    node->unk7 = 0;
    node->unk4 = false;
    node->unk5 = 0;
    node->unkBb4 = 0;
    node->stat_head = NULL;
    node->stat_tail = NULL;
    node->varlisthead = NULL;
    node->varlisttail = NULL;
    node->unk30 = 0;
    node->fallthrough_bbs = NULL;
    node->jump_bbs = NULL;
    node->bvs.init.line = curlocln;
}

/*
0042F6CC controlflow
004471AC codeimage
00456310 func_00456310
00456A2C oneproc
004713E8 loopunroll
004761D0 tail_recursion
*/
void init_node_vectors(struct Graphnode *graphnode) {
    struct BitVector empty = {0, NULL};

    graphnode->bvs.stage1.alters = empty;
    graphnode->bvs.stage1.antlocs = empty;
    graphnode->bvs.stage1.avlocs = empty;
    graphnode->bvs.stage1.absalters = empty;
    graphnode->bvs.stage1.u.precm.pavlocs = empty;
    graphnode->bvs.stage1.u.precm.expoccur = empty;

    graphnode->indiracc = empty;
}

/*
0043CA8C func_0043CA8C
0043CFCC readnxtinst
00456310 func_00456310
00456A2C oneproc
*/
void appendgraph(void) {
    struct Graphnode *node;

    if (graphhead == NULL) {
        node = (struct Graphnode *)alloc_new(sizeof(struct Graphnode), &perm_heap);
        graphhead = node;
    } else {
        node = (struct Graphnode *)alloc_new(sizeof(struct Graphnode), &perm_heap);
        graphtail->next = node;
    }
    graphtail = node;
    if (graphtail == NULL) {
        outofmem = true;
        return;
    }
    init_graphnode(graphtail);
}

/*
0042F4DC visit_successors
0042F6CC controlflow
*/
static void visit_successors(struct Graphnode *node) { // inner function
    struct GraphnodeList *succ;

    if (node->unk7 == 0) {
        node->unk7 = 1;
        succ = node->successors;
        while (succ != NULL) {
            visit_successors(succ->graphnode);
            succ = succ->next;
        }
    }
}

/*
0042F558 visit_predecessors
0042F6CC controlflow
*/
static void visit_predecessors(struct Graphnode *node) { // inner function
    struct GraphnodeList *pred;

    node->terminal = true;
    pred = node->predecessors;

    while (pred != NULL) {
        if (pred->graphnode->terminal == false) {
            visit_predecessors(pred->graphnode);
        }
        pred = pred->next;
    }
}

/*
0042F5D4 place_graphtail
0042F6CC controlflow
*/
static void place_graphtail(struct Graphnode *head) { // inner function
    struct GraphnodeList *succ;
    bool found;

    if (head->unk7 != 2) {
        graphtail->next = head;
        graphtail = head;
        head->unk7 = 2;

        // visit the successor directly after head first, then visit the other successors
        succ = head->successors;
        found = false;
        while (succ != NULL && !found) {
            if ((head->num + 1) == succ->graphnode->num) {
                place_graphtail(succ->graphnode);
                found = true;
            }
            succ = succ->next;
        }

        succ = head->successors;
        while (succ != NULL) {
            place_graphtail(succ->graphnode);
            succ = succ->next;
        }
    }
}

/*
00456A2C oneproc
*/
void controlflow() {
    struct Graphnode *curnode;
    struct Graphnode *loop_node;
    struct Graphnode *new_node;

    struct GraphnodeList *succ;
    struct GraphnodeList *pred;
    struct GraphnodeList *prev_pred;

    struct GraphnodeList *unk4_nodelist;
    struct GraphnodeList *new_list;

    struct Statement *stat;
    struct Statement *prev_stat;

    bool found;
    int i;

    visit_successors(graphhead);
    unk4_nodelist = NULL;

    curnode = graphhead->next;
    while (curnode != NULL) {
        if (curnode->unk4 != false) {
            visit_successors(curnode);
            // unk4_nodelist := GraphnodeList.create(curnode, unk4_nodelist);
            new_list = new(sizeof(struct GraphnodeList), false);
            new_list->graphnode = curnode;
            new_list->next = unk4_nodelist;
            unk4_nodelist = new_list;
        }
        curnode = curnode->next;
    }

    curnode = graphhead;
    while (curnode != NULL) {
        if (curnode->unk7 == 0) {
            if (curnode->stat_head != NULL && curnode->stat_head->opc == Uclab && curnode->stat_head->u.label.unk1C == false) {
                curnode->successors = NULL;
            }

            succ = curnode->successors;
            while (succ != NULL) {
                pred = succ->graphnode->predecessors;
                if (curnode == pred->graphnode) {
                    succ->graphnode->predecessors = pred->next;
                } else {

                    prev_pred = succ->graphnode->predecessors;
                    pred = pred->next;

                    while (curnode != pred->graphnode) {
                        prev_pred = pred;
                        pred = pred->next;
                    }
                    prev_pred->next = pred->next;
                }
                succ = succ->next;
            }

            if (curnode->stat_head != NULL) {
                prev_stat = curnode->stat_head->prev;

                stat = prev_stat->next;
                loop_node = stat->graphnode;
                found = false;

                do {
                    // Not case and not default
                    if (stat->opc != Uclab && stat->opc != Udef) {
                        if (Uxjp == stat->opc) {
                            stat->u.xjp.case_stmts->u.label.unk1C = false;
                        }

                        prev_stat->next = stat->next;
                        if (stat->next != NULL) {
                            stat->next->prev = prev_stat;
                        }

                        if (stat->opc == Uisst || stat->opc == Ustr) {
                            if (stat->unk3 == false) {
                                decreasecount(stat->expr->data.isvar_issvar.unk34);
                            }
                            if (stat->opc == Uisst) {
                                decreasecount(stat->u.store.expr);
                            }
                        } else {
                            switch (stat->opc) {
                                // emulating 'stat->opc not in [Uaent, Ubgnb, ...]'
                                case Uaent:
                                case Ubgnb:
                                case Ucia:
                                case Uclab:
                                case Uclbd:
                                case Uctrl:
                                case Ucubd:
                                case Ucup:
                                case Udef:
                                case Udup:
                                case Uendb:
                                case Uicuf:
                                case Ulab:
                                case Ulbdy:
                                case Ulbgn:
                                case Ulend:
                                case Uloc:
                                case Ultrm:
                                case Umst:
                                case Unop:
                                case Uret:
                                case Ustep:
                                case Uswp:
                                case Uujp:
                                case Uxpar:
                                    break;

                                default:
                                    decreasecount(stat->expr);
                                    switch (stat->opc) {
                                        // emulating 'stat->opc in [Uistr, Uistv, ...]'
                                        case Uistr:
                                        case Uistv:
                                        case Umov:
                                        case Umovv:
                                        case Utpeq:
                                        case Utpge:
                                        case Utpgt:
                                        case Utple:
                                        case Utplt:
                                        case Utpne:
                                        case Uirst:
                                        case Uirsv:
                                            decreasecount(stat->u.store.expr);
                                            break;

                                        default:
                                            break;
                                    }
                                    break;
                            }
                        }
                    } else {
                        stat->graphnode = prev_stat->graphnode;
                        if (Uclab == stat->opc) {
                            for (i = 0; i < stat->u.label.length; i++) {
                                stat->graphnode = prev_stat->graphnode;
                                stat = stat->next;
                            }
                        }
                        prev_stat = stat;
                    }

                    stat = stat->next;
                    if (stat != NULL) {
                        found = (loop_node != stat->graphnode);
                    }
                } while (stat != NULL && found == false);
            }
        } else {
            if (curnode->blockno != 0 && curnode->stat_head == NULL) {
                writeln(err.c_file);
                write_string(err.c_file, "uopt: Internal: ", 16, 16);
                write_string(err.c_file, entnam0, 1024, entnam0len);
                write_string(err.c_file, ": label L", 9, 9);
                write_cardinal(err.c_file, curnode->blockno, 0, 10);
                write_string(err.c_file, " undefined.", 11, 11);
                writeln(err.c_file);
                fflush(err.c_file);
                abort();
            }

        }
        curnode = curnode->next;
    }

    succ = graphhead->successors;
    graphhead->unk7 = 2;
    graphtail = graphhead;
    while (succ != NULL) {
        place_graphtail(succ->graphnode);
        succ = succ->next;
    }

    while (unk4_nodelist != NULL) {
        place_graphtail(unk4_nodelist->graphnode);
        unk4_nodelist = unk4_nodelist->next;
    }

    graphtail->next = NULL;
    curnode = graphhead;
    curnode->prev = NULL;
    while (curnode != NULL) {
        if (curnode->next != NULL) {
            curnode->next->prev = curnode;
        }

        if (curnode->terminal == false) {
            if (curnode->successors == NULL) {
                visit_predecessors(curnode);
            }
        }

        // curnode->stat_tail->opc in [Ucia, Ucup, Uicuf]
        if (curnode->stat_tail->opc == Ucia || curnode->stat_tail->opc == Ucup || curnode->stat_tail->opc == Uicuf ) {
            if (curnode->successors != NULL &&
                    curnode->successors->graphnode->blockno != 0 &&
                    curnode->successors->graphnode->predecessors->next != NULL)  {

                new_node = alloc_new(sizeof(struct Graphnode), &perm_heap);
                *new_node = *curnode;

                curnode->next = new_node;
                if (new_node->next != NULL) {
                    new_node->next->prev = new_node;
                }

                new_node->prev = curnode;
                new_node->blockno = 0;
                new_node->num = curstaticno++;

                new_node->predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                new_node->predecessors->graphnode = curnode;
                new_node->predecessors->next = NULL;

                curnode->successors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                curnode->successors->graphnode = new_node;
                curnode->successors->next = NULL;

                pred = new_node->successors->graphnode->predecessors;
                while (curnode != pred->graphnode) {
                    pred = pred->next;
                }

                pred->graphnode = new_node;
                new_node->unk4 = false;
                stat = alloc_new(sizeof(struct Statement), &perm_heap);
                new_node->stat_head = stat;
                stat->prev = curnode->stat_tail;
                stat->next = curnode->stat_tail->next;
                curnode->stat_tail->next = new_node->stat_head;
                stat->next->prev = new_node->stat_head;
                stat->opc = Unop;
                stat->graphnode = new_node;
                new_node->varlisthead = NULL;
                new_node->varlisttail = NULL;
                new_node->stat_tail = new_node->stat_head;

                init_node_vectors(new_node);
                if (curnode == graphtail) {
                    graphtail = new_node;
                }
            }
        }
        curnode = curnode->next;
    }
}
