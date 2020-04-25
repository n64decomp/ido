__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel new
    .ent new
    # 0042F6CC controlflow
    # 00486AF4 ucoid
    # 00486C78 ucofname
/* 00497BE0 3C1C0FB8 */  .cpload $t9
/* 00497BE4 279C26B0 */  
/* 00497BE8 0399E021 */  
/* 00497BEC 8F9988B4 */  lw    $t9, %call16(xmalloc)($gp)
/* 00497BF0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00497BF4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00497BF8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00497BFC AFA40028 */  sw    $a0, 0x28($sp)
/* 00497C00 0320F809 */  jalr  $t9
/* 00497C04 AFA5002C */   sw    $a1, 0x2c($sp)
/* 00497C08 8FAE002C */  lw    $t6, 0x2c($sp)
/* 00497C0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00497C10 00402025 */  move  $a0, $v0
/* 00497C14 51C0000B */  beql  $t6, $zero, .L00497C44
/* 00497C18 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00497C1C 50400009 */  beql  $v0, $zero, .L00497C44
/* 00497C20 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00497C24 8F9980F0 */  lw    $t9, %call16(memset)($gp)
/* 00497C28 00002825 */  move  $a1, $zero
/* 00497C2C 8FA60028 */  lw    $a2, 0x28($sp)
/* 00497C30 0320F809 */  jalr  $t9
/* 00497C34 AFA20024 */   sw    $v0, 0x24($sp)
/* 00497C38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00497C3C 8FA40024 */  lw    $a0, 0x24($sp)
/* 00497C40 8FBF001C */  lw    $ra, 0x1c($sp)
.L00497C44:
/* 00497C44 27BD0028 */  addiu $sp, $sp, 0x28
/* 00497C48 00801025 */  move  $v0, $a0
/* 00497C4C 03E00008 */  jr    $ra
/* 00497C50 00000000 */   nop   
    .type new, @function
    .size new, .-new
    .end new

glabel dispose
    .ent dispose
    # 00486AF4 ucoid
    # 00486C78 ucofname
/* 00497C54 3C1C0FB8 */  .cpload $t9
/* 00497C58 279C263C */  
/* 00497C5C 0399E021 */  
/* 00497C60 8F9988AC */  lw    $t9, %call16(xfree)($gp)
/* 00497C64 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00497C68 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00497C6C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00497C70 0320F809 */  jalr  $t9
/* 00497C74 AFA50024 */   sw    $a1, 0x24($sp)
/* 00497C78 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00497C7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00497C80 27BD0020 */  addiu $sp, $sp, 0x20
/* 00497C84 03E00008 */  jr    $ra
/* 00497C88 00000000 */   nop   
    .type dispose, @function
    .size dispose, .-dispose
    .end dispose
)"");
