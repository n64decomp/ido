__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.data
# 10012280
glabel output
    # 00434720 processargs
    .word __iob + 0x10
    .byte 0x00,0x00,0x00,0x00
    .type output, @object
    .size output, .-output # 8




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");
