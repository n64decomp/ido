#include "uoptdata.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
    .balign 4
/* 
jtbl_1000CF00:
    # 00453A30 func_00453A30
    .gpword .L00453A70
    .gpword .L00453A78
    .gpword .L00453A80
    .gpword .L00453A88
    .gpword .L00453A90
    .gpword .L00453A98
    .gpword .L00453AA4
    .gpword .L00453AB0
    .gpword .L00453ABC
    .gpword .L00453AC8
     */

RO_1000CF28:
    # 00454F00 func_00454F00
    .asciz "uoptloop.p"

    .balign 4
jtbl_1000CF34:
    # 00454F00 func_00454F00
    .gpword .L00454F50
    .gpword .L00454F50
    .gpword .L00454F58
    .gpword .L00454F7C
    .gpword .L00454F50
    .gpword .L00454F58
    .gpword .L00455028
    .gpword .L00454F50

RO_1000CF54:
    # 00455518 func_00455518
    .asciz "EQ_INEQ at BB:"

.data
# 10010BF0
glabel intv_heap
    # 00453430 func_00453430
    # 00455D38 analoop
    .byte 0x00,0x00,0x00,0x00
    .type intv_heap, @object
    .size intv_heap, .-intv_heap # 4

D_10010BF4:
    # 00454060 func_00454060
    .byte 0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_10010BFC:
    # 00454514 func_00454514
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010C04:
    # 00454514 func_00454514
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_10010C10:
    # 00454514 func_00454514
    .byte 0x00,0x00,0x81,0x00,0x02,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_10010C20:
    # 00454920 func_00454920
    .byte 0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x01

#D_10010C28:
#    # 00454AB8 func_00454AB8
#    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010C34:
    # 00454D08 func_00454D08
    .byte 0x00,0x00,0x01,0x00,0x00,0x08,0x00,0x00

D_10010C3C:
    # 00455060 func_00455060
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010C48:
    # 00455060 func_00455060
    .byte 0x00,0x00,0x01,0x00,0x00,0x08,0x00,0x00

D_10010C50:
    # 00455354 func_00455354
    .byte 0x00,0x00,0x41,0x00,0x00,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00

D_10010C64:
    # 00455418 func_00455418
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x80,0x00,0x00

D_10010C74:
    # 00455518 func_00455518
    .byte 0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_10010C7C:
    # 00455518 func_00455518
    .byte 0x10,0x80,0x00,0x00,0x00,0x02,0x00,0x01

D_10010C84:
    # 00455518 func_00455518
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

extern struct AllocBlock *intv_heap;

/*
 * Notes: Only called when graphnode->terminal == true
 */
static struct Intval *func_00453430(struct Intval *intvHead) {
    struct Intval *sp44;
    bool done;
    struct Intval *temp_a2;
    struct Intval *temp_v1;
    struct IntvalList *newList;
    struct Intval *intv_s7;
    struct Intval *intv_s2;
    struct IntvalList *phi_v0;
    struct IntvalList *phi_s6;
    struct IntvalList* succ_s1;
    struct IntvalList* list_s0;
    bool found;
    int phi_v1;

    intvHead->prev = intvHead;
    intvHead->unk28 = 1;
    intv_s7 = intvHead->next;
    while (intv_s7 != NULL) {
        if (intv_s7->unk29 != 0) {
            intv_s7->prev = intv_s7;
            intv_s7->unk28 = 1;
        }
        intv_s7 = intv_s7->next;
    }

    done = 0;
    numintval = 0;
    intv_s7 = intvHead;

    do {
        if (intv_s7 == intvHead) {
            sp44 = alloc_new(0x2C, &intv_heap);
            intv_s2 = sp44;
        } else {
            intv_s2->next = alloc_new(0x2C, &intv_heap);
            intv_s2 = intv_s2->next;
        }

        intv_s2->graphnode = NULL;
        intv_s2->unk1C = 0;
        intv_s2->prev = 0;
        intv_s2->unk28 = 0;
        intv_s2->intv8 = 0;
        intv_s2->successors = NULL;
        intv_s2->predecessors = NULL;
        intv_s2->loopdepth = 0;
        intv_s2->intvC = intv_s7;
        intv_s2->loop = NULL;

        intv_s7->intv8 = intv_s2;
        intv_s7->unk28 = 2;

        intv_s2->unk29 = intv_s7->unk29;
        intv_s2->intvList4 = alloc_new(8, &intv_heap);
        intv_s2->intvList4->intv = intv_s7;

        numintval++;

        phi_s6 = intv_s2->intvList4;
        list_s0 = phi_s6;
        found = 0;

        while (phi_s6 != NULL) {
            phi_s6->intv->unk28 = 2;
            succ_s1 = phi_s6->intv->successors;

            while (succ_s1 != NULL) {
                succ_s1->intv->unk1C--;
                temp_v1 = succ_s1->intv->prev;

                if (succ_s1->intv->prev == NULL) {
                    succ_s1->intv->prev = intv_s2->intvList4->intv;
                    if (succ_s1->intv->unk1C == 0) {

                        list_s0->next = alloc_new(8, &intv_heap);
                        list_s0->next->intv = succ_s1->intv;
                        succ_s1->intv->intv8 = intv_s2;
                        list_s0 = list_s0->next;
                    } else {
                        succ_s1->intv->unk28 = 1; // set to 1 here
                    }
                } else if (intv_s2->intvList4->intv == temp_v1 
                        && succ_s1->intv->unk1C == 0 
                        && succ_s1->intv->unk28 != 2) {

                    list_s0->next = alloc_new(8, &intv_heap);
                    list_s0->next->intv = succ_s1->intv;
                    succ_s1->intv->intv8 = intv_s2;
                    succ_s1->intv->unk28 = 0;
                    list_s0 = list_s0->next;
                }

                succ_s1 = succ_s1->next;
            }

            list_s0->next = NULL;
            phi_s6 = phi_s6->next;
            found = 0;
        }

        do {
            intv_s7 = intv_s7->next;
            if (intv_s7 != NULL) {
                found = intv_s7->unk28 == 1;
            }

            if (found != 0) {
                break;
            }
        } while (intv_s7 != 0);

        if (found == 0) {
            intv_s7 = intvHead;
            do {
                intv_s7 = intv_s7->next;
                if (intv_s7 == 0) {
                    done = 1;
                } else {
                    found = intv_s7->unk28 == 1;
                }
                if (found) {
                    break;
                }
            } while(done == 0);
        }
    } while (done == 0);
    intv_s2->next = NULL;

    intv_s2 = sp44;

    do {
        phi_s6 = intv_s2->intvList4;

        do {
            succ_s1 = phi_s6->intv->successors;

            while (succ_s1 != NULL) {
                temp_a2 = succ_s1->intv->intv8;
                if (intv_s2 != temp_a2) {
                    if (intv_s2->successors == 0) {
                        intv_s2->successors = alloc_new(8, &intv_heap);
                        intv_s2->successors->intv = succ_s1->intv->intv8;
                        intv_s2->successors->next = NULL;
                        succ_s1->intv->intv8->unk1C++;
                        newList = alloc_new(8, &intv_heap);
                        newList->intv = intv_s2;
                        newList->next = succ_s1->intv->intv8->predecessors;
                        succ_s1->intv->intv8->predecessors = newList;
                    } else {
                        phi_v1 = temp_a2 != intv_s2->successors->intv;
                        list_s0 = intv_s2->successors;
                        if (phi_v1) {
                            phi_v0 = intv_s2->successors->next;
                            list_s0 = intv_s2->successors;

                            while (phi_v0 != NULL) {
                                list_s0 = phi_v0;
                                phi_v1 = temp_a2 != phi_v0->intv;
                                if (phi_v1 == 0) {
                                    break;
                                }
                                phi_v0 = phi_v0->next;
                            }
                        }

                        if (phi_v1) {
                            list_s0->next = alloc_new(8, &intv_heap);
                            list_s0->next->next = 0;
                            list_s0->next->intv = succ_s1->intv->intv8;
                            succ_s1->intv->intv8->unk1C++;

                            newList = alloc_new(8, &intv_heap);
                            newList->intv = intv_s2;
                            newList->next = succ_s1->intv->intv8->predecessors;
                            succ_s1->intv->intv8->predecessors = newList;
                        }
                    }
                }
                succ_s1 = succ_s1->next;
            }
            phi_s6 = phi_s6->next;
        } while (phi_s6 != NULL);
        intv_s2 = intv_s2->next;
    } while (intv_s2 != NULL);
    return sp44;
}

#if 0
    .type func_00453430, @function
func_00453430:
    # 00455D38 analoop
/* 00453430 3C1C0FBC */  .cpload $t9
/* 00453434 279C6E60 */  
/* 00453438 0399E021 */  
/* 0045343C 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 00453440 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00453444 AFBE0038 */  sw    $fp, 0x38($sp)
/* 00453448 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0045344C AFB70030 */  sw    $s7, 0x30($sp)
/* 00453450 AFB6002C */  sw    $s6, 0x2c($sp)
/* 00453454 AFB50028 */  sw    $s5, 0x28($sp)
/* 00453458 AFB40024 */  sw    $s4, 0x24($sp)
/* 0045345C AFB30020 */  sw    $s3, 0x20($sp)
/* 00453460 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00453464 AFB10018 */  sw    $s1, 0x18($sp)
/* 00453468 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045346C AFA40058 */  sw    $a0, 0x58($sp)
/* 00453470 AC840020 */  sw    $a0, 0x20($a0)
/* 00453474 8FAF0058 */  lw    $t7, 0x58($sp)
/* 00453478 24150001 */  li    $s5, 1
/* 0045347C 24140002 */  li    $s4, 2
/* 00453480 A1F50028 */  sb    $s5, 0x28($t7)
/* 00453484 8FB80058 */  lw    $t8, 0x58($sp)
/* 00453488 8F170018 */  lw    $s7, 0x18($t8)
/* 0045348C 12E00009 */  beqz  $s7, .L004534B4
/* 00453490 00000000 */   nop   
/* 00453494 92F90029 */  lbu   $t9, 0x29($s7)
.L00453498:
/* 00453498 53200004 */  beql  $t9, $zero, .L004534AC
/* 0045349C 8EF70018 */   lw    $s7, 0x18($s7)
/* 004534A0 AEF70020 */  sw    $s7, 0x20($s7)
/* 004534A4 A2F50028 */  sb    $s5, 0x28($s7)
/* 004534A8 8EF70018 */  lw    $s7, 0x18($s7)
.L004534AC:
/* 004534AC 56E0FFFA */  bnezl $s7, .L00453498
/* 004534B0 92F90029 */   lbu   $t9, 0x29($s7)
.L004534B4:
/* 004534B4 8F818A38 */  lw     $at, %got(numintval)($gp)
/* 004534B8 8FB70058 */  lw    $s7, 0x58($sp)
/* 004534BC A3A00043 */  sb    $zero, 0x43($sp)
/* 004534C0 8F9388E4 */  lw     $s3, %got(intv_heap)($gp)
/* 004534C4 8FB2004C */  lw    $s2, 0x4c($sp)
/* 004534C8 AC200000 */  sw    $zero, ($at)
/* 004534CC 8FA80058 */  lw    $t0, 0x58($sp)
.L004534D0:
/* 004534D0 0000F025 */  move  $fp, $zero
/* 004534D4 16E8000A */  bne   $s7, $t0, .L00453500
/* 004534D8 00000000 */   nop   
/* 004534DC 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004534E0 2404002C */  li    $a0, 44
/* 004534E4 02602825 */  move  $a1, $s3
/* 004534E8 0320F809 */  jalr  $t9
/* 004534EC 00000000 */   nop   
/* 004534F0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004534F4 AFA20044 */  sw    $v0, 0x44($sp)
/* 004534F8 10000009 */  b     .L00453520
/* 004534FC 00409025 */   move  $s2, $v0
.L00453500:
/* 00453500 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00453504 2404002C */  li    $a0, 44
/* 00453508 02602825 */  move  $a1, $s3
/* 0045350C 0320F809 */  jalr  $t9
/* 00453510 00000000 */   nop   
/* 00453514 AE420018 */  sw    $v0, 0x18($s2)
/* 00453518 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045351C 00409025 */  move  $s2, $v0
.L00453520:
/* 00453520 AE400000 */  sw    $zero, ($s2)
/* 00453524 AE40001C */  sw    $zero, 0x1c($s2)
/* 00453528 AE400020 */  sw    $zero, 0x20($s2)
/* 0045352C A2400028 */  sb    $zero, 0x28($s2)
/* 00453530 AE400008 */  sw    $zero, 8($s2)
/* 00453534 AE400010 */  sw    $zero, 0x10($s2)
/* 00453538 AE400014 */  sw    $zero, 0x14($s2)
/* 0045353C A240002A */  sb    $zero, 0x2a($s2)
/* 00453540 AE57000C */  sw    $s7, 0xc($s2)
/* 00453544 AE400024 */  sw    $zero, 0x24($s2)
/* 00453548 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045354C 92E90029 */  lbu   $t1, 0x29($s7)
/* 00453550 AEF20008 */  sw    $s2, 8($s7)
/* 00453554 A2F40028 */  sb    $s4, 0x28($s7)
/* 00453558 24040008 */  li    $a0, 8
/* 0045355C 02602825 */  move  $a1, $s3
/* 00453560 0320F809 */  jalr  $t9
/* 00453564 A2490029 */   sb    $t1, 0x29($s2)
/* 00453568 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045356C AE420004 */  sw    $v0, 4($s2)
/* 00453570 AC570000 */  sw    $s7, ($v0)
/* 00453574 8F8A8A38 */  lw     $t2, %got(numintval)($gp)
/* 00453578 8F818A38 */  lw     $at, %got(numintval)($gp)
/* 0045357C 8D4A0000 */  lw    $t2, ($t2)
/* 00453580 254B0001 */  addiu $t3, $t2, 1
/* 00453584 AC2B0000 */  sw    $t3, ($at)
/* 00453588 8E560004 */  lw    $s6, 4($s2)
/* 0045358C 12C00042 */  beqz  $s6, .L00453698
/* 00453590 02C08025 */   move  $s0, $s6
/* 00453594 8ECC0000 */  lw    $t4, ($s6)
.L00453598:
/* 00453598 A1940028 */  sb    $s4, 0x28($t4)
/* 0045359C 8ECD0000 */  lw    $t5, ($s6)
/* 004535A0 8DB10010 */  lw    $s1, 0x10($t5)
/* 004535A4 52200039 */  beql  $s1, $zero, .L0045368C
/* 004535A8 AE000004 */   sw    $zero, 4($s0)
/* 004535AC 8E220000 */  lw    $v0, ($s1)
.L004535B0:
/* 004535B0 8C4E001C */  lw    $t6, 0x1c($v0)
/* 004535B4 25CFFFFF */  addiu $t7, $t6, -1
/* 004535B8 AC4F001C */  sw    $t7, 0x1c($v0)
/* 004535BC 8E220000 */  lw    $v0, ($s1)
/* 004535C0 8C430020 */  lw    $v1, 0x20($v0)
/* 004535C4 54600017 */  bnezl $v1, .L00453624
/* 004535C8 8E4B0004 */   lw    $t3, 4($s2)
/* 004535CC 8E580004 */  lw    $t8, 4($s2)
/* 004535D0 8F190000 */  lw    $t9, ($t8)
/* 004535D4 AC590020 */  sw    $t9, 0x20($v0)
/* 004535D8 8E220000 */  lw    $v0, ($s1)
/* 004535DC 8C48001C */  lw    $t0, 0x1c($v0)
/* 004535E0 1500000D */  bnez  $t0, .L00453618
/* 004535E4 00000000 */   nop   
/* 004535E8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004535EC 24040008 */  li    $a0, 8
/* 004535F0 02602825 */  move  $a1, $s3
/* 004535F4 0320F809 */  jalr  $t9
/* 004535F8 00000000 */   nop   
/* 004535FC AE020004 */  sw    $v0, 4($s0)
/* 00453600 8E290000 */  lw    $t1, ($s1)
/* 00453604 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00453608 00408025 */  move  $s0, $v0
/* 0045360C AC490000 */  sw    $t1, ($v0)
/* 00453610 1000001A */  b     .L0045367C
/* 00453614 AD320008 */   sw    $s2, 8($t1)
.L00453618:
/* 00453618 10000018 */  b     .L0045367C
/* 0045361C A0550028 */   sb    $s5, 0x28($v0)
/* 00453620 8E4B0004 */  lw    $t3, 4($s2)
.L00453624:
/* 00453624 8D6C0000 */  lw    $t4, ($t3)
/* 00453628 55830015 */  bnel  $t4, $v1, .L00453680
/* 0045362C 8E310004 */   lw    $s1, 4($s1)
/* 00453630 8C4D001C */  lw    $t5, 0x1c($v0)
/* 00453634 55A00012 */  bnezl $t5, .L00453680
/* 00453638 8E310004 */   lw    $s1, 4($s1)
/* 0045363C 904E0028 */  lbu   $t6, 0x28($v0)
/* 00453640 528E000F */  beql  $s4, $t6, .L00453680
/* 00453644 8E310004 */   lw    $s1, 4($s1)
/* 00453648 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045364C 24040008 */  li    $a0, 8
/* 00453650 02602825 */  move  $a1, $s3
/* 00453654 0320F809 */  jalr  $t9
/* 00453658 00000000 */   nop   
/* 0045365C AE020004 */  sw    $v0, 4($s0)
/* 00453660 8E2F0000 */  lw    $t7, ($s1)
/* 00453664 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00453668 00408025 */  move  $s0, $v0
/* 0045366C AC4F0000 */  sw    $t7, ($v0)
/* 00453670 ADF20008 */  sw    $s2, 8($t7)
/* 00453674 8E390000 */  lw    $t9, ($s1)
/* 00453678 A3200028 */  sb    $zero, 0x28($t9)
.L0045367C:
/* 0045367C 8E310004 */  lw    $s1, 4($s1)
.L00453680:
/* 00453680 5620FFCB */  bnezl $s1, .L004535B0
/* 00453684 8E220000 */   lw    $v0, ($s1)
/* 00453688 AE000004 */  sw    $zero, 4($s0)
.L0045368C:
/* 0045368C 8ED60004 */  lw    $s6, 4($s6)
/* 00453690 56C0FFC1 */  bnezl $s6, .L00453598
/* 00453694 8ECC0000 */   lw    $t4, ($s6)
.L00453698:
/* 00453698 8EF70018 */  lw    $s7, 0x18($s7)
.L0045369C:
/* 0045369C 12E00005 */  beqz  $s7, .L004536B4
/* 004536A0 00000000 */   nop   
/* 004536A4 92E80028 */  lbu   $t0, 0x28($s7)
/* 004536A8 02A8F026 */  xor   $fp, $s5, $t0
/* 004536AC 2FDE0001 */  sltiu $fp, $fp, 1
/* 004536B0 33DE00FF */  andi  $fp, $fp, 0xff
.L004536B4:
/* 004536B4 17C00003 */  bnez  $fp, .L004536C4
/* 004536B8 00000000 */   nop   
/* 004536BC 56E0FFF7 */  bnezl $s7, .L0045369C
/* 004536C0 8EF70018 */   lw    $s7, 0x18($s7)
.L004536C4:
/* 004536C4 57C00010 */  bnezl $fp, .L00453708
/* 004536C8 93AB0043 */   lbu   $t3, 0x43($sp)
/* 004536CC 8FB70058 */  lw    $s7, 0x58($sp)
/* 004536D0 8EF70018 */  lw    $s7, 0x18($s7)
.L004536D4:
/* 004536D4 56E00004 */  bnezl $s7, .L004536E8
/* 004536D8 92E90028 */   lbu   $t1, 0x28($s7)
/* 004536DC 10000005 */  b     .L004536F4
/* 004536E0 A3B50043 */   sb    $s5, 0x43($sp)
/* 004536E4 92E90028 */  lbu   $t1, 0x28($s7)
.L004536E8:
/* 004536E8 02A9F026 */  xor   $fp, $s5, $t1
/* 004536EC 2FDE0001 */  sltiu $fp, $fp, 1
/* 004536F0 33DE00FF */  andi  $fp, $fp, 0xff
.L004536F4:
/* 004536F4 17C00003 */  bnez  $fp, .L00453704
/* 004536F8 93AA0043 */   lbu   $t2, 0x43($sp)
/* 004536FC 5140FFF5 */  beql  $t2, $zero, .L004536D4
/* 00453700 8EF70018 */   lw    $s7, 0x18($s7)
.L00453704:
/* 00453704 93AB0043 */  lbu   $t3, 0x43($sp)
.L00453708:
/* 00453708 5160FF71 */  beql  $t3, $zero, .L004534D0
/* 0045370C 8FA80058 */   lw    $t0, 0x58($sp)
/* 00453710 AE400018 */  sw    $zero, 0x18($s2)
/* 00453714 8FB20044 */  lw    $s2, 0x44($sp)
/* 00453718 8E560004 */  lw    $s6, 4($s2)
.L0045371C:
/* 0045371C 8ECC0000 */  lw    $t4, ($s6)
.L00453720:
/* 00453720 8D910010 */  lw    $s1, 0x10($t4)
/* 00453724 5220005E */  beql  $s1, $zero, .L004538A0
/* 00453728 8ED60004 */   lw    $s6, 4($s6)
/* 0045372C 8E2D0000 */  lw    $t5, ($s1)
.L00453730:
/* 00453730 8DA60008 */  lw    $a2, 8($t5)
/* 00453734 52460057 */  beql  $s2, $a2, .L00453894
/* 00453738 8E310004 */   lw    $s1, 4($s1)
/* 0045373C 8E420010 */  lw    $v0, 0x10($s2)
/* 00453740 54400021 */  bnezl $v0, .L004537C8
/* 00453744 8C4F0000 */   lw    $t7, ($v0)
/* 00453748 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045374C 24040008 */  li    $a0, 8
/* 00453750 02602825 */  move  $a1, $s3
/* 00453754 0320F809 */  jalr  $t9
/* 00453758 00000000 */   nop   
/* 0045375C AE420010 */  sw    $v0, 0x10($s2)
/* 00453760 8E2E0000 */  lw    $t6, ($s1)
/* 00453764 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00453768 24040008 */  li    $a0, 8
/* 0045376C 8DCF0008 */  lw    $t7, 8($t6)
/* 00453770 02602825 */  move  $a1, $s3
/* 00453774 AC4F0000 */  sw    $t7, ($v0)
/* 00453778 8E580010 */  lw    $t8, 0x10($s2)
/* 0045377C AF000004 */  sw    $zero, 4($t8)
/* 00453780 8E390000 */  lw    $t9, ($s1)
/* 00453784 8F260008 */  lw    $a2, 8($t9)
/* 00453788 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045378C 8CC8001C */  lw    $t0, 0x1c($a2)
/* 00453790 25090001 */  addiu $t1, $t0, 1
/* 00453794 0320F809 */  jalr  $t9
/* 00453798 ACC9001C */   sw    $t1, 0x1c($a2)
/* 0045379C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004537A0 AC520000 */  sw    $s2, ($v0)
/* 004537A4 8E2A0000 */  lw    $t2, ($s1)
/* 004537A8 8D4B0008 */  lw    $t3, 8($t2)
/* 004537AC 8D6C0014 */  lw    $t4, 0x14($t3)
/* 004537B0 AC4C0004 */  sw    $t4, 4($v0)
/* 004537B4 8E2D0000 */  lw    $t5, ($s1)
/* 004537B8 8DAE0008 */  lw    $t6, 8($t5)
/* 004537BC 10000034 */  b     .L00453890
/* 004537C0 ADC20014 */   sw    $v0, 0x14($t6)
/* 004537C4 8C4F0000 */  lw    $t7, ($v0)
.L004537C8:
/* 004537C8 00408025 */  move  $s0, $v0
/* 004537CC 00CF1826 */  xor   $v1, $a2, $t7
/* 004537D0 0003182B */  sltu  $v1, $zero, $v1
/* 004537D4 306300FF */  andi  $v1, $v1, 0xff
/* 004537D8 1060000E */  beqz  $v1, .L00453814
/* 004537DC 00000000 */   nop   
/* 004537E0 8C420004 */  lw    $v0, 4($v0)
/* 004537E4 1040000B */  beqz  $v0, .L00453814
/* 004537E8 00000000 */   nop   
/* 004537EC 8C580000 */  lw    $t8, ($v0)
.L004537F0:
/* 004537F0 00408025 */  move  $s0, $v0
/* 004537F4 00D81826 */  xor   $v1, $a2, $t8
/* 004537F8 0003182B */  sltu  $v1, $zero, $v1
/* 004537FC 306300FF */  andi  $v1, $v1, 0xff
/* 00453800 10600004 */  beqz  $v1, .L00453814
/* 00453804 00000000 */   nop   
/* 00453808 8C420004 */  lw    $v0, 4($v0)
/* 0045380C 5440FFF8 */  bnezl $v0, .L004537F0
/* 00453810 8C580000 */   lw    $t8, ($v0)
.L00453814:
/* 00453814 5060001F */  beql  $v1, $zero, .L00453894
/* 00453818 8E310004 */   lw    $s1, 4($s1)
/* 0045381C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00453820 24040008 */  li    $a0, 8
/* 00453824 02602825 */  move  $a1, $s3
/* 00453828 0320F809 */  jalr  $t9
/* 0045382C 00000000 */   nop   
/* 00453830 AE020004 */  sw    $v0, 4($s0)
/* 00453834 8E390000 */  lw    $t9, ($s1)
/* 00453838 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045383C 24040008 */  li    $a0, 8
/* 00453840 8F280008 */  lw    $t0, 8($t9)
/* 00453844 AC400004 */  sw    $zero, 4($v0)
/* 00453848 02602825 */  move  $a1, $s3
/* 0045384C AC480000 */  sw    $t0, ($v0)
/* 00453850 8E290000 */  lw    $t1, ($s1)
/* 00453854 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00453858 8D260008 */  lw    $a2, 8($t1)
/* 0045385C 8CCA001C */  lw    $t2, 0x1c($a2)
/* 00453860 254B0001 */  addiu $t3, $t2, 1
/* 00453864 0320F809 */  jalr  $t9
/* 00453868 ACCB001C */   sw    $t3, 0x1c($a2)
/* 0045386C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00453870 AC520000 */  sw    $s2, ($v0)
/* 00453874 8E2C0000 */  lw    $t4, ($s1)
/* 00453878 8D8D0008 */  lw    $t5, 8($t4)
/* 0045387C 8DAE0014 */  lw    $t6, 0x14($t5)
/* 00453880 AC4E0004 */  sw    $t6, 4($v0)
/* 00453884 8E2F0000 */  lw    $t7, ($s1)
/* 00453888 8DF80008 */  lw    $t8, 8($t7)
/* 0045388C AF020014 */  sw    $v0, 0x14($t8)
.L00453890:
/* 00453890 8E310004 */  lw    $s1, 4($s1)
.L00453894:
/* 00453894 5620FFA6 */  bnezl $s1, .L00453730
/* 00453898 8E2D0000 */   lw    $t5, ($s1)
/* 0045389C 8ED60004 */  lw    $s6, 4($s6)
.L004538A0:
/* 004538A0 56C0FF9F */  bnezl $s6, .L00453720
/* 004538A4 8ECC0000 */   lw    $t4, ($s6)
/* 004538A8 8E520018 */  lw    $s2, 0x18($s2)
/* 004538AC 5640FF9B */  bnezl $s2, .L0045371C
/* 004538B0 8E560004 */   lw    $s6, 4($s2)
/* 004538B4 8FBF003C */  lw    $ra, 0x3c($sp)
/* 004538B8 8FA20044 */  lw    $v0, 0x44($sp)
/* 004538BC 8FB00014 */  lw    $s0, 0x14($sp)
/* 004538C0 8FB10018 */  lw    $s1, 0x18($sp)
/* 004538C4 8FB2001C */  lw    $s2, 0x1c($sp)
/* 004538C8 8FB30020 */  lw    $s3, 0x20($sp)
/* 004538CC 8FB40024 */  lw    $s4, 0x24($sp)
/* 004538D0 8FB50028 */  lw    $s5, 0x28($sp)
/* 004538D4 8FB6002C */  lw    $s6, 0x2c($sp)
/* 004538D8 8FB70030 */  lw    $s7, 0x30($sp)
/* 004538DC 8FBE0038 */  lw    $fp, 0x38($sp)
/* 004538E0 03E00008 */  jr    $ra
/* 004538E4 27BD0058 */   addiu $sp, $sp, 0x58
#endif

