__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel st_feinit
    .ent st_feinit
    # 0048AE84 st_filebegin
/* 00439BC4 03E00008 */  jr    $ra
/* 00439BC8 00000000 */   nop   
    .type st_feinit, @function
    .size st_feinit, .-st_feinit
    .end st_feinit
)"");
