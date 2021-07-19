#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptitab.h"
#include "uoptcopy.h"
#include "uoptinput.h"
#include "uoptppss.h"
#include "uoptcontrolflow.h"
#include "debug.h"


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
)"");

/* 
0041550C func_0041550C
0044FF6C mergeconst
004510A0 distrlaw
00451764 func_00451764
*/
bool binaryovfw(Datatype dtype, Uopcode opc, struct Expression *left, struct Expression *right) {
    bool overflow;

    switch (opc) {
        case Uadd:
            if (left->type == islda && right->type == islda) {
                overflow = true;
            } else if (left->type == islda) {
                overflow = addovfw(Adt, left->data.islda_isilda.addr, right->data.isconst.number.intval);
            } else if (right->type == islda) {
                overflow = addovfw(Adt, right->data.islda_isilda.addr, left->data.isconst.number.intval);
            } else {
                overflow = addovfw(dtype, left->data.isconst.number.intval, right->data.isconst.number.intval);
            }
            break;

        case Usub:
            if (left->type == islda && right->type == islda) {
                overflow = false;
            } else if (left->type == islda) {
                overflow = subovfw(Adt, left->data.islda_isilda.addr, right->data.isconst.number.intval);
            } else if (right->type == islda) {
                overflow = subovfw(Adt, left->data.isconst.number.intval, right->data.islda_isilda.addr);
            } else {
                overflow = subovfw(dtype, left->data.isconst.number.intval, right->data.isconst.number.intval);
            }
            break;

        case Umpy:
            overflow = mpyovfw(dtype, left->data.isconst.number.intval, right->data.isconst.number.intval);
            break;

        case Udiv:
        case Urem:
            if (right->data.isconst.number.intval == 0) {
                overflow = true;
            } else if (dtype == Idt || dtype == Jdt) {
                overflow = left->data.isconst.number.intval == 0x80000000 && right->data.isconst.number.intval == -1;
            }
            break;

        case Umod:
            overflow = right->data.isconst.number.intval == 0;
            break;

        case Ushl:
        case Ushr:
            overflow = right->data.isconst.number.intval < 0 || right->data.isconst.number.intval >= 32;
            break;

        case Usign:
            overflow = left->data.isconst.number.intval == 0x80000000 && right->data.isconst.number.intval >= 0;
            break;

        case Uand:
        case Ubsub:
        case Udif:
        case Uequ:
        case Ugeq:
        case Ugrt:
        case Uinn:
        case Uint:
        case Uior:
        case Uleq:
        case Ules:
        case Umax:
        case Umin:
        case Umus:
        case Uneq:
        case Uuni:
        case Uxor:
            overflow = false;
            break;

        default:
            caseerror(1, 59, "uoptloc.p", 9);
            overflow = false; // idk
            break;
    }

    return overflow;
}

/* 
0041550C func_0041550C
0044FF6C mergeconst
00451764 func_00451764
*/
bool ixaovfw(struct Expression *expr, struct Expression *left, struct Expression *right) {
    unsigned int address;

    if (left->type == islda) {
        address = left->data.islda_isilda.addr;
    } else {
        address = left->data.isconst.number.intval;
    }
    if (mpyovfw(expr->datatype, right->data.isconst.number.intval, expr->data.isop.datasize)) {
        return true;
    } else {
        return addovfw(Adt, address, right->data.isconst.number.intval * expr->data.isop.datasize);
    }
}

__asm__(R""(
.set noat
.set noreorder

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
)"");