static struct Intval *func_004538E8(struct Intval *arg0, struct Intval *arg1) {
    struct Intval *phi_v0;
    struct Intval *phi_v1;

    phi_v0 = arg1->intv8;
    phi_v1 = arg0->intv8;
    while (phi_v0 != phi_v1) {
        arg0 = phi_v1;
        phi_v1 = phi_v1->intv8;
        phi_v0 = phi_v0->intv8;
    }
    return arg0;
}

#if 0
    .type func_004538E8, @function
func_004538E8:
    # 00453914 func_00453914
/* 004538E8 8CA20008 */  lw    $v0, 8($a1)
/* 004538EC 8C830008 */  lw    $v1, 8($a0)
/* 004538F0 10430006 */  beq   $v0, $v1, .L0045390C
/* 004538F4 00000000 */   nop   
/* 004538F8 00602025 */  move  $a0, $v1
.L004538FC:
/* 004538FC 8C630008 */  lw    $v1, 8($v1)
/* 00453900 8C420008 */  lw    $v0, 8($v0)
/* 00453904 5443FFFD */  bnel  $v0, $v1, .L004538FC
/* 00453908 00602025 */   move  $a0, $v1
.L0045390C:
/* 0045390C 03E00008 */  jr    $ra
/* 00453910 00801025 */   move  $v0, $a0
#endif

static void func_00453914(struct Intval *arg0, struct Intval *arg1) {
    struct Intval *ret_intv;
    struct IntvalList *succ;

    succ = arg0->successors;
    if (succ == NULL) {
        arg0->loopdepth = 1;
        return;
    }

    if (arg0->loopdepth == 0) {
        arg0->loopdepth = 1;

        do {
            if (succ->intv->intv8 != arg1) {
                ret_intv = func_004538E8(arg1, succ->intv->intv8);
                if (arg0->loopdepth < ret_intv->loopdepth) {
                    arg0->loopdepth = ret_intv->loopdepth;
                    arg0->loop = ret_intv->loop;
                }
            } else {
                func_00453914(succ->intv, arg1);
                if (arg0->loopdepth < succ->intv->loopdepth) {
                    arg0->loopdepth = succ->intv->loopdepth;
                    arg0->loop = succ->intv->loop;
                }
            }
            succ = succ->next;
        } while (succ != NULL);
    }
}

#if 0
__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

    .type func_00453914, @function
func_00453914:
    # 00453914 func_00453914
    # 00453C20 func_00453C20
/* 00453914 3C1C0FBC */  .cpload $t9
/* 00453918 279C697C */  
/* 0045391C 0399E021 */  
/* 00453920 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00453924 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00453928 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0045392C AFB30024 */  sw    $s3, 0x24($sp)
/* 00453930 AFB20020 */  sw    $s2, 0x20($sp)
/* 00453934 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00453938 AFB00018 */  sw    $s0, 0x18($sp)
/* 0045393C 8C830010 */  lw    $v1, 0x10($a0)
/* 00453940 00808025 */  move  $s0, $a0
/* 00453944 00A09025 */  move  $s2, $a1
/* 00453948 14600004 */  bnez  $v1, .L0045395C
/* 0045394C 00409825 */   move  $s3, $v0
/* 00453950 240E0001 */  li    $t6, 1
/* 00453954 1000002F */  b     .L00453A14
/* 00453958 A08E002A */   sb    $t6, 0x2a($a0)
.L0045395C:
/* 0045395C 920F002A */  lbu   $t7, 0x2a($s0)
/* 00453960 00608825 */  move  $s1, $v1
/* 00453964 24180001 */  li    $t8, 1
/* 00453968 55E0002B */  bnezl $t7, .L00453A18
/* 0045396C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00453970 A218002A */  sb    $t8, 0x2a($s0)
/* 00453974 8E240000 */  lw    $a0, ($s1)
.L00453978:
/* 00453978 8C850008 */  lw    $a1, 8($a0)
/* 0045397C 12450011 */  beq   $s2, $a1, .L004539C4
/* 00453980 00000000 */   nop   
/* 00453984 8F998028 */  lw    $t9, %got(func_004538E8)($gp)
/* 00453988 02402025 */  move  $a0, $s2
/* 0045398C 02601025 */  move  $v0, $s3
/* 00453990 273938E8 */  addiu $t9, %lo(func_004538E8) # addiu $t9, $t9, 0x38e8
/* 00453994 0320F809 */  jalr  $t9
/* 00453998 00000000 */   nop   
/* 0045399C 9043002A */  lbu   $v1, 0x2a($v0)
/* 004539A0 9219002A */  lbu   $t9, 0x2a($s0)
/* 004539A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004539A8 0323082B */  sltu  $at, $t9, $v1
/* 004539AC 50200017 */  beql  $at, $zero, .L00453A0C
/* 004539B0 8E310004 */   lw    $s1, 4($s1)
/* 004539B4 A203002A */  sb    $v1, 0x2a($s0)
/* 004539B8 8C480024 */  lw    $t0, 0x24($v0)
/* 004539BC 10000012 */  b     .L00453A08
/* 004539C0 AE080024 */   sw    $t0, 0x24($s0)
.L004539C4:
/* 004539C4 8F998028 */  lw    $t9, %got(func_00453914)($gp)
/* 004539C8 02402825 */  move  $a1, $s2
/* 004539CC 02601025 */  move  $v0, $s3
/* 004539D0 27393914 */  addiu $t9, %lo(func_00453914) # addiu $t9, $t9, 0x3914
/* 004539D4 0320F809 */  jalr  $t9
/* 004539D8 00000000 */   nop   
/* 004539DC 8E290000 */  lw    $t1, ($s1)
/* 004539E0 920A002A */  lbu   $t2, 0x2a($s0)
/* 004539E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004539E8 9122002A */  lbu   $v0, 0x2a($t1)
/* 004539EC 0142082B */  sltu  $at, $t2, $v0
/* 004539F0 50200006 */  beql  $at, $zero, .L00453A0C
/* 004539F4 8E310004 */   lw    $s1, 4($s1)
/* 004539F8 A202002A */  sb    $v0, 0x2a($s0)
/* 004539FC 8E2B0000 */  lw    $t3, ($s1)
/* 00453A00 8D6C0024 */  lw    $t4, 0x24($t3)
/* 00453A04 AE0C0024 */  sw    $t4, 0x24($s0)
.L00453A08:
/* 00453A08 8E310004 */  lw    $s1, 4($s1)
.L00453A0C:
/* 00453A0C 5620FFDA */  bnezl $s1, .L00453978
/* 00453A10 8E240000 */   lw    $a0, ($s1)
.L00453A14:
/* 00453A14 8FBF002C */  lw    $ra, 0x2c($sp)
.L00453A18:
/* 00453A18 8FB00018 */  lw    $s0, 0x18($sp)
/* 00453A1C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00453A20 8FB20020 */  lw    $s2, 0x20($sp)
/* 00453A24 8FB30024 */  lw    $s3, 0x24($sp)
/* 00453A28 03E00008 */  jr    $ra
/* 00453A2C 27BD0030 */   addiu $sp, $sp, 0x30
)"");
#endif

#if 1
/* Inner function
# 00453C20 func_00453C20
*/
static int func_00453A30(unsigned int power) {
    switch (power) {
        case 0:
            return 1;
        case 1:
            return 10;
        case 2:
            return 100;
        case 3:
            return 1000;
        case 4:
            return 10000;
        case 5:
            return 100000;
        case 6:
            return 1000000;
        case 7:
            return 10000000;
        case 8:
            return 100000000;
        case 9:
            return 1000000000;
        default:
            // what
            return (power * 100) + 1000000000;
    }
}

#else
__asm__(R""(
    .type func_00453A30, @function
func_00453A30:
    # 00453C20 func_00453C20
/* 00453A30 3C1C0FBC */  .cpload $t9
/* 00453A34 279C6860 */  
/* 00453A38 0399E021 */  
/* 00453A3C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00453A40 2C81000A */  sltiu $at, $a0, 0xa
/* 00453A44 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00453A48 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00453A4C 10200021 */  beqz  $at, .L00453AD4
/* 00453A50 00801025 */   move  $v0, $a0
/* 00453A54 8F818044 */  lw    $at, %got(jtbl_1000CF00)($gp)
/* 00453A58 00027080 */  sll   $t6, $v0, 2
/* 00453A5C 002E0821 */  addu  $at, $at, $t6
/* 00453A60 8C2ECF00 */  lw    $t6, %lo(jtbl_1000CF00)($at)
/* 00453A64 01DC7021 */  addu  $t6, $t6, $gp
/* 00453A68 01C00008 */  jr    $t6
/* 00453A6C 00000000 */   nop   
.L00453A70:
/* 00453A70 10000020 */  b     .L00453AF4
/* 00453A74 24020001 */   li    $v0, 1
.L00453A78:
/* 00453A78 1000001E */  b     .L00453AF4
/* 00453A7C 2402000A */   li    $v0, 10
.L00453A80:
/* 00453A80 1000001C */  b     .L00453AF4
/* 00453A84 24020064 */   li    $v0, 100
.L00453A88:
/* 00453A88 1000001A */  b     .L00453AF4
/* 00453A8C 240203E8 */   li    $v0, 1000
.L00453A90:
/* 00453A90 10000018 */  b     .L00453AF4
/* 00453A94 24022710 */   li    $v0, 10000
.L00453A98:
/* 00453A98 3C020001 */  lui   $v0, 1
/* 00453A9C 10000015 */  b     .L00453AF4
/* 00453AA0 344286A0 */   ori   $v0, $v0, 0x86a0
.L00453AA4:
/* 00453AA4 3C02000F */  lui   $v0, 0xf
/* 00453AA8 10000012 */  b     .L00453AF4
/* 00453AAC 34424240 */   ori   $v0, $v0, 0x4240
.L00453AB0:
/* 00453AB0 3C020098 */  lui   $v0, 0x98
/* 00453AB4 1000000F */  b     .L00453AF4
/* 00453AB8 34429680 */   ori   $v0, $v0, 0x9680
.L00453ABC:
/* 00453ABC 3C0205F5 */  lui   $v0, 0x5f5
/* 00453AC0 1000000C */  b     .L00453AF4
/* 00453AC4 3442E100 */   ori   $v0, $v0, 0xe100
.L00453AC8:
/* 00453AC8 3C023B9A */  lui   $v0, 0x3b9a
/* 00453ACC 10000009 */  b     .L00453AF4
/* 00453AD0 3442CA00 */   ori   $v0, $v0, 0xca00
.L00453AD4:
/* 00453AD4 00041080 */  sll   $v0, $a0, 2
/* 00453AD8 00441023 */  subu  $v0, $v0, $a0
/* 00453ADC 000210C0 */  sll   $v0, $v0, 3
/* 00453AE0 00441021 */  addu  $v0, $v0, $a0
/* 00453AE4 3C013B9A */  lui   $at, 0x3b9a
/* 00453AE8 3421CA00 */  ori   $at, $at, 0xca00
/* 00453AEC 00021080 */  sll   $v0, $v0, 2
/* 00453AF0 00411021 */  addu  $v0, $v0, $at
.L00453AF4:
/* 00453AF4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00453AF8 27BD0028 */  addiu $sp, $sp, 0x28
/* 00453AFC 03E00008 */  jr    $ra
/* 00453B00 00000000 */   nop   
)"");
#endif

static struct Loop *func_00453B04(struct Intval *arg0) {
    struct Loop *newLoop;

    if (arg0->loop != 0) {
        newLoop = alloc_new(0x18, &perm_heap);
        newLoop->loopno = curloopno++;
        newLoop->unk4 = arg0->loop->unk4 + 1;
        newLoop->graphnode = 0;
        newLoop->loopC = NULL;
        newLoop->loop10 = arg0->loop;
        newLoop->loop14 = arg0->loop->loopC;
        arg0->loop->loopC = newLoop;
        return newLoop;
    }

    if (arg0->intv8 != 0) {
        return func_00453B04(arg0->intv8);
    }

    newLoop = alloc_new(0x18, &perm_heap);
    newLoop->loopno = curloopno++;
    newLoop->unk4 = 1;
    newLoop->graphnode = 0;
    newLoop->loopC = 0;
    newLoop->loop10 = 0;
    newLoop->loop14 = toplevelloops;
    toplevelloops = newLoop;
    return newLoop;
}

#if 0
    .type func_00453B04, @function
func_00453B04:
    # 00453B04 func_00453B04
    # 00453C20 func_00453C20
/* 00453B04 3C1C0FBC */  .cpload $t9
/* 00453B08 279C678C */  
/* 00453B0C 0399E021 */  
/* 00453B10 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00453B14 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00453B18 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00453B1C 8C8E0024 */  lw    $t6, 0x24($a0)
/* 00453B20 00803025 */  move  $a2, $a0
/* 00453B24 00401825 */  move  $v1, $v0
/* 00453B28 51C0001C */  beql  $t6, $zero, .L00453B9C
/* 00453B2C 8CC40008 */   lw    $a0, 8($a2)
/* 00453B30 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00453B34 24040018 */  li    $a0, 24
/* 00453B38 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00453B3C 0320F809 */  jalr  $t9
/* 00453B40 AFA60020 */   sw    $a2, 0x20($sp)
/* 00453B44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00453B48 8FA60020 */  lw    $a2, 0x20($sp)
/* 00453B4C 8F8489BC */  lw     $a0, %got(curloopno)($gp)
/* 00453B50 8C830000 */  lw    $v1, ($a0)
/* 00453B54 AC430000 */  sw    $v1, ($v0)
/* 00453B58 8CD80024 */  lw    $t8, 0x24($a2)
/* 00453B5C 246F0001 */  addiu $t7, $v1, 1
/* 00453B60 AC8F0000 */  sw    $t7, ($a0)
/* 00453B64 97190004 */  lhu   $t9, 4($t8)
/* 00453B68 AC40000C */  sw    $zero, 0xc($v0)
/* 00453B6C 27280001 */  addiu $t0, $t9, 1
/* 00453B70 A4480004 */  sh    $t0, 4($v0)
/* 00453B74 8CC90024 */  lw    $t1, 0x24($a2)
/* 00453B78 AC490010 */  sw    $t1, 0x10($v0)
/* 00453B7C 8CCA0024 */  lw    $t2, 0x24($a2)
/* 00453B80 8D4B000C */  lw    $t3, 0xc($t2)
/* 00453B84 AC400008 */  sw    $zero, 8($v0)
/* 00453B88 AC4B0014 */  sw    $t3, 0x14($v0)
/* 00453B8C 8CCC0024 */  lw    $t4, 0x24($a2)
/* 00453B90 1000001F */  b     .L00453C10
/* 00453B94 AD82000C */   sw    $v0, 0xc($t4)
/* 00453B98 8CC40008 */  lw    $a0, 8($a2)
.L00453B9C:
/* 00453B9C 10800008 */  beqz  $a0, .L00453BC0
/* 00453BA0 00000000 */   nop   
/* 00453BA4 8F998028 */  lw    $t9, %got(func_00453B04)($gp)
/* 00453BA8 00601025 */  move  $v0, $v1
/* 00453BAC 27393B04 */  addiu $t9, %lo(func_00453B04) # addiu $t9, $t9, 0x3b04
/* 00453BB0 0320F809 */  jalr  $t9
/* 00453BB4 00000000 */   nop   
/* 00453BB8 10000015 */  b     .L00453C10
/* 00453BBC 8FBC0018 */   lw    $gp, 0x18($sp)
.L00453BC0:
/* 00453BC0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00453BC4 24040018 */  li    $a0, 24
/* 00453BC8 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00453BCC 0320F809 */  jalr  $t9
/* 00453BD0 00000000 */   nop   
/* 00453BD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00453BD8 240E0001 */  li    $t6, 1
/* 00453BDC 8F8489BC */  lw     $a0, %got(curloopno)($gp)
/* 00453BE0 8F858A08 */  lw     $a1, %got(toplevelloops)($gp)
/* 00453BE4 8C830000 */  lw    $v1, ($a0)
/* 00453BE8 AC430000 */  sw    $v1, ($v0)
/* 00453BEC 246D0001 */  addiu $t5, $v1, 1
/* 00453BF0 AC8D0000 */  sw    $t5, ($a0)
/* 00453BF4 A44E0004 */  sh    $t6, 4($v0)
/* 00453BF8 AC40000C */  sw    $zero, 0xc($v0)
/* 00453BFC AC400010 */  sw    $zero, 0x10($v0)
/* 00453C00 8CAF0000 */  lw    $t7, ($a1)
/* 00453C04 AC400008 */  sw    $zero, 8($v0)
/* 00453C08 AC4F0014 */  sw    $t7, 0x14($v0)
/* 00453C0C ACA20000 */  sw    $v0, ($a1)
.L00453C10:
/* 00453C10 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00453C14 27BD0020 */  addiu $sp, $sp, 0x20
/* 00453C18 03E00008 */  jr    $ra
/* 00453C1C 00000000 */   nop   
#endif

static void func_00453C20(struct Intval *arg0, int arg1) {
    struct Graphnode *node;
    struct IntvalList *phi_s0;
    struct Loop *phi_s1;

    if (arg0->intvList4 == 0) {
        node = arg0->graphnode;
        node->loopdepth = arg0->loopdepth;
        node->unkE8 = arg0->loop;
        if (arg0->loop != NULL && arg0->loop->graphnode == NULL) {
            arg0->loop->graphnode = node;
        }
        if (usefeedback == 0 || curproc->unk34 == 0) {
            node->unk2C = func_00453A30(arg0->loopdepth - 1);
        }
    } else if (arg1 == 0) {
        phi_s0 = arg0->intvList4;
        phi_s1 = NULL;

        do {
            if (phi_s0->intv->unk28 == 3) {
                phi_s0->intv->loopdepth = arg0->loopdepth + 1;
                if (phi_s1 == 0) {
                    phi_s1 = func_00453B04(arg0);
                }
                phi_s0->intv->loop = phi_s1;
            } else if (phi_s0->intv->loopdepth == 0) {
                func_00453914(phi_s0->intv, arg0);
            }

            phi_s0 = phi_s0->next;
        } while (phi_s0 != 0);
    } else {
        phi_s0 = arg0->intvList4;

        do {
            func_00453C20(phi_s0->intv, arg1 - 1);
            phi_s0 = phi_s0->next;
        } while (phi_s0 != NULL);
    }
    
}

#if 0
__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

    .type func_00453C20, @function
func_00453C20:
    # 00453C20 func_00453C20
    # 00455D38 analoop
/* 00453C20 3C1C0FBC */  .cpload $t9
/* 00453C24 279C6670 */  
/* 00453C28 0399E021 */  
/* 00453C2C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00453C30 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00453C34 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00453C38 AFB40024 */  sw    $s4, 0x24($sp)
/* 00453C3C AFB30020 */  sw    $s3, 0x20($sp)
/* 00453C40 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00453C44 AFB10018 */  sw    $s1, 0x18($sp)
/* 00453C48 AFB00014 */  sw    $s0, 0x14($sp)
/* 00453C4C 8C830004 */  lw    $v1, 4($a0)
/* 00453C50 00809025 */  move  $s2, $a0
/* 00453C54 00409825 */  move  $s3, $v0
/* 00453C58 1460001F */  bnez  $v1, .L00453CD8
/* 00453C5C 00000000 */   nop   
/* 00453C60 8C900000 */  lw    $s0, ($a0)
/* 00453C64 908E002A */  lbu   $t6, 0x2a($a0)
/* 00453C68 A20E000A */  sb    $t6, 0xa($s0)
/* 00453C6C 8C8F0024 */  lw    $t7, 0x24($a0)
/* 00453C70 AE0F00E8 */  sw    $t7, 0xe8($s0)
/* 00453C74 8C820024 */  lw    $v0, 0x24($a0)
/* 00453C78 10400005 */  beqz  $v0, .L00453C90
/* 00453C7C 00000000 */   nop   
/* 00453C80 8C580008 */  lw    $t8, 8($v0)
/* 00453C84 17000002 */  bnez  $t8, .L00453C90
/* 00453C88 00000000 */   nop   
/* 00453C8C AC500008 */  sw    $s0, 8($v0)
.L00453C90:
/* 00453C90 8F998A6C */  lw     $t9, %got(usefeedback)($gp)
/* 00453C94 93390000 */  lbu   $t9, ($t9)
/* 00453C98 13200006 */  beqz  $t9, .L00453CB4
/* 00453C9C 00000000 */   nop   
/* 00453CA0 8F888B6C */  lw     $t0, %got(curproc)($gp)
/* 00453CA4 8D080000 */  lw    $t0, ($t0)
/* 00453CA8 8D090034 */  lw    $t1, 0x34($t0)
/* 00453CAC 5520003D */  bnezl $t1, .L00453DA4
/* 00453CB0 8FBF002C */   lw    $ra, 0x2c($sp)
.L00453CB4:
/* 00453CB4 8F998028 */  lw    $t9, %got(func_00453A30)($gp)
/* 00453CB8 9244002A */  lbu   $a0, 0x2a($s2)
/* 00453CBC 02601025 */  move  $v0, $s3
/* 00453CC0 27393A30 */  addiu $t9, %lo(func_00453A30) # addiu $t9, $t9, 0x3a30
/* 00453CC4 0320F809 */  jalr  $t9
/* 00453CC8 2484FFFF */   addiu $a0, $a0, -1
/* 00453CCC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00453CD0 10000033 */  b     .L00453DA0
/* 00453CD4 AE02002C */   sw    $v0, 0x2c($s0)
.L00453CD8:
/* 00453CD8 14A00026 */  bnez  $a1, .L00453D74
/* 00453CDC 00608025 */   move  $s0, $v1
/* 00453CE0 00008825 */  move  $s1, $zero
/* 00453CE4 00608025 */  move  $s0, $v1
/* 00453CE8 24140003 */  li    $s4, 3
/* 00453CEC 8E040000 */  lw    $a0, ($s0)
.L00453CF0:
/* 00453CF0 908A0028 */  lbu   $t2, 0x28($a0)
/* 00453CF4 568A0011 */  bnel  $s4, $t2, .L00453D3C
/* 00453CF8 908E002A */   lbu   $t6, 0x2a($a0)
/* 00453CFC 924B002A */  lbu   $t3, 0x2a($s2)
/* 00453D00 256C0001 */  addiu $t4, $t3, 1
/* 00453D04 16200009 */  bnez  $s1, .L00453D2C
/* 00453D08 A08C002A */   sb    $t4, 0x2a($a0)
/* 00453D0C 8F998028 */  lw    $t9, %got(func_00453B04)($gp)
/* 00453D10 02402025 */  move  $a0, $s2
/* 00453D14 02601025 */  move  $v0, $s3
/* 00453D18 27393B04 */  addiu $t9, %lo(func_00453B04) # addiu $t9, $t9, 0x3b04
/* 00453D1C 0320F809 */  jalr  $t9
/* 00453D20 00000000 */   nop   
/* 00453D24 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00453D28 00408825 */  move  $s1, $v0
.L00453D2C:
/* 00453D2C 8E0D0000 */  lw    $t5, ($s0)
/* 00453D30 1000000B */  b     .L00453D60
/* 00453D34 ADB10024 */   sw    $s1, 0x24($t5)
/* 00453D38 908E002A */  lbu   $t6, 0x2a($a0)
.L00453D3C:
/* 00453D3C 55C00009 */  bnezl $t6, .L00453D64
/* 00453D40 8E100004 */   lw    $s0, 4($s0)
/* 00453D44 8F998028 */  lw    $t9, %got(func_00453914)($gp)
/* 00453D48 02402825 */  move  $a1, $s2
/* 00453D4C 02601025 */  move  $v0, $s3
/* 00453D50 27393914 */  addiu $t9, %lo(func_00453914) # addiu $t9, $t9, 0x3914
/* 00453D54 0320F809 */  jalr  $t9
/* 00453D58 00000000 */   nop   
/* 00453D5C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00453D60:
/* 00453D60 8E100004 */  lw    $s0, 4($s0)
.L00453D64:
/* 00453D64 5600FFE2 */  bnezl $s0, .L00453CF0
/* 00453D68 8E040000 */   lw    $a0, ($s0)
/* 00453D6C 1000000D */  b     .L00453DA4
/* 00453D70 8FBF002C */   lw    $ra, 0x2c($sp)
.L00453D74:
/* 00453D74 24B1FFFF */  addiu $s1, $a1, -1
.L00453D78:
/* 00453D78 8F998028 */  lw    $t9, %got(func_00453C20)($gp)
/* 00453D7C 8E040000 */  lw    $a0, ($s0)
/* 00453D80 02202825 */  move  $a1, $s1
/* 00453D84 27393C20 */  addiu $t9, %lo(func_00453C20) # addiu $t9, $t9, 0x3c20
/* 00453D88 0320F809 */  jalr  $t9
/* 00453D8C 02601025 */   move  $v0, $s3
/* 00453D90 8E100004 */  lw    $s0, 4($s0)
/* 00453D94 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00453D98 1600FFF7 */  bnez  $s0, .L00453D78
/* 00453D9C 00000000 */   nop   
.L00453DA0:
/* 00453DA0 8FBF002C */  lw    $ra, 0x2c($sp)
.L00453DA4:
/* 00453DA4 8FB00014 */  lw    $s0, 0x14($sp)
/* 00453DA8 8FB10018 */  lw    $s1, 0x18($sp)
/* 00453DAC 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00453DB0 8FB30020 */  lw    $s3, 0x20($sp)
/* 00453DB4 8FB40024 */  lw    $s4, 0x24($sp)
/* 00453DB8 03E00008 */  jr    $ra
/* 00453DBC 27BD0030 */   addiu $sp, $sp, 0x30
)"");
#endif

static void func_00453DC0(struct Intval *arg0, struct Intval *arg1) {
    struct IntvalList *pred;

    if (arg0->unk28 == 3U) {
        return;
    }
    pred = arg0->predecessors;
    arg0->unk28 = 3U;

    while (pred != NULL) {
        if (arg1 == pred->intv->intv8) {
            func_00453DC0(pred->intv, arg1);
        }
        pred = pred->next;
    }
}

#if 0
    .type func_00453DC0, @function
func_00453DC0:
    # 00453DC0 func_00453DC0
    # 00453ECC func_00453ECC
/* 00453DC0 3C1C0FBC */  .cpload $t9
/* 00453DC4 279C64D0 */  
/* 00453DC8 0399E021 */  
/* 00453DCC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00453DD0 908E0028 */  lbu   $t6, 0x28($a0)
/* 00453DD4 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00453DD8 AFB10018 */  sw    $s1, 0x18($sp)
/* 00453DDC 24030003 */  li    $v1, 3
/* 00453DE0 00A08825 */  move  $s1, $a1
/* 00453DE4 00409025 */  move  $s2, $v0
/* 00453DE8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00453DEC AFBC0020 */  sw    $gp, 0x20($sp)
/* 00453DF0 106E0013 */  beq   $v1, $t6, .L00453E40
/* 00453DF4 AFB00014 */   sw    $s0, 0x14($sp)
/* 00453DF8 8C900014 */  lw    $s0, 0x14($a0)
/* 00453DFC A0830028 */  sb    $v1, 0x28($a0)
/* 00453E00 52000010 */  beql  $s0, $zero, .L00453E44
/* 00453E04 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00453E08 8E040000 */  lw    $a0, ($s0)
.L00453E0C:
/* 00453E0C 8C8F0008 */  lw    $t7, 8($a0)
/* 00453E10 562F0009 */  bnel  $s1, $t7, .L00453E38
/* 00453E14 8E100004 */   lw    $s0, 4($s0)
/* 00453E18 8F998028 */  lw    $t9, %got(func_00453DC0)($gp)
/* 00453E1C 02202825 */  move  $a1, $s1
/* 00453E20 02401025 */  move  $v0, $s2
/* 00453E24 27393DC0 */  addiu $t9, %lo(func_00453DC0) # addiu $t9, $t9, 0x3dc0
/* 00453E28 0320F809 */  jalr  $t9
/* 00453E2C 00000000 */   nop   
/* 00453E30 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00453E34 8E100004 */  lw    $s0, 4($s0)
.L00453E38:
/* 00453E38 5600FFF4 */  bnezl $s0, .L00453E0C
/* 00453E3C 8E040000 */   lw    $a0, ($s0)
.L00453E40:
/* 00453E40 8FBF0024 */  lw    $ra, 0x24($sp)
.L00453E44:
/* 00453E44 8FB00014 */  lw    $s0, 0x14($sp)
/* 00453E48 8FB10018 */  lw    $s1, 0x18($sp)
/* 00453E4C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00453E50 03E00008 */  jr    $ra
/* 00453E54 27BD0028 */   addiu $sp, $sp, 0x28
)"");
#endif

