#include <string.h>
#include "libxmalloc/xmalloc.h"
#include "uoptdata.h"
#include "uoptitab.h"
#include "uoptions.h"
#include "uoptcontrolflow.h"
#include "libu/libu.h"
#include "uoptkill.h"
#include "uoptutil.h"
#include "uoptmtag.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000C770:
    # 00444A84 isearchloop
    .ascii "uoptitab.p"

RO_1000C77A:
    # 00444A84 isearchloop
    .ascii "uoptitab.p"

RO_1000C784:
    # 00444A84 isearchloop
    .ascii "Warning: kind dumped: ignored"

RO_1000C7A1:
    # 00444A84 isearchloop
    .ascii "uoptitab.p"

RO_1000C7AB:
    # 00444A84 isearchloop
    .asciz "uoptitab.p"

    .balign 4
jtbl_1000C7B8:
    # 00444A84 isearchloop
    .gpword .L00444EFC
    .gpword .L00444D74
    .gpword .L00444FB8
    .gpword .L00445214
    .gpword .L00444D74
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444E0C
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444F30
    .gpword .L00444F30
    .gpword .L00444FEC

    .balign 4
jtbl_1000C7F4:
    # 00444A84 isearchloop
    .gpword .L00444F74
    .gpword .L00444F30
    .gpword .L00444F30
    .gpword .L00445214
    .gpword .L00444E0C
    .gpword .L00444E0C

    .balign 4
jtbl_1000C80C:
    # 00444A84 isearchloop
    .gpword .L00444E4C
    .gpword .L00444E4C
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445044
    .gpword .L00445088
    .gpword .L00445088
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445000
    .gpword .L00445088
    .gpword .L00445088
    .gpword .L00445000
    .gpword .L00444F30
    .gpword .L00445044
    .gpword .L00445214
    .gpword .L00444E7C
    .gpword .L00444D74
    .gpword .L00444D74

    .balign 4
jtbl_1000C860:
    # 00444A84 isearchloop
    .gpword .L00444E4C
    .gpword .L00444E4C
    .gpword .L00445214
    .gpword .L00444EFC
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444E0C
    .gpword .L00444E0C
    .gpword .L00444E0C
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444D74
    .gpword .L00445214
    .gpword .L00444E0C
    .gpword .L00444EFC
    .gpword .L00444DC8
    .gpword .L00445214
    .gpword .L00444EFC
    .gpword .L00444EFC

    .balign 4
jtbl_1000C8B8:
    # 00444A84 isearchloop
    .gpword .L00444F74
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444EFC
    .gpword .L00444E0C
    .gpword .L00444E0C
    .gpword .L00444E0C
    .gpword .L00444EFC
    .gpword .L00444EFC

    .balign 4
jtbl_1000C8E0:
    # 00444A84 isearchloop
    .gpword .L00444F74
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444D74
    .gpword .L00445214
    .gpword .L00445214
    .gpword .L00444D74

    .balign 4
jtbl_1000C900:
    # 00444A84 isearchloop
    .gpword .L00444BFC
    .gpword .L00444B08
    .gpword .L00444CAC
    .gpword .L00444D4C
    .gpword .L00444C3C
    .gpword .L00444CFC
    .gpword .L00445290
    .gpword .L00444BC4

    .balign 4
jtbl_1000C920:
    # 00444A84 isearchloop
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L0044552C
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445514
    .gpword .L00445514
    .gpword .L00445768

    .balign 4
jtbl_1000C95C:
    # 00444A84 isearchloop
    .gpword .L00445520
    .gpword .L00445514
    .gpword .L00445514
    .gpword .L00445598
    .gpword .L004454E8
    .gpword .L00445768

    .balign 4
jtbl_1000C974:
    # 00444A84 isearchloop
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445568
    .gpword .L00445580
    .gpword .L00445580
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445540
    .gpword .L00445580
    .gpword .L00445580
    .gpword .L00445540
    .gpword .L00445514
    .gpword .L00445568
    .gpword .L00445598
    .gpword .L004454F4
    .gpword .L004454E8
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445508
    .gpword .L00445598
    .gpword .L00445768

    .balign 4
jtbl_1000C9E4:
    # 00444A84 isearchloop
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L004454E8
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445768
    .gpword .L00445768

    .balign 4
jtbl_1000CA3C:
    # 00444A84 isearchloop
    .gpword .L00445520
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L004454E8
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445768
    .gpword .L00445768

    .balign 4
jtbl_1000CA64:
    # 00444A84 isearchloop
    .gpword .L00445520
    .gpword .L00445768
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L004454E8
    .gpword .L00445598
    .gpword .L00445598
    .gpword .L00445768

    .balign 4
jtbl_1000CA84:
    # 00444A84 isearchloop
    .gpword .L004453C4
    .gpword .L00445394
    .gpword .L00445418
    .gpword .L00445484
    .gpword .L004453E8
    .gpword .L00445448
    .gpword .L00445358
    .gpword .L004453B0

.data
D_10010910:
    # 00444A84 isearchloop
    .byte 0x10,0xc0,0x00,0x20,0x00,0x06,0x00,0x01

D_10010918:
    # 00444A84 isearchloop
    .byte 0x40,0x00,0x00,0x20,0x00,0x00,0x01,0x00,0x40,0x00,0x00,0x02,0x00,0x00,0x00,0x04

D_10010928:
    # 00444A84 isearchloop
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

