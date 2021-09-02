#include "libmld.h"

CFDR* pcfdcur;

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000EED0:
    # 00489FC4 st_pcfd_ifd
    .asciz "st_pcfd_ifd: ifd (%d) out of range\n"

RO_1000EEF4:
    # 0048A06C st_psym_ifd_isym
    .asciz "st_psym_ifd_isym: ifd (%d) or isym (%d) out of range\n"

RO_1000EF2C:
    # 0048A194 st_paux_iaux
    .asciz "st_paux_iaux: iaux (%d) out of range\n"

.data
D_10011A10:
    # 00489CA0 st_symadd
    # 00489F38 st_ifd_pcfd
    # 00489FC4 st_pcfd_ifd
    # 0048A06C st_psym_ifd_isym
    # 0048A194 st_paux_iaux
    # 0048A260 st_str_ifd_iss
    # 0048A330 st_ppd_ifd_isym
    .ascii "routine: you didn't initialize with st_cuinit or st_readst\n\x00"

D_10011A4C:
    # 00489CA0 st_symadd
    # 00489F38 st_ifd_pcfd
    # 0048A194 st_paux_iaux
    .ascii "routine: no current routine, see fdadd or setfd\n\x00\x00\x00\x00"

D_10011A80:
    # 00489CA0 st_symadd
    .ascii "routine: cannot add to this entry it was readin from disk\n\x00\x00\x00\x00\x00\x00"



#.bss
#    .balign 4
# 1001C68C
#glabel pcfdcur
    # 00488BB0 st_currentifd
    # 00488C1C st_setfd
    # 00488C8C st_fdadd
    # 0048932C st_auxadd
    # 00489458 st_pdadd
    # 004895E4 st_lineadd
    # 0048970C st_stradd
    # 00489AA0 st_str_iss
    # 00489CA0 st_symadd
    # 00489F38 st_ifd_pcfd
    # 0048A194 st_paux_iaux
    # 0048A5E8 _md_st_str_iss
    # 0048A6B4 _md_st_currentifd
    # 0048A86C _md_st_setfd
#   .space 4
#   .size pcfdcur, 4
#   .type pcfdcur, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

/* 00489C9C 00000000 */  nop   
glabel st_symadd
    .ent st_symadd
    # 0048AE84 st_filebegin
    # 0048B120 st_endallfiles
    # 0048B2F0 st_fileend
    # 0048B490 st_textblock
    # 0048B590 _sgi_st_blockbegin
    # 0048B6E8 st_blockbegin
    # 0048B83C st_blockend
    # 0048BA18 st_procend
    # 0048BC7C st_procbegin
