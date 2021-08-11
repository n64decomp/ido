#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptutil.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000D560:
    # 0045E0B8 varappear
    .asciz "uoptreg1.p"

    .balign 4
jtbl_1000D56C:
    # 0045E0B8 varappear
    .gpword .L0045E118
    .gpword .L0045E118
    .gpword .L0045E120
    .gpword .L0045E154
    .gpword .L0045E118
    .gpword .L0045E120
    .gpword .L0045E1BC
    .gpword .L0045E118

.data
D_10010DD0:
    # 0045D9A0 is_cup
    .byte 0x00,0x00,0x80,0x00,0x00,0x08,0x00,0x00

D_10010DD8:
    # 0045E1F8 caninsertearly
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010DE4:
    # 0045E1F8 caninsertearly
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10

D_10010DF4:
    # 0045E408 sizeofsetexpr
    .byte 0x20,0x00,0x00,0x08,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00


.bss
# 10013878
glabel ever_altered
    # 0045DA18 formlivbb
    # 00461AAC makelivranges
    .space 8
    .size ever_altered, 8
    .type ever_altered, @object
    .space 100


.bss
    .balign 4
# 1001C624
glabel passedcl
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    .space 4
    .size passedcl, 4
    .type passedcl, @object

    .balign 4
# 1001C628
glabel outonly_parm
    # 0045DA18 formlivbb
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    .space 4
    .size outonly_parm, 4
    .type outonly_parm, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

extern struct BitVector ever_altered;
extern int passedcl;
extern int outonly_parm;


__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel is_cup
    .ent is_cup
    # 004638C0 regdataflow
/* 0045D9A0 8C820020 */  lw    $v0, 0x20($a0)
/* 0045D9A4 90450000 */  lbu   $a1, ($v0)
/* 0045D9A8 2CAE0040 */  sltiu $t6, $a1, 0x40
/* 0045D9AC 11C00009 */  beqz  $t6, .L0045D9D4
/* 0045D9B0 00000000 */   nop   
/* 0045D9B4 8F998044 */  lw    $t9, %got(D_10010DD0)($gp)
/* 0045D9B8 00057943 */  sra   $t7, $a1, 5
/* 0045D9BC 000FC080 */  sll   $t8, $t7, 2
/* 0045D9C0 27390DD0 */  addiu $t9, %lo(D_10010DD0) # addiu $t9, $t9, 0xdd0
/* 0045D9C4 03384021 */  addu  $t0, $t9, $t8
/* 0045D9C8 8D090000 */  lw    $t1, ($t0)
/* 0045D9CC 00A95004 */  sllv  $t2, $t1, $a1
/* 0045D9D0 294E0000 */  slti  $t6, $t2, 0
.L0045D9D4:
/* 0045D9D4 15C0000E */  bnez  $t6, .L0045DA10
/* 0045D9D8 01C01825 */   move  $v1, $t6
/* 0045D9DC 38A30017 */  xori  $v1, $a1, 0x17
/* 0045D9E0 2C630001 */  sltiu $v1, $v1, 1
/* 0045D9E4 1060000A */  beqz  $v1, .L0045DA10
/* 0045D9E8 00000000 */   nop   
/* 0045D9EC 9444001A */  lhu   $a0, 0x1a($v0)
/* 0045D9F0 30830002 */  andi  $v1, $a0, 2
/* 0045D9F4 0003182B */  sltu  $v1, $zero, $v1
/* 0045D9F8 2C630001 */  sltiu $v1, $v1, 1
/* 0045D9FC 14600004 */  bnez  $v1, .L0045DA10
/* 0045DA00 00000000 */   nop   
/* 0045DA04 30830001 */  andi  $v1, $a0, 1
/* 0045DA08 0003182B */  sltu  $v1, $zero, $v1
/* 0045DA0C 2C630001 */  sltiu $v1, $v1, 1
.L0045DA10:
/* 0045DA10 03E00008 */  jr    $ra
/* 0045DA14 00601025 */   move  $v0, $v1
    .type is_cup, @function
    .size is_cup, .-is_cup
    .end is_cup
)"");

/*
0045E45C func_0045E45C
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461084 func_00461084
0046123C func_0046123C
00461640 func_00461640
00461AAC makelivranges
*/
void formlivbb(struct IChain *ichain, struct Graphnode *node, struct livbb **dest) {
    int argnum;
    int i;
    bool phi_t3;
    bool phi_v1_2;

    if (bittab[ichain->bitpos].unk4 == NULL) {
        setbit(&iscolored[regclassof(ichain) - 1], ichain->bitpos);

        if (ichain->type == isvar && ichain->isvar_issvar.location.memtype == Pmt && curblk == ichain->isvar_issvar.location.blockno) {
            argnum = ichain->isvar_issvar.location.addr / 4;
            phi_t3 = false;
            if (argnum > pdefmax || pdeftab[argnum].opc == Unop || pdeftab[argnum].dtype == Mdt) {
                phi_t3 = true;
            } else if (!allcallersave && argnum > MIN(pdefmax, 3)) {
                phi_t3 = true;
            } else if (fitparmreg(ichain->isvar_issvar.location.addr, ichain->isvar_issvar.size, pdeftab[argnum].offset, pdeftab[argnum].size) &&
                    ((pdeftab[argnum].dtype != Idt && pdeftab[argnum].dtype != Kdt) || mips3_64data || (dwopcode && allcallersave))) {
                
                setbit(&coloredparms, ichain->bitpos);
                outonly_parm = lang == LANG_ADA && !pdeftab[argnum].inmode;
                setbitbb(&ever_altered, ichain->bitpos);
            } else {
                phi_t3 = true;
            }

            if (phi_t3 && !allcallersave) {
                if (argnum <= MIN(pdefmax, 3)) {
                    i = argnum;
                    while (pdeftab[i].opc == Unop) {
                        i--;
                    }
                    pdeftab[i].unk3 = true;
                }
            }
        } else if (ichain->type == isvar && ichain->isvar_issvar.location.memtype == Mmt && curblk == ichain->isvar_issvar.location.blockno && staticlinkloc == ichain->isvar_issvar.location.addr) {
            setbit(&coloredparms, ichain->bitpos);
            outonly_parm = false;
        }

        bittab[ichain->bitpos].unk4 = alloc_new(sizeof(struct BittabItemUnk4), &perm_heap);
        if (bittab[ichain->bitpos].unk4 == NULL) {
            outofmem = true;
            return;
        }

        bittab[ichain->bitpos].unk4->ichain = ichain;
        bittab[ichain->bitpos].unk4->unk8 = NULL;
        bittab[ichain->bitpos].unk4->unk4 = ichain->bitpos;
        formbvlivran(&bittab[ichain->bitpos].unk4->unkC);
        formbvlivran(&bittab[ichain->bitpos].unk4->unk14);
        phi_v1_2 = false;
        if (bittab[ichain->bitpos].unk4->unk14.blocks == NULL) {
            return;
        }
        bittab[ichain->bitpos].unk4->unk1C = -1;
        bittab[ichain->bitpos].unk4->unk20 = 0;
        bittab[ichain->bitpos].unk4->unk24 = 0;
        bittab[ichain->bitpos].unk4->unk23 = 0;
        bittab[ichain->bitpos].unk4->next = NULL;
        bittab[ichain->bitpos].unk4->interfere = NULL;
    } else {
        phi_v1_2 = bvectin(node->num, &bittab[ichain->bitpos].unk4->unk14);
    }

    if (!phi_v1_2) {
        numlu++;

        *dest = alloc_new(sizeof(struct livbb), &perm_heap);
        if (*dest == NULL) {
            outofmem = true;
            return;
        }

        (*dest)->count = 0;
        (*dest)->unk12 = 0;
        (*dest)->firstisstr = 0;
        (*dest)->unk13 = 0;
        (*dest)->node = node;

        if (bittab[ichain->bitpos].unk4->interfere == NULL) {
            bittab[ichain->bitpos].unk4->unk8 = *dest;
        } else {
            bittab[ichain->bitpos].unk4->interfere->next = *dest;
        }

        bittab[ichain->bitpos].unk4->interfere = *dest;
        (*dest)->next = NULL;
        (*dest)->unk8 = bittab[ichain->bitpos].unk4;
        (*dest)->unkC = node->unk30;
        node->unk30 = *dest;
        setbitbb(&bittab[ichain->bitpos].unk4->unk14, node->num);
        setbit(&node->bvs.stage2.appear, ichain->bitpos);
        (*dest)->needreglod = 0;
        (*dest)->needregsave = 0;
        (*dest)->deadout = 0;
    } else {
        *dest = node->unk30;
        while ((*dest)->unk8->ichain != ichain) {
            *dest = (*dest)->unkC;
        }
    }
}

__asm__(R""(
.set noat
.set noreorder

glabel passedinreg
    .ent passedinreg
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 00464BFC localcolor
/* 0045DFAC 3C1C0FBC */  .cpload $t9
/* 0045DFB0 279CC2E4 */  
/* 0045DFB4 0399E021 */  
/* 0045DFB8 908E0016 */  lbu   $t6, 0x16($a0)
/* 0045DFBC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0045DFC0 24010001 */  li    $at, 1
/* 0045DFC4 31CF0007 */  andi  $t7, $t6, 7
/* 0045DFC8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045DFCC 15E10003 */  bne   $t7, $at, .L0045DFDC
/* 0045DFD0 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0045DFD4 10000033 */  b     .L0045E0A4
/* 0045DFD8 24030001 */   li    $v1, 1
.L0045DFDC:
/* 0045DFDC 8F988B0C */  lw     $t8, %got(allcallersave)($gp)
/* 0045DFE0 93180000 */  lbu   $t8, ($t8)
/* 0045DFE4 1300000F */  beqz  $t8, .L0045E024
/* 0045DFE8 00000000 */   nop   
/* 0045DFEC 8F828B28 */  lw     $v0, %got(mips3_64data)($gp)
/* 0045DFF0 90420000 */  lbu   $v0, ($v0)
/* 0045DFF4 14400009 */  bnez  $v0, .L0045E01C
/* 0045DFF8 00000000 */   nop   
/* 0045DFFC 90990001 */  lbu   $t9, 1($a0)
/* 0045E000 3C010500 */  lui   $at, 0x500
/* 0045E004 2F280020 */  sltiu $t0, $t9, 0x20
/* 0045E008 00084823 */  negu  $t1, $t0
/* 0045E00C 01215024 */  and   $t2, $t1, $at
/* 0045E010 032A1004 */  sllv  $v0, $t2, $t9
/* 0045E014 28420000 */  slti  $v0, $v0, 0
/* 0045E018 2C420001 */  sltiu $v0, $v0, 1
.L0045E01C:
/* 0045E01C 10000021 */  b     .L0045E0A4
/* 0045E020 304300FF */   andi  $v1, $v0, 0xff
.L0045E024:
/* 0045E024 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 0045E028 AFA40020 */  sw    $a0, 0x20($sp)
/* 0045E02C AFA50024 */  sw    $a1, 0x24($sp)
/* 0045E030 0320F809 */  jalr  $t9
/* 0045E034 00000000 */   nop   
/* 0045E038 24010001 */  li    $at, 1
/* 0045E03C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045E040 8FA40020 */  lw    $a0, 0x20($sp)
/* 0045E044 14410014 */  bne   $v0, $at, .L0045E098
/* 0045E048 8FA50024 */   lw    $a1, 0x24($sp)
/* 0045E04C 8C8B0010 */  lw    $t3, 0x10($a0)
/* 0045E050 0165102A */  slt   $v0, $t3, $a1
/* 0045E054 38420001 */  xori  $v0, $v0, 1
/* 0045E058 1040000D */  beqz  $v0, .L0045E090
/* 0045E05C 00000000 */   nop   
/* 0045E060 8F828B28 */  lw     $v0, %got(mips3_64data)($gp)
/* 0045E064 90420000 */  lbu   $v0, ($v0)
/* 0045E068 14400009 */  bnez  $v0, .L0045E090
/* 0045E06C 00000000 */   nop   
/* 0045E070 908C0001 */  lbu   $t4, 1($a0)
/* 0045E074 3C010500 */  lui   $at, 0x500
/* 0045E078 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0045E07C 000D7023 */  negu  $t6, $t5
/* 0045E080 01C17824 */  and   $t7, $t6, $at
/* 0045E084 018F1004 */  sllv  $v0, $t7, $t4
/* 0045E088 28420000 */  slti  $v0, $v0, 0
/* 0045E08C 2C420001 */  sltiu $v0, $v0, 1
.L0045E090:
/* 0045E090 10000004 */  b     .L0045E0A4
/* 0045E094 304300FF */   andi  $v1, $v0, 0xff
.L0045E098:
/* 0045E098 8C980010 */  lw    $t8, 0x10($a0)
/* 0045E09C 0305182A */  slt   $v1, $t8, $a1
/* 0045E0A0 306300FF */  andi  $v1, $v1, 0xff
.L0045E0A4:
/* 0045E0A4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0045E0A8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0045E0AC 00601025 */  move  $v0, $v1
/* 0045E0B0 03E00008 */  jr    $ra
/* 0045E0B4 00000000 */   nop   
    .type passedinreg, @function
    .size passedinreg, .-passedinreg
    .end passedinreg
)"");