/*
# 004150E4 func_004150E4
# 0041550C func_0041550C
# 004175BC copypropagate
# 00445E44 exprimage
# 0046BA10 change_to_const_eq
# 0046BD90 change_to_var_eq
*/
int isconstihash(int value) {
    int hash = value % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 0041550C func_0041550C
# 00445E44 exprimage
*/
int realihash(union Constant value) {
    // only the u16 at value+0x2 is used, but 8 bytes are always passed to this function, see func_0041550C asm
    int hash = ((value.real.len * value.real.len) << 6) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 0041550C func_0041550C
# 004175BC copypropagate
# 0042020C gen_static_link
# 00445E44 exprimage
# 004471AC codeimage
*/
int isvarihash(struct VariableInner var) {
    int hash = (((var.memtype << 6) + var.blockno + var.addr) << 4) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 0041550C func_0041550C
# 00445E44 exprimage
# 0046BA10 change_to_const_eq
*/
int isldaihash(struct VariableInner var, unsigned int addr) {
    int hash = (((var.memtype << 6) + var.blockno + addr) << 4) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 00410204 codemotion
# 0041550C func_0041550C
# 004175BC copypropagate
# 00445E44 exprimage
# 004471AC codeimage
# 0046BA10 change_to_const_eq
# 0046BD90 change_to_var_eq
*/
int isopihash(Uopcode opc, struct IChain *op1, struct IChain *op2) {
    int hash;

    if (op2 != NULL) {
        hash = (((opc << 3) + op1->table_index * op2->table_index +
                             (op1->chain_index + 2) * (op2->chain_index + 2)) * 10) % 0x653;
    } else {
        hash = (((opc << 3) + op1->table_index * (op1->chain_index + 2)) * 10) % 0x653;
    }
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
# 004150E4 func_004150E4
# 0041550C func_0041550C
# 00445AEC trep_image
# 00445E44 exprimage
*/
int opvalihash(Uopcode opc, struct IChain *ichain, unsigned short number) {
    int hash = ((opc * 8) + ((ichain->table_index + number) * (ichain->chain_index + 2))) % 0x653;
    if (hash < 0) hash += 0x653;
    return hash;
}

/*
00444A84 isearchloop
00445AEC trep_image
00446E18 searchstore
*/
struct IChain *appendichain(unsigned short table_index, bool arg1_unused) {
    struct IChain *pos;
    struct IChain *new_entry;
    unsigned short chain_index;

    pos = itable[table_index];
    if (pos == NULL) {
        new_entry = (struct IChain *)alloc_new(sizeof(struct IChain), &perm_heap);
        pos = new_entry;
        itable[table_index] = new_entry;
        chain_index = 0;
    } else {
        while (pos->next != NULL) {
            pos = pos->next;
        }
        new_entry = (struct IChain *)alloc_new(sizeof(struct IChain), &perm_heap);
        pos->next = new_entry;
        chain_index = pos->chain_index + 1;
    }
    if (new_entry == NULL) {
        outofmem = true;
        return NULL; // originally some unused stack slot value was returned
    }
#ifdef AVOID_UB
    *new_entry = (struct IChain){0};
    new_entry->chain_index = chain_index;
    new_entry->table_index = table_index;
#else
    new_entry->type = empty;
    new_entry->chain_index = chain_index;
    new_entry->next = NULL;
    new_entry->stat = NULL;
    new_entry->unk8 = 0;
    new_entry->table_index = table_index;
#endif
    return new_entry;
}

__asm__(R""(
.set noat
.set noreorder

glabel isearchloop
    .ent isearchloop
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 00445E44 exprimage
    # 004471AC codeimage
    # 0046BA10 change_to_const_eq
    # 0046BD90 change_to_var_eq
/* 00444A84 3C1C0FBD */  .cpload $t9
/* 00444A88 279C580C */
/* 00444A8C 0399E021 */
/* 00444A90 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00444A94 AFA40040 */  sw    $a0, 0x40($sp)
/* 00444A98 97AE0042 */  lhu   $t6, 0x42($sp)
/* 00444A9C 8F988DF0 */  lw     $t8, %got(itable)($gp)
/* 00444AA0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00444AA4 000E7880 */  sll   $t7, $t6, 2
/* 00444AA8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00444AAC AFB30024 */  sw    $s3, 0x24($sp)
/* 00444AB0 AFB20020 */  sw    $s2, 0x20($sp)
/* 00444AB4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00444AB8 AFB00018 */  sw    $s0, 0x18($sp)
/* 00444ABC 01F8C821 */  addu  $t9, $t7, $t8
/* 00444AC0 8F300000 */  lw    $s0, ($t9)
/* 00444AC4 00A08825 */  move  $s1, $a1
/* 00444AC8 00C09025 */  move  $s2, $a2
/* 00444ACC 00E09825 */  move  $s3, $a3
/* 00444AD0 12000200 */  beqz  $s0, .L004452D4
/* 00444AD4 00004025 */   move  $t0, $zero
/* 00444AD8 92230000 */  lbu   $v1, ($s1)
.L00444ADC:
/* 00444ADC 2469FFFF */  addiu $t1, $v1, -1
/* 00444AE0 2D210008 */  sltiu $at, $t1, 8
/* 00444AE4 102001EA */  beqz  $at, .L00445290
/* 00444AE8 00000000 */   nop
/* 00444AEC 8F818044 */  lw    $at, %got(jtbl_1000C900)($gp)
/* 00444AF0 00094880 */  sll   $t1, $t1, 2
/* 00444AF4 00290821 */  addu  $at, $at, $t1
/* 00444AF8 8C29C900 */  lw    $t1, %lo(jtbl_1000C900)($at)
/* 00444AFC 013C4821 */  addu  $t1, $t1, $gp
/* 00444B00 01200008 */  jr    $t1
/* 00444B04 00000000 */   nop
.L00444B08:
/* 00444B08 920A0000 */  lbu   $t2, ($s0)
/* 00444B0C 24010002 */  li    $at, 2
/* 00444B10 154101E9 */  bne   $t2, $at, .L004452B8
/* 00444B14 00000000 */   nop
/* 00444B18 92020001 */  lbu   $v0, 1($s0)
/* 00444B1C 922B0001 */  lbu   $t3, 1($s1)
/* 00444B20 3C01BAA0 */  lui   $at, 0xbaa0
/* 00444B24 2C4C0020 */  sltiu $t4, $v0, 0x20
/* 00444B28 156201E3 */  bne   $t3, $v0, .L004452B8
/* 00444B2C 000C6823 */   negu  $t5, $t4
/* 00444B30 01A17024 */  and   $t6, $t5, $at
/* 00444B34 004E7804 */  sllv  $t7, $t6, $v0
/* 00444B38 05E10007 */  bgez  $t7, .L00444B58
/* 00444B3C 2C490020 */   sltiu $t1, $v0, 0x20
/* 00444B40 8E380020 */  lw    $t8, 0x20($s1)
/* 00444B44 8E190010 */  lw    $t9, 0x10($s0)
/* 00444B48 171901DB */  bne   $t8, $t9, .L004452B8
/* 00444B4C 00000000 */   nop
/* 00444B50 100001D9 */  b     .L004452B8
/* 00444B54 24080001 */   li    $t0, 1
.L00444B58:
/* 00444B58 00095023 */  negu  $t2, $t1
/* 00444B5C 3C010500 */  lui   $at, 0x500
/* 00444B60 01415824 */  and   $t3, $t2, $at
/* 00444B64 004B6004 */  sllv  $t4, $t3, $v0
/* 00444B68 0581000B */  bgez  $t4, .L00444B98
/* 00444B6C 24010009 */   li    $at, 9
/* 00444B70 8E2E0020 */  lw    $t6, 0x20($s1)
/* 00444B74 8E180010 */  lw    $t8, 0x10($s0)
/* 00444B78 8E2F0024 */  lw    $t7, 0x24($s1)
/* 00444B7C 8E190014 */  lw    $t9, 0x14($s0)
/* 00444B80 15D801CD */  bne   $t6, $t8, .L004452B8
/* 00444B84 00000000 */   nop
/* 00444B88 15F901CB */  bne   $t7, $t9, .L004452B8
/* 00444B8C 00000000 */   nop
/* 00444B90 100001C9 */  b     .L004452B8
/* 00444B94 24080001 */   li    $t0, 1
.L00444B98:
/* 00444B98 96230020 */  lhu   $v1, 0x20($s1)
/* 00444B9C 14410005 */  bne   $v0, $at, .L00444BB4
/* 00444BA0 96040010 */   lhu   $a0, 0x10($s0)
/* 00444BA4 146401C4 */  bne   $v1, $a0, .L004452B8
/* 00444BA8 00000000 */   nop
/* 00444BAC 100001C2 */  b     .L004452B8
/* 00444BB0 24080001 */   li    $t0, 1
.L00444BB4:
/* 00444BB4 146401C0 */  bne   $v1, $a0, .L004452B8
/* 00444BB8 00000000 */   nop
/* 00444BBC 100001BE */  b     .L004452B8
/* 00444BC0 24080001 */   li    $t0, 1
.L00444BC4:
/* 00444BC4 920D0000 */  lbu   $t5, ($s0)
/* 00444BC8 24010008 */  li    $at, 8
/* 00444BCC 15A101BA */  bne   $t5, $at, .L004452B8
/* 00444BD0 00000000 */   nop
/* 00444BD4 92290001 */  lbu   $t1, 1($s1)
/* 00444BD8 920A0001 */  lbu   $t2, 1($s0)
/* 00444BDC 152A01B6 */  bne   $t1, $t2, .L004452B8
/* 00444BE0 00000000 */   nop
/* 00444BE4 962B0020 */  lhu   $t3, 0x20($s1)
/* 00444BE8 960C0010 */  lhu   $t4, 0x10($s0)
/* 00444BEC 156C01B2 */  bne   $t3, $t4, .L004452B8
/* 00444BF0 00000000 */   nop
/* 00444BF4 100001B0 */  b     .L004452B8
/* 00444BF8 24080001 */   li    $t0, 1
.L00444BFC:
/* 00444BFC 920E0000 */  lbu   $t6, ($s0)
/* 00444C00 24010001 */  li    $at, 1
/* 00444C04 15C101AC */  bne   $t6, $at, .L004452B8
/* 00444C08 00000000 */   nop
/* 00444C0C 8E2F0020 */  lw    $t7, 0x20($s1)
/* 00444C10 8E180010 */  lw    $t8, 0x10($s0)
/* 00444C14 15F801A8 */  bne   $t7, $t8, .L004452B8
/* 00444C18 00000000 */   nop
/* 00444C1C 8E390030 */  lw    $t9, 0x30($s1)
/* 00444C20 8E09001C */  lw    $t1, 0x1c($s0)
/* 00444C24 00196AC2 */  srl   $t5, $t9, 0xb
/* 00444C28 000952C2 */  srl   $t2, $t1, 0xb
/* 00444C2C 15AA01A2 */  bne   $t5, $t2, .L004452B8
/* 00444C30 00000000 */   nop
/* 00444C34 100001A0 */  b     .L004452B8
/* 00444C38 24080001 */   li    $t0, 1
.L00444C3C:
/* 00444C3C 920B0000 */  lbu   $t3, ($s0)
/* 00444C40 24010005 */  li    $at, 5
/* 00444C44 1561019C */  bne   $t3, $at, .L004452B8
/* 00444C48 00000000 */   nop
/* 00444C4C 8E2C0020 */  lw    $t4, 0x20($s1)
/* 00444C50 8E0E0010 */  lw    $t6, 0x10($s0)
/* 00444C54 158E0198 */  bne   $t4, $t6, .L004452B8
/* 00444C58 00000000 */   nop
/* 00444C5C 8E2F0024 */  lw    $t7, 0x24($s1)
/* 00444C60 8E180014 */  lw    $t8, 0x14($s0)
/* 00444C64 15F80194 */  bne   $t7, $t8, .L004452B8
/* 00444C68 00000000 */   nop
/* 00444C6C 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00444C70 8E040018 */  lw    $a0, 0x18($s0)
/* 00444C74 8E05001C */  lw    $a1, 0x1c($s0)
/* 00444C78 8E26002C */  lw    $a2, 0x2c($s1)
/* 00444C7C 8E270030 */  lw    $a3, 0x30($s1)
/* 00444C80 A3A80037 */  sb    $t0, 0x37($sp)
/* 00444C84 AFA40000 */  sw    $a0, ($sp)
/* 00444C88 AFA50004 */  sw    $a1, 4($sp)
/* 00444C8C AFA60008 */  sw    $a2, 8($sp)
/* 00444C90 0320F809 */  jalr  $t9
/* 00444C94 AFA7000C */   sw    $a3, 0xc($sp)
/* 00444C98 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00444C9C 10400186 */  beqz  $v0, .L004452B8
/* 00444CA0 93A80037 */   lbu   $t0, 0x37($sp)
/* 00444CA4 10000184 */  b     .L004452B8
/* 00444CA8 24080001 */   li    $t0, 1
.L00444CAC:
/* 00444CAC 920B0000 */  lbu   $t3, ($s0)
/* 00444CB0 24010003 */  li    $at, 3
/* 00444CB4 15610180 */  bne   $t3, $at, .L004452B8
/* 00444CB8 00000000 */   nop
/* 00444CBC 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00444CC0 8E040010 */  lw    $a0, 0x10($s0)
/* 00444CC4 8E050014 */  lw    $a1, 0x14($s0)
/* 00444CC8 8E260028 */  lw    $a2, 0x28($s1)
/* 00444CCC 8E27002C */  lw    $a3, 0x2c($s1)
/* 00444CD0 A3A80037 */  sb    $t0, 0x37($sp)
/* 00444CD4 AFA40000 */  sw    $a0, ($sp)
/* 00444CD8 AFA50004 */  sw    $a1, 4($sp)
/* 00444CDC AFA60008 */  sw    $a2, 8($sp)
/* 00444CE0 0320F809 */  jalr  $t9
/* 00444CE4 AFA7000C */   sw    $a3, 0xc($sp)
/* 00444CE8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00444CEC 10400172 */  beqz  $v0, .L004452B8
/* 00444CF0 93A80037 */   lbu   $t0, 0x37($sp)
/* 00444CF4 10000170 */  b     .L004452B8
/* 00444CF8 24080001 */   li    $t0, 1
.L00444CFC:
/* 00444CFC 92190000 */  lbu   $t9, ($s0)
/* 00444D00 24010006 */  li    $at, 6
/* 00444D04 1721016C */  bne   $t9, $at, .L004452B8
/* 00444D08 00000000 */   nop
/* 00444D0C 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00444D10 8E040010 */  lw    $a0, 0x10($s0)
/* 00444D14 8E050014 */  lw    $a1, 0x14($s0)
/* 00444D18 8E260028 */  lw    $a2, 0x28($s1)
/* 00444D1C 8E27002C */  lw    $a3, 0x2c($s1)
/* 00444D20 A3A80037 */  sb    $t0, 0x37($sp)
/* 00444D24 AFA40000 */  sw    $a0, ($sp)
/* 00444D28 AFA50004 */  sw    $a1, 4($sp)
/* 00444D2C AFA60008 */  sw    $a2, 8($sp)
/* 00444D30 0320F809 */  jalr  $t9
/* 00444D34 AFA7000C */   sw    $a3, 0xc($sp)
/* 00444D38 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00444D3C 1040015E */  beqz  $v0, .L004452B8
/* 00444D40 93A80037 */   lbu   $t0, 0x37($sp)
/* 00444D44 1000015C */  b     .L004452B8
/* 00444D48 24080001 */   li    $t0, 1
.L00444D4C:
/* 00444D4C 920C0000 */  lbu   $t4, ($s0)
/* 00444D50 24010004 */  li    $at, 4
/* 00444D54 15810158 */  bne   $t4, $at, .L004452B8
/* 00444D58 00000000 */   nop
/* 00444D5C 92220020 */  lbu   $v0, 0x20($s1)
/* 00444D60 920E0010 */  lbu   $t6, 0x10($s0)
/* 00444D64 144E0154 */  bne   $v0, $t6, .L004452B8
/* 00444D68 00000000 */   nop
/* 00444D6C 100000D2 */  b     .L004450B8
/* 00444D70 304300FF */   andi  $v1, $v0, 0xff
.L00444D74:
/* 00444D74 922F0001 */  lbu   $t7, 1($s1)
/* 00444D78 92180001 */  lbu   $t8, 1($s0)
/* 00444D7C 15F8014E */  bne   $t7, $t8, .L004452B8
/* 00444D80 00000000 */   nop
/* 00444D84 8E040014 */  lw    $a0, 0x14($s0)
/* 00444D88 16440004 */  bne   $s2, $a0, .L00444D9C
/* 00444D8C 00000000 */   nop
/* 00444D90 8E190018 */  lw    $t9, 0x18($s0)
/* 00444D94 52790007 */  beql  $s3, $t9, .L00444DB4
/* 00444D98 922D003E */   lbu   $t5, 0x3e($s1)
.L00444D9C:
/* 00444D9C 16640146 */  bne   $s3, $a0, .L004452B8
/* 00444DA0 00000000 */   nop
/* 00444DA4 8E090018 */  lw    $t1, 0x18($s0)
/* 00444DA8 16490143 */  bne   $s2, $t1, .L004452B8
/* 00444DAC 00000000 */   nop
/* 00444DB0 922D003E */  lbu   $t5, 0x3e($s1)
.L00444DB4:
/* 00444DB4 920A0011 */  lbu   $t2, 0x11($s0)
/* 00444DB8 15AA013F */  bne   $t5, $t2, .L004452B8
/* 00444DBC 00000000 */   nop
/* 00444DC0 1000013D */  b     .L004452B8
/* 00444DC4 24080001 */   li    $t0, 1
.L00444DC8:
/* 00444DC8 922B0001 */  lbu   $t3, 1($s1)
.L00444DCC:
/* 00444DCC 920C0001 */  lbu   $t4, 1($s0)
/* 00444DD0 156C0139 */  bne   $t3, $t4, .L004452B8
/* 00444DD4 00000000 */   nop
/* 00444DD8 8E040014 */  lw    $a0, 0x14($s0)
/* 00444DDC 16440004 */  bne   $s2, $a0, .L00444DF0
/* 00444DE0 00000000 */   nop
/* 00444DE4 8E0E0018 */  lw    $t6, 0x18($s0)
/* 00444DE8 126E0006 */  beq   $s3, $t6, .L00444E04
/* 00444DEC 00000000 */   nop
.L00444DF0:
/* 00444DF0 16640131 */  bne   $s3, $a0, .L004452B8
/* 00444DF4 00000000 */   nop
/* 00444DF8 8E0F0018 */  lw    $t7, 0x18($s0)
/* 00444DFC 164F012E */  bne   $s2, $t7, .L004452B8
/* 00444E00 00000000 */   nop
.L00444E04:
/* 00444E04 1000012C */  b     .L004452B8
/* 00444E08 24080001 */   li    $t0, 1
.L00444E0C:
/* 00444E0C 92380001 */  lbu   $t8, 1($s1)
.L00444E10:
/* 00444E10 92190001 */  lbu   $t9, 1($s0)
/* 00444E14 17190128 */  bne   $t8, $t9, .L004452B8
/* 00444E18 00000000 */   nop
/* 00444E1C 8E090014 */  lw    $t1, 0x14($s0)
/* 00444E20 16490125 */  bne   $s2, $t1, .L004452B8
/* 00444E24 00000000 */   nop
/* 00444E28 8E0D0018 */  lw    $t5, 0x18($s0)
/* 00444E2C 166D0122 */  bne   $s3, $t5, .L004452B8
/* 00444E30 00000000 */   nop
/* 00444E34 922A003E */  lbu   $t2, 0x3e($s1)
/* 00444E38 920B0011 */  lbu   $t3, 0x11($s0)
/* 00444E3C 154B011E */  bne   $t2, $t3, .L004452B8
/* 00444E40 00000000 */   nop
/* 00444E44 1000011C */  b     .L004452B8
/* 00444E48 24080001 */   li    $t0, 1
.L00444E4C:
/* 00444E4C 922C0001 */  lbu   $t4, 1($s1)
/* 00444E50 920E0001 */  lbu   $t6, 1($s0)
/* 00444E54 158E0118 */  bne   $t4, $t6, .L004452B8
/* 00444E58 00000000 */   nop
/* 00444E5C 8E0F0014 */  lw    $t7, 0x14($s0)
/* 00444E60 164F0115 */  bne   $s2, $t7, .L004452B8
/* 00444E64 00000000 */   nop
/* 00444E68 8E180018 */  lw    $t8, 0x18($s0)
/* 00444E6C 16780112 */  bne   $s3, $t8, .L004452B8
/* 00444E70 00000000 */   nop
/* 00444E74 10000110 */  b     .L004452B8
/* 00444E78 24080001 */   li    $t0, 1
.L00444E7C:
/* 00444E7C 92390001 */  lbu   $t9, 1($s1)
/* 00444E80 92090001 */  lbu   $t1, 1($s0)
/* 00444E84 1729010C */  bne   $t9, $t1, .L004452B8
/* 00444E88 00000000 */   nop
/* 00444E8C 8E0D0014 */  lw    $t5, 0x14($s0)
/* 00444E90 164D0109 */  bne   $s2, $t5, .L004452B8
/* 00444E94 00000000 */   nop
/* 00444E98 8E0A0018 */  lw    $t2, 0x18($s0)
/* 00444E9C 166A0106 */  bne   $s3, $t2, .L004452B8
/* 00444EA0 00000000 */   nop
/* 00444EA4 962B003C */  lhu   $t3, 0x3c($s1)
/* 00444EA8 960C0024 */  lhu   $t4, 0x24($s0)
/* 00444EAC 156C0102 */  bne   $t3, $t4, .L004452B8
/* 00444EB0 00000000 */   nop
/* 00444EB4 10000100 */  b     .L004452B8
/* 00444EB8 24080001 */   li    $t0, 1
/* 00444EBC 922E0001 */  lbu   $t6, 1($s1)
.L00444EC0:
/* 00444EC0 920F0001 */  lbu   $t7, 1($s0)
/* 00444EC4 15CF00FC */  bne   $t6, $t7, .L004452B8
/* 00444EC8 00000000 */   nop
/* 00444ECC 8E38002C */  lw    $t8, 0x2c($s1)
/* 00444ED0 8E19001C */  lw    $t9, 0x1c($s0)
/* 00444ED4 171900F8 */  bne   $t8, $t9, .L004452B8
/* 00444ED8 00000000 */   nop
/* 00444EDC 8E090014 */  lw    $t1, 0x14($s0)
/* 00444EE0 164900F5 */  bne   $s2, $t1, .L004452B8
/* 00444EE4 00000000 */   nop
/* 00444EE8 8E0D0018 */  lw    $t5, 0x18($s0)
/* 00444EEC 166D00F2 */  bne   $s3, $t5, .L004452B8
/* 00444EF0 00000000 */   nop
/* 00444EF4 100000F0 */  b     .L004452B8
/* 00444EF8 24080001 */   li    $t0, 1
.L00444EFC:
/* 00444EFC 922A0001 */  lbu   $t2, 1($s1)
/* 00444F00 920B0001 */  lbu   $t3, 1($s0)
/* 00444F04 154B00EC */  bne   $t2, $t3, .L004452B8
/* 00444F08 00000000 */   nop
/* 00444F0C 8E0C0014 */  lw    $t4, 0x14($s0)
/* 00444F10 164C00E9 */  bne   $s2, $t4, .L004452B8
/* 00444F14 00000000 */   nop
/* 00444F18 922E003E */  lbu   $t6, 0x3e($s1)
/* 00444F1C 920F0011 */  lbu   $t7, 0x11($s0)
/* 00444F20 15CF00E5 */  bne   $t6, $t7, .L004452B8
/* 00444F24 00000000 */   nop
/* 00444F28 100000E3 */  b     .L004452B8
/* 00444F2C 24080001 */   li    $t0, 1
.L00444F30:
/* 00444F30 92380001 */  lbu   $t8, 1($s1)
/* 00444F34 92190001 */  lbu   $t9, 1($s0)
/* 00444F38 171900DF */  bne   $t8, $t9, .L004452B8
/* 00444F3C 00000000 */   nop
/* 00444F40 8E090014 */  lw    $t1, 0x14($s0)
/* 00444F44 164900DC */  bne   $s2, $t1, .L004452B8
/* 00444F48 00000000 */   nop
/* 00444F4C 8E2D002C */  lw    $t5, 0x2c($s1)
/* 00444F50 8E0A001C */  lw    $t2, 0x1c($s0)
/* 00444F54 15AA00D8 */  bne   $t5, $t2, .L004452B8
/* 00444F58 00000000 */   nop
/* 00444F5C 922B003E */  lbu   $t3, 0x3e($s1)
/* 00444F60 920C0011 */  lbu   $t4, 0x11($s0)
/* 00444F64 156C00D4 */  bne   $t3, $t4, .L004452B8
/* 00444F68 00000000 */   nop
/* 00444F6C 100000D2 */  b     .L004452B8
/* 00444F70 24080001 */   li    $t0, 1
.L00444F74:
/* 00444F74 922E0001 */  lbu   $t6, 1($s1)
/* 00444F78 920F0001 */  lbu   $t7, 1($s0)
/* 00444F7C 15CF00CE */  bne   $t6, $t7, .L004452B8
/* 00444F80 00000000 */   nop
/* 00444F84 92380038 */  lbu   $t8, 0x38($s1)
/* 00444F88 92190024 */  lbu   $t9, 0x24($s0)
/* 00444F8C 171900CA */  bne   $t8, $t9, .L004452B8
/* 00444F90 00000000 */   nop
/* 00444F94 8E090014 */  lw    $t1, 0x14($s0)
/* 00444F98 164900C7 */  bne   $s2, $t1, .L004452B8
/* 00444F9C 00000000 */   nop
/* 00444FA0 922D003E */  lbu   $t5, 0x3e($s1)
/* 00444FA4 920A0011 */  lbu   $t2, 0x11($s0)
/* 00444FA8 15AA00C3 */  bne   $t5, $t2, .L004452B8
/* 00444FAC 00000000 */   nop
/* 00444FB0 100000C1 */  b     .L004452B8
/* 00444FB4 24080001 */   li    $t0, 1
.L00444FB8:
/* 00444FB8 8E2B002C */  lw    $t3, 0x2c($s1)
/* 00444FBC 8E0C001C */  lw    $t4, 0x1c($s0)
/* 00444FC0 156C00BD */  bne   $t3, $t4, .L004452B8
/* 00444FC4 00000000 */   nop
/* 00444FC8 962E003C */  lhu   $t6, 0x3c($s1)
/* 00444FCC 960F0024 */  lhu   $t7, 0x24($s0)
/* 00444FD0 15CF00B9 */  bne   $t6, $t7, .L004452B8
/* 00444FD4 00000000 */   nop
/* 00444FD8 8E180014 */  lw    $t8, 0x14($s0)
/* 00444FDC 165800B6 */  bne   $s2, $t8, .L004452B8
/* 00444FE0 00000000 */   nop
/* 00444FE4 100000B4 */  b     .L004452B8
/* 00444FE8 24080001 */   li    $t0, 1
.L00444FEC:
/* 00444FEC 8E190014 */  lw    $t9, 0x14($s0)
/* 00444FF0 165900B1 */  bne   $s2, $t9, .L004452B8
/* 00444FF4 00000000 */   nop
/* 00444FF8 100000AF */  b     .L004452B8
/* 00444FFC 24080001 */   li    $t0, 1
.L00445000:
/* 00445000 92290001 */  lbu   $t1, 1($s1)
.L00445004:
/* 00445004 920D0001 */  lbu   $t5, 1($s0)
/* 00445008 152D00AB */  bne   $t1, $t5, .L004452B8
/* 0044500C 00000000 */   nop
/* 00445010 8E0A0014 */  lw    $t2, 0x14($s0)
/* 00445014 164A00A8 */  bne   $s2, $t2, .L004452B8
/* 00445018 00000000 */   nop
/* 0044501C 8E2B002C */  lw    $t3, 0x2c($s1)
/* 00445020 8E0C001C */  lw    $t4, 0x1c($s0)
/* 00445024 156C00A4 */  bne   $t3, $t4, .L004452B8
/* 00445028 00000000 */   nop
/* 0044502C 962E003C */  lhu   $t6, 0x3c($s1)
/* 00445030 960F0024 */  lhu   $t7, 0x24($s0)
/* 00445034 15CF00A0 */  bne   $t6, $t7, .L004452B8
/* 00445038 00000000 */   nop
/* 0044503C 1000009E */  b     .L004452B8
/* 00445040 24080001 */   li    $t0, 1
.L00445044:
/* 00445044 8E040014 */  lw    $a0, 0x14($s0)
/* 00445048 16440004 */  bne   $s2, $a0, .L0044505C
/* 0044504C 00000000 */   nop
/* 00445050 8E180018 */  lw    $t8, 0x18($s0)
/* 00445054 52780007 */  beql  $s3, $t8, .L00445074
/* 00445058 8E29002C */   lw    $t1, 0x2c($s1)
.L0044505C:
/* 0044505C 16640096 */  bne   $s3, $a0, .L004452B8
/* 00445060 00000000 */   nop
/* 00445064 8E190018 */  lw    $t9, 0x18($s0)
/* 00445068 16590093 */  bne   $s2, $t9, .L004452B8
/* 0044506C 00000000 */   nop
/* 00445070 8E29002C */  lw    $t1, 0x2c($s1)
.L00445074:
/* 00445074 8E0D001C */  lw    $t5, 0x1c($s0)
/* 00445078 152D008F */  bne   $t1, $t5, .L004452B8
/* 0044507C 00000000 */   nop
/* 00445080 1000008D */  b     .L004452B8
/* 00445084 24080001 */   li    $t0, 1
.L00445088:
/* 00445088 8E0A0014 */  lw    $t2, 0x14($s0)
/* 0044508C 164A008A */  bne   $s2, $t2, .L004452B8
/* 00445090 00000000 */   nop
/* 00445094 8E0B0018 */  lw    $t3, 0x18($s0)
/* 00445098 166B0087 */  bne   $s3, $t3, .L004452B8
/* 0044509C 00000000 */   nop
/* 004450A0 8E2C002C */  lw    $t4, 0x2c($s1)
/* 004450A4 8E0E001C */  lw    $t6, 0x1c($s0)
/* 004450A8 158E0083 */  bne   $t4, $t6, .L004452B8
/* 004450AC 00000000 */   nop
/* 004450B0 10000081 */  b     .L004452B8
/* 004450B4 24080001 */   li    $t0, 1
.L004450B8:
/* 004450B8 2C610063 */  sltiu $at, $v1, 0x63
/* 004450BC 14200026 */  bnez  $at, .L00445158
/* 004450C0 2C61007E */   sltiu $at, $v1, 0x7e
/* 004450C4 14200015 */  bnez  $at, .L0044511C
/* 004450C8 2478FF92 */   addiu $t8, $v1, -0x6e
/* 004450CC 2C610094 */  sltiu $at, $v1, 0x94
/* 004450D0 14200006 */  bnez  $at, .L004450EC
/* 004450D4 246FFF7A */   addiu $t7, $v1, -0x86
/* 004450D8 2401009A */  li    $at, 154
/* 004450DC 5061FFC9 */  beql  $v1, $at, .L00445004
/* 004450E0 92290001 */   lbu   $t1, 1($s1)
/* 004450E4 1000004B */  b     .L00445214
/* 004450E8 00000000 */   nop
.L004450EC:
/* 004450EC 2C61008E */  sltiu $at, $v1, 0x8e
/* 004450F0 10200062 */  beqz  $at, .L0044527C
/* 004450F4 2DE10008 */   sltiu $at, $t7, 8
/* 004450F8 10200046 */  beqz  $at, .L00445214
/* 004450FC 00000000 */   nop
/* 00445100 8F818044 */  lw    $at, %got(jtbl_1000C8E0)($gp)
/* 00445104 000F7880 */  sll   $t7, $t7, 2
/* 00445108 002F0821 */  addu  $at, $at, $t7
/* 0044510C 8C2FC8E0 */  lw    $t7, %lo(jtbl_1000C8E0)($at)
/* 00445110 01FC7821 */  addu  $t7, $t7, $gp
/* 00445114 01E00008 */  jr    $t7
/* 00445118 00000000 */   nop
.L0044511C:
/* 0044511C 24010069 */  li    $at, 105
/* 00445120 5061FF3B */  beql  $v1, $at, .L00444E10
/* 00445124 92380001 */   lbu   $t8, 1($s1)
/* 00445128 2C610078 */  sltiu $at, $v1, 0x78
/* 0044512C 1020004E */  beqz  $at, .L00445268
/* 00445130 2F01000A */   sltiu $at, $t8, 0xa
/* 00445134 10200037 */  beqz  $at, .L00445214
/* 00445138 00000000 */   nop
/* 0044513C 8F818044 */  lw    $at, %got(jtbl_1000C8B8)($gp)
/* 00445140 0018C080 */  sll   $t8, $t8, 2
/* 00445144 00380821 */  addu  $at, $at, $t8
/* 00445148 8C38C8B8 */  lw    $t8, %lo(jtbl_1000C8B8)($at)
/* 0044514C 031CC021 */  addu  $t8, $t8, $gp
/* 00445150 03000008 */  jr    $t8
/* 00445154 00000000 */   nop
.L00445158:
/* 00445158 2C610024 */  sltiu $at, $v1, 0x24
/* 0044515C 14200011 */  bnez  $at, .L004451A4
/* 00445160 2C61003D */   sltiu $at, $v1, 0x3d
/* 00445164 14200036 */  bnez  $at, .L00445240
/* 00445168 246AFFD8 */   addiu $t2, $v1, -0x28
/* 0044516C 24010041 */  li    $at, 65
/* 00445170 5061FF53 */  beql  $v1, $at, .L00444EC0
/* 00445174 922E0001 */   lbu   $t6, 1($s1)
/* 00445178 2479FFB3 */  addiu $t9, $v1, -0x4d
/* 0044517C 2F210016 */  sltiu $at, $t9, 0x16
/* 00445180 10200024 */  beqz  $at, .L00445214
/* 00445184 00000000 */   nop
/* 00445188 8F818044 */  lw    $at, %got(jtbl_1000C860)($gp)
/* 0044518C 0019C880 */  sll   $t9, $t9, 2
/* 00445190 00390821 */  addu  $at, $at, $t9
/* 00445194 8C39C860 */  lw    $t9, %lo(jtbl_1000C860)($at)
/* 00445198 033CC821 */  addu  $t9, $t9, $gp
/* 0044519C 03200008 */  jr    $t9
/* 004451A0 00000000 */   nop
.L004451A4:
/* 004451A4 2C61000F */  sltiu $at, $v1, 0xf
/* 004451A8 1420000D */  bnez  $at, .L004451E0
/* 004451AC 2469FFE8 */   addiu $t1, $v1, -0x18
/* 004451B0 2C61001E */  sltiu $at, $v1, 0x1e
/* 004451B4 10200014 */  beqz  $at, .L00445208
/* 004451B8 2D210006 */   sltiu $at, $t1, 6
/* 004451BC 10200015 */  beqz  $at, .L00445214
/* 004451C0 00000000 */   nop
/* 004451C4 8F818044 */  lw    $at, %got(jtbl_1000C7F4)($gp)
/* 004451C8 00094880 */  sll   $t1, $t1, 2
/* 004451CC 00290821 */  addu  $at, $at, $t1
/* 004451D0 8C29C7F4 */  lw    $t1, %lo(jtbl_1000C7F4)($at)
/* 004451D4 013C4821 */  addu  $t1, $t1, $gp
/* 004451D8 01200008 */  jr    $t1
/* 004451DC 00000000 */   nop
.L004451E0:
/* 004451E0 2C61000F */  sltiu $at, $v1, 0xf
/* 004451E4 1020000B */  beqz  $at, .L00445214
/* 004451E8 00000000 */   nop
/* 004451EC 8F818044 */  lw    $at, %got(jtbl_1000C7B8)($gp)
/* 004451F0 00036880 */  sll   $t5, $v1, 2
/* 004451F4 002D0821 */  addu  $at, $at, $t5
/* 004451F8 8C2DC7B8 */  lw    $t5, %lo(jtbl_1000C7B8)($at)
/* 004451FC 01BC6821 */  addu  $t5, $t5, $gp
/* 00445200 01A00008 */  jr    $t5
/* 00445204 00000000 */   nop
.L00445208:
/* 00445208 24010023 */  li    $at, 35
/* 0044520C 5061FEEF */  beql  $v1, $at, .L00444DCC
/* 00445210 922B0001 */   lbu   $t3, 1($s1)
.L00445214:
/* 00445214 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00445218 8F868044 */  lw    $a2, %got(RO_1000C7AB)($gp)
/* 0044521C 24040001 */  li    $a0, 1
/* 00445220 240500B1 */  li    $a1, 177
/* 00445224 2407000A */  li    $a3, 10
/* 00445228 A3A80037 */  sb    $t0, 0x37($sp)
/* 0044522C 0320F809 */  jalr  $t9
/* 00445230 24C6C7AB */   addiu $a2, %lo(RO_1000C7AB) # addiu $a2, $a2, -0x3855
/* 00445234 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00445238 1000001F */  b     .L004452B8
/* 0044523C 93A80037 */   lbu   $t0, 0x37($sp)
.L00445240:
/* 00445240 2D410015 */  sltiu $at, $t2, 0x15
/* 00445244 1020FFF3 */  beqz  $at, .L00445214
/* 00445248 00000000 */   nop
/* 0044524C 8F818044 */  lw    $at, %got(jtbl_1000C80C)($gp)
/* 00445250 000A5080 */  sll   $t2, $t2, 2
/* 00445254 002A0821 */  addu  $at, $at, $t2
/* 00445258 8C2AC80C */  lw    $t2, %lo(jtbl_1000C80C)($at)
/* 0044525C 015C5021 */  addu  $t2, $t2, $gp
/* 00445260 01400008 */  jr    $t2
/* 00445264 00000000 */   nop
.L00445268:
/* 00445268 2401007D */  li    $at, 125
/* 0044526C 5061FEE8 */  beql  $v1, $at, .L00444E10
/* 00445270 92380001 */   lbu   $t8, 1($s1)
/* 00445274 1000FFE7 */  b     .L00445214
/* 00445278 00000000 */   nop
.L0044527C:
/* 0044527C 24010093 */  li    $at, 147
/* 00445280 5061FF60 */  beql  $v1, $at, .L00445004
/* 00445284 92290001 */   lbu   $t1, 1($s1)
/* 00445288 1000FFE2 */  b     .L00445214
/* 0044528C 00000000 */   nop
.L00445290:
/* 00445290 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00445294 8F868044 */  lw    $a2, %got(RO_1000C7A1)($gp)
/* 00445298 24040001 */  li    $a0, 1
/* 0044529C 2405007B */  li    $a1, 123
/* 004452A0 2407000A */  li    $a3, 10
/* 004452A4 A3A80037 */  sb    $t0, 0x37($sp)
/* 004452A8 0320F809 */  jalr  $t9
/* 004452AC 24C6C7A1 */   addiu $a2, %lo(RO_1000C7A1) # addiu $a2, $a2, -0x385f
/* 004452B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004452B4 93A80037 */  lbu   $t0, 0x37($sp)
.L004452B8:
/* 004452B8 15000002 */  bnez  $t0, .L004452C4
/* 004452BC 00000000 */   nop
/* 004452C0 8E10000C */  lw    $s0, 0xc($s0)
.L004452C4:
/* 004452C4 15000003 */  bnez  $t0, .L004452D4
/* 004452C8 00000000 */   nop
/* 004452CC 5600FE03 */  bnezl $s0, .L00444ADC
/* 004452D0 92230000 */   lbu   $v1, ($s1)
.L004452D4:
/* 004452D4 150001EA */  bnez  $t0, .L00445A80
/* 004452D8 92230000 */   lbu   $v1, ($s1)
/* 004452DC 8F998348 */  lw    $t9, %call16(appendichain)($gp)
/* 004452E0 38650004 */  xori  $a1, $v1, 4
/* 004452E4 0005282B */  sltu  $a1, $zero, $a1
/* 004452E8 0320F809 */  jalr  $t9
/* 004452EC 97A40042 */   lhu   $a0, 0x42($sp)
/* 004452F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004452F4 14400006 */  bnez  $v0, .L00445310
/* 004452F8 00408025 */   move  $s0, $v0
/* 004452FC 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00445300 240B0001 */  li    $t3, 1
/* 00445304 8FA2003C */  lw    $v0, 0x3c($sp)
/* 00445308 100001F1 */  b     .L00445AD0
/* 0044530C A02B0000 */   sb    $t3, ($at)
.L00445310:
/* 00445310 922C0000 */  lbu   $t4, ($s1)
/* 00445314 24040001 */  li    $a0, 1
/* 00445318 24050100 */  li    $a1, 256
/* 0044531C A04C0000 */  sb    $t4, ($v0)
/* 00445320 922E0001 */  lbu   $t6, 1($s1)
/* 00445324 A04E0001 */  sb    $t6, 1($v0)
/* 00445328 92230000 */  lbu   $v1, ($s1)
/* 0044532C 246FFFFF */  addiu $t7, $v1, -1
/* 00445330 2DE10008 */  sltiu $at, $t7, 8
/* 00445334 10200106 */  beqz  $at, .L00445750
/* 00445338 00000000 */   nop
/* 0044533C 8F818044 */  lw    $at, %got(jtbl_1000CA84)($gp)
/* 00445340 000F7880 */  sll   $t7, $t7, 2
/* 00445344 002F0821 */  addu  $at, $at, $t7
/* 00445348 8C2FCA84 */  lw    $t7, %lo(jtbl_1000CA84)($at)
/* 0044534C 01FC7821 */  addu  $t7, $t7, $gp
/* 00445350 01E00008 */  jr    $t7
/* 00445354 00000000 */   nop
.L00445358:
/* 00445358 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0044535C 8F928908 */  lw     $s2, %got(err)($gp)
/* 00445360 8F858044 */  lw    $a1, %got(RO_1000C784)($gp)
/* 00445364 2406001D */  li    $a2, 29
/* 00445368 2407001D */  li    $a3, 29
/* 0044536C 8E440000 */  lw    $a0, ($s2)
/* 00445370 0320F809 */  jalr  $t9
/* 00445374 24A5C784 */   addiu $a1, %lo(RO_1000C784) # addiu $a1, $a1, -0x387c
/* 00445378 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044537C 8E440000 */  lw    $a0, ($s2)
/* 00445380 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00445384 0320F809 */  jalr  $t9
/* 00445388 00000000 */   nop
/* 0044538C 100000F6 */  b     .L00445768
/* 00445390 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445394:
/* 00445394 8E390020 */  lw    $t9, 0x20($s1)
/* 00445398 AC590010 */  sw    $t9, 0x10($v0)
/* 0044539C 8E380024 */  lw    $t8, 0x24($s1)
/* 004453A0 AC580014 */  sw    $t8, 0x14($v0)
/* 004453A4 8E290028 */  lw    $t1, 0x28($s1)
/* 004453A8 100000EF */  b     .L00445768
/* 004453AC AC490018 */   sw    $t1, 0x18($v0)
.L004453B0:
/* 004453B0 962D0020 */  lhu   $t5, 0x20($s1)
/* 004453B4 A44D0010 */  sh    $t5, 0x10($v0)
/* 004453B8 8E2A0024 */  lw    $t2, 0x24($s1)
/* 004453BC 100000EA */  b     .L00445768
/* 004453C0 AC4A0014 */   sw    $t2, 0x14($v0)
.L004453C4:
/* 004453C4 8E2B0020 */  lw    $t3, 0x20($s1)
/* 004453C8 AC4B0010 */  sw    $t3, 0x10($v0)
/* 004453CC 8E2E002C */  lw    $t6, 0x2c($s1)
/* 004453D0 AC4E0018 */  sw    $t6, 0x18($v0)
/* 004453D4 8E2C0030 */  lw    $t4, 0x30($s1)
/* 004453D8 AC4C001C */  sw    $t4, 0x1c($v0)
/* 004453DC 8E2F0024 */  lw    $t7, 0x24($s1)
/* 004453E0 100000E1 */  b     .L00445768
/* 004453E4 AC4F0014 */   sw    $t7, 0x14($v0)
.L004453E8:
/* 004453E8 8E380020 */  lw    $t8, 0x20($s1)
/* 004453EC AC580010 */  sw    $t8, 0x10($v0)
/* 004453F0 8E29002C */  lw    $t1, 0x2c($s1)
/* 004453F4 AC490018 */  sw    $t1, 0x18($v0)
/* 004453F8 8E390030 */  lw    $t9, 0x30($s1)
/* 004453FC AC59001C */  sw    $t9, 0x1c($v0)
/* 00445400 8E2D0024 */  lw    $t5, 0x24($s1)
/* 00445404 AC4D0014 */  sw    $t5, 0x14($v0)
/* 00445408 8E2A0034 */  lw    $t2, 0x34($s1)
/* 0044540C 8D4B0014 */  lw    $t3, 0x14($t2)
/* 00445410 100000D5 */  b     .L00445768
/* 00445414 AC4B0020 */   sw    $t3, 0x20($v0)
.L00445418:
/* 00445418 8E2E0028 */  lw    $t6, 0x28($s1)
/* 0044541C AC4E0010 */  sw    $t6, 0x10($v0)
/* 00445420 8E2C002C */  lw    $t4, 0x2c($s1)
/* 00445424 AC4C0014 */  sw    $t4, 0x14($v0)
/* 00445428 922F0020 */  lbu   $t7, 0x20($s1)
/* 0044542C A04F0018 */  sb    $t7, 0x18($v0)
/* 00445430 92380022 */  lbu   $t8, 0x22($s1)
/* 00445434 A0580019 */  sb    $t8, 0x19($v0)
/* 00445438 92390021 */  lbu   $t9, 0x21($s1)
/* 0044543C AC510008 */  sw    $s1, 8($v0)
/* 00445440 100000C9 */  b     .L00445768
/* 00445444 A059001A */   sb    $t9, 0x1a($v0)
.L00445448:
/* 00445448 8E2D0028 */  lw    $t5, 0x28($s1)
/* 0044544C AC4D0010 */  sw    $t5, 0x10($v0)
/* 00445450 8E29002C */  lw    $t1, 0x2c($s1)
/* 00445454 AC490014 */  sw    $t1, 0x14($v0)
/* 00445458 922A0020 */  lbu   $t2, 0x20($s1)
/* 0044545C A04A0018 */  sb    $t2, 0x18($v0)
/* 00445460 922B0022 */  lbu   $t3, 0x22($s1)
/* 00445464 A04B0019 */  sb    $t3, 0x19($v0)
/* 00445468 922C0021 */  lbu   $t4, 0x21($s1)
/* 0044546C A04C001A */  sb    $t4, 0x1a($v0)
/* 00445470 8E2E0024 */  lw    $t6, 0x24($s1)
/* 00445474 8DCF0014 */  lw    $t7, 0x14($t6)
/* 00445478 AC510008 */  sw    $s1, 8($v0)
/* 0044547C 100000BA */  b     .L00445768
/* 00445480 AC4F001C */   sw    $t7, 0x1c($v0)
.L00445484:
/* 00445484 92380020 */  lbu   $t8, 0x20($s1)
/* 00445488 AC520014 */  sw    $s2, 0x14($v0)
/* 0044548C AC530018 */  sw    $s3, 0x18($v0)
/* 00445490 A0580010 */  sb    $t8, 0x10($v0)
/* 00445494 330900FF */  andi  $t1, $t8, 0xff
/* 00445498 92390023 */  lbu   $t9, 0x23($s1)
/* 0044549C 252DFFE0 */  addiu $t5, $t1, -0x20
/* 004454A0 2DAA0040 */  sltiu $t2, $t5, 0x40
/* 004454A4 11400009 */  beqz  $t2, .L004454CC
/* 004454A8 A0590012 */   sb    $t9, 0x12($v0)
/* 004454AC 8F8E8044 */  lw    $t6, %got(D_10010928)($gp)
/* 004454B0 000D5943 */  sra   $t3, $t5, 5
/* 004454B4 000B6080 */  sll   $t4, $t3, 2
/* 004454B8 25CE0928 */  addiu $t6, %lo(D_10010928) # addiu $t6, $t6, 0x928
/* 004454BC 01CC7821 */  addu  $t7, $t6, $t4
/* 004454C0 8DF80000 */  lw    $t8, ($t7)
/* 004454C4 01B8C804 */  sllv  $t9, $t8, $t5
/* 004454C8 2B2A0000 */  slti  $t2, $t9, 0
.L004454CC:
/* 004454CC 55400004 */  bnezl $t2, .L004454E0
/* 004454D0 AC400024 */   sw    $zero, 0x24($v0)
/* 004454D4 922B003E */  lbu   $t3, 0x3e($s1)
/* 004454D8 A04B0011 */  sb    $t3, 0x11($v0)
/* 004454DC AC400024 */  sw    $zero, 0x24($v0)
.L004454E0:
/* 004454E0 10000036 */  b     .L004455BC
/* 004454E4 92230020 */   lbu   $v1, 0x20($s1)
.L004454E8:
/* 004454E8 8E2E002C */  lw    $t6, 0x2c($s1)
/* 004454EC 1000009E */  b     .L00445768
/* 004454F0 AC4E001C */   sw    $t6, 0x1c($v0)
.L004454F4:
/* 004454F4 8E2C002C */  lw    $t4, 0x2c($s1)
/* 004454F8 AC4C001C */  sw    $t4, 0x1c($v0)
/* 004454FC 962F003C */  lhu   $t7, 0x3c($s1)
/* 00445500 10000099 */  b     .L00445768
/* 00445504 A44F0024 */   sh    $t7, 0x24($v0)
.L00445508:
/* 00445508 8E38002C */  lw    $t8, 0x2c($s1)
/* 0044550C 10000096 */  b     .L00445768
/* 00445510 AC58001C */   sw    $t8, 0x1c($v0)
.L00445514:
/* 00445514 8E2D002C */  lw    $t5, 0x2c($s1)
/* 00445518 10000093 */  b     .L00445768
/* 0044551C AC4D001C */   sw    $t5, 0x1c($v0)
.L00445520:
/* 00445520 92390038 */  lbu   $t9, 0x38($s1)
/* 00445524 10000090 */  b     .L00445768
/* 00445528 A0590024 */   sb    $t9, 0x24($v0)
.L0044552C:
/* 0044552C 8E29002C */  lw    $t1, 0x2c($s1)
/* 00445530 AC49001C */  sw    $t1, 0x1c($v0)
/* 00445534 962A003C */  lhu   $t2, 0x3c($s1)
/* 00445538 1000008B */  b     .L00445768
/* 0044553C A44A0024 */   sh    $t2, 0x24($v0)
.L00445540:
/* 00445540 8E2B002C */  lw    $t3, 0x2c($s1)
.L00445544:
/* 00445544 AC4B001C */  sw    $t3, 0x1c($v0)
/* 00445548 962E003C */  lhu   $t6, 0x3c($s1)
/* 0044554C A44E0024 */  sh    $t6, 0x24($v0)
/* 00445550 922C003F */  lbu   $t4, 0x3f($s1)
/* 00445554 A04C0013 */  sb    $t4, 0x13($v0)
/* 00445558 8E2F0038 */  lw    $t7, 0x38($s1)
/* 0044555C AC510008 */  sw    $s1, 8($v0)
/* 00445560 10000081 */  b     .L00445768
/* 00445564 A44F0026 */   sh    $t7, 0x26($v0)
.L00445568:
/* 00445568 8E38002C */  lw    $t8, 0x2c($s1)
/* 0044556C AC58001C */  sw    $t8, 0x1c($v0)
/* 00445570 962D003C */  lhu   $t5, 0x3c($s1)
/* 00445574 AC510008 */  sw    $s1, 8($v0)
/* 00445578 1000007B */  b     .L00445768
/* 0044557C A44D0024 */   sh    $t5, 0x24($v0)
.L00445580:
/* 00445580 8E39002C */  lw    $t9, 0x2c($s1)
/* 00445584 AC59001C */  sw    $t9, 0x1c($v0)
/* 00445588 9629003C */  lhu   $t1, 0x3c($s1)
/* 0044558C AC510008 */  sw    $s1, 8($v0)
/* 00445590 10000075 */  b     .L00445768
/* 00445594 A4490024 */   sh    $t1, 0x24($v0)
.L00445598:
/* 00445598 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044559C 8F868044 */  lw    $a2, %got(RO_1000C77A)($gp)
/* 004455A0 24040001 */  li    $a0, 1
/* 004455A4 24050135 */  li    $a1, 309
/* 004455A8 2407000A */  li    $a3, 10
/* 004455AC 0320F809 */  jalr  $t9
/* 004455B0 24C6C77A */   addiu $a2, %lo(RO_1000C77A) # addiu $a2, $a2, -0x3886
/* 004455B4 1000006C */  b     .L00445768
/* 004455B8 8FBC0028 */   lw    $gp, 0x28($sp)
.L004455BC:
/* 004455BC 2C61006A */  sltiu $at, $v1, 0x6a
/* 004455C0 1420001A */  bnez  $at, .L0044562C
/* 004455C4 2C61008E */   sltiu $at, $v1, 0x8e
/* 004455C8 14200009 */  bnez  $at, .L004455F0
/* 004455CC 2478FF92 */   addiu $t8, $v1, -0x6e
/* 004455D0 24010093 */  li    $at, 147
/* 004455D4 5061FFDB */  beql  $v1, $at, .L00445544
/* 004455D8 8E2B002C */   lw    $t3, 0x2c($s1)
/* 004455DC 2401009A */  li    $at, 154
/* 004455E0 5061FFD8 */  beql  $v1, $at, .L00445544
/* 004455E4 8E2B002C */   lw    $t3, 0x2c($s1)
/* 004455E8 1000FFEB */  b     .L00445598
/* 004455EC 00000000 */   nop
.L004455F0:
/* 004455F0 2C610078 */  sltiu $at, $v1, 0x78
/* 004455F4 1420004C */  bnez  $at, .L00445728
/* 004455F8 246AFF7A */   addiu $t2, $v1, -0x86
/* 004455FC 2401007D */  li    $at, 125
/* 00445600 10610059 */  beq   $v1, $at, .L00445768
/* 00445604 2D410008 */   sltiu $at, $t2, 8
/* 00445608 1020FFE3 */  beqz  $at, .L00445598
/* 0044560C 00000000 */   nop
/* 00445610 8F818044 */  lw    $at, %got(jtbl_1000CA64)($gp)
/* 00445614 000A5080 */  sll   $t2, $t2, 2
/* 00445618 002A0821 */  addu  $at, $at, $t2
/* 0044561C 8C2ACA64 */  lw    $t2, %lo(jtbl_1000CA64)($at)
/* 00445620 015C5021 */  addu  $t2, $t2, $gp
/* 00445624 01400008 */  jr    $t2
/* 00445628 00000000 */   nop
.L0044562C:
/* 0044562C 2C610024 */  sltiu $at, $v1, 0x24
/* 00445630 14200010 */  bnez  $at, .L00445674
/* 00445634 2C610044 */   sltiu $at, $v1, 0x44
/* 00445638 1420002C */  bnez  $at, .L004456EC
/* 0044563C 246FFFD8 */   addiu $t7, $v1, -0x28
/* 00445640 2C610063 */  sltiu $at, $v1, 0x63
/* 00445644 10200033 */  beqz  $at, .L00445714
/* 00445648 246BFFB3 */   addiu $t3, $v1, -0x4d
/* 0044564C 2D610016 */  sltiu $at, $t3, 0x16
/* 00445650 1020FFD1 */  beqz  $at, .L00445598
/* 00445654 00000000 */   nop
/* 00445658 8F818044 */  lw    $at, %got(jtbl_1000C9E4)($gp)
/* 0044565C 000B5880 */  sll   $t3, $t3, 2
/* 00445660 002B0821 */  addu  $at, $at, $t3
/* 00445664 8C2BC9E4 */  lw    $t3, %lo(jtbl_1000C9E4)($at)
/* 00445668 017C5821 */  addu  $t3, $t3, $gp
/* 0044566C 01600008 */  jr    $t3
/* 00445670 00000000 */   nop
.L00445674:
/* 00445674 2C61000F */  sltiu $at, $v1, 0xf
/* 00445678 1420000D */  bnez  $at, .L004456B0
/* 0044567C 246EFFE8 */   addiu $t6, $v1, -0x18
/* 00445680 2C61001E */  sltiu $at, $v1, 0x1e
/* 00445684 10200014 */  beqz  $at, .L004456D8
/* 00445688 2DC10006 */   sltiu $at, $t6, 6
/* 0044568C 1020FFC2 */  beqz  $at, .L00445598
/* 00445690 00000000 */   nop
/* 00445694 8F818044 */  lw    $at, %got(jtbl_1000C95C)($gp)
/* 00445698 000E7080 */  sll   $t6, $t6, 2
/* 0044569C 002E0821 */  addu  $at, $at, $t6
/* 004456A0 8C2EC95C */  lw    $t6, %lo(jtbl_1000C95C)($at)
/* 004456A4 01DC7021 */  addu  $t6, $t6, $gp
/* 004456A8 01C00008 */  jr    $t6
/* 004456AC 00000000 */   nop
.L004456B0:
/* 004456B0 2C61000F */  sltiu $at, $v1, 0xf
/* 004456B4 1020FFB8 */  beqz  $at, .L00445598
/* 004456B8 00000000 */   nop
/* 004456BC 8F818044 */  lw    $at, %got(jtbl_1000C920)($gp)
/* 004456C0 00036080 */  sll   $t4, $v1, 2
/* 004456C4 002C0821 */  addu  $at, $at, $t4
/* 004456C8 8C2CC920 */  lw    $t4, %lo(jtbl_1000C920)($at)
/* 004456CC 019C6021 */  addu  $t4, $t4, $gp
/* 004456D0 01800008 */  jr    $t4
/* 004456D4 00000000 */   nop
.L004456D8:
/* 004456D8 24010023 */  li    $at, 35
/* 004456DC 50610023 */  beql  $v1, $at, .L0044576C
/* 004456E0 92230000 */   lbu   $v1, ($s1)
/* 004456E4 1000FFAC */  b     .L00445598
/* 004456E8 00000000 */   nop
.L004456EC:
/* 004456EC 2DE1001C */  sltiu $at, $t7, 0x1c
/* 004456F0 1020FFA9 */  beqz  $at, .L00445598
/* 004456F4 00000000 */   nop
/* 004456F8 8F818044 */  lw    $at, %got(jtbl_1000C974)($gp)
/* 004456FC 000F7880 */  sll   $t7, $t7, 2
/* 00445700 002F0821 */  addu  $at, $at, $t7
/* 00445704 8C2FC974 */  lw    $t7, %lo(jtbl_1000C974)($at)
/* 00445708 01FC7821 */  addu  $t7, $t7, $gp
/* 0044570C 01E00008 */  jr    $t7
/* 00445710 00000000 */   nop
.L00445714:
/* 00445714 24010069 */  li    $at, 105
/* 00445718 50610014 */  beql  $v1, $at, .L0044576C
/* 0044571C 92230000 */   lbu   $v1, ($s1)
/* 00445720 1000FF9D */  b     .L00445598
/* 00445724 00000000 */   nop
.L00445728:
/* 00445728 2F01000A */  sltiu $at, $t8, 0xa
/* 0044572C 1020FF9A */  beqz  $at, .L00445598
/* 00445730 00000000 */   nop
/* 00445734 8F818044 */  lw    $at, %got(jtbl_1000CA3C)($gp)
/* 00445738 0018C080 */  sll   $t8, $t8, 2
/* 0044573C 00380821 */  addu  $at, $at, $t8
/* 00445740 8C38CA3C */  lw    $t8, %lo(jtbl_1000CA3C)($at)
/* 00445744 031CC021 */  addu  $t8, $t8, $gp
/* 00445748 03000008 */  jr    $t8
/* 0044574C 00000000 */   nop
.L00445750:
/* 00445750 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00445754 8F868044 */  lw    $a2, %got(RO_1000C770)($gp)
/* 00445758 2407000A */  li    $a3, 10
/* 0044575C 0320F809 */  jalr  $t9
/* 00445760 24C6C770 */   addiu $a2, %lo(RO_1000C770) # addiu $a2, $a2, -0x3890
/* 00445764 8FBC0028 */  lw    $gp, 0x28($sp)
.L00445768:
/* 00445768 92230000 */  lbu   $v1, ($s1)
.L0044576C:
/* 0044576C 3C016000 */  lui   $at, 0x6000
/* 00445770 340BFFFF */  li    $t3, 65535
/* 00445774 2C6D0020 */  sltiu $t5, $v1, 0x20
/* 00445778 000DC823 */  negu  $t9, $t5
/* 0044577C 03214824 */  and   $t1, $t9, $at
/* 00445780 00695004 */  sllv  $t2, $t1, $v1
/* 00445784 05410003 */  bgez  $t2, .L00445794
/* 00445788 2C6E0020 */   sltiu $t6, $v1, 0x20
/* 0044578C 100000CE */  b     .L00445AC8
/* 00445790 A60B0002 */   sh    $t3, 2($s0)
.L00445794:
/* 00445794 000E6023 */  negu  $t4, $t6
/* 00445798 3C011E00 */  lui   $at, 0x1e00
/* 0044579C 01817824 */  and   $t7, $t4, $at
/* 004457A0 006FC004 */  sllv  $t8, $t7, $v1
/* 004457A4 070300C9 */  bgezl $t8, .L00445ACC
/* 004457A8 AE300014 */   sw    $s0, 0x14($s1)
/* 004457AC 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 004457B0 02002025 */  move  $a0, $s0
/* 004457B4 00002825 */  move  $a1, $zero
/* 004457B8 0320F809 */  jalr  $t9
/* 004457BC 00000000 */   nop
/* 004457C0 A6020002 */  sh    $v0, 2($s0)
/* 004457C4 92230000 */  lbu   $v1, ($s1)
/* 004457C8 3C011200 */  lui   $at, 0x1200
/* 004457CC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004457D0 2C6D0020 */  sltiu $t5, $v1, 0x20
/* 004457D4 000DC823 */  negu  $t9, $t5
/* 004457D8 03214824 */  and   $t1, $t9, $at
/* 004457DC 00695004 */  sllv  $t2, $t1, $v1
/* 004457E0 05410025 */  bgez  $t2, .L00445878
/* 004457E4 24010004 */   li    $at, 4
/* 004457E8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004457EC 8F848CD4 */  lw     $a0, %got(varbits)($gp)
/* 004457F0 3045FFFF */  andi  $a1, $v0, 0xffff
/* 004457F4 0320F809 */  jalr  $t9
/* 004457F8 00000000 */   nop
/* 004457FC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00445800 02002025 */  move  $a0, $s0
/* 00445804 00002825 */  move  $a1, $zero
/* 00445808 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 0044580C 0320F809 */  jalr  $t9
/* 00445810 00000000 */   nop
/* 00445814 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00445818 A6020024 */  sh    $v0, 0x24($s0)
/* 0044581C 3045FFFF */  andi  $a1, $v0, 0xffff
/* 00445820 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445824 8F848CE0 */  lw     $a0, %got(asgnbits)($gp)
/* 00445828 0320F809 */  jalr  $t9
/* 0044582C 00000000 */   nop
/* 00445830 922B0000 */  lbu   $t3, ($s1)
/* 00445834 24010006 */  li    $at, 6
/* 00445838 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044583C 556100A3 */  bnel  $t3, $at, .L00445ACC
/* 00445840 AE300014 */   sw    $s0, 0x14($s1)
/* 00445844 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445848 8F848CE4 */  lw     $a0, %got(slvarbits)($gp)
/* 0044584C 96050002 */  lhu   $a1, 2($s0)
/* 00445850 0320F809 */  jalr  $t9
/* 00445854 00000000 */   nop
/* 00445858 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044585C 96050024 */  lhu   $a1, 0x24($s0)
/* 00445860 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445864 8F848CE8 */  lw     $a0, %got(slasgnbits)($gp)
/* 00445868 0320F809 */  jalr  $t9
/* 0044586C 00000000 */   nop
/* 00445870 10000095 */  b     .L00445AC8
/* 00445874 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445878:
/* 00445878 54610094 */  bnel  $v1, $at, .L00445ACC
/* 0044587C AE300014 */   sw    $s0, 0x14($s1)
/* 00445880 92220020 */  lbu   $v0, 0x20($s1)
/* 00445884 2401005B */  li    $at, 91
/* 00445888 14410032 */  bne   $v0, $at, .L00445954
/* 0044588C 2C4B0080 */   sltiu $t3, $v0, 0x80
/* 00445890 922E0001 */  lbu   $t6, 1($s1)
/* 00445894 3C01000C */  lui   $at, 0xc
/* 00445898 2DCC0020 */  sltiu $t4, $t6, 0x20
/* 0044589C 000C7823 */  negu  $t7, $t4
/* 004458A0 01E1C024 */  and   $t8, $t7, $at
/* 004458A4 01D86804 */  sllv  $t5, $t8, $t6
/* 004458A8 05A0002A */  bltz  $t5, .L00445954
/* 004458AC 00000000 */   nop
/* 004458B0 8E040014 */  lw    $a0, 0x14($s0)
/* 004458B4 24030002 */  li    $v1, 2
/* 004458B8 3C013200 */  lui   $at, 0x3200
/* 004458BC 90820000 */  lbu   $v0, ($a0)
/* 004458C0 14620004 */  bne   $v1, $v0, .L004458D4
/* 004458C4 2C4A0020 */   sltiu $t2, $v0, 0x20
/* 004458C8 8E190018 */  lw    $t9, 0x18($s0)
/* 004458CC 93290000 */  lbu   $t1, ($t9)
/* 004458D0 1069007D */  beq   $v1, $t1, .L00445AC8
.L004458D4:
/* 004458D4 000A5823 */   negu  $t3, $t2
/* 004458D8 01616024 */  and   $t4, $t3, $at
/* 004458DC 004C7804 */  sllv  $t7, $t4, $v0
/* 004458E0 05E0000A */  bltz  $t7, .L0044590C
/* 004458E4 00000000 */   nop
/* 004458E8 8E180018 */  lw    $t8, 0x18($s0)
/* 004458EC 3C013200 */  lui   $at, 0x3200
/* 004458F0 930E0000 */  lbu   $t6, ($t8)
/* 004458F4 2DCD0020 */  sltiu $t5, $t6, 0x20
/* 004458F8 000DC823 */  negu  $t9, $t5
/* 004458FC 03214824 */  and   $t1, $t9, $at
/* 00445900 01C95004 */  sllv  $t2, $t1, $t6
/* 00445904 05430071 */  bgezl $t2, .L00445ACC
/* 00445908 AE300014 */   sw    $s0, 0x14($s1)
.L0044590C:
/* 0044590C 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 00445910 0320F809 */  jalr  $t9
/* 00445914 00000000 */   nop
/* 00445918 1040006B */  beqz  $v0, .L00445AC8
/* 0044591C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00445920 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 00445924 8E040018 */  lw    $a0, 0x18($s0)
/* 00445928 0320F809 */  jalr  $t9
/* 0044592C 00000000 */   nop
/* 00445930 10400065 */  beqz  $v0, .L00445AC8
/* 00445934 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00445938 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0044593C 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 00445940 96050002 */  lhu   $a1, 2($s0)
/* 00445944 0320F809 */  jalr  $t9
/* 00445948 00000000 */   nop
/* 0044594C 1000005E */  b     .L00445AC8
/* 00445950 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445954:
/* 00445954 11600009 */  beqz  $t3, .L0044597C
/* 00445958 00000000 */   nop
/* 0044595C 8F988044 */  lw    $t8, %got(D_10010918)($gp)
/* 00445960 00026143 */  sra   $t4, $v0, 5
/* 00445964 000C7880 */  sll   $t7, $t4, 2
/* 00445968 27180918 */  addiu $t8, %lo(D_10010918) # addiu $t8, $t8, 0x918
/* 0044596C 030F6821 */  addu  $t5, $t8, $t7
/* 00445970 8DB90000 */  lw    $t9, ($t5)
/* 00445974 00594804 */  sllv  $t1, $t9, $v0
/* 00445978 292B0000 */  slti  $t3, $t1, 0
.L0044597C:
/* 0044597C 5160001D */  beql  $t3, $zero, .L004459F4
/* 00445980 24010036 */   li    $at, 54
/* 00445984 922A0001 */  lbu   $t2, 1($s1)
/* 00445988 3C01000C */  lui   $at, 0xc
/* 0044598C 2D4C0020 */  sltiu $t4, $t2, 0x20
/* 00445990 000CC023 */  negu  $t8, $t4
/* 00445994 03017824 */  and   $t7, $t8, $at
/* 00445998 014F6804 */  sllv  $t5, $t7, $t2
/* 0044599C 05A20015 */  bltzl $t5, .L004459F4
/* 004459A0 24010036 */   li    $at, 54
/* 004459A4 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 004459A8 8E040014 */  lw    $a0, 0x14($s0)
/* 004459AC 0320F809 */  jalr  $t9
/* 004459B0 00000000 */   nop
/* 004459B4 10400044 */  beqz  $v0, .L00445AC8
/* 004459B8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004459BC 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 004459C0 8E040018 */  lw    $a0, 0x18($s0)
/* 004459C4 0320F809 */  jalr  $t9
/* 004459C8 00000000 */   nop
/* 004459CC 1040003E */  beqz  $v0, .L00445AC8
/* 004459D0 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004459D4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004459D8 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 004459DC 96050002 */  lhu   $a1, 2($s0)
/* 004459E0 0320F809 */  jalr  $t9
/* 004459E4 00000000 */   nop
/* 004459E8 10000037 */  b     .L00445AC8
/* 004459EC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004459F0 24010036 */  li    $at, 54
.L004459F4:
/* 004459F4 1441000E */  bne   $v0, $at, .L00445A30
/* 004459F8 2459FFE0 */   addiu $t9, $v0, -0x20
/* 004459FC 8F9986C8 */  lw    $t9, %call16(in_indmults)($gp)
/* 00445A00 8E040014 */  lw    $a0, 0x14($s0)
/* 00445A04 0320F809 */  jalr  $t9
/* 00445A08 00000000 */   nop
/* 00445A0C 1040002E */  beqz  $v0, .L00445AC8
/* 00445A10 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00445A14 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445A18 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 00445A1C 96050002 */  lhu   $a1, 2($s0)
/* 00445A20 0320F809 */  jalr  $t9
/* 00445A24 00000000 */   nop
/* 00445A28 10000027 */  b     .L00445AC8
/* 00445A2C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445A30:
/* 00445A30 2F290040 */  sltiu $t1, $t9, 0x40
/* 00445A34 11200009 */  beqz  $t1, .L00445A5C
/* 00445A38 00000000 */   nop
/* 00445A3C 8F8C8044 */  lw    $t4, %got(D_10010910)($gp)
/* 00445A40 00197143 */  sra   $t6, $t9, 5
/* 00445A44 000E5880 */  sll   $t3, $t6, 2
/* 00445A48 258C0910 */  addiu $t4, %lo(D_10010910) # addiu $t4, $t4, 0x910
/* 00445A4C 018BC021 */  addu  $t8, $t4, $t3
/* 00445A50 8F0F0000 */  lw    $t7, ($t8)
/* 00445A54 032F5004 */  sllv  $t2, $t7, $t9
/* 00445A58 29490000 */  slti  $t1, $t2, 0
.L00445A5C:
/* 00445A5C 5120001B */  beql  $t1, $zero, .L00445ACC
/* 00445A60 AE300014 */   sw    $s0, 0x14($s1)
/* 00445A64 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445A68 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 00445A6C 96050002 */  lhu   $a1, 2($s0)
/* 00445A70 0320F809 */  jalr  $t9
/* 00445A74 00000000 */   nop
/* 00445A78 10000013 */  b     .L00445AC8
/* 00445A7C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00445A80:
/* 00445A80 24010001 */  li    $at, 1
/* 00445A84 54610011 */  bnel  $v1, $at, .L00445ACC
/* 00445A88 AE300014 */   sw    $s0, 0x14($s1)
/* 00445A8C 8E030018 */  lw    $v1, 0x18($s0)
/* 00445A90 8E22002C */  lw    $v0, 0x2c($s1)
/* 00445A94 8E2E0024 */  lw    $t6, 0x24($s1)
/* 00445A98 8E0C0014 */  lw    $t4, 0x14($s0)
/* 00445A9C 004E2021 */  addu  $a0, $v0, $t6
/* 00445AA0 006C5821 */  addu  $t3, $v1, $t4
/* 00445AA4 0164082A */  slt   $at, $t3, $a0
/* 00445AA8 10200003 */  beqz  $at, .L00445AB8
/* 00445AAC 0083C023 */   subu  $t8, $a0, $v1
/* 00445AB0 AE180014 */  sw    $t8, 0x14($s0)
/* 00445AB4 8E22002C */  lw    $v0, 0x2c($s1)
.L00445AB8:
/* 00445AB8 0043082A */  slt   $at, $v0, $v1
/* 00445ABC 50200003 */  beql  $at, $zero, .L00445ACC
/* 00445AC0 AE300014 */   sw    $s0, 0x14($s1)
/* 00445AC4 AE020018 */  sw    $v0, 0x18($s0)
.L00445AC8:
/* 00445AC8 AE300014 */  sw    $s0, 0x14($s1)
.L00445ACC:
/* 00445ACC 02001025 */  move  $v0, $s0
.L00445AD0:
/* 00445AD0 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00445AD4 8FB00018 */  lw    $s0, 0x18($sp)
/* 00445AD8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00445ADC 8FB20020 */  lw    $s2, 0x20($sp)
/* 00445AE0 8FB30024 */  lw    $s3, 0x24($sp)
/* 00445AE4 03E00008 */  jr    $ra
/* 00445AE8 27BD0040 */   addiu $sp, $sp, 0x40
    .type isearchloop, @function
    .size isearchloop, .-isearchloop
    .end isearchloop

glabel trep_image
    .ent trep_image
    # 0041550C func_0041550C
    # 00445E44 exprimage
    # 0046BD90 change_to_var_eq
/* 00445AEC 3C1C0FBD */  .cpload $t9
/* 00445AF0 279C47A4 */
/* 00445AF4 0399E021 */
/* 00445AF8 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00445AFC AFA50044 */  sw    $a1, 0x44($sp)
/* 00445B00 93AE0047 */  lbu   $t6, 0x47($sp)
/* 00445B04 AFB00014 */  sw    $s0, 0x14($sp)
/* 00445B08 00808025 */  move  $s0, $a0
/* 00445B0C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00445B10 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00445B14 AFA60048 */  sw    $a2, 0x48($sp)
/* 00445B18 11C00003 */  beqz  $t6, .L00445B28
/* 00445B1C AFA7004C */   sw    $a3, 0x4c($sp)
/* 00445B20 10000002 */  b     .L00445B2C
/* 00445B24 8C870024 */   lw    $a3, 0x24($a0)
.L00445B28:
/* 00445B28 8E070028 */  lw    $a3, 0x28($s0)
.L00445B2C:
/* 00445B2C 90EF0000 */  lbu   $t7, ($a3)
/* 00445B30 3C011200 */  lui   $at, 0x1200
/* 00445B34 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00445B38 0018C823 */  negu  $t9, $t8
/* 00445B3C 03215024 */  and   $t2, $t9, $at
/* 00445B40 01EA5804 */  sllv  $t3, $t2, $t7
/* 00445B44 05610016 */  bgez  $t3, .L00445BA0
/* 00445B48 00000000 */   nop
/* 00445B4C 8CE20030 */  lw    $v0, 0x30($a3)
/* 00445B50 10400013 */  beqz  $v0, .L00445BA0
/* 00445B54 00000000 */   nop
/* 00445B58 8F8389CC */  lw     $v1, %got(nocopy)($gp)
/* 00445B5C 8C630000 */  lw    $v1, ($v1)
/* 00445B60 1062000F */  beq   $v1, $v0, .L00445BA0
/* 00445B64 00000000 */   nop
/* 00445B68 904C0000 */  lbu   $t4, ($v0)
.L00445B6C:
/* 00445B6C 3C011200 */  lui   $at, 0x1200
/* 00445B70 00403825 */  move  $a3, $v0
/* 00445B74 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 00445B78 000D7023 */  negu  $t6, $t5
/* 00445B7C 01C1C024 */  and   $t8, $t6, $at
/* 00445B80 0198C804 */  sllv  $t9, $t8, $t4
/* 00445B84 07210006 */  bgez  $t9, .L00445BA0
/* 00445B88 00000000 */   nop
/* 00445B8C 8C420030 */  lw    $v0, 0x30($v0)
/* 00445B90 10400003 */  beqz  $v0, .L00445BA0
/* 00445B94 00000000 */   nop
/* 00445B98 5462FFF4 */  bnel  $v1, $v0, .L00445B6C
/* 00445B9C 904C0000 */   lbu   $t4, ($v0)
.L00445BA0:
/* 00445BA0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00445BA4 24040030 */  li    $a0, 48
/* 00445BA8 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00445BAC 0320F809 */  jalr  $t9
/* 00445BB0 AFA7002C */   sw    $a3, 0x2c($sp)
/* 00445BB4 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00445BB8 3C016400 */  lui   $at, 0x6400
/* 00445BBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445BC0 90E30000 */  lbu   $v1, ($a3)
/* 00445BC4 AFA20030 */  sw    $v0, 0x30($sp)
/* 00445BC8 2C6A0020 */  sltiu $t2, $v1, 0x20
/* 00445BCC 000A7823 */  negu  $t7, $t2
/* 00445BD0 01E15824 */  and   $t3, $t7, $at
/* 00445BD4 006B6804 */  sllv  $t5, $t3, $v1
/* 00445BD8 05A10003 */  bgez  $t5, .L00445BE8
/* 00445BDC 24010003 */   li    $at, 3
/* 00445BE0 1000008B */  b     .L00445E10
/* 00445BE4 AC400000 */   sw    $zero, ($v0)
.L00445BE8:
/* 00445BE8 10610007 */  beq   $v1, $at, .L00445C08
/* 00445BEC 2404000A */   li    $a0, 10
/* 00445BF0 94EE0006 */  lhu   $t6, 6($a3)
/* 00445BF4 24010001 */  li    $at, 1
/* 00445BF8 51C10004 */  beql  $t6, $at, .L00445C0C
/* 00445BFC 8E180010 */   lw    $t8, 0x10($s0)
/* 00445C00 10000083 */  b     .L00445E10
/* 00445C04 AC400000 */   sw    $zero, ($v0)
.L00445C08:
/* 00445C08 8E180010 */  lw    $t8, 0x10($s0)
.L00445C0C:
/* 00445C0C 8F998344 */  lw    $t9, %call16(opvalihash)($gp)
/* 00445C10 8CE50014 */  lw    $a1, 0x14($a3)
/* 00445C14 97060008 */  lhu   $a2, 8($t8)
/* 00445C18 0320F809 */  jalr  $t9
/* 00445C1C AFA7002C */   sw    $a3, 0x2c($sp)
/* 00445C20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445C24 304CFFFF */  andi  $t4, $v0, 0xffff
/* 00445C28 000CC880 */  sll   $t9, $t4, 2
/* 00445C2C 8F8A8DF0 */  lw     $t2, %got(itable)($gp)
/* 00445C30 A7A2003C */  sh    $v0, 0x3c($sp)
/* 00445C34 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00445C38 032A7821 */  addu  $t7, $t9, $t2
/* 00445C3C 8DE30000 */  lw    $v1, ($t7)
/* 00445C40 00002025 */  move  $a0, $zero
/* 00445C44 2408000A */  li    $t0, 10
/* 00445C48 10600017 */  beqz  $v1, .L00445CA8
/* 00445C4C 24060004 */   li    $a2, 4
/* 00445C50 906B0000 */  lbu   $t3, ($v1)
.L00445C54:
/* 00445C54 54CB0010 */  bnel  $a2, $t3, .L00445C98
/* 00445C58 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C5C 906D0010 */  lbu   $t5, 0x10($v1)
/* 00445C60 550D000D */  bnel  $t0, $t5, .L00445C98
/* 00445C64 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C68 8CEE0014 */  lw    $t6, 0x14($a3)
/* 00445C6C 8C780014 */  lw    $t8, 0x14($v1)
/* 00445C70 55D80009 */  bnel  $t6, $t8, .L00445C98
/* 00445C74 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C78 8E0C0010 */  lw    $t4, 0x10($s0)
/* 00445C7C 8C6A001C */  lw    $t2, 0x1c($v1)
/* 00445C80 95990008 */  lhu   $t9, 8($t4)
/* 00445C84 572A0004 */  bnel  $t9, $t2, .L00445C98
/* 00445C88 8C63000C */   lw    $v1, 0xc($v1)
/* 00445C8C 10000002 */  b     .L00445C98
/* 00445C90 24040001 */   li    $a0, 1
/* 00445C94 8C63000C */  lw    $v1, 0xc($v1)
.L00445C98:
/* 00445C98 14800003 */  bnez  $a0, .L00445CA8
/* 00445C9C 00000000 */   nop
/* 00445CA0 5460FFEC */  bnezl $v1, .L00445C54
/* 00445CA4 906B0000 */   lbu   $t3, ($v1)
.L00445CA8:
/* 00445CA8 10800005 */  beqz  $a0, .L00445CC0
/* 00445CAC 93AF0053 */   lbu   $t7, 0x53($sp)
/* 00445CB0 15E0002A */  bnez  $t7, .L00445D5C
/* 00445CB4 8FAB0030 */   lw    $t3, 0x30($sp)
/* 00445CB8 10000055 */  b     .L00445E10
/* 00445CBC AD600000 */   sw    $zero, ($t3)
.L00445CC0:
/* 00445CC0 8F998348 */  lw    $t9, %call16(appendichain)($gp)
/* 00445CC4 97A4003C */  lhu   $a0, 0x3c($sp)
/* 00445CC8 00002825 */  move  $a1, $zero
/* 00445CCC 0320F809 */  jalr  $t9
/* 00445CD0 AFA7002C */   sw    $a3, 0x2c($sp)
/* 00445CD4 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00445CD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445CDC 24060004 */  li    $a2, 4
/* 00445CE0 A0460000 */  sb    $a2, ($v0)
/* 00445CE4 90ED0001 */  lbu   $t5, 1($a3)
/* 00445CE8 2408000A */  li    $t0, 10
/* 00445CEC 00402025 */  move  $a0, $v0
/* 00445CF0 A04D0001 */  sb    $t5, 1($v0)
/* 00445CF4 920E0023 */  lbu   $t6, 0x23($s0)
/* 00445CF8 A0480010 */  sb    $t0, 0x10($v0)
/* 00445CFC 00002825 */  move  $a1, $zero
/* 00445D00 A04E0012 */  sb    $t6, 0x12($v0)
/* 00445D04 8CF80014 */  lw    $t8, 0x14($a3)
/* 00445D08 AC400018 */  sw    $zero, 0x18($v0)
/* 00445D0C AC580014 */  sw    $t8, 0x14($v0)
/* 00445D10 8E0C0010 */  lw    $t4, 0x10($s0)
/* 00445D14 95990008 */  lhu   $t9, 8($t4)
/* 00445D18 AC400008 */  sw    $zero, 8($v0)
/* 00445D1C AC59001C */  sw    $t9, 0x1c($v0)
/* 00445D20 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 00445D24 AFA20024 */  sw    $v0, 0x24($sp)
/* 00445D28 AFA20038 */  sw    $v0, 0x38($sp)
/* 00445D2C 0320F809 */  jalr  $t9
/* 00445D30 00000000 */   nop
/* 00445D34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445D38 8FA90024 */  lw    $t1, 0x24($sp)
/* 00445D3C 3045FFFF */  andi  $a1, $v0, 0xffff
/* 00445D40 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445D44 8F848D04 */  lw     $a0, %got(trepexp)($gp)
/* 00445D48 A5220002 */  sh    $v0, 2($t1)
/* 00445D4C 0320F809 */  jalr  $t9
/* 00445D50 00000000 */   nop
/* 00445D54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445D58 8FA30038 */  lw    $v1, 0x38($sp)
.L00445D5C:
/* 00445D5C 93A2004B */  lbu   $v0, 0x4b($sp)
/* 00445D60 8FAA0030 */  lw    $t2, 0x30($sp)
/* 00445D64 10400002 */  beqz  $v0, .L00445D70
/* 00445D68 AD430000 */   sw    $v1, ($t2)
/* 00445D6C 93A2004F */  lbu   $v0, 0x4f($sp)
.L00445D70:
/* 00445D70 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445D74 8E040010 */  lw    $a0, 0x10($s0)
/* 00445D78 94650002 */  lhu   $a1, 2($v1)
/* 00445D7C AFA20028 */  sw    $v0, 0x28($sp)
/* 00445D80 AFA30038 */  sw    $v1, 0x38($sp)
/* 00445D84 0320F809 */  jalr  $t9
/* 00445D88 2484012C */   addiu $a0, $a0, 0x12c
/* 00445D8C 93AF004B */  lbu   $t7, 0x4b($sp)
/* 00445D90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445D94 8FA30038 */  lw    $v1, 0x38($sp)
/* 00445D98 51E0000A */  beql  $t7, $zero, .L00445DC4
/* 00445D9C 93AB004F */   lbu   $t3, 0x4f($sp)
/* 00445DA0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445DA4 8E040010 */  lw    $a0, 0x10($s0)
/* 00445DA8 94650002 */  lhu   $a1, 2($v1)
/* 00445DAC AFA30038 */  sw    $v1, 0x38($sp)
/* 00445DB0 0320F809 */  jalr  $t9
/* 00445DB4 24840104 */   addiu $a0, $a0, 0x104
/* 00445DB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445DBC 8FA30038 */  lw    $v1, 0x38($sp)
/* 00445DC0 93AB004F */  lbu   $t3, 0x4f($sp)
.L00445DC4:
/* 00445DC4 5160000A */  beql  $t3, $zero, .L00445DF0
/* 00445DC8 93AD002B */   lbu   $t5, 0x2b($sp)
/* 00445DCC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445DD0 8E040010 */  lw    $a0, 0x10($s0)
/* 00445DD4 94650002 */  lhu   $a1, 2($v1)
/* 00445DD8 AFA30038 */  sw    $v1, 0x38($sp)
/* 00445DDC 0320F809 */  jalr  $t9
/* 00445DE0 24840114 */   addiu $a0, $a0, 0x114
/* 00445DE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00445DE8 8FA30038 */  lw    $v1, 0x38($sp)
/* 00445DEC 93AD002B */  lbu   $t5, 0x2b($sp)
.L00445DF0:
/* 00445DF0 55A00008 */  bnezl $t5, .L00445E14
/* 00445DF4 93AE0047 */   lbu   $t6, 0x47($sp)
/* 00445DF8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00445DFC 8E040010 */  lw    $a0, 0x10($s0)
/* 00445E00 94650002 */  lhu   $a1, 2($v1)
/* 00445E04 0320F809 */  jalr  $t9
/* 00445E08 2484010C */   addiu $a0, $a0, 0x10c
/* 00445E0C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00445E10:
/* 00445E10 93AE0047 */  lbu   $t6, 0x47($sp)
.L00445E14:
/* 00445E14 8FB80030 */  lw    $t8, 0x30($sp)
/* 00445E18 8FAC0030 */  lw    $t4, 0x30($sp)
/* 00445E1C 51C00004 */  beql  $t6, $zero, .L00445E30
/* 00445E20 AE0C003C */   sw    $t4, 0x3c($s0)
/* 00445E24 10000002 */  b     .L00445E30
/* 00445E28 AE180038 */   sw    $t8, 0x38($s0)
/* 00445E2C AE0C003C */  sw    $t4, 0x3c($s0)
.L00445E30:
/* 00445E30 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00445E34 8FB00014 */  lw    $s0, 0x14($sp)
/* 00445E38 27BD0040 */  addiu $sp, $sp, 0x40
/* 00445E3C 03E00008 */  jr    $ra
/* 00445E40 00000000 */   nop
    .type trep_image, @function
    .size trep_image, .-trep_image
    .end trep_image
)"");

/*
# 00445E44 exprimage
# 004471AC codeimage
*/
struct IChain *exprimage(struct Expression *expr, bool *anticipated, bool *available) {
    struct IChain *ichain;      // sp84
    bool op1ant;                // sp83
    bool op1av;                 // sp82
    bool op2ant;                // sp81
    bool op2av;                 // sp80
    struct IChain *op1_ichain;  // sp78
    struct IChain *op2_ichain;  // sp74
    unsigned int newblocks;     // sp6C
    unsigned short hash;
    unsigned char r2bb;

    if (expr->ichain != NULL) {
        ichain = expr->ichain;
        if (expr->type == islda || expr->type == isconst) {
            *anticipated = true;
            *available = true;
        } else if (expr->type == isilda) {
            *anticipated = true;
            *available = true;
        } else if (expr->type == isvar || expr->type == issvar) {
            *anticipated = expr->unk3;
            *available = !expr->unk2;
        } else {    // empty, isop, dumped, isrconst
            *anticipated = expr->data.isop.unk21;
            *available = expr->data.isop.unk22;
        }
    } else {
        switch (expr->type) {
            case isconst:
                switch (expr->datatype) {
                    case Adt:
                    case Fdt:
                    case Gdt:
                    case Hdt:
                    case Jdt:
                    case Ldt:
                    case Ndt:
                        hash = isconstihash(expr->data.isconst.number.intval);
                        break;

                    case Idt:
                    case Kdt:
                        hash = isconstihash(expr->data.isconst.number.intval2);
                        break;

                    default:    // Cdt, Mdt, Pdt, Qdt, Rdt, Sdt, Wdt, Xdt, Zdt
                        hash = realihash(expr->data.isconst.number);
                        //hash = realihash(expr->data.islda_isilda.addr, expr->data.islda_isilda.size);
                        break;
                }
                ichain = isearchloop(hash, expr, 0, 0);
                *anticipated = true;
                *available = true;
                break;

            case isrconst:
                ichain = isearchloop(isconstihash(expr->data.isrconst.unk20), expr, 0, 0);
                *anticipated = true;
                *available = true;
                break;

            case islda:
                ichain = isearchloop(isldaihash(expr->data.islda_isilda.var_data, expr->data.islda_isilda.addr), expr, 0, 0);
                *anticipated = true;
                *available = true;
                break;

            case isilda:
                exprimage(expr->data.islda_isilda.unk34, anticipated, available);
                ichain = isearchloop(isvarihash(expr->data.islda_isilda.var_data), expr, 0, 0);
                if (outofmem) return NULL; // used to return UB sp8C

                if (expr->data.islda_isilda.unk34->type != issvar) {
                    *anticipated = true;
                    *available = true;
                } else {
                    *anticipated = expr->data.islda_isilda.unk34->unk3;
                    *available = !expr->data.islda_isilda.unk34->unk2;
                }

                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                if (*anticipated) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->bitpos);
                }
                if (*available) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                }
                if (*anticipated == false || *available == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                }
                break;

            case isvar:
                ichain = isearchloop(isvarihash(expr->data.isvar_issvar.var_data), expr, 0, 0);
                if (outofmem) return NULL; // used to return UB sp8C

                // Most iffy part... compiler originally added 1 to r2bb and subtracted 4/8 from r2bitpos/setofr2bbs.
                if (expr->data.isvar_issvar.var_data.memtype == Rmt) {
                    if (expr->data.isvar_issvar.var_data.addr != 29) { // $sp?
                        switch (expr->data.isvar_issvar.var_data.addr) {
                            case 0x02:      // $v0?
                                r2bb = 0;
                                break;

                            case 0x20:      // $f0?
                                r2bb = 1;
                                break;

                            case 0x22:      // $f2?
                                r2bb = 2;
                                break;

                            case 0x21:      // $f1?
                            default:
                                dbgerror(0x202);
                                break;

                        }
                        r2bitpos[r2bb] = ichain->bitpos;

                        if (curgraphnode->num >= (setofr2bbs[r2bb].num_blocks << 7)) {
                            newblocks = ((unsigned) curstaticno >> 7) + 1;
                            setofr2bbs[r2bb].blocks = alloc_realloc(setofr2bbs[r2bb].blocks, setofr2bbs[r2bb].num_blocks, newblocks, &perm_heap);

                            memset(setofr2bbs[r2bb].blocks + setofr2bbs[r2bb].num_blocks, 0, (newblocks - setofr2bbs[r2bb].num_blocks) * sizeof(struct BitVectorBlock));
                            setofr2bbs[r2bb].num_blocks = newblocks;
                        }
                        setbitbb(&setofr2bbs[r2bb], curgraphnode->num);
                        // Original:
                        //unsigned int blockpos = curgraphnode->num & 0x7F;
                        //setofr2bbs[r2bb].blocks[curgraphnode->num >> 7].words[0] |= (blockpos < 0x20U) << ((~blockpos) & 0x1f);
                        //setofr2bbs[r2bb].blocks[curgraphnode->num >> 7].words[1] |= ((unsigned) (blockpos - 0x20) < 0x20U) << ((~blockpos) & 0x1f);
                        //setofr2bbs[r2bb].blocks[curgraphnode->num >> 7].words[2] |= ((unsigned) (blockpos - 0x40) < 0x20U) << ((~blockpos) & 0x1f);
                        //setofr2bbs[r2bb].blocks[curgraphnode->num >> 7].words[3] |= ((unsigned) (blockpos - 0x60) < 0x20U) << ((~blockpos) & 0x1f);
                    }
                }
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->s.bit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                if (expr->data.isvar_issvar.unk21) {
                    *anticipated = false;
                    *available = false;
                    setbit(&vareqv, ichain->bitpos);
                    setbit(&asgneqv, ichain->s.bit);
                } else {
                    *anticipated = expr->unk3;
                    *available = !expr->unk2;
                }

                if (*anticipated) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->bitpos);
                }
                if (*available) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                }
                if (*anticipated == false || *available == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                }
                break;

            case issvar:
                exprimage(expr->data.isvar_issvar.unk24, anticipated, available);
                if (outofmem) return NULL; // used to return UB sp8C

                ichain = isearchloop(isvarihash(expr->data.isvar_issvar.var_data), expr, 0, 0);
                if (outofmem) return NULL; // used to return UB sp8C

                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->s.bit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                if (expr->data.isvar_issvar.unk21) {
                    *anticipated = false;
                    *available = false;
                    setbit(&vareqv, ichain->bitpos);
                    setbit(&asgneqv, ichain->s.bit);
                } else {
                    *anticipated = expr->unk3;
                    *available = !expr->unk2;
                }

                if (*anticipated) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->bitpos);
                }
                if (*available) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                }
                if (*anticipated == false || *available == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                }
                break;

            case isop:
                op1_ichain = exprimage(expr->data.isop.op1, &op1ant, &op1av);
                if (outofmem) return NULL; // used to return UB sp8C

                if (op1_ichain->type == isop) {
                    switch (op1_ichain->opc) {
                        case Uequ:
                        case Ugeq:
                        case Ugrt:
                        case Uinn:
                        case Uleq:
                        case Ules:
                        case Uneq:
                            resetbit(&boolexp, op1_ichain->bitpos);
                            break;

                        default:
                            break;
                    }
                }

                if (optab[expr->data.isop.opc].is_binary_op) {
                    op2_ichain = exprimage(expr->data.isop.op2, &op2ant, &op2av);
                    if (outofmem) return NULL; // used to return UB sp8C

                    if (op2_ichain->type == isop) {
                        switch (op2_ichain->opc) {
                            case Uequ:
                            case Ugeq:
                            case Ugrt:
                            case Uinn:
                            case Uleq:
                            case Ules:
                            case Uneq:
                                resetbit(&boolexp, op2_ichain->bitpos);
                                break;

                            default:
                                break;
                        }
                    }
                    ichain = isearchloop(isopihash(expr->data.isop.opc, op1_ichain, op2_ichain), expr, op1_ichain, op2_ichain);
                    *anticipated = op1ant ? op2ant : op1ant;
                    *available = op1av ? op2av : op1av;

                    switch (expr->data.isop.opc) {
                        case Uiequ:
                        case Uigeq:
                        case Uigrt:
                        case Uileq:
                        case Uiles:
                        case Uineq:
                            *anticipated = *anticipated ? expr->unk3 : *anticipated;
                            *available = *available ? !expr->unk2 : *available;
                            break;

                        default:
                            break;
                    }
                } else {
                    if (expr->data.isop.opc == Uilod) {
                        if (expr->data.isop.aux.unk38_int == 0) {
                            expr->data.isop.aux.unk38_int = assign_mtag(expr->data.isop.unk34);
                        }
                    }

                    switch (expr->data.isop.opc) {
                        case Uilod:
                        case Uirld:
                            hash = opvalihash(expr->data.isop.opc, op1_ichain, 0);
                            break;

                        case Uadj:
                        case Uchkh:
                        case Uchkl:
                        case Ucvtl:
                        case Udec:
                        case Uildv:
                        case Uinc:
                        case Uirlv:
                            hash = opvalihash(expr->data.isop.opc, op1_ichain, expr->data.isop.datasize);
                            break;

                        default:
                            hash = isopihash(expr->data.isop.opc, op1_ichain, NULL);
                            break;
                    }
                    ichain = isearchloop(hash, expr, op1_ichain, 0);

                    switch (expr->data.isop.opc) {
                        case Uildv:
                        case Uilod:
                        case Uirld:
                        case Uirlv:
                            *anticipated = op1ant ? expr->unk3 : op1ant;
                            *available = op1av ? !expr->unk2 : op1av;
                            break;

                        default:
                            *anticipated = op1ant;
                            *available = op1av;
                            break;
                    }
                }
                if (outofmem) return NULL; // used to return UB sp8C

                if (expr->data.isop.datatype == Sdt) {
                    *anticipated = false;
                    *available = false;
                }
                expr->data.isop.unk21 = *anticipated;
                expr->data.isop.unk22 = *available;
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                if (*anticipated) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->bitpos);
                }
                if (*available) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                }
                if (*anticipated == false || *available == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                }

                switch (expr->data.isop.opc) {
                    case Uequ:
                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                    case Uneq:
                        if (expr->data.isop.aux.unk38_int == 0) {
                            trep_image(expr, 1, op1ant, op1av, 0);
                            trep_image(expr, 0, op2ant, op2av, 0);
                        }
                        break;

                    default:
                        break;
                }
                break;

            case dumped:
