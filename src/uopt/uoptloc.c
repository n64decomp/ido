#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptitab.h"
#include "uoptcopy.h"
#include "uoptinput.h"
#include "uoptppss.h"
#include "uoptcontrolflow.h"


__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000CBA0:
    # 0044DF30 binaryovfw
    .asciz "uoptloc.p"

    .balign 4
jtbl_1000CBAC:
    # 0044DF30 binaryovfw
    .gpword .L0044DF98
    .gpword .L0044E1C8
    .gpword .L0044E1C8
    .gpword .L0044E1C0

    .balign 4
jtbl_1000CBBC:
    # 0044DF30 binaryovfw
    .gpword .L0044E1C0
    .gpword .L0044E108

    .balign 4
jtbl_1000CBC4:
    # 0044DF30 binaryovfw
    .gpword .L0044E1C0
    .gpword .L0044E1C0
    .gpword .L0044E160
    .gpword .L0044E1C8
    .gpword .L0044E1C8
    .gpword .L0044E1C8
    .gpword .L0044E0E0
    .gpword .L0044E1C8
    .gpword .L0044E1C0
    .gpword .L0044E1C8
    .gpword .L0044E1C0

    .balign 4
jtbl_1000CBF0:
    # 0044DF30 binaryovfw
    .gpword .L0044E170
    .gpword .L0044E170
    .gpword .L0044E190

    .balign 4
jtbl_1000CBFC:
    # 0044DF30 binaryovfw
    .gpword .L0044E1C0
    .gpword .L0044E1C8
    .gpword .L0044E1C8
    .gpword .L0044E1C0

RO_1000CC0C:
    # 0044E410 unaryovfw
    .asciz "uoptloc.p"

    .balign 4
jtbl_1000CC18:
    # 0044E410 unaryovfw
    .gpword .L0044E4F8
    .gpword .L0044E450

    .balign 4
jtbl_1000CC20:
    # 0044E410 unaryovfw
    .gpword .L0044E434
    .gpword .L0044E5B4
    .gpword .L0044E5B4
    .gpword .L0044E4F8
    .gpword .L0044E4F8

RO_1000CC34:
    # 0044E604 binaryfold
    .asciz "uoptloc.p"

    .balign 4
jtbl_1000CC40:
    # 0044E604 binaryfold
    .gpword .L0044E6B8
    .gpword .L0044EB14
    .gpword .L0044EB14
    .gpword .L0044E85C

    .balign 4
jtbl_1000CC50:
    # 0044E604 binaryfold
    .gpword .L0044E92C
    .gpword .L0044E980

    .balign 4
jtbl_1000CC58:
    # 0044E604 binaryfold
    .gpword .L0044E9D4
    .gpword .L0044EA28

    .balign 4
jtbl_1000CC60:
    # 0044E604 binaryfold
    .gpword .L0044EAC8
    .gpword .L0044EA7C
    .gpword .L0044E744
    .gpword .L0044EB14
    .gpword .L0044EB14
    .gpword .L0044EB14
    .gpword .L0044E6C8
    .gpword .L0044EB14
    .gpword .L0044EB14
    .gpword .L0044EB14
    .gpword .L0044E904

    .balign 4
jtbl_1000CC8C:
    # 0044E604 binaryfold
    .gpword .L0044E874
    .gpword .L0044E87C
    .gpword .L0044E8AC

RO_1000CC98:
    # 0044F3C0 unaryfold
    .asciz "uoptloc.p"

    .balign 4
jtbl_1000CCA4:
    # 0044F3C0 unaryfold
    .gpword .L0044F50C
    .gpword .L0044F548

    .balign 4
jtbl_1000CCAC:
    # 0044F3C0 unaryfold
    .gpword .L0044F584
    .gpword .L0044F4C4

    .balign 4
jtbl_1000CCB4:
    # 0044F3C0 unaryfold
    .gpword .L0044F47C
    .gpword .L0044F68C
    .gpword .L0044F68C
    .gpword .L0044F488
    .gpword .L0044F44C

RO_1000CCC8:
    # 0044F738 linearize
    .ascii "uoptloc.p"

RO_1000CCD1:
    # 0044F738 linearize
    .ascii "uoptloc.p"

RO_1000CCDA:
    # 0044F738 linearize
    .ascii "uoptloc.p"

RO_1000CCE3:
    # 0044F738 linearize
    .ascii "uoptloc.p"

    .balign 4
jtbl_1000CCEC:
    # 0044F738 linearize
    .gpword .L0044FA28
    .gpword .L0044FD00
    .gpword .L0044FD00
    .gpword .L0044FD88

    .balign 4
jtbl_1000CCFC:
    # 0044F738 linearize
    .gpword .L0044FD88
    .gpword .L0044FD88
    .gpword .L0044FD00
    .gpword .L0044FD00
    .gpword .L0044FD00
    .gpword .L0044FD00
    .gpword .L0044FB10

RO_1000CD18:
    # 0044FF6C mergeconst
    .ascii "uoptloc.p"

RO_1000CD21:
    # 0044FF6C mergeconst
    .ascii "uoptloc.p"

RO_1000CD2A:
    # 0044FF6C mergeconst
    .ascii "uoptloc.p"

RO_1000CD33:
    # 0044FF6C mergeconst
    .ascii "uoptloc.p"

RO_1000CD3C:
    # 0044FF6C mergeconst
    .ascii "uoptloc.p"

RO_1000CD45:
    # 0044FF6C mergeconst
    .ascii "uoptloc.p"

RO_1000CD4E:
    # 0044FF6C mergeconst
    .ascii "uoptloc.p"

RO_1000CD57:
    # 0044FF6C mergeconst
    .ascii "uoptloc.p"

#RO_1000CD60:
#    # 00451764 func_00451764
#    .ascii "uoptloc.p"
#
#RO_1000CD69:
#    # 00451764 func_00451764
#    .ascii "uoptloc.p"
#
#RO_1000CD72:
#    # 00451764 func_00451764
#    .ascii "uoptloc.p"
#
#RO_1000CD7B:
#    # 00451764 func_00451764
#    .ascii "uoptloc.p"
#
#    .balign 4
#jtbl_1000CD84:
#    # 00451764 func_00451764
#    .gpword .L004528D8
#    .gpword .L0045184C
#    .gpword .L00452A6C
#    .gpword .L00452B7C
#    .gpword .L00451E24
#
#    .balign 4
#jtbl_1000CD98:
#    # 00451764 func_00451764
#    .gpword .L004528D8
#    .gpword .L004528D8
#    .gpword .L004528A8
#
#    .balign 4
#jtbl_1000CDA4:
#    # 00451764 func_00451764
#    .gpword .L00452804
#    .gpword .L004528D8
#    .gpword .L00452980
#    .gpword .L00452B7C
#    .gpword .L0045246C
#    .gpword .L00451C74
#
#    .balign 4
#jtbl_1000CDBC:
#    # 00451764 func_00451764
#    .gpword .L0045246C
#    .gpword .L0045246C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L00452A90
#    .gpword .L00452A90
#    .gpword .L00452A90
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L0045265C
#    .gpword .L00452A90
#    .gpword .L00452A90
#    .gpword .L0045265C
#    .gpword .L00452980
#    .gpword .L00452A90
#    .gpword .L00452B7C
#    .gpword .L0045246C
#    .gpword .L0045184C
#    .gpword .L00451E24
#
#    .balign 4
#jtbl_1000CE10:
#    # 00451764 func_00451764
#    .gpword .L0045246C
#    .gpword .L0045246C
#    .gpword .L00452B7C
#    .gpword .L004528D8
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L0045246C
#    .gpword .L0045246C
#    .gpword .L0045246C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L0045184C
#    .gpword .L00452B7C
#    .gpword .L0045246C
#    .gpword .L004528D8
#    .gpword .L0045246C
#    .gpword .L00452B7C
#    .gpword .L004528D8
#    .gpword .L004528D8
#
#    .balign 4
#jtbl_1000CE68:
#    # 00451764 func_00451764
#    .gpword .L004528A8
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L004528A8
#    .gpword .L0045246C
#    .gpword .L0045246C
#    .gpword .L0045246C
#    .gpword .L004528D8
#    .gpword .L00452A6C
#
#    .balign 4
#jtbl_1000CE90:
#    # 00451764 func_00451764
#    .gpword .L004528A8
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L0045184C
#    .gpword .L00452B7C
#    .gpword .L00452B7C
#    .gpword .L0045246C
#
#    .balign 4
#jtbl_1000CEB0:
#    # 00451764 func_00451764
#    .gpword .L004517E0
#    .gpword .L004517F4
#    .gpword .L004517D8
#    .gpword .L00451828
#    .gpword .L004517EC
#    .gpword .L004517D8
#    .gpword .L00452D74
#    .gpword .L004517D8

#RO_1000CED0:
#    # 00452DAC constarith
#    .asciz "uoptloc.p"
#
#    .balign 4
#jtbl_1000CEDC:
#    # 00452DAC constarith
#    .gpword .L0045321C
#    .gpword .L00453324
#    .gpword .L004532E4
#    .gpword .L0045329C
#    .gpword .L0045325C
#    .gpword .L0045323C

.data
D_10010B10:
    # 0044F738 linearize
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00

D_10010B18:
    # 0044F738 linearize
    .byte 0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010B24:
    # 0044F738 linearize
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10010B34:
    # 0044F738 linearize
    .byte 0x40,0x00,0x00,0x20,0x00,0x00,0x01,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10010B44:
    # 0044FD9C func_0044FD9C
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00

D_10010B4C:
    # 0044FD9C func_0044FD9C
    .byte 0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010B58:
    # 0044FD9C func_0044FD9C
    .byte 0x40,0x00,0x00,0x20,0x00,0x00,0x01,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10010B68:
    # 0044FF6C mergeconst
    .byte 0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010B74:
    # 0044FF6C mergeconst
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00

D_10010B7C:
    # 004510A0 distrlaw
    .byte 0x40,0x00,0x00,0x20,0x00,0x00,0x01,0x00

D_10010B84:
    # 004510A0 distrlaw
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00

D_10010B8C:
    # 004510A0 distrlaw
    .byte 0x40,0x00,0x00,0x20,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10010B9C:
    # 004510A0 distrlaw
    .byte 0x40,0x00,0x00,0x20,0x00,0x00,0x01,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10010BAC:
    # 00451764 func_00451764
    .byte 0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x04

D_10010BB8:
    # 00451764 func_00451764
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10010BC8:
    # 00451764 func_00451764
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00

D_10010BD0:
    # 00452DAC constarith
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0

D_10010BD8:
    # 00452DAC constarith
    .byte 0x10,0x81,0xe7,0x12,0x82,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x43,0xfc,0x82,0x01,0x00,0x00,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel binaryovfw
    .ent binaryovfw
    # 0041550C func_0041550C
    # 0044FF6C mergeconst
    # 004510A0 distrlaw
    # 00451764 func_00451764
/* 0044DF30 3C1C0FBD */  .cpload $t9
/* 0044DF34 279CC360 */  
/* 0044DF38 0399E021 */  
/* 0044DF3C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0044DF40 2CA1003D */  sltiu $at, $a1, 0x3d
/* 0044DF44 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044DF48 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044DF4C AFA40028 */  sw    $a0, 0x28($sp)
/* 0044DF50 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0044DF54 142000C2 */  bnez  $at, .L0044E260
/* 0044DF58 AFA60030 */   sw    $a2, 0x30($sp)
/* 0044DF5C 2CA1006A */  sltiu $at, $a1, 0x6a
/* 0044DF60 142000B0 */  bnez  $at, .L0044E224
/* 0044DF64 2CA1007E */   sltiu $at, $a1, 0x7e
/* 0044DF68 142000A1 */  bnez  $at, .L0044E1F0
/* 0044DF6C 24AEFF76 */   addiu $t6, $a1, -0x8a
/* 0044DF70 2DC10004 */  sltiu $at, $t6, 4
/* 0044DF74 10200094 */  beqz  $at, .L0044E1C8
/* 0044DF78 00000000 */   nop   
/* 0044DF7C 8F818044 */  lw    $at, %got(jtbl_1000CBFC)($gp)
/* 0044DF80 000E7080 */  sll   $t6, $t6, 2
/* 0044DF84 002E0821 */  addu  $at, $at, $t6
/* 0044DF88 8C2ECBFC */  lw    $t6, %lo(jtbl_1000CBFC)($at)
/* 0044DF8C 01DC7021 */  addu  $t6, $t6, $gp
/* 0044DF90 01C00008 */  jr    $t6
/* 0044DF94 00000000 */   nop   
.L0044DF98:
/* 0044DF98 8FAF0030 */  lw    $t7, 0x30($sp)
/* 0044DF9C 24030001 */  li    $v1, 1
/* 0044DFA0 91E20000 */  lbu   $v0, ($t7)
/* 0044DFA4 14620006 */  bne   $v1, $v0, .L0044DFC0
/* 0044DFA8 00000000 */   nop   
/* 0044DFAC 90F80000 */  lbu   $t8, ($a3)
/* 0044DFB0 14780003 */  bne   $v1, $t8, .L0044DFC0
/* 0044DFB4 00000000 */   nop   
/* 0044DFB8 100000E3 */  b     .L0044E348
/* 0044DFBC 24030001 */   li    $v1, 1
.L0044DFC0:
/* 0044DFC0 1462000A */  bne   $v1, $v0, .L0044DFEC
/* 0044DFC4 8FB90030 */   lw    $t9, 0x30($sp)
/* 0044DFC8 8F250020 */  lw    $a1, 0x20($t9)
/* 0044DFCC 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 0044DFD0 00002025 */  move  $a0, $zero
/* 0044DFD4 8CE60020 */  lw    $a2, 0x20($a3)
/* 0044DFD8 0320F809 */  jalr  $t9
/* 0044DFDC 00000000 */   nop   
/* 0044DFE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044DFE4 100000D8 */  b     .L0044E348
/* 0044DFE8 304300FF */   andi  $v1, $v0, 0xff
.L0044DFEC:
/* 0044DFEC 90E80000 */  lbu   $t0, ($a3)
/* 0044DFF0 8FA90030 */  lw    $t1, 0x30($sp)
/* 0044DFF4 93A4002B */  lbu   $a0, 0x2b($sp)
/* 0044DFF8 14680009 */  bne   $v1, $t0, .L0044E020
/* 0044DFFC 00000000 */   nop   
/* 0044E000 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 0044E004 00002025 */  move  $a0, $zero
/* 0044E008 8CE50020 */  lw    $a1, 0x20($a3)
/* 0044E00C 0320F809 */  jalr  $t9
/* 0044E010 8D260020 */   lw    $a2, 0x20($t1)
/* 0044E014 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E018 100000CB */  b     .L0044E348
/* 0044E01C 304300FF */   andi  $v1, $v0, 0xff
.L0044E020:
/* 0044E020 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 0044E024 8FAA0030 */  lw    $t2, 0x30($sp)
/* 0044E028 8CE60020 */  lw    $a2, 0x20($a3)
/* 0044E02C 0320F809 */  jalr  $t9
/* 0044E030 8D450020 */   lw    $a1, 0x20($t2)
/* 0044E034 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E038 100000C3 */  b     .L0044E348
/* 0044E03C 304300FF */   andi  $v1, $v0, 0xff
.L0044E040:
/* 0044E040 91620000 */  lbu   $v0, ($t3)
/* 0044E044 24030001 */  li    $v1, 1
/* 0044E048 14620006 */  bne   $v1, $v0, .L0044E064
/* 0044E04C 00000000 */   nop   
/* 0044E050 90EC0000 */  lbu   $t4, ($a3)
/* 0044E054 146C0003 */  bne   $v1, $t4, .L0044E064
/* 0044E058 00000000 */   nop   
/* 0044E05C 100000BA */  b     .L0044E348
/* 0044E060 00001825 */   move  $v1, $zero
.L0044E064:
/* 0044E064 14620009 */  bne   $v1, $v0, .L0044E08C
/* 0044E068 00002025 */   move  $a0, $zero
/* 0044E06C 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 0044E070 8FAD0030 */  lw    $t5, 0x30($sp)
/* 0044E074 8CE60020 */  lw    $a2, 0x20($a3)
/* 0044E078 0320F809 */  jalr  $t9
/* 0044E07C 8DA50020 */   lw    $a1, 0x20($t5)
/* 0044E080 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E084 100000B0 */  b     .L0044E348
/* 0044E088 304300FF */   andi  $v1, $v0, 0xff
.L0044E08C:
/* 0044E08C 90EE0000 */  lbu   $t6, ($a3)
/* 0044E090 8FAF0030 */  lw    $t7, 0x30($sp)
/* 0044E094 93A4002B */  lbu   $a0, 0x2b($sp)
/* 0044E098 146E0009 */  bne   $v1, $t6, .L0044E0C0
/* 0044E09C 00000000 */   nop   
/* 0044E0A0 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 0044E0A4 00002025 */  move  $a0, $zero
/* 0044E0A8 8DE50020 */  lw    $a1, 0x20($t7)
/* 0044E0AC 0320F809 */  jalr  $t9
/* 0044E0B0 8CE60020 */   lw    $a2, 0x20($a3)
/* 0044E0B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E0B8 100000A3 */  b     .L0044E348
/* 0044E0BC 304300FF */   andi  $v1, $v0, 0xff
.L0044E0C0:
/* 0044E0C0 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 0044E0C4 8FB80030 */  lw    $t8, 0x30($sp)
/* 0044E0C8 8CE60020 */  lw    $a2, 0x20($a3)
/* 0044E0CC 0320F809 */  jalr  $t9
/* 0044E0D0 8F050020 */   lw    $a1, 0x20($t8)
/* 0044E0D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E0D8 1000009B */  b     .L0044E348
/* 0044E0DC 304300FF */   andi  $v1, $v0, 0xff
.L0044E0E0:
/* 0044E0E0 8FB90030 */  lw    $t9, 0x30($sp)
/* 0044E0E4 93A4002B */  lbu   $a0, 0x2b($sp)
/* 0044E0E8 8CE60020 */  lw    $a2, 0x20($a3)
/* 0044E0EC 8F250020 */  lw    $a1, 0x20($t9)
/* 0044E0F0 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 0044E0F4 0320F809 */  jalr  $t9
/* 0044E0F8 00000000 */   nop   
/* 0044E0FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E100 10000091 */  b     .L0044E348
/* 0044E104 304300FF */   andi  $v1, $v0, 0xff
.L0044E108:
/* 0044E108 8CE30020 */  lw    $v1, 0x20($a3)
.L0044E10C:
/* 0044E10C 93A8002B */  lbu   $t0, 0x2b($sp)
/* 0044E110 3C010600 */  lui   $at, 0x600
/* 0044E114 2C620001 */  sltiu $v0, $v1, 1
/* 0044E118 1440000F */  bnez  $v0, .L0044E158
/* 0044E11C 2D090020 */   sltiu $t1, $t0, 0x20
/* 0044E120 00095023 */  negu  $t2, $t1
/* 0044E124 01415824 */  and   $t3, $t2, $at
/* 0044E128 010B2004 */  sllv  $a0, $t3, $t0
/* 0044E12C 28820000 */  slti  $v0, $a0, 0
/* 0044E130 10400009 */  beqz  $v0, .L0044E158
/* 0044E134 00000000 */   nop   
/* 0044E138 24620001 */  addiu $v0, $v1, 1
/* 0044E13C 2C420001 */  sltiu $v0, $v0, 1
/* 0044E140 10400005 */  beqz  $v0, .L0044E158
/* 0044E144 8FAC0030 */   lw    $t4, 0x30($sp)
/* 0044E148 8D820020 */  lw    $v0, 0x20($t4)
/* 0044E14C 3C018000 */  lui   $at, 0x8000
/* 0044E150 00411026 */  xor   $v0, $v0, $at
/* 0044E154 2C420001 */  sltiu $v0, $v0, 1
.L0044E158:
/* 0044E158 1000007B */  b     .L0044E348
/* 0044E15C 304300FF */   andi  $v1, $v0, 0xff
.L0044E160:
/* 0044E160 8CE30020 */  lw    $v1, 0x20($a3)
/* 0044E164 2C630001 */  sltiu $v1, $v1, 1
/* 0044E168 10000077 */  b     .L0044E348
/* 0044E16C 306300FF */   andi  $v1, $v1, 0xff
.L0044E170:
/* 0044E170 8CE30020 */  lw    $v1, 0x20($a3)
/* 0044E174 28620000 */  slti  $v0, $v1, 0
/* 0044E178 14400003 */  bnez  $v0, .L0044E188
/* 0044E17C 00000000 */   nop   
/* 0044E180 28620020 */  slti  $v0, $v1, 0x20
/* 0044E184 38420001 */  xori  $v0, $v0, 1
.L0044E188:
/* 0044E188 1000006F */  b     .L0044E348
/* 0044E18C 304300FF */   andi  $v1, $v0, 0xff
.L0044E190:
/* 0044E190 8FAD0030 */  lw    $t5, 0x30($sp)
/* 0044E194 3C018000 */  lui   $at, 0x8000
/* 0044E198 8DA20020 */  lw    $v0, 0x20($t5)
/* 0044E19C 00411026 */  xor   $v0, $v0, $at
/* 0044E1A0 2C420001 */  sltiu $v0, $v0, 1
/* 0044E1A4 10400004 */  beqz  $v0, .L0044E1B8
/* 0044E1A8 00000000 */   nop   
/* 0044E1AC 8CE20020 */  lw    $v0, 0x20($a3)
/* 0044E1B0 28420000 */  slti  $v0, $v0, 0
/* 0044E1B4 38420001 */  xori  $v0, $v0, 1
.L0044E1B8:
/* 0044E1B8 10000063 */  b     .L0044E348
/* 0044E1BC 304300FF */   andi  $v1, $v0, 0xff
.L0044E1C0:
/* 0044E1C0 10000061 */  b     .L0044E348
/* 0044E1C4 00001825 */   move  $v1, $zero
.L0044E1C8:
/* 0044E1C8 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044E1CC 8F868044 */  lw    $a2, %got(RO_1000CBA0)($gp)
/* 0044E1D0 24040001 */  li    $a0, 1
/* 0044E1D4 2405003B */  li    $a1, 59
/* 0044E1D8 24070009 */  li    $a3, 9
/* 0044E1DC 0320F809 */  jalr  $t9
/* 0044E1E0 24C6CBA0 */   addiu $a2, %lo(RO_1000CBA0) # addiu $a2, $a2, -0x3460
/* 0044E1E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E1E8 10000057 */  b     .L0044E348
/* 0044E1EC 93A30027 */   lbu   $v1, 0x27($sp)
.L0044E1F0:
/* 0044E1F0 2CA10076 */  sltiu $at, $a1, 0x76
/* 0044E1F4 1020004F */  beqz  $at, .L0044E334
/* 0044E1F8 24AEFF8D */   addiu $t6, $a1, -0x73
/* 0044E1FC 2DC10003 */  sltiu $at, $t6, 3
/* 0044E200 1020FFF1 */  beqz  $at, .L0044E1C8
/* 0044E204 00000000 */   nop   
/* 0044E208 8F818044 */  lw    $at, %got(jtbl_1000CBF0)($gp)
/* 0044E20C 000E7080 */  sll   $t6, $t6, 2
/* 0044E210 002E0821 */  addu  $at, $at, $t6
/* 0044E214 8C2ECBF0 */  lw    $t6, %lo(jtbl_1000CBF0)($at)
/* 0044E218 01DC7021 */  addu  $t6, $t6, $gp
/* 0044E21C 01C00008 */  jr    $t6
/* 0044E220 00000000 */   nop   
.L0044E224:
/* 0044E224 2CA1004F */  sltiu $at, $a1, 0x4f
/* 0044E228 14200038 */  bnez  $at, .L0044E30C
/* 0044E22C 2CA10060 */   sltiu $at, $a1, 0x60
/* 0044E230 1020003B */  beqz  $at, .L0044E320
/* 0044E234 24AFFFAB */   addiu $t7, $a1, -0x55
/* 0044E238 2DE1000B */  sltiu $at, $t7, 0xb
/* 0044E23C 1020FFE2 */  beqz  $at, .L0044E1C8
/* 0044E240 00000000 */   nop   
/* 0044E244 8F818044 */  lw    $at, %got(jtbl_1000CBC4)($gp)
/* 0044E248 000F7880 */  sll   $t7, $t7, 2
/* 0044E24C 002F0821 */  addu  $at, $at, $t7
/* 0044E250 8C2FCBC4 */  lw    $t7, %lo(jtbl_1000CBC4)($at)
/* 0044E254 01FC7821 */  addu  $t7, $t7, $gp
/* 0044E258 01E00008 */  jr    $t7
/* 0044E25C 00000000 */   nop   
.L0044E260:
/* 0044E260 2CA1001E */  sltiu $at, $a1, 0x1e
/* 0044E264 1420000A */  bnez  $at, .L0044E290
/* 0044E268 24010023 */   li    $at, 35
/* 0044E26C 10A1FFD4 */  beq   $a1, $at, .L0044E1C0
/* 0044E270 00000000 */   nop   
/* 0044E274 2CA1002A */  sltiu $at, $a1, 0x2a
/* 0044E278 1020001F */  beqz  $at, .L0044E2F8
/* 0044E27C 2CA10028 */   sltiu $at, $a1, 0x28
/* 0044E280 1020FFCF */  beqz  $at, .L0044E1C0
/* 0044E284 00000000 */   nop   
/* 0044E288 1000FFCF */  b     .L0044E1C8
/* 0044E28C 00000000 */   nop   
.L0044E290:
/* 0044E290 2CA10005 */  sltiu $at, $a1, 5
/* 0044E294 1420000D */  bnez  $at, .L0044E2CC
/* 0044E298 24010009 */   li    $at, 9
/* 0044E29C 10A1FFC8 */  beq   $a1, $at, .L0044E1C0
/* 0044E2A0 24B8FFE4 */   addiu $t8, $a1, -0x1c
/* 0044E2A4 2F010002 */  sltiu $at, $t8, 2
/* 0044E2A8 1020FFC7 */  beqz  $at, .L0044E1C8
/* 0044E2AC 00000000 */   nop   
/* 0044E2B0 8F818044 */  lw    $at, %got(jtbl_1000CBBC)($gp)
/* 0044E2B4 0018C080 */  sll   $t8, $t8, 2
/* 0044E2B8 00380821 */  addu  $at, $at, $t8
/* 0044E2BC 8C38CBBC */  lw    $t8, %lo(jtbl_1000CBBC)($at)
/* 0044E2C0 031CC021 */  addu  $t8, $t8, $gp
/* 0044E2C4 03000008 */  jr    $t8
/* 0044E2C8 00000000 */   nop   
.L0044E2CC:
/* 0044E2CC 24B9FFFF */  addiu $t9, $a1, -1
/* 0044E2D0 2F210004 */  sltiu $at, $t9, 4
/* 0044E2D4 1020FFBC */  beqz  $at, .L0044E1C8
/* 0044E2D8 00000000 */   nop   
/* 0044E2DC 8F818044 */  lw    $at, %got(jtbl_1000CBAC)($gp)
/* 0044E2E0 0019C880 */  sll   $t9, $t9, 2
/* 0044E2E4 00390821 */  addu  $at, $at, $t9
/* 0044E2E8 8C39CBAC */  lw    $t9, %lo(jtbl_1000CBAC)($at)
/* 0044E2EC 033CC821 */  addu  $t9, $t9, $gp
/* 0044E2F0 03200008 */  jr    $t9
/* 0044E2F4 00000000 */   nop   
.L0044E2F8:
/* 0044E2F8 2CA1003A */  sltiu $at, $a1, 0x3a
/* 0044E2FC 1020FFB0 */  beqz  $at, .L0044E1C0
/* 0044E300 00000000 */   nop   
/* 0044E304 1000FFB0 */  b     .L0044E1C8
/* 0044E308 00000000 */   nop   
.L0044E30C:
/* 0044E30C 2CA1004D */  sltiu $at, $a1, 0x4d
/* 0044E310 1020FFAB */  beqz  $at, .L0044E1C0
/* 0044E314 00000000 */   nop   
/* 0044E318 1000FFAB */  b     .L0044E1C8
/* 0044E31C 00000000 */   nop   
.L0044E320:
/* 0044E320 24010069 */  li    $at, 105
/* 0044E324 50A1FF79 */  beql  $a1, $at, .L0044E10C
/* 0044E328 8CE30020 */   lw    $v1, 0x20($a3)
/* 0044E32C 1000FFA6 */  b     .L0044E1C8
/* 0044E330 00000000 */   nop   
.L0044E334:
/* 0044E334 2401007D */  li    $at, 125
/* 0044E338 10A1FF41 */  beq   $a1, $at, .L0044E040
/* 0044E33C 8FAB0030 */   lw    $t3, 0x30($sp)
/* 0044E340 1000FFA1 */  b     .L0044E1C8
/* 0044E344 00000000 */   nop   
.L0044E348:
/* 0044E348 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044E34C 27BD0028 */  addiu $sp, $sp, 0x28
/* 0044E350 00601025 */  move  $v0, $v1
/* 0044E354 03E00008 */  jr    $ra
/* 0044E358 00000000 */   nop   
    .type binaryovfw, @function
    .size binaryovfw, .-binaryovfw
    .end binaryovfw

glabel ixaovfw
    .ent ixaovfw
    # 0041550C func_0041550C
    # 0044FF6C mergeconst
    # 00451764 func_00451764
/* 0044E35C 3C1C0FBD */  .cpload $t9
/* 0044E360 279CBF34 */  
/* 0044E364 0399E021 */  
/* 0044E368 90AE0000 */  lbu   $t6, ($a1)
/* 0044E36C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0044E370 24010001 */  li    $at, 1
/* 0044E374 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044E378 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044E37C AFA40028 */  sw    $a0, 0x28($sp)
/* 0044E380 15C10003 */  bne   $t6, $at, .L0044E390
/* 0044E384 AFA60030 */   sw    $a2, 0x30($sp)
/* 0044E388 10000002 */  b     .L0044E394
/* 0044E38C 8CA70020 */   lw    $a3, 0x20($a1)
.L0044E390:
/* 0044E390 8CA70020 */  lw    $a3, 0x20($a1)
.L0044E394:
/* 0044E394 8FAF0028 */  lw    $t7, 0x28($sp)
/* 0044E398 8FB80030 */  lw    $t8, 0x30($sp)
/* 0044E39C 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 0044E3A0 91E40001 */  lbu   $a0, 1($t7)
/* 0044E3A4 8DE6002C */  lw    $a2, 0x2c($t7)
/* 0044E3A8 8F050020 */  lw    $a1, 0x20($t8)
/* 0044E3AC 0320F809 */  jalr  $t9
/* 0044E3B0 AFA70020 */   sw    $a3, 0x20($sp)
/* 0044E3B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E3B8 10400003 */  beqz  $v0, .L0044E3C8
/* 0044E3BC 8FA70020 */   lw    $a3, 0x20($sp)
/* 0044E3C0 1000000E */  b     .L0044E3FC
/* 0044E3C4 24030001 */   li    $v1, 1
.L0044E3C8:
/* 0044E3C8 8FB90030 */  lw    $t9, 0x30($sp)
/* 0044E3CC 8FA90028 */  lw    $t1, 0x28($sp)
/* 0044E3D0 00002025 */  move  $a0, $zero
/* 0044E3D4 8F280020 */  lw    $t0, 0x20($t9)
/* 0044E3D8 8D2A002C */  lw    $t2, 0x2c($t1)
/* 0044E3DC 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 0044E3E0 00E02825 */  move  $a1, $a3
/* 0044E3E4 010A0019 */  multu $t0, $t2
/* 0044E3E8 00003012 */  mflo  $a2
/* 0044E3EC 0320F809 */  jalr  $t9
/* 0044E3F0 00000000 */   nop   
/* 0044E3F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E3F8 304300FF */  andi  $v1, $v0, 0xff
.L0044E3FC:
/* 0044E3FC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044E400 27BD0028 */  addiu $sp, $sp, 0x28
/* 0044E404 00601025 */  move  $v0, $v1
/* 0044E408 03E00008 */  jr    $ra
/* 0044E40C 00000000 */   nop   
    .type ixaovfw, @function
    .size ixaovfw, .-ixaovfw
    .end ixaovfw

glabel unaryovfw
    .ent unaryovfw
    # 0041550C func_0041550C
    # 00451764 func_00451764