static struct Graphnode *func_00453E58(struct Intval *intv) {
    while (intv->intvList4 != NULL) {
        intv = intv->intvC;
    }
    return intv->graphnode;
}
#if 0
    .type func_00453E58, @function
func_00453E58:
    # 00453ECC func_00453ECC
    # 00455C48 func_00455C48
/* 00453E58 8C8E0004 */  lw    $t6, 4($a0)
/* 00453E5C 11C00005 */  beqz  $t6, .L00453E74
/* 00453E60 00000000 */   nop   
/* 00453E64 8C84000C */  lw    $a0, 0xc($a0)
.L00453E68:
/* 00453E68 8C8F0004 */  lw    $t7, 4($a0)
/* 00453E6C 55E0FFFE */  bnezl $t7, .L00453E68
/* 00453E70 8C84000C */   lw    $a0, 0xc($a0)
.L00453E74:
/* 00453E74 03E00008 */  jr    $ra
/* 00453E78 8C820000 */   lw    $v0, ($a0)
#endif

static int func_00453E7C(struct Graphnode *node) {
    struct GraphnodeList *pred;

    pred = node->predecessors;
    while (pred != NULL) {
        if (pred->graphnode->unk2C != 0 && (pred->graphnode->unk2C << 3) < node->unk2C) {
            return true;
        }
        pred = pred->next;
    }
    return false;
}

#if 0
    .type func_00453E7C, @function
func_00453E7C:
    # 00453ECC func_00453ECC
/* 00453E7C 8C820014 */  lw    $v0, 0x14($a0)
/* 00453E80 50400010 */  beql  $v0, $zero, .L00453EC4
/* 00453E84 00001025 */   move  $v0, $zero
/* 00453E88 8C4E0000 */  lw    $t6, ($v0)
.L00453E8C:
/* 00453E8C 8DC3002C */  lw    $v1, 0x2c($t6)
/* 00453E90 50600009 */  beql  $v1, $zero, .L00453EB8
/* 00453E94 8C420004 */   lw    $v0, 4($v0)
/* 00453E98 8C98002C */  lw    $t8, 0x2c($a0)
/* 00453E9C 000378C0 */  sll   $t7, $v1, 3
/* 00453EA0 01F8082B */  sltu  $at, $t7, $t8
/* 00453EA4 50200004 */  beql  $at, $zero, .L00453EB8
/* 00453EA8 8C420004 */   lw    $v0, 4($v0)
/* 00453EAC 03E00008 */  jr    $ra
/* 00453EB0 24020001 */   li    $v0, 1

/* 00453EB4 8C420004 */  lw    $v0, 4($v0)
.L00453EB8:
/* 00453EB8 5440FFF4 */  bnezl $v0, .L00453E8C
/* 00453EBC 8C4E0000 */   lw    $t6, ($v0)
/* 00453EC0 00001025 */  move  $v0, $zero
.L00453EC4:
/* 00453EC4 03E00008 */  jr    $ra
/* 00453EC8 00000000 */   nop   
#endif

static void func_00453ECC(struct Intval *arg0, struct Intval *arg1) {
    struct IntvalList *pred;
    struct Graphnode *node;
    struct IntvalList *list_s0;

    if (arg0 != NULL) {
        pred = arg0->predecessors;
        while (pred != NULL) {
            if (pred->intv->intv8 == arg1) {
                arg0->unk28 = 3;
                func_00453DC0(pred->intv, arg1);
                node = func_00453E58(arg0);
                if (node->unk4 == 0) {
                    if (usefeedback == 0 || curproc->unk34 == NULL || func_00453E7C(node) != 0) {
                        node->unk5 = 1;
                    }
                }
            }
            pred = pred->next;
        }

        list_s0 = arg1->intvList4;
        do {
            func_00453ECC(list_s0->intv->intvC, list_s0->intv);
            list_s0 = list_s0->next;
        } while(list_s0 != 0);
    }
}

#if 0
__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

    .type func_00453ECC, @function
func_00453ECC:
    # 00453ECC func_00453ECC
    # 00455D38 analoop
/* 00453ECC 3C1C0FBC */  .cpload $t9
/* 00453ED0 279C63C4 */  
/* 00453ED4 0399E021 */  
/* 00453ED8 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00453EDC AFB40024 */  sw    $s4, 0x24($sp)
/* 00453EE0 AFB30020 */  sw    $s3, 0x20($sp)
/* 00453EE4 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00453EE8 00409025 */  move  $s2, $v0
/* 00453EEC 00809825 */  move  $s3, $a0
/* 00453EF0 00A0A025 */  move  $s4, $a1
/* 00453EF4 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00453EF8 AFBE0038 */  sw    $fp, 0x38($sp)
/* 00453EFC AFBC0034 */  sw    $gp, 0x34($sp)
/* 00453F00 AFB70030 */  sw    $s7, 0x30($sp)
/* 00453F04 AFB6002C */  sw    $s6, 0x2c($sp)
/* 00453F08 AFB50028 */  sw    $s5, 0x28($sp)
/* 00453F0C AFB10018 */  sw    $s1, 0x18($sp)
/* 00453F10 1080003D */  beqz  $a0, .L00454008
/* 00453F14 AFB00014 */   sw    $s0, 0x14($sp)
/* 00453F18 8C900014 */  lw    $s0, 0x14($a0)
/* 00453F1C 24150003 */  li    $s5, 3
/* 00453F20 5200002F */  beql  $s0, $zero, .L00453FE0
/* 00453F24 8E900004 */   lw    $s0, 4($s4)
/* 00453F28 241E0001 */  li    $fp, 1
/* 00453F2C 8F978B6C */  lw     $s7, %got(curproc)($gp)
/* 00453F30 8F968A6C */  lw     $s6, %got(usefeedback)($gp)
/* 00453F34 8E0E0000 */  lw    $t6, ($s0)
.L00453F38:
/* 00453F38 02802825 */  move  $a1, $s4
/* 00453F3C 8DCF0008 */  lw    $t7, 8($t6)
/* 00453F40 568F0024 */  bnel  $s4, $t7, .L00453FD4
/* 00453F44 8E100004 */   lw    $s0, 4($s0)
/* 00453F48 8F998028 */  lw    $t9, %got(func_00453DC0)($gp)
/* 00453F4C A2750028 */  sb    $s5, 0x28($s3)
/* 00453F50 8E040000 */  lw    $a0, ($s0)
/* 00453F54 27393DC0 */  addiu $t9, %lo(func_00453DC0) # addiu $t9, $t9, 0x3dc0
/* 00453F58 0320F809 */  jalr  $t9
/* 00453F5C 02401025 */   move  $v0, $s2
/* 00453F60 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00453F64 02602025 */  move  $a0, $s3
/* 00453F68 02401025 */  move  $v0, $s2
/* 00453F6C 8F998028 */  lw    $t9, %got(func_00453E58)($gp)
/* 00453F70 27393E58 */  addiu $t9, %lo(func_00453E58) # addiu $t9, $t9, 0x3e58
/* 00453F74 0320F809 */  jalr  $t9
/* 00453F78 00000000 */   nop   
/* 00453F7C 90580004 */  lbu   $t8, 4($v0)
/* 00453F80 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00453F84 00408825 */  move  $s1, $v0
/* 00453F88 57000012 */  bnezl $t8, .L00453FD4
/* 00453F8C 8E100004 */   lw    $s0, 4($s0)
/* 00453F90 92D90000 */  lbu   $t9, ($s6)
/* 00453F94 5320000E */  beql  $t9, $zero, .L00453FD0
/* 00453F98 A23E0005 */   sb    $fp, 5($s1)
/* 00453F9C 8EE80000 */  lw    $t0, ($s7)
/* 00453FA0 8D090034 */  lw    $t1, 0x34($t0)
/* 00453FA4 5120000A */  beql  $t1, $zero, .L00453FD0
/* 00453FA8 A23E0005 */   sb    $fp, 5($s1)
/* 00453FAC 8F998028 */  lw    $t9, %got(func_00453E7C)($gp)
/* 00453FB0 00402025 */  move  $a0, $v0
/* 00453FB4 02401025 */  move  $v0, $s2
/* 00453FB8 27393E7C */  addiu $t9, %lo(func_00453E7C) # addiu $t9, $t9, 0x3e7c
/* 00453FBC 0320F809 */  jalr  $t9
/* 00453FC0 00000000 */   nop   
/* 00453FC4 10400002 */  beqz  $v0, .L00453FD0
/* 00453FC8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00453FCC A23E0005 */  sb    $fp, 5($s1)
.L00453FD0:
/* 00453FD0 8E100004 */  lw    $s0, 4($s0)
.L00453FD4:
/* 00453FD4 5600FFD8 */  bnezl $s0, .L00453F38
/* 00453FD8 8E0E0000 */   lw    $t6, ($s0)
/* 00453FDC 8E900004 */  lw    $s0, 4($s4)
.L00453FE0:
/* 00453FE0 8F998028 */  lw    $t9, %got(func_00453ECC)($gp)
/* 00453FE4 8E050000 */  lw    $a1, ($s0)
/* 00453FE8 02401025 */  move  $v0, $s2
/* 00453FEC 27393ECC */  addiu $t9, %lo(func_00453ECC) # addiu $t9, $t9, 0x3ecc
/* 00453FF0 0320F809 */  jalr  $t9
/* 00453FF4 8CA4000C */   lw    $a0, 0xc($a1)
/* 00453FF8 8E100004 */  lw    $s0, 4($s0)
/* 00453FFC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00454000 1600FFF7 */  bnez  $s0, .L00453FE0
/* 00454004 00000000 */   nop   
.L00454008:
/* 00454008 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0045400C 8FB00014 */  lw    $s0, 0x14($sp)
/* 00454010 8FB10018 */  lw    $s1, 0x18($sp)
/* 00454014 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00454018 8FB30020 */  lw    $s3, 0x20($sp)
/* 0045401C 8FB40024 */  lw    $s4, 0x24($sp)
/* 00454020 8FB50028 */  lw    $s5, 0x28($sp)
/* 00454024 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00454028 8FB70030 */  lw    $s7, 0x30($sp)
/* 0045402C 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00454030 03E00008 */  jr    $ra
/* 00454034 27BD0040 */   addiu $sp, $sp, 0x40
)"");
#endif

/* Inner function
# 00455D38 analoop
*/
static struct Intval *func_00454038(struct Graphnode *node, struct Intval *loopHead) {
    struct Intval *l = loopHead;

    while (l->graphnode != node) {
        l = l->next;
    }
    return l;
}

#if 0
    .type func_00454038, @function
func_00454038:
    # 00455D38 analoop
/* 00454038 8C43FFF8 */  lw    $v1, -8($v0)
/* 0045403C 8C6E0000 */  lw    $t6, ($v1)
/* 00454040 108E0005 */  beq   $a0, $t6, .L00454058
/* 00454044 00000000 */   nop   
/* 00454048 8C630018 */  lw    $v1, 0x18($v1)
.L0045404C:
/* 0045404C 8C6F0000 */  lw    $t7, ($v1)
/* 00454050 548FFFFE */  bnel  $a0, $t7, .L0045404C
/* 00454054 8C630018 */   lw    $v1, 0x18($v1)
.L00454058:
/* 00454058 03E00008 */  jr    $ra
/* 0045405C 00601025 */   move  $v0, $v1
#endif

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

    .type func_00454060, @function
func_00454060:
    # 00455518 func_00455518
/* 00454060 90A20020 */  lbu   $v0, 0x20($a1)
/* 00454064 244EFFE0 */  addiu $t6, $v0, -0x20
/* 00454068 2DCF0040 */  sltiu $t7, $t6, 0x40
/* 0045406C 11E0000A */  beqz  $t7, .L00454098
/* 00454070 00000000 */   nop   
/* 00454074 8F888044 */  lw    $t0, %got(D_10010BF4)($gp)
/* 00454078 000EC143 */  sra   $t8, $t6, 5
/* 0045407C 0018C880 */  sll   $t9, $t8, 2
/* 00454080 25080BF4 */  addiu $t0, %lo(D_10010BF4) # addiu $t0, $t0, 0xbf4
/* 00454084 01194821 */  addu  $t1, $t0, $t9
/* 00454088 8D2A0000 */  lw    $t2, ($t1)
/* 0045408C 01CA5804 */  sllv  $t3, $t2, $t6
/* 00454090 296C0000 */  slti  $t4, $t3, 0
/* 00454094 01807825 */  move  $t7, $t4
.L00454098:
/* 00454098 51E00071 */  beql  $t7, $zero, .L00454260
/* 0045409C 90830025 */   lbu   $v1, 0x25($a0)
/* 004540A0 90830025 */  lbu   $v1, 0x25($a0)
/* 004540A4 2401005F */  li    $at, 95
/* 004540A8 10600003 */  beqz  $v1, .L004540B8
/* 004540AC 00000000 */   nop   
/* 004540B0 50410006 */  beql  $v0, $at, .L004540CC
/* 004540B4 90AD0001 */   lbu   $t5, 1($a1)
.L004540B8:
/* 004540B8 146000AD */  bnez  $v1, .L00454370
/* 004540BC 24010023 */   li    $at, 35
/* 004540C0 144100AB */  bne   $v0, $at, .L00454370
/* 004540C4 00000000 */   nop   
/* 004540C8 90AD0001 */  lbu   $t5, 1($a1)
.L004540CC:
/* 004540CC 3C010600 */  lui   $at, 0x600
/* 004540D0 2DB80020 */  sltiu $t8, $t5, 0x20
/* 004540D4 00184023 */  negu  $t0, $t8
/* 004540D8 0101C824 */  and   $t9, $t0, $at
/* 004540DC 01B94804 */  sllv  $t1, $t9, $t5
/* 004540E0 0521002F */  bgez  $t1, .L004541A0
/* 004540E4 00000000 */   nop   
/* 004540E8 58C00018 */  blezl $a2, .L0045414C
/* 004540EC 8C980020 */   lw    $t8, 0x20($a0)
/* 004540F0 8CAA0028 */  lw    $t2, 0x28($a1)
/* 004540F4 8C8B0020 */  lw    $t3, 0x20($a0)
/* 004540F8 8D4E0020 */  lw    $t6, 0x20($t2)
/* 004540FC 8D6C0020 */  lw    $t4, 0x20($t3)
/* 00454100 01CC1023 */  subu  $v0, $t6, $t4
/* 00454104 1840009A */  blez  $v0, .L00454370
/* 00454108 00000000 */   nop   
/* 0045410C 0046001A */  div   $zero, $v0, $a2
/* 00454110 00007810 */  mfhi  $t7
/* 00454114 14C00002 */  bnez  $a2, .L00454120
/* 00454118 00000000 */   nop   
/* 0045411C 0007000D */  break 7
.L00454120:
/* 00454120 2401FFFF */  li    $at, -1
/* 00454124 14C10004 */  bne   $a2, $at, .L00454138
/* 00454128 3C018000 */   lui   $at, 0x8000
/* 0045412C 14410002 */  bne   $v0, $at, .L00454138
/* 00454130 00000000 */   nop   
/* 00454134 0006000D */  break 6
.L00454138:
/* 00454138 15E0008D */  bnez  $t7, .L00454370
/* 0045413C 00000000 */   nop   
/* 00454140 03E00008 */  jr    $ra
/* 00454144 AC86001C */   sw    $a2, 0x1c($a0)

/* 00454148 8C980020 */  lw    $t8, 0x20($a0)
.L0045414C:
/* 0045414C 8CB90028 */  lw    $t9, 0x28($a1)
/* 00454150 8F080020 */  lw    $t0, 0x20($t8)
/* 00454154 8F2D0020 */  lw    $t5, 0x20($t9)
/* 00454158 010D1023 */  subu  $v0, $t0, $t5
/* 0045415C 18400084 */  blez  $v0, .L00454370
/* 00454160 00000000 */   nop   
/* 00454164 0046001A */  div   $zero, $v0, $a2
/* 00454168 00004810 */  mfhi  $t1
/* 0045416C 14C00002 */  bnez  $a2, .L00454178
/* 00454170 00000000 */   nop   
/* 00454174 0007000D */  break 7
.L00454178:
/* 00454178 2401FFFF */  li    $at, -1
/* 0045417C 14C10004 */  bne   $a2, $at, .L00454190
/* 00454180 3C018000 */   lui   $at, 0x8000
/* 00454184 14410002 */  bne   $v0, $at, .L00454190
/* 00454188 00000000 */   nop   
/* 0045418C 0006000D */  break 6
.L00454190:
/* 00454190 15200077 */  bnez  $t1, .L00454370
/* 00454194 00000000 */   nop   
/* 00454198 03E00008 */  jr    $ra
/* 0045419C AC86001C */   sw    $a2, 0x1c($a0)

.L004541A0:
/* 004541A0 58C00018 */  blezl $a2, .L00454204
/* 004541A4 8CAF0028 */   lw    $t7, 0x28($a1)
/* 004541A8 8C8A0020 */  lw    $t2, 0x20($a0)
/* 004541AC 8CAB0028 */  lw    $t3, 0x28($a1)
/* 004541B0 8D430020 */  lw    $v1, 0x20($t2)
/* 004541B4 8D620020 */  lw    $v0, 0x20($t3)
/* 004541B8 0062082B */  sltu  $at, $v1, $v0
/* 004541BC 1020006C */  beqz  $at, .L00454370
/* 004541C0 00437023 */   subu  $t6, $v0, $v1
/* 004541C4 01C6001A */  div   $zero, $t6, $a2
/* 004541C8 00006010 */  mfhi  $t4
/* 004541CC 14C00002 */  bnez  $a2, .L004541D8
/* 004541D0 00000000 */   nop   
/* 004541D4 0007000D */  break 7
.L004541D8:
/* 004541D8 2401FFFF */  li    $at, -1
/* 004541DC 14C10004 */  bne   $a2, $at, .L004541F0
/* 004541E0 3C018000 */   lui   $at, 0x8000
/* 004541E4 15C10002 */  bne   $t6, $at, .L004541F0
/* 004541E8 00000000 */   nop   
/* 004541EC 0006000D */  break 6
.L004541F0:
/* 004541F0 1580005F */  bnez  $t4, .L00454370
/* 004541F4 00000000 */   nop   
/* 004541F8 03E00008 */  jr    $ra
/* 004541FC AC86001C */   sw    $a2, 0x1c($a0)

/* 00454200 8CAF0028 */  lw    $t7, 0x28($a1)
.L00454204:
/* 00454204 8C980020 */  lw    $t8, 0x20($a0)
/* 00454208 8DE20020 */  lw    $v0, 0x20($t7)
/* 0045420C 8F030020 */  lw    $v1, 0x20($t8)
/* 00454210 0043082B */  sltu  $at, $v0, $v1
/* 00454214 10200056 */  beqz  $at, .L00454370
/* 00454218 00000000 */   nop   
/* 0045421C 0062C823 */  subu  $t9, $v1, $v0
/* 00454220 0326001A */  div   $zero, $t9, $a2
/* 00454224 00004010 */  mfhi  $t0
/* 00454228 14C00002 */  bnez  $a2, .L00454234
/* 0045422C 00000000 */   nop   
/* 00454230 0007000D */  break 7
.L00454234:
/* 00454234 2401FFFF */  li    $at, -1
/* 00454238 14C10004 */  bne   $a2, $at, .L0045424C
/* 0045423C 3C018000 */   lui   $at, 0x8000
/* 00454240 17210002 */  bne   $t9, $at, .L0045424C
/* 00454244 00000000 */   nop   
/* 00454248 0006000D */  break 6
.L0045424C:
/* 0045424C 15000048 */  bnez  $t0, .L00454370
/* 00454250 00000000 */   nop   
/* 00454254 03E00008 */  jr    $ra
/* 00454258 AC86001C */   sw    $a2, 0x1c($a0)

/* 0045425C 90830025 */  lbu   $v1, 0x25($a0)
.L00454260:
/* 00454260 2401004E */  li    $at, 78
/* 00454264 10600003 */  beqz  $v1, .L00454274
/* 00454268 00000000 */   nop   
/* 0045426C 50410006 */  beql  $v0, $at, .L00454288
/* 00454270 90AD0001 */   lbu   $t5, 1($a1)
.L00454274:
/* 00454274 14600021 */  bnez  $v1, .L004542FC
/* 00454278 24010028 */   li    $at, 40
/* 0045427C 54410020 */  bnel  $v0, $at, .L00454300
/* 00454280 90AE0001 */   lbu   $t6, 1($a1)
/* 00454284 90AD0001 */  lbu   $t5, 1($a1)
.L00454288:
/* 00454288 3C010600 */  lui   $at, 0x600
/* 0045428C 2DA90020 */  sltiu $t1, $t5, 0x20
/* 00454290 00095023 */  negu  $t2, $t1
/* 00454294 01415824 */  and   $t3, $t2, $at
/* 00454298 01AB7004 */  sllv  $t6, $t3, $t5
/* 0045429C 05C1000C */  bgez  $t6, .L004542D0
/* 004542A0 00000000 */   nop   
/* 004542A4 18C00032 */  blez  $a2, .L00454370
/* 004542A8 00000000 */   nop   
/* 004542AC 8CAC0028 */  lw    $t4, 0x28($a1)
/* 004542B0 8C980020 */  lw    $t8, 0x20($a0)
/* 004542B4 8D8F0020 */  lw    $t7, 0x20($t4)
/* 004542B8 8F190020 */  lw    $t9, 0x20($t8)
/* 004542BC 01F94023 */  subu  $t0, $t7, $t9
/* 004542C0 1900002B */  blez  $t0, .L00454370
/* 004542C4 00000000 */   nop   
/* 004542C8 03E00008 */  jr    $ra
/* 004542CC AC86001C */   sw    $a2, 0x1c($a0)

.L004542D0:
/* 004542D0 18C00027 */  blez  $a2, .L00454370
/* 004542D4 00000000 */   nop   
/* 004542D8 8C890020 */  lw    $t1, 0x20($a0)
/* 004542DC 8CAB0028 */  lw    $t3, 0x28($a1)
/* 004542E0 8D2A0020 */  lw    $t2, 0x20($t1)
/* 004542E4 8D6D0020 */  lw    $t5, 0x20($t3)
/* 004542E8 014D082B */  sltu  $at, $t2, $t5
/* 004542EC 10200020 */  beqz  $at, .L00454370
/* 004542F0 00000000 */   nop   
/* 004542F4 03E00008 */  jr    $ra
/* 004542F8 AC86001C */   sw    $a2, 0x1c($a0)

.L004542FC:
/* 004542FC 90AE0001 */  lbu   $t6, 1($a1)
.L00454300:
/* 00454300 3C010600 */  lui   $at, 0x600
/* 00454304 2DCC0020 */  sltiu $t4, $t6, 0x20
/* 00454308 000CC023 */  negu  $t8, $t4
/* 0045430C 03017824 */  and   $t7, $t8, $at
/* 00454310 01CFC804 */  sllv  $t9, $t7, $t6
/* 00454314 0721000C */  bgez  $t9, .L00454348
/* 00454318 00000000 */   nop   
/* 0045431C 04C10014 */  bgez  $a2, .L00454370
/* 00454320 00000000 */   nop   
/* 00454324 8C880020 */  lw    $t0, 0x20($a0)
/* 00454328 8CAB0028 */  lw    $t3, 0x28($a1)
/* 0045432C 8D090020 */  lw    $t1, 0x20($t0)
/* 00454330 8D6A0020 */  lw    $t2, 0x20($t3)
/* 00454334 012A6823 */  subu  $t5, $t1, $t2
/* 00454338 19A0000D */  blez  $t5, .L00454370
/* 0045433C 00000000 */   nop   
/* 00454340 03E00008 */  jr    $ra
/* 00454344 AC86001C */   sw    $a2, 0x1c($a0)

.L00454348:
/* 00454348 04C10009 */  bgez  $a2, .L00454370
/* 0045434C 00000000 */   nop   
/* 00454350 8CAC0028 */  lw    $t4, 0x28($a1)
/* 00454354 8C8F0020 */  lw    $t7, 0x20($a0)
/* 00454358 8D980020 */  lw    $t8, 0x20($t4)
/* 0045435C 8DEE0020 */  lw    $t6, 0x20($t7)
/* 00454360 030E082B */  sltu  $at, $t8, $t6
/* 00454364 10200002 */  beqz  $at, .L00454370
/* 00454368 00000000 */   nop   
/* 0045436C AC86001C */  sw    $a2, 0x1c($a0)
.L00454370:
/* 00454370 03E00008 */  jr    $ra
/* 00454374 00000000 */   nop   

    .type func_00454378, @function
func_00454378:
    # 00454514 func_00454514
