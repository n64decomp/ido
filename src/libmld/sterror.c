__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000EC70:
    # 00488AF0 st_error
    .asciz "%s: Error: "

RO_1000EC7C:
    # 00488AF0 st_error
    .asciz "\n"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel st_error
    .ent st_error
    # 00488434 st_extstradd
    # 00488C8C st_fdadd
    # 0048970C st_stradd
    # 00489B50 st_malloc
    # 0048D0E0 st_readst
    # 0048E148 st_writebinary
    # 0048E1D8 st_writest
/* 00488AF0 3C1C0FB9 */  .cpload $t9
/* 00488AF4 279C17A0 */  
/* 00488AF8 0399E021 */  
/* 00488AFC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00488B00 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00488B04 AFA40028 */  sw    $a0, 0x28($sp)
/* 00488B08 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00488B0C AFA60030 */  sw    $a2, 0x30($sp)
/* 00488B10 8F8688F4 */  lw     $a2, %got(st_errname)($gp)
/* 00488B14 8F858044 */  lw    $a1, %got(RO_1000EC70)($gp)
/* 00488B18 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00488B1C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00488B20 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00488B24 AFA70034 */  sw    $a3, 0x34($sp)
/* 00488B28 8CC60000 */  lw    $a2, ($a2)
/* 00488B2C 24A5EC70 */  addiu $a1, %lo(RO_1000EC70) # addiu $a1, $a1, -0x1390
/* 00488B30 0320F809 */  jalr  $t9
/* 00488B34 24840020 */   addiu $a0, $a0, 0x20
/* 00488B38 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00488B3C 8FAE0034 */  lw    $t6, 0x34($sp)
/* 00488B40 8FAF0038 */  lw    $t7, 0x38($sp)
/* 00488B44 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00488B48 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00488B4C 8FA50028 */  lw    $a1, 0x28($sp)
/* 00488B50 8FA6002C */  lw    $a2, 0x2c($sp)
/* 00488B54 8FA70030 */  lw    $a3, 0x30($sp)
/* 00488B58 AFAE0010 */  sw    $t6, 0x10($sp)
/* 00488B5C AFAF0014 */  sw    $t7, 0x14($sp)
/* 00488B60 0320F809 */  jalr  $t9
/* 00488B64 24840020 */   addiu $a0, $a0, 0x20
/* 00488B68 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00488B6C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00488B70 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00488B74 8F858044 */  lw    $a1, %got(RO_1000EC7C)($gp)
/* 00488B78 24840020 */  addiu $a0, $a0, 0x20
/* 00488B7C 0320F809 */  jalr  $t9
/* 00488B80 24A5EC7C */   addiu $a1, %lo(RO_1000EC7C) # addiu $a1, $a1, -0x1384
/* 00488B84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00488B88 24040001 */  li    $a0, 1
/* 00488B8C 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 00488B90 0320F809 */  jalr  $t9
/* 00488B94 00000000 */   nop   
/* 00488B98 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00488B9C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00488BA0 27BD0028 */  addiu $sp, $sp, 0x28
/* 00488BA4 03E00008 */  jr    $ra
/* 00488BA8 00000000 */   nop   
    .type st_error, @function
    .size st_error, .-st_error
    .end st_error
)"");