#ifdef AVOID_UB
                ichain = NULL;
#endif
                break;

            default:
                caseerror(1, 0x248, "uoptitab.p", 0xA);
                break;
        }
    }

    return ichain;
}

/*
# 004175BC copypropagate
# 004471AC codeimage
*/
struct IChain *searchstore(unsigned short hash, Uopcode opc /* sp3f */, struct IChain *op1, struct IChain *op2, int unk1, int size) {
    struct IChain *ichain;      // s0
    bool found; // sp2F


    ichain = itable[hash];
    found = false;

    while (found == false && ichain != NULL) {
        if (ichain->type == isop && ichain->opc == opc && ichain->isop.unk14 == op1) {
            switch (ichain->opc) {
                case Uisst:
                case Ustr:
                    found = ichain->isop.unk18 == op2;
                    break;

                case Uistr:
                case Uistv:
                case Uirsv:
                case Uirst:
                    found = ichain->isop.unk18 == op2 && ichain->s.word == unk1 && ichain->size == size;
                    break;

                case Umov:
                case Umovv:
                    found = ichain->isop.unk18 == op2;
                    break;

                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                    found = ichain->isop.unk18 == op2 && ichain->size == unk1;
                    break;

                case Uchkt:
                    found = true;
                    break;

                default:
                    caseerror(1, 827, "uoptitab.p", 10);
                    break;
            }
        }

        if (found == false) {
            ichain = ichain->next;
        }
    }