/* 
0041550C func_0041550C
0044FF6C mergeconst
004510A0 distrlaw
00451764 func_00451764
*/
void binaryfold(Uopcode opc, Datatype dtype, struct Expression *left, struct Expression *right, struct Expression *parent) {
    int value;
    bool sp23;
    int rightval;
    int leftval;

    if (left->type == islda && right->type == islda) {
        dtype = Jdt;
        sp23 = false;
        rightval = right->data.islda_isilda.addr;
        leftval = left->data.islda_isilda.addr;
    } else if (left->type == islda) {
        sp23 = true;
        rightval = right->data.isconst.number.intval;
        leftval = left->data.islda_isilda.addr;
    } else if (right->type == islda) {
        sp23 = true;
        rightval = right->data.islda_isilda.addr;
        leftval = left->data.isconst.number.intval;
    } else {
        sp23 = false;
        rightval = right->data.isconst.number.intval;
        leftval = left->data.isconst.number.intval;
    }

    switch (opc) {
        case Uadd:
            value = leftval + rightval;
            break;

        case Usub:
            value = leftval - rightval;
            break;

        case Umpy:
            value = leftval * rightval;
            break;

        case Udiv:
            if (dtype == Idt || dtype == Jdt) value = leftval / rightval;
            else value = (unsigned)leftval / (unsigned)rightval;
            break;

        case Umod:
            if (dtype == Idt || dtype == Jdt) value = leftval % rightval;
            else value = (unsigned)leftval % (unsigned)rightval;
            
            if (value ^ rightval < 0) {
                value += rightval;
            }
            break;

        case Urem:
            if (dtype == Idt || dtype == Jdt) value = leftval - ((leftval / rightval) * rightval);
             else value = leftval - (((unsigned)leftval / (unsigned)rightval) * rightval);
            
            break;

        case Uand:
            value = leftval & rightval;
            break;

        case Uior:
            value = leftval | rightval;
            break;

        case Uxor:
            value = leftval ^ rightval;
            break;

        case Ushl:
            value = leftval << rightval;
            break;

        case Ushr:
            if (dtype == Idt || dtype == Jdt) value = leftval >> rightval;
            else value = (unsigned)leftval >> (unsigned)rightval;
            break;

        case Usign:
            if (rightval >= 0) {
                value = leftval;
                if (leftval < 0) {
                    value = -leftval;
                }
            } else {
                value = leftval;
                if (leftval < 0) {
                    value = -leftval;
                }
                value = -value;
            }
            break;

        case Uequ:
            if (sp23) {
                sp23 = false;
                value = false;
            } else {
                value = leftval == rightval;
            }
            break;

        case Uneq:
            if (sp23) {
                sp23 = false;
                value = true;
            } else {
                value = leftval != rightval;
            }
            break;

        case Ugeq:
            if (dtype == Idt || dtype == Jdt) value = leftval >= rightval;
            else value = (unsigned)leftval >= (unsigned)rightval;
            break;

        case Ugrt:
            if (dtype == Idt || dtype == Jdt) value = leftval > rightval;
            else value = (unsigned)leftval > (unsigned)rightval;
            break;

        case Uleq:
            if (dtype == Idt || dtype == Jdt) value = leftval <= rightval;
            else value = (unsigned)leftval <= (unsigned)rightval;
            break;

        case Ules:
            if (dtype == Idt || dtype == Jdt) value = leftval < rightval;
            else value = (unsigned)leftval < (unsigned)rightval;
            break;

        case Umin:
            if (dtype == Idt || dtype == Jdt) value = MIN(leftval, rightval);
            else value = MIN((unsigned)leftval, (unsigned)rightval);
            break;

        case Umax:
            if (dtype == Idt || dtype == Jdt) value = MAX(leftval, rightval);
            else value = MAX((unsigned)leftval, (unsigned)rightval);
            break;

        default:
            caseerror(1, 149, "uoptloc.p", 9);
            break;
    }

    if (sp23) {
        if (left->type == islda) {
            copycoderep(parent, left);
            parent->data.islda_isilda.addr = value;
        } else {
            copycoderep(parent, right);
            parent->data.islda_isilda.addr = value;
        }
    } else {
        parent->type = isconst;
        parent->data.isconst.size = sizeoftyp(dtype);
        parent->var_access_list = NULL;
        parent->unk4 = false;
        parent->data.isconst.number.intval = value;
        parent->datatype = dtype;
    }
    parent->ichain = NULL;
}

/* 
0041550C func_0041550C
0044FF6C mergeconst
00451764 func_00451764
*/
void ixafold(struct Expression *ixa, struct Expression *left, struct Expression *right, struct Expression *dest) {
    int address;
    int offset;

    if (left->type == islda) {
        address = left->data.islda_isilda.addr;
    } else {
        address = left->data.isconst.number.intval;
    }

    offset = right->data.isconst.number.intval * ixa->data.isop.datasize;
    if (dest != left) {
        copycoderep(dest, left);
    }

    if (dest->type == islda) {
        dest->data.islda_isilda.addr = address + offset;
    } else {
        dest->data.isconst.number.intval = address + offset;
    }
    dest->ichain = NULL;
}

/* 
0041550C func_0041550C
00451764 func_00451764
*/
struct Expression *ilodfold(struct Expression *ilod) {
    struct VariableInner var; // sp6C
    //s32 sp6C;
    unsigned short hash; //sp68
    struct Expression *left;
    struct Expression *phi_s0;
    bool found;
    struct Expression *phi_s3;
    struct Expression *phi_v1;

    left = ilod->data.isop.op1;
    var = left->data.islda_isilda.var_data;
    var.addr = left->data.islda_isilda.addr + ilod->data.isop.datasize;
    if (insertvar(var, ilod->data.isop.aux2.v1.unk3C, ilod->datatype, &curproc->vartree, 1, 0, 0)->unk1 != 0) {
        return ilod;
    }
    hash = isvarhash(var);
    phi_s0 = table[hash];
    found = false;
    phi_s3 = NULL;
    while (!found && phi_s0 != 0) {
        if (phi_s0->type == isvar && addreq(phi_s0->data.isvar_issvar.var_data, var)) {
            found = ilod->graphnode == phi_s0->graphnode &&
                ilod->unk2 == phi_s0->unk2 &&
                ilod->unk3 == phi_s0->unk3 &&
                (phi_s0->data.isvar_issvar.unk30 == NULL || nocopy == phi_s0->data.isvar_issvar.unk30);

            phi_s3 = phi_s0;
            if (found && phi_s0->unk2 && !phi_s0->unk3) {
                found = false;
            }
        }

        if (!found) {
            phi_s0 = phi_s0->next;
        }
    }