/* 00489CA0 3C1C0FB9 */  .cpload $t9
/* 00489CA4 279C05F0 */  
/* 00489CA8 0399E021 */  
/* 00489CAC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00489CB0 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 00489CB4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00489CB8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00489CBC 8DCE0000 */  lw    $t6, ($t6)
/* 00489CC0 AFA40028 */  sw    $a0, 0x28($sp)
/* 00489CC4 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00489CC8 AFA60030 */  sw    $a2, 0x30($sp)
/* 00489CCC AFA70034 */  sw    $a3, 0x34($sp)
/* 00489CD0 8DCF0004 */  lw    $t7, 4($t6)
/* 00489CD4 15E00006 */  bnez  $t7, .L00489CF0
/* 00489CD8 00000000 */   nop   
/* 00489CDC 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 00489CE0 8F848044 */  lw    $a0, %got(D_10011A10)($gp)
/* 00489CE4 0320F809 */  jalr  $t9
/* 00489CE8 24841A10 */   addiu $a0, %lo(D_10011A10) # addiu $a0, $a0, 0x1a10
/* 00489CEC 8FBC0018 */  lw    $gp, 0x18($sp)
.L00489CF0:
/* 00489CF0 8F888CBC */  lw     $t0, %got(pcfdcur)($gp)
/* 00489CF4 8D030000 */  lw    $v1, ($t0)
/* 00489CF8 54600009 */  bnezl $v1, .L00489D20
/* 00489CFC 8C78003C */   lw    $t8, 0x3c($v1)
/* 00489D00 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 00489D04 8F848044 */  lw    $a0, %got(D_10011A4C)($gp)
/* 00489D08 0320F809 */  jalr  $t9
/* 00489D0C 24841A4C */   addiu $a0, %lo(D_10011A4C) # addiu $a0, $a0, 0x1a4c
/* 00489D10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489D14 8F888CBC */  lw     $t0, %got(pcfdcur)($gp)
/* 00489D18 8D030000 */  lw    $v1, ($t0)
/* 00489D1C 8C78003C */  lw    $t8, 0x3c($v1)
.L00489D20:
/* 00489D20 33190002 */  andi  $t9, $t8, 2
/* 00489D24 53200009 */  beql  $t9, $zero, .L00489D4C
/* 00489D28 8C690000 */   lw    $t1, ($v1)
/* 00489D2C 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 00489D30 8F848044 */  lw    $a0, %got(D_10011A80)($gp)
/* 00489D34 0320F809 */  jalr  $t9
/* 00489D38 24841A80 */   addiu $a0, %lo(D_10011A80) # addiu $a0, $a0, 0x1a80
/* 00489D3C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489D40 8F888CBC */  lw     $t0, %got(pcfdcur)($gp)
/* 00489D44 8D030000 */  lw    $v1, ($t0)
/* 00489D48 8C690000 */  lw    $t1, ($v1)
.L00489D4C:
/* 00489D4C 8C6A0008 */  lw    $t2, 8($v1)
/* 00489D50 2406000C */  li    $a2, 12
/* 00489D54 8D250014 */  lw    $a1, 0x14($t1)
/* 00489D58 00AA082A */  slt   $at, $a1, $t2
/* 00489D5C 5420000E */  bnezl $at, .L00489D98
/* 00489D60 8C6D0004 */   lw    $t5, 4($v1)
/* 00489D64 8F9987E0 */  lw    $t9, %call16(_md_st_malloc)($gp)
/* 00489D68 8C640004 */  lw    $a0, 4($v1)
/* 00489D6C 24650008 */  addiu $a1, $v1, 8
/* 00489D70 0320F809 */  jalr  $t9
/* 00489D74 24070040 */   li    $a3, 64
/* 00489D78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489D7C 8F888CBC */  lw     $t0, %got(pcfdcur)($gp)
/* 00489D80 8D0B0000 */  lw    $t3, ($t0)
/* 00489D84 AD620004 */  sw    $v0, 4($t3)
/* 00489D88 8D030000 */  lw    $v1, ($t0)
/* 00489D8C 8C6C0000 */  lw    $t4, ($v1)
/* 00489D90 8D850014 */  lw    $a1, 0x14($t4)
/* 00489D94 8C6D0004 */  lw    $t5, 4($v1)
.L00489D98:
/* 00489D98 00057080 */  sll   $t6, $a1, 2
/* 00489D9C 8FAF0028 */  lw    $t7, 0x28($sp)
/* 00489DA0 01C57023 */  subu  $t6, $t6, $a1
/* 00489DA4 000E7080 */  sll   $t6, $t6, 2
/* 00489DA8 01AE1021 */  addu  $v0, $t5, $t6
/* 00489DAC AC4F0000 */  sw    $t7, ($v0)
/* 00489DB0 8FB8002C */  lw    $t8, 0x2c($sp)
/* 00489DB4 904C0008 */  lbu   $t4, 8($v0)
/* 00489DB8 3C01000F */  lui   $at, 0xf
/* 00489DBC AC580004 */  sw    $t8, 4($v0)
/* 00489DC0 8FA90030 */  lw    $t1, 0x30($sp)
/* 00489DC4 318DFF03 */  andi  $t5, $t4, 0xff03
/* 00489DC8 3421FFFF */  ori   $at, $at, 0xffff
/* 00489DCC 00095880 */  sll   $t3, $t1, 2
/* 00489DD0 016D7025 */  or    $t6, $t3, $t5
/* 00489DD4 A04E0008 */  sb    $t6, 8($v0)
/* 00489DD8 8FB80034 */  lw    $t8, 0x34($sp)
/* 00489DDC 944A0008 */  lhu   $t2, 8($v0)
/* 00489DE0 0018C940 */  sll   $t9, $t8, 5
/* 00489DE4 332903E0 */  andi  $t1, $t9, 0x3e0
/* 00489DE8 314CFC1F */  andi  $t4, $t2, 0xfc1f
/* 00489DEC 012C5825 */  or    $t3, $t1, $t4
/* 00489DF0 A44B0008 */  sh    $t3, 8($v0)
/* 00489DF4 904D0009 */  lbu   $t5, 9($v0)
/* 00489DF8 31AEFFEF */  andi  $t6, $t5, 0xffef
/* 00489DFC A04E0009 */  sb    $t6, 9($v0)
/* 00489E00 8FAF0038 */  lw    $t7, 0x38($sp)
/* 00489E04 8C460008 */  lw    $a2, 8($v0)
/* 00489E08 01E1C024 */  and   $t8, $t7, $at
/* 00489E0C 0306C826 */  xor   $t9, $t8, $a2
/* 00489E10 00195300 */  sll   $t2, $t9, 0xc
/* 00489E14 000A4B02 */  srl   $t1, $t2, 0xc
/* 00489E18 01266026 */  xor   $t4, $t1, $a2
/* 00489E1C AC4C0008 */  sw    $t4, 8($v0)
/* 00489E20 8F9987AC */  lw    $t9, %call16(st_str_iss)($gp)
/* 00489E24 8FA40028 */  lw    $a0, 0x28($sp)
/* 00489E28 0320F809 */  jalr  $t9
/* 00489E2C 00000000 */   nop   
/* 00489E30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489E34 AFA20020 */  sw    $v0, 0x20($sp)
/* 00489E38 00402025 */  move  $a0, $v0
/* 00489E3C 8F9980C0 */  lw    $t9, %call16(strlen)($gp)
/* 00489E40 0320F809 */  jalr  $t9
/* 00489E44 00000000 */   nop   
/* 00489E48 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489E4C 8FAD0030 */  lw    $t5, 0x30($sp)
/* 00489E50 8FAE0034 */  lw    $t6, 0x34($sp)
/* 00489E54 8F888CBC */  lw     $t0, %got(pcfdcur)($gp)
/* 00489E58 00403025 */  move  $a2, $v0
/* 00489E5C 01AE7821 */  addu  $t7, $t5, $t6
/* 00489E60 8D0B0000 */  lw    $t3, ($t0)
/* 00489E64 00002025 */  move  $a0, $zero
/* 00489E68 8D630000 */  lw    $v1, ($t3)
/* 00489E6C 8C78003C */  lw    $t8, 0x3c($v1)
/* 00489E70 946C003E */  lhu   $t4, 0x3e($v1)
/* 00489E74 33191FFF */  andi  $t9, $t8, 0x1fff
/* 00489E78 032F5021 */  addu  $t2, $t9, $t7
/* 00489E7C 31491FFF */  andi  $t1, $t2, 0x1fff
/* 00489E80 318BE000 */  andi  $t3, $t4, 0xe000
/* 00489E84 012B6825 */  or    $t5, $t1, $t3
/* 00489E88 18400013 */  blez  $v0, .L00489ED8
/* 00489E8C A46D003E */   sh    $t5, 0x3e($v1)
/* 00489E90 8FA50020 */  lw    $a1, 0x20($sp)
.L00489E94:
/* 00489E94 8D0E0000 */  lw    $t6, ($t0)
/* 00489E98 80B80000 */  lb    $t8, ($a1)
/* 00489E9C 24840001 */  addiu $a0, $a0, 1
/* 00489EA0 8DC30000 */  lw    $v1, ($t6)
/* 00489EA4 0086082A */  slt   $at, $a0, $a2
/* 00489EA8 24A50001 */  addiu $a1, $a1, 1
/* 00489EAC 8C62003C */  lw    $v0, 0x3c($v1)
/* 00489EB0 946B003E */  lhu   $t3, 0x3e($v1)
/* 00489EB4 30421FFF */  andi  $v0, $v0, 0x1fff
/* 00489EB8 0002C940 */  sll   $t9, $v0, 5
/* 00489EBC 03197821 */  addu  $t7, $t8, $t9
/* 00489EC0 01E26021 */  addu  $t4, $t7, $v0
/* 00489EC4 31891FFF */  andi  $t1, $t4, 0x1fff
/* 00489EC8 316DE000 */  andi  $t5, $t3, 0xe000
/* 00489ECC 012D7025 */  or    $t6, $t1, $t5
/* 00489ED0 1420FFF0 */  bnez  $at, .L00489E94
/* 00489ED4 A46E003E */   sh    $t6, 0x3e($v1)
.L00489ED8:
/* 00489ED8 8FB80030 */  lw    $t8, 0x30($sp)
/* 00489EDC 2401000E */  li    $at, 14
/* 00489EE0 13010007 */  beq   $t8, $at, .L00489F00
/* 00489EE4 24010002 */   li    $at, 2
/* 00489EE8 13010005 */  beq   $t8, $at, .L00489F00
/* 00489EEC 24010005 */   li    $at, 5
/* 00489EF0 13010003 */  beq   $t8, $at, .L00489F00
/* 00489EF4 24010006 */   li    $at, 6
/* 00489EF8 57010007 */  bnel  $t8, $at, .L00489F18
/* 00489EFC 8D0C0000 */   lw    $t4, ($t0)
.L00489F00:
/* 00489F00 8D190000 */  lw    $t9, ($t0)
/* 00489F04 8F230000 */  lw    $v1, ($t9)
/* 00489F08 906F003C */  lbu   $t7, 0x3c($v1)
/* 00489F0C 31EAFFFB */  andi  $t2, $t7, 0xfffb
/* 00489F10 A06A003C */  sb    $t2, 0x3c($v1)
/* 00489F14 8D0C0000 */  lw    $t4, ($t0)
.L00489F18:
/* 00489F18 8D830000 */  lw    $v1, ($t4)
/* 00489F1C 8C620014 */  lw    $v0, 0x14($v1)
/* 00489F20 244B0001 */  addiu $t3, $v0, 1
/* 00489F24 AC6B0014 */  sw    $t3, 0x14($v1)
/* 00489F28 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00489F2C 27BD0028 */  addiu $sp, $sp, 0x28
/* 00489F30 03E00008 */  jr    $ra
/* 00489F34 00000000 */   nop   
    .type st_symadd, @function
    .size st_symadd, .-st_symadd
    .end st_symadd

