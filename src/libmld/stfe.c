#include "libmld.h"
#if 0
__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000F180:
    # 0048AE84 st_filebegin
    .asciz "st_filebegin: tried to end too many files (%s)\n"

RO_1000F1B0:
    # 0048B490 st_textblock
    .asciz "st_textblock: block pending set in illegal case\n"

RO_1000F1E4:
    # 0048C56C st_file_idn
    .asciz "st_file_idn: istack underflow (%s)\n"

.data
# 10011B30
glabel __sgi_common_dummy_file
    # 00488C8C st_fdadd
    # 0048AE40 __sgi_mld_st_commonbegin
    .byte 0x00,0x00,0x00,0x00
    .type __sgi_common_dummy_file, @object
    .size __sgi_common_dummy_file, .-__sgi_common_dummy_file # 4

D_10011B34:
    # 0048B490 st_textblock
    # 0048B590 _sgi_st_blockbegin
    # 0048B6E8 st_blockbegin
    # 0048B83C st_blockend
    .byte 0x00,0x00,0x00,0x00


.bss
B_1001C290:
    # 0048B490 st_textblock
    # 0048B590 _sgi_st_blockbegin
    # 0048B6E8 st_blockbegin
    # 0048B83C st_blockend
    .space 4

B_1001C294:
    # 0048B490 st_textblock
    # 0048B590 _sgi_st_blockbegin
    # 0048B6E8 st_blockbegin
    # 0048B83C st_blockend
    # 0048B9F4 st_blockpop
    .space 4

B_1001C298:
    # 0048B590 _sgi_st_blockbegin
    # 0048B6E8 st_blockbegin
    .space 4

B_1001C29C:
    # 0048AE84 st_filebegin
    # 0048B120 st_endallfiles
    # 0048C56C st_file_idn
    .space 4

B_1001C2A0:
    # 0048AE84 st_filebegin
    # 0048B120 st_endallfiles
    # 0048C56C st_file_idn
    .space 4

B_1001C2A4:
    # 0048AE84 st_filebegin
    # 0048B120 st_endallfiles
    .space 4


.bss
    .balign 16
# 1001C940
glabel Uc
    .space 32
    .size Uc, 32
    .type Uc, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel __sgi_mld_st_commonbegin
    .ent __sgi_mld_st_commonbegin
/* 0048AE40 3C1C0FB9 */  .cpload $t9
/* 0048AE44 279CF450 */  
/* 0048AE48 0399E021 */  
/* 0048AE4C 8F9987F4 */  lw    $t9, %call16(st_filebegin)($gp)
/* 0048AE50 8F8188F8 */  lw     $at, %got(__sgi_common_dummy_file)($gp)
/* 0048AE54 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048AE58 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048AE5C 240E0001 */  li    $t6, 1
/* 0048AE60 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048AE64 0320F809 */  jalr  $t9
/* 0048AE68 AC2E0000 */   sw    $t6, ($at)
/* 0048AE6C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048AE70 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048AE74 8F8188F8 */  lw     $at, %got(__sgi_common_dummy_file)($gp)
/* 0048AE78 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048AE7C 03E00008 */  jr    $ra
/* 0048AE80 AC200000 */   sw    $zero, ($at)
    .type __sgi_mld_st_commonbegin, @function
    .size __sgi_mld_st_commonbegin, .-__sgi_mld_st_commonbegin
    .end __sgi_mld_st_commonbegin

glabel st_filebegin
    .ent st_filebegin
    # 0048AE40 __sgi_mld_st_commonbegin
/* 0048AE84 3C1C0FB9 */  .cpload $t9
/* 0048AE88 279CF40C */  
/* 0048AE8C 0399E021 */  
/* 0048AE90 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0048AE94 8F998790 */  lw    $t9, %call16(st_ifdmax)($gp)
/* 0048AE98 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0048AE9C AFB20024 */  sw    $s2, 0x24($sp)
/* 0048AEA0 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0048AEA4 00809025 */  move  $s2, $a0
/* 0048AEA8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0048AEAC AFB10020 */  sw    $s1, 0x20($sp)
/* 0048AEB0 AFA50034 */  sw    $a1, 0x34($sp)
/* 0048AEB4 AFA60038 */  sw    $a2, 0x38($sp)
/* 0048AEB8 AFA7003C */  sw    $a3, 0x3c($sp)
/* 0048AEBC 0320F809 */  jalr  $t9
/* 0048AEC0 00008025 */   move  $s0, $zero
/* 0048AEC4 1840004B */  blez  $v0, .L0048AFF4
/* 0048AEC8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0048AECC 8F918048 */  lw    $s1, %got(B_1001C2A0)($gp)
/* 0048AED0 2631C2A0 */  addiu $s1, %lo(B_1001C2A0) # addiu $s1, $s1, -0x3d60
.L0048AED4:
/* 0048AED4 8F9987C8 */  lw    $t9, %call16(st_str_ifd_iss)($gp)
/* 0048AED8 02002025 */  move  $a0, $s0
/* 0048AEDC 24050001 */  li    $a1, 1
/* 0048AEE0 0320F809 */  jalr  $t9
/* 0048AEE4 00000000 */   nop   
/* 0048AEE8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048AEEC 02402025 */  move  $a0, $s2
/* 0048AEF0 00402825 */  move  $a1, $v0
/* 0048AEF4 8F99809C */  lw    $t9, %call16(strcmp)($gp)
/* 0048AEF8 0320F809 */  jalr  $t9
/* 0048AEFC 00000000 */   nop   
/* 0048AF00 14400035 */  bnez  $v0, .L0048AFD8
/* 0048AF04 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0048AF08 8E240000 */  lw    $a0, ($s1)
/* 0048AF0C 2483FFFF */  addiu $v1, $a0, -1
/* 0048AF10 0460000B */  bltz  $v1, .L0048AF40
/* 0048AF14 00000000 */   nop   
/* 0048AF18 8F8E8048 */  lw    $t6, %got(B_1001C29C)($gp)
/* 0048AF1C 000378C0 */  sll   $t7, $v1, 3
/* 0048AF20 8DCEC29C */  lw    $t6, %lo(B_1001C29C)($t6)
/* 0048AF24 01CF1021 */  addu  $v0, $t6, $t7
.L0048AF28:
/* 0048AF28 8C580000 */  lw    $t8, ($v0)
/* 0048AF2C 12180004 */  beq   $s0, $t8, .L0048AF40
/* 0048AF30 00000000 */   nop   
/* 0048AF34 2463FFFF */  addiu $v1, $v1, -1
/* 0048AF38 0461FFFB */  bgez  $v1, .L0048AF28
/* 0048AF3C 2442FFF8 */   addiu $v0, $v0, -8
.L0048AF40:
/* 0048AF40 04600025 */  bltz  $v1, .L0048AFD8
/* 0048AF44 00000000 */   nop   
/* 0048AF48 8F838048 */  lw    $v1, %got(B_1001C29C)($gp)
/* 0048AF4C 0004C8C0 */  sll   $t9, $a0, 3
/* 0048AF50 8C63C29C */  lw    $v1, %lo(B_1001C29C)($v1)
/* 0048AF54 00794021 */  addu  $t0, $v1, $t9
/* 0048AF58 8D09FFF8 */  lw    $t1, -8($t0)
/* 0048AF5C 12090012 */  beq   $s0, $t1, .L0048AFA8
/* 0048AF60 248AFFFF */   addiu $t2, $a0, -1
.L0048AF64:
/* 0048AF64 AE2A0000 */  sw    $t2, ($s1)
/* 0048AF68 0541000A */  bgez  $t2, .L0048AF94
/* 0048AF6C 01402025 */   move  $a0, $t2
/* 0048AF70 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 0048AF74 8F848044 */  lw    $a0, %got(RO_1000F180)($gp)
/* 0048AF78 02402825 */  move  $a1, $s2
/* 0048AF7C 0320F809 */  jalr  $t9
/* 0048AF80 2484F180 */   addiu $a0, %lo(RO_1000F180) # addiu $a0, $a0, -0xe80
/* 0048AF84 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048AF88 8E240000 */  lw    $a0, ($s1)
/* 0048AF8C 8F838048 */  lw    $v1, %got(B_1001C29C)($gp)
/* 0048AF90 8C63C29C */  lw    $v1, %lo(B_1001C29C)($v1)
.L0048AF94:
/* 0048AF94 000458C0 */  sll   $t3, $a0, 3
/* 0048AF98 006B6021 */  addu  $t4, $v1, $t3
/* 0048AF9C 8D8DFFF8 */  lw    $t5, -8($t4)
/* 0048AFA0 560DFFF0 */  bnel  $s0, $t5, .L0048AF64
/* 0048AFA4 248AFFFF */   addiu $t2, $a0, -1
.L0048AFA8:
/* 0048AFA8 8F998794 */  lw    $t9, %call16(st_setfd)($gp)
/* 0048AFAC 02002025 */  move  $a0, $s0
/* 0048AFB0 0320F809 */  jalr  $t9
/* 0048AFB4 00000000 */   nop   
/* 0048AFB8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048AFBC 8E2F0000 */  lw    $t7, ($s1)
/* 0048AFC0 8F8E8048 */  lw    $t6, %got(B_1001C29C)($gp)
/* 0048AFC4 000FC0C0 */  sll   $t8, $t7, 3
/* 0048AFC8 8DCEC29C */  lw    $t6, %lo(B_1001C29C)($t6)
/* 0048AFCC 01D8C821 */  addu  $t9, $t6, $t8
/* 0048AFD0 1000004D */  b     .L0048B108
/* 0048AFD4 8F22FFFC */   lw    $v0, -4($t9)
.L0048AFD8:
/* 0048AFD8 8F998790 */  lw    $t9, %call16(st_ifdmax)($gp)
/* 0048AFDC 26100001 */  addiu $s0, $s0, 1
/* 0048AFE0 0320F809 */  jalr  $t9
/* 0048AFE4 00000000 */   nop   
/* 0048AFE8 0202082A */  slt   $at, $s0, $v0
/* 0048AFEC 1420FFB9 */  bnez  $at, .L0048AED4
/* 0048AFF0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0048AFF4:
/* 0048AFF4 8F998798 */  lw    $t9, %call16(st_fdadd)($gp)
/* 0048AFF8 8F918048 */  lw    $s1, %got(B_1001C2A0)($gp)
/* 0048AFFC 02402025 */  move  $a0, $s2
/* 0048B000 8FA50034 */  lw    $a1, 0x34($sp)
/* 0048B004 8FA60038 */  lw    $a2, 0x38($sp)
/* 0048B008 8FA7003C */  lw    $a3, 0x3c($sp)
/* 0048B00C 0320F809 */  jalr  $t9
/* 0048B010 2631C2A0 */   addiu $s1, %lo(B_1001C2A0) # addiu $s1, $s1, -0x3d60
/* 0048B014 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048B018 8F9982F8 */  lw    $t9, %call16(st_feinit)($gp)
/* 0048B01C 0320F809 */  jalr  $t9
/* 0048B020 00000000 */   nop   
/* 0048B024 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048B028 8E290000 */  lw    $t1, ($s1)
/* 0048B02C 24060008 */  li    $a2, 8
/* 0048B030 8F858048 */  lw    $a1, %got(B_1001C2A4)($gp)
/* 0048B034 24A5C2A4 */  addiu $a1, %lo(B_1001C2A4) # addiu $a1, $a1, -0x3d5c
/* 0048B038 8CA80000 */  lw    $t0, ($a1)
/* 0048B03C 0128082A */  slt   $at, $t1, $t0
/* 0048B040 14200009 */  bnez  $at, .L0048B068
/* 0048B044 00000000 */   nop   
/* 0048B048 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048B04C 8F848048 */  lw    $a0, %got(B_1001C29C)($gp)
/* 0048B050 24070019 */  li    $a3, 25
/* 0048B054 0320F809 */  jalr  $t9
/* 0048B058 8C84C29C */   lw    $a0, %lo(B_1001C29C)($a0)
/* 0048B05C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048B060 8F818048 */  lw    $at, %got(B_1001C29C)($gp)
/* 0048B064 AC22C29C */  sw    $v0, %lo(B_1001C29C)($at)
.L0048B068:
/* 0048B068 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048B06C 0320F809 */  jalr  $t9
/* 0048B070 00000000 */   nop   
/* 0048B074 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048B078 8E2B0000 */  lw    $t3, ($s1)
/* 0048B07C 3C0F000F */  lui   $t7, 0xf
/* 0048B080 8F8A8048 */  lw    $t2, %got(B_1001C29C)($gp)
/* 0048B084 000B60C0 */  sll   $t4, $t3, 3
/* 0048B088 35EFFFFF */  ori   $t7, $t7, 0xffff
/* 0048B08C 8D4AC29C */  lw    $t2, %lo(B_1001C29C)($t2)
/* 0048B090 24040001 */  li    $a0, 1
/* 0048B094 00002825 */  move  $a1, $zero
/* 0048B098 014C6821 */  addu  $t5, $t2, $t4
/* 0048B09C ADA20000 */  sw    $v0, ($t5)
/* 0048B0A0 8F9987B4 */  lw    $t9, %call16(st_symadd)($gp)
/* 0048B0A4 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0048B0A8 2406000B */  li    $a2, 11
/* 0048B0AC 0320F809 */  jalr  $t9
/* 0048B0B0 24070001 */   li    $a3, 1
/* 0048B0B4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048B0B8 00402025 */  move  $a0, $v0
/* 0048B0BC 00002825 */  move  $a1, $zero
/* 0048B0C0 8F9987E8 */  lw    $t9, %call16(st_idn_index_fext)($gp)
/* 0048B0C4 0320F809 */  jalr  $t9
/* 0048B0C8 00000000 */   nop   
/* 0048B0CC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048B0D0 8E380000 */  lw    $t8, ($s1)
/* 0048B0D4 8F858048 */  lw    $a1, %got(B_1001C29C)($gp)
/* 0048B0D8 0018C8C0 */  sll   $t9, $t8, 3
/* 0048B0DC 24A5C29C */  addiu $a1, %lo(B_1001C29C) # addiu $a1, $a1, -0x3d64
/* 0048B0E0 8CAE0000 */  lw    $t6, ($a1)
/* 0048B0E4 01D94021 */  addu  $t0, $t6, $t9
/* 0048B0E8 AD020004 */  sw    $v0, 4($t0)
/* 0048B0EC 8E240000 */  lw    $a0, ($s1)
/* 0048B0F0 8CA90000 */  lw    $t1, ($a1)
/* 0048B0F4 000458C0 */  sll   $t3, $a0, 3
/* 0048B0F8 012B5021 */  addu  $t2, $t1, $t3
/* 0048B0FC 8D420004 */  lw    $v0, 4($t2)
/* 0048B100 248C0001 */  addiu $t4, $a0, 1
/* 0048B104 AE2C0000 */  sw    $t4, ($s1)
.L0048B108:
/* 0048B108 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0048B10C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0048B110 8FB10020 */  lw    $s1, 0x20($sp)
/* 0048B114 8FB20024 */  lw    $s2, 0x24($sp)
/* 0048B118 03E00008 */  jr    $ra
/* 0048B11C 27BD0030 */   addiu $sp, $sp, 0x30
    .type st_filebegin, @function
    .size st_filebegin, .-st_filebegin
    .end st_filebegin

