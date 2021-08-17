#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptkill.h"
#include "uoptreg1.h"
#include "uoptutil.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000D648:
    # 00467C34 needsplit
    .asciz " impossible to color "

    .balign 4
RO_1000D660:
    # 00467C34 needsplit
    .byte 0x3e,0x4c,0xcc,0xcd # 0.200000

RO_1000D664:
    # 00467F04 split
    .ascii " split out"

RO_1000D66E:
    # 00467F04 split
    .ascii "live range"

RO_1000D678:
    # 00467F04 split
    .ascii " not colored, not splittable"

    .balign 4
RO_1000D694:
    # 00468A14 cupcosts
    .byte 0x60,0xad,0x78,0xec # 100000002004087734272.000000

    .balign 4
RO_1000D698:
    # 00468A14 cupcosts
    .byte 0x60,0xad,0x78,0xec # 100000002004087734272.000000

    .balign 4
RO_1000D69C:
    # 00468A14 cupcosts
    .byte 0x60,0xad,0x78,0xec # 100000002004087734272.000000

    .balign 4
RO_1000D6A0:
    # 00468A14 cupcosts
    .byte 0x60,0xad,0x78,0xec # 100000002004087734272.000000

.data
D_10010F30:
    # 00464778 prehascup
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010F38:
    # 00464848 func_00464848
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010F48:
    # 00466DF8 allpreppout
    .byte 0x02,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x00,0x00

D_10010F58:
    # 00466DF8 allpreppout
    .byte 0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00

D_10010F68:
    # 004675F0 canmoverlod
    .byte 0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00

D_10010F78:
    # 00467BD0 is_cup_affecting_regs
    .byte 0x00,0x00,0x80,0x00,0x00,0x08,0x00,0x00

D_10010F80:
    # 00468A14 cupcosts
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00



.bss
    .balign 4
# 1001C630
glabel numofsplits
    # 00469280 globalcolor
    .space 4
    .size numofsplits, 4
    .type numofsplits, @object

    .balign 4
# 1001C634
glabel bbtab
    # 00464BFC localcolor
    # 00467008 updatelivran
    # 0046791C whyuncolored
    # 00467F04 split
    # 00468A14 cupcosts
    # 00469280 globalcolor
    .space 4
    .size bbtab, 4
    .type bbtab, @object

    .balign 4
# 1001C638
glabel formingtab
    # 00464BFC localcolor
    # 004669A8 addadjacents
    # 00467F04 split
    .space 4
    .size formingtab, 4
    .type formingtab, @object

    .balign 4
# 1001C63C
glabel forminginx
    # 004669A8 addadjacents
    # 00467F04 split
    .space 4
    .size forminginx, 4
    .type forminginx, @object

    .balign 4
# 1001C640
glabel formingmax
    # 004669A8 addadjacents
    # 00467F04 split
    .space 4
    .size formingmax, 4
    .type formingmax, @object

    .balign 8
# 1001C7D8
glabel unconstrain
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    .space 8
    .size unconstrain, 8
    .type unconstrain, @object

    .balign 8
# 1001C7E0
glabel colorcand
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    .space 8
    .size colorcand, 8
    .type colorcand, @object

    .balign 8
# 1001C7E8
glabel livrantemp
    # 00464BFC localcolor
    # 00465D30 intfering
    # 004673B0 func_004673B0
    # 00467514 contiguous
    .space 8
    .size livrantemp, 8
    .type livrantemp, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

extern struct Graphnode **bbtab;
extern void **formingtab;
extern struct BitVector livrantemp;
extern struct BitVector colorcand;
extern int numofsplits;
extern struct BitVector unconstrain;

/*
00456A2C oneproc
*/
void regdataflow(void) {
    struct BitVector colored_vars;
    struct Graphnode *node;
    struct GraphnodeList *succ;
    struct IChain *ichain;
    int i;
    bool changed;

    checkbvlist(&old);
    checkbvlist(&iscolored12);
    checkbvlist(&iscolored[0]);
    checkbvlist(&iscolored[1]);
    checkbvlist(&varbits);
    checkbvlist(&mvarbits);
    if (fsymbits.num_blocks != 0) {
        checkbvlist(&fsymbits);
    }
    checkbvlist(&outmodebits);
    checkbvlist(&notinmodebits);
    checkbvlist(&coloreditems);
    checkbvlist(&coloredparms);

    node = graphhead;
    while (node != NULL) {
        checkbvlist(&node->bvs.stage2.appear);
        checkbvlist(&node->bvs.stage2.loclive);
        checkbvlist(&node->bvs.stage2.locdef);
        checkbvlist(&node->bvs.stage2.ppin);
        checkbvlist(&node->indiracc);

        if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
            bvectcopy(&node->bvs.stage2.ppin, &iscolored12);
            bvectintsect(&node->bvs.stage2.ppin, &varbits);

            if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
                for (i = 0; i < bitposcount; i++) {
                    if (bvectin(i, &node->bvs.stage2.ppin)) {
                        ichain = bittab[i].ichain;
                        if (ichain->isvar_issvar.location.memtype == Mmt && ichain->isvar_issvar.location.addr == staticlinkloc) {
                            ichain->expr->data.isvar_issvar.location.level = curlevel;
                            if (!clkilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, ichain->expr) &&
                                    !listplkilled(node->stat_tail->u.call.parameters, ichain->expr, 1)) {
                                resetbit(&node->bvs.stage2.ppin, i);
                            }
                        } else {
                            if (!clkilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, ichain->expr) &&
                                    !listplkilled(node->stat_tail->u.call.parameters, ichain->expr, ichain->isvar_issvar.unk19)) {
                                resetbit(&node->bvs.stage2.ppin, i);
                            }
                        }
                    }
                }

                switch (node->stat_tail->u.call.returntype) {
                    case Qdt:
                    case Rdt:
                        setbit(&node->successors->graphnode->bvs.stage2.appear, r2bitpos[1]);
                        if (IS_RELOAD_STACK_ATTR(node->stat_tail->u.call.extrnal_flags)) {
                            setbit(&node->successors->graphnode->bvs.stage2.appear, r2bitpos[2]);
                        }
                        break;

                    case Pdt:
                        break;

                    default:
                        setbit(&node->successors->graphnode->bvs.stage2.appear, r2bitpos[0]);
                        break;
                }
            } else if (lang != LANG_ADA) {
                for (i = 0; i < bitposcount; i++) {
                    if (bvectin(i, &node->bvs.stage2.ppin)) {
                        ichain = bittab[i].ichain;
                        if (!IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags) || !clkilled(curlevel, indirprocs, ichain->expr)) {
                            if (!listplkilled(node->stat_tail->u.cia.parameters, ichain->expr, ichain->isvar_issvar.unk19)) {
                                resetbit(&node->bvs.stage2.ppin, i);
                            }
                        }
                    }
                }
            }
        }

        if (lang == LANG_ADA && node->successors == NULL) {
            unionintsect(&node->bvs.stage2.loclive, &coloredparms, &outmodebits);
        }

        node = node->next;
    }
    if (outofmem) {
        return;
    }

    lastdftime = getclock();
    numdataflow += 3;

    node = graphhead;
    while (node != NULL) {
        checkbvlist(&node->bvs.stage2.active);
        checkbvlist(&node->bvs.stage2.unk11C);
        bvectcopy(&node->bvs.stage2.active, &node->bvs.stage2.loclive);

        succ = node->successors;
        if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
            while (succ != NULL) {
                unionminus(&node->bvs.stage2.active, &succ->graphnode->bvs.stage2.loclive, &node->bvs.stage2.ppin);
                succ = succ->next;
            }
        } else {
            while (succ != NULL) {
                bvectunion(&node->bvs.stage2.active, &succ->graphnode->bvs.stage2.loclive);
                succ = succ->next;
            }
        }
        bvectcopy(&node->bvs.stage2.unk11C, &node->bvs.stage2.appear);
        node = node->next;
    }
    if (outofmem) {
        return;
    }

    unionminus(&graphhead->bvs.stage2.unk11C, &coloredparms, &notinmodebits);

    do {
        dataflowiter++;
        node = graphtail;
        changed = false;
        while (node != NULL) {
            if (node->successors != NULL) {
                succ = node->successors;
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage2.active);
                }

                if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
                    while (succ != NULL) {
                        uminusminus(&node->bvs.stage2.active, &succ->graphnode->bvs.stage2.active, &succ->graphnode->bvs.stage2.locdef, &node->bvs.stage2.ppin);
                        succ = succ->next;
                    }
                } else {
                    while (succ != NULL) {
                        unionminus(&node->bvs.stage2.active, &succ->graphnode->bvs.stage2.active, &succ->graphnode->bvs.stage2.locdef);
                        succ = succ->next;
                    }
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage2.active)) {
                    changed = true;
                }
            }
            node = node->prev;
        }
    } while (changed);

    do {
        node = graphhead;
        dataflowiter++;
        changed = false;
        while (node != NULL) {
            succ = node->predecessors;
            if (!changed) {
                bvectcopy(&old, &node->bvs.stage2.unk11C);
            }

            while (succ != NULL) {
                if (succ->graphnode->stat_tail->opc == Ucia ||
                        succ->graphnode->stat_tail->opc == Ucup ||
                        succ->graphnode->stat_tail->opc == Uicuf) {
                    unionminus(&node->bvs.stage2.unk11C, &succ->graphnode->bvs.stage2.unk11C, &succ->graphnode->bvs.stage2.ppin);
                } else {
                    bvectunion(&node->bvs.stage2.unk11C, &succ->graphnode->bvs.stage2.unk11C);
                }
                succ = succ->next;
            }

            if (!changed && !bvecteq(&old, &node->bvs.stage2.unk11C)) {
                changed = true;
            }
            node = node->next;
        }
    } while (changed);

    node = graphhead;
    while (node != NULL) {
        bvectunion(&node->bvs.stage2.loclive, &node->indiracc);
        node = node->next;
    }

    colored_vars.num_blocks = 0;
    colored_vars.blocks = NULL;
    checkbvlist(&colored_vars);
    bvectcopy(&colored_vars, &varbits);
    bvectintsect(&colored_vars, &iscolored12);
    bvectminus(&colored_vars, &mvarbits);
    node = graphhead;
    while (node != NULL) {
        bvectintsect(&node->bvs.stage2.active, &node->bvs.stage2.unk11C);
        bvectunion(&node->bvs.stage2.active, &node->bvs.stage2.appear);
        checkinitbvlivran(&node->bvs.stage2.unk11C);
        setbitbb(&node->bvs.stage2.unk11C, node->num);

        checkbvlist(&node->bvs.stage2.liveout);
        initbv(&node->bvs.stage2.liveout, (struct BitVectorBlock) {0});

        if (node->successors == NULL && (!is_cup(node) || (lang != LANG_PL1 && lang != LANG_COBOL))) {
            bvectunion(&node->bvs.stage2.liveout, &colored_vars);
        } else {
            succ = node->successors;
            if (succ == NULL) {
                bvectunion(&node->bvs.stage2.liveout, &node->bvs.stage2.ppin);
            } else {
                if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
                    bvectunion(&node->bvs.stage2.liveout, &node->bvs.stage2.ppin);
                    while (succ != NULL) {
                        bvectunion(&node->bvs.stage2.liveout, &succ->graphnode->bvs.stage2.loclive);
                        succ = succ->next;
                    }

                    if (!node->terminal && has_exc_handler) {
                        unionintsect(&node->bvs.stage2.liveout, &iscolored12, &varbits);
                    }
                } else {
                    while (succ != NULL) {
                        bvectunion(&node->bvs.stage2.liveout, &succ->graphnode->bvs.stage2.loclive);
                        succ = succ->next;
                    }
                }
            }
        }
        node = node->next;
    }

    if (outofmem) {
        return;
    }
    do {
        dataflowiter++;

        node = graphtail;
        changed = false;
        while (node != NULL) {
            if (node->successors != NULL) {
                succ = node->successors;
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage2.liveout);
                }

                while (succ != NULL) {
                    unionminus(&node->bvs.stage2.liveout, &succ->graphnode->bvs.stage2.liveout, &succ->graphnode->bvs.stage2.locdef);
                    succ = succ->next;
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage2.liveout)) {
                    changed = true;
                }
            } else if (fsymbits.num_blocks != 0) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage2.liveout);
                }

                uintsectminus(&node->bvs.stage2.liveout, &fsymbits, &graphhead->bvs.stage2.liveout, &graphhead->bvs.stage2.locdef);
                unionintsect(&node->bvs.stage2.liveout, &fsymbits, &graphhead->bvs.stage2.loclive);

                if (!changed && !bvecteq(&old, &node->bvs.stage2.liveout)) {
                    changed = true;
                }
            }
            node = node->prev;
        }
    } while (changed);

    checkinitbvlivran(&old);
    do {
        node = graphtail;
        changed = false;
        while (node != NULL) {
            if (node->successors != NULL) {
                succ = node->successors;
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage2.unk11C);
                }

                while (succ != NULL) {
                    bvectunion(&node->bvs.stage2.unk11C, &succ->graphnode->bvs.stage2.unk11C);
                    succ = succ->next;
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage2.unk11C)) {
                    changed = true;
                }
            }
            node = node->prev;
        }
    } while (changed);
    dataflowtime = (dataflowtime + getclock()) - lastdftime;
}

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel gettolivbb
    .ent gettolivbb
    # 00464910 allsucmember
    # 004669A8 addadjacents
    # 00467F04 split
    # 00469280 globalcolor
/* 00464718 3C1C0FBB */  .cpload $t9
/* 0046471C 279C5B78 */  
/* 00464720 0399E021 */  
/* 00464724 8CA20030 */  lw    $v0, 0x30($a1)
/* 00464728 1040000C */  beqz  $v0, .L0046475C
/* 0046472C 00000000 */   nop   
/* 00464730 8C4E0008 */  lw    $t6, 8($v0)
/* 00464734 8DCF0000 */  lw    $t7, ($t6)
/* 00464738 108F0008 */  beq   $a0, $t7, .L0046475C
/* 0046473C 00000000 */   nop   
/* 00464740 8C42000C */  lw    $v0, 0xc($v0)
.L00464744:
/* 00464744 10400005 */  beqz  $v0, .L0046475C
/* 00464748 00000000 */   nop   
/* 0046474C 8C580008 */  lw    $t8, 8($v0)
/* 00464750 8F190000 */  lw    $t9, ($t8)
/* 00464754 5499FFFB */  bnel  $a0, $t9, .L00464744
/* 00464758 8C42000C */   lw    $v0, 0xc($v0)
.L0046475C:
/* 0046475C 14400004 */  bnez  $v0, .L00464770
/* 00464760 00401825 */   move  $v1, $v0
/* 00464764 8F8389DC */  lw     $v1, %got(dft_livbb)($gp)
/* 00464768 03E00008 */  jr    $ra
/* 0046476C 8C620000 */   lw    $v0, ($v1)

.L00464770:
/* 00464770 03E00008 */  jr    $ra
/* 00464774 00601025 */   move  $v0, $v1
    .type gettolivbb, @function
    .size gettolivbb, .-gettolivbb
    .end gettolivbb
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel prehascup
    .ent prehascup
    # 00464BFC localcolor
/* 00464778 3C1C0FBB */  .cpload $t9
/* 0046477C 279C5B18 */  
/* 00464780 0399E021 */  
/* 00464784 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00464788 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0046478C AFB10018 */  sw    $s1, 0x18($sp)
/* 00464790 AFB00014 */  sw    $s0, 0x14($sp)
/* 00464794 00808025 */  move  $s0, $a0
/* 00464798 00A09025 */  move  $s2, $a1
/* 0046479C AFBF0024 */  sw    $ra, 0x24($sp)
/* 004647A0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004647A4 10800021 */  beqz  $a0, .L0046482C
/* 004647A8 00008825 */   move  $s1, $zero
/* 004647AC 8E020000 */  lw    $v0, ($s0)
.L004647B0:
/* 004647B0 8C4E0020 */  lw    $t6, 0x20($v0)
/* 004647B4 91CF0000 */  lbu   $t7, ($t6)
/* 004647B8 2DF80040 */  sltiu $t8, $t7, 0x40
/* 004647BC 13000009 */  beqz  $t8, .L004647E4
/* 004647C0 00000000 */   nop   
/* 004647C4 8F898044 */  lw    $t1, %got(D_10010F30)($gp)
/* 004647C8 000FC943 */  sra   $t9, $t7, 5
/* 004647CC 00194080 */  sll   $t0, $t9, 2
/* 004647D0 25290F30 */  addiu $t1, %lo(D_10010F30) # addiu $t1, $t1, 0xf30
/* 004647D4 01285021 */  addu  $t2, $t1, $t0
/* 004647D8 8D4B0000 */  lw    $t3, ($t2)
/* 004647DC 01EB6004 */  sllv  $t4, $t3, $t7
/* 004647E0 29980000 */  slti  $t8, $t4, 0
.L004647E4:
/* 004647E4 5300000D */  beql  $t8, $zero, .L0046481C
/* 004647E8 8E100004 */   lw    $s0, 4($s0)
/* 004647EC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004647F0 02402025 */  move  $a0, $s2
/* 004647F4 2445012C */  addiu $a1, $v0, 0x12c
/* 004647F8 0320F809 */  jalr  $t9
/* 004647FC 00000000 */   nop   
/* 00464800 10400003 */  beqz  $v0, .L00464810
/* 00464804 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00464808 10000004 */  b     .L0046481C
/* 0046480C 24110001 */   li    $s1, 1
.L00464810:
/* 00464810 10000002 */  b     .L0046481C
/* 00464814 8E100004 */   lw    $s0, 4($s0)
/* 00464818 8E100004 */  lw    $s0, 4($s0)
.L0046481C:
/* 0046481C 56200004 */  bnezl $s1, .L00464830
/* 00464820 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00464824 5600FFE2 */  bnezl $s0, .L004647B0
/* 00464828 8E020000 */   lw    $v0, ($s0)
.L0046482C:
/* 0046482C 8FBF0024 */  lw    $ra, 0x24($sp)
.L00464830:
/* 00464830 02201025 */  move  $v0, $s1
/* 00464834 8FB10018 */  lw    $s1, 0x18($sp)
/* 00464838 8FB00014 */  lw    $s0, 0x14($sp)
/* 0046483C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00464840 03E00008 */  jr    $ra
/* 00464844 27BD0028 */   addiu $sp, $sp, 0x28
    .type prehascup, @function
    .size prehascup, .-prehascup
    .end prehascup
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

    .type func_00464848, @function
func_00464848:
    # 00464910 allsucmember
/* 00464848 3C1C0FBB */  .cpload $t9
/* 0046484C 279C5A48 */  
/* 00464850 0399E021 */  
/* 00464854 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00464858 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0046485C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00464860 8C430004 */  lw    $v1, 4($v0)
/* 00464864 8C460000 */  lw    $a2, ($v0)
/* 00464868 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046486C 8C6E0000 */  lw    $t6, ($v1)
/* 00464870 8CC50000 */  lw    $a1, ($a2)
/* 00464874 95C40002 */  lhu   $a0, 2($t6)
/* 00464878 AFA30024 */  sw    $v1, 0x24($sp)
/* 0046487C AFA60020 */  sw    $a2, 0x20($sp)
/* 00464880 0320F809 */  jalr  $t9
/* 00464884 24A50114 */   addiu $a1, $a1, 0x114
/* 00464888 304F00FF */  andi  $t7, $v0, 0xff
/* 0046488C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00464890 8FA30024 */  lw    $v1, 0x24($sp)
/* 00464894 8FA60020 */  lw    $a2, 0x20($sp)
/* 00464898 15E00018 */  bnez  $t7, .L004648FC
/* 0046489C 304400FF */   andi  $a0, $v0, 0xff
/* 004648A0 8CC20000 */  lw    $v0, ($a2)
/* 004648A4 8C580020 */  lw    $t8, 0x20($v0)
/* 004648A8 93190000 */  lbu   $t9, ($t8)
/* 004648AC 2F280040 */  sltiu $t0, $t9, 0x40
/* 004648B0 11000009 */  beqz  $t0, .L004648D8
/* 004648B4 00000000 */   nop   
/* 004648B8 8F8B8044 */  lw    $t3, %got(D_10010F38)($gp)
/* 004648BC 00194943 */  sra   $t1, $t9, 5
/* 004648C0 00095080 */  sll   $t2, $t1, 2
/* 004648C4 256B0F38 */  addiu $t3, %lo(D_10010F38) # addiu $t3, $t3, 0xf38
/* 004648C8 016A6021 */  addu  $t4, $t3, $t2
/* 004648CC 8D8D0000 */  lw    $t5, ($t4)
/* 004648D0 032D7004 */  sllv  $t6, $t5, $t9
/* 004648D4 29C80000 */  slti  $t0, $t6, 0
.L004648D8:
/* 004648D8 51000009 */  beql  $t0, $zero, .L00464900
/* 004648DC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004648E0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004648E4 8C780000 */  lw    $t8, ($v1)
/* 004648E8 2445012C */  addiu $a1, $v0, 0x12c
/* 004648EC 0320F809 */  jalr  $t9
/* 004648F0 97040002 */   lhu   $a0, 2($t8)
/* 004648F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004648F8 304400FF */  andi  $a0, $v0, 0xff
.L004648FC:
/* 004648FC 8FBF001C */  lw    $ra, 0x1c($sp)
.L00464900:
/* 00464900 27BD0030 */  addiu $sp, $sp, 0x30
/* 00464904 00801025 */  move  $v0, $a0
/* 00464908 03E00008 */  jr    $ra
/* 0046490C 00000000 */   nop   
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel allsucmember
    .ent allsucmember
    # 00464BFC localcolor
    # 00467008 updatelivran
/* 00464910 3C1C0FBB */  .cpload $t9
/* 00464914 279C5980 */  
/* 00464918 0399E021 */  
/* 0046491C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00464920 AFB10018 */  sw    $s1, 0x18($sp)
/* 00464924 AFB00014 */  sw    $s0, 0x14($sp)
/* 00464928 00808025 */  move  $s0, $a0
/* 0046492C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00464930 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00464934 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00464938 AFA50034 */  sw    $a1, 0x34($sp)
/* 0046493C 1080003C */  beqz  $a0, .L00464A30
/* 00464940 24110001 */   li    $s1, 1
/* 00464944 27B20030 */  addiu $s2, $sp, 0x30
.L00464948:
/* 00464948 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046494C 8E0E0000 */  lw    $t6, ($s0)
/* 00464950 8FA50034 */  lw    $a1, 0x34($sp)
/* 00464954 95C40008 */  lhu   $a0, 8($t6)
/* 00464958 0320F809 */  jalr  $t9
/* 0046495C 24A50014 */   addiu $a1, $a1, 0x14
/* 00464960 14400023 */  bnez  $v0, .L004649F0
/* 00464964 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00464968 8F99802C */  lw    $t9, %got(func_00464848)($gp)
/* 0046496C AFB00030 */  sw    $s0, 0x30($sp)
/* 00464970 02401025 */  move  $v0, $s2
/* 00464974 27394848 */  addiu $t9, %lo(func_00464848) # addiu $t9, $t9, 0x4848
/* 00464978 0320F809 */  jalr  $t9
/* 0046497C 00000000 */   nop   
/* 00464980 14400016 */  bnez  $v0, .L004649DC
/* 00464984 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00464988 8FB00030 */  lw    $s0, 0x30($sp)
/* 0046498C 8FAF0034 */  lw    $t7, 0x34($sp)
/* 00464990 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464994 8E050000 */  lw    $a1, ($s0)
/* 00464998 8DF80000 */  lw    $t8, ($t7)
/* 0046499C 24A50144 */  addiu $a1, $a1, 0x144
/* 004649A0 0320F809 */  jalr  $t9
/* 004649A4 97040002 */   lhu   $a0, 2($t8)
/* 004649A8 1040000F */  beqz  $v0, .L004649E8
/* 004649AC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004649B0 8FB90034 */  lw    $t9, 0x34($sp)
/* 004649B4 8E050000 */  lw    $a1, ($s0)
/* 004649B8 8F280000 */  lw    $t0, ($t9)
/* 004649BC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004649C0 24A5010C */  addiu $a1, $a1, 0x10c
/* 004649C4 95040002 */  lhu   $a0, 2($t0)
/* 004649C8 0320F809 */  jalr  $t9
/* 004649CC 00000000 */   nop   
/* 004649D0 14400005 */  bnez  $v0, .L004649E8
/* 004649D4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004649D8 AFB00030 */  sw    $s0, 0x30($sp)
.L004649DC:
/* 004649DC 8FB00030 */  lw    $s0, 0x30($sp)
/* 004649E0 1000000F */  b     .L00464A20
/* 004649E4 00008825 */   move  $s1, $zero
.L004649E8:
/* 004649E8 1000000D */  b     .L00464A20
/* 004649EC 8E100004 */   lw    $s0, 4($s0)
.L004649F0:
/* 004649F0 8F9984D8 */  lw    $t9, %call16(gettolivbb)($gp)
/* 004649F4 8FA90034 */  lw    $t1, 0x34($sp)
/* 004649F8 8E050000 */  lw    $a1, ($s0)
/* 004649FC 0320F809 */  jalr  $t9
/* 00464A00 8D240000 */   lw    $a0, ($t1)
/* 00464A04 904A0015 */  lbu   $t2, 0x15($v0)
/* 00464A08 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00464A0C 51400004 */  beql  $t2, $zero, .L00464A20
/* 00464A10 8E100004 */   lw    $s0, 4($s0)
/* 00464A14 10000002 */  b     .L00464A20
/* 00464A18 00008825 */   move  $s1, $zero
/* 00464A1C 8E100004 */  lw    $s0, 4($s0)
.L00464A20:
/* 00464A20 52200004 */  beql  $s1, $zero, .L00464A34
/* 00464A24 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00464A28 1600FFC7 */  bnez  $s0, .L00464948
/* 00464A2C 00000000 */   nop   
.L00464A30:
/* 00464A30 8FBF0024 */  lw    $ra, 0x24($sp)
.L00464A34:
/* 00464A34 02201025 */  move  $v0, $s1
/* 00464A38 8FB10018 */  lw    $s1, 0x18($sp)
/* 00464A3C 8FB00014 */  lw    $s0, 0x14($sp)
/* 00464A40 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00464A44 03E00008 */  jr    $ra
/* 00464A48 27BD0030 */   addiu $sp, $sp, 0x30
    .type allsucmember, @function
    .size allsucmember, .-allsucmember
    .end allsucmember
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel preallmember
    .ent preallmember
    # 00464BFC localcolor
    # 00467008 updatelivran
/* 00464A4C 3C1C0FBB */  .cpload $t9
/* 00464A50 279C5844 */  
/* 00464A54 0399E021 */  
/* 00464A58 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00464A5C AFB10018 */  sw    $s1, 0x18($sp)
/* 00464A60 AFB00014 */  sw    $s0, 0x14($sp)
/* 00464A64 00808025 */  move  $s0, $a0
/* 00464A68 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00464A6C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00464A70 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00464A74 10800010 */  beqz  $a0, .L00464AB8
/* 00464A78 24110001 */   li    $s1, 1
/* 00464A7C 24B20014 */  addiu $s2, $a1, 0x14
.L00464A80:
/* 00464A80 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464A84 8E0E0000 */  lw    $t6, ($s0)
/* 00464A88 02402825 */  move  $a1, $s2
/* 00464A8C 0320F809 */  jalr  $t9
/* 00464A90 95C40008 */   lhu   $a0, 8($t6)
/* 00464A94 14400003 */  bnez  $v0, .L00464AA4
/* 00464A98 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00464A9C 10000002 */  b     .L00464AA8
/* 00464AA0 00008825 */   move  $s1, $zero
.L00464AA4:
/* 00464AA4 8E100004 */  lw    $s0, 4($s0)
.L00464AA8:
/* 00464AA8 52200004 */  beql  $s1, $zero, .L00464ABC
/* 00464AAC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00464AB0 1600FFF3 */  bnez  $s0, .L00464A80
/* 00464AB4 00000000 */   nop   
.L00464AB8:
/* 00464AB8 8FBF0024 */  lw    $ra, 0x24($sp)
.L00464ABC:
/* 00464ABC 02201025 */  move  $v0, $s1
/* 00464AC0 8FB10018 */  lw    $s1, 0x18($sp)
/* 00464AC4 8FB00014 */  lw    $s0, 0x14($sp)
/* 00464AC8 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00464ACC 03E00008 */  jr    $ra
/* 00464AD0 27BD0028 */   addiu $sp, $sp, 0x28
    .type preallmember, @function
    .size preallmember, .-preallmember
    .end preallmember
)"");

/*
00464BFC localcolor
00467008 updatelivran
*/
struct LiveUnit *alloc_livbb(void) {
    struct LiveUnit *ret;

    ret = alloc_new(sizeof(struct LiveUnit), &perm_heap);
    if (ret == NULL) {
        outofmem = true;
        return NULL;
    }

    *ret = *dft_livbb;
    return ret;
}
__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel r2_overlap_r3
    .ent r2_overlap_r3
    # 00464BFC localcolor
/* 00464B68 3C1C0FBB */  .cpload $t9
/* 00464B6C 279C5728 */  
/* 00464B70 0399E021 */  
/* 00464B74 8F8F8DF8 */  lw     $t7, %got(table)($gp)
/* 00464B78 AFA40000 */  sw    $a0, ($sp)
/* 00464B7C 00047080 */  sll   $t6, $a0, 2
/* 00464B80 01CFC021 */  addu  $t8, $t6, $t7
/* 00464B84 8F020000 */  lw    $v0, ($t8)
/* 00464B88 24040002 */  li    $a0, 2
/* 00464B8C 24030003 */  li    $v1, 3
/* 00464B90 90590000 */  lbu   $t9, ($v0)
.L00464B94:
/* 00464B94 3C011100 */  lui   $at, 0x1100
/* 00464B98 2F280020 */  sltiu $t0, $t9, 0x20
/* 00464B9C 00084823 */  negu  $t1, $t0
/* 00464BA0 01215024 */  and   $t2, $t1, $at
/* 00464BA4 032A5804 */  sllv  $t3, $t2, $t9
/* 00464BA8 0563000F */  bgezl $t3, .L00464BE8
/* 00464BAC 8C42001C */   lw    $v0, 0x1c($v0)
/* 00464BB0 904C002E */  lbu   $t4, 0x2e($v0)
/* 00464BB4 318D0007 */  andi  $t5, $t4, 7
/* 00464BB8 546D000B */  bnel  $v1, $t5, .L00464BE8
/* 00464BBC 8C42001C */   lw    $v0, 0x1c($v0)
/* 00464BC0 8C4E0028 */  lw    $t6, 0x28($v0)
/* 00464BC4 548E0008 */  bnel  $a0, $t6, .L00464BE8
/* 00464BC8 8C42001C */   lw    $v0, 0x1c($v0)
/* 00464BCC 904F0020 */  lbu   $t7, 0x20($v0)
/* 00464BD0 29E10005 */  slti  $at, $t7, 5
/* 00464BD4 54200004 */  bnezl $at, .L00464BE8
/* 00464BD8 8C42001C */   lw    $v0, 0x1c($v0)
/* 00464BDC 03E00008 */  jr    $ra
/* 00464BE0 24020001 */   li    $v0, 1

/* 00464BE4 8C42001C */  lw    $v0, 0x1c($v0)
.L00464BE8:
/* 00464BE8 5440FFEA */  bnezl $v0, .L00464B94
/* 00464BEC 90590000 */   lbu   $t9, ($v0)
/* 00464BF0 00001025 */  move  $v0, $zero
/* 00464BF4 03E00008 */  jr    $ra
/* 00464BF8 00000000 */   nop   
    .type r2_overlap_r3, @function
    .size r2_overlap_r3, .-r2_overlap_r3
    .end r2_overlap_r3
)"");