/* 0044E410 3C1C0FBD */  .cpload $t9
/* 0044E414 279CBE80 */  
/* 0044E418 0399E021 */  
/* 0044E41C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0044E420 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044E424 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044E428 00803825 */  move  $a3, $a0
/* 0044E42C 10000034 */  b     .L0044E500
/* 0044E430 90820020 */   lbu   $v0, 0x20($a0)
.L0044E434:
/* 0044E434 8CEE0024 */  lw    $t6, 0x24($a3)
/* 0044E438 3C018000 */  lui   $at, 0x8000
/* 0044E43C 8DC30020 */  lw    $v1, 0x20($t6)
/* 0044E440 00611826 */  xor   $v1, $v1, $at
/* 0044E444 2C630001 */  sltiu $v1, $v1, 1
/* 0044E448 10000069 */  b     .L0044E5F0
/* 0044E44C 306300FF */   andi  $v1, $v1, 0xff
.L0044E450:
/* 0044E450 8CE20024 */  lw    $v0, 0x24($a3)
/* 0044E454 24010001 */  li    $at, 1
/* 0044E458 904F0000 */  lbu   $t7, ($v0)
/* 0044E45C 15E10009 */  bne   $t7, $at, .L0044E484
/* 0044E460 00000000 */   nop   
/* 0044E464 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 0044E468 90E40001 */  lbu   $a0, 1($a3)
/* 0044E46C 8C450020 */  lw    $a1, 0x20($v0)
/* 0044E470 0320F809 */  jalr  $t9
/* 0044E474 8CE6002C */   lw    $a2, 0x2c($a3)
/* 0044E478 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E47C 1000005C */  b     .L0044E5F0
/* 0044E480 304300FF */   andi  $v1, $v0, 0xff
.L0044E484:
/* 0044E484 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 0044E488 90E40001 */  lbu   $a0, 1($a3)
/* 0044E48C 8C450020 */  lw    $a1, 0x20($v0)
/* 0044E490 0320F809 */  jalr  $t9
/* 0044E494 8CE6002C */   lw    $a2, 0x2c($a3)
/* 0044E498 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E49C 10000054 */  b     .L0044E5F0
/* 0044E4A0 304300FF */   andi  $v1, $v0, 0xff
/* 0044E4A4 8CE20024 */  lw    $v0, 0x24($a3)
.L0044E4A8:
/* 0044E4A8 24010001 */  li    $at, 1
/* 0044E4AC 90580000 */  lbu   $t8, ($v0)
/* 0044E4B0 17010009 */  bne   $t8, $at, .L0044E4D8
/* 0044E4B4 00000000 */   nop   
/* 0044E4B8 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 0044E4BC 90E40001 */  lbu   $a0, 1($a3)
/* 0044E4C0 8C450020 */  lw    $a1, 0x20($v0)
/* 0044E4C4 0320F809 */  jalr  $t9
/* 0044E4C8 8CE6002C */   lw    $a2, 0x2c($a3)
/* 0044E4CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E4D0 10000047 */  b     .L0044E5F0
/* 0044E4D4 304300FF */   andi  $v1, $v0, 0xff
.L0044E4D8:
/* 0044E4D8 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 0044E4DC 90E40001 */  lbu   $a0, 1($a3)
/* 0044E4E0 8C450020 */  lw    $a1, 0x20($v0)
/* 0044E4E4 0320F809 */  jalr  $t9
/* 0044E4E8 8CE6002C */   lw    $a2, 0x2c($a3)
/* 0044E4EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E4F0 1000003F */  b     .L0044E5F0
/* 0044E4F4 304300FF */   andi  $v1, $v0, 0xff
.L0044E4F8:
/* 0044E4F8 1000003D */  b     .L0044E5F0
/* 0044E4FC 00001825 */   move  $v1, $zero
.L0044E500:
/* 0044E500 2C410038 */  sltiu $at, $v0, 0x38
/* 0044E504 14200018 */  bnez  $at, .L0044E568
/* 0044E508 2C410063 */   sltiu $at, $v0, 0x63
/* 0044E50C 14200008 */  bnez  $at, .L0044E530
/* 0044E510 24010072 */   li    $at, 114
/* 0044E514 1041FFF8 */  beq   $v0, $at, .L0044E4F8
/* 0044E518 00000000 */   nop   
/* 0044E51C 24010076 */  li    $at, 118
/* 0044E520 1041FFF5 */  beq   $v0, $at, .L0044E4F8
/* 0044E524 00000000 */   nop   
/* 0044E528 10000022 */  b     .L0044E5B4
/* 0044E52C 00000000 */   nop   
.L0044E530:
/* 0044E530 24010050 */  li    $at, 80
/* 0044E534 1041FFF0 */  beq   $v0, $at, .L0044E4F8
/* 0044E538 00000000 */   nop   
/* 0044E53C 2459FFA2 */  addiu $t9, $v0, -0x5e
/* 0044E540 2F210005 */  sltiu $at, $t9, 5
/* 0044E544 1020001B */  beqz  $at, .L0044E5B4
/* 0044E548 00000000 */   nop   
/* 0044E54C 8F818044 */  lw    $at, %got(jtbl_1000CC20)($gp)
/* 0044E550 0019C880 */  sll   $t9, $t9, 2
/* 0044E554 00390821 */  addu  $at, $at, $t9
/* 0044E558 8C39CC20 */  lw    $t9, %lo(jtbl_1000CC20)($at)
/* 0044E55C 033CC821 */  addu  $t9, $t9, $gp
/* 0044E560 03200008 */  jr    $t9
/* 0044E564 00000000 */   nop   
.L0044E568:
/* 0044E568 2C41000E */  sltiu $at, $v0, 0xe
/* 0044E56C 1420000D */  bnez  $at, .L0044E5A4
/* 0044E570 2C41001B */   sltiu $at, $v0, 0x1b
/* 0044E574 10200019 */  beqz  $at, .L0044E5DC
/* 0044E578 2448FFE7 */   addiu $t0, $v0, -0x19
/* 0044E57C 2D010002 */  sltiu $at, $t0, 2
/* 0044E580 1020000C */  beqz  $at, .L0044E5B4
/* 0044E584 00000000 */   nop   
/* 0044E588 8F818044 */  lw    $at, %got(jtbl_1000CC18)($gp)
/* 0044E58C 00084080 */  sll   $t0, $t0, 2
/* 0044E590 00280821 */  addu  $at, $at, $t0
/* 0044E594 8C28CC18 */  lw    $t0, %lo(jtbl_1000CC18)($at)
/* 0044E598 011C4021 */  addu  $t0, $t0, $gp
/* 0044E59C 01000008 */  jr    $t0
/* 0044E5A0 00000000 */   nop   
.L0044E5A4:
/* 0044E5A4 1040FFA3 */  beqz  $v0, .L0044E434
/* 0044E5A8 2C41000C */   sltiu $at, $v0, 0xc
/* 0044E5AC 1020FFD2 */  beqz  $at, .L0044E4F8
/* 0044E5B0 00000000 */   nop   
.L0044E5B4:
/* 0044E5B4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044E5B8 8F868044 */  lw    $a2, %got(RO_1000CC0C)($gp)
/* 0044E5BC 24040001 */  li    $a0, 1
/* 0044E5C0 24050069 */  li    $a1, 105
/* 0044E5C4 24070009 */  li    $a3, 9
/* 0044E5C8 0320F809 */  jalr  $t9
/* 0044E5CC 24C6CC0C */   addiu $a2, %lo(RO_1000CC0C) # addiu $a2, $a2, -0x33f4
/* 0044E5D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044E5D4 10000006 */  b     .L0044E5F0
/* 0044E5D8 93A30027 */   lbu   $v1, 0x27($sp)
.L0044E5DC:
/* 0044E5DC 24010037 */  li    $at, 55
/* 0044E5E0 5041FFB1 */  beql  $v0, $at, .L0044E4A8
/* 0044E5E4 8CE20024 */   lw    $v0, 0x24($a3)
/* 0044E5E8 1000FFF2 */  b     .L0044E5B4
/* 0044E5EC 00000000 */   nop   
.L0044E5F0:
/* 0044E5F0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044E5F4 27BD0028 */  addiu $sp, $sp, 0x28
/* 0044E5F8 00601025 */  move  $v0, $v1
/* 0044E5FC 03E00008 */  jr    $ra
/* 0044E600 00000000 */   nop   
    .type unaryovfw, @function
    .size unaryovfw, .-unaryovfw
    .end unaryovfw

glabel binaryfold
    .ent binaryfold
    # 0041550C func_0041550C
    # 0044FF6C mergeconst
    # 004510A0 distrlaw
    # 00451764 func_00451764
/* 0044E604 3C1C0FBD */  .cpload $t9
/* 0044E608 279CBC8C */  
/* 0044E60C 0399E021 */  
/* 0044E610 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0044E614 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044E618 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044E61C AFA40038 */  sw    $a0, 0x38($sp)
/* 0044E620 AFA5003C */  sw    $a1, 0x3c($sp)
/* 0044E624 AFA60040 */  sw    $a2, 0x40($sp)
/* 0044E628 AFA70044 */  sw    $a3, 0x44($sp)
/* 0044E62C 90C20000 */  lbu   $v0, ($a2)
/* 0044E630 24090001 */  li    $t1, 1
/* 0044E634 00004025 */  move  $t0, $zero
/* 0044E638 1522000A */  bne   $t1, $v0, .L0044E664
/* 0044E63C 00C07025 */   move  $t6, $a2
/* 0044E640 90F80000 */  lbu   $t8, ($a3)
/* 0044E644 00E07825 */  move  $t7, $a3
/* 0044E648 15380006 */  bne   $t1, $t8, .L0044E664
/* 0044E64C 00000000 */   nop   
/* 0044E650 8DC30020 */  lw    $v1, 0x20($t6)
/* 0044E654 8DE20020 */  lw    $v0, 0x20($t7)
/* 0044E658 24190006 */  li    $t9, 6
/* 0044E65C 1000013A */  b     .L0044EB48
/* 0044E660 A3B9003F */   sb    $t9, 0x3f($sp)
.L0044E664:
/* 0044E664 15220006 */  bne   $t1, $v0, .L0044E680
/* 0044E668 8FAA0040 */   lw    $t2, 0x40($sp)
/* 0044E66C 8FAB0044 */  lw    $t3, 0x44($sp)
/* 0044E670 8D430020 */  lw    $v1, 0x20($t2)
/* 0044E674 312800FF */  andi  $t0, $t1, 0xff
/* 0044E678 10000133 */  b     .L0044EB48
/* 0044E67C 8D620020 */   lw    $v0, 0x20($t3)
.L0044E680:
/* 0044E680 8FAC0044 */  lw    $t4, 0x44($sp)
/* 0044E684 918D0000 */  lbu   $t5, ($t4)
/* 0044E688 552D0007 */  bnel  $t1, $t5, .L0044E6A8
/* 0044E68C 8FAE0040 */   lw    $t6, 0x40($sp)
/* 0044E690 8FB80040 */  lw    $t8, 0x40($sp)
/* 0044E694 8D820020 */  lw    $v0, 0x20($t4)
/* 0044E698 312800FF */  andi  $t0, $t1, 0xff
/* 0044E69C 1000012A */  b     .L0044EB48
/* 0044E6A0 8F030020 */   lw    $v1, 0x20($t8)
/* 0044E6A4 8FAE0040 */  lw    $t6, 0x40($sp)
.L0044E6A8:
/* 0044E6A8 8FAF0044 */  lw    $t7, 0x44($sp)
/* 0044E6AC 8DC30020 */  lw    $v1, 0x20($t6)
/* 0044E6B0 10000125 */  b     .L0044EB48
/* 0044E6B4 8DE20020 */   lw    $v0, 0x20($t7)
.L0044E6B8:
/* 0044E6B8 1000017A */  b     .L0044ECA4
/* 0044E6BC 00623821 */   addu  $a3, $v1, $v0
.L0044E6C0:
/* 0044E6C0 10000178 */  b     .L0044ECA4
/* 0044E6C4 00623823 */   subu  $a3, $v1, $v0
.L0044E6C8:
/* 0044E6C8 00620019 */  multu $v1, $v0
/* 0044E6CC 00003812 */  mflo  $a3
/* 0044E6D0 10000174 */  b     .L0044ECA4
/* 0044E6D4 00000000 */   nop   
.L0044E6D8:
/* 0044E6D8 2F2A0020 */  sltiu $t2, $t9, 0x20
/* 0044E6DC 000A5823 */  negu  $t3, $t2
/* 0044E6E0 3C010600 */  lui   $at, 0x600
/* 0044E6E4 01616824 */  and   $t5, $t3, $at
/* 0044E6E8 032DC004 */  sllv  $t8, $t5, $t9
/* 0044E6EC 0701000E */  bgez  $t8, .L0044E728
/* 0044E6F0 00000000 */   nop   
/* 0044E6F4 0062001A */  div   $zero, $v1, $v0
/* 0044E6F8 00003812 */  mflo  $a3
/* 0044E6FC 14400002 */  bnez  $v0, .L0044E708
/* 0044E700 00000000 */   nop   
/* 0044E704 0007000D */  break 7
.L0044E708:
/* 0044E708 2401FFFF */  li    $at, -1
/* 0044E70C 14410004 */  bne   $v0, $at, .L0044E720
/* 0044E710 3C018000 */   lui   $at, 0x8000
/* 0044E714 14610002 */  bne   $v1, $at, .L0044E720
/* 0044E718 00000000 */   nop   
/* 0044E71C 0006000D */  break 6
.L0044E720:
/* 0044E720 10000160 */  b     .L0044ECA4
/* 0044E724 00000000 */   nop   
.L0044E728:
/* 0044E728 0062001B */  divu  $zero, $v1, $v0
/* 0044E72C 00003812 */  mflo  $a3
/* 0044E730 14400002 */  bnez  $v0, .L0044E73C
/* 0044E734 00000000 */   nop   
/* 0044E738 0007000D */  break 7
.L0044E73C:
/* 0044E73C 10000159 */  b     .L0044ECA4
/* 0044E740 00000000 */   nop   
.L0044E744:
/* 0044E744 93AC003F */  lbu   $t4, 0x3f($sp)
/* 0044E748 3C010600 */  lui   $at, 0x600
/* 0044E74C 2D8E0020 */  sltiu $t6, $t4, 0x20
/* 0044E750 000E7823 */  negu  $t7, $t6
/* 0044E754 01E15024 */  and   $t2, $t7, $at
/* 0044E758 018A5804 */  sllv  $t3, $t2, $t4
/* 0044E75C 05610012 */  bgez  $t3, .L0044E7A8
/* 0044E760 00000000 */   nop   
/* 0044E764 0062001A */  div   $zero, $v1, $v0
/* 0044E768 00003810 */  mfhi  $a3
/* 0044E76C 00E26826 */  xor   $t5, $a3, $v0
/* 0044E770 14400002 */  bnez  $v0, .L0044E77C
/* 0044E774 00000000 */   nop   
/* 0044E778 0007000D */  break 7
.L0044E77C:
/* 0044E77C 2401FFFF */  li    $at, -1
/* 0044E780 14410004 */  bne   $v0, $at, .L0044E794
/* 0044E784 3C018000 */   lui   $at, 0x8000
/* 0044E788 14610002 */  bne   $v1, $at, .L0044E794
/* 0044E78C 00000000 */   nop   
/* 0044E790 0006000D */  break 6
.L0044E794:
/* 0044E794 05A10143 */  bgez  $t5, .L0044ECA4
/* 0044E798 00000000 */   nop   
/* 0044E79C 00E23821 */  addu  $a3, $a3, $v0
/* 0044E7A0 10000140 */  b     .L0044ECA4
/* 0044E7A4 00000000 */   nop   
.L0044E7A8:
/* 0044E7A8 0062001B */  divu  $zero, $v1, $v0
/* 0044E7AC 00003810 */  mfhi  $a3
/* 0044E7B0 00E2C826 */  xor   $t9, $a3, $v0
/* 0044E7B4 14400002 */  bnez  $v0, .L0044E7C0
/* 0044E7B8 00000000 */   nop   
/* 0044E7BC 0007000D */  break 7
.L0044E7C0:
/* 0044E7C0 07210138 */  bgez  $t9, .L0044ECA4
/* 0044E7C4 00000000 */   nop   
/* 0044E7C8 00E23821 */  addu  $a3, $a3, $v0
/* 0044E7CC 10000135 */  b     .L0044ECA4
/* 0044E7D0 00000000 */   nop   
.L0044E7D4:
/* 0044E7D4 93B8003F */  lbu   $t8, 0x3f($sp)
/* 0044E7D8 3C010600 */  lui   $at, 0x600
/* 0044E7DC 2F0E0020 */  sltiu $t6, $t8, 0x20
/* 0044E7E0 000E7823 */  negu  $t7, $t6
/* 0044E7E4 01E15024 */  and   $t2, $t7, $at
/* 0044E7E8 030A6004 */  sllv  $t4, $t2, $t8
/* 0044E7EC 05810011 */  bgez  $t4, .L0044E834
/* 0044E7F0 00000000 */   nop   
/* 0044E7F4 0062001A */  div   $zero, $v1, $v0
/* 0044E7F8 00005812 */  mflo  $t3
/* 0044E7FC 14400002 */  bnez  $v0, .L0044E808
/* 0044E800 00000000 */   nop   
/* 0044E804 0007000D */  break 7
.L0044E808:
/* 0044E808 2401FFFF */  li    $at, -1
/* 0044E80C 14410004 */  bne   $v0, $at, .L0044E820
/* 0044E810 3C018000 */   lui   $at, 0x8000
/* 0044E814 14610002 */  bne   $v1, $at, .L0044E820
/* 0044E818 00000000 */   nop   
/* 0044E81C 0006000D */  break 6
.L0044E820:
/* 0044E820 01620019 */  multu $t3, $v0
/* 0044E824 00006812 */  mflo  $t5
/* 0044E828 006D3823 */  subu  $a3, $v1, $t5
/* 0044E82C 1000011D */  b     .L0044ECA4
/* 0044E830 00000000 */   nop   
.L0044E834:
/* 0044E834 0062001B */  divu  $zero, $v1, $v0
/* 0044E838 0000C812 */  mflo  $t9
/* 0044E83C 14400002 */  bnez  $v0, .L0044E848
/* 0044E840 00000000 */   nop   
/* 0044E844 0007000D */  break 7
.L0044E848:
/* 0044E848 03220019 */  multu $t9, $v0
/* 0044E84C 00007012 */  mflo  $t6
/* 0044E850 006E3823 */  subu  $a3, $v1, $t6
/* 0044E854 10000113 */  b     .L0044ECA4
/* 0044E858 00000000 */   nop   
.L0044E85C:
/* 0044E85C 10000111 */  b     .L0044ECA4
/* 0044E860 00623824 */   and   $a3, $v1, $v0
.L0044E864:
/* 0044E864 1000010F */  b     .L0044ECA4
/* 0044E868 00623825 */   or    $a3, $v1, $v0
.L0044E86C:
/* 0044E86C 1000010D */  b     .L0044ECA4
/* 0044E870 00623826 */   xor   $a3, $v1, $v0
.L0044E874:
/* 0044E874 1000010B */  b     .L0044ECA4
/* 0044E878 00433804 */   sllv  $a3, $v1, $v0
.L0044E87C:
/* 0044E87C 93AF003F */  lbu   $t7, 0x3f($sp)
/* 0044E880 3C010600 */  lui   $at, 0x600
/* 0044E884 2DEA0020 */  sltiu $t2, $t7, 0x20
/* 0044E888 000AC023 */  negu  $t8, $t2
/* 0044E88C 03016024 */  and   $t4, $t8, $at
/* 0044E890 01EC5804 */  sllv  $t3, $t4, $t7
/* 0044E894 05610003 */  bgez  $t3, .L0044E8A4
/* 0044E898 00000000 */   nop   
/* 0044E89C 10000101 */  b     .L0044ECA4
/* 0044E8A0 00433807 */   srav  $a3, $v1, $v0
.L0044E8A4:
/* 0044E8A4 100000FF */  b     .L0044ECA4
/* 0044E8A8 00433806 */   srlv  $a3, $v1, $v0
.L0044E8AC:
/* 0044E8AC 04400006 */  bltz  $v0, .L0044E8C8
/* 0044E8B0 00000000 */   nop   
/* 0044E8B4 046100FB */  bgez  $v1, .L0044ECA4
/* 0044E8B8 00603825 */   move  $a3, $v1
/* 0044E8BC 00033823 */  negu  $a3, $v1
/* 0044E8C0 100000F8 */  b     .L0044ECA4
/* 0044E8C4 00000000 */   nop   
.L0044E8C8:
/* 0044E8C8 04610002 */  bgez  $v1, .L0044E8D4
/* 0044E8CC 00603825 */   move  $a3, $v1
/* 0044E8D0 00033823 */  negu  $a3, $v1
.L0044E8D4:
/* 0044E8D4 100000F3 */  b     .L0044ECA4
/* 0044E8D8 00073823 */   negu  $a3, $a3
.L0044E8DC:
/* 0044E8DC 11000003 */  beqz  $t0, .L0044E8EC
/* 0044E8E0 00003825 */   move  $a3, $zero
/* 0044E8E4 100000EF */  b     .L0044ECA4
/* 0044E8E8 00004025 */   move  $t0, $zero
.L0044E8EC:
/* 0044E8EC 14620003 */  bne   $v1, $v0, .L0044E8FC
/* 0044E8F0 00000000 */   nop   
/* 0044E8F4 100000EB */  b     .L0044ECA4
/* 0044E8F8 24070001 */   li    $a3, 1
.L0044E8FC:
/* 0044E8FC 100000E9 */  b     .L0044ECA4
/* 0044E900 00003825 */   move  $a3, $zero
.L0044E904:
/* 0044E904 11000003 */  beqz  $t0, .L0044E914
/* 0044E908 24070001 */   li    $a3, 1
/* 0044E90C 100000E5 */  b     .L0044ECA4
/* 0044E910 00004025 */   move  $t0, $zero
.L0044E914:
/* 0044E914 10620003 */  beq   $v1, $v0, .L0044E924
/* 0044E918 00000000 */   nop   
/* 0044E91C 100000E1 */  b     .L0044ECA4
/* 0044E920 24070001 */   li    $a3, 1
.L0044E924:
/* 0044E924 100000DF */  b     .L0044ECA4
/* 0044E928 00003825 */   move  $a3, $zero
.L0044E92C:
/* 0044E92C 93AD003F */  lbu   $t5, 0x3f($sp)
/* 0044E930 3C010600 */  lui   $at, 0x600
/* 0044E934 2DB90020 */  sltiu $t9, $t5, 0x20
/* 0044E938 00197023 */  negu  $t6, $t9
/* 0044E93C 01C15024 */  and   $t2, $t6, $at
/* 0044E940 01AAC004 */  sllv  $t8, $t2, $t5
/* 0044E944 07010008 */  bgez  $t8, .L0044E968
/* 0044E948 0062082B */   sltu  $at, $v1, $v0
/* 0044E94C 0062082A */  slt   $at, $v1, $v0
/* 0044E950 14200003 */  bnez  $at, .L0044E960
/* 0044E954 00000000 */   nop   
/* 0044E958 100000D2 */  b     .L0044ECA4
/* 0044E95C 24070001 */   li    $a3, 1
.L0044E960:
/* 0044E960 100000D0 */  b     .L0044ECA4
/* 0044E964 00003825 */   move  $a3, $zero
.L0044E968:
/* 0044E968 14200003 */  bnez  $at, .L0044E978
/* 0044E96C 00000000 */   nop   
/* 0044E970 100000CC */  b     .L0044ECA4
/* 0044E974 24070001 */   li    $a3, 1
.L0044E978:
/* 0044E978 100000CA */  b     .L0044ECA4
/* 0044E97C 00003825 */   move  $a3, $zero
.L0044E980:
/* 0044E980 93AC003F */  lbu   $t4, 0x3f($sp)
/* 0044E984 3C010600 */  lui   $at, 0x600
/* 0044E988 2D8F0020 */  sltiu $t7, $t4, 0x20
/* 0044E98C 000F5823 */  negu  $t3, $t7
/* 0044E990 0161C824 */  and   $t9, $t3, $at
/* 0044E994 01997004 */  sllv  $t6, $t9, $t4
/* 0044E998 05C10008 */  bgez  $t6, .L0044E9BC
/* 0044E99C 0043082B */   sltu  $at, $v0, $v1
/* 0044E9A0 0043082A */  slt   $at, $v0, $v1
/* 0044E9A4 10200003 */  beqz  $at, .L0044E9B4
/* 0044E9A8 00000000 */   nop   
/* 0044E9AC 100000BD */  b     .L0044ECA4
/* 0044E9B0 24070001 */   li    $a3, 1
.L0044E9B4:
/* 0044E9B4 100000BB */  b     .L0044ECA4
/* 0044E9B8 00003825 */   move  $a3, $zero
.L0044E9BC:
/* 0044E9BC 10200003 */  beqz  $at, .L0044E9CC
/* 0044E9C0 00000000 */   nop   
/* 0044E9C4 100000B7 */  b     .L0044ECA4
/* 0044E9C8 24070001 */   li    $a3, 1
.L0044E9CC:
/* 0044E9CC 100000B5 */  b     .L0044ECA4
/* 0044E9D0 00003825 */   move  $a3, $zero
.L0044E9D4:
/* 0044E9D4 93AA003F */  lbu   $t2, 0x3f($sp)
/* 0044E9D8 3C010600 */  lui   $at, 0x600
/* 0044E9DC 2D4D0020 */  sltiu $t5, $t2, 0x20
/* 0044E9E0 000DC023 */  negu  $t8, $t5
/* 0044E9E4 03017824 */  and   $t7, $t8, $at
/* 0044E9E8 014F5804 */  sllv  $t3, $t7, $t2
/* 0044E9EC 05610008 */  bgez  $t3, .L0044EA10
/* 0044E9F0 0043082B */   sltu  $at, $v0, $v1
/* 0044E9F4 0043082A */  slt   $at, $v0, $v1
/* 0044E9F8 14200003 */  bnez  $at, .L0044EA08
/* 0044E9FC 00000000 */   nop   
/* 0044EA00 100000A8 */  b     .L0044ECA4
/* 0044EA04 24070001 */   li    $a3, 1
.L0044EA08:
/* 0044EA08 100000A6 */  b     .L0044ECA4
/* 0044EA0C 00003825 */   move  $a3, $zero
.L0044EA10:
/* 0044EA10 14200003 */  bnez  $at, .L0044EA20
/* 0044EA14 00000000 */   nop   
/* 0044EA18 100000A2 */  b     .L0044ECA4
/* 0044EA1C 24070001 */   li    $a3, 1
.L0044EA20:
/* 0044EA20 100000A0 */  b     .L0044ECA4
/* 0044EA24 00003825 */   move  $a3, $zero
.L0044EA28:
/* 0044EA28 93B9003F */  lbu   $t9, 0x3f($sp)
/* 0044EA2C 3C010600 */  lui   $at, 0x600
/* 0044EA30 2F2C0020 */  sltiu $t4, $t9, 0x20
/* 0044EA34 000C7023 */  negu  $t6, $t4
/* 0044EA38 01C16824 */  and   $t5, $t6, $at
/* 0044EA3C 032DC004 */  sllv  $t8, $t5, $t9
/* 0044EA40 07010008 */  bgez  $t8, .L0044EA64
/* 0044EA44 0062082B */   sltu  $at, $v1, $v0
/* 0044EA48 0062082A */  slt   $at, $v1, $v0
/* 0044EA4C 10200003 */  beqz  $at, .L0044EA5C
/* 0044EA50 00000000 */   nop   
/* 0044EA54 10000093 */  b     .L0044ECA4
/* 0044EA58 24070001 */   li    $a3, 1
.L0044EA5C:
/* 0044EA5C 10000091 */  b     .L0044ECA4
/* 0044EA60 00003825 */   move  $a3, $zero
.L0044EA64:
/* 0044EA64 10200003 */  beqz  $at, .L0044EA74
/* 0044EA68 00000000 */   nop   
/* 0044EA6C 1000008D */  b     .L0044ECA4
/* 0044EA70 24070001 */   li    $a3, 1
.L0044EA74:
/* 0044EA74 1000008B */  b     .L0044ECA4
/* 0044EA78 00003825 */   move  $a3, $zero
.L0044EA7C:
/* 0044EA7C 93AF003F */  lbu   $t7, 0x3f($sp)
/* 0044EA80 3C010600 */  lui   $at, 0x600
/* 0044EA84 2DEA0020 */  sltiu $t2, $t7, 0x20
/* 0044EA88 000A5823 */  negu  $t3, $t2
/* 0044EA8C 01616024 */  and   $t4, $t3, $at
/* 0044EA90 01EC7004 */  sllv  $t6, $t4, $t7
/* 0044EA94 05C10007 */  bgez  $t6, .L0044EAB4
/* 0044EA98 0043082B */   sltu  $at, $v0, $v1
/* 0044EA9C 0043082A */  slt   $at, $v0, $v1
/* 0044EAA0 10200080 */  beqz  $at, .L0044ECA4
/* 0044EAA4 00603825 */   move  $a3, $v1
/* 0044EAA8 00403825 */  move  $a3, $v0
/* 0044EAAC 1000007D */  b     .L0044ECA4
/* 0044EAB0 00000000 */   nop   
.L0044EAB4:
/* 0044EAB4 1020007B */  beqz  $at, .L0044ECA4
/* 0044EAB8 00603825 */   move  $a3, $v1
/* 0044EABC 00403825 */  move  $a3, $v0
/* 0044EAC0 10000078 */  b     .L0044ECA4
/* 0044EAC4 00000000 */   nop   
.L0044EAC8:
/* 0044EAC8 93AD003F */  lbu   $t5, 0x3f($sp)
/* 0044EACC 3C010600 */  lui   $at, 0x600
/* 0044EAD0 2DB90020 */  sltiu $t9, $t5, 0x20
/* 0044EAD4 0019C023 */  negu  $t8, $t9
/* 0044EAD8 03015024 */  and   $t2, $t8, $at
/* 0044EADC 01AA5804 */  sllv  $t3, $t2, $t5
/* 0044EAE0 05610007 */  bgez  $t3, .L0044EB00
/* 0044EAE4 0062082B */   sltu  $at, $v1, $v0
/* 0044EAE8 0062082A */  slt   $at, $v1, $v0
/* 0044EAEC 1020006D */  beqz  $at, .L0044ECA4
/* 0044EAF0 00603825 */   move  $a3, $v1
/* 0044EAF4 00403825 */  move  $a3, $v0
/* 0044EAF8 1000006A */  b     .L0044ECA4
/* 0044EAFC 00000000 */   nop   
.L0044EB00:
/* 0044EB00 10200068 */  beqz  $at, .L0044ECA4
/* 0044EB04 00603825 */   move  $a3, $v1
/* 0044EB08 00403825 */  move  $a3, $v0
/* 0044EB0C 10000065 */  b     .L0044ECA4
/* 0044EB10 00000000 */   nop   
.L0044EB14:
/* 0044EB14 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044EB18 8F868044 */  lw    $a2, %got(RO_1000CC34)($gp)
/* 0044EB1C 01202025 */  move  $a0, $t1
/* 0044EB20 24050095 */  li    $a1, 149
/* 0044EB24 24070009 */  li    $a3, 9
/* 0044EB28 A3A80023 */  sb    $t0, 0x23($sp)
/* 0044EB2C 0320F809 */  jalr  $t9
/* 0044EB30 24C6CC34 */   addiu $a2, %lo(RO_1000CC34) # addiu $a2, $a2, -0x33cc
/* 0044EB34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044EB38 93A80023 */  lbu   $t0, 0x23($sp)
/* 0044EB3C 24090001 */  li    $t1, 1
/* 0044EB40 10000058 */  b     .L0044ECA4
/* 0044EB44 8FA70034 */   lw    $a3, 0x34($sp)
.L0044EB48:
/* 0044EB48 2C81004F */  sltiu $at, $a0, 0x4f
/* 0044EB4C 14200019 */  bnez  $at, .L0044EBB4
/* 0044EB50 2C810076 */   sltiu $at, $a0, 0x76
/* 0044EB54 14200008 */  bnez  $at, .L0044EB78
/* 0044EB58 2401007D */   li    $at, 125
/* 0044EB5C 1081FED8 */  beq   $a0, $at, .L0044E6C0
/* 0044EB60 00000000 */   nop   
/* 0044EB64 2401008D */  li    $at, 141
/* 0044EB68 1081FF40 */  beq   $a0, $at, .L0044E86C
/* 0044EB6C 00000000 */   nop   
/* 0044EB70 1000FFE8 */  b     .L0044EB14
/* 0044EB74 00000000 */   nop   
.L0044EB78:
/* 0044EB78 2C810060 */  sltiu $at, $a0, 0x60
/* 0044EB7C 1420003E */  bnez  $at, .L0044EC78
/* 0044EB80 24010069 */   li    $at, 105
/* 0044EB84 1081FF13 */  beq   $a0, $at, .L0044E7D4
/* 0044EB88 248CFF8D */   addiu $t4, $a0, -0x73
/* 0044EB8C 2D810003 */  sltiu $at, $t4, 3
/* 0044EB90 1020FFE0 */  beqz  $at, .L0044EB14
/* 0044EB94 00000000 */   nop   
/* 0044EB98 8F818044 */  lw    $at, %got(jtbl_1000CC8C)($gp)
/* 0044EB9C 000C6080 */  sll   $t4, $t4, 2
/* 0044EBA0 002C0821 */  addu  $at, $at, $t4
/* 0044EBA4 8C2CCC8C */  lw    $t4, %lo(jtbl_1000CC8C)($at)
/* 0044EBA8 019C6021 */  addu  $t4, $t4, $gp
/* 0044EBAC 01800008 */  jr    $t4
/* 0044EBB0 00000000 */   nop   
.L0044EBB4:
/* 0044EBB4 2C810024 */  sltiu $at, $a0, 0x24
/* 0044EBB8 1420000F */  bnez  $at, .L0044EBF8
/* 0044EBBC 2C81002A */   sltiu $at, $a0, 0x2a
/* 0044EBC0 14200022 */  bnez  $at, .L0044EC4C
/* 0044EBC4 2401003C */   li    $at, 60
/* 0044EBC8 1081FF26 */  beq   $a0, $at, .L0044E864
/* 0044EBCC 248FFFB3 */   addiu $t7, $a0, -0x4d
/* 0044EBD0 2DE10002 */  sltiu $at, $t7, 2
/* 0044EBD4 1020FFCF */  beqz  $at, .L0044EB14
/* 0044EBD8 00000000 */   nop   
/* 0044EBDC 8F818044 */  lw    $at, %got(jtbl_1000CC58)($gp)
/* 0044EBE0 000F7880 */  sll   $t7, $t7, 2
/* 0044EBE4 002F0821 */  addu  $at, $at, $t7
/* 0044EBE8 8C2FCC58 */  lw    $t7, %lo(jtbl_1000CC58)($at)
/* 0044EBEC 01FC7821 */  addu  $t7, $t7, $gp
/* 0044EBF0 01E00008 */  jr    $t7
/* 0044EBF4 00000000 */   nop   
.L0044EBF8:
/* 0044EBF8 2C810005 */  sltiu $at, $a0, 5
/* 0044EBFC 14200008 */  bnez  $at, .L0044EC20
/* 0044EC00 2401001D */   li    $at, 29
/* 0044EC04 1081FEB4 */  beq   $a0, $at, .L0044E6D8
/* 0044EC08 93B9003F */   lbu   $t9, 0x3f($sp)
/* 0044EC0C 24010023 */  li    $at, 35
/* 0044EC10 1081FF32 */  beq   $a0, $at, .L0044E8DC
/* 0044EC14 00000000 */   nop   
/* 0044EC18 1000FFBE */  b     .L0044EB14
/* 0044EC1C 00000000 */   nop   
.L0044EC20:
/* 0044EC20 248EFFFF */  addiu $t6, $a0, -1
/* 0044EC24 2DC10004 */  sltiu $at, $t6, 4
/* 0044EC28 1020FFBA */  beqz  $at, .L0044EB14
/* 0044EC2C 00000000 */   nop   
/* 0044EC30 8F818044 */  lw    $at, %got(jtbl_1000CC40)($gp)
/* 0044EC34 000E7080 */  sll   $t6, $t6, 2
/* 0044EC38 002E0821 */  addu  $at, $at, $t6
/* 0044EC3C 8C2ECC40 */  lw    $t6, %lo(jtbl_1000CC40)($at)
/* 0044EC40 01DC7021 */  addu  $t6, $t6, $gp
/* 0044EC44 01C00008 */  jr    $t6
/* 0044EC48 00000000 */   nop   
.L0044EC4C:
/* 0044EC4C 2499FFD8 */  addiu $t9, $a0, -0x28
/* 0044EC50 2F210002 */  sltiu $at, $t9, 2
/* 0044EC54 1020FFAF */  beqz  $at, .L0044EB14
/* 0044EC58 00000000 */   nop   
/* 0044EC5C 8F818044 */  lw    $at, %got(jtbl_1000CC50)($gp)
/* 0044EC60 0019C880 */  sll   $t9, $t9, 2
/* 0044EC64 00390821 */  addu  $at, $at, $t9
/* 0044EC68 8C39CC50 */  lw    $t9, %lo(jtbl_1000CC50)($at)
/* 0044EC6C 033CC821 */  addu  $t9, $t9, $gp
/* 0044EC70 03200008 */  jr    $t9
/* 0044EC74 00000000 */   nop   
.L0044EC78:
/* 0044EC78 2498FFAB */  addiu $t8, $a0, -0x55
/* 0044EC7C 2F01000B */  sltiu $at, $t8, 0xb
/* 0044EC80 1020FFA4 */  beqz  $at, .L0044EB14
/* 0044EC84 00000000 */   nop   
/* 0044EC88 8F818044 */  lw    $at, %got(jtbl_1000CC60)($gp)
/* 0044EC8C 0018C080 */  sll   $t8, $t8, 2
/* 0044EC90 00380821 */  addu  $at, $at, $t8
/* 0044EC94 8C38CC60 */  lw    $t8, %lo(jtbl_1000CC60)($at)
/* 0044EC98 031CC021 */  addu  $t8, $t8, $gp
/* 0044EC9C 03000008 */  jr    $t8
/* 0044ECA0 00000000 */   nop   
.L0044ECA4:
/* 0044ECA4 11000019 */  beqz  $t0, .L0044ED0C
/* 0044ECA8 8FA60048 */   lw    $a2, 0x48($sp)
/* 0044ECAC 8FAA0040 */  lw    $t2, 0x40($sp)
/* 0044ECB0 914D0000 */  lbu   $t5, ($t2)
/* 0044ECB4 152D000B */  bne   $t1, $t5, .L0044ECE4
/* 0044ECB8 00000000 */   nop   
/* 0044ECBC 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 0044ECC0 8FA40048 */  lw    $a0, 0x48($sp)
/* 0044ECC4 01402825 */  move  $a1, $t2
/* 0044ECC8 0320F809 */  jalr  $t9
/* 0044ECCC AFA70034 */   sw    $a3, 0x34($sp)
/* 0044ECD0 8FA60048 */  lw    $a2, 0x48($sp)
/* 0044ECD4 8FA70034 */  lw    $a3, 0x34($sp)
/* 0044ECD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044ECDC 1000001A */  b     .L0044ED48
/* 0044ECE0 ACC70020 */   sw    $a3, 0x20($a2)
.L0044ECE4:
/* 0044ECE4 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 0044ECE8 8FA40048 */  lw    $a0, 0x48($sp)
/* 0044ECEC 8FA50044 */  lw    $a1, 0x44($sp)
/* 0044ECF0 0320F809 */  jalr  $t9
/* 0044ECF4 AFA70034 */   sw    $a3, 0x34($sp)
/* 0044ECF8 8FA60048 */  lw    $a2, 0x48($sp)
/* 0044ECFC 8FA70034 */  lw    $a3, 0x34($sp)
/* 0044ED00 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044ED04 10000010 */  b     .L0044ED48
/* 0044ED08 ACC70020 */   sw    $a3, 0x20($a2)
.L0044ED0C:
/* 0044ED0C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0044ED10 240B0002 */  li    $t3, 2
/* 0044ED14 A0CB0000 */  sb    $t3, ($a2)
/* 0044ED18 93A4003F */  lbu   $a0, 0x3f($sp)
/* 0044ED1C 0320F809 */  jalr  $t9
/* 0044ED20 AFA70034 */   sw    $a3, 0x34($sp)
/* 0044ED24 8FA60048 */  lw    $a2, 0x48($sp)
/* 0044ED28 8FA70034 */  lw    $a3, 0x34($sp)
/* 0044ED2C 93AC003F */  lbu   $t4, 0x3f($sp)
/* 0044ED30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044ED34 ACC20028 */  sw    $v0, 0x28($a2)
/* 0044ED38 ACC00018 */  sw    $zero, 0x18($a2)
/* 0044ED3C A0C00004 */  sb    $zero, 4($a2)
/* 0044ED40 ACC70020 */  sw    $a3, 0x20($a2)
/* 0044ED44 A0CC0001 */  sb    $t4, 1($a2)
.L0044ED48:
/* 0044ED48 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044ED4C ACC00014 */  sw    $zero, 0x14($a2)
/* 0044ED50 27BD0038 */  addiu $sp, $sp, 0x38
/* 0044ED54 03E00008 */  jr    $ra
/* 0044ED58 00000000 */   nop   
    .type binaryfold, @function
    .size binaryfold, .-binaryfold
    .end binaryfold