/* 00454378 90AE0000 */  lbu   $t6, ($a1)
/* 0045437C 27BDFFF0 */  addiu $sp, $sp, -0x10
/* 00454380 24010004 */  li    $at, 4
/* 00454384 AFA40010 */  sw    $a0, 0x10($sp)
/* 00454388 11C10003 */  beq   $t6, $at, .L00454398
/* 0045438C AFA7001C */   sw    $a3, 0x1c($sp)
/* 00454390 1000005E */  b     .L0045450C
/* 00454394 00001025 */   move  $v0, $zero
.L00454398:
/* 00454398 8CA20028 */  lw    $v0, 0x28($a1)
/* 0045439C 8FAF001C */  lw    $t7, 0x1c($sp)
/* 004543A0 54400004 */  bnezl $v0, .L004543B4
/* 004543A4 8CC80028 */   lw    $t0, 0x28($a2)
/* 004543A8 10000058 */  b     .L0045450C
/* 004543AC 00001025 */   move  $v0, $zero
/* 004543B0 8CC80028 */  lw    $t0, 0x28($a2)
.L004543B4:
/* 004543B4 90C70020 */  lbu   $a3, 0x20($a2)
/* 004543B8 00001825 */  move  $v1, $zero
/* 004543BC 15E80009 */  bne   $t7, $t0, .L004543E4
/* 004543C0 00E02025 */   move  $a0, $a3
/* 004543C4 93B80013 */  lbu   $t8, 0x13($sp)
/* 004543C8 8CCB0024 */  lw    $t3, 0x24($a2)
/* 004543CC 00004825 */  move  $t1, $zero
/* 004543D0 2F190001 */  sltiu $t9, $t8, 1
/* 004543D4 A3B90013 */  sb    $t9, 0x13($sp)
/* 004543D8 8FA60020 */  lw    $a2, 0x20($sp)
/* 004543DC 1000000E */  b     .L00454418
/* 004543E0 8D6A0014 */   lw    $t2, 0x14($t3)
.L004543E4:
/* 004543E4 8FA60020 */  lw    $a2, 0x20($sp)
/* 004543E8 24010002 */  li    $at, 2
/* 004543EC 90CC0000 */  lbu   $t4, ($a2)
/* 004543F0 55810005 */  bnel  $t4, $at, .L00454408
/* 004543F4 93AD0013 */   lbu   $t5, 0x13($sp)
/* 004543F8 24030001 */  li    $v1, 1
/* 004543FC 10000005 */  b     .L00454414
/* 00454400 93A90002 */   lbu   $t1, 2($sp)
/* 00454404 93AD0013 */  lbu   $t5, 0x13($sp)
.L00454408:
/* 00454408 24090001 */  li    $t1, 1
/* 0045440C 2DAE0001 */  sltiu $t6, $t5, 1
/* 00454410 A3AE0013 */  sb    $t6, 0x13($sp)
.L00454414:
/* 00454414 8D0A0014 */  lw    $t2, 0x14($t0)
.L00454418:
/* 00454418 93AF0013 */  lbu   $t7, 0x13($sp)
/* 0045441C 2401004E */  li    $at, 78
/* 00454420 11E00005 */  beqz  $t7, .L00454438
/* 00454424 00000000 */   nop   
/* 00454428 14E10003 */  bne   $a3, $at, .L00454438
/* 0045442C 2404004E */   li    $a0, 78
/* 00454430 10000001 */  b     .L00454438
/* 00454434 24040028 */   li    $a0, 40
.L00454438:
/* 00454438 10600012 */  beqz  $v1, .L00454484
/* 0045443C 00000000 */   nop   
/* 00454440 90B80020 */  lbu   $t8, 0x20($a1)
/* 00454444 00981826 */  xor   $v1, $a0, $t8
/* 00454448 2C630001 */  sltiu $v1, $v1, 1
/* 0045444C 5060002F */  beql  $v1, $zero, .L0045450C
/* 00454450 306200FF */   andi  $v0, $v1, 0xff
/* 00454454 8CB90024 */  lw    $t9, 0x24($a1)
/* 00454458 8F2B0014 */  lw    $t3, 0x14($t9)
/* 0045445C 014B1826 */  xor   $v1, $t2, $t3
/* 00454460 2C630001 */  sltiu $v1, $v1, 1
/* 00454464 50600029 */  beql  $v1, $zero, .L0045450C
/* 00454468 306200FF */   andi  $v0, $v1, 0xff
/* 0045446C 8CCC0020 */  lw    $t4, 0x20($a2)
/* 00454470 8C4E0020 */  lw    $t6, 0x20($v0)
/* 00454474 258D0001 */  addiu $t5, $t4, 1
/* 00454478 01AE1826 */  xor   $v1, $t5, $t6
/* 0045447C 10000022 */  b     .L00454508
/* 00454480 2C630001 */   sltiu $v1, $v1, 1
.L00454484:
/* 00454484 55200012 */  bnezl $t1, .L004544D0
/* 00454488 90AD0020 */   lbu   $t5, 0x20($a1)
/* 0045448C 90AF0020 */  lbu   $t7, 0x20($a1)
/* 00454490 008F1826 */  xor   $v1, $a0, $t7
/* 00454494 2C630001 */  sltiu $v1, $v1, 1
/* 00454498 5060001C */  beql  $v1, $zero, .L0045450C
/* 0045449C 306200FF */   andi  $v0, $v1, 0xff
/* 004544A0 8CB80024 */  lw    $t8, 0x24($a1)
/* 004544A4 8F190014 */  lw    $t9, 0x14($t8)
/* 004544A8 01591826 */  xor   $v1, $t2, $t9
/* 004544AC 2C630001 */  sltiu $v1, $v1, 1
/* 004544B0 50600016 */  beql  $v1, $zero, .L0045450C
/* 004544B4 306200FF */   andi  $v0, $v1, 0xff
/* 004544B8 8CCB0014 */  lw    $t3, 0x14($a2)
/* 004544BC 8C4C0014 */  lw    $t4, 0x14($v0)
/* 004544C0 016C1826 */  xor   $v1, $t3, $t4
/* 004544C4 10000010 */  b     .L00454508
/* 004544C8 2C630001 */   sltiu $v1, $v1, 1
/* 004544CC 90AD0020 */  lbu   $t5, 0x20($a1)
.L004544D0:
/* 004544D0 008D1826 */  xor   $v1, $a0, $t5
/* 004544D4 2C630001 */  sltiu $v1, $v1, 1
/* 004544D8 5060000C */  beql  $v1, $zero, .L0045450C
/* 004544DC 306200FF */   andi  $v0, $v1, 0xff
/* 004544E0 8C4E0014 */  lw    $t6, 0x14($v0)
/* 004544E4 014E1826 */  xor   $v1, $t2, $t6
/* 004544E8 2C630001 */  sltiu $v1, $v1, 1
/* 004544EC 50600007 */  beql  $v1, $zero, .L0045450C
/* 004544F0 306200FF */   andi  $v0, $v1, 0xff
/* 004544F4 8CB80024 */  lw    $t8, 0x24($a1)
/* 004544F8 8CCF0014 */  lw    $t7, 0x14($a2)
/* 004544FC 8F190014 */  lw    $t9, 0x14($t8)
/* 00454500 01F91826 */  xor   $v1, $t7, $t9
/* 00454504 2C630001 */  sltiu $v1, $v1, 1
.L00454508:
/* 00454508 306200FF */  andi  $v0, $v1, 0xff
.L0045450C:
/* 0045450C 03E00008 */  jr    $ra
/* 00454510 27BD0010 */   addiu $sp, $sp, 0x10

    .type func_00454514, @function
func_00454514:
    # 00454920 func_00454920
/* 00454514 3C1C0FBC */  .cpload $t9
/* 00454518 279C5D7C */  
/* 0045451C 0399E021 */  
/* 00454520 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00454524 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00454528 AFBC0038 */  sw    $gp, 0x38($sp)
/* 0045452C AFB60034 */  sw    $s6, 0x34($sp)
/* 00454530 AFB50030 */  sw    $s5, 0x30($sp)
/* 00454534 AFB4002C */  sw    $s4, 0x2c($sp)
/* 00454538 AFB30028 */  sw    $s3, 0x28($sp)
/* 0045453C AFB20024 */  sw    $s2, 0x24($sp)
/* 00454540 AFB10020 */  sw    $s1, 0x20($sp)
/* 00454544 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00454548 8C900014 */  lw    $s0, 0x14($a0)
/* 0045454C 00808825 */  move  $s1, $a0
/* 00454550 00A09825 */  move  $s3, $a1
/* 00454554 00E0A025 */  move  $s4, $a3
/* 00454558 00C0A825 */  move  $s5, $a2
/* 0045455C 12000019 */  beqz  $s0, .L004545C4
/* 00454560 0040B025 */   move  $s6, $v0
/* 00454564 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00454568 8E0E0000 */  lw    $t6, ($s0)
/* 0045456C 26320164 */  addiu $s2, $s1, 0x164
/* 00454570 02402825 */  move  $a1, $s2
/* 00454574 0320F809 */  jalr  $t9
/* 00454578 95C40008 */   lhu   $a0, 8($t6)
/* 0045457C 10400004 */  beqz  $v0, .L00454590
/* 00454580 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00454584 8E0F0000 */  lw    $t7, ($s0)
/* 00454588 162F000E */  bne   $s1, $t7, .L004545C4
/* 0045458C 00000000 */   nop   
.L00454590:
/* 00454590 8E100004 */  lw    $s0, 4($s0)
.L00454594:
/* 00454594 1200000B */  beqz  $s0, .L004545C4
/* 00454598 00000000 */   nop   
/* 0045459C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004545A0 8E180000 */  lw    $t8, ($s0)
/* 004545A4 02402825 */  move  $a1, $s2
/* 004545A8 0320F809 */  jalr  $t9
/* 004545AC 97040008 */   lhu   $a0, 8($t8)
/* 004545B0 1040FFF7 */  beqz  $v0, .L00454590
/* 004545B4 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004545B8 8E190000 */  lw    $t9, ($s0)
/* 004545BC 5239FFF5 */  beql  $s1, $t9, .L00454594
/* 004545C0 8E100004 */   lw    $s0, 4($s0)
.L004545C4:
/* 004545C4 56000004 */  bnezl $s0, .L004545D8
/* 004545C8 8E120000 */   lw    $s2, ($s0)
/* 004545CC 100000CA */  b     .L004548F8
/* 004545D0 00001025 */   move  $v0, $zero
/* 004545D4 8E120000 */  lw    $s2, ($s0)
.L004545D8:
/* 004545D8 8E510020 */  lw    $s1, 0x20($s2)
/* 004545DC 92280000 */  lbu   $t0, ($s1)
/* 004545E0 2D090080 */  sltiu $t1, $t0, 0x80
/* 004545E4 11200009 */  beqz  $t1, .L0045460C
/* 004545E8 00000000 */   nop   
/* 004545EC 8F8C8044 */  lw    $t4, %got(D_10010C10)($gp)
/* 004545F0 00085143 */  sra   $t2, $t0, 5
/* 004545F4 000A5880 */  sll   $t3, $t2, 2
/* 004545F8 258C0C10 */  addiu $t4, %lo(D_10010C10) # addiu $t4, $t4, 0xc10
/* 004545FC 018B6821 */  addu  $t5, $t4, $t3
/* 00454600 8DAE0000 */  lw    $t6, ($t5)
/* 00454604 010E7804 */  sllv  $t7, $t6, $t0
/* 00454608 29E90000 */  slti  $t1, $t7, 0
.L0045460C:
/* 0045460C 51200004 */  beql  $t1, $zero, .L00454620
/* 00454610 8E620024 */   lw    $v0, 0x24($s3)
/* 00454614 100000B8 */  b     .L004548F8
/* 00454618 00001025 */   move  $v0, $zero
/* 0045461C 8E620024 */  lw    $v0, 0x24($s3)
.L00454620:
/* 00454620 2650010C */  addiu $s0, $s2, 0x10c
/* 00454624 16A2000D */  bne   $s5, $v0, .L0045465C
/* 00454628 00000000 */   nop   
/* 0045462C 8E790028 */  lw    $t9, 0x28($s3)
/* 00454630 2650010C */  addiu $s0, $s2, 0x10c
/* 00454634 02002825 */  move  $a1, $s0
/* 00454638 8F2A0014 */  lw    $t2, 0x14($t9)
/* 0045463C 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00454640 95440002 */  lhu   $a0, 2($t2)
/* 00454644 0320F809 */  jalr  $t9
/* 00454648 00000000 */   nop   
/* 0045464C 1040000C */  beqz  $v0, .L00454680
/* 00454650 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00454654 100000A8 */  b     .L004548F8
/* 00454658 00001025 */   move  $v0, $zero
.L0045465C:
/* 0045465C 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00454660 8C4C0014 */  lw    $t4, 0x14($v0)
/* 00454664 02002825 */  move  $a1, $s0
/* 00454668 0320F809 */  jalr  $t9
/* 0045466C 95840002 */   lhu   $a0, 2($t4)
/* 00454670 10400003 */  beqz  $v0, .L00454680
/* 00454674 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00454678 1000009F */  b     .L004548F8
/* 0045467C 00001025 */   move  $v0, $zero
.L00454680:
/* 00454680 928B0000 */  lbu   $t3, ($s4)
/* 00454684 3C016000 */  lui   $at, 0x6000
/* 00454688 2D6D0020 */  sltiu $t5, $t3, 0x20
/* 0045468C 000D7023 */  negu  $t6, $t5
/* 00454690 01C14024 */  and   $t0, $t6, $at
/* 00454694 01687804 */  sllv  $t7, $t0, $t3
/* 00454698 05E2000B */  bltzl $t7, .L004546C8
/* 0045469C 8E420014 */   lw    $v0, 0x14($s2)
/* 004546A0 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 004546A4 8E980014 */  lw    $t8, 0x14($s4)
/* 004546A8 02002825 */  move  $a1, $s0
/* 004546AC 0320F809 */  jalr  $t9
/* 004546B0 97040002 */   lhu   $a0, 2($t8)
/* 004546B4 10400003 */  beqz  $v0, .L004546C4
/* 004546B8 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004546BC 1000008E */  b     .L004548F8
/* 004546C0 00001025 */   move  $v0, $zero
.L004546C4:
/* 004546C4 8E420014 */  lw    $v0, 0x14($s2)
.L004546C8:
/* 004546C8 5040008B */  beql  $v0, $zero, .L004548F8
/* 004546CC 00001025 */   move  $v0, $zero
/* 004546D0 8C490004 */  lw    $t1, 4($v0)
/* 004546D4 55200088 */  bnezl $t1, .L004548F8
/* 004546D8 00001025 */   move  $v0, $zero
/* 004546DC 92990000 */  lbu   $t9, ($s4)
.L004546E0:
/* 004546E0 3C016000 */  lui   $at, 0x6000
/* 004546E4 02408025 */  move  $s0, $s2
/* 004546E8 2F2A0020 */  sltiu $t2, $t9, 0x20
/* 004546EC 000A6023 */  negu  $t4, $t2
/* 004546F0 01816824 */  and   $t5, $t4, $at
/* 004546F4 032D7004 */  sllv  $t6, $t5, $t9
/* 004546F8 05C0000A */  bltz  $t6, .L00454724
/* 004546FC 8C520000 */   lw    $s2, ($v0)
/* 00454700 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00454704 8E880014 */  lw    $t0, 0x14($s4)
/* 00454708 2645010C */  addiu $a1, $s2, 0x10c
/* 0045470C 0320F809 */  jalr  $t9
/* 00454710 95040002 */   lhu   $a0, 2($t0)
/* 00454714 10400003 */  beqz  $v0, .L00454724
/* 00454718 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0045471C 10000076 */  b     .L004548F8
/* 00454720 00001025 */   move  $v0, $zero
.L00454724:
/* 00454724 8E510020 */  lw    $s1, 0x20($s2)
/* 00454728 92230000 */  lbu   $v1, ($s1)
/* 0045472C 246BFFE0 */  addiu $t3, $v1, -0x20
/* 00454730 2D6F0060 */  sltiu $t7, $t3, 0x60
/* 00454734 11E00009 */  beqz  $t7, .L0045475C
/* 00454738 2C6E0040 */   sltiu $t6, $v1, 0x40
/* 0045473C 8F8A8044 */  lw    $t2, %got(D_10010C04)($gp)
/* 00454740 000BC143 */  sra   $t8, $t3, 5
/* 00454744 00184880 */  sll   $t1, $t8, 2
/* 00454748 254A0C04 */  addiu $t2, %lo(D_10010C04) # addiu $t2, $t2, 0xc04
/* 0045474C 01496021 */  addu  $t4, $t2, $t1
/* 00454750 8D8D0000 */  lw    $t5, ($t4)
/* 00454754 016DC804 */  sllv  $t9, $t5, $t3
/* 00454758 2B2F0000 */  slti  $t7, $t9, 0
.L0045475C:
/* 0045475C 11E00039 */  beqz  $t7, .L00454844
/* 00454760 00000000 */   nop   
/* 00454764 8E420018 */  lw    $v0, 0x18($s2)
/* 00454768 8E280014 */  lw    $t0, 0x14($s1)
/* 0045476C 8C440000 */  lw    $a0, ($v0)
/* 00454770 8C980000 */  lw    $t8, ($a0)
/* 00454774 55180004 */  bnel  $t0, $t8, .L00454788
/* 00454778 8C4A0004 */   lw    $t2, 4($v0)
/* 0045477C 10000003 */  b     .L0045478C
/* 00454780 00802825 */   move  $a1, $a0
/* 00454784 8C4A0004 */  lw    $t2, 4($v0)
.L00454788:
/* 00454788 8D450000 */  lw    $a1, ($t2)
.L0045478C:
/* 0045478C 38620026 */  xori  $v0, $v1, 0x26
/* 00454790 2C420001 */  sltiu $v0, $v0, 1
/* 00454794 10400003 */  beqz  $v0, .L004547A4
/* 00454798 93A90053 */   lbu   $t1, 0x53($sp)
/* 0045479C 00B01026 */  xor   $v0, $a1, $s0
/* 004547A0 2C420001 */  sltiu $v0, $v0, 1
.L004547A4:
/* 004547A4 14400007 */  bnez  $v0, .L004547C4
/* 004547A8 24040001 */   li    $a0, 1
/* 004547AC 3862007F */  xori  $v0, $v1, 0x7f
/* 004547B0 2C420001 */  sltiu $v0, $v0, 1
/* 004547B4 50400004 */  beql  $v0, $zero, .L004547C8
/* 004547B8 304C00FF */   andi  $t4, $v0, 0xff
/* 004547BC 00B01026 */  xor   $v0, $a1, $s0
/* 004547C0 0002102B */  sltu  $v0, $zero, $v0
.L004547C4:
/* 004547C4 304C00FF */  andi  $t4, $v0, 0xff
.L004547C8:
/* 004547C8 152C0013 */  bne   $t1, $t4, .L00454818
/* 004547CC 02603025 */   move  $a2, $s3
/* 004547D0 8F998028 */  lw    $t9, %got(func_00454378)($gp)
/* 004547D4 00002025 */  move  $a0, $zero
/* 004547D8 8E250004 */  lw    $a1, 4($s1)
/* 004547DC 27394378 */  addiu $t9, %lo(func_00454378) # addiu $t9, $t9, 0x4378
/* 004547E0 02603025 */  move  $a2, $s3
/* 004547E4 02A03825 */  move  $a3, $s5
/* 004547E8 AFB40010 */  sw    $s4, 0x10($sp)
/* 004547EC 0320F809 */  jalr  $t9
/* 004547F0 02C01025 */   move  $v0, $s6
/* 004547F4 14400006 */  bnez  $v0, .L00454810
/* 004547F8 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004547FC 8E2B0004 */  lw    $t3, 4($s1)
/* 00454800 8E6D0014 */  lw    $t5, 0x14($s3)
/* 00454804 8D790014 */  lw    $t9, 0x14($t3)
/* 00454808 55B90035 */  bnel  $t5, $t9, .L004548E0
/* 0045480C 8E420014 */   lw    $v0, 0x14($s2)
.L00454810:
/* 00454810 10000039 */  b     .L004548F8
/* 00454814 24020001 */   li    $v0, 1
.L00454818:
/* 00454818 8F998028 */  lw    $t9, %got(func_00454378)($gp)
/* 0045481C 8E250004 */  lw    $a1, 4($s1)
/* 00454820 02A03825 */  move  $a3, $s5
/* 00454824 27394378 */  addiu $t9, %lo(func_00454378) # addiu $t9, $t9, 0x4378
/* 00454828 AFB40010 */  sw    $s4, 0x10($sp)
/* 0045482C 0320F809 */  jalr  $t9
/* 00454830 02C01025 */   move  $v0, $s6
/* 00454834 10400029 */  beqz  $v0, .L004548DC
/* 00454838 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0045483C 1000002E */  b     .L004548F8
/* 00454840 24020001 */   li    $v0, 1
.L00454844:
/* 00454844 11C00009 */  beqz  $t6, .L0045486C
/* 00454848 00000000 */   nop   
/* 0045484C 8F988044 */  lw    $t8, %got(D_10010BFC)($gp)
/* 00454850 00037943 */  sra   $t7, $v1, 5
/* 00454854 000F4080 */  sll   $t0, $t7, 2
/* 00454858 27180BFC */  addiu $t8, %lo(D_10010BFC) # addiu $t8, $t8, 0xbfc
/* 0045485C 03085021 */  addu  $t2, $t8, $t0
/* 00454860 8D490000 */  lw    $t1, ($t2)
/* 00454864 00696004 */  sllv  $t4, $t1, $v1
/* 00454868 298E0000 */  slti  $t6, $t4, 0
.L0045486C:
/* 0045486C 51C00004 */  beql  $t6, $zero, .L00454880
/* 00454870 8E620024 */   lw    $v0, 0x24($s3)
/* 00454874 10000020 */  b     .L004548F8
/* 00454878 00001025 */   move  $v0, $zero
/* 0045487C 8E620024 */  lw    $v0, 0x24($s3)
.L00454880:
/* 00454880 2650010C */  addiu $s0, $s2, 0x10c
/* 00454884 16A2000C */  bne   $s5, $v0, .L004548B8
/* 00454888 00000000 */   nop   
/* 0045488C 8E6D0028 */  lw    $t5, 0x28($s3)
/* 00454890 02002825 */  move  $a1, $s0
/* 00454894 8DB90014 */  lw    $t9, 0x14($t5)
/* 00454898 97240002 */  lhu   $a0, 2($t9)
/* 0045489C 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 004548A0 0320F809 */  jalr  $t9
/* 004548A4 00000000 */   nop   
/* 004548A8 1040000C */  beqz  $v0, .L004548DC
/* 004548AC 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004548B0 10000011 */  b     .L004548F8
/* 004548B4 00001025 */   move  $v0, $zero
.L004548B8:
/* 004548B8 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 004548BC 8C4F0014 */  lw    $t7, 0x14($v0)
/* 004548C0 02002825 */  move  $a1, $s0
/* 004548C4 0320F809 */  jalr  $t9
/* 004548C8 95E40002 */   lhu   $a0, 2($t7)
/* 004548CC 10400003 */  beqz  $v0, .L004548DC
/* 004548D0 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004548D4 10000008 */  b     .L004548F8
/* 004548D8 00001025 */   move  $v0, $zero
.L004548DC:
/* 004548DC 8E420014 */  lw    $v0, 0x14($s2)
.L004548E0:
/* 004548E0 50400005 */  beql  $v0, $zero, .L004548F8
/* 004548E4 00001025 */   move  $v0, $zero
/* 004548E8 8C580004 */  lw    $t8, 4($v0)
/* 004548EC 5300FF7C */  beql  $t8, $zero, .L004546E0
/* 004548F0 92990000 */   lbu   $t9, ($s4)
/* 004548F4 00001025 */  move  $v0, $zero
.L004548F8:
/* 004548F8 8FBF003C */  lw    $ra, 0x3c($sp)
/* 004548FC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00454900 8FB10020 */  lw    $s1, 0x20($sp)
/* 00454904 8FB20024 */  lw    $s2, 0x24($sp)
/* 00454908 8FB30028 */  lw    $s3, 0x28($sp)
/* 0045490C 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00454910 8FB50030 */  lw    $s5, 0x30($sp)
/* 00454914 8FB60034 */  lw    $s6, 0x34($sp)
/* 00454918 03E00008 */  jr    $ra
/* 0045491C 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_00454920, @function
func_00454920:
    # 00455518 func_00455518
/* 00454920 3C1C0FBC */  .cpload $t9
/* 00454924 279C5970 */  
/* 00454928 0399E021 */  
/* 0045492C 90A80020 */  lbu   $t0, 0x20($a1)
/* 00454930 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00454934 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00454938 250EFFE0 */  addiu $t6, $t0, -0x20
/* 0045493C 2DCF0040 */  sltiu $t7, $t6, 0x40
/* 00454940 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00454944 AFA40028 */  sw    $a0, 0x28($sp)
/* 00454948 AFA70034 */  sw    $a3, 0x34($sp)
/* 0045494C 11E00009 */  beqz  $t7, .L00454974
/* 00454950 00404825 */   move  $t1, $v0
/* 00454954 8F8A8044 */  lw    $t2, %got(D_10010C20)($gp)
/* 00454958 000EC143 */  sra   $t8, $t6, 5
/* 0045495C 0018C880 */  sll   $t9, $t8, 2
/* 00454960 254A0C20 */  addiu $t2, %lo(D_10010C20) # addiu $t2, $t2, 0xc20
/* 00454964 01595821 */  addu  $t3, $t2, $t9
/* 00454968 8D6C0000 */  lw    $t4, ($t3)
/* 0045496C 01CC6804 */  sllv  $t5, $t4, $t6
/* 00454970 29AF0000 */  slti  $t7, $t5, 0
.L00454974:
/* 00454974 11E00010 */  beqz  $t7, .L004549B8
/* 00454978 8FAC0028 */   lw    $t4, 0x28($sp)
/* 0045497C 8FAA0028 */  lw    $t2, 0x28($sp)
/* 00454980 2401005F */  li    $at, 95
/* 00454984 91430025 */  lbu   $v1, 0x25($t2)
/* 00454988 10600003 */  beqz  $v1, .L00454998
/* 0045498C 00000000 */   nop   
/* 00454990 51010006 */  beql  $t0, $at, .L004549AC
/* 00454994 8FB90038 */   lw    $t9, 0x38($sp)
.L00454998:
/* 00454998 14600043 */  bnez  $v1, .L00454AA8
/* 0045499C 24010023 */   li    $at, 35
/* 004549A0 55010042 */  bnel  $t0, $at, .L00454AAC
/* 004549A4 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004549A8 8FB90038 */  lw    $t9, 0x38($sp)
.L004549AC:
/* 004549AC 8FAB0028 */  lw    $t3, 0x28($sp)
/* 004549B0 1000003D */  b     .L00454AA8
/* 004549B4 AD79001C */   sw    $t9, 0x1c($t3)
.L004549B8:
/* 004549B8 91830025 */  lbu   $v1, 0x25($t4)
/* 004549BC 10600004 */  beqz  $v1, .L004549D0
/* 004549C0 00000000 */   nop   
/* 004549C4 8CAE0024 */  lw    $t6, 0x24($a1)
/* 004549C8 50CE0006 */  beql  $a2, $t6, .L004549E4
/* 004549CC 2401004E */   li    $at, 78
.L004549D0:
/* 004549D0 14600006 */  bnez  $v1, .L004549EC
/* 004549D4 00000000 */   nop   
/* 004549D8 8CAD0028 */  lw    $t5, 0x28($a1)
/* 004549DC 14CD0003 */  bne   $a2, $t5, .L004549EC
/* 004549E0 2401004E */   li    $at, 78
.L004549E4:
/* 004549E4 5101000E */  beql  $t0, $at, .L00454A20
/* 004549E8 8FAA0038 */   lw    $t2, 0x38($sp)
.L004549EC:
/* 004549EC 14600004 */  bnez  $v1, .L00454A00
/* 004549F0 00000000 */   nop   
/* 004549F4 8CB80024 */  lw    $t8, 0x24($a1)
/* 004549F8 50D80006 */  beql  $a2, $t8, .L00454A14
/* 004549FC 24010028 */   li    $at, 40
.L00454A00:
/* 00454A00 5060001A */  beql  $v1, $zero, .L00454A6C
/* 00454A04 8FAE0038 */   lw    $t6, 0x38($sp)
/* 00454A08 8CAF0028 */  lw    $t7, 0x28($a1)
/* 00454A0C 14CF0016 */  bne   $a2, $t7, .L00454A68
/* 00454A10 24010028 */   li    $at, 40
.L00454A14:
/* 00454A14 55010015 */  bnel  $t0, $at, .L00454A6C
/* 00454A18 8FAE0038 */   lw    $t6, 0x38($sp)
/* 00454A1C 8FAA0038 */  lw    $t2, 0x38($sp)
.L00454A20:
/* 00454A20 24010001 */  li    $at, 1
/* 00454A24 55410021 */  bnel  $t2, $at, .L00454AAC
/* 00454A28 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00454A2C 8FB90028 */  lw    $t9, 0x28($sp)
/* 00454A30 8FA40034 */  lw    $a0, 0x34($sp)
/* 00454A34 01201025 */  move  $v0, $t1
/* 00454A38 8F270020 */  lw    $a3, 0x20($t9)
/* 00454A3C 8F998028 */  lw    $t9, %got(func_00454514)($gp)
/* 00454A40 AFA30010 */  sw    $v1, 0x10($sp)
/* 00454A44 27394514 */  addiu $t9, %lo(func_00454514) # addiu $t9, $t9, 0x4514
/* 00454A48 0320F809 */  jalr  $t9
/* 00454A4C 00000000 */   nop   
/* 00454A50 10400015 */  beqz  $v0, .L00454AA8
/* 00454A54 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00454A58 8FAC0028 */  lw    $t4, 0x28($sp)
/* 00454A5C 240B0001 */  li    $t3, 1
/* 00454A60 10000011 */  b     .L00454AA8
/* 00454A64 AD8B001C */   sw    $t3, 0x1c($t4)
.L00454A68:
/* 00454A68 8FAE0038 */  lw    $t6, 0x38($sp)
.L00454A6C:
/* 00454A6C 2401FFFF */  li    $at, -1
/* 00454A70 8FA40034 */  lw    $a0, 0x34($sp)
/* 00454A74 15C1000C */  bne   $t6, $at, .L00454AA8
/* 00454A78 8FAD0028 */   lw    $t5, 0x28($sp)
/* 00454A7C 8F998028 */  lw    $t9, %got(func_00454514)($gp)
/* 00454A80 8DA70020 */  lw    $a3, 0x20($t5)
/* 00454A84 AFA30010 */  sw    $v1, 0x10($sp)
/* 00454A88 27394514 */  addiu $t9, %lo(func_00454514) # addiu $t9, $t9, 0x4514
/* 00454A8C 0320F809 */  jalr  $t9
/* 00454A90 01201025 */   move  $v0, $t1
/* 00454A94 10400004 */  beqz  $v0, .L00454AA8
/* 00454A98 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00454A9C 8FAF0028 */  lw    $t7, 0x28($sp)
/* 00454AA0 2418FFFF */  li    $t8, -1
/* 00454AA4 ADF8001C */  sw    $t8, 0x1c($t7)
.L00454AA8:
/* 00454AA8 8FBF0024 */  lw    $ra, 0x24($sp)
.L00454AAC:
/* 00454AAC 27BD0028 */  addiu $sp, $sp, 0x28
/* 00454AB0 03E00008 */  jr    $ra
/* 00454AB4 00000000 */   nop   
)"");