glabel st_ifd_pcfd
    .ent st_ifd_pcfd
    # 00488BB0 st_currentifd
    # 0048A6B4 _md_st_currentifd
/* 00489F38 3C1C0FB9 */  .cpload $t9
/* 00489F3C 279C0358 */  
/* 00489F40 0399E021 */  
/* 00489F44 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 00489F48 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00489F4C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00489F50 8DCE0000 */  lw    $t6, ($t6)
/* 00489F54 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00489F58 AFA40020 */  sw    $a0, 0x20($sp)
/* 00489F5C 8DCF0004 */  lw    $t7, 4($t6)
/* 00489F60 15E00006 */  bnez  $t7, .L00489F7C
/* 00489F64 00000000 */   nop   
/* 00489F68 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 00489F6C 8F848044 */  lw    $a0, %got(D_10011A10)($gp)
/* 00489F70 0320F809 */  jalr  $t9
/* 00489F74 24841A10 */   addiu $a0, %lo(D_10011A10) # addiu $a0, $a0, 0x1a10
/* 00489F78 8FBC0018 */  lw    $gp, 0x18($sp)
.L00489F7C:
/* 00489F7C 8F988CBC */  lw     $t8, %got(pcfdcur)($gp)
/* 00489F80 8F180000 */  lw    $t8, ($t8)
/* 00489F84 17000006 */  bnez  $t8, .L00489FA0
/* 00489F88 00000000 */   nop   
/* 00489F8C 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 00489F90 8F848044 */  lw    $a0, %got(D_10011A4C)($gp)
/* 00489F94 0320F809 */  jalr  $t9
/* 00489F98 24841A4C */   addiu $a0, %lo(D_10011A4C) # addiu $a0, $a0, 0x1a4c
/* 00489F9C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00489FA0:
/* 00489FA0 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 00489FA4 8FB90020 */  lw    $t9, 0x20($sp)
/* 00489FA8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00489FAC 8D080000 */  lw    $t0, ($t0)
/* 00489FB0 8D090004 */  lw    $t1, 4($t0)
/* 00489FB4 27BD0020 */  addiu $sp, $sp, 0x20
/* 00489FB8 03291023 */  subu  $v0, $t9, $t1
/* 00489FBC 03E00008 */  jr    $ra
/* 00489FC0 00021183 */   sra   $v0, $v0, 6
    .type st_ifd_pcfd, @function
    .size st_ifd_pcfd, .-st_ifd_pcfd
    .end st_ifd_pcfd