glabel st_endallfiles
    .ent st_endallfiles
/* 0048B120 3C1C0FB9 */  .cpload $t9
/* 0048B124 279CF170 */  
/* 0048B128 0399E021 */  
/* 0048B12C 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0048B130 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048B134 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0048B138 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0048B13C AFB4002C */  sw    $s4, 0x2c($sp)
/* 0048B140 AFB30028 */  sw    $s3, 0x28($sp)
/* 0048B144 AFB20024 */  sw    $s2, 0x24($sp)
/* 0048B148 AFB10020 */  sw    $s1, 0x20($sp)
/* 0048B14C 0320F809 */  jalr  $t9
/* 0048B150 AFB0001C */   sw    $s0, 0x1c($sp)
/* 0048B154 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048B158 AFA20038 */  sw    $v0, 0x38($sp)
/* 0048B15C 00008825 */  move  $s1, $zero
/* 0048B160 8F998790 */  lw    $t9, %call16(st_ifdmax)($gp)
/* 0048B164 0320F809 */  jalr  $t9
/* 0048B168 00000000 */   nop   
/* 0048B16C 18400048 */  blez  $v0, .L0048B290
/* 0048B170 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048B174 2414000C */  li    $s4, 12
/* 0048B178 24130008 */  li    $s3, 8
/* 0048B17C 2412FFFF */  li    $s2, -1
.L0048B180:
/* 0048B180 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048B184 02202025 */  move  $a0, $s1
/* 0048B188 0320F809 */  jalr  $t9
/* 0048B18C 00000000 */   nop   
/* 0048B190 8C430004 */  lw    $v1, 4($v0)
/* 0048B194 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048B198 10600012 */  beqz  $v1, .L0048B1E4
/* 0048B19C 00000000 */   nop   
/* 0048B1A0 12430010 */  beq   $s2, $v1, .L0048B1E4
/* 0048B1A4 00000000 */   nop   
/* 0048B1A8 8C4E0000 */  lw    $t6, ($v0)
/* 0048B1AC 8DC40014 */  lw    $a0, 0x14($t6)
/* 0048B1B0 1880000C */  blez  $a0, .L0048B1E4
/* 0048B1B4 00000000 */   nop   
/* 0048B1B8 00940019 */  multu $a0, $s4
/* 0048B1BC 3C01000F */  lui   $at, 0xf
/* 0048B1C0 3421FFFF */  ori   $at, $at, 0xffff
/* 0048B1C4 00007812 */  mflo  $t7
/* 0048B1C8 006FC021 */  addu  $t8, $v1, $t7
/* 0048B1CC 8F05FFFC */  lw    $a1, -4($t8)
/* 0048B1D0 0005CE82 */  srl   $t9, $a1, 0x1a
/* 0048B1D4 16790003 */  bne   $s3, $t9, .L0048B1E4
/* 0048B1D8 00A14024 */   and   $t0, $a1, $at
/* 0048B1DC 11000025 */  beqz  $t0, .L0048B274
/* 0048B1E0 00000000 */   nop   
.L0048B1E4:
/* 0048B1E4 8F998794 */  lw    $t9, %call16(st_setfd)($gp)
/* 0048B1E8 02202025 */  move  $a0, $s1
/* 0048B1EC 0320F809 */  jalr  $t9
/* 0048B1F0 00000000 */   nop   
/* 0048B1F4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048B1F8 02202025 */  move  $a0, $s1
/* 0048B1FC 00002825 */  move  $a1, $zero
/* 0048B200 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048B204 0320F809 */  jalr  $t9
/* 0048B208 00000000 */   nop   
/* 0048B20C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048B210 8C440000 */  lw    $a0, ($v0)
/* 0048B214 AFA00010 */  sw    $zero, 0x10($sp)
/* 0048B218 8F9987B4 */  lw    $t9, %call16(st_symadd)($gp)
/* 0048B21C 00002825 */  move  $a1, $zero
/* 0048B220 24060008 */  li    $a2, 8
/* 0048B224 0320F809 */  jalr  $t9
/* 0048B228 24070001 */   li    $a3, 1
/* 0048B22C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048B230 00408025 */  move  $s0, $v0
/* 0048B234 02202025 */  move  $a0, $s1
/* 0048B238 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048B23C 00002825 */  move  $a1, $zero
/* 0048B240 0320F809 */  jalr  $t9
/* 0048B244 00000000 */   nop   
/* 0048B248 8C430008 */  lw    $v1, 8($v0)
/* 0048B24C 3C01000F */  lui   $at, 0xf
/* 0048B250 3421FFFF */  ori   $at, $at, 0xffff
/* 0048B254 26100001 */  addiu $s0, $s0, 1
/* 0048B258 02014824 */  and   $t1, $s0, $at
/* 0048B25C 01235026 */  xor   $t2, $t1, $v1
/* 0048B260 000A5B00 */  sll   $t3, $t2, 0xc
/* 0048B264 000B6302 */  srl   $t4, $t3, 0xc
/* 0048B268 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048B26C 01836826 */  xor   $t5, $t4, $v1
/* 0048B270 AC4D0008 */  sw    $t5, 8($v0)
.L0048B274:
/* 0048B274 8F998790 */  lw    $t9, %call16(st_ifdmax)($gp)
/* 0048B278 26310001 */  addiu $s1, $s1, 1
/* 0048B27C 0320F809 */  jalr  $t9
/* 0048B280 00000000 */   nop   
/* 0048B284 0222082A */  slt   $at, $s1, $v0
/* 0048B288 1420FFBD */  bnez  $at, .L0048B180
/* 0048B28C 8FBC0030 */   lw    $gp, 0x30($sp)
.L0048B290:
/* 0048B290 8F998794 */  lw    $t9, %call16(st_setfd)($gp)
/* 0048B294 8FA40038 */  lw    $a0, 0x38($sp)
/* 0048B298 0320F809 */  jalr  $t9
/* 0048B29C 00000000 */   nop   
/* 0048B2A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048B2A4 8F908048 */  lw    $s0, %got(B_1001C29C)($gp)
/* 0048B2A8 8F9980B8 */  lw    $t9, %call16(free)($gp)
/* 0048B2AC 2610C29C */  addiu $s0, %lo(B_1001C29C) # addiu $s0, $s0, -0x3d64
/* 0048B2B0 0320F809 */  jalr  $t9
/* 0048B2B4 8E040000 */   lw    $a0, ($s0)
/* 0048B2B8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048B2BC AE000000 */  sw    $zero, ($s0)
/* 0048B2C0 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0048B2C4 8F818048 */  lw    $at, %got(B_1001C2A0)($gp)
/* 0048B2C8 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0048B2CC 8FB10020 */  lw    $s1, 0x20($sp)
/* 0048B2D0 AC20C2A0 */  sw    $zero, %lo(B_1001C2A0)($at)
/* 0048B2D4 8F818048 */  lw    $at, %got(B_1001C2A4)($gp)
/* 0048B2D8 8FB20024 */  lw    $s2, 0x24($sp)
/* 0048B2DC 8FB30028 */  lw    $s3, 0x28($sp)
/* 0048B2E0 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0048B2E4 27BD0048 */  addiu $sp, $sp, 0x48
/* 0048B2E8 03E00008 */  jr    $ra
/* 0048B2EC AC20C2A4 */   sw    $zero, %lo(B_1001C2A4)($at)
    .type st_endallfiles, @function
    .size st_endallfiles, .-st_endallfiles
    .end st_endallfiles

glabel st_fileend
    .ent st_fileend