static bool func_00454AB8(struct Graphnode *arg0, struct IChain *arg1, struct Statement **arg2) {
    struct BitVector *sp2C;
    struct Graphnode *node_a2;
    struct GraphnodeList *nodelist_pred_s0;
    struct Statement *stat_v1;
    bool phi_a1;
    bool phi_a0;

    nodelist_pred_s0 = arg0->predecessors;
    sp2C = &arg0->bvs.stage1.u.precm.pavin;
    while (nodelist_pred_s0 != NULL && (bvectin(nodelist_pred_s0->graphnode->num, sp2C) == 0 || arg0 == nodelist_pred_s0->graphnode)) {
        nodelist_pred_s0 = nodelist_pred_s0->next;
    }
    
    if (nodelist_pred_s0 == NULL) {
        return false;
    }

    node_a2 = nodelist_pred_s0->graphnode;
    stat_v1 = node_a2->stat_tail;

    phi_a1 = false;
    phi_a0 = false;

    while (!phi_a1 && !phi_a0) {
        if ((stat_v1->opc == Uisst || stat_v1->opc == Ustr) && arg1 == stat_v1->expr->ichain) {
            phi_a1 = true;
        } else {
            if (stat_v1->prev == NULL) {
                phi_a0 = true;
            } else {
                phi_a0 = node_a2 != stat_v1->prev->graphnode;
                stat_v1 = stat_v1->prev;
            }
        }
    }

    while (!phi_a1 && node_a2->predecessors != NULL && node_a2->predecessors->next == NULL) {

        node_a2 = node_a2->predecessors->graphnode;
        phi_a0 = false;
        while (!phi_a1 && !phi_a0) {
            if ((stat_v1->opc == Uisst || stat_v1->opc == Ustr) && arg1 == stat_v1->expr->ichain) {
                phi_a1 = true;
            } else {
                if (stat_v1->prev == NULL) {
                    phi_a0 = true;
                } else {
                    phi_a0 = node_a2 != stat_v1->prev->graphnode;
                    stat_v1 = stat_v1->prev;
                }
            }
        }
    }

    *arg2 = stat_v1;
    return phi_a1;
}

#if 0
    .type func_00454AB8, @function
func_00454AB8:
    # 00455518 func_00455518
/* 00454AB8 3C1C0FBC */  .cpload $t9
/* 00454ABC 279C57D8 */  
/* 00454AC0 0399E021 */  
/* 00454AC4 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 00454AC8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00454ACC AFBC0020 */  sw    $gp, 0x20($sp)
/* 00454AD0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00454AD4 AFB00018 */  sw    $s0, 0x18($sp)
/* 00454AD8 AFA60050 */  sw    $a2, 0x50($sp)
/* 00454ADC 8C900014 */  lw    $s0, 0x14($a0)
/* 00454AE0 00808825 */  move  $s1, $a0
/* 00454AE4 00A03825 */  move  $a3, $a1
/* 00454AE8 1200001D */  beqz  $s0, .L00454B60
/* 00454AEC 00000000 */   nop   
/* 00454AF0 8E0E0000 */  lw    $t6, ($s0)
/* 00454AF4 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00454AF8 26250164 */  addiu $a1, $s1, 0x164
/* 00454AFC 95C40008 */  lhu   $a0, 8($t6)
/* 00454B00 AFA7004C */  sw    $a3, 0x4c($sp)
/* 00454B04 0320F809 */  jalr  $t9
/* 00454B08 AFA5002C */   sw    $a1, 0x2c($sp)
/* 00454B0C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00454B10 10400004 */  beqz  $v0, .L00454B24
/* 00454B14 8FA7004C */   lw    $a3, 0x4c($sp)
/* 00454B18 8E0F0000 */  lw    $t7, ($s0)
/* 00454B1C 162F0010 */  bne   $s1, $t7, .L00454B60
/* 00454B20 00000000 */   nop   
.L00454B24:
/* 00454B24 8E100004 */  lw    $s0, 4($s0)
.L00454B28:
/* 00454B28 1200000D */  beqz  $s0, .L00454B60
/* 00454B2C 00000000 */   nop   
/* 00454B30 8E180000 */  lw    $t8, ($s0)
/* 00454B34 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00454B38 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00454B3C 97040008 */  lhu   $a0, 8($t8)
/* 00454B40 0320F809 */  jalr  $t9
/* 00454B44 AFA7004C */   sw    $a3, 0x4c($sp)
/* 00454B48 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00454B4C 1040FFF5 */  beqz  $v0, .L00454B24
/* 00454B50 8FA7004C */   lw    $a3, 0x4c($sp)
/* 00454B54 8E190000 */  lw    $t9, ($s0)
/* 00454B58 5239FFF3 */  beql  $s1, $t9, .L00454B28
/* 00454B5C 8E100004 */   lw    $s0, 4($s0)
.L00454B60:
/* 00454B60 56000004 */  bnezl $s0, .L00454B74
/* 00454B64 8E060000 */   lw    $a2, ($s0)
/* 00454B68 10000062 */  b     .L00454CF4
/* 00454B6C 00001025 */   move  $v0, $zero
/* 00454B70 8E060000 */  lw    $a2, ($s0)
.L00454B74:
/* 00454B74 00002825 */  move  $a1, $zero
/* 00454B78 00002025 */  move  $a0, $zero
/* 00454B7C 8CC30020 */  lw    $v1, 0x20($a2)
/* 00454B80 90680000 */  lbu   $t0, ($v1)
.L00454B84:
/* 00454B84 2509FFE0 */  addiu $t1, $t0, -0x20
/* 00454B88 2D2A0060 */  sltiu $t2, $t1, 0x60
/* 00454B8C 1140000A */  beqz  $t2, .L00454BB8
/* 00454B90 00000000 */   nop   
/* 00454B94 8F8D8044 */  lw    $t5, %got(D_10010C28)($gp)
/* 00454B98 00095943 */  sra   $t3, $t1, 5
/* 00454B9C 000B6080 */  sll   $t4, $t3, 2
/* 00454BA0 25AD0C28 */  addiu $t5, %lo(D_10010C28) # addiu $t5, $t5, 0xc28
/* 00454BA4 01AC7021 */  addu  $t6, $t5, $t4
/* 00454BA8 8DCF0000 */  lw    $t7, ($t6)
/* 00454BAC 012FC004 */  sllv  $t8, $t7, $t1
/* 00454BB0 2B190000 */  slti  $t9, $t8, 0
/* 00454BB4 03205025 */  move  $t2, $t9
.L00454BB8:
/* 00454BB8 51400008 */  beql  $t2, $zero, .L00454BDC
/* 00454BBC 8C62000C */   lw    $v0, 0xc($v1)
/* 00454BC0 8C680004 */  lw    $t0, 4($v1)
/* 00454BC4 8D0B0014 */  lw    $t3, 0x14($t0)
/* 00454BC8 54EB0004 */  bnel  $a3, $t3, .L00454BDC
/* 00454BCC 8C62000C */   lw    $v0, 0xc($v1)
/* 00454BD0 1000000B */  b     .L00454C00
/* 00454BD4 24050001 */   li    $a1, 1
/* 00454BD8 8C62000C */  lw    $v0, 0xc($v1)
.L00454BDC:
/* 00454BDC 54400004 */  bnezl $v0, .L00454BF0
/* 00454BE0 8C4D0010 */   lw    $t5, 0x10($v0)
/* 00454BE4 10000006 */  b     .L00454C00
/* 00454BE8 24040001 */   li    $a0, 1
/* 00454BEC 8C4D0010 */  lw    $t5, 0x10($v0)
.L00454BF0:
/* 00454BF0 00401825 */  move  $v1, $v0
/* 00454BF4 00CD2026 */  xor   $a0, $a2, $t5
/* 00454BF8 0004202B */  sltu  $a0, $zero, $a0
/* 00454BFC 308400FF */  andi  $a0, $a0, 0xff
.L00454C00:
/* 00454C00 14A00003 */  bnez  $a1, .L00454C10
/* 00454C04 00000000 */   nop   
/* 00454C08 5080FFDE */  beql  $a0, $zero, .L00454B84
/* 00454C0C 90680000 */   lbu   $t0, ($v1)
.L00454C10:
/* 00454C10 54A00036 */  bnezl $a1, .L00454CEC
/* 00454C14 8FA80050 */   lw    $t0, 0x50($sp)
/* 00454C18 8CC20014 */  lw    $v0, 0x14($a2)
/* 00454C1C 50400033 */  beql  $v0, $zero, .L00454CEC
/* 00454C20 8FA80050 */   lw    $t0, 0x50($sp)
/* 00454C24 8C4C0004 */  lw    $t4, 4($v0)
/* 00454C28 55800030 */  bnezl $t4, .L00454CEC
/* 00454C2C 8FA80050 */   lw    $t0, 0x50($sp)
/* 00454C30 8C460000 */  lw    $a2, ($v0)
.L00454C34:
/* 00454C34 14A00024 */  bnez  $a1, .L00454CC8
/* 00454C38 00002025 */   move  $a0, $zero
/* 00454C3C 906E0000 */  lbu   $t6, ($v1)
.L00454C40:
/* 00454C40 25CFFFE0 */  addiu $t7, $t6, -0x20
/* 00454C44 2DE90060 */  sltiu $t1, $t7, 0x60
/* 00454C48 11200009 */  beqz  $t1, .L00454C70
/* 00454C4C 00000000 */   nop   
/* 00454C50 8F8A8044 */  lw    $t2, %got(D_10010C28)($gp)
/* 00454C54 000FC143 */  sra   $t8, $t7, 5
/* 00454C58 0018C880 */  sll   $t9, $t8, 2
/* 00454C5C 254A0C28 */  addiu $t2, %lo(D_10010C28) # addiu $t2, $t2, 0xc28
/* 00454C60 01594021 */  addu  $t0, $t2, $t9
/* 00454C64 8D0B0000 */  lw    $t3, ($t0)
/* 00454C68 01EB6804 */  sllv  $t5, $t3, $t7
/* 00454C6C 29A90000 */  slti  $t1, $t5, 0
.L00454C70:
/* 00454C70 51200008 */  beql  $t1, $zero, .L00454C94
/* 00454C74 8C62000C */   lw    $v0, 0xc($v1)
/* 00454C78 8C6E0004 */  lw    $t6, 4($v1)
/* 00454C7C 8DD80014 */  lw    $t8, 0x14($t6)
/* 00454C80 54F80004 */  bnel  $a3, $t8, .L00454C94
/* 00454C84 8C62000C */   lw    $v0, 0xc($v1)
/* 00454C88 1000000B */  b     .L00454CB8
/* 00454C8C 24050001 */   li    $a1, 1
/* 00454C90 8C62000C */  lw    $v0, 0xc($v1)
.L00454C94:
/* 00454C94 54400004 */  bnezl $v0, .L00454CA8
/* 00454C98 8C4A0010 */   lw    $t2, 0x10($v0)
/* 00454C9C 10000006 */  b     .L00454CB8
/* 00454CA0 24040001 */   li    $a0, 1
/* 00454CA4 8C4A0010 */  lw    $t2, 0x10($v0)
.L00454CA8:
/* 00454CA8 00401825 */  move  $v1, $v0
/* 00454CAC 00CA2026 */  xor   $a0, $a2, $t2
/* 00454CB0 0004202B */  sltu  $a0, $zero, $a0
/* 00454CB4 308400FF */  andi  $a0, $a0, 0xff
.L00454CB8:
/* 00454CB8 14A00003 */  bnez  $a1, .L00454CC8
/* 00454CBC 00000000 */   nop   
/* 00454CC0 5080FFDF */  beql  $a0, $zero, .L00454C40
/* 00454CC4 906E0000 */   lbu   $t6, ($v1)
.L00454CC8:
/* 00454CC8 54A00008 */  bnezl $a1, .L00454CEC
/* 00454CCC 8FA80050 */   lw    $t0, 0x50($sp)
/* 00454CD0 8CC20014 */  lw    $v0, 0x14($a2)
/* 00454CD4 50400005 */  beql  $v0, $zero, .L00454CEC
/* 00454CD8 8FA80050 */   lw    $t0, 0x50($sp)
/* 00454CDC 8C590004 */  lw    $t9, 4($v0)
/* 00454CE0 5320FFD4 */  beql  $t9, $zero, .L00454C34
/* 00454CE4 8C460000 */   lw    $a2, ($v0)
/* 00454CE8 8FA80050 */  lw    $t0, 0x50($sp)
.L00454CEC:
/* 00454CEC 00A01025 */  move  $v0, $a1
/* 00454CF0 AD030000 */  sw    $v1, ($t0)
.L00454CF4:
/* 00454CF4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00454CF8 8FB00018 */  lw    $s0, 0x18($sp)
/* 00454CFC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00454D00 03E00008 */  jr    $ra
/* 00454D04 27BD0048 */   addiu $sp, $sp, 0x48
#endif

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

    .type func_00454D08, @function
func_00454D08:
    # 00454D08 func_00454D08
    # 00454F00 func_00454F00
/* 00454D08 3C1C0FBC */  .cpload $t9
/* 00454D0C 279C5588 */  
/* 00454D10 0399E021 */  
/* 00454D14 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00454D18 8C830004 */  lw    $v1, 4($a0)
/* 00454D1C AFB2001C */  sw    $s2, 0x1c($sp)
/* 00454D20 AFB10018 */  sw    $s1, 0x18($sp)
/* 00454D24 00408825 */  move  $s1, $v0
/* 00454D28 00A09025 */  move  $s2, $a1
/* 00454D2C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00454D30 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00454D34 1460005D */  bnez  $v1, .L00454EAC
/* 00454D38 AFB00014 */   sw    $s0, 0x14($sp)
/* 00454D3C 8C900000 */  lw    $s0, ($a0)
/* 00454D40 8C4FFFF0 */  lw    $t7, -0x10($v0)
/* 00454D44 920E000A */  lbu   $t6, 0xa($s0)
/* 00454D48 91F8000A */  lbu   $t8, 0xa($t7)
/* 00454D4C 01D8082B */  sltu  $at, $t6, $t8
/* 00454D50 50200004 */  beql  $at, $zero, .L00454D64
/* 00454D54 8E590014 */   lw    $t9, 0x14($s2)
/* 00454D58 10000063 */  b     .L00454EE8
/* 00454D5C 24020001 */   li    $v0, 1
/* 00454D60 8E590014 */  lw    $t9, 0x14($s2)
.L00454D64:
/* 00454D64 2605010C */  addiu $a1, $s0, 0x10c
/* 00454D68 97240002 */  lhu   $a0, 2($t9)
/* 00454D6C 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00454D70 0320F809 */  jalr  $t9
/* 00454D74 00000000 */   nop   
/* 00454D78 10400003 */  beqz  $v0, .L00454D88
/* 00454D7C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00454D80 10000059 */  b     .L00454EE8
/* 00454D84 00001025 */   move  $v0, $zero
.L00454D88:
/* 00454D88 8E030020 */  lw    $v1, 0x20($s0)
/* 00454D8C 24040010 */  li    $a0, 16
/* 00454D90 90620000 */  lbu   $v0, ($v1)
/* 00454D94 14820008 */  bne   $a0, $v0, .L00454DB8
/* 00454D98 2C490040 */   sltiu $t1, $v0, 0x40
/* 00454D9C 8F888A5C */  lw     $t0, %got(lang)($gp)
/* 00454DA0 24010003 */  li    $at, 3
/* 00454DA4 91080000 */  lbu   $t0, ($t0)
/* 00454DA8 15010003 */  bne   $t0, $at, .L00454DB8
/* 00454DAC 00000000 */   nop   
/* 00454DB0 1000004D */  b     .L00454EE8
/* 00454DB4 00001025 */   move  $v0, $zero
.L00454DB8:
/* 00454DB8 11200009 */  beqz  $t1, .L00454DE0
/* 00454DBC 00000000 */   nop   
/* 00454DC0 8F8C8044 */  lw    $t4, %got(D_10010C34)($gp)
/* 00454DC4 00025143 */  sra   $t2, $v0, 5
/* 00454DC8 000A5880 */  sll   $t3, $t2, 2
/* 00454DCC 258C0C34 */  addiu $t4, %lo(D_10010C34) # addiu $t4, $t4, 0xc34
/* 00454DD0 018B6821 */  addu  $t5, $t4, $t3
/* 00454DD4 8DAF0000 */  lw    $t7, ($t5)
/* 00454DD8 004F7004 */  sllv  $t6, $t7, $v0
/* 00454DDC 29C90000 */  slti  $t1, $t6, 0
.L00454DE0:
/* 00454DE0 11200015 */  beqz  $t1, .L00454E38
/* 00454DE4 00000000 */   nop   
/* 00454DE8 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 00454DEC 90640019 */  lbu   $a0, 0x19($v1)
/* 00454DF0 8C650014 */  lw    $a1, 0x14($v1)
/* 00454DF4 0320F809 */  jalr  $t9
/* 00454DF8 02403025 */   move  $a2, $s2
/* 00454DFC 10400003 */  beqz  $v0, .L00454E0C
/* 00454E00 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00454E04 10000038 */  b     .L00454EE8
/* 00454E08 00001025 */   move  $v0, $zero
.L00454E0C:
/* 00454E0C 8E190020 */  lw    $t9, 0x20($s0)
/* 00454E10 02402825 */  move  $a1, $s2
/* 00454E14 24060001 */  li    $a2, 1
/* 00454E18 8F240024 */  lw    $a0, 0x24($t9)
/* 00454E1C 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 00454E20 0320F809 */  jalr  $t9
/* 00454E24 00000000 */   nop   
/* 00454E28 1040001E */  beqz  $v0, .L00454EA4
/* 00454E2C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00454E30 1000002D */  b     .L00454EE8
/* 00454E34 00001025 */   move  $v0, $zero
.L00454E38:
/* 00454E38 1482001A */  bne   $a0, $v0, .L00454EA4
/* 00454E3C 00000000 */   nop   
/* 00454E40 90680018 */  lbu   $t0, 0x18($v1)
/* 00454E44 310A0001 */  andi  $t2, $t0, 1
/* 00454E48 1140000C */  beqz  $t2, .L00454E7C
/* 00454E4C 00000000 */   nop   
/* 00454E50 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 00454E54 8F84897C */  lw     $a0, %got(curlevel)($gp)
/* 00454E58 8F858B70 */  lw     $a1, %got(indirprocs)($gp)
/* 00454E5C 02403025 */  move  $a2, $s2
/* 00454E60 8C840000 */  lw    $a0, ($a0)
/* 00454E64 0320F809 */  jalr  $t9
/* 00454E68 8CA50000 */   lw    $a1, ($a1)
/* 00454E6C 10400003 */  beqz  $v0, .L00454E7C
/* 00454E70 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00454E74 1000001C */  b     .L00454EE8
/* 00454E78 00001025 */   move  $v0, $zero
.L00454E7C:
/* 00454E7C 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 00454E80 8E0C0020 */  lw    $t4, 0x20($s0)
/* 00454E84 02402825 */  move  $a1, $s2
/* 00454E88 24060001 */  li    $a2, 1
/* 00454E8C 0320F809 */  jalr  $t9
/* 00454E90 8D840028 */   lw    $a0, 0x28($t4)
/* 00454E94 10400003 */  beqz  $v0, .L00454EA4
/* 00454E98 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00454E9C 10000012 */  b     .L00454EE8
/* 00454EA0 00001025 */   move  $v0, $zero
.L00454EA4:
/* 00454EA4 10000010 */  b     .L00454EE8
/* 00454EA8 24020001 */   li    $v0, 1
.L00454EAC:
/* 00454EAC 00608025 */  move  $s0, $v1
.L00454EB0:
/* 00454EB0 8F998028 */  lw    $t9, %got(func_00454D08)($gp)
/* 00454EB4 8E040000 */  lw    $a0, ($s0)
/* 00454EB8 02402825 */  move  $a1, $s2
/* 00454EBC 27394D08 */  addiu $t9, %lo(func_00454D08) # addiu $t9, $t9, 0x4d08
/* 00454EC0 0320F809 */  jalr  $t9
/* 00454EC4 02201025 */   move  $v0, $s1
/* 00454EC8 14400003 */  bnez  $v0, .L00454ED8
/* 00454ECC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00454ED0 10000005 */  b     .L00454EE8
/* 00454ED4 00001025 */   move  $v0, $zero
.L00454ED8:
/* 00454ED8 8E100004 */  lw    $s0, 4($s0)
/* 00454EDC 1600FFF4 */  bnez  $s0, .L00454EB0
/* 00454EE0 00000000 */   nop   
/* 00454EE4 24020001 */  li    $v0, 1
.L00454EE8:
/* 00454EE8 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00454EEC 8FB00014 */  lw    $s0, 0x14($sp)
/* 00454EF0 8FB10018 */  lw    $s1, 0x18($sp)
/* 00454EF4 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00454EF8 03E00008 */  jr    $ra
/* 00454EFC 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_00454F00, @function
func_00454F00:
    # 00454F00 func_00454F00
    # 00455518 func_00455518
/* 00454F00 3C1C0FBC */  .cpload $t9
/* 00454F04 279C5390 */  
/* 00454F08 0399E021 */  
/* 00454F0C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00454F10 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00454F14 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00454F18 90A30000 */  lbu   $v1, ($a1)
/* 00454F1C 00A03025 */  move  $a2, $a1
/* 00454F20 00403825 */  move  $a3, $v0
/* 00454F24 246EFFFF */  addiu $t6, $v1, -1
/* 00454F28 2DC10008 */  sltiu $at, $t6, 8
/* 00454F2C 1020003E */  beqz  $at, .L00455028
/* 00454F30 00000000 */   nop   
/* 00454F34 8F818044 */  lw    $at, %got(jtbl_1000CF34)($gp)
/* 00454F38 000E7080 */  sll   $t6, $t6, 2
/* 00454F3C 002E0821 */  addu  $at, $at, $t6
/* 00454F40 8C2ECF34 */  lw    $t6, %lo(jtbl_1000CF34)($at)
/* 00454F44 01DC7021 */  addu  $t6, $t6, $gp
/* 00454F48 01C00008 */  jr    $t6
/* 00454F4C 00000000 */   nop   
.L00454F50:
/* 00454F50 1000003E */  b     .L0045504C
/* 00454F54 24040001 */   li    $a0, 1
.L00454F58:
/* 00454F58 8F998028 */  lw    $t9, %got(func_00454D08)($gp)
/* 00454F5C 00C02825 */  move  $a1, $a2
/* 00454F60 00E01025 */  move  $v0, $a3
/* 00454F64 27394D08 */  addiu $t9, %lo(func_00454D08) # addiu $t9, $t9, 0x4d08
/* 00454F68 0320F809 */  jalr  $t9
/* 00454F6C 00000000 */   nop   
/* 00454F70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00454F74 10000035 */  b     .L0045504C
/* 00454F78 304400FF */   andi  $a0, $v0, 0xff
.L00454F7C:
/* 00454F7C 90CF0020 */  lbu   $t7, 0x20($a2)
/* 00454F80 3C010003 */  lui   $at, 3
/* 00454F84 34219E80 */  ori   $at, $at, 0x9e80
/* 00454F88 25F8FFE0 */  addiu $t8, $t7, -0x20
/* 00454F8C 2F190020 */  sltiu $t9, $t8, 0x20
/* 00454F90 00194023 */  negu  $t0, $t9
/* 00454F94 01014824 */  and   $t1, $t0, $at
/* 00454F98 03095004 */  sllv  $t2, $t1, $t8
/* 00454F9C 05410003 */  bgez  $t2, .L00454FAC
/* 00454FA0 00E01025 */   move  $v0, $a3
/* 00454FA4 10000029 */  b     .L0045504C
/* 00454FA8 00002025 */   move  $a0, $zero
.L00454FAC:
/* 00454FAC 8F998028 */  lw    $t9, %got(func_00454F00)($gp)
/* 00454FB0 8CC50024 */  lw    $a1, 0x24($a2)
/* 00454FB4 AFA40028 */  sw    $a0, 0x28($sp)
/* 00454FB8 27394F00 */  addiu $t9, %lo(func_00454F00) # addiu $t9, $t9, 0x4f00
/* 00454FBC AFA6002C */  sw    $a2, 0x2c($sp)
/* 00454FC0 0320F809 */  jalr  $t9
/* 00454FC4 AFA70024 */   sw    $a3, 0x24($sp)
/* 00454FC8 304300FF */  andi  $v1, $v0, 0xff
/* 00454FCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00454FD0 8FA40028 */  lw    $a0, 0x28($sp)
/* 00454FD4 8FA6002C */  lw    $a2, 0x2c($sp)
/* 00454FD8 10600011 */  beqz  $v1, .L00455020
/* 00454FDC 8FA70024 */   lw    $a3, 0x24($sp)
/* 00454FE0 90CB0020 */  lbu   $t3, 0x20($a2)
/* 00454FE4 8F8D8DBC */  lw     $t5, %got(optab)($gp)
/* 00454FE8 000B6080 */  sll   $t4, $t3, 2
/* 00454FEC 018B6023 */  subu  $t4, $t4, $t3
/* 00454FF0 018D7021 */  addu  $t6, $t4, $t5
/* 00454FF4 91CF0002 */  lbu   $t7, 2($t6)
/* 00454FF8 11E00009 */  beqz  $t7, .L00455020
/* 00454FFC 00000000 */   nop   
/* 00455000 8F998028 */  lw    $t9, %got(func_00454F00)($gp)
/* 00455004 8CC50028 */  lw    $a1, 0x28($a2)
/* 00455008 00E01025 */  move  $v0, $a3
/* 0045500C 27394F00 */  addiu $t9, %lo(func_00454F00) # addiu $t9, $t9, 0x4f00
/* 00455010 0320F809 */  jalr  $t9
/* 00455014 00000000 */   nop   
/* 00455018 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045501C 304300FF */  andi  $v1, $v0, 0xff
.L00455020:
/* 00455020 1000000A */  b     .L0045504C
/* 00455024 306400FF */   andi  $a0, $v1, 0xff
.L00455028:
/* 00455028 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045502C 8F868044 */  lw    $a2, %got(RO_1000CF28)($gp)
/* 00455030 24040001 */  li    $a0, 1
/* 00455034 2405033D */  li    $a1, 829
/* 00455038 2407000A */  li    $a3, 10
/* 0045503C 0320F809 */  jalr  $t9
/* 00455040 24C6CF28 */   addiu $a2, %lo(RO_1000CF28) # addiu $a2, $a2, -0x30d8
/* 00455044 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00455048 93A40023 */  lbu   $a0, 0x23($sp)
.L0045504C:
/* 0045504C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00455050 27BD0028 */  addiu $sp, $sp, 0x28
/* 00455054 00801025 */  move  $v0, $a0
/* 00455058 03E00008 */  jr    $ra
/* 0045505C 00000000 */   nop   

    .type func_00455060, @function
func_00455060:
    # 00455060 func_00455060
    # 00455518 func_00455518
