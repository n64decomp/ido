__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel clock
    .ent clock
    # 004807E0 getclock
/* 00497F70 3C1C0FB8 */  .cpload $t9
/* 00497F74 279C2320 */  
/* 00497F78 0399E021 */  
/* 00497F7C 8F998148 */  lw    $t9, %call16(times)($gp)
/* 00497F80 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00497F84 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00497F88 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00497F8C 0320F809 */  jalr  $t9
/* 00497F90 27A40020 */   addiu $a0, $sp, 0x20
/* 00497F94 2401FFFF */  li    $at, -1
/* 00497F98 14410006 */  bne   $v0, $at, .L00497FB4
/* 00497F9C 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00497FA0 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 00497FA4 2404007B */  li    $a0, 123
/* 00497FA8 0320F809 */  jalr  $t9
/* 00497FAC 00000000 */   nop   
/* 00497FB0 8FBC0018 */  lw    $gp, 0x18($sp)
.L00497FB4:
/* 00497FB4 8FA20020 */  lw    $v0, 0x20($sp)
/* 00497FB8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00497FBC 27BD0030 */  addiu $sp, $sp, 0x30
/* 00497FC0 00400821 */  move  $at, $v0
/* 00497FC4 00021140 */  sll   $v0, $v0, 5
/* 00497FC8 00411023 */  subu  $v0, $v0, $at
/* 00497FCC 00021080 */  sll   $v0, $v0, 2
/* 00497FD0 00411021 */  addu  $v0, $v0, $at
/* 00497FD4 000210C0 */  sll   $v0, $v0, 3
/* 00497FD8 24010064 */  li    $at, 100
/* 00497FDC 0041001A */  div   $zero, $v0, $at
/* 00497FE0 00001012 */  mflo  $v0
/* 00497FE4 03E00008 */  jr    $ra
/* 00497FE8 00000000 */   nop   
    .type clock, @function
    .size clock, .-clock
    .end clock
)"");