glabel st_pcfd_ifd
    .ent st_pcfd_ifd
    # 0040BCA0 path_blockno
    # 0048A260 st_str_ifd_iss
    # 0048A330 st_ppd_ifd_isym
    # 0048A954 st_extadd
    # 0048B120 st_endallfiles
    # 0048B2F0 st_fileend
    # 0048BA18 st_procend
    # 0048BC7C st_procbegin
    # 0048D0E0 st_readst
    # 0048E1D8 st_writest
/* 00489FC4 3C1C0FB9 */  .cpload $t9
/* 00489FC8 279C02CC */  
/* 00489FCC 0399E021 */  
/* 00489FD0 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 00489FD4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00489FD8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00489FDC 8DCE0000 */  lw    $t6, ($t6)
/* 00489FE0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00489FE4 00802825 */  move  $a1, $a0
/* 00489FE8 8DCF0004 */  lw    $t7, 4($t6)
/* 00489FEC 15E00008 */  bnez  $t7, .L0048A010
/* 00489FF0 00000000 */   nop   
/* 00489FF4 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 00489FF8 8F848044 */  lw    $a0, %got(D_10011A10)($gp)
/* 00489FFC AFA50020 */  sw    $a1, 0x20($sp)
/* 0048A000 0320F809 */  jalr  $t9
/* 0048A004 24841A10 */   addiu $a0, %lo(D_10011A10) # addiu $a0, $a0, 0x1a10
/* 0048A008 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A00C 8FA50020 */  lw    $a1, 0x20($sp)
.L0048A010:
/* 0048A010 04A00007 */  bltz  $a1, .L0048A030
/* 0048A014 00000000 */   nop   
/* 0048A018 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048A01C 8C630000 */  lw    $v1, ($v1)
/* 0048A020 8C78000C */  lw    $t8, 0xc($v1)
/* 0048A024 00B8082A */  slt   $at, $a1, $t8
/* 0048A028 5420000B */  bnezl $at, .L0048A058
/* 0048A02C 8FBF001C */   lw    $ra, 0x1c($sp)
.L0048A030:
/* 0048A030 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A034 8F848044 */  lw    $a0, %got(RO_1000EED0)($gp)
/* 0048A038 AFA50020 */  sw    $a1, 0x20($sp)
/* 0048A03C 0320F809 */  jalr  $t9
/* 0048A040 2484EED0 */   addiu $a0, %lo(RO_1000EED0) # addiu $a0, $a0, -0x1130
/* 0048A044 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A048 8FA50020 */  lw    $a1, 0x20($sp)
/* 0048A04C 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048A050 8C630000 */  lw    $v1, ($v1)
/* 0048A054 8FBF001C */  lw    $ra, 0x1c($sp)
.L0048A058:
/* 0048A058 8C790004 */  lw    $t9, 4($v1)
/* 0048A05C 00054180 */  sll   $t0, $a1, 6
/* 0048A060 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048A064 03E00008 */  jr    $ra
/* 0048A068 03281021 */   addu  $v0, $t9, $t0
    .type st_pcfd_ifd, @function
    .size st_pcfd_ifd, .-st_pcfd_ifd
    .end st_pcfd_ifd