__asm__(R""(
.set noat
.set noreorder

glabel varappear
    .ent varappear
    # 0045E0B8 varappear
    # 0045E1F8 caninsertearly
/* 0045E0B8 3C1C0FBC */  .cpload $t9
/* 0045E0BC 279CC1D8 */  
/* 0045E0C0 0399E021 */  
/* 0045E0C4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045E0C8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045E0CC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045E0D0 00A03025 */  move  $a2, $a1
/* 0045E0D4 8F8389CC */  lw     $v1, %got(nocopy)($gp)
.L0045E0D8:
/* 0045E0D8 54C00004 */  bnezl $a2, .L0045E0EC
/* 0045E0DC 90C20000 */   lbu   $v0, ($a2)
/* 0045E0E0 10000040 */  b     .L0045E1E4
/* 0045E0E4 A3A00027 */   sb    $zero, 0x27($sp)
/* 0045E0E8 90C20000 */  lbu   $v0, ($a2)
.L0045E0EC:
/* 0045E0EC 244EFFFF */  addiu $t6, $v0, -1
/* 0045E0F0 2DC10008 */  sltiu $at, $t6, 8
/* 0045E0F4 10200033 */  beqz  $at, .L0045E1C4
/* 0045E0F8 00000000 */   nop   
/* 0045E0FC 8F818044 */  lw    $at, %got(jtbl_1000D56C)($gp)
/* 0045E100 000E7080 */  sll   $t6, $t6, 2
/* 0045E104 002E0821 */  addu  $at, $at, $t6
/* 0045E108 8C2ED56C */  lw    $t6, %lo(jtbl_1000D56C)($at)
/* 0045E10C 01DC7021 */  addu  $t6, $t6, $gp
/* 0045E110 01C00008 */  jr    $t6
/* 0045E114 00000000 */   nop   
.L0045E118:
/* 0045E118 10000032 */  b     .L0045E1E4
/* 0045E11C A3A00027 */   sb    $zero, 0x27($sp)
.L0045E120:
/* 0045E120 8CC20030 */  lw    $v0, 0x30($a2)
/* 0045E124 50400005 */  beql  $v0, $zero, .L0045E13C
/* 0045E128 8CD80014 */   lw    $t8, 0x14($a2)
/* 0045E12C 8C6F0000 */  lw    $t7, ($v1)
/* 0045E130 15E20006 */  bne   $t7, $v0, .L0045E14C
/* 0045E134 00000000 */   nop   
/* 0045E138 8CD80014 */  lw    $t8, 0x14($a2)
.L0045E13C:
/* 0045E13C 0098C826 */  xor   $t9, $a0, $t8
/* 0045E140 2F390001 */  sltiu $t9, $t9, 1
/* 0045E144 10000027 */  b     .L0045E1E4
/* 0045E148 A3B90027 */   sb    $t9, 0x27($sp)
.L0045E14C:
/* 0045E14C 1000FFE2 */  b     .L0045E0D8
/* 0045E150 00403025 */   move  $a2, $v0
.L0045E154:
/* 0045E154 8F9984C4 */  lw    $t9, %call16(varappear)($gp)
/* 0045E158 8CC50024 */  lw    $a1, 0x24($a2)
/* 0045E15C AFA40028 */  sw    $a0, 0x28($sp)
/* 0045E160 0320F809 */  jalr  $t9
/* 0045E164 AFA6002C */   sw    $a2, 0x2c($sp)
/* 0045E168 304300FF */  andi  $v1, $v0, 0xff
/* 0045E16C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045E170 8FA40028 */  lw    $a0, 0x28($sp)
/* 0045E174 1460000F */  bnez  $v1, .L0045E1B4
/* 0045E178 8FA6002C */   lw    $a2, 0x2c($sp)
/* 0045E17C 90C80020 */  lbu   $t0, 0x20($a2)
/* 0045E180 8F8A8DBC */  lw     $t2, %got(optab)($gp)
/* 0045E184 00084880 */  sll   $t1, $t0, 2
/* 0045E188 01284823 */  subu  $t1, $t1, $t0
/* 0045E18C 012A5821 */  addu  $t3, $t1, $t2
/* 0045E190 916C0002 */  lbu   $t4, 2($t3)
/* 0045E194 11800007 */  beqz  $t4, .L0045E1B4
/* 0045E198 00000000 */   nop   
/* 0045E19C 8F9984C4 */  lw    $t9, %call16(varappear)($gp)
/* 0045E1A0 8CC50028 */  lw    $a1, 0x28($a2)
/* 0045E1A4 0320F809 */  jalr  $t9
/* 0045E1A8 00000000 */   nop   
/* 0045E1AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045E1B0 304300FF */  andi  $v1, $v0, 0xff
.L0045E1B4:
/* 0045E1B4 1000000B */  b     .L0045E1E4
/* 0045E1B8 A3A30027 */   sb    $v1, 0x27($sp)
.L0045E1BC:
/* 0045E1BC 10000009 */  b     .L0045E1E4
/* 0045E1C0 A3A00027 */   sb    $zero, 0x27($sp)
.L0045E1C4:
/* 0045E1C4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045E1C8 8F868044 */  lw    $a2, %got(RO_1000D560)($gp)
/* 0045E1CC 24040001 */  li    $a0, 1
/* 0045E1D0 240500CC */  li    $a1, 204
/* 0045E1D4 2407000A */  li    $a3, 10
/* 0045E1D8 0320F809 */  jalr  $t9
/* 0045E1DC 24C6D560 */   addiu $a2, %lo(RO_1000D560) # addiu $a2, $a2, -0x2aa0
/* 0045E1E0 8FBC0018 */  lw    $gp, 0x18($sp)
.L0045E1E4:
/* 0045E1E4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0045E1E8 93A20027 */  lbu   $v0, 0x27($sp)
/* 0045E1EC 27BD0028 */  addiu $sp, $sp, 0x28
/* 0045E1F0 03E00008 */  jr    $ra
/* 0045E1F4 00000000 */   nop   
    .type varappear, @function
    .size varappear, .-varappear
    .end varappear
)"");

