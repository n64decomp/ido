__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel swap_tree
    .ent swap_tree
    # 0040F4C8 build_tree
    # 004432FC translate
/* 00435190 8CAE0000 */  lw    $t6, ($a1)
/* 00435194 8C820000 */  lw    $v0, ($a0)
/* 00435198 AC8E0000 */  sw    $t6, ($a0)
/* 0043519C 03E00008 */  jr    $ra
/* 004351A0 ACA20000 */   sw    $v0, ($a1)
    .type swap_tree, @function
    .size swap_tree, .-swap_tree
    .end swap_tree

glabel swap_int
    .ent swap_int
    # 0040F4C8 build_tree
/* 004351A4 8CAE0000 */  lw    $t6, ($a1)
/* 004351A8 8C820000 */  lw    $v0, ($a0)
/* 004351AC AC8E0000 */  sw    $t6, ($a0)
/* 004351B0 03E00008 */  jr    $ra
/* 004351B4 ACA20000 */   sw    $v0, ($a1)
    .type swap_int, @function
    .size swap_int, .-swap_int
    .end swap_int
)"");