/*
00456A2C oneproc
*/
void localcolor(void) {
    int i;
    int tempset[2] = {0};
    int regclass; // s5
    struct Graphnode *node;
    struct IChain *ichain;
    struct LiveUnit *lu; // s0
    int reg; // s2
    int bb;
    bool needreglod;
    bool needregsave;

    formingtab = alloc_new(curstaticno * 4, &perm_heap);
    bbtab = alloc_new(curstaticno * sizeof(struct Graphnode *), &perm_heap);

    node = graphhead;
    while (node != NULL) {
        bbtab[node->num] = node;
        node = node->next;
    }

    formbvlivran(&livrantemp);
    for (i = 0; i < bitposcount; i++) {
        ichain = bittab[i].ichain;

        if (!bvectin(i, &iscolored12)) {
            continue;
        }

        bittab[i].liverange->interfere = NULL;
        if (ichain->type != isvar || ichain->isvar_issvar.location.memtype != Rmt) {
            bittab[i].liverange->hasstore = false;
            lu = bittab[i].liverange->liveunits;
            initbv(&livrantemp, (struct BitVectorBlock) {0});
            while (lu != NULL) {
                if (lu->store_count != 0 || lu->firstisstr) {
                    bittab[i].liverange->hasstore = true;
                    bvectunion(&livrantemp, &lu->node->bvs.stage2.unk11C);
                }
                lu->deadout = !bvectin(i, &lu->node->bvs.stage2.liveout);
                lu = lu->next;
            }
        }

        node = graphhead;
        while (node != NULL) {
            if (bvectin(i, &node->bvs.stage2.active) &&
                    !bvectin(node->num, &bittab[i].liverange->unk14) &&
                    !bvectin(i, &node->indiracc)) {
                numlu++;
                lu = dft_livbb;
                if (node == graphhead && bvectin(i, &coloredparms)) {
                    regclass = regclassof(ichain);

                    if (ichain->isvar_issvar.location.memtype == Mmt) {
                        reg = 1;
                    } else {
                        reg = firstparmreg[regclass - 1] + ichain->isvar_issvar.location.addr / 4;
                    }

                    if (regclass == 2 && ichain->isvar_issvar.location.addr != 0) {
                        reg = firstparmreg[regclass - 1] + 1;
                    }

                    lu = alloc_livbb();
                    if (lu == NULL) {
                        return;
                    }

                    lu->firstisstr = true;
                    lu->deadout = false;
                    bittab[i].liverange->hasstore = true;

                    bvectunion(&livrantemp, &graphhead->bvs.stage2.unk11C);
                    if ((!allcallersave || reg == 1) && !SET_IN(node->regsused[regclass - 1], reg) &&
                            passedinreg(ichain, offsetpassedbyint) && doprecolor)  {
                        lu->reg = reg;

                        SET_ADD(node->regsused[regclass - 1], reg);

                        if ((ichain->dtype == Qdt && regclass == 1) ||
                                ((ichain->dtype == Idt || ichain->dtype == Kdt) && !mips3_64data)) {
                            SET_ADD(node->regsused[regclass - 1], reg + 1);
                        }
                    } else {
                        lu->reg = 0;
                    }
                } else if (node->successors == NULL && bvectin(i, &coloredparms) && bvectin(i, &outmodebits)) {
                    regclass = regclassof(ichain);
                    reg = firstparmreg[regclass - 1] + ichain->isvar_issvar.location.addr / 4;

                    if (regclass == 2 && ichain->isvar_issvar.location.addr) {
                        reg = firstparmreg[regclass - 1] + 1;
                    }

                    if (!allcallersave && !SET_IN(node->regsused[regclass - 1], reg) && passedinreg(ichain, offsetpassedbyint)) {
                        lu = alloc_livbb();
                        if (lu == NULL) {
                            return;
                        }

                        lu->reg = reg;
                        lu->deadout = false;

                        SET_ADD(node->regsused[regclass - 1], reg);
                        if (ichain->dtype == Qdt && regclass == 1) {
                            SET_ADD(node->regsused[regclass - 1], reg + 1);
                        }
                    }
                }

                if (lu != dft_livbb) {
                    lu->node = node;
                    lu->next = bittab[i].liverange->liveunits;
                    bittab[i].liverange->liveunits = lu;
                    lu->liverange = bittab[i].liverange;
                    lu->next_in_block = node->liveunit;
                    node->liveunit = lu;
                } else {
                    setbitbb(&bittab[i].liverange->unkC, node->num);
                }

                setbitbb(&bittab[i].liverange->unk14, node->num);
            }
            node = node->next;
        }

        if (ichain->type == isvar && ichain->isvar_issvar.location.memtype == Rmt) {
            resetbit(&iscolored12, i);

            if (ichain->dtype == Qdt || ichain->dtype == Rdt) {
                regclass = 2;
            } else {
                regclass = 1;
            }
            resetbit(&iscolored[regclass - 1], i);
            if (ichain->isvar_issvar.location.addr != r_sp) {
                if (ichain->isvar_issvar.location.addr == r_v0) {
                    if (!mips3_64data && r2_overlap_r3(ichain->expr->table_index)) {
                        SET_ADD(tempset, firsterreg[0]);
                        SET_ADD(tempset, firsterreg[0] + 1);
                    } else {
                        SET_ADD(tempset, firsterreg[0]);
                    }

                    if (staticlinkloc != 0 && SET_IN(graphhead->regsused[0], firsterreg[0]) &&
                            bvectin(graphhead->num, &bittab[i].liverange->unk14) && doprecolor) {
                        lu = graphhead->liveunit;
                        if (lu->reg != firsterreg[0]) {
                            lu = lu->next_in_block;
                        }

                        if (lu->liverange->ichain->type != isvar || lu->liverange->ichain->isvar_issvar.location.addr != staticlinkloc) {
                            dbgerror(0x2CE);
                        }
                        lu->reg = 0;
                    }
                } else {
                    if (ichain->isvar_issvar.location.addr == r_f0) {
                        SET_ADD(tempset, firsterreg[1]);
                    } else {
                        SET_ADD(tempset, firsterreg[1] + 1);
                    }
                }

                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &bittab[i].liverange->unk14)) {
                        SET_UNION(bbtab[bb]->regsused[regclass - 1], tempset);
                    }
                }
            }
        } else {
            lu = bittab[i].liverange->liveunits;
            while (lu != NULL) {
                if (!lu->firstisstr) {
                    if (lu->node->predecessors == NULL || lu->node->interprocedural_controlflow) {
                        lu->needreglod = true;
                    } else if (ichain->type == isvar) {
                        if (prehascup(lu->node->predecessors, i)) {
                            lu->needreglod = true;
                        } else {
                            lu->needreglod = !preallmember(lu->node->predecessors, bittab[i].liverange);
                        }
                    } else {
                        lu->needreglod = !preallmember(lu->node->predecessors, bittab[i].liverange);
                    }
                }
                lu = lu->next;
            }

            if (!bvectempty(&bittab[i].liverange->unkC)) {
                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &bittab[i].liverange->unkC)) {
                        if (bbtab[bb]->predecessors == NULL || bbtab[bb]->interprocedural_controlflow) {
                            needreglod = true;
                        } else if (ichain->type == isvar) {
                            if (prehascup(bbtab[bb]->predecessors, i)) {
                                needreglod = true;
                            } else {
                                needreglod = !preallmember(bbtab[bb]->predecessors, bittab[i].liverange);
                            }
                        } else {
                            needreglod = !preallmember(bbtab[bb]->predecessors, bittab[i].liverange);
                        }

                        if (needreglod) {
                            lu = alloc_livbb();
                            if (lu == NULL) {
                                return;
                            }

                            lu->node = bbtab[bb];
                            lu->next = bittab[i].liverange->liveunits;
                            bittab[i].liverange->liveunits = lu;
                            lu->liverange = bittab[i].liverange;
                            lu->next_in_block = bbtab[bb]->liveunit;
                            bbtab[bb]->liveunit = lu;
                            lu->needreglod = true;
                            resetbit(&bittab[i].liverange->unkC, bb);
                        }
                    }
                }
            }

            if (bittab[i].liverange->hasstore) {
                lu = bittab[i].liverange->liveunits;
                while (lu != NULL) {
                    if (!lu->deadout && (lu->store_count != 0 || lu->firstisstr || bvectin(lu->node->num, &livrantemp))) {
                        if (lu->node->successors == NULL) {
                            if (ichain->isvar_issvar.location.memtype & 7 == Pmt && ichain->isvar_issvar.location.blockno == curblk &&
                                    (allcallersave || ichain->isvar_issvar.location.addr < r_s0) &&
                                    passedinreg(ichain, offsetpassedbyint)) {
                                lu->needregsave = false;
                            } else {
                                lu->needregsave = true;
                            }
                        } else {
                            if (lu->node->stat_tail->opc == Ucia || lu->node->stat_tail->opc == Ucup || lu->node->stat_tail->opc == Uicuf) {
                                if (bvectin(i, &lu->node->bvs.stage2.ppin)) {
                                    lu->needregsave = true;
                                } else {
                                    lu->needregsave = !allsucmember(lu->node->successors, bittab[i].liverange);
                                }
                            } else {
                                lu->needregsave = !allsucmember(lu->node->successors, bittab[i].liverange);
                            }
                        }
                    }
                    lu = lu->next;
                }

                if (!bvectempty(&bittab[i].liverange->unkC)) {
                    for (bb = 0; bb < curstaticno; bb++) {
                        if (bvectin(bb, &bittab[i].liverange->unkC) &&
                                bvectin(i, &bbtab[bb]->bvs.stage2.liveout) &&
                                bvectin(bbtab[bb]->num, &livrantemp)) {
                            if (bbtab[bb]->successors == NULL) {
                                if (ichain->isvar_issvar.location.memtype == Pmt &&
                                        ichain->isvar_issvar.location.blockno == curblk &&
                                        (allcallersave || ichain->isvar_issvar.location.addr < r_s0) &&
                                        passedinreg(ichain, offsetpassedbyint)) {
                                    needregsave = false;
                                } else {
                                    needregsave = true;
                                }
                            } else {
                                if (bbtab[bb]->stat_tail->opc == Ucia ||
                                        bbtab[bb]->stat_tail->opc == Ucup ||
                                        bbtab[bb]->stat_tail->opc == Uicuf) {
                                    if (bvectin(i, &bbtab[bb]->bvs.stage2.ppin)) {
                                        needregsave = true;
                                    } else {
                                        needregsave = !allsucmember(bbtab[bb]->successors, bittab[i].liverange);
                                    }
                                } else {
                                    needregsave = !allsucmember(bbtab[bb]->successors, bittab[i].liverange);
                                }
                            }

                            if (needregsave) {
                                lu = alloc_livbb();
                                if (lu == NULL) {
                                    return;
                                }

                                lu->node = bbtab[bb];
                                lu->next = bittab[i].liverange->liveunits;
                                bittab[i].liverange->liveunits = lu;
                                lu->liverange = bittab[i].liverange;
                                lu->next_in_block = bbtab[bb]->liveunit;
                                bbtab[bb]->liveunit = lu;
                                lu->needregsave = true;
                                resetbit(&bittab[i].liverange->unkC, bb);
                            }
                        }
                    }
                }
            }
        }
    }
}

/*
00465DA4 func_00465DA4
00467F04 split
*/
void insintf(struct InterfereList **interfere, struct LiveRange *lr) {
    struct InterfereList *intf;

    intf = alloc_new(sizeof(struct InterfereList), &perm_heap);
    if (intf == NULL) {
        outofmem = true;
        return;
    }

    intf->next = *interfere;
    intf->unk8 = 0;
    intf->unk9 = 0;
    intf->liverange = lr;
    *interfere = intf;
}

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel intfering
    .ent intfering
    # 00465E50 spilltemps
    # 00467F04 split
/* 00465D30 3C1C0FBB */  .cpload $t9
/* 00465D34 279C4560 */  
/* 00465D38 0399E021 */  
/* 00465D3C 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00465D40 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00465D44 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00465D48 AFA50024 */  sw    $a1, 0x24($sp)
/* 00465D4C 00803025 */  move  $a2, $a0
/* 00465D50 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00465D54 24C50014 */  addiu $a1, $a2, 0x14
/* 00465D58 0320F809 */  jalr  $t9
/* 00465D5C 8F848D68 */   lw     $a0, %got(livrantemp)($gp)
/* 00465D60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00465D64 8FA50024 */  lw    $a1, 0x24($sp)
/* 00465D68 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00465D6C 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00465D70 24A50014 */  addiu $a1, $a1, 0x14
/* 00465D74 0320F809 */  jalr  $t9
/* 00465D78 00000000 */   nop   
/* 00465D7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00465D80 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00465D84 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00465D88 0320F809 */  jalr  $t9
/* 00465D8C 00000000 */   nop   
/* 00465D90 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00465D94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00465D98 27BD0020 */  addiu $sp, $sp, 0x20
/* 00465D9C 03E00008 */  jr    $ra
/* 00465DA0 2C420001 */   sltiu $v0, $v0, 1
    .type intfering, @function
    .size intfering, .-intfering
    .end intfering
)"");

/*
00465E50 spilltemps
   Add both LiveRanges to each other's interference list
*/
static void func_00465DA4(struct LiveRange *lr1, struct LiveRange *lr2) {
    insintf(&lr1->interfere, lr2);
    lr1->unk24 += 1;
    insintf(&lr2->interfere, lr1);
    lr2->unk24 += 1;
}

/*
00465E50 spilltemps
   Find the Temploc with the given index
*/
static struct Temploc *func_00465E18(int index) {
    struct Temploc *temploc;

    temploc = templochead;
    while (temploc->index != index) {
        temploc = temploc->next;
    }
    return temploc;
}

//int intfering(struct LiveRange *, struct LiveRange *); // static
/*
00456A2C oneproc
*/
void spilltemps(void) {
    int bit; // spBC
    struct IChain *ichain; // spA0
    bool found; // sp9B
    struct Temploc *temploc;
    int regclass; // sp8C
    int i;
    int j;
    struct Graphnode *node;
    Datatype dtype;
    int size; // s0
    int align;
    int mod;

    numlr = 0;
    contiglr = 0;
    numsplitlu = 0;
    numcoloredlr = 0;
    allococ = 0;
    numcantcoloredlr = 0;
    num0occurlr = 0;
    numcalloverheadlr = 0;
    numsparselr = 0;
    numnotwellformedlr = 0;

    for (regclass = 1; regclass < 3; regclass++) {
        for (i = 0; i < bitposcount; i++) {
            if (bvectin(i, &iscolored[regclass - 1])) {
                numlr += 1;
                for (j = i + 1; j < bitposcount; j++) {
                    if (bvectin(j, &iscolored[regclass - 1])) {
                        if (intfering(bittab[i].liverange, bittab[j].liverange)) {
                            func_00465DA4(bittab[i].liverange, bittab[j].liverange);
                        }
                    }
                }
            }
        }
    }
    finalnumlr = numlr;

    if (outofmem) {
        return;
    }

    tempcount = 0;
    setofspills.blocks = NULL;
    setofspills.num_blocks = 0;
    checkbvlist(&setofspills);

    for (bit = 0; bit < firstconstbit; bit++) {
        ichain = bittab[bit].ichain;
        if (bvectin(bit, &coloreditems)) {

            initbv(&setofspills, (struct BitVectorBlock) {0});

            node = graphhead;
            while (node != NULL) {
                if (bvectin(bit, &node->bvs.stage2.unk15C)) {
                    for (i = 0; i < bit; i++) {
                        if (bvectin(i, &node->bvs.stage2.unk15C)) {
                            switch (bittab[i].ichain->type) {
                                case isilda:
                                    setbit(&setofspills, bittab[i].ichain->islda_isilda.temploc->index);
                                    break;

                                case issvar:
                                    setbit(&setofspills, bittab[i].ichain->isvar_issvar.temploc->index);
                                    break;

                                case isop:
                                    setbit(&setofspills, bittab[i].ichain->isop.temploc->index);
                                    break;

                                default:
                                    caseerror(1, 949, "uoptreg2.p", 10);
                                    break;
                            }
                        }
                    }
                }
                node = node->next;
            }

            if (ichain->type == isop) {
                dtype = ichain->isop.datatype;
            } else {
                dtype = ichain->dtype;
            }

            if (dtype != Sdt) {
                size = sizeoftyp(dtype);
            } else if (ichain->type == issvar) {
                size = ichain->isvar_issvar.size;
            } else if (ichain->isop.opc == Uadj) {
                size = ichain->isop.unk24_u16;
            } else {
                size = ichain->isop.size;
            }

            found = false;
            for (i = 0; !found && i < tempcount; i++) {
                if (!bvectin(i, &setofspills)) {
                    temploc = func_00465E18(i);
                    if (temploc->size == size) {
                        found = true;
                        break;
                    }
                }
            }

            if (!found) {
                tempcount++;
                temploc = alloc_new(sizeof(struct Temploc), &perm_heap);
                if (temploc == NULL) {
                    outofmem = true;
                    return;
                }

                temploc->next = NULL;
                temploc->index = i;
                if (templochead == NULL) {
                    templochead = temploc;
                } else {
                    temploctail->next = temploc;
                }

                /* In Pascal, min(x,y) is a builtin function that can be optimized
                 * if (not (tempdisp mod min(size, 8) = 0)) then
                 *      tempdisp := (tempdisp + min(size, 8)) - (tempdisp mod min(size, 8));
                 */
                align = MIN(size, 8);
                mod = tempdisp % align;
                if ((mod ^ align) < 0) {
                    mod += align;
                }
                if (mod != 0) {
                    tempdisp = (tempdisp + align) - mod;
                }

                if (!stack_reversed) {
                    tempdisp += size;
                    temploc->disp = -tempdisp;
                } else {
                    temploc->disp = tempdisp;
                    tempdisp += size;
                }
                temploc->size = size;
                temploctail = temploc;
            }

            switch (ichain->type) {
                case issvar:
                    ichain->isvar_issvar.temploc = temploc;
                    break;

                case isilda:
                    ichain->islda_isilda.temploc = temploc;
                    break;

                case isop:
                    ichain->isop.temploc = temploc;
                    break;

                default:
                    caseerror(1, 1007, "uoptreg2.p", 10);
                    break;
            }
        }
    }
}

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel dellivbb
    .ent dellivbb
    # 004669A8 addadjacents
    # 00467F04 split
/* 004664FC 8C820000 */  lw    $v0, ($a0)
/* 00466500 54A20005 */  bnel  $a1, $v0, .L00466518
/* 00466504 8C440004 */   lw    $a0, 4($v0)
/* 00466508 8C4E0004 */  lw    $t6, 4($v0)
/* 0046650C 03E00008 */  jr    $ra
/* 00466510 AC8E0000 */   sw    $t6, ($a0)

/* 00466514 8C440004 */  lw    $a0, 4($v0)
.L00466518:
/* 00466518 00401825 */  move  $v1, $v0
/* 0046651C 50A40006 */  beql  $a1, $a0, .L00466538
/* 00466520 8CAF0004 */   lw    $t7, 4($a1)
/* 00466524 00801825 */  move  $v1, $a0
.L00466528:
/* 00466528 8C840004 */  lw    $a0, 4($a0)
/* 0046652C 54A4FFFE */  bnel  $a1, $a0, .L00466528
/* 00466530 00801825 */   move  $v1, $a0
/* 00466534 8CAF0004 */  lw    $t7, 4($a1)
.L00466538:
/* 00466538 AC6F0004 */  sw    $t7, 4($v1)
/* 0046653C 03E00008 */  jr    $ra
/* 00466540 00000000 */   nop   
    .type dellivbb, @function
    .size dellivbb, .-dellivbb
    .end dellivbb
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel updatecolorsleft
    .ent updatecolorsleft
    # 004669A8 addadjacents
    # 00467F04 split
    # 00469280 globalcolor
/* 00466544 3C1C0FBB */  .cpload $t9
/* 00466548 279C3D4C */  
/* 0046654C 0399E021 */  
/* 00466550 8F8E8D34 */  lw     $t6, %got(firsterreg)($gp)
/* 00466554 8F988D3C */  lw     $t8, %got(lasterreg)($gp)
/* 00466558 00053080 */  sll   $a2, $a1, 2
/* 0046655C 25CEFFFC */  addiu $t6, $t6, -4
/* 00466560 2718FFFC */  addiu $t8, $t8, -4
/* 00466564 00D8C821 */  addu  $t9, $a2, $t8
/* 00466568 00CE7821 */  addu  $t7, $a2, $t6
/* 0046656C 8DE30000 */  lw    $v1, ($t7)
/* 00466570 8F270000 */  lw    $a3, ($t9)
/* 00466574 00001025 */  move  $v0, $zero
/* 00466578 00E3082A */  slt   $at, $a3, $v1
/* 0046657C 14200043 */  bnez  $at, .L0046668C
/* 00466580 24E70001 */   addiu $a3, $a3, 1
/* 00466584 00E34823 */  subu  $t1, $a3, $v1
/* 00466588 31290003 */  andi  $t1, $t1, 3
/* 0046658C 11200010 */  beqz  $t1, .L004665D0
/* 00466590 00602825 */   move  $a1, $v1
/* 00466594 01234021 */  addu  $t0, $t1, $v1
/* 00466598 2CAA0040 */  sltiu $t2, $a1, 0x40
.L0046659C:
/* 0046659C 11400006 */  beqz  $t2, .L004665B8
/* 004665A0 00055943 */   sra   $t3, $a1, 5
/* 004665A4 000B6080 */  sll   $t4, $t3, 2
/* 004665A8 008C6821 */  addu  $t5, $a0, $t4
/* 004665AC 8DAE0028 */  lw    $t6, 0x28($t5)
/* 004665B0 00AE7804 */  sllv  $t7, $t6, $a1
/* 004665B4 29EA0000 */  slti  $t2, $t7, 0
.L004665B8:
/* 004665B8 15400002 */  bnez  $t2, .L004665C4
/* 004665BC 24A50001 */   addiu $a1, $a1, 1
/* 004665C0 24420001 */  addiu $v0, $v0, 1
.L004665C4:
/* 004665C4 5505FFF5 */  bnel  $t0, $a1, .L0046659C
/* 004665C8 2CAA0040 */   sltiu $t2, $a1, 0x40
/* 004665CC 10A7002F */  beq   $a1, $a3, .L0046668C
.L004665D0:
/* 004665D0 2CB90040 */   sltiu $t9, $a1, 0x40
.L004665D4:
/* 004665D4 13200007 */  beqz  $t9, .L004665F4
/* 004665D8 24AA0001 */   addiu $t2, $a1, 1
/* 004665DC 00055943 */  sra   $t3, $a1, 5
/* 004665E0 000B6080 */  sll   $t4, $t3, 2
/* 004665E4 008C6821 */  addu  $t5, $a0, $t4
/* 004665E8 8DAE0028 */  lw    $t6, 0x28($t5)
/* 004665EC 00AE7804 */  sllv  $t7, $t6, $a1
/* 004665F0 29F90000 */  slti  $t9, $t7, 0
.L004665F4:
/* 004665F4 17200002 */  bnez  $t9, .L00466600
/* 004665F8 2D4B0040 */   sltiu $t3, $t2, 0x40
/* 004665FC 24420001 */  addiu $v0, $v0, 1
.L00466600:
/* 00466600 11600006 */  beqz  $t3, .L0046661C
/* 00466604 000A6143 */   sra   $t4, $t2, 5
/* 00466608 000C6880 */  sll   $t5, $t4, 2
/* 0046660C 008D7021 */  addu  $t6, $a0, $t5
/* 00466610 8DCF0028 */  lw    $t7, 0x28($t6)
/* 00466614 014FC004 */  sllv  $t8, $t7, $t2
/* 00466618 2B0B0000 */  slti  $t3, $t8, 0
.L0046661C:
/* 0046661C 15600002 */  bnez  $t3, .L00466628
/* 00466620 24AC0002 */   addiu $t4, $a1, 2
/* 00466624 24420001 */  addiu $v0, $v0, 1
.L00466628:
/* 00466628 2D8D0040 */  sltiu $t5, $t4, 0x40
/* 0046662C 11A00006 */  beqz  $t5, .L00466648
/* 00466630 000C7143 */   sra   $t6, $t4, 5
/* 00466634 000E7880 */  sll   $t7, $t6, 2
/* 00466638 008F5021 */  addu  $t2, $a0, $t7
/* 0046663C 8D580028 */  lw    $t8, 0x28($t2)
/* 00466640 0198C804 */  sllv  $t9, $t8, $t4
/* 00466644 2B2D0000 */  slti  $t5, $t9, 0
.L00466648:
/* 00466648 15A00002 */  bnez  $t5, .L00466654
/* 0046664C 24AE0003 */   addiu $t6, $a1, 3
/* 00466650 24420001 */  addiu $v0, $v0, 1
.L00466654:
/* 00466654 2DCF0040 */  sltiu $t7, $t6, 0x40
/* 00466658 11E00007 */  beqz  $t7, .L00466678
/* 0046665C 24A50004 */   addiu $a1, $a1, 4
/* 00466660 000E5143 */  sra   $t2, $t6, 5
/* 00466664 000AC080 */  sll   $t8, $t2, 2
/* 00466668 00986021 */  addu  $t4, $a0, $t8
/* 0046666C 8D990028 */  lw    $t9, 0x28($t4)
/* 00466670 01D95804 */  sllv  $t3, $t9, $t6
/* 00466674 296F0000 */  slti  $t7, $t3, 0
.L00466678:
/* 00466678 15E00002 */  bnez  $t7, .L00466684
/* 0046667C 00000000 */   nop   
/* 00466680 24420001 */  addiu $v0, $v0, 1
.L00466684:
/* 00466684 54A7FFD3 */  bnel  $a1, $a3, .L004665D4
/* 00466688 2CB90040 */   sltiu $t9, $a1, 0x40
.L0046668C:
/* 0046668C 8F8A8D38 */  lw     $t2, %got(firsteereg)($gp)
/* 00466690 8F8C8D40 */  lw     $t4, %got(lasteereg)($gp)
/* 00466694 254AFFFC */  addiu $t2, $t2, -4
/* 00466698 258CFFFC */  addiu $t4, $t4, -4
/* 0046669C 00CCC821 */  addu  $t9, $a2, $t4
/* 004666A0 00CAC021 */  addu  $t8, $a2, $t2
/* 004666A4 8F030000 */  lw    $v1, ($t8)
/* 004666A8 8F270000 */  lw    $a3, ($t9)
/* 004666AC 00E3082A */  slt   $at, $a3, $v1
/* 004666B0 14200045 */  bnez  $at, .L004667C8
/* 004666B4 24E70001 */   addiu $a3, $a3, 1
/* 004666B8 00E34823 */  subu  $t1, $a3, $v1
/* 004666BC 31290003 */  andi  $t1, $t1, 3
/* 004666C0 11200011 */  beqz  $t1, .L00466708
/* 004666C4 00602825 */   move  $a1, $v1
/* 004666C8 01233021 */  addu  $a2, $t1, $v1
/* 004666CC 2CAE0040 */  sltiu $t6, $a1, 0x40
.L004666D0:
/* 004666D0 11C00006 */  beqz  $t6, .L004666EC
/* 004666D4 00055943 */   sra   $t3, $a1, 5
/* 004666D8 000B6880 */  sll   $t5, $t3, 2
/* 004666DC 008D7821 */  addu  $t7, $a0, $t5
/* 004666E0 8DEA0028 */  lw    $t2, 0x28($t7)
/* 004666E4 00AAC004 */  sllv  $t8, $t2, $a1
/* 004666E8 2B0E0000 */  slti  $t6, $t8, 0
.L004666EC:
/* 004666EC 15C00002 */  bnez  $t6, .L004666F8
/* 004666F0 24A50001 */   addiu $a1, $a1, 1
/* 004666F4 24420001 */  addiu $v0, $v0, 1
.L004666F8:
/* 004666F8 54C5FFF5 */  bnel  $a2, $a1, .L004666D0
/* 004666FC 2CAE0040 */   sltiu $t6, $a1, 0x40
/* 00466700 10A70031 */  beq   $a1, $a3, .L004667C8
/* 00466704 00000000 */   nop   
.L00466708:
/* 00466708 2CB90040 */  sltiu $t9, $a1, 0x40
.L0046670C:
/* 0046670C 13200007 */  beqz  $t9, .L0046672C
/* 00466710 24AE0001 */   addiu $t6, $a1, 1
/* 00466714 00055943 */  sra   $t3, $a1, 5
/* 00466718 000B6880 */  sll   $t5, $t3, 2
/* 0046671C 008D7821 */  addu  $t7, $a0, $t5
/* 00466720 8DEA0028 */  lw    $t2, 0x28($t7)
/* 00466724 00AAC004 */  sllv  $t8, $t2, $a1
/* 00466728 2B190000 */  slti  $t9, $t8, 0
.L0046672C:
/* 0046672C 17200002 */  bnez  $t9, .L00466738
/* 00466730 2DCB0040 */   sltiu $t3, $t6, 0x40
/* 00466734 24420001 */  addiu $v0, $v0, 1
.L00466738:
/* 00466738 11600007 */  beqz  $t3, .L00466758
/* 0046673C 000E6943 */   sra   $t5, $t6, 5
/* 00466740 000D7880 */  sll   $t7, $t5, 2
/* 00466744 008F5021 */  addu  $t2, $a0, $t7
/* 00466748 8D580028 */  lw    $t8, 0x28($t2)
/* 0046674C 01D86004 */  sllv  $t4, $t8, $t6
/* 00466750 29990000 */  slti  $t9, $t4, 0
/* 00466754 03205825 */  move  $t3, $t9
.L00466758:
/* 00466758 15600002 */  bnez  $t3, .L00466764
/* 0046675C 24AD0002 */   addiu $t5, $a1, 2
/* 00466760 24420001 */  addiu $v0, $v0, 1
.L00466764:
/* 00466764 2DAF0040 */  sltiu $t7, $t5, 0x40
/* 00466768 11E00006 */  beqz  $t7, .L00466784
/* 0046676C 000D5143 */   sra   $t2, $t5, 5
/* 00466770 000AC080 */  sll   $t8, $t2, 2
/* 00466774 00987021 */  addu  $t6, $a0, $t8
/* 00466778 8DCC0028 */  lw    $t4, 0x28($t6)
/* 0046677C 01ACC804 */  sllv  $t9, $t4, $t5
/* 00466780 2B2F0000 */  slti  $t7, $t9, 0
.L00466784:
/* 00466784 15E00002 */  bnez  $t7, .L00466790
/* 00466788 24AA0003 */   addiu $t2, $a1, 3
/* 0046678C 24420001 */  addiu $v0, $v0, 1
.L00466790:
/* 00466790 2D580040 */  sltiu $t8, $t2, 0x40
/* 00466794 13000007 */  beqz  $t8, .L004667B4
/* 00466798 24A50004 */   addiu $a1, $a1, 4
/* 0046679C 000A7143 */  sra   $t6, $t2, 5
/* 004667A0 000E6080 */  sll   $t4, $t6, 2
/* 004667A4 008C6821 */  addu  $t5, $a0, $t4
/* 004667A8 8DB90028 */  lw    $t9, 0x28($t5)
/* 004667AC 01595804 */  sllv  $t3, $t9, $t2
/* 004667B0 29780000 */  slti  $t8, $t3, 0
.L004667B4:
/* 004667B4 17000002 */  bnez  $t8, .L004667C0
/* 004667B8 00000000 */   nop   
/* 004667BC 24420001 */  addiu $v0, $v0, 1
.L004667C0:
/* 004667C0 54A7FFD2 */  bnel  $a1, $a3, .L0046670C
/* 004667C4 2CB90040 */   sltiu $t9, $a1, 0x40
.L004667C8:
/* 004667C8 03E00008 */  jr    $ra
/* 004667CC A0820021 */   sb    $v0, 0x21($a0)
    .type updatecolorsleft, @function
    .size updatecolorsleft, .-updatecolorsleft
    .end updatecolorsleft
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel updateforbidden
    .ent updateforbidden
    # 004669A8 addadjacents
    # 00467F04 split
    # 00469280 globalcolor
/* 004667D0 10A0000A */  beqz  $a1, .L004667FC
/* 004667D4 27BDFFF8 */   addiu $sp, $sp, -8
/* 004667D8 00A07827 */  not   $t7, $a1
/* 004667DC 24B9FFE0 */  addiu $t9, $a1, -0x20
/* 004667E0 2F280020 */  sltiu $t0, $t9, 0x20
/* 004667E4 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 004667E8 01EEC004 */  sllv  $t8, $t6, $t7
/* 004667EC 01E84804 */  sllv  $t1, $t0, $t7
/* 004667F0 AFA90004 */  sw    $t1, 4($sp)
/* 004667F4 10000003 */  b     .L00466804
/* 004667F8 AFB80000 */   sw    $t8, ($sp)
.L004667FC:
/* 004667FC AFA00000 */  sw    $zero, ($sp)
/* 00466800 AFA00004 */  sw    $zero, 4($sp)
.L00466804:
/* 00466804 000750C0 */  sll   $t2, $a3, 3
/* 00466808 8FAD0000 */  lw    $t5, ($sp)
/* 0046680C 008A5821 */  addu  $t3, $a0, $t2
/* 00466810 8D6C002C */  lw    $t4, 0x2c($t3)
/* 00466814 8CD90028 */  lw    $t9, 0x28($a2)
/* 00466818 01A07027 */  not   $t6, $t5
/* 0046681C 018EC024 */  and   $t8, $t4, $t6
/* 00466820 03384025 */  or    $t0, $t9, $t8
/* 00466824 8FA90004 */  lw    $t1, 4($sp)
/* 00466828 ACC80028 */  sw    $t0, 0x28($a2)
/* 0046682C 8D6F0030 */  lw    $t7, 0x30($t3)
/* 00466830 8CCC002C */  lw    $t4, 0x2c($a2)
/* 00466834 01205027 */  not   $t2, $t1
/* 00466838 01EA6824 */  and   $t5, $t7, $t2
/* 0046683C 018D7025 */  or    $t6, $t4, $t5
/* 00466840 ACCE002C */  sw    $t6, 0x2c($a2)
/* 00466844 03E00008 */  jr    $ra
/* 00466848 27BD0008 */   addiu $sp, $sp, 8
    .type updateforbidden, @function
    .size updateforbidden, .-updateforbidden
    .end updateforbidden
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel findsharedintf
    .ent findsharedintf
    # 00467F04 split
