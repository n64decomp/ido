__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000F050:
    # 0048A8E0 st_cuinit
    .asciz "st_cuinit: cannot allocate current chdr\n"

RO_1000F07C:
    # 0048A954 st_extadd
    .asciz "st_extadd: you didn't initialize with cuinit or readst\n"

RO_1000F0B4:
    # 0048AB3C st_pext_iext
    .asciz "st_pext_iext: index out of range (%d)\n"

RO_1000F0DC:
    # 0048ABB0 st_idn_index_fext
    .asciz "st_idn_index_fext: you didn't initialize with cuinit or readst\n"

RO_1000F11C:
    # 0048ACEC st_pdn_idn
    .asciz "st_pdn_idn: idn (%d) less than 0 or greater than max (%d)\n"



.bss
    .balign 4
# 1001C688
glabel st_pchdr
    # 00488120 st_setchdr
    # 00488138 st_currentpchdr
    # 00488150 st_free
    # 00488434 st_extstradd
    # 00488550 st_str_extiss
    # 00488590 st_idn_dn
    # 004886A8 st_idn_rndx
    # 004887CC st_rndx_idn
    # 004888DC st_setidn
    # 00488984 st_pext_dn
    # 00488A2C st_iextmax
    # 00488C00 st_ifdmax
    # 00488C1C st_setfd
    # 00488C8C st_fdadd
    # 0048932C st_auxadd
    # 00489458 st_pdadd
    # 004895E4 st_lineadd
    # 0048970C st_stradd
    # 004898C0 st_paux_ifd_iaux
    # 004899B0 st_pline_ifd_iline
    # 00489AA0 st_str_iss
    # 00489CA0 st_symadd
    # 00489F38 st_ifd_pcfd
    # 00489FC4 st_pcfd_ifd
    # 0048A06C st_psym_ifd_isym
    # 0048A194 st_paux_iaux
    # 0048A260 st_str_ifd_iss
    # 0048A330 st_ppd_ifd_isym
    # 0048A5A8 _md_st_str_extiss
    # 0048A5E8 _md_st_str_iss
    # 0048A698 _md_st_iextmax
    # 0048A850 _md_st_ifdmax
    # 0048A86C _md_st_setfd
    # 0048A8E0 st_cuinit
    # 0048A954 st_extadd
    # 0048AB3C st_pext_iext
    # 0048ABB0 st_idn_index_fext
    # 0048ACEC st_pdn_idn
    # 0048D0E0 st_readst
    # 0048E1D8 st_writest
    .space 4
    .size st_pchdr, 4
    .type st_pchdr, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel st_cuinit
    .ent st_cuinit
/* 0048A8E0 3C1C0FB9 */  .cpload $t9
/* 0048A8E4 279CF9B0 */  
/* 0048A8E8 0399E021 */  
/* 0048A8EC 8F9980EC */  lw    $t9, %call16(calloc)($gp)
/* 0048A8F0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048A8F4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048A8F8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048A8FC 240400BC */  li    $a0, 188
/* 0048A900 0320F809 */  jalr  $t9
/* 0048A904 24050001 */   li    $a1, 1
/* 0048A908 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A90C 00401825 */  move  $v1, $v0
/* 0048A910 8F858CB8 */  lw     $a1, %got(st_pchdr)($gp)
/* 0048A914 14400008 */  bnez  $v0, .L0048A938
/* 0048A918 ACA20000 */   sw    $v0, ($a1)
/* 0048A91C 8F9987D4 */  lw    $t9, %call16(_md_st_error)($gp)
/* 0048A920 8F848044 */  lw    $a0, %got(RO_1000F050)($gp)
/* 0048A924 0320F809 */  jalr  $t9
/* 0048A928 2484F050 */   addiu $a0, %lo(RO_1000F050) # addiu $a0, $a0, -0xfb0
/* 0048A92C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A930 8F858CB8 */  lw     $a1, %got(st_pchdr)($gp)
/* 0048A934 8CA30000 */  lw    $v1, ($a1)
.L0048A938:
/* 0048A938 240E0002 */  li    $t6, 2
/* 0048A93C AC6E003C */  sw    $t6, 0x3c($v1)
/* 0048A940 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048A944 8CA20000 */  lw    $v0, ($a1)
/* 0048A948 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048A94C 03E00008 */  jr    $ra
/* 0048A950 00000000 */   nop   
    .type st_cuinit, @function
    .size st_cuinit, .-st_cuinit
    .end st_cuinit

