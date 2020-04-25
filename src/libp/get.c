__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000FC00:
    # 00498300 get
    .asciz "get called on a file open for writing.\n"

RO_1000FC28:
    # 00498300 get
    .asciz "Buffer not a multiple of record size.\n"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel get
    .ent get
/* 00498300 3C1C0FB8 */  .cpload $t9
/* 00498304 279C1F90 */  
/* 00498308 0399E021 */  
/* 0049830C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00498310 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00498314 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00498318 908E000C */  lbu   $t6, 0xc($a0)
/* 0049831C 00803025 */  move  $a2, $a0
/* 00498320 31CF0001 */  andi  $t7, $t6, 1
/* 00498324 55E0000A */  bnezl $t7, .L00498350
/* 00498328 8CC80000 */   lw    $t0, ($a2)
/* 0049832C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00498330 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00498334 8F858044 */  lw    $a1, %got(RO_1000FC00)($gp)
/* 00498338 24840020 */  addiu $a0, $a0, 0x20
/* 0049833C 0320F809 */  jalr  $t9
/* 00498340 24A5FC00 */   addiu $a1, %lo(RO_1000FC00) # addiu $a1, $a1, -0x400
/* 00498344 10000023 */  b     .L004983D4
/* 00498348 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0049834C 8CC80000 */  lw    $t0, ($a2)
.L00498350:
/* 00498350 8CD80004 */  lw    $t8, 4($a2)
/* 00498354 01054823 */  subu  $t1, $t0, $a1
/* 00498358 0125082A */  slt   $at, $t1, $a1
/* 0049835C 0305C821 */  addu  $t9, $t8, $a1
/* 00498360 ACD90004 */  sw    $t9, 4($a2)
/* 00498364 1020001B */  beqz  $at, .L004983D4
/* 00498368 ACC90000 */   sw    $t1, ($a2)
/* 0049836C 1920000A */  blez  $t1, .L00498398
/* 00498370 00000000 */   nop   
/* 00498374 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00498378 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 0049837C 8F858044 */  lw    $a1, %got(RO_1000FC28)($gp)
/* 00498380 AFA60020 */  sw    $a2, 0x20($sp)
/* 00498384 24840020 */  addiu $a0, $a0, 0x20
/* 00498388 0320F809 */  jalr  $t9
/* 0049838C 24A5FC28 */   addiu $a1, %lo(RO_1000FC28) # addiu $a1, $a1, -0x3d8
/* 00498390 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00498394 8FA60020 */  lw    $a2, 0x20($sp)
.L00498398:
/* 00498398 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049839C 00C02025 */  move  $a0, $a2
/* 004983A0 AFA60020 */  sw    $a2, 0x20($sp)
/* 004983A4 0320F809 */  jalr  $t9
/* 004983A8 00000000 */   nop   
/* 004983AC 2401FFFF */  li    $at, -1
/* 004983B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004983B4 8FA60020 */  lw    $a2, 0x20($sp)
/* 004983B8 10410006 */  beq   $v0, $at, .L004983D4
/* 004983BC 00402025 */   move  $a0, $v0
/* 004983C0 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 004983C4 00C02825 */  move  $a1, $a2
/* 004983C8 0320F809 */  jalr  $t9
/* 004983CC 00000000 */   nop   
/* 004983D0 8FBC0018 */  lw    $gp, 0x18($sp)
.L004983D4:
/* 004983D4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004983D8 27BD0020 */  addiu $sp, $sp, 0x20
/* 004983DC 03E00008 */  jr    $ra
/* 004983E0 00000000 */   nop   
    .type get, @function
    .size get, .-get
    .end get
)"");