    if (!found) {
        phi_s0 = appendchain(hash);
        if (outofmem != 0) {
            return NULL;
        }
        if (!inlopt && phi_s3 != NULL) {
            copycoderep(phi_s0, phi_s3);
        } else {
            phi_s0->type = isvar;
            phi_s0->datatype = ilod->datatype;
            phi_s0->unk4 = false;
            phi_s0->unk5 = false;
            phi_s0->data.isvar_issvar.unk21 = false;
            phi_s0->data.isvar_issvar.unk22 = false;
            phi_s0->data.isvar_issvar.var_data = var;
            phi_s0->data.isvar_issvar.unk24 = NULL;
            phi_s0->data.isvar_issvar.size = ilod->data.isop.aux2.v1.unk3C;
            phi_s0->data.isvar_issvar.var_data.level = blktolev(var.blockno);
            phi_s0->data.isvar_issvar.unk3C = 0;
            phi_s0->data.isvar_issvar.is_volatile = false;
        }
        phi_s0->count = 1;
        phi_s0->data.isvar_issvar.unk30 = NULL;
        phi_s0->data.isvar_issvar.assignment = NULL;
        phi_s0->data.isvar_issvar.assigned_value = NULL;
        phi_s0->graphnode = ilod->graphnode;
        phi_s0->unk3 = ilod->unk3;
        phi_s0->unk2 = ilod->unk2;
    } else {
        increasecount(phi_s0);
    }

    if (!found || phi_s0->var_access_list == NULL) {
        phi_s0->var_access_list = alloc_new(0x10, &perm_heap);
        phi_s0->var_access_list->prev = ilod->var_access_list->prev;
        if (phi_s0->var_access_list->prev != 0) {
            phi_s0->var_access_list->prev->next = phi_s0->var_access_list;
        } else {
            phi_s0->graphnode->varlisthead = phi_s0->var_access_list;
        }
        phi_s0->var_access_list->next = ilod->var_access_list;
        ilod->var_access_list->prev = phi_s0->var_access_list;
        phi_s0->var_access_list->unk8 = false;
        phi_s0->var_access_list->type = 2;
        phi_s0->var_access_list->data.var = phi_s0;
    }
    decreasecount(ilod);
    return phi_s0;
}

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
        sp48->unk3 = false;
        sp48->unk4 = false;
        sp48->unk5 = false;
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
            stmt->unk1 = true;
        }
        stmt->unk2 = false;
        stmt->unk3 = false;
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
)"");

/* 
0044FF6C mergeconst
*/
static bool func_0044FD9C(Uopcode opc, struct Expression *expr) {
    if (expr->type != isop) {
        return expr->type == isconst;
    } else if (expr->count != 1 || expr->data.isop.aux2.v1.overflow_attr) {
        return false;
    } else if (expr->data.isop.opc == Udiv && (expr->datatype == Idt || expr->datatype == Jdt || expr->datatype == Kdt || expr->datatype == Ldt)) {
        return false;
    } else if (opc != expr->data.isop.opc 
            // one/both of the opcodes are not addition or multiplication
            && (!(expr->data.isop.opc == Uadd ||
                    expr->data.isop.opc == Udec ||
                    expr->data.isop.opc == Uinc ||
                    expr->data.isop.opc == Uixa ||
                    expr->data.isop.opc == Usub)
                || !(opc == Uadd ||
                    opc == Udec ||
                    opc == Uinc ||
                    opc == Uixa ||
                    opc == Usub))
            && (!(expr->data.isop.opc == Udiv ||
                    expr->data.isop.opc == Umpy)
                || !(opc == Udiv ||
                    opc == Umpy))) {
        return false;
    } else if (expr->data.isop.opc == Udec || expr->data.isop.opc == Uinc) {
        return true;
    } else if (expr->data.isop.op2->type == isconst) {
        return true;
    } else {
        return func_0044FD9C(opc, expr->data.isop.op1);
    }
}