/* 0046684C 3C1C0FBB */  .cpload $t9
/* 00466850 279C3A44 */  
/* 00466854 0399E021 */  
/* 00466858 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0046685C AFB2001C */  sw    $s2, 0x1c($sp)
/* 00466860 AFB10018 */  sw    $s1, 0x18($sp)
/* 00466864 AFB00014 */  sw    $s0, 0x14($sp)
/* 00466868 00808025 */  move  $s0, $a0
/* 0046686C 00A09025 */  move  $s2, $a1
/* 00466870 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00466874 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00466878 AFB40024 */  sw    $s4, 0x24($sp)
/* 0046687C AFB30020 */  sw    $s3, 0x20($sp)
/* 00466880 10800017 */  beqz  $a0, .L004668E0
/* 00466884 00008825 */   move  $s1, $zero
/* 00466888 24140001 */  li    $s4, 1
/* 0046688C 2413FFFF */  li    $s3, -1
/* 00466890 8E020000 */  lw    $v0, ($s0)
.L00466894:
/* 00466894 50400010 */  beql  $v0, $zero, .L004668D8
/* 00466898 8E100004 */   lw    $s0, 4($s0)
/* 0046689C 804E0020 */  lb    $t6, 0x20($v0)
/* 004668A0 166E0003 */  bne   $s3, $t6, .L004668B0
/* 004668A4 00000000 */   nop   
/* 004668A8 1000000A */  b     .L004668D4
/* 004668AC AE000000 */   sw    $zero, ($s0)
.L004668B0:
/* 004668B0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004668B4 02402025 */  move  $a0, $s2
/* 004668B8 24450014 */  addiu $a1, $v0, 0x14
/* 004668BC 0320F809 */  jalr  $t9
/* 004668C0 00000000 */   nop   
/* 004668C4 10400003 */  beqz  $v0, .L004668D4
/* 004668C8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004668CC A2140008 */  sb    $s4, 8($s0)
/* 004668D0 26310001 */  addiu $s1, $s1, 1
.L004668D4:
/* 004668D4 8E100004 */  lw    $s0, 4($s0)
.L004668D8:
/* 004668D8 5600FFEE */  bnezl $s0, .L00466894
/* 004668DC 8E020000 */   lw    $v0, ($s0)
.L004668E0:
/* 004668E0 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004668E4 02201025 */  move  $v0, $s1
/* 004668E8 8FB10018 */  lw    $s1, 0x18($sp)
/* 004668EC 8FB00014 */  lw    $s0, 0x14($sp)
/* 004668F0 8FB2001C */  lw    $s2, 0x1c($sp)
/* 004668F4 8FB30020 */  lw    $s3, 0x20($sp)
/* 004668F8 8FB40024 */  lw    $s4, 0x24($sp)
/* 004668FC 03E00008 */  jr    $ra
/* 00466900 27BD0030 */   addiu $sp, $sp, 0x30
    .type findsharedintf, @function
    .size findsharedintf, .-findsharedintf
    .end findsharedintf
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel marksharedintf
    .ent marksharedintf
    # 004669A8 addadjacents
/* 00466904 3C1C0FBB */  .cpload $t9
/* 00466908 279C398C */  
/* 0046690C 0399E021 */  
/* 00466910 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00466914 AFB20020 */  sw    $s2, 0x20($sp)
/* 00466918 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046691C AFB00018 */  sw    $s0, 0x18($sp)
/* 00466920 00808025 */  move  $s0, $a0
/* 00466924 00A09025 */  move  $s2, $a1
/* 00466928 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0046692C AFBC0028 */  sw    $gp, 0x28($sp)
/* 00466930 AFB30024 */  sw    $s3, 0x24($sp)
/* 00466934 10800014 */  beqz  $a0, .L00466988
/* 00466938 00008825 */   move  $s1, $zero
/* 0046693C 24130001 */  li    $s3, 1
/* 00466940 920E0008 */  lbu   $t6, 8($s0)
.L00466944:
/* 00466944 55C0000E */  bnezl $t6, .L00466980
/* 00466948 8E100004 */   lw    $s0, 4($s0)
/* 0046694C 8E020000 */  lw    $v0, ($s0)
/* 00466950 5040000B */  beql  $v0, $zero, .L00466980
/* 00466954 8E100004 */   lw    $s0, 4($s0)
/* 00466958 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046695C 02402025 */  move  $a0, $s2
/* 00466960 24450014 */  addiu $a1, $v0, 0x14
/* 00466964 0320F809 */  jalr  $t9
/* 00466968 00000000 */   nop   
/* 0046696C 10400003 */  beqz  $v0, .L0046697C
/* 00466970 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00466974 A2130009 */  sb    $s3, 9($s0)
/* 00466978 26310001 */  addiu $s1, $s1, 1
.L0046697C:
/* 0046697C 8E100004 */  lw    $s0, 4($s0)
.L00466980:
/* 00466980 5600FFF0 */  bnezl $s0, .L00466944
/* 00466984 920E0008 */   lbu   $t6, 8($s0)
.L00466988:
/* 00466988 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0046698C 02201025 */  move  $v0, $s1
/* 00466990 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00466994 8FB00018 */  lw    $s0, 0x18($sp)
/* 00466998 8FB20020 */  lw    $s2, 0x20($sp)
/* 0046699C 8FB30024 */  lw    $s3, 0x24($sp)
/* 004669A0 03E00008 */  jr    $ra
/* 004669A4 27BD0030 */   addiu $sp, $sp, 0x30
    .type marksharedintf, @function
    .size marksharedintf, .-marksharedintf
    .end marksharedintf
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel addadjacents
    .ent addadjacents
    # 00467F04 split
/* 004669A8 3C1C0FBB */  .cpload $t9
/* 004669AC 279C38E8 */  
/* 004669B0 0399E021 */  
/* 004669B4 27BDFF98 */  addiu $sp, $sp, -0x68
/* 004669B8 8F8F8C70 */  lw     $t7, %got(forminginx)($gp)
/* 004669BC 8F8E8C6C */  lw     $t6, %got(formingtab)($gp)
/* 004669C0 AFBF003C */  sw    $ra, 0x3c($sp)
/* 004669C4 8DEF0000 */  lw    $t7, ($t7)
/* 004669C8 8DCE0000 */  lw    $t6, ($t6)
/* 004669CC AFBE0038 */  sw    $fp, 0x38($sp)
/* 004669D0 000FC080 */  sll   $t8, $t7, 2
/* 004669D4 AFBC0034 */  sw    $gp, 0x34($sp)
/* 004669D8 AFB70030 */  sw    $s7, 0x30($sp)
/* 004669DC AFB6002C */  sw    $s6, 0x2c($sp)
/* 004669E0 AFB50028 */  sw    $s5, 0x28($sp)
/* 004669E4 AFB40024 */  sw    $s4, 0x24($sp)
/* 004669E8 AFB30020 */  sw    $s3, 0x20($sp)
/* 004669EC AFB2001C */  sw    $s2, 0x1c($sp)
/* 004669F0 AFB10018 */  sw    $s1, 0x18($sp)
/* 004669F4 AFB00014 */  sw    $s0, 0x14($sp)
/* 004669F8 AFA60070 */  sw    $a2, 0x70($sp)
/* 004669FC AFA70074 */  sw    $a3, 0x74($sp)
/* 00466A00 01D8C821 */  addu  $t9, $t6, $t8
/* 00466A04 8F280000 */  lw    $t0, ($t9)
/* 00466A08 00A09025 */  move  $s2, $a1
/* 00466A0C 0080A825 */  move  $s5, $a0
/* 00466A10 8D110018 */  lw    $s1, 0x18($t0)
/* 00466A14 24A50014 */  addiu $a1, $a1, 0x14
/* 00466A18 24130001 */  li    $s3, 1
/* 00466A1C 5220009A */  beql  $s1, $zero, .L00466C88
/* 00466A20 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00466A24 AFA50044 */  sw    $a1, 0x44($sp)
/* 00466A28 8F9E8C74 */  lw     $fp, %got(formingmax)($gp)
.L00466A2C:
/* 00466A2C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466A30 8E290000 */  lw    $t1, ($s1)
/* 00466A34 8FA50044 */  lw    $a1, 0x44($sp)
/* 00466A38 0320F809 */  jalr  $t9
/* 00466A3C 95240008 */   lhu   $a0, 8($t1)
/* 00466A40 1440008D */  bnez  $v0, .L00466C78
/* 00466A44 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00466A48 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466A4C 8E2A0000 */  lw    $t2, ($s1)
/* 00466A50 26B70014 */  addiu $s7, $s5, 0x14
/* 00466A54 02E02825 */  move  $a1, $s7
/* 00466A58 0320F809 */  jalr  $t9
/* 00466A5C 95440008 */   lhu   $a0, 8($t2)
/* 00466A60 10400085 */  beqz  $v0, .L00466C78
/* 00466A64 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00466A68 8F9984D8 */  lw    $t9, %call16(gettolivbb)($gp)
/* 00466A6C 8EA40000 */  lw    $a0, ($s5)
/* 00466A70 8E250000 */  lw    $a1, ($s1)
/* 00466A74 0320F809 */  jalr  $t9
/* 00466A78 00000000 */   nop   
/* 00466A7C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466A80 8E4B0028 */  lw    $t3, 0x28($s2)
/* 00466A84 8E4C002C */  lw    $t4, 0x2c($s2)
/* 00466A88 8F998510 */  lw    $t9, %call16(marksharedintf)($gp)
/* 00466A8C 8E2D0000 */  lw    $t5, ($s1)
/* 00466A90 AFAB005C */  sw    $t3, 0x5c($sp)
/* 00466A94 AFAC0060 */  sw    $t4, 0x60($sp)
/* 00466A98 00408025 */  move  $s0, $v0
/* 00466A9C 92540021 */  lbu   $s4, 0x21($s2)
/* 00466AA0 8EA40038 */  lw    $a0, 0x38($s5)
/* 00466AA4 0320F809 */  jalr  $t9
/* 00466AA8 95A50008 */   lhu   $a1, 8($t5)
/* 00466AAC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466AB0 0040B025 */  move  $s6, $v0
/* 00466AB4 8E240000 */  lw    $a0, ($s1)
/* 00466AB8 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 00466ABC 92050013 */  lbu   $a1, 0x13($s0)
/* 00466AC0 02403025 */  move  $a2, $s2
/* 00466AC4 0320F809 */  jalr  $t9
/* 00466AC8 8FA70074 */   lw    $a3, 0x74($sp)
/* 00466ACC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466AD0 02402025 */  move  $a0, $s2
/* 00466AD4 8FA50074 */  lw    $a1, 0x74($sp)
/* 00466AD8 8F998504 */  lw    $t9, %call16(updatecolorsleft)($gp)
/* 00466ADC 0320F809 */  jalr  $t9
/* 00466AE0 00000000 */   nop   
/* 00466AE4 02D4082A */  slt   $at, $s6, $s4
/* 00466AE8 1020000C */  beqz  $at, .L00466B1C
/* 00466AEC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00466AF0 924F0021 */  lbu   $t7, 0x21($s2)
/* 00466AF4 8E580024 */  lw    $t8, 0x24($s2)
/* 00466AF8 000F7040 */  sll   $t6, $t7, 1
/* 00466AFC 0316C821 */  addu  $t9, $t8, $s6
/* 00466B00 01D9082A */  slt   $at, $t6, $t9
/* 00466B04 14200005 */  bnez  $at, .L00466B1C
/* 00466B08 00000000 */   nop   
/* 00466B0C 8F888AAC */  lw     $t0, %got(doheurab)($gp)
/* 00466B10 91080000 */  lbu   $t0, ($t0)
/* 00466B14 55000009 */  bnezl $t0, .L00466B3C
/* 00466B18 8FCB0000 */   lw    $t3, ($fp)
.L00466B1C:
/* 00466B1C 8F898AAC */  lw     $t1, %got(doheurab)($gp)
/* 00466B20 91290000 */  lbu   $t1, ($t1)
/* 00466B24 55200049 */  bnezl $t1, .L00466C4C
/* 00466B28 8FA9005C */   lw    $t1, 0x5c($sp)
/* 00466B2C 924A0021 */  lbu   $t2, 0x21($s2)
/* 00466B30 51400046 */  beql  $t2, $zero, .L00466C4C
/* 00466B34 8FA9005C */   lw    $t1, 0x5c($sp)
/* 00466B38 8FCB0000 */  lw    $t3, ($fp)
.L00466B3C:
/* 00466B3C 8F8F8C6C */  lw     $t7, %got(formingtab)($gp)
/* 00466B40 8E2D0000 */  lw    $t5, ($s1)
/* 00466B44 256C0001 */  addiu $t4, $t3, 1
/* 00466B48 AFCC0000 */  sw    $t4, ($fp)
/* 00466B4C 8DEF0000 */  lw    $t7, ($t7)
/* 00466B50 000C7080 */  sll   $t6, $t4, 2
/* 00466B54 02E02025 */  move  $a0, $s7
/* 00466B58 01EEC821 */  addu  $t9, $t7, $t6
/* 00466B5C AF2D0000 */  sw    $t5, ($t9)
/* 00466B60 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00466B64 8E280000 */  lw    $t0, ($s1)
/* 00466B68 0320F809 */  jalr  $t9
/* 00466B6C 95050008 */   lhu   $a1, 8($t0)
/* 00466B70 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466B74 8F8989DC */  lw     $t1, %got(dft_livbb)($gp)
/* 00466B78 8D290000 */  lw    $t1, ($t1)
/* 00466B7C 1209000E */  beq   $s0, $t1, .L00466BB8
/* 00466B80 00000000 */   nop   
/* 00466B84 8F998500 */  lw    $t9, %call16(dellivbb)($gp)
/* 00466B88 26A40008 */  addiu $a0, $s5, 8
/* 00466B8C 02002825 */  move  $a1, $s0
/* 00466B90 0320F809 */  jalr  $t9
/* 00466B94 00000000 */   nop   
/* 00466B98 8FAA0070 */  lw    $t2, 0x70($sp)
/* 00466B9C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466BA0 8D4B0000 */  lw    $t3, ($t2)
/* 00466BA4 AD700004 */  sw    $s0, 4($t3)
/* 00466BA8 8FAC0070 */  lw    $t4, 0x70($sp)
/* 00466BAC AE000004 */  sw    $zero, 4($s0)
/* 00466BB0 1000000F */  b     .L00466BF0
/* 00466BB4 AD900000 */   sw    $s0, ($t4)
.L00466BB8:
/* 00466BB8 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00466BBC 8E380000 */  lw    $t8, ($s1)
/* 00466BC0 26A4000C */  addiu $a0, $s5, 0xc
/* 00466BC4 2650000C */  addiu $s0, $s2, 0xc
/* 00466BC8 0320F809 */  jalr  $t9
/* 00466BCC 97050008 */   lhu   $a1, 8($t8)
/* 00466BD0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466BD4 8E2F0000 */  lw    $t7, ($s1)
/* 00466BD8 02002025 */  move  $a0, $s0
/* 00466BDC 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 00466BE0 95E50008 */  lhu   $a1, 8($t7)
/* 00466BE4 0320F809 */  jalr  $t9
/* 00466BE8 00000000 */   nop   
/* 00466BEC 8FBC0034 */  lw    $gp, 0x34($sp)
.L00466BF0:
/* 00466BF0 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 00466BF4 8E2E0000 */  lw    $t6, ($s1)
/* 00466BF8 8FA40044 */  lw    $a0, 0x44($sp)
/* 00466BFC 0320F809 */  jalr  $t9
/* 00466C00 95C50008 */   lhu   $a1, 8($t6)
/* 00466C04 8E4D0024 */  lw    $t5, 0x24($s2)
/* 00466C08 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466C0C 02CDC821 */  addu  $t9, $s6, $t5
/* 00466C10 AE590024 */  sw    $t9, 0x24($s2)
/* 00466C14 8EA20038 */  lw    $v0, 0x38($s5)
/* 00466C18 50400018 */  beql  $v0, $zero, .L00466C7C
/* 00466C1C 8E310004 */   lw    $s1, 4($s1)
/* 00466C20 90480009 */  lbu   $t0, 9($v0)
.L00466C24:
/* 00466C24 51000004 */  beql  $t0, $zero, .L00466C38
/* 00466C28 8C420004 */   lw    $v0, 4($v0)
/* 00466C2C A0530008 */  sb    $s3, 8($v0)
/* 00466C30 A0400009 */  sb    $zero, 9($v0)
/* 00466C34 8C420004 */  lw    $v0, 4($v0)
.L00466C38:
/* 00466C38 5440FFFA */  bnezl $v0, .L00466C24
/* 00466C3C 90480009 */   lbu   $t0, 9($v0)
/* 00466C40 1000000E */  b     .L00466C7C
/* 00466C44 8E310004 */   lw    $s1, 4($s1)
/* 00466C48 8FA9005C */  lw    $t1, 0x5c($sp)
.L00466C4C:
/* 00466C4C 8FAA0060 */  lw    $t2, 0x60($sp)
/* 00466C50 A2540021 */  sb    $s4, 0x21($s2)
/* 00466C54 AE490028 */  sw    $t1, 0x28($s2)
/* 00466C58 AE4A002C */  sw    $t2, 0x2c($s2)
/* 00466C5C 8EA20038 */  lw    $v0, 0x38($s5)
/* 00466C60 50400006 */  beql  $v0, $zero, .L00466C7C
/* 00466C64 8E310004 */   lw    $s1, 4($s1)
/* 00466C68 A0400009 */  sb    $zero, 9($v0)
.L00466C6C:
/* 00466C6C 8C420004 */  lw    $v0, 4($v0)
/* 00466C70 5440FFFE */  bnezl $v0, .L00466C6C
/* 00466C74 A0400009 */   sb    $zero, 9($v0)
.L00466C78:
/* 00466C78 8E310004 */  lw    $s1, 4($s1)
.L00466C7C:
/* 00466C7C 1620FF6B */  bnez  $s1, .L00466A2C
/* 00466C80 00000000 */   nop   
/* 00466C84 8FBF003C */  lw    $ra, 0x3c($sp)
.L00466C88:
/* 00466C88 8FB00014 */  lw    $s0, 0x14($sp)
/* 00466C8C 8FB10018 */  lw    $s1, 0x18($sp)
/* 00466C90 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00466C94 8FB30020 */  lw    $s3, 0x20($sp)
/* 00466C98 8FB40024 */  lw    $s4, 0x24($sp)
/* 00466C9C 8FB50028 */  lw    $s5, 0x28($sp)
/* 00466CA0 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00466CA4 8FB70030 */  lw    $s7, 0x30($sp)
/* 00466CA8 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00466CAC 03E00008 */  jr    $ra
/* 00466CB0 27BD0068 */   addiu $sp, $sp, 0x68
    .type addadjacents, @function
    .size addadjacents, .-addadjacents
    .end addadjacents
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel somepremember
    .ent somepremember
    # 00469280 globalcolor
/* 00466CB4 AFA7000C */  sw    $a3, 0xc($sp)
/* 00466CB8 1080000E */  beqz  $a0, .L00466CF4
/* 00466CBC 00001825 */   move  $v1, $zero
/* 00466CC0 00051080 */  sll   $v0, $a1, 2
/* 00466CC4 8C8E0000 */  lw    $t6, ($a0)
.L00466CC8:
/* 00466CC8 01C27821 */  addu  $t7, $t6, $v0
/* 00466CCC 8DF80040 */  lw    $t8, 0x40($t7)
/* 00466CD0 54D80004 */  bnel  $a2, $t8, .L00466CE4
/* 00466CD4 8C840004 */   lw    $a0, 4($a0)
/* 00466CD8 10000002 */  b     .L00466CE4
/* 00466CDC 24030001 */   li    $v1, 1
/* 00466CE0 8C840004 */  lw    $a0, 4($a0)
.L00466CE4:
/* 00466CE4 14600003 */  bnez  $v1, .L00466CF4
/* 00466CE8 00000000 */   nop   
/* 00466CEC 5480FFF6 */  bnezl $a0, .L00466CC8
/* 00466CF0 8C8E0000 */   lw    $t6, ($a0)
.L00466CF4:
/* 00466CF4 03E00008 */  jr    $ra
/* 00466CF8 00601025 */   move  $v0, $v1
    .type somepremember, @function
    .size somepremember, .-somepremember
    .end somepremember
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel somepostmember
    .ent somepostmember
    # 00469280 globalcolor
/* 00466CFC 3C1C0FBB */  .cpload $t9
/* 00466D00 279C3594 */  
/* 00466D04 0399E021 */  
/* 00466D08 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00466D0C AFB5002C */  sw    $s5, 0x2c($sp)
/* 00466D10 AFB40028 */  sw    $s4, 0x28($sp)
/* 00466D14 AFB20020 */  sw    $s2, 0x20($sp)
/* 00466D18 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00466D1C AFB00018 */  sw    $s0, 0x18($sp)
/* 00466D20 00808025 */  move  $s0, $a0
/* 00466D24 00A09025 */  move  $s2, $a1
/* 00466D28 00C0A025 */  move  $s4, $a2
/* 00466D2C 00E0A825 */  move  $s5, $a3
/* 00466D30 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00466D34 AFBC0030 */  sw    $gp, 0x30($sp)
/* 00466D38 AFB30024 */  sw    $s3, 0x24($sp)
/* 00466D3C 10800024 */  beqz  $a0, .L00466DD0
/* 00466D40 00008825 */   move  $s1, $zero
/* 00466D44 00059880 */  sll   $s3, $a1, 2
/* 00466D48 8E030000 */  lw    $v1, ($s0)
.L00466D4C:
/* 00466D4C 2642FFFF */  addiu $v0, $s2, -1
/* 00466D50 0002C0C3 */  sra   $t8, $v0, 3
/* 00466D54 00737021 */  addu  $t6, $v1, $s3
/* 00466D58 8DCF0040 */  lw    $t7, 0x40($t6)
/* 00466D5C 00782021 */  addu  $a0, $v1, $t8
/* 00466D60 568F0017 */  bnel  $s4, $t7, .L00466DC0
/* 00466D64 8E100004 */   lw    $s0, 4($s0)
/* 00466D68 909900D0 */  lbu   $t9, 0xd0($a0)
/* 00466D6C 30450007 */  andi  $a1, $v0, 7
/* 00466D70 24A50018 */  addiu $a1, $a1, 0x18
/* 00466D74 00B94004 */  sllv  $t0, $t9, $a1
/* 00466D78 00084FC2 */  srl   $t1, $t0, 0x1f
/* 00466D7C 55200010 */  bnezl $t1, .L00466DC0
/* 00466D80 8E100004 */   lw    $s0, 4($s0)
/* 00466D84 908A00DA */  lbu   $t2, 0xda($a0)
/* 00466D88 00AA5804 */  sllv  $t3, $t2, $a1
/* 00466D8C 000B67C2 */  srl   $t4, $t3, 0x1f
/* 00466D90 11800008 */  beqz  $t4, .L00466DB4
/* 00466D94 00000000 */   nop   
/* 00466D98 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466D9C 94640008 */  lhu   $a0, 8($v1)
/* 00466DA0 26A50014 */  addiu $a1, $s5, 0x14
/* 00466DA4 0320F809 */  jalr  $t9
/* 00466DA8 00000000 */   nop   
/* 00466DAC 10400003 */  beqz  $v0, .L00466DBC
/* 00466DB0 8FBC0030 */   lw    $gp, 0x30($sp)
.L00466DB4:
/* 00466DB4 10000002 */  b     .L00466DC0
/* 00466DB8 24110001 */   li    $s1, 1
.L00466DBC:
/* 00466DBC 8E100004 */  lw    $s0, 4($s0)
.L00466DC0:
/* 00466DC0 56200004 */  bnezl $s1, .L00466DD4
/* 00466DC4 8FBF0034 */   lw    $ra, 0x34($sp)
/* 00466DC8 5600FFE0 */  bnezl $s0, .L00466D4C
/* 00466DCC 8E030000 */   lw    $v1, ($s0)
.L00466DD0:
/* 00466DD0 8FBF0034 */  lw    $ra, 0x34($sp)
.L00466DD4:
/* 00466DD4 02201025 */  move  $v0, $s1
/* 00466DD8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00466DDC 8FB00018 */  lw    $s0, 0x18($sp)
/* 00466DE0 8FB20020 */  lw    $s2, 0x20($sp)
/* 00466DE4 8FB30024 */  lw    $s3, 0x24($sp)
/* 00466DE8 8FB40028 */  lw    $s4, 0x28($sp)
/* 00466DEC 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00466DF0 03E00008 */  jr    $ra
/* 00466DF4 27BD0038 */   addiu $sp, $sp, 0x38
    .type somepostmember, @function
    .size somepostmember, .-somepostmember
    .end somepostmember
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel allpreppout
    .ent allpreppout
    # 00469280 globalcolor
/* 00466DF8 3C1C0FBB */  .cpload $t9
/* 00466DFC 279C3498 */  
/* 00466E00 0399E021 */  
/* 00466E04 AFA7000C */  sw    $a3, 0xc($sp)
/* 00466E08 10800034 */  beqz  $a0, .L00466EDC
/* 00466E0C 24030001 */   li    $v1, 1
/* 00466E10 00053880 */  sll   $a3, $a1, 2
/* 00466E14 8F888AB0 */  lw     $t0, %got(docreatebb)($gp)
/* 00466E18 8C820000 */  lw    $v0, ($a0)
.L00466E1C:
/* 00466E1C 00477021 */  addu  $t6, $v0, $a3
/* 00466E20 8DCF0040 */  lw    $t7, 0x40($t6)
/* 00466E24 54CF0004 */  bnel  $a2, $t7, .L00466E38
/* 00466E28 8C580020 */   lw    $t8, 0x20($v0)
/* 00466E2C 10000027 */  b     .L00466ECC
/* 00466E30 8C840004 */   lw    $a0, 4($a0)
/* 00466E34 8C580020 */  lw    $t8, 0x20($v0)
.L00466E38:
/* 00466E38 91190000 */  lbu   $t9, ($t0)
/* 00466E3C 93050000 */  lbu   $a1, ($t8)
/* 00466E40 13200012 */  beqz  $t9, .L00466E8C
/* 00466E44 24A5FFE0 */   addiu $a1, $a1, -0x20
/* 00466E48 2CA90080 */  sltiu $t1, $a1, 0x80
/* 00466E4C 11200009 */  beqz  $t1, .L00466E74
/* 00466E50 00000000 */   nop   
/* 00466E54 8F8C8044 */  lw    $t4, %got(D_10010F58)($gp)
/* 00466E58 00055143 */  sra   $t2, $a1, 5
/* 00466E5C 000A5880 */  sll   $t3, $t2, 2
/* 00466E60 258C0F58 */  addiu $t4, %lo(D_10010F58) # addiu $t4, $t4, 0xf58
/* 00466E64 018B6821 */  addu  $t5, $t4, $t3
/* 00466E68 8DAE0000 */  lw    $t6, ($t5)
/* 00466E6C 00AE7804 */  sllv  $t7, $t6, $a1
/* 00466E70 29E90000 */  slti  $t1, $t7, 0
.L00466E74:
/* 00466E74 15200003 */  bnez  $t1, .L00466E84
/* 00466E78 00000000 */   nop   
/* 00466E7C 10000013 */  b     .L00466ECC
/* 00466E80 8C840004 */   lw    $a0, 4($a0)
.L00466E84:
/* 00466E84 10000011 */  b     .L00466ECC
/* 00466E88 00001825 */   move  $v1, $zero
.L00466E8C:
/* 00466E8C 2CB90080 */  sltiu $t9, $a1, 0x80
/* 00466E90 13200009 */  beqz  $t9, .L00466EB8
/* 00466E94 00000000 */   nop   
/* 00466E98 8F8B8044 */  lw    $t3, %got(D_10010F48)($gp)
/* 00466E9C 00055143 */  sra   $t2, $a1, 5
/* 00466EA0 000A6080 */  sll   $t4, $t2, 2
/* 00466EA4 256B0F48 */  addiu $t3, %lo(D_10010F48) # addiu $t3, $t3, 0xf48
/* 00466EA8 016C6821 */  addu  $t5, $t3, $t4
/* 00466EAC 8DAE0000 */  lw    $t6, ($t5)
/* 00466EB0 00AE7804 */  sllv  $t7, $t6, $a1
/* 00466EB4 29F90000 */  slti  $t9, $t7, 0
.L00466EB8:
/* 00466EB8 57200004 */  bnezl $t9, .L00466ECC
/* 00466EBC 00001825 */   move  $v1, $zero
/* 00466EC0 10000002 */  b     .L00466ECC
/* 00466EC4 8C840004 */   lw    $a0, 4($a0)
/* 00466EC8 00001825 */  move  $v1, $zero
.L00466ECC:
/* 00466ECC 10600003 */  beqz  $v1, .L00466EDC
/* 00466ED0 00000000 */   nop   
/* 00466ED4 5480FFD1 */  bnezl $a0, .L00466E1C
/* 00466ED8 8C820000 */   lw    $v0, ($a0)
.L00466EDC:
/* 00466EDC 03E00008 */  jr    $ra
/* 00466EE0 00601025 */   move  $v0, $v1
    .type allpreppout, @function
    .size allpreppout, .-allpreppout
    .end allpreppout
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel allsucppin
    .ent allsucppin
    # 00469280 globalcolor
/* 00466EE4 3C1C0FBB */  .cpload $t9
/* 00466EE8 279C33AC */  
/* 00466EEC 0399E021 */  
/* 00466EF0 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00466EF4 AFB5002C */  sw    $s5, 0x2c($sp)
/* 00466EF8 AFB40028 */  sw    $s4, 0x28($sp)
/* 00466EFC AFB20020 */  sw    $s2, 0x20($sp)
/* 00466F00 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00466F04 AFB00018 */  sw    $s0, 0x18($sp)
/* 00466F08 00808025 */  move  $s0, $a0
/* 00466F0C 00A09025 */  move  $s2, $a1
/* 00466F10 00C0A025 */  move  $s4, $a2
/* 00466F14 00E0A825 */  move  $s5, $a3
/* 00466F18 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00466F1C AFBC0030 */  sw    $gp, 0x30($sp)
/* 00466F20 AFB30024 */  sw    $s3, 0x24($sp)
/* 00466F24 1080002E */  beqz  $a0, .L00466FE0
/* 00466F28 24110001 */   li    $s1, 1
/* 00466F2C 00059880 */  sll   $s3, $a1, 2
/* 00466F30 8E030000 */  lw    $v1, ($s0)
.L00466F34:
/* 00466F34 2642FFFF */  addiu $v0, $s2, -1
/* 00466F38 0002C0C3 */  sra   $t8, $v0, 3
/* 00466F3C 00737021 */  addu  $t6, $v1, $s3
/* 00466F40 8DCF0040 */  lw    $t7, 0x40($t6)
/* 00466F44 00782021 */  addu  $a0, $v1, $t8
/* 00466F48 568F0017 */  bnel  $s4, $t7, .L00466FA8
/* 00466F4C 8E030000 */   lw    $v1, ($s0)
/* 00466F50 909900D0 */  lbu   $t9, 0xd0($a0)
/* 00466F54 30450007 */  andi  $a1, $v0, 7
/* 00466F58 24A50018 */  addiu $a1, $a1, 0x18
/* 00466F5C 00B94004 */  sllv  $t0, $t9, $a1
/* 00466F60 00084FC2 */  srl   $t1, $t0, 0x1f
/* 00466F64 55200010 */  bnezl $t1, .L00466FA8
/* 00466F68 8E030000 */   lw    $v1, ($s0)
/* 00466F6C 908A00DA */  lbu   $t2, 0xda($a0)
/* 00466F70 00AA5804 */  sllv  $t3, $t2, $a1
/* 00466F74 000B67C2 */  srl   $t4, $t3, 0x1f
/* 00466F78 11800008 */  beqz  $t4, .L00466F9C
/* 00466F7C 00000000 */   nop   
/* 00466F80 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466F84 94640008 */  lhu   $a0, 8($v1)
/* 00466F88 26A50014 */  addiu $a1, $s5, 0x14
/* 00466F8C 0320F809 */  jalr  $t9
/* 00466F90 00000000 */   nop   
/* 00466F94 10400003 */  beqz  $v0, .L00466FA4
/* 00466F98 8FBC0030 */   lw    $gp, 0x30($sp)
.L00466F9C:
/* 00466F9C 1000000C */  b     .L00466FD0
/* 00466FA0 8E100004 */   lw    $s0, 4($s0)
.L00466FA4:
/* 00466FA4 8E030000 */  lw    $v1, ($s0)
.L00466FA8:
/* 00466FA8 8C6D0014 */  lw    $t5, 0x14($v1)
/* 00466FAC 8DAE0004 */  lw    $t6, 4($t5)
/* 00466FB0 55C00007 */  bnezl $t6, .L00466FD0
/* 00466FB4 00008825 */   move  $s1, $zero
/* 00466FB8 906F0004 */  lbu   $t7, 4($v1)
/* 00466FBC 55E00004 */  bnezl $t7, .L00466FD0
/* 00466FC0 00008825 */   move  $s1, $zero
/* 00466FC4 10000002 */  b     .L00466FD0
/* 00466FC8 8E100004 */   lw    $s0, 4($s0)
/* 00466FCC 00008825 */  move  $s1, $zero
.L00466FD0:
/* 00466FD0 52200004 */  beql  $s1, $zero, .L00466FE4
/* 00466FD4 8FBF0034 */   lw    $ra, 0x34($sp)
/* 00466FD8 5600FFD6 */  bnezl $s0, .L00466F34
/* 00466FDC 8E030000 */   lw    $v1, ($s0)
.L00466FE0:
/* 00466FE0 8FBF0034 */  lw    $ra, 0x34($sp)
.L00466FE4:
/* 00466FE4 02201025 */  move  $v0, $s1
/* 00466FE8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00466FEC 8FB00018 */  lw    $s0, 0x18($sp)
/* 00466FF0 8FB20020 */  lw    $s2, 0x20($sp)
/* 00466FF4 8FB30024 */  lw    $s3, 0x24($sp)
/* 00466FF8 8FB40028 */  lw    $s4, 0x28($sp)
/* 00466FFC 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00467000 03E00008 */  jr    $ra
/* 00467004 27BD0038 */   addiu $sp, $sp, 0x38
    .type allsucppin, @function
    .size allsucppin, .-allsucppin
    .end allsucppin
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel updatelivran
    .ent updatelivran
    # 00467F04 split
    # 00469280 globalcolor