/* 0048B2F0 3C1C0FB9 */  .cpload $t9
/* 0048B2F4 279CEFA0 */  
/* 0048B2F8 0399E021 */  
/* 0048B2FC 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048B300 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0048B304 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048B308 0320F809 */  jalr  $t9
/* 0048B30C AFBC0020 */   sw    $gp, 0x20($sp)
/* 0048B310 8C580000 */  lw    $t8, ($v0)
/* 0048B314 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B318 27AE0048 */  addiu $t6, $sp, 0x48
/* 0048B31C ADD80000 */  sw    $t8, ($t6)
/* 0048B320 8C4F0004 */  lw    $t7, 4($v0)
/* 0048B324 ADCF0004 */  sw    $t7, 4($t6)
/* 0048B328 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048B32C 8FA40048 */  lw    $a0, 0x48($sp)
/* 0048B330 0320F809 */  jalr  $t9
/* 0048B334 00000000 */   nop   
/* 0048B338 8C430004 */  lw    $v1, 4($v0)
/* 0048B33C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B340 2401FFFF */  li    $at, -1
/* 0048B344 10600015 */  beqz  $v1, .L0048B39C
/* 0048B348 00000000 */   nop   
/* 0048B34C 10610013 */  beq   $v1, $at, .L0048B39C
/* 0048B350 00000000 */   nop   
/* 0048B354 8C590000 */  lw    $t9, ($v0)
/* 0048B358 8F240014 */  lw    $a0, 0x14($t9)
/* 0048B35C 1880000F */  blez  $a0, .L0048B39C
/* 0048B360 00044880 */   sll   $t1, $a0, 2
/* 0048B364 01244823 */  subu  $t1, $t1, $a0
/* 0048B368 00094880 */  sll   $t1, $t1, 2
/* 0048B36C 00695021 */  addu  $t2, $v1, $t1
/* 0048B370 8D45FFFC */  lw    $a1, -4($t2)
/* 0048B374 24010008 */  li    $at, 8
/* 0048B378 00055E82 */  srl   $t3, $a1, 0x1a
/* 0048B37C 15610007 */  bne   $t3, $at, .L0048B39C
/* 0048B380 3C01000F */   lui   $at, 0xf
/* 0048B384 3421FFFF */  ori   $at, $at, 0xffff
/* 0048B388 00A16024 */  and   $t4, $a1, $at
/* 0048B38C 15800003 */  bnez  $t4, .L0048B39C
/* 0048B390 00000000 */   nop   
/* 0048B394 1000003A */  b     .L0048B480
/* 0048B398 2402FFFF */   li    $v0, -1
.L0048B39C:
/* 0048B39C 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048B3A0 0320F809 */  jalr  $t9
/* 0048B3A4 00000000 */   nop   
/* 0048B3A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B3AC AFA2003C */  sw    $v0, 0x3c($sp)
/* 0048B3B0 8FA40048 */  lw    $a0, 0x48($sp)
/* 0048B3B4 8F998794 */  lw    $t9, %call16(st_setfd)($gp)
/* 0048B3B8 0320F809 */  jalr  $t9
/* 0048B3BC 00000000 */   nop   
/* 0048B3C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B3C4 8FA40048 */  lw    $a0, 0x48($sp)
/* 0048B3C8 8FA5004C */  lw    $a1, 0x4c($sp)
/* 0048B3CC 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048B3D0 0320F809 */  jalr  $t9
/* 0048B3D4 00000000 */   nop   
/* 0048B3D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B3DC 8C440000 */  lw    $a0, ($v0)
/* 0048B3E0 AFA20044 */  sw    $v0, 0x44($sp)
/* 0048B3E4 8F9987B4 */  lw    $t9, %call16(st_symadd)($gp)
/* 0048B3E8 AFA00010 */  sw    $zero, 0x10($sp)
/* 0048B3EC 00002825 */  move  $a1, $zero
/* 0048B3F0 24060008 */  li    $a2, 8
/* 0048B3F4 0320F809 */  jalr  $t9
/* 0048B3F8 24070001 */   li    $a3, 1
/* 0048B3FC 8FA80044 */  lw    $t0, 0x44($sp)
/* 0048B400 3C01000F */  lui   $at, 0xf
/* 0048B404 3421FFFF */  ori   $at, $at, 0xffff
/* 0048B408 8D030008 */  lw    $v1, 8($t0)
/* 0048B40C 00412824 */  and   $a1, $v0, $at
/* 0048B410 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B414 00A36826 */  xor   $t5, $a1, $v1
/* 0048B418 000D7300 */  sll   $t6, $t5, 0xc
/* 0048B41C 000E7B02 */  srl   $t7, $t6, 0xc
/* 0048B420 01E3C026 */  xor   $t8, $t7, $v1
/* 0048B424 AD180008 */  sw    $t8, 8($t0)
/* 0048B428 AFA5004C */  sw    $a1, 0x4c($sp)
/* 0048B42C 8D030008 */  lw    $v1, 8($t0)
/* 0048B430 0061C824 */  and   $t9, $v1, $at
/* 0048B434 27290001 */  addiu $t1, $t9, 1
/* 0048B438 01235026 */  xor   $t2, $t1, $v1
/* 0048B43C 000A5B00 */  sll   $t3, $t2, 0xc
/* 0048B440 000B6302 */  srl   $t4, $t3, 0xc
/* 0048B444 01836826 */  xor   $t5, $t4, $v1
/* 0048B448 AD0D0008 */  sw    $t5, 8($t0)
/* 0048B44C 8F998794 */  lw    $t9, %call16(st_setfd)($gp)
/* 0048B450 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0048B454 0320F809 */  jalr  $t9
/* 0048B458 00000000 */   nop   
/* 0048B45C 27AE0048 */  addiu $t6, $sp, 0x48
/* 0048B460 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B464 8DC40000 */  lw    $a0, ($t6)
/* 0048B468 8F99877C */  lw    $t9, %call16(st_idn_dn)($gp)
/* 0048B46C AFA40000 */  sw    $a0, ($sp)
/* 0048B470 8DC50004 */  lw    $a1, 4($t6)
/* 0048B474 0320F809 */  jalr  $t9
/* 0048B478 AFA50004 */   sw    $a1, 4($sp)
/* 0048B47C 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048B480:
/* 0048B480 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048B484 27BD0050 */  addiu $sp, $sp, 0x50
/* 0048B488 03E00008 */  jr    $ra
/* 0048B48C 00000000 */   nop   
    .type st_fileend, @function
    .size st_fileend, .-st_fileend
    .end st_fileend

glabel st_textblock
    .ent st_textblock
/* 0048B490 3C1C0FB9 */  .cpload $t9
/* 0048B494 279CEE00 */  
/* 0048B498 0399E021 */  
/* 0048B49C 8F838044 */  lw    $v1, %got(D_10011B34)($gp)
/* 0048B4A0 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0048B4A4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048B4A8 24631B34 */  addiu $v1, %lo(D_10011B34) # addiu $v1, $v1, 0x1b34
/* 0048B4AC 8C620000 */  lw    $v0, ($v1)
/* 0048B4B0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048B4B4 1040002A */  beqz  $v0, .L0048B560
/* 0048B4B8 00000000 */   nop   
/* 0048B4BC 8F8E8048 */  lw    $t6, %got(B_1001C294)($gp)
/* 0048B4C0 00002025 */  move  $a0, $zero
/* 0048B4C4 00002825 */  move  $a1, $zero
/* 0048B4C8 8DCEC294 */  lw    $t6, %lo(B_1001C294)($t6)
/* 0048B4CC 29C10002 */  slti  $at, $t6, 2
/* 0048B4D0 14200023 */  bnez  $at, .L0048B560
/* 0048B4D4 00000000 */   nop   
/* 0048B4D8 AC600000 */  sw    $zero, ($v1)
/* 0048B4DC 8F9987B4 */  lw    $t9, %call16(st_symadd)($gp)
/* 0048B4E0 24060007 */  li    $a2, 7
/* 0048B4E4 24070001 */  li    $a3, 1
/* 0048B4E8 0320F809 */  jalr  $t9
/* 0048B4EC AFA00010 */   sw    $zero, 0x10($sp)
/* 0048B4F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B4F4 AFA20034 */  sw    $v0, 0x34($sp)
/* 0048B4F8 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048B4FC 0320F809 */  jalr  $t9
/* 0048B500 00000000 */   nop   
/* 0048B504 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B508 8FAF0034 */  lw    $t7, 0x34($sp)
/* 0048B50C 27A3002C */  addiu $v1, $sp, 0x2c
/* 0048B510 8F998048 */  lw    $t9, %got(B_1001C294)($gp)
/* 0048B514 8F988048 */  lw    $t8, %got(B_1001C290)($gp)
/* 0048B518 AFA2002C */  sw    $v0, 0x2c($sp)
/* 0048B51C 8F39C294 */  lw    $t9, %lo(B_1001C294)($t9)
/* 0048B520 8F18C290 */  lw    $t8, %lo(B_1001C290)($t8)
/* 0048B524 AFAF0030 */  sw    $t7, 0x30($sp)
/* 0048B528 8C6B0000 */  lw    $t3, ($v1)
/* 0048B52C 001940C0 */  sll   $t0, $t9, 3
/* 0048B530 03084821 */  addu  $t1, $t8, $t0
/* 0048B534 AD2BFFF8 */  sw    $t3, -8($t1)
/* 0048B538 8C6A0004 */  lw    $t2, 4($v1)
/* 0048B53C AD2AFFFC */  sw    $t2, -4($t1)
/* 0048B540 8C640000 */  lw    $a0, ($v1)
/* 0048B544 8F99877C */  lw    $t9, %call16(st_idn_dn)($gp)
/* 0048B548 AFA40000 */  sw    $a0, ($sp)
/* 0048B54C 8C650004 */  lw    $a1, 4($v1)
/* 0048B550 0320F809 */  jalr  $t9
/* 0048B554 AFA50004 */   sw    $a1, 4($sp)
/* 0048B558 10000009 */  b     .L0048B580
/* 0048B55C 8FBC0020 */   lw    $gp, 0x20($sp)
.L0048B560:
/* 0048B560 50400007 */  beql  $v0, $zero, .L0048B580
/* 0048B564 00001025 */   move  $v0, $zero
/* 0048B568 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 0048B56C 8F848044 */  lw    $a0, %got(RO_1000F1B0)($gp)
/* 0048B570 0320F809 */  jalr  $t9
/* 0048B574 2484F1B0 */   addiu $a0, %lo(RO_1000F1B0) # addiu $a0, $a0, -0xe50
/* 0048B578 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B57C 00001025 */  move  $v0, $zero
.L0048B580:
/* 0048B580 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048B584 27BD0038 */  addiu $sp, $sp, 0x38
/* 0048B588 03E00008 */  jr    $ra
/* 0048B58C 00000000 */   nop   
    .type st_textblock, @function
    .size st_textblock, .-st_textblock
    .end st_textblock

glabel _sgi_st_blockbegin
    .ent _sgi_st_blockbegin
/* 0048B590 3C1C0FB9 */  .cpload $t9
/* 0048B594 279CED00 */  
/* 0048B598 0399E021 */  
/* 0048B59C 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0048B5A0 24020001 */  li    $v0, 1
/* 0048B5A4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048B5A8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048B5AC AFA60040 */  sw    $a2, 0x40($sp)
/* 0048B5B0 14C2000A */  bne   $a2, $v0, .L0048B5DC
/* 0048B5B4 AFA70044 */   sw    $a3, 0x44($sp)
/* 0048B5B8 8F8F8048 */  lw    $t7, %got(B_1001C294)($gp)
/* 0048B5BC 3C08000F */  lui   $t0, 0xf
/* 0048B5C0 8DEFC294 */  lw    $t7, %lo(B_1001C294)($t7)
/* 0048B5C4 11E00005 */  beqz  $t7, .L0048B5DC
/* 0048B5C8 00000000 */   nop   
/* 0048B5CC 8F818044 */  lw    $at, %got(D_10011B34)($gp)
/* 0048B5D0 3508FFFF */  ori   $t0, $t0, 0xffff
/* 0048B5D4 10000008 */  b     .L0048B5F8
/* 0048B5D8 AC221B34 */   sw    $v0, %lo(D_10011B34)($at)
.L0048B5DC:
/* 0048B5DC 8F9987B4 */  lw    $t9, %call16(st_symadd)($gp)
/* 0048B5E0 8FA60044 */  lw    $a2, 0x44($sp)
/* 0048B5E4 8FA70040 */  lw    $a3, 0x40($sp)
/* 0048B5E8 0320F809 */  jalr  $t9
/* 0048B5EC AFA00010 */   sw    $zero, 0x10($sp)
/* 0048B5F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B5F4 00404025 */  move  $t0, $v0
.L0048B5F8:
/* 0048B5F8 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048B5FC AFA80034 */  sw    $t0, 0x34($sp)
/* 0048B600 0320F809 */  jalr  $t9
/* 0048B604 00000000 */   nop   
/* 0048B608 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B60C 8FA80034 */  lw    $t0, 0x34($sp)
/* 0048B610 AFA2002C */  sw    $v0, 0x2c($sp)
/* 0048B614 8F858048 */  lw    $a1, %got(B_1001C298)($gp)
/* 0048B618 8F898048 */  lw    $t1, %got(B_1001C294)($gp)
/* 0048B61C 24060008 */  li    $a2, 8
/* 0048B620 24A5C298 */  addiu $a1, %lo(B_1001C298) # addiu $a1, $a1, -0x3d68
/* 0048B624 2529C294 */  addiu $t1, %lo(B_1001C294) # addiu $t1, $t1, -0x3d6c
/* 0048B628 8D230000 */  lw    $v1, ($t1)
/* 0048B62C 8CB80000 */  lw    $t8, ($a1)
/* 0048B630 24070019 */  li    $a3, 25
/* 0048B634 AFA80030 */  sw    $t0, 0x30($sp)
/* 0048B638 0078082A */  slt   $at, $v1, $t8
/* 0048B63C 1420000E */  bnez  $at, .L0048B678
/* 0048B640 00000000 */   nop   
/* 0048B644 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048B648 8F848048 */  lw    $a0, %got(B_1001C290)($gp)
/* 0048B64C AFA80034 */  sw    $t0, 0x34($sp)
/* 0048B650 0320F809 */  jalr  $t9
/* 0048B654 8C84C290 */   lw    $a0, %lo(B_1001C290)($a0)
/* 0048B658 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B65C 8FA80034 */  lw    $t0, 0x34($sp)
/* 0048B660 8F818048 */  lw    $at, %got(B_1001C290)($gp)
/* 0048B664 8F838048 */  lw    $v1, %got(B_1001C294)($gp)
/* 0048B668 8F898048 */  lw    $t1, %got(B_1001C294)($gp)
/* 0048B66C AC22C290 */  sw    $v0, %lo(B_1001C290)($at)
/* 0048B670 8C63C294 */  lw    $v1, %lo(B_1001C294)($v1)
/* 0048B674 2529C294 */  addiu $t1, %lo(B_1001C294) # addiu $t1, $t1, -0x3d6c
.L0048B678:
/* 0048B678 8F998048 */  lw    $t9, %got(B_1001C290)($gp)
/* 0048B67C 27A2002C */  addiu $v0, $sp, 0x2c
/* 0048B680 8C4D0000 */  lw    $t5, ($v0)
/* 0048B684 8F39C290 */  lw    $t9, %lo(B_1001C290)($t9)
/* 0048B688 000350C0 */  sll   $t2, $v1, 3
/* 0048B68C 3C01000F */  lui   $at, 0xf
/* 0048B690 032A5821 */  addu  $t3, $t9, $t2
/* 0048B694 AD6D0000 */  sw    $t5, ($t3)
/* 0048B698 8C4C0004 */  lw    $t4, 4($v0)
/* 0048B69C 3421FFFF */  ori   $at, $at, 0xffff
/* 0048B6A0 AD6C0004 */  sw    $t4, 4($t3)
/* 0048B6A4 8D2E0000 */  lw    $t6, ($t1)
/* 0048B6A8 25CF0001 */  addiu $t7, $t6, 1
/* 0048B6AC 15010003 */  bne   $t0, $at, .L0048B6BC
/* 0048B6B0 AD2F0000 */   sw    $t7, ($t1)
/* 0048B6B4 10000008 */  b     .L0048B6D8
/* 0048B6B8 00001025 */   move  $v0, $zero
.L0048B6BC:
/* 0048B6BC 8C440000 */  lw    $a0, ($v0)
/* 0048B6C0 8F99877C */  lw    $t9, %call16(st_idn_dn)($gp)
/* 0048B6C4 AFA40000 */  sw    $a0, ($sp)
/* 0048B6C8 8C450004 */  lw    $a1, 4($v0)
/* 0048B6CC 0320F809 */  jalr  $t9
/* 0048B6D0 AFA50004 */   sw    $a1, 4($sp)
/* 0048B6D4 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048B6D8:
/* 0048B6D8 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048B6DC 27BD0038 */  addiu $sp, $sp, 0x38
/* 0048B6E0 03E00008 */  jr    $ra
/* 0048B6E4 00000000 */   nop   
    .type _sgi_st_blockbegin, @function
    .size _sgi_st_blockbegin, .-_sgi_st_blockbegin
    .end _sgi_st_blockbegin

