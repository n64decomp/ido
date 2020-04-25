__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000FC50:
    # 004983F0 _getbuf
    .asciz "malloc failed"

RO_1000FC60:
    # 004984F0 caseerror
    .asciz "No case matches value in case statement on page %d line %d file %s.\n"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel _getbuf
    .ent _getbuf
    # 00497C90 rewrite
/* 004983F0 3C1C0FB8 */  .cpload $t9
/* 004983F4 279C1EA0 */  
/* 004983F8 0399E021 */  
/* 004983FC 8F998898 */  lw    $t9, %call16(calc_size)($gp)
/* 00498400 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00498404 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00498408 AFB00014 */  sw    $s0, 0x14($sp)
/* 0049840C 00808025 */  move  $s0, $a0
/* 00498410 0320F809 */  jalr  $t9
/* 00498414 AFBC0018 */   sw    $gp, 0x18($sp)
/* 00498418 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0049841C AFA2002C */  sw    $v0, 0x2c($sp)
/* 00498420 8F838054 */  lw     $v1, %got(__iob)($gp)
/* 00498424 246E0010 */  addiu $t6, $v1, 0x10
/* 00498428 560E000B */  bnel  $s0, $t6, .L00498458
/* 0049842C AFA00028 */   sw    $zero, 0x28($sp)
/* 00498430 8F998150 */  lw    $t9, %call16(isatty)($gp)
/* 00498434 9064001D */  lbu   $a0, 0x1d($v1)
/* 00498438 0320F809 */  jalr  $t9
/* 0049843C 00000000 */   nop   
/* 00498440 10400004 */  beqz  $v0, .L00498454
/* 00498444 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00498448 240F0040 */  li    $t7, 64
/* 0049844C 10000002 */  b     .L00498458
/* 00498450 AFAF0028 */   sw    $t7, 0x28($sp)
.L00498454:
/* 00498454 AFA00028 */  sw    $zero, 0x28($sp)
.L00498458:
/* 00498458 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 0049845C 8FA4002C */  lw    $a0, 0x2c($sp)
/* 00498460 0320F809 */  jalr  $t9
/* 00498464 00000000 */   nop   
/* 00498468 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0049846C 1440000D */  bnez  $v0, .L004984A4
/* 00498470 AFA20024 */   sw    $v0, 0x24($sp)
/* 00498474 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00498478 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 0049847C 8F858044 */  lw    $a1, %got(RO_1000FC50)($gp)
/* 00498480 24840020 */  addiu $a0, $a0, 0x20
/* 00498484 0320F809 */  jalr  $t9
/* 00498488 24A5FC50 */   addiu $a1, %lo(RO_1000FC50) # addiu $a1, $a1, -0x3b0
/* 0049848C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00498490 24040001 */  li    $a0, 1
/* 00498494 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 00498498 0320F809 */  jalr  $t9
/* 0049849C 00000000 */   nop   
/* 004984A0 8FBC0018 */  lw    $gp, 0x18($sp)
.L004984A4:
/* 004984A4 9218000C */  lbu   $t8, 0xc($s0)
/* 004984A8 02002025 */  move  $a0, $s0
/* 004984AC 37190008 */  ori   $t9, $t8, 8
/* 004984B0 A219000C */  sb    $t9, 0xc($s0)
/* 004984B4 8F99814C */  lw    $t9, %call16(setvbuf)($gp)
/* 004984B8 8FA7002C */  lw    $a3, 0x2c($sp)
/* 004984BC 8FA60028 */  lw    $a2, 0x28($sp)
/* 004984C0 0320F809 */  jalr  $t9
/* 004984C4 8FA50024 */   lw    $a1, 0x24($sp)
/* 004984C8 8FA8002C */  lw    $t0, 0x2c($sp)
/* 004984CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004984D0 AE080000 */  sw    $t0, ($s0)
/* 004984D4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004984D8 8FB00014 */  lw    $s0, 0x14($sp)
/* 004984DC 27BD0030 */  addiu $sp, $sp, 0x30
/* 004984E0 03E00008 */  jr    $ra
/* 004984E4 00000000 */   nop   
    .type _getbuf, @function
    .size _getbuf, .-_getbuf
    .end _getbuf
)"");