__asm__(R""(
.set noat
.set noreorder

glabel caninsertearly
    .ent caninsertearly
    # 00461AAC makelivranges
/* 0045E1F8 3C1C0FBC */  .cpload $t9
/* 0045E1FC 279CC098 */  
/* 0045E200 0399E021 */  
/* 0045E204 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0045E208 AFBE0038 */  sw    $fp, 0x38($sp)
/* 0045E20C 8F9E89E8 */  lw     $fp, %got(firstconstbit)($gp)
/* 0045E210 AFB70030 */  sw    $s7, 0x30($sp)
/* 0045E214 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045E218 8FC20000 */  lw    $v0, ($fp)
/* 0045E21C AFB10018 */  sw    $s1, 0x18($sp)
/* 0045E220 00A0B825 */  move  $s7, $a1
/* 0045E224 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0045E228 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0045E22C AFB6002C */  sw    $s6, 0x2c($sp)
/* 0045E230 AFB50028 */  sw    $s5, 0x28($sp)
/* 0045E234 AFB40024 */  sw    $s4, 0x24($sp)
/* 0045E238 AFB30020 */  sw    $s3, 0x20($sp)
/* 0045E23C AFB00014 */  sw    $s0, 0x14($sp)
/* 0045E240 AFA40040 */  sw    $a0, 0x40($sp)
/* 0045E244 24120001 */  li    $s2, 1
/* 0045E248 18400062 */  blez  $v0, .L0045E3D4
/* 0045E24C 00008825 */   move  $s1, $zero
/* 0045E250 00009900 */  sll   $s3, $zero, 4
/* 0045E254 24160080 */  li    $s6, 128
/* 0045E258 8F9589EC */  lw     $s5, %got(bittab)($gp)
/* 0045E25C 8F948CEC */  lw     $s4, %got(storeop)($gp)
/* 0045E260 8EEE0168 */  lw    $t6, 0x168($s7)
.L0045E264:
/* 0045E264 01D37821 */  addu  $t7, $t6, $s3
/* 0045E268 8DF8000C */  lw    $t8, 0xc($t7)
/* 0045E26C 8DF90008 */  lw    $t9, 8($t7)
/* 0045E270 8DE90004 */  lw    $t1, 4($t7)
/* 0045E274 8DEB0000 */  lw    $t3, ($t7)
/* 0045E278 03194025 */  or    $t0, $t8, $t9
/* 0045E27C 01095025 */  or    $t2, $t0, $t1
/* 0045E280 014B6025 */  or    $t4, $t2, $t3
/* 0045E284 15800003 */  bnez  $t4, .L0045E294
/* 0045E288 00000000 */   nop   
/* 0045E28C 1000004B */  b     .L0045E3BC
/* 0045E290 26310080 */   addiu $s1, $s1, 0x80
.L0045E294:
/* 0045E294 12400049 */  beqz  $s2, .L0045E3BC
/* 0045E298 00008025 */   move  $s0, $zero
/* 0045E29C 0222082A */  slt   $at, $s1, $v0
/* 0045E2A0 10200046 */  beqz  $at, .L0045E3BC
/* 0045E2A4 2E0D0080 */   sltiu $t5, $s0, 0x80
.L0045E2A8:
/* 0045E2A8 11A00009 */  beqz  $t5, .L0045E2D0
/* 0045E2AC 00000000 */   nop   
/* 0045E2B0 8EEE0168 */  lw    $t6, 0x168($s7)
/* 0045E2B4 0010C943 */  sra   $t9, $s0, 5
/* 0045E2B8 00194080 */  sll   $t0, $t9, 2
/* 0045E2BC 01D3C021 */  addu  $t8, $t6, $s3
/* 0045E2C0 03084821 */  addu  $t1, $t8, $t0
/* 0045E2C4 8D2F0000 */  lw    $t7, ($t1)
/* 0045E2C8 020F5004 */  sllv  $t2, $t7, $s0
/* 0045E2CC 294D0000 */  slti  $t5, $t2, 0
.L0045E2D0:
/* 0045E2D0 51A00032 */  beql  $t5, $zero, .L0045E39C
/* 0045E2D4 26100001 */   addiu $s0, $s0, 1
/* 0045E2D8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045E2DC 02202025 */  move  $a0, $s1
/* 0045E2E0 02802825 */  move  $a1, $s4
/* 0045E2E4 0320F809 */  jalr  $t9
/* 0045E2E8 00000000 */   nop   
/* 0045E2EC 1040002A */  beqz  $v0, .L0045E398
/* 0045E2F0 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045E2F4 8EAC0000 */  lw    $t4, ($s5)
/* 0045E2F8 001170C0 */  sll   $t6, $s1, 3
/* 0045E2FC 018EC821 */  addu  $t9, $t4, $t6
/* 0045E300 8F220000 */  lw    $v0, ($t9)
/* 0045E304 90430010 */  lbu   $v1, 0x10($v0)
/* 0045E308 2463FFE0 */  addiu $v1, $v1, -0x20
/* 0045E30C 2C780080 */  sltiu $t8, $v1, 0x80
/* 0045E310 13000009 */  beqz  $t8, .L0045E338
/* 0045E314 2C6E0060 */   sltiu $t6, $v1, 0x60
/* 0045E318 8F8F8044 */  lw    $t7, %got(D_10010DE4)($gp)
/* 0045E31C 00034143 */  sra   $t0, $v1, 5
/* 0045E320 00084880 */  sll   $t1, $t0, 2
/* 0045E324 25EF0DE4 */  addiu $t7, %lo(D_10010DE4) # addiu $t7, $t7, 0xde4
/* 0045E328 01E95021 */  addu  $t2, $t7, $t1
/* 0045E32C 8D4B0000 */  lw    $t3, ($t2)
/* 0045E330 006B6804 */  sllv  $t5, $t3, $v1
/* 0045E334 29B80000 */  slti  $t8, $t5, 0
.L0045E338:
/* 0045E338 13000003 */  beqz  $t8, .L0045E348
/* 0045E33C 00000000 */   nop   
/* 0045E340 10000015 */  b     .L0045E398
/* 0045E344 00009025 */   move  $s2, $zero
.L0045E348:
/* 0045E348 11C00009 */  beqz  $t6, .L0045E370
/* 0045E34C 00000000 */   nop   
/* 0045E350 8F8F8044 */  lw    $t7, %got(D_10010DD8)($gp)
/* 0045E354 0003C943 */  sra   $t9, $v1, 5
/* 0045E358 00194080 */  sll   $t0, $t9, 2
/* 0045E35C 25EF0DD8 */  addiu $t7, %lo(D_10010DD8) # addiu $t7, $t7, 0xdd8
/* 0045E360 01E84821 */  addu  $t1, $t7, $t0
/* 0045E364 8D2A0000 */  lw    $t2, ($t1)
/* 0045E368 006A5804 */  sllv  $t3, $t2, $v1
/* 0045E36C 296E0000 */  slti  $t6, $t3, 0
.L0045E370:
/* 0045E370 51C0000A */  beql  $t6, $zero, .L0045E39C
/* 0045E374 26100001 */   addiu $s0, $s0, 1
/* 0045E378 8F9984C4 */  lw    $t9, %call16(varappear)($gp)
/* 0045E37C 8C440014 */  lw    $a0, 0x14($v0)
/* 0045E380 8FA50040 */  lw    $a1, 0x40($sp)
/* 0045E384 0320F809 */  jalr  $t9
/* 0045E388 00000000 */   nop   
/* 0045E38C 10400002 */  beqz  $v0, .L0045E398
/* 0045E390 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045E394 00009025 */  move  $s2, $zero
.L0045E398:
/* 0045E398 26100001 */  addiu $s0, $s0, 1
.L0045E39C:
/* 0045E39C 12400007 */  beqz  $s2, .L0045E3BC
/* 0045E3A0 26310001 */   addiu $s1, $s1, 1
/* 0045E3A4 8FCC0000 */  lw    $t4, ($fp)
/* 0045E3A8 022C082A */  slt   $at, $s1, $t4
/* 0045E3AC 10200003 */  beqz  $at, .L0045E3BC
/* 0045E3B0 00000000 */   nop   
/* 0045E3B4 5616FFBC */  bnel  $s0, $s6, .L0045E2A8
/* 0045E3B8 2E0D0080 */   sltiu $t5, $s0, 0x80
.L0045E3BC:
/* 0045E3BC 12400005 */  beqz  $s2, .L0045E3D4
/* 0045E3C0 26730010 */   addiu $s3, $s3, 0x10
/* 0045E3C4 8FC20000 */  lw    $v0, ($fp)
/* 0045E3C8 0222082A */  slt   $at, $s1, $v0
/* 0045E3CC 5420FFA5 */  bnezl $at, .L0045E264
/* 0045E3D0 8EEE0168 */   lw    $t6, 0x168($s7)
.L0045E3D4:
/* 0045E3D4 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0045E3D8 02401025 */  move  $v0, $s2
/* 0045E3DC 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0045E3E0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045E3E4 8FB10018 */  lw    $s1, 0x18($sp)
/* 0045E3E8 8FB30020 */  lw    $s3, 0x20($sp)
/* 0045E3EC 8FB40024 */  lw    $s4, 0x24($sp)
/* 0045E3F0 8FB50028 */  lw    $s5, 0x28($sp)
/* 0045E3F4 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0045E3F8 8FB70030 */  lw    $s7, 0x30($sp)
/* 0045E3FC 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0045E400 03E00008 */  jr    $ra
/* 0045E404 27BD0040 */   addiu $sp, $sp, 0x40
    .type caninsertearly, @function
    .size caninsertearly, .-caninsertearly
    .end caninsertearly
)"");

__asm__(R""(
.set noat
.set noreorder

glabel sizeofsetexpr
    .ent sizeofsetexpr
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
/* 0045E408 90820010 */  lbu   $v0, 0x10($a0)
/* 0045E40C 24010002 */  li    $at, 2
/* 0045E410 2C4E00A0 */  sltiu $t6, $v0, 0xa0
/* 0045E414 51C0000A */  beql  $t6, $zero, .L0045E440
/* 0045E418 01C002B4 */   teq   $t6, $zero, 0xa
/* 0045E41C 8F998044 */  lw    $t9, %got(D_10010DF4)($gp)
/* 0045E420 00027943 */  sra   $t7, $v0, 5
/* 0045E424 000FC080 */  sll   $t8, $t7, 2
/* 0045E428 27390DF4 */  addiu $t9, %lo(D_10010DF4) # addiu $t9, $t9, 0xdf4
/* 0045E42C 03384021 */  addu  $t0, $t9, $t8
/* 0045E430 8D090000 */  lw    $t1, ($t0)
/* 0045E434 00495004 */  sllv  $t2, $t1, $v0
/* 0045E438 294E0000 */  slti  $t6, $t2, 0
/* 0045E43C 01C002B4 */  teq   $t6, $zero, 0xa
.L0045E440:
/* 0045E440 54410004 */  bnel  $v0, $at, .L0045E454
/* 0045E444 8C82001C */   lw    $v0, 0x1c($a0)
/* 0045E448 03E00008 */  jr    $ra
/* 0045E44C 94820024 */   lhu   $v0, 0x24($a0)

/* 0045E450 8C82001C */  lw    $v0, 0x1c($a0)
.L0045E454:
/* 0045E454 03E00008 */  jr    $ra
/* 0045E458 00000000 */   nop   
    .type sizeofsetexpr, @function
    .size sizeofsetexpr, .-sizeofsetexpr
    .end sizeofsetexpr
)"");

/*
0045E5C4 func_0045E5C4
*/
static void func_0045E45C(struct TrepImageThing *trep, bool is_equ_neq, struct Graphnode *node_shared) {
    struct livbb *sp3C;
    union Constant value;
    bool const_reg;

    if (do_const_in_reg) {
        if (trep->opc == Ulda) {
            const_reg = true;
        } else {
            value.intval = trep->unk18;
            if (is_equ_neq) {
                const_reg = constinreg(Jdt, is_equ_neq, value, 3);
            } else {
                const_reg = constinreg(Jdt, is_equ_neq, value, 1);
            }
        }

        if (const_reg) {
            trep->unk28->bitpos = newbit(trep->unk28, NULL);
            formlivbb(trep->unk28, node_shared, &sp3C);
            if (outofmem) {
                return;
            }

            sp3C->count++;
            if (sp3C->count == 1) {
                setbit(&node_shared->bvs.stage2.loclive, trep->unk28->bitpos);
            }
        }
    }
}