glabel st_psym_ifd_isym
    .ent st_psym_ifd_isym
    # 0040BAE0 func_0040BAE0
    # 0040BCA0 path_blockno
    # 0048B120 st_endallfiles
    # 0048B2F0 st_fileend
    # 0048B83C st_blockend
    # 0048BA18 st_procend
    # 0048BE8C st_sym_idn
    # 0048BF74 st_str_idn
    # 0048C008 st_fglobal_idn
    # 0048C0B0 st_psym_idn_offset
    # 0048C494 st_fixiss
/* 0048A06C 3C1C0FB9 */  .cpload $t9
/* 0048A070 279C0224 */  
/* 0048A074 0399E021 */  
/* 0048A078 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048A07C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0048A080 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048A084 8DCE0000 */  lw    $t6, ($t6)
/* 0048A088 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048A08C 00803825 */  move  $a3, $a0
/* 0048A090 8DCF0004 */  lw    $t7, 4($t6)
/* 0048A094 00A03025 */  move  $a2, $a1
/* 0048A098 55E0000B */  bnezl $t7, .L0048A0C8
/* 0048A09C 3C017FFF */   lui   $at, 0x7fff
/* 0048A0A0 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A0A4 8F848044 */  lw    $a0, %got(D_10011A10)($gp)
/* 0048A0A8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0048A0AC AFA70028 */  sw    $a3, 0x28($sp)
/* 0048A0B0 0320F809 */  jalr  $t9
/* 0048A0B4 24841A10 */   addiu $a0, %lo(D_10011A10) # addiu $a0, $a0, 0x1a10
/* 0048A0B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A0BC 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0048A0C0 8FA70028 */  lw    $a3, 0x28($sp)
/* 0048A0C4 3C017FFF */  lui   $at, 0x7fff
.L0048A0C8:
/* 0048A0C8 3421FFFF */  ori   $at, $at, 0xffff
/* 0048A0CC 14E10008 */  bne   $a3, $at, .L0048A0F0
/* 0048A0D0 00000000 */   nop   
/* 0048A0D4 8F9987E4 */  lw    $t9, %call16(st_pext_iext)($gp)
/* 0048A0D8 00C02025 */  move  $a0, $a2
/* 0048A0DC 0320F809 */  jalr  $t9
/* 0048A0E0 00000000 */   nop   
/* 0048A0E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A0E8 10000026 */  b     .L0048A184
/* 0048A0EC 24420004 */   addiu $v0, $v0, 4
.L0048A0F0:
/* 0048A0F0 04E00011 */  bltz  $a3, .L0048A138
/* 0048A0F4 00E02825 */   move  $a1, $a3
/* 0048A0F8 04C0000F */  bltz  $a2, .L0048A138
/* 0048A0FC 00000000 */   nop   
/* 0048A100 8F828CB8 */  lw     $v0, %got(st_pchdr)($gp)
/* 0048A104 8C420000 */  lw    $v0, ($v0)
/* 0048A108 8C58000C */  lw    $t8, 0xc($v0)
/* 0048A10C 00F8082A */  slt   $at, $a3, $t8
/* 0048A110 10200009 */  beqz  $at, .L0048A138
/* 0048A114 00000000 */   nop   
/* 0048A118 8C590004 */  lw    $t9, 4($v0)
/* 0048A11C 00074180 */  sll   $t0, $a3, 6
/* 0048A120 03281821 */  addu  $v1, $t9, $t0
/* 0048A124 8C690000 */  lw    $t1, ($v1)
/* 0048A128 8D2A0014 */  lw    $t2, 0x14($t1)
/* 0048A12C 00CA082A */  slt   $at, $a2, $t2
/* 0048A130 54200010 */  bnezl $at, .L0048A174
/* 0048A134 8C6F0004 */   lw    $t7, 4($v1)
.L0048A138:
/* 0048A138 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A13C 8F848044 */  lw    $a0, %got(RO_1000EEF4)($gp)
/* 0048A140 00075980 */  sll   $t3, $a3, 6
/* 0048A144 AFAB0024 */  sw    $t3, 0x24($sp)
/* 0048A148 AFA6002C */  sw    $a2, 0x2c($sp)
/* 0048A14C 0320F809 */  jalr  $t9
/* 0048A150 2484EEF4 */   addiu $a0, %lo(RO_1000EEF4) # addiu $a0, $a0, -0x110c
/* 0048A154 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A158 8FAE0024 */  lw    $t6, 0x24($sp)
/* 0048A15C 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0048A160 8F8C8CB8 */  lw     $t4, %got(st_pchdr)($gp)
/* 0048A164 8D8C0000 */  lw    $t4, ($t4)
/* 0048A168 8D8D0004 */  lw    $t5, 4($t4)
/* 0048A16C 01AE1821 */  addu  $v1, $t5, $t6
/* 0048A170 8C6F0004 */  lw    $t7, 4($v1)
.L0048A174:
/* 0048A174 0006C080 */  sll   $t8, $a2, 2
/* 0048A178 0306C023 */  subu  $t8, $t8, $a2
/* 0048A17C 0018C080 */  sll   $t8, $t8, 2
/* 0048A180 01F81021 */  addu  $v0, $t7, $t8
.L0048A184:
/* 0048A184 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048A188 27BD0028 */  addiu $sp, $sp, 0x28
/* 0048A18C 03E00008 */  jr    $ra
/* 0048A190 00000000 */   nop   
    .type st_psym_ifd_isym, @function
    .size st_psym_ifd_isym, .-st_psym_ifd_isym
    .end st_psym_ifd_isym

