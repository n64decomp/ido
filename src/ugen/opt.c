__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000B750:
    # 00438C40 set_opts
    .asciz "opt.p"

    .balign 4
jtbl_1000B758:
    # 00438C40 set_opts
    .gpword .L00438CB0
    .gpword .L00438CE0
    .gpword .L00438D44
    .gpword .L00438D44
    .gpword .L00438D44




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel set_opts
    .ent set_opts
    # 0044BF18 main
/* 00438C40 3C1C0FBE */  .cpload $t9
/* 00438C44 279C6E10 */  
/* 00438C48 0399E021 */  
/* 00438C4C 8F818A44 */  lw     $at, %got(glevel)($gp)
/* 00438C50 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00438C54 24030002 */  li    $v1, 2
/* 00438C58 A0250000 */  sb    $a1, ($at)
/* 00438C5C 8F818A48 */  lw     $at, %got(olevel)($gp)
/* 00438C60 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00438C64 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00438C68 AFA40020 */  sw    $a0, 0x20($sp)
/* 00438C6C AFA50024 */  sw    $a1, 0x24($sp)
/* 00438C70 14A30005 */  bne   $a1, $v1, .L00438C88
/* 00438C74 A0240000 */   sb    $a0, ($at)
/* 00438C78 2C810002 */  sltiu $at, $a0, 2
/* 00438C7C 54200003 */  bnel  $at, $zero, .L00438C8C
/* 00438C80 2C810005 */   sltiu $at, $a0, 5
/* 00438C84 24040001 */  li    $a0, 1
.L00438C88:
/* 00438C88 2C810005 */  sltiu $at, $a0, 5
.L00438C8C:
/* 00438C8C 1020004F */  beqz  $at, .L00438DCC
/* 00438C90 24070005 */   li    $a3, 5
/* 00438C94 8F818038 */  lw    $at, %got(jtbl_1000B758)($gp)
/* 00438C98 00047080 */  sll   $t6, $a0, 2
/* 00438C9C 002E0821 */  addu  $at, $at, $t6
/* 00438CA0 8C2EB758 */  lw    $t6, %lo(jtbl_1000B758)($at)
/* 00438CA4 01DC7021 */  addu  $t6, $t6, $gp
/* 00438CA8 01C00008 */  jr    $t6
/* 00438CAC 00000000 */   nop   
.L00438CB0:
/* 00438CB0 8F818A30 */  lw     $at, %got(opt_cse)($gp)
/* 00438CB4 24060001 */  li    $a2, 1
/* 00438CB8 8F828A40 */  lw     $v0, %got(tail_call_opt)($gp)
/* 00438CBC A0260000 */  sb    $a2, ($at)
/* 00438CC0 8F818A34 */  lw     $at, %got(opt_labels)($gp)
/* 00438CC4 A0200000 */  sb    $zero, ($at)
/* 00438CC8 8F818A38 */  lw     $at, %got(opt_parms)($gp)
/* 00438CCC A0260000 */  sb    $a2, ($at)
/* 00438CD0 8F818A3C */  lw     $at, %got(ignore_vreg)($gp)
/* 00438CD4 A0200000 */  sb    $zero, ($at)
/* 00438CD8 10000043 */  b     .L00438DE8
/* 00438CDC A0400000 */   sb    $zero, ($v0)
.L00438CE0:
/* 00438CE0 2CA20001 */  sltiu $v0, $a1, 1
/* 00438CE4 14400003 */  bnez  $v0, .L00438CF4
/* 00438CE8 24010003 */   li    $at, 3
/* 00438CEC 14A10005 */  bne   $a1, $at, .L00438D04
/* 00438CF0 00000000 */   nop   
.L00438CF4:
/* 00438CF4 8F818A30 */  lw     $at, %got(opt_cse)($gp)
/* 00438CF8 24060001 */  li    $a2, 1
/* 00438CFC 10000004 */  b     .L00438D10
/* 00438D00 A0230000 */   sb    $v1, ($at)
.L00438D04:
/* 00438D04 8F818A30 */  lw     $at, %got(opt_cse)($gp)
/* 00438D08 24060001 */  li    $a2, 1
/* 00438D0C A0260000 */  sb    $a2, ($at)
.L00438D10:
/* 00438D10 14400003 */  bnez  $v0, .L00438D20
/* 00438D14 00401825 */   move  $v1, $v0
/* 00438D18 38A30003 */  xori  $v1, $a1, 3
/* 00438D1C 2C630001 */  sltiu $v1, $v1, 1
.L00438D20:
/* 00438D20 8F818A34 */  lw     $at, %got(opt_labels)($gp)
/* 00438D24 8F828A40 */  lw     $v0, %got(tail_call_opt)($gp)
/* 00438D28 A0230000 */  sb    $v1, ($at)
/* 00438D2C 8F818A38 */  lw     $at, %got(opt_parms)($gp)
/* 00438D30 A0260000 */  sb    $a2, ($at)
/* 00438D34 8F818A3C */  lw     $at, %got(ignore_vreg)($gp)
/* 00438D38 A0200000 */  sb    $zero, ($at)
/* 00438D3C 1000002A */  b     .L00438DE8
/* 00438D40 A0400000 */   sb    $zero, ($v0)
.L00438D44:
/* 00438D44 2CA20001 */  sltiu $v0, $a1, 1
/* 00438D48 14400003 */  bnez  $v0, .L00438D58
/* 00438D4C 24010003 */   li    $at, 3
/* 00438D50 14A10005 */  bne   $a1, $at, .L00438D68
/* 00438D54 00000000 */   nop   
.L00438D58:
/* 00438D58 8F818A30 */  lw     $at, %got(opt_cse)($gp)
/* 00438D5C 24060001 */  li    $a2, 1
/* 00438D60 10000004 */  b     .L00438D74
/* 00438D64 A0230000 */   sb    $v1, ($at)
.L00438D68:
/* 00438D68 8F818A30 */  lw     $at, %got(opt_cse)($gp)
/* 00438D6C 24060001 */  li    $a2, 1
/* 00438D70 A0260000 */  sb    $a2, ($at)
.L00438D74:
/* 00438D74 14400003 */  bnez  $v0, .L00438D84
/* 00438D78 00401825 */   move  $v1, $v0
/* 00438D7C 38A30003 */  xori  $v1, $a1, 3
/* 00438D80 2C630001 */  sltiu $v1, $v1, 1
.L00438D84:
/* 00438D84 8F818A34 */  lw     $at, %got(opt_labels)($gp)
/* 00438D88 A0230000 */  sb    $v1, ($at)
/* 00438D8C 8F818A38 */  lw     $at, %got(opt_parms)($gp)
/* 00438D90 A0200000 */  sb    $zero, ($at)
/* 00438D94 8F818A3C */  lw     $at, %got(ignore_vreg)($gp)
/* 00438D98 A0260000 */  sb    $a2, ($at)
/* 00438D9C 2C810003 */  sltiu $at, $a0, 3
/* 00438DA0 14200007 */  bnez  $at, .L00438DC0
/* 00438DA4 00000000 */   nop   
/* 00438DA8 8F828A40 */  lw     $v0, %got(tail_call_opt)($gp)
/* 00438DAC 904F0000 */  lbu   $t7, ($v0)
/* 00438DB0 11E00003 */  beqz  $t7, .L00438DC0
/* 00438DB4 00000000 */   nop   
/* 00438DB8 1000000B */  b     .L00438DE8
/* 00438DBC A0460000 */   sb    $a2, ($v0)
.L00438DC0:
/* 00438DC0 8F828A40 */  lw     $v0, %got(tail_call_opt)($gp)
/* 00438DC4 10000008 */  b     .L00438DE8
/* 00438DC8 A0400000 */   sb    $zero, ($v0)
.L00438DCC:
/* 00438DCC 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 00438DD0 8F868038 */  lw    $a2, %got(RO_1000B750)($gp)
/* 00438DD4 24040001 */  li    $a0, 1
/* 00438DD8 2405001D */  li    $a1, 29
/* 00438DDC 0320F809 */  jalr  $t9
/* 00438DE0 24C6B750 */   addiu $a2, %lo(RO_1000B750) # addiu $a2, $a2, -0x48b0
/* 00438DE4 8FBC0018 */  lw    $gp, 0x18($sp)
.L00438DE8:
/* 00438DE8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00438DEC 27BD0020 */  addiu $sp, $sp, 0x20
/* 00438DF0 03E00008 */  jr    $ra
/* 00438DF4 00000000 */   nop   
    .type set_opts, @function
    .size set_opts, .-set_opts
    .end set_opts
)"");