/* 00467008 3C1C0FBB */  .cpload $t9
/* 0046700C 279C3288 */  
/* 00467010 0399E021 */  
/* 00467014 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00467018 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0046701C AFBC0038 */  sw    $gp, 0x38($sp)
/* 00467020 AFB70034 */  sw    $s7, 0x34($sp)
/* 00467024 AFB60030 */  sw    $s6, 0x30($sp)
/* 00467028 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0046702C AFB40028 */  sw    $s4, 0x28($sp)
/* 00467030 AFB30024 */  sw    $s3, 0x24($sp)
/* 00467034 AFB20020 */  sw    $s2, 0x20($sp)
/* 00467038 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046703C AFB00018 */  sw    $s0, 0x18($sp)
/* 00467040 808E0020 */  lb    $t6, 0x20($a0)
/* 00467044 2401FFFF */  li    $at, -1
/* 00467048 00809825 */  move  $s3, $a0
/* 0046704C 51C100AD */  beql  $t6, $at, .L00467304
/* 00467050 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00467054 908F0022 */  lbu   $t7, 0x22($a0)
/* 00467058 300200FF */  andi  $v0, $zero, 0xff
/* 0046705C 51E00015 */  beql  $t7, $zero, .L004670B4
/* 00467060 8E700008 */   lw    $s0, 8($s3)
/* 00467064 8C900008 */  lw    $s0, 8($a0)
/* 00467068 14400011 */  bnez  $v0, .L004670B0
/* 0046706C A0800022 */   sb    $zero, 0x22($a0)
/* 00467070 1200000F */  beqz  $s0, .L004670B0
/* 00467074 24160001 */   li    $s6, 1
/* 00467078 92180012 */  lbu   $t8, 0x12($s0)
.L0046707C:
/* 0046707C 57000005 */  bnezl $t8, .L00467094
/* 00467080 A2760022 */   sb    $s6, 0x22($s3)
/* 00467084 92190014 */  lbu   $t9, 0x14($s0)
/* 00467088 53200005 */  beql  $t9, $zero, .L004670A0
/* 0046708C 8E100004 */   lw    $s0, 4($s0)
/* 00467090 A2760022 */  sb    $s6, 0x22($s3)
.L00467094:
/* 00467094 10000002 */  b     .L004670A0
/* 00467098 32C200FF */   andi  $v0, $s6, 0xff
/* 0046709C 8E100004 */  lw    $s0, 4($s0)
.L004670A0:
/* 004670A0 54400004 */  bnezl $v0, .L004670B4
/* 004670A4 8E700008 */   lw    $s0, 8($s3)
/* 004670A8 5600FFF4 */  bnezl $s0, .L0046707C
/* 004670AC 92180012 */   lbu   $t8, 0x12($s0)
.L004670B0:
/* 004670B0 8E700008 */  lw    $s0, 8($s3)
.L004670B4:
/* 004670B4 24160001 */  li    $s6, 1
/* 004670B8 12000013 */  beqz  $s0, .L00467108
/* 004670BC 00000000 */   nop   
/* 004670C0 92080014 */  lbu   $t0, 0x14($s0)
.L004670C4:
/* 004670C4 AE130008 */  sw    $s3, 8($s0)
/* 004670C8 5500000D */  bnezl $t0, .L00467100
/* 004670CC 8E100004 */   lw    $s0, 4($s0)
/* 004670D0 92090015 */  lbu   $t1, 0x15($s0)
/* 004670D4 5520000A */  bnezl $t1, .L00467100
/* 004670D8 8E100004 */   lw    $s0, 4($s0)
/* 004670DC 8F9984E4 */  lw    $t9, %call16(preallmember)($gp)
/* 004670E0 8E0A0000 */  lw    $t2, ($s0)
/* 004670E4 02602825 */  move  $a1, $s3
/* 004670E8 0320F809 */  jalr  $t9
/* 004670EC 8D440014 */   lw    $a0, 0x14($t2)
/* 004670F0 14400002 */  bnez  $v0, .L004670FC
/* 004670F4 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004670F8 A2160015 */  sb    $s6, 0x15($s0)
.L004670FC:
/* 004670FC 8E100004 */  lw    $s0, 4($s0)
.L00467100:
/* 00467100 5600FFF0 */  bnezl $s0, .L004670C4
/* 00467104 92080014 */   lbu   $t0, 0x14($s0)
.L00467108:
/* 00467108 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 0046710C 2674000C */  addiu $s4, $s3, 0xc
/* 00467110 02802025 */  move  $a0, $s4
/* 00467114 0320F809 */  jalr  $t9
/* 00467118 00000000 */   nop   
/* 0046711C 1440002E */  bnez  $v0, .L004671D8
/* 00467120 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467124 8F9589B8 */  lw     $s5, %got(curstaticno)($gp)
/* 00467128 00009025 */  move  $s2, $zero
/* 0046712C 8F978C68 */  lw     $s7, %got(bbtab)($gp)
/* 00467130 8EB50000 */  lw    $s5, ($s5)
/* 00467134 26B50000 */  addiu $s5, $s5, 0
.L00467138:
/* 00467138 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046713C 02402025 */  move  $a0, $s2
/* 00467140 02802825 */  move  $a1, $s4
/* 00467144 0320F809 */  jalr  $t9
/* 00467148 00000000 */   nop   
/* 0046714C 1040001F */  beqz  $v0, .L004671CC
/* 00467150 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467154 8EEB0000 */  lw    $t3, ($s7)
/* 00467158 00126080 */  sll   $t4, $s2, 2
/* 0046715C 8F9984E4 */  lw    $t9, %call16(preallmember)($gp)
/* 00467160 016C6821 */  addu  $t5, $t3, $t4
/* 00467164 8DB10000 */  lw    $s1, ($t5)
/* 00467168 02602825 */  move  $a1, $s3
/* 0046716C 0320F809 */  jalr  $t9
/* 00467170 8E240014 */   lw    $a0, 0x14($s1)
/* 00467174 14400015 */  bnez  $v0, .L004671CC
/* 00467178 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0046717C 8F9984E8 */  lw    $t9, %call16(alloc_livbb)($gp)
/* 00467180 0320F809 */  jalr  $t9
/* 00467184 00000000 */   nop   
/* 00467188 1040005D */  beqz  $v0, .L00467300
/* 0046718C 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467190 AC510000 */  sw    $s1, ($v0)
/* 00467194 8E6E0008 */  lw    $t6, 8($s3)
/* 00467198 02802025 */  move  $a0, $s4
/* 0046719C 02402825 */  move  $a1, $s2
/* 004671A0 AC4E0004 */  sw    $t6, 4($v0)
/* 004671A4 AE620008 */  sw    $v0, 8($s3)
/* 004671A8 AC530008 */  sw    $s3, 8($v0)
/* 004671AC 8E2F0030 */  lw    $t7, 0x30($s1)
/* 004671B0 AC4F000C */  sw    $t7, 0xc($v0)
/* 004671B4 AE220030 */  sw    $v0, 0x30($s1)
/* 004671B8 A0560015 */  sb    $s6, 0x15($v0)
/* 004671BC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004671C0 0320F809 */  jalr  $t9
/* 004671C4 00000000 */   nop   
/* 004671C8 8FBC0038 */  lw    $gp, 0x38($sp)
.L004671CC:
/* 004671CC 26520001 */  addiu $s2, $s2, 1
/* 004671D0 1655FFD9 */  bne   $s2, $s5, .L00467138
/* 004671D4 00000000 */   nop   
.L004671D8:
/* 004671D8 92780022 */  lbu   $t8, 0x22($s3)
/* 004671DC 8F978C68 */  lw     $s7, %got(bbtab)($gp)
/* 004671E0 53000048 */  beql  $t8, $zero, .L00467304
/* 004671E4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004671E8 8E700008 */  lw    $s0, 8($s3)
/* 004671EC 12000012 */  beqz  $s0, .L00467238
/* 004671F0 00000000 */   nop   
/* 004671F4 92190017 */  lbu   $t9, 0x17($s0)
.L004671F8:
/* 004671F8 5720000D */  bnezl $t9, .L00467230
/* 004671FC 8E100004 */   lw    $s0, 4($s0)
/* 00467200 92080016 */  lbu   $t0, 0x16($s0)
/* 00467204 5500000A */  bnezl $t0, .L00467230
/* 00467208 8E100004 */   lw    $s0, 4($s0)
/* 0046720C 8F9984E0 */  lw    $t9, %call16(allsucmember)($gp)
/* 00467210 8E090000 */  lw    $t1, ($s0)
/* 00467214 02602825 */  move  $a1, $s3
/* 00467218 0320F809 */  jalr  $t9
/* 0046721C 8D240018 */   lw    $a0, 0x18($t1)
/* 00467220 14400002 */  bnez  $v0, .L0046722C
/* 00467224 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467228 A2160016 */  sb    $s6, 0x16($s0)
.L0046722C:
/* 0046722C 8E100004 */  lw    $s0, 4($s0)
.L00467230:
/* 00467230 5600FFF1 */  bnezl $s0, .L004671F8
/* 00467234 92190017 */   lbu   $t9, 0x17($s0)
.L00467238:
/* 00467238 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 0046723C 02802025 */  move  $a0, $s4
/* 00467240 0320F809 */  jalr  $t9
/* 00467244 00000000 */   nop   
/* 00467248 1440002D */  bnez  $v0, .L00467300
/* 0046724C 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467250 8F9589B8 */  lw     $s5, %got(curstaticno)($gp)
/* 00467254 00009025 */  move  $s2, $zero
/* 00467258 8EB50000 */  lw    $s5, ($s5)
/* 0046725C 26B50000 */  addiu $s5, $s5, 0
.L00467260:
/* 00467260 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00467264 02402025 */  move  $a0, $s2
/* 00467268 02802825 */  move  $a1, $s4
/* 0046726C 0320F809 */  jalr  $t9
/* 00467270 00000000 */   nop   
/* 00467274 1040001F */  beqz  $v0, .L004672F4
/* 00467278 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0046727C 8EEA0000 */  lw    $t2, ($s7)
/* 00467280 00125880 */  sll   $t3, $s2, 2
/* 00467284 8F9984E0 */  lw    $t9, %call16(allsucmember)($gp)
/* 00467288 014B6021 */  addu  $t4, $t2, $t3
/* 0046728C 8D910000 */  lw    $s1, ($t4)
/* 00467290 02602825 */  move  $a1, $s3
/* 00467294 0320F809 */  jalr  $t9
/* 00467298 8E240018 */   lw    $a0, 0x18($s1)
/* 0046729C 14400015 */  bnez  $v0, .L004672F4
/* 004672A0 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004672A4 8F9984E8 */  lw    $t9, %call16(alloc_livbb)($gp)
/* 004672A8 0320F809 */  jalr  $t9
/* 004672AC 00000000 */   nop   
/* 004672B0 10400013 */  beqz  $v0, .L00467300
/* 004672B4 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004672B8 AC510000 */  sw    $s1, ($v0)
/* 004672BC 8E6D0008 */  lw    $t5, 8($s3)
/* 004672C0 02802025 */  move  $a0, $s4
/* 004672C4 02402825 */  move  $a1, $s2
/* 004672C8 AC4D0004 */  sw    $t5, 4($v0)
/* 004672CC AE620008 */  sw    $v0, 8($s3)
/* 004672D0 AC530008 */  sw    $s3, 8($v0)
/* 004672D4 8E2E0030 */  lw    $t6, 0x30($s1)
/* 004672D8 AC4E000C */  sw    $t6, 0xc($v0)
/* 004672DC AE220030 */  sw    $v0, 0x30($s1)
/* 004672E0 A0560016 */  sb    $s6, 0x16($v0)
/* 004672E4 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004672E8 0320F809 */  jalr  $t9
/* 004672EC 00000000 */   nop   
/* 004672F0 8FBC0038 */  lw    $gp, 0x38($sp)
.L004672F4:
/* 004672F4 26520001 */  addiu $s2, $s2, 1
/* 004672F8 1655FFD9 */  bne   $s2, $s5, .L00467260
/* 004672FC 00000000 */   nop   
.L00467300:
/* 00467300 8FBF003C */  lw    $ra, 0x3c($sp)
.L00467304:
/* 00467304 8FB00018 */  lw    $s0, 0x18($sp)
/* 00467308 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0046730C 8FB20020 */  lw    $s2, 0x20($sp)
/* 00467310 8FB30024 */  lw    $s3, 0x24($sp)
/* 00467314 8FB40028 */  lw    $s4, 0x28($sp)
/* 00467318 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0046731C 8FB60030 */  lw    $s6, 0x30($sp)
/* 00467320 8FB70034 */  lw    $s7, 0x34($sp)
/* 00467324 03E00008 */  jr    $ra
/* 00467328 27BD0040 */   addiu $sp, $sp, 0x40
    .type updatelivran, @function
    .size updatelivran, .-updatelivran
    .end updatelivran
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel isconstrained
    .ent isconstrained
    # 00467F04 split
    # 00469280 globalcolor
/* 0046732C 3C1C0FBB */  .cpload $t9
/* 00467330 279C2F64 */  
/* 00467334 0399E021 */  
/* 00467338 8F8E8B38 */  lw     $t6, %got(leaf_for_ugen)($gp)
/* 0046733C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00467340 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00467344 91CE0000 */  lbu   $t6, ($t6)
/* 00467348 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0046734C AFA40020 */  sw    $a0, 0x20($sp)
/* 00467350 15C00003 */  bnez  $t6, .L00467360
/* 00467354 00000000 */   nop   
/* 00467358 10000010 */  b     .L0046739C
/* 0046735C 24030001 */   li    $v1, 1
.L00467360:
/* 00467360 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 00467364 8FAF0020 */  lw    $t7, 0x20($sp)
/* 00467368 0320F809 */  jalr  $t9
/* 0046736C 8DE40000 */   lw    $a0, ($t7)
/* 00467370 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467374 8FB80020 */  lw    $t8, 0x20($sp)
/* 00467378 00024080 */  sll   $t0, $v0, 2
/* 0046737C 8F898D4C */  lw     $t1, %got(regsinclass)($gp)
/* 00467380 8F190024 */  lw    $t9, 0x24($t8)
/* 00467384 2529FFFC */  addiu $t1, $t1, -4
/* 00467388 01095021 */  addu  $t2, $t0, $t1
/* 0046738C 8D4B0000 */  lw    $t3, ($t2)
/* 00467390 032B182A */  slt   $v1, $t9, $t3
/* 00467394 38630001 */  xori  $v1, $v1, 1
/* 00467398 306300FF */  andi  $v1, $v1, 0xff
.L0046739C:
/* 0046739C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004673A0 27BD0020 */  addiu $sp, $sp, 0x20
/* 004673A4 00601025 */  move  $v0, $v1
/* 004673A8 03E00008 */  jr    $ra
/* 004673AC 00000000 */   nop   
    .type isconstrained, @function
    .size isconstrained, .-isconstrained
    .end isconstrained
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

    .type func_004673B0, @function
func_004673B0:
    # 004673B0 func_004673B0
    # 00467514 contiguous
/* 004673B0 3C1C0FBB */  .cpload $t9
/* 004673B4 279C2EE0 */  
/* 004673B8 0399E021 */  
/* 004673BC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004673C0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004673C4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004673C8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 004673CC AFB10018 */  sw    $s1, 0x18($sp)
/* 004673D0 AFB00014 */  sw    $s0, 0x14($sp)
/* 004673D4 AFA40028 */  sw    $a0, 0x28($sp)
/* 004673D8 8C900014 */  lw    $s0, 0x14($a0)
/* 004673DC 00408825 */  move  $s1, $v0
/* 004673E0 52000023 */  beql  $s0, $zero, .L00467470
/* 004673E4 8FA80028 */   lw    $t0, 0x28($sp)
/* 004673E8 8F928D68 */  lw     $s2, %got(livrantemp)($gp)
.L004673EC:
/* 004673EC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004673F0 8E0F0000 */  lw    $t7, ($s0)
/* 004673F4 02402825 */  move  $a1, $s2
/* 004673F8 0320F809 */  jalr  $t9
/* 004673FC 95E40008 */   lhu   $a0, 8($t7)
/* 00467400 10400017 */  beqz  $v0, .L00467460
/* 00467404 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00467408 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046740C 8E180000 */  lw    $t8, ($s0)
/* 00467410 8E250000 */  lw    $a1, ($s1)
/* 00467414 97040008 */  lhu   $a0, 8($t8)
/* 00467418 0320F809 */  jalr  $t9
/* 0046741C 24A50014 */   addiu $a1, $a1, 0x14
/* 00467420 1040000F */  beqz  $v0, .L00467460
/* 00467424 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00467428 8E190000 */  lw    $t9, ($s0)
/* 0046742C 02402025 */  move  $a0, $s2
/* 00467430 97250008 */  lhu   $a1, 8($t9)
/* 00467434 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00467438 0320F809 */  jalr  $t9
/* 0046743C 00000000 */   nop   
/* 00467440 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00467444 8E040000 */  lw    $a0, ($s0)
/* 00467448 02201025 */  move  $v0, $s1
/* 0046744C 8F99802C */  lw    $t9, %got(func_004673B0)($gp)
/* 00467450 273973B0 */  addiu $t9, %lo(func_004673B0) # addiu $t9, $t9, 0x73b0
/* 00467454 0320F809 */  jalr  $t9
/* 00467458 00000000 */   nop   
/* 0046745C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00467460:
/* 00467460 8E100004 */  lw    $s0, 4($s0)
/* 00467464 1600FFE1 */  bnez  $s0, .L004673EC
/* 00467468 00000000 */   nop   
/* 0046746C 8FA80028 */  lw    $t0, 0x28($sp)
.L00467470:
/* 00467470 8F928D68 */  lw     $s2, %got(livrantemp)($gp)
/* 00467474 8D100018 */  lw    $s0, 0x18($t0)
/* 00467478 52000021 */  beql  $s0, $zero, .L00467500
/* 0046747C 8FBF0024 */   lw    $ra, 0x24($sp)
.L00467480:
/* 00467480 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00467484 8E090000 */  lw    $t1, ($s0)
/* 00467488 02402825 */  move  $a1, $s2
/* 0046748C 0320F809 */  jalr  $t9
/* 00467490 95240008 */   lhu   $a0, 8($t1)
/* 00467494 10400016 */  beqz  $v0, .L004674F0
/* 00467498 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0046749C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004674A0 8E0A0000 */  lw    $t2, ($s0)
/* 004674A4 8E250000 */  lw    $a1, ($s1)
/* 004674A8 95440008 */  lhu   $a0, 8($t2)
/* 004674AC 0320F809 */  jalr  $t9
/* 004674B0 24A50014 */   addiu $a1, $a1, 0x14
/* 004674B4 1040000E */  beqz  $v0, .L004674F0
/* 004674B8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004674BC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004674C0 8E0B0000 */  lw    $t3, ($s0)
/* 004674C4 02402025 */  move  $a0, $s2
/* 004674C8 0320F809 */  jalr  $t9
/* 004674CC 95650008 */   lhu   $a1, 8($t3)
/* 004674D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004674D4 8E040000 */  lw    $a0, ($s0)
/* 004674D8 02201025 */  move  $v0, $s1
/* 004674DC 8F99802C */  lw    $t9, %got(func_004673B0)($gp)
/* 004674E0 273973B0 */  addiu $t9, %lo(func_004673B0) # addiu $t9, $t9, 0x73b0
/* 004674E4 0320F809 */  jalr  $t9
/* 004674E8 00000000 */   nop   
/* 004674EC 8FBC0020 */  lw    $gp, 0x20($sp)
.L004674F0:
/* 004674F0 8E100004 */  lw    $s0, 4($s0)
/* 004674F4 1600FFE2 */  bnez  $s0, .L00467480
/* 004674F8 00000000 */   nop   
/* 004674FC 8FBF0024 */  lw    $ra, 0x24($sp)
.L00467500:
/* 00467500 8FB00014 */  lw    $s0, 0x14($sp)
/* 00467504 8FB10018 */  lw    $s1, 0x18($sp)
/* 00467508 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0046750C 03E00008 */  jr    $ra
/* 00467510 27BD0028 */   addiu $sp, $sp, 0x28
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel contiguous
    .ent contiguous
    # 0046791C whyuncolored
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
/* 00467514 3C1C0FBB */  .cpload $t9
/* 00467518 279C2D7C */  
/* 0046751C 0399E021 */  
/* 00467520 8F998190 */  lw    $t9, %call16(bvectcard)($gp)
/* 00467524 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00467528 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0046752C AFA40030 */  sw    $a0, 0x30($sp)
/* 00467530 24850014 */  addiu $a1, $a0, 0x14
/* 00467534 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00467538 00A02025 */  move  $a0, $a1
/* 0046753C 0320F809 */  jalr  $t9
/* 00467540 AFA50024 */   sw    $a1, 0x24($sp)
/* 00467544 28410002 */  slti  $at, $v0, 2
/* 00467548 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046754C 14200005 */  bnez  $at, .L00467564
/* 00467550 8FA50024 */   lw    $a1, 0x24($sp)
/* 00467554 8FAE0030 */  lw    $t6, 0x30($sp)
/* 00467558 8DCF0008 */  lw    $t7, 8($t6)
/* 0046755C 15E00003 */  bnez  $t7, .L0046756C
/* 00467560 00000000 */   nop   
.L00467564:
/* 00467564 1000001D */  b     .L004675DC
/* 00467568 24030001 */   li    $v1, 1
.L0046756C:
/* 0046756C 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00467570 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00467574 0320F809 */  jalr  $t9
/* 00467578 00000000 */   nop   
/* 0046757C 8FB80030 */  lw    $t8, 0x30($sp)
/* 00467580 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467584 8F190008 */  lw    $t9, 8($t8)
/* 00467588 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 0046758C 8F280000 */  lw    $t0, ($t9)
/* 00467590 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00467594 95050008 */  lhu   $a1, 8($t0)
/* 00467598 0320F809 */  jalr  $t9
/* 0046759C 00000000 */   nop   
/* 004675A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004675A4 8FA90030 */  lw    $t1, 0x30($sp)
/* 004675A8 27A20030 */  addiu $v0, $sp, 0x30
/* 004675AC 8F99802C */  lw    $t9, %got(func_004673B0)($gp)
/* 004675B0 8D2A0008 */  lw    $t2, 8($t1)
/* 004675B4 273973B0 */  addiu $t9, %lo(func_004673B0) # addiu $t9, $t9, 0x73b0
/* 004675B8 0320F809 */  jalr  $t9
/* 004675BC 8D440000 */   lw    $a0, ($t2)
/* 004675C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004675C4 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 004675C8 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 004675CC 0320F809 */  jalr  $t9
/* 004675D0 00000000 */   nop   
/* 004675D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004675D8 304300FF */  andi  $v1, $v0, 0xff
.L004675DC:
/* 004675DC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004675E0 27BD0030 */  addiu $sp, $sp, 0x30
/* 004675E4 00601025 */  move  $v0, $v1
/* 004675E8 03E00008 */  jr    $ra
/* 004675EC 00000000 */   nop   
    .type contiguous, @function
    .size contiguous, .-contiguous
    .end contiguous
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel canmoverlod
    .ent canmoverlod
    # 004676CC compute_save
    # 0046791C whyuncolored
/* 004675F0 3C1C0FBB */  .cpload $t9
/* 004675F4 279C2CA0 */  
/* 004675F8 0399E021 */  
/* 004675FC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00467600 AFB30024 */  sw    $s3, 0x24($sp)
/* 00467604 AFB20020 */  sw    $s2, 0x20($sp)
/* 00467608 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046760C AFB00018 */  sw    $s0, 0x18($sp)
/* 00467610 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00467614 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00467618 00008825 */  move  $s1, $zero
/* 0046761C 24120001 */  li    $s2, 1
/* 00467620 8C900014 */  lw    $s0, 0x14($a0)
/* 00467624 24B30014 */  addiu $s3, $a1, 0x14
.L00467628:
/* 00467628 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046762C 8E0E0000 */  lw    $t6, ($s0)
/* 00467630 02602825 */  move  $a1, $s3
/* 00467634 0320F809 */  jalr  $t9
/* 00467638 95C40008 */   lhu   $a0, 8($t6)
/* 0046763C 10400003 */  beqz  $v0, .L0046764C
/* 00467640 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00467644 10000013 */  b     .L00467694
/* 00467648 24110001 */   li    $s1, 1
.L0046764C:
/* 0046764C 8E0F0000 */  lw    $t7, ($s0)
/* 00467650 8DF80020 */  lw    $t8, 0x20($t7)
/* 00467654 93190000 */  lbu   $t9, ($t8)
/* 00467658 2728FFE0 */  addiu $t0, $t9, -0x20
/* 0046765C 2D090080 */  sltiu $t1, $t0, 0x80
/* 00467660 11200009 */  beqz  $t1, .L00467688
/* 00467664 00000000 */   nop   
/* 00467668 8F8C8044 */  lw    $t4, %got(D_10010F68)($gp)
/* 0046766C 00085143 */  sra   $t2, $t0, 5
/* 00467670 000A5880 */  sll   $t3, $t2, 2
/* 00467674 258C0F68 */  addiu $t4, %lo(D_10010F68) # addiu $t4, $t4, 0xf68
/* 00467678 018B6821 */  addu  $t5, $t4, $t3
/* 0046767C 8DAE0000 */  lw    $t6, ($t5)
/* 00467680 010E7804 */  sllv  $t7, $t6, $t0
/* 00467684 29E90000 */  slti  $t1, $t7, 0
.L00467688:
/* 00467688 51200003 */  beql  $t1, $zero, .L00467698
/* 0046768C 8E100004 */   lw    $s0, 4($s0)
/* 00467690 00009025 */  move  $s2, $zero
.L00467694:
/* 00467694 8E100004 */  lw    $s0, 4($s0)
.L00467698:
/* 00467698 1600FFE3 */  bnez  $s0, .L00467628
/* 0046769C 00000000 */   nop   
/* 004676A0 12200002 */  beqz  $s1, .L004676AC
/* 004676A4 02201825 */   move  $v1, $s1
/* 004676A8 02401825 */  move  $v1, $s2
.L004676AC:
/* 004676AC 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004676B0 8FB00018 */  lw    $s0, 0x18($sp)
/* 004676B4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004676B8 8FB20020 */  lw    $s2, 0x20($sp)
/* 004676BC 8FB30024 */  lw    $s3, 0x24($sp)
/* 004676C0 27BD0030 */  addiu $sp, $sp, 0x30
/* 004676C4 03E00008 */  jr    $ra
/* 004676C8 00601025 */   move  $v0, $v1
    .type canmoverlod, @function
    .size canmoverlod, .-canmoverlod
    .end canmoverlod
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel compute_save
    .ent compute_save
    # 00467C34 needsplit
    # 00469280 globalcolor
/* 004676CC 3C1C0FBB */  .cpload $t9
/* 004676D0 279C2BC4 */  
/* 004676D4 0399E021 */  
/* 004676D8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004676DC AFBF0034 */  sw    $ra, 0x34($sp)
/* 004676E0 AFBC0030 */  sw    $gp, 0x30($sp)
/* 004676E4 AFB2002C */  sw    $s2, 0x2c($sp)
/* 004676E8 AFB10028 */  sw    $s1, 0x28($sp)
/* 004676EC AFB00024 */  sw    $s0, 0x24($sp)
/* 004676F0 F7B60018 */  sdc1  $f22, 0x18($sp)
/* 004676F4 F7B40010 */  sdc1  $f20, 0x10($sp)
/* 004676F8 8C900008 */  lw    $s0, 8($a0)
/* 004676FC 4480B000 */  mtc1  $zero, $f22
/* 00467700 00808825 */  move  $s1, $a0
/* 00467704 12000057 */  beqz  $s0, .L00467864
/* 00467708 AC80001C */   sw    $zero, 0x1c($a0)
/* 0046770C 8F928A20 */  lw     $s2, %got(movcostused)($gp)
/* 00467710 960E0010 */  lhu   $t6, 0x10($s0)
.L00467714:
/* 00467714 8E040000 */  lw    $a0, ($s0)
/* 00467718 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 0046771C 448E2000 */  mtc1  $t6, $f4
/* 00467720 05C10004 */  bgez  $t6, .L00467734
/* 00467724 468021A0 */   cvt.s.w $f6, $f4
/* 00467728 44814000 */  mtc1  $at, $f8
/* 0046772C 00000000 */  nop   
/* 00467730 46083180 */  add.s $f6, $f6, $f8
.L00467734:
/* 00467734 920F0012 */  lbu   $t7, 0x12($s0)
/* 00467738 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 0046773C 448F5000 */  mtc1  $t7, $f10
/* 00467740 05E10004 */  bgez  $t7, .L00467754
/* 00467744 46805420 */   cvt.s.w $f16, $f10
/* 00467748 44819000 */  mtc1  $at, $f18
/* 0046774C 00000000 */  nop   
/* 00467750 46128400 */  add.s $f16, $f16, $f18
.L00467754:
/* 00467754 8C98002C */  lw    $t8, 0x2c($a0)
/* 00467758 46103100 */  add.s $f4, $f6, $f16
/* 0046775C 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00467760 44984000 */  mtc1  $t8, $f8
/* 00467764 07010004 */  bgez  $t8, .L00467778
/* 00467768 468042A0 */   cvt.s.w $f10, $f8
/* 0046776C 44819000 */  mtc1  $at, $f18
/* 00467770 00000000 */  nop   
/* 00467774 46125280 */  add.s $f10, $f10, $f18
.L00467778:
/* 00467778 92190015 */  lbu   $t9, 0x15($s0)
/* 0046777C 460A2502 */  mul.s $f20, $f4, $f10
/* 00467780 53200017 */  beql  $t9, $zero, .L004677E0
/* 00467784 922B0022 */   lbu   $t3, 0x22($s1)
/* 00467788 90880005 */  lbu   $t0, 5($a0)
/* 0046778C 51000008 */  beql  $t0, $zero, .L004677B0
/* 00467790 8E090000 */   lw    $t1, ($s0)
/* 00467794 8F998534 */  lw    $t9, %call16(canmoverlod)($gp)
/* 00467798 8E050008 */  lw    $a1, 8($s0)
/* 0046779C 0320F809 */  jalr  $t9
/* 004677A0 00000000 */   nop   
/* 004677A4 1440000D */  bnez  $v0, .L004677DC
/* 004677A8 8FBC0030 */   lw    $gp, 0x30($sp)
/* 004677AC 8E090000 */  lw    $t1, ($s0)
.L004677B0:
/* 004677B0 C6460000 */  lwc1  $f6, ($s2)
/* 004677B4 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 004677B8 8D2A002C */  lw    $t2, 0x2c($t1)
/* 004677BC 448A8000 */  mtc1  $t2, $f16
/* 004677C0 05410004 */  bgez  $t2, .L004677D4
/* 004677C4 46808220 */   cvt.s.w $f8, $f16
/* 004677C8 44819000 */  mtc1  $at, $f18
/* 004677CC 00000000 */  nop   
/* 004677D0 46124200 */  add.s $f8, $f8, $f18
.L004677D4:
/* 004677D4 46083102 */  mul.s $f4, $f6, $f8
/* 004677D8 4604A501 */  sub.s $f20, $f20, $f4
.L004677DC:
/* 004677DC 922B0022 */  lbu   $t3, 0x22($s1)
.L004677E0:
/* 004677E0 5160001A */  beql  $t3, $zero, .L0046784C
/* 004677E4 8E28001C */   lw    $t0, 0x1c($s1)
/* 004677E8 920C0017 */  lbu   $t4, 0x17($s0)
/* 004677EC 55800017 */  bnezl $t4, .L0046784C
/* 004677F0 8E28001C */   lw    $t0, 0x1c($s1)
/* 004677F4 920D0016 */  lbu   $t5, 0x16($s0)
/* 004677F8 51A00014 */  beql  $t5, $zero, .L0046784C
/* 004677FC 8E28001C */   lw    $t0, 0x1c($s1)
/* 00467800 920E0012 */  lbu   $t6, 0x12($s0)
/* 00467804 55C00005 */  bnezl $t6, .L0046781C
/* 00467808 8E180000 */   lw    $t8, ($s0)
/* 0046780C 920F0015 */  lbu   $t7, 0x15($s0)
/* 00467810 55E0000E */  bnezl $t7, .L0046784C
/* 00467814 8E28001C */   lw    $t0, 0x1c($s1)
/* 00467818 8E180000 */  lw    $t8, ($s0)
.L0046781C:
/* 0046781C C64A0000 */  lwc1  $f10, ($s2)
/* 00467820 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00467824 8F19002C */  lw    $t9, 0x2c($t8)
/* 00467828 44998000 */  mtc1  $t9, $f16
/* 0046782C 07210004 */  bgez  $t9, .L00467840
/* 00467830 468084A0 */   cvt.s.w $f18, $f16
/* 00467834 44813000 */  mtc1  $at, $f6
/* 00467838 00000000 */  nop   
/* 0046783C 46069480 */  add.s $f18, $f18, $f6
.L00467840:
/* 00467840 46125202 */  mul.s $f8, $f10, $f18
/* 00467844 4608A501 */  sub.s $f20, $f20, $f8
/* 00467848 8E28001C */  lw    $t0, 0x1c($s1)
.L0046784C:
/* 0046784C 4614B580 */  add.s $f22, $f22, $f20
/* 00467850 25090001 */  addiu $t1, $t0, 1
/* 00467854 AE29001C */  sw    $t1, 0x1c($s1)
/* 00467858 8E100004 */  lw    $s0, 4($s0)
/* 0046785C 5600FFAD */  bnezl $s0, .L00467714
/* 00467860 960E0010 */   lhu   $t6, 0x10($s0)
.L00467864:
/* 00467864 8F998190 */  lw    $t9, %call16(bvectcard)($gp)
/* 00467868 2624000C */  addiu $a0, $s1, 0xc
/* 0046786C 0320F809 */  jalr  $t9
/* 00467870 00000000 */   nop   
/* 00467874 8E2A001C */  lw    $t2, 0x1c($s1)
/* 00467878 44809000 */  mtc1  $zero, $f18
/* 0046787C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00467880 01425821 */  addu  $t3, $t2, $v0
/* 00467884 29610003 */  slti  $at, $t3, 3
/* 00467888 AE2B001C */  sw    $t3, 0x1c($s1)
/* 0046788C 14200005 */  bnez  $at, .L004678A4
/* 00467890 01601825 */   move  $v1, $t3
/* 00467894 256CFFFE */  addiu $t4, $t3, -2
/* 00467898 000C6883 */  sra   $t5, $t4, 2
/* 0046789C 25A30002 */  addiu $v1, $t5, 2
/* 004678A0 AE23001C */  sw    $v1, 0x1c($s1)
.L004678A4:
/* 004678A4 44832000 */  mtc1  $v1, $f4
/* 004678A8 8E2F0000 */  lw    $t7, ($s1)
/* 004678AC 2401000C */  li    $at, 12
/* 004678B0 46802420 */  cvt.s.w $f16, $f4
/* 004678B4 24080002 */  li    $t0, 2
/* 004678B8 4610B183 */  div.s $f6, $f22, $f16
/* 004678BC E6260030 */  swc1  $f6, 0x30($s1)
/* 004678C0 91F80001 */  lbu   $t8, 1($t7)
/* 004678C4 57010005 */  bnel  $t8, $at, .L004678DC
/* 004678C8 C6280030 */   lwc1  $f8, 0x30($s1)
/* 004678CC C6200030 */  lwc1  $f0, 0x30($s1)
/* 004678D0 46000280 */  add.s $f10, $f0, $f0
/* 004678D4 E62A0030 */  swc1  $f10, 0x30($s1)
/* 004678D8 C6280030 */  lwc1  $f8, 0x30($s1)
.L004678DC:
/* 004678DC 4608903C */  c.lt.s $f18, $f8
/* 004678E0 00000000 */  nop   
/* 004678E4 45020005 */  bc1fl .L004678FC
/* 004678E8 A2280023 */   sb    $t0, 0x23($s1)
/* 004678EC 24190001 */  li    $t9, 1
/* 004678F0 10000002 */  b     .L004678FC
/* 004678F4 A2390023 */   sb    $t9, 0x23($s1)
/* 004678F8 A2280023 */  sb    $t0, 0x23($s1)
.L004678FC:
/* 004678FC 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00467900 D7B40010 */  ldc1  $f20, 0x10($sp)
/* 00467904 D7B60018 */  ldc1  $f22, 0x18($sp)
/* 00467908 8FB00024 */  lw    $s0, 0x24($sp)
/* 0046790C 8FB10028 */  lw    $s1, 0x28($sp)
/* 00467910 8FB2002C */  lw    $s2, 0x2c($sp)
/* 00467914 03E00008 */  jr    $ra
/* 00467918 27BD0038 */   addiu $sp, $sp, 0x38
    .type compute_save, @function
    .size compute_save, .-compute_save
    .end compute_save
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel whyuncolored
    .ent whyuncolored
    # 00467C34 needsplit
    # 00469280 globalcolor
