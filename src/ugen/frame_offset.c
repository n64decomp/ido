__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel frame_offset
    .ent frame_offset
    # 0042670C loadstore
    # 00428D14 eval_mov
    # 0042BDAC eval
/* 004350E0 3C1C0FBF */  .cpload $t9
/* 004350E4 279CA970 */  
/* 004350E8 0399E021 */  
/* 004350EC 8F838A64 */  lw     $v1, %got(frame_size)($gp)
/* 004350F0 8C630000 */  lw    $v1, ($v1)
/* 004350F4 14600003 */  bnez  $v1, .L00435104
/* 004350F8 00000000 */   nop   
/* 004350FC 03E00008 */  jr    $ra
/* 00435100 8C82002C */   lw    $v0, 0x2c($a0)

.L00435104:
/* 00435104 8F8E8A74 */  lw     $t6, %got(reversed_stack)($gp)
/* 00435108 91CE0000 */  lbu   $t6, ($t6)
/* 0043510C 51C00006 */  beql  $t6, $zero, .L00435128
/* 00435110 8C98002C */   lw    $t8, 0x2c($a0)
/* 00435114 8C8F002C */  lw    $t7, 0x2c($a0)
/* 00435118 006F1023 */  subu  $v0, $v1, $t7
/* 0043511C 03E00008 */  jr    $ra
/* 00435120 00021023 */   negu  $v0, $v0

/* 00435124 8C98002C */  lw    $t8, 0x2c($a0)
.L00435128:
/* 00435128 03031021 */  addu  $v0, $t8, $v1
/* 0043512C 03E00008 */  jr    $ra
/* 00435130 00000000 */   nop   
    .type frame_offset, @function
    .size frame_offset, .-frame_offset
    .end frame_offset

glabel frame_offset1
    .ent frame_offset1
    # 00424934 restore_from_temp
    # 00440EA0 gen_store
/* 00435134 3C1C0FBF */  .cpload $t9
/* 00435138 279CA91C */  
/* 0043513C 0399E021 */  
/* 00435140 8F838A64 */  lw     $v1, %got(frame_size)($gp)
/* 00435144 8C630000 */  lw    $v1, ($v1)
/* 00435148 14600003 */  bnez  $v1, .L00435158
/* 0043514C 00000000 */   nop   
/* 00435150 03E00008 */  jr    $ra
/* 00435154 00801025 */   move  $v0, $a0

.L00435158:
/* 00435158 8F8E8A74 */  lw     $t6, %got(reversed_stack)($gp)
/* 0043515C 00831021 */  addu  $v0, $a0, $v1
/* 00435160 91CE0000 */  lbu   $t6, ($t6)
/* 00435164 11C00004 */  beqz  $t6, .L00435178
/* 00435168 00000000 */   nop   
/* 0043516C 00641023 */  subu  $v0, $v1, $a0
/* 00435170 03E00008 */  jr    $ra
/* 00435174 00021023 */   negu  $v0, $v0

.L00435178:
/* 00435178 03E00008 */  jr    $ra
/* 0043517C 00000000 */   nop   
    .type frame_offset1, @function
    .size frame_offset1, .-frame_offset1
    .end frame_offset1
)"");