/* 00455060 3C1C0FBC */  .cpload $t9
/* 00455064 279C5230 */  
/* 00455068 0399E021 */  
/* 0045506C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00455070 8C830004 */  lw    $v1, 4($a0)
/* 00455074 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00455078 00408825 */  move  $s1, $v0
/* 0045507C AFBF002C */  sw    $ra, 0x2c($sp)
/* 00455080 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00455084 AFB30024 */  sw    $s3, 0x24($sp)
/* 00455088 AFB20020 */  sw    $s2, 0x20($sp)
/* 0045508C 1460009C */  bnez  $v1, .L00455300
/* 00455090 AFB00018 */   sw    $s0, 0x18($sp)
/* 00455094 8C920000 */  lw    $s2, ($a0)
/* 00455098 8C53FFF0 */  lw    $s3, -0x10($v0)
/* 0045509C 924E000A */  lbu   $t6, 0xa($s2)
/* 004550A0 926F000A */  lbu   $t7, 0xa($s3)
/* 004550A4 01CF082B */  sltu  $at, $t6, $t7
/* 004550A8 5420005E */  bnezl $at, .L00455224
/* 004550AC 8E500024 */   lw    $s0, 0x24($s2)
/* 004550B0 8E420020 */  lw    $v0, 0x20($s2)
/* 004550B4 24040010 */  li    $a0, 16
/* 004550B8 90430000 */  lbu   $v1, ($v0)
/* 004550BC 14830009 */  bne   $a0, $v1, .L004550E4
/* 004550C0 2C680040 */   sltiu $t0, $v1, 0x40
/* 004550C4 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 004550C8 24010003 */  li    $at, 3
/* 004550CC 24190001 */  li    $t9, 1
/* 004550D0 93180000 */  lbu   $t8, ($t8)
/* 004550D4 17010003 */  bne   $t8, $at, .L004550E4
/* 004550D8 00000000 */   nop   
/* 004550DC 10000096 */  b     .L00455338
/* 004550E0 A239FFDF */   sb    $t9, -0x21($s1)
.L004550E4:
/* 004550E4 11000009 */  beqz  $t0, .L0045510C
/* 004550E8 00000000 */   nop   
/* 004550EC 8F8B8044 */  lw    $t3, %got(D_10010C48)($gp)
/* 004550F0 00034943 */  sra   $t1, $v1, 5
/* 004550F4 00095080 */  sll   $t2, $t1, 2
/* 004550F8 256B0C48 */  addiu $t3, %lo(D_10010C48) # addiu $t3, $t3, 0xc48
/* 004550FC 016A6021 */  addu  $t4, $t3, $t2
/* 00455100 8D8D0000 */  lw    $t5, ($t4)
/* 00455104 006D7004 */  sllv  $t6, $t5, $v1
/* 00455108 29C80000 */  slti  $t0, $t6, 0
.L0045510C:
/* 0045510C 11000018 */  beqz  $t0, .L00455170
/* 00455110 00000000 */   nop   
/* 00455114 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 00455118 8E30FFE0 */  lw    $s0, -0x20($s1)
/* 0045511C 90450019 */  lbu   $a1, 0x19($v0)
/* 00455120 8C460014 */  lw    $a2, 0x14($v0)
/* 00455124 0320F809 */  jalr  $t9
/* 00455128 8E040014 */   lw    $a0, 0x14($s0)
/* 0045512C 10400004 */  beqz  $v0, .L00455140
/* 00455130 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00455134 24180001 */  li    $t8, 1
/* 00455138 1000007F */  b     .L00455338
/* 0045513C A238FFDF */   sb    $t8, -0x21($s1)
.L00455140:
/* 00455140 8E590020 */  lw    $t9, 0x20($s2)
/* 00455144 02002825 */  move  $a1, $s0
/* 00455148 24060001 */  li    $a2, 1
/* 0045514C 8F240024 */  lw    $a0, 0x24($t9)
/* 00455150 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 00455154 0320F809 */  jalr  $t9
/* 00455158 00000000 */   nop   
/* 0045515C 10400020 */  beqz  $v0, .L004551E0
/* 00455160 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00455164 24090001 */  li    $t1, 1
/* 00455168 10000073 */  b     .L00455338
/* 0045516C A229FFDF */   sb    $t1, -0x21($s1)
.L00455170:
/* 00455170 5483001C */  bnel  $a0, $v1, .L004551E4
/* 00455174 8E28FFE0 */   lw    $t0, -0x20($s1)
/* 00455178 904B0018 */  lbu   $t3, 0x18($v0)
/* 0045517C 316A0001 */  andi  $t2, $t3, 1
/* 00455180 1140000C */  beqz  $t2, .L004551B4
/* 00455184 00000000 */   nop   
/* 00455188 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 0045518C 8E2CFFE0 */  lw    $t4, -0x20($s1)
/* 00455190 90450019 */  lbu   $a1, 0x19($v0)
/* 00455194 8C460014 */  lw    $a2, 0x14($v0)
/* 00455198 0320F809 */  jalr  $t9
/* 0045519C 8D840014 */   lw    $a0, 0x14($t4)
/* 004551A0 10400004 */  beqz  $v0, .L004551B4
/* 004551A4 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004551A8 240D0001 */  li    $t5, 1
/* 004551AC 10000062 */  b     .L00455338
/* 004551B0 A22DFFDF */   sb    $t5, -0x21($s1)
.L004551B4:
/* 004551B4 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 004551B8 8E4E0020 */  lw    $t6, 0x20($s2)
/* 004551BC 8E25FFE0 */  lw    $a1, -0x20($s1)
/* 004551C0 24060001 */  li    $a2, 1
/* 004551C4 0320F809 */  jalr  $t9
/* 004551C8 8DC40028 */   lw    $a0, 0x28($t6)
/* 004551CC 10400004 */  beqz  $v0, .L004551E0
/* 004551D0 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004551D4 240F0001 */  li    $t7, 1
/* 004551D8 10000057 */  b     .L00455338
/* 004551DC A22FFFDF */   sb    $t7, -0x21($s1)
.L004551E0:
/* 004551E0 8E28FFE0 */  lw    $t0, -0x20($s1)
.L004551E4:
/* 004551E4 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 004551E8 2645010C */  addiu $a1, $s2, 0x10c
/* 004551EC 8D180014 */  lw    $t8, 0x14($t0)
/* 004551F0 0320F809 */  jalr  $t9
/* 004551F4 97040002 */   lhu   $a0, 2($t8)
/* 004551F8 1040004F */  beqz  $v0, .L00455338
/* 004551FC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00455200 9279000A */  lbu   $t9, 0xa($s3)
/* 00455204 9249000A */  lbu   $t1, 0xa($s2)
/* 00455208 240B0001 */  li    $t3, 1
/* 0045520C 0329082B */  sltu  $at, $t9, $t1
/* 00455210 50200004 */  beql  $at, $zero, .L00455224
/* 00455214 8E500024 */   lw    $s0, 0x24($s2)
/* 00455218 10000047 */  b     .L00455338
/* 0045521C A22BFFDF */   sb    $t3, -0x21($s1)
/* 00455220 8E500024 */  lw    $s0, 0x24($s2)
.L00455224:
/* 00455224 52000045 */  beql  $s0, $zero, .L0045533C
/* 00455228 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045522C 920A0009 */  lbu   $t2, 9($s0)
.L00455230:
/* 00455230 24010001 */  li    $at, 1
/* 00455234 5541002E */  bnel  $t2, $at, .L004552F0
/* 00455238 8E100004 */   lw    $s0, 4($s0)
/* 0045523C 8E02000C */  lw    $v0, 0xc($s0)
/* 00455240 904C0000 */  lbu   $t4, ($v0)
/* 00455244 258DFFE0 */  addiu $t5, $t4, -0x20
/* 00455248 2DAE0060 */  sltiu $t6, $t5, 0x60
/* 0045524C 11C00009 */  beqz  $t6, .L00455274
/* 00455250 00000000 */   nop   
/* 00455254 8F988044 */  lw    $t8, %got(D_10010C3C)($gp)
/* 00455258 000D7943 */  sra   $t7, $t5, 5
/* 0045525C 000F4080 */  sll   $t0, $t7, 2
/* 00455260 27180C3C */  addiu $t8, %lo(D_10010C3C) # addiu $t8, $t8, 0xc3c
/* 00455264 0308C821 */  addu  $t9, $t8, $t0
/* 00455268 8F290000 */  lw    $t1, ($t9)
/* 0045526C 01A95804 */  sllv  $t3, $t1, $t5
/* 00455270 296E0000 */  slti  $t6, $t3, 0
.L00455274:
/* 00455274 51C0001E */  beql  $t6, $zero, .L004552F0
/* 00455278 8E100004 */   lw    $s0, 4($s0)
/* 0045527C 8E2CFFE0 */  lw    $t4, -0x20($s1)
/* 00455280 8C580004 */  lw    $t8, 4($v0)
/* 00455284 8D8F0014 */  lw    $t7, 0x14($t4)
/* 00455288 8F080014 */  lw    $t0, 0x14($t8)
/* 0045528C 55E80018 */  bnel  $t7, $t0, .L004552F0
/* 00455290 8E100004 */   lw    $s0, 4($s0)
/* 00455294 90590001 */  lbu   $t9, 1($v0)
/* 00455298 53200004 */  beql  $t9, $zero, .L004552AC
/* 0045529C 240D0001 */   li    $t5, 1
/* 004552A0 8E29FFD8 */  lw    $t1, -0x28($s1)
/* 004552A4 11200003 */  beqz  $t1, .L004552B4
/* 004552A8 240D0001 */   li    $t5, 1
.L004552AC:
/* 004552AC 10000022 */  b     .L00455338
/* 004552B0 A22DFFDF */   sb    $t5, -0x21($s1)
.L004552B4:
/* 004552B4 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004552B8 96440008 */  lhu   $a0, 8($s2)
/* 004552BC 26650164 */  addiu $a1, $s3, 0x164
/* 004552C0 0320F809 */  jalr  $t9
/* 004552C4 00000000 */   nop   
/* 004552C8 14400004 */  bnez  $v0, .L004552DC
/* 004552CC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004552D0 240B0001 */  li    $t3, 1
/* 004552D4 10000018 */  b     .L00455338
/* 004552D8 A22BFFDF */   sb    $t3, -0x21($s1)
.L004552DC:
/* 004552DC 8E0A000C */  lw    $t2, 0xc($s0)
/* 004552E0 8D4E0004 */  lw    $t6, 4($t2)
/* 004552E4 8DCC0034 */  lw    $t4, 0x34($t6)
/* 004552E8 AE2CFFD8 */  sw    $t4, -0x28($s1)
/* 004552EC 8E100004 */  lw    $s0, 4($s0)
.L004552F0:
/* 004552F0 5600FFCF */  bnezl $s0, .L00455230
/* 004552F4 920A0009 */   lbu   $t2, 9($s0)
/* 004552F8 10000010 */  b     .L0045533C
/* 004552FC 8FBF002C */   lw    $ra, 0x2c($sp)
.L00455300:
/* 00455300 00608025 */  move  $s0, $v1
.L00455304:
/* 00455304 8F998028 */  lw    $t9, %got(func_00455060)($gp)
/* 00455308 8E040000 */  lw    $a0, ($s0)
/* 0045530C 02201025 */  move  $v0, $s1
/* 00455310 27395060 */  addiu $t9, %lo(func_00455060) # addiu $t9, $t9, 0x5060
/* 00455314 0320F809 */  jalr  $t9
/* 00455318 00000000 */   nop   
/* 0045531C 8E100004 */  lw    $s0, 4($s0)
/* 00455320 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00455324 52000005 */  beql  $s0, $zero, .L0045533C
/* 00455328 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045532C 9238FFDF */  lbu   $t8, -0x21($s1)
/* 00455330 1300FFF4 */  beqz  $t8, .L00455304
/* 00455334 00000000 */   nop   
.L00455338:
/* 00455338 8FBF002C */  lw    $ra, 0x2c($sp)
.L0045533C:
/* 0045533C 8FB00018 */  lw    $s0, 0x18($sp)
/* 00455340 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00455344 8FB20020 */  lw    $s2, 0x20($sp)
/* 00455348 8FB30024 */  lw    $s3, 0x24($sp)
/* 0045534C 03E00008 */  jr    $ra
/* 00455350 27BD0030 */   addiu $sp, $sp, 0x30
)"");

static bool func_00455354(struct Intval *arg0) {
    struct IntvalList *phi_s0;

    if (arg0->intvList4 == NULL) {
        if (arg0->graphnode->stat_tail->opc == Uclab
                || arg0->graphnode->stat_tail->opc == Ucup
                || arg0->graphnode->stat_tail->opc == Uicuf
                || arg0->graphnode->stat_tail->opc == Uijp
                || arg0->graphnode->stat_tail->opc == Uxjp) {
            return true;
        }
    } else {
        phi_s0 = arg0->intvList4;
        do {
            if (func_00455354(phi_s0->intv)) {
                return true;
            }
            phi_s0 = phi_s0->next;
        } while (phi_s0 != NULL);
    }
    return false;
}

#if 0
    .type func_00455354, @function
func_00455354:
    # 00455354 func_00455354
    # 00455518 func_00455518
/* 00455354 3C1C0FBC */  .cpload $t9
/* 00455358 279C4F3C */  
/* 0045535C 0399E021 */  
/* 00455360 8C830004 */  lw    $v1, 4($a0)
/* 00455364 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00455368 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045536C 00408825 */  move  $s1, $v0
/* 00455370 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00455374 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00455378 14600013 */  bnez  $v1, .L004553C8
/* 0045537C AFB00018 */   sw    $s0, 0x18($sp)
/* 00455380 8C820000 */  lw    $v0, ($a0)
/* 00455384 8C4E0020 */  lw    $t6, 0x20($v0)
/* 00455388 91CF0000 */  lbu   $t7, ($t6)
/* 0045538C 2DF800A0 */  sltiu $t8, $t7, 0xa0
/* 00455390 13000009 */  beqz  $t8, .L004553B8
/* 00455394 00000000 */   nop   
/* 00455398 8F898044 */  lw    $t1, %got(D_10010C50)($gp)
/* 0045539C 000FC943 */  sra   $t9, $t7, 5
/* 004553A0 00194080 */  sll   $t0, $t9, 2
/* 004553A4 25290C50 */  addiu $t1, %lo(D_10010C50) # addiu $t1, $t1, 0xc50
/* 004553A8 01285021 */  addu  $t2, $t1, $t0
/* 004553AC 8D4B0000 */  lw    $t3, ($t2)
/* 004553B0 01EB6004 */  sllv  $t4, $t3, $t7
/* 004553B4 29980000 */  slti  $t8, $t4, 0
.L004553B8:
/* 004553B8 53000012 */  beql  $t8, $zero, .L00455404
/* 004553BC 00001025 */   move  $v0, $zero
/* 004553C0 10000010 */  b     .L00455404
/* 004553C4 24020001 */   li    $v0, 1
.L004553C8:
/* 004553C8 00608025 */  move  $s0, $v1
.L004553CC:
/* 004553CC 8F998028 */  lw    $t9, %got(func_00455354)($gp)
/* 004553D0 8E040000 */  lw    $a0, ($s0)
/* 004553D4 02201025 */  move  $v0, $s1
/* 004553D8 27395354 */  addiu $t9, %lo(func_00455354) # addiu $t9, $t9, 0x5354
/* 004553DC 0320F809 */  jalr  $t9
/* 004553E0 00000000 */   nop   
/* 004553E4 10400003 */  beqz  $v0, .L004553F4
/* 004553E8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004553EC 10000005 */  b     .L00455404
/* 004553F0 24020001 */   li    $v0, 1
.L004553F4:
/* 004553F4 8E100004 */  lw    $s0, 4($s0)
/* 004553F8 1600FFF4 */  bnez  $s0, .L004553CC
/* 004553FC 00000000 */   nop   
/* 00455400 00001025 */  move  $v0, $zero
.L00455404:
/* 00455404 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00455408 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045540C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00455410 03E00008 */  jr    $ra
/* 00455414 27BD0028 */   addiu $sp, $sp, 0x28
#endif

static bool func_00455418(struct Intval *arg0, int arg1, int arg2) {
    struct Graphnode *node_a0;
    struct Graphnode *node_a2;
    struct IntvalList *phi_v0;
    int phi_v1;

    phi_v0 = arg0->intvList4;
    phi_v1 = 0;
    do {
        node_a0 = phi_v0->intv->graphnode;
        if (node_a0->num >= arg1 && arg2 >= node_a0->num) {
            phi_v1 = phi_v1 + 1;
            if (node_a0->stat_tail->opc == Ufjp
                    || node_a0->stat_tail->opc == Utjp
                    || node_a0->stat_tail->opc == Uujp) {
                node_a2 = node_a0->successors->graphnode;
                if (node_a0->stat_tail->u.jp.target_blockno != node_a0->successors->graphnode->blockno) {
                    node_a2 = node_a0->successors->next->graphnode;
                }
                if (node_a2->num < arg1) {
                    return false;
                }
                if (arg2 < node_a2->num) {
                    return false;
                }
            }
        } else {
            if (phi_v0->intv->unk28 == 3) {
                return false;
            }
        }
        phi_v0 = phi_v0->next;
    } while (phi_v0 != NULL); 

    return phi_v1 == ((arg2 - arg1) + 1);
}

#if 0
    .type func_00455418, @function
func_00455418:
    # 00455518 func_00455518
/* 00455418 27BDFFF8 */  addiu $sp, $sp, -8
/* 0045541C AFB00004 */  sw    $s0, 4($sp)
/* 00455420 00C08025 */  move  $s0, $a2
/* 00455424 00A03825 */  move  $a3, $a1
/* 00455428 00001825 */  move  $v1, $zero
/* 0045542C 8C820004 */  lw    $v0, 4($a0)
/* 00455430 24090003 */  li    $t1, 3
/* 00455434 8C450000 */  lw    $a1, ($v0)
.L00455438:
/* 00455438 8CA40000 */  lw    $a0, ($a1)
/* 0045543C 94860008 */  lhu   $a2, 8($a0)
/* 00455440 00C7082A */  slt   $at, $a2, $a3
/* 00455444 14200025 */  bnez  $at, .L004554DC
/* 00455448 0206082A */   slt   $at, $s0, $a2
/* 0045544C 54200024 */  bnezl $at, .L004554E0
/* 00455450 90AD0028 */   lbu   $t5, 0x28($a1)
/* 00455454 8C850020 */  lw    $a1, 0x20($a0)
/* 00455458 24630001 */  addiu $v1, $v1, 1
/* 0045545C 90AE0000 */  lbu   $t6, ($a1)
/* 00455460 25CFFFE0 */  addiu $t7, $t6, -0x20
/* 00455464 2DF80080 */  sltiu $t8, $t7, 0x80
/* 00455468 1300000A */  beqz  $t8, .L00455494
/* 0045546C 00000000 */   nop   
/* 00455470 8F8B8044 */  lw    $t3, %got(D_10010C64)($gp)
/* 00455474 000FC943 */  sra   $t9, $t7, 5
/* 00455478 00195080 */  sll   $t2, $t9, 2
/* 0045547C 256B0C64 */  addiu $t3, %lo(D_10010C64) # addiu $t3, $t3, 0xc64
/* 00455480 016A6021 */  addu  $t4, $t3, $t2
/* 00455484 8D8D0000 */  lw    $t5, ($t4)
/* 00455488 01ED7004 */  sllv  $t6, $t5, $t7
/* 0045548C 29D90000 */  slti  $t9, $t6, 0
/* 00455490 0320C025 */  move  $t8, $t9
.L00455494:
/* 00455494 53000017 */  beql  $t8, $zero, .L004554F4
/* 00455498 8C420004 */   lw    $v0, 4($v0)
/* 0045549C 8C880018 */  lw    $t0, 0x18($a0)
/* 004554A0 8CAB0014 */  lw    $t3, 0x14($a1)
/* 004554A4 8D060000 */  lw    $a2, ($t0)
/* 004554A8 8CCA0000 */  lw    $t2, ($a2)
/* 004554AC 516A0004 */  beql  $t3, $t2, .L004554C0
/* 004554B0 94C40008 */   lhu   $a0, 8($a2)
/* 004554B4 8D0C0004 */  lw    $t4, 4($t0)
/* 004554B8 8D860000 */  lw    $a2, ($t4)
/* 004554BC 94C40008 */  lhu   $a0, 8($a2)
.L004554C0:
/* 004554C0 0087082A */  slt   $at, $a0, $a3
/* 004554C4 14200003 */  bnez  $at, .L004554D4
/* 004554C8 0204082A */   slt   $at, $s0, $a0
/* 004554CC 50200009 */  beql  $at, $zero, .L004554F4
/* 004554D0 8C420004 */   lw    $v0, 4($v0)
.L004554D4:
/* 004554D4 1000000D */  b     .L0045550C
/* 004554D8 00001025 */   move  $v0, $zero
.L004554DC:
/* 004554DC 90AD0028 */  lbu   $t5, 0x28($a1)
.L004554E0:
/* 004554E0 552D0004 */  bnel  $t1, $t5, .L004554F4
/* 004554E4 8C420004 */   lw    $v0, 4($v0)
/* 004554E8 10000008 */  b     .L0045550C
/* 004554EC 00001025 */   move  $v0, $zero
/* 004554F0 8C420004 */  lw    $v0, 4($v0)
.L004554F4:
/* 004554F4 5440FFD0 */  bnezl $v0, .L00455438
/* 004554F8 8C450000 */   lw    $a1, ($v0)
/* 004554FC 02077823 */  subu  $t7, $s0, $a3
/* 00455500 25EE0001 */  addiu $t6, $t7, 1
/* 00455504 006E1026 */  xor   $v0, $v1, $t6
/* 00455508 2C420001 */  sltiu $v0, $v0, 1
.L0045550C:
/* 0045550C 8FB00004 */  lw    $s0, 4($sp)
/* 00455510 03E00008 */  jr    $ra
/* 00455514 27BD0008 */   addiu $sp, $sp, 8
#endif

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

# v0 / t0 / 0x6c(sp): 0x38(sp) of func_00455C48
# 0x70(sp): this function's shared stack
# 0x2c(sp): analoop shared stack # unused

#   4(t0):  ^ 0x3c Intval *arg1
#   0(t0):  ^ 0x38 Intval *arg0
/* -4(t0): ^^ 0x34 analoop shared stack */ # unused
#  -8(t0):  ^ 0x30 Graphnode *node

    .type func_00455518, @function
func_00455518:
    # 00455518 func_00455518
    # 00455C48 func_00455C48