glabel ixafold
    .ent ixafold
    # 0041550C func_0041550C
    # 0044FF6C mergeconst
    # 00451764 func_00451764
/* 0044ED5C 3C1C0FBD */  .cpload $t9
/* 0044ED60 279CB534 */  
/* 0044ED64 0399E021 */  
/* 0044ED68 90AE0000 */  lbu   $t6, ($a1)
/* 0044ED6C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0044ED70 24010001 */  li    $at, 1
/* 0044ED74 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044ED78 15C10003 */  bne   $t6, $at, .L0044ED88
/* 0044ED7C AFBC0018 */   sw    $gp, 0x18($sp)
/* 0044ED80 10000002 */  b     .L0044ED8C
/* 0044ED84 8CA20020 */   lw    $v0, 0x20($a1)
.L0044ED88:
/* 0044ED88 8CA20020 */  lw    $v0, 0x20($a1)
.L0044ED8C:
/* 0044ED8C 8CCF0020 */  lw    $t7, 0x20($a2)
/* 0044ED90 8C98002C */  lw    $t8, 0x2c($a0)
/* 0044ED94 01F80019 */  multu $t7, $t8
/* 0044ED98 0000C812 */  mflo  $t9
/* 0044ED9C 00591021 */  addu  $v0, $v0, $t9
/* 0044EDA0 50E5000A */  beql  $a3, $a1, .L0044EDCC
/* 0044EDA4 90E80000 */   lbu   $t0, ($a3)
/* 0044EDA8 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 0044EDAC 00E02025 */  move  $a0, $a3
/* 0044EDB0 AFA20024 */  sw    $v0, 0x24($sp)
/* 0044EDB4 0320F809 */  jalr  $t9
/* 0044EDB8 AFA70034 */   sw    $a3, 0x34($sp)
/* 0044EDBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044EDC0 8FA20024 */  lw    $v0, 0x24($sp)
/* 0044EDC4 8FA70034 */  lw    $a3, 0x34($sp)
/* 0044EDC8 90E80000 */  lbu   $t0, ($a3)
.L0044EDCC:
/* 0044EDCC 24010001 */  li    $at, 1
/* 0044EDD0 55010004 */  bnel  $t0, $at, .L0044EDE4
/* 0044EDD4 ACE20020 */   sw    $v0, 0x20($a3)
/* 0044EDD8 10000002 */  b     .L0044EDE4
/* 0044EDDC ACE20020 */   sw    $v0, 0x20($a3)
/* 0044EDE0 ACE20020 */  sw    $v0, 0x20($a3)
.L0044EDE4:
/* 0044EDE4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044EDE8 ACE00014 */  sw    $zero, 0x14($a3)
/* 0044EDEC 27BD0028 */  addiu $sp, $sp, 0x28
/* 0044EDF0 03E00008 */  jr    $ra
/* 0044EDF4 00000000 */   nop   
    .type ixafold, @function
    .size ixafold, .-ixafold
    .end ixafold

glabel ilodfold
    .ent ilodfold
    # 0041550C func_0041550C
    # 00451764 func_00451764
/* 0044EDF8 3C1C0FBD */  .cpload $t9
/* 0044EDFC 279CB498 */  
/* 0044EE00 0399E021 */  
/* 0044EE04 27BDFF88 */  addiu $sp, $sp, -0x78
/* 0044EE08 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0044EE0C AFBC0038 */  sw    $gp, 0x38($sp)
/* 0044EE10 AFB40034 */  sw    $s4, 0x34($sp)
/* 0044EE14 AFB30030 */  sw    $s3, 0x30($sp)
/* 0044EE18 AFB2002C */  sw    $s2, 0x2c($sp)
/* 0044EE1C AFB10028 */  sw    $s1, 0x28($sp)
/* 0044EE20 AFB00024 */  sw    $s0, 0x24($sp)
/* 0044EE24 8C820024 */  lw    $v0, 0x24($a0)
/* 0044EE28 27B4006C */  addiu $s4, $sp, 0x6c
/* 0044EE2C 8F8B8B6C */  lw     $t3, %got(curproc)($gp)
/* 0044EE30 8C4F002C */  lw    $t7, 0x2c($v0)
/* 0044EE34 8C4E0030 */  lw    $t6, 0x30($v0)
/* 0044EE38 8C580020 */  lw    $t8, 0x20($v0)
/* 0044EE3C AE8F0000 */  sw    $t7, ($s4)
/* 0044EE40 AE8E0004 */  sw    $t6, 4($s4)
/* 0044EE44 8C99002C */  lw    $t9, 0x2c($a0)
/* 0044EE48 8D6B0000 */  lw    $t3, ($t3)
/* 0044EE4C 00809025 */  move  $s2, $a0
/* 0044EE50 03194021 */  addu  $t0, $t8, $t9
/* 0044EE54 AFA8006C */  sw    $t0, 0x6c($sp)
/* 0044EE58 8E8A0000 */  lw    $t2, ($s4)
/* 0044EE5C 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0044EE60 240D0001 */  li    $t5, 1
/* 0044EE64 AFAA0000 */  sw    $t2, ($sp)
/* 0044EE68 8E850004 */  lw    $a1, 4($s4)
/* 0044EE6C 256C0004 */  addiu $t4, $t3, 4
/* 0044EE70 AFA50004 */  sw    $a1, 4($sp)
/* 0044EE74 90870001 */  lbu   $a3, 1($a0)
/* 0044EE78 9486003C */  lhu   $a2, 0x3c($a0)
/* 0044EE7C AFA0001C */  sw    $zero, 0x1c($sp)
/* 0044EE80 AFA00018 */  sw    $zero, 0x18($sp)
/* 0044EE84 AFAD0014 */  sw    $t5, 0x14($sp)
/* 0044EE88 AFAC0010 */  sw    $t4, 0x10($sp)
/* 0044EE8C 0320F809 */  jalr  $t9
/* 0044EE90 01402025 */   move  $a0, $t2
/* 0044EE94 904E0001 */  lbu   $t6, 1($v0)
/* 0044EE98 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0044EE9C 51C00004 */  beql  $t6, $zero, .L0044EEB0
/* 0044EEA0 8E840000 */   lw    $a0, ($s4)
/* 0044EEA4 100000BB */  b     .L0044F194
/* 0044EEA8 02401825 */   move  $v1, $s2
/* 0044EEAC 8E840000 */  lw    $a0, ($s4)
.L0044EEB0:
/* 0044EEB0 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0044EEB4 AFA40000 */  sw    $a0, ($sp)
/* 0044EEB8 8E850004 */  lw    $a1, 4($s4)
/* 0044EEBC 0320F809 */  jalr  $t9
/* 0044EEC0 AFA50004 */   sw    $a1, 4($sp)
/* 0044EEC4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0044EEC8 3059FFFF */  andi  $t9, $v0, 0xffff
/* 0044EECC 00194080 */  sll   $t0, $t9, 2
/* 0044EED0 8F898DF8 */  lw     $t1, %got(table)($gp)
/* 0044EED4 A7A20068 */  sh    $v0, 0x68($sp)
/* 0044EED8 00009825 */  move  $s3, $zero
/* 0044EEDC 01095021 */  addu  $t2, $t0, $t1
/* 0044EEE0 8D500000 */  lw    $s0, ($t2)
/* 0044EEE4 00008825 */  move  $s1, $zero
/* 0044EEE8 1200003D */  beqz  $s0, .L0044EFE0
/* 0044EEEC 00000000 */   nop   
/* 0044EEF0 920B0000 */  lbu   $t3, ($s0)
.L0044EEF4:
/* 0044EEF4 24010003 */  li    $at, 3
/* 0044EEF8 15610032 */  bne   $t3, $at, .L0044EFC4
/* 0044EEFC 00000000 */   nop   
/* 0044EF00 8E040028 */  lw    $a0, 0x28($s0)
/* 0044EF04 8E05002C */  lw    $a1, 0x2c($s0)
/* 0044EF08 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0044EF0C AFA40000 */  sw    $a0, ($sp)
/* 0044EF10 AFA50004 */  sw    $a1, 4($sp)
/* 0044EF14 8E860000 */  lw    $a2, ($s4)
/* 0044EF18 AFA60008 */  sw    $a2, 8($sp)
/* 0044EF1C 8E870004 */  lw    $a3, 4($s4)
/* 0044EF20 0320F809 */  jalr  $t9
/* 0044EF24 AFA7000C */   sw    $a3, 0xc($sp)
/* 0044EF28 10400026 */  beqz  $v0, .L0044EFC4
/* 0044EF2C 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0044EF30 8E580010 */  lw    $t8, 0x10($s2)
/* 0044EF34 8E190010 */  lw    $t9, 0x10($s0)
/* 0044EF38 02009825 */  move  $s3, $s0
/* 0044EF3C 03191026 */  xor   $v0, $t8, $t9
/* 0044EF40 2C420001 */  sltiu $v0, $v0, 1
/* 0044EF44 50400016 */  beql  $v0, $zero, .L0044EFA0
/* 0044EF48 304D00FF */   andi  $t5, $v0, 0xff
/* 0044EF4C 92480002 */  lbu   $t0, 2($s2)
/* 0044EF50 92090002 */  lbu   $t1, 2($s0)
/* 0044EF54 01091026 */  xor   $v0, $t0, $t1
/* 0044EF58 2C420001 */  sltiu $v0, $v0, 1
/* 0044EF5C 50400010 */  beql  $v0, $zero, .L0044EFA0
/* 0044EF60 304D00FF */   andi  $t5, $v0, 0xff
/* 0044EF64 924A0003 */  lbu   $t2, 3($s2)
/* 0044EF68 920B0003 */  lbu   $t3, 3($s0)
/* 0044EF6C 014B1026 */  xor   $v0, $t2, $t3
/* 0044EF70 2C420001 */  sltiu $v0, $v0, 1
/* 0044EF74 5040000A */  beql  $v0, $zero, .L0044EFA0
/* 0044EF78 304D00FF */   andi  $t5, $v0, 0xff
/* 0044EF7C 8E030030 */  lw    $v1, 0x30($s0)
/* 0044EF80 2C620001 */  sltiu $v0, $v1, 1
/* 0044EF84 54400006 */  bnezl $v0, .L0044EFA0
/* 0044EF88 304D00FF */   andi  $t5, $v0, 0xff
/* 0044EF8C 8F8C89CC */  lw     $t4, %got(nocopy)($gp)
/* 0044EF90 8D8C0000 */  lw    $t4, ($t4)
/* 0044EF94 01831026 */  xor   $v0, $t4, $v1
/* 0044EF98 2C420001 */  sltiu $v0, $v0, 1
/* 0044EF9C 304D00FF */  andi  $t5, $v0, 0xff
.L0044EFA0:
/* 0044EFA0 11A00008 */  beqz  $t5, .L0044EFC4
/* 0044EFA4 305100FF */   andi  $s1, $v0, 0xff
/* 0044EFA8 920E0002 */  lbu   $t6, 2($s0)
/* 0044EFAC 11C00005 */  beqz  $t6, .L0044EFC4
/* 0044EFB0 00000000 */   nop   
/* 0044EFB4 920F0003 */  lbu   $t7, 3($s0)
/* 0044EFB8 15E00002 */  bnez  $t7, .L0044EFC4
/* 0044EFBC 00000000 */   nop   
/* 0044EFC0 00008825 */  move  $s1, $zero
.L0044EFC4:
/* 0044EFC4 16200002 */  bnez  $s1, .L0044EFD0
/* 0044EFC8 00000000 */   nop   
/* 0044EFCC 8E10001C */  lw    $s0, 0x1c($s0)
.L0044EFD0:
/* 0044EFD0 16200003 */  bnez  $s1, .L0044EFE0
/* 0044EFD4 00000000 */   nop   
/* 0044EFD8 5600FFC6 */  bnezl $s0, .L0044EEF4
/* 0044EFDC 920B0000 */   lbu   $t3, ($s0)
.L0044EFE0:
/* 0044EFE0 1620003D */  bnez  $s1, .L0044F0D8
/* 0044EFE4 00000000 */   nop   
/* 0044EFE8 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0044EFEC 97A40068 */  lhu   $a0, 0x68($sp)
/* 0044EFF0 0320F809 */  jalr  $t9
/* 0044EFF4 00000000 */   nop   
/* 0044EFF8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0044EFFC 00408025 */  move  $s0, $v0
/* 0044F000 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 0044F004 93180000 */  lbu   $t8, ($t8)
/* 0044F008 13000003 */  beqz  $t8, .L0044F018
/* 0044F00C 00000000 */   nop   
/* 0044F010 10000061 */  b     .L0044F198
/* 0044F014 8FA20074 */   lw    $v0, 0x74($sp)
.L0044F018:
/* 0044F018 8F998A60 */  lw     $t9, %got(inlopt)($gp)
/* 0044F01C 24080003 */  li    $t0, 3
/* 0044F020 93390000 */  lbu   $t9, ($t9)
/* 0044F024 5720000B */  bnezl $t9, .L0044F054
/* 0044F028 A2000021 */   sb    $zero, 0x21($s0)
/* 0044F02C 52600009 */  beql  $s3, $zero, .L0044F054
/* 0044F030 A2000021 */   sb    $zero, 0x21($s0)
/* 0044F034 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 0044F038 02002025 */  move  $a0, $s0
/* 0044F03C 02602825 */  move  $a1, $s3
/* 0044F040 0320F809 */  jalr  $t9
/* 0044F044 00000000 */   nop   
/* 0044F048 10000017 */  b     .L0044F0A8
/* 0044F04C 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0044F050 A2000021 */  sb    $zero, 0x21($s0)
.L0044F054:
/* 0044F054 A2000022 */  sb    $zero, 0x22($s0)
/* 0044F058 A2080000 */  sb    $t0, ($s0)
/* 0044F05C 92490001 */  lbu   $t1, 1($s2)
/* 0044F060 8E8B0000 */  lw    $t3, ($s4)
/* 0044F064 8E8A0004 */  lw    $t2, 4($s4)
/* 0044F068 8F998660 */  lw    $t9, %call16(blktolev)($gp)
/* 0044F06C A2090001 */  sb    $t1, 1($s0)
/* 0044F070 AE0B0028 */  sw    $t3, 0x28($s0)
/* 0044F074 AE0A002C */  sw    $t2, 0x2c($s0)
/* 0044F078 964C003C */  lhu   $t4, 0x3c($s2)
/* 0044F07C 8FA40070 */  lw    $a0, 0x70($sp)
/* 0044F080 AE000024 */  sw    $zero, 0x24($s0)
/* 0044F084 A2000004 */  sb    $zero, 4($s0)
/* 0044F088 A20C0020 */  sb    $t4, 0x20($s0)
/* 0044F08C 0320F809 */  jalr  $t9
/* 0044F090 000422C2 */   srl   $a0, $a0, 0xb
/* 0044F094 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0044F098 A202002F */  sb    $v0, 0x2f($s0)
/* 0044F09C AE00003C */  sw    $zero, 0x3c($s0)
/* 0044F0A0 A2000005 */  sb    $zero, 5($s0)
/* 0044F0A4 A2000023 */  sb    $zero, 0x23($s0)
.L0044F0A8:
/* 0044F0A8 240D0001 */  li    $t5, 1
/* 0044F0AC A60D0006 */  sh    $t5, 6($s0)
/* 0044F0B0 AE000030 */  sw    $zero, 0x30($s0)
/* 0044F0B4 AE000038 */  sw    $zero, 0x38($s0)
/* 0044F0B8 AE000034 */  sw    $zero, 0x34($s0)
/* 0044F0BC 8E4E0010 */  lw    $t6, 0x10($s2)
/* 0044F0C0 AE0E0010 */  sw    $t6, 0x10($s0)
/* 0044F0C4 924F0003 */  lbu   $t7, 3($s2)
/* 0044F0C8 A20F0003 */  sb    $t7, 3($s0)
/* 0044F0CC 92580002 */  lbu   $t8, 2($s2)
/* 0044F0D0 10000006 */  b     .L0044F0EC
/* 0044F0D4 A2180002 */   sb    $t8, 2($s0)
.L0044F0D8:
/* 0044F0D8 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0044F0DC 02002025 */  move  $a0, $s0
/* 0044F0E0 0320F809 */  jalr  $t9
/* 0044F0E4 00000000 */   nop   
/* 0044F0E8 8FBC0038 */  lw    $gp, 0x38($sp)
.L0044F0EC:
/* 0044F0EC 12200004 */  beqz  $s1, .L0044F100
/* 0044F0F0 00000000 */   nop   
/* 0044F0F4 8E190018 */  lw    $t9, 0x18($s0)
/* 0044F0F8 17200020 */  bnez  $t9, .L0044F17C
/* 0044F0FC 00000000 */   nop   
.L0044F100:
/* 0044F100 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0044F104 24040010 */  li    $a0, 16
/* 0044F108 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0044F10C 0320F809 */  jalr  $t9
/* 0044F110 00000000 */   nop   
/* 0044F114 AE020018 */  sw    $v0, 0x18($s0)
/* 0044F118 8E480018 */  lw    $t0, 0x18($s2)
/* 0044F11C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0044F120 8D090000 */  lw    $t1, ($t0)
/* 0044F124 AC490000 */  sw    $t1, ($v0)
/* 0044F128 8E030018 */  lw    $v1, 0x18($s0)
/* 0044F12C 8C640000 */  lw    $a0, ($v1)
/* 0044F130 50800004 */  beql  $a0, $zero, .L0044F144
/* 0044F134 8E0A0010 */   lw    $t2, 0x10($s0)
/* 0044F138 10000003 */  b     .L0044F148
/* 0044F13C AC830004 */   sw    $v1, 4($a0)
/* 0044F140 8E0A0010 */  lw    $t2, 0x10($s0)
.L0044F144:
/* 0044F144 AD430024 */  sw    $v1, 0x24($t2)
.L0044F148:
/* 0044F148 8E4B0018 */  lw    $t3, 0x18($s2)
/* 0044F14C 8E0C0018 */  lw    $t4, 0x18($s0)
/* 0044F150 240F0002 */  li    $t7, 2
/* 0044F154 AD8B0004 */  sw    $t3, 4($t4)
/* 0044F158 8E0D0018 */  lw    $t5, 0x18($s0)
/* 0044F15C 8E4E0018 */  lw    $t6, 0x18($s2)
/* 0044F160 ADCD0000 */  sw    $t5, ($t6)
/* 0044F164 8E180018 */  lw    $t8, 0x18($s0)
/* 0044F168 A30F0009 */  sb    $t7, 9($t8)
/* 0044F16C 8E190018 */  lw    $t9, 0x18($s0)
/* 0044F170 AF30000C */  sw    $s0, 0xc($t9)
/* 0044F174 8E080018 */  lw    $t0, 0x18($s0)
/* 0044F178 A1000008 */  sb    $zero, 8($t0)
.L0044F17C:
/* 0044F17C 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0044F180 02402025 */  move  $a0, $s2
/* 0044F184 0320F809 */  jalr  $t9
/* 0044F188 00000000 */   nop   
/* 0044F18C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0044F190 02001825 */  move  $v1, $s0
.L0044F194:
/* 0044F194 00601025 */  move  $v0, $v1
.L0044F198:
/* 0044F198 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0044F19C 8FB00024 */  lw    $s0, 0x24($sp)
/* 0044F1A0 8FB10028 */  lw    $s1, 0x28($sp)
/* 0044F1A4 8FB2002C */  lw    $s2, 0x2c($sp)
/* 0044F1A8 8FB30030 */  lw    $s3, 0x30($sp)
/* 0044F1AC 8FB40034 */  lw    $s4, 0x34($sp)
/* 0044F1B0 03E00008 */  jr    $ra
/* 0044F1B4 27BD0078 */   addiu $sp, $sp, 0x78
    .type ilodfold, @function
    .size ilodfold, .-ilodfold
    .end ilodfold
)"");

/* 
004175BC copypropagate
00452DAC constarith
*/
void istrfold(struct Statement *stmt) {
    struct VariableInner var;
    struct Expression *sp48;
    int increment;
    struct Expression *expr;
    struct Expression *temp_v0_2;

    expr = stmt->expr;
    var = expr->data.islda_isilda.var_data;
    var.addr = expr->data.islda_isilda.addr + stmt->u.store.u.istr.s.word;
    if (insertvar(var, stmt->u.store.size, stmt->u.store.u.istr.dtype, &curproc->vartree, 0, 0, 0)->unk1 == 0) {
        sp48 = appendchain(isvarhash(var));
        if (outofmem) {
            return;
        }
        sp48->type = isvar;
        sp48->datatype = stmt->u.store.u.istr.dtype;
        sp48->unk2 = !stmt->u.store.unk1F;
        sp48->unk3 = 0;
        sp48->unk4 = 0;
        sp48->unk5 = 0;
        sp48->count = 0;
        sp48->graphnode = stmt->graphnode;
        sp48->var_access_list = NULL;

        sp48->data.isvar_issvar.size = stmt->u.store.size;
        sp48->data.isvar_issvar.unk21 = false;
        sp48->data.isvar_issvar.unk22 = false;
        sp48->data.isvar_issvar.is_volatile = false;
        sp48->data.isvar_issvar.unk24 = NULL;
        sp48->data.isvar_issvar.var_data = var;
        sp48->data.isvar_issvar.var_data.level = blktolev(var.blockno);
        sp48->data.isvar_issvar.unk30 = NULL;
        sp48->data.isvar_issvar.assigned_value = stmt->u.store.expr;
        sp48->data.isvar_issvar.assignment = stmt;
        sp48->data.isvar_issvar.unk3C = 0;

        stmt->opc = Ustr;
        stmt->unk1 = false;
        stmt->expr = sp48;
        if (checkincre(sp48->data.isvar_issvar.assigned_value, sp48, &increment) && increment == 1) {
            stmt->unk1 = 1;
        }
        stmt->unk2 = 0;
        stmt->unk3 = 0;
        stmt->u.store.var_access_list_item->unk8 = 0;
        stmt->u.store.u.str.unk2C = 0;
        stmt->u.store.u.str.unk30 = 0;

    }
}

/* 
0041550C func_0041550C
00451764 func_00451764
*/
void cvtfold(struct Expression *cvt) {
    cvt->type = isconst;
    cvt->var_access_list = NULL;
    cvt->ichain = NULL;
    cvt->data.isconst = cvt->data.isop.op1->data.isconst;
}