/* 0046791C 3C1C0FBB */  .cpload $t9
/* 00467920 279C2974 */  
/* 00467924 0399E021 */  
/* 00467928 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0046792C AFBF003C */  sw    $ra, 0x3c($sp)
/* 00467930 AFBC0038 */  sw    $gp, 0x38($sp)
/* 00467934 AFB60034 */  sw    $s6, 0x34($sp)
/* 00467938 AFB50030 */  sw    $s5, 0x30($sp)
/* 0046793C AFB4002C */  sw    $s4, 0x2c($sp)
/* 00467940 AFB30028 */  sw    $s3, 0x28($sp)
/* 00467944 AFB20024 */  sw    $s2, 0x24($sp)
/* 00467948 AFB10020 */  sw    $s1, 0x20($sp)
/* 0046794C AFB0001C */  sw    $s0, 0x1c($sp)
/* 00467950 F7B40010 */  sdc1  $f20, 0x10($sp)
/* 00467954 908E0023 */  lbu   $t6, 0x23($a0)
/* 00467958 0080B025 */  move  $s6, $a0
/* 0046795C 01C002B4 */  teq   $t6, $zero, 0xa
/* 00467960 8ED00008 */  lw    $s0, 8($s6)
/* 00467964 4480A000 */  mtc1  $zero, $f20
/* 00467968 0000A825 */  move  $s5, $zero
/* 0046796C 1200003D */  beqz  $s0, .L00467A64
/* 00467970 00009025 */   move  $s2, $zero
/* 00467974 8E040000 */  lw    $a0, ($s0)
.L00467978:
/* 00467978 960F0010 */  lhu   $t7, 0x10($s0)
/* 0046797C 92180012 */  lbu   $t8, 0x12($s0)
/* 00467980 8C82002C */  lw    $v0, 0x2c($a0)
/* 00467984 92090015 */  lbu   $t1, 0x15($s0)
/* 00467988 01F8C821 */  addu  $t9, $t7, $t8
/* 0046798C 03220019 */  multu $t9, $v0
/* 00467990 00004012 */  mflo  $t0
/* 00467994 02A8A821 */  addu  $s5, $s5, $t0
/* 00467998 51200018 */  beql  $t1, $zero, .L004679FC
/* 0046799C 92CD0022 */   lbu   $t5, 0x22($s6)
/* 004679A0 908A0005 */  lbu   $t2, 5($a0)
/* 004679A4 5140000B */  beql  $t2, $zero, .L004679D4
/* 004679A8 8E0C0000 */   lw    $t4, ($s0)
/* 004679AC 8F998534 */  lw    $t9, %call16(canmoverlod)($gp)
/* 004679B0 8E050008 */  lw    $a1, 8($s0)
/* 004679B4 0320F809 */  jalr  $t9
/* 004679B8 00000000 */   nop   
/* 004679BC 10400004 */  beqz  $v0, .L004679D0
/* 004679C0 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004679C4 8E0B0000 */  lw    $t3, ($s0)
/* 004679C8 1000000B */  b     .L004679F8
/* 004679CC 8D62002C */   lw    $v0, 0x2c($t3)
.L004679D0:
/* 004679D0 8E0C0000 */  lw    $t4, ($s0)
.L004679D4:
/* 004679D4 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 004679D8 8D82002C */  lw    $v0, 0x2c($t4)
/* 004679DC 44822000 */  mtc1  $v0, $f4
/* 004679E0 04410004 */  bgez  $v0, .L004679F4
/* 004679E4 468021A0 */   cvt.s.w $f6, $f4
/* 004679E8 44814000 */  mtc1  $at, $f8
/* 004679EC 00000000 */  nop   
/* 004679F0 46083180 */  add.s $f6, $f6, $f8
.L004679F4:
/* 004679F4 4606A500 */  add.s $f20, $f20, $f6
.L004679F8:
/* 004679F8 92CD0022 */  lbu   $t5, 0x22($s6)
.L004679FC:
/* 004679FC 51A00016 */  beql  $t5, $zero, .L00467A58
/* 00467A00 8E100004 */   lw    $s0, 4($s0)
/* 00467A04 920E0017 */  lbu   $t6, 0x17($s0)
/* 00467A08 55C00013 */  bnezl $t6, .L00467A58
/* 00467A0C 8E100004 */   lw    $s0, 4($s0)
/* 00467A10 920F0016 */  lbu   $t7, 0x16($s0)
/* 00467A14 51E00010 */  beql  $t7, $zero, .L00467A58
/* 00467A18 8E100004 */   lw    $s0, 4($s0)
/* 00467A1C 92180012 */  lbu   $t8, 0x12($s0)
/* 00467A20 57000005 */  bnezl $t8, .L00467A38
/* 00467A24 44825000 */   mtc1  $v0, $f10
/* 00467A28 92190015 */  lbu   $t9, 0x15($s0)
/* 00467A2C 5720000A */  bnezl $t9, .L00467A58
/* 00467A30 8E100004 */   lw    $s0, 4($s0)
/* 00467A34 44825000 */  mtc1  $v0, $f10
.L00467A38:
/* 00467A38 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00467A3C 04410004 */  bgez  $v0, .L00467A50
/* 00467A40 46805420 */   cvt.s.w $f16, $f10
/* 00467A44 44819000 */  mtc1  $at, $f18
/* 00467A48 00000000 */  nop   
/* 00467A4C 46128400 */  add.s $f16, $f16, $f18
.L00467A50:
/* 00467A50 4610A500 */  add.s $f20, $f20, $f16
/* 00467A54 8E100004 */  lw    $s0, 4($s0)
.L00467A58:
/* 00467A58 02429021 */  addu  $s2, $s2, $v0
/* 00467A5C 5600FFC6 */  bnezl $s0, .L00467978
/* 00467A60 8E040000 */   lw    $a0, ($s0)
.L00467A64:
/* 00467A64 8F9489B8 */  lw     $s4, %got(curstaticno)($gp)
/* 00467A68 00008025 */  move  $s0, $zero
/* 00467A6C 26D1000C */  addiu $s1, $s6, 0xc
/* 00467A70 8E940000 */  lw    $s4, ($s4)
/* 00467A74 8F938C68 */  lw     $s3, %got(bbtab)($gp)
/* 00467A78 26940000 */  addiu $s4, $s4, 0
.L00467A7C:
/* 00467A7C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00467A80 02002025 */  move  $a0, $s0
/* 00467A84 02202825 */  move  $a1, $s1
/* 00467A88 0320F809 */  jalr  $t9
/* 00467A8C 00000000 */   nop   
/* 00467A90 10400007 */  beqz  $v0, .L00467AB0
/* 00467A94 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467A98 8E680000 */  lw    $t0, ($s3)
/* 00467A9C 00104880 */  sll   $t1, $s0, 2
/* 00467AA0 01095021 */  addu  $t2, $t0, $t1
/* 00467AA4 8D4B0000 */  lw    $t3, ($t2)
/* 00467AA8 8D6C002C */  lw    $t4, 0x2c($t3)
/* 00467AAC 024C9021 */  addu  $s2, $s2, $t4
.L00467AB0:
/* 00467AB0 26100001 */  addiu $s0, $s0, 1
/* 00467AB4 1614FFF1 */  bne   $s0, $s4, .L00467A7C
/* 00467AB8 00000000 */   nop   
/* 00467ABC 56A00007 */  bnezl $s5, .L00467ADC
/* 00467AC0 44922000 */   mtc1  $s2, $f4
/* 00467AC4 8F828C1C */  lw     $v0, %got(num0occurlr)($gp)
/* 00467AC8 8C4D0000 */  lw    $t5, ($v0)
/* 00467ACC 25AE0001 */  addiu $t6, $t5, 1
/* 00467AD0 1000001A */  b     .L00467B3C
/* 00467AD4 AC4E0000 */   sw    $t6, ($v0)
/* 00467AD8 44922000 */  mtc1  $s2, $f4
.L00467ADC:
/* 00467ADC 3C013FC0 */  li    $at, 0x3FC00000 # 1.500000
/* 00467AE0 44813000 */  mtc1  $at, $f6
/* 00467AE4 46802220 */  cvt.s.w $f8, $f4
/* 00467AE8 46064282 */  mul.s $f10, $f8, $f6
/* 00467AEC 4614503C */  c.lt.s $f10, $f20
/* 00467AF0 00000000 */  nop   
/* 00467AF4 45020007 */  bc1fl .L00467B14
/* 00467AF8 44959000 */   mtc1  $s5, $f18
/* 00467AFC 8F828C28 */  lw     $v0, %got(numnotwellformedlr)($gp)
/* 00467B00 8C4F0000 */  lw    $t7, ($v0)
/* 00467B04 25F80001 */  addiu $t8, $t7, 1
/* 00467B08 1000000C */  b     .L00467B3C
/* 00467B0C AC580000 */   sw    $t8, ($v0)
/* 00467B10 44959000 */  mtc1  $s5, $f18
.L00467B14:
/* 00467B14 8F828C24 */  lw     $v0, %got(numsparselr)($gp)
/* 00467B18 46809420 */  cvt.s.w $f16, $f18
/* 00467B1C 4614803E */  c.le.s $f16, $f20
/* 00467B20 00000000 */  nop   
/* 00467B24 45030003 */  bc1tl .L00467B34
/* 00467B28 8C590000 */   lw    $t9, ($v0)
/* 00467B2C 000A000D */  break 0xa
/* 00467B30 8C590000 */  lw    $t9, ($v0)
.L00467B34:
/* 00467B34 27280001 */  addiu $t0, $t9, 1
/* 00467B38 AC480000 */  sw    $t0, ($v0)
.L00467B3C:
/* 00467B3C 8F998530 */  lw    $t9, %call16(contiguous)($gp)
/* 00467B40 02C02025 */  move  $a0, $s6
/* 00467B44 0320F809 */  jalr  $t9
/* 00467B48 00000000 */   nop   
/* 00467B4C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00467B50 8FBF003C */  lw    $ra, 0x3c($sp)
/* 00467B54 D7B40010 */  ldc1  $f20, 0x10($sp)
/* 00467B58 8F838C04 */  lw     $v1, %got(contiglr)($gp)
/* 00467B5C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00467B60 8FB10020 */  lw    $s1, 0x20($sp)
/* 00467B64 8C690000 */  lw    $t1, ($v1)
/* 00467B68 8FB20024 */  lw    $s2, 0x24($sp)
/* 00467B6C 8FB30028 */  lw    $s3, 0x28($sp)
/* 00467B70 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00467B74 8FB50030 */  lw    $s5, 0x30($sp)
/* 00467B78 8FB60034 */  lw    $s6, 0x34($sp)
/* 00467B7C 01225021 */  addu  $t2, $t1, $v0
/* 00467B80 27BD0040 */  addiu $sp, $sp, 0x40
/* 00467B84 03E00008 */  jr    $ra
/* 00467B88 AC6A0000 */   sw    $t2, ($v1)
    .type whyuncolored, @function
    .size whyuncolored, .-whyuncolored
    .end whyuncolored
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel inc_allococ
    .ent inc_allococ
    # 00469280 globalcolor
/* 00467B8C 3C1C0FBB */  .cpload $t9
/* 00467B90 279C2704 */  
/* 00467B94 0399E021 */  
/* 00467B98 8C820008 */  lw    $v0, 8($a0)
/* 00467B9C 1040000A */  beqz  $v0, .L00467BC8
/* 00467BA0 00000000 */   nop   
/* 00467BA4 8F838C2C */  lw     $v1, %got(allococ)($gp)
.L00467BA8:
/* 00467BA8 8C6E0000 */  lw    $t6, ($v1)
/* 00467BAC 944F0010 */  lhu   $t7, 0x10($v0)
/* 00467BB0 90590012 */  lbu   $t9, 0x12($v0)
/* 00467BB4 8C420004 */  lw    $v0, 4($v0)
/* 00467BB8 01CFC021 */  addu  $t8, $t6, $t7
/* 00467BBC 03194021 */  addu  $t0, $t8, $t9
/* 00467BC0 1440FFF9 */  bnez  $v0, .L00467BA8
/* 00467BC4 AC680000 */   sw    $t0, ($v1)
.L00467BC8:
/* 00467BC8 03E00008 */  jr    $ra
/* 00467BCC 00000000 */   nop   
    .type inc_allococ, @function
    .size inc_allococ, .-inc_allococ
    .end inc_allococ
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel is_cup_affecting_regs
    .ent is_cup_affecting_regs
    # 00467F04 split
    # 00468A14 cupcosts
    # 00469280 globalcolor
/* 00467BD0 8C820020 */  lw    $v0, 0x20($a0)
/* 00467BD4 90450000 */  lbu   $a1, ($v0)
/* 00467BD8 2CAE0040 */  sltiu $t6, $a1, 0x40
/* 00467BDC 11C00009 */  beqz  $t6, .L00467C04
/* 00467BE0 00000000 */   nop   
/* 00467BE4 8F998044 */  lw    $t9, %got(D_10010F78)($gp)
/* 00467BE8 00057943 */  sra   $t7, $a1, 5
/* 00467BEC 000FC080 */  sll   $t8, $t7, 2
/* 00467BF0 27390F78 */  addiu $t9, %lo(D_10010F78) # addiu $t9, $t9, 0xf78
/* 00467BF4 03384021 */  addu  $t0, $t9, $t8
/* 00467BF8 8D090000 */  lw    $t1, ($t0)
/* 00467BFC 00A95004 */  sllv  $t2, $t1, $a1
/* 00467C00 294E0000 */  slti  $t6, $t2, 0
.L00467C04:
/* 00467C04 15C00009 */  bnez  $t6, .L00467C2C
/* 00467C08 01C01825 */   move  $v1, $t6
/* 00467C0C 38A30017 */  xori  $v1, $a1, 0x17
/* 00467C10 2C630001 */  sltiu $v1, $v1, 1
/* 00467C14 10600005 */  beqz  $v1, .L00467C2C
/* 00467C18 00000000 */   nop   
/* 00467C1C 9443001A */  lhu   $v1, 0x1a($v0)
/* 00467C20 30630002 */  andi  $v1, $v1, 2
/* 00467C24 0003182B */  sltu  $v1, $zero, $v1
/* 00467C28 2C630001 */  sltiu $v1, $v1, 1
.L00467C2C:
/* 00467C2C 03E00008 */  jr    $ra
/* 00467C30 00601025 */   move  $v0, $v1
    .type is_cup_affecting_regs, @function
    .size is_cup_affecting_regs, .-is_cup_affecting_regs
    .end is_cup_affecting_regs
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel needsplit
    .ent needsplit
    # 00469280 globalcolor
/* 00467C34 3C1C0FBB */  .cpload $t9
/* 00467C38 279C265C */  
/* 00467C3C 0399E021 */  
/* 00467C40 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00467C44 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00467C48 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00467C4C AFB00014 */  sw    $s0, 0x14($sp)
/* 00467C50 908E0021 */  lbu   $t6, 0x21($a0)
/* 00467C54 00808025 */  move  $s0, $a0
/* 00467C58 00A03025 */  move  $a2, $a1
/* 00467C5C 51C00004 */  beql  $t6, $zero, .L00467C70
/* 00467C60 8E020024 */   lw    $v0, 0x24($s0)
/* 00467C64 100000A2 */  b     .L00467EF0
/* 00467C68 00001825 */   move  $v1, $zero
/* 00467C6C 8E020024 */  lw    $v0, 0x24($s0)
.L00467C70:
/* 00467C70 24040001 */  li    $a0, 1
/* 00467C74 2841001E */  slti  $at, $v0, 0x1e
/* 00467C78 5420000E */  bnezl $at, .L00467CB4
/* 00467C7C 8E030008 */   lw    $v1, 8($s0)
/* 00467C80 920F0023 */  lbu   $t7, 0x23($s0)
/* 00467C84 51E00008 */  beql  $t7, $zero, .L00467CA8
/* 00467C88 28410320 */   slti  $at, $v0, 0x320
/* 00467C8C 8F818044 */  lw    $at, %got(RO_1000D660)($gp)
/* 00467C90 C6060030 */  lwc1  $f6, 0x30($s0)
/* 00467C94 C424D660 */  lwc1  $f4, %lo(RO_1000D660)($at)
/* 00467C98 4606203C */  c.lt.s $f4, $f6
/* 00467C9C 00000000 */  nop   
/* 00467CA0 45000024 */  bc1f  .L00467D34
/* 00467CA4 28410320 */   slti  $at, $v0, 0x320
.L00467CA8:
/* 00467CA8 10200022 */  beqz  $at, .L00467D34
/* 00467CAC 00000000 */   nop   
/* 00467CB0 8E030008 */  lw    $v1, 8($s0)
.L00467CB4:
/* 00467CB4 1060001F */  beqz  $v1, .L00467D34
/* 00467CB8 00000000 */   nop   
/* 00467CBC 8F858D84 */  lw     $a1, %got(setregs)($gp)
/* 00467CC0 24A5FFF8 */  addiu $a1, $a1, -8
/* 00467CC4 90780013 */  lbu   $t8, 0x13($v1)
.L00467CC8:
/* 00467CC8 000610C0 */  sll   $v0, $a2, 3
/* 00467CCC 5700000E */  bnezl $t8, .L00467D08
/* 00467CD0 94690010 */   lhu   $t1, 0x10($v1)
/* 00467CD4 8C690000 */  lw    $t1, ($v1)
/* 00467CD8 00A2C821 */  addu  $t9, $a1, $v0
/* 00467CDC 8F280004 */  lw    $t0, 4($t9)
/* 00467CE0 01225021 */  addu  $t2, $t1, $v0
/* 00467CE4 8D4B0030 */  lw    $t3, 0x30($t2)
/* 00467CE8 8D4E002C */  lw    $t6, 0x2c($t2)
/* 00467CEC 8F2D0000 */  lw    $t5, ($t9)
/* 00467CF0 010B6026 */  xor   $t4, $t0, $t3
/* 00467CF4 01AE7826 */  xor   $t7, $t5, $t6
/* 00467CF8 018FC025 */  or    $t8, $t4, $t7
/* 00467CFC 53000009 */  beql  $t8, $zero, .L00467D24
/* 00467D00 8C630004 */   lw    $v1, 4($v1)
/* 00467D04 94690010 */  lhu   $t1, 0x10($v1)
.L00467D08:
/* 00467D08 90680012 */  lbu   $t0, 0x12($v1)
/* 00467D0C 01285821 */  addu  $t3, $t1, $t0
/* 00467D10 51600004 */  beql  $t3, $zero, .L00467D24
/* 00467D14 8C630004 */   lw    $v1, 4($v1)
/* 00467D18 10000002 */  b     .L00467D24
/* 00467D1C 00002025 */   move  $a0, $zero
/* 00467D20 8C630004 */  lw    $v1, 4($v1)
.L00467D24:
/* 00467D24 10600003 */  beqz  $v1, .L00467D34
/* 00467D28 00000000 */   nop   
/* 00467D2C 5480FFE6 */  bnezl $a0, .L00467CC8
/* 00467D30 90780013 */   lbu   $t8, 0x13($v1)
.L00467D34:
/* 00467D34 1080006E */  beqz  $a0, .L00467EF0
/* 00467D38 24030001 */   li    $v1, 1
/* 00467D3C 2419FFFF */  li    $t9, -1
/* 00467D40 A2190020 */  sb    $t9, 0x20($s0)
/* 00467D44 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00467D48 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00467D4C 8E050004 */  lw    $a1, 4($s0)
/* 00467D50 0320F809 */  jalr  $t9
/* 00467D54 00000000 */   nop   
/* 00467D58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467D5C 8E050004 */  lw    $a1, 4($s0)
/* 00467D60 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00467D64 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 00467D68 0320F809 */  jalr  $t9
/* 00467D6C 00000000 */   nop   
/* 00467D70 8E020038 */  lw    $v0, 0x38($s0)
/* 00467D74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467D78 24060004 */  li    $a2, 4
/* 00467D7C 1040000A */  beqz  $v0, .L00467DA8
/* 00467D80 00000000 */   nop   
/* 00467D84 8C430000 */  lw    $v1, ($v0)
.L00467D88:
/* 00467D88 50600005 */  beql  $v1, $zero, .L00467DA0
/* 00467D8C 8C420004 */   lw    $v0, 4($v0)
/* 00467D90 8C6A0024 */  lw    $t2, 0x24($v1)
/* 00467D94 254DFFFF */  addiu $t5, $t2, -1
/* 00467D98 AC6D0024 */  sw    $t5, 0x24($v1)
/* 00467D9C 8C420004 */  lw    $v0, 4($v0)
.L00467DA0:
/* 00467DA0 5440FFF9 */  bnezl $v0, .L00467D88
/* 00467DA4 8C430000 */   lw    $v1, ($v0)
.L00467DA8:
/* 00467DA8 8F8E8A94 */  lw     $t6, %got(dbugno)($gp)
/* 00467DAC 24010006 */  li    $at, 6
/* 00467DB0 8DCE0000 */  lw    $t6, ($t6)
/* 00467DB4 15C10028 */  bne   $t6, $at, .L00467E58
/* 00467DB8 00000000 */   nop   
/* 00467DBC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00467DC0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00467DC4 8E0C0000 */  lw    $t4, ($s0)
/* 00467DC8 2407000A */  li    $a3, 10
/* 00467DCC 8C840000 */  lw    $a0, ($a0)
/* 00467DD0 0320F809 */  jalr  $t9
/* 00467DD4 95850002 */   lhu   $a1, 2($t4)
/* 00467DD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467DDC 2405003A */  li    $a1, 58
/* 00467DE0 24060001 */  li    $a2, 1
/* 00467DE4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00467DE8 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00467DEC 2407000A */  li    $a3, 10
/* 00467DF0 8C840000 */  lw    $a0, ($a0)
/* 00467DF4 0320F809 */  jalr  $t9
/* 00467DF8 AFA40024 */   sw    $a0, 0x24($sp)
/* 00467DFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467E00 8FA40024 */  lw    $a0, 0x24($sp)
/* 00467E04 8E050004 */  lw    $a1, 4($s0)
/* 00467E08 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00467E0C 24060005 */  li    $a2, 5
/* 00467E10 2407000A */  li    $a3, 10
/* 00467E14 0320F809 */  jalr  $t9
/* 00467E18 00000000 */   nop   
/* 00467E1C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467E20 24060015 */  li    $a2, 21
/* 00467E24 24070015 */  li    $a3, 21
/* 00467E28 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00467E2C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00467E30 8F858044 */  lw    $a1, %got(RO_1000D648)($gp)
/* 00467E34 8C840000 */  lw    $a0, ($a0)
/* 00467E38 0320F809 */  jalr  $t9
/* 00467E3C 24A5D648 */   addiu $a1, %lo(RO_1000D648) # addiu $a1, $a1, -0x29b8
/* 00467E40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467E44 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00467E48 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00467E4C 0320F809 */  jalr  $t9
/* 00467E50 8C840000 */   lw    $a0, ($a0)
/* 00467E54 8FBC0018 */  lw    $gp, 0x18($sp)
.L00467E58:
/* 00467E58 8F8F8ADC */  lw     $t7, %got(dowhyuncolor)($gp)
/* 00467E5C 91EF0000 */  lbu   $t7, ($t7)
/* 00467E60 11E00021 */  beqz  $t7, .L00467EE8
/* 00467E64 00000000 */   nop   
/* 00467E68 92020023 */  lbu   $v0, 0x23($s0)
/* 00467E6C 54400008 */  bnezl $v0, .L00467E90
/* 00467E70 24010001 */   li    $at, 1
/* 00467E74 8F998538 */  lw    $t9, %call16(compute_save)($gp)
/* 00467E78 02002025 */  move  $a0, $s0
/* 00467E7C 0320F809 */  jalr  $t9
/* 00467E80 00000000 */   nop   
/* 00467E84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467E88 92020023 */  lbu   $v0, 0x23($s0)
/* 00467E8C 24010001 */  li    $at, 1
.L00467E90:
/* 00467E90 14410010 */  bne   $v0, $at, .L00467ED4
/* 00467E94 00000000 */   nop   
/* 00467E98 8F828C18 */  lw     $v0, %got(numcantcoloredlr)($gp)
/* 00467E9C 02002025 */  move  $a0, $s0
/* 00467EA0 8C580000 */  lw    $t8, ($v0)
/* 00467EA4 27090001 */  addiu $t1, $t8, 1
/* 00467EA8 AC490000 */  sw    $t1, ($v0)
/* 00467EAC 8F998530 */  lw    $t9, %call16(contiguous)($gp)
/* 00467EB0 0320F809 */  jalr  $t9
/* 00467EB4 00000000 */   nop   
/* 00467EB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467EBC 8F838C04 */  lw     $v1, %got(contiglr)($gp)
/* 00467EC0 8C680000 */  lw    $t0, ($v1)
/* 00467EC4 01025821 */  addu  $t3, $t0, $v0
/* 00467EC8 AC6B0000 */  sw    $t3, ($v1)
/* 00467ECC 10000008 */  b     .L00467EF0
/* 00467ED0 00001825 */   move  $v1, $zero
.L00467ED4:
/* 00467ED4 8F99853C */  lw    $t9, %call16(whyuncolored)($gp)
/* 00467ED8 02002025 */  move  $a0, $s0
/* 00467EDC 0320F809 */  jalr  $t9
/* 00467EE0 00000000 */   nop   
/* 00467EE4 8FBC0018 */  lw    $gp, 0x18($sp)
.L00467EE8:
/* 00467EE8 10000001 */  b     .L00467EF0
/* 00467EEC 00001825 */   move  $v1, $zero
.L00467EF0:
/* 00467EF0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00467EF4 8FB00014 */  lw    $s0, 0x14($sp)
/* 00467EF8 27BD0038 */  addiu $sp, $sp, 0x38
/* 00467EFC 03E00008 */  jr    $ra
/* 00467F00 00601025 */   move  $v0, $v1
    .type needsplit, @function
    .size needsplit, .-needsplit
    .end needsplit
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel split
    .ent split
    # 00469280 globalcolor