/* 
00451764 func_00451764
*/
void mergeconst(struct Expression *expr) {
    bool done;
    struct Expression *left;
    struct Expression *constant;
    struct Expression *tempExpr;
    struct Expression *newExpr;
    bool overflow;

    if ((expr->datatype == Adt || expr->datatype == Hdt || expr->datatype == Jdt || expr->datatype == Ldt) && func_0044FD9C(expr->data.isop.opc, expr->data.isop.op1)) {
        left = expr->data.isop.op1;
        done = false;
        overflow = false;
        while (!done && !overflow) {
            if (left->data.isop.opc != Udec || left->data.isop.opc != Uinc) {
                constant = left->data.isop.op2;
                if (constant != NULL && constant->type == isconst) {
                    if (expr->data.isop.opc == Uixa) {
                        switch (left->data.isop.opc) {
                            case Uixa:
                                if (mpyovfw(left->datatype, constant->data.isconst.number.intval, left->data.isop.datasize)) {
                                    overflow = true;
                                } else if (mpyovfw(expr->datatype, expr->data.isop.op2->data.isconst.number.intval, expr->data.isop.datasize)) {
                                    overflow = true;
                                } else {
                                    overflow = addovfw(false, constant->data.isconst.number.intval * left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize);
                                }
                                break;

                            default:
                                caseerror(1U, 705, "uoptloc.p", 9);
                                break;
                        }
                    } else if (expr->data.isop.opc == Udec) {
                        switch (left->data.isop.opc) {
                            case Uadd:
                                overflow = subovfw(expr->datatype, constant->data.isconst.number.intval, expr->data.isop.datasize);
                                break;

                            case Usub:
                                overflow = subovfw(expr->datatype, -constant->data.isconst.number.intval, expr->data.isop.datasize);
                                break;

                            case Uixa:
                                if (mpyovfw(left->datatype, left->data.isop.datasize, constant->data.isconst.number.intval)) {
                                    overflow = true;
                                } else {
                                    overflow = subovfw(expr->datatype, left->data.isop.datasize * constant->data.isconst.number.intval, expr->data.isop.datasize);
                                }
                                break;

                            default:
                                caseerror(1, 714, "uoptloc.p", 9);
                                break;
                        }
                    } else if (expr->data.isop.opc == Uinc) {
                        switch (left->data.isop.opc) {
                            case Uadd:
                                overflow = addovfw(expr->datatype, constant->data.isconst.number.intval, expr->data.isop.datasize);
                                break;

                            case Usub:
                                overflow = addovfw(expr->datatype, -constant->data.isconst.number.intval, expr->data.isop.datasize);
                                break;

                            case Uixa:
                                if (mpyovfw(left->datatype, left->data.isop.datasize, constant->data.isconst.number.intval)) {
                                    overflow = true;
                                } else {
                                    overflow = addovfw(expr->datatype, left->data.isop.datasize * constant->data.isconst.number.intval, expr->data.isop.datasize);
                                }
                                break;

                            default:
                                caseerror(1, 723, "uoptloc.p", 9);
                                break;
                        }
                    } else if (left->data.isop.opc == Uixa) {
                        if (mpyovfw(left->datatype, left->data.isop.datasize, constant->data.isconst.number.intval)) {
                            overflow = true;
                        } else {
                            if (expr->data.isop.opc == Uadd) {
                                overflow = addovfw(expr->datatype, left->data.isop.datasize * constant->data.isconst.number.intval, expr->data.isop.op2->data.isconst.number.intval);
                            } else {
                                overflow = subovfw(expr->datatype, left->data.isop.datasize * constant->data.isconst.number.intval, expr->data.isop.op2->data.isconst.number.intval);
                            }
                        }
                    } else if (left->data.isop.opc != Usub && left->data.isop.opc != Udiv) {
                        overflow = binaryovfw(expr->datatype, expr->data.isop.opc, constant, expr->data.isop.op2);
                    } else if (expr->data.isop.opc == left->data.isop.opc) {
                        if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                            overflow = binaryovfw(expr->datatype, Uadd, constant, expr->data.isop.op2);
                        } else if (expr->data.isop.opc == Udiv || expr->data.isop.opc == Umpy) {
                            overflow = binaryovfw(expr->datatype, Umpy, constant, expr->data.isop.op2);
                        } else {
                            overflow = binaryovfw(expr->datatype, expr->data.isop.opc, constant, expr->data.isop.op2);
                        }
                    } else if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                        overflow = binaryovfw(expr->datatype, Usub, constant, expr->data.isop.op2) &&
                            binaryovfw(expr->datatype, Usub, expr->data.isop.op2, constant);
                    } else {
                        overflow = binaryovfw(expr->datatype, Udiv, constant, expr->data.isop.op2);
                    }

                    if (overflow == false) {
                        done = true;
                        if (expr->data.isop.opc == Uixa) {
                            switch (left->data.isop.opc) {
                                case Uixa:
                                    left->data.isop.op2 = NULL;
                                    left->data.isop.opc = Uinc;
                                    left->datatype = Adt;
                                    left->data.isop.datasize *= constant->data.isconst.number.intval;
                                    left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize;
                                    break;

                                default:
                                    caseerror(1, 757, "uoptloc.p", 9);
                                    break;
                            }
                        } else if (expr->data.isop.opc == Udec) {
                            switch (left->data.isop.opc) {
                                case Uadd:
                                    left->data.isop.datasize = constant->data.isconst.number.intval - expr->data.isop.datasize;
                                    break;

                                case Usub:
                                    left->data.isop.datasize = -constant->data.isconst.number.intval - expr->data.isop.datasize;
                                    break;

                                case Uixa:
                                    left->datatype = Adt;
                                    left->data.isop.datasize *= constant->data.isconst.number.intval;
                                    left->data.isop.datasize -= expr->data.isop.datasize;
                                    break;

                                default:
                                    caseerror(1, 767, "uoptloc.p", 9);
                                    break;
                            }

                            left->data.isop.opc = Uinc;
                            left->data.isop.op2 = NULL;
                        } else if (expr->data.isop.opc == Uinc) {
                            switch (left->data.isop.opc) {
                                case Uadd:
                                    left->data.isop.datasize = expr->data.isop.datasize + constant->data.isconst.number.intval;
                                    break;

                                case Usub:
                                    left->data.isop.datasize = expr->data.isop.datasize - constant->data.isconst.number.intval;
                                    break;

                                case Uixa:
                                    left->datatype = Adt;
                                    left->data.isop.datasize *= constant->data.isconst.number.intval;
                                    left->data.isop.datasize += expr->data.isop.datasize;
                                    break;

                                default:
                                    caseerror(1, 780, "uoptloc.p", 9);
                                    break;
                            }

                            left->data.isop.opc = Uinc;
                            left->data.isop.op2 = NULL;
                        } else if (left->data.isop.opc == Uixa) {
                            left->data.isop.datasize = left->data.isop.datasize * constant->data.isconst.number.intval;
                            if (expr->data.isop.opc == Uadd) {
                                left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.op2->data.isconst.number.intval;
                            }

                            left->datatype = Adt;
                            left->data.isop.opc = Uinc;
                            left->data.isop.op2 = NULL;
                        } else {
                            newExpr = appendchain(left->table_index);
                            if (outofmem) {
                                return;
                            }
                            if (left->data.isop.opc != Usub && left->data.isop.opc != Udiv) {
                                binaryfold(expr->data.isop.opc, expr->datatype, constant, expr->data.isop.op2, newExpr);
                            } else if (expr->data.isop.opc == left->data.isop.opc) {
                                if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                                    binaryfold(Uadd, expr->datatype, constant, expr->data.isop.op2, newExpr);
                                } else if (expr->data.isop.opc == Udiv || expr->data.isop.opc == Umpy) {
                                    binaryfold(Umpy, expr->datatype, constant, expr->data.isop.op2, newExpr);
                                } else {
                                    binaryfold(expr->data.isop.opc, expr->datatype, constant, expr->data.isop.op2, newExpr);
                                }
                            } else if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                                binaryfold(Usub, expr->datatype, constant, expr->data.isop.op2, newExpr);
                            } else {
                                binaryfold(Udiv, expr->datatype, constant, expr->data.isop.op2, newExpr);
                            }
                            left->data.isop.op2 = newExpr;
                        }

                        expr->data.isop.op1->count = expr->count;
                        tempExpr = expr->data.isop.op1;
                        copycoderep(expr, expr->data.isop.op1);
                        delentry(tempExpr);
                    }
                }
            } else {
                switch (expr->data.isop.opc) {
                    case Udec:
                        if (left->data.isop.opc == Udec) {
                            overflow = addovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.datasize);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.datasize);
                        }
                        break;

                    case Uinc:
                        if (left->data.isop.opc == Uinc) {
                            overflow = addovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.datasize);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.datasize);
                        }
                        break;

                    case Uadd:
                        if (left->data.isop.opc == Uinc) {
                            overflow = addovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval);
                        }
                        break;

                    case Usub:
                        if (left->data.isop.opc == Udec) {
                            overflow = addovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval);
                        }
                        break;

                    case Uixa:
                        if (mpyovfw(expr->datatype, expr->data.isop.op2->data.isconst.number.intval, expr->data.isop.datasize)) {
                            overflow = true;
                        } else if (left->data.isop.opc == Uinc) {
                            overflow = addovfw(Adt, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize);
                        } else {
                            overflow = subovfw(Adt, left->data.isop.datasize, expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize);
                        }
                        break;

                    default:
                        caseerror(1, 827, "uoptloc.p", 9);
                        break;
                }

                if (overflow == false) {
                    done = true;
                    switch (expr->data.isop.opc) {
                        case Udec:
                            if (left->data.isop.opc == Udec) {
                                left->data.isop.datasize += expr->data.isop.datasize;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.datasize;
                            }
                            break;

                        case Uinc:
                            if (left->data.isop.opc == Uinc) {
                                left->data.isop.datasize += expr->data.isop.datasize;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.datasize;
                            }
                            break;

                        case Uadd:
                            if (left->data.isop.opc == Uinc) {
                                left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.op2->data.isconst.number.intval;
                            }
                            break;

                        case Usub:
                            if (left->data.isop.opc == Udec) {
                                left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.op2->data.isconst.number.intval;
                            }
                            break;

                        case Uixa:
                            if (left->data.isop.opc == Uinc) {
                                left->data.isop.datasize += expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize;
                            } else {
                                left->data.isop.datasize -= expr->data.isop.op2->data.isconst.number.intval * expr->data.isop.datasize;
                            }
                            break;

                        default:
                            caseerror(1, 849, "uoptloc.p", 9);
                            break;
                    }

                    expr->data.isop.op1->count = expr->count;
                    tempExpr = expr->data.isop.op1;
                    copycoderep(expr, expr->data.isop.op1);
                    delentry(tempExpr);
                }
            }

            if (!done && !overflow) {
                if (left->data.isop.op1->type != isop) {
                    if (expr->data.isop.opc == Uixa) {
                        overflow = ixaovfw(expr, left->data.isop.op1, expr->data.isop.op2);
                    } else if (expr->data.isop.opc != Udec && expr->data.isop.opc != Uinc) {
                        overflow = binaryovfw(expr->datatype, expr->data.isop.opc, left->data.isop.op1, expr->data.isop.op2);
                    } else if (expr->data.isop.opc == Udec) {
                        if (left->data.isop.op1->type == islda) {
                            overflow = subovfw(Adt, left->data.isop.op1->data.islda_isilda.addr, expr->data.isop.datasize);
                        } else {
                            overflow = subovfw(expr->datatype, left->data.isop.op1->data.isconst.number.intval, expr->data.isop.datasize);
                        }
                    } else if (left->data.isop.op1->type == islda) {
                        overflow = addovfw(Adt, left->data.isop.op1->data.islda_isilda.addr, expr->data.isop.datasize);
                    } else {
                        overflow = addovfw(expr->datatype, left->data.isop.op1->data.isconst.number.intval, expr->data.isop.datasize);
                    }

                    if (!overflow) {
                        done = true;
                        newExpr = appendchain(left->data.isop.op1->table_index);
                        if (outofmem) {
                            return;
                        }
                        if (expr->data.isop.opc == Uixa) {
                            ixafold(expr, left->data.isop.op1, expr->data.isop.op2, newExpr);
                        } else if (expr->data.isop.opc != Udec && expr->data.isop.opc != Uinc) {
                            binaryfold(expr->data.isop.opc, expr->datatype, left->data.isop.op1, expr->data.isop.op2, newExpr);
                        } else {
                            copycoderep(newExpr, left->data.isop.op1);
                            newExpr->ichain = NULL;
                            if (expr->data.isop.opc == Udec) {
                                if (newExpr->type == islda) {
                                    newExpr->data.islda_isilda.addr -= expr->data.isop.datasize;
                                } else {
                                    newExpr->data.isconst.number.intval -= expr->data.isop.datasize;
                                }
                            } else {
                                if (newExpr->type == islda) {
                                    newExpr->data.islda_isilda.addr += expr->data.isop.datasize;
                                } else {
                                    newExpr->data.isconst.number.intval += expr->data.isop.datasize;
                                }
                            }
                        }

                        left->data.isop.op1 = newExpr;
                        expr->data.isop.op1->count = expr->count;
                        tempExpr = expr->data.isop.op1;
                        copycoderep(expr, expr->data.isop.op1);
                        delentry(tempExpr);
                    }
                } else {
                    left = left->data.isop.op1;
                }
            }
        }
    }
}

