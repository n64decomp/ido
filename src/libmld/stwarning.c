__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000F480:
    # 00491FD0 st_warning
    .asciz "\n"

RO_1000F484:
    # 00491FD0 st_warning
    .asciz "%s: Warning: "

RO_1000F494:
    # 00491FD0 st_warning
    .asciz "\n"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel st_warning
    .ent st_warning
    # 0048E078 func_0048E078
/* 00491FD0 3C1C0FB9 */  .cpload $t9
/* 00491FD4 279C82C0 */  
/* 00491FD8 0399E021 */  
/* 00491FDC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00491FE0 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00491FE4 AFA40028 */  sw    $a0, 0x28($sp)
/* 00491FE8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00491FEC 8F858044 */  lw    $a1, %got(RO_1000F480)($gp)
/* 00491FF0 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00491FF4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00491FF8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00491FFC AFA60030 */  sw    $a2, 0x30($sp)
/* 00492000 AFA70034 */  sw    $a3, 0x34($sp)
/* 00492004 24A5F480 */  addiu $a1, %lo(RO_1000F480) # addiu $a1, $a1, -0xb80
/* 00492008 0320F809 */  jalr  $t9
/* 0049200C 24840020 */   addiu $a0, $a0, 0x20
/* 00492010 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492014 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00492018 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 0049201C 8F858044 */  lw    $a1, %got(RO_1000F484)($gp)
/* 00492020 8F8688F4 */  lw     $a2, %got(st_errname)($gp)
/* 00492024 24840020 */  addiu $a0, $a0, 0x20
/* 00492028 24A5F484 */  addiu $a1, %lo(RO_1000F484) # addiu $a1, $a1, -0xb7c
/* 0049202C 0320F809 */  jalr  $t9
/* 00492030 8CC60000 */   lw    $a2, ($a2)
/* 00492034 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492038 8FAE0034 */  lw    $t6, 0x34($sp)
/* 0049203C 8FAF0038 */  lw    $t7, 0x38($sp)
/* 00492040 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00492044 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00492048 8FA50028 */  lw    $a1, 0x28($sp)
/* 0049204C 8FA6002C */  lw    $a2, 0x2c($sp)
/* 00492050 8FA70030 */  lw    $a3, 0x30($sp)
/* 00492054 AFAE0010 */  sw    $t6, 0x10($sp)
/* 00492058 AFAF0014 */  sw    $t7, 0x14($sp)
/* 0049205C 0320F809 */  jalr  $t9
/* 00492060 24840020 */   addiu $a0, $a0, 0x20
/* 00492064 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492068 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 0049206C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00492070 8F858044 */  lw    $a1, %got(RO_1000F494)($gp)
/* 00492074 24840020 */  addiu $a0, $a0, 0x20
/* 00492078 0320F809 */  jalr  $t9
/* 0049207C 24A5F494 */   addiu $a1, %lo(RO_1000F494) # addiu $a1, $a1, -0xb6c
/* 00492080 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00492084 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492088 27BD0028 */  addiu $sp, $sp, 0x28
/* 0049208C 03E00008 */  jr    $ra
/* 00492090 00000000 */   nop   
    .type st_warning, @function
    .size st_warning, .-st_warning
    .end st_warning
)"");