/* 00467F04 3C1C0FBB */  .cpload $t9
/* 00467F08 279C238C */  
/* 00467F0C 0399E021 */  
/* 00467F10 27BDFF88 */  addiu $sp, $sp, -0x78
/* 00467F14 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00467F18 AFB30020 */  sw    $s3, 0x20($sp)
/* 00467F1C AFB2001C */  sw    $s2, 0x1c($sp)
/* 00467F20 00A09025 */  move  $s2, $a1
/* 00467F24 00809825 */  move  $s3, $a0
/* 00467F28 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00467F2C AFB40024 */  sw    $s4, 0x24($sp)
/* 00467F30 00C0A025 */  move  $s4, $a2
/* 00467F34 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00467F38 AFB10018 */  sw    $s1, 0x18($sp)
/* 00467F3C AFB00014 */  sw    $s0, 0x14($sp)
/* 00467F40 AFA70084 */  sw    $a3, 0x84($sp)
/* 00467F44 2404003C */  li    $a0, 60
/* 00467F48 0320F809 */  jalr  $t9
/* 00467F4C 8F858954 */   lw     $a1, %got(perm_heap)($gp)
/* 00467F50 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00467F54 14400005 */  bnez  $v0, .L00467F6C
/* 00467F58 AE420000 */   sw    $v0, ($s2)
/* 00467F5C 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00467F60 240E0001 */  li    $t6, 1
/* 00467F64 100002A3 */  b     .L004689F4
/* 00467F68 A02E0000 */   sb    $t6, ($at)
.L00467F6C:
/* 00467F6C 8E6F0000 */  lw    $t7, ($s3)
/* 00467F70 8E590000 */  lw    $t9, ($s2)
/* 00467F74 8DF80034 */  lw    $t8, 0x34($t7)
/* 00467F78 AF380034 */  sw    $t8, 0x34($t9)
/* 00467F7C 8E480000 */  lw    $t0, ($s2)
/* 00467F80 8E690000 */  lw    $t1, ($s3)
/* 00467F84 AD280034 */  sw    $t0, 0x34($t1)
/* 00467F88 8E6A0000 */  lw    $t2, ($s3)
/* 00467F8C 8E430000 */  lw    $v1, ($s2)
/* 00467F90 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 00467F94 8D4B0000 */  lw    $t3, ($t2)
/* 00467F98 AC6B0000 */  sw    $t3, ($v1)
/* 00467F9C 8E6C0000 */  lw    $t4, ($s3)
/* 00467FA0 918D0022 */  lbu   $t5, 0x22($t4)
/* 00467FA4 A0600020 */  sb    $zero, 0x20($v1)
/* 00467FA8 A06D0022 */  sb    $t5, 0x22($v1)
/* 00467FAC 8E6E0000 */  lw    $t6, ($s3)
/* 00467FB0 91CF0021 */  lbu   $t7, 0x21($t6)
/* 00467FB4 A06F0021 */  sb    $t7, 0x21($v1)
/* 00467FB8 8E780000 */  lw    $t8, ($s3)
/* 00467FBC 8E450000 */  lw    $a1, ($s2)
/* 00467FC0 8F040000 */  lw    $a0, ($t8)
/* 00467FC4 0320F809 */  jalr  $t9
/* 00467FC8 AFA3004C */   sw    $v1, 0x4c($sp)
/* 00467FCC 8FA3004C */  lw    $v1, 0x4c($sp)
/* 00467FD0 240DFFFF */  li    $t5, -1
/* 00467FD4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00467FD8 AC620004 */  sw    $v0, 4($v1)
/* 00467FDC 8E790000 */  lw    $t9, ($s3)
/* 00467FE0 00002025 */  move  $a0, $zero
/* 00467FE4 8F290014 */  lw    $t1, 0x14($t9)
/* 00467FE8 AC690014 */  sw    $t1, 0x14($v1)
/* 00467FEC 8F280018 */  lw    $t0, 0x18($t9)
/* 00467FF0 AC680018 */  sw    $t0, 0x18($v1)
/* 00467FF4 8E6A0000 */  lw    $t2, ($s3)
/* 00467FF8 8D4C000C */  lw    $t4, 0xc($t2)
/* 00467FFC AC6C000C */  sw    $t4, 0xc($v1)
/* 00468000 8D4B0010 */  lw    $t3, 0x10($t2)
/* 00468004 AC6D001C */  sw    $t5, 0x1c($v1)
/* 00468008 AC6B0010 */  sw    $t3, 0x10($v1)
/* 0046800C 8E6E0000 */  lw    $t6, ($s3)
/* 00468010 8DCF0008 */  lw    $t7, 8($t6)
/* 00468014 AC6F0008 */  sw    $t7, 8($v1)
/* 00468018 8E780000 */  lw    $t8, ($s3)
/* 0046801C 8F190028 */  lw    $t9, 0x28($t8)
/* 00468020 AC790028 */  sw    $t9, 0x28($v1)
/* 00468024 8F08002C */  lw    $t0, 0x2c($t8)
/* 00468028 A0600023 */  sb    $zero, 0x23($v1)
/* 0046802C AC68002C */  sw    $t0, 0x2c($v1)
/* 00468030 8E690000 */  lw    $t1, ($s3)
/* 00468034 A1200023 */  sb    $zero, 0x23($t1)
/* 00468038 8E470000 */  lw    $a3, ($s2)
/* 0046803C 8CE60008 */  lw    $a2, 8($a3)
/* 00468040 10C0001D */  beqz  $a2, .L004680B8
/* 00468044 00C08025 */   move  $s0, $a2
/* 00468048 8F858D84 */  lw     $a1, %got(setregs)($gp)
/* 0046804C 24A5FFF8 */  addiu $a1, $a1, -8
/* 00468050 920A0014 */  lbu   $t2, 0x14($s0)
.L00468054:
/* 00468054 001410C0 */  sll   $v0, $s4, 3
/* 00468058 02001825 */  move  $v1, $s0
/* 0046805C 11400011 */  beqz  $t2, .L004680A4
/* 00468060 00A25821 */   addu  $t3, $a1, $v0
/* 00468064 8E0D0000 */  lw    $t5, ($s0)
/* 00468068 8D6C0004 */  lw    $t4, 4($t3)
/* 0046806C 8D780000 */  lw    $t8, ($t3)
/* 00468070 01A27021 */  addu  $t6, $t5, $v0
/* 00468074 8DCF0030 */  lw    $t7, 0x30($t6)
/* 00468078 8DC8002C */  lw    $t0, 0x2c($t6)
/* 0046807C 018FC826 */  xor   $t9, $t4, $t7
/* 00468080 03084826 */  xor   $t1, $t8, $t0
/* 00468084 03295025 */  or    $t2, $t9, $t1
/* 00468088 15400004 */  bnez  $t2, .L0046809C
/* 0046808C 00000000 */   nop   
/* 00468090 920D0013 */  lbu   $t5, 0x13($s0)
/* 00468094 51A00004 */  beql  $t5, $zero, .L004680A8
/* 00468098 8C700004 */   lw    $s0, 4($v1)
.L0046809C:
/* 0046809C 10000002 */  b     .L004680A8
/* 004680A0 24040001 */   li    $a0, 1
.L004680A4:
/* 004680A4 8C700004 */  lw    $s0, 4($v1)
.L004680A8:
/* 004680A8 14800003 */  bnez  $a0, .L004680B8
/* 004680AC 00000000 */   nop   
/* 004680B0 5600FFE8 */  bnezl $s0, .L00468054
/* 004680B4 920A0014 */   lbu   $t2, 0x14($s0)
.L004680B8:
/* 004680B8 1480003B */  bnez  $a0, .L004681A8
/* 004680BC 00000000 */   nop   
/* 004680C0 14800022 */  bnez  $a0, .L0046814C
/* 004680C4 00C08025 */   move  $s0, $a2
/* 004680C8 10C00020 */  beqz  $a2, .L0046814C
/* 004680CC 00000000 */   nop   
/* 004680D0 8F8C8D84 */  lw     $t4, %got(setregs)($gp)
/* 004680D4 001410C0 */  sll   $v0, $s4, 3
/* 004680D8 258CFFF8 */  addiu $t4, $t4, -8
/* 004680DC 004C2821 */  addu  $a1, $v0, $t4
/* 004680E0 8E0B0000 */  lw    $t3, ($s0)
.L004680E4:
/* 004680E4 8CAF0004 */  lw    $t7, 4($a1)
/* 004680E8 8CB90000 */  lw    $t9, ($a1)
/* 004680EC 01627021 */  addu  $t6, $t3, $v0
/* 004680F0 8DD80030 */  lw    $t8, 0x30($t6)
/* 004680F4 8DC9002C */  lw    $t1, 0x2c($t6)
/* 004680F8 02001825 */  move  $v1, $s0
/* 004680FC 01F84026 */  xor   $t0, $t7, $t8
/* 00468100 03295026 */  xor   $t2, $t9, $t1
/* 00468104 010A6825 */  or    $t5, $t0, $t2
/* 00468108 55A00005 */  bnezl $t5, .L00468120
/* 0046810C 960B0010 */   lhu   $t3, 0x10($s0)
/* 00468110 920C0013 */  lbu   $t4, 0x13($s0)
/* 00468114 51800009 */  beql  $t4, $zero, .L0046813C
/* 00468118 8C700004 */   lw    $s0, 4($v1)
/* 0046811C 960B0010 */  lhu   $t3, 0x10($s0)
.L00468120:
/* 00468120 920F0012 */  lbu   $t7, 0x12($s0)
/* 00468124 016FC021 */  addu  $t8, $t3, $t7
/* 00468128 53000004 */  beql  $t8, $zero, .L0046813C
/* 0046812C 8C700004 */   lw    $s0, 4($v1)
/* 00468130 10000002 */  b     .L0046813C
/* 00468134 24040001 */   li    $a0, 1
/* 00468138 8C700004 */  lw    $s0, 4($v1)
.L0046813C:
/* 0046813C 14800003 */  bnez  $a0, .L0046814C
/* 00468140 00000000 */   nop   
/* 00468144 5600FFE7 */  bnezl $s0, .L004680E4
/* 00468148 8E0B0000 */   lw    $t3, ($s0)
.L0046814C:
/* 0046814C 14800016 */  bnez  $a0, .L004681A8
/* 00468150 00000000 */   nop   
/* 00468154 8E6E0000 */  lw    $t6, ($s3)
/* 00468158 8F898ADC */  lw     $t1, %got(dowhyuncolor)($gp)
/* 0046815C 8DD90038 */  lw    $t9, 0x38($t6)
/* 00468160 ACF90038 */  sw    $t9, 0x38($a3)
/* 00468164 91290000 */  lbu   $t1, ($t1)
/* 00468168 512000B6 */  beql  $t1, $zero, .L00468444
/* 0046816C 93A80087 */   lbu   $t0, 0x87($sp)
/* 00468170 8F828C1C */  lw     $v0, %got(num0occurlr)($gp)
/* 00468174 8C480000 */  lw    $t0, ($v0)
/* 00468178 250A0001 */  addiu $t2, $t0, 1
/* 0046817C AC4A0000 */  sw    $t2, ($v0)
/* 00468180 8F998530 */  lw    $t9, %call16(contiguous)($gp)
/* 00468184 8E440000 */  lw    $a0, ($s2)
/* 00468188 0320F809 */  jalr  $t9
/* 0046818C 00000000 */   nop   
/* 00468190 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468194 8F838C04 */  lw     $v1, %got(contiglr)($gp)
/* 00468198 8C6D0000 */  lw    $t5, ($v1)
/* 0046819C 01A26021 */  addu  $t4, $t5, $v0
/* 004681A0 100000A7 */  b     .L00468440
/* 004681A4 AC6C0000 */   sw    $t4, ($v1)
.L004681A8:
/* 004681A8 8F998500 */  lw    $t9, %call16(dellivbb)($gp)
/* 004681AC 24E40008 */  addiu $a0, $a3, 8
/* 004681B0 02002825 */  move  $a1, $s0
/* 004681B4 0320F809 */  jalr  $t9
/* 004681B8 00000000 */   nop   
/* 004681BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004681C0 8E440000 */  lw    $a0, ($s2)
/* 004681C4 8E0B0000 */  lw    $t3, ($s0)
/* 004681C8 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004681CC 24840014 */  addiu $a0, $a0, 0x14
/* 004681D0 95650008 */  lhu   $a1, 8($t3)
/* 004681D4 0320F809 */  jalr  $t9
/* 004681D8 00000000 */   nop   
/* 004681DC AE000004 */  sw    $zero, 4($s0)
/* 004681E0 8E6F0000 */  lw    $t7, ($s3)
/* 004681E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004681E8 ADF00008 */  sw    $s0, 8($t7)
/* 004681EC 8F9981E0 */  lw    $t9, %call16(formbvlivran)($gp)
/* 004681F0 AFB0006C */  sw    $s0, 0x6c($sp)
/* 004681F4 8E640000 */  lw    $a0, ($s3)
/* 004681F8 0320F809 */  jalr  $t9
/* 004681FC 2484000C */   addiu $a0, $a0, 0xc
/* 00468200 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468204 8E640000 */  lw    $a0, ($s3)
/* 00468208 8F9981E0 */  lw    $t9, %call16(formbvlivran)($gp)
/* 0046820C 24840014 */  addiu $a0, $a0, 0x14
/* 00468210 0320F809 */  jalr  $t9
/* 00468214 00000000 */   nop   
/* 00468218 8E630000 */  lw    $v1, ($s3)
/* 0046821C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468220 240EFFFF */  li    $t6, -1
/* 00468224 8C780018 */  lw    $t8, 0x18($v1)
/* 00468228 530001F3 */  beql  $t8, $zero, .L004689F8
/* 0046822C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00468230 AC6E001C */  sw    $t6, 0x1c($v1)
/* 00468234 8E190000 */  lw    $t9, ($s0)
/* 00468238 8E640000 */  lw    $a0, ($s3)
/* 0046823C 97250008 */  lhu   $a1, 8($t9)
/* 00468240 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 00468244 24840014 */  addiu $a0, $a0, 0x14
/* 00468248 0320F809 */  jalr  $t9
/* 0046824C 00000000 */   nop   
/* 00468250 8E690000 */  lw    $t1, ($s3)
/* 00468254 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468258 02803825 */  move  $a3, $s4
/* 0046825C AD20002C */  sw    $zero, 0x2c($t1)
/* 00468260 AD200028 */  sw    $zero, 0x28($t1)
/* 00468264 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 00468268 8E660000 */  lw    $a2, ($s3)
/* 0046826C 92050013 */  lbu   $a1, 0x13($s0)
/* 00468270 0320F809 */  jalr  $t9
/* 00468274 8E040000 */   lw    $a0, ($s0)
/* 00468278 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046827C 8E640000 */  lw    $a0, ($s3)
/* 00468280 02802825 */  move  $a1, $s4
/* 00468284 8F998504 */  lw    $t9, %call16(updatecolorsleft)($gp)
/* 00468288 0320F809 */  jalr  $t9
/* 0046828C 00000000 */   nop   
/* 00468290 8E680000 */  lw    $t0, ($s3)
/* 00468294 8E4D0000 */  lw    $t5, ($s2)
/* 00468298 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046829C 8D0A0038 */  lw    $t2, 0x38($t0)
/* 004682A0 ADAA0038 */  sw    $t2, 0x38($t5)
/* 004682A4 8E6C0000 */  lw    $t4, ($s3)
/* 004682A8 8E4F0000 */  lw    $t7, ($s2)
/* 004682AC 8D8B0024 */  lw    $t3, 0x24($t4)
/* 004682B0 ADEB0024 */  sw    $t3, 0x24($t7)
/* 004682B4 8E780000 */  lw    $t8, ($s3)
/* 004682B8 AF000038 */  sw    $zero, 0x38($t8)
/* 004682BC 8E190000 */  lw    $t9, ($s0)
/* 004682C0 8E4E0000 */  lw    $t6, ($s2)
/* 004682C4 97250008 */  lhu   $a1, 8($t9)
/* 004682C8 8F99850C */  lw    $t9, %call16(findsharedintf)($gp)
/* 004682CC 8DC40038 */  lw    $a0, 0x38($t6)
/* 004682D0 0320F809 */  jalr  $t9
/* 004682D4 00000000 */   nop   
/* 004682D8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004682DC 8E690000 */  lw    $t1, ($s3)
/* 004682E0 00001825 */  move  $v1, $zero
/* 004682E4 8F818C74 */  lw     $at, %got(formingmax)($gp)
/* 004682E8 8F868C6C */  lw     $a2, %got(formingtab)($gp)
/* 004682EC AD220024 */  sw    $v0, 0x24($t1)
/* 004682F0 AC200000 */  sw    $zero, ($at)
/* 004682F4 8E080000 */  lw    $t0, ($s0)
/* 004682F8 8CCA0000 */  lw    $t2, ($a2)
/* 004682FC 8F918C70 */  lw     $s1, %got(forminginx)($gp)
/* 00468300 AD480000 */  sw    $t0, ($t2)
/* 00468304 AE200000 */  sw    $zero, ($s1)
.L00468308:
/* 00468308 8F868C6C */  lw     $a2, %got(formingtab)($gp)
/* 0046830C 8F9984D8 */  lw    $t9, %call16(gettolivbb)($gp)
/* 00468310 8E6D0000 */  lw    $t5, ($s3)
/* 00468314 8CCC0000 */  lw    $t4, ($a2)
/* 00468318 00035880 */  sll   $t3, $v1, 2
/* 0046831C 8DA40000 */  lw    $a0, ($t5)
/* 00468320 018B7821 */  addu  $t7, $t4, $t3
/* 00468324 0320F809 */  jalr  $t9
/* 00468328 8DE50000 */   lw    $a1, ($t7)
/* 0046832C 90580017 */  lbu   $t8, 0x17($v0)
/* 00468330 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468334 93AE0087 */  lbu   $t6, 0x87($sp)
/* 00468338 1700001E */  bnez  $t8, .L004683B4
/* 0046833C 8F908C6C */   lw     $s0, %got(formingtab)($gp)
/* 00468340 51C0000C */  beql  $t6, $zero, .L00468374
/* 00468344 8E2C0000 */   lw    $t4, ($s1)
/* 00468348 8E290000 */  lw    $t1, ($s1)
/* 0046834C 8E190000 */  lw    $t9, ($s0)
/* 00468350 00094080 */  sll   $t0, $t1, 2
/* 00468354 03285021 */  addu  $t2, $t9, $t0
/* 00468358 8F998544 */  lw    $t9, %call16(is_cup_affecting_regs)($gp)
/* 0046835C 8D440000 */  lw    $a0, ($t2)
/* 00468360 0320F809 */  jalr  $t9
/* 00468364 00000000 */   nop   
/* 00468368 14400012 */  bnez  $v0, .L004683B4
/* 0046836C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00468370 8E2C0000 */  lw    $t4, ($s1)
.L00468374:
/* 00468374 8E0D0000 */  lw    $t5, ($s0)
/* 00468378 24010031 */  li    $at, 49
/* 0046837C 000C5880 */  sll   $t3, $t4, 2
/* 00468380 01AB7821 */  addu  $t7, $t5, $t3
/* 00468384 8DF80000 */  lw    $t8, ($t7)
/* 00468388 27A6006C */  addiu $a2, $sp, 0x6c
/* 0046838C 8F0E0020 */  lw    $t6, 0x20($t8)
/* 00468390 91C90000 */  lbu   $t1, ($t6)
/* 00468394 51210008 */  beql  $t1, $at, .L004683B8
/* 00468398 8E390000 */   lw    $t9, ($s1)
/* 0046839C 8F998514 */  lw    $t9, %call16(addadjacents)($gp)
/* 004683A0 8E440000 */  lw    $a0, ($s2)
/* 004683A4 8E650000 */  lw    $a1, ($s3)
/* 004683A8 0320F809 */  jalr  $t9
/* 004683AC 02803825 */   move  $a3, $s4
/* 004683B0 8FBC0028 */  lw    $gp, 0x28($sp)
.L004683B4:
/* 004683B4 8E390000 */  lw    $t9, ($s1)
.L004683B8:
/* 004683B8 8F8A8C74 */  lw     $t2, %got(formingmax)($gp)
/* 004683BC 27280001 */  addiu $t0, $t9, 1
/* 004683C0 AE280000 */  sw    $t0, ($s1)
/* 004683C4 8D4A0000 */  lw    $t2, ($t2)
/* 004683C8 01001825 */  move  $v1, $t0
/* 004683CC 0148082B */  sltu  $at, $t2, $t0
/* 004683D0 1020FFCD */  beqz  $at, .L00468308
/* 004683D4 00000000 */   nop   
/* 004683D8 8F828BFC */  lw     $v0, %got(numsplitlu)($gp)
/* 004683DC 8C4C0000 */  lw    $t4, ($v0)
/* 004683E0 01886821 */  addu  $t5, $t4, $t0
/* 004683E4 AC4D0000 */  sw    $t5, ($v0)
/* 004683E8 8E470000 */  lw    $a3, ($s2)
/* 004683EC 8CEB0008 */  lw    $t3, 8($a3)
/* 004683F0 15600068 */  bnez  $t3, .L00468594
/* 004683F4 00000000 */   nop   
/* 004683F8 8F998190 */  lw    $t9, %call16(bvectcard)($gp)
/* 004683FC 24E4000C */  addiu $a0, $a3, 0xc
/* 00468400 0320F809 */  jalr  $t9
/* 00468404 00000000 */   nop   
/* 00468408 14400062 */  bnez  $v0, .L00468594
/* 0046840C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00468410 8F8F8ADC */  lw     $t7, %got(dowhyuncolor)($gp)
/* 00468414 91EF0000 */  lbu   $t7, ($t7)
/* 00468418 51E0000A */  beql  $t7, $zero, .L00468444
/* 0046841C 93A80087 */   lbu   $t0, 0x87($sp)
/* 00468420 8F828C20 */  lw     $v0, %got(numcalloverheadlr)($gp)
/* 00468424 8F838C04 */  lw     $v1, %got(contiglr)($gp)
/* 00468428 8C580000 */  lw    $t8, ($v0)
/* 0046842C 8C690000 */  lw    $t1, ($v1)
/* 00468430 270E0001 */  addiu $t6, $t8, 1
/* 00468434 25390001 */  addiu $t9, $t1, 1
/* 00468438 AC4E0000 */  sw    $t6, ($v0)
/* 0046843C AC790000 */  sw    $t9, ($v1)
.L00468440:
/* 00468440 93A80087 */  lbu   $t0, 0x87($sp)
.L00468444:
/* 00468444 55000007 */  bnezl $t0, .L00468464
/* 00468448 8E6C0000 */   lw    $t4, ($s3)
/* 0046844C 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 00468450 24040273 */  li    $a0, 627
/* 00468454 0320F809 */  jalr  $t9
/* 00468458 00000000 */   nop   
/* 0046845C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468460 8E6C0000 */  lw    $t4, ($s3)
.L00468464:
/* 00468464 240AFFFF */  li    $t2, -1
/* 00468468 240DFFFF */  li    $t5, -1
/* 0046846C A18A0020 */  sb    $t2, 0x20($t4)
/* 00468470 8E4B0000 */  lw    $t3, ($s2)
/* 00468474 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00468478 A16D0020 */  sb    $t5, 0x20($t3)
/* 0046847C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00468480 8E6F0000 */  lw    $t7, ($s3)
/* 00468484 0320F809 */  jalr  $t9
/* 00468488 8DE50004 */   lw    $a1, 4($t7)
/* 0046848C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468490 8E580000 */  lw    $t8, ($s2)
/* 00468494 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00468498 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 0046849C 8F050004 */  lw    $a1, 4($t8)
/* 004684A0 0320F809 */  jalr  $t9
/* 004684A4 00000000 */   nop   
/* 004684A8 8E4E0000 */  lw    $t6, ($s2)
/* 004684AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004684B0 2407000A */  li    $a3, 10
/* 004684B4 8DD00038 */  lw    $s0, 0x38($t6)
/* 004684B8 1200000A */  beqz  $s0, .L004684E4
/* 004684BC 00000000 */   nop   
/* 004684C0 8E060000 */  lw    $a2, ($s0)
.L004684C4:
/* 004684C4 50C00005 */  beql  $a2, $zero, .L004684DC
/* 004684C8 8E100004 */   lw    $s0, 4($s0)
/* 004684CC 8CC90024 */  lw    $t1, 0x24($a2)
/* 004684D0 2539FFFF */  addiu $t9, $t1, -1
/* 004684D4 ACD90024 */  sw    $t9, 0x24($a2)
/* 004684D8 8E100004 */  lw    $s0, 4($s0)
.L004684DC:
/* 004684DC 5600FFF9 */  bnezl $s0, .L004684C4
/* 004684E0 8E060000 */   lw    $a2, ($s0)
.L004684E4:
/* 004684E4 8F888A94 */  lw     $t0, %got(dbugno)($gp)
/* 004684E8 24010006 */  li    $at, 6
/* 004684EC 8D080000 */  lw    $t0, ($t0)
/* 004684F0 55010141 */  bnel  $t0, $at, .L004689F8
/* 004684F4 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004684F8 8E6A0000 */  lw    $t2, ($s3)
/* 004684FC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00468500 8F918CCC */  lw     $s1, %got(list)($gp)
/* 00468504 8D4C0000 */  lw    $t4, ($t2)
/* 00468508 24060004 */  li    $a2, 4
/* 0046850C 8E240000 */  lw    $a0, ($s1)
/* 00468510 0320F809 */  jalr  $t9
/* 00468514 95850002 */   lhu   $a1, 2($t4)
/* 00468518 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046851C 8E300000 */  lw    $s0, ($s1)
/* 00468520 2405003A */  li    $a1, 58
/* 00468524 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00468528 24060001 */  li    $a2, 1
/* 0046852C 2407000A */  li    $a3, 10
/* 00468530 0320F809 */  jalr  $t9
/* 00468534 02002025 */   move  $a0, $s0
/* 00468538 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046853C 8E6D0000 */  lw    $t5, ($s3)
/* 00468540 02002025 */  move  $a0, $s0
/* 00468544 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00468548 24060005 */  li    $a2, 5
/* 0046854C 2407000A */  li    $a3, 10
/* 00468550 0320F809 */  jalr  $t9
/* 00468554 8DA50004 */   lw    $a1, 4($t5)
/* 00468558 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046855C 8E240000 */  lw    $a0, ($s1)
/* 00468560 2406001C */  li    $a2, 28
/* 00468564 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00468568 8F858044 */  lw    $a1, %got(RO_1000D678)($gp)
/* 0046856C 2407001C */  li    $a3, 28
/* 00468570 0320F809 */  jalr  $t9
/* 00468574 24A5D678 */   addiu $a1, %lo(RO_1000D678) # addiu $a1, $a1, -0x2988
/* 00468578 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046857C 8E240000 */  lw    $a0, ($s1)
/* 00468580 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00468584 0320F809 */  jalr  $t9
/* 00468588 00000000 */   nop   
/* 0046858C 10000119 */  b     .L004689F4
/* 00468590 8FBC0028 */   lw    $gp, 0x28($sp)
.L00468594:
/* 00468594 8F8B8A94 */  lw     $t3, %got(dbugno)($gp)
/* 00468598 24010006 */  li    $at, 6
/* 0046859C 2406000A */  li    $a2, 10
/* 004685A0 8D6B0000 */  lw    $t3, ($t3)
/* 004685A4 55610038 */  bnel  $t3, $at, .L00468688
/* 004685A8 8E590000 */   lw    $t9, ($s2)
/* 004685AC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004685B0 8F918CCC */  lw     $s1, %got(list)($gp)
/* 004685B4 8F858044 */  lw    $a1, %got(RO_1000D66E)($gp)
/* 004685B8 2407000A */  li    $a3, 10
/* 004685BC 8E240000 */  lw    $a0, ($s1)
/* 004685C0 0320F809 */  jalr  $t9
/* 004685C4 24A5D66E */   addiu $a1, %lo(RO_1000D66E) # addiu $a1, $a1, -0x2992
/* 004685C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004685CC 8E6F0000 */  lw    $t7, ($s3)
/* 004685D0 8E240000 */  lw    $a0, ($s1)
/* 004685D4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 004685D8 8DF80000 */  lw    $t8, ($t7)
/* 004685DC 24060004 */  li    $a2, 4
/* 004685E0 2407000A */  li    $a3, 10
/* 004685E4 0320F809 */  jalr  $t9
/* 004685E8 97050002 */   lhu   $a1, 2($t8)
/* 004685EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004685F0 8E300000 */  lw    $s0, ($s1)
/* 004685F4 2405003A */  li    $a1, 58
/* 004685F8 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 004685FC 24060001 */  li    $a2, 1
/* 00468600 2407000A */  li    $a3, 10
/* 00468604 0320F809 */  jalr  $t9
/* 00468608 02002025 */   move  $a0, $s0
/* 0046860C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468610 8E6E0000 */  lw    $t6, ($s3)
/* 00468614 02002025 */  move  $a0, $s0
/* 00468618 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046861C 24060005 */  li    $a2, 5
/* 00468620 2407000A */  li    $a3, 10
/* 00468624 0320F809 */  jalr  $t9
/* 00468628 8DC50004 */   lw    $a1, 4($t6)
/* 0046862C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468630 8E240000 */  lw    $a0, ($s1)
/* 00468634 2406000A */  li    $a2, 10
/* 00468638 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046863C 8F858044 */  lw    $a1, %got(RO_1000D664)($gp)
/* 00468640 2407000A */  li    $a3, 10
/* 00468644 0320F809 */  jalr  $t9
/* 00468648 24A5D664 */   addiu $a1, %lo(RO_1000D664) # addiu $a1, $a1, -0x299c
/* 0046864C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468650 8E490000 */  lw    $t1, ($s2)
/* 00468654 8E240000 */  lw    $a0, ($s1)
/* 00468658 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046865C 24060005 */  li    $a2, 5
/* 00468660 2407000A */  li    $a3, 10
/* 00468664 0320F809 */  jalr  $t9
/* 00468668 8D250004 */   lw    $a1, 4($t1)
/* 0046866C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468670 8E240000 */  lw    $a0, ($s1)
/* 00468674 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00468678 0320F809 */  jalr  $t9
/* 0046867C 00000000 */   nop   
/* 00468680 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468684 8E590000 */  lw    $t9, ($s2)
.L00468688:
/* 00468688 8F300038 */  lw    $s0, 0x38($t9)
/* 0046868C 12000049 */  beqz  $s0, .L004687B4
/* 00468690 00000000 */   nop   
.L00468694:
/* 00468694 92080008 */  lbu   $t0, 8($s0)
/* 00468698 8E110004 */  lw    $s1, 4($s0)
/* 0046869C 51000036 */  beql  $t0, $zero, .L00468778
/* 004686A0 8E060000 */   lw    $a2, ($s0)
/* 004686A4 8F9984F8 */  lw    $t9, %call16(intfering)($gp)
/* 004686A8 A2000008 */  sb    $zero, 8($s0)
/* 004686AC 8E450000 */  lw    $a1, ($s2)
/* 004686B0 0320F809 */  jalr  $t9
/* 004686B4 8E040000 */   lw    $a0, ($s0)
/* 004686B8 10400013 */  beqz  $v0, .L00468708
/* 004686BC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004686C0 8F9984F4 */  lw    $t9, %call16(insintf)($gp)
/* 004686C4 8E640000 */  lw    $a0, ($s3)
/* 004686C8 8E050000 */  lw    $a1, ($s0)
/* 004686CC 0320F809 */  jalr  $t9
/* 004686D0 24840038 */   addiu $a0, $a0, 0x38
/* 004686D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004686D8 8E040000 */  lw    $a0, ($s0)
/* 004686DC 8E450000 */  lw    $a1, ($s2)
/* 004686E0 8F9984F4 */  lw    $t9, %call16(insintf)($gp)
/* 004686E4 24840038 */  addiu $a0, $a0, 0x38
/* 004686E8 0320F809 */  jalr  $t9
/* 004686EC 00000000 */   nop   
/* 004686F0 8E060000 */  lw    $a2, ($s0)
/* 004686F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004686F8 8CCA0024 */  lw    $t2, 0x24($a2)
/* 004686FC 254C0001 */  addiu $t4, $t2, 1
/* 00468700 1000002A */  b     .L004687AC
/* 00468704 ACCC0024 */   sw    $t4, 0x24($a2)
.L00468708:
/* 00468708 8E470000 */  lw    $a3, ($s2)
/* 0046870C 8CE40038 */  lw    $a0, 0x38($a3)
/* 00468710 56040005 */  bnel  $s0, $a0, .L00468728
/* 00468714 8C830004 */   lw    $v1, 4($a0)
/* 00468718 8E0D0004 */  lw    $t5, 4($s0)
/* 0046871C 1000000B */  b     .L0046874C
/* 00468720 ACED0038 */   sw    $t5, 0x38($a3)
/* 00468724 8C830004 */  lw    $v1, 4($a0)
.L00468728:
/* 00468728 00801025 */  move  $v0, $a0
/* 0046872C 52030006 */  beql  $s0, $v1, .L00468748
/* 00468730 8E0B0004 */   lw    $t3, 4($s0)
/* 00468734 00601025 */  move  $v0, $v1
.L00468738:
/* 00468738 8C630004 */  lw    $v1, 4($v1)
/* 0046873C 5603FFFE */  bnel  $s0, $v1, .L00468738
/* 00468740 00601025 */   move  $v0, $v1
/* 00468744 8E0B0004 */  lw    $t3, 4($s0)
.L00468748:
/* 00468748 AC4B0004 */  sw    $t3, 4($v0)
.L0046874C:
/* 0046874C 8E470000 */  lw    $a3, ($s2)
/* 00468750 8CEF0024 */  lw    $t7, 0x24($a3)
/* 00468754 25F8FFFF */  addiu $t8, $t7, -1
/* 00468758 ACF80024 */  sw    $t8, 0x24($a3)
/* 0046875C 8E6E0000 */  lw    $t6, ($s3)
/* 00468760 8DC90038 */  lw    $t1, 0x38($t6)
/* 00468764 AE090004 */  sw    $t1, 4($s0)
/* 00468768 8E790000 */  lw    $t9, ($s3)
/* 0046876C 1000000F */  b     .L004687AC
/* 00468770 AF300038 */   sw    $s0, 0x38($t9)
/* 00468774 8E060000 */  lw    $a2, ($s0)
.L00468778:
/* 00468778 10C0000C */  beqz  $a2, .L004687AC
/* 0046877C 00000000 */   nop   
/* 00468780 8CC20038 */  lw    $v0, 0x38($a2)
/* 00468784 8E630000 */  lw    $v1, ($s3)
/* 00468788 8E470000 */  lw    $a3, ($s2)
/* 0046878C 8C480000 */  lw    $t0, ($v0)
/* 00468790 50680006 */  beql  $v1, $t0, .L004687AC
/* 00468794 AC470000 */   sw    $a3, ($v0)
/* 00468798 8C420004 */  lw    $v0, 4($v0)
.L0046879C:
/* 0046879C 8C4A0000 */  lw    $t2, ($v0)
/* 004687A0 546AFFFE */  bnel  $v1, $t2, .L0046879C
/* 004687A4 8C420004 */   lw    $v0, 4($v0)
/* 004687A8 AC470000 */  sw    $a3, ($v0)
.L004687AC:
/* 004687AC 1620FFB9 */  bnez  $s1, .L00468694
/* 004687B0 02208025 */   move  $s0, $s1
.L004687B4:
/* 004687B4 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 004687B8 918C0000 */  lbu   $t4, ($t4)
/* 004687BC 5580008E */  bnezl $t4, .L004689F8
/* 004687C0 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004687C4 8F99852C */  lw    $t9, %call16(isconstrained)($gp)
/* 004687C8 8E640000 */  lw    $a0, ($s3)
/* 004687CC 0320F809 */  jalr  $t9
/* 004687D0 00000000 */   nop   
/* 004687D4 1440000E */  bnez  $v0, .L00468810
/* 004687D8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004687DC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004687E0 8E6D0000 */  lw    $t5, ($s3)
/* 004687E4 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 004687E8 0320F809 */  jalr  $t9
/* 004687EC 8DA50004 */   lw    $a1, 4($t5)
/* 004687F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004687F4 8E6B0000 */  lw    $t3, ($s3)
/* 004687F8 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004687FC 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00468800 8D650004 */  lw    $a1, 4($t3)
/* 00468804 0320F809 */  jalr  $t9
/* 00468808 00000000 */   nop   
/* 0046880C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00468810:
/* 00468810 8F998528 */  lw    $t9, %call16(updatelivran)($gp)
/* 00468814 8E640000 */  lw    $a0, ($s3)
/* 00468818 0320F809 */  jalr  $t9
/* 0046881C 00000000 */   nop   
/* 00468820 8E4F0000 */  lw    $t7, ($s2)
/* 00468824 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468828 ADE0002C */  sw    $zero, 0x2c($t7)
/* 0046882C ADE00028 */  sw    $zero, 0x28($t7)
/* 00468830 8E470000 */  lw    $a3, ($s2)
/* 00468834 8CF00008 */  lw    $s0, 8($a3)
/* 00468838 1200000C */  beqz  $s0, .L0046886C
/* 0046883C 00000000 */   nop   
.L00468840:
/* 00468840 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 00468844 8E040000 */  lw    $a0, ($s0)
/* 00468848 92050013 */  lbu   $a1, 0x13($s0)
/* 0046884C 8E460000 */  lw    $a2, ($s2)
/* 00468850 0320F809 */  jalr  $t9
/* 00468854 02803825 */   move  $a3, $s4
/* 00468858 8E100004 */  lw    $s0, 4($s0)
/* 0046885C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468860 1600FFF7 */  bnez  $s0, .L00468840
/* 00468864 00000000 */   nop   
/* 00468868 8E470000 */  lw    $a3, ($s2)
.L0046886C:
/* 0046886C 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00468870 24E4000C */  addiu $a0, $a3, 0xc
/* 00468874 0320F809 */  jalr  $t9
/* 00468878 00000000 */   nop   
/* 0046887C 1440001C */  bnez  $v0, .L004688F0
/* 00468880 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00468884 8F8289B8 */  lw     $v0, %got(curstaticno)($gp)
/* 00468888 00008025 */  move  $s0, $zero
/* 0046888C 8F918C68 */  lw     $s1, %got(bbtab)($gp)
/* 00468890 8C420000 */  lw    $v0, ($v0)
/* 00468894 24420000 */  addiu $v0, $v0, 0
/* 00468898 AFA20040 */  sw    $v0, 0x40($sp)
.L0046889C:
/* 0046889C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004688A0 8E450000 */  lw    $a1, ($s2)
/* 004688A4 02002025 */  move  $a0, $s0
/* 004688A8 0320F809 */  jalr  $t9
/* 004688AC 24A5000C */   addiu $a1, $a1, 0xc
/* 004688B0 1040000B */  beqz  $v0, .L004688E0
/* 004688B4 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004688B8 8E380000 */  lw    $t8, ($s1)
/* 004688BC 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 004688C0 00107080 */  sll   $t6, $s0, 2
/* 004688C4 030E4821 */  addu  $t1, $t8, $t6
/* 004688C8 8D240000 */  lw    $a0, ($t1)
/* 004688CC 00002825 */  move  $a1, $zero
/* 004688D0 8E460000 */  lw    $a2, ($s2)
/* 004688D4 0320F809 */  jalr  $t9
/* 004688D8 02803825 */   move  $a3, $s4
/* 004688DC 8FBC0028 */  lw    $gp, 0x28($sp)
.L004688E0:
/* 004688E0 8FB90040 */  lw    $t9, 0x40($sp)
/* 004688E4 26100001 */  addiu $s0, $s0, 1
/* 004688E8 1619FFEC */  bne   $s0, $t9, .L0046889C
/* 004688EC 00000000 */   nop   
.L004688F0:
/* 004688F0 8F998504 */  lw    $t9, %call16(updatecolorsleft)($gp)
/* 004688F4 8E440000 */  lw    $a0, ($s2)
/* 004688F8 02802825 */  move  $a1, $s4
/* 004688FC 0320F809 */  jalr  $t9
/* 00468900 00000000 */   nop   
/* 00468904 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468908 8E440000 */  lw    $a0, ($s2)
/* 0046890C 8F99852C */  lw    $t9, %call16(isconstrained)($gp)
/* 00468910 0320F809 */  jalr  $t9
/* 00468914 00000000 */   nop   
/* 00468918 14400008 */  bnez  $v0, .L0046893C
/* 0046891C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00468920 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00468924 8E480000 */  lw    $t0, ($s2)
/* 00468928 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 0046892C 0320F809 */  jalr  $t9
/* 00468930 8D050004 */   lw    $a1, 4($t0)
/* 00468934 10000007 */  b     .L00468954
/* 00468938 8FBC0028 */   lw    $gp, 0x28($sp)
.L0046893C:
/* 0046893C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00468940 8E4A0000 */  lw    $t2, ($s2)
/* 00468944 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00468948 0320F809 */  jalr  $t9
/* 0046894C 8D450004 */   lw    $a1, 4($t2)
/* 00468950 8FBC0028 */  lw    $gp, 0x28($sp)
.L00468954:
/* 00468954 8E6C0000 */  lw    $t4, ($s3)
/* 00468958 8D900038 */  lw    $s0, 0x38($t4)
/* 0046895C 12000021 */  beqz  $s0, .L004689E4
/* 00468960 00000000 */   nop   
/* 00468964 8E060000 */  lw    $a2, ($s0)
.L00468968:
/* 00468968 50C0001C */  beql  $a2, $zero, .L004689DC
/* 0046896C 8E100004 */   lw    $s0, 4($s0)
/* 00468970 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00468974 8CC40004 */  lw    $a0, 4($a2)
/* 00468978 8F858D60 */  lw     $a1, %got(unconstrain)($gp)
/* 0046897C 0320F809 */  jalr  $t9
/* 00468980 00000000 */   nop   
/* 00468984 10400014 */  beqz  $v0, .L004689D8
/* 00468988 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0046898C 8F99852C */  lw    $t9, %call16(isconstrained)($gp)
/* 00468990 8E040000 */  lw    $a0, ($s0)
/* 00468994 0320F809 */  jalr  $t9
/* 00468998 00000000 */   nop   
/* 0046899C 1040000E */  beqz  $v0, .L004689D8
/* 004689A0 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004689A4 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004689A8 8E0D0000 */  lw    $t5, ($s0)
/* 004689AC 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 004689B0 0320F809 */  jalr  $t9
/* 004689B4 8DA50004 */   lw    $a1, 4($t5)
/* 004689B8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004689BC 8E0B0000 */  lw    $t3, ($s0)
/* 004689C0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004689C4 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 004689C8 8D650004 */  lw    $a1, 4($t3)
/* 004689CC 0320F809 */  jalr  $t9
/* 004689D0 00000000 */   nop   
/* 004689D4 8FBC0028 */  lw    $gp, 0x28($sp)
.L004689D8:
/* 004689D8 8E100004 */  lw    $s0, 4($s0)
.L004689DC:
/* 004689DC 5600FFE2 */  bnezl $s0, .L00468968
/* 004689E0 8E060000 */   lw    $a2, ($s0)
.L004689E4:
/* 004689E4 8F828BF0 */  lw     $v0, %got(finalnumlr)($gp)
/* 004689E8 8C4F0000 */  lw    $t7, ($v0)
/* 004689EC 25F80001 */  addiu $t8, $t7, 1
/* 004689F0 AC580000 */  sw    $t8, ($v0)
.L004689F4:
/* 004689F4 8FBF002C */  lw    $ra, 0x2c($sp)
.L004689F8:
/* 004689F8 8FB00014 */  lw    $s0, 0x14($sp)
/* 004689FC 8FB10018 */  lw    $s1, 0x18($sp)
/* 00468A00 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00468A04 8FB30020 */  lw    $s3, 0x20($sp)
/* 00468A08 8FB40024 */  lw    $s4, 0x24($sp)
/* 00468A0C 03E00008 */  jr    $ra
/* 00468A10 27BD0078 */   addiu $sp, $sp, 0x78
    .type split, @function
    .size split, .-split
    .end split
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel cupcosts
    .ent cupcosts
    # 00469280 globalcolor