/*
0045E5C4 func_0045E5C4
00461640 func_00461640
00461AAC makelivranges
*/
static void func_0045E5C4(struct Expression *expr, unsigned char arg1, struct Graphnode *node_shared, struct livbb **livbb_shared) {
    struct livbb *livbb_saved;
    int phi_s1;
    struct IChain *phi_a3;

    *livbb_shared = NULL;
    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case isconst:
            if (constinreg(expr->datatype, arg1, expr->data.isconst.number, arg1)) {
                if (expr->ichain->bitpos == 0xFFFF) {
                    expr->ichain->bitpos = newbit(expr->ichain, NULL);
                }

                formlivbb(expr->ichain, node_shared, livbb_shared);
                if (outofmem) {
                    return;
                }

                (*livbb_shared)->count++;
                if ((*livbb_shared)->count == 1) {
                    setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                }
            }
            return;

        case islda:
            if (ldainreg(expr->data.islda_isilda.address.memtype, expr->data.islda_isilda.offset, arg1)) {
                if (expr->ichain->bitpos == 0xFFFF) {
                    expr->ichain->bitpos = newbit(expr->ichain, NULL);
                }

                formlivbb(expr->ichain, node_shared, livbb_shared);
                if (outofmem) {
                    return;
                }

                (*livbb_shared)->count++;
                if ((*livbb_shared)->count == 1) {
                    setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                }
            }
            return;

        case isvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_0045E5C4(expr->data.isvar_issvar.copy, arg1, node_shared, livbb_shared);
            }
            return;

        case isilda:
            if (expr->unk4 == 0) {
                if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.region)) {
                    if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert) ||
                            (expr->data.islda_isilda.outer_stack->type == issvar &&
                             expr->data.islda_isilda.outer_stack->unk2 &&
                             !bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                        expr->unk4 = 1;
                    } else {
                        expr->unk4 = 5;
                        setbit(&node_shared->bvs.stage1.u.scm.region, expr->ichain->bitpos);
                        setbit(&coloreditems, expr->ichain->bitpos);
                    }
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.delete) &&
                        (expr->data.islda_isilda.outer_stack->type != issvar ||
                         expr->data.islda_isilda.outer_stack->unk3 ||
                         bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                    expr->unk4 = 2;
                    expr->unk5 = 7;
                } else if (expr->data.islda_isilda.outer_stack->type == issvar &&
                        expr->data.islda_isilda.outer_stack->unk2 &&
                        !bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand)) {
                    expr->unk4 = 4;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.source)) {
                    expr->unk4 = 3;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert)) {
                    expr->unk4 = 5;
                } else {
                    expr->unk4 = 4;
                }
            }

            if (expr->unk5 == 7) {
                formlivbb(expr->ichain, node_shared, livbb_shared);
                if (outofmem) {
                    return;
                }

                (*livbb_shared)->count++;
                if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                    setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                }
            } else {
                func_0045E5C4(expr->data.islda_isilda.outer_stack, 3, node_shared, livbb_shared);

                if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->unk5 != 7)) {
                    formlivbb(expr->ichain, node_shared, livbb_shared);
                    if (outofmem == 0) {
                        (*livbb_shared)->unk12++;
                        setbit(&node_shared->bvs.stage2.locdef, expr->ichain->bitpos);
                        if ((*livbb_shared)->count == 0) {
                            (*livbb_shared)->firstisstr = true;
                        }
                        (*livbb_shared)->count++;
                        expr->unk5 = 7;
                    }
                } else {
                    *livbb_shared = NULL;
                }
            }
            return;

        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_0045E5C4(expr->data.isvar_issvar.copy, arg1, node_shared, livbb_shared);
                return;
            }

            if (expr->unk4 == 0) {
                if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.region)) {
                    if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert) ||
                            (expr->unk2 &&
                             !bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                        expr->unk4 = 1;
                    } else {
                        expr->unk4 = 5;
                        setbit(&node_shared->bvs.stage1.u.scm.region, expr->ichain->bitpos);
                        setbit(&coloreditems, expr->ichain->bitpos);
                    }
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.delete) &&
                        (expr->unk3 || bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                    expr->unk4 = 2;
                    expr->unk5 = 7;
                } else if (expr->unk2 && !bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand)) {
                    expr->unk4 = 4;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.source)) {
                    expr->unk4 = 3;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert)) {
                    expr->unk4 = 5;
                } else {
                    expr->unk4 = 4;
                }
            }

            if (expr->unk5 == 7) {
                if (((expr->datatype != Idt && expr->datatype != Kdt) || dwopcode)) {
                    formlivbb(expr->ichain, node_shared, livbb_shared);
                    if (outofmem) {
                        return;
                    }

                    (*livbb_shared)->count++;
                    if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                        setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                    }
                }
                return;
            }

            func_0045E5C4(expr->data.isvar_issvar.outer_stack, 3, node_shared, livbb_shared);
            if (((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->unk5 != 7)) &&
                    ((expr->datatype != Idt && expr->datatype != Kdt) || dwopcode)) {
                formlivbb(expr->ichain, node_shared, livbb_shared);
                if (outofmem) {
                    return;
                }

                (*livbb_shared)->unk12++;
                setbit(&node_shared->bvs.stage2.locdef, expr->ichain->bitpos);

                if ((*livbb_shared)->count == 0) {
                    (*livbb_shared)->firstisstr = 1;
                }
                (*livbb_shared)->count++;
                expr->unk5 = 7;
            } else {
                *livbb_shared = NULL;
            }
            return;

        case isop:
            if (expr->unk4 == 0) {
                if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.region)) {
                    if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert) ||
                            (!expr->data.isop.unk22 && !bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                        expr->unk4 = 1;
                    } else {
                        expr->unk4 = 5;
                        setbit(&node_shared->bvs.stage1.u.scm.region, expr->ichain->bitpos);
                        setbit(&coloreditems, expr->ichain->bitpos);
                    }
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.delete) &&
                        (expr->data.isop.unk21 || bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                    expr->unk4 = 2;
                    expr->unk5 = 7;
                } else if (!expr->data.isop.unk22 && !bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand)) {
                    expr->unk4 = 4;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.source)) {
                    expr->unk4 = 3;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert)) {
                    expr->unk4 = 5;
                } else {
                    expr->unk4 = 4;
                }
            }

            if (expr->unk5 == 7) {
                if (((expr->data.isop.datatype != Idt && expr->data.isop.datatype != Kdt) || dwopcode) &&
                        (expr->data.isop.datatype != Sdt || sizeofsetexpr(expr->ichain) <= int_reg_size)) {
                    formlivbb(expr->ichain, node_shared, livbb_shared);
                    if (outofmem) {
                        return;
                    }

                    (*livbb_shared)->count++;
                    if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                        setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                    }
                }
                return;
            }

            if (optab[expr->data.isop.opc].is_binary_op) {

                if ((expr->data.isop.opc == Uequ ||
                            expr->data.isop.opc == Ugeq ||
                            expr->data.isop.opc == Ugrt ||
                            expr->data.isop.opc == Uleq ||
                            expr->data.isop.opc == Ules ||
                            expr->data.isop.opc == Uneq) &&
                        (expr->data.isop.aux.unk38_trep->ichain2 != NULL || expr->data.isop.aux2.unk3C_trep->ichain2 != NULL)) {

                    if (expr->data.isop.aux.unk38_trep->ichain2 != NULL &&
                            ((expr->data.isop.aux.unk38_trep->ichain2->dtype != Idt && expr->data.isop.aux.unk38_trep->ichain2->dtype != Kdt) || dwopcode)) {
                        formlivbb(expr->data.isop.aux.unk38_trep->ichain2, node_shared, livbb_shared);
                        if (outofmem) {
                            return;
                        }

                        (*livbb_shared)->count++;
                        if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                            setbit(&node_shared->bvs.stage2.loclive, expr->data.isop.aux.unk38_trep->ichain2->bitpos);
                        }

                        if (expr->data.isop.op2->type == isconst) {
                            func_0045E45C(expr->data.isop.aux.unk38_trep, expr->data.isop.opc == Uequ || expr->data.isop.opc == Uneq, node_shared);
                        } else if ((expr->data.isop.aux2.unk3C_trep->ichain->dtype != Idt && expr->data.isop.aux2.unk3C_trep->ichain->dtype != Kdt) || dwopcode) {
                            formlivbb(expr->data.isop.aux2.unk3C_trep->ichain, node_shared, livbb_shared);
                            if (outofmem) {
                                return;
                            }

                            (*livbb_shared)->count++;
                            TRAP_IF((*livbb_shared)->unk12 != 0);
                            setbit(&node_shared->bvs.stage2.loclive, expr->data.isop.aux2.unk3C_trep->ichain->bitpos);
                        }
                    }


                    if (expr->data.isop.aux2.unk3C_trep->ichain2 != NULL &&
                            ((expr->data.isop.aux2.unk3C_trep->ichain2->dtype != Idt && expr->data.isop.aux2.unk3C_trep->ichain2->dtype != Kdt) || dwopcode)) {
                        formlivbb(expr->data.isop.aux2.unk3C_trep->ichain2, node_shared, livbb_shared);
                        if (outofmem) {
                            return;
                        }

                        (*livbb_shared)->count++;
                        if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                            setbit(&node_shared->bvs.stage2.loclive, expr->data.isop.aux2.unk3C_trep->ichain2->bitpos);
                        }

                        if (expr->data.isop.op1->type == isconst) {
                            func_0045E45C(expr->data.isop.aux2.unk3C_trep, expr->data.isop.opc == Uequ || expr->data.isop.opc == Uneq, node_shared);
                        } else if ((expr->data.isop.aux.unk38_trep->ichain->dtype != Idt && expr->data.isop.aux.unk38_trep->ichain->dtype != Kdt) || dwopcode) {
                            formlivbb(expr->data.isop.aux.unk38_trep->ichain, node_shared, livbb_shared);
                            if (outofmem) {
                                return;
                            }

                            (*livbb_shared)->count++;
                            TRAP_IF((*livbb_shared)->unk12 != 0);
                            setbit(&node_shared->bvs.stage2.loclive, expr->data.isop.aux.unk38_trep->ichain->bitpos);
                        }
                    }
                    *livbb_shared = NULL;
                } else {
                    switch (expr->data.isop.opc) {
                        case Uequ:
                        case Uneq:
                            phi_s1 = 3;
                            break;

                        case Uand:
                        case Uior:
                        case Uxor:
                            phi_s1 = 2;
                            break;

                        case Uadd:
                        case Ugeq:
                        case Ugrt:
                        case Uleq:
                        case Ules:
                        case Usub:
                            phi_s1 = 1;
                            break;

                        case Udiv:
                        case Umod:
                        case Umpy:
                        case Urem:
                            phi_s1 = 5;
                            break;

                        default:
                            phi_s1 = 0;
                            break;
                    }

                    if (expr->data.isop.opc == Usub) {
                        func_0045E5C4(expr->data.isop.op1, 3, node_shared, livbb_shared);
                    } else {
                        func_0045E5C4(expr->data.isop.op1, phi_s1, node_shared, livbb_shared);
                    }
                    func_0045E5C4(expr->data.isop.op2, phi_s1, node_shared, livbb_shared);
                }
            } else {
                if (expr->data.isop.opc == Uilod ||
                        expr->data.isop.opc == Uirlv ||
                        expr->data.isop.opc == Uildv ||
                        expr->data.isop.opc == Uirld) {
                    func_0045E5C4(expr->data.isop.op1, 3, node_shared, livbb_shared);
                } else {
                    func_0045E5C4(expr->data.isop.op1, 0, node_shared, livbb_shared);
                }
            }

            if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->unk5 != 7)) {
                expr->unk5 = 7;
                if (expr->data.isop.datatype == Sdt && int_reg_size < sizeofsetexpr(expr->ichain)) {
                    *livbb_shared = NULL;
                    return;
                }

                if ((expr->data.isop.datatype != Idt && expr->data.isop.datatype != Kdt) || dwopcode) {
                    formlivbb(expr->ichain, node_shared, livbb_shared);
                    if (outofmem) {
                        return;
                    }

                    (*livbb_shared)->unk12++;
                    setbit(&node_shared->bvs.stage2.locdef, expr->ichain->bitpos);
                    if ((*livbb_shared)->count == 0) {
                        (*livbb_shared)->firstisstr = true;
                    }

                    (*livbb_shared)->count++;
                } else {
                    *livbb_shared = NULL;
                }

                if ((expr->data.isop.opc != Uadj &&
                            expr->data.isop.opc != Ucg2 &&
                            expr->data.isop.opc != Ucvt &&
                            expr->data.isop.opc != Urnd &&
                            expr->data.isop.opc != Utyp &&
                            expr->data.isop.opc != Uidx &&
                            expr->data.isop.opc != Uinn &&
                            expr->data.isop.opc != Uiequ &&
                            expr->data.isop.opc != Uineq &&
                            expr->data.isop.opc != Uigeq &&
                            expr->data.isop.opc != Uigrt &&
                            expr->data.isop.opc != Uileq &&
                            expr->data.isop.opc != Uiles &&
                            expr->data.isop.opc != Uilod &&
                            expr->data.isop.opc != Uildv &&
                            expr->data.isop.opc != Uirld &&
                            expr->data.isop.opc != Uirlv) &&
                        expr->ichain->isop.unk24_cand != NULL && expr->ichain->isop.unk24_cand != nota_candof) {

                    if (expr->ichain->isop.unk24_cand->unk18 == 0) {
                        phi_a3 = alloc_new(sizeof (struct IChain), &perm_heap);
                        *phi_a3 = *expr->ichain->isop.unk24_cand->ichain;

                        phi_a3->isop.opc = Ucg1;
                        expr->ichain->isop.unk24_cand->unk18 = newbit(phi_a3, NULL);
                        phi_a3->bitpos = expr->ichain->isop.unk24_cand->unk18;

                        if ((tempdisp & 3) != 0) {
                            tempdisp = (tempdisp - (tempdisp & 3)) + 4;
                        }

                        phi_a3->isop.temploc = alloc_new(0x14, &perm_heap);
                        if (!stack_reversed) {
                            tempdisp += 4;
                            phi_a3->isop.temploc->disp = -tempdisp;
                        } else {
                            phi_a3->isop.temploc->disp = tempdisp;
                            tempdisp += 4;
                        }
                    } else {
                        phi_a3 = bittab[expr->ichain->isop.unk24_cand->unk18].ichain;
                    }

                    if ((phi_a3->isop.datatype != Idt && phi_a3->isop.datatype != Kdt) || dwopcode) {
                        livbb_saved = *livbb_shared;
                        formlivbb(expr->ichain->isop.unk24_cand->ichain_unk10, node_shared, livbb_shared);
                        if ((*livbb_shared)->count == 0 && (*livbb_shared)->unk12 == 0) {
                            setbit(&node_shared->bvs.stage2.loclive, expr->ichain->isop.unk24_cand->ichain_unk10->bitpos);
                        }

                        (*livbb_shared)->count++;
                        formlivbb(phi_a3, node_shared, livbb_shared);
                        (*livbb_shared)->unk12++;

                        setbit(&node_shared->bvs.stage2.locdef, expr->ichain->isop.unk24_cand->unk18);
                        if ((*livbb_shared)->count == 0) {
                            (*livbb_shared)->firstisstr = 1;
                        }

                        *livbb_shared = livbb_saved;
                    }
                }
            } else {
                *livbb_shared = NULL;
            }
            return;

        case isrconst:
            break;

        case dumped:
            caseerror(1, 335, "uoptreg1.p", 0xA);
            break;
    }
}