glabel st_extadd
    .ent st_extadd
/* 0048A954 3C1C0FB9 */  .cpload $t9
/* 0048A958 279CF93C */  
/* 0048A95C 0399E021 */  
/* 0048A960 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048A964 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0048A968 AFB00014 */  sw    $s0, 0x14($sp)
/* 0048A96C 8D080000 */  lw    $t0, ($t0)
/* 0048A970 00E08025 */  move  $s0, $a3
/* 0048A974 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048A978 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048A97C AFA40028 */  sw    $a0, 0x28($sp)
/* 0048A980 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0048A984 15000008 */  bnez  $t0, .L0048A9A8
/* 0048A988 AFA60030 */   sw    $a2, 0x30($sp)
/* 0048A98C 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048A990 8F848044 */  lw    $a0, %got(RO_1000F07C)($gp)
/* 0048A994 0320F809 */  jalr  $t9
/* 0048A998 2484F07C */   addiu $a0, %lo(RO_1000F07C) # addiu $a0, $a0, -0xf84
/* 0048A99C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A9A0 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048A9A4 8D080000 */  lw    $t0, ($t0)
.L0048A9A8:
/* 0048A9A8 8D04001C */  lw    $a0, 0x1c($t0)
/* 0048A9AC 8D0E0020 */  lw    $t6, 0x20($t0)
/* 0048A9B0 25050020 */  addiu $a1, $t0, 0x20
/* 0048A9B4 008E082A */  slt   $at, $a0, $t6
/* 0048A9B8 5420000E */  bnezl $at, .L0048A9F4
/* 0048A9BC 8D180018 */   lw    $t8, 0x18($t0)
/* 0048A9C0 8F9987E0 */  lw    $t9, %call16(_md_st_malloc)($gp)
/* 0048A9C4 8D040018 */  lw    $a0, 0x18($t0)
/* 0048A9C8 24060010 */  li    $a2, 16
/* 0048A9CC 0320F809 */  jalr  $t9
/* 0048A9D0 24070020 */   li    $a3, 32
/* 0048A9D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048A9D8 8F8F8CB8 */  lw     $t7, %got(st_pchdr)($gp)
/* 0048A9DC 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048A9E0 8DEF0000 */  lw    $t7, ($t7)
/* 0048A9E4 ADE20018 */  sw    $v0, 0x18($t7)
/* 0048A9E8 8D080000 */  lw    $t0, ($t0)
/* 0048A9EC 8D04001C */  lw    $a0, 0x1c($t0)
/* 0048A9F0 8D180018 */  lw    $t8, 0x18($t0)
.L0048A9F4:
/* 0048A9F4 0004C900 */  sll   $t9, $a0, 4
/* 0048A9F8 03191821 */  addu  $v1, $t8, $t9
/* 0048A9FC 8F9987DC */  lw    $t9, %call16(_md_st_currentifd)($gp)
/* 0048AA00 AFA30024 */  sw    $v1, 0x24($sp)
/* 0048AA04 0320F809 */  jalr  $t9
/* 0048AA08 00000000 */   nop   
/* 0048AA0C 8FA30024 */  lw    $v1, 0x24($sp)
/* 0048AA10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048AA14 3C01000F */  lui   $at, 0xf
/* 0048AA18 90690000 */  lbu   $t1, ($v1)
/* 0048AA1C A4620002 */  sh    $v0, 2($v1)
/* 0048AA20 3421FFFF */  ori   $at, $at, 0xffff
/* 0048AA24 312BFF7F */  andi  $t3, $t1, 0xff7f
/* 0048AA28 316D00BF */  andi  $t5, $t3, 0xbf
/* 0048AA2C 31AF00DF */  andi  $t7, $t5, 0xdf
/* 0048AA30 A06B0000 */  sb    $t3, ($v1)
/* 0048AA34 31F900EF */  andi  $t9, $t7, 0xef
/* 0048AA38 A06D0000 */  sb    $t5, ($v1)
/* 0048AA3C A06F0000 */  sb    $t7, ($v1)
/* 0048AA40 332900F7 */  andi  $t1, $t9, 0xf7
/* 0048AA44 A0790000 */  sb    $t9, ($v1)
/* 0048AA48 A0690000 */  sb    $t1, ($v1)
/* 0048AA4C 946A0000 */  lhu   $t2, ($v1)
/* 0048AA50 9069000C */  lbu   $t1, 0xc($v1)
/* 0048AA54 314BF800 */  andi  $t3, $t2, 0xf800
/* 0048AA58 A46B0000 */  sh    $t3, ($v1)
/* 0048AA5C 8FAC0028 */  lw    $t4, 0x28($sp)
/* 0048AA60 312AFF03 */  andi  $t2, $t1, 0xff03
/* 0048AA64 AC6C0004 */  sw    $t4, 4($v1)
/* 0048AA68 8FAD002C */  lw    $t5, 0x2c($sp)
/* 0048AA6C AC6D0008 */  sw    $t5, 8($v1)
/* 0048AA70 8FAF0030 */  lw    $t7, 0x30($sp)
/* 0048AA74 00106940 */  sll   $t5, $s0, 5
/* 0048AA78 31AE03E0 */  andi  $t6, $t5, 0x3e0
/* 0048AA7C 000FC880 */  sll   $t9, $t7, 2
/* 0048AA80 032A5825 */  or    $t3, $t9, $t2
/* 0048AA84 A06B000C */  sb    $t3, 0xc($v1)
/* 0048AA88 946F000C */  lhu   $t7, 0xc($v1)
/* 0048AA8C 31F8FC1F */  andi  $t8, $t7, 0xfc1f
/* 0048AA90 01D84825 */  or    $t1, $t6, $t8
/* 0048AA94 A469000C */  sh    $t1, 0xc($v1)
/* 0048AA98 9079000D */  lbu   $t9, 0xd($v1)
/* 0048AA9C 332AFFEF */  andi  $t2, $t9, 0xffef
/* 0048AAA0 A06A000D */  sb    $t2, 0xd($v1)
/* 0048AAA4 8FAB0038 */  lw    $t3, 0x38($sp)
/* 0048AAA8 8C62000C */  lw    $v0, 0xc($v1)
/* 0048AAAC 01616024 */  and   $t4, $t3, $at
/* 0048AAB0 01826826 */  xor   $t5, $t4, $v0
/* 0048AAB4 000D7B00 */  sll   $t7, $t5, 0xc
/* 0048AAB8 000F7302 */  srl   $t6, $t7, 0xc
/* 0048AABC 24010012 */  li    $at, 18
/* 0048AAC0 01C2C026 */  xor   $t8, $t6, $v0
/* 0048AAC4 12010013 */  beq   $s0, $at, .L0048AB14
/* 0048AAC8 AC78000C */   sw    $t8, 0xc($v1)
/* 0048AACC 24010011 */  li    $at, 17
/* 0048AAD0 12010010 */  beq   $s0, $at, .L0048AB14
/* 0048AAD4 00000000 */   nop   
/* 0048AAD8 1200000E */  beqz  $s0, .L0048AB14
/* 0048AADC 24010006 */   li    $at, 6
/* 0048AAE0 1201000C */  beq   $s0, $at, .L0048AB14
/* 0048AAE4 24010015 */   li    $at, 21
/* 0048AAE8 1201000A */  beq   $s0, $at, .L0048AB14
/* 0048AAEC 00000000 */   nop   
/* 0048AAF0 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048AAF4 94640002 */  lhu   $a0, 2($v1)
/* 0048AAF8 0320F809 */  jalr  $t9
/* 0048AAFC 00000000 */   nop   
/* 0048AB00 8C430000 */  lw    $v1, ($v0)
/* 0048AB04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048AB08 9069003C */  lbu   $t1, 0x3c($v1)
/* 0048AB0C 3139FFFB */  andi  $t9, $t1, 0xfffb
/* 0048AB10 A079003C */  sb    $t9, 0x3c($v1)
.L0048AB14:
/* 0048AB14 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048AB18 8D080000 */  lw    $t0, ($t0)
/* 0048AB1C 8D02001C */  lw    $v0, 0x1c($t0)
/* 0048AB20 244A0001 */  addiu $t2, $v0, 1
/* 0048AB24 AD0A001C */  sw    $t2, 0x1c($t0)
/* 0048AB28 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048AB2C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0048AB30 27BD0028 */  addiu $sp, $sp, 0x28
/* 0048AB34 03E00008 */  jr    $ra
/* 0048AB38 00000000 */   nop   
    .type st_extadd, @function
    .size st_extadd, .-st_extadd
    .end st_extadd