glabel st_blockbegin
    .ent st_blockbegin
/* 0048B6E8 3C1C0FB9 */  .cpload $t9
/* 0048B6EC 279CEBA8 */  
/* 0048B6F0 0399E021 */  
/* 0048B6F4 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0048B6F8 24020001 */  li    $v0, 1
/* 0048B6FC AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048B700 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048B704 14C2000A */  bne   $a2, $v0, .L0048B730
/* 0048B708 00C03825 */   move  $a3, $a2
/* 0048B70C 8F8E8048 */  lw    $t6, %got(B_1001C294)($gp)
/* 0048B710 3C08000F */  lui   $t0, 0xf
/* 0048B714 8DCEC294 */  lw    $t6, %lo(B_1001C294)($t6)
/* 0048B718 11C00005 */  beqz  $t6, .L0048B730
/* 0048B71C 00000000 */   nop   
/* 0048B720 8F818044 */  lw    $at, %got(D_10011B34)($gp)
/* 0048B724 3508FFFF */  ori   $t0, $t0, 0xffff
/* 0048B728 10000008 */  b     .L0048B74C
/* 0048B72C AC221B34 */   sw    $v0, %lo(D_10011B34)($at)
.L0048B730:
/* 0048B730 8F9987B4 */  lw    $t9, %call16(st_symadd)($gp)
/* 0048B734 24060007 */  li    $a2, 7
/* 0048B738 AFA00010 */  sw    $zero, 0x10($sp)
/* 0048B73C 0320F809 */  jalr  $t9
/* 0048B740 00000000 */   nop   
/* 0048B744 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B748 00404025 */  move  $t0, $v0
.L0048B74C:
/* 0048B74C 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048B750 AFA80034 */  sw    $t0, 0x34($sp)
/* 0048B754 0320F809 */  jalr  $t9
/* 0048B758 00000000 */   nop   
/* 0048B75C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B760 8FA80034 */  lw    $t0, 0x34($sp)
/* 0048B764 AFA2002C */  sw    $v0, 0x2c($sp)
/* 0048B768 8F858048 */  lw    $a1, %got(B_1001C298)($gp)
/* 0048B76C 8F898048 */  lw    $t1, %got(B_1001C294)($gp)
/* 0048B770 24060008 */  li    $a2, 8
/* 0048B774 24A5C298 */  addiu $a1, %lo(B_1001C298) # addiu $a1, $a1, -0x3d68
/* 0048B778 2529C294 */  addiu $t1, %lo(B_1001C294) # addiu $t1, $t1, -0x3d6c
/* 0048B77C 8D230000 */  lw    $v1, ($t1)
/* 0048B780 8CAF0000 */  lw    $t7, ($a1)
/* 0048B784 24070019 */  li    $a3, 25
/* 0048B788 AFA80030 */  sw    $t0, 0x30($sp)
/* 0048B78C 006F082A */  slt   $at, $v1, $t7
/* 0048B790 1420000E */  bnez  $at, .L0048B7CC
/* 0048B794 00000000 */   nop   
/* 0048B798 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048B79C 8F848048 */  lw    $a0, %got(B_1001C290)($gp)
/* 0048B7A0 AFA80034 */  sw    $t0, 0x34($sp)
/* 0048B7A4 0320F809 */  jalr  $t9
/* 0048B7A8 8C84C290 */   lw    $a0, %lo(B_1001C290)($a0)
/* 0048B7AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B7B0 8FA80034 */  lw    $t0, 0x34($sp)
/* 0048B7B4 8F818048 */  lw    $at, %got(B_1001C290)($gp)
/* 0048B7B8 8F838048 */  lw    $v1, %got(B_1001C294)($gp)
/* 0048B7BC 8F898048 */  lw    $t1, %got(B_1001C294)($gp)
/* 0048B7C0 AC22C290 */  sw    $v0, %lo(B_1001C290)($at)
/* 0048B7C4 8C63C294 */  lw    $v1, %lo(B_1001C294)($v1)
/* 0048B7C8 2529C294 */  addiu $t1, %lo(B_1001C294) # addiu $t1, $t1, -0x3d6c
.L0048B7CC:
/* 0048B7CC 8F988048 */  lw    $t8, %got(B_1001C290)($gp)
/* 0048B7D0 27A2002C */  addiu $v0, $sp, 0x2c
/* 0048B7D4 8C4C0000 */  lw    $t4, ($v0)
/* 0048B7D8 8F18C290 */  lw    $t8, %lo(B_1001C290)($t8)
/* 0048B7DC 0003C8C0 */  sll   $t9, $v1, 3
/* 0048B7E0 3C01000F */  lui   $at, 0xf
/* 0048B7E4 03195021 */  addu  $t2, $t8, $t9
/* 0048B7E8 AD4C0000 */  sw    $t4, ($t2)
/* 0048B7EC 8C4B0004 */  lw    $t3, 4($v0)
/* 0048B7F0 3421FFFF */  ori   $at, $at, 0xffff
/* 0048B7F4 AD4B0004 */  sw    $t3, 4($t2)
/* 0048B7F8 8D2D0000 */  lw    $t5, ($t1)
/* 0048B7FC 25AE0001 */  addiu $t6, $t5, 1
/* 0048B800 15010003 */  bne   $t0, $at, .L0048B810
/* 0048B804 AD2E0000 */   sw    $t6, ($t1)
/* 0048B808 10000008 */  b     .L0048B82C
/* 0048B80C 00001025 */   move  $v0, $zero
.L0048B810:
/* 0048B810 8C440000 */  lw    $a0, ($v0)
/* 0048B814 8F99877C */  lw    $t9, %call16(st_idn_dn)($gp)
/* 0048B818 AFA40000 */  sw    $a0, ($sp)
/* 0048B81C 8C450004 */  lw    $a1, 4($v0)
/* 0048B820 0320F809 */  jalr  $t9
/* 0048B824 AFA50004 */   sw    $a1, 4($sp)
/* 0048B828 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048B82C:
/* 0048B82C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048B830 27BD0038 */  addiu $sp, $sp, 0x38
/* 0048B834 03E00008 */  jr    $ra
/* 0048B838 00000000 */   nop   
    .type st_blockbegin, @function
    .size st_blockbegin, .-st_blockbegin
    .end st_blockbegin

glabel st_blockend
    .ent st_blockend