glabel st_paux_iaux
    .ent st_paux_iaux
    # 0048BA18 st_procend
    # 0048C6F0 st_tqhigh_iaux
    # 0048C7CC st_shifttq
    # 0048CBC4 st_changeaux
    # 0048CC08 st_addtq
    # 0048CD18 st_changeauxrndx
    # 0048CF54 st_auxbtsize
    # 0048CFF8 st_addcontinued
/* 0048A194 3C1C0FB9 */  .cpload $t9
/* 0048A198 279C00FC */  
/* 0048A19C 0399E021 */  
/* 0048A1A0 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048A1A4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048A1A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048A1AC 8DCE0000 */  lw    $t6, ($t6)
/* 0048A1B0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048A1B4 AFA40020 */  sw    $a0, 0x20($sp)
/* 0048A1B8 8DCF0004 */  lw    $t7, 4($t6)
/* 0048A1BC 15E00006 */  bnez  $t7, .L0048A1D8
/* 0048A1C0 00000000 */   nop   
/* 0048A1C4 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A1C8 8F848044 */  lw    $a0, %got(D_10011A10)($gp)
/* 0048A1CC 0320F809 */  jalr  $t9
/* 0048A1D0 24841A10 */   addiu $a0, %lo(D_10011A10) # addiu $a0, $a0, 0x1a10
/* 0048A1D4 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048A1D8:
/* 0048A1D8 8F988CBC */  lw     $t8, %got(pcfdcur)($gp)
/* 0048A1DC 8F180000 */  lw    $t8, ($t8)
/* 0048A1E0 57000007 */  bnezl $t8, .L0048A200
/* 0048A1E4 8FB90020 */   lw    $t9, 0x20($sp)
/* 0048A1E8 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A1EC 8F848044 */  lw    $a0, %got(D_10011A4C)($gp)
/* 0048A1F0 0320F809 */  jalr  $t9
/* 0048A1F4 24841A4C */   addiu $a0, %lo(D_10011A4C) # addiu $a0, $a0, 0x1a4c
/* 0048A1F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A1FC 8FB90020 */  lw    $t9, 0x20($sp)
.L0048A200:
/* 0048A200 07200008 */  bltz  $t9, .L0048A224
/* 0048A204 00000000 */   nop   
/* 0048A208 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 0048A20C 8C630000 */  lw    $v1, ($v1)
/* 0048A210 8C680000 */  lw    $t0, ($v1)
/* 0048A214 8D090030 */  lw    $t1, 0x30($t0)
/* 0048A218 0329082A */  slt   $at, $t9, $t1
/* 0048A21C 5420000A */  bnezl $at, .L0048A248
/* 0048A220 8FAB0020 */   lw    $t3, 0x20($sp)
.L0048A224:
/* 0048A224 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A228 8F848044 */  lw    $a0, %got(RO_1000EF2C)($gp)
/* 0048A22C 8FA50020 */  lw    $a1, 0x20($sp)
/* 0048A230 0320F809 */  jalr  $t9
/* 0048A234 2484EF2C */   addiu $a0, %lo(RO_1000EF2C) # addiu $a0, $a0, -0x10d4
/* 0048A238 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A23C 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 0048A240 8C630000 */  lw    $v1, ($v1)
/* 0048A244 8FAB0020 */  lw    $t3, 0x20($sp)
.L0048A248:
/* 0048A248 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048A24C 8C6A000C */  lw    $t2, 0xc($v1)
/* 0048A250 000B6080 */  sll   $t4, $t3, 2
/* 0048A254 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048A258 03E00008 */  jr    $ra
/* 0048A25C 014C1021 */   addu  $v0, $t2, $t4
    .type st_paux_iaux, @function
    .size st_paux_iaux, .-st_paux_iaux
    .end st_paux_iaux