glabel st_pext_iext
    .ent st_pext_iext
    # 0040BCA0 path_blockno
    # 0048A06C st_psym_ifd_isym
    # 0048BA18 st_procend
    # 0048BC7C st_procbegin
    # 0048C0B0 st_psym_idn_offset
    # 0048C2E0 st_fixextindex
    # 0048C394 st_fixextsc
    # 0048C410 st_pdadd_idn
    # 0048C494 st_fixiss
/* 0048AB3C 3C1C0FB9 */  .cpload $t9
/* 0048AB40 279CF754 */  
/* 0048AB44 0399E021 */  
/* 0048AB48 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048AB4C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048AB50 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048AB54 04800007 */  bltz  $a0, .L0048AB74
/* 0048AB58 00802825 */   move  $a1, $a0
/* 0048AB5C 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048AB60 8C630000 */  lw    $v1, ($v1)
/* 0048AB64 8C6E001C */  lw    $t6, 0x1c($v1)
/* 0048AB68 01C4082A */  slt   $at, $t6, $a0
/* 0048AB6C 5020000B */  beql  $at, $zero, .L0048AB9C
/* 0048AB70 8FBF001C */   lw    $ra, 0x1c($sp)
.L0048AB74:
/* 0048AB74 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048AB78 8F848044 */  lw    $a0, %got(RO_1000F0B4)($gp)
/* 0048AB7C AFA50020 */  sw    $a1, 0x20($sp)
/* 0048AB80 0320F809 */  jalr  $t9
/* 0048AB84 2484F0B4 */   addiu $a0, %lo(RO_1000F0B4) # addiu $a0, $a0, -0xf4c
/* 0048AB88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048AB8C 8FA50020 */  lw    $a1, 0x20($sp)
/* 0048AB90 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048AB94 8C630000 */  lw    $v1, ($v1)
/* 0048AB98 8FBF001C */  lw    $ra, 0x1c($sp)
.L0048AB9C:
/* 0048AB9C 8C6F0018 */  lw    $t7, 0x18($v1)
/* 0048ABA0 0005C100 */  sll   $t8, $a1, 4
/* 0048ABA4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048ABA8 03E00008 */  jr    $ra
/* 0048ABAC 01F81021 */   addu  $v0, $t7, $t8
    .type st_pext_iext, @function
    .size st_pext_iext, .-st_pext_iext
    .end st_pext_iext