/*
0045FBB4 func_0045FBB4
00461AAC makelivranges
*/
static bool func_0045FBB4(struct IChain *ichain, int arg1, int arg2, struct Graphnode *node_shared, struct livbb **livbb_shared) {
    void *sp54;
    bool sp53;
    bool sp52; // a3
    bool sp51; // t0
    bool sp4F; // t1
    unsigned short hash; //sp48
    struct Expression *sp44;
    struct IChain *sp40;
    struct livbb **sp24;
    struct Expression *expr;
    bool phi_t1;
    bool phi_t0;
    bool phi_a3;

    //sp54 = MIPS2C_ERROR(Read from unset register $v0);
    //temp_t6 = ichain->type - 1;
    switch (ichain->type) { // unable to parse jump table
        case isconst:
            sp53 = 1;
            break;

        case isrconst:
            sp53 = 1;
            break;

        case islda:
            sp53 = 1;
            break;

        case isvar:
            hash = isvarhash(ichain->isvar_issvar.location);
            expr = table[hash];
            phi_t1 = true;
            phi_t0 = false;
            if (arg2 != 0) {
                while (!phi_t0 && expr != NULL) {
                    if (expr->type == isvar) {
                        sp4F = phi_t1;
                        sp51 = phi_t0;
                        sp44 = expr;
                        if (addreq(expr->data.isvar_issvar.location, ichain->isvar_issvar.location) && expr->graphnode == node_shared) {
                            phi_t0 = !expr->unk2;
                            if (expr->data.isvar_issvar.assignment != NULL) {
                                phi_t1 = false;
                            }
                        }
                    }

                    if (!phi_t0) {
                        expr = expr->next;
                    }
                }

                if (!phi_t0 && phi_t1 && ichain->isvar_issvar.unk19) {
                    if (node_shared->predecessors != NULL && node_shared->predecessors->next == NULL) {
                        expr = table[hash];
                        while (!phi_t0 && expr != NULL) {
                            if (expr->type == isvar) {
                                sp51 = phi_t0;
                                sp44 = expr;
                                if (addreq(expr->data.isvar_issvar.location, ichain->isvar_issvar.location) && expr->graphnode == node_shared->predecessors->graphnode) {
                                    phi_t0 = !expr->unk2;
                                }
                            }
                            if (!phi_t0) {
                                expr = expr->next;
                            }
                        }
                    }
                }
            }

            phi_a3 = false;
            if (phi_t0 && ichain->isvar_issvar.location.memtype != Rmt && expr->data.isvar_issvar.assignment != NULL) {
                if (expr->data.isvar_issvar.assigned_value != NULL &&
                        (expr->data.isvar_issvar.assigned_value->type == islda ||
                         (expr->data.isvar_issvar.assigned_value->type == isconst &&
                          (expr->data.isvar_issvar.assigned_value->datatype == Adt ||
                           expr->data.isvar_issvar.assigned_value->datatype == Hdt ||
                           expr->data.isvar_issvar.assigned_value->datatype == Jdt ||
                           expr->data.isvar_issvar.assigned_value->datatype == Ldt)))) {
                    phi_a3 = true;
                }
            }

            sp53 = phi_a3;
            sp52 = phi_a3;
            if (phi_a3 == 0 && !ichain->isvar_issvar.unk1A && !bvectin(ichain->bitpos, &node_shared->indiracc) &&
                    ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode || ichain->isvar_issvar.location.memtype == Rmt)) {
                formlivbb(ichain, node_shared, livbb_shared);
                if (outofmem) {
                    break;
                }

                (*livbb_shared)->count++;
                if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                    setbit(&node_shared->bvs.stage2.loclive, ichain->bitpos);
                }

                if (graphhead == node_shared && (*livbb_shared)->firstisstr == 0) {
                    if (bvectin0(ichain->bitpos, &coloredparms)) {
                        if (!outonly_parm) {
                            (*livbb_shared)->firstisstr = true;
                        }
                        if ((!allcallersave || ichain->isvar_issvar.location.memtype == Mmt) &&
                                (*livbb_shared)->unk13 == 0 && doprecolor) {
                            if (passedinreg(ichain, offsetpassedbyint)) {
                                passedcl = regclassof(ichain);
                                if (ichain->isvar_issvar.location.memtype == Mmt) {
                                    (*livbb_shared)->unk13 = 1;
                                } else {
                                    (*livbb_shared)->unk13 = firstparmreg[passedcl - 1] + ichain->isvar_issvar.location.addr / 4;
                                }

                                if (passedcl == 2 && ichain->isvar_issvar.location.addr) {
                                    (*livbb_shared)->unk13 = firstparmreg[passedcl - 1] + 1;
                                }

                                SET_ADD(node_shared->regsused[passedcl -1], (*livbb_shared)->unk13);
                            }
                        }
                    }
                }
            }

            if (phi_a3) {
                setbit(&node_shared->bvs.stage2.unk16C, ichain->bitpos);
            }
            break;

        case isilda:
        case issvar:
            if (!bvectin(ichain->bitpos, &node_shared->bvs.stage2.unk164)) {
                if (arg1) {
                    noop = false;
                } else {
                    if ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode) {
                        formlivbb(ichain, node_shared, livbb_shared);
                        if (outofmem) {
                            break;
                        } 

                        (*livbb_shared)->count++;
                        if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                            setbit(&node_shared->bvs.stage2.loclive, ichain->bitpos);
                        }
                    } 
                    sp53 = false;
                }
                break;
            }

            if (!arg1 && bvectin(ichain->bitpos, &node_shared->bvs.stage2.unk154)) {
                if ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode) {
                    formlivbb(ichain, node_shared, livbb_shared);
                    if (outofmem) {
                        break;
                    } 

                    (*livbb_shared)->count++;
                        if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                            setbit(&node_shared->bvs.stage2.loclive, ichain->bitpos);
                        }
                }
                sp53 = false;
                break;
            }

            if (ichain->type == isilda) {
                func_0045FBB4(ichain->islda_isilda.outer_stack_ichain, 0, arg2, node_shared, livbb_shared);
            } else {
                func_0045FBB4(ichain->isvar_issvar.outer_stack_ichain, 0, arg2, node_shared, livbb_shared);
            }

            sp53 = false;
            if (arg1 && ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode)) {
                formlivbb(ichain, node_shared, livbb_shared);
                if (outofmem != 0) {
                    break;
                }

                (*livbb_shared)->unk12++;
                setbit(&node_shared->bvs.stage2.locdef, ichain->bitpos);
                if ((*livbb_shared)->count == 0) {
                    (*livbb_shared)->firstisstr = true;
                }
            }
            break;

        case isop:
            if (ichain->isop.opc == Uisst || ichain->isop.opc == Ustr) {
                if (ichain->isop.opc == Uisst) {
                    func_0045FBB4(ichain->isop.op1->isvar_issvar.outer_stack_ichain, 0, arg2, node_shared, livbb_shared);
                }
                func_0045FBB4(ichain->isop.op2, 0, arg2, node_shared, livbb_shared);
                if (ichain->isop.op1->isvar_issvar.unk1A == 0 && !bvectin(ichain->isop.op1->bitpos, &node_shared->indiracc) &&
                        ((ichain->isop.op1->dtype != Idt && ichain->isop.op1->dtype != Kdt) || dwopcode)) {
                    formlivbb(ichain->isop.op1, node_shared, livbb_shared);
                    if (outofmem) {
                        break;
                    }

                    (*livbb_shared)->unk12++;
                    setbit(&node_shared->bvs.stage2.locdef, ichain->isop.op1->bitpos);
                    if ((*livbb_shared)->count == 0) {
                        (*livbb_shared)->firstisstr = true;
                    }
                    
                    if (node_shared->stat_tail->opc == Ucup ||
                            node_shared->stat_tail->opc == Uicuf ||
                            node_shared->stat_tail->opc == Ucia) {
                        (*livbb_shared)->unk13 = 0;
                    }
                }
                sp53 = 0;
                break;
            }
            
            if (ichain->isop.opc == Uistr ||
                    ichain->isop.opc == Uistv ||
                    ichain->isop.opc == Umov ||
                    ichain->isop.opc == Umovv ||
                    ichain->isop.opc == Utpeq ||
                    ichain->isop.opc == Utpge ||
                    ichain->isop.opc == Utpgt ||
                    ichain->isop.opc == Utple ||
                    ichain->isop.opc == Utplt ||
                    ichain->isop.opc == Utpne ||
                    ichain->isop.opc == Uirst ||
                    ichain->isop.opc == Uirsv) {
                func_0045FBB4(ichain->isop.op1, 0, arg2, node_shared, livbb_shared);
                func_0045FBB4(ichain->isop.op2, 0, arg2, node_shared, livbb_shared);
                sp53 = 0;
                break;
            }
            if (ichain->isop.opc == Uchkt) {
                func_0045FBB4(ichain->isop.op1, 0, arg2, node_shared, livbb_shared);
                sp53 = 0;
                break;
            }
            if (!bvectin(ichain->bitpos, &node_shared->bvs.stage2.unk164)) {
                if (arg1 != 0) {
                    noop = 0;
                    break;
                }
                sp53 = 0;
                
                if ((ichain->isop.datatype != Sdt || int_reg_size < sizeofsetexpr(ichain)) &&
                        ((ichain->isop.datatype != Idt && ichain->isop.datatype != Kdt) || dwopcode)) {
                    formlivbb(ichain, node_shared, livbb_shared);
                    if (outofmem) {
                        break;
                    }

                    (*livbb_shared)->count++;
                    if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                        setbit(&node_shared->bvs.stage2.loclive, ichain->bitpos);
                    }
                }
                break;
            }
            if (arg1 == 0 && bvectin(ichain->bitpos, &node_shared->bvs.stage2.unk154)) {
                if (!bvectin(ichain->bitpos, &node_shared->bvs.stage2.unk16C)) {
                    if ((ichain->isop.datatype != Sdt || int_reg_size < sizeofsetexpr(ichain)) &&
                            ((ichain->isop.datatype != Idt && ichain->isop.datatype != Kdt) || dwopcode)) {
                        sp53 = 0;
                        formlivbb(ichain, node_shared, livbb_shared);
                        if (outofmem != 0) {
                            break;
                        }

                        (*livbb_shared)->count++;
                        if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                            setbit(&node_shared->bvs.stage2.loclive, ichain->bitpos);
                        }
                    }
                } else {
                    sp53 = 1;
                }
                break;
            }
            if (mipsflag != 3 && bvectin(ichain->bitpos, &old)) {
                setbit(&node_shared->bvs.stage2.unk154, ichain->bitpos);
                setbit(&node_shared->bvs.stage2.unk15C, ichain->bitpos);
                setbit(&coloreditems, ichain->bitpos);
                if ((ichain->isop.datatype != Idt && ichain->isop.datatype != Kdt) || dwopcode) {
                    formlivbb(ichain, node_shared, livbb_shared);
                    if (outofmem) {
                        break;
                    }

                    (*livbb_shared)->unk12++;
                    setbit(&node_shared->bvs.stage2.locdef, ichain->bitpos);
                    if ((*livbb_shared)->count == 0) {
                        (*livbb_shared)->firstisstr = 1;
                    }
                    (*livbb_shared)->count++;
                }
                sp53 = 0;
                break;
            }

            sp52 = func_0045FBB4(ichain->isop.op1, 0, arg2, node_shared, livbb_shared);
            if (optab[ichain->isop.opc].is_binary_op) {
                sp52 = func_0045FBB4(ichain->isop.op2, 0, arg2, node_shared, livbb_shared) && sp52;
                if (sp52) {
                    switch (ichain->isop.opc) {
                        case Uadd:
                        case Uand:
                        case Udiv:
                        case Uequ:
                        case Ugeq:
                        case Ugrt:
                        case Uior:
                        case Uleq:
                        case Ules:
                        case Umax:
                        case Umin:
                        case Umod:
                        case Umpy:
                        case Uneq:
                        case Urem:
                        case Usub:
                            sp52 = ichain->dtype == Adt || ichain->dtype == Hdt || ichain->dtype == Jdt || ichain->dtype == Ldt;
                            break;

                        case Uixa:
                            sp52 = ichain->dtype == Adt || ichain->dtype == Hdt || ichain->dtype == Jdt || ichain->dtype == Ldt;
                            break;

                        default:
                            sp52 = false;
                            break;
                    }
                }
            } else {
                if (ichain->isop.opc == Ucg2) {
                    if (ichain->isop.op2 != NULL) {
                        func_0045FBB4(ichain->isop.op2, 0, arg2, node_shared, livbb_shared);
                    }
                }

                if (sp52) {
                    switch (ichain->isop.opc) {
                        case Uabs:
                        case Uchkh:
                        case Uchkl:
                        case Ucvtl:
                        case Udec:
                        case Uinc:
                        case Uneg:
                        case Unot:
                        case Uodd:
                        case Usqr:
                            sp52 = ichain->dtype == Adt || ichain->dtype == Hdt || ichain->dtype == Jdt || ichain->dtype == Ldt;
                            break;

                        case Ucvt:
                            sp52 = (ichain->dtype == Adt || ichain->dtype == Hdt || ichain->dtype == Jdt || ichain->dtype == Ldt) &&
                                (ichain->isop.cvtfrom == Adt || ichain->isop.cvtfrom == Hdt || ichain->isop.cvtfrom == Jdt || ichain->isop.cvtfrom == Ldt) &&
                                (ichain->isop.op1->type != islda);
                            break;

                        default:
                            sp52 = false;
                    }
                }
            }

            sp53 = sp52;
            if ((ichain->isop.datatype == Sdt) && int_reg_size < sizeofsetexpr(ichain)) {
                break;
            }
            if (arg1 == 0 && sp52 == 0 && (ichain->isop.unk24_cand == 0 || ichain->isop.unk24_cand == nota_candof)) {
                setbit(&old, ichain->bitpos); // looks like a hack
            }
            if (sp52 != 0) {
                setbit(&node_shared->bvs.stage2.unk16C, ichain->bitpos);
            }
            if (arg1 != 0) {
                if ((ichain->isop.datatype != Idt && ichain->isop.datatype != Kdt) || dwopcode) {
                    node_shared = node_shared;
                    formlivbb(ichain, node_shared, livbb_shared);
                    if (outofmem != 0) {
                        break;
                    }
                    (*livbb_shared)->unk12++;
                    setbit(&node_shared->bvs.stage2.locdef, ichain->bitpos);
                    if ((*livbb_shared)->count == 0) {
                        (*livbb_shared)->firstisstr = 1;
                    }
                }

                if (ichain->isop.opc != Uadj &&
                        ichain->isop.opc != Ucg2 &&
                        ichain->isop.opc != Ucvt &&
                        ichain->isop.opc != Uiequ &&
                        ichain->isop.opc != Uigeq &&
                        ichain->isop.opc != Uigrt &&
                        ichain->isop.opc != Uildv &&
                        ichain->isop.opc != Uileq &&
                        ichain->isop.opc != Uiles &&
                        ichain->isop.opc != Uilod &&
                        ichain->isop.opc != Uineq &&
                        ichain->isop.opc != Uinn &&
                        ichain->isop.opc != Urnd &&
                        ichain->isop.opc != Utyp &&
                        ichain->isop.opc != Uirld &&
                        ichain->isop.opc != Uirlv) {
                    if (ichain->isop.unk24_cand != NULL && ichain->isop.unk24_cand != nota_candof) {
                        if (ichain->isop.unk24_cand->unk18 == 0) {
                            sp40 = alloc_new(sizeof (struct IChain), &perm_heap);
                            *sp40 = *ichain->isop.unk24_cand->ichain;
                            
                            sp40->isop.opc = Ucg1;
                            ichain->isop.unk24_cand->unk18 = newbit(sp40, NULL);
                            sp40->bitpos = ichain->isop.unk24_cand->unk18;
                            if ((tempdisp & 3) != 0) {
                                tempdisp = (tempdisp - (tempdisp & 3)) + 4;
                            }
                            sp40->isop.temploc = alloc_new(0x14, &perm_heap);
                            if (stack_reversed == 0) {
                                tempdisp += 4;
                                sp40->isop.temploc->disp = -tempdisp;
                            } else {
                                sp40->isop.temploc->disp = tempdisp;
                                tempdisp += 4;
                            }
                        } else {
                            sp40 = bittab[ichain->isop.unk24_cand->unk18].ichain;
                        }

                        if ((sp40->isop.datatype != Idt && sp40->isop.datatype != Kdt) || dwopcode) {
                            func_0045FBB4(ichain->isop.unk24_cand->ichain_unk10, 0, 0, node_shared, livbb_shared);
                            formlivbb(sp40, node_shared, livbb_shared);

                            (*livbb_shared)->unk12++;
                            setbit(&node_shared->bvs.stage2.locdef, ichain->isop.unk24_cand->unk18);

                            if ((*livbb_shared)->count == 0) {
                                (*livbb_shared)->firstisstr = true;
                            }
                        }
                    }
                }
            }
            break;

        default:
        case dumped:
            caseerror(1, 722, "uoptreg1.p", 10);
            break;
    }
    return sp53;
}