/* 
00451764 func_00451764
*/
void distrlaw(Uopcode opc, struct Expression *expr) {
    struct Expression *sp48;
    Datatype dtype;
    Uopcode tempopc;
    struct Expression *left;     // s1
    struct Expression *right;    // a3

    dtype = expr->datatype;
    if ((dtype == Adt || dtype == Hdt || dtype == Jdt || dtype == Ldt) && !expr->data.isop.aux2.v1.overflow_attr) {
        if (((opc == Uadd || opc == Udec || opc == Uinc || opc == Uixa || opc == Usub) && expr->data.isop.opc == Umpy)
                || (opc == Uand && expr->data.isop.opc == Uior)
                || (opc == Uior && expr->data.isop.opc == Uand)) {

            left = expr->data.isop.op1;
            right = expr->data.isop.op2;
            if (right->type == isconst && left->type == isop) {
                if ((((left->data.isop.opc == Uadd || left->data.isop.opc == Udec || left->data.isop.opc == Uinc || left->data.isop.opc == Usub) && expr->data.isop.opc == Umpy)
                            || (left->data.isop.opc == Uand && expr->data.isop.opc == Uior)
                            || (left->data.isop.opc == Uior && expr->data.isop.opc == Uand))
                        && left->count == 1) {
                    if (left->data.isop.opc == Udec || left->data.isop.opc == Uinc) {
                        if (mpyovfw(dtype, left->data.isop.datasize, right->data.isconst.number.intval)) {
                            return;
                        }
                        left->data.isop.op2 = right;
                        left = expr->data.isop.op1;
                        expr->data.isop.datasize = left->data.isop.datasize * right->data.isconst.number.intval;
                        expr->data.isop.op2 = NULL;
                        expr->data.isop.opc = left->data.isop.opc;
                        left->data.isop.opc = Umpy;

                    } else if (left->data.isop.op2->type == isconst) {
                        if (binaryovfw(dtype, expr->data.isop.opc, left->data.isop.op2, right)) {
                            return;
                        }
                        sp48 = appendchain(right->table_index);
                        if (outofmem) {
                            return;
                        }
                        binaryfold(expr->data.isop.opc, dtype, left->data.isop.op2, right, sp48);
                        left->data.isop.op2 = right;
                        expr->data.isop.op2 = sp48;
                        tempopc = expr->data.isop.opc;
                        expr->data.isop.opc = left->data.isop.opc;
                        left->data.isop.opc = tempopc;

                    } else if (left->data.isop.op1->type == isconst)  {
                        if (binaryovfw(dtype, expr->data.isop.opc, left->data.isop.op1, right)) {
                            return;
                        }
                        sp48 = appendchain(right->table_index);
                        if (outofmem) {
                            return;
                        }
                        binaryfold(expr->data.isop.opc, dtype, left->data.isop.op1, right, sp48);
                        left->data.isop.op1 = left->data.isop.op2;
                        left->data.isop.op2 = right;
                        tempopc = left->data.isop.opc;
                        left->data.isop.opc = expr->data.isop.opc;
                        expr->data.isop.opc = tempopc;
                        expr->data.isop.op1 = sp48;
                        expr->data.isop.op2 = left;
                    }
                }
            } else if (left->type == isconst && right->type == isop) {
                if ((((right->data.isop.opc == Uadd || right->data.isop.opc == Udec || right->data.isop.opc == Uinc || right->data.isop.opc == Usub) && expr->data.isop.opc == Umpy)
                            || (right->data.isop.opc == Uand && expr->data.isop.opc == Uior)
                            || (right->data.isop.opc == Uior && expr->data.isop.opc == Uand))
                        && right->count == 1) {
                    if (right->data.isop.opc == Udec || right->data.isop.opc == Uinc) {
                        if (mpyovfw(dtype, right->data.isop.datasize, left->data.isconst.number.intval)) {
                            return;
                        }
                        right->data.isop.op2 = right->data.isop.op1;
                        right->data.isop.op1 = left;
                        expr->data.isop.datasize = right->data.isop.datasize * left->data.isconst.number.intval;
                        expr->data.isop.opc = right->data.isop.opc;
                        right->data.isop.opc = Umpy;
                        expr->data.isop.op2 = NULL;
                        expr->data.isop.op1 = right;
                    } else if (right->data.isop.op1->type == isconst) {
                        if (binaryovfw(dtype, expr->data.isop.opc, left, right->data.isop.op1)) {
                            return;
                        }
                        sp48 = appendchain(right->table_index);
                        if (outofmem) {
                            return;
                        }
                        binaryfold(expr->data.isop.opc, dtype, left, right->data.isop.op1, sp48);
                        right->data.isop.op1 = left;
                        expr->data.isop.op1 = sp48;
                        tempopc = expr->data.isop.opc;
                        expr->data.isop.opc = right->data.isop.opc;
                        right->data.isop.opc = tempopc;

                    } else if (right->data.isop.op2->type == isconst) { 
                        if (binaryovfw(dtype, expr->data.isop.opc, left, right->data.isop.op2)) {
                            return;
                        }

                        sp48 = appendchain(right->table_index);
                        if (outofmem) {
                            return;
                        }
                        binaryfold(expr->data.isop.opc, dtype, left, right->data.isop.op2, sp48);
                        right->data.isop.op2 = right->data.isop.op1;
                        right->data.isop.op1 = left;
                        tempopc = right->data.isop.opc;
                        right->data.isop.opc = expr->data.isop.opc;
                        expr->data.isop.opc = tempopc;
                        expr->data.isop.op1 = right;
                        expr->data.isop.op2 = sp48;
                    }
                }
            }
        }
    }
}

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
            sp53 = false;
            break;

        case islda:
            sp53 = true;
            break;

        case isilda:
            sp53 = false;
            break;

        case isconst:
            if (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt) {
                sp53 = true;
            } else {
                sp53 = false;
            }
            break;

        case isop:
            sp53 = false;
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
                                sp53 = false;
                                if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                    ovfwwarning(expr_s0->data.isop.opc);
                                }
                            } else {
                                sp53 = true;
                                unaryfold(*expr);
                            }
                        } else {
                            sp53 = false;
                            mergeconst(*expr);
                            if (outofmem) {
                                return false;
                            }

                            if (expr_s0->data.isop.op1->type == isop && expr_s0->data.isop.op1->data.isop.opc == Uixa) {
                                reduceixa(expr_s0->data.isop.op1);
                            }
                        }
                    } else if (expr_s0->data.isop.opc == Uint || expr_s0->data.isop.opc == Uuni) {
                        sp53 = false;
                    } else if (sp51 && expr_s0->data.isop.op2->type == isconst) {
                        if (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt) {
                            if (expr_s0->data.isop.opc == Uixa) {
                                if (ixaovfw(*expr, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                                    sp53 = false;
                                    ovfwwarning(Uixa);
                                } else {
                                    sp53 = true;
                                    ixafold(*expr, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                                }
                            } else if (expr_s0->data.isop.op1->type == islda && expr_s0->data.isop.op2->type == islda) {
                                sp53 = false;
                            } else if (binaryovfw(expr_s0->datatype, expr_s0->data.isop.opc, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                                sp53 = false;
                                if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                    ovfwwarning(expr_s0->data.isop.opc);
                                }
                            } else {
                                sp53 = true;
                                binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                            }
                        } else {
                            sp53 = false;
                        }
                    } else if (sp51 == 0) {
                        sp53 = false;
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
                        sp53 = false;
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

                        sp53 = false;
                        if (!func_00451764(expr_s0->data.isop.opc, &expr_s0->data.isop.op1) && expr_s0->data.isop.op2->type == isconst) {
                            mergeconst(*expr);
                        }
                    } else {
                        sp51 = func_00451764(Unop, &expr_s0->data.isop.op2);
                        if (sp51 && func_00451764(Unop, &expr_s0->data.isop.op1)) {
                            if (binaryovfw(expr_s0->datatype, expr_s0->data.isop.opc, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                                sp53 = false;
                                if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                    ovfwwarning(expr_s0->data.isop.opc);
                                }
                            } else {
                                sp53 = true;
                                binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                            }
                        } else {
                            sp53 = false;
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
                        sp53 = true;
                        binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, sp28, *expr);
                    } else if (sp52) {
                        switch (expr_s0->data.isop.opc) {
                            case Uand:
                                if (expr_s0->data.isop.op1->data.isconst.number.intval == 0) {
                                    sp53 = true;
                                    decreasecount(sp28);
                                    copycoderep(*expr, expr_s0->data.isop.op1);
                                } else if (expr_s0->data.isop.op1->data.isconst.number.intval == -1) {
                                    if (sp28->count != 1) {
                                        sp53 = false;
                                    } else {
                                        sp53 = false;
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
                                    sp53 = false;
                                }
                                break;

                            case Uior:
                                if (expr_s0->data.isop.op1->data.isconst.number.intval == -1) {
                                    sp53 = true;
                                    decreasecount(sp28);
                                    copycoderep(*expr, expr_s0->data.isop.op1);
                                } else if (expr_s0->data.isop.op1->data.isconst.number.intval == 0) {
                                    if (sp28->count != 1) {
                                        sp53 = false;
                                    } else {
                                        sp53 = false;
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
                                    sp53 = false;
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
                                    sp53 = true;
                                    decreasecount(expr_s0->data.isop.op1);
                                    copycoderep(*expr, expr_s0->data.isop.op2);
                                } else if (sp28->data.isconst.number.intval == -1) {
                                    if (expr_s0->data.isop.op1->count != 1) {
                                        sp53 = false;
                                    } else {
                                        expr_s0->data.isop.op1->count = expr_s0->count;
                                        sp53 = false;
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
                                    sp53 = false;
                                }
                                break;

                            case Uior:
                                if (sp28->data.isconst.number.intval == -1) {
                                    sp53 = true;
                                    decreasecount(expr_s0->data.isop.op1);
                                    copycoderep(*expr, expr_s0->data.isop.op2);
                                } else if (sp28->data.isconst.number.intval == 0) {
                                    if (expr_s0->data.isop.op1->count != 1) {
                                        sp53 = false;
                                    } else {
                                        expr_s0->data.isop.op1->count = expr_s0->count;
                                        sp53 = false;
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
                                    sp53 = false;
                                }
                                break;

                            default:
                                caseerror(1, 0x50B, "uoptloc.p", 9);
                                break;
                        }
                    } else {
                        sp53 = false;
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
                            sp53 = false;
                        } else if (binaryovfw(expr_s0->datatype, expr_s0->data.isop.opc, expr_s0->data.isop.op1, expr_s0->data.isop.op2)) {
                            sp53 = false;
                            if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(expr_s0->data.isop.opc);
                            }
                        } else {
                            sp53 = true;
                            binaryfold(expr_s0->data.isop.opc, expr_s0->datatype, expr_s0->data.isop.op1, expr_s0->data.isop.op2, *expr);
                        }
                    } else {
                        sp53 = false;
                    }
                    break;

                case Uildv:
                case Uilod:
                    sp53 = false;
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
                    sp53 = false;
                    break;

                case Ucvt:
                    if (func_00451764(Unop, &expr_s0->data.isop.op1)
                            && (expr_s0->datatype == Adt || expr_s0->datatype == Hdt || expr_s0->datatype == Jdt || expr_s0->datatype == Ldt)
                            && (expr_s0->data.isop.aux.cvtfrom == Adt || expr_s0->data.isop.aux.cvtfrom == Hdt || expr_s0->data.isop.aux.cvtfrom == Jdt || expr_s0->data.isop.aux.cvtfrom == Ldt)) {
                        if (expr_s0->data.isop.op1->type == islda) {
                            sp53 = false;
                        } else {
                            sp53 = true;
                            cvtfold(*expr);
                        }
                    } else {
                        sp53 = false;
                    }
                    break;

                case Uchkn:
                case Urnd:
                case Usgs:
                case Utyp:
                    if (func_00451764(Unop, &expr_s0->data.isop.op1)) {
                        noop = false;
                    }
                    sp53 = false;
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
                            sp53 = false;
                            if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(expr_s0->data.isop.opc);
                            }
                        } else {
                            sp53 = true;
                            unaryfold(*expr);
                        }
                    } else {
                        sp53 = false;
                    }
                    break;

                case Udec:
                case Uinc:
                    if (func_00451764(expr_s0->data.isop.opc, &expr_s0->data.isop.op1)) {
                        if (unaryovfw(*expr)) {
                            sp53 = false;
                            if (expr_s0->data.isop.aux2.v1.overflow_attr) {
                                ovfwwarning(expr_s0->data.isop.opc);
                            }
                        } else {
                            sp53 = true;
                            unaryfold(*expr);
                        }
                    } else {
                        sp53 = false;
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
                    sp53 = false;
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
                        sp53 = false;
                    }
                    break;

                default:
                    caseerror(1, 0x464, "uoptloc.p", 9);
                    break;
            }

            if (expr_s0->type == isop) {
                expr_s0->unk5 = true;
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
                    bool outofbounds;

                    if (stmt->u.trap.dtype == Qdt || stmt->u.trap.dtype == Rdt || stmt->u.trap.dtype == Sdt) {
                        break;
                    }

                    // -_-
                    switch (stmt->opc) {
                        case Utpeq:
                            outofbounds = stmt->u.trap.expr2->data.isconst.number.intval == stmt->expr->data.isconst.number.intval;
                            break;

                        case Utpge:
                            if (stmt->u.trap.dtype == Jdt) {
                                outofbounds = !(stmt->expr->data.isconst.number.intval < stmt->u.trap.expr2->data.isconst.number.intval);
                            } else {
                                outofbounds = !(stmt->expr->data.isconst.number.uintval < stmt->u.trap.expr2->data.isconst.number.uintval);
                            }
                            break;

                        case Utpgt:
                            if (stmt->u.trap.dtype == Jdt) {
                                outofbounds = stmt->u.trap.expr2->data.isconst.number.intval < stmt->expr->data.isconst.number.intval;
                            } else {
                                outofbounds = stmt->u.trap.expr2->data.isconst.number.uintval < stmt->expr->data.isconst.number.uintval;
                            }
                            break;

                        case Utple:
                            if (stmt->u.trap.dtype == Jdt) {
                                outofbounds = !(stmt->u.trap.expr2->data.isconst.number.intval < stmt->expr->data.isconst.number.intval);
                            } else {
                                outofbounds = !(stmt->u.trap.expr2->data.isconst.number.uintval < stmt->expr->data.isconst.number.uintval);
                            }
                            break;

                        case Utplt:
                            if (stmt->u.trap.dtype == Jdt) {
                                outofbounds = stmt->expr->data.isconst.number.intval < stmt->u.trap.expr2->data.isconst.number.intval;
                            } else {
                                outofbounds = stmt->expr->data.isconst.number.uintval < stmt->u.trap.expr2->data.isconst.number.uintval;
                            }
                            break;

                        case Utpne:
                            outofbounds = stmt->u.trap.expr2->data.isconst.number.intval != stmt->expr->data.isconst.number.intval;
                            break;

                        default:
                            caseerror(1, 1541, "uoptloc.p", 9);
                            break;
                    }

                    if (outofbounds) {
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
