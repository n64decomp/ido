__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000A150:
    # 0040F8D0 resetsubdelete
    .ascii "uoptcm.p"

    .balign 4
jtbl_1000A158:
    # 0040F8D0 resetsubdelete
    .gpword .L0040FA80
    .gpword .L0040F990
    .gpword .L0040FA14

RO_1000A164:
    # 0040FD80 trap_implying
    .ascii "uoptcm.p"

    .balign 4
jtbl_1000A16C:
    # 0040FD80 trap_implying
    .gpword .L0040FE00
    .gpword .L0040FE54
    .gpword .L0040FEA8
    .gpword .L0040FEFC

RO_1000A17C:
    # 0040FF80 trap_implying_v
    .ascii "uoptcm.p"

    .balign 4
jtbl_1000A184:
    # 0040FF80 trap_implying_v
    .gpword .L00410044
    .gpword .L00410034
    .gpword .L00410000
    .gpword .L00410024

RO_1000A194:
    # 00410204 codemotion
    .ascii "uoptcm.p"

RO_1000A19C:
    # 00410204 codemotion
    .ascii "uoptcm.p"

    .balign 4
jtbl_1000A1A4:
    # 00410204 codemotion
    .gpword .L0041055C
    .gpword .L00410554

    .balign 4
jtbl_1000A1AC:
    # 00410204 codemotion
    .gpword .L0041054C
    .gpword .L00410544

    .balign 4
jtbl_1000A1B4:
    # 00410204 codemotion
    .gpword .L004105D8
    .gpword .L004105D0

    .balign 4
jtbl_1000A1BC:
    # 00410204 codemotion
    .gpword .L004105C8
    .gpword .L004105C0

.data
D_1000FD40:
    # 0040FBF8 has_assert
    .byte 0x00,0xc0,0x00,0x00,0x00,0x06,0x00,0x00

D_1000FD48:
    # 0040FBF8 has_assert
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_1000FD54:
    # 00410204 codemotion
    .byte 0x10,0x80,0xe7,0x12,0x80,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x40,0x00,0x82,0x00,0x00

D_1000FD68:
    # 00410204 codemotion
    .byte 0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00

D_1000FD7C:
    # 00410204 codemotion
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10

D_1000FD8C:
    # 00410204 codemotion
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_1000FD98:
    # 00410204 codemotion
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel resetsubdelete
    .ent resetsubdelete
    # 0040F8D0 resetsubdelete
    # 00410098 delete_unmoved_recur
    # 00410204 codemotion
/* 0040F8D0 3C1C0FC1 */  .cpload $t9
/* 0040F8D4 279CA9C0 */  
/* 0040F8D8 0399E021 */  
/* 0040F8DC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0040F8E0 AFB20020 */  sw    $s2, 0x20($sp)
/* 0040F8E4 AFB00018 */  sw    $s0, 0x18($sp)
/* 0040F8E8 00808025 */  move  $s0, $a0
/* 0040F8EC 00A09025 */  move  $s2, $a1
/* 0040F8F0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0040F8F4 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0040F8F8 AFB30024 */  sw    $s3, 0x24($sp)
/* 0040F8FC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0040F900 8F8689CC */  lw     $a2, %got(nocopy)($gp)
.L0040F904:
/* 0040F904 52000094 */  beql  $s0, $zero, .L0040FB58
/* 0040F908 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0040F90C 92020000 */  lbu   $v0, ($s0)
/* 0040F910 3C011200 */  lui   $at, 0x1200
/* 0040F914 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 0040F918 000E7823 */  negu  $t7, $t6
/* 0040F91C 01E1C024 */  and   $t8, $t7, $at
/* 0040F920 0058C804 */  sllv  $t9, $t8, $v0
/* 0040F924 07210009 */  bgez  $t9, .L0040F94C
/* 0040F928 2C490020 */   sltiu $t1, $v0, 0x20
/* 0040F92C 8E030030 */  lw    $v1, 0x30($s0)
/* 0040F930 50600007 */  beql  $v1, $zero, .L0040F950
/* 0040F934 00095023 */   negu  $t2, $t1
/* 0040F938 8CC80000 */  lw    $t0, ($a2)
/* 0040F93C 51030004 */  beql  $t0, $v1, .L0040F950
/* 0040F940 00095023 */   negu  $t2, $t1
/* 0040F944 1000FFEF */  b     .L0040F904
/* 0040F948 00608025 */   move  $s0, $v1
.L0040F94C:
/* 0040F94C 00095023 */  negu  $t2, $t1
.L0040F950:
/* 0040F950 3C010E00 */  lui   $at, 0xe00
/* 0040F954 01415824 */  and   $t3, $t2, $at
/* 0040F958 004B6004 */  sllv  $t4, $t3, $v0
/* 0040F95C 0581007D */  bgez  $t4, .L0040FB54
/* 0040F960 304300FF */   andi  $v1, $v0, 0xff
/* 0040F964 246DFFFC */  addiu $t5, $v1, -4
/* 0040F968 2DA10003 */  sltiu $at, $t5, 3
/* 0040F96C 10200071 */  beqz  $at, .L0040FB34
/* 0040F970 02009825 */   move  $s3, $s0
/* 0040F974 8F818044 */  lw    $at, %got(jtbl_1000A158)($gp)
/* 0040F978 000D6880 */  sll   $t5, $t5, 2
/* 0040F97C 002D0821 */  addu  $at, $at, $t5
/* 0040F980 8C2DA158 */  lw    $t5, %lo(jtbl_1000A158)($at)
/* 0040F984 01BC6821 */  addu  $t5, $t5, $gp
/* 0040F988 01A00008 */  jr    $t5
/* 0040F98C 00000000 */   nop   
.L0040F990:
/* 0040F990 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0040F994 8E0E0014 */  lw    $t6, 0x14($s0)
/* 0040F998 26450124 */  addiu $a1, $s2, 0x124
/* 0040F99C 0320F809 */  jalr  $t9
/* 0040F9A0 95C40002 */   lhu   $a0, 2($t6)
/* 0040F9A4 10400018 */  beqz  $v0, .L0040FA08
/* 0040F9A8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0040F9AC 8E020034 */  lw    $v0, 0x34($s0)
/* 0040F9B0 24010006 */  li    $at, 6
/* 0040F9B4 904F0000 */  lbu   $t7, ($v0)
/* 0040F9B8 15E1000C */  bne   $t7, $at, .L0040F9EC
/* 0040F9BC 00000000 */   nop   
/* 0040F9C0 90580003 */  lbu   $t8, 3($v0)
/* 0040F9C4 17000009 */  bnez  $t8, .L0040F9EC
/* 0040F9C8 00000000 */   nop   
/* 0040F9CC 8C590014 */  lw    $t9, 0x14($v0)
/* 0040F9D0 2645013C */  addiu $a1, $s2, 0x13c
/* 0040F9D4 97240002 */  lhu   $a0, 2($t9)
/* 0040F9D8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0040F9DC 0320F809 */  jalr  $t9
/* 0040F9E0 00000000 */   nop   
/* 0040F9E4 10400008 */  beqz  $v0, .L0040FA08
/* 0040F9E8 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040F9EC:
/* 0040F9EC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0040F9F0 8E080014 */  lw    $t0, 0x14($s0)
/* 0040F9F4 26440144 */  addiu $a0, $s2, 0x144
/* 0040F9F8 0320F809 */  jalr  $t9
/* 0040F9FC 95050002 */   lhu   $a1, 2($t0)
/* 0040FA00 10000054 */  b     .L0040FB54
/* 0040FA04 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040FA08:
/* 0040FA08 8E700034 */  lw    $s0, 0x34($s3)
/* 0040FA0C 1000FFBD */  b     .L0040F904
/* 0040FA10 8F8689CC */   lw     $a2, %got(nocopy)($gp)
.L0040FA14:
/* 0040FA14 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0040FA18 8E090014 */  lw    $t1, 0x14($s0)
/* 0040FA1C 26450124 */  addiu $a1, $s2, 0x124
/* 0040FA20 0320F809 */  jalr  $t9
/* 0040FA24 95240002 */   lhu   $a0, 2($t1)
/* 0040FA28 10400012 */  beqz  $v0, .L0040FA74
/* 0040FA2C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0040FA30 920A0003 */  lbu   $t2, 3($s0)
/* 0040FA34 15400008 */  bnez  $t2, .L0040FA58
/* 0040FA38 00000000 */   nop   
/* 0040FA3C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0040FA40 8E0B0014 */  lw    $t3, 0x14($s0)
/* 0040FA44 2645013C */  addiu $a1, $s2, 0x13c
/* 0040FA48 0320F809 */  jalr  $t9
/* 0040FA4C 95640002 */   lhu   $a0, 2($t3)
/* 0040FA50 10400008 */  beqz  $v0, .L0040FA74
/* 0040FA54 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040FA58:
/* 0040FA58 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0040FA5C 8E0C0014 */  lw    $t4, 0x14($s0)
/* 0040FA60 26440144 */  addiu $a0, $s2, 0x144
/* 0040FA64 0320F809 */  jalr  $t9
/* 0040FA68 95850002 */   lhu   $a1, 2($t4)
/* 0040FA6C 10000039 */  b     .L0040FB54
/* 0040FA70 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040FA74:
/* 0040FA74 8E700024 */  lw    $s0, 0x24($s3)
/* 0040FA78 1000FFA2 */  b     .L0040F904
/* 0040FA7C 8F8689CC */   lw     $a2, %got(nocopy)($gp)
.L0040FA80:
/* 0040FA80 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0040FA84 8E0D0014 */  lw    $t5, 0x14($s0)
/* 0040FA88 26450124 */  addiu $a1, $s2, 0x124
/* 0040FA8C 0320F809 */  jalr  $t9
/* 0040FA90 95A40002 */   lhu   $a0, 2($t5)
/* 0040FA94 10400013 */  beqz  $v0, .L0040FAE4
/* 0040FA98 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0040FA9C 920E0021 */  lbu   $t6, 0x21($s0)
/* 0040FAA0 15C00008 */  bnez  $t6, .L0040FAC4
/* 0040FAA4 00000000 */   nop   
/* 0040FAA8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0040FAAC 8E0F0014 */  lw    $t7, 0x14($s0)
/* 0040FAB0 2645013C */  addiu $a1, $s2, 0x13c
/* 0040FAB4 0320F809 */  jalr  $t9
/* 0040FAB8 95E40002 */   lhu   $a0, 2($t7)
/* 0040FABC 10400009 */  beqz  $v0, .L0040FAE4
/* 0040FAC0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040FAC4:
/* 0040FAC4 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0040FAC8 8E180014 */  lw    $t8, 0x14($s0)
/* 0040FACC 26440144 */  addiu $a0, $s2, 0x144
/* 0040FAD0 00008825 */  move  $s1, $zero
/* 0040FAD4 0320F809 */  jalr  $t9
/* 0040FAD8 97050002 */   lhu   $a1, 2($t8)
/* 0040FADC 10000002 */  b     .L0040FAE8
/* 0040FAE0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040FAE4:
/* 0040FAE4 24110001 */  li    $s1, 1
.L0040FAE8:
/* 0040FAE8 5220001B */  beql  $s1, $zero, .L0040FB58
/* 0040FAEC 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0040FAF0 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 0040FAF4 8E040024 */  lw    $a0, 0x24($s0)
/* 0040FAF8 02402825 */  move  $a1, $s2
/* 0040FAFC 0320F809 */  jalr  $t9
/* 0040FB00 00000000 */   nop   
/* 0040FB04 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040FB08 92190020 */  lbu   $t9, 0x20($s0)
/* 0040FB0C 8F898DBC */  lw     $t1, %got(optab)($gp)
/* 0040FB10 00194080 */  sll   $t0, $t9, 2
/* 0040FB14 01194023 */  subu  $t0, $t0, $t9
/* 0040FB18 01095021 */  addu  $t2, $t0, $t1
/* 0040FB1C 914B0002 */  lbu   $t3, 2($t2)
/* 0040FB20 5160000D */  beql  $t3, $zero, .L0040FB58
/* 0040FB24 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0040FB28 8E700028 */  lw    $s0, 0x28($s3)
/* 0040FB2C 1000FF75 */  b     .L0040F904
/* 0040FB30 8F8689CC */   lw     $a2, %got(nocopy)($gp)
.L0040FB34:
/* 0040FB34 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0040FB38 8F868044 */  lw    $a2, %got(RO_1000A150)($gp)
/* 0040FB3C 24040001 */  li    $a0, 1
/* 0040FB40 2405002D */  li    $a1, 45
/* 0040FB44 24070008 */  li    $a3, 8
/* 0040FB48 0320F809 */  jalr  $t9
/* 0040FB4C 24C6A150 */   addiu $a2, %lo(RO_1000A150) # addiu $a2, $a2, -0x5eb0
/* 0040FB50 8FBC0028 */  lw    $gp, 0x28($sp)
.L0040FB54:
/* 0040FB54 8FBF002C */  lw    $ra, 0x2c($sp)
.L0040FB58:
/* 0040FB58 8FB00018 */  lw    $s0, 0x18($sp)
/* 0040FB5C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0040FB60 8FB20020 */  lw    $s2, 0x20($sp)
/* 0040FB64 8FB30024 */  lw    $s3, 0x24($sp)
/* 0040FB68 03E00008 */  jr    $ra
/* 0040FB6C 27BD0030 */   addiu $sp, $sp, 0x30
    .type resetsubdelete, @function
    .size resetsubdelete, .-resetsubdelete
    .end resetsubdelete

glabel setsubinsert
    .ent setsubinsert
    # 00410204 codemotion
/* 0040FB70 3C1C0FC1 */  .cpload $t9
/* 0040FB74 279CA720 */  
/* 0040FB78 0399E021 */  
/* 0040FB7C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0040FB80 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040FB84 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040FB88 AFA50024 */  sw    $a1, 0x24($sp)
/* 0040FB8C 908E0000 */  lbu   $t6, ($a0)
/* 0040FB90 3C010E00 */  lui   $at, 0xe00
/* 0040FB94 00803025 */  move  $a2, $a0
/* 0040FB98 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0040FB9C 000FC023 */  negu  $t8, $t7
/* 0040FBA0 0301C824 */  and   $t9, $t8, $at
/* 0040FBA4 01D94004 */  sllv  $t0, $t9, $t6
/* 0040FBA8 05030010 */  bgezl $t0, .L0040FBEC
/* 0040FBAC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0040FBB0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0040FBB4 94840002 */  lhu   $a0, 2($a0)
/* 0040FBB8 AFA60020 */  sw    $a2, 0x20($sp)
/* 0040FBBC 0320F809 */  jalr  $t9
/* 0040FBC0 24A50164 */   addiu $a1, $a1, 0x164
/* 0040FBC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040FBC8 14400007 */  bnez  $v0, .L0040FBE8
/* 0040FBCC 8FA60020 */   lw    $a2, 0x20($sp)
/* 0040FBD0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0040FBD4 8FA40024 */  lw    $a0, 0x24($sp)
/* 0040FBD8 94C50002 */  lhu   $a1, 2($a2)
/* 0040FBDC 0320F809 */  jalr  $t9
/* 0040FBE0 2484014C */   addiu $a0, $a0, 0x14c
/* 0040FBE4 8FBC0018 */  lw    $gp, 0x18($sp)
.L0040FBE8:
/* 0040FBE8 8FBF001C */  lw    $ra, 0x1c($sp)
.L0040FBEC:
/* 0040FBEC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0040FBF0 03E00008 */  jr    $ra
/* 0040FBF4 00000000 */   nop   
    .type setsubinsert, @function
    .size setsubinsert, .-setsubinsert
    .end setsubinsert

glabel has_assert
    .ent has_assert
    # 00410204 codemotion
/* 0040FBF8 8C820014 */  lw    $v0, 0x14($a0)
/* 0040FBFC 54400004 */  bnezl $v0, .L0040FC10
/* 0040FC00 8C4E0004 */   lw    $t6, 4($v0)
/* 0040FC04 03E00008 */  jr    $ra
/* 0040FC08 00001025 */   move  $v0, $zero

/* 0040FC0C 8C4E0004 */  lw    $t6, 4($v0)
.L0040FC10:
/* 0040FC10 55C00031 */  bnezl $t6, .L0040FCD8
/* 0040FC14 8C4C0000 */   lw    $t4, ($v0)
/* 0040FC18 8C430000 */  lw    $v1, ($v0)
/* 0040FC1C 8C640020 */  lw    $a0, 0x20($v1)
/* 0040FC20 908F0000 */  lbu   $t7, ($a0)
/* 0040FC24 25F8FFE0 */  addiu $t8, $t7, -0x20
/* 0040FC28 2F190060 */  sltiu $t9, $t8, 0x60
/* 0040FC2C 13200009 */  beqz  $t9, .L0040FC54
/* 0040FC30 00000000 */   nop   
/* 0040FC34 8F8A8044 */  lw    $t2, %got(D_1000FD48)($gp)
/* 0040FC38 00184143 */  sra   $t0, $t8, 5
/* 0040FC3C 00084880 */  sll   $t1, $t0, 2
/* 0040FC40 254AFD48 */  addiu $t2, %lo(D_1000FD48) # addiu $t2, $t2, -0x2b8
/* 0040FC44 01495821 */  addu  $t3, $t2, $t1
/* 0040FC48 8D6C0000 */  lw    $t4, ($t3)
/* 0040FC4C 030C6804 */  sllv  $t5, $t4, $t8
/* 0040FC50 29B90000 */  slti  $t9, $t5, 0
.L0040FC54:
/* 0040FC54 1320001D */  beqz  $t9, .L0040FCCC
/* 0040FC58 00000000 */   nop   
/* 0040FC5C 8C6F0018 */  lw    $t7, 0x18($v1)
/* 0040FC60 8DE80004 */  lw    $t0, 4($t7)
/* 0040FC64 11000019 */  beqz  $t0, .L0040FCCC
/* 0040FC68 00000000 */   nop   
/* 0040FC6C 8C8A0004 */  lw    $t2, 4($a0)
/* 0040FC70 ACA40000 */  sw    $a0, ($a1)
/* 0040FC74 91430000 */  lbu   $v1, ($t2)
/* 0040FC78 38630004 */  xori  $v1, $v1, 4
/* 0040FC7C 2C630001 */  sltiu $v1, $v1, 1
/* 0040FC80 10600010 */  beqz  $v1, .L0040FCC4
/* 0040FC84 00000000 */   nop   
/* 0040FC88 8C8B0004 */  lw    $t3, 4($a0)
/* 0040FC8C 916C0020 */  lbu   $t4, 0x20($t3)
/* 0040FC90 2598FFE0 */  addiu $t8, $t4, -0x20
/* 0040FC94 2F0D0040 */  sltiu $t5, $t8, 0x40
/* 0040FC98 51A0000A */  beql  $t5, $zero, .L0040FCC4
/* 0040FC9C 01A01825 */   move  $v1, $t5
/* 0040FCA0 8F8F8044 */  lw    $t7, %got(D_1000FD40)($gp)
/* 0040FCA4 00187143 */  sra   $t6, $t8, 5
/* 0040FCA8 000EC880 */  sll   $t9, $t6, 2
/* 0040FCAC 25EFFD40 */  addiu $t7, %lo(D_1000FD40) # addiu $t7, $t7, -0x2c0
/* 0040FCB0 01F94021 */  addu  $t0, $t7, $t9
/* 0040FCB4 8D0A0000 */  lw    $t2, ($t0)
/* 0040FCB8 030A4804 */  sllv  $t1, $t2, $t8
/* 0040FCBC 292D0000 */  slti  $t5, $t1, 0
/* 0040FCC0 01A01825 */  move  $v1, $t5
.L0040FCC4:
/* 0040FCC4 03E00008 */  jr    $ra
/* 0040FCC8 00601025 */   move  $v0, $v1

.L0040FCCC:
/* 0040FCCC 03E00008 */  jr    $ra
/* 0040FCD0 00001025 */   move  $v0, $zero