/* 00455518 3C1C0FBC */  .cpload $t9
/* 0045551C 279C4D78 */  
/* 00455520 0399E021 */  
/* 00455524 8C850004 */  lw    $a1, 4($a0)
/* 00455528 27BDFF90 */  addiu $sp, $sp, -0x70
/* 0045552C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00455530 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00455534 14A001B3 */  bnez  $a1, .L00455C04
/* 00455538 00404025 */   move  $t0, $v0
/* 0045553C 8C8E0000 */  lw    $t6, ($a0)
/* 00455540 AFAE0060 */  sw    $t6, 0x60($sp)
/* 00455544 8C47FFF8 */  lw    $a3, -8($v0)     /* sp30 (Graphnode) */
/* 00455548 91D9000A */  lbu   $t9, 0xa($t6)
/* 0045554C 90EF000A */  lbu   $t7, 0xa($a3)
/* 00455550 55F901BA */  bnel  $t7, $t9, .L00455C3C
/* 00455554 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455558 8DCA0020 */  lw    $t2, 0x20($t6)
/* 0045555C AFAA005C */  sw    $t2, 0x5c($sp)
/* 00455560 914C0000 */  lbu   $t4, ($t2)
/* 00455564 258DFFE0 */  addiu $t5, $t4, -0x20
/* 00455568 2DAE0060 */  sltiu $t6, $t5, 0x60
/* 0045556C 11C00009 */  beqz  $t6, .L00455594
/* 00455570 00000000 */   nop   
/* 00455574 8F998044 */  lw    $t9, %got(D_10010C84)($gp)
/* 00455578 000DC143 */  sra   $t8, $t5, 5
/* 0045557C 00187880 */  sll   $t7, $t8, 2
/* 00455580 27390C84 */  addiu $t9, %lo(D_10010C84) # addiu $t9, $t9, 0xc84
/* 00455584 032F4821 */  addu  $t1, $t9, $t7
/* 00455588 8D2A0000 */  lw    $t2, ($t1)
/* 0045558C 01AA5804 */  sllv  $t3, $t2, $t5
/* 00455590 296E0000 */  slti  $t6, $t3, 0
.L00455594:
/* 00455594 11C001A8 */  beqz  $t6, .L00455C38
/* 00455598 8FB80060 */   lw    $t8, 0x60($sp)
/* 0045559C 8F020018 */  lw    $v0, 0x18($t8)
/* 004555A0 8FAB005C */  lw    $t3, 0x5c($sp)
/* 004555A4 8C590004 */  lw    $t9, 4($v0)
/* 004555A8 8C4A0000 */  lw    $t2, ($v0)
/* 004555AC 8F2F0000 */  lw    $t7, ($t9)
/* 004555B0 914D000A */  lbu   $t5, 0xa($t2)
/* 004555B4 91E9000A */  lbu   $t1, 0xa($t7)
/* 004555B8 512D01A0 */  beql  $t1, $t5, .L00455C3C
/* 004555BC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004555C0 8D620004 */  lw    $v0, 4($t3)
/* 004555C4 24010004 */  li    $at, 4
/* 004555C8 904C0000 */  lbu   $t4, ($v0)
/* 004555CC 5581019B */  bnel  $t4, $at, .L00455C3C
/* 004555D0 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004555D4 904E0020 */  lbu   $t6, 0x20($v0)
/* 004555D8 25D8FFE0 */  addiu $t8, $t6, -0x20
/* 004555DC 2F190040 */  sltiu $t9, $t8, 0x40
/* 004555E0 13200009 */  beqz  $t9, .L00455608
/* 004555E4 00000000 */   nop   
/* 004555E8 8F898044 */  lw    $t1, %got(D_10010C7C)($gp)
/* 004555EC 00187943 */  sra   $t7, $t8, 5
/* 004555F0 000F5080 */  sll   $t2, $t7, 2
/* 004555F4 25290C7C */  addiu $t1, %lo(D_10010C7C) # addiu $t1, $t1, 0xc7c
/* 004555F8 012A6821 */  addu  $t5, $t1, $t2
/* 004555FC 8DAB0000 */  lw    $t3, ($t5)
/* 00455600 030B6004 */  sllv  $t4, $t3, $t8
/* 00455604 29990000 */  slti  $t9, $t4, 0
.L00455608:
/* 00455608 5320018C */  beql  $t9, $zero, .L00455C3C
/* 0045560C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455610 8CEF0014 */  lw    $t7, 0x14($a3)
/* 00455614 8DE90004 */  lw    $t1, 4($t7)
/* 00455618 8D2A0004 */  lw    $t2, 4($t1)
/* 0045561C 55400187 */  bnezl $t2, .L00455C3C
/* 00455620 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455624 904D0001 */  lbu   $t5, 1($v0)
/* 00455628 3C018280 */  lui   $at, 0x8280
/* 0045562C 2DAB0020 */  sltiu $t3, $t5, 0x20
/* 00455630 000BC023 */  negu  $t8, $t3
/* 00455634 03016024 */  and   $t4, $t8, $at
/* 00455638 01AC7004 */  sllv  $t6, $t4, $t5
/* 0045563C 05C3017F */  bgezl $t6, .L00455C3C
/* 00455640 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455644 8C430024 */  lw    $v1, 0x24($v0)
/* 00455648 24010003 */  li    $at, 3
/* 0045564C 90790000 */  lbu   $t9, ($v1)
/* 00455650 5721017A */  bnel  $t9, $at, .L00455C3C
/* 00455654 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455658 90690022 */  lbu   $t1, 0x22($v1)
/* 0045565C AFA20054 */  sw    $v0, 0x54($sp)
/* 00455660 AFA30050 */  sw    $v1, 0x50($sp)
/* 00455664 A3A0004F */  sb    $zero, 0x4f($sp)
/* 00455668 1120000B */  beqz  $t1, .L00455698
/* 0045566C AFA00048 */   sw    $zero, 0x48($sp)
/* 00455670 8F998028 */  lw    $t9, %got(func_00455060)($gp)
/* 00455674 8D040004 */  lw    $a0, 4($t0)
/* 00455678 AFA8006C */  sw    $t0, 0x6c($sp)
/* 0045567C 27395060 */  addiu $t9, %lo(func_00455060) # addiu $t9, $t9, 0x5060
/* 00455680 AFA70038 */  sw    $a3, 0x38($sp)
/* 00455684 0320F809 */  jalr  $t9
/* 00455688 27A20070 */   addiu $v0, $sp, 0x70  /* Shared stack from THIS function :| */
/* 0045568C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455690 8FA70038 */  lw    $a3, 0x38($sp)
/* 00455694 8FA8006C */  lw    $t0, 0x6c($sp)
.L00455698:
/* 00455698 93AA004F */  lbu   $t2, 0x4f($sp)
/* 0045569C 8FAB0048 */  lw    $t3, 0x48($sp)
/* 004556A0 8FB8005C */  lw    $t8, 0x5c($sp)
/* 004556A4 55400004 */  bnezl $t2, .L004556B8
/* 004556A8 8F0C0004 */   lw    $t4, 4($t8)
/* 004556AC 55600017 */  bnezl $t3, .L0045570C
/* 004556B0 93AF004F */   lbu   $t7, 0x4f($sp)
/* 004556B4 8F0C0004 */  lw    $t4, 4($t8)
.L004556B8:
/* 004556B8 24010003 */  li    $at, 3
/* 004556BC 8D820028 */  lw    $v0, 0x28($t4)
/* 004556C0 904D0000 */  lbu   $t5, ($v0)
/* 004556C4 55A10011 */  bnel  $t5, $at, .L0045570C
/* 004556C8 93AF004F */   lbu   $t7, 0x4f($sp)
/* 004556CC 90590022 */  lbu   $t9, 0x22($v0)
/* 004556D0 AFA20050 */  sw    $v0, 0x50($sp)
/* 004556D4 A3A0004F */  sb    $zero, 0x4f($sp)
/* 004556D8 1320000B */  beqz  $t9, .L00455708
/* 004556DC AFA00048 */   sw    $zero, 0x48($sp)
/* 004556E0 8F998028 */  lw    $t9, %got(func_00455060)($gp)
/* 004556E4 8D040004 */  lw    $a0, 4($t0)      /* a0 = arg1 from func_00455C48 (Intval *) */
/* 004556E8 AFA8006C */  sw    $t0, 0x6c($sp)
/* 004556EC 27395060 */  addiu $t9, %lo(func_00455060) # addiu $t9, $t9, 0x5060
/* 004556F0 AFA70038 */  sw    $a3, 0x38($sp)
/* 004556F4 0320F809 */  jalr  $t9
/* 004556F8 27A20070 */   addiu $v0, $sp, 0x70  /* Shared stack from THIS function :| */
/* 004556FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455700 8FA70038 */  lw    $a3, 0x38($sp)
/* 00455704 8FA8006C */  lw    $t0, 0x6c($sp)
.L00455708:
/* 00455708 93AF004F */  lbu   $t7, 0x4f($sp)
.L0045570C:
/* 0045570C 8FA90048 */  lw    $t1, 0x48($sp)
/* 00455710 55E0014A */  bnezl $t7, .L00455C3C
/* 00455714 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455718 11200147 */  beqz  $t1, .L00455C38
/* 0045571C 00E02025 */   move  $a0, $a3
/* 00455720 8FAA0050 */  lw    $t2, 0x50($sp)
/* 00455724 8F998028 */  lw    $t9, %got(func_00454AB8)($gp)
/* 00455728 8D03FFFC */  lw    $v1, -4($t0)           /* shared stack from analoop */
/* 0045572C 8D450014 */  lw    $a1, 0x14($t2)
/* 00455730 27394AB8 */  addiu $t9, %lo(func_00454AB8) # addiu $t9, $t9, 0x4ab8
/* 00455734 AFA8006C */  sw    $t0, 0x6c($sp)
/* 00455738 AFA70038 */  sw    $a3, 0x38($sp)
/* 0045573C 27A60058 */  addiu $a2, $sp, 0x58
/* 00455740 AFA3002C */  sw    $v1, 0x2c($sp)           /* shared stack from analoop */
/* 00455744 0320F809 */  jalr  $t9
/* 00455748 00601025 */   move  $v0, $v1           /* shared stack from analoop */
/* 0045574C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455750 10400011 */  beqz  $v0, .L00455798
/* 00455754 8FA70038 */   lw    $a3, 0x38($sp)
/* 00455758 8FA20058 */  lw    $v0, 0x58($sp)
/* 0045575C 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00455760 24010002 */  li    $at, 2
/* 00455764 8C4B0004 */  lw    $t3, 4($v0)
/* 00455768 8D780034 */  lw    $t8, 0x34($t3)
/* 0045576C ACD80020 */  sw    $t8, 0x20($a2)
/* 00455770 8C4C0004 */  lw    $t4, 4($v0)
/* 00455774 8D8D0034 */  lw    $t5, 0x34($t4)
/* 00455778 91AE0000 */  lbu   $t6, ($t5)
/* 0045577C 15C10004 */  bne   $t6, $at, .L00455790
/* 00455780 00000000 */   nop   
/* 00455784 24190001 */  li    $t9, 1
/* 00455788 10000008 */  b     .L004557AC
/* 0045578C A0D90027 */   sb    $t9, 0x27($a2)
.L00455790:
/* 00455790 10000006 */  b     .L004557AC
/* 00455794 A0C00027 */   sb    $zero, 0x27($a2)
.L00455798:
/* 00455798 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0045579C A1E00027 */  sb    $zero, 0x27($t7)
/* 004557A0 8FA9005C */  lw    $t1, 0x5c($sp)
/* 004557A4 AD200020 */  sw    $zero, 0x20($t1)
/* 004557A8 8FA6005C */  lw    $a2, 0x5c($sp)
.L004557AC:
/* 004557AC 8FAA0060 */  lw    $t2, 0x60($sp)
/* 004557B0 8CCB0014 */  lw    $t3, 0x14($a2)
/* 004557B4 8D420018 */  lw    $v0, 0x18($t2)
/* 004557B8 8C430000 */  lw    $v1, ($v0)
/* 004557BC 8C780000 */  lw    $t8, ($v1)
/* 004557C0 55780006 */  bnel  $t3, $t8, .L004557DC
/* 004557C4 8C4D0004 */   lw    $t5, 4($v0)
/* 004557C8 8C4C0004 */  lw    $t4, 4($v0)
/* 004557CC 00602025 */  move  $a0, $v1
/* 004557D0 10000004 */  b     .L004557E4
/* 004557D4 8D850000 */   lw    $a1, ($t4)
/* 004557D8 8C4D0004 */  lw    $t5, 4($v0)
.L004557DC:
/* 004557DC 00602825 */  move  $a1, $v1
/* 004557E0 8DA40000 */  lw    $a0, ($t5)
.L004557E4:
/* 004557E4 90A2000A */  lbu   $v0, 0xa($a1)
/* 004557E8 9083000A */  lbu   $v1, 0xa($a0)
/* 004557EC 10430112 */  beq   $v0, $v1, .L00455C38
/* 004557F0 0043082B */   sltu  $at, $v0, $v1
/* 004557F4 1020000F */  beqz  $at, .L00455834
/* 004557F8 00000000 */   nop   
/* 004557FC 50870009 */  beql  $a0, $a3, .L00455824
/* 00455800 90CF0000 */   lbu   $t7, ($a2)
/* 00455804 8C820018 */  lw    $v0, 0x18($a0)
/* 00455808 8C4E0004 */  lw    $t6, 4($v0)
/* 0045580C 55C0010B */  bnezl $t6, .L00455C3C
/* 00455810 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455814 8C590000 */  lw    $t9, ($v0)
/* 00455818 54F90108 */  bnel  $a3, $t9, .L00455C3C
/* 0045581C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455820 90CF0000 */  lbu   $t7, ($a2)
.L00455824:
/* 00455824 39E9007F */  xori  $t1, $t7, 0x7f
/* 00455828 2D290001 */  sltiu $t1, $t1, 1
/* 0045582C 1000000E */  b     .L00455868
/* 00455830 A0C90025 */   sb    $t1, 0x25($a2)
.L00455834:
/* 00455834 50A70009 */  beql  $a1, $a3, .L0045585C
/* 00455838 90D80000 */   lbu   $t8, ($a2)
/* 0045583C 8CA20018 */  lw    $v0, 0x18($a1)
/* 00455840 8C4A0004 */  lw    $t2, 4($v0)
/* 00455844 554000FD */  bnezl $t2, .L00455C3C
/* 00455848 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0045584C 8C4B0000 */  lw    $t3, ($v0)
/* 00455850 54EB00FA */  bnel  $a3, $t3, .L00455C3C
/* 00455854 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455858 90D80000 */  lbu   $t8, ($a2)
.L0045585C:
/* 0045585C 3B0C0026 */  xori  $t4, $t8, 0x26
/* 00455860 2D8C0001 */  sltiu $t4, $t4, 1
/* 00455864 A0CC0025 */  sb    $t4, 0x25($a2)
.L00455868:
/* 00455868 8F9986D0 */  lw    $t9, %call16(findincre)($gp)
/* 0045586C 8FA40048 */  lw    $a0, 0x48($sp)
/* 00455870 AFA70038 */  sw    $a3, 0x38($sp)
/* 00455874 0320F809 */  jalr  $t9
/* 00455878 00000000 */   nop   
/* 0045587C 8FAD005C */  lw    $t5, 0x5c($sp)
/* 00455880 AFA2003C */  sw    $v0, 0x3c($sp)
/* 00455884 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455888 91AE0027 */  lbu   $t6, 0x27($t5)
/* 0045588C 8FA70038 */  lw    $a3, 0x38($sp)
/* 00455890 51C00013 */  beql  $t6, $zero, .L004558E0
/* 00455894 24010001 */   li    $at, 1
/* 00455898 8FB90054 */  lw    $t9, 0x54($sp)
/* 0045589C 24010002 */  li    $at, 2
/* 004558A0 01A02025 */  move  $a0, $t5
/* 004558A4 8F2F0028 */  lw    $t7, 0x28($t9)
/* 004558A8 03202825 */  move  $a1, $t9
/* 004558AC 91E90000 */  lbu   $t1, ($t7)
/* 004558B0 5521000B */  bnel  $t1, $at, .L004558E0
/* 004558B4 24010001 */   li    $at, 1
/* 004558B8 8F998028 */  lw    $t9, %got(func_00454060)($gp)
/* 004558BC 00403025 */  move  $a2, $v0
/* 004558C0 8FA2002C */  lw    $v0, 0x2c($sp)           /* shared stack from analoop */
/* 004558C4 27394060 */  addiu $t9, %lo(func_00454060) # addiu $t9, $t9, 0x4060
/* 004558C8 0320F809 */  jalr  $t9
/* 004558CC AFA70038 */   sw    $a3, 0x38($sp)
/* 004558D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004558D4 10000055 */  b     .L00455A2C
/* 004558D8 8FA70038 */   lw    $a3, 0x38($sp)
/* 004558DC 24010001 */  li    $at, 1
.L004558E0:
/* 004558E0 10410004 */  beq   $v0, $at, .L004558F4
/* 004558E4 8FAA005C */   lw    $t2, 0x5c($sp)
/* 004558E8 2401FFFF */  li    $at, -1
/* 004558EC 54410005 */  bnel  $v0, $at, .L00455904
/* 004558F0 8FB80054 */   lw    $t8, 0x54($sp)
.L004558F4:
/* 004558F4 8D4B0020 */  lw    $t3, 0x20($t2)
/* 004558F8 55600012 */  bnezl $t3, .L00455944
/* 004558FC 8FA90054 */   lw    $t1, 0x54($sp)
/* 00455900 8FB80054 */  lw    $t8, 0x54($sp)
.L00455904:
/* 00455904 930C0020 */  lbu   $t4, 0x20($t8)
/* 00455908 258EFFE0 */  addiu $t6, $t4, -0x20
/* 0045590C 2DCF0040 */  sltiu $t7, $t6, 0x40
/* 00455910 11E00009 */  beqz  $t7, .L00455938
/* 00455914 00000000 */   nop   
/* 00455918 8F998044 */  lw    $t9, %got(D_10010C74)($gp)
/* 0045591C 000E4943 */  sra   $t1, $t6, 5
/* 00455920 00096880 */  sll   $t5, $t1, 2
/* 00455924 27390C74 */  addiu $t9, %lo(D_10010C74) # addiu $t9, $t9, 0xc74
/* 00455928 032D5021 */  addu  $t2, $t9, $t5
/* 0045592C 8D4B0000 */  lw    $t3, ($t2)
/* 00455930 01CBC004 */  sllv  $t8, $t3, $t6
/* 00455934 2B0F0000 */  slti  $t7, $t8, 0
.L00455938:
/* 00455938 51E0003D */  beql  $t7, $zero, .L00455A30
/* 0045593C 8FAD005C */   lw    $t5, 0x5c($sp)
/* 00455940 8FA90054 */  lw    $t1, 0x54($sp)
.L00455944:
/* 00455944 8FAD0050 */  lw    $t5, 0x50($sp)
/* 00455948 8FB9006C */  lw    $t9, 0x6c($sp)
/* 0045594C 8D250024 */  lw    $a1, 0x24($t1)
/* 00455950 8F240004 */  lw    $a0, 4($t9)      /* a0 = arg1 from func_00455C48 (Intval *) */
/* 00455954 15A5001C */  bne   $t5, $a1, .L004559C8
/* 00455958 00000000 */   nop   
/* 0045595C 8F998028 */  lw    $t9, %got(func_00454F00)($gp)
/* 00455960 8D250028 */  lw    $a1, 0x28($t1)
/* 00455964 AFA70038 */  sw    $a3, 0x38($sp)
/* 00455968 27394F00 */  addiu $t9, %lo(func_00454F00) # addiu $t9, $t9, 0x4f00
/* 0045596C 0320F809 */  jalr  $t9
/* 00455970 27A20070 */   addiu $v0, $sp, 0x70  /* Shared stack from THIS function :| */
/* 00455974 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455978 1040002C */  beqz  $v0, .L00455A2C
/* 0045597C 8FA70038 */   lw    $a3, 0x38($sp)
/* 00455980 8F998028 */  lw    $t9, %got(func_00454920)($gp)
/* 00455984 8FAA003C */  lw    $t2, 0x3c($sp)
/* 00455988 8FA4005C */  lw    $a0, 0x5c($sp)
/* 0045598C 27394920 */  addiu $t9, %lo(func_00454920) # addiu $t9, $t9, 0x4920
/* 00455990 8FA50054 */  lw    $a1, 0x54($sp)
/* 00455994 8FA60050 */  lw    $a2, 0x50($sp)
/* 00455998 8FA2002C */  lw    $v0, 0x2c($sp)
/* 0045599C AFA70038 */  sw    $a3, 0x38($sp)
/* 004559A0 0320F809 */  jalr  $t9
/* 004559A4 AFAA0010 */   sw    $t2, 0x10($sp)
/* 004559A8 8FAE005C */  lw    $t6, 0x5c($sp)
/* 004559AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004559B0 8FA70038 */  lw    $a3, 0x38($sp)
/* 004559B4 240B0001 */  li    $t3, 1
/* 004559B8 A1CB0026 */  sb    $t3, 0x26($t6)
/* 004559BC 8FB8005C */  lw    $t8, 0x5c($sp)
/* 004559C0 1000001A */  b     .L00455A2C
/* 004559C4 A3000027 */   sb    $zero, 0x27($t8)
.L004559C8:
/* 004559C8 8F998028 */  lw    $t9, %got(func_00454F00)($gp)
/* 004559CC 27A20070 */  addiu $v0, $sp, 0x70  /* Shared stack from THIS function :| */
/* 004559D0 AFA70038 */  sw    $a3, 0x38($sp)
/* 004559D4 27394F00 */  addiu $t9, %lo(func_00454F00) # addiu $t9, $t9, 0x4f00
/* 004559D8 0320F809 */  jalr  $t9
/* 004559DC 00000000 */   nop   
/* 004559E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004559E4 10400011 */  beqz  $v0, .L00455A2C
/* 004559E8 8FA70038 */   lw    $a3, 0x38($sp)
/* 004559EC 8F998028 */  lw    $t9, %got(func_00454920)($gp)
/* 004559F0 8FAC003C */  lw    $t4, 0x3c($sp)
/* 004559F4 8FA4005C */  lw    $a0, 0x5c($sp)
/* 004559F8 27394920 */  addiu $t9, %lo(func_00454920) # addiu $t9, $t9, 0x4920
/* 004559FC 8FA50054 */  lw    $a1, 0x54($sp)
/* 00455A00 8FA60050 */  lw    $a2, 0x50($sp)
/* 00455A04 8FA2002C */  lw    $v0, 0x2c($sp)
/* 00455A08 AFA70038 */  sw    $a3, 0x38($sp)
/* 00455A0C 0320F809 */  jalr  $t9
/* 00455A10 AFAC0010 */   sw    $t4, 0x10($sp)
/* 00455A14 8FAF005C */  lw    $t7, 0x5c($sp)
/* 00455A18 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455A1C 8FA70038 */  lw    $a3, 0x38($sp)
/* 00455A20 A1E00026 */  sb    $zero, 0x26($t7)
/* 00455A24 8FB9005C */  lw    $t9, 0x5c($sp)
/* 00455A28 A3200027 */  sb    $zero, 0x27($t9)
.L00455A2C:
/* 00455A2C 8FAD005C */  lw    $t5, 0x5c($sp)
.L00455A30:
/* 00455A30 8DA9001C */  lw    $t1, 0x1c($t5)
/* 00455A34 51200081 */  beql  $t1, $zero, .L00455C3C
/* 00455A38 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455A3C 90EA000B */  lbu   $t2, 0xb($a3)
/* 00455A40 8FAD0060 */  lw    $t5, 0x60($sp)
/* 00455A44 000A7640 */  sll   $t6, $t2, 0x19
/* 00455A48 05C10007 */  bgez  $t6, .L00455A68
/* 00455A4C 00000000 */   nop   
/* 00455A50 8CF8001C */  lw    $t8, 0x1c($a3)
/* 00455A54 8F0C000C */  lw    $t4, 0xc($t8)
/* 00455A58 918F0014 */  lbu   $t7, 0x14($t4)
/* 00455A5C 31F90001 */  andi  $t9, $t7, 1
/* 00455A60 1720004C */  bnez  $t9, .L00455B94
/* 00455A64 00000000 */   nop   
.L00455A68:
/* 00455A68 11A7002D */  beq   $t5, $a3, .L00455B20
/* 00455A6C 8FA9006C */   lw    $t1, 0x6c($sp)
/* 00455A70 8D2A0000 */  lw    $t2, ($t1)      /* t2 = arg0 from func_00455C48 (Intval *) */
/* 00455A74 27A20070 */  addiu $v0, $sp, 0x70  /* Shared stack from THIS function :| */
/* 00455A78 8D4B0004 */  lw    $t3, 4($t2)
/* 00455A7C 15600045 */  bnez  $t3, .L00455B94
/* 00455A80 00000000 */   nop   
/* 00455A84 8F998028 */  lw    $t9, %got(func_00455354)($gp)
/* 00455A88 8D240004 */  lw    $a0, 4($t1)
/* 00455A8C AFA70038 */  sw    $a3, 0x38($sp)
/* 00455A90 27395354 */  addiu $t9, %lo(func_00455354) # addiu $t9, $t9, 0x5354
/* 00455A94 0320F809 */  jalr  $t9
/* 00455A98 AFA40034 */   sw    $a0, 0x34($sp)
/* 00455A9C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455AA0 8FA40034 */  lw    $a0, 0x34($sp)
/* 00455AA4 1440003B */  bnez  $v0, .L00455B94
/* 00455AA8 8FA70038 */   lw    $a3, 0x38($sp)
/* 00455AAC 8FAE0060 */  lw    $t6, 0x60($sp)
/* 00455AB0 8F998028 */  lw    $t9, %got(func_00455418)($gp)
/* 00455AB4 94E50008 */  lhu   $a1, 8($a3)
/* 00455AB8 95C60008 */  lhu   $a2, 8($t6)
/* 00455ABC 27395418 */  addiu $t9, %lo(func_00455418) # addiu $t9, $t9, 0x5418
/* 00455AC0 AFA70038 */  sw    $a3, 0x38($sp)
/* 00455AC4 0320F809 */  jalr  $t9
/* 00455AC8 27A20070 */   addiu $v0, $sp, 0x70  /* Shared stack from THIS function :| */
/* 00455ACC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455AD0 10400030 */  beqz  $v0, .L00455B94
/* 00455AD4 8FA70038 */   lw    $a3, 0x38($sp)
/* 00455AD8 8FA20050 */  lw    $v0, 0x50($sp)
/* 00455ADC 3C016000 */  lui   $at, 0x6000
/* 00455AE0 9058002E */  lbu   $t8, 0x2e($v0)
/* 00455AE4 330C0007 */  andi  $t4, $t8, 7
/* 00455AE8 2D8F0020 */  sltiu $t7, $t4, 0x20
/* 00455AEC 000FC823 */  negu  $t9, $t7
/* 00455AF0 03216824 */  and   $t5, $t9, $at
/* 00455AF4 018D5004 */  sllv  $t2, $t5, $t4
/* 00455AF8 0542000A */  bltzl $t2, .L00455B24
/* 00455AFC 8CE30014 */   lw    $v1, 0x14($a3)
/* 00455B00 8F998494 */  lw    $t9, %call16(in_fsym)($gp)
/* 00455B04 8C44002C */  lw    $a0, 0x2c($v0)
/* 00455B08 AFA70038 */  sw    $a3, 0x38($sp)
/* 00455B0C 0320F809 */  jalr  $t9
/* 00455B10 000422C2 */   srl   $a0, $a0, 0xb
/* 00455B14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455B18 1040001E */  beqz  $v0, .L00455B94
/* 00455B1C 8FA70038 */   lw    $a3, 0x38($sp)
.L00455B20:
/* 00455B20 8CE30014 */  lw    $v1, 0x14($a3)
.L00455B24:
/* 00455B24 8FAE0060 */  lw    $t6, 0x60($sp)
/* 00455B28 8C6B0004 */  lw    $t3, 4($v1)
/* 00455B2C 8D690004 */  lw    $t1, 4($t3)
/* 00455B30 15200018 */  bnez  $t1, .L00455B94
/* 00455B34 00000000 */   nop   
/* 00455B38 8C640000 */  lw    $a0, ($v1)
/* 00455B3C 00601025 */  move  $v0, $v1
/* 00455B40 55C4000B */  bnel  $t6, $a0, .L00455B70
/* 00455B44 8C8C0018 */   lw    $t4, 0x18($a0)
/* 00455B48 8C620004 */  lw    $v0, 4($v1)
/* 00455B4C 240D0002 */  li    $t5, 2
/* 00455B50 8C580000 */  lw    $t8, ($v0)
/* 00455B54 8F0F0018 */  lw    $t7, 0x18($t8)
/* 00455B58 8DF90004 */  lw    $t9, 4($t7)
/* 00455B5C 1720000D */  bnez  $t9, .L00455B94
/* 00455B60 00000000 */   nop   
/* 00455B64 1000000B */  b     .L00455B94
/* 00455B68 A0ED0005 */   sb    $t5, 5($a3)
/* 00455B6C 8C8C0018 */  lw    $t4, 0x18($a0)
.L00455B70:
/* 00455B70 8D8A0004 */  lw    $t2, 4($t4)
/* 00455B74 15400007 */  bnez  $t2, .L00455B94
/* 00455B78 00000000 */   nop   
/* 00455B7C 8C4B0004 */  lw    $t3, 4($v0)
/* 00455B80 240E0002 */  li    $t6, 2
/* 00455B84 8D690000 */  lw    $t1, ($t3)
/* 00455B88 14E90002 */  bne   $a3, $t1, .L00455B94
/* 00455B8C 00000000 */   nop   
/* 00455B90 A0EE0005 */  sb    $t6, 5($a3)
.L00455B94:
/* 00455B94 8F988A64 */  lw     $t8, %got(listwritten)($gp)
/* 00455B98 2406000E */  li    $a2, 14
/* 00455B9C 93180000 */  lbu   $t8, ($t8)
/* 00455BA0 53000026 */  beql  $t8, $zero, .L00455C3C
/* 00455BA4 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00455BA8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00455BAC 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00455BB0 8F858044 */  lw    $a1, %got(RO_1000CF54)($gp)
/* 00455BB4 2407000E */  li    $a3, 14
/* 00455BB8 8C840000 */  lw    $a0, ($a0)
/* 00455BBC 0320F809 */  jalr  $t9
/* 00455BC0 24A5CF54 */   addiu $a1, %lo(RO_1000CF54) # addiu $a1, $a1, -0x30ac
/* 00455BC4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455BC8 8FAF0060 */  lw    $t7, 0x60($sp)
/* 00455BCC 2406000C */  li    $a2, 12
/* 00455BD0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00455BD4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00455BD8 2407000A */  li    $a3, 10
/* 00455BDC 95E50008 */  lhu   $a1, 8($t7)
/* 00455BE0 0320F809 */  jalr  $t9
/* 00455BE4 8C840000 */   lw    $a0, ($a0)
/* 00455BE8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455BEC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00455BF0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00455BF4 0320F809 */  jalr  $t9
/* 00455BF8 8C840000 */   lw    $a0, ($a0)
/* 00455BFC 1000000E */  b     .L00455C38
/* 00455C00 8FBC0020 */   lw    $gp, 0x20($sp)
.L00455C04:
/* 00455C04 00A01825 */  move  $v1, $a1
/* 00455C08 AFA8006C */  sw    $t0, 0x6c($sp)
.L00455C0C:
/* 00455C0C 8F998028 */  lw    $t9, %got(func_00455518)($gp)
/* 00455C10 8FA2006C */  lw    $v0, 0x6c($sp)
/* 00455C14 8C640000 */  lw    $a0, ($v1)
/* 00455C18 27395518 */  addiu $t9, %lo(func_00455518) # addiu $t9, $t9, 0x5518
/* 00455C1C 0320F809 */  jalr  $t9
/* 00455C20 AFA30068 */   sw    $v1, 0x68($sp)
/* 00455C24 8FA30068 */  lw    $v1, 0x68($sp)
/* 00455C28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455C2C 8C630004 */  lw    $v1, 4($v1)
/* 00455C30 1460FFF6 */  bnez  $v1, .L00455C0C
/* 00455C34 00000000 */   nop   
.L00455C38:
/* 00455C38 8FBF0024 */  lw    $ra, 0x24($sp)
.L00455C3C:
/* 00455C3C 27BD0070 */  addiu $sp, $sp, 0x70
/* 00455C40 03E00008 */  jr    $ra
/* 00455C44 00000000 */   nop   

# 0x3c(sp): a1
# 0x38(sp): a0 | top of stack
# 0x34(sp): v0 / analoop sp90
    .type func_00455C48, @function
func_00455C48:
    # 00455C48 func_00455C48
    # 00455D38 analoop