glabel st_str_ifd_iss
    .ent st_str_ifd_iss
    # 0040BAE0 func_0040BAE0
    # 0040BCA0 path_blockno
    # 0048AE84 st_filebegin
    # 0048BE8C st_sym_idn
    # 0048BF74 st_str_idn
    # 0048C56C st_file_idn
/* 0048A260 3C1C0FB9 */  .cpload $t9
/* 0048A264 279C0030 */  
/* 0048A268 0399E021 */  
/* 0048A26C 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048A270 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048A274 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048A278 8DCE0000 */  lw    $t6, ($t6)
/* 0048A27C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048A280 00803025 */  move  $a2, $a0
/* 0048A284 8DCF0004 */  lw    $t7, 4($t6)
/* 0048A288 55E0000B */  bnezl $t7, .L0048A2B8
/* 0048A28C 3C017FFF */   lui   $at, 0x7fff
/* 0048A290 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A294 8F848044 */  lw    $a0, %got(D_10011A10)($gp)
/* 0048A298 AFA50024 */  sw    $a1, 0x24($sp)
/* 0048A29C AFA60020 */  sw    $a2, 0x20($sp)
/* 0048A2A0 0320F809 */  jalr  $t9
/* 0048A2A4 24841A10 */   addiu $a0, %lo(D_10011A10) # addiu $a0, $a0, 0x1a10
/* 0048A2A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A2AC 8FA50024 */  lw    $a1, 0x24($sp)
/* 0048A2B0 8FA60020 */  lw    $a2, 0x20($sp)
/* 0048A2B4 3C017FFF */  lui   $at, 0x7fff
.L0048A2B8:
/* 0048A2B8 3421FFFF */  ori   $at, $at, 0xffff
/* 0048A2BC 14C10007 */  bne   $a2, $at, .L0048A2DC
/* 0048A2C0 00000000 */   nop   
/* 0048A2C4 8F9987D8 */  lw    $t9, %call16(_md_st_str_extiss)($gp)
/* 0048A2C8 00A02025 */  move  $a0, $a1
/* 0048A2CC 0320F809 */  jalr  $t9
/* 0048A2D0 00000000 */   nop   
/* 0048A2D4 10000012 */  b     .L0048A320
/* 0048A2D8 8FBC0018 */   lw    $gp, 0x18($sp)
.L0048A2DC:
/* 0048A2DC 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048A2E0 00C02025 */  move  $a0, $a2
/* 0048A2E4 AFA50024 */  sw    $a1, 0x24($sp)
/* 0048A2E8 0320F809 */  jalr  $t9
/* 0048A2EC 00000000 */   nop   
/* 0048A2F0 8C580000 */  lw    $t8, ($v0)
/* 0048A2F4 8FA50024 */  lw    $a1, 0x24($sp)
/* 0048A2F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A2FC 8F03000C */  lw    $v1, 0xc($t8)
/* 0048A300 10600006 */  beqz  $v1, .L0048A31C
/* 0048A304 00A3082A */   slt   $at, $a1, $v1
/* 0048A308 50200005 */  beql  $at, $zero, .L0048A320
/* 0048A30C 00001025 */   move  $v0, $zero
/* 0048A310 8C590014 */  lw    $t9, 0x14($v0)
/* 0048A314 10000002 */  b     .L0048A320
/* 0048A318 03251021 */   addu  $v0, $t9, $a1
.L0048A31C:
/* 0048A31C 00001025 */  move  $v0, $zero
.L0048A320:
/* 0048A320 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048A324 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048A328 03E00008 */  jr    $ra
/* 0048A32C 00000000 */   nop   
    .type st_str_ifd_iss, @function
    .size st_str_ifd_iss, .-st_str_ifd_iss
    .end st_str_ifd_iss