/* 0048B83C 3C1C0FB9 */  .cpload $t9
/* 0048B840 279CEA54 */  
/* 0048B844 0399E021 */  
/* 0048B848 8F828048 */  lw    $v0, %got(B_1001C294)($gp)
/* 0048B84C 8F998048 */  lw    $t9, %got(B_1001C290)($gp)
/* 0048B850 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0048B854 2442C294 */  addiu $v0, %lo(B_1001C294) # addiu $v0, $v0, -0x3d6c
/* 0048B858 8C4E0000 */  lw    $t6, ($v0)
/* 0048B85C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048B860 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048B864 25CFFFFF */  addiu $t7, $t6, -1
/* 0048B868 AC4F0000 */  sw    $t7, ($v0)
/* 0048B86C 8F39C290 */  lw    $t9, %lo(B_1001C290)($t9)
/* 0048B870 000F50C0 */  sll   $t2, $t7, 3
/* 0048B874 AFA40040 */  sw    $a0, 0x40($sp)
/* 0048B878 032A5821 */  addu  $t3, $t9, $t2
/* 0048B87C 8D6D0000 */  lw    $t5, ($t3)
/* 0048B880 27B80034 */  addiu $t8, $sp, 0x34
/* 0048B884 3C01000F */  lui   $at, 0xf
/* 0048B888 AF0D0000 */  sw    $t5, ($t8)
/* 0048B88C 8D6C0004 */  lw    $t4, 4($t3)
/* 0048B890 3421FFFF */  ori   $at, $at, 0xffff
/* 0048B894 AF0C0004 */  sw    $t4, 4($t8)
/* 0048B898 8FAE0038 */  lw    $t6, 0x38($sp)
/* 0048B89C 15C10005 */  bne   $t6, $at, .L0048B8B4
/* 0048B8A0 00000000 */   nop   
/* 0048B8A4 8F818044 */  lw    $at, %got(D_10011B34)($gp)
/* 0048B8A8 00001025 */  move  $v0, $zero
/* 0048B8AC 1000004D */  b     .L0048B9E4
/* 0048B8B0 AC201B34 */   sw    $zero, %lo(D_10011B34)($at)
.L0048B8B4:
/* 0048B8B4 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048B8B8 8FA40034 */  lw    $a0, 0x34($sp)
/* 0048B8BC 8FA50038 */  lw    $a1, 0x38($sp)
/* 0048B8C0 0320F809 */  jalr  $t9
/* 0048B8C4 00000000 */   nop   
/* 0048B8C8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B8CC AFA2003C */  sw    $v0, 0x3c($sp)
/* 0048B8D0 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048B8D4 0320F809 */  jalr  $t9
/* 0048B8D8 00000000 */   nop   
/* 0048B8DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B8E0 AFA2002C */  sw    $v0, 0x2c($sp)
/* 0048B8E4 8FA40034 */  lw    $a0, 0x34($sp)
/* 0048B8E8 8F998794 */  lw    $t9, %call16(st_setfd)($gp)
/* 0048B8EC 0320F809 */  jalr  $t9
/* 0048B8F0 00000000 */   nop   
/* 0048B8F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B8F8 8FA8003C */  lw    $t0, 0x3c($sp)
/* 0048B8FC 00002025 */  move  $a0, $zero
/* 0048B900 8F898048 */  lw    $t1, %got(B_1001C294)($gp)
/* 0048B904 8F8F8048 */  lw    $t7, %got(B_1001C290)($gp)
/* 0048B908 8D070008 */  lw    $a3, 8($t0)
/* 0048B90C 8D29C294 */  lw    $t1, %lo(B_1001C294)($t1)
/* 0048B910 8DEFC290 */  lw    $t7, %lo(B_1001C290)($t7)
/* 0048B914 00073980 */  sll   $a3, $a3, 6
/* 0048B918 0009C8C0 */  sll   $t9, $t1, 3
/* 0048B91C 01F95021 */  addu  $t2, $t7, $t9
/* 0048B920 8F9987B4 */  lw    $t9, %call16(st_symadd)($gp)
/* 0048B924 8D580004 */  lw    $t8, 4($t2)
/* 0048B928 00073EC2 */  srl   $a3, $a3, 0x1b
/* 0048B92C 00002825 */  move  $a1, $zero
/* 0048B930 24060008 */  li    $a2, 8
/* 0048B934 0320F809 */  jalr  $t9
/* 0048B938 AFB80010 */   sw    $t8, 0x10($sp)
/* 0048B93C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B940 244B0001 */  addiu $t3, $v0, 1
/* 0048B944 AFAB0030 */  sw    $t3, 0x30($sp)
/* 0048B948 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048B94C 8FA40034 */  lw    $a0, 0x34($sp)
/* 0048B950 8FA50038 */  lw    $a1, 0x38($sp)
/* 0048B954 0320F809 */  jalr  $t9
/* 0048B958 00000000 */   nop   
/* 0048B95C 8FAC0030 */  lw    $t4, 0x30($sp)
/* 0048B960 8C430008 */  lw    $v1, 8($v0)
/* 0048B964 3C01000F */  lui   $at, 0xf
/* 0048B968 3421FFFF */  ori   $at, $at, 0xffff
/* 0048B96C 01816824 */  and   $t5, $t4, $at
/* 0048B970 01A37026 */  xor   $t6, $t5, $v1
/* 0048B974 000E4B00 */  sll   $t1, $t6, 0xc
/* 0048B978 00097B02 */  srl   $t7, $t1, 0xc
/* 0048B97C 01E3C826 */  xor   $t9, $t7, $v1
/* 0048B980 0019C180 */  sll   $t8, $t9, 6
/* 0048B984 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B988 00185EC2 */  srl   $t3, $t8, 0x1b
/* 0048B98C 24010001 */  li    $at, 1
/* 0048B990 00404025 */  move  $t0, $v0
/* 0048B994 11610003 */  beq   $t3, $at, .L0048B9A4
/* 0048B998 AC590008 */   sw    $t9, 8($v0)
/* 0048B99C 8FAC0040 */  lw    $t4, 0x40($sp)
/* 0048B9A0 AC4C0004 */  sw    $t4, 4($v0)
.L0048B9A4:
/* 0048B9A4 8D040008 */  lw    $a0, 8($t0)
/* 0048B9A8 8F9987E8 */  lw    $t9, %call16(st_idn_index_fext)($gp)
/* 0048B9AC 3C01000F */  lui   $at, 0xf
/* 0048B9B0 3421FFFF */  ori   $at, $at, 0xffff
/* 0048B9B4 00812024 */  and   $a0, $a0, $at
/* 0048B9B8 2484FFFF */  addiu $a0, $a0, -1
/* 0048B9BC 0320F809 */  jalr  $t9
/* 0048B9C0 00002825 */   move  $a1, $zero
/* 0048B9C4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B9C8 AFA20030 */  sw    $v0, 0x30($sp)
/* 0048B9CC 8FA4002C */  lw    $a0, 0x2c($sp)
/* 0048B9D0 8F998794 */  lw    $t9, %call16(st_setfd)($gp)
/* 0048B9D4 0320F809 */  jalr  $t9
/* 0048B9D8 00000000 */   nop   
/* 0048B9DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048B9E0 8FA20030 */  lw    $v0, 0x30($sp)
.L0048B9E4:
/* 0048B9E4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048B9E8 27BD0040 */  addiu $sp, $sp, 0x40
/* 0048B9EC 03E00008 */  jr    $ra
/* 0048B9F0 00000000 */   nop   
    .type st_blockend, @function
    .size st_blockend, .-st_blockend
    .end st_blockend

glabel st_blockpop
    .ent st_blockpop
/* 0048B9F4 3C1C0FB9 */  .cpload $t9
/* 0048B9F8 279CE89C */  
/* 0048B9FC 0399E021 */  
/* 0048BA00 8F828048 */  lw    $v0, %got(B_1001C294)($gp)
/* 0048BA04 2442C294 */  addiu $v0, %lo(B_1001C294) # addiu $v0, $v0, -0x3d6c
/* 0048BA08 8C4E0000 */  lw    $t6, ($v0)
/* 0048BA0C 25CFFFFF */  addiu $t7, $t6, -1
/* 0048BA10 03E00008 */  jr    $ra
/* 0048BA14 AC4F0000 */   sw    $t7, ($v0)
    .type st_blockpop, @function
    .size st_blockpop, .-st_blockpop
    .end st_blockpop

glabel st_procend
    .ent st_procend
/* 0048BA18 3C1C0FB9 */  .cpload $t9
/* 0048BA1C 279CE878 */  
/* 0048BA20 0399E021 */  
/* 0048BA24 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048BA28 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0048BA2C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048BA30 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048BA34 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0048BA38 0320F809 */  jalr  $t9
/* 0048BA3C AFA40058 */   sw    $a0, 0x58($sp)
/* 0048BA40 8C580000 */  lw    $t8, ($v0)
/* 0048BA44 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BA48 27AE0044 */  addiu $t6, $sp, 0x44
/* 0048BA4C ADD80000 */  sw    $t8, ($t6)
/* 0048BA50 8C4F0004 */  lw    $t7, 4($v0)
/* 0048BA54 3C017FFF */  lui   $at, 0x7fff
/* 0048BA58 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BA5C ADCF0004 */  sw    $t7, 4($t6)
/* 0048BA60 8FB90044 */  lw    $t9, 0x44($sp)
/* 0048BA64 1721001A */  bne   $t9, $at, .L0048BAD0
/* 0048BA68 00000000 */   nop   
/* 0048BA6C 8F9987E4 */  lw    $t9, %call16(st_pext_iext)($gp)
/* 0048BA70 24080001 */  li    $t0, 1
/* 0048BA74 AFA8003C */  sw    $t0, 0x3c($sp)
/* 0048BA78 0320F809 */  jalr  $t9
/* 0048BA7C 8FA40048 */   lw    $a0, 0x48($sp)
/* 0048BA80 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BA84 AFA20054 */  sw    $v0, 0x54($sp)
/* 0048BA88 8C45000C */  lw    $a1, 0xc($v0)
/* 0048BA8C 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048BA90 3C01000F */  lui   $at, 0xf
/* 0048BA94 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BA98 94440002 */  lhu   $a0, 2($v0)
/* 0048BA9C 0320F809 */  jalr  $t9
/* 0048BAA0 00A12824 */   and   $a1, $a1, $at
/* 0048BAA4 8FA90054 */  lw    $t1, 0x54($sp)
/* 0048BAA8 AFA20050 */  sw    $v0, 0x50($sp)
/* 0048BAAC 3C01000F */  lui   $at, 0xf
/* 0048BAB0 952A0002 */  lhu   $t2, 2($t1)
/* 0048BAB4 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BAB8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BABC AFAA0044 */  sw    $t2, 0x44($sp)
/* 0048BAC0 8D30000C */  lw    $s0, 0xc($t1)
/* 0048BAC4 02018024 */  and   $s0, $s0, $at
/* 0048BAC8 10000009 */  b     .L0048BAF0
/* 0048BACC AFB00048 */   sw    $s0, 0x48($sp)
.L0048BAD0:
/* 0048BAD0 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048BAD4 AFA0003C */  sw    $zero, 0x3c($sp)
/* 0048BAD8 8FA40044 */  lw    $a0, 0x44($sp)
/* 0048BADC 0320F809 */  jalr  $t9
/* 0048BAE0 8FA50048 */   lw    $a1, 0x48($sp)
/* 0048BAE4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BAE8 AFA20050 */  sw    $v0, 0x50($sp)
/* 0048BAEC 8FB00048 */  lw    $s0, 0x48($sp)
.L0048BAF0:
/* 0048BAF0 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048BAF4 0320F809 */  jalr  $t9
/* 0048BAF8 00000000 */   nop   
/* 0048BAFC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BB00 AFA20038 */  sw    $v0, 0x38($sp)
/* 0048BB04 8FA40044 */  lw    $a0, 0x44($sp)
/* 0048BB08 8F998794 */  lw    $t9, %call16(st_setfd)($gp)
/* 0048BB0C 0320F809 */  jalr  $t9
/* 0048BB10 00000000 */   nop   
/* 0048BB14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BB18 8FAB0050 */  lw    $t3, 0x50($sp)
/* 0048BB1C 00002825 */  move  $a1, $zero
/* 0048BB20 8F9987B4 */  lw    $t9, %call16(st_symadd)($gp)
/* 0048BB24 8D640000 */  lw    $a0, ($t3)
/* 0048BB28 AFB00010 */  sw    $s0, 0x10($sp)
/* 0048BB2C 24060008 */  li    $a2, 8
/* 0048BB30 0320F809 */  jalr  $t9
/* 0048BB34 24070001 */   li    $a3, 1
/* 0048BB38 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BB3C 00408025 */  move  $s0, $v0
/* 0048BB40 8FA40044 */  lw    $a0, 0x44($sp)
/* 0048BB44 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048BB48 8FA50048 */  lw    $a1, 0x48($sp)
/* 0048BB4C 0320F809 */  jalr  $t9
/* 0048BB50 00000000 */   nop   
/* 0048BB54 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BB58 AFA20050 */  sw    $v0, 0x50($sp)
/* 0048BB5C 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048BB60 0320F809 */  jalr  $t9
/* 0048BB64 00000000 */   nop   
/* 0048BB68 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BB6C 00402025 */  move  $a0, $v0
/* 0048BB70 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048BB74 0320F809 */  jalr  $t9
/* 0048BB78 00000000 */   nop   
/* 0048BB7C 8FAC0050 */  lw    $t4, 0x50($sp)
/* 0048BB80 8C4D0000 */  lw    $t5, ($v0)
/* 0048BB84 3C01000F */  lui   $at, 0xf
/* 0048BB88 8D840008 */  lw    $a0, 8($t4)
/* 0048BB8C 8DAE0030 */  lw    $t6, 0x30($t5)
/* 0048BB90 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BB94 00812024 */  and   $a0, $a0, $at
/* 0048BB98 01C4082B */  sltu  $at, $t6, $a0
/* 0048BB9C 1420000B */  bnez  $at, .L0048BBCC
/* 0048BBA0 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0048BBA4 3C01000F */  lui   $at, 0xf
/* 0048BBA8 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BBAC 50810008 */  beql  $a0, $at, .L0048BBD0
/* 0048BBB0 8FB8003C */   lw    $t8, 0x3c($sp)
/* 0048BBB4 8F9987C4 */  lw    $t9, %call16(st_paux_iaux)($gp)
/* 0048BBB8 0320F809 */  jalr  $t9
/* 0048BBBC 00000000 */   nop   
/* 0048BBC0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BBC4 260F0001 */  addiu $t7, $s0, 1
/* 0048BBC8 AC4F0000 */  sw    $t7, ($v0)
.L0048BBCC:
/* 0048BBCC 8FB8003C */  lw    $t8, 0x3c($sp)
.L0048BBD0:
/* 0048BBD0 24010001 */  li    $at, 1
/* 0048BBD4 8FB90054 */  lw    $t9, 0x54($sp)
/* 0048BBD8 17010017 */  bne   $t8, $at, .L0048BC38
/* 0048BBDC 00000000 */   nop   
/* 0048BBE0 8F22000C */  lw    $v0, 0xc($t9)
/* 0048BBE4 2401000E */  li    $at, 14
/* 0048BBE8 00002825 */  move  $a1, $zero
/* 0048BBEC 00024682 */  srl   $t0, $v0, 0x1a
/* 0048BBF0 15010011 */  bne   $t0, $at, .L0048BC38
/* 0048BBF4 00000000 */   nop   
/* 0048BBF8 8F9987E8 */  lw    $t9, %call16(st_idn_index_fext)($gp)
/* 0048BBFC 3C01000F */  lui   $at, 0xf
/* 0048BC00 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BC04 0320F809 */  jalr  $t9
/* 0048BC08 00412024 */   and   $a0, $v0, $at
/* 0048BC0C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BC10 8FA40058 */  lw    $a0, 0x58($sp)
/* 0048BC14 00402825 */  move  $a1, $v0
/* 0048BC18 8F998780 */  lw    $t9, %call16(st_setidn)($gp)
/* 0048BC1C 0320F809 */  jalr  $t9
/* 0048BC20 00000000 */   nop   
/* 0048BC24 8FAA0054 */  lw    $t2, 0x54($sp)
/* 0048BC28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BC2C 9549000C */  lhu   $t1, 0xc($t2)
/* 0048BC30 312BFC1F */  andi  $t3, $t1, 0xfc1f
/* 0048BC34 A54B000C */  sh    $t3, 0xc($t2)
.L0048BC38:
/* 0048BC38 8F9987E8 */  lw    $t9, %call16(st_idn_index_fext)($gp)
/* 0048BC3C 02002025 */  move  $a0, $s0
/* 0048BC40 00002825 */  move  $a1, $zero
/* 0048BC44 0320F809 */  jalr  $t9
/* 0048BC48 00000000 */   nop   
/* 0048BC4C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BC50 AFA20058 */  sw    $v0, 0x58($sp)
/* 0048BC54 8FA40038 */  lw    $a0, 0x38($sp)
/* 0048BC58 8F998794 */  lw    $t9, %call16(st_setfd)($gp)
/* 0048BC5C 0320F809 */  jalr  $t9
/* 0048BC60 00000000 */   nop   
/* 0048BC64 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048BC68 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BC6C 8FA20058 */  lw    $v0, 0x58($sp)
/* 0048BC70 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0048BC74 03E00008 */  jr    $ra
/* 0048BC78 27BD0058 */   addiu $sp, $sp, 0x58
    .type st_procend, @function
    .size st_procend, .-st_procend
    .end st_procend