    if (found == false) {
        ichain = appendichain(hash, 0);
        if (ichain == NULL) {
            outofmem = true;
            return NULL;        // used to return sp34
        }

        ichain->opc = opc;
        ichain->type = isop;
        ichain->isop.unk18 = op2;
        ichain->isop.unk14 = op1;
        ichain->bitpos = newbit(ichain, NULL);

        switch (ichain->opc) {
            case Uchkt:
            case Utpeq:
            case Utpge:
            case Utpgt:
            case Utple:
            case Utplt:
            case Utpne:
                setbit(&trapop, ichain->bitpos);
                if (ichain->opc != Uchkt) {
                    ichain->size = unk1;
                    if (ichain->opc == Utpge
                            || ichain->opc == Utpgt
                            || ichain->opc == Utple
                            || ichain->opc == Utplt) {
                        if (ichain->isop.unk18->type == isconst) {
                            ichain->isop.unk18->dtype = ichain->isop.unk18->dtype;
                            switch (ichain->isop.unk18->dtype) {
                                case Adt:
                                case Hdt:
                                case Idt:
                                case Jdt:
                                case Kdt:
                                case Ldt:
                                    setbit(&trapconstop, (int) ichain->bitpos);
                                    break;
                                default:
                                    break;
                            }
                        }
                    }
                }
                break;
            default:
                setbit(&storeop, ichain->bitpos);
                break;
        }
    }