/* 00455C48 3C1C0FBC */  .cpload $t9
/* 00455C4C 279C4648 */  
/* 00455C50 0399E021 */  
/* 00455C54 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00455C58 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00455C5C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00455C60 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00455C64 AFB10018 */  sw    $s1, 0x18($sp)
/* 00455C68 AFB00014 */  sw    $s0, 0x14($sp)
/* 00455C6C AFA5003C */  sw    $a1, 0x3c($sp)
/* 00455C70 1080002B */  beqz  $a0, .L00455D20
/* 00455C74 AFA20034 */   sw    $v0, 0x34($sp)
/* 00455C78 908E0028 */  lbu   $t6, 0x28($a0)
/* 00455C7C 24120003 */  li    $s2, 3
/* 00455C80 564E001C */  bnel  $s2, $t6, .L00455CF4
/* 00455C84 8FA8003C */   lw    $t0, 0x3c($sp)
/* 00455C88 8F998028 */  lw    $t9, %got(func_00453E58)($gp)
/* 00455C8C AFA40038 */  sw    $a0, 0x38($sp)
/* 00455C90 27393E58 */  addiu $t9, %lo(func_00453E58) # addiu $t9, $t9, 0x3e58
/* 00455C94 0320F809 */  jalr  $t9
/* 00455C98 00000000 */   nop   
/* 00455C9C AFA20030 */  sw    $v0, 0x30($sp)
/* 00455CA0 904F0004 */  lbu   $t7, 4($v0)
/* 00455CA4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455CA8 8FB8003C */  lw    $t8, 0x3c($sp)
/* 00455CAC 15E00010 */  bnez  $t7, .L00455CF0
/* 00455CB0 27B10038 */   addiu $s1, $sp, 0x38  /* Passes THIS function's stack, not analoop's */
/* 00455CB4 8F100004 */  lw    $s0, 4($t8)
/* 00455CB8 8E050000 */  lw    $a1, ($s0)
.L00455CBC:
/* 00455CBC 90B90028 */  lbu   $t9, 0x28($a1)
/* 00455CC0 56590009 */  bnel  $s2, $t9, .L00455CE8
/* 00455CC4 8E100004 */   lw    $s0, 4($s0)
/* 00455CC8 8F998028 */  lw    $t9, %got(func_00455518)($gp)
/* 00455CCC 00A02025 */  move  $a0, $a1
/* 00455CD0 02201025 */  move  $v0, $s1
/* 00455CD4 27395518 */  addiu $t9, %lo(func_00455518) # addiu $t9, $t9, 0x5518
/* 00455CD8 0320F809 */  jalr  $t9
/* 00455CDC 00000000 */   nop   
/* 00455CE0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455CE4 8E100004 */  lw    $s0, 4($s0)
.L00455CE8:
/* 00455CE8 5600FFF4 */  bnezl $s0, .L00455CBC
/* 00455CEC 8E050000 */   lw    $a1, ($s0)
.L00455CF0:
/* 00455CF0 8FA8003C */  lw    $t0, 0x3c($sp)
.L00455CF4:
/* 00455CF4 8D100004 */  lw    $s0, 4($t0)
.L00455CF8:
/* 00455CF8 8F998028 */  lw    $t9, %got(func_00455C48)($gp)
/* 00455CFC 8E050000 */  lw    $a1, ($s0)
/* 00455D00 8FA20034 */  lw    $v0, 0x34($sp)
/* 00455D04 27395C48 */  addiu $t9, %lo(func_00455C48) # addiu $t9, $t9, 0x5c48
/* 00455D08 0320F809 */  jalr  $t9
/* 00455D0C 8CA4000C */   lw    $a0, 0xc($a1)
/* 00455D10 8E100004 */  lw    $s0, 4($s0)
/* 00455D14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00455D18 1600FFF7 */  bnez  $s0, .L00455CF8
/* 00455D1C 00000000 */   nop   
.L00455D20:
/* 00455D20 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00455D24 8FB00014 */  lw    $s0, 0x14($sp)
/* 00455D28 8FB10018 */  lw    $s1, 0x18($sp)
/* 00455D2C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00455D30 03E00008 */  jr    $ra
/* 00455D34 27BD0038 */   addiu $sp, $sp, 0x38

glabel analoop
    .ent analoop
    # 00456A2C oneproc
/* 00455D38 3C1C0FBC */  .cpload $t9
/* 00455D3C 279C4558 */  
/* 00455D40 0399E021 */  
/* 00455D44 8F8E89B8 */  lw     $t6, %got(curstaticno)($gp)
/* 00455D48 27BDFF70 */  addiu $sp, $sp, -0x90
/* 00455D4C 8F818A50 */  lw     $at, %got(bvlivransize)($gp)
/* 00455D50 8DCE0000 */  lw    $t6, ($t6)
/* 00455D54 AFB60034 */  sw    $s6, 0x34($sp)
/* 00455D58 8F9688E4 */  lw     $s6, %got(intv_heap)($gp)
/* 00455D5C 25CFFFFF */  addiu $t7, $t6, -1
/* 00455D60 000FC1C2 */  srl   $t8, $t7, 7
/* 00455D64 27190001 */  addiu $t9, $t8, 1
/* 00455D68 AC390000 */  sw    $t9, ($at)
/* 00455D6C 8F9988C8 */  lw    $t9, %call16(alloc_mark)($gp)
/* 00455D70 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00455D74 AFBC0038 */  sw    $gp, 0x38($sp)
/* 00455D78 AFB50030 */  sw    $s5, 0x30($sp)
/* 00455D7C AFB4002C */  sw    $s4, 0x2c($sp)
/* 00455D80 AFB30028 */  sw    $s3, 0x28($sp)
/* 00455D84 AFB20024 */  sw    $s2, 0x24($sp)
/* 00455D88 AFB10020 */  sw    $s1, 0x20($sp)
/* 00455D8C AFB0001C */  sw    $s0, 0x1c($sp)
/* 00455D90 0320F809 */  jalr  $t9
/* 00455D94 02C02025 */   move  $a0, $s6
/* 00455D98 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455D9C AFA2006C */  sw    $v0, 0x6c($sp)
/* 00455DA0 2404002C */  li    $a0, 44
/* 00455DA4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00455DA8 02C02825 */  move  $a1, $s6
/* 00455DAC 0320F809 */  jalr  $t9
/* 00455DB0 00000000 */   nop   
/* 00455DB4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455DB8 AFA20088 */  sw    $v0, 0x88($sp)
/* 00455DBC AC40000C */  sw    $zero, 0xc($v0)
/* 00455DC0 8F8389AC */  lw     $v1, %got(graphhead)($gp)
/* 00455DC4 8F948A38 */  lw     $s4, %got(numintval)($gp)
/* 00455DC8 24080001 */  li    $t0, 1
/* 00455DCC 8C630000 */  lw    $v1, ($v1)
/* 00455DD0 AC40001C */  sw    $zero, 0x1c($v0)
/* 00455DD4 AC400004 */  sw    $zero, 4($v0)
/* 00455DD8 AC400008 */  sw    $zero, 8($v0)
/* 00455DDC AC400020 */  sw    $zero, 0x20($v0)
/* 00455DE0 AC400024 */  sw    $zero, 0x24($v0)
/* 00455DE4 A0400028 */  sb    $zero, 0x28($v0)
/* 00455DE8 A040002A */  sb    $zero, 0x2a($v0)
/* 00455DEC A0400029 */  sb    $zero, 0x29($v0)
/* 00455DF0 AC430000 */  sw    $v1, ($v0)
/* 00455DF4 8C73000C */  lw    $s3, 0xc($v1)
/* 00455DF8 00409025 */  move  $s2, $v0
/* 00455DFC AE880000 */  sw    $t0, ($s4) # s4 = numintval
/* 00455E00 52600025 */  beql  $s3, $zero, .L00455E98
/* 00455E04 AC400018 */   sw    $zero, 0x18($v0)
.L00455E08:
/* 00455E08 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00455E0C 2404002C */  li    $a0, 44
/* 00455E10 02C02825 */  move  $a1, $s6
/* 00455E14 0320F809 */  jalr  $t9
/* 00455E18 00000000 */   nop   
/* 00455E1C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455E20 AE420018 */  sw    $v0, 0x18($s2)
/* 00455E24 AC40000C */  sw    $zero, 0xc($v0)
/* 00455E28 AC530000 */  sw    $s3, ($v0)
/* 00455E2C AC40001C */  sw    $zero, 0x1c($v0)
/* 00455E30 8E700014 */  lw    $s0, 0x14($s3)
/* 00455E34 00409025 */  move  $s2, $v0
/* 00455E38 52000008 */  beql  $s0, $zero, .L00455E5C
/* 00455E3C AC400004 */   sw    $zero, 4($v0)
/* 00455E40 8C49001C */  lw    $t1, 0x1c($v0)
.L00455E44:
/* 00455E44 252A0001 */  addiu $t2, $t1, 1
/* 00455E48 AC4A001C */  sw    $t2, 0x1c($v0)
/* 00455E4C 8E100004 */  lw    $s0, 4($s0)
/* 00455E50 5600FFFC */  bnezl $s0, .L00455E44
/* 00455E54 8C49001C */   lw    $t1, 0x1c($v0)
/* 00455E58 AC400004 */  sw    $zero, 4($v0)
.L00455E5C:
/* 00455E5C AC400008 */  sw    $zero, 8($v0)
/* 00455E60 AC400020 */  sw    $zero, 0x20($v0)
/* 00455E64 AC400024 */  sw    $zero, 0x24($v0)
/* 00455E68 A0400028 */  sb    $zero, 0x28($v0)
/* 00455E6C A040002A */  sb    $zero, 0x2a($v0)
/* 00455E70 926B0004 */  lbu   $t3, 4($s3)
/* 00455E74 A04B0029 */  sb    $t3, 0x29($v0)
/* 00455E78 8E8C0000 */  lw    $t4, ($s4) # numintval
/* 00455E7C 8E73000C */  lw    $s3, 0xc($s3)
/* 00455E80 258D0001 */  addiu $t5, $t4, 1
/* 00455E84 1660FFE0 */  bnez  $s3, .L00455E08
/* 00455E88 AE8D0000 */   sw    $t5, ($s4) # numintval
/* 00455E8C 8F8389AC */  lw     $v1, %got(graphhead)($gp)
/* 00455E90 8C630000 */  lw    $v1, ($v1)
/* 00455E94 AC400018 */  sw    $zero, 0x18($v0)
.L00455E98:
/* 00455E98 8FB20088 */  lw    $s2, 0x88($sp)
/* 00455E9C 00609825 */  move  $s3, $v1
/* 00455EA0 27B50090 */  addiu $s5, $sp, 0x90
/* 00455EA4 52400066 */  beql  $s2, $zero, .L00456040
/* 00455EA8 27B50090 */   addiu $s5, $sp, 0x90
/* 00455EAC 8E6F0018 */  lw    $t7, 0x18($s3)
.L00455EB0:
/* 00455EB0 15E00003 */  bnez  $t7, .L00455EC0
/* 00455EB4 00000000 */   nop   
/* 00455EB8 1000002C */  b     .L00455F6C
/* 00455EBC AE400010 */   sw    $zero, 0x10($s2)
.L00455EC0:
/* 00455EC0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00455EC4 24040008 */  li    $a0, 8
/* 00455EC8 02C02825 */  move  $a1, $s6
/* 00455ECC 0320F809 */  jalr  $t9
/* 00455ED0 00000000 */   nop   
/* 00455ED4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455ED8 AE420010 */  sw    $v0, 0x10($s2)
/* 00455EDC 8E780018 */  lw    $t8, 0x18($s3)
/* 00455EE0 8F998028 */  lw    $t9, %got(func_00454038)($gp)
/* 00455EE4 02A01025 */  lw    $a1, 0x88($sp) #move  $v0, $s5
/* 00455EE8 8F040000 */  lw    $a0, ($t8)
/* 00455EEC 27394038 */  addiu $t9, %lo(func_00454038) # addiu $t9, $t9, 0x4038
/* 00455EF0 0320F809 */  jalr  $t9
/* 00455EF4 00000000 */   nop   
/* 00455EF8 8E590010 */  lw    $t9, 0x10($s2)
/* 00455EFC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455F00 AF220000 */  sw    $v0, ($t9)
/* 00455F04 8E680018 */  lw    $t0, 0x18($s3)
/* 00455F08 8E510010 */  lw    $s1, 0x10($s2)
/* 00455F0C 8D100004 */  lw    $s0, 4($t0)
/* 00455F10 52000016 */  beql  $s0, $zero, .L00455F6C
/* 00455F14 AE200004 */   sw    $zero, 4($s1)
.L00455F18:
/* 00455F18 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00455F1C 24040008 */  li    $a0, 8
/* 00455F20 02C02825 */  move  $a1, $s6
/* 00455F24 0320F809 */  jalr  $t9
/* 00455F28 00000000 */   nop   
/* 00455F2C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455F30 AE220004 */  sw    $v0, 4($s1)
/* 00455F34 8E040000 */  lw    $a0, ($s0)
/* 00455F38 8F998028 */  lw    $t9, %got(func_00454038)($gp)
/* 00455F3C 02A01025 */  lw    $a1, 0x88($sp) #move  $v0, $s5
/* 00455F40 27394038 */  addiu $t9, %lo(func_00454038) # addiu $t9, $t9, 0x4038
/* 00455F44 0320F809 */  jalr  $t9
/* 00455F48 00000000 */   nop   
/* 00455F4C 8E290004 */  lw    $t1, 4($s1)
/* 00455F50 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455F54 AD220000 */  sw    $v0, ($t1)
/* 00455F58 8E100004 */  lw    $s0, 4($s0)
/* 00455F5C 8E310004 */  lw    $s1, 4($s1)
/* 00455F60 1600FFED */  bnez  $s0, .L00455F18
/* 00455F64 00000000 */   nop   
/* 00455F68 AE200004 */  sw    $zero, 4($s1)
.L00455F6C:
/* 00455F6C 8E6A0014 */  lw    $t2, 0x14($s3)
/* 00455F70 15400003 */  bnez  $t2, .L00455F80
/* 00455F74 00000000 */   nop   
/* 00455F78 1000002C */  b     .L0045602C
/* 00455F7C AE400014 */   sw    $zero, 0x14($s2)
.L00455F80:
/* 00455F80 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00455F84 24040008 */  li    $a0, 8
/* 00455F88 02C02825 */  move  $a1, $s6
/* 00455F8C 0320F809 */  jalr  $t9
/* 00455F90 00000000 */   nop   
/* 00455F94 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455F98 AE420014 */  sw    $v0, 0x14($s2)
/* 00455F9C 8E6B0014 */  lw    $t3, 0x14($s3)
/* 00455FA0 8F998028 */  lw    $t9, %got(func_00454038)($gp)
/* 00455FA4 02A01025 */  lw    $a1, 0x88($sp) #move  $v0, $s5
/* 00455FA8 8D640000 */  lw    $a0, ($t3)
/* 00455FAC 27394038 */  addiu $t9, %lo(func_00454038) # addiu $t9, $t9, 0x4038
/* 00455FB0 0320F809 */  jalr  $t9
/* 00455FB4 00000000 */   nop   
/* 00455FB8 8E4C0014 */  lw    $t4, 0x14($s2)
/* 00455FBC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455FC0 AD820000 */  sw    $v0, ($t4)
/* 00455FC4 8E6D0014 */  lw    $t5, 0x14($s3)
/* 00455FC8 8E510014 */  lw    $s1, 0x14($s2)
/* 00455FCC 8DB00004 */  lw    $s0, 4($t5)
/* 00455FD0 52000016 */  beql  $s0, $zero, .L0045602C
/* 00455FD4 AE200004 */   sw    $zero, 4($s1)
.L00455FD8:
/* 00455FD8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00455FDC 24040008 */  li    $a0, 8
/* 00455FE0 02C02825 */  move  $a1, $s6
/* 00455FE4 0320F809 */  jalr  $t9
/* 00455FE8 00000000 */   nop   
/* 00455FEC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00455FF0 AE220004 */  sw    $v0, 4($s1)
/* 00455FF4 8E040000 */  lw    $a0, ($s0)
/* 00455FF8 8F998028 */  lw    $t9, %got(func_00454038)($gp)
/* 00455FFC 02A01025 */  lw    $a1, 0x88($sp) #move  $v0, $s5
/* 00456000 27394038 */  addiu $t9, %lo(func_00454038) # addiu $t9, $t9, 0x4038
/* 00456004 0320F809 */  jalr  $t9
/* 00456008 00000000 */   nop   
/* 0045600C 8E2E0004 */  lw    $t6, 4($s1)
/* 00456010 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00456014 ADC20000 */  sw    $v0, ($t6)
/* 00456018 8E100004 */  lw    $s0, 4($s0)
/* 0045601C 8E310004 */  lw    $s1, 4($s1)
/* 00456020 1600FFED */  bnez  $s0, .L00455FD8
/* 00456024 00000000 */   nop   
/* 00456028 AE200004 */  sw    $zero, 4($s1)
.L0045602C:
/* 0045602C 8E520018 */  lw    $s2, 0x18($s2)
/* 00456030 8E73000C */  lw    $s3, 0xc($s3)
/* 00456034 5640FF9E */  bnezl $s2, .L00455EB0
/* 00456038 8E6F0018 */   lw    $t7, 0x18($s3)
/* 0045603C 27B50090 */  addiu $s5, $sp, 0x90
.L00456040:
/* 00456040 8E900000 */  lw    $s0, ($s4) # numintval
.L00456044:
/* 00456044 8F998028 */  lw    $t9, %got(func_00453430)($gp)
/* 00456048 02008825 */  move  $s1, $s0
/* 0045604C 8FA40088 */  lw    $a0, 0x88($sp)
/* 00456050 27393430 */  addiu $t9, %lo(func_00453430) # addiu $t9, $t9, 0x3430
/* 00456054 0320F809 */  jalr  $t9
/* 00456058 02A01025 */   move  $v0, $s5
/* 0045605C 8E900000 */  lw    $s0, ($s4) # numintval
/* 00456060 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00456064 AFA20088 */  sw    $v0, 0x88($sp)
/* 00456068 12300003 */  beq   $s1, $s0, .L00456078
/* 0045606C 24010001 */   li    $at, 1
/* 00456070 1601FFF4 */  bne   $s0, $at, .L00456044
/* 00456074 00000000 */   nop   
.L00456078:
/* 00456078 00409025 */  move  $s2, $v0
/* 0045607C 24100001 */  li    $s0, 1
.L00456080:
/* 00456080 8F998028 */  lw    $t9, %got(func_00453ECC)($gp)
/* 00456084 A250002A */  sb    $s0, 0x2a($s2)
/* 00456088 8E44000C */  lw    $a0, 0xc($s2)
/* 0045608C 27393ECC */  addiu $t9, %lo(func_00453ECC) # addiu $t9, $t9, 0x3ecc
/* 00456090 02402825 */  move  $a1, $s2
/* 00456094 0320F809 */  jalr  $t9
/* 00456098 02A01025 */   move  $v0, $s5
/* 0045609C 8E520018 */  lw    $s2, 0x18($s2)
/* 004560A0 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004560A4 1640FFF6 */  bnez  $s2, .L00456080
/* 004560A8 00000000 */   nop   
/* 004560AC 8F8F89AC */  lw     $t7, %got(graphhead)($gp)
/* 004560B0 00008025 */  move  $s0, $zero
/* 004560B4 8DEF0000 */  lw    $t7, ($t7)
/* 004560B8 A1E0000A */  sb    $zero, 0xa($t7)
/* 004560BC 8FB20088 */  lw    $s2, 0x88($sp)
.L004560C0:
/* 004560C0 8F998028 */  lw    $t9, %got(func_00453C20)($gp)
/* 004560C4 02402025 */  move  $a0, $s2
/* 004560C8 02002825 */  move  $a1, $s0
/* 004560CC 27393C20 */  addiu $t9, %lo(func_00453C20) # addiu $t9, $t9, 0x3c20
/* 004560D0 0320F809 */  jalr  $t9
/* 004560D4 02A01025 */   move  $v0, $s5
/* 004560D8 8E520018 */  lw    $s2, 0x18($s2)
/* 004560DC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004560E0 1640FFF7 */  bnez  $s2, .L004560C0
/* 004560E4 00000000 */   nop   
/* 004560E8 8F8389AC */  lw     $v1, %got(graphhead)($gp)
/* 004560EC 26100001 */  addiu $s0, $s0, 1
/* 004560F0 8C630000 */  lw    $v1, ($v1)
/* 004560F4 9078000A */  lbu   $t8, 0xa($v1)
/* 004560F8 5300FFF1 */  beql  $t8, $zero, .L004560C0
/* 004560FC 8FB20088 */   lw    $s2, 0x88($sp)
/* 00456100 1060002E */  beqz  $v1, .L004561BC
/* 00456104 00609825 */   move  $s3, $v1
/* 00456108 27B00048 */  addiu $s0, $sp, 0x48
.L0045610C:
/* 0045610C 8F9981E8 */  lw    $t9, %call16(checkinitbvlivran)($gp)
/* 00456110 26710164 */  addiu $s1, $s3, 0x164
/* 00456114 AE600164 */  sw    $zero, 0x164($s3)
/* 00456118 AE600168 */  sw    $zero, 0x168($s3)
/* 0045611C 0320F809 */  jalr  $t9
/* 00456120 02202025 */   move  $a0, $s1
/* 00456124 8E790014 */  lw    $t9, 0x14($s3)
/* 00456128 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0045612C 13200006 */  beqz  $t9, .L00456148
/* 00456130 00000000 */   nop   
/* 00456134 92680004 */  lbu   $t0, 4($s3)
/* 00456138 2409FFFF */  li    $t1, -1
/* 0045613C 240AFFFF */  li    $t2, -1
/* 00456140 11000008 */  beqz  $t0, .L00456164
/* 00456144 240BFFFF */   li    $t3, -1
.L00456148:
/* 00456148 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 0045614C 02202025 */  move  $a0, $s1
/* 00456150 96650008 */  lhu   $a1, 8($s3)
/* 00456154 0320F809 */  jalr  $t9
/* 00456158 00000000 */   nop   
/* 0045615C 10000014 */  b     .L004561B0
/* 00456160 8FBC0038 */   lw    $gp, 0x38($sp)
.L00456164:
/* 00456164 240CFFFF */  li    $t4, -1
/* 00456168 AFAC0054 */  sw    $t4, 0x54($sp)
/* 0045616C AFA90048 */  sw    $t1, 0x48($sp)
/* 00456170 AFAA004C */  sw    $t2, 0x4c($sp)
/* 00456174 AFAB0050 */  sw    $t3, 0x50($sp)
/* 00456178 8E0E0000 */  lw    $t6, ($s0)
/* 0045617C 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00456180 02202025 */  move  $a0, $s1
/* 00456184 AFAE0004 */  sw    $t6, 4($sp)
/* 00456188 8E0D0004 */  lw    $t5, 4($s0)
/* 0045618C 8FA50004 */  lw    $a1, 4($sp)
/* 00456190 AFAD0008 */  sw    $t5, 8($sp)
/* 00456194 8E070008 */  lw    $a3, 8($s0)
/* 00456198 8FA60008 */  lw    $a2, 8($sp)
/* 0045619C AFA7000C */  sw    $a3, 0xc($sp)
/* 004561A0 8E0D000C */  lw    $t5, 0xc($s0)
/* 004561A4 0320F809 */  jalr  $t9
/* 004561A8 AFAD0010 */   sw    $t5, 0x10($sp)
/* 004561AC 8FBC0038 */  lw    $gp, 0x38($sp)
.L004561B0:
/* 004561B0 8E73000C */  lw    $s3, 0xc($s3)
/* 004561B4 1660FFD5 */  bnez  $s3, .L0045610C
/* 004561B8 00000000 */   nop   
.L004561BC:
/* 004561BC 8F9981E8 */  lw    $t9, %call16(checkinitbvlivran)($gp)
/* 004561C0 27B40064 */  addiu $s4, $sp, 0x64
/* 004561C4 02802025 */  move  $a0, $s4
/* 004561C8 AFA00064 */  sw    $zero, 0x64($sp)
/* 004561CC 0320F809 */  jalr  $t9
/* 004561D0 AFA00068 */   sw    $zero, 0x68($sp)
/* 004561D4 8FBC0038 */  lw    $gp, 0x38($sp)
.L004561D8:
/* 004561D8 8F9389AC */  lw     $s3, %got(graphhead)($gp)
/* 004561DC 00009025 */  move  $s2, $zero
/* 004561E0 8E730000 */  lw    $s3, ($s3)
/* 004561E4 12600028 */  beqz  $s3, .L00456288
/* 004561E8 00000000 */   nop   
/* 004561EC 8E620014 */  lw    $v0, 0x14($s3)
.L004561F0:
/* 004561F0 50400023 */  beql  $v0, $zero, .L00456280
/* 004561F4 8E73000C */   lw    $s3, 0xc($s3)
/* 004561F8 16400007 */  bnez  $s2, .L00456218
/* 004561FC 00408025 */   move  $s0, $v0
/* 00456200 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00456204 02802025 */  move  $a0, $s4
/* 00456208 26650164 */  addiu $a1, $s3, 0x164
/* 0045620C 0320F809 */  jalr  $t9
/* 00456210 00000000 */   nop   
/* 00456214 8FBC0038 */  lw    $gp, 0x38($sp)
.L00456218:
/* 00456218 26710164 */  addiu $s1, $s3, 0x164
.L0045621C:
/* 0045621C 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00456220 8E050000 */  lw    $a1, ($s0)
/* 00456224 02202025 */  move  $a0, $s1
/* 00456228 0320F809 */  jalr  $t9
/* 0045622C 24A50164 */   addiu $a1, $a1, 0x164
/* 00456230 8E100004 */  lw    $s0, 4($s0)
/* 00456234 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00456238 1600FFF8 */  bnez  $s0, .L0045621C
/* 0045623C 00000000 */   nop   
/* 00456240 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 00456244 02202025 */  move  $a0, $s1
/* 00456248 96650008 */  lhu   $a1, 8($s3)
/* 0045624C 0320F809 */  jalr  $t9
/* 00456250 00000000 */   nop   
/* 00456254 16400009 */  bnez  $s2, .L0045627C
/* 00456258 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0045625C 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00456260 02802025 */  move  $a0, $s4
/* 00456264 02202825 */  move  $a1, $s1
/* 00456268 0320F809 */  jalr  $t9
/* 0045626C 00000000 */   nop   
/* 00456270 14400002 */  bnez  $v0, .L0045627C
/* 00456274 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00456278 24120001 */  li    $s2, 1
.L0045627C:
/* 0045627C 8E73000C */  lw    $s3, 0xc($s3)
.L00456280:
/* 00456280 5660FFDB */  bnezl $s3, .L004561F0
/* 00456284 8E620014 */   lw    $v0, 0x14($s3)
.L00456288:
/* 00456288 1640FFD3 */  bnez  $s2, .L004561D8
/* 0045628C 00000000 */   nop   
/* 00456290 8FB20088 */  lw    $s2, 0x88($sp)
.L00456294:
/* 00456294 8F998028 */  lw    $t9, %got(func_00455C48)($gp)
/* 00456298 8E44000C */  lw    $a0, 0xc($s2)
/* 0045629C 02402825 */  move  $a1, $s2
/* 004562A0 27395C48 */  addiu $t9, %lo(func_00455C48) # addiu $t9, $t9, 0x5c48
/* 004562A4 0320F809 */  jalr  $t9
/* 004562A8 02A01025 */   move  $v0, $s5
/* 004562AC 8E520018 */  lw    $s2, 0x18($s2)
/* 004562B0 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004562B4 1640FFF7 */  bnez  $s2, .L00456294
/* 004562B8 00000000 */   nop   
/* 004562BC 8F9988CC */  lw    $t9, %call16(alloc_release)($gp)
/* 004562C0 02C02025 */  move  $a0, $s6
/* 004562C4 8FA5006C */  lw    $a1, 0x6c($sp)
/* 004562C8 0320F809 */  jalr  $t9
/* 004562CC 00000000 */   nop   
/* 004562D0 8FBF003C */  lw    $ra, 0x3c($sp)
/* 004562D4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004562D8 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004562DC 8FB10020 */  lw    $s1, 0x20($sp)
/* 004562E0 8FB20024 */  lw    $s2, 0x24($sp)
/* 004562E4 8FB30028 */  lw    $s3, 0x28($sp)
/* 004562E8 8FB4002C */  lw    $s4, 0x2c($sp)
/* 004562EC 8FB50030 */  lw    $s5, 0x30($sp)
/* 004562F0 8FB60034 */  lw    $s6, 0x34($sp)
/* 004562F4 03E00008 */  jr    $ra
/* 004562F8 27BD0090 */   addiu $sp, $sp, 0x90
    .type analoop, @function
    .size analoop, .-analoop
    .end analoop
)"");