glabel st_procbegin
    .ent st_procbegin
/* 0048BC7C 3C1C0FB9 */  .cpload $t9
/* 0048BC80 279CE614 */  
/* 0048BC84 0399E021 */  
/* 0048BC88 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048BC8C 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0048BC90 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048BC94 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048BC98 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0048BC9C 0320F809 */  jalr  $t9
/* 0048BCA0 AFA40040 */   sw    $a0, 0x40($sp)
/* 0048BCA4 8C580000 */  lw    $t8, ($v0)
/* 0048BCA8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BCAC 27AE0030 */  addiu $t6, $sp, 0x30
/* 0048BCB0 ADD80000 */  sw    $t8, ($t6)
/* 0048BCB4 8C4F0004 */  lw    $t7, 4($v0)
/* 0048BCB8 3C017FFF */  lui   $at, 0x7fff
/* 0048BCBC 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BCC0 ADCF0004 */  sw    $t7, 4($t6)
/* 0048BCC4 8FB90030 */  lw    $t9, 0x30($sp)
/* 0048BCC8 13210003 */  beq   $t9, $at, .L0048BCD8
/* 0048BCCC 00000000 */   nop   
/* 0048BCD0 10000069 */  b     .L0048BE78
/* 0048BCD4 8FA20040 */   lw    $v0, 0x40($sp)
.L0048BCD8:
/* 0048BCD8 8F9987E4 */  lw    $t9, %call16(st_pext_iext)($gp)
/* 0048BCDC 8FA40034 */  lw    $a0, 0x34($sp)
/* 0048BCE0 0320F809 */  jalr  $t9
/* 0048BCE4 00000000 */   nop   
/* 0048BCE8 8C48000C */  lw    $t0, 0xc($v0)
/* 0048BCEC 24010001 */  li    $at, 1
/* 0048BCF0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BCF4 00084980 */  sll   $t1, $t0, 6
/* 0048BCF8 000956C2 */  srl   $t2, $t1, 0x1b
/* 0048BCFC 15410003 */  bne   $t2, $at, .L0048BD0C
/* 0048BD00 00408025 */   move  $s0, $v0
/* 0048BD04 1000005C */  b     .L0048BE78
/* 0048BD08 8FA20040 */   lw    $v0, 0x40($sp)
.L0048BD0C:
/* 0048BD0C 960B000C */  lhu   $t3, 0xc($s0)
/* 0048BD10 316CFC1F */  andi  $t4, $t3, 0xfc1f
/* 0048BD14 358D0020 */  ori   $t5, $t4, 0x20
/* 0048BD18 A60D000C */  sh    $t5, 0xc($s0)
/* 0048BD1C 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048BD20 0320F809 */  jalr  $t9
/* 0048BD24 00000000 */   nop   
/* 0048BD28 960E0002 */  lhu   $t6, 2($s0)
/* 0048BD2C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BD30 104E0028 */  beq   $v0, $t6, .L0048BDD4
/* 0048BD34 00000000 */   nop   
/* 0048BD38 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048BD3C 0320F809 */  jalr  $t9
/* 0048BD40 00000000 */   nop   
/* 0048BD44 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BD48 00402025 */  move  $a0, $v0
/* 0048BD4C 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048BD50 0320F809 */  jalr  $t9
/* 0048BD54 00000000 */   nop   
/* 0048BD58 8C4F0000 */  lw    $t7, ($v0)
/* 0048BD5C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BD60 8DF80030 */  lw    $t8, 0x30($t7)
/* 0048BD64 1B000016 */  blez  $t8, .L0048BDC0
/* 0048BD68 00000000 */   nop   
/* 0048BD6C 8E19000C */  lw    $t9, 0xc($s0)
/* 0048BD70 3C01000F */  lui   $at, 0xf
/* 0048BD74 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BD78 03214024 */  and   $t0, $t9, $at
/* 0048BD7C 11010010 */  beq   $t0, $at, .L0048BDC0
/* 0048BD80 00000000 */   nop   
/* 0048BD84 8F9987FC */  lw    $t9, %call16(st_iaux_copyty)($gp)
/* 0048BD88 96040002 */  lhu   $a0, 2($s0)
/* 0048BD8C 26050004 */  addiu $a1, $s0, 4
/* 0048BD90 0320F809 */  jalr  $t9
/* 0048BD94 00000000 */   nop   
/* 0048BD98 8E03000C */  lw    $v1, 0xc($s0)
/* 0048BD9C 3C01000F */  lui   $at, 0xf
/* 0048BDA0 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BDA4 00414824 */  and   $t1, $v0, $at
/* 0048BDA8 01235026 */  xor   $t2, $t1, $v1
/* 0048BDAC 000A5B00 */  sll   $t3, $t2, 0xc
/* 0048BDB0 000B6302 */  srl   $t4, $t3, 0xc
/* 0048BDB4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BDB8 01836826 */  xor   $t5, $t4, $v1
/* 0048BDBC AE0D000C */  sw    $t5, 0xc($s0)
.L0048BDC0:
/* 0048BDC0 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048BDC4 0320F809 */  jalr  $t9
/* 0048BDC8 00000000 */   nop   
/* 0048BDCC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BDD0 A6020002 */  sh    $v0, 2($s0)
.L0048BDD4:
/* 0048BDD4 8F998778 */  lw    $t9, %call16(st_str_extiss)($gp)
/* 0048BDD8 8E040004 */  lw    $a0, 4($s0)
/* 0048BDDC 0320F809 */  jalr  $t9
/* 0048BDE0 00000000 */   nop   
/* 0048BDE4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BDE8 00402025 */  move  $a0, $v0
/* 0048BDEC 8F9987A4 */  lw    $t9, %call16(st_stradd)($gp)
/* 0048BDF0 0320F809 */  jalr  $t9
/* 0048BDF4 00000000 */   nop   
/* 0048BDF8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BDFC 8E03000C */  lw    $v1, 0xc($s0)
/* 0048BE00 3C01000F */  lui   $at, 0xf
/* 0048BE04 8F9987B4 */  lw    $t9, %call16(st_symadd)($gp)
/* 0048BE08 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BE0C 00617024 */  and   $t6, $v1, $at
/* 0048BE10 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0048BE14 00402025 */  move  $a0, $v0
/* 0048BE18 00002825 */  move  $a1, $zero
/* 0048BE1C 24070001 */  li    $a3, 1
/* 0048BE20 0320F809 */  jalr  $t9
/* 0048BE24 00033682 */   srl   $a2, $v1, 0x1a
/* 0048BE28 8E03000C */  lw    $v1, 0xc($s0)
/* 0048BE2C 3C01000F */  lui   $at, 0xf
/* 0048BE30 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BE34 00417824 */  and   $t7, $v0, $at
/* 0048BE38 01E3C026 */  xor   $t8, $t7, $v1
/* 0048BE3C 0018CB00 */  sll   $t9, $t8, 0xc
/* 0048BE40 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BE44 00194302 */  srl   $t0, $t9, 0xc
/* 0048BE48 01034826 */  xor   $t1, $t0, $v1
/* 0048BE4C AE09000C */  sw    $t1, 0xc($s0)
/* 0048BE50 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048BE54 96040002 */  lhu   $a0, 2($s0)
/* 0048BE58 0320F809 */  jalr  $t9
/* 0048BE5C 00000000 */   nop   
/* 0048BE60 8C430000 */  lw    $v1, ($v0)
/* 0048BE64 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048BE68 906A003C */  lbu   $t2, 0x3c($v1)
/* 0048BE6C 314BFFFB */  andi  $t3, $t2, 0xfffb
/* 0048BE70 A06B003C */  sb    $t3, 0x3c($v1)
/* 0048BE74 8FA20040 */  lw    $v0, 0x40($sp)
.L0048BE78:
/* 0048BE78 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048BE7C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0048BE80 27BD0040 */  addiu $sp, $sp, 0x40
/* 0048BE84 03E00008 */  jr    $ra
/* 0048BE88 00000000 */   nop   
    .type st_procbegin, @function
    .size st_procbegin, .-st_procbegin
    .end st_procbegin

glabel st_sym_idn
    .ent st_sym_idn
/* 0048BE8C 3C1C0FB9 */  .cpload $t9
/* 0048BE90 279CE404 */  
/* 0048BE94 0399E021 */  
/* 0048BE98 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0048BE9C 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048BEA0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048BEA4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048BEA8 AFA50034 */  sw    $a1, 0x34($sp)
/* 0048BEAC AFA60038 */  sw    $a2, 0x38($sp)
/* 0048BEB0 0320F809 */  jalr  $t9
/* 0048BEB4 AFA7003C */   sw    $a3, 0x3c($sp)
/* 0048BEB8 8C580000 */  lw    $t8, ($v0)
/* 0048BEBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048BEC0 27AE0028 */  addiu $t6, $sp, 0x28
/* 0048BEC4 ADD80000 */  sw    $t8, ($t6)
/* 0048BEC8 8C4F0004 */  lw    $t7, 4($v0)
/* 0048BECC 3C01000F */  lui   $at, 0xf
/* 0048BED0 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BED4 ADCF0004 */  sw    $t7, 4($t6)
/* 0048BED8 8FB9002C */  lw    $t9, 0x2c($sp)
/* 0048BEDC 17210003 */  bne   $t9, $at, .L0048BEEC
/* 0048BEE0 00000000 */   nop   
/* 0048BEE4 1000001F */  b     .L0048BF64
/* 0048BEE8 2402FFFF */   li    $v0, -1
.L0048BEEC:
/* 0048BEEC 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048BEF0 8FA40028 */  lw    $a0, 0x28($sp)
/* 0048BEF4 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0048BEF8 0320F809 */  jalr  $t9
/* 0048BEFC 00000000 */   nop   
/* 0048BF00 8C480008 */  lw    $t0, 8($v0)
/* 0048BF04 8FAB0034 */  lw    $t3, 0x34($sp)
/* 0048BF08 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048BF0C 00084980 */  sll   $t1, $t0, 6
/* 0048BF10 000956C2 */  srl   $t2, $t1, 0x1b
/* 0048BF14 AD6A0000 */  sw    $t2, ($t3)
/* 0048BF18 8C4C0008 */  lw    $t4, 8($v0)
/* 0048BF1C 8FAE0038 */  lw    $t6, 0x38($sp)
/* 0048BF20 3C01000F */  lui   $at, 0xf
/* 0048BF24 000C6E82 */  srl   $t5, $t4, 0x1a
/* 0048BF28 ADCD0000 */  sw    $t5, ($t6)
/* 0048BF2C 8FB8003C */  lw    $t8, 0x3c($sp)
/* 0048BF30 8C4F0004 */  lw    $t7, 4($v0)
/* 0048BF34 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BF38 AF0F0000 */  sw    $t7, ($t8)
/* 0048BF3C 8C590008 */  lw    $t9, 8($v0)
/* 0048BF40 8FA90040 */  lw    $t1, 0x40($sp)
/* 0048BF44 03214024 */  and   $t0, $t9, $at
/* 0048BF48 AD280000 */  sw    $t0, ($t1)
/* 0048BF4C 8F9987C8 */  lw    $t9, %call16(st_str_ifd_iss)($gp)
/* 0048BF50 8C450000 */  lw    $a1, ($v0)
/* 0048BF54 8FA40028 */  lw    $a0, 0x28($sp)
/* 0048BF58 0320F809 */  jalr  $t9
/* 0048BF5C 00000000 */   nop   
/* 0048BF60 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048BF64:
/* 0048BF64 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048BF68 27BD0030 */  addiu $sp, $sp, 0x30
/* 0048BF6C 03E00008 */  jr    $ra
/* 0048BF70 00000000 */   nop   
    .type st_sym_idn, @function
    .size st_sym_idn, .-st_sym_idn
    .end st_sym_idn