__asm__(R""(
.set noat
.set noreorder

glabel unaryfold
    .ent unaryfold
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 00451764 func_00451764
/* 0044F3C0 3C1C0FBD */  .cpload $t9
/* 0044F3C4 279CAED0 */  
/* 0044F3C8 0399E021 */  
/* 0044F3CC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0044F3D0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044F3D4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044F3D8 AFB00014 */  sw    $s0, 0x14($sp)
/* 0044F3DC 90830000 */  lbu   $v1, ($a0)
/* 0044F3E0 24080001 */  li    $t0, 1
/* 0044F3E4 00808025 */  move  $s0, $a0
/* 0044F3E8 55030005 */  bnel  $t0, $v1, .L0044F400
/* 0044F3EC 8E050024 */   lw    $a1, 0x24($s0)
/* 0044F3F0 8C850024 */  lw    $a1, 0x24($a0)
/* 0044F3F4 10000003 */  b     .L0044F404
/* 0044F3F8 8CA40020 */   lw    $a0, 0x20($a1)
/* 0044F3FC 8E050024 */  lw    $a1, 0x24($s0)
.L0044F400:
/* 0044F400 8CA40020 */  lw    $a0, 0x20($a1)
.L0044F404:
/* 0044F404 1000006A */  b     .L0044F5B0
/* 0044F408 92020020 */   lbu   $v0, 0x20($s0)
.L0044F40C:
/* 0044F40C 920E0001 */  lbu   $t6, 1($s0)
/* 0044F410 3C010600 */  lui   $at, 0x600
/* 0044F414 00803025 */  move  $a2, $a0
/* 0044F418 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0044F41C 000FC023 */  negu  $t8, $t7
/* 0044F420 0301C824 */  and   $t9, $t8, $at
/* 0044F424 01D94804 */  sllv  $t1, $t9, $t6
/* 0044F428 05210006 */  bgez  $t1, .L0044F444
/* 0044F42C 00000000 */   nop   
/* 0044F430 04810004 */  bgez  $a0, .L0044F444
/* 0044F434 00803025 */   move  $a2, $a0
/* 0044F438 00043023 */  negu  $a2, $a0
/* 0044F43C 10000001 */  b     .L0044F444
/* 0044F440 00000000 */   nop   
.L0044F444:
/* 0044F444 1000009D */  b     .L0044F6BC
/* 0044F448 90A30000 */   lbu   $v1, ($a1)
.L0044F44C:
/* 0044F44C 308A0001 */  andi  $t2, $a0, 1
/* 0044F450 11400003 */  beqz  $t2, .L0044F460
/* 0044F454 00003025 */   move  $a2, $zero
/* 0044F458 10000001 */  b     .L0044F460
/* 0044F45C 24060001 */   li    $a2, 1
.L0044F460:
/* 0044F460 10000096 */  b     .L0044F6BC
/* 0044F464 90A30000 */   lbu   $v1, ($a1)
.L0044F468:
/* 0044F468 00840019 */  multu $a0, $a0
/* 0044F46C 90A30000 */  lbu   $v1, ($a1)
/* 0044F470 00003012 */  mflo  $a2
/* 0044F474 10000091 */  b     .L0044F6BC
/* 0044F478 00000000 */   nop   
.L0044F47C:
/* 0044F47C 00043023 */  negu  $a2, $a0
/* 0044F480 1000008E */  b     .L0044F6BC
/* 0044F484 90A30000 */   lbu   $v1, ($a1)
.L0044F488:
/* 0044F488 00803027 */  not   $a2, $a0
/* 0044F48C 1000008B */  b     .L0044F6BC
/* 0044F490 90A30000 */   lbu   $v1, ($a1)
.L0044F494:
/* 0044F494 15030003 */  bne   $t0, $v1, .L0044F4A4
/* 0044F498 00000000 */   nop   
/* 0044F49C 10000005 */  b     .L0044F4B4
/* 0044F4A0 00003025 */   move  $a2, $zero
.L0044F4A4:
/* 0044F4A4 14800003 */  bnez  $a0, .L0044F4B4
/* 0044F4A8 00003025 */   move  $a2, $zero
/* 0044F4AC 10000001 */  b     .L0044F4B4
/* 0044F4B0 24060001 */   li    $a2, 1
.L0044F4B4:
/* 0044F4B4 10000081 */  b     .L0044F6BC
/* 0044F4B8 90A30000 */   lbu   $v1, ($a1)
.L0044F4BC:
/* 0044F4BC 1000007F */  b     .L0044F6BC
/* 0044F4C0 90A30000 */   lbu   $v1, ($a1)
.L0044F4C4:
/* 0044F4C4 90A30000 */  lbu   $v1, ($a1)
/* 0044F4C8 55030005 */  bnel  $t0, $v1, .L0044F4E0
/* 0044F4CC 8E0C002C */   lw    $t4, 0x2c($s0)
/* 0044F4D0 8E0B002C */  lw    $t3, 0x2c($s0)
/* 0044F4D4 10000079 */  b     .L0044F6BC
/* 0044F4D8 008B3023 */   subu  $a2, $a0, $t3
/* 0044F4DC 8E0C002C */  lw    $t4, 0x2c($s0)
.L0044F4E0:
/* 0044F4E0 10000076 */  b     .L0044F6BC
/* 0044F4E4 008C3023 */   subu  $a2, $a0, $t4
/* 0044F4E8 90A30000 */  lbu   $v1, ($a1)
.L0044F4EC:
/* 0044F4EC 55030005 */  bnel  $t0, $v1, .L0044F504
/* 0044F4F0 8E0F002C */   lw    $t7, 0x2c($s0)
/* 0044F4F4 8E0D002C */  lw    $t5, 0x2c($s0)
/* 0044F4F8 10000070 */  b     .L0044F6BC
/* 0044F4FC 008D3021 */   addu  $a2, $a0, $t5
/* 0044F500 8E0F002C */  lw    $t7, 0x2c($s0)
.L0044F504:
/* 0044F504 1000006D */  b     .L0044F6BC
/* 0044F508 008F3021 */   addu  $a2, $a0, $t7
.L0044F50C:
/* 0044F50C 8E18002C */  lw    $t8, 0x2c($s0)
/* 0044F510 00803025 */  move  $a2, $a0
/* 0044F514 0304082A */  slt   $at, $t8, $a0
/* 0044F518 10200009 */  beqz  $at, .L0044F540
/* 0044F51C 00000000 */   nop   
/* 0044F520 8F998614 */  lw    $t9, %call16(boundswarning)($gp)
/* 0044F524 AFA40024 */  sw    $a0, 0x24($sp)
/* 0044F528 0320F809 */  jalr  $t9
/* 0044F52C 00000000 */   nop   
/* 0044F530 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044F534 8FA60024 */  lw    $a2, 0x24($sp)
/* 0044F538 24080001 */  li    $t0, 1
/* 0044F53C 8E050024 */  lw    $a1, 0x24($s0)
.L0044F540:
/* 0044F540 1000005E */  b     .L0044F6BC
/* 0044F544 90A30000 */   lbu   $v1, ($a1)
.L0044F548:
/* 0044F548 8E19002C */  lw    $t9, 0x2c($s0)
/* 0044F54C 00803025 */  move  $a2, $a0
/* 0044F550 0099082A */  slt   $at, $a0, $t9
/* 0044F554 10200009 */  beqz  $at, .L0044F57C
/* 0044F558 00000000 */   nop   
/* 0044F55C 8F998614 */  lw    $t9, %call16(boundswarning)($gp)
/* 0044F560 AFA40024 */  sw    $a0, 0x24($sp)
/* 0044F564 0320F809 */  jalr  $t9
/* 0044F568 00000000 */   nop   
/* 0044F56C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044F570 8FA60024 */  lw    $a2, 0x24($sp)
/* 0044F574 24080001 */  li    $t0, 1
/* 0044F578 8E050024 */  lw    $a1, 0x24($s0)
.L0044F57C:
/* 0044F57C 1000004F */  b     .L0044F6BC
/* 0044F580 90A30000 */   lbu   $v1, ($a1)
.L0044F584:
/* 0044F584 8F9986A8 */  lw    $t9, %call16(cutbits)($gp)
/* 0044F588 8E05002C */  lw    $a1, 0x2c($s0)
/* 0044F58C 92060001 */  lbu   $a2, 1($s0)
/* 0044F590 0320F809 */  jalr  $t9
/* 0044F594 00000000 */   nop   
/* 0044F598 8E050024 */  lw    $a1, 0x24($s0)
/* 0044F59C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044F5A0 24080001 */  li    $t0, 1
/* 0044F5A4 00403025 */  move  $a2, $v0
/* 0044F5A8 10000044 */  b     .L0044F6BC
/* 0044F5AC 90A30000 */   lbu   $v1, ($a1)
.L0044F5B0:
/* 0044F5B0 2C410038 */  sltiu $at, $v0, 0x38
/* 0044F5B4 14200017 */  bnez  $at, .L0044F614
/* 0044F5B8 2C410063 */   sltiu $at, $v0, 0x63
/* 0044F5BC 14200008 */  bnez  $at, .L0044F5E0
/* 0044F5C0 24010072 */   li    $at, 114
/* 0044F5C4 1041FFBD */  beq   $v0, $at, .L0044F4BC
/* 0044F5C8 8FA60024 */   lw    $a2, 0x24($sp)
/* 0044F5CC 24010076 */  li    $at, 118
/* 0044F5D0 1041FFA5 */  beq   $v0, $at, .L0044F468
/* 0044F5D4 00000000 */   nop   
/* 0044F5D8 1000002C */  b     .L0044F68C
/* 0044F5DC 00000000 */   nop   
.L0044F5E0:
/* 0044F5E0 24010050 */  li    $at, 80
/* 0044F5E4 1041FFAB */  beq   $v0, $at, .L0044F494
/* 0044F5E8 244EFFA2 */   addiu $t6, $v0, -0x5e
/* 0044F5EC 2DC10005 */  sltiu $at, $t6, 5
/* 0044F5F0 10200026 */  beqz  $at, .L0044F68C
/* 0044F5F4 00000000 */   nop   
/* 0044F5F8 8F818044 */  lw    $at, %got(jtbl_1000CCB4)($gp)
/* 0044F5FC 000E7080 */  sll   $t6, $t6, 2
/* 0044F600 002E0821 */  addu  $at, $at, $t6
/* 0044F604 8C2ECCB4 */  lw    $t6, %lo(jtbl_1000CCB4)($at)
/* 0044F608 01DC7021 */  addu  $t6, $t6, $gp
/* 0044F60C 01C00008 */  jr    $t6
/* 0044F610 00000000 */   nop   
.L0044F614:
/* 0044F614 2C41000E */  sltiu $at, $v0, 0xe
/* 0044F618 1420000D */  bnez  $at, .L0044F650
/* 0044F61C 2C41001B */   sltiu $at, $v0, 0x1b
/* 0044F620 10200017 */  beqz  $at, .L0044F680
/* 0044F624 2449FFE7 */   addiu $t1, $v0, -0x19
/* 0044F628 2D210002 */  sltiu $at, $t1, 2
/* 0044F62C 10200017 */  beqz  $at, .L0044F68C
/* 0044F630 00000000 */   nop   
/* 0044F634 8F818044 */  lw    $at, %got(jtbl_1000CCAC)($gp)
/* 0044F638 00094880 */  sll   $t1, $t1, 2
/* 0044F63C 00290821 */  addu  $at, $at, $t1
/* 0044F640 8C29CCAC */  lw    $t1, %lo(jtbl_1000CCAC)($at)
/* 0044F644 013C4821 */  addu  $t1, $t1, $gp
/* 0044F648 01200008 */  jr    $t1
/* 0044F64C 00000000 */   nop   
.L0044F650:
/* 0044F650 1040FF6E */  beqz  $v0, .L0044F40C
/* 0044F654 244AFFF4 */   addiu $t2, $v0, -0xc
/* 0044F658 2D410002 */  sltiu $at, $t2, 2
/* 0044F65C 1020000B */  beqz  $at, .L0044F68C
/* 0044F660 00000000 */   nop   
/* 0044F664 8F818044 */  lw    $at, %got(jtbl_1000CCA4)($gp)
/* 0044F668 000A5080 */  sll   $t2, $t2, 2
/* 0044F66C 002A0821 */  addu  $at, $at, $t2
/* 0044F670 8C2ACCA4 */  lw    $t2, %lo(jtbl_1000CCA4)($at)
/* 0044F674 015C5021 */  addu  $t2, $t2, $gp
/* 0044F678 01400008 */  jr    $t2
/* 0044F67C 00000000 */   nop   
.L0044F680:
/* 0044F680 24010037 */  li    $at, 55
/* 0044F684 5041FF99 */  beql  $v0, $at, .L0044F4EC
/* 0044F688 90A30000 */   lbu   $v1, ($a1)
.L0044F68C:
/* 0044F68C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044F690 8F868044 */  lw    $a2, %got(RO_1000CC98)($gp)
/* 0044F694 01002025 */  move  $a0, $t0
/* 0044F698 240501D6 */  li    $a1, 470
/* 0044F69C 24070009 */  li    $a3, 9
/* 0044F6A0 0320F809 */  jalr  $t9
/* 0044F6A4 24C6CC98 */   addiu $a2, %lo(RO_1000CC98) # addiu $a2, $a2, -0x3368
/* 0044F6A8 8E050024 */  lw    $a1, 0x24($s0)
/* 0044F6AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044F6B0 24080001 */  li    $t0, 1
/* 0044F6B4 8FA60024 */  lw    $a2, 0x24($sp)
/* 0044F6B8 90A30000 */  lbu   $v1, ($a1)
.L0044F6BC:
/* 0044F6BC 1503000E */  bne   $t0, $v1, .L0044F6F8
/* 0044F6C0 240C0002 */   li    $t4, 2
/* 0044F6C4 920B0020 */  lbu   $t3, 0x20($s0)
/* 0044F6C8 24010050 */  li    $at, 80
/* 0044F6CC 5161000B */  beql  $t3, $at, .L0044F6FC
/* 0044F6D0 A20C0000 */   sb    $t4, ($s0)
/* 0044F6D4 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 0044F6D8 02002025 */  move  $a0, $s0
/* 0044F6DC AFA60024 */  sw    $a2, 0x24($sp)
/* 0044F6E0 0320F809 */  jalr  $t9
/* 0044F6E4 00000000 */   nop   
/* 0044F6E8 8FA60024 */  lw    $a2, 0x24($sp)
/* 0044F6EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044F6F0 1000000C */  b     .L0044F724
/* 0044F6F4 AE060020 */   sw    $a2, 0x20($s0)
.L0044F6F8:
/* 0044F6F8 A20C0000 */  sb    $t4, ($s0)
.L0044F6FC:
/* 0044F6FC 90AD0000 */  lbu   $t5, ($a1)
/* 0044F700 240F0004 */  li    $t7, 4
/* 0044F704 550D0004 */  bnel  $t0, $t5, .L0044F718
/* 0044F708 8CB80028 */   lw    $t8, 0x28($a1)
/* 0044F70C 10000003 */  b     .L0044F71C
/* 0044F710 AE0F0028 */   sw    $t7, 0x28($s0)
/* 0044F714 8CB80028 */  lw    $t8, 0x28($a1)
.L0044F718:
/* 0044F718 AE180028 */  sw    $t8, 0x28($s0)
.L0044F71C:
/* 0044F71C AE060020 */  sw    $a2, 0x20($s0)
/* 0044F720 AE000018 */  sw    $zero, 0x18($s0)
.L0044F724:
/* 0044F724 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044F728 AE000014 */  sw    $zero, 0x14($s0)
/* 0044F72C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0044F730 03E00008 */  jr    $ra
/* 0044F734 27BD0028 */   addiu $sp, $sp, 0x28
    .type unaryfold, @function
    .size unaryfold, .-unaryfold
    .end unaryfold

glabel linearize
    .ent linearize
    # 00451764 func_00451764
/* 0044F738 3C1C0FBD */  .cpload $t9
/* 0044F73C 279CAB58 */  
/* 0044F740 0399E021 */  
/* 0044F744 8F8E8AA0 */  lw     $t6, %got(doassoc)($gp)
/* 0044F748 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0044F74C AFB00014 */  sw    $s0, 0x14($sp)
/* 0044F750 91CE0000 */  lbu   $t6, ($t6)
/* 0044F754 00808025 */  move  $s0, $a0
/* 0044F758 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044F75C 15C00009 */  bnez  $t6, .L0044F784
/* 0044F760 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0044F764 908F0001 */  lbu   $t7, 1($a0)
/* 0044F768 3C01000C */  lui   $at, 0xc
/* 0044F76C 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0044F770 0018C823 */  negu  $t9, $t8
/* 0044F774 03214024 */  and   $t0, $t9, $at
/* 0044F778 01E84804 */  sllv  $t1, $t0, $t7
/* 0044F77C 05220183 */  bltzl $t1, .L0044FD8C
/* 0044F780 8FBF001C */   lw    $ra, 0x1c($sp)
.L0044F784:
/* 0044F784 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 0044F788 914A0000 */  lbu   $t2, ($t2)
/* 0044F78C 5540017F */  bnezl $t2, .L0044FD8C
/* 0044F790 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0044F794 8E040028 */  lw    $a0, 0x28($s0)
/* 0044F798 24010004 */  li    $at, 4
/* 0044F79C 00001825 */  move  $v1, $zero
/* 0044F7A0 908B0000 */  lbu   $t3, ($a0)
/* 0044F7A4 2407005B */  li    $a3, 91
/* 0044F7A8 15610035 */  bne   $t3, $at, .L0044F880
/* 0044F7AC 00000000 */   nop   
/* 0044F7B0 920C003E */  lbu   $t4, 0x3e($s0)
/* 0044F7B4 15800032 */  bnez  $t4, .L0044F880
/* 0044F7B8 00000000 */   nop   
/* 0044F7BC 92050020 */  lbu   $a1, 0x20($s0)
/* 0044F7C0 90830020 */  lbu   $v1, 0x20($a0)
/* 0044F7C4 00A31026 */  xor   $v0, $a1, $v1
/* 0044F7C8 2C420001 */  sltiu $v0, $v0, 1
/* 0044F7CC 14400029 */  bnez  $v0, .L0044F874
/* 0044F7D0 2C6D0080 */   sltiu $t5, $v1, 0x80
/* 0044F7D4 11A00009 */  beqz  $t5, .L0044F7FC
/* 0044F7D8 2CAB0080 */   sltiu $t3, $a1, 0x80
/* 0044F7DC 8F998044 */  lw    $t9, %got(D_10010B34)($gp)
/* 0044F7E0 00037143 */  sra   $t6, $v1, 5
/* 0044F7E4 000EC080 */  sll   $t8, $t6, 2
/* 0044F7E8 27390B34 */  addiu $t9, %lo(D_10010B34) # addiu $t9, $t9, 0xb34
/* 0044F7EC 03384021 */  addu  $t0, $t9, $t8
/* 0044F7F0 8D0F0000 */  lw    $t7, ($t0)
/* 0044F7F4 006F4804 */  sllv  $t1, $t7, $v1
/* 0044F7F8 292D0000 */  slti  $t5, $t1, 0
.L0044F7FC:
/* 0044F7FC 11A0000C */  beqz  $t5, .L0044F830
/* 0044F800 01A01025 */   move  $v0, $t5
/* 0044F804 5160000A */  beql  $t3, $zero, .L0044F830
/* 0044F808 01601025 */   move  $v0, $t3
/* 0044F80C 8F998044 */  lw    $t9, %got(D_10010B24)($gp)
/* 0044F810 00056143 */  sra   $t4, $a1, 5
/* 0044F814 000C7080 */  sll   $t6, $t4, 2
/* 0044F818 27390B24 */  addiu $t9, %lo(D_10010B24) # addiu $t9, $t9, 0xb24
/* 0044F81C 032EC021 */  addu  $t8, $t9, $t6
/* 0044F820 8F080000 */  lw    $t0, ($t8)
/* 0044F824 00A87804 */  sllv  $t7, $t0, $a1
/* 0044F828 29EB0000 */  slti  $t3, $t7, 0
/* 0044F82C 01601025 */  move  $v0, $t3
.L0044F830:
/* 0044F830 14400010 */  bnez  $v0, .L0044F874
/* 0044F834 2407005B */   li    $a3, 91
/* 0044F838 00E31026 */  xor   $v0, $a3, $v1
/* 0044F83C 2C420001 */  sltiu $v0, $v0, 1
/* 0044F840 1040000C */  beqz  $v0, .L0044F874
/* 0044F844 2CAA0060 */   sltiu $t2, $a1, 0x60
/* 0044F848 5140000A */  beql  $t2, $zero, .L0044F874
/* 0044F84C 01401025 */   move  $v0, $t2
/* 0044F850 8F998044 */  lw    $t9, %got(D_10010B18)($gp)
/* 0044F854 00056943 */  sra   $t5, $a1, 5
/* 0044F858 000D6080 */  sll   $t4, $t5, 2
/* 0044F85C 27390B18 */  addiu $t9, %lo(D_10010B18) # addiu $t9, $t9, 0xb18
/* 0044F860 032C7021 */  addu  $t6, $t9, $t4
/* 0044F864 8DD80000 */  lw    $t8, ($t6)
/* 0044F868 00B84004 */  sllv  $t0, $t8, $a1
/* 0044F86C 290A0000 */  slti  $t2, $t0, 0
/* 0044F870 01401025 */  move  $v0, $t2
.L0044F874:
/* 0044F874 2407005B */  li    $a3, 91
/* 0044F878 10000001 */  b     .L0044F880
/* 0044F87C 304300FF */   andi  $v1, $v0, 0xff
.L0044F880:
/* 0044F880 1060000E */  beqz  $v1, .L0044F8BC
/* 0044F884 00000000 */   nop   
/* 0044F888 90890020 */  lbu   $t1, 0x20($a0)
/* 0044F88C 2406001D */  li    $a2, 29
/* 0044F890 14C9000A */  bne   $a2, $t1, .L0044F8BC
/* 0044F894 00000000 */   nop   
/* 0044F898 920B0001 */  lbu   $t3, 1($s0)
/* 0044F89C 3C010780 */  lui   $at, 0x780
/* 0044F8A0 2D6D0020 */  sltiu $t5, $t3, 0x20
/* 0044F8A4 000DC823 */  negu  $t9, $t5
/* 0044F8A8 03216024 */  and   $t4, $t9, $at
/* 0044F8AC 016C7004 */  sllv  $t6, $t4, $t3
/* 0044F8B0 05C10002 */  bgez  $t6, .L0044F8BC
/* 0044F8B4 00000000 */   nop   
/* 0044F8B8 00001825 */  move  $v1, $zero
.L0044F8BC:
/* 0044F8BC 10600132 */  beqz  $v1, .L0044FD88
/* 0044F8C0 2406001D */   li    $a2, 29
/* 0044F8C4 94980006 */  lhu   $t8, 6($a0)
/* 0044F8C8 24050001 */  li    $a1, 1
/* 0044F8CC 54B8012F */  bnel  $a1, $t8, .L0044FD8C
/* 0044F8D0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0044F8D4 90880020 */  lbu   $t0, 0x20($a0)
/* 0044F8D8 00801025 */  move  $v0, $a0
/* 0044F8DC 2D0F0040 */  sltiu $t7, $t0, 0x40
/* 0044F8E0 11E00009 */  beqz  $t7, .L0044F908
/* 0044F8E4 00000000 */   nop   
/* 0044F8E8 8F8D8044 */  lw    $t5, %got(D_10010B10)($gp)
/* 0044F8EC 00085143 */  sra   $t2, $t0, 5
/* 0044F8F0 000A4880 */  sll   $t1, $t2, 2
/* 0044F8F4 25AD0B10 */  addiu $t5, %lo(D_10010B10) # addiu $t5, $t5, 0xb10
/* 0044F8F8 01A9C821 */  addu  $t9, $t5, $t1
/* 0044F8FC 8F2C0000 */  lw    $t4, ($t9)
/* 0044F900 010C5804 */  sllv  $t3, $t4, $t0
/* 0044F904 296F0000 */  slti  $t7, $t3, 0
.L0044F908:
/* 0044F908 55E00004 */  bnezl $t7, .L0044F91C
/* 0044F90C 8C4A0024 */   lw    $t2, 0x24($v0)
/* 0044F910 8C580028 */  lw    $t8, 0x28($v0)
/* 0044F914 AE180028 */  sw    $t8, 0x28($s0)
/* 0044F918 8C4A0024 */  lw    $t2, 0x24($v0)
.L0044F91C:
/* 0044F91C AC4A0028 */  sw    $t2, 0x28($v0)
/* 0044F920 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0044F924 AC4D0024 */  sw    $t5, 0x24($v0)
/* 0044F928 AE020024 */  sw    $v0, 0x24($s0)
/* 0044F92C A0400005 */  sb    $zero, 5($v0)
/* 0044F930 100000E6 */  b     .L0044FCCC
/* 0044F934 92030020 */   lbu   $v1, 0x20($s0)
/* 0044F938 8E030024 */  lw    $v1, 0x24($s0)
.L0044F93C:
/* 0044F93C 10000028 */  b     .L0044F9E0
/* 0044F940 90620020 */   lbu   $v0, 0x20($v1)
.L0044F944:
/* 0044F944 10000110 */  b     .L0044FD88
/* 0044F948 A2050020 */   sb    $a1, 0x20($s0)
.L0044F94C:
/* 0044F94C 1000010E */  b     .L0044FD88
/* 0044F950 A0640020 */   sb    $a0, 0x20($v1)
.L0044F954:
/* 0044F954 A0640020 */  sb    $a0, 0x20($v1)
/* 0044F958 8E190024 */  lw    $t9, 0x24($s0)
/* 0044F95C A2090020 */  sb    $t1, 0x20($s0)
/* 0044F960 AE000028 */  sw    $zero, 0x28($s0)
/* 0044F964 8F2C002C */  lw    $t4, 0x2c($t9)
/* 0044F968 10000107 */  b     .L0044FD88
/* 0044F96C AE0C002C */   sw    $t4, 0x2c($s0)
/* 0044F970 A0640020 */  sb    $a0, 0x20($v1)
.L0044F974:
/* 0044F974 8E080024 */  lw    $t0, 0x24($s0)
/* 0044F978 A2070020 */  sb    $a3, 0x20($s0)
/* 0044F97C AE000028 */  sw    $zero, 0x28($s0)
/* 0044F980 8D0B002C */  lw    $t3, 0x2c($t0)
/* 0044F984 10000100 */  b     .L0044FD88
/* 0044F988 AE0B002C */   sw    $t3, 0x2c($s0)
/* 0044F98C A2060020 */  sb    $a2, 0x20($s0)
.L0044F990:
/* 0044F990 906E0001 */  lbu   $t6, 1($v1)
/* 0044F994 A20E0001 */  sb    $t6, 1($s0)
/* 0044F998 906F0023 */  lbu   $t7, 0x23($v1)
/* 0044F99C A20F0023 */  sb    $t7, 0x23($s0)
/* 0044F9A0 8C78002C */  lw    $t8, 0x2c($v1)
/* 0044F9A4 00185023 */  negu  $t2, $t8
/* 0044F9A8 AE0A002C */  sw    $t2, 0x2c($s0)
/* 0044F9AC A0640020 */  sb    $a0, 0x20($v1)
/* 0044F9B0 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0044F9B4 100000F4 */  b     .L0044FD88
/* 0044F9B8 A1A00001 */   sb    $zero, 1($t5)
.L0044F9BC:
/* 0044F9BC 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044F9C0 8F868044 */  lw    $a2, %got(RO_1000CCE3)($gp)
/* 0044F9C4 24040001 */  li    $a0, 1
/* 0044F9C8 24050228 */  li    $a1, 552
/* 0044F9CC 24070009 */  li    $a3, 9
/* 0044F9D0 0320F809 */  jalr  $t9
/* 0044F9D4 24C6CCE3 */   addiu $a2, %lo(RO_1000CCE3) # addiu $a2, $a2, -0x331d
/* 0044F9D8 100000EB */  b     .L0044FD88
/* 0044F9DC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0044F9E0:
/* 0044F9E0 2C410038 */  sltiu $at, $v0, 0x38
/* 0044F9E4 14200007 */  bnez  $at, .L0044FA04
/* 0044F9E8 24060041 */   li    $a2, 65
/* 0044F9EC 5046FFE8 */  beql  $v0, $a2, .L0044F990
/* 0044F9F0 A2060020 */   sb    $a2, 0x20($s0)
/* 0044F9F4 1044FFD3 */  beq   $v0, $a0, .L0044F944
/* 0044F9F8 00000000 */   nop   
/* 0044F9FC 1000FFEF */  b     .L0044F9BC
/* 0044FA00 00000000 */   nop   
.L0044FA04:
/* 0044FA04 1045FFD1 */  beq   $v0, $a1, .L0044F94C
/* 0044FA08 2407001A */   li    $a3, 26
/* 0044FA0C 1047FFD1 */  beq   $v0, $a3, .L0044F954
/* 0044FA10 24090037 */   li    $t1, 55
/* 0044FA14 24010037 */  li    $at, 55
/* 0044FA18 5041FFD6 */  beql  $v0, $at, .L0044F974
/* 0044FA1C A0640020 */   sb    $a0, 0x20($v1)
/* 0044FA20 1000FFE6 */  b     .L0044F9BC
/* 0044FA24 00000000 */   nop   
.L0044FA28:
/* 0044FA28 8E030024 */  lw    $v1, 0x24($s0)
/* 0044FA2C 10000026 */  b     .L0044FAC8
/* 0044FA30 90620020 */   lbu   $v0, 0x20($v1)
/* 0044FA34 A2040020 */  sb    $a0, 0x20($s0)
.L0044FA38:
/* 0044FA38 100000D3 */  b     .L0044FD88
/* 0044FA3C A0650020 */   sb    $a1, 0x20($v1)
.L0044FA40:
/* 0044FA40 A0650020 */  sb    $a1, 0x20($v1)
/* 0044FA44 8E090024 */  lw    $t1, 0x24($s0)
/* 0044FA48 A2070020 */  sb    $a3, 0x20($s0)
/* 0044FA4C AE000028 */  sw    $zero, 0x28($s0)
/* 0044FA50 8D39002C */  lw    $t9, 0x2c($t1)
/* 0044FA54 100000CC */  b     .L0044FD88
/* 0044FA58 AE19002C */   sw    $t9, 0x2c($s0)
.L0044FA5C:
/* 0044FA5C A0650020 */  sb    $a1, 0x20($v1)
/* 0044FA60 8E080024 */  lw    $t0, 0x24($s0)
/* 0044FA64 A20C0020 */  sb    $t4, 0x20($s0)
/* 0044FA68 AE000028 */  sw    $zero, 0x28($s0)
/* 0044FA6C 8D0B002C */  lw    $t3, 0x2c($t0)
/* 0044FA70 100000C5 */  b     .L0044FD88
/* 0044FA74 AE0B002C */   sw    $t3, 0x2c($s0)
.L0044FA78:
/* 0044FA78 A20E0020 */  sb    $t6, 0x20($s0)
/* 0044FA7C 906F0001 */  lbu   $t7, 1($v1)
/* 0044FA80 A20F0001 */  sb    $t7, 1($s0)
/* 0044FA84 90780023 */  lbu   $t8, 0x23($v1)
/* 0044FA88 A2180023 */  sb    $t8, 0x23($s0)
/* 0044FA8C 8C6A002C */  lw    $t2, 0x2c($v1)
/* 0044FA90 AE0A002C */  sw    $t2, 0x2c($s0)
/* 0044FA94 A0650020 */  sb    $a1, 0x20($v1)
/* 0044FA98 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0044FA9C 100000BA */  b     .L0044FD88
/* 0044FAA0 A1A00001 */   sb    $zero, 1($t5)
.L0044FAA4:
/* 0044FAA4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044FAA8 8F868044 */  lw    $a2, %got(RO_1000CCDA)($gp)
/* 0044FAAC 24040001 */  li    $a0, 1
/* 0044FAB0 24050241 */  li    $a1, 577
/* 0044FAB4 24070009 */  li    $a3, 9
/* 0044FAB8 0320F809 */  jalr  $t9
/* 0044FABC 24C6CCDA */   addiu $a2, %lo(RO_1000CCDA) # addiu $a2, $a2, -0x3326
/* 0044FAC0 100000B1 */  b     .L0044FD88
/* 0044FAC4 8FBC0018 */   lw    $gp, 0x18($sp)
.L0044FAC8:
/* 0044FAC8 2C410038 */  sltiu $at, $v0, 0x38
/* 0044FACC 14200008 */  bnez  $at, .L0044FAF0
/* 0044FAD0 24010041 */   li    $at, 65
/* 0044FAD4 1041FFE8 */  beq   $v0, $at, .L0044FA78
/* 0044FAD8 240E0041 */   li    $t6, 65
/* 0044FADC 2404007D */  li    $a0, 125
/* 0044FAE0 5044FFD5 */  beql  $v0, $a0, .L0044FA38
/* 0044FAE4 A2040020 */   sb    $a0, 0x20($s0)
/* 0044FAE8 1000FFEE */  b     .L0044FAA4
/* 0044FAEC 00000000 */   nop   
.L0044FAF0:
/* 0044FAF0 104500A5 */  beq   $v0, $a1, .L0044FD88
/* 0044FAF4 2407001A */   li    $a3, 26
/* 0044FAF8 1047FFD1 */  beq   $v0, $a3, .L0044FA40
/* 0044FAFC 24010037 */   li    $at, 55
/* 0044FB00 1041FFD6 */  beq   $v0, $at, .L0044FA5C
/* 0044FB04 240C0037 */   li    $t4, 55
/* 0044FB08 1000FFE6 */  b     .L0044FAA4
/* 0044FB0C 00000000 */   nop   
.L0044FB10:
/* 0044FB10 8E030024 */  lw    $v1, 0x24($s0)
/* 0044FB14 8E09002C */  lw    $t1, 0x2c($s0)
/* 0044FB18 8C66002C */  lw    $a2, 0x2c($v1)
/* 0044FB1C AC69002C */  sw    $t1, 0x2c($v1)
/* 0044FB20 8E030024 */  lw    $v1, 0x24($s0)
/* 0044FB24 10000043 */  b     .L0044FC34
/* 0044FB28 90620020 */   lbu   $v0, 0x20($v1)
/* 0044FB2C 8E19002C */  lw    $t9, 0x2c($s0)
.L0044FB30:
/* 0044FB30 8E030024 */  lw    $v1, 0x24($s0)
/* 0044FB34 00196023 */  negu  $t4, $t9
/* 0044FB38 1000004F */  b     .L0044FC78
/* 0044FB3C AE0C002C */   sw    $t4, 0x2c($s0)
.L0044FB40:
/* 0044FB40 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 0044FB44 92040001 */  lbu   $a0, 1($s0)
/* 0044FB48 8E05002C */  lw    $a1, 0x2c($s0)
/* 0044FB4C 0320F809 */  jalr  $t9
/* 0044FB50 AFA60024 */   sw    $a2, 0x24($sp)
/* 0044FB54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044FB58 8FA60024 */  lw    $a2, 0x24($sp)
/* 0044FB5C 10400008 */  beqz  $v0, .L0044FB80
/* 0044FB60 2407001A */   li    $a3, 26
/* 0044FB64 8F998618 */  lw    $t9, %call16(ovfwwarning)($gp)
/* 0044FB68 24040041 */  li    $a0, 65
/* 0044FB6C 0320F809 */  jalr  $t9
/* 0044FB70 00000000 */   nop   
/* 0044FB74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044FB78 2407001A */  li    $a3, 26
/* 0044FB7C 24060001 */  li    $a2, 1
.L0044FB80:
/* 0044FB80 8E08002C */  lw    $t0, 0x2c($s0)
/* 0044FB84 A2000001 */  sb    $zero, 1($s0)
/* 0044FB88 A2070020 */  sb    $a3, 0x20($s0)
/* 0044FB8C 01060019 */  multu $t0, $a2
/* 0044FB90 AE000028 */  sw    $zero, 0x28($s0)
/* 0044FB94 8E030024 */  lw    $v1, 0x24($s0)
/* 0044FB98 00005812 */  mflo  $t3
/* 0044FB9C AE0B002C */  sw    $t3, 0x2c($s0)
/* 0044FBA0 10000036 */  b     .L0044FC7C
/* 0044FBA4 240A0041 */   li    $t2, 65
.L0044FBA8:
/* 0044FBA8 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 0044FBAC 92040001 */  lbu   $a0, 1($s0)
/* 0044FBB0 8E05002C */  lw    $a1, 0x2c($s0)
/* 0044FBB4 0320F809 */  jalr  $t9
/* 0044FBB8 AFA60024 */   sw    $a2, 0x24($sp)
/* 0044FBBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044FBC0 10400007 */  beqz  $v0, .L0044FBE0
/* 0044FBC4 8FA60024 */   lw    $a2, 0x24($sp)
/* 0044FBC8 8F998618 */  lw    $t9, %call16(ovfwwarning)($gp)
/* 0044FBCC 24040041 */  li    $a0, 65
/* 0044FBD0 0320F809 */  jalr  $t9
/* 0044FBD4 00000000 */   nop   
/* 0044FBD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044FBDC 24060001 */  li    $a2, 1
.L0044FBE0:
/* 0044FBE0 8E0E002C */  lw    $t6, 0x2c($s0)
/* 0044FBE4 24180037 */  li    $t8, 55
/* 0044FBE8 A2000001 */  sb    $zero, 1($s0)
/* 0044FBEC 01C60019 */  multu $t6, $a2
/* 0044FBF0 A2180020 */  sb    $t8, 0x20($s0)
/* 0044FBF4 AE000028 */  sw    $zero, 0x28($s0)
/* 0044FBF8 8E030024 */  lw    $v1, 0x24($s0)
/* 0044FBFC 00007812 */  mflo  $t7
/* 0044FC00 AE0F002C */  sw    $t7, 0x2c($s0)
/* 0044FC04 1000001D */  b     .L0044FC7C
/* 0044FC08 240A0041 */   li    $t2, 65
.L0044FC0C:
/* 0044FC0C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044FC10 8F868044 */  lw    $a2, %got(RO_1000CCD1)($gp)
/* 0044FC14 24040001 */  li    $a0, 1
/* 0044FC18 24050261 */  li    $a1, 609
/* 0044FC1C 24070009 */  li    $a3, 9
/* 0044FC20 0320F809 */  jalr  $t9
/* 0044FC24 24C6CCD1 */   addiu $a2, %lo(RO_1000CCD1) # addiu $a2, $a2, -0x332f
/* 0044FC28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044FC2C 10000012 */  b     .L0044FC78
/* 0044FC30 8E030024 */   lw    $v1, 0x24($s0)
.L0044FC34:
/* 0044FC34 2C410038 */  sltiu $at, $v0, 0x38
/* 0044FC38 14200007 */  bnez  $at, .L0044FC58
/* 0044FC3C 24010041 */   li    $at, 65
/* 0044FC40 1041000D */  beq   $v0, $at, .L0044FC78
/* 0044FC44 2404007D */   li    $a0, 125
/* 0044FC48 5044FFB9 */  beql  $v0, $a0, .L0044FB30
/* 0044FC4C 8E19002C */   lw    $t9, 0x2c($s0)
/* 0044FC50 1000FFEE */  b     .L0044FC0C
/* 0044FC54 00000000 */   nop   
.L0044FC58:
/* 0044FC58 10450007 */  beq   $v0, $a1, .L0044FC78
/* 0044FC5C 2407001A */   li    $a3, 26
/* 0044FC60 1047FFB7 */  beq   $v0, $a3, .L0044FB40
/* 0044FC64 24010037 */   li    $at, 55
/* 0044FC68 1041FFCF */  beq   $v0, $at, .L0044FBA8
/* 0044FC6C 00000000 */   nop   
/* 0044FC70 1000FFE6 */  b     .L0044FC0C
/* 0044FC74 00000000 */   nop   
.L0044FC78:
/* 0044FC78 240A0041 */  li    $t2, 65
.L0044FC7C:
/* 0044FC7C A06A0020 */  sb    $t2, 0x20($v1)
/* 0044FC80 8E090024 */  lw    $t1, 0x24($s0)
/* 0044FC84 920D0023 */  lbu   $t5, 0x23($s0)
/* 0044FC88 1000003F */  b     .L0044FD88
/* 0044FC8C A12D0023 */   sb    $t5, 0x23($t1)
.L0044FC90:
/* 0044FC90 8E030024 */  lw    $v1, 0x24($s0)
/* 0044FC94 90790020 */  lbu   $t9, 0x20($v1)
/* 0044FC98 14D90003 */  bne   $a2, $t9, .L0044FCA8
/* 0044FC9C 00000000 */   nop   
/* 0044FCA0 10000039 */  b     .L0044FD88
/* 0044FCA4 A2070020 */   sb    $a3, 0x20($s0)
.L0044FCA8:
/* 0044FCA8 10000037 */  b     .L0044FD88
/* 0044FCAC A0660020 */   sb    $a2, 0x20($v1)
.L0044FCB0:
/* 0044FCB0 8E030024 */  lw    $v1, 0x24($s0)
/* 0044FCB4 906C0020 */  lbu   $t4, 0x20($v1)
/* 0044FCB8 54CC0034 */  bnel  $a2, $t4, .L0044FD8C
/* 0044FCBC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0044FCC0 A2060020 */  sb    $a2, 0x20($s0)
/* 0044FCC4 10000030 */  b     .L0044FD88
/* 0044FCC8 A0670020 */   sb    $a3, 0x20($v1)
.L0044FCCC:
/* 0044FCCC 2C610042 */  sltiu $at, $v1, 0x42
/* 0044FCD0 14200014 */  bnez  $at, .L0044FD24
/* 0044FCD4 2C61007E */   sltiu $at, $v1, 0x7e
/* 0044FCD8 14200005 */  bnez  $at, .L0044FCF0
/* 0044FCDC 2401008A */   li    $at, 138
/* 0044FCE0 5061002A */  beql  $v1, $at, .L0044FD8C
/* 0044FCE4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0044FCE8 10000005 */  b     .L0044FD00
/* 0044FCEC 00000000 */   nop   
.L0044FCF0:
/* 0044FCF0 1067FFEF */  beq   $v1, $a3, .L0044FCB0
/* 0044FCF4 2404007D */   li    $a0, 125
/* 0044FCF8 5064FF10 */  beql  $v1, $a0, .L0044F93C
/* 0044FCFC 8E030024 */   lw    $v1, 0x24($s0)
.L0044FD00:
/* 0044FD00 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044FD04 8F868044 */  lw    $a2, %got(RO_1000CCC8)($gp)
/* 0044FD08 24040001 */  li    $a0, 1
/* 0044FD0C 24050223 */  li    $a1, 547
/* 0044FD10 24070009 */  li    $a3, 9
/* 0044FD14 0320F809 */  jalr  $t9
/* 0044FD18 24C6CCC8 */   addiu $a2, %lo(RO_1000CCC8) # addiu $a2, $a2, -0x3338
/* 0044FD1C 1000001A */  b     .L0044FD88
/* 0044FD20 8FBC0018 */   lw    $gp, 0x18($sp)
.L0044FD24:
/* 0044FD24 2C610005 */  sltiu $at, $v1, 5
/* 0044FD28 1420000D */  bnez  $at, .L0044FD60
/* 0044FD2C 246BFFFF */   addiu $t3, $v1, -1
/* 0044FD30 1066FFD7 */  beq   $v1, $a2, .L0044FC90
/* 0044FD34 2468FFC5 */   addiu $t0, $v1, -0x3b
/* 0044FD38 2D010007 */  sltiu $at, $t0, 7
/* 0044FD3C 1020FFF0 */  beqz  $at, .L0044FD00
/* 0044FD40 00000000 */   nop   
/* 0044FD44 8F818044 */  lw    $at, %got(jtbl_1000CCFC)($gp)
/* 0044FD48 00084080 */  sll   $t0, $t0, 2
/* 0044FD4C 00280821 */  addu  $at, $at, $t0
/* 0044FD50 8C28CCFC */  lw    $t0, %lo(jtbl_1000CCFC)($at)
/* 0044FD54 011C4021 */  addu  $t0, $t0, $gp
/* 0044FD58 01000008 */  jr    $t0
/* 0044FD5C 00000000 */   nop   
.L0044FD60:
/* 0044FD60 2D610004 */  sltiu $at, $t3, 4
/* 0044FD64 1020FFE6 */  beqz  $at, .L0044FD00
/* 0044FD68 00000000 */   nop   
/* 0044FD6C 8F818044 */  lw    $at, %got(jtbl_1000CCEC)($gp)
/* 0044FD70 000B5880 */  sll   $t3, $t3, 2
/* 0044FD74 002B0821 */  addu  $at, $at, $t3
/* 0044FD78 8C2BCCEC */  lw    $t3, %lo(jtbl_1000CCEC)($at)
/* 0044FD7C 017C5821 */  addu  $t3, $t3, $gp
/* 0044FD80 01600008 */  jr    $t3
/* 0044FD84 00000000 */   nop   
.L0044FD88:
/* 0044FD88 8FBF001C */  lw    $ra, 0x1c($sp)
.L0044FD8C:
/* 0044FD8C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0044FD90 27BD0030 */  addiu $sp, $sp, 0x30
/* 0044FD94 03E00008 */  jr    $ra
/* 0044FD98 00000000 */   nop   
    .type linearize, @function
    .size linearize, .-linearize
    .end linearize

    .type func_0044FD9C, @function
func_0044FD9C:
    # 0044FF6C mergeconst
/* 0044FD9C 27BDFFF8 */  addiu $sp, $sp, -8
/* 0044FDA0 AFA40008 */  sw    $a0, 8($sp)
/* 0044FDA4 AFA20004 */  sw    $v0, 4($sp)
/* 0044FDA8 2409001D */  li    $t1, 29
/* 0044FDAC 24080001 */  li    $t0, 1
/* 0044FDB0 24070002 */  li    $a3, 2
/* 0044FDB4 24060004 */  li    $a2, 4
.L0044FDB8:
/* 0044FDB8 90A30000 */  lbu   $v1, ($a1)
/* 0044FDBC 00A01025 */  move  $v0, $a1
/* 0044FDC0 50C30006 */  beql  $a2, $v1, .L0044FDDC
/* 0044FDC4 94AE0006 */   lhu   $t6, 6($a1)
/* 0044FDC8 00E32026 */  xor   $a0, $a3, $v1
/* 0044FDCC 2C840001 */  sltiu $a0, $a0, 1
/* 0044FDD0 10000063 */  b     .L0044FF60
/* 0044FDD4 308400FF */   andi  $a0, $a0, 0xff
/* 0044FDD8 94AE0006 */  lhu   $t6, 6($a1)
.L0044FDDC:
/* 0044FDDC 150E0004 */  bne   $t0, $t6, .L0044FDF0
/* 0044FDE0 00000000 */   nop   
/* 0044FDE4 90AF003E */  lbu   $t7, 0x3e($a1)
/* 0044FDE8 51E00004 */  beql  $t7, $zero, .L0044FDFC
/* 0044FDEC 90A30020 */   lbu   $v1, 0x20($a1)
.L0044FDF0:
/* 0044FDF0 1000005B */  b     .L0044FF60
/* 0044FDF4 00002025 */   move  $a0, $zero
/* 0044FDF8 90A30020 */  lbu   $v1, 0x20($a1)
.L0044FDFC:
/* 0044FDFC 1523000B */  bne   $t1, $v1, .L0044FE2C
/* 0044FE00 00000000 */   nop   
/* 0044FE04 90B80001 */  lbu   $t8, 1($a1)
/* 0044FE08 3C010780 */  lui   $at, 0x780
/* 0044FE0C 2F190020 */  sltiu $t9, $t8, 0x20
/* 0044FE10 00195023 */  negu  $t2, $t9
/* 0044FE14 01415824 */  and   $t3, $t2, $at
/* 0044FE18 030B6004 */  sllv  $t4, $t3, $t8
/* 0044FE1C 05810003 */  bgez  $t4, .L0044FE2C
/* 0044FE20 00000000 */   nop   
/* 0044FE24 1000004E */  b     .L0044FF60
/* 0044FE28 00002025 */   move  $a0, $zero
.L0044FE2C:
/* 0044FE2C 10830035 */  beq   $a0, $v1, .L0044FF04
/* 0044FE30 2C6D0080 */   sltiu $t5, $v1, 0x80
/* 0044FE34 11A00009 */  beqz  $t5, .L0044FE5C
/* 0044FE38 00000000 */   nop   
/* 0044FE3C 8F998044 */  lw    $t9, %got(D_10010B58)($gp)
/* 0044FE40 00037143 */  sra   $t6, $v1, 5
/* 0044FE44 000E7880 */  sll   $t7, $t6, 2
/* 0044FE48 27390B58 */  addiu $t9, %lo(D_10010B58) # addiu $t9, $t9, 0xb58
/* 0044FE4C 032F5021 */  addu  $t2, $t9, $t7
/* 0044FE50 8D4B0000 */  lw    $t3, ($t2)
/* 0044FE54 006BC004 */  sllv  $t8, $t3, $v1
/* 0044FE58 2B0D0000 */  slti  $t5, $t8, 0
.L0044FE5C:
/* 0044FE5C 11A0000D */  beqz  $t5, .L0044FE94
/* 0044FE60 2C8E0080 */   sltiu $t6, $a0, 0x80
/* 0044FE64 11C00009 */  beqz  $t6, .L0044FE8C
/* 0044FE68 00000000 */   nop   
/* 0044FE6C 8F8A8044 */  lw    $t2, %got(D_10010B58)($gp)
/* 0044FE70 0004C943 */  sra   $t9, $a0, 5
/* 0044FE74 00197880 */  sll   $t7, $t9, 2
/* 0044FE78 254A0B58 */  addiu $t2, %lo(D_10010B58) # addiu $t2, $t2, 0xb58
/* 0044FE7C 014F5821 */  addu  $t3, $t2, $t7
/* 0044FE80 8D780000 */  lw    $t8, ($t3)
/* 0044FE84 00986004 */  sllv  $t4, $t8, $a0
/* 0044FE88 298E0000 */  slti  $t6, $t4, 0
.L0044FE8C:
/* 0044FE8C 55C0001E */  bnezl $t6, .L0044FF08
/* 0044FE90 2C6B0040 */   sltiu $t3, $v1, 0x40
.L0044FE94:
/* 0044FE94 2C790060 */  sltiu $t9, $v1, 0x60
/* 0044FE98 13200009 */  beqz  $t9, .L0044FEC0
/* 0044FE9C 00000000 */   nop   
/* 0044FEA0 8F8B8044 */  lw    $t3, %got(D_10010B4C)($gp)
/* 0044FEA4 00035143 */  sra   $t2, $v1, 5
/* 0044FEA8 000A7880 */  sll   $t7, $t2, 2
/* 0044FEAC 256B0B4C */  addiu $t3, %lo(D_10010B4C) # addiu $t3, $t3, 0xb4c
/* 0044FEB0 016FC021 */  addu  $t8, $t3, $t7
/* 0044FEB4 8F0C0000 */  lw    $t4, ($t8)
/* 0044FEB8 006C6804 */  sllv  $t5, $t4, $v1
/* 0044FEBC 29B90000 */  slti  $t9, $t5, 0
.L0044FEC0:
/* 0044FEC0 1320000E */  beqz  $t9, .L0044FEFC
/* 0044FEC4 2C8A0060 */   sltiu $t2, $a0, 0x60
/* 0044FEC8 1140000A */  beqz  $t2, .L0044FEF4
/* 0044FECC 00000000 */   nop   
/* 0044FED0 8F988044 */  lw    $t8, %got(D_10010B4C)($gp)
/* 0044FED4 00045943 */  sra   $t3, $a0, 5
/* 0044FED8 000B7880 */  sll   $t7, $t3, 2
/* 0044FEDC 27180B4C */  addiu $t8, %lo(D_10010B4C) # addiu $t8, $t8, 0xb4c
/* 0044FEE0 030F6021 */  addu  $t4, $t8, $t7
/* 0044FEE4 8D8D0000 */  lw    $t5, ($t4)
/* 0044FEE8 008D7004 */  sllv  $t6, $t5, $a0
/* 0044FEEC 29D90000 */  slti  $t9, $t6, 0
/* 0044FEF0 03205025 */  move  $t2, $t9
.L0044FEF4:
/* 0044FEF4 55400004 */  bnezl $t2, .L0044FF08
/* 0044FEF8 2C6B0040 */   sltiu $t3, $v1, 0x40
.L0044FEFC:
/* 0044FEFC 10000018 */  b     .L0044FF60
/* 0044FF00 00002025 */   move  $a0, $zero
.L0044FF04:
/* 0044FF04 2C6B0040 */  sltiu $t3, $v1, 0x40
.L0044FF08:
/* 0044FF08 11600009 */  beqz  $t3, .L0044FF30
/* 0044FF0C 308400FF */   andi  $a0, $a0, 0xff
/* 0044FF10 8F8C8044 */  lw    $t4, %got(D_10010B44)($gp)
/* 0044FF14 0003C143 */  sra   $t8, $v1, 5
/* 0044FF18 00187880 */  sll   $t7, $t8, 2
/* 0044FF1C 258C0B44 */  addiu $t4, %lo(D_10010B44) # addiu $t4, $t4, 0xb44
/* 0044FF20 018F6821 */  addu  $t5, $t4, $t7
/* 0044FF24 8DAE0000 */  lw    $t6, ($t5)
/* 0044FF28 006EC804 */  sllv  $t9, $t6, $v1
/* 0044FF2C 2B2B0000 */  slti  $t3, $t9, 0
.L0044FF30:
/* 0044FF30 51600004 */  beql  $t3, $zero, .L0044FF44
/* 0044FF34 8CB80028 */   lw    $t8, 0x28($a1)
/* 0044FF38 10000009 */  b     .L0044FF60
/* 0044FF3C 24040001 */   li    $a0, 1
/* 0044FF40 8CB80028 */  lw    $t8, 0x28($a1)
.L0044FF44:
/* 0044FF44 930C0000 */  lbu   $t4, ($t8)
/* 0044FF48 14EC0003 */  bne   $a3, $t4, .L0044FF58
/* 0044FF4C 00000000 */   nop   
/* 0044FF50 10000003 */  b     .L0044FF60
/* 0044FF54 24040001 */   li    $a0, 1
.L0044FF58:
/* 0044FF58 1000FF97 */  b     .L0044FDB8
/* 0044FF5C 8C450024 */   lw    $a1, 0x24($v0)
.L0044FF60:
/* 0044FF60 00801025 */  move  $v0, $a0
/* 0044FF64 03E00008 */  jr    $ra
/* 0044FF68 27BD0008 */   addiu $sp, $sp, 8

glabel mergeconst
    .ent mergeconst
    # 00451764 func_00451764
/* 0044FF6C 3C1C0FBD */  .cpload $t9
/* 0044FF70 279CA324 */  
/* 0044FF74 0399E021 */  
/* 0044FF78 27BDFF90 */  addiu $sp, $sp, -0x70
/* 0044FF7C AFBF0044 */  sw    $ra, 0x44($sp)
/* 0044FF80 AFBE0040 */  sw    $fp, 0x40($sp)
/* 0044FF84 AFBC003C */  sw    $gp, 0x3c($sp)
/* 0044FF88 AFB70038 */  sw    $s7, 0x38($sp)
/* 0044FF8C AFB60034 */  sw    $s6, 0x34($sp)
/* 0044FF90 AFB50030 */  sw    $s5, 0x30($sp)
/* 0044FF94 AFB4002C */  sw    $s4, 0x2c($sp)
/* 0044FF98 AFB30028 */  sw    $s3, 0x28($sp)
/* 0044FF9C AFB20024 */  sw    $s2, 0x24($sp)
/* 0044FFA0 AFB10020 */  sw    $s1, 0x20($sp)
/* 0044FFA4 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0044FFA8 908E0001 */  lbu   $t6, 1($a0)
/* 0044FFAC 3C018A80 */  lui   $at, 0x8a80
/* 0044FFB0 00809025 */  move  $s2, $a0
/* 0044FFB4 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0044FFB8 000FC023 */  negu  $t8, $t7
/* 0044FFBC 0301C824 */  and   $t9, $t8, $at
/* 0044FFC0 01D94004 */  sllv  $t0, $t9, $t6
/* 0044FFC4 0503042B */  bgezl $t0, .L00451074
/* 0044FFC8 8FBF0044 */   lw    $ra, 0x44($sp)
/* 0044FFCC 8F998028 */  lw    $t9, %got(func_0044FD9C)($gp)
/* 0044FFD0 90840020 */  lbu   $a0, 0x20($a0)
/* 0044FFD4 8E450024 */  lw    $a1, 0x24($s2)
/* 0044FFD8 2739FD9C */  addiu $t9, %lo(func_0044FD9C) # addiu $t9, $t9, -0x264
/* 0044FFDC 0320F809 */  jalr  $t9
/* 0044FFE0 27A20070 */   addiu $v0, $sp, 0x70
/* 0044FFE4 10400422 */  beqz  $v0, .L00451070
/* 0044FFE8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0044FFEC 8E530024 */  lw    $s3, 0x24($s2)
/* 0044FFF0 A3A00063 */  sb    $zero, 0x63($sp)
/* 0044FFF4 0000A025 */  move  $s4, $zero
/* 0044FFF8 241E007D */  li    $fp, 125
/* 0044FFFC 24170037 */  li    $s7, 55
/* 00450000 24160041 */  li    $s6, 65
/* 00450004 24150001 */  li    $s5, 1
/* 00450008 92630020 */  lbu   $v1, 0x20($s3)
.L0045000C:
/* 0045000C 2C690040 */  sltiu $t1, $v1, 0x40
/* 00450010 1120000A */  beqz  $t1, .L0045003C
/* 00450014 00000000 */   nop   
/* 00450018 8F8C8044 */  lw    $t4, %got(D_10010B74)($gp)
/* 0045001C 00035143 */  sra   $t2, $v1, 5
/* 00450020 000A5880 */  sll   $t3, $t2, 2
/* 00450024 258C0B74 */  addiu $t4, %lo(D_10010B74) # addiu $t4, $t4, 0xb74
/* 00450028 018B6821 */  addu  $t5, $t4, $t3
/* 0045002C 8DAF0000 */  lw    $t7, ($t5)
/* 00450030 006FC004 */  sllv  $t8, $t7, $v1
/* 00450034 2B190000 */  slti  $t9, $t8, 0
/* 00450038 03204825 */  move  $t1, $t9
.L0045003C:
/* 0045003C 1520024B */  bnez  $t1, .L0045096C
/* 00450040 00000000 */   nop   
/* 00450044 8E710028 */  lw    $s1, 0x28($s3)
/* 00450048 52200355 */  beql  $s1, $zero, .L00450DA0
/* 0045004C 93A90063 */   lbu   $t1, 0x63($sp)
/* 00450050 922E0000 */  lbu   $t6, ($s1)
/* 00450054 24010002 */  li    $at, 2
/* 00450058 55C10351 */  bnel  $t6, $at, .L00450DA0
/* 0045005C 93A90063 */   lbu   $t1, 0x63($sp)
/* 00450060 92500020 */  lbu   $s0, 0x20($s2)
/* 00450064 306200FF */  andi  $v0, $v1, 0xff
/* 00450068 2401001A */  li    $at, 26
/* 0045006C 16D00031 */  bne   $s6, $s0, .L00450134
/* 00450070 00000000 */   nop   
/* 00450074 14560027 */  bne   $v0, $s6, .L00450114
/* 00450078 02A02025 */   move  $a0, $s5
/* 0045007C 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 00450080 92640001 */  lbu   $a0, 1($s3)
/* 00450084 8E250020 */  lw    $a1, 0x20($s1)
/* 00450088 0320F809 */  jalr  $t9
/* 0045008C 8E66002C */   lw    $a2, 0x2c($s3)
/* 00450090 10400003 */  beqz  $v0, .L004500A0
/* 00450094 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00450098 10000121 */  b     .L00450520
/* 0045009C 32B400FF */   andi  $s4, $s5, 0xff
.L004500A0:
/* 004500A0 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 004500A4 8E480028 */  lw    $t0, 0x28($s2)
/* 004500A8 92440001 */  lbu   $a0, 1($s2)
/* 004500AC 8E46002C */  lw    $a2, 0x2c($s2)
/* 004500B0 0320F809 */  jalr  $t9
/* 004500B4 8D050020 */   lw    $a1, 0x20($t0)
/* 004500B8 10400003 */  beqz  $v0, .L004500C8
/* 004500BC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004500C0 10000117 */  b     .L00450520
/* 004500C4 32B400FF */   andi  $s4, $s5, 0xff
.L004500C8:
/* 004500C8 8E6A0028 */  lw    $t2, 0x28($s3)
/* 004500CC 8E6B002C */  lw    $t3, 0x2c($s3)
/* 004500D0 8E4D0028 */  lw    $t5, 0x28($s2)
/* 004500D4 8D4C0020 */  lw    $t4, 0x20($t2)
/* 004500D8 8E58002C */  lw    $t8, 0x2c($s2)
/* 004500DC 8DAF0020 */  lw    $t7, 0x20($t5)
/* 004500E0 018B0019 */  multu $t4, $t3
/* 004500E4 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 004500E8 00002025 */  move  $a0, $zero
/* 004500EC 00002812 */  mflo  $a1
/* 004500F0 00000000 */  nop   
/* 004500F4 00000000 */  nop   
/* 004500F8 01F80019 */  multu $t7, $t8
/* 004500FC 00003012 */  mflo  $a2
/* 00450100 0320F809 */  jalr  $t9
/* 00450104 00000000 */   nop   
/* 00450108 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045010C 10000104 */  b     .L00450520
/* 00450110 305400FF */   andi  $s4, $v0, 0xff
.L00450114:
/* 00450114 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00450118 8F868044 */  lw    $a2, %got(RO_1000CD57)($gp)
/* 0045011C 240502C1 */  li    $a1, 705
/* 00450120 24070009 */  li    $a3, 9
/* 00450124 0320F809 */  jalr  $t9
/* 00450128 24C6CD57 */   addiu $a2, %lo(RO_1000CD57) # addiu $a2, $a2, -0x32a9
/* 0045012C 100000FC */  b     .L00450520
/* 00450130 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450134:
/* 00450134 1601003F */  bne   $s0, $at, .L00450234
/* 00450138 00000000 */   nop   
/* 0045013C 10000030 */  b     .L00450200
/* 00450140 306200FF */   andi  $v0, $v1, 0xff
.L00450144:
/* 00450144 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 00450148 92440001 */  lbu   $a0, 1($s2)
/* 0045014C 8E250020 */  lw    $a1, 0x20($s1)
/* 00450150 0320F809 */  jalr  $t9
/* 00450154 8E46002C */   lw    $a2, 0x2c($s2)
/* 00450158 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045015C 100000F0 */  b     .L00450520
/* 00450160 305400FF */   andi  $s4, $v0, 0xff
.L00450164:
/* 00450164 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 00450168 8E250020 */  lw    $a1, 0x20($s1)
/* 0045016C 92440001 */  lbu   $a0, 1($s2)
/* 00450170 8E46002C */  lw    $a2, 0x2c($s2)
/* 00450174 0320F809 */  jalr  $t9
/* 00450178 00052823 */   negu  $a1, $a1
/* 0045017C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450180 100000E7 */  b     .L00450520
/* 00450184 305400FF */   andi  $s4, $v0, 0xff
.L00450188:
/* 00450188 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 0045018C 92640001 */  lbu   $a0, 1($s3)
/* 00450190 8E65002C */  lw    $a1, 0x2c($s3)
/* 00450194 0320F809 */  jalr  $t9
/* 00450198 8E260020 */   lw    $a2, 0x20($s1)
/* 0045019C 10400003 */  beqz  $v0, .L004501AC
/* 004501A0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004501A4 100000DE */  b     .L00450520
/* 004501A8 32B400FF */   andi  $s4, $s5, 0xff
.L004501AC:
/* 004501AC 8E690028 */  lw    $t1, 0x28($s3)
/* 004501B0 8E79002C */  lw    $t9, 0x2c($s3)
/* 004501B4 92440001 */  lbu   $a0, 1($s2)
/* 004501B8 8D2E0020 */  lw    $t6, 0x20($t1)
/* 004501BC 8E46002C */  lw    $a2, 0x2c($s2)
/* 004501C0 032E0019 */  multu $t9, $t6
/* 004501C4 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 004501C8 00002812 */  mflo  $a1
/* 004501CC 0320F809 */  jalr  $t9
/* 004501D0 00000000 */   nop   
/* 004501D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004501D8 100000D1 */  b     .L00450520
/* 004501DC 305400FF */   andi  $s4, $v0, 0xff
.L004501E0:
/* 004501E0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004501E4 8F868044 */  lw    $a2, %got(RO_1000CD4E)($gp)
/* 004501E8 240502CA */  li    $a1, 714
/* 004501EC 24070009 */  li    $a3, 9
/* 004501F0 0320F809 */  jalr  $t9
/* 004501F4 24C6CD4E */   addiu $a2, %lo(RO_1000CD4E) # addiu $a2, $a2, -0x32b2
/* 004501F8 100000C9 */  b     .L00450520
/* 004501FC 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450200:
/* 00450200 2C410042 */  sltiu $at, $v0, 0x42
/* 00450204 14200005 */  bnez  $at, .L0045021C
/* 00450208 02A02025 */   move  $a0, $s5
/* 0045020C 105EFFD5 */  beq   $v0, $fp, .L00450164
/* 00450210 00000000 */   nop   
/* 00450214 1000FFF2 */  b     .L004501E0
/* 00450218 00000000 */   nop   
.L0045021C:
/* 0045021C 1055FFC9 */  beq   $v0, $s5, .L00450144
/* 00450220 00000000 */   nop   
/* 00450224 1056FFD8 */  beq   $v0, $s6, .L00450188
/* 00450228 00000000 */   nop   
/* 0045022C 1000FFEC */  b     .L004501E0
/* 00450230 00000000 */   nop   
.L00450234:
/* 00450234 16F0003F */  bne   $s7, $s0, .L00450334
/* 00450238 00000000 */   nop   
/* 0045023C 10000030 */  b     .L00450300
/* 00450240 306200FF */   andi  $v0, $v1, 0xff
.L00450244:
/* 00450244 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00450248 92440001 */  lbu   $a0, 1($s2)
/* 0045024C 8E250020 */  lw    $a1, 0x20($s1)
/* 00450250 0320F809 */  jalr  $t9
/* 00450254 8E46002C */   lw    $a2, 0x2c($s2)
/* 00450258 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045025C 100000B0 */  b     .L00450520
/* 00450260 305400FF */   andi  $s4, $v0, 0xff
.L00450264:
/* 00450264 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00450268 8E250020 */  lw    $a1, 0x20($s1)
/* 0045026C 92440001 */  lbu   $a0, 1($s2)
/* 00450270 8E46002C */  lw    $a2, 0x2c($s2)
/* 00450274 0320F809 */  jalr  $t9
/* 00450278 00052823 */   negu  $a1, $a1
/* 0045027C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450280 100000A7 */  b     .L00450520
/* 00450284 305400FF */   andi  $s4, $v0, 0xff
.L00450288:
/* 00450288 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 0045028C 92640001 */  lbu   $a0, 1($s3)
/* 00450290 8E65002C */  lw    $a1, 0x2c($s3)
/* 00450294 0320F809 */  jalr  $t9
/* 00450298 8E260020 */   lw    $a2, 0x20($s1)
/* 0045029C 10400003 */  beqz  $v0, .L004502AC
/* 004502A0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004502A4 1000009E */  b     .L00450520
/* 004502A8 32B400FF */   andi  $s4, $s5, 0xff
.L004502AC:
/* 004502AC 8E6A0028 */  lw    $t2, 0x28($s3)
/* 004502B0 8E68002C */  lw    $t0, 0x2c($s3)
/* 004502B4 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 004502B8 8D4C0020 */  lw    $t4, 0x20($t2)
/* 004502BC 92440001 */  lbu   $a0, 1($s2)
/* 004502C0 8E46002C */  lw    $a2, 0x2c($s2)
/* 004502C4 010C0019 */  multu $t0, $t4
/* 004502C8 00002812 */  mflo  $a1
/* 004502CC 0320F809 */  jalr  $t9
/* 004502D0 00000000 */   nop   
/* 004502D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004502D8 10000091 */  b     .L00450520
/* 004502DC 305400FF */   andi  $s4, $v0, 0xff
.L004502E0:
/* 004502E0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004502E4 8F868044 */  lw    $a2, %got(RO_1000CD45)($gp)
/* 004502E8 240502D3 */  li    $a1, 723
/* 004502EC 24070009 */  li    $a3, 9
/* 004502F0 0320F809 */  jalr  $t9
/* 004502F4 24C6CD45 */   addiu $a2, %lo(RO_1000CD45) # addiu $a2, $a2, -0x32bb
/* 004502F8 10000089 */  b     .L00450520
/* 004502FC 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450300:
/* 00450300 2C410042 */  sltiu $at, $v0, 0x42
/* 00450304 14200005 */  bnez  $at, .L0045031C
/* 00450308 02A02025 */   move  $a0, $s5
/* 0045030C 105EFFD5 */  beq   $v0, $fp, .L00450264
/* 00450310 00000000 */   nop   
/* 00450314 1000FFF2 */  b     .L004502E0
/* 00450318 00000000 */   nop   
.L0045031C:
/* 0045031C 1055FFC9 */  beq   $v0, $s5, .L00450244
/* 00450320 00000000 */   nop   
/* 00450324 1056FFD8 */  beq   $v0, $s6, .L00450288
/* 00450328 00000000 */   nop   
/* 0045032C 1000FFEC */  b     .L004502E0
/* 00450330 00000000 */   nop   
.L00450334:
/* 00450334 16C30029 */  bne   $s6, $v1, .L004503DC
/* 00450338 00000000 */   nop   
/* 0045033C 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 00450340 92640001 */  lbu   $a0, 1($s3)
/* 00450344 8E65002C */  lw    $a1, 0x2c($s3)
/* 00450348 0320F809 */  jalr  $t9
/* 0045034C 8E260020 */   lw    $a2, 0x20($s1)
/* 00450350 10400003 */  beqz  $v0, .L00450360
/* 00450354 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00450358 10000071 */  b     .L00450520
/* 0045035C 32B400FF */   andi  $s4, $s5, 0xff
.L00450360:
/* 00450360 924B0020 */  lbu   $t3, 0x20($s2)
/* 00450364 56AB0010 */  bnel  $s5, $t3, .L004503A8
/* 00450368 8E6E0028 */   lw    $t6, 0x28($s3)
/* 0045036C 8E6F0028 */  lw    $t7, 0x28($s3)
/* 00450370 8E6D002C */  lw    $t5, 0x2c($s3)
/* 00450374 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00450378 8DF80020 */  lw    $t8, 0x20($t7)
/* 0045037C 8E490028 */  lw    $t1, 0x28($s2)
/* 00450380 92440001 */  lbu   $a0, 1($s2)
/* 00450384 01B80019 */  multu $t5, $t8
/* 00450388 8D260020 */  lw    $a2, 0x20($t1)
/* 0045038C 00002812 */  mflo  $a1
/* 00450390 0320F809 */  jalr  $t9
/* 00450394 00000000 */   nop   
/* 00450398 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045039C 10000060 */  b     .L00450520
/* 004503A0 305400FF */   andi  $s4, $v0, 0xff
/* 004503A4 8E6E0028 */  lw    $t6, 0x28($s3)
.L004503A8:
/* 004503A8 8E79002C */  lw    $t9, 0x2c($s3)
/* 004503AC 8E480028 */  lw    $t0, 0x28($s2)
/* 004503B0 8DCA0020 */  lw    $t2, 0x20($t6)
/* 004503B4 92440001 */  lbu   $a0, 1($s2)
/* 004503B8 8D060020 */  lw    $a2, 0x20($t0)
/* 004503BC 032A0019 */  multu $t9, $t2
/* 004503C0 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 004503C4 00002812 */  mflo  $a1
/* 004503C8 0320F809 */  jalr  $t9
/* 004503CC 00000000 */   nop   
/* 004503D0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004503D4 10000052 */  b     .L00450520
/* 004503D8 305400FF */   andi  $s4, $v0, 0xff
.L004503DC:
/* 004503DC 13C3000B */  beq   $fp, $v1, .L0045040C
/* 004503E0 2401001D */   li    $at, 29
/* 004503E4 10610009 */  beq   $v1, $at, .L0045040C
/* 004503E8 02002825 */   move  $a1, $s0
/* 004503EC 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 004503F0 92440001 */  lbu   $a0, 1($s2)
/* 004503F4 02203025 */  move  $a2, $s1
/* 004503F8 0320F809 */  jalr  $t9
/* 004503FC 8E470028 */   lw    $a3, 0x28($s2)
/* 00450400 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450404 10000046 */  b     .L00450520
/* 00450408 305400FF */   andi  $s4, $v0, 0xff
.L0045040C:
/* 0045040C 16030029 */  bne   $s0, $v1, .L004504B4
/* 00450410 00000000 */   nop   
/* 00450414 12B00003 */  beq   $s5, $s0, .L00450424
/* 00450418 02A02825 */   move  $a1, $s5
/* 0045041C 17D00009 */  bne   $fp, $s0, .L00450444
/* 00450420 2E0C0060 */   sltiu $t4, $s0, 0x60
.L00450424:
/* 00450424 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 00450428 92440001 */  lbu   $a0, 1($s2)
/* 0045042C 02203025 */  move  $a2, $s1
/* 00450430 0320F809 */  jalr  $t9
/* 00450434 8E470028 */   lw    $a3, 0x28($s2)
/* 00450438 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045043C 10000038 */  b     .L00450520
/* 00450440 305400FF */   andi  $s4, $v0, 0xff
.L00450444:
/* 00450444 11800009 */  beqz  $t4, .L0045046C
/* 00450448 02002825 */   move  $a1, $s0
/* 0045044C 8F8D8044 */  lw    $t5, %got(D_10010B68)($gp)
/* 00450450 00105943 */  sra   $t3, $s0, 5
/* 00450454 000B7880 */  sll   $t7, $t3, 2
/* 00450458 25AD0B68 */  addiu $t5, %lo(D_10010B68) # addiu $t5, $t5, 0xb68
/* 0045045C 01AFC021 */  addu  $t8, $t5, $t7
/* 00450460 8F090000 */  lw    $t1, ($t8)
/* 00450464 02097004 */  sllv  $t6, $t1, $s0
/* 00450468 29CC0000 */  slti  $t4, $t6, 0
.L0045046C:
/* 0045046C 11800009 */  beqz  $t4, .L00450494
/* 00450470 02203025 */   move  $a2, $s1
/* 00450474 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 00450478 92440001 */  lbu   $a0, 1($s2)
/* 0045047C 2405005B */  li    $a1, 91
/* 00450480 0320F809 */  jalr  $t9
/* 00450484 8E470028 */   lw    $a3, 0x28($s2)
/* 00450488 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045048C 10000024 */  b     .L00450520
/* 00450490 305400FF */   andi  $s4, $v0, 0xff
.L00450494:
/* 00450494 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 00450498 92440001 */  lbu   $a0, 1($s2)
/* 0045049C 02203025 */  move  $a2, $s1
/* 004504A0 0320F809 */  jalr  $t9
/* 004504A4 8E470028 */   lw    $a3, 0x28($s2)
/* 004504A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004504AC 1000001C */  b     .L00450520
/* 004504B0 305400FF */   andi  $s4, $v0, 0xff
.L004504B4:
/* 004504B4 12B00003 */  beq   $s5, $s0, .L004504C4
/* 004504B8 03C02825 */   move  $a1, $fp
/* 004504BC 17D00011 */  bne   $fp, $s0, .L00450504
/* 004504C0 02203025 */   move  $a2, $s1
.L004504C4:
/* 004504C4 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 004504C8 92440001 */  lbu   $a0, 1($s2)
/* 004504CC 02203025 */  move  $a2, $s1
/* 004504D0 0320F809 */  jalr  $t9
/* 004504D4 8E470028 */   lw    $a3, 0x28($s2)
/* 004504D8 10400008 */  beqz  $v0, .L004504FC
/* 004504DC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004504E0 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 004504E4 92440001 */  lbu   $a0, 1($s2)
/* 004504E8 03C02825 */  move  $a1, $fp
/* 004504EC 8E460028 */  lw    $a2, 0x28($s2)
/* 004504F0 0320F809 */  jalr  $t9
/* 004504F4 8E670028 */   lw    $a3, 0x28($s3)
/* 004504F8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004504FC:
/* 004504FC 10000008 */  b     .L00450520
/* 00450500 305400FF */   andi  $s4, $v0, 0xff
.L00450504:
/* 00450504 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 00450508 92440001 */  lbu   $a0, 1($s2)
/* 0045050C 2405001D */  li    $a1, 29
/* 00450510 0320F809 */  jalr  $t9
/* 00450514 8E470028 */   lw    $a3, 0x28($s2)
/* 00450518 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045051C 305400FF */  andi  $s4, $v0, 0xff
.L00450520:
/* 00450520 5680021F */  bnezl $s4, .L00450DA0
/* 00450524 93A90063 */   lbu   $t1, 0x63($sp)
/* 00450528 92500020 */  lbu   $s0, 0x20($s2)
/* 0045052C A3B50063 */  sb    $s5, 0x63($sp)
/* 00450530 2401001A */  li    $at, 26
/* 00450534 16D00023 */  bne   $s6, $s0, .L004505C4
/* 00450538 00000000 */   nop   
/* 0045053C 92620020 */  lbu   $v0, 0x20($s3)
/* 00450540 1456001E */  bne   $v0, $s6, .L004505BC
/* 00450544 00000000 */   nop   
/* 00450548 8E6A0028 */  lw    $t2, 0x28($s3)
.L0045054C:
/* 0045054C 8E6B002C */  lw    $t3, 0x2c($s3)
/* 00450550 8E4F0028 */  lw    $t7, 0x28($s2)
/* 00450554 8D480020 */  lw    $t0, 0x20($t2)
/* 00450558 8E49002C */  lw    $t1, 0x2c($s2)
/* 0045055C 8DF80020 */  lw    $t8, 0x20($t7)
/* 00450560 010B0019 */  multu $t0, $t3
/* 00450564 AE600028 */  sw    $zero, 0x28($s3)
/* 00450568 A2770020 */  sb    $s7, 0x20($s3)
/* 0045056C A2600001 */  sb    $zero, 1($s3)
/* 00450570 00006812 */  mflo  $t5
/* 00450574 00000000 */  nop   
/* 00450578 00000000 */  nop   
/* 0045057C 03090019 */  multu $t8, $t1
/* 00450580 00007012 */  mflo  $t6
/* 00450584 01AEC821 */  addu  $t9, $t5, $t6
/* 00450588 100000E9 */  b     .L00450930
/* 0045058C AE79002C */   sw    $t9, 0x2c($s3)
.L00450590:
/* 00450590 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00450594 8F868044 */  lw    $a2, %got(RO_1000CD3C)($gp)
/* 00450598 02A02025 */  move  $a0, $s5
/* 0045059C 240502F5 */  li    $a1, 757
/* 004505A0 24070009 */  li    $a3, 9
/* 004505A4 0320F809 */  jalr  $t9
/* 004505A8 24C6CD3C */   addiu $a2, %lo(RO_1000CD3C) # addiu $a2, $a2, -0x32c4
/* 004505AC 100000E0 */  b     .L00450930
/* 004505B0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004505B4 5056FFE5 */  beql  $v0, $s6, .L0045054C
/* 004505B8 8E6A0028 */   lw    $t2, 0x28($s3)
.L004505BC:
/* 004505BC 1000FFF4 */  b     .L00450590
/* 004505C0 00000000 */   nop   
.L004505C4:
/* 004505C4 16010033 */  bne   $s0, $at, .L00450694
/* 004505C8 00000000 */   nop   
/* 004505CC 10000021 */  b     .L00450654
/* 004505D0 92620020 */   lbu   $v0, 0x20($s3)
/* 004505D4 8E6C0028 */  lw    $t4, 0x28($s3)
.L004505D8:
/* 004505D8 8E48002C */  lw    $t0, 0x2c($s2)
/* 004505DC 8D8A0020 */  lw    $t2, 0x20($t4)
/* 004505E0 01485823 */  subu  $t3, $t2, $t0
/* 004505E4 10000028 */  b     .L00450688
/* 004505E8 AE6B002C */   sw    $t3, 0x2c($s3)
/* 004505EC 8E6F0028 */  lw    $t7, 0x28($s3)
.L004505F0:
/* 004505F0 8E4D002C */  lw    $t5, 0x2c($s2)
/* 004505F4 8DF80020 */  lw    $t8, 0x20($t7)
/* 004505F8 00184823 */  negu  $t1, $t8
/* 004505FC 012D7023 */  subu  $t6, $t1, $t5
/* 00450600 10000021 */  b     .L00450688
/* 00450604 AE6E002C */   sw    $t6, 0x2c($s3)
/* 00450608 8E6C0028 */  lw    $t4, 0x28($s3)
.L0045060C:
/* 0045060C 8E79002C */  lw    $t9, 0x2c($s3)
/* 00450610 8D8A0020 */  lw    $t2, 0x20($t4)
/* 00450614 032A0019 */  multu $t9, $t2
/* 00450618 00004012 */  mflo  $t0
/* 0045061C AE68002C */  sw    $t0, 0x2c($s3)
/* 00450620 8E4F002C */  lw    $t7, 0x2c($s2)
/* 00450624 A2600001 */  sb    $zero, 1($s3)
/* 00450628 010FC023 */  subu  $t8, $t0, $t7
/* 0045062C 10000016 */  b     .L00450688
/* 00450630 AE78002C */   sw    $t8, 0x2c($s3)
.L00450634:
/* 00450634 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00450638 8F868044 */  lw    $a2, %got(RO_1000CD33)($gp)
/* 0045063C 240502FF */  li    $a1, 767
/* 00450640 24070009 */  li    $a3, 9
/* 00450644 0320F809 */  jalr  $t9
/* 00450648 24C6CD33 */   addiu $a2, %lo(RO_1000CD33) # addiu $a2, $a2, -0x32cd
/* 0045064C 1000000E */  b     .L00450688
/* 00450650 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450654:
/* 00450654 2C410042 */  sltiu $at, $v0, 0x42
/* 00450658 14200005 */  bnez  $at, .L00450670
/* 0045065C 02A02025 */   move  $a0, $s5
/* 00450660 505EFFE3 */  beql  $v0, $fp, .L004505F0
/* 00450664 8E6F0028 */   lw    $t7, 0x28($s3)
/* 00450668 1000FFF2 */  b     .L00450634
/* 0045066C 00000000 */   nop   
.L00450670:
/* 00450670 5055FFD9 */  beql  $v0, $s5, .L004505D8
/* 00450674 8E6C0028 */   lw    $t4, 0x28($s3)
/* 00450678 5056FFE4 */  beql  $v0, $s6, .L0045060C
/* 0045067C 8E6C0028 */   lw    $t4, 0x28($s3)
/* 00450680 1000FFEC */  b     .L00450634
/* 00450684 00000000 */   nop   
.L00450688:
/* 00450688 A2770020 */  sb    $s7, 0x20($s3)
/* 0045068C 100000A8 */  b     .L00450930
/* 00450690 AE600028 */   sw    $zero, 0x28($s3)
.L00450694:
/* 00450694 56F00033 */  bnel  $s7, $s0, .L00450764
/* 00450698 92790020 */   lbu   $t9, 0x20($s3)
/* 0045069C 10000020 */  b     .L00450720
/* 004506A0 92620020 */   lbu   $v0, 0x20($s3)
/* 004506A4 8E690028 */  lw    $t1, 0x28($s3)
.L004506A8:
/* 004506A8 8E4E002C */  lw    $t6, 0x2c($s2)
/* 004506AC 8D2D0020 */  lw    $t5, 0x20($t1)
/* 004506B0 01AE6021 */  addu  $t4, $t5, $t6
/* 004506B4 10000027 */  b     .L00450754
/* 004506B8 AE6C002C */   sw    $t4, 0x2c($s3)
/* 004506BC 8E6A0028 */  lw    $t2, 0x28($s3)
.L004506C0:
/* 004506C0 8E59002C */  lw    $t9, 0x2c($s2)
/* 004506C4 8D480020 */  lw    $t0, 0x20($t2)
/* 004506C8 03285823 */  subu  $t3, $t9, $t0
/* 004506CC 10000021 */  b     .L00450754
/* 004506D0 AE6B002C */   sw    $t3, 0x2c($s3)
/* 004506D4 8E780028 */  lw    $t8, 0x28($s3)
.L004506D8:
/* 004506D8 8E6F002C */  lw    $t7, 0x2c($s3)
/* 004506DC 8F090020 */  lw    $t1, 0x20($t8)
/* 004506E0 01E90019 */  multu $t7, $t1
/* 004506E4 00006812 */  mflo  $t5
/* 004506E8 AE6D002C */  sw    $t5, 0x2c($s3)
/* 004506EC 8E4C002C */  lw    $t4, 0x2c($s2)
/* 004506F0 A2600001 */  sb    $zero, 1($s3)
/* 004506F4 01AC5021 */  addu  $t2, $t5, $t4
/* 004506F8 10000016 */  b     .L00450754
/* 004506FC AE6A002C */   sw    $t2, 0x2c($s3)
.L00450700:
/* 00450700 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00450704 8F868044 */  lw    $a2, %got(RO_1000CD2A)($gp)
/* 00450708 2405030C */  li    $a1, 780
/* 0045070C 24070009 */  li    $a3, 9
/* 00450710 0320F809 */  jalr  $t9
/* 00450714 24C6CD2A */   addiu $a2, %lo(RO_1000CD2A) # addiu $a2, $a2, -0x32d6
/* 00450718 1000000E */  b     .L00450754
/* 0045071C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450720:
/* 00450720 2C410042 */  sltiu $at, $v0, 0x42
/* 00450724 14200005 */  bnez  $at, .L0045073C
/* 00450728 02A02025 */   move  $a0, $s5
/* 0045072C 505EFFE4 */  beql  $v0, $fp, .L004506C0
/* 00450730 8E6A0028 */   lw    $t2, 0x28($s3)
/* 00450734 1000FFF2 */  b     .L00450700
/* 00450738 00000000 */   nop   
.L0045073C:
/* 0045073C 5055FFDA */  beql  $v0, $s5, .L004506A8
/* 00450740 8E690028 */   lw    $t1, 0x28($s3)
/* 00450744 5056FFE4 */  beql  $v0, $s6, .L004506D8
/* 00450748 8E780028 */   lw    $t8, 0x28($s3)
/* 0045074C 1000FFEC */  b     .L00450700
/* 00450750 00000000 */   nop   
.L00450754:
/* 00450754 A2770020 */  sb    $s7, 0x20($s3)
/* 00450758 10000075 */  b     .L00450930
/* 0045075C AE600028 */   sw    $zero, 0x28($s3)
/* 00450760 92790020 */  lbu   $t9, 0x20($s3)
.L00450764:
/* 00450764 16D90018 */  bne   $s6, $t9, .L004507C8
/* 00450768 00000000 */   nop   
/* 0045076C 8E6B0028 */  lw    $t3, 0x28($s3)
/* 00450770 8E68002C */  lw    $t0, 0x2c($s3)
/* 00450774 8D780020 */  lw    $t8, 0x20($t3)
/* 00450778 01180019 */  multu $t0, $t8
/* 0045077C 00007812 */  mflo  $t7
/* 00450780 AE6F002C */  sw    $t7, 0x2c($s3)
/* 00450784 92490020 */  lbu   $t1, 0x20($s2)
/* 00450788 56A90007 */  bnel  $s5, $t1, .L004507A8
/* 0045078C 8E4B0028 */   lw    $t3, 0x28($s2)
/* 00450790 8E4E0028 */  lw    $t6, 0x28($s2)
/* 00450794 8DCC0020 */  lw    $t4, 0x20($t6)
/* 00450798 01EC5021 */  addu  $t2, $t7, $t4
/* 0045079C 10000006 */  b     .L004507B8
/* 004507A0 AE6A002C */   sw    $t2, 0x2c($s3)
/* 004507A4 8E4B0028 */  lw    $t3, 0x28($s2)
.L004507A8:
/* 004507A8 8E79002C */  lw    $t9, 0x2c($s3)
/* 004507AC 8D680020 */  lw    $t0, 0x20($t3)
/* 004507B0 0328C023 */  subu  $t8, $t9, $t0
/* 004507B4 AE78002C */  sw    $t8, 0x2c($s3)
.L004507B8:
/* 004507B8 AE600028 */  sw    $zero, 0x28($s3)
/* 004507BC A2600001 */  sb    $zero, 1($s3)
/* 004507C0 1000005B */  b     .L00450930
/* 004507C4 A2770020 */   sb    $s7, 0x20($s3)
.L004507C8:
/* 004507C8 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 004507CC 96640008 */  lhu   $a0, 8($s3)
/* 004507D0 0320F809 */  jalr  $t9
/* 004507D4 00000000 */   nop   
/* 004507D8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004507DC 00408825 */  move  $s1, $v0
/* 004507E0 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 004507E4 91EF0000 */  lbu   $t7, ($t7)
/* 004507E8 55E00222 */  bnezl $t7, .L00451074
/* 004507EC 8FBF0044 */   lw    $ra, 0x44($sp)
/* 004507F0 92630020 */  lbu   $v1, 0x20($s3)
/* 004507F4 2401001D */  li    $at, 29
/* 004507F8 53C3000D */  beql  $fp, $v1, .L00450830
/* 004507FC 92500020 */   lbu   $s0, 0x20($s2)
/* 00450800 5061000B */  beql  $v1, $at, .L00450830
/* 00450804 92500020 */   lbu   $s0, 0x20($s2)
/* 00450808 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 0045080C 92440020 */  lbu   $a0, 0x20($s2)
/* 00450810 92450001 */  lbu   $a1, 1($s2)
/* 00450814 8E660028 */  lw    $a2, 0x28($s3)
/* 00450818 8E470028 */  lw    $a3, 0x28($s2)
/* 0045081C 0320F809 */  jalr  $t9
/* 00450820 AFA20010 */   sw    $v0, 0x10($sp)
/* 00450824 10000041 */  b     .L0045092C
/* 00450828 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0045082C 92500020 */  lbu   $s0, 0x20($s2)
.L00450830:
/* 00450830 1603002A */  bne   $s0, $v1, .L004508DC
/* 00450834 00000000 */   nop   
/* 00450838 12B00003 */  beq   $s5, $s0, .L00450848
/* 0045083C 02A02025 */   move  $a0, $s5
/* 00450840 17D00009 */  bne   $fp, $s0, .L00450868
/* 00450844 2E090060 */   sltiu $t1, $s0, 0x60
.L00450848:
/* 00450848 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 0045084C 92450001 */  lbu   $a1, 1($s2)
/* 00450850 8E660028 */  lw    $a2, 0x28($s3)
/* 00450854 8E470028 */  lw    $a3, 0x28($s2)
/* 00450858 0320F809 */  jalr  $t9
/* 0045085C AFB10010 */   sw    $s1, 0x10($sp)
/* 00450860 10000032 */  b     .L0045092C
/* 00450864 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450868:
/* 00450868 11200009 */  beqz  $t1, .L00450890
/* 0045086C 02002025 */   move  $a0, $s0
/* 00450870 8F8C8044 */  lw    $t4, %got(D_10010B68)($gp)
/* 00450874 00107143 */  sra   $t6, $s0, 5
/* 00450878 000E6880 */  sll   $t5, $t6, 2
/* 0045087C 258C0B68 */  addiu $t4, %lo(D_10010B68) # addiu $t4, $t4, 0xb68
/* 00450880 018D5021 */  addu  $t2, $t4, $t5
/* 00450884 8D4B0000 */  lw    $t3, ($t2)
/* 00450888 020BC804 */  sllv  $t9, $t3, $s0
/* 0045088C 2B290000 */  slti  $t1, $t9, 0
.L00450890:
/* 00450890 1120000A */  beqz  $t1, .L004508BC
/* 00450894 00000000 */   nop   
/* 00450898 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 0045089C 2404005B */  li    $a0, 91
/* 004508A0 92450001 */  lbu   $a1, 1($s2)
/* 004508A4 8E660028 */  lw    $a2, 0x28($s3)
/* 004508A8 8E470028 */  lw    $a3, 0x28($s2)
/* 004508AC 0320F809 */  jalr  $t9
/* 004508B0 AFB10010 */   sw    $s1, 0x10($sp)
/* 004508B4 1000001D */  b     .L0045092C
/* 004508B8 8FBC003C */   lw    $gp, 0x3c($sp)
.L004508BC:
/* 004508BC 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 004508C0 92450001 */  lbu   $a1, 1($s2)
/* 004508C4 8E660028 */  lw    $a2, 0x28($s3)
/* 004508C8 8E470028 */  lw    $a3, 0x28($s2)
/* 004508CC 0320F809 */  jalr  $t9
/* 004508D0 AFB10010 */   sw    $s1, 0x10($sp)
/* 004508D4 10000015 */  b     .L0045092C
/* 004508D8 8FBC003C */   lw    $gp, 0x3c($sp)
.L004508DC:
/* 004508DC 12B00003 */  beq   $s5, $s0, .L004508EC
/* 004508E0 03C02025 */   move  $a0, $fp
/* 004508E4 17D00009 */  bne   $fp, $s0, .L0045090C
/* 004508E8 00000000 */   nop   
.L004508EC:
/* 004508EC 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 004508F0 92450001 */  lbu   $a1, 1($s2)
/* 004508F4 8E660028 */  lw    $a2, 0x28($s3)
/* 004508F8 8E470028 */  lw    $a3, 0x28($s2)
/* 004508FC 0320F809 */  jalr  $t9
/* 00450900 AFB10010 */   sw    $s1, 0x10($sp)
/* 00450904 10000009 */  b     .L0045092C
/* 00450908 8FBC003C */   lw    $gp, 0x3c($sp)
.L0045090C:
/* 0045090C 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 00450910 2404001D */  li    $a0, 29
/* 00450914 92450001 */  lbu   $a1, 1($s2)
/* 00450918 8E660028 */  lw    $a2, 0x28($s3)
/* 0045091C 8E470028 */  lw    $a3, 0x28($s2)
/* 00450920 0320F809 */  jalr  $t9
/* 00450924 AFB10010 */   sw    $s1, 0x10($sp)
/* 00450928 8FBC003C */  lw    $gp, 0x3c($sp)
.L0045092C:
/* 0045092C AE710028 */  sw    $s1, 0x28($s3)
.L00450930:
/* 00450930 96580006 */  lhu   $t8, 6($s2)
/* 00450934 8E4F0024 */  lw    $t7, 0x24($s2)
/* 00450938 02402025 */  move  $a0, $s2
/* 0045093C A5F80006 */  sh    $t8, 6($t7)
/* 00450940 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 00450944 8E450024 */  lw    $a1, 0x24($s2)
/* 00450948 0320F809 */  jalr  $t9
/* 0045094C 00A08025 */   move  $s0, $a1
/* 00450950 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450954 02002025 */  move  $a0, $s0
/* 00450958 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0045095C 0320F809 */  jalr  $t9
/* 00450960 00000000 */   nop   
/* 00450964 1000010D */  b     .L00450D9C
/* 00450968 8FBC003C */   lw    $gp, 0x3c($sp)
.L0045096C:
/* 0045096C 1000007E */  b     .L00450B68
/* 00450970 92420020 */   lbu   $v0, 0x20($s2)
/* 00450974 2401001A */  li    $at, 26
.L00450978:
/* 00450978 14610009 */  bne   $v1, $at, .L004509A0
/* 0045097C 00000000 */   nop   
/* 00450980 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00450984 92440001 */  lbu   $a0, 1($s2)
/* 00450988 8E65002C */  lw    $a1, 0x2c($s3)
/* 0045098C 0320F809 */  jalr  $t9
/* 00450990 8E46002C */   lw    $a2, 0x2c($s2)
/* 00450994 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450998 10000084 */  b     .L00450BAC
/* 0045099C 305400FF */   andi  $s4, $v0, 0xff
.L004509A0:
/* 004509A0 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 004509A4 92440001 */  lbu   $a0, 1($s2)
/* 004509A8 8E65002C */  lw    $a1, 0x2c($s3)
/* 004509AC 0320F809 */  jalr  $t9
/* 004509B0 8E46002C */   lw    $a2, 0x2c($s2)
/* 004509B4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004509B8 1000007C */  b     .L00450BAC
/* 004509BC 305400FF */   andi  $s4, $v0, 0xff
.L004509C0:
/* 004509C0 16E30009 */  bne   $s7, $v1, .L004509E8
/* 004509C4 00000000 */   nop   
/* 004509C8 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 004509CC 92440001 */  lbu   $a0, 1($s2)
/* 004509D0 8E65002C */  lw    $a1, 0x2c($s3)
/* 004509D4 0320F809 */  jalr  $t9
/* 004509D8 8E46002C */   lw    $a2, 0x2c($s2)
/* 004509DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004509E0 10000072 */  b     .L00450BAC
/* 004509E4 305400FF */   andi  $s4, $v0, 0xff
.L004509E8:
/* 004509E8 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 004509EC 92440001 */  lbu   $a0, 1($s2)
/* 004509F0 8E65002C */  lw    $a1, 0x2c($s3)
/* 004509F4 0320F809 */  jalr  $t9
/* 004509F8 8E46002C */   lw    $a2, 0x2c($s2)
/* 004509FC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450A00 1000006A */  b     .L00450BAC
/* 00450A04 305400FF */   andi  $s4, $v0, 0xff
.L00450A08:
/* 00450A08 16E3000A */  bne   $s7, $v1, .L00450A34
/* 00450A0C 00000000 */   nop   
/* 00450A10 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00450A14 8E4E0028 */  lw    $t6, 0x28($s2)
/* 00450A18 92440001 */  lbu   $a0, 1($s2)
/* 00450A1C 8E65002C */  lw    $a1, 0x2c($s3)
/* 00450A20 0320F809 */  jalr  $t9
/* 00450A24 8DC60020 */   lw    $a2, 0x20($t6)
/* 00450A28 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450A2C 1000005F */  b     .L00450BAC
/* 00450A30 305400FF */   andi  $s4, $v0, 0xff
.L00450A34:
/* 00450A34 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 00450A38 8E4C0028 */  lw    $t4, 0x28($s2)
/* 00450A3C 92440001 */  lbu   $a0, 1($s2)
/* 00450A40 8E65002C */  lw    $a1, 0x2c($s3)
/* 00450A44 0320F809 */  jalr  $t9
/* 00450A48 8D860020 */   lw    $a2, 0x20($t4)
/* 00450A4C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450A50 10000056 */  b     .L00450BAC
/* 00450A54 305400FF */   andi  $s4, $v0, 0xff
.L00450A58:
/* 00450A58 1461000A */  bne   $v1, $at, .L00450A84
/* 00450A5C 00000000 */   nop   
/* 00450A60 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00450A64 8E4D0028 */  lw    $t5, 0x28($s2)
/* 00450A68 92440001 */  lbu   $a0, 1($s2)
/* 00450A6C 8E65002C */  lw    $a1, 0x2c($s3)
/* 00450A70 0320F809 */  jalr  $t9
/* 00450A74 8DA60020 */   lw    $a2, 0x20($t5)
/* 00450A78 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450A7C 1000004B */  b     .L00450BAC
/* 00450A80 305400FF */   andi  $s4, $v0, 0xff
.L00450A84:
/* 00450A84 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 00450A88 8E4A0028 */  lw    $t2, 0x28($s2)
/* 00450A8C 92440001 */  lbu   $a0, 1($s2)
/* 00450A90 8E65002C */  lw    $a1, 0x2c($s3)
/* 00450A94 0320F809 */  jalr  $t9
/* 00450A98 8D460020 */   lw    $a2, 0x20($t2)
/* 00450A9C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450AA0 10000042 */  b     .L00450BAC
/* 00450AA4 305400FF */   andi  $s4, $v0, 0xff
.L00450AA8:
/* 00450AA8 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 00450AAC 8E4B0028 */  lw    $t3, 0x28($s2)
/* 00450AB0 92440001 */  lbu   $a0, 1($s2)
/* 00450AB4 8E46002C */  lw    $a2, 0x2c($s2)
/* 00450AB8 0320F809 */  jalr  $t9
/* 00450ABC 8D650020 */   lw    $a1, 0x20($t3)
/* 00450AC0 10400003 */  beqz  $v0, .L00450AD0
/* 00450AC4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00450AC8 10000038 */  b     .L00450BAC
/* 00450ACC 32B400FF */   andi  $s4, $s5, 0xff
.L00450AD0:
/* 00450AD0 92790020 */  lbu   $t9, 0x20($s3)
/* 00450AD4 56F9000F */  bnel  $s7, $t9, .L00450B14
/* 00450AD8 8E4F0028 */   lw    $t7, 0x28($s2)
/* 00450ADC 8E480028 */  lw    $t0, 0x28($s2)
/* 00450AE0 8E58002C */  lw    $t8, 0x2c($s2)
/* 00450AE4 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00450AE8 8D090020 */  lw    $t1, 0x20($t0)
/* 00450AEC 00002025 */  move  $a0, $zero
/* 00450AF0 8E65002C */  lw    $a1, 0x2c($s3)
/* 00450AF4 01380019 */  multu $t1, $t8
/* 00450AF8 00003012 */  mflo  $a2
/* 00450AFC 0320F809 */  jalr  $t9
/* 00450B00 00000000 */   nop   
/* 00450B04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450B08 10000028 */  b     .L00450BAC
/* 00450B0C 305400FF */   andi  $s4, $v0, 0xff
/* 00450B10 8E4F0028 */  lw    $t7, 0x28($s2)
.L00450B14:
/* 00450B14 8E4C002C */  lw    $t4, 0x2c($s2)
/* 00450B18 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 00450B1C 8DEE0020 */  lw    $t6, 0x20($t7)
/* 00450B20 00002025 */  move  $a0, $zero
/* 00450B24 8E65002C */  lw    $a1, 0x2c($s3)
/* 00450B28 01CC0019 */  multu $t6, $t4
/* 00450B2C 00003012 */  mflo  $a2
/* 00450B30 0320F809 */  jalr  $t9
/* 00450B34 00000000 */   nop   
/* 00450B38 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450B3C 1000001B */  b     .L00450BAC
/* 00450B40 305400FF */   andi  $s4, $v0, 0xff
.L00450B44:
/* 00450B44 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00450B48 8F868044 */  lw    $a2, %got(RO_1000CD21)($gp)
/* 00450B4C 02A02025 */  move  $a0, $s5
/* 00450B50 2405033B */  li    $a1, 827
/* 00450B54 24070009 */  li    $a3, 9
/* 00450B58 0320F809 */  jalr  $t9
/* 00450B5C 24C6CD21 */   addiu $a2, %lo(RO_1000CD21) # addiu $a2, $a2, -0x32df
/* 00450B60 10000012 */  b     .L00450BAC
/* 00450B64 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450B68:
/* 00450B68 2C410038 */  sltiu $at, $v0, 0x38
/* 00450B6C 14200007 */  bnez  $at, .L00450B8C
/* 00450B70 00000000 */   nop   
/* 00450B74 1056FFCC */  beq   $v0, $s6, .L00450AA8
/* 00450B78 00000000 */   nop   
/* 00450B7C 105EFFB6 */  beq   $v0, $fp, .L00450A58
/* 00450B80 2401001A */   li    $at, 26
/* 00450B84 1000FFEF */  b     .L00450B44
/* 00450B88 00000000 */   nop   
.L00450B8C:
/* 00450B8C 1055FF9E */  beq   $v0, $s5, .L00450A08
/* 00450B90 2401001A */   li    $at, 26
/* 00450B94 5041FF78 */  beql  $v0, $at, .L00450978
/* 00450B98 2401001A */   li    $at, 26
/* 00450B9C 1057FF88 */  beq   $v0, $s7, .L004509C0
/* 00450BA0 00000000 */   nop   
/* 00450BA4 1000FFE7 */  b     .L00450B44
/* 00450BA8 00000000 */   nop   
.L00450BAC:
/* 00450BAC 5680007C */  bnezl $s4, .L00450DA0
/* 00450BB0 93A90063 */   lbu   $t1, 0x63($sp)
/* 00450BB4 A3B50063 */  sb    $s5, 0x63($sp)
/* 00450BB8 10000059 */  b     .L00450D20
/* 00450BBC 92420020 */   lbu   $v0, 0x20($s2)
/* 00450BC0 926D0020 */  lbu   $t5, 0x20($s3)
.L00450BC4:
/* 00450BC4 2401001A */  li    $at, 26
/* 00450BC8 55A10007 */  bnel  $t5, $at, .L00450BE8
/* 00450BCC 8E68002C */   lw    $t0, 0x2c($s3)
/* 00450BD0 8E6A002C */  lw    $t2, 0x2c($s3)
/* 00450BD4 8E4B002C */  lw    $t3, 0x2c($s2)
/* 00450BD8 014BC821 */  addu  $t9, $t2, $t3
/* 00450BDC 10000061 */  b     .L00450D64
/* 00450BE0 AE79002C */   sw    $t9, 0x2c($s3)
/* 00450BE4 8E68002C */  lw    $t0, 0x2c($s3)
.L00450BE8:
/* 00450BE8 8E49002C */  lw    $t1, 0x2c($s2)
/* 00450BEC 0109C023 */  subu  $t8, $t0, $t1
/* 00450BF0 1000005C */  b     .L00450D64
/* 00450BF4 AE78002C */   sw    $t8, 0x2c($s3)
/* 00450BF8 926F0020 */  lbu   $t7, 0x20($s3)
.L00450BFC:
/* 00450BFC 56EF0007 */  bnel  $s7, $t7, .L00450C1C
/* 00450C00 8E6A002C */   lw    $t2, 0x2c($s3)
/* 00450C04 8E6E002C */  lw    $t6, 0x2c($s3)
/* 00450C08 8E4C002C */  lw    $t4, 0x2c($s2)
/* 00450C0C 01CC6821 */  addu  $t5, $t6, $t4
/* 00450C10 10000054 */  b     .L00450D64
/* 00450C14 AE6D002C */   sw    $t5, 0x2c($s3)
/* 00450C18 8E6A002C */  lw    $t2, 0x2c($s3)
.L00450C1C:
/* 00450C1C 8E4B002C */  lw    $t3, 0x2c($s2)
/* 00450C20 014BC823 */  subu  $t9, $t2, $t3
/* 00450C24 1000004F */  b     .L00450D64
/* 00450C28 AE79002C */   sw    $t9, 0x2c($s3)
.L00450C2C:
/* 00450C2C 92680020 */  lbu   $t0, 0x20($s3)
/* 00450C30 56E80008 */  bnel  $s7, $t0, .L00450C54
/* 00450C34 8E4D0028 */   lw    $t5, 0x28($s2)
/* 00450C38 8E580028 */  lw    $t8, 0x28($s2)
/* 00450C3C 8E69002C */  lw    $t1, 0x2c($s3)
/* 00450C40 8F0F0020 */  lw    $t7, 0x20($t8)
/* 00450C44 012F7021 */  addu  $t6, $t1, $t7
/* 00450C48 10000046 */  b     .L00450D64
/* 00450C4C AE6E002C */   sw    $t6, 0x2c($s3)
/* 00450C50 8E4D0028 */  lw    $t5, 0x28($s2)
.L00450C54:
/* 00450C54 8E6C002C */  lw    $t4, 0x2c($s3)
/* 00450C58 8DAA0020 */  lw    $t2, 0x20($t5)
/* 00450C5C 018A5823 */  subu  $t3, $t4, $t2
/* 00450C60 10000040 */  b     .L00450D64
/* 00450C64 AE6B002C */   sw    $t3, 0x2c($s3)
/* 00450C68 92790020 */  lbu   $t9, 0x20($s3)
.L00450C6C:
/* 00450C6C 2401001A */  li    $at, 26
/* 00450C70 57210008 */  bnel  $t9, $at, .L00450C94
/* 00450C74 8E4D0028 */   lw    $t5, 0x28($s2)
/* 00450C78 8E580028 */  lw    $t8, 0x28($s2)
/* 00450C7C 8E68002C */  lw    $t0, 0x2c($s3)
/* 00450C80 8F090020 */  lw    $t1, 0x20($t8)
/* 00450C84 01097821 */  addu  $t7, $t0, $t1
/* 00450C88 10000036 */  b     .L00450D64
/* 00450C8C AE6F002C */   sw    $t7, 0x2c($s3)
/* 00450C90 8E4D0028 */  lw    $t5, 0x28($s2)
.L00450C94:
/* 00450C94 8E6E002C */  lw    $t6, 0x2c($s3)
/* 00450C98 8DAC0020 */  lw    $t4, 0x20($t5)
/* 00450C9C 01CC5023 */  subu  $t2, $t6, $t4
/* 00450CA0 10000030 */  b     .L00450D64
/* 00450CA4 AE6A002C */   sw    $t2, 0x2c($s3)
/* 00450CA8 926B0020 */  lbu   $t3, 0x20($s3)
.L00450CAC:
/* 00450CAC 56EB000B */  bnel  $s7, $t3, .L00450CDC
/* 00450CB0 8E4E0028 */   lw    $t6, 0x28($s2)
/* 00450CB4 8E590028 */  lw    $t9, 0x28($s2)
/* 00450CB8 8E48002C */  lw    $t0, 0x2c($s2)
/* 00450CBC 8E6F002C */  lw    $t7, 0x2c($s3)
/* 00450CC0 8F380020 */  lw    $t8, 0x20($t9)
/* 00450CC4 03080019 */  multu $t8, $t0
/* 00450CC8 00004812 */  mflo  $t1
/* 00450CCC 01E96821 */  addu  $t5, $t7, $t1
/* 00450CD0 10000024 */  b     .L00450D64
/* 00450CD4 AE6D002C */   sw    $t5, 0x2c($s3)
/* 00450CD8 8E4E0028 */  lw    $t6, 0x28($s2)
.L00450CDC:
/* 00450CDC 8E4A002C */  lw    $t2, 0x2c($s2)
/* 00450CE0 8E79002C */  lw    $t9, 0x2c($s3)
/* 00450CE4 8DCC0020 */  lw    $t4, 0x20($t6)
/* 00450CE8 018A0019 */  multu $t4, $t2
/* 00450CEC 00005812 */  mflo  $t3
/* 00450CF0 032BC023 */  subu  $t8, $t9, $t3
/* 00450CF4 1000001B */  b     .L00450D64
/* 00450CF8 AE78002C */   sw    $t8, 0x2c($s3)
.L00450CFC:
/* 00450CFC 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00450D00 8F868044 */  lw    $a2, %got(RO_1000CD18)($gp)
/* 00450D04 02A02025 */  move  $a0, $s5
/* 00450D08 24050351 */  li    $a1, 849
/* 00450D0C 24070009 */  li    $a3, 9
/* 00450D10 0320F809 */  jalr  $t9
/* 00450D14 24C6CD18 */   addiu $a2, %lo(RO_1000CD18) # addiu $a2, $a2, -0x32e8
/* 00450D18 10000012 */  b     .L00450D64
/* 00450D1C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450D20:
/* 00450D20 2C410038 */  sltiu $at, $v0, 0x38
/* 00450D24 14200007 */  bnez  $at, .L00450D44
/* 00450D28 00000000 */   nop   
/* 00450D2C 5056FFDF */  beql  $v0, $s6, .L00450CAC
/* 00450D30 926B0020 */   lbu   $t3, 0x20($s3)
/* 00450D34 505EFFCD */  beql  $v0, $fp, .L00450C6C
/* 00450D38 92790020 */   lbu   $t9, 0x20($s3)
/* 00450D3C 1000FFEF */  b     .L00450CFC
/* 00450D40 00000000 */   nop   
.L00450D44:
/* 00450D44 1055FFB9 */  beq   $v0, $s5, .L00450C2C
/* 00450D48 2401001A */   li    $at, 26
/* 00450D4C 5041FF9D */  beql  $v0, $at, .L00450BC4
/* 00450D50 926D0020 */   lbu   $t5, 0x20($s3)
/* 00450D54 5057FFA9 */  beql  $v0, $s7, .L00450BFC
/* 00450D58 926F0020 */   lbu   $t7, 0x20($s3)
/* 00450D5C 1000FFE7 */  b     .L00450CFC
/* 00450D60 00000000 */   nop   
.L00450D64:
/* 00450D64 96480006 */  lhu   $t0, 6($s2)
/* 00450D68 8E4F0024 */  lw    $t7, 0x24($s2)
/* 00450D6C 02402025 */  move  $a0, $s2
/* 00450D70 A5E80006 */  sh    $t0, 6($t7)
/* 00450D74 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 00450D78 8E450024 */  lw    $a1, 0x24($s2)
/* 00450D7C 0320F809 */  jalr  $t9
/* 00450D80 00A08025 */   move  $s0, $a1
/* 00450D84 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450D88 02002025 */  move  $a0, $s0
/* 00450D8C 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 00450D90 0320F809 */  jalr  $t9
/* 00450D94 00000000 */   nop   
/* 00450D98 8FBC003C */  lw    $gp, 0x3c($sp)
.L00450D9C:
/* 00450D9C 93A90063 */  lbu   $t1, 0x63($sp)
.L00450DA0:
/* 00450DA0 552000AF */  bnezl $t1, .L00451060
/* 00450DA4 93AD0063 */   lbu   $t5, 0x63($sp)
/* 00450DA8 568000AD */  bnezl $s4, .L00451060
/* 00450DAC 93AD0063 */   lbu   $t5, 0x63($sp)
/* 00450DB0 8E710024 */  lw    $s1, 0x24($s3)
/* 00450DB4 24010004 */  li    $at, 4
/* 00450DB8 92220000 */  lbu   $v0, ($s1)
/* 00450DBC 504100A7 */  beql  $v0, $at, .L0045105C
/* 00450DC0 02209825 */   move  $s3, $s1
/* 00450DC4 92500020 */  lbu   $s0, 0x20($s2)
/* 00450DC8 16D00009 */  bne   $s6, $s0, .L00450DF0
/* 00450DCC 2E0D0040 */   sltiu $t5, $s0, 0x40
/* 00450DD0 8F9983DC */  lw    $t9, %call16(ixaovfw)($gp)
/* 00450DD4 02402025 */  move  $a0, $s2
/* 00450DD8 02202825 */  move  $a1, $s1
/* 00450DDC 0320F809 */  jalr  $t9
/* 00450DE0 8E460028 */   lw    $a2, 0x28($s2)
/* 00450DE4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450DE8 1000003A */  b     .L00450ED4
/* 00450DEC 305400FF */   andi  $s4, $v0, 0xff
.L00450DF0:
/* 00450DF0 11A00009 */  beqz  $t5, .L00450E18
/* 00450DF4 2401001A */   li    $at, 26
/* 00450DF8 8F8A8044 */  lw    $t2, %got(D_10010B74)($gp)
/* 00450DFC 00107143 */  sra   $t6, $s0, 5
/* 00450E00 000E6080 */  sll   $t4, $t6, 2
/* 00450E04 254A0B74 */  addiu $t2, %lo(D_10010B74) # addiu $t2, $t2, 0xb74
/* 00450E08 014CC821 */  addu  $t9, $t2, $t4
/* 00450E0C 8F2B0000 */  lw    $t3, ($t9)
/* 00450E10 020BC004 */  sllv  $t8, $t3, $s0
/* 00450E14 2B0D0000 */  slti  $t5, $t8, 0
.L00450E18:
/* 00450E18 15A00009 */  bnez  $t5, .L00450E40
/* 00450E1C 02002825 */   move  $a1, $s0
/* 00450E20 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 00450E24 92440001 */  lbu   $a0, 1($s2)
/* 00450E28 02203025 */  move  $a2, $s1
/* 00450E2C 0320F809 */  jalr  $t9
/* 00450E30 8E470028 */   lw    $a3, 0x28($s2)
/* 00450E34 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450E38 10000026 */  b     .L00450ED4
/* 00450E3C 305400FF */   andi  $s4, $v0, 0xff
.L00450E40:
/* 00450E40 16010013 */  bne   $s0, $at, .L00450E90
/* 00450E44 00000000 */   nop   
/* 00450E48 16A20009 */  bne   $s5, $v0, .L00450E70
/* 00450E4C 00000000 */   nop   
/* 00450E50 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 00450E54 00002025 */  move  $a0, $zero
/* 00450E58 8E250020 */  lw    $a1, 0x20($s1)
/* 00450E5C 0320F809 */  jalr  $t9
/* 00450E60 8E46002C */   lw    $a2, 0x2c($s2)
/* 00450E64 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450E68 1000001A */  b     .L00450ED4
/* 00450E6C 305400FF */   andi  $s4, $v0, 0xff
.L00450E70:
/* 00450E70 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 00450E74 92440001 */  lbu   $a0, 1($s2)
/* 00450E78 8E250020 */  lw    $a1, 0x20($s1)
/* 00450E7C 0320F809 */  jalr  $t9
/* 00450E80 8E46002C */   lw    $a2, 0x2c($s2)
/* 00450E84 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450E88 10000012 */  b     .L00450ED4
/* 00450E8C 305400FF */   andi  $s4, $v0, 0xff
.L00450E90:
/* 00450E90 16A20009 */  bne   $s5, $v0, .L00450EB8
/* 00450E94 00000000 */   nop   
/* 00450E98 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00450E9C 00002025 */  move  $a0, $zero
/* 00450EA0 8E250020 */  lw    $a1, 0x20($s1)
/* 00450EA4 0320F809 */  jalr  $t9
/* 00450EA8 8E46002C */   lw    $a2, 0x2c($s2)
/* 00450EAC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450EB0 10000008 */  b     .L00450ED4
/* 00450EB4 305400FF */   andi  $s4, $v0, 0xff
.L00450EB8:
/* 00450EB8 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 00450EBC 92440001 */  lbu   $a0, 1($s2)
/* 00450EC0 8E250020 */  lw    $a1, 0x20($s1)
/* 00450EC4 0320F809 */  jalr  $t9
/* 00450EC8 8E46002C */   lw    $a2, 0x2c($s2)
/* 00450ECC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450ED0 305400FF */  andi  $s4, $v0, 0xff
.L00450ED4:
/* 00450ED4 304F00FF */  andi  $t7, $v0, 0xff
/* 00450ED8 55E00061 */  bnezl $t7, .L00451060
/* 00450EDC 93AD0063 */   lbu   $t5, 0x63($sp)
/* 00450EE0 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00450EE4 8E690024 */  lw    $t1, 0x24($s3)
/* 00450EE8 A3B50063 */  sb    $s5, 0x63($sp)
/* 00450EEC 0320F809 */  jalr  $t9
/* 00450EF0 95240008 */   lhu   $a0, 8($t1)
/* 00450EF4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450EF8 00408825 */  move  $s1, $v0
/* 00450EFC 8F8E8B20 */  lw     $t6, %got(outofmem)($gp)
/* 00450F00 91CE0000 */  lbu   $t6, ($t6)
/* 00450F04 55C0005B */  bnezl $t6, .L00451074
/* 00450F08 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00450F0C 92500020 */  lbu   $s0, 0x20($s2)
/* 00450F10 02402025 */  move  $a0, $s2
/* 00450F14 16D00008 */  bne   $s6, $s0, .L00450F38
/* 00450F18 2E0A0040 */   sltiu $t2, $s0, 0x40
/* 00450F1C 8F9983E8 */  lw    $t9, %call16(ixafold)($gp)
/* 00450F20 8E650024 */  lw    $a1, 0x24($s3)
/* 00450F24 8E460028 */  lw    $a2, 0x28($s2)
/* 00450F28 0320F809 */  jalr  $t9
/* 00450F2C 00403825 */   move  $a3, $v0
/* 00450F30 10000039 */  b     .L00451018
/* 00450F34 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450F38:
/* 00450F38 11400009 */  beqz  $t2, .L00450F60
/* 00450F3C 02002025 */   move  $a0, $s0
/* 00450F40 8F8B8044 */  lw    $t3, %got(D_10010B74)($gp)
/* 00450F44 00106143 */  sra   $t4, $s0, 5
/* 00450F48 000CC880 */  sll   $t9, $t4, 2
/* 00450F4C 256B0B74 */  addiu $t3, %lo(D_10010B74) # addiu $t3, $t3, 0xb74
/* 00450F50 0179C021 */  addu  $t8, $t3, $t9
/* 00450F54 8F080000 */  lw    $t0, ($t8)
/* 00450F58 02086804 */  sllv  $t5, $t0, $s0
/* 00450F5C 29AA0000 */  slti  $t2, $t5, 0
.L00450F60:
/* 00450F60 15400009 */  bnez  $t2, .L00450F88
/* 00450F64 00000000 */   nop   
/* 00450F68 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 00450F6C 92450001 */  lbu   $a1, 1($s2)
/* 00450F70 8E660024 */  lw    $a2, 0x24($s3)
/* 00450F74 8E470028 */  lw    $a3, 0x28($s2)
/* 00450F78 0320F809 */  jalr  $t9
/* 00450F7C AFB10010 */   sw    $s1, 0x10($sp)
/* 00450F80 10000025 */  b     .L00451018
/* 00450F84 8FBC003C */   lw    $gp, 0x3c($sp)
.L00450F88:
/* 00450F88 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 00450F8C 02202025 */  move  $a0, $s1
/* 00450F90 8E650024 */  lw    $a1, 0x24($s3)
/* 00450F94 0320F809 */  jalr  $t9
/* 00450F98 00000000 */   nop   
/* 00450F9C AE200014 */  sw    $zero, 0x14($s1)
/* 00450FA0 92490020 */  lbu   $t1, 0x20($s2)
/* 00450FA4 2401001A */  li    $at, 26
/* 00450FA8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00450FAC 5521000F */  bnel  $t1, $at, .L00450FEC
/* 00450FB0 922F0000 */   lbu   $t7, ($s1)
/* 00450FB4 922E0000 */  lbu   $t6, ($s1)
/* 00450FB8 56AE0007 */  bnel  $s5, $t6, .L00450FD8
/* 00450FBC 8E380020 */   lw    $t8, 0x20($s1)
/* 00450FC0 8E2C0020 */  lw    $t4, 0x20($s1)
/* 00450FC4 8E4B002C */  lw    $t3, 0x2c($s2)
/* 00450FC8 018BC823 */  subu  $t9, $t4, $t3
/* 00450FCC 10000012 */  b     .L00451018
/* 00450FD0 AE390020 */   sw    $t9, 0x20($s1)
/* 00450FD4 8E380020 */  lw    $t8, 0x20($s1)
.L00450FD8:
/* 00450FD8 8E48002C */  lw    $t0, 0x2c($s2)
/* 00450FDC 03086823 */  subu  $t5, $t8, $t0
/* 00450FE0 1000000D */  b     .L00451018
/* 00450FE4 AE2D0020 */   sw    $t5, 0x20($s1)
/* 00450FE8 922F0000 */  lbu   $t7, ($s1)
.L00450FEC:
/* 00450FEC 56AF0007 */  bnel  $s5, $t7, .L0045100C
/* 00450FF0 8E2C0020 */   lw    $t4, 0x20($s1)
/* 00450FF4 8E2A0020 */  lw    $t2, 0x20($s1)
/* 00450FF8 8E49002C */  lw    $t1, 0x2c($s2)
/* 00450FFC 01497021 */  addu  $t6, $t2, $t1
/* 00451000 10000005 */  b     .L00451018
/* 00451004 AE2E0020 */   sw    $t6, 0x20($s1)
/* 00451008 8E2C0020 */  lw    $t4, 0x20($s1)
.L0045100C:
/* 0045100C 8E4B002C */  lw    $t3, 0x2c($s2)
/* 00451010 018BC821 */  addu  $t9, $t4, $t3
/* 00451014 AE390020 */  sw    $t9, 0x20($s1)
.L00451018:
/* 00451018 AE710024 */  sw    $s1, 0x24($s3)
/* 0045101C 8E480024 */  lw    $t0, 0x24($s2)
/* 00451020 96580006 */  lhu   $t8, 6($s2)
/* 00451024 02402025 */  move  $a0, $s2
/* 00451028 A5180006 */  sh    $t8, 6($t0)
/* 0045102C 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 00451030 8E450024 */  lw    $a1, 0x24($s2)
/* 00451034 0320F809 */  jalr  $t9
/* 00451038 00A08025 */   move  $s0, $a1
/* 0045103C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00451040 02002025 */  move  $a0, $s0
/* 00451044 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 00451048 0320F809 */  jalr  $t9
/* 0045104C 00000000 */   nop   
/* 00451050 10000002 */  b     .L0045105C
/* 00451054 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00451058 02209825 */  move  $s3, $s1
.L0045105C:
/* 0045105C 93AD0063 */  lbu   $t5, 0x63($sp)
.L00451060:
/* 00451060 55A00004 */  bnezl $t5, .L00451074
/* 00451064 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00451068 5280FBE8 */  beql  $s4, $zero, .L0045000C
/* 0045106C 92630020 */   lbu   $v1, 0x20($s3)
.L00451070:
/* 00451070 8FBF0044 */  lw    $ra, 0x44($sp)
.L00451074:
/* 00451074 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00451078 8FB10020 */  lw    $s1, 0x20($sp)
/* 0045107C 8FB20024 */  lw    $s2, 0x24($sp)
/* 00451080 8FB30028 */  lw    $s3, 0x28($sp)
/* 00451084 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00451088 8FB50030 */  lw    $s5, 0x30($sp)
/* 0045108C 8FB60034 */  lw    $s6, 0x34($sp)
/* 00451090 8FB70038 */  lw    $s7, 0x38($sp)
/* 00451094 8FBE0040 */  lw    $fp, 0x40($sp)
/* 00451098 03E00008 */  jr    $ra
/* 0045109C 27BD0070 */   addiu $sp, $sp, 0x70
    .type mergeconst, @function
    .size mergeconst, .-mergeconst
    .end mergeconst

glabel distrlaw
    .ent distrlaw
    # 00451764 func_00451764
/* 004510A0 3C1C0FBD */  .cpload $t9
/* 004510A4 279C91F0 */  
/* 004510A8 0399E021 */  
/* 004510AC 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 004510B0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004510B4 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004510B8 AFB10024 */  sw    $s1, 0x24($sp)
/* 004510BC AFB00020 */  sw    $s0, 0x20($sp)
/* 004510C0 AFA40050 */  sw    $a0, 0x50($sp)
/* 004510C4 90AE0001 */  lbu   $t6, 1($a1)
/* 004510C8 3C018A80 */  lui   $at, 0x8a80
/* 004510CC 00A08025 */  move  $s0, $a1
/* 004510D0 2DD80020 */  sltiu $t8, $t6, 0x20
/* 004510D4 0018C823 */  negu  $t9, $t8
/* 004510D8 03215824 */  and   $t3, $t9, $at
/* 004510DC 01CB6004 */  sllv  $t4, $t3, $t6
/* 004510E0 05810171 */  bgez  $t4, .L004516A8
/* 004510E4 AFAE0038 */   sw    $t6, 0x38($sp)
/* 004510E8 90AD003E */  lbu   $t5, 0x3e($a1)
/* 004510EC 2C8E0080 */  sltiu $t6, $a0, 0x80
/* 004510F0 55A0016E */  bnezl $t5, .L004516AC
/* 004510F4 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004510F8 11C00009 */  beqz  $t6, .L00451120
/* 004510FC 24060004 */   li    $a2, 4
/* 00451100 8F8B8044 */  lw    $t3, %got(D_10010B9C)($gp)
/* 00451104 0004C143 */  sra   $t8, $a0, 5
/* 00451108 0018C880 */  sll   $t9, $t8, 2
/* 0045110C 256B0B9C */  addiu $t3, %lo(D_10010B9C) # addiu $t3, $t3, 0xb9c
/* 00451110 01797821 */  addu  $t7, $t3, $t9
/* 00451114 8DEC0000 */  lw    $t4, ($t7)
/* 00451118 008C6804 */  sllv  $t5, $t4, $a0
/* 0045111C 29AE0000 */  slti  $t6, $t5, 0
.L00451120:
/* 00451120 11C00005 */  beqz  $t6, .L00451138
/* 00451124 00000000 */   nop   
/* 00451128 92050020 */  lbu   $a1, 0x20($s0)
/* 0045112C 240A005B */  li    $t2, 91
/* 00451130 5145000D */  beql  $t2, $a1, .L00451168
/* 00451134 8E070028 */   lw    $a3, 0x28($s0)
.L00451138:
/* 00451138 14860004 */  bne   $a0, $a2, .L0045114C
/* 0045113C 240A005B */   li    $t2, 91
/* 00451140 92050020 */  lbu   $a1, 0x20($s0)
/* 00451144 2409003C */  li    $t1, 60
/* 00451148 11250006 */  beq   $t1, $a1, .L00451164
.L0045114C:
/* 0045114C 2409003C */   li    $t1, 60
/* 00451150 54890156 */  bnel  $a0, $t1, .L004516AC
/* 00451154 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00451158 92050020 */  lbu   $a1, 0x20($s0)
/* 0045115C 54C50153 */  bnel  $a2, $a1, .L004516AC
/* 00451160 8FBF002C */   lw    $ra, 0x2c($sp)
.L00451164:
/* 00451164 8E070028 */  lw    $a3, 0x28($s0)
.L00451168:
/* 00451168 24080002 */  li    $t0, 2
/* 0045116C 24060004 */  li    $a2, 4
/* 00451170 90E30000 */  lbu   $v1, ($a3)
/* 00451174 2409003C */  li    $t1, 60
/* 00451178 01031026 */  xor   $v0, $t0, $v1
/* 0045117C 2C420001 */  sltiu $v0, $v0, 1
/* 00451180 50400006 */  beql  $v0, $zero, .L0045119C
/* 00451184 8E110024 */   lw    $s1, 0x24($s0)
/* 00451188 8E0B0024 */  lw    $t3, 0x24($s0)
/* 0045118C 91790000 */  lbu   $t9, ($t3)
/* 00451190 00D91026 */  xor   $v0, $a2, $t9
/* 00451194 2C420001 */  sltiu $v0, $v0, 1
/* 00451198 8E110024 */  lw    $s1, 0x24($s0)
.L0045119C:
/* 0045119C 304400FF */  andi  $a0, $v0, 0xff
/* 004511A0 922F0000 */  lbu   $t7, ($s1)
/* 004511A4 010F1026 */  xor   $v0, $t0, $t7
/* 004511A8 2C420001 */  sltiu $v0, $v0, 1
/* 004511AC 10400003 */  beqz  $v0, .L004511BC
/* 004511B0 00000000 */   nop   
/* 004511B4 00C31026 */  xor   $v0, $a2, $v1
/* 004511B8 2C420001 */  sltiu $v0, $v0, 1
.L004511BC:
/* 004511BC 10800098 */  beqz  $a0, .L00451420
/* 004511C0 304C00FF */   andi  $t4, $v0, 0xff
/* 004511C4 92220020 */  lbu   $v0, 0x20($s1)
/* 004511C8 2C4C0080 */  sltiu $t4, $v0, 0x80
/* 004511CC 11800009 */  beqz  $t4, .L004511F4
/* 004511D0 00000000 */   nop   
/* 004511D4 8F8E8044 */  lw    $t6, %got(D_10010B8C)($gp)
/* 004511D8 00026943 */  sra   $t5, $v0, 5
/* 004511DC 000DC080 */  sll   $t8, $t5, 2
/* 004511E0 25CE0B8C */  addiu $t6, %lo(D_10010B8C) # addiu $t6, $t6, 0xb8c
/* 004511E4 01D85821 */  addu  $t3, $t6, $t8
/* 004511E8 8D790000 */  lw    $t9, ($t3)
/* 004511EC 00597804 */  sllv  $t7, $t9, $v0
/* 004511F0 29EC0000 */  slti  $t4, $t7, 0
.L004511F4:
/* 004511F4 11800003 */  beqz  $t4, .L00451204
/* 004511F8 00000000 */   nop   
/* 004511FC 5145000A */  beql  $t2, $a1, .L00451228
/* 00451200 962E0006 */   lhu   $t6, 6($s1)
.L00451204:
/* 00451204 14C20003 */  bne   $a2, $v0, .L00451214
/* 00451208 00000000 */   nop   
/* 0045120C 51250006 */  beql  $t1, $a1, .L00451228
/* 00451210 962E0006 */   lhu   $t6, 6($s1)
.L00451214:
/* 00451214 55220125 */  bnel  $t1, $v0, .L004516AC
/* 00451218 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045121C 54C50123 */  bnel  $a2, $a1, .L004516AC
/* 00451220 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00451224 962E0006 */  lhu   $t6, 6($s1)
.L00451228:
/* 00451228 24010001 */  li    $at, 1
/* 0045122C 2C580040 */  sltiu $t8, $v0, 0x40
/* 00451230 55C1011E */  bnel  $t6, $at, .L004516AC
/* 00451234 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00451238 13000009 */  beqz  $t8, .L00451260
/* 0045123C 00000000 */   nop   
/* 00451240 8F8F8044 */  lw    $t7, %got(D_10010B84)($gp)
/* 00451244 00025943 */  sra   $t3, $v0, 5
/* 00451248 000BC880 */  sll   $t9, $t3, 2
/* 0045124C 25EF0B84 */  addiu $t7, %lo(D_10010B84) # addiu $t7, $t7, 0xb84
/* 00451250 01F96821 */  addu  $t5, $t7, $t9
/* 00451254 8DAC0000 */  lw    $t4, ($t5)
/* 00451258 004C7004 */  sllv  $t6, $t4, $v0
/* 0045125C 29D80000 */  slti  $t8, $t6, 0
.L00451260:
/* 00451260 53000019 */  beql  $t8, $zero, .L004512C8
/* 00451264 8E260028 */   lw    $a2, 0x28($s1)
/* 00451268 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 0045126C 8FA40038 */  lw    $a0, 0x38($sp)
/* 00451270 8E25002C */  lw    $a1, 0x2c($s1)
/* 00451274 0320F809 */  jalr  $t9
/* 00451278 8CE60020 */   lw    $a2, 0x20($a3)
/* 0045127C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00451280 14400109 */  bnez  $v0, .L004516A8
/* 00451284 240A005B */   li    $t2, 91
/* 00451288 8E0F0028 */  lw    $t7, 0x28($s0)
/* 0045128C 8E190024 */  lw    $t9, 0x24($s0)
/* 00451290 AF2F0028 */  sw    $t7, 0x28($t9)
/* 00451294 8E0C0028 */  lw    $t4, 0x28($s0)
/* 00451298 8E110024 */  lw    $s1, 0x24($s0)
/* 0045129C 8D8E0020 */  lw    $t6, 0x20($t4)
/* 004512A0 8E2D002C */  lw    $t5, 0x2c($s1)
/* 004512A4 01AE0019 */  multu $t5, $t6
/* 004512A8 00005812 */  mflo  $t3
/* 004512AC AE0B002C */  sw    $t3, 0x2c($s0)
/* 004512B0 92380020 */  lbu   $t8, 0x20($s1)
/* 004512B4 AE000028 */  sw    $zero, 0x28($s0)
/* 004512B8 A2180020 */  sb    $t8, 0x20($s0)
/* 004512BC 100000FA */  b     .L004516A8
/* 004512C0 A22A0020 */   sb    $t2, 0x20($s1)
/* 004512C4 8E260028 */  lw    $a2, 0x28($s1)
.L004512C8:
/* 004512C8 90CF0000 */  lbu   $t7, ($a2)
/* 004512CC 550F0027 */  bnel  $t0, $t7, .L0045136C
/* 004512D0 8E260024 */   lw    $a2, 0x24($s1)
/* 004512D4 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 004512D8 8FA40038 */  lw    $a0, 0x38($sp)
/* 004512DC 0320F809 */  jalr  $t9
/* 004512E0 00000000 */   nop   
/* 004512E4 144000F0 */  bnez  $v0, .L004516A8
/* 004512E8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004512EC 8E190028 */  lw    $t9, 0x28($s0)
/* 004512F0 97240008 */  lhu   $a0, 8($t9)
/* 004512F4 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 004512F8 0320F809 */  jalr  $t9
/* 004512FC 00000000 */   nop   
/* 00451300 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00451304 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 00451308 918C0000 */  lbu   $t4, ($t4)
/* 0045130C 558000E7 */  bnezl $t4, .L004516AC
/* 00451310 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00451314 8E0D0024 */  lw    $t5, 0x24($s0)
/* 00451318 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 0045131C 92040020 */  lbu   $a0, 0x20($s0)
/* 00451320 8DA60028 */  lw    $a2, 0x28($t5)
/* 00451324 AFA20048 */  sw    $v0, 0x48($sp)
/* 00451328 AFA20010 */  sw    $v0, 0x10($sp)
/* 0045132C 92050001 */  lbu   $a1, 1($s0)
/* 00451330 0320F809 */  jalr  $t9
/* 00451334 8E070028 */   lw    $a3, 0x28($s0)
/* 00451338 8E0E0028 */  lw    $t6, 0x28($s0)
/* 0045133C 8E0B0024 */  lw    $t3, 0x24($s0)
/* 00451340 8FA30048 */  lw    $v1, 0x48($sp)
/* 00451344 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00451348 AD6E0028 */  sw    $t6, 0x28($t3)
/* 0045134C 8E110024 */  lw    $s1, 0x24($s0)
/* 00451350 AE030028 */  sw    $v1, 0x28($s0)
/* 00451354 92020020 */  lbu   $v0, 0x20($s0)
/* 00451358 92380020 */  lbu   $t8, 0x20($s1)
/* 0045135C A2180020 */  sb    $t8, 0x20($s0)
/* 00451360 100000D1 */  b     .L004516A8
/* 00451364 A2220020 */   sb    $v0, 0x20($s1)
/* 00451368 8E260024 */  lw    $a2, 0x24($s1)
.L0045136C:
/* 0045136C 90CF0000 */  lbu   $t7, ($a2)
/* 00451370 550F00CE */  bnel  $t0, $t7, .L004516AC
/* 00451374 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00451378 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 0045137C 8FA40038 */  lw    $a0, 0x38($sp)
/* 00451380 0320F809 */  jalr  $t9
/* 00451384 00000000 */   nop   
/* 00451388 144000C7 */  bnez  $v0, .L004516A8
/* 0045138C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00451390 8E190028 */  lw    $t9, 0x28($s0)
/* 00451394 97240008 */  lhu   $a0, 8($t9)
/* 00451398 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0045139C 0320F809 */  jalr  $t9
/* 004513A0 00000000 */   nop   
/* 004513A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004513A8 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 004513AC 918C0000 */  lbu   $t4, ($t4)
/* 004513B0 558000BE */  bnezl $t4, .L004516AC
/* 004513B4 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004513B8 8E0D0024 */  lw    $t5, 0x24($s0)
/* 004513BC 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 004513C0 92040020 */  lbu   $a0, 0x20($s0)
/* 004513C4 8DA60024 */  lw    $a2, 0x24($t5)
/* 004513C8 AFA20048 */  sw    $v0, 0x48($sp)
/* 004513CC AFA20010 */  sw    $v0, 0x10($sp)
/* 004513D0 92050001 */  lbu   $a1, 1($s0)
/* 004513D4 0320F809 */  jalr  $t9
/* 004513D8 8E070028 */   lw    $a3, 0x28($s0)
/* 004513DC 8E110024 */  lw    $s1, 0x24($s0)
/* 004513E0 8FA30048 */  lw    $v1, 0x48($sp)
/* 004513E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004513E8 8E2E0028 */  lw    $t6, 0x28($s1)
/* 004513EC AE2E0024 */  sw    $t6, 0x24($s1)
/* 004513F0 8E180024 */  lw    $t8, 0x24($s0)
/* 004513F4 8E0B0028 */  lw    $t3, 0x28($s0)
/* 004513F8 AF0B0028 */  sw    $t3, 0x28($t8)
/* 004513FC 8E110024 */  lw    $s1, 0x24($s0)
/* 00451400 920F0020 */  lbu   $t7, 0x20($s0)
/* 00451404 92220020 */  lbu   $v0, 0x20($s1)
/* 00451408 A22F0020 */  sb    $t7, 0x20($s1)
/* 0045140C 8E190024 */  lw    $t9, 0x24($s0)
/* 00451410 AE030024 */  sw    $v1, 0x24($s0)
/* 00451414 A2020020 */  sb    $v0, 0x20($s0)
/* 00451418 100000A3 */  b     .L004516A8
/* 0045141C AE190028 */   sw    $t9, 0x28($s0)
.L00451420:
/* 00451420 518000A2 */  beql  $t4, $zero, .L004516AC
/* 00451424 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00451428 90E20020 */  lbu   $v0, 0x20($a3)
/* 0045142C 2401007D */  li    $at, 125
/* 00451430 2C4D0040 */  sltiu $t5, $v0, 0x40
/* 00451434 11A00009 */  beqz  $t5, .L0045145C
/* 00451438 00000000 */   nop   
/* 0045143C 8F988044 */  lw    $t8, %got(D_10010B7C)($gp)
/* 00451440 00027143 */  sra   $t6, $v0, 5
/* 00451444 000E5880 */  sll   $t3, $t6, 2
/* 00451448 27180B7C */  addiu $t8, %lo(D_10010B7C) # addiu $t8, $t8, 0xb7c
/* 0045144C 030B7821 */  addu  $t7, $t8, $t3
/* 00451450 8DF90000 */  lw    $t9, ($t7)
/* 00451454 00596004 */  sllv  $t4, $t9, $v0
/* 00451458 298D0000 */  slti  $t5, $t4, 0
.L0045145C:
/* 0045145C 15A00003 */  bnez  $t5, .L0045146C
/* 00451460 00000000 */   nop   
/* 00451464 14410003 */  bne   $v0, $at, .L00451474
/* 00451468 00000000 */   nop   
.L0045146C:
/* 0045146C 5145000A */  beql  $t2, $a1, .L00451498
/* 00451470 94F80006 */   lhu   $t8, 6($a3)
.L00451474:
/* 00451474 14C20003 */  bne   $a2, $v0, .L00451484
/* 00451478 00000000 */   nop   
/* 0045147C 51250006 */  beql  $t1, $a1, .L00451498
/* 00451480 94F80006 */   lhu   $t8, 6($a3)
.L00451484:
/* 00451484 55220089 */  bnel  $t1, $v0, .L004516AC
/* 00451488 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045148C 54C50087 */  bnel  $a2, $a1, .L004516AC
/* 00451490 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00451494 94F80006 */  lhu   $t8, 6($a3)
.L00451498:
/* 00451498 24010001 */  li    $at, 1
/* 0045149C 2C4B0040 */  sltiu $t3, $v0, 0x40
/* 004514A0 57010082 */  bnel  $t8, $at, .L004516AC
/* 004514A4 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004514A8 11600009 */  beqz  $t3, .L004514D0
/* 004514AC 00000000 */   nop   
/* 004514B0 8F8C8044 */  lw    $t4, %got(D_10010B84)($gp)
/* 004514B4 00027943 */  sra   $t7, $v0, 5
/* 004514B8 000FC880 */  sll   $t9, $t7, 2
/* 004514BC 258C0B84 */  addiu $t4, %lo(D_10010B84) # addiu $t4, $t4, 0xb84
/* 004514C0 01997021 */  addu  $t6, $t4, $t9
/* 004514C4 8DCD0000 */  lw    $t5, ($t6)
/* 004514C8 004DC004 */  sllv  $t8, $t5, $v0
/* 004514CC 2B0B0000 */  slti  $t3, $t8, 0
.L004514D0:
/* 004514D0 5160001E */  beql  $t3, $zero, .L0045154C
/* 004514D4 8CEE0024 */   lw    $t6, 0x24($a3)
/* 004514D8 8F998690 */  lw    $t9, %call16(mpyovfw)($gp)
/* 004514DC 8FA40038 */  lw    $a0, 0x38($sp)
/* 004514E0 8CE5002C */  lw    $a1, 0x2c($a3)
/* 004514E4 0320F809 */  jalr  $t9
/* 004514E8 8E260020 */   lw    $a2, 0x20($s1)
/* 004514EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004514F0 1440006D */  bnez  $v0, .L004516A8
/* 004514F4 240A005B */   li    $t2, 91
/* 004514F8 8E070028 */  lw    $a3, 0x28($s0)
/* 004514FC 8CEC0024 */  lw    $t4, 0x24($a3)
/* 00451500 ACEC0028 */  sw    $t4, 0x28($a3)
/* 00451504 8E0E0028 */  lw    $t6, 0x28($s0)
/* 00451508 8E190024 */  lw    $t9, 0x24($s0)
/* 0045150C ADD90024 */  sw    $t9, 0x24($t6)
/* 00451510 8E070028 */  lw    $a3, 0x28($s0)
/* 00451514 8E180024 */  lw    $t8, 0x24($s0)
/* 00451518 8CED002C */  lw    $t5, 0x2c($a3)
/* 0045151C 8F0F0020 */  lw    $t7, 0x20($t8)
/* 00451520 01AF0019 */  multu $t5, $t7
/* 00451524 00005812 */  mflo  $t3
/* 00451528 AE0B002C */  sw    $t3, 0x2c($s0)
/* 0045152C 90EC0020 */  lbu   $t4, 0x20($a3)
/* 00451530 A20C0020 */  sb    $t4, 0x20($s0)
/* 00451534 A0EA0020 */  sb    $t2, 0x20($a3)
/* 00451538 8E190028 */  lw    $t9, 0x28($s0)
/* 0045153C AE000028 */  sw    $zero, 0x28($s0)
/* 00451540 10000059 */  b     .L004516A8
/* 00451544 AE190024 */   sw    $t9, 0x24($s0)
/* 00451548 8CEE0024 */  lw    $t6, 0x24($a3)
.L0045154C:
/* 0045154C AFAE0030 */  sw    $t6, 0x30($sp)
/* 00451550 91CD0000 */  lbu   $t5, ($t6)
/* 00451554 550D0027 */  bnel  $t0, $t5, .L004515F4
/* 00451558 8CF80028 */   lw    $t8, 0x28($a3)
/* 0045155C 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 00451560 8FA40038 */  lw    $a0, 0x38($sp)
/* 00451564 02203025 */  move  $a2, $s1
/* 00451568 0320F809 */  jalr  $t9
/* 0045156C 01C03825 */   move  $a3, $t6
/* 00451570 1440004D */  bnez  $v0, .L004516A8
/* 00451574 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00451578 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0045157C 8E0F0028 */  lw    $t7, 0x28($s0)
/* 00451580 0320F809 */  jalr  $t9
/* 00451584 95E40008 */   lhu   $a0, 8($t7)
/* 00451588 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045158C 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 00451590 916B0000 */  lbu   $t3, ($t3)
/* 00451594 55600045 */  bnezl $t3, .L004516AC
/* 00451598 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045159C 8E0C0028 */  lw    $t4, 0x28($s0)
/* 004515A0 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 004515A4 92040020 */  lbu   $a0, 0x20($s0)
/* 004515A8 8D870024 */  lw    $a3, 0x24($t4)
/* 004515AC AFA20048 */  sw    $v0, 0x48($sp)
/* 004515B0 AFA20010 */  sw    $v0, 0x10($sp)
/* 004515B4 92050001 */  lbu   $a1, 1($s0)
/* 004515B8 0320F809 */  jalr  $t9
/* 004515BC 8E060024 */   lw    $a2, 0x24($s0)
/* 004515C0 8E190024 */  lw    $t9, 0x24($s0)
/* 004515C4 8E0E0028 */  lw    $t6, 0x28($s0)
/* 004515C8 8FA30048 */  lw    $v1, 0x48($sp)
/* 004515CC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004515D0 ADD90024 */  sw    $t9, 0x24($t6)
/* 004515D4 8E070028 */  lw    $a3, 0x28($s0)
/* 004515D8 AE030024 */  sw    $v1, 0x24($s0)
/* 004515DC 92020020 */  lbu   $v0, 0x20($s0)
/* 004515E0 90ED0020 */  lbu   $t5, 0x20($a3)
/* 004515E4 A20D0020 */  sb    $t5, 0x20($s0)
/* 004515E8 1000002F */  b     .L004516A8
/* 004515EC A0E20020 */   sb    $v0, 0x20($a3)
/* 004515F0 8CF80028 */  lw    $t8, 0x28($a3)
.L004515F4:
/* 004515F4 AFB80030 */  sw    $t8, 0x30($sp)
/* 004515F8 930B0000 */  lbu   $t3, ($t8)
/* 004515FC 550B002B */  bnel  $t0, $t3, .L004516AC
/* 00451600 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00451604 8F9983D8 */  lw    $t9, %call16(binaryovfw)($gp)
/* 00451608 8FA40038 */  lw    $a0, 0x38($sp)
/* 0045160C 02203025 */  move  $a2, $s1
/* 00451610 0320F809 */  jalr  $t9
/* 00451614 03003825 */   move  $a3, $t8
/* 00451618 14400023 */  bnez  $v0, .L004516A8
/* 0045161C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00451620 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00451624 8E0C0028 */  lw    $t4, 0x28($s0)
/* 00451628 0320F809 */  jalr  $t9
/* 0045162C 95840008 */   lhu   $a0, 8($t4)
/* 00451630 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00451634 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 00451638 93390000 */  lbu   $t9, ($t9)
/* 0045163C 5720001B */  bnezl $t9, .L004516AC
/* 00451640 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00451644 8E0E0028 */  lw    $t6, 0x28($s0)
/* 00451648 8F9983E4 */  lw    $t9, %call16(binaryfold)($gp)
/* 0045164C 92040020 */  lbu   $a0, 0x20($s0)
/* 00451650 8DC70028 */  lw    $a3, 0x28($t6)
/* 00451654 AFA20048 */  sw    $v0, 0x48($sp)
/* 00451658 AFA20010 */  sw    $v0, 0x10($sp)
/* 0045165C 92050001 */  lbu   $a1, 1($s0)
/* 00451660 0320F809 */  jalr  $t9
/* 00451664 8E060024 */   lw    $a2, 0x24($s0)
/* 00451668 8E070028 */  lw    $a3, 0x28($s0)
/* 0045166C 8FA30048 */  lw    $v1, 0x48($sp)
/* 00451670 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00451674 8CED0024 */  lw    $t5, 0x24($a3)
/* 00451678 ACED0028 */  sw    $t5, 0x28($a3)
/* 0045167C 8E0B0028 */  lw    $t3, 0x28($s0)
/* 00451680 8E180024 */  lw    $t8, 0x24($s0)
/* 00451684 AD780024 */  sw    $t8, 0x24($t3)
/* 00451688 8E070028 */  lw    $a3, 0x28($s0)
/* 0045168C 920F0020 */  lbu   $t7, 0x20($s0)
/* 00451690 90E20020 */  lbu   $v0, 0x20($a3)
/* 00451694 A0EF0020 */  sb    $t7, 0x20($a3)
/* 00451698 8E0C0028 */  lw    $t4, 0x28($s0)
/* 0045169C AE030028 */  sw    $v1, 0x28($s0)
/* 004516A0 A2020020 */  sb    $v0, 0x20($s0)
/* 004516A4 AE0C0024 */  sw    $t4, 0x24($s0)
.L004516A8:
/* 004516A8 8FBF002C */  lw    $ra, 0x2c($sp)
.L004516AC:
/* 004516AC 8FB00020 */  lw    $s0, 0x20($sp)
/* 004516B0 8FB10024 */  lw    $s1, 0x24($sp)
/* 004516B4 03E00008 */  jr    $ra
/* 004516B8 27BD0050 */   addiu $sp, $sp, 0x50
    .type distrlaw, @function
    .size distrlaw, .-distrlaw
    .end distrlaw
)"");



