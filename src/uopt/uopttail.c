#include "uoptdata.h"
#include "uopttail.h"
#include "uoptutil.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000DC20:
    # 0047606C func_0047606C
    .asciz "uopttail.p"

    .balign 4
jtbl_1000DC2C:
    # 0047606C func_0047606C
    .gpword .L004761B4
    .gpword .L004761B4
    .gpword .L004760D4
    .gpword .L00476154
    .gpword .L004761B4
    .gpword .L004761B4
    .gpword .L00476194
    .gpword .L004761B4

RO_1000DC4C:
    # 004761D0 tail_recursion
    .asciz "TAIL RECURSION ELIMINATION at BB:"

.data
D_100111F0:
    # 004761D0 tail_recursion
    .byte 0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x0a,0x00,0x00,0x10




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

)"");

/*
00475C80 next_stmt_is_ret
*/
bool next_stmt_is_ret1(struct Statement *stmt, int arg1) {
    for (;;) {
        stmt = stmt->next;
        switch (stmt->opc) {
            case Ubgnb:
            case Udef:
            case Uendb:
            case Ulab:
            case Uloc:
            case Unop:
                continue;
        }
        if (stmt->opc == Uujp) {
            stmt = stmt->graphnode->successors->graphnode->stat_head;
            continue;
        }
        if (stmt->opc == Ustr) {
            if (stmt->expr->data.isvar_issvar.unk34->type != isvar) {
                return false;
            }
            if (curblk != stmt->expr->data.isvar_issvar.unk34->data.isvar_issvar.var_data.blockno) {
                return false;
            }
            if (arg1 != stmt->expr->data.isvar_issvar.unk34->data.isvar_issvar.var_data.addr) {
                return false;
            }
            if (stmt->expr->type == isvar) {
                if (stmt->expr->data.isvar_issvar.var_data.memtype == Rmt) {
                    if (stmt->expr->data.isvar_issvar.var_data.addr != 2) {
                        continue;
                    }
                }
            }
            return false;
        }
        return stmt->opc == Uret;
    }
}

/*
004761D0 tail_recursion
*/
bool next_stmt_is_ret(struct Statement *stmt) {
    for (;;) {
        stmt = stmt->next;
        switch (stmt->opc) {
            case Ubgnb:
            case Udef:
            case Uendb:
            case Ulab:
            case Uloc:
            case Unop:
                continue;
        }
        if (stmt->opc == Uujp) {
            stmt = stmt->graphnode->successors->graphnode->stat_head;
            continue;
        }
        if (stmt->opc == Ustr) {
            if (stmt->expr->data.isvar_issvar.unk34->type != isvar) {
                return false;
            }
            if (stmt->expr->data.isvar_issvar.unk34->data.isvar_issvar.var_data.memtype != Rmt) {
                return false;
            }
            if (stmt->expr->data.isvar_issvar.unk34->data.isvar_issvar.var_data.addr != 2) {
                return false;
            }
            if (stmt->expr->type == isvar) {
                if (stmt->expr->data.isvar_issvar.var_data.memtype == Rmt) {
                    if (stmt->expr->data.isvar_issvar.var_data.addr == 2) {
                        continue;
                    }
                }
            }
            if (stmt->expr->type != isvar) {
                return false;
            }
            if (curblk != stmt->expr->data.isvar_issvar.var_data.blockno) {
                return false;
            }
            return next_stmt_is_ret1(stmt, stmt->expr->data.isvar_issvar.var_data.addr);
        }
        return stmt->opc == Uret;
    }
}

/*
004761D0 tail_recursion
*/
bool no_ref_param(struct Statement *parameters) {
    struct Expression *baseaddr;
    while (parameters != NULL) {
        if (parameters->u.par.dtype == Adt) {
            baseaddr = parameters->u.par.baseaddr;
            if (baseaddr->type == islda && curblk == baseaddr->data.islda_isilda.var_data.blockno) {
                return false;
            }
        }
        parameters = parameters->u.par.next;
    }
    return true;
}

/*
00475E38 func_00475E38
00475FE8 fix_par_vreg
*/
static void func_00475E38(struct Variable *vartree, struct Statement *pmov_stmt) {
    struct Expression *expr;
    if (vartree != NULL) {
        if (vartree->unk2 && vartree->inner.memtype == Pmt && curblk == vartree->inner.blockno) {
            int loc = vartree->inner.addr;
            if ((loc >= pmov_stmt->u.store.u.mov.offset && loc - pmov_stmt->u.store.u.mov.offset < pmov_stmt->u.store.size) ||
                (pmov_stmt->u.store.u.mov.offset >= loc && pmov_stmt->u.store.u.mov.offset - loc < vartree->size))
            {
                for (expr = table[isvarhash(vartree->inner)]; expr != NULL; expr = expr->next) {
                    if (expr->type != isvar) {
                        continue;
                    }
                    if (curblk != expr->data.isvar_issvar.var_data.blockno) {
                        continue;
                    }
                    if (vartree->inner.addr != expr->data.isvar_issvar.var_data.addr) {
                        continue;
                    }
                    expr->data.isvar_issvar.unk22 = false;
                    if (expr->ichain != NULL) {
                        expr->ichain->isvar_issvar.unk19 = false;
                    }
                }
            }
        }
        func_00475E38(vartree->left, pmov_stmt);
        func_00475E38(vartree->right, pmov_stmt);
    }
}

/*
004761D0 tail_recursion
*/
void fix_par_vreg(struct Statement *pmov_stmt) {
    func_00475E38(curproc->vartree, pmov_stmt);
}