/*
00461084 func_00461084
0046123C func_0046123C
*/
static void func_00461084(struct IChain *ichain, struct Graphnode *node_shared) {
    struct livbb *sp40;

    switch (ichain->type) {
        case islda:
        case isconst:
            break;

        case isilda:
            func_00461084(ichain->islda_isilda.outer_stack_ichain, node_shared);
            break;

        case issvar:
            func_00461084(ichain->isvar_issvar.outer_stack_ichain, node_shared);
            break;

        case isvar:
            if ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode || ichain->isvar_issvar.location.memtype == Rmt) {
                formlivbb(ichain, node_shared, &sp40);
                if (outofmem) {
                    return;
                }
                sp40->count++;
                if (sp40->count == 1 && sp40->unk12 == 0) {
                    setbit(&node_shared->bvs.stage2.loclive, ichain->bitpos);
                }
            }
            return;

        case isop:
            if (optab[ichain->isop.opc].is_binary_op) {
                func_00461084(ichain->isop.op1, node_shared);
                func_00461084(ichain->isop.op2, node_shared);
            } else {
                func_00461084(ichain->isop.op1, node_shared);
            }
            break;

        default:
            caseerror(1, 1048, "uoptreg1.p", 10);
            break;
    }
}

/*
00461AAC makelivranges
*/
static void func_0046123C(struct Statement *stat, struct Graphnode *node_shared) {
    struct livbb *sp68;
    int sp58;
    bool phi_s6;
    struct ExpSourceThing *phi_s2;
    struct IChain *phi_s1;

    if (stat->u.store.u.str.unk2C == NULL) {
        return;
    }

    phi_s2 = stat->u.store.u.str.unk2C;
    phi_s6 = mipsflag == 3 && stat->graphnode->loop != NULL;
    if (phi_s6) {
        sp58 = stat->graphnode->loop->loopno;
        phi_s6 = looptab[stat->graphnode->loop->loopno].unk9 && looptab[stat->graphnode->loop->loopno].unk4 != NULL;
    }

    while (phi_s2 != NULL) {
        if (!phi_s6 || !check_ix_candidate(phi_s2->ichain, sp58)) {
            if ((phi_s2->ichain->isop.datatype != Idt && phi_s2->ichain->isop.datatype != Kdt) || dwopcode) {
                formlivbb(phi_s2->ichain, node_shared, &sp68);
                if (outofmem) {
                    return;
                }
                sp68->count += 1;
                if (phi_s6 && check_ix_source(phi_s2->ichain, sp58)) {
                    sp68->count += 2;
                }
                if (sp68->count == 1 && sp68->unk12 == 0) {
                    setbit(&node_shared->bvs.stage2.loclive, phi_s2->ichain->bitpos);
                }
                sp68->unk12 += 1;
                setbit(&node_shared->bvs.stage2.locdef, phi_s2->ichain->bitpos);
            } 

            if (phi_s2->ichain_unk10 != NULL) {
                if (phi_s2->ichain->isop.unk24_cand == NULL || phi_s2->ichain->isop.unk24_cand == nota_candof || node_shared->unkBb8) {
                    func_00461084(phi_s2->ichain_unk10, node_shared);
                } else {
                    if (phi_s2->unk18 == 0) {
                        phi_s1 = alloc_new(0x28, &perm_heap);
                        *phi_s1 = *phi_s2->ichain;

                        phi_s1->isop.opc = Ucg1;
                        phi_s2->unk18 = newbit(phi_s1, NULL);
                        phi_s1->bitpos = phi_s2->unk18;

                        if ((tempdisp & 3) != 0) {
                            tempdisp = (tempdisp - (tempdisp & 3)) + 4;
                        }

                        phi_s1->isop.temploc = alloc_new(0x14, &perm_heap);
                        if (!stack_reversed) {
                            tempdisp += 4;
                            phi_s1->isop.temploc->disp = -tempdisp;
                        } else {
                            phi_s1->isop.temploc->disp = tempdisp;
                            tempdisp += 4;
                        }
                    } else {
                        phi_s1 = bittab[phi_s2->unk18].ichain;
                    }

                    if ((phi_s1->isop.datatype != Idt && phi_s1->isop.datatype != Kdt) || dwopcode) {
                        formlivbb(phi_s1, node_shared, &sp68);
                        sp68->count++;
                        if (sp68->count == 1) {
                            setbit(&node_shared->bvs.stage2.loclive, phi_s1->bitpos);
                        }
                    }
                }
            }
        }

        phi_s2 = phi_s2->next;
    }
}

