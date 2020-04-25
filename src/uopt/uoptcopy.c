__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000A1D0:
    # 004120E0 entryav
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A1DC:
    # 004120E0 entryav
    .gpword .L00412140
    .gpword .L00412140
    .gpword .L00412174
    .gpword .L004121A4
    .gpword .L00412148
    .gpword .L00412174
    .gpword .L004121AC
    .gpword .L00412140

RO_1000A1FC:
    # 004121E4 entryant
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A208:
    # 004121E4 entryant
    .gpword .L00412244
    .gpword .L00412244
    .gpword .L00412270
    .gpword .L00412298
    .gpword .L0041224C
    .gpword .L00412270
    .gpword .L004122A0
    .gpword .L00412244

RO_1000A228:
    # 0041297C func_0041297C
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A234:
    # 0041297C func_0041297C
    .gpword .L004129E0
    .gpword .L004129E0
    .gpword .L00412A04
    .gpword .L00412A50
    .gpword .L004129E8
    .gpword .L00412A04
    .gpword .L00412AD8
    .gpword .L004129E0

RO_1000A254:
    # 00412B18 func_00412B18
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A260:
    # 00412B18 func_00412B18
    .gpword .L00412B7C
    .gpword .L00412B7C
    .gpword .L00412BA0
    .gpword .L00412BEC
    .gpword .L00412B84
    .gpword .L00412BA0
    .gpword .L00412C74
    .gpword .L00412B7C

RO_1000A280:
    # 00413000 exprdelete
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A28C:
    # 00413000 exprdelete
    .gpword .L00413414
    .gpword .L00413414
    .gpword .L00413124
    .gpword .L00413280
    .gpword .L00413058
    .gpword .L00413124
    .gpword .L004133F4
    .gpword .L00413414

RO_1000A2AC:
    # 00413510 func_00413510
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A2B8:
    # 00413510 func_00413510
    .gpword .L004135BC
    .gpword .L004135BC
    .gpword .L00413564
    .gpword .L0041358C
    .gpword .L0041358C
    .gpword .L00413564
    .gpword .L0041359C
    .gpword .L004135BC

RO_1000A2D8:
    # 004135CC func_004135CC
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A2E4:
    # 004135CC func_004135CC
    .gpword .L00413674
    .gpword .L00413674
    .gpword .L00413610
    .gpword .L00413644
    .gpword .L00413644
    .gpword .L00413610
    .gpword .L00413654
    .gpword .L00413674

RO_1000A304:
    # 00413684 func_00413684
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A310:
    # 00413684 func_00413684
    .gpword .L004137CC
    .gpword .L004137CC
    .gpword .L004136D4
    .gpword .L0041372C
    .gpword .L004136F4
    .gpword .L004136D4
    .gpword .L004137AC
    .gpword .L004137CC

RO_1000A330:
    # 004137DC func_004137DC
    .ascii "uoptcopy.p"

RO_1000A33A:
    # 004137DC func_004137DC
    .ascii "uoptcopy.p"

    .balign 4
jtbl_1000A344:
    # 004137DC func_004137DC
    .gpword .L00413CB4
    .gpword .L00413B2C
    .gpword .L00413D70
    .gpword .L00413FF0
    .gpword .L00413B2C
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413BC4
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413CE8
    .gpword .L00413CE8
    .gpword .L00413DA4

    .balign 4
jtbl_1000A380:
    # 004137DC func_004137DC
    .gpword .L00413D2C
    .gpword .L00413CE8
    .gpword .L00413CE8
    .gpword .L00413FF0
    .gpword .L00413BC4
    .gpword .L00413BC4

    .balign 4
jtbl_1000A398:
    # 004137DC func_004137DC
    .gpword .L00413C04
    .gpword .L00413C04
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413E20
    .gpword .L00413E64
    .gpword .L00413E64
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413DFC
    .gpword .L00413E64
    .gpword .L00413E64
    .gpword .L00413DB8
    .gpword .L00413CE8
    .gpword .L00413E20
    .gpword .L00413FF0
    .gpword .L00413C34
    .gpword .L00413B2C
    .gpword .L00413B2C

    .balign 4
jtbl_1000A3EC:
    # 004137DC func_004137DC
    .gpword .L00413C04
    .gpword .L00413C04
    .gpword .L00413FF0
    .gpword .L00413CB4
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413BC4
    .gpword .L00413BC4
    .gpword .L00413BC4
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413B2C
    .gpword .L00413FF0
    .gpword .L00413BC4
    .gpword .L00413CB4
    .gpword .L00413B80
    .gpword .L00413FF0
    .gpword .L00413CB4
    .gpword .L00413CB4

    .balign 4
jtbl_1000A444:
    # 004137DC func_004137DC
    .gpword .L00413D2C
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413CB4
    .gpword .L00413BC4
    .gpword .L00413BC4
    .gpword .L00413BC4
    .gpword .L00413CB4
    .gpword .L00413CB4

    .balign 4
jtbl_1000A46C:
    # 004137DC func_004137DC
    .gpword .L00413D2C
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413B2C
    .gpword .L00413FF0
    .gpword .L00413FF0
    .gpword .L00413B2C

    .balign 4
jtbl_1000A48C:
    # 004137DC func_004137DC
    .gpword .L004139A4
    .gpword .L004138A0
    .gpword .L00413A80
    .gpword .L00413B08
    .gpword .L00413A18
    .gpword .L00413AC4
    .gpword .L00414064
    .gpword .L00413964

RO_1000A4AC:
    # 00414108 func_00414108
    .ascii "uoptcopy.p"

RO_1000A4B6:
    # 00414108 func_00414108
    .ascii "uoptcopy.p"

    .balign 4
jtbl_1000A4C0:
    # 00414108 func_00414108
    .gpword .L00414EA8
    .gpword .L00414EA8
    .gpword .L00414C34
    .gpword .L00414E20
    .gpword .L00414EA8
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414EA8
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414C1C
    .gpword .L00414C1C
    .gpword .L00414EA8

    .balign 4
jtbl_1000A4FC:
    # 00414108 func_00414108
    .gpword .L00414C28
    .gpword .L00414C1C
    .gpword .L00414C1C
    .gpword .L00414E20
    .gpword .L00414BEC
    .gpword .L00414EA8

    .balign 4
jtbl_1000A514:
    # 00414108 func_00414108
    .gpword .L00414B90
    .gpword .L00414B90
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414C88
    .gpword .L00414CC0
    .gpword .L00414CC0
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414C4C
    .gpword .L00414CC0
    .gpword .L00414CC0
    .gpword .L00414C4C
    .gpword .L00414C1C
    .gpword .L00414C88
    .gpword .L00414E20
    .gpword .L00414BF8
    .gpword .L00414BEC
    .gpword .L00414EA8
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414C10
    .gpword .L00414E20
    .gpword .L00414EA8

    .balign 4
jtbl_1000A584:
    # 00414108 func_00414108
    .gpword .L00414B90
    .gpword .L00414B90
    .gpword .L00414E20
    .gpword .L00414EA8
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414EA8
    .gpword .L00414EA8
    .gpword .L00414EA8
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414EA8
    .gpword .L00414E20
    .gpword .L00414EA8
    .gpword .L00414EA8
    .gpword .L00414B90
    .gpword .L00414E20
    .gpword .L00414EA8
    .gpword .L00414EA8

    .balign 4
jtbl_1000A5DC:
    # 00414108 func_00414108
    .gpword .L00414C28
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414BEC
    .gpword .L00414EA8
    .gpword .L00414EA8
    .gpword .L00414EA8
    .gpword .L00414EA8
    .gpword .L00414EA8

    .balign 4
jtbl_1000A604:
    # 00414108 func_00414108
    .gpword .L00414C28
    .gpword .L00414EA8
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414BEC
    .gpword .L00414E20
    .gpword .L00414E20
    .gpword .L00414EA8

    .balign 4
jtbl_1000A624:
    # 00414108 func_00414108
    .gpword .L004141E0
    .gpword .L00414388
    .gpword .L0041468C
    .gpword .L004148E4
    .gpword .L004141E0
    .gpword .L0041468C
    .gpword .L004150AC
    .gpword .L004145E8

RO_1000A644:
    # 0041550C func_0041550C
    .ascii "uoptcopy.p"

RO_1000A64E:
    # 0041550C func_0041550C
    .ascii "uoptcopy.p"

RO_1000A658:
    # 0041550C func_0041550C
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A664:
    # 0041550C func_0041550C
    .gpword .L004163D0
    .gpword .L004163F8

    .balign 4
jtbl_1000A66C:
    # 0041550C func_0041550C
    .gpword .L00416E90
    .gpword .L00416EDC

    .balign 4
jtbl_1000A674:
    # 0041550C func_0041550C
    .gpword .L00415590
    .gpword .L00415590
    .gpword .L004155B4
    .gpword .L00415E54
    .gpword .L00415590
    .gpword .L004155B4
    .gpword .L0041739C
    .gpword .L00415590

RO_1000A694:
    # 004175BC copypropagate
    .ascii " SECONDS IN COPY PROPAGATION OF "

RO_1000A6B4:
    # 004175BC copypropagate
    .ascii " * * "

RO_1000A6B9:
    # 004175BC copypropagate
    .asciz "uoptcopy.p"

    .balign 4
jtbl_1000A6C4:
    # 004175BC copypropagate
    .gpword .L00417E20
    .gpword .L00417EF4
    .gpword .L00417EC0
    .gpword .L00417E84
    .gpword .L00417E50
    .gpword .L00417E38

.data
D_1000FDB0:
    # 004123C4 varinsert
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_1000FDBC:
    # 004123C4 varinsert
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10

D_1000FDCC:
    # 004127C8 checkexpoccur
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10

D_1000FDDC:
    # 004127C8 checkexpoccur
    .byte 0x10,0x80,0xe7,0x12,0x80,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x40,0x00,0x82,0x00,0x00

D_1000FDF0:
    # 004127C8 checkexpoccur
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_1000FDFC:
    # 00412CB4 checkexp_ant_av
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10

D_1000FE0C:
    # 00412CB4 checkexp_ant_av
    .byte 0x10,0x80,0xe7,0x12,0x80,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x40,0x00,0x82,0x00,0x00

D_1000FE20:
    # 00412CB4 checkexp_ant_av
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_1000FE2C:
    # 00413000 exprdelete
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_1000FE3C:
    # 00413428 checkstatoccur
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_1000FE48:
    # 00414108 func_00414108
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_1000FE58:
    # 00414108 func_00414108
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_1000FE60:
    # 00414108 func_00414108
    .byte 0x20,0x0c,0x00,0x60,0x00,0x00,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_1000FE74:
    # 004150E4 func_004150E4
    .byte 0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_1000FE84:
    # 0041550C func_0041550C
    .byte 0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_1000FE94:
    # 0041550C func_0041550C
    .byte 0x20,0x0c,0x00,0x60,0x00,0x00,0x11,0x00

D_1000FE9C:
    # 0041550C func_0041550C
    .byte 0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00

D_1000FEAC:
    # 0041550C func_0041550C
    .byte 0x80,0x0c,0x00,0x60,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0x02,0x20,0x00,0x02,0x00

D_1000FEBC:
    # 0041550C func_0041550C
    .byte 0x40,0x00,0x00,0x20,0x00,0x00,0x01,0x00,0x40,0x00,0x00,0x02,0x00,0x00,0x00,0x04

D_1000FECC:
    # 0041550C func_0041550C
    .byte 0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x04

D_1000FED8:
    # 0041550C func_0041550C
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_1000FEE8:
    # 0041550C func_0041550C
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_1000FEF0:
    # 0041550C func_0041550C
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_1000FEFC:
    # 0041550C func_0041550C
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_1000FF04:
    # 0041550C func_0041550C
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_1000FF10:
    # 004175BC copypropagate
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_1000FF18:
    # 004175BC copypropagate
    .byte 0x10,0x80,0xe7,0x12,0x80,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x40,0x00,0x82,0x00,0x00

D_1000FF2C:
    # 004175BC copypropagate
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10

D_1000FF3C:
    # 004175BC copypropagate
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10

D_1000FF4C:
    # 004175BC copypropagate
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00

D_1000FF54:
    # 004175BC copypropagate
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10

D_1000FF64:
    # 004175BC copypropagate
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel entryav
    .ent entryav
    # 00414108 func_00414108
    # 0041550C func_0041550C
    # 004175BC copypropagate
/* 004120E0 3C1C0FC1 */  .cpload $t9
/* 004120E4 279C81B0 */  
/* 004120E8 0399E021 */  
/* 004120EC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004120F0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004120F4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004120F8 8F8589CC */  lw     $a1, %got(nocopy)($gp)
.L004120FC:
/* 004120FC 54800004 */  bnezl $a0, .L00412110
/* 00412100 90820000 */   lbu   $v0, ($a0)
/* 00412104 10000032 */  b     .L004121D0
/* 00412108 00001825 */   move  $v1, $zero
/* 0041210C 90820000 */  lbu   $v0, ($a0)
.L00412110:
/* 00412110 00801825 */  move  $v1, $a0
/* 00412114 244EFFFF */  addiu $t6, $v0, -1
/* 00412118 2DC10008 */  sltiu $at, $t6, 8
/* 0041211C 10200023 */  beqz  $at, .L004121AC
/* 00412120 00000000 */   nop   
/* 00412124 8F818044 */  lw    $at, %got(jtbl_1000A1DC)($gp)
/* 00412128 000E7080 */  sll   $t6, $t6, 2
/* 0041212C 002E0821 */  addu  $at, $at, $t6
/* 00412130 8C2EA1DC */  lw    $t6, %lo(jtbl_1000A1DC)($at)
/* 00412134 01DC7021 */  addu  $t6, $t6, $gp
/* 00412138 01C00008 */  jr    $t6
/* 0041213C 00000000 */   nop   
.L00412140:
/* 00412140 10000023 */  b     .L004121D0
/* 00412144 24030001 */   li    $v1, 1
.L00412148:
/* 00412148 8C820034 */  lw    $v0, 0x34($a0)
/* 0041214C 24010006 */  li    $at, 6
/* 00412150 904F0000 */  lbu   $t7, ($v0)
/* 00412154 51E10004 */  beql  $t7, $at, .L00412168
/* 00412158 90430002 */   lbu   $v1, 2($v0)
/* 0041215C 1000001C */  b     .L004121D0
/* 00412160 24030001 */   li    $v1, 1
/* 00412164 90430002 */  lbu   $v1, 2($v0)
.L00412168:
/* 00412168 2C630001 */  sltiu $v1, $v1, 1
/* 0041216C 10000018 */  b     .L004121D0
/* 00412170 306300FF */   andi  $v1, $v1, 0xff
.L00412174:
/* 00412174 8C820030 */  lw    $v0, 0x30($a0)
/* 00412178 50400007 */  beql  $v0, $zero, .L00412198
/* 0041217C 90830002 */   lbu   $v1, 2($a0)
/* 00412180 8CB80000 */  lw    $t8, ($a1)
/* 00412184 53020004 */  beql  $t8, $v0, .L00412198
/* 00412188 90830002 */   lbu   $v1, 2($a0)
/* 0041218C 1000FFDB */  b     .L004120FC
/* 00412190 8C640030 */   lw    $a0, 0x30($v1)
/* 00412194 90830002 */  lbu   $v1, 2($a0)
.L00412198:
/* 00412198 2C630001 */  sltiu $v1, $v1, 1
/* 0041219C 1000000C */  b     .L004121D0
/* 004121A0 306300FF */   andi  $v1, $v1, 0xff
.L004121A4:
/* 004121A4 1000000A */  b     .L004121D0
/* 004121A8 90830022 */   lbu   $v1, 0x22($a0)
.L004121AC:
/* 004121AC 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004121B0 8F868044 */  lw    $a2, %got(RO_1000A1D0)($gp)
/* 004121B4 24040001 */  li    $a0, 1
/* 004121B8 24050046 */  li    $a1, 70
/* 004121BC 2407000A */  li    $a3, 10
/* 004121C0 0320F809 */  jalr  $t9
/* 004121C4 24C6A1D0 */   addiu $a2, %lo(RO_1000A1D0) # addiu $a2, $a2, -0x5e30
/* 004121C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004121CC 93A30027 */  lbu   $v1, 0x27($sp)
.L004121D0:
/* 004121D0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004121D4 27BD0028 */  addiu $sp, $sp, 0x28
/* 004121D8 00601025 */  move  $v0, $v1
/* 004121DC 03E00008 */  jr    $ra
/* 004121E0 00000000 */   nop   
    .type entryav, @function
    .size entryav, .-entryav
    .end entryav

glabel entryant
    .ent entryant
    # 0041550C func_0041550C
    # 004175BC copypropagate
/* 004121E4 3C1C0FC1 */  .cpload $t9
/* 004121E8 279C80AC */  
/* 004121EC 0399E021 */  
/* 004121F0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004121F4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004121F8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004121FC 8F8589CC */  lw     $a1, %got(nocopy)($gp)
.L00412200:
/* 00412200 54800004 */  bnezl $a0, .L00412214
/* 00412204 90820000 */   lbu   $v0, ($a0)
/* 00412208 1000002E */  b     .L004122C4
/* 0041220C 00001825 */   move  $v1, $zero
/* 00412210 90820000 */  lbu   $v0, ($a0)
.L00412214:
/* 00412214 00801825 */  move  $v1, $a0
/* 00412218 244EFFFF */  addiu $t6, $v0, -1
/* 0041221C 2DC10008 */  sltiu $at, $t6, 8
/* 00412220 1020001F */  beqz  $at, .L004122A0
/* 00412224 00000000 */   nop   
/* 00412228 8F818044 */  lw    $at, %got(jtbl_1000A208)($gp)
/* 0041222C 000E7080 */  sll   $t6, $t6, 2
/* 00412230 002E0821 */  addu  $at, $at, $t6
/* 00412234 8C2EA208 */  lw    $t6, %lo(jtbl_1000A208)($at)
/* 00412238 01DC7021 */  addu  $t6, $t6, $gp
/* 0041223C 01C00008 */  jr    $t6
/* 00412240 00000000 */   nop   
.L00412244:
/* 00412244 1000001F */  b     .L004122C4
/* 00412248 24030001 */   li    $v1, 1
.L0041224C:
/* 0041224C 8C820034 */  lw    $v0, 0x34($a0)
/* 00412250 24010006 */  li    $at, 6
/* 00412254 904F0000 */  lbu   $t7, ($v0)
/* 00412258 11E10003 */  beq   $t7, $at, .L00412268
/* 0041225C 00000000 */   nop   
/* 00412260 10000018 */  b     .L004122C4
/* 00412264 24030001 */   li    $v1, 1
.L00412268:
/* 00412268 10000016 */  b     .L004122C4
/* 0041226C 90430003 */   lbu   $v1, 3($v0)
.L00412270:
/* 00412270 8C820030 */  lw    $v0, 0x30($a0)
/* 00412274 10400006 */  beqz  $v0, .L00412290
/* 00412278 00000000 */   nop   
/* 0041227C 8CB80000 */  lw    $t8, ($a1)
/* 00412280 13020003 */  beq   $t8, $v0, .L00412290
/* 00412284 00000000 */   nop   
/* 00412288 1000FFDD */  b     .L00412200
/* 0041228C 8C640030 */   lw    $a0, 0x30($v1)
.L00412290:
/* 00412290 1000000C */  b     .L004122C4
/* 00412294 90830003 */   lbu   $v1, 3($a0)
.L00412298:
/* 00412298 1000000A */  b     .L004122C4
/* 0041229C 90830021 */   lbu   $v1, 0x21($a0)
.L004122A0:
/* 004122A0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004122A4 8F868044 */  lw    $a2, %got(RO_1000A1FC)($gp)
/* 004122A8 24040001 */  li    $a0, 1
/* 004122AC 24050059 */  li    $a1, 89
/* 004122B0 2407000A */  li    $a3, 10
/* 004122B4 0320F809 */  jalr  $t9
/* 004122B8 24C6A1FC */   addiu $a2, %lo(RO_1000A1FC) # addiu $a2, $a2, -0x5e04
/* 004122BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004122C0 93A30027 */  lbu   $v1, 0x27($sp)
.L004122C4:
/* 004122C4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004122C8 27BD0028 */  addiu $sp, $sp, 0x28
/* 004122CC 00601025 */  move  $v0, $v1
/* 004122D0 03E00008 */  jr    $ra
/* 004122D4 00000000 */   nop   
    .type entryant, @function
    .size entryant, .-entryant
    .end entryant

glabel vardelete
    .ent vardelete
    # 00413000 exprdelete
    # 0041550C func_0041550C
/* 004122D8 3C1C0FC0 */  .cpload $t9
/* 004122DC 279C7FB8 */  
/* 004122E0 0399E021 */  
/* 004122E4 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004122E8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004122EC AFBC0020 */  sw    $gp, 0x20($sp)
/* 004122F0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004122F4 AFB00018 */  sw    $s0, 0x18($sp)
/* 004122F8 908E0000 */  lbu   $t6, ($a0)
/* 004122FC 3C011200 */  lui   $at, 0x1200
/* 00412300 00808025 */  move  $s0, $a0
/* 00412304 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00412308 000FC023 */  negu  $t8, $t7
/* 0041230C 0301C824 */  and   $t9, $t8, $at
/* 00412310 01D94004 */  sllv  $t0, $t9, $t6
/* 00412314 05010026 */  bgez  $t0, .L004123B0
/* 00412318 00A08825 */   move  $s1, $a1
/* 0041231C 8C820014 */  lw    $v0, 0x14($a0)
/* 00412320 9049001A */  lbu   $t1, 0x1a($v0)
/* 00412324 55200023 */  bnezl $t1, .L004123B4
/* 00412328 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0041232C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00412330 24A5010C */  addiu $a1, $a1, 0x10c
/* 00412334 AFA50028 */  sw    $a1, 0x28($sp)
/* 00412338 0320F809 */  jalr  $t9
/* 0041233C 94440024 */   lhu   $a0, 0x24($v0)
/* 00412340 1040001B */  beqz  $v0, .L004123B0
/* 00412344 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00412348 8F9984A0 */  lw    $t9, %call16(lvalaltered)($gp)
/* 0041234C 8E040014 */  lw    $a0, 0x14($s0)
/* 00412350 02202825 */  move  $a1, $s1
/* 00412354 0320F809 */  jalr  $t9
/* 00412358 00000000 */   nop   
/* 0041235C 14400014 */  bnez  $v0, .L004123B0
/* 00412360 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00412364 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00412368 8E0A0014 */  lw    $t2, 0x14($s0)
/* 0041236C 8FA40028 */  lw    $a0, 0x28($sp)
/* 00412370 0320F809 */  jalr  $t9
/* 00412374 95450024 */   lhu   $a1, 0x24($t2)
/* 00412378 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041237C 8E040014 */  lw    $a0, 0x14($s0)
/* 00412380 02202825 */  move  $a1, $s1
/* 00412384 8F9984A4 */  lw    $t9, %call16(lvalantloc)($gp)
/* 00412388 0320F809 */  jalr  $t9
/* 0041238C 00000000 */   nop   
/* 00412390 10400007 */  beqz  $v0, .L004123B0
/* 00412394 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00412398 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041239C 8E0B0014 */  lw    $t3, 0x14($s0)
/* 004123A0 26240104 */  addiu $a0, $s1, 0x104
/* 004123A4 0320F809 */  jalr  $t9
/* 004123A8 95650024 */   lhu   $a1, 0x24($t3)
/* 004123AC 8FBC0020 */  lw    $gp, 0x20($sp)
.L004123B0:
/* 004123B0 8FBF0024 */  lw    $ra, 0x24($sp)
.L004123B4:
/* 004123B4 8FB00018 */  lw    $s0, 0x18($sp)
/* 004123B8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004123BC 03E00008 */  jr    $ra
/* 004123C0 27BD0038 */   addiu $sp, $sp, 0x38
    .type vardelete, @function
    .size vardelete, .-vardelete
    .end vardelete

glabel varinsert
    .ent varinsert
    # 00414108 func_00414108
/* 004123C4 3C1C0FC0 */  .cpload $t9
/* 004123C8 279C7ECC */  
/* 004123CC 0399E021 */  
/* 004123D0 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004123D4 AFB40028 */  sw    $s4, 0x28($sp)
/* 004123D8 AFB30024 */  sw    $s3, 0x24($sp)
/* 004123DC AFB20020 */  sw    $s2, 0x20($sp)
/* 004123E0 AFBF0034 */  sw    $ra, 0x34($sp)
/* 004123E4 AFBC0030 */  sw    $gp, 0x30($sp)
/* 004123E8 AFB5002C */  sw    $s5, 0x2c($sp)
/* 004123EC AFB1001C */  sw    $s1, 0x1c($sp)
/* 004123F0 AFB00018 */  sw    $s0, 0x18($sp)
/* 004123F4 00A09025 */  move  $s2, $a1
/* 004123F8 00809825 */  move  $s3, $a0
/* 004123FC 8CB0001C */  lw    $s0, 0x1c($a1)
/* 00412400 0000A025 */  move  $s4, $zero
/* 00412404 92020000 */  lbu   $v0, ($s0)
.L00412408:
/* 00412408 2442FFE0 */  addiu $v0, $v0, -0x20
/* 0041240C 2C4E0080 */  sltiu $t6, $v0, 0x80
/* 00412410 11C00009 */  beqz  $t6, .L00412438
/* 00412414 00000000 */   nop   
/* 00412418 8F998044 */  lw    $t9, %got(D_1000FDBC)($gp)
/* 0041241C 00027943 */  sra   $t7, $v0, 5
/* 00412420 000FC080 */  sll   $t8, $t7, 2
/* 00412424 2739FDBC */  addiu $t9, %lo(D_1000FDBC) # addiu $t9, $t9, -0x244
/* 00412428 03384021 */  addu  $t0, $t9, $t8
/* 0041242C 8D090000 */  lw    $t1, ($t0)
/* 00412430 00495004 */  sllv  $t2, $t1, $v0
/* 00412434 294E0000 */  slti  $t6, $t2, 0
.L00412438:
/* 00412438 51C00028 */  beql  $t6, $zero, .L004124DC
/* 0041243C 2C4D0060 */   sltiu $t5, $v0, 0x60
/* 00412440 926C0000 */  lbu   $t4, ($s3)
/* 00412444 3C011200 */  lui   $at, 0x1200
/* 00412448 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0041244C 000D7823 */  negu  $t7, $t5
/* 00412450 01E1C824 */  and   $t9, $t7, $at
/* 00412454 0199C004 */  sllv  $t8, $t9, $t4
/* 00412458 07030006 */  bgezl $t8, .L00412474
/* 0041245C 8E0A0028 */   lw    $t2, 0x28($s0)
/* 00412460 8E680014 */  lw    $t0, 0x14($s3)
/* 00412464 91090019 */  lbu   $t1, 0x19($t0)
/* 00412468 5520001C */  bnezl $t1, .L004124DC
/* 0041246C 2C4D0060 */   sltiu $t5, $v0, 0x60
/* 00412470 8E0A0028 */  lw    $t2, 0x28($s0)
.L00412474:
/* 00412474 51400043 */  beql  $t2, $zero, .L00412584
/* 00412478 8E020008 */   lw    $v0, 8($s0)
/* 0041247C 8F99838C */  lw    $t9, %call16(slkilled)($gp)
/* 00412480 02002025 */  move  $a0, $s0
/* 00412484 02602825 */  move  $a1, $s3
/* 00412488 0320F809 */  jalr  $t9
/* 0041248C 00000000 */   nop   
/* 00412490 1040003B */  beqz  $v0, .L00412580
/* 00412494 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00412498 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0041249C 8E0B0028 */  lw    $t3, 0x28($s0)
/* 004124A0 A200001C */  sb    $zero, 0x1c($s0)
/* 004124A4 26440104 */  addiu $a0, $s2, 0x104
/* 004124A8 2651010C */  addiu $s1, $s2, 0x10c
/* 004124AC 0320F809 */  jalr  $t9
/* 004124B0 95650002 */   lhu   $a1, 2($t3)
/* 004124B4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004124B8 8E0E0028 */  lw    $t6, 0x28($s0)
/* 004124BC 02202025 */  move  $a0, $s1
/* 004124C0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004124C4 95C50002 */  lhu   $a1, 2($t6)
/* 004124C8 0320F809 */  jalr  $t9
/* 004124CC 00000000 */   nop   
/* 004124D0 1000002B */  b     .L00412580
/* 004124D4 8FBC0030 */   lw    $gp, 0x30($sp)
/* 004124D8 2C4D0060 */  sltiu $t5, $v0, 0x60
.L004124DC:
/* 004124DC 11A00009 */  beqz  $t5, .L00412504
/* 004124E0 00000000 */   nop   
/* 004124E4 8F8C8044 */  lw    $t4, %got(D_1000FDB0)($gp)
/* 004124E8 00027943 */  sra   $t7, $v0, 5
/* 004124EC 000FC880 */  sll   $t9, $t7, 2
/* 004124F0 258CFDB0 */  addiu $t4, %lo(D_1000FDB0) # addiu $t4, $t4, -0x250
/* 004124F4 0199C021 */  addu  $t8, $t4, $t9
/* 004124F8 8F080000 */  lw    $t0, ($t8)
/* 004124FC 00484804 */  sllv  $t1, $t0, $v0
/* 00412500 292D0000 */  slti  $t5, $t1, 0
.L00412504:
/* 00412504 51A0001F */  beql  $t5, $zero, .L00412584
/* 00412508 8E020008 */   lw    $v0, 8($s0)
/* 0041250C 8E0B0004 */  lw    $t3, 4($s0)
/* 00412510 916E0021 */  lbu   $t6, 0x21($t3)
/* 00412514 55C0001B */  bnezl $t6, .L00412584
/* 00412518 8E020008 */   lw    $v0, 8($s0)
/* 0041251C 8E0F0028 */  lw    $t7, 0x28($s0)
/* 00412520 51E00018 */  beql  $t7, $zero, .L00412584
/* 00412524 8E020008 */   lw    $v0, 8($s0)
/* 00412528 8F99838C */  lw    $t9, %call16(slkilled)($gp)
/* 0041252C 02002025 */  move  $a0, $s0
/* 00412530 02602825 */  move  $a1, $s3
/* 00412534 0320F809 */  jalr  $t9
/* 00412538 00000000 */   nop   
/* 0041253C 10400010 */  beqz  $v0, .L00412580
/* 00412540 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00412544 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00412548 8E0C0028 */  lw    $t4, 0x28($s0)
/* 0041254C A200001C */  sb    $zero, 0x1c($s0)
/* 00412550 26440104 */  addiu $a0, $s2, 0x104
/* 00412554 2651010C */  addiu $s1, $s2, 0x10c
/* 00412558 0320F809 */  jalr  $t9
/* 0041255C 95850002 */   lhu   $a1, 2($t4)
/* 00412560 8E190028 */  lw    $t9, 0x28($s0)
/* 00412564 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00412568 02202025 */  move  $a0, $s1
/* 0041256C 97250002 */  lhu   $a1, 2($t9)
/* 00412570 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00412574 0320F809 */  jalr  $t9
/* 00412578 00000000 */   nop   
/* 0041257C 8FBC0030 */  lw    $gp, 0x30($sp)
.L00412580:
/* 00412580 8E020008 */  lw    $v0, 8($s0)
.L00412584:
/* 00412584 10400006 */  beqz  $v0, .L004125A0
/* 00412588 00000000 */   nop   
/* 0041258C 8C580010 */  lw    $t8, 0x10($v0)
/* 00412590 8E080010 */  lw    $t0, 0x10($s0)
/* 00412594 0308A026 */  xor   $s4, $t8, $t0
/* 00412598 0014A02B */  sltu  $s4, $zero, $s4
/* 0041259C 329400FF */  andi  $s4, $s4, 0xff
.L004125A0:
/* 004125A0 10400003 */  beqz  $v0, .L004125B0
/* 004125A4 00408025 */   move  $s0, $v0
/* 004125A8 5280FF97 */  beql  $s4, $zero, .L00412408
/* 004125AC 92020000 */   lbu   $v0, ($s0)
.L004125B0:
/* 004125B0 92690000 */  lbu   $t1, ($s3)
/* 004125B4 3C011200 */  lui   $at, 0x1200
/* 004125B8 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 004125BC 000A6823 */  negu  $t5, $t2
/* 004125C0 01A15824 */  and   $t3, $t5, $at
/* 004125C4 012B7004 */  sllv  $t6, $t3, $t1
/* 004125C8 05C10012 */  bgez  $t6, .L00412614
/* 004125CC 00000000 */   nop   
/* 004125D0 8E620014 */  lw    $v0, 0x14($s3)
/* 004125D4 904F001A */  lbu   $t7, 0x1a($v0)
/* 004125D8 15E0000E */  bnez  $t7, .L00412614
/* 004125DC 00000000 */   nop   
/* 004125E0 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004125E4 26440104 */  addiu $a0, $s2, 0x104
/* 004125E8 94450024 */  lhu   $a1, 0x24($v0)
/* 004125EC 0320F809 */  jalr  $t9
/* 004125F0 2651010C */   addiu $s1, $s2, 0x10c
/* 004125F4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004125F8 8E6C0014 */  lw    $t4, 0x14($s3)
/* 004125FC 02202025 */  move  $a0, $s1
/* 00412600 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00412604 95850024 */  lhu   $a1, 0x24($t4)
/* 00412608 0320F809 */  jalr  $t9
/* 0041260C 00000000 */   nop   
/* 00412610 8FBC0030 */  lw    $gp, 0x30($sp)
.L00412614:
/* 00412614 8F9589E0 */  lw     $s5, %got(bitposcount)($gp)
/* 00412618 00008825 */  move  $s1, $zero
/* 0041261C 0000A025 */  move  $s4, $zero
/* 00412620 8EB50000 */  lw    $s5, ($s5)
/* 00412624 26B5FFFF */  addiu $s5, $s5, -1
/* 00412628 06A0005E */  bltz  $s5, .L004127A4
/* 0041262C 26B50001 */   addiu $s5, $s5, 1
.L00412630:
/* 00412630 8F9989EC */  lw     $t9, %got(bittab)($gp)
/* 00412634 02202025 */  move  $a0, $s1
/* 00412638 8F858CEC */  lw     $a1, %got(storeop)($gp)
/* 0041263C 8F390000 */  lw    $t9, ($t9)
/* 00412640 0334C021 */  addu  $t8, $t9, $s4
/* 00412644 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00412648 8F100000 */  lw    $s0, ($t8)
/* 0041264C 0320F809 */  jalr  $t9
/* 00412650 00000000 */   nop   
/* 00412654 10400050 */  beqz  $v0, .L00412798
/* 00412658 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0041265C 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00412660 02202025 */  move  $a0, $s1
/* 00412664 2645012C */  addiu $a1, $s2, 0x12c
/* 00412668 0320F809 */  jalr  $t9
/* 0041266C 00000000 */   nop   
/* 00412670 14400049 */  bnez  $v0, .L00412798
/* 00412674 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00412678 92080010 */  lbu   $t0, 0x10($s0)
/* 0041267C 250AFFE0 */  addiu $t2, $t0, -0x20
/* 00412680 2D4D0080 */  sltiu $t5, $t2, 0x80
/* 00412684 11A00009 */  beqz  $t5, .L004126AC
/* 00412688 00000000 */   nop   
/* 0041268C 8F8E8044 */  lw    $t6, %got(D_1000FDBC)($gp)
/* 00412690 000A5943 */  sra   $t3, $t2, 5
/* 00412694 000B4880 */  sll   $t1, $t3, 2
/* 00412698 25CEFDBC */  addiu $t6, %lo(D_1000FDBC) # addiu $t6, $t6, -0x244
/* 0041269C 01C97821 */  addu  $t7, $t6, $t1
/* 004126A0 8DEC0000 */  lw    $t4, ($t7)
/* 004126A4 014CC804 */  sllv  $t9, $t4, $t2
/* 004126A8 2B2D0000 */  slti  $t5, $t9, 0
.L004126AC:
/* 004126AC 51A0001B */  beql  $t5, $zero, .L0041271C
/* 004126B0 92190010 */   lbu   $t9, 0x10($s0)
/* 004126B4 92680000 */  lbu   $t0, ($s3)
/* 004126B8 3C011200 */  lui   $at, 0x1200
/* 004126BC 2D0B0020 */  sltiu $t3, $t0, 0x20
/* 004126C0 000B7023 */  negu  $t6, $t3
/* 004126C4 01C14824 */  and   $t1, $t6, $at
/* 004126C8 01097804 */  sllv  $t7, $t1, $t0
/* 004126CC 05E10005 */  bgez  $t7, .L004126E4
/* 004126D0 00000000 */   nop   
/* 004126D4 8E6C0014 */  lw    $t4, 0x14($s3)
/* 004126D8 918A0019 */  lbu   $t2, 0x19($t4)
/* 004126DC 5540000F */  bnezl $t2, .L0041271C
/* 004126E0 92190010 */   lbu   $t9, 0x10($s0)
.L004126E4:
/* 004126E4 8F99838C */  lw    $t9, %call16(slkilled)($gp)
/* 004126E8 8E040020 */  lw    $a0, 0x20($s0)
/* 004126EC 02602825 */  move  $a1, $s3
/* 004126F0 0320F809 */  jalr  $t9
/* 004126F4 00000000 */   nop   
/* 004126F8 10400007 */  beqz  $v0, .L00412718
/* 004126FC 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00412700 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00412704 2644010C */  addiu $a0, $s2, 0x10c
/* 00412708 02202825 */  move  $a1, $s1
/* 0041270C 0320F809 */  jalr  $t9
/* 00412710 00000000 */   nop   
/* 00412714 8FBC0030 */  lw    $gp, 0x30($sp)
.L00412718:
/* 00412718 92190010 */  lbu   $t9, 0x10($s0)
.L0041271C:
/* 0041271C 2738FFE0 */  addiu $t8, $t9, -0x20
/* 00412720 2F0D0060 */  sltiu $t5, $t8, 0x60
/* 00412724 11A00009 */  beqz  $t5, .L0041274C
/* 00412728 00000000 */   nop   
/* 0041272C 8F898044 */  lw    $t1, %got(D_1000FDB0)($gp)
/* 00412730 00185943 */  sra   $t3, $t8, 5
/* 00412734 000B7080 */  sll   $t6, $t3, 2
/* 00412738 2529FDB0 */  addiu $t1, %lo(D_1000FDB0) # addiu $t1, $t1, -0x250
/* 0041273C 012E4021 */  addu  $t0, $t1, $t6
/* 00412740 8D0F0000 */  lw    $t7, ($t0)
/* 00412744 030F6004 */  sllv  $t4, $t7, $t8
/* 00412748 298D0000 */  slti  $t5, $t4, 0
.L0041274C:
/* 0041274C 51A00013 */  beql  $t5, $zero, .L0041279C
/* 00412750 26310001 */   addiu $s1, $s1, 1
/* 00412754 8E190014 */  lw    $t9, 0x14($s0)
/* 00412758 932B001A */  lbu   $t3, 0x1a($t9)
/* 0041275C 5560000F */  bnezl $t3, .L0041279C
/* 00412760 26310001 */   addiu $s1, $s1, 1
/* 00412764 8F99838C */  lw    $t9, %call16(slkilled)($gp)
/* 00412768 8E040020 */  lw    $a0, 0x20($s0)
/* 0041276C 02602825 */  move  $a1, $s3
/* 00412770 0320F809 */  jalr  $t9
/* 00412774 00000000 */   nop   
/* 00412778 10400007 */  beqz  $v0, .L00412798
/* 0041277C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00412780 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00412784 2644010C */  addiu $a0, $s2, 0x10c
/* 00412788 02202825 */  move  $a1, $s1
/* 0041278C 0320F809 */  jalr  $t9
/* 00412790 00000000 */   nop   
/* 00412794 8FBC0030 */  lw    $gp, 0x30($sp)
.L00412798:
/* 00412798 26310001 */  addiu $s1, $s1, 1
.L0041279C:
/* 0041279C 1635FFA4 */  bne   $s1, $s5, .L00412630
/* 004127A0 26940008 */   addiu $s4, $s4, 8
.L004127A4:
/* 004127A4 8FBF0034 */  lw    $ra, 0x34($sp)
/* 004127A8 8FB00018 */  lw    $s0, 0x18($sp)
/* 004127AC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004127B0 8FB20020 */  lw    $s2, 0x20($sp)
/* 004127B4 8FB30024 */  lw    $s3, 0x24($sp)
/* 004127B8 8FB40028 */  lw    $s4, 0x28($sp)
/* 004127BC 8FB5002C */  lw    $s5, 0x2c($sp)
/* 004127C0 03E00008 */  jr    $ra
/* 004127C4 27BD0038 */   addiu $sp, $sp, 0x38
    .type varinsert, @function
    .size varinsert, .-varinsert
    .end varinsert

glabel checkexpoccur
    .ent checkexpoccur
    # 00413000 exprdelete
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 0046C654 del_orig_cond
/* 004127C8 3C1C0FC0 */  .cpload $t9
/* 004127CC 279C7AC8 */  
/* 004127D0 0399E021 */  
/* 004127D4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004127D8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 004127DC AFB10018 */  sw    $s1, 0x18($sp)
/* 004127E0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004127E4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004127E8 AFB00014 */  sw    $s0, 0x14($sp)
/* 004127EC AFA5002C */  sw    $a1, 0x2c($sp)
/* 004127F0 00808825 */  move  $s1, $a0
/* 004127F4 8CB0001C */  lw    $s0, 0x1c($a1)
/* 004127F8 00009025 */  move  $s2, $zero
/* 004127FC 00001825 */  move  $v1, $zero
/* 00412800 92020000 */  lbu   $v0, ($s0)
.L00412804:
/* 00412804 244FFFE0 */  addiu $t7, $v0, -0x20
/* 00412808 2DF80060 */  sltiu $t8, $t7, 0x60
/* 0041280C 13000009 */  beqz  $t8, .L00412834
/* 00412810 00000000 */   nop   
/* 00412814 8F898044 */  lw    $t1, %got(D_1000FDF0)($gp)
/* 00412818 000FC943 */  sra   $t9, $t7, 5
/* 0041281C 00194080 */  sll   $t0, $t9, 2
/* 00412820 2529FDF0 */  addiu $t1, %lo(D_1000FDF0) # addiu $t1, $t1, -0x210
/* 00412824 01285021 */  addu  $t2, $t1, $t0
/* 00412828 8D4B0000 */  lw    $t3, ($t2)
/* 0041282C 01EB6004 */  sllv  $t4, $t3, $t7
/* 00412830 29980000 */  slti  $t8, $t4, 0
.L00412834:
/* 00412834 13000009 */  beqz  $t8, .L0041285C
/* 00412838 2C5900A0 */   sltiu $t9, $v0, 0xa0
/* 0041283C 8F998668 */  lw    $t9, %call16(exproccurred)($gp)
/* 00412840 8E0E0004 */  lw    $t6, 4($s0)
/* 00412844 02202025 */  move  $a0, $s1
/* 00412848 0320F809 */  jalr  $t9
/* 0041284C 8DC50034 */   lw    $a1, 0x34($t6)
/* 00412850 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00412854 1000002D */  b     .L0041290C
/* 00412858 304300FF */   andi  $v1, $v0, 0xff
.L0041285C:
/* 0041285C 13200009 */  beqz  $t9, .L00412884
/* 00412860 00000000 */   nop   
/* 00412864 8F8A8044 */  lw    $t2, %got(D_1000FDDC)($gp)
/* 00412868 00024943 */  sra   $t1, $v0, 5
/* 0041286C 00094080 */  sll   $t0, $t1, 2
/* 00412870 254AFDDC */  addiu $t2, %lo(D_1000FDDC) # addiu $t2, $t2, -0x224
/* 00412874 01485821 */  addu  $t3, $t2, $t0
/* 00412878 8D6F0000 */  lw    $t7, ($t3)
/* 0041287C 004F6004 */  sllv  $t4, $t7, $v0
/* 00412880 29990000 */  slti  $t9, $t4, 0
.L00412884:
/* 00412884 57200022 */  bnezl $t9, .L00412910
/* 00412888 8E020008 */   lw    $v0, 8($s0)
/* 0041288C 8F998668 */  lw    $t9, %call16(exproccurred)($gp)
/* 00412890 02202025 */  move  $a0, $s1
/* 00412894 8E050004 */  lw    $a1, 4($s0)
/* 00412898 0320F809 */  jalr  $t9
/* 0041289C 00000000 */   nop   
/* 004128A0 92180000 */  lbu   $t8, ($s0)
/* 004128A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004128A8 304300FF */  andi  $v1, $v0, 0xff
/* 004128AC 270EFFE0 */  addiu $t6, $t8, -0x20
/* 004128B0 2DC90080 */  sltiu $t1, $t6, 0x80
/* 004128B4 1120000A */  beqz  $t1, .L004128E0
/* 004128B8 305800FF */   andi  $t8, $v0, 0xff
/* 004128BC 8F8B8044 */  lw    $t3, %got(D_1000FDCC)($gp)
/* 004128C0 000E5143 */  sra   $t2, $t6, 5
/* 004128C4 000A4080 */  sll   $t0, $t2, 2
/* 004128C8 256BFDCC */  addiu $t3, %lo(D_1000FDCC) # addiu $t3, $t3, -0x234
/* 004128CC 01687821 */  addu  $t7, $t3, $t0
/* 004128D0 8DEC0000 */  lw    $t4, ($t7)
/* 004128D4 01CC6804 */  sllv  $t5, $t4, $t6
/* 004128D8 29B90000 */  slti  $t9, $t5, 0
/* 004128DC 03204825 */  move  $t1, $t9
.L004128E0:
/* 004128E0 5120000B */  beql  $t1, $zero, .L00412910
/* 004128E4 8E020008 */   lw    $v0, 8($s0)
/* 004128E8 57000009 */  bnezl $t8, .L00412910
/* 004128EC 8E020008 */   lw    $v0, 8($s0)
/* 004128F0 8F998668 */  lw    $t9, %call16(exproccurred)($gp)
/* 004128F4 02202025 */  move  $a0, $s1
/* 004128F8 8E050014 */  lw    $a1, 0x14($s0)
/* 004128FC 0320F809 */  jalr  $t9
/* 00412900 00000000 */   nop   
/* 00412904 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00412908 304300FF */  andi  $v1, $v0, 0xff
.L0041290C:
/* 0041290C 8E020008 */  lw    $v0, 8($s0)
.L00412910:
/* 00412910 10400006 */  beqz  $v0, .L0041292C
/* 00412914 00000000 */   nop   
/* 00412918 8C4A0010 */  lw    $t2, 0x10($v0)
/* 0041291C 8E0B0010 */  lw    $t3, 0x10($s0)
/* 00412920 014B9026 */  xor   $s2, $t2, $t3
/* 00412924 0012902B */  sltu  $s2, $zero, $s2
/* 00412928 325200FF */  andi  $s2, $s2, 0xff
.L0041292C:
/* 0041292C 10400005 */  beqz  $v0, .L00412944
/* 00412930 00408025 */   move  $s0, $v0
/* 00412934 16400003 */  bnez  $s2, .L00412944
/* 00412938 00000000 */   nop   
/* 0041293C 5060FFB1 */  beql  $v1, $zero, .L00412804
/* 00412940 92020000 */   lbu   $v0, ($s0)
.L00412944:
/* 00412944 54600008 */  bnezl $v1, .L00412968
/* 00412948 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0041294C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00412950 8FA4002C */  lw    $a0, 0x2c($sp)
/* 00412954 96250002 */  lhu   $a1, 2($s1)
/* 00412958 0320F809 */  jalr  $t9
/* 0041295C 2484012C */   addiu $a0, $a0, 0x12c
/* 00412960 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00412964 8FBF0024 */  lw    $ra, 0x24($sp)
.L00412968:
/* 00412968 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041296C 8FB10018 */  lw    $s1, 0x18($sp)
/* 00412970 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00412974 03E00008 */  jr    $ra
/* 00412978 27BD0028 */   addiu $sp, $sp, 0x28
    .type checkexpoccur, @function
    .size checkexpoccur, .-checkexpoccur
    .end checkexpoccur

    .type func_0041297C, @function
func_0041297C:
    # 0041297C func_0041297C
    # 00412CB4 checkexp_ant_av
/* 0041297C 3C1C0FC0 */  .cpload $t9
/* 00412980 279C7914 */  
/* 00412984 0399E021 */  
/* 00412988 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041298C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00412990 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00412994 AFA20024 */  sw    $v0, 0x24($sp)
/* 00412998 00A03025 */  move  $a2, $a1
/* 0041299C 240A0003 */  li    $t2, 3
/* 004129A0 8F898DBC */  lw     $t1, %got(optab)($gp)
/* 004129A4 24080006 */  li    $t0, 6
/* 004129A8 8F8789CC */  lw     $a3, %got(nocopy)($gp)
.L004129AC:
/* 004129AC 90C30000 */  lbu   $v1, ($a2)
/* 004129B0 00C02825 */  move  $a1, $a2
/* 004129B4 246EFFFF */  addiu $t6, $v1, -1
/* 004129B8 2DC10008 */  sltiu $at, $t6, 8
/* 004129BC 10200048 */  beqz  $at, .L00412AE0
/* 004129C0 00000000 */   nop   
/* 004129C4 8F818044 */  lw    $at, %got(jtbl_1000A234)($gp)
/* 004129C8 000E7080 */  sll   $t6, $t6, 2
/* 004129CC 002E0821 */  addu  $at, $at, $t6
/* 004129D0 8C2EA234 */  lw    $t6, %lo(jtbl_1000A234)($at)
/* 004129D4 01DC7021 */  addu  $t6, $t6, $gp
/* 004129D8 01C00008 */  jr    $t6
/* 004129DC 00000000 */   nop   
.L004129E0:
/* 004129E0 10000048 */  b     .L00412B04
/* 004129E4 00001825 */   move  $v1, $zero
.L004129E8:
/* 004129E8 8CCF0014 */  lw    $t7, 0x14($a2)
/* 004129EC 148F0003 */  bne   $a0, $t7, .L004129FC
/* 004129F0 00000000 */   nop   
/* 004129F4 10000043 */  b     .L00412B04
/* 004129F8 24030001 */   li    $v1, 1
.L004129FC:
/* 004129FC 1000FFEB */  b     .L004129AC
/* 00412A00 8CA60034 */   lw    $a2, 0x34($a1)
.L00412A04:
/* 00412A04 8CC20030 */  lw    $v0, 0x30($a2)
/* 00412A08 50400007 */  beql  $v0, $zero, .L00412A28
/* 00412A0C 8CD90014 */   lw    $t9, 0x14($a2)
/* 00412A10 8CF80000 */  lw    $t8, ($a3)
/* 00412A14 53020004 */  beql  $t8, $v0, .L00412A28
/* 00412A18 8CD90014 */   lw    $t9, 0x14($a2)
/* 00412A1C 1000FFE3 */  b     .L004129AC
/* 00412A20 8CA60030 */   lw    $a2, 0x30($a1)
/* 00412A24 8CD90014 */  lw    $t9, 0x14($a2)
.L00412A28:
/* 00412A28 14990003 */  bne   $a0, $t9, .L00412A38
/* 00412A2C 00000000 */   nop   
/* 00412A30 10000034 */  b     .L00412B04
/* 00412A34 90C30003 */   lbu   $v1, 3($a2)
.L00412A38:
/* 00412A38 15030003 */  bne   $t0, $v1, .L00412A48
/* 00412A3C 00000000 */   nop   
/* 00412A40 1000FFDA */  b     .L004129AC
/* 00412A44 8CA60024 */   lw    $a2, 0x24($a1)
.L00412A48:
/* 00412A48 1000002E */  b     .L00412B04
/* 00412A4C 00001825 */   move  $v1, $zero
.L00412A50:
/* 00412A50 8CCB0014 */  lw    $t3, 0x14($a2)
/* 00412A54 548B0004 */  bnel  $a0, $t3, .L00412A68
/* 00412A58 90CC0020 */   lbu   $t4, 0x20($a2)
/* 00412A5C 10000029 */  b     .L00412B04
/* 00412A60 90C30021 */   lbu   $v1, 0x21($a2)
/* 00412A64 90CC0020 */  lbu   $t4, 0x20($a2)
.L00412A68:
/* 00412A68 018A0019 */  multu $t4, $t2
/* 00412A6C 00006812 */  mflo  $t5
/* 00412A70 012D7021 */  addu  $t6, $t1, $t5
/* 00412A74 91CF0002 */  lbu   $t7, 2($t6)
/* 00412A78 11E00015 */  beqz  $t7, .L00412AD0
/* 00412A7C 00000000 */   nop   
/* 00412A80 8F998018 */  lw    $t9, %got(func_0041297C)($gp)
/* 00412A84 8CC50024 */  lw    $a1, 0x24($a2)
/* 00412A88 8FA20024 */  lw    $v0, 0x24($sp)
/* 00412A8C 2739297C */  addiu $t9, %lo(func_0041297C) # addiu $t9, $t9, 0x297c
/* 00412A90 AFA40028 */  sw    $a0, 0x28($sp)
/* 00412A94 0320F809 */  jalr  $t9
/* 00412A98 AFA6002C */   sw    $a2, 0x2c($sp)
/* 00412A9C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00412AA0 8FA40028 */  lw    $a0, 0x28($sp)
/* 00412AA4 14400008 */  bnez  $v0, .L00412AC8
/* 00412AA8 8FA6002C */   lw    $a2, 0x2c($sp)
/* 00412AAC 8F998018 */  lw    $t9, %got(func_0041297C)($gp)
/* 00412AB0 8CC50028 */  lw    $a1, 0x28($a2)
/* 00412AB4 8FA20024 */  lw    $v0, 0x24($sp)
/* 00412AB8 2739297C */  addiu $t9, %lo(func_0041297C) # addiu $t9, $t9, 0x297c
/* 00412ABC 0320F809 */  jalr  $t9
/* 00412AC0 00000000 */   nop   
/* 00412AC4 8FBC0018 */  lw    $gp, 0x18($sp)
.L00412AC8:
/* 00412AC8 1000000E */  b     .L00412B04
/* 00412ACC 304300FF */   andi  $v1, $v0, 0xff
.L00412AD0:
/* 00412AD0 1000FFB6 */  b     .L004129AC
/* 00412AD4 8CA60024 */   lw    $a2, 0x24($a1)
.L00412AD8:
/* 00412AD8 1000000A */  b     .L00412B04
/* 00412ADC 00001825 */   move  $v1, $zero
.L00412AE0:
/* 00412AE0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00412AE4 8F868044 */  lw    $a2, %got(RO_1000A228)($gp)
/* 00412AE8 24040001 */  li    $a0, 1
/* 00412AEC 240500DC */  li    $a1, 220
/* 00412AF0 2407000A */  li    $a3, 10
/* 00412AF4 0320F809 */  jalr  $t9
/* 00412AF8 24C6A228 */   addiu $a2, %lo(RO_1000A228) # addiu $a2, $a2, -0x5dd8
/* 00412AFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00412B00 93A30023 */  lbu   $v1, 0x23($sp)
.L00412B04:
/* 00412B04 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00412B08 27BD0028 */  addiu $sp, $sp, 0x28
/* 00412B0C 00601025 */  move  $v0, $v1
/* 00412B10 03E00008 */  jr    $ra
/* 00412B14 00000000 */   nop   

    .type func_00412B18, @function
func_00412B18:
    # 00412B18 func_00412B18
    # 00412CB4 checkexp_ant_av
/* 00412B18 3C1C0FC0 */  .cpload $t9
/* 00412B1C 279C7778 */  
/* 00412B20 0399E021 */  
/* 00412B24 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00412B28 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00412B2C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00412B30 AFA20024 */  sw    $v0, 0x24($sp)
/* 00412B34 00A03025 */  move  $a2, $a1
/* 00412B38 240A0003 */  li    $t2, 3
/* 00412B3C 8F898DBC */  lw     $t1, %got(optab)($gp)
/* 00412B40 24080006 */  li    $t0, 6
/* 00412B44 8F8789CC */  lw     $a3, %got(nocopy)($gp)
.L00412B48:
/* 00412B48 90C30000 */  lbu   $v1, ($a2)
/* 00412B4C 00C02825 */  move  $a1, $a2
/* 00412B50 246EFFFF */  addiu $t6, $v1, -1
/* 00412B54 2DC10008 */  sltiu $at, $t6, 8
/* 00412B58 10200048 */  beqz  $at, .L00412C7C
/* 00412B5C 00000000 */   nop   
/* 00412B60 8F818044 */  lw    $at, %got(jtbl_1000A260)($gp)
/* 00412B64 000E7080 */  sll   $t6, $t6, 2
/* 00412B68 002E0821 */  addu  $at, $at, $t6
/* 00412B6C 8C2EA260 */  lw    $t6, %lo(jtbl_1000A260)($at)
/* 00412B70 01DC7021 */  addu  $t6, $t6, $gp
/* 00412B74 01C00008 */  jr    $t6
/* 00412B78 00000000 */   nop   
.L00412B7C:
/* 00412B7C 10000048 */  b     .L00412CA0
/* 00412B80 00001825 */   move  $v1, $zero
.L00412B84:
/* 00412B84 8CCF0014 */  lw    $t7, 0x14($a2)
/* 00412B88 148F0003 */  bne   $a0, $t7, .L00412B98
/* 00412B8C 00000000 */   nop   
/* 00412B90 10000043 */  b     .L00412CA0
/* 00412B94 24030001 */   li    $v1, 1
.L00412B98:
/* 00412B98 1000FFEB */  b     .L00412B48
/* 00412B9C 8CA60034 */   lw    $a2, 0x34($a1)
.L00412BA0:
/* 00412BA0 8CC20030 */  lw    $v0, 0x30($a2)
/* 00412BA4 50400007 */  beql  $v0, $zero, .L00412BC4
/* 00412BA8 8CD90014 */   lw    $t9, 0x14($a2)
/* 00412BAC 8CF80000 */  lw    $t8, ($a3)
/* 00412BB0 53020004 */  beql  $t8, $v0, .L00412BC4
/* 00412BB4 8CD90014 */   lw    $t9, 0x14($a2)
/* 00412BB8 1000FFE3 */  b     .L00412B48
/* 00412BBC 8CA60030 */   lw    $a2, 0x30($a1)
/* 00412BC0 8CD90014 */  lw    $t9, 0x14($a2)
.L00412BC4:
/* 00412BC4 14990003 */  bne   $a0, $t9, .L00412BD4
/* 00412BC8 00000000 */   nop   
/* 00412BCC 10000034 */  b     .L00412CA0
/* 00412BD0 90C30003 */   lbu   $v1, 3($a2)
.L00412BD4:
/* 00412BD4 15030003 */  bne   $t0, $v1, .L00412BE4
/* 00412BD8 00000000 */   nop   
/* 00412BDC 1000FFDA */  b     .L00412B48
/* 00412BE0 8CA60024 */   lw    $a2, 0x24($a1)
.L00412BE4:
/* 00412BE4 1000002E */  b     .L00412CA0
/* 00412BE8 00001825 */   move  $v1, $zero
.L00412BEC:
/* 00412BEC 8CCB0014 */  lw    $t3, 0x14($a2)
/* 00412BF0 548B0004 */  bnel  $a0, $t3, .L00412C04
/* 00412BF4 90CC0020 */   lbu   $t4, 0x20($a2)
/* 00412BF8 10000029 */  b     .L00412CA0
/* 00412BFC 90C30022 */   lbu   $v1, 0x22($a2)
/* 00412C00 90CC0020 */  lbu   $t4, 0x20($a2)
.L00412C04:
/* 00412C04 018A0019 */  multu $t4, $t2
/* 00412C08 00006812 */  mflo  $t5
/* 00412C0C 012D7021 */  addu  $t6, $t1, $t5
/* 00412C10 91CF0002 */  lbu   $t7, 2($t6)
/* 00412C14 11E00015 */  beqz  $t7, .L00412C6C
/* 00412C18 00000000 */   nop   
/* 00412C1C 8F998018 */  lw    $t9, %got(func_00412B18)($gp)
/* 00412C20 8CC50024 */  lw    $a1, 0x24($a2)
/* 00412C24 8FA20024 */  lw    $v0, 0x24($sp)
/* 00412C28 27392B18 */  addiu $t9, %lo(func_00412B18) # addiu $t9, $t9, 0x2b18
/* 00412C2C AFA40028 */  sw    $a0, 0x28($sp)
/* 00412C30 0320F809 */  jalr  $t9
/* 00412C34 AFA6002C */   sw    $a2, 0x2c($sp)
/* 00412C38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00412C3C 8FA40028 */  lw    $a0, 0x28($sp)
/* 00412C40 14400008 */  bnez  $v0, .L00412C64
/* 00412C44 8FA6002C */   lw    $a2, 0x2c($sp)
/* 00412C48 8F998018 */  lw    $t9, %got(func_00412B18)($gp)
/* 00412C4C 8CC50028 */  lw    $a1, 0x28($a2)
/* 00412C50 8FA20024 */  lw    $v0, 0x24($sp)
/* 00412C54 27392B18 */  addiu $t9, %lo(func_00412B18) # addiu $t9, $t9, 0x2b18
/* 00412C58 0320F809 */  jalr  $t9
/* 00412C5C 00000000 */   nop   
/* 00412C60 8FBC0018 */  lw    $gp, 0x18($sp)
.L00412C64:
/* 00412C64 1000000E */  b     .L00412CA0
/* 00412C68 304300FF */   andi  $v1, $v0, 0xff
.L00412C6C:
/* 00412C6C 1000FFB6 */  b     .L00412B48
/* 00412C70 8CA60024 */   lw    $a2, 0x24($a1)
.L00412C74:
/* 00412C74 1000000A */  b     .L00412CA0
/* 00412C78 00001825 */   move  $v1, $zero
.L00412C7C:
/* 00412C7C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00412C80 8F868044 */  lw    $a2, %got(RO_1000A254)($gp)
/* 00412C84 24040001 */  li    $a0, 1
/* 00412C88 24050108 */  li    $a1, 264
/* 00412C8C 2407000A */  li    $a3, 10
/* 00412C90 0320F809 */  jalr  $t9
/* 00412C94 24C6A254 */   addiu $a2, %lo(RO_1000A254) # addiu $a2, $a2, -0x5dac
/* 00412C98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00412C9C 93A30023 */  lbu   $v1, 0x23($sp)
.L00412CA0:
/* 00412CA0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00412CA4 27BD0028 */  addiu $sp, $sp, 0x28
/* 00412CA8 00601025 */  move  $v0, $v1
/* 00412CAC 03E00008 */  jr    $ra
/* 00412CB0 00000000 */   nop   

glabel checkexp_ant_av
    .ent checkexp_ant_av
    # 00413000 exprdelete
/* 00412CB4 3C1C0FC0 */  .cpload $t9
/* 00412CB8 279C75DC */  
/* 00412CBC 0399E021 */  
/* 00412CC0 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00412CC4 AFB30024 */  sw    $s3, 0x24($sp)
/* 00412CC8 AFB20020 */  sw    $s2, 0x20($sp)
/* 00412CCC AFB1001C */  sw    $s1, 0x1c($sp)
/* 00412CD0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00412CD4 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00412CD8 AFB00018 */  sw    $s0, 0x18($sp)
/* 00412CDC AFA50044 */  sw    $a1, 0x44($sp)
/* 00412CE0 00809025 */  move  $s2, $a0
/* 00412CE4 8CB0001C */  lw    $s0, 0x1c($a1)
/* 00412CE8 00009825 */  move  $s3, $zero
/* 00412CEC 00001825 */  move  $v1, $zero
/* 00412CF0 27B10040 */  addiu $s1, $sp, 0x40
/* 00412CF4 92020000 */  lbu   $v0, ($s0)
.L00412CF8:
/* 00412CF8 02402025 */  move  $a0, $s2
/* 00412CFC 244FFFE0 */  addiu $t7, $v0, -0x20
/* 00412D00 2DF80060 */  sltiu $t8, $t7, 0x60
/* 00412D04 13000009 */  beqz  $t8, .L00412D2C
/* 00412D08 00000000 */   nop   
/* 00412D0C 8F898044 */  lw    $t1, %got(D_1000FE20)($gp)
/* 00412D10 000FC943 */  sra   $t9, $t7, 5
/* 00412D14 00194080 */  sll   $t0, $t9, 2
/* 00412D18 2529FE20 */  addiu $t1, %lo(D_1000FE20) # addiu $t1, $t1, -0x1e0
/* 00412D1C 01285021 */  addu  $t2, $t1, $t0
/* 00412D20 8D4B0000 */  lw    $t3, ($t2)
/* 00412D24 01EB6004 */  sllv  $t4, $t3, $t7
/* 00412D28 29980000 */  slti  $t8, $t4, 0
.L00412D2C:
/* 00412D2C 1300000A */  beqz  $t8, .L00412D58
/* 00412D30 2C5900A0 */   sltiu $t9, $v0, 0xa0
/* 00412D34 8F998018 */  lw    $t9, %got(func_0041297C)($gp)
/* 00412D38 8E0E0004 */  lw    $t6, 4($s0)
/* 00412D3C 02201025 */  move  $v0, $s1
/* 00412D40 2739297C */  addiu $t9, %lo(func_0041297C) # addiu $t9, $t9, 0x297c
/* 00412D44 0320F809 */  jalr  $t9
/* 00412D48 8DC50034 */   lw    $a1, 0x34($t6)
/* 00412D4C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00412D50 1000002F */  b     .L00412E10
/* 00412D54 304300FF */   andi  $v1, $v0, 0xff
.L00412D58:
/* 00412D58 13200009 */  beqz  $t9, .L00412D80
/* 00412D5C 00000000 */   nop   
/* 00412D60 8F8A8044 */  lw    $t2, %got(D_1000FE0C)($gp)
/* 00412D64 00024943 */  sra   $t1, $v0, 5
/* 00412D68 00094080 */  sll   $t0, $t1, 2
/* 00412D6C 254AFE0C */  addiu $t2, %lo(D_1000FE0C) # addiu $t2, $t2, -0x1f4
/* 00412D70 01485821 */  addu  $t3, $t2, $t0
/* 00412D74 8D6F0000 */  lw    $t7, ($t3)
/* 00412D78 004F6004 */  sllv  $t4, $t7, $v0
/* 00412D7C 29990000 */  slti  $t9, $t4, 0
.L00412D80:
/* 00412D80 57200024 */  bnezl $t9, .L00412E14
/* 00412D84 8E020008 */   lw    $v0, 8($s0)
/* 00412D88 8F998018 */  lw    $t9, %got(func_0041297C)($gp)
/* 00412D8C 02402025 */  move  $a0, $s2
/* 00412D90 8E050004 */  lw    $a1, 4($s0)
/* 00412D94 2739297C */  addiu $t9, %lo(func_0041297C) # addiu $t9, $t9, 0x297c
/* 00412D98 0320F809 */  jalr  $t9
/* 00412D9C 02201025 */   move  $v0, $s1
/* 00412DA0 92180000 */  lbu   $t8, ($s0)
/* 00412DA4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00412DA8 304300FF */  andi  $v1, $v0, 0xff
/* 00412DAC 270EFFE0 */  addiu $t6, $t8, -0x20
/* 00412DB0 2DC90080 */  sltiu $t1, $t6, 0x80
/* 00412DB4 1120000A */  beqz  $t1, .L00412DE0
/* 00412DB8 305800FF */   andi  $t8, $v0, 0xff
/* 00412DBC 8F8B8044 */  lw    $t3, %got(D_1000FDFC)($gp)
/* 00412DC0 000E5143 */  sra   $t2, $t6, 5
/* 00412DC4 000A4080 */  sll   $t0, $t2, 2
/* 00412DC8 256BFDFC */  addiu $t3, %lo(D_1000FDFC) # addiu $t3, $t3, -0x204
/* 00412DCC 01687821 */  addu  $t7, $t3, $t0
/* 00412DD0 8DEC0000 */  lw    $t4, ($t7)
/* 00412DD4 01CC6804 */  sllv  $t5, $t4, $t6
/* 00412DD8 29B90000 */  slti  $t9, $t5, 0
/* 00412DDC 03204825 */  move  $t1, $t9
.L00412DE0:
/* 00412DE0 5120000C */  beql  $t1, $zero, .L00412E14
/* 00412DE4 8E020008 */   lw    $v0, 8($s0)
/* 00412DE8 5700000A */  bnezl $t8, .L00412E14
/* 00412DEC 8E020008 */   lw    $v0, 8($s0)
/* 00412DF0 8F998018 */  lw    $t9, %got(func_0041297C)($gp)
/* 00412DF4 02402025 */  move  $a0, $s2
/* 00412DF8 8E050014 */  lw    $a1, 0x14($s0)
/* 00412DFC 2739297C */  addiu $t9, %lo(func_0041297C) # addiu $t9, $t9, 0x297c
/* 00412E00 0320F809 */  jalr  $t9
/* 00412E04 02201025 */   move  $v0, $s1
/* 00412E08 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00412E0C 304300FF */  andi  $v1, $v0, 0xff
.L00412E10:
/* 00412E10 8E020008 */  lw    $v0, 8($s0)
.L00412E14:
/* 00412E14 10400006 */  beqz  $v0, .L00412E30
/* 00412E18 00000000 */   nop   
/* 00412E1C 8C4A0010 */  lw    $t2, 0x10($v0)
/* 00412E20 8E0B0010 */  lw    $t3, 0x10($s0)
/* 00412E24 014B9826 */  xor   $s3, $t2, $t3
/* 00412E28 0013982B */  sltu  $s3, $zero, $s3
/* 00412E2C 327300FF */  andi  $s3, $s3, 0xff
.L00412E30:
/* 00412E30 10400005 */  beqz  $v0, .L00412E48
/* 00412E34 00408025 */   move  $s0, $v0
/* 00412E38 16600003 */  bnez  $s3, .L00412E48
/* 00412E3C 00000000 */   nop   
/* 00412E40 5060FFAD */  beql  $v1, $zero, .L00412CF8
/* 00412E44 92020000 */   lbu   $v0, ($s0)
.L00412E48:
/* 00412E48 14600007 */  bnez  $v1, .L00412E68
/* 00412E4C 00009825 */   move  $s3, $zero
/* 00412E50 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00412E54 8FA40044 */  lw    $a0, 0x44($sp)
/* 00412E58 96450002 */  lhu   $a1, 2($s2)
/* 00412E5C 0320F809 */  jalr  $t9
/* 00412E60 24840104 */   addiu $a0, $a0, 0x104
/* 00412E64 8FBC0028 */  lw    $gp, 0x28($sp)
.L00412E68:
/* 00412E68 8FA80044 */  lw    $t0, 0x44($sp)
/* 00412E6C 00001825 */  move  $v1, $zero
/* 00412E70 8D100020 */  lw    $s0, 0x20($t0)
/* 00412E74 92020000 */  lbu   $v0, ($s0)
.L00412E78:
/* 00412E78 02402025 */  move  $a0, $s2
/* 00412E7C 244FFFE0 */  addiu $t7, $v0, -0x20
/* 00412E80 2DEC0060 */  sltiu $t4, $t7, 0x60
/* 00412E84 11800009 */  beqz  $t4, .L00412EAC
/* 00412E88 00000000 */   nop   
/* 00412E8C 8F998044 */  lw    $t9, %got(D_1000FE20)($gp)
/* 00412E90 000F7143 */  sra   $t6, $t7, 5
/* 00412E94 000E6880 */  sll   $t5, $t6, 2
/* 00412E98 2739FE20 */  addiu $t9, %lo(D_1000FE20) # addiu $t9, $t9, -0x1e0
/* 00412E9C 032D4821 */  addu  $t1, $t9, $t5
/* 00412EA0 8D380000 */  lw    $t8, ($t1)
/* 00412EA4 01F85004 */  sllv  $t2, $t8, $t7
/* 00412EA8 294C0000 */  slti  $t4, $t2, 0
.L00412EAC:
/* 00412EAC 1180000A */  beqz  $t4, .L00412ED8
/* 00412EB0 2C4E00A0 */   sltiu $t6, $v0, 0xa0
/* 00412EB4 8F998018 */  lw    $t9, %got(func_00412B18)($gp)
/* 00412EB8 8E080004 */  lw    $t0, 4($s0)
/* 00412EBC 02201025 */  move  $v0, $s1
/* 00412EC0 27392B18 */  addiu $t9, %lo(func_00412B18) # addiu $t9, $t9, 0x2b18
/* 00412EC4 0320F809 */  jalr  $t9
/* 00412EC8 8D050034 */   lw    $a1, 0x34($t0)
/* 00412ECC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00412ED0 1000002E */  b     .L00412F8C
/* 00412ED4 304300FF */   andi  $v1, $v0, 0xff
.L00412ED8:
/* 00412ED8 11C00009 */  beqz  $t6, .L00412F00
/* 00412EDC 00000000 */   nop   
/* 00412EE0 8F898044 */  lw    $t1, %got(D_1000FE0C)($gp)
/* 00412EE4 0002C943 */  sra   $t9, $v0, 5
/* 00412EE8 00196880 */  sll   $t5, $t9, 2
/* 00412EEC 2529FE0C */  addiu $t1, %lo(D_1000FE0C) # addiu $t1, $t1, -0x1f4
/* 00412EF0 012DC021 */  addu  $t8, $t1, $t5
/* 00412EF4 8F0F0000 */  lw    $t7, ($t8)
/* 00412EF8 004F5004 */  sllv  $t2, $t7, $v0
/* 00412EFC 294E0000 */  slti  $t6, $t2, 0
.L00412F00:
/* 00412F00 55C00023 */  bnezl $t6, .L00412F90
/* 00412F04 8E02000C */   lw    $v0, 0xc($s0)
/* 00412F08 8F998018 */  lw    $t9, %got(func_00412B18)($gp)
/* 00412F0C 02402025 */  move  $a0, $s2
/* 00412F10 8E050004 */  lw    $a1, 4($s0)
/* 00412F14 27392B18 */  addiu $t9, %lo(func_00412B18) # addiu $t9, $t9, 0x2b18
/* 00412F18 0320F809 */  jalr  $t9
/* 00412F1C 02201025 */   move  $v0, $s1
/* 00412F20 920C0000 */  lbu   $t4, ($s0)
/* 00412F24 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00412F28 304300FF */  andi  $v1, $v0, 0xff
/* 00412F2C 2588FFE0 */  addiu $t0, $t4, -0x20
/* 00412F30 2D190080 */  sltiu $t9, $t0, 0x80
/* 00412F34 13200009 */  beqz  $t9, .L00412F5C
/* 00412F38 304C00FF */   andi  $t4, $v0, 0xff
/* 00412F3C 8F988044 */  lw    $t8, %got(D_1000FDFC)($gp)
/* 00412F40 00084943 */  sra   $t1, $t0, 5
/* 00412F44 00096880 */  sll   $t5, $t1, 2
/* 00412F48 2718FDFC */  addiu $t8, %lo(D_1000FDFC) # addiu $t8, $t8, -0x204
/* 00412F4C 030D7821 */  addu  $t7, $t8, $t5
/* 00412F50 8DEA0000 */  lw    $t2, ($t7)
/* 00412F54 010A5804 */  sllv  $t3, $t2, $t0
/* 00412F58 29790000 */  slti  $t9, $t3, 0
.L00412F5C:
/* 00412F5C 5320000C */  beql  $t9, $zero, .L00412F90
/* 00412F60 8E02000C */   lw    $v0, 0xc($s0)
/* 00412F64 5580000A */  bnezl $t4, .L00412F90
/* 00412F68 8E02000C */   lw    $v0, 0xc($s0)
/* 00412F6C 8F998018 */  lw    $t9, %got(func_00412B18)($gp)
/* 00412F70 02402025 */  move  $a0, $s2
/* 00412F74 8E050014 */  lw    $a1, 0x14($s0)
/* 00412F78 27392B18 */  addiu $t9, %lo(func_00412B18) # addiu $t9, $t9, 0x2b18
/* 00412F7C 0320F809 */  jalr  $t9
/* 00412F80 02201025 */   move  $v0, $s1
/* 00412F84 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00412F88 304300FF */  andi  $v1, $v0, 0xff
.L00412F8C:
/* 00412F8C 8E02000C */  lw    $v0, 0xc($s0)
.L00412F90:
/* 00412F90 10400006 */  beqz  $v0, .L00412FAC
/* 00412F94 00000000 */   nop   
/* 00412F98 8C490010 */  lw    $t1, 0x10($v0)
/* 00412F9C 8E180010 */  lw    $t8, 0x10($s0)
/* 00412FA0 01389826 */  xor   $s3, $t1, $t8
/* 00412FA4 0013982B */  sltu  $s3, $zero, $s3
/* 00412FA8 327300FF */  andi  $s3, $s3, 0xff
.L00412FAC:
/* 00412FAC 10400005 */  beqz  $v0, .L00412FC4
/* 00412FB0 00408025 */   move  $s0, $v0
/* 00412FB4 16600003 */  bnez  $s3, .L00412FC4
/* 00412FB8 00000000 */   nop   
/* 00412FBC 5060FFAE */  beql  $v1, $zero, .L00412E78
/* 00412FC0 92020000 */   lbu   $v0, ($s0)
.L00412FC4:
/* 00412FC4 54600008 */  bnezl $v1, .L00412FE8
/* 00412FC8 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00412FCC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00412FD0 8FA40044 */  lw    $a0, 0x44($sp)
/* 00412FD4 96450002 */  lhu   $a1, 2($s2)
/* 00412FD8 0320F809 */  jalr  $t9
/* 00412FDC 24840114 */   addiu $a0, $a0, 0x114
/* 00412FE0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00412FE4 8FBF002C */  lw    $ra, 0x2c($sp)
.L00412FE8:
/* 00412FE8 8FB00018 */  lw    $s0, 0x18($sp)
/* 00412FEC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00412FF0 8FB20020 */  lw    $s2, 0x20($sp)
/* 00412FF4 8FB30024 */  lw    $s3, 0x24($sp)
/* 00412FF8 03E00008 */  jr    $ra
/* 00412FFC 27BD0040 */   addiu $sp, $sp, 0x40
    .type checkexp_ant_av, @function
    .size checkexp_ant_av, .-checkexp_ant_av
    .end checkexp_ant_av

glabel exprdelete
    .ent exprdelete
    # 00413000 exprdelete
    # 0041550C func_0041550C
    # 004175BC copypropagate
/* 00413000 3C1C0FC0 */  .cpload $t9
/* 00413004 279C7290 */  
/* 00413008 0399E021 */  
/* 0041300C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00413010 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00413014 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00413018 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041301C AFB00018 */  sw    $s0, 0x18($sp)
/* 00413020 90820000 */  lbu   $v0, ($a0)
/* 00413024 00808025 */  move  $s0, $a0
/* 00413028 00A08825 */  move  $s1, $a1
/* 0041302C 244EFFFF */  addiu $t6, $v0, -1
/* 00413030 2DC10008 */  sltiu $at, $t6, 8
/* 00413034 102000EF */  beqz  $at, .L004133F4
/* 00413038 00000000 */   nop   
/* 0041303C 8F818044 */  lw    $at, %got(jtbl_1000A28C)($gp)
/* 00413040 000E7080 */  sll   $t6, $t6, 2
/* 00413044 002E0821 */  addu  $at, $at, $t6
/* 00413048 8C2EA28C */  lw    $t6, %lo(jtbl_1000A28C)($at)
/* 0041304C 01DC7021 */  addu  $t6, $t6, $gp
/* 00413050 01C00008 */  jr    $t6
/* 00413054 00000000 */   nop   
.L00413058:
/* 00413058 960F0006 */  lhu   $t7, 6($s0)
/* 0041305C 25F8FFFF */  addiu $t8, $t7, -1
/* 00413060 3319FFFF */  andi  $t9, $t8, 0xffff
/* 00413064 172000EB */  bnez  $t9, .L00413414
/* 00413068 A6180006 */   sh    $t8, 6($s0)
/* 0041306C 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 00413070 8E040034 */  lw    $a0, 0x34($s0)
/* 00413074 02202825 */  move  $a1, $s1
/* 00413078 0320F809 */  jalr  $t9
/* 0041307C 00000000 */   nop   
/* 00413080 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00413084 02002025 */  move  $a0, $s0
/* 00413088 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0041308C 0320F809 */  jalr  $t9
/* 00413090 00000000 */   nop   
/* 00413094 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00413098 8E040014 */  lw    $a0, 0x14($s0)
/* 0041309C 02202825 */  move  $a1, $s1
/* 004130A0 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 004130A4 0320F809 */  jalr  $t9
/* 004130A8 00000000 */   nop   
/* 004130AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004130B0 8E080014 */  lw    $t0, 0x14($s0)
/* 004130B4 2625012C */  addiu $a1, $s1, 0x12c
/* 004130B8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004130BC 95040002 */  lhu   $a0, 2($t0)
/* 004130C0 0320F809 */  jalr  $t9
/* 004130C4 00000000 */   nop   
/* 004130C8 1440000F */  bnez  $v0, .L00413108
/* 004130CC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004130D0 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004130D4 8E090014 */  lw    $t1, 0x14($s0)
/* 004130D8 26240104 */  addiu $a0, $s1, 0x104
/* 004130DC 0320F809 */  jalr  $t9
/* 004130E0 95250002 */   lhu   $a1, 2($t1)
/* 004130E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004130E8 8E0A0014 */  lw    $t2, 0x14($s0)
/* 004130EC 26240114 */  addiu $a0, $s1, 0x114
/* 004130F0 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004130F4 95450002 */  lhu   $a1, 2($t2)
/* 004130F8 0320F809 */  jalr  $t9
/* 004130FC 00000000 */   nop   
/* 00413100 100000C4 */  b     .L00413414
/* 00413104 8FBC0020 */   lw    $gp, 0x20($sp)
.L00413108:
/* 00413108 8F99821C */  lw    $t9, %call16(checkexp_ant_av)($gp)
/* 0041310C 8E040014 */  lw    $a0, 0x14($s0)
/* 00413110 02202825 */  move  $a1, $s1
/* 00413114 0320F809 */  jalr  $t9
/* 00413118 00000000 */   nop   
/* 0041311C 100000BD */  b     .L00413414
/* 00413120 8FBC0020 */   lw    $gp, 0x20($sp)
.L00413124:
/* 00413124 8E040030 */  lw    $a0, 0x30($s0)
/* 00413128 50800016 */  beql  $a0, $zero, .L00413184
/* 0041312C 960F0006 */   lhu   $t7, 6($s0)
/* 00413130 8F8B89CC */  lw     $t3, %got(nocopy)($gp)
/* 00413134 8D6B0000 */  lw    $t3, ($t3)
/* 00413138 51640012 */  beql  $t3, $a0, .L00413184
/* 0041313C 960F0006 */   lhu   $t7, 6($s0)
/* 00413140 960C0006 */  lhu   $t4, 6($s0)
/* 00413144 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 00413148 02202825 */  move  $a1, $s1
/* 0041314C 258DFFFF */  addiu $t5, $t4, -1
/* 00413150 0320F809 */  jalr  $t9
/* 00413154 A60D0006 */   sh    $t5, 6($s0)
/* 00413158 960E0006 */  lhu   $t6, 6($s0)
/* 0041315C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00413160 55C000AD */  bnezl $t6, .L00413418
/* 00413164 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00413168 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0041316C 02002025 */  move  $a0, $s0
/* 00413170 0320F809 */  jalr  $t9
/* 00413174 00000000 */   nop   
/* 00413178 100000A6 */  b     .L00413414
/* 0041317C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00413180 960F0006 */  lhu   $t7, 6($s0)
.L00413184:
/* 00413184 25F8FFFF */  addiu $t8, $t7, -1
/* 00413188 3319FFFF */  andi  $t9, $t8, 0xffff
/* 0041318C 172000A1 */  bnez  $t9, .L00413414
/* 00413190 A6180006 */   sh    $t8, 6($s0)
/* 00413194 8E080018 */  lw    $t0, 0x18($s0)
/* 00413198 24010006 */  li    $at, 6
/* 0041319C A1000009 */  sb    $zero, 9($t0)
/* 004131A0 92090000 */  lbu   $t1, ($s0)
/* 004131A4 5521000F */  bnel  $t1, $at, .L004131E4
/* 004131A8 920B0003 */   lbu   $t3, 3($s0)
/* 004131AC 8E020038 */  lw    $v0, 0x38($s0)
/* 004131B0 10400005 */  beqz  $v0, .L004131C8
/* 004131B4 00000000 */   nop   
/* 004131B8 904A0000 */  lbu   $t2, ($v0)
/* 004131BC 24010060 */  li    $at, 96
/* 004131C0 55410008 */  bnel  $t2, $at, .L004131E4
/* 004131C4 920B0003 */   lbu   $t3, 3($s0)
.L004131C8:
/* 004131C8 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 004131CC 8E040024 */  lw    $a0, 0x24($s0)
/* 004131D0 02202825 */  move  $a1, $s1
/* 004131D4 0320F809 */  jalr  $t9
/* 004131D8 00000000 */   nop   
/* 004131DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004131E0 920B0003 */  lbu   $t3, 3($s0)
.L004131E4:
/* 004131E4 51600008 */  beql  $t3, $zero, .L00413208
/* 004131E8 920D0002 */   lbu   $t5, 2($s0)
/* 004131EC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004131F0 8E0C0014 */  lw    $t4, 0x14($s0)
/* 004131F4 26240104 */  addiu $a0, $s1, 0x104
/* 004131F8 0320F809 */  jalr  $t9
/* 004131FC 95850002 */   lhu   $a1, 2($t4)
/* 00413200 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00413204 920D0002 */  lbu   $t5, 2($s0)
.L00413208:
/* 00413208 15A00007 */  bnez  $t5, .L00413228
/* 0041320C 00000000 */   nop   
/* 00413210 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00413214 8E0E0014 */  lw    $t6, 0x14($s0)
/* 00413218 26240114 */  addiu $a0, $s1, 0x114
/* 0041321C 0320F809 */  jalr  $t9
/* 00413220 95C50002 */   lhu   $a1, 2($t6)
/* 00413224 8FBC0020 */  lw    $gp, 0x20($sp)
.L00413228:
/* 00413228 8F998210 */  lw    $t9, %call16(vardelete)($gp)
/* 0041322C 02002025 */  move  $a0, $s0
/* 00413230 02202825 */  move  $a1, $s1
/* 00413234 0320F809 */  jalr  $t9
/* 00413238 00000000 */   nop   
/* 0041323C 920F0000 */  lbu   $t7, ($s0)
/* 00413240 24010006 */  li    $at, 6
/* 00413244 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00413248 15E10007 */  bne   $t7, $at, .L00413268
/* 0041324C 00000000 */   nop   
/* 00413250 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 00413254 8E040014 */  lw    $a0, 0x14($s0)
/* 00413258 02202825 */  move  $a1, $s1
/* 0041325C 0320F809 */  jalr  $t9
/* 00413260 00000000 */   nop   
/* 00413264 8FBC0020 */  lw    $gp, 0x20($sp)
.L00413268:
/* 00413268 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0041326C 02002025 */  move  $a0, $s0
/* 00413270 0320F809 */  jalr  $t9
/* 00413274 00000000 */   nop   
/* 00413278 10000066 */  b     .L00413414
/* 0041327C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00413280:
/* 00413280 96180006 */  lhu   $t8, 6($s0)
/* 00413284 2719FFFF */  addiu $t9, $t8, -1
/* 00413288 3328FFFF */  andi  $t0, $t9, 0xffff
/* 0041328C 15000061 */  bnez  $t0, .L00413414
/* 00413290 A6190006 */   sh    $t9, 6($s0)
/* 00413294 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 00413298 8E040024 */  lw    $a0, 0x24($s0)
/* 0041329C 02202825 */  move  $a1, $s1
/* 004132A0 0320F809 */  jalr  $t9
/* 004132A4 00000000 */   nop   
/* 004132A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004132AC 92020020 */  lbu   $v0, 0x20($s0)
/* 004132B0 8F8A8DBC */  lw     $t2, %got(optab)($gp)
/* 004132B4 00024880 */  sll   $t1, $v0, 2
/* 004132B8 01224823 */  subu  $t1, $t1, $v0
/* 004132BC 012A5821 */  addu  $t3, $t1, $t2
/* 004132C0 916C0002 */  lbu   $t4, 2($t3)
/* 004132C4 51800009 */  beql  $t4, $zero, .L004132EC
/* 004132C8 244DFFE0 */   addiu $t5, $v0, -0x20
/* 004132CC 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 004132D0 8E040028 */  lw    $a0, 0x28($s0)
/* 004132D4 02202825 */  move  $a1, $s1
/* 004132D8 0320F809 */  jalr  $t9
/* 004132DC 00000000 */   nop   
/* 004132E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004132E4 92020020 */  lbu   $v0, 0x20($s0)
/* 004132E8 244DFFE0 */  addiu $t5, $v0, -0x20
.L004132EC:
/* 004132EC 2DAE0080 */  sltiu $t6, $t5, 0x80
/* 004132F0 11C00009 */  beqz  $t6, .L00413318
/* 004132F4 00000000 */   nop   
/* 004132F8 8F998044 */  lw    $t9, %got(D_1000FE2C)($gp)
/* 004132FC 000D7943 */  sra   $t7, $t5, 5
/* 00413300 000FC080 */  sll   $t8, $t7, 2
/* 00413304 2739FE2C */  addiu $t9, %lo(D_1000FE2C) # addiu $t9, $t9, -0x1d4
/* 00413308 03384021 */  addu  $t0, $t9, $t8
/* 0041330C 8D090000 */  lw    $t1, ($t0)
/* 00413310 01A95004 */  sllv  $t2, $t1, $t5
/* 00413314 294E0000 */  slti  $t6, $t2, 0
.L00413318:
/* 00413318 11C00009 */  beqz  $t6, .L00413340
/* 0041331C 00000000 */   nop   
/* 00413320 8E0C0018 */  lw    $t4, 0x18($s0)
/* 00413324 02002025 */  move  $a0, $s0
/* 00413328 02202825 */  move  $a1, $s1
/* 0041332C A1800009 */  sb    $zero, 9($t4)
/* 00413330 8F998210 */  lw    $t9, %call16(vardelete)($gp)
/* 00413334 0320F809 */  jalr  $t9
/* 00413338 00000000 */   nop   
/* 0041333C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00413340:
/* 00413340 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 00413344 02002025 */  move  $a0, $s0
/* 00413348 0320F809 */  jalr  $t9
/* 0041334C 00000000 */   nop   
/* 00413350 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00413354 8E040014 */  lw    $a0, 0x14($s0)
/* 00413358 02202825 */  move  $a1, $s1
/* 0041335C 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 00413360 0320F809 */  jalr  $t9
/* 00413364 00000000 */   nop   
/* 00413368 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041336C 8E0F0014 */  lw    $t7, 0x14($s0)
/* 00413370 2625012C */  addiu $a1, $s1, 0x12c
/* 00413374 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00413378 95E40002 */  lhu   $a0, 2($t7)
/* 0041337C 0320F809 */  jalr  $t9
/* 00413380 00000000 */   nop   
/* 00413384 14400014 */  bnez  $v0, .L004133D8
/* 00413388 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0041338C 92190021 */  lbu   $t9, 0x21($s0)
/* 00413390 53200008 */  beql  $t9, $zero, .L004133B4
/* 00413394 92080022 */   lbu   $t0, 0x22($s0)
/* 00413398 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0041339C 8E180014 */  lw    $t8, 0x14($s0)
/* 004133A0 26240104 */  addiu $a0, $s1, 0x104
/* 004133A4 0320F809 */  jalr  $t9
/* 004133A8 97050002 */   lhu   $a1, 2($t8)
/* 004133AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004133B0 92080022 */  lbu   $t0, 0x22($s0)
.L004133B4:
/* 004133B4 51000018 */  beql  $t0, $zero, .L00413418
/* 004133B8 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004133BC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004133C0 8E090014 */  lw    $t1, 0x14($s0)
/* 004133C4 26240114 */  addiu $a0, $s1, 0x114
/* 004133C8 0320F809 */  jalr  $t9
/* 004133CC 95250002 */   lhu   $a1, 2($t1)
/* 004133D0 10000010 */  b     .L00413414
/* 004133D4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004133D8:
/* 004133D8 8F99821C */  lw    $t9, %call16(checkexp_ant_av)($gp)
/* 004133DC 8E040014 */  lw    $a0, 0x14($s0)
/* 004133E0 02202825 */  move  $a1, $s1
/* 004133E4 0320F809 */  jalr  $t9
/* 004133E8 00000000 */   nop   
/* 004133EC 10000009 */  b     .L00413414
/* 004133F0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004133F4:
/* 004133F4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004133F8 8F868044 */  lw    $a2, %got(RO_1000A280)($gp)
/* 004133FC 24040001 */  li    $a0, 1
/* 00413400 2405015D */  li    $a1, 349
/* 00413404 2407000A */  li    $a3, 10
/* 00413408 0320F809 */  jalr  $t9
/* 0041340C 24C6A280 */   addiu $a2, %lo(RO_1000A280) # addiu $a2, $a2, -0x5d80
/* 00413410 8FBC0020 */  lw    $gp, 0x20($sp)
.L00413414:
/* 00413414 8FBF0024 */  lw    $ra, 0x24($sp)
.L00413418:
/* 00413418 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041341C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00413420 03E00008 */  jr    $ra
/* 00413424 27BD0028 */   addiu $sp, $sp, 0x28
    .type exprdelete, @function
    .size exprdelete, .-exprdelete
    .end exprdelete

glabel checkstatoccur
    .ent checkstatoccur
    # 004175BC copypropagate
/* 00413428 3C1C0FC0 */  .cpload $t9
/* 0041342C 279C6E68 */  
/* 00413430 0399E021 */  
/* 00413434 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00413438 AFB00014 */  sw    $s0, 0x14($sp)
/* 0041343C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00413440 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00413444 AFA50024 */  sw    $a1, 0x24($sp)
/* 00413448 00808025 */  move  $s0, $a0
/* 0041344C 8CA2001C */  lw    $v0, 0x1c($a1)
/* 00413450 00003025 */  move  $a2, $zero
/* 00413454 00003825 */  move  $a3, $zero
/* 00413458 904F0000 */  lbu   $t7, ($v0)
.L0041345C:
/* 0041345C 25F8FFE0 */  addiu $t8, $t7, -0x20
/* 00413460 2F190060 */  sltiu $t9, $t8, 0x60
/* 00413464 13200009 */  beqz  $t9, .L0041348C
/* 00413468 00000000 */   nop   
/* 0041346C 8F8A8044 */  lw    $t2, %got(D_1000FE3C)($gp)
/* 00413470 00184143 */  sra   $t0, $t8, 5
/* 00413474 00084880 */  sll   $t1, $t0, 2
/* 00413478 254AFE3C */  addiu $t2, %lo(D_1000FE3C) # addiu $t2, $t2, -0x1c4
/* 0041347C 01495821 */  addu  $t3, $t2, $t1
/* 00413480 8D6C0000 */  lw    $t4, ($t3)
/* 00413484 030C6804 */  sllv  $t5, $t4, $t8
/* 00413488 29B90000 */  slti  $t9, $t5, 0
.L0041348C:
/* 0041348C 53200006 */  beql  $t9, $zero, .L004134A8
/* 00413490 8C430008 */   lw    $v1, 8($v0)
/* 00413494 8C4F0028 */  lw    $t7, 0x28($v0)
/* 00413498 020F3826 */  xor   $a3, $s0, $t7
/* 0041349C 2CE70001 */  sltiu $a3, $a3, 1
/* 004134A0 30E700FF */  andi  $a3, $a3, 0xff
/* 004134A4 8C430008 */  lw    $v1, 8($v0)
.L004134A8:
/* 004134A8 10600006 */  beqz  $v1, .L004134C4
/* 004134AC 00000000 */   nop   
/* 004134B0 8C680010 */  lw    $t0, 0x10($v1)
/* 004134B4 8C4A0010 */  lw    $t2, 0x10($v0)
/* 004134B8 010A3026 */  xor   $a2, $t0, $t2
/* 004134BC 0006302B */  sltu  $a2, $zero, $a2
/* 004134C0 30C600FF */  andi  $a2, $a2, 0xff
.L004134C4:
/* 004134C4 10600005 */  beqz  $v1, .L004134DC
/* 004134C8 00601025 */   move  $v0, $v1
/* 004134CC 14C00003 */  bnez  $a2, .L004134DC
/* 004134D0 00000000 */   nop   
/* 004134D4 50E0FFE1 */  beql  $a3, $zero, .L0041345C
/* 004134D8 904F0000 */   lbu   $t7, ($v0)
.L004134DC:
/* 004134DC 54E00008 */  bnezl $a3, .L00413500
/* 004134E0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004134E4 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004134E8 8FA40024 */  lw    $a0, 0x24($sp)
/* 004134EC 96050002 */  lhu   $a1, 2($s0)
/* 004134F0 0320F809 */  jalr  $t9
/* 004134F4 2484012C */   addiu $a0, $a0, 0x12c
/* 004134F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004134FC 8FBF001C */  lw    $ra, 0x1c($sp)
.L00413500:
/* 00413500 8FB00014 */  lw    $s0, 0x14($sp)
/* 00413504 27BD0020 */  addiu $sp, $sp, 0x20
/* 00413508 03E00008 */  jr    $ra
/* 0041350C 00000000 */   nop   
    .type checkstatoccur, @function
    .size checkstatoccur, .-checkstatoccur
    .end checkstatoccur

    .type func_00413510, @function
func_00413510:
    # 00413684 func_00413684
    # 00414108 func_00414108
    # 0041550C func_0041550C
/* 00413510 3C1C0FC0 */  .cpload $t9
/* 00413514 279C6D80 */  
/* 00413518 0399E021 */  
/* 0041351C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00413520 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00413524 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00413528 AFA20024 */  sw    $v0, 0x24($sp)
/* 0041352C 8F8689CC */  lw     $a2, %got(nocopy)($gp)
.L00413530:
/* 00413530 90820000 */  lbu   $v0, ($a0)
/* 00413534 00801825 */  move  $v1, $a0
/* 00413538 244EFFFF */  addiu $t6, $v0, -1
/* 0041353C 2DC10008 */  sltiu $at, $t6, 8
/* 00413540 10200016 */  beqz  $at, .L0041359C
/* 00413544 00000000 */   nop   
/* 00413548 8F818044 */  lw    $at, %got(jtbl_1000A2B8)($gp)
/* 0041354C 000E7080 */  sll   $t6, $t6, 2
/* 00413550 002E0821 */  addu  $at, $at, $t6
/* 00413554 8C2EA2B8 */  lw    $t6, %lo(jtbl_1000A2B8)($at)
/* 00413558 01DC7021 */  addu  $t6, $t6, $gp
/* 0041355C 01C00008 */  jr    $t6
/* 00413560 00000000 */   nop   
.L00413564:
/* 00413564 948F0006 */  lhu   $t7, 6($a0)
/* 00413568 8C820030 */  lw    $v0, 0x30($a0)
/* 0041356C 01E5C021 */  addu  $t8, $t7, $a1
/* 00413570 10400012 */  beqz  $v0, .L004135BC
/* 00413574 A4980006 */   sh    $t8, 6($a0)
/* 00413578 8CD90000 */  lw    $t9, ($a2)
/* 0041357C 53220010 */  beql  $t9, $v0, .L004135C0
/* 00413580 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00413584 1000FFEA */  b     .L00413530
/* 00413588 8C640030 */   lw    $a0, 0x30($v1)
.L0041358C:
/* 0041358C 94880006 */  lhu   $t0, 6($a0)
/* 00413590 01054821 */  addu  $t1, $t0, $a1
/* 00413594 10000009 */  b     .L004135BC
/* 00413598 A4890006 */   sh    $t1, 6($a0)
.L0041359C:
/* 0041359C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004135A0 8F868044 */  lw    $a2, %got(RO_1000A2AC)($gp)
/* 004135A4 24040001 */  li    $a0, 1
/* 004135A8 240501C7 */  li    $a1, 455
/* 004135AC 2407000A */  li    $a3, 10
/* 004135B0 0320F809 */  jalr  $t9
/* 004135B4 24C6A2AC */   addiu $a2, %lo(RO_1000A2AC) # addiu $a2, $a2, -0x5d54
/* 004135B8 8FBC0018 */  lw    $gp, 0x18($sp)
.L004135BC:
/* 004135BC 8FBF001C */  lw    $ra, 0x1c($sp)
.L004135C0:
/* 004135C0 27BD0028 */  addiu $sp, $sp, 0x28
/* 004135C4 03E00008 */  jr    $ra
/* 004135C8 00000000 */   nop   

    .type func_004135CC, @function
func_004135CC:
    # 00413684 func_00413684
/* 004135CC 3C1C0FC0 */  .cpload $t9
/* 004135D0 279C6CC4 */  
/* 004135D4 0399E021 */  
/* 004135D8 90820000 */  lbu   $v0, ($a0)
/* 004135DC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004135E0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004135E4 244EFFFF */  addiu $t6, $v0, -1
/* 004135E8 2DC10008 */  sltiu $at, $t6, 8
/* 004135EC 10200019 */  beqz  $at, .L00413654
/* 004135F0 AFBC0018 */   sw    $gp, 0x18($sp)
/* 004135F4 8F818044 */  lw    $at, %got(jtbl_1000A2E4)($gp)
/* 004135F8 000E7080 */  sll   $t6, $t6, 2
/* 004135FC 002E0821 */  addu  $at, $at, $t6
/* 00413600 8C2EA2E4 */  lw    $t6, %lo(jtbl_1000A2E4)($at)
/* 00413604 01DC7021 */  addu  $t6, $t6, $gp
/* 00413608 01C00008 */  jr    $t6
/* 0041360C 00000000 */   nop   
.L00413610:
/* 00413610 948F0006 */  lhu   $t7, 6($a0)
/* 00413614 8C820030 */  lw    $v0, 0x30($a0)
/* 00413618 25F8FFFF */  addiu $t8, $t7, -1
/* 0041361C 10400015 */  beqz  $v0, .L00413674
/* 00413620 A4980006 */   sh    $t8, 6($a0)
/* 00413624 8F9989CC */  lw     $t9, %got(nocopy)($gp)
/* 00413628 8F390000 */  lw    $t9, ($t9)
/* 0041362C 53220012 */  beql  $t9, $v0, .L00413678
/* 00413630 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00413634 94480006 */  lhu   $t0, 6($v0)
/* 00413638 2509FFFF */  addiu $t1, $t0, -1
/* 0041363C 1000000D */  b     .L00413674
/* 00413640 A4490006 */   sh    $t1, 6($v0)
.L00413644:
/* 00413644 948A0006 */  lhu   $t2, 6($a0)
/* 00413648 254BFFFF */  addiu $t3, $t2, -1
/* 0041364C 10000009 */  b     .L00413674
/* 00413650 A48B0006 */   sh    $t3, 6($a0)
.L00413654:
/* 00413654 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00413658 8F868044 */  lw    $a2, %got(RO_1000A2D8)($gp)
/* 0041365C 24040001 */  li    $a0, 1
/* 00413660 240501D6 */  li    $a1, 470
/* 00413664 2407000A */  li    $a3, 10
/* 00413668 0320F809 */  jalr  $t9
/* 0041366C 24C6A2D8 */   addiu $a2, %lo(RO_1000A2D8) # addiu $a2, $a2, -0x5d28
/* 00413670 8FBC0018 */  lw    $gp, 0x18($sp)
.L00413674:
/* 00413674 8FBF001C */  lw    $ra, 0x1c($sp)
.L00413678:
/* 00413678 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041367C 03E00008 */  jr    $ra
/* 00413680 00000000 */   nop   

    .type func_00413684, @function
func_00413684:
    # 00414108 func_00414108
/* 00413684 3C1C0FC0 */  .cpload $t9
/* 00413688 279C6C0C */  
/* 0041368C 0399E021 */  
/* 00413690 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00413694 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00413698 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041369C 90830000 */  lbu   $v1, ($a0)
/* 004136A0 00803025 */  move  $a2, $a0
/* 004136A4 00403825 */  move  $a3, $v0
/* 004136A8 246EFFFF */  addiu $t6, $v1, -1
/* 004136AC 2DC10008 */  sltiu $at, $t6, 8
/* 004136B0 1020003E */  beqz  $at, .L004137AC
/* 004136B4 00000000 */   nop   
/* 004136B8 8F818044 */  lw    $at, %got(jtbl_1000A310)($gp)
/* 004136BC 000E7080 */  sll   $t6, $t6, 2
/* 004136C0 002E0821 */  addu  $at, $at, $t6
/* 004136C4 8C2EA310 */  lw    $t6, %lo(jtbl_1000A310)($at)
/* 004136C8 01DC7021 */  addu  $t6, $t6, $gp
/* 004136CC 01C00008 */  jr    $t6
/* 004136D0 00000000 */   nop   
.L004136D4:
/* 004136D4 8F998018 */  lw    $t9, %got(func_00413510)($gp)
/* 004136D8 00C02025 */  move  $a0, $a2
/* 004136DC 24050001 */  li    $a1, 1
/* 004136E0 27393510 */  addiu $t9, %lo(func_00413510) # addiu $t9, $t9, 0x3510
/* 004136E4 0320F809 */  jalr  $t9
/* 004136E8 00E01025 */   move  $v0, $a3
/* 004136EC 10000037 */  b     .L004137CC
/* 004136F0 8FBC0018 */   lw    $gp, 0x18($sp)
.L004136F4:
/* 004136F4 94CF0006 */  lhu   $t7, 6($a2)
/* 004136F8 25F80001 */  addiu $t8, $t7, 1
/* 004136FC 3319FFFF */  andi  $t9, $t8, 0xffff
/* 00413700 2F210002 */  sltiu $at, $t9, 2
/* 00413704 14200031 */  bnez  $at, .L004137CC
/* 00413708 A4D80006 */   sh    $t8, 6($a2)
/* 0041370C 8F998018 */  lw    $t9, %got(func_004135CC)($gp)
/* 00413710 8CC40034 */  lw    $a0, 0x34($a2)
/* 00413714 00E01025 */  move  $v0, $a3
/* 00413718 273935CC */  addiu $t9, %lo(func_004135CC) # addiu $t9, $t9, 0x35cc
/* 0041371C 0320F809 */  jalr  $t9
/* 00413720 00000000 */   nop   
/* 00413724 10000029 */  b     .L004137CC
/* 00413728 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041372C:
/* 0041372C 94C80006 */  lhu   $t0, 6($a2)
/* 00413730 00E01025 */  move  $v0, $a3
/* 00413734 25090001 */  addiu $t1, $t0, 1
/* 00413738 312AFFFF */  andi  $t2, $t1, 0xffff
/* 0041373C 2D410002 */  sltiu $at, $t2, 2
/* 00413740 14200022 */  bnez  $at, .L004137CC
/* 00413744 A4C90006 */   sh    $t1, 6($a2)
/* 00413748 8F998018 */  lw    $t9, %got(func_004135CC)($gp)
/* 0041374C 8CC40024 */  lw    $a0, 0x24($a2)
/* 00413750 AFA60028 */  sw    $a2, 0x28($sp)
/* 00413754 273935CC */  addiu $t9, %lo(func_004135CC) # addiu $t9, $t9, 0x35cc
/* 00413758 0320F809 */  jalr  $t9
/* 0041375C AFA70024 */   sw    $a3, 0x24($sp)
/* 00413760 8FA60028 */  lw    $a2, 0x28($sp)
/* 00413764 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00413768 8FA70024 */  lw    $a3, 0x24($sp)
/* 0041376C 90CB0020 */  lbu   $t3, 0x20($a2)
/* 00413770 8F8D8DBC */  lw     $t5, %got(optab)($gp)
/* 00413774 000B6080 */  sll   $t4, $t3, 2
/* 00413778 018B6023 */  subu  $t4, $t4, $t3
/* 0041377C 018D7021 */  addu  $t6, $t4, $t5
/* 00413780 91CF0002 */  lbu   $t7, 2($t6)
/* 00413784 51E00012 */  beql  $t7, $zero, .L004137D0
/* 00413788 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041378C 8F998018 */  lw    $t9, %got(func_004135CC)($gp)
/* 00413790 8CC40028 */  lw    $a0, 0x28($a2)
/* 00413794 00E01025 */  move  $v0, $a3
/* 00413798 273935CC */  addiu $t9, %lo(func_004135CC) # addiu $t9, $t9, 0x35cc
/* 0041379C 0320F809 */  jalr  $t9
/* 004137A0 00000000 */   nop   
/* 004137A4 10000009 */  b     .L004137CC
/* 004137A8 8FBC0018 */   lw    $gp, 0x18($sp)
.L004137AC:
/* 004137AC 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004137B0 8F868044 */  lw    $a2, %got(RO_1000A304)($gp)
/* 004137B4 24040001 */  li    $a0, 1
/* 004137B8 240501E5 */  li    $a1, 485
/* 004137BC 2407000A */  li    $a3, 10
/* 004137C0 0320F809 */  jalr  $t9
/* 004137C4 24C6A304 */   addiu $a2, %lo(RO_1000A304) # addiu $a2, $a2, -0x5cfc
/* 004137C8 8FBC0018 */  lw    $gp, 0x18($sp)
.L004137CC:
/* 004137CC 8FBF001C */  lw    $ra, 0x1c($sp)
.L004137D0:
/* 004137D0 27BD0028 */  addiu $sp, $sp, 0x28
/* 004137D4 03E00008 */  jr    $ra
/* 004137D8 00000000 */   nop   

    .type func_004137DC, @function
func_004137DC:
    # 00414108 func_00414108
/* 004137DC 3C1C0FC0 */  .cpload $t9
/* 004137E0 279C6AB4 */  
/* 004137E4 0399E021 */  
/* 004137E8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004137EC AFA40038 */  sw    $a0, 0x38($sp)
/* 004137F0 97AE003A */  lhu   $t6, 0x3a($sp)
/* 004137F4 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 004137F8 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004137FC 000E7880 */  sll   $t7, $t6, 2
/* 00413800 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00413804 AFB40024 */  sw    $s4, 0x24($sp)
/* 00413808 AFB30020 */  sw    $s3, 0x20($sp)
/* 0041380C AFB2001C */  sw    $s2, 0x1c($sp)
/* 00413810 AFB10018 */  sw    $s1, 0x18($sp)
/* 00413814 AFB00014 */  sw    $s0, 0x14($sp)
/* 00413818 AFA60040 */  sw    $a2, 0x40($sp)
/* 0041381C AFA20034 */  sw    $v0, 0x34($sp)
/* 00413820 01F8C821 */  addu  $t9, $t7, $t8
/* 00413824 8F300000 */  lw    $s0, ($t9)
/* 00413828 00A08825 */  move  $s1, $a1
/* 0041382C 00E09825 */  move  $s3, $a3
/* 00413830 1200021B */  beqz  $s0, .L004140A0
/* 00413834 00009025 */   move  $s2, $zero
/* 00413838 8FB40048 */  lw    $s4, 0x48($sp)
/* 0041383C 92020000 */  lbu   $v0, ($s0)
.L00413840:
/* 00413840 3C011E00 */  lui   $at, 0x1e00
/* 00413844 8FAC0034 */  lw    $t4, 0x34($sp)
/* 00413848 2C480020 */  sltiu $t0, $v0, 0x20
/* 0041384C 00084823 */  negu  $t1, $t0
/* 00413850 01215024 */  and   $t2, $t1, $at
/* 00413854 004A5804 */  sllv  $t3, $t2, $v0
/* 00413858 05630006 */  bgezl $t3, .L00413874
/* 0041385C 92230000 */   lbu   $v1, ($s1)
/* 00413860 8D8DFFFC */  lw    $t5, -4($t4)
/* 00413864 8E0E0010 */  lw    $t6, 0x10($s0)
/* 00413868 15AE0206 */  bne   $t5, $t6, .L00414084
/* 0041386C 00000000 */   nop   
/* 00413870 92230000 */  lbu   $v1, ($s1)
.L00413874:
/* 00413874 246FFFFF */  addiu $t7, $v1, -1
/* 00413878 2DE10008 */  sltiu $at, $t7, 8
/* 0041387C 102001F9 */  beqz  $at, .L00414064
/* 00413880 00000000 */   nop   
/* 00413884 8F818044 */  lw    $at, %got(jtbl_1000A48C)($gp)
/* 00413888 000F7880 */  sll   $t7, $t7, 2
/* 0041388C 002F0821 */  addu  $at, $at, $t7
/* 00413890 8C2FA48C */  lw    $t7, %lo(jtbl_1000A48C)($at)
/* 00413894 01FC7821 */  addu  $t7, $t7, $gp
/* 00413898 01E00008 */  jr    $t7
/* 0041389C 00000000 */   nop   
.L004138A0:
/* 004138A0 24010002 */  li    $at, 2
/* 004138A4 144101F7 */  bne   $v0, $at, .L00414084
/* 004138A8 00000000 */   nop   
/* 004138AC 92020001 */  lbu   $v0, 1($s0)
/* 004138B0 92380001 */  lbu   $t8, 1($s1)
/* 004138B4 170201F3 */  bne   $t8, $v0, .L00414084
/* 004138B8 00000000 */   nop   
/* 004138BC 8E190014 */  lw    $t9, 0x14($s0)
/* 004138C0 2C480020 */  sltiu $t0, $v0, 0x20
/* 004138C4 00084823 */  negu  $t1, $t0
/* 004138C8 132001EE */  beqz  $t9, .L00414084
/* 004138CC 3C01BAA0 */   lui   $at, 0xbaa0
/* 004138D0 01215024 */  and   $t2, $t1, $at
/* 004138D4 004A5804 */  sllv  $t3, $t2, $v0
/* 004138D8 05610007 */  bgez  $t3, .L004138F8
/* 004138DC 2C4E0020 */   sltiu $t6, $v0, 0x20
/* 004138E0 8E2C0010 */  lw    $t4, 0x10($s1)
/* 004138E4 8E0D0020 */  lw    $t5, 0x20($s0)
/* 004138E8 158D01E6 */  bne   $t4, $t5, .L00414084
/* 004138EC 00000000 */   nop   
/* 004138F0 100001E4 */  b     .L00414084
/* 004138F4 24120001 */   li    $s2, 1
.L004138F8:
/* 004138F8 000E7823 */  negu  $t7, $t6
/* 004138FC 3C010500 */  lui   $at, 0x500
/* 00413900 01E1C024 */  and   $t8, $t7, $at
/* 00413904 0058C804 */  sllv  $t9, $t8, $v0
/* 00413908 0721000B */  bgez  $t9, .L00413938
/* 0041390C 24010009 */   li    $at, 9
/* 00413910 8E280010 */  lw    $t0, 0x10($s1)
/* 00413914 8E0A0020 */  lw    $t2, 0x20($s0)
/* 00413918 8E290014 */  lw    $t1, 0x14($s1)
/* 0041391C 8E0B0024 */  lw    $t3, 0x24($s0)
/* 00413920 150A01D8 */  bne   $t0, $t2, .L00414084
/* 00413924 00000000 */   nop   
/* 00413928 152B01D6 */  bne   $t1, $t3, .L00414084
/* 0041392C 00000000 */   nop   
/* 00413930 100001D4 */  b     .L00414084
/* 00413934 24120001 */   li    $s2, 1
.L00413938:
/* 00413938 96230010 */  lhu   $v1, 0x10($s1)
/* 0041393C 14410005 */  bne   $v0, $at, .L00413954
/* 00413940 96040020 */   lhu   $a0, 0x20($s0)
/* 00413944 146401CF */  bne   $v1, $a0, .L00414084
/* 00413948 00000000 */   nop   
/* 0041394C 100001CD */  b     .L00414084
/* 00413950 24120001 */   li    $s2, 1
.L00413954:
/* 00413954 146401CB */  bne   $v1, $a0, .L00414084
/* 00413958 00000000 */   nop   
/* 0041395C 100001C9 */  b     .L00414084
/* 00413960 24120001 */   li    $s2, 1
.L00413964:
/* 00413964 24010008 */  li    $at, 8
/* 00413968 144101C6 */  bne   $v0, $at, .L00414084
/* 0041396C 00000000 */   nop   
/* 00413970 922C0001 */  lbu   $t4, 1($s1)
/* 00413974 920D0001 */  lbu   $t5, 1($s0)
/* 00413978 158D01C2 */  bne   $t4, $t5, .L00414084
/* 0041397C 00000000 */   nop   
/* 00413980 8E0E0014 */  lw    $t6, 0x14($s0)
/* 00413984 11C001BF */  beqz  $t6, .L00414084
/* 00413988 00000000 */   nop   
/* 0041398C 962F0010 */  lhu   $t7, 0x10($s1)
/* 00413990 96180020 */  lhu   $t8, 0x20($s0)
/* 00413994 15F801BB */  bne   $t7, $t8, .L00414084
/* 00413998 00000000 */   nop   
/* 0041399C 100001B9 */  b     .L00414084
/* 004139A0 24120001 */   li    $s2, 1
.L004139A4:
/* 004139A4 24010001 */  li    $at, 1
/* 004139A8 144101B6 */  bne   $v0, $at, .L00414084
/* 004139AC 00000000 */   nop   
/* 004139B0 8E190014 */  lw    $t9, 0x14($s0)
/* 004139B4 132001B3 */  beqz  $t9, .L00414084
/* 004139B8 00000000 */   nop   
/* 004139BC 8E280010 */  lw    $t0, 0x10($s1)
/* 004139C0 8E090020 */  lw    $t1, 0x20($s0)
/* 004139C4 8FAA0040 */  lw    $t2, 0x40($sp)
/* 004139C8 150901AE */  bne   $t0, $t1, .L00414084
/* 004139CC 00000000 */   nop   
/* 004139D0 8D4B0024 */  lw    $t3, 0x24($t2)
/* 004139D4 8E0C0024 */  lw    $t4, 0x24($s0)
/* 004139D8 156C01AA */  bne   $t3, $t4, .L00414084
/* 004139DC 00000000 */   nop   
/* 004139E0 8E04002C */  lw    $a0, 0x2c($s0)
/* 004139E4 8E050030 */  lw    $a1, 0x30($s0)
/* 004139E8 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 004139EC AFA40000 */  sw    $a0, ($sp)
/* 004139F0 AFA50004 */  sw    $a1, 4($sp)
/* 004139F4 8D46002C */  lw    $a2, 0x2c($t2)
/* 004139F8 AFA60008 */  sw    $a2, 8($sp)
/* 004139FC 8D470030 */  lw    $a3, 0x30($t2)
/* 00413A00 0320F809 */  jalr  $t9
/* 00413A04 AFA7000C */   sw    $a3, 0xc($sp)
/* 00413A08 1040019E */  beqz  $v0, .L00414084
/* 00413A0C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00413A10 1000019C */  b     .L00414084
/* 00413A14 24120001 */   li    $s2, 1
.L00413A18:
/* 00413A18 24010005 */  li    $at, 5
/* 00413A1C 14410199 */  bne   $v0, $at, .L00414084
/* 00413A20 00000000 */   nop   
/* 00413A24 8E390010 */  lw    $t9, 0x10($s1)
/* 00413A28 8E080020 */  lw    $t0, 0x20($s0)
/* 00413A2C 8FA90040 */  lw    $t1, 0x40($sp)
/* 00413A30 17280194 */  bne   $t9, $t0, .L00414084
/* 00413A34 00000000 */   nop   
/* 00413A38 8D2B0024 */  lw    $t3, 0x24($t1)
/* 00413A3C 8E0C0024 */  lw    $t4, 0x24($s0)
/* 00413A40 156C0190 */  bne   $t3, $t4, .L00414084
/* 00413A44 00000000 */   nop   
/* 00413A48 8E04002C */  lw    $a0, 0x2c($s0)
/* 00413A4C 8E050030 */  lw    $a1, 0x30($s0)
/* 00413A50 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00413A54 AFA40000 */  sw    $a0, ($sp)
/* 00413A58 AFA50004 */  sw    $a1, 4($sp)
/* 00413A5C 8D26002C */  lw    $a2, 0x2c($t1)
/* 00413A60 AFA60008 */  sw    $a2, 8($sp)
/* 00413A64 8D270030 */  lw    $a3, 0x30($t1)
/* 00413A68 0320F809 */  jalr  $t9
/* 00413A6C AFA7000C */   sw    $a3, 0xc($sp)
/* 00413A70 10400184 */  beqz  $v0, .L00414084
/* 00413A74 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00413A78 10000182 */  b     .L00414084
/* 00413A7C 24120001 */   li    $s2, 1
.L00413A80:
/* 00413A80 24010003 */  li    $at, 3
/* 00413A84 1441017F */  bne   $v0, $at, .L00414084
/* 00413A88 00000000 */   nop   
/* 00413A8C 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00413A90 8E040028 */  lw    $a0, 0x28($s0)
/* 00413A94 8E05002C */  lw    $a1, 0x2c($s0)
/* 00413A98 8E260010 */  lw    $a2, 0x10($s1)
/* 00413A9C 8E270014 */  lw    $a3, 0x14($s1)
/* 00413AA0 AFA40000 */  sw    $a0, ($sp)
/* 00413AA4 AFA50004 */  sw    $a1, 4($sp)
/* 00413AA8 AFA60008 */  sw    $a2, 8($sp)
/* 00413AAC 0320F809 */  jalr  $t9
/* 00413AB0 AFA7000C */   sw    $a3, 0xc($sp)
/* 00413AB4 10400173 */  beqz  $v0, .L00414084
/* 00413AB8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00413ABC 10000171 */  b     .L00414084
/* 00413AC0 92120003 */   lbu   $s2, 3($s0)
.L00413AC4:
/* 00413AC4 24010006 */  li    $at, 6
/* 00413AC8 1441016E */  bne   $v0, $at, .L00414084
/* 00413ACC 00000000 */   nop   
/* 00413AD0 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00413AD4 8E040028 */  lw    $a0, 0x28($s0)
/* 00413AD8 8E05002C */  lw    $a1, 0x2c($s0)
/* 00413ADC 8E260010 */  lw    $a2, 0x10($s1)
/* 00413AE0 8E270014 */  lw    $a3, 0x14($s1)
/* 00413AE4 AFA40000 */  sw    $a0, ($sp)
/* 00413AE8 AFA50004 */  sw    $a1, 4($sp)
/* 00413AEC AFA60008 */  sw    $a2, 8($sp)
/* 00413AF0 0320F809 */  jalr  $t9
/* 00413AF4 AFA7000C */   sw    $a3, 0xc($sp)
/* 00413AF8 10400162 */  beqz  $v0, .L00414084
/* 00413AFC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00413B00 10000160 */  b     .L00414084
/* 00413B04 92120003 */   lbu   $s2, 3($s0)
.L00413B08:
/* 00413B08 24010004 */  li    $at, 4
/* 00413B0C 1441015D */  bne   $v0, $at, .L00414084
/* 00413B10 00000000 */   nop   
/* 00413B14 92230010 */  lbu   $v1, 0x10($s1)
/* 00413B18 920A0020 */  lbu   $t2, 0x20($s0)
/* 00413B1C 146A0159 */  bne   $v1, $t2, .L00414084
/* 00413B20 00000000 */   nop   
/* 00413B24 100000DB */  b     .L00413E94
/* 00413B28 306200FF */   andi  $v0, $v1, 0xff
.L00413B2C:
/* 00413B2C 922F0001 */  lbu   $t7, 1($s1)
/* 00413B30 92180001 */  lbu   $t8, 1($s0)
/* 00413B34 15F80153 */  bne   $t7, $t8, .L00414084
/* 00413B38 00000000 */   nop   
/* 00413B3C 8E020024 */  lw    $v0, 0x24($s0)
/* 00413B40 16620004 */  bne   $s3, $v0, .L00413B54
/* 00413B44 00000000 */   nop   
/* 00413B48 8E190028 */  lw    $t9, 0x28($s0)
/* 00413B4C 52990007 */  beql  $s4, $t9, .L00413B6C
/* 00413B50 922B0011 */   lbu   $t3, 0x11($s1)
.L00413B54:
/* 00413B54 1682014B */  bne   $s4, $v0, .L00414084
/* 00413B58 00000000 */   nop   
/* 00413B5C 8E080028 */  lw    $t0, 0x28($s0)
/* 00413B60 16680148 */  bne   $s3, $t0, .L00414084
/* 00413B64 00000000 */   nop   
/* 00413B68 922B0011 */  lbu   $t3, 0x11($s1)
.L00413B6C:
/* 00413B6C 920C003E */  lbu   $t4, 0x3e($s0)
/* 00413B70 156C0144 */  bne   $t3, $t4, .L00414084
/* 00413B74 00000000 */   nop   
/* 00413B78 10000142 */  b     .L00414084
/* 00413B7C 24120001 */   li    $s2, 1
.L00413B80:
/* 00413B80 922D0001 */  lbu   $t5, 1($s1)
.L00413B84:
/* 00413B84 920E0001 */  lbu   $t6, 1($s0)
/* 00413B88 15AE013E */  bne   $t5, $t6, .L00414084
/* 00413B8C 00000000 */   nop   
/* 00413B90 8E020024 */  lw    $v0, 0x24($s0)
/* 00413B94 16620004 */  bne   $s3, $v0, .L00413BA8
/* 00413B98 00000000 */   nop   
/* 00413B9C 8E090028 */  lw    $t1, 0x28($s0)
/* 00413BA0 12890006 */  beq   $s4, $t1, .L00413BBC
/* 00413BA4 00000000 */   nop   
.L00413BA8:
/* 00413BA8 16820136 */  bne   $s4, $v0, .L00414084
/* 00413BAC 00000000 */   nop   
/* 00413BB0 8E0A0028 */  lw    $t2, 0x28($s0)
/* 00413BB4 166A0133 */  bne   $s3, $t2, .L00414084
/* 00413BB8 00000000 */   nop   
.L00413BBC:
/* 00413BBC 10000131 */  b     .L00414084
/* 00413BC0 24120001 */   li    $s2, 1
.L00413BC4:
/* 00413BC4 922F0001 */  lbu   $t7, 1($s1)
.L00413BC8:
/* 00413BC8 92180001 */  lbu   $t8, 1($s0)
/* 00413BCC 15F8012D */  bne   $t7, $t8, .L00414084
/* 00413BD0 00000000 */   nop   
/* 00413BD4 8E190024 */  lw    $t9, 0x24($s0)
/* 00413BD8 1679012A */  bne   $s3, $t9, .L00414084
/* 00413BDC 00000000 */   nop   
/* 00413BE0 8E080028 */  lw    $t0, 0x28($s0)
/* 00413BE4 16880127 */  bne   $s4, $t0, .L00414084
/* 00413BE8 00000000 */   nop   
/* 00413BEC 922B0011 */  lbu   $t3, 0x11($s1)
/* 00413BF0 920C003E */  lbu   $t4, 0x3e($s0)
/* 00413BF4 156C0123 */  bne   $t3, $t4, .L00414084
/* 00413BF8 00000000 */   nop   
/* 00413BFC 10000121 */  b     .L00414084
/* 00413C00 24120001 */   li    $s2, 1
.L00413C04:
/* 00413C04 922D0001 */  lbu   $t5, 1($s1)
/* 00413C08 920E0001 */  lbu   $t6, 1($s0)
/* 00413C0C 15AE011D */  bne   $t5, $t6, .L00414084
/* 00413C10 00000000 */   nop   
/* 00413C14 8E090024 */  lw    $t1, 0x24($s0)
/* 00413C18 1669011A */  bne   $s3, $t1, .L00414084
/* 00413C1C 00000000 */   nop   
/* 00413C20 8E0A0028 */  lw    $t2, 0x28($s0)
/* 00413C24 168A0117 */  bne   $s4, $t2, .L00414084
/* 00413C28 00000000 */   nop   
/* 00413C2C 10000115 */  b     .L00414084
/* 00413C30 24120001 */   li    $s2, 1
.L00413C34:
/* 00413C34 922F0001 */  lbu   $t7, 1($s1)
/* 00413C38 92180001 */  lbu   $t8, 1($s0)
/* 00413C3C 15F80111 */  bne   $t7, $t8, .L00414084
/* 00413C40 00000000 */   nop   
/* 00413C44 8E190024 */  lw    $t9, 0x24($s0)
/* 00413C48 1679010E */  bne   $s3, $t9, .L00414084
/* 00413C4C 00000000 */   nop   
/* 00413C50 8E080028 */  lw    $t0, 0x28($s0)
/* 00413C54 1688010B */  bne   $s4, $t0, .L00414084
/* 00413C58 00000000 */   nop   
/* 00413C5C 962B0024 */  lhu   $t3, 0x24($s1)
/* 00413C60 960C003C */  lhu   $t4, 0x3c($s0)
/* 00413C64 156C0107 */  bne   $t3, $t4, .L00414084
/* 00413C68 00000000 */   nop   
/* 00413C6C 10000105 */  b     .L00414084
/* 00413C70 24120001 */   li    $s2, 1
.L00413C74:
/* 00413C74 922D0001 */  lbu   $t5, 1($s1)
/* 00413C78 920E0001 */  lbu   $t6, 1($s0)
/* 00413C7C 15AE0101 */  bne   $t5, $t6, .L00414084
/* 00413C80 00000000 */   nop   
/* 00413C84 8E090024 */  lw    $t1, 0x24($s0)
/* 00413C88 166900FE */  bne   $s3, $t1, .L00414084
/* 00413C8C 00000000 */   nop   
/* 00413C90 8E0A0028 */  lw    $t2, 0x28($s0)
/* 00413C94 168A00FB */  bne   $s4, $t2, .L00414084
/* 00413C98 00000000 */   nop   
/* 00413C9C 8E2F001C */  lw    $t7, 0x1c($s1)
/* 00413CA0 8E18002C */  lw    $t8, 0x2c($s0)
/* 00413CA4 15F800F7 */  bne   $t7, $t8, .L00414084
/* 00413CA8 00000000 */   nop   
/* 00413CAC 100000F5 */  b     .L00414084
/* 00413CB0 24120001 */   li    $s2, 1
.L00413CB4:
/* 00413CB4 92390001 */  lbu   $t9, 1($s1)
/* 00413CB8 92080001 */  lbu   $t0, 1($s0)
/* 00413CBC 172800F1 */  bne   $t9, $t0, .L00414084
/* 00413CC0 00000000 */   nop   
/* 00413CC4 8E0B0024 */  lw    $t3, 0x24($s0)
/* 00413CC8 166B00EE */  bne   $s3, $t3, .L00414084
/* 00413CCC 00000000 */   nop   
/* 00413CD0 922C0011 */  lbu   $t4, 0x11($s1)
/* 00413CD4 920D003E */  lbu   $t5, 0x3e($s0)
/* 00413CD8 158D00EA */  bne   $t4, $t5, .L00414084
/* 00413CDC 00000000 */   nop   
/* 00413CE0 100000E8 */  b     .L00414084
/* 00413CE4 24120001 */   li    $s2, 1
.L00413CE8:
/* 00413CE8 922E0001 */  lbu   $t6, 1($s1)
/* 00413CEC 92090001 */  lbu   $t1, 1($s0)
/* 00413CF0 15C900E4 */  bne   $t6, $t1, .L00414084
/* 00413CF4 00000000 */   nop   
/* 00413CF8 8E0A0024 */  lw    $t2, 0x24($s0)
/* 00413CFC 166A00E1 */  bne   $s3, $t2, .L00414084
/* 00413D00 00000000 */   nop   
/* 00413D04 8E2F001C */  lw    $t7, 0x1c($s1)
/* 00413D08 8E18002C */  lw    $t8, 0x2c($s0)
/* 00413D0C 15F800DD */  bne   $t7, $t8, .L00414084
/* 00413D10 00000000 */   nop   
/* 00413D14 92390011 */  lbu   $t9, 0x11($s1)
/* 00413D18 9208003E */  lbu   $t0, 0x3e($s0)
/* 00413D1C 172800D9 */  bne   $t9, $t0, .L00414084
/* 00413D20 00000000 */   nop   
/* 00413D24 100000D7 */  b     .L00414084
/* 00413D28 24120001 */   li    $s2, 1
.L00413D2C:
/* 00413D2C 922B0001 */  lbu   $t3, 1($s1)
/* 00413D30 920C0001 */  lbu   $t4, 1($s0)
/* 00413D34 156C00D3 */  bne   $t3, $t4, .L00414084
/* 00413D38 00000000 */   nop   
/* 00413D3C 922D0024 */  lbu   $t5, 0x24($s1)
/* 00413D40 920E0038 */  lbu   $t6, 0x38($s0)
/* 00413D44 15AE00CF */  bne   $t5, $t6, .L00414084
/* 00413D48 00000000 */   nop   
/* 00413D4C 8E090024 */  lw    $t1, 0x24($s0)
/* 00413D50 166900CC */  bne   $s3, $t1, .L00414084
/* 00413D54 00000000 */   nop   
/* 00413D58 922A0011 */  lbu   $t2, 0x11($s1)
/* 00413D5C 920F003E */  lbu   $t7, 0x3e($s0)
/* 00413D60 154F00C8 */  bne   $t2, $t7, .L00414084
/* 00413D64 00000000 */   nop   
/* 00413D68 100000C6 */  b     .L00414084
/* 00413D6C 24120001 */   li    $s2, 1
.L00413D70:
/* 00413D70 8E38001C */  lw    $t8, 0x1c($s1)
/* 00413D74 8E19002C */  lw    $t9, 0x2c($s0)
/* 00413D78 171900C2 */  bne   $t8, $t9, .L00414084
/* 00413D7C 00000000 */   nop   
/* 00413D80 96280024 */  lhu   $t0, 0x24($s1)
/* 00413D84 960B003C */  lhu   $t3, 0x3c($s0)
/* 00413D88 150B00BE */  bne   $t0, $t3, .L00414084
/* 00413D8C 00000000 */   nop   
/* 00413D90 8E0C0024 */  lw    $t4, 0x24($s0)
/* 00413D94 166C00BB */  bne   $s3, $t4, .L00414084
/* 00413D98 00000000 */   nop   
/* 00413D9C 100000B9 */  b     .L00414084
/* 00413DA0 24120001 */   li    $s2, 1
.L00413DA4:
/* 00413DA4 8E0D0024 */  lw    $t5, 0x24($s0)
/* 00413DA8 166D00B6 */  bne   $s3, $t5, .L00414084
/* 00413DAC 00000000 */   nop   
/* 00413DB0 100000B4 */  b     .L00414084
/* 00413DB4 24120001 */   li    $s2, 1
.L00413DB8:
/* 00413DB8 922E0001 */  lbu   $t6, 1($s1)
.L00413DBC:
/* 00413DBC 92090001 */  lbu   $t1, 1($s0)
/* 00413DC0 15C900B0 */  bne   $t6, $t1, .L00414084
/* 00413DC4 00000000 */   nop   
/* 00413DC8 8E0A0024 */  lw    $t2, 0x24($s0)
/* 00413DCC 166A00AD */  bne   $s3, $t2, .L00414084
/* 00413DD0 00000000 */   nop   
/* 00413DD4 8E2F001C */  lw    $t7, 0x1c($s1)
/* 00413DD8 8E18002C */  lw    $t8, 0x2c($s0)
/* 00413DDC 15F800A9 */  bne   $t7, $t8, .L00414084
/* 00413DE0 00000000 */   nop   
/* 00413DE4 96390024 */  lhu   $t9, 0x24($s1)
/* 00413DE8 9608003C */  lhu   $t0, 0x3c($s0)
/* 00413DEC 172800A5 */  bne   $t9, $t0, .L00414084
/* 00413DF0 00000000 */   nop   
/* 00413DF4 100000A3 */  b     .L00414084
/* 00413DF8 92120003 */   lbu   $s2, 3($s0)
.L00413DFC:
/* 00413DFC 8E02001C */  lw    $v0, 0x1c($s0)
.L00413E00:
/* 00413E00 104000A0 */  beqz  $v0, .L00414084
/* 00413E04 00000000 */   nop   
/* 00413E08 00408025 */  move  $s0, $v0
.L00413E0C:
/* 00413E0C 8C42001C */  lw    $v0, 0x1c($v0)
/* 00413E10 5440FFFE */  bnezl $v0, .L00413E0C
/* 00413E14 00408025 */   move  $s0, $v0
/* 00413E18 1000009A */  b     .L00414084
/* 00413E1C 00000000 */   nop   
.L00413E20:
/* 00413E20 8E020024 */  lw    $v0, 0x24($s0)
/* 00413E24 16620004 */  bne   $s3, $v0, .L00413E38
/* 00413E28 00000000 */   nop   
/* 00413E2C 8E0B0028 */  lw    $t3, 0x28($s0)
/* 00413E30 528B0007 */  beql  $s4, $t3, .L00413E50
/* 00413E34 8E2D001C */   lw    $t5, 0x1c($s1)
.L00413E38:
/* 00413E38 16820092 */  bne   $s4, $v0, .L00414084
/* 00413E3C 00000000 */   nop   
/* 00413E40 8E0C0028 */  lw    $t4, 0x28($s0)
/* 00413E44 166C008F */  bne   $s3, $t4, .L00414084
/* 00413E48 00000000 */   nop   
/* 00413E4C 8E2D001C */  lw    $t5, 0x1c($s1)
.L00413E50:
/* 00413E50 8E0E002C */  lw    $t6, 0x2c($s0)
/* 00413E54 15AE008B */  bne   $t5, $t6, .L00414084
/* 00413E58 00000000 */   nop   
/* 00413E5C 10000089 */  b     .L00414084
/* 00413E60 92120003 */   lbu   $s2, 3($s0)
.L00413E64:
/* 00413E64 8E090024 */  lw    $t1, 0x24($s0)
/* 00413E68 16690086 */  bne   $s3, $t1, .L00414084
/* 00413E6C 00000000 */   nop   
/* 00413E70 8E0A0028 */  lw    $t2, 0x28($s0)
/* 00413E74 168A0083 */  bne   $s4, $t2, .L00414084
/* 00413E78 00000000 */   nop   
/* 00413E7C 8E2F001C */  lw    $t7, 0x1c($s1)
/* 00413E80 8E18002C */  lw    $t8, 0x2c($s0)
/* 00413E84 15F8007F */  bne   $t7, $t8, .L00414084
/* 00413E88 00000000 */   nop   
/* 00413E8C 1000007D */  b     .L00414084
/* 00413E90 92120003 */   lbu   $s2, 3($s0)
.L00413E94:
/* 00413E94 2C410063 */  sltiu $at, $v0, 0x63
/* 00413E98 14200027 */  bnez  $at, .L00413F38
/* 00413E9C 2C41007E */   sltiu $at, $v0, 0x7e
/* 00413EA0 14200016 */  bnez  $at, .L00413EFC
/* 00413EA4 2448FF92 */   addiu $t0, $v0, -0x6e
/* 00413EA8 2C410094 */  sltiu $at, $v0, 0x94
/* 00413EAC 14200005 */  bnez  $at, .L00413EC4
/* 00413EB0 2401009A */   li    $at, 154
/* 00413EB4 5041FFD2 */  beql  $v0, $at, .L00413E00
/* 00413EB8 8E02001C */   lw    $v0, 0x1c($s0)
/* 00413EBC 1000004C */  b     .L00413FF0
/* 00413EC0 00000000 */   nop   
.L00413EC4:
/* 00413EC4 2C41008E */  sltiu $at, $v0, 0x8e
/* 00413EC8 50200062 */  beql  $at, $zero, .L00414054
/* 00413ECC 24010093 */   li    $at, 147
/* 00413ED0 2459FF7A */  addiu $t9, $v0, -0x86
/* 00413ED4 2F210008 */  sltiu $at, $t9, 8
/* 00413ED8 10200045 */  beqz  $at, .L00413FF0
/* 00413EDC 00000000 */   nop   
/* 00413EE0 8F818044 */  lw    $at, %got(jtbl_1000A46C)($gp)
/* 00413EE4 0019C880 */  sll   $t9, $t9, 2
/* 00413EE8 00390821 */  addu  $at, $at, $t9
/* 00413EEC 8C39A46C */  lw    $t9, %lo(jtbl_1000A46C)($at)
/* 00413EF0 033CC821 */  addu  $t9, $t9, $gp
/* 00413EF4 03200008 */  jr    $t9
/* 00413EF8 00000000 */   nop   
.L00413EFC:
/* 00413EFC 24010069 */  li    $at, 105
/* 00413F00 5041FF31 */  beql  $v0, $at, .L00413BC8
/* 00413F04 922F0001 */   lbu   $t7, 1($s1)
/* 00413F08 2C410078 */  sltiu $at, $v0, 0x78
/* 00413F0C 1020004B */  beqz  $at, .L0041403C
/* 00413F10 2D01000A */   sltiu $at, $t0, 0xa
/* 00413F14 10200036 */  beqz  $at, .L00413FF0
/* 00413F18 00000000 */   nop   
/* 00413F1C 8F818044 */  lw    $at, %got(jtbl_1000A444)($gp)
/* 00413F20 00084080 */  sll   $t0, $t0, 2
/* 00413F24 00280821 */  addu  $at, $at, $t0
/* 00413F28 8C28A444 */  lw    $t0, %lo(jtbl_1000A444)($at)
/* 00413F2C 011C4021 */  addu  $t0, $t0, $gp
/* 00413F30 01000008 */  jr    $t0
/* 00413F34 00000000 */   nop   
.L00413F38:
/* 00413F38 2C410024 */  sltiu $at, $v0, 0x24
/* 00413F3C 14200010 */  bnez  $at, .L00413F80
/* 00413F40 2C41003D */   sltiu $at, $v0, 0x3d
/* 00413F44 14200033 */  bnez  $at, .L00414014
/* 00413F48 244EFFD8 */   addiu $t6, $v0, -0x28
/* 00413F4C 24010041 */  li    $at, 65
/* 00413F50 1041FF48 */  beq   $v0, $at, .L00413C74
/* 00413F54 244BFFB3 */   addiu $t3, $v0, -0x4d
/* 00413F58 2D610016 */  sltiu $at, $t3, 0x16
/* 00413F5C 10200024 */  beqz  $at, .L00413FF0
/* 00413F60 00000000 */   nop   
/* 00413F64 8F818044 */  lw    $at, %got(jtbl_1000A3EC)($gp)
/* 00413F68 000B5880 */  sll   $t3, $t3, 2
/* 00413F6C 002B0821 */  addu  $at, $at, $t3
/* 00413F70 8C2BA3EC */  lw    $t3, %lo(jtbl_1000A3EC)($at)
/* 00413F74 017C5821 */  addu  $t3, $t3, $gp
/* 00413F78 01600008 */  jr    $t3
/* 00413F7C 00000000 */   nop   
.L00413F80:
/* 00413F80 2C41000F */  sltiu $at, $v0, 0xf
/* 00413F84 1420000D */  bnez  $at, .L00413FBC
/* 00413F88 244CFFE8 */   addiu $t4, $v0, -0x18
/* 00413F8C 2C41001E */  sltiu $at, $v0, 0x1e
/* 00413F90 10200014 */  beqz  $at, .L00413FE4
/* 00413F94 2D810006 */   sltiu $at, $t4, 6
/* 00413F98 10200015 */  beqz  $at, .L00413FF0
/* 00413F9C 00000000 */   nop   
/* 00413FA0 8F818044 */  lw    $at, %got(jtbl_1000A380)($gp)
/* 00413FA4 000C6080 */  sll   $t4, $t4, 2
/* 00413FA8 002C0821 */  addu  $at, $at, $t4
/* 00413FAC 8C2CA380 */  lw    $t4, %lo(jtbl_1000A380)($at)
/* 00413FB0 019C6021 */  addu  $t4, $t4, $gp
/* 00413FB4 01800008 */  jr    $t4
/* 00413FB8 00000000 */   nop   
.L00413FBC:
/* 00413FBC 2C41000F */  sltiu $at, $v0, 0xf
/* 00413FC0 1020000B */  beqz  $at, .L00413FF0
/* 00413FC4 00000000 */   nop   
/* 00413FC8 8F818044 */  lw    $at, %got(jtbl_1000A344)($gp)
/* 00413FCC 00026880 */  sll   $t5, $v0, 2
/* 00413FD0 002D0821 */  addu  $at, $at, $t5
/* 00413FD4 8C2DA344 */  lw    $t5, %lo(jtbl_1000A344)($at)
/* 00413FD8 01BC6821 */  addu  $t5, $t5, $gp
/* 00413FDC 01A00008 */  jr    $t5
/* 00413FE0 00000000 */   nop   
.L00413FE4:
/* 00413FE4 24010023 */  li    $at, 35
/* 00413FE8 5041FEE6 */  beql  $v0, $at, .L00413B84
/* 00413FEC 922D0001 */   lbu   $t5, 1($s1)
.L00413FF0:
/* 00413FF0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00413FF4 8F868044 */  lw    $a2, %got(RO_1000A33A)($gp)
/* 00413FF8 24040001 */  li    $a0, 1
/* 00413FFC 24050236 */  li    $a1, 566
/* 00414000 2407000A */  li    $a3, 10
/* 00414004 0320F809 */  jalr  $t9
/* 00414008 24C6A33A */   addiu $a2, %lo(RO_1000A33A) # addiu $a2, $a2, -0x5cc6
/* 0041400C 1000001D */  b     .L00414084
/* 00414010 8FBC0028 */   lw    $gp, 0x28($sp)
.L00414014:
/* 00414014 2DC10015 */  sltiu $at, $t6, 0x15
/* 00414018 1020FFF5 */  beqz  $at, .L00413FF0
/* 0041401C 00000000 */   nop   
/* 00414020 8F818044 */  lw    $at, %got(jtbl_1000A398)($gp)
/* 00414024 000E7080 */  sll   $t6, $t6, 2
/* 00414028 002E0821 */  addu  $at, $at, $t6
/* 0041402C 8C2EA398 */  lw    $t6, %lo(jtbl_1000A398)($at)
/* 00414030 01DC7021 */  addu  $t6, $t6, $gp
/* 00414034 01C00008 */  jr    $t6
/* 00414038 00000000 */   nop   
.L0041403C:
/* 0041403C 2401007D */  li    $at, 125
/* 00414040 5041FEE1 */  beql  $v0, $at, .L00413BC8
/* 00414044 922F0001 */   lbu   $t7, 1($s1)
/* 00414048 1000FFE9 */  b     .L00413FF0
/* 0041404C 00000000 */   nop   
/* 00414050 24010093 */  li    $at, 147
.L00414054:
/* 00414054 5041FF59 */  beql  $v0, $at, .L00413DBC
/* 00414058 922E0001 */   lbu   $t6, 1($s1)
/* 0041405C 1000FFE4 */  b     .L00413FF0
/* 00414060 00000000 */   nop   
.L00414064:
/* 00414064 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00414068 8F868044 */  lw    $a2, %got(RO_1000A330)($gp)
/* 0041406C 24040001 */  li    $a0, 1
/* 00414070 2405020F */  li    $a1, 527
/* 00414074 2407000A */  li    $a3, 10
/* 00414078 0320F809 */  jalr  $t9
/* 0041407C 24C6A330 */   addiu $a2, %lo(RO_1000A330) # addiu $a2, $a2, -0x5cd0
/* 00414080 8FBC0028 */  lw    $gp, 0x28($sp)
.L00414084:
/* 00414084 16400002 */  bnez  $s2, .L00414090
/* 00414088 00000000 */   nop   
/* 0041408C 8E10001C */  lw    $s0, 0x1c($s0)
.L00414090:
/* 00414090 16400003 */  bnez  $s2, .L004140A0
/* 00414094 00000000 */   nop   
/* 00414098 5600FDE9 */  bnezl $s0, .L00413840
/* 0041409C 92020000 */   lbu   $v0, ($s0)
.L004140A0:
/* 004140A0 56400011 */  bnezl $s2, .L004140E8
/* 004140A4 02001025 */   move  $v0, $s0
/* 004140A8 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 004140AC 97A4003A */  lhu   $a0, 0x3a($sp)
/* 004140B0 0320F809 */  jalr  $t9
/* 004140B4 00000000 */   nop   
/* 004140B8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004140BC 00408025 */  move  $s0, $v0
/* 004140C0 8FAA0034 */  lw    $t2, 0x34($sp)
/* 004140C4 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 004140C8 91290000 */  lbu   $t1, ($t1)
/* 004140CC 51200004 */  beql  $t1, $zero, .L004140E0
/* 004140D0 8D4FFFFC */   lw    $t7, -4($t2)
/* 004140D4 10000004 */  b     .L004140E8
/* 004140D8 8FA20030 */   lw    $v0, 0x30($sp)
/* 004140DC 8D4FFFFC */  lw    $t7, -4($t2)
.L004140E0:
/* 004140E0 AC4F0010 */  sw    $t7, 0x10($v0)
/* 004140E4 02001025 */  move  $v0, $s0
.L004140E8:
/* 004140E8 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004140EC 8FB00014 */  lw    $s0, 0x14($sp)
/* 004140F0 8FB10018 */  lw    $s1, 0x18($sp)
/* 004140F4 8FB2001C */  lw    $s2, 0x1c($sp)
/* 004140F8 8FB30020 */  lw    $s3, 0x20($sp)
/* 004140FC 8FB40024 */  lw    $s4, 0x24($sp)
/* 00414100 03E00008 */  jr    $ra
/* 00414104 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_00414108, @function
func_00414108:
    # 00414108 func_00414108
    # 0041550C func_0041550C
/* 00414108 3C1C0FC0 */  .cpload $t9
/* 0041410C 279C6188 */  
/* 00414110 0399E021 */  
/* 00414114 27BDFF78 */  addiu $sp, $sp, -0x88
/* 00414118 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041411C AFBC0028 */  sw    $gp, 0x28($sp)
/* 00414120 AFB20024 */  sw    $s2, 0x24($sp)
/* 00414124 AFB10020 */  sw    $s1, 0x20($sp)
/* 00414128 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041412C AFA60090 */  sw    $a2, 0x90($sp)
/* 00414130 AFA20084 */  sw    $v0, 0x84($sp)
/* 00414134 90AE0000 */  lbu   $t6, ($a1)
/* 00414138 3C011200 */  lui   $at, 0x1200
/* 0041413C 00A08025 */  move  $s0, $a1
/* 00414140 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00414144 000FC023 */  negu  $t8, $t7
/* 00414148 0301C824 */  and   $t9, $t8, $at
/* 0041414C 01D95004 */  sllv  $t2, $t9, $t6
/* 00414150 00808825 */  move  $s1, $a0
/* 00414154 05410016 */  bgez  $t2, .L004141B0
/* 00414158 00E09025 */   move  $s2, $a3
/* 0041415C 8CA20030 */  lw    $v0, 0x30($a1)
/* 00414160 50400014 */  beql  $v0, $zero, .L004141B4
/* 00414164 92230000 */   lbu   $v1, ($s1)
/* 00414168 8CAB0014 */  lw    $t3, 0x14($a1)
/* 0041416C 508B0011 */  beql  $a0, $t3, .L004141B4
/* 00414170 92230000 */   lbu   $v1, ($s1)
/* 00414174 904C0000 */  lbu   $t4, ($v0)
.L00414178:
/* 00414178 3C011200 */  lui   $at, 0x1200
/* 0041417C 00408025 */  move  $s0, $v0
/* 00414180 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 00414184 000D7823 */  negu  $t7, $t5
/* 00414188 01E1C024 */  and   $t8, $t7, $at
/* 0041418C 0198C804 */  sllv  $t9, $t8, $t4
/* 00414190 07230008 */  bgezl $t9, .L004141B4
/* 00414194 92230000 */   lbu   $v1, ($s1)
/* 00414198 8C420030 */  lw    $v0, 0x30($v0)
/* 0041419C 50400005 */  beql  $v0, $zero, .L004141B4
/* 004141A0 92230000 */   lbu   $v1, ($s1)
/* 004141A4 8E0E0014 */  lw    $t6, 0x14($s0)
/* 004141A8 562EFFF3 */  bnel  $s1, $t6, .L00414178
/* 004141AC 904C0000 */   lbu   $t4, ($v0)
.L004141B0:
/* 004141B0 92230000 */  lbu   $v1, ($s1)
.L004141B4:
/* 004141B4 246AFFFF */  addiu $t2, $v1, -1
/* 004141B8 2D410008 */  sltiu $at, $t2, 8
/* 004141BC 102003BB */  beqz  $at, .L004150AC
/* 004141C0 00000000 */   nop   
/* 004141C4 8F818044 */  lw    $at, %got(jtbl_1000A624)($gp)
/* 004141C8 000A5080 */  sll   $t2, $t2, 2
/* 004141CC 002A0821 */  addu  $at, $at, $t2
/* 004141D0 8C2AA624 */  lw    $t2, %lo(jtbl_1000A624)($at)
/* 004141D4 015C5021 */  addu  $t2, $t2, $gp
/* 004141D8 01400008 */  jr    $t2
/* 004141DC 00000000 */   nop   
.L004141E0:
/* 004141E0 24010005 */  li    $at, 5
/* 004141E4 14610009 */  bne   $v1, $at, .L0041420C
/* 004141E8 8FA60090 */   lw    $a2, 0x90($sp)
/* 004141EC 8F998018 */  lw    $t9, %got(func_00414108)($gp)
/* 004141F0 8E240020 */  lw    $a0, 0x20($s1)
/* 004141F4 8E050034 */  lw    $a1, 0x34($s0)
/* 004141F8 27394108 */  addiu $t9, %lo(func_00414108) # addiu $t9, $t9, 0x4108
/* 004141FC 27A7007C */  addiu $a3, $sp, 0x7c
/* 00414200 0320F809 */  jalr  $t9
/* 00414204 8FA20084 */   lw    $v0, 0x84($sp)
/* 00414208 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041420C:
/* 0041420C 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 00414210 8E240018 */  lw    $a0, 0x18($s1)
/* 00414214 8E25001C */  lw    $a1, 0x1c($s1)
/* 00414218 AFA40000 */  sw    $a0, ($sp)
/* 0041421C 0320F809 */  jalr  $t9
/* 00414220 AFA50004 */   sw    $a1, 4($sp)
/* 00414224 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414228 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0041422C 8FA20084 */  lw    $v0, 0x84($sp)
/* 00414230 8F998018 */  lw    $t9, %got(func_004137DC)($gp)
/* 00414234 02202825 */  move  $a1, $s1
/* 00414238 02003025 */  move  $a2, $s0
/* 0041423C 273937DC */  addiu $t9, %lo(func_004137DC) # addiu $t9, $t9, 0x37dc
/* 00414240 00003825 */  move  $a3, $zero
/* 00414244 0320F809 */  jalr  $t9
/* 00414248 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041424C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414250 14400005 */  bnez  $v0, .L00414268
/* 00414254 AE420000 */   sw    $v0, ($s2)
/* 00414258 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 0041425C 24100001 */  li    $s0, 1
/* 00414260 1000039A */  b     .L004150CC
/* 00414264 A0300000 */   sb    $s0, ($at)
.L00414268:
/* 00414268 8E460000 */  lw    $a2, ($s2)
/* 0041426C 90CF0000 */  lbu   $t7, ($a2)
/* 00414270 55E0003A */  bnezl $t7, .L0041435C
/* 00414274 922E0000 */   lbu   $t6, ($s1)
/* 00414278 92380000 */  lbu   $t8, ($s1)
/* 0041427C 24010005 */  li    $at, 5
/* 00414280 A0D80000 */  sb    $t8, ($a2)
/* 00414284 8E4C0000 */  lw    $t4, ($s2)
/* 00414288 A1800001 */  sb    $zero, 1($t4)
/* 0041428C 8E4E0000 */  lw    $t6, ($s2)
/* 00414290 8E390010 */  lw    $t9, 0x10($s1)
/* 00414294 ADD90020 */  sw    $t9, 0x20($t6)
/* 00414298 8E4B0000 */  lw    $t3, ($s2)
/* 0041429C 8E0A0024 */  lw    $t2, 0x24($s0)
/* 004142A0 AD6A0024 */  sw    $t2, 0x24($t3)
/* 004142A4 8E4D0000 */  lw    $t5, ($s2)
/* 004142A8 8E18002C */  lw    $t8, 0x2c($s0)
/* 004142AC ADB8002C */  sw    $t8, 0x2c($t5)
/* 004142B0 8E0F0030 */  lw    $t7, 0x30($s0)
/* 004142B4 ADAF0030 */  sw    $t7, 0x30($t5)
/* 004142B8 8E4C0000 */  lw    $t4, ($s2)
/* 004142BC AD910014 */  sw    $s1, 0x14($t4)
/* 004142C0 8E590000 */  lw    $t9, ($s2)
/* 004142C4 AF200018 */  sw    $zero, 0x18($t9)
/* 004142C8 922E0000 */  lbu   $t6, ($s1)
/* 004142CC 8FAA007C */  lw    $t2, 0x7c($sp)
/* 004142D0 55C10022 */  bnel  $t6, $at, .L0041435C
/* 004142D4 922E0000 */   lbu   $t6, ($s1)
/* 004142D8 8E4B0000 */  lw    $t3, ($s2)
/* 004142DC AD6A0034 */  sw    $t2, 0x34($t3)
/* 004142E0 8E4D0000 */  lw    $t5, ($s2)
/* 004142E4 A5A00006 */  sh    $zero, 6($t5)
/* 004142E8 8E4F0000 */  lw    $t7, ($s2)
/* 004142EC ADE00038 */  sw    $zero, 0x38($t7)
/* 004142F0 8E580000 */  lw    $t8, ($s2)
/* 004142F4 A3000005 */  sb    $zero, 5($t8)
/* 004142F8 8E4C0000 */  lw    $t4, ($s2)
/* 004142FC A1800004 */  sb    $zero, 4($t4)
/* 00414300 8FB90084 */  lw    $t9, 0x84($sp)
/* 00414304 96250002 */  lhu   $a1, 2($s1)
/* 00414308 8F22FFFC */  lw    $v0, -4($t9)
/* 0041430C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00414310 24440104 */  addiu $a0, $v0, 0x104
/* 00414314 0320F809 */  jalr  $t9
/* 00414318 AFA20034 */   sw    $v0, 0x34($sp)
/* 0041431C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414320 8FA40034 */  lw    $a0, 0x34($sp)
/* 00414324 96250002 */  lhu   $a1, 2($s1)
/* 00414328 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041432C 24840114 */  addiu $a0, $a0, 0x114
/* 00414330 0320F809 */  jalr  $t9
/* 00414334 00000000 */   nop   
/* 00414338 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041433C 8FA40034 */  lw    $a0, 0x34($sp)
/* 00414340 96250002 */  lhu   $a1, 2($s1)
/* 00414344 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00414348 2484012C */  addiu $a0, $a0, 0x12c
/* 0041434C 0320F809 */  jalr  $t9
/* 00414350 00000000 */   nop   
/* 00414354 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414358 922E0000 */  lbu   $t6, ($s1)
.L0041435C:
/* 0041435C 24010005 */  li    $at, 5
/* 00414360 55C1035B */  bnel  $t6, $at, .L004150D0
/* 00414364 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00414368 8F998018 */  lw    $t9, %got(func_00413684)($gp)
/* 0041436C 8E440000 */  lw    $a0, ($s2)
/* 00414370 8FA20084 */  lw    $v0, 0x84($sp)
/* 00414374 27393684 */  addiu $t9, %lo(func_00413684) # addiu $t9, $t9, 0x3684
/* 00414378 0320F809 */  jalr  $t9
/* 0041437C 00000000 */   nop   
/* 00414380 10000352 */  b     .L004150CC
/* 00414384 8FBC0028 */   lw    $gp, 0x28($sp)
.L00414388:
/* 00414388 92220001 */  lbu   $v0, 1($s1)
/* 0041438C 3C01BAA0 */  lui   $at, 0xbaa0
/* 00414390 2C4A0020 */  sltiu $t2, $v0, 0x20
/* 00414394 000A5823 */  negu  $t3, $t2
/* 00414398 01616824 */  and   $t5, $t3, $at
/* 0041439C 004D7804 */  sllv  $t7, $t5, $v0
/* 004143A0 05E10008 */  bgez  $t7, .L004143C4
/* 004143A4 2C580020 */   sltiu $t8, $v0, 0x20
/* 004143A8 8F998644 */  lw    $t9, %call16(isconsthash)($gp)
/* 004143AC 8E240010 */  lw    $a0, 0x10($s1)
/* 004143B0 0320F809 */  jalr  $t9
/* 004143B4 00000000 */   nop   
/* 004143B8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004143BC 10000055 */  b     .L00414514
/* 004143C0 3044FFFF */   andi  $a0, $v0, 0xffff
.L004143C4:
/* 004143C4 00186023 */  negu  $t4, $t8
/* 004143C8 3C010500 */  lui   $at, 0x500
/* 004143CC 0181C824 */  and   $t9, $t4, $at
/* 004143D0 00597004 */  sllv  $t6, $t9, $v0
/* 004143D4 05C30009 */  bgezl $t6, .L004143FC
/* 004143D8 96220010 */   lhu   $v0, 0x10($s1)
/* 004143DC 8F998644 */  lw    $t9, %call16(isconsthash)($gp)
/* 004143E0 8E240014 */  lw    $a0, 0x14($s1)
/* 004143E4 0320F809 */  jalr  $t9
/* 004143E8 00000000 */   nop   
/* 004143EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004143F0 10000048 */  b     .L00414514
/* 004143F4 3044FFFF */   andi  $a0, $v0, 0xffff
/* 004143F8 96220010 */  lhu   $v0, 0x10($s1)
.L004143FC:
/* 004143FC 8F858988 */  lw     $a1, %got(realstore)($gp)
/* 00414400 04410003 */  bgez  $v0, .L00414410
/* 00414404 00021A03 */   sra   $v1, $v0, 8
/* 00414408 244100FF */  addiu $at, $v0, 0xff
/* 0041440C 00011A03 */  sra   $v1, $at, 8
.L00414410:
/* 00414410 304900FF */  andi  $t1, $v0, 0xff
/* 00414414 18600012 */  blez  $v1, .L00414460
/* 00414418 8CA50000 */   lw    $a1, ($a1)
/* 0041441C 24670001 */  addiu $a3, $v1, 1
/* 00414420 24E8FFFF */  addiu $t0, $a3, -1
/* 00414424 31080003 */  andi  $t0, $t0, 3
/* 00414428 11000007 */  beqz  $t0, .L00414448
/* 0041442C 24040001 */   li    $a0, 1
/* 00414430 25020001 */  addiu $v0, $t0, 1
.L00414434:
/* 00414434 24840001 */  addiu $a0, $a0, 1
/* 00414438 1444FFFE */  bne   $v0, $a0, .L00414434
/* 0041443C 8CA50100 */   lw    $a1, 0x100($a1)
/* 00414440 50870008 */  beql  $a0, $a3, .L00414464
/* 00414444 96240012 */   lhu   $a0, 0x12($s1)
.L00414448:
/* 00414448 8CA50100 */  lw    $a1, 0x100($a1)
/* 0041444C 24840004 */  addiu $a0, $a0, 4
/* 00414450 8CA50100 */  lw    $a1, 0x100($a1)
/* 00414454 8CA50100 */  lw    $a1, 0x100($a1)
/* 00414458 1487FFFB */  bne   $a0, $a3, .L00414448
/* 0041445C 8CA50100 */   lw    $a1, 0x100($a1)
.L00414460:
/* 00414460 96240012 */  lhu   $a0, 0x12($s1)
.L00414464:
/* 00414464 18800026 */  blez  $a0, .L00414500
/* 00414468 00803825 */   move  $a3, $a0
/* 0041446C 24E70001 */  addiu $a3, $a3, 1
/* 00414470 24E8FFFF */  addiu $t0, $a3, -1
/* 00414474 31080003 */  andi  $t0, $t0, 3
/* 00414478 1100000F */  beqz  $t0, .L004144B8
/* 0041447C 24040001 */   li    $a0, 1
/* 00414480 8F8A8950 */  lw     $t2, %got(ustrptr)($gp)
/* 00414484 00A95821 */  addu  $t3, $a1, $t1
/* 00414488 01641821 */  addu  $v1, $t3, $a0
/* 0041448C 8D4A0000 */  lw    $t2, ($t2)
/* 00414490 25060001 */  addiu $a2, $t0, 1
/* 00414494 01441021 */  addu  $v0, $t2, $a0
.L00414498:
/* 00414498 906DFFFF */  lbu   $t5, -1($v1)
/* 0041449C 24840001 */  addiu $a0, $a0, 1
/* 004144A0 24420001 */  addiu $v0, $v0, 1
/* 004144A4 24630001 */  addiu $v1, $v1, 1
/* 004144A8 14C4FFFB */  bne   $a2, $a0, .L00414498
/* 004144AC A04DFFFE */   sb    $t5, -2($v0)
/* 004144B0 50870013 */  beql  $a0, $a3, .L00414500
/* 004144B4 96240012 */   lhu   $a0, 0x12($s1)
.L004144B8:
/* 004144B8 8F8F8950 */  lw     $t7, %got(ustrptr)($gp)
/* 004144BC 00A9C021 */  addu  $t8, $a1, $t1
/* 004144C0 03041821 */  addu  $v1, $t8, $a0
/* 004144C4 8DEF0000 */  lw    $t7, ($t7)
/* 004144C8 01E41021 */  addu  $v0, $t7, $a0
.L004144CC:
/* 004144CC 906CFFFF */  lbu   $t4, -1($v1)
/* 004144D0 24840004 */  addiu $a0, $a0, 4
/* 004144D4 24420004 */  addiu $v0, $v0, 4
/* 004144D8 A04CFFFB */  sb    $t4, -5($v0)
/* 004144DC 90790000 */  lbu   $t9, ($v1)
/* 004144E0 24630004 */  addiu $v1, $v1, 4
/* 004144E4 A059FFFC */  sb    $t9, -4($v0)
/* 004144E8 906EFFFD */  lbu   $t6, -3($v1)
/* 004144EC A04EFFFD */  sb    $t6, -3($v0)
/* 004144F0 906AFFFE */  lbu   $t2, -2($v1)
/* 004144F4 1487FFF5 */  bne   $a0, $a3, .L004144CC
/* 004144F8 A04AFFFE */   sb    $t2, -2($v0)
/* 004144FC 96240012 */  lhu   $a0, 0x12($s1)
.L00414500:
/* 00414500 8F998648 */  lw    $t9, %call16(realhash)($gp)
/* 00414504 0320F809 */  jalr  $t9
/* 00414508 00000000 */   nop   
/* 0041450C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414510 3044FFFF */  andi  $a0, $v0, 0xffff
.L00414514:
/* 00414514 8F998018 */  lw    $t9, %got(func_004137DC)($gp)
/* 00414518 02202825 */  move  $a1, $s1
/* 0041451C 02003025 */  move  $a2, $s0
/* 00414520 273937DC */  addiu $t9, %lo(func_004137DC) # addiu $t9, $t9, 0x37dc
/* 00414524 00003825 */  move  $a3, $zero
/* 00414528 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041452C 0320F809 */  jalr  $t9
/* 00414530 8FA20084 */   lw    $v0, 0x84($sp)
/* 00414534 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414538 14400005 */  bnez  $v0, .L00414550
/* 0041453C AE420000 */   sw    $v0, ($s2)
/* 00414540 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00414544 24100001 */  li    $s0, 1
/* 00414548 100002E0 */  b     .L004150CC
/* 0041454C A0300000 */   sb    $s0, ($at)
.L00414550:
/* 00414550 8E460000 */  lw    $a2, ($s2)
/* 00414554 240D0002 */  li    $t5, 2
/* 00414558 90CB0000 */  lbu   $t3, ($a2)
/* 0041455C 556002DC */  bnezl $t3, .L004150D0
/* 00414560 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00414564 A0CD0000 */  sb    $t5, ($a2)
/* 00414568 922F0001 */  lbu   $t7, 1($s1)
/* 0041456C 8E580000 */  lw    $t8, ($s2)
/* 00414570 3C01000C */  lui   $at, 0xc
/* 00414574 A30F0001 */  sb    $t7, 1($t8)
/* 00414578 8E2E0010 */  lw    $t6, 0x10($s1)
/* 0041457C 8E4C0000 */  lw    $t4, ($s2)
/* 00414580 AD8E0020 */  sw    $t6, 0x20($t4)
/* 00414584 8E390014 */  lw    $t9, 0x14($s1)
/* 00414588 AD990024 */  sw    $t9, 0x24($t4)
/* 0041458C 922A0001 */  lbu   $t2, 1($s1)
/* 00414590 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 00414594 000B6823 */  negu  $t5, $t3
/* 00414598 01A17824 */  and   $t7, $t5, $at
/* 0041459C 014FC004 */  sllv  $t8, $t7, $t2
/* 004145A0 0703000A */  bgezl $t8, .L004145CC
/* 004145A4 8E390018 */   lw    $t9, 0x18($s1)
/* 004145A8 8E460000 */  lw    $a2, ($s2)
/* 004145AC 8F998700 */  lw    $t9, %call16(getfloatval)($gp)
/* 004145B0 00C02025 */  move  $a0, $a2
/* 004145B4 0320F809 */  jalr  $t9
/* 004145B8 24C50030 */   addiu $a1, $a2, 0x30
/* 004145BC 8E4C0000 */  lw    $t4, ($s2)
/* 004145C0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004145C4 AD82002C */  sw    $v0, 0x2c($t4)
/* 004145C8 8E390018 */  lw    $t9, 0x18($s1)
.L004145CC:
/* 004145CC 8E4E0000 */  lw    $t6, ($s2)
/* 004145D0 ADD90028 */  sw    $t9, 0x28($t6)
/* 004145D4 8E4B0000 */  lw    $t3, ($s2)
/* 004145D8 AD710014 */  sw    $s1, 0x14($t3)
/* 004145DC 8E4D0000 */  lw    $t5, ($s2)
/* 004145E0 100002BA */  b     .L004150CC
/* 004145E4 ADA00018 */   sw    $zero, 0x18($t5)
.L004145E8:
/* 004145E8 8F998644 */  lw    $t9, %call16(isconsthash)($gp)
/* 004145EC 8E240010 */  lw    $a0, 0x10($s1)
/* 004145F0 0320F809 */  jalr  $t9
/* 004145F4 00000000 */   nop   
/* 004145F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004145FC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00414600 8FA20084 */  lw    $v0, 0x84($sp)
/* 00414604 8F998018 */  lw    $t9, %got(func_004137DC)($gp)
/* 00414608 02202825 */  move  $a1, $s1
/* 0041460C 02003025 */  move  $a2, $s0
/* 00414610 273937DC */  addiu $t9, %lo(func_004137DC) # addiu $t9, $t9, 0x37dc
/* 00414614 00003825 */  move  $a3, $zero
/* 00414618 0320F809 */  jalr  $t9
/* 0041461C AFA00010 */   sw    $zero, 0x10($sp)
/* 00414620 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414624 14400005 */  bnez  $v0, .L0041463C
/* 00414628 AE420000 */   sw    $v0, ($s2)
/* 0041462C 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00414630 24100001 */  li    $s0, 1
/* 00414634 100002A5 */  b     .L004150CC
/* 00414638 A0300000 */   sb    $s0, ($at)
.L0041463C:
/* 0041463C 8E460000 */  lw    $a2, ($s2)
/* 00414640 240A0008 */  li    $t2, 8
/* 00414644 90CF0000 */  lbu   $t7, ($a2)
/* 00414648 55E002A1 */  bnezl $t7, .L004150D0
/* 0041464C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00414650 A0CA0000 */  sb    $t2, ($a2)
/* 00414654 8E4C0000 */  lw    $t4, ($s2)
/* 00414658 92380001 */  lbu   $t8, 1($s1)
/* 0041465C A1980001 */  sb    $t8, 1($t4)
/* 00414660 8E4E0000 */  lw    $t6, ($s2)
/* 00414664 96390010 */  lhu   $t9, 0x10($s1)
/* 00414668 A5D90020 */  sh    $t9, 0x20($t6)
/* 0041466C 8E4D0000 */  lw    $t5, ($s2)
/* 00414670 8E2B0014 */  lw    $t3, 0x14($s1)
/* 00414674 ADAB0024 */  sw    $t3, 0x24($t5)
/* 00414678 8E4F0000 */  lw    $t7, ($s2)
/* 0041467C ADF10014 */  sw    $s1, 0x14($t7)
/* 00414680 8E4A0000 */  lw    $t2, ($s2)
/* 00414684 10000291 */  b     .L004150CC
/* 00414688 AD400018 */   sw    $zero, 0x18($t2)
.L0041468C:
/* 0041468C 24010006 */  li    $at, 6
/* 00414690 14610009 */  bne   $v1, $at, .L004146B8
/* 00414694 8FA60090 */   lw    $a2, 0x90($sp)
/* 00414698 8F998018 */  lw    $t9, %got(func_00414108)($gp)
/* 0041469C 8E24001C */  lw    $a0, 0x1c($s1)
/* 004146A0 8E050024 */  lw    $a1, 0x24($s0)
/* 004146A4 27394108 */  addiu $t9, %lo(func_00414108) # addiu $t9, $t9, 0x4108
/* 004146A8 27A7007C */  addiu $a3, $sp, 0x7c
/* 004146AC 0320F809 */  jalr  $t9
/* 004146B0 8FA20084 */   lw    $v0, 0x84($sp)
/* 004146B4 8FBC0028 */  lw    $gp, 0x28($sp)
.L004146B8:
/* 004146B8 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 004146BC 93180000 */  lbu   $t8, ($t8)
/* 004146C0 57000283 */  bnezl $t8, .L004150D0
/* 004146C4 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004146C8 8E240010 */  lw    $a0, 0x10($s1)
/* 004146CC 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 004146D0 AFA40000 */  sw    $a0, ($sp)
/* 004146D4 8E250014 */  lw    $a1, 0x14($s1)
/* 004146D8 0320F809 */  jalr  $t9
/* 004146DC AFA50004 */   sw    $a1, 4($sp)
/* 004146E0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004146E4 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004146E8 8FA20084 */  lw    $v0, 0x84($sp)
/* 004146EC 8F998018 */  lw    $t9, %got(func_004137DC)($gp)
/* 004146F0 02202825 */  move  $a1, $s1
/* 004146F4 02003025 */  move  $a2, $s0
/* 004146F8 273937DC */  addiu $t9, %lo(func_004137DC) # addiu $t9, $t9, 0x37dc
/* 004146FC 00003825 */  move  $a3, $zero
/* 00414700 0320F809 */  jalr  $t9
/* 00414704 AFA00010 */   sw    $zero, 0x10($sp)
/* 00414708 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041470C 14400005 */  bnez  $v0, .L00414724
/* 00414710 AE420000 */   sw    $v0, ($s2)
/* 00414714 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00414718 24100001 */  li    $s0, 1
/* 0041471C 1000026B */  b     .L004150CC
/* 00414720 A0300000 */   sb    $s0, ($at)
.L00414724:
/* 00414724 8E460000 */  lw    $a2, ($s2)
/* 00414728 90CE0000 */  lbu   $t6, ($a2)
/* 0041472C 15C00065 */  bnez  $t6, .L004148C4
/* 00414730 00000000 */   nop   
/* 00414734 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 00414738 00C02025 */  move  $a0, $a2
/* 0041473C 8E250008 */  lw    $a1, 8($s1)
/* 00414740 0320F809 */  jalr  $t9
/* 00414744 00000000 */   nop   
/* 00414748 8E4B0000 */  lw    $t3, ($s2)
/* 0041474C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414750 24100001 */  li    $s0, 1
/* 00414754 A1700003 */  sb    $s0, 3($t3)
/* 00414758 8E4D0000 */  lw    $t5, ($s2)
/* 0041475C 24010006 */  li    $at, 6
/* 00414760 A5A00006 */  sh    $zero, 6($t5)
/* 00414764 8E4F0000 */  lw    $t7, ($s2)
/* 00414768 ADE00030 */  sw    $zero, 0x30($t7)
/* 0041476C 8FAA0084 */  lw    $t2, 0x84($sp)
/* 00414770 8E580000 */  lw    $t8, ($s2)
/* 00414774 8D42FFFC */  lw    $v0, -4($t2)
/* 00414778 AF020010 */  sw    $v0, 0x10($t8)
/* 0041477C 8E4C0000 */  lw    $t4, ($s2)
/* 00414780 AD800038 */  sw    $zero, 0x38($t4)
/* 00414784 92390000 */  lbu   $t9, ($s1)
/* 00414788 8FAE007C */  lw    $t6, 0x7c($sp)
/* 0041478C 17210003 */  bne   $t9, $at, .L0041479C
/* 00414790 00000000 */   nop   
/* 00414794 8E4B0000 */  lw    $t3, ($s2)
/* 00414798 AD6E0024 */  sw    $t6, 0x24($t3)
.L0041479C:
/* 0041479C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004147A0 24440104 */  addiu $a0, $v0, 0x104
/* 004147A4 96250002 */  lhu   $a1, 2($s1)
/* 004147A8 0320F809 */  jalr  $t9
/* 004147AC AFA20034 */   sw    $v0, 0x34($sp)
/* 004147B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004147B4 24040010 */  li    $a0, 16
/* 004147B8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004147BC 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004147C0 0320F809 */  jalr  $t9
/* 004147C4 00000000 */   nop   
/* 004147C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004147CC 14400004 */  bnez  $v0, .L004147E0
/* 004147D0 00401825 */   move  $v1, $v0
/* 004147D4 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 004147D8 1000023C */  b     .L004150CC
/* 004147DC A0300000 */   sb    $s0, ($at)
.L004147E0:
/* 004147E0 8E4D0000 */  lw    $t5, ($s2)
/* 004147E4 8FA60090 */  lw    $a2, 0x90($sp)
/* 004147E8 ADA20018 */  sw    $v0, 0x18($t5)
/* 004147EC 8CCF0000 */  lw    $t7, ($a2)
/* 004147F0 11E00003 */  beqz  $t7, .L00414800
/* 004147F4 AC4F0000 */   sw    $t7, ($v0)
/* 004147F8 10000003 */  b     .L00414808
/* 004147FC ADE20004 */   sw    $v0, 4($t7)
.L00414800:
/* 00414800 8FAA0034 */  lw    $t2, 0x34($sp)
/* 00414804 AD420024 */  sw    $v0, 0x24($t2)
.L00414808:
/* 00414808 AC660004 */  sw    $a2, 4($v1)
/* 0041480C ACC30000 */  sw    $v1, ($a2)
/* 00414810 24180002 */  li    $t8, 2
/* 00414814 A0780009 */  sb    $t8, 9($v1)
/* 00414818 8E4C0000 */  lw    $t4, ($s2)
/* 0041481C 8FA50034 */  lw    $a1, 0x34($sp)
/* 00414820 AC6C000C */  sw    $t4, 0xc($v1)
/* 00414824 8E590000 */  lw    $t9, ($s2)
/* 00414828 932E0022 */  lbu   $t6, 0x22($t9)
/* 0041482C 8F998214 */  lw    $t9, %call16(varinsert)($gp)
/* 00414830 A06E0008 */  sb    $t6, 8($v1)
/* 00414834 0320F809 */  jalr  $t9
/* 00414838 8E440000 */   lw    $a0, ($s2)
/* 0041483C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414840 8FA50034 */  lw    $a1, 0x34($sp)
/* 00414844 96240002 */  lhu   $a0, 2($s1)
/* 00414848 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0041484C 24A5010C */  addiu $a1, $a1, 0x10c
/* 00414850 0320F809 */  jalr  $t9
/* 00414854 00000000 */   nop   
/* 00414858 8E4B0000 */  lw    $t3, ($s2)
/* 0041485C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414860 A1620002 */  sb    $v0, 2($t3)
/* 00414864 8E4D0000 */  lw    $t5, ($s2)
/* 00414868 91AF0002 */  lbu   $t7, 2($t5)
/* 0041486C 55E00008 */  bnezl $t7, .L00414890
/* 00414870 8FB00034 */   lw    $s0, 0x34($sp)
/* 00414874 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00414878 8FA40034 */  lw    $a0, 0x34($sp)
/* 0041487C 96250002 */  lhu   $a1, 2($s1)
/* 00414880 0320F809 */  jalr  $t9
/* 00414884 24840114 */   addiu $a0, $a0, 0x114
/* 00414888 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041488C 8FB00034 */  lw    $s0, 0x34($sp)
.L00414890:
/* 00414890 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00414894 96250002 */  lhu   $a1, 2($s1)
/* 00414898 2610012C */  addiu $s0, $s0, 0x12c
/* 0041489C 0320F809 */  jalr  $t9
/* 004148A0 02002025 */   move  $a0, $s0
/* 004148A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004148A8 02002025 */  move  $a0, $s0
/* 004148AC 96250024 */  lhu   $a1, 0x24($s1)
/* 004148B0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004148B4 0320F809 */  jalr  $t9
/* 004148B8 00000000 */   nop   
/* 004148BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004148C0 8E460000 */  lw    $a2, ($s2)
.L004148C4:
/* 004148C4 8F998018 */  lw    $t9, %got(func_00413510)($gp)
/* 004148C8 00C02025 */  move  $a0, $a2
/* 004148CC 24050001 */  li    $a1, 1
/* 004148D0 27393510 */  addiu $t9, %lo(func_00413510) # addiu $t9, $t9, 0x3510
/* 004148D4 0320F809 */  jalr  $t9
/* 004148D8 8FA20084 */   lw    $v0, 0x84($sp)
/* 004148DC 100001FB */  b     .L004150CC
/* 004148E0 8FBC0028 */   lw    $gp, 0x28($sp)
.L004148E4:
/* 004148E4 922A0010 */  lbu   $t2, 0x10($s1)
/* 004148E8 8F8C8DBC */  lw     $t4, %got(optab)($gp)
/* 004148EC 8FA60090 */  lw    $a2, 0x90($sp)
/* 004148F0 000AC080 */  sll   $t8, $t2, 2
/* 004148F4 030AC023 */  subu  $t8, $t8, $t2
/* 004148F8 030CC821 */  addu  $t9, $t8, $t4
/* 004148FC 932E0002 */  lbu   $t6, 2($t9)
/* 00414900 27A7007C */  addiu $a3, $sp, 0x7c
/* 00414904 11C0002F */  beqz  $t6, .L004149C4
/* 00414908 00000000 */   nop   
/* 0041490C 8E050024 */  lw    $a1, 0x24($s0)
/* 00414910 8E240014 */  lw    $a0, 0x14($s1)
/* 00414914 8CAB0014 */  lw    $t3, 0x14($a1)
/* 00414918 108B0008 */  beq   $a0, $t3, .L0041493C
/* 0041491C 00000000 */   nop   
/* 00414920 8E0D0028 */  lw    $t5, 0x28($s0)
/* 00414924 8E2F0018 */  lw    $t7, 0x18($s1)
/* 00414928 8FA60090 */  lw    $a2, 0x90($sp)
/* 0041492C AFAD0034 */  sw    $t5, 0x34($sp)
/* 00414930 8DB80014 */  lw    $t8, 0x14($t5)
/* 00414934 15F80012 */  bne   $t7, $t8, .L00414980
/* 00414938 00000000 */   nop   
.L0041493C:
/* 0041493C 8F998018 */  lw    $t9, %got(func_00414108)($gp)
/* 00414940 8FA60090 */  lw    $a2, 0x90($sp)
/* 00414944 27A7007C */  addiu $a3, $sp, 0x7c
/* 00414948 27394108 */  addiu $t9, %lo(func_00414108) # addiu $t9, $t9, 0x4108
/* 0041494C 0320F809 */  jalr  $t9
/* 00414950 8FA20084 */   lw    $v0, 0x84($sp)
/* 00414954 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414958 8E240018 */  lw    $a0, 0x18($s1)
/* 0041495C 8E050028 */  lw    $a1, 0x28($s0)
/* 00414960 8F998018 */  lw    $t9, %got(func_00414108)($gp)
/* 00414964 8FA60090 */  lw    $a2, 0x90($sp)
/* 00414968 27A70078 */  addiu $a3, $sp, 0x78
/* 0041496C 27394108 */  addiu $t9, %lo(func_00414108) # addiu $t9, $t9, 0x4108
/* 00414970 0320F809 */  jalr  $t9
/* 00414974 8FA20084 */   lw    $v0, 0x84($sp)
/* 00414978 1000001A */  b     .L004149E4
/* 0041497C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00414980:
/* 00414980 8F998018 */  lw    $t9, %got(func_00414108)($gp)
/* 00414984 8FA50034 */  lw    $a1, 0x34($sp)
/* 00414988 27A7007C */  addiu $a3, $sp, 0x7c
/* 0041498C 27394108 */  addiu $t9, %lo(func_00414108) # addiu $t9, $t9, 0x4108
/* 00414990 0320F809 */  jalr  $t9
/* 00414994 8FA20084 */   lw    $v0, 0x84($sp)
/* 00414998 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041499C 8E240018 */  lw    $a0, 0x18($s1)
/* 004149A0 8E050024 */  lw    $a1, 0x24($s0)
/* 004149A4 8F998018 */  lw    $t9, %got(func_00414108)($gp)
/* 004149A8 8FA60090 */  lw    $a2, 0x90($sp)
/* 004149AC 27A70078 */  addiu $a3, $sp, 0x78
/* 004149B0 27394108 */  addiu $t9, %lo(func_00414108) # addiu $t9, $t9, 0x4108
/* 004149B4 0320F809 */  jalr  $t9
/* 004149B8 8FA20084 */   lw    $v0, 0x84($sp)
/* 004149BC 10000009 */  b     .L004149E4
/* 004149C0 8FBC0028 */   lw    $gp, 0x28($sp)
.L004149C4:
/* 004149C4 8F998018 */  lw    $t9, %got(func_00414108)($gp)
/* 004149C8 8E240014 */  lw    $a0, 0x14($s1)
/* 004149CC 8E050024 */  lw    $a1, 0x24($s0)
/* 004149D0 27394108 */  addiu $t9, %lo(func_00414108) # addiu $t9, $t9, 0x4108
/* 004149D4 0320F809 */  jalr  $t9
/* 004149D8 8FA20084 */   lw    $v0, 0x84($sp)
/* 004149DC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004149E0 AFA00078 */  sw    $zero, 0x78($sp)
.L004149E4:
/* 004149E4 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 004149E8 918C0000 */  lbu   $t4, ($t4)
/* 004149EC 558001B8 */  bnezl $t4, .L004150D0
/* 004149F0 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004149F4 92240010 */  lbu   $a0, 0x10($s1)
/* 004149F8 2C9900A0 */  sltiu $t9, $a0, 0xa0
/* 004149FC 13200009 */  beqz  $t9, .L00414A24
/* 00414A00 00000000 */   nop   
/* 00414A04 8F8D8044 */  lw    $t5, %got(D_1000FE60)($gp)
/* 00414A08 00047143 */  sra   $t6, $a0, 5
/* 00414A0C 000E5880 */  sll   $t3, $t6, 2
/* 00414A10 25ADFE60 */  addiu $t5, %lo(D_1000FE60) # addiu $t5, $t5, -0x1a0
/* 00414A14 01AB5021 */  addu  $t2, $t5, $t3
/* 00414A18 8D4F0000 */  lw    $t7, ($t2)
/* 00414A1C 008FC004 */  sllv  $t8, $t7, $a0
/* 00414A20 2B190000 */  slti  $t9, $t8, 0
.L00414A24:
/* 00414A24 13200009 */  beqz  $t9, .L00414A4C
/* 00414A28 00000000 */   nop   
/* 00414A2C 8F998654 */  lw    $t9, %call16(opvalhash)($gp)
/* 00414A30 8FA5007C */  lw    $a1, 0x7c($sp)
/* 00414A34 8E26001C */  lw    $a2, 0x1c($s1)
/* 00414A38 0320F809 */  jalr  $t9
/* 00414A3C 00000000 */   nop   
/* 00414A40 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414A44 10000008 */  b     .L00414A68
/* 00414A48 3044FFFF */   andi  $a0, $v0, 0xffff
.L00414A4C:
/* 00414A4C 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 00414A50 8FA5007C */  lw    $a1, 0x7c($sp)
/* 00414A54 8FA60078 */  lw    $a2, 0x78($sp)
/* 00414A58 0320F809 */  jalr  $t9
/* 00414A5C 00000000 */   nop   
/* 00414A60 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414A64 3044FFFF */  andi  $a0, $v0, 0xffff
.L00414A68:
/* 00414A68 8F998018 */  lw    $t9, %got(func_004137DC)($gp)
/* 00414A6C 8FAE0078 */  lw    $t6, 0x78($sp)
/* 00414A70 02202825 */  move  $a1, $s1
/* 00414A74 273937DC */  addiu $t9, %lo(func_004137DC) # addiu $t9, $t9, 0x37dc
/* 00414A78 02003025 */  move  $a2, $s0
/* 00414A7C 8FA7007C */  lw    $a3, 0x7c($sp)
/* 00414A80 8FA20084 */  lw    $v0, 0x84($sp)
/* 00414A84 0320F809 */  jalr  $t9
/* 00414A88 AFAE0010 */   sw    $t6, 0x10($sp)
/* 00414A8C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414A90 14400005 */  bnez  $v0, .L00414AA8
/* 00414A94 AE420000 */   sw    $v0, ($s2)
/* 00414A98 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00414A9C 24100001 */  li    $s0, 1
/* 00414AA0 1000018A */  b     .L004150CC
/* 00414AA4 A0300000 */   sb    $s0, ($at)
.L00414AA8:
/* 00414AA8 8E460000 */  lw    $a2, ($s2)
/* 00414AAC 240B0004 */  li    $t3, 4
/* 00414AB0 90CD0000 */  lbu   $t5, ($a2)
/* 00414AB4 15A00175 */  bnez  $t5, .L0041508C
/* 00414AB8 00000000 */   nop   
/* 00414ABC A0CB0000 */  sb    $t3, ($a2)
/* 00414AC0 922A0010 */  lbu   $t2, 0x10($s1)
/* 00414AC4 8E4F0000 */  lw    $t7, ($s2)
/* 00414AC8 A1EA0020 */  sb    $t2, 0x20($t7)
/* 00414ACC 8E4C0000 */  lw    $t4, ($s2)
/* 00414AD0 92380001 */  lbu   $t8, 1($s1)
/* 00414AD4 A1980001 */  sb    $t8, 1($t4)
/* 00414AD8 8E4E0000 */  lw    $t6, ($s2)
/* 00414ADC 92390012 */  lbu   $t9, 0x12($s1)
/* 00414AE0 A1D90023 */  sb    $t9, 0x23($t6)
/* 00414AE4 8E4B0000 */  lw    $t3, ($s2)
/* 00414AE8 8FAD007C */  lw    $t5, 0x7c($sp)
/* 00414AEC AD6D0024 */  sw    $t5, 0x24($t3)
/* 00414AF0 8E4F0000 */  lw    $t7, ($s2)
/* 00414AF4 8FAA0078 */  lw    $t2, 0x78($sp)
/* 00414AF8 ADEA0028 */  sw    $t2, 0x28($t7)
/* 00414AFC 8E580000 */  lw    $t8, ($s2)
/* 00414B00 A7000006 */  sh    $zero, 6($t8)
/* 00414B04 922C0010 */  lbu   $t4, 0x10($s1)
/* 00414B08 2599FFE0 */  addiu $t9, $t4, -0x20
/* 00414B0C 2F2E0040 */  sltiu $t6, $t9, 0x40
/* 00414B10 11C00009 */  beqz  $t6, .L00414B38
/* 00414B14 00000000 */   nop   
/* 00414B18 8F8A8044 */  lw    $t2, %got(D_1000FE58)($gp)
/* 00414B1C 00196943 */  sra   $t5, $t9, 5
/* 00414B20 000D5880 */  sll   $t3, $t5, 2
/* 00414B24 254AFE58 */  addiu $t2, %lo(D_1000FE58) # addiu $t2, $t2, -0x1a8
/* 00414B28 014B7821 */  addu  $t7, $t2, $t3
/* 00414B2C 8DF80000 */  lw    $t8, ($t7)
/* 00414B30 03386004 */  sllv  $t4, $t8, $t9
/* 00414B34 298E0000 */  slti  $t6, $t4, 0
.L00414B38:
/* 00414B38 55C00005 */  bnezl $t6, .L00414B50
/* 00414B3C 8FAF0084 */   lw    $t7, 0x84($sp)
/* 00414B40 922A0011 */  lbu   $t2, 0x11($s1)
/* 00414B44 8E4B0000 */  lw    $t3, ($s2)
/* 00414B48 A16A003E */  sb    $t2, 0x3e($t3)
/* 00414B4C 8FAF0084 */  lw    $t7, 0x84($sp)
.L00414B50:
/* 00414B50 240E0002 */  li    $t6, 2
/* 00414B54 8DF8FFFC */  lw    $t8, -4($t7)
/* 00414B58 AFB80034 */  sw    $t8, 0x34($sp)
/* 00414B5C 8E590000 */  lw    $t9, ($s2)
/* 00414B60 AF380010 */  sw    $t8, 0x10($t9)
/* 00414B64 8E4C0000 */  lw    $t4, ($s2)
/* 00414B68 AD910014 */  sw    $s1, 0x14($t4)
/* 00414B6C 8E4D0000 */  lw    $t5, ($s2)
/* 00414B70 ADA00030 */  sw    $zero, 0x30($t5)
/* 00414B74 8E4A0000 */  lw    $t2, ($s2)
/* 00414B78 A14E0005 */  sb    $t6, 5($t2)
/* 00414B7C 8E4B0000 */  lw    $t3, ($s2)
/* 00414B80 A1600004 */  sb    $zero, 4($t3)
/* 00414B84 8E460000 */  lw    $a2, ($s2)
/* 00414B88 1000005B */  b     .L00414CF8
/* 00414B8C 90C20020 */   lbu   $v0, 0x20($a2)
.L00414B90:
/* 00414B90 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00414B94 24040030 */  li    $a0, 48
/* 00414B98 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00414B9C 0320F809 */  jalr  $t9
/* 00414BA0 00000000 */   nop   
/* 00414BA4 8E4F0000 */  lw    $t7, ($s2)
/* 00414BA8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414BAC 24040030 */  li    $a0, 48
/* 00414BB0 ADE20038 */  sw    $v0, 0x38($t7)
/* 00414BB4 8E580000 */  lw    $t8, ($s2)
/* 00414BB8 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00414BBC 8F190038 */  lw    $t9, 0x38($t8)
/* 00414BC0 AF200000 */  sw    $zero, ($t9)
/* 00414BC4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00414BC8 0320F809 */  jalr  $t9
/* 00414BCC 00000000 */   nop   
/* 00414BD0 8E4C0000 */  lw    $t4, ($s2)
/* 00414BD4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414BD8 AD82003C */  sw    $v0, 0x3c($t4)
/* 00414BDC 8E4D0000 */  lw    $t5, ($s2)
/* 00414BE0 8DAE003C */  lw    $t6, 0x3c($t5)
/* 00414BE4 100000B0 */  b     .L00414EA8
/* 00414BE8 ADC00000 */   sw    $zero, ($t6)
.L00414BEC:
/* 00414BEC 8E2A001C */  lw    $t2, 0x1c($s1)
/* 00414BF0 100000AD */  b     .L00414EA8
/* 00414BF4 ACCA002C */   sw    $t2, 0x2c($a2)
.L00414BF8:
/* 00414BF8 8E2B001C */  lw    $t3, 0x1c($s1)
/* 00414BFC ACCB002C */  sw    $t3, 0x2c($a2)
/* 00414C00 8E580000 */  lw    $t8, ($s2)
/* 00414C04 962F0024 */  lhu   $t7, 0x24($s1)
/* 00414C08 100000A7 */  b     .L00414EA8
/* 00414C0C A70F003C */   sh    $t7, 0x3c($t8)
.L00414C10:
/* 00414C10 8E39001C */  lw    $t9, 0x1c($s1)
/* 00414C14 100000A4 */  b     .L00414EA8
/* 00414C18 ACD9002C */   sw    $t9, 0x2c($a2)
.L00414C1C:
/* 00414C1C 8E2C001C */  lw    $t4, 0x1c($s1)
/* 00414C20 100000A1 */  b     .L00414EA8
/* 00414C24 ACCC002C */   sw    $t4, 0x2c($a2)
.L00414C28:
/* 00414C28 922D0024 */  lbu   $t5, 0x24($s1)
/* 00414C2C 1000009E */  b     .L00414EA8
/* 00414C30 A0CD0038 */   sb    $t5, 0x38($a2)
.L00414C34:
/* 00414C34 8E2E001C */  lw    $t6, 0x1c($s1)
/* 00414C38 ACCE002C */  sw    $t6, 0x2c($a2)
/* 00414C3C 8E4B0000 */  lw    $t3, ($s2)
/* 00414C40 962A0024 */  lhu   $t2, 0x24($s1)
/* 00414C44 10000098 */  b     .L00414EA8
/* 00414C48 A56A003C */   sh    $t2, 0x3c($t3)
.L00414C4C:
/* 00414C4C 8E2F001C */  lw    $t7, 0x1c($s1)
.L00414C50:
/* 00414C50 ACCF002C */  sw    $t7, 0x2c($a2)
/* 00414C54 8E590000 */  lw    $t9, ($s2)
/* 00414C58 96380024 */  lhu   $t8, 0x24($s1)
/* 00414C5C A738003C */  sh    $t8, 0x3c($t9)
/* 00414C60 8E4D0000 */  lw    $t5, ($s2)
/* 00414C64 922C0013 */  lbu   $t4, 0x13($s1)
/* 00414C68 A1AC003F */  sb    $t4, 0x3f($t5)
/* 00414C6C 8E4E0000 */  lw    $t6, ($s2)
/* 00414C70 ADC00038 */  sw    $zero, 0x38($t6)
/* 00414C74 8E2A0008 */  lw    $t2, 8($s1)
/* 00414C78 8E4F0000 */  lw    $t7, ($s2)
/* 00414C7C 8D4B0034 */  lw    $t3, 0x34($t2)
/* 00414C80 10000089 */  b     .L00414EA8
/* 00414C84 ADEB0034 */   sw    $t3, 0x34($t7)
.L00414C88:
/* 00414C88 8E38001C */  lw    $t8, 0x1c($s1)
/* 00414C8C ACD8002C */  sw    $t8, 0x2c($a2)
/* 00414C90 8E4C0000 */  lw    $t4, ($s2)
/* 00414C94 96390024 */  lhu   $t9, 0x24($s1)
/* 00414C98 A599003C */  sh    $t9, 0x3c($t4)
/* 00414C9C 8E2D0008 */  lw    $t5, 8($s1)
/* 00414CA0 8E4A0000 */  lw    $t2, ($s2)
/* 00414CA4 8DAE0034 */  lw    $t6, 0x34($t5)
/* 00414CA8 AD4E0034 */  sw    $t6, 0x34($t2)
/* 00414CAC 8E2B0008 */  lw    $t3, 8($s1)
/* 00414CB0 8E580000 */  lw    $t8, ($s2)
/* 00414CB4 8D6F0038 */  lw    $t7, 0x38($t3)
/* 00414CB8 1000007B */  b     .L00414EA8
/* 00414CBC AF0F0038 */   sw    $t7, 0x38($t8)
.L00414CC0:
/* 00414CC0 8E39001C */  lw    $t9, 0x1c($s1)
/* 00414CC4 ACD9002C */  sw    $t9, 0x2c($a2)
/* 00414CC8 8E4D0000 */  lw    $t5, ($s2)
/* 00414CCC 962C0024 */  lhu   $t4, 0x24($s1)
/* 00414CD0 A5AC003C */  sh    $t4, 0x3c($t5)
/* 00414CD4 8E2E0008 */  lw    $t6, 8($s1)
/* 00414CD8 8E4B0000 */  lw    $t3, ($s2)
/* 00414CDC 8DCA0034 */  lw    $t2, 0x34($t6)
/* 00414CE0 AD6A0034 */  sw    $t2, 0x34($t3)
/* 00414CE4 8E2F0008 */  lw    $t7, 8($s1)
/* 00414CE8 8E590000 */  lw    $t9, ($s2)
/* 00414CEC 8DF80038 */  lw    $t8, 0x38($t7)
/* 00414CF0 1000006D */  b     .L00414EA8
/* 00414CF4 AF380038 */   sw    $t8, 0x38($t9)
.L00414CF8:
/* 00414CF8 2C41006A */  sltiu $at, $v0, 0x6a
/* 00414CFC 1420001A */  bnez  $at, .L00414D68
/* 00414D00 2C41008E */   sltiu $at, $v0, 0x8e
/* 00414D04 14200008 */  bnez  $at, .L00414D28
/* 00414D08 24010093 */   li    $at, 147
/* 00414D0C 5041FFD0 */  beql  $v0, $at, .L00414C50
/* 00414D10 8E2F001C */   lw    $t7, 0x1c($s1)
/* 00414D14 2401009A */  li    $at, 154
/* 00414D18 5041FFCD */  beql  $v0, $at, .L00414C50
/* 00414D1C 8E2F001C */   lw    $t7, 0x1c($s1)
/* 00414D20 1000003F */  b     .L00414E20
/* 00414D24 00000000 */   nop   
.L00414D28:
/* 00414D28 2C410078 */  sltiu $at, $v0, 0x78
/* 00414D2C 14200054 */  bnez  $at, .L00414E80
/* 00414D30 244FFF92 */   addiu $t7, $v0, -0x6e
/* 00414D34 2401007D */  li    $at, 125
/* 00414D38 1041005B */  beq   $v0, $at, .L00414EA8
/* 00414D3C 244CFF7A */   addiu $t4, $v0, -0x86
/* 00414D40 2D810008 */  sltiu $at, $t4, 8
/* 00414D44 10200036 */  beqz  $at, .L00414E20
/* 00414D48 00000000 */   nop   
/* 00414D4C 8F818044 */  lw    $at, %got(jtbl_1000A604)($gp)
/* 00414D50 000C6080 */  sll   $t4, $t4, 2
/* 00414D54 002C0821 */  addu  $at, $at, $t4
/* 00414D58 8C2CA604 */  lw    $t4, %lo(jtbl_1000A604)($at)
/* 00414D5C 019C6021 */  addu  $t4, $t4, $gp
/* 00414D60 01800008 */  jr    $t4
/* 00414D64 00000000 */   nop   
.L00414D68:
/* 00414D68 2C410024 */  sltiu $at, $v0, 0x24
/* 00414D6C 14200010 */  bnez  $at, .L00414DB0
/* 00414D70 2C410044 */   sltiu $at, $v0, 0x44
/* 00414D74 14200033 */  bnez  $at, .L00414E44
/* 00414D78 244BFFD8 */   addiu $t3, $v0, -0x28
/* 00414D7C 2C410063 */  sltiu $at, $v0, 0x63
/* 00414D80 1020003A */  beqz  $at, .L00414E6C
/* 00414D84 244DFFB3 */   addiu $t5, $v0, -0x4d
/* 00414D88 2DA10016 */  sltiu $at, $t5, 0x16
/* 00414D8C 10200024 */  beqz  $at, .L00414E20
/* 00414D90 00000000 */   nop   
/* 00414D94 8F818044 */  lw    $at, %got(jtbl_1000A584)($gp)
/* 00414D98 000D6880 */  sll   $t5, $t5, 2
/* 00414D9C 002D0821 */  addu  $at, $at, $t5
/* 00414DA0 8C2DA584 */  lw    $t5, %lo(jtbl_1000A584)($at)
/* 00414DA4 01BC6821 */  addu  $t5, $t5, $gp
/* 00414DA8 01A00008 */  jr    $t5
/* 00414DAC 00000000 */   nop   
.L00414DB0:
/* 00414DB0 2C41000F */  sltiu $at, $v0, 0xf
/* 00414DB4 1420000D */  bnez  $at, .L00414DEC
/* 00414DB8 2C41001E */   sltiu $at, $v0, 0x1e
/* 00414DBC 10200015 */  beqz  $at, .L00414E14
/* 00414DC0 244EFFE8 */   addiu $t6, $v0, -0x18
/* 00414DC4 2DC10006 */  sltiu $at, $t6, 6
/* 00414DC8 10200015 */  beqz  $at, .L00414E20
/* 00414DCC 00000000 */   nop   
/* 00414DD0 8F818044 */  lw    $at, %got(jtbl_1000A4FC)($gp)
/* 00414DD4 000E7080 */  sll   $t6, $t6, 2
/* 00414DD8 002E0821 */  addu  $at, $at, $t6
/* 00414DDC 8C2EA4FC */  lw    $t6, %lo(jtbl_1000A4FC)($at)
/* 00414DE0 01DC7021 */  addu  $t6, $t6, $gp
/* 00414DE4 01C00008 */  jr    $t6
/* 00414DE8 00000000 */   nop   
.L00414DEC:
/* 00414DEC 2C41000F */  sltiu $at, $v0, 0xf
/* 00414DF0 1020000B */  beqz  $at, .L00414E20
/* 00414DF4 00000000 */   nop   
/* 00414DF8 8F818044 */  lw    $at, %got(jtbl_1000A4C0)($gp)
/* 00414DFC 00025080 */  sll   $t2, $v0, 2
/* 00414E00 002A0821 */  addu  $at, $at, $t2
/* 00414E04 8C2AA4C0 */  lw    $t2, %lo(jtbl_1000A4C0)($at)
/* 00414E08 015C5021 */  addu  $t2, $t2, $gp
/* 00414E0C 01400008 */  jr    $t2
/* 00414E10 00000000 */   nop   
.L00414E14:
/* 00414E14 24010023 */  li    $at, 35
/* 00414E18 1041FF5D */  beq   $v0, $at, .L00414B90
/* 00414E1C 00000000 */   nop   
.L00414E20:
/* 00414E20 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00414E24 8F868044 */  lw    $a2, %got(RO_1000A4B6)($gp)
/* 00414E28 24040001 */  li    $a0, 1
/* 00414E2C 24050357 */  li    $a1, 855
/* 00414E30 2407000A */  li    $a3, 10
/* 00414E34 0320F809 */  jalr  $t9
/* 00414E38 24C6A4B6 */   addiu $a2, %lo(RO_1000A4B6) # addiu $a2, $a2, -0x5b4a
/* 00414E3C 1000001A */  b     .L00414EA8
/* 00414E40 8FBC0028 */   lw    $gp, 0x28($sp)
.L00414E44:
/* 00414E44 2D61001C */  sltiu $at, $t3, 0x1c
/* 00414E48 1020FFF5 */  beqz  $at, .L00414E20
/* 00414E4C 00000000 */   nop   
/* 00414E50 8F818044 */  lw    $at, %got(jtbl_1000A514)($gp)
/* 00414E54 000B5880 */  sll   $t3, $t3, 2
/* 00414E58 002B0821 */  addu  $at, $at, $t3
/* 00414E5C 8C2BA514 */  lw    $t3, %lo(jtbl_1000A514)($at)
/* 00414E60 017C5821 */  addu  $t3, $t3, $gp
/* 00414E64 01600008 */  jr    $t3
/* 00414E68 00000000 */   nop   
.L00414E6C:
/* 00414E6C 24010069 */  li    $at, 105
/* 00414E70 1041000D */  beq   $v0, $at, .L00414EA8
/* 00414E74 00000000 */   nop   
/* 00414E78 1000FFE9 */  b     .L00414E20
/* 00414E7C 00000000 */   nop   
.L00414E80:
/* 00414E80 2DE1000A */  sltiu $at, $t7, 0xa
/* 00414E84 1020FFE6 */  beqz  $at, .L00414E20
/* 00414E88 00000000 */   nop   
/* 00414E8C 8F818044 */  lw    $at, %got(jtbl_1000A5DC)($gp)
/* 00414E90 000F7880 */  sll   $t7, $t7, 2
/* 00414E94 002F0821 */  addu  $at, $at, $t7
/* 00414E98 8C2FA5DC */  lw    $t7, %lo(jtbl_1000A5DC)($at)
/* 00414E9C 01FC7821 */  addu  $t7, $t7, $gp
/* 00414EA0 01E00008 */  jr    $t7
/* 00414EA4 00000000 */   nop   
.L00414EA8:
/* 00414EA8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00414EAC 8FA40034 */  lw    $a0, 0x34($sp)
/* 00414EB0 96250002 */  lhu   $a1, 2($s1)
/* 00414EB4 0320F809 */  jalr  $t9
/* 00414EB8 24840104 */   addiu $a0, $a0, 0x104
/* 00414EBC 8E580000 */  lw    $t8, ($s2)
/* 00414EC0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414EC4 24100001 */  li    $s0, 1
/* 00414EC8 A3100021 */  sb    $s0, 0x21($t8)
/* 00414ECC 8E590000 */  lw    $t9, ($s2)
/* 00414ED0 8F240024 */  lw    $a0, 0x24($t9)
/* 00414ED4 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00414ED8 0320F809 */  jalr  $t9
/* 00414EDC 00000000 */   nop   
/* 00414EE0 8E4C0000 */  lw    $t4, ($s2)
/* 00414EE4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414EE8 A1820022 */  sb    $v0, 0x22($t4)
/* 00414EEC 92240010 */  lbu   $a0, 0x10($s1)
/* 00414EF0 8F8E8DBC */  lw     $t6, %got(optab)($gp)
/* 00414EF4 00046880 */  sll   $t5, $a0, 2
/* 00414EF8 01A46823 */  subu  $t5, $t5, $a0
/* 00414EFC 01AE5021 */  addu  $t2, $t5, $t6
/* 00414F00 914B0002 */  lbu   $t3, 2($t2)
/* 00414F04 5160000F */  beql  $t3, $zero, .L00414F44
/* 00414F08 248FFFE0 */   addiu $t7, $a0, -0x20
/* 00414F0C 8E460000 */  lw    $a2, ($s2)
/* 00414F10 90C30022 */  lbu   $v1, 0x22($a2)
/* 00414F14 50600009 */  beql  $v1, $zero, .L00414F3C
/* 00414F18 A0C30022 */   sb    $v1, 0x22($a2)
/* 00414F1C 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00414F20 8CC40028 */  lw    $a0, 0x28($a2)
/* 00414F24 0320F809 */  jalr  $t9
/* 00414F28 00000000 */   nop   
/* 00414F2C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414F30 00401825 */  move  $v1, $v0
/* 00414F34 8E460000 */  lw    $a2, ($s2)
/* 00414F38 A0C30022 */  sb    $v1, 0x22($a2)
.L00414F3C:
/* 00414F3C 92240010 */  lbu   $a0, 0x10($s1)
/* 00414F40 248FFFE0 */  addiu $t7, $a0, -0x20
.L00414F44:
/* 00414F44 2DF80080 */  sltiu $t8, $t7, 0x80
/* 00414F48 13000009 */  beqz  $t8, .L00414F70
/* 00414F4C 00000000 */   nop   
/* 00414F50 8F8D8044 */  lw    $t5, %got(D_1000FE48)($gp)
/* 00414F54 000FC943 */  sra   $t9, $t7, 5
/* 00414F58 00196080 */  sll   $t4, $t9, 2
/* 00414F5C 25ADFE48 */  addiu $t5, %lo(D_1000FE48) # addiu $t5, $t5, -0x1b8
/* 00414F60 01AC7021 */  addu  $t6, $t5, $t4
/* 00414F64 8DCA0000 */  lw    $t2, ($t6)
/* 00414F68 01EA5804 */  sllv  $t3, $t2, $t7
/* 00414F6C 29780000 */  slti  $t8, $t3, 0
.L00414F70:
/* 00414F70 53000036 */  beql  $t8, $zero, .L0041504C
/* 00414F74 8E4E0000 */   lw    $t6, ($s2)
/* 00414F78 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00414F7C 24040010 */  li    $a0, 16
/* 00414F80 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00414F84 0320F809 */  jalr  $t9
/* 00414F88 00000000 */   nop   
/* 00414F8C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00414F90 14400004 */  bnez  $v0, .L00414FA4
/* 00414F94 00401825 */   move  $v1, $v0
/* 00414F98 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00414F9C 1000004B */  b     .L004150CC
/* 00414FA0 A0300000 */   sb    $s0, ($at)
.L00414FA4:
/* 00414FA4 8E4D0000 */  lw    $t5, ($s2)
/* 00414FA8 ADA20018 */  sw    $v0, 0x18($t5)
/* 00414FAC 8FAC0090 */  lw    $t4, 0x90($sp)
/* 00414FB0 8D8E0000 */  lw    $t6, ($t4)
/* 00414FB4 11C00003 */  beqz  $t6, .L00414FC4
/* 00414FB8 AC4E0000 */   sw    $t6, ($v0)
/* 00414FBC 10000003 */  b     .L00414FCC
/* 00414FC0 ADC20004 */   sw    $v0, 4($t6)
.L00414FC4:
/* 00414FC4 8FAA0034 */  lw    $t2, 0x34($sp)
/* 00414FC8 AD420024 */  sw    $v0, 0x24($t2)
.L00414FCC:
/* 00414FCC 8FAF0090 */  lw    $t7, 0x90($sp)
/* 00414FD0 8FAB0090 */  lw    $t3, 0x90($sp)
/* 00414FD4 24190002 */  li    $t9, 2
/* 00414FD8 AC6F0004 */  sw    $t7, 4($v1)
/* 00414FDC AD630000 */  sw    $v1, ($t3)
/* 00414FE0 A0790009 */  sb    $t9, 9($v1)
/* 00414FE4 8E580000 */  lw    $t8, ($s2)
/* 00414FE8 8F998214 */  lw    $t9, %call16(varinsert)($gp)
/* 00414FEC A0600008 */  sb    $zero, 8($v1)
/* 00414FF0 AC78000C */  sw    $t8, 0xc($v1)
/* 00414FF4 8E440000 */  lw    $a0, ($s2)
/* 00414FF8 0320F809 */  jalr  $t9
/* 00414FFC 8FA50034 */   lw    $a1, 0x34($sp)
/* 00415000 8E4D0000 */  lw    $t5, ($s2)
/* 00415004 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00415008 A1B00003 */  sb    $s0, 3($t5)
/* 0041500C 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00415010 8FA50034 */  lw    $a1, 0x34($sp)
/* 00415014 96240002 */  lhu   $a0, 2($s1)
/* 00415018 0320F809 */  jalr  $t9
/* 0041501C 24A5010C */   addiu $a1, $a1, 0x10c
/* 00415020 8E4C0000 */  lw    $t4, ($s2)
/* 00415024 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00415028 A1820002 */  sb    $v0, 2($t4)
/* 0041502C 8E460000 */  lw    $a2, ($s2)
/* 00415030 90C30022 */  lbu   $v1, 0x22($a2)
/* 00415034 50600004 */  beql  $v1, $zero, .L00415048
/* 00415038 A0C30022 */   sb    $v1, 0x22($a2)
/* 0041503C 90C30002 */  lbu   $v1, 2($a2)
/* 00415040 2C630001 */  sltiu $v1, $v1, 1
/* 00415044 A0C30022 */  sb    $v1, 0x22($a2)
.L00415048:
/* 00415048 8E4E0000 */  lw    $t6, ($s2)
.L0041504C:
/* 0041504C 91CA0022 */  lbu   $t2, 0x22($t6)
/* 00415050 11400007 */  beqz  $t2, .L00415070
/* 00415054 00000000 */   nop   
/* 00415058 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041505C 8FA40034 */  lw    $a0, 0x34($sp)
/* 00415060 96250002 */  lhu   $a1, 2($s1)
/* 00415064 0320F809 */  jalr  $t9
/* 00415068 24840114 */   addiu $a0, $a0, 0x114
/* 0041506C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00415070:
/* 00415070 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00415074 8FA40034 */  lw    $a0, 0x34($sp)
/* 00415078 96250002 */  lhu   $a1, 2($s1)
/* 0041507C 0320F809 */  jalr  $t9
/* 00415080 2484012C */   addiu $a0, $a0, 0x12c
/* 00415084 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00415088 8E460000 */  lw    $a2, ($s2)
.L0041508C:
/* 0041508C 8F998018 */  lw    $t9, %got(func_00413684)($gp)
/* 00415090 00C02025 */  move  $a0, $a2
/* 00415094 8FA20084 */  lw    $v0, 0x84($sp)
/* 00415098 27393684 */  addiu $t9, %lo(func_00413684) # addiu $t9, $t9, 0x3684
/* 0041509C 0320F809 */  jalr  $t9
/* 004150A0 00000000 */   nop   
/* 004150A4 10000009 */  b     .L004150CC
/* 004150A8 8FBC0028 */   lw    $gp, 0x28($sp)
.L004150AC:
/* 004150AC 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004150B0 8F868044 */  lw    $a2, %got(RO_1000A4AC)($gp)
/* 004150B4 24040001 */  li    $a0, 1
/* 004150B8 240502AE */  li    $a1, 686
/* 004150BC 2407000A */  li    $a3, 10
/* 004150C0 0320F809 */  jalr  $t9
/* 004150C4 24C6A4AC */   addiu $a2, %lo(RO_1000A4AC) # addiu $a2, $a2, -0x5b54
/* 004150C8 8FBC0028 */  lw    $gp, 0x28($sp)
.L004150CC:
/* 004150CC 8FBF002C */  lw    $ra, 0x2c($sp)
.L004150D0:
/* 004150D0 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004150D4 8FB10020 */  lw    $s1, 0x20($sp)
/* 004150D8 8FB20024 */  lw    $s2, 0x24($sp)
/* 004150DC 03E00008 */  jr    $ra
/* 004150E0 27BD0088 */   addiu $sp, $sp, 0x88

    .type func_004150E4, @function
func_004150E4:
    # 0041550C func_0041550C
/* 004150E4 3C1C0FC0 */  .cpload $t9
/* 004150E8 279C51AC */  
/* 004150EC 0399E021 */  
/* 004150F0 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 004150F4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004150F8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004150FC AFB1001C */  sw    $s1, 0x1c($sp)
/* 00415100 AFB00018 */  sw    $s0, 0x18($sp)
/* 00415104 AFA60058 */  sw    $a2, 0x58($sp)
/* 00415108 AFA2004C */  sw    $v0, 0x4c($sp)
/* 0041510C 90830000 */  lbu   $v1, ($a0)
/* 00415110 3C011200 */  lui   $at, 0x1200
/* 00415114 00808825 */  move  $s1, $a0
/* 00415118 2C6E0020 */  sltiu $t6, $v1, 0x20
/* 0041511C 000E7823 */  negu  $t7, $t6
/* 00415120 01E1C024 */  and   $t8, $t7, $at
/* 00415124 0078C804 */  sllv  $t9, $t8, $v1
/* 00415128 07210005 */  bgez  $t9, .L00415140
/* 0041512C 00A03825 */   move  $a3, $a1
/* 00415130 908A0020 */  lbu   $t2, 0x20($a0)
/* 00415134 000A58C0 */  sll   $t3, $t2, 3
/* 00415138 00AB082A */  slt   $at, $a1, $t3
/* 0041513C 1020001E */  beqz  $at, .L004151B8
.L00415140:
/* 00415140 24090004 */   li    $t1, 4
/* 00415144 1523001E */  bne   $t1, $v1, .L004151C0
/* 00415148 24040019 */   li    $a0, 25
/* 0041514C 92220020 */  lbu   $v0, 0x20($s1)
/* 00415150 24080019 */  li    $t0, 25
/* 00415154 244CFFE0 */  addiu $t4, $v0, -0x20
/* 00415158 2D8D0080 */  sltiu $t5, $t4, 0x80
/* 0041515C 11A00009 */  beqz  $t5, .L00415184
/* 00415160 00000000 */   nop   
/* 00415164 8F988044 */  lw    $t8, %got(D_1000FE74)($gp)
/* 00415168 000C7143 */  sra   $t6, $t4, 5
/* 0041516C 000E7880 */  sll   $t7, $t6, 2
/* 00415170 2718FE74 */  addiu $t8, %lo(D_1000FE74) # addiu $t8, $t8, -0x18c
/* 00415174 030FC821 */  addu  $t9, $t8, $t7
/* 00415178 8F2A0000 */  lw    $t2, ($t9)
/* 0041517C 018A5804 */  sllv  $t3, $t2, $t4
/* 00415180 296D0000 */  slti  $t5, $t3, 0
.L00415184:
/* 00415184 11A00006 */  beqz  $t5, .L004151A0
/* 00415188 00000000 */   nop   
/* 0041518C 9638003C */  lhu   $t8, 0x3c($s1)
/* 00415190 001878C0 */  sll   $t7, $t8, 3
/* 00415194 00EF082A */  slt   $at, $a3, $t7
/* 00415198 10200007 */  beqz  $at, .L004151B8
/* 0041519C 00000000 */   nop   
.L004151A0:
/* 004151A0 15020007 */  bne   $t0, $v0, .L004151C0
/* 004151A4 00000000 */   nop   
/* 004151A8 8E39002C */  lw    $t9, 0x2c($s1)
/* 004151AC 00F9082A */  slt   $at, $a3, $t9
/* 004151B0 14200003 */  bnez  $at, .L004151C0
/* 004151B4 00000000 */   nop   
.L004151B8:
/* 004151B8 100000B6 */  b     .L00415494
/* 004151BC AFB10048 */   sw    $s1, 0x48($sp)
.L004151C0:
/* 004151C0 8F998654 */  lw    $t9, %call16(opvalhash)($gp)
/* 004151C4 02202825 */  move  $a1, $s1
/* 004151C8 00E03025 */  move  $a2, $a3
/* 004151CC 0320F809 */  jalr  $t9
/* 004151D0 AFA70054 */   sw    $a3, 0x54($sp)
/* 004151D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004151D8 304AFFFF */  andi  $t2, $v0, 0xffff
/* 004151DC 000A6080 */  sll   $t4, $t2, 2
/* 004151E0 8F8B8DF8 */  lw     $t3, %got(table)($gp)
/* 004151E4 93A5005B */  lbu   $a1, 0x5b($sp)
/* 004151E8 8FA70054 */  lw    $a3, 0x54($sp)
/* 004151EC 018B7021 */  addu  $t6, $t4, $t3
/* 004151F0 8DD00000 */  lw    $s0, ($t6)
/* 004151F4 24080019 */  li    $t0, 25
/* 004151F8 24090004 */  li    $t1, 4
/* 004151FC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00415200 12000018 */  beqz  $s0, .L00415264
/* 00415204 00001825 */   move  $v1, $zero
/* 00415208 920D0000 */  lbu   $t5, ($s0)
.L0041520C:
/* 0041520C 152D000E */  bne   $t1, $t5, .L00415248
/* 00415210 00000000 */   nop   
/* 00415214 92180020 */  lbu   $t8, 0x20($s0)
/* 00415218 1518000B */  bne   $t0, $t8, .L00415248
/* 0041521C 00000000 */   nop   
/* 00415220 8E0F0024 */  lw    $t7, 0x24($s0)
/* 00415224 162F0008 */  bne   $s1, $t7, .L00415248
/* 00415228 00000000 */   nop   
/* 0041522C 8E19002C */  lw    $t9, 0x2c($s0)
/* 00415230 14F90005 */  bne   $a3, $t9, .L00415248
/* 00415234 00000000 */   nop   
/* 00415238 920A0001 */  lbu   $t2, 1($s0)
/* 0041523C 14AA0002 */  bne   $a1, $t2, .L00415248
/* 00415240 00000000 */   nop   
/* 00415244 24030001 */  li    $v1, 1
.L00415248:
/* 00415248 14600002 */  bnez  $v1, .L00415254
/* 0041524C 00000000 */   nop   
/* 00415250 8E10001C */  lw    $s0, 0x1c($s0)
.L00415254:
/* 00415254 14600003 */  bnez  $v1, .L00415264
/* 00415258 00000000 */   nop   
/* 0041525C 5600FFEB */  bnezl $s0, .L0041520C
/* 00415260 920D0000 */   lbu   $t5, ($s0)
.L00415264:
/* 00415264 54600012 */  bnezl $v1, .L004152B0
/* 00415268 920B0000 */   lbu   $t3, ($s0)
/* 0041526C 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00415270 AFA70054 */  sw    $a3, 0x54($sp)
/* 00415274 0320F809 */  jalr  $t9
/* 00415278 00000000 */   nop   
/* 0041527C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415280 93A5005B */  lbu   $a1, 0x5b($sp)
/* 00415284 8FA70054 */  lw    $a3, 0x54($sp)
/* 00415288 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 0041528C 24080019 */  li    $t0, 25
/* 00415290 24090004 */  li    $t1, 4
/* 00415294 918C0000 */  lbu   $t4, ($t4)
/* 00415298 00408025 */  move  $s0, $v0
/* 0041529C 51800004 */  beql  $t4, $zero, .L004152B0
/* 004152A0 920B0000 */   lbu   $t3, ($s0)
/* 004152A4 1000007C */  b     .L00415498
/* 004152A8 8FA20048 */   lw    $v0, 0x48($sp)
/* 004152AC 920B0000 */  lbu   $t3, ($s0)
.L004152B0:
/* 004152B0 24180002 */  li    $t8, 2
/* 004152B4 240F0001 */  li    $t7, 1
/* 004152B8 55600014 */  bnezl $t3, .L0041530C
/* 004152BC 960A0006 */   lhu   $t2, 6($s0)
/* 004152C0 8FAE004C */  lw    $t6, 0x4c($sp)
/* 004152C4 A2090000 */  sb    $t1, ($s0)
/* 004152C8 A2080020 */  sb    $t0, 0x20($s0)
/* 004152CC A2050001 */  sb    $a1, 1($s0)
/* 004152D0 A2050023 */  sb    $a1, 0x23($s0)
/* 004152D4 AE110024 */  sw    $s1, 0x24($s0)
/* 004152D8 AE000028 */  sw    $zero, 0x28($s0)
/* 004152DC A6000006 */  sh    $zero, 6($s0)
/* 004152E0 A200003E */  sb    $zero, 0x3e($s0)
/* 004152E4 8DCDFFFC */  lw    $t5, -4($t6)
/* 004152E8 AE000030 */  sw    $zero, 0x30($s0)
/* 004152EC A2180005 */  sb    $t8, 5($s0)
/* 004152F0 A2000004 */  sb    $zero, 4($s0)
/* 004152F4 AE07002C */  sw    $a3, 0x2c($s0)
/* 004152F8 A20F0021 */  sb    $t7, 0x21($s0)
/* 004152FC AE0D0010 */  sw    $t5, 0x10($s0)
/* 00415300 92390022 */  lbu   $t9, 0x22($s1)
/* 00415304 A2190022 */  sb    $t9, 0x22($s0)
/* 00415308 960A0006 */  lhu   $t2, 6($s0)
.L0041530C:
/* 0041530C 24010002 */  li    $at, 2
/* 00415310 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 00415314 254C0001 */  addiu $t4, $t2, 1
/* 00415318 A60C0006 */  sh    $t4, 6($s0)
/* 0041531C 922B0000 */  lbu   $t3, ($s1)
/* 00415320 AFB00048 */  sw    $s0, 0x48($sp)
/* 00415324 000E6823 */  negu  $t5, $t6
/* 00415328 1561001B */  bne   $t3, $at, .L00415398
/* 0041532C 3C010780 */   lui   $at, 0x780
/* 00415330 01A1C024 */  and   $t8, $t5, $at
/* 00415334 00B87804 */  sllv  $t7, $t8, $a1
/* 00415338 05E10017 */  bgez  $t7, .L00415398
/* 0041533C 00000000 */   nop   
/* 00415340 8F9983F8 */  lw    $t9, %call16(unaryfold)($gp)
/* 00415344 02002025 */  move  $a0, $s0
/* 00415348 0320F809 */  jalr  $t9
/* 0041534C 00000000 */   nop   
/* 00415350 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415354 8E040020 */  lw    $a0, 0x20($s0)
/* 00415358 8F9989D4 */  lw     $t9, %got(constprop)($gp)
/* 0041535C 8F390000 */  lw    $t9, ($t9)
/* 00415360 AE190018 */  sw    $t9, 0x18($s0)
/* 00415364 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 00415368 0320F809 */  jalr  $t9
/* 0041536C 00000000 */   nop   
/* 00415370 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415374 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00415378 02002825 */  move  $a1, $s0
/* 0041537C 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00415380 00003025 */  move  $a2, $zero
/* 00415384 00003825 */  move  $a3, $zero
/* 00415388 0320F809 */  jalr  $t9
/* 0041538C 00000000 */   nop   
/* 00415390 10000040 */  b     .L00415494
/* 00415394 8FBC0020 */   lw    $gp, 0x20($sp)
.L00415398:
/* 00415398 8F998344 */  lw    $t9, %call16(opvalihash)($gp)
/* 0041539C 24040019 */  li    $a0, 25
/* 004153A0 8E250014 */  lw    $a1, 0x14($s1)
/* 004153A4 0320F809 */  jalr  $t9
/* 004153A8 00E03025 */   move  $a2, $a3
/* 004153AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004153B0 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004153B4 02002825 */  move  $a1, $s0
/* 004153B8 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 004153BC 8E260014 */  lw    $a2, 0x14($s1)
/* 004153C0 00003825 */  move  $a3, $zero
/* 004153C4 0320F809 */  jalr  $t9
/* 004153C8 00000000 */   nop   
/* 004153CC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004153D0 00408825 */  move  $s1, $v0
/* 004153D4 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 004153D8 914A0000 */  lbu   $t2, ($t2)
/* 004153DC 51400004 */  beql  $t2, $zero, .L004153F0
/* 004153E0 8FAC004C */   lw    $t4, 0x4c($sp)
/* 004153E4 1000002C */  b     .L00415498
/* 004153E8 02001025 */   move  $v0, $s0
/* 004153EC 8FAC004C */  lw    $t4, 0x4c($sp)
.L004153F0:
/* 004153F0 AE110014 */  sw    $s1, 0x14($s0)
/* 004153F4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004153F8 8D82FFFC */  lw    $v0, -4($t4)
/* 004153FC 96250002 */  lhu   $a1, 2($s1)
/* 00415400 24440104 */  addiu $a0, $v0, 0x104
/* 00415404 0320F809 */  jalr  $t9
/* 00415408 AFA2002C */   sw    $v0, 0x2c($sp)
/* 0041540C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415410 8FA4002C */  lw    $a0, 0x2c($sp)
/* 00415414 96250002 */  lhu   $a1, 2($s1)
/* 00415418 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041541C 2484012C */  addiu $a0, $a0, 0x12c
/* 00415420 0320F809 */  jalr  $t9
/* 00415424 00000000 */   nop   
/* 00415428 920B0022 */  lbu   $t3, 0x22($s0)
/* 0041542C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415430 11600007 */  beqz  $t3, .L00415450
/* 00415434 00000000 */   nop   
/* 00415438 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041543C 8FA4002C */  lw    $a0, 0x2c($sp)
/* 00415440 96250002 */  lhu   $a1, 2($s1)
/* 00415444 0320F809 */  jalr  $t9
/* 00415448 24840114 */   addiu $a0, $a0, 0x114
/* 0041544C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00415450:
/* 00415450 8F8E89E4 */  lw     $t6, %got(oldbitposcount)($gp)
/* 00415454 96250002 */  lhu   $a1, 2($s1)
/* 00415458 8DCE0000 */  lw    $t6, ($t6)
/* 0041545C 00AE082A */  slt   $at, $a1, $t6
/* 00415460 5420000D */  bnezl $at, .L00415498
/* 00415464 8FA20048 */   lw    $v0, 0x48($sp)
/* 00415468 920D0021 */  lbu   $t5, 0x21($s0)
/* 0041546C 11A00004 */  beqz  $t5, .L00415480
/* 00415470 00000000 */   nop   
/* 00415474 92180022 */  lbu   $t8, 0x22($s0)
/* 00415478 57000007 */  bnezl $t8, .L00415498
/* 0041547C 8FA20048 */   lw    $v0, 0x48($sp)
.L00415480:
/* 00415480 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00415484 8FA4002C */  lw    $a0, 0x2c($sp)
/* 00415488 0320F809 */  jalr  $t9
/* 0041548C 2484010C */   addiu $a0, $a0, 0x10c
/* 00415490 8FBC0020 */  lw    $gp, 0x20($sp)
.L00415494:
/* 00415494 8FA20048 */  lw    $v0, 0x48($sp)
.L00415498:
/* 00415498 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041549C 8FB00018 */  lw    $s0, 0x18($sp)
/* 004154A0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004154A4 03E00008 */  jr    $ra
/* 004154A8 27BD0050 */   addiu $sp, $sp, 0x50

    .type func_004154AC, @function
func_004154AC:
    # 0041550C func_0041550C
/* 004154AC 10A00015 */  beqz  $a1, .L00415504
/* 004154B0 00001825 */   move  $v1, $zero
/* 004154B4 2407007B */  li    $a3, 123
/* 004154B8 24060001 */  li    $a2, 1
/* 004154BC 90AE0009 */  lbu   $t6, 9($a1)
.L004154C0:
/* 004154C0 54CE000C */  bnel  $a2, $t6, .L004154F4
/* 004154C4 8CA50000 */   lw    $a1, ($a1)
/* 004154C8 8CA2000C */  lw    $v0, 0xc($a1)
/* 004154CC 904F0000 */  lbu   $t7, ($v0)
/* 004154D0 54EF0008 */  bnel  $a3, $t7, .L004154F4
/* 004154D4 8CA50000 */   lw    $a1, ($a1)
/* 004154D8 8C580004 */  lw    $t8, 4($v0)
/* 004154DC 8F190014 */  lw    $t9, 0x14($t8)
/* 004154E0 54990004 */  bnel  $a0, $t9, .L004154F4
/* 004154E4 8CA50000 */   lw    $a1, ($a1)
/* 004154E8 10000002 */  b     .L004154F4
/* 004154EC 30C300FF */   andi  $v1, $a2, 0xff
/* 004154F0 8CA50000 */  lw    $a1, ($a1)
.L004154F4:
/* 004154F4 10A00003 */  beqz  $a1, .L00415504
/* 004154F8 00000000 */   nop   
/* 004154FC 5060FFF0 */  beql  $v1, $zero, .L004154C0
/* 00415500 90AE0009 */   lbu   $t6, 9($a1)
.L00415504:
/* 00415504 03E00008 */  jr    $ra
/* 00415508 2C620001 */   sltiu $v0, $v1, 1

    .type func_0041550C, @function
func_0041550C:
    # 0041550C func_0041550C
    # 004175BC copypropagate
/* 0041550C 3C1C0FC0 */  .cpload $t9
/* 00415510 279C4D84 */  
/* 00415514 0399E021 */  
/* 00415518 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0041551C AFBF0044 */  sw    $ra, 0x44($sp)
/* 00415520 AFBE0040 */  sw    $fp, 0x40($sp)
/* 00415524 AFBC003C */  sw    $gp, 0x3c($sp)
/* 00415528 AFB70038 */  sw    $s7, 0x38($sp)
/* 0041552C AFB60034 */  sw    $s6, 0x34($sp)
/* 00415530 AFB50030 */  sw    $s5, 0x30($sp)
/* 00415534 AFB4002C */  sw    $s4, 0x2c($sp)
/* 00415538 AFB30028 */  sw    $s3, 0x28($sp)
/* 0041553C AFB20024 */  sw    $s2, 0x24($sp)
/* 00415540 AFB10020 */  sw    $s1, 0x20($sp)
/* 00415544 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00415548 AFA500C4 */  sw    $a1, 0xc4($sp)
/* 0041554C AFA600C8 */  sw    $a2, 0xc8($sp)
/* 00415550 AFA200BC */  sw    $v0, 0xbc($sp)
/* 00415554 00803825 */  move  $a3, $a0
/* 00415558 10800798 */  beqz  $a0, .L004173BC
/* 0041555C ACA00000 */   sw    $zero, ($a1)
/* 00415560 90820000 */  lbu   $v0, ($a0)
/* 00415564 244FFFFF */  addiu $t7, $v0, -1
/* 00415568 2DE10008 */  sltiu $at, $t7, 8
/* 0041556C 1020078B */  beqz  $at, .L0041739C
/* 00415570 00000000 */   nop   
/* 00415574 8F818044 */  lw    $at, %got(jtbl_1000A674)($gp)
/* 00415578 000F7880 */  sll   $t7, $t7, 2
/* 0041557C 002F0821 */  addu  $at, $at, $t7
/* 00415580 8C2FA674 */  lw    $t7, %lo(jtbl_1000A674)($at)
/* 00415584 01FC7821 */  addu  $t7, $t7, $gp
/* 00415588 01E00008 */  jr    $t7
/* 0041558C 00000000 */   nop   
.L00415590:
/* 00415590 8F9789D4 */  lw     $s7, %got(constprop)($gp)
/* 00415594 8CF90018 */  lw    $t9, 0x18($a3)
/* 00415598 8FA900C4 */  lw    $t1, 0xc4($sp)
/* 0041559C 8EF80000 */  lw    $t8, ($s7)
/* 004155A0 57190787 */  bnel  $t8, $t9, .L004173C0
/* 004155A4 8FBF0044 */   lw    $ra, 0x44($sp)
/* 004155A8 8CE80014 */  lw    $t0, 0x14($a3)
/* 004155AC 10000783 */  b     .L004173BC
/* 004155B0 AD280000 */   sw    $t0, ($t1)
.L004155B4:
/* 004155B4 8CE30030 */  lw    $v1, 0x30($a3)
/* 004155B8 1460020B */  bnez  $v1, .L00415DE8
/* 004155BC 00000000 */   nop   
/* 004155C0 8F8A89CC */  lw     $t2, %got(nocopy)($gp)
/* 004155C4 90EB0003 */  lbu   $t3, 3($a3)
/* 004155C8 8D4A0000 */  lw    $t2, ($t2)
/* 004155CC 1160077B */  beqz  $t3, .L004173BC
/* 004155D0 ACEA0030 */   sw    $t2, 0x30($a3)
/* 004155D4 8FAC00BC */  lw    $t4, 0xbc($sp)
/* 004155D8 8D8DFFD4 */  lw    $t5, -0x2c($t4)
/* 004155DC 91AE0000 */  lbu   $t6, ($t5)
/* 004155E0 25CFFFE0 */  addiu $t7, $t6, -0x20
/* 004155E4 2DF80060 */  sltiu $t8, $t7, 0x60
/* 004155E8 13000009 */  beqz  $t8, .L00415610
/* 004155EC 00000000 */   nop   
/* 004155F0 8F898044 */  lw    $t1, %got(D_1000FF04)($gp)
/* 004155F4 000FC943 */  sra   $t9, $t7, 5
/* 004155F8 00194080 */  sll   $t0, $t9, 2
/* 004155FC 2529FF04 */  addiu $t1, %lo(D_1000FF04) # addiu $t1, $t1, -0xfc
/* 00415600 01285021 */  addu  $t2, $t1, $t0
/* 00415604 8D4B0000 */  lw    $t3, ($t2)
/* 00415608 01EB6804 */  sllv  $t5, $t3, $t7
/* 0041560C 29B80000 */  slti  $t8, $t5, 0
.L00415610:
/* 00415610 53000017 */  beql  $t8, $zero, .L00415670
/* 00415614 94EF0008 */   lhu   $t7, 8($a3)
/* 00415618 8D99FFFC */  lw    $t9, -4($t4)
/* 0041561C 3C016000 */  lui   $at, 0x6000
/* 00415620 8F220018 */  lw    $v0, 0x18($t9)
/* 00415624 8C490000 */  lw    $t1, ($v0)
/* 00415628 91280005 */  lbu   $t0, 5($t1)
/* 0041562C 2D0A0020 */  sltiu $t2, $t0, 0x20
/* 00415630 000A5823 */  negu  $t3, $t2
/* 00415634 01617824 */  and   $t7, $t3, $at
/* 00415638 010F6804 */  sllv  $t5, $t7, $t0
/* 0041563C 05A20760 */  bltzl $t5, .L004173C0
/* 00415640 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00415644 8C4E0004 */  lw    $t6, 4($v0)
/* 00415648 3C016000 */  lui   $at, 0x6000
/* 0041564C 8DD80000 */  lw    $t8, ($t6)
/* 00415650 930C0005 */  lbu   $t4, 5($t8)
/* 00415654 2D990020 */  sltiu $t9, $t4, 0x20
/* 00415658 00194823 */  negu  $t1, $t9
/* 0041565C 01215024 */  and   $t2, $t1, $at
/* 00415660 018A5804 */  sllv  $t3, $t2, $t4
/* 00415664 05620756 */  bltzl $t3, .L004173C0
/* 00415668 8FBF0044 */   lw    $ra, 0x44($sp)
/* 0041566C 94EF0008 */  lhu   $t7, 8($a3)
.L00415670:
/* 00415670 8F8D8DF8 */  lw     $t5, %got(table)($gp)
/* 00415674 241E001D */  li    $fp, 29
/* 00415678 000F4080 */  sll   $t0, $t7, 2
/* 0041567C 010D7021 */  addu  $t6, $t0, $t5
/* 00415680 8DD40000 */  lw    $s4, ($t6)
/* 00415684 24160003 */  li    $s6, 3
/* 00415688 5280074D */  beql  $s4, $zero, .L004173C0
/* 0041568C 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00415690 8CF80014 */  lw    $t8, 0x14($a3)
.L00415694:
/* 00415694 8E990014 */  lw    $t9, 0x14($s4)
/* 00415698 AFA700C0 */  sw    $a3, 0xc0($sp)
/* 0041569C 571901CD */  bnel  $t8, $t9, .L00415DD4
/* 004156A0 8E94001C */   lw    $s4, 0x1c($s4)
/* 004156A4 8E820038 */  lw    $v0, 0x38($s4)
/* 004156A8 AFA700C0 */  sw    $a3, 0xc0($sp)
/* 004156AC 504001C9 */  beql  $v0, $zero, .L00415DD4
/* 004156B0 8E94001C */   lw    $s4, 0x1c($s4)
/* 004156B4 90490003 */  lbu   $t1, 3($v0)
/* 004156B8 AFA700C0 */  sw    $a3, 0xc0($sp)
/* 004156BC 8FAC00BC */  lw    $t4, 0xbc($sp)
/* 004156C0 552001C4 */  bnezl $t1, .L00415DD4
/* 004156C4 8E94001C */   lw    $s4, 0x1c($s4)
/* 004156C8 8C4A0028 */  lw    $t2, 0x28($v0)
/* 004156CC 8D93FFFC */  lw    $s3, -4($t4)
/* 004156D0 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 004156D4 95440002 */  lhu   $a0, 2($t2)
/* 004156D8 26770144 */  addiu $s7, $s3, 0x144
/* 004156DC 02E02825 */  move  $a1, $s7
/* 004156E0 0320F809 */  jalr  $t9
/* 004156E4 AFA700C0 */   sw    $a3, 0xc0($sp)
/* 004156E8 104001B9 */  beqz  $v0, .L00415DD0
/* 004156EC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004156F0 8E8B0038 */  lw    $t3, 0x38($s4)
/* 004156F4 8D750028 */  lw    $s5, 0x28($t3)
/* 004156F8 8EA40018 */  lw    $a0, 0x18($s5)
/* 004156FC 908F0000 */  lbu   $t7, ($a0)
/* 00415700 16CF001F */  bne   $s6, $t7, .L00415780
/* 00415704 00000000 */   nop   
/* 00415708 90880016 */  lbu   $t0, 0x16($a0)
/* 0041570C 310D0007 */  andi  $t5, $t0, 7
/* 00415710 16CD001B */  bne   $s6, $t5, .L00415780
/* 00415714 00000000 */   nop   
/* 00415718 8C8E0010 */  lw    $t6, 0x10($a0)
/* 0041571C 13CE0018 */  beq   $fp, $t6, .L00415780
/* 00415720 00000000 */   nop   
/* 00415724 8F998018 */  lw    $t9, %got(func_004154AC)($gp)
/* 00415728 8E650028 */  lw    $a1, 0x28($s3)
/* 0041572C 8FA200BC */  lw    $v0, 0xbc($sp)
/* 00415730 273954AC */  addiu $t9, %lo(func_004154AC) # addiu $t9, $t9, 0x54ac
/* 00415734 0320F809 */  jalr  $t9
/* 00415738 00000000 */   nop   
/* 0041573C 10400010 */  beqz  $v0, .L00415780
/* 00415740 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00415744 8E780020 */  lw    $t8, 0x20($s3)
/* 00415748 93190000 */  lbu   $t9, ($t8)
/* 0041574C 2F290040 */  sltiu $t1, $t9, 0x40
/* 00415750 11200009 */  beqz  $t1, .L00415778
/* 00415754 00000000 */   nop   
/* 00415758 8F8B8044 */  lw    $t3, %got(D_1000FEFC)($gp)
/* 0041575C 00195143 */  sra   $t2, $t9, 5
/* 00415760 000A6080 */  sll   $t4, $t2, 2
/* 00415764 256BFEFC */  addiu $t3, %lo(D_1000FEFC) # addiu $t3, $t3, -0x104
/* 00415768 016C7821 */  addu  $t7, $t3, $t4
/* 0041576C 8DE80000 */  lw    $t0, ($t7)
/* 00415770 03286804 */  sllv  $t5, $t0, $t9
/* 00415774 29A90000 */  slti  $t1, $t5, 0
.L00415778:
/* 00415778 51200009 */  beql  $t1, $zero, .L004157A0
/* 0041577C 8EA40018 */   lw    $a0, 0x18($s5)
.L00415780:
/* 00415780 8F9984A8 */  lw    $t9, %call16(expinalter)($gp)
/* 00415784 8EA40018 */  lw    $a0, 0x18($s5)
/* 00415788 02602825 */  move  $a1, $s3
/* 0041578C 0320F809 */  jalr  $t9
/* 00415790 00000000 */   nop   
/* 00415794 1440018E */  bnez  $v0, .L00415DD0
/* 00415798 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041579C 8EA40018 */  lw    $a0, 0x18($s5)
.L004157A0:
/* 004157A0 24010004 */  li    $at, 4
/* 004157A4 90980000 */  lbu   $t8, ($a0)
/* 004157A8 5701002E */  bnel  $t8, $at, .L00415864
/* 004157AC 8FAC00C4 */   lw    $t4, 0xc4($sp)
/* 004157B0 8E8A0038 */  lw    $t2, 0x38($s4)
/* 004157B4 8F9986E0 */  lw    $t9, %call16(has_ilod)($gp)
/* 004157B8 8D4B0004 */  lw    $t3, 4($t2)
/* 004157BC 0320F809 */  jalr  $t9
/* 004157C0 8D640034 */   lw    $a0, 0x34($t3)
/* 004157C4 14400182 */  bnez  $v0, .L00415DD0
/* 004157C8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004157CC 8E8C0038 */  lw    $t4, 0x38($s4)
/* 004157D0 8F9986E4 */  lw    $t9, %call16(is_incr)($gp)
/* 004157D4 8D8F0004 */  lw    $t7, 4($t4)
/* 004157D8 0320F809 */  jalr  $t9
/* 004157DC 8DE40034 */   lw    $a0, 0x34($t7)
/* 004157E0 1440017B */  bnez  $v0, .L00415DD0
/* 004157E4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004157E8 8FA200C0 */  lw    $v0, 0xc0($sp)
/* 004157EC 90480022 */  lbu   $t0, 0x22($v0)
/* 004157F0 11000007 */  beqz  $t0, .L00415810
/* 004157F4 00000000 */   nop   
/* 004157F8 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 004157FC 8C4D002C */  lw    $t5, 0x2c($v0)
/* 00415800 8F390000 */  lw    $t9, ($t9)
/* 00415804 000D72C2 */  srl   $t6, $t5, 0xb
/* 00415808 532E000B */  beql  $t9, $t6, .L00415838
/* 0041580C 93AB00CB */   lbu   $t3, 0xcb($sp)
.L00415810:
/* 00415810 8F898A9C */  lw     $t1, %got(doingcopy)($gp)
/* 00415814 91290000 */  lbu   $t1, ($t1)
/* 00415818 55200007 */  bnezl $t1, .L00415838
/* 0041581C 93AB00CB */   lbu   $t3, 0xcb($sp)
/* 00415820 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 00415824 8F180000 */  lw    $t8, ($t8)
/* 00415828 930A0015 */  lbu   $t2, 0x15($t8)
/* 0041582C 51400169 */  beql  $t2, $zero, .L00415DD4
/* 00415830 8E94001C */   lw    $s4, 0x1c($s4)
/* 00415834 93AB00CB */  lbu   $t3, 0xcb($sp)
.L00415838:
/* 00415838 55600166 */  bnezl $t3, .L00415DD4
/* 0041583C 8E94001C */   lw    $s4, 0x1c($s4)
/* 00415840 8F9986D4 */  lw    $t9, %call16(countvars)($gp)
/* 00415844 8EA40018 */  lw    $a0, 0x18($s5)
/* 00415848 0320F809 */  jalr  $t9
/* 0041584C 00000000 */   nop   
/* 00415850 2C41000A */  sltiu $at, $v0, 0xa
/* 00415854 1020015E */  beqz  $at, .L00415DD0
/* 00415858 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041585C 8EA40018 */  lw    $a0, 0x18($s5)
/* 00415860 8FAC00C4 */  lw    $t4, 0xc4($sp)
.L00415864:
/* 00415864 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 00415868 00001825 */  move  $v1, $zero
/* 0041586C AD840000 */  sw    $a0, ($t4)
/* 00415870 8E8F0038 */  lw    $t7, 0x38($s4)
/* 00415874 90C20020 */  lbu   $v0, 0x20($a2)
/* 00415878 8DE80004 */  lw    $t0, 4($t7)
/* 0041587C 28410004 */  slti  $at, $v0, 4
/* 00415880 8D0D0034 */  lw    $t5, 0x34($t0)
/* 00415884 10200002 */  beqz  $at, .L00415890
/* 00415888 AFAD0088 */   sw    $t5, 0x88($sp)
/* 0041588C 000218C0 */  sll   $v1, $v0, 3
.L00415890:
/* 00415890 8CD90014 */  lw    $t9, 0x14($a2)
/* 00415894 26640104 */  addiu $a0, $s3, 0x104
/* 00415898 97250002 */  lhu   $a1, 2($t9)
/* 0041589C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004158A0 AFA30084 */  sw    $v1, 0x84($sp)
/* 004158A4 0320F809 */  jalr  $t9
/* 004158A8 00000000 */   nop   
/* 004158AC 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 004158B0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004158B4 90CE0002 */  lbu   $t6, 2($a2)
/* 004158B8 55C00009 */  bnezl $t6, .L004158E0
/* 004158BC 8CD80018 */   lw    $t8, 0x18($a2)
/* 004158C0 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004158C4 8CC90014 */  lw    $t1, 0x14($a2)
/* 004158C8 26640114 */  addiu $a0, $s3, 0x114
/* 004158CC 0320F809 */  jalr  $t9
/* 004158D0 95250002 */   lhu   $a1, 2($t1)
/* 004158D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004158D8 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 004158DC 8CD80018 */  lw    $t8, 0x18($a2)
.L004158E0:
/* 004158E0 00C02025 */  move  $a0, $a2
/* 004158E4 02602825 */  move  $a1, $s3
/* 004158E8 A3000009 */  sb    $zero, 9($t8)
/* 004158EC 8F998210 */  lw    $t9, %call16(vardelete)($gp)
/* 004158F0 0320F809 */  jalr  $t9
/* 004158F4 00000000 */   nop   
/* 004158F8 92AA0010 */  lbu   $t2, 0x10($s5)
/* 004158FC 2401003E */  li    $at, 62
/* 00415900 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415904 55410008 */  bnel  $t2, $at, .L00415928
/* 00415908 8FAC00C4 */   lw    $t4, 0xc4($sp)
/* 0041590C 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 00415910 8FAB00C0 */  lw    $t3, 0xc0($sp)
/* 00415914 02602825 */  move  $a1, $s3
/* 00415918 0320F809 */  jalr  $t9
/* 0041591C 8D640024 */   lw    $a0, 0x24($t3)
/* 00415920 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415924 8FAC00C4 */  lw    $t4, 0xc4($sp)
.L00415928:
/* 00415928 3C011200 */  lui   $at, 0x1200
/* 0041592C 8D910000 */  lw    $s1, ($t4)
/* 00415930 92220000 */  lbu   $v0, ($s1)
/* 00415934 2C4F0020 */  sltiu $t7, $v0, 0x20
/* 00415938 000F4023 */  negu  $t0, $t7
/* 0041593C 01016824 */  and   $t5, $t0, $at
/* 00415940 004DC804 */  sllv  $t9, $t5, $v0
/* 00415944 072100B1 */  bgez  $t9, .L00415C0C
/* 00415948 00000000 */   nop   
/* 0041594C 8E2E0008 */  lw    $t6, 8($s1)
.L00415950:
/* 00415950 A3A0009F */  sb    $zero, 0x9f($sp)
/* 00415954 8F8A8DF8 */  lw     $t2, %got(table)($gp)
/* 00415958 95C90008 */  lhu   $t1, 8($t6)
/* 0041595C 0009C080 */  sll   $t8, $t1, 2
/* 00415960 030A5821 */  addu  $t3, $t8, $t2
/* 00415964 8D700000 */  lw    $s0, ($t3)
/* 00415968 520000A0 */  beql  $s0, $zero, .L00415BEC
/* 0041596C 2C480020 */   sltiu $t0, $v0, 0x20
.L00415970:
/* 00415970 8E0C0014 */  lw    $t4, 0x14($s0)
/* 00415974 562C0098 */  bnel  $s1, $t4, .L00415BD8
/* 00415978 8E10001C */   lw    $s0, 0x1c($s0)
/* 0041597C 8E020038 */  lw    $v0, 0x38($s0)
/* 00415980 50400095 */  beql  $v0, $zero, .L00415BD8
/* 00415984 8E10001C */   lw    $s0, 0x1c($s0)
/* 00415988 904F0003 */  lbu   $t7, 3($v0)
/* 0041598C 55E00092 */  bnezl $t7, .L00415BD8
/* 00415990 8E10001C */   lw    $s0, 0x1c($s0)
/* 00415994 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00415998 8C480028 */  lw    $t0, 0x28($v0)
/* 0041599C 02E02825 */  move  $a1, $s7
/* 004159A0 0320F809 */  jalr  $t9
/* 004159A4 95040002 */   lhu   $a0, 2($t0)
/* 004159A8 1040008A */  beqz  $v0, .L00415BD4
/* 004159AC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004159B0 8E0D0038 */  lw    $t5, 0x38($s0)
/* 004159B4 8DB20028 */  lw    $s2, 0x28($t5)
/* 004159B8 92590010 */  lbu   $t9, 0x10($s2)
/* 004159BC 272EFFE0 */  addiu $t6, $t9, -0x20
/* 004159C0 2DC90060 */  sltiu $t1, $t6, 0x60
/* 004159C4 11200009 */  beqz  $t1, .L004159EC
/* 004159C8 00000000 */   nop   
/* 004159CC 8F8B8044 */  lw    $t3, %got(D_1000FEF0)($gp)
/* 004159D0 000EC143 */  sra   $t8, $t6, 5
/* 004159D4 00185080 */  sll   $t2, $t8, 2
/* 004159D8 256BFEF0 */  addiu $t3, %lo(D_1000FEF0) # addiu $t3, $t3, -0x110
/* 004159DC 016A6021 */  addu  $t4, $t3, $t2
/* 004159E0 8D8F0000 */  lw    $t7, ($t4)
/* 004159E4 01CF4004 */  sllv  $t0, $t7, $t6
/* 004159E8 29090000 */  slti  $t1, $t0, 0
.L004159EC:
/* 004159EC 55200007 */  bnezl $t1, .L00415A0C
/* 004159F0 8E440018 */   lw    $a0, 0x18($s2)
/* 004159F4 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 004159F8 240410BA */  li    $a0, 4282
/* 004159FC 0320F809 */  jalr  $t9
/* 00415A00 00000000 */   nop   
/* 00415A04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415A08 8E440018 */  lw    $a0, 0x18($s2)
.L00415A0C:
/* 00415A0C 90990000 */  lbu   $t9, ($a0)
/* 00415A10 16D9001F */  bne   $s6, $t9, .L00415A90
/* 00415A14 00000000 */   nop   
/* 00415A18 90980016 */  lbu   $t8, 0x16($a0)
/* 00415A1C 330B0007 */  andi  $t3, $t8, 7
/* 00415A20 16CB001B */  bne   $s6, $t3, .L00415A90
/* 00415A24 00000000 */   nop   
/* 00415A28 8C8A0010 */  lw    $t2, 0x10($a0)
/* 00415A2C 17CA0018 */  bne   $fp, $t2, .L00415A90
/* 00415A30 00000000 */   nop   
/* 00415A34 8F998018 */  lw    $t9, %got(func_004154AC)($gp)
/* 00415A38 8E650028 */  lw    $a1, 0x28($s3)
/* 00415A3C 8FA200BC */  lw    $v0, 0xbc($sp)
/* 00415A40 273954AC */  addiu $t9, %lo(func_004154AC) # addiu $t9, $t9, 0x54ac
/* 00415A44 0320F809 */  jalr  $t9
/* 00415A48 00000000 */   nop   
/* 00415A4C 10400010 */  beqz  $v0, .L00415A90
/* 00415A50 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00415A54 8E6C0020 */  lw    $t4, 0x20($s3)
/* 00415A58 918F0000 */  lbu   $t7, ($t4)
/* 00415A5C 2DEE0040 */  sltiu $t6, $t7, 0x40
/* 00415A60 11C00009 */  beqz  $t6, .L00415A88
/* 00415A64 00000000 */   nop   
/* 00415A68 8F898044 */  lw    $t1, %got(D_1000FEFC)($gp)
/* 00415A6C 000F4143 */  sra   $t0, $t7, 5
/* 00415A70 00086880 */  sll   $t5, $t0, 2
/* 00415A74 2529FEFC */  addiu $t1, %lo(D_1000FEFC) # addiu $t1, $t1, -0x104
/* 00415A78 012DC821 */  addu  $t9, $t1, $t5
/* 00415A7C 8F380000 */  lw    $t8, ($t9)
/* 00415A80 01F85804 */  sllv  $t3, $t8, $t7
/* 00415A84 296E0000 */  slti  $t6, $t3, 0
.L00415A88:
/* 00415A88 51C00009 */  beql  $t6, $zero, .L00415AB0
/* 00415A8C 8E440018 */   lw    $a0, 0x18($s2)
.L00415A90:
/* 00415A90 8F9984A8 */  lw    $t9, %call16(expinalter)($gp)
/* 00415A94 8E440018 */  lw    $a0, 0x18($s2)
/* 00415A98 02602825 */  move  $a1, $s3
/* 00415A9C 0320F809 */  jalr  $t9
/* 00415AA0 00000000 */   nop   
/* 00415AA4 1440004B */  bnez  $v0, .L00415BD4
/* 00415AA8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00415AAC 8E440018 */  lw    $a0, 0x18($s2)
.L00415AB0:
/* 00415AB0 24010004 */  li    $at, 4
/* 00415AB4 908C0000 */  lbu   $t4, ($a0)
/* 00415AB8 5581002E */  bnel  $t4, $at, .L00415B74
/* 00415ABC 8FA900C4 */   lw    $t1, 0xc4($sp)
/* 00415AC0 8F9986E0 */  lw    $t9, %call16(has_ilod)($gp)
/* 00415AC4 8E040034 */  lw    $a0, 0x34($s0)
/* 00415AC8 0320F809 */  jalr  $t9
/* 00415ACC 00000000 */   nop   
/* 00415AD0 14400040 */  bnez  $v0, .L00415BD4
/* 00415AD4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00415AD8 8E880038 */  lw    $t0, 0x38($s4)
/* 00415ADC 8F9986E4 */  lw    $t9, %call16(is_incr)($gp)
/* 00415AE0 8D090004 */  lw    $t1, 4($t0)
/* 00415AE4 0320F809 */  jalr  $t9
/* 00415AE8 8D240034 */   lw    $a0, 0x34($t1)
/* 00415AEC 14400039 */  bnez  $v0, .L00415BD4
/* 00415AF0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00415AF4 8FAD00C4 */  lw    $t5, 0xc4($sp)
/* 00415AF8 8DB10000 */  lw    $s1, ($t5)
/* 00415AFC 92390019 */  lbu   $t9, 0x19($s1)
/* 00415B00 13200007 */  beqz  $t9, .L00415B20
/* 00415B04 00000000 */   nop   
/* 00415B08 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 00415B0C 8E2F0014 */  lw    $t7, 0x14($s1)
/* 00415B10 8F180000 */  lw    $t8, ($t8)
/* 00415B14 000F5AC2 */  srl   $t3, $t7, 0xb
/* 00415B18 530B000B */  beql  $t8, $t3, .L00415B48
/* 00415B1C 93A800CB */   lbu   $t0, 0xcb($sp)
.L00415B20:
/* 00415B20 8F8A8A9C */  lw     $t2, %got(doingcopy)($gp)
/* 00415B24 914A0000 */  lbu   $t2, ($t2)
/* 00415B28 55400007 */  bnezl $t2, .L00415B48
/* 00415B2C 93A800CB */   lbu   $t0, 0xcb($sp)
/* 00415B30 8F8E8B6C */  lw     $t6, %got(curproc)($gp)
/* 00415B34 8DCE0000 */  lw    $t6, ($t6)
/* 00415B38 91CC0015 */  lbu   $t4, 0x15($t6)
/* 00415B3C 51800026 */  beql  $t4, $zero, .L00415BD8
/* 00415B40 8E10001C */   lw    $s0, 0x1c($s0)
/* 00415B44 93A800CB */  lbu   $t0, 0xcb($sp)
.L00415B48:
/* 00415B48 55000023 */  bnezl $t0, .L00415BD8
/* 00415B4C 8E10001C */   lw    $s0, 0x1c($s0)
/* 00415B50 8F9986D4 */  lw    $t9, %call16(countvars)($gp)
/* 00415B54 8EA40018 */  lw    $a0, 0x18($s5)
/* 00415B58 0320F809 */  jalr  $t9
/* 00415B5C 00000000 */   nop   
/* 00415B60 2C41000A */  sltiu $at, $v0, 0xa
/* 00415B64 1020001B */  beqz  $at, .L00415BD4
/* 00415B68 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00415B6C 8E440018 */  lw    $a0, 0x18($s2)
/* 00415B70 8FA900C4 */  lw    $t1, 0xc4($sp)
.L00415B74:
/* 00415B74 AD240000 */  sw    $a0, ($t1)
/* 00415B78 92020020 */  lbu   $v0, 0x20($s0)
/* 00415B7C 8E0D0034 */  lw    $t5, 0x34($s0)
/* 00415B80 8FB90084 */  lw    $t9, 0x84($sp)
/* 00415B84 28410004 */  slti  $at, $v0, 4
/* 00415B88 1020000C */  beqz  $at, .L00415BBC
/* 00415B8C AFAD0088 */   sw    $t5, 0x88($sp)
/* 00415B90 17200004 */  bnez  $t9, .L00415BA4
/* 00415B94 8FAB0084 */   lw    $t3, 0x84($sp)
/* 00415B98 000278C0 */  sll   $t7, $v0, 3
/* 00415B9C 10000007 */  b     .L00415BBC
/* 00415BA0 AFAF0084 */   sw    $t7, 0x84($sp)
.L00415BA4:
/* 00415BA4 0002C0C0 */  sll   $t8, $v0, 3
/* 00415BA8 030B082A */  slt   $at, $t8, $t3
/* 00415BAC 50200003 */  beql  $at, $zero, .L00415BBC
/* 00415BB0 AFAB0084 */   sw    $t3, 0x84($sp)
/* 00415BB4 03005825 */  move  $t3, $t8
/* 00415BB8 AFAB0084 */  sw    $t3, 0x84($sp)
.L00415BBC:
/* 00415BBC 8FAE00C4 */  lw    $t6, 0xc4($sp)
/* 00415BC0 240A0001 */  li    $t2, 1
/* 00415BC4 A3AA009F */  sb    $t2, 0x9f($sp)
/* 00415BC8 8DD10000 */  lw    $s1, ($t6)
/* 00415BCC 10000006 */  b     .L00415BE8
/* 00415BD0 92220000 */   lbu   $v0, ($s1)
.L00415BD4:
/* 00415BD4 8E10001C */  lw    $s0, 0x1c($s0)
.L00415BD8:
/* 00415BD8 8FAC00C4 */  lw    $t4, 0xc4($sp)
/* 00415BDC 1600FF64 */  bnez  $s0, .L00415970
/* 00415BE0 8D910000 */   lw    $s1, ($t4)
/* 00415BE4 92220000 */  lbu   $v0, ($s1)
.L00415BE8:
/* 00415BE8 2C480020 */  sltiu $t0, $v0, 0x20
.L00415BEC:
/* 00415BEC 00084823 */  negu  $t1, $t0
/* 00415BF0 3C011200 */  lui   $at, 0x1200
/* 00415BF4 01216824 */  and   $t5, $t1, $at
/* 00415BF8 004DC804 */  sllv  $t9, $t5, $v0
/* 00415BFC 07210003 */  bgez  $t9, .L00415C0C
/* 00415C00 93AF009F */   lbu   $t7, 0x9f($sp)
/* 00415C04 55E0FF52 */  bnezl $t7, .L00415950
/* 00415C08 8E2E0008 */   lw    $t6, 8($s1)
.L00415C0C:
/* 00415C0C 8F998018 */  lw    $t9, %got(func_00414108)($gp)
/* 00415C10 8FB800C0 */  lw    $t8, 0xc0($sp)
/* 00415C14 02202025 */  move  $a0, $s1
/* 00415C18 27394108 */  addiu $t9, %lo(func_00414108) # addiu $t9, $t9, 0x4108
/* 00415C1C 8FA50088 */  lw    $a1, 0x88($sp)
/* 00415C20 27A700A0 */  addiu $a3, $sp, 0xa0
/* 00415C24 8FA200BC */  lw    $v0, 0xbc($sp)
/* 00415C28 0320F809 */  jalr  $t9
/* 00415C2C 8F060018 */   lw    $a2, 0x18($t8)
/* 00415C30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415C34 8FAA0084 */  lw    $t2, 0x84($sp)
/* 00415C38 8F9E8B20 */  lw     $fp, %got(outofmem)($gp)
/* 00415C3C 93CB0000 */  lbu   $t3, ($fp)
/* 00415C40 556005DF */  bnezl $t3, .L004173C0
/* 00415C44 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00415C48 11400013 */  beqz  $t2, .L00415C98
/* 00415C4C 8FA400A0 */   lw    $a0, 0xa0($sp)
/* 00415C50 8F998018 */  lw    $t9, %got(func_004150E4)($gp)
/* 00415C54 8FAE00C0 */  lw    $t6, 0xc0($sp)
/* 00415C58 01402825 */  move  $a1, $t2
/* 00415C5C 273950E4 */  addiu $t9, %lo(func_004150E4) # addiu $t9, $t9, 0x50e4
/* 00415C60 8FA200BC */  lw    $v0, 0xbc($sp)
/* 00415C64 0320F809 */  jalr  $t9
/* 00415C68 91C60001 */   lbu   $a2, 1($t6)
/* 00415C6C 93CC0000 */  lbu   $t4, ($fp)
/* 00415C70 8FA300C0 */  lw    $v1, 0xc0($sp)
/* 00415C74 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415C78 158005D0 */  bnez  $t4, .L004173BC
/* 00415C7C AC620030 */   sw    $v0, 0x30($v1)
/* 00415C80 AFA200A0 */  sw    $v0, 0xa0($sp)
/* 00415C84 8C4D0014 */  lw    $t5, 0x14($v0)
/* 00415C88 8FB900C4 */  lw    $t9, 0xc4($sp)
/* 00415C8C AF2D0000 */  sw    $t5, ($t9)
/* 00415C90 10000014 */  b     .L00415CE4
/* 00415C94 8FB000A0 */   lw    $s0, 0xa0($sp)
.L00415C98:
/* 00415C98 8FA200C0 */  lw    $v0, 0xc0($sp)
/* 00415C9C 8FB000A0 */  lw    $s0, 0xa0($sp)
/* 00415CA0 904F0000 */  lbu   $t7, ($v0)
/* 00415CA4 AC500030 */  sw    $s0, 0x30($v0)
/* 00415CA8 92180000 */  lbu   $t8, ($s0)
/* 00415CAC 55F8000E */  bnel  $t7, $t8, .L00415CE8
/* 00415CB0 8FA300C0 */   lw    $v1, 0xc0($sp)
/* 00415CB4 920B002E */  lbu   $t3, 0x2e($s0)
/* 00415CB8 316A0007 */  andi  $t2, $t3, 7
/* 00415CBC 56CA000A */  bnel  $s6, $t2, .L00415CE8
/* 00415CC0 8FA300C0 */   lw    $v1, 0xc0($sp)
/* 00415CC4 904E0020 */  lbu   $t6, 0x20($v0)
/* 00415CC8 920C0020 */  lbu   $t4, 0x20($s0)
/* 00415CCC 51CC0006 */  beql  $t6, $t4, .L00415CE8
/* 00415CD0 8FA300C0 */   lw    $v1, 0xc0($sp)
/* 00415CD4 90480001 */  lbu   $t0, 1($v0)
/* 00415CD8 A2080001 */  sb    $t0, 1($s0)
/* 00415CDC 90490020 */  lbu   $t1, 0x20($v0)
/* 00415CE0 A2090020 */  sb    $t1, 0x20($s0)
.L00415CE4:
/* 00415CE4 8FA300C0 */  lw    $v1, 0xc0($sp)
.L00415CE8:
/* 00415CE8 8F998018 */  lw    $t9, %got(func_00413510)($gp)
/* 00415CEC 02002025 */  move  $a0, $s0
/* 00415CF0 94650006 */  lhu   $a1, 6($v1)
/* 00415CF4 27393510 */  addiu $t9, %lo(func_00413510) # addiu $t9, $t9, 0x3510
/* 00415CF8 8FA200BC */  lw    $v0, 0xbc($sp)
/* 00415CFC 0320F809 */  jalr  $t9
/* 00415D00 24A5FFFF */   addiu $a1, $a1, -1
/* 00415D04 920D0000 */  lbu   $t5, ($s0)
/* 00415D08 3C016480 */  lui   $at, 0x6480
/* 00415D0C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415D10 2DB90020 */  sltiu $t9, $t5, 0x20
/* 00415D14 00197823 */  negu  $t7, $t9
/* 00415D18 01E1C024 */  and   $t8, $t7, $at
/* 00415D1C 01B85804 */  sllv  $t3, $t8, $t5
/* 00415D20 0560000F */  bltz  $t3, .L00415D60
/* 00415D24 00000000 */   nop   
/* 00415D28 8F998018 */  lw    $t9, %got(func_0041550C)($gp)
/* 00415D2C 02002025 */  move  $a0, $s0
/* 00415D30 27A500A4 */  addiu $a1, $sp, 0xa4
/* 00415D34 2739550C */  addiu $t9, %lo(func_0041550C) # addiu $t9, $t9, 0x550c
/* 00415D38 00003025 */  move  $a2, $zero
/* 00415D3C 0320F809 */  jalr  $t9
/* 00415D40 8FA200BC */   lw    $v0, 0xbc($sp)
/* 00415D44 8FAA00A4 */  lw    $t2, 0xa4($sp)
/* 00415D48 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415D4C 8FAE00C4 */  lw    $t6, 0xc4($sp)
/* 00415D50 5140059B */  beql  $t2, $zero, .L004173C0
/* 00415D54 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00415D58 10000598 */  b     .L004173BC
/* 00415D5C ADCA0000 */   sw    $t2, ($t6)
.L00415D60:
/* 00415D60 8F998634 */  lw    $t9, %call16(fixcorr)($gp)
/* 00415D64 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 00415D68 0320F809 */  jalr  $t9
/* 00415D6C 00000000 */   nop   
/* 00415D70 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415D74 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 00415D78 02002825 */  move  $a1, $s0
/* 00415D7C 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 00415D80 0320F809 */  jalr  $t9
/* 00415D84 00000000 */   nop   
/* 00415D88 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415D8C 8FA800C0 */  lw    $t0, 0xc0($sp)
/* 00415D90 24010005 */  li    $at, 5
/* 00415D94 8F9789D4 */  lw     $s7, %got(constprop)($gp)
/* 00415D98 02002025 */  move  $a0, $s0
/* 00415D9C 8EEC0000 */  lw    $t4, ($s7)
/* 00415DA0 AD0C0018 */  sw    $t4, 0x18($t0)
/* 00415DA4 92090000 */  lbu   $t1, ($s0)
/* 00415DA8 55210585 */  bnel  $t1, $at, .L004173C0
/* 00415DAC 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00415DB0 8F998018 */  lw    $t9, %got(func_0041550C)($gp)
/* 00415DB4 27A500A4 */  addiu $a1, $sp, 0xa4
/* 00415DB8 00003025 */  move  $a2, $zero
/* 00415DBC 2739550C */  addiu $t9, %lo(func_0041550C) # addiu $t9, $t9, 0x550c
/* 00415DC0 0320F809 */  jalr  $t9
/* 00415DC4 8FA200BC */   lw    $v0, 0xbc($sp)
/* 00415DC8 1000057C */  b     .L004173BC
/* 00415DCC 8FBC003C */   lw    $gp, 0x3c($sp)
.L00415DD0:
/* 00415DD0 8E94001C */  lw    $s4, 0x1c($s4)
.L00415DD4:
/* 00415DD4 8FA700C0 */  lw    $a3, 0xc0($sp)
/* 00415DD8 5680FE2E */  bnezl $s4, .L00415694
/* 00415DDC 8CF80014 */   lw    $t8, 0x14($a3)
/* 00415DE0 10000577 */  b     .L004173C0
/* 00415DE4 8FBF0044 */   lw    $ra, 0x44($sp)
.L00415DE8:
/* 00415DE8 8F8289CC */  lw     $v0, %got(nocopy)($gp)
/* 00415DEC 8C420000 */  lw    $v0, ($v0)
/* 00415DF0 50430573 */  beql  $v0, $v1, .L004173C0
/* 00415DF4 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00415DF8 8CE70030 */  lw    $a3, 0x30($a3)
.L00415DFC:
/* 00415DFC 3C011200 */  lui   $at, 0x1200
/* 00415E00 90F90000 */  lbu   $t9, ($a3)
/* 00415E04 2F2F0020 */  sltiu $t7, $t9, 0x20
/* 00415E08 000FC023 */  negu  $t8, $t7
/* 00415E0C 03016824 */  and   $t5, $t8, $at
/* 00415E10 032D5804 */  sllv  $t3, $t5, $t9
/* 00415E14 05630007 */  bgezl $t3, .L00415E34
/* 00415E18 A3A0009F */   sb    $zero, 0x9f($sp)
/* 00415E1C 8CEA0030 */  lw    $t2, 0x30($a3)
/* 00415E20 004A7026 */  xor   $t6, $v0, $t2
/* 00415E24 000E702B */  sltu  $t6, $zero, $t6
/* 00415E28 10000002 */  b     .L00415E34
/* 00415E2C A3AE009F */   sb    $t6, 0x9f($sp)
/* 00415E30 A3A0009F */  sb    $zero, 0x9f($sp)
.L00415E34:
/* 00415E34 93AC009F */  lbu   $t4, 0x9f($sp)
/* 00415E38 5580FFF0 */  bnezl $t4, .L00415DFC
/* 00415E3C 8CE70030 */   lw    $a3, 0x30($a3)
/* 00415E40 8CE80014 */  lw    $t0, 0x14($a3)
/* 00415E44 8FA900C4 */  lw    $t1, 0xc4($sp)
/* 00415E48 AD280000 */  sw    $t0, ($t1)
/* 00415E4C 1000055C */  b     .L004173C0
/* 00415E50 8FBF0044 */   lw    $ra, 0x44($sp)
.L00415E54:
/* 00415E54 90E60020 */  lbu   $a2, 0x20($a3)
/* 00415E58 27A500B4 */  addiu $a1, $sp, 0xb4
/* 00415E5C 38C6005B */  xori  $a2, $a2, 0x5b
/* 00415E60 2CC60001 */  sltiu $a2, $a2, 1
/* 00415E64 10C00005 */  beqz  $a2, .L00415E7C
/* 00415E68 00000000 */   nop   
/* 00415E6C 8CEF0028 */  lw    $t7, 0x28($a3)
/* 00415E70 91E60000 */  lbu   $a2, ($t7)
/* 00415E74 38C60004 */  xori  $a2, $a2, 4
/* 00415E78 2CC60001 */  sltiu $a2, $a2, 1
.L00415E7C:
/* 00415E7C 8F998018 */  lw    $t9, %got(func_0041550C)($gp)
/* 00415E80 8CE40024 */  lw    $a0, 0x24($a3)
/* 00415E84 8FA200BC */  lw    $v0, 0xbc($sp)
/* 00415E88 2739550C */  addiu $t9, %lo(func_0041550C) # addiu $t9, $t9, 0x550c
/* 00415E8C 0320F809 */  jalr  $t9
/* 00415E90 AFA700C0 */   sw    $a3, 0xc0($sp)
/* 00415E94 8FB400B4 */  lw    $s4, 0xb4($sp)
/* 00415E98 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415E9C 5280000C */  beql  $s4, $zero, .L00415ED0
/* 00415EA0 8FA700C0 */   lw    $a3, 0xc0($sp)
/* 00415EA4 92980000 */  lbu   $t8, ($s4)
/* 00415EA8 24010004 */  li    $at, 4
/* 00415EAC 57010008 */  bnel  $t8, $at, .L00415ED0
/* 00415EB0 8FA700C0 */   lw    $a3, 0xc0($sp)
/* 00415EB4 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00415EB8 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 00415EBC 96850002 */  lhu   $a1, 2($s4)
/* 00415EC0 0320F809 */  jalr  $t9
/* 00415EC4 00000000 */   nop   
/* 00415EC8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415ECC 8FA700C0 */  lw    $a3, 0xc0($sp)
.L00415ED0:
/* 00415ED0 24160003 */  li    $s6, 3
/* 00415ED4 8F998DBC */  lw     $t9, %got(optab)($gp)
/* 00415ED8 90F00020 */  lbu   $s0, 0x20($a3)
/* 00415EDC 02160019 */  multu $s0, $s6
/* 00415EE0 3A06005B */  xori  $a2, $s0, 0x5b
/* 00415EE4 2CC60001 */  sltiu $a2, $a2, 1
/* 00415EE8 00006812 */  mflo  $t5
/* 00415EEC 01B95821 */  addu  $t3, $t5, $t9
/* 00415EF0 916A0002 */  lbu   $t2, 2($t3)
/* 00415EF4 1140030C */  beqz  $t2, .L00416B28
/* 00415EF8 00000000 */   nop   
/* 00415EFC 10C00005 */  beqz  $a2, .L00415F14
/* 00415F00 00000000 */   nop   
/* 00415F04 8CEE0024 */  lw    $t6, 0x24($a3)
/* 00415F08 91C60000 */  lbu   $a2, ($t6)
/* 00415F0C 38C60004 */  xori  $a2, $a2, 4
/* 00415F10 2CC60001 */  sltiu $a2, $a2, 1
.L00415F14:
/* 00415F14 8F998018 */  lw    $t9, %got(func_0041550C)($gp)
/* 00415F18 8CE40028 */  lw    $a0, 0x28($a3)
/* 00415F1C 27A500B0 */  addiu $a1, $sp, 0xb0
/* 00415F20 2739550C */  addiu $t9, %lo(func_0041550C) # addiu $t9, $t9, 0x550c
/* 00415F24 0320F809 */  jalr  $t9
/* 00415F28 8FA200BC */   lw    $v0, 0xbc($sp)
/* 00415F2C 8FB300B0 */  lw    $s3, 0xb0($sp)
/* 00415F30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00415F34 1260000B */  beqz  $s3, .L00415F64
/* 00415F38 00000000 */   nop   
/* 00415F3C 926C0000 */  lbu   $t4, ($s3)
/* 00415F40 24010004 */  li    $at, 4
/* 00415F44 15810007 */  bne   $t4, $at, .L00415F64
/* 00415F48 00000000 */   nop   
/* 00415F4C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00415F50 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 00415F54 96650002 */  lhu   $a1, 2($s3)
/* 00415F58 0320F809 */  jalr  $t9
/* 00415F5C 00000000 */   nop   
/* 00415F60 8FBC003C */  lw    $gp, 0x3c($sp)
.L00415F64:
/* 00415F64 8F9E8B20 */  lw     $fp, %got(outofmem)($gp)
/* 00415F68 93C80000 */  lbu   $t0, ($fp)
/* 00415F6C 55000514 */  bnezl $t0, .L004173C0
/* 00415F70 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00415F74 16800003 */  bnez  $s4, .L00415F84
/* 00415F78 8FB200C0 */   lw    $s2, 0xc0($sp)
/* 00415F7C 52600510 */  beql  $s3, $zero, .L004173C0
/* 00415F80 8FBF0044 */   lw    $ra, 0x44($sp)
.L00415F84:
/* 00415F84 92490020 */  lbu   $t1, 0x20($s2)
/* 00415F88 252FFFE0 */  addiu $t7, $t1, -0x20
/* 00415F8C 2DF80040 */  sltiu $t8, $t7, 0x40
/* 00415F90 13000009 */  beqz  $t8, .L00415FB8
/* 00415F94 00000000 */   nop   
/* 00415F98 8F8B8044 */  lw    $t3, %got(D_1000FEE8)($gp)
/* 00415F9C 000F6943 */  sra   $t5, $t7, 5
/* 00415FA0 000DC880 */  sll   $t9, $t5, 2
/* 00415FA4 256BFEE8 */  addiu $t3, %lo(D_1000FEE8) # addiu $t3, $t3, -0x118
/* 00415FA8 01795021 */  addu  $t2, $t3, $t9
/* 00415FAC 8D4E0000 */  lw    $t6, ($t2)
/* 00415FB0 01EE6004 */  sllv  $t4, $t6, $t7
/* 00415FB4 29980000 */  slti  $t8, $t4, 0
.L00415FB8:
/* 00415FB8 53000006 */  beql  $t8, $zero, .L00415FD4
/* 00415FBC 924B0021 */   lbu   $t3, 0x21($s2)
/* 00415FC0 8E490038 */  lw    $t1, 0x38($s2)
/* 00415FC4 AD200000 */  sw    $zero, ($t1)
/* 00415FC8 8E4D003C */  lw    $t5, 0x3c($s2)
/* 00415FCC ADA00000 */  sw    $zero, ($t5)
/* 00415FD0 924B0021 */  lbu   $t3, 0x21($s2)
.L00415FD4:
/* 00415FD4 8E550014 */  lw    $s5, 0x14($s2)
/* 00415FD8 5160000B */  beql  $t3, $zero, .L00416008
/* 00415FDC 924A0022 */   lbu   $t2, 0x22($s2)
/* 00415FE0 8FB900BC */  lw    $t9, 0xbc($sp)
/* 00415FE4 96A50002 */  lhu   $a1, 2($s5)
/* 00415FE8 8F24FFFC */  lw    $a0, -4($t9)
/* 00415FEC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00415FF0 24840104 */  addiu $a0, $a0, 0x104
/* 00415FF4 0320F809 */  jalr  $t9
/* 00415FF8 00000000 */   nop   
/* 00415FFC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416000 8FB200C0 */  lw    $s2, 0xc0($sp)
/* 00416004 924A0022 */  lbu   $t2, 0x22($s2)
.L00416008:
/* 00416008 8FAE00BC */  lw    $t6, 0xbc($sp)
/* 0041600C 51400009 */  beql  $t2, $zero, .L00416034
/* 00416010 8E510024 */   lw    $s1, 0x24($s2)
/* 00416014 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00416018 8DC4FFFC */  lw    $a0, -4($t6)
/* 0041601C 96A50002 */  lhu   $a1, 2($s5)
/* 00416020 0320F809 */  jalr  $t9
/* 00416024 24840114 */   addiu $a0, $a0, 0x114
/* 00416028 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041602C 8FB200C0 */  lw    $s2, 0xc0($sp)
/* 00416030 8E510024 */  lw    $s1, 0x24($s2)
.L00416034:
/* 00416034 3C016000 */  lui   $at, 0x6000
/* 00416038 922F0000 */  lbu   $t7, ($s1)
/* 0041603C 2DEC0020 */  sltiu $t4, $t7, 0x20
/* 00416040 000C4023 */  negu  $t0, $t4
/* 00416044 0101C024 */  and   $t8, $t0, $at
/* 00416048 01F84804 */  sllv  $t1, $t8, $t7
/* 0041604C 05230085 */  bgezl $t1, .L00416264
/* 00416050 92430000 */   lbu   $v1, ($s2)
/* 00416054 8E470028 */  lw    $a3, 0x28($s2)
/* 00416058 3C016000 */  lui   $at, 0x6000
/* 0041605C 90ED0000 */  lbu   $t5, ($a3)
/* 00416060 2DAB0020 */  sltiu $t3, $t5, 0x20
/* 00416064 000BC823 */  negu  $t9, $t3
/* 00416068 03215024 */  and   $t2, $t9, $at
/* 0041606C 01AA7004 */  sllv  $t6, $t2, $t5
/* 00416070 05C3007C */  bgezl $t6, .L00416264
/* 00416074 92430000 */   lbu   $v1, ($s2)
/* 00416078 92440001 */  lbu   $a0, 1($s2)
/* 0041607C 3C018A80 */  lui   $at, 0x8a80
/* 00416080 2C8C0020 */  sltiu $t4, $a0, 0x20
/* 00416084 000C4023 */  negu  $t0, $t4
/* 00416088 0101C024 */  and   $t8, $t0, $at
/* 0041608C 00987804 */  sllv  $t7, $t8, $a0
/* 00416090 05E30074 */  bgezl $t7, .L00416264
/* 00416094 92430000 */   lbu   $v1, ($s2)
/* 00416098 92500020 */  lbu   $s0, 0x20($s2)
/* 0041609C 24010041 */  li    $at, 65
/* 004160A0 1601001B */  bne   $s0, $at, .L00416110
/* 004160A4 00000000 */   nop   
/* 004160A8 8F9983DC */  lw    $t9, %call16(ixaovfw)($gp)
/* 004160AC 02402025 */  move  $a0, $s2
/* 004160B0 02202825 */  move  $a1, $s1
/* 004160B4 0320F809 */  jalr  $t9
/* 004160B8 00E03025 */   move  $a2, $a3
/* 004160BC 10400007 */  beqz  $v0, .L004160DC
/* 004160C0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004160C4 8F998618 */  lw    $t9, %call16(ovfwwarning)($gp)
/* 004160C8 24040041 */  li    $a0, 65
/* 004160CC 0320F809 */  jalr  $t9
/* 004160D0 00000000 */   nop   
/* 004160D4 1000000C */  b     .L00416108
/* 004160D8 8FBC003C */   lw    $gp, 0x3c($sp)
.L004160DC:
/* 004160DC 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 004160E0 8F9983E8 */  lw    $t9, %call16(ixafold)($gp)
/* 004160E4 8C850024 */  lw    $a1, 0x24($a0)
/* 004160E8 8C860028 */  lw    $a2, 0x28($a0)
/* 004160EC 0320F809 */  jalr  $t9
/* 004160F0 00803825 */   move  $a3, $a0
/* 004160F4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004160F8 8FAB00C0 */  lw    $t3, 0xc0($sp)
/* 004160FC 8F9789D4 */  lw     $s7, %got(constprop)($gp)
/* 00416100 8EE90000 */  lw    $t1, ($s7)
/* 00416104 AD690018 */  sw    $t1, 0x18($t3)
.L00416108:
/* 00416108 10000055 */  b     .L00416260
/* 0041610C 8FB200C0 */   lw    $s2, 0xc0($sp)
.L00416110:
/* 00416110 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 00416114 02002825 */  move  $a1, $s0
/* 00416118 02203025 */  move  $a2, $s1
/* 0041611C 0320F809 */  jalr  $t9
/* 00416120 00000000 */   nop   
/* 00416124 1040000C */  beqz  $v0, .L00416158
/* 00416128 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041612C 8FB900C0 */  lw    $t9, 0xc0($sp)
/* 00416130 932A003E */  lbu   $t2, 0x3e($t9)
/* 00416134 11400006 */  beqz  $t2, .L00416150
/* 00416138 00000000 */   nop   
/* 0041613C 93240020 */  lbu   $a0, 0x20($t9)
/* 00416140 8F998618 */  lw    $t9, %call16(ovfwwarning)($gp)
/* 00416144 0320F809 */  jalr  $t9
/* 00416148 00000000 */   nop   
/* 0041614C 8FBC003C */  lw    $gp, 0x3c($sp)
.L00416150:
/* 00416150 10000043 */  b     .L00416260
/* 00416154 8FB200C0 */   lw    $s2, 0xc0($sp)
.L00416158:
/* 00416158 8FAD00C0 */  lw    $t5, 0xc0($sp)
/* 0041615C 24040001 */  li    $a0, 1
/* 00416160 8DB10024 */  lw    $s1, 0x24($t5)
/* 00416164 01A01825 */  move  $v1, $t5
/* 00416168 92220000 */  lbu   $v0, ($s1)
/* 0041616C 5482000E */  bnel  $a0, $v0, .L004161A8
/* 00416170 8C670028 */   lw    $a3, 0x28($v1)
/* 00416174 8DA70028 */  lw    $a3, 0x28($t5)
/* 00416178 90EE0000 */  lbu   $t6, ($a3)
/* 0041617C 548E000A */  bnel  $a0, $t6, .L004161A8
/* 00416180 8C670028 */   lw    $a3, 0x28($v1)
/* 00416184 8CEC0030 */  lw    $t4, 0x30($a3)
/* 00416188 8E380030 */  lw    $t8, 0x30($s1)
/* 0041618C 000C42C2 */  srl   $t0, $t4, 0xb
/* 00416190 00187AC2 */  srl   $t7, $t8, 0xb
/* 00416194 510F0004 */  beql  $t0, $t7, .L004161A8
/* 00416198 8C670028 */   lw    $a3, 0x28($v1)
/* 0041619C 10000030 */  b     .L00416260
/* 004161A0 01A09025 */   move  $s2, $t5
/* 004161A4 8C670028 */  lw    $a3, 0x28($v1)
.L004161A8:
/* 004161A8 90E90000 */  lbu   $t1, ($a3)
/* 004161AC 51220012 */  beql  $t1, $v0, .L004161F8
/* 004161B0 90700020 */   lbu   $s0, 0x20($v1)
/* 004161B4 906B0020 */  lbu   $t3, 0x20($v1)
/* 004161B8 2D6A0080 */  sltiu $t2, $t3, 0x80
/* 004161BC 11400009 */  beqz  $t2, .L004161E4
/* 004161C0 00000000 */   nop   
/* 004161C4 8F8C8044 */  lw    $t4, %got(D_1000FED8)($gp)
/* 004161C8 000BC943 */  sra   $t9, $t3, 5
/* 004161CC 00197080 */  sll   $t6, $t9, 2
/* 004161D0 258CFED8 */  addiu $t4, %lo(D_1000FED8) # addiu $t4, $t4, -0x128
/* 004161D4 018EC021 */  addu  $t8, $t4, $t6
/* 004161D8 8F080000 */  lw    $t0, ($t8)
/* 004161DC 01687804 */  sllv  $t7, $t0, $t3
/* 004161E0 29EA0000 */  slti  $t2, $t7, 0
.L004161E4:
/* 004161E4 55400004 */  bnezl $t2, .L004161F8
/* 004161E8 90700020 */   lbu   $s0, 0x20($v1)
/* 004161EC 1000001C */  b     .L00416260
/* 004161F0 8FB200C0 */   lw    $s2, 0xc0($sp)
/* 004161F4 90700020 */  lbu   $s0, 0x20($v1)
.L004161F8:
/* 004161F8 2E090060 */  sltiu $t1, $s0, 0x60
/* 004161FC 11200009 */  beqz  $t1, .L00416224
/* 00416200 02002025 */   move  $a0, $s0
/* 00416204 8F8E8044 */  lw    $t6, %got(D_1000FECC)($gp)
/* 00416208 0010C943 */  sra   $t9, $s0, 5
/* 0041620C 00196080 */  sll   $t4, $t9, 2
/* 00416210 25CEFECC */  addiu $t6, %lo(D_1000FECC) # addiu $t6, $t6, -0x134
/* 00416214 01CCC021 */  addu  $t8, $t6, $t4
/* 00416218 8F080000 */  lw    $t0, ($t8)
/* 0041621C 02085804 */  sllv  $t3, $t0, $s0
/* 00416220 29690000 */  slti  $t1, $t3, 0
.L00416224:
/* 00416224 11200003 */  beqz  $t1, .L00416234
/* 00416228 00000000 */   nop   
/* 0041622C 1000000C */  b     .L00416260
/* 00416230 8FB200C0 */   lw    $s2, 0xc0($sp)
.L00416234:
/* 00416234 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 00416238 90650001 */  lbu   $a1, 1($v1)
/* 0041623C 02203025 */  move  $a2, $s1
/* 00416240 0320F809 */  jalr  $t9
/* 00416244 AFA30010 */   sw    $v1, 0x10($sp)
/* 00416248 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041624C 8FAA00C0 */  lw    $t2, 0xc0($sp)
/* 00416250 8F9789D4 */  lw     $s7, %got(constprop)($gp)
/* 00416254 8EED0000 */  lw    $t5, ($s7)
/* 00416258 AD4D0018 */  sw    $t5, 0x18($t2)
/* 0041625C 8FB200C0 */  lw    $s2, 0xc0($sp)
.L00416260:
/* 00416260 92430000 */  lbu   $v1, ($s2)
.L00416264:
/* 00416264 24010004 */  li    $at, 4
/* 00416268 8F9789D4 */  lw     $s7, %got(constprop)($gp)
/* 0041626C 54610046 */  bnel  $v1, $at, .L00416388
/* 00416270 2C6E0020 */   sltiu $t6, $v1, 0x20
/* 00416274 92590020 */  lbu   $t9, 0x20($s2)
/* 00416278 2401005B */  li    $at, 91
/* 0041627C 57210042 */  bnel  $t9, $at, .L00416388
/* 00416280 2C6E0020 */   sltiu $t6, $v1, 0x20
/* 00416284 924E0001 */  lbu   $t6, 1($s2)
/* 00416288 3C01000C */  lui   $at, 0xc
/* 0041628C 2DCC0020 */  sltiu $t4, $t6, 0x20
/* 00416290 000CC023 */  negu  $t8, $t4
/* 00416294 03014024 */  and   $t0, $t8, $at
/* 00416298 01C85804 */  sllv  $t3, $t0, $t6
/* 0041629C 0563003A */  bgezl $t3, .L00416388
/* 004162A0 2C6E0020 */   sltiu $t6, $v1, 0x20
/* 004162A4 8F828B4C */  lw     $v0, %got(strictieee)($gp)
/* 004162A8 90420000 */  lbu   $v0, ($v0)
/* 004162AC 1440001B */  bnez  $v0, .L0041631C
/* 004162B0 00000000 */   nop   
/* 004162B4 8E510024 */  lw    $s1, 0x24($s2)
/* 004162B8 24160002 */  li    $s6, 2
/* 004162BC 922F0000 */  lbu   $t7, ($s1)
/* 004162C0 16CF0016 */  bne   $s6, $t7, .L0041631C
/* 004162C4 00000000 */   nop   
/* 004162C8 8E29002C */  lw    $t1, 0x2c($s1)
/* 004162CC 15200013 */  bnez  $t1, .L0041631C
/* 004162D0 00000000 */   nop   
/* 004162D4 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 004162D8 8FAD00BC */  lw    $t5, 0xbc($sp)
/* 004162DC 8E440028 */  lw    $a0, 0x28($s2)
/* 004162E0 0320F809 */  jalr  $t9
/* 004162E4 8DA5FFFC */   lw    $a1, -4($t5)
/* 004162E8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004162EC 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 004162F0 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 004162F4 8C850024 */  lw    $a1, 0x24($a0)
/* 004162F8 0320F809 */  jalr  $t9
/* 004162FC 00000000 */   nop   
/* 00416300 8FA200C0 */  lw    $v0, 0xc0($sp)
/* 00416304 8EEA0000 */  lw    $t2, ($s7)
/* 00416308 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041630C 8FB200C0 */  lw    $s2, 0xc0($sp)
/* 00416310 90430000 */  lbu   $v1, ($v0)
/* 00416314 1000001B */  b     .L00416384
/* 00416318 AC4A0018 */   sw    $t2, 0x18($v0)
.L0041631C:
/* 0041631C 14400019 */  bnez  $v0, .L00416384
/* 00416320 24160002 */   li    $s6, 2
/* 00416324 8E470028 */  lw    $a3, 0x28($s2)
/* 00416328 90F90000 */  lbu   $t9, ($a3)
/* 0041632C 56D90016 */  bnel  $s6, $t9, .L00416388
/* 00416330 2C6E0020 */   sltiu $t6, $v1, 0x20
/* 00416334 8CEC002C */  lw    $t4, 0x2c($a3)
/* 00416338 55800013 */  bnezl $t4, .L00416388
/* 0041633C 2C6E0020 */   sltiu $t6, $v1, 0x20
/* 00416340 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 00416344 8FB800BC */  lw    $t8, 0xbc($sp)
/* 00416348 8E440024 */  lw    $a0, 0x24($s2)
/* 0041634C 0320F809 */  jalr  $t9
/* 00416350 8F05FFFC */   lw    $a1, -4($t8)
/* 00416354 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416358 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 0041635C 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 00416360 8C850028 */  lw    $a1, 0x28($a0)
/* 00416364 0320F809 */  jalr  $t9
/* 00416368 00000000 */   nop   
/* 0041636C 8FA200C0 */  lw    $v0, 0xc0($sp)
/* 00416370 8EE80000 */  lw    $t0, ($s7)
/* 00416374 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416378 8FB200C0 */  lw    $s2, 0xc0($sp)
/* 0041637C 90430000 */  lbu   $v1, ($v0)
/* 00416380 AC480018 */  sw    $t0, 0x18($v0)
.L00416384:
/* 00416384 2C6E0020 */  sltiu $t6, $v1, 0x20
.L00416388:
/* 00416388 000E5823 */  negu  $t3, $t6
/* 0041638C 3C016000 */  lui   $at, 0x6000
/* 00416390 01617824 */  and   $t7, $t3, $at
/* 00416394 006F4804 */  sllv  $t1, $t7, $v1
/* 00416398 05210056 */  bgez  $t1, .L004164F4
/* 0041639C 24160002 */   li    $s6, 2
/* 004163A0 306200FF */  andi  $v0, $v1, 0xff
/* 004163A4 244DFFFF */  addiu $t5, $v0, -1
/* 004163A8 2DA10002 */  sltiu $at, $t5, 2
/* 004163AC 10200037 */  beqz  $at, .L0041648C
/* 004163B0 24040001 */   li    $a0, 1
/* 004163B4 8F818044 */  lw    $at, %got(jtbl_1000A664)($gp)
/* 004163B8 000D6880 */  sll   $t5, $t5, 2
/* 004163BC 002D0821 */  addu  $at, $at, $t5
/* 004163C0 8C2DA664 */  lw    $t5, %lo(jtbl_1000A664)($at)
/* 004163C4 01BC6821 */  addu  $t5, $t5, $gp
/* 004163C8 01A00008 */  jr    $t5
/* 004163CC 00000000 */   nop   
.L004163D0:
/* 004163D0 8E44002C */  lw    $a0, 0x2c($s2)
/* 004163D4 8F99833C */  lw    $t9, %call16(isldaihash)($gp)
/* 004163D8 8E460020 */  lw    $a2, 0x20($s2)
/* 004163DC AFA40000 */  sw    $a0, ($sp)
/* 004163E0 8E450030 */  lw    $a1, 0x30($s2)
/* 004163E4 0320F809 */  jalr  $t9
/* 004163E8 AFA50004 */   sw    $a1, 4($sp)
/* 004163EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004163F0 1000002E */  b     .L004164AC
/* 004163F4 00402025 */   move  $a0, $v0
.L004163F8:
/* 004163F8 92440001 */  lbu   $a0, 1($s2)
/* 004163FC 3C01BAA0 */  lui   $at, 0xbaa0
/* 00416400 2C8C0020 */  sltiu $t4, $a0, 0x20
/* 00416404 000CC023 */  negu  $t8, $t4
/* 00416408 03014024 */  and   $t0, $t8, $at
/* 0041640C 00887004 */  sllv  $t6, $t0, $a0
/* 00416410 05C10008 */  bgez  $t6, .L00416434
/* 00416414 2C8B0020 */   sltiu $t3, $a0, 0x20
/* 00416418 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 0041641C 8E440020 */  lw    $a0, 0x20($s2)
/* 00416420 0320F809 */  jalr  $t9
/* 00416424 00000000 */   nop   
/* 00416428 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041642C 1000001F */  b     .L004164AC
/* 00416430 00402025 */   move  $a0, $v0
.L00416434:
/* 00416434 000B7823 */  negu  $t7, $t3
/* 00416438 3C010500 */  lui   $at, 0x500
/* 0041643C 01E14824 */  and   $t1, $t7, $at
/* 00416440 00896804 */  sllv  $t5, $t1, $a0
/* 00416444 05A30009 */  bgezl $t5, .L0041646C
/* 00416448 8E440020 */   lw    $a0, 0x20($s2)
/* 0041644C 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 00416450 8E440024 */  lw    $a0, 0x24($s2)
/* 00416454 0320F809 */  jalr  $t9
/* 00416458 00000000 */   nop   
/* 0041645C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416460 10000012 */  b     .L004164AC
/* 00416464 00402025 */   move  $a0, $v0
/* 00416468 8E440020 */  lw    $a0, 0x20($s2)
.L0041646C:
/* 0041646C 8F998334 */  lw    $t9, %call16(realihash)($gp)
/* 00416470 AFA40000 */  sw    $a0, ($sp)
/* 00416474 8E450024 */  lw    $a1, 0x24($s2)
/* 00416478 0320F809 */  jalr  $t9
/* 0041647C AFA50004 */   sw    $a1, 4($sp)
/* 00416480 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416484 10000009 */  b     .L004164AC
/* 00416488 00402025 */   move  $a0, $v0
.L0041648C:
/* 0041648C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00416490 8F868044 */  lw    $a2, %got(RO_1000A658)($gp)
/* 00416494 240504F0 */  li    $a1, 1264
/* 00416498 2407000A */  li    $a3, 10
/* 0041649C 0320F809 */  jalr  $t9
/* 004164A0 24C6A658 */   addiu $a2, %lo(RO_1000A658) # addiu $a2, $a2, -0x59a8
/* 004164A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004164A8 8FA40098 */  lw    $a0, 0x98($sp)
.L004164AC:
/* 004164AC 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 004164B0 8FA500C0 */  lw    $a1, 0xc0($sp)
/* 004164B4 00003025 */  move  $a2, $zero
/* 004164B8 0320F809 */  jalr  $t9
/* 004164BC 00003825 */   move  $a3, $zero
/* 004164C0 8FAC00C4 */  lw    $t4, 0xc4($sp)
/* 004164C4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004164C8 AD820000 */  sw    $v0, ($t4)
/* 004164CC 93D80000 */  lbu   $t8, ($fp)
/* 004164D0 570003BB */  bnezl $t8, .L004173C0
/* 004164D4 8FBF0044 */   lw    $ra, 0x44($sp)
/* 004164D8 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 004164DC 8FA800BC */  lw    $t0, 0xbc($sp)
/* 004164E0 02A02025 */  move  $a0, $s5
/* 004164E4 0320F809 */  jalr  $t9
/* 004164E8 8D05FFFC */   lw    $a1, -4($t0)
/* 004164EC 100003B3 */  b     .L004173BC
/* 004164F0 8FBC003C */   lw    $gp, 0x3c($sp)
.L004164F4:
/* 004164F4 24010004 */  li    $at, 4
/* 004164F8 14610052 */  bne   $v1, $at, .L00416644
/* 004164FC 92500020 */   lbu   $s0, 0x20($s2)
/* 00416500 2401005F */  li    $at, 95
/* 00416504 1601004F */  bne   $s0, $at, .L00416644
/* 00416508 00000000 */   nop   
/* 0041650C 8E470028 */  lw    $a3, 0x28($s2)
/* 00416510 90EE0000 */  lbu   $t6, ($a3)
/* 00416514 56CE0025 */  bnel  $s6, $t6, .L004165AC
/* 00416518 8E510024 */   lw    $s1, 0x24($s2)
/* 0041651C 8CEB0020 */  lw    $t3, 0x20($a3)
/* 00416520 55600022 */  bnezl $t3, .L004165AC
/* 00416524 8E510024 */   lw    $s1, 0x24($s2)
/* 00416528 52800020 */  beql  $s4, $zero, .L004165AC
/* 0041652C 8E510024 */   lw    $s1, 0x24($s2)
/* 00416530 928F0000 */  lbu   $t7, ($s4)
/* 00416534 24010004 */  li    $at, 4
/* 00416538 55E1001C */  bnel  $t7, $at, .L004165AC
/* 0041653C 8E510024 */   lw    $s1, 0x24($s2)
/* 00416540 92890010 */  lbu   $t1, 0x10($s4)
/* 00416544 252DFFE0 */  addiu $t5, $t1, -0x20
/* 00416548 2DAA0040 */  sltiu $t2, $t5, 0x40
/* 0041654C 11400009 */  beqz  $t2, .L00416574
/* 00416550 8FA900B4 */   lw    $t1, 0xb4($sp)
/* 00416554 8F988044 */  lw    $t8, %got(D_1000FEE8)($gp)
/* 00416558 000DC943 */  sra   $t9, $t5, 5
/* 0041655C 00196080 */  sll   $t4, $t9, 2
/* 00416560 2718FEE8 */  addiu $t8, %lo(D_1000FEE8) # addiu $t8, $t8, -0x118
/* 00416564 030C4021 */  addu  $t0, $t8, $t4
/* 00416568 8D0E0000 */  lw    $t6, ($t0)
/* 0041656C 01AE5804 */  sllv  $t3, $t6, $t5
/* 00416570 296A0000 */  slti  $t2, $t3, 0
.L00416574:
/* 00416574 1140000C */  beqz  $t2, .L004165A8
/* 00416578 8FB900C4 */   lw    $t9, 0xc4($sp)
/* 0041657C AF290000 */  sw    $t1, ($t9)
/* 00416580 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 00416584 8FB800BC */  lw    $t8, 0xbc($sp)
/* 00416588 02A02025 */  move  $a0, $s5
/* 0041658C 0320F809 */  jalr  $t9
/* 00416590 8F05FFFC */   lw    $a1, -4($t8)
/* 00416594 8EEC0000 */  lw    $t4, ($s7)
/* 00416598 8FA800C0 */  lw    $t0, 0xc0($sp)
/* 0041659C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004165A0 10000386 */  b     .L004173BC
/* 004165A4 AD0C0018 */   sw    $t4, 0x18($t0)
.L004165A8:
/* 004165A8 8E510024 */  lw    $s1, 0x24($s2)
.L004165AC:
/* 004165AC 922E0000 */  lbu   $t6, ($s1)
/* 004165B0 16CE0024 */  bne   $s6, $t6, .L00416644
/* 004165B4 00000000 */   nop   
/* 004165B8 8E2D0020 */  lw    $t5, 0x20($s1)
/* 004165BC 15A00021 */  bnez  $t5, .L00416644
/* 004165C0 00000000 */   nop   
/* 004165C4 1260001F */  beqz  $s3, .L00416644
/* 004165C8 00000000 */   nop   
/* 004165CC 926B0000 */  lbu   $t3, ($s3)
/* 004165D0 24010004 */  li    $at, 4
/* 004165D4 1561001B */  bne   $t3, $at, .L00416644
/* 004165D8 00000000 */   nop   
/* 004165DC 926F0010 */  lbu   $t7, 0x10($s3)
/* 004165E0 25EAFFE0 */  addiu $t2, $t7, -0x20
/* 004165E4 2D490040 */  sltiu $t1, $t2, 0x40
/* 004165E8 11200009 */  beqz  $t1, .L00416610
/* 004165EC 8FAF00B0 */   lw    $t7, 0xb0($sp)
/* 004165F0 8F8C8044 */  lw    $t4, %got(D_1000FEE8)($gp)
/* 004165F4 000AC943 */  sra   $t9, $t2, 5
/* 004165F8 0019C080 */  sll   $t8, $t9, 2
/* 004165FC 258CFEE8 */  addiu $t4, %lo(D_1000FEE8) # addiu $t4, $t4, -0x118
/* 00416600 01984021 */  addu  $t0, $t4, $t8
/* 00416604 8D0E0000 */  lw    $t6, ($t0)
/* 00416608 014E6804 */  sllv  $t5, $t6, $t2
/* 0041660C 29A90000 */  slti  $t1, $t5, 0
.L00416610:
/* 00416610 1120000C */  beqz  $t1, .L00416644
/* 00416614 8FB900C4 */   lw    $t9, 0xc4($sp)
/* 00416618 AF2F0000 */  sw    $t7, ($t9)
/* 0041661C 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 00416620 8FAC00BC */  lw    $t4, 0xbc($sp)
/* 00416624 02A02025 */  move  $a0, $s5
/* 00416628 0320F809 */  jalr  $t9
/* 0041662C 8D85FFFC */   lw    $a1, -4($t4)
/* 00416630 8EF80000 */  lw    $t8, ($s7)
/* 00416634 8FA800C0 */  lw    $t0, 0xc0($sp)
/* 00416638 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041663C 1000035F */  b     .L004173BC
/* 00416640 AD180018 */   sw    $t8, 0x18($t0)
.L00416644:
/* 00416644 12800014 */  beqz  $s4, .L00416698
/* 00416648 00000000 */   nop   
/* 0041664C 12600012 */  beqz  $s3, .L00416698
/* 00416650 00000000 */   nop   
/* 00416654 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00416658 02002025 */  move  $a0, $s0
/* 0041665C 02802825 */  move  $a1, $s4
/* 00416660 0320F809 */  jalr  $t9
/* 00416664 02603025 */   move  $a2, $s3
/* 00416668 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041666C 00402025 */  move  $a0, $v0
/* 00416670 8FA500C0 */  lw    $a1, 0xc0($sp)
/* 00416674 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00416678 02803025 */  move  $a2, $s4
/* 0041667C 02603825 */  move  $a3, $s3
/* 00416680 0320F809 */  jalr  $t9
/* 00416684 00000000 */   nop   
/* 00416688 8FAE00C4 */  lw    $t6, 0xc4($sp)
/* 0041668C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416690 10000025 */  b     .L00416728
/* 00416694 ADC20000 */   sw    $v0, ($t6)
.L00416698:
/* 00416698 16800013 */  bnez  $s4, .L004166E8
/* 0041669C 02002025 */   move  $a0, $s0
/* 004166A0 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 004166A4 8E4A0024 */  lw    $t2, 0x24($s2)
/* 004166A8 02002025 */  move  $a0, $s0
/* 004166AC 02603025 */  move  $a2, $s3
/* 004166B0 0320F809 */  jalr  $t9
/* 004166B4 8D450014 */   lw    $a1, 0x14($t2)
/* 004166B8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004166BC 8FA500C0 */  lw    $a1, 0xc0($sp)
/* 004166C0 00402025 */  move  $a0, $v0
/* 004166C4 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 004166C8 8CAD0024 */  lw    $t5, 0x24($a1)
/* 004166CC 02603825 */  move  $a3, $s3
/* 004166D0 0320F809 */  jalr  $t9
/* 004166D4 8DA60014 */   lw    $a2, 0x14($t5)
/* 004166D8 8FAB00C4 */  lw    $t3, 0xc4($sp)
/* 004166DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004166E0 10000011 */  b     .L00416728
/* 004166E4 AD620000 */   sw    $v0, ($t3)
.L004166E8:
/* 004166E8 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 004166EC 8E490028 */  lw    $t1, 0x28($s2)
/* 004166F0 02802825 */  move  $a1, $s4
/* 004166F4 0320F809 */  jalr  $t9
/* 004166F8 8D260014 */   lw    $a2, 0x14($t1)
/* 004166FC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416700 8FA500C0 */  lw    $a1, 0xc0($sp)
/* 00416704 00402025 */  move  $a0, $v0
/* 00416708 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 0041670C 8CAF0028 */  lw    $t7, 0x28($a1)
/* 00416710 02803025 */  move  $a2, $s4
/* 00416714 0320F809 */  jalr  $t9
/* 00416718 8DE70014 */   lw    $a3, 0x14($t7)
/* 0041671C 8FB900C4 */  lw    $t9, 0xc4($sp)
/* 00416720 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416724 AF220000 */  sw    $v0, ($t9)
.L00416728:
/* 00416728 93CC0000 */  lbu   $t4, ($fp)
/* 0041672C 55800324 */  bnezl $t4, .L004173C0
/* 00416730 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00416734 8FB800BC */  lw    $t8, 0xbc($sp)
/* 00416738 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 0041673C 02A02025 */  move  $a0, $s5
/* 00416740 8F13FFFC */  lw    $s3, -4($t8)
/* 00416744 0320F809 */  jalr  $t9
/* 00416748 02602825 */   move  $a1, $s3
/* 0041674C 8FA800C0 */  lw    $t0, 0xc0($sp)
/* 00416750 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416754 8FAA00C4 */  lw    $t2, 0xc4($sp)
/* 00416758 910E0021 */  lbu   $t6, 0x21($t0)
/* 0041675C 51C00008 */  beql  $t6, $zero, .L00416780
/* 00416760 8FAB00C4 */   lw    $t3, 0xc4($sp)
/* 00416764 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00416768 8D4D0000 */  lw    $t5, ($t2)
/* 0041676C 26640104 */  addiu $a0, $s3, 0x104
/* 00416770 0320F809 */  jalr  $t9
/* 00416774 95A50002 */   lhu   $a1, 2($t5)
/* 00416778 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041677C 8FAB00C4 */  lw    $t3, 0xc4($sp)
.L00416780:
/* 00416780 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00416784 2664012C */  addiu $a0, $s3, 0x12c
/* 00416788 8D690000 */  lw    $t1, ($t3)
/* 0041678C 0320F809 */  jalr  $t9
/* 00416790 95250002 */   lhu   $a1, 2($t1)
/* 00416794 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416798 8FAF00C0 */  lw    $t7, 0xc0($sp)
/* 0041679C 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 004167A0 8DE40024 */  lw    $a0, 0x24($t7)
/* 004167A4 0320F809 */  jalr  $t9
/* 004167A8 00000000 */   nop   
/* 004167AC 10400007 */  beqz  $v0, .L004167CC
/* 004167B0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004167B4 8FB900C0 */  lw    $t9, 0xc0($sp)
/* 004167B8 8F240028 */  lw    $a0, 0x28($t9)
/* 004167BC 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 004167C0 0320F809 */  jalr  $t9
/* 004167C4 00000000 */   nop   
/* 004167C8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004167CC:
/* 004167CC 8FA300C0 */  lw    $v1, 0xc0($sp)
/* 004167D0 3C010003 */  lui   $at, 3
/* 004167D4 34218C80 */  ori   $at, $at, 0x8c80
/* 004167D8 906C0020 */  lbu   $t4, 0x20($v1)
/* 004167DC 304600FF */  andi  $a2, $v0, 0xff
/* 004167E0 A0620022 */  sb    $v0, 0x22($v1)
/* 004167E4 2598FFE0 */  addiu $t8, $t4, -0x20
/* 004167E8 2F080020 */  sltiu $t0, $t8, 0x20
/* 004167EC 00087023 */  negu  $t6, $t0
/* 004167F0 01C15024 */  and   $t2, $t6, $at
/* 004167F4 030A6804 */  sllv  $t5, $t2, $t8
/* 004167F8 05A30007 */  bgezl $t5, .L00416818
/* 004167FC 906B0022 */   lbu   $t3, 0x22($v1)
/* 00416800 50C00004 */  beql  $a2, $zero, .L00416814
/* 00416804 A0660022 */   sb    $a2, 0x22($v1)
/* 00416808 90660002 */  lbu   $a2, 2($v1)
/* 0041680C 2CC60001 */  sltiu $a2, $a2, 1
/* 00416810 A0660022 */  sb    $a2, 0x22($v1)
.L00416814:
/* 00416814 906B0022 */  lbu   $t3, 0x22($v1)
.L00416818:
/* 00416818 8FA900C4 */  lw    $t1, 0xc4($sp)
/* 0041681C 51600009 */  beql  $t3, $zero, .L00416844
/* 00416820 90790021 */   lbu   $t9, 0x21($v1)
/* 00416824 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00416828 8D2F0000 */  lw    $t7, ($t1)
/* 0041682C 26640114 */  addiu $a0, $s3, 0x114
/* 00416830 0320F809 */  jalr  $t9
/* 00416834 95E50002 */   lhu   $a1, 2($t7)
/* 00416838 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041683C 8FA300C0 */  lw    $v1, 0xc0($sp)
/* 00416840 90790021 */  lbu   $t9, 0x21($v1)
.L00416844:
/* 00416844 8FA800C4 */  lw    $t0, 0xc4($sp)
/* 00416848 13200005 */  beqz  $t9, .L00416860
/* 0041684C 00000000 */   nop   
/* 00416850 906C0022 */  lbu   $t4, 0x22($v1)
/* 00416854 8FAA00C4 */  lw    $t2, 0xc4($sp)
/* 00416858 15800008 */  bnez  $t4, .L0041687C
/* 0041685C 00000000 */   nop   
.L00416860:
/* 00416860 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00416864 8D0E0000 */  lw    $t6, ($t0)
/* 00416868 2664010C */  addiu $a0, $s3, 0x10c
/* 0041686C 0320F809 */  jalr  $t9
/* 00416870 95C50002 */   lhu   $a1, 2($t6)
/* 00416874 10000007 */  b     .L00416894
/* 00416878 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041687C:
/* 0041687C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00416880 8D580000 */  lw    $t8, ($t2)
/* 00416884 2664010C */  addiu $a0, $s3, 0x10c
/* 00416888 0320F809 */  jalr  $t9
/* 0041688C 97050002 */   lhu   $a1, 2($t8)
/* 00416890 8FBC003C */  lw    $gp, 0x3c($sp)
.L00416894:
/* 00416894 8FAD00C4 */  lw    $t5, 0xc4($sp)
/* 00416898 8F8989E4 */  lw     $t1, %got(oldbitposcount)($gp)
/* 0041689C 8FA300C0 */  lw    $v1, 0xc0($sp)
/* 004168A0 8DB10000 */  lw    $s1, ($t5)
/* 004168A4 8D290000 */  lw    $t1, ($t1)
/* 004168A8 962B0002 */  lhu   $t3, 2($s1)
/* 004168AC 0169082A */  slt   $at, $t3, $t1
/* 004168B0 54200064 */  bnezl $at, .L00416A44
/* 004168B4 8FA300C0 */   lw    $v1, 0xc0($sp)
/* 004168B8 90700020 */  lbu   $s0, 0x20($v1)
/* 004168BC 2401005B */  li    $at, 91
/* 004168C0 56010037 */  bnel  $s0, $at, .L004169A0
/* 004168C4 2E080080 */   sltiu $t0, $s0, 0x80
/* 004168C8 906F0001 */  lbu   $t7, 1($v1)
/* 004168CC 3C01000C */  lui   $at, 0xc
/* 004168D0 2DF90020 */  sltiu $t9, $t7, 0x20
/* 004168D4 00196023 */  negu  $t4, $t9
/* 004168D8 01814024 */  and   $t0, $t4, $at
/* 004168DC 01E87004 */  sllv  $t6, $t0, $t7
/* 004168E0 05C2002F */  bltzl $t6, .L004169A0
/* 004168E4 2E080080 */   sltiu $t0, $s0, 0x80
/* 004168E8 8C6A0024 */  lw    $t2, 0x24($v1)
/* 004168EC 3C013200 */  lui   $at, 0x3200
/* 004168F0 91420000 */  lbu   $v0, ($t2)
/* 004168F4 16C20004 */  bne   $s6, $v0, .L00416908
/* 004168F8 2C4B0020 */   sltiu $t3, $v0, 0x20
/* 004168FC 8C780028 */  lw    $t8, 0x28($v1)
/* 00416900 930D0000 */  lbu   $t5, ($t8)
/* 00416904 12CD0023 */  beq   $s6, $t5, .L00416994
.L00416908:
/* 00416908 000B4823 */   negu  $t1, $t3
/* 0041690C 0121C824 */  and   $t9, $t1, $at
/* 00416910 00596004 */  sllv  $t4, $t9, $v0
/* 00416914 0580000A */  bltz  $t4, .L00416940
/* 00416918 00000000 */   nop   
/* 0041691C 8C680028 */  lw    $t0, 0x28($v1)
/* 00416920 3C013200 */  lui   $at, 0x3200
/* 00416924 910F0000 */  lbu   $t7, ($t0)
/* 00416928 2DEE0020 */  sltiu $t6, $t7, 0x20
/* 0041692C 000E5023 */  negu  $t2, $t6
/* 00416930 0141C024 */  and   $t8, $t2, $at
/* 00416934 01F86804 */  sllv  $t5, $t8, $t7
/* 00416938 05A10016 */  bgez  $t5, .L00416994
/* 0041693C 00000000 */   nop   
.L00416940:
/* 00416940 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 00416944 8E240014 */  lw    $a0, 0x14($s1)
/* 00416948 0320F809 */  jalr  $t9
/* 0041694C 00000000 */   nop   
/* 00416950 10400010 */  beqz  $v0, .L00416994
/* 00416954 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00416958 8FAB00C4 */  lw    $t3, 0xc4($sp)
/* 0041695C 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 00416960 8D690000 */  lw    $t1, ($t3)
/* 00416964 0320F809 */  jalr  $t9
/* 00416968 8D240018 */   lw    $a0, 0x18($t1)
/* 0041696C 10400009 */  beqz  $v0, .L00416994
/* 00416970 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00416974 8FB900C4 */  lw    $t9, 0xc4($sp)
/* 00416978 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 0041697C 8F2C0000 */  lw    $t4, ($t9)
/* 00416980 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00416984 95850002 */  lhu   $a1, 2($t4)
/* 00416988 0320F809 */  jalr  $t9
/* 0041698C 00000000 */   nop   
/* 00416990 8FBC003C */  lw    $gp, 0x3c($sp)
.L00416994:
/* 00416994 1000002B */  b     .L00416A44
/* 00416998 8FA300C0 */   lw    $v1, 0xc0($sp)
/* 0041699C 2E080080 */  sltiu $t0, $s0, 0x80
.L004169A0:
/* 004169A0 11000009 */  beqz  $t0, .L004169C8
/* 004169A4 00000000 */   nop   
/* 004169A8 8F988044 */  lw    $t8, %got(D_1000FEBC)($gp)
/* 004169AC 00107143 */  sra   $t6, $s0, 5
/* 004169B0 000E5080 */  sll   $t2, $t6, 2
/* 004169B4 2718FEBC */  addiu $t8, %lo(D_1000FEBC) # addiu $t8, $t8, -0x144
/* 004169B8 030A7821 */  addu  $t7, $t8, $t2
/* 004169BC 8DED0000 */  lw    $t5, ($t7)
/* 004169C0 020D5804 */  sllv  $t3, $t5, $s0
/* 004169C4 29680000 */  slti  $t0, $t3, 0
.L004169C8:
/* 004169C8 5100001E */  beql  $t0, $zero, .L00416A44
/* 004169CC 8FA300C0 */   lw    $v1, 0xc0($sp)
/* 004169D0 90790001 */  lbu   $t9, 1($v1)
/* 004169D4 3C01000C */  lui   $at, 0xc
/* 004169D8 2F2C0020 */  sltiu $t4, $t9, 0x20
/* 004169DC 000C7023 */  negu  $t6, $t4
/* 004169E0 01C1C024 */  and   $t8, $t6, $at
/* 004169E4 03385004 */  sllv  $t2, $t8, $t9
/* 004169E8 05420016 */  bltzl $t2, .L00416A44
/* 004169EC 8FA300C0 */   lw    $v1, 0xc0($sp)
/* 004169F0 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 004169F4 8E240014 */  lw    $a0, 0x14($s1)
/* 004169F8 0320F809 */  jalr  $t9
/* 004169FC 00000000 */   nop   
/* 00416A00 1040000F */  beqz  $v0, .L00416A40
/* 00416A04 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00416A08 8FAF00C4 */  lw    $t7, 0xc4($sp)
/* 00416A0C 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 00416A10 8DED0000 */  lw    $t5, ($t7)
/* 00416A14 0320F809 */  jalr  $t9
/* 00416A18 8DA40018 */   lw    $a0, 0x18($t5)
/* 00416A1C 10400008 */  beqz  $v0, .L00416A40
/* 00416A20 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00416A24 8FAB00C4 */  lw    $t3, 0xc4($sp)
/* 00416A28 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00416A2C 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 00416A30 8D690000 */  lw    $t1, ($t3)
/* 00416A34 0320F809 */  jalr  $t9
/* 00416A38 95250002 */   lhu   $a1, 2($t1)
/* 00416A3C 8FBC003C */  lw    $gp, 0x3c($sp)
.L00416A40:
/* 00416A40 8FA300C0 */  lw    $v1, 0xc0($sp)
.L00416A44:
/* 00416A44 90680020 */  lbu   $t0, 0x20($v1)
/* 00416A48 250CFFE0 */  addiu $t4, $t0, -0x20
/* 00416A4C 2D8E0040 */  sltiu $t6, $t4, 0x40
/* 00416A50 11C00009 */  beqz  $t6, .L00416A78
/* 00416A54 00000000 */   nop   
/* 00416A58 8F8A8044 */  lw    $t2, %got(D_1000FEE8)($gp)
/* 00416A5C 000CC143 */  sra   $t8, $t4, 5
/* 00416A60 0018C880 */  sll   $t9, $t8, 2
/* 00416A64 254AFEE8 */  addiu $t2, %lo(D_1000FEE8) # addiu $t2, $t2, -0x118
/* 00416A68 01597821 */  addu  $t7, $t2, $t9
/* 00416A6C 8DED0000 */  lw    $t5, ($t7)
/* 00416A70 018D5804 */  sllv  $t3, $t5, $t4
/* 00416A74 296E0000 */  slti  $t6, $t3, 0
.L00416A78:
/* 00416A78 51C00251 */  beql  $t6, $zero, .L004173C0
/* 00416A7C 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00416A80 8F99820C */  lw    $t9, %call16(entryant)($gp)
/* 00416A84 8C640024 */  lw    $a0, 0x24($v1)
/* 00416A88 0320F809 */  jalr  $t9
/* 00416A8C 00000000 */   nop   
/* 00416A90 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416A94 8FA800C0 */  lw    $t0, 0xc0($sp)
/* 00416A98 00408025 */  move  $s0, $v0
/* 00416A9C 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00416AA0 8D040024 */  lw    $a0, 0x24($t0)
/* 00416AA4 0320F809 */  jalr  $t9
/* 00416AA8 00000000 */   nop   
/* 00416AAC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416AB0 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 00416AB4 24050001 */  li    $a1, 1
/* 00416AB8 8F998350 */  lw    $t9, %call16(trep_image)($gp)
/* 00416ABC 02003025 */  move  $a2, $s0
/* 00416AC0 00403825 */  move  $a3, $v0
/* 00416AC4 0320F809 */  jalr  $t9
/* 00416AC8 AFA00010 */   sw    $zero, 0x10($sp)
/* 00416ACC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416AD0 8FB800C0 */  lw    $t8, 0xc0($sp)
/* 00416AD4 8F99820C */  lw    $t9, %call16(entryant)($gp)
/* 00416AD8 8F040028 */  lw    $a0, 0x28($t8)
/* 00416ADC 0320F809 */  jalr  $t9
/* 00416AE0 00000000 */   nop   
/* 00416AE4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416AE8 8FAA00C0 */  lw    $t2, 0xc0($sp)
/* 00416AEC 00408025 */  move  $s0, $v0
/* 00416AF0 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00416AF4 8D440028 */  lw    $a0, 0x28($t2)
/* 00416AF8 0320F809 */  jalr  $t9
/* 00416AFC 00000000 */   nop   
/* 00416B00 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416B04 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 00416B08 00002825 */  move  $a1, $zero
/* 00416B0C 8F998350 */  lw    $t9, %call16(trep_image)($gp)
/* 00416B10 02003025 */  move  $a2, $s0
/* 00416B14 00403825 */  move  $a3, $v0
/* 00416B18 0320F809 */  jalr  $t9
/* 00416B1C AFA00010 */   sw    $zero, 0x10($sp)
/* 00416B20 10000226 */  b     .L004173BC
/* 00416B24 8FBC003C */   lw    $gp, 0x3c($sp)
.L00416B28:
/* 00416B28 8F9E8B20 */  lw     $fp, %got(outofmem)($gp)
/* 00416B2C 93D90000 */  lbu   $t9, ($fp)
/* 00416B30 57200223 */  bnezl $t9, .L004173C0
/* 00416B34 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00416B38 52800221 */  beql  $s4, $zero, .L004173C0
/* 00416B3C 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00416B40 90EF0021 */  lbu   $t7, 0x21($a3)
/* 00416B44 8CF50014 */  lw    $s5, 0x14($a3)
/* 00416B48 8FAD00BC */  lw    $t5, 0xbc($sp)
/* 00416B4C 51E00009 */  beql  $t7, $zero, .L00416B74
/* 00416B50 90EC0022 */   lbu   $t4, 0x22($a3)
/* 00416B54 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00416B58 8DA4FFFC */  lw    $a0, -4($t5)
/* 00416B5C 96A50002 */  lhu   $a1, 2($s5)
/* 00416B60 0320F809 */  jalr  $t9
/* 00416B64 24840104 */   addiu $a0, $a0, 0x104
/* 00416B68 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416B6C 8FA700C0 */  lw    $a3, 0xc0($sp)
/* 00416B70 90EC0022 */  lbu   $t4, 0x22($a3)
.L00416B74:
/* 00416B74 8FAB00BC */  lw    $t3, 0xbc($sp)
/* 00416B78 51800009 */  beql  $t4, $zero, .L00416BA0
/* 00416B7C 8CE90024 */   lw    $t1, 0x24($a3)
/* 00416B80 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00416B84 8D64FFFC */  lw    $a0, -4($t3)
/* 00416B88 96A50002 */  lhu   $a1, 2($s5)
/* 00416B8C 0320F809 */  jalr  $t9
/* 00416B90 24840114 */   addiu $a0, $a0, 0x114
/* 00416B94 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416B98 8FA700C0 */  lw    $a3, 0xc0($sp)
/* 00416B9C 8CE90024 */  lw    $t1, 0x24($a3)
.L00416BA0:
/* 00416BA0 3C016000 */  lui   $at, 0x6000
/* 00416BA4 91220000 */  lbu   $v0, ($t1)
/* 00416BA8 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 00416BAC 000E4023 */  negu  $t0, $t6
/* 00416BB0 0101C024 */  and   $t8, $t0, $at
/* 00416BB4 00585004 */  sllv  $t2, $t8, $v0
/* 00416BB8 054300A3 */  bgezl $t2, .L00416E48
/* 00416BBC 8FB800BC */   lw    $t8, 0xbc($sp)
/* 00416BC0 90F00020 */  lbu   $s0, 0x20($a3)
/* 00416BC4 24110036 */  li    $s1, 54
/* 00416BC8 24040001 */  li    $a0, 1
/* 00416BCC 16300005 */  bne   $s1, $s0, .L00416BE4
/* 00416BD0 24010018 */   li    $at, 24
/* 00416BD4 00821826 */  xor   $v1, $a0, $v0
/* 00416BD8 2C630001 */  sltiu $v1, $v1, 1
/* 00416BDC 10000040 */  b     .L00416CE0
/* 00416BE0 306300FF */   andi  $v1, $v1, 0xff
.L00416BE4:
/* 00416BE4 12010016 */  beq   $s0, $at, .L00416C40
/* 00416BE8 2E190080 */   sltiu $t9, $s0, 0x80
/* 00416BEC 13200009 */  beqz  $t9, .L00416C14
/* 00416BF0 00000000 */   nop   
/* 00416BF4 8F8C8044 */  lw    $t4, %got(D_1000FEAC)($gp)
/* 00416BF8 00107943 */  sra   $t7, $s0, 5
/* 00416BFC 000F6880 */  sll   $t5, $t7, 2
/* 00416C00 258CFEAC */  addiu $t4, %lo(D_1000FEAC) # addiu $t4, $t4, -0x154
/* 00416C04 018D5821 */  addu  $t3, $t4, $t5
/* 00416C08 8D690000 */  lw    $t1, ($t3)
/* 00416C0C 02097004 */  sllv  $t6, $t1, $s0
/* 00416C10 29D90000 */  slti  $t9, $t6, 0
.L00416C14:
/* 00416C14 13200008 */  beqz  $t9, .L00416C38
/* 00416C18 03203025 */   move  $a2, $t9
/* 00416C1C 90F80001 */  lbu   $t8, 1($a3)
/* 00416C20 3C018A80 */  lui   $at, 0x8a80
/* 00416C24 2F0A0020 */  sltiu $t2, $t8, 0x20
/* 00416C28 000A7823 */  negu  $t7, $t2
/* 00416C2C 01E16024 */  and   $t4, $t7, $at
/* 00416C30 030C3004 */  sllv  $a2, $t4, $t8
/* 00416C34 28C60000 */  slti  $a2, $a2, 0
.L00416C38:
/* 00416C38 10000029 */  b     .L00416CE0
/* 00416C3C 30C300FF */   andi  $v1, $a2, 0xff
.L00416C40:
/* 00416C40 90E40001 */  lbu   $a0, 1($a3)
/* 00416C44 3C018F80 */  lui   $at, 0x8f80
/* 00416C48 2C8D0020 */  sltiu $t5, $a0, 0x20
/* 00416C4C 000D5823 */  negu  $t3, $t5
/* 00416C50 01614824 */  and   $t1, $t3, $at
/* 00416C54 00893004 */  sllv  $a2, $t1, $a0
/* 00416C58 28C60000 */  slti  $a2, $a2, 0
/* 00416C5C 50C0001F */  beql  $a2, $zero, .L00416CDC
/* 00416C60 8FA700C0 */   lw    $a3, 0xc0($sp)
/* 00416C64 90EE0038 */  lbu   $t6, 0x38($a3)
/* 00416C68 3C018F80 */  lui   $at, 0x8f80
/* 00416C6C 2DC80020 */  sltiu $t0, $t6, 0x20
/* 00416C70 0008C823 */  negu  $t9, $t0
/* 00416C74 03215024 */  and   $t2, $t9, $at
/* 00416C78 01CA3004 */  sllv  $a2, $t2, $t6
/* 00416C7C 28C60000 */  slti  $a2, $a2, 0
/* 00416C80 50C00016 */  beql  $a2, $zero, .L00416CDC
/* 00416C84 8FA700C0 */   lw    $a3, 0xc0($sp)
/* 00416C88 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00416C8C 0320F809 */  jalr  $t9
/* 00416C90 00000000 */   nop   
/* 00416C94 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416C98 8FAF00C0 */  lw    $t7, 0xc0($sp)
/* 00416C9C 00408025 */  move  $s0, $v0
/* 00416CA0 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00416CA4 91E40038 */  lbu   $a0, 0x38($t7)
/* 00416CA8 0320F809 */  jalr  $t9
/* 00416CAC 00000000 */   nop   
/* 00416CB0 02021826 */  xor   $v1, $s0, $v0
/* 00416CB4 2C660001 */  sltiu $a2, $v1, 1
/* 00416CB8 10C00007 */  beqz  $a2, .L00416CD8
/* 00416CBC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00416CC0 8FAC00C0 */  lw    $t4, 0xc0($sp)
/* 00416CC4 24040001 */  li    $a0, 1
/* 00416CC8 8D980024 */  lw    $t8, 0x24($t4)
/* 00416CCC 930D0000 */  lbu   $t5, ($t8)
/* 00416CD0 008D3026 */  xor   $a2, $a0, $t5
/* 00416CD4 0006302B */  sltu  $a2, $zero, $a2
.L00416CD8:
/* 00416CD8 8FA700C0 */  lw    $a3, 0xc0($sp)
.L00416CDC:
/* 00416CDC 30C300FF */  andi  $v1, $a2, 0xff
.L00416CE0:
/* 00416CE0 50600059 */  beql  $v1, $zero, .L00416E48
/* 00416CE4 8FB800BC */   lw    $t8, 0xbc($sp)
/* 00416CE8 90F00020 */  lbu   $s0, 0x20($a3)
/* 00416CEC 5630002F */  bnel  $s1, $s0, .L00416DAC
/* 00416CF0 24010018 */   li    $at, 24
/* 00416CF4 8F9983EC */  lw    $t9, %call16(ilodfold)($gp)
/* 00416CF8 00E02025 */  move  $a0, $a3
/* 00416CFC 0320F809 */  jalr  $t9
/* 00416D00 00000000 */   nop   
/* 00416D04 93CB0000 */  lbu   $t3, ($fp)
/* 00416D08 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416D0C 00408025 */  move  $s0, $v0
/* 00416D10 556001AB */  bnezl $t3, .L004173C0
/* 00416D14 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00416D18 90490000 */  lbu   $t1, ($v0)
/* 00416D1C 16C90020 */  bne   $s6, $t1, .L00416DA0
/* 00416D20 00000000 */   nop   
/* 00416D24 8C480030 */  lw    $t0, 0x30($v0)
/* 00416D28 55000005 */  bnezl $t0, .L00416D40
/* 00416D2C 8FAA00C0 */   lw    $t2, 0xc0($sp)
/* 00416D30 8F9989CC */  lw     $t9, %got(nocopy)($gp)
/* 00416D34 8F390000 */  lw    $t9, ($t9)
/* 00416D38 AC590030 */  sw    $t9, 0x30($v0)
/* 00416D3C 8FAA00C0 */  lw    $t2, 0xc0($sp)
.L00416D40:
/* 00416D40 24010004 */  li    $at, 4
/* 00416D44 914E0000 */  lbu   $t6, ($t2)
/* 00416D48 15C1000D */  bne   $t6, $at, .L00416D80
/* 00416D4C 00000000 */   nop   
/* 00416D50 960F0006 */  lhu   $t7, 6($s0)
/* 00416D54 954C0006 */  lhu   $t4, 6($t2)
/* 00416D58 8FAD00C0 */  lw    $t5, 0xc0($sp)
/* 00416D5C 01ECC021 */  addu  $t8, $t7, $t4
/* 00416D60 A6180006 */  sh    $t8, 6($s0)
/* 00416D64 8DAB0018 */  lw    $t3, 0x18($t5)
/* 00416D68 A1600009 */  sb    $zero, 9($t3)
/* 00416D6C 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 00416D70 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 00416D74 0320F809 */  jalr  $t9
/* 00416D78 00000000 */   nop   
/* 00416D7C 8FBC003C */  lw    $gp, 0x3c($sp)
.L00416D80:
/* 00416D80 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 00416D84 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 00416D88 02002825 */  move  $a1, $s0
/* 00416D8C 0320F809 */  jalr  $t9
/* 00416D90 00000000 */   nop   
/* 00416D94 8FA900C0 */  lw    $t1, 0xc0($sp)
/* 00416D98 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416D9C AD300030 */  sw    $s0, 0x30($t1)
.L00416DA0:
/* 00416DA0 10000028 */  b     .L00416E44
/* 00416DA4 AFB00094 */   sw    $s0, 0x94($sp)
/* 00416DA8 24010018 */  li    $at, 24
.L00416DAC:
/* 00416DAC 1601000B */  bne   $s0, $at, .L00416DDC
/* 00416DB0 00000000 */   nop   
/* 00416DB4 8F9983F4 */  lw    $t9, %call16(cvtfold)($gp)
/* 00416DB8 00E02025 */  move  $a0, $a3
/* 00416DBC 0320F809 */  jalr  $t9
/* 00416DC0 00000000 */   nop   
/* 00416DC4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416DC8 8FB900C0 */  lw    $t9, 0xc0($sp)
/* 00416DCC 8F9789D4 */  lw     $s7, %got(constprop)($gp)
/* 00416DD0 8EE80000 */  lw    $t0, ($s7)
/* 00416DD4 1000001B */  b     .L00416E44
/* 00416DD8 AF280018 */   sw    $t0, 0x18($t9)
.L00416DDC:
/* 00416DDC 8F9983E0 */  lw    $t9, %call16(unaryovfw)($gp)
/* 00416DE0 00E02025 */  move  $a0, $a3
/* 00416DE4 0320F809 */  jalr  $t9
/* 00416DE8 00000000 */   nop   
/* 00416DEC 1040000C */  beqz  $v0, .L00416E20
/* 00416DF0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00416DF4 8FAE00C0 */  lw    $t6, 0xc0($sp)
/* 00416DF8 91CA003E */  lbu   $t2, 0x3e($t6)
/* 00416DFC 11400006 */  beqz  $t2, .L00416E18
/* 00416E00 00000000 */   nop   
/* 00416E04 8F998618 */  lw    $t9, %call16(ovfwwarning)($gp)
/* 00416E08 91C40020 */  lbu   $a0, 0x20($t6)
/* 00416E0C 0320F809 */  jalr  $t9
/* 00416E10 00000000 */   nop   
/* 00416E14 8FBC003C */  lw    $gp, 0x3c($sp)
.L00416E18:
/* 00416E18 1000000B */  b     .L00416E48
/* 00416E1C 8FB800BC */   lw    $t8, 0xbc($sp)
.L00416E20:
/* 00416E20 8F9983F8 */  lw    $t9, %call16(unaryfold)($gp)
/* 00416E24 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 00416E28 0320F809 */  jalr  $t9
/* 00416E2C 00000000 */   nop   
/* 00416E30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416E34 8FAC00C0 */  lw    $t4, 0xc0($sp)
/* 00416E38 8F9789D4 */  lw     $s7, %got(constprop)($gp)
/* 00416E3C 8EEF0000 */  lw    $t7, ($s7)
/* 00416E40 AD8F0018 */  sw    $t7, 0x18($t4)
.L00416E44:
/* 00416E44 8FB800BC */  lw    $t8, 0xbc($sp)
.L00416E48:
/* 00416E48 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 00416E4C 8FB00094 */  lw    $s0, 0x94($sp)
/* 00416E50 8F13FFFC */  lw    $s3, -4($t8)
/* 00416E54 02A02025 */  move  $a0, $s5
/* 00416E58 0320F809 */  jalr  $t9
/* 00416E5C 02602825 */   move  $a1, $s3
/* 00416E60 8FAD00C0 */  lw    $t5, 0xc0($sp)
/* 00416E64 3C016080 */  lui   $at, 0x6080
/* 00416E68 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416E6C 91A30000 */  lbu   $v1, ($t5)
/* 00416E70 2C6B0020 */  sltiu $t3, $v1, 0x20
/* 00416E74 000B4823 */  negu  $t1, $t3
/* 00416E78 01214024 */  and   $t0, $t1, $at
/* 00416E7C 0068C804 */  sllv  $t9, $t0, $v1
/* 00416E80 0721005F */  bgez  $t9, .L00417000
/* 00416E84 00000000 */   nop   
/* 00416E88 1000004B */  b     .L00416FB8
/* 00416E8C 306200FF */   andi  $v0, $v1, 0xff
.L00416E90:
/* 00416E90 8FAA00C0 */  lw    $t2, 0xc0($sp)
/* 00416E94 8F99833C */  lw    $t9, %call16(isldaihash)($gp)
/* 00416E98 8D44002C */  lw    $a0, 0x2c($t2)
/* 00416E9C AFA40000 */  sw    $a0, ($sp)
/* 00416EA0 8D450030 */  lw    $a1, 0x30($t2)
/* 00416EA4 AFA50004 */  sw    $a1, 4($sp)
/* 00416EA8 0320F809 */  jalr  $t9
/* 00416EAC 8D460020 */   lw    $a2, 0x20($t2)
/* 00416EB0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416EB4 00402025 */  move  $a0, $v0
.L00416EB8:
/* 00416EB8 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00416EBC 8FA500C0 */  lw    $a1, 0xc0($sp)
/* 00416EC0 00003025 */  move  $a2, $zero
/* 00416EC4 0320F809 */  jalr  $t9
/* 00416EC8 00003825 */   move  $a3, $zero
/* 00416ECC 8FAC00C4 */  lw    $t4, 0xc4($sp)
/* 00416ED0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416ED4 10000139 */  b     .L004173BC
/* 00416ED8 AD820000 */   sw    $v0, ($t4)
.L00416EDC:
/* 00416EDC 8FB800C0 */  lw    $t8, 0xc0($sp)
/* 00416EE0 3C01BAA0 */  lui   $at, 0xbaa0
/* 00416EE4 93040001 */  lbu   $a0, 1($t8)
/* 00416EE8 2C8D0020 */  sltiu $t5, $a0, 0x20
/* 00416EEC 000D5823 */  negu  $t3, $t5
/* 00416EF0 01614824 */  and   $t1, $t3, $at
/* 00416EF4 00894004 */  sllv  $t0, $t1, $a0
/* 00416EF8 05010008 */  bgez  $t0, .L00416F1C
/* 00416EFC 2C990020 */   sltiu $t9, $a0, 0x20
/* 00416F00 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 00416F04 8F040020 */  lw    $a0, 0x20($t8)
/* 00416F08 0320F809 */  jalr  $t9
/* 00416F0C 00000000 */   nop   
/* 00416F10 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416F14 1000FFE8 */  b     .L00416EB8
/* 00416F18 00402025 */   move  $a0, $v0
.L00416F1C:
/* 00416F1C 00197023 */  negu  $t6, $t9
/* 00416F20 3C010500 */  lui   $at, 0x500
/* 00416F24 01C17824 */  and   $t7, $t6, $at
/* 00416F28 008F5004 */  sllv  $t2, $t7, $a0
/* 00416F2C 05410008 */  bgez  $t2, .L00416F50
/* 00416F30 8FAD00C0 */   lw    $t5, 0xc0($sp)
/* 00416F34 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 00416F38 8FAC00C0 */  lw    $t4, 0xc0($sp)
/* 00416F3C 0320F809 */  jalr  $t9
/* 00416F40 8D840024 */   lw    $a0, 0x24($t4)
/* 00416F44 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416F48 1000FFDB */  b     .L00416EB8
/* 00416F4C 00402025 */   move  $a0, $v0
.L00416F50:
/* 00416F50 8DA40020 */  lw    $a0, 0x20($t5)
/* 00416F54 8F998334 */  lw    $t9, %call16(realihash)($gp)
/* 00416F58 AFA40000 */  sw    $a0, ($sp)
/* 00416F5C 8DA50024 */  lw    $a1, 0x24($t5)
/* 00416F60 0320F809 */  jalr  $t9
/* 00416F64 AFA50004 */   sw    $a1, 4($sp)
/* 00416F68 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416F6C 1000FFD2 */  b     .L00416EB8
/* 00416F70 00402025 */   move  $a0, $v0
.L00416F74:
/* 00416F74 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 00416F78 8FA800C0 */  lw    $t0, 0xc0($sp)
/* 00416F7C 0320F809 */  jalr  $t9
/* 00416F80 8D040020 */   lw    $a0, 0x20($t0)
/* 00416F84 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416F88 1000FFCB */  b     .L00416EB8
/* 00416F8C 00402025 */   move  $a0, $v0
.L00416F90:
/* 00416F90 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00416F94 8F868044 */  lw    $a2, %got(RO_1000A64E)($gp)
/* 00416F98 24040001 */  li    $a0, 1
/* 00416F9C 2405058F */  li    $a1, 1423
/* 00416FA0 2407000A */  li    $a3, 10
/* 00416FA4 0320F809 */  jalr  $t9
/* 00416FA8 24C6A64E */   addiu $a2, %lo(RO_1000A64E) # addiu $a2, $a2, -0x59b2
/* 00416FAC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00416FB0 1000FFC1 */  b     .L00416EB8
/* 00416FB4 8FA40098 */   lw    $a0, 0x98($sp)
.L00416FB8:
/* 00416FB8 2C410003 */  sltiu $at, $v0, 3
/* 00416FBC 14200006 */  bnez  $at, .L00416FD8
/* 00416FC0 2458FFFF */   addiu $t8, $v0, -1
/* 00416FC4 24010008 */  li    $at, 8
/* 00416FC8 1041FFEA */  beq   $v0, $at, .L00416F74
/* 00416FCC 00000000 */   nop   
/* 00416FD0 1000FFEF */  b     .L00416F90
/* 00416FD4 00000000 */   nop   
.L00416FD8:
/* 00416FD8 2F010002 */  sltiu $at, $t8, 2
/* 00416FDC 1020FFEC */  beqz  $at, .L00416F90
/* 00416FE0 00000000 */   nop   
/* 00416FE4 8F818044 */  lw    $at, %got(jtbl_1000A66C)($gp)
/* 00416FE8 0018C080 */  sll   $t8, $t8, 2
/* 00416FEC 00380821 */  addu  $at, $at, $t8
/* 00416FF0 8C38A66C */  lw    $t8, %lo(jtbl_1000A66C)($at)
/* 00416FF4 031CC021 */  addu  $t8, $t8, $gp
/* 00416FF8 03000008 */  jr    $t8
/* 00416FFC 00000000 */   nop   
.L00417000:
/* 00417000 16C30055 */  bne   $s6, $v1, .L00417158
/* 00417004 8FAC00C0 */   lw    $t4, 0xc0($sp)
/* 00417008 8FB900C0 */  lw    $t9, 0xc0($sp)
/* 0041700C 8F240028 */  lw    $a0, 0x28($t9)
/* 00417010 AFA40000 */  sw    $a0, ($sp)
/* 00417014 8F25002C */  lw    $a1, 0x2c($t9)
/* 00417018 8F998338 */  lw    $t9, %call16(isvarihash)($gp)
/* 0041701C AFA50004 */  sw    $a1, 4($sp)
/* 00417020 0320F809 */  jalr  $t9
/* 00417024 00000000 */   nop   
/* 00417028 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041702C 00402025 */  move  $a0, $v0
/* 00417030 02002825 */  move  $a1, $s0
/* 00417034 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00417038 00003025 */  move  $a2, $zero
/* 0041703C 00003825 */  move  $a3, $zero
/* 00417040 0320F809 */  jalr  $t9
/* 00417044 00000000 */   nop   
/* 00417048 8FAA00C4 */  lw    $t2, 0xc4($sp)
/* 0041704C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417050 AD420000 */  sw    $v0, ($t2)
/* 00417054 93CC0000 */  lbu   $t4, ($fp)
/* 00417058 8FA900C0 */  lw    $t1, 0xc0($sp)
/* 0041705C 8FAD00C4 */  lw    $t5, 0xc4($sp)
/* 00417060 558000D7 */  bnezl $t4, .L004173C0
/* 00417064 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00417068 8DAB0000 */  lw    $t3, ($t5)
/* 0041706C AD2B0014 */  sw    $t3, 0x14($t1)
/* 00417070 92080003 */  lbu   $t0, 3($s0)
/* 00417074 8FB800C4 */  lw    $t8, 0xc4($sp)
/* 00417078 51000009 */  beql  $t0, $zero, .L004170A0
/* 0041707C 920E0002 */   lbu   $t6, 2($s0)
/* 00417080 8F190000 */  lw    $t9, ($t8)
/* 00417084 26640104 */  addiu $a0, $s3, 0x104
/* 00417088 97250002 */  lhu   $a1, 2($t9)
/* 0041708C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417090 0320F809 */  jalr  $t9
/* 00417094 00000000 */   nop   
/* 00417098 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041709C 920E0002 */  lbu   $t6, 2($s0)
.L004170A0:
/* 004170A0 8FAF00C4 */  lw    $t7, 0xc4($sp)
/* 004170A4 55C00008 */  bnezl $t6, .L004170C8
/* 004170A8 920C0003 */   lbu   $t4, 3($s0)
/* 004170AC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004170B0 8DEA0000 */  lw    $t2, ($t7)
/* 004170B4 26640114 */  addiu $a0, $s3, 0x114
/* 004170B8 0320F809 */  jalr  $t9
/* 004170BC 95450002 */   lhu   $a1, 2($t2)
/* 004170C0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004170C4 920C0003 */  lbu   $t4, 3($s0)
.L004170C8:
/* 004170C8 8FAB00C4 */  lw    $t3, 0xc4($sp)
/* 004170CC 11800004 */  beqz  $t4, .L004170E0
/* 004170D0 00000000 */   nop   
/* 004170D4 920D0002 */  lbu   $t5, 2($s0)
/* 004170D8 51A00008 */  beql  $t5, $zero, .L004170FC
/* 004170DC 8FA800C4 */   lw    $t0, 0xc4($sp)
.L004170E0:
/* 004170E0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004170E4 8D690000 */  lw    $t1, ($t3)
/* 004170E8 2664010C */  addiu $a0, $s3, 0x10c
/* 004170EC 0320F809 */  jalr  $t9
/* 004170F0 95250002 */   lhu   $a1, 2($t1)
/* 004170F4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004170F8 8FA800C4 */  lw    $t0, 0xc4($sp)
.L004170FC:
/* 004170FC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417100 2664010C */  addiu $a0, $s3, 0x10c
/* 00417104 8D180000 */  lw    $t8, ($t0)
/* 00417108 0320F809 */  jalr  $t9
/* 0041710C 97050024 */   lhu   $a1, 0x24($t8)
/* 00417110 8FB900C4 */  lw    $t9, 0xc4($sp)
/* 00417114 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417118 2670012C */  addiu $s0, $s3, 0x12c
/* 0041711C 8F2E0000 */  lw    $t6, ($t9)
/* 00417120 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417124 02002025 */  move  $a0, $s0
/* 00417128 95C50002 */  lhu   $a1, 2($t6)
/* 0041712C 0320F809 */  jalr  $t9
/* 00417130 00000000 */   nop   
/* 00417134 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417138 8FAF00C4 */  lw    $t7, 0xc4($sp)
/* 0041713C 02002025 */  move  $a0, $s0
/* 00417140 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417144 8DEA0000 */  lw    $t2, ($t7)
/* 00417148 0320F809 */  jalr  $t9
/* 0041714C 95450024 */   lhu   $a1, 0x24($t2)
/* 00417150 1000009A */  b     .L004173BC
/* 00417154 8FBC003C */   lw    $gp, 0x3c($sp)
.L00417158:
/* 00417158 91900020 */  lbu   $s0, 0x20($t4)
/* 0041715C 260DFFE0 */  addiu $t5, $s0, -0x20
/* 00417160 2DAB0080 */  sltiu $t3, $t5, 0x80
/* 00417164 11600009 */  beqz  $t3, .L0041718C
/* 00417168 2E0C0040 */   sltiu $t4, $s0, 0x40
/* 0041716C 8F988044 */  lw    $t8, %got(D_1000FE9C)($gp)
/* 00417170 000D4943 */  sra   $t1, $t5, 5
/* 00417174 00094080 */  sll   $t0, $t1, 2
/* 00417178 2718FE9C */  addiu $t8, %lo(D_1000FE9C) # addiu $t8, $t8, -0x164
/* 0041717C 0308C821 */  addu  $t9, $t8, $t0
/* 00417180 8F2E0000 */  lw    $t6, ($t9)
/* 00417184 01AE7804 */  sllv  $t7, $t6, $t5
/* 00417188 29EB0000 */  slti  $t3, $t7, 0
.L0041718C:
/* 0041718C 11600009 */  beqz  $t3, .L004171B4
/* 00417190 00000000 */   nop   
/* 00417194 8F998344 */  lw    $t9, %call16(opvalihash)($gp)
/* 00417198 02002025 */  move  $a0, $s0
/* 0041719C 02802825 */  move  $a1, $s4
/* 004171A0 0320F809 */  jalr  $t9
/* 004171A4 00003025 */   move  $a2, $zero
/* 004171A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004171AC 1000001C */  b     .L00417220
/* 004171B0 00402025 */   move  $a0, $v0
.L004171B4:
/* 004171B4 11800009 */  beqz  $t4, .L004171DC
/* 004171B8 02002025 */   move  $a0, $s0
/* 004171BC 8F888044 */  lw    $t0, %got(D_1000FE94)($gp)
/* 004171C0 00104943 */  sra   $t1, $s0, 5
/* 004171C4 0009C080 */  sll   $t8, $t1, 2
/* 004171C8 2508FE94 */  addiu $t0, %lo(D_1000FE94) # addiu $t0, $t0, -0x16c
/* 004171CC 0118C821 */  addu  $t9, $t0, $t8
/* 004171D0 8F2E0000 */  lw    $t6, ($t9)
/* 004171D4 020E6804 */  sllv  $t5, $t6, $s0
/* 004171D8 29AC0000 */  slti  $t4, $t5, 0
.L004171DC:
/* 004171DC 11800009 */  beqz  $t4, .L00417204
/* 004171E0 00000000 */   nop   
/* 004171E4 8F998344 */  lw    $t9, %call16(opvalihash)($gp)
/* 004171E8 8FAA00C0 */  lw    $t2, 0xc0($sp)
/* 004171EC 02802825 */  move  $a1, $s4
/* 004171F0 0320F809 */  jalr  $t9
/* 004171F4 8D46002C */   lw    $a2, 0x2c($t2)
/* 004171F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004171FC 10000008 */  b     .L00417220
/* 00417200 00402025 */   move  $a0, $v0
.L00417204:
/* 00417204 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00417208 02002025 */  move  $a0, $s0
/* 0041720C 02802825 */  move  $a1, $s4
/* 00417210 0320F809 */  jalr  $t9
/* 00417214 00003025 */   move  $a2, $zero
/* 00417218 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041721C 00402025 */  move  $a0, $v0
.L00417220:
/* 00417220 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00417224 8FA500C0 */  lw    $a1, 0xc0($sp)
/* 00417228 02803025 */  move  $a2, $s4
/* 0041722C 0320F809 */  jalr  $t9
/* 00417230 00003825 */   move  $a3, $zero
/* 00417234 8FAB00C4 */  lw    $t3, 0xc4($sp)
/* 00417238 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041723C AD620000 */  sw    $v0, ($t3)
/* 00417240 93C90000 */  lbu   $t1, ($fp)
/* 00417244 8FA800C0 */  lw    $t0, 0xc0($sp)
/* 00417248 5520005D */  bnezl $t1, .L004173C0
/* 0041724C 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00417250 91180021 */  lbu   $t8, 0x21($t0)
/* 00417254 8FB900C4 */  lw    $t9, 0xc4($sp)
/* 00417258 53000009 */  beql  $t8, $zero, .L00417280
/* 0041725C 8FAD00C4 */   lw    $t5, 0xc4($sp)
/* 00417260 8F2E0000 */  lw    $t6, ($t9)
/* 00417264 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417268 26640104 */  addiu $a0, $s3, 0x104
/* 0041726C 95C50002 */  lhu   $a1, 2($t6)
/* 00417270 0320F809 */  jalr  $t9
/* 00417274 00000000 */   nop   
/* 00417278 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041727C 8FAD00C4 */  lw    $t5, 0xc4($sp)
.L00417280:
/* 00417280 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417284 2664012C */  addiu $a0, $s3, 0x12c
/* 00417288 8DAF0000 */  lw    $t7, ($t5)
/* 0041728C 0320F809 */  jalr  $t9
/* 00417290 95E50002 */   lhu   $a1, 2($t7)
/* 00417294 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417298 8FAC00C0 */  lw    $t4, 0xc0($sp)
/* 0041729C 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 004172A0 8D840024 */  lw    $a0, 0x24($t4)
/* 004172A4 0320F809 */  jalr  $t9
/* 004172A8 00000000 */   nop   
/* 004172AC 8FAA00C0 */  lw    $t2, 0xc0($sp)
/* 004172B0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004172B4 A1420022 */  sb    $v0, 0x22($t2)
/* 004172B8 8FAB00C0 */  lw    $t3, 0xc0($sp)
/* 004172BC 91690020 */  lbu   $t1, 0x20($t3)
/* 004172C0 2528FFE0 */  addiu $t0, $t1, -0x20
/* 004172C4 2D180080 */  sltiu $t8, $t0, 0x80
/* 004172C8 13000009 */  beqz  $t8, .L004172F0
/* 004172CC 00000000 */   nop   
/* 004172D0 8F8D8044 */  lw    $t5, %got(D_1000FE84)($gp)
/* 004172D4 0008C943 */  sra   $t9, $t0, 5
/* 004172D8 00197080 */  sll   $t6, $t9, 2
/* 004172DC 25ADFE84 */  addiu $t5, %lo(D_1000FE84) # addiu $t5, $t5, -0x17c
/* 004172E0 01AE7821 */  addu  $t7, $t5, $t6
/* 004172E4 8DEC0000 */  lw    $t4, ($t7)
/* 004172E8 010C5004 */  sllv  $t2, $t4, $t0
/* 004172EC 29580000 */  slti  $t8, $t2, 0
.L004172F0:
/* 004172F0 13000007 */  beqz  $t8, .L00417310
/* 004172F4 8FB900C0 */   lw    $t9, 0xc0($sp)
/* 004172F8 91660022 */  lbu   $a2, 0x22($t3)
/* 004172FC 50C00004 */  beql  $a2, $zero, .L00417310
/* 00417300 A3260022 */   sb    $a2, 0x22($t9)
/* 00417304 91660002 */  lbu   $a2, 2($t3)
/* 00417308 2CC60001 */  sltiu $a2, $a2, 1
/* 0041730C A3260022 */  sb    $a2, 0x22($t9)
.L00417310:
/* 00417310 8FAD00C0 */  lw    $t5, 0xc0($sp)
/* 00417314 8FAF00C4 */  lw    $t7, 0xc4($sp)
/* 00417318 91AE0022 */  lbu   $t6, 0x22($t5)
/* 0041731C 51C00008 */  beql  $t6, $zero, .L00417340
/* 00417320 8FA800C0 */   lw    $t0, 0xc0($sp)
/* 00417324 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417328 8DEC0000 */  lw    $t4, ($t7)
/* 0041732C 26640114 */  addiu $a0, $s3, 0x114
/* 00417330 0320F809 */  jalr  $t9
/* 00417334 95850002 */   lhu   $a1, 2($t4)
/* 00417338 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041733C 8FA800C0 */  lw    $t0, 0xc0($sp)
.L00417340:
/* 00417340 8FB800C4 */  lw    $t8, 0xc4($sp)
/* 00417344 910A0021 */  lbu   $t2, 0x21($t0)
/* 00417348 11400005 */  beqz  $t2, .L00417360
/* 0041734C 00000000 */   nop   
/* 00417350 91090022 */  lbu   $t1, 0x22($t0)
/* 00417354 8FB900C4 */  lw    $t9, 0xc4($sp)
/* 00417358 55200009 */  bnezl $t1, .L00417380
/* 0041735C 8F2D0000 */   lw    $t5, ($t9)
.L00417360:
/* 00417360 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417364 8F0B0000 */  lw    $t3, ($t8)
/* 00417368 2664010C */  addiu $a0, $s3, 0x10c
/* 0041736C 0320F809 */  jalr  $t9
/* 00417370 95650002 */   lhu   $a1, 2($t3)
/* 00417374 10000011 */  b     .L004173BC
/* 00417378 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041737C 8F2D0000 */  lw    $t5, ($t9)
.L00417380:
/* 00417380 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00417384 2664010C */  addiu $a0, $s3, 0x10c
/* 00417388 95A50002 */  lhu   $a1, 2($t5)
/* 0041738C 0320F809 */  jalr  $t9
/* 00417390 00000000 */   nop   
/* 00417394 10000009 */  b     .L004173BC
/* 00417398 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041739C:
/* 0041739C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004173A0 8F868044 */  lw    $a2, %got(RO_1000A644)($gp)
/* 004173A4 24040001 */  li    $a0, 1
/* 004173A8 24050421 */  li    $a1, 1057
/* 004173AC 2407000A */  li    $a3, 10
/* 004173B0 0320F809 */  jalr  $t9
/* 004173B4 24C6A644 */   addiu $a2, %lo(RO_1000A644) # addiu $a2, $a2, -0x59bc
/* 004173B8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004173BC:
/* 004173BC 8FBF0044 */  lw    $ra, 0x44($sp)
.L004173C0:
/* 004173C0 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004173C4 8FB10020 */  lw    $s1, 0x20($sp)
/* 004173C8 8FB20024 */  lw    $s2, 0x24($sp)
/* 004173CC 8FB30028 */  lw    $s3, 0x28($sp)
/* 004173D0 8FB4002C */  lw    $s4, 0x2c($sp)
/* 004173D4 8FB50030 */  lw    $s5, 0x30($sp)
/* 004173D8 8FB60034 */  lw    $s6, 0x34($sp)
/* 004173DC 8FB70038 */  lw    $s7, 0x38($sp)
/* 004173E0 8FBE0040 */  lw    $fp, 0x40($sp)
/* 004173E4 03E00008 */  jr    $ra
/* 004173E8 27BD00C0 */   addiu $sp, $sp, 0xc0

    .type func_004173EC, @function
func_004173EC:
    # 004175BC copypropagate
/* 004173EC 3C1C0FC0 */  .cpload $t9
/* 004173F0 279C2EA4 */  
/* 004173F4 0399E021 */  
/* 004173F8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004173FC AFB00018 */  sw    $s0, 0x18($sp)
/* 00417400 00808025 */  move  $s0, $a0
/* 00417404 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00417408 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041740C 10800016 */  beqz  $a0, .L00417468
/* 00417410 AFB1001C */   sw    $s1, 0x1c($sp)
/* 00417414 24110002 */  li    $s1, 2
/* 00417418 920E0014 */  lbu   $t6, 0x14($s0)
.L0041741C:
/* 0041741C 562E0010 */  bnel  $s1, $t6, .L00417460
/* 00417420 8E100024 */   lw    $s0, 0x24($s0)
/* 00417424 8E020020 */  lw    $v0, 0x20($s0)
/* 00417428 904F0000 */  lbu   $t7, ($v0)
/* 0041742C 562F000C */  bnel  $s1, $t7, .L00417460
/* 00417430 8E100024 */   lw    $s0, 0x24($s0)
/* 00417434 8F99843C */  lw    $t9, %call16(getproc)($gp)
/* 00417438 8C440020 */  lw    $a0, 0x20($v0)
/* 0041743C 0320F809 */  jalr  $t9
/* 00417440 00000000 */   nop   
/* 00417444 9058000F */  lbu   $t8, 0xf($v0)
/* 00417448 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041744C 53000004 */  beql  $t8, $zero, .L00417460
/* 00417450 8E100024 */   lw    $s0, 0x24($s0)
/* 00417454 10000005 */  b     .L0041746C
/* 00417458 24020001 */   li    $v0, 1
/* 0041745C 8E100024 */  lw    $s0, 0x24($s0)
.L00417460:
/* 00417460 5600FFEE */  bnezl $s0, .L0041741C
/* 00417464 920E0014 */   lbu   $t6, 0x14($s0)
.L00417468:
/* 00417468 00001025 */  move  $v0, $zero
.L0041746C:
/* 0041746C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00417470 8FB00018 */  lw    $s0, 0x18($sp)
/* 00417474 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00417478 03E00008 */  jr    $ra
/* 0041747C 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_00417480, @function
func_00417480:
    # 004175BC copypropagate
/* 00417480 3C1C0FC0 */  .cpload $t9
/* 00417484 279C2E10 */  
/* 00417488 0399E021 */  
/* 0041748C 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00417490 AFB10018 */  sw    $s1, 0x18($sp)
/* 00417494 8CB10024 */  lw    $s1, 0x24($a1)
/* 00417498 AFB30020 */  sw    $s3, 0x20($sp)
/* 0041749C AFB2001C */  sw    $s2, 0x1c($sp)
/* 004174A0 00809825 */  move  $s3, $a0
/* 004174A4 AFBF0034 */  sw    $ra, 0x34($sp)
/* 004174A8 AFBC0030 */  sw    $gp, 0x30($sp)
/* 004174AC AFB6002C */  sw    $s6, 0x2c($sp)
/* 004174B0 AFB50028 */  sw    $s5, 0x28($sp)
/* 004174B4 AFB40024 */  sw    $s4, 0x24($sp)
/* 004174B8 AFB00014 */  sw    $s0, 0x14($sp)
/* 004174BC 12200034 */  beqz  $s1, .L00417590
/* 004174C0 00009025 */   move  $s2, $zero
/* 004174C4 24160001 */  li    $s6, 1
/* 004174C8 24150004 */  li    $s5, 4
/* 004174CC 24140002 */  li    $s4, 2
/* 004174D0 92220009 */  lbu   $v0, 9($s1)
.L004174D4:
/* 004174D4 16820017 */  bne   $s4, $v0, .L00417534
/* 004174D8 00000000 */   nop   
/* 004174DC 922E0008 */  lbu   $t6, 8($s1)
/* 004174E0 15C00014 */  bnez  $t6, .L00417534
/* 004174E4 00000000 */   nop   
/* 004174E8 8E30000C */  lw    $s0, 0xc($s1)
/* 004174EC 920F0000 */  lbu   $t7, ($s0)
/* 004174F0 52AF0025 */  beql  $s5, $t7, .L00417588
/* 004174F4 8E310004 */   lw    $s1, 4($s1)
/* 004174F8 8E040028 */  lw    $a0, 0x28($s0)
/* 004174FC 8E05002C */  lw    $a1, 0x2c($s0)
/* 00417500 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00417504 AFA40000 */  sw    $a0, ($sp)
/* 00417508 AFA50004 */  sw    $a1, 4($sp)
/* 0041750C 8E660010 */  lw    $a2, 0x10($s3)
/* 00417510 AFA60008 */  sw    $a2, 8($sp)
/* 00417514 8E670014 */  lw    $a3, 0x14($s3)
/* 00417518 0320F809 */  jalr  $t9
/* 0041751C AFA7000C */   sw    $a3, 0xc($sp)
/* 00417520 10400018 */  beqz  $v0, .L00417584
/* 00417524 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00417528 960A0006 */  lhu   $t2, 6($s0)
/* 0041752C 10000015 */  b     .L00417584
/* 00417530 024A9021 */   addu  $s2, $s2, $t2
.L00417534:
/* 00417534 56C20014 */  bnel  $s6, $v0, .L00417588
/* 00417538 8E310004 */   lw    $s1, 4($s1)
/* 0041753C 922B0008 */  lbu   $t3, 8($s1)
/* 00417540 55600011 */  bnezl $t3, .L00417588
/* 00417544 8E310004 */   lw    $s1, 4($s1)
/* 00417548 8E2C000C */  lw    $t4, 0xc($s1)
/* 0041754C 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00417550 8D8D0004 */  lw    $t5, 4($t4)
/* 00417554 8DA40028 */  lw    $a0, 0x28($t5)
/* 00417558 AFA40000 */  sw    $a0, ($sp)
/* 0041755C 8DA5002C */  lw    $a1, 0x2c($t5)
/* 00417560 AFA50004 */  sw    $a1, 4($sp)
/* 00417564 8E660010 */  lw    $a2, 0x10($s3)
/* 00417568 AFA60008 */  sw    $a2, 8($sp)
/* 0041756C 8E670014 */  lw    $a3, 0x14($s3)
/* 00417570 0320F809 */  jalr  $t9
/* 00417574 AFA7000C */   sw    $a3, 0xc($sp)
/* 00417578 10400002 */  beqz  $v0, .L00417584
/* 0041757C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00417580 26520001 */  addiu $s2, $s2, 1
.L00417584:
/* 00417584 8E310004 */  lw    $s1, 4($s1)
.L00417588:
/* 00417588 5620FFD2 */  bnezl $s1, .L004174D4
/* 0041758C 92220009 */   lbu   $v0, 9($s1)
.L00417590:
/* 00417590 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00417594 02401025 */  move  $v0, $s2
/* 00417598 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041759C 8FB00014 */  lw    $s0, 0x14($sp)
/* 004175A0 8FB10018 */  lw    $s1, 0x18($sp)
/* 004175A4 8FB30020 */  lw    $s3, 0x20($sp)
/* 004175A8 8FB40024 */  lw    $s4, 0x24($sp)
/* 004175AC 8FB50028 */  lw    $s5, 0x28($sp)
/* 004175B0 8FB6002C */  lw    $s6, 0x2c($sp)
/* 004175B4 03E00008 */  jr    $ra
/* 004175B8 27BD0038 */   addiu $sp, $sp, 0x38

glabel copypropagate
    .ent copypropagate
    # 00456A2C oneproc
/* 004175BC 3C1C0FC0 */  .cpload $t9
/* 004175C0 279C2CD4 */  
/* 004175C4 0399E021 */  
/* 004175C8 27BDFF28 */  addiu $sp, $sp, -0xd8
/* 004175CC 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004175D0 AFBF0044 */  sw    $ra, 0x44($sp)
/* 004175D4 AFBE0040 */  sw    $fp, 0x40($sp)
/* 004175D8 AFBC003C */  sw    $gp, 0x3c($sp)
/* 004175DC AFB70038 */  sw    $s7, 0x38($sp)
/* 004175E0 AFB60034 */  sw    $s6, 0x34($sp)
/* 004175E4 AFB50030 */  sw    $s5, 0x30($sp)
/* 004175E8 AFB4002C */  sw    $s4, 0x2c($sp)
/* 004175EC AFB30028 */  sw    $s3, 0x28($sp)
/* 004175F0 AFB20024 */  sw    $s2, 0x24($sp)
/* 004175F4 AFB10020 */  sw    $s1, 0x20($sp)
/* 004175F8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004175FC 0320F809 */  jalr  $t9
/* 00417600 8F848CEC */   lw     $a0, %got(storeop)($gp)
/* 00417604 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417608 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0041760C 8F848CF0 */  lw     $a0, %got(trapop)($gp)
/* 00417610 0320F809 */  jalr  $t9
/* 00417614 00000000 */   nop   
/* 00417618 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041761C 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00417620 0320F809 */  jalr  $t9
/* 00417624 00000000 */   nop   
/* 00417628 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041762C 8F818BE8 */  lw     $at, %got(lastdftime)($gp)
/* 00417630 8F838BE0 */  lw     $v1, %got(numdataflow)($gp)
/* 00417634 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00417638 AC220000 */  sw    $v0, ($at)
/* 0041763C 8C6E0000 */  lw    $t6, ($v1)
/* 00417640 AC800004 */  sw    $zero, 4($a0)
/* 00417644 AC800000 */  sw    $zero, ($a0)
/* 00417648 25CF0001 */  addiu $t7, $t6, 1
/* 0041764C AC6F0000 */  sw    $t7, ($v1)
/* 00417650 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00417654 0320F809 */  jalr  $t9
/* 00417658 00000000 */   nop   
/* 0041765C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417660 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 00417664 8EB50000 */  lw    $s5, ($s5)
/* 00417668 12A00024 */  beqz  $s5, .L004176FC
/* 0041766C 00000000 */   nop   
.L00417670:
/* 00417670 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00417674 26B10144 */  addiu $s1, $s5, 0x144
/* 00417678 AEA00144 */  sw    $zero, 0x144($s5)
/* 0041767C AEA00148 */  sw    $zero, 0x148($s5)
/* 00417680 0320F809 */  jalr  $t9
/* 00417684 02202025 */   move  $a0, $s1
/* 00417688 8EB80014 */  lw    $t8, 0x14($s5)
/* 0041768C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417690 1300000A */  beqz  $t8, .L004176BC
/* 00417694 00000000 */   nop   
/* 00417698 92B90004 */  lbu   $t9, 4($s5)
/* 0041769C 17200007 */  bnez  $t9, .L004176BC
/* 004176A0 00000000 */   nop   
/* 004176A4 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 004176A8 02202025 */  move  $a0, $s1
/* 004176AC 8F858CEC */  lw     $a1, %got(storeop)($gp)
/* 004176B0 0320F809 */  jalr  $t9
/* 004176B4 00000000 */   nop   
/* 004176B8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004176BC:
/* 004176BC 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004176C0 26B0014C */  addiu $s0, $s5, 0x14c
/* 004176C4 AEA0014C */  sw    $zero, 0x14c($s5)
/* 004176C8 AEA00150 */  sw    $zero, 0x150($s5)
/* 004176CC 0320F809 */  jalr  $t9
/* 004176D0 02002025 */   move  $a0, $s0
/* 004176D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004176D8 02002025 */  move  $a0, $s0
/* 004176DC 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 004176E0 8F858CEC */  lw     $a1, %got(storeop)($gp)
/* 004176E4 0320F809 */  jalr  $t9
/* 004176E8 00000000 */   nop   
/* 004176EC 8EB5000C */  lw    $s5, 0xc($s5)
/* 004176F0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004176F4 16A0FFDE */  bnez  $s5, .L00417670
/* 004176F8 00000000 */   nop   
.L004176FC:
/* 004176FC 8F888B20 */  lw     $t0, %got(outofmem)($gp)
/* 00417700 91080000 */  lbu   $t0, ($t0)
/* 00417704 55000AC9 */  bnezl $t0, .L0041A22C
/* 00417708 8FBF0044 */   lw    $ra, 0x44($sp)
/* 0041770C 8F8A8A7C */  lw     $t2, %got(docopyprog)($gp)
/* 00417710 8F8989E0 */  lw     $t1, %got(bitposcount)($gp)
/* 00417714 8F8189E4 */  lw     $at, %got(oldbitposcount)($gp)
/* 00417718 914A0000 */  lbu   $t2, ($t2)
/* 0041771C 8D290000 */  lw    $t1, ($t1)
/* 00417720 1140058A */  beqz  $t2, .L00418D4C
/* 00417724 AC290000 */   sw    $t1, ($at)
.L00417728:
/* 00417728 8F8B8BDC */  lw     $t3, %got(dataflowiter)($gp)
/* 0041772C 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 00417730 8F818BDC */  lw     $at, %got(dataflowiter)($gp)
/* 00417734 8D6B0000 */  lw    $t3, ($t3)
/* 00417738 8EB50000 */  lw    $s5, ($s5)
/* 0041773C 00009025 */  move  $s2, $zero
/* 00417740 256C0001 */  addiu $t4, $t3, 1
/* 00417744 12A0003D */  beqz  $s5, .L0041783C
/* 00417748 AC2C0000 */   sw    $t4, ($at)
/* 0041774C 8EA20014 */  lw    $v0, 0x14($s5)
.L00417750:
/* 00417750 1040001E */  beqz  $v0, .L004177CC
/* 00417754 00000000 */   nop   
/* 00417758 16400007 */  bnez  $s2, .L00417778
/* 0041775C 00408025 */   move  $s0, $v0
/* 00417760 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00417764 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00417768 26A50144 */  addiu $a1, $s5, 0x144
/* 0041776C 0320F809 */  jalr  $t9
/* 00417770 00000000 */   nop   
/* 00417774 8FBC003C */  lw    $gp, 0x3c($sp)
.L00417778:
/* 00417778 1200000A */  beqz  $s0, .L004177A4
/* 0041777C 26B10144 */   addiu $s1, $s5, 0x144
.L00417780:
/* 00417780 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00417784 8E050000 */  lw    $a1, ($s0)
/* 00417788 02202025 */  move  $a0, $s1
/* 0041778C 0320F809 */  jalr  $t9
/* 00417790 24A5014C */   addiu $a1, $a1, 0x14c
/* 00417794 8E100004 */  lw    $s0, 4($s0)
/* 00417798 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041779C 1600FFF8 */  bnez  $s0, .L00417780
/* 004177A0 00000000 */   nop   
.L004177A4:
/* 004177A4 16400009 */  bnez  $s2, .L004177CC
/* 004177A8 00000000 */   nop   
/* 004177AC 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 004177B0 8F848D2C */  lw     $a0, %got(old)($gp)
/* 004177B4 26A50144 */  addiu $a1, $s5, 0x144
/* 004177B8 0320F809 */  jalr  $t9
/* 004177BC 00000000 */   nop   
/* 004177C0 14400002 */  bnez  $v0, .L004177CC
/* 004177C4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004177C8 24120001 */  li    $s2, 1
.L004177CC:
/* 004177CC 16400007 */  bnez  $s2, .L004177EC
/* 004177D0 26B10144 */   addiu $s1, $s5, 0x144
/* 004177D4 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 004177D8 8F848D2C */  lw     $a0, %got(old)($gp)
/* 004177DC 26A5014C */  addiu $a1, $s5, 0x14c
/* 004177E0 0320F809 */  jalr  $t9
/* 004177E4 00000000 */   nop   
/* 004177E8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004177EC:
/* 004177EC 8F9981CC */  lw    $t9, %call16(bvectglop)($gp)
/* 004177F0 26B0014C */  addiu $s0, $s5, 0x14c
/* 004177F4 02002025 */  move  $a0, $s0
/* 004177F8 26A50124 */  addiu $a1, $s5, 0x124
/* 004177FC 02203025 */  move  $a2, $s1
/* 00417800 0320F809 */  jalr  $t9
/* 00417804 26A7011C */   addiu $a3, $s5, 0x11c
/* 00417808 16400009 */  bnez  $s2, .L00417830
/* 0041780C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00417810 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00417814 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00417818 02002825 */  move  $a1, $s0
/* 0041781C 0320F809 */  jalr  $t9
/* 00417820 00000000 */   nop   
/* 00417824 14400002 */  bnez  $v0, .L00417830
/* 00417828 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041782C 24120001 */  li    $s2, 1
.L00417830:
/* 00417830 8EB5000C */  lw    $s5, 0xc($s5)
/* 00417834 56A0FFC6 */  bnezl $s5, .L00417750
/* 00417838 8EA20014 */   lw    $v0, 0x14($s5)
.L0041783C:
/* 0041783C 1640FFBA */  bnez  $s2, .L00417728
/* 00417840 00000000 */   nop   
/* 00417844 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00417848 0320F809 */  jalr  $t9
/* 0041784C 00000000 */   nop   
/* 00417850 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417854 8F8D8BD8 */  lw     $t5, %got(dataflowtime)($gp)
/* 00417858 8F8F8BE8 */  lw     $t7, %got(lastdftime)($gp)
/* 0041785C 8F818BD8 */  lw     $at, %got(dataflowtime)($gp)
/* 00417860 8DAD0000 */  lw    $t5, ($t5)
/* 00417864 8DEF0000 */  lw    $t7, ($t7)
/* 00417868 8F9589B0 */  lw     $s5, %got(graphtail)($gp)
/* 0041786C 01A27021 */  addu  $t6, $t5, $v0
/* 00417870 01CFC023 */  subu  $t8, $t6, $t7
/* 00417874 AC380000 */  sw    $t8, ($at)
/* 00417878 8F818A40 */  lw     $at, %got(curlocpg)($gp)
/* 0041787C 8EB50000 */  lw    $s5, ($s5)
/* 00417880 AC200000 */  sw    $zero, ($at)
/* 00417884 8F818A44 */  lw     $at, %got(curlocln)($gp)
/* 00417888 12A00530 */  beqz  $s5, .L00418D4C
/* 0041788C AC200000 */   sw    $zero, ($at)
/* 00417890 AFB50088 */  sw    $s5, 0x88($sp)
.L00417894:
/* 00417894 8EB2001C */  lw    $s2, 0x1c($s5)
/* 00417898 A3A000D2 */  sb    $zero, 0xd2($sp)
/* 0041789C AFB500D4 */  sw    $s5, 0xd4($sp)
/* 004178A0 92500000 */  lbu   $s0, ($s2)
.L004178A4:
/* 004178A4 2602FFE0 */  addiu $v0, $s0, -0x20
/* 004178A8 2C590060 */  sltiu $t9, $v0, 0x60
/* 004178AC 13200009 */  beqz  $t9, .L004178D4
/* 004178B0 00000000 */   nop   
/* 004178B4 8F8A8044 */  lw    $t2, %got(D_1000FF64)($gp)
/* 004178B8 00024143 */  sra   $t0, $v0, 5
/* 004178BC 00084880 */  sll   $t1, $t0, 2
/* 004178C0 254AFF64 */  addiu $t2, %lo(D_1000FF64) # addiu $t2, $t2, -0x9c
/* 004178C4 01495821 */  addu  $t3, $t2, $t1
/* 004178C8 8D6C0000 */  lw    $t4, ($t3)
/* 004178CC 004C6804 */  sllv  $t5, $t4, $v0
/* 004178D0 29B90000 */  slti  $t9, $t5, 0
.L004178D4:
/* 004178D4 132000BF */  beqz  $t9, .L00417BD4
/* 004178D8 2C4D0080 */   sltiu $t5, $v0, 0x80
/* 004178DC 924F0003 */  lbu   $t7, 3($s2)
/* 004178E0 AFB200AC */  sw    $s2, 0xac($sp)
/* 004178E4 15E000B7 */  bnez  $t7, .L00417BC4
/* 004178E8 00000000 */   nop   
/* 004178EC 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 004178F0 8E580004 */  lw    $t8, 4($s2)
/* 004178F4 0320F809 */  jalr  $t9
/* 004178F8 8F040034 */   lw    $a0, 0x34($t8)
/* 004178FC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417900 8E480004 */  lw    $t0, 4($s2)
/* 00417904 305E00FF */  andi  $fp, $v0, 0xff
/* 00417908 8F998018 */  lw    $t9, %got(func_0041550C)($gp)
/* 0041790C 8D040034 */  lw    $a0, 0x34($t0)
/* 00417910 AFB200AC */  sw    $s2, 0xac($sp)
/* 00417914 2739550C */  addiu $t9, %lo(func_0041550C) # addiu $t9, $t9, 0x550c
/* 00417918 27A200D8 */  addiu $v0, $sp, 0xd8
/* 0041791C 27A500B8 */  addiu $a1, $sp, 0xb8
/* 00417920 0320F809 */  jalr  $t9
/* 00417924 00003025 */   move  $a2, $zero
/* 00417928 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041792C 8FB600B8 */  lw    $s6, 0xb8($sp)
/* 00417930 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 00417934 914A0000 */  lbu   $t2, ($t2)
/* 00417938 55400A3C */  bnezl $t2, .L0041A22C
/* 0041793C 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00417940 12C000A0 */  beqz  $s6, .L00417BC4
/* 00417944 00000000 */   nop   
/* 00417948 92C90000 */  lbu   $t1, ($s6)
/* 0041794C 24010004 */  li    $at, 4
/* 00417950 55210008 */  bnel  $t1, $at, .L00417974
/* 00417954 8FB200AC */   lw    $s2, 0xac($sp)
/* 00417958 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0041795C 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 00417960 96C50002 */  lhu   $a1, 2($s6)
/* 00417964 0320F809 */  jalr  $t9
/* 00417968 00000000 */   nop   
/* 0041796C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417970 8FB200AC */  lw    $s2, 0xac($sp)
.L00417974:
/* 00417974 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00417978 02C03025 */  move  $a2, $s6
/* 0041797C 8E4B0004 */  lw    $t3, 4($s2)
/* 00417980 92440000 */  lbu   $a0, ($s2)
/* 00417984 0320F809 */  jalr  $t9
/* 00417988 8D650014 */   lw    $a1, 0x14($t3)
/* 0041798C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417990 8E4C0004 */  lw    $t4, 4($s2)
/* 00417994 8E570028 */  lw    $s7, 0x28($s2)
/* 00417998 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 0041799C 8D860014 */  lw    $a2, 0x14($t4)
/* 004179A0 AFB600B8 */  sw    $s6, 0xb8($sp)
/* 004179A4 AFA00014 */  sw    $zero, 0x14($sp)
/* 004179A8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004179AC 00402025 */  move  $a0, $v0
/* 004179B0 92450000 */  lbu   $a1, ($s2)
/* 004179B4 0320F809 */  jalr  $t9
/* 004179B8 02C03825 */   move  $a3, $s6
/* 004179BC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004179C0 0040A025 */  move  $s4, $v0
/* 004179C4 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 004179C8 91AD0000 */  lbu   $t5, ($t5)
/* 004179CC 55A00A17 */  bnezl $t5, .L0041A22C
/* 004179D0 8FBF0044 */   lw    $ra, 0x44($sp)
/* 004179D4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004179D8 8FB500D4 */  lw    $s5, 0xd4($sp)
/* 004179DC 94450002 */  lhu   $a1, 2($v0)
/* 004179E0 0320F809 */  jalr  $t9
/* 004179E4 26A4012C */   addiu $a0, $s5, 0x12c
/* 004179E8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004179EC AE920020 */  sw    $s2, 0x20($s4)
/* 004179F0 8E4E0004 */  lw    $t6, 4($s2)
/* 004179F4 8F99820C */  lw    $t9, %call16(entryant)($gp)
/* 004179F8 AE540028 */  sw    $s4, 0x28($s2)
/* 004179FC A2400001 */  sb    $zero, 1($s2)
/* 00417A00 0320F809 */  jalr  $t9
/* 00417A04 8DC40034 */   lw    $a0, 0x34($t6)
/* 00417A08 9259001C */  lbu   $t9, 0x1c($s2)
/* 00417A0C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417A10 53200014 */  beql  $t9, $zero, .L00417A64
/* 00417A14 9248001F */   lbu   $t0, 0x1f($s2)
/* 00417A18 924F001E */  lbu   $t7, 0x1e($s2)
/* 00417A1C 305800FF */  andi  $t8, $v0, 0xff
/* 00417A20 51E00010 */  beql  $t7, $zero, .L00417A64
/* 00417A24 9248001F */   lbu   $t0, 0x1f($s2)
/* 00417A28 5300000E */  beql  $t8, $zero, .L00417A64
/* 00417A2C 9248001F */   lbu   $t0, 0x1f($s2)
/* 00417A30 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00417A34 26B00104 */  addiu $s0, $s5, 0x104
/* 00417A38 02002025 */  move  $a0, $s0
/* 00417A3C 0320F809 */  jalr  $t9
/* 00417A40 96E50002 */   lhu   $a1, 2($s7)
/* 00417A44 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417A48 02002025 */  move  $a0, $s0
/* 00417A4C 96850002 */  lhu   $a1, 2($s4)
/* 00417A50 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417A54 0320F809 */  jalr  $t9
/* 00417A58 00000000 */   nop   
/* 00417A5C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417A60 9248001F */  lbu   $t0, 0x1f($s2)
.L00417A64:
/* 00417A64 11000009 */  beqz  $t0, .L00417A8C
/* 00417A68 00000000 */   nop   
/* 00417A6C 13C00007 */  beqz  $fp, .L00417A8C
/* 00417A70 00000000 */   nop   
/* 00417A74 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00417A78 26A40124 */  addiu $a0, $s5, 0x124
/* 00417A7C 96E50002 */  lhu   $a1, 2($s7)
/* 00417A80 0320F809 */  jalr  $t9
/* 00417A84 00000000 */   nop   
/* 00417A88 8FBC003C */  lw    $gp, 0x3c($sp)
.L00417A8C:
/* 00417A8C 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 00417A90 02E02025 */  move  $a0, $s7
/* 00417A94 02A02825 */  move  $a1, $s5
/* 00417A98 0320F809 */  jalr  $t9
/* 00417A9C 00000000 */   nop   
/* 00417AA0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417AA4 8E4A0004 */  lw    $t2, 4($s2)
/* 00417AA8 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00417AAC 8D440034 */  lw    $a0, 0x34($t2)
/* 00417AB0 0320F809 */  jalr  $t9
/* 00417AB4 00000000 */   nop   
/* 00417AB8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417ABC 10400002 */  beqz  $v0, .L00417AC8
/* 00417AC0 00408825 */   move  $s1, $v0
/* 00417AC4 9251001F */  lbu   $s1, 0x1f($s2)
.L00417AC8:
/* 00417AC8 322900FF */  andi  $t1, $s1, 0xff
/* 00417ACC 11200007 */  beqz  $t1, .L00417AEC
/* 00417AD0 323000FF */   andi  $s0, $s1, 0xff
/* 00417AD4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417AD8 26A40124 */  addiu $a0, $s5, 0x124
/* 00417ADC 96850002 */  lhu   $a1, 2($s4)
/* 00417AE0 0320F809 */  jalr  $t9
/* 00417AE4 00000000 */   nop   
/* 00417AE8 8FBC003C */  lw    $gp, 0x3c($sp)
.L00417AEC:
/* 00417AEC 8F8B89E4 */  lw     $t3, %got(oldbitposcount)($gp)
/* 00417AF0 96850002 */  lhu   $a1, 2($s4)
/* 00417AF4 AFB200AC */  sw    $s2, 0xac($sp)
/* 00417AF8 8D6B0000 */  lw    $t3, ($t3)
/* 00417AFC AFB400B0 */  sw    $s4, 0xb0($sp)
/* 00417B00 AFB500D4 */  sw    $s5, 0xd4($sp)
/* 00417B04 00AB082A */  slt   $at, $a1, $t3
/* 00417B08 1420002E */  bnez  $at, .L00417BC4
/* 00417B0C 2E020001 */   sltiu $v0, $s0, 1
/* 00417B10 1440000F */  bnez  $v0, .L00417B50
/* 00417B14 00408825 */   move  $s1, $v0
/* 00417B18 9251001F */  lbu   $s1, 0x1f($s2)
/* 00417B1C 2E310001 */  sltiu $s1, $s1, 1
/* 00417B20 5620000C */  bnezl $s1, .L00417B54
/* 00417B24 323300FF */   andi  $s3, $s1, 0xff
/* 00417B28 9251001D */  lbu   $s1, 0x1d($s2)
/* 00417B2C 2E310001 */  sltiu $s1, $s1, 1
/* 00417B30 56200008 */  bnezl $s1, .L00417B54
/* 00417B34 323300FF */   andi  $s3, $s1, 0xff
/* 00417B38 9251001E */  lbu   $s1, 0x1e($s2)
/* 00417B3C 2E310001 */  sltiu $s1, $s1, 1
/* 00417B40 56200004 */  bnezl $s1, .L00417B54
/* 00417B44 323300FF */   andi  $s3, $s1, 0xff
/* 00417B48 9251001C */  lbu   $s1, 0x1c($s2)
/* 00417B4C 2E310001 */  sltiu $s1, $s1, 1
.L00417B50:
/* 00417B50 323300FF */  andi  $s3, $s1, 0xff
.L00417B54:
/* 00417B54 14400007 */  bnez  $v0, .L00417B74
/* 00417B58 00408825 */   move  $s1, $v0
/* 00417B5C 9251001F */  lbu   $s1, 0x1f($s2)
/* 00417B60 2E310001 */  sltiu $s1, $s1, 1
/* 00417B64 56200004 */  bnezl $s1, .L00417B78
/* 00417B68 322C00FF */   andi  $t4, $s1, 0xff
/* 00417B6C 9251001E */  lbu   $s1, 0x1e($s2)
/* 00417B70 2E310001 */  sltiu $s1, $s1, 1
.L00417B74:
/* 00417B74 322C00FF */  andi  $t4, $s1, 0xff
.L00417B78:
/* 00417B78 51800007 */  beql  $t4, $zero, .L00417B98
/* 00417B7C AFB200AC */   sw    $s2, 0xac($sp)
/* 00417B80 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417B84 26A4011C */  addiu $a0, $s5, 0x11c
/* 00417B88 0320F809 */  jalr  $t9
/* 00417B8C 00000000 */   nop   
/* 00417B90 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417B94 AFB200AC */  sw    $s2, 0xac($sp)
.L00417B98:
/* 00417B98 AFB400B0 */  sw    $s4, 0xb0($sp)
/* 00417B9C 12600009 */  beqz  $s3, .L00417BC4
/* 00417BA0 AFB500D4 */   sw    $s5, 0xd4($sp)
/* 00417BA4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417BA8 26A4010C */  addiu $a0, $s5, 0x10c
/* 00417BAC 96850002 */  lhu   $a1, 2($s4)
/* 00417BB0 AFB400B0 */  sw    $s4, 0xb0($sp)
/* 00417BB4 0320F809 */  jalr  $t9
/* 00417BB8 AFB500D4 */   sw    $s5, 0xd4($sp)
/* 00417BBC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417BC0 AFB200AC */  sw    $s2, 0xac($sp)
.L00417BC4:
/* 00417BC4 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00417BC8 8FB200AC */  lw    $s2, 0xac($sp)
/* 00417BCC 1000044B */  b     .L00418CFC
/* 00417BD0 90420000 */   lbu   $v0, ($v0)
.L00417BD4:
/* 00417BD4 11A00009 */  beqz  $t5, .L00417BFC
/* 00417BD8 2E0B00A0 */   sltiu $t3, $s0, 0xa0
/* 00417BDC 8F8F8044 */  lw    $t7, %got(D_1000FF54)($gp)
/* 00417BE0 00027143 */  sra   $t6, $v0, 5
/* 00417BE4 000EC880 */  sll   $t9, $t6, 2
/* 00417BE8 25EFFF54 */  addiu $t7, %lo(D_1000FF54) # addiu $t7, $t7, -0xac
/* 00417BEC 01F9C021 */  addu  $t8, $t7, $t9
/* 00417BF0 8F080000 */  lw    $t0, ($t8)
/* 00417BF4 00485004 */  sllv  $t2, $t0, $v0
/* 00417BF8 294D0000 */  slti  $t5, $t2, 0
.L00417BFC:
/* 00417BFC 11A0040B */  beqz  $t5, .L00418C2C
/* 00417C00 00000000 */   nop   
/* 00417C04 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00417C08 8E440004 */  lw    $a0, 4($s2)
/* 00417C0C 0320F809 */  jalr  $t9
/* 00417C10 00000000 */   nop   
/* 00417C14 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417C18 10400007 */  beqz  $v0, .L00417C38
/* 00417C1C 00408825 */   move  $s1, $v0
/* 00417C20 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00417C24 8E440014 */  lw    $a0, 0x14($s2)
/* 00417C28 0320F809 */  jalr  $t9
/* 00417C2C 00000000 */   nop   
/* 00417C30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417C34 00408825 */  move  $s1, $v0
.L00417C38:
/* 00417C38 8F998018 */  lw    $t9, %got(func_0041550C)($gp)
/* 00417C3C 323E00FF */  andi  $fp, $s1, 0xff
/* 00417C40 8E440004 */  lw    $a0, 4($s2)
/* 00417C44 2739550C */  addiu $t9, %lo(func_0041550C) # addiu $t9, $t9, 0x550c
/* 00417C48 27A500BC */  addiu $a1, $sp, 0xbc
/* 00417C4C 00003025 */  move  $a2, $zero
/* 00417C50 27A200D8 */  addiu $v0, $sp, 0xd8
/* 00417C54 0320F809 */  jalr  $t9
/* 00417C58 AFB200AC */   sw    $s2, 0xac($sp)
/* 00417C5C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417C60 8FB200AC */  lw    $s2, 0xac($sp)
/* 00417C64 27A500B8 */  addiu $a1, $sp, 0xb8
/* 00417C68 8F998018 */  lw    $t9, %got(func_0041550C)($gp)
/* 00417C6C 00003025 */  move  $a2, $zero
/* 00417C70 27A200D8 */  addiu $v0, $sp, 0xd8
/* 00417C74 2739550C */  addiu $t9, %lo(func_0041550C) # addiu $t9, $t9, 0x550c
/* 00417C78 0320F809 */  jalr  $t9
/* 00417C7C 8E440014 */   lw    $a0, 0x14($s2)
/* 00417C80 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417C84 8FB300BC */  lw    $s3, 0xbc($sp)
/* 00417C88 8FB600B8 */  lw    $s6, 0xb8($sp)
/* 00417C8C 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 00417C90 916B0000 */  lbu   $t3, ($t3)
/* 00417C94 55600965 */  bnezl $t3, .L0041A22C
/* 00417C98 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00417C9C 16600004 */  bnez  $s3, .L00417CB0
/* 00417CA0 00000000 */   nop   
/* 00417CA4 12C003DD */  beqz  $s6, .L00418C1C
/* 00417CA8 00000000 */   nop   
/* 00417CAC AFB600B8 */  sw    $s6, 0xb8($sp)
.L00417CB0:
/* 00417CB0 1260000B */  beqz  $s3, .L00417CE0
/* 00417CB4 8FB600B8 */   lw    $s6, 0xb8($sp)
/* 00417CB8 926C0000 */  lbu   $t4, ($s3)
/* 00417CBC 24010004 */  li    $at, 4
/* 00417CC0 15810007 */  bne   $t4, $at, .L00417CE0
/* 00417CC4 00000000 */   nop   
/* 00417CC8 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00417CCC 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 00417CD0 96650002 */  lhu   $a1, 2($s3)
/* 00417CD4 0320F809 */  jalr  $t9
/* 00417CD8 00000000 */   nop   
/* 00417CDC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00417CE0:
/* 00417CE0 52C0000C */  beql  $s6, $zero, .L00417D14
/* 00417CE4 8FB200AC */   lw    $s2, 0xac($sp)
/* 00417CE8 92CE0000 */  lbu   $t6, ($s6)
/* 00417CEC 24010004 */  li    $at, 4
/* 00417CF0 55C10008 */  bnel  $t6, $at, .L00417D14
/* 00417CF4 8FB200AC */   lw    $s2, 0xac($sp)
/* 00417CF8 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00417CFC 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 00417D00 96C50002 */  lhu   $a1, 2($s6)
/* 00417D04 0320F809 */  jalr  $t9
/* 00417D08 00000000 */   nop   
/* 00417D0C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417D10 8FB200AC */  lw    $s2, 0xac($sp)
.L00417D14:
/* 00417D14 24010001 */  li    $at, 1
/* 00417D18 8E4F0004 */  lw    $t7, 4($s2)
/* 00417D1C 8E570028 */  lw    $s7, 0x28($s2)
/* 00417D20 91F90000 */  lbu   $t9, ($t7)
/* 00417D24 5721001A */  bnel  $t9, $at, .L00417D90
/* 00417D28 8E430004 */   lw    $v1, 4($s2)
/* 00417D2C 92580000 */  lbu   $t8, ($s2)
/* 00417D30 2708FFE0 */  addiu $t0, $t8, -0x20
/* 00417D34 2D0A0040 */  sltiu $t2, $t0, 0x40
/* 00417D38 11400009 */  beqz  $t2, .L00417D60
/* 00417D3C 00000000 */   nop   
/* 00417D40 8F8B8044 */  lw    $t3, %got(D_1000FF4C)($gp)
/* 00417D44 00084943 */  sra   $t1, $t0, 5
/* 00417D48 00096880 */  sll   $t5, $t1, 2
/* 00417D4C 256BFF4C */  addiu $t3, %lo(D_1000FF4C) # addiu $t3, $t3, -0xb4
/* 00417D50 016D6021 */  addu  $t4, $t3, $t5
/* 00417D54 8D8E0000 */  lw    $t6, ($t4)
/* 00417D58 010E7804 */  sllv  $t7, $t6, $t0
/* 00417D5C 29EA0000 */  slti  $t2, $t7, 0
.L00417D60:
/* 00417D60 5140000B */  beql  $t2, $zero, .L00417D90
/* 00417D64 8E430004 */   lw    $v1, 4($s2)
/* 00417D68 8F9983F0 */  lw    $t9, %call16(istrfold)($gp)
/* 00417D6C 02402025 */  move  $a0, $s2
/* 00417D70 0320F809 */  jalr  $t9
/* 00417D74 00000000 */   nop   
/* 00417D78 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417D7C 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 00417D80 93180000 */  lbu   $t8, ($t8)
/* 00417D84 57000929 */  bnezl $t8, .L0041A22C
/* 00417D88 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00417D8C 8E430004 */  lw    $v1, 4($s2)
.L00417D90:
/* 00417D90 92500000 */  lbu   $s0, ($s2)
/* 00417D94 24010002 */  li    $at, 2
/* 00417D98 90690000 */  lbu   $t1, ($v1)
/* 00417D9C 260BFF80 */  addiu $t3, $s0, -0x80
/* 00417DA0 2D6D0020 */  sltiu $t5, $t3, 0x20
/* 00417DA4 152100C2 */  bne   $t1, $at, .L004180B0
/* 00417DA8 000D6023 */   negu  $t4, $t5
/* 00417DAC 3C01FC00 */  lui   $at, 0xfc00
/* 00417DB0 01817024 */  and   $t6, $t4, $at
/* 00417DB4 016E4004 */  sllv  $t0, $t6, $t3
/* 00417DB8 050300BE */  bgezl $t0, .L004180B4
/* 00417DBC 2401007B */   li    $at, 123
/* 00417DC0 8E420014 */  lw    $v0, 0x14($s2)
/* 00417DC4 24010002 */  li    $at, 2
/* 00417DC8 904F0000 */  lbu   $t7, ($v0)
/* 00417DCC 55E100B9 */  bnel  $t7, $at, .L004180B4
/* 00417DD0 2401007B */   li    $at, 123
/* 00417DD4 9244002C */  lbu   $a0, 0x2c($s2)
/* 00417DD8 3C01000E */  lui   $at, 0xe
/* 00417DDC 320500FF */  andi  $a1, $s0, 0xff
/* 00417DE0 2C990020 */  sltiu $t9, $a0, 0x20
/* 00417DE4 00195023 */  negu  $t2, $t9
/* 00417DE8 0141C024 */  and   $t8, $t2, $at
/* 00417DEC 00984804 */  sllv  $t1, $t8, $a0
/* 00417DF0 052000AF */  bltz  $t1, .L004180B0
/* 00417DF4 24ADFF80 */   addiu $t5, $a1, -0x80
/* 00417DF8 2DA10006 */  sltiu $at, $t5, 6
/* 00417DFC 1020004C */  beqz  $at, .L00417F30
/* 00417E00 AFB600B8 */   sw    $s6, 0xb8($sp)
/* 00417E04 8F818044 */  lw    $at, %got(jtbl_1000A6C4)($gp)
/* 00417E08 000D6880 */  sll   $t5, $t5, 2
/* 00417E0C 002D0821 */  addu  $at, $at, $t5
/* 00417E10 8C2DA6C4 */  lw    $t5, %lo(jtbl_1000A6C4)($at)
/* 00417E14 01BC6821 */  addu  $t5, $t5, $gp
/* 00417E18 01A00008 */  jr    $t5
/* 00417E1C 00000000 */   nop   
.L00417E20:
/* 00417E20 8C4C0020 */  lw    $t4, 0x20($v0)
/* 00417E24 8C6E0020 */  lw    $t6, 0x20($v1)
/* 00417E28 018E5826 */  xor   $t3, $t4, $t6
/* 00417E2C 2D6B0001 */  sltiu $t3, $t3, 1
/* 00417E30 10000047 */  b     .L00417F50
/* 00417E34 A3AB0093 */   sb    $t3, 0x93($sp)
.L00417E38:
/* 00417E38 8C480020 */  lw    $t0, 0x20($v0)
/* 00417E3C 8C6F0020 */  lw    $t7, 0x20($v1)
/* 00417E40 010FC826 */  xor   $t9, $t0, $t7
/* 00417E44 0019C82B */  sltu  $t9, $zero, $t9
/* 00417E48 10000041 */  b     .L00417F50
/* 00417E4C A3B90093 */   sb    $t9, 0x93($sp)
.L00417E50:
/* 00417E50 24010006 */  li    $at, 6
/* 00417E54 54810007 */  bnel  $a0, $at, .L00417E74
/* 00417E58 8C6D0020 */   lw    $t5, 0x20($v1)
/* 00417E5C 8C6A0020 */  lw    $t2, 0x20($v1)
/* 00417E60 8C580020 */  lw    $t8, 0x20($v0)
/* 00417E64 0158482A */  slt   $t1, $t2, $t8
/* 00417E68 10000039 */  b     .L00417F50
/* 00417E6C A3A90093 */   sb    $t1, 0x93($sp)
/* 00417E70 8C6D0020 */  lw    $t5, 0x20($v1)
.L00417E74:
/* 00417E74 8C4C0020 */  lw    $t4, 0x20($v0)
/* 00417E78 01AC702B */  sltu  $t6, $t5, $t4
/* 00417E7C 10000034 */  b     .L00417F50
/* 00417E80 A3AE0093 */   sb    $t6, 0x93($sp)
.L00417E84:
/* 00417E84 24010006 */  li    $at, 6
/* 00417E88 54810008 */  bnel  $a0, $at, .L00417EAC
/* 00417E8C 8C590020 */   lw    $t9, 0x20($v0)
/* 00417E90 8C4B0020 */  lw    $t3, 0x20($v0)
/* 00417E94 8C680020 */  lw    $t0, 0x20($v1)
/* 00417E98 0168782A */  slt   $t7, $t3, $t0
/* 00417E9C 39EF0001 */  xori  $t7, $t7, 1
/* 00417EA0 1000002B */  b     .L00417F50
/* 00417EA4 A3AF0093 */   sb    $t7, 0x93($sp)
/* 00417EA8 8C590020 */  lw    $t9, 0x20($v0)
.L00417EAC:
/* 00417EAC 8C6A0020 */  lw    $t2, 0x20($v1)
/* 00417EB0 032AC02B */  sltu  $t8, $t9, $t2
/* 00417EB4 3B180001 */  xori  $t8, $t8, 1
/* 00417EB8 10000025 */  b     .L00417F50
/* 00417EBC A3B80093 */   sb    $t8, 0x93($sp)
.L00417EC0:
/* 00417EC0 24010006 */  li    $at, 6
/* 00417EC4 54810007 */  bnel  $a0, $at, .L00417EE4
/* 00417EC8 8C4E0020 */   lw    $t6, 0x20($v0)
/* 00417ECC 8C490020 */  lw    $t1, 0x20($v0)
/* 00417ED0 8C6D0020 */  lw    $t5, 0x20($v1)
/* 00417ED4 012D602A */  slt   $t4, $t1, $t5
/* 00417ED8 1000001D */  b     .L00417F50
/* 00417EDC A3AC0093 */   sb    $t4, 0x93($sp)
/* 00417EE0 8C4E0020 */  lw    $t6, 0x20($v0)
.L00417EE4:
/* 00417EE4 8C6B0020 */  lw    $t3, 0x20($v1)
/* 00417EE8 01CB402B */  sltu  $t0, $t6, $t3
/* 00417EEC 10000018 */  b     .L00417F50
/* 00417EF0 A3A80093 */   sb    $t0, 0x93($sp)
.L00417EF4:
/* 00417EF4 24010006 */  li    $at, 6
/* 00417EF8 54810008 */  bnel  $a0, $at, .L00417F1C
/* 00417EFC 8C780020 */   lw    $t8, 0x20($v1)
/* 00417F00 8C6F0020 */  lw    $t7, 0x20($v1)
/* 00417F04 8C590020 */  lw    $t9, 0x20($v0)
/* 00417F08 01F9502A */  slt   $t2, $t7, $t9
/* 00417F0C 394A0001 */  xori  $t2, $t2, 1
/* 00417F10 1000000F */  b     .L00417F50
/* 00417F14 A3AA0093 */   sb    $t2, 0x93($sp)
/* 00417F18 8C780020 */  lw    $t8, 0x20($v1)
.L00417F1C:
/* 00417F1C 8C490020 */  lw    $t1, 0x20($v0)
/* 00417F20 0309682B */  sltu  $t5, $t8, $t1
/* 00417F24 39AD0001 */  xori  $t5, $t5, 1
/* 00417F28 10000009 */  b     .L00417F50
/* 00417F2C A3AD0093 */   sb    $t5, 0x93($sp)
.L00417F30:
/* 00417F30 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00417F34 8F868044 */  lw    $a2, %got(RO_1000A6B9)($gp)
/* 00417F38 24040001 */  li    $a0, 1
/* 00417F3C 2405066C */  li    $a1, 1644
/* 00417F40 2407000A */  li    $a3, 10
/* 00417F44 0320F809 */  jalr  $t9
/* 00417F48 24C6A6B9 */   addiu $a2, %lo(RO_1000A6B9) # addiu $a2, $a2, -0x5947
/* 00417F4C 8FBC003C */  lw    $gp, 0x3c($sp)
.L00417F50:
/* 00417F50 93AC0093 */  lbu   $t4, 0x93($sp)
/* 00417F54 8FB500D4 */  lw    $s5, 0xd4($sp)
/* 00417F58 240F0060 */  li    $t7, 96
/* 00417F5C 1180003C */  beqz  $t4, .L00418050
/* 00417F60 26B00104 */   addiu $s0, $s5, 0x104
/* 00417F64 8E4B0004 */  lw    $t3, 4($s2)
/* 00417F68 240E000F */  li    $t6, 15
/* 00417F6C A24E0000 */  sb    $t6, ($s2)
/* 00417F70 AD600020 */  sw    $zero, 0x20($t3)
/* 00417F74 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 00417F78 00002025 */  move  $a0, $zero
/* 00417F7C 0320F809 */  jalr  $t9
/* 00417F80 00000000 */   nop   
/* 00417F84 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417F88 00402025 */  move  $a0, $v0
/* 00417F8C 8E450004 */  lw    $a1, 4($s2)
/* 00417F90 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 00417F94 00003025 */  move  $a2, $zero
/* 00417F98 00003825 */  move  $a3, $zero
/* 00417F9C 0320F809 */  jalr  $t9
/* 00417FA0 00000000 */   nop   
/* 00417FA4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417FA8 2404000F */  li    $a0, 15
/* 00417FAC 00402825 */  move  $a1, $v0
/* 00417FB0 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00417FB4 00003025 */  move  $a2, $zero
/* 00417FB8 0320F809 */  jalr  $t9
/* 00417FBC 00000000 */   nop   
/* 00417FC0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417FC4 8E480004 */  lw    $t0, 4($s2)
/* 00417FC8 00402025 */  move  $a0, $v0
/* 00417FCC 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 00417FD0 8D060014 */  lw    $a2, 0x14($t0)
/* 00417FD4 AFA00014 */  sw    $zero, 0x14($sp)
/* 00417FD8 AFA00010 */  sw    $zero, 0x10($sp)
/* 00417FDC 2405000F */  li    $a1, 15
/* 00417FE0 0320F809 */  jalr  $t9
/* 00417FE4 00003825 */   move  $a3, $zero
/* 00417FE8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00417FEC 8FB500D4 */  lw    $s5, 0xd4($sp)
/* 00417FF0 0040A025 */  move  $s4, $v0
/* 00417FF4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00417FF8 94450002 */  lhu   $a1, 2($v0)
/* 00417FFC 26A4012C */  addiu $a0, $s5, 0x12c
/* 00418000 0320F809 */  jalr  $t9
/* 00418004 00000000 */   nop   
/* 00418008 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041800C AE920020 */  sw    $s2, 0x20($s4)
/* 00418010 AE540028 */  sw    $s4, 0x28($s2)
/* 00418014 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418018 26B00104 */  addiu $s0, $s5, 0x104
/* 0041801C 02002025 */  move  $a0, $s0
/* 00418020 0320F809 */  jalr  $t9
/* 00418024 96850002 */   lhu   $a1, 2($s4)
/* 00418028 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041802C 26B10114 */  addiu $s1, $s5, 0x114
/* 00418030 02202025 */  move  $a0, $s1
/* 00418034 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418038 96850002 */  lhu   $a1, 2($s4)
/* 0041803C AFB400B0 */  sw    $s4, 0xb0($sp)
/* 00418040 0320F809 */  jalr  $t9
/* 00418044 00000000 */   nop   
/* 00418048 10000004 */  b     .L0041805C
/* 0041804C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00418050:
/* 00418050 A24F0000 */  sb    $t7, ($s2)
/* 00418054 AE400028 */  sw    $zero, 0x28($s2)
/* 00418058 26B10114 */  addiu $s1, $s5, 0x114
.L0041805C:
/* 0041805C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00418060 02002025 */  move  $a0, $s0
/* 00418064 96E50002 */  lhu   $a1, 2($s7)
/* 00418068 0320F809 */  jalr  $t9
/* 0041806C 00000000 */   nop   
/* 00418070 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418074 02202025 */  move  $a0, $s1
/* 00418078 96E50002 */  lhu   $a1, 2($s7)
/* 0041807C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00418080 0320F809 */  jalr  $t9
/* 00418084 00000000 */   nop   
/* 00418088 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041808C 02E02025 */  move  $a0, $s7
/* 00418090 02A02825 */  move  $a1, $s5
/* 00418094 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 00418098 AFB500D4 */  sw    $s5, 0xd4($sp)
/* 0041809C 0320F809 */  jalr  $t9
/* 004180A0 00000000 */   nop   
/* 004180A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004180A8 100002DC */  b     .L00418C1C
/* 004180AC AFB200AC */   sw    $s2, 0xac($sp)
.L004180B0:
/* 004180B0 2401007B */  li    $at, 123
.L004180B4:
/* 004180B4 160100D8 */  bne   $s0, $at, .L00418418
/* 004180B8 00000000 */   nop   
/* 004180BC 8C640028 */  lw    $a0, 0x28($v1)
/* 004180C0 8F998338 */  lw    $t9, %call16(isvarihash)($gp)
/* 004180C4 AFA40000 */  sw    $a0, ($sp)
/* 004180C8 8C65002C */  lw    $a1, 0x2c($v1)
/* 004180CC 0320F809 */  jalr  $t9
/* 004180D0 AFA50004 */   sw    $a1, 4($sp)
/* 004180D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004180D8 00402025 */  move  $a0, $v0
/* 004180DC 8E450004 */  lw    $a1, 4($s2)
/* 004180E0 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 004180E4 00003025 */  move  $a2, $zero
/* 004180E8 00003825 */  move  $a3, $zero
/* 004180EC 0320F809 */  jalr  $t9
/* 004180F0 00000000 */   nop   
/* 004180F4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004180F8 0040A025 */  move  $s4, $v0
/* 004180FC 8FB500D4 */  lw    $s5, 0xd4($sp)
/* 00418100 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 00418104 93180000 */  lbu   $t8, ($t8)
/* 00418108 57000848 */  bnezl $t8, .L0041A22C
/* 0041810C 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00418110 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418114 26A4012C */  addiu $a0, $s5, 0x12c
/* 00418118 94450002 */  lhu   $a1, 2($v0)
/* 0041811C 0320F809 */  jalr  $t9
/* 00418120 AFA4005C */   sw    $a0, 0x5c($sp)
/* 00418124 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418128 8FA4005C */  lw    $a0, 0x5c($sp)
/* 0041812C 96850024 */  lhu   $a1, 0x24($s4)
/* 00418130 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418134 0320F809 */  jalr  $t9
/* 00418138 00000000 */   nop   
/* 0041813C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418140 26BE010C */  addiu $fp, $s5, 0x10c
/* 00418144 03C02025 */  move  $a0, $fp
/* 00418148 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041814C 96850002 */  lhu   $a1, 2($s4)
/* 00418150 0320F809 */  jalr  $t9
/* 00418154 00000000 */   nop   
/* 00418158 9249001D */  lbu   $t1, 0x1d($s2)
/* 0041815C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418160 11200004 */  beqz  $t1, .L00418174
/* 00418164 00000000 */   nop   
/* 00418168 924D001C */  lbu   $t5, 0x1c($s2)
/* 0041816C 55A00008 */  bnezl $t5, .L00418190
/* 00418170 928C001A */   lbu   $t4, 0x1a($s4)
.L00418174:
/* 00418174 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418178 03C02025 */  move  $a0, $fp
/* 0041817C 96850024 */  lhu   $a1, 0x24($s4)
/* 00418180 0320F809 */  jalr  $t9
/* 00418184 00000000 */   nop   
/* 00418188 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041818C 928C001A */  lbu   $t4, 0x1a($s4)
.L00418190:
/* 00418190 1580000A */  bnez  $t4, .L004181BC
/* 00418194 00000000 */   nop   
/* 00418198 924E001C */  lbu   $t6, 0x1c($s2)
/* 0041819C 11C00007 */  beqz  $t6, .L004181BC
/* 004181A0 00000000 */   nop   
/* 004181A4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004181A8 26A40104 */  addiu $a0, $s5, 0x104
/* 004181AC 96850024 */  lhu   $a1, 0x24($s4)
/* 004181B0 0320F809 */  jalr  $t9
/* 004181B4 00000000 */   nop   
/* 004181B8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004181BC:
/* 004181BC 16C00003 */  bnez  $s6, .L004181CC
/* 004181C0 00000000 */   nop   
/* 004181C4 8E4B0014 */  lw    $t3, 0x14($s2)
/* 004181C8 8D760014 */  lw    $s6, 0x14($t3)
.L004181CC:
/* 004181CC 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 004181D0 8E480004 */  lw    $t0, 4($s2)
/* 004181D4 92440000 */  lbu   $a0, ($s2)
/* 004181D8 02C03025 */  move  $a2, $s6
/* 004181DC 0320F809 */  jalr  $t9
/* 004181E0 8D050014 */   lw    $a1, 0x14($t0)
/* 004181E4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004181E8 8E4F0004 */  lw    $t7, 4($s2)
/* 004181EC 00402025 */  move  $a0, $v0
/* 004181F0 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 004181F4 8DE60014 */  lw    $a2, 0x14($t7)
/* 004181F8 AFB600B8 */  sw    $s6, 0xb8($sp)
/* 004181FC AFA00014 */  sw    $zero, 0x14($sp)
/* 00418200 AFA00010 */  sw    $zero, 0x10($sp)
/* 00418204 92450000 */  lbu   $a1, ($s2)
/* 00418208 0320F809 */  jalr  $t9
/* 0041820C 02C03825 */   move  $a3, $s6
/* 00418210 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418214 0040A025 */  move  $s4, $v0
/* 00418218 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 0041821C 93390000 */  lbu   $t9, ($t9)
/* 00418220 57200802 */  bnezl $t9, .L0041A22C
/* 00418224 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00418228 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041822C 8FA4005C */  lw    $a0, 0x5c($sp)
/* 00418230 94450002 */  lhu   $a1, 2($v0)
/* 00418234 0320F809 */  jalr  $t9
/* 00418238 00000000 */   nop   
/* 0041823C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418240 AE920020 */  sw    $s2, 0x20($s4)
/* 00418244 8E4A0004 */  lw    $t2, 4($s2)
/* 00418248 8F99820C */  lw    $t9, %call16(entryant)($gp)
/* 0041824C AE540028 */  sw    $s4, 0x28($s2)
/* 00418250 A2400001 */  sb    $zero, 1($s2)
/* 00418254 0320F809 */  jalr  $t9
/* 00418258 8D440034 */   lw    $a0, 0x34($t2)
/* 0041825C 9258001C */  lbu   $t8, 0x1c($s2)
/* 00418260 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418264 53000014 */  beql  $t8, $zero, .L004182B8
/* 00418268 924C001F */   lbu   $t4, 0x1f($s2)
/* 0041826C 9249001E */  lbu   $t1, 0x1e($s2)
/* 00418270 304D00FF */  andi  $t5, $v0, 0xff
/* 00418274 51200010 */  beql  $t1, $zero, .L004182B8
/* 00418278 924C001F */   lbu   $t4, 0x1f($s2)
/* 0041827C 51A0000E */  beql  $t5, $zero, .L004182B8
/* 00418280 924C001F */   lbu   $t4, 0x1f($s2)
/* 00418284 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00418288 26B00104 */  addiu $s0, $s5, 0x104
/* 0041828C 02002025 */  move  $a0, $s0
/* 00418290 0320F809 */  jalr  $t9
/* 00418294 96E50002 */   lhu   $a1, 2($s7)
/* 00418298 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041829C 02002025 */  move  $a0, $s0
/* 004182A0 96850002 */  lhu   $a1, 2($s4)
/* 004182A4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004182A8 0320F809 */  jalr  $t9
/* 004182AC 00000000 */   nop   
/* 004182B0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004182B4 924C001F */  lbu   $t4, 0x1f($s2)
.L004182B8:
/* 004182B8 322E00FF */  andi  $t6, $s1, 0xff
/* 004182BC 11800009 */  beqz  $t4, .L004182E4
/* 004182C0 00000000 */   nop   
/* 004182C4 11C00007 */  beqz  $t6, .L004182E4
/* 004182C8 00000000 */   nop   
/* 004182CC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004182D0 26A40124 */  addiu $a0, $s5, 0x124
/* 004182D4 96E50002 */  lhu   $a1, 2($s7)
/* 004182D8 0320F809 */  jalr  $t9
/* 004182DC 00000000 */   nop   
/* 004182E0 8FBC003C */  lw    $gp, 0x3c($sp)
.L004182E4:
/* 004182E4 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 004182E8 02E02025 */  move  $a0, $s7
/* 004182EC 02A02825 */  move  $a1, $s5
/* 004182F0 0320F809 */  jalr  $t9
/* 004182F4 00000000 */   nop   
/* 004182F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004182FC 8E4B0004 */  lw    $t3, 4($s2)
/* 00418300 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00418304 8D640034 */  lw    $a0, 0x34($t3)
/* 00418308 0320F809 */  jalr  $t9
/* 0041830C 00000000 */   nop   
/* 00418310 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418314 10400002 */  beqz  $v0, .L00418320
/* 00418318 00408825 */   move  $s1, $v0
/* 0041831C 9251001F */  lbu   $s1, 0x1f($s2)
.L00418320:
/* 00418320 322800FF */  andi  $t0, $s1, 0xff
/* 00418324 11000007 */  beqz  $t0, .L00418344
/* 00418328 323000FF */   andi  $s0, $s1, 0xff
/* 0041832C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418330 26A40124 */  addiu $a0, $s5, 0x124
/* 00418334 96850002 */  lhu   $a1, 2($s4)
/* 00418338 0320F809 */  jalr  $t9
/* 0041833C 00000000 */   nop   
/* 00418340 8FBC003C */  lw    $gp, 0x3c($sp)
.L00418344:
/* 00418344 8F8F89E4 */  lw     $t7, %got(oldbitposcount)($gp)
/* 00418348 96850002 */  lhu   $a1, 2($s4)
/* 0041834C AFB400B0 */  sw    $s4, 0xb0($sp)
/* 00418350 8DEF0000 */  lw    $t7, ($t7)
/* 00418354 AFB500D4 */  sw    $s5, 0xd4($sp)
/* 00418358 2E020001 */  sltiu $v0, $s0, 1
/* 0041835C 00AF082A */  slt   $at, $a1, $t7
/* 00418360 1420002B */  bnez  $at, .L00418410
/* 00418364 00000000 */   nop   
/* 00418368 1440000F */  bnez  $v0, .L004183A8
/* 0041836C 00408825 */   move  $s1, $v0
/* 00418370 9251001F */  lbu   $s1, 0x1f($s2)
/* 00418374 2E310001 */  sltiu $s1, $s1, 1
/* 00418378 5620000C */  bnezl $s1, .L004183AC
/* 0041837C 323300FF */   andi  $s3, $s1, 0xff
/* 00418380 9251001D */  lbu   $s1, 0x1d($s2)
/* 00418384 2E310001 */  sltiu $s1, $s1, 1
/* 00418388 56200008 */  bnezl $s1, .L004183AC
/* 0041838C 323300FF */   andi  $s3, $s1, 0xff
/* 00418390 9251001E */  lbu   $s1, 0x1e($s2)
/* 00418394 2E310001 */  sltiu $s1, $s1, 1
/* 00418398 56200004 */  bnezl $s1, .L004183AC
/* 0041839C 323300FF */   andi  $s3, $s1, 0xff
/* 004183A0 9251001C */  lbu   $s1, 0x1c($s2)
/* 004183A4 2E310001 */  sltiu $s1, $s1, 1
.L004183A8:
/* 004183A8 323300FF */  andi  $s3, $s1, 0xff
.L004183AC:
/* 004183AC 14400007 */  bnez  $v0, .L004183CC
/* 004183B0 00408825 */   move  $s1, $v0
/* 004183B4 9251001F */  lbu   $s1, 0x1f($s2)
/* 004183B8 2E310001 */  sltiu $s1, $s1, 1
/* 004183BC 56200004 */  bnezl $s1, .L004183D0
/* 004183C0 323900FF */   andi  $t9, $s1, 0xff
/* 004183C4 9251001E */  lbu   $s1, 0x1e($s2)
/* 004183C8 2E310001 */  sltiu $s1, $s1, 1
.L004183CC:
/* 004183CC 323900FF */  andi  $t9, $s1, 0xff
.L004183D0:
/* 004183D0 13200007 */  beqz  $t9, .L004183F0
/* 004183D4 AFB500D4 */   sw    $s5, 0xd4($sp)
/* 004183D8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004183DC 26A4011C */  addiu $a0, $s5, 0x11c
/* 004183E0 AFB500D4 */  sw    $s5, 0xd4($sp)
/* 004183E4 0320F809 */  jalr  $t9
/* 004183E8 00000000 */   nop   
/* 004183EC 8FBC003C */  lw    $gp, 0x3c($sp)
.L004183F0:
/* 004183F0 12600007 */  beqz  $s3, .L00418410
/* 004183F4 AFB400B0 */   sw    $s4, 0xb0($sp)
/* 004183F8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004183FC 03C02025 */  move  $a0, $fp
/* 00418400 96850002 */  lhu   $a1, 2($s4)
/* 00418404 0320F809 */  jalr  $t9
/* 00418408 AFB400B0 */   sw    $s4, 0xb0($sp)
/* 0041840C 8FBC003C */  lw    $gp, 0x3c($sp)
.L00418410:
/* 00418410 10000202 */  b     .L00418C1C
/* 00418414 AFB200AC */   sw    $s2, 0xac($sp)
.L00418418:
/* 00418418 12600054 */  beqz  $s3, .L0041856C
/* 0041841C 2604FF80 */   addiu $a0, $s0, -0x80
/* 00418420 12C00052 */  beqz  $s6, .L0041856C
/* 00418424 2C8A0020 */   sltiu $t2, $a0, 0x20
/* 00418428 000AC023 */  negu  $t8, $t2
/* 0041842C 3C017800 */  lui   $at, 0x7800
/* 00418430 03014824 */  and   $t1, $t8, $at
/* 00418434 00896804 */  sllv  $t5, $t1, $a0
/* 00418438 05A1000D */  bgez  $t5, .L00418470
/* 0041843C 00000000 */   nop   
/* 00418440 92CC0000 */  lbu   $t4, ($s6)
/* 00418444 24010002 */  li    $at, 2
/* 00418448 15810009 */  bne   $t4, $at, .L00418470
/* 0041844C 00000000 */   nop   
/* 00418450 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00418454 02002025 */  move  $a0, $s0
/* 00418458 02602825 */  move  $a1, $s3
/* 0041845C 0320F809 */  jalr  $t9
/* 00418460 00003025 */   move  $a2, $zero
/* 00418464 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418468 10000008 */  b     .L0041848C
/* 0041846C 00402025 */   move  $a0, $v0
.L00418470:
/* 00418470 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00418474 02002025 */  move  $a0, $s0
/* 00418478 02602825 */  move  $a1, $s3
/* 0041847C 0320F809 */  jalr  $t9
/* 00418480 02C03025 */   move  $a2, $s6
/* 00418484 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418488 00402025 */  move  $a0, $v0
.L0041848C:
/* 0041848C 92500000 */  lbu   $s0, ($s2)
/* 00418490 02603025 */  move  $a2, $s3
/* 00418494 3C01FC00 */  lui   $at, 0xfc00
/* 00418498 260EFFE0 */  addiu $t6, $s0, -0x20
/* 0041849C 2DCB0080 */  sltiu $t3, $t6, 0x80
/* 004184A0 11600009 */  beqz  $t3, .L004184C8
/* 004184A4 02002825 */   move  $a1, $s0
/* 004184A8 8F998044 */  lw    $t9, %got(D_1000FF3C)($gp)
/* 004184AC 000E4143 */  sra   $t0, $t6, 5
/* 004184B0 00087880 */  sll   $t7, $t0, 2
/* 004184B4 2739FF3C */  addiu $t9, %lo(D_1000FF3C) # addiu $t9, $t9, -0xc4
/* 004184B8 032F5021 */  addu  $t2, $t9, $t7
/* 004184BC 8D580000 */  lw    $t8, ($t2)
/* 004184C0 01D84804 */  sllv  $t1, $t8, $t6
/* 004184C4 292B0000 */  slti  $t3, $t1, 0
.L004184C8:
/* 004184C8 1160000C */  beqz  $t3, .L004184FC
/* 004184CC 2619FF80 */   addiu $t9, $s0, -0x80
/* 004184D0 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 004184D4 8E4C0030 */  lw    $t4, 0x30($s2)
/* 004184D8 8E480020 */  lw    $t0, 0x20($s2)
/* 004184DC 02C03825 */  move  $a3, $s6
/* 004184E0 AFB600B8 */  sw    $s6, 0xb8($sp)
/* 004184E4 AFAC0010 */  sw    $t4, 0x10($sp)
/* 004184E8 0320F809 */  jalr  $t9
/* 004184EC AFA80014 */   sw    $t0, 0x14($sp)
/* 004184F0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004184F4 100000C5 */  b     .L0041880C
/* 004184F8 0040A025 */   move  $s4, $v0
.L004184FC:
/* 004184FC 2F2F0020 */  sltiu $t7, $t9, 0x20
/* 00418500 000F5023 */  negu  $t2, $t7
/* 00418504 0141C024 */  and   $t8, $t2, $at
/* 00418508 03387004 */  sllv  $t6, $t8, $t9
/* 0041850C 05C1000D */  bgez  $t6, .L00418544
/* 00418510 02002825 */   move  $a1, $s0
/* 00418514 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 00418518 8E490030 */  lw    $t1, 0x30($s2)
/* 0041851C 02002825 */  move  $a1, $s0
/* 00418520 02603025 */  move  $a2, $s3
/* 00418524 02C03825 */  move  $a3, $s6
/* 00418528 AFA00014 */  sw    $zero, 0x14($sp)
/* 0041852C AFB600B8 */  sw    $s6, 0xb8($sp)
/* 00418530 0320F809 */  jalr  $t9
/* 00418534 AFA90010 */   sw    $t1, 0x10($sp)
/* 00418538 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041853C 100000B3 */  b     .L0041880C
/* 00418540 0040A025 */   move  $s4, $v0
.L00418544:
/* 00418544 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 00418548 02603025 */  move  $a2, $s3
/* 0041854C 02C03825 */  move  $a3, $s6
/* 00418550 AFA00010 */  sw    $zero, 0x10($sp)
/* 00418554 AFA00014 */  sw    $zero, 0x14($sp)
/* 00418558 0320F809 */  jalr  $t9
/* 0041855C AFB600B8 */   sw    $s6, 0xb8($sp)
/* 00418560 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418564 100000A9 */  b     .L0041880C
/* 00418568 0040A025 */   move  $s4, $v0
.L0041856C:
/* 0041856C 16600056 */  bnez  $s3, .L004186C8
/* 00418570 2C990020 */   sltiu $t9, $a0, 0x20
/* 00418574 2C8D0020 */  sltiu $t5, $a0, 0x20
/* 00418578 000D5823 */  negu  $t3, $t5
/* 0041857C 3C017800 */  lui   $at, 0x7800
/* 00418580 01616024 */  and   $t4, $t3, $at
/* 00418584 008C4004 */  sllv  $t0, $t4, $a0
/* 00418588 0501000D */  bgez  $t0, .L004185C0
/* 0041858C 00000000 */   nop   
/* 00418590 92CF0000 */  lbu   $t7, ($s6)
/* 00418594 24010002 */  li    $at, 2
/* 00418598 15E10009 */  bne   $t7, $at, .L004185C0
/* 0041859C 00000000 */   nop   
/* 004185A0 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 004185A4 02002025 */  move  $a0, $s0
/* 004185A8 8C650014 */  lw    $a1, 0x14($v1)
/* 004185AC 0320F809 */  jalr  $t9
/* 004185B0 00003025 */   move  $a2, $zero
/* 004185B4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004185B8 10000008 */  b     .L004185DC
/* 004185BC 00402025 */   move  $a0, $v0
.L004185C0:
/* 004185C0 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 004185C4 02002025 */  move  $a0, $s0
/* 004185C8 8C650014 */  lw    $a1, 0x14($v1)
/* 004185CC 0320F809 */  jalr  $t9
/* 004185D0 02C03025 */   move  $a2, $s6
/* 004185D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004185D8 00402025 */  move  $a0, $v0
.L004185DC:
/* 004185DC 92500000 */  lbu   $s0, ($s2)
/* 004185E0 3C01FC00 */  lui   $at, 0xfc00
/* 004185E4 260AFFE0 */  addiu $t2, $s0, -0x20
/* 004185E8 2D580080 */  sltiu $t8, $t2, 0x80
/* 004185EC 13000009 */  beqz  $t8, .L00418614
/* 004185F0 02002825 */   move  $a1, $s0
/* 004185F4 8F898044 */  lw    $t1, %got(D_1000FF3C)($gp)
/* 004185F8 000AC943 */  sra   $t9, $t2, 5
/* 004185FC 00197080 */  sll   $t6, $t9, 2
/* 00418600 2529FF3C */  addiu $t1, %lo(D_1000FF3C) # addiu $t1, $t1, -0xc4
/* 00418604 012E6821 */  addu  $t5, $t1, $t6
/* 00418608 8DAB0000 */  lw    $t3, ($t5)
/* 0041860C 014B6004 */  sllv  $t4, $t3, $t2
/* 00418610 29980000 */  slti  $t8, $t4, 0
.L00418614:
/* 00418614 1300000E */  beqz  $t8, .L00418650
/* 00418618 260EFF80 */   addiu $t6, $s0, -0x80
/* 0041861C 8E4F0004 */  lw    $t7, 4($s2)
/* 00418620 8E590030 */  lw    $t9, 0x30($s2)
/* 00418624 8E490020 */  lw    $t1, 0x20($s2)
/* 00418628 8DE60014 */  lw    $a2, 0x14($t7)
/* 0041862C AFB90010 */  sw    $t9, 0x10($sp)
/* 00418630 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 00418634 AFB600B8 */  sw    $s6, 0xb8($sp)
/* 00418638 02C03825 */  move  $a3, $s6
/* 0041863C 0320F809 */  jalr  $t9
/* 00418640 AFA90014 */   sw    $t1, 0x14($sp)
/* 00418644 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418648 10000070 */  b     .L0041880C
/* 0041864C 0040A025 */   move  $s4, $v0
.L00418650:
/* 00418650 2DCD0020 */  sltiu $t5, $t6, 0x20
/* 00418654 000D5823 */  negu  $t3, $t5
/* 00418658 01615024 */  and   $t2, $t3, $at
/* 0041865C 01CA6004 */  sllv  $t4, $t2, $t6
/* 00418660 0581000E */  bgez  $t4, .L0041869C
/* 00418664 02002825 */   move  $a1, $s0
/* 00418668 8E480004 */  lw    $t0, 4($s2)
/* 0041866C 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 00418670 8E580030 */  lw    $t8, 0x30($s2)
/* 00418674 8D060014 */  lw    $a2, 0x14($t0)
/* 00418678 AFB600B8 */  sw    $s6, 0xb8($sp)
/* 0041867C AFA00014 */  sw    $zero, 0x14($sp)
/* 00418680 02002825 */  move  $a1, $s0
/* 00418684 02C03825 */  move  $a3, $s6
/* 00418688 0320F809 */  jalr  $t9
/* 0041868C AFB80010 */   sw    $t8, 0x10($sp)
/* 00418690 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418694 1000005D */  b     .L0041880C
/* 00418698 0040A025 */   move  $s4, $v0
.L0041869C:
/* 0041869C 8E4F0004 */  lw    $t7, 4($s2)
/* 004186A0 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 004186A4 02C03825 */  move  $a3, $s6
/* 004186A8 8DE60014 */  lw    $a2, 0x14($t7)
/* 004186AC AFB600B8 */  sw    $s6, 0xb8($sp)
/* 004186B0 AFA00014 */  sw    $zero, 0x14($sp)
/* 004186B4 0320F809 */  jalr  $t9
/* 004186B8 AFA00010 */   sw    $zero, 0x10($sp)
/* 004186BC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004186C0 10000052 */  b     .L0041880C
/* 004186C4 0040A025 */   move  $s4, $v0
.L004186C8:
/* 004186C8 00194823 */  negu  $t1, $t9
/* 004186CC 3C017800 */  lui   $at, 0x7800
/* 004186D0 01216824 */  and   $t5, $t1, $at
/* 004186D4 008D5804 */  sllv  $t3, $t5, $a0
/* 004186D8 AFB600B8 */  sw    $s6, 0xb8($sp)
/* 004186DC 0561000D */  bgez  $t3, .L00418714
/* 004186E0 8E420014 */   lw    $v0, 0x14($s2)
/* 004186E4 904A0000 */  lbu   $t2, ($v0)
/* 004186E8 24010002 */  li    $at, 2
/* 004186EC 15410009 */  bne   $t2, $at, .L00418714
/* 004186F0 00000000 */   nop   
/* 004186F4 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 004186F8 02002025 */  move  $a0, $s0
/* 004186FC 02602825 */  move  $a1, $s3
/* 00418700 0320F809 */  jalr  $t9
/* 00418704 00003025 */   move  $a2, $zero
/* 00418708 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041870C 10000008 */  b     .L00418730
/* 00418710 00402025 */   move  $a0, $v0
.L00418714:
/* 00418714 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 00418718 02002025 */  move  $a0, $s0
/* 0041871C 02602825 */  move  $a1, $s3
/* 00418720 0320F809 */  jalr  $t9
/* 00418724 8C460014 */   lw    $a2, 0x14($v0)
/* 00418728 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041872C 00402025 */  move  $a0, $v0
.L00418730:
/* 00418730 92500000 */  lbu   $s0, ($s2)
/* 00418734 02603025 */  move  $a2, $s3
/* 00418738 3C01FC00 */  lui   $at, 0xfc00
/* 0041873C 260EFFE0 */  addiu $t6, $s0, -0x20
/* 00418740 2DCC0080 */  sltiu $t4, $t6, 0x80
/* 00418744 11800009 */  beqz  $t4, .L0041876C
/* 00418748 02002825 */   move  $a1, $s0
/* 0041874C 8F8F8044 */  lw    $t7, %got(D_1000FF3C)($gp)
/* 00418750 000E4143 */  sra   $t0, $t6, 5
/* 00418754 0008C080 */  sll   $t8, $t0, 2
/* 00418758 25EFFF3C */  addiu $t7, %lo(D_1000FF3C) # addiu $t7, $t7, -0xc4
/* 0041875C 01F8C821 */  addu  $t9, $t7, $t8
/* 00418760 8F290000 */  lw    $t1, ($t9)
/* 00418764 01C96804 */  sllv  $t5, $t1, $t6
/* 00418768 29AC0000 */  slti  $t4, $t5, 0
.L0041876C:
/* 0041876C 1180000C */  beqz  $t4, .L004187A0
/* 00418770 2618FF80 */   addiu $t8, $s0, -0x80
/* 00418774 8E4A0014 */  lw    $t2, 0x14($s2)
/* 00418778 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 0041877C 8E480030 */  lw    $t0, 0x30($s2)
/* 00418780 8E4F0020 */  lw    $t7, 0x20($s2)
/* 00418784 8D470014 */  lw    $a3, 0x14($t2)
/* 00418788 AFA80010 */  sw    $t0, 0x10($sp)
/* 0041878C 0320F809 */  jalr  $t9
/* 00418790 AFAF0014 */   sw    $t7, 0x14($sp)
/* 00418794 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418798 1000001C */  b     .L0041880C
/* 0041879C 0040A025 */   move  $s4, $v0
.L004187A0:
/* 004187A0 2F190020 */  sltiu $t9, $t8, 0x20
/* 004187A4 00194823 */  negu  $t1, $t9
/* 004187A8 01217024 */  and   $t6, $t1, $at
/* 004187AC 030E6804 */  sllv  $t5, $t6, $t8
/* 004187B0 05A1000D */  bgez  $t5, .L004187E8
/* 004187B4 02002825 */   move  $a1, $s0
/* 004187B8 8E4B0014 */  lw    $t3, 0x14($s2)
/* 004187BC 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 004187C0 8E4C0030 */  lw    $t4, 0x30($s2)
/* 004187C4 8D670014 */  lw    $a3, 0x14($t3)
/* 004187C8 AFA00014 */  sw    $zero, 0x14($sp)
/* 004187CC 02002825 */  move  $a1, $s0
/* 004187D0 02603025 */  move  $a2, $s3
/* 004187D4 0320F809 */  jalr  $t9
/* 004187D8 AFAC0010 */   sw    $t4, 0x10($sp)
/* 004187DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004187E0 1000000A */  b     .L0041880C
/* 004187E4 0040A025 */   move  $s4, $v0
.L004187E8:
/* 004187E8 8E4A0014 */  lw    $t2, 0x14($s2)
/* 004187EC 8F998358 */  lw    $t9, %call16(searchstore)($gp)
/* 004187F0 02603025 */  move  $a2, $s3
/* 004187F4 8D470014 */  lw    $a3, 0x14($t2)
/* 004187F8 AFA00014 */  sw    $zero, 0x14($sp)
/* 004187FC 0320F809 */  jalr  $t9
/* 00418800 AFA00010 */   sw    $zero, 0x10($sp)
/* 00418804 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418808 0040A025 */  move  $s4, $v0
.L0041880C:
/* 0041880C 8F888B20 */  lw     $t0, %got(outofmem)($gp)
/* 00418810 91080000 */  lbu   $t0, ($t0)
/* 00418814 55000685 */  bnezl $t0, .L0041A22C
/* 00418818 8FBF0044 */   lw    $ra, 0x44($sp)
/* 0041881C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418820 8FB500D4 */  lw    $s5, 0xd4($sp)
/* 00418824 96850002 */  lhu   $a1, 2($s4)
/* 00418828 0320F809 */  jalr  $t9
/* 0041882C 26A4012C */   addiu $a0, $s5, 0x12c
/* 00418830 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418834 AE920020 */  sw    $s2, 0x20($s4)
/* 00418838 AE540028 */  sw    $s4, 0x28($s2)
/* 0041883C 8F99820C */  lw    $t9, %call16(entryant)($gp)
/* 00418840 8E440004 */  lw    $a0, 4($s2)
/* 00418844 0320F809 */  jalr  $t9
/* 00418848 00000000 */   nop   
/* 0041884C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418850 10400007 */  beqz  $v0, .L00418870
/* 00418854 00408825 */   move  $s1, $v0
/* 00418858 8F99820C */  lw    $t9, %call16(entryant)($gp)
/* 0041885C 8E440014 */  lw    $a0, 0x14($s2)
/* 00418860 0320F809 */  jalr  $t9
/* 00418864 00000000 */   nop   
/* 00418868 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041886C 00408825 */  move  $s1, $v0
.L00418870:
/* 00418870 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 00418874 02E02025 */  move  $a0, $s7
/* 00418878 02A02825 */  move  $a1, $s5
/* 0041887C 0320F809 */  jalr  $t9
/* 00418880 00000000 */   nop   
/* 00418884 924F0000 */  lbu   $t7, ($s2)
/* 00418888 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041888C 25F9FFE0 */  addiu $t9, $t7, -0x20
/* 00418890 2F290080 */  sltiu $t1, $t9, 0x80
/* 00418894 11200009 */  beqz  $t1, .L004188BC
/* 00418898 00000000 */   nop   
/* 0041889C 8F8D8044 */  lw    $t5, %got(D_1000FF2C)($gp)
/* 004188A0 00197143 */  sra   $t6, $t9, 5
/* 004188A4 000EC080 */  sll   $t8, $t6, 2
/* 004188A8 25ADFF2C */  addiu $t5, %lo(D_1000FF2C) # addiu $t5, $t5, -0xd4
/* 004188AC 01B85821 */  addu  $t3, $t5, $t8
/* 004188B0 8D6C0000 */  lw    $t4, ($t3)
/* 004188B4 032C5004 */  sllv  $t2, $t4, $t9
/* 004188B8 29490000 */  slti  $t1, $t2, 0
.L004188BC:
/* 004188BC 51200094 */  beql  $t1, $zero, .L00418B10
/* 004188C0 9249002C */   lbu   $t1, 0x2c($s2)
/* 004188C4 8E4F0020 */  lw    $t7, 0x20($s2)
/* 004188C8 AE8F001C */  sw    $t7, 0x1c($s4)
/* 004188CC 92500000 */  lbu   $s0, ($s2)
/* 004188D0 260EFFE0 */  addiu $t6, $s0, -0x20
/* 004188D4 2DCD0080 */  sltiu $t5, $t6, 0x80
/* 004188D8 11A00009 */  beqz  $t5, .L00418900
/* 004188DC 00000000 */   nop   
/* 004188E0 8F8C8044 */  lw    $t4, %got(D_1000FF3C)($gp)
/* 004188E4 000EC143 */  sra   $t8, $t6, 5
/* 004188E8 00185880 */  sll   $t3, $t8, 2
/* 004188EC 258CFF3C */  addiu $t4, %lo(D_1000FF3C) # addiu $t4, $t4, -0xc4
/* 004188F0 018BC821 */  addu  $t9, $t4, $t3
/* 004188F4 8F2A0000 */  lw    $t2, ($t9)
/* 004188F8 01CA4004 */  sllv  $t0, $t2, $t6
/* 004188FC 290D0000 */  slti  $t5, $t0, 0
.L00418900:
/* 00418900 51A00009 */  beql  $t5, $zero, .L00418928
/* 00418904 260BFFC0 */   addiu $t3, $s0, -0x40
/* 00418908 8E4F0030 */  lw    $t7, 0x30($s2)
/* 0041890C AE8F0024 */  sw    $t7, 0x24($s4)
/* 00418910 9258002C */  lbu   $t8, 0x2c($s2)
/* 00418914 A2980001 */  sb    $t8, 1($s4)
/* 00418918 924C002D */  lbu   $t4, 0x2d($s2)
/* 0041891C A28C0013 */  sb    $t4, 0x13($s4)
/* 00418920 92500000 */  lbu   $s0, ($s2)
/* 00418924 260BFFC0 */  addiu $t3, $s0, -0x40
.L00418928:
/* 00418928 2D790020 */  sltiu $t9, $t3, 0x20
/* 0041892C 00195023 */  negu  $t2, $t9
/* 00418930 314E00C0 */  andi  $t6, $t2, 0xc0
/* 00418934 016E4004 */  sllv  $t0, $t6, $t3
/* 00418938 05030007 */  bgezl $t0, .L00418958
/* 0041893C 924C001C */   lbu   $t4, 0x1c($s2)
/* 00418940 924D0033 */  lbu   $t5, 0x33($s2)
/* 00418944 92490032 */  lbu   $t1, 0x32($s2)
/* 00418948 000D7A00 */  sll   $t7, $t5, 8
/* 0041894C 012FC021 */  addu  $t8, $t1, $t7
/* 00418950 A6980024 */  sh    $t8, 0x24($s4)
/* 00418954 924C001C */  lbu   $t4, 0x1c($s2)
.L00418958:
/* 00418958 51800014 */  beql  $t4, $zero, .L004189AC
/* 0041895C 924E001F */   lbu   $t6, 0x1f($s2)
/* 00418960 9259001E */  lbu   $t9, 0x1e($s2)
/* 00418964 322A00FF */  andi  $t2, $s1, 0xff
/* 00418968 53200010 */  beql  $t9, $zero, .L004189AC
/* 0041896C 924E001F */   lbu   $t6, 0x1f($s2)
/* 00418970 5140000E */  beql  $t2, $zero, .L004189AC
/* 00418974 924E001F */   lbu   $t6, 0x1f($s2)
/* 00418978 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0041897C 26B00104 */  addiu $s0, $s5, 0x104
/* 00418980 02002025 */  move  $a0, $s0
/* 00418984 0320F809 */  jalr  $t9
/* 00418988 96E50002 */   lhu   $a1, 2($s7)
/* 0041898C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418990 02002025 */  move  $a0, $s0
/* 00418994 96850002 */  lhu   $a1, 2($s4)
/* 00418998 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041899C 0320F809 */  jalr  $t9
/* 004189A0 00000000 */   nop   
/* 004189A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004189A8 924E001F */  lbu   $t6, 0x1f($s2)
.L004189AC:
/* 004189AC 11C00009 */  beqz  $t6, .L004189D4
/* 004189B0 00000000 */   nop   
/* 004189B4 13C00007 */  beqz  $fp, .L004189D4
/* 004189B8 00000000 */   nop   
/* 004189BC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004189C0 26A40124 */  addiu $a0, $s5, 0x124
/* 004189C4 96E50002 */  lhu   $a1, 2($s7)
/* 004189C8 0320F809 */  jalr  $t9
/* 004189CC 00000000 */   nop   
/* 004189D0 8FBC003C */  lw    $gp, 0x3c($sp)
.L004189D4:
/* 004189D4 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 004189D8 8E440004 */  lw    $a0, 4($s2)
/* 004189DC 0320F809 */  jalr  $t9
/* 004189E0 00000000 */   nop   
/* 004189E4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004189E8 10400009 */  beqz  $v0, .L00418A10
/* 004189EC 00408825 */   move  $s1, $v0
/* 004189F0 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 004189F4 8E440014 */  lw    $a0, 0x14($s2)
/* 004189F8 0320F809 */  jalr  $t9
/* 004189FC 00000000 */   nop   
/* 00418A00 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418A04 10400002 */  beqz  $v0, .L00418A10
/* 00418A08 00408825 */   move  $s1, $v0
/* 00418A0C 9251001F */  lbu   $s1, 0x1f($s2)
.L00418A10:
/* 00418A10 322B00FF */  andi  $t3, $s1, 0xff
/* 00418A14 11600007 */  beqz  $t3, .L00418A34
/* 00418A18 323000FF */   andi  $s0, $s1, 0xff
/* 00418A1C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418A20 26A40124 */  addiu $a0, $s5, 0x124
/* 00418A24 96850002 */  lhu   $a1, 2($s4)
/* 00418A28 0320F809 */  jalr  $t9
/* 00418A2C 00000000 */   nop   
/* 00418A30 8FBC003C */  lw    $gp, 0x3c($sp)
.L00418A34:
/* 00418A34 8F8889E4 */  lw     $t0, %got(oldbitposcount)($gp)
/* 00418A38 96850002 */  lhu   $a1, 2($s4)
/* 00418A3C AFB400B0 */  sw    $s4, 0xb0($sp)
/* 00418A40 8D080000 */  lw    $t0, ($t0)
/* 00418A44 AFB500D4 */  sw    $s5, 0xd4($sp)
/* 00418A48 2E020001 */  sltiu $v0, $s0, 1
/* 00418A4C 00A8082A */  slt   $at, $a1, $t0
/* 00418A50 1420002C */  bnez  $at, .L00418B04
/* 00418A54 00000000 */   nop   
/* 00418A58 1440000F */  bnez  $v0, .L00418A98
/* 00418A5C 00408825 */   move  $s1, $v0
/* 00418A60 9251001D */  lbu   $s1, 0x1d($s2)
/* 00418A64 2E310001 */  sltiu $s1, $s1, 1
/* 00418A68 5620000C */  bnezl $s1, .L00418A9C
/* 00418A6C 323300FF */   andi  $s3, $s1, 0xff
/* 00418A70 9251001F */  lbu   $s1, 0x1f($s2)
/* 00418A74 2E310001 */  sltiu $s1, $s1, 1
/* 00418A78 56200008 */  bnezl $s1, .L00418A9C
/* 00418A7C 323300FF */   andi  $s3, $s1, 0xff
/* 00418A80 9251001C */  lbu   $s1, 0x1c($s2)
/* 00418A84 2E310001 */  sltiu $s1, $s1, 1
/* 00418A88 56200004 */  bnezl $s1, .L00418A9C
/* 00418A8C 323300FF */   andi  $s3, $s1, 0xff
/* 00418A90 9251001E */  lbu   $s1, 0x1e($s2)
/* 00418A94 2E310001 */  sltiu $s1, $s1, 1
.L00418A98:
/* 00418A98 323300FF */  andi  $s3, $s1, 0xff
.L00418A9C:
/* 00418A9C 14400007 */  bnez  $v0, .L00418ABC
/* 00418AA0 00408825 */   move  $s1, $v0
/* 00418AA4 9251001F */  lbu   $s1, 0x1f($s2)
/* 00418AA8 2E310001 */  sltiu $s1, $s1, 1
/* 00418AAC 56200004 */  bnezl $s1, .L00418AC0
/* 00418AB0 322D00FF */   andi  $t5, $s1, 0xff
/* 00418AB4 9251001E */  lbu   $s1, 0x1e($s2)
/* 00418AB8 2E310001 */  sltiu $s1, $s1, 1
.L00418ABC:
/* 00418ABC 322D00FF */  andi  $t5, $s1, 0xff
.L00418AC0:
/* 00418AC0 51A00007 */  beql  $t5, $zero, .L00418AE0
/* 00418AC4 AFB400B0 */   sw    $s4, 0xb0($sp)
/* 00418AC8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418ACC 26A4011C */  addiu $a0, $s5, 0x11c
/* 00418AD0 0320F809 */  jalr  $t9
/* 00418AD4 00000000 */   nop   
/* 00418AD8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418ADC AFB400B0 */  sw    $s4, 0xb0($sp)
.L00418AE0:
/* 00418AE0 12600008 */  beqz  $s3, .L00418B04
/* 00418AE4 AFB500D4 */   sw    $s5, 0xd4($sp)
/* 00418AE8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418AEC 26A4010C */  addiu $a0, $s5, 0x10c
/* 00418AF0 96850002 */  lhu   $a1, 2($s4)
/* 00418AF4 AFB400B0 */  sw    $s4, 0xb0($sp)
/* 00418AF8 0320F809 */  jalr  $t9
/* 00418AFC AFB500D4 */   sw    $s5, 0xd4($sp)
/* 00418B00 8FBC003C */  lw    $gp, 0x3c($sp)
.L00418B04:
/* 00418B04 10000045 */  b     .L00418C1C
/* 00418B08 AFB200AC */   sw    $s2, 0xac($sp)
/* 00418B0C 9249002C */  lbu   $t1, 0x2c($s2)
.L00418B10:
/* 00418B10 322F00FF */  andi  $t7, $s1, 0xff
/* 00418B14 11E0000D */  beqz  $t7, .L00418B4C
/* 00418B18 A2890001 */   sb    $t1, 1($s4)
/* 00418B1C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00418B20 26B00104 */  addiu $s0, $s5, 0x104
/* 00418B24 02002025 */  move  $a0, $s0
/* 00418B28 0320F809 */  jalr  $t9
/* 00418B2C 96E50002 */   lhu   $a1, 2($s7)
/* 00418B30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418B34 02002025 */  move  $a0, $s0
/* 00418B38 96850002 */  lhu   $a1, 2($s4)
/* 00418B3C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418B40 0320F809 */  jalr  $t9
/* 00418B44 00000000 */   nop   
/* 00418B48 8FBC003C */  lw    $gp, 0x3c($sp)
.L00418B4C:
/* 00418B4C 13C00007 */  beqz  $fp, .L00418B6C
/* 00418B50 00000000 */   nop   
/* 00418B54 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00418B58 26A40114 */  addiu $a0, $s5, 0x114
/* 00418B5C 96E50002 */  lhu   $a1, 2($s7)
/* 00418B60 0320F809 */  jalr  $t9
/* 00418B64 00000000 */   nop   
/* 00418B68 8FBC003C */  lw    $gp, 0x3c($sp)
.L00418B6C:
/* 00418B6C 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00418B70 8E440004 */  lw    $a0, 4($s2)
/* 00418B74 0320F809 */  jalr  $t9
/* 00418B78 00000000 */   nop   
/* 00418B7C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418B80 10400007 */  beqz  $v0, .L00418BA0
/* 00418B84 00408825 */   move  $s1, $v0
/* 00418B88 8F998208 */  lw    $t9, %call16(entryav)($gp)
/* 00418B8C 8E440014 */  lw    $a0, 0x14($s2)
/* 00418B90 0320F809 */  jalr  $t9
/* 00418B94 00000000 */   nop   
/* 00418B98 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418B9C 00408825 */  move  $s1, $v0
.L00418BA0:
/* 00418BA0 305800FF */  andi  $t8, $v0, 0xff
/* 00418BA4 13000007 */  beqz  $t8, .L00418BC4
/* 00418BA8 00000000 */   nop   
/* 00418BAC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418BB0 26A40114 */  addiu $a0, $s5, 0x114
/* 00418BB4 96850002 */  lhu   $a1, 2($s4)
/* 00418BB8 0320F809 */  jalr  $t9
/* 00418BBC 00000000 */   nop   
/* 00418BC0 8FBC003C */  lw    $gp, 0x3c($sp)
.L00418BC4:
/* 00418BC4 8F8C89E4 */  lw     $t4, %got(oldbitposcount)($gp)
/* 00418BC8 96850002 */  lhu   $a1, 2($s4)
/* 00418BCC AFB200AC */  sw    $s2, 0xac($sp)
/* 00418BD0 8D8C0000 */  lw    $t4, ($t4)
/* 00418BD4 AFB400B0 */  sw    $s4, 0xb0($sp)
/* 00418BD8 AFB500D4 */  sw    $s5, 0xd4($sp)
/* 00418BDC 00AC082A */  slt   $at, $a1, $t4
/* 00418BE0 1420000E */  bnez  $at, .L00418C1C
/* 00418BE4 00000000 */   nop   
/* 00418BE8 323900FF */  andi  $t9, $s1, 0xff
/* 00418BEC 2F2A0001 */  sltiu $t2, $t9, 1
/* 00418BF0 314E00FF */  andi  $t6, $t2, 0xff
/* 00418BF4 AFB200AC */  sw    $s2, 0xac($sp)
/* 00418BF8 11C00008 */  beqz  $t6, .L00418C1C
/* 00418BFC AFB500D4 */   sw    $s5, 0xd4($sp)
/* 00418C00 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00418C04 26A4010C */  addiu $a0, $s5, 0x10c
/* 00418C08 AFB500D4 */  sw    $s5, 0xd4($sp)
/* 00418C0C 0320F809 */  jalr  $t9
/* 00418C10 00000000 */   nop   
/* 00418C14 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418C18 AFB200AC */  sw    $s2, 0xac($sp)
.L00418C1C:
/* 00418C1C 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00418C20 8FB200AC */  lw    $s2, 0xac($sp)
/* 00418C24 10000035 */  b     .L00418CFC
/* 00418C28 90420000 */   lbu   $v0, ($v0)
.L00418C2C:
/* 00418C2C 1160000A */  beqz  $t3, .L00418C58
/* 00418C30 27A500B0 */   addiu $a1, $sp, 0xb0
/* 00418C34 8F898044 */  lw    $t1, %got(D_1000FF18)($gp)
/* 00418C38 00104143 */  sra   $t0, $s0, 5
/* 00418C3C 00086880 */  sll   $t5, $t0, 2
/* 00418C40 2529FF18 */  addiu $t1, %lo(D_1000FF18) # addiu $t1, $t1, -0xe8
/* 00418C44 012D7821 */  addu  $t7, $t1, $t5
/* 00418C48 8DF80000 */  lw    $t8, ($t7)
/* 00418C4C 02186004 */  sllv  $t4, $t8, $s0
/* 00418C50 29990000 */  slti  $t9, $t4, 0
/* 00418C54 03205825 */  move  $t3, $t9
.L00418C58:
/* 00418C58 1560001E */  bnez  $t3, .L00418CD4
/* 00418C5C 00003025 */   move  $a2, $zero
/* 00418C60 8F998018 */  lw    $t9, %got(func_0041550C)($gp)
/* 00418C64 8E440004 */  lw    $a0, 4($s2)
/* 00418C68 27A200D8 */  addiu $v0, $sp, 0xd8
/* 00418C6C 2739550C */  addiu $t9, %lo(func_0041550C) # addiu $t9, $t9, 0x550c
/* 00418C70 0320F809 */  jalr  $t9
/* 00418C74 AFB200AC */   sw    $s2, 0xac($sp)
/* 00418C78 8FB200AC */  lw    $s2, 0xac($sp)
/* 00418C7C 2401000F */  li    $at, 15
/* 00418C80 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418C84 924A0000 */  lbu   $t2, ($s2)
/* 00418C88 8FB400B0 */  lw    $s4, 0xb0($sp)
/* 00418C8C 1541000E */  bne   $t2, $at, .L00418CC8
/* 00418C90 00000000 */   nop   
/* 00418C94 1280000C */  beqz  $s4, .L00418CC8
/* 00418C98 00000000 */   nop   
/* 00418C9C 928E0000 */  lbu   $t6, ($s4)
/* 00418CA0 24010004 */  li    $at, 4
/* 00418CA4 AFB400B0 */  sw    $s4, 0xb0($sp)
/* 00418CA8 15C10007 */  bne   $t6, $at, .L00418CC8
/* 00418CAC 00000000 */   nop   
/* 00418CB0 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00418CB4 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 00418CB8 96850002 */  lhu   $a1, 2($s4)
/* 00418CBC 0320F809 */  jalr  $t9
/* 00418CC0 AFB400B0 */   sw    $s4, 0xb0($sp)
/* 00418CC4 8FBC003C */  lw    $gp, 0x3c($sp)
.L00418CC8:
/* 00418CC8 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00418CCC 1000000B */  b     .L00418CFC
/* 00418CD0 90420000 */   lbu   $v0, ($v0)
.L00418CD4:
/* 00418CD4 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00418CD8 24010051 */  li    $at, 81
/* 00418CDC 16010007 */  bne   $s0, $at, .L00418CFC
/* 00418CE0 90420000 */   lbu   $v0, ($v0)
/* 00418CE4 8E480014 */  lw    $t0, 0x14($s2)
/* 00418CE8 8F818A40 */  lw     $at, %got(curlocpg)($gp)
/* 00418CEC AC280000 */  sw    $t0, ($at)
/* 00418CF0 8E490018 */  lw    $t1, 0x18($s2)
/* 00418CF4 8F818A44 */  lw     $at, %got(curlocln)($gp)
/* 00418CF8 AC290000 */  sw    $t1, ($at)
.L00418CFC:
/* 00418CFC 5440054B */  bnezl $v0, .L0041A22C
/* 00418D00 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00418D04 8E420008 */  lw    $v0, 8($s2)
/* 00418D08 50400007 */  beql  $v0, $zero, .L00418D28
/* 00418D0C 93AC00D2 */   lbu   $t4, 0xd2($sp)
/* 00418D10 8C4D0010 */  lw    $t5, 0x10($v0)
/* 00418D14 8E4F0010 */  lw    $t7, 0x10($s2)
/* 00418D18 01AFC026 */  xor   $t8, $t5, $t7
/* 00418D1C 0018C02B */  sltu  $t8, $zero, $t8
/* 00418D20 A3B800D2 */  sb    $t8, 0xd2($sp)
/* 00418D24 93AC00D2 */  lbu   $t4, 0xd2($sp)
.L00418D28:
/* 00418D28 00409025 */  move  $s2, $v0
/* 00418D2C 55800004 */  bnezl $t4, .L00418D40
/* 00418D30 8FB90088 */   lw    $t9, 0x88($sp)
/* 00418D34 5440FADB */  bnezl $v0, .L004178A4
/* 00418D38 92500000 */   lbu   $s0, ($s2)
/* 00418D3C 8FB90088 */  lw    $t9, 0x88($sp)
.L00418D40:
/* 00418D40 8F350010 */  lw    $s5, 0x10($t9)
/* 00418D44 56A0FAD3 */  bnezl $s5, .L00417894
/* 00418D48 AFB50088 */   sw    $s5, 0x88($sp)
.L00418D4C:
/* 00418D4C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418D50 8F848CD4 */  lw     $a0, %got(varbits)($gp)
/* 00418D54 0320F809 */  jalr  $t9
/* 00418D58 00000000 */   nop   
/* 00418D5C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418D60 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418D64 8F848CE0 */  lw     $a0, %got(asgnbits)($gp)
/* 00418D68 0320F809 */  jalr  $t9
/* 00418D6C 00000000 */   nop   
/* 00418D70 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418D74 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418D78 8F848CE8 */  lw     $a0, %got(slasgnbits)($gp)
/* 00418D7C 0320F809 */  jalr  $t9
/* 00418D80 00000000 */   nop   
/* 00418D84 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418D88 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418D8C 8F848CEC */  lw     $a0, %got(storeop)($gp)
/* 00418D90 0320F809 */  jalr  $t9
/* 00418D94 00000000 */   nop   
/* 00418D98 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418D9C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418DA0 8F848CF0 */  lw     $a0, %got(trapop)($gp)
/* 00418DA4 0320F809 */  jalr  $t9
/* 00418DA8 00000000 */   nop   
/* 00418DAC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418DB0 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418DB4 8F848CF4 */  lw     $a0, %got(trapconstop)($gp)
/* 00418DB8 0320F809 */  jalr  $t9
/* 00418DBC 00000000 */   nop   
/* 00418DC0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418DC4 8F818C0C */  lw     $at, %got(aliasedlu)($gp)
/* 00418DC8 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 00418DCC AC200000 */  sw    $zero, ($at)
/* 00418DD0 8F818C10 */  lw     $at, %got(aliasedoc)($gp)
/* 00418DD4 8EB50000 */  lw    $s5, ($s5)
/* 00418DD8 AC200000 */  sw    $zero, ($at)
.L00418DDC:
/* 00418DDC 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418DE0 26A40104 */  addiu $a0, $s5, 0x104
/* 00418DE4 0320F809 */  jalr  $t9
/* 00418DE8 00000000 */   nop   
/* 00418DEC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418DF0 26A40114 */  addiu $a0, $s5, 0x114
/* 00418DF4 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418DF8 0320F809 */  jalr  $t9
/* 00418DFC 00000000 */   nop   
/* 00418E00 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418E04 26BE010C */  addiu $fp, $s5, 0x10c
/* 00418E08 03C02025 */  move  $a0, $fp
/* 00418E0C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418E10 0320F809 */  jalr  $t9
/* 00418E14 00000000 */   nop   
/* 00418E18 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418E1C 26A40124 */  addiu $a0, $s5, 0x124
/* 00418E20 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418E24 0320F809 */  jalr  $t9
/* 00418E28 00000000 */   nop   
/* 00418E2C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418E30 26A4011C */  addiu $a0, $s5, 0x11c
/* 00418E34 AFA40060 */  sw    $a0, 0x60($sp)
/* 00418E38 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418E3C 0320F809 */  jalr  $t9
/* 00418E40 00000000 */   nop   
/* 00418E44 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418E48 26A4012C */  addiu $a0, $s5, 0x12c
/* 00418E4C AFA4005C */  sw    $a0, 0x5c($sp)
/* 00418E50 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418E54 0320F809 */  jalr  $t9
/* 00418E58 00000000 */   nop   
/* 00418E5C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418E60 26B100F4 */  addiu $s1, $s5, 0xf4
/* 00418E64 02202025 */  move  $a0, $s1
/* 00418E68 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00418E6C 0320F809 */  jalr  $t9
/* 00418E70 00000000 */   nop   
/* 00418E74 8EA30020 */  lw    $v1, 0x20($s5)
/* 00418E78 24010017 */  li    $at, 23
/* 00418E7C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418E80 906B0000 */  lbu   $t3, ($v1)
/* 00418E84 55610041 */  bnel  $t3, $at, .L00418F8C
/* 00418E88 8EB80024 */   lw    $t8, 0x24($s5)
/* 00418E8C 8EAA0018 */  lw    $t2, 0x18($s5)
/* 00418E90 5140003E */  beql  $t2, $zero, .L00418F8C
/* 00418E94 8EB80024 */   lw    $t8, 0x24($s5)
/* 00418E98 8F8E8B6C */  lw     $t6, %got(curproc)($gp)
/* 00418E9C 8DCE0000 */  lw    $t6, ($t6)
/* 00418EA0 91C80014 */  lbu   $t0, 0x14($t6)
/* 00418EA4 51000039 */  beql  $t0, $zero, .L00418F8C
/* 00418EA8 8EB80024 */   lw    $t8, 0x24($s5)
/* 00418EAC 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 00418EB0 24010004 */  li    $at, 4
/* 00418EB4 90420000 */  lbu   $v0, ($v0)
/* 00418EB8 1041000F */  beq   $v0, $at, .L00418EF8
/* 00418EBC 00000000 */   nop   
/* 00418EC0 54400032 */  bnezl $v0, .L00418F8C
/* 00418EC4 8EB80024 */   lw    $t8, 0x24($s5)
/* 00418EC8 8C690014 */  lw    $t1, 0x14($v1)
/* 00418ECC 912D000F */  lbu   $t5, 0xf($t1)
/* 00418ED0 15A00009 */  bnez  $t5, .L00418EF8
/* 00418ED4 00000000 */   nop   
/* 00418ED8 8F998018 */  lw    $t9, %got(func_004173EC)($gp)
/* 00418EDC 8C640024 */  lw    $a0, 0x24($v1)
/* 00418EE0 27A200D8 */  addiu $v0, $sp, 0xd8
/* 00418EE4 273973EC */  addiu $t9, %lo(func_004173EC) # addiu $t9, $t9, 0x73ec
/* 00418EE8 0320F809 */  jalr  $t9
/* 00418EEC 00000000 */   nop   
/* 00418EF0 10400025 */  beqz  $v0, .L00418F88
/* 00418EF4 8FBC003C */   lw    $gp, 0x3c($sp)
.L00418EF8:
/* 00418EF8 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00418EFC 02202025 */  move  $a0, $s1
/* 00418F00 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00418F04 0320F809 */  jalr  $t9
/* 00418F08 00000000 */   nop   
/* 00418F0C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418F10 02202025 */  move  $a0, $s1
/* 00418F14 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00418F18 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 00418F1C 0320F809 */  jalr  $t9
/* 00418F20 00000000 */   nop   
/* 00418F24 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418F28 8F908D74 */  lw     $s0, %got(r2bitpos)($gp)
/* 00418F2C 8E050000 */  lw    $a1, ($s0)
.L00418F30:
/* 00418F30 2401FFFF */  li    $at, -1
/* 00418F34 10A1000D */  beq   $a1, $at, .L00418F6C
/* 00418F38 00000000 */   nop   
/* 00418F3C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00418F40 02202025 */  move  $a0, $s1
/* 00418F44 0320F809 */  jalr  $t9
/* 00418F48 00000000 */   nop   
/* 00418F4C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00418F50 8E050000 */  lw    $a1, ($s0)
/* 00418F54 02202025 */  move  $a0, $s1
/* 00418F58 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00418F5C 24A50001 */  addiu $a1, $a1, 1
/* 00418F60 0320F809 */  jalr  $t9
/* 00418F64 00000000 */   nop   
/* 00418F68 8FBC003C */  lw    $gp, 0x3c($sp)
.L00418F6C:
/* 00418F6C 8F8F8D74 */  lw     $t7, %got(r2bitpos)($gp)
/* 00418F70 26100004 */  addiu $s0, $s0, 4
/* 00418F74 25EF000C */  addiu $t7, $t7, 0xc
/* 00418F78 560FFFED */  bnel  $s0, $t7, .L00418F30
/* 00418F7C 8E050000 */   lw    $a1, ($s0)
/* 00418F80 10000048 */  b     .L004190A4
/* 00418F84 00000000 */   nop   
.L00418F88:
/* 00418F88 8EB80024 */  lw    $t8, 0x24($s5)
.L00418F8C:
/* 00418F8C 13000045 */  beqz  $t8, .L004190A4
/* 00418F90 00000000 */   nop   
/* 00418F94 8F9289E0 */  lw     $s2, %got(bitposcount)($gp)
/* 00418F98 0000A025 */  move  $s4, $zero
/* 00418F9C 8E520000 */  lw    $s2, ($s2)
/* 00418FA0 2652FFFF */  addiu $s2, $s2, -1
/* 00418FA4 0640003F */  bltz  $s2, .L004190A4
/* 00418FA8 26520001 */   addiu $s2, $s2, 1
.L00418FAC:
/* 00418FAC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00418FB0 02802025 */  move  $a0, $s4
/* 00418FB4 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00418FB8 0320F809 */  jalr  $t9
/* 00418FBC 00000000 */   nop   
/* 00418FC0 10400035 */  beqz  $v0, .L00419098
/* 00418FC4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00418FC8 8F8C89EC */  lw     $t4, %got(bittab)($gp)
/* 00418FCC 0014C8C0 */  sll   $t9, $s4, 3
/* 00418FD0 8D8C0000 */  lw    $t4, ($t4)
/* 00418FD4 01995821 */  addu  $t3, $t4, $t9
/* 00418FD8 8D700000 */  lw    $s0, ($t3)
/* 00418FDC 920A0019 */  lbu   $t2, 0x19($s0)
/* 00418FE0 5540002E */  bnezl $t2, .L0041909C
/* 00418FE4 26940001 */   addiu $s4, $s4, 1
/* 00418FE8 920E001A */  lbu   $t6, 0x1a($s0)
/* 00418FEC 55C0002B */  bnezl $t6, .L0041909C
/* 00418FF0 26940001 */   addiu $s4, $s4, 1
/* 00418FF4 8F9983D4 */  lw    $t9, %call16(indirectaccessed)($gp)
/* 00418FF8 8E040010 */  lw    $a0, 0x10($s0)
/* 00418FFC 8E050014 */  lw    $a1, 0x14($s0)
/* 00419000 92060018 */  lbu   $a2, 0x18($s0)
/* 00419004 8EA70024 */  lw    $a3, 0x24($s5)
/* 00419008 AFA40000 */  sw    $a0, ($sp)
/* 0041900C 0320F809 */  jalr  $t9
/* 00419010 AFA50004 */   sw    $a1, 4($sp)
/* 00419014 10400020 */  beqz  $v0, .L00419098
/* 00419018 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041901C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419020 02202025 */  move  $a0, $s1
/* 00419024 02802825 */  move  $a1, $s4
/* 00419028 0320F809 */  jalr  $t9
/* 0041902C 00000000 */   nop   
/* 00419030 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419034 02202025 */  move  $a0, $s1
/* 00419038 26850001 */  addiu $a1, $s4, 1
/* 0041903C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419040 0320F809 */  jalr  $t9
/* 00419044 00000000 */   nop   
/* 00419048 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041904C 8F828C0C */  lw     $v0, %got(aliasedlu)($gp)
/* 00419050 8F988ADC */  lw     $t8, %got(dowhyuncolor)($gp)
/* 00419054 8C4D0000 */  lw    $t5, ($v0)
/* 00419058 25AF0001 */  addiu $t7, $t5, 1
/* 0041905C AC4F0000 */  sw    $t7, ($v0)
/* 00419060 93180000 */  lbu   $t8, ($t8)
/* 00419064 5300000D */  beql  $t8, $zero, .L0041909C
/* 00419068 26940001 */   addiu $s4, $s4, 1
/* 0041906C 8F998018 */  lw    $t9, %got(func_00417480)($gp)
/* 00419070 02002025 */  move  $a0, $s0
/* 00419074 02A02825 */  move  $a1, $s5
/* 00419078 27397480 */  addiu $t9, %lo(func_00417480) # addiu $t9, $t9, 0x7480
/* 0041907C 0320F809 */  jalr  $t9
/* 00419080 27A200D8 */   addiu $v0, $sp, 0xd8
/* 00419084 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419088 8F838C10 */  lw     $v1, %got(aliasedoc)($gp)
/* 0041908C 8C6C0000 */  lw    $t4, ($v1)
/* 00419090 0182C821 */  addu  $t9, $t4, $v0
/* 00419094 AC790000 */  sw    $t9, ($v1)
.L00419098:
/* 00419098 26940001 */  addiu $s4, $s4, 1
.L0041909C:
/* 0041909C 1692FFC3 */  bne   $s4, $s2, .L00418FAC
/* 004190A0 00000000 */   nop   
.L004190A4:
/* 004190A4 8F9789E0 */  lw     $s7, %got(bitposcount)($gp)
/* 004190A8 8F9289E4 */  lw     $s2, %got(oldbitposcount)($gp)
/* 004190AC 8EF70000 */  lw    $s7, ($s7)
/* 004190B0 8E520000 */  lw    $s2, ($s2)
/* 004190B4 26F7FFFF */  addiu $s7, $s7, -1
/* 004190B8 02F2082A */  slt   $at, $s7, $s2
/* 004190BC 14200135 */  bnez  $at, .L00419594
/* 004190C0 0240A025 */   move  $s4, $s2
/* 004190C4 26F70001 */  addiu $s7, $s7, 1
/* 004190C8 0012B0C0 */  sll   $s6, $s2, 3
.L004190CC:
/* 004190CC 8F8B89EC */  lw     $t3, %got(bittab)($gp)
/* 004190D0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004190D4 02802025 */  move  $a0, $s4
/* 004190D8 8D6B0000 */  lw    $t3, ($t3)
/* 004190DC 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 004190E0 01765021 */  addu  $t2, $t3, $s6
/* 004190E4 0320F809 */  jalr  $t9
/* 004190E8 8D500000 */   lw    $s0, ($t2)
/* 004190EC 1040001F */  beqz  $v0, .L0041916C
/* 004190F0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004190F4 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004190F8 02802025 */  move  $a0, $s4
/* 004190FC 03C02825 */  move  $a1, $fp
/* 00419100 0320F809 */  jalr  $t9
/* 00419104 00000000 */   nop   
/* 00419108 1440011F */  bnez  $v0, .L00419588
/* 0041910C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419110 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00419114 02802025 */  move  $a0, $s4
/* 00419118 8FA5005C */  lw    $a1, 0x5c($sp)
/* 0041911C 0320F809 */  jalr  $t9
/* 00419120 00000000 */   nop   
/* 00419124 14400118 */  bnez  $v0, .L00419588
/* 00419128 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041912C 8F848B78 */  lw     $a0, %got(gsptr)($gp)
/* 00419130 8E0E0008 */  lw    $t6, 8($s0)
/* 00419134 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 00419138 8C840000 */  lw    $a0, ($a0)
/* 0041913C AC8E0004 */  sw    $t6, 4($a0)
/* 00419140 0320F809 */  jalr  $t9
/* 00419144 8EA50024 */   lw    $a1, 0x24($s5)
/* 00419148 1040010F */  beqz  $v0, .L00419588
/* 0041914C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419150 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419154 03C02025 */  move  $a0, $fp
/* 00419158 02802825 */  move  $a1, $s4
/* 0041915C 0320F809 */  jalr  $t9
/* 00419160 00000000 */   nop   
/* 00419164 10000108 */  b     .L00419588
/* 00419168 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041916C:
/* 0041916C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00419170 02802025 */  move  $a0, $s4
/* 00419174 8FA5005C */  lw    $a1, 0x5c($sp)
/* 00419178 0320F809 */  jalr  $t9
/* 0041917C 00000000 */   nop   
/* 00419180 14400101 */  bnez  $v0, .L00419588
/* 00419184 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419188 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0041918C 02802025 */  move  $a0, $s4
/* 00419190 8F858CEC */  lw     $a1, %got(storeop)($gp)
/* 00419194 0320F809 */  jalr  $t9
/* 00419198 00000000 */   nop   
/* 0041919C 1440001E */  bnez  $v0, .L00419218
/* 004191A0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004191A4 92080000 */  lbu   $t0, ($s0)
/* 004191A8 3C011200 */  lui   $at, 0x1200
/* 004191AC 2D090020 */  sltiu $t1, $t0, 0x20
/* 004191B0 00096823 */  negu  $t5, $t1
/* 004191B4 01A17824 */  and   $t7, $t5, $at
/* 004191B8 010FC004 */  sllv  $t8, $t7, $t0
/* 004191BC 07010006 */  bgez  $t8, .L004191D8
/* 004191C0 00000000 */   nop   
/* 004191C4 920C001A */  lbu   $t4, 0x1a($s0)
/* 004191C8 11800003 */  beqz  $t4, .L004191D8
/* 004191CC 00000000 */   nop   
/* 004191D0 10000008 */  b     .L004191F4
/* 004191D4 24130001 */   li    $s3, 1
.L004191D8:
/* 004191D8 8F9984B0 */  lw    $t9, %call16(expaltered)($gp)
/* 004191DC 02002025 */  move  $a0, $s0
/* 004191E0 02A02825 */  move  $a1, $s5
/* 004191E4 0320F809 */  jalr  $t9
/* 004191E8 00000000 */   nop   
/* 004191EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004191F0 305300FF */  andi  $s3, $v0, 0xff
.L004191F4:
/* 004191F4 526000E5 */  beql  $s3, $zero, .L0041958C
/* 004191F8 26940001 */   addiu $s4, $s4, 1
/* 004191FC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419200 03C02025 */  move  $a0, $fp
/* 00419204 96050002 */  lhu   $a1, 2($s0)
/* 00419208 0320F809 */  jalr  $t9
/* 0041920C 00000000 */   nop   
/* 00419210 100000DD */  b     .L00419588
/* 00419214 8FBC003C */   lw    $gp, 0x3c($sp)
.L00419218:
/* 00419218 8F9984A8 */  lw    $t9, %call16(expinalter)($gp)
/* 0041921C 8E040018 */  lw    $a0, 0x18($s0)
/* 00419220 02A02825 */  move  $a1, $s5
/* 00419224 0320F809 */  jalr  $t9
/* 00419228 00000000 */   nop   
/* 0041922C 10400004 */  beqz  $v0, .L00419240
/* 00419230 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419234 24120001 */  li    $s2, 1
/* 00419238 1000003F */  b     .L00419338
/* 0041923C 24110001 */   li    $s1, 1
.L00419240:
/* 00419240 92190010 */  lbu   $t9, 0x10($s0)
/* 00419244 272BFFE0 */  addiu $t3, $t9, -0x20
/* 00419248 2D6A0060 */  sltiu $t2, $t3, 0x60
/* 0041924C 11400009 */  beqz  $t2, .L00419274
/* 00419250 00000000 */   nop   
/* 00419254 8F8D8044 */  lw    $t5, %got(D_1000FF64)($gp)
/* 00419258 000B7143 */  sra   $t6, $t3, 5
/* 0041925C 000E4880 */  sll   $t1, $t6, 2
/* 00419260 25ADFF64 */  addiu $t5, %lo(D_1000FF64) # addiu $t5, $t5, -0x9c
/* 00419264 01A97821 */  addu  $t7, $t5, $t1
/* 00419268 8DE80000 */  lw    $t0, ($t7)
/* 0041926C 0168C004 */  sllv  $t8, $t0, $t3
/* 00419270 2B0A0000 */  slti  $t2, $t8, 0
.L00419274:
/* 00419274 11400018 */  beqz  $t2, .L004192D8
/* 00419278 00000000 */   nop   
/* 0041927C 8E020014 */  lw    $v0, 0x14($s0)
/* 00419280 24120001 */  li    $s2, 1
/* 00419284 9059001A */  lbu   $t9, 0x1a($v0)
/* 00419288 13200003 */  beqz  $t9, .L00419298
/* 0041928C 00000000 */   nop   
/* 00419290 10000029 */  b     .L00419338
/* 00419294 24110001 */   li    $s1, 1
.L00419298:
/* 00419298 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0041929C 94440024 */  lhu   $a0, 0x24($v0)
/* 004192A0 03C02825 */  move  $a1, $fp
/* 004192A4 0320F809 */  jalr  $t9
/* 004192A8 00000000 */   nop   
/* 004192AC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004192B0 8E0E0014 */  lw    $t6, 0x14($s0)
/* 004192B4 305200FF */  andi  $s2, $v0, 0xff
/* 004192B8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004192BC 03C02825 */  move  $a1, $fp
/* 004192C0 95C40002 */  lhu   $a0, 2($t6)
/* 004192C4 0320F809 */  jalr  $t9
/* 004192C8 00000000 */   nop   
/* 004192CC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004192D0 10000019 */  b     .L00419338
/* 004192D4 305100FF */   andi  $s1, $v0, 0xff
.L004192D8:
/* 004192D8 8F9984A8 */  lw    $t9, %call16(expinalter)($gp)
/* 004192DC 8E040014 */  lw    $a0, 0x14($s0)
/* 004192E0 02A02825 */  move  $a1, $s5
/* 004192E4 0320F809 */  jalr  $t9
/* 004192E8 00000000 */   nop   
/* 004192EC 10400004 */  beqz  $v0, .L00419300
/* 004192F0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004192F4 24120001 */  li    $s2, 1
/* 004192F8 1000000F */  b     .L00419338
/* 004192FC 24110001 */   li    $s1, 1
.L00419300:
/* 00419300 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 00419304 8E040020 */  lw    $a0, 0x20($s0)
/* 00419308 8EA50024 */  lw    $a1, 0x24($s5)
/* 0041930C 0320F809 */  jalr  $t9
/* 00419310 00000000 */   nop   
/* 00419314 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419318 305200FF */  andi  $s2, $v0, 0xff
/* 0041931C 8E040020 */  lw    $a0, 0x20($s0)
/* 00419320 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 00419324 8EA50024 */  lw    $a1, 0x24($s5)
/* 00419328 0320F809 */  jalr  $t9
/* 0041932C 00000000 */   nop   
/* 00419330 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419334 305100FF */  andi  $s1, $v0, 0xff
.L00419338:
/* 00419338 8EA30020 */  lw    $v1, 0x20($s5)
/* 0041933C 90620000 */  lbu   $v0, ($v1)
/* 00419340 2C4D0040 */  sltiu $t5, $v0, 0x40
/* 00419344 11A00009 */  beqz  $t5, .L0041936C
/* 00419348 00000000 */   nop   
/* 0041934C 8F888044 */  lw    $t0, %got(D_1000FF10)($gp)
/* 00419350 00024943 */  sra   $t1, $v0, 5
/* 00419354 00097880 */  sll   $t7, $t1, 2
/* 00419358 2508FF10 */  addiu $t0, %lo(D_1000FF10) # addiu $t0, $t0, -0xf0
/* 0041935C 010F5821 */  addu  $t3, $t0, $t7
/* 00419360 8D780000 */  lw    $t8, ($t3)
/* 00419364 00586004 */  sllv  $t4, $t8, $v0
/* 00419368 298D0000 */  slti  $t5, $t4, 0
.L0041936C:
/* 0041936C 11A00074 */  beqz  $t5, .L00419540
/* 00419370 00000000 */   nop   
/* 00419374 16200072 */  bnez  $s1, .L00419540
/* 00419378 00000000 */   nop   
/* 0041937C 92190010 */  lbu   $t9, 0x10($s0)
/* 00419380 24010010 */  li    $at, 16
/* 00419384 272EFFE0 */  addiu $t6, $t9, -0x20
/* 00419388 2DC90060 */  sltiu $t1, $t6, 0x60
/* 0041938C 11200009 */  beqz  $t1, .L004193B4
/* 00419390 00000000 */   nop   
/* 00419394 8F8B8044 */  lw    $t3, %got(D_1000FF64)($gp)
/* 00419398 000E4143 */  sra   $t0, $t6, 5
/* 0041939C 00087880 */  sll   $t7, $t0, 2
/* 004193A0 256BFF64 */  addiu $t3, %lo(D_1000FF64) # addiu $t3, $t3, -0x9c
/* 004193A4 016FC021 */  addu  $t8, $t3, $t7
/* 004193A8 8F0C0000 */  lw    $t4, ($t8)
/* 004193AC 01CC5004 */  sllv  $t2, $t4, $t6
/* 004193B0 29490000 */  slti  $t1, $t2, 0
.L004193B4:
/* 004193B4 15200062 */  bnez  $t1, .L00419540
/* 004193B8 00000000 */   nop   
/* 004193BC 14410038 */  bne   $v0, $at, .L004194A0
/* 004193C0 00000000 */   nop   
/* 004193C4 8F998A5C */  lw     $t9, %got(lang)($gp)
/* 004193C8 24010003 */  li    $at, 3
/* 004193CC 93390000 */  lbu   $t9, ($t9)
/* 004193D0 57210005 */  bnel  $t9, $at, .L004193E8
/* 004193D4 90680018 */   lbu   $t0, 0x18($v1)
/* 004193D8 24110001 */  li    $s1, 1
/* 004193DC 10000058 */  b     .L00419540
/* 004193E0 24120001 */   li    $s2, 1
/* 004193E4 90680018 */  lbu   $t0, 0x18($v1)
.L004193E8:
/* 004193E8 310B0001 */  andi  $t3, $t0, 1
/* 004193EC 1160000D */  beqz  $t3, .L00419424
/* 004193F0 00000000 */   nop   
/* 004193F4 8F9983AC */  lw    $t9, %call16(cskilled)($gp)
/* 004193F8 8F84897C */  lw     $a0, %got(curlevel)($gp)
/* 004193FC 8F858B70 */  lw     $a1, %got(indirprocs)($gp)
/* 00419400 8E060020 */  lw    $a2, 0x20($s0)
/* 00419404 8C840000 */  lw    $a0, ($a0)
/* 00419408 0320F809 */  jalr  $t9
/* 0041940C 8CA50000 */   lw    $a1, ($a1)
/* 00419410 10400004 */  beqz  $v0, .L00419424
/* 00419414 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419418 24110001 */  li    $s1, 1
/* 0041941C 10000048 */  b     .L00419540
/* 00419420 24120001 */   li    $s2, 1
.L00419424:
/* 00419424 8F9983BC */  lw    $t9, %call16(listpskilled)($gp)
/* 00419428 8EAF0020 */  lw    $t7, 0x20($s5)
/* 0041942C 8E050020 */  lw    $a1, 0x20($s0)
/* 00419430 00003025 */  move  $a2, $zero
/* 00419434 0320F809 */  jalr  $t9
/* 00419438 8DE40028 */   lw    $a0, 0x28($t7)
/* 0041943C 10400004 */  beqz  $v0, .L00419450
/* 00419440 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419444 24110001 */  li    $s1, 1
/* 00419448 1000003D */  b     .L00419540
/* 0041944C 24120001 */   li    $s2, 1
.L00419450:
/* 00419450 92180010 */  lbu   $t8, 0x10($s0)
/* 00419454 270CFFC0 */  addiu $t4, $t8, -0x40
/* 00419458 2D8E0020 */  sltiu $t6, $t4, 0x20
/* 0041945C 000E5023 */  negu  $t2, $t6
/* 00419460 314D00C0 */  andi  $t5, $t2, 0xc0
/* 00419464 018D4804 */  sllv  $t1, $t5, $t4
/* 00419468 05210035 */  bgez  $t1, .L00419540
/* 0041946C 00000000 */   nop   
/* 00419470 8F9983A8 */  lw    $t9, %call16(cmkilled)($gp)
/* 00419474 8F84897C */  lw     $a0, %got(curlevel)($gp)
/* 00419478 8F858B70 */  lw     $a1, %got(indirprocs)($gp)
/* 0041947C 8E060020 */  lw    $a2, 0x20($s0)
/* 00419480 8C840000 */  lw    $a0, ($a0)
/* 00419484 0320F809 */  jalr  $t9
/* 00419488 8CA50000 */   lw    $a1, ($a1)
/* 0041948C 1040002C */  beqz  $v0, .L00419540
/* 00419490 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419494 24110001 */  li    $s1, 1
/* 00419498 10000029 */  b     .L00419540
/* 0041949C 24120001 */   li    $s2, 1
.L004194A0:
/* 004194A0 8F9983AC */  lw    $t9, %call16(cskilled)($gp)
/* 004194A4 90640019 */  lbu   $a0, 0x19($v1)
/* 004194A8 8C650014 */  lw    $a1, 0x14($v1)
/* 004194AC 0320F809 */  jalr  $t9
/* 004194B0 8E060020 */   lw    $a2, 0x20($s0)
/* 004194B4 10400004 */  beqz  $v0, .L004194C8
/* 004194B8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004194BC 24110001 */  li    $s1, 1
/* 004194C0 1000001F */  b     .L00419540
/* 004194C4 24120001 */   li    $s2, 1
.L004194C8:
/* 004194C8 8EB90020 */  lw    $t9, 0x20($s5)
/* 004194CC 8E050020 */  lw    $a1, 0x20($s0)
/* 004194D0 00003025 */  move  $a2, $zero
/* 004194D4 8F240024 */  lw    $a0, 0x24($t9)
/* 004194D8 8F9983BC */  lw    $t9, %call16(listpskilled)($gp)
/* 004194DC 0320F809 */  jalr  $t9
/* 004194E0 00000000 */   nop   
/* 004194E4 10400004 */  beqz  $v0, .L004194F8
/* 004194E8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004194EC 24110001 */  li    $s1, 1
/* 004194F0 10000013 */  b     .L00419540
/* 004194F4 24120001 */   li    $s2, 1
.L004194F8:
/* 004194F8 92080010 */  lbu   $t0, 0x10($s0)
/* 004194FC 250BFFC0 */  addiu $t3, $t0, -0x40
/* 00419500 2D6F0020 */  sltiu $t7, $t3, 0x20
/* 00419504 000FC023 */  negu  $t8, $t7
/* 00419508 330E00C0 */  andi  $t6, $t8, 0xc0
/* 0041950C 016E5004 */  sllv  $t2, $t6, $t3
/* 00419510 0541000B */  bgez  $t2, .L00419540
/* 00419514 00000000 */   nop   
/* 00419518 8EA30020 */  lw    $v1, 0x20($s5)
/* 0041951C 8F9983A8 */  lw    $t9, %call16(cmkilled)($gp)
/* 00419520 8E060020 */  lw    $a2, 0x20($s0)
/* 00419524 90640019 */  lbu   $a0, 0x19($v1)
/* 00419528 0320F809 */  jalr  $t9
/* 0041952C 8C650014 */   lw    $a1, 0x14($v1)
/* 00419530 10400003 */  beqz  $v0, .L00419540
/* 00419534 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419538 24110001 */  li    $s1, 1
/* 0041953C 24120001 */  li    $s2, 1
.L00419540:
/* 00419540 12200007 */  beqz  $s1, .L00419560
/* 00419544 00000000 */   nop   
/* 00419548 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0041954C 8FA40060 */  lw    $a0, 0x60($sp)
/* 00419550 02802825 */  move  $a1, $s4
/* 00419554 0320F809 */  jalr  $t9
/* 00419558 00000000 */   nop   
/* 0041955C 8FBC003C */  lw    $gp, 0x3c($sp)
.L00419560:
/* 00419560 16200003 */  bnez  $s1, .L00419570
/* 00419564 00000000 */   nop   
/* 00419568 52400008 */  beql  $s2, $zero, .L0041958C
/* 0041956C 26940001 */   addiu $s4, $s4, 1
.L00419570:
/* 00419570 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419574 03C02025 */  move  $a0, $fp
/* 00419578 02802825 */  move  $a1, $s4
/* 0041957C 0320F809 */  jalr  $t9
/* 00419580 00000000 */   nop   
/* 00419584 8FBC003C */  lw    $gp, 0x3c($sp)
.L00419588:
/* 00419588 26940001 */  addiu $s4, $s4, 1
.L0041958C:
/* 0041958C 1697FECF */  bne   $s4, $s7, .L004190CC
/* 00419590 26D60008 */   addiu $s6, $s6, 8
.L00419594:
/* 00419594 8EB5000C */  lw    $s5, 0xc($s5)
/* 00419598 16A0FE10 */  bnez  $s5, .L00418DDC
/* 0041959C 00000000 */   nop   
/* 004195A0 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 004195A4 91AD0000 */  lbu   $t5, ($t5)
/* 004195A8 55A00320 */  bnezl $t5, .L0041A22C
/* 004195AC 8FBF0044 */   lw    $ra, 0x44($sp)
/* 004195B0 8F8C8A64 */  lw     $t4, %got(listwritten)($gp)
/* 004195B4 918C0000 */  lbu   $t4, ($t4)
/* 004195B8 11800022 */  beqz  $t4, .L00419644
/* 004195BC 00000000 */   nop   
/* 004195C0 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004195C4 27B00094 */  addiu $s0, $sp, 0x94
/* 004195C8 AFA00094 */  sw    $zero, 0x94($sp)
/* 004195CC AFA00098 */  sw    $zero, 0x98($sp)
/* 004195D0 0320F809 */  jalr  $t9
/* 004195D4 02002025 */   move  $a0, $s0
/* 004195D8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004195DC 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 004195E0 8EB50000 */  lw    $s5, ($s5)
/* 004195E4 12A0000A */  beqz  $s5, .L00419610
/* 004195E8 00000000 */   nop   
.L004195EC:
/* 004195EC 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 004195F0 02002025 */  move  $a0, $s0
/* 004195F4 26A500F4 */  addiu $a1, $s5, 0xf4
/* 004195F8 0320F809 */  jalr  $t9
/* 004195FC 00000000 */   nop   
/* 00419600 8EB5000C */  lw    $s5, 0xc($s5)
/* 00419604 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419608 16A0FFF8 */  bnez  $s5, .L004195EC
/* 0041960C 00000000 */   nop   
.L00419610:
/* 00419610 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00419614 02002025 */  move  $a0, $s0
/* 00419618 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 0041961C 0320F809 */  jalr  $t9
/* 00419620 00000000 */   nop   
/* 00419624 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419628 02002025 */  move  $a0, $s0
/* 0041962C 8F998190 */  lw    $t9, %call16(bvectcard)($gp)
/* 00419630 0320F809 */  jalr  $t9
/* 00419634 00000000 */   nop   
/* 00419638 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041963C 8F818C08 */  lw     $at, %got(aliasedlr)($gp)
/* 00419640 AC220000 */  sw    $v0, ($at)
.L00419644:
/* 00419644 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00419648 8F848D0C */  lw     $a0, %got(outmodebits)($gp)
/* 0041964C 0320F809 */  jalr  $t9
/* 00419650 00000000 */   nop   
/* 00419654 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419658 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0041965C 8F848D10 */  lw     $a0, %got(notinmodebits)($gp)
/* 00419660 0320F809 */  jalr  $t9
/* 00419664 00000000 */   nop   
/* 00419668 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041966C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00419670 8F978CD8 */  lw     $s7, %got(mvarbits)($gp)
/* 00419674 0320F809 */  jalr  $t9
/* 00419678 02E02025 */   move  $a0, $s7
/* 0041967C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419680 0000A025 */  move  $s4, $zero
/* 00419684 8F9289E0 */  lw     $s2, %got(bitposcount)($gp)
/* 00419688 8E520000 */  lw    $s2, ($s2)
/* 0041968C 2652FFFF */  addiu $s2, $s2, -1
/* 00419690 064000C8 */  bltz  $s2, .L004199B4
/* 00419694 26520001 */   addiu $s2, $s2, 1
/* 00419698 0000B025 */  move  $s6, $zero
/* 0041969C 8F9E8B3C */  lw     $fp, %got(has_exc_handler)($gp)
/* 004196A0 8F958980 */  lw     $s5, %got(curblk)($gp)
/* 004196A4 8F938CDC */  lw     $s3, %got(fsymbits)($gp)
.L004196A8:
/* 004196A8 8F8989EC */  lw     $t1, %got(bittab)($gp)
/* 004196AC 3C011200 */  lui   $at, 0x1200
/* 004196B0 8D290000 */  lw    $t1, ($t1)
/* 004196B4 0136C821 */  addu  $t9, $t1, $s6
/* 004196B8 8F300000 */  lw    $s0, ($t9)
/* 004196BC 92080000 */  lbu   $t0, ($s0)
/* 004196C0 2D0F0020 */  sltiu $t7, $t0, 0x20
/* 004196C4 000FC023 */  negu  $t8, $t7
/* 004196C8 03017024 */  and   $t6, $t8, $at
/* 004196CC 010E5804 */  sllv  $t3, $t6, $t0
/* 004196D0 056300B6 */  bgezl $t3, .L004199AC
/* 004196D4 26940001 */   addiu $s4, $s4, 1
/* 004196D8 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 004196DC 24010002 */  li    $at, 2
/* 004196E0 90420000 */  lbu   $v0, ($v0)
/* 004196E4 5441001D */  bnel  $v0, $at, .L0041975C
/* 004196E8 24010003 */   li    $at, 3
/* 004196EC 93CA0000 */  lbu   $t2, ($fp)
/* 004196F0 5540000E */  bnezl $t2, .L0041972C
/* 004196F4 8E0F0014 */   lw    $t7, 0x14($s0)
/* 004196F8 8F8D897C */  lw     $t5, %got(curlevel)($gp)
/* 004196FC 24010001 */  li    $at, 1
/* 00419700 8DAD0000 */  lw    $t5, ($t5)
/* 00419704 55A10009 */  bnel  $t5, $at, .L0041972C
/* 00419708 8E0F0014 */   lw    $t7, 0x14($s0)
/* 0041970C 920C0016 */  lbu   $t4, 0x16($s0)
/* 00419710 24010003 */  li    $at, 3
/* 00419714 31890007 */  andi  $t1, $t4, 7
/* 00419718 11210003 */  beq   $t1, $at, .L00419728
/* 0041971C 24010005 */   li    $at, 5
/* 00419720 14410006 */  bne   $v0, $at, .L0041973C
/* 00419724 00000000 */   nop   
.L00419728:
/* 00419728 8E0F0014 */  lw    $t7, 0x14($s0)
.L0041972C:
/* 0041972C 8EB90000 */  lw    $t9, ($s5)
/* 00419730 000FC2C2 */  srl   $t8, $t7, 0xb
/* 00419734 5738009D */  bnel  $t9, $t8, .L004199AC
/* 00419738 26940001 */   addiu $s4, $s4, 1
.L0041973C:
/* 0041973C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419740 02E02025 */  move  $a0, $s7
/* 00419744 02802825 */  move  $a1, $s4
/* 00419748 0320F809 */  jalr  $t9
/* 0041974C 00000000 */   nop   
/* 00419750 10000095 */  b     .L004199A8
/* 00419754 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419758 24010003 */  li    $at, 3
.L0041975C:
/* 0041975C 50410043 */  beql  $v0, $at, .L0041986C
/* 00419760 8E080014 */   lw    $t0, 0x14($s0)
/* 00419764 8F8E897C */  lw     $t6, %got(curlevel)($gp)
/* 00419768 24010001 */  li    $at, 1
/* 0041976C 8DCE0000 */  lw    $t6, ($t6)
/* 00419770 55C1000D */  bnel  $t6, $at, .L004197A8
/* 00419774 8E0C0014 */   lw    $t4, 0x14($s0)
/* 00419778 92080016 */  lbu   $t0, 0x16($s0)
/* 0041977C 24010003 */  li    $at, 3
/* 00419780 310B0007 */  andi  $t3, $t0, 7
/* 00419784 11610007 */  beq   $t3, $at, .L004197A4
/* 00419788 24010005 */   li    $at, 5
/* 0041978C 50410006 */  beql  $v0, $at, .L004197A8
/* 00419790 8E0C0014 */   lw    $t4, 0x14($s0)
/* 00419794 8F8A8A30 */  lw     $t2, %got(aentptr)($gp)
/* 00419798 8D4A0000 */  lw    $t2, ($t2)
/* 0041979C 11400006 */  beqz  $t2, .L004197B8
/* 004197A0 00000000 */   nop   
.L004197A4:
/* 004197A4 8E0C0014 */  lw    $t4, 0x14($s0)
.L004197A8:
/* 004197A8 8EAD0000 */  lw    $t5, ($s5)
/* 004197AC 000C4AC2 */  srl   $t1, $t4, 0xb
/* 004197B0 55A9000A */  bnel  $t5, $t1, .L004197DC
/* 004197B4 24010001 */   li    $at, 1
.L004197B8:
/* 004197B8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004197BC 02E02025 */  move  $a0, $s7
/* 004197C0 02802825 */  move  $a1, $s4
/* 004197C4 0320F809 */  jalr  $t9
/* 004197C8 00000000 */   nop   
/* 004197CC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004197D0 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 004197D4 90420000 */  lbu   $v0, ($v0)
/* 004197D8 24010001 */  li    $at, 1
.L004197DC:
/* 004197DC 54410073 */  bnel  $v0, $at, .L004199AC
/* 004197E0 26940001 */   addiu $s4, $s4, 1
/* 004197E4 920F0016 */  lbu   $t7, 0x16($s0)
/* 004197E8 24010004 */  li    $at, 4
/* 004197EC 31F90007 */  andi  $t9, $t7, 7
/* 004197F0 5721006E */  bnel  $t9, $at, .L004199AC
/* 004197F4 26940001 */   addiu $s4, $s4, 1
/* 004197F8 8F998494 */  lw    $t9, %call16(in_fsym)($gp)
/* 004197FC 8E040014 */  lw    $a0, 0x14($s0)
/* 00419800 0320F809 */  jalr  $t9
/* 00419804 000422C2 */   srl   $a0, $a0, 0xb
/* 00419808 10400067 */  beqz  $v0, .L004199A8
/* 0041980C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419810 8F988A30 */  lw     $t8, %got(aentptr)($gp)
/* 00419814 8F180000 */  lw    $t8, ($t8)
/* 00419818 57000064 */  bnezl $t8, .L004199AC
/* 0041981C 26940001 */   addiu $s4, $s4, 1
/* 00419820 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00419824 02602025 */  move  $a0, $s3
/* 00419828 0320F809 */  jalr  $t9
/* 0041982C 00000000 */   nop   
/* 00419830 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419834 02602025 */  move  $a0, $s3
/* 00419838 02802825 */  move  $a1, $s4
/* 0041983C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419840 0320F809 */  jalr  $t9
/* 00419844 00000000 */   nop   
/* 00419848 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041984C 02E02025 */  move  $a0, $s7
/* 00419850 02802825 */  move  $a1, $s4
/* 00419854 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419858 0320F809 */  jalr  $t9
/* 0041985C 00000000 */   nop   
/* 00419860 10000051 */  b     .L004199A8
/* 00419864 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419868 8E080014 */  lw    $t0, 0x14($s0)
.L0041986C:
/* 0041986C 8EAE0000 */  lw    $t6, ($s5)
/* 00419870 00085AC2 */  srl   $t3, $t0, 0xb
/* 00419874 55CB004D */  bnel  $t6, $t3, .L004199AC
/* 00419878 26940001 */   addiu $s4, $s4, 1
/* 0041987C 920A0016 */  lbu   $t2, 0x16($s0)
/* 00419880 24010002 */  li    $at, 2
/* 00419884 314C0007 */  andi  $t4, $t2, 7
/* 00419888 15810039 */  bne   $t4, $at, .L00419970
/* 0041988C 00000000 */   nop   
/* 00419890 8F8D89F4 */  lw     $t5, %got(pdeftab)($gp)
/* 00419894 8E030010 */  lw    $v1, 0x10($s0)
/* 00419898 24040060 */  li    $a0, 96
/* 0041989C 8DAD0000 */  lw    $t5, ($t5)
/* 004198A0 04610002 */  bgez  $v1, .L004198AC
/* 004198A4 00600821 */   move  $at, $v1
/* 004198A8 24610003 */  addiu $at, $v1, 3
.L004198AC:
/* 004198AC 00011883 */  sra   $v1, $at, 2
/* 004198B0 00038900 */  sll   $s1, $v1, 4
/* 004198B4 01B11021 */  addu  $v0, $t5, $s1
/* 004198B8 90490000 */  lbu   $t1, ($v0)
/* 004198BC 54890007 */  bnel  $a0, $t1, .L004198DC
/* 004198C0 90590002 */   lbu   $t9, 2($v0)
/* 004198C4 904F0010 */  lbu   $t7, 0x10($v0)
.L004198C8:
/* 004198C8 26310010 */  addiu $s1, $s1, 0x10
/* 004198CC 24420010 */  addiu $v0, $v0, 0x10
/* 004198D0 508FFFFD */  beql  $a0, $t7, .L004198C8
/* 004198D4 904F0010 */   lbu   $t7, 0x10($v0)
/* 004198D8 90590002 */  lbu   $t9, 2($v0)
.L004198DC:
/* 004198DC 17200010 */  bnez  $t9, .L00419920
/* 004198E0 00000000 */   nop   
/* 004198E4 8F988B5C */  lw     $t8, %got(entflag)($gp)
/* 004198E8 93180000 */  lbu   $t8, ($t8)
/* 004198EC 33080004 */  andi  $t0, $t8, 4
/* 004198F0 1500001D */  bnez  $t0, .L00419968
/* 004198F4 00000000 */   nop   
/* 004198F8 93CE0000 */  lbu   $t6, ($fp)
/* 004198FC 15C0001A */  bnez  $t6, .L00419968
/* 00419900 00000000 */   nop   
/* 00419904 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419908 02E02025 */  move  $a0, $s7
/* 0041990C 02802825 */  move  $a1, $s4
/* 00419910 0320F809 */  jalr  $t9
/* 00419914 00000000 */   nop   
/* 00419918 10000023 */  b     .L004199A8
/* 0041991C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00419920:
/* 00419920 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419924 8F848D0C */  lw     $a0, %got(outmodebits)($gp)
/* 00419928 02802825 */  move  $a1, $s4
/* 0041992C 0320F809 */  jalr  $t9
/* 00419930 00000000 */   nop   
/* 00419934 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419938 8F8B89F4 */  lw     $t3, %got(pdeftab)($gp)
/* 0041993C 8D6B0000 */  lw    $t3, ($t3)
/* 00419940 01715021 */  addu  $t2, $t3, $s1
/* 00419944 914C0004 */  lbu   $t4, 4($t2)
/* 00419948 15800007 */  bnez  $t4, .L00419968
/* 0041994C 00000000 */   nop   
/* 00419950 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419954 8F848D10 */  lw     $a0, %got(notinmodebits)($gp)
/* 00419958 02802825 */  move  $a1, $s4
/* 0041995C 0320F809 */  jalr  $t9
/* 00419960 00000000 */   nop   
/* 00419964 8FBC003C */  lw    $gp, 0x3c($sp)
.L00419968:
/* 00419968 10000010 */  b     .L004199AC
/* 0041996C 26940001 */   addiu $s4, $s4, 1
.L00419970:
/* 00419970 8F8D8B5C */  lw     $t5, %got(entflag)($gp)
/* 00419974 91AD0000 */  lbu   $t5, ($t5)
/* 00419978 31A90004 */  andi  $t1, $t5, 4
/* 0041997C 5520000B */  bnezl $t1, .L004199AC
/* 00419980 26940001 */   addiu $s4, $s4, 1
/* 00419984 93CF0000 */  lbu   $t7, ($fp)
/* 00419988 55E00008 */  bnezl $t7, .L004199AC
/* 0041998C 26940001 */   addiu $s4, $s4, 1
/* 00419990 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00419994 02E02025 */  move  $a0, $s7
/* 00419998 02802825 */  move  $a1, $s4
/* 0041999C 0320F809 */  jalr  $t9
/* 004199A0 00000000 */   nop   
/* 004199A4 8FBC003C */  lw    $gp, 0x3c($sp)
.L004199A8:
/* 004199A8 26940001 */  addiu $s4, $s4, 1
.L004199AC:
/* 004199AC 1692FF3E */  bne   $s4, $s2, .L004196A8
/* 004199B0 26D60008 */   addiu $s6, $s6, 8
.L004199B4:
/* 004199B4 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 004199B8 8F938CDC */  lw     $s3, %got(fsymbits)($gp)
/* 004199BC 8F9E8B3C */  lw     $fp, %got(has_exc_handler)($gp)
/* 004199C0 0320F809 */  jalr  $t9
/* 004199C4 00000000 */   nop   
/* 004199C8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004199CC 24060005 */  li    $a2, 5
/* 004199D0 8F9289A0 */  lw     $s2, %got(time1)($gp)
/* 004199D4 8F998A64 */  lw     $t9, %got(listwritten)($gp)
/* 004199D8 AE420000 */  sw    $v0, ($s2)
/* 004199DC 93390000 */  lbu   $t9, ($t9)
/* 004199E0 13200056 */  beqz  $t9, .L00419B3C
/* 004199E4 00000000 */   nop   
/* 004199E8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004199EC 8F908CCC */  lw     $s0, %got(list)($gp)
/* 004199F0 8F858044 */  lw    $a1, %got(RO_1000A6B4)($gp)
/* 004199F4 24070005 */  li    $a3, 5
/* 004199F8 8E040000 */  lw    $a0, ($s0)
/* 004199FC 0320F809 */  jalr  $t9
/* 00419A00 24A5A6B4 */   addiu $a1, %lo(RO_1000A6B4) # addiu $a1, $a1, -0x594c
/* 00419A04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419A08 8E580000 */  lw    $t8, ($s2)
/* 00419A0C 241403E8 */  li    $s4, 1000
/* 00419A10 8F9589A8 */  lw     $s5, %got(lasttime)($gp)
/* 00419A14 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00419A18 8E040000 */  lw    $a0, ($s0)
/* 00419A1C 8EA80000 */  lw    $t0, ($s5)
/* 00419A20 24060004 */  li    $a2, 4
/* 00419A24 2407000A */  li    $a3, 10
/* 00419A28 03087023 */  subu  $t6, $t8, $t0
/* 00419A2C 01D4001A */  div   $zero, $t6, $s4
/* 00419A30 00002812 */  mflo  $a1
/* 00419A34 16800002 */  bnez  $s4, .L00419A40
/* 00419A38 00000000 */   nop   
/* 00419A3C 0007000D */  break 7
.L00419A40:
/* 00419A40 2401FFFF */  li    $at, -1
/* 00419A44 16810004 */  bne   $s4, $at, .L00419A58
/* 00419A48 3C018000 */   lui   $at, 0x8000
/* 00419A4C 15C10002 */  bne   $t6, $at, .L00419A58
/* 00419A50 00000000 */   nop   
/* 00419A54 0006000D */  break 6
.L00419A58:
/* 00419A58 0320F809 */  jalr  $t9
/* 00419A5C 00000000 */   nop   
/* 00419A60 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419A64 8E110000 */  lw    $s1, ($s0)
/* 00419A68 2405002E */  li    $a1, 46
/* 00419A6C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00419A70 24060001 */  li    $a2, 1
/* 00419A74 2407000A */  li    $a3, 10
/* 00419A78 0320F809 */  jalr  $t9
/* 00419A7C 02202025 */   move  $a0, $s1
/* 00419A80 8E4B0000 */  lw    $t3, ($s2)
/* 00419A84 8EAA0000 */  lw    $t2, ($s5)
/* 00419A88 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419A8C 02202025 */  move  $a0, $s1
/* 00419A90 016A6023 */  subu  $t4, $t3, $t2
/* 00419A94 0194001A */  div   $zero, $t4, $s4
/* 00419A98 00002810 */  mfhi  $a1
/* 00419A9C 00B46826 */  xor   $t5, $a1, $s4
/* 00419AA0 16800002 */  bnez  $s4, .L00419AAC
/* 00419AA4 00000000 */   nop   
/* 00419AA8 0007000D */  break 7
.L00419AAC:
/* 00419AAC 2401FFFF */  li    $at, -1
/* 00419AB0 16810004 */  bne   $s4, $at, .L00419AC4
/* 00419AB4 3C018000 */   lui   $at, 0x8000
/* 00419AB8 15810002 */  bne   $t4, $at, .L00419AC4
/* 00419ABC 00000000 */   nop   
/* 00419AC0 0006000D */  break 6
.L00419AC4:
/* 00419AC4 05A10002 */  bgez  $t5, .L00419AD0
/* 00419AC8 00000000 */   nop   
/* 00419ACC 00B42821 */  addu  $a1, $a1, $s4
.L00419AD0:
/* 00419AD0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00419AD4 24060003 */  li    $a2, 3
/* 00419AD8 2407000A */  li    $a3, 10
/* 00419ADC 0320F809 */  jalr  $t9
/* 00419AE0 00000000 */   nop   
/* 00419AE4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419AE8 8E040000 */  lw    $a0, ($s0)
/* 00419AEC 24060020 */  li    $a2, 32
/* 00419AF0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00419AF4 8F858044 */  lw    $a1, %got(RO_1000A694)($gp)
/* 00419AF8 24070020 */  li    $a3, 32
/* 00419AFC 0320F809 */  jalr  $t9
/* 00419B00 24A5A694 */   addiu $a1, %lo(RO_1000A694) # addiu $a1, $a1, -0x596c
/* 00419B04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419B08 8E040000 */  lw    $a0, ($s0)
/* 00419B0C 24060400 */  li    $a2, 1024
/* 00419B10 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00419B14 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 00419B18 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00419B1C 0320F809 */  jalr  $t9
/* 00419B20 8CE70000 */   lw    $a3, ($a3)
/* 00419B24 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419B28 8E040000 */  lw    $a0, ($s0)
/* 00419B2C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00419B30 0320F809 */  jalr  $t9
/* 00419B34 00000000 */   nop   
/* 00419B38 8FBC003C */  lw    $gp, 0x3c($sp)
.L00419B3C:
/* 00419B3C 8F9589A8 */  lw     $s5, %got(lasttime)($gp)
/* 00419B40 8E490000 */  lw    $t1, ($s2)
/* 00419B44 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00419B48 AEA90000 */  sw    $t1, ($s5)
/* 00419B4C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00419B50 0320F809 */  jalr  $t9
/* 00419B54 00000000 */   nop   
/* 00419B58 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419B5C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00419B60 8F848D1C */  lw     $a0, %got(vareqv)($gp)
/* 00419B64 0320F809 */  jalr  $t9
/* 00419B68 00000000 */   nop   
/* 00419B6C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419B70 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00419B74 8F928D20 */  lw     $s2, %got(asgneqv)($gp)
/* 00419B78 0320F809 */  jalr  $t9
/* 00419B7C 02402025 */   move  $a0, $s2
/* 00419B80 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419B84 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00419B88 0320F809 */  jalr  $t9
/* 00419B8C 00000000 */   nop   
/* 00419B90 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419B94 27B40064 */  addiu $s4, $sp, 0x64
/* 00419B98 8F818BE8 */  lw     $at, %got(lastdftime)($gp)
/* 00419B9C 8F838BE0 */  lw     $v1, %got(numdataflow)($gp)
/* 00419BA0 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 00419BA4 AC220000 */  sw    $v0, ($at)
/* 00419BA8 8C6F0000 */  lw    $t7, ($v1)
/* 00419BAC 25F90001 */  addiu $t9, $t7, 1
/* 00419BB0 AC790000 */  sw    $t9, ($v1)
/* 00419BB4 8EB50000 */  lw    $s5, ($s5)
/* 00419BB8 12A0008C */  beqz  $s5, .L00419DEC
/* 00419BBC 00000000 */   nop   
.L00419BC0:
/* 00419BC0 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00419BC4 26B00154 */  addiu $s0, $s5, 0x154
/* 00419BC8 AEA00154 */  sw    $zero, 0x154($s5)
/* 00419BCC AEA00158 */  sw    $zero, 0x158($s5)
/* 00419BD0 0320F809 */  jalr  $t9
/* 00419BD4 02002025 */   move  $a0, $s0
/* 00419BD8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419BDC 02002025 */  move  $a0, $s0
/* 00419BE0 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00419BE4 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 00419BE8 0320F809 */  jalr  $t9
/* 00419BEC 00000000 */   nop   
/* 00419BF0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419BF4 02002025 */  move  $a0, $s0
/* 00419BF8 02402825 */  move  $a1, $s2
/* 00419BFC 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00419C00 0320F809 */  jalr  $t9
/* 00419C04 00000000 */   nop   
/* 00419C08 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419C0C 26B1015C */  addiu $s1, $s5, 0x15c
/* 00419C10 AEA0015C */  sw    $zero, 0x15c($s5)
/* 00419C14 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00419C18 AEA00160 */  sw    $zero, 0x160($s5)
/* 00419C1C 02202025 */  move  $a0, $s1
/* 00419C20 0320F809 */  jalr  $t9
/* 00419C24 00000000 */   nop   
/* 00419C28 8EA20018 */  lw    $v0, 0x18($s5)
/* 00419C2C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419C30 54400015 */  bnezl $v0, .L00419C88
/* 00419C34 92B80006 */   lbu   $t8, 6($s5)
/* 00419C38 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00419C3C 02202025 */  move  $a0, $s1
/* 00419C40 02E02825 */  move  $a1, $s7
/* 00419C44 0320F809 */  jalr  $t9
/* 00419C48 00000000 */   nop   
/* 00419C4C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419C50 02202025 */  move  $a0, $s1
/* 00419C54 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00419C58 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00419C5C 0320F809 */  jalr  $t9
/* 00419C60 00000000 */   nop   
/* 00419C64 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419C68 02202025 */  move  $a0, $s1
/* 00419C6C 02402825 */  move  $a1, $s2
/* 00419C70 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00419C74 0320F809 */  jalr  $t9
/* 00419C78 00000000 */   nop   
/* 00419C7C 10000058 */  b     .L00419DE0
/* 00419C80 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419C84 92B80006 */  lbu   $t8, 6($s5)
.L00419C88:
/* 00419C88 17000049 */  bnez  $t8, .L00419DB0
/* 00419C8C 00000000 */   nop   
/* 00419C90 93C80000 */  lbu   $t0, ($fp)
/* 00419C94 51000024 */  beql  $t0, $zero, .L00419D28
/* 00419C98 8C490004 */   lw    $t1, 4($v0)
/* 00419C9C 8EAE0020 */  lw    $t6, 0x20($s5)
/* 00419CA0 91CB0000 */  lbu   $t3, ($t6)
/* 00419CA4 2D6A0040 */  sltiu $t2, $t3, 0x40
/* 00419CA8 11400009 */  beqz  $t2, .L00419CD0
/* 00419CAC 00000000 */   nop   
/* 00419CB0 8F898044 */  lw    $t1, %got(D_1000FF10)($gp)
/* 00419CB4 000B6143 */  sra   $t4, $t3, 5
/* 00419CB8 000C6880 */  sll   $t5, $t4, 2
/* 00419CBC 2529FF10 */  addiu $t1, %lo(D_1000FF10) # addiu $t1, $t1, -0xf0
/* 00419CC0 012D7821 */  addu  $t7, $t1, $t5
/* 00419CC4 8DF90000 */  lw    $t9, ($t7)
/* 00419CC8 0179C004 */  sllv  $t8, $t9, $t3
/* 00419CCC 2B0A0000 */  slti  $t2, $t8, 0
.L00419CD0:
/* 00419CD0 51400015 */  beql  $t2, $zero, .L00419D28
/* 00419CD4 8C490004 */   lw    $t1, 4($v0)
/* 00419CD8 AFA00064 */  sw    $zero, 0x64($sp)
/* 00419CDC AFA00068 */  sw    $zero, 0x68($sp)
/* 00419CE0 AFA0006C */  sw    $zero, 0x6c($sp)
/* 00419CE4 AFA00070 */  sw    $zero, 0x70($sp)
/* 00419CE8 8E8C0000 */  lw    $t4, ($s4)
/* 00419CEC 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00419CF0 02202025 */  move  $a0, $s1
/* 00419CF4 AFAC0004 */  sw    $t4, 4($sp)
/* 00419CF8 8E8E0004 */  lw    $t6, 4($s4)
/* 00419CFC 8FA50004 */  lw    $a1, 4($sp)
/* 00419D00 AFAE0008 */  sw    $t6, 8($sp)
/* 00419D04 8E870008 */  lw    $a3, 8($s4)
/* 00419D08 8FA60008 */  lw    $a2, 8($sp)
/* 00419D0C AFA7000C */  sw    $a3, 0xc($sp)
/* 00419D10 8E8E000C */  lw    $t6, 0xc($s4)
/* 00419D14 0320F809 */  jalr  $t9
/* 00419D18 AFAE0010 */   sw    $t6, 0x10($sp)
/* 00419D1C 10000030 */  b     .L00419DE0
/* 00419D20 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419D24 8C490004 */  lw    $t1, 4($v0)
.L00419D28:
/* 00419D28 1520000E */  bnez  $t1, .L00419D64
/* 00419D2C 00000000 */   nop   
/* 00419D30 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00419D34 02202025 */  move  $a0, $s1
/* 00419D38 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 00419D3C 0320F809 */  jalr  $t9
/* 00419D40 00000000 */   nop   
/* 00419D44 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419D48 02202025 */  move  $a0, $s1
/* 00419D4C 02402825 */  move  $a1, $s2
/* 00419D50 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00419D54 0320F809 */  jalr  $t9
/* 00419D58 00000000 */   nop   
/* 00419D5C 10000020 */  b     .L00419DE0
/* 00419D60 8FBC003C */   lw    $gp, 0x3c($sp)
.L00419D64:
/* 00419D64 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00419D68 02202025 */  move  $a0, $s1
/* 00419D6C 02E02825 */  move  $a1, $s7
/* 00419D70 0320F809 */  jalr  $t9
/* 00419D74 00000000 */   nop   
/* 00419D78 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419D7C 02202025 */  move  $a0, $s1
/* 00419D80 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00419D84 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00419D88 0320F809 */  jalr  $t9
/* 00419D8C 00000000 */   nop   
/* 00419D90 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419D94 02202025 */  move  $a0, $s1
/* 00419D98 02402825 */  move  $a1, $s2
/* 00419D9C 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00419DA0 0320F809 */  jalr  $t9
/* 00419DA4 00000000 */   nop   
/* 00419DA8 1000000D */  b     .L00419DE0
/* 00419DAC 8FBC003C */   lw    $gp, 0x3c($sp)
.L00419DB0:
/* 00419DB0 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00419DB4 02202025 */  move  $a0, $s1
/* 00419DB8 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 00419DBC 0320F809 */  jalr  $t9
/* 00419DC0 00000000 */   nop   
/* 00419DC4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419DC8 02202025 */  move  $a0, $s1
/* 00419DCC 02402825 */  move  $a1, $s2
/* 00419DD0 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00419DD4 0320F809 */  jalr  $t9
/* 00419DD8 00000000 */   nop   
/* 00419DDC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00419DE0:
/* 00419DE0 8EB5000C */  lw    $s5, 0xc($s5)
/* 00419DE4 16A0FF76 */  bnez  $s5, .L00419BC0
/* 00419DE8 00000000 */   nop   
.L00419DEC:
/* 00419DEC 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 00419DF0 91AD0000 */  lbu   $t5, ($t5)
/* 00419DF4 55A0010D */  bnezl $t5, .L0041A22C
/* 00419DF8 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00419DFC 8F8F8A80 */  lw     $t7, %got(dordstore)($gp)
/* 00419E00 91EF0000 */  lbu   $t7, ($t7)
/* 00419E04 51E00109 */  beql  $t7, $zero, .L0041A22C
/* 00419E08 8FBF0044 */   lw    $ra, 0x44($sp)
.L00419E0C:
/* 00419E0C 8F998BDC */  lw     $t9, %got(dataflowiter)($gp)
/* 00419E10 8F9589B0 */  lw     $s5, %got(graphtail)($gp)
/* 00419E14 8F818BDC */  lw     $at, %got(dataflowiter)($gp)
/* 00419E18 8F390000 */  lw    $t9, ($t9)
/* 00419E1C 8EB50000 */  lw    $s5, ($s5)
/* 00419E20 00009025 */  move  $s2, $zero
/* 00419E24 272B0001 */  addiu $t3, $t9, 1
/* 00419E28 12A0005B */  beqz  $s5, .L00419F98
/* 00419E2C AC2B0000 */   sw    $t3, ($at)
/* 00419E30 8EA20018 */  lw    $v0, 0x18($s5)
.L00419E34:
/* 00419E34 50400020 */  beql  $v0, $zero, .L00419EB8
/* 00419E38 8E780000 */   lw    $t8, ($s3)
/* 00419E3C 16400007 */  bnez  $s2, .L00419E5C
/* 00419E40 00408025 */   move  $s0, $v0
/* 00419E44 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00419E48 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00419E4C 26A5015C */  addiu $a1, $s5, 0x15c
/* 00419E50 0320F809 */  jalr  $t9
/* 00419E54 00000000 */   nop   
/* 00419E58 8FBC003C */  lw    $gp, 0x3c($sp)
.L00419E5C:
/* 00419E5C 1200000A */  beqz  $s0, .L00419E88
/* 00419E60 26B1015C */   addiu $s1, $s5, 0x15c
.L00419E64:
/* 00419E64 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00419E68 8E050000 */  lw    $a1, ($s0)
/* 00419E6C 02202025 */  move  $a0, $s1
/* 00419E70 0320F809 */  jalr  $t9
/* 00419E74 24A50154 */   addiu $a1, $a1, 0x154
/* 00419E78 8E100004 */  lw    $s0, 4($s0)
/* 00419E7C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419E80 1600FFF8 */  bnez  $s0, .L00419E64
/* 00419E84 00000000 */   nop   
.L00419E88:
/* 00419E88 16400027 */  bnez  $s2, .L00419F28
/* 00419E8C 00000000 */   nop   
/* 00419E90 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00419E94 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00419E98 26A5015C */  addiu $a1, $s5, 0x15c
/* 00419E9C 0320F809 */  jalr  $t9
/* 00419EA0 00000000 */   nop   
/* 00419EA4 14400020 */  bnez  $v0, .L00419F28
/* 00419EA8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419EAC 1000001E */  b     .L00419F28
/* 00419EB0 24120001 */   li    $s2, 1
/* 00419EB4 8E780000 */  lw    $t8, ($s3)
.L00419EB8:
/* 00419EB8 1300001B */  beqz  $t8, .L00419F28
/* 00419EBC 00000000 */   nop   
/* 00419EC0 16400007 */  bnez  $s2, .L00419EE0
/* 00419EC4 00000000 */   nop   
/* 00419EC8 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00419ECC 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00419ED0 26A5015C */  addiu $a1, $s5, 0x15c
/* 00419ED4 0320F809 */  jalr  $t9
/* 00419ED8 00000000 */   nop   
/* 00419EDC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00419EE0:
/* 00419EE0 8F8689AC */  lw     $a2, %got(graphhead)($gp)
/* 00419EE4 8F9981B4 */  lw    $t9, %call16(minusminus)($gp)
/* 00419EE8 26B1015C */  addiu $s1, $s5, 0x15c
/* 00419EEC 8CC60000 */  lw    $a2, ($a2)
/* 00419EF0 02202025 */  move  $a0, $s1
/* 00419EF4 02602825 */  move  $a1, $s3
/* 00419EF8 0320F809 */  jalr  $t9
/* 00419EFC 24C60154 */   addiu $a2, $a2, 0x154
/* 00419F00 16400009 */  bnez  $s2, .L00419F28
/* 00419F04 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419F08 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00419F0C 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00419F10 02202825 */  move  $a1, $s1
/* 00419F14 0320F809 */  jalr  $t9
/* 00419F18 00000000 */   nop   
/* 00419F1C 14400002 */  bnez  $v0, .L00419F28
/* 00419F20 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419F24 24120001 */  li    $s2, 1
.L00419F28:
/* 00419F28 16400007 */  bnez  $s2, .L00419F48
/* 00419F2C 26B1015C */   addiu $s1, $s5, 0x15c
/* 00419F30 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00419F34 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00419F38 26A50154 */  addiu $a1, $s5, 0x154
/* 00419F3C 0320F809 */  jalr  $t9
/* 00419F40 00000000 */   nop   
/* 00419F44 8FBC003C */  lw    $gp, 0x3c($sp)
.L00419F48:
/* 00419F48 8F9981CC */  lw    $t9, %call16(bvectglop)($gp)
/* 00419F4C 26B00154 */  addiu $s0, $s5, 0x154
/* 00419F50 02002025 */  move  $a0, $s0
/* 00419F54 26A50104 */  addiu $a1, $s5, 0x104
/* 00419F58 02203025 */  move  $a2, $s1
/* 00419F5C 0320F809 */  jalr  $t9
/* 00419F60 26A7010C */   addiu $a3, $s5, 0x10c
/* 00419F64 16400009 */  bnez  $s2, .L00419F8C
/* 00419F68 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419F6C 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00419F70 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00419F74 02002825 */  move  $a1, $s0
/* 00419F78 0320F809 */  jalr  $t9
/* 00419F7C 00000000 */   nop   
/* 00419F80 14400002 */  bnez  $v0, .L00419F8C
/* 00419F84 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00419F88 24120001 */  li    $s2, 1
.L00419F8C:
/* 00419F8C 8EB50010 */  lw    $s5, 0x10($s5)
/* 00419F90 56A0FFA8 */  bnezl $s5, .L00419E34
/* 00419F94 8EA20018 */   lw    $v0, 0x18($s5)
.L00419F98:
/* 00419F98 1640FF9C */  bnez  $s2, .L00419E0C
/* 00419F9C 00000000 */   nop   
/* 00419FA0 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00419FA4 0320F809 */  jalr  $t9
/* 00419FA8 00000000 */   nop   
/* 00419FAC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00419FB0 24160067 */  li    $s6, 103
/* 00419FB4 2414003E */  li    $s4, 62
/* 00419FB8 8F838BD8 */  lw     $v1, %got(dataflowtime)($gp)
/* 00419FBC 8F8E8BE8 */  lw     $t6, %got(lastdftime)($gp)
/* 00419FC0 8F9589AC */  lw     $s5, %got(graphhead)($gp)
/* 00419FC4 8C680000 */  lw    $t0, ($v1)
/* 00419FC8 8DCE0000 */  lw    $t6, ($t6)
/* 00419FCC 01025021 */  addu  $t2, $t0, $v0
/* 00419FD0 014E6023 */  subu  $t4, $t2, $t6
/* 00419FD4 AC6C0000 */  sw    $t4, ($v1)
/* 00419FD8 8EB50000 */  lw    $s5, ($s5)
/* 00419FDC 52A00093 */  beql  $s5, $zero, .L0041A22C
/* 00419FE0 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00419FE4 8F938B88 */  lw     $s3, %got(numrdstr)($gp)
/* 00419FE8 AFB50088 */  sw    $s5, 0x88($sp)
.L00419FEC:
/* 00419FEC 8EB2001C */  lw    $s2, 0x1c($s5)
/* 00419FF0 A3A000D2 */  sb    $zero, 0xd2($sp)
/* 00419FF4 92490000 */  lbu   $t1, ($s2)
.L00419FF8:
/* 00419FF8 252DFFE0 */  addiu $t5, $t1, -0x20
/* 00419FFC 2DAF0060 */  sltiu $t7, $t5, 0x60
/* 0041A000 11E00009 */  beqz  $t7, .L0041A028
/* 0041A004 00000000 */   nop   
/* 0041A008 8F988044 */  lw    $t8, %got(D_1000FF64)($gp)
/* 0041A00C 000DC943 */  sra   $t9, $t5, 5
/* 0041A010 00195880 */  sll   $t3, $t9, 2
/* 0041A014 2718FF64 */  addiu $t8, %lo(D_1000FF64) # addiu $t8, $t8, -0x9c
/* 0041A018 030B4021 */  addu  $t0, $t8, $t3
/* 0041A01C 8D0A0000 */  lw    $t2, ($t0)
/* 0041A020 01AA7004 */  sllv  $t6, $t2, $t5
/* 0041A024 29CF0000 */  slti  $t7, $t6, 0
.L0041A028:
/* 0041A028 51E0006E */  beql  $t7, $zero, .L0041A1E4
/* 0041A02C 8E420008 */   lw    $v0, 8($s2)
/* 0041A030 92490003 */  lbu   $t1, 3($s2)
/* 0041A034 5520006B */  bnezl $t1, .L0041A1E4
/* 0041A038 8E420008 */   lw    $v0, 8($s2)
/* 0041A03C 9259001D */  lbu   $t9, 0x1d($s2)
/* 0041A040 53200068 */  beql  $t9, $zero, .L0041A1E4
/* 0041A044 8E420008 */   lw    $v0, 8($s2)
/* 0041A048 9258001F */  lbu   $t8, 0x1f($s2)
/* 0041A04C 53000065 */  beql  $t8, $zero, .L0041A1E4
/* 0041A050 8E420008 */   lw    $v0, 8($s2)
/* 0041A054 8E4B0004 */  lw    $t3, 4($s2)
/* 0041A058 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0041A05C 26A5015C */  addiu $a1, $s5, 0x15c
/* 0041A060 8D680014 */  lw    $t0, 0x14($t3)
/* 0041A064 0320F809 */  jalr  $t9
/* 0041A068 95040024 */   lhu   $a0, 0x24($t0)
/* 0041A06C 1040005C */  beqz  $v0, .L0041A1E0
/* 0041A070 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041A074 8E4A0018 */  lw    $t2, 0x18($s2)
/* 0041A078 26B00104 */  addiu $s0, $s5, 0x104
/* 0041A07C 02002025 */  move  $a0, $s0
/* 0041A080 A1400009 */  sb    $zero, 9($t2)
/* 0041A084 8E4D0004 */  lw    $t5, 4($s2)
/* 0041A088 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0041A08C 8DAE0014 */  lw    $t6, 0x14($t5)
/* 0041A090 0320F809 */  jalr  $t9
/* 0041A094 95C50024 */   lhu   $a1, 0x24($t6)
/* 0041A098 8E460028 */  lw    $a2, 0x28($s2)
/* 0041A09C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041A0A0 26A40124 */  addiu $a0, $s5, 0x124
/* 0041A0A4 50C0001D */  beql  $a2, $zero, .L0041A11C
/* 0041A0A8 8E590028 */   lw    $t9, 0x28($s2)
/* 0041A0AC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0041A0B0 94C50002 */  lhu   $a1, 2($a2)
/* 0041A0B4 26BE010C */  addiu $fp, $s5, 0x10c
/* 0041A0B8 0320F809 */  jalr  $t9
/* 0041A0BC 26B10114 */   addiu $s1, $s5, 0x114
/* 0041A0C0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041A0C4 8E4C0028 */  lw    $t4, 0x28($s2)
/* 0041A0C8 02202025 */  move  $a0, $s1
/* 0041A0CC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0041A0D0 95850002 */  lhu   $a1, 2($t4)
/* 0041A0D4 0320F809 */  jalr  $t9
/* 0041A0D8 00000000 */   nop   
/* 0041A0DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041A0E0 8E4F0028 */  lw    $t7, 0x28($s2)
/* 0041A0E4 03C02825 */  move  $a1, $fp
/* 0041A0E8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0041A0EC 95E40002 */  lhu   $a0, 2($t7)
/* 0041A0F0 0320F809 */  jalr  $t9
/* 0041A0F4 00000000 */   nop   
/* 0041A0F8 14400007 */  bnez  $v0, .L0041A118
/* 0041A0FC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041A100 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0041A104 8E490028 */  lw    $t1, 0x28($s2)
/* 0041A108 02002025 */  move  $a0, $s0
/* 0041A10C 0320F809 */  jalr  $t9
/* 0041A110 95250002 */   lhu   $a1, 2($t1)
/* 0041A114 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041A118:
/* 0041A118 8E590028 */  lw    $t9, 0x28($s2)
.L0041A11C:
/* 0041A11C 53200023 */  beql  $t9, $zero, .L0041A1AC
/* 0041A120 8E430004 */   lw    $v1, 4($s2)
/* 0041A124 8F9986DC */  lw    $t9, %call16(has_volt_ovfw)($gp)
/* 0041A128 8E580004 */  lw    $t8, 4($s2)
/* 0041A12C 0320F809 */  jalr  $t9
/* 0041A130 8F040034 */   lw    $a0, 0x34($t8)
/* 0041A134 1440001C */  bnez  $v0, .L0041A1A8
/* 0041A138 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041A13C 924B0000 */  lbu   $t3, ($s2)
/* 0041A140 568B0008 */  bnel  $s4, $t3, .L0041A164
/* 0041A144 8E460028 */   lw    $a2, 0x28($s2)
/* 0041A148 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 0041A14C 8E440014 */  lw    $a0, 0x14($s2)
/* 0041A150 02A02825 */  move  $a1, $s5
/* 0041A154 0320F809 */  jalr  $t9
/* 0041A158 00000000 */   nop   
/* 0041A15C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041A160 8E460028 */  lw    $a2, 0x28($s2)
.L0041A164:
/* 0041A164 10C00008 */  beqz  $a2, .L0041A188
/* 0041A168 00000000 */   nop   
/* 0041A16C 8F998220 */  lw    $t9, %call16(exprdelete)($gp)
/* 0041A170 8E480004 */  lw    $t0, 4($s2)
/* 0041A174 02A02825 */  move  $a1, $s5
/* 0041A178 0320F809 */  jalr  $t9
/* 0041A17C 8D040034 */   lw    $a0, 0x34($t0)
/* 0041A180 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041A184 8E460028 */  lw    $a2, 0x28($s2)
.L0041A188:
/* 0041A188 8F998224 */  lw    $t9, %call16(checkstatoccur)($gp)
/* 0041A18C 240A0060 */  li    $t2, 96
/* 0041A190 A24A0000 */  sb    $t2, ($s2)
/* 0041A194 00C02025 */  move  $a0, $a2
/* 0041A198 0320F809 */  jalr  $t9
/* 0041A19C 02A02825 */   move  $a1, $s5
/* 0041A1A0 1000000C */  b     .L0041A1D4
/* 0041A1A4 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041A1A8:
/* 0041A1A8 8E430004 */  lw    $v1, 4($s2)
.L0041A1AC:
/* 0041A1AC 8E4E0028 */  lw    $t6, 0x28($s2)
/* 0041A1B0 A2560000 */  sb    $s6, ($s2)
/* 0041A1B4 906D0001 */  lbu   $t5, 1($v1)
/* 0041A1B8 15C00003 */  bnez  $t6, .L0041A1C8
/* 0041A1BC A24D0014 */   sb    $t5, 0x14($s2)
/* 0041A1C0 10000003 */  b     .L0041A1D0
/* 0041A1C4 AE400004 */   sw    $zero, 4($s2)
.L0041A1C8:
/* 0041A1C8 8C6C0034 */  lw    $t4, 0x34($v1)
/* 0041A1CC AE4C0004 */  sw    $t4, 4($s2)
.L0041A1D0:
/* 0041A1D0 A2400015 */  sb    $zero, 0x15($s2)
.L0041A1D4:
/* 0041A1D4 8E6F0000 */  lw    $t7, ($s3)
/* 0041A1D8 25E90001 */  addiu $t1, $t7, 1
/* 0041A1DC AE690000 */  sw    $t1, ($s3)
.L0041A1E0:
/* 0041A1E0 8E420008 */  lw    $v0, 8($s2)
.L0041A1E4:
/* 0041A1E4 50400007 */  beql  $v0, $zero, .L0041A204
/* 0041A1E8 93A800D2 */   lbu   $t0, 0xd2($sp)
/* 0041A1EC 8C590010 */  lw    $t9, 0x10($v0)
/* 0041A1F0 8E580010 */  lw    $t8, 0x10($s2)
/* 0041A1F4 03385826 */  xor   $t3, $t9, $t8
/* 0041A1F8 000B582B */  sltu  $t3, $zero, $t3
/* 0041A1FC A3AB00D2 */  sb    $t3, 0xd2($sp)
/* 0041A200 93A800D2 */  lbu   $t0, 0xd2($sp)
.L0041A204:
/* 0041A204 00409025 */  move  $s2, $v0
/* 0041A208 55000004 */  bnezl $t0, .L0041A21C
/* 0041A20C 8FAA0088 */   lw    $t2, 0x88($sp)
/* 0041A210 5440FF79 */  bnezl $v0, .L00419FF8
/* 0041A214 92490000 */   lbu   $t1, ($s2)
/* 0041A218 8FAA0088 */  lw    $t2, 0x88($sp)
.L0041A21C:
/* 0041A21C 8D55000C */  lw    $s5, 0xc($t2)
/* 0041A220 56A0FF72 */  bnezl $s5, .L00419FEC
/* 0041A224 AFB50088 */   sw    $s5, 0x88($sp)
/* 0041A228 8FBF0044 */  lw    $ra, 0x44($sp)
.L0041A22C:
/* 0041A22C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041A230 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041A234 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041A238 8FB30028 */  lw    $s3, 0x28($sp)
/* 0041A23C 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0041A240 8FB50030 */  lw    $s5, 0x30($sp)
/* 0041A244 8FB60034 */  lw    $s6, 0x34($sp)
/* 0041A248 8FB70038 */  lw    $s7, 0x38($sp)
/* 0041A24C 8FBE0040 */  lw    $fp, 0x40($sp)
/* 0041A250 03E00008 */  jr    $ra
/* 0041A254 27BD00D8 */   addiu $sp, $sp, 0xd8
    .type copypropagate, @function
    .size copypropagate, .-copypropagate
    .end copypropagate
)"");