glabel st_str_idn
    .ent st_str_idn
/* 0048BF74 3C1C0FB9 */  .cpload $t9
/* 0048BF78 279CE31C */  
/* 0048BF7C 0399E021 */  
/* 0048BF80 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048BF84 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0048BF88 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048BF8C 0320F809 */  jalr  $t9
/* 0048BF90 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0048BF94 8C580000 */  lw    $t8, ($v0)
/* 0048BF98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048BF9C 27AE0028 */  addiu $t6, $sp, 0x28
/* 0048BFA0 ADD80000 */  sw    $t8, ($t6)
/* 0048BFA4 8C4F0004 */  lw    $t7, 4($v0)
/* 0048BFA8 3C01000F */  lui   $at, 0xf
/* 0048BFAC 3421FFFF */  ori   $at, $at, 0xffff
/* 0048BFB0 ADCF0004 */  sw    $t7, 4($t6)
/* 0048BFB4 8FB9002C */  lw    $t9, 0x2c($sp)
/* 0048BFB8 17210003 */  bne   $t9, $at, .L0048BFC8
/* 0048BFBC 00000000 */   nop   
/* 0048BFC0 1000000D */  b     .L0048BFF8
/* 0048BFC4 2402FFFF */   li    $v0, -1
.L0048BFC8:
/* 0048BFC8 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048BFCC 8FA40028 */  lw    $a0, 0x28($sp)
/* 0048BFD0 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0048BFD4 0320F809 */  jalr  $t9
/* 0048BFD8 00000000 */   nop   
/* 0048BFDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048BFE0 8FA40028 */  lw    $a0, 0x28($sp)
/* 0048BFE4 8C450000 */  lw    $a1, ($v0)
/* 0048BFE8 8F9987C8 */  lw    $t9, %call16(st_str_ifd_iss)($gp)
/* 0048BFEC 0320F809 */  jalr  $t9
/* 0048BFF0 00000000 */   nop   
/* 0048BFF4 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048BFF8:
/* 0048BFF8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048BFFC 27BD0030 */  addiu $sp, $sp, 0x30
/* 0048C000 03E00008 */  jr    $ra
/* 0048C004 00000000 */   nop   
    .type st_str_idn, @function
    .size st_str_idn, .-st_str_idn
    .end st_str_idn

glabel st_fglobal_idn
    .ent st_fglobal_idn
/* 0048C008 3C1C0FB9 */  .cpload $t9
/* 0048C00C 279CE288 */  
/* 0048C010 0399E021 */  
/* 0048C014 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048C018 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0048C01C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048C020 0320F809 */  jalr  $t9
/* 0048C024 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0048C028 8C580000 */  lw    $t8, ($v0)
/* 0048C02C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C030 27AE0028 */  addiu $t6, $sp, 0x28
/* 0048C034 ADD80000 */  sw    $t8, ($t6)
/* 0048C038 8C4F0004 */  lw    $t7, 4($v0)
/* 0048C03C 3C01000F */  lui   $at, 0xf
/* 0048C040 3421FFFF */  ori   $at, $at, 0xffff
/* 0048C044 ADCF0004 */  sw    $t7, 4($t6)
/* 0048C048 8FB9002C */  lw    $t9, 0x2c($sp)
/* 0048C04C 17210003 */  bne   $t9, $at, .L0048C05C
/* 0048C050 00000000 */   nop   
/* 0048C054 10000012 */  b     .L0048C0A0
/* 0048C058 00001025 */   move  $v0, $zero
.L0048C05C:
/* 0048C05C 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048C060 8FA40028 */  lw    $a0, 0x28($sp)
/* 0048C064 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0048C068 0320F809 */  jalr  $t9
/* 0048C06C 00000000 */   nop   
/* 0048C070 00401825 */  move  $v1, $v0
/* 0048C074 8C420008 */  lw    $v0, 8($v0)
/* 0048C078 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C07C 00021682 */  srl   $v0, $v0, 0x1a
/* 0048C080 38420002 */  xori  $v0, $v0, 2
/* 0048C084 0002102B */  sltu  $v0, $zero, $v0
/* 0048C088 50400006 */  beql  $v0, $zero, .L0048C0A4
/* 0048C08C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0048C090 8C620008 */  lw    $v0, 8($v1)
/* 0048C094 00021682 */  srl   $v0, $v0, 0x1a
/* 0048C098 3842000E */  xori  $v0, $v0, 0xe
/* 0048C09C 0002102B */  sltu  $v0, $zero, $v0
.L0048C0A0:
/* 0048C0A0 8FBF001C */  lw    $ra, 0x1c($sp)
.L0048C0A4:
/* 0048C0A4 27BD0030 */  addiu $sp, $sp, 0x30
/* 0048C0A8 03E00008 */  jr    $ra
/* 0048C0AC 00000000 */   nop   
    .type st_fglobal_idn, @function
    .size st_fglobal_idn, .-st_fglobal_idn
    .end st_fglobal_idn
)"");
#endif

/*
0040C0C0 local_in_reg
*/
SYMR *st_psym_idn_offset(int idn, int offset) {
    DNR dn;
    AUXU *aux;
    EXTR *ext;
    SYMR *sym;

    dn = *st_pdn_idn(idn);
    if (dn.rfd == ST_EXTIFD) {
        ext = st_pext_iext(dn.index);
        dn.rfd = ext->ifd;
        dn.index = ext->asym.index;
    }

    sym = st_psym_ifd_isym(dn.rfd, dn.index);
    if (sym->index == indexNil) {
        return NULL;
    }

    aux = st_paux_ifd_iaux(dn.rfd, sym->index);
    if (aux == NULL) {
        return NULL;
    }

    while (++dn.index < aux->isym) {
        sym = st_psym_ifd_isym(dn.rfd, dn.index);
        if ((sym->st == stLocal || sym->st == stParam) && (sym->sc == scAbs || sym->sc == scVar) && sym->value == offset) {
            return sym;
        }

        if (sym->st == stProc || sym->st == stStaticProc) {
            break;
        }

        if (sym->sc == scInfo && (sym->st == stBlock || sym->st == stStruct || sym->st == stUnion || sym->st == stEnum)) {
            dn.index = sym->index - 1;
        }
    }

    return NULL;
}