glabel st_ppd_ifd_isym
    .ent st_ppd_ifd_isym
/* 0048A330 3C1C0FB9 */  .cpload $t9
/* 0048A334 279CFF60 */  
/* 0048A338 0399E021 */  
/* 0048A33C 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048A340 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048A344 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048A348 8DCE0000 */  lw    $t6, ($t6)
/* 0048A34C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048A350 AFA40020 */  sw    $a0, 0x20($sp)
/* 0048A354 8DCF0004 */  lw    $t7, 4($t6)
/* 0048A358 00A03825 */  move  $a3, $a1
/* 0048A35C 15E00008 */  bnez  $t7, .L0048A380
/* 0048A360 00000000 */   nop   
/* 0048A364 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A368 8F848044 */  lw    $a0, %got(D_10011A10)($gp)
/* 0048A36C AFA50024 */  sw    $a1, 0x24($sp)
/* 0048A370 0320F809 */  jalr  $t9
/* 0048A374 24841A10 */   addiu $a0, %lo(D_10011A10) # addiu $a0, $a0, 0x1a10
/* 0048A378 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A37C 8FA70024 */  lw    $a3, 0x24($sp)
.L0048A380:
/* 0048A380 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048A384 8FA40020 */  lw    $a0, 0x20($sp)
/* 0048A388 AFA70024 */  sw    $a3, 0x24($sp)
/* 0048A38C 0320F809 */  jalr  $t9
/* 0048A390 00000000 */   nop   
/* 0048A394 8C580000 */  lw    $t8, ($v0)
/* 0048A398 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A39C 8FA70024 */  lw    $a3, 0x24($sp)
/* 0048A3A0 9719002A */  lhu   $t9, 0x2a($t8)
/* 0048A3A4 00403025 */  move  $a2, $v0
/* 0048A3A8 00001825 */  move  $v1, $zero
/* 0048A3AC 13200011 */  beqz  $t9, .L0048A3F4
/* 0048A3B0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0048A3B4 00002825 */  move  $a1, $zero
/* 0048A3B8 8C440034 */  lw    $a0, 0x34($v0)
/* 0048A3BC 8C880004 */  lw    $t0, 4($a0)
.L0048A3C0:
/* 0048A3C0 54E80005 */  bnel  $a3, $t0, .L0048A3D8
/* 0048A3C4 8CCA0000 */   lw    $t2, ($a2)
/* 0048A3C8 8CC90034 */  lw    $t1, 0x34($a2)
/* 0048A3CC 1000000A */  b     .L0048A3F8
/* 0048A3D0 01251021 */   addu  $v0, $t1, $a1
/* 0048A3D4 8CCA0000 */  lw    $t2, ($a2)
.L0048A3D8:
/* 0048A3D8 24630001 */  addiu $v1, $v1, 1
/* 0048A3DC 24A50034 */  addiu $a1, $a1, 0x34
/* 0048A3E0 954B002A */  lhu   $t3, 0x2a($t2)
/* 0048A3E4 24840034 */  addiu $a0, $a0, 0x34
/* 0048A3E8 006B082B */  sltu  $at, $v1, $t3
/* 0048A3EC 5420FFF4 */  bnezl $at, .L0048A3C0
/* 0048A3F0 8C880004 */   lw    $t0, 4($a0)
.L0048A3F4:
/* 0048A3F4 00001025 */  move  $v0, $zero
.L0048A3F8:
/* 0048A3F8 03E00008 */  jr    $ra
/* 0048A3FC 27BD0020 */   addiu $sp, $sp, 0x20
    .type st_ppd_ifd_isym, @function
    .size st_ppd_ifd_isym, .-st_ppd_ifd_isym
    .end st_ppd_ifd_isym
)"");