/* 
00451764 func_00451764
00452DAC constarith
*/
void reduceixa(struct Expression *ixa) {
    int datasize;

    datasize = ixa->data.isop.datasize;
    if (datasize < 0) {
        datasize = -datasize;
    }
    if (datasize > 1) {
        ixa->data.isop.op2 = binopwithconst(Umpy, ixa->data.isop.op2, datasize);

        ixa->data.isop.datasize /= datasize;
    }
}

/* 
00451764 func_00451764
00452DAC constarith
*/
bool func_00451764(Uopcode opc, struct Expression **expr) {
    bool sp53 = false;
    bool sp52; // op1
    bool sp51; // op2
    struct Expression *sp4C;
    struct Expression *sp28;
    struct Expression *expr2;
    struct Expression *expr_s0;

    if (outofmem) {
        return false;
    }

    expr_s0 = *expr;
    switch (expr_s0->type) {
        case isvar:
        case issvar:
        case isrconst:
            sp53 = 0;
            break;

        case islda:
            sp53 = 1;
            break;

        case isilda:
            sp53 = 0;
            break;

        case isconst:
            if (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt) {
                sp53 = 1;
            } else {
                sp53 = 0;
            }
            break;

        case isop:
            sp53 = 0;
            if (expr_s0->unk5 == 1) {
                return false;
            }

            switch (expr_s0->data.isop.opc) {
                case Uadd:
                case Usub:
                case Umpy:
                case Uixa:
                case Uint:
                case Uuni:
                    func_00451764(expr_s0->data.isop.opc, &expr_s0->data.isop.op2);
                    linearize(*expr);
                    sp51 = func_00451764(expr_s0->data.isop.opc, &expr_s0->data.isop.op1);
                    if (outofmem) {
                        return false;
                    }

                    if (expr_s0->data.isop.opc == Udec || expr_s0->data.isop.opc == Uinc) {
                        if (sp51) {
                            if (unaryovfw(*expr)) {
                                sp53 = 0;
                                if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                    ovfwwarning(expr_s0->data.isop.opc);
                                }
                            } else {
                                sp53 = 1;
                                unaryfold(*expr);
                            }
                        } else {
                            sp53 = 0;
                            mergeconst(*expr);
                            if (outofmem) {
                                return false;
                            }

                            if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                                reduceixa(expr_s0->data.isop.op1);
                            }
                        }
                    } else if (expr_s0->data.isop.opc == Uint || expr_s0->data.isop.opc == Uuni) {
                        sp53 = 0;
                    } else if (sp51 && expr_s0->data.isop.op2->type == isconst) {
                        if (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt) {
                            if (expr_s0->data.isop.opc == Uixa) {
                                if (ixaovfw(*expr, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr)) {
                                    sp53 = 0;
                                    ovfwwarning(Uixa);
                                } else {
                                    sp53 = 1;
                                    ixafold(*expr, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                                }
                            } else if (expr_s0->data.isop.op1->type == islda && expr_s0->data.isop.op2->type == islda) {
                                sp53 = 0;
                            } else if (binaryovfw(expr_s0->datatype, expr_s0->data.isop.opc, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                                sp53 = 0;
                                if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                    ovfwwarning(expr_s0->data.isop.opc);
                                }
                            } else {
                                sp53 = 1;
                                binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                            }
                        } else {
                            sp53 = 0;
                        }
                    } else if (sp51 == 0) {
                        sp53 = 0;
                        if (expr_s0->data.isop.op2->type == isconst) {
                            mergeconst(*expr);
                        }
                        if (outofmem) {
                            return false;
                        }
                        if (expr_s0->data.isop.opc != Uixa) {
                            distrlaw(opc, *expr);
                            if (outofmem) {
                                return false;
                            }
                            if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                                reduceixa(expr_s0->data.isop.op1);
                            }
                        }
                    } else {
                        sp53 = 0;
                        distrlaw(opc, *expr);
                        if (outofmem) {
                            return false;
                        }
                        if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                            reduceixa(expr_s0->data.isop.op1);
                        }
                    }
                    break;

                case Udiv:
                    if (expr_s0->datatype == Qdt || expr_s0->datatype == Rdt) {
                        func_00451764(expr_s0->data.isop.opc, &expr_s0->data.isop.op2);
                        linearize(*expr);
                        if (outofmem) {
                            return false;
                        }

                        sp53 = 0;
                        if (func_00451764(expr_s0->data.isop.opc, &expr_s0->data.isop.op1) == 0 && expr_s0->data.isop.op2->type == isconst) {
                            mergeconst(*expr);
                        }
                    } else {
                        sp51 = func_00451764(Unop, &expr_s0->data.isop.op2);
                        if (sp51 && func_00451764(Unop, &expr_s0->data.isop.op1)) {
                            if (binaryovfw(expr_s0->datatype, expr_s0->data.isop.opc, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                                sp53 = 0;
                                if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                    ovfwwarning(expr_s0->data.isop.opc);
                                }
                            } else {
                                sp53 = 1;
                                binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                            }
                        } else {
                            sp53 = 0;
                        }
                    }
                    break;

                case Uand:
                case Uior:
                    func_00451764(expr_s0->data.isop.opc, &expr_s0->data.isop.op2);
                    linearize(*expr);
                    sp52 = func_00451764(expr_s0->data.isop.opc, &expr_s0->data.isop.op1);
                    if (outofmem) {
                        return false;
                    }

                    sp28 = expr_s0->data.isop.op2;
                    if (sp52 && (sp28->type == isconst && (sp28->datatype == Adt || sp28->datatype == Hdt || sp28->datatype == Jdt || sp28->datatype == Ldt))) {
                        sp53 = 1;
                        binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, sp28, *expr);
                    } else if (sp52) {
                        switch (expr_s0->data.isop.opc) {
                            case Uand:
                                if (expr_s0->data.isop.op1->data.isconst.number.intval == 0) {
                                    sp53 = 1;
                                    decreasecount(sp28);
                                    copycoderep(*expr, expr_s0->data.isop.op1);
                                } else if (expr_s0->data.isop.op1->data.isconst.number.intval == -1) {
                                    if (sp28->count != 1) {
                                        sp53 = 0;
                                    } else {
                                        sp53 = 0;
                                        sp28->count = expr_s0->count;
                                        sp28 = expr_s0->data.isop.op2;
                                        sp4C = expr_s0->data.isop.op2;
                                        copycoderep(*expr, expr_s0->data.isop.op2);

                                        if (sp4C->type == isvar) {
                                            sp4C->var_access_list->data.var = *expr;
                                        } else if (sp4C->data.isop.opc == Uiequ ||
                                                sp4C->data.isop.opc == Uigeq ||
                                                sp4C->data.isop.opc == Uigrt ||
                                                sp4C->data.isop.opc == Uildv ||
                                                sp4C->data.isop.opc == Uileq ||
                                                sp4C->data.isop.opc == Uiles ||
                                                sp4C->data.isop.opc == Uilod ||
                                                sp4C->data.isop.opc == Uineq ||
                                                sp4C->data.isop.opc == Uirld ||
                                                sp4C->data.isop.opc == Uirlv) {
                                            sp4C->var_access_list->data.var = *expr;
                                        }

                                        delentry(sp4C);
                                    }
                                } else {
                                    sp53 = 0;
                                }
                                break;

                            case Uior:
                                if (expr_s0->data.isop.op1->data.isconst.number.intval == -1) {
                                    sp53 = 1;
                                    decreasecount(sp28);
                                    copycoderep(*expr, expr_s0->data.isop.op1);
                                } else if (expr_s0->data.isop.op1->data.isconst.number.intval == 0) {
                                    if (sp28->count != 1) {
                                        sp53 = 0;
                                    } else {
                                        sp53 = 0;
                                        sp28->count = expr_s0->count;
                                        sp28 = expr_s0->data.isop.op2;
                                        sp4C = expr_s0->data.isop.op2;
                                        copycoderep(*expr, expr_s0->data.isop.op2);
                                        if (sp4C->type == isvar) {
                                            sp4C->var_access_list->data.var = *expr;
                                        } else
                                            if (sp4C->data.isop.opc == Uiequ ||
                                                    sp4C->data.isop.opc == Uigeq ||
                                                    sp4C->data.isop.opc == Uigrt ||
                                                    sp4C->data.isop.opc == Uildv ||
                                                    sp4C->data.isop.opc == Uileq ||
                                                    sp4C->data.isop.opc == Uiles ||
                                                    sp4C->data.isop.opc == Uilod ||
                                                    sp4C->data.isop.opc == Uineq ||
                                                    sp4C->data.isop.opc == Uirld ||
                                                    sp4C->data.isop.opc == Uirlv) {
                                                sp4C->var_access_list->data.var = *expr;
                                            }
                                        delentry(sp4C);
                                    }
                                } else {
                                    sp53 = 0;
                                }
                                break;

                            default:
                                caseerror(1, 0x4DD, "uoptloc.p", 9);
                                break;
                        }
                    } else if (sp28->type == isconst && (sp28->datatype == Adt || sp28->datatype == Hdt || sp28->datatype == Jdt || sp28->datatype == Ldt)) {
                        switch (expr_s0->data.isop.opc) {
                            case Uand:
                                if (sp28->data.isconst.number.intval == 0) {
                                    sp53 = 1;
                                    decreasecount(expr_s0->data.isop.op1);
                                    copycoderep(*expr, expr_s0->data.isop.op2);
                                } else if (sp28->data.isconst.number.intval == -1) {
                                    if (expr_s0->data.isop.op1->count != 1) {
                                        sp53 = 0;
                                    } else {
                                        expr_s0->data.isop.op1->count = expr_s0->count;
                                        sp53 = 0;
                                        sp4C = expr_s0->data.isop.op1;
                                        copycoderep(*expr, expr_s0->data.isop.op1);
                                        if (sp4C->type == isvar) {
                                            sp4C->var_access_list->data.var = *expr;
                                        } else if (sp4C->data.isop.opc == Uiequ ||
                                                sp4C->data.isop.opc == Uigeq ||
                                                sp4C->data.isop.opc == Uigrt ||
                                                sp4C->data.isop.opc == Uildv ||
                                                sp4C->data.isop.opc == Uileq ||
                                                sp4C->data.isop.opc == Uiles ||
                                                sp4C->data.isop.opc == Uilod ||
                                                sp4C->data.isop.opc == Uineq ||
                                                sp4C->data.isop.opc == Uirld ||
                                                sp4C->data.isop.opc == Uirlv) {
                                            sp4C->var_access_list->data.var = *expr;
                                        }

                                        delentry(sp4C);
                                    }
                                } else {
                                    sp53 = 0;
                                }
                                break;

                            case Uior:
                                if (sp28->data.isconst.number.intval == -1) {
                                    sp53 = 1;
                                    decreasecount(expr_s0->data.isop.op1);
                                    copycoderep(*expr, expr_s0->data.isop.op2);
                                } else if (sp28->data.isconst.number.intval == 0) {
                                    if (expr_s0->data.isop.op1->count != 1) {
                                        sp53 = 0;
                                    } else {
                                        expr_s0->data.isop.op1->count = expr_s0->count;
                                        sp53 = 0;
                                        sp4C = expr_s0->data.isop.op1;
                                        copycoderep(*expr, expr_s0->data.isop.op1);
                                        if (sp4C->type == isvar) {
                                            sp4C->var_access_list->data.var = *expr;
                                        } else if (sp4C->data.isop.opc == Uiequ ||
                                                sp4C->data.isop.opc == Uigeq ||
                                                sp4C->data.isop.opc == Uigrt ||
                                                sp4C->data.isop.opc == Uildv ||
                                                sp4C->data.isop.opc == Uileq ||
                                                sp4C->data.isop.opc == Uiles ||
                                                sp4C->data.isop.opc == Uilod ||
                                                sp4C->data.isop.opc == Uineq ||
                                                sp4C->data.isop.opc == Uirld ||
                                                sp4C->data.isop.opc == Uirlv) {
                                            sp4C->var_access_list->data.var = *expr;
                                        }
                                        delentry(sp4C);
                                    }
                                } else {
                                    sp53 = 0;
                                }
                                break;

                            default:
                                caseerror(1, 0x50B, "uoptloc.p", 9);
                                break;
                        }
                    } else {
                        sp53 = 0;
                    }
                    break;

                case Udif:
                case Uequ:
                case Ugeq:
                case Ugrt:
                case Uinn:
                case Uleq:
                case Ules:
                case Umax:
                case Umin:
                case Umod:
                case Umus:
                case Uneq:
                case Urem:
                case Ushl:
                case Ushr:
                case Usign:
                case Uxor:
                    sp52 = func_00451764(Unop, &expr_s0->data.isop.op1);
                    if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op1);
                    }

                    sp51 = func_00451764(Unop, &expr_s0->data.isop.op2);
                    if (outofmem) {
                        return false;
                    }

                    if (expr_s0->data.isop.op2->type == isop && expr_s0->data.isop.op2->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op2);
                    }

                    if (sp52 && sp51 && (expr_s0->data.isop.opc != Udif && expr_s0->data.isop.opc != Uinn && expr_s0->data.isop.opc != Umus)) {
                        if (expr_s0->data.isop.op1->type == islda && expr_s0->data.isop.op2->type == islda
                                && expr_s0->data.isop.op2->data.islda_isilda.var_data.blockno != expr_s0->data.isop.op1->data.islda_isilda.var_data.blockno) {
                            sp53 = 0;
                        } else if (binaryovfw(expr_s0->datatype, expr_s0->data.isop.opc, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                            sp53 = 0;
                            if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(expr_s0->data.isop.opc);
                            }
                        } else {
                            sp53 = 1;
                            binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                        }
                    } else {
                        sp53 = 0;
                    }
                    break;

                case Uildv:
                case Uilod:
                    sp53 = 0;
                    if (func_00451764(Unop, &expr_s0->data.isop.op1)) {
                        if (expr_s0->data.isop.opc == Uilod && expr_s0->data.isop.op1->type == islda) {
                            if (expr_s0->data.isop.op1->data.islda_isilda.var_data.memtype != Smt || is_gp_relative(expr_s0->data.isop.op1->data.islda_isilda.var_data.blockno) || !dokpicopt) {
                                *expr = ilodfold(*expr);
                                return 0;
                            }
                        }
                    } else if (expr_s0->data.isop.op1->type == isop && (expr_s0->data.isop.op1->data.isop.opc == Udec || expr_s0->data.isop.op1->data.isop.opc == Uinc)) {
                        if (expr_s0->data.isop.op1->data.isop.opc == Udec) {
                            expr_s0->data.isop.datasize -= expr_s0->data.isop.op1->data.isop.datasize;
                        } else {
                            expr_s0->data.isop.datasize += expr_s0->data.isop.op1->data.isop.datasize;
                        }

                        expr2 = expr_s0->data.isop.op1;
                        expr_s0->data.isop.op1 = expr_s0->data.isop.op1->data.isop.op1;
                        expr_s0->data.isop.op1->count += 1;
                        decreasecount(expr2);
                    } else if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op1);
                    }
                    break;

                case Uirld:
                case Uirlv:
                    func_00451764(Unop, &expr_s0->data.isop.op1);
                    sp53 = 0;
                    break;

                case Ucvt:
                    if (func_00451764(Unop, &expr_s0->data.isop.op1)
                            && (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt)
                            && (expr_s0->data.isop.aux.cvtfrom == Adt || expr_s0->data.isop.aux.cvtfrom == Hdt || expr_s0->data.isop.aux.cvtfrom == Jdt || expr_s0->data.isop.aux.cvtfrom == Ldt)) {
                        if (expr_s0->data.isop.op1->type == islda) {
                            sp53 = 0;
                        } else {
                            sp53 = 1;
                            cvtfold(*expr);
                        }
                    } else {
                        sp53 = 0;
                    }
                    break;

                case Uchkn:
                case Urnd:
                case Usgs:
                case Utyp:
                    if (func_00451764(Unop, &expr_s0->data.isop.op1)) {
                        noop = 0;
                    }
                    sp53 = 0;
                    break;

                case Uabs:
                case Uchkh:
                case Uchkl:
                case Ucvtl:
                case Ulnot:
                case Uneg:
                case Unot:
                case Uodd:
                case Usqr:
                    if (func_00451764(Unop, &expr_s0->data.isop.op1)
                            && (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt)) {
                        if (unaryovfw(*expr)) {
                            sp53 = 0;
                            if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(expr_s0->data.isop.opc);
                            }
                        } else {
                            sp53 = 1;
                            unaryfold(*expr);
                        }
                    } else {
                        sp53 = 0;
                    }
                    break;

                case Udec:
                case Uinc:
                    if (func_00451764(expr_s0->data.isop.opc, &expr_s0->data.isop.op1)) {
                        if (unaryovfw(*expr)) {
                            sp53 = 0;
                            if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(expr_s0->data.isop.opc);
                            }
                        } else {
                            sp53 = 1;
                            unaryfold(*expr);
                        }
                    } else {
                        sp53 = 0;
                        mergeconst(*expr);
                        if (outofmem) {
                            return false;
                        }

                        if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                            reduceixa(expr_s0->data.isop.op1);
                        }
                    }
                    break;

                case Uadj:
                case Usqrt:
                    func_00451764(Unop, &expr_s0->data.isop.op1);
                    sp53 = 0;
                    break;

                case Uiequ:
                case Uigeq:
                case Uigrt:
                case Uileq:
                case Uiles:
                case Uineq:
                    func_00451764(Unop, &expr_s0->data.isop.op1);
                    if (outofmem) {
                        return false;
                    }

                    if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op1);
                    }
                    func_00451764(Unop, &expr_s0->data.isop.op2);
                    if (outofmem) {
                        return false;
                    }

                    if (expr_s0->data.isop.op2->type == isop && expr_s0->data.isop.op2->data.isop.opc == Uixa) {
                        reduceixa(expr_s0->data.isop.op2);
                    } else {
                        sp53 = 0;
                    }
                    break;

                default:
                    caseerror(1, 0x464, "uoptloc.p", 9);
                    break;
            }

            if (expr_s0->type == isop) {
                expr_s0->unk5 = 1;
            }
            break;

        case dumped:
        default:
            caseerror(1, 0x459, "uoptloc.p", 9);
            break;
    }

    return sp53;
}

