__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000D630:
    # 00441860 force_casting
    .asciz "translate.p"

    .balign 4
jtbl_1000D63C:
    # 00441860 force_casting
    .gpword .L004418D0
    .gpword .L004418C4
    .gpword .L004418DC
    .gpword .L004418B8

RO_1000D64C:
    # 0044202C set_rewrite
    .ascii "illegal u-code                                                                  "

RO_1000D69C:
    # 0044202C set_rewrite
    .ascii "translate.p                                                                     "

    .balign 4
jtbl_1000D6EC:
    # 0044202C set_rewrite
    .gpword .L0044273C
    .gpword .L00442754

    .balign 4
jtbl_1000D6F4:
    # 0044202C set_rewrite
    .gpword .L004421B8
    .gpword .L004427C0
    .gpword .L00442134

RO_1000D700:
    # 00442968 set_rewrite_indexed
    .ascii "illegal u-code                                                                  "

RO_1000D750:
    # 00442968 set_rewrite_indexed
    .ascii "translate.p                                                                     "

    .balign 4
jtbl_1000D7A0:
    # 00442968 set_rewrite_indexed
    .gpword .L0044302C
    .gpword .L0044305C

    .balign 4
jtbl_1000D7A8:
    # 00442968 set_rewrite_indexed
    .gpword .L00442B04
    .gpword .L004430E0
    .gpword .L00442A94

RO_1000D7B4:
    # 004432FC translate
    .ascii "illegal data type for sqrt instruction                                          "

RO_1000D804:
    # 004432FC translate
    .ascii "translate.p                                                                     "

    .balign 4
jtbl_1000D854:
    # 004432FC translate
    .gpword .L00443C48
    .gpword .L00443B74

    .balign 4
jtbl_1000D85C:
    # 004432FC translate
    .gpword .L00443AA0
    .gpword .L00443D18

    .balign 4
jtbl_1000D864:
    # 004432FC translate
    .gpword .L00443794
    .gpword .L00444E54
    .gpword .L00444B08
    .gpword .L004447A0
    .gpword .L00443924
    .gpword .L00445FFC
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00443924
    .gpword .L004434F0
    .gpword .L00443710
    .gpword .L00443710
    .gpword .L00443638
    .gpword .L004435B0
    .gpword .L004460D4

    .balign 4
jtbl_1000D8A8:
    # 004432FC translate
    .gpword .L00444230
    .gpword .L00443794
    .gpword .L00444B54
    .gpword .L00446200
    .gpword .L004448BC
    .gpword .L00445120
    .gpword .L00443924
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L0044407C
    .gpword .L00446200
    .gpword .L00443924
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00443508
    .gpword .L00446200
    .gpword .L00443924
    .gpword .L00443924
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L004447BC
    .gpword .L00446200
    .gpword .L00444AB8
    .gpword .L00444AB8
    .gpword .L00444AB8
    .gpword .L004434A0
    .gpword .L00444D28
    .gpword .L00446200
    .gpword .L00444AB8
    .gpword .L00444AB8
    .gpword .L00445B3C
    .gpword .L00446200
    .gpword .L00444AB8
    .gpword .L00446200
    .gpword .L00445464
    .gpword .L004450F8
    .gpword .L00443924
    .gpword .L00445B3C
    .gpword .L00445CA0
    .gpword .L00445CA0
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L004447A0
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00444DAC
    .gpword .L00446058
    .gpword .L00444DCC
    .gpword .L00446200
    .gpword .L0044601C
    .gpword .L00446200
    .gpword .L00443924
    .gpword .L00443924
    .gpword .L00446200
    .gpword .L00443794
    .gpword .L00443424
    .gpword .L0044484C
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00443924
    .gpword .L00443924
    .gpword .L00443924
    .gpword .L00444AB8
    .gpword .L00446200
    .gpword .L00443794
    .gpword .L00443924
    .gpword .L00445800
    .gpword .L00445240
    .gpword .L00443794
    .gpword .L00443924
    .gpword .L00446200
    .gpword .L00443794
    .gpword .L00445054
    .gpword .L004441CC
    .gpword .L0044580C
    .gpword .L00446200
    .gpword .L00443794
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00443924
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00443794
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00445170
    .gpword .L00443924
    .gpword .L00443924
    .gpword .L0044610C
    .gpword .L00443794
    .gpword .L00443794
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L0044580C
    .gpword .L00446084
    .gpword .L00443924
    .gpword .L00446200
    .gpword .L00443508

    .balign 4
jtbl_1000DA4C:
    # 004432FC translate
    .gpword .L00443794
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L00446200
    .gpword .L004450D0
    .gpword .L0044489C
    .gpword .L00445FDC
    .gpword .L00443924

    .balign 4
jtbl_1000DA6C:
    # 004432FC translate
    .gpword .L00445C54
    .gpword .L00445E5C
    .gpword .L00444DCC
    .gpword .L00446200
    .gpword .L00444230

RO_1000DA80:
    # 00446368 cse_equ
    .ascii "illegal u-code                                                                  "

RO_1000DAD0:
    # 00446368 cse_equ
    .ascii "translate.p                                                                     "

    .balign 4
jtbl_1000DB20:
    # 00446368 cse_equ
    .gpword .L00446470
    .gpword .L0044671C
    .gpword .L004465E0
    .gpword .L00446A2C
    .gpword .L004466B0

    .balign 4
jtbl_1000DB34:
    # 00446368 cse_equ
    .gpword .L004464C0
    .gpword .L004464C0
    .gpword .L00446438

    .balign 4
jtbl_1000DB40:
    # 00446368 cse_equ
    .gpword .L00446578
    .gpword .L00446510
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L004466B0
    .gpword .L0044671C

    .balign 4
jtbl_1000DB58:
    # 00446368 cse_equ
    .gpword .L00446628
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L00446824
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L004466B0
    .gpword .L004467A0
    .gpword .L004466B0
    .gpword .L00446824

    .balign 4
jtbl_1000DB88:
    # 00446368 cse_equ
    .gpword .L004468F4
    .gpword .L004463C8

    .balign 4
jtbl_1000DB90:
    # 00446368 cse_equ
    .gpword .L004466B0
    .gpword .L004466B0
    .gpword .L00446A2C
    .gpword .L00446438
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L004466B0
    .gpword .L004466B0
    .gpword .L0044671C
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L0044671C
    .gpword .L00446A2C
    .gpword .L004466B0
    .gpword .L00446470
    .gpword .L004466B0
    .gpword .L00446A2C
    .gpword .L00446438

    .balign 4
jtbl_1000DBE4:
    # 00446368 cse_equ
    .gpword .L004466B0
    .gpword .L004466B0
    .gpword .L00446A2C
    .gpword .L00446438
    .gpword .L00446438

    .balign 4
jtbl_1000DBF8:
    # 00446368 cse_equ
    .gpword .L00446578
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L004467A0
    .gpword .L00446A2C
    .gpword .L00446A2C
    .gpword .L004466B0

RO_1000DC18:
    # 00447150 check_vreg
    .ascii "offset/length mismatch between vreg and reference                               "

RO_1000DC68:
    # 00447150 check_vreg
    .ascii "translate.p                                                                     "

RO_1000DCB8:
    # 00447150 check_vreg
    .ascii "attempt to access undefined memory location                                     "

RO_1000DD08:
    # 00447150 check_vreg
    .ascii "translate.p                                                                     "

RO_1000DD58:
    # 0044747C find_vreg_mtag
    .ascii "offset/length mismatch between vreg and reference                               "

RO_1000DDA8:
    # 0044747C find_vreg_mtag
    .ascii "translate.p                                                                     "

RO_1000DDF8:
    # 0044747C find_vreg_mtag
    .ascii "attempt to access undefined memory location                                     "

RO_1000DE48:
    # 0044747C find_vreg_mtag
    .ascii "translate.p                                                                     "

RO_1000DE98:
    # 00447884 assign_vreg
    .ascii "illegal vreg type                                                               "

RO_1000DEE8:
    # 00447884 assign_vreg
    .ascii "translate.p                                                                     "

RO_1000DF38:
    # 00447884 assign_vreg
    .ascii "extended float not yet supported                                                "

RO_1000DF88:
    # 00447884 assign_vreg
    .ascii "translate.p                                                                     "

    .balign 4
jtbl_1000DFD8:
    # 00447884 assign_vreg
    .gpword .L004479B8
    .gpword .L00447D0C
    .gpword .L004479B8
    .gpword .L004479B8
    .gpword .L004479B8
    .gpword .L00447BF4
    .gpword .L004479B8
    .gpword .L00447BF4
    .gpword .L004479B8
    .gpword .L004479B8
    .gpword .L004479B8
    .gpword .L00447D0C
    .gpword .L004478D8
    .gpword .L004478D8
    .gpword .L004479B8
    .gpword .L00447BF4
    .gpword .L00447AF8

RO_1000E01C:
    # 004481CC uses
    .ascii "illegal u-code                                                                  "

RO_1000E06C:
    # 004481CC uses
    .ascii "translate.p                                                                     "

    .balign 4
jtbl_1000E0BC:
    # 004481CC uses
    .gpword .L004482DC
    .gpword .L004482E4
    .gpword .L004482DC
    .gpword .L00448328
    .gpword .L004482E4

    .balign 4
jtbl_1000E0D0:
    # 004481CC uses
    .gpword .L004482E4
    .gpword .L004482D4
    .gpword .L004482DC
    .gpword .L004482DC
    .gpword .L004482DC
    .gpword .L004482DC

    .balign 4
jtbl_1000E0E8:
    # 004481CC uses
    .gpword .L004482DC
    .gpword .L004482DC
    .gpword .L004482DC
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L004482E4

    .balign 4
jtbl_1000E100:
    # 004481CC uses
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L00448328
    .gpword .L004482DC
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L004482DC
    .gpword .L004482DC
    .gpword .L004482E4
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L004482DC
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L004482D4
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L004482D4
    .gpword .L004482D4
    .gpword .L00448328
    .gpword .L004482D4
    .gpword .L00448328
    .gpword .L004482D4
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L00448328
    .gpword .L004482DC
    .gpword .L00448328
    .gpword .L00448270
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L004482DC
    .gpword .L004482E4
    .gpword .L00448328
    .gpword .L004482DC
    .gpword .L004482DC

    .balign 4
jtbl_1000E1EC:
    # 004481CC uses
    .gpword .L004482DC
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L004482DC
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L004482E4
    .gpword .L004482DC
    .gpword .L004482DC

    .balign 4
jtbl_1000E214:
    # 004481CC uses
    .gpword .L004482DC
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L004482E4
    .gpword .L00448328
    .gpword .L00448328
    .gpword .L004482E4

    .balign 4
jtbl_1000E234:
    # 004481CC uses
    .gpword .L004482DC
    .gpword .L00448328
    .gpword .L004482D4

.data
# 10016780
glabel expression_opcs
    # 004432FC translate
    .byte 0x01,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    .type expression_opcs, @object
    .size expression_opcs, .-expression_opcs # 156

# 1001681C
glabel h
    # 0044196C get_set_const
    .byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    .type h, @object
    .size h, .-h # 128

# 1001689C
glabel reverse
    # 0040F4C8 build_tree
    # 004432FC translate
    .byte 0x60,0x01,0x60,0x60,0x04,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x23,0x60,0x60,0x60,0x60,0x4d,0x4e,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x3c,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x28,0x29,0x60,0x60,0x60,0x60,0x60,0x60,0x55,0x56,0x60,0x60,0x60,0x60,0x5b,0x60,0x60,0x60,0x5f,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x8d,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60
    .type reverse, @object
    .size reverse, .-reverse # 156

# 10016938
glabel no_cse_flag
    # 004432FC translate
    # 00446C08 cse
    # 00447E14 load_cse
    .byte 0x00,0x00,0x00,0x00
    .type no_cse_flag, @object
    .size no_cse_flag, .-no_cse_flag # 4

D_1001693C:
    # 00441E4C gen_set_equ
    .byte 0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_10016944:
    # 004432FC translate
    .byte 0x00,0x00,0x20,0x06,0x01,0x00,0x20,0x20,0x0e,0x05,0x80,0x10

D_10016950:
    # 004432FC translate
    .byte 0x00,0x80,0x10,0x10,0x80,0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x90,0x00,0x40,0x00

D_10016960:
    # 004432FC translate
    .byte 0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_10016968:
    # 004432FC translate
    .byte 0x00,0x00,0x00,0x04,0x00,0x00,0x20,0x00

D_10016970:
    # 00446E94 free_tree_and_cse
    .byte 0x10,0x10,0x40,0x00,0x42,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00,0x01,0x00,0x88,0x00,0x00

D_10016984:
    # 00446E94 free_tree_and_cse
    .byte 0x10,0x10,0x40,0x00,0x40,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00,0x00

D_10016994:
    # 00446E94 free_tree_and_cse
    .byte 0x00,0x00,0x00,0x04,0x00,0x00,0x20,0x00

D_1001699C:
    # 00447E14 load_cse
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_100169A8:
    # 00447E14 load_cse
    .byte 0x00,0x00,0x00,0x04,0x00,0x00,0x20,0x00

D_100169B0:
    # 00448584 add_store
    .byte 0x00,0x00,0x02,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00



.bss
    .balign 4
# 100213F4
glabel max_vreg_offset
    # 004432FC translate
    # 00447884 assign_vreg
    .space 4
    .size max_vreg_offset, 4
    .type max_vreg_offset, @object

    .balign 4
# 100213F8
glabel max_fp_vreg_offset
    # 004432FC translate
    # 00447884 assign_vreg
    .space 4
    .size max_fp_vreg_offset, 4
    .type max_fp_vreg_offset, @object

    .balign 4
# 100213FC
glabel vreg_offset
    # 004432FC translate
    # 00447884 assign_vreg
    .space 4
    .size vreg_offset, 4
    .type vreg_offset, @object

    .balign 4
# 10021400
glabel fp_vreg_offset
    # 004432FC translate
    # 00447884 assign_vreg
    .space 4
    .size fp_vreg_offset, 4
    .type fp_vreg_offset, @object

    .balign 4
# 10021404
glabel vreg_count
    # 004432FC translate
    # 00447150 check_vreg
    # 0044747C find_vreg_mtag
    # 00447884 assign_vreg
    .space 4
    .size vreg_count, 4
    .type vreg_count, @object

    .balign 4
# 10021408
glabel mst_node
    # 004432FC translate
    .space 4
    .size mst_node, 4
    .type mst_node, @object

    .balign 4
# 1002140C
glabel expr_count
    # 004432FC translate
    # 00446C08 cse
    # 00446E94 free_tree_and_cse
    # 00448F78 check_loads_exprs
    .space 4
    .size expr_count, 4
    .type expr_count, @object

    .balign 4
# 10021410
glabel load_count
    # 004432FC translate
    # 00446E94 free_tree_and_cse
    # 00447E14 load_cse
    # 00448584 add_store
    # 00448F78 check_loads_exprs
    .space 4
    .size load_count, 4
    .type load_count, @object

    .balign 4
# 10021418
glabel bb_size
    # 004432FC translate
    .space 4
    .size bb_size, 4
    .type bb_size, @object

    .balign 4
# 1002141C
glabel leaf
    # 004432FC translate
    .space 4
    .size leaf, 4
    .type leaf, @object

    .balign 4
# 10021420
glabel has_entry
    # 004432FC translate
    # 00447884 assign_vreg
    .space 4
    .size has_entry, 4
    .type has_entry, @object

    .balign 4
# 10021424
glabel varargs
    # 004432FC translate
    .space 4
    .size varargs, 4
    .type varargs, @object

    .balign 4
# 10021428
glabel calls
    # 00443284 translate_tree
    # 004432FC translate
    .space 4
    .size calls, 4
    .type calls, @object

    .balign 16
# 10021540
glabel exprs
    # 004432FC translate
    # 00446C08 cse
    # 00446E94 free_tree_and_cse
    # 00448F78 check_loads_exprs
    .space 40
    .size exprs, 40
    .type exprs, @object

    .balign 16
# 10021568
glabel loads
    # 00446E94 free_tree_and_cse
    # 00447E14 load_cse
    # 00448584 add_store
    # 00448F78 check_loads_exprs
    .space 40
    .size loads, 40
    .type loads, @object

    .balign 16
# 10021680
glabel vregs
    # 00447150 check_vreg
    # 0044747C find_vreg_mtag
    # 00447884 assign_vreg
    .space 112
    .size vregs, 112
    .type vregs, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel force_casting
    .ent force_casting
    # 00446C08 cse
/* 00441860 3C1C0FBE */  .cpload $t9
/* 00441864 279CE1F0 */  
/* 00441868 0399E021 */  
/* 0044186C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00441870 28A10005 */  slti  $at, $a1, 5
/* 00441874 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00441878 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044187C 10200022 */  beqz  $at, .L00441908
/* 00441880 AFA40028 */   sw    $a0, 0x28($sp)
/* 00441884 AFA00020 */  sw    $zero, 0x20($sp)
/* 00441888 8C8F0030 */  lw    $t7, 0x30($a0)
/* 0044188C 24B8FFFF */  addiu $t8, $a1, -1
/* 00441890 2F010004 */  sltiu $at, $t8, 4
/* 00441894 10200011 */  beqz  $at, .L004418DC
/* 00441898 AFAF0024 */   sw    $t7, 0x24($sp)
/* 0044189C 8F818038 */  lw    $at, %got(jtbl_1000D63C)($gp)
/* 004418A0 0018C080 */  sll   $t8, $t8, 2
/* 004418A4 00380821 */  addu  $at, $at, $t8
/* 004418A8 8C38D63C */  lw    $t8, %lo(jtbl_1000D63C)($at)
/* 004418AC 031CC021 */  addu  $t8, $t8, $gp
/* 004418B0 03000008 */  jr    $t8
/* 004418B4 00000000 */   nop   
.L004418B8:
/* 004418B8 8FB90024 */  lw    $t9, 0x24($sp)
/* 004418BC 1000000F */  b     .L004418FC
/* 004418C0 AFB90020 */   sw    $t9, 0x20($sp)
.L004418C4:
/* 004418C4 97A80026 */  lhu   $t0, 0x26($sp)
/* 004418C8 1000000C */  b     .L004418FC
/* 004418CC A7A80022 */   sh    $t0, 0x22($sp)
.L004418D0:
/* 004418D0 93A90027 */  lbu   $t1, 0x27($sp)
/* 004418D4 10000009 */  b     .L004418FC
/* 004418D8 A3A90023 */   sb    $t1, 0x23($sp)
.L004418DC:
/* 004418DC 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 004418E0 8F868038 */  lw    $a2, %got(RO_1000D630)($gp)
/* 004418E4 24040001 */  li    $a0, 1
/* 004418E8 24050113 */  li    $a1, 275
/* 004418EC 2407000B */  li    $a3, 11
/* 004418F0 0320F809 */  jalr  $t9
/* 004418F4 24C6D630 */   addiu $a2, %lo(RO_1000D630) # addiu $a2, $a2, -0x29d0
/* 004418F8 8FBC0018 */  lw    $gp, 0x18($sp)
.L004418FC:
/* 004418FC 8FAA0020 */  lw    $t2, 0x20($sp)
/* 00441900 8FAB0028 */  lw    $t3, 0x28($sp)
/* 00441904 AD6A0030 */  sw    $t2, 0x30($t3)
.L00441908:
/* 00441908 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044190C 27BD0028 */  addiu $sp, $sp, 0x28
/* 00441910 03E00008 */  jr    $ra
/* 00441914 00000000 */   nop   
    .type force_casting, @function
    .size force_casting, .-force_casting
    .end force_casting

glabel is_power_of_two
    .ent is_power_of_two
    # 004432FC translate
/* 00441918 04810003 */  bgez  $a0, .L00441928
/* 0044191C 00001025 */   move  $v0, $zero
/* 00441920 03E00008 */  jr    $ra
/* 00441924 00001025 */   move  $v0, $zero

.L00441928:
/* 00441928 24050020 */  li    $a1, 32
/* 0044192C 24030001 */  li    $v1, 1
.L00441930:
/* 00441930 308E0001 */  andi  $t6, $a0, 1
/* 00441934 146E0008 */  bne   $v1, $t6, .L00441958
/* 00441938 24420001 */   addiu $v0, $v0, 1
/* 0044193C 00047842 */  srl   $t7, $a0, 1
/* 00441940 15E00003 */  bnez  $t7, .L00441950
/* 00441944 00000000 */   nop   
/* 00441948 03E00008 */  jr    $ra
/* 0044194C 24020001 */   li    $v0, 1

.L00441950:
/* 00441950 03E00008 */  jr    $ra
/* 00441954 00001025 */   move  $v0, $zero

.L00441958:
/* 00441958 1445FFF5 */  bne   $v0, $a1, .L00441930
/* 0044195C 00042043 */   sra   $a0, $a0, 1
/* 00441960 24020001 */  li    $v0, 1
/* 00441964 03E00008 */  jr    $ra
/* 00441968 00000000 */   nop   
    .type is_power_of_two, @function
    .size is_power_of_two, .-is_power_of_two
    .end is_power_of_two

glabel get_set_const
    .ent get_set_const
    # 0044202C set_rewrite
    # 004432FC translate
/* 0044196C 3C1C0FBE */  .cpload $t9
/* 00441970 279CE0E4 */  
/* 00441974 0399E021 */  
/* 00441978 AFA60008 */  sw    $a2, 8($sp)
/* 0044197C 00A61821 */  addu  $v1, $a1, $a2
/* 00441980 8C820000 */  lw    $v0, ($a0)
/* 00441984 04610003 */  bgez  $v1, .L00441994
/* 00441988 00033883 */   sra   $a3, $v1, 2
/* 0044198C 24610003 */  addiu $at, $v1, 3
/* 00441990 00013883 */  sra   $a3, $at, 2
.L00441994:
/* 00441994 004702B2 */  tlt   $v0, $a3, 0xa
/* 00441998 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0044199C 00004025 */  move  $t0, $zero
/* 004419A0 00E04825 */  move  $t1, $a3
/* 004419A4 91CE0000 */  lbu   $t6, ($t6)
/* 004419A8 55C00008 */  bnel  $t6, $zero, .L004419CC
/* 004419AC 00023880 */   sll   $a3, $v0, 2
/* 004419B0 04A10003 */  bgez  $a1, .L004419C0
/* 004419B4 00053083 */   sra   $a2, $a1, 2
/* 004419B8 24A10003 */  addiu $at, $a1, 3
/* 004419BC 00013083 */  sra   $a2, $at, 2
.L004419C0:
/* 004419C0 1000000D */  b     .L004419F8
/* 004419C4 24C60001 */   addiu $a2, $a2, 1
/* 004419C8 00023880 */  sll   $a3, $v0, 2
.L004419CC:
/* 004419CC 00E54823 */  subu  $t1, $a3, $a1
/* 004419D0 05210002 */  bgez  $t1, .L004419DC
/* 004419D4 01200821 */   move  $at, $t1
/* 004419D8 25210003 */  addiu $at, $t1, 3
.L004419DC:
/* 004419DC 00014883 */  sra   $t1, $at, 2
/* 004419E0 00E33023 */  subu  $a2, $a3, $v1
/* 004419E4 04C10002 */  bgez  $a2, .L004419F0
/* 004419E8 00C00821 */   move  $at, $a2
/* 004419EC 24C10003 */  addiu $at, $a2, 3
.L004419F0:
/* 004419F0 00013083 */  sra   $a2, $at, 2
/* 004419F4 24C60001 */  addiu $a2, $a2, 1
.L004419F8:
/* 004419F8 0126082B */  sltu  $at, $t1, $a2
/* 004419FC 1420002D */  bnez  $at, .L00441AB4
/* 00441A00 25220001 */   addiu $v0, $t1, 1
/* 00441A04 00464823 */  subu  $t1, $v0, $a2
/* 00441A08 31290003 */  andi  $t1, $t1, 3
/* 00441A0C 1120000F */  beqz  $t1, .L00441A4C
/* 00441A10 00C01825 */   move  $v1, $a2
/* 00441A14 8C8F0004 */  lw    $t7, 4($a0)
/* 00441A18 01263821 */  addu  $a3, $t1, $a2
/* 00441A1C 01E62821 */  addu  $a1, $t7, $a2
/* 00441A20 8F868918 */  lw     $a2, %got(h)($gp)
.L00441A24:
/* 00441A24 90B9FFFF */  lbu   $t9, -1($a1)
/* 00441A28 0008C100 */  sll   $t8, $t0, 4
/* 00441A2C 24630001 */  addiu $v1, $v1, 1
/* 00441A30 00D95021 */  addu  $t2, $a2, $t9
/* 00441A34 914B0000 */  lbu   $t3, ($t2)
/* 00441A38 24A50001 */  addiu $a1, $a1, 1
/* 00441A3C 14E3FFF9 */  bne   $a3, $v1, .L00441A24
/* 00441A40 030B4021 */   addu  $t0, $t8, $t3
/* 00441A44 1062001B */  beq   $v1, $v0, .L00441AB4
/* 00441A48 00000000 */   nop   
.L00441A4C:
/* 00441A4C 8C8C0004 */  lw    $t4, 4($a0)
/* 00441A50 8F868918 */  lw     $a2, %got(h)($gp)
/* 00441A54 01832821 */  addu  $a1, $t4, $v1
.L00441A58:
/* 00441A58 90AEFFFF */  lbu   $t6, -1($a1)
/* 00441A5C 90B80000 */  lbu   $t8, ($a1)
/* 00441A60 00086900 */  sll   $t5, $t0, 4
/* 00441A64 00CE7821 */  addu  $t7, $a2, $t6
/* 00441A68 91F90000 */  lbu   $t9, ($t7)
/* 00441A6C 00D85821 */  addu  $t3, $a2, $t8
/* 00441A70 916C0000 */  lbu   $t4, ($t3)
/* 00441A74 90AF0001 */  lbu   $t7, 1($a1)
/* 00441A78 01B94021 */  addu  $t0, $t5, $t9
/* 00441A7C 00085100 */  sll   $t2, $t0, 4
/* 00441A80 90AB0002 */  lbu   $t3, 2($a1)
/* 00441A84 014C4021 */  addu  $t0, $t2, $t4
/* 00441A88 00CF6821 */  addu  $t5, $a2, $t7
/* 00441A8C 91B90000 */  lbu   $t9, ($t5)
/* 00441A90 00087100 */  sll   $t6, $t0, 4
/* 00441A94 00CB5021 */  addu  $t2, $a2, $t3
/* 00441A98 914C0000 */  lbu   $t4, ($t2)
/* 00441A9C 01D94021 */  addu  $t0, $t6, $t9
/* 00441AA0 0008C100 */  sll   $t8, $t0, 4
/* 00441AA4 24630004 */  addiu $v1, $v1, 4
/* 00441AA8 24A50004 */  addiu $a1, $a1, 4
/* 00441AAC 1462FFEA */  bne   $v1, $v0, .L00441A58
/* 00441AB0 030C4021 */   addu  $t0, $t8, $t4
.L00441AB4:
/* 00441AB4 03E00008 */  jr    $ra
/* 00441AB8 01001025 */   move  $v0, $t0
    .type get_set_const, @function
    .size get_set_const, .-get_set_const
    .end get_set_const

glabel gen_set_str
    .ent gen_set_str
    # 004432FC translate
/* 00441ABC 3C1C0FBE */  .cpload $t9
/* 00441AC0 279CDF94 */  
/* 00441AC4 0399E021 */  
/* 00441AC8 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 00441ACC AFBF003C */  sw    $ra, 0x3c($sp)
/* 00441AD0 AFBE0038 */  sw    $fp, 0x38($sp)
/* 00441AD4 AFBC0034 */  sw    $gp, 0x34($sp)
/* 00441AD8 AFB70030 */  sw    $s7, 0x30($sp)
/* 00441ADC AFB6002C */  sw    $s6, 0x2c($sp)
/* 00441AE0 AFB50028 */  sw    $s5, 0x28($sp)
/* 00441AE4 AFB40024 */  sw    $s4, 0x24($sp)
/* 00441AE8 AFB30020 */  sw    $s3, 0x20($sp)
/* 00441AEC AFB2001C */  sw    $s2, 0x1c($sp)
/* 00441AF0 AFB10018 */  sw    $s1, 0x18($sp)
/* 00441AF4 AFB00014 */  sw    $s0, 0x14($sp)
/* 00441AF8 908E0020 */  lbu   $t6, 0x20($a0)
/* 00441AFC 3C010800 */  lui   $at, 0x800
/* 00441B00 34210010 */  ori   $at, $at, 0x10
/* 00441B04 25CFFFA0 */  addiu $t7, $t6, -0x60
/* 00441B08 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00441B0C 0018C823 */  negu  $t9, $t8
/* 00441B10 03214024 */  and   $t0, $t9, $at
/* 00441B14 01E84804 */  sllv  $t1, $t0, $t7
/* 00441B18 00808825 */  move  $s1, $a0
/* 00441B1C 012002B0 */  tge   $t1, $zero, 0xa
/* 00441B20 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 00441B24 8E2A0008 */  lw    $t2, 8($s1)
/* 00441B28 8E3E0000 */  lw    $fp, ($s1)
/* 00441B2C 0220A025 */  move  $s4, $s1
/* 00441B30 00002825 */  move  $a1, $zero
/* 00441B34 24060020 */  li    $a2, 32
/* 00441B38 AFAA0048 */  sw    $t2, 0x48($sp)
/* 00441B3C 0320F809 */  jalr  $t9
/* 00441B40 03C02025 */   move  $a0, $fp
/* 00441B44 8E330028 */  lw    $s3, 0x28($s1)
/* 00441B48 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441B4C AE220000 */  sw    $v0, ($s1)
/* 00441B50 26730003 */  addiu $s3, $s3, 3
/* 00441B54 06610002 */  bgez  $s3, .L00441B60
/* 00441B58 02600821 */   move  $at, $s3
/* 00441B5C 26610003 */  addiu $at, $s3, 3
.L00441B60:
/* 00441B60 00019883 */  sra   $s3, $at, 2
/* 00441B64 2673FFFF */  addiu $s3, $s3, -1
/* 00441B68 1260002D */  beqz  $s3, .L00441C20
/* 00441B6C 24120020 */   li    $s2, 32
/* 00441B70 26730001 */  addiu $s3, $s3, 1
/* 00441B74 0013A880 */  sll   $s5, $s3, 2
/* 00441B78 24100004 */  li    $s0, 4
/* 00441B7C 24170004 */  li    $s7, 4
/* 00441B80 2416FFE0 */  li    $s6, -32
.L00441B84:
/* 00441B84 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 00441B88 03C02025 */  move  $a0, $fp
/* 00441B8C 02402825 */  move  $a1, $s2
/* 00441B90 0320F809 */  jalr  $t9
/* 00441B94 24060020 */   li    $a2, 32
/* 00441B98 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441B9C 92240020 */  lbu   $a0, 0x20($s1)
/* 00441BA0 00402825 */  move  $a1, $v0
/* 00441BA4 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 00441BA8 0320F809 */  jalr  $t9
/* 00441BAC 00000000 */   nop   
/* 00441BB0 904B0021 */  lbu   $t3, 0x21($v0)
/* 00441BB4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441BB8 26520020 */  addiu $s2, $s2, 0x20
/* 00441BBC 01766024 */  and   $t4, $t3, $s6
/* 00441BC0 3583000E */  ori   $v1, $t4, 0xe
/* 00441BC4 A0430021 */  sb    $v1, 0x21($v0)
/* 00441BC8 922E0021 */  lbu   $t6, 0x21($s1)
/* 00441BCC 00034600 */  sll   $t0, $v1, 0x18
/* 00441BD0 00087F42 */  srl   $t7, $t0, 0x1d
/* 00441BD4 000EC600 */  sll   $t8, $t6, 0x18
/* 00441BD8 0018CF42 */  srl   $t9, $t8, 0x1d
/* 00441BDC 032F4826 */  xor   $t1, $t9, $t7
/* 00441BE0 00095740 */  sll   $t2, $t1, 0x1d
/* 00441BE4 000A5E02 */  srl   $t3, $t2, 0x18
/* 00441BE8 01636026 */  xor   $t4, $t3, $v1
/* 00441BEC A04C0021 */  sb    $t4, 0x21($v0)
/* 00441BF0 8E2D0024 */  lw    $t5, 0x24($s1)
/* 00441BF4 AC4D0024 */  sw    $t5, 0x24($v0)
/* 00441BF8 8E2E002C */  lw    $t6, 0x2c($s1)
/* 00441BFC AC570028 */  sw    $s7, 0x28($v0)
/* 00441C00 A4400022 */  sh    $zero, 0x22($v0)
/* 00441C04 01D0C021 */  addu  $t8, $t6, $s0
/* 00441C08 AC58002C */  sw    $t8, 0x2c($v0)
/* 00441C0C AE820008 */  sw    $v0, 8($s4)
/* 00441C10 26100004 */  addiu $s0, $s0, 4
/* 00441C14 1615FFDB */  bne   $s0, $s5, .L00441B84
/* 00441C18 0040A025 */   move  $s4, $v0
/* 00441C1C AFA20044 */  sw    $v0, 0x44($sp)
.L00441C20:
/* 00441C20 8FA50044 */  lw    $a1, 0x44($sp)
/* 00441C24 8FA80048 */  lw    $t0, 0x48($sp)
/* 00441C28 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00441C2C 24170004 */  li    $s7, 4
/* 00441C30 ACA80008 */  sw    $t0, 8($a1)
/* 00441C34 AE370028 */  sw    $s7, 0x28($s1)
/* 00441C38 A6200022 */  sh    $zero, 0x22($s1)
/* 00441C3C 0320F809 */  jalr  $t9
/* 00441C40 03C02025 */   move  $a0, $fp
/* 00441C44 8FBF003C */  lw    $ra, 0x3c($sp)
/* 00441C48 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441C4C 8FB00014 */  lw    $s0, 0x14($sp)
/* 00441C50 8FB10018 */  lw    $s1, 0x18($sp)
/* 00441C54 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00441C58 8FB30020 */  lw    $s3, 0x20($sp)
/* 00441C5C 8FB40024 */  lw    $s4, 0x24($sp)
/* 00441C60 8FB50028 */  lw    $s5, 0x28($sp)
/* 00441C64 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00441C68 8FB70030 */  lw    $s7, 0x30($sp)
/* 00441C6C 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00441C70 03E00008 */  jr    $ra
/* 00441C74 27BD0050 */   addiu $sp, $sp, 0x50
    .type gen_set_str, @function
    .size gen_set_str, .-gen_set_str
    .end gen_set_str

glabel gen_set_istr
    .ent gen_set_istr
    # 004432FC translate
/* 00441C78 3C1C0FBE */  .cpload $t9
/* 00441C7C 279CDDD8 */  
/* 00441C80 0399E021 */  
/* 00441C84 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 00441C88 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00441C8C AFBE0038 */  sw    $fp, 0x38($sp)
/* 00441C90 AFBC0034 */  sw    $gp, 0x34($sp)
/* 00441C94 AFB70030 */  sw    $s7, 0x30($sp)
/* 00441C98 AFB6002C */  sw    $s6, 0x2c($sp)
/* 00441C9C AFB50028 */  sw    $s5, 0x28($sp)
/* 00441CA0 AFB40024 */  sw    $s4, 0x24($sp)
/* 00441CA4 AFB30020 */  sw    $s3, 0x20($sp)
/* 00441CA8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00441CAC AFB10018 */  sw    $s1, 0x18($sp)
/* 00441CB0 AFB00014 */  sw    $s0, 0x14($sp)
/* 00441CB4 908E0020 */  lbu   $t6, 0x20($a0)
/* 00441CB8 00808825 */  move  $s1, $a0
/* 00441CBC 0220A025 */  move  $s4, $s1
/* 00441CC0 25CFFFE0 */  addiu $t7, $t6, -0x20
/* 00441CC4 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00441CC8 0018C823 */  negu  $t9, $t8
/* 00441CCC 33280003 */  andi  $t0, $t9, 3
/* 00441CD0 01E84804 */  sllv  $t1, $t0, $t7
/* 00441CD4 012002B0 */  tge   $t1, $zero, 0xa
/* 00441CD8 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 00441CDC 8E2A0008 */  lw    $t2, 8($s1)
/* 00441CE0 8E3E0004 */  lw    $fp, 4($s1)
/* 00441CE4 00002825 */  move  $a1, $zero
/* 00441CE8 24060020 */  li    $a2, 32
/* 00441CEC AFAA0048 */  sw    $t2, 0x48($sp)
/* 00441CF0 0320F809 */  jalr  $t9
/* 00441CF4 03C02025 */   move  $a0, $fp
/* 00441CF8 8E360028 */  lw    $s6, 0x28($s1)
/* 00441CFC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441D00 AE220004 */  sw    $v0, 4($s1)
/* 00441D04 26D60003 */  addiu $s6, $s6, 3
/* 00441D08 06C10002 */  bgez  $s6, .L00441D14
/* 00441D0C 02C00821 */   move  $at, $s6
/* 00441D10 26C10003 */  addiu $at, $s6, 3
.L00441D14:
/* 00441D14 0001B083 */  sra   $s6, $at, 2
/* 00441D18 26D6FFFF */  addiu $s6, $s6, -1
/* 00441D1C 12C00034 */  beqz  $s6, .L00441DF0
/* 00441D20 24120020 */   li    $s2, 32
/* 00441D24 26D60001 */  addiu $s6, $s6, 1
/* 00441D28 0016A880 */  sll   $s5, $s6, 2
/* 00441D2C 24100004 */  li    $s0, 4
/* 00441D30 2417FFE0 */  li    $s7, -32
.L00441D34:
/* 00441D34 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 00441D38 03C02025 */  move  $a0, $fp
/* 00441D3C 02402825 */  move  $a1, $s2
/* 00441D40 0320F809 */  jalr  $t9
/* 00441D44 24060020 */   li    $a2, 32
/* 00441D48 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441D4C 00409825 */  move  $s3, $v0
/* 00441D50 8E240000 */  lw    $a0, ($s1)
/* 00441D54 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00441D58 0320F809 */  jalr  $t9
/* 00441D5C 00000000 */   nop   
/* 00441D60 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441D64 92240020 */  lbu   $a0, 0x20($s1)
/* 00441D68 00402825 */  move  $a1, $v0
/* 00441D6C 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00441D70 02603025 */  move  $a2, $s3
/* 00441D74 0320F809 */  jalr  $t9
/* 00441D78 00000000 */   nop   
/* 00441D7C 904B0021 */  lbu   $t3, 0x21($v0)
/* 00441D80 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441D84 26520020 */  addiu $s2, $s2, 0x20
/* 00441D88 01776024 */  and   $t4, $t3, $s7
/* 00441D8C 3583000E */  ori   $v1, $t4, 0xe
/* 00441D90 A0430021 */  sb    $v1, 0x21($v0)
/* 00441D94 922E0021 */  lbu   $t6, 0x21($s1)
/* 00441D98 00034600 */  sll   $t0, $v1, 0x18
/* 00441D9C 00087F42 */  srl   $t7, $t0, 0x1d
/* 00441DA0 000EC600 */  sll   $t8, $t6, 0x18
/* 00441DA4 0018CF42 */  srl   $t9, $t8, 0x1d
/* 00441DA8 032F4826 */  xor   $t1, $t9, $t7
/* 00441DAC 00095740 */  sll   $t2, $t1, 0x1d
/* 00441DB0 000A5E02 */  srl   $t3, $t2, 0x18
/* 00441DB4 01636026 */  xor   $t4, $t3, $v1
/* 00441DB8 A04C0021 */  sb    $t4, 0x21($v0)
/* 00441DBC 8E2D0024 */  lw    $t5, 0x24($s1)
/* 00441DC0 24080004 */  li    $t0, 4
/* 00441DC4 AC4D0024 */  sw    $t5, 0x24($v0)
/* 00441DC8 8E2E002C */  lw    $t6, 0x2c($s1)
/* 00441DCC AC480028 */  sw    $t0, 0x28($v0)
/* 00441DD0 A4400022 */  sh    $zero, 0x22($v0)
/* 00441DD4 01D0C021 */  addu  $t8, $t6, $s0
/* 00441DD8 AC58002C */  sw    $t8, 0x2c($v0)
/* 00441DDC AE820008 */  sw    $v0, 8($s4)
/* 00441DE0 26100004 */  addiu $s0, $s0, 4
/* 00441DE4 1615FFD3 */  bne   $s0, $s5, .L00441D34
/* 00441DE8 0040A025 */   move  $s4, $v0
/* 00441DEC AFA20044 */  sw    $v0, 0x44($sp)
.L00441DF0:
/* 00441DF0 8FB30044 */  lw    $s3, 0x44($sp)
/* 00441DF4 8FB90048 */  lw    $t9, 0x48($sp)
/* 00441DF8 240F0004 */  li    $t7, 4
/* 00441DFC 03C02025 */  move  $a0, $fp
/* 00441E00 AE790008 */  sw    $t9, 8($s3)
/* 00441E04 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00441E08 AE2F0028 */  sw    $t7, 0x28($s1)
/* 00441E0C A6200022 */  sh    $zero, 0x22($s1)
/* 00441E10 0320F809 */  jalr  $t9
/* 00441E14 00000000 */   nop   
/* 00441E18 8FBF003C */  lw    $ra, 0x3c($sp)
/* 00441E1C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441E20 8FB00014 */  lw    $s0, 0x14($sp)
/* 00441E24 8FB10018 */  lw    $s1, 0x18($sp)
/* 00441E28 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00441E2C 8FB30020 */  lw    $s3, 0x20($sp)
/* 00441E30 8FB40024 */  lw    $s4, 0x24($sp)
/* 00441E34 8FB50028 */  lw    $s5, 0x28($sp)
/* 00441E38 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00441E3C 8FB70030 */  lw    $s7, 0x30($sp)
/* 00441E40 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00441E44 03E00008 */  jr    $ra
/* 00441E48 27BD0050 */   addiu $sp, $sp, 0x50
    .type gen_set_istr, @function
    .size gen_set_istr, .-gen_set_istr
    .end gen_set_istr

glabel gen_set_equ
    .ent gen_set_equ
    # 004432FC translate
/* 00441E4C 3C1C0FBE */  .cpload $t9
/* 00441E50 279CDC04 */  
/* 00441E54 0399E021 */  
/* 00441E58 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00441E5C AFBF003C */  sw    $ra, 0x3c($sp)
/* 00441E60 AFBC0038 */  sw    $gp, 0x38($sp)
/* 00441E64 AFB70034 */  sw    $s7, 0x34($sp)
/* 00441E68 AFB60030 */  sw    $s6, 0x30($sp)
/* 00441E6C AFB5002C */  sw    $s5, 0x2c($sp)
/* 00441E70 AFB40028 */  sw    $s4, 0x28($sp)
/* 00441E74 AFB30024 */  sw    $s3, 0x24($sp)
/* 00441E78 AFB20020 */  sw    $s2, 0x20($sp)
/* 00441E7C AFB1001C */  sw    $s1, 0x1c($sp)
/* 00441E80 AFB00018 */  sw    $s0, 0x18($sp)
/* 00441E84 908E0020 */  lbu   $t6, 0x20($a0)
/* 00441E88 0080A825 */  move  $s5, $a0
/* 00441E8C 25CFFFE0 */  addiu $t7, $t6, -0x20
/* 00441E90 2DF80040 */  sltiu $t8, $t7, 0x40
/* 00441E94 5300000A */  beql  $t8, $zero, .L00441EC0
/* 00441E98 030002B4 */   teq   $t8, $zero, 0xa
/* 00441E9C 8F898038 */  lw    $t1, %got(D_1001693C)($gp)
/* 00441EA0 000FC943 */  sra   $t9, $t7, 5
/* 00441EA4 00194080 */  sll   $t0, $t9, 2
/* 00441EA8 2529693C */  addiu $t1, %lo(D_1001693C) # addiu $t1, $t1, 0x693c
/* 00441EAC 01285021 */  addu  $t2, $t1, $t0
/* 00441EB0 8D4B0000 */  lw    $t3, ($t2)
/* 00441EB4 01EB6004 */  sllv  $t4, $t3, $t7
/* 00441EB8 29980000 */  slti  $t8, $t4, 0
/* 00441EBC 030002B4 */  teq   $t8, $zero, 0xa
.L00441EC0:
/* 00441EC0 8EA50000 */  lw    $a1, ($s5)
/* 00441EC4 0000A025 */  move  $s4, $zero
/* 00441EC8 2417FFFF */  li    $s7, -1
/* 00441ECC 8CA20028 */  lw    $v0, 0x28($a1)
/* 00441ED0 2416FFE0 */  li    $s6, -32
/* 00441ED4 24420003 */  addiu $v0, $v0, 3
/* 00441ED8 04410002 */  bgez  $v0, .L00441EE4
/* 00441EDC 00400821 */   move  $at, $v0
/* 00441EE0 24410003 */  addiu $at, $v0, 3
.L00441EE4:
/* 00441EE4 00011083 */  sra   $v0, $at, 2
/* 00441EE8 2451FFFF */  addiu $s1, $v0, -1
/* 00441EEC 00119140 */  sll   $s2, $s1, 5
.L00441EF0:
/* 00441EF0 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 00441EF4 8EA40000 */  lw    $a0, ($s5)
/* 00441EF8 02408025 */  move  $s0, $s2
/* 00441EFC 02402825 */  move  $a1, $s2
/* 00441F00 0320F809 */  jalr  $t9
/* 00441F04 24060020 */   li    $a2, 32
/* 00441F08 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00441F0C 00409825 */  move  $s3, $v0
/* 00441F10 8EA40004 */  lw    $a0, 4($s5)
/* 00441F14 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 00441F18 02002825 */  move  $a1, $s0
/* 00441F1C 24060020 */  li    $a2, 32
/* 00441F20 0320F809 */  jalr  $t9
/* 00441F24 00000000 */   nop   
/* 00441F28 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00441F2C 2404008D */  li    $a0, 141
/* 00441F30 02602825 */  move  $a1, $s3
/* 00441F34 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00441F38 00403025 */  move  $a2, $v0
/* 00441F3C 0320F809 */  jalr  $t9
/* 00441F40 00000000 */   nop   
/* 00441F44 904E0021 */  lbu   $t6, 0x21($v0)
/* 00441F48 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00441F4C 00403025 */  move  $a2, $v0
/* 00441F50 01D6C824 */  and   $t9, $t6, $s6
/* 00441F54 37290008 */  ori   $t1, $t9, 8
/* 00441F58 16800003 */  bnez  $s4, .L00441F68
/* 00441F5C A0490021 */   sb    $t1, 0x21($v0)
/* 00441F60 1000000C */  b     .L00441F94
/* 00441F64 0040A025 */   move  $s4, $v0
.L00441F68:
/* 00441F68 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00441F6C 2404003C */  li    $a0, 60
/* 00441F70 02802825 */  move  $a1, $s4
/* 00441F74 0320F809 */  jalr  $t9
/* 00441F78 00000000 */   nop   
/* 00441F7C 90480021 */  lbu   $t0, 0x21($v0)
/* 00441F80 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00441F84 0040A025 */  move  $s4, $v0
/* 00441F88 01165024 */  and   $t2, $t0, $s6
/* 00441F8C 354B0008 */  ori   $t3, $t2, 8
/* 00441F90 A04B0021 */  sb    $t3, 0x21($v0)
.L00441F94:
/* 00441F94 2631FFFF */  addiu $s1, $s1, -1
/* 00441F98 1637FFD5 */  bne   $s1, $s7, .L00441EF0
/* 00441F9C 2652FFE0 */   addiu $s2, $s2, -0x20
/* 00441FA0 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00441FA4 8EA40000 */  lw    $a0, ($s5)
/* 00441FA8 2416FFE0 */  li    $s6, -32
/* 00441FAC 0320F809 */  jalr  $t9
/* 00441FB0 00000000 */   nop   
/* 00441FB4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00441FB8 8EA40004 */  lw    $a0, 4($s5)
/* 00441FBC 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00441FC0 0320F809 */  jalr  $t9
/* 00441FC4 00000000 */   nop   
/* 00441FC8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00441FCC 92AF0021 */  lbu   $t7, 0x21($s5)
/* 00441FD0 AEB40000 */  sw    $s4, ($s5)
/* 00441FD4 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00441FD8 01F66024 */  and   $t4, $t7, $s6
/* 00441FDC 358D0008 */  ori   $t5, $t4, 8
/* 00441FE0 A2AD0021 */  sb    $t5, 0x21($s5)
/* 00441FE4 24040008 */  li    $a0, 8
/* 00441FE8 00002825 */  move  $a1, $zero
/* 00441FEC 0320F809 */  jalr  $t9
/* 00441FF0 00003025 */   move  $a2, $zero
/* 00441FF4 8FBF003C */  lw    $ra, 0x3c($sp)
/* 00441FF8 AEA20004 */  sw    $v0, 4($s5)
/* 00441FFC 02A01025 */  move  $v0, $s5
/* 00442000 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00442004 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00442008 8FB00018 */  lw    $s0, 0x18($sp)
/* 0044200C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00442010 8FB20020 */  lw    $s2, 0x20($sp)
/* 00442014 8FB30024 */  lw    $s3, 0x24($sp)
/* 00442018 8FB40028 */  lw    $s4, 0x28($sp)
/* 0044201C 8FB60030 */  lw    $s6, 0x30($sp)
/* 00442020 8FB70034 */  lw    $s7, 0x34($sp)
/* 00442024 03E00008 */  jr    $ra
/* 00442028 27BD0040 */   addiu $sp, $sp, 0x40
    .type gen_set_equ, @function
    .size gen_set_equ, .-gen_set_equ
    .end gen_set_equ

glabel set_rewrite
    .ent set_rewrite
    # 00441ABC gen_set_str
    # 00441C78 gen_set_istr
    # 00441E4C gen_set_equ
    # 0044202C set_rewrite
    # 004432FC translate
/* 0044202C 3C1C0FBE */  .cpload $t9
/* 00442030 279CDA24 */  
/* 00442034 0399E021 */  
/* 00442038 27BDFF20 */  addiu $sp, $sp, -0xe0
/* 0044203C AFB100B4 */  sw    $s1, 0xb4($sp)
/* 00442040 AFB000B0 */  sw    $s0, 0xb0($sp)
/* 00442044 00A03825 */  move  $a3, $a1
/* 00442048 24050002 */  li    $a1, 2
/* 0044204C 00808025 */  move  $s0, $a0
/* 00442050 30D100FF */  andi  $s1, $a2, 0xff
/* 00442054 AFBF00BC */  sw    $ra, 0xbc($sp)
/* 00442058 AFBC00B8 */  sw    $gp, 0xb8($sp)
/* 0044205C AFA600E8 */  sw    $a2, 0xe8($sp)
/* 00442060 2408000E */  li    $t0, 14
.L00442064:
/* 00442064 100001C1 */  b     .L0044276C
/* 00442068 92020020 */   lbu   $v0, 0x20($s0)
/* 0044206C 920E0021 */  lbu   $t6, 0x21($s0)
.L00442070:
/* 00442070 31CF001F */  andi  $t7, $t6, 0x1f
/* 00442074 010F02B6 */  tne   $t0, $t7, 0xa
/* 00442078 8F9985D8 */  lw    $t9, %call16(get_set_const)($gp)
/* 0044207C 26040030 */  addiu $a0, $s0, 0x30
/* 00442080 00E02825 */  move  $a1, $a3
/* 00442084 0320F809 */  jalr  $t9
/* 00442088 02203025 */   move  $a2, $s1
/* 0044208C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442090 24040008 */  li    $a0, 8
/* 00442094 00002825 */  move  $a1, $zero
/* 00442098 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0044209C 00403025 */  move  $a2, $v0
/* 004420A0 0320F809 */  jalr  $t9
/* 004420A4 00000000 */   nop   
/* 004420A8 26380007 */  addiu $t8, $s1, 7
/* 004420AC 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004420B0 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 004420B4 07010003 */  bgez  $t8, .L004420C4
/* 004420B8 0018C8C3 */   sra   $t9, $t8, 3
/* 004420BC 27010007 */  addiu $at, $t8, 7
/* 004420C0 0001C8C3 */  sra   $t9, $at, 3
.L004420C4:
/* 004420C4 10000222 */  b     .L00442950
/* 004420C8 AC590028 */   sw    $t9, 0x28($v0)
/* 004420CC 92090021 */  lbu   $t1, 0x21($s0)
.L004420D0:
/* 004420D0 312A001F */  andi  $t2, $t1, 0x1f
/* 004420D4 010A02B6 */  tne   $t0, $t2, 0xa
/* 004420D8 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 004420DC 26040020 */  addiu $a0, $s0, 0x20
/* 004420E0 AFA700E4 */  sw    $a3, 0xe4($sp)
/* 004420E4 0320F809 */  jalr  $t9
/* 004420E8 00000000 */   nop   
/* 004420EC 8FA700E4 */  lw    $a3, 0xe4($sp)
/* 004420F0 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 004420F4 8C4B002C */  lw    $t3, 0x2c($v0)
/* 004420F8 262E0007 */  addiu $t6, $s1, 7
/* 004420FC 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442100 04E10003 */  bgez  $a3, .L00442110
/* 00442104 000760C3 */   sra   $t4, $a3, 3
/* 00442108 24E10007 */  addiu $at, $a3, 7
/* 0044210C 000160C3 */  sra   $t4, $at, 3
.L00442110:
/* 00442110 016C6821 */  addu  $t5, $t3, $t4
/* 00442114 AC4D002C */  sw    $t5, 0x2c($v0)
/* 00442118 05C10003 */  bgez  $t6, .L00442128
/* 0044211C 000E78C3 */   sra   $t7, $t6, 3
/* 00442120 25C10007 */  addiu $at, $t6, 7
/* 00442124 000178C3 */  sra   $t7, $at, 3
.L00442128:
/* 00442128 AC4F0028 */  sw    $t7, 0x28($v0)
/* 0044212C 10000208 */  b     .L00442950
/* 00442130 A4400022 */   sh    $zero, 0x22($v0)
.L00442134:
/* 00442134 92180021 */  lbu   $t8, 0x21($s0)
.L00442138:
/* 00442138 3319001F */  andi  $t9, $t8, 0x1f
/* 0044213C 011902B6 */  tne   $t0, $t9, 0xa
/* 00442140 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00442144 26040020 */  addiu $a0, $s0, 0x20
/* 00442148 AFA700E4 */  sw    $a3, 0xe4($sp)
/* 0044214C 0320F809 */  jalr  $t9
/* 00442150 00000000 */   nop   
/* 00442154 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442158 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 0044215C 8E040000 */  lw    $a0, ($s0)
/* 00442160 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442164 0320F809 */  jalr  $t9
/* 00442168 00000000 */   nop   
/* 0044216C 8FA700E4 */  lw    $a3, 0xe4($sp)
/* 00442170 8FA300D8 */  lw    $v1, 0xd8($sp)
/* 00442174 262C0007 */  addiu $t4, $s1, 7
/* 00442178 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0044217C 8C69002C */  lw    $t1, 0x2c($v1)
/* 00442180 AC620000 */  sw    $v0, ($v1)
/* 00442184 04E10003 */  bgez  $a3, .L00442194
/* 00442188 000750C3 */   sra   $t2, $a3, 3
/* 0044218C 24E10007 */  addiu $at, $a3, 7
/* 00442190 000150C3 */  sra   $t2, $at, 3
.L00442194:
/* 00442194 012A5821 */  addu  $t3, $t1, $t2
/* 00442198 AC6B002C */  sw    $t3, 0x2c($v1)
/* 0044219C 05810003 */  bgez  $t4, .L004421AC
/* 004421A0 000C68C3 */   sra   $t5, $t4, 3
/* 004421A4 25810007 */  addiu $at, $t4, 7
/* 004421A8 000168C3 */  sra   $t5, $at, 3
.L004421AC:
/* 004421AC AC6D0028 */  sw    $t5, 0x28($v1)
/* 004421B0 100001E7 */  b     .L00442950
/* 004421B4 A4600022 */   sh    $zero, 0x22($v1)
.L004421B8:
/* 004421B8 920E0021 */  lbu   $t6, 0x21($s0)
.L004421BC:
/* 004421BC 00E02825 */  move  $a1, $a3
/* 004421C0 31CF001F */  andi  $t7, $t6, 0x1f
/* 004421C4 010F02B6 */  tne   $t0, $t7, 0xa
/* 004421C8 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 004421CC 8E040000 */  lw    $a0, ($s0)
/* 004421D0 02203025 */  move  $a2, $s1
/* 004421D4 0320F809 */  jalr  $t9
/* 004421D8 AFA700E4 */   sw    $a3, 0xe4($sp)
/* 004421DC 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004421E0 8FA500E4 */  lw    $a1, 0xe4($sp)
/* 004421E4 AFA200C0 */  sw    $v0, 0xc0($sp)
/* 004421E8 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 004421EC 8E040004 */  lw    $a0, 4($s0)
/* 004421F0 02203025 */  move  $a2, $s1
/* 004421F4 0320F809 */  jalr  $t9
/* 004421F8 00000000 */   nop   
/* 004421FC 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442200 92040020 */  lbu   $a0, 0x20($s0)
/* 00442204 8FA500C0 */  lw    $a1, 0xc0($sp)
/* 00442208 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 0044220C 00403025 */  move  $a2, $v0
/* 00442210 0320F809 */  jalr  $t9
/* 00442214 00000000 */   nop   
/* 00442218 26380007 */  addiu $t8, $s1, 7
/* 0044221C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442220 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 00442224 07010003 */  bgez  $t8, .L00442234
/* 00442228 0018C8C3 */   sra   $t9, $t8, 3
/* 0044222C 27010007 */  addiu $at, $t8, 7
/* 00442230 0001C8C3 */  sra   $t9, $at, 3
.L00442234:
/* 00442234 100001C6 */  b     .L00442950
/* 00442238 AC590028 */   sw    $t9, 0x28($v0)
.L0044223C:
/* 0044223C 8E02002C */  lw    $v0, 0x2c($s0)
/* 00442240 323100FF */  andi  $s1, $s1, 0xff
/* 00442244 000218C0 */  sll   $v1, $v0, 3
/* 00442248 00E3082A */  slt   $at, $a3, $v1
/* 0044224C 14200008 */  bnez  $at, .L00442270
/* 00442250 00000000 */   nop   
/* 00442254 8E040000 */  lw    $a0, ($s0)
/* 00442258 8C890028 */  lw    $t1, 0x28($a0)
/* 0044225C 00495021 */  addu  $t2, $v0, $t1
/* 00442260 000A58C0 */  sll   $t3, $t2, 3
/* 00442264 00EB082A */  slt   $at, $a3, $t3
/* 00442268 14200009 */  bnez  $at, .L00442290
/* 0044226C 00E33823 */   subu  $a3, $a3, $v1
.L00442270:
/* 00442270 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442274 24040008 */  li    $a0, 8
/* 00442278 00002825 */  move  $a1, $zero
/* 0044227C 0320F809 */  jalr  $t9
/* 00442280 00003025 */   move  $a2, $zero
/* 00442284 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442288 100001B1 */  b     .L00442950
/* 0044228C AFA200D8 */   sw    $v0, 0xd8($sp)
.L00442290:
/* 00442290 1000FF74 */  b     .L00442064
/* 00442294 00808025 */   move  $s0, $a0
/* 00442298 8E040000 */  lw    $a0, ($s0)
.L0044229C:
/* 0044229C 24010049 */  li    $at, 73
/* 004422A0 908C0020 */  lbu   $t4, 0x20($a0)
/* 004422A4 15810028 */  bne   $t4, $at, .L00442348
/* 004422A8 00000000 */   nop   
/* 004422AC 8C820030 */  lw    $v0, 0x30($a0)
/* 004422B0 00F16821 */  addu  $t5, $a3, $s1
/* 004422B4 0047082A */  slt   $at, $v0, $a3
/* 004422B8 14200003 */  bnez  $at, .L004422C8
/* 004422BC 004D082A */   slt   $at, $v0, $t5
/* 004422C0 14200009 */  bnez  $at, .L004422E8
/* 004422C4 00000000 */   nop   
.L004422C8:
/* 004422C8 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004422CC 24040008 */  li    $a0, 8
/* 004422D0 00002825 */  move  $a1, $zero
/* 004422D4 0320F809 */  jalr  $t9
/* 004422D8 00003025 */   move  $a2, $zero
/* 004422DC 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004422E0 1000019B */  b     .L00442950
/* 004422E4 AFA200D8 */   sw    $v0, 0xd8($sp)
.L004422E8:
/* 004422E8 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 004422EC 0047C823 */  subu  $t9, $v0, $a3
/* 004422F0 3C098000 */  lui   $t1, 0x8000
/* 004422F4 91CE0000 */  lbu   $t6, ($t6)
/* 004422F8 24040008 */  li    $a0, 8
/* 004422FC 00002825 */  move  $a1, $zero
/* 00442300 11C00009 */  beqz  $t6, .L00442328
/* 00442304 03293006 */   srlv  $a2, $t1, $t9
/* 00442308 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0044230C 00477823 */  subu  $t7, $v0, $a3
/* 00442310 24180001 */  li    $t8, 1
/* 00442314 0320F809 */  jalr  $t9
/* 00442318 01F83004 */   sllv  $a2, $t8, $t7
/* 0044231C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442320 1000018B */  b     .L00442950
/* 00442324 AFA200D8 */   sw    $v0, 0xd8($sp)
.L00442328:
/* 00442328 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0044232C 24040008 */  li    $a0, 8
/* 00442330 00002825 */  move  $a1, $zero
/* 00442334 0320F809 */  jalr  $t9
/* 00442338 00000000 */   nop   
/* 0044233C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442340 10000183 */  b     .L00442950
/* 00442344 AFA200D8 */   sw    $v0, 0xd8($sp)
.L00442348:
/* 00442348 10E00018 */  beqz  $a3, .L004423AC
/* 0044234C 00000000 */   nop   
/* 00442350 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442354 AFA700E4 */  sw    $a3, 0xe4($sp)
/* 00442358 0320F809 */  jalr  $t9
/* 0044235C 00000000 */   nop   
/* 00442360 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442364 8FA700E4 */  lw    $a3, 0xe4($sp)
/* 00442368 AFA200C0 */  sw    $v0, 0xc0($sp)
/* 0044236C 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442370 24040006 */  li    $a0, 6
/* 00442374 00002825 */  move  $a1, $zero
/* 00442378 0320F809 */  jalr  $t9
/* 0044237C 00073023 */   negu  $a2, $a3
/* 00442380 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442384 24040001 */  li    $a0, 1
/* 00442388 8FA500C0 */  lw    $a1, 0xc0($sp)
/* 0044238C 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442390 00403025 */  move  $a2, $v0
/* 00442394 0320F809 */  jalr  $t9
/* 00442398 00000000 */   nop   
/* 0044239C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004423A0 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 004423A4 10000006 */  b     .L004423C0
/* 004423A8 A4400022 */   sh    $zero, 0x22($v0)
.L004423AC:
/* 004423AC 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 004423B0 0320F809 */  jalr  $t9
/* 004423B4 00000000 */   nop   
/* 004423B8 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004423BC AFA200D8 */  sw    $v0, 0xd8($sp)
.L004423C0:
/* 004423C0 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004423C4 24040008 */  li    $a0, 8
/* 004423C8 00002825 */  move  $a1, $zero
/* 004423CC 0320F809 */  jalr  $t9
/* 004423D0 02203025 */   move  $a2, $s1
/* 004423D4 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004423D8 2404004E */  li    $a0, 78
/* 004423DC 8FA500D8 */  lw    $a1, 0xd8($sp)
/* 004423E0 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004423E4 00403025 */  move  $a2, $v0
/* 004423E8 0320F809 */  jalr  $t9
/* 004423EC 00000000 */   nop   
/* 004423F0 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 004423F4 904A0021 */  lbu   $t2, 0x21($v0)
/* 004423F8 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004423FC 314BFFE0 */  andi  $t3, $t2, 0xffe0
/* 00442400 356C0008 */  ori   $t4, $t3, 8
/* 00442404 A04C0021 */  sb    $t4, 0x21($v0)
/* 00442408 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 0044240C 8E040000 */  lw    $a0, ($s0)
/* 00442410 0320F809 */  jalr  $t9
/* 00442414 00000000 */   nop   
/* 00442418 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0044241C 00408025 */  move  $s0, $v0
/* 00442420 8F8D898C */  lw     $t5, %got(lsb_first)($gp)
/* 00442424 91AD0000 */  lbu   $t5, ($t5)
/* 00442428 15A00008 */  bnez  $t5, .L0044244C
/* 0044242C 00000000 */   nop   
/* 00442430 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 00442434 24040061 */  li    $a0, 97
/* 00442438 00402825 */  move  $a1, $v0
/* 0044243C 0320F809 */  jalr  $t9
/* 00442440 00000000 */   nop   
/* 00442444 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442448 00408025 */  move  $s0, $v0
.L0044244C:
/* 0044244C 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442450 24040073 */  li    $a0, 115
/* 00442454 8FA500D8 */  lw    $a1, 0xd8($sp)
/* 00442458 0320F809 */  jalr  $t9
/* 0044245C 02003025 */   move  $a2, $s0
/* 00442460 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442464 1000013A */  b     .L00442950
/* 00442468 AFA200D8 */   sw    $v0, 0xd8($sp)
.L0044246C:
/* 0044246C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442470 8E040000 */  lw    $a0, ($s0)
/* 00442474 AFA700E4 */  sw    $a3, 0xe4($sp)
/* 00442478 0320F809 */  jalr  $t9
/* 0044247C 00000000 */   nop   
/* 00442480 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442484 AFA200D4 */  sw    $v0, 0xd4($sp)
/* 00442488 8E040004 */  lw    $a0, 4($s0)
/* 0044248C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442490 0320F809 */  jalr  $t9
/* 00442494 00000000 */   nop   
/* 00442498 8FA700E4 */  lw    $a3, 0xe4($sp)
/* 0044249C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004424A0 00408025 */  move  $s0, $v0
/* 004424A4 10E00011 */  beqz  $a3, .L004424EC
/* 004424A8 24040006 */   li    $a0, 6
/* 004424AC 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004424B0 00002825 */  move  $a1, $zero
/* 004424B4 00073023 */  negu  $a2, $a3
/* 004424B8 0320F809 */  jalr  $t9
/* 004424BC AFA700E4 */   sw    $a3, 0xe4($sp)
/* 004424C0 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004424C4 24040001 */  li    $a0, 1
/* 004424C8 8FA500D4 */  lw    $a1, 0xd4($sp)
/* 004424CC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004424D0 00403025 */  move  $a2, $v0
/* 004424D4 0320F809 */  jalr  $t9
/* 004424D8 00000000 */   nop   
/* 004424DC 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004424E0 8FA700E4 */  lw    $a3, 0xe4($sp)
/* 004424E4 AFA200D4 */  sw    $v0, 0xd4($sp)
/* 004424E8 A4400022 */  sh    $zero, 0x22($v0)
.L004424EC:
/* 004424EC 2401FFFF */  li    $at, -1
/* 004424F0 10E10010 */  beq   $a3, $at, .L00442534
/* 004424F4 24040006 */   li    $a0, 6
/* 004424F8 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004424FC 240E0001 */  li    $t6, 1
/* 00442500 01C73023 */  subu  $a2, $t6, $a3
/* 00442504 0320F809 */  jalr  $t9
/* 00442508 00002825 */   move  $a1, $zero
/* 0044250C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442510 24040001 */  li    $a0, 1
/* 00442514 02002825 */  move  $a1, $s0
/* 00442518 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 0044251C 00403025 */  move  $a2, $v0
/* 00442520 0320F809 */  jalr  $t9
/* 00442524 00000000 */   nop   
/* 00442528 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0044252C 00408025 */  move  $s0, $v0
/* 00442530 A4400022 */  sh    $zero, 0x22($v0)
.L00442534:
/* 00442534 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442538 24040006 */  li    $a0, 6
/* 0044253C 00002825 */  move  $a1, $zero
/* 00442540 0320F809 */  jalr  $t9
/* 00442544 00003025 */   move  $a2, $zero
/* 00442548 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0044254C 24040055 */  li    $a0, 85
/* 00442550 8FA500D4 */  lw    $a1, 0xd4($sp)
/* 00442554 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442558 00403025 */  move  $a2, $v0
/* 0044255C 0320F809 */  jalr  $t9
/* 00442560 00000000 */   nop   
/* 00442564 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442568 AFA200D4 */  sw    $v0, 0xd4($sp)
/* 0044256C 24040006 */  li    $a0, 6
/* 00442570 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442574 00002825 */  move  $a1, $zero
/* 00442578 02203025 */  move  $a2, $s1
/* 0044257C 0320F809 */  jalr  $t9
/* 00442580 00000000 */   nop   
/* 00442584 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442588 24040056 */  li    $a0, 86
/* 0044258C 02002825 */  move  $a1, $s0
/* 00442590 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442594 00403025 */  move  $a2, $v0
/* 00442598 0320F809 */  jalr  $t9
/* 0044259C 00000000 */   nop   
/* 004425A0 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004425A4 2404007D */  li    $a0, 125
/* 004425A8 8FA500D4 */  lw    $a1, 0xd4($sp)
/* 004425AC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004425B0 00403025 */  move  $a2, $v0
/* 004425B4 0320F809 */  jalr  $t9
/* 004425B8 00000000 */   nop   
/* 004425BC 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004425C0 A4400022 */  sh    $zero, 0x22($v0)
/* 004425C4 00408025 */  move  $s0, $v0
/* 004425C8 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004425CC 24040008 */  li    $a0, 8
/* 004425D0 00002825 */  move  $a1, $zero
/* 004425D4 0320F809 */  jalr  $t9
/* 004425D8 2406001F */   li    $a2, 31
/* 004425DC 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004425E0 24040074 */  li    $a0, 116
/* 004425E4 02002825 */  move  $a1, $s0
/* 004425E8 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004425EC 00403025 */  move  $a2, $v0
/* 004425F0 0320F809 */  jalr  $t9
/* 004425F4 00000000 */   nop   
/* 004425F8 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 004425FC 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442600 90580021 */  lbu   $t8, 0x21($v0)
/* 00442604 2411FFE0 */  li    $s1, -32
/* 00442608 8F99898C */  lw     $t9, %got(lsb_first)($gp)
/* 0044260C 330FFFE0 */  andi  $t7, $t8, 0xffe0
/* 00442610 35E90006 */  ori   $t1, $t7, 6
/* 00442614 A0490021 */  sb    $t1, 0x21($v0)
/* 00442618 93390000 */  lbu   $t9, ($t9)
/* 0044261C 13200024 */  beqz  $t9, .L004426B0
/* 00442620 00000000 */   nop   
/* 00442624 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442628 02002025 */  move  $a0, $s0
/* 0044262C 0320F809 */  jalr  $t9
/* 00442630 00000000 */   nop   
/* 00442634 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442638 24040074 */  li    $a0, 116
/* 0044263C 8FA500D8 */  lw    $a1, 0xd8($sp)
/* 00442640 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442644 00403025 */  move  $a2, $v0
/* 00442648 0320F809 */  jalr  $t9
/* 0044264C 00000000 */   nop   
/* 00442650 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 00442654 904A0021 */  lbu   $t2, 0x21($v0)
/* 00442658 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0044265C 01515824 */  and   $t3, $t2, $s1
/* 00442660 356C0008 */  ori   $t4, $t3, 8
/* 00442664 A04C0021 */  sb    $t4, 0x21($v0)
/* 00442668 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 0044266C 8FA400D4 */  lw    $a0, 0xd4($sp)
/* 00442670 0320F809 */  jalr  $t9
/* 00442674 00000000 */   nop   
/* 00442678 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0044267C 24040073 */  li    $a0, 115
/* 00442680 8FA500D8 */  lw    $a1, 0xd8($sp)
/* 00442684 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442688 00403025 */  move  $a2, $v0
/* 0044268C 0320F809 */  jalr  $t9
/* 00442690 00000000 */   nop   
/* 00442694 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 00442698 904D0021 */  lbu   $t5, 0x21($v0)
/* 0044269C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004426A0 01B17024 */  and   $t6, $t5, $s1
/* 004426A4 35D80008 */  ori   $t8, $t6, 8
/* 004426A8 100000A9 */  b     .L00442950
/* 004426AC A0580021 */   sb    $t8, 0x21($v0)
.L004426B0:
/* 004426B0 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 004426B4 02002025 */  move  $a0, $s0
/* 004426B8 0320F809 */  jalr  $t9
/* 004426BC 00000000 */   nop   
/* 004426C0 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004426C4 24040073 */  li    $a0, 115
/* 004426C8 8FA500D8 */  lw    $a1, 0xd8($sp)
/* 004426CC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004426D0 00403025 */  move  $a2, $v0
/* 004426D4 0320F809 */  jalr  $t9
/* 004426D8 00000000 */   nop   
/* 004426DC AFA200D8 */  sw    $v0, 0xd8($sp)
/* 004426E0 904F0021 */  lbu   $t7, 0x21($v0)
/* 004426E4 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004426E8 01F14824 */  and   $t1, $t7, $s1
/* 004426EC 35390008 */  ori   $t9, $t1, 8
/* 004426F0 A0590021 */  sb    $t9, 0x21($v0)
/* 004426F4 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 004426F8 8FA400D4 */  lw    $a0, 0xd4($sp)
/* 004426FC 0320F809 */  jalr  $t9
/* 00442700 00000000 */   nop   
/* 00442704 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00442708 24040074 */  li    $a0, 116
/* 0044270C 8FA500D8 */  lw    $a1, 0xd8($sp)
/* 00442710 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442714 00403025 */  move  $a2, $v0
/* 00442718 0320F809 */  jalr  $t9
/* 0044271C 00000000 */   nop   
/* 00442720 AFA200D8 */  sw    $v0, 0xd8($sp)
/* 00442724 904A0021 */  lbu   $t2, 0x21($v0)
/* 00442728 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0044272C 01515824 */  and   $t3, $t2, $s1
/* 00442730 356C0008 */  ori   $t4, $t3, 8
/* 00442734 10000086 */  b     .L00442950
/* 00442738 A04C0021 */   sb    $t4, 0x21($v0)
.L0044273C:
/* 0044273C 920D0021 */  lbu   $t5, 0x21($s0)
/* 00442740 323100FF */  andi  $s1, $s1, 0xff
/* 00442744 31AE001F */  andi  $t6, $t5, 0x1f
/* 00442748 010E02B6 */  tne   $t0, $t6, 0xa
/* 0044274C 1000FE45 */  b     .L00442064
/* 00442750 8E100000 */   lw    $s0, ($s0)
.L00442754:
/* 00442754 92180021 */  lbu   $t8, 0x21($s0)
/* 00442758 323100FF */  andi  $s1, $s1, 0xff
/* 0044275C 330F001F */  andi  $t7, $t8, 0x1f
/* 00442760 010F02B6 */  tne   $t0, $t7, 0xa
/* 00442764 1000FE3F */  b     .L00442064
/* 00442768 8E100000 */   lw    $s0, ($s0)
.L0044276C:
/* 0044276C 2C41003E */  sltiu $at, $v0, 0x3e
/* 00442770 14200058 */  bnez  $at, .L004428D4
/* 00442774 2C41005E */   sltiu $at, $v0, 0x5e
/* 00442778 14200008 */  bnez  $at, .L0044279C
/* 0044277C 24010072 */   li    $at, 114
/* 00442780 5041FEC6 */  beql  $v0, $at, .L0044229C
/* 00442784 8E040000 */   lw    $a0, ($s0)
/* 00442788 2401008A */  li    $at, 138
/* 0044278C 5041FE8B */  beql  $v0, $at, .L004421BC
/* 00442790 920E0021 */   lbu   $t6, 0x21($s0)
/* 00442794 1000000A */  b     .L004427C0
/* 00442798 00000000 */   nop   
.L0044279C:
/* 0044279C 24010049 */  li    $at, 73
/* 004427A0 5041FE33 */  beql  $v0, $at, .L00442070
/* 004427A4 920E0021 */   lbu   $t6, 0x21($s0)
/* 004427A8 24010052 */  li    $at, 82
/* 004427AC 5041FE48 */  beql  $v0, $at, .L004420D0
/* 004427B0 92090021 */   lbu   $t1, 0x21($s0)
/* 004427B4 2401005D */  li    $at, 93
/* 004427B8 1041FF2C */  beq   $v0, $at, .L0044246C
/* 004427BC 00000000 */   nop   
.L004427C0:
/* 004427C0 8F898038 */  lw    $t1, %got(RO_1000D69C)($gp)
/* 004427C4 24040004 */  li    $a0, 4
/* 004427C8 24050230 */  li    $a1, 560
/* 004427CC 2529D69C */  addiu $t1, %lo(RO_1000D69C) # addiu $t1, $t1, -0x2964
/* 004427D0 252C0048 */  addiu $t4, $t1, 0x48
/* 004427D4 03A05825 */  move  $t3, $sp
.L004427D8:
/* 004427D8 892A0000 */  lwl   $t2, ($t1)
/* 004427DC 992A0003 */  lwr   $t2, 3($t1)
/* 004427E0 2529000C */  addiu $t1, $t1, 0xc
/* 004427E4 256B000C */  addiu $t3, $t3, 0xc
/* 004427E8 A96AFFFC */  swl   $t2, -4($t3)
/* 004427EC B96AFFFF */  swr   $t2, -1($t3)
/* 004427F0 8939FFF8 */  lwl   $t9, -8($t1)
/* 004427F4 9939FFFB */  lwr   $t9, -5($t1)
/* 004427F8 A9790000 */  swl   $t9, ($t3)
/* 004427FC B9790003 */  swr   $t9, 3($t3)
/* 00442800 892AFFFC */  lwl   $t2, -4($t1)
/* 00442804 992AFFFF */  lwr   $t2, -1($t1)
/* 00442808 A96A0004 */  swl   $t2, 4($t3)
/* 0044280C 152CFFF2 */  bne   $t1, $t4, .L004427D8
/* 00442810 B96A0007 */   swr   $t2, 7($t3)
/* 00442814 892A0000 */  lwl   $t2, ($t1)
/* 00442818 992A0003 */  lwr   $t2, 3($t1)
/* 0044281C 8F8D8038 */  lw    $t5, %got(RO_1000D64C)($gp)
/* 00442820 03A07825 */  move  $t7, $sp
/* 00442824 A96A0008 */  swl   $t2, 8($t3)
/* 00442828 B96A000B */  swr   $t2, 0xb($t3)
/* 0044282C 89390004 */  lwl   $t9, 4($t1)
/* 00442830 99390007 */  lwr   $t9, 7($t1)
/* 00442834 25ADD64C */  addiu $t5, %lo(RO_1000D64C) # addiu $t5, $t5, -0x29b4
/* 00442838 25AC0048 */  addiu $t4, $t5, 0x48
/* 0044283C A979000C */  swl   $t9, 0xc($t3)
/* 00442840 B979000F */  swr   $t9, 0xf($t3)
.L00442844:
/* 00442844 89B80000 */  lwl   $t8, ($t5)
/* 00442848 99B80003 */  lwr   $t8, 3($t5)
/* 0044284C 25AD000C */  addiu $t5, $t5, 0xc
/* 00442850 25EF000C */  addiu $t7, $t7, 0xc
/* 00442854 A9F8004C */  swl   $t8, 0x4c($t7)
/* 00442858 B9F8004F */  swr   $t8, 0x4f($t7)
/* 0044285C 89AEFFF8 */  lwl   $t6, -8($t5)
/* 00442860 99AEFFFB */  lwr   $t6, -5($t5)
/* 00442864 A9EE0050 */  swl   $t6, 0x50($t7)
/* 00442868 B9EE0053 */  swr   $t6, 0x53($t7)
/* 0044286C 89B8FFFC */  lwl   $t8, -4($t5)
/* 00442870 99B8FFFF */  lwr   $t8, -1($t5)
/* 00442874 A9F80054 */  swl   $t8, 0x54($t7)
/* 00442878 15ACFFF2 */  bne   $t5, $t4, .L00442844
/* 0044287C B9F80057 */   swr   $t8, 0x57($t7)
/* 00442880 89B80000 */  lwl   $t8, ($t5)
/* 00442884 99B80003 */  lwr   $t8, 3($t5)
/* 00442888 A9F80058 */  swl   $t8, 0x58($t7)
/* 0044288C B9F8005B */  swr   $t8, 0x5b($t7)
/* 00442890 89AE0004 */  lwl   $t6, 4($t5)
/* 00442894 99AE0007 */  lwr   $t6, 7($t5)
/* 00442898 A9EE005C */  swl   $t6, 0x5c($t7)
/* 0044289C B9EE005F */  swr   $t6, 0x5f($t7)
/* 004428A0 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004428A4 8FA7000C */  lw    $a3, 0xc($sp)
/* 004428A8 8FA60008 */  lw    $a2, 8($sp)
/* 004428AC 0320F809 */  jalr  $t9
/* 004428B0 00000000 */   nop   
/* 004428B4 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004428B8 02002825 */  move  $a1, $s0
/* 004428BC 8F998644 */  lw    $t9, %call16(print_node)($gp)
/* 004428C0 8F848950 */  lw     $a0, %got(err)($gp)
/* 004428C4 0320F809 */  jalr  $t9
/* 004428C8 00000000 */   nop   
/* 004428CC 10000020 */  b     .L00442950
/* 004428D0 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L004428D4:
/* 004428D4 2C41000E */  sltiu $at, $v0, 0xe
/* 004428D8 14200011 */  bnez  $at, .L00442920
/* 004428DC 2449FFC5 */   addiu $t1, $v0, -0x3b
/* 004428E0 2401001C */  li    $at, 28
/* 004428E4 5041FE35 */  beql  $v0, $at, .L004421BC
/* 004428E8 920E0021 */   lbu   $t6, 0x21($s0)
/* 004428EC 24010036 */  li    $at, 54
/* 004428F0 5041FE11 */  beql  $v0, $at, .L00442138
/* 004428F4 92180021 */   lbu   $t8, 0x21($s0)
/* 004428F8 2D210003 */  sltiu $at, $t1, 3
/* 004428FC 1020FFB0 */  beqz  $at, .L004427C0
/* 00442900 00000000 */   nop   
/* 00442904 8F818038 */  lw    $at, %got(jtbl_1000D6F4)($gp)
/* 00442908 00094880 */  sll   $t1, $t1, 2
/* 0044290C 00290821 */  addu  $at, $at, $t1
/* 00442910 8C29D6F4 */  lw    $t1, %lo(jtbl_1000D6F4)($at)
/* 00442914 013C4821 */  addu  $t1, $t1, $gp
/* 00442918 01200008 */  jr    $t1
/* 0044291C 00000000 */   nop   
.L00442920:
/* 00442920 1045FE46 */  beq   $v0, $a1, .L0044223C
/* 00442924 244BFFF4 */   addiu $t3, $v0, -0xc
/* 00442928 2D610002 */  sltiu $at, $t3, 2
/* 0044292C 1020FFA4 */  beqz  $at, .L004427C0
/* 00442930 00000000 */   nop   
/* 00442934 8F818038 */  lw    $at, %got(jtbl_1000D6EC)($gp)
/* 00442938 000B5880 */  sll   $t3, $t3, 2
/* 0044293C 002B0821 */  addu  $at, $at, $t3
/* 00442940 8C2BD6EC */  lw    $t3, %lo(jtbl_1000D6EC)($at)
/* 00442944 017C5821 */  addu  $t3, $t3, $gp
/* 00442948 01600008 */  jr    $t3
/* 0044294C 00000000 */   nop   
.L00442950:
/* 00442950 8FBF00BC */  lw    $ra, 0xbc($sp)
/* 00442954 8FA200D8 */  lw    $v0, 0xd8($sp)
/* 00442958 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 0044295C 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 00442960 03E00008 */  jr    $ra
/* 00442964 27BD00E0 */   addiu $sp, $sp, 0xe0
    .type set_rewrite, @function
    .size set_rewrite, .-set_rewrite
    .end set_rewrite

glabel set_rewrite_indexed
    .ent set_rewrite_indexed
    # 00442968 set_rewrite_indexed
    # 004432FC translate
/* 00442968 3C1C0FBE */  .cpload $t9
/* 0044296C 279CD0E8 */  
/* 00442970 0399E021 */  
/* 00442974 27BDFF28 */  addiu $sp, $sp, -0xd8
/* 00442978 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0044297C AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00442980 AFB000AC */  sw    $s0, 0xac($sp)
/* 00442984 AFA600E0 */  sw    $a2, 0xe0($sp)
/* 00442988 90830020 */  lbu   $v1, 0x20($a0)
/* 0044298C 00808025 */  move  $s0, $a0
/* 00442990 00A03825 */  move  $a3, $a1
/* 00442994 100001BD */  b     .L0044308C
/* 00442998 00601025 */   move  $v0, $v1
/* 0044299C 92020021 */  lbu   $v0, 0x21($s0)
.L004429A0:
/* 004429A0 240F000E */  li    $t7, 14
/* 004429A4 24010052 */  li    $at, 82
/* 004429A8 304E001F */  andi  $t6, $v0, 0x1f
/* 004429AC 01CF02B6 */  tne   $t6, $t7, 0xa
/* 004429B0 1461000B */  bne   $v1, $at, .L004429E0
/* 004429B4 00000000 */   nop   
/* 004429B8 8F998A28 */  lw     $t9, %got(addr_dtype)($gp)
/* 004429BC 24180047 */  li    $t8, 71
/* 004429C0 A2180020 */  sb    $t8, 0x20($s0)
/* 004429C4 93390000 */  lbu   $t9, ($t9)
/* 004429C8 000246C0 */  sll   $t0, $v0, 0x1b
/* 004429CC 00084EC2 */  srl   $t1, $t0, 0x1b
/* 004429D0 03295026 */  xor   $t2, $t9, $t1
/* 004429D4 314B001F */  andi  $t3, $t2, 0x1f
/* 004429D8 01626026 */  xor   $t4, $t3, $v0
/* 004429DC A20C0021 */  sb    $t4, 0x21($s0)
.L004429E0:
/* 004429E0 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 004429E4 00E02025 */  move  $a0, $a3
/* 004429E8 0320F809 */  jalr  $t9
/* 004429EC 00000000 */   nop   
/* 004429F0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004429F4 24040001 */  li    $a0, 1
/* 004429F8 02002825 */  move  $a1, $s0
/* 004429FC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442A00 00403025 */  move  $a2, $v0
/* 00442A04 0320F809 */  jalr  $t9
/* 00442A08 00000000 */   nop   
/* 00442A0C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442A10 90430021 */  lbu   $v1, 0x21($v0)
/* 00442A14 A4400022 */  sh    $zero, 0x22($v0)
/* 00442A18 8F8D8A28 */  lw     $t5, %got(addr_dtype)($gp)
/* 00442A1C 000376C0 */  sll   $t6, $v1, 0x1b
/* 00442A20 000E7EC2 */  srl   $t7, $t6, 0x1b
/* 00442A24 91AD0000 */  lbu   $t5, ($t5)
/* 00442A28 24040036 */  li    $a0, 54
/* 00442A2C 00402825 */  move  $a1, $v0
/* 00442A30 01AFC026 */  xor   $t8, $t5, $t7
/* 00442A34 3308001F */  andi  $t0, $t8, 0x1f
/* 00442A38 0103C826 */  xor   $t9, $t0, $v1
/* 00442A3C A0590021 */  sb    $t9, 0x21($v0)
/* 00442A40 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 00442A44 0320F809 */  jalr  $t9
/* 00442A48 00000000 */   nop   
/* 00442A4C AFA200D0 */  sw    $v0, 0xd0($sp)
/* 00442A50 90490021 */  lbu   $t1, 0x21($v0)
/* 00442A54 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442A58 2410FFE0 */  li    $s0, -32
/* 00442A5C 312AFFE0 */  andi  $t2, $t1, 0xffe0
/* 00442A60 354B000E */  ori   $t3, $t2, 0xe
/* 00442A64 A04B0021 */  sb    $t3, 0x21($v0)
/* 00442A68 93AC00E3 */  lbu   $t4, 0xe3($sp)
/* 00442A6C AC40002C */  sw    $zero, 0x2c($v0)
/* 00442A70 AC400030 */  sw    $zero, 0x30($v0)
/* 00442A74 258E0007 */  addiu $t6, $t4, 7
/* 00442A78 05C10003 */  bgez  $t6, .L00442A88
/* 00442A7C 000E68C3 */   sra   $t5, $t6, 3
/* 00442A80 25C10007 */  addiu $at, $t6, 7
/* 00442A84 000168C3 */  sra   $t5, $at, 3
.L00442A88:
/* 00442A88 AC4D0028 */  sw    $t5, 0x28($v0)
/* 00442A8C 100001F8 */  b     .L00443270
/* 00442A90 A4400022 */   sh    $zero, 0x22($v0)
.L00442A94:
/* 00442A94 920F0021 */  lbu   $t7, 0x21($s0)
/* 00442A98 2408000E */  li    $t0, 14
/* 00442A9C 31F8001F */  andi  $t8, $t7, 0x1f
/* 00442AA0 030802B6 */  tne   $t8, $t0, 0xa
/* 00442AA4 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442AA8 00E02025 */  move  $a0, $a3
/* 00442AAC 0320F809 */  jalr  $t9
/* 00442AB0 00000000 */   nop   
/* 00442AB4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442AB8 24040001 */  li    $a0, 1
/* 00442ABC 8E050000 */  lw    $a1, ($s0)
/* 00442AC0 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442AC4 00403025 */  move  $a2, $v0
/* 00442AC8 0320F809 */  jalr  $t9
/* 00442ACC 00000000 */   nop   
/* 00442AD0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442AD4 AE020000 */  sw    $v0, ($s0)
/* 00442AD8 A4400022 */  sh    $zero, 0x22($v0)
/* 00442ADC 93B900E3 */  lbu   $t9, 0xe3($sp)
/* 00442AE0 A6000022 */  sh    $zero, 0x22($s0)
/* 00442AE4 AFB000D0 */  sw    $s0, 0xd0($sp)
/* 00442AE8 27290007 */  addiu $t1, $t9, 7
/* 00442AEC 05210003 */  bgez  $t1, .L00442AFC
/* 00442AF0 000950C3 */   sra   $t2, $t1, 3
/* 00442AF4 25210007 */  addiu $at, $t1, 7
/* 00442AF8 000150C3 */  sra   $t2, $at, 3
.L00442AFC:
/* 00442AFC 100001DC */  b     .L00443270
/* 00442B00 AE0A0028 */   sw    $t2, 0x28($s0)
.L00442B04:
/* 00442B04 920B0021 */  lbu   $t3, 0x21($s0)
.L00442B08:
/* 00442B08 240E000E */  li    $t6, 14
/* 00442B0C 00E02825 */  move  $a1, $a3
/* 00442B10 316C001F */  andi  $t4, $t3, 0x1f
/* 00442B14 018E02B6 */  tne   $t4, $t6, 0xa
/* 00442B18 8F9985EC */  lw    $t9, %call16(set_rewrite_indexed)($gp)
/* 00442B1C 8E040000 */  lw    $a0, ($s0)
/* 00442B20 93A600E3 */  lbu   $a2, 0xe3($sp)
/* 00442B24 0320F809 */  jalr  $t9
/* 00442B28 AFA700DC */   sw    $a3, 0xdc($sp)
/* 00442B2C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442B30 8FA500DC */  lw    $a1, 0xdc($sp)
/* 00442B34 AFA200B8 */  sw    $v0, 0xb8($sp)
/* 00442B38 8F9985EC */  lw    $t9, %call16(set_rewrite_indexed)($gp)
/* 00442B3C 8E040004 */  lw    $a0, 4($s0)
/* 00442B40 93A600E3 */  lbu   $a2, 0xe3($sp)
/* 00442B44 0320F809 */  jalr  $t9
/* 00442B48 00000000 */   nop   
/* 00442B4C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442B50 92040020 */  lbu   $a0, 0x20($s0)
/* 00442B54 8FA500B8 */  lw    $a1, 0xb8($sp)
/* 00442B58 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442B5C 00403025 */  move  $a2, $v0
/* 00442B60 0320F809 */  jalr  $t9
/* 00442B64 00000000 */   nop   
/* 00442B68 93AD00E3 */  lbu   $t5, 0xe3($sp)
/* 00442B6C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442B70 AFA200D0 */  sw    $v0, 0xd0($sp)
/* 00442B74 25AF0007 */  addiu $t7, $t5, 7
/* 00442B78 05E10003 */  bgez  $t7, .L00442B88
/* 00442B7C 000FC0C3 */   sra   $t8, $t7, 3
/* 00442B80 25E10007 */  addiu $at, $t7, 7
/* 00442B84 0001C0C3 */  sra   $t8, $at, 3
.L00442B88:
/* 00442B88 100001B9 */  b     .L00443270
/* 00442B8C AC580028 */   sw    $t8, 0x28($v0)
.L00442B90:
/* 00442B90 8E040000 */  lw    $a0, ($s0)
/* 00442B94 24010049 */  li    $at, 73
/* 00442B98 90880020 */  lbu   $t0, 0x20($a0)
/* 00442B9C 1501000C */  bne   $t0, $at, .L00442BD0
/* 00442BA0 00000000 */   nop   
/* 00442BA4 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442BA8 0320F809 */  jalr  $t9
/* 00442BAC 00000000 */   nop   
/* 00442BB0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442BB4 AFA200D0 */  sw    $v0, 0xd0($sp)
/* 00442BB8 02002025 */  move  $a0, $s0
/* 00442BBC 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00442BC0 0320F809 */  jalr  $t9
/* 00442BC4 00000000 */   nop   
/* 00442BC8 100001A9 */  b     .L00443270
/* 00442BCC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00442BD0:
/* 00442BD0 8F998630 */  lw    $t9, %call16(build_ucond0)($gp)
/* 00442BD4 00E02025 */  move  $a0, $a3
/* 00442BD8 8E050028 */  lw    $a1, 0x28($s0)
/* 00442BDC 0320F809 */  jalr  $t9
/* 00442BE0 AFA700DC */   sw    $a3, 0xdc($sp)
/* 00442BE4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442BE8 8FA500DC */  lw    $a1, 0xdc($sp)
/* 00442BEC AFA200D0 */  sw    $v0, 0xd0($sp)
/* 00442BF0 8F9985EC */  lw    $t9, %call16(set_rewrite_indexed)($gp)
/* 00442BF4 8E040000 */  lw    $a0, ($s0)
/* 00442BF8 93A600E3 */  lbu   $a2, 0xe3($sp)
/* 00442BFC 0320F809 */  jalr  $t9
/* 00442C00 00000000 */   nop   
/* 00442C04 8FB900D0 */  lw    $t9, 0xd0($sp)
/* 00442C08 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442C0C 10000198 */  b     .L00443270
/* 00442C10 AF220004 */   sw    $v0, 4($t9)
.L00442C14:
/* 00442C14 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442C18 00E02025 */  move  $a0, $a3
/* 00442C1C 0320F809 */  jalr  $t9
/* 00442C20 00000000 */   nop   
/* 00442C24 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442C28 AFA200B8 */  sw    $v0, 0xb8($sp)
/* 00442C2C 24040008 */  li    $a0, 8
/* 00442C30 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442C34 00002825 */  move  $a1, $zero
/* 00442C38 24060008 */  li    $a2, 8
/* 00442C3C 0320F809 */  jalr  $t9
/* 00442C40 00000000 */   nop   
/* 00442C44 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442C48 2404005B */  li    $a0, 91
/* 00442C4C 8FA500B8 */  lw    $a1, 0xb8($sp)
/* 00442C50 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442C54 00403025 */  move  $a2, $v0
/* 00442C58 0320F809 */  jalr  $t9
/* 00442C5C 00000000 */   nop   
/* 00442C60 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442C64 A4400022 */  sh    $zero, 0x22($v0)
/* 00442C68 8E050000 */  lw    $a1, ($s0)
/* 00442C6C 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442C70 2404007D */  li    $a0, 125
/* 00442C74 00403025 */  move  $a2, $v0
/* 00442C78 0320F809 */  jalr  $t9
/* 00442C7C 00000000 */   nop   
/* 00442C80 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442C84 AFA200CC */  sw    $v0, 0xcc($sp)
/* 00442C88 A4400022 */  sh    $zero, 0x22($v0)
/* 00442C8C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442C90 00402025 */  move  $a0, $v0
/* 00442C94 0320F809 */  jalr  $t9
/* 00442C98 00000000 */   nop   
/* 00442C9C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442CA0 00408025 */  move  $s0, $v0
/* 00442CA4 8F89898C */  lw     $t1, %got(lsb_first)($gp)
/* 00442CA8 91290000 */  lbu   $t1, ($t1)
/* 00442CAC 15200008 */  bnez  $t1, .L00442CD0
/* 00442CB0 00000000 */   nop   
/* 00442CB4 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 00442CB8 24040061 */  li    $a0, 97
/* 00442CBC 00402825 */  move  $a1, $v0
/* 00442CC0 0320F809 */  jalr  $t9
/* 00442CC4 00000000 */   nop   
/* 00442CC8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442CCC 00408025 */  move  $s0, $v0
.L00442CD0:
/* 00442CD0 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442CD4 24040008 */  li    $a0, 8
/* 00442CD8 00002825 */  move  $a1, $zero
/* 00442CDC 0320F809 */  jalr  $t9
/* 00442CE0 93A600E3 */   lbu   $a2, 0xe3($sp)
/* 00442CE4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442CE8 2404004E */  li    $a0, 78
/* 00442CEC 8FA500CC */  lw    $a1, 0xcc($sp)
/* 00442CF0 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442CF4 00403025 */  move  $a2, $v0
/* 00442CF8 0320F809 */  jalr  $t9
/* 00442CFC 00000000 */   nop   
/* 00442D00 904A0021 */  lbu   $t2, 0x21($v0)
/* 00442D04 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442D08 24040073 */  li    $a0, 115
/* 00442D0C 314BFFE0 */  andi  $t3, $t2, 0xffe0
/* 00442D10 356C0008 */  ori   $t4, $t3, 8
/* 00442D14 A04C0021 */  sb    $t4, 0x21($v0)
/* 00442D18 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442D1C 00402825 */  move  $a1, $v0
/* 00442D20 02003025 */  move  $a2, $s0
/* 00442D24 0320F809 */  jalr  $t9
/* 00442D28 00000000 */   nop   
/* 00442D2C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442D30 1000014F */  b     .L00443270
/* 00442D34 AFA200D0 */   sw    $v0, 0xd0($sp)
.L00442D38:
/* 00442D38 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442D3C 00E02025 */  move  $a0, $a3
/* 00442D40 0320F809 */  jalr  $t9
/* 00442D44 00000000 */   nop   
/* 00442D48 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442D4C AFA200B8 */  sw    $v0, 0xb8($sp)
/* 00442D50 24040008 */  li    $a0, 8
/* 00442D54 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442D58 00002825 */  move  $a1, $zero
/* 00442D5C 24060008 */  li    $a2, 8
/* 00442D60 0320F809 */  jalr  $t9
/* 00442D64 00000000 */   nop   
/* 00442D68 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442D6C 2404005B */  li    $a0, 91
/* 00442D70 8FA500B8 */  lw    $a1, 0xb8($sp)
/* 00442D74 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442D78 00403025 */  move  $a2, $v0
/* 00442D7C 0320F809 */  jalr  $t9
/* 00442D80 00000000 */   nop   
/* 00442D84 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442D88 AFA200C4 */  sw    $v0, 0xc4($sp)
/* 00442D8C A4400022 */  sh    $zero, 0x22($v0)
/* 00442D90 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442D94 00402025 */  move  $a0, $v0
/* 00442D98 0320F809 */  jalr  $t9
/* 00442D9C 00000000 */   nop   
/* 00442DA0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442DA4 2404007D */  li    $a0, 125
/* 00442DA8 8E050000 */  lw    $a1, ($s0)
/* 00442DAC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442DB0 00403025 */  move  $a2, $v0
/* 00442DB4 0320F809 */  jalr  $t9
/* 00442DB8 00000000 */   nop   
/* 00442DBC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442DC0 AFA200CC */  sw    $v0, 0xcc($sp)
/* 00442DC4 A4400022 */  sh    $zero, 0x22($v0)
/* 00442DC8 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442DCC 24040008 */  li    $a0, 8
/* 00442DD0 00002825 */  move  $a1, $zero
/* 00442DD4 0320F809 */  jalr  $t9
/* 00442DD8 24060001 */   li    $a2, 1
/* 00442DDC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442DE0 24040001 */  li    $a0, 1
/* 00442DE4 8E050004 */  lw    $a1, 4($s0)
/* 00442DE8 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442DEC 00403025 */  move  $a2, $v0
/* 00442DF0 0320F809 */  jalr  $t9
/* 00442DF4 00000000 */   nop   
/* 00442DF8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442DFC A4400022 */  sh    $zero, 0x22($v0)
/* 00442E00 8FA600C4 */  lw    $a2, 0xc4($sp)
/* 00442E04 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442E08 2404007D */  li    $a0, 125
/* 00442E0C 00402825 */  move  $a1, $v0
/* 00442E10 0320F809 */  jalr  $t9
/* 00442E14 00000000 */   nop   
/* 00442E18 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442E1C A4400022 */  sh    $zero, 0x22($v0)
/* 00442E20 00408025 */  move  $s0, $v0
/* 00442E24 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442E28 24040006 */  li    $a0, 6
/* 00442E2C 00002825 */  move  $a1, $zero
/* 00442E30 0320F809 */  jalr  $t9
/* 00442E34 00003025 */   move  $a2, $zero
/* 00442E38 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442E3C 24040055 */  li    $a0, 85
/* 00442E40 8FA500CC */  lw    $a1, 0xcc($sp)
/* 00442E44 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442E48 00403025 */  move  $a2, $v0
/* 00442E4C 0320F809 */  jalr  $t9
/* 00442E50 00000000 */   nop   
/* 00442E54 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442E58 AFA200CC */  sw    $v0, 0xcc($sp)
/* 00442E5C 24040006 */  li    $a0, 6
/* 00442E60 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442E64 00002825 */  move  $a1, $zero
/* 00442E68 93A600E3 */  lbu   $a2, 0xe3($sp)
/* 00442E6C 0320F809 */  jalr  $t9
/* 00442E70 00000000 */   nop   
/* 00442E74 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442E78 24040056 */  li    $a0, 86
/* 00442E7C 02002825 */  move  $a1, $s0
/* 00442E80 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442E84 00403025 */  move  $a2, $v0
/* 00442E88 0320F809 */  jalr  $t9
/* 00442E8C 00000000 */   nop   
/* 00442E90 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442E94 2404007D */  li    $a0, 125
/* 00442E98 8FA500CC */  lw    $a1, 0xcc($sp)
/* 00442E9C 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442EA0 00403025 */  move  $a2, $v0
/* 00442EA4 0320F809 */  jalr  $t9
/* 00442EA8 00000000 */   nop   
/* 00442EAC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442EB0 AFA200C4 */  sw    $v0, 0xc4($sp)
/* 00442EB4 A4400022 */  sh    $zero, 0x22($v0)
/* 00442EB8 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00442EBC 24040008 */  li    $a0, 8
/* 00442EC0 00002825 */  move  $a1, $zero
/* 00442EC4 0320F809 */  jalr  $t9
/* 00442EC8 2406001F */   li    $a2, 31
/* 00442ECC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442ED0 24040074 */  li    $a0, 116
/* 00442ED4 8FA500C4 */  lw    $a1, 0xc4($sp)
/* 00442ED8 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442EDC 00403025 */  move  $a2, $v0
/* 00442EE0 0320F809 */  jalr  $t9
/* 00442EE4 00000000 */   nop   
/* 00442EE8 AFA200D0 */  sw    $v0, 0xd0($sp)
/* 00442EEC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442EF0 904E0021 */  lbu   $t6, 0x21($v0)
/* 00442EF4 2410FFE0 */  li    $s0, -32
/* 00442EF8 8F98898C */  lw     $t8, %got(lsb_first)($gp)
/* 00442EFC 31CDFFE0 */  andi  $t5, $t6, 0xffe0
/* 00442F00 35AF0006 */  ori   $t7, $t5, 6
/* 00442F04 A04F0021 */  sb    $t7, 0x21($v0)
/* 00442F08 93180000 */  lbu   $t8, ($t8)
/* 00442F0C 13000024 */  beqz  $t8, .L00442FA0
/* 00442F10 00000000 */   nop   
/* 00442F14 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442F18 8FA400C4 */  lw    $a0, 0xc4($sp)
/* 00442F1C 0320F809 */  jalr  $t9
/* 00442F20 00000000 */   nop   
/* 00442F24 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442F28 24040074 */  li    $a0, 116
/* 00442F2C 8FA500D0 */  lw    $a1, 0xd0($sp)
/* 00442F30 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442F34 00403025 */  move  $a2, $v0
/* 00442F38 0320F809 */  jalr  $t9
/* 00442F3C 00000000 */   nop   
/* 00442F40 AFA200D0 */  sw    $v0, 0xd0($sp)
/* 00442F44 90480021 */  lbu   $t0, 0x21($v0)
/* 00442F48 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442F4C 0110C824 */  and   $t9, $t0, $s0
/* 00442F50 37290008 */  ori   $t1, $t9, 8
/* 00442F54 A0490021 */  sb    $t1, 0x21($v0)
/* 00442F58 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442F5C 8FA400CC */  lw    $a0, 0xcc($sp)
/* 00442F60 0320F809 */  jalr  $t9
/* 00442F64 00000000 */   nop   
/* 00442F68 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442F6C 24040073 */  li    $a0, 115
/* 00442F70 8FA500D0 */  lw    $a1, 0xd0($sp)
/* 00442F74 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442F78 00403025 */  move  $a2, $v0
/* 00442F7C 0320F809 */  jalr  $t9
/* 00442F80 00000000 */   nop   
/* 00442F84 AFA200D0 */  sw    $v0, 0xd0($sp)
/* 00442F88 904A0021 */  lbu   $t2, 0x21($v0)
/* 00442F8C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442F90 01505824 */  and   $t3, $t2, $s0
/* 00442F94 356C0008 */  ori   $t4, $t3, 8
/* 00442F98 100000B5 */  b     .L00443270
/* 00442F9C A04C0021 */   sb    $t4, 0x21($v0)
.L00442FA0:
/* 00442FA0 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442FA4 8FA400C4 */  lw    $a0, 0xc4($sp)
/* 00442FA8 0320F809 */  jalr  $t9
/* 00442FAC 00000000 */   nop   
/* 00442FB0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442FB4 24040073 */  li    $a0, 115
/* 00442FB8 8FA500D0 */  lw    $a1, 0xd0($sp)
/* 00442FBC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00442FC0 00403025 */  move  $a2, $v0
/* 00442FC4 0320F809 */  jalr  $t9
/* 00442FC8 00000000 */   nop   
/* 00442FCC AFA200D0 */  sw    $v0, 0xd0($sp)
/* 00442FD0 904E0021 */  lbu   $t6, 0x21($v0)
/* 00442FD4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442FD8 01D06824 */  and   $t5, $t6, $s0
/* 00442FDC 35AF0008 */  ori   $t7, $t5, 8
/* 00442FE0 A04F0021 */  sb    $t7, 0x21($v0)
/* 00442FE4 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00442FE8 8FA400CC */  lw    $a0, 0xcc($sp)
/* 00442FEC 0320F809 */  jalr  $t9
/* 00442FF0 00000000 */   nop   
/* 00442FF4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00442FF8 24040074 */  li    $a0, 116
/* 00442FFC 8FA500D0 */  lw    $a1, 0xd0($sp)
/* 00443000 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00443004 00403025 */  move  $a2, $v0
/* 00443008 0320F809 */  jalr  $t9
/* 0044300C 00000000 */   nop   
/* 00443010 AFA200D0 */  sw    $v0, 0xd0($sp)
/* 00443014 90580021 */  lbu   $t8, 0x21($v0)
/* 00443018 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044301C 03104024 */  and   $t0, $t8, $s0
/* 00443020 35190008 */  ori   $t9, $t0, 8
/* 00443024 10000092 */  b     .L00443270
/* 00443028 A0590021 */   sb    $t9, 0x21($v0)
.L0044302C:
/* 0044302C 92090021 */  lbu   $t1, 0x21($s0)
/* 00443030 240B000E */  li    $t3, 14
/* 00443034 312A001F */  andi  $t2, $t1, 0x1f
/* 00443038 014B02B6 */  tne   $t2, $t3, 0xa
/* 0044303C 8F9985EC */  lw    $t9, %call16(set_rewrite_indexed)($gp)
/* 00443040 8E040000 */  lw    $a0, ($s0)
/* 00443044 00E02825 */  move  $a1, $a3
/* 00443048 0320F809 */  jalr  $t9
/* 0044304C 93A600E3 */   lbu   $a2, 0xe3($sp)
/* 00443050 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00443054 10000086 */  b     .L00443270
/* 00443058 AFA200D0 */   sw    $v0, 0xd0($sp)
.L0044305C:
/* 0044305C 920C0021 */  lbu   $t4, 0x21($s0)
/* 00443060 240D000E */  li    $t5, 14
/* 00443064 318E001F */  andi  $t6, $t4, 0x1f
/* 00443068 01CD02B6 */  tne   $t6, $t5, 0xa
/* 0044306C 8F9985EC */  lw    $t9, %call16(set_rewrite_indexed)($gp)
/* 00443070 8E040000 */  lw    $a0, ($s0)
/* 00443074 00E02825 */  move  $a1, $a3
/* 00443078 0320F809 */  jalr  $t9
/* 0044307C 93A600E3 */   lbu   $a2, 0xe3($sp)
/* 00443080 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00443084 1000007A */  b     .L00443270
/* 00443088 AFA200D0 */   sw    $v0, 0xd0($sp)
.L0044308C:
/* 0044308C 2C41003E */  sltiu $at, $v0, 0x3e
/* 00443090 14200058 */  bnez  $at, .L004431F4
/* 00443094 2C41005E */   sltiu $at, $v0, 0x5e
/* 00443098 14200008 */  bnez  $at, .L004430BC
/* 0044309C 24010072 */   li    $at, 114
/* 004430A0 1041FEDC */  beq   $v0, $at, .L00442C14
/* 004430A4 00000000 */   nop   
/* 004430A8 2401008A */  li    $at, 138
/* 004430AC 5041FE96 */  beql  $v0, $at, .L00442B08
/* 004430B0 920B0021 */   lbu   $t3, 0x21($s0)
/* 004430B4 1000000A */  b     .L004430E0
/* 004430B8 00000000 */   nop   
.L004430BC:
/* 004430BC 24010049 */  li    $at, 73
/* 004430C0 5041FE37 */  beql  $v0, $at, .L004429A0
/* 004430C4 92020021 */   lbu   $v0, 0x21($s0)
/* 004430C8 24010052 */  li    $at, 82
/* 004430CC 5041FE34 */  beql  $v0, $at, .L004429A0
/* 004430D0 92020021 */   lbu   $v0, 0x21($s0)
/* 004430D4 2401005D */  li    $at, 93
/* 004430D8 1041FF17 */  beq   $v0, $at, .L00442D38
/* 004430DC 00000000 */   nop   
.L004430E0:
/* 004430E0 8F8F8038 */  lw    $t7, %got(RO_1000D750)($gp)
/* 004430E4 24040004 */  li    $a0, 4
/* 004430E8 240502B1 */  li    $a1, 689
/* 004430EC 25EFD750 */  addiu $t7, %lo(RO_1000D750) # addiu $t7, $t7, -0x28b0
/* 004430F0 25E90048 */  addiu $t1, $t7, 0x48
/* 004430F4 03A0C825 */  move  $t9, $sp
.L004430F8:
/* 004430F8 89E80000 */  lwl   $t0, ($t7)
/* 004430FC 99E80003 */  lwr   $t0, 3($t7)
/* 00443100 25EF000C */  addiu $t7, $t7, 0xc
/* 00443104 2739000C */  addiu $t9, $t9, 0xc
/* 00443108 AB28FFFC */  swl   $t0, -4($t9)
/* 0044310C BB28FFFF */  swr   $t0, -1($t9)
/* 00443110 89F8FFF8 */  lwl   $t8, -8($t7)
/* 00443114 99F8FFFB */  lwr   $t8, -5($t7)
/* 00443118 AB380000 */  swl   $t8, ($t9)
/* 0044311C BB380003 */  swr   $t8, 3($t9)
/* 00443120 89E8FFFC */  lwl   $t0, -4($t7)
/* 00443124 99E8FFFF */  lwr   $t0, -1($t7)
/* 00443128 AB280004 */  swl   $t0, 4($t9)
/* 0044312C 15E9FFF2 */  bne   $t7, $t1, .L004430F8
/* 00443130 BB280007 */   swr   $t0, 7($t9)
/* 00443134 89E80000 */  lwl   $t0, ($t7)
/* 00443138 99E80003 */  lwr   $t0, 3($t7)
/* 0044313C 8F8A8038 */  lw    $t2, %got(RO_1000D700)($gp)
/* 00443140 03A07025 */  move  $t6, $sp
/* 00443144 AB280008 */  swl   $t0, 8($t9)
/* 00443148 BB28000B */  swr   $t0, 0xb($t9)
/* 0044314C 89F80004 */  lwl   $t8, 4($t7)
/* 00443150 99F80007 */  lwr   $t8, 7($t7)
/* 00443154 254AD700 */  addiu $t2, %lo(RO_1000D700) # addiu $t2, $t2, -0x2900
/* 00443158 254D0048 */  addiu $t5, $t2, 0x48
/* 0044315C AB38000C */  swl   $t8, 0xc($t9)
/* 00443160 BB38000F */  swr   $t8, 0xf($t9)
.L00443164:
/* 00443164 894C0000 */  lwl   $t4, ($t2)
/* 00443168 994C0003 */  lwr   $t4, 3($t2)
/* 0044316C 254A000C */  addiu $t2, $t2, 0xc
/* 00443170 25CE000C */  addiu $t6, $t6, 0xc
/* 00443174 A9CC004C */  swl   $t4, 0x4c($t6)
/* 00443178 B9CC004F */  swr   $t4, 0x4f($t6)
/* 0044317C 894BFFF8 */  lwl   $t3, -8($t2)
/* 00443180 994BFFFB */  lwr   $t3, -5($t2)
/* 00443184 A9CB0050 */  swl   $t3, 0x50($t6)
/* 00443188 B9CB0053 */  swr   $t3, 0x53($t6)
/* 0044318C 894CFFFC */  lwl   $t4, -4($t2)
/* 00443190 994CFFFF */  lwr   $t4, -1($t2)
/* 00443194 A9CC0054 */  swl   $t4, 0x54($t6)
/* 00443198 154DFFF2 */  bne   $t2, $t5, .L00443164
/* 0044319C B9CC0057 */   swr   $t4, 0x57($t6)
/* 004431A0 894C0000 */  lwl   $t4, ($t2)
/* 004431A4 994C0003 */  lwr   $t4, 3($t2)
/* 004431A8 A9CC0058 */  swl   $t4, 0x58($t6)
/* 004431AC B9CC005B */  swr   $t4, 0x5b($t6)
/* 004431B0 894B0004 */  lwl   $t3, 4($t2)
/* 004431B4 994B0007 */  lwr   $t3, 7($t2)
/* 004431B8 A9CB005C */  swl   $t3, 0x5c($t6)
/* 004431BC B9CB005F */  swr   $t3, 0x5f($t6)
/* 004431C0 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004431C4 8FA7000C */  lw    $a3, 0xc($sp)
/* 004431C8 8FA60008 */  lw    $a2, 8($sp)
/* 004431CC 0320F809 */  jalr  $t9
/* 004431D0 00000000 */   nop   
/* 004431D4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004431D8 02002825 */  move  $a1, $s0
/* 004431DC 8F998644 */  lw    $t9, %call16(print_node)($gp)
/* 004431E0 8F848950 */  lw     $a0, %got(err)($gp)
/* 004431E4 0320F809 */  jalr  $t9
/* 004431E8 00000000 */   nop   
/* 004431EC 10000020 */  b     .L00443270
/* 004431F0 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004431F4:
/* 004431F4 2C41000E */  sltiu $at, $v0, 0xe
/* 004431F8 14200010 */  bnez  $at, .L0044323C
/* 004431FC 2401001C */   li    $at, 28
/* 00443200 5041FE41 */  beql  $v0, $at, .L00442B08
/* 00443204 920B0021 */   lbu   $t3, 0x21($s0)
/* 00443208 24010036 */  li    $at, 54
/* 0044320C 1041FE21 */  beq   $v0, $at, .L00442A94
/* 00443210 2449FFC5 */   addiu $t1, $v0, -0x3b
/* 00443214 2D210003 */  sltiu $at, $t1, 3
/* 00443218 1020FFB1 */  beqz  $at, .L004430E0
/* 0044321C 00000000 */   nop   
/* 00443220 8F818038 */  lw    $at, %got(jtbl_1000D7A8)($gp)
/* 00443224 00094880 */  sll   $t1, $t1, 2
/* 00443228 00290821 */  addu  $at, $at, $t1
/* 0044322C 8C29D7A8 */  lw    $t1, %lo(jtbl_1000D7A8)($at)
/* 00443230 013C4821 */  addu  $t1, $t1, $gp
/* 00443234 01200008 */  jr    $t1
/* 00443238 00000000 */   nop   
.L0044323C:
/* 0044323C 24010002 */  li    $at, 2
/* 00443240 1041FE53 */  beq   $v0, $at, .L00442B90
/* 00443244 244FFFF4 */   addiu $t7, $v0, -0xc
/* 00443248 2DE10002 */  sltiu $at, $t7, 2
/* 0044324C 1020FFA4 */  beqz  $at, .L004430E0
/* 00443250 00000000 */   nop   
/* 00443254 8F818038 */  lw    $at, %got(jtbl_1000D7A0)($gp)
/* 00443258 000F7880 */  sll   $t7, $t7, 2
/* 0044325C 002F0821 */  addu  $at, $at, $t7
/* 00443260 8C2FD7A0 */  lw    $t7, %lo(jtbl_1000D7A0)($at)
/* 00443264 01FC7821 */  addu  $t7, $t7, $gp
/* 00443268 01E00008 */  jr    $t7
/* 0044326C 00000000 */   nop   
.L00443270:
/* 00443270 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00443274 8FA200D0 */  lw    $v0, 0xd0($sp)
/* 00443278 8FB000AC */  lw    $s0, 0xac($sp)
/* 0044327C 03E00008 */  jr    $ra
/* 00443280 27BD00D8 */   addiu $sp, $sp, 0xd8
    .type set_rewrite_indexed, @function
    .size set_rewrite_indexed, .-set_rewrite_indexed
    .end set_rewrite_indexed

glabel translate_tree
    .ent translate_tree
    # 0044BF18 main
/* 00443284 3C1C0FBE */  .cpload $t9
/* 00443288 279CC7CC */  
/* 0044328C 0399E021 */  
/* 00443290 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00443294 AFB00014 */  sw    $s0, 0x14($sp)
/* 00443298 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044329C AFBC0018 */  sw    $gp, 0x18($sp)
/* 004432A0 AFA40020 */  sw    $a0, 0x20($sp)
/* 004432A4 10800009 */  beqz  $a0, .L004432CC
/* 004432A8 00808025 */   move  $s0, $a0
.L004432AC:
/* 004432AC 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 004432B0 02002025 */  move  $a0, $s0
/* 004432B4 0320F809 */  jalr  $t9
/* 004432B8 00000000 */   nop   
/* 004432BC 8C500008 */  lw    $s0, 8($v0)
/* 004432C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004432C4 1600FFF9 */  bnez  $s0, .L004432AC
/* 004432C8 00000000 */   nop   
.L004432CC:
/* 004432CC 8F8F8B40 */  lw     $t7, %got(calls)($gp)
/* 004432D0 8DEF0000 */  lw    $t7, ($t7)
/* 004432D4 55E00005 */  bnel  $t7, $zero, .L004432EC
/* 004432D8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004432DC 8F8189B4 */  lw     $at, %got(pseudo_leaf)($gp)
/* 004432E0 24180001 */  li    $t8, 1
/* 004432E4 A0380000 */  sb    $t8, ($at)
/* 004432E8 8FBF001C */  lw    $ra, 0x1c($sp)
.L004432EC:
/* 004432EC 8FA20020 */  lw    $v0, 0x20($sp)
/* 004432F0 8FB00014 */  lw    $s0, 0x14($sp)
/* 004432F4 03E00008 */  jr    $ra
/* 004432F8 27BD0020 */   addiu $sp, $sp, 0x20
    .type translate_tree, @function
    .size translate_tree, .-translate_tree
    .end translate_tree

glabel translate
    .ent translate
    # 00443284 translate_tree
    # 004432FC translate
/* 004432FC 3C1C0FBE */  .cpload $t9
/* 00443300 279CC754 */  
/* 00443304 0399E021 */  
/* 00443308 27BDFEF8 */  addiu $sp, $sp, -0x108
/* 0044330C AFBF00C4 */  sw    $ra, 0xc4($sp)
/* 00443310 AFBC00C0 */  sw    $gp, 0xc0($sp)
/* 00443314 AFB400BC */  sw    $s4, 0xbc($sp)
/* 00443318 AFB300B8 */  sw    $s3, 0xb8($sp)
/* 0044331C AFB200B4 */  sw    $s2, 0xb4($sp)
/* 00443320 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 00443324 AFB000AC */  sw    $s0, 0xac($sp)
/* 00443328 AFA40108 */  sw    $a0, 0x108($sp)
/* 0044332C 90830019 */  lbu   $v1, 0x19($a0)
/* 00443330 00809825 */  move  $s3, $a0
/* 00443334 306E0001 */  andi  $t6, $v1, 1
/* 00443338 51C00024 */  beql  $t6, $zero, .L004433CC
/* 0044333C 92640020 */   lbu   $a0, 0x20($s3)
/* 00443340 90840020 */  lbu   $a0, 0x20($a0)
/* 00443344 8F8F8914 */  lw     $t7, %got(expression_opcs)($gp)
/* 00443348 248DFFE0 */  addiu $t5, $a0, -0x20
/* 0044334C 008FC021 */  addu  $t8, $a0, $t7
/* 00443350 93190000 */  lbu   $t9, ($t8)
/* 00443354 2DAE0040 */  sltiu $t6, $t5, 0x40
/* 00443358 13200007 */  beqz  $t9, .L00443378
/* 0044335C 00000000 */   nop   
/* 00443360 8F9985FC */  lw    $t9, %call16(cse)($gp)
/* 00443364 02602025 */  move  $a0, $s3
/* 00443368 0320F809 */  jalr  $t9
/* 0044336C 00000000 */   nop   
/* 00443370 10000BF5 */  b     .L00446348
/* 00443374 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00443378:
/* 00443378 11C00009 */  beqz  $t6, .L004433A0
/* 0044337C 00000000 */   nop   
/* 00443380 8F998038 */  lw    $t9, %got(D_10016968)($gp)
/* 00443384 000D7943 */  sra   $t7, $t5, 5
/* 00443388 000FC080 */  sll   $t8, $t7, 2
/* 0044338C 27396968 */  addiu $t9, %lo(D_10016968) # addiu $t9, $t9, 0x6968
/* 00443390 03387821 */  addu  $t7, $t9, $t8
/* 00443394 8DF90000 */  lw    $t9, ($t7)
/* 00443398 01B9C004 */  sllv  $t8, $t9, $t5
/* 0044339C 2B0E0000 */  slti  $t6, $t8, 0
.L004433A0:
/* 004433A0 11C00007 */  beqz  $t6, .L004433C0
/* 004433A4 00000000 */   nop   
/* 004433A8 8F998618 */  lw    $t9, %call16(load_cse)($gp)
/* 004433AC 02602025 */  move  $a0, $s3
/* 004433B0 0320F809 */  jalr  $t9
/* 004433B4 00000000 */   nop   
/* 004433B8 10000BE3 */  b     .L00446348
/* 004433BC 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L004433C0:
/* 004433C0 10000BE1 */  b     .L00446348
/* 004433C4 02601025 */   move  $v0, $s3
.L004433C8:
/* 004433C8 92640020 */  lbu   $a0, 0x20($s3)
.L004433CC:
/* 004433CC 34790001 */  ori   $t9, $v1, 1
/* 004433D0 24070004 */  li    $a3, 4
/* 004433D4 00801025 */  move  $v0, $a0
/* 004433D8 2C410080 */  sltiu $at, $v0, 0x80
/* 004433DC 2408003C */  li    $t0, 60
/* 004433E0 2414FFE0 */  li    $s4, -32
/* 004433E4 14200B65 */  bnez  $at, .L0044617C
/* 004433E8 A2790019 */   sb    $t9, 0x19($s3)
/* 004433EC 2C41008E */  sltiu $at, $v0, 0x8e
/* 004433F0 14200B79 */  bnez  $at, .L004461D8
/* 004433F4 2458FF7A */   addiu $t8, $v0, -0x86
/* 004433F8 244DFF6D */  addiu $t5, $v0, -0x93
/* 004433FC 2DA10005 */  sltiu $at, $t5, 5
/* 00443400 10200B7F */  beqz  $at, .L00446200
/* 00443404 00000000 */   nop   
/* 00443408 8F818038 */  lw    $at, %got(jtbl_1000DA6C)($gp)
/* 0044340C 000D6880 */  sll   $t5, $t5, 2
/* 00443410 002D0821 */  addu  $at, $at, $t5
/* 00443414 8C2DDA6C */  lw    $t5, %lo(jtbl_1000DA6C)($at)
/* 00443418 01BC6821 */  addu  $t5, $t5, $gp
/* 0044341C 01A00008 */  jr    $t5
/* 00443420 00000000 */   nop   
.L00443424:
/* 00443424 8F8F8A30 */  lw     $t7, %got(opt_cse)($gp)
/* 00443428 8E780024 */  lw    $t8, 0x24($s3)
/* 0044342C 8F818968 */  lw     $at, %got(current_line)($gp)
/* 00443430 91EF0000 */  lbu   $t7, ($t7)
/* 00443434 240B0001 */  li    $t3, 1
/* 00443438 AC380000 */  sw    $t8, ($at)
/* 0044343C 156F0009 */  bne   $t3, $t7, .L00443464
/* 00443440 00000000 */   nop   
/* 00443444 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 00443448 00001025 */  move  $v0, $zero
/* 0044344C A0200000 */  sb    $zero, ($at)
/* 00443450 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00443454 A0200000 */  sb    $zero, ($at)
/* 00443458 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 0044345C 1000000C */  b     .L00443490
/* 00443460 AC200000 */   sw    $zero, ($at)
.L00443464:
/* 00443464 8F838B30 */  lw     $v1, %got(bb_size)($gp)
/* 00443468 8C620000 */  lw    $v0, ($v1)
/* 0044346C 2841004C */  slti  $at, $v0, 0x4c
/* 00443470 14200007 */  bnez  $at, .L00443490
/* 00443474 00000000 */   nop   
/* 00443478 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 0044347C 00001025 */  move  $v0, $zero
/* 00443480 A0200000 */  sb    $zero, ($at)
/* 00443484 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00443488 A0200000 */  sb    $zero, ($at)
/* 0044348C AC600000 */  sw    $zero, ($v1)
.L00443490:
/* 00443490 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 00443494 244E0001 */  addiu $t6, $v0, 1
/* 00443498 10000B59 */  b     .L00446200
/* 0044349C AC2E0000 */   sw    $t6, ($at)
.L004434A0:
/* 004434A0 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 004434A4 8E640000 */  lw    $a0, ($s3)
/* 004434A8 0320F809 */  jalr  $t9
/* 004434AC 00000000 */   nop   
/* 004434B0 AE620000 */  sw    $v0, ($s3)
/* 004434B4 90590020 */  lbu   $t9, 0x20($v0)
/* 004434B8 2401000B */  li    $at, 11
/* 004434BC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004434C0 17210009 */  bne   $t9, $at, .L004434E8
/* 004434C4 240D0088 */   li    $t5, 136
/* 004434C8 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 004434CC A26D0020 */  sb    $t5, 0x20($s3)
/* 004434D0 8C580000 */  lw    $t8, ($v0)
/* 004434D4 00402025 */  move  $a0, $v0
/* 004434D8 0320F809 */  jalr  $t9
/* 004434DC AE780004 */   sw    $t8, 4($s3)
/* 004434E0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004434E4 AE600000 */  sw    $zero, ($s3)
.L004434E8:
/* 004434E8 10000B45 */  b     .L00446200
/* 004434EC 92640020 */   lbu   $a0, 0x20($s3)
.L004434F0:
/* 004434F0 8E700000 */  lw    $s0, ($s3)
/* 004434F4 960F0022 */  lhu   $t7, 0x22($s0)
/* 004434F8 35EE0004 */  ori   $t6, $t7, 4
/* 004434FC A60E0022 */  sh    $t6, 0x22($s0)
/* 00443500 10000B3F */  b     .L00446200
/* 00443504 92640020 */   lbu   $a0, 0x20($s3)
.L00443508:
/* 00443508 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 0044350C 8E640000 */  lw    $a0, ($s3)
/* 00443510 0320F809 */  jalr  $t9
/* 00443514 00000000 */   nop   
/* 00443518 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044351C AE620000 */  sw    $v0, ($s3)
/* 00443520 00402025 */  move  $a0, $v0
/* 00443524 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00443528 0320F809 */  jalr  $t9
/* 0044352C 00000000 */   nop   
/* 00443530 1040001D */  beqz  $v0, .L004435A8
/* 00443534 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00443538 8E700000 */  lw    $s0, ($s3)
/* 0044353C 3C010501 */  lui   $at, 0x501
/* 00443540 92190021 */  lbu   $t9, 0x21($s0)
/* 00443544 332D001F */  andi  $t5, $t9, 0x1f
/* 00443548 2DB80020 */  sltiu $t8, $t5, 0x20
/* 0044354C 00187823 */  negu  $t7, $t8
/* 00443550 01E17024 */  and   $t6, $t7, $at
/* 00443554 01AEC804 */  sllv  $t9, $t6, $t5
/* 00443558 07210003 */  bgez  $t9, .L00443568
/* 0044355C 24180088 */   li    $t8, 136
/* 00443560 10000002 */  b     .L0044356C
/* 00443564 8E070034 */   lw    $a3, 0x34($s0)
.L00443568:
/* 00443568 8E070030 */  lw    $a3, 0x30($s0)
.L0044356C:
/* 0044356C 926F0020 */  lbu   $t7, 0x20($s3)
/* 00443570 0007682B */  sltu  $t5, $zero, $a3
/* 00443574 39EE007F */  xori  $t6, $t7, 0x7f
/* 00443578 2DCE0001 */  sltiu $t6, $t6, 1
/* 0044357C 51CD0009 */  beql  $t6, $t5, .L004435A4
/* 00443580 A2780020 */   sb    $t8, 0x20($s3)
/* 00443584 8F998678 */  lw    $t9, %call16(delete_statement)($gp)
/* 00443588 02602025 */  move  $a0, $s3
/* 0044358C 0320F809 */  jalr  $t9
/* 00443590 00000000 */   nop   
/* 00443594 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443598 10000B6B */  b     .L00446348
/* 0044359C 02601025 */   move  $v0, $s3
/* 004435A0 A2780020 */  sb    $t8, 0x20($s3)
.L004435A4:
/* 004435A4 AE600000 */  sw    $zero, ($s3)
.L004435A8:
/* 004435A8 10000B15 */  b     .L00446200
/* 004435AC 92640020 */   lbu   $a0, 0x20($s3)
.L004435B0:
/* 004435B0 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 004435B4 8E640000 */  lw    $a0, ($s3)
/* 004435B8 0320F809 */  jalr  $t9
/* 004435BC 00000000 */   nop   
/* 004435C0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004435C4 AE620000 */  sw    $v0, ($s3)
/* 004435C8 00402025 */  move  $a0, $v0
/* 004435CC 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 004435D0 0320F809 */  jalr  $t9
/* 004435D4 00000000 */   nop   
/* 004435D8 10400015 */  beqz  $v0, .L00443630
/* 004435DC 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 004435E0 8E700000 */  lw    $s0, ($s3)
/* 004435E4 3C010501 */  lui   $at, 0x501
/* 004435E8 92190021 */  lbu   $t9, 0x21($s0)
/* 004435EC 332F001F */  andi  $t7, $t9, 0x1f
/* 004435F0 2DEE0020 */  sltiu $t6, $t7, 0x20
/* 004435F4 000E6823 */  negu  $t5, $t6
/* 004435F8 01A1C024 */  and   $t8, $t5, $at
/* 004435FC 01F8C804 */  sllv  $t9, $t8, $t7
/* 00443600 07230004 */  bgezl $t9, .L00443614
/* 00443604 8E070030 */   lw    $a3, 0x30($s0)
/* 00443608 10000002 */  b     .L00443614
/* 0044360C 8E070034 */   lw    $a3, 0x34($s0)
/* 00443610 8E070030 */  lw    $a3, 0x30($s0)
.L00443614:
/* 00443614 10E00006 */  beqz  $a3, .L00443630
/* 00443618 00000000 */   nop   
/* 0044361C 8F998678 */  lw    $t9, %call16(delete_statement)($gp)
/* 00443620 02602025 */  move  $a0, $s3
/* 00443624 0320F809 */  jalr  $t9
/* 00443628 00000000 */   nop   
/* 0044362C 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00443630:
/* 00443630 10000AF3 */  b     .L00446200
/* 00443634 92640020 */   lbu   $a0, 0x20($s3)
.L00443638:
/* 00443638 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 0044363C 8E640000 */  lw    $a0, ($s3)
/* 00443640 0320F809 */  jalr  $t9
/* 00443644 00000000 */   nop   
/* 00443648 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044364C AE620000 */  sw    $v0, ($s3)
/* 00443650 00402025 */  move  $a0, $v0
/* 00443654 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00443658 0320F809 */  jalr  $t9
/* 0044365C 00000000 */   nop   
/* 00443660 10400023 */  beqz  $v0, .L004436F0
/* 00443664 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00443668 8E700000 */  lw    $s0, ($s3)
/* 0044366C 3C010501 */  lui   $at, 0x501
/* 00443670 920D0021 */  lbu   $t5, 0x21($s0)
/* 00443674 31B8001F */  andi  $t8, $t5, 0x1f
/* 00443678 2F190020 */  sltiu $t9, $t8, 0x20
/* 0044367C 00197023 */  negu  $t6, $t9
/* 00443680 01C17824 */  and   $t7, $t6, $at
/* 00443684 030F6804 */  sllv  $t5, $t7, $t8
/* 00443688 05A30004 */  bgezl $t5, .L0044369C
/* 0044368C 8E070030 */   lw    $a3, 0x30($s0)
/* 00443690 10000002 */  b     .L0044369C
/* 00443694 8E070034 */   lw    $a3, 0x34($s0)
/* 00443698 8E070030 */  lw    $a3, 0x30($s0)
.L0044369C:
/* 0044369C 50E0000F */  beql  $a3, $zero, .L004436DC
/* 004436A0 92190016 */   lbu   $t9, 0x16($s0)
/* 004436A4 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 004436A8 02608825 */  move  $s1, $s3
/* 004436AC 02002025 */  move  $a0, $s0
/* 004436B0 0320F809 */  jalr  $t9
/* 004436B4 00000000 */   nop   
/* 004436B8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004436BC 00409825 */  move  $s3, $v0
/* 004436C0 02202025 */  move  $a0, $s1
/* 004436C4 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 004436C8 0320F809 */  jalr  $t9
/* 004436CC 00000000 */   nop   
/* 004436D0 1000000D */  b     .L00443708
/* 004436D4 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 004436D8 92190016 */  lbu   $t9, 0x16($s0)
.L004436DC:
/* 004436DC 17200002 */  bnez  $t9, .L004436E8
/* 004436E0 00000000 */   nop   
/* 004436E4 24190001 */  li    $t9, 1
.L004436E8:
/* 004436E8 10000007 */  b     .L00443708
/* 004436EC A2790016 */   sb    $t9, 0x16($s3)
.L004436F0:
/* 004436F0 8E780000 */  lw    $t8, ($s3)
/* 004436F4 930D0016 */  lbu   $t5, 0x16($t8)
/* 004436F8 55A00003 */  bnel  $t5, $zero, .L00443708
/* 004436FC A26D0016 */   sb    $t5, 0x16($s3)
/* 00443700 240D0001 */  li    $t5, 1
/* 00443704 A26D0016 */  sb    $t5, 0x16($s3)
.L00443708:
/* 00443708 10000ABD */  b     .L00446200
/* 0044370C 92640020 */   lbu   $a0, 0x20($s3)
.L00443710:
/* 00443710 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00443714 8E640000 */  lw    $a0, ($s3)
/* 00443718 0320F809 */  jalr  $t9
/* 0044371C 00000000 */   nop   
/* 00443720 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443724 AE620000 */  sw    $v0, ($s3)
/* 00443728 02602025 */  move  $a0, $s3
/* 0044372C 8F99862C */  lw    $t9, %call16(need_check_hl)($gp)
/* 00443730 0320F809 */  jalr  $t9
/* 00443734 00000000 */   nop   
/* 00443738 1440000E */  bnez  $v0, .L00443774
/* 0044373C 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00443740 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00443744 02608825 */  move  $s1, $s3
/* 00443748 8E640000 */  lw    $a0, ($s3)
/* 0044374C 0320F809 */  jalr  $t9
/* 00443750 00000000 */   nop   
/* 00443754 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443758 00409825 */  move  $s3, $v0
/* 0044375C 02202025 */  move  $a0, $s1
/* 00443760 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00443764 0320F809 */  jalr  $t9
/* 00443768 00000000 */   nop   
/* 0044376C 10000007 */  b     .L0044378C
/* 00443770 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00443774:
/* 00443774 8E6E0000 */  lw    $t6, ($s3)
/* 00443778 91CF0016 */  lbu   $t7, 0x16($t6)
/* 0044377C 55E00003 */  bnel  $t7, $zero, .L0044378C
/* 00443780 A26F0016 */   sb    $t7, 0x16($s3)
/* 00443784 240F0001 */  li    $t7, 1
/* 00443788 A26F0016 */  sb    $t7, 0x16($s3)
.L0044378C:
/* 0044378C 10000A9C */  b     .L00446200
/* 00443790 92640020 */   lbu   $a0, 0x20($s3)
.L00443794:
/* 00443794 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00443798 8E640000 */  lw    $a0, ($s3)
/* 0044379C 0320F809 */  jalr  $t9
/* 004437A0 00000000 */   nop   
/* 004437A4 92640020 */  lbu   $a0, 0x20($s3)
/* 004437A8 24010076 */  li    $at, 118
/* 004437AC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004437B0 1481000A */  bne   $a0, $at, .L004437DC
/* 004437B4 AE620000 */   sw    $v0, ($s3)
/* 004437B8 2419005B */  li    $t9, 91
/* 004437BC A2790020 */  sb    $t9, 0x20($s3)
/* 004437C0 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 004437C4 00402025 */  move  $a0, $v0
/* 004437C8 0320F809 */  jalr  $t9
/* 004437CC 00000000 */   nop   
/* 004437D0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004437D4 AE620004 */  sw    $v0, 4($s3)
/* 004437D8 92640020 */  lbu   $a0, 0x20($s3)
.L004437DC:
/* 004437DC 24010077 */  li    $at, 119
/* 004437E0 54810049 */  bnel  $a0, $at, .L00443908
/* 004437E4 8E790000 */   lw    $t9, ($s3)
/* 004437E8 92780021 */  lbu   $t8, 0x21($s3)
/* 004437EC 3C01000C */  lui   $at, 0xc
/* 004437F0 24040004 */  li    $a0, 4
/* 004437F4 330D001F */  andi  $t5, $t8, 0x1f
/* 004437F8 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 004437FC 000E7823 */  negu  $t7, $t6
/* 00443800 01E1C824 */  and   $t9, $t7, $at
/* 00443804 01B9C004 */  sllv  $t8, $t9, $t5
/* 00443808 0702003F */  bltzl $t8, .L00443908
/* 0044380C 8E790000 */   lw    $t9, ($s3)
/* 00443810 8F8E8038 */  lw    $t6, %got(RO_1000D804)($gp)
/* 00443814 24050358 */  li    $a1, 856
/* 00443818 03A06825 */  move  $t5, $sp
/* 0044381C 25CED804 */  addiu $t6, %lo(RO_1000D804) # addiu $t6, $t6, -0x27fc
/* 00443820 25D80048 */  addiu $t8, $t6, 0x48
.L00443824:
/* 00443824 89D90000 */  lwl   $t9, ($t6)
/* 00443828 99D90003 */  lwr   $t9, 3($t6)
/* 0044382C 25CE000C */  addiu $t6, $t6, 0xc
/* 00443830 25AD000C */  addiu $t5, $t5, 0xc
/* 00443834 A9B9FFFC */  swl   $t9, -4($t5)
/* 00443838 B9B9FFFF */  swr   $t9, -1($t5)
/* 0044383C 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00443840 99CFFFFB */  lwr   $t7, -5($t6)
/* 00443844 A9AF0000 */  swl   $t7, ($t5)
/* 00443848 B9AF0003 */  swr   $t7, 3($t5)
/* 0044384C 89D9FFFC */  lwl   $t9, -4($t6)
/* 00443850 99D9FFFF */  lwr   $t9, -1($t6)
/* 00443854 A9B90004 */  swl   $t9, 4($t5)
/* 00443858 15D8FFF2 */  bne   $t6, $t8, .L00443824
/* 0044385C B9B90007 */   swr   $t9, 7($t5)
/* 00443860 89D90000 */  lwl   $t9, ($t6)
/* 00443864 99D90003 */  lwr   $t9, 3($t6)
/* 00443868 8F988038 */  lw    $t8, %got(RO_1000D7B4)($gp)
/* 0044386C A9B90008 */  swl   $t9, 8($t5)
/* 00443870 B9B9000B */  swr   $t9, 0xb($t5)
/* 00443874 89CF0004 */  lwl   $t7, 4($t6)
/* 00443878 99CF0007 */  lwr   $t7, 7($t6)
/* 0044387C 2718D7B4 */  addiu $t8, %lo(RO_1000D7B4) # addiu $t8, $t8, -0x284c
/* 00443880 27190048 */  addiu $t9, $t8, 0x48
/* 00443884 A9AF000C */  swl   $t7, 0xc($t5)
/* 00443888 B9AF000F */  swr   $t7, 0xf($t5)
/* 0044388C 03A07825 */  move  $t7, $sp
.L00443890:
/* 00443890 8B0D0000 */  lwl   $t5, ($t8)
/* 00443894 9B0D0003 */  lwr   $t5, 3($t8)
/* 00443898 2718000C */  addiu $t8, $t8, 0xc
/* 0044389C 25EF000C */  addiu $t7, $t7, 0xc
/* 004438A0 A9ED004C */  swl   $t5, 0x4c($t7)
/* 004438A4 B9ED004F */  swr   $t5, 0x4f($t7)
/* 004438A8 8B0EFFF8 */  lwl   $t6, -8($t8)
/* 004438AC 9B0EFFFB */  lwr   $t6, -5($t8)
/* 004438B0 A9EE0050 */  swl   $t6, 0x50($t7)
/* 004438B4 B9EE0053 */  swr   $t6, 0x53($t7)
/* 004438B8 8B0DFFFC */  lwl   $t5, -4($t8)
/* 004438BC 9B0DFFFF */  lwr   $t5, -1($t8)
/* 004438C0 A9ED0054 */  swl   $t5, 0x54($t7)
/* 004438C4 1719FFF2 */  bne   $t8, $t9, .L00443890
/* 004438C8 B9ED0057 */   swr   $t5, 0x57($t7)
/* 004438CC 8B0D0000 */  lwl   $t5, ($t8)
/* 004438D0 9B0D0003 */  lwr   $t5, 3($t8)
/* 004438D4 A9ED0058 */  swl   $t5, 0x58($t7)
/* 004438D8 B9ED005B */  swr   $t5, 0x5b($t7)
/* 004438DC 8B0E0004 */  lwl   $t6, 4($t8)
/* 004438E0 9B0E0007 */  lwr   $t6, 7($t8)
/* 004438E4 A9EE005C */  swl   $t6, 0x5c($t7)
/* 004438E8 B9EE005F */  swr   $t6, 0x5f($t7)
/* 004438EC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004438F0 8FA7000C */  lw    $a3, 0xc($sp)
/* 004438F4 8FA60008 */  lw    $a2, 8($sp)
/* 004438F8 0320F809 */  jalr  $t9
/* 004438FC 00000000 */   nop   
/* 00443900 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443904 8E790000 */  lw    $t9, ($s3)
.L00443908:
/* 00443908 93380016 */  lbu   $t8, 0x16($t9)
/* 0044390C 57000003 */  bnel  $t8, $zero, .L0044391C
/* 00443910 A2780016 */   sb    $t8, 0x16($s3)
/* 00443914 24180001 */  li    $t8, 1
/* 00443918 A2780016 */  sb    $t8, 0x16($s3)
.L0044391C:
/* 0044391C 10000A38 */  b     .L00446200
/* 00443920 92640020 */   lbu   $a0, 0x20($s3)
.L00443924:
/* 00443924 248FFFE0 */  addiu $t7, $a0, -0x20
/* 00443928 2DEE0040 */  sltiu $t6, $t7, 0x40
/* 0044392C 11C00009 */  beqz  $t6, .L00443954
/* 00443930 00000000 */   nop   
/* 00443934 8F988038 */  lw    $t8, %got(D_10016960)($gp)
/* 00443938 000F6943 */  sra   $t5, $t7, 5
/* 0044393C 000DC880 */  sll   $t9, $t5, 2
/* 00443940 27186960 */  addiu $t8, %lo(D_10016960) # addiu $t8, $t8, 0x6960
/* 00443944 03196821 */  addu  $t5, $t8, $t9
/* 00443948 8DB80000 */  lw    $t8, ($t5)
/* 0044394C 01F8C804 */  sllv  $t9, $t8, $t7
/* 00443950 2B2E0000 */  slti  $t6, $t9, 0
.L00443954:
/* 00443954 11C00019 */  beqz  $t6, .L004439BC
/* 00443958 00000000 */   nop   
/* 0044395C 92630021 */  lbu   $v1, 0x21($s3)
/* 00443960 2401000E */  li    $at, 14
/* 00443964 3078001F */  andi  $t8, $v1, 0x1f
/* 00443968 17010014 */  bne   $t8, $at, .L004439BC
/* 0044396C 0074C824 */   and   $t9, $v1, $s4
/* 00443970 8E6F0000 */  lw    $t7, ($s3)
/* 00443974 372D0008 */  ori   $t5, $t9, 8
/* 00443978 8DE20028 */  lw    $v0, 0x28($t7)
/* 0044397C 28410005 */  slti  $at, $v0, 5
/* 00443980 50200004 */  beql  $at, $zero, .L00443994
/* 00443984 8E6E0004 */   lw    $t6, 4($s3)
/* 00443988 1000000C */  b     .L004439BC
/* 0044398C A26D0021 */   sb    $t5, 0x21($s3)
/* 00443990 8E6E0004 */  lw    $t6, 4($s3)
.L00443994:
/* 00443994 8DD80028 */  lw    $t8, 0x28($t6)
/* 00443998 030202B6 */  tne   $t8, $v0, 0xa
/* 0044399C 8F9985E4 */  lw    $t9, %call16(gen_set_equ)($gp)
/* 004439A0 02602025 */  move  $a0, $s3
/* 004439A4 0320F809 */  jalr  $t9
/* 004439A8 00000000 */   nop   
/* 004439AC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004439B0 00409825 */  move  $s3, $v0
/* 004439B4 1000FE84 */  b     .L004433C8
/* 004439B8 90430019 */   lbu   $v1, 0x19($v0)
.L004439BC:
/* 004439BC 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 004439C0 8E640000 */  lw    $a0, ($s3)
/* 004439C4 0320F809 */  jalr  $t9
/* 004439C8 00000000 */   nop   
/* 004439CC 926F0020 */  lbu   $t7, 0x20($s3)
/* 004439D0 2411000A */  li    $s1, 10
/* 004439D4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004439D8 162F0005 */  bne   $s1, $t7, .L004439F0
/* 004439DC AE620000 */   sw    $v0, ($s3)
/* 004439E0 8F908920 */  lw     $s0, %got(no_cse_flag)($gp)
/* 004439E4 8E190000 */  lw    $t9, ($s0)
/* 004439E8 272D0001 */  addiu $t5, $t9, 1
/* 004439EC AE0D0000 */  sw    $t5, ($s0)
.L004439F0:
/* 004439F0 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 004439F4 8F908920 */  lw     $s0, %got(no_cse_flag)($gp)
/* 004439F8 8E640004 */  lw    $a0, 4($s3)
/* 004439FC 0320F809 */  jalr  $t9
/* 00443A00 00000000 */   nop   
/* 00443A04 92640020 */  lbu   $a0, 0x20($s3)
/* 00443A08 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443A0C AE620004 */  sw    $v0, 4($s3)
/* 00443A10 16240004 */  bne   $s1, $a0, .L00443A24
/* 00443A14 24010073 */   li    $at, 115
/* 00443A18 8E0E0000 */  lw    $t6, ($s0)
/* 00443A1C 25D8FFFF */  addiu $t8, $t6, -1
/* 00443A20 AE180000 */  sw    $t8, ($s0)
.L00443A24:
/* 00443A24 10810003 */  beq   $a0, $at, .L00443A34
/* 00443A28 24010074 */   li    $at, 116
/* 00443A2C 5481000C */  bnel  $a0, $at, .L00443A60
/* 00443A30 8E6E0000 */   lw    $t6, ($s3)
.L00443A34:
/* 00443A34 8E660004 */  lw    $a2, 4($s3)
/* 00443A38 24050049 */  li    $a1, 73
/* 00443A3C 90CF0020 */  lbu   $t7, 0x20($a2)
/* 00443A40 54AF0007 */  bnel  $a1, $t7, .L00443A60
/* 00443A44 8E6E0000 */   lw    $t6, ($s3)
/* 00443A48 8CC30030 */  lw    $v1, 0x30($a2)
/* 00443A4C 28610020 */  slti  $at, $v1, 0x20
/* 00443A50 14200002 */  bnez  $at, .L00443A5C
/* 00443A54 3079001F */   andi  $t9, $v1, 0x1f
/* 00443A58 ACD90030 */  sw    $t9, 0x30($a2)
.L00443A5C:
/* 00443A5C 8E6E0000 */  lw    $t6, ($s3)
.L00443A60:
/* 00443A60 8E6D0004 */  lw    $t5, 4($s3)
/* 00443A64 24050049 */  li    $a1, 73
/* 00443A68 91C30016 */  lbu   $v1, 0x16($t6)
/* 00443A6C 91A20016 */  lbu   $v0, 0x16($t5)
/* 00443A70 24780001 */  addiu $t8, $v1, 1
/* 00443A74 14430003 */  bne   $v0, $v1, .L00443A84
/* 00443A78 0062082B */   sltu  $at, $v1, $v0
/* 00443A7C 10000005 */  b     .L00443A94
/* 00443A80 A2780016 */   sb    $t8, 0x16($s3)
.L00443A84:
/* 00443A84 10200002 */  beqz  $at, .L00443A90
/* 00443A88 00607825 */   move  $t7, $v1
/* 00443A8C 00407825 */  move  $t7, $v0
.L00443A90:
/* 00443A90 A26F0016 */  sb    $t7, 0x16($s3)
.L00443A94:
/* 00443A94 92640020 */  lbu   $a0, 0x20($s3)
/* 00443A98 10000155 */  b     .L00443FF0
/* 00443A9C 00801025 */   move  $v0, $a0
.L00443AA0:
/* 00443AA0 8E660004 */  lw    $a2, 4($s3)
/* 00443AA4 90D90020 */  lbu   $t9, 0x20($a2)
/* 00443AA8 14B909D5 */  bne   $a1, $t9, .L00446200
/* 00443AAC 00000000 */   nop   
/* 00443AB0 92630021 */  lbu   $v1, 0x21($s3)
/* 00443AB4 3C010200 */  lui   $at, 0x200
/* 00443AB8 3063001F */  andi  $v1, $v1, 0x1f
/* 00443ABC 2C6D0020 */  sltiu $t5, $v1, 0x20
/* 00443AC0 000D7023 */  negu  $t6, $t5
/* 00443AC4 01C1C024 */  and   $t8, $t6, $at
/* 00443AC8 00787804 */  sllv  $t7, $t8, $v1
/* 00443ACC 05E10014 */  bgez  $t7, .L00443B20
/* 00443AD0 24010008 */   li    $at, 8
/* 00443AD4 8CD90030 */  lw    $t9, 0x30($a2)
/* 00443AD8 3C017FFF */  lui   $at, 0x7fff
/* 00443ADC 3421FFFF */  ori   $at, $at, 0xffff
/* 00443AE0 172109C7 */  bne   $t9, $at, .L00446200
/* 00443AE4 02608825 */   move  $s1, $s3
/* 00443AE8 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00443AEC 24040008 */  li    $a0, 8
/* 00443AF0 00002825 */  move  $a1, $zero
/* 00443AF4 0320F809 */  jalr  $t9
/* 00443AF8 24060001 */   li    $a2, 1
/* 00443AFC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443B00 00409825 */  move  $s3, $v0
/* 00443B04 02202025 */  move  $a0, $s1
/* 00443B08 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00443B0C 0320F809 */  jalr  $t9
/* 00443B10 00000000 */   nop   
/* 00443B14 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443B18 100009B9 */  b     .L00446200
/* 00443B1C 92640020 */   lbu   $a0, 0x20($s3)
.L00443B20:
/* 00443B20 146109B7 */  bne   $v1, $at, .L00446200
/* 00443B24 00000000 */   nop   
/* 00443B28 8CCD0030 */  lw    $t5, 0x30($a2)
/* 00443B2C 2414FFFF */  li    $s4, -1
/* 00443B30 02608825 */  move  $s1, $s3
/* 00443B34 168D09B2 */  bne   $s4, $t5, .L00446200
/* 00443B38 00000000 */   nop   
/* 00443B3C 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00443B40 24040008 */  li    $a0, 8
/* 00443B44 00002825 */  move  $a1, $zero
/* 00443B48 0320F809 */  jalr  $t9
/* 00443B4C 24060001 */   li    $a2, 1
/* 00443B50 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443B54 00409825 */  move  $s3, $v0
/* 00443B58 02202025 */  move  $a0, $s1
/* 00443B5C 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00443B60 0320F809 */  jalr  $t9
/* 00443B64 00000000 */   nop   
/* 00443B68 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443B6C 100009A4 */  b     .L00446200
/* 00443B70 92640020 */   lbu   $a0, 0x20($s3)
.L00443B74:
/* 00443B74 8E660004 */  lw    $a2, 4($s3)
/* 00443B78 90CE0020 */  lbu   $t6, 0x20($a2)
/* 00443B7C 14AE09A0 */  bne   $a1, $t6, .L00446200
/* 00443B80 00000000 */   nop   
/* 00443B84 92630021 */  lbu   $v1, 0x21($s3)
/* 00443B88 3C010200 */  lui   $at, 0x200
/* 00443B8C 3063001F */  andi  $v1, $v1, 0x1f
/* 00443B90 2C780020 */  sltiu $t8, $v1, 0x20
/* 00443B94 00187823 */  negu  $t7, $t8
/* 00443B98 01E1C824 */  and   $t9, $t7, $at
/* 00443B9C 00796804 */  sllv  $t5, $t9, $v1
/* 00443BA0 05A10014 */  bgez  $t5, .L00443BF4
/* 00443BA4 24010008 */   li    $at, 8
/* 00443BA8 8CCE0030 */  lw    $t6, 0x30($a2)
/* 00443BAC 3C017FFF */  lui   $at, 0x7fff
/* 00443BB0 3421FFFF */  ori   $at, $at, 0xffff
/* 00443BB4 15C10992 */  bne   $t6, $at, .L00446200
/* 00443BB8 02608825 */   move  $s1, $s3
/* 00443BBC 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00443BC0 24040008 */  li    $a0, 8
/* 00443BC4 00002825 */  move  $a1, $zero
/* 00443BC8 0320F809 */  jalr  $t9
/* 00443BCC 00003025 */   move  $a2, $zero
/* 00443BD0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443BD4 00409825 */  move  $s3, $v0
/* 00443BD8 02202025 */  move  $a0, $s1
/* 00443BDC 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00443BE0 0320F809 */  jalr  $t9
/* 00443BE4 00000000 */   nop   
/* 00443BE8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443BEC 10000984 */  b     .L00446200
/* 00443BF0 92640020 */   lbu   $a0, 0x20($s3)
.L00443BF4:
/* 00443BF4 14610982 */  bne   $v1, $at, .L00446200
/* 00443BF8 00000000 */   nop   
/* 00443BFC 8CD80030 */  lw    $t8, 0x30($a2)
/* 00443C00 2414FFFF */  li    $s4, -1
/* 00443C04 02608825 */  move  $s1, $s3
/* 00443C08 1698097D */  bne   $s4, $t8, .L00446200
/* 00443C0C 00000000 */   nop   
/* 00443C10 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00443C14 24040008 */  li    $a0, 8
/* 00443C18 00002825 */  move  $a1, $zero
/* 00443C1C 0320F809 */  jalr  $t9
/* 00443C20 00003025 */   move  $a2, $zero
/* 00443C24 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443C28 00409825 */  move  $s3, $v0
/* 00443C2C 02202025 */  move  $a0, $s1
/* 00443C30 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00443C34 0320F809 */  jalr  $t9
/* 00443C38 00000000 */   nop   
/* 00443C3C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443C40 1000096F */  b     .L00446200
/* 00443C44 92640020 */   lbu   $a0, 0x20($s3)
.L00443C48:
/* 00443C48 8E660004 */  lw    $a2, 4($s3)
/* 00443C4C 90CF0020 */  lbu   $t7, 0x20($a2)
/* 00443C50 14AF096B */  bne   $a1, $t7, .L00446200
/* 00443C54 00000000 */   nop   
/* 00443C58 92630021 */  lbu   $v1, 0x21($s3)
/* 00443C5C 3C010200 */  lui   $at, 0x200
/* 00443C60 3063001F */  andi  $v1, $v1, 0x1f
/* 00443C64 2C790020 */  sltiu $t9, $v1, 0x20
/* 00443C68 00196823 */  negu  $t5, $t9
/* 00443C6C 01A17024 */  and   $t6, $t5, $at
/* 00443C70 006EC004 */  sllv  $t8, $t6, $v1
/* 00443C74 07010014 */  bgez  $t8, .L00443CC8
/* 00443C78 24010008 */   li    $at, 8
/* 00443C7C 8CCF0030 */  lw    $t7, 0x30($a2)
/* 00443C80 3C018000 */  lui   $at, 0x8000
/* 00443C84 02608825 */  move  $s1, $s3
/* 00443C88 15E1095D */  bne   $t7, $at, .L00446200
/* 00443C8C 00000000 */   nop   
/* 00443C90 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00443C94 24040008 */  li    $a0, 8
/* 00443C98 00002825 */  move  $a1, $zero
/* 00443C9C 0320F809 */  jalr  $t9
/* 00443CA0 24060001 */   li    $a2, 1
/* 00443CA4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443CA8 00409825 */  move  $s3, $v0
/* 00443CAC 02202025 */  move  $a0, $s1
/* 00443CB0 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00443CB4 0320F809 */  jalr  $t9
/* 00443CB8 00000000 */   nop   
/* 00443CBC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443CC0 1000094F */  b     .L00446200
/* 00443CC4 92640020 */   lbu   $a0, 0x20($s3)
.L00443CC8:
/* 00443CC8 1461094D */  bne   $v1, $at, .L00446200
/* 00443CCC 00000000 */   nop   
/* 00443CD0 8CD90030 */  lw    $t9, 0x30($a2)
/* 00443CD4 02608825 */  move  $s1, $s3
/* 00443CD8 17200949 */  bnez  $t9, .L00446200
/* 00443CDC 00000000 */   nop   
/* 00443CE0 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00443CE4 24040008 */  li    $a0, 8
/* 00443CE8 00002825 */  move  $a1, $zero
/* 00443CEC 0320F809 */  jalr  $t9
/* 00443CF0 24060001 */   li    $a2, 1
/* 00443CF4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443CF8 00409825 */  move  $s3, $v0
/* 00443CFC 02202025 */  move  $a0, $s1
/* 00443D00 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00443D04 0320F809 */  jalr  $t9
/* 00443D08 00000000 */   nop   
/* 00443D0C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443D10 1000093B */  b     .L00446200
/* 00443D14 92640020 */   lbu   $a0, 0x20($s3)
.L00443D18:
/* 00443D18 8E660004 */  lw    $a2, 4($s3)
/* 00443D1C 90CD0020 */  lbu   $t5, 0x20($a2)
/* 00443D20 14AD0937 */  bne   $a1, $t5, .L00446200
/* 00443D24 00000000 */   nop   
/* 00443D28 92630021 */  lbu   $v1, 0x21($s3)
/* 00443D2C 3C010200 */  lui   $at, 0x200
/* 00443D30 3063001F */  andi  $v1, $v1, 0x1f
/* 00443D34 2C6E0020 */  sltiu $t6, $v1, 0x20
/* 00443D38 000EC023 */  negu  $t8, $t6
/* 00443D3C 03017824 */  and   $t7, $t8, $at
/* 00443D40 006FC804 */  sllv  $t9, $t7, $v1
/* 00443D44 07210014 */  bgez  $t9, .L00443D98
/* 00443D48 24010008 */   li    $at, 8
/* 00443D4C 8CCD0030 */  lw    $t5, 0x30($a2)
/* 00443D50 3C018000 */  lui   $at, 0x8000
/* 00443D54 02608825 */  move  $s1, $s3
/* 00443D58 15A10929 */  bne   $t5, $at, .L00446200
/* 00443D5C 00000000 */   nop   
/* 00443D60 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00443D64 24040008 */  li    $a0, 8
/* 00443D68 00002825 */  move  $a1, $zero
/* 00443D6C 0320F809 */  jalr  $t9
/* 00443D70 00003025 */   move  $a2, $zero
/* 00443D74 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443D78 00409825 */  move  $s3, $v0
/* 00443D7C 02202025 */  move  $a0, $s1
/* 00443D80 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00443D84 0320F809 */  jalr  $t9
/* 00443D88 00000000 */   nop   
/* 00443D8C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443D90 1000091B */  b     .L00446200
/* 00443D94 92640020 */   lbu   $a0, 0x20($s3)
.L00443D98:
/* 00443D98 14610919 */  bne   $v1, $at, .L00446200
/* 00443D9C 00000000 */   nop   
/* 00443DA0 8CCE0030 */  lw    $t6, 0x30($a2)
/* 00443DA4 02608825 */  move  $s1, $s3
/* 00443DA8 15C00915 */  bnez  $t6, .L00446200
/* 00443DAC 00000000 */   nop   
/* 00443DB0 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00443DB4 24040008 */  li    $a0, 8
/* 00443DB8 00002825 */  move  $a1, $zero
/* 00443DBC 0320F809 */  jalr  $t9
/* 00443DC0 00003025 */   move  $a2, $zero
/* 00443DC4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443DC8 00409825 */  move  $s3, $v0
/* 00443DCC 02202025 */  move  $a0, $s1
/* 00443DD0 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00443DD4 0320F809 */  jalr  $t9
/* 00443DD8 00000000 */   nop   
/* 00443DDC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443DE0 10000907 */  b     .L00446200
/* 00443DE4 92640020 */   lbu   $a0, 0x20($s3)
.L00443DE8:
/* 00443DE8 8E660004 */  lw    $a2, 4($s3)
/* 00443DEC 90D80020 */  lbu   $t8, 0x20($a2)
/* 00443DF0 14B80903 */  bne   $a1, $t8, .L00446200
/* 00443DF4 00000000 */   nop   
/* 00443DF8 966F0014 */  lhu   $t7, 0x14($s3)
/* 00443DFC 240B0001 */  li    $t3, 1
/* 00443E00 156F08FF */  bne   $t3, $t7, .L00446200
/* 00443E04 00000000 */   nop   
/* 00443E08 8F998A48 */  lw     $t9, %got(olevel)($gp)
/* 00443E0C 24020001 */  li    $v0, 1
/* 00443E10 00003825 */  move  $a3, $zero
/* 00443E14 93390000 */  lbu   $t9, ($t9)
/* 00443E18 24110020 */  li    $s1, 32
/* 00443E1C 240E0004 */  li    $t6, 4
/* 00443E20 132008F7 */  beqz  $t9, .L00446200
/* 00443E24 00000000 */   nop   
/* 00443E28 8CC30030 */  lw    $v1, 0x30($a2)
.L00443E2C:
/* 00443E2C 14430006 */  bne   $v0, $v1, .L00443E48
/* 00443E30 24E70001 */   addiu $a3, $a3, 1
/* 00443E34 246DFFFF */  addiu $t5, $v1, -1
/* 00443E38 ACCD0030 */  sw    $t5, 0x30($a2)
/* 00443E3C A26E0020 */  sb    $t6, 0x20($s3)
/* 00443E40 100008EF */  b     .L00446200
/* 00443E44 31C400FF */   andi  $a0, $t6, 0xff
.L00443E48:
/* 00443E48 14F1FFF8 */  bne   $a3, $s1, .L00443E2C
/* 00443E4C 00021040 */   sll   $v0, $v0, 1
/* 00443E50 100008EB */  b     .L00446200
/* 00443E54 00000000 */   nop   
.L00443E58:
/* 00443E58 8F988A48 */  lw     $t8, %got(olevel)($gp)
/* 00443E5C 24110057 */  li    $s1, 87
/* 00443E60 93180000 */  lbu   $t8, ($t8)
/* 00443E64 13000060 */  beqz  $t8, .L00443FE8
/* 00443E68 00000000 */   nop   
/* 00443E6C 8F998690 */  lw    $t9, %call16(is_zero)($gp)
/* 00443E70 8E640004 */  lw    $a0, 4($s3)
/* 00443E74 0320F809 */  jalr  $t9
/* 00443E78 00000000 */   nop   
/* 00443E7C 1040002C */  beqz  $v0, .L00443F30
/* 00443E80 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00443E84 8E700000 */  lw    $s0, ($s3)
/* 00443E88 240B0001 */  li    $t3, 1
/* 00443E8C 24010069 */  li    $at, 105
/* 00443E90 960F0014 */  lhu   $t7, 0x14($s0)
/* 00443E94 156F0026 */  bne   $t3, $t7, .L00443F30
/* 00443E98 00000000 */   nop   
/* 00443E9C 92030020 */  lbu   $v1, 0x20($s0)
/* 00443EA0 24190069 */  li    $t9, 105
/* 00443EA4 16230004 */  bne   $s1, $v1, .L00443EB8
/* 00443EA8 00000000 */   nop   
/* 00443EAC A2190020 */  sb    $t9, 0x20($s0)
/* 00443EB0 8E700000 */  lw    $s0, ($s3)
/* 00443EB4 92030020 */  lbu   $v1, 0x20($s0)
.L00443EB8:
/* 00443EB8 1461001B */  bne   $v1, $at, .L00443F28
/* 00443EBC AFB30108 */   sw    $s3, 0x108($sp)
/* 00443EC0 920D0021 */  lbu   $t5, 0x21($s0)
/* 00443EC4 24010006 */  li    $at, 6
/* 00443EC8 AFB30108 */  sw    $s3, 0x108($sp)
/* 00443ECC 31AE001F */  andi  $t6, $t5, 0x1f
/* 00443ED0 15C10015 */  bne   $t6, $at, .L00443F28
/* 00443ED4 00000000 */   nop   
/* 00443ED8 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00443EDC 8E040004 */  lw    $a0, 4($s0)
/* 00443EE0 0320F809 */  jalr  $t9
/* 00443EE4 00000000 */   nop   
/* 00443EE8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443EEC 1040000E */  beqz  $v0, .L00443F28
/* 00443EF0 AFB30108 */   sw    $s3, 0x108($sp)
/* 00443EF4 8E780000 */  lw    $t8, ($s3)
/* 00443EF8 8F9985D4 */  lw    $t9, %call16(is_power_of_two)($gp)
/* 00443EFC 8F0F0004 */  lw    $t7, 4($t8)
/* 00443F00 0320F809 */  jalr  $t9
/* 00443F04 8DE40030 */   lw    $a0, 0x30($t7)
/* 00443F08 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443F0C 10400006 */  beqz  $v0, .L00443F28
/* 00443F10 AFB30108 */   sw    $s3, 0x108($sp)
/* 00443F14 8E620000 */  lw    $v0, ($s3)
/* 00443F18 904D0021 */  lbu   $t5, 0x21($v0)
/* 00443F1C 01B47024 */  and   $t6, $t5, $s4
/* 00443F20 35D80008 */  ori   $t8, $t6, 8
/* 00443F24 A0580021 */  sb    $t8, 0x21($v0)
.L00443F28:
/* 00443F28 1000002F */  b     .L00443FE8
/* 00443F2C 8FB30108 */   lw    $s3, 0x108($sp)
.L00443F30:
/* 00443F30 8F998690 */  lw    $t9, %call16(is_zero)($gp)
/* 00443F34 8E640000 */  lw    $a0, ($s3)
/* 00443F38 0320F809 */  jalr  $t9
/* 00443F3C 00000000 */   nop   
/* 00443F40 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00443F44 10400028 */  beqz  $v0, .L00443FE8
/* 00443F48 240B0001 */   li    $t3, 1
/* 00443F4C 8E660004 */  lw    $a2, 4($s3)
/* 00443F50 24010069 */  li    $at, 105
/* 00443F54 94CF0014 */  lhu   $t7, 0x14($a2)
/* 00443F58 156F0023 */  bne   $t3, $t7, .L00443FE8
/* 00443F5C 00000000 */   nop   
/* 00443F60 90C20020 */  lbu   $v0, 0x20($a2)
/* 00443F64 24190069 */  li    $t9, 105
/* 00443F68 16220004 */  bne   $s1, $v0, .L00443F7C
/* 00443F6C 00000000 */   nop   
/* 00443F70 A0D90020 */  sb    $t9, 0x20($a2)
/* 00443F74 8E660004 */  lw    $a2, 4($s3)
/* 00443F78 90C20020 */  lbu   $v0, 0x20($a2)
.L00443F7C:
/* 00443F7C 1441001A */  bne   $v0, $at, .L00443FE8
/* 00443F80 00000000 */   nop   
/* 00443F84 90CD0021 */  lbu   $t5, 0x21($a2)
/* 00443F88 24010006 */  li    $at, 6
/* 00443F8C 31AE001F */  andi  $t6, $t5, 0x1f
/* 00443F90 15C10015 */  bne   $t6, $at, .L00443FE8
/* 00443F94 00000000 */   nop   
/* 00443F98 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00443F9C 8CC40004 */  lw    $a0, 4($a2)
/* 00443FA0 0320F809 */  jalr  $t9
/* 00443FA4 00000000 */   nop   
/* 00443FA8 1040000F */  beqz  $v0, .L00443FE8
/* 00443FAC 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00443FB0 8E780004 */  lw    $t8, 4($s3)
/* 00443FB4 8F9985D4 */  lw    $t9, %call16(is_power_of_two)($gp)
/* 00443FB8 8F0F0004 */  lw    $t7, 4($t8)
/* 00443FBC 0320F809 */  jalr  $t9
/* 00443FC0 8DE40030 */   lw    $a0, 0x30($t7)
/* 00443FC4 10400008 */  beqz  $v0, .L00443FE8
/* 00443FC8 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00443FCC AFB30108 */  sw    $s3, 0x108($sp)
/* 00443FD0 8E620004 */  lw    $v0, 4($s3)
/* 00443FD4 904D0021 */  lbu   $t5, 0x21($v0)
/* 00443FD8 01B47024 */  and   $t6, $t5, $s4
/* 00443FDC 35D80008 */  ori   $t8, $t6, 8
/* 00443FE0 A0580021 */  sb    $t8, 0x21($v0)
/* 00443FE4 8FB30108 */  lw    $s3, 0x108($sp)
.L00443FE8:
/* 00443FE8 10000885 */  b     .L00446200
/* 00443FEC 92640020 */   lbu   $a0, 0x20($s3)
.L00443FF0:
/* 00443FF0 2C41004F */  sltiu $at, $v0, 0x4f
/* 00443FF4 14200008 */  bnez  $at, .L00444018
/* 00443FF8 2459FFB3 */   addiu $t9, $v0, -0x4d
/* 00443FFC 24110057 */  li    $s1, 87
/* 00444000 1051FF79 */  beq   $v0, $s1, .L00443DE8
/* 00444004 2401005F */   li    $at, 95
/* 00444008 1041FF93 */  beq   $v0, $at, .L00443E58
/* 0044400C 00000000 */   nop   
/* 00444010 1000087B */  b     .L00446200
/* 00444014 00000000 */   nop   
.L00444018:
/* 00444018 24010023 */  li    $at, 35
/* 0044401C 1041FF8E */  beq   $v0, $at, .L00443E58
/* 00444020 244FFFD8 */   addiu $t7, $v0, -0x28
/* 00444024 2C41002A */  sltiu $at, $v0, 0x2a
/* 00444028 1020000A */  beqz  $at, .L00444054
/* 0044402C 2DE10002 */   sltiu $at, $t7, 2
/* 00444030 10200873 */  beqz  $at, .L00446200
/* 00444034 00000000 */   nop   
/* 00444038 8F818038 */  lw    $at, %got(jtbl_1000D854)($gp)
/* 0044403C 000F7880 */  sll   $t7, $t7, 2
/* 00444040 002F0821 */  addu  $at, $at, $t7
/* 00444044 8C2FD854 */  lw    $t7, %lo(jtbl_1000D854)($at)
/* 00444048 01FC7821 */  addu  $t7, $t7, $gp
/* 0044404C 01E00008 */  jr    $t7
/* 00444050 00000000 */   nop   
.L00444054:
/* 00444054 2F210002 */  sltiu $at, $t9, 2
/* 00444058 10200869 */  beqz  $at, .L00446200
/* 0044405C 00000000 */   nop   
/* 00444060 8F818038 */  lw    $at, %got(jtbl_1000D85C)($gp)
/* 00444064 0019C880 */  sll   $t9, $t9, 2
/* 00444068 00390821 */  addu  $at, $at, $t9
/* 0044406C 8C39D85C */  lw    $t9, %lo(jtbl_1000D85C)($at)
/* 00444070 033CC821 */  addu  $t9, $t9, $gp
/* 00444074 03200008 */  jr    $t9
/* 00444078 00000000 */   nop   
.L0044407C:
/* 0044407C 8F818B34 */  lw     $at, %got(leaf)($gp)
/* 00444080 240B0001 */  li    $t3, 1
/* 00444084 8F9189FC */  lw     $s1, %got(n_parm_regs)($gp)
/* 00444088 A02B0000 */  sb    $t3, ($at)
/* 0044408C 8F818B38 */  lw     $at, %got(has_entry)($gp)
/* 00444090 A0200000 */  sb    $zero, ($at)
/* 00444094 8E220000 */  lw    $v0, ($s1)
/* 00444098 24010004 */  li    $at, 4
/* 0044409C 1441000C */  bne   $v0, $at, .L004440D0
/* 004440A0 00000000 */   nop   
/* 004440A4 8F908B18 */  lw     $s0, %got(vreg_offset)($gp)
/* 004440A8 8F988A0C */  lw     $t8, %got(n_unsaved_regs)($gp)
/* 004440AC 240D0010 */  li    $t5, 16
/* 004440B0 AE0D0000 */  sw    $t5, ($s0)
/* 004440B4 8F180000 */  lw    $t8, ($t8)
/* 004440B8 8F818B10 */  lw     $at, %got(max_vreg_offset)($gp)
/* 004440BC 00587821 */  addu  $t7, $v0, $t8
/* 004440C0 000FC880 */  sll   $t9, $t7, 2
/* 004440C4 01B96821 */  addu  $t5, $t5, $t9
/* 004440C8 1000000A */  b     .L004440F4
/* 004440CC AC2D0000 */   sw    $t5, ($at)
.L004440D0:
/* 004440D0 8F908B18 */  lw     $s0, %got(vreg_offset)($gp)
/* 004440D4 8F8F8A0C */  lw     $t7, %got(n_unsaved_regs)($gp)
/* 004440D8 24110020 */  li    $s1, 32
/* 004440DC AE110000 */  sw    $s1, ($s0)
/* 004440E0 8DEF0000 */  lw    $t7, ($t7)
/* 004440E4 8F818B10 */  lw     $at, %got(max_vreg_offset)($gp)
/* 004440E8 000F7080 */  sll   $t6, $t7, 2
/* 004440EC 022EC821 */  addu  $t9, $s1, $t6
/* 004440F0 AC390000 */  sw    $t9, ($at)
.L004440F4:
/* 004440F4 8F828A00 */  lw     $v0, %got(n_fp_parm_regs)($gp)
/* 004440F8 8F818B20 */  lw     $at, %got(vreg_count)($gp)
/* 004440FC 8C420000 */  lw    $v0, ($v0)
/* 00444100 AC200000 */  sw    $zero, ($at)
/* 00444104 24010004 */  li    $at, 4
/* 00444108 00026840 */  sll   $t5, $v0, 1
/* 0044410C 15A1000C */  bne   $t5, $at, .L00444140
/* 00444110 00000000 */   nop   
/* 00444114 8F928B1C */  lw     $s2, %got(fp_vreg_offset)($gp)
/* 00444118 8F8E8A10 */  lw     $t6, %got(n_unsaved_fp_regs)($gp)
/* 0044411C 241800B0 */  li    $t8, 176
/* 00444120 AE580000 */  sw    $t8, ($s2)
/* 00444124 8DCE0000 */  lw    $t6, ($t6)
/* 00444128 8F818B14 */  lw     $at, %got(max_fp_vreg_offset)($gp)
/* 0044412C 01C26821 */  addu  $t5, $t6, $v0
/* 00444130 000D78C0 */  sll   $t7, $t5, 3
/* 00444134 030F7021 */  addu  $t6, $t8, $t7
/* 00444138 1000000A */  b     .L00444164
/* 0044413C AC2E0000 */   sw    $t6, ($at)
.L00444140:
/* 00444140 8F928B1C */  lw     $s2, %got(fp_vreg_offset)($gp)
/* 00444144 8F988A10 */  lw     $t8, %got(n_unsaved_fp_regs)($gp)
/* 00444148 241900C0 */  li    $t9, 192
/* 0044414C AE590000 */  sw    $t9, ($s2)
/* 00444150 8F0F0000 */  lw    $t7, ($t8)
/* 00444154 8F818B14 */  lw     $at, %got(max_fp_vreg_offset)($gp)
/* 00444158 000F70C0 */  sll   $t6, $t7, 3
/* 0044415C 032EC821 */  addu  $t9, $t9, $t6
/* 00444160 AC390000 */  sw    $t9, ($at)
.L00444164:
/* 00444164 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 00444168 8F838B40 */  lw     $v1, %got(calls)($gp)
/* 0044416C 8F828A68 */  lw     $v0, %got(use_real_fp_for_all)($gp)
/* 00444170 A0200000 */  sb    $zero, ($at)
/* 00444174 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00444178 A0200000 */  sb    $zero, ($at)
/* 0044417C 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 00444180 AC200000 */  sw    $zero, ($at)
/* 00444184 8F818AD4 */  lw     $at, %got(pdefs)($gp)
/* 00444188 AC200000 */  sw    $zero, ($at)
/* 0044418C 8F818B3C */  lw     $at, %got(varargs)($gp)
/* 00444190 A0200000 */  sb    $zero, ($at)
/* 00444194 AC600000 */  sw    $zero, ($v1)
/* 00444198 90420000 */  lbu   $v0, ($v0)
/* 0044419C 14400008 */  bnez  $v0, .L004441C0
/* 004441A0 00000000 */   nop   
/* 004441A4 8F8289A8 */  lw     $v0, %got(use_fp)($gp)
/* 004441A8 90420000 */  lbu   $v0, ($v0)
/* 004441AC 14400004 */  bnez  $v0, .L004441C0
/* 004441B0 00000000 */   nop   
/* 004441B4 8E62002C */  lw    $v0, 0x2c($s3)
/* 004441B8 30420002 */  andi  $v0, $v0, 2
/* 004441BC 0002102B */  sltu  $v0, $zero, $v0
.L004441C0:
/* 004441C0 8F818A6C */  lw     $at, %got(use_real_fp_for_proc)($gp)
/* 004441C4 1000080E */  b     .L00446200
/* 004441C8 A0220000 */   sb    $v0, ($at)
.L004441CC:
/* 004441CC 8E780024 */  lw    $t8, 0x24($s3)
/* 004441D0 24010001 */  li    $at, 1
/* 004441D4 240B0001 */  li    $t3, 1
/* 004441D8 17010809 */  bne   $t8, $at, .L00446200
/* 004441DC 24110020 */   li    $s1, 32
/* 004441E0 8F818B3C */  lw     $at, %got(varargs)($gp)
/* 004441E4 8F908B18 */  lw     $s0, %got(vreg_offset)($gp)
/* 004441E8 8F8D8A0C */  lw     $t5, %got(n_unsaved_regs)($gp)
/* 004441EC A02B0000 */  sb    $t3, ($at)
/* 004441F0 AE110000 */  sw    $s1, ($s0)
/* 004441F4 8DAD0000 */  lw    $t5, ($t5)
/* 004441F8 8F818B10 */  lw     $at, %got(max_vreg_offset)($gp)
/* 004441FC 8F928B1C */  lw     $s2, %got(fp_vreg_offset)($gp)
/* 00444200 000D7080 */  sll   $t6, $t5, 2
/* 00444204 8F8F8A10 */  lw     $t7, %got(n_unsaved_fp_regs)($gp)
/* 00444208 022EC821 */  addu  $t9, $s1, $t6
/* 0044420C 241800C0 */  li    $t8, 192
/* 00444210 AC390000 */  sw    $t9, ($at)
/* 00444214 AE580000 */  sw    $t8, ($s2)
/* 00444218 8DEE0000 */  lw    $t6, ($t7)
/* 0044421C 8F818B14 */  lw     $at, %got(max_fp_vreg_offset)($gp)
/* 00444220 000EC8C0 */  sll   $t9, $t6, 3
/* 00444224 0319C021 */  addu  $t8, $t8, $t9
/* 00444228 100007F5 */  b     .L00446200
/* 0044422C AC380000 */   sw    $t8, ($at)
.L00444230:
/* 00444230 92670029 */  lbu   $a3, 0x29($s3)
/* 00444234 30E700E0 */  andi  $a3, $a3, 0xe0
/* 00444238 00073942 */  srl   $a3, $a3, 5
/* 0044423C 18E00008 */  blez  $a3, .L00444260
/* 00444240 00000000 */   nop   
/* 00444244 8F998488 */  lw    $t9, %call16(map_pars_to_regs)($gp)
/* 00444248 8F908B24 */  lw     $s0, %got(mst_node)($gp)
/* 0044424C 00E02825 */  move  $a1, $a3
/* 00444250 0320F809 */  jalr  $t9
/* 00444254 8E040000 */   lw    $a0, ($s0)
/* 00444258 10000007 */  b     .L00444278
/* 0044425C 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00444260:
/* 00444260 8F998488 */  lw    $t9, %call16(map_pars_to_regs)($gp)
/* 00444264 8F908B24 */  lw     $s0, %got(mst_node)($gp)
/* 00444268 2405FFFF */  li    $a1, -1
/* 0044426C 0320F809 */  jalr  $t9
/* 00444270 8E040000 */   lw    $a0, ($s0)
/* 00444274 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00444278:
/* 00444278 8F998494 */  lw    $t9, %call16(fix_amt_ref)($gp)
/* 0044427C 8E040000 */  lw    $a0, ($s0)
/* 00444280 0320F809 */  jalr  $t9
/* 00444284 00000000 */   nop   
/* 00444288 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044428C 926F0021 */  lbu   $t7, 0x21($s3)
/* 00444290 8F8D8A40 */  lw     $t5, %got(tail_call_opt)($gp)
/* 00444294 31EEFF1F */  andi  $t6, $t7, 0xff1f
/* 00444298 A26E0021 */  sb    $t6, 0x21($s3)
/* 0044429C 91AD0000 */  lbu   $t5, ($t5)
/* 004442A0 51A00121 */  beql  $t5, $zero, .L00444728
/* 004442A4 926D0021 */   lbu   $t5, 0x21($s3)
/* 004442A8 8E62002C */  lw    $v0, 0x2c($s3)
/* 004442AC 30590002 */  andi  $t9, $v0, 2
/* 004442B0 1720011C */  bnez  $t9, .L00444724
/* 004442B4 30580008 */   andi  $t8, $v0, 8
/* 004442B8 1700011A */  bnez  $t8, .L00444724
/* 004442BC 304F0010 */   andi  $t7, $v0, 0x10
/* 004442C0 15E00118 */  bnez  $t7, .L00444724
/* 004442C4 304E0020 */   andi  $t6, $v0, 0x20
/* 004442C8 55C00117 */  bnel  $t6, $zero, .L00444728
/* 004442CC 926D0021 */   lbu   $t5, 0x21($s3)
/* 004442D0 92790021 */  lbu   $t9, 0x21($s3)
/* 004442D4 93AD00CF */  lbu   $t5, 0xcf($sp)
/* 004442D8 8FAF00D0 */  lw    $t7, 0xd0($sp)
/* 004442DC 3338001F */  andi  $t8, $t9, 0x1f
/* 004442E0 55B80111 */  bnel  $t5, $t8, .L00444728
/* 004442E4 926D0021 */   lbu   $t5, 0x21($s3)
/* 004442E8 966E0022 */  lhu   $t6, 0x22($s3)
/* 004442EC 55EE010E */  bnel  $t7, $t6, .L00444728
/* 004442F0 926D0021 */   lbu   $t5, 0x21($s3)
/* 004442F4 8E650008 */  lw    $a1, 8($s3)
/* 004442F8 24010088 */  li    $at, 136
/* 004442FC 24140052 */  li    $s4, 82
/* 00444300 90A20020 */  lbu   $v0, 0x20($a1)
/* 00444304 24120002 */  li    $s2, 2
/* 00444308 24110020 */  li    $s1, 32
/* 0044430C 1041002F */  beq   $v0, $at, .L004443CC
/* 00444310 240A007B */   li    $t2, 123
/* 00444314 2C590080 */  sltiu $t9, $v0, 0x80
.L00444318:
/* 00444318 13200009 */  beqz  $t9, .L00444340
/* 0044431C 00000000 */   nop   
/* 00444320 8F8F8038 */  lw    $t7, %got(D_10016950)($gp)
/* 00444324 00026943 */  sra   $t5, $v0, 5
/* 00444328 000DC080 */  sll   $t8, $t5, 2
/* 0044432C 25EF6950 */  addiu $t7, %lo(D_10016950) # addiu $t7, $t7, 0x6950
/* 00444330 01F87021 */  addu  $t6, $t7, $t8
/* 00444334 8DCD0000 */  lw    $t5, ($t6)
/* 00444338 004D7804 */  sllv  $t7, $t5, $v0
/* 0044433C 29F90000 */  slti  $t9, $t7, 0
.L00444340:
/* 00444340 5720001E */  bnel  $t9, $zero, .L004443BC
/* 00444344 8CA50008 */   lw    $a1, 8($a1)
/* 00444348 554200F7 */  bnel  $t2, $v0, .L00444728
/* 0044434C 926D0021 */   lbu   $t5, 0x21($s3)
/* 00444350 8F998384 */  lw    $t9, %call16(ureg)($gp)
/* 00444354 24B00020 */  addiu $s0, $a1, 0x20
/* 00444358 02002025 */  move  $a0, $s0
/* 0044435C 0320F809 */  jalr  $t9
/* 00444360 AFA500E4 */   sw    $a1, 0xe4($sp)
/* 00444364 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444368 8FA500E4 */  lw    $a1, 0xe4($sp)
/* 0044436C 1052000A */  beq   $v0, $s2, .L00444398
/* 00444370 240A007B */   li    $t2, 123
/* 00444374 8F998384 */  lw    $t9, %call16(ureg)($gp)
/* 00444378 02002025 */  move  $a0, $s0
/* 0044437C AFA500E4 */  sw    $a1, 0xe4($sp)
/* 00444380 0320F809 */  jalr  $t9
/* 00444384 00000000 */   nop   
/* 00444388 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044438C 8FA500E4 */  lw    $a1, 0xe4($sp)
/* 00444390 145100E4 */  bne   $v0, $s1, .L00444724
/* 00444394 240A007B */   li    $t2, 123
.L00444398:
/* 00444398 8CA30000 */  lw    $v1, ($a1)
/* 0044439C 906E0020 */  lbu   $t6, 0x20($v1)
/* 004443A0 568E00E1 */  bnel  $s4, $t6, .L00444728
/* 004443A4 926D0021 */   lbu   $t5, 0x21($s3)
/* 004443A8 8CAD002C */  lw    $t5, 0x2c($a1)
/* 004443AC 8C6F002C */  lw    $t7, 0x2c($v1)
/* 004443B0 55AF00DD */  bnel  $t5, $t7, .L00444728
/* 004443B4 926D0021 */   lbu   $t5, 0x21($s3)
/* 004443B8 8CA50008 */  lw    $a1, 8($a1)
.L004443BC:
/* 004443BC 24010088 */  li    $at, 136
/* 004443C0 90A20020 */  lbu   $v0, 0x20($a1)
/* 004443C4 5441FFD4 */  bnel  $v0, $at, .L00444318
/* 004443C8 2C590080 */   sltiu $t9, $v0, 0x80
.L004443CC:
/* 004443CC 8CB80004 */  lw    $t8, 4($a1)
/* 004443D0 240A007B */  li    $t2, 123
/* 004443D4 24120002 */  li    $s2, 2
/* 004443D8 8F100008 */  lw    $s0, 8($t8)
/* 004443DC 24140052 */  li    $s4, 82
/* 004443E0 2403001F */  li    $v1, 31
/* 004443E4 92020020 */  lbu   $v0, 0x20($s0)
/* 004443E8 2C590080 */  sltiu $t9, $v0, 0x80
/* 004443EC 13200009 */  beqz  $t9, .L00444414
/* 004443F0 00000000 */   nop   
/* 004443F4 8F8F8038 */  lw    $t7, %got(D_10016950)($gp)
/* 004443F8 00027143 */  sra   $t6, $v0, 5
/* 004443FC 000E6880 */  sll   $t5, $t6, 2
/* 00444400 25EF6950 */  addiu $t7, %lo(D_10016950) # addiu $t7, $t7, 0x6950
/* 00444404 01EDC021 */  addu  $t8, $t7, $t5
/* 00444408 8F0E0000 */  lw    $t6, ($t8)
/* 0044440C 004E7804 */  sllv  $t7, $t6, $v0
/* 00444410 29F90000 */  slti  $t9, $t7, 0
.L00444414:
/* 00444414 13200010 */  beqz  $t9, .L00444458
/* 00444418 00000000 */   nop   
/* 0044441C 8E100008 */  lw    $s0, 8($s0)
.L00444420:
/* 00444420 92020020 */  lbu   $v0, 0x20($s0)
/* 00444424 2C580080 */  sltiu $t8, $v0, 0x80
/* 00444428 13000009 */  beqz  $t8, .L00444450
/* 0044442C 00000000 */   nop   
/* 00444430 8F8D8038 */  lw    $t5, %got(D_10016950)($gp)
/* 00444434 00027143 */  sra   $t6, $v0, 5
/* 00444438 000E7880 */  sll   $t7, $t6, 2
/* 0044443C 25AD6950 */  addiu $t5, %lo(D_10016950) # addiu $t5, $t5, 0x6950
/* 00444440 01AFC821 */  addu  $t9, $t5, $t7
/* 00444444 8F2E0000 */  lw    $t6, ($t9)
/* 00444448 004E6804 */  sllv  $t5, $t6, $v0
/* 0044444C 29B80000 */  slti  $t8, $t5, 0
.L00444450:
/* 00444450 5700FFF3 */  bnel  $t8, $zero, .L00444420
/* 00444454 8E100008 */   lw    $s0, 8($s0)
.L00444458:
/* 00444458 546200B3 */  bnel  $v1, $v0, .L00444728
/* 0044445C 926D0021 */   lbu   $t5, 0x21($s3)
/* 00444460 8CB00008 */  lw    $s0, 8($a1)
/* 00444464 92020020 */  lbu   $v0, 0x20($s0)
/* 00444468 2C590080 */  sltiu $t9, $v0, 0x80
/* 0044446C 13200009 */  beqz  $t9, .L00444494
/* 00444470 00000000 */   nop   
/* 00444474 8F8F8038 */  lw    $t7, %got(D_10016950)($gp)
/* 00444478 00027143 */  sra   $t6, $v0, 5
/* 0044447C 000E6880 */  sll   $t5, $t6, 2
/* 00444480 25EF6950 */  addiu $t7, %lo(D_10016950) # addiu $t7, $t7, 0x6950
/* 00444484 01EDC021 */  addu  $t8, $t7, $t5
/* 00444488 8F0E0000 */  lw    $t6, ($t8)
/* 0044448C 004E7804 */  sllv  $t7, $t6, $v0
/* 00444490 29F90000 */  slti  $t9, $t7, 0
.L00444494:
/* 00444494 13200010 */  beqz  $t9, .L004444D8
/* 00444498 00000000 */   nop   
/* 0044449C 8E100008 */  lw    $s0, 8($s0)
.L004444A0:
/* 004444A0 92020020 */  lbu   $v0, 0x20($s0)
/* 004444A4 2C580080 */  sltiu $t8, $v0, 0x80
/* 004444A8 13000009 */  beqz  $t8, .L004444D0
/* 004444AC 00000000 */   nop   
/* 004444B0 8F8D8038 */  lw    $t5, %got(D_10016950)($gp)
/* 004444B4 00027143 */  sra   $t6, $v0, 5
/* 004444B8 000E7880 */  sll   $t7, $t6, 2
/* 004444BC 25AD6950 */  addiu $t5, %lo(D_10016950) # addiu $t5, $t5, 0x6950
/* 004444C0 01AFC821 */  addu  $t9, $t5, $t7
/* 004444C4 8F2E0000 */  lw    $t6, ($t9)
/* 004444C8 004E6804 */  sllv  $t5, $t6, $v0
/* 004444CC 29B80000 */  slti  $t8, $t5, 0
.L004444D0:
/* 004444D0 5700FFF3 */  bnel  $t8, $zero, .L004444A0
/* 004444D4 8E100008 */   lw    $s0, 8($s0)
.L004444D8:
/* 004444D8 54620093 */  bnel  $v1, $v0, .L00444728
/* 004444DC 926D0021 */   lbu   $t5, 0x21($s3)
/* 004444E0 8E6C000C */  lw    $t4, 0xc($s3)
/* 004444E4 2408005C */  li    $t0, 92
/* 004444E8 2409006F */  li    $t1, 111
/* 004444EC 91820020 */  lbu   $v0, 0x20($t4)
/* 004444F0 01802825 */  move  $a1, $t4
/* 004444F4 5102000E */  beql  $t0, $v0, .L00444530
/* 004444F8 2409006F */   li    $t1, 111
/* 004444FC 5122000C */  beql  $t1, $v0, .L00444530
/* 00444500 2409006F */   li    $t1, 111
/* 00444504 5142000A */  beql  $t2, $v0, .L00444530
/* 00444508 2409006F */   li    $t1, 111
/* 0044450C 8CA5000C */  lw    $a1, 0xc($a1)
.L00444510:
/* 00444510 90A20020 */  lbu   $v0, 0x20($a1)
/* 00444514 51020006 */  beql  $t0, $v0, .L00444530
/* 00444518 2409006F */   li    $t1, 111
/* 0044451C 51220004 */  beql  $t1, $v0, .L00444530
/* 00444520 2409006F */   li    $t1, 111
/* 00444524 5542FFFA */  bnel  $t2, $v0, .L00444510
/* 00444528 8CA5000C */   lw    $a1, 0xc($a1)
/* 0044452C 2409006F */  li    $t1, 111
.L00444530:
/* 00444530 51220004 */  beql  $t1, $v0, .L00444544
/* 00444534 8CB9002C */   lw    $t9, 0x2c($a1)
/* 00444538 15420015 */  bne   $t2, $v0, .L00444590
/* 0044453C 00000000 */   nop   
/* 00444540 8CB9002C */  lw    $t9, 0x2c($a1)
.L00444544:
/* 00444544 8CAE0028 */  lw    $t6, 0x28($a1)
/* 00444548 8FAD00C8 */  lw    $t5, 0xc8($sp)
/* 0044454C 032E3821 */  addu  $a3, $t9, $t6
/* 00444550 24E70003 */  addiu $a3, $a3, 3
/* 00444554 04E10002 */  bgez  $a3, .L00444560
/* 00444558 00E00821 */   move  $at, $a3
/* 0044455C 24E10003 */  addiu $at, $a3, 3
.L00444560:
/* 00444560 00013883 */  sra   $a3, $at, 2
/* 00444564 29A10004 */  slti  $at, $t5, 4
/* 00444568 50200003 */  beql  $at, $zero, .L00444578
/* 0044456C 28E10004 */   slti  $at, $a3, 4
/* 00444570 240D0004 */  li    $t5, 4
/* 00444574 28E10004 */  slti  $at, $a3, 4
.L00444578:
/* 00444578 10200002 */  beqz  $at, .L00444584
/* 0044457C 00E07825 */   move  $t7, $a3
/* 00444580 240F0004 */  li    $t7, 4
.L00444584:
/* 00444584 01AF082A */  slt   $at, $t5, $t7
/* 00444588 54200067 */  bnel  $at, $zero, .L00444728
/* 0044458C 926D0021 */   lbu   $t5, 0x21($s3)
.L00444590:
/* 00444590 1102001F */  beq   $t0, $v0, .L00444610
/* 00444594 240B0001 */   li    $t3, 1
/* 00444598 24070047 */  li    $a3, 71
/* 0044459C 8F868A28 */  lw     $a2, %got(addr_dtype)($gp)
.L004445A0:
/* 004445A0 55220018 */  bnel  $t1, $v0, .L00444604
/* 004445A4 8CA5000C */   lw    $a1, 0xc($a1)
/* 004445A8 90B90021 */  lbu   $t9, 0x21($a1)
/* 004445AC 90D80000 */  lbu   $t8, ($a2)
/* 004445B0 332E001F */  andi  $t6, $t9, 0x1f
/* 004445B4 570E0013 */  bnel  $t8, $t6, .L00444604
/* 004445B8 8CA5000C */   lw    $a1, 0xc($a1)
/* 004445BC 8CA2000C */  lw    $v0, 0xc($a1)
/* 004445C0 904D0020 */  lbu   $t5, 0x20($v0)
/* 004445C4 554D000F */  bnel  $t2, $t5, .L00444604
/* 004445C8 8CA5000C */   lw    $a1, 0xc($a1)
/* 004445CC 8C430000 */  lw    $v1, ($v0)
/* 004445D0 90640020 */  lbu   $a0, 0x20($v1)
/* 004445D4 52840004 */  beql  $s4, $a0, .L004445E8
/* 004445D8 90620021 */   lbu   $v0, 0x21($v1)
/* 004445DC 54E40009 */  bnel  $a3, $a0, .L00444604
/* 004445E0 8CA5000C */   lw    $a1, 0xc($a1)
/* 004445E4 90620021 */  lbu   $v0, 0x21($v1)
.L004445E8:
/* 004445E8 00021600 */  sll   $v0, $v0, 0x18
/* 004445EC 00021742 */  srl   $v0, $v0, 0x1d
/* 004445F0 5162004D */  beql  $t3, $v0, .L00444728
/* 004445F4 926D0021 */   lbu   $t5, 0x21($s3)
/* 004445F8 5242004B */  beql  $s2, $v0, .L00444728
/* 004445FC 926D0021 */   lbu   $t5, 0x21($s3)
/* 00444600 8CA5000C */  lw    $a1, 0xc($a1)
.L00444604:
/* 00444604 90A20020 */  lbu   $v0, 0x20($a1)
/* 00444608 1502FFE5 */  bne   $t0, $v0, .L004445A0
/* 0044460C 00000000 */   nop   
.L00444610:
/* 00444610 91820020 */  lbu   $v0, 0x20($t4)
/* 00444614 01802825 */  move  $a1, $t4
/* 00444618 5102003F */  beql  $t0, $v0, .L00444718
/* 0044461C 92790021 */   lbu   $t9, 0x21($s3)
/* 00444620 5122003D */  beql  $t1, $v0, .L00444718
/* 00444624 92790021 */   lbu   $t9, 0x21($s3)
.L00444628:
/* 00444628 55420035 */  bnel  $t2, $v0, .L00444700
/* 0044462C 8CA5000C */   lw    $a1, 0xc($a1)
/* 00444630 90AF0021 */  lbu   $t7, 0x21($a1)
/* 00444634 000FCE00 */  sll   $t9, $t7, 0x18
/* 00444638 0019C742 */  srl   $t8, $t9, 0x1d
/* 0044463C 56580030 */  bnel  $s2, $t8, .L00444700
/* 00444640 8CA5000C */   lw    $a1, 0xc($a1)
/* 00444644 8CA30000 */  lw    $v1, ($a1)
/* 00444648 906E0020 */  lbu   $t6, 0x20($v1)
/* 0044464C 568E000C */  bnel  $s4, $t6, .L00444680
/* 00444650 8C620000 */   lw    $v0, ($v1)
/* 00444654 906D0021 */  lbu   $t5, 0x21($v1)
/* 00444658 000D7E00 */  sll   $t7, $t5, 0x18
/* 0044465C 000FCF42 */  srl   $t9, $t7, 0x1d
/* 00444660 56590007 */  bnel  $s2, $t9, .L00444680
/* 00444664 8C620000 */   lw    $v0, ($v1)
/* 00444668 8C78002C */  lw    $t8, 0x2c($v1)
/* 0044466C 8CAE002C */  lw    $t6, 0x2c($a1)
/* 00444670 030E082A */  slt   $at, $t8, $t6
/* 00444674 5420002C */  bnel  $at, $zero, .L00444728
/* 00444678 926D0021 */   lbu   $t5, 0x21($s3)
/* 0044467C 8C620000 */  lw    $v0, ($v1)
.L00444680:
/* 00444680 5040000F */  beql  $v0, $zero, .L004446C0
/* 00444684 8C620004 */   lw    $v0, 4($v1)
/* 00444688 904D0020 */  lbu   $t5, 0x20($v0)
/* 0044468C 568D000C */  bnel  $s4, $t5, .L004446C0
/* 00444690 8C620004 */   lw    $v0, 4($v1)
/* 00444694 904F0021 */  lbu   $t7, 0x21($v0)
/* 00444698 000FCE00 */  sll   $t9, $t7, 0x18
/* 0044469C 0019C742 */  srl   $t8, $t9, 0x1d
/* 004446A0 56580007 */  bnel  $s2, $t8, .L004446C0
/* 004446A4 8C620004 */   lw    $v0, 4($v1)
/* 004446A8 8C4E002C */  lw    $t6, 0x2c($v0)
/* 004446AC 8CAD002C */  lw    $t5, 0x2c($a1)
/* 004446B0 01CD082A */  slt   $at, $t6, $t5
/* 004446B4 5420001C */  bnel  $at, $zero, .L00444728
/* 004446B8 926D0021 */   lbu   $t5, 0x21($s3)
/* 004446BC 8C620004 */  lw    $v0, 4($v1)
.L004446C0:
/* 004446C0 5040000F */  beql  $v0, $zero, .L00444700
/* 004446C4 8CA5000C */   lw    $a1, 0xc($a1)
/* 004446C8 904F0020 */  lbu   $t7, 0x20($v0)
/* 004446CC 568F000C */  bnel  $s4, $t7, .L00444700
/* 004446D0 8CA5000C */   lw    $a1, 0xc($a1)
/* 004446D4 90590021 */  lbu   $t9, 0x21($v0)
/* 004446D8 0019C600 */  sll   $t8, $t9, 0x18
/* 004446DC 00187742 */  srl   $t6, $t8, 0x1d
/* 004446E0 564E0007 */  bnel  $s2, $t6, .L00444700
/* 004446E4 8CA5000C */   lw    $a1, 0xc($a1)
/* 004446E8 8C4D002C */  lw    $t5, 0x2c($v0)
/* 004446EC 8CAF002C */  lw    $t7, 0x2c($a1)
/* 004446F0 01AF082A */  slt   $at, $t5, $t7
/* 004446F4 5420000C */  bnel  $at, $zero, .L00444728
/* 004446F8 926D0021 */   lbu   $t5, 0x21($s3)
/* 004446FC 8CA5000C */  lw    $a1, 0xc($a1)
.L00444700:
/* 00444700 90A20020 */  lbu   $v0, 0x20($a1)
/* 00444704 51020004 */  beql  $t0, $v0, .L00444718
/* 00444708 92790021 */   lbu   $t9, 0x21($s3)
/* 0044470C 1522FFC6 */  bne   $t1, $v0, .L00444628
/* 00444710 00000000 */   nop   
/* 00444714 92790021 */  lbu   $t9, 0x21($s3)
.L00444718:
/* 00444718 3338FF1F */  andi  $t8, $t9, 0xff1f
/* 0044471C 370E00A0 */  ori   $t6, $t8, 0xa0
/* 00444720 A26E0021 */  sb    $t6, 0x21($s3)
.L00444724:
/* 00444724 926D0021 */  lbu   $t5, 0x21($s3)
.L00444728:
/* 00444728 24010005 */  li    $at, 5
/* 0044472C 000D7E00 */  sll   $t7, $t5, 0x18
/* 00444730 000FCF42 */  srl   $t9, $t7, 0x1d
/* 00444734 13210012 */  beq   $t9, $at, .L00444780
/* 00444738 00000000 */   nop   
/* 0044473C 8E62002C */  lw    $v0, 0x2c($s3)
/* 00444740 30580002 */  andi  $t8, $v0, 2
/* 00444744 1300000A */  beqz  $t8, .L00444770
/* 00444748 304E0010 */   andi  $t6, $v0, 0x10
/* 0044474C 11C0000C */  beqz  $t6, .L00444780
/* 00444750 00000000 */   nop   
/* 00444754 8F838B40 */  lw     $v1, %got(calls)($gp)
/* 00444758 8F8189B4 */  lw     $at, %got(pseudo_leaf)($gp)
/* 0044475C 8C6D0000 */  lw    $t5, ($v1)
/* 00444760 25AF0001 */  addiu $t7, $t5, 1
/* 00444764 AC6F0000 */  sw    $t7, ($v1)
/* 00444768 10000005 */  b     .L00444780
/* 0044476C A0200000 */   sb    $zero, ($at)
.L00444770:
/* 00444770 8F838B40 */  lw     $v1, %got(calls)($gp)
/* 00444774 8C790000 */  lw    $t9, ($v1)
/* 00444778 27380001 */  addiu $t8, $t9, 1
/* 0044477C AC780000 */  sw    $t8, ($v1)
.L00444780:
/* 00444780 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 00444784 A0200000 */  sb    $zero, ($at)
/* 00444788 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 0044478C A0200000 */  sb    $zero, ($at)
/* 00444790 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 00444794 AC200000 */  sw    $zero, ($at)
/* 00444798 10000699 */  b     .L00446200
/* 0044479C 92640020 */   lbu   $a0, 0x20($s3)
.L004447A0:
/* 004447A0 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 004447A4 A0200000 */  sb    $zero, ($at)
/* 004447A8 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 004447AC A0200000 */  sb    $zero, ($at)
/* 004447B0 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 004447B4 10000692 */  b     .L00446200
/* 004447B8 AC200000 */   sw    $zero, ($at)
.L004447BC:
/* 004447BC 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 004447C0 8E640000 */  lw    $a0, ($s3)
/* 004447C4 0320F809 */  jalr  $t9
/* 004447C8 00000000 */   nop   
/* 004447CC 92670029 */  lbu   $a3, 0x29($s3)
/* 004447D0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004447D4 AE620000 */  sw    $v0, ($s3)
/* 004447D8 30E700E0 */  andi  $a3, $a3, 0xe0
/* 004447DC 00073942 */  srl   $a3, $a3, 5
/* 004447E0 18E00008 */  blez  $a3, .L00444804
/* 004447E4 00000000 */   nop   
/* 004447E8 8F998488 */  lw    $t9, %call16(map_pars_to_regs)($gp)
/* 004447EC 8F908B24 */  lw     $s0, %got(mst_node)($gp)
/* 004447F0 00E02825 */  move  $a1, $a3
/* 004447F4 0320F809 */  jalr  $t9
/* 004447F8 8E040000 */   lw    $a0, ($s0)
/* 004447FC 10000007 */  b     .L0044481C
/* 00444800 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00444804:
/* 00444804 8F998488 */  lw    $t9, %call16(map_pars_to_regs)($gp)
/* 00444808 8F908B24 */  lw     $s0, %got(mst_node)($gp)
/* 0044480C 2405FFFF */  li    $a1, -1
/* 00444810 0320F809 */  jalr  $t9
/* 00444814 8E040000 */   lw    $a0, ($s0)
/* 00444818 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L0044481C:
/* 0044481C 8F838B40 */  lw     $v1, %got(calls)($gp)
/* 00444820 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 00444824 8C6E0000 */  lw    $t6, ($v1)
/* 00444828 25CD0001 */  addiu $t5, $t6, 1
/* 0044482C AC6D0000 */  sw    $t5, ($v1)
/* 00444830 A0200000 */  sb    $zero, ($at)
/* 00444834 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00444838 A0200000 */  sb    $zero, ($at)
/* 0044483C 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 00444840 AC200000 */  sw    $zero, ($at)
/* 00444844 1000066E */  b     .L00446200
/* 00444848 92640020 */   lbu   $a0, 0x20($s3)
.L0044484C:
/* 0044484C 8F998610 */  lw    $t9, %call16(check_reg)($gp)
/* 00444850 02602025 */  move  $a0, $s3
/* 00444854 0320F809 */  jalr  $t9
/* 00444858 00000000 */   nop   
/* 0044485C 926F0021 */  lbu   $t7, 0x21($s3)
/* 00444860 24010003 */  li    $at, 3
/* 00444864 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444868 000FCE00 */  sll   $t9, $t7, 0x18
/* 0044486C 0019C742 */  srl   $t8, $t9, 0x1d
/* 00444870 13010003 */  beq   $t8, $at, .L00444880
/* 00444874 240B0001 */   li    $t3, 1
/* 00444878 10000002 */  b     .L00444884
/* 0044487C A26B0016 */   sb    $t3, 0x16($s3)
.L00444880:
/* 00444880 A2600016 */  sb    $zero, 0x16($s3)
.L00444884:
/* 00444884 8F998618 */  lw    $t9, %call16(load_cse)($gp)
/* 00444888 02602025 */  move  $a0, $s3
/* 0044488C 0320F809 */  jalr  $t9
/* 00444890 00000000 */   nop   
/* 00444894 100006AC */  b     .L00446348
/* 00444898 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L0044489C:
/* 0044489C 8F998614 */  lw    $t9, %call16(assign_vreg)($gp)
/* 004448A0 8F858B34 */  lw     $a1, %got(leaf)($gp)
/* 004448A4 02602025 */  move  $a0, $s3
/* 004448A8 0320F809 */  jalr  $t9
/* 004448AC 90A50000 */   lbu   $a1, ($a1)
/* 004448B0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004448B4 10000652 */  b     .L00446200
/* 004448B8 92640020 */   lbu   $a0, 0x20($s3)
.L004448BC:
/* 004448BC 92620021 */  lbu   $v0, 0x21($s3)
/* 004448C0 24010006 */  li    $at, 6
/* 004448C4 00021600 */  sll   $v0, $v0, 0x18
/* 004448C8 00021742 */  srl   $v0, $v0, 0x1d
/* 004448CC 54410025 */  bnel  $v0, $at, .L00444964
/* 004448D0 24120002 */   li    $s2, 2
/* 004448D4 8F8E89B4 */  lw     $t6, %got(pseudo_leaf)($gp)
/* 004448D8 24190040 */  li    $t9, 64
/* 004448DC 91CE0000 */  lbu   $t6, ($t6)
/* 004448E0 55C00020 */  bnel  $t6, $zero, .L00444964
/* 004448E4 24120002 */   li    $s2, 2
/* 004448E8 8F8D8B20 */  lw     $t5, %got(vreg_count)($gp)
/* 004448EC 8DAD0000 */  lw    $t5, ($t5)
/* 004448F0 01A002B6 */  tne   $t5, $zero, 0xa
/* 004448F4 8F818B34 */  lw     $at, %got(leaf)($gp)
/* 004448F8 A0200000 */  sb    $zero, ($at)
/* 004448FC 8E6F0024 */  lw    $t7, 0x24($s3)
/* 00444900 24010001 */  li    $at, 1
/* 00444904 15E10004 */  bne   $t7, $at, .L00444918
/* 00444908 00000000 */   nop   
/* 0044490C 8F818B38 */  lw     $at, %got(has_entry)($gp)
/* 00444910 240B0001 */  li    $t3, 1
/* 00444914 A02B0000 */  sb    $t3, ($at)
.L00444918:
/* 00444918 8F908B18 */  lw     $s0, %got(vreg_offset)($gp)
/* 0044491C 8F8E8A04 */  lw     $t6, %got(n_saved_regs)($gp)
/* 00444920 8F818B10 */  lw     $at, %got(max_vreg_offset)($gp)
/* 00444924 AE190000 */  sw    $t9, ($s0)
/* 00444928 8DCE0000 */  lw    $t6, ($t6)
/* 0044492C 8F928B1C */  lw     $s2, %got(fp_vreg_offset)($gp)
/* 00444930 8F988A08 */  lw     $t8, %got(n_saved_fp_regs)($gp)
/* 00444934 000E6880 */  sll   $t5, $t6, 2
/* 00444938 032D7821 */  addu  $t7, $t9, $t5
/* 0044493C 241900D0 */  li    $t9, 208
/* 00444940 AC2F0000 */  sw    $t7, ($at)
/* 00444944 AE590000 */  sw    $t9, ($s2)
/* 00444948 8F0D0000 */  lw    $t5, ($t8)
/* 0044494C 8F818B14 */  lw     $at, %got(max_fp_vreg_offset)($gp)
/* 00444950 000D78C0 */  sll   $t7, $t5, 3
/* 00444954 032FC821 */  addu  $t9, $t9, $t7
/* 00444958 10000629 */  b     .L00446200
/* 0044495C AC390000 */   sw    $t9, ($at)
/* 00444960 24120002 */  li    $s2, 2
.L00444964:
/* 00444964 16420626 */  bne   $s2, $v0, .L00446200
/* 00444968 00000000 */   nop   
/* 0044496C 8F828AD4 */  lw     $v0, %got(pdefs)($gp)
/* 00444970 8E780000 */  lw    $t8, ($s3)
/* 00444974 8F8D8B34 */  lw     $t5, %got(leaf)($gp)
/* 00444978 AC580000 */  sw    $t8, ($v0)
/* 0044497C 91AD0000 */  lbu   $t5, ($t5)
/* 00444980 11A00041 */  beqz  $t5, .L00444A88
/* 00444984 00000000 */   nop   
/* 00444988 8F8E8B3C */  lw     $t6, %got(varargs)($gp)
/* 0044498C 91CE0000 */  lbu   $t6, ($t6)
/* 00444990 15C0003D */  bnez  $t6, .L00444A88
/* 00444994 00000000 */   nop   
/* 00444998 1300003B */  beqz  $t8, .L00444A88
/* 0044499C 03002825 */   move  $a1, $t8
/* 004449A0 8F0F0030 */  lw    $t7, 0x30($t8)
/* 004449A4 2414FFFF */  li    $s4, -1
/* 004449A8 128F0037 */  beq   $s4, $t7, .L00444A88
/* 004449AC 00000000 */   nop   
/* 004449B0 8F928B1C */  lw     $s2, %got(fp_vreg_offset)($gp)
/* 004449B4 8F9189FC */  lw     $s1, %got(n_parm_regs)($gp)
/* 004449B8 8F908B18 */  lw     $s0, %got(vreg_offset)($gp)
.L004449BC:
/* 004449BC 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 004449C0 00A02025 */  move  $a0, $a1
/* 004449C4 AFA500E4 */  sw    $a1, 0xe4($sp)
/* 004449C8 0320F809 */  jalr  $t9
/* 004449CC 00000000 */   nop   
/* 004449D0 304300FF */  andi  $v1, $v0, 0xff
/* 004449D4 2C610004 */  sltiu $at, $v1, 4
/* 004449D8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004449DC 14200015 */  bnez  $at, .L00444A34
/* 004449E0 8FA500E4 */   lw    $a1, 0xe4($sp)
/* 004449E4 8E390000 */  lw    $t9, ($s1)
/* 004449E8 27380003 */  addiu $t8, $t9, 3
/* 004449EC 0303082B */  sltu  $at, $t8, $v1
/* 004449F0 54200011 */  bnel  $at, $zero, .L00444A38
/* 004449F4 8CAE0030 */   lw    $t6, 0x30($a1)
/* 004449F8 8CAD0030 */  lw    $t5, 0x30($a1)
/* 004449FC 8CAE0028 */  lw    $t6, 0x28($a1)
/* 00444A00 01AE7821 */  addu  $t7, $t5, $t6
/* 00444A04 25F90003 */  addiu $t9, $t7, 3
/* 00444A08 07210003 */  bgez  $t9, .L00444A18
/* 00444A0C 0019C083 */   sra   $t8, $t9, 2
/* 00444A10 27210003 */  addiu $at, $t9, 3
/* 00444A14 0001C083 */  sra   $t8, $at, 2
.L00444A18:
/* 00444A18 2B010009 */  slti  $at, $t8, 9
/* 00444A1C 54200003 */  bnel  $at, $zero, .L00444A2C
/* 00444A20 00186880 */   sll   $t5, $t8, 2
/* 00444A24 24180008 */  li    $t8, 8
/* 00444A28 00186880 */  sll   $t5, $t8, 2
.L00444A2C:
/* 00444A2C 10000010 */  b     .L00444A70
/* 00444A30 AE0D0000 */   sw    $t5, ($s0)
.L00444A34:
/* 00444A34 8CAE0030 */  lw    $t6, 0x30($a1)
.L00444A38:
/* 00444A38 8CAF0028 */  lw    $t7, 0x28($a1)
/* 00444A3C 01CFC821 */  addu  $t9, $t6, $t7
/* 00444A40 27380007 */  addiu $t8, $t9, 7
/* 00444A44 07010003 */  bgez  $t8, .L00444A54
/* 00444A48 001868C3 */   sra   $t5, $t8, 3
/* 00444A4C 27010007 */  addiu $at, $t8, 7
/* 00444A50 000168C3 */  sra   $t5, $at, 3
.L00444A54:
/* 00444A54 000D7040 */  sll   $t6, $t5, 1
/* 00444A58 29C10031 */  slti  $at, $t6, 0x31
/* 00444A5C 54200003 */  bnel  $at, $zero, .L00444A6C
/* 00444A60 000E7880 */   sll   $t7, $t6, 2
/* 00444A64 240E0030 */  li    $t6, 48
/* 00444A68 000E7880 */  sll   $t7, $t6, 2
.L00444A6C:
/* 00444A6C AE4F0000 */  sw    $t7, ($s2)
.L00444A70:
/* 00444A70 8CA50008 */  lw    $a1, 8($a1)
/* 00444A74 10A00004 */  beqz  $a1, .L00444A88
/* 00444A78 00000000 */   nop   
/* 00444A7C 8CB90030 */  lw    $t9, 0x30($a1)
/* 00444A80 1699FFCE */  bne   $s4, $t9, .L004449BC
/* 00444A84 00000000 */   nop   
.L00444A88:
/* 00444A88 8F828AD4 */  lw     $v0, %got(pdefs)($gp)
/* 00444A8C 92640020 */  lbu   $a0, 0x20($s3)
/* 00444A90 8C500000 */  lw    $s0, ($v0)
/* 00444A94 12000004 */  beqz  $s0, .L00444AA8
/* 00444A98 00000000 */   nop   
/* 00444A9C 8E100008 */  lw    $s0, 8($s0)
.L00444AA0:
/* 00444AA0 5600FFFF */  bnel  $s0, $zero, .L00444AA0
/* 00444AA4 8E100008 */   lw    $s0, 8($s0)
.L00444AA8:
/* 00444AA8 120005D5 */  beqz  $s0, .L00446200
/* 00444AAC 00000000 */   nop   
/* 00444AB0 100005D3 */  b     .L00446200
/* 00444AB4 00000000 */   nop   
.L00444AB8:
/* 00444AB8 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00444ABC 8E640000 */  lw    $a0, ($s3)
/* 00444AC0 0320F809 */  jalr  $t9
/* 00444AC4 00000000 */   nop   
/* 00444AC8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444ACC AE620000 */  sw    $v0, ($s3)
/* 00444AD0 8E640004 */  lw    $a0, 4($s3)
/* 00444AD4 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00444AD8 0320F809 */  jalr  $t9
/* 00444ADC 00000000 */   nop   
/* 00444AE0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444AE4 AE620004 */  sw    $v0, 4($s3)
/* 00444AE8 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00444AEC A0200000 */  sb    $zero, ($at)
/* 00444AF0 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 00444AF4 A0200000 */  sb    $zero, ($at)
/* 00444AF8 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 00444AFC AC200000 */  sw    $zero, ($at)
/* 00444B00 100005BF */  b     .L00446200
/* 00444B04 92640020 */   lbu   $a0, 0x20($s3)
.L00444B08:
/* 00444B08 8E620028 */  lw    $v0, 0x28($s3)
/* 00444B0C 24180021 */  li    $t8, 33
/* 00444B10 02608825 */  move  $s1, $s3
/* 00444B14 005802B0 */  tge   $v0, $t8, 0xa
/* 00444B18 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 00444B1C 8E65002C */  lw    $a1, 0x2c($s3)
/* 00444B20 8E640000 */  lw    $a0, ($s3)
/* 00444B24 000230C0 */  sll   $a2, $v0, 3
/* 00444B28 0320F809 */  jalr  $t9
/* 00444B2C 00052823 */   negu  $a1, $a1
/* 00444B30 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444B34 00409825 */  move  $s3, $v0
/* 00444B38 02202025 */  move  $a0, $s1
/* 00444B3C 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00444B40 0320F809 */  jalr  $t9
/* 00444B44 00000000 */   nop   
/* 00444B48 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444B4C 1000FA1E */  b     .L004433C8
/* 00444B50 92630019 */   lbu   $v1, 0x19($s3)
.L00444B54:
/* 00444B54 966D0022 */  lhu   $t5, 0x22($s3)
/* 00444B58 31AE0002 */  andi  $t6, $t5, 2
/* 00444B5C 11C00008 */  beqz  $t6, .L00444B80
/* 00444B60 00000000 */   nop   
/* 00444B64 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00444B68 8E640000 */  lw    $a0, ($s3)
/* 00444B6C 0320F809 */  jalr  $t9
/* 00444B70 00000000 */   nop   
/* 00444B74 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444B78 10000069 */  b     .L00444D20
/* 00444B7C AE620000 */   sw    $v0, ($s3)
.L00444B80:
/* 00444B80 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00444B84 8E640000 */  lw    $a0, ($s3)
/* 00444B88 0320F809 */  jalr  $t9
/* 00444B8C 00000000 */   nop   
/* 00444B90 10400008 */  beqz  $v0, .L00444BB4
/* 00444B94 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00444B98 8F9983FC */  lw    $t9, %call16(fold)($gp)
/* 00444B9C 02602025 */  move  $a0, $s3
/* 00444BA0 0320F809 */  jalr  $t9
/* 00444BA4 00000000 */   nop   
/* 00444BA8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444BAC 1000005C */  b     .L00444D20
/* 00444BB0 00409825 */   move  $s3, $v0
.L00444BB4:
/* 00444BB4 8E700000 */  lw    $s0, ($s3)
/* 00444BB8 24010019 */  li    $at, 25
/* 00444BBC 92030020 */  lbu   $v1, 0x20($s0)
/* 00444BC0 5461002B */  bnel  $v1, $at, .L00444C70
/* 00444BC4 24010019 */   li    $at, 25
/* 00444BC8 8E0F0024 */  lw    $t7, 0x24($s0)
/* 00444BCC 8E790024 */  lw    $t9, 0x24($s3)
/* 00444BD0 01F9082A */  slt   $at, $t7, $t9
/* 00444BD4 54200026 */  bnel  $at, $zero, .L00444C70
/* 00444BD8 24010019 */   li    $at, 25
/* 00444BDC 96180022 */  lhu   $t8, 0x22($s0)
/* 00444BE0 330D0002 */  andi  $t5, $t8, 2
/* 00444BE4 11A00014 */  beqz  $t5, .L00444C38
/* 00444BE8 00000000 */   nop   
/* 00444BEC 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00444BF0 02608825 */  move  $s1, $s3
/* 00444BF4 02002025 */  move  $a0, $s0
/* 00444BF8 0320F809 */  jalr  $t9
/* 00444BFC 00000000 */   nop   
/* 00444C00 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444C04 00402025 */  move  $a0, $v0
/* 00444C08 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00444C0C 0320F809 */  jalr  $t9
/* 00444C10 00000000 */   nop   
/* 00444C14 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444C18 00409825 */  move  $s3, $v0
/* 00444C1C 02202025 */  move  $a0, $s1
/* 00444C20 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00444C24 0320F809 */  jalr  $t9
/* 00444C28 00000000 */   nop   
/* 00444C2C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444C30 100005C5 */  b     .L00446348
/* 00444C34 02601025 */   move  $v0, $s3
.L00444C38:
/* 00444C38 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00444C3C 02008825 */  move  $s1, $s0
/* 00444C40 8E040000 */  lw    $a0, ($s0)
/* 00444C44 0320F809 */  jalr  $t9
/* 00444C48 00000000 */   nop   
/* 00444C4C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444C50 AE620000 */  sw    $v0, ($s3)
/* 00444C54 02202025 */  move  $a0, $s1
/* 00444C58 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00444C5C 0320F809 */  jalr  $t9
/* 00444C60 00000000 */   nop   
/* 00444C64 10000026 */  b     .L00444D00
/* 00444C68 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00444C6C 24010019 */  li    $at, 25
.L00444C70:
/* 00444C70 14610023 */  bne   $v1, $at, .L00444D00
/* 00444C74 00000000 */   nop   
/* 00444C78 92020021 */  lbu   $v0, 0x21($s0)
/* 00444C7C 926E0021 */  lbu   $t6, 0x21($s3)
/* 00444C80 24010006 */  li    $at, 6
/* 00444C84 3042001F */  andi  $v0, $v0, 0x1f
/* 00444C88 31CF001F */  andi  $t7, $t6, 0x1f
/* 00444C8C 104F0003 */  beq   $v0, $t7, .L00444C9C
/* 00444C90 00000000 */   nop   
/* 00444C94 1041001A */  beq   $v0, $at, .L00444D00
/* 00444C98 00000000 */   nop   
.L00444C9C:
/* 00444C9C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00444CA0 02608825 */  move  $s1, $s3
/* 00444CA4 02002025 */  move  $a0, $s0
/* 00444CA8 0320F809 */  jalr  $t9
/* 00444CAC 00000000 */   nop   
/* 00444CB0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444CB4 00402025 */  move  $a0, $v0
/* 00444CB8 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00444CBC 0320F809 */  jalr  $t9
/* 00444CC0 00000000 */   nop   
/* 00444CC4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444CC8 00409825 */  move  $s3, $v0
/* 00444CCC 02202025 */  move  $a0, $s1
/* 00444CD0 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00444CD4 0320F809 */  jalr  $t9
/* 00444CD8 00000000 */   nop   
/* 00444CDC 8E390000 */  lw    $t9, ($s1)
/* 00444CE0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444CE4 02601025 */  move  $v0, $s3
/* 00444CE8 93380016 */  lbu   $t8, 0x16($t9)
/* 00444CEC 17000002 */  bnez  $t8, .L00444CF8
/* 00444CF0 00000000 */   nop   
/* 00444CF4 24180001 */  li    $t8, 1
.L00444CF8:
/* 00444CF8 10000593 */  b     .L00446348
/* 00444CFC A2780016 */   sb    $t8, 0x16($s3)
.L00444D00:
/* 00444D00 8F998628 */  lw    $t9, %call16(translate_cvtl)($gp)
/* 00444D04 02602025 */  move  $a0, $s3
/* 00444D08 0320F809 */  jalr  $t9
/* 00444D0C 00000000 */   nop   
/* 00444D10 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444D14 00409825 */  move  $s3, $v0
/* 00444D18 1000F9AB */  b     .L004433C8
/* 00444D1C 90430019 */   lbu   $v1, 0x19($v0)
.L00444D20:
/* 00444D20 10000537 */  b     .L00446200
/* 00444D24 92640020 */   lbu   $a0, 0x20($s3)
.L00444D28:
/* 00444D28 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00444D2C 8E640000 */  lw    $a0, ($s3)
/* 00444D30 0320F809 */  jalr  $t9
/* 00444D34 00000000 */   nop   
/* 00444D38 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444D3C AE620000 */  sw    $v0, ($s3)
/* 00444D40 24040006 */  li    $a0, 6
/* 00444D44 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00444D48 00002825 */  move  $a1, $zero
/* 00444D4C 8E66002C */  lw    $a2, 0x2c($s3)
/* 00444D50 0320F809 */  jalr  $t9
/* 00444D54 00000000 */   nop   
/* 00444D58 8E6D0000 */  lw    $t5, ($s3)
/* 00444D5C 240B0001 */  li    $t3, 1
/* 00444D60 AE620004 */  sw    $v0, 4($s3)
/* 00444D64 A26B0020 */  sb    $t3, 0x20($s3)
/* 00444D68 A6600022 */  sh    $zero, 0x22($s3)
/* 00444D6C 904E0016 */  lbu   $t6, 0x16($v0)
/* 00444D70 91A30016 */  lbu   $v1, 0x16($t5)
/* 00444D74 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444D78 15C30003 */  bne   $t6, $v1, .L00444D88
/* 00444D7C 246F0001 */   addiu $t7, $v1, 1
/* 00444D80 10000008 */  b     .L00444DA4
/* 00444D84 A26F0016 */   sb    $t7, 0x16($s3)
.L00444D88:
/* 00444D88 8E790004 */  lw    $t9, 4($s3)
/* 00444D8C 93380016 */  lbu   $t8, 0x16($t9)
/* 00444D90 0303082B */  sltu  $at, $t8, $v1
/* 00444D94 50200003 */  beql  $at, $zero, .L00444DA4
/* 00444D98 A2780016 */   sb    $t8, 0x16($s3)
/* 00444D9C 0060C025 */  move  $t8, $v1
/* 00444DA0 A2780016 */  sb    $t8, 0x16($s3)
.L00444DA4:
/* 00444DA4 10000516 */  b     .L00446200
/* 00444DA8 92640020 */   lbu   $a0, 0x20($s3)
.L00444DAC:
/* 00444DAC 8F9985FC */  lw    $t9, %call16(cse)($gp)
/* 00444DB0 02602025 */  move  $a0, $s3
/* 00444DB4 0320F809 */  jalr  $t9
/* 00444DB8 00000000 */   nop   
/* 00444DBC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444DC0 00409825 */  move  $s3, $v0
/* 00444DC4 1000050E */  b     .L00446200
/* 00444DC8 90440020 */   lbu   $a0, 0x20($v0)
.L00444DCC:
/* 00444DCC 92630021 */  lbu   $v1, 0x21($s3)
/* 00444DD0 2401000E */  li    $at, 14
/* 00444DD4 3063001F */  andi  $v1, $v1, 0x1f
/* 00444DD8 54610012 */  bnel  $v1, $at, .L00444E24
/* 00444DDC 2C790020 */   sltiu $t9, $v1, 0x20
/* 00444DE0 8E620028 */  lw    $v0, 0x28($s3)
/* 00444DE4 28410005 */  slti  $at, $v0, 5
/* 00444DE8 5020000E */  beql  $at, $zero, .L00444E24
/* 00444DEC 2C790020 */   sltiu $t9, $v1, 0x20
/* 00444DF0 8F9985D8 */  lw    $t9, %call16(get_set_const)($gp)
/* 00444DF4 26640030 */  addiu $a0, $s3, 0x30
/* 00444DF8 00002825 */  move  $a1, $zero
/* 00444DFC 0320F809 */  jalr  $t9
/* 00444E00 000230C0 */   sll   $a2, $v0, 3
/* 00444E04 926D0021 */  lbu   $t5, 0x21($s3)
/* 00444E08 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444E0C AE620030 */  sw    $v0, 0x30($s3)
/* 00444E10 01B47024 */  and   $t6, $t5, $s4
/* 00444E14 35C30008 */  ori   $v1, $t6, 8
/* 00444E18 A2630021 */  sb    $v1, 0x21($s3)
/* 00444E1C 3063001F */  andi  $v1, $v1, 0x1f
/* 00444E20 2C790020 */  sltiu $t9, $v1, 0x20
.L00444E24:
/* 00444E24 3C01000C */  lui   $at, 0xc
/* 00444E28 34218000 */  ori   $at, $at, 0x8000
/* 00444E2C 0019C023 */  negu  $t8, $t9
/* 00444E30 03016824 */  and   $t5, $t8, $at
/* 00444E34 006D7004 */  sllv  $t6, $t5, $v1
/* 00444E38 05C10003 */  bgez  $t6, .L00444E48
/* 00444E3C 240B0001 */   li    $t3, 1
/* 00444E40 10000002 */  b     .L00444E4C
/* 00444E44 A26B0016 */   sb    $t3, 0x16($s3)
.L00444E48:
/* 00444E48 A2600016 */  sb    $zero, 0x16($s3)
.L00444E4C:
/* 00444E4C 100004EC */  b     .L00446200
/* 00444E50 92640020 */   lbu   $a0, 0x20($s3)
.L00444E54:
/* 00444E54 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00444E58 8E640000 */  lw    $a0, ($s3)
/* 00444E5C 0320F809 */  jalr  $t9
/* 00444E60 00000000 */   nop   
/* 00444E64 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444E68 AE620000 */  sw    $v0, ($s3)
/* 00444E6C 8E640004 */  lw    $a0, 4($s3)
/* 00444E70 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00444E74 0320F809 */  jalr  $t9
/* 00444E78 00000000 */   nop   
/* 00444E7C 8E700000 */  lw    $s0, ($s3)
/* 00444E80 AE620004 */  sw    $v0, 4($s3)
/* 00444E84 24070047 */  li    $a3, 71
/* 00444E88 92030020 */  lbu   $v1, 0x20($s0)
/* 00444E8C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444E90 2404005E */  li    $a0, 94
/* 00444E94 14E3000A */  bne   $a3, $v1, .L00444EC0
/* 00444E98 00000000 */   nop   
/* 00444E9C 8F998410 */  lw    $t9, %call16(swap_tree)($gp)
/* 00444EA0 02602025 */  move  $a0, $s3
/* 00444EA4 26650004 */  addiu $a1, $s3, 4
/* 00444EA8 0320F809 */  jalr  $t9
/* 00444EAC 00000000 */   nop   
/* 00444EB0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444EB4 8E700000 */  lw    $s0, ($s3)
/* 00444EB8 10000059 */  b     .L00445020
/* 00444EBC 8E660004 */   lw    $a2, 4($s3)
.L00444EC0:
/* 00444EC0 54830019 */  bnel  $a0, $v1, .L00444F28
/* 00444EC4 8E660004 */   lw    $a2, 4($s3)
/* 00444EC8 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00444ECC 02008825 */  move  $s1, $s0
/* 00444ED0 8E040000 */  lw    $a0, ($s0)
/* 00444ED4 0320F809 */  jalr  $t9
/* 00444ED8 00000000 */   nop   
/* 00444EDC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444EE0 AE620000 */  sw    $v0, ($s3)
/* 00444EE4 02202025 */  move  $a0, $s1
/* 00444EE8 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00444EEC 0320F809 */  jalr  $t9
/* 00444EF0 00000000 */   nop   
/* 00444EF4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444EF8 02602025 */  move  $a0, $s3
/* 00444EFC 26650004 */  addiu $a1, $s3, 4
/* 00444F00 8F998410 */  lw    $t9, %call16(swap_tree)($gp)
/* 00444F04 0320F809 */  jalr  $t9
/* 00444F08 00000000 */   nop   
/* 00444F0C 240F007D */  li    $t7, 125
/* 00444F10 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444F14 A26F0020 */  sb    $t7, 0x20($s3)
/* 00444F18 8E700000 */  lw    $s0, ($s3)
/* 00444F1C 10000040 */  b     .L00445020
/* 00444F20 8E660004 */   lw    $a2, 4($s3)
/* 00444F24 8E660004 */  lw    $a2, 4($s3)
.L00444F28:
/* 00444F28 90C20020 */  lbu   $v0, 0x20($a2)
/* 00444F2C 54820013 */  bnel  $a0, $v0, .L00444F7C
/* 00444F30 96180014 */   lhu   $t8, 0x14($s0)
/* 00444F34 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00444F38 00C08825 */  move  $s1, $a2
/* 00444F3C 8CC40000 */  lw    $a0, ($a2)
/* 00444F40 0320F809 */  jalr  $t9
/* 00444F44 00000000 */   nop   
/* 00444F48 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444F4C AE620004 */  sw    $v0, 4($s3)
/* 00444F50 02202025 */  move  $a0, $s1
/* 00444F54 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00444F58 0320F809 */  jalr  $t9
/* 00444F5C 00000000 */   nop   
/* 00444F60 2419007D */  li    $t9, 125
/* 00444F64 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444F68 A2790020 */  sb    $t9, 0x20($s3)
/* 00444F6C 8E700000 */  lw    $s0, ($s3)
/* 00444F70 1000002B */  b     .L00445020
/* 00444F74 8E660004 */   lw    $a2, 4($s3)
/* 00444F78 96180014 */  lhu   $t8, 0x14($s0)
.L00444F7C:
/* 00444F7C 240B0001 */  li    $t3, 1
/* 00444F80 55780011 */  bnel  $t3, $t8, .L00444FC8
/* 00444F84 94CF0014 */   lhu   $t7, 0x14($a2)
/* 00444F88 5563000F */  bnel  $t3, $v1, .L00444FC8
/* 00444F8C 94CF0014 */   lhu   $t7, 0x14($a2)
/* 00444F90 8E0D0004 */  lw    $t5, 4($s0)
/* 00444F94 91AE0020 */  lbu   $t6, 0x20($t5)
/* 00444F98 54EE000B */  bnel  $a3, $t6, .L00444FC8
/* 00444F9C 94CF0014 */   lhu   $t7, 0x14($a2)
/* 00444FA0 8F998410 */  lw    $t9, %call16(swap_tree)($gp)
/* 00444FA4 26640004 */  addiu $a0, $s3, 4
/* 00444FA8 26050004 */  addiu $a1, $s0, 4
/* 00444FAC 0320F809 */  jalr  $t9
/* 00444FB0 00000000 */   nop   
/* 00444FB4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00444FB8 8E700000 */  lw    $s0, ($s3)
/* 00444FBC 10000018 */  b     .L00445020
/* 00444FC0 8E660004 */   lw    $a2, 4($s3)
/* 00444FC4 94CF0014 */  lhu   $t7, 0x14($a2)
.L00444FC8:
/* 00444FC8 556F0016 */  bnel  $t3, $t7, .L00445024
/* 00444FCC 92030016 */   lbu   $v1, 0x16($s0)
/* 00444FD0 55620014 */  bnel  $t3, $v0, .L00445024
/* 00444FD4 92030016 */   lbu   $v1, 0x16($s0)
/* 00444FD8 8CD90004 */  lw    $t9, 4($a2)
/* 00444FDC 93380020 */  lbu   $t8, 0x20($t9)
/* 00444FE0 54F80010 */  bnel  $a3, $t8, .L00445024
/* 00444FE4 92030016 */   lbu   $v1, 0x16($s0)
/* 00444FE8 8F998410 */  lw    $t9, %call16(swap_tree)($gp)
/* 00444FEC 02602025 */  move  $a0, $s3
/* 00444FF0 24C50004 */  addiu $a1, $a2, 4
/* 00444FF4 0320F809 */  jalr  $t9
/* 00444FF8 00000000 */   nop   
/* 00444FFC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445000 02602025 */  move  $a0, $s3
/* 00445004 26650004 */  addiu $a1, $s3, 4
/* 00445008 8F998410 */  lw    $t9, %call16(swap_tree)($gp)
/* 0044500C 0320F809 */  jalr  $t9
/* 00445010 00000000 */   nop   
/* 00445014 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445018 8E700000 */  lw    $s0, ($s3)
/* 0044501C 8E660004 */  lw    $a2, 4($s3)
.L00445020:
/* 00445020 92030016 */  lbu   $v1, 0x16($s0)
.L00445024:
/* 00445024 90C20016 */  lbu   $v0, 0x16($a2)
/* 00445028 246D0001 */  addiu $t5, $v1, 1
/* 0044502C 14430003 */  bne   $v0, $v1, .L0044503C
/* 00445030 0062082B */   sltu  $at, $v1, $v0
/* 00445034 10000005 */  b     .L0044504C
/* 00445038 A26D0016 */   sb    $t5, 0x16($s3)
.L0044503C:
/* 0044503C 10200002 */  beqz  $at, .L00445048
/* 00445040 00607025 */   move  $t6, $v1
/* 00445044 00407025 */  move  $t6, $v0
.L00445048:
/* 00445048 A26E0016 */  sb    $t6, 0x16($s3)
.L0044504C:
/* 0044504C 1000046C */  b     .L00446200
/* 00445050 92640020 */   lbu   $a0, 0x20($s3)
.L00445054:
/* 00445054 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00445058 8E640000 */  lw    $a0, ($s3)
/* 0044505C 0320F809 */  jalr  $t9
/* 00445060 00000000 */   nop   
/* 00445064 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445068 240F0004 */  li    $t7, 4
/* 0044506C AE620000 */  sw    $v0, ($s3)
/* 00445070 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00445074 A26F0020 */  sb    $t7, 0x20($s3)
/* 00445078 24040008 */  li    $a0, 8
/* 0044507C 00002825 */  move  $a1, $zero
/* 00445080 0320F809 */  jalr  $t9
/* 00445084 24060001 */   li    $a2, 1
/* 00445088 8E790000 */  lw    $t9, ($s3)
/* 0044508C AE620004 */  sw    $v0, 4($s3)
/* 00445090 90580016 */  lbu   $t8, 0x16($v0)
/* 00445094 93230016 */  lbu   $v1, 0x16($t9)
/* 00445098 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044509C 17030003 */  bne   $t8, $v1, .L004450AC
/* 004450A0 246D0001 */   addiu $t5, $v1, 1
/* 004450A4 10000008 */  b     .L004450C8
/* 004450A8 A26D0016 */   sb    $t5, 0x16($s3)
.L004450AC:
/* 004450AC 8E6E0004 */  lw    $t6, 4($s3)
/* 004450B0 91CF0016 */  lbu   $t7, 0x16($t6)
/* 004450B4 01E3082B */  sltu  $at, $t7, $v1
/* 004450B8 50200003 */  beql  $at, $zero, .L004450C8
/* 004450BC A26F0016 */   sb    $t7, 0x16($s3)
/* 004450C0 00607825 */  move  $t7, $v1
/* 004450C4 A26F0016 */  sb    $t7, 0x16($s3)
.L004450C8:
/* 004450C8 1000044D */  b     .L00446200
/* 004450CC 92640020 */   lbu   $a0, 0x20($s3)
.L004450D0:
/* 004450D0 8E790028 */  lw    $t9, 0x28($s3)
/* 004450D4 24180005 */  li    $t8, 5
/* 004450D8 033802B0 */  tge   $t9, $t8, 0xa
/* 004450DC 926D0021 */  lbu   $t5, 0x21($s3)
/* 004450E0 A2680020 */  sb    $t0, 0x20($s3)
/* 004450E4 92630019 */  lbu   $v1, 0x19($s3)
/* 004450E8 01B47024 */  and   $t6, $t5, $s4
/* 004450EC 35CF0008 */  ori   $t7, $t6, 8
/* 004450F0 1000F8B5 */  b     .L004433C8
/* 004450F4 A26F0021 */   sb    $t7, 0x21($s3)
.L004450F8:
/* 004450F8 8E790028 */  lw    $t9, 0x28($s3)
/* 004450FC 24180005 */  li    $t8, 5
/* 00445100 033802B0 */  tge   $t9, $t8, 0xa
/* 00445104 926D0021 */  lbu   $t5, 0x21($s3)
/* 00445108 A2670020 */  sb    $a3, 0x20($s3)
/* 0044510C 92630019 */  lbu   $v1, 0x19($s3)
/* 00445110 01B47024 */  and   $t6, $t5, $s4
/* 00445114 35CF0008 */  ori   $t7, $t6, 8
/* 00445118 1000F8AB */  b     .L004433C8
/* 0044511C A26F0021 */   sb    $t7, 0x21($s3)
.L00445120:
/* 00445120 8E790028 */  lw    $t9, 0x28($s3)
/* 00445124 24180005 */  li    $t8, 5
/* 00445128 24040061 */  li    $a0, 97
/* 0044512C 033802B0 */  tge   $t9, $t8, 0xa
/* 00445130 926D0021 */  lbu   $t5, 0x21($s3)
/* 00445134 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 00445138 A2670020 */  sb    $a3, 0x20($s3)
/* 0044513C 01B47024 */  and   $t6, $t5, $s4
/* 00445140 35CF0008 */  ori   $t7, $t6, 8
/* 00445144 A26F0021 */  sb    $t7, 0x21($s3)
/* 00445148 0320F809 */  jalr  $t9
/* 0044514C 8E650004 */   lw    $a1, 4($s3)
/* 00445150 AE620004 */  sw    $v0, 4($s3)
/* 00445154 90590021 */  lbu   $t9, 0x21($v0)
/* 00445158 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044515C 0334C024 */  and   $t8, $t9, $s4
/* 00445160 370D0008 */  ori   $t5, $t8, 8
/* 00445164 A04D0021 */  sb    $t5, 0x21($v0)
/* 00445168 1000F897 */  b     .L004433C8
/* 0044516C 92630019 */   lbu   $v1, 0x19($s3)
.L00445170:
/* 00445170 8E6E0028 */  lw    $t6, 0x28($s3)
/* 00445174 240F0005 */  li    $t7, 5
/* 00445178 24040008 */  li    $a0, 8
/* 0044517C 01CF02B0 */  tge   $t6, $t7, 0xa
/* 00445180 8F99898C */  lw     $t9, %got(lsb_first)($gp)
/* 00445184 24180073 */  li    $t8, 115
/* 00445188 00002825 */  move  $a1, $zero
/* 0044518C 93390000 */  lbu   $t9, ($t9)
/* 00445190 5320001D */  beql  $t9, $zero, .L00445208
/* 00445194 24190074 */   li    $t9, 116
/* 00445198 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 0044519C 8E640000 */  lw    $a0, ($s3)
/* 004451A0 A2780020 */  sb    $t8, 0x20($s3)
/* 004451A4 0320F809 */  jalr  $t9
/* 004451A8 AE640004 */   sw    $a0, 4($s3)
/* 004451AC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004451B0 8E660028 */  lw    $a2, 0x28($s3)
/* 004451B4 00408025 */  move  $s0, $v0
/* 004451B8 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004451BC 24040008 */  li    $a0, 8
/* 004451C0 00002825 */  move  $a1, $zero
/* 004451C4 0320F809 */  jalr  $t9
/* 004451C8 00063140 */   sll   $a2, $a2, 5
/* 004451CC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004451D0 2404004E */  li    $a0, 78
/* 004451D4 02002825 */  move  $a1, $s0
/* 004451D8 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004451DC 00403025 */  move  $a2, $v0
/* 004451E0 0320F809 */  jalr  $t9
/* 004451E4 00000000 */   nop   
/* 004451E8 AE620000 */  sw    $v0, ($s3)
/* 004451EC 904D0021 */  lbu   $t5, 0x21($v0)
/* 004451F0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004451F4 01B47024 */  and   $t6, $t5, $s4
/* 004451F8 35CF0008 */  ori   $t7, $t6, 8
/* 004451FC 1000000A */  b     .L00445228
/* 00445200 A04F0021 */   sb    $t7, 0x21($v0)
/* 00445204 24190074 */  li    $t9, 116
.L00445208:
/* 00445208 A2790020 */  sb    $t9, 0x20($s3)
/* 0044520C 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00445210 8E780000 */  lw    $t8, ($s3)
/* 00445214 3C068000 */  lui   $a2, 0x8000
/* 00445218 0320F809 */  jalr  $t9
/* 0044521C AE780004 */   sw    $t8, 4($s3)
/* 00445220 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445224 AE620000 */  sw    $v0, ($s3)
.L00445228:
/* 00445228 926D0021 */  lbu   $t5, 0x21($s3)
/* 0044522C 92630019 */  lbu   $v1, 0x19($s3)
/* 00445230 01B47024 */  and   $t6, $t5, $s4
/* 00445234 35CF0008 */  ori   $t7, $t6, 8
/* 00445238 1000F863 */  b     .L004433C8
/* 0044523C A26F0021 */   sb    $t7, 0x21($s3)
.L00445240:
/* 00445240 8E790028 */  lw    $t9, 0x28($s3)
/* 00445244 24180005 */  li    $t8, 5
/* 00445248 033802B0 */  tge   $t9, $t8, 0xa
/* 0044524C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00445250 8E640000 */  lw    $a0, ($s3)
/* 00445254 0320F809 */  jalr  $t9
/* 00445258 00000000 */   nop   
/* 0044525C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445260 00408825 */  move  $s1, $v0
/* 00445264 8E640004 */  lw    $a0, 4($s3)
/* 00445268 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 0044526C 0320F809 */  jalr  $t9
/* 00445270 00000000 */   nop   
/* 00445274 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445278 00408025 */  move  $s0, $v0
/* 0044527C 02602025 */  move  $a0, $s3
/* 00445280 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00445284 0320F809 */  jalr  $t9
/* 00445288 00000000 */   nop   
/* 0044528C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445290 24040006 */  li    $a0, 6
/* 00445294 00002825 */  move  $a1, $zero
/* 00445298 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0044529C 24060001 */  li    $a2, 1
/* 004452A0 0320F809 */  jalr  $t9
/* 004452A4 00000000 */   nop   
/* 004452A8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004452AC 24040001 */  li    $a0, 1
/* 004452B0 02002825 */  move  $a1, $s0
/* 004452B4 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004452B8 00403025 */  move  $a2, $v0
/* 004452BC 0320F809 */  jalr  $t9
/* 004452C0 00000000 */   nop   
/* 004452C4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004452C8 A4400022 */  sh    $zero, 0x22($v0)
/* 004452CC 2404007D */  li    $a0, 125
/* 004452D0 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004452D4 02202825 */  move  $a1, $s1
/* 004452D8 00403025 */  move  $a2, $v0
/* 004452DC 0320F809 */  jalr  $t9
/* 004452E0 00000000 */   nop   
/* 004452E4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004452E8 A4400022 */  sh    $zero, 0x22($v0)
/* 004452EC 00408025 */  move  $s0, $v0
/* 004452F0 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004452F4 24040008 */  li    $a0, 8
/* 004452F8 00002825 */  move  $a1, $zero
/* 004452FC 0320F809 */  jalr  $t9
/* 00445300 2406001F */   li    $a2, 31
/* 00445304 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445308 24040074 */  li    $a0, 116
/* 0044530C 02002825 */  move  $a1, $s0
/* 00445310 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00445314 00403025 */  move  $a2, $v0
/* 00445318 0320F809 */  jalr  $t9
/* 0044531C 00000000 */   nop   
/* 00445320 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445324 904D0021 */  lbu   $t5, 0x21($v0)
/* 00445328 00409825 */  move  $s3, $v0
/* 0044532C 8F99898C */  lw     $t9, %got(lsb_first)($gp)
/* 00445330 01B47024 */  and   $t6, $t5, $s4
/* 00445334 35CF0006 */  ori   $t7, $t6, 6
/* 00445338 A04F0021 */  sb    $t7, 0x21($v0)
/* 0044533C 93390000 */  lbu   $t9, ($t9)
/* 00445340 13200024 */  beqz  $t9, .L004453D4
/* 00445344 00000000 */   nop   
/* 00445348 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 0044534C 02002025 */  move  $a0, $s0
/* 00445350 0320F809 */  jalr  $t9
/* 00445354 00000000 */   nop   
/* 00445358 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044535C 24040074 */  li    $a0, 116
/* 00445360 02602825 */  move  $a1, $s3
/* 00445364 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00445368 00403025 */  move  $a2, $v0
/* 0044536C 0320F809 */  jalr  $t9
/* 00445370 00000000 */   nop   
/* 00445374 90580021 */  lbu   $t8, 0x21($v0)
/* 00445378 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044537C 00409825 */  move  $s3, $v0
/* 00445380 03146824 */  and   $t5, $t8, $s4
/* 00445384 35AE0008 */  ori   $t6, $t5, 8
/* 00445388 A04E0021 */  sb    $t6, 0x21($v0)
/* 0044538C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00445390 02202025 */  move  $a0, $s1
/* 00445394 0320F809 */  jalr  $t9
/* 00445398 00000000 */   nop   
/* 0044539C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004453A0 24040073 */  li    $a0, 115
/* 004453A4 02602825 */  move  $a1, $s3
/* 004453A8 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004453AC 00403025 */  move  $a2, $v0
/* 004453B0 0320F809 */  jalr  $t9
/* 004453B4 00000000 */   nop   
/* 004453B8 904F0021 */  lbu   $t7, 0x21($v0)
/* 004453BC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004453C0 00409825 */  move  $s3, $v0
/* 004453C4 01F4C824 */  and   $t9, $t7, $s4
/* 004453C8 37380008 */  ori   $t8, $t9, 8
/* 004453CC 10000023 */  b     .L0044545C
/* 004453D0 A0580021 */   sb    $t8, 0x21($v0)
.L004453D4:
/* 004453D4 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 004453D8 02002025 */  move  $a0, $s0
/* 004453DC 0320F809 */  jalr  $t9
/* 004453E0 00000000 */   nop   
/* 004453E4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004453E8 24040073 */  li    $a0, 115
/* 004453EC 02602825 */  move  $a1, $s3
/* 004453F0 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004453F4 00403025 */  move  $a2, $v0
/* 004453F8 0320F809 */  jalr  $t9
/* 004453FC 00000000 */   nop   
/* 00445400 904D0021 */  lbu   $t5, 0x21($v0)
/* 00445404 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445408 00409825 */  move  $s3, $v0
/* 0044540C 01B47024 */  and   $t6, $t5, $s4
/* 00445410 35CF0008 */  ori   $t7, $t6, 8
/* 00445414 A04F0021 */  sb    $t7, 0x21($v0)
/* 00445418 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 0044541C 02202025 */  move  $a0, $s1
/* 00445420 0320F809 */  jalr  $t9
/* 00445424 00000000 */   nop   
/* 00445428 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044542C 24040074 */  li    $a0, 116
/* 00445430 02602825 */  move  $a1, $s3
/* 00445434 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00445438 00403025 */  move  $a2, $v0
/* 0044543C 0320F809 */  jalr  $t9
/* 00445440 00000000 */   nop   
/* 00445444 90590021 */  lbu   $t9, 0x21($v0)
/* 00445448 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044544C 00409825 */  move  $s3, $v0
/* 00445450 0334C024 */  and   $t8, $t9, $s4
/* 00445454 370D0008 */  ori   $t5, $t8, 8
/* 00445458 A04D0021 */  sb    $t5, 0x21($v0)
.L0044545C:
/* 0044545C 1000F7DA */  b     .L004433C8
/* 00445460 92630019 */   lbu   $v1, 0x19($s3)
.L00445464:
/* 00445464 8E710004 */  lw    $s1, 4($s3)
/* 00445468 AFA000F4 */  sw    $zero, 0xf4($sp)
/* 0044546C 8E2E0028 */  lw    $t6, 0x28($s1)
/* 00445470 29C10005 */  slti  $at, $t6, 5
/* 00445474 1020001B */  beqz  $at, .L004454E4
/* 00445478 00000000 */   nop   
/* 0044547C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00445480 8E640000 */  lw    $a0, ($s3)
/* 00445484 0320F809 */  jalr  $t9
/* 00445488 00000000 */   nop   
/* 0044548C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445490 8E660028 */  lw    $a2, 0x28($s3)
/* 00445494 00408025 */  move  $s0, $v0
/* 00445498 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0044549C 24040008 */  li    $a0, 8
/* 004454A0 00002825 */  move  $a1, $zero
/* 004454A4 0320F809 */  jalr  $t9
/* 004454A8 000630C0 */   sll   $a2, $a2, 3
/* 004454AC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004454B0 2404004E */  li    $a0, 78
/* 004454B4 02002825 */  move  $a1, $s0
/* 004454B8 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004454BC 00403025 */  move  $a2, $v0
/* 004454C0 0320F809 */  jalr  $t9
/* 004454C4 00000000 */   nop   
/* 004454C8 904F0021 */  lbu   $t7, 0x21($v0)
/* 004454CC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004454D0 00409025 */  move  $s2, $v0
/* 004454D4 01F4C824 */  and   $t9, $t7, $s4
/* 004454D8 37380008 */  ori   $t8, $t9, 8
/* 004454DC 10000060 */  b     .L00445660
/* 004454E0 A0580021 */   sb    $t8, 0x21($v0)
.L004454E4:
/* 004454E4 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004454E8 24040008 */  li    $a0, 8
/* 004454EC 00002825 */  move  $a1, $zero
/* 004454F0 0320F809 */  jalr  $t9
/* 004454F4 24060001 */   li    $a2, 1
/* 004454F8 8E700000 */  lw    $s0, ($s3)
/* 004454FC 24010049 */  li    $at, 73
/* 00445500 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445504 920D0020 */  lbu   $t5, 0x20($s0)
/* 00445508 00409025 */  move  $s2, $v0
/* 0044550C 02202025 */  move  $a0, $s1
/* 00445510 15A10012 */  bne   $t5, $at, .L0044555C
/* 00445514 00000000 */   nop   
/* 00445518 8E070030 */  lw    $a3, 0x30($s0)
/* 0044551C 8F9985E8 */  lw    $t9, %call16(set_rewrite)($gp)
/* 00445520 24060020 */  li    $a2, 32
/* 00445524 04E10003 */  bgez  $a3, .L00445534
/* 00445528 00072943 */   sra   $a1, $a3, 5
/* 0044552C 24E1001F */  addiu $at, $a3, 0x1f
/* 00445530 00012943 */  sra   $a1, $at, 5
.L00445534:
/* 00445534 0320F809 */  jalr  $t9
/* 00445538 00052940 */   sll   $a1, $a1, 5
/* 0044553C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445540 AE620004 */  sw    $v0, 4($s3)
/* 00445544 02202025 */  move  $a0, $s1
/* 00445548 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 0044554C 0320F809 */  jalr  $t9
/* 00445550 00000000 */   nop   
/* 00445554 10000042 */  b     .L00445660
/* 00445558 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L0044555C:
/* 0044555C 8F998630 */  lw    $t9, %call16(build_ucond0)($gp)
/* 00445560 8E250028 */  lw    $a1, 0x28($s1)
/* 00445564 02002025 */  move  $a0, $s0
/* 00445568 0320F809 */  jalr  $t9
/* 0044556C 000528C0 */   sll   $a1, $a1, 3
/* 00445570 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445574 AFA200F4 */  sw    $v0, 0xf4($sp)
/* 00445578 02002025 */  move  $a0, $s0
/* 0044557C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00445580 0320F809 */  jalr  $t9
/* 00445584 00000000 */   nop   
/* 00445588 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044558C 00408025 */  move  $s0, $v0
/* 00445590 24040008 */  li    $a0, 8
/* 00445594 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00445598 00002825 */  move  $a1, $zero
/* 0044559C 24060005 */  li    $a2, 5
/* 004455A0 0320F809 */  jalr  $t9
/* 004455A4 00000000 */   nop   
/* 004455A8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004455AC 24040074 */  li    $a0, 116
/* 004455B0 02002825 */  move  $a1, $s0
/* 004455B4 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004455B8 00403025 */  move  $a2, $v0
/* 004455BC 0320F809 */  jalr  $t9
/* 004455C0 00000000 */   nop   
/* 004455C4 904E0021 */  lbu   $t6, 0x21($v0)
/* 004455C8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004455CC 00408025 */  move  $s0, $v0
/* 004455D0 01D47824 */  and   $t7, $t6, $s4
/* 004455D4 35F90006 */  ori   $t9, $t7, 6
/* 004455D8 A0590021 */  sb    $t9, 0x21($v0)
/* 004455DC 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004455E0 24040008 */  li    $a0, 8
/* 004455E4 00002825 */  move  $a1, $zero
/* 004455E8 0320F809 */  jalr  $t9
/* 004455EC 24060004 */   li    $a2, 4
/* 004455F0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004455F4 2404005B */  li    $a0, 91
/* 004455F8 02002825 */  move  $a1, $s0
/* 004455FC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00445600 00403025 */  move  $a2, $v0
/* 00445604 0320F809 */  jalr  $t9
/* 00445608 00000000 */   nop   
/* 0044560C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445610 A4400022 */  sh    $zero, 0x22($v0)
/* 00445614 00408025 */  move  $s0, $v0
/* 00445618 8F9985EC */  lw    $t9, %call16(set_rewrite_indexed)($gp)
/* 0044561C 02202025 */  move  $a0, $s1
/* 00445620 00402825 */  move  $a1, $v0
/* 00445624 0320F809 */  jalr  $t9
/* 00445628 24060020 */   li    $a2, 32
/* 0044562C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445630 AE620004 */  sw    $v0, 4($s3)
/* 00445634 02002025 */  move  $a0, $s0
/* 00445638 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 0044563C 0320F809 */  jalr  $t9
/* 00445640 00000000 */   nop   
/* 00445644 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445648 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 0044564C A0200000 */  sb    $zero, ($at)
/* 00445650 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00445654 A0200000 */  sb    $zero, ($at)
/* 00445658 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 0044565C AC200000 */  sw    $zero, ($at)
.L00445660:
/* 00445660 8F998410 */  lw    $t9, %call16(swap_tree)($gp)
/* 00445664 02602025 */  move  $a0, $s3
/* 00445668 26650004 */  addiu $a1, $s3, 4
/* 0044566C 0320F809 */  jalr  $t9
/* 00445670 00000000 */   nop   
/* 00445674 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445678 8F98898C */  lw     $t8, %got(lsb_first)($gp)
/* 0044567C 93180000 */  lbu   $t8, ($t8)
/* 00445680 53000023 */  beql  $t8, $zero, .L00445710
/* 00445684 926D0019 */   lbu   $t5, 0x19($s3)
/* 00445688 8E6D0000 */  lw    $t5, ($s3)
/* 0044568C 24040008 */  li    $a0, 8
/* 00445690 8DA20028 */  lw    $v0, 0x28($t5)
/* 00445694 28410004 */  slti  $at, $v0, 4
/* 00445698 50200010 */  beql  $at, $zero, .L004456DC
/* 0044569C 926F0019 */   lbu   $t7, 0x19($s3)
/* 004456A0 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004456A4 000230C0 */  sll   $a2, $v0, 3
/* 004456A8 24C6FFFF */  addiu $a2, $a2, -1
/* 004456AC 0320F809 */  jalr  $t9
/* 004456B0 00002825 */   move  $a1, $zero
/* 004456B4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004456B8 24040004 */  li    $a0, 4
/* 004456BC 8E650004 */  lw    $a1, 4($s3)
/* 004456C0 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004456C4 00403025 */  move  $a2, $v0
/* 004456C8 0320F809 */  jalr  $t9
/* 004456CC 00000000 */   nop   
/* 004456D0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004456D4 AE620004 */  sw    $v0, 4($s3)
/* 004456D8 926F0019 */  lbu   $t7, 0x19($s3)
.L004456DC:
/* 004456DC 240E0074 */  li    $t6, 116
/* 004456E0 A26E0020 */  sb    $t6, 0x20($s3)
/* 004456E4 31F9FFFE */  andi  $t9, $t7, 0xfffe
/* 004456E8 A2790019 */  sb    $t9, 0x19($s3)
/* 004456EC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004456F0 24040004 */  li    $a0, 4
/* 004456F4 02602825 */  move  $a1, $s3
/* 004456F8 0320F809 */  jalr  $t9
/* 004456FC 02403025 */   move  $a2, $s2
/* 00445700 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445704 10000037 */  b     .L004457E4
/* 00445708 00409825 */   move  $s3, $v0
/* 0044570C 926D0019 */  lbu   $t5, 0x19($s3)
.L00445710:
/* 00445710 24180073 */  li    $t8, 115
/* 00445714 A2780020 */  sb    $t8, 0x20($s3)
/* 00445718 31AEFFFE */  andi  $t6, $t5, 0xfffe
/* 0044571C A26E0019 */  sb    $t6, 0x19($s3)
/* 00445720 924F0020 */  lbu   $t7, 0x20($s2)
/* 00445724 24010049 */  li    $at, 73
/* 00445728 15E10005 */  bne   $t7, $at, .L00445740
/* 0044572C 00000000 */   nop   
/* 00445730 8E590030 */  lw    $t9, 0x30($s2)
/* 00445734 24010001 */  li    $at, 1
/* 00445738 13210013 */  beq   $t9, $at, .L00445788
/* 0044573C 00000000 */   nop   
.L00445740:
/* 00445740 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 00445744 2404005E */  li    $a0, 94
/* 00445748 02402825 */  move  $a1, $s2
/* 0044574C 0320F809 */  jalr  $t9
/* 00445750 00000000 */   nop   
/* 00445754 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445758 24040004 */  li    $a0, 4
/* 0044575C 8E650000 */  lw    $a1, ($s3)
/* 00445760 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00445764 00403025 */  move  $a2, $v0
/* 00445768 0320F809 */  jalr  $t9
/* 0044576C 00000000 */   nop   
/* 00445770 AE620000 */  sw    $v0, ($s3)
/* 00445774 8C580004 */  lw    $t8, 4($v0)
/* 00445778 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044577C 8F0D0000 */  lw    $t5, ($t8)
/* 00445780 10000006 */  b     .L0044579C
/* 00445784 A5A00022 */   sh    $zero, 0x22($t5)
.L00445788:
/* 00445788 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 0044578C 02402025 */  move  $a0, $s2
/* 00445790 0320F809 */  jalr  $t9
/* 00445794 00000000 */   nop   
/* 00445798 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L0044579C:
/* 0044579C 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004457A0 24040006 */  li    $a0, 6
/* 004457A4 00002825 */  move  $a1, $zero
/* 004457A8 0320F809 */  jalr  $t9
/* 004457AC 00003025 */   move  $a2, $zero
/* 004457B0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004457B4 2404004E */  li    $a0, 78
/* 004457B8 02602825 */  move  $a1, $s3
/* 004457BC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004457C0 00403025 */  move  $a2, $v0
/* 004457C4 0320F809 */  jalr  $t9
/* 004457C8 00000000 */   nop   
/* 004457CC 904E0021 */  lbu   $t6, 0x21($v0)
/* 004457D0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004457D4 00409825 */  move  $s3, $v0
/* 004457D8 01D47824 */  and   $t7, $t6, $s4
/* 004457DC 35F90006 */  ori   $t9, $t7, 6
/* 004457E0 A0590021 */  sb    $t9, 0x21($v0)
.L004457E4:
/* 004457E4 8FB800F4 */  lw    $t8, 0xf4($sp)
/* 004457E8 13000003 */  beqz  $t8, .L004457F8
/* 004457EC 00000000 */   nop   
/* 004457F0 AF020004 */  sw    $v0, 4($t8)
/* 004457F4 8FB300F4 */  lw    $s3, 0xf4($sp)
.L004457F8:
/* 004457F8 1000F6F3 */  b     .L004433C8
/* 004457FC 92630019 */   lbu   $v1, 0x19($s3)
.L00445800:
/* 00445800 8F908B24 */  lw     $s0, %got(mst_node)($gp)
/* 00445804 1000027E */  b     .L00446200
/* 00445808 AE130000 */   sw    $s3, ($s0)
.L0044580C:
/* 0044580C 966D0014 */  lhu   $t5, 0x14($s3)
/* 00445810 240B0001 */  li    $t3, 1
/* 00445814 016D02B6 */  tne   $t3, $t5, 0xa
/* 00445818 926E0021 */  lbu   $t6, 0x21($s3)
/* 0044581C 2401000E */  li    $at, 14
/* 00445820 31CF001F */  andi  $t7, $t6, 0x1f
/* 00445824 55E1000C */  bnel  $t7, $at, .L00445858
/* 00445828 240A007B */   li    $t2, 123
/* 0044582C 8E790028 */  lw    $t9, 0x28($s3)
/* 00445830 2B210005 */  slti  $at, $t9, 5
/* 00445834 54200008 */  bnel  $at, $zero, .L00445858
/* 00445838 240A007B */   li    $t2, 123
/* 0044583C 8F9985DC */  lw    $t9, %call16(gen_set_str)($gp)
/* 00445840 02602025 */  move  $a0, $s3
/* 00445844 0320F809 */  jalr  $t9
/* 00445848 00000000 */   nop   
/* 0044584C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445850 92640020 */  lbu   $a0, 0x20($s3)
/* 00445854 240A007B */  li    $t2, 123
.L00445858:
/* 00445858 55440010 */  bnel  $t2, $a0, .L0044589C
/* 0044585C 8E620028 */   lw    $v0, 0x28($s3)
/* 00445860 92780021 */  lbu   $t8, 0x21($s3)
/* 00445864 24120002 */  li    $s2, 2
/* 00445868 00186E00 */  sll   $t5, $t8, 0x18
/* 0044586C 000D7742 */  srl   $t6, $t5, 0x1d
/* 00445870 164E0004 */  bne   $s2, $t6, .L00445884
/* 00445874 00000000 */   nop   
/* 00445878 8E6F0024 */  lw    $t7, 0x24($s3)
/* 0044587C 51E00007 */  beql  $t7, $zero, .L0044589C
/* 00445880 8E620028 */   lw    $v0, 0x28($s3)
.L00445884:
/* 00445884 8F998610 */  lw    $t9, %call16(check_reg)($gp)
/* 00445888 02602025 */  move  $a0, $s3
/* 0044588C 0320F809 */  jalr  $t9
/* 00445890 00000000 */   nop   
/* 00445894 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445898 8E620028 */  lw    $v0, 0x28($s3)
.L0044589C:
/* 0044589C 28410005 */  slti  $at, $v0, 5
/* 004458A0 10200020 */  beqz  $at, .L00445924
/* 004458A4 00000000 */   nop   
/* 004458A8 8E700000 */  lw    $s0, ($s3)
/* 004458AC 24010019 */  li    $at, 25
/* 004458B0 92190020 */  lbu   $t9, 0x20($s0)
/* 004458B4 1721001B */  bne   $t9, $at, .L00445924
/* 004458B8 00000000 */   nop   
/* 004458BC 8E180024 */  lw    $t8, 0x24($s0)
/* 004458C0 000268C0 */  sll   $t5, $v0, 3
/* 004458C4 170D0017 */  bne   $t8, $t5, .L00445924
/* 004458C8 00000000 */   nop   
/* 004458CC 960E0022 */  lhu   $t6, 0x22($s0)
/* 004458D0 31CF0002 */  andi  $t7, $t6, 2
/* 004458D4 15E00013 */  bnez  $t7, .L00445924
/* 004458D8 00000000 */   nop   
/* 004458DC 92790021 */  lbu   $t9, 0x21($s3)
/* 004458E0 24010003 */  li    $at, 3
/* 004458E4 0019C600 */  sll   $t8, $t9, 0x18
/* 004458E8 00186F42 */  srl   $t5, $t8, 0x1d
/* 004458EC 11A1000D */  beq   $t5, $at, .L00445924
/* 004458F0 00000000 */   nop   
/* 004458F4 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 004458F8 02008825 */  move  $s1, $s0
/* 004458FC 8E040000 */  lw    $a0, ($s0)
/* 00445900 0320F809 */  jalr  $t9
/* 00445904 00000000 */   nop   
/* 00445908 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0044590C AE620000 */  sw    $v0, ($s3)
/* 00445910 02202025 */  move  $a0, $s1
/* 00445914 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00445918 0320F809 */  jalr  $t9
/* 0044591C 00000000 */   nop   
/* 00445920 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00445924:
/* 00445924 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00445928 8E640000 */  lw    $a0, ($s3)
/* 0044592C 0320F809 */  jalr  $t9
/* 00445930 90910020 */   lbu   $s1, 0x20($a0)
/* 00445934 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445938 AE620000 */  sw    $v0, ($s3)
/* 0044593C 24010003 */  li    $at, 3
/* 00445940 8F8E89A4 */  lw     $t6, %got(source_language)($gp)
/* 00445944 240A007B */  li    $t2, 123
/* 00445948 8DCE0000 */  lw    $t6, ($t6)
/* 0044594C 55C10026 */  bnel  $t6, $at, .L004459E8
/* 00445950 92640020 */   lbu   $a0, 0x20($s3)
/* 00445954 8E6F0028 */  lw    $t7, 0x28($s3)
/* 00445958 29E10004 */  slti  $at, $t7, 4
/* 0044595C 10200021 */  beqz  $at, .L004459E4
/* 00445960 24010019 */   li    $at, 25
/* 00445964 52210020 */  beql  $s1, $at, .L004459E8
/* 00445968 92640020 */   lbu   $a0, 0x20($s3)
/* 0044596C 92790021 */  lbu   $t9, 0x21($s3)
/* 00445970 24010003 */  li    $at, 3
/* 00445974 0019C600 */  sll   $t8, $t9, 0x18
/* 00445978 00186F42 */  srl   $t5, $t8, 0x1d
/* 0044597C 55A1001A */  bnel  $t5, $at, .L004459E8
/* 00445980 92640020 */   lbu   $a0, 0x20($s3)
/* 00445984 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 00445988 24040019 */  li    $a0, 25
/* 0044598C 00402825 */  move  $a1, $v0
/* 00445990 0320F809 */  jalr  $t9
/* 00445994 00000000 */   nop   
/* 00445998 8E6E0028 */  lw    $t6, 0x28($s3)
/* 0044599C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004459A0 90430021 */  lbu   $v1, 0x21($v0)
/* 004459A4 000E78C0 */  sll   $t7, $t6, 3
/* 004459A8 AC4F0024 */  sw    $t7, 0x24($v0)
/* 004459AC 92780021 */  lbu   $t8, 0x21($s3)
/* 004459B0 00036EC0 */  sll   $t5, $v1, 0x1b
/* 004459B4 000D76C2 */  srl   $t6, $t5, 0x1b
/* 004459B8 030E7826 */  xor   $t7, $t8, $t6
/* 004459BC 31F9001F */  andi  $t9, $t7, 0x1f
/* 004459C0 03236826 */  xor   $t5, $t9, $v1
/* 004459C4 A04D0021 */  sb    $t5, 0x21($v0)
/* 004459C8 8F998628 */  lw    $t9, %call16(translate_cvtl)($gp)
/* 004459CC 00402025 */  move  $a0, $v0
/* 004459D0 0320F809 */  jalr  $t9
/* 004459D4 00000000 */   nop   
/* 004459D8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004459DC 240A007B */  li    $t2, 123
/* 004459E0 AE620000 */  sw    $v0, ($s3)
.L004459E4:
/* 004459E4 92640020 */  lbu   $a0, 0x20($s3)
.L004459E8:
/* 004459E8 15440205 */  bne   $t2, $a0, .L00446200
/* 004459EC 00000000 */   nop   
/* 004459F0 8F998620 */  lw    $t9, %call16(add_store)($gp)
/* 004459F4 02602025 */  move  $a0, $s3
/* 004459F8 0320F809 */  jalr  $t9
/* 004459FC 00000000 */   nop   
/* 00445A00 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445A04 8F898B28 */  lw     $t1, %got(expr_count)($gp)
/* 00445A08 91290000 */  lbu   $t1, ($t1)
/* 00445A0C 19200049 */  blez  $t1, .L00445B34
/* 00445A10 25290001 */   addiu $t1, $t1, 1
/* 00445A14 2522FFFF */  addiu $v0, $t1, -1
/* 00445A18 30420003 */  andi  $v0, $v0, 3
/* 00445A1C 10400016 */  beqz  $v0, .L00445A78
/* 00445A20 24070001 */   li    $a3, 1
/* 00445A24 8F8E8BAC */  lw     $t6, %got(exprs)($gp)
/* 00445A28 0007C080 */  sll   $t8, $a3, 2
/* 00445A2C 24480001 */  addiu $t0, $v0, 1
/* 00445A30 25CEFFFC */  addiu $t6, $t6, -4
/* 00445A34 030E2021 */  addu  $a0, $t8, $t6
/* 00445A38 24060036 */  li    $a2, 54
/* 00445A3C 2405003F */  li    $a1, 63
.L00445A40:
/* 00445A40 8C820000 */  lw    $v0, ($a0)
/* 00445A44 24E70001 */  addiu $a3, $a3, 1
/* 00445A48 10400007 */  beqz  $v0, .L00445A68
/* 00445A4C 00000000 */   nop   
/* 00445A50 90430020 */  lbu   $v1, 0x20($v0)
/* 00445A54 50C30004 */  beql  $a2, $v1, .L00445A68
/* 00445A58 AC800000 */   sw    $zero, ($a0)
/* 00445A5C 14A30002 */  bne   $a1, $v1, .L00445A68
/* 00445A60 00000000 */   nop   
/* 00445A64 AC800000 */  sw    $zero, ($a0)
.L00445A68:
/* 00445A68 1507FFF5 */  bne   $t0, $a3, .L00445A40
/* 00445A6C 24840004 */   addiu $a0, $a0, 4
/* 00445A70 10E90030 */  beq   $a3, $t1, .L00445B34
/* 00445A74 00000000 */   nop   
.L00445A78:
/* 00445A78 8F998BAC */  lw     $t9, %got(exprs)($gp)
/* 00445A7C 00077880 */  sll   $t7, $a3, 2
/* 00445A80 00096880 */  sll   $t5, $t1, 2
/* 00445A84 2739FFFC */  addiu $t9, $t9, -4
/* 00445A88 01F92021 */  addu  $a0, $t7, $t9
/* 00445A8C 01B94021 */  addu  $t0, $t5, $t9
/* 00445A90 2405003F */  li    $a1, 63
/* 00445A94 24060036 */  li    $a2, 54
/* 00445A98 8C820000 */  lw    $v0, ($a0)
.L00445A9C:
/* 00445A9C 50400008 */  beql  $v0, $zero, .L00445AC0
/* 00445AA0 8C820004 */   lw    $v0, 4($a0)
/* 00445AA4 90430020 */  lbu   $v1, 0x20($v0)
/* 00445AA8 50C30004 */  beql  $a2, $v1, .L00445ABC
/* 00445AAC AC800000 */   sw    $zero, ($a0)
/* 00445AB0 54A30003 */  bnel  $a1, $v1, .L00445AC0
/* 00445AB4 8C820004 */   lw    $v0, 4($a0)
/* 00445AB8 AC800000 */  sw    $zero, ($a0)
.L00445ABC:
/* 00445ABC 8C820004 */  lw    $v0, 4($a0)
.L00445AC0:
/* 00445AC0 50400008 */  beql  $v0, $zero, .L00445AE4
/* 00445AC4 8C820008 */   lw    $v0, 8($a0)
/* 00445AC8 90430020 */  lbu   $v1, 0x20($v0)
/* 00445ACC 50C30004 */  beql  $a2, $v1, .L00445AE0
/* 00445AD0 AC800004 */   sw    $zero, 4($a0)
/* 00445AD4 54A30003 */  bnel  $a1, $v1, .L00445AE4
/* 00445AD8 8C820008 */   lw    $v0, 8($a0)
/* 00445ADC AC800004 */  sw    $zero, 4($a0)
.L00445AE0:
/* 00445AE0 8C820008 */  lw    $v0, 8($a0)
.L00445AE4:
/* 00445AE4 50400008 */  beql  $v0, $zero, .L00445B08
/* 00445AE8 8C82000C */   lw    $v0, 0xc($a0)
/* 00445AEC 90430020 */  lbu   $v1, 0x20($v0)
/* 00445AF0 50C30004 */  beql  $a2, $v1, .L00445B04
/* 00445AF4 AC800008 */   sw    $zero, 8($a0)
/* 00445AF8 54A30003 */  bnel  $a1, $v1, .L00445B08
/* 00445AFC 8C82000C */   lw    $v0, 0xc($a0)
/* 00445B00 AC800008 */  sw    $zero, 8($a0)
.L00445B04:
/* 00445B04 8C82000C */  lw    $v0, 0xc($a0)
.L00445B08:
/* 00445B08 50400008 */  beql  $v0, $zero, .L00445B2C
/* 00445B0C 24840010 */   addiu $a0, $a0, 0x10
/* 00445B10 90430020 */  lbu   $v1, 0x20($v0)
/* 00445B14 50C30004 */  beql  $a2, $v1, .L00445B28
/* 00445B18 AC80000C */   sw    $zero, 0xc($a0)
/* 00445B1C 54A30003 */  bnel  $a1, $v1, .L00445B2C
/* 00445B20 24840010 */   addiu $a0, $a0, 0x10
/* 00445B24 AC80000C */  sw    $zero, 0xc($a0)
.L00445B28:
/* 00445B28 24840010 */  addiu $a0, $a0, 0x10
.L00445B2C:
/* 00445B2C 5488FFDB */  bnel  $a0, $t0, .L00445A9C
/* 00445B30 8C820000 */   lw    $v0, ($a0)
.L00445B34:
/* 00445B34 100001B2 */  b     .L00446200
/* 00445B38 92640020 */   lbu   $a0, 0x20($s3)
.L00445B3C:
/* 00445B3C 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00445B40 8E640000 */  lw    $a0, ($s3)
/* 00445B44 0320F809 */  jalr  $t9
/* 00445B48 00000000 */   nop   
/* 00445B4C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445B50 AE620000 */  sw    $v0, ($s3)
/* 00445B54 00408825 */  move  $s1, $v0
/* 00445B58 8F988A50 */  lw     $t8, %got(nooffsetopt)($gp)
/* 00445B5C 93180000 */  lbu   $t8, ($t8)
/* 00445B60 57000022 */  bnel  $t8, $zero, .L00445BEC
/* 00445B64 8E6E0000 */   lw    $t6, ($s3)
/* 00445B68 904E0020 */  lbu   $t6, 0x20($v0)
/* 00445B6C 240B0001 */  li    $t3, 1
/* 00445B70 556E001E */  bnel  $t3, $t6, .L00445BEC
/* 00445B74 8E6E0000 */   lw    $t6, ($s3)
/* 00445B78 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00445B7C 8C440004 */  lw    $a0, 4($v0)
/* 00445B80 0320F809 */  jalr  $t9
/* 00445B84 00000000 */   nop   
/* 00445B88 10400017 */  beqz  $v0, .L00445BE8
/* 00445B8C 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00445B90 8F998634 */  lw    $t9, %call16(check_loads_exprs)($gp)
/* 00445B94 8E240000 */  lw    $a0, ($s1)
/* 00445B98 0320F809 */  jalr  $t9
/* 00445B9C 00000000 */   nop   
/* 00445BA0 10400011 */  beqz  $v0, .L00445BE8
/* 00445BA4 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00445BA8 8E2D0004 */  lw    $t5, 4($s1)
/* 00445BAC 8E6F002C */  lw    $t7, 0x2c($s3)
/* 00445BB0 8DB90030 */  lw    $t9, 0x30($t5)
/* 00445BB4 01F9C021 */  addu  $t8, $t7, $t9
/* 00445BB8 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00445BBC AE78002C */  sw    $t8, 0x2c($s3)
/* 00445BC0 8E240000 */  lw    $a0, ($s1)
/* 00445BC4 0320F809 */  jalr  $t9
/* 00445BC8 00000000 */   nop   
/* 00445BCC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445BD0 AE620000 */  sw    $v0, ($s3)
/* 00445BD4 02202025 */  move  $a0, $s1
/* 00445BD8 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00445BDC 0320F809 */  jalr  $t9
/* 00445BE0 00000000 */   nop   
/* 00445BE4 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00445BE8:
/* 00445BE8 8E6E0000 */  lw    $t6, ($s3)
.L00445BEC:
/* 00445BEC 24060036 */  li    $a2, 54
/* 00445BF0 91CD0016 */  lbu   $t5, 0x16($t6)
/* 00445BF4 55A00003 */  bnel  $t5, $zero, .L00445C04
/* 00445BF8 92640020 */   lbu   $a0, 0x20($s3)
/* 00445BFC 240D0001 */  li    $t5, 1
/* 00445C00 92640020 */  lbu   $a0, 0x20($s3)
.L00445C04:
/* 00445C04 2401003D */  li    $at, 61
/* 00445C08 A26D0016 */  sb    $t5, 0x16($s3)
/* 00445C0C 14810007 */  bne   $a0, $at, .L00445C2C
/* 00445C10 00000000 */   nop   
/* 00445C14 8F998618 */  lw    $t9, %call16(load_cse)($gp)
/* 00445C18 02602025 */  move  $a0, $s3
/* 00445C1C 0320F809 */  jalr  $t9
/* 00445C20 00000000 */   nop   
/* 00445C24 100001C8 */  b     .L00446348
/* 00445C28 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00445C2C:
/* 00445C2C 14C40174 */  bne   $a2, $a0, .L00446200
/* 00445C30 00000000 */   nop   
/* 00445C34 8F9985FC */  lw    $t9, %call16(cse)($gp)
/* 00445C38 02602025 */  move  $a0, $s3
/* 00445C3C 0320F809 */  jalr  $t9
/* 00445C40 00000000 */   nop   
/* 00445C44 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445C48 00409825 */  move  $s3, $v0
/* 00445C4C 1000016C */  b     .L00446200
/* 00445C50 90440020 */   lbu   $a0, 0x20($v0)
.L00445C54:
/* 00445C54 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00445C58 8E640000 */  lw    $a0, ($s3)
/* 00445C5C 0320F809 */  jalr  $t9
/* 00445C60 00000000 */   nop   
/* 00445C64 AE620000 */  sw    $v0, ($s3)
/* 00445C68 904F0016 */  lbu   $t7, 0x16($v0)
/* 00445C6C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445C70 15E00002 */  bnez  $t7, .L00445C7C
/* 00445C74 00000000 */   nop   
/* 00445C78 240F0001 */  li    $t7, 1
.L00445C7C:
/* 00445C7C 8F9985FC */  lw    $t9, %call16(cse)($gp)
/* 00445C80 A26F0016 */  sb    $t7, 0x16($s3)
/* 00445C84 02602025 */  move  $a0, $s3
/* 00445C88 0320F809 */  jalr  $t9
/* 00445C8C 00000000 */   nop   
/* 00445C90 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445C94 00409825 */  move  $s3, $v0
/* 00445C98 10000159 */  b     .L00446200
/* 00445C9C 90440020 */   lbu   $a0, 0x20($v0)
.L00445CA0:
/* 00445CA0 96790014 */  lhu   $t9, 0x14($s3)
/* 00445CA4 240B0001 */  li    $t3, 1
/* 00445CA8 017902B6 */  tne   $t3, $t9, 0xa
/* 00445CAC 92780021 */  lbu   $t8, 0x21($s3)
/* 00445CB0 2401000E */  li    $at, 14
/* 00445CB4 330E001F */  andi  $t6, $t8, 0x1f
/* 00445CB8 55C1000B */  bnel  $t6, $at, .L00445CE8
/* 00445CBC 8E620028 */   lw    $v0, 0x28($s3)
/* 00445CC0 8E6D0028 */  lw    $t5, 0x28($s3)
/* 00445CC4 29A10005 */  slti  $at, $t5, 5
/* 00445CC8 54200007 */  bnel  $at, $zero, .L00445CE8
/* 00445CCC 8E620028 */   lw    $v0, 0x28($s3)
/* 00445CD0 8F9985E0 */  lw    $t9, %call16(gen_set_istr)($gp)
/* 00445CD4 02602025 */  move  $a0, $s3
/* 00445CD8 0320F809 */  jalr  $t9
/* 00445CDC 00000000 */   nop   
/* 00445CE0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445CE4 8E620028 */  lw    $v0, 0x28($s3)
.L00445CE8:
/* 00445CE8 28410005 */  slti  $at, $v0, 5
/* 00445CEC 10200016 */  beqz  $at, .L00445D48
/* 00445CF0 00000000 */   nop   
/* 00445CF4 8E660004 */  lw    $a2, 4($s3)
/* 00445CF8 24010019 */  li    $at, 25
/* 00445CFC 90CF0020 */  lbu   $t7, 0x20($a2)
/* 00445D00 15E10011 */  bne   $t7, $at, .L00445D48
/* 00445D04 00000000 */   nop   
/* 00445D08 8CD90024 */  lw    $t9, 0x24($a2)
/* 00445D0C 0002C0C0 */  sll   $t8, $v0, 3
/* 00445D10 1738000D */  bne   $t9, $t8, .L00445D48
/* 00445D14 00000000 */   nop   
/* 00445D18 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00445D1C 00C08825 */  move  $s1, $a2
/* 00445D20 8CC40000 */  lw    $a0, ($a2)
/* 00445D24 0320F809 */  jalr  $t9
/* 00445D28 00000000 */   nop   
/* 00445D2C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445D30 AE620004 */  sw    $v0, 4($s3)
/* 00445D34 02202025 */  move  $a0, $s1
/* 00445D38 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00445D3C 0320F809 */  jalr  $t9
/* 00445D40 00000000 */   nop   
/* 00445D44 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00445D48:
/* 00445D48 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00445D4C 8E640000 */  lw    $a0, ($s3)
/* 00445D50 0320F809 */  jalr  $t9
/* 00445D54 00000000 */   nop   
/* 00445D58 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445D5C AE620000 */  sw    $v0, ($s3)
/* 00445D60 8E640004 */  lw    $a0, 4($s3)
/* 00445D64 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00445D68 0320F809 */  jalr  $t9
/* 00445D6C 00000000 */   nop   
/* 00445D70 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445D74 AE620004 */  sw    $v0, 4($s3)
/* 00445D78 240B0001 */  li    $t3, 1
/* 00445D7C 8F8E8A50 */  lw     $t6, %got(nooffsetopt)($gp)
/* 00445D80 8E710000 */  lw    $s1, ($s3)
/* 00445D84 91CE0000 */  lbu   $t6, ($t6)
/* 00445D88 55C00021 */  bnel  $t6, $zero, .L00445E10
/* 00445D8C 92640020 */   lbu   $a0, 0x20($s3)
/* 00445D90 922D0020 */  lbu   $t5, 0x20($s1)
/* 00445D94 556D001E */  bnel  $t3, $t5, .L00445E10
/* 00445D98 92640020 */   lbu   $a0, 0x20($s3)
/* 00445D9C 8E2F0004 */  lw    $t7, 4($s1)
/* 00445DA0 24010049 */  li    $at, 73
/* 00445DA4 91F90020 */  lbu   $t9, 0x20($t7)
/* 00445DA8 57210019 */  bnel  $t9, $at, .L00445E10
/* 00445DAC 92640020 */   lbu   $a0, 0x20($s3)
/* 00445DB0 8F998634 */  lw    $t9, %call16(check_loads_exprs)($gp)
/* 00445DB4 8E240000 */  lw    $a0, ($s1)
/* 00445DB8 0320F809 */  jalr  $t9
/* 00445DBC 00000000 */   nop   
/* 00445DC0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445DC4 10400011 */  beqz  $v0, .L00445E0C
/* 00445DC8 240B0001 */   li    $t3, 1
/* 00445DCC 8E2E0004 */  lw    $t6, 4($s1)
/* 00445DD0 8E78002C */  lw    $t8, 0x2c($s3)
/* 00445DD4 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00445DD8 8DCD0030 */  lw    $t5, 0x30($t6)
/* 00445DDC 030D7821 */  addu  $t7, $t8, $t5
/* 00445DE0 AE6F002C */  sw    $t7, 0x2c($s3)
/* 00445DE4 0320F809 */  jalr  $t9
/* 00445DE8 8E240000 */   lw    $a0, ($s1)
/* 00445DEC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445DF0 AE620000 */  sw    $v0, ($s3)
/* 00445DF4 02202025 */  move  $a0, $s1
/* 00445DF8 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00445DFC 0320F809 */  jalr  $t9
/* 00445E00 00000000 */   nop   
/* 00445E04 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445E08 240B0001 */  li    $t3, 1
.L00445E0C:
/* 00445E0C 92640020 */  lbu   $a0, 0x20($s3)
.L00445E10:
/* 00445E10 2401003E */  li    $at, 62
/* 00445E14 14810008 */  bne   $a0, $at, .L00445E38
/* 00445E18 00000000 */   nop   
/* 00445E1C 8F998620 */  lw    $t9, %call16(add_store)($gp)
/* 00445E20 02602025 */  move  $a0, $s3
/* 00445E24 0320F809 */  jalr  $t9
/* 00445E28 00000000 */   nop   
/* 00445E2C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445E30 100000F3 */  b     .L00446200
/* 00445E34 92640020 */   lbu   $a0, 0x20($s3)
.L00445E38:
/* 00445E38 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00445E3C A0200000 */  sb    $zero, ($at)
/* 00445E40 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 00445E44 A02B0000 */  sb    $t3, ($at)
/* 00445E48 8F818BAC */  lw     $at, %got(exprs)($gp)
/* 00445E4C AC330000 */  sw    $s3, ($at)
/* 00445E50 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 00445E54 100000EA */  b     .L00446200
/* 00445E58 AC200000 */   sw    $zero, ($at)
.L00445E5C:
/* 00445E5C 96790014 */  lhu   $t9, 0x14($s3)
/* 00445E60 240B0001 */  li    $t3, 1
/* 00445E64 017902B6 */  tne   $t3, $t9, 0xa
/* 00445E68 926E0021 */  lbu   $t6, 0x21($s3)
/* 00445E6C 240D000E */  li    $t5, 14
/* 00445E70 31D8001F */  andi  $t8, $t6, 0x1f
/* 00445E74 030D02B4 */  teq   $t8, $t5, 0xa
/* 00445E78 8E620028 */  lw    $v0, 0x28($s3)
/* 00445E7C 28410005 */  slti  $at, $v0, 5
/* 00445E80 10200016 */  beqz  $at, .L00445EDC
/* 00445E84 00000000 */   nop   
/* 00445E88 8E660004 */  lw    $a2, 4($s3)
/* 00445E8C 24010019 */  li    $at, 25
/* 00445E90 90CF0020 */  lbu   $t7, 0x20($a2)
/* 00445E94 15E10011 */  bne   $t7, $at, .L00445EDC
/* 00445E98 00000000 */   nop   
/* 00445E9C 8CD90024 */  lw    $t9, 0x24($a2)
/* 00445EA0 000270C0 */  sll   $t6, $v0, 3
/* 00445EA4 172E000D */  bne   $t9, $t6, .L00445EDC
/* 00445EA8 00000000 */   nop   
/* 00445EAC 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00445EB0 00C08825 */  move  $s1, $a2
/* 00445EB4 8CC40000 */  lw    $a0, ($a2)
/* 00445EB8 0320F809 */  jalr  $t9
/* 00445EBC 00000000 */   nop   
/* 00445EC0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445EC4 AE620004 */  sw    $v0, 4($s3)
/* 00445EC8 02202025 */  move  $a0, $s1
/* 00445ECC 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00445ED0 0320F809 */  jalr  $t9
/* 00445ED4 00000000 */   nop   
/* 00445ED8 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00445EDC:
/* 00445EDC 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00445EE0 8E640000 */  lw    $a0, ($s3)
/* 00445EE4 0320F809 */  jalr  $t9
/* 00445EE8 00000000 */   nop   
/* 00445EEC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445EF0 AE620000 */  sw    $v0, ($s3)
/* 00445EF4 8E640004 */  lw    $a0, 4($s3)
/* 00445EF8 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00445EFC 0320F809 */  jalr  $t9
/* 00445F00 00000000 */   nop   
/* 00445F04 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445F08 AE620004 */  sw    $v0, 4($s3)
/* 00445F0C 240B0001 */  li    $t3, 1
/* 00445F10 8F988A3C */  lw     $t8, %got(ignore_vreg)($gp)
/* 00445F14 93180000 */  lbu   $t8, ($t8)
/* 00445F18 13000026 */  beqz  $t8, .L00445FB4
/* 00445F1C 00000000 */   nop   
/* 00445F20 8E700000 */  lw    $s0, ($s3)
/* 00445F24 3C016000 */  lui   $at, 0x6000
/* 00445F28 920D0021 */  lbu   $t5, 0x21($s0)
/* 00445F2C 000D7E00 */  sll   $t7, $t5, 0x18
/* 00445F30 000FCF42 */  srl   $t9, $t7, 0x1d
/* 00445F34 2F2E0020 */  sltiu $t6, $t9, 0x20
/* 00445F38 000EC023 */  negu  $t8, $t6
/* 00445F3C 03016824 */  and   $t5, $t8, $at
/* 00445F40 032D7804 */  sllv  $t7, $t5, $t9
/* 00445F44 05E1001B */  bgez  $t7, .L00445FB4
/* 00445F48 00000000 */   nop   
/* 00445F4C 920E0020 */  lbu   $t6, 0x20($s0)
/* 00445F50 25D8FFE0 */  addiu $t8, $t6, -0x20
/* 00445F54 2F0D0060 */  sltiu $t5, $t8, 0x60
/* 00445F58 11A00009 */  beqz  $t5, .L00445F80
/* 00445F5C 00000000 */   nop   
/* 00445F60 8F8E8038 */  lw    $t6, %got(D_10016944)($gp)
/* 00445F64 0018C943 */  sra   $t9, $t8, 5
/* 00445F68 00197880 */  sll   $t7, $t9, 2
/* 00445F6C 25CE6944 */  addiu $t6, %lo(D_10016944) # addiu $t6, $t6, 0x6944
/* 00445F70 01CFC821 */  addu  $t9, $t6, $t7
/* 00445F74 8F2E0000 */  lw    $t6, ($t9)
/* 00445F78 030E7804 */  sllv  $t7, $t6, $t8
/* 00445F7C 29ED0000 */  slti  $t5, $t7, 0
.L00445F80:
/* 00445F80 11A0000E */  beqz  $t5, .L00445FBC
/* 00445F84 00000000 */   nop   
/* 00445F88 8F998608 */  lw    $t9, %call16(check_vreg)($gp)
/* 00445F8C 02002025 */  move  $a0, $s0
/* 00445F90 01602825 */  move  $a1, $t3
/* 00445F94 0320F809 */  jalr  $t9
/* 00445F98 00000000 */   nop   
/* 00445F9C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445FA0 14400006 */  bnez  $v0, .L00445FBC
/* 00445FA4 240B0001 */   li    $t3, 1
/* 00445FA8 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00445FAC 10000003 */  b     .L00445FBC
/* 00445FB0 A0200000 */   sb    $zero, ($at)
.L00445FB4:
/* 00445FB4 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00445FB8 A0200000 */  sb    $zero, ($at)
.L00445FBC:
/* 00445FBC 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 00445FC0 A02B0000 */  sb    $t3, ($at)
/* 00445FC4 8F818BAC */  lw     $at, %got(exprs)($gp)
/* 00445FC8 AC330000 */  sw    $s3, ($at)
/* 00445FCC 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 00445FD0 AC200000 */  sw    $zero, ($at)
/* 00445FD4 1000008A */  b     .L00446200
/* 00445FD8 92640020 */   lbu   $a0, 0x20($s3)
.L00445FDC:
/* 00445FDC 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00445FE0 8E640000 */  lw    $a0, ($s3)
/* 00445FE4 0320F809 */  jalr  $t9
/* 00445FE8 00000000 */   nop   
/* 00445FEC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00445FF0 AE620000 */  sw    $v0, ($s3)
/* 00445FF4 10000082 */  b     .L00446200
/* 00445FF8 92640020 */   lbu   $a0, 0x20($s3)
.L00445FFC:
/* 00445FFC 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00446000 8E640000 */  lw    $a0, ($s3)
/* 00446004 0320F809 */  jalr  $t9
/* 00446008 00000000 */   nop   
/* 0044600C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00446010 AE620000 */  sw    $v0, ($s3)
/* 00446014 1000007A */  b     .L00446200
/* 00446018 92640020 */   lbu   $a0, 0x20($s3)
.L0044601C:
/* 0044601C 8F8E8B34 */  lw     $t6, %got(leaf)($gp)
/* 00446020 24140052 */  li    $s4, 82
/* 00446024 240D0074 */  li    $t5, 116
/* 00446028 91CE0000 */  lbu   $t6, ($t6)
/* 0044602C 11C00074 */  beqz  $t6, .L00446200
/* 00446030 00000000 */   nop   
/* 00446034 92780021 */  lbu   $t8, 0x21($s3)
/* 00446038 A2740020 */  sb    $s4, 0x20($s3)
/* 0044603C AE6D002C */  sw    $t5, 0x2c($s3)
/* 00446040 330FFF1F */  andi  $t7, $t8, 0xff1f
/* 00446044 35F90060 */  ori   $t9, $t7, 0x60
/* 00446048 A2790021 */  sb    $t9, 0x21($s3)
/* 0044604C A2600016 */  sb    $zero, 0x16($s3)
/* 00446050 1000006B */  b     .L00446200
/* 00446054 328400FF */   andi  $a0, $s4, 0xff
.L00446058:
/* 00446058 926E0021 */  lbu   $t6, 0x21($s3)
/* 0044605C 24140052 */  li    $s4, 82
/* 00446060 24190074 */  li    $t9, 116
/* 00446064 31D8FF1F */  andi  $t8, $t6, 0xff1f
/* 00446068 370F0060 */  ori   $t7, $t8, 0x60
/* 0044606C A2740020 */  sb    $s4, 0x20($s3)
/* 00446070 A26F0021 */  sb    $t7, 0x21($s3)
/* 00446074 AE79002C */  sw    $t9, 0x2c($s3)
/* 00446078 328400FF */  andi  $a0, $s4, 0xff
/* 0044607C 10000060 */  b     .L00446200
/* 00446080 A2600016 */   sb    $zero, 0x16($s3)
.L00446084:
/* 00446084 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00446088 8E640000 */  lw    $a0, ($s3)
/* 0044608C 0320F809 */  jalr  $t9
/* 00446090 00000000 */   nop   
/* 00446094 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00446098 AE620000 */  sw    $v0, ($s3)
/* 0044609C 240A007B */  li    $t2, 123
/* 004460A0 8F8D8B34 */  lw     $t5, %got(leaf)($gp)
/* 004460A4 24190074 */  li    $t9, 116
/* 004460A8 91AD0000 */  lbu   $t5, ($t5)
/* 004460AC 11A00007 */  beqz  $t5, .L004460CC
/* 004460B0 00000000 */   nop   
/* 004460B4 926E0021 */  lbu   $t6, 0x21($s3)
/* 004460B8 A26A0020 */  sb    $t2, 0x20($s3)
/* 004460BC AE79002C */  sw    $t9, 0x2c($s3)
/* 004460C0 31D8FF1F */  andi  $t8, $t6, 0xff1f
/* 004460C4 370F0060 */  ori   $t7, $t8, 0x60
/* 004460C8 A26F0021 */  sb    $t7, 0x21($s3)
.L004460CC:
/* 004460CC 1000004C */  b     .L00446200
/* 004460D0 92640020 */   lbu   $a0, 0x20($s3)
.L004460D4:
/* 004460D4 8F998488 */  lw    $t9, %call16(map_pars_to_regs)($gp)
/* 004460D8 8F908B24 */  lw     $s0, %got(mst_node)($gp)
/* 004460DC 2405FFFF */  li    $a1, -1
/* 004460E0 0320F809 */  jalr  $t9
/* 004460E4 8E040000 */   lw    $a0, ($s0)
/* 004460E8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004460EC 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 004460F0 A0200000 */  sb    $zero, ($at)
/* 004460F4 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 004460F8 A0200000 */  sb    $zero, ($at)
/* 004460FC 8F818B30 */  lw     $at, %got(bb_size)($gp)
/* 00446100 AC200000 */  sw    $zero, ($at)
/* 00446104 1000003E */  b     .L00446200
/* 00446108 92640020 */   lbu   $a0, 0x20($s3)
.L0044610C:
/* 0044610C 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 00446110 8E640000 */  lw    $a0, ($s3)
/* 00446114 0320F809 */  jalr  $t9
/* 00446118 00000000 */   nop   
/* 0044611C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00446120 AE620000 */  sw    $v0, ($s3)
/* 00446124 8E640004 */  lw    $a0, 4($s3)
/* 00446128 8F9985F4 */  lw    $t9, %call16(translate)($gp)
/* 0044612C 0320F809 */  jalr  $t9
/* 00446130 00000000 */   nop   
/* 00446134 8E6D0000 */  lw    $t5, ($s3)
/* 00446138 AE620004 */  sw    $v0, 4($s3)
/* 0044613C 904E0016 */  lbu   $t6, 0x16($v0)
/* 00446140 91A30016 */  lbu   $v1, 0x16($t5)
/* 00446144 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00446148 15C30003 */  bne   $t6, $v1, .L00446158
/* 0044614C 24780001 */   addiu $t8, $v1, 1
/* 00446150 10000008 */  b     .L00446174
/* 00446154 A2780016 */   sb    $t8, 0x16($s3)
.L00446158:
/* 00446158 8E6F0004 */  lw    $t7, 4($s3)
/* 0044615C 91F90016 */  lbu   $t9, 0x16($t7)
/* 00446160 0323082B */  sltu  $at, $t9, $v1
/* 00446164 50200003 */  beql  $at, $zero, .L00446174
/* 00446168 A2790016 */   sb    $t9, 0x16($s3)
/* 0044616C 0060C825 */  move  $t9, $v1
/* 00446170 A2790016 */  sb    $t9, 0x16($s3)
.L00446174:
/* 00446174 10000022 */  b     .L00446200
/* 00446178 92640020 */   lbu   $a0, 0x20($s3)
.L0044617C:
/* 0044617C 2C410011 */  sltiu $at, $v0, 0x11
/* 00446180 1020000B */  beqz  $at, .L004461B0
/* 00446184 244EFFE9 */   addiu $t6, $v0, -0x17
/* 00446188 2C410011 */  sltiu $at, $v0, 0x11
/* 0044618C 1020001C */  beqz  $at, .L00446200
/* 00446190 00000000 */   nop   
/* 00446194 8F818038 */  lw    $at, %got(jtbl_1000D864)($gp)
/* 00446198 00026880 */  sll   $t5, $v0, 2
/* 0044619C 002D0821 */  addu  $at, $at, $t5
/* 004461A0 8C2DD864 */  lw    $t5, %lo(jtbl_1000D864)($at)
/* 004461A4 01BC6821 */  addu  $t5, $t5, $gp
/* 004461A8 01A00008 */  jr    $t5
/* 004461AC 00000000 */   nop   
.L004461B0:
/* 004461B0 2DC10069 */  sltiu $at, $t6, 0x69
/* 004461B4 10200012 */  beqz  $at, .L00446200
/* 004461B8 00000000 */   nop   
/* 004461BC 8F818038 */  lw    $at, %got(jtbl_1000D8A8)($gp)
/* 004461C0 000E7080 */  sll   $t6, $t6, 2
/* 004461C4 002E0821 */  addu  $at, $at, $t6
/* 004461C8 8C2ED8A8 */  lw    $t6, %lo(jtbl_1000D8A8)($at)
/* 004461CC 01DC7021 */  addu  $t6, $t6, $gp
/* 004461D0 01C00008 */  jr    $t6
/* 004461D4 00000000 */   nop   
.L004461D8:
/* 004461D8 2F010008 */  sltiu $at, $t8, 8
/* 004461DC 10200008 */  beqz  $at, .L00446200
/* 004461E0 00000000 */   nop   
/* 004461E4 8F818038 */  lw    $at, %got(jtbl_1000DA4C)($gp)
/* 004461E8 0018C080 */  sll   $t8, $t8, 2
/* 004461EC 00380821 */  addu  $at, $at, $t8
/* 004461F0 8C38DA4C */  lw    $t8, %lo(jtbl_1000DA4C)($at)
/* 004461F4 031CC021 */  addu  $t8, $t8, $gp
/* 004461F8 03000008 */  jr    $t8
/* 004461FC 00000000 */   nop   
.L00446200:
/* 00446200 8F8F8914 */  lw     $t7, %got(expression_opcs)($gp)
/* 00446204 008FC821 */  addu  $t9, $a0, $t7
/* 00446208 932D0000 */  lbu   $t5, ($t9)
/* 0044620C 51A0004E */  beql  $t5, $zero, .L00446348
/* 00446210 02601025 */   move  $v0, $s3
/* 00446214 8E700000 */  lw    $s0, ($s3)
/* 00446218 52000032 */  beql  $s0, $zero, .L004462E4
/* 0044621C 8E660004 */   lw    $a2, 4($s3)
/* 00446220 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00446224 02002025 */  move  $a0, $s0
/* 00446228 0320F809 */  jalr  $t9
/* 0044622C 00000000 */   nop   
/* 00446230 1040002B */  beqz  $v0, .L004462E0
/* 00446234 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00446238 8E660004 */  lw    $a2, 4($s3)
/* 0044623C 10C00007 */  beqz  $a2, .L0044625C
/* 00446240 00000000 */   nop   
/* 00446244 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00446248 00C02025 */  move  $a0, $a2
/* 0044624C 0320F809 */  jalr  $t9
/* 00446250 00000000 */   nop   
/* 00446254 10400007 */  beqz  $v0, .L00446274
/* 00446258 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L0044625C:
/* 0044625C 8F9983FC */  lw    $t9, %call16(fold)($gp)
/* 00446260 02602025 */  move  $a0, $s3
/* 00446264 0320F809 */  jalr  $t9
/* 00446268 00000000 */   nop   
/* 0044626C 10000036 */  b     .L00446348
/* 00446270 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00446274:
/* 00446274 8F90891C */  lw     $s0, %got(reverse)($gp)
/* 00446278 926E0020 */  lbu   $t6, 0x20($s3)
/* 0044627C 24010060 */  li    $at, 96
/* 00446280 AFB30108 */  sw    $s3, 0x108($sp)
/* 00446284 020EC021 */  addu  $t8, $s0, $t6
/* 00446288 930F0000 */  lbu   $t7, ($t8)
/* 0044628C 11E1000C */  beq   $t7, $at, .L004462C0
/* 00446290 00000000 */   nop   
/* 00446294 8F998410 */  lw    $t9, %call16(swap_tree)($gp)
/* 00446298 02602025 */  move  $a0, $s3
/* 0044629C 26650004 */  addiu $a1, $s3, 4
/* 004462A0 0320F809 */  jalr  $t9
/* 004462A4 00000000 */   nop   
/* 004462A8 92790020 */  lbu   $t9, 0x20($s3)
/* 004462AC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004462B0 02196821 */  addu  $t5, $s0, $t9
/* 004462B4 91AE0000 */  lbu   $t6, ($t5)
/* 004462B8 AFB30108 */  sw    $s3, 0x108($sp)
/* 004462BC A26E0020 */  sb    $t6, 0x20($s3)
.L004462C0:
/* 004462C0 8F998400 */  lw    $t9, %call16(fold1)($gp)
/* 004462C4 27A40108 */  addiu $a0, $sp, 0x108
/* 004462C8 0320F809 */  jalr  $t9
/* 004462CC 00000000 */   nop   
/* 004462D0 10400016 */  beqz  $v0, .L0044632C
/* 004462D4 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 004462D8 1000001B */  b     .L00446348
/* 004462DC 8FA20108 */   lw    $v0, 0x108($sp)
.L004462E0:
/* 004462E0 8E660004 */  lw    $a2, 4($s3)
.L004462E4:
/* 004462E4 AFB30108 */  sw    $s3, 0x108($sp)
/* 004462E8 10C00010 */  beqz  $a2, .L0044632C
/* 004462EC 00000000 */   nop   
/* 004462F0 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 004462F4 00C02025 */  move  $a0, $a2
/* 004462F8 0320F809 */  jalr  $t9
/* 004462FC 00000000 */   nop   
/* 00446300 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00446304 10400009 */  beqz  $v0, .L0044632C
/* 00446308 AFB30108 */   sw    $s3, 0x108($sp)
/* 0044630C 8F998400 */  lw    $t9, %call16(fold1)($gp)
/* 00446310 27A40108 */  addiu $a0, $sp, 0x108
/* 00446314 0320F809 */  jalr  $t9
/* 00446318 00000000 */   nop   
/* 0044631C 10400003 */  beqz  $v0, .L0044632C
/* 00446320 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00446324 10000008 */  b     .L00446348
/* 00446328 8FA20108 */   lw    $v0, 0x108($sp)
.L0044632C:
/* 0044632C 8F9985FC */  lw    $t9, %call16(cse)($gp)
/* 00446330 8FA40108 */  lw    $a0, 0x108($sp)
/* 00446334 0320F809 */  jalr  $t9
/* 00446338 00000000 */   nop   
/* 0044633C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00446340 00409825 */  move  $s3, $v0
/* 00446344 02601025 */  move  $v0, $s3
.L00446348:
/* 00446348 8FBF00C4 */  lw    $ra, 0xc4($sp)
/* 0044634C 8FB000AC */  lw    $s0, 0xac($sp)
/* 00446350 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 00446354 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 00446358 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 0044635C 8FB400BC */  lw    $s4, 0xbc($sp)
/* 00446360 03E00008 */  jr    $ra
/* 00446364 27BD0108 */   addiu $sp, $sp, 0x108
    .type translate, @function
    .size translate, .-translate
    .end translate

glabel cse_equ
    .ent cse_equ
    # 00446C08 cse
/* 00446368 3C1C0FBE */  .cpload $t9
/* 0044636C 279C96E8 */  
/* 00446370 0399E021 */  
/* 00446374 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 00446378 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0044637C AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00446380 00803025 */  move  $a2, $a0
/* 00446384 14850003 */  bne   $a0, $a1, .L00446394
/* 00446388 00A03825 */   move  $a3, $a1
/* 0044638C 1000021A */  b     .L00446BF8
/* 00446390 24020001 */   li    $v0, 1
.L00446394:
/* 00446394 90E20020 */  lbu   $v0, 0x20($a3)
/* 00446398 90C30020 */  lbu   $v1, 0x20($a2)
/* 0044639C 24010036 */  li    $at, 54
/* 004463A0 10430007 */  beq   $v0, $v1, .L004463C0
/* 004463A4 00000000 */   nop   
/* 004463A8 14610003 */  bne   $v1, $at, .L004463B8
/* 004463AC 2401003F */   li    $at, 63
/* 004463B0 10410003 */  beq   $v0, $at, .L004463C0
/* 004463B4 00000000 */   nop   
.L004463B8:
/* 004463B8 1000020F */  b     .L00446BF8
/* 004463BC 00001025 */   move  $v0, $zero
.L004463C0:
/* 004463C0 1000014E */  b     .L004468FC
/* 004463C4 306200FF */   andi  $v0, $v1, 0xff
.L004463C8:
/* 004463C8 90EE0021 */  lbu   $t6, 0x21($a3)
/* 004463CC 90D90021 */  lbu   $t9, 0x21($a2)
/* 004463D0 000E7E00 */  sll   $t7, $t6, 0x18
/* 004463D4 00194600 */  sll   $t0, $t9, 0x18
/* 004463D8 00084F42 */  srl   $t1, $t0, 0x1d
/* 004463DC 000FC742 */  srl   $t8, $t7, 0x1d
/* 004463E0 03091826 */  xor   $v1, $t8, $t1
/* 004463E4 2C630001 */  sltiu $v1, $v1, 1
/* 004463E8 10600011 */  beqz  $v1, .L00446430
/* 004463EC 00000000 */   nop   
/* 004463F0 8CEA0024 */  lw    $t2, 0x24($a3)
/* 004463F4 8CCB0024 */  lw    $t3, 0x24($a2)
/* 004463F8 014B1826 */  xor   $v1, $t2, $t3
/* 004463FC 2C630001 */  sltiu $v1, $v1, 1
/* 00446400 1060000B */  beqz  $v1, .L00446430
/* 00446404 00000000 */   nop   
/* 00446408 8CEC002C */  lw    $t4, 0x2c($a3)
/* 0044640C 8CCD002C */  lw    $t5, 0x2c($a2)
/* 00446410 018D1826 */  xor   $v1, $t4, $t5
/* 00446414 2C630001 */  sltiu $v1, $v1, 1
/* 00446418 10600005 */  beqz  $v1, .L00446430
/* 0044641C 00000000 */   nop   
/* 00446420 8CEE0028 */  lw    $t6, 0x28($a3)
/* 00446424 8CCF0028 */  lw    $t7, 0x28($a2)
/* 00446428 01CF1826 */  xor   $v1, $t6, $t7
/* 0044642C 2C630001 */  sltiu $v1, $v1, 1
.L00446430:
/* 00446430 100001F1 */  b     .L00446BF8
/* 00446434 00601025 */   move  $v0, $v1
.L00446438:
/* 00446438 90F90021 */  lbu   $t9, 0x21($a3)
/* 0044643C 90D80021 */  lbu   $t8, 0x21($a2)
/* 00446440 3328001F */  andi  $t0, $t9, 0x1f
/* 00446444 3309001F */  andi  $t1, $t8, 0x1f
/* 00446448 01091826 */  xor   $v1, $t0, $t1
/* 0044644C 2C630001 */  sltiu $v1, $v1, 1
/* 00446450 10600005 */  beqz  $v1, .L00446468
/* 00446454 00000000 */   nop   
/* 00446458 8CEA0000 */  lw    $t2, ($a3)
/* 0044645C 8CCB0000 */  lw    $t3, ($a2)
/* 00446460 014B1826 */  xor   $v1, $t2, $t3
/* 00446464 2C630001 */  sltiu $v1, $v1, 1
.L00446468:
/* 00446468 100001E3 */  b     .L00446BF8
/* 0044646C 00601025 */   move  $v0, $v1
.L00446470:
/* 00446470 90EC0021 */  lbu   $t4, 0x21($a3)
/* 00446474 90CE0021 */  lbu   $t6, 0x21($a2)
/* 00446478 318D001F */  andi  $t5, $t4, 0x1f
/* 0044647C 31CF001F */  andi  $t7, $t6, 0x1f
/* 00446480 01AF1826 */  xor   $v1, $t5, $t7
/* 00446484 2C630001 */  sltiu $v1, $v1, 1
/* 00446488 1060000B */  beqz  $v1, .L004464B8
/* 0044648C 00000000 */   nop   
/* 00446490 94F90022 */  lhu   $t9, 0x22($a3)
/* 00446494 94D80022 */  lhu   $t8, 0x22($a2)
/* 00446498 03381826 */  xor   $v1, $t9, $t8
/* 0044649C 2C630001 */  sltiu $v1, $v1, 1
/* 004464A0 10600005 */  beqz  $v1, .L004464B8
/* 004464A4 00000000 */   nop   
/* 004464A8 8CE80000 */  lw    $t0, ($a3)
/* 004464AC 8CC90000 */  lw    $t1, ($a2)
/* 004464B0 01091826 */  xor   $v1, $t0, $t1
/* 004464B4 2C630001 */  sltiu $v1, $v1, 1
.L004464B8:
/* 004464B8 100001CF */  b     .L00446BF8
/* 004464BC 00601025 */   move  $v0, $v1
.L004464C0:
/* 004464C0 90EA0021 */  lbu   $t2, 0x21($a3)
/* 004464C4 90CC0021 */  lbu   $t4, 0x21($a2)
/* 004464C8 314B001F */  andi  $t3, $t2, 0x1f
/* 004464CC 318E001F */  andi  $t6, $t4, 0x1f
/* 004464D0 016E1826 */  xor   $v1, $t3, $t6
/* 004464D4 2C630001 */  sltiu $v1, $v1, 1
/* 004464D8 1060000B */  beqz  $v1, .L00446508
/* 004464DC 00000000 */   nop   
/* 004464E0 8CED0024 */  lw    $t5, 0x24($a3)
/* 004464E4 8CCF0024 */  lw    $t7, 0x24($a2)
/* 004464E8 01AF1826 */  xor   $v1, $t5, $t7
/* 004464EC 2C630001 */  sltiu $v1, $v1, 1
/* 004464F0 10600005 */  beqz  $v1, .L00446508
/* 004464F4 00000000 */   nop   
/* 004464F8 8CF90000 */  lw    $t9, ($a3)
/* 004464FC 8CD80000 */  lw    $t8, ($a2)
/* 00446500 03381826 */  xor   $v1, $t9, $t8
/* 00446504 2C630001 */  sltiu $v1, $v1, 1
.L00446508:
/* 00446508 100001BB */  b     .L00446BF8
/* 0044650C 00601025 */   move  $v0, $v1
.L00446510:
/* 00446510 90E80021 */  lbu   $t0, 0x21($a3)
/* 00446514 90CA0021 */  lbu   $t2, 0x21($a2)
/* 00446518 3109001F */  andi  $t1, $t0, 0x1f
/* 0044651C 314C001F */  andi  $t4, $t2, 0x1f
/* 00446520 012C1826 */  xor   $v1, $t1, $t4
/* 00446524 2C630001 */  sltiu $v1, $v1, 1
/* 00446528 10600011 */  beqz  $v1, .L00446570
/* 0044652C 00000000 */   nop   
/* 00446530 8CEB0024 */  lw    $t3, 0x24($a3)
/* 00446534 8CCE0024 */  lw    $t6, 0x24($a2)
/* 00446538 016E1826 */  xor   $v1, $t3, $t6
/* 0044653C 2C630001 */  sltiu $v1, $v1, 1
/* 00446540 1060000B */  beqz  $v1, .L00446570
/* 00446544 00000000 */   nop   
/* 00446548 94ED0022 */  lhu   $t5, 0x22($a3)
/* 0044654C 94CF0022 */  lhu   $t7, 0x22($a2)
/* 00446550 01AF1826 */  xor   $v1, $t5, $t7
/* 00446554 2C630001 */  sltiu $v1, $v1, 1
/* 00446558 10600005 */  beqz  $v1, .L00446570
/* 0044655C 00000000 */   nop   
/* 00446560 8CF90000 */  lw    $t9, ($a3)
/* 00446564 8CD80000 */  lw    $t8, ($a2)
/* 00446568 03381826 */  xor   $v1, $t9, $t8
/* 0044656C 2C630001 */  sltiu $v1, $v1, 1
.L00446570:
/* 00446570 100001A1 */  b     .L00446BF8
/* 00446574 00601025 */   move  $v0, $v1
.L00446578:
/* 00446578 90E80021 */  lbu   $t0, 0x21($a3)
/* 0044657C 90C90021 */  lbu   $t1, 0x21($a2)
/* 00446580 310A001F */  andi  $t2, $t0, 0x1f
/* 00446584 312C001F */  andi  $t4, $t1, 0x1f
/* 00446588 014C1826 */  xor   $v1, $t2, $t4
/* 0044658C 2C630001 */  sltiu $v1, $v1, 1
/* 00446590 10600011 */  beqz  $v1, .L004465D8
/* 00446594 00000000 */   nop   
/* 00446598 90EB0028 */  lbu   $t3, 0x28($a3)
/* 0044659C 90CE0028 */  lbu   $t6, 0x28($a2)
/* 004465A0 016E1826 */  xor   $v1, $t3, $t6
/* 004465A4 2C630001 */  sltiu $v1, $v1, 1
/* 004465A8 1060000B */  beqz  $v1, .L004465D8
/* 004465AC 00000000 */   nop   
/* 004465B0 94ED0022 */  lhu   $t5, 0x22($a3)
/* 004465B4 94CF0022 */  lhu   $t7, 0x22($a2)
/* 004465B8 01AF1826 */  xor   $v1, $t5, $t7
/* 004465BC 2C630001 */  sltiu $v1, $v1, 1
/* 004465C0 10600005 */  beqz  $v1, .L004465D8
/* 004465C4 00000000 */   nop   
/* 004465C8 8CF90000 */  lw    $t9, ($a3)
/* 004465CC 8CD80000 */  lw    $t8, ($a2)
/* 004465D0 03381826 */  xor   $v1, $t9, $t8
/* 004465D4 2C630001 */  sltiu $v1, $v1, 1
.L004465D8:
/* 004465D8 10000187 */  b     .L00446BF8
/* 004465DC 00601025 */   move  $v0, $v1
.L004465E0:
/* 004465E0 8CE8002C */  lw    $t0, 0x2c($a3)
/* 004465E4 8CC9002C */  lw    $t1, 0x2c($a2)
/* 004465E8 01091826 */  xor   $v1, $t0, $t1
/* 004465EC 2C630001 */  sltiu $v1, $v1, 1
/* 004465F0 1060000B */  beqz  $v1, .L00446620
/* 004465F4 00000000 */   nop   
/* 004465F8 8CEA0028 */  lw    $t2, 0x28($a3)
/* 004465FC 8CCC0028 */  lw    $t4, 0x28($a2)
/* 00446600 014C1826 */  xor   $v1, $t2, $t4
/* 00446604 2C630001 */  sltiu $v1, $v1, 1
/* 00446608 10600005 */  beqz  $v1, .L00446620
/* 0044660C 00000000 */   nop   
/* 00446610 8CEB0000 */  lw    $t3, ($a3)
/* 00446614 8CCE0000 */  lw    $t6, ($a2)
/* 00446618 016E1826 */  xor   $v1, $t3, $t6
/* 0044661C 2C630001 */  sltiu $v1, $v1, 1
.L00446620:
/* 00446620 10000175 */  b     .L00446BF8
/* 00446624 00601025 */   move  $v0, $v1
.L00446628:
/* 00446628 90ED0021 */  lbu   $t5, 0x21($a3)
/* 0044662C 90D80021 */  lbu   $t8, 0x21($a2)
/* 00446630 000D7E00 */  sll   $t7, $t5, 0x18
/* 00446634 00184600 */  sll   $t0, $t8, 0x18
/* 00446638 00084F42 */  srl   $t1, $t0, 0x1d
/* 0044663C 000FCF42 */  srl   $t9, $t7, 0x1d
/* 00446640 03291826 */  xor   $v1, $t9, $t1
/* 00446644 2C630001 */  sltiu $v1, $v1, 1
/* 00446648 10600017 */  beqz  $v1, .L004466A8
/* 0044664C 00000000 */   nop   
/* 00446650 8CEA0024 */  lw    $t2, 0x24($a3)
/* 00446654 8CCC0024 */  lw    $t4, 0x24($a2)
/* 00446658 014C1826 */  xor   $v1, $t2, $t4
/* 0044665C 2C630001 */  sltiu $v1, $v1, 1
/* 00446660 10600011 */  beqz  $v1, .L004466A8
/* 00446664 00000000 */   nop   
/* 00446668 8CEB002C */  lw    $t3, 0x2c($a3)
/* 0044666C 8CCE002C */  lw    $t6, 0x2c($a2)
/* 00446670 016E1826 */  xor   $v1, $t3, $t6
/* 00446674 2C630001 */  sltiu $v1, $v1, 1
/* 00446678 1060000B */  beqz  $v1, .L004466A8
/* 0044667C 00000000 */   nop   
/* 00446680 8CED0028 */  lw    $t5, 0x28($a3)
/* 00446684 8CCF0028 */  lw    $t7, 0x28($a2)
/* 00446688 01AF1826 */  xor   $v1, $t5, $t7
/* 0044668C 2C630001 */  sltiu $v1, $v1, 1
/* 00446690 10600005 */  beqz  $v1, .L004466A8
/* 00446694 00000000 */   nop   
/* 00446698 8CF80000 */  lw    $t8, ($a3)
/* 0044669C 8CC80000 */  lw    $t0, ($a2)
/* 004466A0 03081826 */  xor   $v1, $t8, $t0
/* 004466A4 2C630001 */  sltiu $v1, $v1, 1
.L004466A8:
/* 004466A8 10000153 */  b     .L00446BF8
/* 004466AC 00601025 */   move  $v0, $v1
.L004466B0:
/* 004466B0 90F90021 */  lbu   $t9, 0x21($a3)
.L004466B4:
/* 004466B4 90CA0021 */  lbu   $t2, 0x21($a2)
/* 004466B8 3329001F */  andi  $t1, $t9, 0x1f
/* 004466BC 314C001F */  andi  $t4, $t2, 0x1f
/* 004466C0 012C1826 */  xor   $v1, $t1, $t4
/* 004466C4 2C630001 */  sltiu $v1, $v1, 1
/* 004466C8 10600012 */  beqz  $v1, .L00446714
/* 004466CC 00000000 */   nop   
/* 004466D0 8CEB0000 */  lw    $t3, ($a3)
/* 004466D4 8CCE0000 */  lw    $t6, ($a2)
/* 004466D8 016E1826 */  xor   $v1, $t3, $t6
/* 004466DC 2C630001 */  sltiu $v1, $v1, 1
/* 004466E0 1060000C */  beqz  $v1, .L00446714
/* 004466E4 00000000 */   nop   
/* 004466E8 8CE50004 */  lw    $a1, 4($a3)
/* 004466EC 8CC40004 */  lw    $a0, 4($a2)
/* 004466F0 00A41826 */  xor   $v1, $a1, $a0
/* 004466F4 2C630001 */  sltiu $v1, $v1, 1
/* 004466F8 14600006 */  bnez  $v1, .L00446714
/* 004466FC 00000000 */   nop   
/* 00446700 8F998698 */  lw    $t9, %call16(const_equal)($gp)
/* 00446704 0320F809 */  jalr  $t9
/* 00446708 00000000 */   nop   
/* 0044670C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00446710 00401825 */  move  $v1, $v0
.L00446714:
/* 00446714 10000138 */  b     .L00446BF8
/* 00446718 00601025 */   move  $v0, $v1
.L0044671C:
/* 0044671C 90ED0021 */  lbu   $t5, 0x21($a3)
.L00446720:
/* 00446720 90D80021 */  lbu   $t8, 0x21($a2)
/* 00446724 31AF001F */  andi  $t7, $t5, 0x1f
/* 00446728 3308001F */  andi  $t0, $t8, 0x1f
/* 0044672C 01E81826 */  xor   $v1, $t7, $t0
/* 00446730 2C630001 */  sltiu $v1, $v1, 1
/* 00446734 10600018 */  beqz  $v1, .L00446798
/* 00446738 00000000 */   nop   
/* 0044673C 8CF90000 */  lw    $t9, ($a3)
/* 00446740 8CCA0000 */  lw    $t2, ($a2)
/* 00446744 032A1826 */  xor   $v1, $t9, $t2
/* 00446748 2C630001 */  sltiu $v1, $v1, 1
/* 0044674C 10600012 */  beqz  $v1, .L00446798
/* 00446750 00000000 */   nop   
/* 00446754 94E90022 */  lhu   $t1, 0x22($a3)
/* 00446758 94CC0022 */  lhu   $t4, 0x22($a2)
/* 0044675C 012C1826 */  xor   $v1, $t1, $t4
/* 00446760 2C630001 */  sltiu $v1, $v1, 1
/* 00446764 1060000C */  beqz  $v1, .L00446798
/* 00446768 00000000 */   nop   
/* 0044676C 8CE50004 */  lw    $a1, 4($a3)
/* 00446770 8CC40004 */  lw    $a0, 4($a2)
/* 00446774 00A41826 */  xor   $v1, $a1, $a0
/* 00446778 2C630001 */  sltiu $v1, $v1, 1
/* 0044677C 14600006 */  bnez  $v1, .L00446798
/* 00446780 00000000 */   nop   
/* 00446784 8F998698 */  lw    $t9, %call16(const_equal)($gp)
/* 00446788 0320F809 */  jalr  $t9
/* 0044678C 00000000 */   nop   
/* 00446790 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00446794 00401825 */  move  $v1, $v0
.L00446798:
/* 00446798 10000117 */  b     .L00446BF8
/* 0044679C 00601025 */   move  $v0, $v1
.L004467A0:
/* 004467A0 90EB0021 */  lbu   $t3, 0x21($a3)
/* 004467A4 90CD0021 */  lbu   $t5, 0x21($a2)
/* 004467A8 316E001F */  andi  $t6, $t3, 0x1f
/* 004467AC 31B8001F */  andi  $t8, $t5, 0x1f
/* 004467B0 01D81826 */  xor   $v1, $t6, $t8
/* 004467B4 2C630001 */  sltiu $v1, $v1, 1
/* 004467B8 10600018 */  beqz  $v1, .L0044681C
/* 004467BC 00000000 */   nop   
/* 004467C0 8CEF0028 */  lw    $t7, 0x28($a3)
/* 004467C4 8CC80028 */  lw    $t0, 0x28($a2)
/* 004467C8 01E81826 */  xor   $v1, $t7, $t0
/* 004467CC 2C630001 */  sltiu $v1, $v1, 1
/* 004467D0 10600012 */  beqz  $v1, .L0044681C
/* 004467D4 00000000 */   nop   
/* 004467D8 8CF90000 */  lw    $t9, ($a3)
/* 004467DC 8CCA0000 */  lw    $t2, ($a2)
/* 004467E0 032A1826 */  xor   $v1, $t9, $t2
/* 004467E4 2C630001 */  sltiu $v1, $v1, 1
/* 004467E8 1060000C */  beqz  $v1, .L0044681C
/* 004467EC 00000000 */   nop   
/* 004467F0 8CE50004 */  lw    $a1, 4($a3)
/* 004467F4 8CC40004 */  lw    $a0, 4($a2)
/* 004467F8 00A41826 */  xor   $v1, $a1, $a0
/* 004467FC 2C630001 */  sltiu $v1, $v1, 1
/* 00446800 14600006 */  bnez  $v1, .L0044681C
/* 00446804 00000000 */   nop   
/* 00446808 8F998698 */  lw    $t9, %call16(const_equal)($gp)
/* 0044680C 0320F809 */  jalr  $t9
/* 00446810 00000000 */   nop   
/* 00446814 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00446818 00401825 */  move  $v1, $v0
.L0044681C:
/* 0044681C 100000F6 */  b     .L00446BF8
/* 00446820 00601025 */   move  $v0, $v1
.L00446824:
/* 00446824 90E90021 */  lbu   $t1, 0x21($a3)
/* 00446828 90CB0021 */  lbu   $t3, 0x21($a2)
/* 0044682C 312C001F */  andi  $t4, $t1, 0x1f
/* 00446830 316D001F */  andi  $t5, $t3, 0x1f
/* 00446834 018D1826 */  xor   $v1, $t4, $t5
/* 00446838 2C630001 */  sltiu $v1, $v1, 1
/* 0044683C 10600011 */  beqz  $v1, .L00446884
/* 00446840 00000000 */   nop   
/* 00446844 8CEE002C */  lw    $t6, 0x2c($a3)
/* 00446848 8CD8002C */  lw    $t8, 0x2c($a2)
/* 0044684C 01D81826 */  xor   $v1, $t6, $t8
/* 00446850 2C630001 */  sltiu $v1, $v1, 1
/* 00446854 1060000B */  beqz  $v1, .L00446884
/* 00446858 00000000 */   nop   
/* 0044685C 8CEF0028 */  lw    $t7, 0x28($a3)
/* 00446860 8CC80028 */  lw    $t0, 0x28($a2)
/* 00446864 01E81826 */  xor   $v1, $t7, $t0
/* 00446868 2C630001 */  sltiu $v1, $v1, 1
/* 0044686C 10600005 */  beqz  $v1, .L00446884
/* 00446870 00000000 */   nop   
/* 00446874 8CF90000 */  lw    $t9, ($a3)
/* 00446878 8CCA0000 */  lw    $t2, ($a2)
/* 0044687C 032A1826 */  xor   $v1, $t9, $t2
/* 00446880 2C630001 */  sltiu $v1, $v1, 1
.L00446884:
/* 00446884 100000DC */  b     .L00446BF8
/* 00446888 00601025 */   move  $v0, $v1
/* 0044688C 90E90021 */  lbu   $t1, 0x21($a3)
.L00446890:
/* 00446890 90CC0021 */  lbu   $t4, 0x21($a2)
/* 00446894 312B001F */  andi  $t3, $t1, 0x1f
/* 00446898 318D001F */  andi  $t5, $t4, 0x1f
/* 0044689C 016D1826 */  xor   $v1, $t3, $t5
/* 004468A0 2C630001 */  sltiu $v1, $v1, 1
/* 004468A4 10600011 */  beqz  $v1, .L004468EC
/* 004468A8 00000000 */   nop   
/* 004468AC 8CEE0024 */  lw    $t6, 0x24($a3)
/* 004468B0 8CD80024 */  lw    $t8, 0x24($a2)
/* 004468B4 01D81826 */  xor   $v1, $t6, $t8
/* 004468B8 2C630001 */  sltiu $v1, $v1, 1
/* 004468BC 1060000B */  beqz  $v1, .L004468EC
/* 004468C0 00000000 */   nop   
/* 004468C4 8CEF0028 */  lw    $t7, 0x28($a3)
/* 004468C8 8CC80028 */  lw    $t0, 0x28($a2)
/* 004468CC 01E81826 */  xor   $v1, $t7, $t0
/* 004468D0 2C630001 */  sltiu $v1, $v1, 1
/* 004468D4 10600005 */  beqz  $v1, .L004468EC
/* 004468D8 00000000 */   nop   
/* 004468DC 8CF90000 */  lw    $t9, ($a3)
/* 004468E0 8CCA0000 */  lw    $t2, ($a2)
/* 004468E4 032A1826 */  xor   $v1, $t9, $t2
/* 004468E8 2C630001 */  sltiu $v1, $v1, 1
.L004468EC:
/* 004468EC 100000C2 */  b     .L00446BF8
/* 004468F0 00601025 */   move  $v0, $v1
.L004468F4:
/* 004468F4 100000C0 */  b     .L00446BF8
/* 004468F8 00001025 */   move  $v0, $zero
.L004468FC:
/* 004468FC 2C410048 */  sltiu $at, $v0, 0x48
/* 00446900 14200032 */  bnez  $at, .L004469CC
/* 00446904 2C410078 */   sltiu $at, $v0, 0x78
/* 00446908 14200014 */  bnez  $at, .L0044695C
/* 0044690C 2C41008E */   sltiu $at, $v0, 0x8e
/* 00446910 14200005 */  bnez  $at, .L00446928
/* 00446914 24010093 */   li    $at, 147
/* 00446918 5041FFDD */  beql  $v0, $at, .L00446890
/* 0044691C 90E90021 */   lbu   $t1, 0x21($a3)
/* 00446920 10000042 */  b     .L00446A2C
/* 00446924 00000000 */   nop   
.L00446928:
/* 00446928 2401007D */  li    $at, 125
/* 0044692C 1041FF7B */  beq   $v0, $at, .L0044671C
/* 00446930 2449FF7A */   addiu $t1, $v0, -0x86
/* 00446934 2D210008 */  sltiu $at, $t1, 8
/* 00446938 1020003C */  beqz  $at, .L00446A2C
/* 0044693C 00000000 */   nop   
/* 00446940 8F818038 */  lw    $at, %got(jtbl_1000DBF8)($gp)
/* 00446944 00094880 */  sll   $t1, $t1, 2
/* 00446948 00290821 */  addu  $at, $at, $t1
/* 0044694C 8C29DBF8 */  lw    $t1, %lo(jtbl_1000DBF8)($at)
/* 00446950 013C4821 */  addu  $t1, $t1, $gp
/* 00446954 01200008 */  jr    $t1
/* 00446958 00000000 */   nop   
.L0044695C:
/* 0044695C 2C41006A */  sltiu $at, $v0, 0x6a
/* 00446960 1420000D */  bnez  $at, .L00446998
/* 00446964 2401006E */   li    $at, 110
/* 00446968 1041FF03 */  beq   $v0, $at, .L00446578
/* 0044696C 244CFF8D */   addiu $t4, $v0, -0x73
/* 00446970 2D810005 */  sltiu $at, $t4, 5
/* 00446974 1020002D */  beqz  $at, .L00446A2C
/* 00446978 00000000 */   nop   
/* 0044697C 8F818038 */  lw    $at, %got(jtbl_1000DBE4)($gp)
/* 00446980 000C6080 */  sll   $t4, $t4, 2
/* 00446984 002C0821 */  addu  $at, $at, $t4
/* 00446988 8C2CDBE4 */  lw    $t4, %lo(jtbl_1000DBE4)($at)
/* 0044698C 019C6021 */  addu  $t4, $t4, $gp
/* 00446990 01800008 */  jr    $t4
/* 00446994 00000000 */   nop   
.L00446998:
/* 00446998 2C410062 */  sltiu $at, $v0, 0x62
/* 0044699C 10200091 */  beqz  $at, .L00446BE4
/* 004469A0 244BFFB3 */   addiu $t3, $v0, -0x4d
/* 004469A4 2D610015 */  sltiu $at, $t3, 0x15
/* 004469A8 10200020 */  beqz  $at, .L00446A2C
/* 004469AC 00000000 */   nop   
/* 004469B0 8F818038 */  lw    $at, %got(jtbl_1000DB90)($gp)
/* 004469B4 000B5880 */  sll   $t3, $t3, 2
/* 004469B8 002B0821 */  addu  $at, $at, $t3
/* 004469BC 8C2BDB90 */  lw    $t3, %lo(jtbl_1000DB90)($at)
/* 004469C0 017C5821 */  addu  $t3, $t3, $gp
/* 004469C4 01600008 */  jr    $t3
/* 004469C8 00000000 */   nop   
.L004469CC:
/* 004469CC 2C41001E */  sltiu $at, $v0, 0x1e
/* 004469D0 14200056 */  bnez  $at, .L00446B2C
/* 004469D4 2C41002A */   sltiu $at, $v0, 0x2a
/* 004469D8 1420000E */  bnez  $at, .L00446A14
/* 004469DC 2C41003E */   sltiu $at, $v0, 0x3e
/* 004469E0 10200076 */  beqz  $at, .L00446BBC
/* 004469E4 2458FFBA */   addiu $t8, $v0, -0x46
/* 004469E8 244DFFCE */  addiu $t5, $v0, -0x32
/* 004469EC 2DA1000C */  sltiu $at, $t5, 0xc
/* 004469F0 1020000E */  beqz  $at, .L00446A2C
/* 004469F4 00000000 */   nop   
/* 004469F8 8F818038 */  lw    $at, %got(jtbl_1000DB58)($gp)
/* 004469FC 000D6880 */  sll   $t5, $t5, 2
/* 00446A00 002D0821 */  addu  $at, $at, $t5
/* 00446A04 8C2DDB58 */  lw    $t5, %lo(jtbl_1000DB58)($at)
/* 00446A08 01BC6821 */  addu  $t5, $t5, $gp
/* 00446A0C 01A00008 */  jr    $t5
/* 00446A10 00000000 */   nop   
.L00446A14:
/* 00446A14 24010023 */  li    $at, 35
/* 00446A18 5041FF26 */  beql  $v0, $at, .L004466B4
/* 00446A1C 90F90021 */   lbu   $t9, 0x21($a3)
/* 00446A20 2C410028 */  sltiu $at, $v0, 0x28
/* 00446A24 5020FF23 */  beql  $at, $zero, .L004466B4
/* 00446A28 90F90021 */   lbu   $t9, 0x21($a3)
.L00446A2C:
/* 00446A2C 8F8E8038 */  lw    $t6, %got(RO_1000DAD0)($gp)
/* 00446A30 24040004 */  li    $a0, 4
/* 00446A34 24050842 */  li    $a1, 2114
/* 00446A38 25CEDAD0 */  addiu $t6, %lo(RO_1000DAD0) # addiu $t6, $t6, -0x2530
/* 00446A3C 25D90048 */  addiu $t9, $t6, 0x48
/* 00446A40 03A04025 */  move  $t0, $sp
.L00446A44:
/* 00446A44 89CF0000 */  lwl   $t7, ($t6)
/* 00446A48 99CF0003 */  lwr   $t7, 3($t6)
/* 00446A4C 25CE000C */  addiu $t6, $t6, 0xc
/* 00446A50 2508000C */  addiu $t0, $t0, 0xc
/* 00446A54 A90FFFFC */  swl   $t7, -4($t0)
/* 00446A58 B90FFFFF */  swr   $t7, -1($t0)
/* 00446A5C 89D8FFF8 */  lwl   $t8, -8($t6)
/* 00446A60 99D8FFFB */  lwr   $t8, -5($t6)
/* 00446A64 A9180000 */  swl   $t8, ($t0)
/* 00446A68 B9180003 */  swr   $t8, 3($t0)
/* 00446A6C 89CFFFFC */  lwl   $t7, -4($t6)
/* 00446A70 99CFFFFF */  lwr   $t7, -1($t6)
/* 00446A74 A90F0004 */  swl   $t7, 4($t0)
/* 00446A78 15D9FFF2 */  bne   $t6, $t9, .L00446A44
/* 00446A7C B90F0007 */   swr   $t7, 7($t0)
/* 00446A80 89CF0000 */  lwl   $t7, ($t6)
/* 00446A84 99CF0003 */  lwr   $t7, 3($t6)
/* 00446A88 8F8A8038 */  lw    $t2, %got(RO_1000DA80)($gp)
/* 00446A8C 03A05825 */  move  $t3, $sp
/* 00446A90 A90F0008 */  swl   $t7, 8($t0)
/* 00446A94 B90F000B */  swr   $t7, 0xb($t0)
/* 00446A98 89D80004 */  lwl   $t8, 4($t6)
/* 00446A9C 99D80007 */  lwr   $t8, 7($t6)
/* 00446AA0 254ADA80 */  addiu $t2, %lo(RO_1000DA80) # addiu $t2, $t2, -0x2580
/* 00446AA4 254D0048 */  addiu $t5, $t2, 0x48
/* 00446AA8 A918000C */  swl   $t8, 0xc($t0)
/* 00446AAC B918000F */  swr   $t8, 0xf($t0)
.L00446AB0:
/* 00446AB0 894C0000 */  lwl   $t4, ($t2)
/* 00446AB4 994C0003 */  lwr   $t4, 3($t2)
/* 00446AB8 254A000C */  addiu $t2, $t2, 0xc
/* 00446ABC 256B000C */  addiu $t3, $t3, 0xc
/* 00446AC0 A96C004C */  swl   $t4, 0x4c($t3)
/* 00446AC4 B96C004F */  swr   $t4, 0x4f($t3)
/* 00446AC8 8949FFF8 */  lwl   $t1, -8($t2)
/* 00446ACC 9949FFFB */  lwr   $t1, -5($t2)
/* 00446AD0 A9690050 */  swl   $t1, 0x50($t3)
/* 00446AD4 B9690053 */  swr   $t1, 0x53($t3)
/* 00446AD8 894CFFFC */  lwl   $t4, -4($t2)
/* 00446ADC 994CFFFF */  lwr   $t4, -1($t2)
/* 00446AE0 A96C0054 */  swl   $t4, 0x54($t3)
/* 00446AE4 154DFFF2 */  bne   $t2, $t5, .L00446AB0
/* 00446AE8 B96C0057 */   swr   $t4, 0x57($t3)
/* 00446AEC 894C0000 */  lwl   $t4, ($t2)
/* 00446AF0 994C0003 */  lwr   $t4, 3($t2)
/* 00446AF4 A96C0058 */  swl   $t4, 0x58($t3)
/* 00446AF8 B96C005B */  swr   $t4, 0x5b($t3)
/* 00446AFC 89490004 */  lwl   $t1, 4($t2)
/* 00446B00 99490007 */  lwr   $t1, 7($t2)
/* 00446B04 A969005C */  swl   $t1, 0x5c($t3)
/* 00446B08 B969005F */  swr   $t1, 0x5f($t3)
/* 00446B0C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00446B10 8FA7000C */  lw    $a3, 0xc($sp)
/* 00446B14 8FA60008 */  lw    $a2, 8($sp)
/* 00446B18 0320F809 */  jalr  $t9
/* 00446B1C 00000000 */   nop   
/* 00446B20 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00446B24 10000034 */  b     .L00446BF8
/* 00446B28 00001025 */   move  $v0, $zero
.L00446B2C:
/* 00446B2C 2C410005 */  sltiu $at, $v0, 5
/* 00446B30 1420000E */  bnez  $at, .L00446B6C
/* 00446B34 2C41000F */   sltiu $at, $v0, 0xf
/* 00446B38 10200016 */  beqz  $at, .L00446B94
/* 00446B3C 2448FFE8 */   addiu $t0, $v0, -0x18
/* 00446B40 2459FFF4 */  addiu $t9, $v0, -0xc
/* 00446B44 2F210003 */  sltiu $at, $t9, 3
/* 00446B48 1020FFB8 */  beqz  $at, .L00446A2C
/* 00446B4C 00000000 */   nop   
/* 00446B50 8F818038 */  lw    $at, %got(jtbl_1000DB34)($gp)
/* 00446B54 0019C880 */  sll   $t9, $t9, 2
/* 00446B58 00390821 */  addu  $at, $at, $t9
/* 00446B5C 8C39DB34 */  lw    $t9, %lo(jtbl_1000DB34)($at)
/* 00446B60 033CC821 */  addu  $t9, $t9, $gp
/* 00446B64 03200008 */  jr    $t9
/* 00446B68 00000000 */   nop   
.L00446B6C:
/* 00446B6C 2C410005 */  sltiu $at, $v0, 5
/* 00446B70 1020FFAE */  beqz  $at, .L00446A2C
/* 00446B74 00000000 */   nop   
/* 00446B78 8F818038 */  lw    $at, %got(jtbl_1000DB20)($gp)
/* 00446B7C 00027080 */  sll   $t6, $v0, 2
/* 00446B80 002E0821 */  addu  $at, $at, $t6
/* 00446B84 8C2EDB20 */  lw    $t6, %lo(jtbl_1000DB20)($at)
/* 00446B88 01DC7021 */  addu  $t6, $t6, $gp
/* 00446B8C 01C00008 */  jr    $t6
/* 00446B90 00000000 */   nop   
.L00446B94:
/* 00446B94 2D010006 */  sltiu $at, $t0, 6
/* 00446B98 1020FFA4 */  beqz  $at, .L00446A2C
/* 00446B9C 00000000 */   nop   
/* 00446BA0 8F818038 */  lw    $at, %got(jtbl_1000DB40)($gp)
/* 00446BA4 00084080 */  sll   $t0, $t0, 2
/* 00446BA8 00280821 */  addu  $at, $at, $t0
/* 00446BAC 8C28DB40 */  lw    $t0, %lo(jtbl_1000DB40)($at)
/* 00446BB0 011C4021 */  addu  $t0, $t0, $gp
/* 00446BB4 01000008 */  jr    $t0
/* 00446BB8 00000000 */   nop   
.L00446BBC:
/* 00446BBC 2F010002 */  sltiu $at, $t8, 2
/* 00446BC0 1020FF9A */  beqz  $at, .L00446A2C
/* 00446BC4 00000000 */   nop   
/* 00446BC8 8F818038 */  lw    $at, %got(jtbl_1000DB88)($gp)
/* 00446BCC 0018C080 */  sll   $t8, $t8, 2
/* 00446BD0 00380821 */  addu  $at, $at, $t8
/* 00446BD4 8C38DB88 */  lw    $t8, %lo(jtbl_1000DB88)($at)
/* 00446BD8 031CC021 */  addu  $t8, $t8, $gp
/* 00446BDC 03000008 */  jr    $t8
/* 00446BE0 00000000 */   nop   
.L00446BE4:
/* 00446BE4 24010069 */  li    $at, 105
/* 00446BE8 5041FECD */  beql  $v0, $at, .L00446720
/* 00446BEC 90ED0021 */   lbu   $t5, 0x21($a3)
/* 00446BF0 1000FF8E */  b     .L00446A2C
/* 00446BF4 00000000 */   nop   
.L00446BF8:
/* 00446BF8 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00446BFC 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 00446C00 03E00008 */  jr    $ra
/* 00446C04 00000000 */   nop   
    .type cse_equ, @function
    .size cse_equ, .-cse_equ
    .end cse_equ

glabel cse
    .ent cse
    # 004432FC translate
/* 00446C08 3C1C0FBE */  .cpload $t9
/* 00446C0C 279C8E48 */  
/* 00446C10 0399E021 */  
/* 00446C14 8F8E8920 */  lw     $t6, %got(no_cse_flag)($gp)
/* 00446C18 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00446C1C AFB30024 */  sw    $s3, 0x24($sp)
/* 00446C20 8DCE0000 */  lw    $t6, ($t6)
/* 00446C24 00809825 */  move  $s3, $a0
/* 00446C28 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00446C2C AFBC0028 */  sw    $gp, 0x28($sp)
/* 00446C30 AFB20020 */  sw    $s2, 0x20($sp)
/* 00446C34 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00446C38 19C00003 */  blez  $t6, .L00446C48
/* 00446C3C AFB00018 */   sw    $s0, 0x18($sp)
/* 00446C40 10000072 */  b     .L00446E0C
/* 00446C44 00801025 */   move  $v0, $a0
.L00446C48:
/* 00446C48 92620020 */  lbu   $v0, 0x20($s3)
/* 00446C4C 24010036 */  li    $at, 54
/* 00446C50 10410003 */  beq   $v0, $at, .L00446C60
/* 00446C54 24010093 */   li    $at, 147
/* 00446C58 54410008 */  bnel  $v0, $at, .L00446C7C
/* 00446C5C 8E620000 */   lw    $v0, ($s3)
.L00446C60:
/* 00446C60 966F0022 */  lhu   $t7, 0x22($s3)
/* 00446C64 31F80001 */  andi  $t8, $t7, 1
/* 00446C68 53000004 */  beql  $t8, $zero, .L00446C7C
/* 00446C6C 8E620000 */   lw    $v0, ($s3)
/* 00446C70 10000066 */  b     .L00446E0C
/* 00446C74 02601025 */   move  $v0, $s3
/* 00446C78 8E620000 */  lw    $v0, ($s3)
.L00446C7C:
/* 00446C7C 5040000A */  beql  $v0, $zero, .L00446CA8
/* 00446C80 8E620004 */   lw    $v0, 4($s3)
/* 00446C84 94590014 */  lhu   $t9, 0x14($v0)
/* 00446C88 2F210002 */  sltiu $at, $t9, 2
/* 00446C8C 50200006 */  beql  $at, $zero, .L00446CA8
/* 00446C90 8E620004 */   lw    $v0, 4($s3)
/* 00446C94 90480020 */  lbu   $t0, 0x20($v0)
/* 00446C98 24010049 */  li    $at, 73
/* 00446C9C 1501004C */  bne   $t0, $at, .L00446DD0
/* 00446CA0 00000000 */   nop   
/* 00446CA4 8E620004 */  lw    $v0, 4($s3)
.L00446CA8:
/* 00446CA8 10400009 */  beqz  $v0, .L00446CD0
/* 00446CAC 00000000 */   nop   
/* 00446CB0 94490014 */  lhu   $t1, 0x14($v0)
/* 00446CB4 2D210002 */  sltiu $at, $t1, 2
/* 00446CB8 10200005 */  beqz  $at, .L00446CD0
/* 00446CBC 00000000 */   nop   
/* 00446CC0 904A0020 */  lbu   $t2, 0x20($v0)
/* 00446CC4 24010049 */  li    $at, 73
/* 00446CC8 15410041 */  bne   $t2, $at, .L00446DD0
/* 00446CCC 00000000 */   nop   
.L00446CD0:
/* 00446CD0 8F838B28 */  lw     $v1, %got(expr_count)($gp)
/* 00446CD4 90630000 */  lbu   $v1, ($v1)
/* 00446CD8 1060003D */  beqz  $v1, .L00446DD0
/* 00446CDC 306200FF */   andi  $v0, $v1, 0xff
/* 00446CE0 8F8C8BAC */  lw     $t4, %got(exprs)($gp)
/* 00446CE4 8F928BAC */  lw     $s2, %got(exprs)($gp)
/* 00446CE8 00025880 */  sll   $t3, $v0, 2
/* 00446CEC 258CFFFC */  addiu $t4, $t4, -4
/* 00446CF0 016C8021 */  addu  $s0, $t3, $t4
/* 00446CF4 2652FFFC */  addiu $s2, $s2, -4
/* 00446CF8 8E110000 */  lw    $s1, ($s0)
.L00446CFC:
/* 00446CFC 52200032 */  beql  $s1, $zero, .L00446DC8
/* 00446D00 2610FFFC */   addiu $s0, $s0, -4
/* 00446D04 8F9985F8 */  lw    $t9, %call16(cse_equ)($gp)
/* 00446D08 02602025 */  move  $a0, $s3
/* 00446D0C 02202825 */  move  $a1, $s1
/* 00446D10 0320F809 */  jalr  $t9
/* 00446D14 00000000 */   nop   
/* 00446D18 1040002A */  beqz  $v0, .L00446DC4
/* 00446D1C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00446D20 16710003 */  bne   $s3, $s1, .L00446D30
/* 00446D24 00000000 */   nop   
/* 00446D28 10000038 */  b     .L00446E0C
/* 00446D2C 02601025 */   move  $v0, $s3
.L00446D30:
/* 00446D30 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00446D34 02602025 */  move  $a0, $s3
/* 00446D38 0320F809 */  jalr  $t9
/* 00446D3C 00000000 */   nop   
/* 00446D40 92220020 */  lbu   $v0, 0x20($s1)
/* 00446D44 2401003F */  li    $at, 63
/* 00446D48 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00446D4C 10410003 */  beq   $v0, $at, .L00446D5C
/* 00446D50 24010094 */   li    $at, 148
/* 00446D54 14410015 */  bne   $v0, $at, .L00446DAC
/* 00446D58 00000000 */   nop   
.L00446D5C:
/* 00446D5C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00446D60 8E240004 */  lw    $a0, 4($s1)
/* 00446D64 0320F809 */  jalr  $t9
/* 00446D68 00000000 */   nop   
/* 00446D6C 904D0020 */  lbu   $t5, 0x20($v0)
/* 00446D70 24010049 */  li    $at, 73
/* 00446D74 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00446D78 15A1000A */  bne   $t5, $at, .L00446DA4
/* 00446D7C 00408825 */   move  $s1, $v0
/* 00446D80 8E650028 */  lw    $a1, 0x28($s3)
/* 00446D84 8C4E0028 */  lw    $t6, 0x28($v0)
/* 00446D88 10AE0006 */  beq   $a1, $t6, .L00446DA4
/* 00446D8C 00000000 */   nop   
/* 00446D90 8F9985D0 */  lw    $t9, %call16(force_casting)($gp)
/* 00446D94 00402025 */  move  $a0, $v0
/* 00446D98 0320F809 */  jalr  $t9
/* 00446D9C 00000000 */   nop   
/* 00446DA0 8FBC0028 */  lw    $gp, 0x28($sp)
.L00446DA4:
/* 00446DA4 10000019 */  b     .L00446E0C
/* 00446DA8 02201025 */   move  $v0, $s1
.L00446DAC:
/* 00446DAC 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00446DB0 02202025 */  move  $a0, $s1
/* 00446DB4 0320F809 */  jalr  $t9
/* 00446DB8 00000000 */   nop   
/* 00446DBC 10000013 */  b     .L00446E0C
/* 00446DC0 8FBC0028 */   lw    $gp, 0x28($sp)
.L00446DC4:
/* 00446DC4 2610FFFC */  addiu $s0, $s0, -4
.L00446DC8:
/* 00446DC8 5612FFCC */  bnel  $s0, $s2, .L00446CFC
/* 00446DCC 8E110000 */   lw    $s1, ($s0)
.L00446DD0:
/* 00446DD0 8F828B28 */  lw     $v0, %got(expr_count)($gp)
/* 00446DD4 90420000 */  lbu   $v0, ($v0)
/* 00446DD8 2841000A */  slti  $at, $v0, 0xa
/* 00446DDC 1020000A */  beqz  $at, .L00446E08
/* 00446DE0 244F0001 */   addiu $t7, $v0, 1
/* 00446DE4 8F818B28 */  lw     $at, %got(expr_count)($gp)
/* 00446DE8 8F988B28 */  lw     $t8, %got(expr_count)($gp)
/* 00446DEC 8F888BAC */  lw     $t0, %got(exprs)($gp)
/* 00446DF0 A02F0000 */  sb    $t7, ($at)
/* 00446DF4 93180000 */  lbu   $t8, ($t8)
/* 00446DF8 2508FFFC */  addiu $t0, $t0, -4
/* 00446DFC 0018C880 */  sll   $t9, $t8, 2
/* 00446E00 03284821 */  addu  $t1, $t9, $t0
/* 00446E04 AD330000 */  sw    $s3, ($t1)
.L00446E08:
/* 00446E08 02601025 */  move  $v0, $s3
.L00446E0C:
/* 00446E0C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00446E10 8FB00018 */  lw    $s0, 0x18($sp)
/* 00446E14 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00446E18 8FB20020 */  lw    $s2, 0x20($sp)
/* 00446E1C 8FB30024 */  lw    $s3, 0x24($sp)
/* 00446E20 03E00008 */  jr    $ra
/* 00446E24 27BD0030 */   addiu $sp, $sp, 0x30
    .type cse, @function
    .size cse, .-cse
    .end cse

glabel overlap
    .ent overlap
    # 0040EC54 func_0040EC54
    # 0042A91C pass_in_register
    # 00447150 check_vreg
    # 0044747C find_vreg_mtag
    # 004481CC uses
    # 00448584 add_store
/* 00446E28 908E0020 */  lbu   $t6, 0x20($a0)
/* 00446E2C 24030047 */  li    $v1, 71
/* 00446E30 546E0004 */  bnel  $v1, $t6, .L00446E44
/* 00446E34 8C82002C */   lw    $v0, 0x2c($a0)
/* 00446E38 10000002 */  b     .L00446E44
/* 00446E3C 8C820030 */   lw    $v0, 0x30($a0)
/* 00446E40 8C82002C */  lw    $v0, 0x2c($a0)
.L00446E44:
/* 00446E44 90AF0020 */  lbu   $t7, 0x20($a1)
/* 00446E48 546F0004 */  bnel  $v1, $t7, .L00446E5C
/* 00446E4C 8CA3002C */   lw    $v1, 0x2c($a1)
/* 00446E50 10000002 */  b     .L00446E5C
/* 00446E54 8CA30030 */   lw    $v1, 0x30($a1)
/* 00446E58 8CA3002C */  lw    $v1, 0x2c($a1)
.L00446E5C:
/* 00446E5C 8CB80028 */  lw    $t8, 0x28($a1)
/* 00446E60 0078C821 */  addu  $t9, $v1, $t8
/* 00446E64 0059302A */  slt   $a2, $v0, $t9
/* 00446E68 38C60001 */  xori  $a2, $a2, 1
/* 00446E6C 2CC60001 */  sltiu $a2, $a2, 1
/* 00446E70 10C00006 */  beqz  $a2, .L00446E8C
/* 00446E74 00000000 */   nop   
/* 00446E78 8C880028 */  lw    $t0, 0x28($a0)
/* 00446E7C 00484821 */  addu  $t1, $v0, $t0
/* 00446E80 0069302A */  slt   $a2, $v1, $t1
/* 00446E84 38C60001 */  xori  $a2, $a2, 1
/* 00446E88 2CC60001 */  sltiu $a2, $a2, 1
.L00446E8C:
/* 00446E8C 03E00008 */  jr    $ra
/* 00446E90 00C01025 */   move  $v0, $a2
    .type overlap, @function
    .size overlap, .-overlap
    .end overlap

glabel free_tree_and_cse
    .ent free_tree_and_cse
    # 00434E4C fold1
    # 004432FC translate
    # 00446C08 cse
    # 00446E94 free_tree_and_cse
/* 00446E94 3C1C0FBE */  .cpload $t9
/* 00446E98 279C8BBC */  
/* 00446E9C 0399E021 */  
/* 00446EA0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00446EA4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00446EA8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00446EAC 948E0014 */  lhu   $t6, 0x14($a0)
/* 00446EB0 00802825 */  move  $a1, $a0
/* 00446EB4 25CFFFFF */  addiu $t7, $t6, -1
/* 00446EB8 31F8FFFF */  andi  $t8, $t7, 0xffff
/* 00446EBC 170000A0 */  bnez  $t8, .L00447140
/* 00446EC0 A48F0014 */   sh    $t7, 0x14($a0)
/* 00446EC4 90880020 */  lbu   $t0, 0x20($a0)
/* 00446EC8 2519FFE0 */  addiu $t9, $t0, -0x20
/* 00446ECC 2F290040 */  sltiu $t1, $t9, 0x40
/* 00446ED0 11200009 */  beqz  $t1, .L00446EF8
/* 00446ED4 00000000 */   nop   
/* 00446ED8 8F8C8038 */  lw    $t4, %got(D_10016994)($gp)
/* 00446EDC 00195143 */  sra   $t2, $t9, 5
/* 00446EE0 000A5880 */  sll   $t3, $t2, 2
/* 00446EE4 258C6994 */  addiu $t4, %lo(D_10016994) # addiu $t4, $t4, 0x6994
/* 00446EE8 018B6821 */  addu  $t5, $t4, $t3
/* 00446EEC 8DAE0000 */  lw    $t6, ($t5)
/* 00446EF0 032E7804 */  sllv  $t7, $t6, $t9
/* 00446EF4 29E90000 */  slti  $t1, $t7, 0
.L00446EF8:
/* 00446EF8 11200031 */  beqz  $t1, .L00446FC0
/* 00446EFC 00000000 */   nop   
/* 00446F00 8F868B2C */  lw     $a2, %got(load_count)($gp)
/* 00446F04 90C60000 */  lbu   $a2, ($a2)
/* 00446F08 10C0005B */  beqz  $a2, .L00447078
/* 00446F0C 30C70003 */   andi  $a3, $a2, 3
/* 00446F10 00073823 */  negu  $a3, $a3
/* 00446F14 10E0000F */  beqz  $a3, .L00446F54
/* 00446F18 00C01825 */   move  $v1, $a2
/* 00446F1C 8F8C8BB0 */  lw     $t4, %got(loads)($gp)
/* 00446F20 00065080 */  sll   $t2, $a2, 2
/* 00446F24 00E62021 */  addu  $a0, $a3, $a2
/* 00446F28 258CFFFC */  addiu $t4, $t4, -4
/* 00446F2C 014C1021 */  addu  $v0, $t2, $t4
.L00446F30:
/* 00446F30 8C4B0000 */  lw    $t3, ($v0)
/* 00446F34 2463FFFF */  addiu $v1, $v1, -1
/* 00446F38 14AB0002 */  bne   $a1, $t3, .L00446F44
/* 00446F3C 00000000 */   nop   
/* 00446F40 AC400000 */  sw    $zero, ($v0)
.L00446F44:
/* 00446F44 1483FFFA */  bne   $a0, $v1, .L00446F30
/* 00446F48 2442FFFC */   addiu $v0, $v0, -4
/* 00446F4C 5060004B */  beql  $v1, $zero, .L0044707C
/* 00446F50 8CA40000 */   lw    $a0, ($a1)
.L00446F54:
/* 00446F54 8F8E8BB0 */  lw     $t6, %got(loads)($gp)
/* 00446F58 00036880 */  sll   $t5, $v1, 2
/* 00446F5C 8F838BB0 */  lw     $v1, %got(loads)($gp)
/* 00446F60 25CEFFFC */  addiu $t6, $t6, -4
/* 00446F64 01AE1021 */  addu  $v0, $t5, $t6
/* 00446F68 2463FFFC */  addiu $v1, $v1, -4
/* 00446F6C 8C590000 */  lw    $t9, ($v0)
.L00446F70:
/* 00446F70 54B90003 */  bnel  $a1, $t9, .L00446F80
/* 00446F74 8C4FFFFC */   lw    $t7, -4($v0)
/* 00446F78 AC400000 */  sw    $zero, ($v0)
/* 00446F7C 8C4FFFFC */  lw    $t7, -4($v0)
.L00446F80:
/* 00446F80 54AF0003 */  bnel  $a1, $t7, .L00446F90
/* 00446F84 8C58FFF8 */   lw    $t8, -8($v0)
/* 00446F88 AC40FFFC */  sw    $zero, -4($v0)
/* 00446F8C 8C58FFF8 */  lw    $t8, -8($v0)
.L00446F90:
/* 00446F90 54B80003 */  bnel  $a1, $t8, .L00446FA0
/* 00446F94 8C49FFF4 */   lw    $t1, -0xc($v0)
/* 00446F98 AC40FFF8 */  sw    $zero, -8($v0)
/* 00446F9C 8C49FFF4 */  lw    $t1, -0xc($v0)
.L00446FA0:
/* 00446FA0 54A90003 */  bnel  $a1, $t1, .L00446FB0
/* 00446FA4 2442FFF0 */   addiu $v0, $v0, -0x10
/* 00446FA8 AC40FFF4 */  sw    $zero, -0xc($v0)
/* 00446FAC 2442FFF0 */  addiu $v0, $v0, -0x10
.L00446FB0:
/* 00446FB0 5443FFEF */  bnel  $v0, $v1, .L00446F70
/* 00446FB4 8C590000 */   lw    $t9, ($v0)
/* 00446FB8 10000030 */  b     .L0044707C
/* 00446FBC 8CA40000 */   lw    $a0, ($a1)
.L00446FC0:
/* 00446FC0 8F868B28 */  lw     $a2, %got(expr_count)($gp)
/* 00446FC4 90C60000 */  lbu   $a2, ($a2)
/* 00446FC8 10C0002B */  beqz  $a2, .L00447078
/* 00446FCC 30C70003 */   andi  $a3, $a2, 3
/* 00446FD0 00073823 */  negu  $a3, $a3
/* 00446FD4 10E0000F */  beqz  $a3, .L00447014
/* 00446FD8 00C01825 */   move  $v1, $a2
/* 00446FDC 8F8C8BAC */  lw     $t4, %got(exprs)($gp)
/* 00446FE0 00065080 */  sll   $t2, $a2, 2
/* 00446FE4 00E62021 */  addu  $a0, $a3, $a2
/* 00446FE8 258CFFFC */  addiu $t4, $t4, -4
/* 00446FEC 014C1021 */  addu  $v0, $t2, $t4
.L00446FF0:
/* 00446FF0 8C4B0000 */  lw    $t3, ($v0)
/* 00446FF4 2463FFFF */  addiu $v1, $v1, -1
/* 00446FF8 14AB0002 */  bne   $a1, $t3, .L00447004
/* 00446FFC 00000000 */   nop   
/* 00447000 AC400000 */  sw    $zero, ($v0)
.L00447004:
/* 00447004 1483FFFA */  bne   $a0, $v1, .L00446FF0
/* 00447008 2442FFFC */   addiu $v0, $v0, -4
/* 0044700C 5060001B */  beql  $v1, $zero, .L0044707C
/* 00447010 8CA40000 */   lw    $a0, ($a1)
.L00447014:
/* 00447014 8F8E8BAC */  lw     $t6, %got(exprs)($gp)
/* 00447018 00036880 */  sll   $t5, $v1, 2
/* 0044701C 8F838BAC */  lw     $v1, %got(exprs)($gp)
/* 00447020 25CEFFFC */  addiu $t6, $t6, -4
/* 00447024 01AE1021 */  addu  $v0, $t5, $t6
/* 00447028 2463FFFC */  addiu $v1, $v1, -4
/* 0044702C 8C590000 */  lw    $t9, ($v0)
.L00447030:
/* 00447030 54B90003 */  bnel  $a1, $t9, .L00447040
/* 00447034 8C4FFFFC */   lw    $t7, -4($v0)
/* 00447038 AC400000 */  sw    $zero, ($v0)
/* 0044703C 8C4FFFFC */  lw    $t7, -4($v0)
.L00447040:
/* 00447040 54AF0003 */  bnel  $a1, $t7, .L00447050
/* 00447044 8C58FFF8 */   lw    $t8, -8($v0)
/* 00447048 AC40FFFC */  sw    $zero, -4($v0)
/* 0044704C 8C58FFF8 */  lw    $t8, -8($v0)
.L00447050:
/* 00447050 54B80003 */  bnel  $a1, $t8, .L00447060
/* 00447054 8C49FFF4 */   lw    $t1, -0xc($v0)
/* 00447058 AC40FFF8 */  sw    $zero, -8($v0)
/* 0044705C 8C49FFF4 */  lw    $t1, -0xc($v0)
.L00447060:
/* 00447060 54A90003 */  bnel  $a1, $t1, .L00447070
/* 00447064 2442FFF0 */   addiu $v0, $v0, -0x10
/* 00447068 AC40FFF4 */  sw    $zero, -0xc($v0)
/* 0044706C 2442FFF0 */  addiu $v0, $v0, -0x10
.L00447070:
/* 00447070 5443FFEF */  bnel  $v0, $v1, .L00447030
/* 00447074 8C590000 */   lw    $t9, ($v0)
.L00447078:
/* 00447078 8CA40000 */  lw    $a0, ($a1)
.L0044707C:
/* 0044707C 2D0A0080 */  sltiu $t2, $t0, 0x80
/* 00447080 50800014 */  beql  $a0, $zero, .L004470D4
/* 00447084 8CA40004 */   lw    $a0, 4($a1)
/* 00447088 11400009 */  beqz  $t2, .L004470B0
/* 0044708C 00000000 */   nop   
/* 00447090 8F8D8038 */  lw    $t5, %got(D_10016984)($gp)
/* 00447094 00086143 */  sra   $t4, $t0, 5
/* 00447098 000C5880 */  sll   $t3, $t4, 2
/* 0044709C 25AD6984 */  addiu $t5, %lo(D_10016984) # addiu $t5, $t5, 0x6984
/* 004470A0 01AB7021 */  addu  $t6, $t5, $t3
/* 004470A4 8DD90000 */  lw    $t9, ($t6)
/* 004470A8 01197804 */  sllv  $t7, $t9, $t0
/* 004470AC 29EA0000 */  slti  $t2, $t7, 0
.L004470B0:
/* 004470B0 55400008 */  bnel  $t2, $zero, .L004470D4
/* 004470B4 8CA40004 */   lw    $a0, 4($a1)
/* 004470B8 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 004470BC AFA50020 */  sw    $a1, 0x20($sp)
/* 004470C0 0320F809 */  jalr  $t9
/* 004470C4 00000000 */   nop   
/* 004470C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004470CC 8FA50020 */  lw    $a1, 0x20($sp)
/* 004470D0 8CA40004 */  lw    $a0, 4($a1)
.L004470D4:
/* 004470D4 10800015 */  beqz  $a0, .L0044712C
/* 004470D8 00000000 */   nop   
/* 004470DC 90A90020 */  lbu   $t1, 0x20($a1)
/* 004470E0 2D2C00A0 */  sltiu $t4, $t1, 0xa0
/* 004470E4 11800009 */  beqz  $t4, .L0044710C
/* 004470E8 00000000 */   nop   
/* 004470EC 8F8E8038 */  lw    $t6, %got(D_10016970)($gp)
/* 004470F0 00096943 */  sra   $t5, $t1, 5
/* 004470F4 000D5880 */  sll   $t3, $t5, 2
/* 004470F8 25CE6970 */  addiu $t6, %lo(D_10016970) # addiu $t6, $t6, 0x6970
/* 004470FC 01CBC821 */  addu  $t9, $t6, $t3
/* 00447100 8F2F0000 */  lw    $t7, ($t9)
/* 00447104 012FC004 */  sllv  $t8, $t7, $t1
/* 00447108 2B0C0000 */  slti  $t4, $t8, 0
.L0044710C:
/* 0044710C 15800007 */  bnez  $t4, .L0044712C
/* 00447110 00000000 */   nop   
/* 00447114 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 00447118 AFA50020 */  sw    $a1, 0x20($sp)
/* 0044711C 0320F809 */  jalr  $t9
/* 00447120 00000000 */   nop   
/* 00447124 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00447128 8FA50020 */  lw    $a1, 0x20($sp)
.L0044712C:
/* 0044712C 8F998670 */  lw    $t9, %call16(free_node)($gp)
/* 00447130 00A02025 */  move  $a0, $a1
/* 00447134 0320F809 */  jalr  $t9
/* 00447138 00000000 */   nop   
/* 0044713C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00447140:
/* 00447140 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00447144 27BD0020 */  addiu $sp, $sp, 0x20
/* 00447148 03E00008 */  jr    $ra
/* 0044714C 00000000 */   nop   
    .type free_tree_and_cse, @function
    .size free_tree_and_cse, .-free_tree_and_cse
    .end free_tree_and_cse

glabel check_vreg
    .ent check_vreg
    # 004432FC translate
    # 00447768 check_reg
/* 00447150 3C1C0FBE */  .cpload $t9
/* 00447154 279C8900 */  
/* 00447158 0399E021 */  
/* 0044715C 27BDFF38 */  addiu $sp, $sp, -0xc8
/* 00447160 AFB400BC */  sw    $s4, 0xbc($sp)
/* 00447164 8F948B20 */  lw     $s4, %got(vreg_count)($gp)
/* 00447168 AFB300B8 */  sw    $s3, 0xb8($sp)
/* 0044716C 00809825 */  move  $s3, $a0
/* 00447170 8E940000 */  lw    $s4, ($s4)
/* 00447174 AFBF00C4 */  sw    $ra, 0xc4($sp)
/* 00447178 AFBC00C0 */  sw    $gp, 0xc0($sp)
/* 0044717C 2694FFFF */  addiu $s4, $s4, -1
/* 00447180 AFB200B4 */  sw    $s2, 0xb4($sp)
/* 00447184 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 00447188 AFB000AC */  sw    $s0, 0xac($sp)
/* 0044718C 068000B2 */  bltz  $s4, .L00447458
/* 00447190 AFA500CC */   sw    $a1, 0xcc($sp)
/* 00447194 00008025 */  move  $s0, $zero
/* 00447198 26940001 */  addiu $s4, $s4, 1
/* 0044719C 8F928BBC */  lw     $s2, %got(vregs)($gp)
.L004471A0:
/* 004471A0 8E510000 */  lw    $s1, ($s2)
/* 004471A4 522000AA */  beql  $s1, $zero, .L00447450
/* 004471A8 26100001 */   addiu $s0, $s0, 1
/* 004471AC 8E2E0024 */  lw    $t6, 0x24($s1)
/* 004471B0 8E6F0024 */  lw    $t7, 0x24($s3)
/* 004471B4 55CF00A6 */  bnel  $t6, $t7, .L00447450
/* 004471B8 26100001 */   addiu $s0, $s0, 1
/* 004471BC 8F998600 */  lw    $t9, %call16(overlap)($gp)
/* 004471C0 02602025 */  move  $a0, $s3
/* 004471C4 02202825 */  move  $a1, $s1
/* 004471C8 0320F809 */  jalr  $t9
/* 004471CC 00000000 */   nop   
/* 004471D0 1040009E */  beqz  $v0, .L0044744C
/* 004471D4 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 004471D8 92380021 */  lbu   $t8, 0x21($s1)
/* 004471DC 92690021 */  lbu   $t1, 0x21($s3)
/* 004471E0 24040004 */  li    $a0, 4
/* 004471E4 0018CE00 */  sll   $t9, $t8, 0x18
/* 004471E8 00095600 */  sll   $t2, $t1, 0x18
/* 004471EC 000A5F42 */  srl   $t3, $t2, 0x1d
/* 004471F0 00194742 */  srl   $t0, $t9, 0x1d
/* 004471F4 510B003F */  beql  $t0, $t3, .L004472F4
/* 004471F8 8E38002C */   lw    $t8, 0x2c($s1)
/* 004471FC 8F8C8038 */  lw    $t4, %got(RO_1000DD08)($gp)
/* 00447200 240508D0 */  li    $a1, 2256
/* 00447204 03A07825 */  move  $t7, $sp
/* 00447208 258CDD08 */  addiu $t4, %lo(RO_1000DD08) # addiu $t4, $t4, -0x22f8
/* 0044720C 25980048 */  addiu $t8, $t4, 0x48
.L00447210:
/* 00447210 898E0000 */  lwl   $t6, ($t4)
/* 00447214 998E0003 */  lwr   $t6, 3($t4)
/* 00447218 258C000C */  addiu $t4, $t4, 0xc
/* 0044721C 25EF000C */  addiu $t7, $t7, 0xc
/* 00447220 A9EEFFFC */  swl   $t6, -4($t7)
/* 00447224 B9EEFFFF */  swr   $t6, -1($t7)
/* 00447228 898DFFF8 */  lwl   $t5, -8($t4)
/* 0044722C 998DFFFB */  lwr   $t5, -5($t4)
/* 00447230 A9ED0000 */  swl   $t5, ($t7)
/* 00447234 B9ED0003 */  swr   $t5, 3($t7)
/* 00447238 898EFFFC */  lwl   $t6, -4($t4)
/* 0044723C 998EFFFF */  lwr   $t6, -1($t4)
/* 00447240 A9EE0004 */  swl   $t6, 4($t7)
/* 00447244 1598FFF2 */  bne   $t4, $t8, .L00447210
/* 00447248 B9EE0007 */   swr   $t6, 7($t7)
/* 0044724C 898E0000 */  lwl   $t6, ($t4)
/* 00447250 998E0003 */  lwr   $t6, 3($t4)
/* 00447254 8F998038 */  lw    $t9, %got(RO_1000DCB8)($gp)
/* 00447258 03A04025 */  move  $t0, $sp
/* 0044725C A9EE0008 */  swl   $t6, 8($t7)
/* 00447260 B9EE000B */  swr   $t6, 0xb($t7)
/* 00447264 898D0004 */  lwl   $t5, 4($t4)
/* 00447268 998D0007 */  lwr   $t5, 7($t4)
/* 0044726C 2739DCB8 */  addiu $t9, %lo(RO_1000DCB8) # addiu $t9, $t9, -0x2348
/* 00447270 272B0048 */  addiu $t3, $t9, 0x48
/* 00447274 A9ED000C */  swl   $t5, 0xc($t7)
/* 00447278 B9ED000F */  swr   $t5, 0xf($t7)
.L0044727C:
/* 0044727C 8B2A0000 */  lwl   $t2, ($t9)
/* 00447280 9B2A0003 */  lwr   $t2, 3($t9)
/* 00447284 2739000C */  addiu $t9, $t9, 0xc
/* 00447288 2508000C */  addiu $t0, $t0, 0xc
/* 0044728C A90A004C */  swl   $t2, 0x4c($t0)
/* 00447290 B90A004F */  swr   $t2, 0x4f($t0)
/* 00447294 8B29FFF8 */  lwl   $t1, -8($t9)
/* 00447298 9B29FFFB */  lwr   $t1, -5($t9)
/* 0044729C A9090050 */  swl   $t1, 0x50($t0)
/* 004472A0 B9090053 */  swr   $t1, 0x53($t0)
/* 004472A4 8B2AFFFC */  lwl   $t2, -4($t9)
/* 004472A8 9B2AFFFF */  lwr   $t2, -1($t9)
/* 004472AC A90A0054 */  swl   $t2, 0x54($t0)
/* 004472B0 172BFFF2 */  bne   $t9, $t3, .L0044727C
/* 004472B4 B90A0057 */   swr   $t2, 0x57($t0)
/* 004472B8 8B2A0000 */  lwl   $t2, ($t9)
/* 004472BC 9B2A0003 */  lwr   $t2, 3($t9)
/* 004472C0 A90A0058 */  swl   $t2, 0x58($t0)
/* 004472C4 B90A005B */  swr   $t2, 0x5b($t0)
/* 004472C8 8B290004 */  lwl   $t1, 4($t9)
/* 004472CC 9B290007 */  lwr   $t1, 7($t9)
/* 004472D0 A909005C */  swl   $t1, 0x5c($t0)
/* 004472D4 B909005F */  swr   $t1, 0x5f($t0)
/* 004472D8 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004472DC 8FA7000C */  lw    $a3, 0xc($sp)
/* 004472E0 8FA60008 */  lw    $a2, 8($sp)
/* 004472E4 0320F809 */  jalr  $t9
/* 004472E8 00000000 */   nop   
/* 004472EC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004472F0 8E38002C */  lw    $t8, 0x2c($s1)
.L004472F4:
/* 004472F4 8E6C002C */  lw    $t4, 0x2c($s3)
/* 004472F8 24040004 */  li    $a0, 4
/* 004472FC 170C0005 */  bne   $t8, $t4, .L00447314
/* 00447300 00000000 */   nop   
/* 00447304 8E2F0028 */  lw    $t7, 0x28($s1)
/* 00447308 8E6D0028 */  lw    $t5, 0x28($s3)
/* 0044730C 51ED003F */  beql  $t7, $t5, .L0044740C
/* 00447310 93A900CF */   lbu   $t1, 0xcf($sp)
.L00447314:
/* 00447314 8F8E8038 */  lw    $t6, %got(RO_1000DC68)($gp)
/* 00447318 240508D5 */  li    $a1, 2261
/* 0044731C 03A04025 */  move  $t0, $sp
/* 00447320 25CEDC68 */  addiu $t6, %lo(RO_1000DC68) # addiu $t6, $t6, -0x2398
/* 00447324 25C90048 */  addiu $t1, $t6, 0x48
.L00447328:
/* 00447328 89D90000 */  lwl   $t9, ($t6)
/* 0044732C 99D90003 */  lwr   $t9, 3($t6)
/* 00447330 25CE000C */  addiu $t6, $t6, 0xc
/* 00447334 2508000C */  addiu $t0, $t0, 0xc
/* 00447338 A919FFFC */  swl   $t9, -4($t0)
/* 0044733C B919FFFF */  swr   $t9, -1($t0)
/* 00447340 89CBFFF8 */  lwl   $t3, -8($t6)
/* 00447344 99CBFFFB */  lwr   $t3, -5($t6)
/* 00447348 A90B0000 */  swl   $t3, ($t0)
/* 0044734C B90B0003 */  swr   $t3, 3($t0)
/* 00447350 89D9FFFC */  lwl   $t9, -4($t6)
/* 00447354 99D9FFFF */  lwr   $t9, -1($t6)
/* 00447358 A9190004 */  swl   $t9, 4($t0)
/* 0044735C 15C9FFF2 */  bne   $t6, $t1, .L00447328
/* 00447360 B9190007 */   swr   $t9, 7($t0)
/* 00447364 89D90000 */  lwl   $t9, ($t6)
/* 00447368 99D90003 */  lwr   $t9, 3($t6)
/* 0044736C 8F8A8038 */  lw    $t2, %got(RO_1000DC18)($gp)
/* 00447370 03A07825 */  move  $t7, $sp
/* 00447374 A9190008 */  swl   $t9, 8($t0)
/* 00447378 B919000B */  swr   $t9, 0xb($t0)
/* 0044737C 89CB0004 */  lwl   $t3, 4($t6)
/* 00447380 99CB0007 */  lwr   $t3, 7($t6)
/* 00447384 254ADC18 */  addiu $t2, %lo(RO_1000DC18) # addiu $t2, $t2, -0x23e8
/* 00447388 254D0048 */  addiu $t5, $t2, 0x48
/* 0044738C A90B000C */  swl   $t3, 0xc($t0)
/* 00447390 B90B000F */  swr   $t3, 0xf($t0)
.L00447394:
/* 00447394 894C0000 */  lwl   $t4, ($t2)
/* 00447398 994C0003 */  lwr   $t4, 3($t2)
/* 0044739C 254A000C */  addiu $t2, $t2, 0xc
/* 004473A0 25EF000C */  addiu $t7, $t7, 0xc
/* 004473A4 A9EC004C */  swl   $t4, 0x4c($t7)
/* 004473A8 B9EC004F */  swr   $t4, 0x4f($t7)
/* 004473AC 8958FFF8 */  lwl   $t8, -8($t2)
/* 004473B0 9958FFFB */  lwr   $t8, -5($t2)
/* 004473B4 A9F80050 */  swl   $t8, 0x50($t7)
/* 004473B8 B9F80053 */  swr   $t8, 0x53($t7)
/* 004473BC 894CFFFC */  lwl   $t4, -4($t2)
/* 004473C0 994CFFFF */  lwr   $t4, -1($t2)
/* 004473C4 A9EC0054 */  swl   $t4, 0x54($t7)
/* 004473C8 154DFFF2 */  bne   $t2, $t5, .L00447394
/* 004473CC B9EC0057 */   swr   $t4, 0x57($t7)
/* 004473D0 894C0000 */  lwl   $t4, ($t2)
/* 004473D4 994C0003 */  lwr   $t4, 3($t2)
/* 004473D8 A9EC0058 */  swl   $t4, 0x58($t7)
/* 004473DC B9EC005B */  swr   $t4, 0x5b($t7)
/* 004473E0 89580004 */  lwl   $t8, 4($t2)
/* 004473E4 99580007 */  lwr   $t8, 7($t2)
/* 004473E8 A9F8005C */  swl   $t8, 0x5c($t7)
/* 004473EC B9F8005F */  swr   $t8, 0x5f($t7)
/* 004473F0 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004473F4 8FA7000C */  lw    $a3, 0xc($sp)
/* 004473F8 8FA60008 */  lw    $a2, 8($sp)
/* 004473FC 0320F809 */  jalr  $t9
/* 00447400 00000000 */   nop   
/* 00447404 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00447408 93A900CF */  lbu   $t1, 0xcf($sp)
.L0044740C:
/* 0044740C 1520000D */  bnez  $t1, .L00447444
/* 00447410 00000000 */   nop   
/* 00447414 926E0021 */  lbu   $t6, 0x21($s3)
/* 00447418 8E420000 */  lw    $v0, ($s2)
/* 0044741C 240A0001 */  li    $t2, 1
/* 00447420 31C8FF1F */  andi  $t0, $t6, 0xff1f
/* 00447424 350B0060 */  ori   $t3, $t0, 0x60
/* 00447428 A26B0021 */  sb    $t3, 0x21($s3)
/* 0044742C 8E390030 */  lw    $t9, 0x30($s1)
/* 00447430 AE79002C */  sw    $t9, 0x2c($s3)
/* 00447434 904D001A */  lbu   $t5, 0x1a($v0)
/* 00447438 15A00002 */  bnez  $t5, .L00447444
/* 0044743C 00000000 */   nop   
/* 00447440 A04A001A */  sb    $t2, 0x1a($v0)
.L00447444:
/* 00447444 10000005 */  b     .L0044745C
/* 00447448 24020001 */   li    $v0, 1
.L0044744C:
/* 0044744C 26100001 */  addiu $s0, $s0, 1
.L00447450:
/* 00447450 1614FF53 */  bne   $s0, $s4, .L004471A0
/* 00447454 26520004 */   addiu $s2, $s2, 4
.L00447458:
/* 00447458 00001025 */  move  $v0, $zero
.L0044745C:
/* 0044745C 8FBF00C4 */  lw    $ra, 0xc4($sp)
/* 00447460 8FB000AC */  lw    $s0, 0xac($sp)
/* 00447464 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 00447468 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 0044746C 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 00447470 8FB400BC */  lw    $s4, 0xbc($sp)
/* 00447474 03E00008 */  jr    $ra
/* 00447478 27BD00C8 */   addiu $sp, $sp, 0xc8
    .type check_vreg, @function
    .size check_vreg, .-check_vreg
    .end check_vreg

glabel find_vreg_mtag
    .ent find_vreg_mtag
    # 00447768 check_reg
/* 0044747C 3C1C0FBE */  .cpload $t9
/* 00447480 279C85D4 */  
/* 00447484 0399E021 */  
/* 00447488 27BDFF38 */  addiu $sp, $sp, -0xc8
/* 0044748C AFB400BC */  sw    $s4, 0xbc($sp)
/* 00447490 8F948B20 */  lw     $s4, %got(vreg_count)($gp)
/* 00447494 AFB300B8 */  sw    $s3, 0xb8($sp)
/* 00447498 00809825 */  move  $s3, $a0
/* 0044749C 8E940000 */  lw    $s4, ($s4)
/* 004474A0 AFBF00C4 */  sw    $ra, 0xc4($sp)
/* 004474A4 AFBC00C0 */  sw    $gp, 0xc0($sp)
/* 004474A8 2694FFFF */  addiu $s4, $s4, -1
/* 004474AC AFB200B4 */  sw    $s2, 0xb4($sp)
/* 004474B0 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 004474B4 068000A4 */  bltz  $s4, .L00447748
/* 004474B8 AFB000AC */   sw    $s0, 0xac($sp)
/* 004474BC 00008825 */  move  $s1, $zero
/* 004474C0 26940001 */  addiu $s4, $s4, 1
/* 004474C4 8F928BBC */  lw     $s2, %got(vregs)($gp)
.L004474C8:
/* 004474C8 8E500000 */  lw    $s0, ($s2)
/* 004474CC 5200009C */  beql  $s0, $zero, .L00447740
/* 004474D0 26310001 */   addiu $s1, $s1, 1
/* 004474D4 8E0E0024 */  lw    $t6, 0x24($s0)
/* 004474D8 8E6F0024 */  lw    $t7, 0x24($s3)
/* 004474DC 55CF0098 */  bnel  $t6, $t7, .L00447740
/* 004474E0 26310001 */   addiu $s1, $s1, 1
/* 004474E4 8F998600 */  lw    $t9, %call16(overlap)($gp)
/* 004474E8 02602025 */  move  $a0, $s3
/* 004474EC 02002825 */  move  $a1, $s0
/* 004474F0 0320F809 */  jalr  $t9
/* 004474F4 00000000 */   nop   
/* 004474F8 10400090 */  beqz  $v0, .L0044773C
/* 004474FC 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00447500 92180021 */  lbu   $t8, 0x21($s0)
/* 00447504 92690021 */  lbu   $t1, 0x21($s3)
/* 00447508 24040004 */  li    $a0, 4
/* 0044750C 0018CE00 */  sll   $t9, $t8, 0x18
/* 00447510 00095600 */  sll   $t2, $t1, 0x18
/* 00447514 000A5F42 */  srl   $t3, $t2, 0x1d
/* 00447518 00194742 */  srl   $t0, $t9, 0x1d
/* 0044751C 510B003F */  beql  $t0, $t3, .L0044761C
/* 00447520 8E18002C */   lw    $t8, 0x2c($s0)
/* 00447524 8F8C8038 */  lw    $t4, %got(RO_1000DE48)($gp)
/* 00447528 240508F4 */  li    $a1, 2292
/* 0044752C 03A07825 */  move  $t7, $sp
/* 00447530 258CDE48 */  addiu $t4, %lo(RO_1000DE48) # addiu $t4, $t4, -0x21b8
/* 00447534 25980048 */  addiu $t8, $t4, 0x48
.L00447538:
/* 00447538 898E0000 */  lwl   $t6, ($t4)
/* 0044753C 998E0003 */  lwr   $t6, 3($t4)
/* 00447540 258C000C */  addiu $t4, $t4, 0xc
/* 00447544 25EF000C */  addiu $t7, $t7, 0xc
/* 00447548 A9EEFFFC */  swl   $t6, -4($t7)
/* 0044754C B9EEFFFF */  swr   $t6, -1($t7)
/* 00447550 898DFFF8 */  lwl   $t5, -8($t4)
/* 00447554 998DFFFB */  lwr   $t5, -5($t4)
/* 00447558 A9ED0000 */  swl   $t5, ($t7)
/* 0044755C B9ED0003 */  swr   $t5, 3($t7)
/* 00447560 898EFFFC */  lwl   $t6, -4($t4)
/* 00447564 998EFFFF */  lwr   $t6, -1($t4)
/* 00447568 A9EE0004 */  swl   $t6, 4($t7)
/* 0044756C 1598FFF2 */  bne   $t4, $t8, .L00447538
/* 00447570 B9EE0007 */   swr   $t6, 7($t7)
/* 00447574 898E0000 */  lwl   $t6, ($t4)
/* 00447578 998E0003 */  lwr   $t6, 3($t4)
/* 0044757C 8F998038 */  lw    $t9, %got(RO_1000DDF8)($gp)
/* 00447580 03A04025 */  move  $t0, $sp
/* 00447584 A9EE0008 */  swl   $t6, 8($t7)
/* 00447588 B9EE000B */  swr   $t6, 0xb($t7)
/* 0044758C 898D0004 */  lwl   $t5, 4($t4)
/* 00447590 998D0007 */  lwr   $t5, 7($t4)
/* 00447594 2739DDF8 */  addiu $t9, %lo(RO_1000DDF8) # addiu $t9, $t9, -0x2208
/* 00447598 272B0048 */  addiu $t3, $t9, 0x48
/* 0044759C A9ED000C */  swl   $t5, 0xc($t7)
/* 004475A0 B9ED000F */  swr   $t5, 0xf($t7)
.L004475A4:
/* 004475A4 8B2A0000 */  lwl   $t2, ($t9)
/* 004475A8 9B2A0003 */  lwr   $t2, 3($t9)
/* 004475AC 2739000C */  addiu $t9, $t9, 0xc
/* 004475B0 2508000C */  addiu $t0, $t0, 0xc
/* 004475B4 A90A004C */  swl   $t2, 0x4c($t0)
/* 004475B8 B90A004F */  swr   $t2, 0x4f($t0)
/* 004475BC 8B29FFF8 */  lwl   $t1, -8($t9)
/* 004475C0 9B29FFFB */  lwr   $t1, -5($t9)
/* 004475C4 A9090050 */  swl   $t1, 0x50($t0)
/* 004475C8 B9090053 */  swr   $t1, 0x53($t0)
/* 004475CC 8B2AFFFC */  lwl   $t2, -4($t9)
/* 004475D0 9B2AFFFF */  lwr   $t2, -1($t9)
/* 004475D4 A90A0054 */  swl   $t2, 0x54($t0)
/* 004475D8 172BFFF2 */  bne   $t9, $t3, .L004475A4
/* 004475DC B90A0057 */   swr   $t2, 0x57($t0)
/* 004475E0 8B2A0000 */  lwl   $t2, ($t9)
/* 004475E4 9B2A0003 */  lwr   $t2, 3($t9)
/* 004475E8 A90A0058 */  swl   $t2, 0x58($t0)
/* 004475EC B90A005B */  swr   $t2, 0x5b($t0)
/* 004475F0 8B290004 */  lwl   $t1, 4($t9)
/* 004475F4 9B290007 */  lwr   $t1, 7($t9)
/* 004475F8 A909005C */  swl   $t1, 0x5c($t0)
/* 004475FC B909005F */  swr   $t1, 0x5f($t0)
/* 00447600 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00447604 8FA7000C */  lw    $a3, 0xc($sp)
/* 00447608 8FA60008 */  lw    $a2, 8($sp)
/* 0044760C 0320F809 */  jalr  $t9
/* 00447610 00000000 */   nop   
/* 00447614 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00447618 8E18002C */  lw    $t8, 0x2c($s0)
.L0044761C:
/* 0044761C 8E6C002C */  lw    $t4, 0x2c($s3)
/* 00447620 24040004 */  li    $a0, 4
/* 00447624 170C0005 */  bne   $t8, $t4, .L0044763C
/* 00447628 00000000 */   nop   
/* 0044762C 8E0F0028 */  lw    $t7, 0x28($s0)
/* 00447630 8E6D0028 */  lw    $t5, 0x28($s3)
/* 00447634 51ED003F */  beql  $t7, $t5, .L00447734
/* 00447638 8E090034 */   lw    $t1, 0x34($s0)
.L0044763C:
/* 0044763C 8F8E8038 */  lw    $t6, %got(RO_1000DDA8)($gp)
/* 00447640 240508F9 */  li    $a1, 2297
/* 00447644 03A04025 */  move  $t0, $sp
/* 00447648 25CEDDA8 */  addiu $t6, %lo(RO_1000DDA8) # addiu $t6, $t6, -0x2258
/* 0044764C 25C90048 */  addiu $t1, $t6, 0x48
.L00447650:
/* 00447650 89D90000 */  lwl   $t9, ($t6)
/* 00447654 99D90003 */  lwr   $t9, 3($t6)
/* 00447658 25CE000C */  addiu $t6, $t6, 0xc
/* 0044765C 2508000C */  addiu $t0, $t0, 0xc
/* 00447660 A919FFFC */  swl   $t9, -4($t0)
/* 00447664 B919FFFF */  swr   $t9, -1($t0)
/* 00447668 89CBFFF8 */  lwl   $t3, -8($t6)
/* 0044766C 99CBFFFB */  lwr   $t3, -5($t6)
/* 00447670 A90B0000 */  swl   $t3, ($t0)
/* 00447674 B90B0003 */  swr   $t3, 3($t0)
/* 00447678 89D9FFFC */  lwl   $t9, -4($t6)
/* 0044767C 99D9FFFF */  lwr   $t9, -1($t6)
/* 00447680 A9190004 */  swl   $t9, 4($t0)
/* 00447684 15C9FFF2 */  bne   $t6, $t1, .L00447650
/* 00447688 B9190007 */   swr   $t9, 7($t0)
/* 0044768C 89D90000 */  lwl   $t9, ($t6)
/* 00447690 99D90003 */  lwr   $t9, 3($t6)
/* 00447694 8F8A8038 */  lw    $t2, %got(RO_1000DD58)($gp)
/* 00447698 03A07825 */  move  $t7, $sp
/* 0044769C A9190008 */  swl   $t9, 8($t0)
/* 004476A0 B919000B */  swr   $t9, 0xb($t0)
/* 004476A4 89CB0004 */  lwl   $t3, 4($t6)
/* 004476A8 99CB0007 */  lwr   $t3, 7($t6)
/* 004476AC 254ADD58 */  addiu $t2, %lo(RO_1000DD58) # addiu $t2, $t2, -0x22a8
/* 004476B0 254D0048 */  addiu $t5, $t2, 0x48
/* 004476B4 A90B000C */  swl   $t3, 0xc($t0)
/* 004476B8 B90B000F */  swr   $t3, 0xf($t0)
.L004476BC:
/* 004476BC 894C0000 */  lwl   $t4, ($t2)
/* 004476C0 994C0003 */  lwr   $t4, 3($t2)
/* 004476C4 254A000C */  addiu $t2, $t2, 0xc
/* 004476C8 25EF000C */  addiu $t7, $t7, 0xc
/* 004476CC A9EC004C */  swl   $t4, 0x4c($t7)
/* 004476D0 B9EC004F */  swr   $t4, 0x4f($t7)
/* 004476D4 8958FFF8 */  lwl   $t8, -8($t2)
/* 004476D8 9958FFFB */  lwr   $t8, -5($t2)
/* 004476DC A9F80050 */  swl   $t8, 0x50($t7)
/* 004476E0 B9F80053 */  swr   $t8, 0x53($t7)
/* 004476E4 894CFFFC */  lwl   $t4, -4($t2)
/* 004476E8 994CFFFF */  lwr   $t4, -1($t2)
/* 004476EC A9EC0054 */  swl   $t4, 0x54($t7)
/* 004476F0 154DFFF2 */  bne   $t2, $t5, .L004476BC
/* 004476F4 B9EC0057 */   swr   $t4, 0x57($t7)
/* 004476F8 894C0000 */  lwl   $t4, ($t2)
/* 004476FC 994C0003 */  lwr   $t4, 3($t2)
/* 00447700 A9EC0058 */  swl   $t4, 0x58($t7)
/* 00447704 B9EC005B */  swr   $t4, 0x5b($t7)
/* 00447708 89580004 */  lwl   $t8, 4($t2)
/* 0044770C 99580007 */  lwr   $t8, 7($t2)
/* 00447710 A9F8005C */  swl   $t8, 0x5c($t7)
/* 00447714 B9F8005F */  swr   $t8, 0x5f($t7)
/* 00447718 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044771C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00447720 8FA60008 */  lw    $a2, 8($sp)
/* 00447724 0320F809 */  jalr  $t9
/* 00447728 00000000 */   nop   
/* 0044772C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00447730 8E090034 */  lw    $t1, 0x34($s0)
.L00447734:
/* 00447734 10000004 */  b     .L00447748
/* 00447738 AE690030 */   sw    $t1, 0x30($s3)
.L0044773C:
/* 0044773C 26310001 */  addiu $s1, $s1, 1
.L00447740:
/* 00447740 1634FF61 */  bne   $s1, $s4, .L004474C8
/* 00447744 26520004 */   addiu $s2, $s2, 4
.L00447748:
/* 00447748 8FBF00C4 */  lw    $ra, 0xc4($sp)
/* 0044774C 8FB000AC */  lw    $s0, 0xac($sp)
/* 00447750 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 00447754 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 00447758 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 0044775C 8FB400BC */  lw    $s4, 0xbc($sp)
/* 00447760 03E00008 */  jr    $ra
/* 00447764 27BD00C8 */   addiu $sp, $sp, 0xc8
    .type find_vreg_mtag, @function
    .size find_vreg_mtag, .-find_vreg_mtag
    .end find_vreg_mtag

glabel check_reg
    .ent check_reg
    # 004432FC translate
    # 00448880 is_reg
/* 00447768 3C1C0FBE */  .cpload $t9
/* 0044776C 279C82E8 */  
/* 00447770 0399E021 */  
/* 00447774 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00447778 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044777C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00447780 AFB00014 */  sw    $s0, 0x14($sp)
/* 00447784 90820021 */  lbu   $v0, 0x21($a0)
/* 00447788 240E0006 */  li    $t6, 6
/* 0044778C 00808025 */  move  $s0, $a0
/* 00447790 00021600 */  sll   $v0, $v0, 0x18
/* 00447794 00021742 */  srl   $v0, $v0, 0x1d
/* 00447798 004E02B4 */  teq   $v0, $t6, 0xa
/* 0044779C 24010005 */  li    $at, 5
/* 004477A0 1441000F */  bne   $v0, $at, .L004477E0
/* 004477A4 2C480020 */   sltiu $t0, $v0, 0x20
/* 004477A8 8F99848C */  lw    $t9, %call16(check_amt)($gp)
/* 004477AC 02002025 */  move  $a0, $s0
/* 004477B0 0320F809 */  jalr  $t9
/* 004477B4 00000000 */   nop   
/* 004477B8 2401FFFF */  li    $at, -1
/* 004477BC 1041002C */  beq   $v0, $at, .L00447870
/* 004477C0 8FBC0018 */   lw    $gp, 0x18($sp)
/* 004477C4 920F0021 */  lbu   $t7, 0x21($s0)
/* 004477C8 2401FF1F */  li    $at, -225
/* 004477CC AE02002C */  sw    $v0, 0x2c($s0)
/* 004477D0 01E1C024 */  and   $t8, $t7, $at
/* 004477D4 37190060 */  ori   $t9, $t8, 0x60
/* 004477D8 10000025 */  b     .L00447870
/* 004477DC A2190021 */   sb    $t9, 0x21($s0)
.L004477E0:
/* 004477E0 00084823 */  negu  $t1, $t0
/* 004477E4 3C016000 */  lui   $at, 0x6000
/* 004477E8 01215024 */  and   $t2, $t1, $at
/* 004477EC 004A5804 */  sllv  $t3, $t2, $v0
/* 004477F0 05610017 */  bgez  $t3, .L00447850
/* 004477F4 24010004 */   li    $at, 4
/* 004477F8 8F8C8A3C */  lw     $t4, %got(ignore_vreg)($gp)
/* 004477FC 918C0000 */  lbu   $t4, ($t4)
/* 00447800 15800008 */  bnez  $t4, .L00447824
/* 00447804 00000000 */   nop   
/* 00447808 8F998608 */  lw    $t9, %call16(check_vreg)($gp)
/* 0044780C 02002025 */  move  $a0, $s0
/* 00447810 00002825 */  move  $a1, $zero
/* 00447814 0320F809 */  jalr  $t9
/* 00447818 00000000 */   nop   
/* 0044781C 10000014 */  b     .L00447870
/* 00447820 8FBC0018 */   lw    $gp, 0x18($sp)
.L00447824:
/* 00447824 8F9981B4 */  lw    $t9, %call16(get_domtag)($gp)
/* 00447828 0320F809 */  jalr  $t9
/* 0044782C 00000000 */   nop   
/* 00447830 1040000F */  beqz  $v0, .L00447870
/* 00447834 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00447838 8F99860C */  lw    $t9, %call16(find_vreg_mtag)($gp)
/* 0044783C 02002025 */  move  $a0, $s0
/* 00447840 0320F809 */  jalr  $t9
/* 00447844 00000000 */   nop   
/* 00447848 10000009 */  b     .L00447870
/* 0044784C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00447850:
/* 00447850 54410008 */  bnel  $v0, $at, .L00447874
/* 00447854 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00447858 8F99859C */  lw    $t9, %call16(get_mtag)($gp)
/* 0044785C 8E040024 */  lw    $a0, 0x24($s0)
/* 00447860 0320F809 */  jalr  $t9
/* 00447864 00000000 */   nop   
/* 00447868 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044786C AE020030 */  sw    $v0, 0x30($s0)
.L00447870:
/* 00447870 8FBF001C */  lw    $ra, 0x1c($sp)
.L00447874:
/* 00447874 8FB00014 */  lw    $s0, 0x14($sp)
/* 00447878 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044787C 03E00008 */  jr    $ra
/* 00447880 00000000 */   nop   
    .type check_reg, @function
    .size check_reg, .-check_reg
    .end check_reg

glabel assign_vreg
    .ent assign_vreg
    # 004432FC translate
/* 00447884 3C1C0FBE */  .cpload $t9
/* 00447888 279C81CC */  
/* 0044788C 0399E021 */  
/* 00447890 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 00447894 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00447898 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0044789C AFA500BC */  sw    $a1, 0xbc($sp)
/* 004478A0 90870021 */  lbu   $a3, 0x21($a0)
/* 004478A4 00803025 */  move  $a2, $a0
/* 004478A8 00E01025 */  move  $v0, $a3
/* 004478AC 3042001F */  andi  $v0, $v0, 0x1f
/* 004478B0 2C410011 */  sltiu $at, $v0, 0x11
/* 004478B4 10200115 */  beqz  $at, .L00447D0C
/* 004478B8 00000000 */   nop   
/* 004478BC 8F818038 */  lw    $at, %got(jtbl_1000DFD8)($gp)
/* 004478C0 00027080 */  sll   $t6, $v0, 2
/* 004478C4 002E0821 */  addu  $at, $at, $t6
/* 004478C8 8C2EDFD8 */  lw    $t6, %lo(jtbl_1000DFD8)($at)
/* 004478CC 01DC7021 */  addu  $t6, $t6, $gp
/* 004478D0 01C00008 */  jr    $t6
/* 004478D4 00000000 */   nop   
.L004478D8:
/* 004478D8 8F888B1C */  lw     $t0, %got(fp_vreg_offset)($gp)
/* 004478DC 8F8F8B14 */  lw     $t7, %got(max_fp_vreg_offset)($gp)
/* 004478E0 8D030000 */  lw    $v1, ($t0)
/* 004478E4 8DEF0000 */  lw    $t7, ($t7)
/* 004478E8 006F082B */  sltu  $at, $v1, $t7
/* 004478EC 50200146 */  beql  $at, $zero, .L00447E08
/* 004478F0 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 004478F4 8F848B20 */  lw     $a0, %got(vreg_count)($gp)
/* 004478F8 8F998BBC */  lw     $t9, %got(vregs)($gp)
/* 004478FC 00075E00 */  sll   $t3, $a3, 0x18
/* 00447900 8C820000 */  lw    $v0, ($a0)
/* 00447904 000B6742 */  srl   $t4, $t3, 0x1d
/* 00447908 24010002 */  li    $at, 2
/* 0044790C 0002C080 */  sll   $t8, $v0, 2
/* 00447910 03194821 */  addu  $t1, $t8, $t9
/* 00447914 AD260000 */  sw    $a2, ($t1)
/* 00447918 244A0001 */  addiu $t2, $v0, 1
/* 0044791C 10A0001E */  beqz  $a1, .L00447998
/* 00447920 AC8A0000 */   sw    $t2, ($a0)
/* 00447924 5581001D */  bnel  $t4, $at, .L0044799C
/* 00447928 8CD90030 */   lw    $t9, 0x30($a2)
/* 0044792C 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 00447930 00C02025 */  move  $a0, $a2
/* 00447934 AFA600B8 */  sw    $a2, 0xb8($sp)
/* 00447938 0320F809 */  jalr  $t9
/* 0044793C 00000000 */   nop   
/* 00447940 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00447944 304300FF */  andi  $v1, $v0, 0xff
/* 00447948 24010048 */  li    $at, 72
/* 0044794C 8FA600B8 */  lw    $a2, 0xb8($sp)
/* 00447950 1061000E */  beq   $v1, $at, .L0044798C
/* 00447954 8F888B1C */   lw     $t0, %got(fp_vreg_offset)($gp)
/* 00447958 2C61002C */  sltiu $at, $v1, 0x2c
/* 0044795C 5420000C */  bnel  $at, $zero, .L00447990
/* 00447960 8D020000 */   lw    $v0, ($t0)
/* 00447964 8F8D8A00 */  lw     $t5, %got(n_fp_parm_regs)($gp)
/* 00447968 0003C080 */  sll   $t8, $v1, 2
/* 0044796C 8DAD0000 */  lw    $t5, ($t5)
/* 00447970 000D7040 */  sll   $t6, $t5, 1
/* 00447974 25CF002A */  addiu $t7, $t6, 0x2a
/* 00447978 01E3082B */  sltu  $at, $t7, $v1
/* 0044797C 54200004 */  bnel  $at, $zero, .L00447990
/* 00447980 8D020000 */   lw    $v0, ($t0)
/* 00447984 1000011F */  b     .L00447E04
/* 00447988 ACD80030 */   sw    $t8, 0x30($a2)
.L0044798C:
/* 0044798C 8D020000 */  lw    $v0, ($t0)
.L00447990:
/* 00447990 10000006 */  b     .L004479AC
/* 00447994 ACC20030 */   sw    $v0, 0x30($a2)
.L00447998:
/* 00447998 8CD90030 */  lw    $t9, 0x30($a2)
.L0044799C:
/* 0044799C 2409FFFF */  li    $t1, -1
/* 004479A0 00601025 */  move  $v0, $v1
/* 004479A4 032902B6 */  tne   $t9, $t1, 0xa
/* 004479A8 ACC30030 */  sw    $v1, 0x30($a2)
.L004479AC:
/* 004479AC 244A0008 */  addiu $t2, $v0, 8
/* 004479B0 10000114 */  b     .L00447E04
/* 004479B4 AD0A0000 */   sw    $t2, ($t0)
.L004479B8:
/* 004479B8 8CCB0028 */  lw    $t3, 0x28($a2)
/* 004479BC 240C0005 */  li    $t4, 5
/* 004479C0 8F888B18 */  lw     $t0, %got(vreg_offset)($gp)
/* 004479C4 016C02B0 */  tge   $t3, $t4, 0xa
/* 004479C8 8F8D8B10 */  lw     $t5, %got(max_vreg_offset)($gp)
/* 004479CC 8D030000 */  lw    $v1, ($t0)
/* 004479D0 8DAD0000 */  lw    $t5, ($t5)
/* 004479D4 006D082B */  sltu  $at, $v1, $t5
/* 004479D8 5020010B */  beql  $at, $zero, .L00447E08
/* 004479DC 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 004479E0 8F848B20 */  lw     $a0, %got(vreg_count)($gp)
/* 004479E4 8F8F8BBC */  lw     $t7, %got(vregs)($gp)
/* 004479E8 00075600 */  sll   $t2, $a3, 0x18
/* 004479EC 8C820000 */  lw    $v0, ($a0)
/* 004479F0 000A5F42 */  srl   $t3, $t2, 0x1d
/* 004479F4 24010002 */  li    $at, 2
/* 004479F8 00027080 */  sll   $t6, $v0, 2
/* 004479FC 01CFC021 */  addu  $t8, $t6, $t7
/* 00447A00 AF060000 */  sw    $a2, ($t8)
/* 00447A04 24590001 */  addiu $t9, $v0, 1
/* 00447A08 14A00005 */  bnez  $a1, .L00447A20
/* 00447A0C AC990000 */   sw    $t9, ($a0)
/* 00447A10 8F898B38 */  lw     $t1, %got(has_entry)($gp)
/* 00447A14 91290000 */  lbu   $t1, ($t1)
/* 00447A18 51200021 */  beql  $t1, $zero, .L00447AA0
/* 00447A1C 8CD80030 */   lw    $t8, 0x30($a2)
.L00447A20:
/* 00447A20 5561001F */  bnel  $t3, $at, .L00447AA0
/* 00447A24 8CD80030 */   lw    $t8, 0x30($a2)
/* 00447A28 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 00447A2C 00C02025 */  move  $a0, $a2
/* 00447A30 A3A500BF */  sb    $a1, 0xbf($sp)
/* 00447A34 0320F809 */  jalr  $t9
/* 00447A38 AFA600B8 */   sw    $a2, 0xb8($sp)
/* 00447A3C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00447A40 304300FF */  andi  $v1, $v0, 0xff
/* 00447A44 24010048 */  li    $at, 72
/* 00447A48 93A500BF */  lbu   $a1, 0xbf($sp)
/* 00447A4C 8FA600B8 */  lw    $a2, 0xb8($sp)
/* 00447A50 14610007 */  bne   $v1, $at, .L00447A70
/* 00447A54 8F888B18 */   lw     $t0, %got(vreg_offset)($gp)
/* 00447A58 8CCC0030 */  lw    $t4, 0x30($a2)
/* 00447A5C 240DFFFF */  li    $t5, -1
/* 00447A60 018D02B6 */  tne   $t4, $t5, 0xa
/* 00447A64 8D020000 */  lw    $v0, ($t0)
/* 00447A68 10000011 */  b     .L00447AB0
/* 00447A6C ACC20030 */   sw    $v0, 0x30($a2)
.L00447A70:
/* 00447A70 8CC20030 */  lw    $v0, 0x30($a2)
/* 00447A74 00037880 */  sll   $t7, $v1, 2
/* 00447A78 24440001 */  addiu $a0, $v0, 1
/* 00447A7C 2C840001 */  sltiu $a0, $a0, 1
/* 00447A80 14800003 */  bnez  $a0, .L00447A90
/* 00447A84 00037080 */   sll   $t6, $v1, 2
/* 00447A88 01C22026 */  xor   $a0, $t6, $v0
/* 00447A8C 2C840001 */  sltiu $a0, $a0, 1
.L00447A90:
/* 00447A90 008002B4 */  teq   $a0, $zero, 0xa
/* 00447A94 100000DB */  b     .L00447E04
/* 00447A98 ACCF0030 */   sw    $t7, 0x30($a2)
/* 00447A9C 8CD80030 */  lw    $t8, 0x30($a2)
.L00447AA0:
/* 00447AA0 2419FFFF */  li    $t9, -1
/* 00447AA4 00601025 */  move  $v0, $v1
/* 00447AA8 031902B6 */  tne   $t8, $t9, 0xa
/* 00447AAC ACC30030 */  sw    $v1, 0x30($a2)
.L00447AB0:
/* 00447AB0 8F8A8A6C */  lw     $t2, %got(use_real_fp_for_proc)($gp)
/* 00447AB4 24490004 */  addiu $t1, $v0, 4
/* 00447AB8 AD090000 */  sw    $t1, ($t0)
/* 00447ABC 914A0000 */  lbu   $t2, ($t2)
/* 00447AC0 11400003 */  beqz  $t2, .L00447AD0
/* 00447AC4 00000000 */   nop   
/* 00447AC8 54A00006 */  bnel  $a1, $zero, .L00447AE4
/* 00447ACC 8D020000 */   lw    $v0, ($t0)
.L00447AD0:
/* 00447AD0 8F8B8B38 */  lw     $t3, %got(has_entry)($gp)
/* 00447AD4 916B0000 */  lbu   $t3, ($t3)
/* 00447AD8 516000CB */  beql  $t3, $zero, .L00447E08
/* 00447ADC 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 00447AE0 8D020000 */  lw    $v0, ($t0)
.L00447AE4:
/* 00447AE4 24010034 */  li    $at, 52
/* 00447AE8 144100C6 */  bne   $v0, $at, .L00447E04
/* 00447AEC 244C0004 */   addiu $t4, $v0, 4
/* 00447AF0 100000C4 */  b     .L00447E04
/* 00447AF4 AD0C0000 */   sw    $t4, ($t0)
.L00447AF8:
/* 00447AF8 8F8D8038 */  lw    $t5, %got(RO_1000DF88)($gp)
/* 00447AFC 24040004 */  li    $a0, 4
/* 00447B00 24050953 */  li    $a1, 2387
/* 00447B04 25ADDF88 */  addiu $t5, %lo(RO_1000DF88) # addiu $t5, $t5, -0x2078
/* 00447B08 25B90048 */  addiu $t9, $t5, 0x48
/* 00447B0C 03A0C025 */  move  $t8, $sp
.L00447B10:
/* 00447B10 89AF0000 */  lwl   $t7, ($t5)
/* 00447B14 99AF0003 */  lwr   $t7, 3($t5)
/* 00447B18 25AD000C */  addiu $t5, $t5, 0xc
/* 00447B1C 2718000C */  addiu $t8, $t8, 0xc
/* 00447B20 AB0FFFFC */  swl   $t7, -4($t8)
/* 00447B24 BB0FFFFF */  swr   $t7, -1($t8)
/* 00447B28 89AEFFF8 */  lwl   $t6, -8($t5)
/* 00447B2C 99AEFFFB */  lwr   $t6, -5($t5)
/* 00447B30 AB0E0000 */  swl   $t6, ($t8)
/* 00447B34 BB0E0003 */  swr   $t6, 3($t8)
/* 00447B38 89AFFFFC */  lwl   $t7, -4($t5)
/* 00447B3C 99AFFFFF */  lwr   $t7, -1($t5)
/* 00447B40 AB0F0004 */  swl   $t7, 4($t8)
/* 00447B44 15B9FFF2 */  bne   $t5, $t9, .L00447B10
/* 00447B48 BB0F0007 */   swr   $t7, 7($t8)
/* 00447B4C 89AF0000 */  lwl   $t7, ($t5)
/* 00447B50 99AF0003 */  lwr   $t7, 3($t5)
/* 00447B54 8F898038 */  lw    $t1, %got(RO_1000DF38)($gp)
/* 00447B58 03A06025 */  move  $t4, $sp
/* 00447B5C AB0F0008 */  swl   $t7, 8($t8)
/* 00447B60 BB0F000B */  swr   $t7, 0xb($t8)
/* 00447B64 89AE0004 */  lwl   $t6, 4($t5)
/* 00447B68 99AE0007 */  lwr   $t6, 7($t5)
/* 00447B6C 2529DF38 */  addiu $t1, %lo(RO_1000DF38) # addiu $t1, $t1, -0x20c8
/* 00447B70 25390048 */  addiu $t9, $t1, 0x48
/* 00447B74 AB0E000C */  swl   $t6, 0xc($t8)
/* 00447B78 BB0E000F */  swr   $t6, 0xf($t8)
.L00447B7C:
/* 00447B7C 892B0000 */  lwl   $t3, ($t1)
/* 00447B80 992B0003 */  lwr   $t3, 3($t1)
/* 00447B84 2529000C */  addiu $t1, $t1, 0xc
/* 00447B88 258C000C */  addiu $t4, $t4, 0xc
/* 00447B8C A98B004C */  swl   $t3, 0x4c($t4)
/* 00447B90 B98B004F */  swr   $t3, 0x4f($t4)
/* 00447B94 892AFFF8 */  lwl   $t2, -8($t1)
/* 00447B98 992AFFFB */  lwr   $t2, -5($t1)
/* 00447B9C A98A0050 */  swl   $t2, 0x50($t4)
/* 00447BA0 B98A0053 */  swr   $t2, 0x53($t4)
/* 00447BA4 892BFFFC */  lwl   $t3, -4($t1)
/* 00447BA8 992BFFFF */  lwr   $t3, -1($t1)
/* 00447BAC A98B0054 */  swl   $t3, 0x54($t4)
/* 00447BB0 1539FFF2 */  bne   $t1, $t9, .L00447B7C
/* 00447BB4 B98B0057 */   swr   $t3, 0x57($t4)
/* 00447BB8 892B0000 */  lwl   $t3, ($t1)
/* 00447BBC 992B0003 */  lwr   $t3, 3($t1)
/* 00447BC0 A98B0058 */  swl   $t3, 0x58($t4)
/* 00447BC4 B98B005B */  swr   $t3, 0x5b($t4)
/* 00447BC8 892A0004 */  lwl   $t2, 4($t1)
/* 00447BCC 992A0007 */  lwr   $t2, 7($t1)
/* 00447BD0 A98A005C */  swl   $t2, 0x5c($t4)
/* 00447BD4 B98A005F */  swr   $t2, 0x5f($t4)
/* 00447BD8 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00447BDC 8FA7000C */  lw    $a3, 0xc($sp)
/* 00447BE0 8FA60008 */  lw    $a2, 8($sp)
/* 00447BE4 0320F809 */  jalr  $t9
/* 00447BE8 00000000 */   nop   
/* 00447BEC 10000085 */  b     .L00447E04
/* 00447BF0 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00447BF4:
/* 00447BF4 8F8D89D8 */  lw     $t5, %got(opcode_arch)($gp)
/* 00447BF8 24010001 */  li    $at, 1
/* 00447BFC 91AD0000 */  lbu   $t5, ($t5)
/* 00447C00 55A10081 */  bnel  $t5, $at, .L00447E08
/* 00447C04 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 00447C08 8CD80028 */  lw    $t8, 0x28($a2)
/* 00447C0C 240E0009 */  li    $t6, 9
/* 00447C10 8F888B18 */  lw     $t0, %got(vreg_offset)($gp)
/* 00447C14 030E02B0 */  tge   $t8, $t6, 0xa
/* 00447C18 8F8F8B10 */  lw     $t7, %got(max_vreg_offset)($gp)
/* 00447C1C 8D030000 */  lw    $v1, ($t0)
/* 00447C20 8DEF0000 */  lw    $t7, ($t7)
/* 00447C24 006F082B */  sltu  $at, $v1, $t7
/* 00447C28 50200077 */  beql  $at, $zero, .L00447E08
/* 00447C2C 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 00447C30 8F848B20 */  lw     $a0, %got(vreg_count)($gp)
/* 00447C34 8F898BBC */  lw     $t1, %got(vregs)($gp)
/* 00447C38 00076E00 */  sll   $t5, $a3, 0x18
/* 00447C3C 8C820000 */  lw    $v0, ($a0)
/* 00447C40 000DC742 */  srl   $t8, $t5, 0x1d
/* 00447C44 24010002 */  li    $at, 2
/* 00447C48 0002C880 */  sll   $t9, $v0, 2
/* 00447C4C 03296021 */  addu  $t4, $t9, $t1
/* 00447C50 AD860000 */  sw    $a2, ($t4)
/* 00447C54 244A0001 */  addiu $t2, $v0, 1
/* 00447C58 14A00005 */  bnez  $a1, .L00447C70
/* 00447C5C AC8A0000 */   sw    $t2, ($a0)
/* 00447C60 8F8B8B38 */  lw     $t3, %got(has_entry)($gp)
/* 00447C64 916B0000 */  lbu   $t3, ($t3)
/* 00447C68 51600021 */  beql  $t3, $zero, .L00447CF0
/* 00447C6C 8CCC0030 */   lw    $t4, 0x30($a2)
.L00447C70:
/* 00447C70 5701001F */  bnel  $t8, $at, .L00447CF0
/* 00447C74 8CCC0030 */   lw    $t4, 0x30($a2)
/* 00447C78 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 00447C7C 00C02025 */  move  $a0, $a2
/* 00447C80 AFA600B8 */  sw    $a2, 0xb8($sp)
/* 00447C84 0320F809 */  jalr  $t9
/* 00447C88 00000000 */   nop   
/* 00447C8C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00447C90 304300FF */  andi  $v1, $v0, 0xff
/* 00447C94 24010048 */  li    $at, 72
/* 00447C98 8FA600B8 */  lw    $a2, 0xb8($sp)
/* 00447C9C 14610007 */  bne   $v1, $at, .L00447CBC
/* 00447CA0 8F888B18 */   lw     $t0, %got(vreg_offset)($gp)
/* 00447CA4 8CCE0030 */  lw    $t6, 0x30($a2)
/* 00447CA8 240FFFFF */  li    $t7, -1
/* 00447CAC 01CF02B6 */  tne   $t6, $t7, 0xa
/* 00447CB0 8D020000 */  lw    $v0, ($t0)
/* 00447CB4 10000012 */  b     .L00447D00
/* 00447CB8 ACC20030 */   sw    $v0, 0x30($a2)
.L00447CBC:
/* 00447CBC 8CC20030 */  lw    $v0, 0x30($a2)
/* 00447CC0 00034880 */  sll   $t1, $v1, 2
/* 00447CC4 24440001 */  addiu $a0, $v0, 1
/* 00447CC8 2C840001 */  sltiu $a0, $a0, 1
/* 00447CCC 54800005 */  bnel  $a0, $zero, .L00447CE4
/* 00447CD0 008002B4 */   teq   $a0, $zero, 0xa
/* 00447CD4 0003C880 */  sll   $t9, $v1, 2
/* 00447CD8 03222026 */  xor   $a0, $t9, $v0
/* 00447CDC 2C840001 */  sltiu $a0, $a0, 1
/* 00447CE0 008002B4 */  teq   $a0, $zero, 0xa
.L00447CE4:
/* 00447CE4 10000047 */  b     .L00447E04
/* 00447CE8 ACC90030 */   sw    $t1, 0x30($a2)
/* 00447CEC 8CCC0030 */  lw    $t4, 0x30($a2)
.L00447CF0:
/* 00447CF0 240AFFFF */  li    $t2, -1
/* 00447CF4 00601025 */  move  $v0, $v1
/* 00447CF8 018A02B6 */  tne   $t4, $t2, 0xa
/* 00447CFC ACC30030 */  sw    $v1, 0x30($a2)
.L00447D00:
/* 00447D00 244B0008 */  addiu $t3, $v0, 8
/* 00447D04 1000003F */  b     .L00447E04
/* 00447D08 AD0B0000 */   sw    $t3, ($t0)
.L00447D0C:
/* 00447D0C 8F8D8038 */  lw    $t5, %got(RO_1000DEE8)($gp)
/* 00447D10 24040004 */  li    $a0, 4
/* 00447D14 24050971 */  li    $a1, 2417
/* 00447D18 25ADDEE8 */  addiu $t5, %lo(RO_1000DEE8) # addiu $t5, $t5, -0x2118
/* 00447D1C 25B90048 */  addiu $t9, $t5, 0x48
/* 00447D20 03A07825 */  move  $t7, $sp
.L00447D24:
/* 00447D24 89AE0000 */  lwl   $t6, ($t5)
/* 00447D28 99AE0003 */  lwr   $t6, 3($t5)
/* 00447D2C 25AD000C */  addiu $t5, $t5, 0xc
/* 00447D30 25EF000C */  addiu $t7, $t7, 0xc
/* 00447D34 A9EEFFFC */  swl   $t6, -4($t7)
/* 00447D38 B9EEFFFF */  swr   $t6, -1($t7)
/* 00447D3C 89B8FFF8 */  lwl   $t8, -8($t5)
/* 00447D40 99B8FFFB */  lwr   $t8, -5($t5)
/* 00447D44 A9F80000 */  swl   $t8, ($t7)
/* 00447D48 B9F80003 */  swr   $t8, 3($t7)
/* 00447D4C 89AEFFFC */  lwl   $t6, -4($t5)
/* 00447D50 99AEFFFF */  lwr   $t6, -1($t5)
/* 00447D54 A9EE0004 */  swl   $t6, 4($t7)
/* 00447D58 15B9FFF2 */  bne   $t5, $t9, .L00447D24
/* 00447D5C B9EE0007 */   swr   $t6, 7($t7)
/* 00447D60 89AE0000 */  lwl   $t6, ($t5)
/* 00447D64 99AE0003 */  lwr   $t6, 3($t5)
/* 00447D68 8F898038 */  lw    $t1, %got(RO_1000DE98)($gp)
/* 00447D6C 03A05825 */  move  $t3, $sp
/* 00447D70 A9EE0008 */  swl   $t6, 8($t7)
/* 00447D74 B9EE000B */  swr   $t6, 0xb($t7)
/* 00447D78 89B80004 */  lwl   $t8, 4($t5)
/* 00447D7C 99B80007 */  lwr   $t8, 7($t5)
/* 00447D80 2529DE98 */  addiu $t1, %lo(RO_1000DE98) # addiu $t1, $t1, -0x2168
/* 00447D84 25390048 */  addiu $t9, $t1, 0x48
/* 00447D88 A9F8000C */  swl   $t8, 0xc($t7)
/* 00447D8C B9F8000F */  swr   $t8, 0xf($t7)
.L00447D90:
/* 00447D90 892A0000 */  lwl   $t2, ($t1)
/* 00447D94 992A0003 */  lwr   $t2, 3($t1)
/* 00447D98 2529000C */  addiu $t1, $t1, 0xc
/* 00447D9C 256B000C */  addiu $t3, $t3, 0xc
/* 00447DA0 A96A004C */  swl   $t2, 0x4c($t3)
/* 00447DA4 B96A004F */  swr   $t2, 0x4f($t3)
/* 00447DA8 892CFFF8 */  lwl   $t4, -8($t1)
/* 00447DAC 992CFFFB */  lwr   $t4, -5($t1)
/* 00447DB0 A96C0050 */  swl   $t4, 0x50($t3)
/* 00447DB4 B96C0053 */  swr   $t4, 0x53($t3)
/* 00447DB8 892AFFFC */  lwl   $t2, -4($t1)
/* 00447DBC 992AFFFF */  lwr   $t2, -1($t1)
/* 00447DC0 A96A0054 */  swl   $t2, 0x54($t3)
/* 00447DC4 1539FFF2 */  bne   $t1, $t9, .L00447D90
/* 00447DC8 B96A0057 */   swr   $t2, 0x57($t3)
/* 00447DCC 892A0000 */  lwl   $t2, ($t1)
/* 00447DD0 992A0003 */  lwr   $t2, 3($t1)
/* 00447DD4 A96A0058 */  swl   $t2, 0x58($t3)
/* 00447DD8 B96A005B */  swr   $t2, 0x5b($t3)
/* 00447DDC 892C0004 */  lwl   $t4, 4($t1)
/* 00447DE0 992C0007 */  lwr   $t4, 7($t1)
/* 00447DE4 A96C005C */  swl   $t4, 0x5c($t3)
/* 00447DE8 B96C005F */  swr   $t4, 0x5f($t3)
/* 00447DEC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00447DF0 8FA7000C */  lw    $a3, 0xc($sp)
/* 00447DF4 8FA60008 */  lw    $a2, 8($sp)
/* 00447DF8 0320F809 */  jalr  $t9
/* 00447DFC 00000000 */   nop   
/* 00447E00 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00447E04:
/* 00447E04 8FBF00B4 */  lw    $ra, 0xb4($sp)
.L00447E08:
/* 00447E08 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 00447E0C 03E00008 */  jr    $ra
/* 00447E10 00000000 */   nop   
    .type assign_vreg, @function
    .size assign_vreg, .-assign_vreg
    .end assign_vreg

glabel load_cse
    .ent load_cse
    # 004432FC translate
/* 00447E14 3C1C0FBD */  .cpload $t9
/* 00447E18 279C7C3C */  
/* 00447E1C 0399E021 */  
/* 00447E20 8F8E8920 */  lw     $t6, %got(no_cse_flag)($gp)
/* 00447E24 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00447E28 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00447E2C 8DCE0000 */  lw    $t6, ($t6)
/* 00447E30 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00447E34 00803025 */  move  $a2, $a0
/* 00447E38 59C00004 */  blezl $t6, .L00447E4C
/* 00447E3C 90CF0020 */   lbu   $t7, 0x20($a2)
/* 00447E40 100000DE */  b     .L004481BC
/* 00447E44 00801025 */   move  $v0, $a0
/* 00447E48 90CF0020 */  lbu   $t7, 0x20($a2)
.L00447E4C:
/* 00447E4C 25F8FFE0 */  addiu $t8, $t7, -0x20
/* 00447E50 2F190040 */  sltiu $t9, $t8, 0x40
/* 00447E54 13200009 */  beqz  $t9, .L00447E7C
/* 00447E58 00000000 */   nop   
/* 00447E5C 8F8F8038 */  lw    $t7, %got(D_100169A8)($gp)
/* 00447E60 00186943 */  sra   $t5, $t8, 5
/* 00447E64 000D7080 */  sll   $t6, $t5, 2
/* 00447E68 25EF69A8 */  addiu $t7, %lo(D_100169A8) # addiu $t7, $t7, 0x69a8
/* 00447E6C 01EE6821 */  addu  $t5, $t7, $t6
/* 00447E70 8DAF0000 */  lw    $t7, ($t5)
/* 00447E74 030F7004 */  sllv  $t6, $t7, $t8
/* 00447E78 29D90000 */  slti  $t9, $t6, 0
.L00447E7C:
/* 00447E7C 1320001D */  beqz  $t9, .L00447EF4
/* 00447E80 00000000 */   nop   
/* 00447E84 90C20021 */  lbu   $v0, 0x21($a2)
/* 00447E88 3C016C00 */  lui   $at, 0x6c00
/* 00447E8C 00025600 */  sll   $t2, $v0, 0x18
/* 00447E90 000A5742 */  srl   $t2, $t2, 0x1d
/* 00447E94 2D4F0020 */  sltiu $t7, $t2, 0x20
/* 00447E98 000FC023 */  negu  $t8, $t7
/* 00447E9C 03017024 */  and   $t6, $t8, $at
/* 00447EA0 014E6804 */  sllv  $t5, $t6, $t2
/* 00447EA4 05A10013 */  bgez  $t5, .L00447EF4
/* 00447EA8 00000000 */   nop   
/* 00447EAC 94D90022 */  lhu   $t9, 0x22($a2)
/* 00447EB0 2403000E */  li    $v1, 14
/* 00447EB4 3047001F */  andi  $a3, $v0, 0x1f
/* 00447EB8 332F0001 */  andi  $t7, $t9, 1
/* 00447EBC 15E0000D */  bnez  $t7, .L00447EF4
/* 00447EC0 00000000 */   nop   
/* 00447EC4 14670005 */  bne   $v1, $a3, .L00447EDC
/* 00447EC8 00000000 */   nop   
/* 00447ECC 8CC40028 */  lw    $a0, 0x28($a2)
/* 00447ED0 28810005 */  slti  $at, $a0, 5
/* 00447ED4 14200009 */  bnez  $at, .L00447EFC
/* 00447ED8 00000000 */   nop   
.L00447EDC:
/* 00447EDC 10670005 */  beq   $v1, $a3, .L00447EF4
/* 00447EE0 00000000 */   nop   
/* 00447EE4 8CC40028 */  lw    $a0, 0x28($a2)
/* 00447EE8 28810009 */  slti  $at, $a0, 9
/* 00447EEC 14200003 */  bnez  $at, .L00447EFC
/* 00447EF0 00000000 */   nop   
.L00447EF4:
/* 00447EF4 100000B1 */  b     .L004481BC
/* 00447EF8 00C01025 */   move  $v0, $a2
.L00447EFC:
/* 00447EFC 8F8C8B2C */  lw     $t4, %got(load_count)($gp)
/* 00447F00 918B0000 */  lbu   $t3, ($t4)
/* 00447F04 01602825 */  move  $a1, $t3
/* 00447F08 10A000A1 */  beqz  $a1, .L00448190
/* 00447F0C 30A200FF */   andi  $v0, $a1, 0xff
/* 00447F10 8F8E8BB0 */  lw     $t6, %got(loads)($gp)
/* 00447F14 8F898BB0 */  lw     $t1, %got(loads)($gp)
/* 00447F18 0002C080 */  sll   $t8, $v0, 2
/* 00447F1C 25CEFFFC */  addiu $t6, $t6, -4
/* 00447F20 030E1821 */  addu  $v1, $t8, $t6
/* 00447F24 8F88898C */  lw     $t0, %got(lsb_first)($gp)
/* 00447F28 2529FFFC */  addiu $t1, $t1, -4
/* 00447F2C 8C650000 */  lw    $a1, ($v1)
.L00447F30:
/* 00447F30 2463FFFC */  addiu $v1, $v1, -4
/* 00447F34 10A00094 */  beqz  $a1, .L00448188
/* 00447F38 00000000 */   nop   
/* 00447F3C 90A20021 */  lbu   $v0, 0x21($a1)
/* 00447F40 304D001F */  andi  $t5, $v0, 0x1f
/* 00447F44 14ED0090 */  bne   $a3, $t5, .L00448188
/* 00447F48 00000000 */   nop   
/* 00447F4C 0002CE00 */  sll   $t9, $v0, 0x18
/* 00447F50 00197F42 */  srl   $t7, $t9, 0x1d
/* 00447F54 154F008C */  bne   $t2, $t7, .L00448188
/* 00447F58 00000000 */   nop   
/* 00447F5C 8CD80024 */  lw    $t8, 0x24($a2)
/* 00447F60 8CAE0024 */  lw    $t6, 0x24($a1)
/* 00447F64 170E0088 */  bne   $t8, $t6, .L00448188
/* 00447F68 00000000 */   nop   
/* 00447F6C 91020000 */  lbu   $v0, ($t0)
/* 00447F70 10400005 */  beqz  $v0, .L00447F88
/* 00447F74 00000000 */   nop   
/* 00447F78 8CCD002C */  lw    $t5, 0x2c($a2)
/* 00447F7C 8CB9002C */  lw    $t9, 0x2c($a1)
/* 00447F80 51B9000B */  beql  $t5, $t9, .L00447FB0
/* 00447F84 8CAF0028 */   lw    $t7, 0x28($a1)
.L00447F88:
/* 00447F88 1440007F */  bnez  $v0, .L00448188
/* 00447F8C 00000000 */   nop   
/* 00447F90 8CCF002C */  lw    $t7, 0x2c($a2)
/* 00447F94 8CAE002C */  lw    $t6, 0x2c($a1)
/* 00447F98 8CAD0028 */  lw    $t5, 0x28($a1)
/* 00447F9C 01E4C021 */  addu  $t8, $t7, $a0
/* 00447FA0 01CDC821 */  addu  $t9, $t6, $t5
/* 00447FA4 17190078 */  bne   $t8, $t9, .L00448188
/* 00447FA8 00000000 */   nop   
/* 00447FAC 8CAF0028 */  lw    $t7, 0x28($a1)
.L00447FB0:
/* 00447FB0 148F0075 */  bne   $a0, $t7, .L00448188
/* 00447FB4 00000000 */   nop   
/* 00447FB8 90A20020 */  lbu   $v0, 0x20($a1)
/* 00447FBC 2401007B */  li    $at, 123
/* 00447FC0 5441000C */  bnel  $v0, $at, .L00447FF4
/* 00447FC4 2401003E */   li    $at, 62
/* 00447FC8 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00447FCC 8CA40000 */  lw    $a0, ($a1)
/* 00447FD0 AFA50024 */  sw    $a1, 0x24($sp)
/* 00447FD4 0320F809 */  jalr  $t9
/* 00447FD8 AFA60030 */   sw    $a2, 0x30($sp)
/* 00447FDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00447FE0 8FA50024 */  lw    $a1, 0x24($sp)
/* 00447FE4 8FA60030 */  lw    $a2, 0x30($sp)
/* 00447FE8 1000001B */  b     .L00448058
/* 00447FEC AFA20020 */   sw    $v0, 0x20($sp)
/* 00447FF0 2401003E */  li    $at, 62
.L00447FF4:
/* 00447FF4 1441000B */  bne   $v0, $at, .L00448024
/* 00447FF8 00000000 */   nop   
/* 00447FFC 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00448000 8CA40004 */  lw    $a0, 4($a1)
/* 00448004 AFA50024 */  sw    $a1, 0x24($sp)
/* 00448008 0320F809 */  jalr  $t9
/* 0044800C AFA60030 */   sw    $a2, 0x30($sp)
/* 00448010 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448014 8FA50024 */  lw    $a1, 0x24($sp)
/* 00448018 8FA60030 */  lw    $a2, 0x30($sp)
/* 0044801C 1000000E */  b     .L00448058
/* 00448020 AFA20020 */   sw    $v0, 0x20($sp)
.L00448024:
/* 00448024 14C50003 */  bne   $a2, $a1, .L00448034
/* 00448028 00000000 */   nop   
/* 0044802C 10000063 */  b     .L004481BC
/* 00448030 00C01025 */   move  $v0, $a2
.L00448034:
/* 00448034 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00448038 00A02025 */  move  $a0, $a1
/* 0044803C AFA50024 */  sw    $a1, 0x24($sp)
/* 00448040 0320F809 */  jalr  $t9
/* 00448044 AFA60030 */   sw    $a2, 0x30($sp)
/* 00448048 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044804C 8FA50024 */  lw    $a1, 0x24($sp)
/* 00448050 8FA60030 */  lw    $a2, 0x30($sp)
/* 00448054 AFA20020 */  sw    $v0, 0x20($sp)
.L00448058:
/* 00448058 8F8E89A4 */  lw     $t6, %got(source_language)($gp)
/* 0044805C 24010003 */  li    $at, 3
/* 00448060 8DCE0000 */  lw    $t6, ($t6)
/* 00448064 55C10007 */  bnel  $t6, $at, .L00448084
/* 00448068 8CD90028 */   lw    $t9, 0x28($a2)
/* 0044806C 8CCD0028 */  lw    $t5, 0x28($a2)
/* 00448070 8CB80028 */  lw    $t8, 0x28($a1)
/* 00448074 01B8082A */  slt   $at, $t5, $t8
/* 00448078 14200014 */  bnez  $at, .L004480CC
/* 0044807C 00000000 */   nop   
/* 00448080 8CD90028 */  lw    $t9, 0x28($a2)
.L00448084:
/* 00448084 2B210004 */  slti  $at, $t9, 4
/* 00448088 5020002A */  beql  $at, $zero, .L00448134
/* 0044808C 904D0020 */   lbu   $t5, 0x20($v0)
/* 00448090 90AF0020 */  lbu   $t7, 0x20($a1)
/* 00448094 25EEFFE0 */  addiu $t6, $t7, -0x20
/* 00448098 2DCD0060 */  sltiu $t5, $t6, 0x60
/* 0044809C 11A00009 */  beqz  $t5, .L004480C4
/* 004480A0 00000000 */   nop   
/* 004480A4 8F8F8038 */  lw    $t7, %got(D_1001699C)($gp)
/* 004480A8 000EC143 */  sra   $t8, $t6, 5
/* 004480AC 0018C880 */  sll   $t9, $t8, 2
/* 004480B0 25EF699C */  addiu $t7, %lo(D_1001699C) # addiu $t7, $t7, 0x699c
/* 004480B4 01F9C021 */  addu  $t8, $t7, $t9
/* 004480B8 8F0F0000 */  lw    $t7, ($t8)
/* 004480BC 01CFC804 */  sllv  $t9, $t7, $t6
/* 004480C0 2B2D0000 */  slti  $t5, $t9, 0
.L004480C4:
/* 004480C4 51A0001B */  beql  $t5, $zero, .L00448134
/* 004480C8 904D0020 */   lbu   $t5, 0x20($v0)
.L004480CC:
/* 004480CC 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 004480D0 24040019 */  li    $a0, 25
/* 004480D4 8FA50020 */  lw    $a1, 0x20($sp)
/* 004480D8 0320F809 */  jalr  $t9
/* 004480DC AFA60030 */   sw    $a2, 0x30($sp)
/* 004480E0 8FA60030 */  lw    $a2, 0x30($sp)
/* 004480E4 90430021 */  lbu   $v1, 0x21($v0)
/* 004480E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004480EC 90CE0021 */  lbu   $t6, 0x21($a2)
/* 004480F0 0003CEC0 */  sll   $t9, $v1, 0x1b
/* 004480F4 0019C6C2 */  srl   $t8, $t9, 0x1b
/* 004480F8 01D86826 */  xor   $t5, $t6, $t8
/* 004480FC 31AF001F */  andi  $t7, $t5, 0x1f
/* 00448100 01E3C826 */  xor   $t9, $t7, $v1
/* 00448104 A0590021 */  sb    $t9, 0x21($v0)
/* 00448108 8CCE0028 */  lw    $t6, 0x28($a2)
/* 0044810C 00402025 */  move  $a0, $v0
/* 00448110 000EC0C0 */  sll   $t8, $t6, 3
/* 00448114 AC580024 */  sw    $t8, 0x24($v0)
/* 00448118 8F998628 */  lw    $t9, %call16(translate_cvtl)($gp)
/* 0044811C 0320F809 */  jalr  $t9
/* 00448120 00000000 */   nop   
/* 00448124 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448128 8FA60030 */  lw    $a2, 0x30($sp)
/* 0044812C AFA20020 */  sw    $v0, 0x20($sp)
/* 00448130 904D0020 */  lbu   $t5, 0x20($v0)
.L00448134:
/* 00448134 24010049 */  li    $at, 73
/* 00448138 15A1000C */  bne   $t5, $at, .L0044816C
/* 0044813C 00000000 */   nop   
/* 00448140 90C70021 */  lbu   $a3, 0x21($a2)
/* 00448144 90430021 */  lbu   $v1, 0x21($v0)
/* 00448148 30E7001F */  andi  $a3, $a3, 0x1f
/* 0044814C 306F001F */  andi  $t7, $v1, 0x1f
/* 00448150 10EF0006 */  beq   $a3, $t7, .L0044816C
/* 00448154 0003CEC0 */   sll   $t9, $v1, 0x1b
/* 00448158 001976C2 */  srl   $t6, $t9, 0x1b
/* 0044815C 00EEC026 */  xor   $t8, $a3, $t6
/* 00448160 330D001F */  andi  $t5, $t8, 0x1f
/* 00448164 01A37826 */  xor   $t7, $t5, $v1
/* 00448168 A04F0021 */  sb    $t7, 0x21($v0)
.L0044816C:
/* 0044816C 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00448170 00C02025 */  move  $a0, $a2
/* 00448174 0320F809 */  jalr  $t9
/* 00448178 00000000 */   nop   
/* 0044817C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448180 1000000E */  b     .L004481BC
/* 00448184 8FA20020 */   lw    $v0, 0x20($sp)
.L00448188:
/* 00448188 5469FF69 */  bnel  $v1, $t1, .L00447F30
/* 0044818C 8C650000 */   lw    $a1, ($v1)
.L00448190:
/* 00448190 2961000A */  slti  $at, $t3, 0xa
/* 00448194 10200009 */  beqz  $at, .L004481BC
/* 00448198 00C01025 */   move  $v0, $a2
/* 0044819C 8F8D8BB0 */  lw     $t5, %got(loads)($gp)
/* 004481A0 25790001 */  addiu $t9, $t3, 1
/* 004481A4 332E00FF */  andi  $t6, $t9, 0xff
/* 004481A8 000EC080 */  sll   $t8, $t6, 2
/* 004481AC 25ADFFFC */  addiu $t5, $t5, -4
/* 004481B0 A1990000 */  sb    $t9, ($t4)
/* 004481B4 030D7821 */  addu  $t7, $t8, $t5
/* 004481B8 ADE60000 */  sw    $a2, ($t7)
.L004481BC:
/* 004481BC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004481C0 27BD0030 */  addiu $sp, $sp, 0x30
/* 004481C4 03E00008 */  jr    $ra
/* 004481C8 00000000 */   nop   
    .type load_cse, @function
    .size load_cse, .-load_cse
    .end load_cse

glabel uses
    .ent uses
    # 004481CC uses
    # 00448584 add_store
/* 004481CC 3C1C0FBD */  .cpload $t9
/* 004481D0 279C7884 */  
/* 004481D4 0399E021 */  
/* 004481D8 27BDFF28 */  addiu $sp, $sp, -0xd8
/* 004481DC AFB200B8 */  sw    $s2, 0xb8($sp)
/* 004481E0 AFB100B4 */  sw    $s1, 0xb4($sp)
/* 004481E4 AFB000B0 */  sw    $s0, 0xb0($sp)
/* 004481E8 2CC10010 */  sltiu $at, $a2, 0x10
/* 004481EC 00808025 */  move  $s0, $a0
/* 004481F0 00A08825 */  move  $s1, $a1
/* 004481F4 00C09025 */  move  $s2, $a2
/* 004481F8 AFBF00CC */  sw    $ra, 0xcc($sp)
/* 004481FC AFBC00C8 */  sw    $gp, 0xc8($sp)
/* 00448200 AFB500C4 */  sw    $s5, 0xc4($sp)
/* 00448204 AFB400C0 */  sw    $s4, 0xc0($sp)
/* 00448208 14200003 */  bnez  $at, .L00448218
/* 0044820C AFB300BC */   sw    $s3, 0xbc($sp)
/* 00448210 100000D3 */  b     .L00448560
/* 00448214 24020001 */   li    $v0, 1
.L00448218:
/* 00448218 92020020 */  lbu   $v0, 0x20($s0)
/* 0044821C 24130069 */  li    $s3, 105
/* 00448220 2414007D */  li    $s4, 125
/* 00448224 2C410063 */  sltiu $at, $v0, 0x63
/* 00448228 1420008C */  bnez  $at, .L0044845C
/* 0044822C 24150023 */   li    $s5, 35
/* 00448230 2C41007E */  sltiu $at, $v0, 0x7e
/* 00448234 1420007B */  bnez  $at, .L00448424
/* 00448238 2C41008E */   sltiu $at, $v0, 0x8e
/* 0044823C 142000BD */  bnez  $at, .L00448534
/* 00448240 244DFF7A */   addiu $t5, $v0, -0x86
/* 00448244 244EFF6D */  addiu $t6, $v0, -0x93
/* 00448248 2DC10003 */  sltiu $at, $t6, 3
/* 0044824C 10200036 */  beqz  $at, .L00448328
/* 00448250 00000000 */   nop   
/* 00448254 8F818038 */  lw    $at, %got(jtbl_1000E234)($gp)
/* 00448258 000E7080 */  sll   $t6, $t6, 2
/* 0044825C 002E0821 */  addu  $at, $at, $t6
/* 00448260 8C2EE234 */  lw    $t6, %lo(jtbl_1000E234)($at)
/* 00448264 01DC7021 */  addu  $t6, $t6, $gp
/* 00448268 01C00008 */  jr    $t6
/* 0044826C 00000000 */   nop   
.L00448270:
/* 00448270 922F0021 */  lbu   $t7, 0x21($s1)
/* 00448274 92080021 */  lbu   $t0, 0x21($s0)
/* 00448278 000FC600 */  sll   $t8, $t7, 0x18
/* 0044827C 00084E00 */  sll   $t1, $t0, 0x18
/* 00448280 00095742 */  srl   $t2, $t1, 0x1d
/* 00448284 0018CF42 */  srl   $t9, $t8, 0x1d
/* 00448288 032A1826 */  xor   $v1, $t9, $t2
/* 0044828C 2C630001 */  sltiu $v1, $v1, 1
/* 00448290 1060000E */  beqz  $v1, .L004482CC
/* 00448294 00000000 */   nop   
/* 00448298 8E2B0024 */  lw    $t3, 0x24($s1)
/* 0044829C 8E0C0024 */  lw    $t4, 0x24($s0)
/* 004482A0 016C1826 */  xor   $v1, $t3, $t4
/* 004482A4 2C630001 */  sltiu $v1, $v1, 1
/* 004482A8 10600008 */  beqz  $v1, .L004482CC
/* 004482AC 00000000 */   nop   
/* 004482B0 8F998600 */  lw    $t9, %call16(overlap)($gp)
/* 004482B4 02002025 */  move  $a0, $s0
/* 004482B8 02202825 */  move  $a1, $s1
/* 004482BC 0320F809 */  jalr  $t9
/* 004482C0 00000000 */   nop   
/* 004482C4 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 004482C8 00401825 */  move  $v1, $v0
.L004482CC:
/* 004482CC 100000A4 */  b     .L00448560
/* 004482D0 00601025 */   move  $v0, $v1
.L004482D4:
/* 004482D4 100000A2 */  b     .L00448560
/* 004482D8 00001025 */   move  $v0, $zero
.L004482DC:
/* 004482DC 1000FFCE */  b     .L00448218
/* 004482E0 8E100000 */   lw    $s0, ($s0)
.L004482E4:
/* 004482E4 8F99861C */  lw    $t9, %call16(uses)($gp)
/* 004482E8 8E040000 */  lw    $a0, ($s0)
/* 004482EC 02202825 */  move  $a1, $s1
/* 004482F0 0320F809 */  jalr  $t9
/* 004482F4 26460001 */   addiu $a2, $s2, 1
/* 004482F8 10400003 */  beqz  $v0, .L00448308
/* 004482FC 8FBC00C8 */   lw    $gp, 0xc8($sp)
/* 00448300 10000097 */  b     .L00448560
/* 00448304 24020001 */   li    $v0, 1
.L00448308:
/* 00448308 8E020004 */  lw    $v0, 4($s0)
/* 0044830C 8E0D0000 */  lw    $t5, ($s0)
/* 00448310 144D0003 */  bne   $v0, $t5, .L00448320
/* 00448314 00000000 */   nop   
/* 00448318 10000091 */  b     .L00448560
/* 0044831C 00001025 */   move  $v0, $zero
.L00448320:
/* 00448320 1000FFBD */  b     .L00448218
/* 00448324 00408025 */   move  $s0, $v0
.L00448328:
/* 00448328 8F8E8038 */  lw    $t6, %got(RO_1000E06C)($gp)
/* 0044832C 24040004 */  li    $a0, 4
/* 00448330 240509F6 */  li    $a1, 2550
/* 00448334 25CEE06C */  addiu $t6, %lo(RO_1000E06C) # addiu $t6, $t6, -0x1f94
/* 00448338 25C90048 */  addiu $t1, $t6, 0x48
/* 0044833C 03A04025 */  move  $t0, $sp
.L00448340:
/* 00448340 89D80000 */  lwl   $t8, ($t6)
/* 00448344 99D80003 */  lwr   $t8, 3($t6)
/* 00448348 25CE000C */  addiu $t6, $t6, 0xc
/* 0044834C 2508000C */  addiu $t0, $t0, 0xc
/* 00448350 A918FFFC */  swl   $t8, -4($t0)
/* 00448354 B918FFFF */  swr   $t8, -1($t0)
/* 00448358 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0044835C 99CFFFFB */  lwr   $t7, -5($t6)
/* 00448360 A90F0000 */  swl   $t7, ($t0)
/* 00448364 B90F0003 */  swr   $t7, 3($t0)
/* 00448368 89D8FFFC */  lwl   $t8, -4($t6)
/* 0044836C 99D8FFFF */  lwr   $t8, -1($t6)
/* 00448370 A9180004 */  swl   $t8, 4($t0)
/* 00448374 15C9FFF2 */  bne   $t6, $t1, .L00448340
/* 00448378 B9180007 */   swr   $t8, 7($t0)
/* 0044837C 89D80000 */  lwl   $t8, ($t6)
/* 00448380 99D80003 */  lwr   $t8, 3($t6)
/* 00448384 8F998038 */  lw    $t9, %got(RO_1000E01C)($gp)
/* 00448388 03A06025 */  move  $t4, $sp
/* 0044838C A9180008 */  swl   $t8, 8($t0)
/* 00448390 B918000B */  swr   $t8, 0xb($t0)
/* 00448394 89CF0004 */  lwl   $t7, 4($t6)
/* 00448398 99CF0007 */  lwr   $t7, 7($t6)
/* 0044839C 2739E01C */  addiu $t9, %lo(RO_1000E01C) # addiu $t9, $t9, -0x1fe4
/* 004483A0 272D0048 */  addiu $t5, $t9, 0x48
/* 004483A4 A90F000C */  swl   $t7, 0xc($t0)
/* 004483A8 B90F000F */  swr   $t7, 0xf($t0)
.L004483AC:
/* 004483AC 8B2B0000 */  lwl   $t3, ($t9)
/* 004483B0 9B2B0003 */  lwr   $t3, 3($t9)
/* 004483B4 2739000C */  addiu $t9, $t9, 0xc
/* 004483B8 258C000C */  addiu $t4, $t4, 0xc
/* 004483BC A98B004C */  swl   $t3, 0x4c($t4)
/* 004483C0 B98B004F */  swr   $t3, 0x4f($t4)
/* 004483C4 8B2AFFF8 */  lwl   $t2, -8($t9)
/* 004483C8 9B2AFFFB */  lwr   $t2, -5($t9)
/* 004483CC A98A0050 */  swl   $t2, 0x50($t4)
/* 004483D0 B98A0053 */  swr   $t2, 0x53($t4)
/* 004483D4 8B2BFFFC */  lwl   $t3, -4($t9)
/* 004483D8 9B2BFFFF */  lwr   $t3, -1($t9)
/* 004483DC A98B0054 */  swl   $t3, 0x54($t4)
/* 004483E0 172DFFF2 */  bne   $t9, $t5, .L004483AC
/* 004483E4 B98B0057 */   swr   $t3, 0x57($t4)
/* 004483E8 8B2B0000 */  lwl   $t3, ($t9)
/* 004483EC 9B2B0003 */  lwr   $t3, 3($t9)
/* 004483F0 A98B0058 */  swl   $t3, 0x58($t4)
/* 004483F4 B98B005B */  swr   $t3, 0x5b($t4)
/* 004483F8 8B2A0004 */  lwl   $t2, 4($t9)
/* 004483FC 9B2A0007 */  lwr   $t2, 7($t9)
/* 00448400 A98A005C */  swl   $t2, 0x5c($t4)
/* 00448404 B98A005F */  swr   $t2, 0x5f($t4)
/* 00448408 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044840C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00448410 8FA60008 */  lw    $a2, 8($sp)
/* 00448414 0320F809 */  jalr  $t9
/* 00448418 00000000 */   nop   
/* 0044841C 1000004F */  b     .L0044855C
/* 00448420 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L00448424:
/* 00448424 1053FFAF */  beq   $v0, $s3, .L004482E4
/* 00448428 2C410078 */   sltiu $at, $v0, 0x78
/* 0044842C 1020003D */  beqz  $at, .L00448524
/* 00448430 2449FF92 */   addiu $t1, $v0, -0x6e
/* 00448434 2D21000A */  sltiu $at, $t1, 0xa
/* 00448438 1020FFBB */  beqz  $at, .L00448328
/* 0044843C 00000000 */   nop   
/* 00448440 8F818038 */  lw    $at, %got(jtbl_1000E1EC)($gp)
/* 00448444 00094880 */  sll   $t1, $t1, 2
/* 00448448 00290821 */  addu  $at, $at, $t1
/* 0044844C 8C29E1EC */  lw    $t1, %lo(jtbl_1000E1EC)($at)
/* 00448450 013C4821 */  addu  $t1, $t1, $gp
/* 00448454 01200008 */  jr    $t1
/* 00448458 00000000 */   nop   
.L0044845C:
/* 0044845C 2C410010 */  sltiu $at, $v0, 0x10
/* 00448460 1420000F */  bnez  $at, .L004484A0
/* 00448464 2C41001E */   sltiu $at, $v0, 0x1e
/* 00448468 14200024 */  bnez  $at, .L004484FC
/* 0044846C 2458FFE8 */   addiu $t8, $v0, -0x18
/* 00448470 1055FF9C */  beq   $v0, $s5, .L004482E4
/* 00448474 244EFFD8 */   addiu $t6, $v0, -0x28
/* 00448478 2DC1003B */  sltiu $at, $t6, 0x3b
/* 0044847C 1020FFAA */  beqz  $at, .L00448328
/* 00448480 00000000 */   nop   
/* 00448484 8F818038 */  lw    $at, %got(jtbl_1000E100)($gp)
/* 00448488 000E7080 */  sll   $t6, $t6, 2
/* 0044848C 002E0821 */  addu  $at, $at, $t6
/* 00448490 8C2EE100 */  lw    $t6, %lo(jtbl_1000E100)($at)
/* 00448494 01DC7021 */  addu  $t6, $t6, $gp
/* 00448498 01C00008 */  jr    $t6
/* 0044849C 00000000 */   nop   
.L004484A0:
/* 004484A0 2C410005 */  sltiu $at, $v0, 5
/* 004484A4 1020000B */  beqz  $at, .L004484D4
/* 004484A8 244FFFF6 */   addiu $t7, $v0, -0xa
/* 004484AC 2C410005 */  sltiu $at, $v0, 5
/* 004484B0 1020FF9D */  beqz  $at, .L00448328
/* 004484B4 00000000 */   nop   
/* 004484B8 8F818038 */  lw    $at, %got(jtbl_1000E0BC)($gp)
/* 004484BC 00024080 */  sll   $t0, $v0, 2
/* 004484C0 00280821 */  addu  $at, $at, $t0
/* 004484C4 8C28E0BC */  lw    $t0, %lo(jtbl_1000E0BC)($at)
/* 004484C8 011C4021 */  addu  $t0, $t0, $gp
/* 004484CC 01000008 */  jr    $t0
/* 004484D0 00000000 */   nop   
.L004484D4:
/* 004484D4 2DE10006 */  sltiu $at, $t7, 6
/* 004484D8 1020FF93 */  beqz  $at, .L00448328
/* 004484DC 00000000 */   nop   
/* 004484E0 8F818038 */  lw    $at, %got(jtbl_1000E0D0)($gp)
/* 004484E4 000F7880 */  sll   $t7, $t7, 2
/* 004484E8 002F0821 */  addu  $at, $at, $t7
/* 004484EC 8C2FE0D0 */  lw    $t7, %lo(jtbl_1000E0D0)($at)
/* 004484F0 01FC7821 */  addu  $t7, $t7, $gp
/* 004484F4 01E00008 */  jr    $t7
/* 004484F8 00000000 */   nop   
.L004484FC:
/* 004484FC 2F010006 */  sltiu $at, $t8, 6
/* 00448500 1020FF89 */  beqz  $at, .L00448328
/* 00448504 00000000 */   nop   
/* 00448508 8F818038 */  lw    $at, %got(jtbl_1000E0E8)($gp)
/* 0044850C 0018C080 */  sll   $t8, $t8, 2
/* 00448510 00380821 */  addu  $at, $at, $t8
/* 00448514 8C38E0E8 */  lw    $t8, %lo(jtbl_1000E0E8)($at)
/* 00448518 031CC021 */  addu  $t8, $t8, $gp
/* 0044851C 03000008 */  jr    $t8
/* 00448520 00000000 */   nop   
.L00448524:
/* 00448524 1054FF6F */  beq   $v0, $s4, .L004482E4
/* 00448528 00000000 */   nop   
/* 0044852C 1000FF7E */  b     .L00448328
/* 00448530 00000000 */   nop   
.L00448534:
/* 00448534 2DA10008 */  sltiu $at, $t5, 8
/* 00448538 1020FF7B */  beqz  $at, .L00448328
/* 0044853C 00000000 */   nop   
/* 00448540 8F818038 */  lw    $at, %got(jtbl_1000E214)($gp)
/* 00448544 000D6880 */  sll   $t5, $t5, 2
/* 00448548 002D0821 */  addu  $at, $at, $t5
/* 0044854C 8C2DE214 */  lw    $t5, %lo(jtbl_1000E214)($at)
/* 00448550 01BC6821 */  addu  $t5, $t5, $gp
/* 00448554 01A00008 */  jr    $t5
/* 00448558 00000000 */   nop   
.L0044855C:
/* 0044855C 93A200D7 */  lbu   $v0, 0xd7($sp)
.L00448560:
/* 00448560 8FBF00CC */  lw    $ra, 0xcc($sp)
/* 00448564 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 00448568 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 0044856C 8FB200B8 */  lw    $s2, 0xb8($sp)
/* 00448570 8FB300BC */  lw    $s3, 0xbc($sp)
/* 00448574 8FB400C0 */  lw    $s4, 0xc0($sp)
/* 00448578 8FB500C4 */  lw    $s5, 0xc4($sp)
/* 0044857C 03E00008 */  jr    $ra
/* 00448580 27BD00D8 */   addiu $sp, $sp, 0xd8
    .type uses, @function
    .size uses, .-uses
    .end uses

glabel add_store
    .ent add_store
    # 004432FC translate
/* 00448584 3C1C0FBD */  .cpload $t9
/* 00448588 279C74CC */  
/* 0044858C 0399E021 */  
/* 00448590 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00448594 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00448598 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0044859C AFB30024 */  sw    $s3, 0x24($sp)
/* 004485A0 AFB20020 */  sw    $s2, 0x20($sp)
/* 004485A4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004485A8 AFB00018 */  sw    $s0, 0x18($sp)
/* 004485AC 90820021 */  lbu   $v0, 0x21($a0)
/* 004485B0 3C016C00 */  lui   $at, 0x6c00
/* 004485B4 00809025 */  move  $s2, $a0
/* 004485B8 00027600 */  sll   $t6, $v0, 0x18
/* 004485BC 000E7F42 */  srl   $t7, $t6, 0x1d
/* 004485C0 2DF80020 */  sltiu $t8, $t7, 0x20
/* 004485C4 0018C823 */  negu  $t9, $t8
/* 004485C8 03214024 */  and   $t0, $t9, $at
/* 004485CC 01E84804 */  sllv  $t1, $t0, $t7
/* 004485D0 052100A4 */  bgez  $t1, .L00448864
/* 004485D4 2404000E */   li    $a0, 14
/* 004485D8 3043001F */  andi  $v1, $v0, 0x1f
/* 004485DC 14830005 */  bne   $a0, $v1, .L004485F4
/* 004485E0 00000000 */   nop   
/* 004485E4 8E4A0028 */  lw    $t2, 0x28($s2)
/* 004485E8 29410005 */  slti  $at, $t2, 5
/* 004485EC 54200008 */  bnel  $at, $zero, .L00448610
/* 004485F0 92440020 */   lbu   $a0, 0x20($s2)
.L004485F4:
/* 004485F4 5083009C */  beql  $a0, $v1, .L00448868
/* 004485F8 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004485FC 8E4B0028 */  lw    $t3, 0x28($s2)
/* 00448600 29610009 */  slti  $at, $t3, 9
/* 00448604 50200098 */  beql  $at, $zero, .L00448868
/* 00448608 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0044860C 92440020 */  lbu   $a0, 0x20($s2)
.L00448610:
/* 00448610 2401007B */  li    $at, 123
/* 00448614 02409825 */  move  $s3, $s2
/* 00448618 54810032 */  bnel  $a0, $at, .L004486E4
/* 0044861C 2401003E */   li    $at, 62
/* 00448620 8E420000 */  lw    $v0, ($s2)
/* 00448624 904C0020 */  lbu   $t4, 0x20($v0)
/* 00448628 258DFFE0 */  addiu $t5, $t4, -0x20
/* 0044862C 2DAE0040 */  sltiu $t6, $t5, 0x40
/* 00448630 11C00009 */  beqz  $t6, .L00448658
/* 00448634 00000000 */   nop   
/* 00448638 8F888038 */  lw    $t0, %got(D_100169B0)($gp)
/* 0044863C 000DC143 */  sra   $t8, $t5, 5
/* 00448640 0018C880 */  sll   $t9, $t8, 2
/* 00448644 250869B0 */  addiu $t0, %lo(D_100169B0) # addiu $t0, $t0, 0x69b0
/* 00448648 01197821 */  addu  $t7, $t0, $t9
/* 0044864C 8DE90000 */  lw    $t1, ($t7)
/* 00448650 01A95004 */  sllv  $t2, $t1, $t5
/* 00448654 294E0000 */  slti  $t6, $t2, 0
.L00448658:
/* 00448658 51C00008 */  beql  $t6, $zero, .L0044867C
/* 0044865C 8C430000 */   lw    $v1, ($v0)
/* 00448660 904C0021 */  lbu   $t4, 0x21($v0)
/* 00448664 24010003 */  li    $at, 3
/* 00448668 000CC600 */  sll   $t8, $t4, 0x18
/* 0044866C 00184742 */  srl   $t0, $t8, 0x1d
/* 00448670 11010019 */  beq   $t0, $at, .L004486D8
/* 00448674 00000000 */   nop   
/* 00448678 8C430000 */  lw    $v1, ($v0)
.L0044867C:
/* 0044867C 50600019 */  beql  $v1, $zero, .L004486E4
/* 00448680 2401003E */   li    $at, 62
/* 00448684 90790020 */  lbu   $t9, 0x20($v1)
/* 00448688 272FFFE0 */  addiu $t7, $t9, -0x20
/* 0044868C 2DE90040 */  sltiu $t1, $t7, 0x40
/* 00448690 11200009 */  beqz  $t1, .L004486B8
/* 00448694 00000000 */   nop   
/* 00448698 8F8B8038 */  lw    $t3, %got(D_100169B0)($gp)
/* 0044869C 000F6943 */  sra   $t5, $t7, 5
/* 004486A0 000D5080 */  sll   $t2, $t5, 2
/* 004486A4 256B69B0 */  addiu $t3, %lo(D_100169B0) # addiu $t3, $t3, 0x69b0
/* 004486A8 016A7021 */  addu  $t6, $t3, $t2
/* 004486AC 8DCC0000 */  lw    $t4, ($t6)
/* 004486B0 01ECC004 */  sllv  $t8, $t4, $t7
/* 004486B4 2B090000 */  slti  $t1, $t8, 0
.L004486B8:
/* 004486B8 5120000A */  beql  $t1, $zero, .L004486E4
/* 004486BC 2401003E */   li    $at, 62
/* 004486C0 90790021 */  lbu   $t9, 0x21($v1)
/* 004486C4 24010003 */  li    $at, 3
/* 004486C8 00196E00 */  sll   $t5, $t9, 0x18
/* 004486CC 000D5F42 */  srl   $t3, $t5, 0x1d
/* 004486D0 55610004 */  bnel  $t3, $at, .L004486E4
/* 004486D4 2401003E */   li    $at, 62
.L004486D8:
/* 004486D8 1000001B */  b     .L00448748
/* 004486DC 00009825 */   move  $s3, $zero
/* 004486E0 2401003E */  li    $at, 62
.L004486E4:
/* 004486E4 14810018 */  bne   $a0, $at, .L00448748
/* 004486E8 00000000 */   nop   
/* 004486EC 8E420004 */  lw    $v0, 4($s2)
/* 004486F0 904A0020 */  lbu   $t2, 0x20($v0)
/* 004486F4 254EFFE0 */  addiu $t6, $t2, -0x20
/* 004486F8 2DCC0040 */  sltiu $t4, $t6, 0x40
/* 004486FC 11800009 */  beqz  $t4, .L00448724
/* 00448700 00000000 */   nop   
/* 00448704 8F888038 */  lw    $t0, %got(D_100169B0)($gp)
/* 00448708 000E7943 */  sra   $t7, $t6, 5
/* 0044870C 000FC080 */  sll   $t8, $t7, 2
/* 00448710 250869B0 */  addiu $t0, %lo(D_100169B0) # addiu $t0, $t0, 0x69b0
/* 00448714 01184821 */  addu  $t1, $t0, $t8
/* 00448718 8D390000 */  lw    $t9, ($t1)
/* 0044871C 01D96804 */  sllv  $t5, $t9, $t6
/* 00448720 29AC0000 */  slti  $t4, $t5, 0
.L00448724:
/* 00448724 11800008 */  beqz  $t4, .L00448748
/* 00448728 00000000 */   nop   
/* 0044872C 904A0021 */  lbu   $t2, 0x21($v0)
/* 00448730 24010003 */  li    $at, 3
/* 00448734 000A7E00 */  sll   $t7, $t2, 0x18
/* 00448738 000F4742 */  srl   $t0, $t7, 0x1d
/* 0044873C 15010002 */  bne   $t0, $at, .L00448748
/* 00448740 00000000 */   nop   
/* 00448744 00009825 */  move  $s3, $zero
.L00448748:
/* 00448748 8F838B2C */  lw     $v1, %got(load_count)($gp)
/* 0044874C 90630000 */  lbu   $v1, ($v1)
/* 00448750 10600033 */  beqz  $v1, .L00448820
/* 00448754 00000000 */   nop   
/* 00448758 8F898BB0 */  lw     $t1, %got(loads)($gp)
/* 0044875C 306200FF */  andi  $v0, $v1, 0xff
/* 00448760 0002C080 */  sll   $t8, $v0, 2
/* 00448764 2529FFFC */  addiu $t1, $t1, -4
/* 00448768 03098821 */  addu  $s1, $t8, $t1
/* 0044876C 8E300000 */  lw    $s0, ($s1)
.L00448770:
/* 00448770 56000005 */  bnel  $s0, $zero, .L00448788
/* 00448774 92590021 */   lbu   $t9, 0x21($s2)
/* 00448778 AE330000 */  sw    $s3, ($s1)
/* 0044877C 10000023 */  b     .L0044880C
/* 00448780 00009825 */   move  $s3, $zero
/* 00448784 92590021 */  lbu   $t9, 0x21($s2)
.L00448788:
/* 00448788 920B0021 */  lbu   $t3, 0x21($s0)
/* 0044878C 00197600 */  sll   $t6, $t9, 0x18
/* 00448790 000B6600 */  sll   $t4, $t3, 0x18
/* 00448794 000C5742 */  srl   $t2, $t4, 0x1d
/* 00448798 000E6F42 */  srl   $t5, $t6, 0x1d
/* 0044879C 55AA0010 */  bnel  $t5, $t2, .L004487E0
/* 004487A0 92180020 */   lbu   $t8, 0x20($s0)
/* 004487A4 8E4F0024 */  lw    $t7, 0x24($s2)
/* 004487A8 8E080024 */  lw    $t0, 0x24($s0)
/* 004487AC 55E8000C */  bnel  $t7, $t0, .L004487E0
/* 004487B0 92180020 */   lbu   $t8, 0x20($s0)
/* 004487B4 8F998600 */  lw    $t9, %call16(overlap)($gp)
/* 004487B8 02002025 */  move  $a0, $s0
/* 004487BC 02402825 */  move  $a1, $s2
/* 004487C0 0320F809 */  jalr  $t9
/* 004487C4 00000000 */   nop   
/* 004487C8 10400004 */  beqz  $v0, .L004487DC
/* 004487CC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004487D0 AE330000 */  sw    $s3, ($s1)
/* 004487D4 1000000D */  b     .L0044880C
/* 004487D8 00009825 */   move  $s3, $zero
.L004487DC:
/* 004487DC 92180020 */  lbu   $t8, 0x20($s0)
.L004487E0:
/* 004487E0 2401007B */  li    $at, 123
/* 004487E4 17010009 */  bne   $t8, $at, .L0044880C
/* 004487E8 00000000 */   nop   
/* 004487EC 8F99861C */  lw    $t9, %call16(uses)($gp)
/* 004487F0 8E040000 */  lw    $a0, ($s0)
/* 004487F4 02402825 */  move  $a1, $s2
/* 004487F8 0320F809 */  jalr  $t9
/* 004487FC 00003025 */   move  $a2, $zero
/* 00448800 10400002 */  beqz  $v0, .L0044880C
/* 00448804 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00448808 AE200000 */  sw    $zero, ($s1)
.L0044880C:
/* 0044880C 8F898BB0 */  lw     $t1, %got(loads)($gp)
/* 00448810 2631FFFC */  addiu $s1, $s1, -4
/* 00448814 2529FFFC */  addiu $t1, $t1, -4
/* 00448818 5629FFD5 */  bnel  $s1, $t1, .L00448770
/* 0044881C 8E300000 */   lw    $s0, ($s1)
.L00448820:
/* 00448820 52600011 */  beql  $s3, $zero, .L00448868
/* 00448824 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00448828 8F828B2C */  lw     $v0, %got(load_count)($gp)
/* 0044882C 90420000 */  lbu   $v0, ($v0)
/* 00448830 2841000A */  slti  $at, $v0, 0xa
/* 00448834 5020000C */  beql  $at, $zero, .L00448868
/* 00448838 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0044883C 8F818B2C */  lw     $at, %got(load_count)($gp)
/* 00448840 8F8E8B2C */  lw     $t6, %got(load_count)($gp)
/* 00448844 24590001 */  addiu $t9, $v0, 1
/* 00448848 A0390000 */  sb    $t9, ($at)
/* 0044884C 8F8C8BB0 */  lw     $t4, %got(loads)($gp)
/* 00448850 91CE0000 */  lbu   $t6, ($t6)
/* 00448854 258CFFFC */  addiu $t4, $t4, -4
/* 00448858 000E5880 */  sll   $t3, $t6, 2
/* 0044885C 016C6821 */  addu  $t5, $t3, $t4
/* 00448860 ADB30000 */  sw    $s3, ($t5)
.L00448864:
/* 00448864 8FBF002C */  lw    $ra, 0x2c($sp)
.L00448868:
/* 00448868 8FB00018 */  lw    $s0, 0x18($sp)
/* 0044886C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00448870 8FB20020 */  lw    $s2, 0x20($sp)
/* 00448874 8FB30024 */  lw    $s3, 0x24($sp)
/* 00448878 03E00008 */  jr    $ra
/* 0044887C 27BD0030 */   addiu $sp, $sp, 0x30
    .type add_store, @function
    .size add_store, .-add_store
    .end add_store

glabel is_reg
    .ent is_reg
    # 004488F4 translate_cvtl
/* 00448880 3C1C0FBD */  .cpload $t9
/* 00448884 279C71D0 */  
/* 00448888 0399E021 */  
/* 0044888C 90830021 */  lbu   $v1, 0x21($a0)
/* 00448890 3C016600 */  lui   $at, 0x6600
/* 00448894 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00448898 00031E00 */  sll   $v1, $v1, 0x18
/* 0044889C 00031F42 */  srl   $v1, $v1, 0x1d
/* 004488A0 2C6E0020 */  sltiu $t6, $v1, 0x20
/* 004488A4 000E7823 */  negu  $t7, $t6
/* 004488A8 01E1C024 */  and   $t8, $t7, $at
/* 004488AC 0078C804 */  sllv  $t9, $t8, $v1
/* 004488B0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004488B4 0721000A */  bgez  $t9, .L004488E0
/* 004488B8 AFBC0018 */   sw    $gp, 0x18($sp)
/* 004488BC 8F998610 */  lw    $t9, %call16(check_reg)($gp)
/* 004488C0 AFA40020 */  sw    $a0, 0x20($sp)
/* 004488C4 0320F809 */  jalr  $t9
/* 004488C8 00000000 */   nop   
/* 004488CC 8FA40020 */  lw    $a0, 0x20($sp)
/* 004488D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004488D4 90830021 */  lbu   $v1, 0x21($a0)
/* 004488D8 00031E00 */  sll   $v1, $v1, 0x18
/* 004488DC 00031F42 */  srl   $v1, $v1, 0x1d
.L004488E0:
/* 004488E0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004488E4 38620003 */  xori  $v0, $v1, 3
/* 004488E8 2C420001 */  sltiu $v0, $v0, 1
/* 004488EC 03E00008 */  jr    $ra
/* 004488F0 27BD0020 */   addiu $sp, $sp, 0x20
    .type is_reg, @function
    .size is_reg, .-is_reg
    .end is_reg

glabel translate_cvtl
    .ent translate_cvtl
    # 004432FC translate
    # 00447E14 load_cse
/* 004488F4 3C1C0FBD */  .cpload $t9
/* 004488F8 279C715C */  
/* 004488FC 0399E021 */  
/* 00448900 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00448904 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00448908 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044890C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00448910 AFB00014 */  sw    $s0, 0x14($sp)
/* 00448914 00802825 */  move  $a1, $a0
/* 00448918 8C840000 */  lw    $a0, ($a0)
/* 0044891C 0320F809 */  jalr  $t9
/* 00448920 AFA50040 */   sw    $a1, 0x40($sp)
/* 00448924 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448928 10400007 */  beqz  $v0, .L00448948
/* 0044892C 8FA50040 */   lw    $a1, 0x40($sp)
/* 00448930 8F9983FC */  lw    $t9, %call16(fold)($gp)
/* 00448934 00A02025 */  move  $a0, $a1
/* 00448938 0320F809 */  jalr  $t9
/* 0044893C 00000000 */   nop   
/* 00448940 1000012C */  b     .L00448DF4
/* 00448944 8FBC0018 */   lw    $gp, 0x18($sp)
.L00448948:
/* 00448948 90AE0021 */  lbu   $t6, 0x21($a1)
/* 0044894C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00448950 8CA30024 */  lw    $v1, 0x24($a1)
/* 00448954 31CF001F */  andi  $t7, $t6, 0x1f
/* 00448958 A3AF0037 */  sb    $t7, 0x37($sp)
/* 0044895C 8CA40000 */  lw    $a0, ($a1)
/* 00448960 AFA50040 */  sw    $a1, 0x40($sp)
/* 00448964 0320F809 */  jalr  $t9
/* 00448968 AFA30038 */   sw    $v1, 0x38($sp)
/* 0044896C 8FA40040 */  lw    $a0, 0x40($sp)
/* 00448970 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448974 00408025 */  move  $s0, $v0
/* 00448978 90980019 */  lbu   $t8, 0x19($a0)
/* 0044897C 3319FFFE */  andi  $t9, $t8, 0xfffe
/* 00448980 A0990019 */  sb    $t9, 0x19($a0)
/* 00448984 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00448988 0320F809 */  jalr  $t9
/* 0044898C 00000000 */   nop   
/* 00448990 8FA30038 */  lw    $v1, 0x38($sp)
/* 00448994 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448998 28610040 */  slti  $at, $v1, 0x40
/* 0044899C 54200004 */  bnel  $at, $zero, .L004489B0
/* 004489A0 92020020 */   lbu   $v0, 0x20($s0)
/* 004489A4 10000113 */  b     .L00448DF4
/* 004489A8 02001025 */   move  $v0, $s0
/* 004489AC 92020020 */  lbu   $v0, 0x20($s0)
.L004489B0:
/* 004489B0 24010052 */  li    $at, 82
/* 004489B4 5441000B */  bnel  $v0, $at, .L004489E4
/* 004489B8 24010036 */   li    $at, 54
/* 004489BC 8F998624 */  lw    $t9, %call16(is_reg)($gp)
/* 004489C0 02002025 */  move  $a0, $s0
/* 004489C4 AFA30038 */  sw    $v1, 0x38($sp)
/* 004489C8 0320F809 */  jalr  $t9
/* 004489CC 00000000 */   nop   
/* 004489D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004489D4 10400007 */  beqz  $v0, .L004489F4
/* 004489D8 8FA30038 */   lw    $v1, 0x38($sp)
/* 004489DC 92020020 */  lbu   $v0, 0x20($s0)
/* 004489E0 24010036 */  li    $at, 54
.L004489E4:
/* 004489E4 10410003 */  beq   $v0, $at, .L004489F4
/* 004489E8 2401003D */   li    $at, 61
/* 004489EC 54410082 */  bnel  $v0, $at, .L00448BF8
/* 004489F0 93A20037 */   lbu   $v0, 0x37($sp)
.L004489F4:
/* 004489F4 8E020028 */  lw    $v0, 0x28($s0)
/* 004489F8 000210C0 */  sll   $v0, $v0, 3
/* 004489FC 0043082A */  slt   $at, $v0, $v1
/* 00448A00 10200012 */  beqz  $at, .L00448A4C
/* 00448A04 00000000 */   nop   
/* 00448A08 92080021 */  lbu   $t0, 0x21($s0)
/* 00448A0C 24040006 */  li    $a0, 6
/* 00448A10 93A20037 */  lbu   $v0, 0x37($sp)
/* 00448A14 3109001F */  andi  $t1, $t0, 0x1f
/* 00448A18 1489000A */  bne   $a0, $t1, .L00448A44
/* 00448A1C 00000000 */   nop   
/* 00448A20 10440008 */  beq   $v0, $a0, .L00448A44
/* 00448A24 24010005 */   li    $at, 5
/* 00448A28 54410073 */  bnel  $v0, $at, .L00448BF8
/* 00448A2C 93A20037 */   lbu   $v0, 0x37($sp)
/* 00448A30 8F8A89B8 */  lw     $t2, %got(isa)($gp)
/* 00448A34 914A0000 */  lbu   $t2, ($t2)
/* 00448A38 2D410002 */  sltiu $at, $t2, 2
/* 00448A3C 5420006E */  bnel  $at, $zero, .L00448BF8
/* 00448A40 93A20037 */   lbu   $v0, 0x37($sp)
.L00448A44:
/* 00448A44 100000EB */  b     .L00448DF4
/* 00448A48 02001025 */   move  $v0, $s0
.L00448A4C:
/* 00448A4C 54620009 */  bnel  $v1, $v0, .L00448A74
/* 00448A50 960E0022 */   lhu   $t6, 0x22($s0)
/* 00448A54 920C0021 */  lbu   $t4, 0x21($s0)
/* 00448A58 93AB0037 */  lbu   $t3, 0x37($sp)
/* 00448A5C 318D001F */  andi  $t5, $t4, 0x1f
/* 00448A60 556D0004 */  bnel  $t3, $t5, .L00448A74
/* 00448A64 960E0022 */   lhu   $t6, 0x22($s0)
/* 00448A68 100000E2 */  b     .L00448DF4
/* 00448A6C 02001025 */   move  $v0, $s0
/* 00448A70 960E0022 */  lhu   $t6, 0x22($s0)
.L00448A74:
/* 00448A74 31CF0001 */  andi  $t7, $t6, 1
/* 00448A78 55E0005F */  bnel  $t7, $zero, .L00448BF8
/* 00448A7C 93A20037 */   lbu   $v0, 0x37($sp)
/* 00448A80 96180014 */  lhu   $t8, 0x14($s0)
/* 00448A84 30790007 */  andi  $t9, $v1, 7
/* 00448A88 2F010002 */  sltiu $at, $t8, 2
/* 00448A8C 5020005A */  beql  $at, $zero, .L00448BF8
/* 00448A90 93A20037 */   lbu   $v0, 0x37($sp)
/* 00448A94 57200058 */  bnel  $t9, $zero, .L00448BF8
/* 00448A98 93A20037 */   lbu   $v0, 0x37($sp)
/* 00448A9C 04610003 */  bgez  $v1, .L00448AAC
/* 00448AA0 000330C3 */   sra   $a2, $v1, 3
/* 00448AA4 24610007 */  addiu $at, $v1, 7
/* 00448AA8 000130C3 */  sra   $a2, $at, 3
.L00448AAC:
/* 00448AAC 24010001 */  li    $at, 1
/* 00448AB0 10C10007 */  beq   $a2, $at, .L00448AD0
/* 00448AB4 24010002 */   li    $at, 2
/* 00448AB8 10C10005 */  beq   $a2, $at, .L00448AD0
/* 00448ABC 24010004 */   li    $at, 4
/* 00448AC0 10C10003 */  beq   $a2, $at, .L00448AD0
/* 00448AC4 24010008 */   li    $at, 8
/* 00448AC8 54C1004B */  bnel  $a2, $at, .L00448BF8
/* 00448ACC 93A20037 */   lbu   $v0, 0x37($sp)
.L00448AD0:
/* 00448AD0 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00448AD4 26040020 */  addiu $a0, $s0, 0x20
/* 00448AD8 AFA60020 */  sw    $a2, 0x20($sp)
/* 00448ADC 0320F809 */  jalr  $t9
/* 00448AE0 00000000 */   nop   
/* 00448AE4 92080020 */  lbu   $t0, 0x20($s0)
/* 00448AE8 24010052 */  li    $at, 82
/* 00448AEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448AF0 8FA60020 */  lw    $a2, 0x20($sp)
/* 00448AF4 11010023 */  beq   $t0, $at, .L00448B84
/* 00448AF8 00402825 */   move  $a1, $v0
/* 00448AFC 8E040000 */  lw    $a0, ($s0)
/* 00448B00 24010052 */  li    $at, 82
/* 00448B04 90890020 */  lbu   $t1, 0x20($a0)
/* 00448B08 15210015 */  bne   $t1, $at, .L00448B60
/* 00448B0C 00000000 */   nop   
/* 00448B10 8F998624 */  lw    $t9, %call16(is_reg)($gp)
/* 00448B14 AFA2002C */  sw    $v0, 0x2c($sp)
/* 00448B18 AFA60020 */  sw    $a2, 0x20($sp)
/* 00448B1C 0320F809 */  jalr  $t9
/* 00448B20 00000000 */   nop   
/* 00448B24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448B28 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00448B2C 1040000C */  beqz  $v0, .L00448B60
/* 00448B30 8FA60020 */   lw    $a2, 0x20($sp)
/* 00448B34 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00448B38 8E040000 */  lw    $a0, ($s0)
/* 00448B3C AFA5002C */  sw    $a1, 0x2c($sp)
/* 00448B40 AFA60020 */  sw    $a2, 0x20($sp)
/* 00448B44 0320F809 */  jalr  $t9
/* 00448B48 24840020 */   addiu $a0, $a0, 0x20
/* 00448B4C 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00448B50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448B54 8FA60020 */  lw    $a2, 0x20($sp)
/* 00448B58 1000000A */  b     .L00448B84
/* 00448B5C ACA20000 */   sw    $v0, ($a1)
.L00448B60:
/* 00448B60 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00448B64 8E040000 */  lw    $a0, ($s0)
/* 00448B68 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00448B6C 0320F809 */  jalr  $t9
/* 00448B70 AFA60020 */   sw    $a2, 0x20($sp)
/* 00448B74 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00448B78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448B7C 8FA60020 */  lw    $a2, 0x20($sp)
/* 00448B80 ACA20000 */  sw    $v0, ($a1)
.L00448B84:
/* 00448B84 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00448B88 02002025 */  move  $a0, $s0
/* 00448B8C AFA5002C */  sw    $a1, 0x2c($sp)
/* 00448B90 0320F809 */  jalr  $t9
/* 00448B94 AFA60020 */   sw    $a2, 0x20($sp)
/* 00448B98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448B9C 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00448BA0 8FA60020 */  lw    $a2, 0x20($sp)
/* 00448BA4 8F8A898C */  lw     $t2, %got(lsb_first)($gp)
/* 00448BA8 00A01025 */  move  $v0, $a1
/* 00448BAC 914A0000 */  lbu   $t2, ($t2)
/* 00448BB0 55400007 */  bnel  $t2, $zero, .L00448BD0
/* 00448BB4 90A30021 */   lbu   $v1, 0x21($a1)
/* 00448BB8 8CAC002C */  lw    $t4, 0x2c($a1)
/* 00448BBC 8CAB0028 */  lw    $t3, 0x28($a1)
/* 00448BC0 018B6821 */  addu  $t5, $t4, $t3
/* 00448BC4 01A67023 */  subu  $t6, $t5, $a2
/* 00448BC8 ACAE002C */  sw    $t6, 0x2c($a1)
/* 00448BCC 90A30021 */  lbu   $v1, 0x21($a1)
.L00448BD0:
/* 00448BD0 93AF0037 */  lbu   $t7, 0x37($sp)
/* 00448BD4 ACA60028 */  sw    $a2, 0x28($a1)
/* 00448BD8 0003C6C0 */  sll   $t8, $v1, 0x1b
/* 00448BDC 0018CEC2 */  srl   $t9, $t8, 0x1b
/* 00448BE0 01F94026 */  xor   $t0, $t7, $t9
/* 00448BE4 3109001F */  andi  $t1, $t0, 0x1f
/* 00448BE8 01235026 */  xor   $t2, $t1, $v1
/* 00448BEC 10000081 */  b     .L00448DF4
/* 00448BF0 A0AA0021 */   sb    $t2, 0x21($a1)
/* 00448BF4 93A20037 */  lbu   $v0, 0x37($sp)
.L00448BF8:
/* 00448BF8 24040006 */  li    $a0, 6
/* 00448BFC 54440029 */  bnel  $v0, $a0, .L00448CA4
/* 00448C00 24010005 */   li    $at, 5
/* 00448C04 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00448C08 240C0020 */  li    $t4, 32
/* 00448C0C 01833023 */  subu  $a2, $t4, $v1
/* 00448C10 AFA60020 */  sw    $a2, 0x20($sp)
/* 00448C14 24040008 */  li    $a0, 8
/* 00448C18 0320F809 */  jalr  $t9
/* 00448C1C 00002825 */   move  $a1, $zero
/* 00448C20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448C24 24040073 */  li    $a0, 115
/* 00448C28 02002825 */  move  $a1, $s0
/* 00448C2C 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00448C30 00403025 */  move  $a2, $v0
/* 00448C34 0320F809 */  jalr  $t9
/* 00448C38 00000000 */   nop   
/* 00448C3C 90430021 */  lbu   $v1, 0x21($v0)
/* 00448C40 93AB0037 */  lbu   $t3, 0x37($sp)
/* 00448C44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448C48 00036EC0 */  sll   $t5, $v1, 0x1b
/* 00448C4C 000D76C2 */  srl   $t6, $t5, 0x1b
/* 00448C50 016EC026 */  xor   $t8, $t3, $t6
/* 00448C54 330F001F */  andi  $t7, $t8, 0x1f
/* 00448C58 01E3C826 */  xor   $t9, $t7, $v1
/* 00448C5C A0590021 */  sb    $t9, 0x21($v0)
/* 00448C60 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00448C64 00408025 */  move  $s0, $v0
/* 00448C68 8FA60020 */  lw    $a2, 0x20($sp)
/* 00448C6C 24040008 */  li    $a0, 8
/* 00448C70 0320F809 */  jalr  $t9
/* 00448C74 00002825 */   move  $a1, $zero
/* 00448C78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448C7C 24040074 */  li    $a0, 116
/* 00448C80 02002825 */  move  $a1, $s0
/* 00448C84 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00448C88 00403025 */  move  $a2, $v0
/* 00448C8C 0320F809 */  jalr  $t9
/* 00448C90 00000000 */   nop   
/* 00448C94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448C98 10000055 */  b     .L00448DF0
/* 00448C9C 00408025 */   move  $s0, $v0
/* 00448CA0 24010005 */  li    $at, 5
.L00448CA4:
/* 00448CA4 14410027 */  bne   $v0, $at, .L00448D44
/* 00448CA8 24040007 */   li    $a0, 7
/* 00448CAC 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00448CB0 24080040 */  li    $t0, 64
/* 00448CB4 01033023 */  subu  $a2, $t0, $v1
/* 00448CB8 AFA60020 */  sw    $a2, 0x20($sp)
/* 00448CBC 0320F809 */  jalr  $t9
/* 00448CC0 00002825 */   move  $a1, $zero
/* 00448CC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448CC8 24040073 */  li    $a0, 115
/* 00448CCC 02002825 */  move  $a1, $s0
/* 00448CD0 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00448CD4 00403025 */  move  $a2, $v0
/* 00448CD8 0320F809 */  jalr  $t9
/* 00448CDC 00000000 */   nop   
/* 00448CE0 90430021 */  lbu   $v1, 0x21($v0)
/* 00448CE4 93A90037 */  lbu   $t1, 0x37($sp)
/* 00448CE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448CEC 000356C0 */  sll   $t2, $v1, 0x1b
/* 00448CF0 000A66C2 */  srl   $t4, $t2, 0x1b
/* 00448CF4 012C6826 */  xor   $t5, $t1, $t4
/* 00448CF8 31AB001F */  andi  $t3, $t5, 0x1f
/* 00448CFC 01637026 */  xor   $t6, $t3, $v1
/* 00448D00 A04E0021 */  sb    $t6, 0x21($v0)
/* 00448D04 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00448D08 00408025 */  move  $s0, $v0
/* 00448D0C 8FA60020 */  lw    $a2, 0x20($sp)
/* 00448D10 24040007 */  li    $a0, 7
/* 00448D14 0320F809 */  jalr  $t9
/* 00448D18 00002825 */   move  $a1, $zero
/* 00448D1C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448D20 24040074 */  li    $a0, 116
/* 00448D24 02002825 */  move  $a1, $s0
/* 00448D28 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00448D2C 00403025 */  move  $a2, $v0
/* 00448D30 0320F809 */  jalr  $t9
/* 00448D34 00000000 */   nop   
/* 00448D38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448D3C 1000002C */  b     .L00448DF0
/* 00448D40 00408025 */   move  $s0, $v0
.L00448D44:
/* 00448D44 28610020 */  slti  $at, $v1, 0x20
/* 00448D48 14200012 */  bnez  $at, .L00448D94
/* 00448D4C 24040008 */   li    $a0, 8
/* 00448D50 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00448D54 24180001 */  li    $t8, 1
/* 00448D58 00782804 */  sllv  $a1, $t8, $v1
/* 00448D5C 24A5FFFF */  addiu $a1, $a1, -1
/* 00448D60 24040007 */  li    $a0, 7
/* 00448D64 0320F809 */  jalr  $t9
/* 00448D68 2406FFFF */   li    $a2, -1
/* 00448D6C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448D70 24040004 */  li    $a0, 4
/* 00448D74 02002825 */  move  $a1, $s0
/* 00448D78 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00448D7C 00403025 */  move  $a2, $v0
/* 00448D80 0320F809 */  jalr  $t9
/* 00448D84 00000000 */   nop   
/* 00448D88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448D8C 10000010 */  b     .L00448DD0
/* 00448D90 00408025 */   move  $s0, $v0
.L00448D94:
/* 00448D94 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00448D98 240F0001 */  li    $t7, 1
/* 00448D9C 006F3004 */  sllv  $a2, $t7, $v1
/* 00448DA0 24C6FFFF */  addiu $a2, $a2, -1
/* 00448DA4 0320F809 */  jalr  $t9
/* 00448DA8 00002825 */   move  $a1, $zero
/* 00448DAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448DB0 24040004 */  li    $a0, 4
/* 00448DB4 02002825 */  move  $a1, $s0
/* 00448DB8 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00448DBC 00403025 */  move  $a2, $v0
/* 00448DC0 0320F809 */  jalr  $t9
/* 00448DC4 00000000 */   nop   
/* 00448DC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448DCC 00408025 */  move  $s0, $v0
.L00448DD0:
/* 00448DD0 90430021 */  lbu   $v1, 0x21($v0)
/* 00448DD4 93B90037 */  lbu   $t9, 0x37($sp)
/* 00448DD8 000346C0 */  sll   $t0, $v1, 0x1b
/* 00448DDC 000856C2 */  srl   $t2, $t0, 0x1b
/* 00448DE0 032A4826 */  xor   $t1, $t9, $t2
/* 00448DE4 312C001F */  andi  $t4, $t1, 0x1f
/* 00448DE8 01836826 */  xor   $t5, $t4, $v1
/* 00448DEC A04D0021 */  sb    $t5, 0x21($v0)
.L00448DF0:
/* 00448DF0 02001025 */  move  $v0, $s0
.L00448DF4:
/* 00448DF4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00448DF8 8FB00014 */  lw    $s0, 0x14($sp)
/* 00448DFC 27BD0040 */  addiu $sp, $sp, 0x40
/* 00448E00 03E00008 */  jr    $ra
/* 00448E04 00000000 */   nop   
    .type translate_cvtl, @function
    .size translate_cvtl, .-translate_cvtl
    .end translate_cvtl

glabel need_check_hl
    .ent need_check_hl
    # 004432FC translate
/* 00448E08 3C1C0FBD */  .cpload $t9
/* 00448E0C 279C6C48 */  
/* 00448E10 0399E021 */  
/* 00448E14 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00448E18 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00448E1C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00448E20 908E0021 */  lbu   $t6, 0x21($a0)
/* 00448E24 2401000E */  li    $at, 14
/* 00448E28 00802825 */  move  $a1, $a0
/* 00448E2C 31CF001F */  andi  $t7, $t6, 0x1f
/* 00448E30 15E10003 */  bne   $t7, $at, .L00448E40
/* 00448E34 00000000 */   nop   
/* 00448E38 1000001F */  b     .L00448EB8
/* 00448E3C 00001025 */   move  $v0, $zero
.L00448E40:
/* 00448E40 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00448E44 8CA40000 */  lw    $a0, ($a1)
/* 00448E48 AFA50020 */  sw    $a1, 0x20($sp)
/* 00448E4C 0320F809 */  jalr  $t9
/* 00448E50 00000000 */   nop   
/* 00448E54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448E58 10400016 */  beqz  $v0, .L00448EB4
/* 00448E5C 8FA50020 */   lw    $a1, 0x20($sp)
/* 00448E60 90A20020 */  lbu   $v0, 0x20($a1)
/* 00448E64 3843000C */  xori  $v1, $v0, 0xc
/* 00448E68 2C630001 */  sltiu $v1, $v1, 1
/* 00448E6C 10600005 */  beqz  $v1, .L00448E84
/* 00448E70 00000000 */   nop   
/* 00448E74 8CB90000 */  lw    $t9, ($a1)
/* 00448E78 8CB80024 */  lw    $t8, 0x24($a1)
/* 00448E7C 8F280030 */  lw    $t0, 0x30($t9)
/* 00448E80 0308182A */  slt   $v1, $t8, $t0
.L00448E84:
/* 00448E84 14600009 */  bnez  $v1, .L00448EAC
/* 00448E88 00000000 */   nop   
/* 00448E8C 3843000D */  xori  $v1, $v0, 0xd
/* 00448E90 2C630001 */  sltiu $v1, $v1, 1
/* 00448E94 10600005 */  beqz  $v1, .L00448EAC
/* 00448E98 00000000 */   nop   
/* 00448E9C 8CA90000 */  lw    $t1, ($a1)
/* 00448EA0 8CAB0024 */  lw    $t3, 0x24($a1)
/* 00448EA4 8D2A0030 */  lw    $t2, 0x30($t1)
/* 00448EA8 014B182A */  slt   $v1, $t2, $t3
.L00448EAC:
/* 00448EAC 10000002 */  b     .L00448EB8
/* 00448EB0 00601025 */   move  $v0, $v1
.L00448EB4:
/* 00448EB4 24020001 */  li    $v0, 1
.L00448EB8:
/* 00448EB8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00448EBC 27BD0020 */  addiu $sp, $sp, 0x20
/* 00448EC0 03E00008 */  jr    $ra
/* 00448EC4 00000000 */   nop   
    .type need_check_hl, @function
    .size need_check_hl, .-need_check_hl
    .end need_check_hl

glabel build_ucond0
    .ent build_ucond0
    # 00442968 set_rewrite_indexed
    # 004432FC translate
/* 00448EC8 3C1C0FBD */  .cpload $t9
/* 00448ECC 279C6B88 */  
/* 00448ED0 0399E021 */  
/* 00448ED4 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00448ED8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00448EDC AFBF001C */  sw    $ra, 0x1c($sp)
/* 00448EE0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00448EE4 0320F809 */  jalr  $t9
/* 00448EE8 AFA50034 */   sw    $a1, 0x34($sp)
/* 00448EEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448EF0 AFA20020 */  sw    $v0, 0x20($sp)
/* 00448EF4 24040008 */  li    $a0, 8
/* 00448EF8 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00448EFC 00002825 */  move  $a1, $zero
/* 00448F00 8FA60034 */  lw    $a2, 0x34($sp)
/* 00448F04 0320F809 */  jalr  $t9
/* 00448F08 00000000 */   nop   
/* 00448F0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448F10 2404004E */  li    $a0, 78
/* 00448F14 8FA50020 */  lw    $a1, 0x20($sp)
/* 00448F18 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00448F1C 00403025 */  move  $a2, $v0
/* 00448F20 0320F809 */  jalr  $t9
/* 00448F24 00000000 */   nop   
/* 00448F28 904E0021 */  lbu   $t6, 0x21($v0)
/* 00448F2C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448F30 2404000A */  li    $a0, 10
/* 00448F34 31CFFFE0 */  andi  $t7, $t6, 0xffe0
/* 00448F38 35F80008 */  ori   $t8, $t7, 8
/* 00448F3C A0580021 */  sb    $t8, 0x21($v0)
/* 00448F40 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00448F44 00402825 */  move  $a1, $v0
/* 00448F48 00003025 */  move  $a2, $zero
/* 00448F4C 0320F809 */  jalr  $t9
/* 00448F50 00000000 */   nop   
/* 00448F54 90590021 */  lbu   $t9, 0x21($v0)
/* 00448F58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00448F5C 3328FFE0 */  andi  $t0, $t9, 0xffe0
/* 00448F60 35090008 */  ori   $t1, $t0, 8
/* 00448F64 A0490021 */  sb    $t1, 0x21($v0)
/* 00448F68 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00448F6C 27BD0030 */  addiu $sp, $sp, 0x30
/* 00448F70 03E00008 */  jr    $ra
/* 00448F74 00000000 */   nop   
    .type build_ucond0, @function
    .size build_ucond0, .-build_ucond0
    .end build_ucond0

glabel check_loads_exprs
    .ent check_loads_exprs
    # 004432FC translate
/* 00448F78 3C1C0FBD */  .cpload $t9
/* 00448F7C 279C6AD8 */  
/* 00448F80 0399E021 */  
/* 00448F84 8F828B2C */  lw     $v0, %got(load_count)($gp)
/* 00448F88 90420000 */  lbu   $v0, ($v0)
/* 00448F8C 18400030 */  blez  $v0, .L00449050
/* 00448F90 30470003 */   andi  $a3, $v0, 3
/* 00448F94 00073823 */  negu  $a3, $a3
/* 00448F98 10E00010 */  beqz  $a3, .L00448FDC
/* 00448F9C 00401825 */   move  $v1, $v0
/* 00448FA0 8F8F8BB0 */  lw     $t7, %got(loads)($gp)
/* 00448FA4 00027080 */  sll   $t6, $v0, 2
/* 00448FA8 00E23021 */  addu  $a2, $a3, $v0
/* 00448FAC 25EFFFFC */  addiu $t7, $t7, -4
/* 00448FB0 01CF2821 */  addu  $a1, $t6, $t7
.L00448FB4:
/* 00448FB4 8CB80000 */  lw    $t8, ($a1)
/* 00448FB8 2463FFFF */  addiu $v1, $v1, -1
/* 00448FBC 14980003 */  bne   $a0, $t8, .L00448FCC
/* 00448FC0 00000000 */   nop   
/* 00448FC4 03E00008 */  jr    $ra
/* 00448FC8 24020001 */   li    $v0, 1

.L00448FCC:
/* 00448FCC 14C3FFF9 */  bne   $a2, $v1, .L00448FB4
/* 00448FD0 24A5FFFC */   addiu $a1, $a1, -4
/* 00448FD4 1060001E */  beqz  $v1, .L00449050
/* 00448FD8 00000000 */   nop   
.L00448FDC:
/* 00448FDC 8F888BB0 */  lw     $t0, %got(loads)($gp)
/* 00448FE0 8F828BB0 */  lw     $v0, %got(loads)($gp)
/* 00448FE4 0003C880 */  sll   $t9, $v1, 2
/* 00448FE8 2508FFFC */  addiu $t0, $t0, -4
/* 00448FEC 03282821 */  addu  $a1, $t9, $t0
/* 00448FF0 2442FFFC */  addiu $v0, $v0, -4
/* 00448FF4 8CA90000 */  lw    $t1, ($a1)
.L00448FF8:
/* 00448FF8 54890004 */  bnel  $a0, $t1, .L0044900C
/* 00448FFC 8CAAFFFC */   lw    $t2, -4($a1)
/* 00449000 03E00008 */  jr    $ra
/* 00449004 24020001 */   li    $v0, 1

/* 00449008 8CAAFFFC */  lw    $t2, -4($a1)
.L0044900C:
/* 0044900C 548A0004 */  bnel  $a0, $t2, .L00449020
/* 00449010 8CABFFF8 */   lw    $t3, -8($a1)
/* 00449014 03E00008 */  jr    $ra
/* 00449018 24020001 */   li    $v0, 1

/* 0044901C 8CABFFF8 */  lw    $t3, -8($a1)
.L00449020:
/* 00449020 548B0004 */  bnel  $a0, $t3, .L00449034
/* 00449024 8CACFFF4 */   lw    $t4, -0xc($a1)
/* 00449028 03E00008 */  jr    $ra
/* 0044902C 24020001 */   li    $v0, 1

/* 00449030 8CACFFF4 */  lw    $t4, -0xc($a1)
.L00449034:
/* 00449034 24A5FFF0 */  addiu $a1, $a1, -0x10
/* 00449038 148C0003 */  bne   $a0, $t4, .L00449048
/* 0044903C 00000000 */   nop   
/* 00449040 03E00008 */  jr    $ra
/* 00449044 24020001 */   li    $v0, 1

.L00449048:
/* 00449048 54A2FFEB */  bnel  $a1, $v0, .L00448FF8
/* 0044904C 8CA90000 */   lw    $t1, ($a1)
.L00449050:
/* 00449050 8F828B28 */  lw     $v0, %got(expr_count)($gp)
/* 00449054 90420000 */  lbu   $v0, ($v0)
/* 00449058 18400030 */  blez  $v0, .L0044911C
/* 0044905C 30470003 */   andi  $a3, $v0, 3
/* 00449060 00073823 */  negu  $a3, $a3
/* 00449064 10E00010 */  beqz  $a3, .L004490A8
/* 00449068 00401825 */   move  $v1, $v0
/* 0044906C 8F8E8BAC */  lw     $t6, %got(exprs)($gp)
/* 00449070 00026880 */  sll   $t5, $v0, 2
/* 00449074 00E23021 */  addu  $a2, $a3, $v0
/* 00449078 25CEFFFC */  addiu $t6, $t6, -4
/* 0044907C 01AE2821 */  addu  $a1, $t5, $t6
.L00449080:
/* 00449080 8CAF0000 */  lw    $t7, ($a1)
/* 00449084 2463FFFF */  addiu $v1, $v1, -1
/* 00449088 148F0003 */  bne   $a0, $t7, .L00449098
/* 0044908C 00000000 */   nop   
/* 00449090 03E00008 */  jr    $ra
/* 00449094 24020001 */   li    $v0, 1

.L00449098:
/* 00449098 14C3FFF9 */  bne   $a2, $v1, .L00449080
/* 0044909C 24A5FFFC */   addiu $a1, $a1, -4
/* 004490A0 5060001F */  beql  $v1, $zero, .L00449120
/* 004490A4 00001025 */   move  $v0, $zero
.L004490A8:
/* 004490A8 8F998BAC */  lw     $t9, %got(exprs)($gp)
/* 004490AC 8F828BAC */  lw     $v0, %got(exprs)($gp)
/* 004490B0 0003C080 */  sll   $t8, $v1, 2
/* 004490B4 2739FFFC */  addiu $t9, $t9, -4
/* 004490B8 03192821 */  addu  $a1, $t8, $t9
/* 004490BC 2442FFFC */  addiu $v0, $v0, -4
/* 004490C0 8CA80000 */  lw    $t0, ($a1)
.L004490C4:
/* 004490C4 54880004 */  bnel  $a0, $t0, .L004490D8
/* 004490C8 8CA9FFFC */   lw    $t1, -4($a1)
/* 004490CC 03E00008 */  jr    $ra
/* 004490D0 24020001 */   li    $v0, 1

/* 004490D4 8CA9FFFC */  lw    $t1, -4($a1)
.L004490D8:
/* 004490D8 54890004 */  bnel  $a0, $t1, .L004490EC
/* 004490DC 8CAAFFF8 */   lw    $t2, -8($a1)
/* 004490E0 03E00008 */  jr    $ra
/* 004490E4 24020001 */   li    $v0, 1

/* 004490E8 8CAAFFF8 */  lw    $t2, -8($a1)
.L004490EC:
/* 004490EC 548A0004 */  bnel  $a0, $t2, .L00449100
/* 004490F0 8CABFFF4 */   lw    $t3, -0xc($a1)
/* 004490F4 03E00008 */  jr    $ra
/* 004490F8 24020001 */   li    $v0, 1

/* 004490FC 8CABFFF4 */  lw    $t3, -0xc($a1)
.L00449100:
/* 00449100 24A5FFF0 */  addiu $a1, $a1, -0x10
/* 00449104 148B0003 */  bne   $a0, $t3, .L00449114
/* 00449108 00000000 */   nop   
/* 0044910C 03E00008 */  jr    $ra
/* 00449110 24020001 */   li    $v0, 1

.L00449114:
/* 00449114 54A2FFEB */  bnel  $a1, $v0, .L004490C4
/* 00449118 8CA80000 */   lw    $t0, ($a1)
.L0044911C:
/* 0044911C 00001025 */  move  $v0, $zero
.L00449120:
/* 00449120 03E00008 */  jr    $ra
/* 00449124 00000000 */   nop   
    .type check_loads_exprs, @function
    .size check_loads_exprs, .-check_loads_exprs
    .end check_loads_exprs
)"");