/* 00468A14 3C1C0FBB */  .cpload $t9
/* 00468A18 279C187C */  
/* 00468A1C 0399E021 */  
/* 00468A20 27BDFF90 */  addiu $sp, $sp, -0x70
/* 00468A24 AFBF0044 */  sw    $ra, 0x44($sp)
/* 00468A28 AFBE0040 */  sw    $fp, 0x40($sp)
/* 00468A2C AFBC003C */  sw    $gp, 0x3c($sp)
/* 00468A30 AFB70038 */  sw    $s7, 0x38($sp)
/* 00468A34 AFB60034 */  sw    $s6, 0x34($sp)
/* 00468A38 AFB50030 */  sw    $s5, 0x30($sp)
/* 00468A3C AFB4002C */  sw    $s4, 0x2c($sp)
/* 00468A40 AFB30028 */  sw    $s3, 0x28($sp)
/* 00468A44 AFB20024 */  sw    $s2, 0x24($sp)
/* 00468A48 AFB10020 */  sw    $s1, 0x20($sp)
/* 00468A4C AFB0001C */  sw    $s0, 0x1c($sp)
/* 00468A50 F7B40010 */  sdc1  $f20, 0x10($sp)
/* 00468A54 AFA60078 */  sw    $a2, 0x78($sp)
/* 00468A58 8C910008 */  lw    $s1, 8($a0)
/* 00468A5C 4480A000 */  mtc1  $zero, $f20
/* 00468A60 00A09025 */  move  $s2, $a1
/* 00468A64 00809825 */  move  $s3, $a0
/* 00468A68 12200125 */  beqz  $s1, .L00468F00
/* 00468A6C 30D500FF */   andi  $s5, $a2, 0xff
/* 00468A70 241E0010 */  li    $fp, 16
/* 00468A74 24170003 */  li    $s7, 3
/* 00468A78 8F968D5C */  lw     $s6, %got(regscantpass)($gp)
/* 00468A7C 8F948A20 */  lw     $s4, %got(movcostused)($gp)
/* 00468A80 922E0015 */  lbu   $t6, 0x15($s1)
.L00468A84:
/* 00468A84 55C00052 */  bnezl $t6, .L00468BD0
/* 00468A88 92690022 */   lbu   $t1, 0x22($s3)
/* 00468A8C 8E300000 */  lw    $s0, ($s1)
/* 00468A90 8E020014 */  lw    $v0, 0x14($s0)
/* 00468A94 5040004E */  beql  $v0, $zero, .L00468BD0
/* 00468A98 92690022 */   lbu   $t1, 0x22($s3)
/* 00468A9C 8F998544 */  lw    $t9, %call16(is_cup_affecting_regs)($gp)
/* 00468AA0 8C440000 */  lw    $a0, ($v0)
/* 00468AA4 0320F809 */  jalr  $t9
/* 00468AA8 00000000 */   nop   
/* 00468AAC 10400047 */  beqz  $v0, .L00468BCC
/* 00468AB0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468AB4 8E0F0014 */  lw    $t7, 0x14($s0)
/* 00468AB8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00468ABC 26650014 */  addiu $a1, $s3, 0x14
/* 00468AC0 8DF80000 */  lw    $t8, ($t7)
/* 00468AC4 0320F809 */  jalr  $t9
/* 00468AC8 97040008 */   lhu   $a0, 8($t8)
/* 00468ACC 1040003F */  beqz  $v0, .L00468BCC
/* 00468AD0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468AD4 8E190014 */  lw    $t9, 0x14($s0)
/* 00468AD8 8F280000 */  lw    $t0, ($t9)
/* 00468ADC 8D030020 */  lw    $v1, 0x20($t0)
/* 00468AE0 90620000 */  lbu   $v0, ($v1)
/* 00468AE4 17C20016 */  bne   $fp, $v0, .L00468B40
/* 00468AE8 00000000 */   nop   
/* 00468AEC 52A00038 */  beql  $s5, $zero, .L00468BD0
/* 00468AF0 92690022 */   lbu   $t1, 0x22($s3)
/* 00468AF4 8F99870C */  lw    $t9, %call16(in_reg_masks)($gp)
/* 00468AF8 02402025 */  move  $a0, $s2
/* 00468AFC 8C650020 */  lw    $a1, 0x20($v1)
/* 00468B00 0320F809 */  jalr  $t9
/* 00468B04 8C660024 */   lw    $a2, 0x24($v1)
/* 00468B08 10400030 */  beqz  $v0, .L00468BCC
/* 00468B0C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468B10 8E09002C */  lw    $t1, 0x2c($s0)
/* 00468B14 C6840000 */  lwc1  $f4, ($s4)
/* 00468B18 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468B1C 44893000 */  mtc1  $t1, $f6
/* 00468B20 05210004 */  bgez  $t1, .L00468B34
/* 00468B24 46803220 */   cvt.s.w $f8, $f6
/* 00468B28 44815000 */  mtc1  $at, $f10
/* 00468B2C 00000000 */  nop   
/* 00468B30 460A4200 */  add.s $f8, $f8, $f10
.L00468B34:
/* 00468B34 46082402 */  mul.s $f16, $f4, $f8
/* 00468B38 10000024 */  b     .L00468BCC
/* 00468B3C 4610A500 */   add.s $f20, $f20, $f16
.L00468B40:
/* 00468B40 56A00006 */  bnezl $s5, .L00468B5C
/* 00468B44 946C001A */   lhu   $t4, 0x1a($v1)
/* 00468B48 8C6A0014 */  lw    $t2, 0x14($v1)
/* 00468B4C 914B000C */  lbu   $t3, 0xc($t2)
/* 00468B50 5160001F */  beql  $t3, $zero, .L00468BD0
/* 00468B54 92690022 */   lbu   $t1, 0x22($s3)
/* 00468B58 946C001A */  lhu   $t4, 0x1a($v1)
.L00468B5C:
/* 00468B5C 24010017 */  li    $at, 23
/* 00468B60 318D0100 */  andi  $t5, $t4, 0x100
/* 00468B64 51A00006 */  beql  $t5, $zero, .L00468B80
/* 00468B68 8C620014 */   lw    $v0, 0x14($v1)
/* 00468B6C 14410003 */  bne   $v0, $at, .L00468B7C
/* 00468B70 2401000D */   li    $at, 13
/* 00468B74 56410016 */  bnel  $s2, $at, .L00468BD0
/* 00468B78 92690022 */   lbu   $t1, 0x22($s3)
.L00468B7C:
/* 00468B7C 8C620014 */  lw    $v0, 0x14($v1)
.L00468B80:
/* 00468B80 904E000C */  lbu   $t6, 0xc($v0)
/* 00468B84 51C00007 */  beql  $t6, $zero, .L00468BA4
/* 00468B88 8E08002C */   lw    $t0, 0x2c($s0)
/* 00468B8C 8C4F0024 */  lw    $t7, 0x24($v0)
/* 00468B90 01F2C021 */  addu  $t8, $t7, $s2
/* 00468B94 9319FFFF */  lbu   $t9, -1($t8)
/* 00468B98 5320000D */  beql  $t9, $zero, .L00468BD0
/* 00468B9C 92690022 */   lbu   $t1, 0x22($s3)
/* 00468BA0 8E08002C */  lw    $t0, 0x2c($s0)
.L00468BA4:
/* 00468BA4 C6920000 */  lwc1  $f18, ($s4)
/* 00468BA8 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468BAC 44883000 */  mtc1  $t0, $f6
/* 00468BB0 05010004 */  bgez  $t0, .L00468BC4
/* 00468BB4 468032A0 */   cvt.s.w $f10, $f6
/* 00468BB8 44812000 */  mtc1  $at, $f4
/* 00468BBC 00000000 */  nop   
/* 00468BC0 46045280 */  add.s $f10, $f10, $f4
.L00468BC4:
/* 00468BC4 460A9202 */  mul.s $f8, $f18, $f10
/* 00468BC8 4608A500 */  add.s $f20, $f20, $f8
.L00468BCC:
/* 00468BCC 92690022 */  lbu   $t1, 0x22($s3)
.L00468BD0:
/* 00468BD0 1120000D */  beqz  $t1, .L00468C08
/* 00468BD4 00000000 */   nop   
/* 00468BD8 922A0017 */  lbu   $t2, 0x17($s1)
/* 00468BDC 1540000A */  bnez  $t2, .L00468C08
/* 00468BE0 00000000 */   nop   
/* 00468BE4 922B0016 */  lbu   $t3, 0x16($s1)
/* 00468BE8 11600007 */  beqz  $t3, .L00468C08
/* 00468BEC 00000000 */   nop   
/* 00468BF0 922C0012 */  lbu   $t4, 0x12($s1)
/* 00468BF4 55800054 */  bnezl $t4, .L00468D48
/* 00468BF8 92230013 */   lbu   $v1, 0x13($s1)
/* 00468BFC 922D0015 */  lbu   $t5, 0x15($s1)
/* 00468C00 51A00051 */  beql  $t5, $zero, .L00468D48
/* 00468C04 92230013 */   lbu   $v1, 0x13($s1)
.L00468C08:
/* 00468C08 8F998544 */  lw    $t9, %call16(is_cup_affecting_regs)($gp)
/* 00468C0C 8E240000 */  lw    $a0, ($s1)
/* 00468C10 0320F809 */  jalr  $t9
/* 00468C14 00000000 */   nop   
/* 00468C18 1040004A */  beqz  $v0, .L00468D44
/* 00468C1C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468C20 8E2E0000 */  lw    $t6, ($s1)
/* 00468C24 8DC20018 */  lw    $v0, 0x18($t6)
/* 00468C28 50400047 */  beql  $v0, $zero, .L00468D48
/* 00468C2C 92230013 */   lbu   $v1, 0x13($s1)
/* 00468C30 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00468C34 8C4F0000 */  lw    $t7, ($v0)
/* 00468C38 26650014 */  addiu $a1, $s3, 0x14
/* 00468C3C 0320F809 */  jalr  $t9
/* 00468C40 95E40008 */   lhu   $a0, 8($t7)
/* 00468C44 1040003F */  beqz  $v0, .L00468D44
/* 00468C48 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468C4C 8E240000 */  lw    $a0, ($s1)
/* 00468C50 8C820020 */  lw    $v0, 0x20($a0)
/* 00468C54 90430000 */  lbu   $v1, ($v0)
/* 00468C58 17C30017 */  bne   $fp, $v1, .L00468CB8
/* 00468C5C 00000000 */   nop   
/* 00468C60 52A00039 */  beql  $s5, $zero, .L00468D48
/* 00468C64 92230013 */   lbu   $v1, 0x13($s1)
/* 00468C68 8F99870C */  lw    $t9, %call16(in_reg_masks)($gp)
/* 00468C6C 02402025 */  move  $a0, $s2
/* 00468C70 8C450020 */  lw    $a1, 0x20($v0)
/* 00468C74 0320F809 */  jalr  $t9
/* 00468C78 8C460024 */   lw    $a2, 0x24($v0)
/* 00468C7C 10400031 */  beqz  $v0, .L00468D44
/* 00468C80 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468C84 8E380000 */  lw    $t8, ($s1)
/* 00468C88 C6900000 */  lwc1  $f16, ($s4)
/* 00468C8C 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468C90 8F19002C */  lw    $t9, 0x2c($t8)
/* 00468C94 44993000 */  mtc1  $t9, $f6
/* 00468C98 07210004 */  bgez  $t9, .L00468CAC
/* 00468C9C 46803120 */   cvt.s.w $f4, $f6
/* 00468CA0 44819000 */  mtc1  $at, $f18
/* 00468CA4 00000000 */  nop   
/* 00468CA8 46122100 */  add.s $f4, $f4, $f18
.L00468CAC:
/* 00468CAC 46048282 */  mul.s $f10, $f16, $f4
/* 00468CB0 10000024 */  b     .L00468D44
/* 00468CB4 460AA500 */   add.s $f20, $f20, $f10
.L00468CB8:
/* 00468CB8 56A00006 */  bnezl $s5, .L00468CD4
/* 00468CBC 944A001A */   lhu   $t2, 0x1a($v0)
/* 00468CC0 8C480014 */  lw    $t0, 0x14($v0)
/* 00468CC4 9109000C */  lbu   $t1, 0xc($t0)
/* 00468CC8 5120001F */  beql  $t1, $zero, .L00468D48
/* 00468CCC 92230013 */   lbu   $v1, 0x13($s1)
/* 00468CD0 944A001A */  lhu   $t2, 0x1a($v0)
.L00468CD4:
/* 00468CD4 24010017 */  li    $at, 23
/* 00468CD8 314B0100 */  andi  $t3, $t2, 0x100
/* 00468CDC 51600006 */  beql  $t3, $zero, .L00468CF8
/* 00468CE0 8C430014 */   lw    $v1, 0x14($v0)
/* 00468CE4 14610003 */  bne   $v1, $at, .L00468CF4
/* 00468CE8 2401000D */   li    $at, 13
/* 00468CEC 56410016 */  bnel  $s2, $at, .L00468D48
/* 00468CF0 92230013 */   lbu   $v1, 0x13($s1)
.L00468CF4:
/* 00468CF4 8C430014 */  lw    $v1, 0x14($v0)
.L00468CF8:
/* 00468CF8 906C000C */  lbu   $t4, 0xc($v1)
/* 00468CFC 51800007 */  beql  $t4, $zero, .L00468D1C
/* 00468D00 8C98002C */   lw    $t8, 0x2c($a0)
/* 00468D04 8C6D0024 */  lw    $t5, 0x24($v1)
/* 00468D08 01B27021 */  addu  $t6, $t5, $s2
/* 00468D0C 91CFFFFF */  lbu   $t7, -1($t6)
/* 00468D10 51E0000D */  beql  $t7, $zero, .L00468D48
/* 00468D14 92230013 */   lbu   $v1, 0x13($s1)
/* 00468D18 8C98002C */  lw    $t8, 0x2c($a0)
.L00468D1C:
/* 00468D1C C6880000 */  lwc1  $f8, ($s4)
/* 00468D20 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468D24 44983000 */  mtc1  $t8, $f6
/* 00468D28 07010004 */  bgez  $t8, .L00468D3C
/* 00468D2C 468034A0 */   cvt.s.w $f18, $f6
/* 00468D30 44818000 */  mtc1  $at, $f16
/* 00468D34 00000000 */  nop   
/* 00468D38 46109480 */  add.s $f18, $f18, $f16
.L00468D3C:
/* 00468D3C 46124102 */  mul.s $f4, $f8, $f18
/* 00468D40 4604A500 */  add.s $f20, $f20, $f4
.L00468D44:
/* 00468D44 92230013 */  lbu   $v1, 0x13($s1)
.L00468D48:
/* 00468D48 24010001 */  li    $at, 1
/* 00468D4C 1060000F */  beqz  $v1, .L00468D8C
/* 00468D50 00000000 */   nop   
/* 00468D54 1061000D */  beq   $v1, $at, .L00468D8C
/* 00468D58 2E590040 */   sltiu $t9, $s2, 0x40
/* 00468D5C 13200006 */  beqz  $t9, .L00468D78
/* 00468D60 00124143 */   sra   $t0, $s2, 5
/* 00468D64 00084880 */  sll   $t1, $t0, 2
/* 00468D68 02C95021 */  addu  $t2, $s6, $t1
/* 00468D6C 8D4B0000 */  lw    $t3, ($t2)
/* 00468D70 024B6004 */  sllv  $t4, $t3, $s2
/* 00468D74 29990000 */  slti  $t9, $t4, 0
.L00468D78:
/* 00468D78 13200004 */  beqz  $t9, .L00468D8C
/* 00468D7C 00000000 */   nop   
/* 00468D80 8F818044 */  lw    $at, %got(RO_1000D694)($gp)
/* 00468D84 100000F7 */  b     .L00469164
/* 00468D88 C420D694 */   lwc1  $f0, %lo(RO_1000D694)($at)
.L00468D8C:
/* 00468D8C 8F8E89AC */  lw     $t6, %got(graphhead)($gp)
/* 00468D90 8E240000 */  lw    $a0, ($s1)
/* 00468D94 2E4F0040 */  sltiu $t7, $s2, 0x40
/* 00468D98 8DCE0000 */  lw    $t6, ($t6)
/* 00468D9C 15C4001C */  bne   $t6, $a0, .L00468E10
/* 00468DA0 00000000 */   nop   
/* 00468DA4 11E00006 */  beqz  $t7, .L00468DC0
/* 00468DA8 0012C143 */   sra   $t8, $s2, 5
/* 00468DAC 00184080 */  sll   $t0, $t8, 2
/* 00468DB0 02C84821 */  addu  $t1, $s6, $t0
/* 00468DB4 8D2A0000 */  lw    $t2, ($t1)
/* 00468DB8 024A5804 */  sllv  $t3, $t2, $s2
/* 00468DBC 296F0000 */  slti  $t7, $t3, 0
.L00468DC0:
/* 00468DC0 11E00013 */  beqz  $t7, .L00468E10
/* 00468DC4 00000000 */   nop   
/* 00468DC8 8E620000 */  lw    $v0, ($s3)
/* 00468DCC 904D0000 */  lbu   $t5, ($v0)
/* 00468DD0 16ED000F */  bne   $s7, $t5, .L00468E10
/* 00468DD4 00000000 */   nop   
/* 00468DD8 90590016 */  lbu   $t9, 0x16($v0)
/* 00468DDC 24010002 */  li    $at, 2
/* 00468DE0 332E0007 */  andi  $t6, $t9, 7
/* 00468DE4 15C1000A */  bne   $t6, $at, .L00468E10
/* 00468DE8 00000000 */   nop   
/* 00468DEC 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 00468DF0 8C480014 */  lw    $t0, 0x14($v0)
/* 00468DF4 8F180000 */  lw    $t8, ($t8)
/* 00468DF8 00084AC2 */  srl   $t1, $t0, 0xb
/* 00468DFC 17090004 */  bne   $t8, $t1, .L00468E10
/* 00468E00 00000000 */   nop   
/* 00468E04 8F818044 */  lw    $at, %got(RO_1000D698)($gp)
/* 00468E08 100000D6 */  b     .L00469164
/* 00468E0C C420D698 */   lwc1  $f0, %lo(RO_1000D698)($at)
.L00468E10:
/* 00468E10 8F8A8A5C */  lw     $t2, %got(lang)($gp)
/* 00468E14 914A0000 */  lbu   $t2, ($t2)
/* 00468E18 16EA0023 */  bne   $s7, $t2, .L00468EA8
/* 00468E1C 00000000 */   nop   
/* 00468E20 8C8B0018 */  lw    $t3, 0x18($a0)
/* 00468E24 2E4C0040 */  sltiu $t4, $s2, 0x40
/* 00468E28 1560001F */  bnez  $t3, .L00468EA8
/* 00468E2C 00000000 */   nop   
/* 00468E30 11800006 */  beqz  $t4, .L00468E4C
/* 00468E34 00127943 */   sra   $t7, $s2, 5
/* 00468E38 000F6880 */  sll   $t5, $t7, 2
/* 00468E3C 02CDC821 */  addu  $t9, $s6, $t5
/* 00468E40 8F2E0000 */  lw    $t6, ($t9)
/* 00468E44 024E4004 */  sllv  $t0, $t6, $s2
/* 00468E48 290C0000 */  slti  $t4, $t0, 0
.L00468E4C:
/* 00468E4C 11800016 */  beqz  $t4, .L00468EA8
/* 00468E50 00000000 */   nop   
/* 00468E54 8E620000 */  lw    $v0, ($s3)
/* 00468E58 90490000 */  lbu   $t1, ($v0)
/* 00468E5C 16E90012 */  bne   $s7, $t1, .L00468EA8
/* 00468E60 00000000 */   nop   
/* 00468E64 904A0016 */  lbu   $t2, 0x16($v0)
/* 00468E68 24010002 */  li    $at, 2
/* 00468E6C 314B0007 */  andi  $t3, $t2, 7
/* 00468E70 1561000D */  bne   $t3, $at, .L00468EA8
/* 00468E74 00000000 */   nop   
/* 00468E78 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 00468E7C 8C4D0014 */  lw    $t5, 0x14($v0)
/* 00468E80 8DEF0000 */  lw    $t7, ($t7)
/* 00468E84 000DCAC2 */  srl   $t9, $t5, 0xb
/* 00468E88 15F90007 */  bne   $t7, $t9, .L00468EA8
/* 00468E8C 00000000 */   nop   
/* 00468E90 922E0016 */  lbu   $t6, 0x16($s1)
/* 00468E94 11C00004 */  beqz  $t6, .L00468EA8
/* 00468E98 00000000 */   nop   
/* 00468E9C 8F818044 */  lw    $at, %got(RO_1000D69C)($gp)
/* 00468EA0 100000B0 */  b     .L00469164
/* 00468EA4 C420D69C */   lwc1  $f0, %lo(RO_1000D69C)($at)
.L00468EA8:
/* 00468EA8 50600013 */  beql  $v1, $zero, .L00468EF8
/* 00468EAC 8E310004 */   lw    $s1, 4($s1)
/* 00468EB0 52430011 */  beql  $s2, $v1, .L00468EF8
/* 00468EB4 8E310004 */   lw    $s1, 4($s1)
/* 00468EB8 8C88002C */  lw    $t0, 0x2c($a0)
/* 00468EBC C68A0000 */  lwc1  $f10, ($s4)
/* 00468EC0 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468EC4 44883000 */  mtc1  $t0, $f6
/* 00468EC8 05010004 */  bgez  $t0, .L00468EDC
/* 00468ECC 46803420 */   cvt.s.w $f16, $f6
/* 00468ED0 44814000 */  mtc1  $at, $f8
/* 00468ED4 00000000 */  nop   
/* 00468ED8 46088400 */  add.s $f16, $f16, $f8
.L00468EDC:
/* 00468EDC 46105482 */  mul.s $f18, $f10, $f16
/* 00468EE0 3C014120 */  li    $at, 0x41200000 # 10.000000
/* 00468EE4 44812000 */  mtc1  $at, $f4
/* 00468EE8 00000000 */  nop   
/* 00468EEC 46049183 */  div.s $f6, $f18, $f4
/* 00468EF0 4606A500 */  add.s $f20, $f20, $f6
/* 00468EF4 8E310004 */  lw    $s1, 4($s1)
.L00468EF8:
/* 00468EF8 5620FEE2 */  bnezl $s1, .L00468A84
/* 00468EFC 922E0015 */   lbu   $t6, 0x15($s1)
.L00468F00:
/* 00468F00 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00468F04 2664000C */  addiu $a0, $s3, 0xc
/* 00468F08 8F948A20 */  lw     $s4, %got(movcostused)($gp)
/* 00468F0C 8F968D5C */  lw     $s6, %got(regscantpass)($gp)
/* 00468F10 24170003 */  li    $s7, 3
/* 00468F14 241E0010 */  li    $fp, 16
/* 00468F18 0320F809 */  jalr  $t9
/* 00468F1C AFA40048 */   sw    $a0, 0x48($sp)
/* 00468F20 1440008F */  bnez  $v0, .L00469160
/* 00468F24 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468F28 8F8289B8 */  lw     $v0, %got(curstaticno)($gp)
/* 00468F2C 00008825 */  move  $s1, $zero
/* 00468F30 8C420000 */  lw    $v0, ($v0)
/* 00468F34 24420000 */  addiu $v0, $v0, 0
/* 00468F38 AFA20058 */  sw    $v0, 0x58($sp)
.L00468F3C:
/* 00468F3C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00468F40 02202025 */  move  $a0, $s1
/* 00468F44 8FA50048 */  lw    $a1, 0x48($sp)
/* 00468F48 0320F809 */  jalr  $t9
/* 00468F4C 00000000 */   nop   
/* 00468F50 1040007F */  beqz  $v0, .L00469150
/* 00468F54 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468F58 8F988C68 */  lw     $t8, %got(bbtab)($gp)
/* 00468F5C 00116080 */  sll   $t4, $s1, 2
/* 00468F60 8F180000 */  lw    $t8, ($t8)
/* 00468F64 030C4821 */  addu  $t1, $t8, $t4
/* 00468F68 8D300000 */  lw    $s0, ($t1)
/* 00468F6C 8E020014 */  lw    $v0, 0x14($s0)
/* 00468F70 10400056 */  beqz  $v0, .L004690CC
/* 00468F74 00000000 */   nop   
/* 00468F78 8C430000 */  lw    $v1, ($v0)
/* 00468F7C 8C6A0020 */  lw    $t2, 0x20($v1)
/* 00468F80 914B0000 */  lbu   $t3, ($t2)
/* 00468F84 2D6D0040 */  sltiu $t5, $t3, 0x40
/* 00468F88 11A00009 */  beqz  $t5, .L00468FB0
/* 00468F8C 00000000 */   nop   
/* 00468F90 8F8E8044 */  lw    $t6, %got(D_10010F80)($gp)
/* 00468F94 000B7943 */  sra   $t7, $t3, 5
/* 00468F98 000FC880 */  sll   $t9, $t7, 2
/* 00468F9C 25CE0F80 */  addiu $t6, %lo(D_10010F80) # addiu $t6, $t6, 0xf80
/* 00468FA0 01D94021 */  addu  $t0, $t6, $t9
/* 00468FA4 8D180000 */  lw    $t8, ($t0)
/* 00468FA8 01786004 */  sllv  $t4, $t8, $t3
/* 00468FAC 298D0000 */  slti  $t5, $t4, 0
.L00468FB0:
/* 00468FB0 11A00046 */  beqz  $t5, .L004690CC
/* 00468FB4 00000000 */   nop   
/* 00468FB8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00468FBC 94640008 */  lhu   $a0, 8($v1)
/* 00468FC0 26650014 */  addiu $a1, $s3, 0x14
/* 00468FC4 0320F809 */  jalr  $t9
/* 00468FC8 00000000 */   nop   
/* 00468FCC 1040003F */  beqz  $v0, .L004690CC
/* 00468FD0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468FD4 8E0A0014 */  lw    $t2, 0x14($s0)
/* 00468FD8 8D4F0000 */  lw    $t7, ($t2)
/* 00468FDC 8DE30020 */  lw    $v1, 0x20($t7)
/* 00468FE0 90620000 */  lbu   $v0, ($v1)
/* 00468FE4 17C20016 */  bne   $fp, $v0, .L00469040
/* 00468FE8 00000000 */   nop   
/* 00468FEC 12A00037 */  beqz  $s5, .L004690CC
/* 00468FF0 00000000 */   nop   
/* 00468FF4 8F99870C */  lw    $t9, %call16(in_reg_masks)($gp)
/* 00468FF8 02402025 */  move  $a0, $s2
/* 00468FFC 8C650020 */  lw    $a1, 0x20($v1)
/* 00469000 0320F809 */  jalr  $t9
/* 00469004 8C660024 */   lw    $a2, 0x24($v1)
/* 00469008 10400030 */  beqz  $v0, .L004690CC
/* 0046900C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00469010 8E0E002C */  lw    $t6, 0x2c($s0)
/* 00469014 C6880000 */  lwc1  $f8, ($s4)
/* 00469018 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 0046901C 448E5000 */  mtc1  $t6, $f10
/* 00469020 05C10004 */  bgez  $t6, .L00469034
/* 00469024 46805420 */   cvt.s.w $f16, $f10
/* 00469028 44819000 */  mtc1  $at, $f18
/* 0046902C 00000000 */  nop   
/* 00469030 46128400 */  add.s $f16, $f16, $f18
.L00469034:
/* 00469034 46104102 */  mul.s $f4, $f8, $f16
/* 00469038 10000024 */  b     .L004690CC
/* 0046903C 4604A500 */   add.s $f20, $f20, $f4
.L00469040:
/* 00469040 56A00006 */  bnezl $s5, .L0046905C
/* 00469044 9478001A */   lhu   $t8, 0x1a($v1)
/* 00469048 8C790014 */  lw    $t9, 0x14($v1)
/* 0046904C 9328000C */  lbu   $t0, 0xc($t9)
/* 00469050 1100001E */  beqz  $t0, .L004690CC
/* 00469054 00000000 */   nop   
/* 00469058 9478001A */  lhu   $t8, 0x1a($v1)
.L0046905C:
/* 0046905C 24010017 */  li    $at, 23
/* 00469060 330B0100 */  andi  $t3, $t8, 0x100
/* 00469064 51600006 */  beql  $t3, $zero, .L00469080
/* 00469068 8C620014 */   lw    $v0, 0x14($v1)
/* 0046906C 14410003 */  bne   $v0, $at, .L0046907C
/* 00469070 2401000D */   li    $at, 13
/* 00469074 16410015 */  bne   $s2, $at, .L004690CC
/* 00469078 00000000 */   nop   
.L0046907C:
/* 0046907C 8C620014 */  lw    $v0, 0x14($v1)
.L00469080:
/* 00469080 904C000C */  lbu   $t4, 0xc($v0)
/* 00469084 51800007 */  beql  $t4, $zero, .L004690A4
/* 00469088 8E0F002C */   lw    $t7, 0x2c($s0)
/* 0046908C 8C490024 */  lw    $t1, 0x24($v0)
/* 00469090 01326821 */  addu  $t5, $t1, $s2
/* 00469094 91AAFFFF */  lbu   $t2, -1($t5)
/* 00469098 1140000C */  beqz  $t2, .L004690CC
/* 0046909C 00000000 */   nop   
/* 004690A0 8E0F002C */  lw    $t7, 0x2c($s0)
.L004690A4:
/* 004690A4 C6860000 */  lwc1  $f6, ($s4)
/* 004690A8 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 004690AC 448F5000 */  mtc1  $t7, $f10
/* 004690B0 05E10004 */  bgez  $t7, .L004690C4
/* 004690B4 468054A0 */   cvt.s.w $f18, $f10
/* 004690B8 44814000 */  mtc1  $at, $f8
/* 004690BC 00000000 */  nop   
/* 004690C0 46089480 */  add.s $f18, $f18, $f8
.L004690C4:
/* 004690C4 46123402 */  mul.s $f16, $f6, $f18
/* 004690C8 4610A500 */  add.s $f20, $f20, $f16
.L004690CC:
/* 004690CC 8F8E89AC */  lw     $t6, %got(graphhead)($gp)
/* 004690D0 2E480040 */  sltiu $t0, $s2, 0x40
/* 004690D4 8DCE0000 */  lw    $t6, ($t6)
/* 004690D8 95D90008 */  lhu   $t9, 8($t6)
/* 004690DC 5639001D */  bnel  $s1, $t9, .L00469154
/* 004690E0 8FA90058 */   lw    $t1, 0x58($sp)
/* 004690E4 11000006 */  beqz  $t0, .L00469100
/* 004690E8 0012C143 */   sra   $t8, $s2, 5
/* 004690EC 00185880 */  sll   $t3, $t8, 2
/* 004690F0 02CB6021 */  addu  $t4, $s6, $t3
/* 004690F4 8D890000 */  lw    $t1, ($t4)
/* 004690F8 02496804 */  sllv  $t5, $t1, $s2
/* 004690FC 29A80000 */  slti  $t0, $t5, 0
.L00469100:
/* 00469100 51000014 */  beql  $t0, $zero, .L00469154
/* 00469104 8FA90058 */   lw    $t1, 0x58($sp)
/* 00469108 8E620000 */  lw    $v0, ($s3)
/* 0046910C 904F0000 */  lbu   $t7, ($v0)
/* 00469110 56EF0010 */  bnel  $s7, $t7, .L00469154
/* 00469114 8FA90058 */   lw    $t1, 0x58($sp)
/* 00469118 904E0016 */  lbu   $t6, 0x16($v0)
/* 0046911C 24010002 */  li    $at, 2
/* 00469120 31D90007 */  andi  $t9, $t6, 7
/* 00469124 5721000B */  bnel  $t9, $at, .L00469154
/* 00469128 8FA90058 */   lw    $t1, 0x58($sp)
/* 0046912C 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 00469130 8C4B0014 */  lw    $t3, 0x14($v0)
/* 00469134 8F180000 */  lw    $t8, ($t8)
/* 00469138 000B62C2 */  srl   $t4, $t3, 0xb
/* 0046913C 570C0005 */  bnel  $t8, $t4, .L00469154
/* 00469140 8FA90058 */   lw    $t1, 0x58($sp)
/* 00469144 8F818044 */  lw    $at, %got(RO_1000D6A0)($gp)
/* 00469148 10000006 */  b     .L00469164
/* 0046914C C420D6A0 */   lwc1  $f0, %lo(RO_1000D6A0)($at)
.L00469150:
/* 00469150 8FA90058 */  lw    $t1, 0x58($sp)
.L00469154:
/* 00469154 26310001 */  addiu $s1, $s1, 1
/* 00469158 1629FF78 */  bne   $s1, $t1, .L00468F3C
/* 0046915C 00000000 */   nop   
.L00469160:
/* 00469160 4600A006 */  mov.s $f0, $f20
.L00469164:
/* 00469164 8FBF0044 */  lw    $ra, 0x44($sp)
/* 00469168 D7B40010 */  ldc1  $f20, 0x10($sp)
/* 0046916C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00469170 8FB10020 */  lw    $s1, 0x20($sp)
/* 00469174 8FB20024 */  lw    $s2, 0x24($sp)
/* 00469178 8FB30028 */  lw    $s3, 0x28($sp)
/* 0046917C 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00469180 8FB50030 */  lw    $s5, 0x30($sp)
/* 00469184 8FB60034 */  lw    $s6, 0x34($sp)
/* 00469188 8FB70038 */  lw    $s7, 0x38($sp)
/* 0046918C 8FBE0040 */  lw    $fp, 0x40($sp)
/* 00469190 03E00008 */  jr    $ra
/* 00469194 27BD0070 */   addiu $sp, $sp, 0x70
    .type cupcosts, @function
    .size cupcosts, .-cupcosts
    .end cupcosts
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel put_in_fallthru_bb
    .ent put_in_fallthru_bb
    # 00469280 globalcolor