/* 0040FCD4 8C4C0000 */  lw    $t4, ($v0)
.L0040FCD8:
/* 0040FCD8 00401825 */  move  $v1, $v0
/* 0040FCDC 8D840020 */  lw    $a0, 0x20($t4)
/* 0040FCE0 90860000 */  lbu   $a2, ($a0)
/* 0040FCE4 24C6FFE0 */  addiu $a2, $a2, -0x20
/* 0040FCE8 2CCE0060 */  sltiu $t6, $a2, 0x60
/* 0040FCEC 11C00009 */  beqz  $t6, .L0040FD14
/* 0040FCF0 00000000 */   nop   
/* 0040FCF4 8F888044 */  lw    $t0, %got(D_1000FD48)($gp)
/* 0040FCF8 00067943 */  sra   $t7, $a2, 5
/* 0040FCFC 000FC880 */  sll   $t9, $t7, 2
/* 0040FD00 2508FD48 */  addiu $t0, %lo(D_1000FD48) # addiu $t0, $t0, -0x2b8
/* 0040FD04 01195021 */  addu  $t2, $t0, $t9
/* 0040FD08 8D580000 */  lw    $t8, ($t2)
/* 0040FD0C 00D84804 */  sllv  $t1, $t8, $a2
/* 0040FD10 292E0000 */  slti  $t6, $t1, 0
.L0040FD14:
/* 0040FD14 55C00007 */  bnezl $t6, .L0040FD34
/* 0040FD18 2CCC0060 */   sltiu $t4, $a2, 0x60
/* 0040FD1C 8C630004 */  lw    $v1, 4($v1)
/* 0040FD20 8C6D0000 */  lw    $t5, ($v1)
/* 0040FD24 8DA40020 */  lw    $a0, 0x20($t5)
/* 0040FD28 90860000 */  lbu   $a2, ($a0)
/* 0040FD2C 24C6FFE0 */  addiu $a2, $a2, -0x20
/* 0040FD30 2CCC0060 */  sltiu $t4, $a2, 0x60
.L0040FD34:
/* 0040FD34 11800009 */  beqz  $t4, .L0040FD5C
/* 0040FD38 00000000 */   nop   
/* 0040FD3C 8F998044 */  lw    $t9, %got(D_1000FD48)($gp)
/* 0040FD40 00067943 */  sra   $t7, $a2, 5
/* 0040FD44 000F4080 */  sll   $t0, $t7, 2
/* 0040FD48 2739FD48 */  addiu $t9, %lo(D_1000FD48) # addiu $t9, $t9, -0x2b8
/* 0040FD4C 03285021 */  addu  $t2, $t9, $t0
/* 0040FD50 8D580000 */  lw    $t8, ($t2)
/* 0040FD54 00D84804 */  sllv  $t1, $t8, $a2
/* 0040FD58 292C0000 */  slti  $t4, $t1, 0
.L0040FD5C:
/* 0040FD5C 55800004 */  bnezl $t4, .L0040FD70
/* 0040FD60 ACA40000 */   sw    $a0, ($a1)
/* 0040FD64 03E00008 */  jr    $ra
/* 0040FD68 00001025 */   move  $v0, $zero

/* 0040FD6C ACA40000 */  sw    $a0, ($a1)
.L0040FD70:
/* 0040FD70 8C82001C */  lw    $v0, 0x1c($a0)
/* 0040FD74 0002102B */  sltu  $v0, $zero, $v0
/* 0040FD78 03E00008 */  jr    $ra
/* 0040FD7C 00000000 */   nop   
    .type has_assert, @function
    .size has_assert, .-has_assert
    .end has_assert

glabel trap_implying
    .ent trap_implying
    # 00410204 codemotion
/* 0040FD80 3C1C0FC1 */  .cpload $t9
/* 0040FD84 279CA510 */  
/* 0040FD88 0399E021 */  
/* 0040FD8C 90EE0000 */  lbu   $t6, ($a3)
/* 0040FD90 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040FD94 24010004 */  li    $at, 4
/* 0040FD98 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040FD9C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040FDA0 11C10003 */  beq   $t6, $at, .L0040FDB0
/* 0040FDA4 AFA40028 */   sw    $a0, 0x28($sp)
/* 0040FDA8 10000071 */  b     .L0040FF70
/* 0040FDAC 00001025 */   move  $v0, $zero
.L0040FDB0:
/* 0040FDB0 90EF0010 */  lbu   $t7, 0x10($a3)
/* 0040FDB4 148F0005 */  bne   $a0, $t7, .L0040FDCC
/* 0040FDB8 00000000 */   nop   
/* 0040FDBC 8CF80014 */  lw    $t8, 0x14($a3)
/* 0040FDC0 308200FF */  andi  $v0, $a0, 0xff
/* 0040FDC4 50B80004 */  beql  $a1, $t8, .L0040FDD8
/* 0040FDC8 2459FF7F */   addiu $t9, $v0, -0x81
.L0040FDCC:
/* 0040FDCC 10000068 */  b     .L0040FF70
/* 0040FDD0 00001025 */   move  $v0, $zero
/* 0040FDD4 2459FF7F */  addiu $t9, $v0, -0x81
.L0040FDD8:
/* 0040FDD8 2F210004 */  sltiu $at, $t9, 4
/* 0040FDDC 1020005C */  beqz  $at, .L0040FF50
/* 0040FDE0 24040001 */   li    $a0, 1
/* 0040FDE4 8F818044 */  lw    $at, %got(jtbl_1000A16C)($gp)
/* 0040FDE8 0019C880 */  sll   $t9, $t9, 2
/* 0040FDEC 00390821 */  addu  $at, $at, $t9
/* 0040FDF0 8C39A16C */  lw    $t9, %lo(jtbl_1000A16C)($at)
/* 0040FDF4 033CC821 */  addu  $t9, $t9, $gp
/* 0040FDF8 03200008 */  jr    $t9
/* 0040FDFC 00000000 */   nop   
.L0040FE00:
/* 0040FE00 90E20001 */  lbu   $v0, 1($a3)
/* 0040FE04 24010006 */  li    $at, 6
/* 0040FE08 54410008 */  bnel  $v0, $at, .L0040FE2C
/* 0040FE0C 24010008 */   li    $at, 8
/* 0040FE10 8CE80018 */  lw    $t0, 0x18($a3)
/* 0040FE14 8CCA0000 */  lw    $t2, ($a2)
/* 0040FE18 8D090010 */  lw    $t1, 0x10($t0)
/* 0040FE1C 012A102A */  slt   $v0, $t1, $t2
/* 0040FE20 10000053 */  b     .L0040FF70
/* 0040FE24 38420001 */   xori  $v0, $v0, 1
/* 0040FE28 24010008 */  li    $at, 8
.L0040FE2C:
/* 0040FE2C 14410007 */  bne   $v0, $at, .L0040FE4C
/* 0040FE30 00000000 */   nop   
/* 0040FE34 8CEB0018 */  lw    $t3, 0x18($a3)
/* 0040FE38 8CCD0000 */  lw    $t5, ($a2)
/* 0040FE3C 8D6C0010 */  lw    $t4, 0x10($t3)
/* 0040FE40 018D102B */  sltu  $v0, $t4, $t5
/* 0040FE44 1000004A */  b     .L0040FF70
/* 0040FE48 38420001 */   xori  $v0, $v0, 1
.L0040FE4C:
/* 0040FE4C 10000048 */  b     .L0040FF70
/* 0040FE50 00001025 */   move  $v0, $zero
.L0040FE54:
/* 0040FE54 90E20001 */  lbu   $v0, 1($a3)
/* 0040FE58 24010006 */  li    $at, 6
/* 0040FE5C 54410008 */  bnel  $v0, $at, .L0040FE80
/* 0040FE60 24010008 */   li    $at, 8
/* 0040FE64 8CEE0018 */  lw    $t6, 0x18($a3)
/* 0040FE68 8CD80000 */  lw    $t8, ($a2)
/* 0040FE6C 8DCF0010 */  lw    $t7, 0x10($t6)
/* 0040FE70 01F8102A */  slt   $v0, $t7, $t8
/* 0040FE74 1000003E */  b     .L0040FF70
/* 0040FE78 38420001 */   xori  $v0, $v0, 1
/* 0040FE7C 24010008 */  li    $at, 8
.L0040FE80:
/* 0040FE80 14410007 */  bne   $v0, $at, .L0040FEA0
/* 0040FE84 00000000 */   nop   
/* 0040FE88 8CF90018 */  lw    $t9, 0x18($a3)
/* 0040FE8C 8CC90000 */  lw    $t1, ($a2)
/* 0040FE90 8F280010 */  lw    $t0, 0x10($t9)
/* 0040FE94 0109102B */  sltu  $v0, $t0, $t1
/* 0040FE98 10000035 */  b     .L0040FF70
/* 0040FE9C 38420001 */   xori  $v0, $v0, 1
.L0040FEA0:
/* 0040FEA0 10000033 */  b     .L0040FF70
/* 0040FEA4 00001025 */   move  $v0, $zero
.L0040FEA8:
/* 0040FEA8 90E20001 */  lbu   $v0, 1($a3)
/* 0040FEAC 24010006 */  li    $at, 6
/* 0040FEB0 54410008 */  bnel  $v0, $at, .L0040FED4
/* 0040FEB4 24010008 */   li    $at, 8
/* 0040FEB8 8CEB0018 */  lw    $t3, 0x18($a3)
/* 0040FEBC 8CCA0000 */  lw    $t2, ($a2)
/* 0040FEC0 8D6C0010 */  lw    $t4, 0x10($t3)
/* 0040FEC4 014C102A */  slt   $v0, $t2, $t4
/* 0040FEC8 10000029 */  b     .L0040FF70
/* 0040FECC 38420001 */   xori  $v0, $v0, 1
/* 0040FED0 24010008 */  li    $at, 8
.L0040FED4:
/* 0040FED4 14410007 */  bne   $v0, $at, .L0040FEF4
/* 0040FED8 00000000 */   nop   
/* 0040FEDC 8CEE0018 */  lw    $t6, 0x18($a3)
/* 0040FEE0 8CCD0000 */  lw    $t5, ($a2)
/* 0040FEE4 8DCF0010 */  lw    $t7, 0x10($t6)
/* 0040FEE8 01AF102B */  sltu  $v0, $t5, $t7
/* 0040FEEC 10000020 */  b     .L0040FF70
/* 0040FEF0 38420001 */   xori  $v0, $v0, 1
.L0040FEF4:
/* 0040FEF4 1000001E */  b     .L0040FF70
/* 0040FEF8 00001025 */   move  $v0, $zero
.L0040FEFC:
/* 0040FEFC 90E20001 */  lbu   $v0, 1($a3)
/* 0040FF00 24010006 */  li    $at, 6
/* 0040FF04 54410008 */  bnel  $v0, $at, .L0040FF28
/* 0040FF08 24010008 */   li    $at, 8
/* 0040FF0C 8CF90018 */  lw    $t9, 0x18($a3)
/* 0040FF10 8CD80000 */  lw    $t8, ($a2)
/* 0040FF14 8F280010 */  lw    $t0, 0x10($t9)
/* 0040FF18 0308102A */  slt   $v0, $t8, $t0
/* 0040FF1C 10000014 */  b     .L0040FF70
/* 0040FF20 38420001 */   xori  $v0, $v0, 1
/* 0040FF24 24010008 */  li    $at, 8
.L0040FF28:
/* 0040FF28 14410007 */  bne   $v0, $at, .L0040FF48
/* 0040FF2C 00000000 */   nop   
/* 0040FF30 8CEB0018 */  lw    $t3, 0x18($a3)
/* 0040FF34 8CC90000 */  lw    $t1, ($a2)
/* 0040FF38 8D6A0010 */  lw    $t2, 0x10($t3)
/* 0040FF3C 012A102B */  sltu  $v0, $t1, $t2
/* 0040FF40 1000000B */  b     .L0040FF70
/* 0040FF44 38420001 */   xori  $v0, $v0, 1
.L0040FF48:
/* 0040FF48 10000009 */  b     .L0040FF70
/* 0040FF4C 00001025 */   move  $v0, $zero
.L0040FF50:
/* 0040FF50 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0040FF54 8F868044 */  lw    $a2, %got(RO_1000A164)($gp)
/* 0040FF58 2405008D */  li    $a1, 141
/* 0040FF5C 24070008 */  li    $a3, 8
/* 0040FF60 0320F809 */  jalr  $t9
/* 0040FF64 24C6A164 */   addiu $a2, %lo(RO_1000A164) # addiu $a2, $a2, -0x5e9c
/* 0040FF68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040FF6C 93A20027 */  lbu   $v0, 0x27($sp)
.L0040FF70:
/* 0040FF70 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040FF74 27BD0028 */  addiu $sp, $sp, 0x28
/* 0040FF78 03E00008 */  jr    $ra
/* 0040FF7C 00000000 */   nop   
    .type trap_implying, @function
    .size trap_implying, .-trap_implying
    .end trap_implying

glabel trap_implying_v
    .ent trap_implying_v
    # 00410204 codemotion
/* 0040FF80 3C1C0FC1 */  .cpload $t9
/* 0040FF84 279CA310 */  
/* 0040FF88 0399E021 */  
/* 0040FF8C 90EE0000 */  lbu   $t6, ($a3)
/* 0040FF90 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040FF94 24010004 */  li    $at, 4
/* 0040FF98 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040FF9C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040FFA0 11C10003 */  beq   $t6, $at, .L0040FFB0
/* 0040FFA4 AFA40028 */   sw    $a0, 0x28($sp)
/* 0040FFA8 10000037 */  b     .L00410088
/* 0040FFAC 00001025 */   move  $v0, $zero
.L0040FFB0:
/* 0040FFB0 8CEF0014 */  lw    $t7, 0x14($a3)
/* 0040FFB4 14AF0005 */  bne   $a1, $t7, .L0040FFCC
/* 0040FFB8 00000000 */   nop   
/* 0040FFBC 8CF80018 */  lw    $t8, 0x18($a3)
/* 0040FFC0 308200FF */  andi  $v0, $a0, 0xff
/* 0040FFC4 50D80004 */  beql  $a2, $t8, .L0040FFD8
/* 0040FFC8 2459FF7F */   addiu $t9, $v0, -0x81
.L0040FFCC:
/* 0040FFCC 1000002E */  b     .L00410088
/* 0040FFD0 00001025 */   move  $v0, $zero
/* 0040FFD4 2459FF7F */  addiu $t9, $v0, -0x81
.L0040FFD8:
/* 0040FFD8 2F210004 */  sltiu $at, $t9, 4
/* 0040FFDC 10200022 */  beqz  $at, .L00410068
/* 0040FFE0 24040001 */   li    $a0, 1
/* 0040FFE4 8F818044 */  lw    $at, %got(jtbl_1000A184)($gp)
/* 0040FFE8 0019C880 */  sll   $t9, $t9, 2
/* 0040FFEC 00390821 */  addu  $at, $at, $t9
/* 0040FFF0 8C39A184 */  lw    $t9, %lo(jtbl_1000A184)($at)
/* 0040FFF4 033CC821 */  addu  $t9, $t9, $gp
/* 0040FFF8 03200008 */  jr    $t9
/* 0040FFFC 00000000 */   nop   
.L00410000:
/* 00410000 90E20010 */  lbu   $v0, 0x10($a3)
/* 00410004 38430083 */  xori  $v1, $v0, 0x83
/* 00410008 2C630001 */  sltiu $v1, $v1, 1
/* 0041000C 14600003 */  bnez  $v1, .L0041001C
/* 00410010 00000000 */   nop   
/* 00410014 38430084 */  xori  $v1, $v0, 0x84
/* 00410018 2C630001 */  sltiu $v1, $v1, 1
.L0041001C:
/* 0041001C 1000001A */  b     .L00410088
/* 00410020 00601025 */   move  $v0, $v1
.L00410024:
/* 00410024 90E20010 */  lbu   $v0, 0x10($a3)
/* 00410028 38420084 */  xori  $v0, $v0, 0x84
/* 0041002C 10000016 */  b     .L00410088
/* 00410030 2C420001 */   sltiu $v0, $v0, 1
.L00410034:
/* 00410034 90E20010 */  lbu   $v0, 0x10($a3)
/* 00410038 38420082 */  xori  $v0, $v0, 0x82
/* 0041003C 10000012 */  b     .L00410088
/* 00410040 2C420001 */   sltiu $v0, $v0, 1
.L00410044:
/* 00410044 90E20010 */  lbu   $v0, 0x10($a3)
/* 00410048 38430081 */  xori  $v1, $v0, 0x81
/* 0041004C 2C630001 */  sltiu $v1, $v1, 1
/* 00410050 14600003 */  bnez  $v1, .L00410060
/* 00410054 00000000 */   nop   
/* 00410058 38430082 */  xori  $v1, $v0, 0x82
/* 0041005C 2C630001 */  sltiu $v1, $v1, 1
.L00410060:
/* 00410060 10000009 */  b     .L00410088
/* 00410064 00601025 */   move  $v0, $v1
.L00410068:
/* 00410068 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0041006C 8F868044 */  lw    $a2, %got(RO_1000A17C)($gp)
/* 00410070 240500AC */  li    $a1, 172
/* 00410074 24070008 */  li    $a3, 8
/* 00410078 0320F809 */  jalr  $t9
/* 0041007C 24C6A17C */   addiu $a2, %lo(RO_1000A17C) # addiu $a2, $a2, -0x5e84
/* 00410080 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00410084 93A20027 */  lbu   $v0, 0x27($sp)
.L00410088:
/* 00410088 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041008C 27BD0028 */  addiu $sp, $sp, 0x28
/* 00410090 03E00008 */  jr    $ra
/* 00410094 00000000 */   nop   
    .type trap_implying_v, @function
    .size trap_implying_v, .-trap_implying_v
    .end trap_implying_v

glabel delete_unmoved_recur
    .ent delete_unmoved_recur
    # 00410204 codemotion
/* 00410098 3C1C0FC1 */  .cpload $t9
/* 0041009C 279CA1F8 */  
/* 004100A0 0399E021 */  
/* 004100A4 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004100A8 AFBF0034 */  sw    $ra, 0x34($sp)
/* 004100AC AFBC0030 */  sw    $gp, 0x30($sp)
/* 004100B0 AFB5002C */  sw    $s5, 0x2c($sp)
/* 004100B4 AFB40028 */  sw    $s4, 0x28($sp)
/* 004100B8 AFB30024 */  sw    $s3, 0x24($sp)
/* 004100BC AFB20020 */  sw    $s2, 0x20($sp)
/* 004100C0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004100C4 AFB00018 */  sw    $s0, 0x18($sp)
/* 004100C8 8C820030 */  lw    $v0, 0x30($a0)
/* 004100CC 00809025 */  move  $s2, $a0
/* 004100D0 00A0A025 */  move  $s4, $a1
/* 004100D4 10400042 */  beqz  $v0, .L004101E0
/* 004100D8 00008825 */   move  $s1, $zero
/* 004100DC 00408025 */  move  $s0, $v0
/* 004100E0 24B5012C */  addiu $s5, $a1, 0x12c
/* 004100E4 24B3016C */  addiu $s3, $a1, 0x16c
.L004100E8:
/* 004100E8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004100EC 8E0E0000 */  lw    $t6, ($s0)
/* 004100F0 02A02825 */  move  $a1, $s5
/* 004100F4 0320F809 */  jalr  $t9
/* 004100F8 95C40002 */   lhu   $a0, 2($t6)
/* 004100FC 10400012 */  beqz  $v0, .L00410148
/* 00410100 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00410104 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00410108 8E0F0000 */  lw    $t7, ($s0)
/* 0041010C 02602825 */  move  $a1, $s3
/* 00410110 0320F809 */  jalr  $t9
/* 00410114 95E40002 */   lhu   $a0, 2($t7)
/* 00410118 10400003 */  beqz  $v0, .L00410128
/* 0041011C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00410120 10000019 */  b     .L00410188
/* 00410124 24030001 */   li    $v1, 1
.L00410128:
/* 00410128 8F9985E4 */  lw    $t9, %call16(inpathafter)($gp)
/* 0041012C 8E040000 */  lw    $a0, ($s0)
/* 00410130 02402825 */  move  $a1, $s2
/* 00410134 0320F809 */  jalr  $t9
/* 00410138 00000000 */   nop   
/* 0041013C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00410140 10000011 */  b     .L00410188
/* 00410144 304300FF */   andi  $v1, $v0, 0xff
.L00410148:
/* 00410148 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0041014C 8E180000 */  lw    $t8, ($s0)
/* 00410150 02602825 */  move  $a1, $s3
/* 00410154 0320F809 */  jalr  $t9
/* 00410158 97040002 */   lhu   $a0, 2($t8)
/* 0041015C 10400009 */  beqz  $v0, .L00410184
/* 00410160 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00410164 8F9985E0 */  lw    $t9, %call16(inpathbefore)($gp)
/* 00410168 8E040000 */  lw    $a0, ($s0)
/* 0041016C 02402825 */  move  $a1, $s2
/* 00410170 0320F809 */  jalr  $t9
/* 00410174 00000000 */   nop   
/* 00410178 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041017C 10000002 */  b     .L00410188
/* 00410180 304300FF */   andi  $v1, $v0, 0xff
.L00410184:
/* 00410184 00001825 */  move  $v1, $zero
.L00410188:
/* 00410188 1460000B */  bnez  $v1, .L004101B8
/* 0041018C 00000000 */   nop   
/* 00410190 8E020004 */  lw    $v0, 4($s0)
/* 00410194 94590006 */  lhu   $t9, 6($v0)
/* 00410198 2728FFFF */  addiu $t0, $t9, -1
/* 0041019C A4480006 */  sh    $t0, 6($v0)
/* 004101A0 16200003 */  bnez  $s1, .L004101B0
/* 004101A4 8E100008 */   lw    $s0, 8($s0)
/* 004101A8 1000000B */  b     .L004101D8
/* 004101AC AE500030 */   sw    $s0, 0x30($s2)
.L004101B0:
/* 004101B0 10000009 */  b     .L004101D8
/* 004101B4 AE300008 */   sw    $s0, 8($s1)
.L004101B8:
/* 004101B8 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 004101BC 8E040004 */  lw    $a0, 4($s0)
/* 004101C0 02802825 */  move  $a1, $s4
/* 004101C4 0320F809 */  jalr  $t9
/* 004101C8 00000000 */   nop   
/* 004101CC 02008825 */  move  $s1, $s0
/* 004101D0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004101D4 8E100008 */  lw    $s0, 8($s0)
.L004101D8:
/* 004101D8 1600FFC3 */  bnez  $s0, .L004100E8
/* 004101DC 00000000 */   nop   
.L004101E0:
/* 004101E0 8FBF0034 */  lw    $ra, 0x34($sp)
/* 004101E4 8FB00018 */  lw    $s0, 0x18($sp)
/* 004101E8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004101EC 8FB20020 */  lw    $s2, 0x20($sp)
/* 004101F0 8FB30024 */  lw    $s3, 0x24($sp)
/* 004101F4 8FB40028 */  lw    $s4, 0x28($sp)
/* 004101F8 8FB5002C */  lw    $s5, 0x2c($sp)
/* 004101FC 03E00008 */  jr    $ra
/* 00410200 27BD0038 */   addiu $sp, $sp, 0x38
    .type delete_unmoved_recur, @function
    .size delete_unmoved_recur, .-delete_unmoved_recur
    .end delete_unmoved_recur