glabel st_idn_index_fext
    .ent st_idn_index_fext
    # 0048AE84 st_filebegin
    # 0048B83C st_blockend
    # 0048BA18 st_procend
/* 0048ABB0 3C1C0FB9 */  .cpload $t9
/* 0048ABB4 279CF6E0 */  
/* 0048ABB8 0399E021 */  
/* 0048ABBC 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048ABC0 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0048ABC4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048ABC8 8C630000 */  lw    $v1, ($v1)
/* 0048ABCC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048ABD0 AFA40038 */  sw    $a0, 0x38($sp)
/* 0048ABD4 14600008 */  bnez  $v1, .L0048ABF8
/* 0048ABD8 AFA5003C */   sw    $a1, 0x3c($sp)
/* 0048ABDC 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048ABE0 8F848044 */  lw    $a0, %got(RO_1000F0DC)($gp)
/* 0048ABE4 0320F809 */  jalr  $t9
/* 0048ABE8 2484F0DC */   addiu $a0, %lo(RO_1000F0DC) # addiu $a0, $a0, -0xf24
/* 0048ABEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048ABF0 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048ABF4 8C630000 */  lw    $v1, ($v1)
.L0048ABF8:
/* 0048ABF8 8C620040 */  lw    $v0, 0x40($v1)
/* 0048ABFC 8C6E003C */  lw    $t6, 0x3c($v1)
/* 0048AC00 24650040 */  addiu $a1, $v1, 0x40
/* 0048AC04 24060008 */  li    $a2, 8
/* 0048AC08 01C2082A */  slt   $at, $t6, $v0
/* 0048AC0C 1420000B */  bnez  $at, .L0048AC3C
/* 0048AC10 00404025 */   move  $t0, $v0
/* 0048AC14 8F9987E0 */  lw    $t9, %call16(_md_st_malloc)($gp)
/* 0048AC18 8C640038 */  lw    $a0, 0x38($v1)
/* 0048AC1C AFA2002C */  sw    $v0, 0x2c($sp)
/* 0048AC20 0320F809 */  jalr  $t9
/* 0048AC24 24070080 */   li    $a3, 128
/* 0048AC28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048AC2C 8FA8002C */  lw    $t0, 0x2c($sp)
/* 0048AC30 8F8F8CB8 */  lw     $t7, %got(st_pchdr)($gp)
/* 0048AC34 8DEF0000 */  lw    $t7, ($t7)
/* 0048AC38 ADE20038 */  sw    $v0, 0x38($t7)
.L0048AC3C:
/* 0048AC3C 55000009 */  bnezl $t0, .L0048AC64
/* 0048AC40 8FA9003C */   lw    $t1, 0x3c($sp)
/* 0048AC44 8F988CB8 */  lw     $t8, %got(st_pchdr)($gp)
/* 0048AC48 8F9980BC */  lw    $t9, %call16(bzero)($gp)
/* 0048AC4C 24050010 */  li    $a1, 16
/* 0048AC50 8F180000 */  lw    $t8, ($t8)
/* 0048AC54 0320F809 */  jalr  $t9
/* 0048AC58 8F040038 */   lw    $a0, 0x38($t8)
/* 0048AC5C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048AC60 8FA9003C */  lw    $t1, 0x3c($sp)
.L0048AC64:
/* 0048AC64 8FB90038 */  lw    $t9, 0x38($sp)
/* 0048AC68 3C0A7FFF */  lui   $t2, 0x7fff
/* 0048AC6C 11200006 */  beqz  $t1, .L0048AC88
/* 0048AC70 AFB90034 */   sw    $t9, 0x34($sp)
/* 0048AC74 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048AC78 354AFFFF */  ori   $t2, $t2, 0xffff
/* 0048AC7C AFAA0030 */  sw    $t2, 0x30($sp)
/* 0048AC80 10000008 */  b     .L0048ACA4
/* 0048AC84 8C630000 */   lw    $v1, ($v1)
.L0048AC88:
/* 0048AC88 8F9987DC */  lw    $t9, %call16(_md_st_currentifd)($gp)
/* 0048AC8C 0320F809 */  jalr  $t9
/* 0048AC90 00000000 */   nop   
/* 0048AC94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048AC98 AFA20030 */  sw    $v0, 0x30($sp)
/* 0048AC9C 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048ACA0 8C630000 */  lw    $v1, ($v1)
.L0048ACA4:
/* 0048ACA4 8C6C003C */  lw    $t4, 0x3c($v1)
/* 0048ACA8 8C6B0038 */  lw    $t3, 0x38($v1)
/* 0048ACAC 27AF0030 */  addiu $t7, $sp, 0x30
/* 0048ACB0 8DF90000 */  lw    $t9, ($t7)
/* 0048ACB4 000C68C0 */  sll   $t5, $t4, 3
/* 0048ACB8 016D7021 */  addu  $t6, $t3, $t5
/* 0048ACBC ADD90000 */  sw    $t9, ($t6)
/* 0048ACC0 8DF80004 */  lw    $t8, 4($t7)
/* 0048ACC4 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048ACC8 ADD80004 */  sw    $t8, 4($t6)
/* 0048ACCC 8C630000 */  lw    $v1, ($v1)
/* 0048ACD0 8C62003C */  lw    $v0, 0x3c($v1)
/* 0048ACD4 24490001 */  addiu $t1, $v0, 1
/* 0048ACD8 AC69003C */  sw    $t1, 0x3c($v1)
/* 0048ACDC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048ACE0 27BD0038 */  addiu $sp, $sp, 0x38
/* 0048ACE4 03E00008 */  jr    $ra
/* 0048ACE8 00000000 */   nop   
    .type st_idn_index_fext, @function
    .size st_idn_index_fext, .-st_idn_index_fext
    .end st_idn_index_fext