/* 00469198 3C1C0FBB */  .cpload $t9
/* 0046919C 279C10F8 */  
/* 004691A0 0399E021 */  
/* 004691A4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004691A8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004691AC AFBF001C */  sw    $ra, 0x1c($sp)
/* 004691B0 AFA40020 */  sw    $a0, 0x20($sp)
/* 004691B4 AFA50024 */  sw    $a1, 0x24($sp)
/* 004691B8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004691BC AFA60028 */  sw    $a2, 0x28($sp)
/* 004691C0 AFA7002C */  sw    $a3, 0x2c($sp)
/* 004691C4 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004691C8 0320F809 */  jalr  $t9
/* 004691CC 2404000C */   li    $a0, 12
/* 004691D0 8FAE0024 */  lw    $t6, 0x24($sp)
/* 004691D4 8FA30020 */  lw    $v1, 0x20($sp)
/* 004691D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004691DC A04E0000 */  sb    $t6, ($v0)
/* 004691E0 8FAF0028 */  lw    $t7, 0x28($sp)
/* 004691E4 AC4F0004 */  sw    $t7, 4($v0)
/* 004691E8 93B8002F */  lbu   $t8, 0x2f($sp)
/* 004691EC A0580001 */  sb    $t8, 1($v0)
/* 004691F0 8C7900EC */  lw    $t9, 0xec($v1)
/* 004691F4 AC590008 */  sw    $t9, 8($v0)
/* 004691F8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004691FC 27BD0020 */  addiu $sp, $sp, 0x20
/* 00469200 AC6200EC */  sw    $v0, 0xec($v1)
/* 00469204 03E00008 */  jr    $ra
/* 00469208 00000000 */   nop   
    .type put_in_fallthru_bb, @function
    .size put_in_fallthru_bb, .-put_in_fallthru_bb
    .end put_in_fallthru_bb
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel put_in_jump_bb
    .ent put_in_jump_bb
    # 00469280 globalcolor
/* 0046920C 3C1C0FBB */  .cpload $t9
/* 00469210 279C1084 */  
/* 00469214 0399E021 */  
/* 00469218 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0046921C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00469220 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00469224 AFA40020 */  sw    $a0, 0x20($sp)
/* 00469228 AFA50024 */  sw    $a1, 0x24($sp)
/* 0046922C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00469230 AFA60028 */  sw    $a2, 0x28($sp)
/* 00469234 AFA7002C */  sw    $a3, 0x2c($sp)
/* 00469238 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0046923C 0320F809 */  jalr  $t9
/* 00469240 2404000C */   li    $a0, 12
/* 00469244 8FAE0024 */  lw    $t6, 0x24($sp)
/* 00469248 8FA30020 */  lw    $v1, 0x20($sp)
/* 0046924C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00469250 A04E0000 */  sb    $t6, ($v0)
/* 00469254 8FAF0028 */  lw    $t7, 0x28($sp)
/* 00469258 AC4F0004 */  sw    $t7, 4($v0)
/* 0046925C 93B8002F */  lbu   $t8, 0x2f($sp)
/* 00469260 A0580001 */  sb    $t8, 1($v0)
/* 00469264 8C7900F0 */  lw    $t9, 0xf0($v1)
/* 00469268 AC590008 */  sw    $t9, 8($v0)
/* 0046926C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00469270 27BD0020 */  addiu $sp, $sp, 0x20
/* 00469274 AC6200F0 */  sw    $v0, 0xf0($v1)
/* 00469278 03E00008 */  jr    $ra
/* 0046927C 00000000 */   nop   
    .type put_in_jump_bb, @function
    .size put_in_jump_bb, .-put_in_jump_bb
    .end put_in_jump_bb
)"");

extern float cupcosts(struct LiveRange *liverange, int reg, bool flag);
/*
00456A2C oneproc
*/
void globalcolor(void) {
    struct LiveRange *splitlr;   // sp118
    struct LiveRange *liverange; // sp114, s5
    int i;                       // sp110
    int candidate_bit;           // sp10C
    unsigned int chosen_reg;     // spDC
    long long available_regs;    // spD8
    struct Proc *prev_call;      // spC8
    struct Proc *next_call;      // spC4
    long long spB8;
    unsigned int regclass;
    unsigned int reg;
    int bb;
    struct Graphnode *node;
    struct RegisterNode *newRegNode;
    struct LiveUnit *lu;
    struct InterfereList *intf;
    struct GraphnodeList *pred;
    struct GraphnodeList *succ;
    float phi_f24;
    float phi_f22;
    float phi_f20;
    float phi_f2;
    bool chosen;
    bool phi_s1;
    bool pred_is_call;
    bool not_call;

    numofsplits = 0;
    if (!usefeedback || !curproc->feedback_data) {
        phi_f24 = movcostused * curstaticno * 0.25f;
        if (phi_f24 < 4.0f) {
            phi_f24 = 4.0f;
        }
        if (phi_f24 > 60.0f) {
            phi_f24 = 60.0f;
        }
    } else {
        phi_f24 = movcostused * (graphhead->unk2C * 2);
    }

    //spB8 := regscantpass - [23] + [firstparmreg[1]..firstparmreg[1]+3] + [firstparmreg[2]..firstparmreg[2]+1];
    spB8 = SET64_MINUS(regscantpass, ee_ra) | GENMASK(firstparmreg[0], firstparmreg[0]+4) | GENMASK(firstparmreg[1], firstparmreg[1]+2);

    unconstrain.num_blocks = 0;
    unconstrain.blocks = NULL;
    checkbvlist(&unconstrain);

    for (i = 0; i < bitposcount; i++) {
        if (bvectin(i, &iscolored12)) {
            liverange = bittab[i].liverange;
            liverange->forbidden[0] = 0;
            liverange->forbidden[1] = 0;

            regclass = regclassof(bittab[i].ichain);
            for (lu = liverange->liveunits; lu != NULL; lu = lu->next) {
                updateforbidden(lu->node, lu->reg, liverange, regclass);
            }

            if (!bvectempty(&liverange->unkC)) {
                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &liverange->unkC)) {
                        updateforbidden(bbtab[bb], 0, liverange, regclass);
                    }
                }
            }
            updatecolorsleft(liverange, regclass);

            if (!isconstrained(liverange)) {
                setbit(&unconstrain, i);
            }
        }
    }

    colorcand.num_blocks = 0;
    colorcand.blocks = NULL;
    checkbvlist(&colorcand);

    oldbitposcount = bitposcount;

    for (regclass = 1; regclass < 3; regclass++) {
        if (regclass != 1) {
            checkbvlist(&iscolored[regclass - 1]);
            checkbvlist(&unconstrain);
            checkbvlist(&colorcand);
            if (outofmem) {
                return;
            }
        }


        bvectcopy(&colorcand, &iscolored[regclass - 1]);
        bvectminus(&colorcand, &unconstrain);
        while (!bvectempty(&colorcand)) {
            candidate_bit = -1;
            phi_f20 = -3333.0f;

            for (i = 0; i < bitposcount; i++) {
                if (bvectin0(i, &colorcand)) {
                    liverange = bittab[i].liverange;
                    if (liverange->unk23 == 0) {
                        compute_save(liverange);
                    }

                    if (liverange->unk23 == 2) {
                        if (dowhyuncolor) {
                            whyuncolored(liverange);
                        }

                        liverange->assigned_reg = -1;
                        resetbit(&colorcand, i);
                        intf = liverange->interfere;
                        while (intf != NULL) {
                            if (intf->liverange != NULL) {
                                intf->liverange->unk24--;
                            }
                            intf = intf->next;
                        }

                        if (dbugno == 6) {
                            write_integer(list.c_file, liverange->ichain->bitpos, 4, 10);
                            write_char(list.c_file, ':', 1);
                            write_integer(list.c_file, i, 5, 10);
                            // does "-ve" mean negative? (lol)
                            write_string(list.c_file, " not colored (-ve save)", 23, 23);
                            writeln(list.c_file);
                        }
                    }

                    if (phi_f20 < liverange->adjsave) {
                        if (liverange->unk23 == 1) {
                            candidate_bit = i;
                            phi_f20 = liverange->adjsave;
                        }
                    }
                }
            }

            if (candidate_bit == -1) {
                break;
            }

            liverange = bittab[candidate_bit].liverange;
            chosen_reg = -1;

            phi_f20 = 1.0e20f;
            if (!o3opt) {
                phi_f22 = cupcosts(liverange, firsterreg[regclass - 1] + 1, 1);
            }

            for (reg = firsterreg[regclass - 1]; reg <= lasterreg[regclass - 1]; reg++) {
                if (!SET_IN(liverange->forbidden, reg)) {
                    if (!o3opt && !SET64_IN(spB8, reg)) {
                        phi_f2 = phi_f22;
                    } else {
                        phi_f2 = cupcosts(liverange, reg, 1);
                    }

                    if (phi_f2 < phi_f20) {
                        chosen_reg = reg;
                        phi_f20 = phi_f2;

                        SET64_INIT(available_regs, reg);
                    } else if (phi_f2 == phi_f20) {
                        // floating point equality...
                        SET64_ADD(available_regs, reg);
                    }
                }
            }

            if (!o3opt) {
                phi_f22 = cupcosts(liverange, firsteereg[regclass - 1], 0);
            }

            for (reg = firsteereg[regclass - 1]; reg <= lasteereg[regclass - 1]; reg++) {
                if (!SET_IN(liverange->forbidden, reg)) {
                    if (!o3opt && !SET64_IN(spB8, reg)) {
                        phi_f2 = phi_f22;
                    } else {
                        phi_f2 = cupcosts(liverange, reg, 0);
                    }

                    if (!allcallersave || SET64_IN(regscantpass, reg) || !propagate_ee_saves) {
                        if (!SET64_IN(usedeeregs[regclass - 1], reg)) {
                            phi_f2 += phi_f24;
                        }
                    }

                    if (phi_f2 < phi_f20) {
                        chosen_reg = reg;
                        phi_f20 = phi_f2;
                        SET64_INIT(available_regs, reg);
                    } else if (phi_f2 == phi_f20) {
                        SET64_ADD(available_regs, reg);
                    }
                }
            }

            if (liverange->adjsave * liverange->unk1C <= phi_f20) {
                split(&liverange, &splitlr, regclass, 1);
                if (outofmem) {
                    return;
                }

                if (splitlr->assigned_reg != -1) {
                    updatelivran(splitlr);
                }
            } else {
                if (dowhyuncolor) {
                    numcoloredlr += 1;
                    inc_allococ(liverange, &splitlr);
                    contiglr += contiguous(liverange);
                }

                // more than one register can be assigned?
                if (allcallersave && !SET64_EMPTY(SET64_MINUS(available_regs, chosen_reg))) {
                    chosen = false;
                    for (reg = firsterreg[regclass - 1]; !chosen && reg <= lasteereg[regclass - 1]; reg++) {
                        if (SET64_IN(available_regs, reg) && curproc->regstaken_parregs->regstaken[reg - 1]) {
                            chosen = true;
                            break;
                        }
                    }

                    if (chosen) {
                        chosen_reg = reg;
                    }
                }

                liverange->assigned_reg = chosen_reg;
                if (!allcallersave) {
                    if (chosen_reg < firsteereg[regclass - 1]) {
                        if (highesterreg[regclass - 1] < chosen_reg) {
                            highesterreg[regclass - 1] = chosen_reg;
                        }
                    } else {
                        if (highesteereg[regclass - 1] < chosen_reg) {
                            highesteereg[regclass - 1] = chosen_reg;
                        }
                        SET64_ADD(usedeeregs[regclass - 1], chosen_reg);
                    }
                } else if (chosen_reg == regsinclass1 || (someusefp && chosen_reg + 1 == regsinclass1)) {
                    SET64_ADD(usedeeregs[0], chosen_reg);
                } else {
                    curproc->regstaken_parregs->regstaken[chosen_reg - 1] = true;
                }

                resetbit(&colorcand, candidate_bit);
                if (dbugno == 6) {
                    write_integer(list.c_file, liverange->ichain->bitpos, 4, 10);
                    write_char(list.c_file, ':', 1);
                    write_integer(list.c_file, liverange->bitpos, 5, 10);
                    write_string(list.c_file, " assigned (constrained)", 23, 23);
                    write_integer(list.c_file, chosen_reg, 4, 10);
                    writeln(list.c_file);
                }

                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &bittab[candidate_bit].liverange->unk14)) {
                        if (bbtab[bb]->regdata.unk44[chosen_reg - 1] != NULL) {
                            dbgerror(0x2CE);
                        }

                        bbtab[bb]->regdata.unk44[chosen_reg - 1] = bittab[candidate_bit].liverange->ichain;

                        SET_ADD(bbtab[bb]->regsused[regclass - 1], chosen_reg);
                    }
                }

                for (intf = liverange->interfere; intf != NULL; intf = intf->next) {
                    if (intf->liverange != NULL && intf->liverange->assigned_reg == 0 && !SET_IN(intf->liverange->forbidden, chosen_reg)) {

                        SET_ADD(intf->liverange->forbidden, chosen_reg);

                        intf->liverange->unk21--;
                        liverange = intf->liverange;
                        if (needsplit(liverange, regclass)) {
                            do {
                                split(&liverange, &splitlr, regclass, 0);
                                if (outofmem) {
                                    return;
                                }

                                liverange = splitlr;
                            } while (needsplit(liverange, regclass));

                            updatelivran(liverange);
                        }
                    }

                }
            }
        }
    }

    // color unconstrained live ranges
    for (i = 0; i < bitposcount; i++) {
        if (bvectin0(i, &unconstrain)) {
            liverange = bittab[i].liverange;
            chosen_reg = -1;
            regclass = regclassof(liverange->ichain);
            phi_f20 = 1.0e20f;

            if (liverange->assigned_reg == -1) {
                dbgerror(0x1C16);
            }

            if (liverange->unk23 == 0) {
                compute_save(liverange);
            }

            if (!o3opt) {
                phi_f22 = cupcosts(liverange, firsterreg[regclass - 1] + 1, 1);
            }

            for (reg = firsterreg[regclass - 1]; reg <= lasterreg[regclass - 1]; reg++) {
                if (!SET_IN(liverange->forbidden, reg)) {
                    if (!o3opt && !SET64_IN(spB8, reg)) {
                        phi_f2 = phi_f22;
                    } else {
                        phi_f2 = cupcosts(liverange, reg, 1);
                    }
                    if (phi_f2 < phi_f20) {
                        chosen_reg = reg;
                        phi_f20 = phi_f2;
                        SET64_INIT(available_regs, reg);
                    } else if (phi_f2 == phi_f20) {
                        SET64_ADD(available_regs, reg);
                    }
                }
            }

            if (!o3opt) {
                phi_f22 = cupcosts(liverange, firsteereg[regclass - 1], 0);
            }

            for (reg = firsteereg[regclass - 1]; reg <= lasteereg[regclass - 1]; reg++) {
                if (!SET_IN(liverange->forbidden, reg)) {
                    if (!o3opt && !SET64_IN(spB8, reg)) {
                        phi_f2 = phi_f22;
                    } else {
                        phi_f2 = cupcosts(liverange, reg, 0);
                    }

                    if (!allcallersave || SET64_IN(regscantpass, reg) || !propagate_ee_saves) {
                        if (!SET64_IN(usedeeregs[regclass - 1], reg)) {
                            phi_f2 = phi_f2 + phi_f24;
                        }
                    }

                    if (phi_f2 < phi_f20) {
                        SET64_INIT(available_regs, reg);
                        phi_f20 = phi_f2;
                        chosen_reg = reg;
                    } else if (phi_f2 == phi_f20) {
                        SET64_ADD(available_regs, reg);
                    }
                }
            }

            if (phi_f20 < liverange->adjsave * liverange->unk1C && liverange->unk23 == 1) {
                if (dowhyuncolor) {
                    numcoloredlr += 1;
                    inc_allococ(liverange);
                    contiglr += contiguous(liverange);
                }

                if (allcallersave && !SET64_EMPTY(SET64_MINUS(available_regs, chosen_reg))) {
                    chosen = false;
                    for (reg = firsterreg[regclass - 1]; !chosen && reg <= lasteereg[regclass - 1]; reg++) {
                        if (SET64_IN(available_regs, reg) && curproc->regstaken_parregs->regstaken[reg - 1]) {
                            chosen = true;
                            break;
                        }
                    }

                    if (chosen) {
                        chosen_reg = reg;
                    }
                }

                liverange->assigned_reg = chosen_reg;
                if (!allcallersave) {
                    if (chosen_reg < firsteereg[regclass - 1]) {
                        if (highesterreg[regclass - 1] < chosen_reg) {
                            highesterreg[regclass - 1] = chosen_reg;
                        }
                    } else {
                        if (highesteereg[regclass - 1] < chosen_reg) {
                            highesteereg[regclass - 1] = chosen_reg;
                        }
                        SET64_ADD(usedeeregs[regclass - 1], chosen_reg);
                    }
                } else {
                    if (chosen_reg == regsinclass1 || (someusefp && chosen_reg + 1 == regsinclass1)) {
                        SET64_ADD(usedeeregs[0], chosen_reg);
                    } else {
                        curproc->regstaken_parregs->regstaken[chosen_reg - 1] = true;
                    }
                }

                resetbit(&colorcand, candidate_bit);
                if (update_sym_file) {
                    if (liverange->ichain->type == isvar && liverange->ichain->isvar_issvar.location.blockno == curblk &&
                            liverange->ichain->bitpos == liverange->bitpos && liverange->next == NULL) {
                        local_in_reg(curblk, liverange->ichain->isop.opc, coloroffset(chosen_reg) >> 2);
                    }
                }

                if (dbugno == 6) {
                    liverange = liverange;
                    write_integer(list.c_file, liverange->ichain->bitpos, 4, 10);
                    write_char(list.c_file, ':', 1);
                    write_integer(list.c_file, liverange->bitpos, 5, 10);
                    write_string(list.c_file, " assigned (unconstrained)", 25, 25);
                    write_integer(list.c_file, chosen_reg, 4, 10);
                    writeln(list.c_file);
                }

                for (intf = liverange->interfere; intf != NULL; intf = intf->next) {
                    if (intf->liverange != NULL && intf->liverange->assigned_reg == 0 && !SET_IN(intf->liverange->forbidden, chosen_reg)) {
                        SET_ADD(intf->liverange->forbidden, chosen_reg);
                        intf->liverange->unk21--;
                    }
                }

                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &liverange->unk14) != 0) {
                        if (bbtab[bb]->regdata.unk44[chosen_reg - 1] != NULL) {
                            dbgerror(0x1C0E);
                        }

                        bbtab[bb]->regdata.unk44[chosen_reg - 1] = liverange->ichain;

                        SET_ADD(bbtab[bb]->regsused[regclass - 1], chosen_reg);
                    }
                }

            } else {
                if (dowhyuncolor != 0) {
                    if (liverange->unk23 == 1) {
                        numcalloverheadlr += 1;
                        contiglr += contiguous(liverange);
                    } else {
                        whyuncolored(liverange);
                    }
                }
            }
        }
    }

    for (node = graphhead; node != NULL; node = node->next) {
        pred_is_call = false;
        if (node->predecessors != NULL &&
                (node->predecessors->graphnode->stat_tail->opc == Ucia ||
                 node->predecessors->graphnode->stat_tail->opc == Ucup ||
                 node->predecessors->graphnode->stat_tail->opc == Uicuf)) {
            pred_is_call = true;
        }

        if (pred_is_call) {
            if (node->predecessors->graphnode->stat_tail->opc == Ucia) {
                prev_call = ciaprocs;
            } else {
                prev_call = node->predecessors->graphnode->stat_tail->u.call.proc;
            }
        }

        if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
            next_call = node->stat_tail->u.call.proc;
        } else if (node->stat_tail->opc == Ucia) {
            next_call = ciaprocs;
        }

        regclass = 1;
        for (reg = 1; reg <= 35; reg++) {
            if (node->regdata.unk44[reg - 1] != NULL) {
                phi_s1 = true;
                if (reg >= 24) {
                    regclass = 2;
                }

                lu = gettolivbb(node->regdata.unk44[reg - 1], node);
                if (lu == dft_livbb) {
                    liverange = bittab[node->regdata.unk44[reg - 1]->bitpos].liverange;
                    while (!bvectin(node->num, &liverange->unkC)) {
                        liverange = liverange->next;
                    }
                } else {
                    liverange = lu->liverange;
                }

                if (lu->firstisstr) {
                    BITARR_SET(node->unkD0, reg - 1, false);
                } else {
                    BITARR_SET(node->unkD0, reg - 1, lu->needreglod);
                    if (pred_is_call) {
                        if (node->regdata.unk44[reg - 1] == node->predecessors->graphnode->regdata.unk44[reg - 1] &&
                                (prev_call->o3opt || reg < firsteereg[regclass - 1]) &&
                                (!IS_TEMP_REGISTERS_INTACT_ATTR(node->predecessors->graphnode->stat_tail->u.call.extrnal_flags) ||
                                 node->predecessors->graphnode->stat_tail->opc != Ucup || reg == er_ra)) {
                            if (prev_call == ciaprocs) {
                                if (in_reg_masks(reg, node->predecessors->graphnode->stat_tail->u.cia.unk20, node->predecessors->graphnode->stat_tail->u.cia.len)) {
                                    BITARR_SET(node->unkD0, reg - 1, true);
                                }
                            } else if (!prev_call->o3opt || prev_call->regstaken_parregs->regstaken[reg - 1]) {
                                BITARR_SET(node->unkD0, reg - 1, true);
                            }
                        }
                    }
                }

                BITARR_SET(node->unkD5, reg - 1, false);
                if (liverange->hasstore && !lu->deadout &&
                        (lu->needregsave ||
                         (is_cup_affecting_regs(node) &&
                          ((node->stat_tail->opc != Ucia &&
                            ((!next_call->o3opt && reg < firsteereg[regclass - 1]) ||
                              (next_call->o3opt && next_call->regstaken_parregs->regstaken[reg - 1])) &&
                            (!IS_TEMP_REGISTERS_INTACT_ATTR(node->stat_tail->u.call.extrnal_flags) ||
                             node->stat_tail->opc != Ucup || reg == er_ra)) ||
                           (node->stat_tail->opc == Ucia && reg < firsteereg[regclass - 1] &&
                            in_reg_masks(reg, node->stat_tail->u.cia.unk20, node->stat_tail->u.cia.len)))))) {
                    if (lu->store_count != 0 || lu->firstisstr || !BITARR_GET(node->unkD0, reg - 1)) {
                        BITARR_SET(node->unkD5, reg - 1, true);
                    } else {
                        phi_s1 = false;
                    }
                }

                BITARR_SET(node->unkDA, reg - 1, false);
                if (phi_s1 && BITARR_GET(node->unkD0, reg - 1) && !node->interprocedural_controlflow && dorlodrstropt) {
                    if (node->predecessors != NULL && node->predecessors->next != NULL) {
                        if (somepremember(node->predecessors, reg, node->regdata.unk44[reg - 1], liverange) &&
                                allpreppout(node->predecessors, reg, node->regdata.unk44[reg - 1], liverange)) {
                            pred = node->predecessors;
                            while (pred != NULL) {
                                if (node->regdata.unk44[reg - 1] != pred->graphnode->regdata.unk44[reg - 1]) {
                                    if (pred->graphnode->stat_tail->opc != Ufjp && pred->graphnode->stat_tail->opc != Utjp) {
                                        newRegNode = alloc_new(0xC, &perm_heap);
                                        newRegNode->reg = reg;
                                        newRegNode->ichain = node->regdata.unk44[reg - 1];
                                        newRegNode->next = pred->graphnode->unkE4;
                                        pred->graphnode->unkE4 = newRegNode;
                                    } else {
                                        TRAP_IF(docreatebb == 0);
                                        if (node->blockno == 0 || node->blockno != pred->graphnode->stat_tail->u.jp.target_blockno) {
                                            put_in_fallthru_bb(pred->graphnode, reg, node->regdata.unk44[reg - 1], 1);
                                        } else {
                                            put_in_jump_bb(pred->graphnode, reg, node->regdata.unk44[reg - 1], 1);
                                        }
                                    }
                                }
                                pred = pred->next;
                            }
                            BITARR_SET(node->unkD0, reg - 1, false);
                            BITARR_SET(node->unkDA, reg - 1, true);
                        }
                    }
                }
            } else {
                BITARR_SET(node->unkD0, reg - 1, false);
                BITARR_SET(node->unkD5, reg - 1, false);
                BITARR_SET(node->unkDA, reg - 1, false);
            }
        }
    }

    if (dorlodrstropt) {
        for (node = graphhead; node != NULL; node = node->next) {
            for (reg = 1; reg <= 35; reg++) {
                if (node->regdata.unk44[reg - 1] != NULL) {
                    liverange = bittab[node->regdata.unk44[reg - 1]->bitpos].liverange;
                    while (!bvectin(node->num, &liverange->unk14)) {
                        liverange = liverange->next;
                    }

                    not_call = false;
                    if (node->stat_tail->opc != Ucia && node->stat_tail->opc != Ucup && node->stat_tail->opc != Uicuf) {
                        not_call = true;
                    }

                    if (not_call && BITARR_GET(node->unkD5, reg - 1) && node->successors != NULL) {
                        if (somepostmember(node->successors, reg, node->regdata.unk44[reg - 1], liverange) &&
                                (docreatebb || allsucppin(node->successors, reg, node->regdata.unk44[reg - 1], liverange))) {

                            if (node->stat_tail->opc == Uijp || node->stat_tail->opc == Uxjp) {
                                continue;
                            }

                            for (succ = node->successors; succ != NULL; succ = succ->next) {
                                if ((succ->graphnode->regdata.unk44[reg - 1] != node->regdata.unk44[reg - 1] || BITARR_GET(succ->graphnode->unkD0, reg - 1)) ||
                                        (BITARR_GET(succ->graphnode->unkDA, reg - 1) && !bvectin(succ->graphnode->num, &liverange->unk14))) {
                                    TRAP_IF(node->stat_tail->opc != Ufjp && node->stat_tail->opc != Utjp);
                                    if (succ->graphnode->blockno == 0 || node->stat_tail->u.jp.target_blockno != succ->graphnode->blockno) {
                                        if (docreatebb) {
                                            put_in_fallthru_bb(node, reg, node->regdata.unk44[reg - 1], 0);
                                        } else {
                                            newRegNode = alloc_new(0xC, &perm_heap);
                                            newRegNode->reg = reg;
                                            newRegNode->ichain = node->regdata.unk44[reg - 1];
                                            newRegNode->next = succ->graphnode->unkE0;
                                            succ->graphnode->unkE0 = newRegNode;
                                        }
                                    } else if (succ->graphnode->predecessors->next != NULL || succ->graphnode->interprocedural_controlflow) {
                                        put_in_jump_bb(node, reg, node->regdata.unk44[reg - 1], 0);
                                        TRAP_IF(docreatebb == 0);
                                    } else {
                                        newRegNode = alloc_new(0xC, &perm_heap);
                                        newRegNode->reg = reg;
                                        newRegNode->ichain = node->regdata.unk44[reg - 1];
                                        newRegNode->next = succ->graphnode->unkE0;
                                        succ->graphnode->unkE0 = newRegNode;
                                    }
                                }
                            }
                            BITARR_SET(node->unkD5, reg - 1, false);
                        }
                    }
                }
            }
        }
    }

    if (dbugno == 7) {
        printinterproc();
    }

    if (dbugno == 2 || dbugno == 3) {
        write_string(list.c_file, "@ iscolored 1", 0xDU, 0xDU);
        printbv(&iscolored[0]);
        write_string(list.c_file, "@ iscolored 2", 0xDU, 0xDU);
        printbv(&iscolored[1]);
        write_string(list.c_file, "@ colorcand", 0xBU, 0xBU);
        printbv(&colorcand);
        write_string(list.c_file, "@ unconstrain ", 0xEU, 0xEU);
        printbv(&unconstrain);
        write_string(list.c_file, "@ vareqv ", 9U, 9U);
        printbv(&vareqv);
        write_string(list.c_file, "@ asgneqv ", 10, 10);
        printbv(&asgneqv);
        write_string(list.c_file, "@ coloredparms ", 0xFU, 0xFU);
        printbv(&coloredparms);
    }
}