/*
00461AAC makelivranges
*/
static void func_00461640(struct Statement *stat, struct Graphnode *node_shared, struct livbb **livbb_shared) {
    struct livbb *sp50;
    struct RecurThing *recur;

    recur = stat->u.store.u.str.unk30;
    while (recur != NULL) {
        func_0045E5C4(recur->expr, 0, node_shared, livbb_shared);
        if ((recur->ichain->isop.datatype != Idt && recur->ichain->isop.datatype != Kdt) || dwopcode) {
            formlivbb(recur->ichain, node_shared, &sp50);
            if (outofmem) {
                return;
            }

            sp50->unk12 += 1;
            setbit(&node_shared->bvs.stage2.locdef, recur->ichain->bitpos);
            if (sp50->count == 0) {
                sp50->firstisstr = true;
            }
        } 

        recur = recur->next;
    }
}

/*
00461AAC makelivranges
*/
static void func_00461778(struct Graphnode *node, int reg, bool arg2) {
    struct livbb *bb;
    int regclass;

    if (!usingregoption) {
        if (!arg2 && node != graphhead && lang != LANG_ADA) {
            dbgerror(0x1F9B);
        }

        bb = node->unk30;
        while (reg != bb->unk13) {
            bb = bb->unkC;
        }
        bb->unk13 = 0;

        if (reg <= 23) {
            regclass = 1;
        } else {
            regclass = 2;
        }

        SET_ADD(node->regsused[regclass - 1], reg);
    }
}

/*
00461AAC makelivranges
*/
static int func_00461880(int loc, struct RegstakenParregs *regstaken_parregs) {
    bool found;
    int reg;

    found = false;
    reg = 1;
    while (!found && reg < 36) {
        if (regstaken_parregs->parregs[reg - 1] == loc) {
            found = true;
        } else {
            reg++;
        }
    }

    if (found) {
        return reg;
    } else {
        return 0;
    }
}

/*
00461AAC makelivranges
   register class for datatype
*/
static int func_004618D4(struct Expression *var) {
    Datatype dtype;

    if (var->type == isop) {
        dtype = var->data.isop.datatype;
    } else {
        dtype = var->datatype;
    }

    if (dtype == Qdt || dtype == Rdt) {
        return 2;
    } else {
        return 1;
    }
}

/*
00461AAC makelivranges
    is_longlong
*/
static bool func_00461920(struct Expression *expr) {
    Datatype dtype;

    if (expr->type == isop) {
        dtype = expr->data.isop.datatype;
    } else {
        dtype = expr->datatype;
    }

    return dtype == Idt || dtype == Kdt;
}

/*
00461AAC makelivranges
*/
static bool func_0046195C(struct Statement *stat) {
    stat = stat->next;
    while (stat->opc != Ucia && stat->opc != Ucup && stat->opc != Uicuf) {
        if (stat->opc == Ustr && stat->is_increment) {
            return false;
        }

        stat = stat->next;
    }
    return true;
}

/*
00461AAC makelivranges
*/
static bool func_00461A00(struct Statement *stat, struct Expression *expr) {
    stat = stat->next;
    while (stat->opc != Ucia && stat->opc != Ucup && stat->opc != Uicuf) {
        if (stat->opc == Ustr && expr->ichain == stat->expr->ichain) {
            return false;
        }

        stat = stat->next;
    }
    return true;
}

