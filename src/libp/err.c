__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.data
# 10011C20
glabel err
    # 004205F8 genrlodrstr
    # 0042BF08 reemit
    # 0042EB10 incorp_feedback
    # 0042EF10 func_0042EF10
    # 0042F6CC controlflow
    # 00434720 processargs
    # 0043771C optinit
    # 0043A0CC copyline
    # 00444A84 isearchloop
    # 00456A2C oneproc
    # 0045806C main
    # 00458678 mtagwarning
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    # 0045C150 prepass
    # 0047B320 stackerror
    # 0047B3F8 boundswarning
    # 0047B51C ovfwwarning
    # 0047BDF8 dbgerror
    # 0047FF7C skipproc
    .word __iob + 0x20
    .byte 0x00,0x00,0x00,0x00
    .type err, @object
    .size err, .-err # 8




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");
