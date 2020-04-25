__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel gethostsex
    .ent gethostsex
    # 00488C8C st_fdadd
    # 0048D0E0 st_readst
    # 0048FBB0 swap_fd
    # 004902CC swap_sym
    # 00490550 swap_ext
    # 00490EC0 swap_opt
    # 00491140 swap_aux
    # 0049139C swap_reloc
/* 0048A400 27BDFFF8 */  addiu $sp, $sp, -8
/* 0048A404 240E0001 */  li    $t6, 1
/* 0048A408 AFAE0004 */  sw    $t6, 4($sp)
/* 0048A40C 83AF0004 */  lb    $t7, 4($sp)
/* 0048A410 24010001 */  li    $at, 1
/* 0048A414 00001025 */  move  $v0, $zero
/* 0048A418 15E10003 */  bne   $t7, $at, .L0048A428
/* 0048A41C 00000000 */   nop   
/* 0048A420 10000001 */  b     .L0048A428
/* 0048A424 24020001 */   li    $v0, 1
.L0048A428:
/* 0048A428 03E00008 */  jr    $ra
/* 0048A42C 27BD0008 */   addiu $sp, $sp, 8
    .type gethostsex, @function
    .size gethostsex, .-gethostsex
    .end gethostsex
)"");