#if 0
__asm__(R""(
.set noat
.set noreorder

glabel st_fixextindex
    .ent st_fixextindex
/* 0048C2E0 3C1C0FB9 */  .cpload $t9
/* 0048C2E4 279CDFB0 */  
/* 0048C2E8 0399E021 */  
/* 0048C2EC 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048C2F0 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0048C2F4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048C2F8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048C2FC 0320F809 */  jalr  $t9
/* 0048C300 AFA50034 */   sw    $a1, 0x34($sp)
/* 0048C304 8C580000 */  lw    $t8, ($v0)
/* 0048C308 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C30C 27AE0024 */  addiu $t6, $sp, 0x24
/* 0048C310 ADD80000 */  sw    $t8, ($t6)
/* 0048C314 8C4F0004 */  lw    $t7, 4($v0)
/* 0048C318 ADCF0004 */  sw    $t7, 4($t6)
/* 0048C31C 8F9987E4 */  lw    $t9, %call16(st_pext_iext)($gp)
/* 0048C320 8FA40028 */  lw    $a0, 0x28($sp)
/* 0048C324 0320F809 */  jalr  $t9
/* 0048C328 00000000 */   nop   
/* 0048C32C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C330 AFA2002C */  sw    $v0, 0x2c($sp)
/* 0048C334 8F99878C */  lw    $t9, %call16(st_currentifd)($gp)
/* 0048C338 0320F809 */  jalr  $t9
/* 0048C33C 00000000 */   nop   
/* 0048C340 8FA3002C */  lw    $v1, 0x2c($sp)
/* 0048C344 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C348 3C01000F */  lui   $at, 0xf
/* 0048C34C A4620002 */  sh    $v0, 2($v1)
/* 0048C350 8FB90034 */  lw    $t9, 0x34($sp)
/* 0048C354 8C64000C */  lw    $a0, 0xc($v1)
/* 0048C358 3421FFFF */  ori   $at, $at, 0xffff
/* 0048C35C 03214024 */  and   $t0, $t9, $at
/* 0048C360 01044826 */  xor   $t1, $t0, $a0
/* 0048C364 00095300 */  sll   $t2, $t1, 0xc
/* 0048C368 000A5B02 */  srl   $t3, $t2, 0xc
/* 0048C36C 01646026 */  xor   $t4, $t3, $a0
/* 0048C370 AC6C000C */  sw    $t4, 0xc($v1)
/* 0048C374 946D000C */  lhu   $t5, 0xc($v1)
/* 0048C378 31AEFC1F */  andi  $t6, $t5, 0xfc1f
/* 0048C37C 35CF0020 */  ori   $t7, $t6, 0x20
/* 0048C380 A46F000C */  sh    $t7, 0xc($v1)
/* 0048C384 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048C388 27BD0030 */  addiu $sp, $sp, 0x30
/* 0048C38C 03E00008 */  jr    $ra
/* 0048C390 00000000 */   nop   
    .type st_fixextindex, @function
    .size st_fixextindex, .-st_fixextindex
    .end st_fixextindex

glabel st_fixextsc
    .ent st_fixextsc
/* 0048C394 3C1C0FB9 */  .cpload $t9
/* 0048C398 279CDEFC */  
/* 0048C39C 0399E021 */  
/* 0048C3A0 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048C3A4 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0048C3A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048C3AC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048C3B0 0320F809 */  jalr  $t9
/* 0048C3B4 AFA50034 */   sw    $a1, 0x34($sp)
/* 0048C3B8 8C580000 */  lw    $t8, ($v0)
/* 0048C3BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C3C0 27AE0024 */  addiu $t6, $sp, 0x24
/* 0048C3C4 ADD80000 */  sw    $t8, ($t6)
/* 0048C3C8 8C4F0004 */  lw    $t7, 4($v0)
/* 0048C3CC ADCF0004 */  sw    $t7, 4($t6)
/* 0048C3D0 8F9987E4 */  lw    $t9, %call16(st_pext_iext)($gp)
/* 0048C3D4 8FA40028 */  lw    $a0, 0x28($sp)
/* 0048C3D8 0320F809 */  jalr  $t9
/* 0048C3DC 00000000 */   nop   
/* 0048C3E0 8FB90034 */  lw    $t9, 0x34($sp)
/* 0048C3E4 944B000C */  lhu   $t3, 0xc($v0)
/* 0048C3E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C3EC 00194940 */  sll   $t1, $t9, 5
/* 0048C3F0 312A03E0 */  andi  $t2, $t1, 0x3e0
/* 0048C3F4 316CFC1F */  andi  $t4, $t3, 0xfc1f
/* 0048C3F8 014C6825 */  or    $t5, $t2, $t4
/* 0048C3FC A44D000C */  sh    $t5, 0xc($v0)
/* 0048C400 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048C404 27BD0030 */  addiu $sp, $sp, 0x30
/* 0048C408 03E00008 */  jr    $ra
/* 0048C40C 00000000 */   nop   
    .type st_fixextsc, @function
    .size st_fixextsc, .-st_fixextsc
    .end st_fixextsc

glabel st_pdadd_idn
    .ent st_pdadd_idn
/* 0048C410 3C1C0FB9 */  .cpload $t9
/* 0048C414 279CDE80 */  
/* 0048C418 0399E021 */  
/* 0048C41C 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048C420 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048C424 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048C428 0320F809 */  jalr  $t9
/* 0048C42C AFBC0018 */   sw    $gp, 0x18($sp)
/* 0048C430 8C4E0000 */  lw    $t6, ($v0)
/* 0048C434 3C017FFF */  lui   $at, 0x7fff
/* 0048C438 3421FFFF */  ori   $at, $at, 0xffff
/* 0048C43C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C440 15C1000B */  bne   $t6, $at, .L0048C470
/* 0048C444 00401825 */   move  $v1, $v0
/* 0048C448 8F9987E4 */  lw    $t9, %call16(st_pext_iext)($gp)
/* 0048C44C 8C640004 */  lw    $a0, 4($v1)
/* 0048C450 0320F809 */  jalr  $t9
/* 0048C454 00000000 */   nop   
/* 0048C458 8C44000C */  lw    $a0, 0xc($v0)
/* 0048C45C 3C01000F */  lui   $at, 0xf
/* 0048C460 3421FFFF */  ori   $at, $at, 0xffff
/* 0048C464 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C468 10000002 */  b     .L0048C474
/* 0048C46C 00812024 */   and   $a0, $a0, $at
.L0048C470:
/* 0048C470 8C440004 */  lw    $a0, 4($v0)
.L0048C474:
/* 0048C474 8F9987A0 */  lw    $t9, %call16(st_pdadd)($gp)
/* 0048C478 0320F809 */  jalr  $t9
/* 0048C47C 00000000 */   nop   
/* 0048C480 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048C484 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C488 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048C48C 03E00008 */  jr    $ra
/* 0048C490 00000000 */   nop   
    .type st_pdadd_idn, @function
    .size st_pdadd_idn, .-st_pdadd_idn
    .end st_pdadd_idn

glabel st_fixiss
    .ent st_fixiss
/* 0048C494 3C1C0FB9 */  .cpload $t9
/* 0048C498 279CDDFC */  
/* 0048C49C 0399E021 */  
/* 0048C4A0 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048C4A4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048C4A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048C4AC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048C4B0 0320F809 */  jalr  $t9
/* 0048C4B4 AFA50024 */   sw    $a1, 0x24($sp)
/* 0048C4B8 8C4E0000 */  lw    $t6, ($v0)
/* 0048C4BC 3C017FFF */  lui   $at, 0x7fff
/* 0048C4C0 3421FFFF */  ori   $at, $at, 0xffff
/* 0048C4C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C4C8 15C10008 */  bne   $t6, $at, .L0048C4EC
/* 0048C4CC 00401825 */   move  $v1, $v0
/* 0048C4D0 8F9987E4 */  lw    $t9, %call16(st_pext_iext)($gp)
/* 0048C4D4 8C440004 */  lw    $a0, 4($v0)
/* 0048C4D8 0320F809 */  jalr  $t9
/* 0048C4DC 00000000 */   nop   
/* 0048C4E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C4E4 10000008 */  b     .L0048C508
/* 0048C4E8 24430004 */   addiu $v1, $v0, 4
.L0048C4EC:
/* 0048C4EC 8F9987C0 */  lw    $t9, %call16(st_psym_ifd_isym)($gp)
/* 0048C4F0 8C640000 */  lw    $a0, ($v1)
/* 0048C4F4 8C650004 */  lw    $a1, 4($v1)
/* 0048C4F8 0320F809 */  jalr  $t9
/* 0048C4FC 00000000 */   nop   
/* 0048C500 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C504 00401825 */  move  $v1, $v0
.L0048C508:
/* 0048C508 8FAF0024 */  lw    $t7, 0x24($sp)
/* 0048C50C AC6F0000 */  sw    $t7, ($v1)
/* 0048C510 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048C514 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048C518 03E00008 */  jr    $ra
/* 0048C51C 00000000 */   nop   
    .type st_fixiss, @function
    .size st_fixiss, .-st_fixiss
    .end st_fixiss

glabel st_changedn
    .ent st_changedn
/* 0048C520 3C1C0FB9 */  .cpload $t9
/* 0048C524 279CDD70 */  
/* 0048C528 0399E021 */  
/* 0048C52C 8F9987EC */  lw    $t9, %call16(st_pdn_idn)($gp)
/* 0048C530 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048C534 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048C538 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048C53C AFA50024 */  sw    $a1, 0x24($sp)
/* 0048C540 0320F809 */  jalr  $t9
/* 0048C544 AFA60028 */   sw    $a2, 0x28($sp)
/* 0048C548 8FAE0024 */  lw    $t6, 0x24($sp)
/* 0048C54C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048C550 AC4E0000 */  sw    $t6, ($v0)
/* 0048C554 8FAF0028 */  lw    $t7, 0x28($sp)
/* 0048C558 AC4F0004 */  sw    $t7, 4($v0)
/* 0048C55C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048C560 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048C564 03E00008 */  jr    $ra
/* 0048C568 00000000 */   nop   
    .type st_changedn, @function
    .size st_changedn, .-st_changedn
    .end st_changedn

glabel st_file_idn
    .ent st_file_idn
/* 0048C56C 3C1C0FB9 */  .cpload $t9
/* 0048C570 279CDD24 */  
/* 0048C574 0399E021 */  
/* 0048C578 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0048C57C 8F998770 */  lw    $t9, %call16(st_currentpchdr)($gp)
/* 0048C580 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0048C584 AFB30024 */  sw    $s3, 0x24($sp)
/* 0048C588 00809825 */  move  $s3, $a0
/* 0048C58C AFBC0028 */  sw    $gp, 0x28($sp)
/* 0048C590 AFB20020 */  sw    $s2, 0x20($sp)
/* 0048C594 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0048C598 0320F809 */  jalr  $t9
/* 0048C59C AFB00018 */   sw    $s0, 0x18($sp)
/* 0048C5A0 14400003 */  bnez  $v0, .L0048C5B0
/* 0048C5A4 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0048C5A8 10000048 */  b     .L0048C6CC
/* 0048C5AC 00001025 */   move  $v0, $zero
.L0048C5B0:
/* 0048C5B0 8F998790 */  lw    $t9, %call16(st_ifdmax)($gp)
/* 0048C5B4 00008025 */  move  $s0, $zero
/* 0048C5B8 0320F809 */  jalr  $t9
/* 0048C5BC 00000000 */   nop   
/* 0048C5C0 18400041 */  blez  $v0, .L0048C6C8
/* 0048C5C4 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0048C5C8 8F918048 */  lw    $s1, %got(B_1001C2A0)($gp)
/* 0048C5CC 2631C2A0 */  addiu $s1, %lo(B_1001C2A0) # addiu $s1, $s1, -0x3d60
.L0048C5D0:
/* 0048C5D0 8F9987C8 */  lw    $t9, %call16(st_str_ifd_iss)($gp)
/* 0048C5D4 02002025 */  move  $a0, $s0
/* 0048C5D8 24050001 */  li    $a1, 1
/* 0048C5DC 0320F809 */  jalr  $t9
/* 0048C5E0 00000000 */   nop   
/* 0048C5E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048C5E8 02602025 */  move  $a0, $s3
/* 0048C5EC 00402825 */  move  $a1, $v0
/* 0048C5F0 8F99809C */  lw    $t9, %call16(strcmp)($gp)
/* 0048C5F4 0320F809 */  jalr  $t9
/* 0048C5F8 00000000 */   nop   
/* 0048C5FC 1440002B */  bnez  $v0, .L0048C6AC
/* 0048C600 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0048C604 8E240000 */  lw    $a0, ($s1)
/* 0048C608 2483FFFF */  addiu $v1, $a0, -1
/* 0048C60C 0460000B */  bltz  $v1, .L0048C63C
/* 0048C610 00000000 */   nop   
/* 0048C614 8F8E8048 */  lw    $t6, %got(B_1001C29C)($gp)
/* 0048C618 000378C0 */  sll   $t7, $v1, 3
/* 0048C61C 8DCEC29C */  lw    $t6, %lo(B_1001C29C)($t6)
/* 0048C620 01CF1021 */  addu  $v0, $t6, $t7
.L0048C624:
/* 0048C624 8C580000 */  lw    $t8, ($v0)
/* 0048C628 12180004 */  beq   $s0, $t8, .L0048C63C
/* 0048C62C 00000000 */   nop   
/* 0048C630 2463FFFF */  addiu $v1, $v1, -1
/* 0048C634 0461FFFB */  bgez  $v1, .L0048C624
/* 0048C638 2442FFF8 */   addiu $v0, $v0, -8
.L0048C63C:
/* 0048C63C 0460001B */  bltz  $v1, .L0048C6AC
/* 0048C640 00000000 */   nop   
/* 0048C644 8F998048 */  lw    $t9, %got(B_1001C29C)($gp)
/* 0048C648 000488C0 */  sll   $s1, $a0, 3
/* 0048C64C 8F39C29C */  lw    $t9, %lo(B_1001C29C)($t9)
/* 0048C650 03311821 */  addu  $v1, $t9, $s1
/* 0048C654 8C68FFF8 */  lw    $t0, -8($v1)
/* 0048C658 12080012 */  beq   $s0, $t0, .L0048C6A4
/* 0048C65C 00000000 */   nop   
/* 0048C660 8F928044 */  lw    $s2, %got(RO_1000F1E4)($gp)
/* 0048C664 2652F1E4 */  addiu $s2, %lo(RO_1000F1E4) # addiu $s2, $s2, -0xe1c
/* 0048C668 2631FFF8 */  addiu $s1, $s1, -8
.L0048C66C:
/* 0048C66C 0621000A */  bgez  $s1, .L0048C698
/* 0048C670 2463FFF8 */   addiu $v1, $v1, -8
/* 0048C674 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 0048C678 02402025 */  move  $a0, $s2
/* 0048C67C 02602825 */  move  $a1, $s3
/* 0048C680 0320F809 */  jalr  $t9
/* 0048C684 00000000 */   nop   
/* 0048C688 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048C68C 8F898048 */  lw    $t1, %got(B_1001C29C)($gp)
/* 0048C690 8D29C29C */  lw    $t1, %lo(B_1001C29C)($t1)
/* 0048C694 01311821 */  addu  $v1, $t1, $s1
.L0048C698:
/* 0048C698 8C6AFFF8 */  lw    $t2, -8($v1)
/* 0048C69C 560AFFF3 */  bnel  $s0, $t2, .L0048C66C
/* 0048C6A0 2631FFF8 */   addiu $s1, $s1, -8
.L0048C6A4:
/* 0048C6A4 10000009 */  b     .L0048C6CC
/* 0048C6A8 8C62FFFC */   lw    $v0, -4($v1)
.L0048C6AC:
/* 0048C6AC 8F998790 */  lw    $t9, %call16(st_ifdmax)($gp)
/* 0048C6B0 26100001 */  addiu $s0, $s0, 1
/* 0048C6B4 0320F809 */  jalr  $t9
/* 0048C6B8 00000000 */   nop   
/* 0048C6BC 0202082A */  slt   $at, $s0, $v0
/* 0048C6C0 1420FFC3 */  bnez  $at, .L0048C5D0
/* 0048C6C4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0048C6C8:
/* 0048C6C8 00001025 */  move  $v0, $zero
.L0048C6CC:
/* 0048C6CC 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0048C6D0 8FB00018 */  lw    $s0, 0x18($sp)
/* 0048C6D4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0048C6D8 8FB20020 */  lw    $s2, 0x20($sp)
/* 0048C6DC 8FB30024 */  lw    $s3, 0x24($sp)
/* 0048C6E0 03E00008 */  jr    $ra
/* 0048C6E4 27BD0030 */   addiu $sp, $sp, 0x30
    .type st_file_idn, @function
    .size st_file_idn, .-st_file_idn
    .end st_file_idn
)"");
#endif