/*
00456A2C oneproc
*/
void makelivranges(void) {
    struct Graphnode *node; // v0-4
    struct livbb *bb;       // v0-c 
    bool done;
    int fp_offset;
    bool spF7;
    bool phi_s4_2;
    struct Proc *proc; // spF0
    struct VarAccessList *access;
    struct Statement *stat;
    struct Statement *par;
    struct Expression *expr;
    int i;
    int block;
    int bit;
    int regclass;
    int reg;
    int size;

    bvlivransize = ((unsigned) (curstaticno - 1) >> 7) + 1;
    numlu = 0;
    ever_altered.num_blocks = 0;
    ever_altered.blocks = NULL;
    checkbvlist(&ever_altered);
    initbv(&ever_altered, (struct BitVectorBlock) {0});
    node = graphhead;
    while (node != NULL) {
        bvectunion(&ever_altered, &node->bvs.stage1.alters);
        node = node->next;
    }

    firstconstbit = bitposcount;
    node = graphhead;
    while (node != NULL) {
        initbv(&node->bvs.stage2.appear, (struct BitVectorBlock) {0});
        initbv(&node->bvs.stage2.loclive, (struct BitVectorBlock) {0});
        initbv(&node->bvs.stage2.locdef, (struct BitVectorBlock) {0});
        node->regsused[0] = dftregsused;
        node->regsused[1] = 0ll;
        node->unkD0[4] = 0;
        node->unkD0[5] = 0;
        node->regdata = (struct RegisterData) {0};

        bvectminus(&node->indiracc, &slvarbits);
        bvectintsect(&node->indiracc, &ever_altered);
        access = node->varlisthead;
        while (access != 0) {
            if (access->type == 2) {
                if (access->data.var->type == isvar &&
                        !access->data.var->ichain->isvar_issvar.unk1A &&
                        !bvectin(access->data.var->ichain->bitpos, &node->indiracc) &&
                        ((access->data.var->datatype != Idt && access->data.var->datatype != Kdt) || dwopcode || access->data.var->data.isvar_issvar.location.memtype == Rmt)) {

                    formlivbb(access->data.var->ichain, node, &bb);
                    if (outofmem) {
                        return;
                    }

                    if (bb->count == 0 && bb->unk12 == 0) {
                        setbit(&node->bvs.stage2.loclive, access->data.var->ichain->bitpos);
                    }
                    bb->count += access->data.var->count;
                    if (node == graphhead && !bb->firstisstr && bvectin0(access->data.var->ichain->bitpos, &coloredparms)) {
                        if (!outonly_parm) {
                            bb->firstisstr = true;
                        }

                        if ((!allcallersave || access->data.var->data.isvar_issvar.location.memtype == Mmt) &&
                                bb->unk13 == 0 && doprecolor && passedinreg(access->data.var->ichain, offsetpassedbyint)) {
                            passedcl = func_004618D4(access->data.var);

                            if (access->data.var->data.isvar_issvar.location.memtype == Mmt) {
                                bb->unk13 = 1; // v0?
                            } else {
                                bb->unk13 = firstparmreg[passedcl - 1] + access->data.var->data.isvar_issvar.location.addr / 4;
                            }

                            if (passedcl == 2 && access->data.var->data.isvar_issvar.location.addr != 0) {
                                bb->unk13 = firstparmreg[passedcl - 1] + 1;
                            }

                            SET_ADD(node->regsused[passedcl - 1], bb->unk13);
                        }
                    } else if (node->successors == NULL &&
                            bvectin0(access->data.var->ichain->bitpos, &coloredparms) &&
                            bvectin0(access->data.var->ichain->bitpos, &outmodebits) &&
                            !allcallersave && bb->unk13 == 0 &&
                            passedinreg(access->data.var->ichain, offsetpassedbyint)) {
                        passedcl = func_004618D4(access->data.var);

                        bb->unk13 = firstparmreg[passedcl - 1] + access->data.var->data.isvar_issvar.location.addr / 4;
                        if (passedcl == 2 && access->data.var->data.isvar_issvar.location.addr != 0) {
                            bb->unk13 = firstparmreg[passedcl - 1] + 1;
                        }

                        SET_ADD(node->regsused[passedcl - 1], bb->unk13);
                    }
                } 
            } else if (access->type == 1 &&
                    access->data.store->opc == Ustr &&
                    !access->data.store->outpar &&
                    !access->data.store->expr->ichain->isvar_issvar.unk1A &&
                    !bvectin(access->data.store->expr->ichain->bitpos, &node->indiracc) &&
                    ((access->data.store->expr->datatype != Idt && access->data.store->expr->datatype != Kdt) ||
                     dwopcode || access->data.store->expr->data.isvar_issvar.location.memtype == Rmt)) {
                formlivbb(access->data.store->expr->ichain, node, &bb);
                if (outofmem) {
                    return;
                }

                bb->unk12++;
                setbit(&node->bvs.stage2.locdef, access->data.store->expr->ichain->bitpos);
                if (bb->count == 0) {
                    bb->firstisstr = true;
                }

                if (node->successors == NULL &&
                        bvectin0(access->data.store->expr->ichain->bitpos, &coloredparms) &&
                        bvectin0(access->data.store->expr->ichain->bitpos, &outmodebits) &&
                        !allcallersave && bb->unk13 == 0 && passedinreg(access->data.store->expr->ichain, offsetpassedbyint)) {
                    passedcl = func_004618D4(access->data.store->expr);
                    bb->unk13 = firstparmreg[passedcl - 1] + access->data.store->expr->data.isvar_issvar.location.addr / 4;
                    if (passedcl == 2 && access->data.store->expr->data.isvar_issvar.location.addr != 0) {
                        bb->unk13 = firstparmreg[passedcl - 1] + 1;
                    }
                    
                    SET_ADD(node->regsused[passedcl - 1], bb->unk13);
                }
            }
            access = access->next;
        }

        done = false;
        stat = node->stat_head;
        while (stat != NULL && !done) {
            if (stat->opc == Ustr) {
                if (!stat->outpar) {
                    if (stat->unk2 != 1) {
                        func_0045E5C4(stat->expr->data.isvar_issvar.assigned_value, 0, node, &bb);
                    }
                    if (stat->is_increment) {
                        func_0046123C(stat, node);
                        func_00461640(stat, node, &bb);
                    }
                    goto next;
                }

                par = node->predecessors->graphnode->stat_tail;
                do {
                    par = par->prev;
                } while (par->opc != Upar || stat->expr->data.isvar_issvar.assigned_value->data.isvar_issvar.location.addr / 4 != par->u.par.loc / 4);
                stat->u.store.u.outpar.par = par;

                formlivbb(stat->expr->ichain, node, &bb);
                bb->firstisstr = 1U;
                setbit(&node->bvs.stage2.locdef, stat->expr->ichain->bitpos);
                if (proc->o3opt != 0) {
                    if (par->u.par.reg == 0) {
                        goto next;
                    }
                    reg = par->u.par.reg;
                    if (reg <= ee_ra) {
                        regclass = 1;
                    } else {
                        regclass = 2;
                    }
                } else {
                    if (par->u.par.loc < fp_offset) {
                        regclass = 2;
                        if (par->u.par.index > 2) {
                            goto next;
                        }
                    } else {
                        regclass = 1;
                        if (par->u.par.index > 4) {
                            goto next;
                        }
                    }
                    reg = firstparmreg[regclass - 1] + par->u.par.index - 1;
                }

                if (!SET_IN(node->regsused[regclass - 1], reg)) {
                    if (outofmem) {
                        return;
                    }
                    if (bb->unk13 == 0) {
                        bb->unk13 = reg;
                        SET_ADD(node->regsused[regclass - 1], reg);
                    }
                }
            } else if (stat->opc == Uisst) {
                if (stat->unk2 != 1U) {
                    func_0045E5C4(stat->u.store.expr, 3U, node, &bb);
                    func_0045E5C4(stat->expr->data.isvar_issvar.assigned_value, 0U, node, &bb);
                }
                if (stat->is_increment) {
                    func_0046123C(stat, node);
                }
            } else if (stat->opc == Uistr ||
                       stat->opc == Uistv ||
                       stat->opc == Umov ||
                       stat->opc == Umovv ||
                       stat->opc == Uirst ||
                       stat->opc == Uirsv) {
                if (stat->opc == Uistr || stat->opc == Uirst ||
                        stat->opc == Uistv || stat->opc == Uirsv) {
                    func_0045E5C4(stat->expr, 1, node, &bb);
                } else {
                    func_0045E5C4(stat->expr, 3, node, &bb);
                }

                func_0045E5C4(stat->u.store.expr, 3, node, &bb);
            } else if (stat->opc == Utpeq ||
                       stat->opc == Utpne ||
                       stat->opc == Utpge ||
                       stat->opc == Utpgt ||
                       stat->opc == Utple ||
                       stat->opc == Utplt) {
                if (stat->opc == Utpeq || stat->opc == Utpne) {
                    func_0045E5C4(stat->expr, 3, node, &bb);
                    func_0045E5C4(stat->u.store.expr, 3, node, &bb);
                } else {
                    func_0045E5C4(stat->expr, 1, node, &bb);
                    func_0045E5C4(stat->u.store.expr, 1, node, &bb);
                }
            } else if (stat->opc == Ufjp || stat->opc == Utjp || stat->opc == Uxjp || stat->opc == Uijp) {
                if (!caninsertearly(stat->expr, node)) {
                    stat->expr->count++;
                }
                func_0045E5C4(stat->expr, 0U, node, &bb);
            } else if (stat->opc != Uaent && stat->opc != Ubgnb && stat->opc != Ucia  && stat->opc != Uclab &&
                       stat->opc != Uclbd && stat->opc != Uctrl && stat->opc != Ucubd && stat->opc != Ucup  &&
                       stat->opc != Udef  && stat->opc != Udup  && stat->opc != Uendb && stat->opc != Uicuf &&
                       stat->opc != Ulab  && stat->opc != Ulbdy && stat->opc != Ulbgn && stat->opc != Ulend &&
                       stat->opc != Uloc  && stat->opc != Ultrm && stat->opc != Umst  && stat->opc != Unop  &&
                       stat->opc != Uret  && stat->opc != Ustep && stat->opc != Uujp  && stat->opc != Uxpar) { // TODO: make define for this?
                if (stat->opc == Uchkt) {
                    func_0045E5C4(stat->expr, 0U, node, &bb);
                } else if (stat->opc == Upar) {
                    func_0045E5C4(stat->expr, 0U, node, &bb);
                    if (stat->u.par.dtype == Sdt && !proc->o3opt) {
                        if (stat->u.par.size > int_reg_size) {
                            reg = firstparmreg[0] + (stat->u.par.loc / int_reg_size);
                            size = stat->u.par.size;
                            while (size > 0 && reg < firstparmreg[0] + 4) {
                                SET_ADD(node->regsused[0], reg);

                                reg++;
                                size -= int_reg_size;
                            }
                        }
                    }
                } else if (stat->opc == Upmov) {
                    func_0045E5C4(stat->expr, 3U, node, &bb);
                    if (proc->o3opt == 0) {
                        size = stat->u.store.size;
                        reg = firstparmreg[0] + stat->u.store.u.mov.offset / int_reg_size;
                        while (size > 0 && reg < firstparmreg[0] + 4) {
                            if (SET_IN(node->regsused[0], reg)) {
                                func_00461778(node, reg, 0);
                            }

                            SET_ADD(node->regsused[0], reg);

                            size -= int_reg_size;
                            reg++;
                        }
                    }
                } else {
                    if (stat->opc == Upop && stat->u.pop.unk15 != 0) {
                        stat->u.pop.unk16 = 0;
                        if (!caninsertearly(stat->expr, node)) {
                            if (stat->expr->type == isop) {
                                stat->expr->count++;
                            } else {
                                stat->u.pop.unk16 = 1;
                            }
                        }
                    }
                    func_0045E5C4(stat->expr, 3U, node, &bb);
                }

                if (stat->opc == Upar &&
                        (proc->o3opt != 0 ||
                         (stat->u.par.index <= 4 && (stat->u.par.dtype != Sdt || stat->u.par.size <= int_reg_size)))) {
                    if (outofmem) {
                        return;
                    }

                    expr = stat->expr;
                    while (expr->type == isvar && expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                        expr = expr->data.isvar_issvar.copy;
                    }

                    if (proc->o3opt != 0) {
                        stat->u.par.reg = func_00461880(stat->u.par.loc, proc->regstaken_parregs);
                        if (stat->u.par.reg == 0) {
                            goto next;
                        }
                        reg = stat->u.par.reg;
                        spF7 = 1;
                        if (reg < 24) {
                            regclass = 1;
                        } else {
                            regclass = 2;
                        }
                    } else {
                        if (stat->u.par.loc < fp_offset) {
                            regclass = 2;
                            if (stat->u.par.index > 2) {
                                goto next;
                            }
                            spF7 = 1;
                        } else {
                            spF7 = 1;
                            regclass = 1;
                        }
                        reg = firstparmreg[regclass-1] + stat->u.par.index - 1;
                    }

                    if (expr->type == isvar && !expr->ichain->isvar_issvar.unk1A && !bvectin(expr->ichain->bitpos, &node->indiracc)) {
                        formlivbb(expr->ichain, node, &bb);
                    } else {
                        spF7 = 0;
                    }

                    phi_s4_2 = false;
                    if (regclass == 1) {
                        if (func_004618D4(expr) != 1 && expr->datatype == Qdt) {
                            phi_s4_2 = true;
                        } else if (!mips3_64data && func_00461920(expr)) {
                            phi_s4_2 = true;
                        }
                    }

                    if (allcallersave == 0 && SET_IN(node->regsused[regclass - 1], reg)) {
                        if (bb != 0 && spF7 != 0 && reg == bb->unk13 && bb->unk12 == 0) {
                            goto next;
                        }
                        func_00461778(node, reg, 0);
                    }

                    if (phi_s4_2) {
                        if (SET_IN(node->regsused[regclass-1], reg + 1)) {
                            func_00461778(node, reg + 1, 0);
                        }
                    }

                    if (phi_s4_2) {
                        SET_ADD(node->regsused[regclass-1], reg);
                        SET_ADD(node->regsused[regclass-1], reg+1);
                    } else {
                        SET_ADD(node->regsused[regclass-1], reg);
                    }

                    if (func_004618D4(expr) == regclass && doprecolor) {
                        if (expr->type == isvar) {
                            if (spF7 != 0 && bb->unk13 == 0) {
                                if (lang != LANG_C || func_00461A00(stat, expr)) {
                                    bb->unk13 = reg;
                                }
                            }
                        } else if (bb != NULL && bb->unk13 == 0) {
                            if (lang != LANG_C ||
                                    !bvectin0(expr->ichain->bitpos, &node->bvs.stage2.unk13C) ||
                                    func_0046195C(stat)) {
                                bb->unk13 = reg;
                            }
                        }
                    }
                }
            } else if (stat->opc == Umst) {
                proc = stat->u.mst.proc;
                fp_offset = stat->u.mst.fp_offset;
                if (!allcallersave) {
                    if (proc->o3opt) {
                        reg = 22;
                        if (someusefp != 0) {
                            reg = 21;
                        }

                        while (highesteereg[0] < reg && proc->regstaken_parregs->regstaken[reg - 1] == 0) {
                            reg--;
                        }
                        highesteereg[0] = reg;

                        reg = lasterreg[0];
                        while (highesterreg[0] < reg && proc->regstaken_parregs->regstaken[reg - 1] == 0) {
                            reg--;
                        }
                        highesterreg[0] = reg;

                        reg = 35;
                        while (highesteereg[1] < reg && proc->regstaken_parregs->regstaken[reg - 1] == 0) {
                            reg--;
                        }
                        highesteereg[1] = reg;

                        reg = lasterreg[1];
                        while (highesterreg[1] < reg && proc->regstaken_parregs->regstaken[reg - 1] == 0) {
                            reg--;
                        }
                        highesterreg[1] = reg;
                    }
                } else {
                    if (proc->o3opt == 0) {
                        for (reg = firsterreg[0]; reg < lasterreg[0]; reg++) {
                            curproc->regstaken_parregs->regstaken[reg - 1] = true;
                        }
                        for (reg = firsterreg[1]; reg < lasterreg[1]; reg++) {
                            curproc->regstaken_parregs->regstaken[reg - 1] = true;
                        }
                    } else {
                        for (reg = firsterreg[0]; reg < lasterreg[0]; reg++) {
                            if (proc->regstaken_parregs->regstaken[reg - 1]) {
                                curproc->regstaken_parregs->regstaken[reg - 1] = true;
                            }
                        }
                        for (reg = firsterreg[1]; reg < lasterreg[1]; reg++) {
                            if (proc->regstaken_parregs->regstaken[reg - 1]) {
                                curproc->regstaken_parregs->regstaken[reg - 1] = true;
                            }
                        }
                    }
                }
            }

next:
            if (stat->next != NULL) {
                done = stat->next->graphnode != stat->graphnode;
            }
            if (outofmem) {
                return;
            }
            stat = stat->next;
        }

        initbv(&old, (struct BitVectorBlock) {0});
        initbv(&node->bvs.stage2.unk16C, (struct BitVectorBlock) {0});
        block = 0;
        i = 0;
        while (i < firstconstbit) {
            if (BVBLOCKEMPTY(node->bvs.stage2.unk164, block)) {
                i += 0x80;
            } else {
                bit = 0;
                while (i < firstconstbit && bit < 0x80) {
                    if (BVINBLOCK(bit, block, node->bvs.stage2.unk164) &&
                            (bvectin(i, &node->bvs.stage2.unk154) ||
                             bvectin(i, &storeop) ||
                             bvectin(i, &trapop))) {
                        func_0045FBB4(bittab[i].ichain, 1U, 1U, node, &bb);
                        if (outofmem) {
                            return;
                        }
                    }
                    bit++;
                    i++;
                }
            }
            block++;
        }

        node = node->next;
    }

    checkbvlist(&iscolored[0]);
    checkbvlist(&iscolored[1]);

    iscolored12.num_blocks = 0;
    iscolored12.blocks = NULL;
    checkbvlist(&iscolored12); // naming is on point
    bvectcopy(&iscolored12, &iscolored[0]);
    bvectunion(&iscolored12, &iscolored[1]);
    checkbvlist(&varbits);
}
