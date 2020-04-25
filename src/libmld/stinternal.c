__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000F160:
    # 0048AD70 st_internal
    .asciz "%s: Internal: "

RO_1000F170:
    # 0048AD70 st_internal
    .asciz "\n"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel st_internal
    .ent st_internal
    # 00488434 st_extstradd
    # 00488590 st_idn_dn
    # 004886A8 st_idn_rndx
    # 004887CC st_rndx_idn
    # 004888DC st_setidn
    # 00488984 st_pext_dn
    # 00488C1C st_setfd
    # 00488C8C st_fdadd
    # 0048932C st_auxadd
    # 00489458 st_pdadd
    # 004895E4 st_lineadd
    # 0048970C st_stradd
    # 004898C0 st_paux_ifd_iaux
    # 004899B0 st_pline_ifd_iline
    # 00489AA0 st_str_iss
    # 0048AE84 st_filebegin
    # 0048B490 st_textblock
    # 0048C56C st_file_idn
    # 0048CD18 st_changeauxrndx
    # 0048D0E0 st_readst
/* 0048AD70 3C1C0FB9 */  .cpload $t9
/* 0048AD74 279CF520 */  
/* 0048AD78 0399E021 */  
/* 0048AD7C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0048AD80 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 0048AD84 AFA40028 */  sw    $a0, 0x28($sp)
/* 0048AD88 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0048AD8C AFA60030 */  sw    $a2, 0x30($sp)
/* 0048AD90 8F8688F4 */  lw     $a2, %got(st_errname)($gp)
/* 0048AD94 8F858044 */  lw    $a1, %got(RO_1000F160)($gp)
/* 0048AD98 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 0048AD9C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048ADA0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048ADA4 AFA70034 */  sw    $a3, 0x34($sp)
/* 0048ADA8 8CC60000 */  lw    $a2, ($a2)
/* 0048ADAC 24A5F160 */  addiu $a1, %lo(RO_1000F160) # addiu $a1, $a1, -0xea0
/* 0048ADB0 0320F809 */  jalr  $t9
/* 0048ADB4 24840020 */   addiu $a0, $a0, 0x20
/* 0048ADB8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048ADBC 8FAE0034 */  lw    $t6, 0x34($sp)
/* 0048ADC0 8FAF0038 */  lw    $t7, 0x38($sp)
/* 0048ADC4 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 0048ADC8 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 0048ADCC 8FA50028 */  lw    $a1, 0x28($sp)
/* 0048ADD0 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0048ADD4 8FA70030 */  lw    $a3, 0x30($sp)
/* 0048ADD8 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0048ADDC AFAF0014 */  sw    $t7, 0x14($sp)
/* 0048ADE0 0320F809 */  jalr  $t9
/* 0048ADE4 24840020 */   addiu $a0, $a0, 0x20
/* 0048ADE8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048ADEC 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 0048ADF0 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 0048ADF4 8F858044 */  lw    $a1, %got(RO_1000F170)($gp)
/* 0048ADF8 24840020 */  addiu $a0, $a0, 0x20
/* 0048ADFC 0320F809 */  jalr  $t9
/* 0048AE00 24A5F170 */   addiu $a1, %lo(RO_1000F170) # addiu $a1, $a1, -0xe90
/* 0048AE04 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048AE08 24040001 */  li    $a0, 1
/* 0048AE0C 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 0048AE10 0320F809 */  jalr  $t9
/* 0048AE14 00000000 */   nop   
/* 0048AE18 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048AE1C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048AE20 27BD0028 */  addiu $sp, $sp, 0x28
/* 0048AE24 03E00008 */  jr    $ra
/* 0048AE28 00000000 */   nop   
    .type st_internal, @function
    .size st_internal, .-st_internal
    .end st_internal
)"");