glabel codemotion
    .ent codemotion
    # 00456A2C oneproc
/* 00410204 3C1C0FC1 */  .cpload $t9
/* 00410208 279CA08C */  
/* 0041020C 0399E021 */  
/* 00410210 27BDFE08 */  addiu $sp, $sp, -0x1f8
/* 00410214 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00410218 AFBF0044 */  sw    $ra, 0x44($sp)
/* 0041021C AFBE0040 */  sw    $fp, 0x40($sp)
/* 00410220 AFBC003C */  sw    $gp, 0x3c($sp)
/* 00410224 AFB70038 */  sw    $s7, 0x38($sp)
/* 00410228 AFB60034 */  sw    $s6, 0x34($sp)
/* 0041022C AFB50030 */  sw    $s5, 0x30($sp)
/* 00410230 AFB4002C */  sw    $s4, 0x2c($sp)
/* 00410234 AFB30028 */  sw    $s3, 0x28($sp)
/* 00410238 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041023C AFB10020 */  sw    $s1, 0x20($sp)
/* 00410240 0320F809 */  jalr  $t9
/* 00410244 AFB0001C */   sw    $s0, 0x1c($sp)
/* 00410248 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041024C 8F818BE8 */  lw     $at, %got(lastdftime)($gp)
/* 00410250 8F838BE0 */  lw     $v1, %got(numdataflow)($gp)
/* 00410254 8F848CD4 */  lw     $a0, %got(varbits)($gp)
/* 00410258 AC220000 */  sw    $v0, ($at)
/* 0041025C 8C6E0000 */  lw    $t6, ($v1)
/* 00410260 8F858CE4 */  lw     $a1, %got(slvarbits)($gp)
/* 00410264 25CF0004 */  addiu $t7, $t6, 4
/* 00410268 AC6F0000 */  sw    $t7, ($v1)
/* 0041026C 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00410270 0320F809 */  jalr  $t9
/* 00410274 00000000 */   nop   
/* 00410278 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041027C 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00410280 8F848CE0 */  lw     $a0, %got(asgnbits)($gp)
/* 00410284 8F858CE8 */  lw     $a1, %got(slasgnbits)($gp)
/* 00410288 0320F809 */  jalr  $t9
/* 0041028C 00000000 */   nop   
/* 00410290 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410294 93B301BB */  lbu   $s3, 0x1bb($sp)
/* 00410298 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 0041029C 8EB50000 */  lw    $s5, ($s5)
/* 004102A0 12A00225 */  beqz  $s5, .L00410B38
/* 004102A4 00000000 */   nop   
/* 004102A8 27BE01C0 */  addiu $fp, $sp, 0x1c0
.L004102AC:
/* 004102AC 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004102B0 26B4012C */  addiu $s4, $s5, 0x12c
/* 004102B4 02802025 */  move  $a0, $s4
/* 004102B8 0320F809 */  jalr  $t9
/* 004102BC 00000000 */   nop   
/* 004102C0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004102C4 26B0013C */  addiu $s0, $s5, 0x13c
/* 004102C8 02002825 */  move  $a1, $s0
/* 004102CC 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 004102D0 26B2010C */  addiu $s2, $s5, 0x10c
/* 004102D4 8F180000 */  lw    $t8, ($t8)
/* 004102D8 93190015 */  lbu   $t9, 0x15($t8)
/* 004102DC 13200018 */  beqz  $t9, .L00410340
/* 004102E0 00000000 */   nop   
/* 004102E4 8F9981B4 */  lw    $t9, %call16(minusminus)($gp)
/* 004102E8 26B2010C */  addiu $s2, $s5, 0x10c
/* 004102EC 02402025 */  move  $a0, $s2
/* 004102F0 0320F809 */  jalr  $t9
/* 004102F4 8F868CF4 */   lw     $a2, %got(trapconstop)($gp)
/* 004102F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004102FC 26A40104 */  addiu $a0, $s5, 0x104
/* 00410300 02802825 */  move  $a1, $s4
/* 00410304 8F9981BC */  lw    $t9, %call16(uintsectminus)($gp)
/* 00410308 02003025 */  move  $a2, $s0
/* 0041030C 8F878CF4 */  lw     $a3, %got(trapconstop)($gp)
/* 00410310 0320F809 */  jalr  $t9
/* 00410314 00000000 */   nop   
/* 00410318 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041031C 26B10114 */  addiu $s1, $s5, 0x114
/* 00410320 02202025 */  move  $a0, $s1
/* 00410324 8F9981BC */  lw    $t9, %call16(uintsectminus)($gp)
/* 00410328 02802825 */  move  $a1, $s4
/* 0041032C 02003025 */  move  $a2, $s0
/* 00410330 0320F809 */  jalr  $t9
/* 00410334 8F878CF4 */   lw     $a3, %got(trapconstop)($gp)
/* 00410338 10000016 */  b     .L00410394
/* 0041033C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00410340:
/* 00410340 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00410344 26B0013C */  addiu $s0, $s5, 0x13c
/* 00410348 02002825 */  move  $a1, $s0
/* 0041034C 0320F809 */  jalr  $t9
/* 00410350 02402025 */   move  $a0, $s2
/* 00410354 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410358 26A40104 */  addiu $a0, $s5, 0x104
/* 0041035C 02802825 */  move  $a1, $s4
/* 00410360 8F9981B8 */  lw    $t9, %call16(unionintsect)($gp)
/* 00410364 02003025 */  move  $a2, $s0
/* 00410368 0320F809 */  jalr  $t9
/* 0041036C 00000000 */   nop   
/* 00410370 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410374 26B10114 */  addiu $s1, $s5, 0x114
/* 00410378 02202025 */  move  $a0, $s1
/* 0041037C 8F9981B8 */  lw    $t9, %call16(unionintsect)($gp)
/* 00410380 02802825 */  move  $a1, $s4
/* 00410384 02003025 */  move  $a2, $s0
/* 00410388 0320F809 */  jalr  $t9
/* 0041038C 00000000 */   nop   
/* 00410390 8FBC003C */  lw    $gp, 0x3c($sp)
.L00410394:
/* 00410394 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00410398 26B60124 */  addiu $s6, $s5, 0x124
/* 0041039C 02C02025 */  move  $a0, $s6
/* 004103A0 0320F809 */  jalr  $t9
/* 004103A4 02202825 */   move  $a1, $s1
/* 004103A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004103AC 26B1011C */  addiu $s1, $s5, 0x11c
/* 004103B0 02202025 */  move  $a0, $s1
/* 004103B4 8F9981B0 */  lw    $t9, %call16(unionminus)($gp)
/* 004103B8 02402825 */  move  $a1, $s2
/* 004103BC 8F868CEC */  lw     $a2, %got(storeop)($gp)
/* 004103C0 0320F809 */  jalr  $t9
/* 004103C4 00000000 */   nop   
/* 004103C8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004103CC 8F888B6C */  lw     $t0, %got(curproc)($gp)
/* 004103D0 8D080000 */  lw    $t0, ($t0)
/* 004103D4 91090015 */  lbu   $t1, 0x15($t0)
/* 004103D8 11200107 */  beqz  $t1, .L004107F8
/* 004103DC 00000000 */   nop   
/* 004103E0 8F9981B8 */  lw    $t9, %call16(unionintsect)($gp)
/* 004103E4 02C02025 */  move  $a0, $s6
/* 004103E8 02802825 */  move  $a1, $s4
/* 004103EC 0320F809 */  jalr  $t9
/* 004103F0 02003025 */   move  $a2, $s0
/* 004103F4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004103F8 02202025 */  move  $a0, $s1
/* 004103FC 02002825 */  move  $a1, $s0
/* 00410400 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00410404 0320F809 */  jalr  $t9
/* 00410408 00000000 */   nop   
/* 0041040C AFA001A8 */  sw    $zero, 0x1a8($sp)
/* 00410410 AFA001AC */  sw    $zero, 0x1ac($sp)
/* 00410414 AFA001B0 */  sw    $zero, 0x1b0($sp)
/* 00410418 AFA001B4 */  sw    $zero, 0x1b4($sp)
/* 0041041C 27AA01A8 */  addiu $t2, $sp, 0x1a8
/* 00410420 8D4C0000 */  lw    $t4, ($t2)
/* 00410424 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410428 02802025 */  move  $a0, $s4
/* 0041042C AFAC0004 */  sw    $t4, 4($sp)
/* 00410430 8D4B0004 */  lw    $t3, 4($t2)
/* 00410434 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00410438 8FA50004 */  lw    $a1, 4($sp)
/* 0041043C AFAB0008 */  sw    $t3, 8($sp)
/* 00410440 8D470008 */  lw    $a3, 8($t2)
/* 00410444 8FA60008 */  lw    $a2, 8($sp)
/* 00410448 AFA7000C */  sw    $a3, 0xc($sp)
/* 0041044C 8D4B000C */  lw    $t3, 0xc($t2)
/* 00410450 0320F809 */  jalr  $t9
/* 00410454 AFAB0010 */   sw    $t3, 0x10($sp)
/* 00410458 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041045C 02A02025 */  move  $a0, $s5
/* 00410460 27A501E4 */  addiu $a1, $sp, 0x1e4
/* 00410464 8F9981F4 */  lw    $t9, %call16(has_assert)($gp)
/* 00410468 0320F809 */  jalr  $t9
/* 0041046C 00000000 */   nop   
/* 00410470 104000E1 */  beqz  $v0, .L004107F8
/* 00410474 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00410478 8EA20000 */  lw    $v0, ($s5)
/* 0041047C 8FB101E4 */  lw    $s1, 0x1e4($sp)
/* 00410480 54400008 */  bnezl $v0, .L004104A4
/* 00410484 8E2D0014 */   lw    $t5, 0x14($s1)
/* 00410488 8FB101E4 */  lw    $s1, 0x1e4($sp)
/* 0041048C 92230000 */  lbu   $v1, ($s1)
/* 00410490 38630026 */  xori  $v1, $v1, 0x26
/* 00410494 2C630001 */  sltiu $v1, $v1, 1
/* 00410498 1000000D */  b     .L004104D0
/* 0041049C 306300FF */   andi  $v1, $v1, 0xff
/* 004104A0 8E2D0014 */  lw    $t5, 0x14($s1)
.L004104A4:
/* 004104A4 55A20007 */  bnel  $t5, $v0, .L004104C4
/* 004104A8 92230000 */   lbu   $v1, ($s1)
/* 004104AC 92230000 */  lbu   $v1, ($s1)
/* 004104B0 3863007F */  xori  $v1, $v1, 0x7f
/* 004104B4 2C630001 */  sltiu $v1, $v1, 1
/* 004104B8 10000005 */  b     .L004104D0
/* 004104BC 306300FF */   andi  $v1, $v1, 0xff
/* 004104C0 92230000 */  lbu   $v1, ($s1)
.L004104C4:
/* 004104C4 38630026 */  xori  $v1, $v1, 0x26
/* 004104C8 2C630001 */  sltiu $v1, $v1, 1
/* 004104CC 306300FF */  andi  $v1, $v1, 0xff
.L004104D0:
/* 004104D0 8E22001C */  lw    $v0, 0x1c($s1)
/* 004104D4 04410004 */  bgez  $v0, .L004104E8
/* 004104D8 00000000 */   nop   
/* 004104DC 24130083 */  li    $s3, 131
/* 004104E0 10000061 */  b     .L00410668
/* 004104E4 8E230004 */   lw    $v1, 4($s1)
.L004104E8:
/* 004104E8 18400004 */  blez  $v0, .L004104FC
/* 004104EC 00000000 */   nop   
/* 004104F0 24130081 */  li    $s3, 129
/* 004104F4 1000005C */  b     .L00410668
/* 004104F8 8E230004 */   lw    $v1, 4($s1)
.L004104FC:
/* 004104FC 5460002E */  bnezl $v1, .L004105B8
/* 00410500 8E230004 */   lw    $v1, 4($s1)
/* 00410504 8E230004 */  lw    $v1, 4($s1)
/* 00410508 90620020 */  lbu   $v0, 0x20($v1)
/* 0041050C 2C41002A */  sltiu $at, $v0, 0x2a
/* 00410510 1420001E */  bnez  $at, .L0041058C
/* 00410514 244FFFD8 */   addiu $t7, $v0, -0x28
/* 00410518 244EFFB3 */  addiu $t6, $v0, -0x4d
/* 0041051C 2DC10002 */  sltiu $at, $t6, 2
/* 00410520 10200010 */  beqz  $at, .L00410564
/* 00410524 00000000 */   nop   
/* 00410528 8F818044 */  lw    $at, %got(jtbl_1000A1AC)($gp)
/* 0041052C 000E7080 */  sll   $t6, $t6, 2
/* 00410530 002E0821 */  addu  $at, $at, $t6
/* 00410534 8C2EA1AC */  lw    $t6, %lo(jtbl_1000A1AC)($at)
/* 00410538 01DC7021 */  addu  $t6, $t6, $gp
/* 0041053C 01C00008 */  jr    $t6
/* 00410540 00000000 */   nop   
.L00410544:
/* 00410544 10000048 */  b     .L00410668
/* 00410548 24130084 */   li    $s3, 132
.L0041054C:
/* 0041054C 10000046 */  b     .L00410668
/* 00410550 24130083 */   li    $s3, 131
.L00410554:
/* 00410554 10000044 */  b     .L00410668
/* 00410558 24130082 */   li    $s3, 130
.L0041055C:
/* 0041055C 10000042 */  b     .L00410668
/* 00410560 24130081 */   li    $s3, 129
.L00410564:
/* 00410564 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00410568 8F868044 */  lw    $a2, %got(RO_1000A19C)($gp)
/* 0041056C 24040001 */  li    $a0, 1
/* 00410570 24050121 */  li    $a1, 289
/* 00410574 24070008 */  li    $a3, 8
/* 00410578 0320F809 */  jalr  $t9
/* 0041057C 24C6A19C */   addiu $a2, %lo(RO_1000A19C) # addiu $a2, $a2, -0x5e64
/* 00410580 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410584 10000038 */  b     .L00410668
/* 00410588 8E230004 */   lw    $v1, 4($s1)
.L0041058C:
/* 0041058C 2DE10002 */  sltiu $at, $t7, 2
/* 00410590 1020FFF4 */  beqz  $at, .L00410564
/* 00410594 00000000 */   nop   
/* 00410598 8F818044 */  lw    $at, %got(jtbl_1000A1A4)($gp)
/* 0041059C 000F7880 */  sll   $t7, $t7, 2
/* 004105A0 002F0821 */  addu  $at, $at, $t7
/* 004105A4 8C2FA1A4 */  lw    $t7, %lo(jtbl_1000A1A4)($at)
/* 004105A8 01FC7821 */  addu  $t7, $t7, $gp
/* 004105AC 01E00008 */  jr    $t7
/* 004105B0 00000000 */   nop   
/* 004105B4 8E230004 */  lw    $v1, 4($s1)
.L004105B8:
/* 004105B8 10000013 */  b     .L00410608
/* 004105BC 90620020 */   lbu   $v0, 0x20($v1)
.L004105C0:
/* 004105C0 10000029 */  b     .L00410668
/* 004105C4 24130081 */   li    $s3, 129
.L004105C8:
/* 004105C8 10000027 */  b     .L00410668
/* 004105CC 24130082 */   li    $s3, 130
.L004105D0:
/* 004105D0 10000025 */  b     .L00410668
/* 004105D4 24130083 */   li    $s3, 131
.L004105D8:
/* 004105D8 10000023 */  b     .L00410668
/* 004105DC 24130084 */   li    $s3, 132
.L004105E0:
/* 004105E0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004105E4 8F868044 */  lw    $a2, %got(RO_1000A194)($gp)
/* 004105E8 24040001 */  li    $a0, 1
/* 004105EC 24050127 */  li    $a1, 295
/* 004105F0 24070008 */  li    $a3, 8
/* 004105F4 0320F809 */  jalr  $t9
/* 004105F8 24C6A194 */   addiu $a2, %lo(RO_1000A194) # addiu $a2, $a2, -0x5e6c
/* 004105FC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410600 10000019 */  b     .L00410668
/* 00410604 8E230004 */   lw    $v1, 4($s1)
.L00410608:
/* 00410608 2C41002A */  sltiu $at, $v0, 0x2a
/* 0041060C 1420000C */  bnez  $at, .L00410640
/* 00410610 2459FFD8 */   addiu $t9, $v0, -0x28
/* 00410614 2458FFB3 */  addiu $t8, $v0, -0x4d
/* 00410618 2F010002 */  sltiu $at, $t8, 2
/* 0041061C 1020FFF0 */  beqz  $at, .L004105E0
/* 00410620 00000000 */   nop   
/* 00410624 8F818044 */  lw    $at, %got(jtbl_1000A1BC)($gp)
/* 00410628 0018C080 */  sll   $t8, $t8, 2
/* 0041062C 00380821 */  addu  $at, $at, $t8
/* 00410630 8C38A1BC */  lw    $t8, %lo(jtbl_1000A1BC)($at)
/* 00410634 031CC021 */  addu  $t8, $t8, $gp
/* 00410638 03000008 */  jr    $t8
/* 0041063C 00000000 */   nop   
.L00410640:
/* 00410640 2F210002 */  sltiu $at, $t9, 2
/* 00410644 1020FFE6 */  beqz  $at, .L004105E0
/* 00410648 00000000 */   nop   
/* 0041064C 8F818044 */  lw    $at, %got(jtbl_1000A1B4)($gp)
/* 00410650 0019C880 */  sll   $t9, $t9, 2
/* 00410654 00390821 */  addu  $at, $at, $t9
/* 00410658 8C39A1B4 */  lw    $t9, %lo(jtbl_1000A1B4)($at)
/* 0041065C 033CC821 */  addu  $t9, $t9, $gp
/* 00410660 03200008 */  jr    $t9
/* 00410664 00000000 */   nop   
.L00410668:
/* 00410668 8C640028 */  lw    $a0, 0x28($v1)
/* 0041066C 24010002 */  li    $at, 2
/* 00410670 00003025 */  move  $a2, $zero
/* 00410674 90880000 */  lbu   $t0, ($a0)
/* 00410678 00009025 */  move  $s2, $zero
/* 0041067C 55010029 */  bnel  $t0, $at, .L00410724
/* 00410680 8C620014 */   lw    $v0, 0x14($v1)
/* 00410684 8E22001C */  lw    $v0, 0x1c($s1)
/* 00410688 8C8A0020 */  lw    $t2, 0x20($a0)
/* 0041068C 8C890024 */  lw    $t1, 0x24($a0)
/* 00410690 28410002 */  slti  $at, $v0, 2
/* 00410694 24120001 */  li    $s2, 1
/* 00410698 AFCA0000 */  sw    $t2, ($fp)
/* 0041069C 14200006 */  bnez  $at, .L004106B8
/* 004106A0 AFC90004 */   sw    $t1, 4($fp)
/* 004106A4 8FAB01C0 */  lw    $t3, 0x1c0($sp)
/* 004106A8 01626023 */  subu  $t4, $t3, $v0
/* 004106AC 258D0001 */  addiu $t5, $t4, 1
/* 004106B0 10000007 */  b     .L004106D0
/* 004106B4 AFAD01C0 */   sw    $t5, 0x1c0($sp)
.L004106B8:
/* 004106B8 2841FFFF */  slti  $at, $v0, -1
/* 004106BC 10200004 */  beqz  $at, .L004106D0
/* 004106C0 8FAE01C0 */   lw    $t6, 0x1c0($sp)
/* 004106C4 01C27823 */  subu  $t7, $t6, $v0
/* 004106C8 25F8FFFF */  addiu $t8, $t7, -1
/* 004106CC AFB801C0 */  sw    $t8, 0x1c0($sp)
.L004106D0:
/* 004106D0 24010083 */  li    $at, 131
/* 004106D4 16610005 */  bne   $s3, $at, .L004106EC
/* 004106D8 8FB901C0 */   lw    $t9, 0x1c0($sp)
/* 004106DC 27280001 */  addiu $t0, $t9, 1
/* 004106E0 24130084 */  li    $s3, 132
/* 004106E4 10000007 */  b     .L00410704
/* 004106E8 AFA801C0 */   sw    $t0, 0x1c0($sp)
.L004106EC:
/* 004106EC 24010082 */  li    $at, 130
/* 004106F0 16610004 */  bne   $s3, $at, .L00410704
/* 004106F4 8FA901C0 */   lw    $t1, 0x1c0($sp)
/* 004106F8 252A0001 */  addiu $t2, $t1, 1
/* 004106FC 24130081 */  li    $s3, 129
/* 00410700 AFAA01C0 */  sw    $t2, 0x1c0($sp)
.L00410704:
/* 00410704 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00410708 8C6B0014 */  lw    $t3, 0x14($v1)
/* 0041070C 02602025 */  move  $a0, $s3
/* 00410710 0320F809 */  jalr  $t9
/* 00410714 8D650014 */   lw    $a1, 0x14($t3)
/* 00410718 10000008 */  b     .L0041073C
/* 0041071C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00410720 8C620014 */  lw    $v0, 0x14($v1)
.L00410724:
/* 00410724 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00410728 02602025 */  move  $a0, $s3
/* 0041072C 8C450014 */  lw    $a1, 0x14($v0)
/* 00410730 0320F809 */  jalr  $t9
/* 00410734 8C460018 */   lw    $a2, 0x18($v0)
/* 00410738 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041073C:
/* 0041073C 8F8E8DF0 */  lw     $t6, %got(itable)($gp)
/* 00410740 304CFFFF */  andi  $t4, $v0, 0xffff
/* 00410744 000C6880 */  sll   $t5, $t4, 2
/* 00410748 01AE7821 */  addu  $t7, $t5, $t6
/* 0041074C 8DF00000 */  lw    $s0, ($t7)
/* 00410750 12000029 */  beqz  $s0, .L004107F8
/* 00410754 00000000 */   nop   
/* 00410758 8E230004 */  lw    $v1, 4($s1)
.L0041075C:
/* 0041075C 92180001 */  lbu   $t8, 1($s0)
/* 00410760 90790001 */  lbu   $t9, 1($v1)
/* 00410764 57190022 */  bnel  $t8, $t9, .L004107F0
/* 00410768 8E10000C */   lw    $s0, 0xc($s0)
/* 0041076C 12400011 */  beqz  $s2, .L004107B4
/* 00410770 02602025 */   move  $a0, $s3
/* 00410774 8F9981F8 */  lw    $t9, %call16(trap_implying)($gp)
/* 00410778 8C680014 */  lw    $t0, 0x14($v1)
/* 0041077C 02602025 */  move  $a0, $s3
/* 00410780 03C03025 */  move  $a2, $fp
/* 00410784 02003825 */  move  $a3, $s0
/* 00410788 0320F809 */  jalr  $t9
/* 0041078C 8D050014 */   lw    $a1, 0x14($t0)
/* 00410790 10400016 */  beqz  $v0, .L004107EC
/* 00410794 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00410798 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041079C 02802025 */  move  $a0, $s4
/* 004107A0 96050002 */  lhu   $a1, 2($s0)
/* 004107A4 0320F809 */  jalr  $t9
/* 004107A8 00000000 */   nop   
/* 004107AC 1000000F */  b     .L004107EC
/* 004107B0 8FBC003C */   lw    $gp, 0x3c($sp)
.L004107B4:
/* 004107B4 8C620014 */  lw    $v0, 0x14($v1)
/* 004107B8 8F9981FC */  lw    $t9, %call16(trap_implying_v)($gp)
/* 004107BC 02003825 */  move  $a3, $s0
/* 004107C0 8C450014 */  lw    $a1, 0x14($v0)
/* 004107C4 0320F809 */  jalr  $t9
/* 004107C8 8C460018 */   lw    $a2, 0x18($v0)
/* 004107CC 10400007 */  beqz  $v0, .L004107EC
/* 004107D0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004107D4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004107D8 02802025 */  move  $a0, $s4
/* 004107DC 96050002 */  lhu   $a1, 2($s0)
/* 004107E0 0320F809 */  jalr  $t9
/* 004107E4 00000000 */   nop   
/* 004107E8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004107EC:
/* 004107EC 8E10000C */  lw    $s0, 0xc($s0)
.L004107F0:
/* 004107F0 5600FFDA */  bnezl $s0, .L0041075C
/* 004107F4 8E230004 */   lw    $v1, 4($s1)
.L004107F8:
/* 004107F8 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004107FC 26B20144 */  addiu $s2, $s5, 0x144
/* 00410800 02402025 */  move  $a0, $s2
/* 00410804 0320F809 */  jalr  $t9
/* 00410808 00000000 */   nop   
/* 0041080C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410810 26A4014C */  addiu $a0, $s5, 0x14c
/* 00410814 AFA40050 */  sw    $a0, 0x50($sp)
/* 00410818 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0041081C 0320F809 */  jalr  $t9
/* 00410820 00000000 */   nop   
/* 00410824 8EA90014 */  lw    $t1, 0x14($s5)
/* 00410828 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041082C 51200005 */  beql  $t1, $zero, .L00410844
/* 00410830 AFA00190 */   sw    $zero, 0x190($sp)
/* 00410834 92AA0004 */  lbu   $t2, 4($s5)
/* 00410838 11400015 */  beqz  $t2, .L00410890
/* 0041083C 00000000 */   nop   
/* 00410840 AFA00190 */  sw    $zero, 0x190($sp)
.L00410844:
/* 00410844 AFA00194 */  sw    $zero, 0x194($sp)
/* 00410848 AFA00198 */  sw    $zero, 0x198($sp)
/* 0041084C AFA0019C */  sw    $zero, 0x19c($sp)
/* 00410850 27AB0190 */  addiu $t3, $sp, 0x190
/* 00410854 8D6D0000 */  lw    $t5, ($t3)
/* 00410858 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 0041085C 02402025 */  move  $a0, $s2
/* 00410860 AFAD0004 */  sw    $t5, 4($sp)
/* 00410864 8D6C0004 */  lw    $t4, 4($t3)
/* 00410868 8FA50004 */  lw    $a1, 4($sp)
/* 0041086C AFAC0008 */  sw    $t4, 8($sp)
/* 00410870 8D670008 */  lw    $a3, 8($t3)
/* 00410874 8FA60008 */  lw    $a2, 8($sp)
/* 00410878 AFA7000C */  sw    $a3, 0xc($sp)
/* 0041087C 8D6C000C */  lw    $t4, 0xc($t3)
/* 00410880 0320F809 */  jalr  $t9
/* 00410884 AFAC0010 */   sw    $t4, 0x10($sp)
/* 00410888 1000000D */  b     .L004108C0
/* 0041088C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00410890:
/* 00410890 8F998198 */  lw    $t9, %call16(bvcopynot)($gp)
/* 00410894 02402025 */  move  $a0, $s2
/* 00410898 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 0041089C 0320F809 */  jalr  $t9
/* 004108A0 00000000 */   nop   
/* 004108A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004108A8 02402025 */  move  $a0, $s2
/* 004108AC 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 004108B0 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 004108B4 0320F809 */  jalr  $t9
/* 004108B8 00000000 */   nop   
/* 004108BC 8FBC003C */  lw    $gp, 0x3c($sp)
.L004108C0:
/* 004108C0 8F998198 */  lw    $t9, %call16(bvcopynot)($gp)
/* 004108C4 8FA40050 */  lw    $a0, 0x50($sp)
/* 004108C8 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 004108CC 0320F809 */  jalr  $t9
/* 004108D0 00000000 */   nop   
/* 004108D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004108D8 8FA40050 */  lw    $a0, 0x50($sp)
/* 004108DC 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 004108E0 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 004108E4 0320F809 */  jalr  $t9
/* 004108E8 00000000 */   nop   
/* 004108EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004108F0 26B00154 */  addiu $s0, $s5, 0x154
/* 004108F4 02002025 */  move  $a0, $s0
/* 004108F8 8F998198 */  lw    $t9, %call16(bvcopynot)($gp)
/* 004108FC 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 00410900 0320F809 */  jalr  $t9
/* 00410904 00000000 */   nop   
/* 00410908 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041090C 02002025 */  move  $a0, $s0
/* 00410910 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00410914 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00410918 0320F809 */  jalr  $t9
/* 0041091C 00000000 */   nop   
/* 00410920 8EA20018 */  lw    $v0, 0x18($s5)
/* 00410924 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410928 54400016 */  bnezl $v0, .L00410984
/* 0041092C 92B90006 */   lbu   $t9, 6($s5)
/* 00410930 AFA00180 */  sw    $zero, 0x180($sp)
/* 00410934 AFA00184 */  sw    $zero, 0x184($sp)
/* 00410938 AFA00188 */  sw    $zero, 0x188($sp)
/* 0041093C AFA0018C */  sw    $zero, 0x18c($sp)
/* 00410940 27AE0180 */  addiu $t6, $sp, 0x180
/* 00410944 8DD80000 */  lw    $t8, ($t6)
/* 00410948 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 0041094C 26A4015C */  addiu $a0, $s5, 0x15c
/* 00410950 AFB80004 */  sw    $t8, 4($sp)
/* 00410954 8DCF0004 */  lw    $t7, 4($t6)
/* 00410958 8FA50004 */  lw    $a1, 4($sp)
/* 0041095C AFAF0008 */  sw    $t7, 8($sp)
/* 00410960 8DC70008 */  lw    $a3, 8($t6)
/* 00410964 8FA60008 */  lw    $a2, 8($sp)
/* 00410968 AFA7000C */  sw    $a3, 0xc($sp)
/* 0041096C 8DCF000C */  lw    $t7, 0xc($t6)
/* 00410970 0320F809 */  jalr  $t9
/* 00410974 AFAF0010 */   sw    $t7, 0x10($sp)
/* 00410978 10000034 */  b     .L00410A4C
/* 0041097C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00410980 92B90006 */  lbu   $t9, 6($s5)
.L00410984:
/* 00410984 17200025 */  bnez  $t9, .L00410A1C
/* 00410988 00000000 */   nop   
/* 0041098C 8C480004 */  lw    $t0, 4($v0)
/* 00410990 27A90170 */  addiu $t1, $sp, 0x170
/* 00410994 5500000F */  bnezl $t0, .L004109D4
/* 00410998 AFA00170 */   sw    $zero, 0x170($sp)
/* 0041099C 8F998198 */  lw    $t9, %call16(bvcopynot)($gp)
/* 004109A0 26B1015C */  addiu $s1, $s5, 0x15c
/* 004109A4 02202025 */  move  $a0, $s1
/* 004109A8 0320F809 */  jalr  $t9
/* 004109AC 8F858CE0 */   lw     $a1, %got(asgnbits)($gp)
/* 004109B0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004109B4 02202025 */  move  $a0, $s1
/* 004109B8 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 004109BC 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 004109C0 0320F809 */  jalr  $t9
/* 004109C4 00000000 */   nop   
/* 004109C8 10000020 */  b     .L00410A4C
/* 004109CC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004109D0 AFA00170 */  sw    $zero, 0x170($sp)
.L004109D4:
/* 004109D4 AFA00174 */  sw    $zero, 0x174($sp)
/* 004109D8 AFA00178 */  sw    $zero, 0x178($sp)
/* 004109DC AFA0017C */  sw    $zero, 0x17c($sp)
/* 004109E0 8D2B0000 */  lw    $t3, ($t1)
/* 004109E4 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 004109E8 26A4015C */  addiu $a0, $s5, 0x15c
/* 004109EC AFAB0004 */  sw    $t3, 4($sp)
/* 004109F0 8D2A0004 */  lw    $t2, 4($t1)
/* 004109F4 8FA50004 */  lw    $a1, 4($sp)
/* 004109F8 AFAA0008 */  sw    $t2, 8($sp)
/* 004109FC 8D270008 */  lw    $a3, 8($t1)
/* 00410A00 8FA60008 */  lw    $a2, 8($sp)
/* 00410A04 AFA7000C */  sw    $a3, 0xc($sp)
/* 00410A08 8D2A000C */  lw    $t2, 0xc($t1)
/* 00410A0C 0320F809 */  jalr  $t9
/* 00410A10 AFAA0010 */   sw    $t2, 0x10($sp)
/* 00410A14 1000000D */  b     .L00410A4C
/* 00410A18 8FBC003C */   lw    $gp, 0x3c($sp)
.L00410A1C:
/* 00410A1C 8F998198 */  lw    $t9, %call16(bvcopynot)($gp)
/* 00410A20 26B1015C */  addiu $s1, $s5, 0x15c
/* 00410A24 02202025 */  move  $a0, $s1
/* 00410A28 0320F809 */  jalr  $t9
/* 00410A2C 8F858CE0 */   lw     $a1, %got(asgnbits)($gp)
/* 00410A30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410A34 02202025 */  move  $a0, $s1
/* 00410A38 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00410A3C 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00410A40 0320F809 */  jalr  $t9
/* 00410A44 00000000 */   nop   
/* 00410A48 8FBC003C */  lw    $gp, 0x3c($sp)
.L00410A4C:
/* 00410A4C 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00410A50 26B20164 */  addiu $s2, $s5, 0x164
/* 00410A54 02402025 */  move  $a0, $s2
/* 00410A58 0320F809 */  jalr  $t9
/* 00410A5C 8F858CE0 */   lw     $a1, %got(asgnbits)($gp)
/* 00410A60 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410A64 02402025 */  move  $a0, $s2
/* 00410A68 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00410A6C 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00410A70 0320F809 */  jalr  $t9
/* 00410A74 00000000 */   nop   
/* 00410A78 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410A7C 8F8C8B6C */  lw     $t4, %got(curproc)($gp)
/* 00410A80 8D8C0000 */  lw    $t4, ($t4)
/* 00410A84 918D0015 */  lbu   $t5, 0x15($t4)
/* 00410A88 11A00007 */  beqz  $t5, .L00410AA8
/* 00410A8C 00000000 */   nop   
/* 00410A90 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00410A94 02402025 */  move  $a0, $s2
/* 00410A98 02802825 */  move  $a1, $s4
/* 00410A9C 0320F809 */  jalr  $t9
/* 00410AA0 00000000 */   nop   
/* 00410AA4 8FBC003C */  lw    $gp, 0x3c($sp)
.L00410AA8:
/* 00410AA8 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00410AAC 26B7016C */  addiu $s7, $s5, 0x16c
/* 00410AB0 02E02025 */  move  $a0, $s7
/* 00410AB4 0320F809 */  jalr  $t9
/* 00410AB8 02C02825 */   move  $a1, $s6
/* 00410ABC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410AC0 8F8E8ABC */  lw     $t6, %got(docodehoist)($gp)
/* 00410AC4 91CE0000 */  lbu   $t6, ($t6)
/* 00410AC8 11C00007 */  beqz  $t6, .L00410AE8
/* 00410ACC 00000000 */   nop   
/* 00410AD0 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00410AD4 02E02025 */  move  $a0, $s7
/* 00410AD8 26A500FC */  addiu $a1, $s5, 0xfc
/* 00410ADC 0320F809 */  jalr  $t9
/* 00410AE0 00000000 */   nop   
/* 00410AE4 8FBC003C */  lw    $gp, 0x3c($sp)
.L00410AE8:
/* 00410AE8 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00410AEC 02E02025 */  move  $a0, $s7
/* 00410AF0 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 00410AF4 0320F809 */  jalr  $t9
/* 00410AF8 00000000 */   nop   
/* 00410AFC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410B00 02E02025 */  move  $a0, $s7
/* 00410B04 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00410B08 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00410B0C 0320F809 */  jalr  $t9
/* 00410B10 00000000 */   nop   
/* 00410B14 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410B18 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 00410B1C 91EF0000 */  lbu   $t7, ($t7)
/* 00410B20 55E00564 */  bnezl $t7, .L004120B4
/* 00410B24 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00410B28 8EB5000C */  lw    $s5, 0xc($s5)
/* 00410B2C 16A0FDDF */  bnez  $s5, .L004102AC
/* 00410B30 00000000 */   nop   
/* 00410B34 A3B301BB */  sb    $s3, 0x1bb($sp)
.L00410B38:
/* 00410B38 8F848D00 */  lw     $a0, %got(savedexp)($gp)
/* 00410B3C AC800000 */  sw    $zero, ($a0)
/* 00410B40 AC800004 */  sw    $zero, 4($a0)
/* 00410B44 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00410B48 0320F809 */  jalr  $t9
/* 00410B4C 00000000 */   nop   
/* 00410B50 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410B54 8F988A88 */  lw     $t8, %got(docm)($gp)
/* 00410B58 93180000 */  lbu   $t8, ($t8)
/* 00410B5C 170000AB */  bnez  $t8, .L00410E0C
/* 00410B60 00000000 */   nop   
/* 00410B64 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 00410B68 27BE00FC */  addiu $fp, $sp, 0xfc
/* 00410B6C 27B7010C */  addiu $s7, $sp, 0x10c
/* 00410B70 8EB50000 */  lw    $s5, ($s5)
/* 00410B74 27B6011C */  addiu $s6, $sp, 0x11c
/* 00410B78 27B4012C */  addiu $s4, $sp, 0x12c
/* 00410B7C 12A0054C */  beqz  $s5, .L004120B0
/* 00410B80 27B3013C */   addiu $s3, $sp, 0x13c
/* 00410B84 27B1014C */  addiu $s1, $sp, 0x14c
/* 00410B88 27B0015C */  addiu $s0, $sp, 0x15c
/* 00410B8C AFB5016C */  sw    $s5, 0x16c($sp)
.L00410B90:
/* 00410B90 AFA0015C */  sw    $zero, 0x15c($sp)
/* 00410B94 AFA00160 */  sw    $zero, 0x160($sp)
/* 00410B98 AFA00164 */  sw    $zero, 0x164($sp)
/* 00410B9C AFA00168 */  sw    $zero, 0x168($sp)
/* 00410BA0 8E080000 */  lw    $t0, ($s0)
/* 00410BA4 26A40124 */  addiu $a0, $s5, 0x124
/* 00410BA8 AFA80004 */  sw    $t0, 4($sp)
/* 00410BAC 8E190004 */  lw    $t9, 4($s0)
/* 00410BB0 8FA50004 */  lw    $a1, 4($sp)
/* 00410BB4 AFB90008 */  sw    $t9, 8($sp)
/* 00410BB8 8E070008 */  lw    $a3, 8($s0)
/* 00410BBC 8FA60008 */  lw    $a2, 8($sp)
/* 00410BC0 AFA7000C */  sw    $a3, 0xc($sp)
/* 00410BC4 8E19000C */  lw    $t9, 0xc($s0)
/* 00410BC8 AFB90010 */  sw    $t9, 0x10($sp)
/* 00410BCC 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00410BD0 0320F809 */  jalr  $t9
/* 00410BD4 00000000 */   nop   
/* 00410BD8 AFA0014C */  sw    $zero, 0x14c($sp)
/* 00410BDC AFA00150 */  sw    $zero, 0x150($sp)
/* 00410BE0 AFA00154 */  sw    $zero, 0x154($sp)
/* 00410BE4 AFA00158 */  sw    $zero, 0x158($sp)
/* 00410BE8 8E2A0000 */  lw    $t2, ($s1)
/* 00410BEC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410BF0 26A40144 */  addiu $a0, $s5, 0x144
/* 00410BF4 AFAA0004 */  sw    $t2, 4($sp)
/* 00410BF8 8E290004 */  lw    $t1, 4($s1)
/* 00410BFC 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00410C00 8FA50004 */  lw    $a1, 4($sp)
/* 00410C04 AFA90008 */  sw    $t1, 8($sp)
/* 00410C08 8E270008 */  lw    $a3, 8($s1)
/* 00410C0C 8FA60008 */  lw    $a2, 8($sp)
/* 00410C10 AFA7000C */  sw    $a3, 0xc($sp)
/* 00410C14 8E29000C */  lw    $t1, 0xc($s1)
/* 00410C18 0320F809 */  jalr  $t9
/* 00410C1C AFA90010 */   sw    $t1, 0x10($sp)
/* 00410C20 AFA0013C */  sw    $zero, 0x13c($sp)
/* 00410C24 AFA00140 */  sw    $zero, 0x140($sp)
/* 00410C28 AFA00144 */  sw    $zero, 0x144($sp)
/* 00410C2C AFA00148 */  sw    $zero, 0x148($sp)
/* 00410C30 8E6C0000 */  lw    $t4, ($s3)
/* 00410C34 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410C38 26B20164 */  addiu $s2, $s5, 0x164
/* 00410C3C AFAC0004 */  sw    $t4, 4($sp)
/* 00410C40 8E6B0004 */  lw    $t3, 4($s3)
/* 00410C44 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00410C48 8FA50004 */  lw    $a1, 4($sp)
/* 00410C4C AFAB0008 */  sw    $t3, 8($sp)
/* 00410C50 8E670008 */  lw    $a3, 8($s3)
/* 00410C54 8FA60008 */  lw    $a2, 8($sp)
/* 00410C58 02402025 */  move  $a0, $s2
/* 00410C5C AFA7000C */  sw    $a3, 0xc($sp)
/* 00410C60 8E6B000C */  lw    $t3, 0xc($s3)
/* 00410C64 0320F809 */  jalr  $t9
/* 00410C68 AFAB0010 */   sw    $t3, 0x10($sp)
/* 00410C6C AFA0012C */  sw    $zero, 0x12c($sp)
/* 00410C70 AFA00130 */  sw    $zero, 0x130($sp)
/* 00410C74 AFA00134 */  sw    $zero, 0x134($sp)
/* 00410C78 AFA00138 */  sw    $zero, 0x138($sp)
/* 00410C7C 8E8E0000 */  lw    $t6, ($s4)
/* 00410C80 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410C84 26A4014C */  addiu $a0, $s5, 0x14c
/* 00410C88 AFAE0004 */  sw    $t6, 4($sp)
/* 00410C8C 8E8D0004 */  lw    $t5, 4($s4)
/* 00410C90 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00410C94 8FA50004 */  lw    $a1, 4($sp)
/* 00410C98 AFAD0008 */  sw    $t5, 8($sp)
/* 00410C9C 8E870008 */  lw    $a3, 8($s4)
/* 00410CA0 8FA60008 */  lw    $a2, 8($sp)
/* 00410CA4 AFA7000C */  sw    $a3, 0xc($sp)
/* 00410CA8 8E8D000C */  lw    $t5, 0xc($s4)
/* 00410CAC 0320F809 */  jalr  $t9
/* 00410CB0 AFAD0010 */   sw    $t5, 0x10($sp)
/* 00410CB4 AFA0011C */  sw    $zero, 0x11c($sp)
/* 00410CB8 AFA00120 */  sw    $zero, 0x120($sp)
/* 00410CBC AFA00124 */  sw    $zero, 0x124($sp)
/* 00410CC0 AFA00128 */  sw    $zero, 0x128($sp)
/* 00410CC4 8ED80000 */  lw    $t8, ($s6)
/* 00410CC8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410CCC 26A40154 */  addiu $a0, $s5, 0x154
/* 00410CD0 AFB80004 */  sw    $t8, 4($sp)
/* 00410CD4 8ECF0004 */  lw    $t7, 4($s6)
/* 00410CD8 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00410CDC 8FA50004 */  lw    $a1, 4($sp)
/* 00410CE0 AFAF0008 */  sw    $t7, 8($sp)
/* 00410CE4 8EC70008 */  lw    $a3, 8($s6)
/* 00410CE8 8FA60008 */  lw    $a2, 8($sp)
/* 00410CEC AFA7000C */  sw    $a3, 0xc($sp)
/* 00410CF0 8ECF000C */  lw    $t7, 0xc($s6)
/* 00410CF4 0320F809 */  jalr  $t9
/* 00410CF8 AFAF0010 */   sw    $t7, 0x10($sp)
/* 00410CFC AFA0010C */  sw    $zero, 0x10c($sp)
/* 00410D00 AFA00110 */  sw    $zero, 0x110($sp)
/* 00410D04 AFA00114 */  sw    $zero, 0x114($sp)
/* 00410D08 AFA00118 */  sw    $zero, 0x118($sp)
/* 00410D0C 8EE80000 */  lw    $t0, ($s7)
/* 00410D10 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410D14 26A4015C */  addiu $a0, $s5, 0x15c
/* 00410D18 AFA80004 */  sw    $t0, 4($sp)
/* 00410D1C 8EF90004 */  lw    $t9, 4($s7)
/* 00410D20 8FA50004 */  lw    $a1, 4($sp)
/* 00410D24 AFB90008 */  sw    $t9, 8($sp)
/* 00410D28 8EE70008 */  lw    $a3, 8($s7)
/* 00410D2C 8FA60008 */  lw    $a2, 8($sp)
/* 00410D30 AFA7000C */  sw    $a3, 0xc($sp)
/* 00410D34 8EF9000C */  lw    $t9, 0xc($s7)
/* 00410D38 AFB90010 */  sw    $t9, 0x10($sp)
/* 00410D3C 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00410D40 0320F809 */  jalr  $t9
/* 00410D44 00000000 */   nop   
/* 00410D48 AFA000FC */  sw    $zero, 0xfc($sp)
/* 00410D4C AFA00100 */  sw    $zero, 0x100($sp)
/* 00410D50 AFA00104 */  sw    $zero, 0x104($sp)
/* 00410D54 AFA00108 */  sw    $zero, 0x108($sp)
/* 00410D58 8FCA0000 */  lw    $t2, ($fp)
/* 00410D5C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410D60 26A4012C */  addiu $a0, $s5, 0x12c
/* 00410D64 AFAA0004 */  sw    $t2, 4($sp)
/* 00410D68 8FC90004 */  lw    $t1, 4($fp)
/* 00410D6C 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00410D70 8FA50004 */  lw    $a1, 4($sp)
/* 00410D74 AFA90008 */  sw    $t1, 8($sp)
/* 00410D78 8FC70008 */  lw    $a3, 8($fp)
/* 00410D7C 8FA60008 */  lw    $a2, 8($sp)
/* 00410D80 AFA7000C */  sw    $a3, 0xc($sp)
/* 00410D84 8FC9000C */  lw    $t1, 0xc($fp)
/* 00410D88 0320F809 */  jalr  $t9
/* 00410D8C AFA90010 */   sw    $t1, 0x10($sp)
/* 00410D90 AFA000EC */  sw    $zero, 0xec($sp)
/* 00410D94 AFA000F0 */  sw    $zero, 0xf0($sp)
/* 00410D98 AFA000F4 */  sw    $zero, 0xf4($sp)
/* 00410D9C AFA000F8 */  sw    $zero, 0xf8($sp)
/* 00410DA0 27AB00EC */  addiu $t3, $sp, 0xec
/* 00410DA4 8D6D0000 */  lw    $t5, ($t3)
/* 00410DA8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410DAC 26A4016C */  addiu $a0, $s5, 0x16c
/* 00410DB0 AFAD0004 */  sw    $t5, 4($sp)
/* 00410DB4 8D6C0004 */  lw    $t4, 4($t3)
/* 00410DB8 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00410DBC 8FA50004 */  lw    $a1, 4($sp)
/* 00410DC0 AFAC0008 */  sw    $t4, 8($sp)
/* 00410DC4 8D670008 */  lw    $a3, 8($t3)
/* 00410DC8 8FA60008 */  lw    $a2, 8($sp)
/* 00410DCC AFA7000C */  sw    $a3, 0xc($sp)
/* 00410DD0 8D6C000C */  lw    $t4, 0xc($t3)
/* 00410DD4 0320F809 */  jalr  $t9
/* 00410DD8 AFAC0010 */   sw    $t4, 0x10($sp)
/* 00410DDC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410DE0 02402025 */  move  $a0, $s2
/* 00410DE4 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00410DE8 0320F809 */  jalr  $t9
/* 00410DEC 00000000 */   nop   
/* 00410DF0 8FAE016C */  lw    $t6, 0x16c($sp)
/* 00410DF4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410DF8 8DD5000C */  lw    $s5, 0xc($t6)
/* 00410DFC 56A0FF64 */  bnezl $s5, .L00410B90
/* 00410E00 AFB5016C */   sw    $s5, 0x16c($sp)
/* 00410E04 100004AB */  b     .L004120B4
/* 00410E08 8FBF0044 */   lw    $ra, 0x44($sp)
.L00410E0C:
/* 00410E0C 8F9E8BDC */  lw     $fp, %got(dataflowiter)($gp)
/* 00410E10 8F968D2C */  lw     $s6, %got(old)($gp)
/* 00410E14 8FCF0000 */  lw    $t7, ($fp)
.L00410E18:
/* 00410E18 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 00410E1C 00009825 */  move  $s3, $zero
/* 00410E20 25F80001 */  addiu $t8, $t7, 1
/* 00410E24 AFD80000 */  sw    $t8, ($fp)
/* 00410E28 8EB50000 */  lw    $s5, ($s5)
/* 00410E2C 12A00053 */  beqz  $s5, .L00410F7C
/* 00410E30 00000000 */   nop   
/* 00410E34 8EA20014 */  lw    $v0, 0x14($s5)
.L00410E38:
/* 00410E38 10400029 */  beqz  $v0, .L00410EE0
/* 00410E3C 00000000 */   nop   
/* 00410E40 16600007 */  bnez  $s3, .L00410E60
/* 00410E44 00408025 */   move  $s0, $v0
/* 00410E48 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00410E4C 02C02025 */  move  $a0, $s6
/* 00410E50 26A50144 */  addiu $a1, $s5, 0x144
/* 00410E54 0320F809 */  jalr  $t9
/* 00410E58 00000000 */   nop   
/* 00410E5C 8FBC003C */  lw    $gp, 0x3c($sp)
.L00410E60:
/* 00410E60 1200000A */  beqz  $s0, .L00410E8C
/* 00410E64 26B20144 */   addiu $s2, $s5, 0x144
.L00410E68:
/* 00410E68 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00410E6C 8E050000 */  lw    $a1, ($s0)
/* 00410E70 02402025 */  move  $a0, $s2
/* 00410E74 0320F809 */  jalr  $t9
/* 00410E78 24A5014C */   addiu $a1, $a1, 0x14c
/* 00410E7C 8E100004 */  lw    $s0, 4($s0)
/* 00410E80 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410E84 1600FFF8 */  bnez  $s0, .L00410E68
/* 00410E88 00000000 */   nop   
.L00410E8C:
/* 00410E8C 8F998B6C */  lw     $t9, %got(curproc)($gp)
/* 00410E90 8F390000 */  lw    $t9, ($t9)
/* 00410E94 93280015 */  lbu   $t0, 0x15($t9)
/* 00410E98 11000007 */  beqz  $t0, .L00410EB8
/* 00410E9C 00000000 */   nop   
/* 00410EA0 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00410EA4 26A40144 */  addiu $a0, $s5, 0x144
/* 00410EA8 26A5012C */  addiu $a1, $s5, 0x12c
/* 00410EAC 0320F809 */  jalr  $t9
/* 00410EB0 00000000 */   nop   
/* 00410EB4 8FBC003C */  lw    $gp, 0x3c($sp)
.L00410EB8:
/* 00410EB8 16600009 */  bnez  $s3, .L00410EE0
/* 00410EBC 00000000 */   nop   
/* 00410EC0 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00410EC4 02C02025 */  move  $a0, $s6
/* 00410EC8 26A50144 */  addiu $a1, $s5, 0x144
/* 00410ECC 0320F809 */  jalr  $t9
/* 00410ED0 00000000 */   nop   
/* 00410ED4 14400002 */  bnez  $v0, .L00410EE0
/* 00410ED8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00410EDC 24130001 */  li    $s3, 1
.L00410EE0:
/* 00410EE0 16600007 */  bnez  $s3, .L00410F00
/* 00410EE4 26B20144 */   addiu $s2, $s5, 0x144
/* 00410EE8 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00410EEC 02C02025 */  move  $a0, $s6
/* 00410EF0 26A5014C */  addiu $a1, $s5, 0x14c
/* 00410EF4 0320F809 */  jalr  $t9
/* 00410EF8 00000000 */   nop   
/* 00410EFC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00410F00:
/* 00410F00 8F9981CC */  lw    $t9, %call16(bvectglop)($gp)
/* 00410F04 26A4014C */  addiu $a0, $s5, 0x14c
/* 00410F08 AFA40050 */  sw    $a0, 0x50($sp)
/* 00410F0C 26A50124 */  addiu $a1, $s5, 0x124
/* 00410F10 02403025 */  move  $a2, $s2
/* 00410F14 0320F809 */  jalr  $t9
/* 00410F18 26A7011C */   addiu $a3, $s5, 0x11c
/* 00410F1C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410F20 8F898ABC */  lw     $t1, %got(docodehoist)($gp)
/* 00410F24 91290000 */  lbu   $t1, ($t1)
/* 00410F28 11200007 */  beqz  $t1, .L00410F48
/* 00410F2C 00000000 */   nop   
/* 00410F30 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00410F34 8FA40050 */  lw    $a0, 0x50($sp)
/* 00410F38 26A500FC */  addiu $a1, $s5, 0xfc
/* 00410F3C 0320F809 */  jalr  $t9
/* 00410F40 00000000 */   nop   
/* 00410F44 8FBC003C */  lw    $gp, 0x3c($sp)
.L00410F48:
/* 00410F48 5660000A */  bnezl $s3, .L00410F74
/* 00410F4C 8EB5000C */   lw    $s5, 0xc($s5)
/* 00410F50 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00410F54 02C02025 */  move  $a0, $s6
/* 00410F58 8FA50050 */  lw    $a1, 0x50($sp)
/* 00410F5C 0320F809 */  jalr  $t9
/* 00410F60 00000000 */   nop   
/* 00410F64 14400002 */  bnez  $v0, .L00410F70
/* 00410F68 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00410F6C 24130001 */  li    $s3, 1
.L00410F70:
/* 00410F70 8EB5000C */  lw    $s5, 0xc($s5)
.L00410F74:
/* 00410F74 56A0FFB0 */  bnezl $s5, .L00410E38
/* 00410F78 8EA20014 */   lw    $v0, 0x14($s5)
.L00410F7C:
/* 00410F7C 5660FFA6 */  bnezl $s3, .L00410E18
/* 00410F80 8FCF0000 */   lw    $t7, ($fp)
/* 00410F84 8FCA0000 */  lw    $t2, ($fp)
.L00410F88:
/* 00410F88 8F9589B0 */  lw     $s5, %got(graphtail)($gp)
/* 00410F8C 00009825 */  move  $s3, $zero
/* 00410F90 254B0001 */  addiu $t3, $t2, 1
/* 00410F94 AFCB0000 */  sw    $t3, ($fp)
/* 00410F98 8EB50000 */  lw    $s5, ($s5)
/* 00410F9C 12A0003D */  beqz  $s5, .L00411094
/* 00410FA0 00000000 */   nop   
/* 00410FA4 8EA20018 */  lw    $v0, 0x18($s5)
.L00410FA8:
/* 00410FA8 1040001E */  beqz  $v0, .L00411024
/* 00410FAC 00000000 */   nop   
/* 00410FB0 16600007 */  bnez  $s3, .L00410FD0
/* 00410FB4 00408025 */   move  $s0, $v0
/* 00410FB8 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00410FBC 02C02025 */  move  $a0, $s6
/* 00410FC0 26A5015C */  addiu $a1, $s5, 0x15c
/* 00410FC4 0320F809 */  jalr  $t9
/* 00410FC8 00000000 */   nop   
/* 00410FCC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00410FD0:
/* 00410FD0 1200000A */  beqz  $s0, .L00410FFC
/* 00410FD4 26B1015C */   addiu $s1, $s5, 0x15c
.L00410FD8:
/* 00410FD8 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00410FDC 8E050000 */  lw    $a1, ($s0)
/* 00410FE0 02202025 */  move  $a0, $s1
/* 00410FE4 0320F809 */  jalr  $t9
/* 00410FE8 24A50154 */   addiu $a1, $a1, 0x154
/* 00410FEC 8E100004 */  lw    $s0, 4($s0)
/* 00410FF0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00410FF4 1600FFF8 */  bnez  $s0, .L00410FD8
/* 00410FF8 00000000 */   nop   
.L00410FFC:
/* 00410FFC 16600009 */  bnez  $s3, .L00411024
/* 00411000 00000000 */   nop   
/* 00411004 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00411008 02C02025 */  move  $a0, $s6
/* 0041100C 26A5015C */  addiu $a1, $s5, 0x15c
/* 00411010 0320F809 */  jalr  $t9
/* 00411014 00000000 */   nop   
/* 00411018 14400002 */  bnez  $v0, .L00411024
/* 0041101C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411020 24130001 */  li    $s3, 1
.L00411024:
/* 00411024 16600007 */  bnez  $s3, .L00411044
/* 00411028 26B1015C */   addiu $s1, $s5, 0x15c
/* 0041102C 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00411030 02C02025 */  move  $a0, $s6
/* 00411034 26A50154 */  addiu $a1, $s5, 0x154
/* 00411038 0320F809 */  jalr  $t9
/* 0041103C 00000000 */   nop   
/* 00411040 8FBC003C */  lw    $gp, 0x3c($sp)
.L00411044:
/* 00411044 8F9981CC */  lw    $t9, %call16(bvectglop)($gp)
/* 00411048 26B00154 */  addiu $s0, $s5, 0x154
/* 0041104C 02002025 */  move  $a0, $s0
/* 00411050 26A50104 */  addiu $a1, $s5, 0x104
/* 00411054 02203025 */  move  $a2, $s1
/* 00411058 0320F809 */  jalr  $t9
/* 0041105C 26A7010C */   addiu $a3, $s5, 0x10c
/* 00411060 16600009 */  bnez  $s3, .L00411088
/* 00411064 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411068 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 0041106C 02C02025 */  move  $a0, $s6
/* 00411070 02002825 */  move  $a1, $s0
/* 00411074 0320F809 */  jalr  $t9
/* 00411078 00000000 */   nop   
/* 0041107C 14400002 */  bnez  $v0, .L00411088
/* 00411080 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411084 24130001 */  li    $s3, 1
.L00411088:
/* 00411088 8EB50010 */  lw    $s5, 0x10($s5)
/* 0041108C 56A0FFC6 */  bnezl $s5, .L00410FA8
/* 00411090 8EA20018 */   lw    $v0, 0x18($s5)
.L00411094:
/* 00411094 5660FFBC */  bnezl $s3, .L00410F88
/* 00411098 8FCA0000 */   lw    $t2, ($fp)
/* 0041109C 8FCC0000 */  lw    $t4, ($fp)
.L004110A0:
/* 004110A0 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 004110A4 00009825 */  move  $s3, $zero
/* 004110A8 258D0001 */  addiu $t5, $t4, 1
/* 004110AC AFCD0000 */  sw    $t5, ($fp)
/* 004110B0 8EB50000 */  lw    $s5, ($s5)
/* 004110B4 12A0003C */  beqz  $s5, .L004111A8
/* 004110B8 00000000 */   nop   
/* 004110BC 8EA20014 */  lw    $v0, 0x14($s5)
.L004110C0:
/* 004110C0 1040001E */  beqz  $v0, .L0041113C
/* 004110C4 00000000 */   nop   
/* 004110C8 16600007 */  bnez  $s3, .L004110E8
/* 004110CC 00408025 */   move  $s0, $v0
/* 004110D0 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 004110D4 02C02025 */  move  $a0, $s6
/* 004110D8 26A50164 */  addiu $a1, $s5, 0x164
/* 004110DC 0320F809 */  jalr  $t9
/* 004110E0 00000000 */   nop   
/* 004110E4 8FBC003C */  lw    $gp, 0x3c($sp)
.L004110E8:
/* 004110E8 1200000A */  beqz  $s0, .L00411114
/* 004110EC 26B20164 */   addiu $s2, $s5, 0x164
.L004110F0:
/* 004110F0 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 004110F4 8E050000 */  lw    $a1, ($s0)
/* 004110F8 02402025 */  move  $a0, $s2
/* 004110FC 0320F809 */  jalr  $t9
/* 00411100 24A5016C */   addiu $a1, $a1, 0x16c
/* 00411104 8E100004 */  lw    $s0, 4($s0)
/* 00411108 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041110C 1600FFF8 */  bnez  $s0, .L004110F0
/* 00411110 00000000 */   nop   
.L00411114:
/* 00411114 16600009 */  bnez  $s3, .L0041113C
/* 00411118 00000000 */   nop   
/* 0041111C 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00411120 02C02025 */  move  $a0, $s6
/* 00411124 26A50164 */  addiu $a1, $s5, 0x164
/* 00411128 0320F809 */  jalr  $t9
/* 0041112C 00000000 */   nop   
/* 00411130 14400002 */  bnez  $v0, .L0041113C
/* 00411134 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411138 24130001 */  li    $s3, 1
.L0041113C:
/* 0041113C 16600007 */  bnez  $s3, .L0041115C
/* 00411140 26B20164 */   addiu $s2, $s5, 0x164
/* 00411144 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00411148 02C02025 */  move  $a0, $s6
/* 0041114C 26A5016C */  addiu $a1, $s5, 0x16c
/* 00411150 0320F809 */  jalr  $t9
/* 00411154 00000000 */   nop   
/* 00411158 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041115C:
/* 0041115C 8F9981B0 */  lw    $t9, %call16(unionminus)($gp)
/* 00411160 26B7016C */  addiu $s7, $s5, 0x16c
/* 00411164 02E02025 */  move  $a0, $s7
/* 00411168 02402825 */  move  $a1, $s2
/* 0041116C 0320F809 */  jalr  $t9
/* 00411170 26A6011C */   addiu $a2, $s5, 0x11c
/* 00411174 16600009 */  bnez  $s3, .L0041119C
/* 00411178 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041117C 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00411180 02C02025 */  move  $a0, $s6
/* 00411184 02E02825 */  move  $a1, $s7
/* 00411188 0320F809 */  jalr  $t9
/* 0041118C 00000000 */   nop   
/* 00411190 14400002 */  bnez  $v0, .L0041119C
/* 00411194 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411198 24130001 */  li    $s3, 1
.L0041119C:
/* 0041119C 8EB5000C */  lw    $s5, 0xc($s5)
/* 004111A0 56A0FFC7 */  bnezl $s5, .L004110C0
/* 004111A4 8EA20014 */   lw    $v0, 0x14($s5)
.L004111A8:
/* 004111A8 5660FFBD */  bnezl $s3, .L004110A0
/* 004111AC 8FCC0000 */   lw    $t4, ($fp)
/* 004111B0 8F8E8A94 */  lw     $t6, %got(dbugno)($gp)
/* 004111B4 24010019 */  li    $at, 25
/* 004111B8 8DCE0000 */  lw    $t6, ($t6)
/* 004111BC 15C10005 */  bne   $t6, $at, .L004111D4
/* 004111C0 00000000 */   nop   
/* 004111C4 8F998244 */  lw    $t9, %call16(printprecm)($gp)
/* 004111C8 0320F809 */  jalr  $t9
/* 004111CC 00000000 */   nop   
/* 004111D0 8FBC003C */  lw    $gp, 0x3c($sp)
.L004111D4:
/* 004111D4 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 004111D8 24100042 */  li    $s0, 66
/* 004111DC 8EB50000 */  lw    $s5, ($s5)
/* 004111E0 52A000FC */  beql  $s5, $zero, .L004115D4
/* 004111E4 8FC90000 */   lw    $t1, ($fp)
/* 004111E8 8F938AEC */  lw     $s3, %got(moremotion)($gp)
/* 004111EC 926F0000 */  lbu   $t7, ($s3)
.L004111F0:
/* 004111F0 15E00008 */  bnez  $t7, .L00411214
/* 004111F4 00000000 */   nop   
/* 004111F8 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 004111FC 26B20164 */  addiu $s2, $s5, 0x164
/* 00411200 02402025 */  move  $a0, $s2
/* 00411204 0320F809 */  jalr  $t9
/* 00411208 26A50154 */   addiu $a1, $s5, 0x154
/* 0041120C 10000007 */  b     .L0041122C
/* 00411210 8FBC003C */   lw    $gp, 0x3c($sp)
.L00411214:
/* 00411214 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00411218 26B20164 */  addiu $s2, $s5, 0x164
/* 0041121C 02402025 */  move  $a0, $s2
/* 00411220 0320F809 */  jalr  $t9
/* 00411224 26A50154 */   addiu $a1, $s5, 0x154
/* 00411228 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041122C:
/* 0041122C 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00411230 02402025 */  move  $a0, $s2
/* 00411234 8F858CFC */  lw     $a1, %got(boolexp)($gp)
/* 00411238 0320F809 */  jalr  $t9
/* 0041123C 00000000 */   nop   
/* 00411240 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411244 24010003 */  li    $at, 3
/* 00411248 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 0041124C 93180000 */  lbu   $t8, ($t8)
/* 00411250 57010024 */  bnel  $t8, $at, .L004112E4
/* 00411254 8EAF0014 */   lw    $t7, 0x14($s5)
/* 00411258 8EB90000 */  lw    $t9, ($s5)
/* 0041125C 53200021 */  beql  $t9, $zero, .L004112E4
/* 00411260 8EAF0014 */   lw    $t7, 0x14($s5)
/* 00411264 8EB1001C */  lw    $s1, 0x1c($s5)
/* 00411268 27AC00DC */  addiu $t4, $sp, 0xdc
/* 0041126C 92280000 */  lbu   $t0, ($s1)
/* 00411270 52080006 */  beql  $s0, $t0, .L0041128C
/* 00411274 922A0024 */   lbu   $t2, 0x24($s1)
/* 00411278 8E310008 */  lw    $s1, 8($s1)
.L0041127C:
/* 0041127C 92290000 */  lbu   $t1, ($s1)
/* 00411280 5609FFFE */  bnel  $s0, $t1, .L0041127C
/* 00411284 8E310008 */   lw    $s1, 8($s1)
/* 00411288 922A0024 */  lbu   $t2, 0x24($s1)
.L0041128C:
/* 0041128C 314B00B2 */  andi  $t3, $t2, 0xb2
/* 00411290 51600014 */  beql  $t3, $zero, .L004112E4
/* 00411294 8EAF0014 */   lw    $t7, 0x14($s5)
/* 00411298 AFA000DC */  sw    $zero, 0xdc($sp)
/* 0041129C AFA000E0 */  sw    $zero, 0xe0($sp)
/* 004112A0 AFA000E4 */  sw    $zero, 0xe4($sp)
/* 004112A4 AFA000E8 */  sw    $zero, 0xe8($sp)
/* 004112A8 8D8E0000 */  lw    $t6, ($t4)
/* 004112AC 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 004112B0 02402025 */  move  $a0, $s2
/* 004112B4 AFAE0004 */  sw    $t6, 4($sp)
/* 004112B8 8D8D0004 */  lw    $t5, 4($t4)
/* 004112BC 8FA50004 */  lw    $a1, 4($sp)
/* 004112C0 AFAD0008 */  sw    $t5, 8($sp)
/* 004112C4 8D870008 */  lw    $a3, 8($t4)
/* 004112C8 8FA60008 */  lw    $a2, 8($sp)
/* 004112CC AFA7000C */  sw    $a3, 0xc($sp)
/* 004112D0 8D8D000C */  lw    $t5, 0xc($t4)
/* 004112D4 0320F809 */  jalr  $t9
/* 004112D8 AFAD0010 */   sw    $t5, 0x10($sp)
/* 004112DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004112E0 8EAF0014 */  lw    $t7, 0x14($s5)
.L004112E4:
/* 004112E4 27B900CC */  addiu $t9, $sp, 0xcc
/* 004112E8 51E00007 */  beql  $t7, $zero, .L00411308
/* 004112EC AFA000CC */   sw    $zero, 0xcc($sp)
/* 004112F0 92B80004 */  lbu   $t8, 4($s5)
/* 004112F4 240AFFFF */  li    $t2, -1
/* 004112F8 240BFFFF */  li    $t3, -1
/* 004112FC 13000015 */  beqz  $t8, .L00411354
/* 00411300 240CFFFF */   li    $t4, -1
/* 00411304 AFA000CC */  sw    $zero, 0xcc($sp)
.L00411308:
/* 00411308 AFA000D0 */  sw    $zero, 0xd0($sp)
/* 0041130C AFA000D4 */  sw    $zero, 0xd4($sp)
/* 00411310 AFA000D8 */  sw    $zero, 0xd8($sp)
/* 00411314 8F290000 */  lw    $t1, ($t9)
/* 00411318 26A4012C */  addiu $a0, $s5, 0x12c
/* 0041131C AFA90004 */  sw    $t1, 4($sp)
/* 00411320 8F280004 */  lw    $t0, 4($t9)
/* 00411324 8FA50004 */  lw    $a1, 4($sp)
/* 00411328 AFA80008 */  sw    $t0, 8($sp)
/* 0041132C 8F270008 */  lw    $a3, 8($t9)
/* 00411330 8FA60008 */  lw    $a2, 8($sp)
/* 00411334 AFA7000C */  sw    $a3, 0xc($sp)
/* 00411338 8F28000C */  lw    $t0, 0xc($t9)
/* 0041133C 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00411340 AFA80010 */  sw    $t0, 0x10($sp)
/* 00411344 0320F809 */  jalr  $t9
/* 00411348 00000000 */   nop   
/* 0041134C 10000022 */  b     .L004113D8
/* 00411350 8FBC003C */   lw    $gp, 0x3c($sp)
.L00411354:
/* 00411354 240DFFFF */  li    $t5, -1
/* 00411358 AFAD00C8 */  sw    $t5, 0xc8($sp)
/* 0041135C AFAA00BC */  sw    $t2, 0xbc($sp)
/* 00411360 AFAB00C0 */  sw    $t3, 0xc0($sp)
/* 00411364 AFAC00C4 */  sw    $t4, 0xc4($sp)
/* 00411368 27AE00BC */  addiu $t6, $sp, 0xbc
/* 0041136C 8DD80000 */  lw    $t8, ($t6)
/* 00411370 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00411374 26B4012C */  addiu $s4, $s5, 0x12c
/* 00411378 AFB80004 */  sw    $t8, 4($sp)
/* 0041137C 8DCF0004 */  lw    $t7, 4($t6)
/* 00411380 8FA50004 */  lw    $a1, 4($sp)
/* 00411384 02802025 */  move  $a0, $s4
/* 00411388 AFAF0008 */  sw    $t7, 8($sp)
/* 0041138C 8DC70008 */  lw    $a3, 8($t6)
/* 00411390 8FA60008 */  lw    $a2, 8($sp)
/* 00411394 AFA7000C */  sw    $a3, 0xc($sp)
/* 00411398 8DCF000C */  lw    $t7, 0xc($t6)
/* 0041139C 0320F809 */  jalr  $t9
/* 004113A0 AFAF0010 */   sw    $t7, 0x10($sp)
/* 004113A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004113A8 02802025 */  move  $a0, $s4
/* 004113AC 8F998198 */  lw    $t9, %call16(bvcopynot)($gp)
/* 004113B0 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 004113B4 0320F809 */  jalr  $t9
/* 004113B8 00000000 */   nop   
/* 004113BC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004113C0 02802025 */  move  $a0, $s4
/* 004113C4 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 004113C8 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 004113CC 0320F809 */  jalr  $t9
/* 004113D0 00000000 */   nop   
/* 004113D4 8FBC003C */  lw    $gp, 0x3c($sp)
.L004113D8:
/* 004113D8 8EA20018 */  lw    $v0, 0x18($s5)
/* 004113DC 27B900AC */  addiu $t9, $sp, 0xac
/* 004113E0 54400016 */  bnezl $v0, .L0041143C
/* 004113E4 92AA0006 */   lbu   $t2, 6($s5)
/* 004113E8 AFA000AC */  sw    $zero, 0xac($sp)
/* 004113EC AFA000B0 */  sw    $zero, 0xb0($sp)
/* 004113F0 AFA000B4 */  sw    $zero, 0xb4($sp)
/* 004113F4 AFA000B8 */  sw    $zero, 0xb8($sp)
/* 004113F8 8F290000 */  lw    $t1, ($t9)
/* 004113FC 26A4016C */  addiu $a0, $s5, 0x16c
/* 00411400 AFA90004 */  sw    $t1, 4($sp)
/* 00411404 8F280004 */  lw    $t0, 4($t9)
/* 00411408 8FA50004 */  lw    $a1, 4($sp)
/* 0041140C AFA80008 */  sw    $t0, 8($sp)
/* 00411410 8F270008 */  lw    $a3, 8($t9)
/* 00411414 8FA60008 */  lw    $a2, 8($sp)
/* 00411418 AFA7000C */  sw    $a3, 0xc($sp)
/* 0041141C 8F28000C */  lw    $t0, 0xc($t9)
/* 00411420 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00411424 AFA80010 */  sw    $t0, 0x10($sp)
/* 00411428 0320F809 */  jalr  $t9
/* 0041142C 00000000 */   nop   
/* 00411430 10000064 */  b     .L004115C4
/* 00411434 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411438 92AA0006 */  lbu   $t2, 6($s5)
.L0041143C:
/* 0041143C 240CFFFF */  li    $t4, -1
/* 00411440 240DFFFF */  li    $t5, -1
/* 00411444 1540003D */  bnez  $t2, .L0041153C
/* 00411448 240EFFFF */   li    $t6, -1
/* 0041144C 8C4B0004 */  lw    $t3, 4($v0)
/* 00411450 240CFFFF */  li    $t4, -1
/* 00411454 240DFFFF */  li    $t5, -1
/* 00411458 15600025 */  bnez  $t3, .L004114F0
/* 0041145C 27A9008C */   addiu $t1, $sp, 0x8c
/* 00411460 240EFFFF */  li    $t6, -1
/* 00411464 240FFFFF */  li    $t7, -1
/* 00411468 AFAF00A8 */  sw    $t7, 0xa8($sp)
/* 0041146C AFAE00A4 */  sw    $t6, 0xa4($sp)
/* 00411470 AFAC009C */  sw    $t4, 0x9c($sp)
/* 00411474 AFAD00A0 */  sw    $t5, 0xa0($sp)
/* 00411478 27B8009C */  addiu $t8, $sp, 0x9c
/* 0041147C 8F080000 */  lw    $t0, ($t8)
/* 00411480 26B7016C */  addiu $s7, $s5, 0x16c
/* 00411484 02E02025 */  move  $a0, $s7
/* 00411488 AFA80004 */  sw    $t0, 4($sp)
/* 0041148C 8F190004 */  lw    $t9, 4($t8)
/* 00411490 8FA50004 */  lw    $a1, 4($sp)
/* 00411494 AFB90008 */  sw    $t9, 8($sp)
/* 00411498 8F070008 */  lw    $a3, 8($t8)
/* 0041149C 8FA60008 */  lw    $a2, 8($sp)
/* 004114A0 AFA7000C */  sw    $a3, 0xc($sp)
/* 004114A4 8F19000C */  lw    $t9, 0xc($t8)
/* 004114A8 AFB90010 */  sw    $t9, 0x10($sp)
/* 004114AC 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 004114B0 0320F809 */  jalr  $t9
/* 004114B4 00000000 */   nop   
/* 004114B8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004114BC 02E02025 */  move  $a0, $s7
/* 004114C0 8F998198 */  lw    $t9, %call16(bvcopynot)($gp)
/* 004114C4 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 004114C8 0320F809 */  jalr  $t9
/* 004114CC 00000000 */   nop   
/* 004114D0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004114D4 02E02025 */  move  $a0, $s7
/* 004114D8 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 004114DC 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 004114E0 0320F809 */  jalr  $t9
/* 004114E4 00000000 */   nop   
/* 004114E8 10000036 */  b     .L004115C4
/* 004114EC 8FBC003C */   lw    $gp, 0x3c($sp)
.L004114F0:
/* 004114F0 AFA0008C */  sw    $zero, 0x8c($sp)
/* 004114F4 AFA00090 */  sw    $zero, 0x90($sp)
/* 004114F8 AFA00094 */  sw    $zero, 0x94($sp)
/* 004114FC AFA00098 */  sw    $zero, 0x98($sp)
/* 00411500 8D2B0000 */  lw    $t3, ($t1)
/* 00411504 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00411508 26A4016C */  addiu $a0, $s5, 0x16c
/* 0041150C AFAB0004 */  sw    $t3, 4($sp)
/* 00411510 8D2A0004 */  lw    $t2, 4($t1)
/* 00411514 8FA50004 */  lw    $a1, 4($sp)
/* 00411518 AFAA0008 */  sw    $t2, 8($sp)
/* 0041151C 8D270008 */  lw    $a3, 8($t1)
/* 00411520 8FA60008 */  lw    $a2, 8($sp)
/* 00411524 AFA7000C */  sw    $a3, 0xc($sp)
/* 00411528 8D2A000C */  lw    $t2, 0xc($t1)
/* 0041152C 0320F809 */  jalr  $t9
/* 00411530 AFAA0010 */   sw    $t2, 0x10($sp)
/* 00411534 10000023 */  b     .L004115C4
/* 00411538 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041153C:
/* 0041153C 240FFFFF */  li    $t7, -1
/* 00411540 AFAF0088 */  sw    $t7, 0x88($sp)
/* 00411544 AFAC007C */  sw    $t4, 0x7c($sp)
/* 00411548 AFAD0080 */  sw    $t5, 0x80($sp)
/* 0041154C AFAE0084 */  sw    $t6, 0x84($sp)
/* 00411550 27B8007C */  addiu $t8, $sp, 0x7c
/* 00411554 8F080000 */  lw    $t0, ($t8)
/* 00411558 26B7016C */  addiu $s7, $s5, 0x16c
/* 0041155C 02E02025 */  move  $a0, $s7
/* 00411560 AFA80004 */  sw    $t0, 4($sp)
/* 00411564 8F190004 */  lw    $t9, 4($t8)
/* 00411568 8FA50004 */  lw    $a1, 4($sp)
/* 0041156C AFB90008 */  sw    $t9, 8($sp)
/* 00411570 8F070008 */  lw    $a3, 8($t8)
/* 00411574 8FA60008 */  lw    $a2, 8($sp)
/* 00411578 AFA7000C */  sw    $a3, 0xc($sp)
/* 0041157C 8F19000C */  lw    $t9, 0xc($t8)
/* 00411580 AFB90010 */  sw    $t9, 0x10($sp)
/* 00411584 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00411588 0320F809 */  jalr  $t9
/* 0041158C 00000000 */   nop   
/* 00411590 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411594 02E02025 */  move  $a0, $s7
/* 00411598 8F998198 */  lw    $t9, %call16(bvcopynot)($gp)
/* 0041159C 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 004115A0 0320F809 */  jalr  $t9
/* 004115A4 00000000 */   nop   
/* 004115A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004115AC 02E02025 */  move  $a0, $s7
/* 004115B0 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 004115B4 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 004115B8 0320F809 */  jalr  $t9
/* 004115BC 00000000 */   nop   
/* 004115C0 8FBC003C */  lw    $gp, 0x3c($sp)
.L004115C4:
/* 004115C4 8EB5000C */  lw    $s5, 0xc($s5)
/* 004115C8 56A0FF09 */  bnezl $s5, .L004111F0
/* 004115CC 926F0000 */   lbu   $t7, ($s3)
/* 004115D0 8FC90000 */  lw    $t1, ($fp)
.L004115D4:
/* 004115D4 8F9589B0 */  lw     $s5, %got(graphtail)($gp)
/* 004115D8 00009825 */  move  $s3, $zero
/* 004115DC 252A0001 */  addiu $t2, $t1, 1
/* 004115E0 AFCA0000 */  sw    $t2, ($fp)
/* 004115E4 8EB50000 */  lw    $s5, ($s5)
/* 004115E8 12A00051 */  beqz  $s5, .L00411730
/* 004115EC 00000000 */   nop   
/* 004115F0 8EA20018 */  lw    $v0, 0x18($s5)
.L004115F4:
/* 004115F4 5040001F */  beql  $v0, $zero, .L00411674
/* 004115F8 8EA20014 */   lw    $v0, 0x14($s5)
/* 004115FC 16600007 */  bnez  $s3, .L0041161C
/* 00411600 00408025 */   move  $s0, $v0
/* 00411604 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00411608 02C02025 */  move  $a0, $s6
/* 0041160C 26A5016C */  addiu $a1, $s5, 0x16c
/* 00411610 0320F809 */  jalr  $t9
/* 00411614 00000000 */   nop   
/* 00411618 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041161C:
/* 0041161C 1200000A */  beqz  $s0, .L00411648
/* 00411620 26B7016C */   addiu $s7, $s5, 0x16c
.L00411624:
/* 00411624 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00411628 8E050000 */  lw    $a1, ($s0)
/* 0041162C 02E02025 */  move  $a0, $s7
/* 00411630 0320F809 */  jalr  $t9
/* 00411634 24A5012C */   addiu $a1, $a1, 0x12c
/* 00411638 8E100004 */  lw    $s0, 4($s0)
/* 0041163C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411640 1600FFF8 */  bnez  $s0, .L00411624
/* 00411644 00000000 */   nop   
.L00411648:
/* 00411648 5660000A */  bnezl $s3, .L00411674
/* 0041164C 8EA20014 */   lw    $v0, 0x14($s5)
/* 00411650 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00411654 02C02025 */  move  $a0, $s6
/* 00411658 26A5016C */  addiu $a1, $s5, 0x16c
/* 0041165C 0320F809 */  jalr  $t9
/* 00411660 00000000 */   nop   
/* 00411664 14400002 */  bnez  $v0, .L00411670
/* 00411668 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041166C 24130001 */  li    $s3, 1
.L00411670:
/* 00411670 8EA20014 */  lw    $v0, 0x14($s5)
.L00411674:
/* 00411674 5040002C */  beql  $v0, $zero, .L00411728
/* 00411678 8EB50010 */   lw    $s5, 0x10($s5)
/* 0041167C 92AB0004 */  lbu   $t3, 4($s5)
/* 00411680 00408025 */  move  $s0, $v0
/* 00411684 55600028 */  bnezl $t3, .L00411728
/* 00411688 8EB50010 */   lw    $s5, 0x10($s5)
/* 0041168C 16600007 */  bnez  $s3, .L004116AC
/* 00411690 26B7016C */   addiu $s7, $s5, 0x16c
/* 00411694 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00411698 02C02025 */  move  $a0, $s6
/* 0041169C 26A5012C */  addiu $a1, $s5, 0x12c
/* 004116A0 0320F809 */  jalr  $t9
/* 004116A4 00000000 */   nop   
/* 004116A8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004116AC:
/* 004116AC 8F9981D4 */  lw    $t9, %call16(bvectpp1)($gp)
/* 004116B0 26B4012C */  addiu $s4, $s5, 0x12c
/* 004116B4 02802025 */  move  $a0, $s4
/* 004116B8 26A50164 */  addiu $a1, $s5, 0x164
/* 004116BC 26A60104 */  addiu $a2, $s5, 0x104
/* 004116C0 26A7010C */  addiu $a3, $s5, 0x10c
/* 004116C4 0320F809 */  jalr  $t9
/* 004116C8 AFB70010 */   sw    $s7, 0x10($sp)
/* 004116CC 1200000B */  beqz  $s0, .L004116FC
/* 004116D0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004116D4 8E020000 */  lw    $v0, ($s0)
.L004116D8:
/* 004116D8 8F9981D8 */  lw    $t9, %call16(bvectpp2)($gp)
/* 004116DC 02802025 */  move  $a0, $s4
/* 004116E0 2445016C */  addiu $a1, $v0, 0x16c
/* 004116E4 0320F809 */  jalr  $t9
/* 004116E8 2446014C */   addiu $a2, $v0, 0x14c
/* 004116EC 8E100004 */  lw    $s0, 4($s0)
/* 004116F0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004116F4 5600FFF8 */  bnezl $s0, .L004116D8
/* 004116F8 8E020000 */   lw    $v0, ($s0)
.L004116FC:
/* 004116FC 5660000A */  bnezl $s3, .L00411728
/* 00411700 8EB50010 */   lw    $s5, 0x10($s5)
/* 00411704 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00411708 02C02025 */  move  $a0, $s6
/* 0041170C 02802825 */  move  $a1, $s4
/* 00411710 0320F809 */  jalr  $t9
/* 00411714 00000000 */   nop   
/* 00411718 14400002 */  bnez  $v0, .L00411724
/* 0041171C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411720 24130001 */  li    $s3, 1
.L00411724:
/* 00411724 8EB50010 */  lw    $s5, 0x10($s5)
.L00411728:
/* 00411728 56A0FFB2 */  bnezl $s5, .L004115F4
/* 0041172C 8EA20018 */   lw    $v0, 0x18($s5)
.L00411730:
/* 00411730 5660FFA8 */  bnezl $s3, .L004115D4
/* 00411734 8FC90000 */   lw    $t1, ($fp)
/* 00411738 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 0041173C 0320F809 */  jalr  $t9
/* 00411740 00000000 */   nop   
/* 00411744 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411748 8F838BD8 */  lw     $v1, %got(dataflowtime)($gp)
/* 0041174C 8F8E8BE8 */  lw     $t6, %got(lastdftime)($gp)
/* 00411750 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 00411754 8C6C0000 */  lw    $t4, ($v1)
/* 00411758 8DCE0000 */  lw    $t6, ($t6)
/* 0041175C 01826821 */  addu  $t5, $t4, $v0
/* 00411760 01AE7823 */  subu  $t7, $t5, $t6
/* 00411764 AC6F0000 */  sw    $t7, ($v1)
/* 00411768 8EB50000 */  lw    $s5, ($s5)
/* 0041176C 12A00145 */  beqz  $s5, .L00411C84
/* 00411770 00000000 */   nop   
/* 00411774 8F9E89EC */  lw     $fp, %got(bittab)($gp)
.L00411778:
/* 00411778 8F9981DC */  lw    $t9, %call16(bvectinsert)($gp)
/* 0041177C 26B20164 */  addiu $s2, $s5, 0x164
/* 00411780 26B7016C */  addiu $s7, $s5, 0x16c
/* 00411784 26A6014C */  addiu $a2, $s5, 0x14c
/* 00411788 26B8010C */  addiu $t8, $s5, 0x10c
/* 0041178C AFB80010 */  sw    $t8, 0x10($sp)
/* 00411790 AFA60050 */  sw    $a2, 0x50($sp)
/* 00411794 02E02825 */  move  $a1, $s7
/* 00411798 02402025 */  move  $a0, $s2
/* 0041179C 26A7012C */  addiu $a3, $s5, 0x12c
/* 004117A0 0000A025 */  move  $s4, $zero
/* 004117A4 0320F809 */  jalr  $t9
/* 004117A8 00001025 */   move  $v0, $zero
/* 004117AC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004117B0 8F998ABC */  lw     $t9, %got(docodehoist)($gp)
/* 004117B4 93390000 */  lbu   $t9, ($t9)
/* 004117B8 13200007 */  beqz  $t9, .L004117D8
/* 004117BC 00000000 */   nop   
/* 004117C0 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 004117C4 02402025 */  move  $a0, $s2
/* 004117C8 26A500FC */  addiu $a1, $s5, 0xfc
/* 004117CC 0320F809 */  jalr  $t9
/* 004117D0 00000000 */   nop   
/* 004117D4 8FBC003C */  lw    $gp, 0x3c($sp)
.L004117D8:
/* 004117D8 8F888B6C */  lw     $t0, %got(curproc)($gp)
/* 004117DC 8D080000 */  lw    $t0, ($t0)
/* 004117E0 91090015 */  lbu   $t1, 0x15($t0)
/* 004117E4 11200050 */  beqz  $t1, .L00411928
/* 004117E8 00000000 */   nop   
/* 004117EC 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 004117F0 0000B025 */  move  $s6, $zero
/* 004117F4 8C630000 */  lw    $v1, ($v1)
/* 004117F8 1860004B */  blez  $v1, .L00411928
/* 004117FC 00000000 */   nop   
.L00411800:
/* 00411800 8EAA0168 */  lw    $t2, 0x168($s5)
/* 00411804 0283082A */  slt   $at, $s4, $v1
/* 00411808 01565821 */  addu  $t3, $t2, $s6
/* 0041180C 8D6C000C */  lw    $t4, 0xc($t3)
/* 00411810 8D6D0008 */  lw    $t5, 8($t3)
/* 00411814 8D6F0004 */  lw    $t7, 4($t3)
/* 00411818 8D790000 */  lw    $t9, ($t3)
/* 0041181C 018D7025 */  or    $t6, $t4, $t5
/* 00411820 01CFC025 */  or    $t8, $t6, $t7
/* 00411824 03194025 */  or    $t0, $t8, $t9
/* 00411828 15000003 */  bnez  $t0, .L00411838
/* 0041182C 00000000 */   nop   
/* 00411830 10000039 */  b     .L00411918
/* 00411834 26940080 */   addiu $s4, $s4, 0x80
.L00411838:
/* 00411838 10200037 */  beqz  $at, .L00411918
/* 0041183C 00009825 */   move  $s3, $zero
/* 00411840 2E690080 */  sltiu $t1, $s3, 0x80
.L00411844:
/* 00411844 11200009 */  beqz  $t1, .L0041186C
/* 00411848 00000000 */   nop   
/* 0041184C 8EAA0168 */  lw    $t2, 0x168($s5)
/* 00411850 00136943 */  sra   $t5, $s3, 5
/* 00411854 000D7080 */  sll   $t6, $t5, 2
/* 00411858 01566021 */  addu  $t4, $t2, $s6
/* 0041185C 018E7821 */  addu  $t7, $t4, $t6
/* 00411860 8DEB0000 */  lw    $t3, ($t7)
/* 00411864 026BC004 */  sllv  $t8, $t3, $s3
/* 00411868 2B090000 */  slti  $t1, $t8, 0
.L0041186C:
/* 0041186C 11200021 */  beqz  $t1, .L004118F4
/* 00411870 00000000 */   nop   
/* 00411874 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00411878 02802025 */  move  $a0, $s4
/* 0041187C 8F858CF4 */  lw     $a1, %got(trapconstop)($gp)
/* 00411880 0320F809 */  jalr  $t9
/* 00411884 00000000 */   nop   
/* 00411888 1040001A */  beqz  $v0, .L004118F4
/* 0041188C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411890 8FC80000 */  lw    $t0, ($fp)
/* 00411894 001450C0 */  sll   $t2, $s4, 3
/* 00411898 8F8F8DF0 */  lw     $t7, %got(itable)($gp)
/* 0041189C 010A6821 */  addu  $t5, $t0, $t2
/* 004118A0 8DB10000 */  lw    $s1, ($t5)
/* 004118A4 962C0004 */  lhu   $t4, 4($s1)
/* 004118A8 000C7080 */  sll   $t6, $t4, 2
/* 004118AC 01CF5821 */  addu  $t3, $t6, $t7
/* 004118B0 8D700000 */  lw    $s0, ($t3)
.L004118B4:
/* 004118B4 8F9986F0 */  lw    $t9, %call16(trap_imply)($gp)
/* 004118B8 02202025 */  move  $a0, $s1
/* 004118BC 02002825 */  move  $a1, $s0
/* 004118C0 0320F809 */  jalr  $t9
/* 004118C4 00000000 */   nop   
/* 004118C8 10400007 */  beqz  $v0, .L004118E8
/* 004118CC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004118D0 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004118D4 02402025 */  move  $a0, $s2
/* 004118D8 96050002 */  lhu   $a1, 2($s0)
/* 004118DC 0320F809 */  jalr  $t9
/* 004118E0 00000000 */   nop   
/* 004118E4 8FBC003C */  lw    $gp, 0x3c($sp)
.L004118E8:
/* 004118E8 8E10000C */  lw    $s0, 0xc($s0)
/* 004118EC 1600FFF1 */  bnez  $s0, .L004118B4
/* 004118F0 00000000 */   nop   
.L004118F4:
/* 004118F4 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 004118F8 26940001 */  addiu $s4, $s4, 1
/* 004118FC 26730001 */  addiu $s3, $s3, 1
/* 00411900 8C630000 */  lw    $v1, ($v1)
/* 00411904 0283082A */  slt   $at, $s4, $v1
/* 00411908 10200003 */  beqz  $at, .L00411918
/* 0041190C 24010080 */   li    $at, 128
/* 00411910 5661FFCC */  bnel  $s3, $at, .L00411844
/* 00411914 2E690080 */   sltiu $t1, $s3, 0x80
.L00411918:
/* 00411918 0283082A */  slt   $at, $s4, $v1
/* 0041191C 1420FFB8 */  bnez  $at, .L00411800
/* 00411920 26D60010 */   addiu $s6, $s6, 0x10
/* 00411924 0000A025 */  move  $s4, $zero
.L00411928:
/* 00411928 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 0041192C 02E02025 */  move  $a0, $s7
/* 00411930 8FA50050 */  lw    $a1, 0x50($sp)
/* 00411934 0320F809 */  jalr  $t9
/* 00411938 00000000 */   nop   
/* 0041193C AFA0006C */  sw    $zero, 0x6c($sp)
/* 00411940 AFA00070 */  sw    $zero, 0x70($sp)
/* 00411944 AFA00074 */  sw    $zero, 0x74($sp)
/* 00411948 AFA00078 */  sw    $zero, 0x78($sp)
/* 0041194C 27B8006C */  addiu $t8, $sp, 0x6c
/* 00411950 8F090000 */  lw    $t1, ($t8)
/* 00411954 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411958 8FA40050 */  lw    $a0, 0x50($sp)
/* 0041195C AFA90004 */  sw    $t1, 4($sp)
/* 00411960 8F190004 */  lw    $t9, 4($t8)
/* 00411964 8FA50004 */  lw    $a1, 4($sp)
/* 00411968 AFB90008 */  sw    $t9, 8($sp)
/* 0041196C 8F070008 */  lw    $a3, 8($t8)
/* 00411970 8FA60008 */  lw    $a2, 8($sp)
/* 00411974 AFA7000C */  sw    $a3, 0xc($sp)
/* 00411978 8F19000C */  lw    $t9, 0xc($t8)
/* 0041197C AFB90010 */  sw    $t9, 0x10($sp)
/* 00411980 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00411984 0320F809 */  jalr  $t9
/* 00411988 00000000 */   nop   
/* 0041198C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411990 0000B025 */  move  $s6, $zero
/* 00411994 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 00411998 8C630000 */  lw    $v1, ($v1)
/* 0041199C 186000B0 */  blez  $v1, .L00411C60
/* 004119A0 00000000 */   nop   
.L004119A4:
/* 004119A4 8EA80168 */  lw    $t0, 0x168($s5)
/* 004119A8 0283082A */  slt   $at, $s4, $v1
/* 004119AC 01165021 */  addu  $t2, $t0, $s6
/* 004119B0 8D4D000C */  lw    $t5, 0xc($t2)
/* 004119B4 8D4C0008 */  lw    $t4, 8($t2)
/* 004119B8 8D4F0004 */  lw    $t7, 4($t2)
/* 004119BC 8D580000 */  lw    $t8, ($t2)
/* 004119C0 01AC7025 */  or    $t6, $t5, $t4
/* 004119C4 01CF5825 */  or    $t3, $t6, $t7
/* 004119C8 0178C825 */  or    $t9, $t3, $t8
/* 004119CC 17200003 */  bnez  $t9, .L004119DC
/* 004119D0 00000000 */   nop   
/* 004119D4 1000009F */  b     .L00411C54
/* 004119D8 26940080 */   addiu $s4, $s4, 0x80
.L004119DC:
/* 004119DC 1020009D */  beqz  $at, .L00411C54
/* 004119E0 00009825 */   move  $s3, $zero
/* 004119E4 2E690080 */  sltiu $t1, $s3, 0x80
.L004119E8:
/* 004119E8 11200009 */  beqz  $t1, .L00411A10
/* 004119EC 00000000 */   nop   
/* 004119F0 8EA80168 */  lw    $t0, 0x168($s5)
/* 004119F4 00136143 */  sra   $t4, $s3, 5
/* 004119F8 000C7080 */  sll   $t6, $t4, 2
/* 004119FC 01166821 */  addu  $t5, $t0, $s6
/* 00411A00 01AE7821 */  addu  $t7, $t5, $t6
/* 00411A04 8DEA0000 */  lw    $t2, ($t7)
/* 00411A08 026A5804 */  sllv  $t3, $t2, $s3
/* 00411A0C 29690000 */  slti  $t1, $t3, 0
.L00411A10:
/* 00411A10 5120008A */  beql  $t1, $zero, .L00411C3C
/* 00411A14 26940001 */   addiu $s4, $s4, 1
/* 00411A18 8FD90000 */  lw    $t9, ($fp)
/* 00411A1C 001440C0 */  sll   $t0, $s4, 3
/* 00411A20 24010005 */  li    $at, 5
/* 00411A24 03286021 */  addu  $t4, $t9, $t0
/* 00411A28 8D910000 */  lw    $s1, ($t4)
/* 00411A2C 92220000 */  lbu   $v0, ($s1)
/* 00411A30 5441000B */  bnel  $v0, $at, .L00411A60
/* 00411A34 24010006 */   li    $at, 6
/* 00411A38 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411A3C 8E240020 */  lw    $a0, 0x20($s1)
/* 00411A40 02A02825 */  move  $a1, $s5
/* 00411A44 0320F809 */  jalr  $t9
/* 00411A48 00000000 */   nop   
/* 00411A4C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411A50 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 00411A54 10000074 */  b     .L00411C28
/* 00411A58 8C630000 */   lw    $v1, ($v1)
/* 00411A5C 24010006 */  li    $at, 6
.L00411A60:
/* 00411A60 5441000B */  bnel  $v0, $at, .L00411A90
/* 00411A64 24010004 */   li    $at, 4
/* 00411A68 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411A6C 8E24001C */  lw    $a0, 0x1c($s1)
/* 00411A70 02A02825 */  move  $a1, $s5
/* 00411A74 0320F809 */  jalr  $t9
/* 00411A78 00000000 */   nop   
/* 00411A7C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411A80 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 00411A84 10000068 */  b     .L00411C28
/* 00411A88 8C630000 */   lw    $v1, ($v1)
/* 00411A8C 24010004 */  li    $at, 4
.L00411A90:
/* 00411A90 5041000A */  beql  $v0, $at, .L00411ABC
/* 00411A94 92220010 */   lbu   $v0, 0x10($s1)
/* 00411A98 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 00411A9C 240402BE */  li    $a0, 702
/* 00411AA0 0320F809 */  jalr  $t9
/* 00411AA4 00000000 */   nop   
/* 00411AA8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411AAC 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 00411AB0 1000005D */  b     .L00411C28
/* 00411AB4 8C630000 */   lw    $v1, ($v1)
/* 00411AB8 92220010 */  lbu   $v0, 0x10($s1)
.L00411ABC:
/* 00411ABC 2401007B */  li    $at, 123
/* 00411AC0 5441000B */  bnel  $v0, $at, .L00411AF0
/* 00411AC4 2401003E */   li    $at, 62
/* 00411AC8 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411ACC 8E240018 */  lw    $a0, 0x18($s1)
/* 00411AD0 02A02825 */  move  $a1, $s5
/* 00411AD4 0320F809 */  jalr  $t9
/* 00411AD8 00000000 */   nop   
/* 00411ADC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411AE0 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 00411AE4 10000050 */  b     .L00411C28
/* 00411AE8 8C630000 */   lw    $v1, ($v1)
/* 00411AEC 2401003E */  li    $at, 62
.L00411AF0:
/* 00411AF0 14410010 */  bne   $v0, $at, .L00411B34
/* 00411AF4 244EFFE0 */   addiu $t6, $v0, -0x20
/* 00411AF8 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411AFC 8E2D0014 */  lw    $t5, 0x14($s1)
/* 00411B00 02A02825 */  move  $a1, $s5
/* 00411B04 0320F809 */  jalr  $t9
/* 00411B08 8DA4001C */   lw    $a0, 0x1c($t5)
/* 00411B0C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411B10 8E240018 */  lw    $a0, 0x18($s1)
/* 00411B14 02A02825 */  move  $a1, $s5
/* 00411B18 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411B1C 0320F809 */  jalr  $t9
/* 00411B20 00000000 */   nop   
/* 00411B24 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411B28 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 00411B2C 1000003E */  b     .L00411C28
/* 00411B30 8C630000 */   lw    $v1, ($v1)
.L00411B34:
/* 00411B34 2DCF0080 */  sltiu $t7, $t6, 0x80
/* 00411B38 11E00009 */  beqz  $t7, .L00411B60
/* 00411B3C 00000000 */   nop   
/* 00411B40 8F988044 */  lw    $t8, %got(D_1000FD98)($gp)
/* 00411B44 000E5143 */  sra   $t2, $t6, 5
/* 00411B48 000A5880 */  sll   $t3, $t2, 2
/* 00411B4C 2718FD98 */  addiu $t8, %lo(D_1000FD98) # addiu $t8, $t8, -0x268
/* 00411B50 030B4821 */  addu  $t1, $t8, $t3
/* 00411B54 8D390000 */  lw    $t9, ($t1)
/* 00411B58 01D94004 */  sllv  $t0, $t9, $t6
/* 00411B5C 290F0000 */  slti  $t7, $t0, 0
.L00411B60:
/* 00411B60 11E00010 */  beqz  $t7, .L00411BA4
/* 00411B64 00000000 */   nop   
/* 00411B68 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411B6C 8E240014 */  lw    $a0, 0x14($s1)
/* 00411B70 02A02825 */  move  $a1, $s5
/* 00411B74 0320F809 */  jalr  $t9
/* 00411B78 00000000 */   nop   
/* 00411B7C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411B80 8E240018 */  lw    $a0, 0x18($s1)
/* 00411B84 02A02825 */  move  $a1, $s5
/* 00411B88 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411B8C 0320F809 */  jalr  $t9
/* 00411B90 00000000 */   nop   
/* 00411B94 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411B98 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 00411B9C 10000022 */  b     .L00411C28
/* 00411BA0 8C630000 */   lw    $v1, ($v1)
.L00411BA4:
/* 00411BA4 8F8A8DBC */  lw     $t2, %got(optab)($gp)
/* 00411BA8 00026880 */  sll   $t5, $v0, 2
/* 00411BAC 01A26823 */  subu  $t5, $t5, $v0
/* 00411BB0 01AAC021 */  addu  $t8, $t5, $t2
/* 00411BB4 930B0002 */  lbu   $t3, 2($t8)
/* 00411BB8 2401000A */  li    $at, 10
/* 00411BBC 11600010 */  beqz  $t3, .L00411C00
/* 00411BC0 00000000 */   nop   
/* 00411BC4 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411BC8 8E240014 */  lw    $a0, 0x14($s1)
/* 00411BCC 02A02825 */  move  $a1, $s5
/* 00411BD0 0320F809 */  jalr  $t9
/* 00411BD4 00000000 */   nop   
/* 00411BD8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411BDC 8E240018 */  lw    $a0, 0x18($s1)
/* 00411BE0 02A02825 */  move  $a1, $s5
/* 00411BE4 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411BE8 0320F809 */  jalr  $t9
/* 00411BEC 00000000 */   nop   
/* 00411BF0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411BF4 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 00411BF8 1000000B */  b     .L00411C28
/* 00411BFC 8C630000 */   lw    $v1, ($v1)
.L00411C00:
/* 00411C00 10410009 */  beq   $v0, $at, .L00411C28
/* 00411C04 00000000 */   nop   
/* 00411C08 8F9981F0 */  lw    $t9, %call16(setsubinsert)($gp)
/* 00411C0C 8E240014 */  lw    $a0, 0x14($s1)
/* 00411C10 02A02825 */  move  $a1, $s5
/* 00411C14 0320F809 */  jalr  $t9
/* 00411C18 00000000 */   nop   
/* 00411C1C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411C20 8F8389E0 */  lw     $v1, %got(bitposcount)($gp)
/* 00411C24 8C630000 */  lw    $v1, ($v1)
.L00411C28:
/* 00411C28 8F828B90 */  lw     $v0, %got(numinsert)($gp)
/* 00411C2C 8C490000 */  lw    $t1, ($v0)
/* 00411C30 25390001 */  addiu $t9, $t1, 1
/* 00411C34 AC590000 */  sw    $t9, ($v0)
/* 00411C38 26940001 */  addiu $s4, $s4, 1
.L00411C3C:
/* 00411C3C 0283082A */  slt   $at, $s4, $v1
/* 00411C40 10200004 */  beqz  $at, .L00411C54
/* 00411C44 26730001 */   addiu $s3, $s3, 1
/* 00411C48 24010080 */  li    $at, 128
/* 00411C4C 5661FF66 */  bnel  $s3, $at, .L004119E8
/* 00411C50 2E690080 */   sltiu $t1, $s3, 0x80
.L00411C54:
/* 00411C54 0283082A */  slt   $at, $s4, $v1
/* 00411C58 1420FF52 */  bnez  $at, .L004119A4
/* 00411C5C 26D60010 */   addiu $s6, $s6, 0x10
.L00411C60:
/* 00411C60 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00411C64 8F848D00 */  lw     $a0, %got(savedexp)($gp)
/* 00411C68 8FA50050 */  lw    $a1, 0x50($sp)
/* 00411C6C 0320F809 */  jalr  $t9
/* 00411C70 00000000 */   nop   
/* 00411C74 8EB5000C */  lw    $s5, 0xc($s5)
/* 00411C78 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411C7C 16A0FEBE */  bnez  $s5, .L00411778
/* 00411C80 00000000 */   nop   
.L00411C84:
/* 00411C84 8F8E8B20 */  lw     $t6, %got(outofmem)($gp)
/* 00411C88 91CE0000 */  lbu   $t6, ($t6)
/* 00411C8C 55C00109 */  bnezl $t6, .L004120B4
/* 00411C90 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00411C94 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 00411C98 27B7005C */  addiu $s7, $sp, 0x5c
/* 00411C9C 2413000F */  li    $s3, 15
/* 00411CA0 8EB50000 */  lw    $s5, ($s5)
/* 00411CA4 52A00103 */  beql  $s5, $zero, .L004120B4
/* 00411CA8 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00411CAC 8F9E8CF0 */  lw     $fp, %got(trapop)($gp)
.L00411CB0:
/* 00411CB0 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00411CB4 26B4012C */  addiu $s4, $s5, 0x12c
/* 00411CB8 26B20144 */  addiu $s2, $s5, 0x144
/* 00411CBC AFB5016C */  sw    $s5, 0x16c($sp)
/* 00411CC0 02402825 */  move  $a1, $s2
/* 00411CC4 02802025 */  move  $a0, $s4
/* 00411CC8 0320F809 */  jalr  $t9
/* 00411CCC 00008025 */   move  $s0, $zero
/* 00411CD0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411CD4 26B60124 */  addiu $s6, $s5, 0x124
/* 00411CD8 02C02025 */  move  $a0, $s6
/* 00411CDC 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00411CE0 02802825 */  move  $a1, $s4
/* 00411CE4 0320F809 */  jalr  $t9
/* 00411CE8 00000000 */   nop   
/* 00411CEC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411CF0 02C02025 */  move  $a0, $s6
/* 00411CF4 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00411CF8 8F858CFC */  lw     $a1, %got(boolexp)($gp)
/* 00411CFC 0320F809 */  jalr  $t9
/* 00411D00 00000000 */   nop   
/* 00411D04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411D08 02C02025 */  move  $a0, $s6
/* 00411D0C 26A50104 */  addiu $a1, $s5, 0x104
/* 00411D10 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00411D14 0320F809 */  jalr  $t9
/* 00411D18 00000000 */   nop   
/* 00411D1C AFA0005C */  sw    $zero, 0x5c($sp)
/* 00411D20 AFA00060 */  sw    $zero, 0x60($sp)
/* 00411D24 AFA00064 */  sw    $zero, 0x64($sp)
/* 00411D28 AFA00068 */  sw    $zero, 0x68($sp)
/* 00411D2C 8EEC0000 */  lw    $t4, ($s7)
/* 00411D30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411D34 02402025 */  move  $a0, $s2
/* 00411D38 AFAC0004 */  sw    $t4, 4($sp)
/* 00411D3C 8EE80004 */  lw    $t0, 4($s7)
/* 00411D40 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00411D44 8FA50004 */  lw    $a1, 4($sp)
/* 00411D48 AFA80008 */  sw    $t0, 8($sp)
/* 00411D4C 8EE70008 */  lw    $a3, 8($s7)
/* 00411D50 8FA60008 */  lw    $a2, 8($sp)
/* 00411D54 AFA7000C */  sw    $a3, 0xc($sp)
/* 00411D58 8EE8000C */  lw    $t0, 0xc($s7)
/* 00411D5C 0320F809 */  jalr  $t9
/* 00411D60 AFA80010 */   sw    $t0, 0x10($sp)
/* 00411D64 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411D68 02402025 */  move  $a0, $s2
/* 00411D6C 02C02825 */  move  $a1, $s6
/* 00411D70 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00411D74 0320F809 */  jalr  $t9
/* 00411D78 00000000 */   nop   
/* 00411D7C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411D80 02402025 */  move  $a0, $s2
/* 00411D84 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00411D88 8F858CEC */  lw     $a1, %got(storeop)($gp)
/* 00411D8C 0320F809 */  jalr  $t9
/* 00411D90 00000000 */   nop   
/* 00411D94 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411D98 02402025 */  move  $a0, $s2
/* 00411D9C 03C02825 */  move  $a1, $fp
/* 00411DA0 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00411DA4 0320F809 */  jalr  $t9
/* 00411DA8 00000000 */   nop   
/* 00411DAC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411DB0 8EB1001C */  lw    $s1, 0x1c($s5)
/* 00411DB4 92220000 */  lbu   $v0, ($s1)
.L00411DB8:
/* 00411DB8 2443FFE0 */  addiu $v1, $v0, -0x20
/* 00411DBC 2C6F0060 */  sltiu $t7, $v1, 0x60
/* 00411DC0 11E00009 */  beqz  $t7, .L00411DE8
/* 00411DC4 00000000 */   nop   
/* 00411DC8 8F988044 */  lw    $t8, %got(D_1000FD8C)($gp)
/* 00411DCC 00036943 */  sra   $t5, $v1, 5
/* 00411DD0 000D5080 */  sll   $t2, $t5, 2
/* 00411DD4 2718FD8C */  addiu $t8, %lo(D_1000FD8C) # addiu $t8, $t8, -0x274
/* 00411DD8 030A5821 */  addu  $t3, $t8, $t2
/* 00411DDC 8D690000 */  lw    $t1, ($t3)
/* 00411DE0 0069C804 */  sllv  $t9, $t1, $v1
/* 00411DE4 2B2F0000 */  slti  $t7, $t9, 0
.L00411DE8:
/* 00411DE8 11E00032 */  beqz  $t7, .L00411EB4
/* 00411DEC 2C790080 */   sltiu $t9, $v1, 0x80
/* 00411DF0 92280003 */  lbu   $t0, 3($s1)
/* 00411DF4 55000099 */  bnezl $t0, .L0041205C
/* 00411DF8 8E220008 */   lw    $v0, 8($s1)
/* 00411DFC 8E220028 */  lw    $v0, 0x28($s1)
/* 00411E00 14400008 */  bnez  $v0, .L00411E24
/* 00411E04 00000000 */   nop   
/* 00411E08 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00411E0C 8E2C0004 */  lw    $t4, 4($s1)
/* 00411E10 02A02825 */  move  $a1, $s5
/* 00411E14 0320F809 */  jalr  $t9
/* 00411E18 8D840034 */   lw    $a0, 0x34($t4)
/* 00411E1C 10000011 */  b     .L00411E64
/* 00411E20 8FBC003C */   lw    $gp, 0x3c($sp)
.L00411E24:
/* 00411E24 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00411E28 94440002 */  lhu   $a0, 2($v0)
/* 00411E2C 02C02825 */  move  $a1, $s6
/* 00411E30 0320F809 */  jalr  $t9
/* 00411E34 00000000 */   nop   
/* 00411E38 10400004 */  beqz  $v0, .L00411E4C
/* 00411E3C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411E40 922D001E */  lbu   $t5, 0x1e($s1)
/* 00411E44 55A00008 */  bnezl $t5, .L00411E68
/* 00411E48 922A0000 */   lbu   $t2, ($s1)
.L00411E4C:
/* 00411E4C 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00411E50 8E380004 */  lw    $t8, 4($s1)
/* 00411E54 02A02825 */  move  $a1, $s5
/* 00411E58 0320F809 */  jalr  $t9
/* 00411E5C 8F040034 */   lw    $a0, 0x34($t8)
/* 00411E60 8FBC003C */  lw    $gp, 0x3c($sp)
.L00411E64:
/* 00411E64 922A0000 */  lbu   $t2, ($s1)
.L00411E68:
/* 00411E68 2401003E */  li    $at, 62
/* 00411E6C 55410008 */  bnel  $t2, $at, .L00411E90
/* 00411E70 92290001 */   lbu   $t1, 1($s1)
/* 00411E74 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00411E78 8E2B0004 */  lw    $t3, 4($s1)
/* 00411E7C 02A02825 */  move  $a1, $s5
/* 00411E80 0320F809 */  jalr  $t9
/* 00411E84 8D640024 */   lw    $a0, 0x24($t3)
/* 00411E88 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411E8C 92290001 */  lbu   $t1, 1($s1)
.L00411E90:
/* 00411E90 51200072 */  beql  $t1, $zero, .L0041205C
/* 00411E94 8E220008 */   lw    $v0, 8($s1)
/* 00411E98 8F998200 */  lw    $t9, %call16(delete_unmoved_recur)($gp)
/* 00411E9C 02202025 */  move  $a0, $s1
/* 00411EA0 02A02825 */  move  $a1, $s5
/* 00411EA4 0320F809 */  jalr  $t9
/* 00411EA8 00000000 */   nop   
/* 00411EAC 1000006A */  b     .L00412058
/* 00411EB0 8FBC003C */   lw    $gp, 0x3c($sp)
.L00411EB4:
/* 00411EB4 13200009 */  beqz  $t9, .L00411EDC
/* 00411EB8 2C4900A0 */   sltiu $t1, $v0, 0xa0
/* 00411EBC 8F888044 */  lw    $t0, %got(D_1000FD7C)($gp)
/* 00411EC0 00037143 */  sra   $t6, $v1, 5
/* 00411EC4 000E7880 */  sll   $t7, $t6, 2
/* 00411EC8 2508FD7C */  addiu $t0, %lo(D_1000FD7C) # addiu $t0, $t0, -0x284
/* 00411ECC 010F6021 */  addu  $t4, $t0, $t7
/* 00411ED0 8D8D0000 */  lw    $t5, ($t4)
/* 00411ED4 006DC004 */  sllv  $t8, $t5, $v1
/* 00411ED8 2B190000 */  slti  $t9, $t8, 0
.L00411EDC:
/* 00411EDC 13200028 */  beqz  $t9, .L00411F80
/* 00411EE0 00000000 */   nop   
/* 00411EE4 8E220028 */  lw    $v0, 0x28($s1)
/* 00411EE8 1440000E */  bnez  $v0, .L00411F24
/* 00411EEC 00000000 */   nop   
/* 00411EF0 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00411EF4 8E240004 */  lw    $a0, 4($s1)
/* 00411EF8 02A02825 */  move  $a1, $s5
/* 00411EFC 0320F809 */  jalr  $t9
/* 00411F00 00000000 */   nop   
/* 00411F04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411F08 8E240014 */  lw    $a0, 0x14($s1)
/* 00411F0C 02A02825 */  move  $a1, $s5
/* 00411F10 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00411F14 0320F809 */  jalr  $t9
/* 00411F18 00000000 */   nop   
/* 00411F1C 1000004E */  b     .L00412058
/* 00411F20 8FBC003C */   lw    $gp, 0x3c($sp)
.L00411F24:
/* 00411F24 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00411F28 94440002 */  lhu   $a0, 2($v0)
/* 00411F2C 02C02825 */  move  $a1, $s6
/* 00411F30 0320F809 */  jalr  $t9
/* 00411F34 00000000 */   nop   
/* 00411F38 10400004 */  beqz  $v0, .L00411F4C
/* 00411F3C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411F40 922B001E */  lbu   $t3, 0x1e($s1)
/* 00411F44 55600045 */  bnezl $t3, .L0041205C
/* 00411F48 8E220008 */   lw    $v0, 8($s1)
.L00411F4C:
/* 00411F4C 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00411F50 8E240004 */  lw    $a0, 4($s1)
/* 00411F54 02A02825 */  move  $a1, $s5
/* 00411F58 0320F809 */  jalr  $t9
/* 00411F5C 00000000 */   nop   
/* 00411F60 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411F64 8E240014 */  lw    $a0, 0x14($s1)
/* 00411F68 02A02825 */  move  $a1, $s5
/* 00411F6C 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00411F70 0320F809 */  jalr  $t9
/* 00411F74 00000000 */   nop   
/* 00411F78 10000037 */  b     .L00412058
/* 00411F7C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00411F80:
/* 00411F80 11200009 */  beqz  $t1, .L00411FA8
/* 00411F84 00000000 */   nop   
/* 00411F88 8F8F8044 */  lw    $t7, %got(D_1000FD68)($gp)
/* 00411F8C 00027143 */  sra   $t6, $v0, 5
/* 00411F90 000E4080 */  sll   $t0, $t6, 2
/* 00411F94 25EFFD68 */  addiu $t7, %lo(D_1000FD68) # addiu $t7, $t7, -0x298
/* 00411F98 01E86021 */  addu  $t4, $t7, $t0
/* 00411F9C 8D8D0000 */  lw    $t5, ($t4)
/* 00411FA0 004DC004 */  sllv  $t8, $t5, $v0
/* 00411FA4 2B090000 */  slti  $t1, $t8, 0
.L00411FA8:
/* 00411FA8 11200019 */  beqz  $t1, .L00412010
/* 00411FAC 2C4E00A0 */   sltiu $t6, $v0, 0xa0
/* 00411FB0 8E390028 */  lw    $t9, 0x28($s1)
/* 00411FB4 02C02825 */  move  $a1, $s6
/* 00411FB8 97240002 */  lhu   $a0, 2($t9)
/* 00411FBC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00411FC0 0320F809 */  jalr  $t9
/* 00411FC4 00000000 */   nop   
/* 00411FC8 14400023 */  bnez  $v0, .L00412058
/* 00411FCC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00411FD0 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00411FD4 8E240004 */  lw    $a0, 4($s1)
/* 00411FD8 02A02825 */  move  $a1, $s5
/* 00411FDC 0320F809 */  jalr  $t9
/* 00411FE0 00000000 */   nop   
/* 00411FE4 922B0000 */  lbu   $t3, ($s1)
/* 00411FE8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00411FEC 526B001B */  beql  $s3, $t3, .L0041205C
/* 00411FF0 8E220008 */   lw    $v0, 8($s1)
/* 00411FF4 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00411FF8 8E240014 */  lw    $a0, 0x14($s1)
/* 00411FFC 02A02825 */  move  $a1, $s5
/* 00412000 0320F809 */  jalr  $t9
/* 00412004 00000000 */   nop   
/* 00412008 10000013 */  b     .L00412058
/* 0041200C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00412010:
/* 00412010 11C00009 */  beqz  $t6, .L00412038
/* 00412014 00000000 */   nop   
/* 00412018 8F8C8044 */  lw    $t4, %got(D_1000FD54)($gp)
/* 0041201C 00027943 */  sra   $t7, $v0, 5
/* 00412020 000F4080 */  sll   $t0, $t7, 2
/* 00412024 258CFD54 */  addiu $t4, %lo(D_1000FD54) # addiu $t4, $t4, -0x2ac
/* 00412028 01886821 */  addu  $t5, $t4, $t0
/* 0041202C 8DB80000 */  lw    $t8, ($t5)
/* 00412030 00585004 */  sllv  $t2, $t8, $v0
/* 00412034 294E0000 */  slti  $t6, $t2, 0
.L00412038:
/* 00412038 55C00008 */  bnezl $t6, .L0041205C
/* 0041203C 8E220008 */   lw    $v0, 8($s1)
/* 00412040 8F9981EC */  lw    $t9, %call16(resetsubdelete)($gp)
/* 00412044 8E240004 */  lw    $a0, 4($s1)
/* 00412048 02A02825 */  move  $a1, $s5
/* 0041204C 0320F809 */  jalr  $t9
/* 00412050 00000000 */   nop   
/* 00412054 8FBC003C */  lw    $gp, 0x3c($sp)
.L00412058:
/* 00412058 8E220008 */  lw    $v0, 8($s1)
.L0041205C:
/* 0041205C 10400006 */  beqz  $v0, .L00412078
/* 00412060 00000000 */   nop   
/* 00412064 8C590010 */  lw    $t9, 0x10($v0)
/* 00412068 8E2B0010 */  lw    $t3, 0x10($s1)
/* 0041206C 032B8026 */  xor   $s0, $t9, $t3
/* 00412070 0010802B */  sltu  $s0, $zero, $s0
/* 00412074 321000FF */  andi  $s0, $s0, 0xff
.L00412078:
/* 00412078 10400003 */  beqz  $v0, .L00412088
/* 0041207C 00408825 */   move  $s1, $v0
/* 00412080 5200FF4D */  beql  $s0, $zero, .L00411DB8
/* 00412084 92220000 */   lbu   $v0, ($s1)
.L00412088:
/* 00412088 8F9981B0 */  lw    $t9, %call16(unionminus)($gp)
/* 0041208C 8F848D00 */  lw     $a0, %got(savedexp)($gp)
/* 00412090 02C02825 */  move  $a1, $s6
/* 00412094 0320F809 */  jalr  $t9
/* 00412098 02403025 */   move  $a2, $s2
/* 0041209C 8FAF016C */  lw    $t7, 0x16c($sp)
/* 004120A0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004120A4 8DF5000C */  lw    $s5, 0xc($t7)
/* 004120A8 16A0FF01 */  bnez  $s5, .L00411CB0
/* 004120AC 00000000 */   nop   
.L004120B0:
/* 004120B0 8FBF0044 */  lw    $ra, 0x44($sp)
.L004120B4:
/* 004120B4 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004120B8 8FB10020 */  lw    $s1, 0x20($sp)
/* 004120BC 8FB20024 */  lw    $s2, 0x24($sp)
/* 004120C0 8FB30028 */  lw    $s3, 0x28($sp)
/* 004120C4 8FB4002C */  lw    $s4, 0x2c($sp)
/* 004120C8 8FB50030 */  lw    $s5, 0x30($sp)
/* 004120CC 8FB60034 */  lw    $s6, 0x34($sp)
/* 004120D0 8FB70038 */  lw    $s7, 0x38($sp)
/* 004120D4 8FBE0040 */  lw    $fp, 0x40($sp)
/* 004120D8 03E00008 */  jr    $ra
/* 004120DC 27BD01F8 */   addiu $sp, $sp, 0x1f8
    .type codemotion, @function
    .size codemotion, .-codemotion
    .end codemotion
)"");