__asm__(R""(
.set noat
.set noreorder

    .type func_00476034, @function
func_00476034:
    # 0047606C func_0047606C
    # 004761D0 tail_recursion
/* 00476034 8C43FFD8 */  lw    $v1, -0x28($v0)
/* 00476038 5060000A */  beql  $v1, $zero, .L00476064
/* 0047603C 00001025 */   move  $v0, $zero
/* 00476040 8C6E0004 */  lw    $t6, 4($v1)
.L00476044:
/* 00476044 548E0004 */  bnel  $a0, $t6, .L00476058
/* 00476048 8C630010 */   lw    $v1, 0x10($v1)
/* 0047604C 03E00008 */  jr    $ra
/* 00476050 00601025 */   move  $v0, $v1

/* 00476054 8C630010 */  lw    $v1, 0x10($v1)
.L00476058:
/* 00476058 5460FFFA */  bnezl $v1, .L00476044
/* 0047605C 8C6E0004 */   lw    $t6, 4($v1)
/* 00476060 00001025 */  move  $v0, $zero
.L00476064:
/* 00476064 03E00008 */  jr    $ra
/* 00476068 00000000 */   nop   

    .type func_0047606C, @function
func_0047606C:
    # 0047606C func_0047606C
    # 004761D0 tail_recursion
/* 0047606C 3C1C0FBA */  .cpload $t9
/* 00476070 279C4224 */  
/* 00476074 0399E021 */  
/* 00476078 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0047607C AFB30024 */  sw    $s3, 0x24($sp)
/* 00476080 AFB20020 */  sw    $s2, 0x20($sp)
/* 00476084 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00476088 AFB00018 */  sw    $s0, 0x18($sp)
/* 0047608C 00808025 */  move  $s0, $a0
/* 00476090 8F918DBC */  lw     $s1, %got(optab)($gp)
/* 00476094 24120003 */  li    $s2, 3
/* 00476098 00409825 */  move  $s3, $v0
/* 0047609C AFBF002C */  sw    $ra, 0x2c($sp)
/* 004760A0 AFBC0028 */  sw    $gp, 0x28($sp)
.L004760A4:
/* 004760A4 92020000 */  lbu   $v0, ($s0)
/* 004760A8 244EFFFF */  addiu $t6, $v0, -1
/* 004760AC 2DC10008 */  sltiu $at, $t6, 8
/* 004760B0 10200038 */  beqz  $at, .L00476194
/* 004760B4 00000000 */   nop   
/* 004760B8 8F818044 */  lw    $at, %got(jtbl_1000DC2C)($gp)
/* 004760BC 000E7080 */  sll   $t6, $t6, 2
/* 004760C0 002E0821 */  addu  $at, $at, $t6
/* 004760C4 8C2EDC2C */  lw    $t6, %lo(jtbl_1000DC2C)($at)
/* 004760C8 01DC7021 */  addu  $t6, $t6, $gp
/* 004760CC 01C00008 */  jr    $t6
/* 004760D0 00000000 */   nop   
.L004760D4:
/* 004760D4 920F002E */  lbu   $t7, 0x2e($s0)
/* 004760D8 24010002 */  li    $at, 2
/* 004760DC 31F80007 */  andi  $t8, $t7, 7
/* 004760E0 57010035 */  bnel  $t8, $at, .L004761B8
/* 004760E4 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004760E8 8E030028 */  lw    $v1, 0x28($s0)
/* 004760EC 8E79FFE0 */  lw    $t9, -0x20($s3)
/* 004760F0 0079082A */  slt   $at, $v1, $t9
/* 004760F4 50200030 */  beql  $at, $zero, .L004761B8
/* 004760F8 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004760FC 8F998030 */  lw    $t9, %got(func_00476034)($gp)
/* 00476100 00032083 */  sra   $a0, $v1, 2
/* 00476104 00042080 */  sll   $a0, $a0, 2
/* 00476108 27396034 */  addiu $t9, %lo(func_00476034) # addiu $t9, $t9, 0x6034
/* 0047610C 0320F809 */  jalr  $t9
/* 00476110 02601025 */   move  $v0, $s3
/* 00476114 14400027 */  bnez  $v0, .L004761B4
/* 00476118 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0047611C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00476120 24040014 */  li    $a0, 20
/* 00476124 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00476128 0320F809 */  jalr  $t9
/* 0047612C 00000000 */   nop   
/* 00476130 8E080028 */  lw    $t0, 0x28($s0)
/* 00476134 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00476138 00084883 */  sra   $t1, $t0, 2
/* 0047613C 00095080 */  sll   $t2, $t1, 2
/* 00476140 AC4A0004 */  sw    $t2, 4($v0)
/* 00476144 8E6BFFD8 */  lw    $t3, -0x28($s3)
/* 00476148 AC4B0010 */  sw    $t3, 0x10($v0)
/* 0047614C 10000019 */  b     .L004761B4
/* 00476150 AE62FFD8 */   sw    $v0, -0x28($s3)
.L00476154:
/* 00476154 8F998030 */  lw    $t9, %got(func_0047606C)($gp)
/* 00476158 8E040024 */  lw    $a0, 0x24($s0)
/* 0047615C 02601025 */  move  $v0, $s3
/* 00476160 2739606C */  addiu $t9, %lo(func_0047606C) # addiu $t9, $t9, 0x606c
/* 00476164 0320F809 */  jalr  $t9
/* 00476168 00000000 */   nop   
/* 0047616C 920C0020 */  lbu   $t4, 0x20($s0)
/* 00476170 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00476174 01920019 */  multu $t4, $s2
/* 00476178 00006812 */  mflo  $t5
/* 0047617C 022D7021 */  addu  $t6, $s1, $t5
/* 00476180 91CF0002 */  lbu   $t7, 2($t6)
/* 00476184 51E0000C */  beql  $t7, $zero, .L004761B8
/* 00476188 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0047618C 1000FFC5 */  b     .L004760A4
/* 00476190 8E100028 */   lw    $s0, 0x28($s0)
.L00476194:
/* 00476194 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00476198 8F868044 */  lw    $a2, %got(RO_1000DC20)($gp)
/* 0047619C 24040001 */  li    $a0, 1
/* 004761A0 240500A8 */  li    $a1, 168
/* 004761A4 2407000A */  li    $a3, 10
/* 004761A8 0320F809 */  jalr  $t9
/* 004761AC 24C6DC20 */   addiu $a2, %lo(RO_1000DC20) # addiu $a2, $a2, -0x23e0
/* 004761B0 8FBC0028 */  lw    $gp, 0x28($sp)
.L004761B4:
/* 004761B4 8FBF002C */  lw    $ra, 0x2c($sp)
.L004761B8:
/* 004761B8 8FB00018 */  lw    $s0, 0x18($sp)
/* 004761BC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004761C0 8FB20020 */  lw    $s2, 0x20($sp)
/* 004761C4 8FB30024 */  lw    $s3, 0x24($sp)
/* 004761C8 03E00008 */  jr    $ra
/* 004761CC 27BD0030 */   addiu $sp, $sp, 0x30

glabel tail_recursion
    .ent tail_recursion
    # 00456A2C oneproc
/* 004761D0 3C1C0FBA */  .cpload $t9
/* 004761D4 279C40C0 */  
/* 004761D8 0399E021 */  
/* 004761DC 27BDFF78 */  addiu $sp, $sp, -0x88
/* 004761E0 8F8E8AC8 */  lw     $t6, %got(dotail)($gp)
/* 004761E4 AFBF003C */  sw    $ra, 0x3c($sp)
/* 004761E8 AFBE0038 */  sw    $fp, 0x38($sp)
/* 004761EC 91CE0000 */  lbu   $t6, ($t6)
/* 004761F0 AFBC0034 */  sw    $gp, 0x34($sp)
/* 004761F4 AFB70030 */  sw    $s7, 0x30($sp)
/* 004761F8 AFB6002C */  sw    $s6, 0x2c($sp)
/* 004761FC AFB50028 */  sw    $s5, 0x28($sp)
/* 00476200 AFB40024 */  sw    $s4, 0x24($sp)
/* 00476204 AFB30020 */  sw    $s3, 0x20($sp)
/* 00476208 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0047620C AFB10018 */  sw    $s1, 0x18($sp)
/* 00476210 11C00217 */  beqz  $t6, .L00476A70
/* 00476214 AFB00014 */   sw    $s0, 0x14($sp)
/* 00476218 8F8F8B40 */  lw     $t7, %got(can_elim_tail)($gp)
/* 0047621C 91EF0000 */  lbu   $t7, ($t7)
/* 00476220 51E00214 */  beql  $t7, $zero, .L00476A74
/* 00476224 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00476228 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 0047622C 24010005 */  li    $at, 5
/* 00476230 90420000 */  lbu   $v0, ($v0)
/* 00476234 1041020E */  beq   $v0, $at, .L00476A70
/* 00476238 24010003 */   li    $at, 3
/* 0047623C 14410028 */  bne   $v0, $at, .L004762E0
/* 00476240 00000000 */   nop   
/* 00476244 8F858A00 */  lw     $a1, %got(pdefmax)($gp)
/* 00476248 8CA50000 */  lw    $a1, ($a1)
/* 0047624C 04A00024 */  bltz  $a1, .L004762E0
/* 00476250 24A50001 */   addiu $a1, $a1, 1
/* 00476254 30A60003 */  andi  $a2, $a1, 3
/* 00476258 10C0000E */  beqz  $a2, .L00476294
/* 0047625C 00001825 */   move  $v1, $zero
/* 00476260 8F9889F4 */  lw     $t8, %got(pdeftab)($gp)
/* 00476264 0003C900 */  sll   $t9, $v1, 4
/* 00476268 00C02025 */  move  $a0, $a2
/* 0047626C 8F180000 */  lw    $t8, ($t8)
/* 00476270 03191021 */  addu  $v0, $t8, $t9
.L00476274:
/* 00476274 90480002 */  lbu   $t0, 2($v0)
/* 00476278 24630001 */  addiu $v1, $v1, 1
/* 0047627C 550001FD */  bnezl $t0, .L00476A74
/* 00476280 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00476284 1483FFFB */  bne   $a0, $v1, .L00476274
/* 00476288 24420010 */   addiu $v0, $v0, 0x10
/* 0047628C 10650014 */  beq   $v1, $a1, .L004762E0
/* 00476290 00000000 */   nop   
.L00476294:
/* 00476294 8F8989F4 */  lw     $t1, %got(pdeftab)($gp)
/* 00476298 00035100 */  sll   $t2, $v1, 4
/* 0047629C 8D290000 */  lw    $t1, ($t1)
/* 004762A0 012A1021 */  addu  $v0, $t1, $t2
.L004762A4:
/* 004762A4 904B0002 */  lbu   $t3, 2($v0)
/* 004762A8 24630004 */  addiu $v1, $v1, 4
/* 004762AC 556001F1 */  bnezl $t3, .L00476A74
/* 004762B0 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004762B4 904C0012 */  lbu   $t4, 0x12($v0)
/* 004762B8 558001EE */  bnezl $t4, .L00476A74
/* 004762BC 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004762C0 904D0022 */  lbu   $t5, 0x22($v0)
/* 004762C4 55A001EB */  bnezl $t5, .L00476A74
/* 004762C8 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004762CC 904E0032 */  lbu   $t6, 0x32($v0)
/* 004762D0 55C001E8 */  bnezl $t6, .L00476A74
/* 004762D4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004762D8 1465FFF2 */  bne   $v1, $a1, .L004762A4
/* 004762DC 24420040 */   addiu $v0, $v0, 0x40
.L004762E0:
/* 004762E0 8F9489AC */  lw     $s4, %got(graphhead)($gp)
/* 004762E4 A3A00067 */  sb    $zero, 0x67($sp)
/* 004762E8 241E0017 */  li    $fp, 23
/* 004762EC 8F9789B4 */  lw     $s7, %got(curgraphnode)($gp)
/* 004762F0 27B60088 */  addiu $s6, $sp, 0x88
/* 004762F4 8F9589C4 */  lw     $s5, %got(stattail)($gp)
/* 004762F8 8F938970 */  lw     $s3, %got(tempdisp)($gp)
/* 004762FC 8E940000 */  lw    $s4, ($s4)
/* 00476300 8E820020 */  lw    $v0, 0x20($s4)
.L00476304:
/* 00476304 5040018B */  beql  $v0, $zero, .L00476934
/* 00476308 AFB40080 */   sw    $s4, 0x80($sp)
/* 0047630C 904F0000 */  lbu   $t7, ($v0)
/* 00476310 57CF0188 */  bnel  $fp, $t7, .L00476934
/* 00476314 AFB40080 */   sw    $s4, 0x80($sp)
/* 00476318 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 0047631C 8C590014 */  lw    $t9, 0x14($v0)
/* 00476320 8F180000 */  lw    $t8, ($t8)
/* 00476324 8F280000 */  lw    $t0, ($t9)
/* 00476328 57080182 */  bnel  $t8, $t0, .L00476934
/* 0047632C AFB40080 */   sw    $s4, 0x80($sp)
/* 00476330 8F898A5C */  lw     $t1, %got(lang)($gp)
/* 00476334 3C012A00 */  lui   $at, 0x2a00
/* 00476338 91290000 */  lbu   $t1, ($t1)
/* 0047633C 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 00476340 000A5823 */  negu  $t3, $t2
/* 00476344 01616024 */  and   $t4, $t3, $at
/* 00476348 012C6804 */  sllv  $t5, $t4, $t1
/* 0047634C 05A20008 */  bltzl $t5, .L00476370
/* 00476350 8E8E0018 */   lw    $t6, 0x18($s4)
/* 00476354 8F9985F4 */  lw    $t9, %call16(no_ref_param)($gp)
/* 00476358 8C440024 */  lw    $a0, 0x24($v0)
/* 0047635C 0320F809 */  jalr  $t9
/* 00476360 00000000 */   nop   
/* 00476364 10400172 */  beqz  $v0, .L00476930
/* 00476368 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0047636C 8E8E0018 */  lw    $t6, 0x18($s4)
.L00476370:
/* 00476370 51C00170 */  beql  $t6, $zero, .L00476934
/* 00476374 AFB40080 */   sw    $s4, 0x80($sp)
/* 00476378 8F9985F0 */  lw    $t9, %call16(next_stmt_is_ret)($gp)
/* 0047637C 8E840020 */  lw    $a0, 0x20($s4)
/* 00476380 0320F809 */  jalr  $t9
/* 00476384 00000000 */   nop   
/* 00476388 10400169 */  beqz  $v0, .L00476930
/* 0047638C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00476390 8F9289AC */  lw     $s2, %got(graphhead)($gp)
/* 00476394 8E520000 */  lw    $s2, ($s2)
/* 00476398 52920166 */  beql  $s4, $s2, .L00476934
/* 0047639C AFB40080 */   sw    $s4, 0x80($sp)
/* 004763A0 8E8F0014 */  lw    $t7, 0x14($s4)
/* 004763A4 93A20067 */  lbu   $v0, 0x67($sp)
/* 004763A8 11E00161 */  beqz  $t7, .L00476930
/* 004763AC 0002102B */   sltu  $v0, $zero, $v0
/* 004763B0 24190001 */  li    $t9, 1
/* 004763B4 A3B90067 */  sb    $t9, 0x67($sp)
/* 004763B8 14400021 */  bnez  $v0, .L00476440
/* 004763BC AFA00060 */   sw    $zero, 0x60($sp)
/* 004763C0 8E580000 */  lw    $t8, ($s2)
/* 004763C4 8F8289D8 */  lw     $v0, %got(maxlabnam)($gp)
/* 004763C8 030002B6 */  tne   $t8, $zero, 0xa
/* 004763CC 8C480000 */  lw    $t0, ($v0)
/* 004763D0 24040034 */  li    $a0, 52
/* 004763D4 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004763D8 250A0001 */  addiu $t2, $t0, 1
/* 004763DC AC4A0000 */  sw    $t2, ($v0)
/* 004763E0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004763E4 AE4A0000 */  sw    $t2, ($s2)
/* 004763E8 0320F809 */  jalr  $t9
/* 004763EC 00000000 */   nop   
/* 004763F0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004763F4 240D0042 */  li    $t5, 66
/* 004763F8 8F9289AC */  lw     $s2, %got(graphhead)($gp)
/* 004763FC 8F8189C0 */  lw     $at, %got(stathead)($gp)
/* 00476400 8F8E89D8 */  lw     $t6, %got(maxlabnam)($gp)
/* 00476404 8E520000 */  lw    $s2, ($s2)
/* 00476408 8E4C001C */  lw    $t4, 0x1c($s2)
/* 0047640C AC4C0008 */  sw    $t4, 8($v0)
/* 00476410 8E49001C */  lw    $t1, 0x1c($s2)
/* 00476414 AD22000C */  sw    $v0, 0xc($t1)
/* 00476418 AE42001C */  sw    $v0, 0x1c($s2)
/* 0047641C AC220000 */  sw    $v0, ($at)
/* 00476420 AC40000C */  sw    $zero, 0xc($v0)
/* 00476424 A04D0000 */  sb    $t5, ($v0)
/* 00476428 AC400028 */  sw    $zero, 0x28($v0)
/* 0047642C A0400024 */  sb    $zero, 0x24($v0)
/* 00476430 AC400018 */  sw    $zero, 0x18($v0)
/* 00476434 AC520010 */  sw    $s2, 0x10($v0)
/* 00476438 8DCE0000 */  lw    $t6, ($t6)
/* 0047643C AC4E0014 */  sw    $t6, 0x14($v0)
.L00476440:
/* 00476440 8F8F8A64 */  lw     $t7, %got(listwritten)($gp)
/* 00476444 24060021 */  li    $a2, 33
/* 00476448 91EF0000 */  lbu   $t7, ($t7)
/* 0047644C 51E00017 */  beql  $t7, $zero, .L004764AC
/* 00476450 8E900020 */   lw    $s0, 0x20($s4)
/* 00476454 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00476458 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0047645C 8F858044 */  lw    $a1, %got(RO_1000DC4C)($gp)
/* 00476460 24070021 */  li    $a3, 33
/* 00476464 8C840000 */  lw    $a0, ($a0)
/* 00476468 0320F809 */  jalr  $t9
/* 0047646C 24A5DC4C */   addiu $a1, %lo(RO_1000DC4C) # addiu $a1, $a1, -0x23b4
/* 00476470 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476474 96850008 */  lhu   $a1, 8($s4)
/* 00476478 2406000C */  li    $a2, 12
/* 0047647C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00476480 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00476484 2407000A */  li    $a3, 10
/* 00476488 0320F809 */  jalr  $t9
/* 0047648C 8C840000 */   lw    $a0, ($a0)
/* 00476490 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476494 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00476498 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0047649C 0320F809 */  jalr  $t9
/* 004764A0 8C840000 */   lw    $a0, ($a0)
/* 004764A4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004764A8 8E900020 */  lw    $s0, 0x20($s4)
.L004764AC:
/* 004764AC 92190000 */  lbu   $t9, ($s0)
.L004764B0:
/* 004764B0 3C010A00 */  lui   $at, 0xa00
/* 004764B4 02C01025 */  move  $v0, $s6
/* 004764B8 2738FFA0 */  addiu $t8, $t9, -0x60
/* 004764BC 2F080020 */  sltiu $t0, $t8, 0x20
/* 004764C0 00085023 */  negu  $t2, $t0
/* 004764C4 01415824 */  and   $t3, $t2, $at
/* 004764C8 030B6004 */  sllv  $t4, $t3, $t8
/* 004764CC 05830009 */  bgezl $t4, .L004764F4
/* 004764D0 8E10000C */   lw    $s0, 0xc($s0)
/* 004764D4 8F998030 */  lw    $t9, %got(func_0047606C)($gp)
/* 004764D8 8E09001C */  lw    $t1, 0x1c($s0)
/* 004764DC 8E040004 */  lw    $a0, 4($s0)
/* 004764E0 2739606C */  addiu $t9, %lo(func_0047606C) # addiu $t9, $t9, 0x606c
/* 004764E4 0320F809 */  jalr  $t9
/* 004764E8 AFA90068 */   sw    $t1, 0x68($sp)
/* 004764EC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004764F0 8E10000C */  lw    $s0, 0xc($s0)
.L004764F4:
/* 004764F4 8E0D001C */  lw    $t5, 0x1c($s0)
/* 004764F8 55A0FFED */  bnezl $t5, .L004764B0
/* 004764FC 92190000 */   lbu   $t9, ($s0)
/* 00476500 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00476504 24040174 */  li    $a0, 372
/* 00476508 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0047650C 0320F809 */  jalr  $t9
/* 00476510 00000000 */   nop   
/* 00476514 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476518 AEE20000 */  sw    $v0, ($s7)
/* 0047651C 00402025 */  move  $a0, $v0
/* 00476520 8F9982C8 */  lw    $t9, %call16(init_graphnode)($gp)
/* 00476524 0320F809 */  jalr  $t9
/* 00476528 00000000 */   nop   
/* 0047652C 8EF10000 */  lw    $s1, ($s7)
/* 00476530 968E0008 */  lhu   $t6, 8($s4)
/* 00476534 8FAA0080 */  lw    $t2, 0x80($sp)
/* 00476538 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0047653C A62E0008 */  sh    $t6, 8($s1)
/* 00476540 8E8F0134 */  lw    $t7, 0x134($s4)
/* 00476544 AE2F0134 */  sw    $t7, 0x134($s1)
/* 00476548 8E99002C */  lw    $t9, 0x2c($s4)
/* 0047654C AE39002C */  sw    $t9, 0x2c($s1)
/* 00476550 8E880000 */  lw    $t0, ($s4)
/* 00476554 AE280000 */  sw    $t0, ($s1)
/* 00476558 AD51000C */  sw    $s1, 0xc($t2)
/* 0047655C 8E8B000C */  lw    $t3, 0xc($s4)
/* 00476560 AE2B000C */  sw    $t3, 0xc($s1)
/* 00476564 8E900014 */  lw    $s0, 0x14($s4)
/* 00476568 AE300014 */  sw    $s0, 0x14($s1)
/* 0047656C 8E8C0018 */  lw    $t4, 0x18($s4)
/* 00476570 AE2C0018 */  sw    $t4, 0x18($s1)
.L00476574:
/* 00476574 8F9985B0 */  lw    $t9, %call16(change_adj_node)($gp)
/* 00476578 8E090000 */  lw    $t1, ($s0)
/* 0047657C 02802825 */  move  $a1, $s4
/* 00476580 8EE60000 */  lw    $a2, ($s7)
/* 00476584 0320F809 */  jalr  $t9
/* 00476588 8D240018 */   lw    $a0, 0x18($t1)
/* 0047658C 8E100004 */  lw    $s0, 4($s0)
/* 00476590 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476594 1600FFF7 */  bnez  $s0, .L00476574
/* 00476598 00000000 */   nop   
/* 0047659C 8EF10000 */  lw    $s1, ($s7)
/* 004765A0 8F9985B0 */  lw    $t9, %call16(change_adj_node)($gp)
/* 004765A4 02802825 */  move  $a1, $s4
/* 004765A8 8E2D0018 */  lw    $t5, 0x18($s1)
/* 004765AC 02203025 */  move  $a2, $s1
/* 004765B0 8DAE0000 */  lw    $t6, ($t5)
/* 004765B4 0320F809 */  jalr  $t9
/* 004765B8 8DC40014 */   lw    $a0, 0x14($t6)
/* 004765BC 8EAF0000 */  lw    $t7, ($s5)
/* 004765C0 8E90001C */  lw    $s0, 0x1c($s4)
/* 004765C4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004765C8 AFAF0070 */  sw    $t7, 0x70($sp)
/* 004765CC 8E19000C */  lw    $t9, 0xc($s0)
/* 004765D0 92020000 */  lbu   $v0, ($s0)
/* 004765D4 AEB90000 */  sw    $t9, ($s5)
/* 004765D8 2C480080 */  sltiu $t0, $v0, 0x80
.L004765DC:
/* 004765DC 11000009 */  beqz  $t0, .L00476604
/* 004765E0 2401007B */   li    $at, 123
/* 004765E4 8F988044 */  lw    $t8, %got(D_100111F0)($gp)
/* 004765E8 00025143 */  sra   $t2, $v0, 5
/* 004765EC 000A5880 */  sll   $t3, $t2, 2
/* 004765F0 271811F0 */  addiu $t8, %lo(D_100111F0) # addiu $t8, $t8, 0x11f0
/* 004765F4 030B6021 */  addu  $t4, $t8, $t3
/* 004765F8 8D890000 */  lw    $t1, ($t4)
/* 004765FC 00496804 */  sllv  $t5, $t1, $v0
/* 00476600 29A80000 */  slti  $t0, $t5, 0
.L00476604:
/* 00476604 15000007 */  bnez  $t0, .L00476624
/* 00476608 00000000 */   nop   
/* 0047660C 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 00476610 02002025 */  move  $a0, $s0
/* 00476614 0320F809 */  jalr  $t9
/* 00476618 00000000 */   nop   
/* 0047661C 10000076 */  b     .L004767F8
/* 00476620 8FBC0034 */   lw    $gp, 0x34($sp)
.L00476624:
/* 00476624 5441000E */  bnel  $v0, $at, .L00476660
/* 00476628 24010064 */   li    $at, 100
/* 0047662C 8E0F0004 */  lw    $t7, 4($s0)
/* 00476630 24010003 */  li    $at, 3
/* 00476634 91F9002E */  lbu   $t9, 0x2e($t7)
/* 00476638 332A0007 */  andi  $t2, $t9, 7
/* 0047663C 5141006F */  beql  $t2, $at, .L004767FC
/* 00476640 8E100008 */   lw    $s0, 8($s0)
/* 00476644 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 00476648 02002025 */  move  $a0, $s0
/* 0047664C 0320F809 */  jalr  $t9
/* 00476650 00000000 */   nop   
/* 00476654 10000068 */  b     .L004767F8
/* 00476658 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0047665C 24010064 */  li    $at, 100
.L00476660:
/* 00476660 54410048 */  bnel  $v0, $at, .L00476784
/* 00476664 24010066 */   li    $at, 102
/* 00476668 8F998030 */  lw    $t9, %got(func_00476034)($gp)
/* 0047666C 8E04001C */  lw    $a0, 0x1c($s0)
/* 00476670 02C01025 */  move  $v0, $s6
/* 00476674 27396034 */  addiu $t9, %lo(func_00476034) # addiu $t9, $t9, 0x6034
/* 00476678 0320F809 */  jalr  $t9
/* 0047667C 00000000 */   nop   
/* 00476680 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476684 10400037 */  beqz  $v0, .L00476764
/* 00476688 00408825 */   move  $s1, $v0
/* 0047668C 92030015 */  lbu   $v1, 0x15($s0)
/* 00476690 8E670000 */  lw    $a3, ($s3)
/* 00476694 24050001 */  li    $a1, 1
/* 00476698 00E3001A */  div   $zero, $a3, $v1
/* 0047669C 00002010 */  mfhi  $a0
/* 004766A0 0083C026 */  xor   $t8, $a0, $v1
/* 004766A4 14600002 */  bnez  $v1, .L004766B0
/* 004766A8 00000000 */   nop   
/* 004766AC 0007000D */  break 7
.L004766B0:
/* 004766B0 2401FFFF */  li    $at, -1
/* 004766B4 14610004 */  bne   $v1, $at, .L004766C8
/* 004766B8 3C018000 */   lui   $at, 0x8000
/* 004766BC 14E10002 */  bne   $a3, $at, .L004766C8
/* 004766C0 00000000 */   nop   
/* 004766C4 0006000D */  break 6
.L004766C8:
/* 004766C8 00E35821 */  addu  $t3, $a3, $v1
/* 004766CC 07010002 */  bgez  $t8, .L004766D8
/* 004766D0 00000000 */   nop   
/* 004766D4 00832021 */  addu  $a0, $a0, $v1
.L004766D8:
/* 004766D8 10800003 */  beqz  $a0, .L004766E8
/* 004766DC 00000000 */   nop   
/* 004766E0 01643823 */  subu  $a3, $t3, $a0
/* 004766E4 AE670000 */  sw    $a3, ($s3)
.L004766E8:
/* 004766E8 8F898B48 */  lw     $t1, %got(stack_reversed)($gp)
/* 004766EC AC500000 */  sw    $s0, ($v0)
/* 004766F0 91290000 */  lbu   $t1, ($t1)
/* 004766F4 1520000D */  bnez  $t1, .L0047672C
/* 004766F8 00000000 */   nop   
/* 004766FC 920D0015 */  lbu   $t5, 0x15($s0)
/* 00476700 02002025 */  move  $a0, $s0
/* 00476704 24050001 */  li    $a1, 1
/* 00476708 00ED7021 */  addu  $t6, $a3, $t5
/* 0047670C AE6E0000 */  sw    $t6, ($s3)
/* 00476710 8F9985D4 */  lw    $t9, %call16(par_to_str)($gp)
/* 00476714 000E3023 */  negu  $a2, $t6
/* 00476718 AE260008 */  sw    $a2, 8($s1)
/* 0047671C 0320F809 */  jalr  $t9
/* 00476720 00000000 */   nop   
/* 00476724 1000000B */  b     .L00476754
/* 00476728 8FBC0034 */   lw    $gp, 0x34($sp)
.L0047672C:
/* 0047672C 8F9985D4 */  lw    $t9, %call16(par_to_str)($gp)
/* 00476730 AE270008 */  sw    $a3, 8($s1)
/* 00476734 02002025 */  move  $a0, $s0
/* 00476738 0320F809 */  jalr  $t9
/* 0047673C 00E03025 */   move  $a2, $a3
/* 00476740 8E680000 */  lw    $t0, ($s3)
/* 00476744 920F0015 */  lbu   $t7, 0x15($s0)
/* 00476748 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0047674C 010FC821 */  addu  $t9, $t0, $t7
/* 00476750 AE790000 */  sw    $t9, ($s3)
.L00476754:
/* 00476754 8EAA0000 */  lw    $t2, ($s5)
/* 00476758 8D580004 */  lw    $t8, 4($t2)
/* 0047675C 10000026 */  b     .L004767F8
/* 00476760 AE38000C */   sw    $t8, 0xc($s1)
.L00476764:
/* 00476764 8F9985D4 */  lw    $t9, %call16(par_to_str)($gp)
/* 00476768 02002025 */  move  $a0, $s0
/* 0047676C 00002825 */  move  $a1, $zero
/* 00476770 0320F809 */  jalr  $t9
/* 00476774 00003025 */   move  $a2, $zero
/* 00476778 1000001F */  b     .L004767F8
/* 0047677C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00476780 24010066 */  li    $at, 102
.L00476784:
/* 00476784 5441000D */  bnel  $v0, $at, .L004767BC
/* 00476788 24010011 */   li    $at, 17
/* 0047678C 8F9985D8 */  lw    $t9, %call16(pmov_to_mov)($gp)
/* 00476790 02002025 */  move  $a0, $s0
/* 00476794 0320F809 */  jalr  $t9
/* 00476798 00000000 */   nop   
/* 0047679C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004767A0 02002025 */  move  $a0, $s0
/* 004767A4 8F9985F8 */  lw    $t9, %call16(fix_par_vreg)($gp)
/* 004767A8 0320F809 */  jalr  $t9
/* 004767AC 00000000 */   nop   
/* 004767B0 10000011 */  b     .L004767F8
/* 004767B4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004767B8 24010011 */  li    $at, 17
.L004767BC:
/* 004767BC 5441000D */  bnel  $v0, $at, .L004767F4
/* 004767C0 2409005C */   li    $t1, 92
/* 004767C4 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 004767C8 24040011 */  li    $a0, 17
/* 004767CC 0320F809 */  jalr  $t9
/* 004767D0 00000000 */   nop   
/* 004767D4 8EA20000 */  lw    $v0, ($s5)
/* 004767D8 8E0B0014 */  lw    $t3, 0x14($s0)
/* 004767DC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004767E0 AC4B0014 */  sw    $t3, 0x14($v0)
/* 004767E4 8E0C0018 */  lw    $t4, 0x18($s0)
/* 004767E8 10000003 */  b     .L004767F8
/* 004767EC AC4C0018 */   sw    $t4, 0x18($v0)
/* 004767F0 2409005C */  li    $t1, 92
.L004767F4:
/* 004767F4 004902B6 */  tne   $v0, $t1, 0xa
.L004767F8:
/* 004767F8 8E100008 */  lw    $s0, 8($s0)
.L004767FC:
/* 004767FC 8FAD0060 */  lw    $t5, 0x60($sp)
/* 00476800 92020000 */  lbu   $v0, ($s0)
/* 00476804 57C2FF75 */  bnel  $fp, $v0, .L004765DC
/* 00476808 2C480080 */   sltiu $t0, $v0, 0x80
/* 0047680C 11A00011 */  beqz  $t5, .L00476854
/* 00476810 00000000 */   nop   
.L00476814:
/* 00476814 8FAE0060 */  lw    $t6, 0x60($sp)
/* 00476818 00002825 */  move  $a1, $zero
/* 0047681C 00003025 */  move  $a2, $zero
/* 00476820 8DC8000C */  lw    $t0, 0xc($t6)
/* 00476824 8DCF0000 */  lw    $t7, ($t6)
/* 00476828 ADE80004 */  sw    $t0, 4($t7)
/* 0047682C 8FB90060 */  lw    $t9, 0x60($sp)
/* 00476830 8F240000 */  lw    $a0, ($t9)
/* 00476834 8F9985D4 */  lw    $t9, %call16(par_to_str)($gp)
/* 00476838 0320F809 */  jalr  $t9
/* 0047683C 00000000 */   nop   
/* 00476840 8FAA0060 */  lw    $t2, 0x60($sp)
/* 00476844 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476848 8D580010 */  lw    $t8, 0x10($t2)
/* 0047684C 1700FFF1 */  bnez  $t8, .L00476814
/* 00476850 AFB80060 */   sw    $t8, 0x60($sp)
.L00476854:
/* 00476854 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00476858 24040088 */  li    $a0, 136
/* 0047685C 0320F809 */  jalr  $t9
/* 00476860 00000000 */   nop   
/* 00476864 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476868 8EAC0000 */  lw    $t4, ($s5)
/* 0047686C 8F9289AC */  lw     $s2, %got(graphhead)($gp)
/* 00476870 8E520000 */  lw    $s2, ($s2)
/* 00476874 8E4B0000 */  lw    $t3, ($s2)
/* 00476878 AD8B0014 */  sw    $t3, 0x14($t4)
/* 0047687C 8EF10000 */  lw    $s1, ($s7)
/* 00476880 8E290018 */  lw    $t1, 0x18($s1)
/* 00476884 8D220000 */  lw    $v0, ($t1)
/* 00476888 8C500014 */  lw    $s0, 0x14($v0)
/* 0047688C 8E0D0000 */  lw    $t5, ($s0)
/* 00476890 562D0005 */  bnel  $s1, $t5, .L004768A8
/* 00476894 02001025 */   move  $v0, $s0
/* 00476898 8E0E0004 */  lw    $t6, 4($s0)
/* 0047689C 10000008 */  b     .L004768C0
/* 004768A0 AC4E0014 */   sw    $t6, 0x14($v0)
/* 004768A4 02001025 */  move  $v0, $s0
.L004768A8:
/* 004768A8 8E100004 */  lw    $s0, 4($s0)
/* 004768AC 8E080000 */  lw    $t0, ($s0)
/* 004768B0 5628FFFD */  bnel  $s1, $t0, .L004768A8
/* 004768B4 02001025 */   move  $v0, $s0
/* 004768B8 8E0F0004 */  lw    $t7, 4($s0)
/* 004768BC AC4F0004 */  sw    $t7, 4($v0)
.L004768C0:
/* 004768C0 8E390018 */  lw    $t9, 0x18($s1)
/* 004768C4 24040008 */  li    $a0, 8
/* 004768C8 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004768CC AF320000 */  sw    $s2, ($t9)
/* 004768D0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004768D4 0320F809 */  jalr  $t9
/* 004768D8 00000000 */   nop   
/* 004768DC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004768E0 8EF10000 */  lw    $s1, ($s7)
/* 004768E4 8F9289AC */  lw     $s2, %got(graphhead)($gp)
/* 004768E8 AC510000 */  sw    $s1, ($v0)
/* 004768EC 8E520000 */  lw    $s2, ($s2)
/* 004768F0 8E4A0014 */  lw    $t2, 0x14($s2)
/* 004768F4 AC4A0004 */  sw    $t2, 4($v0)
/* 004768F8 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 004768FC 8EB80000 */  lw    $t8, ($s5)
/* 00476900 AE420014 */  sw    $v0, 0x14($s2)
/* 00476904 0320F809 */  jalr  $t9
/* 00476908 AE380020 */   sw    $t8, 0x20($s1)
/* 0047690C 8E8B0020 */  lw    $t3, 0x20($s4)
/* 00476910 8EA20000 */  lw    $v0, ($s5)
/* 00476914 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476918 8D6C0008 */  lw    $t4, 8($t3)
/* 0047691C AC4C0008 */  sw    $t4, 8($v0)
/* 00476920 AD82000C */  sw    $v0, 0xc($t4)
/* 00476924 8FAD0070 */  lw    $t5, 0x70($sp)
/* 00476928 8EF40000 */  lw    $s4, ($s7)
/* 0047692C AEAD0000 */  sw    $t5, ($s5)
.L00476930:
/* 00476930 AFB40080 */  sw    $s4, 0x80($sp)
.L00476934:
/* 00476934 8E94000C */  lw    $s4, 0xc($s4)
/* 00476938 93AE0067 */  lbu   $t6, 0x67($sp)
/* 0047693C 5680FE71 */  bnezl $s4, .L00476304
/* 00476940 8E820020 */   lw    $v0, 0x20($s4)
/* 00476944 51C0004B */  beql  $t6, $zero, .L00476A74
/* 00476948 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0047694C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00476950 24040174 */  li    $a0, 372
/* 00476954 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00476958 0320F809 */  jalr  $t9
/* 0047695C 00000000 */   nop   
/* 00476960 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476964 0040A025 */  move  $s4, $v0
/* 00476968 00402025 */  move  $a0, $v0
/* 0047696C 8F9982C8 */  lw    $t9, %call16(init_graphnode)($gp)
/* 00476970 0320F809 */  jalr  $t9
/* 00476974 00000000 */   nop   
/* 00476978 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0047697C 24040034 */  li    $a0, 52
/* 00476980 8F8389B8 */  lw     $v1, %got(curstaticno)($gp)
/* 00476984 8F9289AC */  lw     $s2, %got(graphhead)($gp)
/* 00476988 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0047698C 8C620000 */  lw    $v0, ($v1)
/* 00476990 8E520000 */  lw    $s2, ($s2)
/* 00476994 A6820008 */  sh    $v0, 8($s4)
/* 00476998 AE92000C */  sw    $s2, 0xc($s4)
/* 0047699C 8E4F0134 */  lw    $t7, 0x134($s2)
/* 004769A0 24480001 */  addiu $t0, $v0, 1
/* 004769A4 AC680000 */  sw    $t0, ($v1)
/* 004769A8 AE8F0134 */  sw    $t7, 0x134($s4)
/* 004769AC 8E59002C */  lw    $t9, 0x2c($s2)
/* 004769B0 AE99002C */  sw    $t9, 0x2c($s4)
/* 004769B4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004769B8 0320F809 */  jalr  $t9
/* 004769BC 00000000 */   nop   
/* 004769C0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004769C4 240A0060 */  li    $t2, 96
/* 004769C8 02802025 */  move  $a0, $s4
/* 004769CC 8F8389C0 */  lw     $v1, %got(stathead)($gp)
/* 004769D0 8F8189C0 */  lw     $at, %got(stathead)($gp)
/* 004769D4 8C630000 */  lw    $v1, ($v1)
/* 004769D8 AC430008 */  sw    $v1, 8($v0)
/* 004769DC AC62000C */  sw    $v0, 0xc($v1)
/* 004769E0 AC40000C */  sw    $zero, 0xc($v0)
/* 004769E4 A04A0000 */  sb    $t2, ($v0)
/* 004769E8 AC540010 */  sw    $s4, 0x10($v0)
/* 004769EC AC400028 */  sw    $zero, 0x28($v0)
/* 004769F0 8F9982CC */  lw    $t9, %call16(init_node_vectors)($gp)
/* 004769F4 AE82001C */  sw    $v0, 0x1c($s4)
/* 004769F8 AE820020 */  sw    $v0, 0x20($s4)
/* 004769FC 0320F809 */  jalr  $t9
/* 00476A00 AC220000 */   sw    $v0, ($at)
/* 00476A04 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476A08 24040008 */  li    $a0, 8
/* 00476A0C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00476A10 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00476A14 0320F809 */  jalr  $t9
/* 00476A18 00000000 */   nop   
/* 00476A1C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476A20 AC540000 */  sw    $s4, ($v0)
/* 00476A24 24040008 */  li    $a0, 8
/* 00476A28 8F9289AC */  lw     $s2, %got(graphhead)($gp)
/* 00476A2C 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00476A30 8E520000 */  lw    $s2, ($s2)
/* 00476A34 8E580014 */  lw    $t8, 0x14($s2)
/* 00476A38 AC580004 */  sw    $t8, 4($v0)
/* 00476A3C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00476A40 AE420014 */  sw    $v0, 0x14($s2)
/* 00476A44 0320F809 */  jalr  $t9
/* 00476A48 00000000 */   nop   
/* 00476A4C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00476A50 8F8B89AC */  lw     $t3, %got(graphhead)($gp)
/* 00476A54 8F8189AC */  lw     $at, %got(graphhead)($gp)
/* 00476A58 8D6B0000 */  lw    $t3, ($t3)
/* 00476A5C AC4B0000 */  sw    $t3, ($v0)
/* 00476A60 8E8C0018 */  lw    $t4, 0x18($s4)
/* 00476A64 AC4C0004 */  sw    $t4, 4($v0)
/* 00476A68 AE820018 */  sw    $v0, 0x18($s4)
/* 00476A6C AC340000 */  sw    $s4, ($at)
.L00476A70:
/* 00476A70 8FBF003C */  lw    $ra, 0x3c($sp)
.L00476A74:
/* 00476A74 8FB00014 */  lw    $s0, 0x14($sp)
/* 00476A78 8FB10018 */  lw    $s1, 0x18($sp)
/* 00476A7C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00476A80 8FB30020 */  lw    $s3, 0x20($sp)
/* 00476A84 8FB40024 */  lw    $s4, 0x24($sp)
/* 00476A88 8FB50028 */  lw    $s5, 0x28($sp)
/* 00476A8C 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00476A90 8FB70030 */  lw    $s7, 0x30($sp)
/* 00476A94 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00476A98 03E00008 */  jr    $ra
/* 00476A9C 27BD0088 */   addiu $sp, $sp, 0x88
    .type tail_recursion, @function
    .size tail_recursion, .-tail_recursion
    .end tail_recursion
)"");