    return ichain;
}

/*
00456310 func_00456310
0046FCD4 link_jump_in_loop
00470048 pre_loopblock
00470248 post_loopblock
004713E8 loopunroll
004761D0 tail_recursion
*/
void codeimage(void) {
    bool exprant; // expr 1
    bool exprav; // expr 1
    bool storeant; // expr 2
    bool storeav; // expr 2
    unsigned short opihash;
    struct IChain *ichain; // s3, antlocs
    struct IChain *store_ichain; // s1, avlocs
    struct Statement *stat_tail;
    struct Statement *stat;

    init_node_vectors(curgraphnode);
    stat = curgraphnode->stat_head;

    do {
        if (stat->opc == Uisst || stat->opc == Ustr) {
            if (stat->opc == Uisst) {
                exprimage(stat->u.store.expr, &exprant, &exprav);
                if (outofmem) return;
            }

            ichain = isearchloop(isvarihash(stat->expr->data.isvar_issvar.var_data), stat->expr, 0, 0);
            if (outofmem) return;

            if (stat->unk3 == false) {
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->bitpos);
                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, ichain->s.bit);
                setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                if (stat->expr->unk6) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                    if (stat->expr->unk2 == false) {
                        setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                    }
                }

                if (ichain->isvar.unk1A) {
                    setbit(&vareqv, ichain->bitpos);
                    setbit(&asgneqv, ichain->s.bit);
                }

                if (stat->u.store.unk1C) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, ichain->s.bit);
                }

                if (stat->u.store.unk1C == false || stat->u.store.unk1D == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                }
                else
                {
                    stat_tail = curgraphnode->stat_tail;
                    if (stat_tail->opc == Ucia) {
                        if (lang == LANG_ADA) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                        } else if (((stat_tail->u.cia.flags & 1) && cskilled(curlevel, indirprocs, stat)) ||
                                listpskilled(stat_tail->u.cia.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                        }

                    } else if (stat_tail->opc == Ucup || stat_tail->opc == Uicuf) {
                        if (cskilled(stat_tail->u.call.level, stat_tail->u.call.proc, stat) ||
                                listpskilled(stat_tail->u.call.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                        }
                    }
                }

                store_ichain = exprimage(stat->expr->data.isvar_issvar.unk34, &storeant, &storeav);
                if (outofmem) return;
                if (store_ichain == NULL) {
                    dbgerror(0x1AC);
                }
                if (store_ichain->type == isop) {
                    // store_chain->opc in [Uequ, ...]
                    // Bool expressions
                    switch (store_ichain->opc) {
                        case Uequ:
                        case Ugeq:
                        case Ugrt:
                        case Uinn:
                        case Uleq:
                        case Ules:
                        case Uneq:
                            resetbit(&boolexp, store_ichain->bitpos);
                            break;

                        default:
                            break;
                    }
                }

                store_ichain = searchstore(isopihash(stat->opc, ichain, store_ichain), stat->opc, ichain, store_ichain, 0, 0);
                if (outofmem) return;

                setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, store_ichain->bitpos);
                store_ichain->stat = stat;
                store_ichain->dtype = ichain->dtype;
                stat->u.store.ichain = store_ichain;
                if (stat->u.store.unk1C && stat->u.store.unk1E && storeant) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, store_ichain->bitpos);
                }
                if (stat->u.store.unk1E == false || stat->u.store.unk1F == false ||
                        stat->u.store.unk1C == false || stat->u.store.unk1D == false ||
                        storeant == false || storeav == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, store_ichain->bitpos);
                }
                if (stat->u.store.unk1F && storeav) {
                    setbit(&curgraphnode->bvs.stage1.u.precm.pavlocs, store_ichain->bitpos);
                }
                if (stat->u.store.unk1E == false || stat->u.store.unk1F == false ||
                        storeant == false || storeav == false) {
                    setbit(&curgraphnode->bvs.stage1.absalters, store_ichain->bitpos);
                }
            } else {
                setbit(&curgraphnode->bvs.stage1.alters, ichain->bitpos);
                if (stat->expr->unk6) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                    if (stat->expr->unk2 == false) {
                        setbit(&curgraphnode->bvs.stage1.avlocs, ichain->bitpos);
                    }
                }

                setbit(&curgraphnode->bvs.stage1.antlocs, ichain->s.bit);
                if (stat->u.store.unk1D == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                } else {
                    stat_tail = curgraphnode->stat_tail;
                    if (stat_tail->opc == Ucia) {
                        setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                    }
                    else if (stat_tail->opc == Ucup || stat_tail->opc == Uicuf) {
                        if (cskilled(stat_tail->u.call.level, stat_tail->u.call.proc, stat) ||
                                listpskilled(curgraphnode->stat_tail->u.call.parameters, stat, stat->expr->data.isvar_issvar.unk22)) {
                            setbit(&curgraphnode->bvs.stage1.alters, ichain->s.bit);
                        }
                    }
                }
                stat->u.store.ichain = NULL;
            }
        } else {
            // stat->opc not in [Uaent, ...]
            switch (stat->opc) {
                case Uaent:
                case Ubgnb:
                case Ucia:
                case Uclab:
                case Uclbd:
                case Uctrl:
                case Ucubd:
                case Ucup:
                case Udef:
                case Uendb:
                case Uicuf:
                case Ulab:
                case Ulbdy:
                case Ulbgn:
                case Ulend:
                case Uloc:
                case Ultrm:
                case Umst:
                case Unop:
                case Uret:
                case Ustep:
                case Uujp:
                case Urcuf:
                    continue;

                default:
                    ichain = exprimage(stat->expr, &exprant, &exprav);
                    if (outofmem) return;
                    break;
            }

            // stat->opc in [Uchkt, ...]
            switch (stat->opc) {
                default:
                    continue;

                case Uchkt:
                case Uistr:
                case Uistv:
                case  Umov:
                case Umovv:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                case Uirst:
                case Uirsv:
                    break;
            }

            store_ichain = NULL;
            if (stat->opc != Uchkt) {
                store_ichain = exprimage(stat->u.store.expr, &storeant, &storeav);
            }
            if (outofmem) return;

            // stat->opc in [Uistr, ...]
            switch (stat->opc) {
                default:
                    break;

                case Uistr:
                case Uistv:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                case Uirst:
                case Uirsv:
                    if (store_ichain->type == isop) {
                        switch (store_ichain->opc) {
                            default:
                                break;

                            case Uequ:
                            case Ugeq:
                            case Ugrt:
                            case Uinn:
                            case Uleq:
                            case Ules:
                            case Uneq:
                                resetbit(&boolexp, store_ichain->bitpos);
                                break;
                        }
                    }
            }

            // stat->opc in [Uchkt, ...]
            // Trapped bool expressions
            switch (stat->opc) {
                case Uchkt:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                    if (ichain->type == isop) {
                        switch (ichain->opc) {
                            default:
                                break;

                            case Uequ:
                            case Ugeq:
                            case Ugrt:
                            case Uinn:
                            case Uleq:
                            case Ules:
                            case Uneq:
                                resetbit(&boolexp, ichain->bitpos);
                                break;
                        }
                    }
                    break;

                default:
                    break;
            }

            if ((stat->opc == Utpge || stat->opc == Utpgt || stat->opc == Utple || stat->opc == Utplt) &&
                    (store_ichain->type == isconst)) {
                opihash = isopihash(stat->opc, ichain, NULL);
            } else {
                opihash = isopihash(stat->opc, ichain, store_ichain);

            }
            switch (stat->opc) {
                case Uistr:
                case Uistv:
                case Uirst:
                case Uirsv:
                    store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, stat->u.store.u.istr.s.word, stat->u.store.size);
                    break;

                default:
                    switch (stat->opc) {
                        case Uchkt:
                        case Utpeq:
                        case Utpge:
                        case Utpgt:
                        case Utple:
                        case Utplt:
                        case Utpne:
                            store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, stat->u.trap.num, 0);
                            break;

                        default:
                            store_ichain = searchstore(opihash, stat->opc, ichain, store_ichain, 0, 0);
                            break;
                    } break;
            }
            if (outofmem) return;

            setbit(&curgraphnode->bvs.stage1.u.precm.expoccur, store_ichain->bitpos);
            store_ichain->stat = stat;
            stat->u.store.ichain = store_ichain;

            if (stat->opc == Uistr ||
                    stat->opc == Uistv ||
                    stat->opc == Umov  ||
                    stat->opc == Umovv ||
                    stat->opc == Uirst ||
                    stat->opc == Uirsv) {
                store_ichain->size = stat->u.store.size;

                if (stat->opc == Uistr ||
                        stat->opc == Uistv ||
                        stat->opc == Uirst ||
                        stat->opc == Uirsv) {
                    store_ichain->s = stat->u.store.u.istr.s;
                    store_ichain->dtype = stat->u.store.u.istr.dtype;
                    store_ichain->unk13 = stat->u.store.u.istr.unk2D;
                }


                if (stat->opc == Umov || stat->opc == Umovv) {
                    store_ichain->s.bit = stat->u.store.u.mov.unk32 + (stat->u.store.u.mov.unk33 << 8);
                }

                if (stat->u.store.unk1C && stat->u.store.unk1E && exprant && storeant) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, store_ichain->bitpos);
                }

                if (stat->u.store.unk1C == false || stat->u.store.unk1D == false ||
                        stat->u.store.unk1E == false || stat->u.store.unk1F == false ||
                        exprant == false || exprav == false || storeant == false || storeav == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, store_ichain->bitpos);
                }
                if (stat->u.store.unk1F && exprav && storeav) {
                    setbit(&curgraphnode->bvs.stage1.u.precm.pavlocs, store_ichain->bitpos);
                }
                if (stat->u.store.unk1E == false || stat->u.store.unk1F == false ||
                        exprant == false || exprav == false || storeant == false || storeav == false) {
                    setbit(&curgraphnode->bvs.stage1.absalters, store_ichain->bitpos);
                }
            } else {
                // traps
                if (stat->opc == Uchkt) {
                    storeant = true;
                    storeav = true;
                } else {
                    store_ichain->dtype = stat->u.trap.dtype;
                }
                if (exprant && storeant) {
                    setbit(&curgraphnode->bvs.stage1.antlocs, store_ichain->bitpos);
                }
                if (exprav && storeav) {
                    setbit(&curgraphnode->bvs.stage1.avlocs, store_ichain->bitpos);
                }
                if (exprant == false || exprav == false || storeant == false || storeav == false) {
                    setbit(&curgraphnode->bvs.stage1.alters, store_ichain->bitpos);
                }
            }

            if (stat->opc == Uistr && stat->u.store.u.istr.offset == 0) {
                stat->u.store.u.istr.offset = assign_mtag(stat->u.store.baseaddr);
            }
        }
    } while ((stat = stat->next) != NULL);
}