glabel st_pdn_idn
    .ent st_pdn_idn
    # 0040BCA0 path_blockno
    # 0048B2F0 st_fileend
    # 0048BA18 st_procend
    # 0048BC7C st_procbegin
    # 0048BE8C st_sym_idn
    # 0048BF74 st_str_idn
    # 0048C008 st_fglobal_idn
    # 0048C0B0 st_psym_idn_offset
    # 0048C2E0 st_fixextindex
    # 0048C394 st_fixextsc
    # 0048C410 st_pdadd_idn
    # 0048C494 st_fixiss
    # 0048C520 st_changedn
    # 0048CFAC st_auxrndxadd_idn
/* 0048ACEC 3C1C0FB9 */  .cpload $t9
/* 0048ACF0 279CF5A4 */  
/* 0048ACF4 0399E021 */  
/* 0048ACF8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048ACFC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048AD00 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048AD04 04800007 */  bltz  $a0, .L0048AD24
/* 0048AD08 00802825 */   move  $a1, $a0
/* 0048AD0C 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048AD10 8C630000 */  lw    $v1, ($v1)
/* 0048AD14 8C6E003C */  lw    $t6, 0x3c($v1)
/* 0048AD18 01C4082A */  slt   $at, $t6, $a0
/* 0048AD1C 5020000E */  beql  $at, $zero, .L0048AD58
/* 0048AD20 8FBF001C */   lw    $ra, 0x1c($sp)
.L0048AD24:
/* 0048AD24 8F8F8CB8 */  lw     $t7, %got(st_pchdr)($gp)
/* 0048AD28 8F9987D0 */  lw    $t9, %call16(_md_st_internal)($gp)
/* 0048AD2C 8F848044 */  lw    $a0, %got(RO_1000F11C)($gp)
/* 0048AD30 8DEF0000 */  lw    $t7, ($t7)
/* 0048AD34 2484F11C */  addiu $a0, %lo(RO_1000F11C) # addiu $a0, $a0, -0xee4
/* 0048AD38 8DE6003C */  lw    $a2, 0x3c($t7)
/* 0048AD3C 0320F809 */  jalr  $t9
/* 0048AD40 AFA50020 */   sw    $a1, 0x20($sp)
/* 0048AD44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048AD48 8FA50020 */  lw    $a1, 0x20($sp)
/* 0048AD4C 8F838CB8 */  lw     $v1, %got(st_pchdr)($gp)
/* 0048AD50 8C630000 */  lw    $v1, ($v1)
/* 0048AD54 8FBF001C */  lw    $ra, 0x1c($sp)
.L0048AD58:
/* 0048AD58 8C780038 */  lw    $t8, 0x38($v1)
/* 0048AD5C 0005C8C0 */  sll   $t9, $a1, 3
/* 0048AD60 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048AD64 03E00008 */  jr    $ra
/* 0048AD68 03191021 */   addu  $v0, $t8, $t9
    .type st_pdn_idn, @function
    .size st_pdn_idn, .-st_pdn_idn
    .end st_pdn_idn
)"");