/* 
00456310 func_00456310
*/
void constarith(void) {
    bool sp52; // s1
    int oldpage = curlocpg;
    int oldline = curlocln;
    struct Statement *stmt;

    curlocpg = 0;
    curlocln = 0;

    for (stmt = curgraphnode->stat_head; stmt != NULL; stmt = stmt->next) {
        switch (stmt->opc) {
            case Ustr:
                func_00451764(Unop, &stmt->expr->data.isvar_issvar.assigned_value);
                if (stmt->expr->data.isvar_issvar.assigned_value->type == isop && stmt->expr->data.isvar_issvar.assigned_value->data.isop.opc == Uixa) {
                    reduceixa(stmt->expr->data.isvar_issvar.assigned_value);
                }
                break;

            default:
                func_00451764(Unop, &stmt->expr);
                if (stmt->expr->type == isop && stmt->expr->data.isop.opc == Uixa) {
                    reduceixa(stmt->expr);
                }
                if (stmt->opc == Uistr || stmt->opc == Uistv || stmt->opc == Umov || stmt->opc == Umovv) {
                    func_00451764(Unop, &stmt->u.store.expr);
                    if (stmt->opc == Umov || stmt->opc == Umovv) {
                        if (stmt->u.store.expr->type == isop && stmt->u.store.expr->data.isop.opc == Uixa) {
                            reduceixa(stmt->u.store.expr);
                        }
                    }
                    if (stmt->opc == Uistr && stmt->expr->type == islda && (stmt->expr->data.islda_isilda.var_data.memtype != Smt || is_gp_relative(stmt->expr->data.islda_isilda.var_data.blockno, stmt->expr) || !dokpicopt)) {
                        istrfold(stmt);
                    }
                    
                }
                break;

            case Uaent:
            case Ubgnb:
            case Ucia:
            case Uclab:
            case Uclbd:
            case Uctrl:
            case Ucubd:
            case Ucup:
            case Udef:
            case Udup:
            case Uendb:
            case Uicuf:
            case Ulab:
            case Ulbdy:
            case Ulbgn:
            case Ulend:
            case Ultrm:
            case Umst:
            case Unop:
            case Uret:
            case Ustep:
            case Uswp:
            case Uujp:
            case Uxpar:
            case Urcuf:
                break;

            case Ufjp:
            case Utjp:
                if (func_00451764(Unop, &stmt->expr)) {
                    if (stmt->expr->type == isconst) {
                        if ((stmt->opc == Ufjp && stmt->expr->data.isconst.number.intval != false) || (stmt->opc == Utjp && stmt->expr->data.isconst.number.intval == false)) {
                            stmt->opc = Unop;
                            curgraphnode->successors->graphnode->predecessors = curgraphnode->successors->graphnode->predecessors->next;
                            curgraphnode->successors = curgraphnode->successors->next;
                        } else {
                            stmt->opc = Uujp;
                            filteringout = true;
                        }
                    }
                }
                break;

            case Uchkt:
                if (func_00451764(Unop, &stmt->expr) && stmt->expr->data.isconst.number.intval == true) {
                    stmt->opc = Unop;
                }
                break;


            case Utpeq:
            case Utpgt:
            case Utple:
            case Utplt:
            case Utpne:
                if (func_00451764(Unop, &stmt->expr) && func_00451764(Unop, &stmt->u.trap.expr2)) {
                    if (stmt->u.trap.dtype == Qdt || stmt->u.trap.dtype == Rdt || stmt->u.trap.dtype == Sdt) {
                        break;
                    }

                    switch (stmt->opc) {
                        case Utpeq:
                            sp52 = stmt->u.trap.expr2->data.isconst.number.intval == stmt->expr->data.isconst.number.intval;
                            break;

                        // not sure why they wrote it like this -_-
                        case Utpge:
                            if (stmt->u.trap.dtype == Jdt) {
                                sp52 = !(stmt->expr->data.isconst.number.intval < stmt->u.trap.expr2->data.isconst.number.intval);
                            } else {
                                sp52 = !(stmt->expr->data.isconst.number.uintval < stmt->u.trap.expr2->data.isconst.number.uintval);
                            }
                            break;

                        case Utpgt:
                            if (stmt->u.trap.dtype == Jdt) {
                                sp52 = stmt->u.trap.expr2->data.isconst.number.intval < stmt->expr->data.isconst.number.intval;
                            } else {
                                sp52 = stmt->u.trap.expr2->data.isconst.number.uintval < stmt->expr->data.isconst.number.uintval;
                            }
                            break;

                        case Utple:
                            if (stmt->u.trap.dtype == Jdt) {
                                sp52 = !(stmt->u.trap.expr2->data.isconst.number.intval < stmt->expr->data.isconst.number.intval);
                            } else {
                                sp52 = !(stmt->u.trap.expr2->data.isconst.number.uintval < stmt->expr->data.isconst.number.uintval);
                            }
                            break;

                        case Utplt:
                            if (stmt->u.trap.dtype == Jdt) {
                                sp52 = stmt->expr->data.isconst.number.intval < stmt->u.trap.expr2->data.isconst.number.intval;
                            } else {
                                sp52 = stmt->expr->data.isconst.number.uintval < stmt->u.trap.expr2->data.isconst.number.uintval;
                            }
                            break;

                        case Utpne:
                            sp52 = stmt->u.trap.expr2->data.isconst.number.intval != stmt->expr->data.isconst.number.intval;
                            break;

                        default:
                            caseerror(1, 1541, "uoptloc.p", 9);
                            break;
                    }

                    if (sp52) {
                        boundswarning();
                    } else {
                        stmt->opc = Unop;
                    }
                    
                }
                break;

            case Uloc:
                if (stmt->opc == Uloc) {
                    curlocpg = stmt->u.loc.page;
                    curlocln = stmt->u.loc.line;
                }
                break;
        }

        if (outofmem) {
            return;
        }
    }

    curlocpg = oldpage;
    curlocln = oldline;
}
