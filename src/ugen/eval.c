__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_10009980:
    # 004235C4 fasm
    .ascii "illegal data type                                                               "

RO_100099D0:
    # 004235C4 fasm
    .ascii "eval.p                                                                          "

RO_10009A20:
    # 004235C4 fasm
    .ascii "extended floating point not yet supported                                       "

RO_10009A70:
    # 004235C4 fasm
    .ascii "eval.p                                                                          "

    .balign 4
jtbl_10009AC0:
    # 004235C4 fasm
    .gpword .L00423618
    .gpword .L00423610
    .gpword .L0042371C
    .gpword .L0042371C
    .gpword .L00423620

RO_10009AD4:
    # 00423828 fop
    .ascii "illegal data type                                                               "

RO_10009B24:
    # 00423828 fop
    .ascii "eval.p                                                                          "

RO_10009B74:
    # 00423828 fop
    .ascii "extended floating point not yet supported                                       "

RO_10009BC4:
    # 00423828 fop
    .ascii "eval.p                                                                          "

    .balign 4
jtbl_10009C14:
    # 00423828 fop
    .gpword .L00423888
    .gpword .L00423874
    .gpword .L00423998
    .gpword .L00423998
    .gpword .L0042389C

    .balign 4
jtbl_10009C28:
    # 00423AA4 uop_to_asm
    .gpword .L00423B40
    .gpword .L00423BC8
    .gpword .L00423B84

    .balign 4
jtbl_10009C34:
    # 00423AA4 uop_to_asm
    .gpword .L00423C44
    .gpword .L00423CCC
    .gpword .L00423C88

    .balign 4
jtbl_10009C40:
    # 00423D28 jump
    .gpword .L00423E68
    .gpword .L00424148
    .gpword .L00424148
    .gpword .L00424148
    .gpword .L00424148
    .gpword .L00423E68
    .gpword .L00423E68

    .balign 4
jtbl_10009C5C:
    # 00423D28 jump
    .gpword .L00423E68
    .gpword .L00423E68
    .gpword .L00424148
    .gpword .L00423E58

    .balign 4
jtbl_10009C6C:
    # 00424240 trap
    .gpword .L00424314
    .gpword .L00424740
    .gpword .L00424740
    .gpword .L00424740
    .gpword .L00424740
    .gpword .L00424314
    .gpword .L00424314

    .balign 4
jtbl_10009C88:
    # 00424240 trap
    .gpword .L00424314
    .gpword .L00424314
    .gpword .L00424740
    .gpword .L00424300

RO_10009C98:
    # 00424934 restore_from_temp
    .ascii "unknown temporary type                                                          "

RO_10009CE8:
    # 00424934 restore_from_temp
    .ascii "eval.p                                                                          "

RO_10009D38:
    # 00424934 restore_from_temp
    .ascii "extended floating point type not yet supported                                  "

RO_10009D88:
    # 00424934 restore_from_temp
    .ascii "eval.p                                                                          "

    .balign 4
jtbl_10009DD8:
    # 00424934 restore_from_temp
    .gpword .L00424B34
    .gpword .L00424BD8
    .gpword .L00424B34
    .gpword .L00424B34
    .gpword .L00424B34
    .gpword .L00424B84
    .gpword .L00424B34
    .gpword .L00424B84
    .gpword .L00424B34
    .gpword .L00424BD8
    .gpword .L00424B34
    .gpword .L00424BD8
    .gpword .L004249C8
    .gpword .L004249C8
    .gpword .L00424B34
    .gpword .L00424B84
    .gpword .L00424A38

RO_10009E1C:
    # 00424F70 reg
    .ascii "tree node not evaluated                                                         "

RO_10009E6C:
    # 00424F70 reg
    .ascii "eval.p                                                                          "

RO_10009EBC:
    # 00425140 binary_regs
    .ascii "tree node not evaluated                                                         "

RO_10009F0C:
    # 00425140 binary_regs
    .ascii "eval.p                                                                          "

RO_10009F5C:
    # 00425140 binary_regs
    .ascii "tree node not evaluated                                                         "

RO_10009FAC:
    # 00425140 binary_regs
    .ascii "eval.p                                                                          "

RO_10009FFC:
    # 00425AA0 move_to_dest
    .ascii "unknown register type                                                           "

RO_1000A04C:
    # 00425AA0 move_to_dest
    .ascii "eval.p                                                                          "

RO_1000A09C:
    # 00425D78 lsopc
    .ascii "illegal data type in load/store                                                 "

RO_1000A0EC:
    # 00425D78 lsopc
    .ascii "eval.p                                                                          "

RO_1000A13C:
    # 00425D78 lsopc
    .ascii "illegal size in load/store                                                      "

RO_1000A18C:
    # 00425D78 lsopc
    .ascii "eval.p                                                                          "

RO_1000A1DC:
    # 00425D78 lsopc
    .ascii "illegal size in load/store                                                      "

RO_1000A22C:
    # 00425D78 lsopc
    .ascii "eval.p                                                                          "

RO_1000A27C:
    # 00425D78 lsopc
    .ascii "illegal size in load/store                                                      "

RO_1000A2CC:
    # 00425D78 lsopc
    .ascii "eval.p                                                                          "

RO_1000A31C:
    # 00425D78 lsopc
    .ascii "illegal size in load/store                                                      "

RO_1000A36C:
    # 00425D78 lsopc
    .ascii "eval.p                                                                          "

RO_1000A3BC:
    # 00425D78 lsopc
    .ascii "illegal size in load/store                                                      "

RO_1000A40C:
    # 00425D78 lsopc
    .ascii "eval.p                                                                          "

RO_1000A45C:
    # 00425D78 lsopc
    .ascii "illegal size in load/store                                                      "

RO_1000A4AC:
    # 00425D78 lsopc
    .ascii "eval.p                                                                          "

    .balign 4
jtbl_1000A4FC:
    # 00425D78 lsopc
    .gpword .L00426480
    .gpword .L004265FC
    .gpword .L00426480
    .gpword .L00426480
    .gpword .L00426480
    .gpword .L004261C4
    .gpword .L00425F30
    .gpword .L00426314
    .gpword .L0042606C
    .gpword .L00426480
    .gpword .L00426480
    .gpword .L004265FC
    .gpword .L004265F4
    .gpword .L004265EC
    .gpword .L00426480
    .gpword .L00426480

RO_1000A53C:
    # 0042670C loadstore
    .ascii "illegal memory type in load/store                                               "

RO_1000A58C:
    # 0042670C loadstore
    .ascii "eval.p                                                                          "

    .balign 4
jtbl_1000A5DC:
    # 0042670C loadstore
    .gpword .L00426774
    .gpword .L00426774
    .gpword .L00426A38
    .gpword .L004268E8
    .gpword .L00426A08

RO_1000A5F0:
    # 00428D14 eval_mov
    .ascii "eval.p"

RO_1000A5F6:
    # 00428D14 eval_mov
    .ascii "Unknown memory type in LDA                                                      "

RO_1000A646:
    # 00428D14 eval_mov
    .ascii "eval.p                                                                          "

RO_1000A696:
    # 00428D14 eval_mov
    .ascii "Unknown memory type in LDA                                                      "

RO_1000A6E6:
    # 00428D14 eval_mov
    .ascii "eval.p                                                                          "

RO_1000A736:
    # 00428D14 eval_mov
    .ascii "eval.p"

    .balign 4
jtbl_1000A73C:
    # 00428D14 eval_mov
    .gpword .L00428F8C
    .gpword .L00428FA0
    .gpword .L00428FFC
    .gpword .L00428FB4

    .balign 4
jtbl_1000A74C:
    # 00428D14 eval_mov
    .gpword .L0042905C
    .gpword .L0042905C
    .gpword .L0042916C
    .gpword .L0042913C

    .balign 4
jtbl_1000A75C:
    # 00428D14 eval_mov
    .gpword .L004292D4
    .gpword .L004292D4
    .gpword .L004293CC
    .gpword .L004293A4

    .balign 4
jtbl_1000A76C:
    # 00428D14 eval_mov
    .gpword .L00429E50
    .gpword .L00429AFC
    .gpword .L00429B40
    .gpword .L00429C20

RO_1000A77C:
    # 00429EE0 get_ops
    .ascii "illegal indirect opcode                                                         "

RO_1000A7CC:
    # 00429EE0 get_ops
    .ascii "eval.p                                                                          "

    .balign 4
jtbl_1000A81C:
    # 00429EE0 get_ops
    .gpword .L00429F54
    .gpword .L00429FFC
    .gpword .L00429FFC
    .gpword .L0042A024
    .gpword .L0042A024
    .gpword .L0042A024
    .gpword .L00429FFC
    .gpword .L00429FFC
    .gpword .L0042A024
    .gpword .L0042A024
    .gpword .L00429F54

    .balign 4
jtbl_1000A848:
    # 00429EE0 get_ops
    .gpword .L00429F54
    .gpword .L0042A024
    .gpword .L00429F54

RO_1000A854:
    # 0042A1AC eval_irel
    .asciz "eval.p"

    .balign 4
jtbl_1000A85C:
    # 0042A1AC eval_irel
    .gpword .L0042A448
    .gpword .L0042A580
    .gpword .L0042A580
    .gpword .L0042A5B8
    .gpword .L0042A5B8
    .gpword .L0042A5B8
    .gpword .L0042A548
    .gpword .L0042A548
    .gpword .L0042A5B8
    .gpword .L0042A5B8
    .gpword .L0042A4C8

    .balign 4
jtbl_1000A888:
    # 0042AB88 gen_regs
    .gpword .L0042AD08
    .gpword .L0042ABF4
    .gpword .L0042ADB8
    .gpword .L0042ABF4

    .balign 4
jtbl_1000A898:
    # 0042BAD0 cvt_tab
    .gpword .L0042BB44
    .gpword .L0042BB3C

    .balign 4
jtbl_1000A8A0:
    # 0042BAD0 cvt_tab
    .gpword .L0042BB8C
    .gpword .L0042BB84

    .balign 4
jtbl_1000A8A8:
    # 0042BAD0 cvt_tab
    .gpword .L0042BBE0
    .gpword .L0042BBF0
    .gpword .L0042BBF0
    .gpword .L0042BBF0
    .gpword .L0042BBE0
    .gpword .L0042BBC8
    .gpword .L0042BBD0
    .gpword .L0042BBD8
    .gpword .L0042BBE0
    .gpword .L0042BBF0
    .gpword .L0042BBF0
    .gpword .L0042BBF0
    .gpword .L0042BBE8
    .gpword .L0042BBF0
    .gpword .L0042BBF0
    .gpword .L0042BBD8

    .balign 4
jtbl_1000A8E8:
    # 0042BAD0 cvt_tab
    .gpword .L0042BC3C
    .gpword .L0042BC4C
    .gpword .L0042BC4C
    .gpword .L0042BC4C
    .gpword .L0042BC3C
    .gpword .L0042BC24
    .gpword .L0042BC2C
    .gpword .L0042BC34
    .gpword .L0042BC3C
    .gpword .L0042BC4C
    .gpword .L0042BC4C
    .gpword .L0042BC4C
    .gpword .L0042BC4C
    .gpword .L0042BC44
    .gpword .L0042BC4C
    .gpword .L0042BC34

    .balign 4
jtbl_1000A928:
    # 0042BAD0 cvt_tab
    .gpword .L0042BB0C
    .gpword .L0042BC54
    .gpword .L0042BC54
    .gpword .L0042BC54
    .gpword .L0042BB0C
    .gpword .L0042BB54
    .gpword .L0042BB0C
    .gpword .L0042BB54
    .gpword .L0042BB0C
    .gpword .L0042BC54
    .gpword .L0042BC54
    .gpword .L0042BC54
    .gpword .L0042BBF8
    .gpword .L0042BB9C
    .gpword .L0042BC54
    .gpword .L0042BB54

    .balign 4
jtbl_1000A968:
    # 0042BC64 rnd_tab
    .gpword .L0042BC88
    .gpword .L0042BCA8
    .gpword .L0042BCA8
    .gpword .L0042BCA8
    .gpword .L0042BC88
    .gpword .L0042BC98
    .gpword .L0042BC90
    .gpword .L0042BCA0
    .gpword .L0042BC88

    .balign 4
jtbl_1000A98C:
    # 0042BC64 rnd_tab
    .gpword .L0042BD04
    .gpword .L0042BD24
    .gpword .L0042BD24
    .gpword .L0042BD24
    .gpword .L0042BD04
    .gpword .L0042BD14
    .gpword .L0042BD0C
    .gpword .L0042BD1C
    .gpword .L0042BD04

RO_1000A9B0:
    # 0042BDAC eval
    .ascii " ref_count = "

RO_1000A9BD:
    # 0042BDAC eval
    .ascii " reg = "

RO_1000A9C4:
    # 0042BDAC eval
    .ascii " opc = "

RO_1000A9CB:
    # 0042BDAC eval
    .ascii "current_line = "

RO_1000A9DA:
    # 0042BDAC eval
    .ascii "unexpected u-code                                                               "

RO_1000AA2A:
    # 0042BDAC eval
    .ascii "eval.p                                                                          "

RO_1000AA7A:
    # 0042BDAC eval
    .ascii "0.0                             "

RO_1000AA9A:
    # 0042BDAC eval
    .ascii "illegal type retyping                                                           "

RO_1000AAEA:
    # 0042BDAC eval
    .ascii "eval.p                                                                          "

RO_1000AB3A:
    # 0042BDAC eval
    .ascii "illegal type conversions                                                        "

RO_1000AB8A:
    # 0042BDAC eval
    .ascii "eval.p                                                                          "

RO_1000ABDA:
    # 0042BDAC eval
    .ascii "Unknown memory type in LDA                                                      "

RO_1000AC2A:
    # 0042BDAC eval
    .ascii "eval.p                                                                          "

RO_1000AC7A:
    # 0042BDAC eval
    .ascii "unknown memory type in DEF ucode                                                "

RO_1000ACCA:
    # 0042BDAC eval
    .ascii "eval.p                                                                          "

RO_1000AD1A:
    # 0042BDAC eval
    .ascii "generate_again"

    .balign 4
jtbl_1000AD28:
    # 0042BDAC eval
    .gpword .L0042C9F8
    .gpword .L0042CA20
    .gpword .L0042C9F8
    .gpword .L0042CA20
    .gpword .L0042CA20
    .gpword .L0042CA20
    .gpword .L0042CA20
    .gpword .L0042C9F0
    .gpword .L0042C9E8

    .balign 4
jtbl_1000AD4C:
    # 0042BDAC eval
    .gpword .L0042CEEC
    .gpword .L0042CCE0
    .gpword .L0042CF3C
    .gpword .L0042CF3C
    .gpword .L0042CF3C
    .gpword .L0042CD08

    .balign 4
jtbl_1000AD64:
    # 0042BDAC eval
    .gpword .L004304C4
    .gpword .L004304C4
    .gpword .L00430728
    .gpword .L004306CC

    .balign 4
jtbl_1000AD74:
    # 0042BDAC eval
    .gpword .L00430A90
    .gpword .L00430C04
    .gpword .L00432D88
    .gpword .L0042C730
    .gpword .L00430C04
    .gpword .L00432070
    .gpword .L00432D88
    .gpword .L0042C0E8
    .gpword .L00431D6C
    .gpword .L00432D88
    .gpword .L00431DD8
    .gpword .L0042EB34
    .gpword .L00431A0C
    .gpword .L00431A0C
    .gpword .L00431978
    .gpword .L00431954
    .gpword .L004326EC
    .gpword .L00431C94
    .gpword .L00432D88
    .gpword .L00431D60
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L0042DF7C
    .gpword .L004314AC
    .gpword .L00431308
    .gpword .L00432D88
    .gpword .L0042CCA4
    .gpword .L00432D88
    .gpword .L00430C04
    .gpword .L00432D88
    .gpword .L0042C7BC
    .gpword .L00431D90
    .gpword .L0042C12C
    .gpword .L00432D88
    .gpword .L00430C04
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L0042E87C
    .gpword .L00432D88
    .gpword .L00430C04
    .gpword .L00430C04
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L0042E230
    .gpword .L00432D88
    .gpword .L00431B08
    .gpword .L00431B08
    .gpword .L00431B08
    .gpword .L0042EAE4
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L00431B08
    .gpword .L00431B08
    .gpword .L0042F1BC
    .gpword .L00432D88
    .gpword .L00431B08
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L00430C04
    .gpword .L0042F1BC
    .gpword .L0042F944
    .gpword .L0042F944
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L0042D14C
    .gpword .L00432D88
    .gpword .L0043274C
    .gpword .L00432D88
    .gpword .L0043082C
    .gpword .L0043046C
    .gpword .L00432D88
    .gpword .L0042EB78
    .gpword .L00432D88
    .gpword .L0043244C
    .gpword .L00432D88
    .gpword .L00430C04
    .gpword .L00430C04
    .gpword .L00432D88
    .gpword .L0043089C
    .gpword .L0042BED4
    .gpword .L0042EEEC
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L0042E3E4
    .gpword .L0042E3E4
    .gpword .L004310AC
    .gpword .L00431B28
    .gpword .L00432D88
    .gpword .L0042D9B4
    .gpword .L00430C04
    .gpword .L0042D828
    .gpword .L00432D88
    .gpword .L00430A90
    .gpword .L00430C04
    .gpword .L00431D54
    .gpword .L0043092C
    .gpword .L00432D88
    .gpword .L0042BF84
    .gpword .L0042DB14
    .gpword .L00432D88
    .gpword .L0042D9B4
    .gpword .L00432D88
    .gpword .L0042D040
    .gpword .L00430C04
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L00431DB4
    .gpword .L0042DEBC
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L00430C04
    .gpword .L00430C04
    .gpword .L00432864
    .gpword .L00432D88
    .gpword .L00432770
    .gpword .L0042CC60
    .gpword .L00432D88
    .gpword .L0043300C
    .gpword .L0042D268
    .gpword .L004324D0
    .gpword .L00430C04
    .gpword .L00432D88
    .gpword .L0042E854
    .gpword .L00432568
    .gpword .L00432568
    .gpword .L00432568
    .gpword .L00432568
    .gpword .L00432568
    .gpword .L00432568
    .gpword .L004316C0
    .gpword .L00432D88
    .gpword .L0042E8A4
    .gpword .L0042C008
    .gpword .L00432D88
    .gpword .L0042D060
    .gpword .L00431B48
    .gpword .L00430C04
    .gpword .L00432D88
    .gpword .L00432814
    .gpword .L0043283C
    .gpword .L00432D88
    .gpword .L00432D88
    .gpword .L0042F710
    .gpword .L00430110
    .gpword .L0042EE10
    .gpword .L0042CC80
    .gpword .L0042DF7C

RO_1000AFD4:
    # 004330EC eval_int_flt_cvt
    .ascii "4294967296.0                    "

RO_1000AFF4:
    # 00433494 eval_flt_int_cvt
    .ascii "2147483648.0                    "

RO_1000B014:
    # 00433494 eval_flt_int_cvt
    .asciz "9223372036854775808.0           "

.data
# 10013644
glabel processing_args
    # 0042BDAC eval
    .byte 0x00
    .type processing_args, @object
    .size processing_args, .-processing_args # 1
    .space 3

# 10013648
glabel processing_int64_return
    # 0042BDAC eval
    .byte 0x00
    .type processing_int64_return, @object
    .size processing_int64_return, .-processing_int64_return # 1
    .space 3

# 1001364C
glabel setting_int64_return
    # 0042BDAC eval
    .byte 0x00
    .type setting_int64_return, @object
    .size setting_int64_return, .-setting_int64_return # 1
    .space 3

# 10013650
glabel spop_tab
    # 00423828 fop
    .byte 0x00,0x8e,0x00,0x7c,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x85,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xa3,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xc7,0x00,0xc1,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xfc,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xc7,0x00,0xc1,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xc1,0x00,0xc7,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x82,0x01,0xad,0x01,0xad,0x00,0xde,0x00,0xa3,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x88,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x7f,0x01,0xad,0x01,0xad,0x00,0xa3,0x00,0xc7,0x00,0xc1,0x00,0xc7,0x00,0xc1,0x00,0xa3,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type spop_tab, @object
    .size spop_tab, .-spop_tab # 312

# 10013788
glabel dpop_tab
    # 00423828 fop
    .byte 0x00,0x8f,0x00,0x7d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x86,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xa4,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xc8,0x00,0xc2,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xfd,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xc8,0x00,0xc2,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xc2,0x00,0xc8,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x83,0x01,0xad,0x01,0xad,0x00,0xdf,0x00,0xa4,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x89,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x80,0x01,0xad,0x01,0xad,0x00,0xa4,0x00,0xc8,0x00,0xc2,0x00,0xc8,0x00,0xc2,0x00,0xa4,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type dpop_tab, @object
    .size dpop_tab, .-dpop_tab # 312

# 100138C0
glabel br
    # 00423D28 jump
    .byte 0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0e,0x00,0x11,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x14,0x00,0x17,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x1a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type br, @object
    .size br, .-br # 312

# 100139F8
glabel ubr
    # 00423D28 jump
    .byte 0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0f,0x00,0x12,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x15,0x00,0x18,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x1a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type ubr, @object
    .size ubr, .-ubr # 312

# 10013B30
glabel inv
    # 00423D28 jump
    # 00424240 trap
    .byte 0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x1a,0x00,0x17,0x00,0x18,0x01,0xad,0x00,0x14,0x00,0x15,0x01,0xad,0x00,0x11,0x00,0x12,0x01,0xad,0x00,0x0e,0x00,0x0f,0x01,0xad,0x00,0x0d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x01,0x01,0x02,0x00,0xff,0x01,0x00,0x01,0x04,0x01,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type inv, @object
    .size inv, .-inv # 860

# 10013E8C
glabel trapop
    # 00424240 trap
    .byte 0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x01,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xff,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x04,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type trapop, @object
    .size trapop, .-trapop # 312

# 10013FC4
glabel utrapop
    # 00424240 trap
    .byte 0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x02,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x00,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x04,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type utrapop, @object
    .size utrapop, .-utrapop # 312

# 100140FC
glabel reg_kind_tab
    # 00424934 restore_from_temp
    # 00424F70 reg
    # 00425140 binary_regs
    # 004254B8 flt_reg
    # 0042567C func_0042567C
    # 004258CC get_dest
    # 004287AC eval_fp_min_max
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 00434878 eval_flt_flt_cvt
    .byte 0x02,0x00,0x00,0x02,0x02,0x00,0x02,0x00,0x02,0x00,0x00,0x00,0x03,0x02,0x00,0x03,0x00,0x00
    .type reg_kind_tab, @object
    .size reg_kind_tab, .-reg_kind_tab # 18
    .space 2

# 10014110
glabel load_op_tab
    # 00424934 restore_from_temp
    .byte 0x00,0x2a,0x01,0xad,0x00,0x2a,0x00,0x2a,0x00,0x2a,0x00,0x6c,0x00,0x2a,0x00,0x6c,0x00,0x2a,0x01,0xad,0x00,0x2a,0x01,0xad,0x00,0x77,0x00,0x76,0x00,0x2a,0x00,0x6c,0x01,0xad,0x01,0xad
    .type load_op_tab, @object
    .size load_op_tab, .-load_op_tab # 36

# 10014134
glabel store_op_tab
    # 0042BDAC eval
    .byte 0x00,0x57,0x01,0xad,0x00,0x57,0x00,0x57,0x00,0x57,0x00,0x6d,0x00,0x57,0x00,0x6d,0x00,0x57,0x01,0xad,0x00,0x57,0x01,0xad,0x00,0x7a,0x00,0x79,0x00,0x57,0x00,0x6d,0x01,0xad,0x01,0xad
    .type store_op_tab, @object
    .size store_op_tab, .-store_op_tab # 36

# 10014158
glabel load_table
    # 0042A9A8 load_parm_vreg
    # 0042BDAC eval
    .byte 0x00,0x25,0x00,0x26,0x00,0x27,0x00,0x28,0x00,0x2a,0x01,0x30,0x00,0x6c,0x00,0x76,0x00,0x77
    .type load_table, @object
    .size load_table, .-load_table # 18
    .space 2

# 1001416C
glabel store_table
    # 0042BDAC eval
    .ascii "\x00F\x00F\x00L\x00L\x00W\x00W\x00m\x00y\x00z"
    .type store_table, @object
    .size store_table, .-store_table # 18
    .space 2

# 10014180
glabel double_to_singles
    # 00426C54 func_00426C54
    # 00426EF0 iloadistore
    # 00427620 rloadrstore
    # 00427FB8 func_00427FB8
    # 004280C4 func_004280C4
    # 00428190 func_00428190
    # 0042BDAC eval
    .byte 0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x2a,0x00,0x57,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x76,0x01,0xad,0x01,0xad,0x00,0x79,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type double_to_singles, @object
    .size double_to_singles, .-double_to_singles # 860

# 100144DC
glabel unaligned_load_store1
    .byte 0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x5b,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x5d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x5b,0x00,0x5d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type unaligned_load_store1, @object
    .size unaligned_load_store1, .-unaligned_load_store1 # 860

# 10014838
glabel unaligned_load_store2
    .byte 0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x5c,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x5e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x5c,0x00,0x5e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type unaligned_load_store2, @object
    .size unaligned_load_store2, .-unaligned_load_store2 # 860

# 10014B94
glabel unaligned_load_store_tab
    # 00426EF0 iloadistore
    # 00427620 rloadrstore
    # 00427FB8 func_00427FB8
    # 00428384 unaligned_loadstore
    .byte 0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x25,0x01,0xad,0x00,0xcf,0x00,0xd0,0x01,0xad,0x00,0xce,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x46,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xd2,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xd1,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x65,0x01,0x66,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x73,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type unaligned_load_store_tab, @object
    .size unaligned_load_store_tab, .-unaligned_load_store_tab # 860

# 10014EF0
glabel op_tab
    # 00429EE0 get_ops
    .ascii "\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00M\x00P\x00>\x00>\x00>\x00M\x00P\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>\x00>"
    .type op_tab, @object
    .size op_tab, .-op_tab # 312

# 10015028
glabel op
    # 00423AA4 uop_to_asm
    .byte 0x00,0x00,0x00,0x02,0x01,0xad,0x01,0xad,0x00,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x14,0x00,0x0e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x20,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x48,0x00,0x4a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x40,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4d,0x00,0x50,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0e,0x00,0x14,0x00,0x41,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x38,0x01,0xad,0x01,0xad,0x00,0xdb,0x00,0x52,0x01,0xad,0x00,0x5a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x41,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4f,0x00,0x53,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x56,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x59,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type op, @object
    .size op, .-op # 312

# 10015160
glabel uop
    # 00423AA4 uop_to_asm
    .byte 0x00,0x00,0x00,0x02,0x01,0xad,0x01,0xad,0x00,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x15,0x00,0x0f,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x21,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x49,0x00,0x4b,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x40,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4e,0x00,0x51,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0f,0x00,0x15,0x00,0x42,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x38,0x01,0xad,0x01,0xad,0x00,0xdb,0x00,0x52,0x01,0xad,0x00,0x5a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x42,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4f,0x00,0x54,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x56,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x59,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type uop, @object
    .size uop, .-uop # 312

# 10015298
glabel oop
    # 00423AA4 uop_to_asm
    .byte 0x00,0x00,0x00,0x01,0x01,0xad,0x01,0xad,0x00,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x14,0x00,0x0e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x20,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x48,0x00,0x4a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x40,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4d,0x00,0x50,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0e,0x00,0x14,0x00,0x41,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x39,0x01,0xad,0x01,0xad,0x00,0x3d,0x00,0x52,0x01,0xad,0x00,0x5a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x41,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4f,0x00,0x53,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x55,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x59,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type oop, @object
    .size oop, .-oop # 312

# 100153D0
glabel ouop
    # 00423AA4 uop_to_asm
    .byte 0x00,0x00,0x00,0xee,0x01,0xad,0x01,0xad,0x00,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x15,0x00,0x0f,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x21,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x49,0x00,0x4b,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x40,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4e,0x00,0x51,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0f,0x00,0x15,0x00,0x42,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x3a,0x01,0xad,0x01,0xad,0x00,0x3d,0x00,0x52,0x01,0xad,0x00,0x5a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x42,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4f,0x00,0x54,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0xef,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x59,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type ouop, @object
    .size ouop, .-ouop # 312

# 10015508
glabel dw_op
    # 00423AA4 uop_to_asm
    .byte 0x01,0x67,0x01,0x37,0x01,0xad,0x01,0xad,0x00,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x14,0x00,0x0e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x42,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x48,0x00,0x4a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x40,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4d,0x00,0x50,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0e,0x00,0x14,0x01,0x6d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x6a,0x01,0xad,0x01,0xad,0x01,0x69,0x00,0x52,0x01,0xad,0x00,0x5a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x6d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x3a,0x01,0x3c,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x39,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x59,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type dw_op, @object
    .size dw_op, .-dw_op # 312

# 10015640
glabel dw_uop
    # 00423AA4 uop_to_asm
    .byte 0x01,0x67,0x01,0x37,0x01,0xad,0x01,0xad,0x00,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x15,0x00,0x0f,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x43,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x49,0x00,0x4b,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x40,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4e,0x00,0x51,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0f,0x00,0x15,0x01,0x6e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x6a,0x01,0xad,0x01,0xad,0x01,0x69,0x00,0x52,0x01,0xad,0x00,0x5a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x6e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x3a,0x01,0x3b,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x39,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x59,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type dw_uop, @object
    .size dw_uop, .-dw_uop # 312

# 10015778
glabel dw_oop
    # 00423AA4 uop_to_asm
    .byte 0x01,0x67,0x01,0x36,0x01,0xad,0x01,0xad,0x00,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x14,0x00,0x0e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x42,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x48,0x00,0x4a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x40,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4d,0x00,0x50,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0e,0x00,0x14,0x01,0x6d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x6b,0x01,0xad,0x01,0xad,0x01,0x68,0x00,0x52,0x01,0xad,0x00,0x5a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x6d,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x3a,0x01,0x3c,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x38,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x59,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type dw_oop, @object
    .size dw_oop, .-dw_oop # 312

# 100158B0
glabel dw_ouop
    # 00423AA4 uop_to_asm
    .byte 0x01,0x67,0x01,0x71,0x01,0xad,0x01,0xad,0x00,0x03,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x15,0x00,0x0f,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x43,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x49,0x00,0x4b,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x40,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x4e,0x00,0x51,0x01,0xad,0x00,0x47,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x0f,0x00,0x15,0x01,0x6e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x6c,0x01,0xad,0x01,0xad,0x01,0x68,0x00,0x52,0x01,0xad,0x00,0x5a,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x6e,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x3a,0x01,0x3b,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0x72,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x00,0x59,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad,0x01,0xad
    .type dw_ouop, @object
    .size dw_ouop, .-dw_ouop # 312

# 100159E8
glabel op_nor
    # 0042BDAC eval
    .ascii "\x00?"
    .type op_nor, @object
    .size op_nor, .-op_nor # 2
    .space 2

# 100159EC
glabel nor_flag
    # 0042BDAC eval
    .byte 0x00
    .type nor_flag, @object
    .size nor_flag, .-nor_flag # 1
    .space 3

# 100159F0
glabel move_cvt_flag
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
    .byte 0xff,0xff,0xff,0xff
    .type move_cvt_flag, @object
    .size move_cvt_flag, .-move_cvt_flag # 4
    .space 4

D_100159F8:
    # 0042BDAC eval
    .ascii "uabs\x00   uadd\x00   uadj\x00   uaent\x00  uand\x00   uaos\x00   uasym\x00  ubgn\x00   ubgnb\x00  ubsub\x00  ucg1\x00   ucg2\x00   uchkh\x00  uchkl\x00  uchkn\x00  uchkt\x00  ucia\x00   uclab\x00  uclbd\x00  ucomm\x00  ucsym\x00  uctrl\x00  ucubd\x00  ucup\x00   ucvt\x00   ucvtl\x00  udec\x00   udef\x00   udif\x00   udiv\x00   udup\x00   uend\x00   uendb\x00  uent\x00   ueof\x00   uequ\x00   uesym\x00  ufill\x00  ufjp\x00   ufsym\x00  ugeq\x00   ugrt\x00   ugsym\x00  uhsym\x00  uicuf\x00  uidx\x00   uiequ\x00  uigeq\x00  uigrt\x00  uijp\x00   uilda\x00  uildv\x00  uileq\x00  uiles\x00  uilod\x00  uinc\x00   uineq\x00  uinit\x00  uinn\x00   uint\x00   uior\x00   uisld\x00  uisst\x00  uistr\x00  uistv\x00  uixa\x00   ulab\x00   ulbd\x00   ulbdy\x00  ulbgn\x00  ulca\x00   ulda\x00   uldap\x00  uldc\x00   uldef\x00  uldsp\x00  ulend\x00  uleq\x00   ules\x00   ulex\x00   ulnot\x00  uloc\x00   ulod\x00   ulsym\x00  ultrm\x00  umax\x00   umin\x00   umod\x00   umov\x00   umovv\x00  umpmv\x00  umpy\x00   umst\x00   umus\x00   uneg\x00   uneq\x00   unop\x00   unot\x00   uodd\x00   uoptn\x00  upar\x00   updef\x00  upmov\x00  upop\x00   uregs\x00  urem\x00   uret\x00   urlda\x00  urldc\x00  urlod\x00  urnd\x00   urpar\x00  urstr\x00  usdef\x00  usgs\x00   ushl\x00   ushr\x00   usign\x00  usqr\x00   usqrt\x00  ussym\x00  ustep\x00  ustp\x00   ustr\x00   ustsp\x00  usub\x00   uswp\x00   utjp\x00   utpeq\x00  utpge\x00  utpgt\x00  utple\x00  utplt\x00  utpne\x00  utyp\x00   uubd\x00   uujp\x00   uunal\x00  uuni\x00   uvreg\x00  uxjp\x00   uxor\x00   uxpar\x00  umtag\x00  ualia\x00  uildi\x00  uisti\x00  uirld\x00  uirst\x00  uldrc\x00  umsym\x00  urcuf\x00  uksym\x00  uosym\x00  uirlv\x00  uirsv\x00\x00 "

D_10015ED8:
    # 0042BDAC eval
    .ascii "xr0\x00xr1\x00xr2\x00xr3\x00xr4\x00xr5\x00xr6\x00xr7\x00xr8\x00xr9\x00xr10\x00   xr11\x00   xr12\x00   xr13\x00   xr14\x00   xr15\x00   xr16\x00   xr17\x00   xr18\x00   xr19\x00   xr20\x00   xr21\x00   xr22\x00   xr23\x00   xr24\x00   xr25\x00   xr26\x00   xr27\x00   xr28\x00   xr29\x00   xr30\x00   xr31\x00   xfr0\x00   xfr1\x00   xfr2\x00   xfr3\x00   xfr4\x00   xfr5\x00   xfr6\x00   xfr7\x00   xfr8\x00   xfr9\x00   xfr10\x00  xfr11\x00  xfr12\x00  xfr13\x00  xfr14\x00  xfr15\x00  xfr16\x00  xfr17\x00  xfr18\x00  xfr19\x00  xfr20\x00  xfr21\x00  xfr22\x00  xfr23\x00  xfr24\x00  xfr25\x00  xfr26\x00  xfr27\x00  xfr28\x00  xfr29\x00  xfr30\x00  xfr31\x00  xfcc0\x00  xfcc1\x00  xfcc2\x00  xfcc3\x00  xfcc4\x00  xfcc5\x00  xfcc6\x00  xfcc7\x00  xnoreg\x00\x00"

D_100160F8:
    # 004231F0 is_end_return
    .byte 0x00,0x80,0x10,0x10,0x80,0x00,0x00,0x00,0x20,0x01,0x40,0x00,0x90,0x00,0x40,0x00

D_10016108:
    # 00426EF0 iloadistore
    .byte 0x01,0x80,0x00,0x00,0x00,0x08,0x00,0x00

D_10016110:
    # 00427620 rloadrstore
    .byte 0x01,0x80,0x00,0x00,0x00,0x08,0x00,0x00

D_10016118:
    # 00429EE0 get_ops
    .byte 0x00,0x03,0x8c,0x80,0x00,0x00,0x00,0xa0,0x02,0x00,0x00,0x00

D_10016124:
    # 0042B878 clean_tree
    .byte 0x10,0x10,0x40,0x00,0x42,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x88,0x00,0x00

D_10016138:
    # 0042B878 clean_tree
    .byte 0x10,0x10,0x40,0x00,0x40,0x00,0x00,0x00,0x20,0x00,0x00,0x00

D_10016144:
    # 0042BDAC eval
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10016154:
    # 0042BDAC eval
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_1001615C:
    # 0042BDAC eval
    .byte 0x11,0x80,0x50,0x10,0xc0,0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x94,0x80,0x40,0x00,0x00,0x40,0x00,0x00



.bss
    .balign 4
# 10021374
glabel first_ent
    # 0042BDAC eval
    # 0044BF18 main
    .space 4
    .size first_ent, 4
    .type first_ent, @object

    .balign 4
# 10021378
glabel local_var_size
    # 0042BDAC eval
    .space 4
    .size local_var_size, 4
    .type local_var_size, @object

    .balign 4
# 1002137C
glabel temp_size
    # 0042BDAC eval
    .space 4
    .size temp_size, 4
    .type temp_size, @object

    .balign 4
# 10021380
glabel generate_again
    # 0042BDAC eval
    # 0043303C init_eval
    .space 4
    .size generate_again, 4
    .type generate_again, @object

    .balign 4
# 10021388
glabel first_loc
    # 0042BDAC eval
    # 0043303C init_eval
    .space 4
    .size first_loc, 4
    .type first_loc, @object

    .balign 4
# 1002138C
glabel first_file_number
    # 0042BDAC eval
    # 0043303C init_eval
    .space 4
    .size first_file_number, 4
    .type first_file_number, @object

    .balign 4
# 10021390
glabel first_line_number
    # 0042BDAC eval
    # 0043303C init_eval
    .space 4
    .size first_line_number, 4
    .type first_line_number, @object

    .balign 4
# 10021394
glabel max_arg_build
    # 0042BDAC eval
    .space 4
    .size max_arg_build, 4
    .type max_arg_build, @object

    .balign 4
# 10021398
glabel reloc_arg_build
    # 0042BDAC eval
    .space 4
    .size reloc_arg_build, 4
    .type reloc_arg_build, @object

    .balign 4
# 1002139C
glabel saved_regs_size
    # 0042BDAC eval
    .space 4
    .size saved_regs_size, 4
    .type saved_regs_size, @object

    .balign 4
# 100213A0
glabel has_aent
    # 0042BDAC eval
    .space 4
    .size has_aent, 4
    .type has_aent, @object

    .balign 4
# 100213A4
glabel load_stack_limit
    # 0042BDAC eval
    .space 4
    .size load_stack_limit, 4
    .type load_stack_limit, @object

    .balign 4
# 100213A8
glabel entry_point_index
    # 0042BDAC eval
    .space 4
    .size entry_point_index, 4
    .type entry_point_index, @object

    .balign 4
# 100213AC
glabel curlev
    # 0042BDAC eval
    .space 4
    .size curlev, 4
    .type curlev, @object

    .balign 4
# 100213B0
glabel pdefs
    # 0042A91C pass_in_register
    # 0042B410 home_parms
    # 0042BDAC eval
    # 004432FC translate
    .space 4
    .size pdefs, 4
    .type pdefs, @object

    .balign 8
# 10021478
glabel current_text_sec
    # 0042BDAC eval
    .space 8
    .size current_text_sec, 8
    .type current_text_sec, @object

    .balign 8
# 100214B0
glabel pmov_regs
    # 0042B978 clear_pmov_regs
    # 0042B9A0 save_pmov_reg
    # 0042BA08 load_pmov_regs
    .space 12
    .size pmov_regs, 12
    .type pmov_regs, @object

    .balign 16
# 10021590
glabel noalias_on_off
    # 0042BDAC eval
    .space 76
    .size noalias_on_off, 76
    .type noalias_on_off, @object

    .balign 16
# 100217F8
glabel noalias_regs
    # 0042BDAC eval
    .space 292
    .size noalias_regs, 292
    .type noalias_regs, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel is_end_return
    .ent is_end_return
    # 0042BDAC eval
/* 004231F0 908E0020 */  lbu   $t6, 0x20($a0)
/* 004231F4 24010088 */  li    $at, 136
/* 004231F8 00801025 */  move  $v0, $a0
/* 004231FC 15C10004 */  bne   $t6, $at, .L00423210
/* 00423200 00000000 */   nop   
/* 00423204 8C8F0004 */  lw    $t7, 4($a0)
/* 00423208 10000001 */  b     .L00423210
/* 0042320C 8DE20008 */   lw    $v0, 8($t7)
.L00423210:
/* 00423210 90430020 */  lbu   $v1, 0x20($v0)
/* 00423214 2C780080 */  sltiu $t8, $v1, 0x80
/* 00423218 13000009 */  beqz  $t8, .L00423240
/* 0042321C 00000000 */   nop   
/* 00423220 8F898038 */  lw    $t1, %got(D_100160F8)($gp)
/* 00423224 0003C943 */  sra   $t9, $v1, 5
/* 00423228 00194080 */  sll   $t0, $t9, 2
/* 0042322C 252960F8 */  addiu $t1, %lo(D_100160F8) # addiu $t1, $t1, 0x60f8
/* 00423230 01285021 */  addu  $t2, $t1, $t0
/* 00423234 8D4B0000 */  lw    $t3, ($t2)
/* 00423238 006B6004 */  sllv  $t4, $t3, $v1
/* 0042323C 29980000 */  slti  $t8, $t4, 0
.L00423240:
/* 00423240 53000011 */  beql  $t8, $zero, .L00423288
/* 00423244 3862001F */   xori  $v0, $v1, 0x1f
/* 00423248 8C420008 */  lw    $v0, 8($v0)
.L0042324C:
/* 0042324C 90430020 */  lbu   $v1, 0x20($v0)
/* 00423250 2C6E0080 */  sltiu $t6, $v1, 0x80
/* 00423254 11C00009 */  beqz  $t6, .L0042327C
/* 00423258 00000000 */   nop   
/* 0042325C 8F898038 */  lw    $t1, %got(D_100160F8)($gp)
/* 00423260 00037943 */  sra   $t7, $v1, 5
/* 00423264 000FC880 */  sll   $t9, $t7, 2
/* 00423268 252960F8 */  addiu $t1, %lo(D_100160F8) # addiu $t1, $t1, 0x60f8
/* 0042326C 01394021 */  addu  $t0, $t1, $t9
/* 00423270 8D0A0000 */  lw    $t2, ($t0)
/* 00423274 006A5804 */  sllv  $t3, $t2, $v1
/* 00423278 296E0000 */  slti  $t6, $t3, 0
.L0042327C:
/* 0042327C 55C0FFF3 */  bnel  $t6, $zero, .L0042324C
/* 00423280 8C420008 */   lw    $v0, 8($v0)
/* 00423284 3862001F */  xori  $v0, $v1, 0x1f
.L00423288:
/* 00423288 03E00008 */  jr    $ra
/* 0042328C 2C420001 */   sltiu $v0, $v0, 1
    .type is_end_return, @function
    .size is_end_return, .-is_end_return
    .end is_end_return

glabel move_dreg_to_regs
    .ent move_dreg_to_regs
    # 0042BDAC eval
/* 00423290 3C1C0FC0 */  .cpload $t9
/* 00423294 279CC7C0 */  
/* 00423298 0399E021 */  
/* 0042329C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004232A0 AFB20024 */  sw    $s2, 0x24($sp)
/* 004232A4 30B200FF */  andi  $s2, $a1, 0xff
/* 004232A8 AFB10020 */  sw    $s1, 0x20($sp)
/* 004232AC 309100FF */  andi  $s1, $a0, 0xff
/* 004232B0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004232B4 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004232B8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004232BC AFA40030 */  sw    $a0, 0x30($sp)
/* 004232C0 16400011 */  bnez  $s2, .L00423308
/* 004232C4 AFA50034 */   sw    $a1, 0x34($sp)
/* 004232C8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 004232CC 24040029 */  li    $a0, 41
/* 004232D0 02202825 */  move  $a1, $s1
/* 004232D4 00003025 */  move  $a2, $zero
/* 004232D8 0320F809 */  jalr  $t9
/* 004232DC 00003825 */   move  $a3, $zero
/* 004232E0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004232E4 26300001 */  addiu $s0, $s1, 1
/* 004232E8 02002825 */  move  $a1, $s0
/* 004232EC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 004232F0 24040029 */  li    $a0, 41
/* 004232F4 00003025 */  move  $a2, $zero
/* 004232F8 0320F809 */  jalr  $t9
/* 004232FC 00003825 */   move  $a3, $zero
/* 00423300 1000006E */  b     .L004234BC
/* 00423304 8FBC0028 */   lw    $gp, 0x28($sp)
.L00423308:
/* 00423308 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0042330C 91CE0000 */  lbu   $t6, ($t6)
/* 00423310 11C00036 */  beqz  $t6, .L004233EC
/* 00423314 00000000 */   nop   
/* 00423318 1632001B */  bne   $s1, $s2, .L00423388
/* 0042331C 2404013A */   li    $a0, 314
/* 00423320 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00423324 26300001 */  addiu $s0, $s1, 1
/* 00423328 02002825 */  move  $a1, $s0
/* 0042332C 2404013C */  li    $a0, 316
/* 00423330 02403025 */  move  $a2, $s2
/* 00423334 24070020 */  li    $a3, 32
/* 00423338 0320F809 */  jalr  $t9
/* 0042333C AFA00010 */   sw    $zero, 0x10($sp)
/* 00423340 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00423344 2404013A */  li    $a0, 314
/* 00423348 02202825 */  move  $a1, $s1
/* 0042334C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00423350 02403025 */  move  $a2, $s2
/* 00423354 24070020 */  li    $a3, 32
/* 00423358 0320F809 */  jalr  $t9
/* 0042335C AFA00010 */   sw    $zero, 0x10($sp)
/* 00423360 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00423364 2404013C */  li    $a0, 316
/* 00423368 02202825 */  move  $a1, $s1
/* 0042336C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00423370 02203025 */  move  $a2, $s1
/* 00423374 24070020 */  li    $a3, 32
/* 00423378 0320F809 */  jalr  $t9
/* 0042337C AFA00010 */   sw    $zero, 0x10($sp)
/* 00423380 1000004E */  b     .L004234BC
/* 00423384 8FBC0028 */   lw    $gp, 0x28($sp)
.L00423388:
/* 00423388 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042338C 02202825 */  move  $a1, $s1
/* 00423390 02403025 */  move  $a2, $s2
/* 00423394 24070020 */  li    $a3, 32
/* 00423398 0320F809 */  jalr  $t9
/* 0042339C AFA00010 */   sw    $zero, 0x10($sp)
/* 004233A0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004233A4 2404013C */  li    $a0, 316
/* 004233A8 02202825 */  move  $a1, $s1
/* 004233AC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004233B0 02203025 */  move  $a2, $s1
/* 004233B4 24070020 */  li    $a3, 32
/* 004233B8 0320F809 */  jalr  $t9
/* 004233BC AFA00010 */   sw    $zero, 0x10($sp)
/* 004233C0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004233C4 26300001 */  addiu $s0, $s1, 1
/* 004233C8 02002825 */  move  $a1, $s0
/* 004233CC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004233D0 2404013C */  li    $a0, 316
/* 004233D4 02403025 */  move  $a2, $s2
/* 004233D8 24070020 */  li    $a3, 32
/* 004233DC 0320F809 */  jalr  $t9
/* 004233E0 AFA00010 */   sw    $zero, 0x10($sp)
/* 004233E4 10000035 */  b     .L004234BC
/* 004233E8 8FBC0028 */   lw    $gp, 0x28($sp)
.L004233EC:
/* 004233EC 1632001B */  bne   $s1, $s2, .L0042345C
/* 004233F0 2404013C */   li    $a0, 316
/* 004233F4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004233F8 26300001 */  addiu $s0, $s1, 1
/* 004233FC 02002825 */  move  $a1, $s0
/* 00423400 2404013A */  li    $a0, 314
/* 00423404 02403025 */  move  $a2, $s2
/* 00423408 24070020 */  li    $a3, 32
/* 0042340C 0320F809 */  jalr  $t9
/* 00423410 AFA00010 */   sw    $zero, 0x10($sp)
/* 00423414 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00423418 2404013C */  li    $a0, 316
/* 0042341C 02002825 */  move  $a1, $s0
/* 00423420 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00423424 02003025 */  move  $a2, $s0
/* 00423428 24070020 */  li    $a3, 32
/* 0042342C 0320F809 */  jalr  $t9
/* 00423430 AFA00010 */   sw    $zero, 0x10($sp)
/* 00423434 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00423438 2404013C */  li    $a0, 316
/* 0042343C 02202825 */  move  $a1, $s1
/* 00423440 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00423444 02403025 */  move  $a2, $s2
/* 00423448 24070020 */  li    $a3, 32
/* 0042344C 0320F809 */  jalr  $t9
/* 00423450 AFA00010 */   sw    $zero, 0x10($sp)
/* 00423454 10000019 */  b     .L004234BC
/* 00423458 8FBC0028 */   lw    $gp, 0x28($sp)
.L0042345C:
/* 0042345C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00423460 02202825 */  move  $a1, $s1
/* 00423464 02403025 */  move  $a2, $s2
/* 00423468 24070020 */  li    $a3, 32
/* 0042346C 0320F809 */  jalr  $t9
/* 00423470 AFA00010 */   sw    $zero, 0x10($sp)
/* 00423474 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00423478 26300001 */  addiu $s0, $s1, 1
/* 0042347C 02002825 */  move  $a1, $s0
/* 00423480 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00423484 2404013A */  li    $a0, 314
/* 00423488 02403025 */  move  $a2, $s2
/* 0042348C 24070020 */  li    $a3, 32
/* 00423490 0320F809 */  jalr  $t9
/* 00423494 AFA00010 */   sw    $zero, 0x10($sp)
/* 00423498 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042349C 2404013C */  li    $a0, 316
/* 004234A0 02002825 */  move  $a1, $s0
/* 004234A4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004234A8 02003025 */  move  $a2, $s0
/* 004234AC 24070020 */  li    $a3, 32
/* 004234B0 0320F809 */  jalr  $t9
/* 004234B4 AFA00010 */   sw    $zero, 0x10($sp)
/* 004234B8 8FBC0028 */  lw    $gp, 0x28($sp)
.L004234BC:
/* 004234BC 8F8F89D8 */  lw     $t7, %got(opcode_arch)($gp)
/* 004234C0 24010001 */  li    $at, 1
/* 004234C4 2E380020 */  sltiu $t8, $s1, 0x20
/* 004234C8 91EF0000 */  lbu   $t7, ($t7)
/* 004234CC 55E1000D */  bnel  $t7, $at, .L00423504
/* 004234D0 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004234D4 0018C823 */  negu  $t9, $t8
/* 004234D8 3C010A00 */  lui   $at, 0xa00
/* 004234DC 03214024 */  and   $t0, $t9, $at
/* 004234E0 02284804 */  sllv  $t1, $t0, $s1
/* 004234E4 05210006 */  bgez  $t1, .L00423500
/* 004234E8 00115080 */   sll   $t2, $s1, 2
/* 004234EC 8F8B8BCC */  lw     $t3, %got(regs)($gp)
/* 004234F0 01515023 */  subu  $t2, $t2, $s1
/* 004234F4 000A5080 */  sll   $t2, $t2, 2
/* 004234F8 014B6021 */  addu  $t4, $t2, $t3
/* 004234FC A1900009 */  sb    $s0, 9($t4)
.L00423500:
/* 00423500 8FBF002C */  lw    $ra, 0x2c($sp)
.L00423504:
/* 00423504 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00423508 8FB10020 */  lw    $s1, 0x20($sp)
/* 0042350C 8FB20024 */  lw    $s2, 0x24($sp)
/* 00423510 03E00008 */  jr    $ra
/* 00423514 27BD0030 */   addiu $sp, $sp, 0x30
    .type move_dreg_to_regs, @function
    .size move_dreg_to_regs, .-move_dreg_to_regs
    .end move_dreg_to_regs

glabel move_two_regs
    .ent move_two_regs
    # 0042BDAC eval
/* 00423518 3C1C0FC0 */  .cpload $t9
/* 0042351C 279CC538 */  
/* 00423520 0399E021 */  
/* 00423524 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00423528 308700FF */  andi  $a3, $a0, 0xff
/* 0042352C 30A600FF */  andi  $a2, $a1, 0xff
/* 00423530 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00423534 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00423538 AFA40028 */  sw    $a0, 0x28($sp)
/* 0042353C 10E6001D */  beq   $a3, $a2, .L004235B4
/* 00423540 AFA5002C */   sw    $a1, 0x2c($sp)
/* 00423544 24CEFFE0 */  addiu $t6, $a2, -0x20
/* 00423548 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0042354C 000FC023 */  negu  $t8, $t7
/* 00423550 01D8C804 */  sllv  $t9, $t8, $t6
/* 00423554 07210008 */  bgez  $t9, .L00423578
/* 00423558 00E02825 */   move  $a1, $a3
/* 0042355C 2CE80020 */  sltiu $t0, $a3, 0x20
/* 00423560 00084823 */  negu  $t1, $t0
/* 00423564 00E95004 */  sllv  $t2, $t1, $a3
/* 00423568 05430004 */  bgezl $t2, .L0042357C
/* 0042356C 24040031 */   li    $a0, 49
/* 00423570 10000002 */  b     .L0042357C
/* 00423574 24040061 */   li    $a0, 97
.L00423578:
/* 00423578 24040031 */  li    $a0, 49
.L0042357C:
/* 0042357C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00423580 A7A40026 */  sh    $a0, 0x26($sp)
/* 00423584 A3A6002F */  sb    $a2, 0x2f($sp)
/* 00423588 0320F809 */  jalr  $t9
/* 0042358C A3A7002B */   sb    $a3, 0x2b($sp)
/* 00423590 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00423594 93A7002B */  lbu   $a3, 0x2b($sp)
/* 00423598 93A6002F */  lbu   $a2, 0x2f($sp)
/* 0042359C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004235A0 97A40026 */  lhu   $a0, 0x26($sp)
/* 004235A4 24E50001 */  addiu $a1, $a3, 1
/* 004235A8 0320F809 */  jalr  $t9
/* 004235AC 24C60001 */   addiu $a2, $a2, 1
/* 004235B0 8FBC0018 */  lw    $gp, 0x18($sp)
.L004235B4:
/* 004235B4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004235B8 27BD0028 */  addiu $sp, $sp, 0x28
/* 004235BC 03E00008 */  jr    $ra
/* 004235C0 00000000 */   nop   
    .type move_two_regs, @function
    .size move_two_regs, .-move_two_regs
    .end move_two_regs

glabel fasm
    .ent fasm
    # 0042BDAC eval
    # 00433070 load_fp_literal
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
/* 004235C4 3C1C0FC0 */  .cpload $t9
/* 004235C8 279CC48C */  
/* 004235CC 0399E021 */  
/* 004235D0 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 004235D4 30A200FF */  andi  $v0, $a1, 0xff
/* 004235D8 244EFFF4 */  addiu $t6, $v0, -0xc
/* 004235DC 2DC10005 */  sltiu $at, $t6, 5
/* 004235E0 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 004235E4 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 004235E8 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 004235EC 1020004B */  beqz  $at, .L0042371C
/* 004235F0 AFA500C4 */   sw    $a1, 0xc4($sp)
/* 004235F4 8F818038 */  lw    $at, %got(jtbl_10009AC0)($gp)
/* 004235F8 000E7080 */  sll   $t6, $t6, 2
/* 004235FC 002E0821 */  addu  $at, $at, $t6
/* 00423600 8C2E9AC0 */  lw    $t6, %lo(jtbl_10009AC0)($at)
/* 00423604 01DC7021 */  addu  $t6, $t6, $gp
/* 00423608 01C00008 */  jr    $t6
/* 0042360C 00000000 */   nop   
.L00423610:
/* 00423610 10000081 */  b     .L00423818
/* 00423614 00801025 */   move  $v0, $a0
.L00423618:
/* 00423618 1000007F */  b     .L00423818
/* 0042361C 24820001 */   addiu $v0, $a0, 1
.L00423620:
/* 00423620 8F8F8038 */  lw    $t7, %got(RO_10009A70)($gp)
/* 00423624 24040004 */  li    $a0, 4
/* 00423628 24050346 */  li    $a1, 838
/* 0042362C 25EF9A70 */  addiu $t7, %lo(RO_10009A70) # addiu $t7, $t7, -0x6590
/* 00423630 25E90048 */  addiu $t1, $t7, 0x48
/* 00423634 03A04025 */  move  $t0, $sp
.L00423638:
/* 00423638 89F90000 */  lwl   $t9, ($t7)
/* 0042363C 99F90003 */  lwr   $t9, 3($t7)
/* 00423640 25EF000C */  addiu $t7, $t7, 0xc
/* 00423644 2508000C */  addiu $t0, $t0, 0xc
/* 00423648 A919FFFC */  swl   $t9, -4($t0)
/* 0042364C B919FFFF */  swr   $t9, -1($t0)
/* 00423650 89F8FFF8 */  lwl   $t8, -8($t7)
/* 00423654 99F8FFFB */  lwr   $t8, -5($t7)
/* 00423658 A9180000 */  swl   $t8, ($t0)
/* 0042365C B9180003 */  swr   $t8, 3($t0)
/* 00423660 89F9FFFC */  lwl   $t9, -4($t7)
/* 00423664 99F9FFFF */  lwr   $t9, -1($t7)
/* 00423668 A9190004 */  swl   $t9, 4($t0)
/* 0042366C 15E9FFF2 */  bne   $t7, $t1, .L00423638
/* 00423670 B9190007 */   swr   $t9, 7($t0)
/* 00423674 89F90000 */  lwl   $t9, ($t7)
/* 00423678 99F90003 */  lwr   $t9, 3($t7)
/* 0042367C 8F8A8038 */  lw    $t2, %got(RO_10009A20)($gp)
/* 00423680 03A06825 */  move  $t5, $sp
/* 00423684 A9190008 */  swl   $t9, 8($t0)
/* 00423688 B919000B */  swr   $t9, 0xb($t0)
/* 0042368C 89F80004 */  lwl   $t8, 4($t7)
/* 00423690 99F80007 */  lwr   $t8, 7($t7)
/* 00423694 254A9A20 */  addiu $t2, %lo(RO_10009A20) # addiu $t2, $t2, -0x65e0
/* 00423698 254E0048 */  addiu $t6, $t2, 0x48
/* 0042369C A918000C */  swl   $t8, 0xc($t0)
/* 004236A0 B918000F */  swr   $t8, 0xf($t0)
.L004236A4:
/* 004236A4 894C0000 */  lwl   $t4, ($t2)
/* 004236A8 994C0003 */  lwr   $t4, 3($t2)
/* 004236AC 254A000C */  addiu $t2, $t2, 0xc
/* 004236B0 25AD000C */  addiu $t5, $t5, 0xc
/* 004236B4 A9AC004C */  swl   $t4, 0x4c($t5)
/* 004236B8 B9AC004F */  swr   $t4, 0x4f($t5)
/* 004236BC 894BFFF8 */  lwl   $t3, -8($t2)
/* 004236C0 994BFFFB */  lwr   $t3, -5($t2)
/* 004236C4 A9AB0050 */  swl   $t3, 0x50($t5)
/* 004236C8 B9AB0053 */  swr   $t3, 0x53($t5)
/* 004236CC 894CFFFC */  lwl   $t4, -4($t2)
/* 004236D0 994CFFFF */  lwr   $t4, -1($t2)
/* 004236D4 A9AC0054 */  swl   $t4, 0x54($t5)
/* 004236D8 154EFFF2 */  bne   $t2, $t6, .L004236A4
/* 004236DC B9AC0057 */   swr   $t4, 0x57($t5)
/* 004236E0 894C0000 */  lwl   $t4, ($t2)
/* 004236E4 994C0003 */  lwr   $t4, 3($t2)
/* 004236E8 A9AC0058 */  swl   $t4, 0x58($t5)
/* 004236EC B9AC005B */  swr   $t4, 0x5b($t5)
/* 004236F0 894B0004 */  lwl   $t3, 4($t2)
/* 004236F4 994B0007 */  lwr   $t3, 7($t2)
/* 004236F8 A9AB005C */  swl   $t3, 0x5c($t5)
/* 004236FC B9AB005F */  swr   $t3, 0x5f($t5)
/* 00423700 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00423704 8FA7000C */  lw    $a3, 0xc($sp)
/* 00423708 8FA60008 */  lw    $a2, 8($sp)
/* 0042370C 0320F809 */  jalr  $t9
/* 00423710 00000000 */   nop   
/* 00423714 1000003F */  b     .L00423814
/* 00423718 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0042371C:
/* 0042371C 8F898038 */  lw    $t1, %got(RO_100099D0)($gp)
/* 00423720 24040004 */  li    $a0, 4
/* 00423724 2405034C */  li    $a1, 844
/* 00423728 252999D0 */  addiu $t1, %lo(RO_100099D0) # addiu $t1, $t1, -0x6630
/* 0042372C 25390048 */  addiu $t9, $t1, 0x48
/* 00423730 03A0C025 */  move  $t8, $sp
.L00423734:
/* 00423734 89280000 */  lwl   $t0, ($t1)
/* 00423738 99280003 */  lwr   $t0, 3($t1)
/* 0042373C 2529000C */  addiu $t1, $t1, 0xc
/* 00423740 2718000C */  addiu $t8, $t8, 0xc
/* 00423744 AB08FFFC */  swl   $t0, -4($t8)
/* 00423748 BB08FFFF */  swr   $t0, -1($t8)
/* 0042374C 892FFFF8 */  lwl   $t7, -8($t1)
/* 00423750 992FFFFB */  lwr   $t7, -5($t1)
/* 00423754 AB0F0000 */  swl   $t7, ($t8)
/* 00423758 BB0F0003 */  swr   $t7, 3($t8)
/* 0042375C 8928FFFC */  lwl   $t0, -4($t1)
/* 00423760 9928FFFF */  lwr   $t0, -1($t1)
/* 00423764 AB080004 */  swl   $t0, 4($t8)
/* 00423768 1539FFF2 */  bne   $t1, $t9, .L00423734
/* 0042376C BB080007 */   swr   $t0, 7($t8)
/* 00423770 89280000 */  lwl   $t0, ($t1)
/* 00423774 99280003 */  lwr   $t0, 3($t1)
/* 00423778 8F8E8038 */  lw    $t6, %got(RO_10009980)($gp)
/* 0042377C 03A05825 */  move  $t3, $sp
/* 00423780 AB080008 */  swl   $t0, 8($t8)
/* 00423784 BB08000B */  swr   $t0, 0xb($t8)
/* 00423788 892F0004 */  lwl   $t7, 4($t1)
/* 0042378C 992F0007 */  lwr   $t7, 7($t1)
/* 00423790 25CE9980 */  addiu $t6, %lo(RO_10009980) # addiu $t6, $t6, -0x6680
/* 00423794 25CC0048 */  addiu $t4, $t6, 0x48
/* 00423798 AB0F000C */  swl   $t7, 0xc($t8)
/* 0042379C BB0F000F */  swr   $t7, 0xf($t8)
.L004237A0:
/* 004237A0 89CD0000 */  lwl   $t5, ($t6)
/* 004237A4 99CD0003 */  lwr   $t5, 3($t6)
/* 004237A8 25CE000C */  addiu $t6, $t6, 0xc
/* 004237AC 256B000C */  addiu $t3, $t3, 0xc
/* 004237B0 A96D004C */  swl   $t5, 0x4c($t3)
/* 004237B4 B96D004F */  swr   $t5, 0x4f($t3)
/* 004237B8 89CAFFF8 */  lwl   $t2, -8($t6)
/* 004237BC 99CAFFFB */  lwr   $t2, -5($t6)
/* 004237C0 A96A0050 */  swl   $t2, 0x50($t3)
/* 004237C4 B96A0053 */  swr   $t2, 0x53($t3)
/* 004237C8 89CDFFFC */  lwl   $t5, -4($t6)
/* 004237CC 99CDFFFF */  lwr   $t5, -1($t6)
/* 004237D0 A96D0054 */  swl   $t5, 0x54($t3)
/* 004237D4 15CCFFF2 */  bne   $t6, $t4, .L004237A0
/* 004237D8 B96D0057 */   swr   $t5, 0x57($t3)
/* 004237DC 89CD0000 */  lwl   $t5, ($t6)
/* 004237E0 99CD0003 */  lwr   $t5, 3($t6)
/* 004237E4 A96D0058 */  swl   $t5, 0x58($t3)
/* 004237E8 B96D005B */  swr   $t5, 0x5b($t3)
/* 004237EC 89CA0004 */  lwl   $t2, 4($t6)
/* 004237F0 99CA0007 */  lwr   $t2, 7($t6)
/* 004237F4 A96A005C */  swl   $t2, 0x5c($t3)
/* 004237F8 B96A005F */  swr   $t2, 0x5f($t3)
/* 004237FC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00423800 8FA7000C */  lw    $a3, 0xc($sp)
/* 00423804 8FA60008 */  lw    $a2, 8($sp)
/* 00423808 0320F809 */  jalr  $t9
/* 0042380C 00000000 */   nop   
/* 00423810 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00423814:
/* 00423814 97A200BE */  lhu   $v0, 0xbe($sp)
.L00423818:
/* 00423818 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0042381C 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 00423820 03E00008 */  jr    $ra
/* 00423824 00000000 */   nop   
    .type fasm, @function
    .size fasm, .-fasm
    .end fasm

glabel fop
    .ent fop
    # 00423AA4 uop_to_asm
    # 00423D28 jump
    # 00424240 trap
    # 004285F0 eval_fp_cond
    # 004287AC eval_fp_min_max
    # 0042BDAC eval
/* 00423828 3C1C0FC0 */  .cpload $t9
/* 0042382C 279CC228 */  
/* 00423830 0399E021 */  
/* 00423834 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00423838 30A200FF */  andi  $v0, $a1, 0xff
/* 0042383C 244EFFF4 */  addiu $t6, $v0, -0xc
/* 00423840 2DC10005 */  sltiu $at, $t6, 5
/* 00423844 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00423848 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0042384C AFA400C0 */  sw    $a0, 0xc0($sp)
/* 00423850 10200051 */  beqz  $at, .L00423998
/* 00423854 AFA500C4 */   sw    $a1, 0xc4($sp)
/* 00423858 8F818038 */  lw    $at, %got(jtbl_10009C14)($gp)
/* 0042385C 000E7080 */  sll   $t6, $t6, 2
/* 00423860 002E0821 */  addu  $at, $at, $t6
/* 00423864 8C2E9C14 */  lw    $t6, %lo(jtbl_10009C14)($at)
/* 00423868 01DC7021 */  addu  $t6, $t6, $gp
/* 0042386C 01C00008 */  jr    $t6
/* 00423870 00000000 */   nop   
.L00423874:
/* 00423874 8F98887C */  lw     $t8, %got(spop_tab)($gp)
/* 00423878 00047840 */  sll   $t7, $a0, 1
/* 0042387C 01F8C821 */  addu  $t9, $t7, $t8
/* 00423880 10000084 */  b     .L00423A94
/* 00423884 97220000 */   lhu   $v0, ($t9)
.L00423888:
/* 00423888 8F898880 */  lw     $t1, %got(dpop_tab)($gp)
/* 0042388C 00044040 */  sll   $t0, $a0, 1
/* 00423890 01095021 */  addu  $t2, $t0, $t1
/* 00423894 1000007F */  b     .L00423A94
/* 00423898 95420000 */   lhu   $v0, ($t2)
.L0042389C:
/* 0042389C 8F8B8038 */  lw    $t3, %got(RO_10009BC4)($gp)
/* 004238A0 24040004 */  li    $a0, 4
/* 004238A4 24050358 */  li    $a1, 856
/* 004238A8 256B9BC4 */  addiu $t3, %lo(RO_10009BC4) # addiu $t3, $t3, -0x643c
/* 004238AC 256F0048 */  addiu $t7, $t3, 0x48
/* 004238B0 03A07025 */  move  $t6, $sp
.L004238B4:
/* 004238B4 896D0000 */  lwl   $t5, ($t3)
/* 004238B8 996D0003 */  lwr   $t5, 3($t3)
/* 004238BC 256B000C */  addiu $t3, $t3, 0xc
/* 004238C0 25CE000C */  addiu $t6, $t6, 0xc
/* 004238C4 A9CDFFFC */  swl   $t5, -4($t6)
/* 004238C8 B9CDFFFF */  swr   $t5, -1($t6)
/* 004238CC 896CFFF8 */  lwl   $t4, -8($t3)
/* 004238D0 996CFFFB */  lwr   $t4, -5($t3)
/* 004238D4 A9CC0000 */  swl   $t4, ($t6)
/* 004238D8 B9CC0003 */  swr   $t4, 3($t6)
/* 004238DC 896DFFFC */  lwl   $t5, -4($t3)
/* 004238E0 996DFFFF */  lwr   $t5, -1($t3)
/* 004238E4 A9CD0004 */  swl   $t5, 4($t6)
/* 004238E8 156FFFF2 */  bne   $t3, $t7, .L004238B4
/* 004238EC B9CD0007 */   swr   $t5, 7($t6)
/* 004238F0 896D0000 */  lwl   $t5, ($t3)
/* 004238F4 996D0003 */  lwr   $t5, 3($t3)
/* 004238F8 8F988038 */  lw    $t8, %got(RO_10009B74)($gp)
/* 004238FC 03A04825 */  move  $t1, $sp
/* 00423900 A9CD0008 */  swl   $t5, 8($t6)
/* 00423904 B9CD000B */  swr   $t5, 0xb($t6)
/* 00423908 896C0004 */  lwl   $t4, 4($t3)
/* 0042390C 996C0007 */  lwr   $t4, 7($t3)
/* 00423910 27189B74 */  addiu $t8, %lo(RO_10009B74) # addiu $t8, $t8, -0x648c
/* 00423914 270A0048 */  addiu $t2, $t8, 0x48
/* 00423918 A9CC000C */  swl   $t4, 0xc($t6)
/* 0042391C B9CC000F */  swr   $t4, 0xf($t6)
.L00423920:
/* 00423920 8B080000 */  lwl   $t0, ($t8)
/* 00423924 9B080003 */  lwr   $t0, 3($t8)
/* 00423928 2718000C */  addiu $t8, $t8, 0xc
/* 0042392C 2529000C */  addiu $t1, $t1, 0xc
/* 00423930 A928004C */  swl   $t0, 0x4c($t1)
/* 00423934 B928004F */  swr   $t0, 0x4f($t1)
/* 00423938 8B19FFF8 */  lwl   $t9, -8($t8)
/* 0042393C 9B19FFFB */  lwr   $t9, -5($t8)
/* 00423940 A9390050 */  swl   $t9, 0x50($t1)
/* 00423944 B9390053 */  swr   $t9, 0x53($t1)
/* 00423948 8B08FFFC */  lwl   $t0, -4($t8)
/* 0042394C 9B08FFFF */  lwr   $t0, -1($t8)
/* 00423950 A9280054 */  swl   $t0, 0x54($t1)
/* 00423954 170AFFF2 */  bne   $t8, $t2, .L00423920
/* 00423958 B9280057 */   swr   $t0, 0x57($t1)
/* 0042395C 8B080000 */  lwl   $t0, ($t8)
/* 00423960 9B080003 */  lwr   $t0, 3($t8)
/* 00423964 A9280058 */  swl   $t0, 0x58($t1)
/* 00423968 B928005B */  swr   $t0, 0x5b($t1)
/* 0042396C 8B190004 */  lwl   $t9, 4($t8)
/* 00423970 9B190007 */  lwr   $t9, 7($t8)
/* 00423974 A939005C */  swl   $t9, 0x5c($t1)
/* 00423978 B939005F */  swr   $t9, 0x5f($t1)
/* 0042397C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00423980 8FA7000C */  lw    $a3, 0xc($sp)
/* 00423984 8FA60008 */  lw    $a2, 8($sp)
/* 00423988 0320F809 */  jalr  $t9
/* 0042398C 00000000 */   nop   
/* 00423990 1000003F */  b     .L00423A90
/* 00423994 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00423998:
/* 00423998 8F8F8038 */  lw    $t7, %got(RO_10009B24)($gp)
/* 0042399C 24040004 */  li    $a0, 4
/* 004239A0 2405035E */  li    $a1, 862
/* 004239A4 25EF9B24 */  addiu $t7, %lo(RO_10009B24) # addiu $t7, $t7, -0x64dc
/* 004239A8 25ED0048 */  addiu $t5, $t7, 0x48
/* 004239AC 03A06025 */  move  $t4, $sp
.L004239B0:
/* 004239B0 89EE0000 */  lwl   $t6, ($t7)
/* 004239B4 99EE0003 */  lwr   $t6, 3($t7)
/* 004239B8 25EF000C */  addiu $t7, $t7, 0xc
/* 004239BC 258C000C */  addiu $t4, $t4, 0xc
/* 004239C0 A98EFFFC */  swl   $t6, -4($t4)
/* 004239C4 B98EFFFF */  swr   $t6, -1($t4)
/* 004239C8 89EBFFF8 */  lwl   $t3, -8($t7)
/* 004239CC 99EBFFFB */  lwr   $t3, -5($t7)
/* 004239D0 A98B0000 */  swl   $t3, ($t4)
/* 004239D4 B98B0003 */  swr   $t3, 3($t4)
/* 004239D8 89EEFFFC */  lwl   $t6, -4($t7)
/* 004239DC 99EEFFFF */  lwr   $t6, -1($t7)
/* 004239E0 A98E0004 */  swl   $t6, 4($t4)
/* 004239E4 15EDFFF2 */  bne   $t7, $t5, .L004239B0
/* 004239E8 B98E0007 */   swr   $t6, 7($t4)
/* 004239EC 89EE0000 */  lwl   $t6, ($t7)
/* 004239F0 99EE0003 */  lwr   $t6, 3($t7)
/* 004239F4 8F8A8038 */  lw    $t2, %got(RO_10009AD4)($gp)
/* 004239F8 03A0C825 */  move  $t9, $sp
/* 004239FC A98E0008 */  swl   $t6, 8($t4)
/* 00423A00 B98E000B */  swr   $t6, 0xb($t4)
/* 00423A04 89EB0004 */  lwl   $t3, 4($t7)
/* 00423A08 99EB0007 */  lwr   $t3, 7($t7)
/* 00423A0C 254A9AD4 */  addiu $t2, %lo(RO_10009AD4) # addiu $t2, $t2, -0x652c
/* 00423A10 25480048 */  addiu $t0, $t2, 0x48
/* 00423A14 A98B000C */  swl   $t3, 0xc($t4)
/* 00423A18 B98B000F */  swr   $t3, 0xf($t4)
.L00423A1C:
/* 00423A1C 89490000 */  lwl   $t1, ($t2)
/* 00423A20 99490003 */  lwr   $t1, 3($t2)
/* 00423A24 254A000C */  addiu $t2, $t2, 0xc
/* 00423A28 2739000C */  addiu $t9, $t9, 0xc
/* 00423A2C AB29004C */  swl   $t1, 0x4c($t9)
/* 00423A30 BB29004F */  swr   $t1, 0x4f($t9)
/* 00423A34 8958FFF8 */  lwl   $t8, -8($t2)
/* 00423A38 9958FFFB */  lwr   $t8, -5($t2)
/* 00423A3C AB380050 */  swl   $t8, 0x50($t9)
/* 00423A40 BB380053 */  swr   $t8, 0x53($t9)
/* 00423A44 8949FFFC */  lwl   $t1, -4($t2)
/* 00423A48 9949FFFF */  lwr   $t1, -1($t2)
/* 00423A4C AB290054 */  swl   $t1, 0x54($t9)
/* 00423A50 1548FFF2 */  bne   $t2, $t0, .L00423A1C
/* 00423A54 BB290057 */   swr   $t1, 0x57($t9)
/* 00423A58 89490000 */  lwl   $t1, ($t2)
/* 00423A5C 99490003 */  lwr   $t1, 3($t2)
/* 00423A60 AB290058 */  swl   $t1, 0x58($t9)
/* 00423A64 BB29005B */  swr   $t1, 0x5b($t9)
/* 00423A68 89580004 */  lwl   $t8, 4($t2)
/* 00423A6C 99580007 */  lwr   $t8, 7($t2)
/* 00423A70 AB38005C */  swl   $t8, 0x5c($t9)
/* 00423A74 BB38005F */  swr   $t8, 0x5f($t9)
/* 00423A78 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00423A7C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00423A80 8FA60008 */  lw    $a2, 8($sp)
/* 00423A84 0320F809 */  jalr  $t9
/* 00423A88 00000000 */   nop   
/* 00423A8C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00423A90:
/* 00423A90 97A200BE */  lhu   $v0, 0xbe($sp)
.L00423A94:
/* 00423A94 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00423A98 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 00423A9C 03E00008 */  jr    $ra
/* 00423AA0 00000000 */   nop   
    .type fop, @function
    .size fop, .-fop
    .end fop

glabel uop_to_asm
    .ent uop_to_asm
    # 0042BDAC eval
/* 00423AA4 3C1C0FC0 */  .cpload $t9
/* 00423AA8 279CBFAC */  
/* 00423AAC 0399E021 */  
/* 00423AB0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00423AB4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00423AB8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00423ABC 90850021 */  lbu   $a1, 0x21($a0)
/* 00423AC0 3C01000C */  lui   $at, 0xc
/* 00423AC4 34218000 */  ori   $at, $at, 0x8000
/* 00423AC8 30A5001F */  andi  $a1, $a1, 0x1f
/* 00423ACC 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 00423AD0 000E7823 */  negu  $t7, $t6
/* 00423AD4 01E1C024 */  and   $t8, $t7, $at
/* 00423AD8 00B8C804 */  sllv  $t9, $t8, $a1
/* 00423ADC 07210007 */  bgez  $t9, .L00423AFC
/* 00423AE0 00803025 */   move  $a2, $a0
/* 00423AE4 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 00423AE8 90840020 */  lbu   $a0, 0x20($a0)
/* 00423AEC 0320F809 */  jalr  $t9
/* 00423AF0 00000000 */   nop   
/* 00423AF4 10000088 */  b     .L00423D18
/* 00423AF8 8FBC0018 */   lw    $gp, 0x18($sp)
.L00423AFC:
/* 00423AFC 94C80022 */  lhu   $t0, 0x22($a2)
/* 00423B00 30A200FF */  andi  $v0, $a1, 0xff
/* 00423B04 31090002 */  andi  $t1, $t0, 2
/* 00423B08 51200044 */  beql  $t1, $zero, .L00423C1C
/* 00423B0C 2449FFFB */   addiu $t1, $v0, -5
/* 00423B10 30A200FF */  andi  $v0, $a1, 0xff
/* 00423B14 244AFFFB */  addiu $t2, $v0, -5
/* 00423B18 2D410003 */  sltiu $at, $t2, 3
/* 00423B1C 50200031 */  beql  $at, $zero, .L00423BE4
/* 00423B20 90C30020 */   lbu   $v1, 0x20($a2)
/* 00423B24 8F818038 */  lw    $at, %got(jtbl_10009C28)($gp)
/* 00423B28 000A5080 */  sll   $t2, $t2, 2
/* 00423B2C 002A0821 */  addu  $at, $at, $t2
/* 00423B30 8C2A9C28 */  lw    $t2, %lo(jtbl_10009C28)($at)
/* 00423B34 015C5021 */  addu  $t2, $t2, $gp
/* 00423B38 01400008 */  jr    $t2
/* 00423B3C 00000000 */   nop   
.L00423B40:
/* 00423B40 8F8B89D8 */  lw     $t3, %got(opcode_arch)($gp)
/* 00423B44 24010001 */  li    $at, 1
/* 00423B48 916B0000 */  lbu   $t3, ($t3)
/* 00423B4C 55610008 */  bnel  $t3, $at, .L00423B70
/* 00423B50 90D80020 */   lbu   $t8, 0x20($a2)
/* 00423B54 90CC0020 */  lbu   $t4, 0x20($a2)
/* 00423B58 8F8E88D0 */  lw     $t6, %got(dw_oop)($gp)
/* 00423B5C 000C6840 */  sll   $t5, $t4, 1
/* 00423B60 01AE7821 */  addu  $t7, $t5, $t6
/* 00423B64 1000006C */  b     .L00423D18
/* 00423B68 95E20000 */   lhu   $v0, ($t7)
/* 00423B6C 90D80020 */  lbu   $t8, 0x20($a2)
.L00423B70:
/* 00423B70 8F8888C0 */  lw     $t0, %got(oop)($gp)
/* 00423B74 0018C840 */  sll   $t9, $t8, 1
/* 00423B78 03284821 */  addu  $t1, $t9, $t0
/* 00423B7C 10000066 */  b     .L00423D18
/* 00423B80 95220000 */   lhu   $v0, ($t1)
.L00423B84:
/* 00423B84 8F8A89D8 */  lw     $t2, %got(opcode_arch)($gp)
/* 00423B88 24010001 */  li    $at, 1
/* 00423B8C 914A0000 */  lbu   $t2, ($t2)
/* 00423B90 55410008 */  bnel  $t2, $at, .L00423BB4
/* 00423B94 90CF0020 */   lbu   $t7, 0x20($a2)
/* 00423B98 90CB0020 */  lbu   $t3, 0x20($a2)
/* 00423B9C 8F8D88D4 */  lw     $t5, %got(dw_ouop)($gp)
/* 00423BA0 000B6040 */  sll   $t4, $t3, 1
/* 00423BA4 018D7021 */  addu  $t6, $t4, $t5
/* 00423BA8 1000005B */  b     .L00423D18
/* 00423BAC 95C20000 */   lhu   $v0, ($t6)
/* 00423BB0 90CF0020 */  lbu   $t7, 0x20($a2)
.L00423BB4:
/* 00423BB4 8F9988C4 */  lw     $t9, %got(ouop)($gp)
/* 00423BB8 000FC040 */  sll   $t8, $t7, 1
/* 00423BBC 03194021 */  addu  $t0, $t8, $t9
/* 00423BC0 10000055 */  b     .L00423D18
/* 00423BC4 95020000 */   lhu   $v0, ($t0)
.L00423BC8:
/* 00423BC8 90C90020 */  lbu   $t1, 0x20($a2)
/* 00423BCC 8F8B88C0 */  lw     $t3, %got(oop)($gp)
/* 00423BD0 00095040 */  sll   $t2, $t1, 1
/* 00423BD4 014B6021 */  addu  $t4, $t2, $t3
/* 00423BD8 1000004F */  b     .L00423D18
/* 00423BDC 95820000 */   lhu   $v0, ($t4)
/* 00423BE0 90C30020 */  lbu   $v1, 0x20($a2)
.L00423BE4:
/* 00423BE4 24010050 */  li    $at, 80
/* 00423BE8 14610006 */  bne   $v1, $at, .L00423C04
/* 00423BEC 00000000 */   nop   
/* 00423BF0 8F8E88C0 */  lw     $t6, %got(oop)($gp)
/* 00423BF4 00036840 */  sll   $t5, $v1, 1
/* 00423BF8 01AE7821 */  addu  $t7, $t5, $t6
/* 00423BFC 10000046 */  b     .L00423D18
/* 00423C00 95E20000 */   lhu   $v0, ($t7)
.L00423C04:
/* 00423C04 8F9988C4 */  lw     $t9, %got(ouop)($gp)
/* 00423C08 0003C040 */  sll   $t8, $v1, 1
/* 00423C0C 03194021 */  addu  $t0, $t8, $t9
/* 00423C10 10000041 */  b     .L00423D18
/* 00423C14 95020000 */   lhu   $v0, ($t0)
/* 00423C18 2449FFFB */  addiu $t1, $v0, -5
.L00423C1C:
/* 00423C1C 2D210003 */  sltiu $at, $t1, 3
/* 00423C20 50200031 */  beql  $at, $zero, .L00423CE8
/* 00423C24 90C30020 */   lbu   $v1, 0x20($a2)
/* 00423C28 8F818038 */  lw    $at, %got(jtbl_10009C34)($gp)
/* 00423C2C 00094880 */  sll   $t1, $t1, 2
/* 00423C30 00290821 */  addu  $at, $at, $t1
/* 00423C34 8C299C34 */  lw    $t1, %lo(jtbl_10009C34)($at)
/* 00423C38 013C4821 */  addu  $t1, $t1, $gp
/* 00423C3C 01200008 */  jr    $t1
/* 00423C40 00000000 */   nop   
.L00423C44:
/* 00423C44 8F8A89D8 */  lw     $t2, %got(opcode_arch)($gp)
/* 00423C48 24010001 */  li    $at, 1
/* 00423C4C 914A0000 */  lbu   $t2, ($t2)
/* 00423C50 55410008 */  bnel  $t2, $at, .L00423C74
/* 00423C54 90CF0020 */   lbu   $t7, 0x20($a2)
/* 00423C58 90CB0020 */  lbu   $t3, 0x20($a2)
/* 00423C5C 8F8D88C8 */  lw     $t5, %got(dw_op)($gp)
/* 00423C60 000B6040 */  sll   $t4, $t3, 1
/* 00423C64 018D7021 */  addu  $t6, $t4, $t5
/* 00423C68 1000002B */  b     .L00423D18
/* 00423C6C 95C20000 */   lhu   $v0, ($t6)
/* 00423C70 90CF0020 */  lbu   $t7, 0x20($a2)
.L00423C74:
/* 00423C74 8F9988B8 */  lw     $t9, %got(op)($gp)
/* 00423C78 000FC040 */  sll   $t8, $t7, 1
/* 00423C7C 03194021 */  addu  $t0, $t8, $t9
/* 00423C80 10000025 */  b     .L00423D18
/* 00423C84 95020000 */   lhu   $v0, ($t0)
.L00423C88:
/* 00423C88 8F8989D8 */  lw     $t1, %got(opcode_arch)($gp)
/* 00423C8C 24010001 */  li    $at, 1
/* 00423C90 91290000 */  lbu   $t1, ($t1)
/* 00423C94 55210008 */  bnel  $t1, $at, .L00423CB8
/* 00423C98 90CE0020 */   lbu   $t6, 0x20($a2)
/* 00423C9C 90CA0020 */  lbu   $t2, 0x20($a2)
/* 00423CA0 8F8C88CC */  lw     $t4, %got(dw_uop)($gp)
/* 00423CA4 000A5840 */  sll   $t3, $t2, 1
/* 00423CA8 016C6821 */  addu  $t5, $t3, $t4
/* 00423CAC 1000001A */  b     .L00423D18
/* 00423CB0 95A20000 */   lhu   $v0, ($t5)
/* 00423CB4 90CE0020 */  lbu   $t6, 0x20($a2)
.L00423CB8:
/* 00423CB8 8F9888BC */  lw     $t8, %got(uop)($gp)
/* 00423CBC 000E7840 */  sll   $t7, $t6, 1
/* 00423CC0 01F8C821 */  addu  $t9, $t7, $t8
/* 00423CC4 10000014 */  b     .L00423D18
/* 00423CC8 97220000 */   lhu   $v0, ($t9)
.L00423CCC:
/* 00423CCC 90C80020 */  lbu   $t0, 0x20($a2)
/* 00423CD0 8F8A88B8 */  lw     $t2, %got(op)($gp)
/* 00423CD4 00084840 */  sll   $t1, $t0, 1
/* 00423CD8 012A5821 */  addu  $t3, $t1, $t2
/* 00423CDC 1000000E */  b     .L00423D18
/* 00423CE0 95620000 */   lhu   $v0, ($t3)
/* 00423CE4 90C30020 */  lbu   $v1, 0x20($a2)
.L00423CE8:
/* 00423CE8 24010050 */  li    $at, 80
/* 00423CEC 14610006 */  bne   $v1, $at, .L00423D08
/* 00423CF0 00000000 */   nop   
/* 00423CF4 8F8D88B8 */  lw     $t5, %got(op)($gp)
/* 00423CF8 00036040 */  sll   $t4, $v1, 1
/* 00423CFC 018D7021 */  addu  $t6, $t4, $t5
/* 00423D00 10000005 */  b     .L00423D18
/* 00423D04 95C20000 */   lhu   $v0, ($t6)
.L00423D08:
/* 00423D08 8F9888BC */  lw     $t8, %got(uop)($gp)
/* 00423D0C 00037840 */  sll   $t7, $v1, 1
/* 00423D10 01F8C821 */  addu  $t9, $t7, $t8
/* 00423D14 97220000 */  lhu   $v0, ($t9)
.L00423D18:
/* 00423D18 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00423D1C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00423D20 03E00008 */  jr    $ra
/* 00423D24 00000000 */   nop   
    .type uop_to_asm, @function
    .size uop_to_asm, .-uop_to_asm
    .end uop_to_asm

glabel jump
    .ent jump
    # 0042BDAC eval
/* 00423D28 3C1C0FC0 */  .cpload $t9
/* 00423D2C 279CBD28 */  
/* 00423D30 0399E021 */  
/* 00423D34 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00423D38 AFB20028 */  sw    $s2, 0x28($sp)
/* 00423D3C AFB10024 */  sw    $s1, 0x24($sp)
/* 00423D40 AFB00020 */  sw    $s0, 0x20($sp)
/* 00423D44 00808025 */  move  $s0, $a0
/* 00423D48 30B100FF */  andi  $s1, $a1, 0xff
/* 00423D4C 00C09025 */  move  $s2, $a2
/* 00423D50 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00423D54 AFBC0030 */  sw    $gp, 0x30($sp)
/* 00423D58 AFB3002C */  sw    $s3, 0x2c($sp)
/* 00423D5C AFA50044 */  sw    $a1, 0x44($sp)
.L00423D60:
/* 00423D60 960E0014 */  lhu   $t6, 0x14($s0)
/* 00423D64 24010001 */  li    $at, 1
/* 00423D68 51C10008 */  beql  $t6, $at, .L00423D8C
/* 00423D6C 920F0019 */   lbu   $t7, 0x19($s0)
/* 00423D70 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00423D74 02002025 */  move  $a0, $s0
/* 00423D78 24050048 */  li    $a1, 72
/* 00423D7C 0320F809 */  jalr  $t9
/* 00423D80 00000000 */   nop   
/* 00423D84 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423D88 920F0019 */  lbu   $t7, 0x19($s0)
.L00423D8C:
/* 00423D8C 24010048 */  li    $at, 72
/* 00423D90 000FC600 */  sll   $t8, $t7, 0x18
/* 00423D94 0018CE42 */  srl   $t9, $t8, 0x19
/* 00423D98 5321002D */  beql  $t9, $at, .L00423E50
/* 00423D9C 92040020 */   lbu   $a0, 0x20($s0)
/* 00423DA0 12200002 */  beqz  $s1, .L00423DAC
/* 00423DA4 2413001A */   li    $s3, 26
/* 00423DA8 2413000D */  li    $s3, 13
.L00423DAC:
/* 00423DAC 8F998694 */  lw    $t9, %call16(result_type)($gp)
/* 00423DB0 02002025 */  move  $a0, $s0
/* 00423DB4 0320F809 */  jalr  $t9
/* 00423DB8 00000000 */   nop   
/* 00423DBC 2C480020 */  sltiu $t0, $v0, 0x20
/* 00423DC0 00084823 */  negu  $t1, $t0
/* 00423DC4 3C010501 */  lui   $at, 0x501
/* 00423DC8 01215024 */  and   $t2, $t1, $at
/* 00423DCC 004A5804 */  sllv  $t3, $t2, $v0
/* 00423DD0 05610010 */  bgez  $t3, .L00423E14
/* 00423DD4 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00423DD8 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00423DDC 02002025 */  move  $a0, $s0
/* 00423DE0 0320F809 */  jalr  $t9
/* 00423DE4 00000000 */   nop   
/* 00423DE8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423DEC 02602025 */  move  $a0, $s3
/* 00423DF0 00402825 */  move  $a1, $v0
/* 00423DF4 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 00423DF8 00003025 */  move  $a2, $zero
/* 00423DFC 00003825 */  move  $a3, $zero
/* 00423E00 AFB20010 */  sw    $s2, 0x10($sp)
/* 00423E04 0320F809 */  jalr  $t9
/* 00423E08 AFB00014 */   sw    $s0, 0x14($sp)
/* 00423E0C 10000105 */  b     .L00424224
/* 00423E10 8FBC0030 */   lw    $gp, 0x30($sp)
.L00423E14:
/* 00423E14 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00423E18 02002025 */  move  $a0, $s0
/* 00423E1C 0320F809 */  jalr  $t9
/* 00423E20 00000000 */   nop   
/* 00423E24 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423E28 02602025 */  move  $a0, $s3
/* 00423E2C 00402825 */  move  $a1, $v0
/* 00423E30 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 00423E34 00003025 */  move  $a2, $zero
/* 00423E38 02403825 */  move  $a3, $s2
/* 00423E3C 0320F809 */  jalr  $t9
/* 00423E40 00000000 */   nop   
/* 00423E44 100000F7 */  b     .L00424224
/* 00423E48 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00423E4C 92040020 */  lbu   $a0, 0x20($s0)
.L00423E50:
/* 00423E50 100000D5 */  b     .L004241A8
/* 00423E54 00801025 */   move  $v0, $a0
.L00423E58:
/* 00423E58 2E310001 */  sltiu $s1, $s1, 1
/* 00423E5C 323100FF */  andi  $s1, $s1, 0xff
/* 00423E60 1000FFBF */  b     .L00423D60
/* 00423E64 8E100000 */   lw    $s0, ($s0)
.L00423E68:
/* 00423E68 92050021 */  lbu   $a1, 0x21($s0)
.L00423E6C:
/* 00423E6C 3C01000C */  lui   $at, 0xc
/* 00423E70 34218000 */  ori   $at, $at, 0x8000
/* 00423E74 30A5001F */  andi  $a1, $a1, 0x1f
/* 00423E78 2CAC0020 */  sltiu $t4, $a1, 0x20
/* 00423E7C 000C6823 */  negu  $t5, $t4
/* 00423E80 01A17024 */  and   $t6, $t5, $at
/* 00423E84 00AE7804 */  sllv  $t7, $t6, $a1
/* 00423E88 05E1004A */  bgez  $t7, .L00423FB4
/* 00423E8C 00000000 */   nop   
/* 00423E90 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 00423E94 0320F809 */  jalr  $t9
/* 00423E98 00000000 */   nop   
/* 00423E9C 92180020 */  lbu   $t8, 0x20($s0)
/* 00423EA0 2401005F */  li    $at, 95
/* 00423EA4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423EA8 17010003 */  bne   $t8, $at, .L00423EB8
/* 00423EAC 3053FFFF */   andi  $s3, $v0, 0xffff
/* 00423EB0 2E310001 */  sltiu $s1, $s1, 1
/* 00423EB4 323100FF */  andi  $s1, $s1, 0xff
.L00423EB8:
/* 00423EB8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00423EBC 8E040000 */  lw    $a0, ($s0)
/* 00423EC0 24050048 */  li    $a1, 72
/* 00423EC4 0320F809 */  jalr  $t9
/* 00423EC8 00000000 */   nop   
/* 00423ECC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423ED0 8E040004 */  lw    $a0, 4($s0)
/* 00423ED4 24050048 */  li    $a1, 72
/* 00423ED8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00423EDC 0320F809 */  jalr  $t9
/* 00423EE0 00000000 */   nop   
/* 00423EE4 92190020 */  lbu   $t9, 0x20($s0)
/* 00423EE8 3C0100C0 */  lui   $at, 0xc0
/* 00423EEC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423EF0 2728FFE0 */  addiu $t0, $t9, -0x20
/* 00423EF4 2D090020 */  sltiu $t1, $t0, 0x20
/* 00423EF8 00095023 */  negu  $t2, $t1
/* 00423EFC 01415824 */  and   $t3, $t2, $at
/* 00423F00 010B6004 */  sllv  $t4, $t3, $t0
/* 00423F04 0581000F */  bgez  $t4, .L00423F44
/* 00423F08 00000000 */   nop   
/* 00423F0C 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00423F10 8E040000 */  lw    $a0, ($s0)
/* 00423F14 0320F809 */  jalr  $t9
/* 00423F18 00000000 */   nop   
/* 00423F1C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423F20 8E040004 */  lw    $a0, 4($s0)
/* 00423F24 A3A2003C */  sb    $v0, 0x3c($sp)
/* 00423F28 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00423F2C 0320F809 */  jalr  $t9
/* 00423F30 00000000 */   nop   
/* 00423F34 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423F38 93A6003C */  lbu   $a2, 0x3c($sp)
/* 00423F3C 1000000E */  b     .L00423F78
/* 00423F40 304500FF */   andi  $a1, $v0, 0xff
.L00423F44:
/* 00423F44 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00423F48 8E040000 */  lw    $a0, ($s0)
/* 00423F4C 0320F809 */  jalr  $t9
/* 00423F50 00000000 */   nop   
/* 00423F54 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423F58 8E040004 */  lw    $a0, 4($s0)
/* 00423F5C A3A2003D */  sb    $v0, 0x3d($sp)
/* 00423F60 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00423F64 0320F809 */  jalr  $t9
/* 00423F68 00000000 */   nop   
/* 00423F6C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423F70 93A5003D */  lbu   $a1, 0x3d($sp)
/* 00423F74 304600FF */  andi  $a2, $v0, 0xff
.L00423F78:
/* 00423F78 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00423F7C 02602025 */  move  $a0, $s3
/* 00423F80 0320F809 */  jalr  $t9
/* 00423F84 00000000 */   nop   
/* 00423F88 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00423F8C 12200002 */  beqz  $s1, .L00423F98
/* 00423F90 24130008 */   li    $s3, 8
/* 00423F94 24130007 */  li    $s3, 7
.L00423F98:
/* 00423F98 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 00423F9C 02602025 */  move  $a0, $s3
/* 00423FA0 02402825 */  move  $a1, $s2
/* 00423FA4 0320F809 */  jalr  $t9
/* 00423FA8 00000000 */   nop   
/* 00423FAC 1000009D */  b     .L00424224
/* 00423FB0 8FBC0030 */   lw    $gp, 0x30($sp)
.L00423FB4:
/* 00423FB4 8F8D8884 */  lw     $t5, %got(br)($gp)
/* 00423FB8 00041040 */  sll   $v0, $a0, 1
/* 00423FBC 24010006 */  li    $at, 6
/* 00423FC0 004D7021 */  addu  $t6, $v0, $t5
/* 00423FC4 10A10007 */  beq   $a1, $at, .L00423FE4
/* 00423FC8 95D30000 */   lhu   $s3, ($t6)
/* 00423FCC 24010005 */  li    $at, 5
/* 00423FD0 10A10004 */  beq   $a1, $at, .L00423FE4
/* 00423FD4 00000000 */   nop   
/* 00423FD8 8F8F8888 */  lw     $t7, %got(ubr)($gp)
/* 00423FDC 004FC021 */  addu  $t8, $v0, $t7
/* 00423FE0 97130000 */  lhu   $s3, ($t8)
.L00423FE4:
/* 00423FE4 52200006 */  beql  $s1, $zero, .L00424000
/* 00423FE8 8E0B0004 */   lw    $t3, 4($s0)
/* 00423FEC 8F89888C */  lw     $t1, %got(inv)($gp)
/* 00423FF0 0013C840 */  sll   $t9, $s3, 1
/* 00423FF4 03295021 */  addu  $t2, $t9, $t1
/* 00423FF8 95530000 */  lhu   $s3, ($t2)
/* 00423FFC 8E0B0004 */  lw    $t3, 4($s0)
.L00424000:
/* 00424000 24010049 */  li    $at, 73
/* 00424004 91680020 */  lbu   $t0, 0x20($t3)
/* 00424008 1501002F */  bne   $t0, $at, .L004240C8
/* 0042400C 00000000 */   nop   
/* 00424010 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00424014 8E040000 */  lw    $a0, ($s0)
/* 00424018 24050048 */  li    $a1, 72
/* 0042401C 0320F809 */  jalr  $t9
/* 00424020 00000000 */   nop   
/* 00424024 8E0C0004 */  lw    $t4, 4($s0)
/* 00424028 3C010501 */  lui   $at, 0x501
/* 0042402C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00424030 918D0021 */  lbu   $t5, 0x21($t4)
/* 00424034 31AE001F */  andi  $t6, $t5, 0x1f
/* 00424038 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0042403C 000FC023 */  negu  $t8, $t7
/* 00424040 0301C824 */  and   $t9, $t8, $at
/* 00424044 01D94804 */  sllv  $t1, $t9, $t6
/* 00424048 05210011 */  bgez  $t1, .L00424090
/* 0042404C 00000000 */   nop   
/* 00424050 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00424054 8E040000 */  lw    $a0, ($s0)
/* 00424058 0320F809 */  jalr  $t9
/* 0042405C 00000000 */   nop   
/* 00424060 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00424064 8E030004 */  lw    $v1, 4($s0)
/* 00424068 02602025 */  move  $a0, $s3
/* 0042406C 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 00424070 00402825 */  move  $a1, $v0
/* 00424074 AFB20010 */  sw    $s2, 0x10($sp)
/* 00424078 AFB00014 */  sw    $s0, 0x14($sp)
/* 0042407C 8C660030 */  lw    $a2, 0x30($v1)
/* 00424080 0320F809 */  jalr  $t9
/* 00424084 8C670034 */   lw    $a3, 0x34($v1)
/* 00424088 10000066 */  b     .L00424224
/* 0042408C 8FBC0030 */   lw    $gp, 0x30($sp)
.L00424090:
/* 00424090 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00424094 8E040000 */  lw    $a0, ($s0)
/* 00424098 0320F809 */  jalr  $t9
/* 0042409C 00000000 */   nop   
/* 004240A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004240A4 8E0A0004 */  lw    $t2, 4($s0)
/* 004240A8 02602025 */  move  $a0, $s3
/* 004240AC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 004240B0 00402825 */  move  $a1, $v0
/* 004240B4 02403825 */  move  $a3, $s2
/* 004240B8 0320F809 */  jalr  $t9
/* 004240BC 8D460030 */   lw    $a2, 0x30($t2)
/* 004240C0 10000058 */  b     .L00424224
/* 004240C4 8FBC0030 */   lw    $gp, 0x30($sp)
.L004240C8:
/* 004240C8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004240CC 8E040000 */  lw    $a0, ($s0)
/* 004240D0 24050048 */  li    $a1, 72
/* 004240D4 0320F809 */  jalr  $t9
/* 004240D8 00000000 */   nop   
/* 004240DC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004240E0 8E040004 */  lw    $a0, 4($s0)
/* 004240E4 24050048 */  li    $a1, 72
/* 004240E8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004240EC 0320F809 */  jalr  $t9
/* 004240F0 00000000 */   nop   
/* 004240F4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004240F8 8E040000 */  lw    $a0, ($s0)
/* 004240FC 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00424100 0320F809 */  jalr  $t9
/* 00424104 00000000 */   nop   
/* 00424108 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042410C 8E040004 */  lw    $a0, 4($s0)
/* 00424110 A3A2003D */  sb    $v0, 0x3d($sp)
/* 00424114 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00424118 0320F809 */  jalr  $t9
/* 0042411C 00000000 */   nop   
/* 00424120 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00424124 93A5003D */  lbu   $a1, 0x3d($sp)
/* 00424128 02602025 */  move  $a0, $s3
/* 0042412C 8F9982C0 */  lw    $t9, %call16(emit_branch_rrll)($gp)
/* 00424130 304600FF */  andi  $a2, $v0, 0xff
/* 00424134 02403825 */  move  $a3, $s2
/* 00424138 0320F809 */  jalr  $t9
/* 0042413C AFB00010 */   sw    $s0, 0x10($sp)
/* 00424140 10000038 */  b     .L00424224
/* 00424144 8FBC0030 */   lw    $gp, 0x30($sp)
.L00424148:
/* 00424148 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042414C 02002025 */  move  $a0, $s0
/* 00424150 24050048 */  li    $a1, 72
/* 00424154 0320F809 */  jalr  $t9
/* 00424158 00000000 */   nop   
/* 0042415C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00424160 12200002 */  beqz  $s1, .L0042416C
/* 00424164 2413001A */   li    $s3, 26
/* 00424168 2413000D */  li    $s3, 13
.L0042416C:
/* 0042416C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00424170 02002025 */  move  $a0, $s0
/* 00424174 0320F809 */  jalr  $t9
/* 00424178 00000000 */   nop   
/* 0042417C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00424180 02602025 */  move  $a0, $s3
/* 00424184 00402825 */  move  $a1, $v0
/* 00424188 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 0042418C 00003025 */  move  $a2, $zero
/* 00424190 00003825 */  move  $a3, $zero
/* 00424194 AFB20010 */  sw    $s2, 0x10($sp)
/* 00424198 0320F809 */  jalr  $t9
/* 0042419C AFB00014 */   sw    $s0, 0x14($sp)
/* 004241A0 10000020 */  b     .L00424224
/* 004241A4 8FBC0030 */   lw    $gp, 0x30($sp)
.L004241A8:
/* 004241A8 2C410051 */  sltiu $at, $v0, 0x51
/* 004241AC 14200006 */  bnez  $at, .L004241C8
/* 004241B0 2448FFB3 */   addiu $t0, $v0, -0x4d
/* 004241B4 2401005F */  li    $at, 95
/* 004241B8 5041FF2C */  beql  $v0, $at, .L00423E6C
/* 004241BC 92050021 */   lbu   $a1, 0x21($s0)
/* 004241C0 1000FFE1 */  b     .L00424148
/* 004241C4 00000000 */   nop   
.L004241C8:
/* 004241C8 2C41002A */  sltiu $at, $v0, 0x2a
/* 004241CC 1020000B */  beqz  $at, .L004241FC
/* 004241D0 244BFFDD */   addiu $t3, $v0, -0x23
/* 004241D4 2D610007 */  sltiu $at, $t3, 7
/* 004241D8 1020FFDB */  beqz  $at, .L00424148
/* 004241DC 00000000 */   nop   
/* 004241E0 8F818038 */  lw    $at, %got(jtbl_10009C40)($gp)
/* 004241E4 000B5880 */  sll   $t3, $t3, 2
/* 004241E8 002B0821 */  addu  $at, $at, $t3
/* 004241EC 8C2B9C40 */  lw    $t3, %lo(jtbl_10009C40)($at)
/* 004241F0 017C5821 */  addu  $t3, $t3, $gp
/* 004241F4 01600008 */  jr    $t3
/* 004241F8 00000000 */   nop   
.L004241FC:
/* 004241FC 2D010004 */  sltiu $at, $t0, 4
/* 00424200 1020FFD1 */  beqz  $at, .L00424148
/* 00424204 00000000 */   nop   
/* 00424208 8F818038 */  lw    $at, %got(jtbl_10009C5C)($gp)
/* 0042420C 00084080 */  sll   $t0, $t0, 2
/* 00424210 00280821 */  addu  $at, $at, $t0
/* 00424214 8C289C5C */  lw    $t0, %lo(jtbl_10009C5C)($at)
/* 00424218 011C4021 */  addu  $t0, $t0, $gp
/* 0042421C 01000008 */  jr    $t0
/* 00424220 00000000 */   nop   
.L00424224:
/* 00424224 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00424228 8FB00020 */  lw    $s0, 0x20($sp)
/* 0042422C 8FB10024 */  lw    $s1, 0x24($sp)
/* 00424230 8FB20028 */  lw    $s2, 0x28($sp)
/* 00424234 8FB3002C */  lw    $s3, 0x2c($sp)
/* 00424238 03E00008 */  jr    $ra
/* 0042423C 27BD0040 */   addiu $sp, $sp, 0x40
    .type jump, @function
    .size jump, .-jump
    .end jump

glabel trap
    .ent trap
    # 0042BDAC eval
/* 00424240 3C1C0FC0 */  .cpload $t9
/* 00424244 279CB810 */  
/* 00424248 0399E021 */  
/* 0042424C 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00424250 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00424254 00A08025 */  move  $s0, $a1
/* 00424258 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0042425C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00424260 AFA40040 */  sw    $a0, 0x40($sp)
/* 00424264 AFA60048 */  sw    $a2, 0x48($sp)
.L00424268:
/* 00424268 960E0014 */  lhu   $t6, 0x14($s0)
/* 0042426C 24010001 */  li    $at, 1
/* 00424270 51C10008 */  beql  $t6, $at, .L00424294
/* 00424274 920F0019 */   lbu   $t7, 0x19($s0)
/* 00424278 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042427C 02002025 */  move  $a0, $s0
/* 00424280 24050048 */  li    $a1, 72
/* 00424284 0320F809 */  jalr  $t9
/* 00424288 00000000 */   nop   
/* 0042428C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424290 920F0019 */  lbu   $t7, 0x19($s0)
.L00424294:
/* 00424294 24010048 */  li    $at, 72
/* 00424298 000FC600 */  sll   $t8, $t7, 0x18
/* 0042429C 0018CE42 */  srl   $t9, $t8, 0x19
/* 004242A0 13210015 */  beq   $t9, $at, .L004242F8
/* 004242A4 00000000 */   nop   
/* 004242A8 93A9004B */  lbu   $t1, 0x4b($sp)
/* 004242AC 24020104 */  li    $v0, 260
/* 004242B0 11200002 */  beqz  $t1, .L004242BC
/* 004242B4 00000000 */   nop   
/* 004242B8 24020103 */  li    $v0, 259
.L004242BC:
/* 004242BC 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 004242C0 02002025 */  move  $a0, $s0
/* 004242C4 A7A2003C */  sh    $v0, 0x3c($sp)
/* 004242C8 0320F809 */  jalr  $t9
/* 004242CC 00000000 */   nop   
/* 004242D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004242D4 97A4003C */  lhu   $a0, 0x3c($sp)
/* 004242D8 00402825 */  move  $a1, $v0
/* 004242DC 8F9982C8 */  lw    $t9, %call16(emit_trap_rri)($gp)
/* 004242E0 00003025 */  move  $a2, $zero
/* 004242E4 8FA70040 */  lw    $a3, 0x40($sp)
/* 004242E8 0320F809 */  jalr  $t9
/* 004242EC AFB00010 */   sw    $s0, 0x10($sp)
/* 004242F0 1000014C */  b     .L00424824
/* 004242F4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004242F8:
/* 004242F8 1000012B */  b     .L004247A8
/* 004242FC 92070020 */   lbu   $a3, 0x20($s0)
.L00424300:
/* 00424300 93AA004B */  lbu   $t2, 0x4b($sp)
/* 00424304 8E100000 */  lw    $s0, ($s0)
/* 00424308 2D4B0001 */  sltiu $t3, $t2, 1
/* 0042430C 1000FFD6 */  b     .L00424268
/* 00424310 A3AB004B */   sb    $t3, 0x4b($sp)
.L00424314:
/* 00424314 92050021 */  lbu   $a1, 0x21($s0)
.L00424318:
/* 00424318 3C01000C */  lui   $at, 0xc
/* 0042431C 34218000 */  ori   $at, $at, 0x8000
/* 00424320 30A5001F */  andi  $a1, $a1, 0x1f
/* 00424324 2CAC0020 */  sltiu $t4, $a1, 0x20
/* 00424328 000C6823 */  negu  $t5, $t4
/* 0042432C 01A17024 */  and   $t6, $t5, $at
/* 00424330 00AE7804 */  sllv  $t7, $t6, $a1
/* 00424334 05E1005F */  bgez  $t7, .L004244B4
/* 00424338 24010029 */   li    $at, 41
/* 0042433C 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 00424340 00E02025 */  move  $a0, $a3
/* 00424344 0320F809 */  jalr  $t9
/* 00424348 00000000 */   nop   
/* 0042434C 92180020 */  lbu   $t8, 0x20($s0)
/* 00424350 2401005F */  li    $at, 95
/* 00424354 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424358 17010004 */  bne   $t8, $at, .L0042436C
/* 0042435C A7A2003C */   sh    $v0, 0x3c($sp)
/* 00424360 93B9004B */  lbu   $t9, 0x4b($sp)
/* 00424364 2F290001 */  sltiu $t1, $t9, 1
/* 00424368 A3A9004B */  sb    $t1, 0x4b($sp)
.L0042436C:
/* 0042436C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00424370 8E040000 */  lw    $a0, ($s0)
/* 00424374 24050048 */  li    $a1, 72
/* 00424378 0320F809 */  jalr  $t9
/* 0042437C 00000000 */   nop   
/* 00424380 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424384 8E040004 */  lw    $a0, 4($s0)
/* 00424388 24050048 */  li    $a1, 72
/* 0042438C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00424390 0320F809 */  jalr  $t9
/* 00424394 00000000 */   nop   
/* 00424398 920A0020 */  lbu   $t2, 0x20($s0)
/* 0042439C 3C0100C0 */  lui   $at, 0xc0
/* 004243A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004243A4 254BFFE0 */  addiu $t3, $t2, -0x20
/* 004243A8 2D6C0020 */  sltiu $t4, $t3, 0x20
/* 004243AC 000C6823 */  negu  $t5, $t4
/* 004243B0 01A17024 */  and   $t6, $t5, $at
/* 004243B4 016E7804 */  sllv  $t7, $t6, $t3
/* 004243B8 05E1000F */  bgez  $t7, .L004243F8
/* 004243BC 00000000 */   nop   
/* 004243C0 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 004243C4 8E040000 */  lw    $a0, ($s0)
/* 004243C8 0320F809 */  jalr  $t9
/* 004243CC 00000000 */   nop   
/* 004243D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004243D4 8E040004 */  lw    $a0, 4($s0)
/* 004243D8 A3A2003A */  sb    $v0, 0x3a($sp)
/* 004243DC 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 004243E0 0320F809 */  jalr  $t9
/* 004243E4 00000000 */   nop   
/* 004243E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004243EC 93A6003A */  lbu   $a2, 0x3a($sp)
/* 004243F0 1000000E */  b     .L0042442C
/* 004243F4 304500FF */   andi  $a1, $v0, 0xff
.L004243F8:
/* 004243F8 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 004243FC 8E040000 */  lw    $a0, ($s0)
/* 00424400 0320F809 */  jalr  $t9
/* 00424404 00000000 */   nop   
/* 00424408 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042440C 8E040004 */  lw    $a0, 4($s0)
/* 00424410 A3A2003B */  sb    $v0, 0x3b($sp)
/* 00424414 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00424418 0320F809 */  jalr  $t9
/* 0042441C 00000000 */   nop   
/* 00424420 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424424 93A5003B */  lbu   $a1, 0x3b($sp)
/* 00424428 304600FF */  andi  $a2, $v0, 0xff
.L0042442C:
/* 0042442C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00424430 97A4003C */  lhu   $a0, 0x3c($sp)
/* 00424434 0320F809 */  jalr  $t9
/* 00424438 00000000 */   nop   
/* 0042443C 93B8004B */  lbu   $t8, 0x4b($sp)
/* 00424440 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424444 24020007 */  li    $v0, 7
/* 00424448 13000002 */  beqz  $t8, .L00424454
/* 0042444C 00000000 */   nop   
/* 00424450 24020008 */  li    $v0, 8
.L00424454:
/* 00424454 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00424458 A7A2003C */  sh    $v0, 0x3c($sp)
/* 0042445C 0320F809 */  jalr  $t9
/* 00424460 00000000 */   nop   
/* 00424464 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424468 00408025 */  move  $s0, $v0
/* 0042446C 97A4003C */  lhu   $a0, 0x3c($sp)
/* 00424470 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 00424474 00402825 */  move  $a1, $v0
/* 00424478 0320F809 */  jalr  $t9
/* 0042447C 00000000 */   nop   
/* 00424480 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424484 2404001B */  li    $a0, 27
/* 00424488 8FA50040 */  lw    $a1, 0x40($sp)
/* 0042448C 8F99821C */  lw    $t9, %call16(emit_i)($gp)
/* 00424490 0320F809 */  jalr  $t9
/* 00424494 00000000 */   nop   
/* 00424498 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042449C 02002025 */  move  $a0, $s0
/* 004244A0 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 004244A4 0320F809 */  jalr  $t9
/* 004244A8 00000000 */   nop   
/* 004244AC 100000DD */  b     .L00424824
/* 004244B0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004244B4:
/* 004244B4 8E020000 */  lw    $v0, ($s0)
/* 004244B8 8E030004 */  lw    $v1, 4($s0)
/* 004244BC AFA20030 */  sw    $v0, 0x30($sp)
/* 004244C0 10000031 */  b     .L00424588
/* 004244C4 00604025 */   move  $t0, $v1
/* 004244C8 91190020 */  lbu   $t9, 0x20($t0)
.L004244CC:
/* 004244CC 24010049 */  li    $at, 73
/* 004244D0 24070028 */  li    $a3, 40
/* 004244D4 57210012 */  bnel  $t9, $at, .L00424520
/* 004244D8 AFA30030 */   sw    $v1, 0x30($sp)
/* 004244DC 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004244E0 91040021 */  lbu   $a0, 0x21($t0)
/* 004244E4 8D060030 */  lw    $a2, 0x30($t0)
/* 004244E8 2407004E */  li    $a3, 78
/* 004244EC A3A7003F */  sb    $a3, 0x3f($sp)
/* 004244F0 00002825 */  move  $a1, $zero
/* 004244F4 3084001F */  andi  $a0, $a0, 0x1f
/* 004244F8 0320F809 */  jalr  $t9
/* 004244FC 24C60001 */   addiu $a2, $a2, 1
/* 00424500 92050021 */  lbu   $a1, 0x21($s0)
/* 00424504 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424508 93A7003F */  lbu   $a3, 0x3f($sp)
/* 0042450C AFA2002C */  sw    $v0, 0x2c($sp)
/* 00424510 00404025 */  move  $t0, $v0
/* 00424514 10000021 */  b     .L0042459C
/* 00424518 30A5001F */   andi  $a1, $a1, 0x1f
/* 0042451C AFA30030 */  sw    $v1, 0x30($sp)
.L00424520:
/* 00424520 1000001E */  b     .L0042459C
/* 00424524 00404025 */   move  $t0, $v0
/* 00424528 91090020 */  lbu   $t1, 0x20($t0)
.L0042452C:
/* 0042452C 24010049 */  li    $at, 73
/* 00424530 2407004E */  li    $a3, 78
/* 00424534 55210012 */  bnel  $t1, $at, .L00424580
/* 00424538 AFA30030 */   sw    $v1, 0x30($sp)
/* 0042453C 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00424540 91040021 */  lbu   $a0, 0x21($t0)
/* 00424544 8D060030 */  lw    $a2, 0x30($t0)
/* 00424548 24070028 */  li    $a3, 40
/* 0042454C A3A7003F */  sb    $a3, 0x3f($sp)
/* 00424550 00002825 */  move  $a1, $zero
/* 00424554 3084001F */  andi  $a0, $a0, 0x1f
/* 00424558 0320F809 */  jalr  $t9
/* 0042455C 24C60001 */   addiu $a2, $a2, 1
/* 00424560 92050021 */  lbu   $a1, 0x21($s0)
/* 00424564 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424568 93A7003F */  lbu   $a3, 0x3f($sp)
/* 0042456C AFA2002C */  sw    $v0, 0x2c($sp)
/* 00424570 00404025 */  move  $t0, $v0
/* 00424574 10000009 */  b     .L0042459C
/* 00424578 30A5001F */   andi  $a1, $a1, 0x1f
/* 0042457C AFA30030 */  sw    $v1, 0x30($sp)
.L00424580:
/* 00424580 10000006 */  b     .L0042459C
/* 00424584 00404025 */   move  $t0, $v0
.L00424588:
/* 00424588 50E1FFE8 */  beql  $a3, $at, .L0042452C
/* 0042458C 91090020 */   lbu   $t1, 0x20($t0)
/* 00424590 2401004D */  li    $at, 77
/* 00424594 50E1FFCD */  beql  $a3, $at, .L004244CC
/* 00424598 91190020 */   lbu   $t9, 0x20($t0)
.L0042459C:
/* 0042459C 8F8A8890 */  lw     $t2, %got(trapop)($gp)
/* 004245A0 00071040 */  sll   $v0, $a3, 1
/* 004245A4 24010006 */  li    $at, 6
/* 004245A8 004A6021 */  addu  $t4, $v0, $t2
/* 004245AC 10A10004 */  beq   $a1, $at, .L004245C0
/* 004245B0 95830000 */   lhu   $v1, ($t4)
/* 004245B4 8F8D8894 */  lw     $t5, %got(utrapop)($gp)
/* 004245B8 004D7021 */  addu  $t6, $v0, $t5
/* 004245BC 95C30000 */  lhu   $v1, ($t6)
.L004245C0:
/* 004245C0 93AB004B */  lbu   $t3, 0x4b($sp)
/* 004245C4 8FAA0040 */  lw    $t2, 0x40($sp)
/* 004245C8 8FA40030 */  lw    $a0, 0x30($sp)
/* 004245CC 51600006 */  beql  $t3, $zero, .L004245E8
/* 004245D0 91090020 */   lbu   $t1, 0x20($t0)
/* 004245D4 8F98888C */  lw     $t8, %got(inv)($gp)
/* 004245D8 00037840 */  sll   $t7, $v1, 1
/* 004245DC 01F8C821 */  addu  $t9, $t7, $t8
/* 004245E0 97230000 */  lhu   $v1, ($t9)
/* 004245E4 91090020 */  lbu   $t1, 0x20($t0)
.L004245E8:
/* 004245E8 24010049 */  li    $at, 73
/* 004245EC 15210034 */  bne   $t1, $at, .L004246C0
/* 004245F0 24010008 */   li    $at, 8
/* 004245F4 15410032 */  bne   $t2, $at, .L004246C0
/* 004245F8 24050048 */   li    $a1, 72
/* 004245FC 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00424600 8FA40030 */  lw    $a0, 0x30($sp)
/* 00424604 A7A3003C */  sh    $v1, 0x3c($sp)
/* 00424608 0320F809 */  jalr  $t9
/* 0042460C AFA8002C */   sw    $t0, 0x2c($sp)
/* 00424610 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424614 8FAD002C */  lw    $t5, 0x2c($sp)
/* 00424618 8F8C89D8 */  lw     $t4, %got(opcode_arch)($gp)
/* 0042461C 918C0000 */  lbu   $t4, ($t4)
/* 00424620 15800019 */  bnez  $t4, .L00424688
/* 00424624 00000000 */   nop   
/* 00424628 91AE0021 */  lbu   $t6, 0x21($t5)
/* 0042462C 3C010501 */  lui   $at, 0x501
/* 00424630 31CB001F */  andi  $t3, $t6, 0x1f
/* 00424634 2D6F0020 */  sltiu $t7, $t3, 0x20
/* 00424638 000FC023 */  negu  $t8, $t7
/* 0042463C 0301C824 */  and   $t9, $t8, $at
/* 00424640 01794804 */  sllv  $t1, $t9, $t3
/* 00424644 05210010 */  bgez  $t1, .L00424688
/* 00424648 00000000 */   nop   
/* 0042464C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00424650 8FA40030 */  lw    $a0, 0x30($sp)
/* 00424654 0320F809 */  jalr  $t9
/* 00424658 00000000 */   nop   
/* 0042465C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424660 8FA3002C */  lw    $v1, 0x2c($sp)
/* 00424664 97A4003C */  lhu   $a0, 0x3c($sp)
/* 00424668 8F9982CC */  lw    $t9, %call16(emit_trap_ri)($gp)
/* 0042466C 00402825 */  move  $a1, $v0
/* 00424670 AFB00010 */  sw    $s0, 0x10($sp)
/* 00424674 8C660030 */  lw    $a2, 0x30($v1)
/* 00424678 0320F809 */  jalr  $t9
/* 0042467C 8C670034 */   lw    $a3, 0x34($v1)
/* 00424680 10000068 */  b     .L00424824
/* 00424684 8FBC0020 */   lw    $gp, 0x20($sp)
.L00424688:
/* 00424688 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042468C 8FA40030 */  lw    $a0, 0x30($sp)
/* 00424690 0320F809 */  jalr  $t9
/* 00424694 00000000 */   nop   
/* 00424698 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042469C 8FAA002C */  lw    $t2, 0x2c($sp)
/* 004246A0 97A4003C */  lhu   $a0, 0x3c($sp)
/* 004246A4 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 004246A8 00402825 */  move  $a1, $v0
/* 004246AC 00003825 */  move  $a3, $zero
/* 004246B0 0320F809 */  jalr  $t9
/* 004246B4 8D460030 */   lw    $a2, 0x30($t2)
/* 004246B8 1000005A */  b     .L00424824
/* 004246BC 8FBC0020 */   lw    $gp, 0x20($sp)
.L004246C0:
/* 004246C0 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004246C4 24050048 */  li    $a1, 72
/* 004246C8 A7A3003C */  sh    $v1, 0x3c($sp)
/* 004246CC 0320F809 */  jalr  $t9
/* 004246D0 AFA8002C */   sw    $t0, 0x2c($sp)
/* 004246D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004246D8 8FA4002C */  lw    $a0, 0x2c($sp)
/* 004246DC 24050048 */  li    $a1, 72
/* 004246E0 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004246E4 0320F809 */  jalr  $t9
/* 004246E8 00000000 */   nop   
/* 004246EC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004246F0 8FA40030 */  lw    $a0, 0x30($sp)
/* 004246F4 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 004246F8 0320F809 */  jalr  $t9
/* 004246FC 00000000 */   nop   
/* 00424700 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424704 8FA4002C */  lw    $a0, 0x2c($sp)
/* 00424708 A3A2003B */  sb    $v0, 0x3b($sp)
/* 0042470C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00424710 0320F809 */  jalr  $t9
/* 00424714 00000000 */   nop   
/* 00424718 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042471C 93A5003B */  lbu   $a1, 0x3b($sp)
/* 00424720 97A4003C */  lhu   $a0, 0x3c($sp)
/* 00424724 8F9982C8 */  lw    $t9, %call16(emit_trap_rri)($gp)
/* 00424728 304600FF */  andi  $a2, $v0, 0xff
/* 0042472C 8FA70040 */  lw    $a3, 0x40($sp)
/* 00424730 0320F809 */  jalr  $t9
/* 00424734 AFB00010 */   sw    $s0, 0x10($sp)
/* 00424738 1000003A */  b     .L00424824
/* 0042473C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00424740:
/* 00424740 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00424744 02002025 */  move  $a0, $s0
/* 00424748 24050048 */  li    $a1, 72
/* 0042474C 0320F809 */  jalr  $t9
/* 00424750 00000000 */   nop   
/* 00424754 93AC004B */  lbu   $t4, 0x4b($sp)
/* 00424758 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042475C 24020104 */  li    $v0, 260
/* 00424760 11800002 */  beqz  $t4, .L0042476C
/* 00424764 00000000 */   nop   
/* 00424768 24020103 */  li    $v0, 259
.L0042476C:
/* 0042476C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00424770 02002025 */  move  $a0, $s0
/* 00424774 A7A2003C */  sh    $v0, 0x3c($sp)
/* 00424778 0320F809 */  jalr  $t9
/* 0042477C 00000000 */   nop   
/* 00424780 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00424784 97A4003C */  lhu   $a0, 0x3c($sp)
/* 00424788 00402825 */  move  $a1, $v0
/* 0042478C 8F9982C8 */  lw    $t9, %call16(emit_trap_rri)($gp)
/* 00424790 00003025 */  move  $a2, $zero
/* 00424794 8FA70040 */  lw    $a3, 0x40($sp)
/* 00424798 0320F809 */  jalr  $t9
/* 0042479C AFB00010 */   sw    $s0, 0x10($sp)
/* 004247A0 10000020 */  b     .L00424824
/* 004247A4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004247A8:
/* 004247A8 2CE10051 */  sltiu $at, $a3, 0x51
/* 004247AC 14200006 */  bnez  $at, .L004247C8
/* 004247B0 24EEFFB3 */   addiu $t6, $a3, -0x4d
/* 004247B4 2401005F */  li    $at, 95
/* 004247B8 50E1FED7 */  beql  $a3, $at, .L00424318
/* 004247BC 92050021 */   lbu   $a1, 0x21($s0)
/* 004247C0 1000FFDF */  b     .L00424740
/* 004247C4 00000000 */   nop   
.L004247C8:
/* 004247C8 2CE1002A */  sltiu $at, $a3, 0x2a
/* 004247CC 1020000B */  beqz  $at, .L004247FC
/* 004247D0 24EDFFDD */   addiu $t5, $a3, -0x23
/* 004247D4 2DA10007 */  sltiu $at, $t5, 7
/* 004247D8 1020FFD9 */  beqz  $at, .L00424740
/* 004247DC 00000000 */   nop   
/* 004247E0 8F818038 */  lw    $at, %got(jtbl_10009C6C)($gp)
/* 004247E4 000D6880 */  sll   $t5, $t5, 2
/* 004247E8 002D0821 */  addu  $at, $at, $t5
/* 004247EC 8C2D9C6C */  lw    $t5, %lo(jtbl_10009C6C)($at)
/* 004247F0 01BC6821 */  addu  $t5, $t5, $gp
/* 004247F4 01A00008 */  jr    $t5
/* 004247F8 00000000 */   nop   
.L004247FC:
/* 004247FC 2DC10004 */  sltiu $at, $t6, 4
/* 00424800 1020FFCF */  beqz  $at, .L00424740
/* 00424804 00000000 */   nop   
/* 00424808 8F818038 */  lw    $at, %got(jtbl_10009C88)($gp)
/* 0042480C 000E7080 */  sll   $t6, $t6, 2
/* 00424810 002E0821 */  addu  $at, $at, $t6
/* 00424814 8C2E9C88 */  lw    $t6, %lo(jtbl_10009C88)($at)
/* 00424818 01DC7021 */  addu  $t6, $t6, $gp
/* 0042481C 01C00008 */  jr    $t6
/* 00424820 00000000 */   nop   
.L00424824:
/* 00424824 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00424828 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0042482C 27BD0040 */  addiu $sp, $sp, 0x40
/* 00424830 03E00008 */  jr    $ra
/* 00424834 00000000 */   nop   
    .type trap, @function
    .size trap, .-trap
    .end trap

glabel is_saved_reg
    .ent is_saved_reg
    # 0042A64C save_vreg
    # 0042AEE8 get_saved_regs_size
/* 00424838 3C1C0FC0 */  .cpload $t9
/* 0042483C 279CB218 */  
/* 00424840 0399E021 */  
/* 00424844 2C820010 */  sltiu $v0, $a0, 0x10
/* 00424848 38430001 */  xori  $v1, $v0, 1
/* 0042484C 10600006 */  beqz  $v1, .L00424868
/* 00424850 AFA40000 */   sw    $a0, ($sp)
/* 00424854 8F8E8A04 */  lw     $t6, %got(n_saved_regs)($gp)
/* 00424858 8DCE0000 */  lw    $t6, ($t6)
/* 0042485C 25CF000F */  addiu $t7, $t6, 0xf
/* 00424860 01E4182B */  sltu  $v1, $t7, $a0
/* 00424864 38630001 */  xori  $v1, $v1, 1
.L00424868:
/* 00424868 14600010 */  bnez  $v1, .L004248AC
/* 0042486C 2C980020 */   sltiu $t8, $a0, 0x20
/* 00424870 0018C823 */  negu  $t9, $t8
/* 00424874 33280003 */  andi  $t0, $t9, 3
/* 00424878 00881004 */  sllv  $v0, $t0, $a0
/* 0042487C 28430000 */  slti  $v1, $v0, 0
/* 00424880 1460000A */  bnez  $v1, .L004248AC
/* 00424884 2C820034 */   sltiu $v0, $a0, 0x34
/* 00424888 38430001 */  xori  $v1, $v0, 1
/* 0042488C 10600007 */  beqz  $v1, .L004248AC
/* 00424890 00000000 */   nop   
/* 00424894 8F898A08 */  lw     $t1, %got(n_saved_fp_regs)($gp)
/* 00424898 8D290000 */  lw    $t1, ($t1)
/* 0042489C 00095040 */  sll   $t2, $t1, 1
/* 004248A0 254B0032 */  addiu $t3, $t2, 0x32
/* 004248A4 0164182B */  sltu  $v1, $t3, $a0
/* 004248A8 38630001 */  xori  $v1, $v1, 1
.L004248AC:
/* 004248AC 03E00008 */  jr    $ra
/* 004248B0 00601025 */   move  $v0, $v1
    .type is_saved_reg, @function
    .size is_saved_reg, .-is_saved_reg
    .end is_saved_reg

glabel is_parm_reg
    .ent is_parm_reg
    # 0042B410 home_parms
    # 0042BDAC eval
/* 004248B4 3C1C0FC0 */  .cpload $t9
/* 004248B8 279CB19C */  
/* 004248BC 0399E021 */  
/* 004248C0 2C820004 */  sltiu $v0, $a0, 4
/* 004248C4 38430001 */  xori  $v1, $v0, 1
/* 004248C8 10600006 */  beqz  $v1, .L004248E4
/* 004248CC AFA40000 */   sw    $a0, ($sp)
/* 004248D0 8F8E89FC */  lw     $t6, %got(n_parm_regs)($gp)
/* 004248D4 8DCE0000 */  lw    $t6, ($t6)
/* 004248D8 25CF0003 */  addiu $t7, $t6, 3
/* 004248DC 01E4182B */  sltu  $v1, $t7, $a0
/* 004248E0 38630001 */  xori  $v1, $v1, 1
.L004248E4:
/* 004248E4 1460000A */  bnez  $v1, .L00424910
/* 004248E8 2C82002C */   sltiu $v0, $a0, 0x2c
/* 004248EC 38430001 */  xori  $v1, $v0, 1
/* 004248F0 10600007 */  beqz  $v1, .L00424910
/* 004248F4 00000000 */   nop   
/* 004248F8 8F988A00 */  lw     $t8, %got(n_fp_parm_regs)($gp)
/* 004248FC 8F180000 */  lw    $t8, ($t8)
/* 00424900 0018C840 */  sll   $t9, $t8, 1
/* 00424904 2728002A */  addiu $t0, $t9, 0x2a
/* 00424908 0104182B */  sltu  $v1, $t0, $a0
/* 0042490C 38630001 */  xori  $v1, $v1, 1
.L00424910:
/* 00424910 03E00008 */  jr    $ra
/* 00424914 00601025 */   move  $v0, $v1
    .type is_parm_reg, @function
    .size is_parm_reg, .-is_parm_reg
    .end is_parm_reg

glabel is_fp_reg
    .ent is_fp_reg
    # 00426C54 func_00426C54
    # 00426EF0 iloadistore
    # 00427620 rloadrstore
    # 00427CE4 unaligned_loadstore_for_two_fp_w
    # 00427E8C loadstore_for_two_fp_words
    # 004280C4 func_004280C4
    # 00428190 func_00428190
    # 00428384 unaligned_loadstore
/* 00424918 2C820020 */  sltiu $v0, $a0, 0x20
/* 0042491C 38430001 */  xori  $v1, $v0, 1
/* 00424920 10600002 */  beqz  $v1, .L0042492C
/* 00424924 AFA40000 */   sw    $a0, ($sp)
/* 00424928 2C830040 */  sltiu $v1, $a0, 0x40
.L0042492C:
/* 0042492C 03E00008 */  jr    $ra
/* 00424930 00601025 */   move  $v0, $v1
    .type is_fp_reg, @function
    .size is_fp_reg, .-is_fp_reg
    .end is_fp_reg

glabel restore_from_temp
    .ent restore_from_temp
    # 00424F70 reg
    # 00425140 binary_regs
    # 0042BDAC eval
/* 00424934 3C1C0FC0 */  .cpload $t9
/* 00424938 279CB11C */  
/* 0042493C 0399E021 */  
/* 00424940 8F998694 */  lw    $t9, %call16(result_type)($gp)
/* 00424944 27BDFF38 */  addiu $sp, $sp, -0xc8
/* 00424948 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0042494C AFB000AC */  sw    $s0, 0xac($sp)
/* 00424950 00808025 */  move  $s0, $a0
/* 00424954 0320F809 */  jalr  $t9
/* 00424958 AFBC00B0 */   sw    $gp, 0xb0($sp)
/* 0042495C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424960 A3A200C7 */  sb    $v0, 0xc7($sp)
/* 00424964 24190008 */  li    $t9, 8
/* 00424968 8F8E89B8 */  lw     $t6, %got(isa)($gp)
/* 0042496C 304300FF */  andi  $v1, $v0, 0xff
/* 00424970 91CE0000 */  lbu   $t6, ($t6)
/* 00424974 2DC10002 */  sltiu $at, $t6, 2
/* 00424978 50200009 */  beql  $at, $zero, .L004249A0
/* 0042497C AFB900C0 */   sw    $t9, 0xc0($sp)
/* 00424980 8F8F89D8 */  lw     $t7, %got(opcode_arch)($gp)
/* 00424984 24180004 */  li    $t8, 4
/* 00424988 91EF0000 */  lbu   $t7, ($t7)
/* 0042498C 55E00004 */  bnel  $t7, $zero, .L004249A0
/* 00424990 AFB900C0 */   sw    $t9, 0xc0($sp)
/* 00424994 10000002 */  b     .L004249A0
/* 00424998 AFB800C0 */   sw    $t8, 0xc0($sp)
/* 0042499C AFB900C0 */  sw    $t9, 0xc0($sp)
.L004249A0:
/* 004249A0 2C610011 */  sltiu $at, $v1, 0x11
/* 004249A4 1020008C */  beqz  $at, .L00424BD8
/* 004249A8 00000000 */   nop   
/* 004249AC 8F818038 */  lw    $at, %got(jtbl_10009DD8)($gp)
/* 004249B0 00034080 */  sll   $t0, $v1, 2
/* 004249B4 00280821 */  addu  $at, $at, $t0
/* 004249B8 8C289DD8 */  lw    $t0, %lo(jtbl_10009DD8)($at)
/* 004249BC 011C4021 */  addu  $t0, $t0, $gp
/* 004249C0 01000008 */  jr    $t0
/* 004249C4 00000000 */   nop   
.L004249C8:
/* 004249C8 8F9985C4 */  lw    $t9, %call16(temp_usage_count)($gp)
/* 004249CC 92040018 */  lbu   $a0, 0x18($s0)
/* 004249D0 0320F809 */  jalr  $t9
/* 004249D4 00000000 */   nop   
/* 004249D8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004249DC 93A900C7 */  lbu   $t1, 0xc7($sp)
/* 004249E0 02002025 */  move  $a0, $s0
/* 004249E4 8F8A8898 */  lw     $t2, %got(reg_kind_tab)($gp)
/* 004249E8 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 004249EC 00403025 */  move  $a2, $v0
/* 004249F0 012A5821 */  addu  $t3, $t1, $t2
/* 004249F4 0320F809 */  jalr  $t9
/* 004249F8 91650000 */   lbu   $a1, ($t3)
/* 004249FC 92030019 */  lbu   $v1, 0x19($s0)
/* 00424A00 93A800C7 */  lbu   $t0, 0xc7($sp)
/* 00424A04 2401000C */  li    $at, 12
/* 00424A08 00036600 */  sll   $t4, $v1, 0x18
/* 00424A0C 000C6E42 */  srl   $t5, $t4, 0x19
/* 00424A10 004D7026 */  xor   $t6, $v0, $t5
/* 00424A14 000E7E40 */  sll   $t7, $t6, 0x19
/* 00424A18 000FC602 */  srl   $t8, $t7, 0x18
/* 00424A1C 0303C826 */  xor   $t9, $t8, $v1
/* 00424A20 A2190019 */  sb    $t9, 0x19($s0)
/* 00424A24 150100AA */  bne   $t0, $at, .L00424CD0
/* 00424A28 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 00424A2C 24090008 */  li    $t1, 8
/* 00424A30 100000A7 */  b     .L00424CD0
/* 00424A34 AFA900C0 */   sw    $t1, 0xc0($sp)
.L00424A38:
/* 00424A38 8F8A8038 */  lw    $t2, %got(RO_10009D88)($gp)
/* 00424A3C 24040004 */  li    $a0, 4
/* 00424A40 2405052B */  li    $a1, 1323
/* 00424A44 254A9D88 */  addiu $t2, %lo(RO_10009D88) # addiu $t2, $t2, -0x6278
/* 00424A48 254E0048 */  addiu $t6, $t2, 0x48
/* 00424A4C 03A06825 */  move  $t5, $sp
.L00424A50:
/* 00424A50 894C0000 */  lwl   $t4, ($t2)
/* 00424A54 994C0003 */  lwr   $t4, 3($t2)
/* 00424A58 254A000C */  addiu $t2, $t2, 0xc
/* 00424A5C 25AD000C */  addiu $t5, $t5, 0xc
/* 00424A60 A9ACFFFC */  swl   $t4, -4($t5)
/* 00424A64 B9ACFFFF */  swr   $t4, -1($t5)
/* 00424A68 894BFFF8 */  lwl   $t3, -8($t2)
/* 00424A6C 994BFFFB */  lwr   $t3, -5($t2)
/* 00424A70 A9AB0000 */  swl   $t3, ($t5)
/* 00424A74 B9AB0003 */  swr   $t3, 3($t5)
/* 00424A78 894CFFFC */  lwl   $t4, -4($t2)
/* 00424A7C 994CFFFF */  lwr   $t4, -1($t2)
/* 00424A80 A9AC0004 */  swl   $t4, 4($t5)
/* 00424A84 154EFFF2 */  bne   $t2, $t6, .L00424A50
/* 00424A88 B9AC0007 */   swr   $t4, 7($t5)
/* 00424A8C 894C0000 */  lwl   $t4, ($t2)
/* 00424A90 994C0003 */  lwr   $t4, 3($t2)
/* 00424A94 8F8F8038 */  lw    $t7, %got(RO_10009D38)($gp)
/* 00424A98 03A04025 */  move  $t0, $sp
/* 00424A9C A9AC0008 */  swl   $t4, 8($t5)
/* 00424AA0 B9AC000B */  swr   $t4, 0xb($t5)
/* 00424AA4 894B0004 */  lwl   $t3, 4($t2)
/* 00424AA8 994B0007 */  lwr   $t3, 7($t2)
/* 00424AAC 25EF9D38 */  addiu $t7, %lo(RO_10009D38) # addiu $t7, $t7, -0x62c8
/* 00424AB0 25E90048 */  addiu $t1, $t7, 0x48
/* 00424AB4 A9AB000C */  swl   $t3, 0xc($t5)
/* 00424AB8 B9AB000F */  swr   $t3, 0xf($t5)
.L00424ABC:
/* 00424ABC 89F90000 */  lwl   $t9, ($t7)
/* 00424AC0 99F90003 */  lwr   $t9, 3($t7)
/* 00424AC4 25EF000C */  addiu $t7, $t7, 0xc
/* 00424AC8 2508000C */  addiu $t0, $t0, 0xc
/* 00424ACC A919004C */  swl   $t9, 0x4c($t0)
/* 00424AD0 B919004F */  swr   $t9, 0x4f($t0)
/* 00424AD4 89F8FFF8 */  lwl   $t8, -8($t7)
/* 00424AD8 99F8FFFB */  lwr   $t8, -5($t7)
/* 00424ADC A9180050 */  swl   $t8, 0x50($t0)
/* 00424AE0 B9180053 */  swr   $t8, 0x53($t0)
/* 00424AE4 89F9FFFC */  lwl   $t9, -4($t7)
/* 00424AE8 99F9FFFF */  lwr   $t9, -1($t7)
/* 00424AEC A9190054 */  swl   $t9, 0x54($t0)
/* 00424AF0 15E9FFF2 */  bne   $t7, $t1, .L00424ABC
/* 00424AF4 B9190057 */   swr   $t9, 0x57($t0)
/* 00424AF8 89F90000 */  lwl   $t9, ($t7)
/* 00424AFC 99F90003 */  lwr   $t9, 3($t7)
/* 00424B00 A9190058 */  swl   $t9, 0x58($t0)
/* 00424B04 B919005B */  swr   $t9, 0x5b($t0)
/* 00424B08 89F80004 */  lwl   $t8, 4($t7)
/* 00424B0C 99F80007 */  lwr   $t8, 7($t7)
/* 00424B10 A918005C */  swl   $t8, 0x5c($t0)
/* 00424B14 B918005F */  swr   $t8, 0x5f($t0)
/* 00424B18 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00424B1C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00424B20 8FA60008 */  lw    $a2, 8($sp)
/* 00424B24 0320F809 */  jalr  $t9
/* 00424B28 00000000 */   nop   
/* 00424B2C 10000068 */  b     .L00424CD0
/* 00424B30 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00424B34:
/* 00424B34 8F9985C4 */  lw    $t9, %call16(temp_usage_count)($gp)
/* 00424B38 92040018 */  lbu   $a0, 0x18($s0)
/* 00424B3C 0320F809 */  jalr  $t9
/* 00424B40 00000000 */   nop   
/* 00424B44 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424B48 02002025 */  move  $a0, $s0
/* 00424B4C 00402825 */  move  $a1, $v0
/* 00424B50 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00424B54 0320F809 */  jalr  $t9
/* 00424B58 00000000 */   nop   
/* 00424B5C 92030019 */  lbu   $v1, 0x19($s0)
/* 00424B60 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424B64 00037600 */  sll   $t6, $v1, 0x18
/* 00424B68 000E5642 */  srl   $t2, $t6, 0x19
/* 00424B6C 004A6826 */  xor   $t5, $v0, $t2
/* 00424B70 000D5E40 */  sll   $t3, $t5, 0x19
/* 00424B74 000B6602 */  srl   $t4, $t3, 0x18
/* 00424B78 01834826 */  xor   $t1, $t4, $v1
/* 00424B7C 10000054 */  b     .L00424CD0
/* 00424B80 A2090019 */   sb    $t1, 0x19($s0)
.L00424B84:
/* 00424B84 8F9985C4 */  lw    $t9, %call16(temp_usage_count)($gp)
/* 00424B88 240F0008 */  li    $t7, 8
/* 00424B8C AFAF00C0 */  sw    $t7, 0xc0($sp)
/* 00424B90 0320F809 */  jalr  $t9
/* 00424B94 92040018 */   lbu   $a0, 0x18($s0)
/* 00424B98 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424B9C 02002025 */  move  $a0, $s0
/* 00424BA0 00402825 */  move  $a1, $v0
/* 00424BA4 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00424BA8 0320F809 */  jalr  $t9
/* 00424BAC 00000000 */   nop   
/* 00424BB0 92030019 */  lbu   $v1, 0x19($s0)
/* 00424BB4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424BB8 00034600 */  sll   $t0, $v1, 0x18
/* 00424BBC 0008C642 */  srl   $t8, $t0, 0x19
/* 00424BC0 0058C826 */  xor   $t9, $v0, $t8
/* 00424BC4 00197640 */  sll   $t6, $t9, 0x19
/* 00424BC8 000E5602 */  srl   $t2, $t6, 0x18
/* 00424BCC 01436826 */  xor   $t5, $t2, $v1
/* 00424BD0 1000003F */  b     .L00424CD0
/* 00424BD4 A20D0019 */   sb    $t5, 0x19($s0)
.L00424BD8:
/* 00424BD8 8F8B8038 */  lw    $t3, %got(RO_10009CE8)($gp)
/* 00424BDC 24040004 */  li    $a0, 4
/* 00424BE0 24050541 */  li    $a1, 1345
/* 00424BE4 256B9CE8 */  addiu $t3, %lo(RO_10009CE8) # addiu $t3, $t3, -0x6318
/* 00424BE8 25680048 */  addiu $t0, $t3, 0x48
/* 00424BEC 03A07825 */  move  $t7, $sp
.L00424BF0:
/* 00424BF0 89690000 */  lwl   $t1, ($t3)
/* 00424BF4 99690003 */  lwr   $t1, 3($t3)
/* 00424BF8 256B000C */  addiu $t3, $t3, 0xc
/* 00424BFC 25EF000C */  addiu $t7, $t7, 0xc
/* 00424C00 A9E9FFFC */  swl   $t1, -4($t7)
/* 00424C04 B9E9FFFF */  swr   $t1, -1($t7)
/* 00424C08 896CFFF8 */  lwl   $t4, -8($t3)
/* 00424C0C 996CFFFB */  lwr   $t4, -5($t3)
/* 00424C10 A9EC0000 */  swl   $t4, ($t7)
/* 00424C14 B9EC0003 */  swr   $t4, 3($t7)
/* 00424C18 8969FFFC */  lwl   $t1, -4($t3)
/* 00424C1C 9969FFFF */  lwr   $t1, -1($t3)
/* 00424C20 A9E90004 */  swl   $t1, 4($t7)
/* 00424C24 1568FFF2 */  bne   $t3, $t0, .L00424BF0
/* 00424C28 B9E90007 */   swr   $t1, 7($t7)
/* 00424C2C 89690000 */  lwl   $t1, ($t3)
/* 00424C30 99690003 */  lwr   $t1, 3($t3)
/* 00424C34 8F988038 */  lw    $t8, %got(RO_10009C98)($gp)
/* 00424C38 03A05025 */  move  $t2, $sp
/* 00424C3C A9E90008 */  swl   $t1, 8($t7)
/* 00424C40 B9E9000B */  swr   $t1, 0xb($t7)
/* 00424C44 896C0004 */  lwl   $t4, 4($t3)
/* 00424C48 996C0007 */  lwr   $t4, 7($t3)
/* 00424C4C 27189C98 */  addiu $t8, %lo(RO_10009C98) # addiu $t8, $t8, -0x6368
/* 00424C50 270D0048 */  addiu $t5, $t8, 0x48
/* 00424C54 A9EC000C */  swl   $t4, 0xc($t7)
/* 00424C58 B9EC000F */  swr   $t4, 0xf($t7)
.L00424C5C:
/* 00424C5C 8B0E0000 */  lwl   $t6, ($t8)
/* 00424C60 9B0E0003 */  lwr   $t6, 3($t8)
/* 00424C64 2718000C */  addiu $t8, $t8, 0xc
/* 00424C68 254A000C */  addiu $t2, $t2, 0xc
/* 00424C6C A94E004C */  swl   $t6, 0x4c($t2)
/* 00424C70 B94E004F */  swr   $t6, 0x4f($t2)
/* 00424C74 8B19FFF8 */  lwl   $t9, -8($t8)
/* 00424C78 9B19FFFB */  lwr   $t9, -5($t8)
/* 00424C7C A9590050 */  swl   $t9, 0x50($t2)
/* 00424C80 B9590053 */  swr   $t9, 0x53($t2)
/* 00424C84 8B0EFFFC */  lwl   $t6, -4($t8)
/* 00424C88 9B0EFFFF */  lwr   $t6, -1($t8)
/* 00424C8C A94E0054 */  swl   $t6, 0x54($t2)
/* 00424C90 170DFFF2 */  bne   $t8, $t5, .L00424C5C
/* 00424C94 B94E0057 */   swr   $t6, 0x57($t2)
/* 00424C98 8B0E0000 */  lwl   $t6, ($t8)
/* 00424C9C 9B0E0003 */  lwr   $t6, 3($t8)
/* 00424CA0 A94E0058 */  swl   $t6, 0x58($t2)
/* 00424CA4 B94E005B */  swr   $t6, 0x5b($t2)
/* 00424CA8 8B190004 */  lwl   $t9, 4($t8)
/* 00424CAC 9B190007 */  lwr   $t9, 7($t8)
/* 00424CB0 A959005C */  swl   $t9, 0x5c($t2)
/* 00424CB4 B959005F */  swr   $t9, 0x5f($t2)
/* 00424CB8 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00424CBC 8FA7000C */  lw    $a3, 0xc($sp)
/* 00424CC0 8FA60008 */  lw    $a2, 8($sp)
/* 00424CC4 0320F809 */  jalr  $t9
/* 00424CC8 00000000 */   nop   
/* 00424CCC 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00424CD0:
/* 00424CD0 8F898A74 */  lw     $t1, %got(reversed_stack)($gp)
/* 00424CD4 93A800C7 */  lbu   $t0, 0xc7($sp)
/* 00424CD8 8F8F889C */  lw     $t7, %got(load_op_tab)($gp)
/* 00424CDC 91290000 */  lbu   $t1, ($t1)
/* 00424CE0 00085840 */  sll   $t3, $t0, 1
/* 00424CE4 016F6021 */  addu  $t4, $t3, $t7
/* 00424CE8 1120004E */  beqz  $t1, .L00424E24
/* 00424CEC 95820000 */   lhu   $v0, ($t4)
/* 00424CF0 2401006C */  li    $at, 108
/* 00424CF4 14410033 */  bne   $v0, $at, .L00424DC4
/* 00424CF8 00000000 */   nop   
/* 00424CFC 8F8D89D8 */  lw     $t5, %got(opcode_arch)($gp)
/* 00424D00 91AD0000 */  lbu   $t5, ($t5)
/* 00424D04 15A0002F */  bnez  $t5, .L00424DC4
/* 00424D08 00000000 */   nop   
/* 00424D0C 8F9985C0 */  lw    $t9, %call16(temp_offset)($gp)
/* 00424D10 92040018 */  lbu   $a0, 0x18($s0)
/* 00424D14 0320F809 */  jalr  $t9
/* 00424D18 00000000 */   nop   
/* 00424D1C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424D20 8FB800C0 */  lw    $t8, 0xc0($sp)
/* 00424D24 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 00424D28 00582021 */  addu  $a0, $v0, $t8
/* 00424D2C 0320F809 */  jalr  $t9
/* 00424D30 00000000 */   nop   
/* 00424D34 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424D38 92050019 */  lbu   $a1, 0x19($s0)
/* 00424D3C 2404002A */  li    $a0, 42
/* 00424D40 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00424D44 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00424D48 00052E00 */  sll   $a1, $a1, 0x18
/* 00424D4C 00052E42 */  srl   $a1, $a1, 0x19
/* 00424D50 00403025 */  move  $a2, $v0
/* 00424D54 AFA00010 */  sw    $zero, 0x10($sp)
/* 00424D58 0320F809 */  jalr  $t9
/* 00424D5C 90E70000 */   lbu   $a3, ($a3)
/* 00424D60 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424D64 92040018 */  lbu   $a0, 0x18($s0)
/* 00424D68 8F9985C0 */  lw    $t9, %call16(temp_offset)($gp)
/* 00424D6C 0320F809 */  jalr  $t9
/* 00424D70 00000000 */   nop   
/* 00424D74 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424D78 8FAA00C0 */  lw    $t2, 0xc0($sp)
/* 00424D7C 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 00424D80 004A2021 */  addu  $a0, $v0, $t2
/* 00424D84 0320F809 */  jalr  $t9
/* 00424D88 00000000 */   nop   
/* 00424D8C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424D90 92050019 */  lbu   $a1, 0x19($s0)
/* 00424D94 2404002A */  li    $a0, 42
/* 00424D98 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00424D9C 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00424DA0 00052E00 */  sll   $a1, $a1, 0x18
/* 00424DA4 00052E42 */  srl   $a1, $a1, 0x19
/* 00424DA8 24A50001 */  addiu $a1, $a1, 1
/* 00424DAC 24460004 */  addiu $a2, $v0, 4
/* 00424DB0 AFA00010 */  sw    $zero, 0x10($sp)
/* 00424DB4 0320F809 */  jalr  $t9
/* 00424DB8 90E70000 */   lbu   $a3, ($a3)
/* 00424DBC 10000062 */  b     .L00424F48
/* 00424DC0 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00424DC4:
/* 00424DC4 8F9985C0 */  lw    $t9, %call16(temp_offset)($gp)
/* 00424DC8 92040018 */  lbu   $a0, 0x18($s0)
/* 00424DCC A7A200BE */  sh    $v0, 0xbe($sp)
/* 00424DD0 0320F809 */  jalr  $t9
/* 00424DD4 00000000 */   nop   
/* 00424DD8 8FB900C0 */  lw    $t9, 0xc0($sp)
/* 00424DDC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424DE0 00592021 */  addu  $a0, $v0, $t9
/* 00424DE4 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 00424DE8 0320F809 */  jalr  $t9
/* 00424DEC 00000000 */   nop   
/* 00424DF0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424DF4 92050019 */  lbu   $a1, 0x19($s0)
/* 00424DF8 97A400BE */  lhu   $a0, 0xbe($sp)
/* 00424DFC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00424E00 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00424E04 00052E00 */  sll   $a1, $a1, 0x18
/* 00424E08 00052E42 */  srl   $a1, $a1, 0x19
/* 00424E0C 00403025 */  move  $a2, $v0
/* 00424E10 AFA00010 */  sw    $zero, 0x10($sp)
/* 00424E14 0320F809 */  jalr  $t9
/* 00424E18 90E70000 */   lbu   $a3, ($a3)
/* 00424E1C 1000004A */  b     .L00424F48
/* 00424E20 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00424E24:
/* 00424E24 2401006C */  li    $at, 108
/* 00424E28 14410031 */  bne   $v0, $at, .L00424EF0
/* 00424E2C 00000000 */   nop   
/* 00424E30 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 00424E34 91CE0000 */  lbu   $t6, ($t6)
/* 00424E38 15C0002D */  bnez  $t6, .L00424EF0
/* 00424E3C 00000000 */   nop   
/* 00424E40 8F9985C0 */  lw    $t9, %call16(temp_offset)($gp)
/* 00424E44 92040018 */  lbu   $a0, 0x18($s0)
/* 00424E48 0320F809 */  jalr  $t9
/* 00424E4C 00000000 */   nop   
/* 00424E50 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424E54 00402025 */  move  $a0, $v0
/* 00424E58 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 00424E5C 0320F809 */  jalr  $t9
/* 00424E60 00000000 */   nop   
/* 00424E64 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424E68 92050019 */  lbu   $a1, 0x19($s0)
/* 00424E6C 2404002A */  li    $a0, 42
/* 00424E70 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00424E74 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00424E78 00052E00 */  sll   $a1, $a1, 0x18
/* 00424E7C 00052E42 */  srl   $a1, $a1, 0x19
/* 00424E80 00403025 */  move  $a2, $v0
/* 00424E84 AFA00010 */  sw    $zero, 0x10($sp)
/* 00424E88 0320F809 */  jalr  $t9
/* 00424E8C 90E70000 */   lbu   $a3, ($a3)
/* 00424E90 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424E94 92040018 */  lbu   $a0, 0x18($s0)
/* 00424E98 8F9985C0 */  lw    $t9, %call16(temp_offset)($gp)
/* 00424E9C 0320F809 */  jalr  $t9
/* 00424EA0 00000000 */   nop   
/* 00424EA4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424EA8 00402025 */  move  $a0, $v0
/* 00424EAC 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 00424EB0 0320F809 */  jalr  $t9
/* 00424EB4 00000000 */   nop   
/* 00424EB8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424EBC 92050019 */  lbu   $a1, 0x19($s0)
/* 00424EC0 2404002A */  li    $a0, 42
/* 00424EC4 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00424EC8 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00424ECC 00052E00 */  sll   $a1, $a1, 0x18
/* 00424ED0 00052E42 */  srl   $a1, $a1, 0x19
/* 00424ED4 24A50001 */  addiu $a1, $a1, 1
/* 00424ED8 24460004 */  addiu $a2, $v0, 4
/* 00424EDC AFA00010 */  sw    $zero, 0x10($sp)
/* 00424EE0 0320F809 */  jalr  $t9
/* 00424EE4 90E70000 */   lbu   $a3, ($a3)
/* 00424EE8 10000017 */  b     .L00424F48
/* 00424EEC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00424EF0:
/* 00424EF0 8F9985C0 */  lw    $t9, %call16(temp_offset)($gp)
/* 00424EF4 92040018 */  lbu   $a0, 0x18($s0)
/* 00424EF8 A7A200BE */  sh    $v0, 0xbe($sp)
/* 00424EFC 0320F809 */  jalr  $t9
/* 00424F00 00000000 */   nop   
/* 00424F04 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424F08 00402025 */  move  $a0, $v0
/* 00424F0C 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 00424F10 0320F809 */  jalr  $t9
/* 00424F14 00000000 */   nop   
/* 00424F18 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424F1C 92050019 */  lbu   $a1, 0x19($s0)
/* 00424F20 97A400BE */  lhu   $a0, 0xbe($sp)
/* 00424F24 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00424F28 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00424F2C 00052E00 */  sll   $a1, $a1, 0x18
/* 00424F30 00052E42 */  srl   $a1, $a1, 0x19
/* 00424F34 00403025 */  move  $a2, $v0
/* 00424F38 AFA00010 */  sw    $zero, 0x10($sp)
/* 00424F3C 0320F809 */  jalr  $t9
/* 00424F40 90E70000 */   lbu   $a3, ($a3)
/* 00424F44 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00424F48:
/* 00424F48 8F9985BC */  lw    $t9, %call16(free_temp)($gp)
/* 00424F4C 92040018 */  lbu   $a0, 0x18($s0)
/* 00424F50 0320F809 */  jalr  $t9
/* 00424F54 00000000 */   nop   
/* 00424F58 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00424F5C A2000018 */  sb    $zero, 0x18($s0)
/* 00424F60 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00424F64 8FB000AC */  lw    $s0, 0xac($sp)
/* 00424F68 03E00008 */  jr    $ra
/* 00424F6C 27BD00C8 */   addiu $sp, $sp, 0xc8
    .type restore_from_temp, @function
    .size restore_from_temp, .-restore_from_temp
    .end restore_from_temp

glabel reg
    .ent reg
    # 00423D28 jump
    # 00424240 trap
    # 004254B8 flt_reg
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 004340D4 func_004340D4
    # 00434500 func_00434500
    # 00434618 func_00434618
/* 00424F70 3C1C0FC0 */  .cpload $t9
/* 00424F74 279CAAE0 */  
/* 00424F78 0399E021 */  
/* 00424F7C 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 00424F80 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00424F84 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00424F88 AFB000AC */  sw    $s0, 0xac($sp)
/* 00424F8C 90860019 */  lbu   $a2, 0x19($a0)
/* 00424F90 00808025 */  move  $s0, $a0
/* 00424F94 24010048 */  li    $at, 72
/* 00424F98 00063600 */  sll   $a2, $a2, 0x18
/* 00424F9C 00063642 */  srl   $a2, $a2, 0x19
/* 00424FA0 14C10040 */  bne   $a2, $at, .L004250A4
/* 00424FA4 24040004 */   li    $a0, 4
/* 00424FA8 8F8E8038 */  lw    $t6, %got(RO_10009E6C)($gp)
/* 00424FAC 24050568 */  li    $a1, 1384
/* 00424FB0 03A0C825 */  move  $t9, $sp
/* 00424FB4 25CE9E6C */  addiu $t6, %lo(RO_10009E6C) # addiu $t6, $t6, -0x6194
/* 00424FB8 25C80048 */  addiu $t0, $t6, 0x48
.L00424FBC:
/* 00424FBC 89D80000 */  lwl   $t8, ($t6)
/* 00424FC0 99D80003 */  lwr   $t8, 3($t6)
/* 00424FC4 25CE000C */  addiu $t6, $t6, 0xc
/* 00424FC8 2739000C */  addiu $t9, $t9, 0xc
/* 00424FCC AB38FFFC */  swl   $t8, -4($t9)
/* 00424FD0 BB38FFFF */  swr   $t8, -1($t9)
/* 00424FD4 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00424FD8 99CFFFFB */  lwr   $t7, -5($t6)
/* 00424FDC AB2F0000 */  swl   $t7, ($t9)
/* 00424FE0 BB2F0003 */  swr   $t7, 3($t9)
/* 00424FE4 89D8FFFC */  lwl   $t8, -4($t6)
/* 00424FE8 99D8FFFF */  lwr   $t8, -1($t6)
/* 00424FEC AB380004 */  swl   $t8, 4($t9)
/* 00424FF0 15C8FFF2 */  bne   $t6, $t0, .L00424FBC
/* 00424FF4 BB380007 */   swr   $t8, 7($t9)
/* 00424FF8 89D80000 */  lwl   $t8, ($t6)
/* 00424FFC 99D80003 */  lwr   $t8, 3($t6)
/* 00425000 8F898038 */  lw    $t1, %got(RO_10009E1C)($gp)
/* 00425004 03A06025 */  move  $t4, $sp
/* 00425008 AB380008 */  swl   $t8, 8($t9)
/* 0042500C BB38000B */  swr   $t8, 0xb($t9)
/* 00425010 89CF0004 */  lwl   $t7, 4($t6)
/* 00425014 99CF0007 */  lwr   $t7, 7($t6)
/* 00425018 25299E1C */  addiu $t1, %lo(RO_10009E1C) # addiu $t1, $t1, -0x61e4
/* 0042501C 252D0048 */  addiu $t5, $t1, 0x48
/* 00425020 AB2F000C */  swl   $t7, 0xc($t9)
/* 00425024 BB2F000F */  swr   $t7, 0xf($t9)
.L00425028:
/* 00425028 892B0000 */  lwl   $t3, ($t1)
/* 0042502C 992B0003 */  lwr   $t3, 3($t1)
/* 00425030 2529000C */  addiu $t1, $t1, 0xc
/* 00425034 258C000C */  addiu $t4, $t4, 0xc
/* 00425038 A98B004C */  swl   $t3, 0x4c($t4)
/* 0042503C B98B004F */  swr   $t3, 0x4f($t4)
/* 00425040 892AFFF8 */  lwl   $t2, -8($t1)
/* 00425044 992AFFFB */  lwr   $t2, -5($t1)
/* 00425048 A98A0050 */  swl   $t2, 0x50($t4)
/* 0042504C B98A0053 */  swr   $t2, 0x53($t4)
/* 00425050 892BFFFC */  lwl   $t3, -4($t1)
/* 00425054 992BFFFF */  lwr   $t3, -1($t1)
/* 00425058 A98B0054 */  swl   $t3, 0x54($t4)
/* 0042505C 152DFFF2 */  bne   $t1, $t5, .L00425028
/* 00425060 B98B0057 */   swr   $t3, 0x57($t4)
/* 00425064 892B0000 */  lwl   $t3, ($t1)
/* 00425068 992B0003 */  lwr   $t3, 3($t1)
/* 0042506C A98B0058 */  swl   $t3, 0x58($t4)
/* 00425070 B98B005B */  swr   $t3, 0x5b($t4)
/* 00425074 892A0004 */  lwl   $t2, 4($t1)
/* 00425078 992A0007 */  lwr   $t2, 7($t1)
/* 0042507C A98A005C */  swl   $t2, 0x5c($t4)
/* 00425080 B98A005F */  swr   $t2, 0x5f($t4)
/* 00425084 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00425088 8FA7000C */  lw    $a3, 0xc($sp)
/* 0042508C 8FA60008 */  lw    $a2, 8($sp)
/* 00425090 0320F809 */  jalr  $t9
/* 00425094 00000000 */   nop   
/* 00425098 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0042509C 10000023 */  b     .L0042512C
/* 004250A0 24020048 */   li    $v0, 72
.L004250A4:
/* 004250A4 92080018 */  lbu   $t0, 0x18($s0)
/* 004250A8 5100000A */  beql  $t0, $zero, .L004250D4
/* 004250AC 24CEFFE0 */   addiu $t6, $a2, -0x20
/* 004250B0 8F998334 */  lw    $t9, %call16(restore_from_temp)($gp)
/* 004250B4 02002025 */  move  $a0, $s0
/* 004250B8 0320F809 */  jalr  $t9
/* 004250BC 00000000 */   nop   
/* 004250C0 92060019 */  lbu   $a2, 0x19($s0)
/* 004250C4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004250C8 00063600 */  sll   $a2, $a2, 0x18
/* 004250CC 00063642 */  srl   $a2, $a2, 0x19
/* 004250D0 24CEFFE0 */  addiu $t6, $a2, -0x20
.L004250D4:
/* 004250D4 2DD90020 */  sltiu $t9, $t6, 0x20
/* 004250D8 00197823 */  negu  $t7, $t9
/* 004250DC 01CFC004 */  sllv  $t8, $t7, $t6
/* 004250E0 0701000A */  bgez  $t8, .L0042510C
/* 004250E4 00C02025 */   move  $a0, $a2
/* 004250E8 920D0021 */  lbu   $t5, 0x21($s0)
/* 004250EC 8F8C8898 */  lw     $t4, %got(reg_kind_tab)($gp)
/* 004250F0 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 004250F4 31A9001F */  andi  $t1, $t5, 0x1f
/* 004250F8 012C5021 */  addu  $t2, $t1, $t4
/* 004250FC 0320F809 */  jalr  $t9
/* 00425100 91450000 */   lbu   $a1, ($t2)
/* 00425104 10000006 */  b     .L00425120
/* 00425108 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0042510C:
/* 0042510C 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00425110 00C02025 */  move  $a0, $a2
/* 00425114 0320F809 */  jalr  $t9
/* 00425118 00000000 */   nop   
/* 0042511C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00425120:
/* 00425120 92020019 */  lbu   $v0, 0x19($s0)
/* 00425124 00021600 */  sll   $v0, $v0, 0x18
/* 00425128 00021642 */  srl   $v0, $v0, 0x19
.L0042512C:
/* 0042512C 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00425130 8FB000AC */  lw    $s0, 0xac($sp)
/* 00425134 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 00425138 03E00008 */  jr    $ra
/* 0042513C 00000000 */   nop   
    .type reg, @function
    .size reg, .-reg
    .end reg

glabel binary_regs
    .ent binary_regs
    # 00425834 binary_flt_regs
    # 00428A9C eval2
/* 00425140 3C1C0FC0 */  .cpload $t9
/* 00425144 279CA910 */  
/* 00425148 0399E021 */  
/* 0042514C 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00425150 AFBF00BC */  sw    $ra, 0xbc($sp)
/* 00425154 AFBC00B8 */  sw    $gp, 0xb8($sp)
/* 00425158 AFB100B4 */  sw    $s1, 0xb4($sp)
/* 0042515C AFB000B0 */  sw    $s0, 0xb0($sp)
/* 00425160 AFA600C8 */  sw    $a2, 0xc8($sp)
/* 00425164 AFA700CC */  sw    $a3, 0xcc($sp)
/* 00425168 908E0019 */  lbu   $t6, 0x19($a0)
/* 0042516C 24010048 */  li    $at, 72
/* 00425170 00808025 */  move  $s0, $a0
/* 00425174 000E7E00 */  sll   $t7, $t6, 0x18
/* 00425178 000FC642 */  srl   $t8, $t7, 0x19
/* 0042517C 1701003F */  bne   $t8, $at, .L0042527C
/* 00425180 00A08825 */   move  $s1, $a1
/* 00425184 8F998038 */  lw    $t9, %got(RO_10009FAC)($gp)
/* 00425188 24040004 */  li    $a0, 4
/* 0042518C 24050580 */  li    $a1, 1408
/* 00425190 27399FAC */  addiu $t9, %lo(RO_10009FAC) # addiu $t9, $t9, -0x6054
/* 00425194 272B0048 */  addiu $t3, $t9, 0x48
/* 00425198 03A05025 */  move  $t2, $sp
.L0042519C:
/* 0042519C 8B290000 */  lwl   $t1, ($t9)
/* 004251A0 9B290003 */  lwr   $t1, 3($t9)
/* 004251A4 2739000C */  addiu $t9, $t9, 0xc
/* 004251A8 254A000C */  addiu $t2, $t2, 0xc
/* 004251AC A949FFFC */  swl   $t1, -4($t2)
/* 004251B0 B949FFFF */  swr   $t1, -1($t2)
/* 004251B4 8B28FFF8 */  lwl   $t0, -8($t9)
/* 004251B8 9B28FFFB */  lwr   $t0, -5($t9)
/* 004251BC A9480000 */  swl   $t0, ($t2)
/* 004251C0 B9480003 */  swr   $t0, 3($t2)
/* 004251C4 8B29FFFC */  lwl   $t1, -4($t9)
/* 004251C8 9B29FFFF */  lwr   $t1, -1($t9)
/* 004251CC A9490004 */  swl   $t1, 4($t2)
/* 004251D0 172BFFF2 */  bne   $t9, $t3, .L0042519C
/* 004251D4 B9490007 */   swr   $t1, 7($t2)
/* 004251D8 8B290000 */  lwl   $t1, ($t9)
/* 004251DC 9B290003 */  lwr   $t1, 3($t9)
/* 004251E0 8F8C8038 */  lw    $t4, %got(RO_10009F5C)($gp)
/* 004251E4 03A07825 */  move  $t7, $sp
/* 004251E8 A9490008 */  swl   $t1, 8($t2)
/* 004251EC B949000B */  swr   $t1, 0xb($t2)
/* 004251F0 8B280004 */  lwl   $t0, 4($t9)
/* 004251F4 9B280007 */  lwr   $t0, 7($t9)
/* 004251F8 258C9F5C */  addiu $t4, %lo(RO_10009F5C) # addiu $t4, $t4, -0x60a4
/* 004251FC 25980048 */  addiu $t8, $t4, 0x48
/* 00425200 A948000C */  swl   $t0, 0xc($t2)
/* 00425204 B948000F */  swr   $t0, 0xf($t2)
.L00425208:
/* 00425208 898E0000 */  lwl   $t6, ($t4)
/* 0042520C 998E0003 */  lwr   $t6, 3($t4)
/* 00425210 258C000C */  addiu $t4, $t4, 0xc
/* 00425214 25EF000C */  addiu $t7, $t7, 0xc
/* 00425218 A9EE004C */  swl   $t6, 0x4c($t7)
/* 0042521C B9EE004F */  swr   $t6, 0x4f($t7)
/* 00425220 898DFFF8 */  lwl   $t5, -8($t4)
/* 00425224 998DFFFB */  lwr   $t5, -5($t4)
/* 00425228 A9ED0050 */  swl   $t5, 0x50($t7)
/* 0042522C B9ED0053 */  swr   $t5, 0x53($t7)
/* 00425230 898EFFFC */  lwl   $t6, -4($t4)
/* 00425234 998EFFFF */  lwr   $t6, -1($t4)
/* 00425238 A9EE0054 */  swl   $t6, 0x54($t7)
/* 0042523C 1598FFF2 */  bne   $t4, $t8, .L00425208
/* 00425240 B9EE0057 */   swr   $t6, 0x57($t7)
/* 00425244 898E0000 */  lwl   $t6, ($t4)
/* 00425248 998E0003 */  lwr   $t6, 3($t4)
/* 0042524C A9EE0058 */  swl   $t6, 0x58($t7)
/* 00425250 B9EE005B */  swr   $t6, 0x5b($t7)
/* 00425254 898D0004 */  lwl   $t5, 4($t4)
/* 00425258 998D0007 */  lwr   $t5, 7($t4)
/* 0042525C A9ED005C */  swl   $t5, 0x5c($t7)
/* 00425260 B9ED005F */  swr   $t5, 0x5f($t7)
/* 00425264 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00425268 8FA7000C */  lw    $a3, 0xc($sp)
/* 0042526C 8FA60008 */  lw    $a2, 8($sp)
/* 00425270 0320F809 */  jalr  $t9
/* 00425274 00000000 */   nop   
/* 00425278 8FBC00B8 */  lw    $gp, 0xb8($sp)
.L0042527C:
/* 0042527C 920B0018 */  lbu   $t3, 0x18($s0)
/* 00425280 51600007 */  beql  $t3, $zero, .L004252A0
/* 00425284 92390019 */   lbu   $t9, 0x19($s1)
/* 00425288 8F998334 */  lw    $t9, %call16(restore_from_temp)($gp)
/* 0042528C 02002025 */  move  $a0, $s0
/* 00425290 0320F809 */  jalr  $t9
/* 00425294 00000000 */   nop   
/* 00425298 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0042529C 92390019 */  lbu   $t9, 0x19($s1)
.L004252A0:
/* 004252A0 24010048 */  li    $at, 72
/* 004252A4 24040004 */  li    $a0, 4
/* 004252A8 00195600 */  sll   $t2, $t9, 0x18
/* 004252AC 000A4642 */  srl   $t0, $t2, 0x19
/* 004252B0 5501003F */  bnel  $t0, $at, .L004253B0
/* 004252B4 922D0018 */   lbu   $t5, 0x18($s1)
/* 004252B8 8F898038 */  lw    $t1, %got(RO_10009F0C)($gp)
/* 004252BC 24050588 */  li    $a1, 1416
/* 004252C0 03A07825 */  move  $t7, $sp
/* 004252C4 25299F0C */  addiu $t1, %lo(RO_10009F0C) # addiu $t1, $t1, -0x60f4
/* 004252C8 252D0048 */  addiu $t5, $t1, 0x48
.L004252CC:
/* 004252CC 892C0000 */  lwl   $t4, ($t1)
/* 004252D0 992C0003 */  lwr   $t4, 3($t1)
/* 004252D4 2529000C */  addiu $t1, $t1, 0xc
/* 004252D8 25EF000C */  addiu $t7, $t7, 0xc
/* 004252DC A9ECFFFC */  swl   $t4, -4($t7)
/* 004252E0 B9ECFFFF */  swr   $t4, -1($t7)
/* 004252E4 8938FFF8 */  lwl   $t8, -8($t1)
/* 004252E8 9938FFFB */  lwr   $t8, -5($t1)
/* 004252EC A9F80000 */  swl   $t8, ($t7)
/* 004252F0 B9F80003 */  swr   $t8, 3($t7)
/* 004252F4 892CFFFC */  lwl   $t4, -4($t1)
/* 004252F8 992CFFFF */  lwr   $t4, -1($t1)
/* 004252FC A9EC0004 */  swl   $t4, 4($t7)
/* 00425300 152DFFF2 */  bne   $t1, $t5, .L004252CC
/* 00425304 B9EC0007 */   swr   $t4, 7($t7)
/* 00425308 892C0000 */  lwl   $t4, ($t1)
/* 0042530C 992C0003 */  lwr   $t4, 3($t1)
/* 00425310 8F8E8038 */  lw    $t6, %got(RO_10009EBC)($gp)
/* 00425314 03A05025 */  move  $t2, $sp
/* 00425318 A9EC0008 */  swl   $t4, 8($t7)
/* 0042531C B9EC000B */  swr   $t4, 0xb($t7)
/* 00425320 89380004 */  lwl   $t8, 4($t1)
/* 00425324 99380007 */  lwr   $t8, 7($t1)
/* 00425328 25CE9EBC */  addiu $t6, %lo(RO_10009EBC) # addiu $t6, $t6, -0x6144
/* 0042532C 25C80048 */  addiu $t0, $t6, 0x48
/* 00425330 A9F8000C */  swl   $t8, 0xc($t7)
/* 00425334 B9F8000F */  swr   $t8, 0xf($t7)
.L00425338:
/* 00425338 89D90000 */  lwl   $t9, ($t6)
/* 0042533C 99D90003 */  lwr   $t9, 3($t6)
/* 00425340 25CE000C */  addiu $t6, $t6, 0xc
/* 00425344 254A000C */  addiu $t2, $t2, 0xc
/* 00425348 A959004C */  swl   $t9, 0x4c($t2)
/* 0042534C B959004F */  swr   $t9, 0x4f($t2)
/* 00425350 89CBFFF8 */  lwl   $t3, -8($t6)
/* 00425354 99CBFFFB */  lwr   $t3, -5($t6)
/* 00425358 A94B0050 */  swl   $t3, 0x50($t2)
/* 0042535C B94B0053 */  swr   $t3, 0x53($t2)
/* 00425360 89D9FFFC */  lwl   $t9, -4($t6)
/* 00425364 99D9FFFF */  lwr   $t9, -1($t6)
/* 00425368 A9590054 */  swl   $t9, 0x54($t2)
/* 0042536C 15C8FFF2 */  bne   $t6, $t0, .L00425338
/* 00425370 B9590057 */   swr   $t9, 0x57($t2)
/* 00425374 89D90000 */  lwl   $t9, ($t6)
/* 00425378 99D90003 */  lwr   $t9, 3($t6)
/* 0042537C A9590058 */  swl   $t9, 0x58($t2)
/* 00425380 B959005B */  swr   $t9, 0x5b($t2)
/* 00425384 89CB0004 */  lwl   $t3, 4($t6)
/* 00425388 99CB0007 */  lwr   $t3, 7($t6)
/* 0042538C A94B005C */  swl   $t3, 0x5c($t2)
/* 00425390 B94B005F */  swr   $t3, 0x5f($t2)
/* 00425394 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00425398 8FA7000C */  lw    $a3, 0xc($sp)
/* 0042539C 8FA60008 */  lw    $a2, 8($sp)
/* 004253A0 0320F809 */  jalr  $t9
/* 004253A4 00000000 */   nop   
/* 004253A8 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004253AC 922D0018 */  lbu   $t5, 0x18($s1)
.L004253B0:
/* 004253B0 51A00007 */  beql  $t5, $zero, .L004253D0
/* 004253B4 92040019 */   lbu   $a0, 0x19($s0)
/* 004253B8 8F998334 */  lw    $t9, %call16(restore_from_temp)($gp)
/* 004253BC 02202025 */  move  $a0, $s1
/* 004253C0 0320F809 */  jalr  $t9
/* 004253C4 00000000 */   nop   
/* 004253C8 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004253CC 92040019 */  lbu   $a0, 0x19($s0)
.L004253D0:
/* 004253D0 00042600 */  sll   $a0, $a0, 0x18
/* 004253D4 00042642 */  srl   $a0, $a0, 0x19
/* 004253D8 2489FFE0 */  addiu $t1, $a0, -0x20
/* 004253DC 2D2F0020 */  sltiu $t7, $t1, 0x20
/* 004253E0 000FC023 */  negu  $t8, $t7
/* 004253E4 01386004 */  sllv  $t4, $t8, $t1
/* 004253E8 0581000A */  bgez  $t4, .L00425414
/* 004253EC 00000000 */   nop   
/* 004253F0 92080021 */  lbu   $t0, 0x21($s0)
/* 004253F4 8F8A8898 */  lw     $t2, %got(reg_kind_tab)($gp)
/* 004253F8 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 004253FC 310E001F */  andi  $t6, $t0, 0x1f
/* 00425400 01CA5821 */  addu  $t3, $t6, $t2
/* 00425404 0320F809 */  jalr  $t9
/* 00425408 91650000 */   lbu   $a1, ($t3)
/* 0042540C 10000005 */  b     .L00425424
/* 00425410 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L00425414:
/* 00425414 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00425418 0320F809 */  jalr  $t9
/* 0042541C 00000000 */   nop   
/* 00425420 8FBC00B8 */  lw    $gp, 0xb8($sp)
.L00425424:
/* 00425424 92240019 */  lbu   $a0, 0x19($s1)
/* 00425428 00042600 */  sll   $a0, $a0, 0x18
/* 0042542C 00042642 */  srl   $a0, $a0, 0x19
/* 00425430 2499FFE0 */  addiu $t9, $a0, -0x20
/* 00425434 2F2D0020 */  sltiu $t5, $t9, 0x20
/* 00425438 000D7823 */  negu  $t7, $t5
/* 0042543C 032FC004 */  sllv  $t8, $t7, $t9
/* 00425440 0701000A */  bgez  $t8, .L0042546C
/* 00425444 00000000 */   nop   
/* 00425448 92290021 */  lbu   $t1, 0x21($s1)
/* 0042544C 8F888898 */  lw     $t0, %got(reg_kind_tab)($gp)
/* 00425450 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 00425454 312C001F */  andi  $t4, $t1, 0x1f
/* 00425458 01887021 */  addu  $t6, $t4, $t0
/* 0042545C 0320F809 */  jalr  $t9
/* 00425460 91C50000 */   lbu   $a1, ($t6)
/* 00425464 10000005 */  b     .L0042547C
/* 00425468 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L0042546C:
/* 0042546C 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00425470 0320F809 */  jalr  $t9
/* 00425474 00000000 */   nop   
/* 00425478 8FBC00B8 */  lw    $gp, 0xb8($sp)
.L0042547C:
/* 0042547C 920A0019 */  lbu   $t2, 0x19($s0)
/* 00425480 8FAF00C8 */  lw    $t7, 0xc8($sp)
/* 00425484 000A5E00 */  sll   $t3, $t2, 0x18
/* 00425488 000B6E42 */  srl   $t5, $t3, 0x19
/* 0042548C A1ED0000 */  sb    $t5, ($t7)
/* 00425490 92390019 */  lbu   $t9, 0x19($s1)
/* 00425494 8FAC00CC */  lw    $t4, 0xcc($sp)
/* 00425498 0019C600 */  sll   $t8, $t9, 0x18
/* 0042549C 00184E42 */  srl   $t1, $t8, 0x19
/* 004254A0 A1890000 */  sb    $t1, ($t4)
/* 004254A4 8FBF00BC */  lw    $ra, 0xbc($sp)
/* 004254A8 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 004254AC 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 004254B0 03E00008 */  jr    $ra
/* 004254B4 27BD00C0 */   addiu $sp, $sp, 0xc0
    .type binary_regs, @function
    .size binary_regs, .-binary_regs
    .end binary_regs

glabel flt_reg
    .ent flt_reg
    # 00423D28 jump
    # 00424240 trap
    # 004285F0 eval_fp_cond
    # 004287AC eval_fp_min_max
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 00434878 eval_flt_flt_cvt
/* 004254B8 3C1C0FC0 */  .cpload $t9
/* 004254BC 279CA598 */  
/* 004254C0 0399E021 */  
/* 004254C4 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004254C8 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 004254CC AFBF002C */  sw    $ra, 0x2c($sp)
/* 004254D0 AFB30020 */  sw    $s3, 0x20($sp)
/* 004254D4 00809825 */  move  $s3, $a0
/* 004254D8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004254DC AFB40024 */  sw    $s4, 0x24($sp)
/* 004254E0 AFB2001C */  sw    $s2, 0x1c($sp)
/* 004254E4 AFB10018 */  sw    $s1, 0x18($sp)
/* 004254E8 0320F809 */  jalr  $t9
/* 004254EC AFB00014 */   sw    $s0, 0x14($sp)
/* 004254F0 304300FF */  andi  $v1, $v0, 0xff
/* 004254F4 2C610020 */  sltiu $at, $v1, 0x20
/* 004254F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004254FC 14200004 */  bnez  $at, .L00425510
/* 00425500 305400FF */   andi  $s4, $v0, 0xff
/* 00425504 2C61003F */  sltiu $at, $v1, 0x3f
/* 00425508 54200052 */  bnel  $at, $zero, .L00425654
/* 0042550C 92620019 */   lbu   $v0, 0x19($s3)
.L00425510:
/* 00425510 8F998694 */  lw    $t9, %call16(result_type)($gp)
/* 00425514 02602025 */  move  $a0, $s3
/* 00425518 0320F809 */  jalr  $t9
/* 0042551C 00000000 */   nop   
/* 00425520 304E00FF */  andi  $t6, $v0, 0xff
/* 00425524 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00425528 3C01000C */  lui   $at, 0xc
/* 0042552C 34218000 */  ori   $at, $at, 0x8000
/* 00425530 000FC023 */  negu  $t8, $t7
/* 00425534 0301C824 */  and   $t9, $t8, $at
/* 00425538 01D94004 */  sllv  $t0, $t9, $t6
/* 0042553C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425540 0501002A */  bgez  $t0, .L004255EC
/* 00425544 305200FF */   andi  $s2, $v0, 0xff
/* 00425548 8F998534 */  lw    $t9, %call16(usage_count)($gp)
/* 0042554C 02802025 */  move  $a0, $s4
/* 00425550 0320F809 */  jalr  $t9
/* 00425554 00000000 */   nop   
/* 00425558 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042555C 02602025 */  move  $a0, $s3
/* 00425560 24460001 */  addiu $a2, $v0, 1
/* 00425564 8F898898 */  lw     $t1, %got(reg_kind_tab)($gp)
/* 00425568 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 0042556C 02498021 */  addu  $s0, $s2, $t1
/* 00425570 0320F809 */  jalr  $t9
/* 00425574 92050000 */   lbu   $a1, ($s0)
/* 00425578 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042557C 305100FF */  andi  $s1, $v0, 0xff
/* 00425580 304400FF */  andi  $a0, $v0, 0xff
/* 00425584 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00425588 02802825 */  move  $a1, $s4
/* 0042558C 02403025 */  move  $a2, $s2
/* 00425590 0320F809 */  jalr  $t9
/* 00425594 00000000 */   nop   
/* 00425598 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042559C 02802025 */  move  $a0, $s4
/* 004255A0 8F998518 */  lw    $t9, %call16(force_free_reg)($gp)
/* 004255A4 0320F809 */  jalr  $t9
/* 004255A8 00000000 */   nop   
/* 004255AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004255B0 02202025 */  move  $a0, $s1
/* 004255B4 92050000 */  lbu   $a1, ($s0)
/* 004255B8 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 004255BC 0320F809 */  jalr  $t9
/* 004255C0 00000000 */   nop   
/* 004255C4 92620019 */  lbu   $v0, 0x19($s3)
/* 004255C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004255CC 00025600 */  sll   $t2, $v0, 0x18
/* 004255D0 000A5E42 */  srl   $t3, $t2, 0x19
/* 004255D4 022B6026 */  xor   $t4, $s1, $t3
/* 004255D8 000C6E40 */  sll   $t5, $t4, 0x19
/* 004255DC 000D7E02 */  srl   $t7, $t5, 0x18
/* 004255E0 01E2C026 */  xor   $t8, $t7, $v0
/* 004255E4 1000001A */  b     .L00425650
/* 004255E8 A2780019 */   sb    $t8, 0x19($s3)
.L004255EC:
/* 004255EC 8F998898 */  lw     $t9, %got(reg_kind_tab)($gp)
/* 004255F0 02602025 */  move  $a0, $s3
/* 004255F4 24060001 */  li    $a2, 1
/* 004255F8 02598021 */  addu  $s0, $s2, $t9
/* 004255FC 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 00425600 92050000 */  lbu   $a1, ($s0)
/* 00425604 0320F809 */  jalr  $t9
/* 00425608 00000000 */   nop   
/* 0042560C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425610 305100FF */  andi  $s1, $v0, 0xff
/* 00425614 304400FF */  andi  $a0, $v0, 0xff
/* 00425618 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 0042561C 02802825 */  move  $a1, $s4
/* 00425620 02403025 */  move  $a2, $s2
/* 00425624 0320F809 */  jalr  $t9
/* 00425628 00000000 */   nop   
/* 0042562C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425630 02202025 */  move  $a0, $s1
/* 00425634 92050000 */  lbu   $a1, ($s0)
/* 00425638 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 0042563C 0320F809 */  jalr  $t9
/* 00425640 00000000 */   nop   
/* 00425644 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425648 10000004 */  b     .L0042565C
/* 0042564C 02201025 */   move  $v0, $s1
.L00425650:
/* 00425650 92620019 */  lbu   $v0, 0x19($s3)
.L00425654:
/* 00425654 00021600 */  sll   $v0, $v0, 0x18
/* 00425658 00021642 */  srl   $v0, $v0, 0x19
.L0042565C:
/* 0042565C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00425660 8FB00014 */  lw    $s0, 0x14($sp)
/* 00425664 8FB10018 */  lw    $s1, 0x18($sp)
/* 00425668 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042566C 8FB30020 */  lw    $s3, 0x20($sp)
/* 00425670 8FB40024 */  lw    $s4, 0x24($sp)
/* 00425674 03E00008 */  jr    $ra
/* 00425678 27BD0030 */   addiu $sp, $sp, 0x30
    .type flt_reg, @function
    .size flt_reg, .-flt_reg
    .end flt_reg

    .type func_0042567C, @function
func_0042567C:
    # 00425834 binary_flt_regs
/* 0042567C 3C1C0FC0 */  .cpload $t9
/* 00425680 279CA3D4 */  
/* 00425684 0399E021 */  
/* 00425688 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0042568C AFB30020 */  sw    $s3, 0x20($sp)
/* 00425690 30B300FF */  andi  $s3, $a1, 0xff
/* 00425694 AFB40024 */  sw    $s4, 0x24($sp)
/* 00425698 2E610020 */  sltiu $at, $s3, 0x20
/* 0042569C 0080A025 */  move  $s4, $a0
/* 004256A0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004256A4 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004256A8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 004256AC AFB10018 */  sw    $s1, 0x18($sp)
/* 004256B0 AFB00014 */  sw    $s0, 0x14($sp)
/* 004256B4 14200004 */  bnez  $at, .L004256C8
/* 004256B8 AFA50034 */   sw    $a1, 0x34($sp)
/* 004256BC 2E61003F */  sltiu $at, $s3, 0x3f
/* 004256C0 54200052 */  bnel  $at, $zero, .L0042580C
/* 004256C4 92820019 */   lbu   $v0, 0x19($s4)
.L004256C8:
/* 004256C8 8F998694 */  lw    $t9, %call16(result_type)($gp)
/* 004256CC 02802025 */  move  $a0, $s4
/* 004256D0 0320F809 */  jalr  $t9
/* 004256D4 00000000 */   nop   
/* 004256D8 304E00FF */  andi  $t6, $v0, 0xff
/* 004256DC 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 004256E0 3C01000C */  lui   $at, 0xc
/* 004256E4 34218000 */  ori   $at, $at, 0x8000
/* 004256E8 000FC023 */  negu  $t8, $t7
/* 004256EC 0301C824 */  and   $t9, $t8, $at
/* 004256F0 01D94004 */  sllv  $t0, $t9, $t6
/* 004256F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004256F8 0501002A */  bgez  $t0, .L004257A4
/* 004256FC 305200FF */   andi  $s2, $v0, 0xff
/* 00425700 8F998534 */  lw    $t9, %call16(usage_count)($gp)
/* 00425704 02602025 */  move  $a0, $s3
/* 00425708 0320F809 */  jalr  $t9
/* 0042570C 00000000 */   nop   
/* 00425710 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425714 02802025 */  move  $a0, $s4
/* 00425718 24460001 */  addiu $a2, $v0, 1
/* 0042571C 8F898898 */  lw     $t1, %got(reg_kind_tab)($gp)
/* 00425720 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 00425724 02498021 */  addu  $s0, $s2, $t1
/* 00425728 0320F809 */  jalr  $t9
/* 0042572C 92050000 */   lbu   $a1, ($s0)
/* 00425730 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425734 305100FF */  andi  $s1, $v0, 0xff
/* 00425738 304400FF */  andi  $a0, $v0, 0xff
/* 0042573C 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00425740 02602825 */  move  $a1, $s3
/* 00425744 02403025 */  move  $a2, $s2
/* 00425748 0320F809 */  jalr  $t9
/* 0042574C 00000000 */   nop   
/* 00425750 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425754 02602025 */  move  $a0, $s3
/* 00425758 8F998518 */  lw    $t9, %call16(force_free_reg)($gp)
/* 0042575C 0320F809 */  jalr  $t9
/* 00425760 00000000 */   nop   
/* 00425764 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425768 02202025 */  move  $a0, $s1
/* 0042576C 92050000 */  lbu   $a1, ($s0)
/* 00425770 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 00425774 0320F809 */  jalr  $t9
/* 00425778 00000000 */   nop   
/* 0042577C 92820019 */  lbu   $v0, 0x19($s4)
/* 00425780 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425784 00025600 */  sll   $t2, $v0, 0x18
/* 00425788 000A5E42 */  srl   $t3, $t2, 0x19
/* 0042578C 022B6026 */  xor   $t4, $s1, $t3
/* 00425790 000C6E40 */  sll   $t5, $t4, 0x19
/* 00425794 000D7E02 */  srl   $t7, $t5, 0x18
/* 00425798 01E2C026 */  xor   $t8, $t7, $v0
/* 0042579C 1000001A */  b     .L00425808
/* 004257A0 A2980019 */   sb    $t8, 0x19($s4)
.L004257A4:
/* 004257A4 8F998898 */  lw     $t9, %got(reg_kind_tab)($gp)
/* 004257A8 02802025 */  move  $a0, $s4
/* 004257AC 24060001 */  li    $a2, 1
/* 004257B0 02598021 */  addu  $s0, $s2, $t9
/* 004257B4 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 004257B8 92050000 */  lbu   $a1, ($s0)
/* 004257BC 0320F809 */  jalr  $t9
/* 004257C0 00000000 */   nop   
/* 004257C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004257C8 305100FF */  andi  $s1, $v0, 0xff
/* 004257CC 304400FF */  andi  $a0, $v0, 0xff
/* 004257D0 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 004257D4 02602825 */  move  $a1, $s3
/* 004257D8 02403025 */  move  $a2, $s2
/* 004257DC 0320F809 */  jalr  $t9
/* 004257E0 00000000 */   nop   
/* 004257E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004257E8 02202025 */  move  $a0, $s1
/* 004257EC 92050000 */  lbu   $a1, ($s0)
/* 004257F0 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 004257F4 0320F809 */  jalr  $t9
/* 004257F8 00000000 */   nop   
/* 004257FC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00425800 10000004 */  b     .L00425814
/* 00425804 02201025 */   move  $v0, $s1
.L00425808:
/* 00425808 92820019 */  lbu   $v0, 0x19($s4)
.L0042580C:
/* 0042580C 00021600 */  sll   $v0, $v0, 0x18
/* 00425810 00021642 */  srl   $v0, $v0, 0x19
.L00425814:
/* 00425814 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00425818 8FB00014 */  lw    $s0, 0x14($sp)
/* 0042581C 8FB10018 */  lw    $s1, 0x18($sp)
/* 00425820 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00425824 8FB30020 */  lw    $s3, 0x20($sp)
/* 00425828 8FB40024 */  lw    $s4, 0x24($sp)
/* 0042582C 03E00008 */  jr    $ra
/* 00425830 27BD0030 */   addiu $sp, $sp, 0x30

glabel binary_flt_regs
    .ent binary_flt_regs
    # 00428A9C eval2
/* 00425834 3C1C0FC0 */  .cpload $t9
/* 00425838 279CA21C */  
/* 0042583C 0399E021 */  
/* 00425840 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00425844 8F99833C */  lw    $t9, %call16(binary_regs)($gp)
/* 00425848 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042584C AFA60030 */  sw    $a2, 0x30($sp)
/* 00425850 AFA70034 */  sw    $a3, 0x34($sp)
/* 00425854 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00425858 AFA40028 */  sw    $a0, 0x28($sp)
/* 0042585C AFA5002C */  sw    $a1, 0x2c($sp)
/* 00425860 27A70026 */  addiu $a3, $sp, 0x26
/* 00425864 0320F809 */  jalr  $t9
/* 00425868 27A60027 */   addiu $a2, $sp, 0x27
/* 0042586C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425870 8FA40028 */  lw    $a0, 0x28($sp)
/* 00425874 93A50027 */  lbu   $a1, 0x27($sp)
/* 00425878 8F99801C */  lw    $t9, %got(func_0042567C)($gp)
/* 0042587C 27A20028 */  addiu $v0, $sp, 0x28
/* 00425880 2739567C */  addiu $t9, %lo(func_0042567C) # addiu $t9, $t9, 0x567c
/* 00425884 0320F809 */  jalr  $t9
/* 00425888 00000000 */   nop   
/* 0042588C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00425890 8FAE0030 */  lw    $t6, 0x30($sp)
/* 00425894 8F99801C */  lw    $t9, %got(func_0042567C)($gp)
/* 00425898 A1C20000 */  sb    $v0, ($t6)
/* 0042589C 93A50026 */  lbu   $a1, 0x26($sp)
/* 004258A0 2739567C */  addiu $t9, %lo(func_0042567C) # addiu $t9, $t9, 0x567c
/* 004258A4 8FA4002C */  lw    $a0, 0x2c($sp)
/* 004258A8 0320F809 */  jalr  $t9
/* 004258AC 27A20028 */   addiu $v0, $sp, 0x28
/* 004258B0 8FAF0034 */  lw    $t7, 0x34($sp)
/* 004258B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004258B8 A1E20000 */  sb    $v0, ($t7)
/* 004258BC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004258C0 27BD0028 */  addiu $sp, $sp, 0x28
/* 004258C4 03E00008 */  jr    $ra
/* 004258C8 00000000 */   nop   
    .type binary_flt_regs, @function
    .size binary_flt_regs, .-binary_flt_regs
    .end binary_flt_regs

glabel get_dest
    .ent get_dest
    # 004285F0 eval_fp_cond
    # 00428A9C eval2
    # 0042BDAC eval
    # 00433070 load_fp_literal
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 004340D4 func_004340D4
    # 00434500 func_00434500
    # 00434618 func_00434618
    # 00434878 eval_flt_flt_cvt
/* 004258CC 3C1C0FC0 */  .cpload $t9
/* 004258D0 279CA184 */  
/* 004258D4 0399E021 */  
/* 004258D8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004258DC 8F998694 */  lw    $t9, %call16(result_type)($gp)
/* 004258E0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004258E4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004258E8 AFB00018 */  sw    $s0, 0x18($sp)
/* 004258EC 00808025 */  move  $s0, $a0
/* 004258F0 30B100FF */  andi  $s1, $a1, 0xff
/* 004258F4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004258F8 0320F809 */  jalr  $t9
/* 004258FC AFA50034 */   sw    $a1, 0x34($sp)
/* 00425900 24010048 */  li    $at, 72
/* 00425904 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00425908 1621001B */  bne   $s1, $at, .L00425978
/* 0042590C 304800FF */   andi  $t0, $v0, 0xff
/* 00425910 304E00FF */  andi  $t6, $v0, 0xff
/* 00425914 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00425918 3C01000C */  lui   $at, 0xc
/* 0042591C 34218000 */  ori   $at, $at, 0x8000
/* 00425920 000FC023 */  negu  $t8, $t7
/* 00425924 0301C824 */  and   $t9, $t8, $at
/* 00425928 01D94804 */  sllv  $t1, $t9, $t6
/* 0042592C 05200009 */  bltz  $t1, .L00425954
/* 00425930 02002025 */   move  $a0, $s0
/* 00425934 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00425938 02002025 */  move  $a0, $s0
/* 0042593C 96050014 */  lhu   $a1, 0x14($s0)
/* 00425940 0320F809 */  jalr  $t9
/* 00425944 00000000 */   nop   
/* 00425948 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042594C 10000046 */  b     .L00425A68
/* 00425950 305100FF */   andi  $s1, $v0, 0xff
.L00425954:
/* 00425954 8F8A8898 */  lw     $t2, %got(reg_kind_tab)($gp)
/* 00425958 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 0042595C 96060014 */  lhu   $a2, 0x14($s0)
/* 00425960 010A5821 */  addu  $t3, $t0, $t2
/* 00425964 0320F809 */  jalr  $t9
/* 00425968 91650000 */   lbu   $a1, ($t3)
/* 0042596C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00425970 1000003D */  b     .L00425A68
/* 00425974 305100FF */   andi  $s1, $v0, 0xff
.L00425978:
/* 00425978 262CFFE0 */  addiu $t4, $s1, -0x20
/* 0042597C 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 00425980 000D7823 */  negu  $t7, $t5
/* 00425984 018FC004 */  sllv  $t8, $t7, $t4
/* 00425988 0701000C */  bgez  $t8, .L004259BC
/* 0042598C 00000000 */   nop   
/* 00425990 8F998898 */  lw     $t9, %got(reg_kind_tab)($gp)
/* 00425994 02202025 */  move  $a0, $s1
/* 00425998 02002825 */  move  $a1, $s0
/* 0042599C 01197021 */  addu  $t6, $t0, $t9
/* 004259A0 8F9984E0 */  lw    $t9, %call16(get_fp_reg)($gp)
/* 004259A4 91C60000 */  lbu   $a2, ($t6)
/* 004259A8 24070001 */  li    $a3, 1
/* 004259AC 0320F809 */  jalr  $t9
/* 004259B0 00000000 */   nop   
/* 004259B4 1000002C */  b     .L00425A68
/* 004259B8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004259BC:
/* 004259BC 8F8989D8 */  lw     $t1, %got(opcode_arch)($gp)
/* 004259C0 91290000 */  lbu   $t1, ($t1)
/* 004259C4 15200022 */  bnez  $t1, .L00425A50
/* 004259C8 00000000 */   nop   
/* 004259CC 92030021 */  lbu   $v1, 0x21($s0)
/* 004259D0 3C010501 */  lui   $at, 0x501
/* 004259D4 304C00FF */  andi  $t4, $v0, 0xff
/* 004259D8 3067001F */  andi  $a3, $v1, 0x1f
/* 004259DC 2CEA0020 */  sltiu $t2, $a3, 0x20
/* 004259E0 000A5823 */  negu  $t3, $t2
/* 004259E4 01616824 */  and   $t5, $t3, $at
/* 004259E8 00ED7804 */  sllv  $t7, $t5, $a3
/* 004259EC 05E10018 */  bgez  $t7, .L00425A50
/* 004259F0 00000000 */   nop   
/* 004259F4 11870016 */  beq   $t4, $a3, .L00425A50
/* 004259F8 0003C6C0 */   sll   $t8, $v1, 0x1b
/* 004259FC 0018CEC2 */  srl   $t9, $t8, 0x1b
/* 00425A00 01197026 */  xor   $t6, $t0, $t9
/* 00425A04 8F9984D8 */  lw    $t9, %call16(get_reg)($gp)
/* 00425A08 31C9001F */  andi  $t1, $t6, 0x1f
/* 00425A0C 01235026 */  xor   $t2, $t1, $v1
/* 00425A10 A3A7002D */  sb    $a3, 0x2d($sp)
/* 00425A14 A20A0021 */  sb    $t2, 0x21($s0)
/* 00425A18 02202025 */  move  $a0, $s1
/* 00425A1C 02002825 */  move  $a1, $s0
/* 00425A20 0320F809 */  jalr  $t9
/* 00425A24 24060001 */   li    $a2, 1
/* 00425A28 92030021 */  lbu   $v1, 0x21($s0)
/* 00425A2C 93AB002D */  lbu   $t3, 0x2d($sp)
/* 00425A30 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00425A34 00036EC0 */  sll   $t5, $v1, 0x1b
/* 00425A38 000D7EC2 */  srl   $t7, $t5, 0x1b
/* 00425A3C 016F6026 */  xor   $t4, $t3, $t7
/* 00425A40 3198001F */  andi  $t8, $t4, 0x1f
/* 00425A44 0303C826 */  xor   $t9, $t8, $v1
/* 00425A48 10000007 */  b     .L00425A68
/* 00425A4C A2190021 */   sb    $t9, 0x21($s0)
.L00425A50:
/* 00425A50 8F9984D8 */  lw    $t9, %call16(get_reg)($gp)
/* 00425A54 02202025 */  move  $a0, $s1
/* 00425A58 02002825 */  move  $a1, $s0
/* 00425A5C 0320F809 */  jalr  $t9
/* 00425A60 24060001 */   li    $a2, 1
/* 00425A64 8FBC0020 */  lw    $gp, 0x20($sp)
.L00425A68:
/* 00425A68 92030019 */  lbu   $v1, 0x19($s0)
/* 00425A6C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00425A70 02201025 */  move  $v0, $s1
/* 00425A74 00037600 */  sll   $t6, $v1, 0x18
/* 00425A78 000E4E42 */  srl   $t1, $t6, 0x19
/* 00425A7C 02295026 */  xor   $t2, $s1, $t1
/* 00425A80 000A6E40 */  sll   $t5, $t2, 0x19
/* 00425A84 000D5E02 */  srl   $t3, $t5, 0x18
/* 00425A88 01637826 */  xor   $t7, $t3, $v1
/* 00425A8C A20F0019 */  sb    $t7, 0x19($s0)
/* 00425A90 8FB00018 */  lw    $s0, 0x18($sp)
/* 00425A94 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00425A98 03E00008 */  jr    $ra
/* 00425A9C 27BD0030 */   addiu $sp, $sp, 0x30
    .type get_dest, @function
    .size get_dest, .-get_dest
    .end get_dest

glabel move_to_dest
    .ent move_to_dest
    # 004254B8 flt_reg
    # 0042567C func_0042567C
    # 00426B44 func_00426B44
    # 00426C54 func_00426C54
    # 00427538 func_00427538
    # 00427BFC unaligned_loadstore_for_fp_word
    # 00427CE4 unaligned_loadstore_for_two_fp_w
    # 004287AC eval_fp_min_max
    # 0042A9A8 load_parm_vreg
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 004340D4 func_004340D4
    # 00434374 func_00434374
    # 00434430 func_00434430
    # 00434500 func_00434500
    # 00434618 func_00434618
    # 00434878 eval_flt_flt_cvt
/* 00425AA0 3C1C0FC0 */  .cpload $t9
/* 00425AA4 279C9FB0 */  
/* 00425AA8 0399E021 */  
/* 00425AAC 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 00425AB0 AFA500BC */  sw    $a1, 0xbc($sp)
/* 00425AB4 93AE00BF */  lbu   $t6, 0xbf($sp)
/* 00425AB8 308700FF */  andi  $a3, $a0, 0xff
/* 00425ABC AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00425AC0 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00425AC4 AFA400B8 */  sw    $a0, 0xb8($sp)
/* 00425AC8 10EE00A7 */  beq   $a3, $t6, .L00425D68
/* 00425ACC AFA600C0 */   sw    $a2, 0xc0($sp)
/* 00425AD0 93AF00BF */  lbu   $t7, 0xbf($sp)
/* 00425AD4 24E9FFE0 */  addiu $t1, $a3, -0x20
/* 00425AD8 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 00425ADC 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00425AE0 0018C823 */  negu  $t9, $t8
/* 00425AE4 01F94004 */  sllv  $t0, $t9, $t7
/* 00425AE8 0501001A */  bgez  $t0, .L00425B54
/* 00425AEC 000A5823 */   negu  $t3, $t2
/* 00425AF0 012B6004 */  sllv  $t4, $t3, $t1
/* 00425AF4 05810017 */  bgez  $t4, .L00425B54
/* 00425AF8 2401000C */   li    $at, 12
/* 00425AFC 14C10002 */  bne   $a2, $at, .L00425B08
/* 00425B00 24040065 */   li    $a0, 101
/* 00425B04 240400E6 */  li    $a0, 230
.L00425B08:
/* 00425B08 8F8D89D8 */  lw     $t5, %got(opcode_arch)($gp)
/* 00425B0C 24010001 */  li    $at, 1
/* 00425B10 2CCE0020 */  sltiu $t6, $a2, 0x20
/* 00425B14 91AD0000 */  lbu   $t5, ($t5)
/* 00425B18 000EC023 */  negu  $t8, $t6
/* 00425B1C 15A10006 */  bne   $t5, $at, .L00425B38
/* 00425B20 3C010501 */   lui   $at, 0x501
/* 00425B24 0301C824 */  and   $t9, $t8, $at
/* 00425B28 00D97804 */  sllv  $t7, $t9, $a2
/* 00425B2C 05E10002 */  bgez  $t7, .L00425B38
/* 00425B30 00000000 */   nop   
/* 00425B34 24040146 */  li    $a0, 326
.L00425B38:
/* 00425B38 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00425B3C 93A500BF */  lbu   $a1, 0xbf($sp)
/* 00425B40 00E03025 */  move  $a2, $a3
/* 00425B44 0320F809 */  jalr  $t9
/* 00425B48 00000000 */   nop   
/* 00425B4C 10000086 */  b     .L00425D68
/* 00425B50 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00425B54:
/* 00425B54 93A200BF */  lbu   $v0, 0xbf($sp)
/* 00425B58 2CE90020 */  sltiu $t1, $a3, 0x20
/* 00425B5C 00096023 */  negu  $t4, $t1
/* 00425B60 2442FFE0 */  addiu $v0, $v0, -0x20
/* 00425B64 2C480020 */  sltiu $t0, $v0, 0x20
/* 00425B68 00085023 */  negu  $t2, $t0
/* 00425B6C 004A5804 */  sllv  $t3, $t2, $v0
/* 00425B70 05610019 */  bgez  $t3, .L00425BD8
/* 00425B74 00EC6804 */   sllv  $t5, $t4, $a3
/* 00425B78 05A10017 */  bgez  $t5, .L00425BD8
/* 00425B7C 2401000C */   li    $at, 12
/* 00425B80 14C10002 */  bne   $a2, $at, .L00425B8C
/* 00425B84 24040061 */   li    $a0, 97
/* 00425B88 240400E7 */  li    $a0, 231
.L00425B8C:
/* 00425B8C 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 00425B90 24010001 */  li    $at, 1
/* 00425B94 2CD80020 */  sltiu $t8, $a2, 0x20
/* 00425B98 91CE0000 */  lbu   $t6, ($t6)
/* 00425B9C 0018C823 */  negu  $t9, $t8
/* 00425BA0 15C10006 */  bne   $t6, $at, .L00425BBC
/* 00425BA4 3C010501 */   lui   $at, 0x501
/* 00425BA8 03217824 */  and   $t7, $t9, $at
/* 00425BAC 00CF4004 */  sllv  $t0, $t7, $a2
/* 00425BB0 05010002 */  bgez  $t0, .L00425BBC
/* 00425BB4 00000000 */   nop   
/* 00425BB8 24040147 */  li    $a0, 327
.L00425BBC:
/* 00425BBC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00425BC0 00E02825 */  move  $a1, $a3
/* 00425BC4 93A600BF */  lbu   $a2, 0xbf($sp)
/* 00425BC8 0320F809 */  jalr  $t9
/* 00425BCC 00000000 */   nop   
/* 00425BD0 10000065 */  b     .L00425D68
/* 00425BD4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00425BD8:
/* 00425BD8 2C4A0020 */  sltiu $t2, $v0, 0x20
/* 00425BDC 000A5823 */  negu  $t3, $t2
/* 00425BE0 004B4804 */  sllv  $t1, $t3, $v0
/* 00425BE4 05210011 */  bgez  $t1, .L00425C2C
/* 00425BE8 24ECFFE0 */   addiu $t4, $a3, -0x20
/* 00425BEC 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 00425BF0 000D7023 */  negu  $t6, $t5
/* 00425BF4 018EC004 */  sllv  $t8, $t6, $t4
/* 00425BF8 0701000C */  bgez  $t8, .L00425C2C
/* 00425BFC 2401000D */   li    $at, 13
/* 00425C00 14C10003 */  bne   $a2, $at, .L00425C10
/* 00425C04 2404008C */   li    $a0, 140
/* 00425C08 10000001 */  b     .L00425C10
/* 00425C0C 2404008B */   li    $a0, 139
.L00425C10:
/* 00425C10 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00425C14 00E02825 */  move  $a1, $a3
/* 00425C18 93A600BF */  lbu   $a2, 0xbf($sp)
/* 00425C1C 0320F809 */  jalr  $t9
/* 00425C20 00000000 */   nop   
/* 00425C24 10000050 */  b     .L00425D68
/* 00425C28 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00425C2C:
/* 00425C2C 93B900BF */  lbu   $t9, 0xbf($sp)
/* 00425C30 2CEB0020 */  sltiu $t3, $a3, 0x20
/* 00425C34 000B4823 */  negu  $t1, $t3
/* 00425C38 2F2F0020 */  sltiu $t7, $t9, 0x20
/* 00425C3C 000F4023 */  negu  $t0, $t7
/* 00425C40 03285004 */  sllv  $t2, $t0, $t9
/* 00425C44 0541000A */  bgez  $t2, .L00425C70
/* 00425C48 00E96804 */   sllv  $t5, $t1, $a3
/* 00425C4C 05A10008 */  bgez  $t5, .L00425C70
/* 00425C50 03203025 */   move  $a2, $t9
/* 00425C54 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00425C58 24040031 */  li    $a0, 49
/* 00425C5C 00E02825 */  move  $a1, $a3
/* 00425C60 0320F809 */  jalr  $t9
/* 00425C64 00000000 */   nop   
/* 00425C68 1000003F */  b     .L00425D68
/* 00425C6C 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00425C70:
/* 00425C70 8F8E8038 */  lw    $t6, %got(RO_1000A04C)($gp)
/* 00425C74 24040004 */  li    $a0, 4
/* 00425C78 2405063A */  li    $a1, 1594
/* 00425C7C 25CEA04C */  addiu $t6, %lo(RO_1000A04C) # addiu $t6, $t6, -0x5fb4
/* 00425C80 25C80048 */  addiu $t0, $t6, 0x48
/* 00425C84 03A07825 */  move  $t7, $sp
.L00425C88:
/* 00425C88 89D80000 */  lwl   $t8, ($t6)
/* 00425C8C 99D80003 */  lwr   $t8, 3($t6)
/* 00425C90 25CE000C */  addiu $t6, $t6, 0xc
/* 00425C94 25EF000C */  addiu $t7, $t7, 0xc
/* 00425C98 A9F8FFFC */  swl   $t8, -4($t7)
/* 00425C9C B9F8FFFF */  swr   $t8, -1($t7)
/* 00425CA0 89CCFFF8 */  lwl   $t4, -8($t6)
/* 00425CA4 99CCFFFB */  lwr   $t4, -5($t6)
/* 00425CA8 A9EC0000 */  swl   $t4, ($t7)
/* 00425CAC B9EC0003 */  swr   $t4, 3($t7)
/* 00425CB0 89D8FFFC */  lwl   $t8, -4($t6)
/* 00425CB4 99D8FFFF */  lwr   $t8, -1($t6)
/* 00425CB8 A9F80004 */  swl   $t8, 4($t7)
/* 00425CBC 15C8FFF2 */  bne   $t6, $t0, .L00425C88
/* 00425CC0 B9F80007 */   swr   $t8, 7($t7)
/* 00425CC4 89D80000 */  lwl   $t8, ($t6)
/* 00425CC8 99D80003 */  lwr   $t8, 3($t6)
/* 00425CCC 8F8A8038 */  lw    $t2, %got(RO_10009FFC)($gp)
/* 00425CD0 03A06825 */  move  $t5, $sp
/* 00425CD4 A9F80008 */  swl   $t8, 8($t7)
/* 00425CD8 B9F8000B */  swr   $t8, 0xb($t7)
/* 00425CDC 89CC0004 */  lwl   $t4, 4($t6)
/* 00425CE0 99CC0007 */  lwr   $t4, 7($t6)
/* 00425CE4 254A9FFC */  addiu $t2, %lo(RO_10009FFC) # addiu $t2, $t2, -0x6004
/* 00425CE8 25590048 */  addiu $t9, $t2, 0x48
/* 00425CEC A9EC000C */  swl   $t4, 0xc($t7)
/* 00425CF0 B9EC000F */  swr   $t4, 0xf($t7)
.L00425CF4:
/* 00425CF4 89490000 */  lwl   $t1, ($t2)
/* 00425CF8 99490003 */  lwr   $t1, 3($t2)
/* 00425CFC 254A000C */  addiu $t2, $t2, 0xc
/* 00425D00 25AD000C */  addiu $t5, $t5, 0xc
/* 00425D04 A9A9004C */  swl   $t1, 0x4c($t5)
/* 00425D08 B9A9004F */  swr   $t1, 0x4f($t5)
/* 00425D0C 894BFFF8 */  lwl   $t3, -8($t2)
/* 00425D10 994BFFFB */  lwr   $t3, -5($t2)
/* 00425D14 A9AB0050 */  swl   $t3, 0x50($t5)
/* 00425D18 B9AB0053 */  swr   $t3, 0x53($t5)
/* 00425D1C 8949FFFC */  lwl   $t1, -4($t2)
/* 00425D20 9949FFFF */  lwr   $t1, -1($t2)
/* 00425D24 A9A90054 */  swl   $t1, 0x54($t5)
/* 00425D28 1559FFF2 */  bne   $t2, $t9, .L00425CF4
/* 00425D2C B9A90057 */   swr   $t1, 0x57($t5)
/* 00425D30 89490000 */  lwl   $t1, ($t2)
/* 00425D34 99490003 */  lwr   $t1, 3($t2)
/* 00425D38 A9A90058 */  swl   $t1, 0x58($t5)
/* 00425D3C B9A9005B */  swr   $t1, 0x5b($t5)
/* 00425D40 894B0004 */  lwl   $t3, 4($t2)
/* 00425D44 994B0007 */  lwr   $t3, 7($t2)
/* 00425D48 A9AB005C */  swl   $t3, 0x5c($t5)
/* 00425D4C B9AB005F */  swr   $t3, 0x5f($t5)
/* 00425D50 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00425D54 8FA7000C */  lw    $a3, 0xc($sp)
/* 00425D58 8FA60008 */  lw    $a2, 8($sp)
/* 00425D5C 0320F809 */  jalr  $t9
/* 00425D60 00000000 */   nop   
/* 00425D64 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00425D68:
/* 00425D68 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00425D6C 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 00425D70 03E00008 */  jr    $ra
/* 00425D74 00000000 */   nop   
    .type move_to_dest, @function
    .size move_to_dest, .-move_to_dest
    .end move_to_dest

glabel lsopc
    .ent lsopc
    # 0042A9A8 load_parm_vreg
    # 0042BDAC eval
/* 00425D78 3C1C0FC0 */  .cpload $t9
/* 00425D7C 279C9CD8 */  
/* 00425D80 0399E021 */  
/* 00425D84 24CEFFE0 */  addiu $t6, $a2, -0x20
/* 00425D88 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00425D8C 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00425D90 000FC023 */  negu  $t8, $t7
/* 00425D94 AFB000AC */  sw    $s0, 0xac($sp)
/* 00425D98 01D8C804 */  sllv  $t9, $t8, $t6
/* 00425D9C 00808025 */  move  $s0, $a0
/* 00425DA0 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00425DA4 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00425DA8 07210054 */  bgez  $t9, .L00425EFC
/* 00425DAC AFA600C8 */   sw    $a2, 0xc8($sp)
/* 00425DB0 8CA20028 */  lw    $v0, 0x28($a1)
/* 00425DB4 28410005 */  slti  $at, $v0, 5
/* 00425DB8 50200008 */  beql  $at, $zero, .L00425DDC
/* 00425DBC 28410009 */   slti  $at, $v0, 9
/* 00425DC0 90A80021 */  lbu   $t0, 0x21($a1)
/* 00425DC4 240A000D */  li    $t2, 13
/* 00425DC8 3109001F */  andi  $t1, $t0, 0x1f
/* 00425DCC 012A02B6 */  tne   $t1, $t2, 0xa
/* 00425DD0 10000249 */  b     .L004266F8
/* 00425DD4 9603000E */   lhu   $v1, 0xe($s0)
/* 00425DD8 28410009 */  slti  $at, $v0, 9
.L00425DDC:
/* 00425DDC 10200007 */  beqz  $at, .L00425DFC
/* 00425DE0 00000000 */   nop   
/* 00425DE4 90AB0021 */  lbu   $t3, 0x21($a1)
/* 00425DE8 240D000C */  li    $t5, 12
/* 00425DEC 316C001F */  andi  $t4, $t3, 0x1f
/* 00425DF0 018D02B6 */  tne   $t4, $t5, 0xa
/* 00425DF4 10000240 */  b     .L004266F8
/* 00425DF8 96030010 */   lhu   $v1, 0x10($s0)
.L00425DFC:
/* 00425DFC 8F8F8038 */  lw    $t7, %got(RO_1000A4AC)($gp)
/* 00425E00 24040004 */  li    $a0, 4
/* 00425E04 2405064E */  li    $a1, 1614
/* 00425E08 25EFA4AC */  addiu $t7, %lo(RO_1000A4AC) # addiu $t7, $t7, -0x5b54
/* 00425E0C 25E80048 */  addiu $t0, $t7, 0x48
/* 00425E10 03A0C825 */  move  $t9, $sp
.L00425E14:
/* 00425E14 89EE0000 */  lwl   $t6, ($t7)
/* 00425E18 99EE0003 */  lwr   $t6, 3($t7)
/* 00425E1C 25EF000C */  addiu $t7, $t7, 0xc
/* 00425E20 2739000C */  addiu $t9, $t9, 0xc
/* 00425E24 AB2EFFFC */  swl   $t6, -4($t9)
/* 00425E28 BB2EFFFF */  swr   $t6, -1($t9)
/* 00425E2C 89F8FFF8 */  lwl   $t8, -8($t7)
/* 00425E30 99F8FFFB */  lwr   $t8, -5($t7)
/* 00425E34 AB380000 */  swl   $t8, ($t9)
/* 00425E38 BB380003 */  swr   $t8, 3($t9)
/* 00425E3C 89EEFFFC */  lwl   $t6, -4($t7)
/* 00425E40 99EEFFFF */  lwr   $t6, -1($t7)
/* 00425E44 AB2E0004 */  swl   $t6, 4($t9)
/* 00425E48 15E8FFF2 */  bne   $t7, $t0, .L00425E14
/* 00425E4C BB2E0007 */   swr   $t6, 7($t9)
/* 00425E50 89EE0000 */  lwl   $t6, ($t7)
/* 00425E54 99EE0003 */  lwr   $t6, 3($t7)
/* 00425E58 8F898038 */  lw    $t1, %got(RO_1000A45C)($gp)
/* 00425E5C 03A06025 */  move  $t4, $sp
/* 00425E60 AB2E0008 */  swl   $t6, 8($t9)
/* 00425E64 BB2E000B */  swr   $t6, 0xb($t9)
/* 00425E68 89F80004 */  lwl   $t8, 4($t7)
/* 00425E6C 99F80007 */  lwr   $t8, 7($t7)
/* 00425E70 2529A45C */  addiu $t1, %lo(RO_1000A45C) # addiu $t1, $t1, -0x5ba4
/* 00425E74 252D0048 */  addiu $t5, $t1, 0x48
/* 00425E78 AB38000C */  swl   $t8, 0xc($t9)
/* 00425E7C BB38000F */  swr   $t8, 0xf($t9)
.L00425E80:
/* 00425E80 892B0000 */  lwl   $t3, ($t1)
/* 00425E84 992B0003 */  lwr   $t3, 3($t1)
/* 00425E88 2529000C */  addiu $t1, $t1, 0xc
/* 00425E8C 258C000C */  addiu $t4, $t4, 0xc
/* 00425E90 A98B004C */  swl   $t3, 0x4c($t4)
/* 00425E94 B98B004F */  swr   $t3, 0x4f($t4)
/* 00425E98 892AFFF8 */  lwl   $t2, -8($t1)
/* 00425E9C 992AFFFB */  lwr   $t2, -5($t1)
/* 00425EA0 A98A0050 */  swl   $t2, 0x50($t4)
/* 00425EA4 B98A0053 */  swr   $t2, 0x53($t4)
/* 00425EA8 892BFFFC */  lwl   $t3, -4($t1)
/* 00425EAC 992BFFFF */  lwr   $t3, -1($t1)
/* 00425EB0 A98B0054 */  swl   $t3, 0x54($t4)
/* 00425EB4 152DFFF2 */  bne   $t1, $t5, .L00425E80
/* 00425EB8 B98B0057 */   swr   $t3, 0x57($t4)
/* 00425EBC 892B0000 */  lwl   $t3, ($t1)
/* 00425EC0 992B0003 */  lwr   $t3, 3($t1)
/* 00425EC4 A98B0058 */  swl   $t3, 0x58($t4)
/* 00425EC8 B98B005B */  swr   $t3, 0x5b($t4)
/* 00425ECC 892A0004 */  lwl   $t2, 4($t1)
/* 00425ED0 992A0007 */  lwr   $t2, 7($t1)
/* 00425ED4 A98A005C */  swl   $t2, 0x5c($t4)
/* 00425ED8 B98A005F */  swr   $t2, 0x5f($t4)
/* 00425EDC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00425EE0 8FA7000C */  lw    $a3, 0xc($sp)
/* 00425EE4 8FA60008 */  lw    $a2, 8($sp)
/* 00425EE8 0320F809 */  jalr  $t9
/* 00425EEC 00000000 */   nop   
/* 00425EF0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00425EF4 10000200 */  b     .L004266F8
/* 00425EF8 97A300BE */   lhu   $v1, 0xbe($sp)
.L00425EFC:
/* 00425EFC 90A20021 */  lbu   $v0, 0x21($a1)
/* 00425F00 3042001F */  andi  $v0, $v0, 0x1f
/* 00425F04 304200FF */  andi  $v0, $v0, 0xff
/* 00425F08 2C410010 */  sltiu $at, $v0, 0x10
/* 00425F0C 102001BB */  beqz  $at, .L004265FC
/* 00425F10 00000000 */   nop   
/* 00425F14 8F818038 */  lw    $at, %got(jtbl_1000A4FC)($gp)
/* 00425F18 00024080 */  sll   $t0, $v0, 2
/* 00425F1C 00280821 */  addu  $at, $at, $t0
/* 00425F20 8C28A4FC */  lw    $t0, %lo(jtbl_1000A4FC)($at)
/* 00425F24 011C4021 */  addu  $t0, $t0, $gp
/* 00425F28 01000008 */  jr    $t0
/* 00425F2C 00000000 */   nop   
.L00425F30:
/* 00425F30 8CA20028 */  lw    $v0, 0x28($a1)
/* 00425F34 24010004 */  li    $at, 4
/* 00425F38 54410004 */  bnel  $v0, $at, .L00425F4C
/* 00425F3C 24010001 */   li    $at, 1
/* 00425F40 100001ED */  b     .L004266F8
/* 00425F44 96030008 */   lhu   $v1, 8($s0)
/* 00425F48 24010001 */  li    $at, 1
.L00425F4C:
/* 00425F4C 54410004 */  bnel  $v0, $at, .L00425F60
/* 00425F50 24010002 */   li    $at, 2
/* 00425F54 100001E8 */  b     .L004266F8
/* 00425F58 96030000 */   lhu   $v1, ($s0)
/* 00425F5C 24010002 */  li    $at, 2
.L00425F60:
/* 00425F60 14410003 */  bne   $v0, $at, .L00425F70
/* 00425F64 24040004 */   li    $a0, 4
/* 00425F68 100001E3 */  b     .L004266F8
/* 00425F6C 96030004 */   lhu   $v1, 4($s0)
.L00425F70:
/* 00425F70 8F8F8038 */  lw    $t7, %got(RO_1000A40C)($gp)
/* 00425F74 2405065E */  li    $a1, 1630
/* 00425F78 03A07025 */  move  $t6, $sp
/* 00425F7C 25EFA40C */  addiu $t7, %lo(RO_1000A40C) # addiu $t7, $t7, -0x5bf4
/* 00425F80 25ED0048 */  addiu $t5, $t7, 0x48
.L00425F84:
/* 00425F84 89F80000 */  lwl   $t8, ($t7)
/* 00425F88 99F80003 */  lwr   $t8, 3($t7)
/* 00425F8C 25EF000C */  addiu $t7, $t7, 0xc
/* 00425F90 25CE000C */  addiu $t6, $t6, 0xc
/* 00425F94 A9D8FFFC */  swl   $t8, -4($t6)
/* 00425F98 B9D8FFFF */  swr   $t8, -1($t6)
/* 00425F9C 89F9FFF8 */  lwl   $t9, -8($t7)
/* 00425FA0 99F9FFFB */  lwr   $t9, -5($t7)
/* 00425FA4 A9D90000 */  swl   $t9, ($t6)
/* 00425FA8 B9D90003 */  swr   $t9, 3($t6)
/* 00425FAC 89F8FFFC */  lwl   $t8, -4($t7)
/* 00425FB0 99F8FFFF */  lwr   $t8, -1($t7)
/* 00425FB4 A9D80004 */  swl   $t8, 4($t6)
/* 00425FB8 15EDFFF2 */  bne   $t7, $t5, .L00425F84
/* 00425FBC B9D80007 */   swr   $t8, 7($t6)
/* 00425FC0 89F80000 */  lwl   $t8, ($t7)
/* 00425FC4 99F80003 */  lwr   $t8, 3($t7)
/* 00425FC8 8F898038 */  lw    $t1, %got(RO_1000A3BC)($gp)
/* 00425FCC 03A05825 */  move  $t3, $sp
/* 00425FD0 A9D80008 */  swl   $t8, 8($t6)
/* 00425FD4 B9D8000B */  swr   $t8, 0xb($t6)
/* 00425FD8 89F90004 */  lwl   $t9, 4($t7)
/* 00425FDC 99F90007 */  lwr   $t9, 7($t7)
/* 00425FE0 2529A3BC */  addiu $t1, %lo(RO_1000A3BC) # addiu $t1, $t1, -0x5c44
/* 00425FE4 25280048 */  addiu $t0, $t1, 0x48
/* 00425FE8 A9D9000C */  swl   $t9, 0xc($t6)
/* 00425FEC B9D9000F */  swr   $t9, 0xf($t6)
.L00425FF0:
/* 00425FF0 892A0000 */  lwl   $t2, ($t1)
/* 00425FF4 992A0003 */  lwr   $t2, 3($t1)
/* 00425FF8 2529000C */  addiu $t1, $t1, 0xc
/* 00425FFC 256B000C */  addiu $t3, $t3, 0xc
/* 00426000 A96A004C */  swl   $t2, 0x4c($t3)
/* 00426004 B96A004F */  swr   $t2, 0x4f($t3)
/* 00426008 892CFFF8 */  lwl   $t4, -8($t1)
/* 0042600C 992CFFFB */  lwr   $t4, -5($t1)
/* 00426010 A96C0050 */  swl   $t4, 0x50($t3)
/* 00426014 B96C0053 */  swr   $t4, 0x53($t3)
/* 00426018 892AFFFC */  lwl   $t2, -4($t1)
/* 0042601C 992AFFFF */  lwr   $t2, -1($t1)
/* 00426020 A96A0054 */  swl   $t2, 0x54($t3)
/* 00426024 1528FFF2 */  bne   $t1, $t0, .L00425FF0
/* 00426028 B96A0057 */   swr   $t2, 0x57($t3)
/* 0042602C 892A0000 */  lwl   $t2, ($t1)
/* 00426030 992A0003 */  lwr   $t2, 3($t1)
/* 00426034 A96A0058 */  swl   $t2, 0x58($t3)
/* 00426038 B96A005B */  swr   $t2, 0x5b($t3)
/* 0042603C 892C0004 */  lwl   $t4, 4($t1)
/* 00426040 992C0007 */  lwr   $t4, 7($t1)
/* 00426044 A96C005C */  swl   $t4, 0x5c($t3)
/* 00426048 B96C005F */  swr   $t4, 0x5f($t3)
/* 0042604C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00426050 8FA7000C */  lw    $a3, 0xc($sp)
/* 00426054 8FA60008 */  lw    $a2, 8($sp)
/* 00426058 0320F809 */  jalr  $t9
/* 0042605C 00000000 */   nop   
/* 00426060 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00426064 100001A4 */  b     .L004266F8
/* 00426068 97A300BE */   lhu   $v1, 0xbe($sp)
.L0042606C:
/* 0042606C 8CA20028 */  lw    $v0, 0x28($a1)
/* 00426070 24010004 */  li    $at, 4
/* 00426074 5441000B */  bnel  $v0, $at, .L004260A4
/* 00426078 24010001 */   li    $at, 1
/* 0042607C 8F8D89B8 */  lw     $t5, %got(isa)($gp)
/* 00426080 91AD0000 */  lbu   $t5, ($t5)
/* 00426084 2DA10002 */  sltiu $at, $t5, 2
/* 00426088 14200003 */  bnez  $at, .L00426098
/* 0042608C 00000000 */   nop   
/* 00426090 10000199 */  b     .L004266F8
/* 00426094 9603000A */   lhu   $v1, 0xa($s0)
.L00426098:
/* 00426098 10000197 */  b     .L004266F8
/* 0042609C 96030008 */   lhu   $v1, 8($s0)
/* 004260A0 24010001 */  li    $at, 1
.L004260A4:
/* 004260A4 54410004 */  bnel  $v0, $at, .L004260B8
/* 004260A8 24010002 */   li    $at, 2
/* 004260AC 10000192 */  b     .L004266F8
/* 004260B0 96030002 */   lhu   $v1, 2($s0)
/* 004260B4 24010002 */  li    $at, 2
.L004260B8:
/* 004260B8 14410003 */  bne   $v0, $at, .L004260C8
/* 004260BC 24040004 */   li    $a0, 4
/* 004260C0 1000018D */  b     .L004266F8
/* 004260C4 96030006 */   lhu   $v1, 6($s0)
.L004260C8:
/* 004260C8 8F8F8038 */  lw    $t7, %got(RO_1000A36C)($gp)
/* 004260CC 2405066F */  li    $a1, 1647
/* 004260D0 03A0C025 */  move  $t8, $sp
/* 004260D4 25EFA36C */  addiu $t7, %lo(RO_1000A36C) # addiu $t7, $t7, -0x5c94
/* 004260D8 25E80048 */  addiu $t0, $t7, 0x48
.L004260DC:
/* 004260DC 89F90000 */  lwl   $t9, ($t7)
/* 004260E0 99F90003 */  lwr   $t9, 3($t7)
/* 004260E4 25EF000C */  addiu $t7, $t7, 0xc
/* 004260E8 2718000C */  addiu $t8, $t8, 0xc
/* 004260EC AB19FFFC */  swl   $t9, -4($t8)
/* 004260F0 BB19FFFF */  swr   $t9, -1($t8)
/* 004260F4 89EEFFF8 */  lwl   $t6, -8($t7)
/* 004260F8 99EEFFFB */  lwr   $t6, -5($t7)
/* 004260FC AB0E0000 */  swl   $t6, ($t8)
/* 00426100 BB0E0003 */  swr   $t6, 3($t8)
/* 00426104 89F9FFFC */  lwl   $t9, -4($t7)
/* 00426108 99F9FFFF */  lwr   $t9, -1($t7)
/* 0042610C AB190004 */  swl   $t9, 4($t8)
/* 00426110 15E8FFF2 */  bne   $t7, $t0, .L004260DC
/* 00426114 BB190007 */   swr   $t9, 7($t8)
/* 00426118 89F90000 */  lwl   $t9, ($t7)
/* 0042611C 99F90003 */  lwr   $t9, 3($t7)
/* 00426120 8F898038 */  lw    $t1, %got(RO_1000A31C)($gp)
/* 00426124 03A05025 */  move  $t2, $sp
/* 00426128 AB190008 */  swl   $t9, 8($t8)
/* 0042612C BB19000B */  swr   $t9, 0xb($t8)
/* 00426130 89EE0004 */  lwl   $t6, 4($t7)
/* 00426134 99EE0007 */  lwr   $t6, 7($t7)
/* 00426138 2529A31C */  addiu $t1, %lo(RO_1000A31C) # addiu $t1, $t1, -0x5ce4
/* 0042613C 252D0048 */  addiu $t5, $t1, 0x48
/* 00426140 AB0E000C */  swl   $t6, 0xc($t8)
/* 00426144 BB0E000F */  swr   $t6, 0xf($t8)
.L00426148:
/* 00426148 892C0000 */  lwl   $t4, ($t1)
/* 0042614C 992C0003 */  lwr   $t4, 3($t1)
/* 00426150 2529000C */  addiu $t1, $t1, 0xc
/* 00426154 254A000C */  addiu $t2, $t2, 0xc
/* 00426158 A94C004C */  swl   $t4, 0x4c($t2)
/* 0042615C B94C004F */  swr   $t4, 0x4f($t2)
/* 00426160 892BFFF8 */  lwl   $t3, -8($t1)
/* 00426164 992BFFFB */  lwr   $t3, -5($t1)
/* 00426168 A94B0050 */  swl   $t3, 0x50($t2)
/* 0042616C B94B0053 */  swr   $t3, 0x53($t2)
/* 00426170 892CFFFC */  lwl   $t4, -4($t1)
/* 00426174 992CFFFF */  lwr   $t4, -1($t1)
/* 00426178 A94C0054 */  swl   $t4, 0x54($t2)
/* 0042617C 152DFFF2 */  bne   $t1, $t5, .L00426148
/* 00426180 B94C0057 */   swr   $t4, 0x57($t2)
/* 00426184 892C0000 */  lwl   $t4, ($t1)
/* 00426188 992C0003 */  lwr   $t4, 3($t1)
/* 0042618C A94C0058 */  swl   $t4, 0x58($t2)
/* 00426190 B94C005B */  swr   $t4, 0x5b($t2)
/* 00426194 892B0004 */  lwl   $t3, 4($t1)
/* 00426198 992B0007 */  lwr   $t3, 7($t1)
/* 0042619C A94B005C */  swl   $t3, 0x5c($t2)
/* 004261A0 B94B005F */  swr   $t3, 0x5f($t2)
/* 004261A4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004261A8 8FA7000C */  lw    $a3, 0xc($sp)
/* 004261AC 8FA60008 */  lw    $a2, 8($sp)
/* 004261B0 0320F809 */  jalr  $t9
/* 004261B4 00000000 */   nop   
/* 004261B8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004261BC 1000014E */  b     .L004266F8
/* 004261C0 97A300BE */   lhu   $v1, 0xbe($sp)
.L004261C4:
/* 004261C4 8CA20028 */  lw    $v0, 0x28($a1)
/* 004261C8 24010004 */  li    $at, 4
/* 004261CC 54410004 */  bnel  $v0, $at, .L004261E0
/* 004261D0 24010001 */   li    $at, 1
/* 004261D4 10000148 */  b     .L004266F8
/* 004261D8 96030008 */   lhu   $v1, 8($s0)
/* 004261DC 24010001 */  li    $at, 1
.L004261E0:
/* 004261E0 54410004 */  bnel  $v0, $at, .L004261F4
/* 004261E4 24010002 */   li    $at, 2
/* 004261E8 10000143 */  b     .L004266F8
/* 004261EC 96030000 */   lhu   $v1, ($s0)
/* 004261F0 24010002 */  li    $at, 2
.L004261F4:
/* 004261F4 54410004 */  bnel  $v0, $at, .L00426208
/* 004261F8 24010008 */   li    $at, 8
/* 004261FC 1000013E */  b     .L004266F8
/* 00426200 96030004 */   lhu   $v1, 4($s0)
/* 00426204 24010008 */  li    $at, 8
.L00426208:
/* 00426208 14410003 */  bne   $v0, $at, .L00426218
/* 0042620C 24040004 */   li    $a0, 4
/* 00426210 10000139 */  b     .L004266F8
/* 00426214 9603000C */   lhu   $v1, 0xc($s0)
.L00426218:
/* 00426218 8F888038 */  lw    $t0, %got(RO_1000A2CC)($gp)
/* 0042621C 2405067B */  li    $a1, 1659
/* 00426220 03A07025 */  move  $t6, $sp
/* 00426224 2508A2CC */  addiu $t0, %lo(RO_1000A2CC) # addiu $t0, $t0, -0x5d34
/* 00426228 25190048 */  addiu $t9, $t0, 0x48
.L0042622C:
/* 0042622C 89180000 */  lwl   $t8, ($t0)
/* 00426230 99180003 */  lwr   $t8, 3($t0)
/* 00426234 2508000C */  addiu $t0, $t0, 0xc
/* 00426238 25CE000C */  addiu $t6, $t6, 0xc
/* 0042623C A9D8FFFC */  swl   $t8, -4($t6)
/* 00426240 B9D8FFFF */  swr   $t8, -1($t6)
/* 00426244 890FFFF8 */  lwl   $t7, -8($t0)
/* 00426248 990FFFFB */  lwr   $t7, -5($t0)
/* 0042624C A9CF0000 */  swl   $t7, ($t6)
/* 00426250 B9CF0003 */  swr   $t7, 3($t6)
/* 00426254 8918FFFC */  lwl   $t8, -4($t0)
/* 00426258 9918FFFF */  lwr   $t8, -1($t0)
/* 0042625C A9D80004 */  swl   $t8, 4($t6)
/* 00426260 1519FFF2 */  bne   $t0, $t9, .L0042622C
/* 00426264 B9D80007 */   swr   $t8, 7($t6)
/* 00426268 89180000 */  lwl   $t8, ($t0)
/* 0042626C 99180003 */  lwr   $t8, 3($t0)
/* 00426270 8F8D8038 */  lw    $t5, %got(RO_1000A27C)($gp)
/* 00426274 03A05825 */  move  $t3, $sp
/* 00426278 A9D80008 */  swl   $t8, 8($t6)
/* 0042627C B9D8000B */  swr   $t8, 0xb($t6)
/* 00426280 890F0004 */  lwl   $t7, 4($t0)
/* 00426284 990F0007 */  lwr   $t7, 7($t0)
/* 00426288 25ADA27C */  addiu $t5, %lo(RO_1000A27C) # addiu $t5, $t5, -0x5d84
/* 0042628C 25AC0048 */  addiu $t4, $t5, 0x48
/* 00426290 A9CF000C */  swl   $t7, 0xc($t6)
/* 00426294 B9CF000F */  swr   $t7, 0xf($t6)
.L00426298:
/* 00426298 89AA0000 */  lwl   $t2, ($t5)
/* 0042629C 99AA0003 */  lwr   $t2, 3($t5)
/* 004262A0 25AD000C */  addiu $t5, $t5, 0xc
/* 004262A4 256B000C */  addiu $t3, $t3, 0xc
/* 004262A8 A96A004C */  swl   $t2, 0x4c($t3)
/* 004262AC B96A004F */  swr   $t2, 0x4f($t3)
/* 004262B0 89A9FFF8 */  lwl   $t1, -8($t5)
/* 004262B4 99A9FFFB */  lwr   $t1, -5($t5)
/* 004262B8 A9690050 */  swl   $t1, 0x50($t3)
/* 004262BC B9690053 */  swr   $t1, 0x53($t3)
/* 004262C0 89AAFFFC */  lwl   $t2, -4($t5)
/* 004262C4 99AAFFFF */  lwr   $t2, -1($t5)
/* 004262C8 A96A0054 */  swl   $t2, 0x54($t3)
/* 004262CC 15ACFFF2 */  bne   $t5, $t4, .L00426298
/* 004262D0 B96A0057 */   swr   $t2, 0x57($t3)
/* 004262D4 89AA0000 */  lwl   $t2, ($t5)
/* 004262D8 99AA0003 */  lwr   $t2, 3($t5)
/* 004262DC A96A0058 */  swl   $t2, 0x58($t3)
/* 004262E0 B96A005B */  swr   $t2, 0x5b($t3)
/* 004262E4 89A90004 */  lwl   $t1, 4($t5)
/* 004262E8 99A90007 */  lwr   $t1, 7($t5)
/* 004262EC A969005C */  swl   $t1, 0x5c($t3)
/* 004262F0 B969005F */  swr   $t1, 0x5f($t3)
/* 004262F4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004262F8 8FA7000C */  lw    $a3, 0xc($sp)
/* 004262FC 8FA60008 */  lw    $a2, 8($sp)
/* 00426300 0320F809 */  jalr  $t9
/* 00426304 00000000 */   nop   
/* 00426308 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0042630C 100000FA */  b     .L004266F8
/* 00426310 97A300BE */   lhu   $v1, 0xbe($sp)
.L00426314:
/* 00426314 8CA20028 */  lw    $v0, 0x28($a1)
/* 00426318 24010004 */  li    $at, 4
/* 0042631C 5441000B */  bnel  $v0, $at, .L0042634C
/* 00426320 24010001 */   li    $at, 1
/* 00426324 8F9989B8 */  lw     $t9, %got(isa)($gp)
/* 00426328 93390000 */  lbu   $t9, ($t9)
/* 0042632C 2F210002 */  sltiu $at, $t9, 2
/* 00426330 14200003 */  bnez  $at, .L00426340
/* 00426334 00000000 */   nop   
/* 00426338 100000EF */  b     .L004266F8
/* 0042633C 9603000A */   lhu   $v1, 0xa($s0)
.L00426340:
/* 00426340 100000ED */  b     .L004266F8
/* 00426344 96030008 */   lhu   $v1, 8($s0)
/* 00426348 24010001 */  li    $at, 1
.L0042634C:
/* 0042634C 54410004 */  bnel  $v0, $at, .L00426360
/* 00426350 24010002 */   li    $at, 2
/* 00426354 100000E8 */  b     .L004266F8
/* 00426358 96030002 */   lhu   $v1, 2($s0)
/* 0042635C 24010002 */  li    $at, 2
.L00426360:
/* 00426360 54410004 */  bnel  $v0, $at, .L00426374
/* 00426364 24010008 */   li    $at, 8
/* 00426368 100000E3 */  b     .L004266F8
/* 0042636C 96030006 */   lhu   $v1, 6($s0)
/* 00426370 24010008 */  li    $at, 8
.L00426374:
/* 00426374 14410003 */  bne   $v0, $at, .L00426384
/* 00426378 24040004 */   li    $a0, 4
/* 0042637C 100000DE */  b     .L004266F8
/* 00426380 9603000C */   lhu   $v1, 0xc($s0)
.L00426384:
/* 00426384 8F888038 */  lw    $t0, %got(RO_1000A22C)($gp)
/* 00426388 24050691 */  li    $a1, 1681
/* 0042638C 03A0C025 */  move  $t8, $sp
/* 00426390 2508A22C */  addiu $t0, %lo(RO_1000A22C) # addiu $t0, $t0, -0x5dd4
/* 00426394 250C0048 */  addiu $t4, $t0, 0x48
.L00426398:
/* 00426398 890F0000 */  lwl   $t7, ($t0)
/* 0042639C 990F0003 */  lwr   $t7, 3($t0)
/* 004263A0 2508000C */  addiu $t0, $t0, 0xc
/* 004263A4 2718000C */  addiu $t8, $t8, 0xc
/* 004263A8 AB0FFFFC */  swl   $t7, -4($t8)
/* 004263AC BB0FFFFF */  swr   $t7, -1($t8)
/* 004263B0 890EFFF8 */  lwl   $t6, -8($t0)
/* 004263B4 990EFFFB */  lwr   $t6, -5($t0)
/* 004263B8 AB0E0000 */  swl   $t6, ($t8)
/* 004263BC BB0E0003 */  swr   $t6, 3($t8)
/* 004263C0 890FFFFC */  lwl   $t7, -4($t0)
/* 004263C4 990FFFFF */  lwr   $t7, -1($t0)
/* 004263C8 AB0F0004 */  swl   $t7, 4($t8)
/* 004263CC 150CFFF2 */  bne   $t0, $t4, .L00426398
/* 004263D0 BB0F0007 */   swr   $t7, 7($t8)
/* 004263D4 890F0000 */  lwl   $t7, ($t0)
/* 004263D8 990F0003 */  lwr   $t7, 3($t0)
/* 004263DC 8F8D8038 */  lw    $t5, %got(RO_1000A1DC)($gp)
/* 004263E0 03A05025 */  move  $t2, $sp
/* 004263E4 AB0F0008 */  swl   $t7, 8($t8)
/* 004263E8 BB0F000B */  swr   $t7, 0xb($t8)
/* 004263EC 890E0004 */  lwl   $t6, 4($t0)
/* 004263F0 990E0007 */  lwr   $t6, 7($t0)
/* 004263F4 25ADA1DC */  addiu $t5, %lo(RO_1000A1DC) # addiu $t5, $t5, -0x5e24
/* 004263F8 25B90048 */  addiu $t9, $t5, 0x48
/* 004263FC AB0E000C */  swl   $t6, 0xc($t8)
/* 00426400 BB0E000F */  swr   $t6, 0xf($t8)
.L00426404:
/* 00426404 89A90000 */  lwl   $t1, ($t5)
/* 00426408 99A90003 */  lwr   $t1, 3($t5)
/* 0042640C 25AD000C */  addiu $t5, $t5, 0xc
/* 00426410 254A000C */  addiu $t2, $t2, 0xc
/* 00426414 A949004C */  swl   $t1, 0x4c($t2)
/* 00426418 B949004F */  swr   $t1, 0x4f($t2)
/* 0042641C 89ABFFF8 */  lwl   $t3, -8($t5)
/* 00426420 99ABFFFB */  lwr   $t3, -5($t5)
/* 00426424 A94B0050 */  swl   $t3, 0x50($t2)
/* 00426428 B94B0053 */  swr   $t3, 0x53($t2)
/* 0042642C 89A9FFFC */  lwl   $t1, -4($t5)
/* 00426430 99A9FFFF */  lwr   $t1, -1($t5)
/* 00426434 A9490054 */  swl   $t1, 0x54($t2)
/* 00426438 15B9FFF2 */  bne   $t5, $t9, .L00426404
/* 0042643C B9490057 */   swr   $t1, 0x57($t2)
/* 00426440 89A90000 */  lwl   $t1, ($t5)
/* 00426444 99A90003 */  lwr   $t1, 3($t5)
/* 00426448 A9490058 */  swl   $t1, 0x58($t2)
/* 0042644C B949005B */  swr   $t1, 0x5b($t2)
/* 00426450 89AB0004 */  lwl   $t3, 4($t5)
/* 00426454 99AB0007 */  lwr   $t3, 7($t5)
/* 00426458 A94B005C */  swl   $t3, 0x5c($t2)
/* 0042645C B94B005F */  swr   $t3, 0x5f($t2)
/* 00426460 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00426464 8FA7000C */  lw    $a3, 0xc($sp)
/* 00426468 8FA60008 */  lw    $a2, 8($sp)
/* 0042646C 0320F809 */  jalr  $t9
/* 00426470 00000000 */   nop   
/* 00426474 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00426478 1000009F */  b     .L004266F8
/* 0042647C 97A300BE */   lhu   $v1, 0xbe($sp)
.L00426480:
/* 00426480 8CA20028 */  lw    $v0, 0x28($a1)
/* 00426484 24010004 */  li    $at, 4
/* 00426488 5441000B */  bnel  $v0, $at, .L004264B8
/* 0042648C 24010001 */   li    $at, 1
/* 00426490 8F8C89DC */  lw     $t4, %got(basicint)($gp)
/* 00426494 24010001 */  li    $at, 1
/* 00426498 918C0000 */  lbu   $t4, ($t4)
/* 0042649C 15810003 */  bne   $t4, $at, .L004264AC
/* 004264A0 00000000 */   nop   
/* 004264A4 10000094 */  b     .L004266F8
/* 004264A8 9603000A */   lhu   $v1, 0xa($s0)
.L004264AC:
/* 004264AC 10000092 */  b     .L004266F8
/* 004264B0 96030008 */   lhu   $v1, 8($s0)
/* 004264B4 24010001 */  li    $at, 1
.L004264B8:
/* 004264B8 54410004 */  bnel  $v0, $at, .L004264CC
/* 004264BC 24010002 */   li    $at, 2
/* 004264C0 1000008D */  b     .L004266F8
/* 004264C4 96030002 */   lhu   $v1, 2($s0)
/* 004264C8 24010002 */  li    $at, 2
.L004264CC:
/* 004264CC 54410004 */  bnel  $v0, $at, .L004264E0
/* 004264D0 24010008 */   li    $at, 8
/* 004264D4 10000088 */  b     .L004266F8
/* 004264D8 96030006 */   lhu   $v1, 6($s0)
/* 004264DC 24010008 */  li    $at, 8
.L004264E0:
/* 004264E0 14410003 */  bne   $v0, $at, .L004264F0
/* 004264E4 24040004 */   li    $a0, 4
/* 004264E8 10000083 */  b     .L004266F8
/* 004264EC 9603000C */   lhu   $v1, 0xc($s0)
.L004264F0:
/* 004264F0 8F888038 */  lw    $t0, %got(RO_1000A18C)($gp)
/* 004264F4 240506A1 */  li    $a1, 1697
/* 004264F8 03A07825 */  move  $t7, $sp
/* 004264FC 2508A18C */  addiu $t0, %lo(RO_1000A18C) # addiu $t0, $t0, -0x5e74
/* 00426500 25190048 */  addiu $t9, $t0, 0x48
.L00426504:
/* 00426504 890E0000 */  lwl   $t6, ($t0)
/* 00426508 990E0003 */  lwr   $t6, 3($t0)
/* 0042650C 2508000C */  addiu $t0, $t0, 0xc
/* 00426510 25EF000C */  addiu $t7, $t7, 0xc
/* 00426514 A9EEFFFC */  swl   $t6, -4($t7)
/* 00426518 B9EEFFFF */  swr   $t6, -1($t7)
/* 0042651C 8918FFF8 */  lwl   $t8, -8($t0)
/* 00426520 9918FFFB */  lwr   $t8, -5($t0)
/* 00426524 A9F80000 */  swl   $t8, ($t7)
/* 00426528 B9F80003 */  swr   $t8, 3($t7)
/* 0042652C 890EFFFC */  lwl   $t6, -4($t0)
/* 00426530 990EFFFF */  lwr   $t6, -1($t0)
/* 00426534 A9EE0004 */  swl   $t6, 4($t7)
/* 00426538 1519FFF2 */  bne   $t0, $t9, .L00426504
/* 0042653C B9EE0007 */   swr   $t6, 7($t7)
/* 00426540 890E0000 */  lwl   $t6, ($t0)
/* 00426544 990E0003 */  lwr   $t6, 3($t0)
/* 00426548 8F8D8038 */  lw    $t5, %got(RO_1000A13C)($gp)
/* 0042654C 03A04825 */  move  $t1, $sp
/* 00426550 A9EE0008 */  swl   $t6, 8($t7)
/* 00426554 B9EE000B */  swr   $t6, 0xb($t7)
/* 00426558 89180004 */  lwl   $t8, 4($t0)
/* 0042655C 99180007 */  lwr   $t8, 7($t0)
/* 00426560 25ADA13C */  addiu $t5, %lo(RO_1000A13C) # addiu $t5, $t5, -0x5ec4
/* 00426564 25AC0048 */  addiu $t4, $t5, 0x48
/* 00426568 A9F8000C */  swl   $t8, 0xc($t7)
/* 0042656C B9F8000F */  swr   $t8, 0xf($t7)
.L00426570:
/* 00426570 89AB0000 */  lwl   $t3, ($t5)
/* 00426574 99AB0003 */  lwr   $t3, 3($t5)
/* 00426578 25AD000C */  addiu $t5, $t5, 0xc
/* 0042657C 2529000C */  addiu $t1, $t1, 0xc
/* 00426580 A92B004C */  swl   $t3, 0x4c($t1)
/* 00426584 B92B004F */  swr   $t3, 0x4f($t1)
/* 00426588 89AAFFF8 */  lwl   $t2, -8($t5)
/* 0042658C 99AAFFFB */  lwr   $t2, -5($t5)
/* 00426590 A92A0050 */  swl   $t2, 0x50($t1)
/* 00426594 B92A0053 */  swr   $t2, 0x53($t1)
/* 00426598 89ABFFFC */  lwl   $t3, -4($t5)
/* 0042659C 99ABFFFF */  lwr   $t3, -1($t5)
/* 004265A0 A92B0054 */  swl   $t3, 0x54($t1)
/* 004265A4 15ACFFF2 */  bne   $t5, $t4, .L00426570
/* 004265A8 B92B0057 */   swr   $t3, 0x57($t1)
/* 004265AC 89AB0000 */  lwl   $t3, ($t5)
/* 004265B0 99AB0003 */  lwr   $t3, 3($t5)
/* 004265B4 A92B0058 */  swl   $t3, 0x58($t1)
/* 004265B8 B92B005B */  swr   $t3, 0x5b($t1)
/* 004265BC 89AA0004 */  lwl   $t2, 4($t5)
/* 004265C0 99AA0007 */  lwr   $t2, 7($t5)
/* 004265C4 A92A005C */  swl   $t2, 0x5c($t1)
/* 004265C8 B92A005F */  swr   $t2, 0x5f($t1)
/* 004265CC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004265D0 8FA7000C */  lw    $a3, 0xc($sp)
/* 004265D4 8FA60008 */  lw    $a2, 8($sp)
/* 004265D8 0320F809 */  jalr  $t9
/* 004265DC 00000000 */   nop   
/* 004265E0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004265E4 10000044 */  b     .L004266F8
/* 004265E8 97A300BE */   lhu   $v1, 0xbe($sp)
.L004265EC:
/* 004265EC 10000042 */  b     .L004266F8
/* 004265F0 96030008 */   lhu   $v1, 8($s0)
.L004265F4:
/* 004265F4 10000040 */  b     .L004266F8
/* 004265F8 9603000C */   lhu   $v1, 0xc($s0)
.L004265FC:
/* 004265FC 8F998038 */  lw    $t9, %got(RO_1000A0EC)($gp)
/* 00426600 24040004 */  li    $a0, 4
/* 00426604 240506B0 */  li    $a1, 1712
/* 00426608 2739A0EC */  addiu $t9, %lo(RO_1000A0EC) # addiu $t9, $t9, -0x5f14
/* 0042660C 272E0048 */  addiu $t6, $t9, 0x48
/* 00426610 03A0C025 */  move  $t8, $sp
.L00426614:
/* 00426614 8B2F0000 */  lwl   $t7, ($t9)
/* 00426618 9B2F0003 */  lwr   $t7, 3($t9)
/* 0042661C 2739000C */  addiu $t9, $t9, 0xc
/* 00426620 2718000C */  addiu $t8, $t8, 0xc
/* 00426624 AB0FFFFC */  swl   $t7, -4($t8)
/* 00426628 BB0FFFFF */  swr   $t7, -1($t8)
/* 0042662C 8B28FFF8 */  lwl   $t0, -8($t9)
/* 00426630 9B28FFFB */  lwr   $t0, -5($t9)
/* 00426634 AB080000 */  swl   $t0, ($t8)
/* 00426638 BB080003 */  swr   $t0, 3($t8)
/* 0042663C 8B2FFFFC */  lwl   $t7, -4($t9)
/* 00426640 9B2FFFFF */  lwr   $t7, -1($t9)
/* 00426644 AB0F0004 */  swl   $t7, 4($t8)
/* 00426648 172EFFF2 */  bne   $t9, $t6, .L00426614
/* 0042664C BB0F0007 */   swr   $t7, 7($t8)
/* 00426650 8B2F0000 */  lwl   $t7, ($t9)
/* 00426654 9B2F0003 */  lwr   $t7, 3($t9)
/* 00426658 8F8C8038 */  lw    $t4, %got(RO_1000A09C)($gp)
/* 0042665C 03A05025 */  move  $t2, $sp
/* 00426660 AB0F0008 */  swl   $t7, 8($t8)
/* 00426664 BB0F000B */  swr   $t7, 0xb($t8)
/* 00426668 8B280004 */  lwl   $t0, 4($t9)
/* 0042666C 9B280007 */  lwr   $t0, 7($t9)
/* 00426670 258CA09C */  addiu $t4, %lo(RO_1000A09C) # addiu $t4, $t4, -0x5f64
/* 00426674 258B0048 */  addiu $t3, $t4, 0x48
/* 00426678 AB08000C */  swl   $t0, 0xc($t8)
/* 0042667C BB08000F */  swr   $t0, 0xf($t8)
.L00426680:
/* 00426680 89890000 */  lwl   $t1, ($t4)
/* 00426684 99890003 */  lwr   $t1, 3($t4)
/* 00426688 258C000C */  addiu $t4, $t4, 0xc
/* 0042668C 254A000C */  addiu $t2, $t2, 0xc
/* 00426690 A949004C */  swl   $t1, 0x4c($t2)
/* 00426694 B949004F */  swr   $t1, 0x4f($t2)
/* 00426698 898DFFF8 */  lwl   $t5, -8($t4)
/* 0042669C 998DFFFB */  lwr   $t5, -5($t4)
/* 004266A0 A94D0050 */  swl   $t5, 0x50($t2)
/* 004266A4 B94D0053 */  swr   $t5, 0x53($t2)
/* 004266A8 8989FFFC */  lwl   $t1, -4($t4)
/* 004266AC 9989FFFF */  lwr   $t1, -1($t4)
/* 004266B0 A9490054 */  swl   $t1, 0x54($t2)
/* 004266B4 158BFFF2 */  bne   $t4, $t3, .L00426680
/* 004266B8 B9490057 */   swr   $t1, 0x57($t2)
/* 004266BC 89890000 */  lwl   $t1, ($t4)
/* 004266C0 99890003 */  lwr   $t1, 3($t4)
/* 004266C4 A9490058 */  swl   $t1, 0x58($t2)
/* 004266C8 B949005B */  swr   $t1, 0x5b($t2)
/* 004266CC 898D0004 */  lwl   $t5, 4($t4)
/* 004266D0 998D0007 */  lwr   $t5, 7($t4)
/* 004266D4 A94D005C */  swl   $t5, 0x5c($t2)
/* 004266D8 B94D005F */  swr   $t5, 0x5f($t2)
/* 004266DC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004266E0 8FA7000C */  lw    $a3, 0xc($sp)
/* 004266E4 8FA60008 */  lw    $a2, 8($sp)
/* 004266E8 0320F809 */  jalr  $t9
/* 004266EC 00000000 */   nop   
/* 004266F0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004266F4 96030008 */  lhu   $v1, 8($s0)
.L004266F8:
/* 004266F8 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 004266FC 8FB000AC */  lw    $s0, 0xac($sp)
/* 00426700 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 00426704 03E00008 */  jr    $ra
/* 00426708 00601025 */   move  $v0, $v1
    .type lsopc, @function
    .size lsopc, .-lsopc
    .end lsopc

glabel loadstore
    .ent loadstore
    # 00427B44 loadstore_for_two_words
    # 00427BFC unaligned_loadstore_for_fp_word
    # 00427CE4 unaligned_loadstore_for_two_fp_w
    # 00427E8C loadstore_for_two_fp_words
    # 00427FB8 func_00427FB8
    # 00428190 func_00428190
    # 00428384 unaligned_loadstore
    # 0042A9A8 load_parm_vreg
    # 0042BDAC eval
/* 0042670C 3C1C0FC0 */  .cpload $t9
/* 00426710 279C9344 */  
/* 00426714 0399E021 */  
/* 00426718 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0042671C AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00426720 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00426724 AFB000AC */  sw    $s0, 0xac($sp)
/* 00426728 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 0042672C AFA600C8 */  sw    $a2, 0xc8($sp)
/* 00426730 AFA700CC */  sw    $a3, 0xcc($sp)
/* 00426734 90A20021 */  lbu   $v0, 0x21($a1)
/* 00426738 00A08025 */  move  $s0, $a1
/* 0042673C 00021600 */  sll   $v0, $v0, 0x18
/* 00426740 00021742 */  srl   $v0, $v0, 0x1d
/* 00426744 304200FF */  andi  $v0, $v0, 0xff
/* 00426748 244EFFFF */  addiu $t6, $v0, -1
/* 0042674C 2DC10005 */  sltiu $at, $t6, 5
/* 00426750 102000B9 */  beqz  $at, .L00426A38
/* 00426754 00000000 */   nop   
/* 00426758 8F818038 */  lw    $at, %got(jtbl_1000A5DC)($gp)
/* 0042675C 000E7080 */  sll   $t6, $t6, 2
/* 00426760 002E0821 */  addu  $at, $at, $t6
/* 00426764 8C2EA5DC */  lw    $t6, %lo(jtbl_1000A5DC)($at)
/* 00426768 01DC7021 */  addu  $t6, $t6, $gp
/* 0042676C 01C00008 */  jr    $t6
/* 00426770 00000000 */   nop   
.L00426774:
/* 00426774 8F9985A0 */  lw    $t9, %call16(get_sym_kind)($gp)
/* 00426778 8E040024 */  lw    $a0, 0x24($s0)
/* 0042677C 0320F809 */  jalr  $t9
/* 00426780 00000000 */   nop   
/* 00426784 24010005 */  li    $at, 5
/* 00426788 14410046 */  bne   $v0, $at, .L004268A4
/* 0042678C 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 00426790 97AF00C2 */  lhu   $t7, 0xc2($sp)
/* 00426794 24010024 */  li    $at, 36
/* 00426798 11E1002C */  beq   $t7, $at, .L0042684C
/* 0042679C 00000000 */   nop   
/* 004267A0 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 004267A4 00002025 */  move  $a0, $zero
/* 004267A8 24050001 */  li    $a1, 1
/* 004267AC 0320F809 */  jalr  $t9
/* 004267B0 00000000 */   nop   
/* 004267B4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004267B8 24010001 */  li    $at, 1
/* 004267BC 304500FF */  andi  $a1, $v0, 0xff
/* 004267C0 8F9889DC */  lw     $t8, %got(basicint)($gp)
/* 004267C4 24040056 */  li    $a0, 86
/* 004267C8 93180000 */  lbu   $t8, ($t8)
/* 004267CC 1701000A */  bne   $t8, $at, .L004267F8
/* 004267D0 00000000 */   nop   
/* 004267D4 8F99820C */  lw    $t9, %call16(emit_rrri)($gp)
/* 004267D8 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 004267DC 24040139 */  li    $a0, 313
/* 004267E0 8E070024 */  lw    $a3, 0x24($s0)
/* 004267E4 A3A500BF */  sb    $a1, 0xbf($sp)
/* 004267E8 0320F809 */  jalr  $t9
/* 004267EC 90C60000 */   lbu   $a2, ($a2)
/* 004267F0 10000008 */  b     .L00426814
/* 004267F4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004267F8:
/* 004267F8 8F99820C */  lw    $t9, %call16(emit_rrri)($gp)
/* 004267FC 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 00426800 8E070024 */  lw    $a3, 0x24($s0)
/* 00426804 A3A500BF */  sb    $a1, 0xbf($sp)
/* 00426808 0320F809 */  jalr  $t9
/* 0042680C 90C60000 */   lbu   $a2, ($a2)
/* 00426810 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00426814:
/* 00426814 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00426818 97A400C2 */  lhu   $a0, 0xc2($sp)
/* 0042681C 93A500CB */  lbu   $a1, 0xcb($sp)
/* 00426820 8E06002C */  lw    $a2, 0x2c($s0)
/* 00426824 93A700BF */  lbu   $a3, 0xbf($sp)
/* 00426828 0320F809 */  jalr  $t9
/* 0042682C AFA00010 */   sw    $zero, 0x10($sp)
/* 00426830 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00426834 93A400BF */  lbu   $a0, 0xbf($sp)
/* 00426838 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042683C 0320F809 */  jalr  $t9
/* 00426840 00000000 */   nop   
/* 00426844 100000BA */  b     .L00426B30
/* 00426848 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0042684C:
/* 0042684C 8F998A60 */  lw     $t9, %got(frame_pointer)($gp)
/* 00426850 24040024 */  li    $a0, 36
/* 00426854 93A500CB */  lbu   $a1, 0xcb($sp)
/* 00426858 93390000 */  lbu   $t9, ($t9)
/* 0042685C 8FA600CC */  lw    $a2, 0xcc($sp)
/* 00426860 8E070024 */  lw    $a3, 0x24($s0)
/* 00426864 AFB90010 */  sw    $t9, 0x10($sp)
/* 00426868 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 0042686C 0320F809 */  jalr  $t9
/* 00426870 00000000 */   nop   
/* 00426874 8E07002C */  lw    $a3, 0x2c($s0)
/* 00426878 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0042687C 24040002 */  li    $a0, 2
/* 00426880 50E000AC */  beql  $a3, $zero, .L00426B34
/* 00426884 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 00426888 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042688C 93A600CB */  lbu   $a2, 0xcb($sp)
/* 00426890 AFA00010 */  sw    $zero, 0x10($sp)
/* 00426894 0320F809 */  jalr  $t9
/* 00426898 00C02825 */   move  $a1, $a2
/* 0042689C 100000A4 */  b     .L00426B30
/* 004268A0 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004268A4:
/* 004268A4 8F998404 */  lw    $t9, %call16(frame_offset)($gp)
/* 004268A8 02002025 */  move  $a0, $s0
/* 004268AC 0320F809 */  jalr  $t9
/* 004268B0 00000000 */   nop   
/* 004268B4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004268B8 8FA900CC */  lw    $t1, 0xcc($sp)
/* 004268BC 8E0A0030 */  lw    $t2, 0x30($s0)
/* 004268C0 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004268C4 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004268C8 97A400C2 */  lhu   $a0, 0xc2($sp)
/* 004268CC 93A500CB */  lbu   $a1, 0xcb($sp)
/* 004268D0 00493021 */  addu  $a2, $v0, $t1
/* 004268D4 AFAA0010 */  sw    $t2, 0x10($sp)
/* 004268D8 0320F809 */  jalr  $t9
/* 004268DC 90E70000 */   lbu   $a3, ($a3)
/* 004268E0 10000093 */  b     .L00426B30
/* 004268E4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004268E8:
/* 004268E8 8F8B89E4 */  lw     $t3, %got(pic_level)($gp)
/* 004268EC 97A400C2 */  lhu   $a0, 0xc2($sp)
/* 004268F0 93A500CB */  lbu   $a1, 0xcb($sp)
/* 004268F4 8D6B0000 */  lw    $t3, ($t3)
/* 004268F8 8FAC00CC */  lw    $t4, 0xcc($sp)
/* 004268FC 19600039 */  blez  $t3, .L004269E4
/* 00426900 00000000 */   nop   
/* 00426904 8E020024 */  lw    $v0, 0x24($s0)
/* 00426908 8FAD00CC */  lw    $t5, 0xcc($sp)
/* 0042690C 97A400C2 */  lhu   $a0, 0xc2($sp)
/* 00426910 1040002A */  beqz  $v0, .L004269BC
/* 00426914 93A500CB */   lbu   $a1, 0xcb($sp)
/* 00426918 8E0C002C */  lw    $t4, 0x2c($s0)
/* 0042691C 34018000 */  li    $at, 32768
/* 00426920 018D1821 */  addu  $v1, $t4, $t5
/* 00426924 0061082A */  slt   $at, $v1, $at
/* 00426928 10200003 */  beqz  $at, .L00426938
/* 0042692C 28618000 */   slti  $at, $v1, -0x8000
/* 00426930 10200022 */  beqz  $at, .L004269BC
/* 00426934 00000000 */   nop   
.L00426938:
/* 00426938 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042693C 00002025 */  move  $a0, $zero
/* 00426940 24050001 */  li    $a1, 1
/* 00426944 0320F809 */  jalr  $t9
/* 00426948 00000000 */   nop   
/* 0042694C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00426950 8E0E002C */  lw    $t6, 0x2c($s0)
/* 00426954 8FAF00CC */  lw    $t7, 0xcc($sp)
/* 00426958 8F9981F0 */  lw    $t9, %call16(emit_ra)($gp)
/* 0042695C 8E180030 */  lw    $t8, 0x30($s0)
/* 00426960 A3A200BF */  sb    $v0, 0xbf($sp)
/* 00426964 24040024 */  li    $a0, 36
/* 00426968 304500FF */  andi  $a1, $v0, 0xff
/* 0042696C 8E060024 */  lw    $a2, 0x24($s0)
/* 00426970 01CF3821 */  addu  $a3, $t6, $t7
/* 00426974 0320F809 */  jalr  $t9
/* 00426978 AFB80010 */   sw    $t8, 0x10($sp)
/* 0042697C 8E190030 */  lw    $t9, 0x30($s0)
/* 00426980 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00426984 97A400C2 */  lhu   $a0, 0xc2($sp)
/* 00426988 AFB90010 */  sw    $t9, 0x10($sp)
/* 0042698C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00426990 93A500CB */  lbu   $a1, 0xcb($sp)
/* 00426994 00003025 */  move  $a2, $zero
/* 00426998 0320F809 */  jalr  $t9
/* 0042699C 93A700BF */   lbu   $a3, 0xbf($sp)
/* 004269A0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004269A4 93A400BF */  lbu   $a0, 0xbf($sp)
/* 004269A8 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 004269AC 0320F809 */  jalr  $t9
/* 004269B0 00000000 */   nop   
/* 004269B4 1000005E */  b     .L00426B30
/* 004269B8 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004269BC:
/* 004269BC 8F9981F0 */  lw    $t9, %call16(emit_ra)($gp)
/* 004269C0 8E08002C */  lw    $t0, 0x2c($s0)
/* 004269C4 8FA900CC */  lw    $t1, 0xcc($sp)
/* 004269C8 8E0A0030 */  lw    $t2, 0x30($s0)
/* 004269CC 00403025 */  move  $a2, $v0
/* 004269D0 01093821 */  addu  $a3, $t0, $t1
/* 004269D4 0320F809 */  jalr  $t9
/* 004269D8 AFAA0010 */   sw    $t2, 0x10($sp)
/* 004269DC 10000054 */  b     .L00426B30
/* 004269E0 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004269E4:
/* 004269E4 8F9981F0 */  lw    $t9, %call16(emit_ra)($gp)
/* 004269E8 8E0B002C */  lw    $t3, 0x2c($s0)
/* 004269EC 8E0D0030 */  lw    $t5, 0x30($s0)
/* 004269F0 8E060024 */  lw    $a2, 0x24($s0)
/* 004269F4 016C3821 */  addu  $a3, $t3, $t4
/* 004269F8 0320F809 */  jalr  $t9
/* 004269FC AFAD0010 */   sw    $t5, 0x10($sp)
/* 00426A00 1000004B */  b     .L00426B30
/* 00426A04 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00426A08:
/* 00426A08 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00426A0C 8E0E002C */  lw    $t6, 0x2c($s0)
/* 00426A10 8FAF00CC */  lw    $t7, 0xcc($sp)
/* 00426A14 8E180030 */  lw    $t8, 0x30($s0)
/* 00426A18 97A400C2 */  lhu   $a0, 0xc2($sp)
/* 00426A1C 93A500CB */  lbu   $a1, 0xcb($sp)
/* 00426A20 2407001D */  li    $a3, 29
/* 00426A24 01CF3021 */  addu  $a2, $t6, $t7
/* 00426A28 0320F809 */  jalr  $t9
/* 00426A2C AFB80010 */   sw    $t8, 0x10($sp)
/* 00426A30 1000003F */  b     .L00426B30
/* 00426A34 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00426A38:
/* 00426A38 8F998038 */  lw    $t9, %got(RO_1000A58C)($gp)
/* 00426A3C 24040004 */  li    $a0, 4
/* 00426A40 240506ED */  li    $a1, 1773
/* 00426A44 2739A58C */  addiu $t9, %lo(RO_1000A58C) # addiu $t9, $t9, -0x5a74
/* 00426A48 272B0048 */  addiu $t3, $t9, 0x48
/* 00426A4C 03A05025 */  move  $t2, $sp
.L00426A50:
/* 00426A50 8B290000 */  lwl   $t1, ($t9)
/* 00426A54 9B290003 */  lwr   $t1, 3($t9)
/* 00426A58 2739000C */  addiu $t9, $t9, 0xc
/* 00426A5C 254A000C */  addiu $t2, $t2, 0xc
/* 00426A60 A949FFFC */  swl   $t1, -4($t2)
/* 00426A64 B949FFFF */  swr   $t1, -1($t2)
/* 00426A68 8B28FFF8 */  lwl   $t0, -8($t9)
/* 00426A6C 9B28FFFB */  lwr   $t0, -5($t9)
/* 00426A70 A9480000 */  swl   $t0, ($t2)
/* 00426A74 B9480003 */  swr   $t0, 3($t2)
/* 00426A78 8B29FFFC */  lwl   $t1, -4($t9)
/* 00426A7C 9B29FFFF */  lwr   $t1, -1($t9)
/* 00426A80 A9490004 */  swl   $t1, 4($t2)
/* 00426A84 172BFFF2 */  bne   $t9, $t3, .L00426A50
/* 00426A88 B9490007 */   swr   $t1, 7($t2)
/* 00426A8C 8B290000 */  lwl   $t1, ($t9)
/* 00426A90 9B290003 */  lwr   $t1, 3($t9)
/* 00426A94 8F8C8038 */  lw    $t4, %got(RO_1000A53C)($gp)
/* 00426A98 03A07825 */  move  $t7, $sp
/* 00426A9C A9490008 */  swl   $t1, 8($t2)
/* 00426AA0 B949000B */  swr   $t1, 0xb($t2)
/* 00426AA4 8B280004 */  lwl   $t0, 4($t9)
/* 00426AA8 9B280007 */  lwr   $t0, 7($t9)
/* 00426AAC 258CA53C */  addiu $t4, %lo(RO_1000A53C) # addiu $t4, $t4, -0x5ac4
/* 00426AB0 25980048 */  addiu $t8, $t4, 0x48
/* 00426AB4 A948000C */  swl   $t0, 0xc($t2)
/* 00426AB8 B948000F */  swr   $t0, 0xf($t2)
.L00426ABC:
/* 00426ABC 898E0000 */  lwl   $t6, ($t4)
/* 00426AC0 998E0003 */  lwr   $t6, 3($t4)
/* 00426AC4 258C000C */  addiu $t4, $t4, 0xc
/* 00426AC8 25EF000C */  addiu $t7, $t7, 0xc
/* 00426ACC A9EE004C */  swl   $t6, 0x4c($t7)
/* 00426AD0 B9EE004F */  swr   $t6, 0x4f($t7)
/* 00426AD4 898DFFF8 */  lwl   $t5, -8($t4)
/* 00426AD8 998DFFFB */  lwr   $t5, -5($t4)
/* 00426ADC A9ED0050 */  swl   $t5, 0x50($t7)
/* 00426AE0 B9ED0053 */  swr   $t5, 0x53($t7)
/* 00426AE4 898EFFFC */  lwl   $t6, -4($t4)
/* 00426AE8 998EFFFF */  lwr   $t6, -1($t4)
/* 00426AEC A9EE0054 */  swl   $t6, 0x54($t7)
/* 00426AF0 1598FFF2 */  bne   $t4, $t8, .L00426ABC
/* 00426AF4 B9EE0057 */   swr   $t6, 0x57($t7)
/* 00426AF8 898E0000 */  lwl   $t6, ($t4)
/* 00426AFC 998E0003 */  lwr   $t6, 3($t4)
/* 00426B00 A9EE0058 */  swl   $t6, 0x58($t7)
/* 00426B04 B9EE005B */  swr   $t6, 0x5b($t7)
/* 00426B08 898D0004 */  lwl   $t5, 4($t4)
/* 00426B0C 998D0007 */  lwr   $t5, 7($t4)
/* 00426B10 A9ED005C */  swl   $t5, 0x5c($t7)
/* 00426B14 B9ED005F */  swr   $t5, 0x5f($t7)
/* 00426B18 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00426B1C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00426B20 8FA60008 */  lw    $a2, 8($sp)
/* 00426B24 0320F809 */  jalr  $t9
/* 00426B28 00000000 */   nop   
/* 00426B2C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00426B30:
/* 00426B30 8FBF00B4 */  lw    $ra, 0xb4($sp)
.L00426B34:
/* 00426B34 8FB000AC */  lw    $s0, 0xac($sp)
/* 00426B38 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 00426B3C 03E00008 */  jr    $ra
/* 00426B40 00000000 */   nop   
    .type loadstore, @function
    .size loadstore, .-loadstore
    .end loadstore

    .type func_00426B44, @function
func_00426B44:
    # 00426EF0 iloadistore
/* 00426B44 3C1C0FC0 */  .cpload $t9
/* 00426B48 279C8F0C */  
/* 00426B4C 0399E021 */  
/* 00426B50 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00426B54 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00426B58 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00426B5C AFB00020 */  sw    $s0, 0x20($sp)
/* 00426B60 00408025 */  move  $s0, $v0
/* 00426B64 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00426B68 AFB10024 */  sw    $s1, 0x24($sp)
/* 00426B6C 00002025 */  move  $a0, $zero
/* 00426B70 0320F809 */  jalr  $t9
/* 00426B74 24050001 */   li    $a1, 1
/* 00426B78 96030006 */  lhu   $v1, 6($s0)
/* 00426B7C 24010079 */  li    $at, 121
/* 00426B80 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00426B84 10610004 */  beq   $v1, $at, .L00426B98
/* 00426B88 305100FF */   andi  $s1, $v0, 0xff
/* 00426B8C 24010033 */  li    $at, 51
/* 00426B90 54610014 */  bnel  $v1, $at, .L00426BE4
/* 00426B94 92180017 */   lbu   $t8, 0x17($s0)
.L00426B98:
/* 00426B98 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00426B9C 02202025 */  move  $a0, $s1
/* 00426BA0 9205000B */  lbu   $a1, 0xb($s0)
/* 00426BA4 0320F809 */  jalr  $t9
/* 00426BA8 2406000D */   li    $a2, 13
/* 00426BAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00426BB0 920E0017 */  lbu   $t6, 0x17($s0)
/* 00426BB4 8E06000C */  lw    $a2, 0xc($s0)
/* 00426BB8 8E070010 */  lw    $a3, 0x10($s0)
/* 00426BBC 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00426BC0 AFAE0010 */  sw    $t6, 0x10($sp)
/* 00426BC4 8E0FFFF8 */  lw    $t7, -8($s0)
/* 00426BC8 240400D1 */  li    $a0, 209
/* 00426BCC 02202825 */  move  $a1, $s1
/* 00426BD0 0320F809 */  jalr  $t9
/* 00426BD4 AFAF0014 */   sw    $t7, 0x14($sp)
/* 00426BD8 10000014 */  b     .L00426C2C
/* 00426BDC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00426BE0 92180017 */  lbu   $t8, 0x17($s0)
.L00426BE4:
/* 00426BE4 8E06000C */  lw    $a2, 0xc($s0)
/* 00426BE8 8E070010 */  lw    $a3, 0x10($s0)
/* 00426BEC AFB80010 */  sw    $t8, 0x10($sp)
/* 00426BF0 8E19FFF8 */  lw    $t9, -8($s0)
/* 00426BF4 240400CE */  li    $a0, 206
/* 00426BF8 02202825 */  move  $a1, $s1
/* 00426BFC AFB90014 */  sw    $t9, 0x14($sp)
/* 00426C00 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00426C04 0320F809 */  jalr  $t9
/* 00426C08 00000000 */   nop   
/* 00426C0C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00426C10 9204000B */  lbu   $a0, 0xb($s0)
/* 00426C14 02202825 */  move  $a1, $s1
/* 00426C18 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00426C1C 2406000D */  li    $a2, 13
/* 00426C20 0320F809 */  jalr  $t9
/* 00426C24 00000000 */   nop   
/* 00426C28 8FBC0028 */  lw    $gp, 0x28($sp)
.L00426C2C:
/* 00426C2C 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00426C30 02202025 */  move  $a0, $s1
/* 00426C34 0320F809 */  jalr  $t9
/* 00426C38 00000000 */   nop   
/* 00426C3C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00426C40 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00426C44 8FB00020 */  lw    $s0, 0x20($sp)
/* 00426C48 8FB10024 */  lw    $s1, 0x24($sp)
/* 00426C4C 03E00008 */  jr    $ra
/* 00426C50 27BD0030 */   addiu $sp, $sp, 0x30

    .type func_00426C54, @function
func_00426C54:
    # 00426EF0 iloadistore
/* 00426C54 3C1C0FC0 */  .cpload $t9
/* 00426C58 279C8DFC */  
/* 00426C5C 0399E021 */  
/* 00426C60 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 00426C64 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 00426C68 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00426C6C 91CE0000 */  lbu   $t6, ($t6)
/* 00426C70 AFBC0030 */  sw    $gp, 0x30($sp)
/* 00426C74 AFB4002C */  sw    $s4, 0x2c($sp)
/* 00426C78 AFB30028 */  sw    $s3, 0x28($sp)
/* 00426C7C AFB20024 */  sw    $s2, 0x24($sp)
/* 00426C80 AFB10020 */  sw    $s1, 0x20($sp)
/* 00426C84 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00426C88 15C00009 */  bnez  $t6, .L00426CB0
/* 00426C8C 00401825 */   move  $v1, $v0
/* 00426C90 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 00426C94 9054000B */  lbu   $s4, 0xb($v0)
/* 00426C98 AFA20044 */  sw    $v0, 0x44($sp)
/* 00426C9C 0320F809 */  jalr  $t9
/* 00426CA0 02802025 */   move  $a0, $s4
/* 00426CA4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426CA8 14400007 */  bnez  $v0, .L00426CC8
/* 00426CAC 8FA30044 */   lw    $v1, 0x44($sp)
.L00426CB0:
/* 00426CB0 8C62000C */  lw    $v0, 0xc($v1)
/* 00426CB4 244F0004 */  addiu $t7, $v0, 4
/* 00426CB8 AFAF003C */  sw    $t7, 0x3c($sp)
/* 00426CBC AFA20040 */  sw    $v0, 0x40($sp)
/* 00426CC0 10000005 */  b     .L00426CD8
/* 00426CC4 9074000B */   lbu   $s4, 0xb($v1)
.L00426CC8:
/* 00426CC8 8C62000C */  lw    $v0, 0xc($v1)
/* 00426CCC 24580004 */  addiu $t8, $v0, 4
/* 00426CD0 AFB80040 */  sw    $t8, 0x40($sp)
/* 00426CD4 AFA2003C */  sw    $v0, 0x3c($sp)
.L00426CD8:
/* 00426CD8 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 00426CDC 02802025 */  move  $a0, $s4
/* 00426CE0 AFA30044 */  sw    $v1, 0x44($sp)
/* 00426CE4 0320F809 */  jalr  $t9
/* 00426CE8 00000000 */   nop   
/* 00426CEC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426CF0 1040001F */  beqz  $v0, .L00426D70
/* 00426CF4 8FA30044 */   lw    $v1, 0x44($sp)
/* 00426CF8 8C79FFFC */  lw    $t9, -4($v1)
/* 00426CFC 24010004 */  li    $at, 4
/* 00426D00 02802825 */  move  $a1, $s4
/* 00426D04 1721001A */  bne   $t9, $at, .L00426D70
/* 00426D08 8FA60040 */   lw    $a2, 0x40($sp)
/* 00426D0C 94680006 */  lhu   $t0, 6($v1)
/* 00426D10 8F8A88AC */  lw     $t2, %got(double_to_singles)($gp)
/* 00426D14 90710017 */  lbu   $s1, 0x17($v1)
/* 00426D18 00084840 */  sll   $t1, $t0, 1
/* 00426D1C 012A5821 */  addu  $t3, $t1, $t2
/* 00426D20 95730000 */  lhu   $s3, ($t3)
/* 00426D24 8C700010 */  lw    $s0, 0x10($v1)
/* 00426D28 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00426D2C AFB10010 */  sw    $s1, 0x10($sp)
/* 00426D30 8C72FFF8 */  lw    $s2, -8($v1)
/* 00426D34 02602025 */  move  $a0, $s3
/* 00426D38 02003825 */  move  $a3, $s0
/* 00426D3C 0320F809 */  jalr  $t9
/* 00426D40 AFB20014 */   sw    $s2, 0x14($sp)
/* 00426D44 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426D48 02602025 */  move  $a0, $s3
/* 00426D4C 26850001 */  addiu $a1, $s4, 1
/* 00426D50 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00426D54 8FA6003C */  lw    $a2, 0x3c($sp)
/* 00426D58 02003825 */  move  $a3, $s0
/* 00426D5C AFB10010 */  sw    $s1, 0x10($sp)
/* 00426D60 0320F809 */  jalr  $t9
/* 00426D64 AFB20014 */   sw    $s2, 0x14($sp)
/* 00426D68 10000059 */  b     .L00426ED0
/* 00426D6C 8FBC0030 */   lw    $gp, 0x30($sp)
.L00426D70:
/* 00426D70 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00426D74 00002025 */  move  $a0, $zero
/* 00426D78 24050001 */  li    $a1, 1
/* 00426D7C 0320F809 */  jalr  $t9
/* 00426D80 AFA30044 */   sw    $v1, 0x44($sp)
/* 00426D84 8FA30044 */  lw    $v1, 0x44($sp)
/* 00426D88 305300FF */  andi  $s3, $v0, 0xff
/* 00426D8C 2401007A */  li    $at, 122
/* 00426D90 946C0006 */  lhu   $t4, 6($v1)
/* 00426D94 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426D98 02602825 */  move  $a1, $s3
/* 00426D9C 15810026 */  bne   $t4, $at, .L00426E38
/* 00426DA0 240400CE */   li    $a0, 206
/* 00426DA4 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00426DA8 02602025 */  move  $a0, $s3
/* 00426DAC 02802825 */  move  $a1, $s4
/* 00426DB0 2406000D */  li    $a2, 13
/* 00426DB4 0320F809 */  jalr  $t9
/* 00426DB8 AFA30044 */   sw    $v1, 0x44($sp)
/* 00426DBC 8FA30044 */  lw    $v1, 0x44($sp)
/* 00426DC0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426DC4 240400D1 */  li    $a0, 209
/* 00426DC8 90710017 */  lbu   $s1, 0x17($v1)
/* 00426DCC 8C700010 */  lw    $s0, 0x10($v1)
/* 00426DD0 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00426DD4 AFB10010 */  sw    $s1, 0x10($sp)
/* 00426DD8 8C72FFF8 */  lw    $s2, -8($v1)
/* 00426DDC 02602825 */  move  $a1, $s3
/* 00426DE0 8FA60040 */  lw    $a2, 0x40($sp)
/* 00426DE4 02003825 */  move  $a3, $s0
/* 00426DE8 0320F809 */  jalr  $t9
/* 00426DEC AFB20014 */   sw    $s2, 0x14($sp)
/* 00426DF0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426DF4 02602025 */  move  $a0, $s3
/* 00426DF8 26850001 */  addiu $a1, $s4, 1
/* 00426DFC 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00426E00 2406000D */  li    $a2, 13
/* 00426E04 0320F809 */  jalr  $t9
/* 00426E08 00000000 */   nop   
/* 00426E0C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426E10 240400D1 */  li    $a0, 209
/* 00426E14 02602825 */  move  $a1, $s3
/* 00426E18 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00426E1C 8FA6003C */  lw    $a2, 0x3c($sp)
/* 00426E20 02003825 */  move  $a3, $s0
/* 00426E24 AFB10010 */  sw    $s1, 0x10($sp)
/* 00426E28 0320F809 */  jalr  $t9
/* 00426E2C AFB20014 */   sw    $s2, 0x14($sp)
/* 00426E30 10000022 */  b     .L00426EBC
/* 00426E34 8FBC0030 */   lw    $gp, 0x30($sp)
.L00426E38:
/* 00426E38 90710017 */  lbu   $s1, 0x17($v1)
/* 00426E3C 8C700010 */  lw    $s0, 0x10($v1)
/* 00426E40 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00426E44 AFB10010 */  sw    $s1, 0x10($sp)
/* 00426E48 8C72FFF8 */  lw    $s2, -8($v1)
/* 00426E4C 8FA60040 */  lw    $a2, 0x40($sp)
/* 00426E50 02003825 */  move  $a3, $s0
/* 00426E54 0320F809 */  jalr  $t9
/* 00426E58 AFB20014 */   sw    $s2, 0x14($sp)
/* 00426E5C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426E60 02802025 */  move  $a0, $s4
/* 00426E64 02602825 */  move  $a1, $s3
/* 00426E68 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00426E6C 2406000D */  li    $a2, 13
/* 00426E70 0320F809 */  jalr  $t9
/* 00426E74 00000000 */   nop   
/* 00426E78 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426E7C 240400CE */  li    $a0, 206
/* 00426E80 02602825 */  move  $a1, $s3
/* 00426E84 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00426E88 8FA6003C */  lw    $a2, 0x3c($sp)
/* 00426E8C 02003825 */  move  $a3, $s0
/* 00426E90 AFB10010 */  sw    $s1, 0x10($sp)
/* 00426E94 0320F809 */  jalr  $t9
/* 00426E98 AFB20014 */   sw    $s2, 0x14($sp)
/* 00426E9C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00426EA0 26840001 */  addiu $a0, $s4, 1
/* 00426EA4 02602825 */  move  $a1, $s3
/* 00426EA8 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00426EAC 2406000D */  li    $a2, 13
/* 00426EB0 0320F809 */  jalr  $t9
/* 00426EB4 00000000 */   nop   
/* 00426EB8 8FBC0030 */  lw    $gp, 0x30($sp)
.L00426EBC:
/* 00426EBC 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00426EC0 02602025 */  move  $a0, $s3
/* 00426EC4 0320F809 */  jalr  $t9
/* 00426EC8 00000000 */   nop   
/* 00426ECC 8FBC0030 */  lw    $gp, 0x30($sp)
.L00426ED0:
/* 00426ED0 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00426ED4 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00426ED8 8FB10020 */  lw    $s1, 0x20($sp)
/* 00426EDC 8FB20024 */  lw    $s2, 0x24($sp)
/* 00426EE0 8FB30028 */  lw    $s3, 0x28($sp)
/* 00426EE4 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00426EE8 03E00008 */  jr    $ra
/* 00426EEC 27BD0048 */   addiu $sp, $sp, 0x48

glabel iloadistore
    .ent iloadistore
    # 0042BDAC eval
/* 00426EF0 3C1C0FC0 */  .cpload $t9
/* 00426EF4 279C8B60 */  
/* 00426EF8 0399E021 */  
/* 00426EFC 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00426F00 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00426F04 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00426F08 AFA40038 */  sw    $a0, 0x38($sp)
/* 00426F0C AFA5003C */  sw    $a1, 0x3c($sp)
/* 00426F10 AFA60040 */  sw    $a2, 0x40($sp)
/* 00426F14 AFA70044 */  sw    $a3, 0x44($sp)
/* 00426F18 94830022 */  lhu   $v1, 0x22($a0)
/* 00426F1C 00807025 */  move  $t6, $a0
/* 00426F20 8DCF0030 */  lw    $t7, 0x30($t6)
/* 00426F24 04610002 */  bgez  $v1, .L00426F30
/* 00426F28 00600821 */   move  $at, $v1
/* 00426F2C 24610007 */  addiu $at, $v1, 7
.L00426F30:
/* 00426F30 000118C3 */  sra   $v1, $at, 3
/* 00426F34 14600002 */  bnez  $v1, .L00426F40
/* 00426F38 AFAF0030 */   sw    $t7, 0x30($sp)
/* 00426F3C 8DC30028 */  lw    $v1, 0x28($t6)
.L00426F40:
/* 00426F40 8F9989C0 */  lw     $t9, %got(align8)($gp)
/* 00426F44 8FB80038 */  lw    $t8, 0x38($sp)
/* 00426F48 93390000 */  lbu   $t9, ($t9)
/* 00426F4C 8F040028 */  lw    $a0, 0x28($t8)
/* 00426F50 13200003 */  beqz  $t9, .L00426F60
/* 00426F54 28810005 */   slti  $at, $a0, 5
/* 00426F58 10000012 */  b     .L00426FA4
/* 00426F5C 24030001 */   li    $v1, 1
.L00426F60:
/* 00426F60 8F8889C4 */  lw     $t0, %got(align16)($gp)
/* 00426F64 91080000 */  lbu   $t0, ($t0)
/* 00426F68 11000003 */  beqz  $t0, .L00426F78
/* 00426F6C 00000000 */   nop   
/* 00426F70 1000000C */  b     .L00426FA4
/* 00426F74 24030002 */   li    $v1, 2
.L00426F78:
/* 00426F78 8F8989C8 */  lw     $t1, %got(align32)($gp)
/* 00426F7C 91290000 */  lbu   $t1, ($t1)
/* 00426F80 11200003 */  beqz  $t1, .L00426F90
/* 00426F84 00000000 */   nop   
/* 00426F88 10000006 */  b     .L00426FA4
/* 00426F8C 24030004 */   li    $v1, 4
.L00426F90:
/* 00426F90 8F8A89CC */  lw     $t2, %got(align64)($gp)
/* 00426F94 914A0000 */  lbu   $t2, ($t2)
/* 00426F98 11400002 */  beqz  $t2, .L00426FA4
/* 00426F9C 00000000 */   nop   
/* 00426FA0 24030008 */  li    $v1, 8
.L00426FA4:
/* 00426FA4 14200081 */  bnez  $at, .L004271AC
/* 00426FA8 0064082A */   slt   $at, $v1, $a0
/* 00426FAC 50200080 */  beql  $at, $zero, .L004271B0
/* 00426FB0 24010004 */   li    $at, 4
/* 00426FB4 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 00426FB8 93A40043 */  lbu   $a0, 0x43($sp)
/* 00426FBC AFA30034 */  sw    $v1, 0x34($sp)
/* 00426FC0 0320F809 */  jalr  $t9
/* 00426FC4 00000000 */   nop   
/* 00426FC8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00426FCC 1440000D */  bnez  $v0, .L00427004
/* 00426FD0 8FA30034 */   lw    $v1, 0x34($sp)
/* 00426FD4 8FAB0038 */  lw    $t3, 0x38($sp)
/* 00426FD8 3C01000C */  lui   $at, 0xc
/* 00426FDC 34218000 */  ori   $at, $at, 0x8000
/* 00426FE0 916C0021 */  lbu   $t4, 0x21($t3)
/* 00426FE4 318D001F */  andi  $t5, $t4, 0x1f
/* 00426FE8 2DAF0020 */  sltiu $t7, $t5, 0x20
/* 00426FEC 000F7023 */  negu  $t6, $t7
/* 00426FF0 01C1C024 */  and   $t8, $t6, $at
/* 00426FF4 01B8C804 */  sllv  $t9, $t8, $t5
/* 00426FF8 07210009 */  bgez  $t9, .L00427020
/* 00426FFC 28610004 */   slti  $at, $v1, 4
/* 00427000 AFA30034 */  sw    $v1, 0x34($sp)
.L00427004:
/* 00427004 8F99801C */  lw    $t9, %got(func_00426C54)($gp)
/* 00427008 27A20038 */  addiu $v0, $sp, 0x38
/* 0042700C 27396C54 */  addiu $t9, %lo(func_00426C54) # addiu $t9, $t9, 0x6c54
/* 00427010 0320F809 */  jalr  $t9
/* 00427014 00000000 */   nop   
/* 00427018 10000143 */  b     .L00427528
/* 0042701C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00427020:
/* 00427020 10200045 */  beqz  $at, .L00427138
/* 00427024 97AE003E */   lhu   $t6, 0x3e($sp)
/* 00427028 8F8B898C */  lw     $t3, %got(lsb_first)($gp)
/* 0042702C 97A3003E */  lhu   $v1, 0x3e($sp)
/* 00427030 8F8988AC */  lw     $t1, %got(double_to_singles)($gp)
/* 00427034 916B0000 */  lbu   $t3, ($t3)
/* 00427038 00034040 */  sll   $t0, $v1, 1
/* 0042703C 01095021 */  addu  $t2, $t0, $t1
/* 00427040 1160001F */  beqz  $t3, .L004270C0
/* 00427044 95430000 */   lhu   $v1, ($t2)
/* 00427048 8F8F88B0 */  lw     $t7, %got(unaligned_load_store_tab)($gp)
/* 0042704C 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00427050 8FA60044 */  lw    $a2, 0x44($sp)
/* 00427054 93AE004F */  lbu   $t6, 0x4f($sp)
/* 00427058 8FB80030 */  lw    $t8, 0x30($sp)
/* 0042705C 00036040 */  sll   $t4, $v1, 1
/* 00427060 018F1021 */  addu  $v0, $t4, $t7
/* 00427064 94440000 */  lhu   $a0, ($v0)
/* 00427068 AFA2002C */  sw    $v0, 0x2c($sp)
/* 0042706C 93A50043 */  lbu   $a1, 0x43($sp)
/* 00427070 8FA70048 */  lw    $a3, 0x48($sp)
/* 00427074 24C60004 */  addiu $a2, $a2, 4
/* 00427078 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0042707C 0320F809 */  jalr  $t9
/* 00427080 AFB80014 */   sw    $t8, 0x14($sp)
/* 00427084 8FB90030 */  lw    $t9, 0x30($sp)
/* 00427088 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042708C 8FA2002C */  lw    $v0, 0x2c($sp)
/* 00427090 AFB90014 */  sw    $t9, 0x14($sp)
/* 00427094 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00427098 93A50043 */  lbu   $a1, 0x43($sp)
/* 0042709C 93AD004F */  lbu   $t5, 0x4f($sp)
/* 004270A0 8FA60044 */  lw    $a2, 0x44($sp)
/* 004270A4 8FA70048 */  lw    $a3, 0x48($sp)
/* 004270A8 94440000 */  lhu   $a0, ($v0)
/* 004270AC 24A50001 */  addiu $a1, $a1, 1
/* 004270B0 0320F809 */  jalr  $t9
/* 004270B4 AFAD0010 */   sw    $t5, 0x10($sp)
/* 004270B8 1000011B */  b     .L00427528
/* 004270BC 8FBC0020 */   lw    $gp, 0x20($sp)
.L004270C0:
/* 004270C0 8F8988B0 */  lw     $t1, %got(unaligned_load_store_tab)($gp)
/* 004270C4 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 004270C8 93AA004F */  lbu   $t2, 0x4f($sp)
/* 004270CC 8FAB0030 */  lw    $t3, 0x30($sp)
/* 004270D0 00034040 */  sll   $t0, $v1, 1
/* 004270D4 01091021 */  addu  $v0, $t0, $t1
/* 004270D8 94440000 */  lhu   $a0, ($v0)
/* 004270DC AFA2002C */  sw    $v0, 0x2c($sp)
/* 004270E0 93A50043 */  lbu   $a1, 0x43($sp)
/* 004270E4 8FA60044 */  lw    $a2, 0x44($sp)
/* 004270E8 8FA70048 */  lw    $a3, 0x48($sp)
/* 004270EC AFAA0010 */  sw    $t2, 0x10($sp)
/* 004270F0 0320F809 */  jalr  $t9
/* 004270F4 AFAB0014 */   sw    $t3, 0x14($sp)
/* 004270F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004270FC 8FA2002C */  lw    $v0, 0x2c($sp)
/* 00427100 93A50043 */  lbu   $a1, 0x43($sp)
/* 00427104 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00427108 8FA60044 */  lw    $a2, 0x44($sp)
/* 0042710C 93AC004F */  lbu   $t4, 0x4f($sp)
/* 00427110 8FAF0030 */  lw    $t7, 0x30($sp)
/* 00427114 8FA70048 */  lw    $a3, 0x48($sp)
/* 00427118 94440000 */  lhu   $a0, ($v0)
/* 0042711C 24A50001 */  addiu $a1, $a1, 1
/* 00427120 24C60004 */  addiu $a2, $a2, 4
/* 00427124 AFAC0010 */  sw    $t4, 0x10($sp)
/* 00427128 0320F809 */  jalr  $t9
/* 0042712C AFAF0014 */   sw    $t7, 0x14($sp)
/* 00427130 100000FD */  b     .L00427528
/* 00427134 8FBC0020 */   lw    $gp, 0x20($sp)
.L00427138:
/* 00427138 8F8D88AC */  lw     $t5, %got(double_to_singles)($gp)
/* 0042713C 000EC040 */  sll   $t8, $t6, 1
/* 00427140 93A9004F */  lbu   $t1, 0x4f($sp)
/* 00427144 030DC821 */  addu  $t9, $t8, $t5
/* 00427148 97240000 */  lhu   $a0, ($t9)
/* 0042714C 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00427150 8FAA0030 */  lw    $t2, 0x30($sp)
/* 00427154 93A50043 */  lbu   $a1, 0x43($sp)
/* 00427158 8FA60044 */  lw    $a2, 0x44($sp)
/* 0042715C 8FA70048 */  lw    $a3, 0x48($sp)
/* 00427160 AFA90010 */  sw    $t1, 0x10($sp)
/* 00427164 A7A4003E */  sh    $a0, 0x3e($sp)
/* 00427168 0320F809 */  jalr  $t9
/* 0042716C AFAA0014 */   sw    $t2, 0x14($sp)
/* 00427170 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00427174 93A50043 */  lbu   $a1, 0x43($sp)
/* 00427178 8FA60044 */  lw    $a2, 0x44($sp)
/* 0042717C 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00427180 93AB004F */  lbu   $t3, 0x4f($sp)
/* 00427184 8FAC0030 */  lw    $t4, 0x30($sp)
/* 00427188 97A4003E */  lhu   $a0, 0x3e($sp)
/* 0042718C 8FA70048 */  lw    $a3, 0x48($sp)
/* 00427190 24A50001 */  addiu $a1, $a1, 1
/* 00427194 24C60004 */  addiu $a2, $a2, 4
/* 00427198 AFAB0010 */  sw    $t3, 0x10($sp)
/* 0042719C 0320F809 */  jalr  $t9
/* 004271A0 AFAC0014 */   sw    $t4, 0x14($sp)
/* 004271A4 100000E0 */  b     .L00427528
/* 004271A8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004271AC:
/* 004271AC 24010004 */  li    $at, 4
.L004271B0:
/* 004271B0 14810033 */  bne   $a0, $at, .L00427280
/* 004271B4 0064082A */   slt   $at, $v1, $a0
/* 004271B8 1420000E */  bnez  $at, .L004271F4
/* 004271BC 8FAF0044 */   lw    $t7, 0x44($sp)
/* 004271C0 01E3001A */  div   $zero, $t7, $v1
/* 004271C4 00007010 */  mfhi  $t6
/* 004271C8 14600002 */  bnez  $v1, .L004271D4
/* 004271CC 00000000 */   nop   
/* 004271D0 0007000D */  break 7
.L004271D4:
/* 004271D4 2401FFFF */  li    $at, -1
/* 004271D8 14610004 */  bne   $v1, $at, .L004271EC
/* 004271DC 3C018000 */   lui   $at, 0x8000
/* 004271E0 15E10002 */  bne   $t7, $at, .L004271EC
/* 004271E4 00000000 */   nop   
/* 004271E8 0006000D */  break 6
.L004271EC:
/* 004271EC 51C00025 */  beql  $t6, $zero, .L00427284
/* 004271F0 8FAE0038 */   lw    $t6, 0x38($sp)
.L004271F4:
/* 004271F4 8FB80038 */  lw    $t8, 0x38($sp)
/* 004271F8 2401000D */  li    $at, 13
/* 004271FC 930D0021 */  lbu   $t5, 0x21($t8)
/* 00427200 31B9001F */  andi  $t9, $t5, 0x1f
/* 00427204 13210007 */  beq   $t9, $at, .L00427224
/* 00427208 00000000 */   nop   
/* 0042720C 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 00427210 93A40043 */  lbu   $a0, 0x43($sp)
/* 00427214 0320F809 */  jalr  $t9
/* 00427218 00000000 */   nop   
/* 0042721C 10400008 */  beqz  $v0, .L00427240
/* 00427220 8FBC0020 */   lw    $gp, 0x20($sp)
.L00427224:
/* 00427224 8F99801C */  lw    $t9, %got(func_00426B44)($gp)
/* 00427228 27A20038 */  addiu $v0, $sp, 0x38
/* 0042722C 27396B44 */  addiu $t9, %lo(func_00426B44) # addiu $t9, $t9, 0x6b44
/* 00427230 0320F809 */  jalr  $t9
/* 00427234 00000000 */   nop   
/* 00427238 100000BB */  b     .L00427528
/* 0042723C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00427240:
/* 00427240 97A8003E */  lhu   $t0, 0x3e($sp)
/* 00427244 8F8A88B0 */  lw     $t2, %got(unaligned_load_store_tab)($gp)
/* 00427248 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 0042724C 00084840 */  sll   $t1, $t0, 1
/* 00427250 93AC004F */  lbu   $t4, 0x4f($sp)
/* 00427254 8FAF0030 */  lw    $t7, 0x30($sp)
/* 00427258 012A5821 */  addu  $t3, $t1, $t2
/* 0042725C 95640000 */  lhu   $a0, ($t3)
/* 00427260 93A50043 */  lbu   $a1, 0x43($sp)
/* 00427264 8FA60044 */  lw    $a2, 0x44($sp)
/* 00427268 8FA70048 */  lw    $a3, 0x48($sp)
/* 0042726C AFAC0010 */  sw    $t4, 0x10($sp)
/* 00427270 0320F809 */  jalr  $t9
/* 00427274 AFAF0014 */   sw    $t7, 0x14($sp)
/* 00427278 100000AB */  b     .L00427528
/* 0042727C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00427280:
/* 00427280 8FAE0038 */  lw    $t6, 0x38($sp)
.L00427284:
/* 00427284 3C01000C */  lui   $at, 0xc
/* 00427288 34218000 */  ori   $at, $at, 0x8000
/* 0042728C 91C20021 */  lbu   $v0, 0x21($t6)
/* 00427290 3042001F */  andi  $v0, $v0, 0x1f
/* 00427294 2C580020 */  sltiu $t8, $v0, 0x20
/* 00427298 00186823 */  negu  $t5, $t8
/* 0042729C 01A1C824 */  and   $t9, $t5, $at
/* 004272A0 00594004 */  sllv  $t0, $t9, $v0
/* 004272A4 0501000D */  bgez  $t0, .L004272DC
/* 004272A8 2C4B0020 */   sltiu $t3, $v0, 0x20
/* 004272AC 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 004272B0 93A9004F */  lbu   $t1, 0x4f($sp)
/* 004272B4 8FAA0030 */  lw    $t2, 0x30($sp)
/* 004272B8 97A4003E */  lhu   $a0, 0x3e($sp)
/* 004272BC 93A50043 */  lbu   $a1, 0x43($sp)
/* 004272C0 8FA60044 */  lw    $a2, 0x44($sp)
/* 004272C4 8FA70048 */  lw    $a3, 0x48($sp)
/* 004272C8 AFA90010 */  sw    $t1, 0x10($sp)
/* 004272CC 0320F809 */  jalr  $t9
/* 004272D0 AFAA0014 */   sw    $t2, 0x14($sp)
/* 004272D4 10000094 */  b     .L00427528
/* 004272D8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004272DC:
/* 004272DC 000B6023 */  negu  $t4, $t3
/* 004272E0 3C010501 */  lui   $at, 0x501
/* 004272E4 01817824 */  and   $t7, $t4, $at
/* 004272E8 004F7004 */  sllv  $t6, $t7, $v0
/* 004272EC 05C30049 */  bgezl $t6, .L00427414
/* 004272F0 8FAE0044 */   lw    $t6, 0x44($sp)
/* 004272F4 8F9889D8 */  lw     $t8, %got(opcode_arch)($gp)
/* 004272F8 93180000 */  lbu   $t8, ($t8)
/* 004272FC 57000045 */  bnel  $t8, $zero, .L00427414
/* 00427300 8FAE0044 */   lw    $t6, 0x44($sp)
/* 00427304 97AD003E */  lhu   $t5, 0x3e($sp)
/* 00427308 3C01000C */  lui   $at, 0xc
/* 0042730C 25B9FFA0 */  addiu $t9, $t5, -0x60
/* 00427310 2F280020 */  sltiu $t0, $t9, 0x20
/* 00427314 00084823 */  negu  $t1, $t0
/* 00427318 01215024 */  and   $t2, $t1, $at
/* 0042731C 032A5804 */  sllv  $t3, $t2, $t9
/* 00427320 0563003C */  bgezl $t3, .L00427414
/* 00427324 8FAE0044 */   lw    $t6, 0x44($sp)
/* 00427328 8F8F88AC */  lw     $t7, %got(double_to_singles)($gp)
/* 0042732C 000D6040 */  sll   $t4, $t5, 1
/* 00427330 93A8004F */  lbu   $t0, 0x4f($sp)
/* 00427334 93A90043 */  lbu   $t1, 0x43($sp)
/* 00427338 018F7021 */  addu  $t6, $t4, $t7
/* 0042733C 95D80000 */  lhu   $t8, ($t6)
/* 00427340 15090010 */  bne   $t0, $t1, .L00427384
/* 00427344 A7B8003E */   sh    $t8, 0x3e($sp)
/* 00427348 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042734C 24040020 */  li    $a0, 32
/* 00427350 24050006 */  li    $a1, 6
/* 00427354 0320F809 */  jalr  $t9
/* 00427358 00000000 */   nop   
/* 0042735C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00427360 24040031 */  li    $a0, 49
/* 00427364 24050001 */  li    $a1, 1
/* 00427368 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042736C 93A6004F */  lbu   $a2, 0x4f($sp)
/* 00427370 0320F809 */  jalr  $t9
/* 00427374 00000000 */   nop   
/* 00427378 240A0001 */  li    $t2, 1
/* 0042737C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00427380 A3AA004F */  sb    $t2, 0x4f($sp)
.L00427384:
/* 00427384 93B9004F */  lbu   $t9, 0x4f($sp)
/* 00427388 8FAB0030 */  lw    $t3, 0x30($sp)
/* 0042738C 97A4003E */  lhu   $a0, 0x3e($sp)
/* 00427390 AFB90010 */  sw    $t9, 0x10($sp)
/* 00427394 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00427398 93A50043 */  lbu   $a1, 0x43($sp)
/* 0042739C 8FA60044 */  lw    $a2, 0x44($sp)
/* 004273A0 8FA70048 */  lw    $a3, 0x48($sp)
/* 004273A4 0320F809 */  jalr  $t9
/* 004273A8 AFAB0014 */   sw    $t3, 0x14($sp)
/* 004273AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004273B0 93A50043 */  lbu   $a1, 0x43($sp)
/* 004273B4 8FA60044 */  lw    $a2, 0x44($sp)
/* 004273B8 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 004273BC 93AD004F */  lbu   $t5, 0x4f($sp)
/* 004273C0 8FAC0030 */  lw    $t4, 0x30($sp)
/* 004273C4 97A4003E */  lhu   $a0, 0x3e($sp)
/* 004273C8 8FA70048 */  lw    $a3, 0x48($sp)
/* 004273CC 24A50001 */  addiu $a1, $a1, 1
/* 004273D0 24C60004 */  addiu $a2, $a2, 4
/* 004273D4 AFAD0010 */  sw    $t5, 0x10($sp)
/* 004273D8 0320F809 */  jalr  $t9
/* 004273DC AFAC0014 */   sw    $t4, 0x14($sp)
/* 004273E0 93AF004F */  lbu   $t7, 0x4f($sp)
/* 004273E4 24010001 */  li    $at, 1
/* 004273E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004273EC 55E1004F */  bnel  $t7, $at, .L0042752C
/* 004273F0 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004273F4 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 004273F8 24040020 */  li    $a0, 32
/* 004273FC 24050005 */  li    $a1, 5
/* 00427400 0320F809 */  jalr  $t9
/* 00427404 00000000 */   nop   
/* 00427408 10000047 */  b     .L00427528
/* 0042740C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00427410 8FAE0044 */  lw    $t6, 0x44($sp)
.L00427414:
/* 00427414 97A8003E */  lhu   $t0, 0x3e($sp)
/* 00427418 93A50043 */  lbu   $a1, 0x43($sp)
/* 0042741C 01C4001A */  div   $zero, $t6, $a0
/* 00427420 14800002 */  bnez  $a0, .L0042742C
/* 00427424 00000000 */   nop   
/* 00427428 0007000D */  break 7
.L0042742C:
/* 0042742C 2401FFFF */  li    $at, -1
/* 00427430 14810004 */  bne   $a0, $at, .L00427444
/* 00427434 3C018000 */   lui   $at, 0x8000
/* 00427438 15C10002 */  bne   $t6, $at, .L00427444
/* 0042743C 00000000 */   nop   
/* 00427440 0006000D */  break 6
.L00427444:
/* 00427444 0000C010 */  mfhi  $t8
/* 00427448 24010001 */  li    $at, 1
/* 0042744C 1300000E */  beqz  $t8, .L00427488
/* 00427450 00084840 */   sll   $t1, $t0, 1
/* 00427454 8F8A88B0 */  lw     $t2, %got(unaligned_load_store_tab)($gp)
/* 00427458 93AB004F */  lbu   $t3, 0x4f($sp)
/* 0042745C 8FAD0030 */  lw    $t5, 0x30($sp)
/* 00427460 012AC821 */  addu  $t9, $t1, $t2
/* 00427464 97240000 */  lhu   $a0, ($t9)
/* 00427468 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 0042746C 01C03025 */  move  $a2, $t6
/* 00427470 8FA70048 */  lw    $a3, 0x48($sp)
/* 00427474 AFAB0010 */  sw    $t3, 0x10($sp)
/* 00427478 0320F809 */  jalr  $t9
/* 0042747C AFAD0014 */   sw    $t5, 0x14($sp)
/* 00427480 10000029 */  b     .L00427528
/* 00427484 8FBC0020 */   lw    $gp, 0x20($sp)
.L00427488:
/* 00427488 1461001C */  bne   $v1, $at, .L004274FC
/* 0042748C 97AC003E */   lhu   $t4, 0x3e($sp)
/* 00427490 258FFFE0 */  addiu $t7, $t4, -0x20
/* 00427494 2DF80040 */  sltiu $t8, $t7, 0x40
/* 00427498 13000009 */  beqz  $t8, .L004274C0
/* 0042749C 93A50043 */   lbu   $a1, 0x43($sp)
/* 004274A0 8F8A8038 */  lw    $t2, %got(D_10016108)($gp)
/* 004274A4 000F4143 */  sra   $t0, $t7, 5
/* 004274A8 00084880 */  sll   $t1, $t0, 2
/* 004274AC 254A6108 */  addiu $t2, %lo(D_10016108) # addiu $t2, $t2, 0x6108
/* 004274B0 0149C821 */  addu  $t9, $t2, $t1
/* 004274B4 8F2E0000 */  lw    $t6, ($t9)
/* 004274B8 01EE5804 */  sllv  $t3, $t6, $t7
/* 004274BC 29780000 */  slti  $t8, $t3, 0
.L004274C0:
/* 004274C0 1300000E */  beqz  $t8, .L004274FC
/* 004274C4 000C4040 */   sll   $t0, $t4, 1
/* 004274C8 8F8A88B0 */  lw     $t2, %got(unaligned_load_store_tab)($gp)
/* 004274CC 93B9004F */  lbu   $t9, 0x4f($sp)
/* 004274D0 8FAE0030 */  lw    $t6, 0x30($sp)
/* 004274D4 010A4821 */  addu  $t1, $t0, $t2
/* 004274D8 95240000 */  lhu   $a0, ($t1)
/* 004274DC AFB90010 */  sw    $t9, 0x10($sp)
/* 004274E0 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 004274E4 8FA60044 */  lw    $a2, 0x44($sp)
/* 004274E8 8FA70048 */  lw    $a3, 0x48($sp)
/* 004274EC 0320F809 */  jalr  $t9
/* 004274F0 AFAE0014 */   sw    $t6, 0x14($sp)
/* 004274F4 1000000C */  b     .L00427528
/* 004274F8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004274FC:
/* 004274FC 8F9981E4 */  lw    $t9, %call16(emit_rab)($gp)
/* 00427500 93AF004F */  lbu   $t7, 0x4f($sp)
/* 00427504 8FAB0030 */  lw    $t3, 0x30($sp)
/* 00427508 97A4003E */  lhu   $a0, 0x3e($sp)
/* 0042750C 93A50043 */  lbu   $a1, 0x43($sp)
/* 00427510 8FA60044 */  lw    $a2, 0x44($sp)
/* 00427514 8FA70048 */  lw    $a3, 0x48($sp)
/* 00427518 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0042751C 0320F809 */  jalr  $t9
/* 00427520 AFAB0014 */   sw    $t3, 0x14($sp)
/* 00427524 8FBC0020 */  lw    $gp, 0x20($sp)
.L00427528:
/* 00427528 8FBF0024 */  lw    $ra, 0x24($sp)
.L0042752C:
/* 0042752C 27BD0038 */  addiu $sp, $sp, 0x38
/* 00427530 03E00008 */  jr    $ra
/* 00427534 00000000 */   nop   
    .type iloadistore, @function
    .size iloadistore, .-iloadistore
    .end iloadistore

    .type func_00427538, @function
func_00427538:
    # 00427620 rloadrstore
/* 00427538 3C1C0FC0 */  .cpload $t9
/* 0042753C 279C8518 */  
/* 00427540 0399E021 */  
/* 00427544 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00427548 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0042754C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00427550 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00427554 00408025 */  move  $s0, $v0
/* 00427558 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042755C 24040020 */  li    $a0, 32
/* 00427560 0320F809 */  jalr  $t9
/* 00427564 24050006 */   li    $a1, 6
/* 00427568 960E0006 */  lhu   $t6, 6($s0)
/* 0042756C 24010079 */  li    $at, 121
/* 00427570 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00427574 15C10011 */  bne   $t6, $at, .L004275BC
/* 00427578 240400CE */   li    $a0, 206
/* 0042757C 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00427580 24040001 */  li    $a0, 1
/* 00427584 9205000B */  lbu   $a1, 0xb($s0)
/* 00427588 0320F809 */  jalr  $t9
/* 0042758C 2406000D */   li    $a2, 13
/* 00427590 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00427594 920F0013 */  lbu   $t7, 0x13($s0)
/* 00427598 8E07000C */  lw    $a3, 0xc($s0)
/* 0042759C 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 004275A0 240400D1 */  li    $a0, 209
/* 004275A4 24050001 */  li    $a1, 1
/* 004275A8 00003025 */  move  $a2, $zero
/* 004275AC 0320F809 */  jalr  $t9
/* 004275B0 AFAF0010 */   sw    $t7, 0x10($sp)
/* 004275B4 10000010 */  b     .L004275F8
/* 004275B8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004275BC:
/* 004275BC 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 004275C0 92180013 */  lbu   $t8, 0x13($s0)
/* 004275C4 8E07000C */  lw    $a3, 0xc($s0)
/* 004275C8 24050001 */  li    $a1, 1
/* 004275CC 00003025 */  move  $a2, $zero
/* 004275D0 0320F809 */  jalr  $t9
/* 004275D4 AFB80010 */   sw    $t8, 0x10($sp)
/* 004275D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004275DC 9204000B */  lbu   $a0, 0xb($s0)
/* 004275E0 24050001 */  li    $a1, 1
/* 004275E4 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 004275E8 2406000D */  li    $a2, 13
/* 004275EC 0320F809 */  jalr  $t9
/* 004275F0 00000000 */   nop   
/* 004275F4 8FBC0020 */  lw    $gp, 0x20($sp)
.L004275F8:
/* 004275F8 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 004275FC 24040020 */  li    $a0, 32
/* 00427600 24050005 */  li    $a1, 5
/* 00427604 0320F809 */  jalr  $t9
/* 00427608 00000000 */   nop   
/* 0042760C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00427610 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00427614 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00427618 03E00008 */  jr    $ra
/* 0042761C 27BD0028 */   addiu $sp, $sp, 0x28

glabel rloadrstore
    .ent rloadrstore
    # 0042BDAC eval
/* 00427620 3C1C0FC0 */  .cpload $t9
/* 00427624 279C8430 */  
/* 00427628 0399E021 */  
/* 0042762C 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00427630 94830022 */  lhu   $v1, 0x22($a0)
/* 00427634 AFB10024 */  sw    $s1, 0x24($sp)
/* 00427638 AFB00020 */  sw    $s0, 0x20($sp)
/* 0042763C 30B0FFFF */  andi  $s0, $a1, 0xffff
/* 00427640 30D100FF */  andi  $s1, $a2, 0xff
/* 00427644 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00427648 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0042764C AFA5003C */  sw    $a1, 0x3c($sp)
/* 00427650 AFA60040 */  sw    $a2, 0x40($sp)
/* 00427654 AFA70044 */  sw    $a3, 0x44($sp)
/* 00427658 04610002 */  bgez  $v1, .L00427664
/* 0042765C 00600821 */   move  $at, $v1
/* 00427660 24610007 */  addiu $at, $v1, 7
.L00427664:
/* 00427664 000118C3 */  sra   $v1, $at, 3
/* 00427668 54600003 */  bnel  $v1, $zero, .L00427678
/* 0042766C 8C820028 */   lw    $v0, 0x28($a0)
/* 00427670 8C830028 */  lw    $v1, 0x28($a0)
/* 00427674 8C820028 */  lw    $v0, 0x28($a0)
.L00427678:
/* 00427678 28410005 */  slti  $at, $v0, 5
/* 0042767C 54200094 */  bnel  $at, $zero, .L004278D0
/* 00427680 24010004 */   li    $at, 4
/* 00427684 8F8E89C8 */  lw     $t6, %got(align32)($gp)
/* 00427688 0062082A */  slt   $at, $v1, $v0
/* 0042768C 91CE0000 */  lbu   $t6, ($t6)
/* 00427690 15C00003 */  bnez  $t6, .L004276A0
/* 00427694 00000000 */   nop   
/* 00427698 5020008D */  beql  $at, $zero, .L004278D0
/* 0042769C 24010004 */   li    $at, 4
.L004276A0:
/* 004276A0 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 004276A4 02202025 */  move  $a0, $s1
/* 004276A8 AFA30034 */  sw    $v1, 0x34($sp)
/* 004276AC 0320F809 */  jalr  $t9
/* 004276B0 00000000 */   nop   
/* 004276B4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004276B8 10400034 */  beqz  $v0, .L0042778C
/* 004276BC 8FA30034 */   lw    $v1, 0x34($sp)
/* 004276C0 8F8F898C */  lw     $t7, %got(lsb_first)($gp)
/* 004276C4 00105040 */  sll   $t2, $s0, 1
/* 004276C8 02202825 */  move  $a1, $s1
/* 004276CC 91EF0000 */  lbu   $t7, ($t7)
/* 004276D0 24060004 */  li    $a2, 4
/* 004276D4 8FA70044 */  lw    $a3, 0x44($sp)
/* 004276D8 11E00019 */  beqz  $t7, .L00427740
/* 004276DC 93AC004B */   lbu   $t4, 0x4b($sp)
/* 004276E0 8F9988AC */  lw     $t9, %got(double_to_singles)($gp)
/* 004276E4 0010C040 */  sll   $t8, $s0, 1
/* 004276E8 93A8004B */  lbu   $t0, 0x4b($sp)
/* 004276EC 03191021 */  addu  $v0, $t8, $t9
/* 004276F0 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 004276F4 94440000 */  lhu   $a0, ($v0)
/* 004276F8 AFA20030 */  sw    $v0, 0x30($sp)
/* 004276FC 02202825 */  move  $a1, $s1
/* 00427700 00003025 */  move  $a2, $zero
/* 00427704 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427708 0320F809 */  jalr  $t9
/* 0042770C AFA80010 */   sw    $t0, 0x10($sp)
/* 00427710 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427714 8FA20030 */  lw    $v0, 0x30($sp)
/* 00427718 93A9004B */  lbu   $t1, 0x4b($sp)
/* 0042771C 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427720 26250001 */  addiu $a1, $s1, 1
/* 00427724 24060004 */  li    $a2, 4
/* 00427728 8FA70044 */  lw    $a3, 0x44($sp)
/* 0042772C 94440000 */  lhu   $a0, ($v0)
/* 00427730 0320F809 */  jalr  $t9
/* 00427734 AFA90010 */   sw    $t1, 0x10($sp)
/* 00427738 100000FD */  b     .L00427B30
/* 0042773C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427740:
/* 00427740 8F8B88AC */  lw     $t3, %got(double_to_singles)($gp)
/* 00427744 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427748 AFAC0010 */  sw    $t4, 0x10($sp)
/* 0042774C 014B1021 */  addu  $v0, $t2, $t3
/* 00427750 94440000 */  lhu   $a0, ($v0)
/* 00427754 0320F809 */  jalr  $t9
/* 00427758 AFA20030 */   sw    $v0, 0x30($sp)
/* 0042775C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427760 8FA20030 */  lw    $v0, 0x30($sp)
/* 00427764 93AD004B */  lbu   $t5, 0x4b($sp)
/* 00427768 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 0042776C 26250001 */  addiu $a1, $s1, 1
/* 00427770 00003025 */  move  $a2, $zero
/* 00427774 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427778 94440000 */  lhu   $a0, ($v0)
/* 0042777C 0320F809 */  jalr  $t9
/* 00427780 AFAD0010 */   sw    $t5, 0x10($sp)
/* 00427784 100000EA */  b     .L00427B30
/* 00427788 8FBC0028 */   lw    $gp, 0x28($sp)
.L0042778C:
/* 0042778C 28610004 */  slti  $at, $v1, 4
/* 00427790 10200038 */  beqz  $at, .L00427874
/* 00427794 0010C040 */   sll   $t8, $s0, 1
/* 00427798 8F99898C */  lw     $t9, %got(lsb_first)($gp)
/* 0042779C 8F8F88AC */  lw     $t7, %got(double_to_singles)($gp)
/* 004277A0 00107040 */  sll   $t6, $s0, 1
/* 004277A4 93390000 */  lbu   $t9, ($t9)
/* 004277A8 01CFC021 */  addu  $t8, $t6, $t7
/* 004277AC 97100000 */  lhu   $s0, ($t8)
/* 004277B0 13200019 */  beqz  $t9, .L00427818
/* 004277B4 02202825 */   move  $a1, $s1
/* 004277B8 8F8988B0 */  lw     $t1, %got(unaligned_load_store_tab)($gp)
/* 004277BC 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 004277C0 93AA004B */  lbu   $t2, 0x4b($sp)
/* 004277C4 00104040 */  sll   $t0, $s0, 1
/* 004277C8 01091021 */  addu  $v0, $t0, $t1
/* 004277CC 94440000 */  lhu   $a0, ($v0)
/* 004277D0 AFA20030 */  sw    $v0, 0x30($sp)
/* 004277D4 02202825 */  move  $a1, $s1
/* 004277D8 24060004 */  li    $a2, 4
/* 004277DC 8FA70044 */  lw    $a3, 0x44($sp)
/* 004277E0 0320F809 */  jalr  $t9
/* 004277E4 AFAA0010 */   sw    $t2, 0x10($sp)
/* 004277E8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004277EC 8FA20030 */  lw    $v0, 0x30($sp)
/* 004277F0 93AB004B */  lbu   $t3, 0x4b($sp)
/* 004277F4 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 004277F8 26250001 */  addiu $a1, $s1, 1
/* 004277FC 00003025 */  move  $a2, $zero
/* 00427800 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427804 94440000 */  lhu   $a0, ($v0)
/* 00427808 0320F809 */  jalr  $t9
/* 0042780C AFAB0010 */   sw    $t3, 0x10($sp)
/* 00427810 100000C7 */  b     .L00427B30
/* 00427814 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427818:
/* 00427818 8F8D88B0 */  lw     $t5, %got(unaligned_load_store_tab)($gp)
/* 0042781C 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427820 93AE004B */  lbu   $t6, 0x4b($sp)
/* 00427824 00106040 */  sll   $t4, $s0, 1
/* 00427828 018D1021 */  addu  $v0, $t4, $t5
/* 0042782C 94440000 */  lhu   $a0, ($v0)
/* 00427830 AFA20030 */  sw    $v0, 0x30($sp)
/* 00427834 00003025 */  move  $a2, $zero
/* 00427838 8FA70044 */  lw    $a3, 0x44($sp)
/* 0042783C 0320F809 */  jalr  $t9
/* 00427840 AFAE0010 */   sw    $t6, 0x10($sp)
/* 00427844 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427848 8FA20030 */  lw    $v0, 0x30($sp)
/* 0042784C 93AF004B */  lbu   $t7, 0x4b($sp)
/* 00427850 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427854 26250001 */  addiu $a1, $s1, 1
/* 00427858 24060004 */  li    $a2, 4
/* 0042785C 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427860 94440000 */  lhu   $a0, ($v0)
/* 00427864 0320F809 */  jalr  $t9
/* 00427868 AFAF0010 */   sw    $t7, 0x10($sp)
/* 0042786C 100000B0 */  b     .L00427B30
/* 00427870 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427874:
/* 00427874 8F9988AC */  lw     $t9, %got(double_to_singles)($gp)
/* 00427878 93A9004B */  lbu   $t1, 0x4b($sp)
/* 0042787C 02202825 */  move  $a1, $s1
/* 00427880 03194021 */  addu  $t0, $t8, $t9
/* 00427884 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427888 95100000 */  lhu   $s0, ($t0)
/* 0042788C 00003025 */  move  $a2, $zero
/* 00427890 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427894 AFA90010 */  sw    $t1, 0x10($sp)
/* 00427898 0320F809 */  jalr  $t9
/* 0042789C 02002025 */   move  $a0, $s0
/* 004278A0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004278A4 93AA004B */  lbu   $t2, 0x4b($sp)
/* 004278A8 02002025 */  move  $a0, $s0
/* 004278AC 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 004278B0 26250001 */  addiu $a1, $s1, 1
/* 004278B4 24060004 */  li    $a2, 4
/* 004278B8 8FA70044 */  lw    $a3, 0x44($sp)
/* 004278BC 0320F809 */  jalr  $t9
/* 004278C0 AFAA0010 */   sw    $t2, 0x10($sp)
/* 004278C4 1000009A */  b     .L00427B30
/* 004278C8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004278CC 24010004 */  li    $at, 4
.L004278D0:
/* 004278D0 1441001C */  bne   $v0, $at, .L00427944
/* 004278D4 0062082A */   slt   $at, $v1, $v0
/* 004278D8 5020001B */  beql  $at, $zero, .L00427948
/* 004278DC 90820021 */   lbu   $v0, 0x21($a0)
/* 004278E0 908B0021 */  lbu   $t3, 0x21($a0)
/* 004278E4 2401000D */  li    $at, 13
/* 004278E8 00106840 */  sll   $t5, $s0, 1
/* 004278EC 316C001F */  andi  $t4, $t3, 0x1f
/* 004278F0 15810009 */  bne   $t4, $at, .L00427918
/* 004278F4 02202825 */   move  $a1, $s1
/* 004278F8 8F99801C */  lw    $t9, %got(func_00427538)($gp)
/* 004278FC A3B10043 */  sb    $s1, 0x43($sp)
/* 00427900 A7B0003E */  sh    $s0, 0x3e($sp)
/* 00427904 27397538 */  addiu $t9, %lo(func_00427538) # addiu $t9, $t9, 0x7538
/* 00427908 0320F809 */  jalr  $t9
/* 0042790C 27A20038 */   addiu $v0, $sp, 0x38
/* 00427910 10000087 */  b     .L00427B30
/* 00427914 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427918:
/* 00427918 8F8E88B0 */  lw     $t6, %got(unaligned_load_store_tab)($gp)
/* 0042791C 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427920 93B8004B */  lbu   $t8, 0x4b($sp)
/* 00427924 01AE7821 */  addu  $t7, $t5, $t6
/* 00427928 95E40000 */  lhu   $a0, ($t7)
/* 0042792C 00003025 */  move  $a2, $zero
/* 00427930 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427934 0320F809 */  jalr  $t9
/* 00427938 AFB80010 */   sw    $t8, 0x10($sp)
/* 0042793C 1000007C */  b     .L00427B30
/* 00427940 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427944:
/* 00427944 90820021 */  lbu   $v0, 0x21($a0)
.L00427948:
/* 00427948 3C01000C */  lui   $at, 0xc
/* 0042794C 34218000 */  ori   $at, $at, 0x8000
/* 00427950 3042001F */  andi  $v0, $v0, 0x1f
/* 00427954 2C590020 */  sltiu $t9, $v0, 0x20
/* 00427958 00194023 */  negu  $t0, $t9
/* 0042795C 01014824 */  and   $t1, $t0, $at
/* 00427960 00495004 */  sllv  $t2, $t1, $v0
/* 00427964 0541000B */  bgez  $t2, .L00427994
/* 00427968 2C4C0020 */   sltiu $t4, $v0, 0x20
/* 0042796C 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427970 93AB004B */  lbu   $t3, 0x4b($sp)
/* 00427974 02002025 */  move  $a0, $s0
/* 00427978 02202825 */  move  $a1, $s1
/* 0042797C 00003025 */  move  $a2, $zero
/* 00427980 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427984 0320F809 */  jalr  $t9
/* 00427988 AFAB0010 */   sw    $t3, 0x10($sp)
/* 0042798C 10000068 */  b     .L00427B30
/* 00427990 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427994:
/* 00427994 000C6823 */  negu  $t5, $t4
/* 00427998 3C010501 */  lui   $at, 0x501
/* 0042799C 01A17024 */  and   $t6, $t5, $at
/* 004279A0 004E7804 */  sllv  $t7, $t6, $v0
/* 004279A4 05E3003F */  bgezl $t7, .L00427AA4
/* 004279A8 24010001 */   li    $at, 1
/* 004279AC 8F9889D8 */  lw     $t8, %got(opcode_arch)($gp)
/* 004279B0 2619FFA0 */  addiu $t9, $s0, -0x60
/* 004279B4 2F280020 */  sltiu $t0, $t9, 0x20
/* 004279B8 93180000 */  lbu   $t8, ($t8)
/* 004279BC 00084823 */  negu  $t1, $t0
/* 004279C0 3C01000C */  lui   $at, 0xc
/* 004279C4 17000036 */  bnez  $t8, .L00427AA0
/* 004279C8 01215024 */   and   $t2, $t1, $at
/* 004279CC 032A5804 */  sllv  $t3, $t2, $t9
/* 004279D0 05630034 */  bgezl $t3, .L00427AA4
/* 004279D4 24010001 */   li    $at, 1
/* 004279D8 8F8D88AC */  lw     $t5, %got(double_to_singles)($gp)
/* 004279DC 93AF004B */  lbu   $t7, 0x4b($sp)
/* 004279E0 00106040 */  sll   $t4, $s0, 1
/* 004279E4 018D7021 */  addu  $t6, $t4, $t5
/* 004279E8 15F10010 */  bne   $t7, $s1, .L00427A2C
/* 004279EC 95D00000 */   lhu   $s0, ($t6)
/* 004279F0 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 004279F4 24040020 */  li    $a0, 32
/* 004279F8 24050006 */  li    $a1, 6
/* 004279FC 0320F809 */  jalr  $t9
/* 00427A00 00000000 */   nop   
/* 00427A04 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427A08 24040031 */  li    $a0, 49
/* 00427A0C 24050001 */  li    $a1, 1
/* 00427A10 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00427A14 93A6004B */  lbu   $a2, 0x4b($sp)
/* 00427A18 0320F809 */  jalr  $t9
/* 00427A1C 00000000 */   nop   
/* 00427A20 24180001 */  li    $t8, 1
/* 00427A24 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427A28 A3B8004B */  sb    $t8, 0x4b($sp)
.L00427A2C:
/* 00427A2C 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427A30 93A8004B */  lbu   $t0, 0x4b($sp)
/* 00427A34 02002025 */  move  $a0, $s0
/* 00427A38 02202825 */  move  $a1, $s1
/* 00427A3C 00003025 */  move  $a2, $zero
/* 00427A40 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427A44 0320F809 */  jalr  $t9
/* 00427A48 AFA80010 */   sw    $t0, 0x10($sp)
/* 00427A4C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427A50 93A9004B */  lbu   $t1, 0x4b($sp)
/* 00427A54 02002025 */  move  $a0, $s0
/* 00427A58 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427A5C 26250001 */  addiu $a1, $s1, 1
/* 00427A60 24060004 */  li    $a2, 4
/* 00427A64 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427A68 0320F809 */  jalr  $t9
/* 00427A6C AFA90010 */   sw    $t1, 0x10($sp)
/* 00427A70 93AA004B */  lbu   $t2, 0x4b($sp)
/* 00427A74 24010001 */  li    $at, 1
/* 00427A78 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00427A7C 5541002D */  bnel  $t2, $at, .L00427B34
/* 00427A80 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00427A84 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00427A88 24040020 */  li    $a0, 32
/* 00427A8C 24050005 */  li    $a1, 5
/* 00427A90 0320F809 */  jalr  $t9
/* 00427A94 00000000 */   nop   
/* 00427A98 10000025 */  b     .L00427B30
/* 00427A9C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427AA0:
/* 00427AA0 24010001 */  li    $at, 1
.L00427AA4:
/* 00427AA4 14610019 */  bne   $v1, $at, .L00427B0C
/* 00427AA8 2619FFE0 */   addiu $t9, $s0, -0x20
/* 00427AAC 2F2B0040 */  sltiu $t3, $t9, 0x40
/* 00427AB0 11600009 */  beqz  $t3, .L00427AD8
/* 00427AB4 00105040 */   sll   $t2, $s0, 1
/* 00427AB8 8F8E8038 */  lw    $t6, %got(D_10016110)($gp)
/* 00427ABC 00196143 */  sra   $t4, $t9, 5
/* 00427AC0 000C6880 */  sll   $t5, $t4, 2
/* 00427AC4 25CE6110 */  addiu $t6, %lo(D_10016110) # addiu $t6, $t6, 0x6110
/* 00427AC8 01CD7821 */  addu  $t7, $t6, $t5
/* 00427ACC 8DF80000 */  lw    $t8, ($t7)
/* 00427AD0 03384004 */  sllv  $t0, $t8, $t9
/* 00427AD4 290B0000 */  slti  $t3, $t0, 0
.L00427AD8:
/* 00427AD8 1160000C */  beqz  $t3, .L00427B0C
/* 00427ADC 02202825 */   move  $a1, $s1
/* 00427AE0 8F8C88B0 */  lw     $t4, %got(unaligned_load_store_tab)($gp)
/* 00427AE4 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427AE8 93AD004B */  lbu   $t5, 0x4b($sp)
/* 00427AEC 014C7021 */  addu  $t6, $t2, $t4
/* 00427AF0 95C40000 */  lhu   $a0, ($t6)
/* 00427AF4 00003025 */  move  $a2, $zero
/* 00427AF8 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427AFC 0320F809 */  jalr  $t9
/* 00427B00 AFAD0010 */   sw    $t5, 0x10($sp)
/* 00427B04 1000000A */  b     .L00427B30
/* 00427B08 8FBC0028 */   lw    $gp, 0x28($sp)
.L00427B0C:
/* 00427B0C 8F9981E8 */  lw    $t9, %call16(emit_rrab)($gp)
/* 00427B10 93AF004B */  lbu   $t7, 0x4b($sp)
/* 00427B14 02002025 */  move  $a0, $s0
/* 00427B18 02202825 */  move  $a1, $s1
/* 00427B1C 00003025 */  move  $a2, $zero
/* 00427B20 8FA70044 */  lw    $a3, 0x44($sp)
/* 00427B24 0320F809 */  jalr  $t9
/* 00427B28 AFAF0010 */   sw    $t7, 0x10($sp)
/* 00427B2C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00427B30:
/* 00427B30 8FBF002C */  lw    $ra, 0x2c($sp)
.L00427B34:
/* 00427B34 8FB00020 */  lw    $s0, 0x20($sp)
/* 00427B38 8FB10024 */  lw    $s1, 0x24($sp)
/* 00427B3C 03E00008 */  jr    $ra
/* 00427B40 27BD0038 */   addiu $sp, $sp, 0x38
    .type rloadrstore, @function
    .size rloadrstore, .-rloadrstore
    .end rloadrstore

glabel loadstore_for_two_words
    .ent loadstore_for_two_words
    # 004280C4 func_004280C4
    # 00428190 func_00428190
/* 00427B44 3C1C0FBF */  .cpload $t9
/* 00427B48 279C7F0C */  
/* 00427B4C 0399E021 */  
/* 00427B50 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 00427B54 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00427B58 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00427B5C 91CE0000 */  lbu   $t6, ($t6)
/* 00427B60 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00427B64 AFA40020 */  sw    $a0, 0x20($sp)
/* 00427B68 AFA50024 */  sw    $a1, 0x24($sp)
/* 00427B6C 11C00010 */  beqz  $t6, .L00427BB0
/* 00427B70 AFA60028 */   sw    $a2, 0x28($sp)
/* 00427B74 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427B78 97A40022 */  lhu   $a0, 0x22($sp)
/* 00427B7C 93A6002B */  lbu   $a2, 0x2b($sp)
/* 00427B80 0320F809 */  jalr  $t9
/* 00427B84 24070004 */   li    $a3, 4
/* 00427B88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427B8C 93A6002B */  lbu   $a2, 0x2b($sp)
/* 00427B90 97A40022 */  lhu   $a0, 0x22($sp)
/* 00427B94 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427B98 8FA50024 */  lw    $a1, 0x24($sp)
/* 00427B9C 00003825 */  move  $a3, $zero
/* 00427BA0 0320F809 */  jalr  $t9
/* 00427BA4 24C60001 */   addiu $a2, $a2, 1
/* 00427BA8 10000010 */  b     .L00427BEC
/* 00427BAC 8FBC0018 */   lw    $gp, 0x18($sp)
.L00427BB0:
/* 00427BB0 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427BB4 97A40022 */  lhu   $a0, 0x22($sp)
/* 00427BB8 8FA50024 */  lw    $a1, 0x24($sp)
/* 00427BBC 93A6002B */  lbu   $a2, 0x2b($sp)
/* 00427BC0 0320F809 */  jalr  $t9
/* 00427BC4 00003825 */   move  $a3, $zero
/* 00427BC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427BCC 93A6002B */  lbu   $a2, 0x2b($sp)
/* 00427BD0 97A40022 */  lhu   $a0, 0x22($sp)
/* 00427BD4 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427BD8 8FA50024 */  lw    $a1, 0x24($sp)
/* 00427BDC 24070004 */  li    $a3, 4
/* 00427BE0 0320F809 */  jalr  $t9
/* 00427BE4 24C60001 */   addiu $a2, $a2, 1
/* 00427BE8 8FBC0018 */  lw    $gp, 0x18($sp)
.L00427BEC:
/* 00427BEC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00427BF0 27BD0020 */  addiu $sp, $sp, 0x20
/* 00427BF4 03E00008 */  jr    $ra
/* 00427BF8 00000000 */   nop   
    .type loadstore_for_two_words, @function
    .size loadstore_for_two_words, .-loadstore_for_two_words
    .end loadstore_for_two_words

glabel unaligned_loadstore_for_fp_word
    .ent unaligned_loadstore_for_fp_word
    # 00428384 unaligned_loadstore
/* 00427BFC 3C1C0FBF */  .cpload $t9
/* 00427C00 279C7E54 */  
/* 00427C04 0399E021 */  
/* 00427C08 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00427C0C 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00427C10 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00427C14 AFA40020 */  sw    $a0, 0x20($sp)
/* 00427C18 AFA50024 */  sw    $a1, 0x24($sp)
/* 00427C1C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00427C20 AFB00014 */  sw    $s0, 0x14($sp)
/* 00427C24 AFA60028 */  sw    $a2, 0x28($sp)
/* 00427C28 AFA7002C */  sw    $a3, 0x2c($sp)
/* 00427C2C 24050001 */  li    $a1, 1
/* 00427C30 0320F809 */  jalr  $t9
/* 00427C34 00002025 */   move  $a0, $zero
/* 00427C38 97AE0022 */  lhu   $t6, 0x22($sp)
/* 00427C3C 24010079 */  li    $at, 121
/* 00427C40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427C44 15C10010 */  bne   $t6, $at, .L00427C88
/* 00427C48 305000FF */   andi  $s0, $v0, 0xff
/* 00427C4C 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00427C50 02002025 */  move  $a0, $s0
/* 00427C54 93A5002B */  lbu   $a1, 0x2b($sp)
/* 00427C58 0320F809 */  jalr  $t9
/* 00427C5C 2406000D */   li    $a2, 13
/* 00427C60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427C64 240400D1 */  li    $a0, 209
/* 00427C68 8FA50024 */  lw    $a1, 0x24($sp)
/* 00427C6C 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427C70 02003025 */  move  $a2, $s0
/* 00427C74 00003825 */  move  $a3, $zero
/* 00427C78 0320F809 */  jalr  $t9
/* 00427C7C 00000000 */   nop   
/* 00427C80 1000000F */  b     .L00427CC0
/* 00427C84 8FBC0018 */   lw    $gp, 0x18($sp)
.L00427C88:
/* 00427C88 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427C8C 240400CE */  li    $a0, 206
/* 00427C90 8FA50024 */  lw    $a1, 0x24($sp)
/* 00427C94 02003025 */  move  $a2, $s0
/* 00427C98 0320F809 */  jalr  $t9
/* 00427C9C 00003825 */   move  $a3, $zero
/* 00427CA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427CA4 93A4002B */  lbu   $a0, 0x2b($sp)
/* 00427CA8 02002825 */  move  $a1, $s0
/* 00427CAC 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00427CB0 2406000D */  li    $a2, 13
/* 00427CB4 0320F809 */  jalr  $t9
/* 00427CB8 00000000 */   nop   
/* 00427CBC 8FBC0018 */  lw    $gp, 0x18($sp)
.L00427CC0:
/* 00427CC0 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00427CC4 02002025 */  move  $a0, $s0
/* 00427CC8 0320F809 */  jalr  $t9
/* 00427CCC 00000000 */   nop   
/* 00427CD0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00427CD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427CD8 8FB00014 */  lw    $s0, 0x14($sp)
/* 00427CDC 03E00008 */  jr    $ra
/* 00427CE0 27BD0020 */   addiu $sp, $sp, 0x20
    .type unaligned_loadstore_for_fp_word, @function
    .size unaligned_loadstore_for_fp_word, .-unaligned_loadstore_for_fp_word
    .end unaligned_loadstore_for_fp_word

glabel unaligned_loadstore_for_two_fp_w
    .ent unaligned_loadstore_for_two_fp_w
    # 004280C4 func_004280C4
/* 00427CE4 3C1C0FBF */  .cpload $t9
/* 00427CE8 279C7D6C */  
/* 00427CEC 0399E021 */  
/* 00427CF0 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 00427CF4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00427CF8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00427CFC 91CE0000 */  lbu   $t6, ($t6)
/* 00427D00 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00427D04 AFB00014 */  sw    $s0, 0x14($sp)
/* 00427D08 AFA40028 */  sw    $a0, 0x28($sp)
/* 00427D0C AFA5002C */  sw    $a1, 0x2c($sp)
/* 00427D10 15C00007 */  bnez  $t6, .L00427D30
/* 00427D14 AFA60030 */   sw    $a2, 0x30($sp)
/* 00427D18 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 00427D1C 93A40033 */  lbu   $a0, 0x33($sp)
/* 00427D20 0320F809 */  jalr  $t9
/* 00427D24 00000000 */   nop   
/* 00427D28 14400005 */  bnez  $v0, .L00427D40
/* 00427D2C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00427D30:
/* 00427D30 240F0004 */  li    $t7, 4
/* 00427D34 00003825 */  move  $a3, $zero
/* 00427D38 10000003 */  b     .L00427D48
/* 00427D3C AFAF0020 */   sw    $t7, 0x20($sp)
.L00427D40:
/* 00427D40 24070004 */  li    $a3, 4
/* 00427D44 AFA00020 */  sw    $zero, 0x20($sp)
.L00427D48:
/* 00427D48 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00427D4C 00002025 */  move  $a0, $zero
/* 00427D50 24050001 */  li    $a1, 1
/* 00427D54 0320F809 */  jalr  $t9
/* 00427D58 AFA70024 */   sw    $a3, 0x24($sp)
/* 00427D5C 97B8002A */  lhu   $t8, 0x2a($sp)
/* 00427D60 24010079 */  li    $at, 121
/* 00427D64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427D68 8FA70024 */  lw    $a3, 0x24($sp)
/* 00427D6C 17010021 */  bne   $t8, $at, .L00427DF4
/* 00427D70 305000FF */   andi  $s0, $v0, 0xff
/* 00427D74 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00427D78 02002025 */  move  $a0, $s0
/* 00427D7C 93A50033 */  lbu   $a1, 0x33($sp)
/* 00427D80 2406000D */  li    $a2, 13
/* 00427D84 0320F809 */  jalr  $t9
/* 00427D88 AFA70024 */   sw    $a3, 0x24($sp)
/* 00427D8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427D90 8FA70024 */  lw    $a3, 0x24($sp)
/* 00427D94 240400D1 */  li    $a0, 209
/* 00427D98 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427D9C 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00427DA0 02003025 */  move  $a2, $s0
/* 00427DA4 0320F809 */  jalr  $t9
/* 00427DA8 00000000 */   nop   
/* 00427DAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427DB0 93A50033 */  lbu   $a1, 0x33($sp)
/* 00427DB4 02002025 */  move  $a0, $s0
/* 00427DB8 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00427DBC 2406000D */  li    $a2, 13
/* 00427DC0 24A50001 */  addiu $a1, $a1, 1
/* 00427DC4 0320F809 */  jalr  $t9
/* 00427DC8 00000000 */   nop   
/* 00427DCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427DD0 240400D1 */  li    $a0, 209
/* 00427DD4 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00427DD8 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427DDC 02003025 */  move  $a2, $s0
/* 00427DE0 8FA70020 */  lw    $a3, 0x20($sp)
/* 00427DE4 0320F809 */  jalr  $t9
/* 00427DE8 00000000 */   nop   
/* 00427DEC 1000001E */  b     .L00427E68
/* 00427DF0 8FBC0018 */   lw    $gp, 0x18($sp)
.L00427DF4:
/* 00427DF4 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427DF8 240400CE */  li    $a0, 206
/* 00427DFC 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00427E00 0320F809 */  jalr  $t9
/* 00427E04 02003025 */   move  $a2, $s0
/* 00427E08 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427E0C 93A40033 */  lbu   $a0, 0x33($sp)
/* 00427E10 02002825 */  move  $a1, $s0
/* 00427E14 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00427E18 2406000D */  li    $a2, 13
/* 00427E1C 0320F809 */  jalr  $t9
/* 00427E20 00000000 */   nop   
/* 00427E24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427E28 240400CE */  li    $a0, 206
/* 00427E2C 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00427E30 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427E34 02003025 */  move  $a2, $s0
/* 00427E38 8FA70020 */  lw    $a3, 0x20($sp)
/* 00427E3C 0320F809 */  jalr  $t9
/* 00427E40 00000000 */   nop   
/* 00427E44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427E48 93A40033 */  lbu   $a0, 0x33($sp)
/* 00427E4C 02002825 */  move  $a1, $s0
/* 00427E50 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00427E54 2406000D */  li    $a2, 13
/* 00427E58 24840001 */  addiu $a0, $a0, 1
/* 00427E5C 0320F809 */  jalr  $t9
/* 00427E60 00000000 */   nop   
/* 00427E64 8FBC0018 */  lw    $gp, 0x18($sp)
.L00427E68:
/* 00427E68 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00427E6C 02002025 */  move  $a0, $s0
/* 00427E70 0320F809 */  jalr  $t9
/* 00427E74 00000000 */   nop   
/* 00427E78 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00427E7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00427E80 8FB00014 */  lw    $s0, 0x14($sp)
/* 00427E84 03E00008 */  jr    $ra
/* 00427E88 27BD0028 */   addiu $sp, $sp, 0x28
    .type unaligned_loadstore_for_two_fp_w, @function
    .size unaligned_loadstore_for_two_fp_w, .-unaligned_loadstore_for_two_fp_w
    .end unaligned_loadstore_for_two_fp_w

glabel loadstore_for_two_fp_words
    .ent loadstore_for_two_fp_words
    # 00428190 func_00428190
/* 00427E8C 3C1C0FBF */  .cpload $t9
/* 00427E90 279C7BC4 */  
/* 00427E94 0399E021 */  
/* 00427E98 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 00427E9C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00427EA0 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00427EA4 91CE0000 */  lbu   $t6, ($t6)
/* 00427EA8 AFB10018 */  sw    $s1, 0x18($sp)
/* 00427EAC AFB00014 */  sw    $s0, 0x14($sp)
/* 00427EB0 30D000FF */  andi  $s0, $a2, 0xff
/* 00427EB4 3091FFFF */  andi  $s1, $a0, 0xffff
/* 00427EB8 00A09025 */  move  $s2, $a1
/* 00427EBC AFBF0024 */  sw    $ra, 0x24($sp)
/* 00427EC0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00427EC4 AFA40028 */  sw    $a0, 0x28($sp)
/* 00427EC8 11C00010 */  beqz  $t6, .L00427F0C
/* 00427ECC AFA60030 */   sw    $a2, 0x30($sp)
/* 00427ED0 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427ED4 02202025 */  move  $a0, $s1
/* 00427ED8 02003025 */  move  $a2, $s0
/* 00427EDC 0320F809 */  jalr  $t9
/* 00427EE0 00003825 */   move  $a3, $zero
/* 00427EE4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00427EE8 02202025 */  move  $a0, $s1
/* 00427EEC 02402825 */  move  $a1, $s2
/* 00427EF0 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427EF4 26060001 */  addiu $a2, $s0, 1
/* 00427EF8 24070004 */  li    $a3, 4
/* 00427EFC 0320F809 */  jalr  $t9
/* 00427F00 00000000 */   nop   
/* 00427F04 10000026 */  b     .L00427FA0
/* 00427F08 8FBC0020 */   lw    $gp, 0x20($sp)
.L00427F0C:
/* 00427F0C 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 00427F10 02002025 */  move  $a0, $s0
/* 00427F14 0320F809 */  jalr  $t9
/* 00427F18 00000000 */   nop   
/* 00427F1C 10400011 */  beqz  $v0, .L00427F64
/* 00427F20 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00427F24 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427F28 02202025 */  move  $a0, $s1
/* 00427F2C 02402825 */  move  $a1, $s2
/* 00427F30 02003025 */  move  $a2, $s0
/* 00427F34 0320F809 */  jalr  $t9
/* 00427F38 24070004 */   li    $a3, 4
/* 00427F3C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00427F40 02202025 */  move  $a0, $s1
/* 00427F44 02402825 */  move  $a1, $s2
/* 00427F48 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427F4C 26060001 */  addiu $a2, $s0, 1
/* 00427F50 00003825 */  move  $a3, $zero
/* 00427F54 0320F809 */  jalr  $t9
/* 00427F58 00000000 */   nop   
/* 00427F5C 10000010 */  b     .L00427FA0
/* 00427F60 8FBC0020 */   lw    $gp, 0x20($sp)
.L00427F64:
/* 00427F64 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427F68 02202025 */  move  $a0, $s1
/* 00427F6C 02402825 */  move  $a1, $s2
/* 00427F70 02003025 */  move  $a2, $s0
/* 00427F74 0320F809 */  jalr  $t9
/* 00427F78 00003825 */   move  $a3, $zero
/* 00427F7C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00427F80 02202025 */  move  $a0, $s1
/* 00427F84 02402825 */  move  $a1, $s2
/* 00427F88 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00427F8C 26060001 */  addiu $a2, $s0, 1
/* 00427F90 24070004 */  li    $a3, 4
/* 00427F94 0320F809 */  jalr  $t9
/* 00427F98 00000000 */   nop   
/* 00427F9C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00427FA0:
/* 00427FA0 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00427FA4 8FB00014 */  lw    $s0, 0x14($sp)
/* 00427FA8 8FB10018 */  lw    $s1, 0x18($sp)
/* 00427FAC 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00427FB0 03E00008 */  jr    $ra
/* 00427FB4 27BD0028 */   addiu $sp, $sp, 0x28
    .type loadstore_for_two_fp_words, @function
    .size loadstore_for_two_fp_words, .-loadstore_for_two_fp_words
    .end loadstore_for_two_fp_words

    .type func_00427FB8, @function
func_00427FB8:
    # 00428190 func_00428190
/* 00427FB8 3C1C0FBF */  .cpload $t9
/* 00427FBC 279C7A98 */  
/* 00427FC0 0399E021 */  
/* 00427FC4 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00427FC8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00427FCC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00427FD0 AFB00014 */  sw    $s0, 0x14($sp)
/* 00427FD4 8C43FFFC */  lw    $v1, -4($v0)
/* 00427FD8 8F9888AC */  lw     $t8, %got(double_to_singles)($gp)
/* 00427FDC 8F89898C */  lw     $t1, %got(lsb_first)($gp)
/* 00427FE0 946E0002 */  lhu   $t6, 2($v1)
/* 00427FE4 00003825 */  move  $a3, $zero
/* 00427FE8 000E7840 */  sll   $t7, $t6, 1
/* 00427FEC 01F8C821 */  addu  $t9, $t7, $t8
/* 00427FF0 97280000 */  lhu   $t0, ($t9)
/* 00427FF4 A4680002 */  sh    $t0, 2($v1)
/* 00427FF8 91290000 */  lbu   $t1, ($t1)
/* 00427FFC 00085040 */  sll   $t2, $t0, 1
/* 00428000 51200017 */  beql  $t1, $zero, .L00428060
/* 00428004 946C0002 */   lhu   $t4, 2($v1)
/* 00428008 8F8B88B0 */  lw     $t3, %got(unaligned_load_store_tab)($gp)
/* 0042800C 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00428010 8C650004 */  lw    $a1, 4($v1)
/* 00428014 9070000B */  lbu   $s0, 0xb($v1)
/* 00428018 014B1021 */  addu  $v0, $t2, $t3
/* 0042801C 94440000 */  lhu   $a0, ($v0)
/* 00428020 AFA20024 */  sw    $v0, 0x24($sp)
/* 00428024 24070004 */  li    $a3, 4
/* 00428028 AFA50020 */  sw    $a1, 0x20($sp)
/* 0042802C 0320F809 */  jalr  $t9
/* 00428030 02003025 */   move  $a2, $s0
/* 00428034 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00428038 8FA20024 */  lw    $v0, 0x24($sp)
/* 0042803C 8FA50020 */  lw    $a1, 0x20($sp)
/* 00428040 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00428044 26060001 */  addiu $a2, $s0, 1
/* 00428048 00003825 */  move  $a3, $zero
/* 0042804C 0320F809 */  jalr  $t9
/* 00428050 94440000 */   lhu   $a0, ($v0)
/* 00428054 10000016 */  b     .L004280B0
/* 00428058 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0042805C 946C0002 */  lhu   $t4, 2($v1)
.L00428060:
/* 00428060 8F8E88B0 */  lw     $t6, %got(unaligned_load_store_tab)($gp)
/* 00428064 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00428068 8C650004 */  lw    $a1, 4($v1)
/* 0042806C 9070000B */  lbu   $s0, 0xb($v1)
/* 00428070 000C6840 */  sll   $t5, $t4, 1
/* 00428074 01AE1021 */  addu  $v0, $t5, $t6
/* 00428078 94440000 */  lhu   $a0, ($v0)
/* 0042807C AFA20024 */  sw    $v0, 0x24($sp)
/* 00428080 AFA50020 */  sw    $a1, 0x20($sp)
/* 00428084 0320F809 */  jalr  $t9
/* 00428088 02003025 */   move  $a2, $s0
/* 0042808C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00428090 8FA20024 */  lw    $v0, 0x24($sp)
/* 00428094 8FA50020 */  lw    $a1, 0x20($sp)
/* 00428098 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 0042809C 26060001 */  addiu $a2, $s0, 1
/* 004280A0 24070004 */  li    $a3, 4
/* 004280A4 0320F809 */  jalr  $t9
/* 004280A8 94440000 */   lhu   $a0, ($v0)
/* 004280AC 8FBC0018 */  lw    $gp, 0x18($sp)
.L004280B0:
/* 004280B0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004280B4 8FB00014 */  lw    $s0, 0x14($sp)
/* 004280B8 27BD0030 */  addiu $sp, $sp, 0x30
/* 004280BC 03E00008 */  jr    $ra
/* 004280C0 00000000 */   nop   

    .type func_004280C4, @function
func_004280C4:
    # 00428190 func_00428190
/* 004280C4 3C1C0FBF */  .cpload $t9
/* 004280C8 279C798C */  
/* 004280CC 0399E021 */  
/* 004280D0 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004280D4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004280D8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004280DC 8C43FFFC */  lw    $v1, -4($v0)
/* 004280E0 8F9888AC */  lw     $t8, %got(double_to_singles)($gp)
/* 004280E4 946E0002 */  lhu   $t6, 2($v1)
/* 004280E8 9066000B */  lbu   $a2, 0xb($v1)
/* 004280EC 000E7840 */  sll   $t7, $t6, 1
/* 004280F0 01F8C821 */  addu  $t9, $t7, $t8
/* 004280F4 97280000 */  lhu   $t0, ($t9)
/* 004280F8 00C02025 */  move  $a0, $a2
/* 004280FC A4680002 */  sh    $t0, 2($v1)
/* 00428100 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 00428104 AFA30028 */  sw    $v1, 0x28($sp)
/* 00428108 AFA60024 */  sw    $a2, 0x24($sp)
/* 0042810C 0320F809 */  jalr  $t9
/* 00428110 00000000 */   nop   
/* 00428114 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00428118 8FA30028 */  lw    $v1, 0x28($sp)
/* 0042811C 1440000C */  bnez  $v0, .L00428150
/* 00428120 8FA60024 */   lw    $a2, 0x24($sp)
/* 00428124 8C650004 */  lw    $a1, 4($v1)
/* 00428128 3C01000C */  lui   $at, 0xc
/* 0042812C 34218000 */  ori   $at, $at, 0x8000
/* 00428130 90A90021 */  lbu   $t1, 0x21($a1)
/* 00428134 312A001F */  andi  $t2, $t1, 0x1f
/* 00428138 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0042813C 000B6023 */  negu  $t4, $t3
/* 00428140 01816824 */  and   $t5, $t4, $at
/* 00428144 014D7004 */  sllv  $t6, $t5, $t2
/* 00428148 05C10008 */  bgez  $t6, .L0042816C
/* 0042814C 00000000 */   nop   
.L00428150:
/* 00428150 8F998368 */  lw    $t9, %call16(unaligned_loadstore_for_two_fp_w)($gp)
/* 00428154 94640002 */  lhu   $a0, 2($v1)
/* 00428158 8C650004 */  lw    $a1, 4($v1)
/* 0042815C 0320F809 */  jalr  $t9
/* 00428160 00000000 */   nop   
/* 00428164 10000006 */  b     .L00428180
/* 00428168 8FBC0018 */   lw    $gp, 0x18($sp)
.L0042816C:
/* 0042816C 8F998360 */  lw    $t9, %call16(loadstore_for_two_words)($gp)
/* 00428170 94640002 */  lhu   $a0, 2($v1)
/* 00428174 0320F809 */  jalr  $t9
/* 00428178 00000000 */   nop   
/* 0042817C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00428180:
/* 00428180 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00428184 27BD0030 */  addiu $sp, $sp, 0x30
/* 00428188 03E00008 */  jr    $ra
/* 0042818C 00000000 */   nop   

    .type func_00428190, @function
func_00428190:
    # 00428384 unaligned_loadstore
/* 00428190 3C1C0FBF */  .cpload $t9
/* 00428194 279C78C0 */  
/* 00428198 0399E021 */  
/* 0042819C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004281A0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004281A4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004281A8 8C450004 */  lw    $a1, 4($v0)
/* 004281AC 00401825 */  move  $v1, $v0
/* 004281B0 8CAE002C */  lw    $t6, 0x2c($a1)
/* 004281B4 31CF0003 */  andi  $t7, $t6, 3
/* 004281B8 51E00012 */  beql  $t7, $zero, .L00428204
/* 004281BC AFA3002C */   sw    $v1, 0x2c($sp)
/* 004281C0 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 004281C4 9044000B */  lbu   $a0, 0xb($v0)
/* 004281C8 AFA50028 */  sw    $a1, 0x28($sp)
/* 004281CC 0320F809 */  jalr  $t9
/* 004281D0 AFA2002C */   sw    $v0, 0x2c($sp)
/* 004281D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004281D8 8FA3002C */  lw    $v1, 0x2c($sp)
/* 004281DC 14400008 */  bnez  $v0, .L00428200
/* 004281E0 8FA50028 */   lw    $a1, 0x28($sp)
/* 004281E4 8F99801C */  lw    $t9, %got(func_00427FB8)($gp)
/* 004281E8 27A20030 */  addiu $v0, $sp, 0x30
/* 004281EC 27397FB8 */  addiu $t9, %lo(func_00427FB8) # addiu $t9, $t9, 0x7fb8
/* 004281F0 0320F809 */  jalr  $t9
/* 004281F4 00000000 */   nop   
/* 004281F8 1000005E */  b     .L00428374
/* 004281FC 8FBC0018 */   lw    $gp, 0x18($sp)
.L00428200:
/* 00428200 AFA3002C */  sw    $v1, 0x2c($sp)
.L00428204:
/* 00428204 8CB8002C */  lw    $t8, 0x2c($a1)
/* 00428208 33190007 */  andi  $t9, $t8, 7
/* 0042820C 17200006 */  bnez  $t9, .L00428228
/* 00428210 00000000 */   nop   
/* 00428214 8C68FFFC */  lw    $t0, -4($v1)
/* 00428218 31090007 */  andi  $t1, $t0, 7
/* 0042821C 5120000A */  beql  $t1, $zero, .L00428248
/* 00428220 90AA0021 */   lbu   $t2, 0x21($a1)
/* 00428224 AFA3002C */  sw    $v1, 0x2c($sp)
.L00428228:
/* 00428228 8F998020 */  lw    $t9, %got(func_004280C4)($gp)
/* 0042822C 27A20030 */  addiu $v0, $sp, 0x30
/* 00428230 273980C4 */  addiu $t9, %lo(func_004280C4) # addiu $t9, $t9, -0x7f3c
/* 00428234 0320F809 */  jalr  $t9
/* 00428238 00000000 */   nop   
/* 0042823C 1000004D */  b     .L00428374
/* 00428240 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00428244 90AA0021 */  lbu   $t2, 0x21($a1)
.L00428248:
/* 00428248 3C010509 */  lui   $at, 0x509
/* 0042824C 9066000B */  lbu   $a2, 0xb($v1)
/* 00428250 314B001F */  andi  $t3, $t2, 0x1f
/* 00428254 2D6C0020 */  sltiu $t4, $t3, 0x20
/* 00428258 000C6823 */  negu  $t5, $t4
/* 0042825C 01A17024 */  and   $t6, $t5, $at
/* 00428260 016E7804 */  sllv  $t7, $t6, $t3
/* 00428264 05E1003D */  bgez  $t7, .L0042835C
/* 00428268 00000000 */   nop   
/* 0042826C 94620002 */  lhu   $v0, 2($v1)
/* 00428270 3C01000C */  lui   $at, 0xc
/* 00428274 2458FFA0 */  addiu $t8, $v0, -0x60
/* 00428278 2F190020 */  sltiu $t9, $t8, 0x20
/* 0042827C 00194023 */  negu  $t0, $t9
/* 00428280 01014824 */  and   $t1, $t0, $at
/* 00428284 03095004 */  sllv  $t2, $t1, $t8
/* 00428288 05410034 */  bgez  $t2, .L0042835C
/* 0042828C 00000000 */   nop   
/* 00428290 8F8C89D8 */  lw     $t4, %got(opcode_arch)($gp)
/* 00428294 00067080 */  sll   $t6, $a2, 2
/* 00428298 918C0000 */  lbu   $t4, ($t4)
/* 0042829C 11800009 */  beqz  $t4, .L004282C4
/* 004282A0 00000000 */   nop   
/* 004282A4 8F8B8BCC */  lw     $t3, %got(regs)($gp)
/* 004282A8 01C67023 */  subu  $t6, $t6, $a2
/* 004282AC 000E7080 */  sll   $t6, $t6, 2
/* 004282B0 01CB7821 */  addu  $t7, $t6, $t3
/* 004282B4 91F90009 */  lbu   $t9, 9($t7)
/* 004282B8 24CD0001 */  addiu $t5, $a2, 1
/* 004282BC 15B90027 */  bne   $t5, $t9, .L0042835C
/* 004282C0 00000000 */   nop   
.L004282C4:
/* 004282C4 8F8988AC */  lw     $t1, %got(double_to_singles)($gp)
/* 004282C8 00024040 */  sll   $t0, $v0, 1
/* 004282CC 00C02025 */  move  $a0, $a2
/* 004282D0 0109C021 */  addu  $t8, $t0, $t1
/* 004282D4 970A0000 */  lhu   $t2, ($t8)
/* 004282D8 A46A0002 */  sh    $t2, 2($v1)
/* 004282DC 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 004282E0 AFA60024 */  sw    $a2, 0x24($sp)
/* 004282E4 AFA50028 */  sw    $a1, 0x28($sp)
/* 004282E8 0320F809 */  jalr  $t9
/* 004282EC AFA3002C */   sw    $v1, 0x2c($sp)
/* 004282F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004282F4 8FA3002C */  lw    $v1, 0x2c($sp)
/* 004282F8 8FA50028 */  lw    $a1, 0x28($sp)
/* 004282FC 1440000B */  bnez  $v0, .L0042832C
/* 00428300 8FA60024 */   lw    $a2, 0x24($sp)
/* 00428304 90AC0021 */  lbu   $t4, 0x21($a1)
/* 00428308 3C01000C */  lui   $at, 0xc
/* 0042830C 34218000 */  ori   $at, $at, 0x8000
/* 00428310 318E001F */  andi  $t6, $t4, 0x1f
/* 00428314 2DCB0020 */  sltiu $t3, $t6, 0x20
/* 00428318 000B7823 */  negu  $t7, $t3
/* 0042831C 01E16824 */  and   $t5, $t7, $at
/* 00428320 01CDC804 */  sllv  $t9, $t5, $t6
/* 00428324 07210007 */  bgez  $t9, .L00428344
/* 00428328 00000000 */   nop   
.L0042832C:
/* 0042832C 8F99836C */  lw    $t9, %call16(loadstore_for_two_fp_words)($gp)
/* 00428330 94640002 */  lhu   $a0, 2($v1)
/* 00428334 0320F809 */  jalr  $t9
/* 00428338 00000000 */   nop   
/* 0042833C 1000000D */  b     .L00428374
/* 00428340 8FBC0018 */   lw    $gp, 0x18($sp)
.L00428344:
/* 00428344 8F998360 */  lw    $t9, %call16(loadstore_for_two_words)($gp)
/* 00428348 94640002 */  lhu   $a0, 2($v1)
/* 0042834C 0320F809 */  jalr  $t9
/* 00428350 00000000 */   nop   
/* 00428354 10000007 */  b     .L00428374
/* 00428358 8FBC0018 */   lw    $gp, 0x18($sp)
.L0042835C:
/* 0042835C 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00428360 94640002 */  lhu   $a0, 2($v1)
/* 00428364 00003825 */  move  $a3, $zero
/* 00428368 0320F809 */  jalr  $t9
/* 0042836C 00000000 */   nop   
/* 00428370 8FBC0018 */  lw    $gp, 0x18($sp)
.L00428374:
/* 00428374 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00428378 27BD0030 */  addiu $sp, $sp, 0x30
/* 0042837C 03E00008 */  jr    $ra
/* 00428380 00000000 */   nop   

glabel unaligned_loadstore
    .ent unaligned_loadstore
    # 0042BDAC eval
/* 00428384 3C1C0FBF */  .cpload $t9
/* 00428388 279C76CC */  
/* 0042838C 0399E021 */  
/* 00428390 8F8E89C0 */  lw     $t6, %got(align8)($gp)
/* 00428394 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00428398 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042839C 91CE0000 */  lbu   $t6, ($t6)
/* 004283A0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004283A4 AFA40028 */  sw    $a0, 0x28($sp)
/* 004283A8 11C00004 */  beqz  $t6, .L004283BC
/* 004283AC AFA60030 */   sw    $a2, 0x30($sp)
/* 004283B0 240F0001 */  li    $t7, 1
/* 004283B4 10000011 */  b     .L004283FC
/* 004283B8 AFAF0024 */   sw    $t7, 0x24($sp)
.L004283BC:
/* 004283BC 8F9889C4 */  lw     $t8, %got(align16)($gp)
/* 004283C0 24190002 */  li    $t9, 2
/* 004283C4 93180000 */  lbu   $t8, ($t8)
/* 004283C8 13000003 */  beqz  $t8, .L004283D8
/* 004283CC 00000000 */   nop   
/* 004283D0 1000000A */  b     .L004283FC
/* 004283D4 AFB90024 */   sw    $t9, 0x24($sp)
.L004283D8:
/* 004283D8 8F8889C8 */  lw     $t0, %got(align32)($gp)
/* 004283DC 91080000 */  lbu   $t0, ($t0)
/* 004283E0 51000005 */  beql  $t0, $zero, .L004283F8
/* 004283E4 240A0008 */   li    $t2, 8
/* 004283E8 24090004 */  li    $t1, 4
/* 004283EC 10000003 */  b     .L004283FC
/* 004283F0 AFA90024 */   sw    $t1, 0x24($sp)
/* 004283F4 240A0008 */  li    $t2, 8
.L004283F8:
/* 004283F8 AFAA0024 */  sw    $t2, 0x24($sp)
.L004283FC:
/* 004283FC 8CA20028 */  lw    $v0, 0x28($a1)
/* 00428400 28410005 */  slti  $at, $v0, 5
/* 00428404 5420000A */  bnel  $at, $zero, .L00428430
/* 00428408 24010004 */   li    $at, 4
/* 0042840C 8F998020 */  lw    $t9, %got(func_00428190)($gp)
/* 00428410 A3A60033 */  sb    $a2, 0x33($sp)
/* 00428414 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00428418 27398190 */  addiu $t9, %lo(func_00428190) # addiu $t9, $t9, -0x7e70
/* 0042841C 0320F809 */  jalr  $t9
/* 00428420 27A20028 */   addiu $v0, $sp, 0x28
/* 00428424 10000040 */  b     .L00428528
/* 00428428 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0042842C 24010004 */  li    $at, 4
.L00428430:
/* 00428430 54410020 */  bnel  $v0, $at, .L004284B4
/* 00428434 8CB9002C */   lw    $t9, 0x2c($a1)
/* 00428438 8CAB002C */  lw    $t3, 0x2c($a1)
/* 0042843C 316C0003 */  andi  $t4, $t3, 3
/* 00428440 5180001C */  beql  $t4, $zero, .L004284B4
/* 00428444 8CB9002C */   lw    $t9, 0x2c($a1)
/* 00428448 8F998330 */  lw    $t9, %call16(is_fp_reg)($gp)
/* 0042844C 00C02025 */  move  $a0, $a2
/* 00428450 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00428454 0320F809 */  jalr  $t9
/* 00428458 A3A60033 */   sb    $a2, 0x33($sp)
/* 0042845C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00428460 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00428464 10400008 */  beqz  $v0, .L00428488
/* 00428468 93A60033 */   lbu   $a2, 0x33($sp)
/* 0042846C 8F998364 */  lw    $t9, %call16(unaligned_loadstore_for_fp_word)($gp)
/* 00428470 97A4002A */  lhu   $a0, 0x2a($sp)
/* 00428474 00003825 */  move  $a3, $zero
/* 00428478 0320F809 */  jalr  $t9
/* 0042847C 00000000 */   nop   
/* 00428480 10000029 */  b     .L00428528
/* 00428484 8FBC0018 */   lw    $gp, 0x18($sp)
.L00428488:
/* 00428488 97AD002A */  lhu   $t5, 0x2a($sp)
/* 0042848C 8F8F88B0 */  lw     $t7, %got(unaligned_load_store_tab)($gp)
/* 00428490 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00428494 000D7040 */  sll   $t6, $t5, 1
/* 00428498 01CFC021 */  addu  $t8, $t6, $t7
/* 0042849C 97040000 */  lhu   $a0, ($t8)
/* 004284A0 0320F809 */  jalr  $t9
/* 004284A4 00003825 */   move  $a3, $zero
/* 004284A8 1000001F */  b     .L00428528
/* 004284AC 8FBC0018 */   lw    $gp, 0x18($sp)
/* 004284B0 8CB9002C */  lw    $t9, 0x2c($a1)
.L004284B4:
/* 004284B4 97A9002A */  lhu   $t1, 0x2a($sp)
/* 004284B8 0322001A */  div   $zero, $t9, $v0
/* 004284BC 00004010 */  mfhi  $t0
/* 004284C0 00095040 */  sll   $t2, $t1, 1
/* 004284C4 14400002 */  bnez  $v0, .L004284D0
/* 004284C8 00000000 */   nop   
/* 004284CC 0007000D */  break 7
.L004284D0:
/* 004284D0 2401FFFF */  li    $at, -1
/* 004284D4 14410004 */  bne   $v0, $at, .L004284E8
/* 004284D8 3C018000 */   lui   $at, 0x8000
/* 004284DC 17210002 */  bne   $t9, $at, .L004284E8
/* 004284E0 00000000 */   nop   
/* 004284E4 0006000D */  break 6
.L004284E8:
/* 004284E8 11000009 */  beqz  $t0, .L00428510
/* 004284EC 00000000 */   nop   
/* 004284F0 8F8B88B0 */  lw     $t3, %got(unaligned_load_store_tab)($gp)
/* 004284F4 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 004284F8 00003825 */  move  $a3, $zero
/* 004284FC 014B6021 */  addu  $t4, $t2, $t3
/* 00428500 0320F809 */  jalr  $t9
/* 00428504 95840000 */   lhu   $a0, ($t4)
/* 00428508 10000007 */  b     .L00428528
/* 0042850C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00428510:
/* 00428510 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 00428514 97A4002A */  lhu   $a0, 0x2a($sp)
/* 00428518 00003825 */  move  $a3, $zero
/* 0042851C 0320F809 */  jalr  $t9
/* 00428520 00000000 */   nop   
/* 00428524 8FBC0018 */  lw    $gp, 0x18($sp)
.L00428528:
/* 00428528 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0042852C 27BD0028 */  addiu $sp, $sp, 0x28
/* 00428530 03E00008 */  jr    $ra
/* 00428534 00000000 */   nop   
    .type unaligned_loadstore, @function
    .size unaligned_loadstore, .-unaligned_loadstore
    .end unaligned_loadstore

glabel eval_2ops
    .ent eval_2ops
    # 004285F0 eval_fp_cond
    # 00428A9C eval2
    # 0042BDAC eval
/* 00428538 3C1C0FBF */  .cpload $t9
/* 0042853C 279C7518 */  
/* 00428540 0399E021 */  
/* 00428544 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00428548 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042854C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00428550 8C8E0004 */  lw    $t6, 4($a0)
/* 00428554 8C870000 */  lw    $a3, ($a0)
/* 00428558 00803025 */  move  $a2, $a0
/* 0042855C AFAE0020 */  sw    $t6, 0x20($sp)
/* 00428560 91D90016 */  lbu   $t9, 0x16($t6)
/* 00428564 90EF0016 */  lbu   $t7, 0x16($a3)
/* 00428568 01F9082B */  sltu  $at, $t7, $t9
/* 0042856C 1420000F */  bnez  $at, .L004285AC
/* 00428570 00000000 */   nop   
/* 00428574 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00428578 00E02025 */  move  $a0, $a3
/* 0042857C 24050048 */  li    $a1, 72
/* 00428580 0320F809 */  jalr  $t9
/* 00428584 AFA60028 */   sw    $a2, 0x28($sp)
/* 00428588 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042858C 8FA60028 */  lw    $a2, 0x28($sp)
/* 00428590 24050048 */  li    $a1, 72
/* 00428594 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00428598 8CC40004 */  lw    $a0, 4($a2)
/* 0042859C 0320F809 */  jalr  $t9
/* 004285A0 00000000 */   nop   
/* 004285A4 1000000E */  b     .L004285E0
/* 004285A8 8FBC0018 */   lw    $gp, 0x18($sp)
.L004285AC:
/* 004285AC 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004285B0 8FA40020 */  lw    $a0, 0x20($sp)
/* 004285B4 24050048 */  li    $a1, 72
/* 004285B8 0320F809 */  jalr  $t9
/* 004285BC AFA60028 */   sw    $a2, 0x28($sp)
/* 004285C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004285C4 8FA60028 */  lw    $a2, 0x28($sp)
/* 004285C8 24050048 */  li    $a1, 72
/* 004285CC 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004285D0 8CC40000 */  lw    $a0, ($a2)
/* 004285D4 0320F809 */  jalr  $t9
/* 004285D8 00000000 */   nop   
/* 004285DC 8FBC0018 */  lw    $gp, 0x18($sp)
.L004285E0:
/* 004285E0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004285E4 27BD0028 */  addiu $sp, $sp, 0x28
/* 004285E8 03E00008 */  jr    $ra
/* 004285EC 00000000 */   nop   
    .type eval_2ops, @function
    .size eval_2ops, .-eval_2ops
    .end eval_2ops

glabel eval_fp_cond
    .ent eval_fp_cond
    # 0042BDAC eval
/* 004285F0 3C1C0FBF */  .cpload $t9
/* 004285F4 279C7460 */  
/* 004285F8 0399E021 */  
/* 004285FC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00428600 AFB00018 */  sw    $s0, 0x18($sp)
/* 00428604 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 00428608 00808025 */  move  $s0, $a0
/* 0042860C AFA50034 */  sw    $a1, 0x34($sp)
/* 00428610 92050021 */  lbu   $a1, 0x21($s0)
/* 00428614 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00428618 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042861C AFB1001C */  sw    $s1, 0x1c($sp)
/* 00428620 90840020 */  lbu   $a0, 0x20($a0)
/* 00428624 0320F809 */  jalr  $t9
/* 00428628 30A5001F */   andi  $a1, $a1, 0x1f
/* 0042862C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428630 3051FFFF */  andi  $s1, $v0, 0xffff
/* 00428634 02002025 */  move  $a0, $s0
/* 00428638 8F998374 */  lw    $t9, %call16(eval_2ops)($gp)
/* 0042863C 0320F809 */  jalr  $t9
/* 00428640 00000000 */   nop   
/* 00428644 920E0020 */  lbu   $t6, 0x20($s0)
/* 00428648 3C0100C0 */  lui   $at, 0xc0
/* 0042864C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428650 25CFFFE0 */  addiu $t7, $t6, -0x20
/* 00428654 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00428658 0018C823 */  negu  $t9, $t8
/* 0042865C 03214024 */  and   $t0, $t9, $at
/* 00428660 01E84804 */  sllv  $t1, $t0, $t7
/* 00428664 0521000F */  bgez  $t1, .L004286A4
/* 00428668 00000000 */   nop   
/* 0042866C 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00428670 8E040000 */  lw    $a0, ($s0)
/* 00428674 0320F809 */  jalr  $t9
/* 00428678 00000000 */   nop   
/* 0042867C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428680 8E040004 */  lw    $a0, 4($s0)
/* 00428684 A3A2002E */  sb    $v0, 0x2e($sp)
/* 00428688 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 0042868C 0320F809 */  jalr  $t9
/* 00428690 00000000 */   nop   
/* 00428694 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428698 93A6002E */  lbu   $a2, 0x2e($sp)
/* 0042869C 1000000E */  b     .L004286D8
/* 004286A0 304500FF */   andi  $a1, $v0, 0xff
.L004286A4:
/* 004286A4 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 004286A8 8E040000 */  lw    $a0, ($s0)
/* 004286AC 0320F809 */  jalr  $t9
/* 004286B0 00000000 */   nop   
/* 004286B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004286B8 8E040004 */  lw    $a0, 4($s0)
/* 004286BC A3A2002F */  sb    $v0, 0x2f($sp)
/* 004286C0 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 004286C4 0320F809 */  jalr  $t9
/* 004286C8 00000000 */   nop   
/* 004286CC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004286D0 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004286D4 304600FF */  andi  $a2, $v0, 0xff
.L004286D8:
/* 004286D8 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004286DC 02202025 */  move  $a0, $s1
/* 004286E0 0320F809 */  jalr  $t9
/* 004286E4 00000000 */   nop   
/* 004286E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004286EC 02002025 */  move  $a0, $s0
/* 004286F0 93A50037 */  lbu   $a1, 0x37($sp)
/* 004286F4 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 004286F8 0320F809 */  jalr  $t9
/* 004286FC 00000000 */   nop   
/* 00428700 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428704 A3A20037 */  sb    $v0, 0x37($sp)
/* 00428708 24040031 */  li    $a0, 49
/* 0042870C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00428710 304500FF */  andi  $a1, $v0, 0xff
/* 00428714 00003025 */  move  $a2, $zero
/* 00428718 0320F809 */  jalr  $t9
/* 0042871C 00000000 */   nop   
/* 00428720 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428724 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00428728 0320F809 */  jalr  $t9
/* 0042872C 00000000 */   nop   
/* 00428730 920A0020 */  lbu   $t2, 0x20($s0)
/* 00428734 2401005F */  li    $at, 95
/* 00428738 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042873C 00402825 */  move  $a1, $v0
/* 00428740 15410002 */  bne   $t2, $at, .L0042874C
/* 00428744 24110007 */   li    $s1, 7
/* 00428748 24110008 */  li    $s1, 8
.L0042874C:
/* 0042874C 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 00428750 02202025 */  move  $a0, $s1
/* 00428754 AFA50028 */  sw    $a1, 0x28($sp)
/* 00428758 0320F809 */  jalr  $t9
/* 0042875C 00000000 */   nop   
/* 00428760 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428764 24040029 */  li    $a0, 41
/* 00428768 93A50037 */  lbu   $a1, 0x37($sp)
/* 0042876C 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00428770 24060001 */  li    $a2, 1
/* 00428774 00003825 */  move  $a3, $zero
/* 00428778 0320F809 */  jalr  $t9
/* 0042877C 00000000 */   nop   
/* 00428780 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428784 8FA40028 */  lw    $a0, 0x28($sp)
/* 00428788 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042878C 0320F809 */  jalr  $t9
/* 00428790 00000000 */   nop   
/* 00428794 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00428798 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042879C 8FB00018 */  lw    $s0, 0x18($sp)
/* 004287A0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004287A4 03E00008 */  jr    $ra
/* 004287A8 27BD0030 */   addiu $sp, $sp, 0x30
    .type eval_fp_cond, @function
    .size eval_fp_cond, .-eval_fp_cond
    .end eval_fp_cond

glabel eval_fp_min_max
    .ent eval_fp_min_max
    # 0042BDAC eval
/* 004287AC 3C1C0FBF */  .cpload $t9
/* 004287B0 279C72A4 */  
/* 004287B4 0399E021 */  
/* 004287B8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004287BC AFB2001C */  sw    $s2, 0x1c($sp)
/* 004287C0 AFB00014 */  sw    $s0, 0x14($sp)
/* 004287C4 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 004287C8 00808025 */  move  $s0, $a0
/* 004287CC 30B200FF */  andi  $s2, $a1, 0xff
/* 004287D0 AFA5003C */  sw    $a1, 0x3c($sp)
/* 004287D4 92050021 */  lbu   $a1, 0x21($s0)
/* 004287D8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004287DC AFBC0020 */  sw    $gp, 0x20($sp)
/* 004287E0 AFB10018 */  sw    $s1, 0x18($sp)
/* 004287E4 90840020 */  lbu   $a0, 0x20($a0)
/* 004287E8 0320F809 */  jalr  $t9
/* 004287EC 30A5001F */   andi  $a1, $a1, 0x1f
/* 004287F0 920E0020 */  lbu   $t6, 0x20($s0)
/* 004287F4 24010055 */  li    $at, 85
/* 004287F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004287FC A7A20036 */  sh    $v0, 0x36($sp)
/* 00428800 15C10002 */  bne   $t6, $at, .L0042880C
/* 00428804 24030008 */   li    $v1, 8
/* 00428808 24030007 */  li    $v1, 7
.L0042880C:
/* 0042880C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00428810 8E040000 */  lw    $a0, ($s0)
/* 00428814 24050048 */  li    $a1, 72
/* 00428818 0320F809 */  jalr  $t9
/* 0042881C A7A30034 */   sh    $v1, 0x34($sp)
/* 00428820 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428824 8E040004 */  lw    $a0, 4($s0)
/* 00428828 24050048 */  li    $a1, 72
/* 0042882C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00428830 0320F809 */  jalr  $t9
/* 00428834 00000000 */   nop   
/* 00428838 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042883C 8E040000 */  lw    $a0, ($s0)
/* 00428840 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00428844 0320F809 */  jalr  $t9
/* 00428848 00000000 */   nop   
/* 0042884C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428850 305100FF */  andi  $s1, $v0, 0xff
/* 00428854 8E040004 */  lw    $a0, 4($s0)
/* 00428858 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 0042885C 0320F809 */  jalr  $t9
/* 00428860 00000000 */   nop   
/* 00428864 24010048 */  li    $at, 72
/* 00428868 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042886C 12410007 */  beq   $s2, $at, .L0042888C
/* 00428870 A3A2002E */   sb    $v0, 0x2e($sp)
/* 00428874 264FFFE0 */  addiu $t7, $s2, -0x20
/* 00428878 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0042887C 0018C823 */  negu  $t9, $t8
/* 00428880 01F94004 */  sllv  $t0, $t9, $t7
/* 00428884 05000042 */  bltz  $t0, .L00428990
/* 00428888 02402025 */   move  $a0, $s2
.L0042888C:
/* 0042888C 8F998534 */  lw    $t9, %call16(usage_count)($gp)
/* 00428890 02202025 */  move  $a0, $s1
/* 00428894 0320F809 */  jalr  $t9
/* 00428898 00000000 */   nop   
/* 0042889C 14400014 */  bnez  $v0, .L004288F0
/* 004288A0 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004288A4 8F99852C */  lw    $t9, %call16(is_available)($gp)
/* 004288A8 02202025 */  move  $a0, $s1
/* 004288AC 0320F809 */  jalr  $t9
/* 004288B0 00000000 */   nop   
/* 004288B4 1040000E */  beqz  $v0, .L004288F0
/* 004288B8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004288BC 92090021 */  lbu   $t1, 0x21($s0)
/* 004288C0 8F8B8898 */  lw     $t3, %got(reg_kind_tab)($gp)
/* 004288C4 8F9984E0 */  lw    $t9, %call16(get_fp_reg)($gp)
/* 004288C8 312A001F */  andi  $t2, $t1, 0x1f
/* 004288CC 014B6021 */  addu  $t4, $t2, $t3
/* 004288D0 323200FF */  andi  $s2, $s1, 0xff
/* 004288D4 91860000 */  lbu   $a2, ($t4)
/* 004288D8 02202025 */  move  $a0, $s1
/* 004288DC 02002825 */  move  $a1, $s0
/* 004288E0 0320F809 */  jalr  $t9
/* 004288E4 96070014 */   lhu   $a3, 0x14($s0)
/* 004288E8 10000033 */  b     .L004289B8
/* 004288EC 8FBC0020 */   lw    $gp, 0x20($sp)
.L004288F0:
/* 004288F0 8F998534 */  lw    $t9, %call16(usage_count)($gp)
/* 004288F4 93A4002E */  lbu   $a0, 0x2e($sp)
/* 004288F8 0320F809 */  jalr  $t9
/* 004288FC 00000000 */   nop   
/* 00428900 14400017 */  bnez  $v0, .L00428960
/* 00428904 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00428908 8F99852C */  lw    $t9, %call16(is_available)($gp)
/* 0042890C 93A4002E */  lbu   $a0, 0x2e($sp)
/* 00428910 0320F809 */  jalr  $t9
/* 00428914 00000000 */   nop   
/* 00428918 10400011 */  beqz  $v0, .L00428960
/* 0042891C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00428920 920D0021 */  lbu   $t5, 0x21($s0)
/* 00428924 8F988898 */  lw     $t8, %got(reg_kind_tab)($gp)
/* 00428928 02201025 */  move  $v0, $s1
/* 0042892C 93B1002E */  lbu   $s1, 0x2e($sp)
/* 00428930 31AE001F */  andi  $t6, $t5, 0x1f
/* 00428934 A3A2002E */  sb    $v0, 0x2e($sp)
/* 00428938 01D8C821 */  addu  $t9, $t6, $t8
/* 0042893C 93260000 */  lbu   $a2, ($t9)
/* 00428940 8F9984E0 */  lw    $t9, %call16(get_fp_reg)($gp)
/* 00428944 02002825 */  move  $a1, $s0
/* 00428948 96070014 */  lhu   $a3, 0x14($s0)
/* 0042894C 02209025 */  move  $s2, $s1
/* 00428950 0320F809 */  jalr  $t9
/* 00428954 02202025 */   move  $a0, $s1
/* 00428958 10000017 */  b     .L004289B8
/* 0042895C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00428960:
/* 00428960 920F0021 */  lbu   $t7, 0x21($s0)
/* 00428964 8F898898 */  lw     $t1, %got(reg_kind_tab)($gp)
/* 00428968 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 0042896C 31E8001F */  andi  $t0, $t7, 0x1f
/* 00428970 01095021 */  addu  $t2, $t0, $t1
/* 00428974 91450000 */  lbu   $a1, ($t2)
/* 00428978 02002025 */  move  $a0, $s0
/* 0042897C 0320F809 */  jalr  $t9
/* 00428980 96060014 */   lhu   $a2, 0x14($s0)
/* 00428984 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428988 1000000B */  b     .L004289B8
/* 0042898C 305200FF */   andi  $s2, $v0, 0xff
.L00428990:
/* 00428990 920B0021 */  lbu   $t3, 0x21($s0)
/* 00428994 8F8D8898 */  lw     $t5, %got(reg_kind_tab)($gp)
/* 00428998 8F9984E0 */  lw    $t9, %call16(get_fp_reg)($gp)
/* 0042899C 316C001F */  andi  $t4, $t3, 0x1f
/* 004289A0 018D7021 */  addu  $t6, $t4, $t5
/* 004289A4 91C60000 */  lbu   $a2, ($t6)
/* 004289A8 02002825 */  move  $a1, $s0
/* 004289AC 0320F809 */  jalr  $t9
/* 004289B0 96070014 */   lhu   $a3, 0x14($s0)
/* 004289B4 8FBC0020 */  lw    $gp, 0x20($sp)
.L004289B8:
/* 004289B8 92020019 */  lbu   $v0, 0x19($s0)
/* 004289BC 93AB002E */  lbu   $t3, 0x2e($sp)
/* 004289C0 0002C600 */  sll   $t8, $v0, 0x18
/* 004289C4 0018CE42 */  srl   $t9, $t8, 0x19
/* 004289C8 02597826 */  xor   $t7, $s2, $t9
/* 004289CC 000F4640 */  sll   $t0, $t7, 0x19
/* 004289D0 00084E02 */  srl   $t1, $t0, 0x18
/* 004289D4 01225026 */  xor   $t2, $t1, $v0
/* 004289D8 164B0003 */  bne   $s2, $t3, .L004289E8
/* 004289DC A20A0019 */   sb    $t2, 0x19($s0)
/* 004289E0 10000009 */  b     .L00428A08
/* 004289E4 A3B1002E */   sb    $s1, 0x2e($sp)
.L004289E8:
/* 004289E8 12510007 */  beq   $s2, $s1, .L00428A08
/* 004289EC 02402025 */   move  $a0, $s2
/* 004289F0 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 004289F4 92060021 */  lbu   $a2, 0x21($s0)
/* 004289F8 02202825 */  move  $a1, $s1
/* 004289FC 0320F809 */  jalr  $t9
/* 00428A00 30C6001F */   andi  $a2, $a2, 0x1f
/* 00428A04 8FBC0020 */  lw    $gp, 0x20($sp)
.L00428A08:
/* 00428A08 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00428A0C 0320F809 */  jalr  $t9
/* 00428A10 00000000 */   nop   
/* 00428A14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428A18 00408825 */  move  $s1, $v0
/* 00428A1C 97A40036 */  lhu   $a0, 0x36($sp)
/* 00428A20 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00428A24 02402825 */  move  $a1, $s2
/* 00428A28 93A6002E */  lbu   $a2, 0x2e($sp)
/* 00428A2C 0320F809 */  jalr  $t9
/* 00428A30 00000000 */   nop   
/* 00428A34 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428A38 97A40034 */  lhu   $a0, 0x34($sp)
/* 00428A3C 02202825 */  move  $a1, $s1
/* 00428A40 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 00428A44 0320F809 */  jalr  $t9
/* 00428A48 00000000 */   nop   
/* 00428A4C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428A50 92060021 */  lbu   $a2, 0x21($s0)
/* 00428A54 02402025 */  move  $a0, $s2
/* 00428A58 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00428A5C 93A5002E */  lbu   $a1, 0x2e($sp)
/* 00428A60 30C6001F */  andi  $a2, $a2, 0x1f
/* 00428A64 0320F809 */  jalr  $t9
/* 00428A68 00000000 */   nop   
/* 00428A6C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428A70 02202025 */  move  $a0, $s1
/* 00428A74 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00428A78 0320F809 */  jalr  $t9
/* 00428A7C 00000000 */   nop   
/* 00428A80 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00428A84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428A88 8FB00014 */  lw    $s0, 0x14($sp)
/* 00428A8C 8FB10018 */  lw    $s1, 0x18($sp)
/* 00428A90 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00428A94 03E00008 */  jr    $ra
/* 00428A98 27BD0038 */   addiu $sp, $sp, 0x38
    .type eval_fp_min_max, @function
    .size eval_fp_min_max, .-eval_fp_min_max
    .end eval_fp_min_max

glabel eval2
    .ent eval2
    # 0042BDAC eval
/* 00428A9C 3C1C0FBF */  .cpload $t9
/* 00428AA0 279C6FB4 */  
/* 00428AA4 0399E021 */  
/* 00428AA8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00428AAC 8F998374 */  lw    $t9, %call16(eval_2ops)($gp)
/* 00428AB0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00428AB4 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00428AB8 AFA40030 */  sw    $a0, 0x30($sp)
/* 00428ABC 00A08025 */  move  $s0, $a1
/* 00428AC0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00428AC4 AFA60038 */  sw    $a2, 0x38($sp)
/* 00428AC8 0320F809 */  jalr  $t9
/* 00428ACC 00A02025 */   move  $a0, $a1
/* 00428AD0 92020021 */  lbu   $v0, 0x21($s0)
/* 00428AD4 3C01000C */  lui   $at, 0xc
/* 00428AD8 34218000 */  ori   $at, $at, 0x8000
/* 00428ADC 3042001F */  andi  $v0, $v0, 0x1f
/* 00428AE0 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 00428AE4 000E7823 */  negu  $t7, $t6
/* 00428AE8 01E1C024 */  and   $t8, $t7, $at
/* 00428AEC 0058C804 */  sllv  $t9, $t8, $v0
/* 00428AF0 07210009 */  bgez  $t9, .L00428B18
/* 00428AF4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00428AF8 8F998344 */  lw    $t9, %call16(binary_flt_regs)($gp)
/* 00428AFC 8E040000 */  lw    $a0, ($s0)
/* 00428B00 8E050004 */  lw    $a1, 4($s0)
/* 00428B04 27A6002F */  addiu $a2, $sp, 0x2f
/* 00428B08 0320F809 */  jalr  $t9
/* 00428B0C 27A7002E */   addiu $a3, $sp, 0x2e
/* 00428B10 10000016 */  b     .L00428B6C
/* 00428B14 8FBC0020 */   lw    $gp, 0x20($sp)
.L00428B18:
/* 00428B18 2C480020 */  sltiu $t0, $v0, 0x20
/* 00428B1C 00084823 */  negu  $t1, $t0
/* 00428B20 3C010501 */  lui   $at, 0x501
/* 00428B24 01215024 */  and   $t2, $t1, $at
/* 00428B28 004A5804 */  sllv  $t3, $t2, $v0
/* 00428B2C 05610009 */  bgez  $t3, .L00428B54
/* 00428B30 27A6002F */   addiu $a2, $sp, 0x2f
/* 00428B34 8F99833C */  lw    $t9, %call16(binary_regs)($gp)
/* 00428B38 8E040000 */  lw    $a0, ($s0)
/* 00428B3C 8E050004 */  lw    $a1, 4($s0)
/* 00428B40 27A6002F */  addiu $a2, $sp, 0x2f
/* 00428B44 0320F809 */  jalr  $t9
/* 00428B48 27A7002E */   addiu $a3, $sp, 0x2e
/* 00428B4C 10000007 */  b     .L00428B6C
/* 00428B50 8FBC0020 */   lw    $gp, 0x20($sp)
.L00428B54:
/* 00428B54 8F99833C */  lw    $t9, %call16(binary_regs)($gp)
/* 00428B58 8E040000 */  lw    $a0, ($s0)
/* 00428B5C 8E050004 */  lw    $a1, 4($s0)
/* 00428B60 0320F809 */  jalr  $t9
/* 00428B64 27A7002E */   addiu $a3, $sp, 0x2e
/* 00428B68 8FBC0020 */  lw    $gp, 0x20($sp)
.L00428B6C:
/* 00428B6C 920C0021 */  lbu   $t4, 0x21($s0)
/* 00428B70 3C01000C */  lui   $at, 0xc
/* 00428B74 34218000 */  ori   $at, $at, 0x8000
/* 00428B78 318D001F */  andi  $t5, $t4, 0x1f
/* 00428B7C 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 00428B80 000E7823 */  negu  $t7, $t6
/* 00428B84 01E1C024 */  and   $t8, $t7, $at
/* 00428B88 01B8C804 */  sllv  $t9, $t8, $t5
/* 00428B8C 07210008 */  bgez  $t9, .L00428BB0
/* 00428B90 93A8003B */   lbu   $t0, 0x3b($sp)
/* 00428B94 2509FFE0 */  addiu $t1, $t0, -0x20
/* 00428B98 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 00428B9C 000A5823 */  negu  $t3, $t2
/* 00428BA0 012B6004 */  sllv  $t4, $t3, $t1
/* 00428BA4 05800002 */  bltz  $t4, .L00428BB0
/* 00428BA8 240E0048 */   li    $t6, 72
/* 00428BAC A3AE003B */  sb    $t6, 0x3b($sp)
.L00428BB0:
/* 00428BB0 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00428BB4 02002025 */  move  $a0, $s0
/* 00428BB8 93A5003B */  lbu   $a1, 0x3b($sp)
/* 00428BBC 0320F809 */  jalr  $t9
/* 00428BC0 00000000 */   nop   
/* 00428BC4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428BC8 97A40032 */  lhu   $a0, 0x32($sp)
/* 00428BCC 304500FF */  andi  $a1, $v0, 0xff
/* 00428BD0 8F9982D0 */  lw    $t9, %call16(dw_emit_rrr)($gp)
/* 00428BD4 93A6002F */  lbu   $a2, 0x2f($sp)
/* 00428BD8 93A7002E */  lbu   $a3, 0x2e($sp)
/* 00428BDC 0320F809 */  jalr  $t9
/* 00428BE0 AFB00010 */   sw    $s0, 0x10($sp)
/* 00428BE4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00428BE8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00428BEC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00428BF0 03E00008 */  jr    $ra
/* 00428BF4 27BD0030 */   addiu $sp, $sp, 0x30
    .type eval2, @function
    .size eval2, .-eval2
    .end eval2

glabel ureg
    .ent ureg
    # 0042BDAC eval
    # 004340D4 func_004340D4
    # 004432FC translate
/* 00428BF8 908E0001 */  lbu   $t6, 1($a0)
/* 00428BFC 24010003 */  li    $at, 3
/* 00428C00 24020048 */  li    $v0, 72
/* 00428C04 000E7E00 */  sll   $t7, $t6, 0x18
/* 00428C08 000FC742 */  srl   $t8, $t7, 0x1d
/* 00428C0C 17010008 */  bne   $t8, $at, .L00428C30
/* 00428C10 00000000 */   nop   
/* 00428C14 8C82000C */  lw    $v0, 0xc($a0)
/* 00428C18 04410002 */  bgez  $v0, .L00428C24
/* 00428C1C 00400821 */   move  $at, $v0
/* 00428C20 24410003 */  addiu $at, $v0, 3
.L00428C24:
/* 00428C24 00011083 */  sra   $v0, $at, 2
/* 00428C28 03E00008 */  jr    $ra
/* 00428C2C 00000000 */   nop   

.L00428C30:
/* 00428C30 03E00008 */  jr    $ra
/* 00428C34 00000000 */   nop   
    .type ureg, @function
    .size ureg, .-ureg
    .end ureg

glabel copy
    .ent copy
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
/* 00428C38 3C1C0FBF */  .cpload $t9
/* 00428C3C 279C6E18 */  
/* 00428C40 0399E021 */  
/* 00428C44 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00428C48 AFB00014 */  sw    $s0, 0x14($sp)
/* 00428C4C 309000FF */  andi  $s0, $a0, 0xff
/* 00428C50 2E0E0020 */  sltiu $t6, $s0, 0x20
/* 00428C54 000E7823 */  negu  $t7, $t6
/* 00428C58 020FC004 */  sllv  $t8, $t7, $s0
/* 00428C5C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00428C60 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00428C64 AFA40028 */  sw    $a0, 0x28($sp)
/* 00428C68 030002B0 */  tge   $t8, $zero, 0xa
/* 00428C6C 8F998534 */  lw    $t9, %call16(usage_count)($gp)
/* 00428C70 02002025 */  move  $a0, $s0
/* 00428C74 0320F809 */  jalr  $t9
/* 00428C78 00000000 */   nop   
/* 00428C7C 1440000F */  bnez  $v0, .L00428CBC
/* 00428C80 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00428C84 8F99852C */  lw    $t9, %call16(is_available)($gp)
/* 00428C88 02002025 */  move  $a0, $s0
/* 00428C8C 0320F809 */  jalr  $t9
/* 00428C90 00000000 */   nop   
/* 00428C94 10400009 */  beqz  $v0, .L00428CBC
/* 00428C98 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00428C9C 8F9984D8 */  lw    $t9, %call16(get_reg)($gp)
/* 00428CA0 02002025 */  move  $a0, $s0
/* 00428CA4 00002825 */  move  $a1, $zero
/* 00428CA8 0320F809 */  jalr  $t9
/* 00428CAC 24060001 */   li    $a2, 1
/* 00428CB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00428CB4 10000012 */  b     .L00428D00
/* 00428CB8 02001025 */   move  $v0, $s0
.L00428CBC:
/* 00428CBC 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00428CC0 00002025 */  move  $a0, $zero
/* 00428CC4 24050001 */  li    $a1, 1
/* 00428CC8 0320F809 */  jalr  $t9
/* 00428CCC 00000000 */   nop   
/* 00428CD0 305900FF */  andi  $t9, $v0, 0xff
/* 00428CD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00428CD8 12190008 */  beq   $s0, $t9, .L00428CFC
/* 00428CDC 304500FF */   andi  $a1, $v0, 0xff
/* 00428CE0 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00428CE4 24040031 */  li    $a0, 49
/* 00428CE8 02003025 */  move  $a2, $s0
/* 00428CEC 0320F809 */  jalr  $t9
/* 00428CF0 A3A50026 */   sb    $a1, 0x26($sp)
/* 00428CF4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00428CF8 93A50026 */  lbu   $a1, 0x26($sp)
.L00428CFC:
/* 00428CFC 00A01025 */  move  $v0, $a1
.L00428D00:
/* 00428D00 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00428D04 8FB00014 */  lw    $s0, 0x14($sp)
/* 00428D08 27BD0028 */  addiu $sp, $sp, 0x28
/* 00428D0C 03E00008 */  jr    $ra
/* 00428D10 00000000 */   nop   
    .type copy, @function
    .size copy, .-copy
    .end copy

glabel eval_mov
    .ent eval_mov
    # 0042BDAC eval
/* 00428D14 3C1C0FBF */  .cpload $t9
/* 00428D18 279C6D3C */  
/* 00428D1C 0399E021 */  
/* 00428D20 27BDFEE0 */  addiu $sp, $sp, -0x120
/* 00428D24 AFBF00C4 */  sw    $ra, 0xc4($sp)
/* 00428D28 AFBC00C0 */  sw    $gp, 0xc0($sp)
/* 00428D2C AFB300BC */  sw    $s3, 0xbc($sp)
/* 00428D30 AFB200B8 */  sw    $s2, 0xb8($sp)
/* 00428D34 AFB100B4 */  sw    $s1, 0xb4($sp)
/* 00428D38 AFB000B0 */  sw    $s0, 0xb0($sp)
/* 00428D3C 908E0020 */  lbu   $t6, 0x20($a0)
/* 00428D40 24010058 */  li    $at, 88
/* 00428D44 00808025 */  move  $s0, $a0
/* 00428D48 15C1000F */  bne   $t6, $at, .L00428D88
/* 00428D4C 8C910028 */   lw    $s1, 0x28($a0)
/* 00428D50 8C8F0024 */  lw    $t7, 0x24($a0)
/* 00428D54 AFAF0118 */  sw    $t7, 0x118($sp)
/* 00428D58 94820022 */  lhu   $v0, 0x22($a0)
/* 00428D5C 8FB80118 */  lw    $t8, 0x118($sp)
/* 00428D60 50400004 */  beql  $v0, $zero, .L00428D74
/* 00428D64 AFB80114 */   sw    $t8, 0x114($sp)
/* 00428D68 10000002 */  b     .L00428D74
/* 00428D6C AFA20114 */   sw    $v0, 0x114($sp)
/* 00428D70 AFB80114 */  sw    $t8, 0x114($sp)
.L00428D74:
/* 00428D74 8E190000 */  lw    $t9, ($s0)
/* 00428D78 8E080004 */  lw    $t0, 4($s0)
/* 00428D7C AFB90110 */  sw    $t9, 0x110($sp)
/* 00428D80 10000007 */  b     .L00428DA0
/* 00428D84 AFA8010C */   sw    $t0, 0x10c($sp)
.L00428D88:
/* 00428D88 96090022 */  lhu   $t1, 0x22($s0)
/* 00428D8C 8E0B0000 */  lw    $t3, ($s0)
/* 00428D90 AFA00110 */  sw    $zero, 0x110($sp)
/* 00428D94 AFA90118 */  sw    $t1, 0x118($sp)
/* 00428D98 AFA90114 */  sw    $t1, 0x114($sp)
/* 00428D9C AFAB010C */  sw    $t3, 0x10c($sp)
.L00428DA0:
/* 00428DA0 8FAC0118 */  lw    $t4, 0x118($sp)
/* 00428DA4 8FAE0114 */  lw    $t6, 0x114($sp)
/* 00428DA8 8FB80110 */  lw    $t8, 0x110($sp)
/* 00428DAC 05810003 */  bgez  $t4, .L00428DBC
/* 00428DB0 000C68C3 */   sra   $t5, $t4, 3
/* 00428DB4 25810007 */  addiu $at, $t4, 7
/* 00428DB8 000168C3 */  sra   $t5, $at, 3
.L00428DBC:
/* 00428DBC AFAD0118 */  sw    $t5, 0x118($sp)
/* 00428DC0 05C10003 */  bgez  $t6, .L00428DD0
/* 00428DC4 000E78C3 */   sra   $t7, $t6, 3
/* 00428DC8 25C10007 */  addiu $at, $t6, 7
/* 00428DCC 000178C3 */  sra   $t7, $at, 3
.L00428DD0:
/* 00428DD0 AFAF0114 */  sw    $t7, 0x114($sp)
/* 00428DD4 1300001A */  beqz  $t8, .L00428E40
/* 00428DD8 00009825 */   move  $s3, $zero
/* 00428DDC 97190014 */  lhu   $t9, 0x14($t8)
/* 00428DE0 24020001 */  li    $v0, 1
/* 00428DE4 54590017 */  bnel  $v0, $t9, .L00428E44
/* 00428DE8 8FAC010C */   lw    $t4, 0x10c($sp)
/* 00428DEC 93080020 */  lbu   $t0, 0x20($t8)
/* 00428DF0 54480014 */  bnel  $v0, $t0, .L00428E44
/* 00428DF4 8FAC010C */   lw    $t4, 0x10c($sp)
/* 00428DF8 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00428DFC 8F040004 */  lw    $a0, 4($t8)
/* 00428E00 0320F809 */  jalr  $t9
/* 00428E04 00000000 */   nop   
/* 00428E08 1040000D */  beqz  $v0, .L00428E40
/* 00428E0C 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00428E10 8FA90110 */  lw    $t1, 0x110($sp)
/* 00428E14 8D2A0004 */  lw    $t2, 4($t1)
/* 00428E18 8D420030 */  lw    $v0, 0x30($t2)
/* 00428E1C 28418000 */  slti  $at, $v0, -0x8000
/* 00428E20 14200007 */  bnez  $at, .L00428E40
/* 00428E24 34018000 */   li    $at, 32768
/* 00428E28 0041082A */  slt   $at, $v0, $at
/* 00428E2C 50200005 */  beql  $at, $zero, .L00428E44
/* 00428E30 8FAC010C */   lw    $t4, 0x10c($sp)
/* 00428E34 8D2B0000 */  lw    $t3, ($t1)
/* 00428E38 00409825 */  move  $s3, $v0
/* 00428E3C AFAB0110 */  sw    $t3, 0x110($sp)
.L00428E40:
/* 00428E40 8FAC010C */  lw    $t4, 0x10c($sp)
.L00428E44:
/* 00428E44 24020001 */  li    $v0, 1
/* 00428E48 00009025 */  move  $s2, $zero
/* 00428E4C 958D0014 */  lhu   $t5, 0x14($t4)
/* 00428E50 544D0017 */  bnel  $v0, $t5, .L00428EB0
/* 00428E54 2E380020 */   sltiu $t8, $s1, 0x20
/* 00428E58 918E0020 */  lbu   $t6, 0x20($t4)
/* 00428E5C 544E0014 */  bnel  $v0, $t6, .L00428EB0
/* 00428E60 2E380020 */   sltiu $t8, $s1, 0x20
/* 00428E64 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00428E68 8D840004 */  lw    $a0, 4($t4)
/* 00428E6C 0320F809 */  jalr  $t9
/* 00428E70 00000000 */   nop   
/* 00428E74 1040000D */  beqz  $v0, .L00428EAC
/* 00428E78 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00428E7C 8FAF010C */  lw    $t7, 0x10c($sp)
/* 00428E80 8DF90004 */  lw    $t9, 4($t7)
/* 00428E84 8F220030 */  lw    $v0, 0x30($t9)
/* 00428E88 28418000 */  slti  $at, $v0, -0x8000
/* 00428E8C 14200007 */  bnez  $at, .L00428EAC
/* 00428E90 34018000 */   li    $at, 32768
/* 00428E94 0041082A */  slt   $at, $v0, $at
/* 00428E98 50200005 */  beql  $at, $zero, .L00428EB0
/* 00428E9C 2E380020 */   sltiu $t8, $s1, 0x20
/* 00428EA0 8DE80000 */  lw    $t0, ($t7)
/* 00428EA4 00409025 */  move  $s2, $v0
/* 00428EA8 AFA8010C */  sw    $t0, 0x10c($sp)
.L00428EAC:
/* 00428EAC 2E380020 */  sltiu $t8, $s1, 0x20
.L00428EB0:
/* 00428EB0 00185023 */  negu  $t2, $t8
/* 00428EB4 3C016800 */  lui   $at, 0x6800
/* 00428EB8 01414824 */  and   $t1, $t2, $at
/* 00428EBC 02295804 */  sllv  $t3, $t1, $s1
/* 00428EC0 05610181 */  bgez  $t3, .L004294C8
/* 00428EC4 24020001 */   li    $v0, 1
/* 00428EC8 8FAD0118 */  lw    $t5, 0x118($sp)
/* 00428ECC 8FAE0114 */  lw    $t6, 0x114($sp)
/* 00428ED0 2DA10002 */  sltiu $at, $t5, 2
/* 00428ED4 14200002 */  bnez  $at, .L00428EE0
/* 00428ED8 2DC10002 */   sltiu $at, $t6, 2
/* 00428EDC 10200003 */  beqz  $at, .L00428EEC
.L00428EE0:
/* 00428EE0 24010002 */   li    $at, 2
/* 00428EE4 52210179 */  beql  $s1, $at, .L004294CC
/* 00428EE8 8FB80110 */   lw    $t8, 0x110($sp)
.L00428EEC:
/* 00428EEC 8FAC0110 */  lw    $t4, 0x110($sp)
/* 00428EF0 8FA8010C */  lw    $t0, 0x10c($sp)
/* 00428EF4 51800009 */  beql  $t4, $zero, .L00428F1C
/* 00428EF8 95180014 */   lhu   $t8, 0x14($t0)
/* 00428EFC 95990014 */  lhu   $t9, 0x14($t4)
/* 00428F00 54590172 */  bnel  $v0, $t9, .L004294CC
/* 00428F04 8FB80110 */   lw    $t8, 0x110($sp)
/* 00428F08 918F0020 */  lbu   $t7, 0x20($t4)
/* 00428F0C 24010047 */  li    $at, 71
/* 00428F10 55E1016E */  bnel  $t7, $at, .L004294CC
/* 00428F14 8FB80110 */   lw    $t8, 0x110($sp)
/* 00428F18 95180014 */  lhu   $t8, 0x14($t0)
.L00428F1C:
/* 00428F1C 5458016B */  bnel  $v0, $t8, .L004294CC
/* 00428F20 8FB80110 */   lw    $t8, 0x110($sp)
/* 00428F24 910A0020 */  lbu   $t2, 0x20($t0)
/* 00428F28 24010047 */  li    $at, 71
/* 00428F2C 55410167 */  bnel  $t2, $at, .L004294CC
/* 00428F30 8FB80110 */   lw    $t8, 0x110($sp)
/* 00428F34 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00428F38 00002025 */  move  $a0, $zero
/* 00428F3C 00402825 */  move  $a1, $v0
/* 00428F40 0320F809 */  jalr  $t9
/* 00428F44 00000000 */   nop   
/* 00428F48 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00428F4C A3A200FF */  sb    $v0, 0xff($sp)
/* 00428F50 304400FF */  andi  $a0, $v0, 0xff
/* 00428F54 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00428F58 0320F809 */  jalr  $t9
/* 00428F5C 00000000 */   nop   
/* 00428F60 2629FFFF */  addiu $t1, $s1, -1
/* 00428F64 2D210004 */  sltiu $at, $t1, 4
/* 00428F68 10200024 */  beqz  $at, .L00428FFC
/* 00428F6C 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00428F70 8F818038 */  lw    $at, %got(jtbl_1000A73C)($gp)
/* 00428F74 00094880 */  sll   $t1, $t1, 2
/* 00428F78 00290821 */  addu  $at, $at, $t1
/* 00428F7C 8C29A73C */  lw    $t1, %lo(jtbl_1000A73C)($at)
/* 00428F80 013C4821 */  addu  $t1, $t1, $gp
/* 00428F84 01200008 */  jr    $t1
/* 00428F88 00000000 */   nop   
.L00428F8C:
/* 00428F8C 240B0026 */  li    $t3, 38
/* 00428F90 240D0046 */  li    $t5, 70
/* 00428F94 A7AB0102 */  sh    $t3, 0x102($sp)
/* 00428F98 10000020 */  b     .L0042901C
/* 00428F9C A7AD0100 */   sh    $t5, 0x100($sp)
.L00428FA0:
/* 00428FA0 240E0028 */  li    $t6, 40
/* 00428FA4 2419004C */  li    $t9, 76
/* 00428FA8 A7AE0102 */  sh    $t6, 0x102($sp)
/* 00428FAC 1000001B */  b     .L0042901C
/* 00428FB0 A7B90100 */   sh    $t9, 0x100($sp)
.L00428FB4:
/* 00428FB4 8FAC0118 */  lw    $t4, 0x118($sp)
/* 00428FB8 240F00CE */  li    $t7, 206
/* 00428FBC 2418002A */  li    $t8, 42
/* 00428FC0 29810004 */  slti  $at, $t4, 4
/* 00428FC4 10200003 */  beqz  $at, .L00428FD4
/* 00428FC8 24090057 */   li    $t1, 87
/* 00428FCC 10000002 */  b     .L00428FD8
/* 00428FD0 A7AF0102 */   sh    $t7, 0x102($sp)
.L00428FD4:
/* 00428FD4 A7B80102 */  sh    $t8, 0x102($sp)
.L00428FD8:
/* 00428FD8 8FA80114 */  lw    $t0, 0x114($sp)
/* 00428FDC 240A00D1 */  li    $t2, 209
/* 00428FE0 29010004 */  slti  $at, $t0, 4
/* 00428FE4 10200003 */  beqz  $at, .L00428FF4
/* 00428FE8 00000000 */   nop   
/* 00428FEC 1000000B */  b     .L0042901C
/* 00428FF0 A7AA0100 */   sh    $t2, 0x100($sp)
.L00428FF4:
/* 00428FF4 10000009 */  b     .L0042901C
/* 00428FF8 A7A90100 */   sh    $t1, 0x100($sp)
.L00428FFC:
/* 00428FFC 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 00429000 8F868038 */  lw    $a2, %got(RO_1000A736)($gp)
/* 00429004 24040001 */  li    $a0, 1
/* 00429008 240509C4 */  li    $a1, 2500
/* 0042900C 24070006 */  li    $a3, 6
/* 00429010 0320F809 */  jalr  $t9
/* 00429014 24C6A736 */   addiu $a2, %lo(RO_1000A736) # addiu $a2, $a2, -0x58ca
/* 00429018 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L0042901C:
/* 0042901C 8FA3010C */  lw    $v1, 0x10c($sp)
/* 00429020 90620021 */  lbu   $v0, 0x21($v1)
/* 00429024 00021600 */  sll   $v0, $v0, 0x18
/* 00429028 00021742 */  srl   $v0, $v0, 0x1d
/* 0042902C 304200FF */  andi  $v0, $v0, 0xff
/* 00429030 244BFFFF */  addiu $t3, $v0, -1
/* 00429034 2D610004 */  sltiu $at, $t3, 4
/* 00429038 1020004C */  beqz  $at, .L0042916C
/* 0042903C 00000000 */   nop   
/* 00429040 8F818038 */  lw    $at, %got(jtbl_1000A74C)($gp)
/* 00429044 000B5880 */  sll   $t3, $t3, 2
/* 00429048 002B0821 */  addu  $at, $at, $t3
/* 0042904C 8C2BA74C */  lw    $t3, %lo(jtbl_1000A74C)($at)
/* 00429050 017C5821 */  addu  $t3, $t3, $gp
/* 00429054 01600008 */  jr    $t3
/* 00429058 00000000 */   nop   
.L0042905C:
/* 0042905C 8F9985A0 */  lw    $t9, %call16(get_sym_kind)($gp)
/* 00429060 8C640024 */  lw    $a0, 0x24($v1)
/* 00429064 0320F809 */  jalr  $t9
/* 00429068 00000000 */   nop   
/* 0042906C 24010005 */  li    $at, 5
/* 00429070 14410022 */  bne   $v0, $at, .L004290FC
/* 00429074 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00429078 8F8D89DC */  lw     $t5, %got(basicint)($gp)
/* 0042907C 24010001 */  li    $at, 1
/* 00429080 24040139 */  li    $a0, 313
/* 00429084 91AD0000 */  lbu   $t5, ($t5)
/* 00429088 8FAE010C */  lw    $t6, 0x10c($sp)
/* 0042908C 8FB9010C */  lw    $t9, 0x10c($sp)
/* 00429090 55A1000A */  bnel  $t5, $at, .L004290BC
/* 00429094 8F270024 */   lw    $a3, 0x24($t9)
/* 00429098 8F99820C */  lw    $t9, %call16(emit_rrri)($gp)
/* 0042909C 8F918A60 */  lw     $s1, %got(frame_pointer)($gp)
/* 004290A0 93A500FF */  lbu   $a1, 0xff($sp)
/* 004290A4 8DC70024 */  lw    $a3, 0x24($t6)
/* 004290A8 0320F809 */  jalr  $t9
/* 004290AC 92260000 */   lbu   $a2, ($s1)
/* 004290B0 10000009 */  b     .L004290D8
/* 004290B4 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 004290B8 8F270024 */  lw    $a3, 0x24($t9)
.L004290BC:
/* 004290BC 8F99820C */  lw    $t9, %call16(emit_rrri)($gp)
/* 004290C0 8F918A60 */  lw     $s1, %got(frame_pointer)($gp)
/* 004290C4 24040056 */  li    $a0, 86
/* 004290C8 93A500FF */  lbu   $a1, 0xff($sp)
/* 004290CC 0320F809 */  jalr  $t9
/* 004290D0 92260000 */   lbu   $a2, ($s1)
/* 004290D4 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L004290D8:
/* 004290D8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004290DC 93A700FF */  lbu   $a3, 0xff($sp)
/* 004290E0 97A40102 */  lhu   $a0, 0x102($sp)
/* 004290E4 00003025 */  move  $a2, $zero
/* 004290E8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004290EC 0320F809 */  jalr  $t9
/* 004290F0 00E02825 */   move  $a1, $a3
/* 004290F4 1000005C */  b     .L00429268
/* 004290F8 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L004290FC:
/* 004290FC 8F998404 */  lw    $t9, %call16(frame_offset)($gp)
/* 00429100 8FA4010C */  lw    $a0, 0x10c($sp)
/* 00429104 0320F809 */  jalr  $t9
/* 00429108 00000000 */   nop   
/* 0042910C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429110 02429021 */  addu  $s2, $s2, $v0
/* 00429114 02403025 */  move  $a2, $s2
/* 00429118 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042911C 8F918A60 */  lw     $s1, %got(frame_pointer)($gp)
/* 00429120 97A40102 */  lhu   $a0, 0x102($sp)
/* 00429124 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429128 AFA00010 */  sw    $zero, 0x10($sp)
/* 0042912C 0320F809 */  jalr  $t9
/* 00429130 92270000 */   lbu   $a3, ($s1)
/* 00429134 1000004C */  b     .L00429268
/* 00429138 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L0042913C:
/* 0042913C 8C6F002C */  lw    $t7, 0x2c($v1)
/* 00429140 8F9981F0 */  lw    $t9, %call16(emit_ra)($gp)
/* 00429144 97A40102 */  lhu   $a0, 0x102($sp)
/* 00429148 024F9021 */  addu  $s2, $s2, $t7
/* 0042914C 02403825 */  move  $a3, $s2
/* 00429150 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429154 8C660024 */  lw    $a2, 0x24($v1)
/* 00429158 0320F809 */  jalr  $t9
/* 0042915C AFA00010 */   sw    $zero, 0x10($sp)
/* 00429160 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429164 10000040 */  b     .L00429268
/* 00429168 8F918A60 */   lw     $s1, %got(frame_pointer)($gp)
.L0042916C:
/* 0042916C 8F988038 */  lw    $t8, %got(RO_1000A6E6)($gp)
/* 00429170 24040004 */  li    $a0, 4
/* 00429174 240509F4 */  li    $a1, 2548
/* 00429178 2718A6E6 */  addiu $t8, %lo(RO_1000A6E6) # addiu $t8, $t8, -0x591a
/* 0042917C 270B0048 */  addiu $t3, $t8, 0x48
/* 00429180 03A04825 */  move  $t1, $sp
.L00429184:
/* 00429184 8B0A0000 */  lwl   $t2, ($t8)
/* 00429188 9B0A0003 */  lwr   $t2, 3($t8)
/* 0042918C 2718000C */  addiu $t8, $t8, 0xc
/* 00429190 2529000C */  addiu $t1, $t1, 0xc
/* 00429194 A92AFFFC */  swl   $t2, -4($t1)
/* 00429198 B92AFFFF */  swr   $t2, -1($t1)
/* 0042919C 8B08FFF8 */  lwl   $t0, -8($t8)
/* 004291A0 9B08FFFB */  lwr   $t0, -5($t8)
/* 004291A4 A9280000 */  swl   $t0, ($t1)
/* 004291A8 B9280003 */  swr   $t0, 3($t1)
/* 004291AC 8B0AFFFC */  lwl   $t2, -4($t8)
/* 004291B0 9B0AFFFF */  lwr   $t2, -1($t8)
/* 004291B4 A92A0004 */  swl   $t2, 4($t1)
/* 004291B8 170BFFF2 */  bne   $t8, $t3, .L00429184
/* 004291BC B92A0007 */   swr   $t2, 7($t1)
/* 004291C0 8B0A0000 */  lwl   $t2, ($t8)
/* 004291C4 9B0A0003 */  lwr   $t2, 3($t8)
/* 004291C8 8F8D8038 */  lw    $t5, %got(RO_1000A696)($gp)
/* 004291CC 03A06025 */  move  $t4, $sp
/* 004291D0 A92A0008 */  swl   $t2, 8($t1)
/* 004291D4 B92A000B */  swr   $t2, 0xb($t1)
/* 004291D8 8B080004 */  lwl   $t0, 4($t8)
/* 004291DC 9B080007 */  lwr   $t0, 7($t8)
/* 004291E0 25ADA696 */  addiu $t5, %lo(RO_1000A696) # addiu $t5, $t5, -0x596a
/* 004291E4 25AF0048 */  addiu $t7, $t5, 0x48
/* 004291E8 A928000C */  swl   $t0, 0xc($t1)
/* 004291EC B928000F */  swr   $t0, 0xf($t1)
.L004291F0:
/* 004291F0 89B90000 */  lwl   $t9, ($t5)
/* 004291F4 99B90003 */  lwr   $t9, 3($t5)
/* 004291F8 25AD000C */  addiu $t5, $t5, 0xc
/* 004291FC 258C000C */  addiu $t4, $t4, 0xc
/* 00429200 A999004C */  swl   $t9, 0x4c($t4)
/* 00429204 B999004F */  swr   $t9, 0x4f($t4)
/* 00429208 89AEFFF8 */  lwl   $t6, -8($t5)
/* 0042920C 99AEFFFB */  lwr   $t6, -5($t5)
/* 00429210 A98E0050 */  swl   $t6, 0x50($t4)
/* 00429214 B98E0053 */  swr   $t6, 0x53($t4)
/* 00429218 89B9FFFC */  lwl   $t9, -4($t5)
/* 0042921C 99B9FFFF */  lwr   $t9, -1($t5)
/* 00429220 A9990054 */  swl   $t9, 0x54($t4)
/* 00429224 15AFFFF2 */  bne   $t5, $t7, .L004291F0
/* 00429228 B9990057 */   swr   $t9, 0x57($t4)
/* 0042922C 89B90000 */  lwl   $t9, ($t5)
/* 00429230 99B90003 */  lwr   $t9, 3($t5)
/* 00429234 A9990058 */  swl   $t9, 0x58($t4)
/* 00429238 B999005B */  swr   $t9, 0x5b($t4)
/* 0042923C 89AE0004 */  lwl   $t6, 4($t5)
/* 00429240 99AE0007 */  lwr   $t6, 7($t5)
/* 00429244 A98E005C */  swl   $t6, 0x5c($t4)
/* 00429248 B98E005F */  swr   $t6, 0x5f($t4)
/* 0042924C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00429250 8FA7000C */  lw    $a3, 0xc($sp)
/* 00429254 8FA60008 */  lw    $a2, 8($sp)
/* 00429258 0320F809 */  jalr  $t9
/* 0042925C 00000000 */   nop   
/* 00429260 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429264 8F918A60 */  lw     $s1, %got(frame_pointer)($gp)
.L00429268:
/* 00429268 8FA30110 */  lw    $v1, 0x110($sp)
/* 0042926C 97A40100 */  lhu   $a0, 0x100($sp)
/* 00429270 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429274 14600008 */  bnez  $v1, .L00429298
/* 00429278 2407001D */   li    $a3, 29
/* 0042927C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429280 8E0B002C */  lw    $t3, 0x2c($s0)
/* 00429284 AFA00010 */  sw    $zero, 0x10($sp)
/* 00429288 0320F809 */  jalr  $t9
/* 0042928C 026B3021 */   addu  $a2, $s3, $t3
/* 00429290 1000030C */  b     .L00429EC4
/* 00429294 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429298:
/* 00429298 90620021 */  lbu   $v0, 0x21($v1)
/* 0042929C 00021600 */  sll   $v0, $v0, 0x18
/* 004292A0 00021742 */  srl   $v0, $v0, 0x1d
/* 004292A4 304200FF */  andi  $v0, $v0, 0xff
/* 004292A8 2458FFFF */  addiu $t8, $v0, -1
/* 004292AC 2F010004 */  sltiu $at, $t8, 4
/* 004292B0 10200046 */  beqz  $at, .L004293CC
/* 004292B4 00000000 */   nop   
/* 004292B8 8F818038 */  lw    $at, %got(jtbl_1000A75C)($gp)
/* 004292BC 0018C080 */  sll   $t8, $t8, 2
/* 004292C0 00380821 */  addu  $at, $at, $t8
/* 004292C4 8C38A75C */  lw    $t8, %lo(jtbl_1000A75C)($at)
/* 004292C8 031CC021 */  addu  $t8, $t8, $gp
/* 004292CC 03000008 */  jr    $t8
/* 004292D0 00000000 */   nop   
.L004292D4:
/* 004292D4 8F9985A0 */  lw    $t9, %call16(get_sym_kind)($gp)
/* 004292D8 8C640024 */  lw    $a0, 0x24($v1)
/* 004292DC 0320F809 */  jalr  $t9
/* 004292E0 00000000 */   nop   
/* 004292E4 24010005 */  li    $at, 5
/* 004292E8 14410020 */  bne   $v0, $at, .L0042936C
/* 004292EC 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 004292F0 8F8989DC */  lw     $t1, %got(basicint)($gp)
/* 004292F4 24010001 */  li    $at, 1
/* 004292F8 8FA80110 */  lw    $t0, 0x110($sp)
/* 004292FC 91290000 */  lbu   $t1, ($t1)
/* 00429300 24040056 */  li    $a0, 86
/* 00429304 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429308 15210009 */  bne   $t1, $at, .L00429330
/* 0042930C 00000000 */   nop   
/* 00429310 8F99820C */  lw    $t9, %call16(emit_rrri)($gp)
/* 00429314 24040139 */  li    $a0, 313
/* 00429318 93A500FF */  lbu   $a1, 0xff($sp)
/* 0042931C 92260000 */  lbu   $a2, ($s1)
/* 00429320 0320F809 */  jalr  $t9
/* 00429324 8D070024 */   lw    $a3, 0x24($t0)
/* 00429328 10000007 */  b     .L00429348
/* 0042932C 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429330:
/* 00429330 8F99820C */  lw    $t9, %call16(emit_rrri)($gp)
/* 00429334 8FAA0110 */  lw    $t2, 0x110($sp)
/* 00429338 92260000 */  lbu   $a2, ($s1)
/* 0042933C 0320F809 */  jalr  $t9
/* 00429340 8D470024 */   lw    $a3, 0x24($t2)
/* 00429344 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00429348:
/* 00429348 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042934C 93A700FF */  lbu   $a3, 0xff($sp)
/* 00429350 97A40100 */  lhu   $a0, 0x100($sp)
/* 00429354 00003025 */  move  $a2, $zero
/* 00429358 AFA00010 */  sw    $zero, 0x10($sp)
/* 0042935C 0320F809 */  jalr  $t9
/* 00429360 00E02825 */   move  $a1, $a3
/* 00429364 100002D7 */  b     .L00429EC4
/* 00429368 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L0042936C:
/* 0042936C 8F998404 */  lw    $t9, %call16(frame_offset)($gp)
/* 00429370 8FA40110 */  lw    $a0, 0x110($sp)
/* 00429374 0320F809 */  jalr  $t9
/* 00429378 00000000 */   nop   
/* 0042937C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429380 02623021 */  addu  $a2, $s3, $v0
/* 00429384 97A40100 */  lhu   $a0, 0x100($sp)
/* 00429388 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042938C 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429390 92270000 */  lbu   $a3, ($s1)
/* 00429394 0320F809 */  jalr  $t9
/* 00429398 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042939C 100002C9 */  b     .L00429EC4
/* 004293A0 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L004293A4:
/* 004293A4 8F9981F0 */  lw    $t9, %call16(emit_ra)($gp)
/* 004293A8 8C6D002C */  lw    $t5, 0x2c($v1)
/* 004293AC 97A40100 */  lhu   $a0, 0x100($sp)
/* 004293B0 93A500FF */  lbu   $a1, 0xff($sp)
/* 004293B4 8C660024 */  lw    $a2, 0x24($v1)
/* 004293B8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004293BC 0320F809 */  jalr  $t9
/* 004293C0 026D3821 */   addu  $a3, $s3, $t5
/* 004293C4 100002BF */  b     .L00429EC4
/* 004293C8 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L004293CC:
/* 004293CC 8F8C8038 */  lw    $t4, %got(RO_1000A646)($gp)
/* 004293D0 24040004 */  li    $a0, 4
/* 004293D4 24050A13 */  li    $a1, 2579
/* 004293D8 258CA646 */  addiu $t4, %lo(RO_1000A646) # addiu $t4, $t4, -0x59ba
/* 004293DC 25980048 */  addiu $t8, $t4, 0x48
/* 004293E0 03A05825 */  move  $t3, $sp
.L004293E4:
/* 004293E4 89990000 */  lwl   $t9, ($t4)
/* 004293E8 99990003 */  lwr   $t9, 3($t4)
/* 004293EC 258C000C */  addiu $t4, $t4, 0xc
/* 004293F0 256B000C */  addiu $t3, $t3, 0xc
/* 004293F4 A979FFFC */  swl   $t9, -4($t3)
/* 004293F8 B979FFFF */  swr   $t9, -1($t3)
/* 004293FC 898EFFF8 */  lwl   $t6, -8($t4)
/* 00429400 998EFFFB */  lwr   $t6, -5($t4)
/* 00429404 A96E0000 */  swl   $t6, ($t3)
/* 00429408 B96E0003 */  swr   $t6, 3($t3)
/* 0042940C 8999FFFC */  lwl   $t9, -4($t4)
/* 00429410 9999FFFF */  lwr   $t9, -1($t4)
/* 00429414 A9790004 */  swl   $t9, 4($t3)
/* 00429418 1598FFF2 */  bne   $t4, $t8, .L004293E4
/* 0042941C B9790007 */   swr   $t9, 7($t3)
/* 00429420 89990000 */  lwl   $t9, ($t4)
/* 00429424 99990003 */  lwr   $t9, 3($t4)
/* 00429428 8F898038 */  lw    $t1, %got(RO_1000A5F6)($gp)
/* 0042942C 03A07825 */  move  $t7, $sp
/* 00429430 A9790008 */  swl   $t9, 8($t3)
/* 00429434 B979000B */  swr   $t9, 0xb($t3)
/* 00429438 898E0004 */  lwl   $t6, 4($t4)
/* 0042943C 998E0007 */  lwr   $t6, 7($t4)
/* 00429440 2529A5F6 */  addiu $t1, %lo(RO_1000A5F6) # addiu $t1, $t1, -0x5a0a
/* 00429444 252D0048 */  addiu $t5, $t1, 0x48
/* 00429448 A96E000C */  swl   $t6, 0xc($t3)
/* 0042944C B96E000F */  swr   $t6, 0xf($t3)
.L00429450:
/* 00429450 892A0000 */  lwl   $t2, ($t1)
/* 00429454 992A0003 */  lwr   $t2, 3($t1)
/* 00429458 2529000C */  addiu $t1, $t1, 0xc
/* 0042945C 25EF000C */  addiu $t7, $t7, 0xc
/* 00429460 A9EA004C */  swl   $t2, 0x4c($t7)
/* 00429464 B9EA004F */  swr   $t2, 0x4f($t7)
/* 00429468 8928FFF8 */  lwl   $t0, -8($t1)
/* 0042946C 9928FFFB */  lwr   $t0, -5($t1)
/* 00429470 A9E80050 */  swl   $t0, 0x50($t7)
/* 00429474 B9E80053 */  swr   $t0, 0x53($t7)
/* 00429478 892AFFFC */  lwl   $t2, -4($t1)
/* 0042947C 992AFFFF */  lwr   $t2, -1($t1)
/* 00429480 A9EA0054 */  swl   $t2, 0x54($t7)
/* 00429484 152DFFF2 */  bne   $t1, $t5, .L00429450
/* 00429488 B9EA0057 */   swr   $t2, 0x57($t7)
/* 0042948C 892A0000 */  lwl   $t2, ($t1)
/* 00429490 992A0003 */  lwr   $t2, 3($t1)
/* 00429494 A9EA0058 */  swl   $t2, 0x58($t7)
/* 00429498 B9EA005B */  swr   $t2, 0x5b($t7)
/* 0042949C 89280004 */  lwl   $t0, 4($t1)
/* 004294A0 99280007 */  lwr   $t0, 7($t1)
/* 004294A4 A9E8005C */  swl   $t0, 0x5c($t7)
/* 004294A8 B9E8005F */  swr   $t0, 0x5f($t7)
/* 004294AC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004294B0 8FA7000C */  lw    $a3, 0xc($sp)
/* 004294B4 8FA60008 */  lw    $a2, 8($sp)
/* 004294B8 0320F809 */  jalr  $t9
/* 004294BC 00000000 */   nop   
/* 004294C0 10000280 */  b     .L00429EC4
/* 004294C4 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L004294C8:
/* 004294C8 8FB80110 */  lw    $t8, 0x110($sp)
.L004294CC:
/* 004294CC 13000007 */  beqz  $t8, .L004294EC
/* 004294D0 00000000 */   nop   
/* 004294D4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004294D8 03002025 */  move  $a0, $t8
/* 004294DC 24050048 */  li    $a1, 72
/* 004294E0 0320F809 */  jalr  $t9
/* 004294E4 00000000 */   nop   
/* 004294E8 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L004294EC:
/* 004294EC 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004294F0 8FA4010C */  lw    $a0, 0x10c($sp)
/* 004294F4 24050048 */  li    $a1, 72
/* 004294F8 0320F809 */  jalr  $t9
/* 004294FC 00000000 */   nop   
/* 00429500 8FAC0110 */  lw    $t4, 0x110($sp)
/* 00429504 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429508 240B001D */  li    $t3, 29
/* 0042950C 15800005 */  bnez  $t4, .L00429524
/* 00429510 00000000 */   nop   
/* 00429514 8E0E002C */  lw    $t6, 0x2c($s0)
/* 00429518 A3AB00FB */  sb    $t3, 0xfb($sp)
/* 0042951C 10000007 */  b     .L0042953C
/* 00429520 026E9821 */   addu  $s3, $s3, $t6
.L00429524:
/* 00429524 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00429528 8FA40110 */  lw    $a0, 0x110($sp)
/* 0042952C 0320F809 */  jalr  $t9
/* 00429530 00000000 */   nop   
/* 00429534 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429538 A3A200FB */  sb    $v0, 0xfb($sp)
.L0042953C:
/* 0042953C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00429540 8FA4010C */  lw    $a0, 0x10c($sp)
/* 00429544 0320F809 */  jalr  $t9
/* 00429548 00000000 */   nop   
/* 0042954C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429550 A3A200FC */  sb    $v0, 0xfc($sp)
/* 00429554 00002025 */  move  $a0, $zero
/* 00429558 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042955C 24050001 */  li    $a1, 1
/* 00429560 0320F809 */  jalr  $t9
/* 00429564 00000000 */   nop   
/* 00429568 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0042956C A3A200FE */  sb    $v0, 0xfe($sp)
/* 00429570 8F9984E8 */  lw    $t9, %call16(free_reg_is_available)($gp)
/* 00429574 0320F809 */  jalr  $t9
/* 00429578 00000000 */   nop   
/* 0042957C 14400010 */  bnez  $v0, .L004295C0
/* 00429580 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 00429584 2A617FF4 */  slti  $at, $s3, 0x7ff4
/* 00429588 1020000D */  beqz  $at, .L004295C0
/* 0042958C 2A417FF4 */   slti  $at, $s2, 0x7ff4
/* 00429590 1020000B */  beqz  $at, .L004295C0
/* 00429594 0271C821 */   addu  $t9, $s3, $s1
/* 00429598 34018000 */  li    $at, 32768
/* 0042959C 0321082A */  slt   $at, $t9, $at
/* 004295A0 10200004 */  beqz  $at, .L004295B4
/* 004295A4 02516821 */   addu  $t5, $s2, $s1
/* 004295A8 34018000 */  li    $at, 32768
/* 004295AC 01A1082A */  slt   $at, $t5, $at
/* 004295B0 1420000C */  bnez  $at, .L004295E4
.L004295B4:
/* 004295B4 2A210021 */   slti  $at, $s1, 0x21
/* 004295B8 1020000A */  beqz  $at, .L004295E4
/* 004295BC 00000000 */   nop   
.L004295C0:
/* 004295C0 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 004295C4 24090001 */  li    $t1, 1
/* 004295C8 A3A900EF */  sb    $t1, 0xef($sp)
/* 004295CC 00002025 */  move  $a0, $zero
/* 004295D0 0320F809 */  jalr  $t9
/* 004295D4 24050001 */   li    $a1, 1
/* 004295D8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004295DC 10000009 */  b     .L00429604
/* 004295E0 A3A200FF */   sb    $v0, 0xff($sp)
.L004295E4:
/* 004295E4 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 004295E8 A3A000EF */  sb    $zero, 0xef($sp)
/* 004295EC 24040020 */  li    $a0, 32
/* 004295F0 0320F809 */  jalr  $t9
/* 004295F4 24050006 */   li    $a1, 6
/* 004295F8 240F0001 */  li    $t7, 1
/* 004295FC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429600 A3AF00FF */  sb    $t7, 0xff($sp)
.L00429604:
/* 00429604 8FA80118 */  lw    $t0, 0x118($sp)
/* 00429608 240A00CE */  li    $t2, 206
/* 0042960C 2418002A */  li    $t8, 42
/* 00429610 29010004 */  slti  $at, $t0, 4
/* 00429614 10200003 */  beqz  $at, .L00429624
/* 00429618 240E0057 */   li    $t6, 87
/* 0042961C 10000002 */  b     .L00429628
/* 00429620 A7AA0102 */   sh    $t2, 0x102($sp)
.L00429624:
/* 00429624 A7B80102 */  sh    $t8, 0x102($sp)
.L00429628:
/* 00429628 8FAC0114 */  lw    $t4, 0x114($sp)
/* 0042962C 240B00D1 */  li    $t3, 209
/* 00429630 24100004 */  li    $s0, 4
/* 00429634 29810004 */  slti  $at, $t4, 4
/* 00429638 50200004 */  beql  $at, $zero, .L0042964C
/* 0042963C A7AE0100 */   sh    $t6, 0x100($sp)
/* 00429640 10000002 */  b     .L0042964C
/* 00429644 A7AB0100 */   sh    $t3, 0x100($sp)
/* 00429648 A7AE0100 */  sh    $t6, 0x100($sp)
.L0042964C:
/* 0042964C 8F9989D8 */  lw     $t9, %got(opcode_arch)($gp)
/* 00429650 24010001 */  li    $at, 1
/* 00429654 8FAD0118 */  lw    $t5, 0x118($sp)
/* 00429658 93390000 */  lbu   $t9, ($t9)
/* 0042965C 1721000C */  bne   $t9, $at, .L00429690
/* 00429660 24020008 */   li    $v0, 8
/* 00429664 15A2000A */  bne   $t5, $v0, .L00429690
/* 00429668 8FA90114 */   lw    $t1, 0x114($sp)
/* 0042966C 15220008 */  bne   $t1, $v0, .L00429690
/* 00429670 240F0001 */   li    $t7, 1
/* 00429674 2408006C */  li    $t0, 108
/* 00429678 240A006D */  li    $t2, 109
/* 0042967C A3AF00ED */  sb    $t7, 0xed($sp)
/* 00429680 24100008 */  li    $s0, 8
/* 00429684 A7A80102 */  sh    $t0, 0x102($sp)
/* 00429688 10000002 */  b     .L00429694
/* 0042968C A7AA0100 */   sh    $t2, 0x100($sp)
.L00429690:
/* 00429690 A3A000ED */  sb    $zero, 0xed($sp)
.L00429694:
/* 00429694 0010C0C0 */  sll   $t8, $s0, 3
/* 00429698 0311082B */  sltu  $at, $t8, $s1
/* 0042969C 502000B0 */  beql  $at, $zero, .L00429960
/* 004296A0 8FAA0110 */   lw    $t2, 0x110($sp)
/* 004296A4 8F998388 */  lw    $t9, %call16(copy)($gp)
/* 004296A8 93A400FC */  lbu   $a0, 0xfc($sp)
/* 004296AC 0320F809 */  jalr  $t9
/* 004296B0 00000000 */   nop   
/* 004296B4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004296B8 A3A200FC */  sb    $v0, 0xfc($sp)
/* 004296BC 93A400FB */  lbu   $a0, 0xfb($sp)
/* 004296C0 8F998388 */  lw    $t9, %call16(copy)($gp)
/* 004296C4 0320F809 */  jalr  $t9
/* 004296C8 00000000 */   nop   
/* 004296CC 93AC00EF */  lbu   $t4, 0xef($sp)
/* 004296D0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004296D4 A3A200FB */  sb    $v0, 0xfb($sp)
/* 004296D8 1180000F */  beqz  $t4, .L00429718
/* 004296DC 00000000 */   nop   
/* 004296E0 8F9984E8 */  lw    $t9, %call16(free_reg_is_available)($gp)
/* 004296E4 0320F809 */  jalr  $t9
/* 004296E8 00000000 */   nop   
/* 004296EC 1440000A */  bnez  $v0, .L00429718
/* 004296F0 8FBC00C0 */   lw    $gp, 0xc0($sp)
/* 004296F4 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 004296F8 A3A000EF */  sb    $zero, 0xef($sp)
/* 004296FC 24040020 */  li    $a0, 32
/* 00429700 0320F809 */  jalr  $t9
/* 00429704 24050006 */   li    $a1, 6
/* 00429708 240B0001 */  li    $t3, 1
/* 0042970C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429710 1000000D */  b     .L00429748
/* 00429714 A3AB00FD */   sb    $t3, 0xfd($sp)
.L00429718:
/* 00429718 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042971C 00002025 */  move  $a0, $zero
/* 00429720 24050001 */  li    $a1, 1
/* 00429724 0320F809 */  jalr  $t9
/* 00429728 00000000 */   nop   
/* 0042972C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429730 A3A200FD */  sb    $v0, 0xfd($sp)
/* 00429734 304400FF */  andi  $a0, $v0, 0xff
/* 00429738 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042973C 0320F809 */  jalr  $t9
/* 00429740 00000000 */   nop   
/* 00429744 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00429748:
/* 00429748 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042974C 93A400FC */  lbu   $a0, 0xfc($sp)
/* 00429750 0320F809 */  jalr  $t9
/* 00429754 00000000 */   nop   
/* 00429758 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0042975C 93A400FB */  lbu   $a0, 0xfb($sp)
/* 00429760 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00429764 0320F809 */  jalr  $t9
/* 00429768 00000000 */   nop   
/* 0042976C 00101880 */  sll   $v1, $s0, 2
/* 00429770 00701823 */  subu  $v1, $v1, $s0
/* 00429774 0223001B */  divu  $zero, $s1, $v1
/* 00429778 00007012 */  mflo  $t6
/* 0042977C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429780 14600002 */  bnez  $v1, .L0042978C
/* 00429784 00000000 */   nop   
/* 00429788 0007000D */  break 7
.L0042978C:
/* 0042978C 01C30019 */  multu $t6, $v1
/* 00429790 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00429794 AFA300D4 */  sw    $v1, 0xd4($sp)
/* 00429798 24040002 */  li    $a0, 2
/* 0042979C 93A500FD */  lbu   $a1, 0xfd($sp)
/* 004297A0 93A600FC */  lbu   $a2, 0xfc($sp)
/* 004297A4 AFA00010 */  sw    $zero, 0x10($sp)
/* 004297A8 00001012 */  mflo  $v0
/* 004297AC 00403825 */  move  $a3, $v0
/* 004297B0 0320F809 */  jalr  $t9
/* 004297B4 02228823 */   subu  $s1, $s1, $v0
/* 004297B8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004297BC 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 004297C0 0320F809 */  jalr  $t9
/* 004297C4 00000000 */   nop   
/* 004297C8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004297CC AFA200F0 */  sw    $v0, 0xf0($sp)
/* 004297D0 00402025 */  move  $a0, $v0
/* 004297D4 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 004297D8 0320F809 */  jalr  $t9
/* 004297DC 00000000 */   nop   
/* 004297E0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004297E4 97A40102 */  lhu   $a0, 0x102($sp)
/* 004297E8 93A500FF */  lbu   $a1, 0xff($sp)
/* 004297EC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004297F0 00001025 */  move  $v0, $zero
/* 004297F4 02403021 */  move  $a2, $s2
/* 004297F8 93A700FC */  lbu   $a3, 0xfc($sp)
/* 004297FC AFA00010 */  sw    $zero, 0x10($sp)
/* 00429800 0320F809 */  jalr  $t9
/* 00429804 AFA000D0 */   sw    $zero, 0xd0($sp)
/* 00429808 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0042980C 93A500FC */  lbu   $a1, 0xfc($sp)
/* 00429810 8FA700D4 */  lw    $a3, 0xd4($sp)
/* 00429814 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00429818 24040002 */  li    $a0, 2
/* 0042981C AFA00010 */  sw    $zero, 0x10($sp)
/* 00429820 00A03025 */  move  $a2, $a1
/* 00429824 0320F809 */  jalr  $t9
/* 00429828 AFA700CC */   sw    $a3, 0xcc($sp)
/* 0042982C 8FB900D0 */  lw    $t9, 0xd0($sp)
/* 00429830 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429834 97A40100 */  lhu   $a0, 0x100($sp)
/* 00429838 02793021 */  addu  $a2, $s3, $t9
/* 0042983C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429840 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429844 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429848 0320F809 */  jalr  $t9
/* 0042984C AFA00010 */   sw    $zero, 0x10($sp)
/* 00429850 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429854 00101040 */  sll   $v0, $s0, 1
/* 00429858 02423023 */  subu  $a2, $s2, $v0
/* 0042985C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429860 AFA200D4 */  sw    $v0, 0xd4($sp)
/* 00429864 97A40102 */  lhu   $a0, 0x102($sp)
/* 00429868 93A500FE */  lbu   $a1, 0xfe($sp)
/* 0042986C 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429870 0320F809 */  jalr  $t9
/* 00429874 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429878 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0042987C 93A500FB */  lbu   $a1, 0xfb($sp)
/* 00429880 24040002 */  li    $a0, 2
/* 00429884 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00429888 8FA700CC */  lw    $a3, 0xcc($sp)
/* 0042988C AFA00010 */  sw    $zero, 0x10($sp)
/* 00429890 0320F809 */  jalr  $t9
/* 00429894 00A03025 */   move  $a2, $a1
/* 00429898 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0042989C 8FAD00D4 */  lw    $t5, 0xd4($sp)
/* 004298A0 97A40100 */  lhu   $a0, 0x100($sp)
/* 004298A4 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004298A8 93A500FE */  lbu   $a1, 0xfe($sp)
/* 004298AC 93A700FB */  lbu   $a3, 0xfb($sp)
/* 004298B0 AFA00010 */  sw    $zero, 0x10($sp)
/* 004298B4 0320F809 */  jalr  $t9
/* 004298B8 026D3023 */   subu  $a2, $s3, $t5
/* 004298BC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004298C0 97A40102 */  lhu   $a0, 0x102($sp)
/* 004298C4 93A500FF */  lbu   $a1, 0xff($sp)
/* 004298C8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004298CC 02001025 */  move  $v0, $s0
/* 004298D0 02503023 */  subu  $a2, $s2, $s0
/* 004298D4 93A700FC */  lbu   $a3, 0xfc($sp)
/* 004298D8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004298DC 0320F809 */  jalr  $t9
/* 004298E0 AFB000D4 */   sw    $s0, 0xd4($sp)
/* 004298E4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004298E8 8FA200D4 */  lw    $v0, 0xd4($sp)
/* 004298EC 97A40100 */  lhu   $a0, 0x100($sp)
/* 004298F0 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004298F4 93A500FF */  lbu   $a1, 0xff($sp)
/* 004298F8 93A700FB */  lbu   $a3, 0xfb($sp)
/* 004298FC AFA00010 */  sw    $zero, 0x10($sp)
/* 00429900 0320F809 */  jalr  $t9
/* 00429904 02623023 */   subu  $a2, $s3, $v0
/* 00429908 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 0042990C 2404001A */  li    $a0, 26
/* 00429910 93A500FC */  lbu   $a1, 0xfc($sp)
/* 00429914 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 00429918 93A600FD */  lbu   $a2, 0xfd($sp)
/* 0042991C 8FA700F0 */  lw    $a3, 0xf0($sp)
/* 00429920 0320F809 */  jalr  $t9
/* 00429924 00000000 */   nop   
/* 00429928 93A900EF */  lbu   $t1, 0xef($sp)
/* 0042992C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429930 93AF00FD */  lbu   $t7, 0xfd($sp)
/* 00429934 15200009 */  bnez  $t1, .L0042995C
/* 00429938 24010001 */   li    $at, 1
/* 0042993C 15E10007 */  bne   $t7, $at, .L0042995C
/* 00429940 24080001 */   li    $t0, 1
/* 00429944 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00429948 A3A800EF */  sb    $t0, 0xef($sp)
/* 0042994C 24040020 */  li    $a0, 32
/* 00429950 0320F809 */  jalr  $t9
/* 00429954 24050005 */   li    $a1, 5
/* 00429958 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L0042995C:
/* 0042995C 8FAA0110 */  lw    $t2, 0x110($sp)
.L00429960:
/* 00429960 A3A000EE */  sb    $zero, 0xee($sp)
/* 00429964 51400017 */  beql  $t2, $zero, .L004299C4
/* 00429968 0230082B */   sltu  $at, $s1, $s0
/* 0042996C 91580020 */  lbu   $t8, 0x20($t2)
/* 00429970 24010047 */  li    $at, 71
/* 00429974 8FAC010C */  lw    $t4, 0x10c($sp)
/* 00429978 57010012 */  bnel  $t8, $at, .L004299C4
/* 0042997C 0230082B */   sltu  $at, $s1, $s0
/* 00429980 918B0020 */  lbu   $t3, 0x20($t4)
/* 00429984 24010047 */  li    $at, 71
/* 00429988 5561000E */  bnel  $t3, $at, .L004299C4
/* 0042998C 0230082B */   sltu  $at, $s1, $s0
/* 00429990 8D8E0024 */  lw    $t6, 0x24($t4)
/* 00429994 8D590024 */  lw    $t9, 0x24($t2)
/* 00429998 240D0001 */  li    $t5, 1
/* 0042999C 24040030 */  li    $a0, 48
/* 004299A0 51D90008 */  beql  $t6, $t9, .L004299C4
/* 004299A4 0230082B */   sltu  $at, $s1, $s0
/* 004299A8 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 004299AC A3AD00EE */  sb    $t5, 0xee($sp)
/* 004299B0 93A500FC */  lbu   $a1, 0xfc($sp)
/* 004299B4 0320F809 */  jalr  $t9
/* 004299B8 93A600FB */   lbu   $a2, 0xfb($sp)
/* 004299BC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004299C0 0230082B */  sltu  $at, $s1, $s0
.L004299C4:
/* 004299C4 5420002D */  bnel  $at, $zero, .L00429A7C
/* 004299C8 2E210004 */   sltiu $at, $s1, 4
.L004299CC:
/* 004299CC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004299D0 97A40102 */  lhu   $a0, 0x102($sp)
/* 004299D4 93A500FF */  lbu   $a1, 0xff($sp)
/* 004299D8 02403025 */  move  $a2, $s2
/* 004299DC 93A700FC */  lbu   $a3, 0xfc($sp)
/* 004299E0 0320F809 */  jalr  $t9
/* 004299E4 AFA00010 */   sw    $zero, 0x10($sp)
/* 004299E8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 004299EC 97A40100 */  lhu   $a0, 0x100($sp)
/* 004299F0 93A500FF */  lbu   $a1, 0xff($sp)
/* 004299F4 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004299F8 02603025 */  move  $a2, $s3
/* 004299FC 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429A00 0320F809 */  jalr  $t9
/* 00429A04 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429A08 02308823 */  subu  $s1, $s1, $s0
/* 00429A0C 0230082B */  sltu  $at, $s1, $s0
/* 00429A10 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429A14 02509021 */  addu  $s2, $s2, $s0
/* 00429A18 14200014 */  bnez  $at, .L00429A6C
/* 00429A1C 02709821 */   addu  $s3, $s3, $s0
/* 00429A20 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429A24 97A40102 */  lhu   $a0, 0x102($sp)
/* 00429A28 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429A2C 02403025 */  move  $a2, $s2
/* 00429A30 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429A34 0320F809 */  jalr  $t9
/* 00429A38 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429A3C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429A40 97A40100 */  lhu   $a0, 0x100($sp)
/* 00429A44 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429A48 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429A4C 02603025 */  move  $a2, $s3
/* 00429A50 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429A54 0320F809 */  jalr  $t9
/* 00429A58 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429A5C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429A60 02509021 */  addu  $s2, $s2, $s0
/* 00429A64 02709821 */  addu  $s3, $s3, $s0
/* 00429A68 02308823 */  subu  $s1, $s1, $s0
.L00429A6C:
/* 00429A6C 0230082B */  sltu  $at, $s1, $s0
/* 00429A70 1020FFD6 */  beqz  $at, .L004299CC
/* 00429A74 00000000 */   nop   
/* 00429A78 2E210004 */  sltiu $at, $s1, 4
.L00429A7C:
/* 00429A7C 14200015 */  bnez  $at, .L00429AD4
/* 00429A80 93A900ED */   lbu   $t1, 0xed($sp)
/* 00429A84 11200013 */  beqz  $t1, .L00429AD4
/* 00429A88 2404002A */   li    $a0, 42
/* 00429A8C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429A90 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429A94 02403025 */  move  $a2, $s2
/* 00429A98 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429A9C 0320F809 */  jalr  $t9
/* 00429AA0 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429AA4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429AA8 24040057 */  li    $a0, 87
/* 00429AAC 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429AB0 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429AB4 02603025 */  move  $a2, $s3
/* 00429AB8 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429ABC 0320F809 */  jalr  $t9
/* 00429AC0 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429AC4 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429AC8 26520004 */  addiu $s2, $s2, 4
/* 00429ACC 26730004 */  addiu $s3, $s3, 4
/* 00429AD0 2631FFFC */  addiu $s1, $s1, -4
.L00429AD4:
/* 00429AD4 2E210004 */  sltiu $at, $s1, 4
/* 00429AD8 102000D6 */  beqz  $at, .L00429E34
/* 00429ADC 24040001 */   li    $a0, 1
/* 00429AE0 8F818038 */  lw    $at, %got(jtbl_1000A76C)($gp)
/* 00429AE4 00117880 */  sll   $t7, $s1, 2
/* 00429AE8 002F0821 */  addu  $at, $at, $t7
/* 00429AEC 8C2FA76C */  lw    $t7, %lo(jtbl_1000A76C)($at)
/* 00429AF0 01FC7821 */  addu  $t7, $t7, $gp
/* 00429AF4 01E00008 */  jr    $t7
/* 00429AF8 00000000 */   nop   
.L00429AFC:
/* 00429AFC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429B00 24040026 */  li    $a0, 38
/* 00429B04 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429B08 02403025 */  move  $a2, $s2
/* 00429B0C 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429B10 0320F809 */  jalr  $t9
/* 00429B14 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429B18 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429B1C 24040046 */  li    $a0, 70
/* 00429B20 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429B24 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429B28 02603025 */  move  $a2, $s3
/* 00429B2C 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429B30 0320F809 */  jalr  $t9
/* 00429B34 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429B38 100000C5 */  b     .L00429E50
/* 00429B3C 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429B40:
/* 00429B40 8FA80118 */  lw    $t0, 0x118($sp)
/* 00429B44 8FB80114 */  lw    $t8, 0x114($sp)
/* 00429B48 24040026 */  li    $a0, 38
/* 00429B4C 2D010002 */  sltiu $at, $t0, 2
/* 00429B50 14200004 */  bnez  $at, .L00429B64
/* 00429B54 93A500FF */   lbu   $a1, 0xff($sp)
/* 00429B58 2F010002 */  sltiu $at, $t8, 2
/* 00429B5C 10200020 */  beqz  $at, .L00429BE0
/* 00429B60 02403025 */   move  $a2, $s2
.L00429B64:
/* 00429B64 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429B68 02403025 */  move  $a2, $s2
/* 00429B6C 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429B70 0320F809 */  jalr  $t9
/* 00429B74 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429B78 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429B7C 24040046 */  li    $a0, 70
/* 00429B80 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429B84 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429B88 02603025 */  move  $a2, $s3
/* 00429B8C 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429B90 0320F809 */  jalr  $t9
/* 00429B94 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429B98 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429B9C 24040026 */  li    $a0, 38
/* 00429BA0 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429BA4 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429BA8 26460001 */  addiu $a2, $s2, 1
/* 00429BAC 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429BB0 0320F809 */  jalr  $t9
/* 00429BB4 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429BB8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429BBC 24040046 */  li    $a0, 70
/* 00429BC0 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429BC4 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429BC8 26660001 */  addiu $a2, $s3, 1
/* 00429BCC 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429BD0 0320F809 */  jalr  $t9
/* 00429BD4 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429BD8 1000009D */  b     .L00429E50
/* 00429BDC 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429BE0:
/* 00429BE0 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429BE4 24040028 */  li    $a0, 40
/* 00429BE8 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429BEC 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429BF0 0320F809 */  jalr  $t9
/* 00429BF4 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429BF8 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429BFC 2404004C */  li    $a0, 76
/* 00429C00 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429C04 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429C08 02603025 */  move  $a2, $s3
/* 00429C0C 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429C10 0320F809 */  jalr  $t9
/* 00429C14 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429C18 1000008D */  b     .L00429E50
/* 00429C1C 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429C20:
/* 00429C20 8FAB0118 */  lw    $t3, 0x118($sp)
/* 00429C24 8FAC0114 */  lw    $t4, 0x114($sp)
/* 00429C28 8FAE0118 */  lw    $t6, 0x118($sp)
/* 00429C2C 29610004 */  slti  $at, $t3, 4
/* 00429C30 14200029 */  bnez  $at, .L00429CD8
/* 00429C34 29810004 */   slti  $at, $t4, 4
/* 00429C38 54200028 */  bnel  $at, $zero, .L00429CDC
/* 00429C3C 2DC10002 */   sltiu $at, $t6, 2
/* 00429C40 8F8A898C */  lw     $t2, %got(lsb_first)($gp)
/* 00429C44 26460002 */  addiu $a2, $s2, 2
/* 00429C48 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429C4C 914A0000 */  lbu   $t2, ($t2)
/* 00429C50 2404005C */  li    $a0, 92
/* 00429C54 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429C58 11400010 */  beqz  $t2, .L00429C9C
/* 00429C5C 00000000 */   nop   
/* 00429C60 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429C64 2404005B */  li    $a0, 91
/* 00429C68 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429C6C 0320F809 */  jalr  $t9
/* 00429C70 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429C74 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429C78 2404005D */  li    $a0, 93
/* 00429C7C 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429C80 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429C84 26660002 */  addiu $a2, $s3, 2
/* 00429C88 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429C8C 0320F809 */  jalr  $t9
/* 00429C90 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429C94 1000006E */  b     .L00429E50
/* 00429C98 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429C9C:
/* 00429C9C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429CA0 26460002 */  addiu $a2, $s2, 2
/* 00429CA4 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429CA8 0320F809 */  jalr  $t9
/* 00429CAC AFA00010 */   sw    $zero, 0x10($sp)
/* 00429CB0 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429CB4 2404005E */  li    $a0, 94
/* 00429CB8 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429CBC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429CC0 26660002 */  addiu $a2, $s3, 2
/* 00429CC4 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429CC8 0320F809 */  jalr  $t9
/* 00429CCC AFA00010 */   sw    $zero, 0x10($sp)
/* 00429CD0 1000005F */  b     .L00429E50
/* 00429CD4 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429CD8:
/* 00429CD8 2DC10002 */  sltiu $at, $t6, 2
.L00429CDC:
/* 00429CDC 14200024 */  bnez  $at, .L00429D70
/* 00429CE0 8FB90114 */   lw    $t9, 0x114($sp)
/* 00429CE4 2F210002 */  sltiu $at, $t9, 2
/* 00429CE8 14200021 */  bnez  $at, .L00429D70
/* 00429CEC 24040028 */   li    $a0, 40
/* 00429CF0 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429CF4 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429CF8 02403025 */  move  $a2, $s2
/* 00429CFC 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429D00 0320F809 */  jalr  $t9
/* 00429D04 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429D08 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429D0C 2404004C */  li    $a0, 76
/* 00429D10 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429D14 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429D18 02603025 */  move  $a2, $s3
/* 00429D1C 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429D20 0320F809 */  jalr  $t9
/* 00429D24 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429D28 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429D2C 24040026 */  li    $a0, 38
/* 00429D30 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429D34 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429D38 26460002 */  addiu $a2, $s2, 2
/* 00429D3C 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429D40 0320F809 */  jalr  $t9
/* 00429D44 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429D48 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429D4C 24040046 */  li    $a0, 70
/* 00429D50 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429D54 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429D58 26660002 */  addiu $a2, $s3, 2
/* 00429D5C 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429D60 0320F809 */  jalr  $t9
/* 00429D64 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429D68 10000039 */  b     .L00429E50
/* 00429D6C 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429D70:
/* 00429D70 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429D74 24040026 */  li    $a0, 38
/* 00429D78 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429D7C 02403025 */  move  $a2, $s2
/* 00429D80 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429D84 0320F809 */  jalr  $t9
/* 00429D88 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429D8C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429D90 24040046 */  li    $a0, 70
/* 00429D94 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429D98 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429D9C 02603025 */  move  $a2, $s3
/* 00429DA0 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429DA4 0320F809 */  jalr  $t9
/* 00429DA8 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429DAC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429DB0 24040026 */  li    $a0, 38
/* 00429DB4 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429DB8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429DBC 26460001 */  addiu $a2, $s2, 1
/* 00429DC0 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429DC4 0320F809 */  jalr  $t9
/* 00429DC8 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429DCC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429DD0 24040046 */  li    $a0, 70
/* 00429DD4 93A500FE */  lbu   $a1, 0xfe($sp)
/* 00429DD8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429DDC 26660001 */  addiu $a2, $s3, 1
/* 00429DE0 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429DE4 0320F809 */  jalr  $t9
/* 00429DE8 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429DEC 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429DF0 24040026 */  li    $a0, 38
/* 00429DF4 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429DF8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429DFC 26460002 */  addiu $a2, $s2, 2
/* 00429E00 93A700FC */  lbu   $a3, 0xfc($sp)
/* 00429E04 0320F809 */  jalr  $t9
/* 00429E08 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429E0C 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429E10 24040046 */  li    $a0, 70
/* 00429E14 93A500FF */  lbu   $a1, 0xff($sp)
/* 00429E18 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00429E1C 26660002 */  addiu $a2, $s3, 2
/* 00429E20 93A700FB */  lbu   $a3, 0xfb($sp)
/* 00429E24 0320F809 */  jalr  $t9
/* 00429E28 AFA00010 */   sw    $zero, 0x10($sp)
/* 00429E2C 10000008 */  b     .L00429E50
/* 00429E30 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429E34:
/* 00429E34 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 00429E38 8F868038 */  lw    $a2, %got(RO_1000A5F0)($gp)
/* 00429E3C 24050A95 */  li    $a1, 2709
/* 00429E40 24070006 */  li    $a3, 6
/* 00429E44 0320F809 */  jalr  $t9
/* 00429E48 24C6A5F0 */   addiu $a2, %lo(RO_1000A5F0) # addiu $a2, $a2, -0x5a10
/* 00429E4C 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00429E50:
/* 00429E50 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00429E54 93A400FE */  lbu   $a0, 0xfe($sp)
/* 00429E58 0320F809 */  jalr  $t9
/* 00429E5C 00000000 */   nop   
/* 00429E60 93AD00EE */  lbu   $t5, 0xee($sp)
/* 00429E64 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429E68 51A00008 */  beql  $t5, $zero, .L00429E8C
/* 00429E6C 93A900EF */   lbu   $t1, 0xef($sp)
/* 00429E70 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 00429E74 24040031 */  li    $a0, 49
/* 00429E78 93A500FC */  lbu   $a1, 0xfc($sp)
/* 00429E7C 0320F809 */  jalr  $t9
/* 00429E80 93A600FB */   lbu   $a2, 0xfb($sp)
/* 00429E84 8FBC00C0 */  lw    $gp, 0xc0($sp)
/* 00429E88 93A900EF */  lbu   $t1, 0xef($sp)
.L00429E8C:
/* 00429E8C 15200008 */  bnez  $t1, .L00429EB0
/* 00429E90 00000000 */   nop   
/* 00429E94 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00429E98 24040020 */  li    $a0, 32
/* 00429E9C 24050005 */  li    $a1, 5
/* 00429EA0 0320F809 */  jalr  $t9
/* 00429EA4 00000000 */   nop   
/* 00429EA8 10000006 */  b     .L00429EC4
/* 00429EAC 8FBC00C0 */   lw    $gp, 0xc0($sp)
.L00429EB0:
/* 00429EB0 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00429EB4 93A400FF */  lbu   $a0, 0xff($sp)
/* 00429EB8 0320F809 */  jalr  $t9
/* 00429EBC 00000000 */   nop   
/* 00429EC0 8FBC00C0 */  lw    $gp, 0xc0($sp)
.L00429EC4:
/* 00429EC4 8FBF00C4 */  lw    $ra, 0xc4($sp)
/* 00429EC8 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 00429ECC 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 00429ED0 8FB200B8 */  lw    $s2, 0xb8($sp)
/* 00429ED4 8FB300BC */  lw    $s3, 0xbc($sp)
/* 00429ED8 03E00008 */  jr    $ra
/* 00429EDC 27BD0120 */   addiu $sp, $sp, 0x120
    .type eval_mov, @function
    .size eval_mov, .-eval_mov
    .end eval_mov

glabel get_ops
    .ent get_ops
    # 0042A1AC eval_irel
/* 00429EE0 3C1C0FBF */  .cpload $t9
/* 00429EE4 279C5B70 */  
/* 00429EE8 0399E021 */  
/* 00429EEC 90830020 */  lbu   $v1, 0x20($a0)
/* 00429EF0 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 00429EF4 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00429EF8 246EFFE0 */  addiu $t6, $v1, -0x20
/* 00429EFC 2DCF0060 */  sltiu $t7, $t6, 0x60
/* 00429F00 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00429F04 11E00009 */  beqz  $t7, .L00429F2C
/* 00429F08 240A0066 */   li    $t2, 102
/* 00429F0C 8F8B8038 */  lw    $t3, %got(D_10016118)($gp)
/* 00429F10 000EC143 */  sra   $t8, $t6, 5
/* 00429F14 0018C880 */  sll   $t9, $t8, 2
/* 00429F18 256B6118 */  addiu $t3, %lo(D_10016118) # addiu $t3, $t3, 0x6118
/* 00429F1C 01796021 */  addu  $t4, $t3, $t9
/* 00429F20 8D8D0000 */  lw    $t5, ($t4)
/* 00429F24 01CDC004 */  sllv  $t8, $t5, $t6
/* 00429F28 2B0F0000 */  slti  $t7, $t8, 0
.L00429F2C:
/* 00429F2C 01E002B4 */  teq   $t7, $zero, 0xa
/* 00429F30 8C890028 */  lw    $t1, 0x28($a0)
/* 00429F34 11430004 */  beq   $t2, $v1, .L00429F48
/* 00429F38 8C880024 */   lw    $t0, 0x24($a0)
/* 00429F3C 2401005A */  li    $at, 90
/* 00429F40 14610002 */  bne   $v1, $at, .L00429F4C
/* 00429F44 00000000 */   nop   
.L00429F48:
/* 00429F48 94880022 */  lhu   $t0, 0x22($a0)
.L00429F4C:
/* 00429F4C 10000074 */  b     .L0042A120
/* 00429F50 306200FF */   andi  $v0, $v1, 0xff
.L00429F54:
/* 00429F54 24010020 */  li    $at, 32
.L00429F58:
/* 00429F58 55010004 */  bnel  $t0, $at, .L00429F6C
/* 00429F5C 24010040 */   li    $at, 64
/* 00429F60 31390003 */  andi  $t9, $t1, 3
/* 00429F64 13200004 */  beqz  $t9, .L00429F78
/* 00429F68 24010040 */   li    $at, 64
.L00429F6C:
/* 00429F6C 15010009 */  bne   $t0, $at, .L00429F94
/* 00429F70 312C0007 */   andi  $t4, $t1, 7
/* 00429F74 15800007 */  bnez  $t4, .L00429F94
.L00429F78:
/* 00429F78 240D002A */   li    $t5, 42
/* 00429F7C A4AD0000 */  sh    $t5, ($a1)
/* 00429F80 240E0057 */  li    $t6, 87
/* 00429F84 A4CE0000 */  sh    $t6, ($a2)
/* 00429F88 24180004 */  li    $t8, 4
/* 00429F8C 10000012 */  b     .L00429FD8
/* 00429F90 ACF80000 */   sw    $t8, ($a3)
.L00429F94:
/* 00429F94 24010010 */  li    $at, 16
/* 00429F98 15010009 */  bne   $t0, $at, .L00429FC0
/* 00429F9C 312B0001 */   andi  $t3, $t1, 1
/* 00429FA0 15600007 */  bnez  $t3, .L00429FC0
/* 00429FA4 240F0028 */   li    $t7, 40
/* 00429FA8 A4AF0000 */  sh    $t7, ($a1)
/* 00429FAC 2419004C */  li    $t9, 76
/* 00429FB0 A4D90000 */  sh    $t9, ($a2)
/* 00429FB4 240C0002 */  li    $t4, 2
/* 00429FB8 10000007 */  b     .L00429FD8
/* 00429FBC ACEC0000 */   sw    $t4, ($a3)
.L00429FC0:
/* 00429FC0 240D0026 */  li    $t5, 38
/* 00429FC4 A4AD0000 */  sh    $t5, ($a1)
/* 00429FC8 240E0046 */  li    $t6, 70
/* 00429FCC A4CE0000 */  sh    $t6, ($a2)
/* 00429FD0 24180001 */  li    $t8, 1
/* 00429FD4 ACF80000 */  sw    $t8, ($a3)
.L00429FD8:
/* 00429FD8 24010058 */  li    $at, 88
/* 00429FDC 50610070 */  beql  $v1, $at, .L0042A1A0
/* 00429FE0 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 00429FE4 1143006D */  beq   $t2, $v1, .L0042A19C
/* 00429FE8 2401005A */   li    $at, 90
/* 00429FEC 1061006B */  beq   $v1, $at, .L0042A19C
/* 00429FF0 240B003E */   li    $t3, 62
/* 00429FF4 10000069 */  b     .L0042A19C
/* 00429FF8 A4CB0000 */   sh    $t3, ($a2)
.L00429FFC:
/* 00429FFC 8F8C88B4 */  lw     $t4, %got(op_tab)($gp)
/* 0042A000 240F0026 */  li    $t7, 38
/* 0042A004 0003C840 */  sll   $t9, $v1, 1
/* 0042A008 A4AF0000 */  sh    $t7, ($a1)
/* 0042A00C 032C6821 */  addu  $t5, $t9, $t4
/* 0042A010 95AE0000 */  lhu   $t6, ($t5)
/* 0042A014 24180001 */  li    $t8, 1
/* 0042A018 A4CE0000 */  sh    $t6, ($a2)
/* 0042A01C 1000005F */  b     .L0042A19C
/* 0042A020 ACF80000 */   sw    $t8, ($a3)
.L0042A024:
/* 0042A024 8F8B8038 */  lw    $t3, %got(RO_1000A7CC)($gp)
/* 0042A028 24040004 */  li    $a0, 4
/* 0042A02C 24050B13 */  li    $a1, 2835
/* 0042A030 256BA7CC */  addiu $t3, %lo(RO_1000A7CC) # addiu $t3, $t3, -0x5834
/* 0042A034 256D0048 */  addiu $t5, $t3, 0x48
/* 0042A038 03A06025 */  move  $t4, $sp
.L0042A03C:
/* 0042A03C 89790000 */  lwl   $t9, ($t3)
/* 0042A040 99790003 */  lwr   $t9, 3($t3)
/* 0042A044 256B000C */  addiu $t3, $t3, 0xc
/* 0042A048 258C000C */  addiu $t4, $t4, 0xc
/* 0042A04C A999FFFC */  swl   $t9, -4($t4)
/* 0042A050 B999FFFF */  swr   $t9, -1($t4)
/* 0042A054 896FFFF8 */  lwl   $t7, -8($t3)
/* 0042A058 996FFFFB */  lwr   $t7, -5($t3)
/* 0042A05C A98F0000 */  swl   $t7, ($t4)
/* 0042A060 B98F0003 */  swr   $t7, 3($t4)
/* 0042A064 8979FFFC */  lwl   $t9, -4($t3)
/* 0042A068 9979FFFF */  lwr   $t9, -1($t3)
/* 0042A06C A9990004 */  swl   $t9, 4($t4)
/* 0042A070 156DFFF2 */  bne   $t3, $t5, .L0042A03C
/* 0042A074 B9990007 */   swr   $t9, 7($t4)
/* 0042A078 89790000 */  lwl   $t9, ($t3)
/* 0042A07C 99790003 */  lwr   $t9, 3($t3)
/* 0042A080 8F8E8038 */  lw    $t6, %got(RO_1000A77C)($gp)
/* 0042A084 A9990008 */  swl   $t9, 8($t4)
/* 0042A088 B999000B */  swr   $t9, 0xb($t4)
/* 0042A08C 896F0004 */  lwl   $t7, 4($t3)
/* 0042A090 996F0007 */  lwr   $t7, 7($t3)
/* 0042A094 25CEA77C */  addiu $t6, %lo(RO_1000A77C) # addiu $t6, $t6, -0x5884
/* 0042A098 03A05825 */  move  $t3, $sp
/* 0042A09C A98F000C */  swl   $t7, 0xc($t4)
/* 0042A0A0 B98F000F */  swr   $t7, 0xf($t4)
/* 0042A0A4 25CC0048 */  addiu $t4, $t6, 0x48
.L0042A0A8:
/* 0042A0A8 89CD0000 */  lwl   $t5, ($t6)
/* 0042A0AC 99CD0003 */  lwr   $t5, 3($t6)
/* 0042A0B0 25CE000C */  addiu $t6, $t6, 0xc
/* 0042A0B4 256B000C */  addiu $t3, $t3, 0xc
/* 0042A0B8 A96D004C */  swl   $t5, 0x4c($t3)
/* 0042A0BC B96D004F */  swr   $t5, 0x4f($t3)
/* 0042A0C0 89D8FFF8 */  lwl   $t8, -8($t6)
/* 0042A0C4 99D8FFFB */  lwr   $t8, -5($t6)
/* 0042A0C8 A9780050 */  swl   $t8, 0x50($t3)
/* 0042A0CC B9780053 */  swr   $t8, 0x53($t3)
/* 0042A0D0 89CDFFFC */  lwl   $t5, -4($t6)
/* 0042A0D4 99CDFFFF */  lwr   $t5, -1($t6)
/* 0042A0D8 A96D0054 */  swl   $t5, 0x54($t3)
/* 0042A0DC 15CCFFF2 */  bne   $t6, $t4, .L0042A0A8
/* 0042A0E0 B96D0057 */   swr   $t5, 0x57($t3)
/* 0042A0E4 89CD0000 */  lwl   $t5, ($t6)
/* 0042A0E8 99CD0003 */  lwr   $t5, 3($t6)
/* 0042A0EC A96D0058 */  swl   $t5, 0x58($t3)
/* 0042A0F0 B96D005B */  swr   $t5, 0x5b($t3)
/* 0042A0F4 89D80004 */  lwl   $t8, 4($t6)
/* 0042A0F8 99D80007 */  lwr   $t8, 7($t6)
/* 0042A0FC A978005C */  swl   $t8, 0x5c($t3)
/* 0042A100 B978005F */  swr   $t8, 0x5f($t3)
/* 0042A104 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0042A108 8FA7000C */  lw    $a3, 0xc($sp)
/* 0042A10C 8FA60008 */  lw    $a2, 8($sp)
/* 0042A110 0320F809 */  jalr  $t9
/* 0042A114 00000000 */   nop   
/* 0042A118 10000020 */  b     .L0042A19C
/* 0042A11C 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0042A120:
/* 0042A120 2C41005B */  sltiu $at, $v0, 0x5b
/* 0042A124 54200006 */  bnel  $at, $zero, .L0042A140
/* 0042A128 2C410039 */   sltiu $at, $v0, 0x39
/* 0042A12C 504AFF8A */  beql  $v0, $t2, .L00429F58
/* 0042A130 24010020 */   li    $at, 32
/* 0042A134 1000FFBB */  b     .L0042A024
/* 0042A138 00000000 */   nop   
/* 0042A13C 2C410039 */  sltiu $at, $v0, 0x39
.L0042A140:
/* 0042A140 1020000B */  beqz  $at, .L0042A170
/* 0042A144 244FFFD2 */   addiu $t7, $v0, -0x2e
/* 0042A148 2DE1000B */  sltiu $at, $t7, 0xb
/* 0042A14C 1020FFB5 */  beqz  $at, .L0042A024
/* 0042A150 00000000 */   nop   
/* 0042A154 8F818038 */  lw    $at, %got(jtbl_1000A81C)($gp)
/* 0042A158 000F7880 */  sll   $t7, $t7, 2
/* 0042A15C 002F0821 */  addu  $at, $at, $t7
/* 0042A160 8C2FA81C */  lw    $t7, %lo(jtbl_1000A81C)($at)
/* 0042A164 01FC7821 */  addu  $t7, $t7, $gp
/* 0042A168 01E00008 */  jr    $t7
/* 0042A16C 00000000 */   nop   
.L0042A170:
/* 0042A170 2459FFA8 */  addiu $t9, $v0, -0x58
/* 0042A174 2F210003 */  sltiu $at, $t9, 3
/* 0042A178 1020FFAA */  beqz  $at, .L0042A024
/* 0042A17C 00000000 */   nop   
/* 0042A180 8F818038 */  lw    $at, %got(jtbl_1000A848)($gp)
/* 0042A184 0019C880 */  sll   $t9, $t9, 2
/* 0042A188 00390821 */  addu  $at, $at, $t9
/* 0042A18C 8C39A848 */  lw    $t9, %lo(jtbl_1000A848)($at)
/* 0042A190 033CC821 */  addu  $t9, $t9, $gp
/* 0042A194 03200008 */  jr    $t9
/* 0042A198 00000000 */   nop   
.L0042A19C:
/* 0042A19C 8FBF00B4 */  lw    $ra, 0xb4($sp)
.L0042A1A0:
/* 0042A1A0 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 0042A1A4 03E00008 */  jr    $ra
/* 0042A1A8 00000000 */   nop   
    .type get_ops, @function
    .size get_ops, .-get_ops
    .end get_ops

glabel eval_irel
    .ent eval_irel
    # 0042BDAC eval
/* 0042A1AC 3C1C0FBF */  .cpload $t9
/* 0042A1B0 279C58A4 */  
/* 0042A1B4 0399E021 */  
/* 0042A1B8 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0042A1BC 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042A1C0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0042A1C4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042A1C8 AFA40050 */  sw    $a0, 0x50($sp)
/* 0042A1CC 8C840000 */  lw    $a0, ($a0)
/* 0042A1D0 0320F809 */  jalr  $t9
/* 0042A1D4 24050048 */   li    $a1, 72
/* 0042A1D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A1DC 8FAF0050 */  lw    $t7, 0x50($sp)
/* 0042A1E0 24050048 */  li    $a1, 72
/* 0042A1E4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042A1E8 8DE40004 */  lw    $a0, 4($t7)
/* 0042A1EC 0320F809 */  jalr  $t9
/* 0042A1F0 00000000 */   nop   
/* 0042A1F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A1F8 8FA40050 */  lw    $a0, 0x50($sp)
/* 0042A1FC 27A5003A */  addiu $a1, $sp, 0x3a
/* 0042A200 8F998390 */  lw    $t9, %call16(get_ops)($gp)
/* 0042A204 27A60038 */  addiu $a2, $sp, 0x38
/* 0042A208 27A70034 */  addiu $a3, $sp, 0x34
/* 0042A20C 0320F809 */  jalr  $t9
/* 0042A210 00000000 */   nop   
/* 0042A214 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A218 8FB80050 */  lw    $t8, 0x50($sp)
/* 0042A21C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042A220 8F040000 */  lw    $a0, ($t8)
/* 0042A224 0320F809 */  jalr  $t9
/* 0042A228 00000000 */   nop   
/* 0042A22C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A230 00402025 */  move  $a0, $v0
/* 0042A234 8F998388 */  lw    $t9, %call16(copy)($gp)
/* 0042A238 0320F809 */  jalr  $t9
/* 0042A23C 00000000 */   nop   
/* 0042A240 8FB90050 */  lw    $t9, 0x50($sp)
/* 0042A244 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A248 A3A2004D */  sb    $v0, 0x4d($sp)
/* 0042A24C 8F240004 */  lw    $a0, 4($t9)
/* 0042A250 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042A254 0320F809 */  jalr  $t9
/* 0042A258 00000000 */   nop   
/* 0042A25C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A260 00402025 */  move  $a0, $v0
/* 0042A264 8F998388 */  lw    $t9, %call16(copy)($gp)
/* 0042A268 0320F809 */  jalr  $t9
/* 0042A26C 00000000 */   nop   
/* 0042A270 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A274 8FA40050 */  lw    $a0, 0x50($sp)
/* 0042A278 A3A2004C */  sb    $v0, 0x4c($sp)
/* 0042A27C 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042A280 94850014 */  lhu   $a1, 0x14($a0)
/* 0042A284 0320F809 */  jalr  $t9
/* 0042A288 00000000 */   nop   
/* 0042A28C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A290 A3A2004B */  sb    $v0, 0x4b($sp)
/* 0042A294 00002025 */  move  $a0, $zero
/* 0042A298 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042A29C 24050001 */  li    $a1, 1
/* 0042A2A0 0320F809 */  jalr  $t9
/* 0042A2A4 00000000 */   nop   
/* 0042A2A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A2AC A3A2004E */  sb    $v0, 0x4e($sp)
/* 0042A2B0 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0042A2B4 0320F809 */  jalr  $t9
/* 0042A2B8 00000000 */   nop   
/* 0042A2BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A2C0 AFA20044 */  sw    $v0, 0x44($sp)
/* 0042A2C4 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0042A2C8 0320F809 */  jalr  $t9
/* 0042A2CC 00000000 */   nop   
/* 0042A2D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A2D4 AFA20040 */  sw    $v0, 0x40($sp)
/* 0042A2D8 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0042A2DC 0320F809 */  jalr  $t9
/* 0042A2E0 00000000 */   nop   
/* 0042A2E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A2E8 8FA80050 */  lw    $t0, 0x50($sp)
/* 0042A2EC AFA2003C */  sw    $v0, 0x3c($sp)
/* 0042A2F0 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042A2F4 8D070028 */  lw    $a3, 0x28($t0)
/* 0042A2F8 AFA00010 */  sw    $zero, 0x10($sp)
/* 0042A2FC 24040001 */  li    $a0, 1
/* 0042A300 93A5004B */  lbu   $a1, 0x4b($sp)
/* 0042A304 0320F809 */  jalr  $t9
/* 0042A308 93A6004D */   lbu   $a2, 0x4d($sp)
/* 0042A30C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A310 8FA40044 */  lw    $a0, 0x44($sp)
/* 0042A314 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042A318 0320F809 */  jalr  $t9
/* 0042A31C 00000000 */   nop   
/* 0042A320 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A324 24040020 */  li    $a0, 32
/* 0042A328 24050006 */  li    $a1, 6
/* 0042A32C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042A330 0320F809 */  jalr  $t9
/* 0042A334 00000000 */   nop   
/* 0042A338 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A33C 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0042A340 24050001 */  li    $a1, 1
/* 0042A344 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042A348 00003025 */  move  $a2, $zero
/* 0042A34C 93A7004D */  lbu   $a3, 0x4d($sp)
/* 0042A350 0320F809 */  jalr  $t9
/* 0042A354 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042A358 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A35C 93A5004D */  lbu   $a1, 0x4d($sp)
/* 0042A360 24040001 */  li    $a0, 1
/* 0042A364 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042A368 8FA70034 */  lw    $a3, 0x34($sp)
/* 0042A36C AFA00010 */  sw    $zero, 0x10($sp)
/* 0042A370 0320F809 */  jalr  $t9
/* 0042A374 00A03025 */   move  $a2, $a1
/* 0042A378 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A37C 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0042A380 93A5004E */  lbu   $a1, 0x4e($sp)
/* 0042A384 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042A388 00003025 */  move  $a2, $zero
/* 0042A38C 93A7004C */  lbu   $a3, 0x4c($sp)
/* 0042A390 0320F809 */  jalr  $t9
/* 0042A394 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042A398 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A39C 93A5004C */  lbu   $a1, 0x4c($sp)
/* 0042A3A0 24040001 */  li    $a0, 1
/* 0042A3A4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042A3A8 8FA70034 */  lw    $a3, 0x34($sp)
/* 0042A3AC AFA00010 */  sw    $zero, 0x10($sp)
/* 0042A3B0 0320F809 */  jalr  $t9
/* 0042A3B4 00A03025 */   move  $a2, $a1
/* 0042A3B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A3BC 2404001A */  li    $a0, 26
/* 0042A3C0 24050001 */  li    $a1, 1
/* 0042A3C4 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0042A3C8 93A6004E */  lbu   $a2, 0x4e($sp)
/* 0042A3CC 8FA70040 */  lw    $a3, 0x40($sp)
/* 0042A3D0 0320F809 */  jalr  $t9
/* 0042A3D4 00000000 */   nop   
/* 0042A3D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A3DC 2404001A */  li    $a0, 26
/* 0042A3E0 93A5004D */  lbu   $a1, 0x4d($sp)
/* 0042A3E4 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0042A3E8 93A6004B */  lbu   $a2, 0x4b($sp)
/* 0042A3EC 8FA70044 */  lw    $a3, 0x44($sp)
/* 0042A3F0 0320F809 */  jalr  $t9
/* 0042A3F4 00000000 */   nop   
/* 0042A3F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A3FC 24040020 */  li    $a0, 32
/* 0042A400 24050005 */  li    $a1, 5
/* 0042A404 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042A408 0320F809 */  jalr  $t9
/* 0042A40C 00000000 */   nop   
/* 0042A410 8FA90050 */  lw    $t1, 0x50($sp)
/* 0042A414 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A418 91220020 */  lbu   $v0, 0x20($t1)
/* 0042A41C 244AFFD2 */  addiu $t2, $v0, -0x2e
/* 0042A420 2D41000B */  sltiu $at, $t2, 0xb
/* 0042A424 10200064 */  beqz  $at, .L0042A5B8
/* 0042A428 00000000 */   nop   
/* 0042A42C 8F818038 */  lw    $at, %got(jtbl_1000A85C)($gp)
/* 0042A430 000A5080 */  sll   $t2, $t2, 2
/* 0042A434 002A0821 */  addu  $at, $at, $t2
/* 0042A438 8C2AA85C */  lw    $t2, %lo(jtbl_1000A85C)($at)
/* 0042A43C 015C5021 */  addu  $t2, $t2, $gp
/* 0042A440 01400008 */  jr    $t2
/* 0042A444 00000000 */   nop   
.L0042A448:
/* 0042A448 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042A44C 24040029 */  li    $a0, 41
/* 0042A450 93A5004B */  lbu   $a1, 0x4b($sp)
/* 0042A454 24060001 */  li    $a2, 1
/* 0042A458 0320F809 */  jalr  $t9
/* 0042A45C 00003825 */   move  $a3, $zero
/* 0042A460 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A464 24040004 */  li    $a0, 4
/* 0042A468 8FA5003C */  lw    $a1, 0x3c($sp)
/* 0042A46C 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 0042A470 0320F809 */  jalr  $t9
/* 0042A474 00000000 */   nop   
/* 0042A478 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A47C 8FA40040 */  lw    $a0, 0x40($sp)
/* 0042A480 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042A484 0320F809 */  jalr  $t9
/* 0042A488 00000000 */   nop   
/* 0042A48C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A490 24040029 */  li    $a0, 41
/* 0042A494 93A5004B */  lbu   $a1, 0x4b($sp)
/* 0042A498 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042A49C 00003025 */  move  $a2, $zero
/* 0042A4A0 00003825 */  move  $a3, $zero
/* 0042A4A4 0320F809 */  jalr  $t9
/* 0042A4A8 00000000 */   nop   
/* 0042A4AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A4B0 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0042A4B4 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042A4B8 0320F809 */  jalr  $t9
/* 0042A4BC 00000000 */   nop   
/* 0042A4C0 10000045 */  b     .L0042A5D8
/* 0042A4C4 8FBC0020 */   lw    $gp, 0x20($sp)
.L0042A4C8:
/* 0042A4C8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042A4CC 24040029 */  li    $a0, 41
/* 0042A4D0 93A5004B */  lbu   $a1, 0x4b($sp)
/* 0042A4D4 00003025 */  move  $a2, $zero
/* 0042A4D8 0320F809 */  jalr  $t9
/* 0042A4DC 00003825 */   move  $a3, $zero
/* 0042A4E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A4E4 24040004 */  li    $a0, 4
/* 0042A4E8 8FA5003C */  lw    $a1, 0x3c($sp)
/* 0042A4EC 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 0042A4F0 0320F809 */  jalr  $t9
/* 0042A4F4 00000000 */   nop   
/* 0042A4F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A4FC 8FA40040 */  lw    $a0, 0x40($sp)
/* 0042A500 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042A504 0320F809 */  jalr  $t9
/* 0042A508 00000000 */   nop   
/* 0042A50C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A510 24040029 */  li    $a0, 41
/* 0042A514 93A5004B */  lbu   $a1, 0x4b($sp)
/* 0042A518 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042A51C 24060001 */  li    $a2, 1
/* 0042A520 00003825 */  move  $a3, $zero
/* 0042A524 0320F809 */  jalr  $t9
/* 0042A528 00000000 */   nop   
/* 0042A52C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A530 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0042A534 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042A538 0320F809 */  jalr  $t9
/* 0042A53C 00000000 */   nop   
/* 0042A540 10000025 */  b     .L0042A5D8
/* 0042A544 8FBC0020 */   lw    $gp, 0x20($sp)
.L0042A548:
/* 0042A548 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042A54C 8FA40040 */  lw    $a0, 0x40($sp)
/* 0042A550 0320F809 */  jalr  $t9
/* 0042A554 00000000 */   nop   
/* 0042A558 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A55C 97A40038 */  lhu   $a0, 0x38($sp)
/* 0042A560 93A5004B */  lbu   $a1, 0x4b($sp)
/* 0042A564 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0042A568 24060001 */  li    $a2, 1
/* 0042A56C 93A7004E */  lbu   $a3, 0x4e($sp)
/* 0042A570 0320F809 */  jalr  $t9
/* 0042A574 00000000 */   nop   
/* 0042A578 10000017 */  b     .L0042A5D8
/* 0042A57C 8FBC0020 */   lw    $gp, 0x20($sp)
.L0042A580:
/* 0042A580 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042A584 8FA40040 */  lw    $a0, 0x40($sp)
/* 0042A588 0320F809 */  jalr  $t9
/* 0042A58C 00000000 */   nop   
/* 0042A590 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A594 97A40038 */  lhu   $a0, 0x38($sp)
/* 0042A598 93A5004B */  lbu   $a1, 0x4b($sp)
/* 0042A59C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0042A5A0 93A6004E */  lbu   $a2, 0x4e($sp)
/* 0042A5A4 24070001 */  li    $a3, 1
/* 0042A5A8 0320F809 */  jalr  $t9
/* 0042A5AC 00000000 */   nop   
/* 0042A5B0 10000009 */  b     .L0042A5D8
/* 0042A5B4 8FBC0020 */   lw    $gp, 0x20($sp)
.L0042A5B8:
/* 0042A5B8 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 0042A5BC 8F868038 */  lw    $a2, %got(RO_1000A854)($gp)
/* 0042A5C0 24040001 */  li    $a0, 1
/* 0042A5C4 24050B41 */  li    $a1, 2881
/* 0042A5C8 24070006 */  li    $a3, 6
/* 0042A5CC 0320F809 */  jalr  $t9
/* 0042A5D0 24C6A854 */   addiu $a2, %lo(RO_1000A854) # addiu $a2, $a2, -0x57ac
/* 0042A5D4 8FBC0020 */  lw    $gp, 0x20($sp)
.L0042A5D8:
/* 0042A5D8 8FAB0050 */  lw    $t3, 0x50($sp)
/* 0042A5DC 93AC004B */  lbu   $t4, 0x4b($sp)
/* 0042A5E0 91620019 */  lbu   $v0, 0x19($t3)
/* 0042A5E4 00026E00 */  sll   $t5, $v0, 0x18
/* 0042A5E8 000D7642 */  srl   $t6, $t5, 0x19
/* 0042A5EC 018E7826 */  xor   $t7, $t4, $t6
/* 0042A5F0 000FC640 */  sll   $t8, $t7, 0x19
/* 0042A5F4 0018CE02 */  srl   $t9, $t8, 0x18
/* 0042A5F8 03224026 */  xor   $t0, $t9, $v0
/* 0042A5FC A1680019 */  sb    $t0, 0x19($t3)
/* 0042A600 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042A604 93A4004D */  lbu   $a0, 0x4d($sp)
/* 0042A608 0320F809 */  jalr  $t9
/* 0042A60C 00000000 */   nop   
/* 0042A610 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A614 93A4004C */  lbu   $a0, 0x4c($sp)
/* 0042A618 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042A61C 0320F809 */  jalr  $t9
/* 0042A620 00000000 */   nop   
/* 0042A624 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A628 93A4004E */  lbu   $a0, 0x4e($sp)
/* 0042A62C 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042A630 0320F809 */  jalr  $t9
/* 0042A634 00000000 */   nop   
/* 0042A638 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0042A63C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042A640 27BD0050 */  addiu $sp, $sp, 0x50
/* 0042A644 03E00008 */  jr    $ra
/* 0042A648 00000000 */   nop   
    .type eval_irel, @function
    .size eval_irel, .-eval_irel
    .end eval_irel

glabel save_vreg
    .ent save_vreg
    # 0042BDAC eval
/* 0042A64C 3C1C0FBF */  .cpload $t9
/* 0042A650 279C5404 */  
/* 0042A654 0399E021 */  
/* 0042A658 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0042A65C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042A660 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0042A664 8C860030 */  lw    $a2, 0x30($a0)
/* 0042A668 8F998328 */  lw    $t9, %call16(is_saved_reg)($gp)
/* 0042A66C 00802825 */  move  $a1, $a0
/* 0042A670 04C10002 */  bgez  $a2, .L0042A67C
/* 0042A674 00C00821 */   move  $at, $a2
/* 0042A678 24C10003 */  addiu $at, $a2, 3
.L0042A67C:
/* 0042A67C 00013083 */  sra   $a2, $at, 2
/* 0042A680 30C400FF */  andi  $a0, $a2, 0xff
/* 0042A684 A3A40027 */  sb    $a0, 0x27($sp)
/* 0042A688 0320F809 */  jalr  $t9
/* 0042A68C AFA50028 */   sw    $a1, 0x28($sp)
/* 0042A690 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042A694 8FA50028 */  lw    $a1, 0x28($sp)
/* 0042A698 10400038 */  beqz  $v0, .L0042A77C
/* 0042A69C 93A60027 */   lbu   $a2, 0x27($sp)
/* 0042A6A0 8F828B90 */  lw     $v0, %got(saved_regs)($gp)
/* 0042A6A4 2CCE0020 */  sltiu $t6, $a2, 0x20
/* 0042A6A8 00C07827 */  not   $t7, $a2
/* 0042A6AC 8C590000 */  lw    $t9, ($v0)
/* 0042A6B0 01EEC004 */  sllv  $t8, $t6, $t7
/* 0042A6B4 24C9FFE0 */  addiu $t1, $a2, -0x20
/* 0042A6B8 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 0042A6BC 00C05827 */  not   $t3, $a2
/* 0042A6C0 03384025 */  or    $t0, $t9, $t8
/* 0042A6C4 016A6004 */  sllv  $t4, $t2, $t3
/* 0042A6C8 8CAB0028 */  lw    $t3, 0x28($a1)
/* 0042A6CC 8C490008 */  lw    $t1, 8($v0)
/* 0042A6D0 8C4D0004 */  lw    $t5, 4($v0)
/* 0042A6D4 24CFFFC0 */  addiu $t7, $a2, -0x40
/* 0042A6D8 2DF90020 */  sltiu $t9, $t7, 0x20
/* 0042A6DC 00C0C027 */  not   $t8, $a2
/* 0042A6E0 AC480000 */  sw    $t0, ($v0)
/* 0042A6E4 03194004 */  sllv  $t0, $t9, $t8
/* 0042A6E8 29610005 */  slti  $at, $t3, 5
/* 0042A6EC 01285025 */  or    $t2, $t1, $t0
/* 0042A6F0 01AC7025 */  or    $t6, $t5, $t4
/* 0042A6F4 AC4E0004 */  sw    $t6, 4($v0)
/* 0042A6F8 1020000A */  beqz  $at, .L0042A724
/* 0042A6FC AC4A0008 */   sw    $t2, 8($v0)
/* 0042A700 90AD0021 */  lbu   $t5, 0x21($a1)
/* 0042A704 3C01000C */  lui   $at, 0xc
/* 0042A708 34218000 */  ori   $at, $at, 0x8000
/* 0042A70C 31AC001F */  andi  $t4, $t5, 0x1f
/* 0042A710 2D8E0020 */  sltiu $t6, $t4, 0x20
/* 0042A714 000E7823 */  negu  $t7, $t6
/* 0042A718 01E1C824 */  and   $t9, $t7, $at
/* 0042A71C 0199C004 */  sllv  $t8, $t9, $t4
/* 0042A720 0701007A */  bgez  $t8, .L0042A90C
.L0042A724:
/* 0042A724 24C90001 */   addiu $t1, $a2, 1
/* 0042A728 8C4D0000 */  lw    $t5, ($v0)
/* 0042A72C 2D280020 */  sltiu $t0, $t1, 0x20
/* 0042A730 01205027 */  not   $t2, $t1
/* 0042A734 01485804 */  sllv  $t3, $t0, $t2
/* 0042A738 252FFFE0 */  addiu $t7, $t1, -0x20
/* 0042A73C 01AB7025 */  or    $t6, $t5, $t3
/* 0042A740 2DF90020 */  sltiu $t9, $t7, 0x20
/* 0042A744 01206027 */  not   $t4, $t1
/* 0042A748 0199C004 */  sllv  $t8, $t9, $t4
/* 0042A74C 8C590008 */  lw    $t9, 8($v0)
/* 0042A750 8C480004 */  lw    $t0, 4($v0)
/* 0042A754 AC4E0000 */  sw    $t6, ($v0)
/* 0042A758 252DFFC0 */  addiu $t5, $t1, -0x40
/* 0042A75C 2DAB0020 */  sltiu $t3, $t5, 0x20
/* 0042A760 01207027 */  not   $t6, $t1
/* 0042A764 01CB7804 */  sllv  $t7, $t3, $t6
/* 0042A768 032F6025 */  or    $t4, $t9, $t7
/* 0042A76C 01185025 */  or    $t2, $t0, $t8
/* 0042A770 AC4A0004 */  sw    $t2, 4($v0)
/* 0042A774 10000065 */  b     .L0042A90C
/* 0042A778 AC4C0008 */   sw    $t4, 8($v0)
.L0042A77C:
/* 0042A77C 8F828B90 */  lw     $v0, %got(saved_regs)($gp)
/* 0042A780 2CC80020 */  sltiu $t0, $a2, 0x20
/* 0042A784 00C0C027 */  not   $t8, $a2
/* 0042A788 8C490000 */  lw    $t1, ($v0)
/* 0042A78C 03085004 */  sllv  $t2, $t0, $t8
/* 0042A790 24CEFFE0 */  addiu $t6, $a2, -0x20
/* 0042A794 8C580004 */  lw    $t8, 4($v0)
/* 0042A798 2DD90020 */  sltiu $t9, $t6, 0x20
/* 0042A79C 01406827 */  not   $t5, $t2
/* 0042A7A0 00C07827 */  not   $t7, $a2
/* 0042A7A4 01F96004 */  sllv  $t4, $t9, $t7
/* 0042A7A8 012D5824 */  and   $t3, $t1, $t5
/* 0042A7AC 01804027 */  not   $t0, $t4
/* 0042A7B0 03085024 */  and   $t2, $t8, $t0
/* 0042A7B4 24C9FFC0 */  addiu $t1, $a2, -0x40
/* 0042A7B8 AC4B0000 */  sw    $t3, ($v0)
/* 0042A7BC 8C4F0008 */  lw    $t7, 8($v0)
/* 0042A7C0 00C05827 */  not   $t3, $a2
/* 0042A7C4 2D2D0020 */  sltiu $t5, $t1, 0x20
/* 0042A7C8 24D8FFE0 */  addiu $t8, $a2, -0x20
/* 0042A7CC 016D7004 */  sllv  $t6, $t5, $t3
/* 0042A7D0 2F080020 */  sltiu $t0, $t8, 0x20
/* 0042A7D4 AC4A0004 */  sw    $t2, 4($v0)
/* 0042A7D8 01C0C827 */  not   $t9, $t6
/* 0042A7DC 00085023 */  negu  $t2, $t0
/* 0042A7E0 030A4804 */  sllv  $t1, $t2, $t8
/* 0042A7E4 01F96024 */  and   $t4, $t7, $t9
/* 0042A7E8 05210020 */  bgez  $t1, .L0042A86C
/* 0042A7EC AC4C0008 */   sw    $t4, 8($v0)
/* 0042A7F0 24CD0001 */  addiu $t5, $a2, 1
/* 0042A7F4 8C4C0000 */  lw    $t4, ($v0)
/* 0042A7F8 2DAB0020 */  sltiu $t3, $t5, 0x20
/* 0042A7FC 01A07027 */  not   $t6, $t5
/* 0042A800 01CB7804 */  sllv  $t7, $t3, $t6
/* 0042A804 01E0C827 */  not   $t9, $t7
/* 0042A808 25AAFFE0 */  addiu $t2, $t5, -0x20
/* 0042A80C 2D580020 */  sltiu $t8, $t2, 0x20
/* 0042A810 01A04827 */  not   $t1, $t5
/* 0042A814 01994024 */  and   $t0, $t4, $t9
/* 0042A818 01385804 */  sllv  $t3, $t8, $t1
/* 0042A81C 8C4F0004 */  lw    $t7, 4($v0)
/* 0042A820 01607027 */  not   $t6, $t3
/* 0042A824 AC480000 */  sw    $t0, ($v0)
/* 0042A828 25B9FFC0 */  addiu $t9, $t5, -0x40
/* 0042A82C 8C4B0008 */  lw    $t3, 8($v0)
/* 0042A830 2F280020 */  sltiu $t0, $t9, 0x20
/* 0042A834 01A05027 */  not   $t2, $t5
/* 0042A838 0148C004 */  sllv  $t8, $t0, $t2
/* 0042A83C 03004827 */  not   $t1, $t8
/* 0042A840 01EE6024 */  and   $t4, $t7, $t6
/* 0042A844 01697824 */  and   $t7, $t3, $t1
/* 0042A848 AC4F0008 */  sw    $t7, 8($v0)
/* 0042A84C AC4C0004 */  sw    $t4, 4($v0)
/* 0042A850 8F998528 */  lw    $t9, %call16(remove_from_fp_free_list)($gp)
/* 0042A854 00C02025 */  move  $a0, $a2
/* 0042A858 24050003 */  li    $a1, 3
/* 0042A85C 0320F809 */  jalr  $t9
/* 0042A860 00000000 */   nop   
/* 0042A864 10000029 */  b     .L0042A90C
/* 0042A868 8FBC0018 */   lw    $gp, 0x18($sp)
.L0042A86C:
/* 0042A86C 8F998524 */  lw    $t9, %call16(remove_from_free_list)($gp)
/* 0042A870 00C02025 */  move  $a0, $a2
/* 0042A874 AFA50028 */  sw    $a1, 0x28($sp)
/* 0042A878 0320F809 */  jalr  $t9
/* 0042A87C A3A60027 */   sb    $a2, 0x27($sp)
/* 0042A880 8FA50028 */  lw    $a1, 0x28($sp)
/* 0042A884 93A60027 */  lbu   $a2, 0x27($sp)
/* 0042A888 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042A88C 8CAE0028 */  lw    $t6, 0x28($a1)
/* 0042A890 24C40001 */  addiu $a0, $a2, 1
/* 0042A894 2C8C0020 */  sltiu $t4, $a0, 0x20
/* 0042A898 29C10005 */  slti  $at, $t6, 5
/* 0042A89C 1420001B */  bnez  $at, .L0042A90C
/* 0042A8A0 8F828B90 */   lw     $v0, %got(saved_regs)($gp)
/* 0042A8A4 8C4A0000 */  lw    $t2, ($v0)
/* 0042A8A8 0080C827 */  not   $t9, $a0
/* 0042A8AC 032C6804 */  sllv  $t5, $t4, $t9
/* 0042A8B0 01A04027 */  not   $t0, $t5
/* 0042A8B4 0148C024 */  and   $t8, $t2, $t0
/* 0042A8B8 248BFFE0 */  addiu $t3, $a0, -0x20
/* 0042A8BC 2D690020 */  sltiu $t1, $t3, 0x20
/* 0042A8C0 00807827 */  not   $t7, $a0
/* 0042A8C4 01E97004 */  sllv  $t6, $t1, $t7
/* 0042A8C8 AC580000 */  sw    $t8, ($v0)
/* 0042A8CC 248AFFC0 */  addiu $t2, $a0, -0x40
/* 0042A8D0 8C4F0008 */  lw    $t7, 8($v0)
/* 0042A8D4 8C590004 */  lw    $t9, 4($v0)
/* 0042A8D8 2D480020 */  sltiu $t0, $t2, 0x20
/* 0042A8DC 0080C027 */  not   $t8, $a0
/* 0042A8E0 03085804 */  sllv  $t3, $t0, $t8
/* 0042A8E4 01C06027 */  not   $t4, $t6
/* 0042A8E8 01604827 */  not   $t1, $t3
/* 0042A8EC 01E97024 */  and   $t6, $t7, $t1
/* 0042A8F0 032C6824 */  and   $t5, $t9, $t4
/* 0042A8F4 AC4D0004 */  sw    $t5, 4($v0)
/* 0042A8F8 AC4E0008 */  sw    $t6, 8($v0)
/* 0042A8FC 8F998524 */  lw    $t9, %call16(remove_from_free_list)($gp)
/* 0042A900 0320F809 */  jalr  $t9
/* 0042A904 00000000 */   nop   
/* 0042A908 8FBC0018 */  lw    $gp, 0x18($sp)
.L0042A90C:
/* 0042A90C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0042A910 27BD0028 */  addiu $sp, $sp, 0x28
/* 0042A914 03E00008 */  jr    $ra
/* 0042A918 00000000 */   nop   
    .type save_vreg, @function
    .size save_vreg, .-save_vreg
    .end save_vreg

glabel pass_in_register
    .ent pass_in_register
    # 0042A9A8 load_parm_vreg
/* 0042A91C 3C1C0FBF */  .cpload $t9
/* 0042A920 279C5134 */  
/* 0042A924 0399E021 */  
/* 0042A928 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0042A92C AFB00018 */  sw    $s0, 0x18($sp)
/* 0042A930 8F908AD4 */  lw     $s0, %got(pdefs)($gp)
/* 0042A934 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042A938 00808825 */  move  $s1, $a0
/* 0042A93C 8E100000 */  lw    $s0, ($s0)
/* 0042A940 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0042A944 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042A948 52000012 */  beql  $s0, $zero, .L0042A994
/* 0042A94C 24020048 */   li    $v0, 72
.L0042A950:
/* 0042A950 8F998600 */  lw    $t9, %call16(overlap)($gp)
/* 0042A954 02202025 */  move  $a0, $s1
/* 0042A958 02002825 */  move  $a1, $s0
/* 0042A95C 0320F809 */  jalr  $t9
/* 0042A960 00000000 */   nop   
/* 0042A964 10400007 */  beqz  $v0, .L0042A984
/* 0042A968 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0042A96C 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 0042A970 02002025 */  move  $a0, $s0
/* 0042A974 0320F809 */  jalr  $t9
/* 0042A978 00000000 */   nop   
/* 0042A97C 10000005 */  b     .L0042A994
/* 0042A980 8FBC0020 */   lw    $gp, 0x20($sp)
.L0042A984:
/* 0042A984 8E100008 */  lw    $s0, 8($s0)
/* 0042A988 1600FFF1 */  bnez  $s0, .L0042A950
/* 0042A98C 00000000 */   nop   
/* 0042A990 24020048 */  li    $v0, 72
.L0042A994:
/* 0042A994 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0042A998 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042A99C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042A9A0 03E00008 */  jr    $ra
/* 0042A9A4 27BD0028 */   addiu $sp, $sp, 0x28
    .type pass_in_register, @function
    .size pass_in_register, .-pass_in_register
    .end pass_in_register

glabel load_parm_vreg
    .ent load_parm_vreg
    # 0042BDAC eval
/* 0042A9A8 3C1C0FBF */  .cpload $t9
/* 0042A9AC 279C50A8 */  
/* 0042A9B0 0399E021 */  
/* 0042A9B4 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0042A9B8 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0042A9BC AFBC0028 */  sw    $gp, 0x28($sp)
/* 0042A9C0 AFB10024 */  sw    $s1, 0x24($sp)
/* 0042A9C4 AFB00020 */  sw    $s0, 0x20($sp)
/* 0042A9C8 8C900030 */  lw    $s0, 0x30($a0)
/* 0042A9CC 8F99839C */  lw    $t9, %call16(pass_in_register)($gp)
/* 0042A9D0 00808825 */  move  $s1, $a0
/* 0042A9D4 06010002 */  bgez  $s0, .L0042A9E0
/* 0042A9D8 02000821 */   move  $at, $s0
/* 0042A9DC 26010003 */  addiu $at, $s0, 3
.L0042A9E0:
/* 0042A9E0 00018083 */  sra   $s0, $at, 2
/* 0042A9E4 321000FF */  andi  $s0, $s0, 0xff
/* 0042A9E8 0320F809 */  jalr  $t9
/* 0042A9EC 02202025 */   move  $a0, $s1
/* 0042A9F0 304E00FF */  andi  $t6, $v0, 0xff
/* 0042A9F4 24010048 */  li    $at, 72
/* 0042A9F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042A9FC 11C10036 */  beq   $t6, $at, .L0042AAD8
/* 0042AA00 304500FF */   andi  $a1, $v0, 0xff
/* 0042AA04 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 0042AA08 92260021 */  lbu   $a2, 0x21($s1)
/* 0042AA0C 02002025 */  move  $a0, $s0
/* 0042AA10 0320F809 */  jalr  $t9
/* 0042AA14 30C6001F */   andi  $a2, $a2, 0x1f
/* 0042AA18 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042AA1C 24010003 */  li    $at, 3
/* 0042AA20 8F8F89A4 */  lw     $t7, %got(source_language)($gp)
/* 0042AA24 8DEF0000 */  lw    $t7, ($t7)
/* 0042AA28 55E1003A */  bnel  $t7, $at, .L0042AB14
/* 0042AA2C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0042AA30 8E220028 */  lw    $v0, 0x28($s1)
/* 0042AA34 28410004 */  slti  $at, $v0, 4
/* 0042AA38 50200036 */  beql  $at, $zero, .L0042AB14
/* 0042AA3C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0042AA40 92380021 */  lbu   $t8, 0x21($s1)
/* 0042AA44 24010006 */  li    $at, 6
/* 0042AA48 24040003 */  li    $a0, 3
/* 0042AA4C 3319001F */  andi  $t9, $t8, 0x1f
/* 0042AA50 17210017 */  bne   $t9, $at, .L0042AAB0
/* 0042AA54 02002825 */   move  $a1, $s0
/* 0042AA58 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042AA5C 000240C0 */  sll   $t0, $v0, 3
/* 0042AA60 24090020 */  li    $t1, 32
/* 0042AA64 01283823 */  subu  $a3, $t1, $t0
/* 0042AA68 2404004F */  li    $a0, 79
/* 0042AA6C 02002825 */  move  $a1, $s0
/* 0042AA70 02003025 */  move  $a2, $s0
/* 0042AA74 0320F809 */  jalr  $t9
/* 0042AA78 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042AA7C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042AA80 8E2A0028 */  lw    $t2, 0x28($s1)
/* 0042AA84 240C0020 */  li    $t4, 32
/* 0042AA88 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042AA8C 000A58C0 */  sll   $t3, $t2, 3
/* 0042AA90 018B3823 */  subu  $a3, $t4, $t3
/* 0042AA94 24040053 */  li    $a0, 83
/* 0042AA98 02002825 */  move  $a1, $s0
/* 0042AA9C 02003025 */  move  $a2, $s0
/* 0042AAA0 0320F809 */  jalr  $t9
/* 0042AAA4 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042AAA8 10000019 */  b     .L0042AB10
/* 0042AAAC 8FBC0028 */   lw    $gp, 0x28($sp)
.L0042AAB0:
/* 0042AAB0 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042AAB4 000268C0 */  sll   $t5, $v0, 3
/* 0042AAB8 240E0001 */  li    $t6, 1
/* 0042AABC 01AE3804 */  sllv  $a3, $t6, $t5
/* 0042AAC0 24E7FFFF */  addiu $a3, $a3, -1
/* 0042AAC4 02003025 */  move  $a2, $s0
/* 0042AAC8 0320F809 */  jalr  $t9
/* 0042AACC AFA00010 */   sw    $zero, 0x10($sp)
/* 0042AAD0 1000000F */  b     .L0042AB10
/* 0042AAD4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0042AAD8:
/* 0042AAD8 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 0042AADC 8F8488A4 */  lw     $a0, %got(load_table)($gp)
/* 0042AAE0 02202825 */  move  $a1, $s1
/* 0042AAE4 0320F809 */  jalr  $t9
/* 0042AAE8 02003025 */   move  $a2, $s0
/* 0042AAEC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0042AAF0 00402025 */  move  $a0, $v0
/* 0042AAF4 02202825 */  move  $a1, $s1
/* 0042AAF8 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 0042AAFC 02003025 */  move  $a2, $s0
/* 0042AB00 00003825 */  move  $a3, $zero
/* 0042AB04 0320F809 */  jalr  $t9
/* 0042AB08 00000000 */   nop   
/* 0042AB0C 8FBC0028 */  lw    $gp, 0x28($sp)
.L0042AB10:
/* 0042AB10 8FBF002C */  lw    $ra, 0x2c($sp)
.L0042AB14:
/* 0042AB14 8FB00020 */  lw    $s0, 0x20($sp)
/* 0042AB18 8FB10024 */  lw    $s1, 0x24($sp)
/* 0042AB1C 03E00008 */  jr    $ra
/* 0042AB20 27BD0030 */   addiu $sp, $sp, 0x30
    .type load_parm_vreg, @function
    .size load_parm_vreg, .-load_parm_vreg
    .end load_parm_vreg

glabel in_parm_regs
    .ent in_parm_regs
    # 0042AB88 gen_regs
/* 0042AB24 3C1C0FBF */  .cpload $t9
/* 0042AB28 279C4F2C */  
/* 0042AB2C 0399E021 */  
/* 0042AB30 2C820004 */  sltiu $v0, $a0, 4
/* 0042AB34 38430001 */  xori  $v1, $v0, 1
/* 0042AB38 10600006 */  beqz  $v1, .L0042AB54
/* 0042AB3C AFA40000 */   sw    $a0, ($sp)
/* 0042AB40 8F8E89FC */  lw     $t6, %got(n_parm_regs)($gp)
/* 0042AB44 8DCE0000 */  lw    $t6, ($t6)
/* 0042AB48 25CF0003 */  addiu $t7, $t6, 3
/* 0042AB4C 01E4182B */  sltu  $v1, $t7, $a0
/* 0042AB50 38630001 */  xori  $v1, $v1, 1
.L0042AB54:
/* 0042AB54 1460000A */  bnez  $v1, .L0042AB80
/* 0042AB58 2C82002C */   sltiu $v0, $a0, 0x2c
/* 0042AB5C 38430001 */  xori  $v1, $v0, 1
/* 0042AB60 10600007 */  beqz  $v1, .L0042AB80
/* 0042AB64 00000000 */   nop   
/* 0042AB68 8F988A00 */  lw     $t8, %got(n_fp_parm_regs)($gp)
/* 0042AB6C 8F180000 */  lw    $t8, ($t8)
/* 0042AB70 0018C840 */  sll   $t9, $t8, 1
/* 0042AB74 2728002A */  addiu $t0, $t9, 0x2a
/* 0042AB78 0104182B */  sltu  $v1, $t0, $a0
/* 0042AB7C 38630001 */  xori  $v1, $v1, 1
.L0042AB80:
/* 0042AB80 03E00008 */  jr    $ra
/* 0042AB84 00601025 */   move  $v0, $v1
    .type in_parm_regs, @function
    .size in_parm_regs, .-in_parm_regs
    .end in_parm_regs

glabel gen_regs
    .ent gen_regs
    # 0042BDAC eval
/* 0042AB88 3C1C0FBF */  .cpload $t9
/* 0042AB8C 279C4EC8 */  
/* 0042AB90 0399E021 */  
/* 0042AB94 9082002F */  lbu   $v0, 0x2f($a0)
/* 0042AB98 8C8E0028 */  lw    $t6, 0x28($a0)
/* 0042AB9C 8C850024 */  lw    $a1, 0x24($a0)
/* 0042ABA0 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0042ABA4 004E1821 */  addu  $v1, $v0, $t6
/* 0042ABA8 24AFFFFF */  addiu $t7, $a1, -1
/* 0042ABAC 2463FFFF */  addiu $v1, $v1, -1
/* 0042ABB0 2DE10004 */  sltiu $at, $t7, 4
/* 0042ABB4 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0042ABB8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0042ABBC AFB30024 */  sw    $s3, 0x24($sp)
/* 0042ABC0 AFB20020 */  sw    $s2, 0x20($sp)
/* 0042ABC4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042ABC8 AFB00018 */  sw    $s0, 0x18($sp)
/* 0042ABCC 306300FF */  andi  $v1, $v1, 0xff
/* 0042ABD0 102000BE */  beqz  $at, .L0042AECC
/* 0042ABD4 00403025 */   move  $a2, $v0
/* 0042ABD8 8F818038 */  lw    $at, %got(jtbl_1000A888)($gp)
/* 0042ABDC 000F7880 */  sll   $t7, $t7, 2
/* 0042ABE0 002F0821 */  addu  $at, $at, $t7
/* 0042ABE4 8C2FA888 */  lw    $t7, %lo(jtbl_1000A888)($at)
/* 0042ABE8 01FC7821 */  addu  $t7, $t7, $gp
/* 0042ABEC 01E00008 */  jr    $t7
/* 0042ABF0 00000000 */   nop   
.L0042ABF4:
/* 0042ABF4 0062082B */  sltu  $at, $v1, $v0
/* 0042ABF8 142000B4 */  bnez  $at, .L0042AECC
/* 0042ABFC 00408025 */   move  $s0, $v0
/* 0042AC00 24730001 */  addiu $s3, $v1, 1
/* 0042AC04 8F928B8C */  lw     $s2, %got(ugen_fp_callee_saved)($gp)
/* 0042AC08 8F918B90 */  lw     $s1, %got(saved_regs)($gp)
/* 0042AC0C 8E290000 */  lw    $t1, ($s1)
.L0042AC10:
/* 0042AC10 2E180020 */  sltiu $t8, $s0, 0x20
/* 0042AC14 0200C827 */  not   $t9, $s0
/* 0042AC18 03384004 */  sllv  $t0, $t8, $t9
/* 0042AC1C 260BFFE0 */  addiu $t3, $s0, -0x20
/* 0042AC20 2D6C0020 */  sltiu $t4, $t3, 0x20
/* 0042AC24 01285025 */  or    $t2, $t1, $t0
/* 0042AC28 02006827 */  not   $t5, $s0
/* 0042AC2C 8E2B0008 */  lw    $t3, 8($s1)
/* 0042AC30 8E2F0004 */  lw    $t7, 4($s1)
/* 0042AC34 01AC7004 */  sllv  $t6, $t4, $t5
/* 0042AC38 2619FFC0 */  addiu $t9, $s0, -0x40
/* 0042AC3C 2F290020 */  sltiu $t1, $t9, 0x20
/* 0042AC40 AE2A0000 */  sw    $t2, ($s1)
/* 0042AC44 02004027 */  not   $t0, $s0
/* 0042AC48 01095004 */  sllv  $t2, $t1, $t0
/* 0042AC4C 2E0D0060 */  sltiu $t5, $s0, 0x60
/* 0042AC50 016A6025 */  or    $t4, $t3, $t2
/* 0042AC54 01EEC025 */  or    $t8, $t7, $t6
/* 0042AC58 AE380004 */  sw    $t8, 4($s1)
/* 0042AC5C 11A00007 */  beqz  $t5, .L0042AC7C
/* 0042AC60 AE2C0008 */   sw    $t4, 8($s1)
/* 0042AC64 00107943 */  sra   $t7, $s0, 5
/* 0042AC68 000F7080 */  sll   $t6, $t7, 2
/* 0042AC6C 024EC021 */  addu  $t8, $s2, $t6
/* 0042AC70 8F190000 */  lw    $t9, ($t8)
/* 0042AC74 02194804 */  sllv  $t1, $t9, $s0
/* 0042AC78 292D0000 */  slti  $t5, $t1, 0
.L0042AC7C:
/* 0042AC7C 11A0001D */  beqz  $t5, .L0042ACF4
/* 0042AC80 2E0B0020 */   sltiu $t3, $s0, 0x20
/* 0042AC84 8E4E0000 */  lw    $t6, ($s2)
/* 0042AC88 02005027 */  not   $t2, $s0
/* 0042AC8C 014B6004 */  sllv  $t4, $t3, $t2
/* 0042AC90 01807827 */  not   $t7, $t4
/* 0042AC94 01CFC024 */  and   $t8, $t6, $t7
/* 0042AC98 2619FFE0 */  addiu $t9, $s0, -0x20
/* 0042AC9C 2F290020 */  sltiu $t1, $t9, 0x20
/* 0042ACA0 02004027 */  not   $t0, $s0
/* 0042ACA4 01096804 */  sllv  $t5, $t1, $t0
/* 0042ACA8 AE580000 */  sw    $t8, ($s2)
/* 0042ACAC 260EFFC0 */  addiu $t6, $s0, -0x40
/* 0042ACB0 8E480008 */  lw    $t0, 8($s2)
/* 0042ACB4 8E4A0004 */  lw    $t2, 4($s2)
/* 0042ACB8 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0042ACBC 0200C027 */  not   $t8, $s0
/* 0042ACC0 030FC804 */  sllv  $t9, $t7, $t8
/* 0042ACC4 01A05827 */  not   $t3, $t5
/* 0042ACC8 03204827 */  not   $t1, $t9
/* 0042ACCC 01096824 */  and   $t5, $t0, $t1
/* 0042ACD0 014B6024 */  and   $t4, $t2, $t3
/* 0042ACD4 AE4C0004 */  sw    $t4, 4($s2)
/* 0042ACD8 AE4D0008 */  sw    $t5, 8($s2)
/* 0042ACDC 8F998528 */  lw    $t9, %call16(remove_from_fp_free_list)($gp)
/* 0042ACE0 02002025 */  move  $a0, $s0
/* 0042ACE4 00002825 */  move  $a1, $zero
/* 0042ACE8 0320F809 */  jalr  $t9
/* 0042ACEC 00000000 */   nop   
/* 0042ACF0 8FBC0028 */  lw    $gp, 0x28($sp)
.L0042ACF4:
/* 0042ACF4 26100001 */  addiu $s0, $s0, 1
/* 0042ACF8 5613FFC5 */  bnel  $s0, $s3, .L0042AC10
/* 0042ACFC 8E290000 */   lw    $t1, ($s1)
/* 0042AD00 10000073 */  b     .L0042AED0
/* 0042AD04 8FBF002C */   lw    $ra, 0x2c($sp)
.L0042AD08:
/* 0042AD08 0062082B */  sltu  $at, $v1, $v0
/* 0042AD0C 1420006F */  bnez  $at, .L0042AECC
/* 0042AD10 00408025 */   move  $s0, $v0
/* 0042AD14 24730001 */  addiu $s3, $v1, 1
/* 0042AD18 8F918B90 */  lw     $s1, %got(saved_regs)($gp)
/* 0042AD1C 8E2F0000 */  lw    $t7, ($s1)
.L0042AD20:
/* 0042AD20 2E0A0020 */  sltiu $t2, $s0, 0x20
/* 0042AD24 02005827 */  not   $t3, $s0
/* 0042AD28 016A6004 */  sllv  $t4, $t2, $t3
/* 0042AD2C 01807027 */  not   $t6, $t4
/* 0042AD30 01EEC024 */  and   $t8, $t7, $t6
/* 0042AD34 2619FFE0 */  addiu $t9, $s0, -0x20
/* 0042AD38 2F280020 */  sltiu $t0, $t9, 0x20
/* 0042AD3C 02004827 */  not   $t1, $s0
/* 0042AD40 01286804 */  sllv  $t5, $t0, $t1
/* 0042AD44 AE380000 */  sw    $t8, ($s1)
/* 0042AD48 260FFFC0 */  addiu $t7, $s0, -0x40
/* 0042AD4C 8E290008 */  lw    $t1, 8($s1)
/* 0042AD50 8E2B0004 */  lw    $t3, 4($s1)
/* 0042AD54 2DEE0020 */  sltiu $t6, $t7, 0x20
/* 0042AD58 0200C027 */  not   $t8, $s0
/* 0042AD5C 030EC804 */  sllv  $t9, $t6, $t8
/* 0042AD60 01A05027 */  not   $t2, $t5
/* 0042AD64 03204027 */  not   $t0, $t9
/* 0042AD68 01286824 */  and   $t5, $t1, $t0
/* 0042AD6C 016A6024 */  and   $t4, $t3, $t2
/* 0042AD70 AE2C0004 */  sw    $t4, 4($s1)
/* 0042AD74 AE2D0008 */  sw    $t5, 8($s1)
/* 0042AD78 8F9983A4 */  lw    $t9, %call16(in_parm_regs)($gp)
/* 0042AD7C 02002025 */  move  $a0, $s0
/* 0042AD80 0320F809 */  jalr  $t9
/* 0042AD84 00000000 */   nop   
/* 0042AD88 14400006 */  bnez  $v0, .L0042ADA4
/* 0042AD8C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0042AD90 8F998524 */  lw    $t9, %call16(remove_from_free_list)($gp)
/* 0042AD94 02002025 */  move  $a0, $s0
/* 0042AD98 0320F809 */  jalr  $t9
/* 0042AD9C 00000000 */   nop   
/* 0042ADA0 8FBC0028 */  lw    $gp, 0x28($sp)
.L0042ADA4:
/* 0042ADA4 26100001 */  addiu $s0, $s0, 1
/* 0042ADA8 5613FFDD */  bnel  $s0, $s3, .L0042AD20
/* 0042ADAC 8E2F0000 */   lw    $t7, ($s1)
/* 0042ADB0 10000047 */  b     .L0042AED0
/* 0042ADB4 8FBF002C */   lw    $ra, 0x2c($sp)
.L0042ADB8:
/* 0042ADB8 0066082A */  slt   $at, $v1, $a2
/* 0042ADBC 305000FF */  andi  $s0, $v0, 0xff
/* 0042ADC0 14200042 */  bnez  $at, .L0042AECC
/* 0042ADC4 00609025 */   move  $s2, $v1
/* 0042ADC8 8F918B90 */  lw     $s1, %got(saved_regs)($gp)
/* 0042ADCC 8E2E0000 */  lw    $t6, ($s1)
.L0042ADD0:
/* 0042ADD0 2E0B0020 */  sltiu $t3, $s0, 0x20
/* 0042ADD4 02005027 */  not   $t2, $s0
/* 0042ADD8 014B6004 */  sllv  $t4, $t3, $t2
/* 0042ADDC 01807827 */  not   $t7, $t4
/* 0042ADE0 2619FFE0 */  addiu $t9, $s0, -0x20
/* 0042ADE4 01CFC024 */  and   $t8, $t6, $t7
/* 0042ADE8 8E2A0004 */  lw    $t2, 4($s1)
/* 0042ADEC 2F290020 */  sltiu $t1, $t9, 0x20
/* 0042ADF0 02004027 */  not   $t0, $s0
/* 0042ADF4 01096804 */  sllv  $t5, $t1, $t0
/* 0042ADF8 01A05827 */  not   $t3, $t5
/* 0042ADFC AE380000 */  sw    $t8, ($s1)
/* 0042AE00 260EFFC0 */  addiu $t6, $s0, -0x40
/* 0042AE04 8E280008 */  lw    $t0, 8($s1)
/* 0042AE08 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0042AE0C 0200C027 */  not   $t8, $s0
/* 0042AE10 014B6024 */  and   $t4, $t2, $t3
/* 0042AE14 030FC804 */  sllv  $t9, $t7, $t8
/* 0042AE18 03204827 */  not   $t1, $t9
/* 0042AE1C 260A0001 */  addiu $t2, $s0, 1
/* 0042AE20 AE2C0004 */  sw    $t4, 4($s1)
/* 0042AE24 01096824 */  and   $t5, $t0, $t1
/* 0042AE28 8E380000 */  lw    $t8, ($s1)
/* 0042AE2C 01406027 */  not   $t4, $t2
/* 0042AE30 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0042AE34 018B7004 */  sllv  $t6, $t3, $t4
/* 0042AE38 AE2D0008 */  sw    $t5, 8($s1)
/* 0042AE3C 01C07827 */  not   $t7, $t6
/* 0042AE40 2548FFE0 */  addiu $t0, $t2, -0x20
/* 0042AE44 2D090020 */  sltiu $t1, $t0, 0x20
/* 0042AE48 01406827 */  not   $t5, $t2
/* 0042AE4C 030FC824 */  and   $t9, $t8, $t7
/* 0042AE50 01A95804 */  sllv  $t3, $t1, $t5
/* 0042AE54 8E2E0004 */  lw    $t6, 4($s1)
/* 0042AE58 01606027 */  not   $t4, $t3
/* 0042AE5C AE390000 */  sw    $t9, ($s1)
/* 0042AE60 254FFFC0 */  addiu $t7, $t2, -0x40
/* 0042AE64 8E2B0008 */  lw    $t3, 8($s1)
/* 0042AE68 2DF90020 */  sltiu $t9, $t7, 0x20
/* 0042AE6C 01404027 */  not   $t0, $t2
/* 0042AE70 01194804 */  sllv  $t1, $t9, $t0
/* 0042AE74 01206827 */  not   $t5, $t1
/* 0042AE78 01CCC024 */  and   $t8, $t6, $t4
/* 0042AE7C 016D7024 */  and   $t6, $t3, $t5
/* 0042AE80 AE2E0008 */  sw    $t6, 8($s1)
/* 0042AE84 AE380004 */  sw    $t8, 4($s1)
/* 0042AE88 8F9983A4 */  lw    $t9, %call16(in_parm_regs)($gp)
/* 0042AE8C 02002025 */  move  $a0, $s0
/* 0042AE90 0320F809 */  jalr  $t9
/* 0042AE94 00000000 */   nop   
/* 0042AE98 14400007 */  bnez  $v0, .L0042AEB8
/* 0042AE9C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0042AEA0 8F998528 */  lw    $t9, %call16(remove_from_fp_free_list)($gp)
/* 0042AEA4 02002025 */  move  $a0, $s0
/* 0042AEA8 24050003 */  li    $a1, 3
/* 0042AEAC 0320F809 */  jalr  $t9
/* 0042AEB0 00000000 */   nop   
/* 0042AEB4 8FBC0028 */  lw    $gp, 0x28($sp)
.L0042AEB8:
/* 0042AEB8 26100002 */  addiu $s0, $s0, 2
/* 0042AEBC 321000FF */  andi  $s0, $s0, 0xff
/* 0042AEC0 0250082A */  slt   $at, $s2, $s0
/* 0042AEC4 5020FFC2 */  beql  $at, $zero, .L0042ADD0
/* 0042AEC8 8E2E0000 */   lw    $t6, ($s1)
.L0042AECC:
/* 0042AECC 8FBF002C */  lw    $ra, 0x2c($sp)
.L0042AED0:
/* 0042AED0 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042AED4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042AED8 8FB20020 */  lw    $s2, 0x20($sp)
/* 0042AEDC 8FB30024 */  lw    $s3, 0x24($sp)
/* 0042AEE0 03E00008 */  jr    $ra
/* 0042AEE4 27BD0030 */   addiu $sp, $sp, 0x30
    .type gen_regs, @function
    .size gen_regs, .-gen_regs
    .end gen_regs

glabel get_saved_regs_size
    .ent get_saved_regs_size
    # 0042BDAC eval
/* 0042AEE8 3C1C0FBF */  .cpload $t9
/* 0042AEEC 279C4B68 */  
/* 0042AEF0 0399E021 */  
/* 0042AEF4 8F8E89DC */  lw     $t6, %got(basicint)($gp)
/* 0042AEF8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0042AEFC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042AF00 91CE0000 */  lbu   $t6, ($t6)
/* 0042AF04 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0042AF08 00802825 */  move  $a1, $a0
/* 0042AF0C 15C00003 */  bnez  $t6, .L0042AF1C
/* 0042AF10 24060008 */   li    $a2, 8
/* 0042AF14 10000001 */  b     .L0042AF1C
/* 0042AF18 24060004 */   li    $a2, 4
.L0042AF1C:
/* 0042AF1C 8CA50008 */  lw    $a1, 8($a1)
/* 0042AF20 00001825 */  move  $v1, $zero
/* 0042AF24 24070006 */  li    $a3, 6
/* 0042AF28 10A000A6 */  beqz  $a1, .L0042B1C4
/* 0042AF2C 00004025 */   move  $t0, $zero
/* 0042AF30 8F8989E4 */  lw     $t1, %got(pic_level)($gp)
.L0042AF34:
/* 0042AF34 10000086 */  b     .L0042B150
/* 0042AF38 90A20020 */   lbu   $v0, 0x20($a1)
/* 0042AF3C 8CA20030 */  lw    $v0, 0x30($a1)
.L0042AF40:
/* 0042AF40 2401FFFF */  li    $at, -1
/* 0042AF44 5041009D */  beql  $v0, $at, .L0042B1BC
/* 0042AF48 8CA50008 */   lw    $a1, 8($a1)
/* 0042AF4C 8F8F8A3C */  lw     $t7, %got(ignore_vreg)($gp)
/* 0042AF50 91EF0000 */  lbu   $t7, ($t7)
/* 0042AF54 55E00099 */  bnel  $t7, $zero, .L0042B1BC
/* 0042AF58 8CA50008 */   lw    $a1, 8($a1)
/* 0042AF5C 8F998328 */  lw    $t9, %call16(is_saved_reg)($gp)
/* 0042AF60 04410003 */  bgez  $v0, .L0042AF70
/* 0042AF64 00022083 */   sra   $a0, $v0, 2
/* 0042AF68 24410003 */  addiu $at, $v0, 3
/* 0042AF6C 00012083 */  sra   $a0, $at, 2
.L0042AF70:
/* 0042AF70 308400FF */  andi  $a0, $a0, 0xff
/* 0042AF74 AFA30030 */  sw    $v1, 0x30($sp)
/* 0042AF78 AFA50038 */  sw    $a1, 0x38($sp)
/* 0042AF7C AFA60024 */  sw    $a2, 0x24($sp)
/* 0042AF80 AFA70028 */  sw    $a3, 0x28($sp)
/* 0042AF84 0320F809 */  jalr  $t9
/* 0042AF88 A3A80023 */   sb    $t0, 0x23($sp)
/* 0042AF8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0042AF90 8FA30030 */  lw    $v1, 0x30($sp)
/* 0042AF94 8FA50038 */  lw    $a1, 0x38($sp)
/* 0042AF98 8FA60024 */  lw    $a2, 0x24($sp)
/* 0042AF9C 8FA70028 */  lw    $a3, 0x28($sp)
/* 0042AFA0 93A80023 */  lbu   $t0, 0x23($sp)
/* 0042AFA4 10400084 */  beqz  $v0, .L0042B1B8
/* 0042AFA8 8F8989E4 */   lw     $t1, %got(pic_level)($gp)
/* 0042AFAC 90B80021 */  lbu   $t8, 0x21($a1)
/* 0042AFB0 3C01000C */  lui   $at, 0xc
/* 0042AFB4 34218000 */  ori   $at, $at, 0x8000
/* 0042AFB8 3319001F */  andi  $t9, $t8, 0x1f
/* 0042AFBC 2F2A0020 */  sltiu $t2, $t9, 0x20
/* 0042AFC0 000A5823 */  negu  $t3, $t2
/* 0042AFC4 01616024 */  and   $t4, $t3, $at
/* 0042AFC8 032C6804 */  sllv  $t5, $t4, $t9
/* 0042AFCC 05A30004 */  bgezl $t5, .L0042AFE0
/* 0042AFD0 8CAE0028 */   lw    $t6, 0x28($a1)
/* 0042AFD4 10000078 */  b     .L0042B1B8
/* 0042AFD8 24630008 */   addiu $v1, $v1, 8
/* 0042AFDC 8CAE0028 */  lw    $t6, 0x28($a1)
.L0042AFE0:
/* 0042AFE0 25CF0003 */  addiu $t7, $t6, 3
/* 0042AFE4 05E10003 */  bgez  $t7, .L0042AFF4
/* 0042AFE8 000FC083 */   sra   $t8, $t7, 2
/* 0042AFEC 25E10003 */  addiu $at, $t7, 3
/* 0042AFF0 0001C083 */  sra   $t8, $at, 2
.L0042AFF4:
/* 0042AFF4 00185080 */  sll   $t2, $t8, 2
/* 0042AFF8 1000006F */  b     .L0042B1B8
/* 0042AFFC 006A1821 */   addu  $v1, $v1, $t2
/* 0042B000 90AB0021 */  lbu   $t3, 0x21($a1)
.L0042B004:
/* 0042B004 8F848A6C */  lw     $a0, %got(use_real_fp_for_proc)($gp)
/* 0042B008 24010006 */  li    $at, 6
/* 0042B00C 000B6600 */  sll   $t4, $t3, 0x18
/* 0042B010 000CCF42 */  srl   $t9, $t4, 0x1d
/* 0042B014 1721000C */  bne   $t9, $at, .L0042B048
/* 0042B018 90840000 */   lbu   $a0, ($a0)
/* 0042B01C 8D2D0000 */  lw    $t5, ($t1)
/* 0042B020 8F8289B4 */  lw     $v0, %got(pseudo_leaf)($gp)
/* 0042B024 00067040 */  sll   $t6, $a2, 1
/* 0042B028 19A00003 */  blez  $t5, .L0042B038
/* 0042B02C 90420000 */   lbu   $v0, ($v0)
/* 0042B030 10000002 */  b     .L0042B03C
/* 0042B034 006E1821 */   addu  $v1, $v1, $t6
.L0042B038:
/* 0042B038 00661821 */  addu  $v1, $v1, $a2
.L0042B03C:
/* 0042B03C 10400002 */  beqz  $v0, .L0042B048
/* 0042B040 00000000 */   nop   
/* 0042B044 00661823 */  subu  $v1, $v1, $a2
.L0042B048:
/* 0042B048 5080005C */  beql  $a0, $zero, .L0042B1BC
/* 0042B04C 8CA50008 */   lw    $a1, 8($a1)
/* 0042B050 10000059 */  b     .L0042B1B8
/* 0042B054 00661821 */   addu  $v1, $v1, $a2
/* 0042B058 8CA2002C */  lw    $v0, 0x2c($a1)
.L0042B05C:
/* 0042B05C 2841001F */  slti  $at, $v0, 0x1f
/* 0042B060 50200008 */  beql  $at, $zero, .L0042B084
/* 0042B064 8CA20024 */   lw    $v0, 0x24($a1)
/* 0042B068 8CAF0028 */  lw    $t7, 0x28($a1)
/* 0042B06C 004FC021 */  addu  $t8, $v0, $t7
/* 0042B070 2B01001F */  slti  $at, $t8, 0x1f
/* 0042B074 54200003 */  bnel  $at, $zero, .L0042B084
/* 0042B078 8CA20024 */   lw    $v0, 0x24($a1)
/* 0042B07C 24080001 */  li    $t0, 1
/* 0042B080 8CA20024 */  lw    $v0, 0x24($a1)
.L0042B084:
/* 0042B084 24010002 */  li    $at, 2
/* 0042B088 54410006 */  bnel  $v0, $at, .L0042B0A4
/* 0042B08C 24010004 */   li    $at, 4
/* 0042B090 8CAA0028 */  lw    $t2, 0x28($a1)
/* 0042B094 000A5880 */  sll   $t3, $t2, 2
/* 0042B098 10000047 */  b     .L0042B1B8
/* 0042B09C 006B1821 */   addu  $v1, $v1, $t3
/* 0042B0A0 24010004 */  li    $at, 4
.L0042B0A4:
/* 0042B0A4 54410045 */  bnel  $v0, $at, .L0042B1BC
/* 0042B0A8 8CA50008 */   lw    $a1, 8($a1)
/* 0042B0AC 8CA20028 */  lw    $v0, 0x28($a1)
/* 0042B0B0 00026080 */  sll   $t4, $v0, 2
/* 0042B0B4 006C1821 */  addu  $v1, $v1, $t4
/* 0042B0B8 1000003F */  b     .L0042B1B8
/* 0042B0BC 00E23823 */   subu  $a3, $a3, $v0
.L0042B0C0:
/* 0042B0C0 8F998A1C */  lw     $t9, %got(ufsa)($gp)
/* 0042B0C4 000770C0 */  sll   $t6, $a3, 3
/* 0042B0C8 93390000 */  lbu   $t9, ($t9)
/* 0042B0CC 57200006 */  bnel  $t9, $zero, .L0042B0E8
/* 0042B0D0 006E1821 */   addu  $v1, $v1, $t6
/* 0042B0D4 8F8D8A20 */  lw     $t5, %got(ufsm)($gp)
/* 0042B0D8 91AD0000 */  lbu   $t5, ($t5)
/* 0042B0DC 11A00002 */  beqz  $t5, .L0042B0E8
/* 0042B0E0 00000000 */   nop   
/* 0042B0E4 006E1821 */  addu  $v1, $v1, $t6
.L0042B0E8:
/* 0042B0E8 8F8F89E8 */  lw     $t7, %got(cpalias_ok)($gp)
/* 0042B0EC 91EF0000 */  lbu   $t7, ($t7)
/* 0042B0F0 11E0000D */  beqz  $t7, .L0042B128
/* 0042B0F4 00000000 */   nop   
/* 0042B0F8 8D220000 */  lw    $v0, ($t1)
/* 0042B0FC 0002102A */  slt   $v0, $zero, $v0
/* 0042B100 10400007 */  beqz  $v0, .L0042B120
/* 0042B104 00000000 */   nop   
/* 0042B108 8F8289B4 */  lw     $v0, %got(pseudo_leaf)($gp)
/* 0042B10C 90420000 */  lbu   $v0, ($v0)
/* 0042B110 2C420001 */  sltiu $v0, $v0, 1
/* 0042B114 10400002 */  beqz  $v0, .L0042B120
/* 0042B118 00000000 */   nop   
/* 0042B11C 2D020001 */  sltiu $v0, $t0, 1
.L0042B120:
/* 0042B120 8F8189F0 */  lw     $at, %got(use_cpalias)($gp)
/* 0042B124 A0220000 */  sb    $v0, ($at)
.L0042B128:
/* 0042B128 14600003 */  bnez  $v1, .L0042B138
/* 0042B12C 24620008 */   addiu $v0, $v1, 8
/* 0042B130 10000025 */  b     .L0042B1C8
/* 0042B134 00601025 */   move  $v0, $v1
.L0042B138:
/* 0042B138 04410002 */  bgez  $v0, .L0042B144
/* 0042B13C 00400821 */   move  $at, $v0
/* 0042B140 24410007 */  addiu $at, $v0, 7
.L0042B144:
/* 0042B144 000110C3 */  sra   $v0, $at, 3
/* 0042B148 1000001F */  b     .L0042B1C8
/* 0042B14C 000210C0 */   sll   $v0, $v0, 3
.L0042B150:
/* 0042B150 2C410053 */  sltiu $at, $v0, 0x53
/* 0042B154 1420000F */  bnez  $at, .L0042B194
/* 0042B158 2C41007C */   sltiu $at, $v0, 0x7c
/* 0042B15C 14200005 */  bnez  $at, .L0042B174
/* 0042B160 2401008B */   li    $at, 139
/* 0042B164 5041FF76 */  beql  $v0, $at, .L0042AF40
/* 0042B168 8CA20030 */   lw    $v0, 0x30($a1)
/* 0042B16C 10000013 */  b     .L0042B1BC
/* 0042B170 8CA50008 */   lw    $a1, 8($a1)
.L0042B174:
/* 0042B174 24010068 */  li    $at, 104
/* 0042B178 5041FFB8 */  beql  $v0, $at, .L0042B05C
/* 0042B17C 8CA2002C */   lw    $v0, 0x2c($a1)
/* 0042B180 2C41007A */  sltiu $at, $v0, 0x7a
/* 0042B184 1020FFCE */  beqz  $at, .L0042B0C0
/* 0042B188 00000000 */   nop   
/* 0042B18C 1000000B */  b     .L0042B1BC
/* 0042B190 8CA50008 */   lw    $a1, 8($a1)
.L0042B194:
/* 0042B194 2401001B */  li    $at, 27
/* 0042B198 5041FF9A */  beql  $v0, $at, .L0042B004
/* 0042B19C 90AB0021 */   lbu   $t3, 0x21($a1)
/* 0042B1A0 2401001F */  li    $at, 31
/* 0042B1A4 1041FFC6 */  beq   $v0, $at, .L0042B0C0
/* 0042B1A8 00000000 */   nop   
/* 0042B1AC 24010052 */  li    $at, 82
/* 0042B1B0 1041FFC3 */  beq   $v0, $at, .L0042B0C0
/* 0042B1B4 00000000 */   nop   
.L0042B1B8:
/* 0042B1B8 8CA50008 */  lw    $a1, 8($a1)
.L0042B1BC:
/* 0042B1BC 14A0FF5D */  bnez  $a1, .L0042AF34
/* 0042B1C0 00000000 */   nop   
.L0042B1C4:
/* 0042B1C4 8FA20034 */  lw    $v0, 0x34($sp)
.L0042B1C8:
/* 0042B1C8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0042B1CC 27BD0038 */  addiu $sp, $sp, 0x38
/* 0042B1D0 03E00008 */  jr    $ra
/* 0042B1D4 00000000 */   nop   
    .type get_saved_regs_size, @function
    .size get_saved_regs_size, .-get_saved_regs_size
    .end get_saved_regs_size

glabel unhome_parms
    .ent unhome_parms
    # 0042BDAC eval
/* 0042B1D8 3C1C0FBF */  .cpload $t9
/* 0042B1DC 279C4878 */  
/* 0042B1E0 0399E021 */  
/* 0042B1E4 8F8289FC */  lw     $v0, %got(n_parm_regs)($gp)
/* 0042B1E8 8C420000 */  lw    $v0, ($v0)
/* 0042B1EC 24420003 */  addiu $v0, $v0, 3
/* 0042B1F0 2C410004 */  sltiu $at, $v0, 4
/* 0042B1F4 14200084 */  bnez  $at, .L0042B408
/* 0042B1F8 24420001 */   addiu $v0, $v0, 1
/* 0042B1FC 2445FFFC */  addiu $a1, $v0, -4
/* 0042B200 30A50003 */  andi  $a1, $a1, 3
/* 0042B204 10A0001E */  beqz  $a1, .L0042B280
/* 0042B208 24030004 */   li    $v1, 4
/* 0042B20C 24A40004 */  addiu $a0, $a1, 4
/* 0042B210 8F858B90 */  lw     $a1, %got(saved_regs)($gp)
.L0042B214:
/* 0042B214 8CA80000 */  lw    $t0, ($a1)
/* 0042B218 2C6E0020 */  sltiu $t6, $v1, 0x20
/* 0042B21C 00607827 */  not   $t7, $v1
/* 0042B220 01EEC004 */  sllv  $t8, $t6, $t7
/* 0042B224 0300C827 */  not   $t9, $t8
/* 0042B228 01194824 */  and   $t1, $t0, $t9
/* 0042B22C 246AFFE0 */  addiu $t2, $v1, -0x20
/* 0042B230 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0042B234 00606027 */  not   $t4, $v1
/* 0042B238 018B6804 */  sllv  $t5, $t3, $t4
/* 0042B23C ACA90000 */  sw    $t1, ($a1)
/* 0042B240 2468FFC0 */  addiu $t0, $v1, -0x40
/* 0042B244 8CAC0008 */  lw    $t4, 8($a1)
/* 0042B248 8CAF0004 */  lw    $t7, 4($a1)
/* 0042B24C 2D190020 */  sltiu $t9, $t0, 0x20
/* 0042B250 00604827 */  not   $t1, $v1
/* 0042B254 01395004 */  sllv  $t2, $t9, $t1
/* 0042B258 01A07027 */  not   $t6, $t5
/* 0042B25C 01405827 */  not   $t3, $t2
/* 0042B260 24630001 */  addiu $v1, $v1, 1
/* 0042B264 018B6824 */  and   $t5, $t4, $t3
/* 0042B268 01EEC024 */  and   $t8, $t7, $t6
/* 0042B26C ACB80004 */  sw    $t8, 4($a1)
/* 0042B270 1483FFE8 */  bne   $a0, $v1, .L0042B214
/* 0042B274 ACAD0008 */   sw    $t5, 8($a1)
/* 0042B278 10620063 */  beq   $v1, $v0, .L0042B408
/* 0042B27C 00000000 */   nop   
.L0042B280:
/* 0042B280 8F858B90 */  lw     $a1, %got(saved_regs)($gp)
.L0042B284:
/* 0042B284 8CB90000 */  lw    $t9, ($a1)
/* 0042B288 2C6F0020 */  sltiu $t7, $v1, 0x20
/* 0042B28C 00607027 */  not   $t6, $v1
/* 0042B290 01CFC004 */  sllv  $t8, $t7, $t6
/* 0042B294 03004027 */  not   $t0, $t8
/* 0042B298 246AFFE0 */  addiu $t2, $v1, -0x20
/* 0042B29C 03284824 */  and   $t1, $t9, $t0
/* 0042B2A0 8CAE0004 */  lw    $t6, 4($a1)
/* 0042B2A4 2D4C0020 */  sltiu $t4, $t2, 0x20
/* 0042B2A8 00605827 */  not   $t3, $v1
/* 0042B2AC 016C6804 */  sllv  $t5, $t4, $t3
/* 0042B2B0 01A07827 */  not   $t7, $t5
/* 0042B2B4 ACA90000 */  sw    $t1, ($a1)
/* 0042B2B8 2479FFC0 */  addiu $t9, $v1, -0x40
/* 0042B2BC 8CAB0008 */  lw    $t3, 8($a1)
/* 0042B2C0 2F280020 */  sltiu $t0, $t9, 0x20
/* 0042B2C4 00604827 */  not   $t1, $v1
/* 0042B2C8 01CFC024 */  and   $t8, $t6, $t7
/* 0042B2CC 01285004 */  sllv  $t2, $t0, $t1
/* 0042B2D0 01406027 */  not   $t4, $t2
/* 0042B2D4 246E0001 */  addiu $t6, $v1, 1
/* 0042B2D8 ACB80004 */  sw    $t8, 4($a1)
/* 0042B2DC 016C6824 */  and   $t5, $t3, $t4
/* 0042B2E0 8CA90000 */  lw    $t1, ($a1)
/* 0042B2E4 01C0C027 */  not   $t8, $t6
/* 0042B2E8 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0042B2EC 030FC804 */  sllv  $t9, $t7, $t8
/* 0042B2F0 03204027 */  not   $t0, $t9
/* 0042B2F4 ACAD0008 */  sw    $t5, 8($a1)
/* 0042B2F8 25CBFFE0 */  addiu $t3, $t6, -0x20
/* 0042B2FC 2D6C0020 */  sltiu $t4, $t3, 0x20
/* 0042B300 01C06827 */  not   $t5, $t6
/* 0042B304 01285024 */  and   $t2, $t1, $t0
/* 0042B308 8CB90004 */  lw    $t9, 4($a1)
/* 0042B30C 01AC7804 */  sllv  $t7, $t4, $t5
/* 0042B310 01E0C027 */  not   $t8, $t7
/* 0042B314 ACAA0000 */  sw    $t2, ($a1)
/* 0042B318 25C8FFC0 */  addiu $t0, $t6, -0x40
/* 0042B31C 8CAF0008 */  lw    $t7, 8($a1)
/* 0042B320 2D0A0020 */  sltiu $t2, $t0, 0x20
/* 0042B324 01C05827 */  not   $t3, $t6
/* 0042B328 03384824 */  and   $t1, $t9, $t8
/* 0042B32C 016A6004 */  sllv  $t4, $t2, $t3
/* 0042B330 01806827 */  not   $t5, $t4
/* 0042B334 24780002 */  addiu $t8, $v1, 2
/* 0042B338 ACA90004 */  sw    $t1, 4($a1)
/* 0042B33C 01EDC824 */  and   $t9, $t7, $t5
/* 0042B340 8CAB0000 */  lw    $t3, ($a1)
/* 0042B344 2F090020 */  sltiu $t1, $t8, 0x20
/* 0042B348 03004027 */  not   $t0, $t8
/* 0042B34C 01097004 */  sllv  $t6, $t1, $t0
/* 0042B350 01C05027 */  not   $t2, $t6
/* 0042B354 ACB90008 */  sw    $t9, 8($a1)
/* 0042B358 270FFFE0 */  addiu $t7, $t8, -0x20
/* 0042B35C 2DED0020 */  sltiu $t5, $t7, 0x20
/* 0042B360 0300C827 */  not   $t9, $t8
/* 0042B364 016A6024 */  and   $t4, $t3, $t2
/* 0042B368 8CAE0004 */  lw    $t6, 4($a1)
/* 0042B36C 032D4804 */  sllv  $t1, $t5, $t9
/* 0042B370 01204027 */  not   $t0, $t1
/* 0042B374 ACAC0000 */  sw    $t4, ($a1)
/* 0042B378 270AFFC0 */  addiu $t2, $t8, -0x40
/* 0042B37C 8CA90008 */  lw    $t1, 8($a1)
/* 0042B380 2D4C0020 */  sltiu $t4, $t2, 0x20
/* 0042B384 03007827 */  not   $t7, $t8
/* 0042B388 01C85824 */  and   $t3, $t6, $t0
/* 0042B38C 01EC6804 */  sllv  $t5, $t4, $t7
/* 0042B390 01A0C827 */  not   $t9, $t5
/* 0042B394 24680003 */  addiu $t0, $v1, 3
/* 0042B398 ACAB0004 */  sw    $t3, 4($a1)
/* 0042B39C 01397024 */  and   $t6, $t1, $t9
/* 0042B3A0 8CAF0000 */  lw    $t7, ($a1)
/* 0042B3A4 2D0B0020 */  sltiu $t3, $t0, 0x20
/* 0042B3A8 01005027 */  not   $t2, $t0
/* 0042B3AC 014BC004 */  sllv  $t8, $t3, $t2
/* 0042B3B0 03006027 */  not   $t4, $t8
/* 0042B3B4 ACAE0008 */  sw    $t6, 8($a1)
/* 0042B3B8 2509FFE0 */  addiu $t1, $t0, -0x20
/* 0042B3BC 2D390020 */  sltiu $t9, $t1, 0x20
/* 0042B3C0 01007027 */  not   $t6, $t0
/* 0042B3C4 01EC6824 */  and   $t5, $t7, $t4
/* 0042B3C8 01D95804 */  sllv  $t3, $t9, $t6
/* 0042B3CC 8CB80004 */  lw    $t8, 4($a1)
/* 0042B3D0 01605027 */  not   $t2, $t3
/* 0042B3D4 ACAD0000 */  sw    $t5, ($a1)
/* 0042B3D8 250CFFC0 */  addiu $t4, $t0, -0x40
/* 0042B3DC 8CAB0008 */  lw    $t3, 8($a1)
/* 0042B3E0 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0042B3E4 01004827 */  not   $t1, $t0
/* 0042B3E8 012DC804 */  sllv  $t9, $t5, $t1
/* 0042B3EC 03207027 */  not   $t6, $t9
/* 0042B3F0 030A7824 */  and   $t7, $t8, $t2
/* 0042B3F4 24630004 */  addiu $v1, $v1, 4
/* 0042B3F8 016EC024 */  and   $t8, $t3, $t6
/* 0042B3FC ACB80008 */  sw    $t8, 8($a1)
/* 0042B400 1462FFA0 */  bne   $v1, $v0, .L0042B284
/* 0042B404 ACAF0004 */   sw    $t7, 4($a1)
.L0042B408:
/* 0042B408 03E00008 */  jr    $ra
/* 0042B40C 00000000 */   nop   
    .type unhome_parms, @function
    .size unhome_parms, .-unhome_parms
    .end unhome_parms

glabel home_parms
    .ent home_parms
    # 0042BDAC eval
/* 0042B410 3C1C0FBF */  .cpload $t9
/* 0042B414 279C4640 */  
/* 0042B418 0399E021 */  
/* 0042B41C 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0042B420 AFB30024 */  sw    $s3, 0x24($sp)
/* 0042B424 8F938AD4 */  lw     $s3, %got(pdefs)($gp)
/* 0042B428 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0042B42C AFBC0030 */  sw    $gp, 0x30($sp)
/* 0042B430 8E730000 */  lw    $s3, ($s3)
/* 0042B434 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0042B438 AFB40028 */  sw    $s4, 0x28($sp)
/* 0042B43C AFB20020 */  sw    $s2, 0x20($sp)
/* 0042B440 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042B444 AFB00018 */  sw    $s0, 0x18($sp)
/* 0042B448 1260007F */  beqz  $s3, .L0042B648
/* 0042B44C AFA40038 */   sw    $a0, 0x38($sp)
/* 0042B450 2415000C */  li    $s5, 12
/* 0042B454 24140002 */  li    $s4, 2
/* 0042B458 8F928B90 */  lw     $s2, %got(saved_regs)($gp)
/* 0042B45C 966E0022 */  lhu   $t6, 0x22($s3)
.L0042B460:
/* 0042B460 528E0077 */  beql  $s4, $t6, .L0042B640
/* 0042B464 8E730008 */   lw    $s3, 8($s3)
/* 0042B468 8F99847C */  lw    $t9, %call16(pass_in_reg)($gp)
/* 0042B46C 02602025 */  move  $a0, $s3
/* 0042B470 0320F809 */  jalr  $t9
/* 0042B474 00000000 */   nop   
/* 0042B478 10400073 */  beqz  $v0, .L0042B648
/* 0042B47C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0042B480 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 0042B484 02602025 */  move  $a0, $s3
/* 0042B488 0320F809 */  jalr  $t9
/* 0042B48C 00000000 */   nop   
/* 0042B490 304300FF */  andi  $v1, $v0, 0xff
/* 0042B494 246FFFE0 */  addiu $t7, $v1, -0x20
/* 0042B498 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0042B49C 0018C823 */  negu  $t9, $t8
/* 0042B4A0 01F94004 */  sllv  $t0, $t9, $t7
/* 0042B4A4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042B4A8 0501003E */  bgez  $t0, .L0042B5A4
/* 0042B4AC 305100FF */   andi  $s1, $v0, 0xff
/* 0042B4B0 8E4C0000 */  lw    $t4, ($s2)
/* 0042B4B4 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 0042B4B8 2C690020 */  sltiu $t1, $v1, 0x20
/* 0042B4BC 00605027 */  not   $t2, $v1
/* 0042B4C0 01495804 */  sllv  $t3, $t1, $t2
/* 0042B4C4 018B6825 */  or    $t5, $t4, $t3
/* 0042B4C8 AC2D0000 */  sw    $t5, ($at)
/* 0042B4CC 8E480004 */  lw    $t0, 4($s2)
/* 0042B4D0 246EFFE0 */  addiu $t6, $v1, -0x20
/* 0042B4D4 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 0042B4D8 2DD80020 */  sltiu $t8, $t6, 0x20
/* 0042B4DC 0060C827 */  not   $t9, $v1
/* 0042B4E0 03387804 */  sllv  $t7, $t8, $t9
/* 0042B4E4 010F4825 */  or    $t1, $t0, $t7
/* 0042B4E8 AC290004 */  sw    $t1, 4($at)
/* 0042B4EC 8E4E0008 */  lw    $t6, 8($s2)
/* 0042B4F0 246AFFC0 */  addiu $t2, $v1, -0x40
/* 0042B4F4 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 0042B4F8 2D4C0020 */  sltiu $t4, $t2, 0x20
/* 0042B4FC 00605827 */  not   $t3, $v1
/* 0042B500 016C6804 */  sllv  $t5, $t4, $t3
/* 0042B504 01CDC025 */  or    $t8, $t6, $t5
/* 0042B508 AC380008 */  sw    $t8, 8($at)
/* 0042B50C 8E790028 */  lw    $t9, 0x28($s3)
/* 0042B510 246A0001 */  addiu $t2, $v1, 1
/* 0042B514 2D4C0020 */  sltiu $t4, $t2, 0x20
/* 0042B518 2B210005 */  slti  $at, $t9, 5
/* 0042B51C 14200047 */  bnez  $at, .L0042B63C
/* 0042B520 01405827 */   not   $t3, $t2
/* 0042B524 92640021 */  lbu   $a0, 0x21($s3)
/* 0042B528 3C010501 */  lui   $at, 0x501
/* 0042B52C 016C7004 */  sllv  $t6, $t4, $t3
/* 0042B530 3084001F */  andi  $a0, $a0, 0x1f
/* 0042B534 2C880020 */  sltiu $t0, $a0, 0x20
/* 0042B538 00087823 */  negu  $t7, $t0
/* 0042B53C 01E14824 */  and   $t1, $t7, $at
/* 0042B540 00891004 */  sllv  $v0, $t1, $a0
/* 0042B544 28420000 */  slti  $v0, $v0, 0
/* 0042B548 14400003 */  bnez  $v0, .L0042B558
/* 0042B54C 2559FFE0 */   addiu $t9, $t2, -0x20
/* 0042B550 02A41026 */  xor   $v0, $s5, $a0
/* 0042B554 2C420001 */  sltiu $v0, $v0, 1
.L0042B558:
/* 0042B558 004002B4 */  teq   $v0, $zero, 0xa
/* 0042B55C 8E4D0000 */  lw    $t5, ($s2)
/* 0042B560 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 0042B564 2F280020 */  sltiu $t0, $t9, 0x20
/* 0042B568 01AEC025 */  or    $t8, $t5, $t6
/* 0042B56C AC380000 */  sw    $t8, ($at)
/* 0042B570 8E490004 */  lw    $t1, 4($s2)
/* 0042B574 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 0042B578 01687804 */  sllv  $t7, $t0, $t3
/* 0042B57C 012F6025 */  or    $t4, $t1, $t7
/* 0042B580 AC2C0004 */  sw    $t4, 4($at)
/* 0042B584 8E590008 */  lw    $t9, 8($s2)
/* 0042B588 254DFFC0 */  addiu $t5, $t2, -0x40
/* 0042B58C 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0042B590 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 0042B594 016EC004 */  sllv  $t8, $t6, $t3
/* 0042B598 03384025 */  or    $t0, $t9, $t8
/* 0042B59C 10000027 */  b     .L0042B63C
/* 0042B5A0 AC280008 */   sw    $t0, 8($at)
.L0042B5A4:
/* 0042B5A4 8E700028 */  lw    $s0, 0x28($s3)
/* 0042B5A8 26100003 */  addiu $s0, $s0, 3
/* 0042B5AC 06010002 */  bgez  $s0, .L0042B5B8
/* 0042B5B0 02000821 */   move  $at, $s0
/* 0042B5B4 26010003 */  addiu $at, $s0, 3
.L0042B5B8:
/* 0042B5B8 00018083 */  sra   $s0, $at, 2
/* 0042B5BC 52000020 */  beql  $s0, $zero, .L0042B640
/* 0042B5C0 8E730008 */   lw    $s3, 8($s3)
.L0042B5C4:
/* 0042B5C4 8E4A0000 */  lw    $t2, ($s2)
/* 0042B5C8 2E290020 */  sltiu $t1, $s1, 0x20
/* 0042B5CC 02207827 */  not   $t7, $s1
/* 0042B5D0 01E96004 */  sllv  $t4, $t1, $t7
/* 0042B5D4 262EFFE0 */  addiu $t6, $s1, -0x20
/* 0042B5D8 014C6825 */  or    $t5, $t2, $t4
/* 0042B5DC 2DCB0020 */  sltiu $t3, $t6, 0x20
/* 0042B5E0 8E4E0008 */  lw    $t6, 8($s2)
/* 0042B5E4 8E480004 */  lw    $t0, 4($s2)
/* 0042B5E8 262FFFC0 */  addiu $t7, $s1, -0x40
/* 0042B5EC 0220C827 */  not   $t9, $s1
/* 0042B5F0 032BC004 */  sllv  $t8, $t3, $t9
/* 0042B5F4 2DEA0020 */  sltiu $t2, $t7, 0x20
/* 0042B5F8 AE4D0000 */  sw    $t5, ($s2)
/* 0042B5FC 02206027 */  not   $t4, $s1
/* 0042B600 018A6804 */  sllv  $t5, $t2, $t4
/* 0042B604 01CD5825 */  or    $t3, $t6, $t5
/* 0042B608 01184825 */  or    $t1, $t0, $t8
/* 0042B60C AE490004 */  sw    $t1, 4($s2)
/* 0042B610 AE4B0008 */  sw    $t3, 8($s2)
/* 0042B614 8F99832C */  lw    $t9, %call16(is_parm_reg)($gp)
/* 0042B618 02202025 */  move  $a0, $s1
/* 0042B61C 0320F809 */  jalr  $t9
/* 0042B620 00000000 */   nop   
/* 0042B624 10400008 */  beqz  $v0, .L0042B648
/* 0042B628 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0042B62C 26310001 */  addiu $s1, $s1, 1
/* 0042B630 2610FFFF */  addiu $s0, $s0, -1
/* 0042B634 1600FFE3 */  bnez  $s0, .L0042B5C4
/* 0042B638 323100FF */   andi  $s1, $s1, 0xff
.L0042B63C:
/* 0042B63C 8E730008 */  lw    $s3, 8($s3)
.L0042B640:
/* 0042B640 5660FF87 */  bnel  $s3, $zero, .L0042B460
/* 0042B644 966E0022 */   lhu   $t6, 0x22($s3)
.L0042B648:
/* 0042B648 8FB90038 */  lw    $t9, 0x38($sp)
/* 0042B64C 2401FFFF */  li    $at, -1
/* 0042B650 8F928B90 */  lw     $s2, %got(saved_regs)($gp)
/* 0042B654 1321007F */  beq   $t9, $at, .L0042B854
/* 0042B658 3328FFFF */   andi  $t0, $t9, 0xffff
/* 0042B65C 8F8489FC */  lw     $a0, %got(n_parm_regs)($gp)
/* 0042B660 05010003 */  bgez  $t0, .L0042B670
/* 0042B664 0008C083 */   sra   $t8, $t0, 2
/* 0042B668 25010003 */  addiu $at, $t0, 3
/* 0042B66C 0001C083 */  sra   $t8, $at, 2
.L0042B670:
/* 0042B670 8C840000 */  lw    $a0, ($a0)
/* 0042B674 27050004 */  addiu $a1, $t8, 4
/* 0042B678 AFB80038 */  sw    $t8, 0x38($sp)
/* 0042B67C 24840003 */  addiu $a0, $a0, 3
/* 0042B680 0085082B */  sltu  $at, $a0, $a1
/* 0042B684 14200073 */  bnez  $at, .L0042B854
/* 0042B688 24840001 */   addiu $a0, $a0, 1
/* 0042B68C 00853023 */  subu  $a2, $a0, $a1
/* 0042B690 30C60003 */  andi  $a2, $a2, 3
/* 0042B694 10C0001A */  beqz  $a2, .L0042B700
/* 0042B698 00A01025 */   move  $v0, $a1
/* 0042B69C 00C51821 */  addu  $v1, $a2, $a1
.L0042B6A0:
/* 0042B6A0 8E4C0000 */  lw    $t4, ($s2)
/* 0042B6A4 2C490020 */  sltiu $t1, $v0, 0x20
/* 0042B6A8 00407827 */  not   $t7, $v0
/* 0042B6AC 01E95004 */  sllv  $t2, $t1, $t7
/* 0042B6B0 244DFFE0 */  addiu $t5, $v0, -0x20
/* 0042B6B4 018A7025 */  or    $t6, $t4, $t2
/* 0042B6B8 2DAB0020 */  sltiu $t3, $t5, 0x20
/* 0042B6BC 8E4D0008 */  lw    $t5, 8($s2)
/* 0042B6C0 8E580004 */  lw    $t8, 4($s2)
/* 0042B6C4 244FFFC0 */  addiu $t7, $v0, -0x40
/* 0042B6C8 0040C827 */  not   $t9, $v0
/* 0042B6CC 032B4004 */  sllv  $t0, $t3, $t9
/* 0042B6D0 2DEC0020 */  sltiu $t4, $t7, 0x20
/* 0042B6D4 AE4E0000 */  sw    $t6, ($s2)
/* 0042B6D8 00405027 */  not   $t2, $v0
/* 0042B6DC 014C7004 */  sllv  $t6, $t4, $t2
/* 0042B6E0 24420001 */  addiu $v0, $v0, 1
/* 0042B6E4 01AE5825 */  or    $t3, $t5, $t6
/* 0042B6E8 03084825 */  or    $t1, $t8, $t0
/* 0042B6EC AE490004 */  sw    $t1, 4($s2)
/* 0042B6F0 1462FFEB */  bne   $v1, $v0, .L0042B6A0
/* 0042B6F4 AE4B0008 */   sw    $t3, 8($s2)
/* 0042B6F8 50440057 */  beql  $v0, $a0, .L0042B858
/* 0042B6FC 8FBF0034 */   lw    $ra, 0x34($sp)
.L0042B700:
/* 0042B700 8E490000 */  lw    $t1, ($s2)
/* 0042B704 2C590020 */  sltiu $t9, $v0, 0x20
/* 0042B708 0040C027 */  not   $t8, $v0
/* 0042B70C 8E4B0004 */  lw    $t3, 4($s2)
/* 0042B710 03194004 */  sllv  $t0, $t9, $t8
/* 0042B714 244CFFE0 */  addiu $t4, $v0, -0x20
/* 0042B718 2D8A0020 */  sltiu $t2, $t4, 0x20
/* 0042B71C 00406827 */  not   $t5, $v0
/* 0042B720 01287825 */  or    $t7, $t1, $t0
/* 0042B724 01AA7004 */  sllv  $t6, $t2, $t5
/* 0042B728 8E4C0008 */  lw    $t4, 8($s2)
/* 0042B72C 2458FFC0 */  addiu $t8, $v0, -0x40
/* 0042B730 016EC825 */  or    $t9, $t3, $t6
/* 0042B734 2F090020 */  sltiu $t1, $t8, 0x20
/* 0042B738 244D0001 */  addiu $t5, $v0, 1
/* 0042B73C AE4F0000 */  sw    $t7, ($s2)
/* 0042B740 00404027 */  not   $t0, $v0
/* 0042B744 01097804 */  sllv  $t7, $t1, $t0
/* 0042B748 8E580000 */  lw    $t8, ($s2)
/* 0042B74C 2DAB0020 */  sltiu $t3, $t5, 0x20
/* 0042B750 01A07027 */  not   $t6, $t5
/* 0042B754 AE590004 */  sw    $t9, 4($s2)
/* 0042B758 018F5025 */  or    $t2, $t4, $t7
/* 0042B75C 01CBC804 */  sllv  $t9, $t3, $t6
/* 0042B760 8E4B0004 */  lw    $t3, 4($s2)
/* 0042B764 25A8FFE0 */  addiu $t0, $t5, -0x20
/* 0042B768 2D0C0020 */  sltiu $t4, $t0, 0x20
/* 0042B76C AE4A0008 */  sw    $t2, 8($s2)
/* 0042B770 01A07827 */  not   $t7, $t5
/* 0042B774 03194825 */  or    $t1, $t8, $t9
/* 0042B778 01EC5004 */  sllv  $t2, $t4, $t7
/* 0042B77C 016A7025 */  or    $t6, $t3, $t2
/* 0042B780 8E4C0008 */  lw    $t4, 8($s2)
/* 0042B784 AE490000 */  sw    $t1, ($s2)
/* 0042B788 25B8FFC0 */  addiu $t8, $t5, -0x40
/* 0042B78C 2F190020 */  sltiu $t9, $t8, 0x20
/* 0042B790 01A04827 */  not   $t1, $t5
/* 0042B794 244B0002 */  addiu $t3, $v0, 2
/* 0042B798 01394004 */  sllv  $t0, $t9, $t1
/* 0042B79C AE4E0004 */  sw    $t6, 4($s2)
/* 0042B7A0 8E4D0000 */  lw    $t5, ($s2)
/* 0042B7A4 01607027 */  not   $t6, $t3
/* 0042B7A8 2D6A0020 */  sltiu $t2, $t3, 0x20
/* 0042B7AC 01887825 */  or    $t7, $t4, $t0
/* 0042B7B0 01CAC004 */  sllv  $t8, $t2, $t6
/* 0042B7B4 8E4A0004 */  lw    $t2, 4($s2)
/* 0042B7B8 2569FFE0 */  addiu $t1, $t3, -0x20
/* 0042B7BC 2D2C0020 */  sltiu $t4, $t1, 0x20
/* 0042B7C0 AE4F0008 */  sw    $t7, 8($s2)
/* 0042B7C4 01604027 */  not   $t0, $t3
/* 0042B7C8 01B8C825 */  or    $t9, $t5, $t8
/* 0042B7CC 010C7804 */  sllv  $t7, $t4, $t0
/* 0042B7D0 AE590000 */  sw    $t9, ($s2)
/* 0042B7D4 014F7025 */  or    $t6, $t2, $t7
/* 0042B7D8 8E4C0008 */  lw    $t4, 8($s2)
/* 0042B7DC 0160C827 */  not   $t9, $t3
/* 0042B7E0 256DFFC0 */  addiu $t5, $t3, -0x40
/* 0042B7E4 2DB80020 */  sltiu $t8, $t5, 0x20
/* 0042B7E8 244A0003 */  addiu $t2, $v0, 3
/* 0042B7EC 8E4B0000 */  lw    $t3, ($s2)
/* 0042B7F0 03384804 */  sllv  $t1, $t8, $t9
/* 0042B7F4 AE4E0004 */  sw    $t6, 4($s2)
/* 0042B7F8 01407027 */  not   $t6, $t2
/* 0042B7FC 2D4F0020 */  sltiu $t7, $t2, 0x20
/* 0042B800 01894025 */  or    $t0, $t4, $t1
/* 0042B804 01CF6804 */  sllv  $t5, $t7, $t6
/* 0042B808 2559FFE0 */  addiu $t9, $t2, -0x20
/* 0042B80C 016DC025 */  or    $t8, $t3, $t5
/* 0042B810 2F2C0020 */  sltiu $t4, $t9, 0x20
/* 0042B814 AE480008 */  sw    $t0, 8($s2)
/* 0042B818 01404827 */  not   $t1, $t2
/* 0042B81C 012C4004 */  sllv  $t0, $t4, $t1
/* 0042B820 8E4C0008 */  lw    $t4, 8($s2)
/* 0042B824 8E4F0004 */  lw    $t7, 4($s2)
/* 0042B828 AE580000 */  sw    $t8, ($s2)
/* 0042B82C 254BFFC0 */  addiu $t3, $t2, -0x40
/* 0042B830 2D6D0020 */  sltiu $t5, $t3, 0x20
/* 0042B834 0140C027 */  not   $t8, $t2
/* 0042B838 030DC804 */  sllv  $t9, $t5, $t8
/* 0042B83C 24420004 */  addiu $v0, $v0, 4
/* 0042B840 01994825 */  or    $t1, $t4, $t9
/* 0042B844 01E87025 */  or    $t6, $t7, $t0
/* 0042B848 AE4E0004 */  sw    $t6, 4($s2)
/* 0042B84C 1444FFAC */  bne   $v0, $a0, .L0042B700
/* 0042B850 AE490008 */   sw    $t1, 8($s2)
.L0042B854:
/* 0042B854 8FBF0034 */  lw    $ra, 0x34($sp)
.L0042B858:
/* 0042B858 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042B85C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042B860 8FB20020 */  lw    $s2, 0x20($sp)
/* 0042B864 8FB30024 */  lw    $s3, 0x24($sp)
/* 0042B868 8FB40028 */  lw    $s4, 0x28($sp)
/* 0042B86C 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0042B870 03E00008 */  jr    $ra
/* 0042B874 27BD0038 */   addiu $sp, $sp, 0x38
    .type home_parms, @function
    .size home_parms, .-home_parms
    .end home_parms

glabel clean_tree
    .ent clean_tree
    # 0042B878 clean_tree
    # 0042BDAC eval
/* 0042B878 3C1C0FBF */  .cpload $t9
/* 0042B87C 279C41D8 */  
/* 0042B880 0399E021 */  
/* 0042B884 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0042B888 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0042B88C AFB00018 */  sw    $s0, 0x18($sp)
/* 0042B890 00808025 */  move  $s0, $a0
/* 0042B894 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0042B898 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042B89C 2411FF01 */  li    $s1, -255
/* 0042B8A0 920E0019 */  lbu   $t6, 0x19($s0)
.L0042B8A4:
/* 0042B8A4 8E040000 */  lw    $a0, ($s0)
/* 0042B8A8 A2000018 */  sb    $zero, 0x18($s0)
/* 0042B8AC 01D17824 */  and   $t7, $t6, $s1
/* 0042B8B0 35F80090 */  ori   $t8, $t7, 0x90
/* 0042B8B4 10800013 */  beqz  $a0, .L0042B904
/* 0042B8B8 A2180019 */   sb    $t8, 0x19($s0)
/* 0042B8BC 92190020 */  lbu   $t9, 0x20($s0)
/* 0042B8C0 2F280060 */  sltiu $t0, $t9, 0x60
/* 0042B8C4 11000009 */  beqz  $t0, .L0042B8EC
/* 0042B8C8 00000000 */   nop   
/* 0042B8CC 8F8B8038 */  lw    $t3, %got(D_10016138)($gp)
/* 0042B8D0 00194943 */  sra   $t1, $t9, 5
/* 0042B8D4 00095080 */  sll   $t2, $t1, 2
/* 0042B8D8 256B6138 */  addiu $t3, %lo(D_10016138) # addiu $t3, $t3, 0x6138
/* 0042B8DC 016A6021 */  addu  $t4, $t3, $t2
/* 0042B8E0 8D8D0000 */  lw    $t5, ($t4)
/* 0042B8E4 032D7004 */  sllv  $t6, $t5, $t9
/* 0042B8E8 29C80000 */  slti  $t0, $t6, 0
.L0042B8EC:
/* 0042B8EC 55000006 */  bnel  $t0, $zero, .L0042B908
/* 0042B8F0 8E040004 */   lw    $a0, 4($s0)
/* 0042B8F4 8F9983B8 */  lw    $t9, %call16(clean_tree)($gp)
/* 0042B8F8 0320F809 */  jalr  $t9
/* 0042B8FC 00000000 */   nop   
/* 0042B900 8FBC0020 */  lw    $gp, 0x20($sp)
.L0042B904:
/* 0042B904 8E040004 */  lw    $a0, 4($s0)
.L0042B908:
/* 0042B908 50800014 */  beql  $a0, $zero, .L0042B95C
/* 0042B90C 8E100008 */   lw    $s0, 8($s0)
/* 0042B910 92180020 */  lbu   $t8, 0x20($s0)
/* 0042B914 2F0900A0 */  sltiu $t1, $t8, 0xa0
/* 0042B918 11200009 */  beqz  $t1, .L0042B940
/* 0042B91C 00000000 */   nop   
/* 0042B920 8F8C8038 */  lw    $t4, %got(D_10016124)($gp)
/* 0042B924 00185943 */  sra   $t3, $t8, 5
/* 0042B928 000B5080 */  sll   $t2, $t3, 2
/* 0042B92C 258C6124 */  addiu $t4, %lo(D_10016124) # addiu $t4, $t4, 0x6124
/* 0042B930 018A6821 */  addu  $t5, $t4, $t2
/* 0042B934 8DB90000 */  lw    $t9, ($t5)
/* 0042B938 03197004 */  sllv  $t6, $t9, $t8
/* 0042B93C 29C90000 */  slti  $t1, $t6, 0
.L0042B940:
/* 0042B940 55200006 */  bnel  $t1, $zero, .L0042B95C
/* 0042B944 8E100008 */   lw    $s0, 8($s0)
/* 0042B948 8F9983B8 */  lw    $t9, %call16(clean_tree)($gp)
/* 0042B94C 0320F809 */  jalr  $t9
/* 0042B950 00000000 */   nop   
/* 0042B954 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042B958 8E100008 */  lw    $s0, 8($s0)
.L0042B95C:
/* 0042B95C 5600FFD1 */  bnel  $s0, $zero, .L0042B8A4
/* 0042B960 920E0019 */   lbu   $t6, 0x19($s0)
/* 0042B964 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0042B968 8FB00018 */  lw    $s0, 0x18($sp)
/* 0042B96C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0042B970 03E00008 */  jr    $ra
/* 0042B974 27BD0028 */   addiu $sp, $sp, 0x28
    .type clean_tree, @function
    .size clean_tree, .-clean_tree
    .end clean_tree

glabel clear_pmov_regs
    .ent clear_pmov_regs
    # 0042BDAC eval
/* 0042B978 3C1C0FBF */  .cpload $t9
/* 0042B97C 279C40D8 */  
/* 0042B980 0399E021 */  
/* 0042B984 8F818B94 */  lw     $at, %got(pmov_regs)($gp)
/* 0042B988 AC200000 */  sw    $zero, ($at)
/* 0042B98C 8F818B94 */  lw     $at, %got(pmov_regs)($gp)
/* 0042B990 AC200004 */  sw    $zero, 4($at)
/* 0042B994 8F818B94 */  lw     $at, %got(pmov_regs)($gp)
/* 0042B998 03E00008 */  jr    $ra
/* 0042B99C AC200008 */   sw    $zero, 8($at)
    .type clear_pmov_regs, @function
    .size clear_pmov_regs, .-clear_pmov_regs
    .end clear_pmov_regs

glabel save_pmov_reg
    .ent save_pmov_reg
    # 0042BDAC eval
/* 0042B9A0 3C1C0FBF */  .cpload $t9
/* 0042B9A4 279C40B0 */  
/* 0042B9A8 0399E021 */  
/* 0042B9AC 8F828B94 */  lw     $v0, %got(pmov_regs)($gp)
/* 0042B9B0 2C8E0020 */  sltiu $t6, $a0, 0x20
/* 0042B9B4 00807827 */  not   $t7, $a0
/* 0042B9B8 8C590000 */  lw    $t9, ($v0)
/* 0042B9BC 01EEC004 */  sllv  $t8, $t6, $t7
/* 0042B9C0 2489FFE0 */  addiu $t1, $a0, -0x20
/* 0042B9C4 03384025 */  or    $t0, $t9, $t8
/* 0042B9C8 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 0042B9CC 8C490008 */  lw    $t1, 8($v0)
/* 0042B9D0 8C4D0004 */  lw    $t5, 4($v0)
/* 0042B9D4 248FFFC0 */  addiu $t7, $a0, -0x40
/* 0042B9D8 00805827 */  not   $t3, $a0
/* 0042B9DC 016A6004 */  sllv  $t4, $t2, $t3
/* 0042B9E0 2DF90020 */  sltiu $t9, $t7, 0x20
/* 0042B9E4 0080C027 */  not   $t8, $a0
/* 0042B9E8 AC480000 */  sw    $t0, ($v0)
/* 0042B9EC 03194004 */  sllv  $t0, $t9, $t8
/* 0042B9F0 01285025 */  or    $t2, $t1, $t0
/* 0042B9F4 01AC7025 */  or    $t6, $t5, $t4
/* 0042B9F8 AFA40000 */  sw    $a0, ($sp)
/* 0042B9FC AC4E0004 */  sw    $t6, 4($v0)
/* 0042BA00 03E00008 */  jr    $ra
/* 0042BA04 AC4A0008 */   sw    $t2, 8($v0)
    .type save_pmov_reg, @function
    .size save_pmov_reg, .-save_pmov_reg
    .end save_pmov_reg

glabel load_pmov_regs
    .ent load_pmov_regs
    # 0042BDAC eval
/* 0042BA08 3C1C0FBF */  .cpload $t9
/* 0042BA0C 279C4048 */  
/* 0042BA10 0399E021 */  
/* 0042BA14 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0042BA18 AFB20024 */  sw    $s2, 0x24($sp)
/* 0042BA1C 8F928B94 */  lw     $s2, %got(pmov_regs)($gp)
/* 0042BA20 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0042BA24 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0042BA28 8E4E0008 */  lw    $t6, 8($s2)
/* 0042BA2C 8E4F0004 */  lw    $t7, 4($s2)
/* 0042BA30 8E590000 */  lw    $t9, ($s2)
/* 0042BA34 AFB10020 */  sw    $s1, 0x20($sp)
/* 0042BA38 01CFC025 */  or    $t8, $t6, $t7
/* 0042BA3C 03194025 */  or    $t0, $t8, $t9
/* 0042BA40 1100001D */  beqz  $t0, .L0042BAB8
/* 0042BA44 AFB0001C */   sw    $s0, 0x1c($sp)
/* 0042BA48 8F9189FC */  lw     $s1, %got(n_parm_regs)($gp)
/* 0042BA4C 24100004 */  li    $s0, 4
/* 0042BA50 8E310000 */  lw    $s1, ($s1)
/* 0042BA54 26310003 */  addiu $s1, $s1, 3
/* 0042BA58 2E210004 */  sltiu $at, $s1, 4
/* 0042BA5C 14200016 */  bnez  $at, .L0042BAB8
/* 0042BA60 26310001 */   addiu $s1, $s1, 1
/* 0042BA64 2E090060 */  sltiu $t1, $s0, 0x60
.L0042BA68:
/* 0042BA68 11200006 */  beqz  $t1, .L0042BA84
/* 0042BA6C 00105143 */   sra   $t2, $s0, 5
/* 0042BA70 000A5880 */  sll   $t3, $t2, 2
/* 0042BA74 024B6021 */  addu  $t4, $s2, $t3
/* 0042BA78 8D8D0000 */  lw    $t5, ($t4)
/* 0042BA7C 020D7004 */  sllv  $t6, $t5, $s0
/* 0042BA80 29C90000 */  slti  $t1, $t6, 0
.L0042BA84:
/* 0042BA84 11200009 */  beqz  $t1, .L0042BAAC
/* 0042BA88 2404002A */   li    $a0, 42
/* 0042BA8C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042BA90 00103080 */  sll   $a2, $s0, 2
/* 0042BA94 24C6FFF0 */  addiu $a2, $a2, -0x10
/* 0042BA98 02002825 */  move  $a1, $s0
/* 0042BA9C 2407001D */  li    $a3, 29
/* 0042BAA0 0320F809 */  jalr  $t9
/* 0042BAA4 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042BAA8 8FBC0028 */  lw    $gp, 0x28($sp)
.L0042BAAC:
/* 0042BAAC 26100001 */  addiu $s0, $s0, 1
/* 0042BAB0 5611FFED */  bnel  $s0, $s1, .L0042BA68
/* 0042BAB4 2E090060 */   sltiu $t1, $s0, 0x60
.L0042BAB8:
/* 0042BAB8 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0042BABC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0042BAC0 8FB10020 */  lw    $s1, 0x20($sp)
/* 0042BAC4 8FB20024 */  lw    $s2, 0x24($sp)
/* 0042BAC8 03E00008 */  jr    $ra
/* 0042BACC 27BD0030 */   addiu $sp, $sp, 0x30
    .type load_pmov_regs, @function
    .size load_pmov_regs, .-load_pmov_regs
    .end load_pmov_regs

glabel cvt_tab
    .ent cvt_tab
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 00434878 eval_flt_flt_cvt
/* 0042BAD0 3C1C0FBF */  .cpload $t9
/* 0042BAD4 279C3F80 */  
/* 0042BAD8 0399E021 */  
/* 0042BADC 308200FF */  andi  $v0, $a0, 0xff
/* 0042BAE0 2C410010 */  sltiu $at, $v0, 0x10
/* 0042BAE4 AFA40000 */  sw    $a0, ($sp)
/* 0042BAE8 1020005A */  beqz  $at, .L0042BC54
/* 0042BAEC AFA50004 */   sw    $a1, 4($sp)
/* 0042BAF0 8F818038 */  lw    $at, %got(jtbl_1000A928)($gp)
/* 0042BAF4 00027080 */  sll   $t6, $v0, 2
/* 0042BAF8 002E0821 */  addu  $at, $at, $t6
/* 0042BAFC 8C2EA928 */  lw    $t6, %lo(jtbl_1000A928)($at)
/* 0042BB00 01DC7021 */  addu  $t6, $t6, $gp
/* 0042BB04 01C00008 */  jr    $t6
/* 0042BB08 00000000 */   nop   
.L0042BB0C:
/* 0042BB0C 30A200FF */  andi  $v0, $a1, 0xff
/* 0042BB10 244FFFF4 */  addiu $t7, $v0, -0xc
/* 0042BB14 2DE10002 */  sltiu $at, $t7, 2
/* 0042BB18 1020000C */  beqz  $at, .L0042BB4C
/* 0042BB1C 00000000 */   nop   
/* 0042BB20 8F818038 */  lw    $at, %got(jtbl_1000A898)($gp)
/* 0042BB24 000F7880 */  sll   $t7, $t7, 2
/* 0042BB28 002F0821 */  addu  $at, $at, $t7
/* 0042BB2C 8C2FA898 */  lw    $t7, %lo(jtbl_1000A898)($at)
/* 0042BB30 01FC7821 */  addu  $t7, $t7, $gp
/* 0042BB34 01E00008 */  jr    $t7
/* 0042BB38 00000000 */   nop   
.L0042BB3C:
/* 0042BB3C 03E00008 */  jr    $ra
/* 0042BB40 24020093 */   li    $v0, 147

.L0042BB44:
/* 0042BB44 03E00008 */  jr    $ra
/* 0042BB48 24020096 */   li    $v0, 150

.L0042BB4C:
/* 0042BB4C 03E00008 */  jr    $ra
/* 0042BB50 2402003E */   li    $v0, 62

.L0042BB54:
/* 0042BB54 30A200FF */  andi  $v0, $a1, 0xff
/* 0042BB58 2458FFF4 */  addiu $t8, $v0, -0xc
/* 0042BB5C 2F010002 */  sltiu $at, $t8, 2
/* 0042BB60 1020000C */  beqz  $at, .L0042BB94
/* 0042BB64 00000000 */   nop   
/* 0042BB68 8F818038 */  lw    $at, %got(jtbl_1000A8A0)($gp)
/* 0042BB6C 0018C080 */  sll   $t8, $t8, 2
/* 0042BB70 00380821 */  addu  $at, $at, $t8
/* 0042BB74 8C38A8A0 */  lw    $t8, %lo(jtbl_1000A8A0)($at)
/* 0042BB78 031CC021 */  addu  $t8, $t8, $gp
/* 0042BB7C 03000008 */  jr    $t8
/* 0042BB80 00000000 */   nop   
.L0042BB84:
/* 0042BB84 03E00008 */  jr    $ra
/* 0042BB88 2402015F */   li    $v0, 351

.L0042BB8C:
/* 0042BB8C 03E00008 */  jr    $ra
/* 0042BB90 24020160 */   li    $v0, 352

.L0042BB94:
/* 0042BB94 03E00008 */  jr    $ra
/* 0042BB98 2402003E */   li    $v0, 62

.L0042BB9C:
/* 0042BB9C 30A200FF */  andi  $v0, $a1, 0xff
/* 0042BBA0 2C410010 */  sltiu $at, $v0, 0x10
/* 0042BBA4 10200012 */  beqz  $at, .L0042BBF0
/* 0042BBA8 00000000 */   nop   
/* 0042BBAC 8F818038 */  lw    $at, %got(jtbl_1000A8A8)($gp)
/* 0042BBB0 0002C880 */  sll   $t9, $v0, 2
/* 0042BBB4 00390821 */  addu  $at, $at, $t9
/* 0042BBB8 8C39A8A8 */  lw    $t9, %lo(jtbl_1000A8A8)($at)
/* 0042BBBC 033CC821 */  addu  $t9, $t9, $gp
/* 0042BBC0 03200008 */  jr    $t9
/* 0042BBC4 00000000 */   nop   
.L0042BBC8:
/* 0042BBC8 03E00008 */  jr    $ra
/* 0042BBCC 2402014F */   li    $v0, 335

.L0042BBD0:
/* 0042BBD0 03E00008 */  jr    $ra
/* 0042BBD4 240200E8 */   li    $v0, 232

.L0042BBD8:
/* 0042BBD8 03E00008 */  jr    $ra
/* 0042BBDC 2402014F */   li    $v0, 335

.L0042BBE0:
/* 0042BBE0 03E00008 */  jr    $ra
/* 0042BBE4 240200E8 */   li    $v0, 232

.L0042BBE8:
/* 0042BBE8 03E00008 */  jr    $ra
/* 0042BBEC 24020094 */   li    $v0, 148

.L0042BBF0:
/* 0042BBF0 03E00008 */  jr    $ra
/* 0042BBF4 2402003E */   li    $v0, 62

.L0042BBF8:
/* 0042BBF8 30A200FF */  andi  $v0, $a1, 0xff
/* 0042BBFC 2C410010 */  sltiu $at, $v0, 0x10
/* 0042BC00 10200012 */  beqz  $at, .L0042BC4C
/* 0042BC04 00000000 */   nop   
/* 0042BC08 8F818038 */  lw    $at, %got(jtbl_1000A8E8)($gp)
/* 0042BC0C 00024080 */  sll   $t0, $v0, 2
/* 0042BC10 00280821 */  addu  $at, $at, $t0
/* 0042BC14 8C28A8E8 */  lw    $t0, %lo(jtbl_1000A8E8)($at)
/* 0042BC18 011C4021 */  addu  $t0, $t0, $gp
/* 0042BC1C 01000008 */  jr    $t0
/* 0042BC20 00000000 */   nop   
.L0042BC24:
/* 0042BC24 03E00008 */  jr    $ra
/* 0042BC28 24020153 */   li    $v0, 339

.L0042BC2C:
/* 0042BC2C 03E00008 */  jr    $ra
/* 0042BC30 240200E9 */   li    $v0, 233

.L0042BC34:
/* 0042BC34 03E00008 */  jr    $ra
/* 0042BC38 24020153 */   li    $v0, 339

.L0042BC3C:
/* 0042BC3C 03E00008 */  jr    $ra
/* 0042BC40 240200E9 */   li    $v0, 233

.L0042BC44:
/* 0042BC44 03E00008 */  jr    $ra
/* 0042BC48 24020091 */   li    $v0, 145

.L0042BC4C:
/* 0042BC4C 03E00008 */  jr    $ra
/* 0042BC50 2402003E */   li    $v0, 62

.L0042BC54:
/* 0042BC54 03E00008 */  jr    $ra
/* 0042BC58 2402003E */   li    $v0, 62

/* 0042BC5C 03E00008 */  jr    $ra
/* 0042BC60 00000000 */   nop   
    .type cvt_tab, @function
    .size cvt_tab, .-cvt_tab
    .end cvt_tab

glabel rnd_tab
    .ent rnd_tab
    # 00433494 eval_flt_int_cvt
/* 0042BC64 3C1C0FBF */  .cpload $t9
/* 0042BC68 279C3DEC */  
/* 0042BC6C 0399E021 */  
/* 0042BC70 2401000D */  li    $at, 13
/* 0042BC74 AFA40000 */  sw    $a0, ($sp)
/* 0042BC78 1481001D */  bne   $a0, $at, .L0042BCF0
/* 0042BC7C AFA50004 */   sw    $a1, 4($sp)
/* 0042BC80 1000000B */  b     .L0042BCB0
/* 0042BC84 2CA10009 */   sltiu $at, $a1, 9
.L0042BC88:
/* 0042BC88 03E00008 */  jr    $ra
/* 0042BC8C 240200F3 */   li    $v0, 243

.L0042BC90:
/* 0042BC90 03E00008 */  jr    $ra
/* 0042BC94 240200EB */   li    $v0, 235

.L0042BC98:
/* 0042BC98 03E00008 */  jr    $ra
/* 0042BC9C 24020150 */   li    $v0, 336

.L0042BCA0:
/* 0042BCA0 03E00008 */  jr    $ra
/* 0042BCA4 24020150 */   li    $v0, 336

.L0042BCA8:
/* 0042BCA8 03E00008 */  jr    $ra
/* 0042BCAC 2402003E */   li    $v0, 62

.L0042BCB0:
/* 0042BCB0 14200005 */  bnez  $at, .L0042BCC8
/* 0042BCB4 2401000F */   li    $at, 15
/* 0042BCB8 10A1FFF9 */  beq   $a1, $at, .L0042BCA0
/* 0042BCBC 00000000 */   nop   
/* 0042BCC0 03E00008 */  jr    $ra
/* 0042BCC4 2402003E */   li    $v0, 62

.L0042BCC8:
/* 0042BCC8 2CA10009 */  sltiu $at, $a1, 9
/* 0042BCCC 1020FFF6 */  beqz  $at, .L0042BCA8
/* 0042BCD0 00000000 */   nop   
/* 0042BCD4 8F818038 */  lw    $at, %got(jtbl_1000A968)($gp)
/* 0042BCD8 00057080 */  sll   $t6, $a1, 2
/* 0042BCDC 002E0821 */  addu  $at, $at, $t6
/* 0042BCE0 8C2EA968 */  lw    $t6, %lo(jtbl_1000A968)($at)
/* 0042BCE4 01DC7021 */  addu  $t6, $t6, $gp
/* 0042BCE8 01C00008 */  jr    $t6
/* 0042BCEC 00000000 */   nop   
.L0042BCF0:
/* 0042BCF0 2401000C */  li    $at, 12
/* 0042BCF4 1481001D */  bne   $a0, $at, .L0042BD6C
/* 0042BCF8 2402003E */   li    $v0, 62
/* 0042BCFC 1000000B */  b     .L0042BD2C
/* 0042BD00 2CA10009 */   sltiu $at, $a1, 9
.L0042BD04:
/* 0042BD04 03E00008 */  jr    $ra
/* 0042BD08 240200F4 */   li    $v0, 244

.L0042BD0C:
/* 0042BD0C 03E00008 */  jr    $ra
/* 0042BD10 240200EC */   li    $v0, 236

.L0042BD14:
/* 0042BD14 03E00008 */  jr    $ra
/* 0042BD18 24020154 */   li    $v0, 340

.L0042BD1C:
/* 0042BD1C 03E00008 */  jr    $ra
/* 0042BD20 24020154 */   li    $v0, 340

.L0042BD24:
/* 0042BD24 03E00008 */  jr    $ra
/* 0042BD28 2402003E */   li    $v0, 62

.L0042BD2C:
/* 0042BD2C 14200005 */  bnez  $at, .L0042BD44
/* 0042BD30 2401000F */   li    $at, 15
/* 0042BD34 10A1FFF9 */  beq   $a1, $at, .L0042BD1C
/* 0042BD38 00000000 */   nop   
/* 0042BD3C 03E00008 */  jr    $ra
/* 0042BD40 2402003E */   li    $v0, 62

.L0042BD44:
/* 0042BD44 2CA10009 */  sltiu $at, $a1, 9
/* 0042BD48 1020FFF6 */  beqz  $at, .L0042BD24
/* 0042BD4C 00000000 */   nop   
/* 0042BD50 8F818038 */  lw    $at, %got(jtbl_1000A98C)($gp)
/* 0042BD54 00057880 */  sll   $t7, $a1, 2
/* 0042BD58 002F0821 */  addu  $at, $at, $t7
/* 0042BD5C 8C2FA98C */  lw    $t7, %lo(jtbl_1000A98C)($at)
/* 0042BD60 01FC7821 */  addu  $t7, $t7, $gp
/* 0042BD64 01E00008 */  jr    $t7
/* 0042BD68 00000000 */   nop   
.L0042BD6C:
/* 0042BD6C 03E00008 */  jr    $ra
/* 0042BD70 00000000 */   nop   
    .type rnd_tab, @function
    .size rnd_tab, .-rnd_tab
    .end rnd_tab

glabel invert_livereg
    .ent invert_livereg
/* 0042BD74 00001825 */  move  $v1, $zero
/* 0042BD78 24020001 */  li    $v0, 1
/* 0042BD7C 10800009 */  beqz  $a0, .L0042BDA4
/* 0042BD80 3C058000 */   lui   $a1, 0x8000
.L0042BD84:
/* 0042BD84 00A47024 */  and   $t6, $a1, $a0
/* 0042BD88 51C00004 */  beql  $t6, $zero, .L0042BD9C
/* 0042BD8C 00052842 */   srl   $a1, $a1, 1
/* 0042BD90 00621821 */  addu  $v1, $v1, $v0
/* 0042BD94 00852023 */  subu  $a0, $a0, $a1
/* 0042BD98 00052842 */  srl   $a1, $a1, 1
.L0042BD9C:
/* 0042BD9C 1480FFF9 */  bnez  $a0, .L0042BD84
/* 0042BDA0 00021040 */   sll   $v0, $v0, 1
.L0042BDA4:
/* 0042BDA4 03E00008 */  jr    $ra
/* 0042BDA8 00601025 */   move  $v0, $v1
    .type invert_livereg, @function
    .size invert_livereg, .-invert_livereg
    .end invert_livereg

glabel eval
    .ent eval
    # 00423D28 jump
    # 00424240 trap
    # 00428538 eval_2ops
    # 004287AC eval_fp_min_max
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 004340D4 func_004340D4
    # 00434500 func_00434500
    # 00434618 func_00434618
    # 00434878 eval_flt_flt_cvt
    # 0044BF18 main
/* 0042BDAC 3C1C0FBF */  .cpload $t9
/* 0042BDB0 279C3CA4 */  
/* 0042BDB4 0399E021 */  
/* 0042BDB8 27BDFE78 */  addiu $sp, $sp, -0x188
/* 0042BDBC AFBF00D4 */  sw    $ra, 0xd4($sp)
/* 0042BDC0 AFBE00D0 */  sw    $fp, 0xd0($sp)
/* 0042BDC4 AFBC00CC */  sw    $gp, 0xcc($sp)
/* 0042BDC8 AFB700C8 */  sw    $s7, 0xc8($sp)
/* 0042BDCC AFB600C4 */  sw    $s6, 0xc4($sp)
/* 0042BDD0 AFB500C0 */  sw    $s5, 0xc0($sp)
/* 0042BDD4 AFB400BC */  sw    $s4, 0xbc($sp)
/* 0042BDD8 AFB300B8 */  sw    $s3, 0xb8($sp)
/* 0042BDDC AFB200B4 */  sw    $s2, 0xb4($sp)
/* 0042BDE0 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 0042BDE4 AFB000AC */  sw    $s0, 0xac($sp)
/* 0042BDE8 AFA5018C */  sw    $a1, 0x18c($sp)
/* 0042BDEC AFA00110 */  sw    $zero, 0x110($sp)
/* 0042BDF0 AFA00114 */  sw    $zero, 0x114($sp)
/* 0042BDF4 AFA00118 */  sw    $zero, 0x118($sp)
/* 0042BDF8 AFA0011C */  sw    $zero, 0x11c($sp)
/* 0042BDFC 90900019 */  lbu   $s0, 0x19($a0)
/* 0042BE00 24010048 */  li    $at, 72
/* 0042BE04 0080B025 */  move  $s6, $a0
/* 0042BE08 00108600 */  sll   $s0, $s0, 0x18
/* 0042BE0C 00108642 */  srl   $s0, $s0, 0x19
/* 0042BE10 1201001D */  beq   $s0, $at, .L0042BE88
/* 0042BE14 30BE00FF */   andi  $fp, $a1, 0xff
/* 0042BE18 908E0018 */  lbu   $t6, 0x18($a0)
/* 0042BE1C 51C00009 */  beql  $t6, $zero, .L0042BE44
/* 0042BE20 260FFFE0 */   addiu $t7, $s0, -0x20
/* 0042BE24 8F998334 */  lw    $t9, %call16(restore_from_temp)($gp)
/* 0042BE28 0320F809 */  jalr  $t9
/* 0042BE2C 00000000 */   nop   
/* 0042BE30 92D00019 */  lbu   $s0, 0x19($s6)
/* 0042BE34 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042BE38 00108600 */  sll   $s0, $s0, 0x18
/* 0042BE3C 00108642 */  srl   $s0, $s0, 0x19
/* 0042BE40 260FFFE0 */  addiu $t7, $s0, -0x20
.L0042BE44:
/* 0042BE44 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0042BE48 0018C823 */  negu  $t9, $t8
/* 0042BE4C 01F94004 */  sllv  $t0, $t9, $t7
/* 0042BE50 05010007 */  bgez  $t0, .L0042BE70
/* 0042BE54 00000000 */   nop   
/* 0042BE58 8F998538 */  lw    $t9, %call16(move_to_end_fp_list)($gp)
/* 0042BE5C 02002025 */  move  $a0, $s0
/* 0042BE60 0320F809 */  jalr  $t9
/* 0042BE64 00000000 */   nop   
/* 0042BE68 10001C68 */  b     .L0043300C
/* 0042BE6C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042BE70:
/* 0042BE70 8F99853C */  lw    $t9, %call16(move_to_end_gp_list)($gp)
/* 0042BE74 02002025 */  move  $a0, $s0
/* 0042BE78 0320F809 */  jalr  $t9
/* 0042BE7C 00000000 */   nop   
/* 0042BE80 10001C62 */  b     .L0043300C
/* 0042BE84 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042BE88:
/* 0042BE88 96C90014 */  lhu   $t1, 0x14($s6)
/* 0042BE8C 2D210002 */  sltiu $at, $t1, 2
/* 0042BE90 14200002 */  bnez  $at, .L0042BE9C
/* 0042BE94 00000000 */   nop   
/* 0042BE98 241E0048 */  li    $fp, 72
.L0042BE9C:
/* 0042BE9C 52C01C5C */  beql  $s6, $zero, .L00433010
/* 0042BEA0 8FBF00D4 */   lw    $ra, 0xd4($sp)
/* 0042BEA4 92C40020 */  lbu   $a0, 0x20($s6)
.L0042BEA8:
/* 0042BEA8 00801025 */  move  $v0, $a0
/* 0042BEAC 2C410098 */  sltiu $at, $v0, 0x98
/* 0042BEB0 10201BB5 */  beqz  $at, .L00432D88
/* 0042BEB4 00000000 */   nop   
/* 0042BEB8 8F818038 */  lw    $at, %got(jtbl_1000AD74)($gp)
/* 0042BEBC 00025080 */  sll   $t2, $v0, 2
/* 0042BEC0 002A0821 */  addu  $at, $at, $t2
/* 0042BEC4 8C2AAD74 */  lw    $t2, %lo(jtbl_1000AD74)($at)
/* 0042BEC8 015C5021 */  addu  $t2, $t2, $gp
/* 0042BECC 01400008 */  jr    $t2
/* 0042BED0 00000000 */   nop   
.L0042BED4:
/* 0042BED4 8F8B8AAC */  lw     $t3, %got(first_loc)($gp)
/* 0042BED8 8EC70024 */  lw    $a3, 0x24($s6)
/* 0042BEDC 8F818968 */  lw     $at, %got(current_line)($gp)
/* 0042BEE0 916B0000 */  lbu   $t3, ($t3)
/* 0042BEE4 00E01025 */  move  $v0, $a3
/* 0042BEE8 AC270000 */  sw    $a3, ($at)
/* 0042BEEC 5160000D */  beql  $t3, $zero, .L0042BF24
/* 0042BEF0 96D00022 */   lhu   $s0, 0x22($s6)
/* 0042BEF4 8F838AB0 */  lw     $v1, %got(first_file_number)($gp)
/* 0042BEF8 96CC0022 */  lhu   $t4, 0x22($s6)
/* 0042BEFC 8F818AB4 */  lw     $at, %got(first_line_number)($gp)
/* 0042BF00 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042BF04 AC6C0000 */  sw    $t4, ($v1)
/* 0042BF08 AC220000 */  sw    $v0, ($at)
/* 0042BF0C 8F818AAC */  lw     $at, %got(first_loc)($gp)
/* 0042BF10 AFAC0150 */  sw    $t4, 0x150($sp)
/* 0042BF14 90840000 */  lbu   $a0, ($a0)
/* 0042BF18 10001BE6 */  b     .L00432EB4
/* 0042BF1C A0200000 */   sb    $zero, ($at)
/* 0042BF20 96D00022 */  lhu   $s0, 0x22($s6)
.L0042BF24:
/* 0042BF24 8FAE0150 */  lw    $t6, 0x150($sp)
/* 0042BF28 11D0000D */  beq   $t6, $s0, .L0042BF60
/* 0042BF2C 00000000 */   nop   
/* 0042BF30 8F988994 */  lw     $t8, %got(ascii_out)($gp)
/* 0042BF34 93180000 */  lbu   $t8, ($t8)
/* 0042BF38 13000009 */  beqz  $t8, .L0042BF60
/* 0042BF3C 00000000 */   nop   
/* 0042BF40 8F998300 */  lw    $t9, %call16(emit_file)($gp)
/* 0042BF44 AFB00150 */  sw    $s0, 0x150($sp)
/* 0042BF48 02002025 */  move  $a0, $s0
/* 0042BF4C 0320F809 */  jalr  $t9
/* 0042BF50 00002825 */   move  $a1, $zero
/* 0042BF54 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042BF58 8EC70024 */  lw    $a3, 0x24($s6)
/* 0042BF5C 96D00022 */  lhu   $s0, 0x22($s6)
.L0042BF60:
/* 0042BF60 8F998244 */  lw    $t9, %call16(emit_dir2)($gp)
/* 0042BF64 2404001C */  li    $a0, 28
/* 0042BF68 00002825 */  move  $a1, $zero
/* 0042BF6C 0320F809 */  jalr  $t9
/* 0042BF70 02003025 */   move  $a2, $s0
/* 0042BF74 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042BF78 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042BF7C 10001BCD */  b     .L00432EB4
/* 0042BF80 90840000 */   lbu   $a0, ($a0)
.L0042BF84:
/* 0042BF84 8EC70024 */  lw    $a3, 0x24($s6)
/* 0042BF88 24010001 */  li    $at, 1
/* 0042BF8C 54E10005 */  bnel  $a3, $at, .L0042BFA4
/* 0042BF90 24010002 */   li    $at, 2
/* 0042BF94 8ED90028 */  lw    $t9, 0x28($s6)
/* 0042BF98 10000018 */  b     .L0042BFFC
/* 0042BF9C AFB90154 */   sw    $t9, 0x154($sp)
/* 0042BFA0 24010002 */  li    $at, 2
.L0042BFA4:
/* 0042BFA4 54E10006 */  bnel  $a3, $at, .L0042BFC0
/* 0042BFA8 24010008 */   li    $at, 8
/* 0042BFAC 8ECF0028 */  lw    $t7, 0x28($s6)
/* 0042BFB0 8F8189D4 */  lw     $at, %got(stack_limit_bn)($gp)
/* 0042BFB4 10000011 */  b     .L0042BFFC
/* 0042BFB8 AC2F0000 */   sw    $t7, ($at)
/* 0042BFBC 24010008 */  li    $at, 8
.L0042BFC0:
/* 0042BFC0 14E1000E */  bne   $a3, $at, .L0042BFFC
/* 0042BFC4 27A40110 */   addiu $a0, $sp, 0x110
/* 0042BFC8 93A80115 */  lbu   $t0, 0x115($sp)
/* 0042BFCC 8F9982A0 */  lw    $t9, %call16(append_i)($gp)
/* 0042BFD0 8ECD0028 */  lw    $t5, 0x28($s6)
/* 0042BFD4 3109FFC0 */  andi  $t1, $t0, 0xffc0
/* 0042BFD8 352A002F */  ori   $t2, $t1, 0x2f
/* 0042BFDC A3AA0115 */  sb    $t2, 0x115($sp)
/* 0042BFE0 8FAB0114 */  lw    $t3, 0x114($sp)
/* 0042BFE4 AFA00110 */  sw    $zero, 0x110($sp)
/* 0042BFE8 AFAD011C */  sw    $t5, 0x11c($sp)
/* 0042BFEC 356CC000 */  ori   $t4, $t3, 0xc000
/* 0042BFF0 0320F809 */  jalr  $t9
/* 0042BFF4 AFAC0114 */   sw    $t4, 0x114($sp)
/* 0042BFF8 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042BFFC:
/* 0042BFFC 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042C000 10001BAC */  b     .L00432EB4
/* 0042C004 90840000 */   lbu   $a0, ($a0)
.L0042C008:
/* 0042C008 92D80021 */  lbu   $t8, 0x21($s6)
/* 0042C00C 8ECE0024 */  lw    $t6, 0x24($s6)
/* 0042C010 92D30023 */  lbu   $s3, 0x23($s6)
/* 0042C014 3319001F */  andi  $t9, $t8, 0x1f
/* 0042C018 17200017 */  bnez  $t9, .L0042C078
/* 0042C01C A3AE0186 */   sb    $t6, 0x186($sp)
/* 0042C020 8F888BC0 */  lw     $t0, %got(noalias_regs)($gp)
/* 0042C024 00137880 */  sll   $t7, $s3, 2
/* 0042C028 31C900FF */  andi  $t1, $t6, 0xff
/* 0042C02C 01E81021 */  addu  $v0, $t7, $t0
/* 0042C030 8C450000 */  lw    $a1, ($v0)
/* 0042C034 240A0001 */  li    $t2, 1
/* 0042C038 012A3004 */  sllv  $a2, $t2, $t1
/* 0042C03C 00A65824 */  and   $t3, $a1, $a2
/* 0042C040 11600020 */  beqz  $t3, .L0042C0C4
/* 0042C044 24040031 */   li    $a0, 49
/* 0042C048 8F988BC0 */  lw     $t8, %got(noalias_regs)($gp)
/* 0042C04C 31CD00FF */  andi  $t5, $t6, 0xff
/* 0042C050 00A66023 */  subu  $t4, $a1, $a2
/* 0042C054 000D7080 */  sll   $t6, $t5, 2
/* 0042C058 AC4C0000 */  sw    $t4, ($v0)
/* 0042C05C 01D81821 */  addu  $v1, $t6, $t8
/* 0042C060 8C790000 */  lw    $t9, ($v1)
/* 0042C064 240F0001 */  li    $t7, 1
/* 0042C068 026F4004 */  sllv  $t0, $t7, $s3
/* 0042C06C 03285023 */  subu  $t2, $t9, $t0
/* 0042C070 10000014 */  b     .L0042C0C4
/* 0042C074 AC6A0000 */   sw    $t2, ($v1)
.L0042C078:
/* 0042C078 8F8B8BC0 */  lw     $t3, %got(noalias_regs)($gp)
/* 0042C07C 00134880 */  sll   $t1, $s3, 2
/* 0042C080 93AD0186 */  lbu   $t5, 0x186($sp)
/* 0042C084 012B1021 */  addu  $v0, $t1, $t3
/* 0042C088 8C4C0000 */  lw    $t4, ($v0)
/* 0042C08C 93B90186 */  lbu   $t9, 0x186($sp)
/* 0042C090 8F8A8BC0 */  lw     $t2, %got(noalias_regs)($gp)
/* 0042C094 240E0001 */  li    $t6, 1
/* 0042C098 01AEC004 */  sllv  $t8, $t6, $t5
/* 0042C09C 01987825 */  or    $t7, $t4, $t8
/* 0042C0A0 00194080 */  sll   $t0, $t9, 2
/* 0042C0A4 AC4F0000 */  sw    $t7, ($v0)
/* 0042C0A8 010A1821 */  addu  $v1, $t0, $t2
/* 0042C0AC 8C690000 */  lw    $t1, ($v1)
/* 0042C0B0 240B0001 */  li    $t3, 1
/* 0042C0B4 026B7004 */  sllv  $t6, $t3, $s3
/* 0042C0B8 012E6825 */  or    $t5, $t1, $t6
/* 0042C0BC 24040030 */  li    $a0, 48
/* 0042C0C0 AC6D0000 */  sw    $t5, ($v1)
.L0042C0C4:
/* 0042C0C4 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 0042C0C8 02602825 */  move  $a1, $s3
/* 0042C0CC 93A60186 */  lbu   $a2, 0x186($sp)
/* 0042C0D0 0320F809 */  jalr  $t9
/* 0042C0D4 00000000 */   nop   
/* 0042C0D8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C0DC 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042C0E0 10001B74 */  b     .L00432EB4
/* 0042C0E4 90840000 */   lbu   $a0, ($a0)
.L0042C0E8:
/* 0042C0E8 8F998288 */  lw    $t9, %call16(demit_dir2)($gp)
/* 0042C0EC 2404002A */  li    $a0, 42
/* 0042C0F0 00002825 */  move  $a1, $zero
/* 0042C0F4 8EC60028 */  lw    $a2, 0x28($s6)
/* 0042C0F8 0320F809 */  jalr  $t9
/* 0042C0FC 8EC7002C */   lw    $a3, 0x2c($s6)
/* 0042C100 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C104 2404002F */  li    $a0, 47
/* 0042C108 00002825 */  move  $a1, $zero
/* 0042C10C 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 0042C110 8F8689E4 */  lw     $a2, %got(pic_level)($gp)
/* 0042C114 0320F809 */  jalr  $t9
/* 0042C118 8CC60000 */   lw    $a2, ($a2)
/* 0042C11C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C120 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042C124 10001B63 */  b     .L00432EB4
/* 0042C128 90840000 */   lbu   $a0, ($a0)
.L0042C12C:
/* 0042C12C 8F9982E4 */  lw    $t9, %call16(clear_saved_regs)($gp)
/* 0042C130 240CFFFF */  li    $t4, -1
/* 0042C134 2418FFFF */  li    $t8, -1
/* 0042C138 AFB80130 */  sw    $t8, 0x130($sp)
/* 0042C13C 0320F809 */  jalr  $t9
/* 0042C140 AFAC0154 */   sw    $t4, 0x154($sp)
/* 0042C144 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C148 8F9984A0 */  lw    $t9, %call16(init_regs)($gp)
/* 0042C14C 0320F809 */  jalr  $t9
/* 0042C150 00000000 */   nop   
/* 0042C154 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C158 8F9985A4 */  lw    $t9, %call16(init_temps)($gp)
/* 0042C15C 0320F809 */  jalr  $t9
/* 0042C160 00000000 */   nop   
/* 0042C164 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C168 8F99841C */  lw    $t9, %call16(reset_pool)($gp)
/* 0042C16C 0320F809 */  jalr  $t9
/* 0042C170 00000000 */   nop   
/* 0042C174 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C178 8F918BB4 */  lw     $s1, %got(noalias_on_off)($gp)
/* 0042C17C 8F928BC0 */  lw     $s2, %got(noalias_regs)($gp)
/* 0042C180 26220020 */  addiu $v0, $s1, 0x20
.L0042C184:
/* 0042C184 26310001 */  addiu $s1, $s1, 1
/* 0042C188 AE400000 */  sw    $zero, ($s2)
/* 0042C18C A220FFFF */  sb    $zero, -1($s1)
/* 0042C190 1622FFFC */  bne   $s1, $v0, .L0042C184
/* 0042C194 26520004 */   addiu $s2, $s2, 4
/* 0042C198 8F828A68 */  lw     $v0, %got(use_real_fp_for_all)($gp)
/* 0042C19C 8F818AD4 */  lw     $at, %got(pdefs)($gp)
/* 0042C1A0 90420000 */  lbu   $v0, ($v0)
/* 0042C1A4 AC200000 */  sw    $zero, ($at)
/* 0042C1A8 1440000C */  bnez  $v0, .L0042C1DC
/* 0042C1AC 00000000 */   nop   
/* 0042C1B0 8F8289A8 */  lw     $v0, %got(use_fp)($gp)
/* 0042C1B4 90420000 */  lbu   $v0, ($v0)
/* 0042C1B8 14400008 */  bnez  $v0, .L0042C1DC
/* 0042C1BC 00000000 */   nop   
/* 0042C1C0 8F8289F4 */  lw     $v0, %got(framesz_relocatable)($gp)
/* 0042C1C4 90420000 */  lbu   $v0, ($v0)
/* 0042C1C8 14400004 */  bnez  $v0, .L0042C1DC
/* 0042C1CC 00000000 */   nop   
/* 0042C1D0 8EC2002C */  lw    $v0, 0x2c($s6)
/* 0042C1D4 30420002 */  andi  $v0, $v0, 2
/* 0042C1D8 0002102B */  sltu  $v0, $zero, $v0
.L0042C1DC:
/* 0042C1DC 8F818A6C */  lw     $at, %got(use_real_fp_for_proc)($gp)
/* 0042C1E0 A0220000 */  sb    $v0, ($at)
/* 0042C1E4 8EC7002C */  lw    $a3, 0x2c($s6)
/* 0042C1E8 30EF0080 */  andi  $t7, $a3, 0x80
/* 0042C1EC 11E0000A */  beqz  $t7, .L0042C218
/* 0042C1F0 30EA0200 */   andi  $t2, $a3, 0x200
/* 0042C1F4 8F9989A4 */  lw     $t9, %got(source_language)($gp)
/* 0042C1F8 24010002 */  li    $at, 2
/* 0042C1FC 8F390000 */  lw    $t9, ($t9)
/* 0042C200 17210005 */  bne   $t9, $at, .L0042C218
/* 0042C204 00000000 */   nop   
/* 0042C208 8F818A70 */  lw     $at, %got(home_vararg_reg)($gp)
/* 0042C20C 24080001 */  li    $t0, 1
/* 0042C210 10000003 */  b     .L0042C220
/* 0042C214 A0280000 */   sb    $t0, ($at)
.L0042C218:
/* 0042C218 8F818A70 */  lw     $at, %got(home_vararg_reg)($gp)
/* 0042C21C A0200000 */  sb    $zero, ($at)
.L0042C220:
/* 0042C220 11400010 */  beqz  $t2, .L0042C264
/* 0042C224 2418FFFF */   li    $t8, -1
/* 0042C228 8F8B8A74 */  lw     $t3, %got(reversed_stack)($gp)
/* 0042C22C 2409FFFF */  li    $t1, -1
/* 0042C230 916B0000 */  lbu   $t3, ($t3)
/* 0042C234 51600004 */  beql  $t3, $zero, .L0042C248
/* 0042C238 AFA90128 */   sw    $t1, 0x128($sp)
/* 0042C23C 10000002 */  b     .L0042C248
/* 0042C240 AFA00128 */   sw    $zero, 0x128($sp)
/* 0042C244 AFA90128 */  sw    $t1, 0x128($sp)
.L0042C248:
/* 0042C248 92CE0028 */  lbu   $t6, 0x28($s6)
/* 0042C24C 92CD0029 */  lbu   $t5, 0x29($s6)
/* 0042C250 A3AE012A */  sb    $t6, 0x12a($sp)
/* 0042C254 A3AD012B */  sb    $t5, 0x12b($sp)
/* 0042C258 8FAC0128 */  lw    $t4, 0x128($sp)
/* 0042C25C 10000002 */  b     .L0042C268
/* 0042C260 AFAC012C */   sw    $t4, 0x12c($sp)
.L0042C264:
/* 0042C264 AFB8012C */  sw    $t8, 0x12c($sp)
.L0042C268:
/* 0042C268 8F8F8A6C */  lw     $t7, %got(use_real_fp_for_proc)($gp)
/* 0042C26C 91EF0000 */  lbu   $t7, ($t7)
/* 0042C270 11E0000A */  beqz  $t7, .L0042C29C
/* 0042C274 00000000 */   nop   
/* 0042C278 8F818A60 */  lw     $at, %got(frame_pointer)($gp)
/* 0042C27C 2419000D */  li    $t9, 13
/* 0042C280 2404000D */  li    $a0, 13
/* 0042C284 A0390000 */  sb    $t9, ($at)
/* 0042C288 8F998524 */  lw    $t9, %call16(remove_from_free_list)($gp)
/* 0042C28C 0320F809 */  jalr  $t9
/* 0042C290 00000000 */   nop   
/* 0042C294 10000004 */  b     .L0042C2A8
/* 0042C298 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042C29C:
/* 0042C29C 8F818A60 */  lw     $at, %got(frame_pointer)($gp)
/* 0042C2A0 2408001D */  li    $t0, 29
/* 0042C2A4 A0280000 */  sb    $t0, ($at)
.L0042C2A8:
/* 0042C2A8 8F8A8A1C */  lw     $t2, %got(ufsa)($gp)
/* 0042C2AC 914A0000 */  lbu   $t2, ($t2)
/* 0042C2B0 15400005 */  bnez  $t2, .L0042C2C8
/* 0042C2B4 00000000 */   nop   
/* 0042C2B8 8F8B8A20 */  lw     $t3, %got(ufsm)($gp)
/* 0042C2BC 916B0000 */  lbu   $t3, ($t3)
/* 0042C2C0 1160007E */  beqz  $t3, .L0042C4BC
/* 0042C2C4 00000000 */   nop   
.L0042C2C8:
/* 0042C2C8 8F838A08 */  lw     $v1, %got(n_saved_fp_regs)($gp)
/* 0042C2CC 8C630000 */  lw    $v1, ($v1)
/* 0042C2D0 00031840 */  sll   $v1, $v1, 1
/* 0042C2D4 24630032 */  addiu $v1, $v1, 0x32
/* 0042C2D8 2C610034 */  sltiu $at, $v1, 0x34
/* 0042C2DC 1420007D */  bnez  $at, .L0042C4D4
/* 0042C2E0 24630001 */   addiu $v1, $v1, 1
/* 0042C2E4 2464FFCC */  addiu $a0, $v1, -0x34
/* 0042C2E8 30840003 */  andi  $a0, $a0, 3
/* 0042C2EC 1080001B */  beqz  $a0, .L0042C35C
/* 0042C2F0 24100034 */   li    $s0, 52
/* 0042C2F4 24820034 */  addiu $v0, $a0, 0x34
/* 0042C2F8 8F848B8C */  lw     $a0, %got(ugen_fp_callee_saved)($gp)
.L0042C2FC:
/* 0042C2FC 8C8C0000 */  lw    $t4, ($a0)
/* 0042C300 2E090020 */  sltiu $t1, $s0, 0x20
/* 0042C304 02007027 */  not   $t6, $s0
/* 0042C308 01C96804 */  sllv  $t5, $t1, $t6
/* 0042C30C 260FFFE0 */  addiu $t7, $s0, -0x20
/* 0042C310 018DC025 */  or    $t8, $t4, $t5
/* 0042C314 2DF90020 */  sltiu $t9, $t7, 0x20
/* 0042C318 8C8F0008 */  lw    $t7, 8($a0)
/* 0042C31C 8C8B0004 */  lw    $t3, 4($a0)
/* 0042C320 260EFFC0 */  addiu $t6, $s0, -0x40
/* 0042C324 02004027 */  not   $t0, $s0
/* 0042C328 01195004 */  sllv  $t2, $t9, $t0
/* 0042C32C 2DCC0020 */  sltiu $t4, $t6, 0x20
/* 0042C330 AC980000 */  sw    $t8, ($a0)
/* 0042C334 02006827 */  not   $t5, $s0
/* 0042C338 01ACC004 */  sllv  $t8, $t4, $t5
/* 0042C33C 26100001 */  addiu $s0, $s0, 1
/* 0042C340 01F8C825 */  or    $t9, $t7, $t8
/* 0042C344 016A4825 */  or    $t1, $t3, $t2
/* 0042C348 AC890004 */  sw    $t1, 4($a0)
/* 0042C34C 1450FFEB */  bne   $v0, $s0, .L0042C2FC
/* 0042C350 AC990008 */   sw    $t9, 8($a0)
/* 0042C354 1203005F */  beq   $s0, $v1, .L0042C4D4
/* 0042C358 00000000 */   nop   
.L0042C35C:
/* 0042C35C 8F828B8C */  lw     $v0, %got(ugen_fp_callee_saved)($gp)
.L0042C360:
/* 0042C360 8C490000 */  lw    $t1, ($v0)
/* 0042C364 2E080020 */  sltiu $t0, $s0, 0x20
/* 0042C368 02005827 */  not   $t3, $s0
/* 0042C36C 8C590004 */  lw    $t9, 4($v0)
/* 0042C370 01685004 */  sllv  $t2, $t0, $t3
/* 0042C374 260CFFE0 */  addiu $t4, $s0, -0x20
/* 0042C378 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0042C37C 02007827 */  not   $t7, $s0
/* 0042C380 012A7025 */  or    $t6, $t1, $t2
/* 0042C384 01EDC004 */  sllv  $t8, $t5, $t7
/* 0042C388 8C4C0008 */  lw    $t4, 8($v0)
/* 0042C38C 260BFFC0 */  addiu $t3, $s0, -0x40
/* 0042C390 03384025 */  or    $t0, $t9, $t8
/* 0042C394 2D690020 */  sltiu $t1, $t3, 0x20
/* 0042C398 260F0001 */  addiu $t7, $s0, 1
/* 0042C39C AC4E0000 */  sw    $t6, ($v0)
/* 0042C3A0 02005027 */  not   $t2, $s0
/* 0042C3A4 01497004 */  sllv  $t6, $t1, $t2
/* 0042C3A8 8C4B0000 */  lw    $t3, ($v0)
/* 0042C3AC 2DF90020 */  sltiu $t9, $t7, 0x20
/* 0042C3B0 01E0C027 */  not   $t8, $t7
/* 0042C3B4 AC480004 */  sw    $t0, 4($v0)
/* 0042C3B8 018E6825 */  or    $t5, $t4, $t6
/* 0042C3BC 03194004 */  sllv  $t0, $t9, $t8
/* 0042C3C0 8C590004 */  lw    $t9, 4($v0)
/* 0042C3C4 25EAFFE0 */  addiu $t2, $t7, -0x20
/* 0042C3C8 2D4C0020 */  sltiu $t4, $t2, 0x20
/* 0042C3CC AC4D0008 */  sw    $t5, 8($v0)
/* 0042C3D0 01E07027 */  not   $t6, $t7
/* 0042C3D4 01684825 */  or    $t1, $t3, $t0
/* 0042C3D8 01CC6804 */  sllv  $t5, $t4, $t6
/* 0042C3DC 032DC025 */  or    $t8, $t9, $t5
/* 0042C3E0 8C4C0008 */  lw    $t4, 8($v0)
/* 0042C3E4 AC490000 */  sw    $t1, ($v0)
/* 0042C3E8 25EBFFC0 */  addiu $t3, $t7, -0x40
/* 0042C3EC 2D680020 */  sltiu $t0, $t3, 0x20
/* 0042C3F0 01E04827 */  not   $t1, $t7
/* 0042C3F4 26190002 */  addiu $t9, $s0, 2
/* 0042C3F8 01285004 */  sllv  $t2, $t0, $t1
/* 0042C3FC AC580004 */  sw    $t8, 4($v0)
/* 0042C400 8C4F0000 */  lw    $t7, ($v0)
/* 0042C404 0320C027 */  not   $t8, $t9
/* 0042C408 2F2D0020 */  sltiu $t5, $t9, 0x20
/* 0042C40C 018A7025 */  or    $t6, $t4, $t2
/* 0042C410 030D5804 */  sllv  $t3, $t5, $t8
/* 0042C414 8C4D0004 */  lw    $t5, 4($v0)
/* 0042C418 2729FFE0 */  addiu $t1, $t9, -0x20
/* 0042C41C 2D2C0020 */  sltiu $t4, $t1, 0x20
/* 0042C420 AC4E0008 */  sw    $t6, 8($v0)
/* 0042C424 03205027 */  not   $t2, $t9
/* 0042C428 01EB4025 */  or    $t0, $t7, $t3
/* 0042C42C 014C7004 */  sllv  $t6, $t4, $t2
/* 0042C430 AC480000 */  sw    $t0, ($v0)
/* 0042C434 01AEC025 */  or    $t8, $t5, $t6
/* 0042C438 8C4C0008 */  lw    $t4, 8($v0)
/* 0042C43C 03204027 */  not   $t0, $t9
/* 0042C440 272FFFC0 */  addiu $t7, $t9, -0x40
/* 0042C444 2DEB0020 */  sltiu $t3, $t7, 0x20
/* 0042C448 260D0003 */  addiu $t5, $s0, 3
/* 0042C44C 8C590000 */  lw    $t9, ($v0)
/* 0042C450 010B4804 */  sllv  $t1, $t3, $t0
/* 0042C454 AC580004 */  sw    $t8, 4($v0)
/* 0042C458 01A0C027 */  not   $t8, $t5
/* 0042C45C 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0042C460 01895025 */  or    $t2, $t4, $t1
/* 0042C464 030E7804 */  sllv  $t7, $t6, $t8
/* 0042C468 25A8FFE0 */  addiu $t0, $t5, -0x20
/* 0042C46C 032F5825 */  or    $t3, $t9, $t7
/* 0042C470 2D0C0020 */  sltiu $t4, $t0, 0x20
/* 0042C474 AC4A0008 */  sw    $t2, 8($v0)
/* 0042C478 01A04827 */  not   $t1, $t5
/* 0042C47C 012C5004 */  sllv  $t2, $t4, $t1
/* 0042C480 8C4C0008 */  lw    $t4, 8($v0)
/* 0042C484 8C4E0004 */  lw    $t6, 4($v0)
/* 0042C488 AC4B0000 */  sw    $t3, ($v0)
/* 0042C48C 25B9FFC0 */  addiu $t9, $t5, -0x40
/* 0042C490 2F2F0020 */  sltiu $t7, $t9, 0x20
/* 0042C494 01A05827 */  not   $t3, $t5
/* 0042C498 016F4004 */  sllv  $t0, $t7, $t3
/* 0042C49C 26100004 */  addiu $s0, $s0, 4
/* 0042C4A0 01884825 */  or    $t1, $t4, $t0
/* 0042C4A4 01CAC025 */  or    $t8, $t6, $t2
/* 0042C4A8 AC580004 */  sw    $t8, 4($v0)
/* 0042C4AC 1603FFAC */  bne   $s0, $v1, .L0042C360
/* 0042C4B0 AC490008 */   sw    $t1, 8($v0)
/* 0042C4B4 10000007 */  b     .L0042C4D4
/* 0042C4B8 00000000 */   nop   
.L0042C4BC:
/* 0042C4BC 8F818B8C */  lw     $at, %got(ugen_fp_callee_saved)($gp)
/* 0042C4C0 AC200000 */  sw    $zero, ($at)
/* 0042C4C4 8F818B8C */  lw     $at, %got(ugen_fp_callee_saved)($gp)
/* 0042C4C8 AC200004 */  sw    $zero, 4($at)
/* 0042C4CC 8F818B8C */  lw     $at, %got(ugen_fp_callee_saved)($gp)
/* 0042C4D0 AC200008 */  sw    $zero, 8($at)
.L0042C4D4:
/* 0042C4D4 8F8E8AA8 */  lw     $t6, %got(generate_again)($gp)
/* 0042C4D8 91CE0000 */  lbu   $t6, ($t6)
/* 0042C4DC 15C0000E */  bnez  $t6, .L0042C518
/* 0042C4E0 00000000 */   nop   
/* 0042C4E4 8F9983AC */  lw    $t9, %call16(get_saved_regs_size)($gp)
/* 0042C4E8 02C02025 */  move  $a0, $s6
/* 0042C4EC 0320F809 */  jalr  $t9
/* 0042C4F0 00000000 */   nop   
/* 0042C4F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C4F8 8F838AC0 */  lw     $v1, %got(saved_regs_size)($gp)
/* 0042C4FC 8F818A64 */  lw     $at, %got(frame_size)($gp)
/* 0042C500 AC620000 */  sw    $v0, ($v1)
/* 0042C504 8F9981C8 */  lw    $t9, %call16(save_i_ptrs)($gp)
/* 0042C508 AC220000 */  sw    $v0, ($at)
/* 0042C50C 0320F809 */  jalr  $t9
/* 0042C510 00000000 */   nop   
/* 0042C514 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042C518:
/* 0042C518 8F818AA0 */  lw     $at, %got(local_var_size)($gp)
/* 0042C51C AC200000 */  sw    $zero, ($at)
/* 0042C520 8F818AB8 */  lw     $at, %got(max_arg_build)($gp)
/* 0042C524 AC200000 */  sw    $zero, ($at)
/* 0042C528 8F818ABC */  lw     $at, %got(reloc_arg_build)($gp)
/* 0042C52C AC200000 */  sw    $zero, ($at)
/* 0042C530 8F818AA4 */  lw     $at, %got(temp_size)($gp)
/* 0042C534 AC200000 */  sw    $zero, ($at)
/* 0042C538 8F818A94 */  lw     $at, %got(has_calls)($gp)
/* 0042C53C A0200000 */  sb    $zero, ($at)
/* 0042C540 8F818A90 */  lw     $at, %got(uses_gp)($gp)
/* 0042C544 A0200000 */  sb    $zero, ($at)
/* 0042C548 8F818A98 */  lw     $at, %got(num_i_ptr_indexes)($gp)
/* 0042C54C AC200000 */  sw    $zero, ($at)
/* 0042C550 96D80022 */  lhu   $t8, 0x22($s6)
/* 0042C554 8F818AD0 */  lw     $at, %got(curlev)($gp)
/* 0042C558 AC380000 */  sw    $t8, ($at)
/* 0042C55C 8ED90024 */  lw    $t9, 0x24($s6)
/* 0042C560 8F818ACC */  lw     $at, %got(entry_point_index)($gp)
/* 0042C564 AC390000 */  sw    $t9, ($at)
/* 0042C568 8EC7002C */  lw    $a3, 0x2c($s6)
/* 0042C56C 8F818AC8 */  lw     $at, %got(load_stack_limit)($gp)
/* 0042C570 30ED0001 */  andi  $t5, $a3, 1
/* 0042C574 30EB0020 */  andi  $t3, $a3, 0x20
/* 0042C578 30E80004 */  andi  $t0, $a3, 4
/* 0042C57C 30EE0008 */  andi  $t6, $a3, 8
/* 0042C580 000D782B */  sltu  $t7, $zero, $t5
/* 0042C584 000B602B */  sltu  $t4, $zero, $t3
/* 0042C588 0008482B */  sltu  $t1, $zero, $t0
/* 0042C58C 000E502B */  sltu  $t2, $zero, $t6
/* 0042C590 30F80010 */  andi  $t8, $a3, 0x10
/* 0042C594 A3AF0147 */  sb    $t7, 0x147($sp)
/* 0042C598 A3AC0146 */  sb    $t4, 0x146($sp)
/* 0042C59C A3A90145 */  sb    $t1, 0x145($sp)
/* 0042C5A0 A3AA0144 */  sb    $t2, 0x144($sp)
/* 0042C5A4 13000015 */  beqz  $t8, .L0042C5FC
/* 0042C5A8 A0200000 */   sb    $zero, ($at)
/* 0042C5AC 8F818AC8 */  lw     $at, %got(load_stack_limit)($gp)
/* 0042C5B0 8F8D8AA8 */  lw     $t5, %got(generate_again)($gp)
/* 0042C5B4 24190001 */  li    $t9, 1
/* 0042C5B8 A0390000 */  sb    $t9, ($at)
/* 0042C5BC 91AD0000 */  lbu   $t5, ($t5)
/* 0042C5C0 8F8189D4 */  lw     $at, %got(stack_limit_bn)($gp)
/* 0042C5C4 15A00005 */  bnez  $t5, .L0042C5DC
/* 0042C5C8 AC200000 */   sw    $zero, ($at)
/* 0042C5CC 8F828A64 */  lw     $v0, %got(frame_size)($gp)
/* 0042C5D0 8C4F0000 */  lw    $t7, ($v0)
/* 0042C5D4 25EB0004 */  addiu $t3, $t7, 4
/* 0042C5D8 AC4B0000 */  sw    $t3, ($v0)
.L0042C5DC:
/* 0042C5DC 8F828B90 */  lw     $v0, %got(saved_regs)($gp)
/* 0042C5E0 8C4C0000 */  lw    $t4, ($v0)
/* 0042C5E4 8C490004 */  lw    $t1, 4($v0)
/* 0042C5E8 8C4E0008 */  lw    $t6, 8($v0)
/* 0042C5EC 35880100 */  ori   $t0, $t4, 0x100
/* 0042C5F0 AC480000 */  sw    $t0, ($v0)
/* 0042C5F4 AC490004 */  sw    $t1, 4($v0)
/* 0042C5F8 AC4E0008 */  sw    $t6, 8($v0)
.L0042C5FC:
/* 0042C5FC 8F838A64 */  lw     $v1, %got(frame_size)($gp)
/* 0042C600 8EC20008 */  lw    $v0, 8($s6)
/* 0042C604 8C6A0000 */  lw    $t2, ($v1)
/* 0042C608 904F0020 */  lbu   $t7, 0x20($v0)
/* 0042C60C 25580007 */  addiu $t8, $t2, 7
/* 0042C610 07010003 */  bgez  $t8, .L0042C620
/* 0042C614 0018C8C3 */   sra   $t9, $t8, 3
/* 0042C618 27010007 */  addiu $at, $t8, 7
/* 0042C61C 0001C8C3 */  sra   $t9, $at, 3
.L0042C620:
/* 0042C620 001968C0 */  sll   $t5, $t9, 3
/* 0042C624 2DEB00A0 */  sltiu $t3, $t7, 0xa0
/* 0042C628 1160000A */  beqz  $t3, .L0042C654
/* 0042C62C AC6D0000 */   sw    $t5, ($v1)
/* 0042C630 8F898038 */  lw    $t1, %got(D_1001615C)($gp)
/* 0042C634 000F6143 */  sra   $t4, $t7, 5
/* 0042C638 000C4080 */  sll   $t0, $t4, 2
/* 0042C63C 2529615C */  addiu $t1, %lo(D_1001615C) # addiu $t1, $t1, 0x615c
/* 0042C640 01287021 */  addu  $t6, $t1, $t0
/* 0042C644 8DCA0000 */  lw    $t2, ($t6)
/* 0042C648 01EAC004 */  sllv  $t8, $t2, $t7
/* 0042C64C 2B190000 */  slti  $t9, $t8, 0
/* 0042C650 03205825 */  move  $t3, $t9
.L0042C654:
/* 0042C654 11600011 */  beqz  $t3, .L0042C69C
/* 0042C658 00000000 */   nop   
/* 0042C65C 8C420008 */  lw    $v0, 8($v0)
.L0042C660:
/* 0042C660 904D0020 */  lbu   $t5, 0x20($v0)
/* 0042C664 2DAC00A0 */  sltiu $t4, $t5, 0xa0
/* 0042C668 1180000A */  beqz  $t4, .L0042C694
/* 0042C66C 00000000 */   nop   
/* 0042C670 8F8E8038 */  lw    $t6, %got(D_1001615C)($gp)
/* 0042C674 000D4943 */  sra   $t1, $t5, 5
/* 0042C678 00094080 */  sll   $t0, $t1, 2
/* 0042C67C 25CE615C */  addiu $t6, %lo(D_1001615C) # addiu $t6, $t6, 0x615c
/* 0042C680 01C85021 */  addu  $t2, $t6, $t0
/* 0042C684 8D4F0000 */  lw    $t7, ($t2)
/* 0042C688 01AFC004 */  sllv  $t8, $t7, $t5
/* 0042C68C 2B190000 */  slti  $t9, $t8, 0
/* 0042C690 03206025 */  move  $t4, $t9
.L0042C694:
/* 0042C694 5580FFF2 */  bnel  $t4, $zero, .L0042C660
/* 0042C698 8C420008 */   lw    $v0, 8($v0)
.L0042C69C:
/* 0042C69C 8F818AC4 */  lw     $at, %got(has_aent)($gp)
/* 0042C6A0 8F8E8A9C */  lw     $t6, %got(first_ent)($gp)
/* 0042C6A4 92CB0021 */  lbu   $t3, 0x21($s6)
/* 0042C6A8 A0200000 */  sb    $zero, ($at)
/* 0042C6AC 91CE0000 */  lbu   $t6, ($t6)
/* 0042C6B0 8F818B80 */  lw     $at, %got(current_text_sec)($gp)
/* 0042C6B4 3169001F */  andi  $t1, $t3, 0x1f
/* 0042C6B8 AFA2015C */  sw    $v0, 0x15c($sp)
/* 0042C6BC A3A90127 */  sb    $t1, 0x127($sp)
/* 0042C6C0 11C0000E */  beqz  $t6, .L0042C6FC
/* 0042C6C4 AC200000 */   sw    $zero, ($at)
/* 0042C6C8 8F888A78 */  lw     $t0, %got(resident_text)($gp)
/* 0042C6CC 8F818A9C */  lw     $at, %got(first_ent)($gp)
/* 0042C6D0 91080000 */  lbu   $t0, ($t0)
/* 0042C6D4 A0200000 */  sb    $zero, ($at)
/* 0042C6D8 51000009 */  beql  $t0, $zero, .L0042C700
/* 0042C6DC 30EA0100 */   andi  $t2, $a3, 0x100
/* 0042C6E0 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0042C6E4 2404003A */  li    $a0, 58
/* 0042C6E8 00002825 */  move  $a1, $zero
/* 0042C6EC 0320F809 */  jalr  $t9
/* 0042C6F0 00000000 */   nop   
/* 0042C6F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C6F8 8EC7002C */  lw    $a3, 0x2c($s6)
.L0042C6FC:
/* 0042C6FC 30EA0100 */  andi  $t2, $a3, 0x100
.L0042C700:
/* 0042C700 11400008 */  beqz  $t2, .L0042C724
/* 0042C704 00000000 */   nop   
/* 0042C708 8F818A64 */  lw     $at, %got(frame_size)($gp)
/* 0042C70C 8F9982E4 */  lw    $t9, %call16(clear_saved_regs)($gp)
/* 0042C710 AC200000 */  sw    $zero, ($at)
/* 0042C714 8F818AC0 */  lw     $at, %got(saved_regs_size)($gp)
/* 0042C718 0320F809 */  jalr  $t9
/* 0042C71C AC200000 */   sw    $zero, ($at)
/* 0042C720 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042C724:
/* 0042C724 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042C728 100019E2 */  b     .L00432EB4
/* 0042C72C 90840000 */   lbu   $a0, ($a0)
.L0042C730:
/* 0042C730 8ECF002C */  lw    $t7, 0x2c($s6)
/* 0042C734 31ED0080 */  andi  $t5, $t7, 0x80
/* 0042C738 11A00007 */  beqz  $t5, .L0042C758
/* 0042C73C 00000000 */   nop   
/* 0042C740 8F818A70 */  lw     $at, %got(home_vararg_reg)($gp)
/* 0042C744 8F878AA0 */  lw     $a3, %got(local_var_size)($gp)
/* 0042C748 24180001 */  li    $t8, 1
/* 0042C74C A0380000 */  sb    $t8, ($at)
/* 0042C750 10000007 */  b     .L0042C770
/* 0042C754 8CE70000 */   lw    $a3, ($a3)
.L0042C758:
/* 0042C758 8F9983B0 */  lw    $t9, %call16(unhome_parms)($gp)
/* 0042C75C 0320F809 */  jalr  $t9
/* 0042C760 00000000 */   nop   
/* 0042C764 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C768 8F878AA0 */  lw     $a3, %got(local_var_size)($gp)
/* 0042C76C 8CE70000 */  lw    $a3, ($a3)
.L0042C770:
/* 0042C770 8F818AC4 */  lw     $at, %got(has_aent)($gp)
/* 0042C774 8F8C8AA4 */  lw     $t4, %got(temp_size)($gp)
/* 0042C778 8F8B8AC0 */  lw     $t3, %got(saved_regs_size)($gp)
/* 0042C77C 24190001 */  li    $t9, 1
/* 0042C780 A0390000 */  sb    $t9, ($at)
/* 0042C784 8F9982E0 */  lw    $t9, %call16(gen_entry)($gp)
/* 0042C788 8F868A64 */  lw     $a2, %got(frame_size)($gp)
/* 0042C78C 8D8C0000 */  lw    $t4, ($t4)
/* 0042C790 8D6B0000 */  lw    $t3, ($t3)
/* 0042C794 96C50022 */  lhu   $a1, 0x22($s6)
/* 0042C798 8EC40024 */  lw    $a0, 0x24($s6)
/* 0042C79C 8CC60000 */  lw    $a2, ($a2)
/* 0042C7A0 AFAC0010 */  sw    $t4, 0x10($sp)
/* 0042C7A4 0320F809 */  jalr  $t9
/* 0042C7A8 AFAB0014 */   sw    $t3, 0x14($sp)
/* 0042C7AC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C7B0 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042C7B4 100019BF */  b     .L00432EB4
/* 0042C7B8 90840000 */   lbu   $a0, ($a0)
.L0042C7BC:
/* 0042C7BC 8F998530 */  lw    $t9, %call16(check_no_used)($gp)
/* 0042C7C0 0320F809 */  jalr  $t9
/* 0042C7C4 00000000 */   nop   
/* 0042C7C8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C7CC 8F898AA8 */  lw     $t1, %got(generate_again)($gp)
/* 0042C7D0 91290000 */  lbu   $t1, ($t1)
/* 0042C7D4 55201A0E */  bnel  $t1, $zero, .L00433010
/* 0042C7D8 8FBF00D4 */   lw    $ra, 0xd4($sp)
/* 0042C7DC 8F9985C8 */  lw    $t9, %call16(get_temp_area_size)($gp)
/* 0042C7E0 0320F809 */  jalr  $t9
/* 0042C7E4 00000000 */   nop   
/* 0042C7E8 10400046 */  beqz  $v0, .L0042C904
/* 0042C7EC 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042C7F0 8F9981CC */  lw    $t9, %call16(restore_i_ptrs)($gp)
/* 0042C7F4 8F818AA8 */  lw     $at, %got(generate_again)($gp)
/* 0042C7F8 240E0001 */  li    $t6, 1
/* 0042C7FC 0320F809 */  jalr  $t9
/* 0042C800 A02E0000 */   sb    $t6, ($at)
/* 0042C804 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C808 8F9985C8 */  lw    $t9, %call16(get_temp_area_size)($gp)
/* 0042C80C 0320F809 */  jalr  $t9
/* 0042C810 00000000 */   nop   
/* 0042C814 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C818 24480007 */  addiu $t0, $v0, 7
/* 0042C81C 8F838A64 */  lw     $v1, %got(frame_size)($gp)
/* 0042C820 8F858AA4 */  lw     $a1, %got(temp_size)($gp)
/* 0042C824 05010003 */  bgez  $t0, .L0042C834
/* 0042C828 000850C3 */   sra   $t2, $t0, 3
/* 0042C82C 25010007 */  addiu $at, $t0, 7
/* 0042C830 000150C3 */  sra   $t2, $at, 3
.L0042C834:
/* 0042C834 8C6D0000 */  lw    $t5, ($v1)
/* 0042C838 8F8B8AB8 */  lw     $t3, %got(max_arg_build)($gp)
/* 0042C83C 000A78C0 */  sll   $t7, $t2, 3
/* 0042C840 01AFC821 */  addu  $t9, $t5, $t7
/* 0042C844 AC790000 */  sw    $t9, ($v1)
/* 0042C848 ACAF0000 */  sw    $t7, ($a1)
/* 0042C84C 8F8E8AC0 */  lw     $t6, %got(saved_regs_size)($gp)
/* 0042C850 8D6B0000 */  lw    $t3, ($t3)
/* 0042C854 8DCE0000 */  lw    $t6, ($t6)
/* 0042C858 032B4823 */  subu  $t1, $t9, $t3
/* 0042C85C 8F9985CC */  lw    $t9, %call16(set_temps_offset)($gp)
/* 0042C860 012E2023 */  subu  $a0, $t1, $t6
/* 0042C864 00042023 */  negu  $a0, $a0
/* 0042C868 0320F809 */  jalr  $t9
/* 0042C86C 00000000 */   nop   
/* 0042C870 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C874 8FA4015C */  lw    $a0, 0x15c($sp)
/* 0042C878 8F9983B8 */  lw    $t9, %call16(clean_tree)($gp)
/* 0042C87C 0320F809 */  jalr  $t9
/* 0042C880 00000000 */   nop   
/* 0042C884 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C888 24080001 */  li    $t0, 1
/* 0042C88C 2406000E */  li    $a2, 14
/* 0042C890 8F8A89E0 */  lw     $t2, %got(debug_ugen)($gp)
/* 0042C894 8F818AAC */  lw     $at, %got(first_loc)($gp)
/* 0042C898 914A0000 */  lbu   $t2, ($t2)
/* 0042C89C A0280000 */  sb    $t0, ($at)
/* 0042C8A0 1140000E */  beqz  $t2, .L0042C8DC
/* 0042C8A4 00000000 */   nop   
/* 0042C8A8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0042C8AC 8F908954 */  lw     $s0, %got(output)($gp)
/* 0042C8B0 8F858038 */  lw    $a1, %got(RO_1000AD1A)($gp)
/* 0042C8B4 2407000E */  li    $a3, 14
/* 0042C8B8 8E040000 */  lw    $a0, ($s0)
/* 0042C8BC 0320F809 */  jalr  $t9
/* 0042C8C0 24A5AD1A */   addiu $a1, %lo(RO_1000AD1A) # addiu $a1, $a1, -0x52e6
/* 0042C8C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C8C8 8E040000 */  lw    $a0, ($s0)
/* 0042C8CC 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0042C8D0 0320F809 */  jalr  $t9
/* 0042C8D4 00000000 */   nop   
/* 0042C8D8 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042C8DC:
/* 0042C8DC 8F9985A4 */  lw    $t9, %call16(init_temps)($gp)
/* 0042C8E0 0320F809 */  jalr  $t9
/* 0042C8E4 00000000 */   nop   
/* 0042C8E8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C8EC 8FA4015C */  lw    $a0, 0x15c($sp)
/* 0042C8F0 24050048 */  li    $a1, 72
/* 0042C8F4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042C8F8 0320F809 */  jalr  $t9
/* 0042C8FC 00000000 */   nop   
/* 0042C900 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042C904:
/* 0042C904 8F8D897C */  lw     $t5, %got(i_ptr)($gp)
/* 0042C908 8F8F8978 */  lw     $t7, %got(ibuffer)($gp)
/* 0042C90C 8F818AA8 */  lw     $at, %got(generate_again)($gp)
/* 0042C910 8DAD0000 */  lw    $t5, ($t5)
/* 0042C914 8DEF0000 */  lw    $t7, ($t7)
/* 0042C918 A0200000 */  sb    $zero, ($at)
/* 0042C91C 000DC100 */  sll   $t8, $t5, 4
/* 0042C920 01F81021 */  addu  $v0, $t7, $t8
/* 0042C924 9059FFE5 */  lbu   $t9, -0x1b($v0)
/* 0042C928 24010017 */  li    $at, 23
/* 0042C92C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0042C930 332C003F */  andi  $t4, $t9, 0x3f
/* 0042C934 1581000D */  bne   $t4, $at, .L0042C96C
/* 0042C938 00000000 */   nop   
/* 0042C93C 944BFFF6 */  lhu   $t3, -0xa($v0)
/* 0042C940 24010004 */  li    $at, 4
/* 0042C944 000B4D80 */  sll   $t1, $t3, 0x16
/* 0042C948 000975C2 */  srl   $t6, $t1, 0x17
/* 0042C94C 15C10007 */  bne   $t6, $at, .L0042C96C
/* 0042C950 00000000 */   nop   
/* 0042C954 8F998240 */  lw    $t9, %call16(emit_dir1)($gp)
/* 0042C958 24040004 */  li    $a0, 4
/* 0042C95C 00002825 */  move  $a1, $zero
/* 0042C960 0320F809 */  jalr  $t9
/* 0042C964 24060005 */   li    $a2, 5
/* 0042C968 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042C96C:
/* 0042C96C 8F998428 */  lw    $t9, %call16(output_pool)($gp)
/* 0042C970 0320F809 */  jalr  $t9
/* 0042C974 00000000 */   nop   
/* 0042C978 8FA80130 */  lw    $t0, 0x130($sp)
/* 0042C97C 2401FFFF */  li    $at, -1
/* 0042C980 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042C984 15010071 */  bne   $t0, $at, .L0042CB4C
/* 0042C988 00000000 */   nop   
/* 0042C98C 8F8A8AC4 */  lw     $t2, %got(has_aent)($gp)
/* 0042C990 93AF0127 */  lbu   $t7, 0x127($sp)
/* 0042C994 AFA0013C */  sw    $zero, 0x13c($sp)
/* 0042C998 914A0000 */  lbu   $t2, ($t2)
/* 0042C99C 00003025 */  move  $a2, $zero
/* 0042C9A0 2401000B */  li    $at, 11
/* 0042C9A4 11400005 */  beqz  $t2, .L0042C9BC
/* 0042C9A8 25F8FFFB */   addiu $t8, $t7, -5
/* 0042C9AC 3C0D2000 */  lui   $t5, 0x2000
/* 0042C9B0 AFAD013C */  sw    $t5, 0x13c($sp)
/* 0042C9B4 1000001C */  b     .L0042CA28
/* 0042C9B8 3C06F000 */   lui   $a2, 0xf000
.L0042C9BC:
/* 0042C9BC 11E1001A */  beq   $t7, $at, .L0042CA28
/* 0042C9C0 2F010009 */   sltiu $at, $t8, 9
/* 0042C9C4 10200016 */  beqz  $at, .L0042CA20
/* 0042C9C8 01E02025 */   move  $a0, $t7
/* 0042C9CC 8F818038 */  lw    $at, %got(jtbl_1000AD28)($gp)
/* 0042C9D0 0018C080 */  sll   $t8, $t8, 2
/* 0042C9D4 00380821 */  addu  $at, $at, $t8
/* 0042C9D8 8C38AD28 */  lw    $t8, %lo(jtbl_1000AD28)($at)
/* 0042C9DC 031CC021 */  addu  $t8, $t8, $gp
/* 0042C9E0 03000008 */  jr    $t8
/* 0042C9E4 00000000 */   nop   
.L0042C9E8:
/* 0042C9E8 1000000F */  b     .L0042CA28
/* 0042C9EC 3C06A000 */   lui   $a2, 0xa000
.L0042C9F0:
/* 0042C9F0 1000000D */  b     .L0042CA28
/* 0042C9F4 3C06F000 */   lui   $a2, 0xf000
.L0042C9F8:
/* 0042C9F8 8F9989DC */  lw     $t9, %got(basicint)($gp)
/* 0042C9FC 3C0C3000 */  lui   $t4, 0x3000
/* 0042CA00 3C0B2000 */  lui   $t3, 0x2000
/* 0042CA04 93390000 */  lbu   $t9, ($t9)
/* 0042CA08 17200003 */  bnez  $t9, .L0042CA18
/* 0042CA0C 00000000 */   nop   
/* 0042CA10 10000005 */  b     .L0042CA28
/* 0042CA14 AFAC013C */   sw    $t4, 0x13c($sp)
.L0042CA18:
/* 0042CA18 10000003 */  b     .L0042CA28
/* 0042CA1C AFAB013C */   sw    $t3, 0x13c($sp)
.L0042CA20:
/* 0042CA20 3C092000 */  lui   $t1, 0x2000
/* 0042CA24 AFA9013C */  sw    $t1, 0x13c($sp)
.L0042CA28:
/* 0042CA28 8F908AD4 */  lw     $s0, %got(pdefs)($gp)
/* 0042CA2C 8E100000 */  lw    $s0, ($s0)
/* 0042CA30 5200003F */  beql  $s0, $zero, .L0042CB30
/* 0042CA34 8FA9013C */   lw    $t1, 0x13c($sp)
/* 0042CA38 8E0E0030 */  lw    $t6, 0x30($s0)
/* 0042CA3C 2401FFFF */  li    $at, -1
/* 0042CA40 51C1003B */  beql  $t6, $at, .L0042CB30
/* 0042CA44 8FA9013C */   lw    $t1, 0x13c($sp)
/* 0042CA48 96080022 */  lhu   $t0, 0x22($s0)
.L0042CA4C:
/* 0042CA4C 24010001 */  li    $at, 1
/* 0042CA50 AFA60138 */  sw    $a2, 0x138($sp)
/* 0042CA54 5101002E */  beql  $t0, $at, .L0042CB10
/* 0042CA58 8E100008 */   lw    $s0, 8($s0)
/* 0042CA5C 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 0042CA60 02002025 */  move  $a0, $s0
/* 0042CA64 AFA60138 */  sw    $a2, 0x138($sp)
/* 0042CA68 0320F809 */  jalr  $t9
/* 0042CA6C 00000000 */   nop   
/* 0042CA70 920A0021 */  lbu   $t2, 0x21($s0)
/* 0042CA74 3C01000C */  lui   $at, 0xc
/* 0042CA78 34218000 */  ori   $at, $at, 0x8000
/* 0042CA7C 314D001F */  andi  $t5, $t2, 0x1f
/* 0042CA80 2DAF0020 */  sltiu $t7, $t5, 0x20
/* 0042CA84 000FC023 */  negu  $t8, $t7
/* 0042CA88 0301C824 */  and   $t9, $t8, $at
/* 0042CA8C 01B96004 */  sllv  $t4, $t9, $t5
/* 0042CA90 05810010 */  bgez  $t4, .L0042CAD4
/* 0042CA94 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042CA98 8FAB0138 */  lw    $t3, 0x138($sp)
/* 0042CA9C 8E0A0028 */  lw    $t2, 0x28($s0)
/* 0042CAA0 304300FF */  andi  $v1, $v0, 0xff
/* 0042CAA4 3C098000 */  lui   $t1, 0x8000
/* 0042CAA8 00697006 */  srlv  $t6, $t1, $v1
/* 0042CAAC 24010008 */  li    $at, 8
/* 0042CAB0 016E4025 */  or    $t0, $t3, $t6
/* 0042CAB4 15410015 */  bne   $t2, $at, .L0042CB0C
/* 0042CAB8 AFA80138 */   sw    $t0, 0x138($sp)
/* 0042CABC 24780001 */  addiu $t8, $v1, 1
/* 0042CAC0 3C198000 */  lui   $t9, 0x8000
/* 0042CAC4 03196806 */  srlv  $t5, $t9, $t8
/* 0042CAC8 010D6025 */  or    $t4, $t0, $t5
/* 0042CACC 1000000F */  b     .L0042CB0C
/* 0042CAD0 AFAC0138 */   sw    $t4, 0x138($sp)
.L0042CAD4:
/* 0042CAD4 8FA9013C */  lw    $t1, 0x13c($sp)
/* 0042CAD8 8E0A0028 */  lw    $t2, 0x28($s0)
/* 0042CADC 304300FF */  andi  $v1, $v0, 0xff
/* 0042CAE0 3C0B8000 */  lui   $t3, 0x8000
/* 0042CAE4 006B7006 */  srlv  $t6, $t3, $v1
/* 0042CAE8 24010008 */  li    $at, 8
/* 0042CAEC 012E4025 */  or    $t0, $t1, $t6
/* 0042CAF0 15410006 */  bne   $t2, $at, .L0042CB0C
/* 0042CAF4 AFA8013C */   sw    $t0, 0x13c($sp)
/* 0042CAF8 24780001 */  addiu $t8, $v1, 1
/* 0042CAFC 3C0F8000 */  lui   $t7, 0x8000
/* 0042CB00 030F6806 */  srlv  $t5, $t7, $t8
/* 0042CB04 010D6025 */  or    $t4, $t0, $t5
/* 0042CB08 AFAC013C */  sw    $t4, 0x13c($sp)
.L0042CB0C:
/* 0042CB0C 8E100008 */  lw    $s0, 8($s0)
.L0042CB10:
/* 0042CB10 8FA60138 */  lw    $a2, 0x138($sp)
/* 0042CB14 52000006 */  beql  $s0, $zero, .L0042CB30
/* 0042CB18 8FA9013C */   lw    $t1, 0x13c($sp)
/* 0042CB1C 8E0B0030 */  lw    $t3, 0x30($s0)
/* 0042CB20 2401FFFF */  li    $at, -1
/* 0042CB24 5561FFC9 */  bnel  $t3, $at, .L0042CA4C
/* 0042CB28 96080022 */   lhu   $t0, 0x22($s0)
/* 0042CB2C 8FA9013C */  lw    $t1, 0x13c($sp)
.L0042CB30:
/* 0042CB30 8F99824C */  lw    $t9, %call16(emit_regmask)($gp)
/* 0042CB34 34C60FFF */  ori   $a2, $a2, 0xfff
/* 0042CB38 3525FF0E */  ori   $a1, $t1, 0xff0e
/* 0042CB3C AFA5013C */  sw    $a1, 0x13c($sp)
/* 0042CB40 0320F809 */  jalr  $t9
/* 0042CB44 24040035 */   li    $a0, 53
/* 0042CB48 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042CB4C:
/* 0042CB4C 8F8A8A94 */  lw     $t2, %got(has_calls)($gp)
/* 0042CB50 8F888AA0 */  lw     $t0, %got(local_var_size)($gp)
/* 0042CB54 8F988AB0 */  lw     $t8, %got(first_file_number)($gp)
/* 0042CB58 914A0000 */  lbu   $t2, ($t2)
/* 0042CB5C 8D080000 */  lw    $t0, ($t0)
/* 0042CB60 8F998AB4 */  lw     $t9, %got(first_line_number)($gp)
/* 0042CB64 2D4F0001 */  sltiu $t7, $t2, 1
/* 0042CB68 8F8A8AC0 */  lw     $t2, %got(saved_regs_size)($gp)
/* 0042CB6C 8F8B8AC8 */  lw     $t3, %got(load_stack_limit)($gp)
/* 0042CB70 8F898ABC */  lw     $t1, %got(reloc_arg_build)($gp)
/* 0042CB74 8F8E8AA4 */  lw     $t6, %got(temp_size)($gp)
/* 0042CB78 AFA80010 */  sw    $t0, 0x10($sp)
/* 0042CB7C 93A80146 */  lbu   $t0, 0x146($sp)
/* 0042CB80 93AD0145 */  lbu   $t5, 0x145($sp)
/* 0042CB84 93AC0144 */  lbu   $t4, 0x144($sp)
/* 0042CB88 8F180000 */  lw    $t8, ($t8)
/* 0042CB8C 8F390000 */  lw    $t9, ($t9)
/* 0042CB90 8D4A0000 */  lw    $t2, ($t2)
/* 0042CB94 916B0000 */  lbu   $t3, ($t3)
/* 0042CB98 8D290000 */  lw    $t1, ($t1)
/* 0042CB9C 8DCE0000 */  lw    $t6, ($t6)
/* 0042CBA0 AFAF0014 */  sw    $t7, 0x14($sp)
/* 0042CBA4 8F8F8B80 */  lw     $t7, %got(current_text_sec)($gp)
/* 0042CBA8 AFA80034 */  sw    $t0, 0x34($sp)
/* 0042CBAC AFAD0020 */  sw    $t5, 0x20($sp)
/* 0042CBB0 AFAC0024 */  sw    $t4, 0x24($sp)
/* 0042CBB4 AFB80018 */  sw    $t8, 0x18($sp)
/* 0042CBB8 AFB9001C */  sw    $t9, 0x1c($sp)
/* 0042CBBC AFAA0038 */  sw    $t2, 0x38($sp)
/* 0042CBC0 AFAB0028 */  sw    $t3, 0x28($sp)
/* 0042CBC4 AFA9002C */  sw    $t1, 0x2c($sp)
/* 0042CBC8 AFAE0030 */  sw    $t6, 0x30($sp)
/* 0042CBCC 8DF90000 */  lw    $t9, ($t7)
/* 0042CBD0 8FAB012C */  lw    $t3, 0x12c($sp)
/* 0042CBD4 8FAC0154 */  lw    $t4, 0x154($sp)
/* 0042CBD8 AFB90040 */  sw    $t9, 0x40($sp)
/* 0042CBDC 8F9982DC */  lw    $t9, %call16(gen_entry_exit)($gp)
/* 0042CBE0 8DF80004 */  lw    $t8, 4($t7)
/* 0042CBE4 8FAD0130 */  lw    $t5, 0x130($sp)
/* 0042CBE8 8F848ACC */  lw     $a0, %got(entry_point_index)($gp)
/* 0042CBEC 8F868AD0 */  lw     $a2, %got(curlev)($gp)
/* 0042CBF0 8F878A64 */  lw     $a3, %got(frame_size)($gp)
/* 0042CBF4 93A50147 */  lbu   $a1, 0x147($sp)
/* 0042CBF8 AFAB0050 */  sw    $t3, 0x50($sp)
/* 0042CBFC AFAC004C */  sw    $t4, 0x4c($sp)
/* 0042CC00 AFB80044 */  sw    $t8, 0x44($sp)
/* 0042CC04 AFAD0048 */  sw    $t5, 0x48($sp)
/* 0042CC08 8C840000 */  lw    $a0, ($a0)
/* 0042CC0C 8CC60000 */  lw    $a2, ($a2)
/* 0042CC10 0320F809 */  jalr  $t9
/* 0042CC14 8CE70000 */   lw    $a3, ($a3)
/* 0042CC18 8FA90130 */  lw    $t1, 0x130($sp)
/* 0042CC1C 2401FFFF */  li    $at, -1
/* 0042CC20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042CC24 11210007 */  beq   $t1, $at, .L0042CC44
/* 0042CC28 24040022 */   li    $a0, 34
/* 0042CC2C 8F998214 */  lw    $t9, %call16(emit_a)($gp)
/* 0042CC30 01202825 */  move  $a1, $t1
/* 0042CC34 00003025 */  move  $a2, $zero
/* 0042CC38 0320F809 */  jalr  $t9
/* 0042CC3C 00003825 */   move  $a3, $zero
/* 0042CC40 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042CC44:
/* 0042CC44 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042CC48 24040018 */  li    $a0, 24
/* 0042CC4C 8EC50024 */  lw    $a1, 0x24($s6)
/* 0042CC50 0320F809 */  jalr  $t9
/* 0042CC54 00000000 */   nop   
/* 0042CC58 100018EC */  b     .L0043300C
/* 0042CC5C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042CC60:
/* 0042CC60 8F8E8B80 */  lw     $t6, %got(current_text_sec)($gp)
/* 0042CC64 8ECA0030 */  lw    $t2, 0x30($s6)
/* 0042CC68 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042CC6C ADCA0000 */  sw    $t2, ($t6)
/* 0042CC70 8EC80034 */  lw    $t0, 0x34($s6)
/* 0042CC74 ADC80004 */  sw    $t0, 4($t6)
/* 0042CC78 1000188E */  b     .L00432EB4
/* 0042CC7C 90840000 */   lbu   $a0, ($a0)
.L0042CC80:
/* 0042CC80 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042CC84 2404003E */  li    $a0, 62
/* 0042CC88 8EC50024 */  lw    $a1, 0x24($s6)
/* 0042CC8C 0320F809 */  jalr  $t9
/* 0042CC90 00000000 */   nop   
/* 0042CC94 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042CC98 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042CC9C 10001885 */  b     .L00432EB4
/* 0042CCA0 90840000 */   lbu   $a0, ($a0)
.L0042CCA4:
/* 0042CCA4 92C40021 */  lbu   $a0, 0x21($s6)
/* 0042CCA8 00042600 */  sll   $a0, $a0, 0x18
/* 0042CCAC 00042742 */  srl   $a0, $a0, 0x1d
/* 0042CCB0 308400FF */  andi  $a0, $a0, 0xff
/* 0042CCB4 248FFFFF */  addiu $t7, $a0, -1
/* 0042CCB8 2DE10006 */  sltiu $at, $t7, 6
/* 0042CCBC 1020009F */  beqz  $at, .L0042CF3C
/* 0042CCC0 00000000 */   nop   
/* 0042CCC4 8F818038 */  lw    $at, %got(jtbl_1000AD4C)($gp)
/* 0042CCC8 000F7880 */  sll   $t7, $t7, 2
/* 0042CCCC 002F0821 */  addu  $at, $at, $t7
/* 0042CCD0 8C2FAD4C */  lw    $t7, %lo(jtbl_1000AD4C)($at)
/* 0042CCD4 01FC7821 */  addu  $t7, $t7, $gp
/* 0042CCD8 01E00008 */  jr    $t7
/* 0042CCDC 00000000 */   nop   
.L0042CCE0:
/* 0042CCE0 8F9983B4 */  lw    $t9, %call16(home_parms)($gp)
/* 0042CCE4 8ED80000 */  lw    $t8, ($s6)
/* 0042CCE8 8F818AD4 */  lw     $at, %got(pdefs)($gp)
/* 0042CCEC 8FA40154 */  lw    $a0, 0x154($sp)
/* 0042CCF0 0320F809 */  jalr  $t9
/* 0042CCF4 AC380000 */   sw    $t8, ($at)
/* 0042CCF8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042CCFC 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042CD00 1000186C */  b     .L00432EB4
/* 0042CD04 90840000 */   lbu   $a0, ($a0)
.L0042CD08:
/* 0042CD08 8F998A6C */  lw     $t9, %got(use_real_fp_for_proc)($gp)
/* 0042CD0C 93390000 */  lbu   $t9, ($t9)
/* 0042CD10 13200026 */  beqz  $t9, .L0042CDAC
/* 0042CD14 00000000 */   nop   
/* 0042CD18 8F99851C */  lw    $t9, %call16(add_to_free_list)($gp)
/* 0042CD1C 8F848A60 */  lw     $a0, %got(frame_pointer)($gp)
/* 0042CD20 0320F809 */  jalr  $t9
/* 0042CD24 90840000 */   lbu   $a0, ($a0)
/* 0042CD28 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042CD2C 240D001E */  li    $t5, 30
/* 0042CD30 8F818A60 */  lw     $at, %got(frame_pointer)($gp)
/* 0042CD34 8F828B90 */  lw     $v0, %got(saved_regs)($gp)
/* 0042CD38 8F898A60 */  lw     $t1, %got(frame_pointer)($gp)
/* 0042CD3C A02D0000 */  sb    $t5, ($at)
/* 0042CD40 8C4C0000 */  lw    $t4, ($v0)
/* 0042CD44 8C580004 */  lw    $t8, 4($v0)
/* 0042CD48 8F838A64 */  lw     $v1, %got(frame_size)($gp)
/* 0042CD4C 358B0002 */  ori   $t3, $t4, 2
/* 0042CD50 AC4B0000 */  sw    $t3, ($v0)
/* 0042CD54 91290000 */  lbu   $t1, ($t1)
/* 0042CD58 8F818AC0 */  lw     $at, %got(saved_regs_size)($gp)
/* 0042CD5C 252EFFE0 */  addiu $t6, $t1, -0x20
/* 0042CD60 2DC80020 */  sltiu $t0, $t6, 0x20
/* 0042CD64 01205027 */  not   $t2, $t1
/* 0042CD68 01487804 */  sllv  $t7, $t0, $t2
/* 0042CD6C 030FC825 */  or    $t9, $t8, $t7
/* 0042CD70 8C480008 */  lw    $t0, 8($v0)
/* 0042CD74 8C780000 */  lw    $t8, ($v1)
/* 0042CD78 252DFFC0 */  addiu $t5, $t1, -0x40
/* 0042CD7C 2DAC0020 */  sltiu $t4, $t5, 0x20
/* 0042CD80 AC590004 */  sw    $t9, 4($v0)
/* 0042CD84 01205827 */  not   $t3, $t1
/* 0042CD88 8F998AC0 */  lw     $t9, %got(saved_regs_size)($gp)
/* 0042CD8C 016C7004 */  sllv  $t6, $t4, $t3
/* 0042CD90 010E5025 */  or    $t2, $t0, $t6
/* 0042CD94 270F0008 */  addiu $t7, $t8, 8
/* 0042CD98 AC4A0008 */  sw    $t2, 8($v0)
/* 0042CD9C AC6F0000 */  sw    $t7, ($v1)
/* 0042CDA0 8F390000 */  lw    $t9, ($t9)
/* 0042CDA4 272D0008 */  addiu $t5, $t9, 8
/* 0042CDA8 AC2D0000 */  sw    $t5, ($at)
.L0042CDAC:
/* 0042CDAC 8F8989E4 */  lw     $t1, %got(pic_level)($gp)
/* 0042CDB0 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042CDB4 8F8389B4 */  lw     $v1, %got(pseudo_leaf)($gp)
/* 0042CDB8 8D290000 */  lw    $t1, ($t1)
/* 0042CDBC 90840000 */  lbu   $a0, ($a0)
/* 0042CDC0 90630000 */  lbu   $v1, ($v1)
/* 0042CDC4 59200021 */  blezl $t1, .L0042CE4C
/* 0042CDC8 8EC90028 */   lw    $t1, 0x28($s6)
/* 0042CDCC 8F8289F0 */  lw     $v0, %got(use_cpalias)($gp)
/* 0042CDD0 90420000 */  lbu   $v0, ($v0)
/* 0042CDD4 10400005 */  beqz  $v0, .L0042CDEC
/* 0042CDD8 00000000 */   nop   
/* 0042CDDC 8F828A60 */  lw     $v0, %got(frame_pointer)($gp)
/* 0042CDE0 90420000 */  lbu   $v0, ($v0)
/* 0042CDE4 3842001E */  xori  $v0, $v0, 0x1e
/* 0042CDE8 0002102B */  sltu  $v0, $zero, $v0
.L0042CDEC:
/* 0042CDEC 8F8189F0 */  lw     $at, %got(use_cpalias)($gp)
/* 0042CDF0 8F8C89F0 */  lw     $t4, %got(use_cpalias)($gp)
/* 0042CDF4 A0220000 */  sb    $v0, ($at)
/* 0042CDF8 918C0000 */  lbu   $t4, ($t4)
/* 0042CDFC 1180000A */  beqz  $t4, .L0042CE28
/* 0042CE00 00000000 */   nop   
/* 0042CE04 8F828B90 */  lw     $v0, %got(saved_regs)($gp)
/* 0042CE08 8C4B0000 */  lw    $t3, ($v0)
/* 0042CE0C 8C4E0004 */  lw    $t6, 4($v0)
/* 0042CE10 8C4A0008 */  lw    $t2, 8($v0)
/* 0042CE14 35680002 */  ori   $t0, $t3, 2
/* 0042CE18 AC480000 */  sw    $t0, ($v0)
/* 0042CE1C AC4E0004 */  sw    $t6, 4($v0)
/* 0042CE20 10000009 */  b     .L0042CE48
/* 0042CE24 AC4A0008 */   sw    $t2, 8($v0)
.L0042CE28:
/* 0042CE28 8F828B90 */  lw     $v0, %got(saved_regs)($gp)
/* 0042CE2C 8C580000 */  lw    $t8, ($v0)
/* 0042CE30 8C590004 */  lw    $t9, 4($v0)
/* 0042CE34 8C4D0008 */  lw    $t5, 8($v0)
/* 0042CE38 370F0008 */  ori   $t7, $t8, 8
/* 0042CE3C AC4F0000 */  sw    $t7, ($v0)
/* 0042CE40 AC590004 */  sw    $t9, 4($v0)
/* 0042CE44 AC4D0008 */  sw    $t5, 8($v0)
.L0042CE48:
/* 0042CE48 8EC90028 */  lw    $t1, 0x28($s6)
.L0042CE4C:
/* 0042CE4C 252C0007 */  addiu $t4, $t1, 7
/* 0042CE50 05810003 */  bgez  $t4, .L0042CE60
/* 0042CE54 000C58C3 */   sra   $t3, $t4, 3
/* 0042CE58 25810007 */  addiu $at, $t4, 7
/* 0042CE5C 000158C3 */  sra   $t3, $at, 3
.L0042CE60:
/* 0042CE60 8F818AB8 */  lw     $at, %got(max_arg_build)($gp)
/* 0042CE64 000B40C0 */  sll   $t0, $t3, 3
/* 0042CE68 14601812 */  bnez  $v1, .L00432EB4
/* 0042CE6C AC280000 */   sw    $t0, ($at)
/* 0042CE70 8F828B90 */  lw     $v0, %got(saved_regs)($gp)
/* 0042CE74 8F998AA8 */  lw     $t9, %got(generate_again)($gp)
/* 0042CE78 8C4E0000 */  lw    $t6, ($v0)
/* 0042CE7C 8C580004 */  lw    $t8, 4($v0)
/* 0042CE80 8C4F0008 */  lw    $t7, 8($v0)
/* 0042CE84 35CA0001 */  ori   $t2, $t6, 1
/* 0042CE88 AC4A0000 */  sw    $t2, ($v0)
/* 0042CE8C AC580004 */  sw    $t8, 4($v0)
/* 0042CE90 AC4F0008 */  sw    $t7, 8($v0)
/* 0042CE94 93390000 */  lbu   $t9, ($t9)
/* 0042CE98 17201806 */  bnez  $t9, .L00432EB4
/* 0042CE9C 00000000 */   nop   
/* 0042CEA0 8F8D89F4 */  lw     $t5, %got(framesz_relocatable)($gp)
/* 0042CEA4 91AD0000 */  lbu   $t5, ($t5)
/* 0042CEA8 11A00008 */  beqz  $t5, .L0042CECC
/* 0042CEAC 00000000 */   nop   
/* 0042CEB0 8F898AB8 */  lw     $t1, %got(max_arg_build)($gp)
/* 0042CEB4 8F818ABC */  lw     $at, %got(reloc_arg_build)($gp)
/* 0042CEB8 8D290000 */  lw    $t1, ($t1)
/* 0042CEBC AC290000 */  sw    $t1, ($at)
/* 0042CEC0 8F818AB8 */  lw     $at, %got(max_arg_build)($gp)
/* 0042CEC4 100017FB */  b     .L00432EB4
/* 0042CEC8 AC200000 */   sw    $zero, ($at)
.L0042CECC:
/* 0042CECC 8F8C8A64 */  lw     $t4, %got(frame_size)($gp)
/* 0042CED0 8F8B8AB8 */  lw     $t3, %got(max_arg_build)($gp)
/* 0042CED4 8F818A64 */  lw     $at, %got(frame_size)($gp)
/* 0042CED8 8D8C0000 */  lw    $t4, ($t4)
/* 0042CEDC 8D6B0000 */  lw    $t3, ($t3)
/* 0042CEE0 018B4021 */  addu  $t0, $t4, $t3
/* 0042CEE4 100017F3 */  b     .L00432EB4
/* 0042CEE8 AC280000 */   sw    $t0, ($at)
.L0042CEEC:
/* 0042CEEC 8ECE0028 */  lw    $t6, 0x28($s6)
/* 0042CEF0 8F998AA8 */  lw     $t9, %got(generate_again)($gp)
/* 0042CEF4 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042CEF8 25CA0007 */  addiu $t2, $t6, 7
/* 0042CEFC 05410003 */  bgez  $t2, .L0042CF0C
/* 0042CF00 000AC0C3 */   sra   $t8, $t2, 3
/* 0042CF04 25410007 */  addiu $at, $t2, 7
/* 0042CF08 0001C0C3 */  sra   $t8, $at, 3
.L0042CF0C:
/* 0042CF0C 93390000 */  lbu   $t9, ($t9)
/* 0042CF10 8F818AA0 */  lw     $at, %got(local_var_size)($gp)
/* 0042CF14 001878C0 */  sll   $t7, $t8, 3
/* 0042CF18 90840000 */  lbu   $a0, ($a0)
/* 0042CF1C 172017E5 */  bnez  $t9, .L00432EB4
/* 0042CF20 AC2F0000 */   sw    $t7, ($at)
/* 0042CF24 8F8D8A64 */  lw     $t5, %got(frame_size)($gp)
/* 0042CF28 8F818A64 */  lw     $at, %got(frame_size)($gp)
/* 0042CF2C 8DAD0000 */  lw    $t5, ($t5)
/* 0042CF30 01AF4821 */  addu  $t1, $t5, $t7
/* 0042CF34 100017DF */  b     .L00432EB4
/* 0042CF38 AC290000 */   sw    $t1, ($at)
.L0042CF3C:
/* 0042CF3C 8F8C8038 */  lw    $t4, %got(RO_1000ACCA)($gp)
/* 0042CF40 24040004 */  li    $a0, 4
/* 0042CF44 24050F66 */  li    $a1, 3942
/* 0042CF48 258CACCA */  addiu $t4, %lo(RO_1000ACCA) # addiu $t4, $t4, -0x5336
/* 0042CF4C 258A0048 */  addiu $t2, $t4, 0x48
/* 0042CF50 03A07025 */  move  $t6, $sp
.L0042CF54:
/* 0042CF54 89880000 */  lwl   $t0, ($t4)
/* 0042CF58 99880003 */  lwr   $t0, 3($t4)
/* 0042CF5C 258C000C */  addiu $t4, $t4, 0xc
/* 0042CF60 25CE000C */  addiu $t6, $t6, 0xc
/* 0042CF64 A9C8FFFC */  swl   $t0, -4($t6)
/* 0042CF68 B9C8FFFF */  swr   $t0, -1($t6)
/* 0042CF6C 898BFFF8 */  lwl   $t3, -8($t4)
/* 0042CF70 998BFFFB */  lwr   $t3, -5($t4)
/* 0042CF74 A9CB0000 */  swl   $t3, ($t6)
/* 0042CF78 B9CB0003 */  swr   $t3, 3($t6)
/* 0042CF7C 8988FFFC */  lwl   $t0, -4($t4)
/* 0042CF80 9988FFFF */  lwr   $t0, -1($t4)
/* 0042CF84 A9C80004 */  swl   $t0, 4($t6)
/* 0042CF88 158AFFF2 */  bne   $t4, $t2, .L0042CF54
/* 0042CF8C B9C80007 */   swr   $t0, 7($t6)
/* 0042CF90 89880000 */  lwl   $t0, ($t4)
/* 0042CF94 99880003 */  lwr   $t0, 3($t4)
/* 0042CF98 8F988038 */  lw    $t8, %got(RO_1000AC7A)($gp)
/* 0042CF9C 03A07825 */  move  $t7, $sp
/* 0042CFA0 A9C80008 */  swl   $t0, 8($t6)
/* 0042CFA4 B9C8000B */  swr   $t0, 0xb($t6)
/* 0042CFA8 898B0004 */  lwl   $t3, 4($t4)
/* 0042CFAC 998B0007 */  lwr   $t3, 7($t4)
/* 0042CFB0 2718AC7A */  addiu $t8, %lo(RO_1000AC7A) # addiu $t8, $t8, -0x5386
/* 0042CFB4 27090048 */  addiu $t1, $t8, 0x48
/* 0042CFB8 A9CB000C */  swl   $t3, 0xc($t6)
/* 0042CFBC B9CB000F */  swr   $t3, 0xf($t6)
.L0042CFC0:
/* 0042CFC0 8B0D0000 */  lwl   $t5, ($t8)
/* 0042CFC4 9B0D0003 */  lwr   $t5, 3($t8)
/* 0042CFC8 2718000C */  addiu $t8, $t8, 0xc
/* 0042CFCC 25EF000C */  addiu $t7, $t7, 0xc
/* 0042CFD0 A9ED004C */  swl   $t5, 0x4c($t7)
/* 0042CFD4 B9ED004F */  swr   $t5, 0x4f($t7)
/* 0042CFD8 8B19FFF8 */  lwl   $t9, -8($t8)
/* 0042CFDC 9B19FFFB */  lwr   $t9, -5($t8)
/* 0042CFE0 A9F90050 */  swl   $t9, 0x50($t7)
/* 0042CFE4 B9F90053 */  swr   $t9, 0x53($t7)
/* 0042CFE8 8B0DFFFC */  lwl   $t5, -4($t8)
/* 0042CFEC 9B0DFFFF */  lwr   $t5, -1($t8)
/* 0042CFF0 A9ED0054 */  swl   $t5, 0x54($t7)
/* 0042CFF4 1709FFF2 */  bne   $t8, $t1, .L0042CFC0
/* 0042CFF8 B9ED0057 */   swr   $t5, 0x57($t7)
/* 0042CFFC 8B0D0000 */  lwl   $t5, ($t8)
/* 0042D000 9B0D0003 */  lwr   $t5, 3($t8)
/* 0042D004 A9ED0058 */  swl   $t5, 0x58($t7)
/* 0042D008 B9ED005B */  swr   $t5, 0x5b($t7)
/* 0042D00C 8B190004 */  lwl   $t9, 4($t8)
/* 0042D010 9B190007 */  lwr   $t9, 7($t8)
/* 0042D014 A9F9005C */  swl   $t9, 0x5c($t7)
/* 0042D018 B9F9005F */  swr   $t9, 0x5f($t7)
/* 0042D01C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0042D020 8FA7000C */  lw    $a3, 0xc($sp)
/* 0042D024 8FA60008 */  lw    $a2, 8($sp)
/* 0042D028 0320F809 */  jalr  $t9
/* 0042D02C 00000000 */   nop   
/* 0042D030 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D034 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042D038 1000179E */  b     .L00432EB4
/* 0042D03C 90840000 */   lbu   $a0, ($a0)
.L0042D040:
/* 0042D040 8F9983A8 */  lw    $t9, %call16(gen_regs)($gp)
/* 0042D044 02C02025 */  move  $a0, $s6
/* 0042D048 0320F809 */  jalr  $t9
/* 0042D04C 00000000 */   nop   
/* 0042D050 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D054 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042D058 10001796 */  b     .L00432EB4
/* 0042D05C 90840000 */   lbu   $a0, ($a0)
.L0042D060:
/* 0042D060 8F9981B4 */  lw    $t9, %call16(get_domtag)($gp)
/* 0042D064 0320F809 */  jalr  $t9
/* 0042D068 00000000 */   nop   
/* 0042D06C 10400008 */  beqz  $v0, .L0042D090
/* 0042D070 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042D074 8F998244 */  lw    $t9, %call16(emit_dir2)($gp)
/* 0042D078 24040032 */  li    $a0, 50
/* 0042D07C 00002825 */  move  $a1, $zero
/* 0042D080 8EC60034 */  lw    $a2, 0x34($s6)
/* 0042D084 0320F809 */  jalr  $t9
/* 0042D088 24070009 */   li    $a3, 9
/* 0042D08C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042D090:
/* 0042D090 8ECA0030 */  lw    $t2, 0x30($s6)
/* 0042D094 2401FFFF */  li    $at, -1
/* 0042D098 11410029 */  beq   $t2, $at, .L0042D140
/* 0042D09C 00000000 */   nop   
/* 0042D0A0 92CC001A */  lbu   $t4, 0x1a($s6)
/* 0042D0A4 11800026 */  beqz  $t4, .L0042D140
/* 0042D0A8 00000000 */   nop   
/* 0042D0AC 8F998398 */  lw    $t9, %call16(save_vreg)($gp)
/* 0042D0B0 02C02025 */  move  $a0, $s6
/* 0042D0B4 0320F809 */  jalr  $t9
/* 0042D0B8 00000000 */   nop   
/* 0042D0BC 92CE0021 */  lbu   $t6, 0x21($s6)
/* 0042D0C0 24010002 */  li    $at, 2
/* 0042D0C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D0C8 000E5E00 */  sll   $t3, $t6, 0x18
/* 0042D0CC 000B4742 */  srl   $t0, $t3, 0x1d
/* 0042D0D0 15010006 */  bne   $t0, $at, .L0042D0EC
/* 0042D0D4 00000000 */   nop   
/* 0042D0D8 8F9983A0 */  lw    $t9, %call16(load_parm_vreg)($gp)
/* 0042D0DC 02C02025 */  move  $a0, $s6
/* 0042D0E0 0320F809 */  jalr  $t9
/* 0042D0E4 00000000 */   nop   
/* 0042D0E8 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042D0EC:
/* 0042D0EC 8F828A44 */  lw     $v0, %got(glevel)($gp)
/* 0042D0F0 24010003 */  li    $at, 3
/* 0042D0F4 90420000 */  lbu   $v0, ($v0)
/* 0042D0F8 10400011 */  beqz  $v0, .L0042D140
/* 0042D0FC 00000000 */   nop   
/* 0042D100 1041000F */  beq   $v0, $at, .L0042D140
/* 0042D104 00000000 */   nop   
/* 0042D108 96C90022 */  lhu   $t1, 0x22($s6)
/* 0042D10C 1520000C */  bnez  $t1, .L0042D140
/* 0042D110 00000000 */   nop   
/* 0042D114 8ED30030 */  lw    $s3, 0x30($s6)
/* 0042D118 8F9982AC */  lw    $t9, %call16(emit_vreg)($gp)
/* 0042D11C 8EC5002C */  lw    $a1, 0x2c($s6)
/* 0042D120 06610002 */  bgez  $s3, .L0042D12C
/* 0042D124 02600821 */   move  $at, $s3
/* 0042D128 26610003 */  addiu $at, $s3, 3
.L0042D12C:
/* 0042D12C 00019883 */  sra   $s3, $at, 2
/* 0042D130 326400FF */  andi  $a0, $s3, 0xff
/* 0042D134 0320F809 */  jalr  $t9
/* 0042D138 8EC60024 */   lw    $a2, 0x24($s6)
/* 0042D13C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042D140:
/* 0042D140 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042D144 1000175B */  b     .L00432EB4
/* 0042D148 90840000 */   lbu   $a0, ($a0)
.L0042D14C:
/* 0042D14C 8F998530 */  lw    $t9, %call16(check_no_used)($gp)
/* 0042D150 0320F809 */  jalr  $t9
/* 0042D154 00000000 */   nop   
/* 0042D158 96D80022 */  lhu   $t8, 0x22($s6)
/* 0042D15C 24010001 */  li    $at, 1
/* 0042D160 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D164 53010007 */  beql  $t8, $at, .L0042D184
/* 0042D168 8ED10028 */   lw    $s1, 0x28($s6)
/* 0042D16C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042D170 8EC40024 */  lw    $a0, 0x24($s6)
/* 0042D174 0320F809 */  jalr  $t9
/* 0042D178 00000000 */   nop   
/* 0042D17C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D180 8ED10028 */  lw    $s1, 0x28($s6)
.L0042D184:
/* 0042D184 52200016 */  beql  $s1, $zero, .L0042D1E0
/* 0042D188 96CA0022 */   lhu   $t2, 0x22($s6)
/* 0042D18C 8F8F8A54 */  lw     $t7, %got(has_cia_in_file)($gp)
/* 0042D190 91EF0000 */  lbu   $t7, ($t7)
/* 0042D194 11E0000B */  beqz  $t7, .L0042D1C4
/* 0042D198 00000000 */   nop   
/* 0042D19C 96D90022 */  lhu   $t9, 0x22($s6)
/* 0042D1A0 332D0002 */  andi  $t5, $t9, 2
/* 0042D1A4 11A00007 */  beqz  $t5, .L0042D1C4
/* 0042D1A8 00000000 */   nop   
/* 0042D1AC 8F99829C */  lw    $t9, %call16(define_exception_label)($gp)
/* 0042D1B0 02202025 */  move  $a0, $s1
/* 0042D1B4 0320F809 */  jalr  $t9
/* 0042D1B8 00000000 */   nop   
/* 0042D1BC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D1C0 8ED10028 */  lw    $s1, 0x28($s6)
.L0042D1C4:
/* 0042D1C4 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042D1C8 24040024 */  li    $a0, 36
/* 0042D1CC 02202825 */  move  $a1, $s1
/* 0042D1D0 0320F809 */  jalr  $t9
/* 0042D1D4 00000000 */   nop   
/* 0042D1D8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D1DC 96CA0022 */  lhu   $t2, 0x22($s6)
.L0042D1E0:
/* 0042D1E0 314C0001 */  andi  $t4, $t2, 1
/* 0042D1E4 1180001D */  beqz  $t4, .L0042D25C
/* 0042D1E8 00000000 */   nop   
/* 0042D1EC 8F8E89E4 */  lw     $t6, %got(pic_level)($gp)
/* 0042D1F0 2404002A */  li    $a0, 42
/* 0042D1F4 2405001C */  li    $a1, 28
/* 0042D1F8 8DCE0000 */  lw    $t6, ($t6)
/* 0042D1FC 19C00017 */  blez  $t6, .L0042D25C
/* 0042D200 00000000 */   nop   
/* 0042D204 8F818A90 */  lw     $at, %got(uses_gp)($gp)
/* 0042D208 8F838A98 */  lw     $v1, %got(num_i_ptr_indexes)($gp)
/* 0042D20C 240B0001 */  li    $t3, 1
/* 0042D210 A02B0000 */  sb    $t3, ($at)
/* 0042D214 8C680000 */  lw    $t0, ($v1)
/* 0042D218 24180015 */  li    $t8, 21
/* 0042D21C 25020001 */  addiu $v0, $t0, 1
/* 0042D220 005802B1 */  tgeu  $v0, $t8, 0xa
/* 0042D224 AC620000 */  sw    $v0, ($v1)
/* 0042D228 8F8F897C */  lw     $t7, %got(i_ptr)($gp)
/* 0042D22C 8F8D8BB8 */  lw     $t5, %got(i_ptrs_for_gp_offset)($gp)
/* 0042D230 0002C880 */  sll   $t9, $v0, 2
/* 0042D234 8DEF0000 */  lw    $t7, ($t7)
/* 0042D238 25ADFFFC */  addiu $t5, $t5, -4
/* 0042D23C 032D5021 */  addu  $t2, $t9, $t5
/* 0042D240 AD4F0000 */  sw    $t7, ($t2)
/* 0042D244 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042D248 AFA00010 */  sw    $zero, 0x10($sp)
/* 0042D24C 00003025 */  move  $a2, $zero
/* 0042D250 0320F809 */  jalr  $t9
/* 0042D254 2407001D */   li    $a3, 29
/* 0042D258 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042D25C:
/* 0042D25C 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042D260 10001714 */  b     .L00432EB4
/* 0042D264 90840000 */   lbu   $a0, ($a0)
.L0042D268:
/* 0042D268 8F998384 */  lw    $t9, %call16(ureg)($gp)
/* 0042D26C 26C40020 */  addiu $a0, $s6, 0x20
/* 0042D270 0320F809 */  jalr  $t9
/* 0042D274 00000000 */   nop   
/* 0042D278 304C00FF */  andi  $t4, $v0, 0xff
/* 0042D27C 24010048 */  li    $at, 72
/* 0042D280 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D284 1181008D */  beq   $t4, $at, .L0042D4BC
/* 0042D288 305E00FF */   andi  $fp, $v0, 0xff
/* 0042D28C 8F998308 */  lw    $t9, %call16(is_end_return)($gp)
/* 0042D290 8EC40008 */  lw    $a0, 8($s6)
/* 0042D294 0320F809 */  jalr  $t9
/* 0042D298 00000000 */   nop   
/* 0042D29C 1040000C */  beqz  $v0, .L0042D2D0
/* 0042D2A0 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042D2A4 93AE0127 */  lbu   $t6, 0x127($sp)
/* 0042D2A8 3C010501 */  lui   $at, 0x501
/* 0042D2AC 2DCB0020 */  sltiu $t3, $t6, 0x20
/* 0042D2B0 000B4023 */  negu  $t0, $t3
/* 0042D2B4 01014824 */  and   $t1, $t0, $at
/* 0042D2B8 01C9C004 */  sllv  $t8, $t1, $t6
/* 0042D2BC 07010004 */  bgez  $t8, .L0042D2D0
/* 0042D2C0 00000000 */   nop   
/* 0042D2C4 8F818878 */  lw     $at, %got(setting_int64_return)($gp)
/* 0042D2C8 24190001 */  li    $t9, 1
/* 0042D2CC A0390000 */  sb    $t9, ($at)
.L0042D2D0:
/* 0042D2D0 8F8D89D8 */  lw     $t5, %got(opcode_arch)($gp)
/* 0042D2D4 24010001 */  li    $at, 1
/* 0042D2D8 91AD0000 */  lbu   $t5, ($t5)
/* 0042D2DC 15A10026 */  bne   $t5, $at, .L0042D378
/* 0042D2E0 00000000 */   nop   
/* 0042D2E4 8F8F89DC */  lw     $t7, %got(basicint)($gp)
/* 0042D2E8 91EF0000 */  lbu   $t7, ($t7)
/* 0042D2EC 15E00022 */  bnez  $t7, .L0042D378
/* 0042D2F0 00000000 */   nop   
/* 0042D2F4 8F8A8878 */  lw     $t2, %got(setting_int64_return)($gp)
/* 0042D2F8 24010002 */  li    $at, 2
/* 0042D2FC 914A0000 */  lbu   $t2, ($t2)
/* 0042D300 1140001D */  beqz  $t2, .L0042D378
/* 0042D304 00000000 */   nop   
/* 0042D308 17C1001B */  bne   $fp, $at, .L0042D378
/* 0042D30C 00000000 */   nop   
/* 0042D310 8ECC0000 */  lw    $t4, ($s6)
/* 0042D314 24010049 */  li    $at, 73
/* 0042D318 91840020 */  lbu   $a0, 0x20($t4)
/* 0042D31C 54810014 */  bnel  $a0, $at, .L0042D370
/* 0042D320 24010052 */   li    $at, 82
.L0042D324:
/* 0042D324 8F898BCC */  lw     $t1, %got(regs)($gp)
/* 0042D328 001E4080 */  sll   $t0, $fp, 2
/* 0042D32C 011E4023 */  subu  $t0, $t0, $fp
/* 0042D330 00084080 */  sll   $t0, $t0, 2
/* 0042D334 27CB0001 */  addiu $t3, $fp, 1
/* 0042D338 01097021 */  addu  $t6, $t0, $t1
/* 0042D33C 1000000E */  b     .L0042D378
/* 0042D340 A1CB0009 */   sb    $t3, 9($t6)
.L0042D344:
/* 0042D344 8F8D8BCC */  lw     $t5, %got(regs)($gp)
/* 0042D348 001EC880 */  sll   $t9, $fp, 2
/* 0042D34C 033EC823 */  subu  $t9, $t9, $fp
/* 0042D350 0019C880 */  sll   $t9, $t9, 2
/* 0042D354 032D7821 */  addu  $t7, $t9, $t5
/* 0042D358 10000007 */  b     .L0042D378
/* 0042D35C A1F80009 */   sb    $t8, 9($t7)
/* 0042D360 24010049 */  li    $at, 73
/* 0042D364 1081FFEF */  beq   $a0, $at, .L0042D324
/* 0042D368 00000000 */   nop   
/* 0042D36C 24010052 */  li    $at, 82
.L0042D370:
/* 0042D370 1081FFF4 */  beq   $a0, $at, .L0042D344
/* 0042D374 27D80001 */   addiu $t8, $fp, 1
.L0042D378:
/* 0042D378 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042D37C 8EC40000 */  lw    $a0, ($s6)
/* 0042D380 03C02825 */  move  $a1, $fp
/* 0042D384 0320F809 */  jalr  $t9
/* 0042D388 00000000 */   nop   
/* 0042D38C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D390 8EC40000 */  lw    $a0, ($s6)
/* 0042D394 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042D398 0320F809 */  jalr  $t9
/* 0042D39C 00000000 */   nop   
/* 0042D3A0 92C70021 */  lbu   $a3, 0x21($s6)
/* 0042D3A4 3C010501 */  lui   $at, 0x501
/* 0042D3A8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D3AC 30E7001F */  andi  $a3, $a3, 0x1f
/* 0042D3B0 2CEA0020 */  sltiu $t2, $a3, 0x20
/* 0042D3B4 000A6023 */  negu  $t4, $t2
/* 0042D3B8 01814024 */  and   $t0, $t4, $at
/* 0042D3BC 00E84804 */  sllv  $t1, $t0, $a3
/* 0042D3C0 05210035 */  bgez  $t1, .L0042D498
/* 0042D3C4 305200FF */   andi  $s2, $v0, 0xff
/* 0042D3C8 8F8B89DC */  lw     $t3, %got(basicint)($gp)
/* 0042D3CC 916B0000 */  lbu   $t3, ($t3)
/* 0042D3D0 15600031 */  bnez  $t3, .L0042D498
/* 0042D3D4 00000000 */   nop   
/* 0042D3D8 8F8E8870 */  lw     $t6, %got(processing_args)($gp)
/* 0042D3DC 2FD90020 */  sltiu $t9, $fp, 0x20
/* 0042D3E0 00196823 */  negu  $t5, $t9
/* 0042D3E4 91CE0000 */  lbu   $t6, ($t6)
/* 0042D3E8 3C010A00 */  lui   $at, 0xa00
/* 0042D3EC 01A1C024 */  and   $t8, $t5, $at
/* 0042D3F0 11C00003 */  beqz  $t6, .L0042D400
/* 0042D3F4 03D87804 */   sllv  $t7, $t8, $fp
/* 0042D3F8 05E00008 */  bltz  $t7, .L0042D41C
/* 0042D3FC 00000000 */   nop   
.L0042D400:
/* 0042D400 8F8A8878 */  lw     $t2, %got(setting_int64_return)($gp)
/* 0042D404 24010002 */  li    $at, 2
/* 0042D408 914A0000 */  lbu   $t2, ($t2)
/* 0042D40C 11400022 */  beqz  $t2, .L0042D498
/* 0042D410 00000000 */   nop   
/* 0042D414 17C10020 */  bne   $fp, $at, .L0042D498
/* 0042D418 00000000 */   nop   
.L0042D41C:
/* 0042D41C 8F8C89D8 */  lw     $t4, %got(opcode_arch)($gp)
/* 0042D420 304300FF */  andi  $v1, $v0, 0xff
/* 0042D424 918C0000 */  lbu   $t4, ($t4)
/* 0042D428 15800008 */  bnez  $t4, .L0042D44C
/* 0042D42C 00000000 */   nop   
/* 0042D430 8F998310 */  lw    $t9, %call16(move_two_regs)($gp)
/* 0042D434 03C02025 */  move  $a0, $fp
/* 0042D438 02402825 */  move  $a1, $s2
/* 0042D43C 0320F809 */  jalr  $t9
/* 0042D440 00000000 */   nop   
/* 0042D444 10000011 */  b     .L0042D48C
/* 0042D448 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042D44C:
/* 0042D44C 147E0009 */  bne   $v1, $fp, .L0042D474
/* 0042D450 00034880 */   sll   $t1, $v1, 2
/* 0042D454 8F8B8BCC */  lw     $t3, %got(regs)($gp)
/* 0042D458 01234823 */  subu  $t1, $t1, $v1
/* 0042D45C 00094880 */  sll   $t1, $t1, 2
/* 0042D460 012B7021 */  addu  $t6, $t1, $t3
/* 0042D464 91D90009 */  lbu   $t9, 9($t6)
/* 0042D468 24680001 */  addiu $t0, $v1, 1
/* 0042D46C 11190007 */  beq   $t0, $t9, .L0042D48C
/* 0042D470 00000000 */   nop   
.L0042D474:
/* 0042D474 8F99830C */  lw    $t9, %call16(move_dreg_to_regs)($gp)
/* 0042D478 03C02025 */  move  $a0, $fp
/* 0042D47C 02402825 */  move  $a1, $s2
/* 0042D480 0320F809 */  jalr  $t9
/* 0042D484 00000000 */   nop   
/* 0042D488 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042D48C:
/* 0042D48C 8F828878 */  lw     $v0, %got(setting_int64_return)($gp)
/* 0042D490 100000D6 */  b     .L0042D7EC
/* 0042D494 90420000 */   lbu   $v0, ($v0)
.L0042D498:
/* 0042D498 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 0042D49C 03C02025 */  move  $a0, $fp
/* 0042D4A0 02402825 */  move  $a1, $s2
/* 0042D4A4 0320F809 */  jalr  $t9
/* 0042D4A8 00E03025 */   move  $a2, $a3
/* 0042D4AC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D4B0 8F828878 */  lw     $v0, %got(setting_int64_return)($gp)
/* 0042D4B4 100000CD */  b     .L0042D7EC
/* 0042D4B8 90420000 */   lbu   $v0, ($v0)
.L0042D4BC:
/* 0042D4BC 8EC60000 */  lw    $a2, ($s6)
/* 0042D4C0 24010018 */  li    $at, 24
/* 0042D4C4 90CD0020 */  lbu   $t5, 0x20($a2)
/* 0042D4C8 15A1001D */  bne   $t5, $at, .L0042D540
/* 0042D4CC 00000000 */   nop   
/* 0042D4D0 90C20021 */  lbu   $v0, 0x21($a2)
/* 0042D4D4 24010006 */  li    $at, 6
/* 0042D4D8 3042001F */  andi  $v0, $v0, 0x1f
/* 0042D4DC 10410008 */  beq   $v0, $at, .L0042D500
/* 0042D4E0 24010005 */   li    $at, 5
/* 0042D4E4 14410016 */  bne   $v0, $at, .L0042D540
/* 0042D4E8 00000000 */   nop   
/* 0042D4EC 8F9889D8 */  lw     $t8, %got(opcode_arch)($gp)
/* 0042D4F0 24010001 */  li    $at, 1
/* 0042D4F4 93180000 */  lbu   $t8, ($t8)
/* 0042D4F8 17010011 */  bne   $t8, $at, .L0042D540
/* 0042D4FC 00000000 */   nop   
.L0042D500:
/* 0042D500 90CF0028 */  lbu   $t7, 0x28($a2)
/* 0042D504 2401000C */  li    $at, 12
/* 0042D508 15E1000D */  bne   $t7, $at, .L0042D540
/* 0042D50C 00000000 */   nop   
/* 0042D510 94CA0014 */  lhu   $t2, 0x14($a2)
/* 0042D514 24010001 */  li    $at, 1
/* 0042D518 15410009 */  bne   $t2, $at, .L0042D540
/* 0042D51C 00000000 */   nop   
/* 0042D520 8ECC0028 */  lw    $t4, 0x28($s6)
/* 0042D524 24010004 */  li    $at, 4
/* 0042D528 15810005 */  bne   $t4, $at, .L0042D540
/* 0042D52C 00000000 */   nop   
/* 0042D530 8CC90010 */  lw    $t1, 0x10($a2)
/* 0042D534 8F8188E0 */  lw     $at, %got(move_cvt_flag)($gp)
/* 0042D538 00095A02 */  srl   $t3, $t1, 8
/* 0042D53C AC2B0000 */  sw    $t3, ($at)
.L0042D540:
/* 0042D540 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042D544 00C02025 */  move  $a0, $a2
/* 0042D548 24050048 */  li    $a1, 72
/* 0042D54C 0320F809 */  jalr  $t9
/* 0042D550 00000000 */   nop   
/* 0042D554 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D558 8EC40000 */  lw    $a0, ($s6)
/* 0042D55C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042D560 0320F809 */  jalr  $t9
/* 0042D564 00000000 */   nop   
/* 0042D568 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D56C 305300FF */  andi  $s3, $v0, 0xff
/* 0042D570 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0042D574 91CE0000 */  lbu   $t6, ($t6)
/* 0042D578 55C00023 */  bnel  $t6, $zero, .L0042D608
/* 0042D57C 96D70022 */   lhu   $s7, 0x22($s6)
/* 0042D580 92C80021 */  lbu   $t0, 0x21($s6)
/* 0042D584 2401000E */  li    $at, 14
/* 0042D588 3119001F */  andi  $t9, $t0, 0x1f
/* 0042D58C 5721001E */  bnel  $t9, $at, .L0042D608
/* 0042D590 96D70022 */   lhu   $s7, 0x22($s6)
/* 0042D594 8ECD0028 */  lw    $t5, 0x28($s6)
/* 0042D598 29A10004 */  slti  $at, $t5, 4
/* 0042D59C 5020001A */  beql  $at, $zero, .L0042D608
/* 0042D5A0 96D70022 */   lhu   $s7, 0x22($s6)
/* 0042D5A4 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042D5A8 00002025 */  move  $a0, $zero
/* 0042D5AC 24050001 */  li    $a1, 1
/* 0042D5B0 0320F809 */  jalr  $t9
/* 0042D5B4 00000000 */   nop   
/* 0042D5B8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D5BC 8ED80028 */  lw    $t8, 0x28($s6)
/* 0042D5C0 240A0020 */  li    $t2, 32
/* 0042D5C4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042D5C8 001878C0 */  sll   $t7, $t8, 3
/* 0042D5CC A3A20186 */  sb    $v0, 0x186($sp)
/* 0042D5D0 014F3823 */  subu  $a3, $t2, $t7
/* 0042D5D4 24040054 */  li    $a0, 84
/* 0042D5D8 304500FF */  andi  $a1, $v0, 0xff
/* 0042D5DC 02603025 */  move  $a2, $s3
/* 0042D5E0 0320F809 */  jalr  $t9
/* 0042D5E4 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042D5E8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D5EC 93A40186 */  lbu   $a0, 0x186($sp)
/* 0042D5F0 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042D5F4 00809825 */  move  $s3, $a0
/* 0042D5F8 0320F809 */  jalr  $t9
/* 0042D5FC 00000000 */   nop   
/* 0042D600 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D604 96D70022 */  lhu   $s7, 0x22($s6)
.L0042D608:
/* 0042D608 32F70001 */  andi  $s7, $s7, 1
/* 0042D60C 0017B82B */  sltu  $s7, $zero, $s7
/* 0042D610 32F700FF */  andi  $s7, $s7, 0xff
/* 0042D614 52E00008 */  beql  $s7, $zero, .L0042D638
/* 0042D618 92D00021 */   lbu   $s0, 0x21($s6)
/* 0042D61C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042D620 24040020 */  li    $a0, 32
/* 0042D624 2405000B */  li    $a1, 11
/* 0042D628 0320F809 */  jalr  $t9
/* 0042D62C 00000000 */   nop   
/* 0042D630 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D634 92D00021 */  lbu   $s0, 0x21($s6)
.L0042D638:
/* 0042D638 24010002 */  li    $at, 2
/* 0042D63C 00104E00 */  sll   $t1, $s0, 0x18
/* 0042D640 00095F42 */  srl   $t3, $t1, 0x1d
/* 0042D644 55610039 */  bnel  $t3, $at, .L0042D72C
/* 0042D648 8EC60000 */   lw    $a2, ($s6)
/* 0042D64C 8ECE0024 */  lw    $t6, 0x24($s6)
/* 0042D650 3208001F */  andi  $t0, $s0, 0x1f
/* 0042D654 0008C840 */  sll   $t9, $t0, 1
/* 0042D658 55C00034 */  bnel  $t6, $zero, .L0042D72C
/* 0042D65C 8EC60000 */   lw    $a2, ($s6)
/* 0042D660 8EC60000 */  lw    $a2, ($s6)
/* 0042D664 8F8C88E0 */  lw     $t4, %got(move_cvt_flag)($gp)
/* 0042D668 8F8D88A0 */  lw     $t5, %got(store_op_tab)($gp)
/* 0042D66C 8CCA0010 */  lw    $t2, 0x10($a2)
/* 0042D670 8D8C0000 */  lw    $t4, ($t4)
/* 0042D674 032DC021 */  addu  $t8, $t9, $t5
/* 0042D678 000A7A02 */  srl   $t7, $t2, 8
/* 0042D67C 15EC0009 */  bne   $t7, $t4, .L0042D6A4
/* 0042D680 97150000 */   lhu   $s5, ($t8)
/* 0042D684 90C90021 */  lbu   $t1, 0x21($a2)
/* 0042D688 24010006 */  li    $at, 6
/* 0042D68C 24150073 */  li    $s5, 115
/* 0042D690 312B001F */  andi  $t3, $t1, 0x1f
/* 0042D694 15610003 */  bne   $t3, $at, .L0042D6A4
/* 0042D698 00000000 */   nop   
/* 0042D69C 10000001 */  b     .L0042D6A4
/* 0042D6A0 24150033 */   li    $s5, 51
.L0042D6A4:
/* 0042D6A4 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0042D6A8 2401006D */  li    $at, 109
/* 0042D6AC 02A02025 */  move  $a0, $s5
/* 0042D6B0 91CE0000 */  lbu   $t6, ($t6)
/* 0042D6B4 02602825 */  move  $a1, $s3
/* 0042D6B8 15C00014 */  bnez  $t6, .L0042D70C
/* 0042D6BC 00000000 */   nop   
/* 0042D6C0 16A10012 */  bne   $s5, $at, .L0042D70C
/* 0042D6C4 2407001D */   li    $a3, 29
/* 0042D6C8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042D6CC 24040057 */  li    $a0, 87
/* 0042D6D0 02602825 */  move  $a1, $s3
/* 0042D6D4 8EC6002C */  lw    $a2, 0x2c($s6)
/* 0042D6D8 0320F809 */  jalr  $t9
/* 0042D6DC AFA00010 */   sw    $zero, 0x10($sp)
/* 0042D6E0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D6E4 8EC6002C */  lw    $a2, 0x2c($s6)
/* 0042D6E8 24040057 */  li    $a0, 87
/* 0042D6EC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042D6F0 26650001 */  addiu $a1, $s3, 1
/* 0042D6F4 2407001D */  li    $a3, 29
/* 0042D6F8 AFA00010 */  sw    $zero, 0x10($sp)
/* 0042D6FC 0320F809 */  jalr  $t9
/* 0042D700 24C60004 */   addiu $a2, $a2, 4
/* 0042D704 1000002C */  b     .L0042D7B8
/* 0042D708 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042D70C:
/* 0042D70C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042D710 8EC6002C */  lw    $a2, 0x2c($s6)
/* 0042D714 2407001D */  li    $a3, 29
/* 0042D718 0320F809 */  jalr  $t9
/* 0042D71C AFA00010 */   sw    $zero, 0x10($sp)
/* 0042D720 10000025 */  b     .L0042D7B8
/* 0042D724 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042D728 8EC60000 */  lw    $a2, ($s6)
.L0042D72C:
/* 0042D72C 8F8D88E0 */  lw     $t5, %got(move_cvt_flag)($gp)
/* 0042D730 02C02825 */  move  $a1, $s6
/* 0042D734 8CC80010 */  lw    $t0, 0x10($a2)
/* 0042D738 8DAD0000 */  lw    $t5, ($t5)
/* 0042D73C 0008CA02 */  srl   $t9, $t0, 8
/* 0042D740 172D0010 */  bne   $t9, $t5, .L0042D784
/* 0042D744 00000000 */   nop   
/* 0042D748 90D80021 */  lbu   $t8, 0x21($a2)
/* 0042D74C 24010006 */  li    $at, 6
/* 0042D750 24150073 */  li    $s5, 115
/* 0042D754 330A001F */  andi  $t2, $t8, 0x1f
/* 0042D758 15410003 */  bne   $t2, $at, .L0042D768
/* 0042D75C 00000000 */   nop   
/* 0042D760 10000001 */  b     .L0042D768
/* 0042D764 24150033 */   li    $s5, 51
.L0042D768:
/* 0042D768 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 0042D76C 02A02025 */  move  $a0, $s5
/* 0042D770 02603025 */  move  $a2, $s3
/* 0042D774 0320F809 */  jalr  $t9
/* 0042D778 00003825 */   move  $a3, $zero
/* 0042D77C 1000000E */  b     .L0042D7B8
/* 0042D780 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042D784:
/* 0042D784 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 0042D788 8F8488A8 */  lw     $a0, %got(store_table)($gp)
/* 0042D78C 02C02825 */  move  $a1, $s6
/* 0042D790 0320F809 */  jalr  $t9
/* 0042D794 02603025 */   move  $a2, $s3
/* 0042D798 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D79C 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0042D7A0 02C02825 */  move  $a1, $s6
/* 0042D7A4 8F998370 */  lw    $t9, %call16(unaligned_loadstore)($gp)
/* 0042D7A8 02603025 */  move  $a2, $s3
/* 0042D7AC 0320F809 */  jalr  $t9
/* 0042D7B0 00000000 */   nop   
/* 0042D7B4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042D7B8:
/* 0042D7B8 12E00007 */  beqz  $s7, .L0042D7D8
/* 0042D7BC 00000000 */   nop   
/* 0042D7C0 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042D7C4 24040020 */  li    $a0, 32
/* 0042D7C8 2405000C */  li    $a1, 12
/* 0042D7CC 0320F809 */  jalr  $t9
/* 0042D7D0 00000000 */   nop   
/* 0042D7D4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042D7D8:
/* 0042D7D8 8F8188E0 */  lw     $at, %got(move_cvt_flag)($gp)
/* 0042D7DC 8F828878 */  lw     $v0, %got(setting_int64_return)($gp)
/* 0042D7E0 240FFFFF */  li    $t7, -1
/* 0042D7E4 AC2F0000 */  sw    $t7, ($at)
/* 0042D7E8 90420000 */  lbu   $v0, ($v0)
.L0042D7EC:
/* 0042D7EC 1040000B */  beqz  $v0, .L0042D81C
/* 0042D7F0 00000000 */   nop   
/* 0042D7F4 8F8C89D8 */  lw     $t4, %got(opcode_arch)($gp)
/* 0042D7F8 8F818878 */  lw     $at, %got(setting_int64_return)($gp)
/* 0042D7FC 918C0000 */  lbu   $t4, ($t4)
/* 0042D800 A0200000 */  sb    $zero, ($at)
/* 0042D804 24010001 */  li    $at, 1
/* 0042D808 15810004 */  bne   $t4, $at, .L0042D81C
/* 0042D80C 00000000 */   nop   
/* 0042D810 8F818BCC */  lw     $at, %got(regs)($gp)
/* 0042D814 24090048 */  li    $t1, 72
/* 0042D818 A0290021 */  sb    $t1, 0x21($at)
.L0042D81C:
/* 0042D81C 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042D820 100015A4 */  b     .L00432EB4
/* 0042D824 90840000 */   lbu   $a0, ($a0)
.L0042D828:
/* 0042D828 8F9983BC */  lw    $t9, %call16(clear_pmov_regs)($gp)
/* 0042D82C 8F818870 */  lw     $at, %got(processing_args)($gp)
/* 0042D830 240B0001 */  li    $t3, 1
/* 0042D834 AFA0013C */  sw    $zero, 0x13c($sp)
/* 0042D838 AFA00138 */  sw    $zero, 0x138($sp)
/* 0042D83C 0320F809 */  jalr  $t9
/* 0042D840 A02B0000 */   sb    $t3, ($at)
/* 0042D844 8ECE0024 */  lw    $t6, 0x24($s6)
/* 0042D848 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D84C 24040056 */  li    $a0, 86
/* 0042D850 11C00007 */  beqz  $t6, .L0042D870
/* 0042D854 2405001D */   li    $a1, 29
/* 0042D858 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042D85C 8F868AB8 */  lw     $a2, %got(max_arg_build)($gp)
/* 0042D860 00003825 */  move  $a3, $zero
/* 0042D864 0320F809 */  jalr  $t9
/* 0042D868 8CC60000 */   lw    $a2, ($a2)
/* 0042D86C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042D870:
/* 0042D870 8ED20008 */  lw    $s2, 8($s6)
/* 0042D874 24010017 */  li    $at, 23
/* 0042D878 92420020 */  lbu   $v0, 0x20($s2)
/* 0042D87C 1041004A */  beq   $v0, $at, .L0042D9A8
/* 0042D880 24010097 */   li    $at, 151
/* 0042D884 10410048 */  beq   $v0, $at, .L0042D9A8
/* 0042D888 2401002C */   li    $at, 44
/* 0042D88C 10410046 */  beq   $v0, $at, .L0042D9A8
/* 0042D890 24010010 */   li    $at, 16
/* 0042D894 10410044 */  beq   $v0, $at, .L0042D9A8
/* 0042D898 2401007B */   li    $at, 123
.L0042D89C:
/* 0042D89C 54410007 */  bnel  $v0, $at, .L0042D8BC
/* 0042D8A0 2401006F */   li    $at, 111
/* 0042D8A4 92480021 */  lbu   $t0, 0x21($s2)
/* 0042D8A8 24010003 */  li    $at, 3
/* 0042D8AC 0008CE00 */  sll   $t9, $t0, 0x18
/* 0042D8B0 00196F42 */  srl   $t5, $t9, 0x1d
/* 0042D8B4 11A10002 */  beq   $t5, $at, .L0042D8C0
/* 0042D8B8 2401006F */   li    $at, 111
.L0042D8BC:
/* 0042D8BC 1441002F */  bne   $v0, $at, .L0042D97C
.L0042D8C0:
/* 0042D8C0 2401007B */   li    $at, 123
/* 0042D8C4 14410008 */  bne   $v0, $at, .L0042D8E8
/* 0042D8C8 8FAB013C */   lw    $t3, 0x13c($sp)
/* 0042D8CC 8E53002C */  lw    $s3, 0x2c($s2)
/* 0042D8D0 06610002 */  bgez  $s3, .L0042D8DC
/* 0042D8D4 02600821 */   move  $at, $s3
/* 0042D8D8 26610003 */  addiu $at, $s3, 3
.L0042D8DC:
/* 0042D8DC 00019883 */  sra   $s3, $at, 2
/* 0042D8E0 10000007 */  b     .L0042D900
/* 0042D8E4 327300FF */   andi  $s3, $s3, 0xff
.L0042D8E8:
/* 0042D8E8 8E530030 */  lw    $s3, 0x30($s2)
/* 0042D8EC 06610002 */  bgez  $s3, .L0042D8F8
/* 0042D8F0 02600821 */   move  $at, $s3
/* 0042D8F4 26610003 */  addiu $at, $s3, 3
.L0042D8F8:
/* 0042D8F8 00019883 */  sra   $s3, $at, 2
/* 0042D8FC 327300FF */  andi  $s3, $s3, 0xff
.L0042D900:
/* 0042D900 2678FFE0 */  addiu $t8, $s3, -0x20
/* 0042D904 2F0A0020 */  sltiu $t2, $t8, 0x20
/* 0042D908 000A7823 */  negu  $t7, $t2
/* 0042D90C 030F6004 */  sllv  $t4, $t7, $t8
/* 0042D910 0581000F */  bgez  $t4, .L0042D950
/* 0042D914 3C098000 */   lui   $t1, 0x8000
/* 0042D918 8FA90138 */  lw    $t1, 0x138($sp)
/* 0042D91C 8E590028 */  lw    $t9, 0x28($s2)
/* 0042D920 3C0B8000 */  lui   $t3, 0x8000
/* 0042D924 026B7006 */  srlv  $t6, $t3, $s3
/* 0042D928 24010008 */  li    $at, 8
/* 0042D92C 012E4025 */  or    $t0, $t1, $t6
/* 0042D930 17210012 */  bne   $t9, $at, .L0042D97C
/* 0042D934 AFA80138 */   sw    $t0, 0x138($sp)
/* 0042D938 266A0001 */  addiu $t2, $s3, 1
/* 0042D93C 3C0F8000 */  lui   $t7, 0x8000
/* 0042D940 014FC006 */  srlv  $t8, $t7, $t2
/* 0042D944 01186025 */  or    $t4, $t0, $t8
/* 0042D948 1000000C */  b     .L0042D97C
/* 0042D94C AFAC0138 */   sw    $t4, 0x138($sp)
.L0042D950:
/* 0042D950 8E590028 */  lw    $t9, 0x28($s2)
/* 0042D954 02697006 */  srlv  $t6, $t1, $s3
/* 0042D958 016E4025 */  or    $t0, $t3, $t6
/* 0042D95C 24010008 */  li    $at, 8
/* 0042D960 17210006 */  bne   $t9, $at, .L0042D97C
/* 0042D964 AFA8013C */   sw    $t0, 0x13c($sp)
/* 0042D968 266A0001 */  addiu $t2, $s3, 1
/* 0042D96C 3C0D8000 */  lui   $t5, 0x8000
/* 0042D970 014DC006 */  srlv  $t8, $t5, $t2
/* 0042D974 01186025 */  or    $t4, $t0, $t8
/* 0042D978 AFAC013C */  sw    $t4, 0x13c($sp)
.L0042D97C:
/* 0042D97C 8E520008 */  lw    $s2, 8($s2)
/* 0042D980 24010017 */  li    $at, 23
/* 0042D984 92420020 */  lbu   $v0, 0x20($s2)
/* 0042D988 10410007 */  beq   $v0, $at, .L0042D9A8
/* 0042D98C 24010097 */   li    $at, 151
/* 0042D990 10410005 */  beq   $v0, $at, .L0042D9A8
/* 0042D994 2401002C */   li    $at, 44
/* 0042D998 10410003 */  beq   $v0, $at, .L0042D9A8
/* 0042D99C 24010010 */   li    $at, 16
/* 0042D9A0 5441FFBE */  bnel  $v0, $at, .L0042D89C
/* 0042D9A4 2401007B */   li    $at, 123
.L0042D9A8:
/* 0042D9A8 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042D9AC 10001541 */  b     .L00432EB4
/* 0042D9B0 90840000 */   lbu   $a0, ($a0)
.L0042D9B4:
/* 0042D9B4 8F99838C */  lw    $t9, %call16(eval_mov)($gp)
/* 0042D9B8 02C02025 */  move  $a0, $s6
/* 0042D9BC 0320F809 */  jalr  $t9
/* 0042D9C0 00000000 */   nop   
/* 0042D9C4 92C90020 */  lbu   $t1, 0x20($s6)
/* 0042D9C8 24010066 */  li    $at, 102
/* 0042D9CC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042D9D0 1521004D */  bne   $t1, $at, .L0042DB08
/* 0042D9D4 00000000 */   nop   
/* 0042D9D8 8F8E8A7C */  lw     $t6, %got(first_pmt_offset)($gp)
/* 0042D9DC 8ECB002C */  lw    $t3, 0x2c($s6)
/* 0042D9E0 8DCE0000 */  lw    $t6, ($t6)
/* 0042D9E4 016E1023 */  subu  $v0, $t3, $t6
/* 0042D9E8 04430003 */  bgezl $v0, .L0042D9F8
/* 0042D9EC 8EC80028 */   lw    $t0, 0x28($s6)
/* 0042D9F0 00021023 */  negu  $v0, $v0
/* 0042D9F4 8EC80028 */  lw    $t0, 0x28($s6)
.L0042D9F8:
/* 0042D9F8 00409025 */  move  $s2, $v0
/* 0042D9FC 0048C821 */  addu  $t9, $v0, $t0
/* 0042DA00 0059082A */  slt   $at, $v0, $t9
/* 0042DA04 10200040 */  beqz  $at, .L0042DB08
/* 0042DA08 00000000 */   nop   
.L0042DA0C:
/* 0042DA0C 06410003 */  bgez  $s2, .L0042DA1C
/* 0042DA10 00121083 */   sra   $v0, $s2, 2
/* 0042DA14 26410003 */  addiu $at, $s2, 3
/* 0042DA18 00011083 */  sra   $v0, $at, 2
.L0042DA1C:
/* 0042DA1C 24420004 */  addiu $v0, $v0, 4
/* 0042DA20 28410040 */  slti  $at, $v0, 0x40
/* 0042DA24 14200004 */  bnez  $at, .L0042DA38
/* 0042DA28 00000000 */   nop   
/* 0042DA2C 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042DA30 10001520 */  b     .L00432EB4
/* 0042DA34 90840000 */   lbu   $a0, ($a0)
.L0042DA38:
/* 0042DA38 8F99832C */  lw    $t9, %call16(is_parm_reg)($gp)
/* 0042DA3C 305000FF */  andi  $s0, $v0, 0xff
/* 0042DA40 02002025 */  move  $a0, $s0
/* 0042DA44 0320F809 */  jalr  $t9
/* 0042DA48 00000000 */   nop   
/* 0042DA4C 14400004 */  bnez  $v0, .L0042DA60
/* 0042DA50 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042DA54 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042DA58 10001516 */  b     .L00432EB4
/* 0042DA5C 90840000 */   lbu   $a0, ($a0)
.L0042DA60:
/* 0042DA60 8F9983C0 */  lw    $t9, %call16(save_pmov_reg)($gp)
/* 0042DA64 02002025 */  move  $a0, $s0
/* 0042DA68 0320F809 */  jalr  $t9
/* 0042DA6C 00000000 */   nop   
/* 0042DA70 260DFFE0 */  addiu $t5, $s0, -0x20
/* 0042DA74 2DAA0020 */  sltiu $t2, $t5, 0x20
/* 0042DA78 000A7823 */  negu  $t7, $t2
/* 0042DA7C 01AFC004 */  sllv  $t8, $t7, $t5
/* 0042DA80 0701000F */  bgez  $t8, .L0042DAC0
/* 0042DA84 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042DA88 8FAC0138 */  lw    $t4, 0x138($sp)
/* 0042DA8C 8ED10028 */  lw    $s1, 0x28($s6)
/* 0042DA90 3C098000 */  lui   $t1, 0x8000
/* 0042DA94 02095806 */  srlv  $t3, $t1, $s0
/* 0042DA98 24010008 */  li    $at, 8
/* 0042DA9C 018B7025 */  or    $t6, $t4, $t3
/* 0042DAA0 1621000D */  bne   $s1, $at, .L0042DAD8
/* 0042DAA4 AFAE0138 */   sw    $t6, 0x138($sp)
/* 0042DAA8 26190001 */  addiu $t9, $s0, 1
/* 0042DAAC 3C0A8000 */  lui   $t2, 0x8000
/* 0042DAB0 032A7806 */  srlv  $t7, $t2, $t9
/* 0042DAB4 01CF6825 */  or    $t5, $t6, $t7
/* 0042DAB8 10000007 */  b     .L0042DAD8
/* 0042DABC AFAD0138 */   sw    $t5, 0x138($sp)
.L0042DAC0:
/* 0042DAC0 8FB8013C */  lw    $t8, 0x13c($sp)
/* 0042DAC4 3C098000 */  lui   $t1, 0x8000
/* 0042DAC8 02096006 */  srlv  $t4, $t1, $s0
/* 0042DACC 030C5825 */  or    $t3, $t8, $t4
/* 0042DAD0 AFAB013C */  sw    $t3, 0x13c($sp)
/* 0042DAD4 8ED10028 */  lw    $s1, 0x28($s6)
.L0042DAD8:
/* 0042DAD8 8F8A8A7C */  lw     $t2, %got(first_pmt_offset)($gp)
/* 0042DADC 8ECE002C */  lw    $t6, 0x2c($s6)
/* 0042DAE0 26520004 */  addiu $s2, $s2, 4
/* 0042DAE4 8D4A0000 */  lw    $t2, ($t2)
/* 0042DAE8 01CAC823 */  subu  $t9, $t6, $t2
/* 0042DAEC 07210002 */  bgez  $t9, .L0042DAF8
/* 0042DAF0 03204025 */   move  $t0, $t9
/* 0042DAF4 00194023 */  negu  $t0, $t9
.L0042DAF8:
/* 0042DAF8 01117821 */  addu  $t7, $t0, $s1
/* 0042DAFC 024F082A */  slt   $at, $s2, $t7
/* 0042DB00 1420FFC2 */  bnez  $at, .L0042DA0C
/* 0042DB04 00000000 */   nop   
.L0042DB08:
/* 0042DB08 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042DB0C 100014E9 */  b     .L00432EB4
/* 0042DB10 90840000 */   lbu   $a0, ($a0)
.L0042DB14:
/* 0042DB14 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 0042DB18 02C02025 */  move  $a0, $s6
/* 0042DB1C 0320F809 */  jalr  $t9
/* 0042DB20 00000000 */   nop   
/* 0042DB24 304300FF */  andi  $v1, $v0, 0xff
/* 0042DB28 24010048 */  li    $at, 72
/* 0042DB2C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DB30 10610089 */  beq   $v1, $at, .L0042DD58
/* 0042DB34 305E00FF */   andi  $fp, $v0, 0xff
/* 0042DB38 8F8D89D8 */  lw     $t5, %got(opcode_arch)($gp)
/* 0042DB3C 24010001 */  li    $at, 1
/* 0042DB40 91AD0000 */  lbu   $t5, ($t5)
/* 0042DB44 15A1001F */  bne   $t5, $at, .L0042DBC4
/* 0042DB48 00000000 */   nop   
/* 0042DB4C 8F8989DC */  lw     $t1, %got(basicint)($gp)
/* 0042DB50 91290000 */  lbu   $t1, ($t1)
/* 0042DB54 1520001B */  bnez  $t1, .L0042DBC4
/* 0042DB58 00000000 */   nop   
/* 0042DB5C 8ED80000 */  lw    $t8, ($s6)
/* 0042DB60 24010049 */  li    $at, 73
/* 0042DB64 93040020 */  lbu   $a0, 0x20($t8)
/* 0042DB68 54810014 */  bnel  $a0, $at, .L0042DBBC
/* 0042DB6C 24010052 */   li    $at, 82
.L0042DB70:
/* 0042DB70 8F8E8BCC */  lw     $t6, %got(regs)($gp)
/* 0042DB74 00035880 */  sll   $t3, $v1, 2
/* 0042DB78 01635823 */  subu  $t3, $t3, $v1
/* 0042DB7C 000B5880 */  sll   $t3, $t3, 2
/* 0042DB80 246C0001 */  addiu $t4, $v1, 1
/* 0042DB84 016E5021 */  addu  $t2, $t3, $t6
/* 0042DB88 1000000E */  b     .L0042DBC4
/* 0042DB8C A14C0009 */   sb    $t4, 9($t2)
.L0042DB90:
/* 0042DB90 8F8F8BCC */  lw     $t7, %got(regs)($gp)
/* 0042DB94 00034080 */  sll   $t0, $v1, 2
/* 0042DB98 01034023 */  subu  $t0, $t0, $v1
/* 0042DB9C 00084080 */  sll   $t0, $t0, 2
/* 0042DBA0 010F6821 */  addu  $t5, $t0, $t7
/* 0042DBA4 10000007 */  b     .L0042DBC4
/* 0042DBA8 A1B90009 */   sb    $t9, 9($t5)
/* 0042DBAC 24010049 */  li    $at, 73
/* 0042DBB0 1081FFEF */  beq   $a0, $at, .L0042DB70
/* 0042DBB4 00000000 */   nop   
/* 0042DBB8 24010052 */  li    $at, 82
.L0042DBBC:
/* 0042DBBC 1081FFF4 */  beq   $a0, $at, .L0042DB90
/* 0042DBC0 24790001 */   addiu $t9, $v1, 1
.L0042DBC4:
/* 0042DBC4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042DBC8 8EC40000 */  lw    $a0, ($s6)
/* 0042DBCC 03C02825 */  move  $a1, $fp
/* 0042DBD0 0320F809 */  jalr  $t9
/* 0042DBD4 00000000 */   nop   
/* 0042DBD8 92C90021 */  lbu   $t1, 0x21($s6)
/* 0042DBDC 3C010501 */  lui   $at, 0x501
/* 0042DBE0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DBE4 3138001F */  andi  $t8, $t1, 0x1f
/* 0042DBE8 2F0B0020 */  sltiu $t3, $t8, 0x20
/* 0042DBEC 000B7023 */  negu  $t6, $t3
/* 0042DBF0 01C16024 */  and   $t4, $t6, $at
/* 0042DBF4 030C5004 */  sllv  $t2, $t4, $t8
/* 0042DBF8 05410028 */  bgez  $t2, .L0042DC9C
/* 0042DBFC 00000000 */   nop   
/* 0042DC00 8F8889DC */  lw     $t0, %got(basicint)($gp)
/* 0042DC04 91080000 */  lbu   $t0, ($t0)
/* 0042DC08 15000024 */  bnez  $t0, .L0042DC9C
/* 0042DC0C 00000000 */   nop   
/* 0042DC10 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042DC14 8EC40000 */  lw    $a0, ($s6)
/* 0042DC18 0320F809 */  jalr  $t9
/* 0042DC1C 00000000 */   nop   
/* 0042DC20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DC24 305200FF */  andi  $s2, $v0, 0xff
/* 0042DC28 304300FF */  andi  $v1, $v0, 0xff
/* 0042DC2C 8F8F89D8 */  lw     $t7, %got(opcode_arch)($gp)
/* 0042DC30 91EF0000 */  lbu   $t7, ($t7)
/* 0042DC34 15E00008 */  bnez  $t7, .L0042DC58
/* 0042DC38 00000000 */   nop   
/* 0042DC3C 8F998310 */  lw    $t9, %call16(move_two_regs)($gp)
/* 0042DC40 03C02025 */  move  $a0, $fp
/* 0042DC44 02402825 */  move  $a1, $s2
/* 0042DC48 0320F809 */  jalr  $t9
/* 0042DC4C 00000000 */   nop   
/* 0042DC50 1000001F */  b     .L0042DCD0
/* 0042DC54 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042DC58:
/* 0042DC58 147E0009 */  bne   $v1, $fp, .L0042DC80
/* 0042DC5C 00036880 */   sll   $t5, $v1, 2
/* 0042DC60 8F898BCC */  lw     $t1, %got(regs)($gp)
/* 0042DC64 01A36823 */  subu  $t5, $t5, $v1
/* 0042DC68 000D6880 */  sll   $t5, $t5, 2
/* 0042DC6C 01A95821 */  addu  $t3, $t5, $t1
/* 0042DC70 916E0009 */  lbu   $t6, 9($t3)
/* 0042DC74 24790001 */  addiu $t9, $v1, 1
/* 0042DC78 532E0016 */  beql  $t9, $t6, .L0042DCD4
/* 0042DC7C 27CCFFE0 */   addiu $t4, $fp, -0x20
.L0042DC80:
/* 0042DC80 8F99830C */  lw    $t9, %call16(move_dreg_to_regs)($gp)
/* 0042DC84 03C02025 */  move  $a0, $fp
/* 0042DC88 02402825 */  move  $a1, $s2
/* 0042DC8C 0320F809 */  jalr  $t9
/* 0042DC90 00000000 */   nop   
/* 0042DC94 1000000E */  b     .L0042DCD0
/* 0042DC98 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042DC9C:
/* 0042DC9C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042DCA0 8EC40000 */  lw    $a0, ($s6)
/* 0042DCA4 0320F809 */  jalr  $t9
/* 0042DCA8 00000000 */   nop   
/* 0042DCAC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DCB0 92C60021 */  lbu   $a2, 0x21($s6)
/* 0042DCB4 03C02025 */  move  $a0, $fp
/* 0042DCB8 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 0042DCBC 00402825 */  move  $a1, $v0
/* 0042DCC0 30C6001F */  andi  $a2, $a2, 0x1f
/* 0042DCC4 0320F809 */  jalr  $t9
/* 0042DCC8 00000000 */   nop   
/* 0042DCCC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042DCD0:
/* 0042DCD0 27CCFFE0 */  addiu $t4, $fp, -0x20
.L0042DCD4:
/* 0042DCD4 2D980020 */  sltiu $t8, $t4, 0x20
/* 0042DCD8 00185023 */  negu  $t2, $t8
/* 0042DCDC 018A4004 */  sllv  $t0, $t2, $t4
/* 0042DCE0 05010010 */  bgez  $t0, .L0042DD24
/* 0042DCE4 8FAD013C */   lw    $t5, 0x13c($sp)
/* 0042DCE8 8FAF0138 */  lw    $t7, 0x138($sp)
/* 0042DCEC 8ED90028 */  lw    $t9, 0x28($s6)
/* 0042DCF0 3C0D8000 */  lui   $t5, 0x8000
/* 0042DCF4 03CD4806 */  srlv  $t1, $t5, $fp
/* 0042DCF8 24010008 */  li    $at, 8
/* 0042DCFC 01E95825 */  or    $t3, $t7, $t1
/* 0042DD00 AFAB0138 */  sw    $t3, 0x138($sp)
/* 0042DD04 1721006A */  bne   $t9, $at, .L0042DEB0
/* 0042DD08 03C01025 */   move  $v0, $fp
/* 0042DD0C 24580001 */  addiu $t8, $v0, 1
/* 0042DD10 3C0A8000 */  lui   $t2, 0x8000
/* 0042DD14 030A6006 */  srlv  $t4, $t2, $t8
/* 0042DD18 016C4025 */  or    $t0, $t3, $t4
/* 0042DD1C 10000064 */  b     .L0042DEB0
/* 0042DD20 AFA80138 */   sw    $t0, 0x138($sp)
.L0042DD24:
/* 0042DD24 8ED90028 */  lw    $t9, 0x28($s6)
/* 0042DD28 3C0F8000 */  lui   $t7, 0x8000
/* 0042DD2C 03CF4806 */  srlv  $t1, $t7, $fp
/* 0042DD30 01A95825 */  or    $t3, $t5, $t1
/* 0042DD34 24010008 */  li    $at, 8
/* 0042DD38 1721005D */  bne   $t9, $at, .L0042DEB0
/* 0042DD3C AFAB013C */   sw    $t3, 0x13c($sp)
/* 0042DD40 27D80001 */  addiu $t8, $fp, 1
/* 0042DD44 3C0E8000 */  lui   $t6, 0x8000
/* 0042DD48 030E6006 */  srlv  $t4, $t6, $t8
/* 0042DD4C 016C4025 */  or    $t0, $t3, $t4
/* 0042DD50 10000057 */  b     .L0042DEB0
/* 0042DD54 AFA8013C */   sw    $t0, 0x13c($sp)
.L0042DD58:
/* 0042DD58 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042DD5C 8EC40000 */  lw    $a0, ($s6)
/* 0042DD60 24050048 */  li    $a1, 72
/* 0042DD64 0320F809 */  jalr  $t9
/* 0042DD68 00000000 */   nop   
/* 0042DD6C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DD70 8EC40000 */  lw    $a0, ($s6)
/* 0042DD74 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042DD78 0320F809 */  jalr  $t9
/* 0042DD7C 00000000 */   nop   
/* 0042DD80 304F00FF */  andi  $t7, $v0, 0xff
/* 0042DD84 25EDFFE0 */  addiu $t5, $t7, -0x20
/* 0042DD88 2DA90020 */  sltiu $t1, $t5, 0x20
/* 0042DD8C 00095823 */  negu  $t3, $t1
/* 0042DD90 01ABC804 */  sllv  $t9, $t3, $t5
/* 0042DD94 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DD98 0721000D */  bgez  $t9, .L0042DDD0
/* 0042DD9C 305300FF */   andi  $s3, $v0, 0xff
/* 0042DDA0 8ECE0028 */  lw    $t6, 0x28($s6)
/* 0042DDA4 8F9588A8 */  lw     $s5, %got(store_table)($gp)
/* 0042DDA8 29C10005 */  slti  $at, $t6, 5
/* 0042DDAC 1420001C */  bnez  $at, .L0042DE20
/* 0042DDB0 96B5000E */   lhu   $s5, 0xe($s5)
/* 0042DDB4 92D80021 */  lbu   $t8, 0x21($s6)
/* 0042DDB8 240C000C */  li    $t4, 12
/* 0042DDBC 330A001F */  andi  $t2, $t8, 0x1f
/* 0042DDC0 014C02B6 */  tne   $t2, $t4, 0xa
/* 0042DDC4 8F9588A8 */  lw     $s5, %got(store_table)($gp)
/* 0042DDC8 10000015 */  b     .L0042DE20
/* 0042DDCC 96B50010 */   lhu   $s5, 0x10($s5)
.L0042DDD0:
/* 0042DDD0 8EC80028 */  lw    $t0, 0x28($s6)
/* 0042DDD4 8F9588A8 */  lw     $s5, %got(store_table)($gp)
/* 0042DDD8 29010005 */  slti  $at, $t0, 5
/* 0042DDDC 14200010 */  bnez  $at, .L0042DE20
/* 0042DDE0 96B50008 */   lhu   $s5, 8($s5)
/* 0042DDE4 92C70021 */  lbu   $a3, 0x21($s6)
/* 0042DDE8 3C010501 */  lui   $at, 0x501
/* 0042DDEC 30E7001F */  andi  $a3, $a3, 0x1f
/* 0042DDF0 2CEF0020 */  sltiu $t7, $a3, 0x20
/* 0042DDF4 000F4823 */  negu  $t1, $t7
/* 0042DDF8 01215824 */  and   $t3, $t1, $at
/* 0042DDFC 00EB1004 */  sllv  $v0, $t3, $a3
/* 0042DE00 28420000 */  slti  $v0, $v0, 0
/* 0042DE04 54400004 */  bnel  $v0, $zero, .L0042DE18
/* 0042DE08 004002B4 */   teq   $v0, $zero, 0xa
/* 0042DE0C 38E2000C */  xori  $v0, $a3, 0xc
/* 0042DE10 2C420001 */  sltiu $v0, $v0, 1
/* 0042DE14 004002B4 */  teq   $v0, $zero, 0xa
.L0042DE18:
/* 0042DE18 8F9588A8 */  lw     $s5, %got(store_table)($gp)
/* 0042DE1C 96B5000C */  lhu   $s5, 0xc($s5)
.L0042DE20:
/* 0042DE20 8F8D89D8 */  lw     $t5, %got(opcode_arch)($gp)
/* 0042DE24 2401006D */  li    $at, 109
/* 0042DE28 02A02025 */  move  $a0, $s5
/* 0042DE2C 91AD0000 */  lbu   $t5, ($t5)
/* 0042DE30 02602825 */  move  $a1, $s3
/* 0042DE34 15A00018 */  bnez  $t5, .L0042DE98
/* 0042DE38 00000000 */   nop   
/* 0042DE3C 16A10016 */  bne   $s5, $at, .L0042DE98
/* 0042DE40 0015C840 */   sll   $t9, $s5, 1
/* 0042DE44 8F8E88AC */  lw     $t6, %got(double_to_singles)($gp)
/* 0042DE48 02602825 */  move  $a1, $s3
/* 0042DE4C 8EC6002C */  lw    $a2, 0x2c($s6)
/* 0042DE50 032EC021 */  addu  $t8, $t9, $t6
/* 0042DE54 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042DE58 97150000 */  lhu   $s5, ($t8)
/* 0042DE5C AFA00010 */  sw    $zero, 0x10($sp)
/* 0042DE60 2407001D */  li    $a3, 29
/* 0042DE64 0320F809 */  jalr  $t9
/* 0042DE68 02A02025 */   move  $a0, $s5
/* 0042DE6C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DE70 8EC6002C */  lw    $a2, 0x2c($s6)
/* 0042DE74 02A02025 */  move  $a0, $s5
/* 0042DE78 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042DE7C 26650001 */  addiu $a1, $s3, 1
/* 0042DE80 2407001D */  li    $a3, 29
/* 0042DE84 AFA00010 */  sw    $zero, 0x10($sp)
/* 0042DE88 0320F809 */  jalr  $t9
/* 0042DE8C 24C60004 */   addiu $a2, $a2, 4
/* 0042DE90 10000007 */  b     .L0042DEB0
/* 0042DE94 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042DE98:
/* 0042DE98 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042DE9C 8EC6002C */  lw    $a2, 0x2c($s6)
/* 0042DEA0 2407001D */  li    $a3, 29
/* 0042DEA4 0320F809 */  jalr  $t9
/* 0042DEA8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042DEAC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042DEB0:
/* 0042DEB0 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042DEB4 100013FF */  b     .L00432EB4
/* 0042DEB8 90840000 */   lbu   $a0, ($a0)
.L0042DEBC:
/* 0042DEBC 8F8A8A48 */  lw     $t2, %got(olevel)($gp)
/* 0042DEC0 914A0000 */  lbu   $t2, ($t2)
/* 0042DEC4 2D410002 */  sltiu $at, $t2, 2
/* 0042DEC8 14200029 */  bnez  $at, .L0042DF70
/* 0042DECC 00000000 */   nop   
/* 0042DED0 92CC0021 */  lbu   $t4, 0x21($s6)
/* 0042DED4 3C010501 */  lui   $at, 0x501
/* 0042DED8 3188001F */  andi  $t0, $t4, 0x1f
/* 0042DEDC 2D0F0020 */  sltiu $t7, $t0, 0x20
/* 0042DEE0 000F4823 */  negu  $t1, $t7
/* 0042DEE4 01215824 */  and   $t3, $t1, $at
/* 0042DEE8 010B6804 */  sllv  $t5, $t3, $t0
/* 0042DEEC 05A10020 */  bgez  $t5, .L0042DF70
/* 0042DEF0 00000000 */   nop   
/* 0042DEF4 8F9989DC */  lw     $t9, %got(basicint)($gp)
/* 0042DEF8 93390000 */  lbu   $t9, ($t9)
/* 0042DEFC 1720001C */  bnez  $t9, .L0042DF70
/* 0042DF00 00000000 */   nop   
/* 0042DF04 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0042DF08 24010001 */  li    $at, 1
/* 0042DF0C 91CE0000 */  lbu   $t6, ($t6)
/* 0042DF10 15C10017 */  bne   $t6, $at, .L0042DF70
/* 0042DF14 00000000 */   nop   
/* 0042DF18 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 0042DF1C 02C02025 */  move  $a0, $s6
/* 0042DF20 0320F809 */  jalr  $t9
/* 0042DF24 00000000 */   nop   
/* 0042DF28 304300FF */  andi  $v1, $v0, 0xff
/* 0042DF2C 24010048 */  li    $at, 72
/* 0042DF30 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DF34 1061000E */  beq   $v1, $at, .L0042DF70
/* 0042DF38 305E00FF */   andi  $fp, $v0, 0xff
/* 0042DF3C 2C780020 */  sltiu $t8, $v1, 0x20
/* 0042DF40 00185023 */  negu  $t2, $t8
/* 0042DF44 3C010A00 */  lui   $at, 0xa00
/* 0042DF48 01416024 */  and   $t4, $t2, $at
/* 0042DF4C 006C7804 */  sllv  $t7, $t4, $v1
/* 0042DF50 05E10007 */  bgez  $t7, .L0042DF70
/* 0042DF54 00000000 */   nop   
/* 0042DF58 8F99830C */  lw    $t9, %call16(move_dreg_to_regs)($gp)
/* 0042DF5C 03C02025 */  move  $a0, $fp
/* 0042DF60 03C02825 */  move  $a1, $fp
/* 0042DF64 0320F809 */  jalr  $t9
/* 0042DF68 00000000 */   nop   
/* 0042DF6C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042DF70:
/* 0042DF70 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042DF74 100013CF */  b     .L00432EB4
/* 0042DF78 90840000 */   lbu   $a0, ($a0)
.L0042DF7C:
/* 0042DF7C 8F998530 */  lw    $t9, %call16(check_no_used)($gp)
/* 0042DF80 0320F809 */  jalr  $t9
/* 0042DF84 00000000 */   nop   
/* 0042DF88 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DF8C 8F9983C4 */  lw    $t9, %call16(load_pmov_regs)($gp)
/* 0042DF90 0320F809 */  jalr  $t9
/* 0042DF94 00000000 */   nop   
/* 0042DF98 8FA9013C */  lw    $t1, 0x13c($sp)
/* 0042DF9C 8ECD002C */  lw    $t5, 0x2c($s6)
/* 0042DFA0 8FA80138 */  lw    $t0, 0x138($sp)
/* 0042DFA4 352B000E */  ori   $t3, $t1, 0xe
/* 0042DFA8 31B90100 */  andi  $t9, $t5, 0x100
/* 0042DFAC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DFB0 AFAB013C */  sw    $t3, 0x13c($sp)
/* 0042DFB4 13200007 */  beqz  $t9, .L0042DFD4
/* 0042DFB8 AFA80138 */   sw    $t0, 0x138($sp)
/* 0042DFBC 3C015FFF */  lui   $at, 0x5fff
/* 0042DFC0 0161C025 */  or    $t8, $t3, $at
/* 0042DFC4 2401F000 */  li    $at, -4096
/* 0042DFC8 01015025 */  or    $t2, $t0, $at
/* 0042DFCC AFB8013C */  sw    $t8, 0x13c($sp)
/* 0042DFD0 AFAA0138 */  sw    $t2, 0x138($sp)
.L0042DFD4:
/* 0042DFD4 8F99824C */  lw    $t9, %call16(emit_regmask)($gp)
/* 0042DFD8 24040035 */  li    $a0, 53
/* 0042DFDC 8FA5013C */  lw    $a1, 0x13c($sp)
/* 0042DFE0 0320F809 */  jalr  $t9
/* 0042DFE4 8FA60138 */   lw    $a2, 0x138($sp)
/* 0042DFE8 92D00021 */  lbu   $s0, 0x21($s6)
/* 0042DFEC 24010005 */  li    $at, 5
/* 0042DFF0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042DFF4 00101600 */  sll   $v0, $s0, 0x18
/* 0042DFF8 00021742 */  srl   $v0, $v0, 0x1d
/* 0042DFFC 54410005 */  bnel  $v0, $at, .L0042E014
/* 0042E000 92CF0020 */   lbu   $t7, 0x20($s6)
/* 0042E004 8ECC0024 */  lw    $t4, 0x24($s6)
/* 0042E008 10000070 */  b     .L0042E1CC
/* 0042E00C AFAC0130 */   sw    $t4, 0x130($sp)
/* 0042E010 92CF0020 */  lbu   $t7, 0x20($s6)
.L0042E014:
/* 0042E014 24010097 */  li    $at, 151
/* 0042E018 15E10016 */  bne   $t7, $at, .L0042E074
/* 0042E01C 00000000 */   nop   
/* 0042E020 8EC9002C */  lw    $t1, 0x2c($s6)
/* 0042E024 00003025 */  move  $a2, $zero
/* 0042E028 24040023 */  li    $a0, 35
/* 0042E02C 312B0080 */  andi  $t3, $t1, 0x80
/* 0042E030 11600008 */  beqz  $t3, .L0042E054
/* 0042E034 00000000 */   nop   
/* 0042E038 8F998214 */  lw    $t9, %call16(emit_a)($gp)
/* 0042E03C 24040022 */  li    $a0, 34
/* 0042E040 8EC50024 */  lw    $a1, 0x24($s6)
/* 0042E044 0320F809 */  jalr  $t9
/* 0042E048 00003825 */   move  $a3, $zero
/* 0042E04C 10000007 */  b     .L0042E06C
/* 0042E050 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042E054:
/* 0042E054 8F998214 */  lw    $t9, %call16(emit_a)($gp)
/* 0042E058 8EC50024 */  lw    $a1, 0x24($s6)
/* 0042E05C 00003025 */  move  $a2, $zero
/* 0042E060 0320F809 */  jalr  $t9
/* 0042E064 24070006 */   li    $a3, 6
/* 0042E068 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042E06C:
/* 0042E06C 10000057 */  b     .L0042E1CC
/* 0042E070 92D00021 */   lbu   $s0, 0x21($s6)
.L0042E074:
/* 0042E074 8F8D89B0 */  lw     $t5, %got(no_jal_use_jalr_only)($gp)
/* 0042E078 02008825 */  move  $s1, $s0
/* 0042E07C 3219FF1F */  andi  $t9, $s0, 0xff1f
/* 0042E080 91AD0000 */  lbu   $t5, ($t5)
/* 0042E084 3231001F */  andi  $s1, $s1, 0x1f
/* 0042E088 305200FF */  andi  $s2, $v0, 0xff
/* 0042E08C 11A0003A */  beqz  $t5, .L0042E178
/* 0042E090 37380080 */   ori   $t8, $t9, 0x80
/* 0042E094 8F998354 */  lw    $t9, %call16(loadstore)($gp)
/* 0042E098 3308FFE0 */  andi  $t0, $t8, 0xffe0
/* 0042E09C A2D80021 */  sb    $t8, 0x21($s6)
/* 0042E0A0 350A0006 */  ori   $t2, $t0, 6
/* 0042E0A4 8ED3002C */  lw    $s3, 0x2c($s6)
/* 0042E0A8 8ED40030 */  lw    $s4, 0x30($s6)
/* 0042E0AC A2CA0021 */  sb    $t2, 0x21($s6)
/* 0042E0B0 AEC0002C */  sw    $zero, 0x2c($s6)
/* 0042E0B4 AEC00030 */  sw    $zero, 0x30($s6)
/* 0042E0B8 24040024 */  li    $a0, 36
/* 0042E0BC 02C02825 */  move  $a1, $s6
/* 0042E0C0 24060008 */  li    $a2, 8
/* 0042E0C4 0320F809 */  jalr  $t9
/* 0042E0C8 00003825 */   move  $a3, $zero
/* 0042E0CC 92D00021 */  lbu   $s0, 0x21($s6)
/* 0042E0D0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E0D4 AED3002C */  sw    $s3, 0x2c($s6)
/* 0042E0D8 001066C0 */  sll   $t4, $s0, 0x1b
/* 0042E0DC 000C7EC2 */  srl   $t7, $t4, 0x1b
/* 0042E0E0 022F4826 */  xor   $t1, $s1, $t7
/* 0042E0E4 312B001F */  andi  $t3, $t1, 0x1f
/* 0042E0E8 01706826 */  xor   $t5, $t3, $s0
/* 0042E0EC 000DCE00 */  sll   $t9, $t5, 0x18
/* 0042E0F0 00197742 */  srl   $t6, $t9, 0x1d
/* 0042E0F4 024EC026 */  xor   $t8, $s2, $t6
/* 0042E0F8 8F998530 */  lw    $t9, %call16(check_no_used)($gp)
/* 0042E0FC 00184740 */  sll   $t0, $t8, 0x1d
/* 0042E100 00085602 */  srl   $t2, $t0, 0x18
/* 0042E104 A2CD0021 */  sb    $t5, 0x21($s6)
/* 0042E108 014D6026 */  xor   $t4, $t2, $t5
/* 0042E10C AED40030 */  sw    $s4, 0x30($s6)
/* 0042E110 0320F809 */  jalr  $t9
/* 0042E114 A2CC0021 */   sb    $t4, 0x21($s6)
/* 0042E118 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E11C 8F9983C4 */  lw    $t9, %call16(load_pmov_regs)($gp)
/* 0042E120 0320F809 */  jalr  $t9
/* 0042E124 00000000 */   nop   
/* 0042E128 8ECF002C */  lw    $t7, 0x2c($s6)
/* 0042E12C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E130 31E90080 */  andi  $t1, $t7, 0x80
/* 0042E134 11200008 */  beqz  $t1, .L0042E158
/* 0042E138 00000000 */   nop   
/* 0042E13C 8F998218 */  lw    $t9, %call16(emit_r)($gp)
/* 0042E140 24040022 */  li    $a0, 34
/* 0042E144 24050008 */  li    $a1, 8
/* 0042E148 0320F809 */  jalr  $t9
/* 0042E14C 00000000 */   nop   
/* 0042E150 10000007 */  b     .L0042E170
/* 0042E154 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042E158:
/* 0042E158 8F998218 */  lw    $t9, %call16(emit_r)($gp)
/* 0042E15C 24040023 */  li    $a0, 35
/* 0042E160 24050008 */  li    $a1, 8
/* 0042E164 0320F809 */  jalr  $t9
/* 0042E168 00000000 */   nop   
/* 0042E16C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042E170:
/* 0042E170 10000016 */  b     .L0042E1CC
/* 0042E174 92D00021 */   lbu   $s0, 0x21($s6)
.L0042E178:
/* 0042E178 8ECB002C */  lw    $t3, 0x2c($s6)
/* 0042E17C 00003025 */  move  $a2, $zero
/* 0042E180 24040023 */  li    $a0, 35
/* 0042E184 316D0080 */  andi  $t5, $t3, 0x80
/* 0042E188 11A00009 */  beqz  $t5, .L0042E1B0
/* 0042E18C 00000000 */   nop   
/* 0042E190 8F998214 */  lw    $t9, %call16(emit_a)($gp)
/* 0042E194 24040022 */  li    $a0, 34
/* 0042E198 8EC50024 */  lw    $a1, 0x24($s6)
/* 0042E19C 0320F809 */  jalr  $t9
/* 0042E1A0 00003825 */   move  $a3, $zero
/* 0042E1A4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E1A8 10000008 */  b     .L0042E1CC
/* 0042E1AC 92D00021 */   lbu   $s0, 0x21($s6)
.L0042E1B0:
/* 0042E1B0 8F998214 */  lw    $t9, %call16(emit_a)($gp)
/* 0042E1B4 8EC50024 */  lw    $a1, 0x24($s6)
/* 0042E1B8 00003025 */  move  $a2, $zero
/* 0042E1BC 0320F809 */  jalr  $t9
/* 0042E1C0 00003825 */   move  $a3, $zero
/* 0042E1C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E1C8 92D00021 */  lbu   $s0, 0x21($s6)
.L0042E1CC:
/* 0042E1CC 8F9989D8 */  lw     $t9, %got(opcode_arch)($gp)
/* 0042E1D0 24010001 */  li    $at, 1
/* 0042E1D4 320E001F */  andi  $t6, $s0, 0x1f
/* 0042E1D8 93390000 */  lbu   $t9, ($t9)
/* 0042E1DC 17210005 */  bne   $t9, $at, .L0042E1F4
/* 0042E1E0 00000000 */   nop   
/* 0042E1E4 8F828BCC */  lw     $v0, %got(regs)($gp)
/* 0042E1E8 24030048 */  li    $v1, 72
/* 0042E1EC A0430039 */  sb    $v1, 0x39($v0)
/* 0042E1F0 A0430051 */  sb    $v1, 0x51($v0)
.L0042E1F4:
/* 0042E1F4 8F818870 */  lw     $at, %got(processing_args)($gp)
/* 0042E1F8 2DD80020 */  sltiu $t8, $t6, 0x20
/* 0042E1FC 00184023 */  negu  $t0, $t8
/* 0042E200 A0200000 */  sb    $zero, ($at)
/* 0042E204 3C010501 */  lui   $at, 0x501
/* 0042E208 01015024 */  and   $t2, $t0, $at
/* 0042E20C 01CA6004 */  sllv  $t4, $t2, $t6
/* 0042E210 05810004 */  bgez  $t4, .L0042E224
/* 0042E214 00000000 */   nop   
/* 0042E218 8F818874 */  lw     $at, %got(processing_int64_return)($gp)
/* 0042E21C 240F0001 */  li    $t7, 1
/* 0042E220 A02F0000 */  sb    $t7, ($at)
.L0042E224:
/* 0042E224 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042E228 10001322 */  b     .L00432EB4
/* 0042E22C 90840000 */   lbu   $a0, ($a0)
.L0042E230:
/* 0042E230 8F9989E4 */  lw     $t9, %got(pic_level)($gp)
/* 0042E234 8FA9013C */  lw    $t1, 0x13c($sp)
/* 0042E238 8FAD0138 */  lw    $t5, 0x138($sp)
/* 0042E23C 8F390000 */  lw    $t9, ($t9)
/* 0042E240 352B000E */  ori   $t3, $t1, 0xe
/* 0042E244 AFAB013C */  sw    $t3, 0x13c($sp)
/* 0042E248 1B200003 */  blez  $t9, .L0042E258
/* 0042E24C AFAD0138 */   sw    $t5, 0x138($sp)
/* 0042E250 35780040 */  ori   $t8, $t3, 0x40
/* 0042E254 AFB8013C */  sw    $t8, 0x13c($sp)
.L0042E258:
/* 0042E258 8F99824C */  lw    $t9, %call16(emit_regmask)($gp)
/* 0042E25C 24040035 */  li    $a0, 53
/* 0042E260 8FA5013C */  lw    $a1, 0x13c($sp)
/* 0042E264 0320F809 */  jalr  $t9
/* 0042E268 8FA60138 */   lw    $a2, 0x138($sp)
/* 0042E26C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E270 8EC40000 */  lw    $a0, ($s6)
/* 0042E274 24050019 */  li    $a1, 25
/* 0042E278 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042E27C 0320F809 */  jalr  $t9
/* 0042E280 00000000 */   nop   
/* 0042E284 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E288 8EC40000 */  lw    $a0, ($s6)
/* 0042E28C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042E290 0320F809 */  jalr  $t9
/* 0042E294 00000000 */   nop   
/* 0042E298 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E29C 305300FF */  andi  $s3, $v0, 0xff
/* 0042E2A0 304A00FF */  andi  $t2, $v0, 0xff
/* 0042E2A4 8F8889E4 */  lw     $t0, %got(pic_level)($gp)
/* 0042E2A8 24010019 */  li    $at, 25
/* 0042E2AC 8D080000 */  lw    $t0, ($t0)
/* 0042E2B0 19000009 */  blez  $t0, .L0042E2D8
/* 0042E2B4 00000000 */   nop   
/* 0042E2B8 11410007 */  beq   $t2, $at, .L0042E2D8
/* 0042E2BC 00000000 */   nop   
/* 0042E2C0 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042E2C4 24040031 */  li    $a0, 49
/* 0042E2C8 24050019 */  li    $a1, 25
/* 0042E2CC 0320F809 */  jalr  $t9
/* 0042E2D0 02603025 */   move  $a2, $s3
/* 0042E2D4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042E2D8:
/* 0042E2D8 8F998530 */  lw    $t9, %call16(check_no_used)($gp)
/* 0042E2DC 0320F809 */  jalr  $t9
/* 0042E2E0 00000000 */   nop   
/* 0042E2E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E2E8 8F9983C4 */  lw    $t9, %call16(load_pmov_regs)($gp)
/* 0042E2EC 0320F809 */  jalr  $t9
/* 0042E2F0 00000000 */   nop   
/* 0042E2F4 8ECE002C */  lw    $t6, 0x2c($s6)
/* 0042E2F8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E2FC 31CC0080 */  andi  $t4, $t6, 0x80
/* 0042E300 11800008 */  beqz  $t4, .L0042E324
/* 0042E304 00000000 */   nop   
/* 0042E308 8F998218 */  lw    $t9, %call16(emit_r)($gp)
/* 0042E30C 24040022 */  li    $a0, 34
/* 0042E310 02602825 */  move  $a1, $s3
/* 0042E314 0320F809 */  jalr  $t9
/* 0042E318 00000000 */   nop   
/* 0042E31C 10000007 */  b     .L0042E33C
/* 0042E320 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042E324:
/* 0042E324 8F998218 */  lw    $t9, %call16(emit_r)($gp)
/* 0042E328 24040023 */  li    $a0, 35
/* 0042E32C 02602825 */  move  $a1, $s3
/* 0042E330 0320F809 */  jalr  $t9
/* 0042E334 00000000 */   nop   
/* 0042E338 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042E33C:
/* 0042E33C 8F8F89D8 */  lw     $t7, %got(opcode_arch)($gp)
/* 0042E340 24010001 */  li    $at, 1
/* 0042E344 91EF0000 */  lbu   $t7, ($t7)
/* 0042E348 15E10015 */  bne   $t7, $at, .L0042E3A0
/* 0042E34C 00000000 */   nop   
/* 0042E350 8F8989DC */  lw     $t1, %got(basicint)($gp)
/* 0042E354 91290000 */  lbu   $t1, ($t1)
/* 0042E358 15200011 */  bnez  $t1, .L0042E3A0
/* 0042E35C 00000000 */   nop   
/* 0042E360 8F8D8BCC */  lw     $t5, %got(regs)($gp)
/* 0042E364 24010005 */  li    $at, 5
/* 0042E368 91AD0039 */  lbu   $t5, 0x39($t5)
/* 0042E36C 15A10004 */  bne   $t5, $at, .L0042E380
/* 0042E370 00000000 */   nop   
/* 0042E374 8F818BCC */  lw     $at, %got(regs)($gp)
/* 0042E378 24190048 */  li    $t9, 72
/* 0042E37C A0390039 */  sb    $t9, 0x39($at)
.L0042E380:
/* 0042E380 8F8B8BCC */  lw     $t3, %got(regs)($gp)
/* 0042E384 24010007 */  li    $at, 7
/* 0042E388 916B0051 */  lbu   $t3, 0x51($t3)
/* 0042E38C 15610004 */  bne   $t3, $at, .L0042E3A0
/* 0042E390 00000000 */   nop   
/* 0042E394 8F818BCC */  lw     $at, %got(regs)($gp)
/* 0042E398 24180048 */  li    $t8, 72
/* 0042E39C A0380051 */  sb    $t8, 0x51($at)
.L0042E3A0:
/* 0042E3A0 8F818870 */  lw     $at, %got(processing_args)($gp)
/* 0042E3A4 A0200000 */  sb    $zero, ($at)
/* 0042E3A8 92C80021 */  lbu   $t0, 0x21($s6)
/* 0042E3AC 3C010501 */  lui   $at, 0x501
/* 0042E3B0 310A001F */  andi  $t2, $t0, 0x1f
/* 0042E3B4 2D4E0020 */  sltiu $t6, $t2, 0x20
/* 0042E3B8 000E6023 */  negu  $t4, $t6
/* 0042E3BC 01817824 */  and   $t7, $t4, $at
/* 0042E3C0 014F4804 */  sllv  $t1, $t7, $t2
/* 0042E3C4 05210004 */  bgez  $t1, .L0042E3D8
/* 0042E3C8 00000000 */   nop   
/* 0042E3CC 8F818874 */  lw     $at, %got(processing_int64_return)($gp)
/* 0042E3D0 240D0001 */  li    $t5, 1
/* 0042E3D4 A02D0000 */  sb    $t5, ($at)
.L0042E3D8:
/* 0042E3D8 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042E3DC 100012B5 */  b     .L00432EB4
/* 0042E3E0 90840000 */   lbu   $a0, ($a0)
.L0042E3E4:
/* 0042E3E4 92D90021 */  lbu   $t9, 0x21($s6)
/* 0042E3E8 3C01000C */  lui   $at, 0xc
/* 0042E3EC 34218000 */  ori   $at, $at, 0x8000
/* 0042E3F0 332B001F */  andi  $t3, $t9, 0x1f
/* 0042E3F4 2D780020 */  sltiu $t8, $t3, 0x20
/* 0042E3F8 00184023 */  negu  $t0, $t8
/* 0042E3FC 01017024 */  and   $t6, $t0, $at
/* 0042E400 016E6004 */  sllv  $t4, $t6, $t3
/* 0042E404 05830009 */  bgezl $t4, .L0042E42C
/* 0042E408 8ED00004 */   lw    $s0, 4($s6)
/* 0042E40C 8F99837C */  lw    $t9, %call16(eval_fp_min_max)($gp)
/* 0042E410 02C02025 */  move  $a0, $s6
/* 0042E414 03C02825 */  move  $a1, $fp
/* 0042E418 0320F809 */  jalr  $t9
/* 0042E41C 00000000 */   nop   
/* 0042E420 100012FA */  b     .L0043300C
/* 0042E424 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042E428 8ED00004 */  lw    $s0, 4($s6)
.L0042E42C:
/* 0042E42C 24010049 */  li    $at, 73
/* 0042E430 920F0020 */  lbu   $t7, 0x20($s0)
/* 0042E434 11E10007 */  beq   $t7, $at, .L0042E454
/* 0042E438 00000000 */   nop   
/* 0042E43C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042E440 02002025 */  move  $a0, $s0
/* 0042E444 24050048 */  li    $a1, 72
/* 0042E448 0320F809 */  jalr  $t9
/* 0042E44C 00000000 */   nop   
/* 0042E450 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042E454:
/* 0042E454 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042E458 8EC40000 */  lw    $a0, ($s6)
/* 0042E45C 24050048 */  li    $a1, 72
/* 0042E460 0320F809 */  jalr  $t9
/* 0042E464 00000000 */   nop   
/* 0042E468 8ED00004 */  lw    $s0, 4($s6)
/* 0042E46C 24010049 */  li    $at, 73
/* 0042E470 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E474 920A0020 */  lbu   $t2, 0x20($s0)
/* 0042E478 11410007 */  beq   $t2, $at, .L0042E498
/* 0042E47C 00000000 */   nop   
/* 0042E480 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042E484 02002025 */  move  $a0, $s0
/* 0042E488 0320F809 */  jalr  $t9
/* 0042E48C 00000000 */   nop   
/* 0042E490 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E494 A3A20186 */  sb    $v0, 0x186($sp)
.L0042E498:
/* 0042E498 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042E49C 8EC40000 */  lw    $a0, ($s6)
/* 0042E4A0 0320F809 */  jalr  $t9
/* 0042E4A4 00000000 */   nop   
/* 0042E4A8 24010048 */  li    $at, 72
/* 0042E4AC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E4B0 17C10039 */  bne   $fp, $at, .L0042E598
/* 0042E4B4 305300FF */   andi  $s3, $v0, 0xff
/* 0042E4B8 8F998534 */  lw    $t9, %call16(usage_count)($gp)
/* 0042E4BC 02602025 */  move  $a0, $s3
/* 0042E4C0 0320F809 */  jalr  $t9
/* 0042E4C4 00000000 */   nop   
/* 0042E4C8 1440000F */  bnez  $v0, .L0042E508
/* 0042E4CC 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042E4D0 8F99852C */  lw    $t9, %call16(is_available)($gp)
/* 0042E4D4 02602025 */  move  $a0, $s3
/* 0042E4D8 0320F809 */  jalr  $t9
/* 0042E4DC 00000000 */   nop   
/* 0042E4E0 10400009 */  beqz  $v0, .L0042E508
/* 0042E4E4 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042E4E8 8F9984D8 */  lw    $t9, %call16(get_reg)($gp)
/* 0042E4EC 327E00FF */  andi  $fp, $s3, 0xff
/* 0042E4F0 02602025 */  move  $a0, $s3
/* 0042E4F4 02C02825 */  move  $a1, $s6
/* 0042E4F8 0320F809 */  jalr  $t9
/* 0042E4FC 96C60014 */   lhu   $a2, 0x14($s6)
/* 0042E500 1000002B */  b     .L0042E5B0
/* 0042E504 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042E508:
/* 0042E508 8EC90004 */  lw    $t1, 4($s6)
/* 0042E50C 24010049 */  li    $at, 73
/* 0042E510 912D0020 */  lbu   $t5, 0x20($t1)
/* 0042E514 11A10018 */  beq   $t5, $at, .L0042E578
/* 0042E518 00000000 */   nop   
/* 0042E51C 8F998534 */  lw    $t9, %call16(usage_count)($gp)
/* 0042E520 93A40186 */  lbu   $a0, 0x186($sp)
/* 0042E524 0320F809 */  jalr  $t9
/* 0042E528 00000000 */   nop   
/* 0042E52C 14400012 */  bnez  $v0, .L0042E578
/* 0042E530 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042E534 8F99852C */  lw    $t9, %call16(is_available)($gp)
/* 0042E538 93A40186 */  lbu   $a0, 0x186($sp)
/* 0042E53C 0320F809 */  jalr  $t9
/* 0042E540 00000000 */   nop   
/* 0042E544 1040000C */  beqz  $v0, .L0042E578
/* 0042E548 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042E54C 0260A025 */  move  $s4, $s3
/* 0042E550 93B30186 */  lbu   $s3, 0x186($sp)
/* 0042E554 8F9984D8 */  lw    $t9, %call16(get_reg)($gp)
/* 0042E558 A3B40186 */  sb    $s4, 0x186($sp)
/* 0042E55C 02C02825 */  move  $a1, $s6
/* 0042E560 96C60014 */  lhu   $a2, 0x14($s6)
/* 0042E564 0260F025 */  move  $fp, $s3
/* 0042E568 0320F809 */  jalr  $t9
/* 0042E56C 02602025 */   move  $a0, $s3
/* 0042E570 1000000F */  b     .L0042E5B0
/* 0042E574 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042E578:
/* 0042E578 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042E57C 02C02025 */  move  $a0, $s6
/* 0042E580 96C50014 */  lhu   $a1, 0x14($s6)
/* 0042E584 0320F809 */  jalr  $t9
/* 0042E588 00000000 */   nop   
/* 0042E58C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E590 10000007 */  b     .L0042E5B0
/* 0042E594 305E00FF */   andi  $fp, $v0, 0xff
.L0042E598:
/* 0042E598 8F9984D8 */  lw    $t9, %call16(get_reg)($gp)
/* 0042E59C 03C02025 */  move  $a0, $fp
/* 0042E5A0 02C02825 */  move  $a1, $s6
/* 0042E5A4 0320F809 */  jalr  $t9
/* 0042E5A8 96C60014 */   lhu   $a2, 0x14($s6)
/* 0042E5AC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042E5B0:
/* 0042E5B0 92C30019 */  lbu   $v1, 0x19($s6)
/* 0042E5B4 93AF0186 */  lbu   $t7, 0x186($sp)
/* 0042E5B8 0003CE00 */  sll   $t9, $v1, 0x18
/* 0042E5BC 0019C642 */  srl   $t8, $t9, 0x19
/* 0042E5C0 03D84026 */  xor   $t0, $fp, $t8
/* 0042E5C4 00087640 */  sll   $t6, $t0, 0x19
/* 0042E5C8 000E5E02 */  srl   $t3, $t6, 0x18
/* 0042E5CC 01636026 */  xor   $t4, $t3, $v1
/* 0042E5D0 17CF0008 */  bne   $fp, $t7, .L0042E5F4
/* 0042E5D4 A2CC0019 */   sb    $t4, 0x19($s6)
/* 0042E5D8 8ECA0004 */  lw    $t2, 4($s6)
/* 0042E5DC 24010049 */  li    $at, 73
/* 0042E5E0 91490020 */  lbu   $t1, 0x20($t2)
/* 0042E5E4 11210003 */  beq   $t1, $at, .L0042E5F4
/* 0042E5E8 00000000 */   nop   
/* 0042E5EC 1000001C */  b     .L0042E660
/* 0042E5F0 A3B30186 */   sb    $s3, 0x186($sp)
.L0042E5F4:
/* 0042E5F4 13D3001A */  beq   $fp, $s3, .L0042E660
/* 0042E5F8 00000000 */   nop   
/* 0042E5FC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042E600 24040031 */  li    $a0, 49
/* 0042E604 03C02825 */  move  $a1, $fp
/* 0042E608 0320F809 */  jalr  $t9
/* 0042E60C 02603025 */   move  $a2, $s3
/* 0042E610 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E614 8F8D89D8 */  lw     $t5, %got(opcode_arch)($gp)
/* 0042E618 91AD0000 */  lbu   $t5, ($t5)
/* 0042E61C 15A00010 */  bnez  $t5, .L0042E660
/* 0042E620 00000000 */   nop   
/* 0042E624 92D90021 */  lbu   $t9, 0x21($s6)
/* 0042E628 3C010501 */  lui   $at, 0x501
/* 0042E62C 3338001F */  andi  $t8, $t9, 0x1f
/* 0042E630 2F080020 */  sltiu $t0, $t8, 0x20
/* 0042E634 00087023 */  negu  $t6, $t0
/* 0042E638 01C15824 */  and   $t3, $t6, $at
/* 0042E63C 030B6004 */  sllv  $t4, $t3, $t8
/* 0042E640 05810007 */  bgez  $t4, .L0042E660
/* 0042E644 00000000 */   nop   
/* 0042E648 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042E64C 24040031 */  li    $a0, 49
/* 0042E650 27C50001 */  addiu $a1, $fp, 1
/* 0042E654 0320F809 */  jalr  $t9
/* 0042E658 26660001 */   addiu $a2, $s3, 1
/* 0042E65C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042E660:
/* 0042E660 8F99831C */  lw    $t9, %call16(uop_to_asm)($gp)
/* 0042E664 02C02025 */  move  $a0, $s6
/* 0042E668 0320F809 */  jalr  $t9
/* 0042E66C 00000000 */   nop   
/* 0042E670 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E674 3055FFFF */  andi  $s5, $v0, 0xffff
/* 0042E678 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0042E67C 0320F809 */  jalr  $t9
/* 0042E680 00000000 */   nop   
/* 0042E684 8ED00004 */  lw    $s0, 4($s6)
/* 0042E688 24010049 */  li    $at, 73
/* 0042E68C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E690 920F0020 */  lbu   $t7, 0x20($s0)
/* 0042E694 0040B825 */  move  $s7, $v0
/* 0042E698 02A02025 */  move  $a0, $s5
/* 0042E69C 15E10044 */  bne   $t7, $at, .L0042E7B0
/* 0042E6A0 03C02825 */   move  $a1, $fp
/* 0042E6A4 92CA0021 */  lbu   $t2, 0x21($s6)
/* 0042E6A8 3C010501 */  lui   $at, 0x501
/* 0042E6AC 03C02825 */  move  $a1, $fp
/* 0042E6B0 3149001F */  andi  $t1, $t2, 0x1f
/* 0042E6B4 2D2D0020 */  sltiu $t5, $t1, 0x20
/* 0042E6B8 000DC823 */  negu  $t9, $t5
/* 0042E6BC 03214024 */  and   $t0, $t9, $at
/* 0042E6C0 01287004 */  sllv  $t6, $t0, $t1
/* 0042E6C4 05C1002A */  bgez  $t6, .L0042E770
/* 0042E6C8 02A02025 */   move  $a0, $s5
/* 0042E6CC 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 0042E6D0 02A02025 */  move  $a0, $s5
/* 0042E6D4 8E060030 */  lw    $a2, 0x30($s0)
/* 0042E6D8 8E070034 */  lw    $a3, 0x34($s0)
/* 0042E6DC AFA20010 */  sw    $v0, 0x10($sp)
/* 0042E6E0 0320F809 */  jalr  $t9
/* 0042E6E4 AFB60014 */   sw    $s6, 0x14($sp)
/* 0042E6E8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E6EC 24040029 */  li    $a0, 41
/* 0042E6F0 03C02825 */  move  $a1, $fp
/* 0042E6F4 8F8B89D8 */  lw     $t3, %got(opcode_arch)($gp)
/* 0042E6F8 00003825 */  move  $a3, $zero
/* 0042E6FC 916B0000 */  lbu   $t3, ($t3)
/* 0042E700 55600011 */  bnel  $t3, $zero, .L0042E748
/* 0042E704 8ECF0004 */   lw    $t7, 4($s6)
/* 0042E708 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042E70C 8ED80004 */  lw    $t8, 4($s6)
/* 0042E710 27D00001 */  addiu $s0, $fp, 1
/* 0042E714 0320F809 */  jalr  $t9
/* 0042E718 8F060030 */   lw    $a2, 0x30($t8)
/* 0042E71C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E720 8ECC0004 */  lw    $t4, 4($s6)
/* 0042E724 24040029 */  li    $a0, 41
/* 0042E728 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042E72C 02002825 */  move  $a1, $s0
/* 0042E730 00003825 */  move  $a3, $zero
/* 0042E734 0320F809 */  jalr  $t9
/* 0042E738 8D860034 */   lw    $a2, 0x34($t4)
/* 0042E73C 1000003D */  b     .L0042E834
/* 0042E740 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042E744 8ECF0004 */  lw    $t7, 4($s6)
.L0042E748:
/* 0042E748 8F9981F8 */  lw    $t9, %call16(emit_rii)($gp)
/* 0042E74C 2404014C */  li    $a0, 332
/* 0042E750 8DE60030 */  lw    $a2, 0x30($t7)
/* 0042E754 03C02825 */  move  $a1, $fp
/* 0042E758 AFA60008 */  sw    $a2, 8($sp)
/* 0042E75C 8DE70034 */  lw    $a3, 0x34($t7)
/* 0042E760 0320F809 */  jalr  $t9
/* 0042E764 AFA7000C */   sw    $a3, 0xc($sp)
/* 0042E768 10000032 */  b     .L0042E834
/* 0042E76C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042E770:
/* 0042E770 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0042E774 03C02825 */  move  $a1, $fp
/* 0042E778 8E060030 */  lw    $a2, 0x30($s0)
/* 0042E77C 0320F809 */  jalr  $t9
/* 0042E780 02E03825 */   move  $a3, $s7
/* 0042E784 8ED90004 */  lw    $t9, 4($s6)
/* 0042E788 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E78C 24040029 */  li    $a0, 41
/* 0042E790 8F260030 */  lw    $a2, 0x30($t9)
/* 0042E794 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042E798 03C02825 */  move  $a1, $fp
/* 0042E79C 00003825 */  move  $a3, $zero
/* 0042E7A0 0320F809 */  jalr  $t9
/* 0042E7A4 00000000 */   nop   
/* 0042E7A8 10000022 */  b     .L0042E834
/* 0042E7AC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042E7B0:
/* 0042E7B0 8F9982C0 */  lw    $t9, %call16(emit_branch_rrll)($gp)
/* 0042E7B4 93A60186 */  lbu   $a2, 0x186($sp)
/* 0042E7B8 02E03825 */  move  $a3, $s7
/* 0042E7BC 0320F809 */  jalr  $t9
/* 0042E7C0 AFB60010 */   sw    $s6, 0x10($sp)
/* 0042E7C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E7C8 24040031 */  li    $a0, 49
/* 0042E7CC 03C02825 */  move  $a1, $fp
/* 0042E7D0 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042E7D4 93A60186 */  lbu   $a2, 0x186($sp)
/* 0042E7D8 0320F809 */  jalr  $t9
/* 0042E7DC 00000000 */   nop   
/* 0042E7E0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E7E4 8F8889D8 */  lw     $t0, %got(opcode_arch)($gp)
/* 0042E7E8 91080000 */  lbu   $t0, ($t0)
/* 0042E7EC 15000011 */  bnez  $t0, .L0042E834
/* 0042E7F0 00000000 */   nop   
/* 0042E7F4 92C90021 */  lbu   $t1, 0x21($s6)
/* 0042E7F8 3C010501 */  lui   $at, 0x501
/* 0042E7FC 24040031 */  li    $a0, 49
/* 0042E800 312E001F */  andi  $t6, $t1, 0x1f
/* 0042E804 2DCB0020 */  sltiu $t3, $t6, 0x20
/* 0042E808 000BC023 */  negu  $t8, $t3
/* 0042E80C 03016024 */  and   $t4, $t8, $at
/* 0042E810 01CC7804 */  sllv  $t7, $t4, $t6
/* 0042E814 05E10007 */  bgez  $t7, .L0042E834
/* 0042E818 00000000 */   nop   
/* 0042E81C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042E820 93A60186 */  lbu   $a2, 0x186($sp)
/* 0042E824 27C50001 */  addiu $a1, $fp, 1
/* 0042E828 0320F809 */  jalr  $t9
/* 0042E82C 24C60001 */   addiu $a2, $a2, 1
/* 0042E830 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042E834:
/* 0042E834 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0042E838 02E02025 */  move  $a0, $s7
/* 0042E83C 0320F809 */  jalr  $t9
/* 0042E840 00000000 */   nop   
/* 0042E844 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E848 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042E84C 10001199 */  b     .L00432EB4
/* 0042E850 90840000 */   lbu   $a0, ($a0)
.L0042E854:
/* 0042E854 8F998320 */  lw    $t9, %call16(jump)($gp)
/* 0042E858 8ECA0004 */  lw    $t2, 4($s6)
/* 0042E85C 8EC40000 */  lw    $a0, ($s6)
/* 0042E860 00002825 */  move  $a1, $zero
/* 0042E864 0320F809 */  jalr  $t9
/* 0042E868 8D460024 */   lw    $a2, 0x24($t2)
/* 0042E86C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E870 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042E874 1000118F */  b     .L00432EB4
/* 0042E878 90840000 */   lbu   $a0, ($a0)
.L0042E87C:
/* 0042E87C 8F998320 */  lw    $t9, %call16(jump)($gp)
/* 0042E880 8ECD0004 */  lw    $t5, 4($s6)
/* 0042E884 8EC40000 */  lw    $a0, ($s6)
/* 0042E888 24050001 */  li    $a1, 1
/* 0042E88C 0320F809 */  jalr  $t9
/* 0042E890 8DA60024 */   lw    $a2, 0x24($t5)
/* 0042E894 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042E898 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042E89C 10001185 */  b     .L00432EB4
/* 0042E8A0 90840000 */   lbu   $a0, ($a0)
.L0042E8A4:
/* 0042E8A4 8F998308 */  lw    $t9, %call16(is_end_return)($gp)
/* 0042E8A8 02C02025 */  move  $a0, $s6
/* 0042E8AC 0320F809 */  jalr  $t9
/* 0042E8B0 00000000 */   nop   
/* 0042E8B4 10400082 */  beqz  $v0, .L0042EAC0
/* 0042E8B8 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042E8BC 8F998A64 */  lw     $t9, %got(frame_size)($gp)
/* 0042E8C0 8F390000 */  lw    $t9, ($t9)
/* 0042E8C4 1720007E */  bnez  $t9, .L0042EAC0
/* 0042E8C8 00000000 */   nop   
/* 0042E8CC 8F888AC8 */  lw     $t0, %got(load_stack_limit)($gp)
/* 0042E8D0 91080000 */  lbu   $t0, ($t0)
/* 0042E8D4 1500007A */  bnez  $t0, .L0042EAC0
/* 0042E8D8 00000000 */   nop   
/* 0042E8DC 8F9982E8 */  lw    $t9, %call16(is_empty_saved_regs)($gp)
/* 0042E8E0 0320F809 */  jalr  $t9
/* 0042E8E4 00000000 */   nop   
/* 0042E8E8 10400075 */  beqz  $v0, .L0042EAC0
/* 0042E8EC 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042E8F0 8F898A60 */  lw     $t1, %got(frame_pointer)($gp)
/* 0042E8F4 2401001D */  li    $at, 29
/* 0042E8F8 93AB0127 */  lbu   $t3, 0x127($sp)
/* 0042E8FC 91290000 */  lbu   $t1, ($t1)
/* 0042E900 1521006F */  bne   $t1, $at, .L0042EAC0
/* 0042E904 2401000B */   li    $at, 11
/* 0042E908 1161001C */  beq   $t3, $at, .L0042E97C
/* 0042E90C 2D780020 */   sltiu $t8, $t3, 0x20
/* 0042E910 3C01000C */  lui   $at, 0xc
/* 0042E914 34218000 */  ori   $at, $at, 0x8000
/* 0042E918 00186023 */  negu  $t4, $t8
/* 0042E91C 01817024 */  and   $t6, $t4, $at
/* 0042E920 016E7804 */  sllv  $t7, $t6, $t3
/* 0042E924 05E10004 */  bgez  $t7, .L0042E938
/* 0042E928 3C0AC000 */   lui   $t2, 0xc000
/* 0042E92C AFA0013C */  sw    $zero, 0x13c($sp)
/* 0042E930 10000014 */  b     .L0042E984
/* 0042E934 AFAA0138 */   sw    $t2, 0x138($sp)
.L0042E938:
/* 0042E938 8F8D89DC */  lw     $t5, %got(basicint)($gp)
/* 0042E93C 93B90127 */  lbu   $t9, 0x127($sp)
/* 0042E940 AFA00138 */  sw    $zero, 0x138($sp)
/* 0042E944 91AD0000 */  lbu   $t5, ($t5)
/* 0042E948 2F280020 */  sltiu $t0, $t9, 0x20
/* 0042E94C 00084823 */  negu  $t1, $t0
/* 0042E950 15A00007 */  bnez  $t5, .L0042E970
/* 0042E954 3C010501 */   lui   $at, 0x501
/* 0042E958 0121C024 */  and   $t8, $t1, $at
/* 0042E95C 03386004 */  sllv  $t4, $t8, $t9
/* 0042E960 05810003 */  bgez  $t4, .L0042E970
/* 0042E964 3C0E3000 */   lui   $t6, 0x3000
/* 0042E968 10000006 */  b     .L0042E984
/* 0042E96C AFAE013C */   sw    $t6, 0x13c($sp)
.L0042E970:
/* 0042E970 3C0B2000 */  lui   $t3, 0x2000
/* 0042E974 10000003 */  b     .L0042E984
/* 0042E978 AFAB013C */   sw    $t3, 0x13c($sp)
.L0042E97C:
/* 0042E97C AFA0013C */  sw    $zero, 0x13c($sp)
/* 0042E980 AFA00138 */  sw    $zero, 0x138($sp)
.L0042E984:
/* 0042E984 8F908AD4 */  lw     $s0, %got(pdefs)($gp)
/* 0042E988 8E100000 */  lw    $s0, ($s0)
/* 0042E98C 5200003C */  beql  $s0, $zero, .L0042EA80
/* 0042E990 8FA5013C */   lw    $a1, 0x13c($sp)
/* 0042E994 8E0F0030 */  lw    $t7, 0x30($s0)
/* 0042E998 2401FFFF */  li    $at, -1
/* 0042E99C 51E10038 */  beql  $t7, $at, .L0042EA80
/* 0042E9A0 8FA5013C */   lw    $a1, 0x13c($sp)
/* 0042E9A4 960A0022 */  lhu   $t2, 0x22($s0)
.L0042E9A8:
/* 0042E9A8 24010001 */  li    $at, 1
/* 0042E9AC 5141002D */  beql  $t2, $at, .L0042EA64
/* 0042E9B0 8E100008 */   lw    $s0, 8($s0)
/* 0042E9B4 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 0042E9B8 02002025 */  move  $a0, $s0
/* 0042E9BC 0320F809 */  jalr  $t9
/* 0042E9C0 00000000 */   nop   
/* 0042E9C4 920D0021 */  lbu   $t5, 0x21($s0)
/* 0042E9C8 3C01000C */  lui   $at, 0xc
/* 0042E9CC 34218000 */  ori   $at, $at, 0x8000
/* 0042E9D0 31A8001F */  andi  $t0, $t5, 0x1f
/* 0042E9D4 2D090020 */  sltiu $t1, $t0, 0x20
/* 0042E9D8 0009C023 */  negu  $t8, $t1
/* 0042E9DC 0301C824 */  and   $t9, $t8, $at
/* 0042E9E0 01196004 */  sllv  $t4, $t9, $t0
/* 0042E9E4 05810010 */  bgez  $t4, .L0042EA28
/* 0042E9E8 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042E9EC 8FAE0138 */  lw    $t6, 0x138($sp)
/* 0042E9F0 8E0D0028 */  lw    $t5, 0x28($s0)
/* 0042E9F4 304300FF */  andi  $v1, $v0, 0xff
/* 0042E9F8 3C0B8000 */  lui   $t3, 0x8000
/* 0042E9FC 006B7806 */  srlv  $t7, $t3, $v1
/* 0042EA00 24010008 */  li    $at, 8
/* 0042EA04 01CF5025 */  or    $t2, $t6, $t7
/* 0042EA08 15A10015 */  bne   $t5, $at, .L0042EA60
/* 0042EA0C AFAA0138 */   sw    $t2, 0x138($sp)
/* 0042EA10 24780001 */  addiu $t8, $v1, 1
/* 0042EA14 3C198000 */  lui   $t9, 0x8000
/* 0042EA18 03194006 */  srlv  $t0, $t9, $t8
/* 0042EA1C 01486025 */  or    $t4, $t2, $t0
/* 0042EA20 1000000F */  b     .L0042EA60
/* 0042EA24 AFAC0138 */   sw    $t4, 0x138($sp)
.L0042EA28:
/* 0042EA28 8FAB013C */  lw    $t3, 0x13c($sp)
/* 0042EA2C 8E0D0028 */  lw    $t5, 0x28($s0)
/* 0042EA30 304300FF */  andi  $v1, $v0, 0xff
/* 0042EA34 3C0E8000 */  lui   $t6, 0x8000
/* 0042EA38 006E7806 */  srlv  $t7, $t6, $v1
/* 0042EA3C 24010008 */  li    $at, 8
/* 0042EA40 016F5025 */  or    $t2, $t3, $t7
/* 0042EA44 15A10006 */  bne   $t5, $at, .L0042EA60
/* 0042EA48 AFAA013C */   sw    $t2, 0x13c($sp)
/* 0042EA4C 24780001 */  addiu $t8, $v1, 1
/* 0042EA50 3C098000 */  lui   $t1, 0x8000
/* 0042EA54 03094006 */  srlv  $t0, $t1, $t8
/* 0042EA58 01486025 */  or    $t4, $t2, $t0
/* 0042EA5C AFAC013C */  sw    $t4, 0x13c($sp)
.L0042EA60:
/* 0042EA60 8E100008 */  lw    $s0, 8($s0)
.L0042EA64:
/* 0042EA64 52000006 */  beql  $s0, $zero, .L0042EA80
/* 0042EA68 8FA5013C */   lw    $a1, 0x13c($sp)
/* 0042EA6C 8E0E0030 */  lw    $t6, 0x30($s0)
/* 0042EA70 2401FFFF */  li    $at, -1
/* 0042EA74 55C1FFCC */  bnel  $t6, $at, .L0042E9A8
/* 0042EA78 960A0022 */   lhu   $t2, 0x22($s0)
/* 0042EA7C 8FA5013C */  lw    $a1, 0x13c($sp)
.L0042EA80:
/* 0042EA80 8FA60138 */  lw    $a2, 0x138($sp)
/* 0042EA84 8F99824C */  lw    $t9, %call16(emit_regmask)($gp)
/* 0042EA88 34A5FF0E */  ori   $a1, $a1, 0xff0e
/* 0042EA8C 34C60FFF */  ori   $a2, $a2, 0xfff
/* 0042EA90 AFA60138 */  sw    $a2, 0x138($sp)
/* 0042EA94 AFA5013C */  sw    $a1, 0x13c($sp)
/* 0042EA98 0320F809 */  jalr  $t9
/* 0042EA9C 24040035 */   li    $a0, 53
/* 0042EAA0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EAA4 24040022 */  li    $a0, 34
/* 0042EAA8 2405001F */  li    $a1, 31
/* 0042EAAC 8F998218 */  lw    $t9, %call16(emit_r)($gp)
/* 0042EAB0 0320F809 */  jalr  $t9
/* 0042EAB4 00000000 */   nop   
/* 0042EAB8 10000007 */  b     .L0042EAD8
/* 0042EABC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042EAC0:
/* 0042EAC0 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 0042EAC4 8ECB0004 */  lw    $t3, 4($s6)
/* 0042EAC8 24040004 */  li    $a0, 4
/* 0042EACC 0320F809 */  jalr  $t9
/* 0042EAD0 8D650024 */   lw    $a1, 0x24($t3)
/* 0042EAD4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042EAD8:
/* 0042EAD8 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042EADC 100010F5 */  b     .L00432EB4
/* 0042EAE0 90840000 */   lbu   $a0, ($a0)
.L0042EAE4:
/* 0042EAE4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042EAE8 8EC40000 */  lw    $a0, ($s6)
/* 0042EAEC 24050048 */  li    $a1, 72
/* 0042EAF0 0320F809 */  jalr  $t9
/* 0042EAF4 00000000 */   nop   
/* 0042EAF8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EAFC 8EC40000 */  lw    $a0, ($s6)
/* 0042EB00 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042EB04 0320F809 */  jalr  $t9
/* 0042EB08 00000000 */   nop   
/* 0042EB0C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EB10 24040022 */  li    $a0, 34
/* 0042EB14 00402825 */  move  $a1, $v0
/* 0042EB18 8F998218 */  lw    $t9, %call16(emit_r)($gp)
/* 0042EB1C 0320F809 */  jalr  $t9
/* 0042EB20 00000000 */   nop   
/* 0042EB24 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EB28 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042EB2C 100010E1 */  b     .L00432EB4
/* 0042EB30 90840000 */   lbu   $a0, ($a0)
.L0042EB34:
/* 0042EB34 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042EB38 02C02025 */  move  $a0, $s6
/* 0042EB3C 03C02825 */  move  $a1, $fp
/* 0042EB40 0320F809 */  jalr  $t9
/* 0042EB44 00000000 */   nop   
/* 0042EB48 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EB4C 8ECF0000 */  lw    $t7, ($s6)
/* 0042EB50 305E00FF */  andi  $fp, $v0, 0xff
/* 0042EB54 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0042EB58 24040024 */  li    $a0, 36
/* 0042EB5C 304500FF */  andi  $a1, $v0, 0xff
/* 0042EB60 0320F809 */  jalr  $t9
/* 0042EB64 8DE60024 */   lw    $a2, 0x24($t7)
/* 0042EB68 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EB6C 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042EB70 100010D0 */  b     .L00432EB4
/* 0042EB74 90840000 */   lbu   $a0, ($a0)
.L0042EB78:
/* 0042EB78 92C70021 */  lbu   $a3, 0x21($s6)
/* 0042EB7C 3C01000C */  lui   $at, 0xc
/* 0042EB80 34218000 */  ori   $at, $at, 0x8000
/* 0042EB84 30E7001F */  andi  $a3, $a3, 0x1f
/* 0042EB88 2CEA0020 */  sltiu $t2, $a3, 0x20
/* 0042EB8C 000A6823 */  negu  $t5, $t2
/* 0042EB90 01A14824 */  and   $t1, $t5, $at
/* 0042EB94 00E9C004 */  sllv  $t8, $t1, $a3
/* 0042EB98 07010008 */  bgez  $t8, .L0042EBBC
/* 0042EB9C 2401000E */   li    $at, 14
/* 0042EBA0 8F9983D8 */  lw    $t9, %call16(load_fp_literal)($gp)
/* 0042EBA4 02C02025 */  move  $a0, $s6
/* 0042EBA8 03C02825 */  move  $a1, $fp
/* 0042EBAC 0320F809 */  jalr  $t9
/* 0042EBB0 00000000 */   nop   
/* 0042EBB4 10000093 */  b     .L0042EE04
/* 0042EBB8 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042EBBC:
/* 0042EBBC 14E1001F */  bne   $a3, $at, .L0042EC3C
/* 0042EBC0 00000000 */   nop   
/* 0042EBC4 8ED90028 */  lw    $t9, 0x28($s6)
/* 0042EBC8 2B210005 */  slti  $at, $t9, 5
/* 0042EBCC 1420001B */  bnez  $at, .L0042EC3C
/* 0042EBD0 00000000 */   nop   
/* 0042EBD4 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0042EBD8 0320F809 */  jalr  $t9
/* 0042EBDC 00000000 */   nop   
/* 0042EBE0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EBE4 26C40020 */  addiu $a0, $s6, 0x20
/* 0042EBE8 00402825 */  move  $a1, $v0
/* 0042EBEC 8F99843C */  lw    $t9, %call16(add_to_pool)($gp)
/* 0042EBF0 0320F809 */  jalr  $t9
/* 0042EBF4 00000000 */   nop   
/* 0042EBF8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EBFC 00408025 */  move  $s0, $v0
/* 0042EC00 02C02025 */  move  $a0, $s6
/* 0042EC04 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042EC08 03C02825 */  move  $a1, $fp
/* 0042EC0C 0320F809 */  jalr  $t9
/* 0042EC10 00000000 */   nop   
/* 0042EC14 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EC18 305E00FF */  andi  $fp, $v0, 0xff
/* 0042EC1C 24040024 */  li    $a0, 36
/* 0042EC20 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0042EC24 304500FF */  andi  $a1, $v0, 0xff
/* 0042EC28 02003025 */  move  $a2, $s0
/* 0042EC2C 0320F809 */  jalr  $t9
/* 0042EC30 00000000 */   nop   
/* 0042EC34 10000073 */  b     .L0042EE04
/* 0042EC38 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042EC3C:
/* 0042EC3C 8F998690 */  lw    $t9, %call16(is_zero)($gp)
/* 0042EC40 02C02025 */  move  $a0, $s6
/* 0042EC44 0320F809 */  jalr  $t9
/* 0042EC48 00000000 */   nop   
/* 0042EC4C 1040002F */  beqz  $v0, .L0042ED0C
/* 0042EC50 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042EC54 8F8889D8 */  lw     $t0, %got(opcode_arch)($gp)
/* 0042EC58 00002025 */  move  $a0, $zero
/* 0042EC5C 91080000 */  lbu   $t0, ($t0)
/* 0042EC60 55000022 */  bnel  $t0, $zero, .L0042ECEC
/* 0042EC64 92C90019 */   lbu   $t1, 0x19($s6)
/* 0042EC68 92CC0021 */  lbu   $t4, 0x21($s6)
/* 0042EC6C 3C010501 */  lui   $at, 0x501
/* 0042EC70 318E001F */  andi  $t6, $t4, 0x1f
/* 0042EC74 2DCB0020 */  sltiu $t3, $t6, 0x20
/* 0042EC78 000B7823 */  negu  $t7, $t3
/* 0042EC7C 01E15024 */  and   $t2, $t7, $at
/* 0042EC80 01CA6804 */  sllv  $t5, $t2, $t6
/* 0042EC84 05A30019 */  bgezl $t5, .L0042ECEC
/* 0042EC88 92C90019 */   lbu   $t1, 0x19($s6)
/* 0042EC8C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042EC90 02C02025 */  move  $a0, $s6
/* 0042EC94 03C02825 */  move  $a1, $fp
/* 0042EC98 0320F809 */  jalr  $t9
/* 0042EC9C 00000000 */   nop   
/* 0042ECA0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042ECA4 305E00FF */  andi  $fp, $v0, 0xff
/* 0042ECA8 24040029 */  li    $a0, 41
/* 0042ECAC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042ECB0 304500FF */  andi  $a1, $v0, 0xff
/* 0042ECB4 00003025 */  move  $a2, $zero
/* 0042ECB8 0320F809 */  jalr  $t9
/* 0042ECBC 00003825 */   move  $a3, $zero
/* 0042ECC0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042ECC4 24040029 */  li    $a0, 41
/* 0042ECC8 27C50001 */  addiu $a1, $fp, 1
/* 0042ECCC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042ECD0 00003025 */  move  $a2, $zero
/* 0042ECD4 00003825 */  move  $a3, $zero
/* 0042ECD8 0320F809 */  jalr  $t9
/* 0042ECDC 00000000 */   nop   
/* 0042ECE0 10000048 */  b     .L0042EE04
/* 0042ECE4 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042ECE8 92C90019 */  lbu   $t1, 0x19($s6)
.L0042ECEC:
/* 0042ECEC 8F998508 */  lw    $t9, %call16(inc_usage)($gp)
/* 0042ECF0 0000F025 */  move  $fp, $zero
/* 0042ECF4 3138FF01 */  andi  $t8, $t1, 0xff01
/* 0042ECF8 A2D80019 */  sb    $t8, 0x19($s6)
/* 0042ECFC 0320F809 */  jalr  $t9
/* 0042ED00 96C50014 */   lhu   $a1, 0x14($s6)
/* 0042ED04 1000003F */  b     .L0042EE04
/* 0042ED08 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042ED0C:
/* 0042ED0C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042ED10 02C02025 */  move  $a0, $s6
/* 0042ED14 03C02825 */  move  $a1, $fp
/* 0042ED18 0320F809 */  jalr  $t9
/* 0042ED1C 00000000 */   nop   
/* 0042ED20 92D90021 */  lbu   $t9, 0x21($s6)
/* 0042ED24 3C010501 */  lui   $at, 0x501
/* 0042ED28 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042ED2C 3328001F */  andi  $t0, $t9, 0x1f
/* 0042ED30 2D0C0020 */  sltiu $t4, $t0, 0x20
/* 0042ED34 000C5823 */  negu  $t3, $t4
/* 0042ED38 01617824 */  and   $t7, $t3, $at
/* 0042ED3C 010F5004 */  sllv  $t2, $t7, $t0
/* 0042ED40 05410029 */  bgez  $t2, .L0042EDE8
/* 0042ED44 305E00FF */   andi  $fp, $v0, 0xff
/* 0042ED48 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0042ED4C 304300FF */  andi  $v1, $v0, 0xff
/* 0042ED50 00034880 */  sll   $t1, $v1, 2
/* 0042ED54 91CE0000 */  lbu   $t6, ($t6)
/* 0042ED58 24040029 */  li    $a0, 41
/* 0042ED5C 11C0000A */  beqz  $t6, .L0042ED88
/* 0042ED60 00000000 */   nop   
/* 0042ED64 8F988BCC */  lw     $t8, %got(regs)($gp)
/* 0042ED68 01234823 */  subu  $t1, $t1, $v1
/* 0042ED6C 00094880 */  sll   $t1, $t1, 2
/* 0042ED70 0138C821 */  addu  $t9, $t1, $t8
/* 0042ED74 932C0009 */  lbu   $t4, 9($t9)
/* 0042ED78 246D0001 */  addiu $t5, $v1, 1
/* 0042ED7C 03C02825 */  move  $a1, $fp
/* 0042ED80 15AC0010 */  bne   $t5, $t4, .L0042EDC4
/* 0042ED84 00000000 */   nop   
.L0042ED88:
/* 0042ED88 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042ED8C 03C02825 */  move  $a1, $fp
/* 0042ED90 8EC60030 */  lw    $a2, 0x30($s6)
/* 0042ED94 0320F809 */  jalr  $t9
/* 0042ED98 00003825 */   move  $a3, $zero
/* 0042ED9C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EDA0 24040029 */  li    $a0, 41
/* 0042EDA4 27C50001 */  addiu $a1, $fp, 1
/* 0042EDA8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042EDAC 8EC60034 */  lw    $a2, 0x34($s6)
/* 0042EDB0 00003825 */  move  $a3, $zero
/* 0042EDB4 0320F809 */  jalr  $t9
/* 0042EDB8 00000000 */   nop   
/* 0042EDBC 10000011 */  b     .L0042EE04
/* 0042EDC0 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042EDC4:
/* 0042EDC4 8F9981F8 */  lw    $t9, %call16(emit_rii)($gp)
/* 0042EDC8 8EC60030 */  lw    $a2, 0x30($s6)
/* 0042EDCC 8EC70034 */  lw    $a3, 0x34($s6)
/* 0042EDD0 2404014C */  li    $a0, 332
/* 0042EDD4 AFA60008 */  sw    $a2, 8($sp)
/* 0042EDD8 0320F809 */  jalr  $t9
/* 0042EDDC AFA7000C */   sw    $a3, 0xc($sp)
/* 0042EDE0 10000008 */  b     .L0042EE04
/* 0042EDE4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042EDE8:
/* 0042EDE8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042EDEC 24040029 */  li    $a0, 41
/* 0042EDF0 03C02825 */  move  $a1, $fp
/* 0042EDF4 8EC60030 */  lw    $a2, 0x30($s6)
/* 0042EDF8 0320F809 */  jalr  $t9
/* 0042EDFC 00003825 */   move  $a3, $zero
/* 0042EE00 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042EE04:
/* 0042EE04 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042EE08 1000102A */  b     .L00432EB4
/* 0042EE0C 90840000 */   lbu   $a0, ($a0)
.L0042EE10:
/* 0042EE10 92C70021 */  lbu   $a3, 0x21($s6)
/* 0042EE14 3C010501 */  lui   $at, 0x501
/* 0042EE18 30E7001F */  andi  $a3, $a3, 0x1f
/* 0042EE1C 2CE80020 */  sltiu $t0, $a3, 0x20
/* 0042EE20 00085023 */  negu  $t2, $t0
/* 0042EE24 01417024 */  and   $t6, $t2, $at
/* 0042EE28 00EE4804 */  sllv  $t1, $t6, $a3
/* 0042EE2C 012002B2 */  tlt   $t1, $zero, 0xa
/* 0042EE30 2CF80020 */  sltiu $t8, $a3, 0x20
/* 0042EE34 3C01000C */  lui   $at, 0xc
/* 0042EE38 34218000 */  ori   $at, $at, 0x8000
/* 0042EE3C 0018C823 */  negu  $t9, $t8
/* 0042EE40 03216824 */  and   $t5, $t9, $at
/* 0042EE44 00ED6004 */  sllv  $t4, $t5, $a3
/* 0042EE48 05810017 */  bgez  $t4, .L0042EEA8
/* 0042EE4C 00000000 */   nop   
/* 0042EE50 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042EE54 02C02025 */  move  $a0, $s6
/* 0042EE58 03C02825 */  move  $a1, $fp
/* 0042EE5C 0320F809 */  jalr  $t9
/* 0042EE60 00000000 */   nop   
/* 0042EE64 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EE68 92C50021 */  lbu   $a1, 0x21($s6)
/* 0042EE6C 305E00FF */  andi  $fp, $v0, 0xff
/* 0042EE70 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 0042EE74 240400FC */  li    $a0, 252
/* 0042EE78 30A5001F */  andi  $a1, $a1, 0x1f
/* 0042EE7C 0320F809 */  jalr  $t9
/* 0042EE80 00000000 */   nop   
/* 0042EE84 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EE88 00402025 */  move  $a0, $v0
/* 0042EE8C 03C02825 */  move  $a1, $fp
/* 0042EE90 8F998200 */  lw    $t9, %call16(emit_rrfi)($gp)
/* 0042EE94 8EC60024 */  lw    $a2, 0x24($s6)
/* 0042EE98 0320F809 */  jalr  $t9
/* 0042EE9C 00000000 */   nop   
/* 0042EEA0 1000000F */  b     .L0042EEE0
/* 0042EEA4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042EEA8:
/* 0042EEA8 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042EEAC 02C02025 */  move  $a0, $s6
/* 0042EEB0 03C02825 */  move  $a1, $fp
/* 0042EEB4 0320F809 */  jalr  $t9
/* 0042EEB8 00000000 */   nop   
/* 0042EEBC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EEC0 305E00FF */  andi  $fp, $v0, 0xff
/* 0042EEC4 24040029 */  li    $a0, 41
/* 0042EEC8 8F998200 */  lw    $t9, %call16(emit_rrfi)($gp)
/* 0042EECC 304500FF */  andi  $a1, $v0, 0xff
/* 0042EED0 8EC60024 */  lw    $a2, 0x24($s6)
/* 0042EED4 0320F809 */  jalr  $t9
/* 0042EED8 00000000 */   nop   
/* 0042EEDC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042EEE0:
/* 0042EEE0 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042EEE4 10000FF3 */  b     .L00432EB4
/* 0042EEE8 90840000 */   lbu   $a0, ($a0)
.L0042EEEC:
/* 0042EEEC 8F998384 */  lw    $t9, %call16(ureg)($gp)
/* 0042EEF0 26C40020 */  addiu $a0, $s6, 0x20
/* 0042EEF4 0320F809 */  jalr  $t9
/* 0042EEF8 00000000 */   nop   
/* 0042EEFC 304300FF */  andi  $v1, $v0, 0xff
/* 0042EF00 24010048 */  li    $at, 72
/* 0042EF04 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EF08 1061006B */  beq   $v1, $at, .L0042F0B8
/* 0042EF0C 305300FF */   andi  $s3, $v0, 0xff
/* 0042EF10 246BFFE0 */  addiu $t3, $v1, -0x20
/* 0042EF14 2D6F0020 */  sltiu $t7, $t3, 0x20
/* 0042EF18 000F4023 */  negu  $t0, $t7
/* 0042EF1C 01685004 */  sllv  $t2, $t0, $t3
/* 0042EF20 0541000E */  bgez  $t2, .L0042EF5C
/* 0042EF24 00000000 */   nop   
/* 0042EF28 92CE0021 */  lbu   $t6, 0x21($s6)
/* 0042EF2C 8F988898 */  lw     $t8, %got(reg_kind_tab)($gp)
/* 0042EF30 02602025 */  move  $a0, $s3
/* 0042EF34 31C9001F */  andi  $t1, $t6, 0x1f
/* 0042EF38 0138C821 */  addu  $t9, $t1, $t8
/* 0042EF3C 93260000 */  lbu   $a2, ($t9)
/* 0042EF40 8F9984E4 */  lw    $t9, %call16(get_fp_reg1)($gp)
/* 0042EF44 02C02825 */  move  $a1, $s6
/* 0042EF48 96C70014 */  lhu   $a3, 0x14($s6)
/* 0042EF4C 0320F809 */  jalr  $t9
/* 0042EF50 00000000 */   nop   
/* 0042EF54 1000004F */  b     .L0042F094
/* 0042EF58 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042EF5C:
/* 0042EF5C 8F9984DC */  lw    $t9, %call16(get_reg1)($gp)
/* 0042EF60 02602025 */  move  $a0, $s3
/* 0042EF64 02C02825 */  move  $a1, $s6
/* 0042EF68 0320F809 */  jalr  $t9
/* 0042EF6C 96C60014 */   lhu   $a2, 0x14($s6)
/* 0042EF70 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042EF74 24010002 */  li    $at, 2
/* 0042EF78 8F8D8874 */  lw     $t5, %got(processing_int64_return)($gp)
/* 0042EF7C 91AD0000 */  lbu   $t5, ($t5)
/* 0042EF80 51A00045 */  beql  $t5, $zero, .L0042F098
/* 0042EF84 92C30019 */   lbu   $v1, 0x19($s6)
/* 0042EF88 56610043 */  bnel  $s3, $at, .L0042F098
/* 0042EF8C 92C30019 */   lbu   $v1, 0x19($s6)
/* 0042EF90 8F818874 */  lw     $at, %got(processing_int64_return)($gp)
/* 0042EF94 A0200000 */  sb    $zero, ($at)
/* 0042EF98 92CC0021 */  lbu   $t4, 0x21($s6)
/* 0042EF9C 3C010501 */  lui   $at, 0x501
/* 0042EFA0 318F001F */  andi  $t7, $t4, 0x1f
/* 0042EFA4 2DE80020 */  sltiu $t0, $t7, 0x20
/* 0042EFA8 00085823 */  negu  $t3, $t0
/* 0042EFAC 01615024 */  and   $t2, $t3, $at
/* 0042EFB0 01EA7004 */  sllv  $t6, $t2, $t7
/* 0042EFB4 05C30038 */  bgezl $t6, .L0042F098
/* 0042EFB8 92C30019 */   lbu   $v1, 0x19($s6)
/* 0042EFBC 8F8989D8 */  lw     $t1, %got(opcode_arch)($gp)
/* 0042EFC0 24010001 */  li    $at, 1
/* 0042EFC4 91290000 */  lbu   $t1, ($t1)
/* 0042EFC8 55210033 */  bnel  $t1, $at, .L0042F098
/* 0042EFCC 92C30019 */   lbu   $v1, 0x19($s6)
/* 0042EFD0 8F9889DC */  lw     $t8, %got(basicint)($gp)
/* 0042EFD4 2404013A */  li    $a0, 314
/* 0042EFD8 02602825 */  move  $a1, $s3
/* 0042EFDC 93180000 */  lbu   $t8, ($t8)
/* 0042EFE0 5700002D */  bnel  $t8, $zero, .L0042F098
/* 0042EFE4 92C30019 */   lbu   $v1, 0x19($s6)
/* 0042EFE8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042EFEC 02603025 */  move  $a2, $s3
/* 0042EFF0 24070020 */  li    $a3, 32
/* 0042EFF4 0320F809 */  jalr  $t9
/* 0042EFF8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042EFFC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F000 26700001 */  addiu $s0, $s3, 1
/* 0042F004 02002825 */  move  $a1, $s0
/* 0042F008 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042F00C 02003025 */  move  $a2, $s0
/* 0042F010 2404013A */  li    $a0, 314
/* 0042F014 24070020 */  li    $a3, 32
/* 0042F018 0320F809 */  jalr  $t9
/* 0042F01C AFA00010 */   sw    $zero, 0x10($sp)
/* 0042F020 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F024 02603025 */  move  $a2, $s3
/* 0042F028 24070020 */  li    $a3, 32
/* 0042F02C 8F99898C */  lw     $t9, %got(lsb_first)($gp)
/* 0042F030 2404013B */  li    $a0, 315
/* 0042F034 02002825 */  move  $a1, $s0
/* 0042F038 93390000 */  lbu   $t9, ($t9)
/* 0042F03C 13200008 */  beqz  $t9, .L0042F060
/* 0042F040 00000000 */   nop   
/* 0042F044 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042F048 2404013B */  li    $a0, 315
/* 0042F04C 02602825 */  move  $a1, $s3
/* 0042F050 0320F809 */  jalr  $t9
/* 0042F054 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042F058 10000007 */  b     .L0042F078
/* 0042F05C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042F060:
/* 0042F060 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042F064 02003025 */  move  $a2, $s0
/* 0042F068 24070020 */  li    $a3, 32
/* 0042F06C 0320F809 */  jalr  $t9
/* 0042F070 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042F074 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F078:
/* 0042F078 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0042F07C 24040040 */  li    $a0, 64
/* 0042F080 02602825 */  move  $a1, $s3
/* 0042F084 02603025 */  move  $a2, $s3
/* 0042F088 0320F809 */  jalr  $t9
/* 0042F08C 02003825 */   move  $a3, $s0
/* 0042F090 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F094:
/* 0042F094 92C30019 */  lbu   $v1, 0x19($s6)
.L0042F098:
/* 0042F098 00036E00 */  sll   $t5, $v1, 0x18
/* 0042F09C 000D6642 */  srl   $t4, $t5, 0x19
/* 0042F0A0 026C4026 */  xor   $t0, $s3, $t4
/* 0042F0A4 00085E40 */  sll   $t3, $t0, 0x19
/* 0042F0A8 000B5602 */  srl   $t2, $t3, 0x18
/* 0042F0AC 01437826 */  xor   $t7, $t2, $v1
/* 0042F0B0 1000003F */  b     .L0042F1B0
/* 0042F0B4 A2CF0019 */   sb    $t7, 0x19($s6)
.L0042F0B8:
/* 0042F0B8 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042F0BC 02C02025 */  move  $a0, $s6
/* 0042F0C0 03C02825 */  move  $a1, $fp
/* 0042F0C4 0320F809 */  jalr  $t9
/* 0042F0C8 00000000 */   nop   
/* 0042F0CC 96D70022 */  lhu   $s7, 0x22($s6)
/* 0042F0D0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F0D4 305E00FF */  andi  $fp, $v0, 0xff
/* 0042F0D8 32F70001 */  andi  $s7, $s7, 1
/* 0042F0DC 0017B82B */  sltu  $s7, $zero, $s7
/* 0042F0E0 32F700FF */  andi  $s7, $s7, 0xff
/* 0042F0E4 12E00007 */  beqz  $s7, .L0042F104
/* 0042F0E8 00000000 */   nop   
/* 0042F0EC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F0F0 24040020 */  li    $a0, 32
/* 0042F0F4 2405000B */  li    $a1, 11
/* 0042F0F8 0320F809 */  jalr  $t9
/* 0042F0FC 00000000 */   nop   
/* 0042F100 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F104:
/* 0042F104 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 0042F108 8F8488A4 */  lw     $a0, %got(load_table)($gp)
/* 0042F10C 02C02825 */  move  $a1, $s6
/* 0042F110 0320F809 */  jalr  $t9
/* 0042F114 03C03025 */   move  $a2, $fp
/* 0042F118 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F11C 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0042F120 02C02825 */  move  $a1, $s6
/* 0042F124 8F998370 */  lw    $t9, %call16(unaligned_loadstore)($gp)
/* 0042F128 03C03025 */  move  $a2, $fp
/* 0042F12C 0320F809 */  jalr  $t9
/* 0042F130 00000000 */   nop   
/* 0042F134 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F138 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0042F13C 91CE0000 */  lbu   $t6, ($t6)
/* 0042F140 15C00013 */  bnez  $t6, .L0042F190
/* 0042F144 00000000 */   nop   
/* 0042F148 92C90021 */  lbu   $t1, 0x21($s6)
/* 0042F14C 2401000E */  li    $at, 14
/* 0042F150 3138001F */  andi  $t8, $t1, 0x1f
/* 0042F154 1701000E */  bne   $t8, $at, .L0042F190
/* 0042F158 00000000 */   nop   
/* 0042F15C 8ED10028 */  lw    $s1, 0x28($s6)
/* 0042F160 240D0020 */  li    $t5, 32
/* 0042F164 2A210004 */  slti  $at, $s1, 4
/* 0042F168 10200009 */  beqz  $at, .L0042F190
/* 0042F16C 00000000 */   nop   
/* 0042F170 0011C8C0 */  sll   $t9, $s1, 3
/* 0042F174 01B93023 */  subu  $a2, $t5, $t9
/* 0042F178 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042F17C 2404004F */  li    $a0, 79
/* 0042F180 03C02825 */  move  $a1, $fp
/* 0042F184 0320F809 */  jalr  $t9
/* 0042F188 00003825 */   move  $a3, $zero
/* 0042F18C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F190:
/* 0042F190 12E00007 */  beqz  $s7, .L0042F1B0
/* 0042F194 00000000 */   nop   
/* 0042F198 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F19C 24040020 */  li    $a0, 32
/* 0042F1A0 2405000C */  li    $a1, 12
/* 0042F1A4 0320F809 */  jalr  $t9
/* 0042F1A8 00000000 */   nop   
/* 0042F1AC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F1B0:
/* 0042F1B0 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042F1B4 10000F3F */  b     .L00432EB4
/* 0042F1B8 90840000 */   lbu   $a0, ($a0)
.L0042F1BC:
/* 0042F1BC 8ED20000 */  lw    $s2, ($s6)
/* 0042F1C0 96D70022 */  lhu   $s7, 0x22($s6)
/* 0042F1C4 24010001 */  li    $at, 1
/* 0042F1C8 964C0014 */  lhu   $t4, 0x14($s2)
/* 0042F1CC 32F70001 */  andi  $s7, $s7, 1
/* 0042F1D0 0017B82B */  sltu  $s7, $zero, $s7
/* 0042F1D4 158100C0 */  bne   $t4, $at, .L0042F4D8
/* 0042F1D8 32F700FF */   andi  $s7, $s7, 0xff
/* 0042F1DC 8F8889E4 */  lw     $t0, %got(pic_level)($gp)
/* 0042F1E0 8D080000 */  lw    $t0, ($t0)
/* 0042F1E4 150000BC */  bnez  $t0, .L0042F4D8
/* 0042F1E8 00000000 */   nop   
/* 0042F1EC 924B0020 */  lbu   $t3, 0x20($s2)
/* 0042F1F0 24010001 */  li    $at, 1
/* 0042F1F4 156100B8 */  bne   $t3, $at, .L0042F4D8
/* 0042F1F8 00000000 */   nop   
/* 0042F1FC 8E430004 */  lw    $v1, 4($s2)
/* 0042F200 24010001 */  li    $at, 1
/* 0042F204 946A0014 */  lhu   $t2, 0x14($v1)
/* 0042F208 154100B3 */  bne   $t2, $at, .L0042F4D8
/* 0042F20C 00000000 */   nop   
/* 0042F210 906F0020 */  lbu   $t7, 0x20($v1)
/* 0042F214 24010047 */  li    $at, 71
/* 0042F218 15E100AF */  bne   $t7, $at, .L0042F4D8
/* 0042F21C 00000000 */   nop   
/* 0042F220 906E0021 */  lbu   $t6, 0x21($v1)
/* 0042F224 3C016800 */  lui   $at, 0x6800
/* 0042F228 000E4E00 */  sll   $t1, $t6, 0x18
/* 0042F22C 0009C742 */  srl   $t8, $t1, 0x1d
/* 0042F230 2F0D0020 */  sltiu $t5, $t8, 0x20
/* 0042F234 000DC823 */  negu  $t9, $t5
/* 0042F238 03216024 */  and   $t4, $t9, $at
/* 0042F23C 030C4004 */  sllv  $t0, $t4, $t8
/* 0042F240 050100A5 */  bgez  $t0, .L0042F4D8
/* 0042F244 00000000 */   nop   
/* 0042F248 8F9985A0 */  lw    $t9, %call16(get_sym_kind)($gp)
/* 0042F24C 8C640024 */  lw    $a0, 0x24($v1)
/* 0042F250 0320F809 */  jalr  $t9
/* 0042F254 00000000 */   nop   
/* 0042F258 24010005 */  li    $at, 5
/* 0042F25C 1041009E */  beq   $v0, $at, .L0042F4D8
/* 0042F260 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042F264 8E4B0004 */  lw    $t3, 4($s2)
/* 0042F268 24010004 */  li    $at, 4
/* 0042F26C 916A0021 */  lbu   $t2, 0x21($t3)
/* 0042F270 000A7E00 */  sll   $t7, $t2, 0x18
/* 0042F274 000F7742 */  srl   $t6, $t7, 0x1d
/* 0042F278 15C10036 */  bne   $t6, $at, .L0042F354
/* 0042F27C 00000000 */   nop   
/* 0042F280 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042F284 8E440000 */  lw    $a0, ($s2)
/* 0042F288 24050048 */  li    $a1, 72
/* 0042F28C 0320F809 */  jalr  $t9
/* 0042F290 00000000 */   nop   
/* 0042F294 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F298 8E440000 */  lw    $a0, ($s2)
/* 0042F29C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042F2A0 0320F809 */  jalr  $t9
/* 0042F2A4 00000000 */   nop   
/* 0042F2A8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F2AC 305300FF */  andi  $s3, $v0, 0xff
/* 0042F2B0 02C02025 */  move  $a0, $s6
/* 0042F2B4 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042F2B8 03C02825 */  move  $a1, $fp
/* 0042F2BC 0320F809 */  jalr  $t9
/* 0042F2C0 00000000 */   nop   
/* 0042F2C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F2C8 12E00007 */  beqz  $s7, .L0042F2E8
/* 0042F2CC 305E00FF */   andi  $fp, $v0, 0xff
/* 0042F2D0 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F2D4 24040020 */  li    $a0, 32
/* 0042F2D8 2405000B */  li    $a1, 11
/* 0042F2DC 0320F809 */  jalr  $t9
/* 0042F2E0 00000000 */   nop   
/* 0042F2E4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F2E8:
/* 0042F2E8 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 0042F2EC 8F8488A4 */  lw     $a0, %got(load_table)($gp)
/* 0042F2F0 02C02825 */  move  $a1, $s6
/* 0042F2F4 0320F809 */  jalr  $t9
/* 0042F2F8 03C03025 */   move  $a2, $fp
/* 0042F2FC 8E430004 */  lw    $v1, 4($s2)
/* 0042F300 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F304 8EC9002C */  lw    $t1, 0x2c($s6)
/* 0042F308 8C790024 */  lw    $t9, 0x24($v1)
/* 0042F30C 8C6D002C */  lw    $t5, 0x2c($v1)
/* 0042F310 02C02025 */  move  $a0, $s6
/* 0042F314 AFB90010 */  sw    $t9, 0x10($sp)
/* 0042F318 8F998358 */  lw    $t9, %call16(iloadistore)($gp)
/* 0042F31C 3045FFFF */  andi  $a1, $v0, 0xffff
/* 0042F320 03C03025 */  move  $a2, $fp
/* 0042F324 AFB30014 */  sw    $s3, 0x14($sp)
/* 0042F328 0320F809 */  jalr  $t9
/* 0042F32C 012D3821 */   addu  $a3, $t1, $t5
/* 0042F330 12E000DF */  beqz  $s7, .L0042F6B0
/* 0042F334 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042F338 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F33C 24040020 */  li    $a0, 32
/* 0042F340 2405000C */  li    $a1, 12
/* 0042F344 0320F809 */  jalr  $t9
/* 0042F348 00000000 */   nop   
/* 0042F34C 100000D8 */  b     .L0042F6B0
/* 0042F350 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042F354:
/* 0042F354 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042F358 8E440000 */  lw    $a0, ($s2)
/* 0042F35C 24050048 */  li    $a1, 72
/* 0042F360 0320F809 */  jalr  $t9
/* 0042F364 00000000 */   nop   
/* 0042F368 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F36C 8E440000 */  lw    $a0, ($s2)
/* 0042F370 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042F374 0320F809 */  jalr  $t9
/* 0042F378 00000000 */   nop   
/* 0042F37C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F380 305300FF */  andi  $s3, $v0, 0xff
/* 0042F384 02C02025 */  move  $a0, $s6
/* 0042F388 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042F38C 03C02825 */  move  $a1, $fp
/* 0042F390 0320F809 */  jalr  $t9
/* 0042F394 00000000 */   nop   
/* 0042F398 92C70021 */  lbu   $a3, 0x21($s6)
/* 0042F39C 3C01000C */  lui   $at, 0xc
/* 0042F3A0 34218000 */  ori   $at, $at, 0x8000
/* 0042F3A4 30E7001F */  andi  $a3, $a3, 0x1f
/* 0042F3A8 2CEC0020 */  sltiu $t4, $a3, 0x20
/* 0042F3AC 000CC023 */  negu  $t8, $t4
/* 0042F3B0 03014024 */  and   $t0, $t8, $at
/* 0042F3B4 00E85804 */  sllv  $t3, $t0, $a3
/* 0042F3B8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F3BC 05600008 */  bltz  $t3, .L0042F3E0
/* 0042F3C0 305E00FF */   andi  $fp, $v0, 0xff
/* 0042F3C4 2CEA0020 */  sltiu $t2, $a3, 0x20
/* 0042F3C8 000A7823 */  negu  $t7, $t2
/* 0042F3CC 3C010501 */  lui   $at, 0x501
/* 0042F3D0 01E17024 */  and   $t6, $t7, $at
/* 0042F3D4 00EE4804 */  sllv  $t1, $t6, $a3
/* 0042F3D8 0523000F */  bgezl $t1, .L0042F418
/* 0042F3DC A3A20186 */   sb    $v0, 0x186($sp)
.L0042F3E0:
/* 0042F3E0 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042F3E4 00002025 */  move  $a0, $zero
/* 0042F3E8 24050001 */  li    $a1, 1
/* 0042F3EC 0320F809 */  jalr  $t9
/* 0042F3F0 00000000 */   nop   
/* 0042F3F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F3F8 A3A20186 */  sb    $v0, 0x186($sp)
/* 0042F3FC 304400FF */  andi  $a0, $v0, 0xff
/* 0042F400 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042F404 0320F809 */  jalr  $t9
/* 0042F408 00000000 */   nop   
/* 0042F40C 10000002 */  b     .L0042F418
/* 0042F410 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042F414 A3A20186 */  sb    $v0, 0x186($sp)
.L0042F418:
/* 0042F418 12E00007 */  beqz  $s7, .L0042F438
/* 0042F41C 00000000 */   nop   
/* 0042F420 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F424 24040020 */  li    $a0, 32
/* 0042F428 2405000B */  li    $a1, 11
/* 0042F42C 0320F809 */  jalr  $t9
/* 0042F430 00000000 */   nop   
/* 0042F434 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F438:
/* 0042F438 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0042F43C 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 0042F440 24040002 */  li    $a0, 2
/* 0042F444 93A50186 */  lbu   $a1, 0x186($sp)
/* 0042F448 02603825 */  move  $a3, $s3
/* 0042F44C 0320F809 */  jalr  $t9
/* 0042F450 90C60000 */   lbu   $a2, ($a2)
/* 0042F454 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F458 02C02825 */  move  $a1, $s6
/* 0042F45C 03C03025 */  move  $a2, $fp
/* 0042F460 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 0042F464 8F8488A4 */  lw     $a0, %got(load_table)($gp)
/* 0042F468 0320F809 */  jalr  $t9
/* 0042F46C 00000000 */   nop   
/* 0042F470 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F474 3055FFFF */  andi  $s5, $v0, 0xffff
/* 0042F478 8E440004 */  lw    $a0, 4($s2)
/* 0042F47C 8F998404 */  lw    $t9, %call16(frame_offset)($gp)
/* 0042F480 0320F809 */  jalr  $t9
/* 0042F484 00000000 */   nop   
/* 0042F488 93B90186 */  lbu   $t9, 0x186($sp)
/* 0042F48C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F490 8ECD002C */  lw    $t5, 0x2c($s6)
/* 0042F494 AFB90014 */  sw    $t9, 0x14($sp)
/* 0042F498 8F998358 */  lw    $t9, %call16(iloadistore)($gp)
/* 0042F49C 02C02025 */  move  $a0, $s6
/* 0042F4A0 02A02825 */  move  $a1, $s5
/* 0042F4A4 03C03025 */  move  $a2, $fp
/* 0042F4A8 AFA00010 */  sw    $zero, 0x10($sp)
/* 0042F4AC 0320F809 */  jalr  $t9
/* 0042F4B0 01A23821 */   addu  $a3, $t5, $v0
/* 0042F4B4 12E0007E */  beqz  $s7, .L0042F6B0
/* 0042F4B8 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042F4BC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F4C0 24040020 */  li    $a0, 32
/* 0042F4C4 2405000C */  li    $a1, 12
/* 0042F4C8 0320F809 */  jalr  $t9
/* 0042F4CC 00000000 */   nop   
/* 0042F4D0 10000077 */  b     .L0042F6B0
/* 0042F4D4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042F4D8:
/* 0042F4D8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042F4DC 8EC40000 */  lw    $a0, ($s6)
/* 0042F4E0 24050048 */  li    $a1, 72
/* 0042F4E4 0320F809 */  jalr  $t9
/* 0042F4E8 00000000 */   nop   
/* 0042F4EC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F4F0 8EC40000 */  lw    $a0, ($s6)
/* 0042F4F4 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042F4F8 0320F809 */  jalr  $t9
/* 0042F4FC 00000000 */   nop   
/* 0042F500 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F504 305300FF */  andi  $s3, $v0, 0xff
/* 0042F508 02C02025 */  move  $a0, $s6
/* 0042F50C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042F510 03C02825 */  move  $a1, $fp
/* 0042F514 0320F809 */  jalr  $t9
/* 0042F518 00000000 */   nop   
/* 0042F51C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F520 12E00007 */  beqz  $s7, .L0042F540
/* 0042F524 305E00FF */   andi  $fp, $v0, 0xff
/* 0042F528 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F52C 24040020 */  li    $a0, 32
/* 0042F530 2405000B */  li    $a1, 11
/* 0042F534 0320F809 */  jalr  $t9
/* 0042F538 00000000 */   nop   
/* 0042F53C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F540:
/* 0042F540 92CC0020 */  lbu   $t4, 0x20($s6)
/* 0042F544 24010036 */  li    $at, 54
/* 0042F548 15810031 */  bne   $t4, $at, .L0042F610
/* 0042F54C 00000000 */   nop   
/* 0042F550 92580020 */  lbu   $t8, 0x20($s2)
/* 0042F554 24010001 */  li    $at, 1
/* 0042F558 1701002D */  bne   $t8, $at, .L0042F610
/* 0042F55C 00000000 */   nop   
/* 0042F560 8E510000 */  lw    $s1, ($s2)
/* 0042F564 2401005B */  li    $at, 91
/* 0042F568 92220020 */  lbu   $v0, 0x20($s1)
/* 0042F56C 54410004 */  bnel  $v0, $at, .L0042F580
/* 0042F570 24010052 */   li    $at, 82
/* 0042F574 8E310000 */  lw    $s1, ($s1)
/* 0042F578 92220020 */  lbu   $v0, 0x20($s1)
/* 0042F57C 24010052 */  li    $at, 82
.L0042F580:
/* 0042F580 14410023 */  bne   $v0, $at, .L0042F610
/* 0042F584 00000000 */   nop   
/* 0042F588 8F928BC0 */  lw     $s2, %got(noalias_regs)($gp)
/* 0042F58C 24100001 */  li    $s0, 1
/* 0042F590 26520004 */  addiu $s2, $s2, 4
.L0042F594:
/* 0042F594 92280019 */  lbu   $t0, 0x19($s1)
/* 0042F598 8E420000 */  lw    $v0, ($s2)
/* 0042F59C 240F0001 */  li    $t7, 1
/* 0042F5A0 00085E00 */  sll   $t3, $t0, 0x18
/* 0042F5A4 000B5642 */  srl   $t2, $t3, 0x19
/* 0042F5A8 014F7004 */  sllv  $t6, $t7, $t2
/* 0042F5AC 004E4824 */  and   $t1, $v0, $t6
/* 0042F5B0 51200014 */  beql  $t1, $zero, .L0042F604
/* 0042F5B4 26100001 */   addiu $s0, $s0, 1
/* 0042F5B8 8F998BC0 */  lw     $t9, %got(noalias_regs)($gp)
/* 0042F5BC 00136880 */  sll   $t5, $s3, 2
/* 0042F5C0 01B96021 */  addu  $t4, $t5, $t9
/* 0042F5C4 8D980000 */  lw    $t8, ($t4)
/* 0042F5C8 03024024 */  and   $t0, $t8, $v0
/* 0042F5CC 5500000D */  bnel  $t0, $zero, .L0042F604
/* 0042F5D0 26100001 */   addiu $s0, $s0, 1
/* 0042F5D4 8F8F8BB4 */  lw     $t7, %got(noalias_on_off)($gp)
/* 0042F5D8 240B0001 */  li    $t3, 1
/* 0042F5DC 24040030 */  li    $a0, 48
/* 0042F5E0 020F5021 */  addu  $t2, $s0, $t7
/* 0042F5E4 A14B0000 */  sb    $t3, ($t2)
/* 0042F5E8 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 0042F5EC 02602825 */  move  $a1, $s3
/* 0042F5F0 02003025 */  move  $a2, $s0
/* 0042F5F4 0320F809 */  jalr  $t9
/* 0042F5F8 00000000 */   nop   
/* 0042F5FC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F600 26100001 */  addiu $s0, $s0, 1
.L0042F604:
/* 0042F604 24010020 */  li    $at, 32
/* 0042F608 1601FFE2 */  bne   $s0, $at, .L0042F594
/* 0042F60C 26520004 */   addiu $s2, $s2, 4
.L0042F610:
/* 0042F610 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 0042F614 8F8488A4 */  lw     $a0, %got(load_table)($gp)
/* 0042F618 02C02825 */  move  $a1, $s6
/* 0042F61C 0320F809 */  jalr  $t9
/* 0042F620 03C03025 */   move  $a2, $fp
/* 0042F624 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F628 02C02025 */  move  $a0, $s6
/* 0042F62C 3045FFFF */  andi  $a1, $v0, 0xffff
/* 0042F630 8F998358 */  lw    $t9, %call16(iloadistore)($gp)
/* 0042F634 03C03025 */  move  $a2, $fp
/* 0042F638 8EC7002C */  lw    $a3, 0x2c($s6)
/* 0042F63C AFA00010 */  sw    $zero, 0x10($sp)
/* 0042F640 0320F809 */  jalr  $t9
/* 0042F644 AFB30014 */   sw    $s3, 0x14($sp)
/* 0042F648 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F64C 24100001 */  li    $s0, 1
/* 0042F650 8F918BB4 */  lw     $s1, %got(noalias_on_off)($gp)
/* 0042F654 26310001 */  addiu $s1, $s1, 1
.L0042F658:
/* 0042F658 922E0000 */  lbu   $t6, ($s1)
/* 0042F65C 51C00009 */  beql  $t6, $zero, .L0042F684
/* 0042F660 26100001 */   addiu $s0, $s0, 1
/* 0042F664 A2200000 */  sb    $zero, ($s1)
/* 0042F668 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 0042F66C 24040031 */  li    $a0, 49
/* 0042F670 02602825 */  move  $a1, $s3
/* 0042F674 0320F809 */  jalr  $t9
/* 0042F678 02003025 */   move  $a2, $s0
/* 0042F67C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F680 26100001 */  addiu $s0, $s0, 1
.L0042F684:
/* 0042F684 24010020 */  li    $at, 32
/* 0042F688 1601FFF3 */  bne   $s0, $at, .L0042F658
/* 0042F68C 26310001 */   addiu $s1, $s1, 1
/* 0042F690 12E00007 */  beqz  $s7, .L0042F6B0
/* 0042F694 00000000 */   nop   
/* 0042F698 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F69C 24040020 */  li    $a0, 32
/* 0042F6A0 2405000C */  li    $a1, 12
/* 0042F6A4 0320F809 */  jalr  $t9
/* 0042F6A8 00000000 */   nop   
/* 0042F6AC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F6B0:
/* 0042F6B0 8F89898C */  lw     $t1, %got(lsb_first)($gp)
/* 0042F6B4 91290000 */  lbu   $t1, ($t1)
/* 0042F6B8 15200012 */  bnez  $t1, .L0042F704
/* 0042F6BC 00000000 */   nop   
/* 0042F6C0 92CD0021 */  lbu   $t5, 0x21($s6)
/* 0042F6C4 2401000E */  li    $at, 14
/* 0042F6C8 31B9001F */  andi  $t9, $t5, 0x1f
/* 0042F6CC 1721000D */  bne   $t9, $at, .L0042F704
/* 0042F6D0 00000000 */   nop   
/* 0042F6D4 8ED10028 */  lw    $s1, 0x28($s6)
/* 0042F6D8 2404004F */  li    $a0, 79
/* 0042F6DC 03C02825 */  move  $a1, $fp
/* 0042F6E0 2A210004 */  slti  $at, $s1, 4
/* 0042F6E4 10200007 */  beqz  $at, .L0042F704
/* 0042F6E8 001160C0 */   sll   $t4, $s1, 3
/* 0042F6EC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042F6F0 24180020 */  li    $t8, 32
/* 0042F6F4 030C3023 */  subu  $a2, $t8, $t4
/* 0042F6F8 0320F809 */  jalr  $t9
/* 0042F6FC 00003825 */   move  $a3, $zero
/* 0042F700 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F704:
/* 0042F704 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042F708 10000DEA */  b     .L00432EB4
/* 0042F70C 90840000 */   lbu   $a0, ($a0)
.L0042F710:
/* 0042F710 96D70022 */  lhu   $s7, 0x22($s6)
/* 0042F714 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042F718 8EC40000 */  lw    $a0, ($s6)
/* 0042F71C 32F70001 */  andi  $s7, $s7, 1
/* 0042F720 0017B82B */  sltu  $s7, $zero, $s7
/* 0042F724 32F700FF */  andi  $s7, $s7, 0xff
/* 0042F728 24050048 */  li    $a1, 72
/* 0042F72C 0320F809 */  jalr  $t9
/* 0042F730 00809025 */   move  $s2, $a0
/* 0042F734 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F738 8EC40000 */  lw    $a0, ($s6)
/* 0042F73C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042F740 0320F809 */  jalr  $t9
/* 0042F744 00000000 */   nop   
/* 0042F748 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F74C 305300FF */  andi  $s3, $v0, 0xff
/* 0042F750 02C02025 */  move  $a0, $s6
/* 0042F754 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0042F758 03C02825 */  move  $a1, $fp
/* 0042F75C 0320F809 */  jalr  $t9
/* 0042F760 00000000 */   nop   
/* 0042F764 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F768 12E00007 */  beqz  $s7, .L0042F788
/* 0042F76C 305E00FF */   andi  $fp, $v0, 0xff
/* 0042F770 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F774 24040020 */  li    $a0, 32
/* 0042F778 2405000B */  li    $a1, 11
/* 0042F77C 0320F809 */  jalr  $t9
/* 0042F780 00000000 */   nop   
/* 0042F784 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F788:
/* 0042F788 92480020 */  lbu   $t0, 0x20($s2)
/* 0042F78C 24010001 */  li    $at, 1
/* 0042F790 1501002D */  bne   $t0, $at, .L0042F848
/* 0042F794 00000000 */   nop   
/* 0042F798 8E510000 */  lw    $s1, ($s2)
/* 0042F79C 2401005B */  li    $at, 91
/* 0042F7A0 92220020 */  lbu   $v0, 0x20($s1)
/* 0042F7A4 54410004 */  bnel  $v0, $at, .L0042F7B8
/* 0042F7A8 24010052 */   li    $at, 82
/* 0042F7AC 8E310000 */  lw    $s1, ($s1)
/* 0042F7B0 92220020 */  lbu   $v0, 0x20($s1)
/* 0042F7B4 24010052 */  li    $at, 82
.L0042F7B8:
/* 0042F7B8 14410023 */  bne   $v0, $at, .L0042F848
/* 0042F7BC 00000000 */   nop   
/* 0042F7C0 8F928BC0 */  lw     $s2, %got(noalias_regs)($gp)
/* 0042F7C4 24100001 */  li    $s0, 1
/* 0042F7C8 26520004 */  addiu $s2, $s2, 4
.L0042F7CC:
/* 0042F7CC 922F0019 */  lbu   $t7, 0x19($s1)
/* 0042F7D0 8E420000 */  lw    $v0, ($s2)
/* 0042F7D4 240E0001 */  li    $t6, 1
/* 0042F7D8 000F5E00 */  sll   $t3, $t7, 0x18
/* 0042F7DC 000B5642 */  srl   $t2, $t3, 0x19
/* 0042F7E0 014E4804 */  sllv  $t1, $t6, $t2
/* 0042F7E4 00496824 */  and   $t5, $v0, $t1
/* 0042F7E8 51A00014 */  beql  $t5, $zero, .L0042F83C
/* 0042F7EC 26100001 */   addiu $s0, $s0, 1
/* 0042F7F0 8F988BC0 */  lw     $t8, %got(noalias_regs)($gp)
/* 0042F7F4 0013C880 */  sll   $t9, $s3, 2
/* 0042F7F8 03386021 */  addu  $t4, $t9, $t8
/* 0042F7FC 8D880000 */  lw    $t0, ($t4)
/* 0042F800 01027824 */  and   $t7, $t0, $v0
/* 0042F804 55E0000D */  bnel  $t7, $zero, .L0042F83C
/* 0042F808 26100001 */   addiu $s0, $s0, 1
/* 0042F80C 8F8E8BB4 */  lw     $t6, %got(noalias_on_off)($gp)
/* 0042F810 240B0001 */  li    $t3, 1
/* 0042F814 24040030 */  li    $a0, 48
/* 0042F818 020E5021 */  addu  $t2, $s0, $t6
/* 0042F81C A14B0000 */  sb    $t3, ($t2)
/* 0042F820 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 0042F824 02602825 */  move  $a1, $s3
/* 0042F828 02003025 */  move  $a2, $s0
/* 0042F82C 0320F809 */  jalr  $t9
/* 0042F830 00000000 */   nop   
/* 0042F834 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F838 26100001 */  addiu $s0, $s0, 1
.L0042F83C:
/* 0042F83C 24010020 */  li    $at, 32
/* 0042F840 1601FFE2 */  bne   $s0, $at, .L0042F7CC
/* 0042F844 26520004 */   addiu $s2, $s2, 4
.L0042F848:
/* 0042F848 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 0042F84C 8F8488A4 */  lw     $a0, %got(load_table)($gp)
/* 0042F850 02C02825 */  move  $a1, $s6
/* 0042F854 0320F809 */  jalr  $t9
/* 0042F858 03C03025 */   move  $a2, $fp
/* 0042F85C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F860 02C02025 */  move  $a0, $s6
/* 0042F864 3045FFFF */  andi  $a1, $v0, 0xffff
/* 0042F868 8F99835C */  lw    $t9, %call16(rloadrstore)($gp)
/* 0042F86C 03C03025 */  move  $a2, $fp
/* 0042F870 8EC70024 */  lw    $a3, 0x24($s6)
/* 0042F874 0320F809 */  jalr  $t9
/* 0042F878 AFB30010 */   sw    $s3, 0x10($sp)
/* 0042F87C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F880 24100001 */  li    $s0, 1
/* 0042F884 8F918BB4 */  lw     $s1, %got(noalias_on_off)($gp)
/* 0042F888 26310001 */  addiu $s1, $s1, 1
.L0042F88C:
/* 0042F88C 92290000 */  lbu   $t1, ($s1)
/* 0042F890 51200009 */  beql  $t1, $zero, .L0042F8B8
/* 0042F894 26100001 */   addiu $s0, $s0, 1
/* 0042F898 A2200000 */  sb    $zero, ($s1)
/* 0042F89C 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 0042F8A0 24040031 */  li    $a0, 49
/* 0042F8A4 02602825 */  move  $a1, $s3
/* 0042F8A8 0320F809 */  jalr  $t9
/* 0042F8AC 02003025 */   move  $a2, $s0
/* 0042F8B0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F8B4 26100001 */  addiu $s0, $s0, 1
.L0042F8B8:
/* 0042F8B8 24010020 */  li    $at, 32
/* 0042F8BC 1601FFF3 */  bne   $s0, $at, .L0042F88C
/* 0042F8C0 26310001 */   addiu $s1, $s1, 1
/* 0042F8C4 12E00007 */  beqz  $s7, .L0042F8E4
/* 0042F8C8 00000000 */   nop   
/* 0042F8CC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042F8D0 24040020 */  li    $a0, 32
/* 0042F8D4 2405000C */  li    $a1, 12
/* 0042F8D8 0320F809 */  jalr  $t9
/* 0042F8DC 00000000 */   nop   
/* 0042F8E0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F8E4:
/* 0042F8E4 8F8D898C */  lw     $t5, %got(lsb_first)($gp)
/* 0042F8E8 91AD0000 */  lbu   $t5, ($t5)
/* 0042F8EC 15A00012 */  bnez  $t5, .L0042F938
/* 0042F8F0 00000000 */   nop   
/* 0042F8F4 92D90021 */  lbu   $t9, 0x21($s6)
/* 0042F8F8 2401000E */  li    $at, 14
/* 0042F8FC 3338001F */  andi  $t8, $t9, 0x1f
/* 0042F900 1701000D */  bne   $t8, $at, .L0042F938
/* 0042F904 00000000 */   nop   
/* 0042F908 8ED10028 */  lw    $s1, 0x28($s6)
/* 0042F90C 2404004F */  li    $a0, 79
/* 0042F910 03C02825 */  move  $a1, $fp
/* 0042F914 2A210004 */  slti  $at, $s1, 4
/* 0042F918 10200007 */  beqz  $at, .L0042F938
/* 0042F91C 001160C0 */   sll   $t4, $s1, 3
/* 0042F920 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042F924 24080020 */  li    $t0, 32
/* 0042F928 010C3023 */  subu  $a2, $t0, $t4
/* 0042F92C 0320F809 */  jalr  $t9
/* 0042F930 00003825 */   move  $a3, $zero
/* 0042F934 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042F938:
/* 0042F938 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0042F93C 10000D5D */  b     .L00432EB4
/* 0042F940 90840000 */   lbu   $a0, ($a0)
.L0042F944:
/* 0042F944 8ED00004 */  lw    $s0, 4($s6)
/* 0042F948 24010018 */  li    $at, 24
/* 0042F94C 920F0020 */  lbu   $t7, 0x20($s0)
/* 0042F950 15E1001D */  bne   $t7, $at, .L0042F9C8
/* 0042F954 00000000 */   nop   
/* 0042F958 92020021 */  lbu   $v0, 0x21($s0)
/* 0042F95C 24010006 */  li    $at, 6
/* 0042F960 3042001F */  andi  $v0, $v0, 0x1f
/* 0042F964 10410008 */  beq   $v0, $at, .L0042F988
/* 0042F968 24010005 */   li    $at, 5
/* 0042F96C 14410016 */  bne   $v0, $at, .L0042F9C8
/* 0042F970 00000000 */   nop   
/* 0042F974 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0042F978 24010001 */  li    $at, 1
/* 0042F97C 91CE0000 */  lbu   $t6, ($t6)
/* 0042F980 15C10011 */  bne   $t6, $at, .L0042F9C8
/* 0042F984 00000000 */   nop   
.L0042F988:
/* 0042F988 920B0028 */  lbu   $t3, 0x28($s0)
/* 0042F98C 2401000C */  li    $at, 12
/* 0042F990 1561000D */  bne   $t3, $at, .L0042F9C8
/* 0042F994 00000000 */   nop   
/* 0042F998 960A0014 */  lhu   $t2, 0x14($s0)
/* 0042F99C 24010001 */  li    $at, 1
/* 0042F9A0 15410009 */  bne   $t2, $at, .L0042F9C8
/* 0042F9A4 00000000 */   nop   
/* 0042F9A8 8EC90028 */  lw    $t1, 0x28($s6)
/* 0042F9AC 24010004 */  li    $at, 4
/* 0042F9B0 15210005 */  bne   $t1, $at, .L0042F9C8
/* 0042F9B4 00000000 */   nop   
/* 0042F9B8 8E0D0010 */  lw    $t5, 0x10($s0)
/* 0042F9BC 8F8188E0 */  lw     $at, %got(move_cvt_flag)($gp)
/* 0042F9C0 000DCA02 */  srl   $t9, $t5, 8
/* 0042F9C4 AC390000 */  sw    $t9, ($at)
.L0042F9C8:
/* 0042F9C8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042F9CC 02002025 */  move  $a0, $s0
/* 0042F9D0 24050048 */  li    $a1, 72
/* 0042F9D4 0320F809 */  jalr  $t9
/* 0042F9D8 00000000 */   nop   
/* 0042F9DC 8ED20000 */  lw    $s2, ($s6)
/* 0042F9E0 96D70022 */  lhu   $s7, 0x22($s6)
/* 0042F9E4 24010001 */  li    $at, 1
/* 0042F9E8 96580014 */  lhu   $t8, 0x14($s2)
/* 0042F9EC 32F70001 */  andi  $s7, $s7, 1
/* 0042F9F0 0017B82B */  sltu  $s7, $zero, $s7
/* 0042F9F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042F9F8 17010114 */  bne   $t8, $at, .L0042FE4C
/* 0042F9FC 32F700FF */   andi  $s7, $s7, 0xff
/* 0042FA00 8F8889E4 */  lw     $t0, %got(pic_level)($gp)
/* 0042FA04 8D080000 */  lw    $t0, ($t0)
/* 0042FA08 15000110 */  bnez  $t0, .L0042FE4C
/* 0042FA0C 00000000 */   nop   
/* 0042FA10 924C0020 */  lbu   $t4, 0x20($s2)
/* 0042FA14 24010001 */  li    $at, 1
/* 0042FA18 1581010C */  bne   $t4, $at, .L0042FE4C
/* 0042FA1C 00000000 */   nop   
/* 0042FA20 8E430004 */  lw    $v1, 4($s2)
/* 0042FA24 24010001 */  li    $at, 1
/* 0042FA28 946F0014 */  lhu   $t7, 0x14($v1)
/* 0042FA2C 15E10107 */  bne   $t7, $at, .L0042FE4C
/* 0042FA30 00000000 */   nop   
/* 0042FA34 906E0020 */  lbu   $t6, 0x20($v1)
/* 0042FA38 24010047 */  li    $at, 71
/* 0042FA3C 15C10103 */  bne   $t6, $at, .L0042FE4C
/* 0042FA40 00000000 */   nop   
/* 0042FA44 906B0021 */  lbu   $t3, 0x21($v1)
/* 0042FA48 3C016800 */  lui   $at, 0x6800
/* 0042FA4C 000B5600 */  sll   $t2, $t3, 0x18
/* 0042FA50 000A4F42 */  srl   $t1, $t2, 0x1d
/* 0042FA54 2D2D0020 */  sltiu $t5, $t1, 0x20
/* 0042FA58 000DC823 */  negu  $t9, $t5
/* 0042FA5C 0321C024 */  and   $t8, $t9, $at
/* 0042FA60 01384004 */  sllv  $t0, $t8, $t1
/* 0042FA64 050100F9 */  bgez  $t0, .L0042FE4C
/* 0042FA68 00000000 */   nop   
/* 0042FA6C 8F9985A0 */  lw    $t9, %call16(get_sym_kind)($gp)
/* 0042FA70 8C640024 */  lw    $a0, 0x24($v1)
/* 0042FA74 0320F809 */  jalr  $t9
/* 0042FA78 00000000 */   nop   
/* 0042FA7C 24010005 */  li    $at, 5
/* 0042FA80 104100F2 */  beq   $v0, $at, .L0042FE4C
/* 0042FA84 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042FA88 8E4C0004 */  lw    $t4, 4($s2)
/* 0042FA8C 24010004 */  li    $at, 4
/* 0042FA90 918F0021 */  lbu   $t7, 0x21($t4)
/* 0042FA94 000F7600 */  sll   $t6, $t7, 0x18
/* 0042FA98 000E5F42 */  srl   $t3, $t6, 0x1d
/* 0042FA9C 1561006B */  bne   $t3, $at, .L0042FC4C
/* 0042FAA0 00000000 */   nop   
/* 0042FAA4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042FAA8 8E440000 */  lw    $a0, ($s2)
/* 0042FAAC 24050048 */  li    $a1, 72
/* 0042FAB0 0320F809 */  jalr  $t9
/* 0042FAB4 00000000 */   nop   
/* 0042FAB8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FABC 8EC40004 */  lw    $a0, 4($s6)
/* 0042FAC0 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042FAC4 0320F809 */  jalr  $t9
/* 0042FAC8 00000000 */   nop   
/* 0042FACC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FAD0 A3A20186 */  sb    $v0, 0x186($sp)
/* 0042FAD4 8F8A898C */  lw     $t2, %got(lsb_first)($gp)
/* 0042FAD8 914A0000 */  lbu   $t2, ($t2)
/* 0042FADC 15400022 */  bnez  $t2, .L0042FB68
/* 0042FAE0 00000000 */   nop   
/* 0042FAE4 92CD0021 */  lbu   $t5, 0x21($s6)
/* 0042FAE8 2401000E */  li    $at, 14
/* 0042FAEC 31B9001F */  andi  $t9, $t5, 0x1f
/* 0042FAF0 1721001D */  bne   $t9, $at, .L0042FB68
/* 0042FAF4 00000000 */   nop   
/* 0042FAF8 8ED80028 */  lw    $t8, 0x28($s6)
/* 0042FAFC 2B010004 */  slti  $at, $t8, 4
/* 0042FB00 10200019 */  beqz  $at, .L0042FB68
/* 0042FB04 00000000 */   nop   
/* 0042FB08 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042FB0C 00002025 */  move  $a0, $zero
/* 0042FB10 24050001 */  li    $a1, 1
/* 0042FB14 0320F809 */  jalr  $t9
/* 0042FB18 00000000 */   nop   
/* 0042FB1C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FB20 8EC90028 */  lw    $t1, 0x28($s6)
/* 0042FB24 240C0020 */  li    $t4, 32
/* 0042FB28 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042FB2C 000940C0 */  sll   $t0, $t1, 3
/* 0042FB30 305400FF */  andi  $s4, $v0, 0xff
/* 0042FB34 01883823 */  subu  $a3, $t4, $t0
/* 0042FB38 24040054 */  li    $a0, 84
/* 0042FB3C 304500FF */  andi  $a1, $v0, 0xff
/* 0042FB40 93A60186 */  lbu   $a2, 0x186($sp)
/* 0042FB44 0320F809 */  jalr  $t9
/* 0042FB48 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042FB4C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FB50 A3B40186 */  sb    $s4, 0x186($sp)
/* 0042FB54 02802025 */  move  $a0, $s4
/* 0042FB58 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042FB5C 0320F809 */  jalr  $t9
/* 0042FB60 00000000 */   nop   
/* 0042FB64 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042FB68:
/* 0042FB68 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042FB6C 8E440000 */  lw    $a0, ($s2)
/* 0042FB70 0320F809 */  jalr  $t9
/* 0042FB74 00000000 */   nop   
/* 0042FB78 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FB7C 12E00007 */  beqz  $s7, .L0042FB9C
/* 0042FB80 305300FF */   andi  $s3, $v0, 0xff
/* 0042FB84 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042FB88 24040020 */  li    $a0, 32
/* 0042FB8C 2405000B */  li    $a1, 11
/* 0042FB90 0320F809 */  jalr  $t9
/* 0042FB94 00000000 */   nop   
/* 0042FB98 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042FB9C:
/* 0042FB9C 8ED00004 */  lw    $s0, 4($s6)
/* 0042FBA0 8F8B88E0 */  lw     $t3, %got(move_cvt_flag)($gp)
/* 0042FBA4 8E0F0010 */  lw    $t7, 0x10($s0)
/* 0042FBA8 8D6B0000 */  lw    $t3, ($t3)
/* 0042FBAC 000F7202 */  srl   $t6, $t7, 8
/* 0042FBB0 15CB000A */  bne   $t6, $t3, .L0042FBDC
/* 0042FBB4 00000000 */   nop   
/* 0042FBB8 920A0021 */  lbu   $t2, 0x21($s0)
/* 0042FBBC 24010006 */  li    $at, 6
/* 0042FBC0 314D001F */  andi  $t5, $t2, 0x1f
/* 0042FBC4 15A10003 */  bne   $t5, $at, .L0042FBD4
/* 0042FBC8 00000000 */   nop   
/* 0042FBCC 1000000A */  b     .L0042FBF8
/* 0042FBD0 24150033 */   li    $s5, 51
.L0042FBD4:
/* 0042FBD4 10000008 */  b     .L0042FBF8
/* 0042FBD8 24150073 */   li    $s5, 115
.L0042FBDC:
/* 0042FBDC 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 0042FBE0 8F8488A8 */  lw     $a0, %got(store_table)($gp)
/* 0042FBE4 02C02825 */  move  $a1, $s6
/* 0042FBE8 0320F809 */  jalr  $t9
/* 0042FBEC 93A60186 */   lbu   $a2, 0x186($sp)
/* 0042FBF0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FBF4 3055FFFF */  andi  $s5, $v0, 0xffff
.L0042FBF8:
/* 0042FBF8 8E430004 */  lw    $v1, 4($s2)
/* 0042FBFC 8ED9002C */  lw    $t9, 0x2c($s6)
/* 0042FC00 02C02025 */  move  $a0, $s6
/* 0042FC04 8C78002C */  lw    $t8, 0x2c($v1)
/* 0042FC08 8C690024 */  lw    $t1, 0x24($v1)
/* 0042FC0C 02A02825 */  move  $a1, $s5
/* 0042FC10 03383821 */  addu  $a3, $t9, $t8
/* 0042FC14 8F998358 */  lw    $t9, %call16(iloadistore)($gp)
/* 0042FC18 93A60186 */  lbu   $a2, 0x186($sp)
/* 0042FC1C AFB30014 */  sw    $s3, 0x14($sp)
/* 0042FC20 0320F809 */  jalr  $t9
/* 0042FC24 AFA90010 */   sw    $t1, 0x10($sp)
/* 0042FC28 12E00133 */  beqz  $s7, .L004300F8
/* 0042FC2C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042FC30 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042FC34 24040020 */  li    $a0, 32
/* 0042FC38 2405000C */  li    $a1, 12
/* 0042FC3C 0320F809 */  jalr  $t9
/* 0042FC40 00000000 */   nop   
/* 0042FC44 1000012C */  b     .L004300F8
/* 0042FC48 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042FC4C:
/* 0042FC4C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042FC50 8E440000 */  lw    $a0, ($s2)
/* 0042FC54 24050048 */  li    $a1, 72
/* 0042FC58 0320F809 */  jalr  $t9
/* 0042FC5C 00000000 */   nop   
/* 0042FC60 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FC64 8EC40004 */  lw    $a0, 4($s6)
/* 0042FC68 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042FC6C 0320F809 */  jalr  $t9
/* 0042FC70 00000000 */   nop   
/* 0042FC74 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FC78 A3A20186 */  sb    $v0, 0x186($sp)
/* 0042FC7C 8F8C898C */  lw     $t4, %got(lsb_first)($gp)
/* 0042FC80 918C0000 */  lbu   $t4, ($t4)
/* 0042FC84 15800022 */  bnez  $t4, .L0042FD10
/* 0042FC88 00000000 */   nop   
/* 0042FC8C 92C80021 */  lbu   $t0, 0x21($s6)
/* 0042FC90 2401000E */  li    $at, 14
/* 0042FC94 310F001F */  andi  $t7, $t0, 0x1f
/* 0042FC98 15E1001D */  bne   $t7, $at, .L0042FD10
/* 0042FC9C 00000000 */   nop   
/* 0042FCA0 8ECE0028 */  lw    $t6, 0x28($s6)
/* 0042FCA4 29C10004 */  slti  $at, $t6, 4
/* 0042FCA8 10200019 */  beqz  $at, .L0042FD10
/* 0042FCAC 00000000 */   nop   
/* 0042FCB0 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042FCB4 00002025 */  move  $a0, $zero
/* 0042FCB8 24050001 */  li    $a1, 1
/* 0042FCBC 0320F809 */  jalr  $t9
/* 0042FCC0 00000000 */   nop   
/* 0042FCC4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FCC8 8ECB0028 */  lw    $t3, 0x28($s6)
/* 0042FCCC 240D0020 */  li    $t5, 32
/* 0042FCD0 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042FCD4 000B50C0 */  sll   $t2, $t3, 3
/* 0042FCD8 305400FF */  andi  $s4, $v0, 0xff
/* 0042FCDC 01AA3823 */  subu  $a3, $t5, $t2
/* 0042FCE0 24040054 */  li    $a0, 84
/* 0042FCE4 304500FF */  andi  $a1, $v0, 0xff
/* 0042FCE8 93A60186 */  lbu   $a2, 0x186($sp)
/* 0042FCEC 0320F809 */  jalr  $t9
/* 0042FCF0 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042FCF4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FCF8 A3B40186 */  sb    $s4, 0x186($sp)
/* 0042FCFC 02802025 */  move  $a0, $s4
/* 0042FD00 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042FD04 0320F809 */  jalr  $t9
/* 0042FD08 00000000 */   nop   
/* 0042FD0C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042FD10:
/* 0042FD10 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042FD14 8E440000 */  lw    $a0, ($s2)
/* 0042FD18 0320F809 */  jalr  $t9
/* 0042FD1C 00000000 */   nop   
/* 0042FD20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FD24 305300FF */  andi  $s3, $v0, 0xff
/* 0042FD28 00002025 */  move  $a0, $zero
/* 0042FD2C 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042FD30 24050001 */  li    $a1, 1
/* 0042FD34 0320F809 */  jalr  $t9
/* 0042FD38 00000000 */   nop   
/* 0042FD3C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FD40 305400FF */  andi  $s4, $v0, 0xff
/* 0042FD44 304400FF */  andi  $a0, $v0, 0xff
/* 0042FD48 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042FD4C 0320F809 */  jalr  $t9
/* 0042FD50 00000000 */   nop   
/* 0042FD54 12E00007 */  beqz  $s7, .L0042FD74
/* 0042FD58 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042FD5C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042FD60 24040020 */  li    $a0, 32
/* 0042FD64 2405000B */  li    $a1, 11
/* 0042FD68 0320F809 */  jalr  $t9
/* 0042FD6C 00000000 */   nop   
/* 0042FD70 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042FD74:
/* 0042FD74 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0042FD78 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 0042FD7C 24040002 */  li    $a0, 2
/* 0042FD80 02802825 */  move  $a1, $s4
/* 0042FD84 02603825 */  move  $a3, $s3
/* 0042FD88 0320F809 */  jalr  $t9
/* 0042FD8C 90C60000 */   lbu   $a2, ($a2)
/* 0042FD90 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FD94 8ED00004 */  lw    $s0, 4($s6)
/* 0042FD98 8F8988E0 */  lw     $t1, %got(move_cvt_flag)($gp)
/* 0042FD9C 8E190010 */  lw    $t9, 0x10($s0)
/* 0042FDA0 8D290000 */  lw    $t1, ($t1)
/* 0042FDA4 0019C202 */  srl   $t8, $t9, 8
/* 0042FDA8 1709000A */  bne   $t8, $t1, .L0042FDD4
/* 0042FDAC 00000000 */   nop   
/* 0042FDB0 920C0021 */  lbu   $t4, 0x21($s0)
/* 0042FDB4 24010006 */  li    $at, 6
/* 0042FDB8 3188001F */  andi  $t0, $t4, 0x1f
/* 0042FDBC 15010003 */  bne   $t0, $at, .L0042FDCC
/* 0042FDC0 00000000 */   nop   
/* 0042FDC4 1000000A */  b     .L0042FDF0
/* 0042FDC8 24150033 */   li    $s5, 51
.L0042FDCC:
/* 0042FDCC 10000008 */  b     .L0042FDF0
/* 0042FDD0 24150073 */   li    $s5, 115
.L0042FDD4:
/* 0042FDD4 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 0042FDD8 8F8488A8 */  lw     $a0, %got(store_table)($gp)
/* 0042FDDC 02C02825 */  move  $a1, $s6
/* 0042FDE0 0320F809 */  jalr  $t9
/* 0042FDE4 93A60186 */   lbu   $a2, 0x186($sp)
/* 0042FDE8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FDEC 3055FFFF */  andi  $s5, $v0, 0xffff
.L0042FDF0:
/* 0042FDF0 8F998404 */  lw    $t9, %call16(frame_offset)($gp)
/* 0042FDF4 8E440004 */  lw    $a0, 4($s2)
/* 0042FDF8 0320F809 */  jalr  $t9
/* 0042FDFC 00000000 */   nop   
/* 0042FE00 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FE04 8ECF002C */  lw    $t7, 0x2c($s6)
/* 0042FE08 02C02025 */  move  $a0, $s6
/* 0042FE0C 8F998358 */  lw    $t9, %call16(iloadistore)($gp)
/* 0042FE10 02A02825 */  move  $a1, $s5
/* 0042FE14 93A60186 */  lbu   $a2, 0x186($sp)
/* 0042FE18 AFA00010 */  sw    $zero, 0x10($sp)
/* 0042FE1C AFB40014 */  sw    $s4, 0x14($sp)
/* 0042FE20 0320F809 */  jalr  $t9
/* 0042FE24 01E23821 */   addu  $a3, $t7, $v0
/* 0042FE28 12E000B3 */  beqz  $s7, .L004300F8
/* 0042FE2C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0042FE30 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042FE34 24040020 */  li    $a0, 32
/* 0042FE38 2405000C */  li    $a1, 12
/* 0042FE3C 0320F809 */  jalr  $t9
/* 0042FE40 00000000 */   nop   
/* 0042FE44 100000AC */  b     .L004300F8
/* 0042FE48 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0042FE4C:
/* 0042FE4C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0042FE50 8EC40000 */  lw    $a0, ($s6)
/* 0042FE54 24050048 */  li    $a1, 72
/* 0042FE58 0320F809 */  jalr  $t9
/* 0042FE5C 00000000 */   nop   
/* 0042FE60 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FE64 8EC40004 */  lw    $a0, 4($s6)
/* 0042FE68 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042FE6C 0320F809 */  jalr  $t9
/* 0042FE70 00000000 */   nop   
/* 0042FE74 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FE78 A3A20186 */  sb    $v0, 0x186($sp)
/* 0042FE7C 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0042FE80 91CE0000 */  lbu   $t6, ($t6)
/* 0042FE84 15C00022 */  bnez  $t6, .L0042FF10
/* 0042FE88 00000000 */   nop   
/* 0042FE8C 92CB0021 */  lbu   $t3, 0x21($s6)
/* 0042FE90 2401000E */  li    $at, 14
/* 0042FE94 316D001F */  andi  $t5, $t3, 0x1f
/* 0042FE98 15A1001D */  bne   $t5, $at, .L0042FF10
/* 0042FE9C 00000000 */   nop   
/* 0042FEA0 8ECA0028 */  lw    $t2, 0x28($s6)
/* 0042FEA4 29410004 */  slti  $at, $t2, 4
/* 0042FEA8 10200019 */  beqz  $at, .L0042FF10
/* 0042FEAC 00000000 */   nop   
/* 0042FEB0 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042FEB4 00002025 */  move  $a0, $zero
/* 0042FEB8 24050001 */  li    $a1, 1
/* 0042FEBC 0320F809 */  jalr  $t9
/* 0042FEC0 00000000 */   nop   
/* 0042FEC4 8ED90028 */  lw    $t9, 0x28($s6)
/* 0042FEC8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FECC 24090020 */  li    $t1, 32
/* 0042FED0 0019C0C0 */  sll   $t8, $t9, 3
/* 0042FED4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042FED8 305400FF */  andi  $s4, $v0, 0xff
/* 0042FEDC 01383823 */  subu  $a3, $t1, $t8
/* 0042FEE0 24040054 */  li    $a0, 84
/* 0042FEE4 304500FF */  andi  $a1, $v0, 0xff
/* 0042FEE8 93A60186 */  lbu   $a2, 0x186($sp)
/* 0042FEEC 0320F809 */  jalr  $t9
/* 0042FEF0 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042FEF4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FEF8 A3B40186 */  sb    $s4, 0x186($sp)
/* 0042FEFC 02802025 */  move  $a0, $s4
/* 0042FF00 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042FF04 0320F809 */  jalr  $t9
/* 0042FF08 00000000 */   nop   
/* 0042FF0C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042FF10:
/* 0042FF10 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0042FF14 8EC40000 */  lw    $a0, ($s6)
/* 0042FF18 0320F809 */  jalr  $t9
/* 0042FF1C 00000000 */   nop   
/* 0042FF20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0042FF24 12E00007 */  beqz  $s7, .L0042FF44
/* 0042FF28 305300FF */   andi  $s3, $v0, 0xff
/* 0042FF2C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0042FF30 24040020 */  li    $a0, 32
/* 0042FF34 2405000B */  li    $a1, 11
/* 0042FF38 0320F809 */  jalr  $t9
/* 0042FF3C 00000000 */   nop   
/* 0042FF40 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0042FF44:
/* 0042FF44 92CC0020 */  lbu   $t4, 0x20($s6)
/* 0042FF48 2401003F */  li    $at, 63
/* 0042FF4C 55810032 */  bnel  $t4, $at, .L00430018
/* 0042FF50 8ED00004 */   lw    $s0, 4($s6)
/* 0042FF54 92480020 */  lbu   $t0, 0x20($s2)
/* 0042FF58 24010001 */  li    $at, 1
/* 0042FF5C 5501002E */  bnel  $t0, $at, .L00430018
/* 0042FF60 8ED00004 */   lw    $s0, 4($s6)
/* 0042FF64 8E510000 */  lw    $s1, ($s2)
/* 0042FF68 2401005B */  li    $at, 91
/* 0042FF6C 92220020 */  lbu   $v0, 0x20($s1)
/* 0042FF70 54410004 */  bnel  $v0, $at, .L0042FF84
/* 0042FF74 24010052 */   li    $at, 82
/* 0042FF78 8E310000 */  lw    $s1, ($s1)
/* 0042FF7C 92220020 */  lbu   $v0, 0x20($s1)
/* 0042FF80 24010052 */  li    $at, 82
.L0042FF84:
/* 0042FF84 54410024 */  bnel  $v0, $at, .L00430018
/* 0042FF88 8ED00004 */   lw    $s0, 4($s6)
/* 0042FF8C 8F928BC0 */  lw     $s2, %got(noalias_regs)($gp)
/* 0042FF90 24100001 */  li    $s0, 1
/* 0042FF94 26520004 */  addiu $s2, $s2, 4
.L0042FF98:
/* 0042FF98 922F0019 */  lbu   $t7, 0x19($s1)
/* 0042FF9C 8E420000 */  lw    $v0, ($s2)
/* 0042FFA0 240D0001 */  li    $t5, 1
/* 0042FFA4 000F7600 */  sll   $t6, $t7, 0x18
/* 0042FFA8 000E5E42 */  srl   $t3, $t6, 0x19
/* 0042FFAC 016D5004 */  sllv  $t2, $t5, $t3
/* 0042FFB0 004AC824 */  and   $t9, $v0, $t2
/* 0042FFB4 53200014 */  beql  $t9, $zero, .L00430008
/* 0042FFB8 26100001 */   addiu $s0, $s0, 1
/* 0042FFBC 8F988BC0 */  lw     $t8, %got(noalias_regs)($gp)
/* 0042FFC0 00134880 */  sll   $t1, $s3, 2
/* 0042FFC4 01386021 */  addu  $t4, $t1, $t8
/* 0042FFC8 8D880000 */  lw    $t0, ($t4)
/* 0042FFCC 01027824 */  and   $t7, $t0, $v0
/* 0042FFD0 55E0000D */  bnel  $t7, $zero, .L00430008
/* 0042FFD4 26100001 */   addiu $s0, $s0, 1
/* 0042FFD8 8F8D8BB4 */  lw     $t5, %got(noalias_on_off)($gp)
/* 0042FFDC 240E0001 */  li    $t6, 1
/* 0042FFE0 24040030 */  li    $a0, 48
/* 0042FFE4 020D5821 */  addu  $t3, $s0, $t5
/* 0042FFE8 A16E0000 */  sb    $t6, ($t3)
/* 0042FFEC 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 0042FFF0 02602825 */  move  $a1, $s3
/* 0042FFF4 02003025 */  move  $a2, $s0
/* 0042FFF8 0320F809 */  jalr  $t9
/* 0042FFFC 00000000 */   nop   
/* 00430000 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430004 26100001 */  addiu $s0, $s0, 1
.L00430008:
/* 00430008 24010020 */  li    $at, 32
/* 0043000C 1601FFE2 */  bne   $s0, $at, .L0042FF98
/* 00430010 26520004 */   addiu $s2, $s2, 4
/* 00430014 8ED00004 */  lw    $s0, 4($s6)
.L00430018:
/* 00430018 8F8988E0 */  lw     $t1, %got(move_cvt_flag)($gp)
/* 0043001C 8E0A0010 */  lw    $t2, 0x10($s0)
/* 00430020 8D290000 */  lw    $t1, ($t1)
/* 00430024 000ACA02 */  srl   $t9, $t2, 8
/* 00430028 1729000A */  bne   $t9, $t1, .L00430054
/* 0043002C 00000000 */   nop   
/* 00430030 92180021 */  lbu   $t8, 0x21($s0)
/* 00430034 24010006 */  li    $at, 6
/* 00430038 330C001F */  andi  $t4, $t8, 0x1f
/* 0043003C 15810003 */  bne   $t4, $at, .L0043004C
/* 00430040 00000000 */   nop   
/* 00430044 1000000A */  b     .L00430070
/* 00430048 24150033 */   li    $s5, 51
.L0043004C:
/* 0043004C 10000008 */  b     .L00430070
/* 00430050 24150073 */   li    $s5, 115
.L00430054:
/* 00430054 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 00430058 8F8488A8 */  lw     $a0, %got(store_table)($gp)
/* 0043005C 02C02825 */  move  $a1, $s6
/* 00430060 0320F809 */  jalr  $t9
/* 00430064 93A60186 */   lbu   $a2, 0x186($sp)
/* 00430068 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043006C 3055FFFF */  andi  $s5, $v0, 0xffff
.L00430070:
/* 00430070 8F998358 */  lw    $t9, %call16(iloadistore)($gp)
/* 00430074 02C02025 */  move  $a0, $s6
/* 00430078 02A02825 */  move  $a1, $s5
/* 0043007C 93A60186 */  lbu   $a2, 0x186($sp)
/* 00430080 8EC7002C */  lw    $a3, 0x2c($s6)
/* 00430084 AFA00010 */  sw    $zero, 0x10($sp)
/* 00430088 0320F809 */  jalr  $t9
/* 0043008C AFB30014 */   sw    $s3, 0x14($sp)
/* 00430090 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430094 24100001 */  li    $s0, 1
/* 00430098 8F918BB4 */  lw     $s1, %got(noalias_on_off)($gp)
/* 0043009C 26310001 */  addiu $s1, $s1, 1
.L004300A0:
/* 004300A0 92280000 */  lbu   $t0, ($s1)
/* 004300A4 51000009 */  beql  $t0, $zero, .L004300CC
/* 004300A8 26100001 */   addiu $s0, $s0, 1
/* 004300AC A2200000 */  sb    $zero, ($s1)
/* 004300B0 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 004300B4 24040031 */  li    $a0, 49
/* 004300B8 02602825 */  move  $a1, $s3
/* 004300BC 0320F809 */  jalr  $t9
/* 004300C0 02003025 */   move  $a2, $s0
/* 004300C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004300C8 26100001 */  addiu $s0, $s0, 1
.L004300CC:
/* 004300CC 24010020 */  li    $at, 32
/* 004300D0 1601FFF3 */  bne   $s0, $at, .L004300A0
/* 004300D4 26310001 */   addiu $s1, $s1, 1
/* 004300D8 12E00007 */  beqz  $s7, .L004300F8
/* 004300DC 00000000 */   nop   
/* 004300E0 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 004300E4 24040020 */  li    $a0, 32
/* 004300E8 2405000C */  li    $a1, 12
/* 004300EC 0320F809 */  jalr  $t9
/* 004300F0 00000000 */   nop   
/* 004300F4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004300F8:
/* 004300F8 8F8188E0 */  lw     $at, %got(move_cvt_flag)($gp)
/* 004300FC 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00430100 240FFFFF */  li    $t7, -1
/* 00430104 AC2F0000 */  sw    $t7, ($at)
/* 00430108 10000B6A */  b     .L00432EB4
/* 0043010C 90840000 */   lbu   $a0, ($a0)
.L00430110:
/* 00430110 8ED00004 */  lw    $s0, 4($s6)
/* 00430114 24010018 */  li    $at, 24
/* 00430118 920D0020 */  lbu   $t5, 0x20($s0)
/* 0043011C 15A1001D */  bne   $t5, $at, .L00430194
/* 00430120 00000000 */   nop   
/* 00430124 92020021 */  lbu   $v0, 0x21($s0)
/* 00430128 24010006 */  li    $at, 6
/* 0043012C 3042001F */  andi  $v0, $v0, 0x1f
/* 00430130 10410008 */  beq   $v0, $at, .L00430154
/* 00430134 24010005 */   li    $at, 5
/* 00430138 14410016 */  bne   $v0, $at, .L00430194
/* 0043013C 00000000 */   nop   
/* 00430140 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 00430144 24010001 */  li    $at, 1
/* 00430148 91CE0000 */  lbu   $t6, ($t6)
/* 0043014C 15C10011 */  bne   $t6, $at, .L00430194
/* 00430150 00000000 */   nop   
.L00430154:
/* 00430154 920B0028 */  lbu   $t3, 0x28($s0)
/* 00430158 2401000C */  li    $at, 12
/* 0043015C 1561000D */  bne   $t3, $at, .L00430194
/* 00430160 00000000 */   nop   
/* 00430164 960A0014 */  lhu   $t2, 0x14($s0)
/* 00430168 24010001 */  li    $at, 1
/* 0043016C 15410009 */  bne   $t2, $at, .L00430194
/* 00430170 00000000 */   nop   
/* 00430174 8ED90028 */  lw    $t9, 0x28($s6)
/* 00430178 24010004 */  li    $at, 4
/* 0043017C 17210005 */  bne   $t9, $at, .L00430194
/* 00430180 00000000 */   nop   
/* 00430184 8E090010 */  lw    $t1, 0x10($s0)
/* 00430188 8F8188E0 */  lw     $at, %got(move_cvt_flag)($gp)
/* 0043018C 0009C202 */  srl   $t8, $t1, 8
/* 00430190 AC380000 */  sw    $t8, ($at)
.L00430194:
/* 00430194 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00430198 02002025 */  move  $a0, $s0
/* 0043019C 24050048 */  li    $a1, 72
/* 004301A0 0320F809 */  jalr  $t9
/* 004301A4 00000000 */   nop   
/* 004301A8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004301AC 96D70022 */  lhu   $s7, 0x22($s6)
/* 004301B0 8EC40000 */  lw    $a0, ($s6)
/* 004301B4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004301B8 32F70001 */  andi  $s7, $s7, 1
/* 004301BC 0017B82B */  sltu  $s7, $zero, $s7
/* 004301C0 32F700FF */  andi  $s7, $s7, 0xff
/* 004301C4 24050048 */  li    $a1, 72
/* 004301C8 0320F809 */  jalr  $t9
/* 004301CC 00809025 */   move  $s2, $a0
/* 004301D0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004301D4 8EC40004 */  lw    $a0, 4($s6)
/* 004301D8 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 004301DC 0320F809 */  jalr  $t9
/* 004301E0 00000000 */   nop   
/* 004301E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004301E8 A3A20186 */  sb    $v0, 0x186($sp)
/* 004301EC 8F8C898C */  lw     $t4, %got(lsb_first)($gp)
/* 004301F0 918C0000 */  lbu   $t4, ($t4)
/* 004301F4 15800022 */  bnez  $t4, .L00430280
/* 004301F8 00000000 */   nop   
/* 004301FC 92C80021 */  lbu   $t0, 0x21($s6)
/* 00430200 2401000E */  li    $at, 14
/* 00430204 310F001F */  andi  $t7, $t0, 0x1f
/* 00430208 15E1001D */  bne   $t7, $at, .L00430280
/* 0043020C 00000000 */   nop   
/* 00430210 8ECD0028 */  lw    $t5, 0x28($s6)
/* 00430214 29A10004 */  slti  $at, $t5, 4
/* 00430218 10200019 */  beqz  $at, .L00430280
/* 0043021C 00000000 */   nop   
/* 00430220 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00430224 00002025 */  move  $a0, $zero
/* 00430228 24050001 */  li    $a1, 1
/* 0043022C 0320F809 */  jalr  $t9
/* 00430230 00000000 */   nop   
/* 00430234 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430238 8ECE0028 */  lw    $t6, 0x28($s6)
/* 0043023C 240A0020 */  li    $t2, 32
/* 00430240 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00430244 000E58C0 */  sll   $t3, $t6, 3
/* 00430248 305400FF */  andi  $s4, $v0, 0xff
/* 0043024C 014B3823 */  subu  $a3, $t2, $t3
/* 00430250 24040054 */  li    $a0, 84
/* 00430254 304500FF */  andi  $a1, $v0, 0xff
/* 00430258 93A60186 */  lbu   $a2, 0x186($sp)
/* 0043025C 0320F809 */  jalr  $t9
/* 00430260 AFA00010 */   sw    $zero, 0x10($sp)
/* 00430264 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430268 A3B40186 */  sb    $s4, 0x186($sp)
/* 0043026C 02802025 */  move  $a0, $s4
/* 00430270 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00430274 0320F809 */  jalr  $t9
/* 00430278 00000000 */   nop   
/* 0043027C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00430280:
/* 00430280 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00430284 8EC40000 */  lw    $a0, ($s6)
/* 00430288 0320F809 */  jalr  $t9
/* 0043028C 00000000 */   nop   
/* 00430290 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430294 12E00007 */  beqz  $s7, .L004302B4
/* 00430298 305300FF */   andi  $s3, $v0, 0xff
/* 0043029C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 004302A0 24040020 */  li    $a0, 32
/* 004302A4 2405000B */  li    $a1, 11
/* 004302A8 0320F809 */  jalr  $t9
/* 004302AC 00000000 */   nop   
/* 004302B0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004302B4:
/* 004302B4 92590020 */  lbu   $t9, 0x20($s2)
/* 004302B8 24010001 */  li    $at, 1
/* 004302BC 5721002E */  bnel  $t9, $at, .L00430378
/* 004302C0 8ED00004 */   lw    $s0, 4($s6)
/* 004302C4 8E510000 */  lw    $s1, ($s2)
/* 004302C8 2401005B */  li    $at, 91
/* 004302CC 92220020 */  lbu   $v0, 0x20($s1)
/* 004302D0 54410004 */  bnel  $v0, $at, .L004302E4
/* 004302D4 24010052 */   li    $at, 82
/* 004302D8 8E310000 */  lw    $s1, ($s1)
/* 004302DC 92220020 */  lbu   $v0, 0x20($s1)
/* 004302E0 24010052 */  li    $at, 82
.L004302E4:
/* 004302E4 54410024 */  bnel  $v0, $at, .L00430378
/* 004302E8 8ED00004 */   lw    $s0, 4($s6)
/* 004302EC 8F928BC0 */  lw     $s2, %got(noalias_regs)($gp)
/* 004302F0 24100001 */  li    $s0, 1
/* 004302F4 26520004 */  addiu $s2, $s2, 4
.L004302F8:
/* 004302F8 92290019 */  lbu   $t1, 0x19($s1)
/* 004302FC 8E420000 */  lw    $v0, ($s2)
/* 00430300 24080001 */  li    $t0, 1
/* 00430304 0009C600 */  sll   $t8, $t1, 0x18
/* 00430308 00186642 */  srl   $t4, $t8, 0x19
/* 0043030C 01887804 */  sllv  $t7, $t0, $t4
/* 00430310 004F6824 */  and   $t5, $v0, $t7
/* 00430314 51A00014 */  beql  $t5, $zero, .L00430368
/* 00430318 26100001 */   addiu $s0, $s0, 1
/* 0043031C 8F8A8BC0 */  lw     $t2, %got(noalias_regs)($gp)
/* 00430320 00137080 */  sll   $t6, $s3, 2
/* 00430324 01CA5821 */  addu  $t3, $t6, $t2
/* 00430328 8D790000 */  lw    $t9, ($t3)
/* 0043032C 03224824 */  and   $t1, $t9, $v0
/* 00430330 5520000D */  bnel  $t1, $zero, .L00430368
/* 00430334 26100001 */   addiu $s0, $s0, 1
/* 00430338 8F888BB4 */  lw     $t0, %got(noalias_on_off)($gp)
/* 0043033C 24180001 */  li    $t8, 1
/* 00430340 24040030 */  li    $a0, 48
/* 00430344 02086021 */  addu  $t4, $s0, $t0
/* 00430348 A1980000 */  sb    $t8, ($t4)
/* 0043034C 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 00430350 02602825 */  move  $a1, $s3
/* 00430354 02003025 */  move  $a2, $s0
/* 00430358 0320F809 */  jalr  $t9
/* 0043035C 00000000 */   nop   
/* 00430360 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430364 26100001 */  addiu $s0, $s0, 1
.L00430368:
/* 00430368 24010020 */  li    $at, 32
/* 0043036C 1601FFE2 */  bne   $s0, $at, .L004302F8
/* 00430370 26520004 */   addiu $s2, $s2, 4
/* 00430374 8ED00004 */  lw    $s0, 4($s6)
.L00430378:
/* 00430378 8F8E88E0 */  lw     $t6, %got(move_cvt_flag)($gp)
/* 0043037C 8E0F0010 */  lw    $t7, 0x10($s0)
/* 00430380 8DCE0000 */  lw    $t6, ($t6)
/* 00430384 000F6A02 */  srl   $t5, $t7, 8
/* 00430388 15AE000A */  bne   $t5, $t6, .L004303B4
/* 0043038C 00000000 */   nop   
/* 00430390 920A0021 */  lbu   $t2, 0x21($s0)
/* 00430394 24010006 */  li    $at, 6
/* 00430398 314B001F */  andi  $t3, $t2, 0x1f
/* 0043039C 15610003 */  bne   $t3, $at, .L004303AC
/* 004303A0 00000000 */   nop   
/* 004303A4 1000000A */  b     .L004303D0
/* 004303A8 24150033 */   li    $s5, 51
.L004303AC:
/* 004303AC 10000008 */  b     .L004303D0
/* 004303B0 24150073 */   li    $s5, 115
.L004303B4:
/* 004303B4 8F998350 */  lw    $t9, %call16(lsopc)($gp)
/* 004303B8 8F8488A8 */  lw     $a0, %got(store_table)($gp)
/* 004303BC 02C02825 */  move  $a1, $s6
/* 004303C0 0320F809 */  jalr  $t9
/* 004303C4 93A60186 */   lbu   $a2, 0x186($sp)
/* 004303C8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004303CC 3055FFFF */  andi  $s5, $v0, 0xffff
.L004303D0:
/* 004303D0 8F99835C */  lw    $t9, %call16(rloadrstore)($gp)
/* 004303D4 02C02025 */  move  $a0, $s6
/* 004303D8 02A02825 */  move  $a1, $s5
/* 004303DC 93A60186 */  lbu   $a2, 0x186($sp)
/* 004303E0 8EC70024 */  lw    $a3, 0x24($s6)
/* 004303E4 0320F809 */  jalr  $t9
/* 004303E8 AFB30010 */   sw    $s3, 0x10($sp)
/* 004303EC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004303F0 24100001 */  li    $s0, 1
/* 004303F4 8F918BB4 */  lw     $s1, %got(noalias_on_off)($gp)
/* 004303F8 26310001 */  addiu $s1, $s1, 1
.L004303FC:
/* 004303FC 92390000 */  lbu   $t9, ($s1)
/* 00430400 53200009 */  beql  $t9, $zero, .L00430428
/* 00430404 26100001 */   addiu $s0, $s0, 1
/* 00430408 A2200000 */  sb    $zero, ($s1)
/* 0043040C 8F998248 */  lw    $t9, %call16(emit_alias)($gp)
/* 00430410 24040031 */  li    $a0, 49
/* 00430414 02602825 */  move  $a1, $s3
/* 00430418 0320F809 */  jalr  $t9
/* 0043041C 02003025 */   move  $a2, $s0
/* 00430420 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430424 26100001 */  addiu $s0, $s0, 1
.L00430428:
/* 00430428 24010020 */  li    $at, 32
/* 0043042C 1601FFF3 */  bne   $s0, $at, .L004303FC
/* 00430430 26310001 */   addiu $s1, $s1, 1
/* 00430434 12E00007 */  beqz  $s7, .L00430454
/* 00430438 00000000 */   nop   
/* 0043043C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00430440 24040020 */  li    $a0, 32
/* 00430444 2405000C */  li    $a1, 12
/* 00430448 0320F809 */  jalr  $t9
/* 0043044C 00000000 */   nop   
/* 00430450 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00430454:
/* 00430454 8F8188E0 */  lw     $at, %got(move_cvt_flag)($gp)
/* 00430458 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0043045C 2409FFFF */  li    $t1, -1
/* 00430460 AC290000 */  sw    $t1, ($at)
/* 00430464 10000A93 */  b     .L00432EB4
/* 00430468 90840000 */   lbu   $a0, ($a0)
.L0043046C:
/* 0043046C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00430470 02C02025 */  move  $a0, $s6
/* 00430474 03C02825 */  move  $a1, $fp
/* 00430478 0320F809 */  jalr  $t9
/* 0043047C 00000000 */   nop   
/* 00430480 92C40021 */  lbu   $a0, 0x21($s6)
/* 00430484 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430488 305E00FF */  andi  $fp, $v0, 0xff
/* 0043048C 00042600 */  sll   $a0, $a0, 0x18
/* 00430490 00042742 */  srl   $a0, $a0, 0x1d
/* 00430494 308400FF */  andi  $a0, $a0, 0xff
/* 00430498 2488FFFF */  addiu $t0, $a0, -1
/* 0043049C 2D010004 */  sltiu $at, $t0, 4
/* 004304A0 102000A1 */  beqz  $at, .L00430728
/* 004304A4 00000000 */   nop   
/* 004304A8 8F818038 */  lw    $at, %got(jtbl_1000AD64)($gp)
/* 004304AC 00084080 */  sll   $t0, $t0, 2
/* 004304B0 00280821 */  addu  $at, $at, $t0
/* 004304B4 8C28AD64 */  lw    $t0, %lo(jtbl_1000AD64)($at)
/* 004304B8 011C4021 */  addu  $t0, $t0, $gp
/* 004304BC 01000008 */  jr    $t0
/* 004304C0 00000000 */   nop   
.L004304C4:
/* 004304C4 8F9985A0 */  lw    $t9, %call16(get_sym_kind)($gp)
/* 004304C8 8EC40024 */  lw    $a0, 0x24($s6)
/* 004304CC 0320F809 */  jalr  $t9
/* 004304D0 00000000 */   nop   
/* 004304D4 24010005 */  li    $at, 5
/* 004304D8 1441002C */  bne   $v0, $at, .L0043058C
/* 004304DC 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 004304E0 8F9889DC */  lw     $t8, %got(basicint)($gp)
/* 004304E4 24010001 */  li    $at, 1
/* 004304E8 24040056 */  li    $a0, 86
/* 004304EC 93180000 */  lbu   $t8, ($t8)
/* 004304F0 03C02825 */  move  $a1, $fp
/* 004304F4 17010014 */  bne   $t8, $at, .L00430548
/* 004304F8 00000000 */   nop   
/* 004304FC 8F99820C */  lw    $t9, %call16(emit_rrri)($gp)
/* 00430500 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 00430504 24040139 */  li    $a0, 313
/* 00430508 03C02825 */  move  $a1, $fp
/* 0043050C 8EC70024 */  lw    $a3, 0x24($s6)
/* 00430510 0320F809 */  jalr  $t9
/* 00430514 90C60000 */   lbu   $a2, ($a2)
/* 00430518 8EC7002C */  lw    $a3, 0x2c($s6)
/* 0043051C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430520 24040137 */  li    $a0, 311
/* 00430524 10E000BE */  beqz  $a3, .L00430820
/* 00430528 00000000 */   nop   
/* 0043052C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00430530 03C02825 */  move  $a1, $fp
/* 00430534 03C03025 */  move  $a2, $fp
/* 00430538 0320F809 */  jalr  $t9
/* 0043053C AFA00010 */   sw    $zero, 0x10($sp)
/* 00430540 100000B7 */  b     .L00430820
/* 00430544 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430548:
/* 00430548 8F99820C */  lw    $t9, %call16(emit_rrri)($gp)
/* 0043054C 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 00430550 8EC70024 */  lw    $a3, 0x24($s6)
/* 00430554 0320F809 */  jalr  $t9
/* 00430558 90C60000 */   lbu   $a2, ($a2)
/* 0043055C 8EC7002C */  lw    $a3, 0x2c($s6)
/* 00430560 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430564 24040002 */  li    $a0, 2
/* 00430568 10E000AD */  beqz  $a3, .L00430820
/* 0043056C 00000000 */   nop   
/* 00430570 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00430574 03C02825 */  move  $a1, $fp
/* 00430578 03C03025 */  move  $a2, $fp
/* 0043057C 0320F809 */  jalr  $t9
/* 00430580 AFA00010 */   sw    $zero, 0x10($sp)
/* 00430584 100000A6 */  b     .L00430820
/* 00430588 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0043058C:
/* 0043058C 92CC0021 */  lbu   $t4, 0x21($s6)
/* 00430590 24010002 */  li    $at, 2
/* 00430594 000C7E00 */  sll   $t7, $t4, 0x18
/* 00430598 000F6F42 */  srl   $t5, $t7, 0x1d
/* 0043059C 15A10028 */  bne   $t5, $at, .L00430640
/* 004305A0 00000000 */   nop   
/* 004305A4 8F8E89F4 */  lw     $t6, %got(framesz_relocatable)($gp)
/* 004305A8 91CE0000 */  lbu   $t6, ($t6)
/* 004305AC 11C00024 */  beqz  $t6, .L00430640
/* 004305B0 00000000 */   nop   
/* 004305B4 8F8A89DC */  lw     $t2, %got(basicint)($gp)
/* 004305B8 24010001 */  li    $at, 1
/* 004305BC 914A0000 */  lbu   $t2, ($t2)
/* 004305C0 15410010 */  bne   $t2, $at, .L00430604
/* 004305C4 00000000 */   nop   
/* 004305C8 8F998404 */  lw    $t9, %call16(frame_offset)($gp)
/* 004305CC 02C02025 */  move  $a0, $s6
/* 004305D0 0320F809 */  jalr  $t9
/* 004305D4 00000000 */   nop   
/* 004305D8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004305DC 24040137 */  li    $a0, 311
/* 004305E0 03C02825 */  move  $a1, $fp
/* 004305E4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004305E8 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 004305EC 00403825 */  move  $a3, $v0
/* 004305F0 AFA00010 */  sw    $zero, 0x10($sp)
/* 004305F4 0320F809 */  jalr  $t9
/* 004305F8 90C60000 */   lbu   $a2, ($a2)
/* 004305FC 10000088 */  b     .L00430820
/* 00430600 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430604:
/* 00430604 8F998404 */  lw    $t9, %call16(frame_offset)($gp)
/* 00430608 02C02025 */  move  $a0, $s6
/* 0043060C 0320F809 */  jalr  $t9
/* 00430610 00000000 */   nop   
/* 00430614 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430618 24040002 */  li    $a0, 2
/* 0043061C 03C02825 */  move  $a1, $fp
/* 00430620 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00430624 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 00430628 00403825 */  move  $a3, $v0
/* 0043062C AFA00010 */  sw    $zero, 0x10($sp)
/* 00430630 0320F809 */  jalr  $t9
/* 00430634 90C60000 */   lbu   $a2, ($a2)
/* 00430638 10000079 */  b     .L00430820
/* 0043063C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430640:
/* 00430640 8F8B89DC */  lw     $t3, %got(basicint)($gp)
/* 00430644 24010001 */  li    $at, 1
/* 00430648 916B0000 */  lbu   $t3, ($t3)
/* 0043064C 15610010 */  bne   $t3, $at, .L00430690
/* 00430650 00000000 */   nop   
/* 00430654 8F998404 */  lw    $t9, %call16(frame_offset)($gp)
/* 00430658 02C02025 */  move  $a0, $s6
/* 0043065C 0320F809 */  jalr  $t9
/* 00430660 00000000 */   nop   
/* 00430664 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430668 24040137 */  li    $a0, 311
/* 0043066C 03C02825 */  move  $a1, $fp
/* 00430670 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00430674 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 00430678 00403825 */  move  $a3, $v0
/* 0043067C AFA00010 */  sw    $zero, 0x10($sp)
/* 00430680 0320F809 */  jalr  $t9
/* 00430684 90C60000 */   lbu   $a2, ($a2)
/* 00430688 10000065 */  b     .L00430820
/* 0043068C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430690:
/* 00430690 8F998404 */  lw    $t9, %call16(frame_offset)($gp)
/* 00430694 02C02025 */  move  $a0, $s6
/* 00430698 0320F809 */  jalr  $t9
/* 0043069C 00000000 */   nop   
/* 004306A0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004306A4 24040002 */  li    $a0, 2
/* 004306A8 03C02825 */  move  $a1, $fp
/* 004306AC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004306B0 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 004306B4 00403825 */  move  $a3, $v0
/* 004306B8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004306BC 0320F809 */  jalr  $t9
/* 004306C0 90C60000 */   lbu   $a2, ($a2)
/* 004306C4 10000056 */  b     .L00430820
/* 004306C8 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004306CC:
/* 004306CC 8F9989DC */  lw     $t9, %got(basicint)($gp)
/* 004306D0 24010001 */  li    $at, 1
/* 004306D4 24040024 */  li    $a0, 36
/* 004306D8 93390000 */  lbu   $t9, ($t9)
/* 004306DC 03C02825 */  move  $a1, $fp
/* 004306E0 1721000A */  bne   $t9, $at, .L0043070C
/* 004306E4 00000000 */   nop   
/* 004306E8 8F9981F0 */  lw    $t9, %call16(emit_ra)($gp)
/* 004306EC 2404014D */  li    $a0, 333
/* 004306F0 03C02825 */  move  $a1, $fp
/* 004306F4 8EC60024 */  lw    $a2, 0x24($s6)
/* 004306F8 8EC7002C */  lw    $a3, 0x2c($s6)
/* 004306FC 0320F809 */  jalr  $t9
/* 00430700 AFA00010 */   sw    $zero, 0x10($sp)
/* 00430704 10000046 */  b     .L00430820
/* 00430708 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0043070C:
/* 0043070C 8F9981F0 */  lw    $t9, %call16(emit_ra)($gp)
/* 00430710 8EC60024 */  lw    $a2, 0x24($s6)
/* 00430714 8EC7002C */  lw    $a3, 0x2c($s6)
/* 00430718 0320F809 */  jalr  $t9
/* 0043071C AFA00010 */   sw    $zero, 0x10($sp)
/* 00430720 1000003F */  b     .L00430820
/* 00430724 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430728:
/* 00430728 8F898038 */  lw    $t1, %got(RO_1000AC2A)($gp)
/* 0043072C 24040004 */  li    $a0, 4
/* 00430730 2405145B */  li    $a1, 5211
/* 00430734 2529AC2A */  addiu $t1, %lo(RO_1000AC2A) # addiu $t1, $t1, -0x53d6
/* 00430738 252F0048 */  addiu $t7, $t1, 0x48
/* 0043073C 03A06025 */  move  $t4, $sp
.L00430740:
/* 00430740 89380000 */  lwl   $t8, ($t1)
/* 00430744 99380003 */  lwr   $t8, 3($t1)
/* 00430748 2529000C */  addiu $t1, $t1, 0xc
/* 0043074C 258C000C */  addiu $t4, $t4, 0xc
/* 00430750 A998FFFC */  swl   $t8, -4($t4)
/* 00430754 B998FFFF */  swr   $t8, -1($t4)
/* 00430758 8928FFF8 */  lwl   $t0, -8($t1)
/* 0043075C 9928FFFB */  lwr   $t0, -5($t1)
/* 00430760 A9880000 */  swl   $t0, ($t4)
/* 00430764 B9880003 */  swr   $t0, 3($t4)
/* 00430768 8938FFFC */  lwl   $t8, -4($t1)
/* 0043076C 9938FFFF */  lwr   $t8, -1($t1)
/* 00430770 A9980004 */  swl   $t8, 4($t4)
/* 00430774 152FFFF2 */  bne   $t1, $t7, .L00430740
/* 00430778 B9980007 */   swr   $t8, 7($t4)
/* 0043077C 89380000 */  lwl   $t8, ($t1)
/* 00430780 99380003 */  lwr   $t8, 3($t1)
/* 00430784 8F8D8038 */  lw    $t5, %got(RO_1000ABDA)($gp)
/* 00430788 03A05825 */  move  $t3, $sp
/* 0043078C A9980008 */  swl   $t8, 8($t4)
/* 00430790 B998000B */  swr   $t8, 0xb($t4)
/* 00430794 89280004 */  lwl   $t0, 4($t1)
/* 00430798 99280007 */  lwr   $t0, 7($t1)
/* 0043079C 25ADABDA */  addiu $t5, %lo(RO_1000ABDA) # addiu $t5, $t5, -0x5426
/* 004307A0 25B90048 */  addiu $t9, $t5, 0x48
/* 004307A4 A988000C */  swl   $t0, 0xc($t4)
/* 004307A8 B988000F */  swr   $t0, 0xf($t4)
.L004307AC:
/* 004307AC 89AA0000 */  lwl   $t2, ($t5)
/* 004307B0 99AA0003 */  lwr   $t2, 3($t5)
/* 004307B4 25AD000C */  addiu $t5, $t5, 0xc
/* 004307B8 256B000C */  addiu $t3, $t3, 0xc
/* 004307BC A96A004C */  swl   $t2, 0x4c($t3)
/* 004307C0 B96A004F */  swr   $t2, 0x4f($t3)
/* 004307C4 89AEFFF8 */  lwl   $t6, -8($t5)
/* 004307C8 99AEFFFB */  lwr   $t6, -5($t5)
/* 004307CC A96E0050 */  swl   $t6, 0x50($t3)
/* 004307D0 B96E0053 */  swr   $t6, 0x53($t3)
/* 004307D4 89AAFFFC */  lwl   $t2, -4($t5)
/* 004307D8 99AAFFFF */  lwr   $t2, -1($t5)
/* 004307DC A96A0054 */  swl   $t2, 0x54($t3)
/* 004307E0 15B9FFF2 */  bne   $t5, $t9, .L004307AC
/* 004307E4 B96A0057 */   swr   $t2, 0x57($t3)
/* 004307E8 89AA0000 */  lwl   $t2, ($t5)
/* 004307EC 99AA0003 */  lwr   $t2, 3($t5)
/* 004307F0 A96A0058 */  swl   $t2, 0x58($t3)
/* 004307F4 B96A005B */  swr   $t2, 0x5b($t3)
/* 004307F8 89AE0004 */  lwl   $t6, 4($t5)
/* 004307FC 99AE0007 */  lwr   $t6, 7($t5)
/* 00430800 A96E005C */  swl   $t6, 0x5c($t3)
/* 00430804 B96E005F */  swr   $t6, 0x5f($t3)
/* 00430808 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043080C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00430810 8FA60008 */  lw    $a2, 8($sp)
/* 00430814 0320F809 */  jalr  $t9
/* 00430818 00000000 */   nop   
/* 0043081C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00430820:
/* 00430820 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00430824 100009A3 */  b     .L00432EB4
/* 00430828 90840000 */   lbu   $a0, ($a0)
.L0043082C:
/* 0043082C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00430830 0320F809 */  jalr  $t9
/* 00430834 00000000 */   nop   
/* 00430838 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043083C 26C40020 */  addiu $a0, $s6, 0x20
/* 00430840 00402825 */  move  $a1, $v0
/* 00430844 8F99843C */  lw    $t9, %call16(add_to_pool)($gp)
/* 00430848 0320F809 */  jalr  $t9
/* 0043084C 00000000 */   nop   
/* 00430850 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430854 00408025 */  move  $s0, $v0
/* 00430858 02C02025 */  move  $a0, $s6
/* 0043085C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00430860 03C02825 */  move  $a1, $fp
/* 00430864 0320F809 */  jalr  $t9
/* 00430868 00000000 */   nop   
/* 0043086C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430870 305E00FF */  andi  $fp, $v0, 0xff
/* 00430874 24040024 */  li    $a0, 36
/* 00430878 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0043087C 304500FF */  andi  $a1, $v0, 0xff
/* 00430880 02003025 */  move  $a2, $s0
/* 00430884 0320F809 */  jalr  $t9
/* 00430888 00000000 */   nop   
/* 0043088C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430890 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00430894 10000987 */  b     .L00432EB4
/* 00430898 90840000 */   lbu   $a0, ($a0)
.L0043089C:
/* 0043089C 8F99831C */  lw    $t9, %call16(uop_to_asm)($gp)
/* 004308A0 02C02025 */  move  $a0, $s6
/* 004308A4 0320F809 */  jalr  $t9
/* 004308A8 00000000 */   nop   
/* 004308AC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004308B0 3055FFFF */  andi  $s5, $v0, 0xffff
/* 004308B4 8EC40000 */  lw    $a0, ($s6)
/* 004308B8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004308BC 03C02825 */  move  $a1, $fp
/* 004308C0 0320F809 */  jalr  $t9
/* 004308C4 00000000 */   nop   
/* 004308C8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004308CC 8EC40000 */  lw    $a0, ($s6)
/* 004308D0 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 004308D4 0320F809 */  jalr  $t9
/* 004308D8 00000000 */   nop   
/* 004308DC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004308E0 305300FF */  andi  $s3, $v0, 0xff
/* 004308E4 02C02025 */  move  $a0, $s6
/* 004308E8 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 004308EC 03C02825 */  move  $a1, $fp
/* 004308F0 0320F809 */  jalr  $t9
/* 004308F4 00000000 */   nop   
/* 004308F8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004308FC 305E00FF */  andi  $fp, $v0, 0xff
/* 00430900 02A02025 */  move  $a0, $s5
/* 00430904 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00430908 304500FF */  andi  $a1, $v0, 0xff
/* 0043090C 02603025 */  move  $a2, $s3
/* 00430910 00003825 */  move  $a3, $zero
/* 00430914 0320F809 */  jalr  $t9
/* 00430918 AFA00010 */   sw    $zero, 0x10($sp)
/* 0043091C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430920 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00430924 10000963 */  b     .L00432EB4
/* 00430928 90840000 */   lbu   $a0, ($a0)
.L0043092C:
/* 0043092C 8F99831C */  lw    $t9, %call16(uop_to_asm)($gp)
/* 00430930 02C02025 */  move  $a0, $s6
/* 00430934 0320F809 */  jalr  $t9
/* 00430938 00000000 */   nop   
/* 0043093C 8EC60000 */  lw    $a2, ($s6)
/* 00430940 2401003C */  li    $at, 60
/* 00430944 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430948 90CF0020 */  lbu   $t7, 0x20($a2)
/* 0043094C 3055FFFF */  andi  $s5, $v0, 0xffff
/* 00430950 15E10032 */  bne   $t7, $at, .L00430A1C
/* 00430954 00000000 */   nop   
/* 00430958 8F898A30 */  lw     $t1, %got(opt_cse)($gp)
/* 0043095C 24010002 */  li    $at, 2
/* 00430960 91290000 */  lbu   $t1, ($t1)
/* 00430964 1521002D */  bne   $t1, $at, .L00430A1C
/* 00430968 00000000 */   nop   
/* 0043096C 94CC0014 */  lhu   $t4, 0x14($a2)
/* 00430970 24010001 */  li    $at, 1
/* 00430974 15810029 */  bne   $t4, $at, .L00430A1C
/* 00430978 00000000 */   nop   
/* 0043097C 8F8188DC */  lw     $at, %got(nor_flag)($gp)
/* 00430980 24080001 */  li    $t0, 1
/* 00430984 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00430988 A0280000 */  sb    $t0, ($at)
/* 0043098C 96D80014 */  lhu   $t8, 0x14($s6)
/* 00430990 03C02825 */  move  $a1, $fp
/* 00430994 A4D80014 */  sh    $t8, 0x14($a2)
/* 00430998 0320F809 */  jalr  $t9
/* 0043099C 8EC40000 */   lw    $a0, ($s6)
/* 004309A0 8ED90000 */  lw    $t9, ($s6)
/* 004309A4 92C30019 */  lbu   $v1, 0x19($s6)
/* 004309A8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004309AC 932D0019 */  lbu   $t5, 0x19($t9)
/* 004309B0 00035600 */  sll   $t2, $v1, 0x18
/* 004309B4 000A7E42 */  srl   $t7, $t2, 0x19
/* 004309B8 000D5E00 */  sll   $t3, $t5, 0x18
/* 004309BC 000B7642 */  srl   $t6, $t3, 0x19
/* 004309C0 01CF4826 */  xor   $t1, $t6, $t7
/* 004309C4 00096640 */  sll   $t4, $t1, 0x19
/* 004309C8 000C4602 */  srl   $t0, $t4, 0x18
/* 004309CC 01038026 */  xor   $s0, $t0, $v1
/* 004309D0 A2D00019 */  sb    $s0, 0x19($s6)
/* 004309D4 00108600 */  sll   $s0, $s0, 0x18
/* 004309D8 00108642 */  srl   $s0, $s0, 0x19
/* 004309DC 8F8D8BCC */  lw     $t5, %got(regs)($gp)
/* 004309E0 0010C880 */  sll   $t9, $s0, 2
/* 004309E4 0330C823 */  subu  $t9, $t9, $s0
/* 004309E8 0019C880 */  sll   $t9, $t9, 2
/* 004309EC 032D5821 */  addu  $t3, $t9, $t5
/* 004309F0 8F9984A4 */  lw    $t9, %call16(fill_reg)($gp)
/* 004309F4 91670008 */  lbu   $a3, 8($t3)
/* 004309F8 02002025 */  move  $a0, $s0
/* 004309FC 02C02825 */  move  $a1, $s6
/* 00430A00 0320F809 */  jalr  $t9
/* 00430A04 96C60014 */   lhu   $a2, 0x14($s6)
/* 00430A08 8ECE0000 */  lw    $t6, ($s6)
/* 00430A0C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430A10 240A0001 */  li    $t2, 1
/* 00430A14 1000001B */  b     .L00430A84
/* 00430A18 A5CA0014 */   sh    $t2, 0x14($t6)
.L00430A1C:
/* 00430A1C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00430A20 00C02025 */  move  $a0, $a2
/* 00430A24 03C02825 */  move  $a1, $fp
/* 00430A28 0320F809 */  jalr  $t9
/* 00430A2C 00000000 */   nop   
/* 00430A30 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430A34 8EC40000 */  lw    $a0, ($s6)
/* 00430A38 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00430A3C 0320F809 */  jalr  $t9
/* 00430A40 00000000 */   nop   
/* 00430A44 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430A48 305300FF */  andi  $s3, $v0, 0xff
/* 00430A4C 02C02025 */  move  $a0, $s6
/* 00430A50 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00430A54 03C02825 */  move  $a1, $fp
/* 00430A58 0320F809 */  jalr  $t9
/* 00430A5C 00000000 */   nop   
/* 00430A60 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430A64 305E00FF */  andi  $fp, $v0, 0xff
/* 00430A68 02A02025 */  move  $a0, $s5
/* 00430A6C 8F9982D8 */  lw    $t9, %call16(dw_emit_rr)($gp)
/* 00430A70 304500FF */  andi  $a1, $v0, 0xff
/* 00430A74 02603025 */  move  $a2, $s3
/* 00430A78 0320F809 */  jalr  $t9
/* 00430A7C 02C03825 */   move  $a3, $s6
/* 00430A80 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00430A84:
/* 00430A84 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00430A88 1000090A */  b     .L00432EB4
/* 00430A8C 90840000 */   lbu   $a0, ($a0)
.L00430A90:
/* 00430A90 92D00021 */  lbu   $s0, 0x21($s6)
/* 00430A94 8F99831C */  lw    $t9, %call16(uop_to_asm)($gp)
/* 00430A98 02C02025 */  move  $a0, $s6
/* 00430A9C 3210001F */  andi  $s0, $s0, 0x1f
/* 00430AA0 0320F809 */  jalr  $t9
/* 00430AA4 321000FF */   andi  $s0, $s0, 0xff
/* 00430AA8 2E0F0020 */  sltiu $t7, $s0, 0x20
/* 00430AAC 3C01000C */  lui   $at, 0xc
/* 00430AB0 34218000 */  ori   $at, $at, 0x8000
/* 00430AB4 000F4823 */  negu  $t1, $t7
/* 00430AB8 01216024 */  and   $t4, $t1, $at
/* 00430ABC 020C4004 */  sllv  $t0, $t4, $s0
/* 00430AC0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430AC4 05010008 */  bgez  $t0, .L00430AE8
/* 00430AC8 3055FFFF */   andi  $s5, $v0, 0xffff
/* 00430ACC 27D8FFE0 */  addiu $t8, $fp, -0x20
/* 00430AD0 2F190020 */  sltiu $t9, $t8, 0x20
/* 00430AD4 00196823 */  negu  $t5, $t9
/* 00430AD8 030D5804 */  sllv  $t3, $t5, $t8
/* 00430ADC 05600002 */  bltz  $t3, .L00430AE8
/* 00430AE0 00000000 */   nop   
/* 00430AE4 241E0048 */  li    $fp, 72
.L00430AE8:
/* 00430AE8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00430AEC 8EC40000 */  lw    $a0, ($s6)
/* 00430AF0 03C02825 */  move  $a1, $fp
/* 00430AF4 0320F809 */  jalr  $t9
/* 00430AF8 00000000 */   nop   
/* 00430AFC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430B00 8EC40000 */  lw    $a0, ($s6)
/* 00430B04 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00430B08 0320F809 */  jalr  $t9
/* 00430B0C 00000000 */   nop   
/* 00430B10 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430B14 305300FF */  andi  $s3, $v0, 0xff
/* 00430B18 02C02025 */  move  $a0, $s6
/* 00430B1C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00430B20 03C02825 */  move  $a1, $fp
/* 00430B24 0320F809 */  jalr  $t9
/* 00430B28 00000000 */   nop   
/* 00430B2C 92C70021 */  lbu   $a3, 0x21($s6)
/* 00430B30 24010006 */  li    $at, 6
/* 00430B34 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430B38 30E7001F */  andi  $a3, $a3, 0x1f
/* 00430B3C 10E10004 */  beq   $a3, $at, .L00430B50
/* 00430B40 305E00FF */   andi  $fp, $v0, 0xff
/* 00430B44 24010008 */  li    $at, 8
/* 00430B48 14E10024 */  bne   $a3, $at, .L00430BDC
/* 00430B4C 00000000 */   nop   
.L00430B50:
/* 00430B50 92CA0020 */  lbu   $t2, 0x20($s6)
/* 00430B54 15400021 */  bnez  $t2, .L00430BDC
/* 00430B58 00000000 */   nop   
/* 00430B5C 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00430B60 03C02025 */  move  $a0, $fp
/* 00430B64 02602825 */  move  $a1, $s3
/* 00430B68 0320F809 */  jalr  $t9
/* 00430B6C 00E03025 */   move  $a2, $a3
/* 00430B70 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430B74 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00430B78 0320F809 */  jalr  $t9
/* 00430B7C 00000000 */   nop   
/* 00430B80 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430B84 0040B825 */  move  $s7, $v0
/* 00430B88 24040010 */  li    $a0, 16
/* 00430B8C 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 00430B90 02602825 */  move  $a1, $s3
/* 00430B94 00403025 */  move  $a2, $v0
/* 00430B98 0320F809 */  jalr  $t9
/* 00430B9C 00000000 */   nop   
/* 00430BA0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430BA4 24040056 */  li    $a0, 86
/* 00430BA8 03C02825 */  move  $a1, $fp
/* 00430BAC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00430BB0 00003025 */  move  $a2, $zero
/* 00430BB4 02603825 */  move  $a3, $s3
/* 00430BB8 0320F809 */  jalr  $t9
/* 00430BBC 00000000 */   nop   
/* 00430BC0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430BC4 02E02025 */  move  $a0, $s7
/* 00430BC8 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00430BCC 0320F809 */  jalr  $t9
/* 00430BD0 00000000 */   nop   
/* 00430BD4 10000008 */  b     .L00430BF8
/* 00430BD8 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430BDC:
/* 00430BDC 8F9982D8 */  lw    $t9, %call16(dw_emit_rr)($gp)
/* 00430BE0 02A02025 */  move  $a0, $s5
/* 00430BE4 03C02825 */  move  $a1, $fp
/* 00430BE8 02603025 */  move  $a2, $s3
/* 00430BEC 0320F809 */  jalr  $t9
/* 00430BF0 02C03825 */   move  $a3, $s6
/* 00430BF4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00430BF8:
/* 00430BF8 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00430BFC 100008AD */  b     .L00432EB4
/* 00430C00 90840000 */   lbu   $a0, ($a0)
.L00430C04:
/* 00430C04 92D00021 */  lbu   $s0, 0x21($s6)
/* 00430C08 3C01000C */  lui   $at, 0xc
/* 00430C0C 34218000 */  ori   $at, $at, 0x8000
/* 00430C10 3210001F */  andi  $s0, $s0, 0x1f
/* 00430C14 321000FF */  andi  $s0, $s0, 0xff
/* 00430C18 2E0E0020 */  sltiu $t6, $s0, 0x20
/* 00430C1C 000E7823 */  negu  $t7, $t6
/* 00430C20 01E14824 */  and   $t1, $t7, $at
/* 00430C24 02096004 */  sllv  $t4, $t1, $s0
/* 00430C28 05810022 */  bgez  $t4, .L00430CB4
/* 00430C2C 2488FFE0 */   addiu $t0, $a0, -0x20
/* 00430C30 2D190040 */  sltiu $t9, $t0, 0x40
/* 00430C34 13200009 */  beqz  $t9, .L00430C5C
/* 00430C38 00000000 */   nop   
/* 00430C3C 8F8B8038 */  lw    $t3, %got(D_10016154)($gp)
/* 00430C40 00086943 */  sra   $t5, $t0, 5
/* 00430C44 000DC080 */  sll   $t8, $t5, 2
/* 00430C48 256B6154 */  addiu $t3, %lo(D_10016154) # addiu $t3, $t3, 0x6154
/* 00430C4C 01785021 */  addu  $t2, $t3, $t8
/* 00430C50 8D4E0000 */  lw    $t6, ($t2)
/* 00430C54 010E7804 */  sllv  $t7, $t6, $t0
/* 00430C58 29F90000 */  slti  $t9, $t7, 0
.L00430C5C:
/* 00430C5C 13200008 */  beqz  $t9, .L00430C80
/* 00430C60 00000000 */   nop   
/* 00430C64 8F998378 */  lw    $t9, %call16(eval_fp_cond)($gp)
/* 00430C68 02C02025 */  move  $a0, $s6
/* 00430C6C 03C02825 */  move  $a1, $fp
/* 00430C70 0320F809 */  jalr  $t9
/* 00430C74 00000000 */   nop   
/* 00430C78 10000109 */  b     .L004310A0
/* 00430C7C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430C80:
/* 00430C80 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 00430C84 02002825 */  move  $a1, $s0
/* 00430C88 0320F809 */  jalr  $t9
/* 00430C8C 00000000 */   nop   
/* 00430C90 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430C94 00402025 */  move  $a0, $v0
/* 00430C98 02C02825 */  move  $a1, $s6
/* 00430C9C 8F998380 */  lw    $t9, %call16(eval2)($gp)
/* 00430CA0 03C03025 */  move  $a2, $fp
/* 00430CA4 0320F809 */  jalr  $t9
/* 00430CA8 00000000 */   nop   
/* 00430CAC 100000FC */  b     .L004310A0
/* 00430CB0 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430CB4:
/* 00430CB4 8F99831C */  lw    $t9, %call16(uop_to_asm)($gp)
/* 00430CB8 02C02025 */  move  $a0, $s6
/* 00430CBC 0320F809 */  jalr  $t9
/* 00430CC0 00000000 */   nop   
/* 00430CC4 92CC0020 */  lbu   $t4, 0x20($s6)
/* 00430CC8 2401003C */  li    $at, 60
/* 00430CCC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430CD0 15810009 */  bne   $t4, $at, .L00430CF8
/* 00430CD4 3055FFFF */   andi  $s5, $v0, 0xffff
/* 00430CD8 8F8D88DC */  lw     $t5, %got(nor_flag)($gp)
/* 00430CDC 91AD0000 */  lbu   $t5, ($t5)
/* 00430CE0 11A00005 */  beqz  $t5, .L00430CF8
/* 00430CE4 00000000 */   nop   
/* 00430CE8 8F8188DC */  lw     $at, %got(nor_flag)($gp)
/* 00430CEC 8F9588D8 */  lw     $s5, %got(op_nor)($gp)
/* 00430CF0 A0200000 */  sb    $zero, ($at)
/* 00430CF4 96B50000 */  lhu   $s5, ($s5)
.L00430CF8:
/* 00430CF8 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00430CFC 8EC40004 */  lw    $a0, 4($s6)
/* 00430D00 0320F809 */  jalr  $t9
/* 00430D04 00000000 */   nop   
/* 00430D08 104000B0 */  beqz  $v0, .L00430FCC
/* 00430D0C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 00430D10 8F8B89D8 */  lw     $t3, %got(opcode_arch)($gp)
/* 00430D14 916B0000 */  lbu   $t3, ($t3)
/* 00430D18 15600017 */  bnez  $t3, .L00430D78
/* 00430D1C 00000000 */   nop   
/* 00430D20 92D80021 */  lbu   $t8, 0x21($s6)
/* 00430D24 3C010501 */  lui   $at, 0x501
/* 00430D28 330A001F */  andi  $t2, $t8, 0x1f
/* 00430D2C 2D4E0020 */  sltiu $t6, $t2, 0x20
/* 00430D30 000E4023 */  negu  $t0, $t6
/* 00430D34 01017824 */  and   $t7, $t0, $at
/* 00430D38 014F4804 */  sllv  $t1, $t7, $t2
/* 00430D3C 0521000E */  bgez  $t1, .L00430D78
/* 00430D40 00000000 */   nop   
/* 00430D44 8F998694 */  lw    $t9, %call16(result_type)($gp)
/* 00430D48 02C02025 */  move  $a0, $s6
/* 00430D4C 0320F809 */  jalr  $t9
/* 00430D50 00000000 */   nop   
/* 00430D54 12020008 */  beq   $s0, $v0, .L00430D78
/* 00430D58 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 00430D5C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00430D60 8EC40000 */  lw    $a0, ($s6)
/* 00430D64 24050048 */  li    $a1, 72
/* 00430D68 0320F809 */  jalr  $t9
/* 00430D6C 00000000 */   nop   
/* 00430D70 10000007 */  b     .L00430D90
/* 00430D74 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430D78:
/* 00430D78 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00430D7C 8EC40000 */  lw    $a0, ($s6)
/* 00430D80 03C02825 */  move  $a1, $fp
/* 00430D84 0320F809 */  jalr  $t9
/* 00430D88 00000000 */   nop   
/* 00430D8C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00430D90:
/* 00430D90 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00430D94 8EC40000 */  lw    $a0, ($s6)
/* 00430D98 0320F809 */  jalr  $t9
/* 00430D9C 00000000 */   nop   
/* 00430DA0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430DA4 305300FF */  andi  $s3, $v0, 0xff
/* 00430DA8 02C02025 */  move  $a0, $s6
/* 00430DAC 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00430DB0 03C02825 */  move  $a1, $fp
/* 00430DB4 0320F809 */  jalr  $t9
/* 00430DB8 00000000 */   nop   
/* 00430DBC 92D90021 */  lbu   $t9, 0x21($s6)
/* 00430DC0 3C010501 */  lui   $at, 0x501
/* 00430DC4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430DC8 332C001F */  andi  $t4, $t9, 0x1f
/* 00430DCC 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 00430DD0 000D5823 */  negu  $t3, $t5
/* 00430DD4 0161C024 */  and   $t8, $t3, $at
/* 00430DD8 01987004 */  sllv  $t6, $t8, $t4
/* 00430DDC 05C1001B */  bgez  $t6, .L00430E4C
/* 00430DE0 305E00FF */   andi  $fp, $v0, 0xff
/* 00430DE4 304800FF */  andi  $t0, $v0, 0xff
/* 00430DE8 55130019 */  bnel  $t0, $s3, .L00430E50
/* 00430DEC 305200FF */   andi  $s2, $v0, 0xff
/* 00430DF0 92CF0020 */  lbu   $t7, 0x20($s6)
/* 00430DF4 2DEA0080 */  sltiu $t2, $t7, 0x80
/* 00430DF8 11400009 */  beqz  $t2, .L00430E20
/* 00430DFC 00000000 */   nop   
/* 00430E00 8F8D8038 */  lw    $t5, %got(D_10016144)($gp)
/* 00430E04 000F4943 */  sra   $t1, $t7, 5
/* 00430E08 0009C880 */  sll   $t9, $t1, 2
/* 00430E0C 25AD6144 */  addiu $t5, %lo(D_10016144) # addiu $t5, $t5, 0x6144
/* 00430E10 01B95821 */  addu  $t3, $t5, $t9
/* 00430E14 8D780000 */  lw    $t8, ($t3)
/* 00430E18 01F86004 */  sllv  $t4, $t8, $t7
/* 00430E1C 298A0000 */  slti  $t2, $t4, 0
.L00430E20:
/* 00430E20 5540000B */  bnel  $t2, $zero, .L00430E50
/* 00430E24 305200FF */   andi  $s2, $v0, 0xff
/* 00430E28 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00430E2C 02C02025 */  move  $a0, $s6
/* 00430E30 24050001 */  li    $a1, 1
/* 00430E34 0320F809 */  jalr  $t9
/* 00430E38 00000000 */   nop   
/* 00430E3C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430E40 305200FF */  andi  $s2, $v0, 0xff
/* 00430E44 10000003 */  b     .L00430E54
/* 00430E48 92C40020 */   lbu   $a0, 0x20($s6)
.L00430E4C:
/* 00430E4C 305200FF */  andi  $s2, $v0, 0xff
.L00430E50:
/* 00430E50 92C40020 */  lbu   $a0, 0x20($s6)
.L00430E54:
/* 00430E54 8ED00004 */  lw    $s0, 4($s6)
/* 00430E58 3C010501 */  lui   $at, 0x501
/* 00430E5C 02402825 */  move  $a1, $s2
/* 00430E60 92020021 */  lbu   $v0, 0x21($s0)
/* 00430E64 02603025 */  move  $a2, $s3
/* 00430E68 3042001F */  andi  $v0, $v0, 0x1f
/* 00430E6C 2C480020 */  sltiu $t0, $v0, 0x20
/* 00430E70 00084823 */  negu  $t1, $t0
/* 00430E74 01216824 */  and   $t5, $t1, $at
/* 00430E78 004DC804 */  sllv  $t9, $t5, $v0
/* 00430E7C 07210009 */  bgez  $t9, .L00430EA4
/* 00430E80 2C4B0020 */   sltiu $t3, $v0, 0x20
/* 00430E84 24010073 */  li    $at, 115
/* 00430E88 10810004 */  beq   $a0, $at, .L00430E9C
/* 00430E8C 8E110034 */   lw    $s1, 0x34($s0)
/* 00430E90 24010074 */  li    $at, 116
/* 00430E94 5481000B */  bnel  $a0, $at, .L00430EC4
/* 00430E98 000BC023 */   negu  $t8, $t3
.L00430E9C:
/* 00430E9C 10000008 */  b     .L00430EC0
/* 00430EA0 3231003F */   andi  $s1, $s1, 0x3f
.L00430EA4:
/* 00430EA4 24010073 */  li    $at, 115
/* 00430EA8 10810004 */  beq   $a0, $at, .L00430EBC
/* 00430EAC 8E110030 */   lw    $s1, 0x30($s0)
/* 00430EB0 24010074 */  li    $at, 116
/* 00430EB4 54810003 */  bnel  $a0, $at, .L00430EC4
/* 00430EB8 000BC023 */   negu  $t8, $t3
.L00430EBC:
/* 00430EBC 3231001F */  andi  $s1, $s1, 0x1f
.L00430EC0:
/* 00430EC0 000BC023 */  negu  $t8, $t3
.L00430EC4:
/* 00430EC4 3C010501 */  lui   $at, 0x501
/* 00430EC8 03017824 */  and   $t7, $t8, $at
/* 00430ECC 004F6004 */  sllv  $t4, $t7, $v0
/* 00430ED0 05810008 */  bgez  $t4, .L00430EF4
/* 00430ED4 02A02025 */   move  $a0, $s5
/* 00430ED8 8F9982D4 */  lw    $t9, %call16(dw_emit_rri)($gp)
/* 00430EDC 8E070030 */  lw    $a3, 0x30($s0)
/* 00430EE0 AFB10010 */  sw    $s1, 0x10($sp)
/* 00430EE4 0320F809 */  jalr  $t9
/* 00430EE8 AFB60014 */   sw    $s6, 0x14($sp)
/* 00430EEC 10000015 */  b     .L00430F44
/* 00430EF0 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430EF4:
/* 00430EF4 0621000B */  bgez  $s1, .L00430F24
/* 00430EF8 02A02025 */   move  $a0, $s5
/* 00430EFC 8F9982D4 */  lw    $t9, %call16(dw_emit_rri)($gp)
/* 00430F00 02A02025 */  move  $a0, $s5
/* 00430F04 02402825 */  move  $a1, $s2
/* 00430F08 02603025 */  move  $a2, $s3
/* 00430F0C 2407FFFF */  li    $a3, -1
/* 00430F10 AFB10010 */  sw    $s1, 0x10($sp)
/* 00430F14 0320F809 */  jalr  $t9
/* 00430F18 AFB60014 */   sw    $s6, 0x14($sp)
/* 00430F1C 10000009 */  b     .L00430F44
/* 00430F20 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430F24:
/* 00430F24 8F9982D4 */  lw    $t9, %call16(dw_emit_rri)($gp)
/* 00430F28 02402825 */  move  $a1, $s2
/* 00430F2C 02603025 */  move  $a2, $s3
/* 00430F30 00003825 */  move  $a3, $zero
/* 00430F34 AFB10010 */  sw    $s1, 0x10($sp)
/* 00430F38 0320F809 */  jalr  $t9
/* 00430F3C AFB60014 */   sw    $s6, 0x14($sp)
/* 00430F40 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00430F44:
/* 00430F44 125E0056 */  beq   $s2, $fp, .L004310A0
/* 00430F48 00000000 */   nop   
/* 00430F4C 92CE0021 */  lbu   $t6, 0x21($s6)
/* 00430F50 3C010501 */  lui   $at, 0x501
/* 00430F54 31CA001F */  andi  $t2, $t6, 0x1f
/* 00430F58 2D480020 */  sltiu $t0, $t2, 0x20
/* 00430F5C 00084823 */  negu  $t1, $t0
/* 00430F60 01216824 */  and   $t5, $t1, $at
/* 00430F64 014DC804 */  sllv  $t9, $t5, $t2
/* 00430F68 0721000C */  bgez  $t9, .L00430F9C
/* 00430F6C 00000000 */   nop   
/* 00430F70 8F8B89D8 */  lw     $t3, %got(opcode_arch)($gp)
/* 00430F74 916B0000 */  lbu   $t3, ($t3)
/* 00430F78 15600008 */  bnez  $t3, .L00430F9C
/* 00430F7C 00000000 */   nop   
/* 00430F80 8F998310 */  lw    $t9, %call16(move_two_regs)($gp)
/* 00430F84 03C02025 */  move  $a0, $fp
/* 00430F88 02402825 */  move  $a1, $s2
/* 00430F8C 0320F809 */  jalr  $t9
/* 00430F90 00000000 */   nop   
/* 00430F94 10000007 */  b     .L00430FB4
/* 00430F98 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430F9C:
/* 00430F9C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00430FA0 24040031 */  li    $a0, 49
/* 00430FA4 03C02825 */  move  $a1, $fp
/* 00430FA8 0320F809 */  jalr  $t9
/* 00430FAC 02403025 */   move  $a2, $s2
/* 00430FB0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00430FB4:
/* 00430FB4 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00430FB8 02402025 */  move  $a0, $s2
/* 00430FBC 0320F809 */  jalr  $t9
/* 00430FC0 00000000 */   nop   
/* 00430FC4 10000036 */  b     .L004310A0
/* 00430FC8 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00430FCC:
/* 00430FCC 8ED80004 */  lw    $t8, 4($s6)
/* 00430FD0 24010095 */  li    $at, 149
/* 00430FD4 930F0020 */  lbu   $t7, 0x20($t8)
/* 00430FD8 15E1002B */  bne   $t7, $at, .L00431088
/* 00430FDC 00000000 */   nop   
/* 00430FE0 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00430FE4 8EC40000 */  lw    $a0, ($s6)
/* 00430FE8 03C02825 */  move  $a1, $fp
/* 00430FEC 0320F809 */  jalr  $t9
/* 00430FF0 00000000 */   nop   
/* 00430FF4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00430FF8 8EC40000 */  lw    $a0, ($s6)
/* 00430FFC 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00431000 0320F809 */  jalr  $t9
/* 00431004 00000000 */   nop   
/* 00431008 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043100C 305300FF */  andi  $s3, $v0, 0xff
/* 00431010 02C02025 */  move  $a0, $s6
/* 00431014 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00431018 03C02825 */  move  $a1, $fp
/* 0043101C 0320F809 */  jalr  $t9
/* 00431020 00000000 */   nop   
/* 00431024 92CE0020 */  lbu   $t6, 0x20($s6)
/* 00431028 8ECC0004 */  lw    $t4, 4($s6)
/* 0043102C 24010004 */  li    $at, 4
/* 00431030 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431034 305E00FF */  andi  $fp, $v0, 0xff
/* 00431038 15C1000B */  bne   $t6, $at, .L00431068
/* 0043103C 8D910024 */   lw    $s1, 0x24($t4)
/* 00431040 8EC60000 */  lw    $a2, ($s6)
/* 00431044 24010036 */  li    $at, 54
/* 00431048 90C80020 */  lbu   $t0, 0x20($a2)
/* 0043104C 15010006 */  bne   $t0, $at, .L00431068
/* 00431050 00000000 */   nop   
/* 00431054 8CC90028 */  lw    $t1, 0x28($a2)
/* 00431058 24010001 */  li    $at, 1
/* 0043105C 15210002 */  bne   $t1, $at, .L00431068
/* 00431060 00000000 */   nop   
/* 00431064 241500D7 */  li    $s5, 215
.L00431068:
/* 00431068 8F99820C */  lw    $t9, %call16(emit_rrri)($gp)
/* 0043106C 02A02025 */  move  $a0, $s5
/* 00431070 03C02825 */  move  $a1, $fp
/* 00431074 02603025 */  move  $a2, $s3
/* 00431078 0320F809 */  jalr  $t9
/* 0043107C 02203825 */   move  $a3, $s1
/* 00431080 10000007 */  b     .L004310A0
/* 00431084 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431088:
/* 00431088 8F998380 */  lw    $t9, %call16(eval2)($gp)
/* 0043108C 02A02025 */  move  $a0, $s5
/* 00431090 02C02825 */  move  $a1, $s6
/* 00431094 0320F809 */  jalr  $t9
/* 00431098 03C03025 */   move  $a2, $fp
/* 0043109C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004310A0:
/* 004310A0 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 004310A4 10000783 */  b     .L00432EB4
/* 004310A8 90840000 */   lbu   $a0, ($a0)
.L004310AC:
/* 004310AC 8F99831C */  lw    $t9, %call16(uop_to_asm)($gp)
/* 004310B0 02C02025 */  move  $a0, $s6
/* 004310B4 0320F809 */  jalr  $t9
/* 004310B8 00000000 */   nop   
/* 004310BC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004310C0 3055FFFF */  andi  $s5, $v0, 0xffff
/* 004310C4 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 004310C8 0320F809 */  jalr  $t9
/* 004310CC 00000000 */   nop   
/* 004310D0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004310D4 0040B825 */  move  $s7, $v0
/* 004310D8 8EC40000 */  lw    $a0, ($s6)
/* 004310DC 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004310E0 24050048 */  li    $a1, 72
/* 004310E4 0320F809 */  jalr  $t9
/* 004310E8 00000000 */   nop   
/* 004310EC 8ED00004 */  lw    $s0, 4($s6)
/* 004310F0 24010049 */  li    $at, 73
/* 004310F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004310F8 920D0020 */  lbu   $t5, 0x20($s0)
/* 004310FC 15A10034 */  bne   $t5, $at, .L004311D0
/* 00431100 00000000 */   nop   
/* 00431104 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00431108 8EC40000 */  lw    $a0, ($s6)
/* 0043110C 0320F809 */  jalr  $t9
/* 00431110 00000000 */   nop   
/* 00431114 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431118 305300FF */  andi  $s3, $v0, 0xff
/* 0043111C 02C02025 */  move  $a0, $s6
/* 00431120 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00431124 03C02825 */  move  $a1, $fp
/* 00431128 0320F809 */  jalr  $t9
/* 0043112C 00000000 */   nop   
/* 00431130 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431134 8ECA0004 */  lw    $t2, 4($s6)
/* 00431138 305E00FF */  andi  $fp, $v0, 0xff
/* 0043113C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00431140 8D470030 */  lw    $a3, 0x30($t2)
/* 00431144 AFA00010 */  sw    $zero, 0x10($sp)
/* 00431148 02A02025 */  move  $a0, $s5
/* 0043114C 304500FF */  andi  $a1, $v0, 0xff
/* 00431150 0320F809 */  jalr  $t9
/* 00431154 02603025 */   move  $a2, $s3
/* 00431158 8ED90004 */  lw    $t9, 4($s6)
/* 0043115C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431160 03C02825 */  move  $a1, $fp
/* 00431164 8F2B0030 */  lw    $t3, 0x30($t9)
/* 00431168 24040014 */  li    $a0, 20
/* 0043116C 05600008 */  bltz  $t3, .L00431190
/* 00431170 00000000 */   nop   
/* 00431174 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 00431178 2404000E */  li    $a0, 14
/* 0043117C 00003025 */  move  $a2, $zero
/* 00431180 0320F809 */  jalr  $t9
/* 00431184 02E03825 */   move  $a3, $s7
/* 00431188 10000007 */  b     .L004311A8
/* 0043118C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431190:
/* 00431190 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 00431194 03C02825 */  move  $a1, $fp
/* 00431198 00003025 */  move  $a2, $zero
/* 0043119C 0320F809 */  jalr  $t9
/* 004311A0 02E03825 */   move  $a3, $s7
/* 004311A4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004311A8:
/* 004311A8 8ED80004 */  lw    $t8, 4($s6)
/* 004311AC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004311B0 24040001 */  li    $a0, 1
/* 004311B4 8F070030 */  lw    $a3, 0x30($t8)
/* 004311B8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004311BC 03C02825 */  move  $a1, $fp
/* 004311C0 0320F809 */  jalr  $t9
/* 004311C4 03C03025 */   move  $a2, $fp
/* 004311C8 10000047 */  b     .L004312E8
/* 004311CC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004311D0:
/* 004311D0 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004311D4 02002025 */  move  $a0, $s0
/* 004311D8 24050048 */  li    $a1, 72
/* 004311DC 0320F809 */  jalr  $t9
/* 004311E0 00000000 */   nop   
/* 004311E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004311E8 8EC40000 */  lw    $a0, ($s6)
/* 004311EC 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 004311F0 0320F809 */  jalr  $t9
/* 004311F4 00000000 */   nop   
/* 004311F8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004311FC 305300FF */  andi  $s3, $v0, 0xff
/* 00431200 02C02025 */  move  $a0, $s6
/* 00431204 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00431208 03C02825 */  move  $a1, $fp
/* 0043120C 0320F809 */  jalr  $t9
/* 00431210 00000000 */   nop   
/* 00431214 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431218 305E00FF */  andi  $fp, $v0, 0xff
/* 0043121C 8EC40004 */  lw    $a0, 4($s6)
/* 00431220 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00431224 0320F809 */  jalr  $t9
/* 00431228 00000000 */   nop   
/* 0043122C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431230 A3A20186 */  sb    $v0, 0x186($sp)
/* 00431234 00002025 */  move  $a0, $zero
/* 00431238 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0043123C 24050001 */  li    $a1, 1
/* 00431240 0320F809 */  jalr  $t9
/* 00431244 00000000 */   nop   
/* 00431248 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043124C 305400FF */  andi  $s4, $v0, 0xff
/* 00431250 304400FF */  andi  $a0, $v0, 0xff
/* 00431254 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00431258 0320F809 */  jalr  $t9
/* 0043125C 00000000 */   nop   
/* 00431260 93AF0186 */  lbu   $t7, 0x186($sp)
/* 00431264 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431268 02A02025 */  move  $a0, $s5
/* 0043126C 01FE02B4 */  teq   $t7, $fp, 0xa
/* 00431270 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00431274 03C02825 */  move  $a1, $fp
/* 00431278 02603025 */  move  $a2, $s3
/* 0043127C 0320F809 */  jalr  $t9
/* 00431280 01E03825 */   move  $a3, $t7
/* 00431284 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431288 24040059 */  li    $a0, 89
/* 0043128C 02802825 */  move  $a1, $s4
/* 00431290 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00431294 03C03025 */  move  $a2, $fp
/* 00431298 93A70186 */  lbu   $a3, 0x186($sp)
/* 0043129C 0320F809 */  jalr  $t9
/* 004312A0 00000000 */   nop   
/* 004312A4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004312A8 2404000E */  li    $a0, 14
/* 004312AC 02802825 */  move  $a1, $s4
/* 004312B0 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 004312B4 00003025 */  move  $a2, $zero
/* 004312B8 02E03825 */  move  $a3, $s7
/* 004312BC 0320F809 */  jalr  $t9
/* 004312C0 00000000 */   nop   
/* 004312C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004312C8 24040002 */  li    $a0, 2
/* 004312CC 03C02825 */  move  $a1, $fp
/* 004312D0 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 004312D4 03C03025 */  move  $a2, $fp
/* 004312D8 93A70186 */  lbu   $a3, 0x186($sp)
/* 004312DC 0320F809 */  jalr  $t9
/* 004312E0 00000000 */   nop   
/* 004312E4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004312E8:
/* 004312E8 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 004312EC 02E02025 */  move  $a0, $s7
/* 004312F0 0320F809 */  jalr  $t9
/* 004312F4 00000000 */   nop   
/* 004312F8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004312FC 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431300 100006EC */  b     .L00432EB4
/* 00431304 90840000 */   lbu   $a0, ($a0)
.L00431308:
/* 00431308 96CC0022 */  lhu   $t4, 0x22($s6)
/* 0043130C 318E0002 */  andi  $t6, $t4, 2
/* 00431310 01C002B4 */  teq   $t6, $zero, 0xa
/* 00431314 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00431318 8EC40000 */  lw    $a0, ($s6)
/* 0043131C 24050048 */  li    $a1, 72
/* 00431320 0320F809 */  jalr  $t9
/* 00431324 00000000 */   nop   
/* 00431328 8EC80000 */  lw    $t0, ($s6)
/* 0043132C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431330 91090019 */  lbu   $t1, 0x19($t0)
/* 00431334 00096E00 */  sll   $t5, $t1, 0x18
/* 00431338 000D5642 */  srl   $t2, $t5, 0x19
/* 0043133C 17CA0002 */  bne   $fp, $t2, .L00431348
/* 00431340 00000000 */   nop   
/* 00431344 241E0048 */  li    $fp, 72
.L00431348:
/* 00431348 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0043134C 02C02025 */  move  $a0, $s6
/* 00431350 03C02825 */  move  $a1, $fp
/* 00431354 0320F809 */  jalr  $t9
/* 00431358 00000000 */   nop   
/* 0043135C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431360 305E00FF */  andi  $fp, $v0, 0xff
/* 00431364 8EC40000 */  lw    $a0, ($s6)
/* 00431368 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 0043136C 0320F809 */  jalr  $t9
/* 00431370 00000000 */   nop   
/* 00431374 92D90021 */  lbu   $t9, 0x21($s6)
/* 00431378 3C010501 */  lui   $at, 0x501
/* 0043137C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431380 332B001F */  andi  $t3, $t9, 0x1f
/* 00431384 2D780020 */  sltiu $t8, $t3, 0x20
/* 00431388 00187823 */  negu  $t7, $t8
/* 0043138C 01E16024 */  and   $t4, $t7, $at
/* 00431390 016C7004 */  sllv  $t6, $t4, $t3
/* 00431394 05C10020 */  bgez  $t6, .L00431418
/* 00431398 305300FF */   andi  $s3, $v0, 0xff
/* 0043139C 8F8889D8 */  lw     $t0, %got(opcode_arch)($gp)
/* 004313A0 24010001 */  li    $at, 1
/* 004313A4 2404013A */  li    $a0, 314
/* 004313A8 91080000 */  lbu   $t0, ($t0)
/* 004313AC 03C02825 */  move  $a1, $fp
/* 004313B0 02603025 */  move  $a2, $s3
/* 004313B4 15010032 */  bne   $t0, $at, .L00431480
/* 004313B8 240D0040 */   li    $t5, 64
/* 004313BC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004313C0 8EC90024 */  lw    $t1, 0x24($s6)
/* 004313C4 AFA00010 */  sw    $zero, 0x10($sp)
/* 004313C8 2415013B */  li    $s5, 315
/* 004313CC 0320F809 */  jalr  $t9
/* 004313D0 01A93823 */   subu  $a3, $t5, $t1
/* 004313D4 92CA0021 */  lbu   $t2, 0x21($s6)
/* 004313D8 24010005 */  li    $at, 5
/* 004313DC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004313E0 3159001F */  andi  $t9, $t2, 0x1f
/* 004313E4 17210002 */  bne   $t9, $at, .L004313F0
/* 004313E8 03C02825 */   move  $a1, $fp
/* 004313EC 2415013C */  li    $s5, 316
.L004313F0:
/* 004313F0 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004313F4 8ED80024 */  lw    $t8, 0x24($s6)
/* 004313F8 240F0040 */  li    $t7, 64
/* 004313FC 02A02025 */  move  $a0, $s5
/* 00431400 03C03025 */  move  $a2, $fp
/* 00431404 AFA00010 */  sw    $zero, 0x10($sp)
/* 00431408 0320F809 */  jalr  $t9
/* 0043140C 01F83823 */   subu  $a3, $t7, $t8
/* 00431410 1000001B */  b     .L00431480
/* 00431414 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431418:
/* 00431418 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0043141C 8ECC0024 */  lw    $t4, 0x24($s6)
/* 00431420 240B0020 */  li    $t3, 32
/* 00431424 2404004F */  li    $a0, 79
/* 00431428 03C02825 */  move  $a1, $fp
/* 0043142C 02603025 */  move  $a2, $s3
/* 00431430 AFA00010 */  sw    $zero, 0x10($sp)
/* 00431434 24150054 */  li    $s5, 84
/* 00431438 0320F809 */  jalr  $t9
/* 0043143C 016C3823 */   subu  $a3, $t3, $t4
/* 00431440 92CE0021 */  lbu   $t6, 0x21($s6)
/* 00431444 24010006 */  li    $at, 6
/* 00431448 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043144C 31C8001F */  andi  $t0, $t6, 0x1f
/* 00431450 15010002 */  bne   $t0, $at, .L0043145C
/* 00431454 03C02825 */   move  $a1, $fp
/* 00431458 24150053 */  li    $s5, 83
.L0043145C:
/* 0043145C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00431460 8ECD0024 */  lw    $t5, 0x24($s6)
/* 00431464 24090020 */  li    $t1, 32
/* 00431468 02A02025 */  move  $a0, $s5
/* 0043146C 03C03025 */  move  $a2, $fp
/* 00431470 AFA00010 */  sw    $zero, 0x10($sp)
/* 00431474 0320F809 */  jalr  $t9
/* 00431478 012D3823 */   subu  $a3, $t1, $t5
/* 0043147C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00431480:
/* 00431480 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00431484 24040104 */  li    $a0, 260
/* 00431488 03C02825 */  move  $a1, $fp
/* 0043148C 02603025 */  move  $a2, $s3
/* 00431490 24070006 */  li    $a3, 6
/* 00431494 0320F809 */  jalr  $t9
/* 00431498 AFA00010 */   sw    $zero, 0x10($sp)
/* 0043149C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004314A0 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 004314A4 10000683 */  b     .L00432EB4
/* 004314A8 90840000 */   lbu   $a0, ($a0)
.L004314AC:
/* 004314AC 92C70021 */  lbu   $a3, 0x21($s6)
/* 004314B0 3C018F8D */  lui   $at, 0x8f8d
/* 004314B4 34218000 */  ori   $at, $at, 0x8000
/* 004314B8 30E7001F */  andi  $a3, $a3, 0x1f
/* 004314BC 2CEA0020 */  sltiu $t2, $a3, 0x20
/* 004314C0 000AC823 */  negu  $t9, $t2
/* 004314C4 03217824 */  and   $t7, $t9, $at
/* 004314C8 00EFC004 */  sllv  $t8, $t7, $a3
/* 004314CC 0701000A */  bgez  $t8, .L004314F8
/* 004314D0 24040004 */   li    $a0, 4
/* 004314D4 92C20028 */  lbu   $v0, 0x28($s6)
/* 004314D8 3C018F8D */  lui   $at, 0x8f8d
/* 004314DC 34218000 */  ori   $at, $at, 0x8000
/* 004314E0 2C4B0020 */  sltiu $t3, $v0, 0x20
/* 004314E4 000B6023 */  negu  $t4, $t3
/* 004314E8 01817024 */  and   $t6, $t4, $at
/* 004314EC 004E4004 */  sllv  $t0, $t6, $v0
/* 004314F0 0500003F */  bltz  $t0, .L004315F0
/* 004314F4 2C4F0020 */   sltiu $t7, $v0, 0x20
.L004314F8:
/* 004314F8 8F898038 */  lw    $t1, %got(RO_1000AB8A)($gp)
/* 004314FC 2405159B */  li    $a1, 5531
/* 00431500 03A0C825 */  move  $t9, $sp
/* 00431504 2529AB8A */  addiu $t1, %lo(RO_1000AB8A) # addiu $t1, $t1, -0x5476
/* 00431508 252F0048 */  addiu $t7, $t1, 0x48
.L0043150C:
/* 0043150C 892A0000 */  lwl   $t2, ($t1)
/* 00431510 992A0003 */  lwr   $t2, 3($t1)
/* 00431514 2529000C */  addiu $t1, $t1, 0xc
/* 00431518 2739000C */  addiu $t9, $t9, 0xc
/* 0043151C AB2AFFFC */  swl   $t2, -4($t9)
/* 00431520 BB2AFFFF */  swr   $t2, -1($t9)
/* 00431524 892DFFF8 */  lwl   $t5, -8($t1)
/* 00431528 992DFFFB */  lwr   $t5, -5($t1)
/* 0043152C AB2D0000 */  swl   $t5, ($t9)
/* 00431530 BB2D0003 */  swr   $t5, 3($t9)
/* 00431534 892AFFFC */  lwl   $t2, -4($t1)
/* 00431538 992AFFFF */  lwr   $t2, -1($t1)
/* 0043153C AB2A0004 */  swl   $t2, 4($t9)
/* 00431540 152FFFF2 */  bne   $t1, $t7, .L0043150C
/* 00431544 BB2A0007 */   swr   $t2, 7($t9)
/* 00431548 892A0000 */  lwl   $t2, ($t1)
/* 0043154C 992A0003 */  lwr   $t2, 3($t1)
/* 00431550 8F988038 */  lw    $t8, %got(RO_1000AB3A)($gp)
/* 00431554 03A07025 */  move  $t6, $sp
/* 00431558 AB2A0008 */  swl   $t2, 8($t9)
/* 0043155C BB2A000B */  swr   $t2, 0xb($t9)
/* 00431560 892D0004 */  lwl   $t5, 4($t1)
/* 00431564 992D0007 */  lwr   $t5, 7($t1)
/* 00431568 2718AB3A */  addiu $t8, %lo(RO_1000AB3A) # addiu $t8, $t8, -0x54c6
/* 0043156C 27080048 */  addiu $t0, $t8, 0x48
/* 00431570 AB2D000C */  swl   $t5, 0xc($t9)
/* 00431574 BB2D000F */  swr   $t5, 0xf($t9)
.L00431578:
/* 00431578 8B0C0000 */  lwl   $t4, ($t8)
/* 0043157C 9B0C0003 */  lwr   $t4, 3($t8)
/* 00431580 2718000C */  addiu $t8, $t8, 0xc
/* 00431584 25CE000C */  addiu $t6, $t6, 0xc
/* 00431588 A9CC004C */  swl   $t4, 0x4c($t6)
/* 0043158C B9CC004F */  swr   $t4, 0x4f($t6)
/* 00431590 8B0BFFF8 */  lwl   $t3, -8($t8)
/* 00431594 9B0BFFFB */  lwr   $t3, -5($t8)
/* 00431598 A9CB0050 */  swl   $t3, 0x50($t6)
/* 0043159C B9CB0053 */  swr   $t3, 0x53($t6)
/* 004315A0 8B0CFFFC */  lwl   $t4, -4($t8)
/* 004315A4 9B0CFFFF */  lwr   $t4, -1($t8)
/* 004315A8 A9CC0054 */  swl   $t4, 0x54($t6)
/* 004315AC 1708FFF2 */  bne   $t8, $t0, .L00431578
/* 004315B0 B9CC0057 */   swr   $t4, 0x57($t6)
/* 004315B4 8B0C0000 */  lwl   $t4, ($t8)
/* 004315B8 9B0C0003 */  lwr   $t4, 3($t8)
/* 004315BC A9CC0058 */  swl   $t4, 0x58($t6)
/* 004315C0 B9CC005B */  swr   $t4, 0x5b($t6)
/* 004315C4 8B0B0004 */  lwl   $t3, 4($t8)
/* 004315C8 9B0B0007 */  lwr   $t3, 7($t8)
/* 004315CC A9CB005C */  swl   $t3, 0x5c($t6)
/* 004315D0 B9CB005F */  swr   $t3, 0x5f($t6)
/* 004315D4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004315D8 8FA7000C */  lw    $a3, 0xc($sp)
/* 004315DC 8FA60008 */  lw    $a2, 8($sp)
/* 004315E0 0320F809 */  jalr  $t9
/* 004315E4 00000000 */   nop   
/* 004315E8 10000688 */  b     .L0043300C
/* 004315EC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004315F0:
/* 004315F0 3C01000C */  lui   $at, 0xc
/* 004315F4 34218000 */  ori   $at, $at, 0x8000
/* 004315F8 000F4823 */  negu  $t1, $t7
/* 004315FC 0121C824 */  and   $t9, $t1, $at
/* 00431600 00596804 */  sllv  $t5, $t9, $v0
/* 00431604 05A10017 */  bgez  $t5, .L00431664
/* 00431608 2CEB0020 */   sltiu $t3, $a3, 0x20
/* 0043160C 2CEA0020 */  sltiu $t2, $a3, 0x20
/* 00431610 3C01000C */  lui   $at, 0xc
/* 00431614 34218000 */  ori   $at, $at, 0x8000
/* 00431618 000A4023 */  negu  $t0, $t2
/* 0043161C 0101C024 */  and   $t8, $t0, $at
/* 00431620 00F87004 */  sllv  $t6, $t8, $a3
/* 00431624 05C10008 */  bgez  $t6, .L00431648
/* 00431628 00000000 */   nop   
/* 0043162C 8F9983E8 */  lw    $t9, %call16(eval_flt_flt_cvt)($gp)
/* 00431630 02C02025 */  move  $a0, $s6
/* 00431634 03C02825 */  move  $a1, $fp
/* 00431638 0320F809 */  jalr  $t9
/* 0043163C 00000000 */   nop   
/* 00431640 1000001C */  b     .L004316B4
/* 00431644 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431648:
/* 00431648 8F9983E0 */  lw    $t9, %call16(eval_flt_int_cvt)($gp)
/* 0043164C 02C02025 */  move  $a0, $s6
/* 00431650 03C02825 */  move  $a1, $fp
/* 00431654 0320F809 */  jalr  $t9
/* 00431658 00000000 */   nop   
/* 0043165C 10000015 */  b     .L004316B4
/* 00431660 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431664:
/* 00431664 3C01000C */  lui   $at, 0xc
/* 00431668 34218000 */  ori   $at, $at, 0x8000
/* 0043166C 000B6023 */  negu  $t4, $t3
/* 00431670 01817824 */  and   $t7, $t4, $at
/* 00431674 00EF4804 */  sllv  $t1, $t7, $a3
/* 00431678 05210008 */  bgez  $t1, .L0043169C
/* 0043167C 00000000 */   nop   
/* 00431680 8F9983DC */  lw    $t9, %call16(eval_int_flt_cvt)($gp)
/* 00431684 02C02025 */  move  $a0, $s6
/* 00431688 03C02825 */  move  $a1, $fp
/* 0043168C 0320F809 */  jalr  $t9
/* 00431690 00000000 */   nop   
/* 00431694 10000007 */  b     .L004316B4
/* 00431698 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0043169C:
/* 0043169C 8F9983E4 */  lw    $t9, %call16(eval_int_int_cvt)($gp)
/* 004316A0 02C02025 */  move  $a0, $s6
/* 004316A4 03C02825 */  move  $a1, $fp
/* 004316A8 0320F809 */  jalr  $t9
/* 004316AC 00000000 */   nop   
/* 004316B0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004316B4:
/* 004316B4 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 004316B8 100005FE */  b     .L00432EB4
/* 004316BC 90840000 */   lbu   $a0, ($a0)
.L004316C0:
/* 004316C0 92C70021 */  lbu   $a3, 0x21($s6)
/* 004316C4 3C01BFA1 */  lui   $at, 0xbfa1
/* 004316C8 30E7001F */  andi  $a3, $a3, 0x1f
/* 004316CC 2CF90020 */  sltiu $t9, $a3, 0x20
/* 004316D0 00196823 */  negu  $t5, $t9
/* 004316D4 01A15024 */  and   $t2, $t5, $at
/* 004316D8 00EA4004 */  sllv  $t0, $t2, $a3
/* 004316DC 05000003 */  bltz  $t0, .L004316EC
/* 004316E0 2401000D */   li    $at, 13
/* 004316E4 14E1000B */  bne   $a3, $at, .L00431714
/* 004316E8 00000000 */   nop   
.L004316EC:
/* 004316EC 92C20028 */  lbu   $v0, 0x28($s6)
/* 004316F0 3C01BFA1 */  lui   $at, 0xbfa1
/* 004316F4 2C580020 */  sltiu $t8, $v0, 0x20
/* 004316F8 00187023 */  negu  $t6, $t8
/* 004316FC 01C15824 */  and   $t3, $t6, $at
/* 00431700 004B6004 */  sllv  $t4, $t3, $v0
/* 00431704 05800042 */  bltz  $t4, .L00431810
/* 00431708 2401000D */   li    $at, 13
/* 0043170C 10410040 */  beq   $v0, $at, .L00431810
/* 00431710 00000000 */   nop   
.L00431714:
/* 00431714 8F8F8038 */  lw    $t7, %got(RO_1000AAEA)($gp)
/* 00431718 24040004 */  li    $a0, 4
/* 0043171C 240515B6 */  li    $a1, 5558
/* 00431720 25EFAAEA */  addiu $t7, %lo(RO_1000AAEA) # addiu $t7, $t7, -0x5516
/* 00431724 25EA0048 */  addiu $t2, $t7, 0x48
/* 00431728 03A06825 */  move  $t5, $sp
.L0043172C:
/* 0043172C 89F90000 */  lwl   $t9, ($t7)
/* 00431730 99F90003 */  lwr   $t9, 3($t7)
/* 00431734 25EF000C */  addiu $t7, $t7, 0xc
/* 00431738 25AD000C */  addiu $t5, $t5, 0xc
/* 0043173C A9B9FFFC */  swl   $t9, -4($t5)
/* 00431740 B9B9FFFF */  swr   $t9, -1($t5)
/* 00431744 89E9FFF8 */  lwl   $t1, -8($t7)
/* 00431748 99E9FFFB */  lwr   $t1, -5($t7)
/* 0043174C A9A90000 */  swl   $t1, ($t5)
/* 00431750 B9A90003 */  swr   $t1, 3($t5)
/* 00431754 89F9FFFC */  lwl   $t9, -4($t7)
/* 00431758 99F9FFFF */  lwr   $t9, -1($t7)
/* 0043175C A9B90004 */  swl   $t9, 4($t5)
/* 00431760 15EAFFF2 */  bne   $t7, $t2, .L0043172C
/* 00431764 B9B90007 */   swr   $t9, 7($t5)
/* 00431768 89F90000 */  lwl   $t9, ($t7)
/* 0043176C 99F90003 */  lwr   $t9, 3($t7)
/* 00431770 8F888038 */  lw    $t0, %got(RO_1000AA9A)($gp)
/* 00431774 03A05825 */  move  $t3, $sp
/* 00431778 A9B90008 */  swl   $t9, 8($t5)
/* 0043177C B9B9000B */  swr   $t9, 0xb($t5)
/* 00431780 89E90004 */  lwl   $t1, 4($t7)
/* 00431784 99E90007 */  lwr   $t1, 7($t7)
/* 00431788 2508AA9A */  addiu $t0, %lo(RO_1000AA9A) # addiu $t0, $t0, -0x5566
/* 0043178C 250C0048 */  addiu $t4, $t0, 0x48
/* 00431790 A9A9000C */  swl   $t1, 0xc($t5)
/* 00431794 B9A9000F */  swr   $t1, 0xf($t5)
.L00431798:
/* 00431798 890E0000 */  lwl   $t6, ($t0)
/* 0043179C 990E0003 */  lwr   $t6, 3($t0)
/* 004317A0 2508000C */  addiu $t0, $t0, 0xc
/* 004317A4 256B000C */  addiu $t3, $t3, 0xc
/* 004317A8 A96E004C */  swl   $t6, 0x4c($t3)
/* 004317AC B96E004F */  swr   $t6, 0x4f($t3)
/* 004317B0 8918FFF8 */  lwl   $t8, -8($t0)
/* 004317B4 9918FFFB */  lwr   $t8, -5($t0)
/* 004317B8 A9780050 */  swl   $t8, 0x50($t3)
/* 004317BC B9780053 */  swr   $t8, 0x53($t3)
/* 004317C0 890EFFFC */  lwl   $t6, -4($t0)
/* 004317C4 990EFFFF */  lwr   $t6, -1($t0)
/* 004317C8 A96E0054 */  swl   $t6, 0x54($t3)
/* 004317CC 150CFFF2 */  bne   $t0, $t4, .L00431798
/* 004317D0 B96E0057 */   swr   $t6, 0x57($t3)
/* 004317D4 890E0000 */  lwl   $t6, ($t0)
/* 004317D8 990E0003 */  lwr   $t6, 3($t0)
/* 004317DC A96E0058 */  swl   $t6, 0x58($t3)
/* 004317E0 B96E005B */  swr   $t6, 0x5b($t3)
/* 004317E4 89180004 */  lwl   $t8, 4($t0)
/* 004317E8 99180007 */  lwr   $t8, 7($t0)
/* 004317EC A978005C */  swl   $t8, 0x5c($t3)
/* 004317F0 B978005F */  swr   $t8, 0x5f($t3)
/* 004317F4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004317F8 8FA7000C */  lw    $a3, 0xc($sp)
/* 004317FC 8FA60008 */  lw    $a2, 8($sp)
/* 00431800 0320F809 */  jalr  $t9
/* 00431804 00000000 */   nop   
/* 00431808 10000600 */  b     .L0043300C
/* 0043180C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431810:
/* 00431810 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00431814 8EC40000 */  lw    $a0, ($s6)
/* 00431818 24050048 */  li    $a1, 72
/* 0043181C 0320F809 */  jalr  $t9
/* 00431820 00000000 */   nop   
/* 00431824 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431828 8EC40000 */  lw    $a0, ($s6)
/* 0043182C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00431830 0320F809 */  jalr  $t9
/* 00431834 00000000 */   nop   
/* 00431838 92CA0028 */  lbu   $t2, 0x28($s6)
/* 0043183C 3C01BFA1 */  lui   $at, 0xbfa1
/* 00431840 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431844 2D4F0020 */  sltiu $t7, $t2, 0x20
/* 00431848 000F6823 */  negu  $t5, $t7
/* 0043184C 01A14824 */  and   $t1, $t5, $at
/* 00431850 0149C804 */  sllv  $t9, $t1, $t2
/* 00431854 0721001D */  bgez  $t9, .L004318CC
/* 00431858 305300FF */   andi  $s3, $v0, 0xff
/* 0043185C 92CC0021 */  lbu   $t4, 0x21($s6)
/* 00431860 2401000D */  li    $at, 13
/* 00431864 3188001F */  andi  $t0, $t4, 0x1f
/* 00431868 15010010 */  bne   $t0, $at, .L004318AC
/* 0043186C 00000000 */   nop   
/* 00431870 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00431874 02C02025 */  move  $a0, $s6
/* 00431878 03C02825 */  move  $a1, $fp
/* 0043187C 0320F809 */  jalr  $t9
/* 00431880 00000000 */   nop   
/* 00431884 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431888 305E00FF */  andi  $fp, $v0, 0xff
/* 0043188C 24040065 */  li    $a0, 101
/* 00431890 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00431894 02602825 */  move  $a1, $s3
/* 00431898 304600FF */  andi  $a2, $v0, 0xff
/* 0043189C 0320F809 */  jalr  $t9
/* 004318A0 00000000 */   nop   
/* 004318A4 10000028 */  b     .L00431948
/* 004318A8 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004318AC:
/* 004318AC 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 004318B0 02C02025 */  move  $a0, $s6
/* 004318B4 02602825 */  move  $a1, $s3
/* 004318B8 0320F809 */  jalr  $t9
/* 004318BC 00000000 */   nop   
/* 004318C0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004318C4 10000020 */  b     .L00431948
/* 004318C8 305E00FF */   andi  $fp, $v0, 0xff
.L004318CC:
/* 004318CC 92CB0021 */  lbu   $t3, 0x21($s6)
/* 004318D0 3C01BFA1 */  lui   $at, 0xbfa1
/* 004318D4 3178001F */  andi  $t8, $t3, 0x1f
/* 004318D8 2F0E0020 */  sltiu $t6, $t8, 0x20
/* 004318DC 000E7823 */  negu  $t7, $t6
/* 004318E0 01E16824 */  and   $t5, $t7, $at
/* 004318E4 030D4804 */  sllv  $t1, $t5, $t8
/* 004318E8 05210010 */  bgez  $t1, .L0043192C
/* 004318EC 00000000 */   nop   
/* 004318F0 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 004318F4 02C02025 */  move  $a0, $s6
/* 004318F8 03C02825 */  move  $a1, $fp
/* 004318FC 0320F809 */  jalr  $t9
/* 00431900 00000000 */   nop   
/* 00431904 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431908 305E00FF */  andi  $fp, $v0, 0xff
/* 0043190C 24040061 */  li    $a0, 97
/* 00431910 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00431914 304500FF */  andi  $a1, $v0, 0xff
/* 00431918 02603025 */  move  $a2, $s3
/* 0043191C 0320F809 */  jalr  $t9
/* 00431920 00000000 */   nop   
/* 00431924 10000008 */  b     .L00431948
/* 00431928 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0043192C:
/* 0043192C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00431930 02C02025 */  move  $a0, $s6
/* 00431934 02602825 */  move  $a1, $s3
/* 00431938 0320F809 */  jalr  $t9
/* 0043193C 00000000 */   nop   
/* 00431940 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431944 305E00FF */  andi  $fp, $v0, 0xff
.L00431948:
/* 00431948 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0043194C 10000559 */  b     .L00432EB4
/* 00431950 90840000 */   lbu   $a0, ($a0)
.L00431954:
/* 00431954 8F998324 */  lw    $t9, %call16(trap)($gp)
/* 00431958 8EC40024 */  lw    $a0, 0x24($s6)
/* 0043195C 8EC50000 */  lw    $a1, ($s6)
/* 00431960 0320F809 */  jalr  $t9
/* 00431964 24060001 */   li    $a2, 1
/* 00431968 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043196C 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431970 10000550 */  b     .L00432EB4
/* 00431974 90840000 */   lbu   $a0, ($a0)
.L00431978:
/* 00431978 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0043197C 8EC40000 */  lw    $a0, ($s6)
/* 00431980 03C02825 */  move  $a1, $fp
/* 00431984 0320F809 */  jalr  $t9
/* 00431988 00000000 */   nop   
/* 0043198C 8ECA0000 */  lw    $t2, ($s6)
/* 00431990 92C30019 */  lbu   $v1, 0x19($s6)
/* 00431994 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431998 91530019 */  lbu   $s3, 0x19($t2)
/* 0043199C 0003CE00 */  sll   $t9, $v1, 0x18
/* 004319A0 00196642 */  srl   $t4, $t9, 0x19
/* 004319A4 00139E00 */  sll   $s3, $s3, 0x18
/* 004319A8 00139E42 */  srl   $s3, $s3, 0x19
/* 004319AC 327300FF */  andi  $s3, $s3, 0xff
/* 004319B0 026C4026 */  xor   $t0, $s3, $t4
/* 004319B4 00085E40 */  sll   $t3, $t0, 0x19
/* 004319B8 000B7602 */  srl   $t6, $t3, 0x18
/* 004319BC 8F998508 */  lw    $t9, %call16(inc_usage)($gp)
/* 004319C0 01C32026 */  xor   $a0, $t6, $v1
/* 004319C4 96C50014 */  lhu   $a1, 0x14($s6)
/* 004319C8 A2C40019 */  sb    $a0, 0x19($s6)
/* 004319CC 00042600 */  sll   $a0, $a0, 0x18
/* 004319D0 00042642 */  srl   $a0, $a0, 0x19
/* 004319D4 0320F809 */  jalr  $t9
/* 004319D8 24A5FFFF */   addiu $a1, $a1, -1
/* 004319DC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004319E0 24040103 */  li    $a0, 259
/* 004319E4 02602825 */  move  $a1, $s3
/* 004319E8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004319EC 00003025 */  move  $a2, $zero
/* 004319F0 24070008 */  li    $a3, 8
/* 004319F4 0320F809 */  jalr  $t9
/* 004319F8 AFA00010 */   sw    $zero, 0x10($sp)
/* 004319FC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431A00 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431A04 1000052B */  b     .L00432EB4
/* 00431A08 90840000 */   lbu   $a0, ($a0)
.L00431A0C:
/* 00431A0C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00431A10 8EC40000 */  lw    $a0, ($s6)
/* 00431A14 03C02825 */  move  $a1, $fp
/* 00431A18 0320F809 */  jalr  $t9
/* 00431A1C 00000000 */   nop   
/* 00431A20 8ECD0000 */  lw    $t5, ($s6)
/* 00431A24 92C30019 */  lbu   $v1, 0x19($s6)
/* 00431A28 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431A2C 91B30019 */  lbu   $s3, 0x19($t5)
/* 00431A30 0003C600 */  sll   $t8, $v1, 0x18
/* 00431A34 00184E42 */  srl   $t1, $t8, 0x19
/* 00431A38 00139E00 */  sll   $s3, $s3, 0x18
/* 00431A3C 00139E42 */  srl   $s3, $s3, 0x19
/* 00431A40 327300FF */  andi  $s3, $s3, 0xff
/* 00431A44 02695026 */  xor   $t2, $s3, $t1
/* 00431A48 000ACE40 */  sll   $t9, $t2, 0x19
/* 00431A4C 00196602 */  srl   $t4, $t9, 0x18
/* 00431A50 8F998508 */  lw    $t9, %call16(inc_usage)($gp)
/* 00431A54 01832026 */  xor   $a0, $t4, $v1
/* 00431A58 96C50014 */  lhu   $a1, 0x14($s6)
/* 00431A5C A2C40019 */  sb    $a0, 0x19($s6)
/* 00431A60 00042600 */  sll   $a0, $a0, 0x18
/* 00431A64 00042642 */  srl   $a0, $a0, 0x19
/* 00431A68 0320F809 */  jalr  $t9
/* 00431A6C 24A5FFFF */   addiu $a1, $a1, -1
/* 00431A70 92CB0020 */  lbu   $t3, 0x20($s6)
/* 00431A74 2401000C */  li    $at, 12
/* 00431A78 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431A7C 5561000E */  bnel  $t3, $at, .L00431AB8
/* 00431A80 92CD0021 */   lbu   $t5, 0x21($s6)
/* 00431A84 92CE0021 */  lbu   $t6, 0x21($s6)
/* 00431A88 8EC60024 */  lw    $a2, 0x24($s6)
/* 00431A8C 24010006 */  li    $at, 6
/* 00431A90 31CF001F */  andi  $t7, $t6, 0x1f
/* 00431A94 15E10004 */  bne   $t7, $at, .L00431AA8
/* 00431A98 24C60001 */   addiu $a2, $a2, 1
/* 00431A9C 24150101 */  li    $s5, 257
/* 00431AA0 1000000E */  b     .L00431ADC
/* 00431AA4 3C108000 */   lui   $s0, 0x8000
.L00431AA8:
/* 00431AA8 24150102 */  li    $s5, 258
/* 00431AAC 1000000B */  b     .L00431ADC
/* 00431AB0 00008025 */   move  $s0, $zero
/* 00431AB4 92CD0021 */  lbu   $t5, 0x21($s6)
.L00431AB8:
/* 00431AB8 24010006 */  li    $at, 6
/* 00431ABC 8EC60024 */  lw    $a2, 0x24($s6)
/* 00431AC0 31B8001F */  andi  $t8, $t5, 0x1f
/* 00431AC4 17010004 */  bne   $t8, $at, .L00431AD8
/* 00431AC8 24150100 */   li    $s5, 256
/* 00431ACC 241500FF */  li    $s5, 255
/* 00431AD0 10000002 */  b     .L00431ADC
/* 00431AD4 3C108000 */   lui   $s0, 0x8000
.L00431AD8:
/* 00431AD8 00008025 */  move  $s0, $zero
.L00431ADC:
/* 00431ADC 10D00007 */  beq   $a2, $s0, .L00431AFC
/* 00431AE0 00000000 */   nop   
/* 00431AE4 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00431AE8 02A02025 */  move  $a0, $s5
/* 00431AEC 02602825 */  move  $a1, $s3
/* 00431AF0 0320F809 */  jalr  $t9
/* 00431AF4 00003825 */   move  $a3, $zero
/* 00431AF8 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00431AFC:
/* 00431AFC 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431B00 100004EC */  b     .L00432EB4
/* 00431B04 90840000 */   lbu   $a0, ($a0)
.L00431B08:
/* 00431B08 8F998394 */  lw    $t9, %call16(eval_irel)($gp)
/* 00431B0C 02C02025 */  move  $a0, $s6
/* 00431B10 0320F809 */  jalr  $t9
/* 00431B14 00000000 */   nop   
/* 00431B18 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431B1C 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431B20 100004E4 */  b     .L00432EB4
/* 00431B24 90840000 */   lbu   $a0, ($a0)
.L00431B28:
/* 00431B28 8F99838C */  lw    $t9, %call16(eval_mov)($gp)
/* 00431B2C 02C02025 */  move  $a0, $s6
/* 00431B30 0320F809 */  jalr  $t9
/* 00431B34 00000000 */   nop   
/* 00431B38 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431B3C 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431B40 100004DC */  b     .L00432EB4
/* 00431B44 90840000 */   lbu   $a0, ($a0)
.L00431B48:
/* 00431B48 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00431B4C 8EC40000 */  lw    $a0, ($s6)
/* 00431B50 24050048 */  li    $a1, 72
/* 00431B54 0320F809 */  jalr  $t9
/* 00431B58 00000000 */   nop   
/* 00431B5C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431B60 8EC40000 */  lw    $a0, ($s6)
/* 00431B64 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00431B68 0320F809 */  jalr  $t9
/* 00431B6C 00000000 */   nop   
/* 00431B70 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431B74 305300FF */  andi  $s3, $v0, 0xff
/* 00431B78 8F8989D8 */  lw     $t1, %got(opcode_arch)($gp)
/* 00431B7C 91290000 */  lbu   $t1, ($t1)
/* 00431B80 1520000D */  bnez  $t1, .L00431BB8
/* 00431B84 00000000 */   nop   
/* 00431B88 92CA0021 */  lbu   $t2, 0x21($s6)
/* 00431B8C 3C010501 */  lui   $at, 0x501
/* 00431B90 3159001F */  andi  $t9, $t2, 0x1f
/* 00431B94 2F2C0020 */  sltiu $t4, $t9, 0x20
/* 00431B98 000C4023 */  negu  $t0, $t4
/* 00431B9C 01015824 */  and   $t3, $t0, $at
/* 00431BA0 032B7004 */  sllv  $t6, $t3, $t9
/* 00431BA4 05C10004 */  bgez  $t6, .L00431BB8
/* 00431BA8 00000000 */   nop   
/* 00431BAC 00409825 */  move  $s3, $v0
/* 00431BB0 26730001 */  addiu $s3, $s3, 1
/* 00431BB4 327300FF */  andi  $s3, $s3, 0xff
.L00431BB8:
/* 00431BB8 8F99852C */  lw    $t9, %call16(is_available)($gp)
/* 00431BBC A3B30186 */  sb    $s3, 0x186($sp)
/* 00431BC0 02602025 */  move  $a0, $s3
/* 00431BC4 0320F809 */  jalr  $t9
/* 00431BC8 00000000 */   nop   
/* 00431BCC 1440000D */  bnez  $v0, .L00431C04
/* 00431BD0 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 00431BD4 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00431BD8 00002025 */  move  $a0, $zero
/* 00431BDC 24050001 */  li    $a1, 1
/* 00431BE0 0320F809 */  jalr  $t9
/* 00431BE4 00000000 */   nop   
/* 00431BE8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431BEC A3A20186 */  sb    $v0, 0x186($sp)
/* 00431BF0 304400FF */  andi  $a0, $v0, 0xff
/* 00431BF4 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00431BF8 0320F809 */  jalr  $t9
/* 00431BFC 00000000 */   nop   
/* 00431C00 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00431C04:
/* 00431C04 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00431C08 2404004F */  li    $a0, 79
/* 00431C0C 93A50186 */  lbu   $a1, 0x186($sp)
/* 00431C10 02603025 */  move  $a2, $s3
/* 00431C14 24070002 */  li    $a3, 2
/* 00431C18 0320F809 */  jalr  $t9
/* 00431C1C AFA00010 */   sw    $zero, 0x10($sp)
/* 00431C20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431C24 8ECF0004 */  lw    $t7, 4($s6)
/* 00431C28 93A50186 */  lbu   $a1, 0x186($sp)
/* 00431C2C 8F9981EC */  lw    $t9, %call16(emit_rllb)($gp)
/* 00431C30 8DE70024 */  lw    $a3, 0x24($t7)
/* 00431C34 2404002A */  li    $a0, 42
/* 00431C38 00003025 */  move  $a2, $zero
/* 00431C3C 0320F809 */  jalr  $t9
/* 00431C40 AFA50010 */   sw    $a1, 0x10($sp)
/* 00431C44 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431C48 24010002 */  li    $at, 2
/* 00431C4C 8F8D89E4 */  lw     $t5, %got(pic_level)($gp)
/* 00431C50 8DAD0000 */  lw    $t5, ($t5)
/* 00431C54 15A10006 */  bne   $t5, $at, .L00431C70
/* 00431C58 00000000 */   nop   
/* 00431C5C 8F9982BC */  lw    $t9, %call16(emit_cpadd)($gp)
/* 00431C60 93A40186 */  lbu   $a0, 0x186($sp)
/* 00431C64 0320F809 */  jalr  $t9
/* 00431C68 00000000 */   nop   
/* 00431C6C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00431C70:
/* 00431C70 8F998218 */  lw    $t9, %call16(emit_r)($gp)
/* 00431C74 24040022 */  li    $a0, 34
/* 00431C78 93A50186 */  lbu   $a1, 0x186($sp)
/* 00431C7C 0320F809 */  jalr  $t9
/* 00431C80 00000000 */   nop   
/* 00431C84 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431C88 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431C8C 10000489 */  b     .L00432EB4
/* 00431C90 90840000 */   lbu   $a0, ($a0)
.L00431C94:
/* 00431C94 8ED80028 */  lw    $t8, 0x28($s6)
/* 00431C98 17000004 */  bnez  $t8, .L00431CAC
/* 00431C9C 00000000 */   nop   
/* 00431CA0 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431CA4 10000483 */  b     .L00432EB4
/* 00431CA8 90840000 */   lbu   $a0, ($a0)
.L00431CAC:
/* 00431CAC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00431CB0 2404001A */  li    $a0, 26
/* 00431CB4 00002825 */  move  $a1, $zero
/* 00431CB8 0320F809 */  jalr  $t9
/* 00431CBC 00000000 */   nop   
/* 00431CC0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431CC4 8EC40024 */  lw    $a0, 0x24($s6)
/* 00431CC8 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00431CCC 0320F809 */  jalr  $t9
/* 00431CD0 00000000 */   nop   
/* 00431CD4 8EC20028 */  lw    $v0, 0x28($s6)
/* 00431CD8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431CDC 1040000A */  beqz  $v0, .L00431D08
/* 00431CE0 00408025 */   move  $s0, $v0
.L00431CE4:
/* 00431CE4 8ED60008 */  lw    $s6, 8($s6)
/* 00431CE8 8F998254 */  lw    $t9, %call16(emit_dir_ll)($gp)
/* 00431CEC 00002825 */  move  $a1, $zero
/* 00431CF0 8EC90004 */  lw    $t1, 4($s6)
/* 00431CF4 0320F809 */  jalr  $t9
/* 00431CF8 8D240024 */   lw    $a0, 0x24($t1)
/* 00431CFC 2610FFFF */  addiu $s0, $s0, -1
/* 00431D00 1600FFF8 */  bnez  $s0, .L00431CE4
/* 00431D04 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431D08:
/* 00431D08 8F8A8B80 */  lw     $t2, %got(current_text_sec)($gp)
/* 00431D0C 8D4A0000 */  lw    $t2, ($t2)
/* 00431D10 11400007 */  beqz  $t2, .L00431D30
/* 00431D14 00000000 */   nop   
/* 00431D18 8F998234 */  lw    $t9, %call16(emit_itext)($gp)
/* 00431D1C 8F848B80 */  lw     $a0, %got(current_text_sec)($gp)
/* 00431D20 0320F809 */  jalr  $t9
/* 00431D24 00000000 */   nop   
/* 00431D28 10000007 */  b     .L00431D48
/* 00431D2C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431D30:
/* 00431D30 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00431D34 24040015 */  li    $a0, 21
/* 00431D38 00002825 */  move  $a1, $zero
/* 00431D3C 0320F809 */  jalr  $t9
/* 00431D40 00000000 */   nop   
/* 00431D44 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00431D48:
/* 00431D48 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431D4C 10000459 */  b     .L00432EB4
/* 00431D50 90840000 */   lbu   $a0, ($a0)
.L00431D54:
/* 00431D54 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431D58 10000456 */  b     .L00432EB4
/* 00431D5C 90840000 */   lbu   $a0, ($a0)
.L00431D60:
/* 00431D60 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431D64 10000453 */  b     .L00432EB4
/* 00431D68 90840000 */   lbu   $a0, ($a0)
.L00431D6C:
/* 00431D6C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00431D70 2404001D */  li    $a0, 29
/* 00431D74 8EC50024 */  lw    $a1, 0x24($s6)
/* 00431D78 0320F809 */  jalr  $t9
/* 00431D7C 00000000 */   nop   
/* 00431D80 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431D84 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431D88 1000044A */  b     .L00432EB4
/* 00431D8C 90840000 */   lbu   $a0, ($a0)
.L00431D90:
/* 00431D90 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00431D94 2404001E */  li    $a0, 30
/* 00431D98 8EC50024 */  lw    $a1, 0x24($s6)
/* 00431D9C 0320F809 */  jalr  $t9
/* 00431DA0 00000000 */   nop   
/* 00431DA4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431DA8 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431DAC 10000441 */  b     .L00432EB4
/* 00431DB0 90840000 */   lbu   $a0, ($a0)
.L00431DB4:
/* 00431DB4 8F9983E0 */  lw    $t9, %call16(eval_flt_int_cvt)($gp)
/* 00431DB8 02C02025 */  move  $a0, $s6
/* 00431DBC 03C02825 */  move  $a1, $fp
/* 00431DC0 0320F809 */  jalr  $t9
/* 00431DC4 00000000 */   nop   
/* 00431DC8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431DCC 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00431DD0 10000438 */  b     .L00432EB4
/* 00431DD4 90840000 */   lbu   $a0, ($a0)
.L00431DD8:
/* 00431DD8 8EC60000 */  lw    $a2, ($s6)
/* 00431DDC 24010049 */  li    $at, 73
/* 00431DE0 90CC0020 */  lbu   $t4, 0x20($a2)
/* 00431DE4 15810029 */  bne   $t4, $at, .L00431E8C
/* 00431DE8 00000000 */   nop   
/* 00431DEC 8CC80030 */  lw    $t0, 0x30($a2)
/* 00431DF0 1500000C */  bnez  $t0, .L00431E24
/* 00431DF4 00000000 */   nop   
/* 00431DF8 92CB0019 */  lbu   $t3, 0x19($s6)
/* 00431DFC 0000F025 */  move  $fp, $zero
/* 00431E00 00002025 */  move  $a0, $zero
/* 00431E04 3179FF01 */  andi  $t9, $t3, 0xff01
/* 00431E08 A2D90019 */  sb    $t9, 0x19($s6)
/* 00431E0C 8F998508 */  lw    $t9, %call16(inc_usage)($gp)
/* 00431E10 96C50014 */  lhu   $a1, 0x14($s6)
/* 00431E14 0320F809 */  jalr  $t9
/* 00431E18 00000000 */   nop   
/* 00431E1C 10000091 */  b     .L00432064
/* 00431E20 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431E24:
/* 00431E24 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00431E28 8EC40004 */  lw    $a0, 4($s6)
/* 00431E2C 03C02825 */  move  $a1, $fp
/* 00431E30 0320F809 */  jalr  $t9
/* 00431E34 00000000 */   nop   
/* 00431E38 8ECE0004 */  lw    $t6, 4($s6)
/* 00431E3C 92C30019 */  lbu   $v1, 0x19($s6)
/* 00431E40 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431E44 91CF0019 */  lbu   $t7, 0x19($t6)
/* 00431E48 00034E00 */  sll   $t1, $v1, 0x18
/* 00431E4C 00095642 */  srl   $t2, $t1, 0x19
/* 00431E50 000F6E00 */  sll   $t5, $t7, 0x18
/* 00431E54 000DC642 */  srl   $t8, $t5, 0x19
/* 00431E58 030A6026 */  xor   $t4, $t8, $t2
/* 00431E5C 000C4640 */  sll   $t0, $t4, 0x19
/* 00431E60 00085E02 */  srl   $t3, $t0, 0x18
/* 00431E64 8F998508 */  lw    $t9, %call16(inc_usage)($gp)
/* 00431E68 01632026 */  xor   $a0, $t3, $v1
/* 00431E6C 96C50014 */  lhu   $a1, 0x14($s6)
/* 00431E70 A2C40019 */  sb    $a0, 0x19($s6)
/* 00431E74 00042600 */  sll   $a0, $a0, 0x18
/* 00431E78 00042642 */  srl   $a0, $a0, 0x19
/* 00431E7C 0320F809 */  jalr  $t9
/* 00431E80 24A5FFFF */   addiu $a1, $a1, -1
/* 00431E84 10000077 */  b     .L00432064
/* 00431E88 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431E8C:
/* 00431E8C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00431E90 0320F809 */  jalr  $t9
/* 00431E94 00000000 */   nop   
/* 00431E98 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431E9C 0040B825 */  move  $s7, $v0
/* 00431EA0 8EC40000 */  lw    $a0, ($s6)
/* 00431EA4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00431EA8 24050048 */  li    $a1, 72
/* 00431EAC 0320F809 */  jalr  $t9
/* 00431EB0 00000000 */   nop   
/* 00431EB4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431EB8 8EC40000 */  lw    $a0, ($s6)
/* 00431EBC 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00431EC0 0320F809 */  jalr  $t9
/* 00431EC4 00000000 */   nop   
/* 00431EC8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431ECC 305300FF */  andi  $s3, $v0, 0xff
/* 00431ED0 304400FF */  andi  $a0, $v0, 0xff
/* 00431ED4 8F998534 */  lw    $t9, %call16(usage_count)($gp)
/* 00431ED8 0320F809 */  jalr  $t9
/* 00431EDC 00000000 */   nop   
/* 00431EE0 1440000F */  bnez  $v0, .L00431F20
/* 00431EE4 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 00431EE8 8F99852C */  lw    $t9, %call16(is_available)($gp)
/* 00431EEC 02602025 */  move  $a0, $s3
/* 00431EF0 0320F809 */  jalr  $t9
/* 00431EF4 00000000 */   nop   
/* 00431EF8 10400009 */  beqz  $v0, .L00431F20
/* 00431EFC 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 00431F00 8F9984D8 */  lw    $t9, %call16(get_reg)($gp)
/* 00431F04 327E00FF */  andi  $fp, $s3, 0xff
/* 00431F08 02602025 */  move  $a0, $s3
/* 00431F0C 02C02825 */  move  $a1, $s6
/* 00431F10 0320F809 */  jalr  $t9
/* 00431F14 96C60014 */   lhu   $a2, 0x14($s6)
/* 00431F18 1000000F */  b     .L00431F58
/* 00431F1C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00431F20:
/* 00431F20 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00431F24 02C02025 */  move  $a0, $s6
/* 00431F28 96C50014 */  lhu   $a1, 0x14($s6)
/* 00431F2C 0320F809 */  jalr  $t9
/* 00431F30 00000000 */   nop   
/* 00431F34 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431F38 92C60021 */  lbu   $a2, 0x21($s6)
/* 00431F3C 305E00FF */  andi  $fp, $v0, 0xff
/* 00431F40 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00431F44 304400FF */  andi  $a0, $v0, 0xff
/* 00431F48 02602825 */  move  $a1, $s3
/* 00431F4C 0320F809 */  jalr  $t9
/* 00431F50 30C6001F */   andi  $a2, $a2, 0x1f
/* 00431F54 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00431F58:
/* 00431F58 92C30019 */  lbu   $v1, 0x19($s6)
/* 00431F5C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 00431F60 2404000D */  li    $a0, 13
/* 00431F64 00037600 */  sll   $t6, $v1, 0x18
/* 00431F68 000E7E42 */  srl   $t7, $t6, 0x19
/* 00431F6C 03CF6826 */  xor   $t5, $fp, $t7
/* 00431F70 000D4E40 */  sll   $t1, $t5, 0x19
/* 00431F74 0009C602 */  srl   $t8, $t1, 0x18
/* 00431F78 03035026 */  xor   $t2, $t8, $v1
/* 00431F7C A2CA0019 */  sb    $t2, 0x19($s6)
/* 00431F80 02602825 */  move  $a1, $s3
/* 00431F84 00003025 */  move  $a2, $zero
/* 00431F88 0320F809 */  jalr  $t9
/* 00431F8C 02E03825 */   move  $a3, $s7
/* 00431F90 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431F94 8EC40004 */  lw    $a0, 4($s6)
/* 00431F98 24050048 */  li    $a1, 72
/* 00431F9C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00431FA0 0320F809 */  jalr  $t9
/* 00431FA4 00000000 */   nop   
/* 00431FA8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431FAC 8EC40004 */  lw    $a0, 4($s6)
/* 00431FB0 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00431FB4 0320F809 */  jalr  $t9
/* 00431FB8 00000000 */   nop   
/* 00431FBC 304C00FF */  andi  $t4, $v0, 0xff
/* 00431FC0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431FC4 13CC0022 */  beq   $fp, $t4, .L00432050
/* 00431FC8 305300FF */   andi  $s3, $v0, 0xff
/* 00431FCC 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00431FD0 92C60021 */  lbu   $a2, 0x21($s6)
/* 00431FD4 03C02025 */  move  $a0, $fp
/* 00431FD8 02602825 */  move  $a1, $s3
/* 00431FDC 0320F809 */  jalr  $t9
/* 00431FE0 30C6001F */   andi  $a2, $a2, 0x1f
/* 00431FE4 92C40018 */  lbu   $a0, 0x18($s6)
/* 00431FE8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00431FEC 10800018 */  beqz  $a0, .L00432050
/* 00431FF0 00000000 */   nop   
/* 00431FF4 8F9985C4 */  lw    $t9, %call16(temp_usage_count)($gp)
/* 00431FF8 0320F809 */  jalr  $t9
/* 00431FFC 00000000 */   nop   
/* 00432000 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432004 02C02025 */  move  $a0, $s6
/* 00432008 00402825 */  move  $a1, $v0
/* 0043200C 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00432010 0320F809 */  jalr  $t9
/* 00432014 00000000 */   nop   
/* 00432018 92C30019 */  lbu   $v1, 0x19($s6)
/* 0043201C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432020 92C40018 */  lbu   $a0, 0x18($s6)
/* 00432024 00034600 */  sll   $t0, $v1, 0x18
/* 00432028 00085E42 */  srl   $t3, $t0, 0x19
/* 0043202C 004BC826 */  xor   $t9, $v0, $t3
/* 00432030 00197640 */  sll   $t6, $t9, 0x19
/* 00432034 8F9985BC */  lw    $t9, %call16(free_temp)($gp)
/* 00432038 000E7E02 */  srl   $t7, $t6, 0x18
/* 0043203C 01E36826 */  xor   $t5, $t7, $v1
/* 00432040 0320F809 */  jalr  $t9
/* 00432044 A2CD0019 */   sb    $t5, 0x19($s6)
/* 00432048 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043204C A2C00018 */  sb    $zero, 0x18($s6)
.L00432050:
/* 00432050 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00432054 02E02025 */  move  $a0, $s7
/* 00432058 0320F809 */  jalr  $t9
/* 0043205C 00000000 */   nop   
/* 00432060 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00432064:
/* 00432064 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00432068 10000392 */  b     .L00432EB4
/* 0043206C 90840000 */   lbu   $a0, ($a0)
.L00432070:
/* 00432070 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00432074 8EC40000 */  lw    $a0, ($s6)
/* 00432078 0320F809 */  jalr  $t9
/* 0043207C 00000000 */   nop   
/* 00432080 1040006C */  beqz  $v0, .L00432234
/* 00432084 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 00432088 8F828A8C */  lw     $v0, %got(max_stack)($gp)
/* 0043208C 2401FFFF */  li    $at, -1
/* 00432090 8C420000 */  lw    $v0, ($v0)
/* 00432094 1041003E */  beq   $v0, $at, .L00432190
/* 00432098 00000000 */   nop   
/* 0043209C 8EC90000 */  lw    $t1, ($s6)
/* 004320A0 244AFFF8 */  addiu $t2, $v0, -8
/* 004320A4 8D380030 */  lw    $t8, 0x30($t1)
/* 004320A8 030A082A */  slt   $at, $t8, $t2
/* 004320AC 14200038 */  bnez  $at, .L00432190
/* 004320B0 00000000 */   nop   
/* 004320B4 8F8C8B90 */  lw     $t4, %got(saved_regs)($gp)
/* 004320B8 8D8C0000 */  lw    $t4, ($t4)
/* 004320BC 000C47C0 */  sll   $t0, $t4, 0x1f
/* 004320C0 05000011 */  bltz  $t0, .L00432108
/* 004320C4 00000000 */   nop   
/* 004320C8 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 004320CC 8F998B90 */  lw     $t9, %got(saved_regs)($gp)
/* 004320D0 358B0001 */  ori   $t3, $t4, 1
/* 004320D4 AC2B0000 */  sw    $t3, ($at)
/* 004320D8 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 004320DC 8F390004 */  lw    $t9, 4($t9)
/* 004320E0 8F8E8B90 */  lw     $t6, %got(saved_regs)($gp)
/* 004320E4 8F8F8A64 */  lw     $t7, %got(frame_size)($gp)
/* 004320E8 AC390004 */  sw    $t9, 4($at)
/* 004320EC 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 004320F0 8DCE0008 */  lw    $t6, 8($t6)
/* 004320F4 8DEF0000 */  lw    $t7, ($t7)
/* 004320F8 AC2E0008 */  sw    $t6, 8($at)
/* 004320FC 8F818A64 */  lw     $at, %got(frame_size)($gp)
/* 00432100 25ED0008 */  addiu $t5, $t7, 8
/* 00432104 AC2D0000 */  sw    $t5, ($at)
.L00432108:
/* 00432108 8F9984D8 */  lw    $t9, %call16(get_reg)($gp)
/* 0043210C 24040018 */  li    $a0, 24
/* 00432110 00002825 */  move  $a1, $zero
/* 00432114 0320F809 */  jalr  $t9
/* 00432118 24060001 */   li    $a2, 1
/* 0043211C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432120 8EC90000 */  lw    $t1, ($s6)
/* 00432124 24040029 */  li    $a0, 41
/* 00432128 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0043212C 24050018 */  li    $a1, 24
/* 00432130 00003825 */  move  $a3, $zero
/* 00432134 0320F809 */  jalr  $t9
/* 00432138 8D260030 */   lw    $a2, 0x30($t1)
/* 0043213C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432140 24040018 */  li    $a0, 24
/* 00432144 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00432148 0320F809 */  jalr  $t9
/* 0043214C 00000000 */   nop   
/* 00432150 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432154 24040035 */  li    $a0, 53
/* 00432158 240500C0 */  li    $a1, 192
/* 0043215C 8F99824C */  lw    $t9, %call16(emit_regmask)($gp)
/* 00432160 00003025 */  move  $a2, $zero
/* 00432164 0320F809 */  jalr  $t9
/* 00432168 00000000 */   nop   
/* 0043216C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432170 24040023 */  li    $a0, 35
/* 00432174 00003025 */  move  $a2, $zero
/* 00432178 8F998214 */  lw    $t9, %call16(emit_a)($gp)
/* 0043217C 8F8589D4 */  lw     $a1, %got(stack_limit_bn)($gp)
/* 00432180 00003825 */  move  $a3, $zero
/* 00432184 0320F809 */  jalr  $t9
/* 00432188 8CA50000 */   lw    $a1, ($a1)
/* 0043218C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00432190:
/* 00432190 8F8A8A74 */  lw     $t2, %got(reversed_stack)($gp)
/* 00432194 8ED80000 */  lw    $t8, ($s6)
/* 00432198 2405001D */  li    $a1, 29
/* 0043219C 914A0000 */  lbu   $t2, ($t2)
/* 004321A0 24040056 */  li    $a0, 86
/* 004321A4 8F070030 */  lw    $a3, 0x30($t8)
/* 004321A8 11400008 */  beqz  $t2, .L004321CC
/* 004321AC 00000000 */   nop   
/* 004321B0 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004321B4 24040002 */  li    $a0, 2
/* 004321B8 2406001D */  li    $a2, 29
/* 004321BC 0320F809 */  jalr  $t9
/* 004321C0 AFA00010 */   sw    $zero, 0x10($sp)
/* 004321C4 10000007 */  b     .L004321E4
/* 004321C8 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004321CC:
/* 004321CC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004321D0 2405001D */  li    $a1, 29
/* 004321D4 2406001D */  li    $a2, 29
/* 004321D8 0320F809 */  jalr  $t9
/* 004321DC AFA00010 */   sw    $zero, 0x10($sp)
/* 004321E0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004321E4:
/* 004321E4 8F828A8C */  lw     $v0, %got(max_stack)($gp)
/* 004321E8 2401FFFF */  li    $at, -1
/* 004321EC 8C420000 */  lw    $v0, ($v0)
/* 004321F0 5041006C */  beql  $v0, $at, .L004323A4
/* 004321F4 93AB0144 */   lbu   $t3, 0x144($sp)
/* 004321F8 8EC80000 */  lw    $t0, ($s6)
/* 004321FC 244BFFF8 */  addiu $t3, $v0, -8
/* 00432200 24040057 */  li    $a0, 87
/* 00432204 8D0C0030 */  lw    $t4, 0x30($t0)
/* 00432208 00002825 */  move  $a1, $zero
/* 0043220C 018B082A */  slt   $at, $t4, $t3
/* 00432210 50200064 */  beql  $at, $zero, .L004323A4
/* 00432214 93AB0144 */   lbu   $t3, 0x144($sp)
/* 00432218 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0043221C 00003025 */  move  $a2, $zero
/* 00432220 2407001D */  li    $a3, 29
/* 00432224 0320F809 */  jalr  $t9
/* 00432228 AFA00010 */   sw    $zero, 0x10($sp)
/* 0043222C 1000005C */  b     .L004323A0
/* 00432230 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00432234:
/* 00432234 8F998A8C */  lw     $t9, %got(max_stack)($gp)
/* 00432238 2401FFFF */  li    $at, -1
/* 0043223C 8F390000 */  lw    $t9, ($t9)
/* 00432240 13210038 */  beq   $t9, $at, .L00432324
/* 00432244 00000000 */   nop   
/* 00432248 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0043224C 8EC40000 */  lw    $a0, ($s6)
/* 00432250 24050018 */  li    $a1, 24
/* 00432254 0320F809 */  jalr  $t9
/* 00432258 24130018 */   li    $s3, 24
/* 0043225C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432260 8EC40000 */  lw    $a0, ($s6)
/* 00432264 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00432268 0320F809 */  jalr  $t9
/* 0043226C 00000000 */   nop   
/* 00432270 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432274 92C60021 */  lbu   $a2, 0x21($s6)
/* 00432278 24040018 */  li    $a0, 24
/* 0043227C 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00432280 00402825 */  move  $a1, $v0
/* 00432284 30C6001F */  andi  $a2, $a2, 0x1f
/* 00432288 0320F809 */  jalr  $t9
/* 0043228C 00000000 */   nop   
/* 00432290 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432294 8F8E8B90 */  lw     $t6, %got(saved_regs)($gp)
/* 00432298 8DCE0000 */  lw    $t6, ($t6)
/* 0043229C 000E7FC0 */  sll   $t7, $t6, 0x1f
/* 004322A0 05E00011 */  bltz  $t7, .L004322E8
/* 004322A4 00000000 */   nop   
/* 004322A8 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 004322AC 8F898B90 */  lw     $t1, %got(saved_regs)($gp)
/* 004322B0 35CD0001 */  ori   $t5, $t6, 1
/* 004322B4 AC2D0000 */  sw    $t5, ($at)
/* 004322B8 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 004322BC 8D290004 */  lw    $t1, 4($t1)
/* 004322C0 8F988B90 */  lw     $t8, %got(saved_regs)($gp)
/* 004322C4 8F8A8A64 */  lw     $t2, %got(frame_size)($gp)
/* 004322C8 AC290004 */  sw    $t1, 4($at)
/* 004322CC 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 004322D0 8F180008 */  lw    $t8, 8($t8)
/* 004322D4 8D4A0000 */  lw    $t2, ($t2)
/* 004322D8 AC380008 */  sw    $t8, 8($at)
/* 004322DC 8F818A64 */  lw     $at, %got(frame_size)($gp)
/* 004322E0 25480008 */  addiu $t0, $t2, 8
/* 004322E4 AC280000 */  sw    $t0, ($at)
.L004322E8:
/* 004322E8 8F99824C */  lw    $t9, %call16(emit_regmask)($gp)
/* 004322EC 24040035 */  li    $a0, 53
/* 004322F0 240500C0 */  li    $a1, 192
/* 004322F4 0320F809 */  jalr  $t9
/* 004322F8 00003025 */   move  $a2, $zero
/* 004322FC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432300 24040023 */  li    $a0, 35
/* 00432304 00003025 */  move  $a2, $zero
/* 00432308 8F998214 */  lw    $t9, %call16(emit_a)($gp)
/* 0043230C 8F8589D4 */  lw     $a1, %got(stack_limit_bn)($gp)
/* 00432310 00003825 */  move  $a3, $zero
/* 00432314 0320F809 */  jalr  $t9
/* 00432318 8CA50000 */   lw    $a1, ($a1)
/* 0043231C 1000000D */  b     .L00432354
/* 00432320 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00432324:
/* 00432324 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00432328 8EC40000 */  lw    $a0, ($s6)
/* 0043232C 24050048 */  li    $a1, 72
/* 00432330 0320F809 */  jalr  $t9
/* 00432334 00000000 */   nop   
/* 00432338 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043233C 8EC40000 */  lw    $a0, ($s6)
/* 00432340 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00432344 0320F809 */  jalr  $t9
/* 00432348 00000000 */   nop   
/* 0043234C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432350 305300FF */  andi  $s3, $v0, 0xff
.L00432354:
/* 00432354 8F8C8A74 */  lw     $t4, %got(reversed_stack)($gp)
/* 00432358 2405001D */  li    $a1, 29
/* 0043235C 24040056 */  li    $a0, 86
/* 00432360 918C0000 */  lbu   $t4, ($t4)
/* 00432364 11800008 */  beqz  $t4, .L00432388
/* 00432368 00000000 */   nop   
/* 0043236C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00432370 24040002 */  li    $a0, 2
/* 00432374 2406001D */  li    $a2, 29
/* 00432378 0320F809 */  jalr  $t9
/* 0043237C 02603825 */   move  $a3, $s3
/* 00432380 10000007 */  b     .L004323A0
/* 00432384 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00432388:
/* 00432388 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0043238C 2405001D */  li    $a1, 29
/* 00432390 2406001D */  li    $a2, 29
/* 00432394 0320F809 */  jalr  $t9
/* 00432398 02603825 */   move  $a3, $s3
/* 0043239C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004323A0:
/* 004323A0 93AB0144 */  lbu   $t3, 0x144($sp)
.L004323A4:
/* 004323A4 11600026 */  beqz  $t3, .L00432440
/* 004323A8 00000000 */   nop   
/* 004323AC 8F9989B8 */  lw     $t9, %got(isa)($gp)
/* 004323B0 24010001 */  li    $at, 1
/* 004323B4 24040100 */  li    $a0, 256
/* 004323B8 93390000 */  lbu   $t9, ($t9)
/* 004323BC 2405001D */  li    $a1, 29
/* 004323C0 17210008 */  bne   $t9, $at, .L004323E4
/* 004323C4 00000000 */   nop   
/* 004323C8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004323CC 24060017 */  li    $a2, 23
/* 004323D0 24070009 */  li    $a3, 9
/* 004323D4 0320F809 */  jalr  $t9
/* 004323D8 AFA00010 */   sw    $zero, 0x10($sp)
/* 004323DC 10000018 */  b     .L00432440
/* 004323E0 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004323E4:
/* 004323E4 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 004323E8 0320F809 */  jalr  $t9
/* 004323EC 00000000 */   nop   
/* 004323F0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004323F4 0040B825 */  move  $s7, $v0
/* 004323F8 2404000F */  li    $a0, 15
/* 004323FC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 00432400 2405001D */  li    $a1, 29
/* 00432404 24060017 */  li    $a2, 23
/* 00432408 0320F809 */  jalr  $t9
/* 0043240C 00403825 */   move  $a3, $v0
/* 00432410 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432414 2404001B */  li    $a0, 27
/* 00432418 24050009 */  li    $a1, 9
/* 0043241C 8F99821C */  lw    $t9, %call16(emit_i)($gp)
/* 00432420 0320F809 */  jalr  $t9
/* 00432424 00000000 */   nop   
/* 00432428 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043242C 02E02025 */  move  $a0, $s7
/* 00432430 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00432434 0320F809 */  jalr  $t9
/* 00432438 00000000 */   nop   
/* 0043243C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00432440:
/* 00432440 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00432444 1000029B */  b     .L00432EB4
/* 00432448 90840000 */   lbu   $a0, ($a0)
.L0043244C:
/* 0043244C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00432450 02C02025 */  move  $a0, $s6
/* 00432454 03C02825 */  move  $a1, $fp
/* 00432458 0320F809 */  jalr  $t9
/* 0043245C 00000000 */   nop   
/* 00432460 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432464 305E00FF */  andi  $fp, $v0, 0xff
/* 00432468 03C02825 */  move  $a1, $fp
/* 0043246C 8F8F89F4 */  lw     $t7, %got(framesz_relocatable)($gp)
/* 00432470 24040002 */  li    $a0, 2
/* 00432474 2406001D */  li    $a2, 29
/* 00432478 91EF0000 */  lbu   $t7, ($t7)
/* 0043247C 11E0000B */  beqz  $t7, .L004324AC
/* 00432480 00000000 */   nop   
/* 00432484 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00432488 8F878ABC */  lw     $a3, %got(reloc_arg_build)($gp)
/* 0043248C 24040002 */  li    $a0, 2
/* 00432490 03C02825 */  move  $a1, $fp
/* 00432494 2406001D */  li    $a2, 29
/* 00432498 AFA00010 */  sw    $zero, 0x10($sp)
/* 0043249C 0320F809 */  jalr  $t9
/* 004324A0 8CE70000 */   lw    $a3, ($a3)
/* 004324A4 10000007 */  b     .L004324C4
/* 004324A8 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004324AC:
/* 004324AC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004324B0 8F878AB8 */  lw     $a3, %got(max_arg_build)($gp)
/* 004324B4 AFA00010 */  sw    $zero, 0x10($sp)
/* 004324B8 0320F809 */  jalr  $t9
/* 004324BC 8CE70000 */   lw    $a3, ($a3)
/* 004324C0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004324C4:
/* 004324C4 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 004324C8 1000027A */  b     .L00432EB4
/* 004324CC 90840000 */   lbu   $a0, ($a0)
.L004324D0:
/* 004324D0 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004324D4 8EC40000 */  lw    $a0, ($s6)
/* 004324D8 24050048 */  li    $a1, 72
/* 004324DC 0320F809 */  jalr  $t9
/* 004324E0 00000000 */   nop   
/* 004324E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004324E8 8EC40000 */  lw    $a0, ($s6)
/* 004324EC 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 004324F0 0320F809 */  jalr  $t9
/* 004324F4 00000000 */   nop   
/* 004324F8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004324FC 305300FF */  andi  $s3, $v0, 0xff
/* 00432500 02603025 */  move  $a2, $s3
/* 00432504 8F8E89F4 */  lw     $t6, %got(framesz_relocatable)($gp)
/* 00432508 24040056 */  li    $a0, 86
/* 0043250C 2405001D */  li    $a1, 29
/* 00432510 91CE0000 */  lbu   $t6, ($t6)
/* 00432514 11C0000B */  beqz  $t6, .L00432544
/* 00432518 00000000 */   nop   
/* 0043251C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00432520 8F878ABC */  lw     $a3, %got(reloc_arg_build)($gp)
/* 00432524 24040056 */  li    $a0, 86
/* 00432528 2405001D */  li    $a1, 29
/* 0043252C 02603025 */  move  $a2, $s3
/* 00432530 AFA00010 */  sw    $zero, 0x10($sp)
/* 00432534 0320F809 */  jalr  $t9
/* 00432538 8CE70000 */   lw    $a3, ($a3)
/* 0043253C 10000007 */  b     .L0043255C
/* 00432540 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00432544:
/* 00432544 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00432548 8F878AB8 */  lw     $a3, %got(max_arg_build)($gp)
/* 0043254C AFA00010 */  sw    $zero, 0x10($sp)
/* 00432550 0320F809 */  jalr  $t9
/* 00432554 8CE70000 */   lw    $a3, ($a3)
/* 00432558 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0043255C:
/* 0043255C 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00432560 10000254 */  b     .L00432EB4
/* 00432564 90840000 */   lbu   $a0, ($a0)
.L00432568:
/* 00432568 92C70021 */  lbu   $a3, 0x21($s6)
/* 0043256C 3C01000C */  lui   $at, 0xc
/* 00432570 34218000 */  ori   $at, $at, 0x8000
/* 00432574 30E7001F */  andi  $a3, $a3, 0x1f
/* 00432578 2CED0020 */  sltiu $t5, $a3, 0x20
/* 0043257C 000D4823 */  negu  $t1, $t5
/* 00432580 0121C024 */  and   $t8, $t1, $at
/* 00432584 00F85004 */  sllv  $t2, $t8, $a3
/* 00432588 014002B0 */  tge   $t2, $zero, 0xa
/* 0043258C 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 00432590 00E02825 */  move  $a1, $a3
/* 00432594 0320F809 */  jalr  $t9
/* 00432598 00000000 */   nop   
/* 0043259C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004325A0 3055FFFF */  andi  $s5, $v0, 0xffff
/* 004325A4 8EC40000 */  lw    $a0, ($s6)
/* 004325A8 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004325AC 24050048 */  li    $a1, 72
/* 004325B0 0320F809 */  jalr  $t9
/* 004325B4 00000000 */   nop   
/* 004325B8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004325BC 8EC40004 */  lw    $a0, 4($s6)
/* 004325C0 24050048 */  li    $a1, 72
/* 004325C4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004325C8 0320F809 */  jalr  $t9
/* 004325CC 00000000 */   nop   
/* 004325D0 92C80020 */  lbu   $t0, 0x20($s6)
/* 004325D4 3C016000 */  lui   $at, 0x6000
/* 004325D8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004325DC 250CFF80 */  addiu $t4, $t0, -0x80
/* 004325E0 2D8B0020 */  sltiu $t3, $t4, 0x20
/* 004325E4 000BC823 */  negu  $t9, $t3
/* 004325E8 03217824 */  and   $t7, $t9, $at
/* 004325EC 018F7004 */  sllv  $t6, $t7, $t4
/* 004325F0 05C1000E */  bgez  $t6, .L0043262C
/* 004325F4 00000000 */   nop   
/* 004325F8 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 004325FC 8EC40000 */  lw    $a0, ($s6)
/* 00432600 0320F809 */  jalr  $t9
/* 00432604 00000000 */   nop   
/* 00432608 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043260C A3A20186 */  sb    $v0, 0x186($sp)
/* 00432610 8EC40004 */  lw    $a0, 4($s6)
/* 00432614 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00432618 0320F809 */  jalr  $t9
/* 0043261C 00000000 */   nop   
/* 00432620 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432624 1000000D */  b     .L0043265C
/* 00432628 305300FF */   andi  $s3, $v0, 0xff
.L0043262C:
/* 0043262C 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00432630 8EC40000 */  lw    $a0, ($s6)
/* 00432634 0320F809 */  jalr  $t9
/* 00432638 00000000 */   nop   
/* 0043263C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432640 305300FF */  andi  $s3, $v0, 0xff
/* 00432644 8EC40004 */  lw    $a0, 4($s6)
/* 00432648 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 0043264C 0320F809 */  jalr  $t9
/* 00432650 00000000 */   nop   
/* 00432654 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432658 A3A20186 */  sb    $v0, 0x186($sp)
.L0043265C:
/* 0043265C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00432660 02A02025 */  move  $a0, $s5
/* 00432664 02602825 */  move  $a1, $s3
/* 00432668 0320F809 */  jalr  $t9
/* 0043266C 93A60186 */   lbu   $a2, 0x186($sp)
/* 00432670 92CD0020 */  lbu   $t5, 0x20($s6)
/* 00432674 24010085 */  li    $at, 133
/* 00432678 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043267C 15A10002 */  bne   $t5, $at, .L00432688
/* 00432680 24150007 */   li    $s5, 7
/* 00432684 24150008 */  li    $s5, 8
.L00432688:
/* 00432688 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0043268C 0320F809 */  jalr  $t9
/* 00432690 00000000 */   nop   
/* 00432694 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432698 0040B825 */  move  $s7, $v0
/* 0043269C 02A02025 */  move  $a0, $s5
/* 004326A0 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 004326A4 00402825 */  move  $a1, $v0
/* 004326A8 0320F809 */  jalr  $t9
/* 004326AC 00000000 */   nop   
/* 004326B0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004326B4 2404001B */  li    $a0, 27
/* 004326B8 8EC50024 */  lw    $a1, 0x24($s6)
/* 004326BC 8F99821C */  lw    $t9, %call16(emit_i)($gp)
/* 004326C0 0320F809 */  jalr  $t9
/* 004326C4 00000000 */   nop   
/* 004326C8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004326CC 02E02025 */  move  $a0, $s7
/* 004326D0 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 004326D4 0320F809 */  jalr  $t9
/* 004326D8 00000000 */   nop   
/* 004326DC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004326E0 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 004326E4 100001F3 */  b     .L00432EB4
/* 004326E8 90840000 */   lbu   $a0, ($a0)
.L004326EC:
/* 004326EC 8F998530 */  lw    $t9, %call16(check_no_used)($gp)
/* 004326F0 0320F809 */  jalr  $t9
/* 004326F4 00000000 */   nop   
/* 004326F8 96C90022 */  lhu   $t1, 0x22($s6)
/* 004326FC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432700 11200009 */  beqz  $t1, .L00432728
/* 00432704 00000000 */   nop   
/* 00432708 8F828B90 */  lw     $v0, %got(saved_regs)($gp)
/* 0043270C 8C580000 */  lw    $t8, ($v0)
/* 00432710 8C480004 */  lw    $t0, 4($v0)
/* 00432714 8C4B0008 */  lw    $t3, 8($v0)
/* 00432718 370A0001 */  ori   $t2, $t8, 1
/* 0043271C AC4A0000 */  sw    $t2, ($v0)
/* 00432720 AC480004 */  sw    $t0, 4($v0)
/* 00432724 AC4B0008 */  sw    $t3, 8($v0)
.L00432728:
/* 00432728 8F9981FC */  lw    $t9, %call16(emit_rfi)($gp)
/* 0043272C 24040164 */  li    $a0, 356
/* 00432730 24050048 */  li    $a1, 72
/* 00432734 0320F809 */  jalr  $t9
/* 00432738 26C60030 */   addiu $a2, $s6, 0x30
/* 0043273C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432740 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00432744 100001DB */  b     .L00432EB4
/* 00432748 90840000 */   lbu   $a0, ($a0)
.L0043274C:
/* 0043274C 8F998250 */  lw    $t9, %call16(emit_loopno)($gp)
/* 00432750 8EC40024 */  lw    $a0, 0x24($s6)
/* 00432754 96C50022 */  lhu   $a1, 0x22($s6)
/* 00432758 0320F809 */  jalr  $t9
/* 0043275C 00000000 */   nop   
/* 00432760 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432764 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00432768 100001D2 */  b     .L00432EB4
/* 0043276C 90840000 */   lbu   $a0, ($a0)
.L00432770:
/* 00432770 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 00432774 92C50021 */  lbu   $a1, 0x21($s6)
/* 00432778 27D0FFE0 */  addiu $s0, $fp, -0x20
/* 0043277C 0320F809 */  jalr  $t9
/* 00432780 30A5001F */   andi  $a1, $a1, 0x1f
/* 00432784 2E190020 */  sltiu $t9, $s0, 0x20
/* 00432788 00197823 */  negu  $t7, $t9
/* 0043278C 020F6004 */  sllv  $t4, $t7, $s0
/* 00432790 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432794 05800002 */  bltz  $t4, .L004327A0
/* 00432798 3055FFFF */   andi  $s5, $v0, 0xffff
/* 0043279C 241E0048 */  li    $fp, 72
.L004327A0:
/* 004327A0 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004327A4 8EC40000 */  lw    $a0, ($s6)
/* 004327A8 03C02825 */  move  $a1, $fp
/* 004327AC 0320F809 */  jalr  $t9
/* 004327B0 00000000 */   nop   
/* 004327B4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004327B8 8EC40000 */  lw    $a0, ($s6)
/* 004327BC 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 004327C0 0320F809 */  jalr  $t9
/* 004327C4 00000000 */   nop   
/* 004327C8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004327CC 305300FF */  andi  $s3, $v0, 0xff
/* 004327D0 02C02025 */  move  $a0, $s6
/* 004327D4 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 004327D8 03C02825 */  move  $a1, $fp
/* 004327DC 0320F809 */  jalr  $t9
/* 004327E0 00000000 */   nop   
/* 004327E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004327E8 305E00FF */  andi  $fp, $v0, 0xff
/* 004327EC 02A02025 */  move  $a0, $s5
/* 004327F0 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004327F4 304500FF */  andi  $a1, $v0, 0xff
/* 004327F8 02603025 */  move  $a2, $s3
/* 004327FC 0320F809 */  jalr  $t9
/* 00432800 00000000 */   nop   
/* 00432804 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432808 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0043280C 100001A9 */  b     .L00432EB4
/* 00432810 90840000 */   lbu   $a0, ($a0)
.L00432814:
/* 00432814 8F998244 */  lw    $t9, %call16(emit_dir2)($gp)
/* 00432818 24040032 */  li    $a0, 50
/* 0043281C 00002825 */  move  $a1, $zero
/* 00432820 8EC60024 */  lw    $a2, 0x24($s6)
/* 00432824 0320F809 */  jalr  $t9
/* 00432828 96C70022 */   lhu   $a3, 0x22($s6)
/* 0043282C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432830 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00432834 1000019F */  b     .L00432EB4
/* 00432838 90840000 */   lbu   $a0, ($a0)
.L0043283C:
/* 0043283C 8F998244 */  lw    $t9, %call16(emit_dir2)($gp)
/* 00432840 24040033 */  li    $a0, 51
/* 00432844 00002825 */  move  $a1, $zero
/* 00432848 8EC60024 */  lw    $a2, 0x24($s6)
/* 0043284C 0320F809 */  jalr  $t9
/* 00432850 96C70022 */   lhu   $a3, 0x22($s6)
/* 00432854 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432858 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 0043285C 10000195 */  b     .L00432EB4
/* 00432860 90840000 */   lbu   $a0, ($a0)
.L00432864:
/* 00432864 8F998374 */  lw    $t9, %call16(eval_2ops)($gp)
/* 00432868 02C02025 */  move  $a0, $s6
/* 0043286C 0320F809 */  jalr  $t9
/* 00432870 00000000 */   nop   
/* 00432874 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432878 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0043287C 0320F809 */  jalr  $t9
/* 00432880 00000000 */   nop   
/* 00432884 92C70021 */  lbu   $a3, 0x21($s6)
/* 00432888 3C01000C */  lui   $at, 0xc
/* 0043288C 34218000 */  ori   $at, $at, 0x8000
/* 00432890 30E7001F */  andi  $a3, $a3, 0x1f
/* 00432894 2CEE0020 */  sltiu $t6, $a3, 0x20
/* 00432898 000E6823 */  negu  $t5, $t6
/* 0043289C 01A14824 */  and   $t1, $t5, $at
/* 004328A0 00E9C004 */  sllv  $t8, $t1, $a3
/* 004328A4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004328A8 070100BB */  bgez  $t8, .L00432B98
/* 004328AC 0040B825 */   move  $s7, $v0
/* 004328B0 8F8A8898 */  lw     $t2, %got(reg_kind_tab)($gp)
/* 004328B4 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 004328B8 00002025 */  move  $a0, $zero
/* 004328BC 00EA4021 */  addu  $t0, $a3, $t2
/* 004328C0 91050000 */  lbu   $a1, ($t0)
/* 004328C4 0320F809 */  jalr  $t9
/* 004328C8 24060001 */   li    $a2, 1
/* 004328CC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004328D0 305400FF */  andi  $s4, $v0, 0xff
/* 004328D4 8EC40000 */  lw    $a0, ($s6)
/* 004328D8 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 004328DC 0320F809 */  jalr  $t9
/* 004328E0 00000000 */   nop   
/* 004328E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004328E8 305300FF */  andi  $s3, $v0, 0xff
/* 004328EC 8EC40004 */  lw    $a0, 4($s6)
/* 004328F0 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 004328F4 0320F809 */  jalr  $t9
/* 004328F8 00000000 */   nop   
/* 004328FC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432900 A3A20186 */  sb    $v0, 0x186($sp)
/* 00432904 02C02025 */  move  $a0, $s6
/* 00432908 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 0043290C 03C02825 */  move  $a1, $fp
/* 00432910 0320F809 */  jalr  $t9
/* 00432914 00000000 */   nop   
/* 00432918 93AB0186 */  lbu   $t3, 0x186($sp)
/* 0043291C 305900FF */  andi  $t9, $v0, 0xff
/* 00432920 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432924 1579001C */  bne   $t3, $t9, .L00432998
/* 00432928 305E00FF */   andi  $fp, $v0, 0xff
/* 0043292C 8ECF0004 */  lw    $t7, 4($s6)
/* 00432930 8F8D8898 */  lw     $t5, %got(reg_kind_tab)($gp)
/* 00432934 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 00432938 91EC0021 */  lbu   $t4, 0x21($t7)
/* 0043293C 00002025 */  move  $a0, $zero
/* 00432940 24060001 */  li    $a2, 1
/* 00432944 318E001F */  andi  $t6, $t4, 0x1f
/* 00432948 01CD4821 */  addu  $t1, $t6, $t5
/* 0043294C 0320F809 */  jalr  $t9
/* 00432950 91250000 */   lbu   $a1, ($t1)
/* 00432954 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432958 92C50021 */  lbu   $a1, 0x21($s6)
/* 0043295C 305200FF */  andi  $s2, $v0, 0xff
/* 00432960 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 00432964 2404008B */  li    $a0, 139
/* 00432968 30A5001F */  andi  $a1, $a1, 0x1f
/* 0043296C 0320F809 */  jalr  $t9
/* 00432970 00000000 */   nop   
/* 00432974 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432978 00402025 */  move  $a0, $v0
/* 0043297C 02402825 */  move  $a1, $s2
/* 00432980 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00432984 93A60186 */  lbu   $a2, 0x186($sp)
/* 00432988 0320F809 */  jalr  $t9
/* 0043298C 00000000 */   nop   
/* 00432990 10000002 */  b     .L0043299C
/* 00432994 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00432998:
/* 00432998 93B20186 */  lbu   $s2, 0x186($sp)
.L0043299C:
/* 0043299C 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 004329A0 92C50021 */  lbu   $a1, 0x21($s6)
/* 004329A4 00002025 */  move  $a0, $zero
/* 004329A8 0320F809 */  jalr  $t9
/* 004329AC 30A5001F */   andi  $a1, $a1, 0x1f
/* 004329B0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004329B4 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004329B8 03C02825 */  move  $a1, $fp
/* 004329BC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004329C0 02603025 */  move  $a2, $s3
/* 004329C4 0320F809 */  jalr  $t9
/* 004329C8 00000000 */   nop   
/* 004329CC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004329D0 92C40021 */  lbu   $a0, 0x21($s6)
/* 004329D4 8F988038 */  lw    $t8, %got(RO_1000AA7A)($gp)
/* 004329D8 8F99868C */  lw    $t9, %call16(rvalue)($gp)
/* 004329DC 3084001F */  andi  $a0, $a0, 0x1f
/* 004329E0 2718AA7A */  addiu $t8, %lo(RO_1000AA7A) # addiu $t8, $t8, -0x5586
/* 004329E4 8B080000 */  lwl   $t0, ($t8)
/* 004329E8 9B080003 */  lwr   $t0, 3($t8)
/* 004329EC ABA80004 */  swl   $t0, 4($sp)
/* 004329F0 BBA80007 */  swr   $t0, 7($sp)
/* 004329F4 8B0A0004 */  lwl   $t2, 4($t8)
/* 004329F8 9B0A0007 */  lwr   $t2, 7($t8)
/* 004329FC 8FA50004 */  lw    $a1, 4($sp)
/* 00432A00 ABAA0008 */  swl   $t2, 8($sp)
/* 00432A04 BBAA000B */  swr   $t2, 0xb($sp)
/* 00432A08 8B080008 */  lwl   $t0, 8($t8)
/* 00432A0C 9B08000B */  lwr   $t0, 0xb($t8)
/* 00432A10 8FA60008 */  lw    $a2, 8($sp)
/* 00432A14 ABA8000C */  swl   $t0, 0xc($sp)
/* 00432A18 BBA8000F */  swr   $t0, 0xf($sp)
/* 00432A1C 8B0A000C */  lwl   $t2, 0xc($t8)
/* 00432A20 9B0A000F */  lwr   $t2, 0xf($t8)
/* 00432A24 8FA7000C */  lw    $a3, 0xc($sp)
/* 00432A28 ABAA0010 */  swl   $t2, 0x10($sp)
/* 00432A2C BBAA0013 */  swr   $t2, 0x13($sp)
/* 00432A30 8B080010 */  lwl   $t0, 0x10($t8)
/* 00432A34 9B080013 */  lwr   $t0, 0x13($t8)
/* 00432A38 ABA80014 */  swl   $t0, 0x14($sp)
/* 00432A3C BBA80017 */  swr   $t0, 0x17($sp)
/* 00432A40 8B0A0014 */  lwl   $t2, 0x14($t8)
/* 00432A44 9B0A0017 */  lwr   $t2, 0x17($t8)
/* 00432A48 ABAA0018 */  swl   $t2, 0x18($sp)
/* 00432A4C BBAA001B */  swr   $t2, 0x1b($sp)
/* 00432A50 8B080018 */  lwl   $t0, 0x18($t8)
/* 00432A54 9B08001B */  lwr   $t0, 0x1b($t8)
/* 00432A58 ABA8001C */  swl   $t0, 0x1c($sp)
/* 00432A5C BBA8001F */  swr   $t0, 0x1f($sp)
/* 00432A60 8B0A001C */  lwl   $t2, 0x1c($t8)
/* 00432A64 9B0A001F */  lwr   $t2, 0x1f($t8)
/* 00432A68 ABAA0020 */  swl   $t2, 0x20($sp)
/* 00432A6C 0320F809 */  jalr  $t9
/* 00432A70 BBAA0023 */   swr   $t2, 0x23($sp)
/* 00432A74 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432A78 92C50021 */  lbu   $a1, 0x21($s6)
/* 00432A7C 00408825 */  move  $s1, $v0
/* 00432A80 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 00432A84 240400FC */  li    $a0, 252
/* 00432A88 30A5001F */  andi  $a1, $a1, 0x1f
/* 00432A8C 0320F809 */  jalr  $t9
/* 00432A90 00000000 */   nop   
/* 00432A94 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432A98 00402025 */  move  $a0, $v0
/* 00432A9C 02802825 */  move  $a1, $s4
/* 00432AA0 8F9981FC */  lw    $t9, %call16(emit_rfi)($gp)
/* 00432AA4 26260030 */  addiu $a2, $s1, 0x30
/* 00432AA8 0320F809 */  jalr  $t9
/* 00432AAC 00000000 */   nop   
/* 00432AB0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432AB4 02202025 */  move  $a0, $s1
/* 00432AB8 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00432ABC 0320F809 */  jalr  $t9
/* 00432AC0 00000000 */   nop   
/* 00432AC4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432AC8 92C50021 */  lbu   $a1, 0x21($s6)
/* 00432ACC 2404004E */  li    $a0, 78
/* 00432AD0 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 00432AD4 30A5001F */  andi  $a1, $a1, 0x1f
/* 00432AD8 0320F809 */  jalr  $t9
/* 00432ADC 00000000 */   nop   
/* 00432AE0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432AE4 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00432AE8 02402825 */  move  $a1, $s2
/* 00432AEC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00432AF0 02803025 */  move  $a2, $s4
/* 00432AF4 0320F809 */  jalr  $t9
/* 00432AF8 00000000 */   nop   
/* 00432AFC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432B00 24040007 */  li    $a0, 7
/* 00432B04 02E02825 */  move  $a1, $s7
/* 00432B08 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 00432B0C 0320F809 */  jalr  $t9
/* 00432B10 00000000 */   nop   
/* 00432B14 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432B18 92C50021 */  lbu   $a1, 0x21($s6)
/* 00432B1C 2404005E */  li    $a0, 94
/* 00432B20 8F998318 */  lw    $t9, %call16(fop)($gp)
/* 00432B24 30A5001F */  andi  $a1, $a1, 0x1f
/* 00432B28 0320F809 */  jalr  $t9
/* 00432B2C 00000000 */   nop   
/* 00432B30 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432B34 92CB0021 */  lbu   $t3, 0x21($s6)
/* 00432B38 3055FFFF */  andi  $s5, $v0, 0xffff
/* 00432B3C 8F8F8898 */  lw     $t7, %got(reg_kind_tab)($gp)
/* 00432B40 3179001F */  andi  $t9, $t3, 0x1f
/* 00432B44 02802025 */  move  $a0, $s4
/* 00432B48 032F6021 */  addu  $t4, $t9, $t7
/* 00432B4C 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 00432B50 91850000 */  lbu   $a1, ($t4)
/* 00432B54 0320F809 */  jalr  $t9
/* 00432B58 00000000 */   nop   
/* 00432B5C 93AE0186 */  lbu   $t6, 0x186($sp)
/* 00432B60 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432B64 124E005B */  beq   $s2, $t6, .L00432CD4
/* 00432B68 00000000 */   nop   
/* 00432B6C 8ECD0004 */  lw    $t5, 4($s6)
/* 00432B70 8F8A8898 */  lw     $t2, %got(reg_kind_tab)($gp)
/* 00432B74 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 00432B78 91A90021 */  lbu   $t1, 0x21($t5)
/* 00432B7C 02402025 */  move  $a0, $s2
/* 00432B80 3138001F */  andi  $t8, $t1, 0x1f
/* 00432B84 030A4021 */  addu  $t0, $t8, $t2
/* 00432B88 0320F809 */  jalr  $t9
/* 00432B8C 91050000 */   lbu   $a1, ($t0)
/* 00432B90 10000050 */  b     .L00432CD4
/* 00432B94 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00432B98:
/* 00432B98 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00432B9C 8EC40000 */  lw    $a0, ($s6)
/* 00432BA0 241500DB */  li    $s5, 219
/* 00432BA4 0320F809 */  jalr  $t9
/* 00432BA8 00000000 */   nop   
/* 00432BAC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432BB0 305300FF */  andi  $s3, $v0, 0xff
/* 00432BB4 8EC40004 */  lw    $a0, 4($s6)
/* 00432BB8 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00432BBC 0320F809 */  jalr  $t9
/* 00432BC0 00000000 */   nop   
/* 00432BC4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432BC8 A3A20186 */  sb    $v0, 0x186($sp)
/* 00432BCC 02C02025 */  move  $a0, $s6
/* 00432BD0 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00432BD4 03C02825 */  move  $a1, $fp
/* 00432BD8 0320F809 */  jalr  $t9
/* 00432BDC 00000000 */   nop   
/* 00432BE0 93AB0186 */  lbu   $t3, 0x186($sp)
/* 00432BE4 305900FF */  andi  $t9, $v0, 0xff
/* 00432BE8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432BEC 15790010 */  bne   $t3, $t9, .L00432C30
/* 00432BF0 305E00FF */   andi  $fp, $v0, 0xff
/* 00432BF4 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00432BF8 00002025 */  move  $a0, $zero
/* 00432BFC 24050001 */  li    $a1, 1
/* 00432C00 0320F809 */  jalr  $t9
/* 00432C04 00000000 */   nop   
/* 00432C08 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432C0C 305200FF */  andi  $s2, $v0, 0xff
/* 00432C10 24040031 */  li    $a0, 49
/* 00432C14 8F9982D8 */  lw    $t9, %call16(dw_emit_rr)($gp)
/* 00432C18 304500FF */  andi  $a1, $v0, 0xff
/* 00432C1C 93A60186 */  lbu   $a2, 0x186($sp)
/* 00432C20 0320F809 */  jalr  $t9
/* 00432C24 02C03825 */   move  $a3, $s6
/* 00432C28 10000002 */  b     .L00432C34
/* 00432C2C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00432C30:
/* 00432C30 93B20186 */  lbu   $s2, 0x186($sp)
.L00432C34:
/* 00432C34 8F8F89D8 */  lw     $t7, %got(opcode_arch)($gp)
/* 00432C38 00002025 */  move  $a0, $zero
/* 00432C3C 91EF0000 */  lbu   $t7, ($t7)
/* 00432C40 15E00008 */  bnez  $t7, .L00432C64
/* 00432C44 00000000 */   nop   
/* 00432C48 8F9982D8 */  lw    $t9, %call16(dw_emit_rr)($gp)
/* 00432C4C 03C02825 */  move  $a1, $fp
/* 00432C50 02603025 */  move  $a2, $s3
/* 00432C54 0320F809 */  jalr  $t9
/* 00432C58 02C03825 */   move  $a3, $s6
/* 00432C5C 10000007 */  b     .L00432C7C
/* 00432C60 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00432C64:
/* 00432C64 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00432C68 24040167 */  li    $a0, 359
/* 00432C6C 03C02825 */  move  $a1, $fp
/* 00432C70 0320F809 */  jalr  $t9
/* 00432C74 02603025 */   move  $a2, $s3
/* 00432C78 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00432C7C:
/* 00432C7C 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 00432C80 2404000E */  li    $a0, 14
/* 00432C84 02402825 */  move  $a1, $s2
/* 00432C88 00003025 */  move  $a2, $zero
/* 00432C8C 00003825 */  move  $a3, $zero
/* 00432C90 AFB70010 */  sw    $s7, 0x10($sp)
/* 00432C94 0320F809 */  jalr  $t9
/* 00432C98 AFB60014 */   sw    $s6, 0x14($sp)
/* 00432C9C 96CC0022 */  lhu   $t4, 0x22($s6)
/* 00432CA0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432CA4 93AD0186 */  lbu   $t5, 0x186($sp)
/* 00432CA8 318E0002 */  andi  $t6, $t4, 2
/* 00432CAC 11C00002 */  beqz  $t6, .L00432CB8
/* 00432CB0 00000000 */   nop   
/* 00432CB4 2415003D */  li    $s5, 61
.L00432CB8:
/* 00432CB8 124D0006 */  beq   $s2, $t5, .L00432CD4
/* 00432CBC 00000000 */   nop   
/* 00432CC0 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00432CC4 02402025 */  move  $a0, $s2
/* 00432CC8 0320F809 */  jalr  $t9
/* 00432CCC 00000000 */   nop   
/* 00432CD0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00432CD4:
/* 00432CD4 8F8989D8 */  lw     $t1, %got(opcode_arch)($gp)
/* 00432CD8 02A02025 */  move  $a0, $s5
/* 00432CDC 91290000 */  lbu   $t1, ($t1)
/* 00432CE0 55200009 */  bnel  $t1, $zero, .L00432D08
/* 00432CE4 96D80022 */   lhu   $t8, 0x22($s6)
/* 00432CE8 8F9982D8 */  lw    $t9, %call16(dw_emit_rr)($gp)
/* 00432CEC 03C02825 */  move  $a1, $fp
/* 00432CF0 03C03025 */  move  $a2, $fp
/* 00432CF4 0320F809 */  jalr  $t9
/* 00432CF8 02C03825 */   move  $a3, $s6
/* 00432CFC 10000012 */  b     .L00432D48
/* 00432D00 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 00432D04 96D80022 */  lhu   $t8, 0x22($s6)
.L00432D08:
/* 00432D08 330A0002 */  andi  $t2, $t8, 2
/* 00432D0C 11400008 */  beqz  $t2, .L00432D30
/* 00432D10 00000000 */   nop   
/* 00432D14 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00432D18 24040168 */  li    $a0, 360
/* 00432D1C 03C02825 */  move  $a1, $fp
/* 00432D20 0320F809 */  jalr  $t9
/* 00432D24 03C03025 */   move  $a2, $fp
/* 00432D28 10000007 */  b     .L00432D48
/* 00432D2C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00432D30:
/* 00432D30 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00432D34 24040169 */  li    $a0, 361
/* 00432D38 03C02825 */  move  $a1, $fp
/* 00432D3C 0320F809 */  jalr  $t9
/* 00432D40 03C03025 */   move  $a2, $fp
/* 00432D44 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00432D48:
/* 00432D48 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00432D4C 02E02025 */  move  $a0, $s7
/* 00432D50 0320F809 */  jalr  $t9
/* 00432D54 00000000 */   nop   
/* 00432D58 92C30019 */  lbu   $v1, 0x19($s6)
/* 00432D5C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432D60 00034600 */  sll   $t0, $v1, 0x18
/* 00432D64 00085E42 */  srl   $t3, $t0, 0x19
/* 00432D68 03CBC826 */  xor   $t9, $fp, $t3
/* 00432D6C 00197E40 */  sll   $t7, $t9, 0x19
/* 00432D70 000F6602 */  srl   $t4, $t7, 0x18
/* 00432D74 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00432D78 01837026 */  xor   $t6, $t4, $v1
/* 00432D7C A2CE0019 */  sb    $t6, 0x19($s6)
/* 00432D80 1000004C */  b     .L00432EB4
/* 00432D84 90840000 */   lbu   $a0, ($a0)
.L00432D88:
/* 00432D88 8F8D8038 */  lw    $t5, %got(RO_1000AA2A)($gp)
/* 00432D8C 24040004 */  li    $a0, 4
/* 00432D90 24051779 */  li    $a1, 6009
/* 00432D94 25ADAA2A */  addiu $t5, %lo(RO_1000AA2A) # addiu $t5, $t5, -0x55d6
/* 00432D98 25A80048 */  addiu $t0, $t5, 0x48
/* 00432D9C 03A05025 */  move  $t2, $sp
.L00432DA0:
/* 00432DA0 89B80000 */  lwl   $t8, ($t5)
/* 00432DA4 99B80003 */  lwr   $t8, 3($t5)
/* 00432DA8 25AD000C */  addiu $t5, $t5, 0xc
/* 00432DAC 254A000C */  addiu $t2, $t2, 0xc
/* 00432DB0 A958FFFC */  swl   $t8, -4($t2)
/* 00432DB4 B958FFFF */  swr   $t8, -1($t2)
/* 00432DB8 89A9FFF8 */  lwl   $t1, -8($t5)
/* 00432DBC 99A9FFFB */  lwr   $t1, -5($t5)
/* 00432DC0 A9490000 */  swl   $t1, ($t2)
/* 00432DC4 B9490003 */  swr   $t1, 3($t2)
/* 00432DC8 89B8FFFC */  lwl   $t8, -4($t5)
/* 00432DCC 99B8FFFF */  lwr   $t8, -1($t5)
/* 00432DD0 A9580004 */  swl   $t8, 4($t2)
/* 00432DD4 15A8FFF2 */  bne   $t5, $t0, .L00432DA0
/* 00432DD8 B9580007 */   swr   $t8, 7($t2)
/* 00432DDC 89B80000 */  lwl   $t8, ($t5)
/* 00432DE0 99B80003 */  lwr   $t8, 3($t5)
/* 00432DE4 8F8B8038 */  lw    $t3, %got(RO_1000A9DA)($gp)
/* 00432DE8 03A06025 */  move  $t4, $sp
/* 00432DEC A9580008 */  swl   $t8, 8($t2)
/* 00432DF0 B958000B */  swr   $t8, 0xb($t2)
/* 00432DF4 89A90004 */  lwl   $t1, 4($t5)
/* 00432DF8 99A90007 */  lwr   $t1, 7($t5)
/* 00432DFC 256BA9DA */  addiu $t3, %lo(RO_1000A9DA) # addiu $t3, $t3, -0x5626
/* 00432E00 256E0048 */  addiu $t6, $t3, 0x48
/* 00432E04 A949000C */  swl   $t1, 0xc($t2)
/* 00432E08 B949000F */  swr   $t1, 0xf($t2)
.L00432E0C:
/* 00432E0C 896F0000 */  lwl   $t7, ($t3)
/* 00432E10 996F0003 */  lwr   $t7, 3($t3)
/* 00432E14 256B000C */  addiu $t3, $t3, 0xc
/* 00432E18 258C000C */  addiu $t4, $t4, 0xc
/* 00432E1C A98F004C */  swl   $t7, 0x4c($t4)
/* 00432E20 B98F004F */  swr   $t7, 0x4f($t4)
/* 00432E24 8979FFF8 */  lwl   $t9, -8($t3)
/* 00432E28 9979FFFB */  lwr   $t9, -5($t3)
/* 00432E2C A9990050 */  swl   $t9, 0x50($t4)
/* 00432E30 B9990053 */  swr   $t9, 0x53($t4)
/* 00432E34 896FFFFC */  lwl   $t7, -4($t3)
/* 00432E38 996FFFFF */  lwr   $t7, -1($t3)
/* 00432E3C A98F0054 */  swl   $t7, 0x54($t4)
/* 00432E40 156EFFF2 */  bne   $t3, $t6, .L00432E0C
/* 00432E44 B98F0057 */   swr   $t7, 0x57($t4)
/* 00432E48 896F0000 */  lwl   $t7, ($t3)
/* 00432E4C 996F0003 */  lwr   $t7, 3($t3)
/* 00432E50 A98F0058 */  swl   $t7, 0x58($t4)
/* 00432E54 B98F005B */  swr   $t7, 0x5b($t4)
/* 00432E58 89790004 */  lwl   $t9, 4($t3)
/* 00432E5C 99790007 */  lwr   $t9, 7($t3)
/* 00432E60 A999005C */  swl   $t9, 0x5c($t4)
/* 00432E64 B999005F */  swr   $t9, 0x5f($t4)
/* 00432E68 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00432E6C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00432E70 8FA60008 */  lw    $a2, 8($sp)
/* 00432E74 0320F809 */  jalr  $t9
/* 00432E78 00000000 */   nop   
/* 00432E7C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432E80 02C02825 */  move  $a1, $s6
/* 00432E84 8F998644 */  lw    $t9, %call16(print_node)($gp)
/* 00432E88 8F848950 */  lw     $a0, %got(err)($gp)
/* 00432E8C 0320F809 */  jalr  $t9
/* 00432E90 00000000 */   nop   
/* 00432E94 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432E98 8F998084 */  lw    $t9, %call16(fflush)($gp)
/* 00432E9C 8F848950 */  lw     $a0, %got(err)($gp)
/* 00432EA0 0320F809 */  jalr  $t9
/* 00432EA4 8C840000 */   lw    $a0, ($a0)
/* 00432EA8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432EAC 8F8489E0 */  lw     $a0, %got(debug_ugen)($gp)
/* 00432EB0 90840000 */  lbu   $a0, ($a0)
.L00432EB4:
/* 00432EB4 10800052 */  beqz  $a0, .L00433000
/* 00432EB8 2407000F */   li    $a3, 15
/* 00432EBC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00432EC0 8F848950 */  lw     $a0, %got(err)($gp)
/* 00432EC4 8F858038 */  lw    $a1, %got(RO_1000A9CB)($gp)
/* 00432EC8 2406000F */  li    $a2, 15
/* 00432ECC 8C840000 */  lw    $a0, ($a0)
/* 00432ED0 0320F809 */  jalr  $t9
/* 00432ED4 24A5A9CB */   addiu $a1, %lo(RO_1000A9CB) # addiu $a1, $a1, -0x5635
/* 00432ED8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432EDC 2406000C */  li    $a2, 12
/* 00432EE0 2407000A */  li    $a3, 10
/* 00432EE4 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00432EE8 8F848950 */  lw     $a0, %got(err)($gp)
/* 00432EEC 8F858968 */  lw     $a1, %got(current_line)($gp)
/* 00432EF0 8C840000 */  lw    $a0, ($a0)
/* 00432EF4 0320F809 */  jalr  $t9
/* 00432EF8 8CA50000 */   lw    $a1, ($a1)
/* 00432EFC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432F00 24060007 */  li    $a2, 7
/* 00432F04 24070007 */  li    $a3, 7
/* 00432F08 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00432F0C 8F848950 */  lw     $a0, %got(err)($gp)
/* 00432F10 8F858038 */  lw    $a1, %got(RO_1000A9C4)($gp)
/* 00432F14 8C840000 */  lw    $a0, ($a0)
/* 00432F18 0320F809 */  jalr  $t9
/* 00432F1C 24A5A9C4 */   addiu $a1, %lo(RO_1000A9C4) # addiu $a1, $a1, -0x563c
/* 00432F20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432F24 2408000A */  li    $t0, 10
/* 00432F28 AFA80010 */  sw    $t0, 0x10($sp)
/* 00432F2C 8F908950 */  lw     $s0, %got(err)($gp)
/* 00432F30 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00432F34 8F868038 */  lw    $a2, %got(D_100159F8)($gp)
/* 00432F38 8E100000 */  lw    $s0, ($s0)
/* 00432F3C 92C50020 */  lbu   $a1, 0x20($s6)
/* 00432F40 00003825 */  move  $a3, $zero
/* 00432F44 24C659F8 */  addiu $a2, %lo(D_100159F8) # addiu $a2, $a2, 0x59f8
/* 00432F48 0320F809 */  jalr  $t9
/* 00432F4C 02002025 */   move  $a0, $s0
/* 00432F50 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432F54 02002025 */  move  $a0, $s0
/* 00432F58 24060007 */  li    $a2, 7
/* 00432F5C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00432F60 8F858038 */  lw    $a1, %got(RO_1000A9BD)($gp)
/* 00432F64 24070007 */  li    $a3, 7
/* 00432F68 0320F809 */  jalr  $t9
/* 00432F6C 24A5A9BD */   addiu $a1, %lo(RO_1000A9BD) # addiu $a1, $a1, -0x5643
/* 00432F70 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432F74 92C50019 */  lbu   $a1, 0x19($s6)
/* 00432F78 240D000A */  li    $t5, 10
/* 00432F7C 8F908950 */  lw     $s0, %got(err)($gp)
/* 00432F80 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00432F84 8F868038 */  lw    $a2, %got(D_10015ED8)($gp)
/* 00432F88 8E100000 */  lw    $s0, ($s0)
/* 00432F8C 00052E00 */  sll   $a1, $a1, 0x18
/* 00432F90 00052E42 */  srl   $a1, $a1, 0x19
/* 00432F94 AFAD0010 */  sw    $t5, 0x10($sp)
/* 00432F98 00003825 */  move  $a3, $zero
/* 00432F9C 24C65ED8 */  addiu $a2, %lo(D_10015ED8) # addiu $a2, $a2, 0x5ed8
/* 00432FA0 0320F809 */  jalr  $t9
/* 00432FA4 02002025 */   move  $a0, $s0
/* 00432FA8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432FAC 02002025 */  move  $a0, $s0
/* 00432FB0 2406000D */  li    $a2, 13
/* 00432FB4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00432FB8 8F858038 */  lw    $a1, %got(RO_1000A9B0)($gp)
/* 00432FBC 2407000D */  li    $a3, 13
/* 00432FC0 0320F809 */  jalr  $t9
/* 00432FC4 24A5A9B0 */   addiu $a1, %lo(RO_1000A9B0) # addiu $a1, $a1, -0x5650
/* 00432FC8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432FCC 96C50014 */  lhu   $a1, 0x14($s6)
/* 00432FD0 2406000C */  li    $a2, 12
/* 00432FD4 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00432FD8 8F848950 */  lw     $a0, %got(err)($gp)
/* 00432FDC 2407000A */  li    $a3, 10
/* 00432FE0 0320F809 */  jalr  $t9
/* 00432FE4 8C840000 */   lw    $a0, ($a0)
/* 00432FE8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00432FEC 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00432FF0 8F848950 */  lw     $a0, %got(err)($gp)
/* 00432FF4 0320F809 */  jalr  $t9
/* 00432FF8 8C840000 */   lw    $a0, ($a0)
/* 00432FFC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00433000:
/* 00433000 8ED60008 */  lw    $s6, 8($s6)
/* 00433004 56C0E3A8 */  bnel  $s6, $zero, .L0042BEA8
/* 00433008 92C40020 */   lbu   $a0, 0x20($s6)
.L0043300C:
/* 0043300C 8FBF00D4 */  lw    $ra, 0xd4($sp)
.L00433010:
/* 00433010 8FB000AC */  lw    $s0, 0xac($sp)
/* 00433014 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 00433018 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 0043301C 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 00433020 8FB400BC */  lw    $s4, 0xbc($sp)
/* 00433024 8FB500C0 */  lw    $s5, 0xc0($sp)
/* 00433028 8FB600C4 */  lw    $s6, 0xc4($sp)
/* 0043302C 8FB700C8 */  lw    $s7, 0xc8($sp)
/* 00433030 8FBE00D0 */  lw    $fp, 0xd0($sp)
/* 00433034 03E00008 */  jr    $ra
/* 00433038 27BD0188 */   addiu $sp, $sp, 0x188
    .type eval, @function
    .size eval, .-eval
    .end eval

glabel init_eval
    .ent init_eval
    # 0044BF18 main
/* 0043303C 3C1C0FBF */  .cpload $t9
/* 00433040 279CCA14 */  
/* 00433044 0399E021 */  
/* 00433048 8F818AAC */  lw     $at, %got(first_loc)($gp)
/* 0043304C 240E0001 */  li    $t6, 1
/* 00433050 A02E0000 */  sb    $t6, ($at)
/* 00433054 8F818AB0 */  lw     $at, %got(first_file_number)($gp)
/* 00433058 AC200000 */  sw    $zero, ($at)
/* 0043305C 8F818AB4 */  lw     $at, %got(first_line_number)($gp)
/* 00433060 AC200000 */  sw    $zero, ($at)
/* 00433064 8F818AA8 */  lw     $at, %got(generate_again)($gp)
/* 00433068 03E00008 */  jr    $ra
/* 0043306C A0200000 */   sb    $zero, ($at)
    .type init_eval, @function
    .size init_eval, .-init_eval
    .end init_eval

glabel load_fp_literal
    .ent load_fp_literal
    # 0042BDAC eval
/* 00433070 3C1C0FBF */  .cpload $t9
/* 00433074 279CC9E0 */  
/* 00433078 0399E021 */  
/* 0043307C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00433080 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00433084 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00433088 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043308C AFA40020 */  sw    $a0, 0x20($sp)
/* 00433090 0320F809 */  jalr  $t9
/* 00433094 AFA50024 */   sw    $a1, 0x24($sp)
/* 00433098 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043309C 8FAE0020 */  lw    $t6, 0x20($sp)
/* 004330A0 A3A20027 */  sb    $v0, 0x27($sp)
/* 004330A4 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 004330A8 91C50021 */  lbu   $a1, 0x21($t6)
/* 004330AC 240400FC */  li    $a0, 252
/* 004330B0 0320F809 */  jalr  $t9
/* 004330B4 30A5001F */   andi  $a1, $a1, 0x1f
/* 004330B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004330BC 8FA60020 */  lw    $a2, 0x20($sp)
/* 004330C0 00402025 */  move  $a0, $v0
/* 004330C4 8F9981FC */  lw    $t9, %call16(emit_rfi)($gp)
/* 004330C8 93A50027 */  lbu   $a1, 0x27($sp)
/* 004330CC 24C60030 */  addiu $a2, $a2, 0x30
/* 004330D0 0320F809 */  jalr  $t9
/* 004330D4 00000000 */   nop   
/* 004330D8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004330DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004330E0 27BD0020 */  addiu $sp, $sp, 0x20
/* 004330E4 03E00008 */  jr    $ra
/* 004330E8 00000000 */   nop   
    .type load_fp_literal, @function
    .size load_fp_literal, .-load_fp_literal
    .end load_fp_literal

glabel eval_int_flt_cvt
    .ent eval_int_flt_cvt
    # 0042BDAC eval
/* 004330EC 3C1C0FBF */  .cpload $t9
/* 004330F0 279CC964 */  
/* 004330F4 0399E021 */  
/* 004330F8 27BDFF98 */  addiu $sp, $sp, -0x68
/* 004330FC 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00433100 AFB0002C */  sw    $s0, 0x2c($sp)
/* 00433104 00808025 */  move  $s0, $a0
/* 00433108 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0043310C AFBC0030 */  sw    $gp, 0x30($sp)
/* 00433110 AFA5006C */  sw    $a1, 0x6c($sp)
/* 00433114 8C840000 */  lw    $a0, ($a0)
/* 00433118 0320F809 */  jalr  $t9
/* 0043311C 24050048 */   li    $a1, 72
/* 00433120 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433124 92050021 */  lbu   $a1, 0x21($s0)
/* 00433128 92040028 */  lbu   $a0, 0x28($s0)
/* 0043312C 8F9983C8 */  lw    $t9, %call16(cvt_tab)($gp)
/* 00433130 30A5001F */  andi  $a1, $a1, 0x1f
/* 00433134 0320F809 */  jalr  $t9
/* 00433138 00000000 */   nop   
/* 0043313C 8E040000 */  lw    $a0, ($s0)
/* 00433140 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433144 A7A20066 */  sh    $v0, 0x66($sp)
/* 00433148 90830019 */  lbu   $v1, 0x19($a0)
/* 0043314C 00031E00 */  sll   $v1, $v1, 0x18
/* 00433150 00031E42 */  srl   $v1, $v1, 0x19
/* 00433154 306300FF */  andi  $v1, $v1, 0xff
/* 00433158 2C6E0020 */  sltiu $t6, $v1, 0x20
/* 0043315C 000E7823 */  negu  $t7, $t6
/* 00433160 006FC004 */  sllv  $t8, $t7, $v1
/* 00433164 030002B0 */  tge   $t8, $zero, 0xa
/* 00433168 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 0043316C A3A30065 */  sb    $v1, 0x65($sp)
/* 00433170 0320F809 */  jalr  $t9
/* 00433174 00000000 */   nop   
/* 00433178 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043317C 02002025 */  move  $a0, $s0
/* 00433180 93A5006F */  lbu   $a1, 0x6f($sp)
/* 00433184 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00433188 A3A20064 */  sb    $v0, 0x64($sp)
/* 0043318C 0320F809 */  jalr  $t9
/* 00433190 00000000 */   nop   
/* 00433194 304300FF */  andi  $v1, $v0, 0xff
/* 00433198 2479FFE0 */  addiu $t9, $v1, -0x20
/* 0043319C 2F280020 */  sltiu $t0, $t9, 0x20
/* 004331A0 00084823 */  negu  $t1, $t0
/* 004331A4 03295004 */  sllv  $t2, $t1, $t9
/* 004331A8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004331AC 93A60064 */  lbu   $a2, 0x64($sp)
/* 004331B0 05410003 */  bgez  $t2, .L004331C0
/* 004331B4 A3A2006F */   sb    $v0, 0x6f($sp)
/* 004331B8 10000002 */  b     .L004331C4
/* 004331BC A3A30062 */   sb    $v1, 0x62($sp)
.L004331C0:
/* 004331C0 A3A60062 */  sb    $a2, 0x62($sp)
.L004331C4:
/* 004331C4 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004331C8 97A40066 */  lhu   $a0, 0x66($sp)
/* 004331CC 93A50062 */  lbu   $a1, 0x62($sp)
/* 004331D0 0320F809 */  jalr  $t9
/* 004331D4 00000000 */   nop   
/* 004331D8 92030028 */  lbu   $v1, 0x28($s0)
/* 004331DC 3C010600 */  lui   $at, 0x600
/* 004331E0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004331E4 2C6B0020 */  sltiu $t3, $v1, 0x20
/* 004331E8 000B6023 */  negu  $t4, $t3
/* 004331EC 01816824 */  and   $t5, $t4, $at
/* 004331F0 006D7004 */  sllv  $t6, $t5, $v1
/* 004331F4 05C10003 */  bgez  $t6, .L00433204
/* 004331F8 24050001 */   li    $a1, 1
/* 004331FC 10000001 */  b     .L00433204
/* 00433200 00002825 */   move  $a1, $zero
.L00433204:
/* 00433204 8E040000 */  lw    $a0, ($s0)
/* 00433208 24010049 */  li    $at, 73
/* 0043320C 24060001 */  li    $a2, 1
/* 00433210 908F0020 */  lbu   $t7, 0x20($a0)
/* 00433214 15E10022 */  bne   $t7, $at, .L004332A0
/* 00433218 24010008 */   li    $at, 8
/* 0043321C 5461000A */  bnel  $v1, $at, .L00433248
/* 00433220 24010007 */   li    $at, 7
/* 00433224 8C820030 */  lw    $v0, 0x30($a0)
/* 00433228 3C017FFF */  lui   $at, 0x7fff
/* 0043322C 3421FFFF */  ori   $at, $at, 0xffff
/* 00433230 18400004 */  blez  $v0, .L00433244
/* 00433234 0041082A */   slt   $at, $v0, $at
/* 00433238 50200003 */  beql  $at, $zero, .L00433248
/* 0043323C 24010007 */   li    $at, 7
/* 00433240 00002825 */  move  $a1, $zero
.L00433244:
/* 00433244 24010007 */  li    $at, 7
.L00433248:
/* 00433248 14610015 */  bne   $v1, $at, .L004332A0
/* 0043324C 00000000 */   nop   
/* 00433250 8C980030 */  lw    $t8, 0x30($a0)
/* 00433254 8C990034 */  lw    $t9, 0x34($a0)
/* 00433258 AFB80038 */  sw    $t8, 0x38($sp)
/* 0043325C 03004025 */  move  $t0, $t8
/* 00433260 AFB9003C */  sw    $t9, 0x3c($sp)
/* 00433264 0700000E */  bltz  $t8, .L004332A0
/* 00433268 03204825 */   move  $t1, $t9
/* 0043326C 1F000003 */  bgtz  $t8, .L0043327C
/* 00433270 00000000 */   nop   
/* 00433274 1320000A */  beqz  $t9, .L004332A0
/* 00433278 00000000 */   nop   
.L0043327C:
/* 0043327C 1D000008 */  bgtz  $t0, .L004332A0
/* 00433280 00000000 */   nop   
/* 00433284 05000005 */  bltz  $t0, .L0043329C
/* 00433288 3C017FFF */   lui   $at, 0x7fff
/* 0043328C 3421FFFF */  ori   $at, $at, 0xffff
/* 00433290 0121082B */  sltu  $at, $t1, $at
/* 00433294 10200002 */  beqz  $at, .L004332A0
/* 00433298 00000000 */   nop   
.L0043329C:
/* 0043329C 00002825 */  move  $a1, $zero
.L004332A0:
/* 004332A0 10A00071 */  beqz  $a1, .L00433468
/* 004332A4 93AA0056 */   lbu   $t2, 0x56($sp)
/* 004332A8 8F8B8898 */  lw     $t3, %got(reg_kind_tab)($gp)
/* 004332AC 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 004332B0 00002025 */  move  $a0, $zero
/* 004332B4 014B6021 */  addu  $t4, $t2, $t3
/* 004332B8 0320F809 */  jalr  $t9
/* 004332BC 91850000 */   lbu   $a1, ($t4)
/* 004332C0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004332C4 A3A20063 */  sb    $v0, 0x63($sp)
/* 004332C8 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 004332CC 0320F809 */  jalr  $t9
/* 004332D0 00000000 */   nop   
/* 004332D4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004332D8 AFA20058 */  sw    $v0, 0x58($sp)
/* 004332DC 2404000E */  li    $a0, 14
/* 004332E0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 004332E4 93A50065 */  lbu   $a1, 0x65($sp)
/* 004332E8 00003025 */  move  $a2, $zero
/* 004332EC 0320F809 */  jalr  $t9
/* 004332F0 00403825 */   move  $a3, $v0
/* 004332F4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004332F8 92040021 */  lbu   $a0, 0x21($s0)
/* 004332FC 8F8D8038 */  lw    $t5, %got(RO_1000AFD4)($gp)
/* 00433300 8F99868C */  lw    $t9, %call16(rvalue)($gp)
/* 00433304 3084001F */  andi  $a0, $a0, 0x1f
/* 00433308 25ADAFD4 */  addiu $t5, %lo(RO_1000AFD4) # addiu $t5, $t5, -0x502c
/* 0043330C 89AF0000 */  lwl   $t7, ($t5)
/* 00433310 99AF0003 */  lwr   $t7, 3($t5)
/* 00433314 308400FF */  andi  $a0, $a0, 0xff
/* 00433318 ABAF0004 */  swl   $t7, 4($sp)
/* 0043331C BBAF0007 */  swr   $t7, 7($sp)
/* 00433320 89AE0004 */  lwl   $t6, 4($t5)
/* 00433324 99AE0007 */  lwr   $t6, 7($t5)
/* 00433328 8FA50004 */  lw    $a1, 4($sp)
/* 0043332C ABAE0008 */  swl   $t6, 8($sp)
/* 00433330 BBAE000B */  swr   $t6, 0xb($sp)
/* 00433334 89AF0008 */  lwl   $t7, 8($t5)
/* 00433338 99AF000B */  lwr   $t7, 0xb($t5)
/* 0043333C 8FA60008 */  lw    $a2, 8($sp)
/* 00433340 ABAF000C */  swl   $t7, 0xc($sp)
/* 00433344 BBAF000F */  swr   $t7, 0xf($sp)
/* 00433348 89AE000C */  lwl   $t6, 0xc($t5)
/* 0043334C 99AE000F */  lwr   $t6, 0xf($t5)
/* 00433350 8FA7000C */  lw    $a3, 0xc($sp)
/* 00433354 ABAE0010 */  swl   $t6, 0x10($sp)
/* 00433358 BBAE0013 */  swr   $t6, 0x13($sp)
/* 0043335C 89AF0010 */  lwl   $t7, 0x10($t5)
/* 00433360 99AF0013 */  lwr   $t7, 0x13($t5)
/* 00433364 ABAF0014 */  swl   $t7, 0x14($sp)
/* 00433368 BBAF0017 */  swr   $t7, 0x17($sp)
/* 0043336C 89AE0014 */  lwl   $t6, 0x14($t5)
/* 00433370 99AE0017 */  lwr   $t6, 0x17($t5)
/* 00433374 ABAE0018 */  swl   $t6, 0x18($sp)
/* 00433378 BBAE001B */  swr   $t6, 0x1b($sp)
/* 0043337C 89AF0018 */  lwl   $t7, 0x18($t5)
/* 00433380 99AF001B */  lwr   $t7, 0x1b($t5)
/* 00433384 ABAF001C */  swl   $t7, 0x1c($sp)
/* 00433388 BBAF001F */  swr   $t7, 0x1f($sp)
/* 0043338C 89AE001C */  lwl   $t6, 0x1c($t5)
/* 00433390 99AE001F */  lwr   $t6, 0x1f($t5)
/* 00433394 A3A40056 */  sb    $a0, 0x56($sp)
/* 00433398 ABAE0020 */  swl   $t6, 0x20($sp)
/* 0043339C 0320F809 */  jalr  $t9
/* 004333A0 BBAE0023 */   swr   $t6, 0x23($sp)
/* 004333A4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004333A8 AFA2005C */  sw    $v0, 0x5c($sp)
/* 004333AC 240400FC */  li    $a0, 252
/* 004333B0 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 004333B4 93A50056 */  lbu   $a1, 0x56($sp)
/* 004333B8 0320F809 */  jalr  $t9
/* 004333BC 00000000 */   nop   
/* 004333C0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004333C4 8FA6005C */  lw    $a2, 0x5c($sp)
/* 004333C8 00402025 */  move  $a0, $v0
/* 004333CC 8F9981FC */  lw    $t9, %call16(emit_rfi)($gp)
/* 004333D0 93A50063 */  lbu   $a1, 0x63($sp)
/* 004333D4 24C60030 */  addiu $a2, $a2, 0x30
/* 004333D8 0320F809 */  jalr  $t9
/* 004333DC 00000000 */   nop   
/* 004333E0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004333E4 8FA4005C */  lw    $a0, 0x5c($sp)
/* 004333E8 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 004333EC 0320F809 */  jalr  $t9
/* 004333F0 00000000 */   nop   
/* 004333F4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004333F8 2404007C */  li    $a0, 124
/* 004333FC 93A50056 */  lbu   $a1, 0x56($sp)
/* 00433400 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 00433404 0320F809 */  jalr  $t9
/* 00433408 00000000 */   nop   
/* 0043340C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433410 93A50062 */  lbu   $a1, 0x62($sp)
/* 00433414 00402025 */  move  $a0, $v0
/* 00433418 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0043341C 93A70063 */  lbu   $a3, 0x63($sp)
/* 00433420 00A03025 */  move  $a2, $a1
/* 00433424 0320F809 */  jalr  $t9
/* 00433428 00000000 */   nop   
/* 0043342C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433430 8FA40058 */  lw    $a0, 0x58($sp)
/* 00433434 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00433438 0320F809 */  jalr  $t9
/* 0043343C 00000000 */   nop   
/* 00433440 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433444 93B80056 */  lbu   $t8, 0x56($sp)
/* 00433448 93A40063 */  lbu   $a0, 0x63($sp)
/* 0043344C 8F998898 */  lw     $t9, %got(reg_kind_tab)($gp)
/* 00433450 03194021 */  addu  $t0, $t8, $t9
/* 00433454 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 00433458 91050000 */  lbu   $a1, ($t0)
/* 0043345C 0320F809 */  jalr  $t9
/* 00433460 00000000 */   nop   
/* 00433464 8FBC0030 */  lw    $gp, 0x30($sp)
.L00433468:
/* 00433468 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 0043346C 92060021 */  lbu   $a2, 0x21($s0)
/* 00433470 93A4006F */  lbu   $a0, 0x6f($sp)
/* 00433474 93A50062 */  lbu   $a1, 0x62($sp)
/* 00433478 0320F809 */  jalr  $t9
/* 0043347C 30C6001F */   andi  $a2, $a2, 0x1f
/* 00433480 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00433484 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433488 8FB0002C */  lw    $s0, 0x2c($sp)
/* 0043348C 03E00008 */  jr    $ra
/* 00433490 27BD0068 */   addiu $sp, $sp, 0x68
    .type eval_int_flt_cvt, @function
    .size eval_int_flt_cvt, .-eval_int_flt_cvt
    .end eval_int_flt_cvt

glabel eval_flt_int_cvt
    .ent eval_flt_int_cvt
    # 0042BDAC eval
/* 00433494 3C1C0FBF */  .cpload $t9
/* 00433498 279CC5BC */  
/* 0043349C 0399E021 */  
/* 004334A0 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 004334A4 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 004334A8 AFBF0034 */  sw    $ra, 0x34($sp)
/* 004334AC AFBC0030 */  sw    $gp, 0x30($sp)
/* 004334B0 AFA40060 */  sw    $a0, 0x60($sp)
/* 004334B4 AFA50064 */  sw    $a1, 0x64($sp)
/* 004334B8 8C840000 */  lw    $a0, ($a0)
/* 004334BC 0320F809 */  jalr  $t9
/* 004334C0 24050048 */   li    $a1, 72
/* 004334C4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004334C8 8FA20060 */  lw    $v0, 0x60($sp)
/* 004334CC 8F9983C8 */  lw    $t9, %call16(cvt_tab)($gp)
/* 004334D0 90450021 */  lbu   $a1, 0x21($v0)
/* 004334D4 90440028 */  lbu   $a0, 0x28($v0)
/* 004334D8 0320F809 */  jalr  $t9
/* 004334DC 30A5001F */   andi  $a1, $a1, 0x1f
/* 004334E0 8FA30060 */  lw    $v1, 0x60($sp)
/* 004334E4 2401006E */  li    $at, 110
/* 004334E8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004334EC 906F0020 */  lbu   $t7, 0x20($v1)
/* 004334F0 A7A2005E */  sh    $v0, 0x5e($sp)
/* 004334F4 15E10009 */  bne   $t7, $at, .L0043351C
/* 004334F8 00000000 */   nop   
/* 004334FC 8F9983CC */  lw    $t9, %call16(rnd_tab)($gp)
/* 00433500 90650021 */  lbu   $a1, 0x21($v1)
/* 00433504 90640028 */  lbu   $a0, 0x28($v1)
/* 00433508 0320F809 */  jalr  $t9
/* 0043350C 30A5001F */   andi  $a1, $a1, 0x1f
/* 00433510 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433514 A7A2005E */  sh    $v0, 0x5e($sp)
/* 00433518 8FA30060 */  lw    $v1, 0x60($sp)
.L0043351C:
/* 0043351C 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 00433520 8C640000 */  lw    $a0, ($v1)
/* 00433524 0320F809 */  jalr  $t9
/* 00433528 00000000 */   nop   
/* 0043352C 8FA30060 */  lw    $v1, 0x60($sp)
/* 00433530 24010018 */  li    $at, 24
/* 00433534 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433538 90780020 */  lbu   $t8, 0x20($v1)
/* 0043353C A3A2005A */  sb    $v0, 0x5a($sp)
/* 00433540 17010299 */  bne   $t8, $at, .L00433FA8
/* 00433544 00000000 */   nop   
/* 00433548 90790021 */  lbu   $t9, 0x21($v1)
/* 0043354C 3C010600 */  lui   $at, 0x600
/* 00433550 240DFFFF */  li    $t5, -1
/* 00433554 3328001F */  andi  $t0, $t9, 0x1f
/* 00433558 2D090020 */  sltiu $t1, $t0, 0x20
/* 0043355C 00095023 */  negu  $t2, $t1
/* 00433560 01415824 */  and   $t3, $t2, $at
/* 00433564 010B6004 */  sllv  $t4, $t3, $t0
/* 00433568 0580028F */  bltz  $t4, .L00433FA8
/* 0043356C 00000000 */   nop   
/* 00433570 8F8188E0 */  lw     $at, %got(move_cvt_flag)($gp)
/* 00433574 8F8E8898 */  lw     $t6, %got(reg_kind_tab)($gp)
/* 00433578 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 0043357C AC2D0000 */  sw    $t5, ($at)
/* 00433580 90620028 */  lbu   $v0, 0x28($v1)
/* 00433584 00002025 */  move  $a0, $zero
/* 00433588 24060001 */  li    $a2, 1
/* 0043358C 004E3821 */  addu  $a3, $v0, $t6
/* 00433590 90E50000 */  lbu   $a1, ($a3)
/* 00433594 AFA70038 */  sw    $a3, 0x38($sp)
/* 00433598 0320F809 */  jalr  $t9
/* 0043359C A3A20047 */   sb    $v0, 0x47($sp)
/* 004335A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004335A4 A3A2005B */  sb    $v0, 0x5b($sp)
/* 004335A8 00002025 */  move  $a0, $zero
/* 004335AC 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 004335B0 24050001 */  li    $a1, 1
/* 004335B4 0320F809 */  jalr  $t9
/* 004335B8 00000000 */   nop   
/* 004335BC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004335C0 A3A2005D */  sb    $v0, 0x5d($sp)
/* 004335C4 8FA40060 */  lw    $a0, 0x60($sp)
/* 004335C8 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 004335CC 93A50067 */  lbu   $a1, 0x67($sp)
/* 004335D0 0320F809 */  jalr  $t9
/* 004335D4 00000000 */   nop   
/* 004335D8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004335DC A3A20067 */  sb    $v0, 0x67($sp)
/* 004335E0 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 004335E4 0320F809 */  jalr  $t9
/* 004335E8 00000000 */   nop   
/* 004335EC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004335F0 24010001 */  li    $at, 1
/* 004335F4 AFA2004C */  sw    $v0, 0x4c($sp)
/* 004335F8 8F8F89D8 */  lw     $t7, %got(opcode_arch)($gp)
/* 004335FC 8FB80060 */  lw    $t8, 0x60($sp)
/* 00433600 91EF0000 */  lbu   $t7, ($t7)
/* 00433604 15E10034 */  bne   $t7, $at, .L004336D8
/* 00433608 00000000 */   nop   
/* 0043360C 93190021 */  lbu   $t9, 0x21($t8)
/* 00433610 24010008 */  li    $at, 8
/* 00433614 3329001F */  andi  $t1, $t9, 0x1f
/* 00433618 1521002F */  bne   $t1, $at, .L004336D8
/* 0043361C 00000000 */   nop   
/* 00433620 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433624 2404014F */  li    $a0, 335
/* 00433628 93A5005B */  lbu   $a1, 0x5b($sp)
/* 0043362C 0320F809 */  jalr  $t9
/* 00433630 93A6005A */   lbu   $a2, 0x5a($sp)
/* 00433634 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433638 24040147 */  li    $a0, 327
/* 0043363C 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433640 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433644 93A6005B */  lbu   $a2, 0x5b($sp)
/* 00433648 0320F809 */  jalr  $t9
/* 0043364C 00000000 */   nop   
/* 00433650 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433654 2404013B */  li    $a0, 315
/* 00433658 93A5005D */  lbu   $a1, 0x5d($sp)
/* 0043365C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00433660 93A60067 */  lbu   $a2, 0x67($sp)
/* 00433664 24070020 */  li    $a3, 32
/* 00433668 0320F809 */  jalr  $t9
/* 0043366C AFA00010 */   sw    $zero, 0x10($sp)
/* 00433670 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433674 8FAA004C */  lw    $t2, 0x4c($sp)
/* 00433678 8FAB0060 */  lw    $t3, 0x60($sp)
/* 0043367C 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 00433680 2404000D */  li    $a0, 13
/* 00433684 93A5005D */  lbu   $a1, 0x5d($sp)
/* 00433688 00003025 */  move  $a2, $zero
/* 0043368C 00003825 */  move  $a3, $zero
/* 00433690 AFAA0010 */  sw    $t2, 0x10($sp)
/* 00433694 0320F809 */  jalr  $t9
/* 00433698 AFAB0014 */   sw    $t3, 0x14($sp)
/* 0043369C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004336A0 24040029 */  li    $a0, 41
/* 004336A4 93A50067 */  lbu   $a1, 0x67($sp)
/* 004336A8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 004336AC 2406FFFF */  li    $a2, -1
/* 004336B0 00003825 */  move  $a3, $zero
/* 004336B4 0320F809 */  jalr  $t9
/* 004336B8 00000000 */   nop   
/* 004336BC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004336C0 8FA4004C */  lw    $a0, 0x4c($sp)
/* 004336C4 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 004336C8 0320F809 */  jalr  $t9
/* 004336CC 00000000 */   nop   
/* 004336D0 10000229 */  b     .L00433F78
/* 004336D4 8FBC0030 */   lw    $gp, 0x30($sp)
.L004336D8:
/* 004336D8 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 004336DC 0320F809 */  jalr  $t9
/* 004336E0 00000000 */   nop   
/* 004336E4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004336E8 AFA20054 */  sw    $v0, 0x54($sp)
/* 004336EC 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 004336F0 0320F809 */  jalr  $t9
/* 004336F4 00000000 */   nop   
/* 004336F8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004336FC AFA20050 */  sw    $v0, 0x50($sp)
/* 00433700 240400E1 */  li    $a0, 225
/* 00433704 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433708 93A5005D */  lbu   $a1, 0x5d($sp)
/* 0043370C 2406001F */  li    $a2, 31
/* 00433710 0320F809 */  jalr  $t9
/* 00433714 00000000 */   nop   
/* 00433718 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043371C 24040029 */  li    $a0, 41
/* 00433720 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433724 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00433728 24060001 */  li    $a2, 1
/* 0043372C 00003825 */  move  $a3, $zero
/* 00433730 0320F809 */  jalr  $t9
/* 00433734 00000000 */   nop   
/* 00433738 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043373C 240400E2 */  li    $a0, 226
/* 00433740 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433744 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433748 2406001F */  li    $a2, 31
/* 0043374C 0320F809 */  jalr  $t9
/* 00433750 00000000 */   nop   
/* 00433754 8FA80060 */  lw    $t0, 0x60($sp)
/* 00433758 3C010501 */  lui   $at, 0x501
/* 0043375C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433760 910C0021 */  lbu   $t4, 0x21($t0)
/* 00433764 318D001F */  andi  $t5, $t4, 0x1f
/* 00433768 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0043376C 000E7823 */  negu  $t7, $t6
/* 00433770 01E1C024 */  and   $t8, $t7, $at
/* 00433774 01B8C804 */  sllv  $t9, $t8, $t5
/* 00433778 07210014 */  bgez  $t9, .L004337CC
/* 0043377C 00000000 */   nop   
/* 00433780 8F8989D8 */  lw     $t1, %got(opcode_arch)($gp)
/* 00433784 24010001 */  li    $at, 1
/* 00433788 91290000 */  lbu   $t1, ($t1)
/* 0043378C 1521000F */  bne   $t1, $at, .L004337CC
/* 00433790 00000000 */   nop   
/* 00433794 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 00433798 2404015B */  li    $a0, 347
/* 0043379C 93A50047 */  lbu   $a1, 0x47($sp)
/* 004337A0 0320F809 */  jalr  $t9
/* 004337A4 00000000 */   nop   
/* 004337A8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004337AC 00402025 */  move  $a0, $v0
/* 004337B0 93A5005B */  lbu   $a1, 0x5b($sp)
/* 004337B4 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004337B8 93A6005A */  lbu   $a2, 0x5a($sp)
/* 004337BC 0320F809 */  jalr  $t9
/* 004337C0 00000000 */   nop   
/* 004337C4 1000000E */  b     .L00433800
/* 004337C8 8FBC0030 */   lw    $gp, 0x30($sp)
.L004337CC:
/* 004337CC 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 004337D0 2404009A */  li    $a0, 154
/* 004337D4 93A50047 */  lbu   $a1, 0x47($sp)
/* 004337D8 0320F809 */  jalr  $t9
/* 004337DC 00000000 */   nop   
/* 004337E0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004337E4 00402025 */  move  $a0, $v0
/* 004337E8 93A5005B */  lbu   $a1, 0x5b($sp)
/* 004337EC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004337F0 93A6005A */  lbu   $a2, 0x5a($sp)
/* 004337F4 0320F809 */  jalr  $t9
/* 004337F8 00000000 */   nop   
/* 004337FC 8FBC0030 */  lw    $gp, 0x30($sp)
.L00433800:
/* 00433800 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433804 240400E1 */  li    $a0, 225
/* 00433808 93A50067 */  lbu   $a1, 0x67($sp)
/* 0043380C 0320F809 */  jalr  $t9
/* 00433810 2406001F */   li    $a2, 31
/* 00433814 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433818 24040020 */  li    $a0, 32
/* 0043381C 24050006 */  li    $a1, 6
/* 00433820 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00433824 0320F809 */  jalr  $t9
/* 00433828 00000000 */   nop   
/* 0043382C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433830 24040003 */  li    $a0, 3
/* 00433834 24050001 */  li    $a1, 1
/* 00433838 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0043383C 93A60067 */  lbu   $a2, 0x67($sp)
/* 00433840 24070004 */  li    $a3, 4
/* 00433844 0320F809 */  jalr  $t9
/* 00433848 AFA00010 */   sw    $zero, 0x10($sp)
/* 0043384C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433850 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433854 24040003 */  li    $a0, 3
/* 00433858 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0043385C 24070078 */  li    $a3, 120
/* 00433860 AFA00010 */  sw    $zero, 0x10($sp)
/* 00433864 0320F809 */  jalr  $t9
/* 00433868 00A03025 */   move  $a2, $a1
/* 0043386C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433870 24040020 */  li    $a0, 32
/* 00433874 24050005 */  li    $a1, 5
/* 00433878 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0043387C 0320F809 */  jalr  $t9
/* 00433880 00000000 */   nop   
/* 00433884 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433888 8FAA0054 */  lw    $t2, 0x54($sp)
/* 0043388C 8FAB0060 */  lw    $t3, 0x60($sp)
/* 00433890 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 00433894 2404000D */  li    $a0, 13
/* 00433898 93A50067 */  lbu   $a1, 0x67($sp)
/* 0043389C 00003025 */  move  $a2, $zero
/* 004338A0 00003825 */  move  $a3, $zero
/* 004338A4 AFAA0010 */  sw    $t2, 0x10($sp)
/* 004338A8 0320F809 */  jalr  $t9
/* 004338AC AFAB0014 */   sw    $t3, 0x14($sp)
/* 004338B0 8FA80060 */  lw    $t0, 0x60($sp)
/* 004338B4 3C010501 */  lui   $at, 0x501
/* 004338B8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004338BC 910C0021 */  lbu   $t4, 0x21($t0)
/* 004338C0 318E001F */  andi  $t6, $t4, 0x1f
/* 004338C4 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 004338C8 000FC023 */  negu  $t8, $t7
/* 004338CC 03016824 */  and   $t5, $t8, $at
/* 004338D0 01CDC804 */  sllv  $t9, $t5, $t6
/* 004338D4 07210031 */  bgez  $t9, .L0043399C
/* 004338D8 00000000 */   nop   
/* 004338DC 8F8989D8 */  lw     $t1, %got(opcode_arch)($gp)
/* 004338E0 24010001 */  li    $at, 1
/* 004338E4 91290000 */  lbu   $t1, ($t1)
/* 004338E8 1521002C */  bne   $t1, $at, .L0043399C
/* 004338EC 00000000 */   nop   
/* 004338F0 8F8A8038 */  lw    $t2, %got(RO_1000B014)($gp)
/* 004338F4 8F99868C */  lw    $t9, %call16(rvalue)($gp)
/* 004338F8 93A40047 */  lbu   $a0, 0x47($sp)
/* 004338FC 254AB014 */  addiu $t2, %lo(RO_1000B014) # addiu $t2, $t2, -0x4fec
/* 00433900 89480000 */  lwl   $t0, ($t2)
/* 00433904 99480003 */  lwr   $t0, 3($t2)
/* 00433908 ABA80004 */  swl   $t0, 4($sp)
/* 0043390C BBA80007 */  swr   $t0, 7($sp)
/* 00433910 894B0004 */  lwl   $t3, 4($t2)
/* 00433914 994B0007 */  lwr   $t3, 7($t2)
/* 00433918 8FA50004 */  lw    $a1, 4($sp)
/* 0043391C ABAB0008 */  swl   $t3, 8($sp)
/* 00433920 BBAB000B */  swr   $t3, 0xb($sp)
/* 00433924 89480008 */  lwl   $t0, 8($t2)
/* 00433928 9948000B */  lwr   $t0, 0xb($t2)
/* 0043392C 8FA60008 */  lw    $a2, 8($sp)
/* 00433930 ABA8000C */  swl   $t0, 0xc($sp)
/* 00433934 BBA8000F */  swr   $t0, 0xf($sp)
/* 00433938 894B000C */  lwl   $t3, 0xc($t2)
/* 0043393C 994B000F */  lwr   $t3, 0xf($t2)
/* 00433940 8FA7000C */  lw    $a3, 0xc($sp)
/* 00433944 ABAB0010 */  swl   $t3, 0x10($sp)
/* 00433948 BBAB0013 */  swr   $t3, 0x13($sp)
/* 0043394C 89480010 */  lwl   $t0, 0x10($t2)
/* 00433950 99480013 */  lwr   $t0, 0x13($t2)
/* 00433954 ABA80014 */  swl   $t0, 0x14($sp)
/* 00433958 BBA80017 */  swr   $t0, 0x17($sp)
/* 0043395C 894B0014 */  lwl   $t3, 0x14($t2)
/* 00433960 994B0017 */  lwr   $t3, 0x17($t2)
/* 00433964 ABAB0018 */  swl   $t3, 0x18($sp)
/* 00433968 BBAB001B */  swr   $t3, 0x1b($sp)
/* 0043396C 89480018 */  lwl   $t0, 0x18($t2)
/* 00433970 9948001B */  lwr   $t0, 0x1b($t2)
/* 00433974 ABA8001C */  swl   $t0, 0x1c($sp)
/* 00433978 BBA8001F */  swr   $t0, 0x1f($sp)
/* 0043397C 894B001C */  lwl   $t3, 0x1c($t2)
/* 00433980 994B001F */  lwr   $t3, 0x1f($t2)
/* 00433984 ABAB0020 */  swl   $t3, 0x20($sp)
/* 00433988 0320F809 */  jalr  $t9
/* 0043398C BBAB0023 */   swr   $t3, 0x23($sp)
/* 00433990 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433994 1000002B */  b     .L00433A44
/* 00433998 AFA20048 */   sw    $v0, 0x48($sp)
.L0043399C:
/* 0043399C 8F8C8038 */  lw    $t4, %got(RO_1000AFF4)($gp)
/* 004339A0 8F99868C */  lw    $t9, %call16(rvalue)($gp)
/* 004339A4 93A40047 */  lbu   $a0, 0x47($sp)
/* 004339A8 258CAFF4 */  addiu $t4, %lo(RO_1000AFF4) # addiu $t4, $t4, -0x500c
/* 004339AC 89980000 */  lwl   $t8, ($t4)
/* 004339B0 99980003 */  lwr   $t8, 3($t4)
/* 004339B4 ABB80004 */  swl   $t8, 4($sp)
/* 004339B8 BBB80007 */  swr   $t8, 7($sp)
/* 004339BC 898F0004 */  lwl   $t7, 4($t4)
/* 004339C0 998F0007 */  lwr   $t7, 7($t4)
/* 004339C4 8FA50004 */  lw    $a1, 4($sp)
/* 004339C8 ABAF0008 */  swl   $t7, 8($sp)
/* 004339CC BBAF000B */  swr   $t7, 0xb($sp)
/* 004339D0 89980008 */  lwl   $t8, 8($t4)
/* 004339D4 9998000B */  lwr   $t8, 0xb($t4)
/* 004339D8 8FA60008 */  lw    $a2, 8($sp)
/* 004339DC ABB8000C */  swl   $t8, 0xc($sp)
/* 004339E0 BBB8000F */  swr   $t8, 0xf($sp)
/* 004339E4 898F000C */  lwl   $t7, 0xc($t4)
/* 004339E8 998F000F */  lwr   $t7, 0xf($t4)
/* 004339EC 8FA7000C */  lw    $a3, 0xc($sp)
/* 004339F0 ABAF0010 */  swl   $t7, 0x10($sp)
/* 004339F4 BBAF0013 */  swr   $t7, 0x13($sp)
/* 004339F8 89980010 */  lwl   $t8, 0x10($t4)
/* 004339FC 99980013 */  lwr   $t8, 0x13($t4)
/* 00433A00 ABB80014 */  swl   $t8, 0x14($sp)
/* 00433A04 BBB80017 */  swr   $t8, 0x17($sp)
/* 00433A08 898F0014 */  lwl   $t7, 0x14($t4)
/* 00433A0C 998F0017 */  lwr   $t7, 0x17($t4)
/* 00433A10 ABAF0018 */  swl   $t7, 0x18($sp)
/* 00433A14 BBAF001B */  swr   $t7, 0x1b($sp)
/* 00433A18 89980018 */  lwl   $t8, 0x18($t4)
/* 00433A1C 9998001B */  lwr   $t8, 0x1b($t4)
/* 00433A20 ABB8001C */  swl   $t8, 0x1c($sp)
/* 00433A24 BBB8001F */  swr   $t8, 0x1f($sp)
/* 00433A28 898F001C */  lwl   $t7, 0x1c($t4)
/* 00433A2C 998F001F */  lwr   $t7, 0x1f($t4)
/* 00433A30 ABAF0020 */  swl   $t7, 0x20($sp)
/* 00433A34 0320F809 */  jalr  $t9
/* 00433A38 BBAF0023 */   swr   $t7, 0x23($sp)
/* 00433A3C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433A40 AFA20048 */  sw    $v0, 0x48($sp)
.L00433A44:
/* 00433A44 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 00433A48 240400FC */  li    $a0, 252
/* 00433A4C 93A50047 */  lbu   $a1, 0x47($sp)
/* 00433A50 0320F809 */  jalr  $t9
/* 00433A54 00000000 */   nop   
/* 00433A58 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433A5C 8FA60048 */  lw    $a2, 0x48($sp)
/* 00433A60 00402025 */  move  $a0, $v0
/* 00433A64 8F9981FC */  lw    $t9, %call16(emit_rfi)($gp)
/* 00433A68 93A5005B */  lbu   $a1, 0x5b($sp)
/* 00433A6C 24C60030 */  addiu $a2, $a2, 0x30
/* 00433A70 0320F809 */  jalr  $t9
/* 00433A74 00000000 */   nop   
/* 00433A78 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433A7C 8FA40048 */  lw    $a0, 0x48($sp)
/* 00433A80 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00433A84 0320F809 */  jalr  $t9
/* 00433A88 00000000 */   nop   
/* 00433A8C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433A90 2404007F */  li    $a0, 127
/* 00433A94 93A50047 */  lbu   $a1, 0x47($sp)
/* 00433A98 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 00433A9C 0320F809 */  jalr  $t9
/* 00433AA0 00000000 */   nop   
/* 00433AA4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433AA8 93A5005B */  lbu   $a1, 0x5b($sp)
/* 00433AAC 00402025 */  move  $a0, $v0
/* 00433AB0 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00433AB4 93A6005A */  lbu   $a2, 0x5a($sp)
/* 00433AB8 00A03825 */  move  $a3, $a1
/* 00433ABC 0320F809 */  jalr  $t9
/* 00433AC0 00000000 */   nop   
/* 00433AC4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433AC8 24040029 */  li    $a0, 41
/* 00433ACC 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433AD0 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00433AD4 24060001 */  li    $a2, 1
/* 00433AD8 00003825 */  move  $a3, $zero
/* 00433ADC 0320F809 */  jalr  $t9
/* 00433AE0 00000000 */   nop   
/* 00433AE4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433AE8 240400E2 */  li    $a0, 226
/* 00433AEC 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433AF0 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433AF4 2406001F */  li    $a2, 31
/* 00433AF8 0320F809 */  jalr  $t9
/* 00433AFC 00000000 */   nop   
/* 00433B00 8FAD0060 */  lw    $t5, 0x60($sp)
/* 00433B04 3C010501 */  lui   $at, 0x501
/* 00433B08 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433B0C 91AE0021 */  lbu   $t6, 0x21($t5)
/* 00433B10 31D9001F */  andi  $t9, $t6, 0x1f
/* 00433B14 2F290020 */  sltiu $t1, $t9, 0x20
/* 00433B18 00095023 */  negu  $t2, $t1
/* 00433B1C 01415824 */  and   $t3, $t2, $at
/* 00433B20 032B4004 */  sllv  $t0, $t3, $t9
/* 00433B24 05010014 */  bgez  $t0, .L00433B78
/* 00433B28 00000000 */   nop   
/* 00433B2C 8F8C89D8 */  lw     $t4, %got(opcode_arch)($gp)
/* 00433B30 24010001 */  li    $at, 1
/* 00433B34 918C0000 */  lbu   $t4, ($t4)
/* 00433B38 1581000F */  bne   $t4, $at, .L00433B78
/* 00433B3C 00000000 */   nop   
/* 00433B40 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 00433B44 2404015B */  li    $a0, 347
/* 00433B48 93A50047 */  lbu   $a1, 0x47($sp)
/* 00433B4C 0320F809 */  jalr  $t9
/* 00433B50 00000000 */   nop   
/* 00433B54 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433B58 93A5005B */  lbu   $a1, 0x5b($sp)
/* 00433B5C 00402025 */  move  $a0, $v0
/* 00433B60 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433B64 00A03025 */  move  $a2, $a1
/* 00433B68 0320F809 */  jalr  $t9
/* 00433B6C 00000000 */   nop   
/* 00433B70 1000000E */  b     .L00433BAC
/* 00433B74 8FBC0030 */   lw    $gp, 0x30($sp)
.L00433B78:
/* 00433B78 8F998314 */  lw    $t9, %call16(fasm)($gp)
/* 00433B7C 2404009A */  li    $a0, 154
/* 00433B80 93A50047 */  lbu   $a1, 0x47($sp)
/* 00433B84 0320F809 */  jalr  $t9
/* 00433B88 00000000 */   nop   
/* 00433B8C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433B90 93A6005B */  lbu   $a2, 0x5b($sp)
/* 00433B94 00402025 */  move  $a0, $v0
/* 00433B98 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433B9C 00C02825 */  move  $a1, $a2
/* 00433BA0 0320F809 */  jalr  $t9
/* 00433BA4 00000000 */   nop   
/* 00433BA8 8FBC0030 */  lw    $gp, 0x30($sp)
.L00433BAC:
/* 00433BAC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433BB0 240400E1 */  li    $a0, 225
/* 00433BB4 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433BB8 0320F809 */  jalr  $t9
/* 00433BBC 2406001F */   li    $a2, 31
/* 00433BC0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433BC4 24040020 */  li    $a0, 32
/* 00433BC8 24050006 */  li    $a1, 6
/* 00433BCC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00433BD0 0320F809 */  jalr  $t9
/* 00433BD4 00000000 */   nop   
/* 00433BD8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433BDC 24040003 */  li    $a0, 3
/* 00433BE0 24050001 */  li    $a1, 1
/* 00433BE4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00433BE8 93A60067 */  lbu   $a2, 0x67($sp)
/* 00433BEC 24070004 */  li    $a3, 4
/* 00433BF0 0320F809 */  jalr  $t9
/* 00433BF4 AFA00010 */   sw    $zero, 0x10($sp)
/* 00433BF8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433BFC 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433C00 24040003 */  li    $a0, 3
/* 00433C04 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00433C08 24070078 */  li    $a3, 120
/* 00433C0C AFA00010 */  sw    $zero, 0x10($sp)
/* 00433C10 0320F809 */  jalr  $t9
/* 00433C14 00A03025 */   move  $a2, $a1
/* 00433C18 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433C1C 24040020 */  li    $a0, 32
/* 00433C20 24050005 */  li    $a1, 5
/* 00433C24 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00433C28 0320F809 */  jalr  $t9
/* 00433C2C 00000000 */   nop   
/* 00433C30 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433C34 8FB80050 */  lw    $t8, 0x50($sp)
/* 00433C38 8FAD0060 */  lw    $t5, 0x60($sp)
/* 00433C3C 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 00433C40 2404001A */  li    $a0, 26
/* 00433C44 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433C48 00003025 */  move  $a2, $zero
/* 00433C4C 00003825 */  move  $a3, $zero
/* 00433C50 AFB80010 */  sw    $t8, 0x10($sp)
/* 00433C54 0320F809 */  jalr  $t9
/* 00433C58 AFAD0014 */   sw    $t5, 0x14($sp)
/* 00433C5C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433C60 24040020 */  li    $a0, 32
/* 00433C64 24050006 */  li    $a1, 6
/* 00433C68 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00433C6C 0320F809 */  jalr  $t9
/* 00433C70 00000000 */   nop   
/* 00433C74 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433C78 24010001 */  li    $at, 1
/* 00433C7C 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 00433C80 91CE0000 */  lbu   $t6, ($t6)
/* 00433C84 15C1003D */  bne   $t6, $at, .L00433D7C
/* 00433C88 00000000 */   nop   
/* 00433C8C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00433C90 24040020 */  li    $a0, 32
/* 00433C94 24050005 */  li    $a1, 5
/* 00433C98 0320F809 */  jalr  $t9
/* 00433C9C 00000000 */   nop   
/* 00433CA0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433CA4 24040147 */  li    $a0, 327
/* 00433CA8 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433CAC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433CB0 93A6005B */  lbu   $a2, 0x5b($sp)
/* 00433CB4 0320F809 */  jalr  $t9
/* 00433CB8 00000000 */   nop   
/* 00433CBC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433CC0 8FA90060 */  lw    $t1, 0x60($sp)
/* 00433CC4 24060000 */  li    $a2, 0
/* 00433CC8 8F998688 */  lw    $t9, %call16(dwvalue)($gp)
/* 00433CCC 91240021 */  lbu   $a0, 0x21($t1)
/* 00433CD0 24070000 */  li    $a3, 0
/* 00433CD4 0320F809 */  jalr  $t9
/* 00433CD8 3084001F */   andi  $a0, $a0, 0x1f
/* 00433CDC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433CE0 AFA20048 */  sw    $v0, 0x48($sp)
/* 00433CE4 3C0A8000 */  lui   $t2, 0x8000
/* 00433CE8 AC4A0030 */  sw    $t2, 0x30($v0)
/* 00433CEC 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00433CF0 00002025 */  move  $a0, $zero
/* 00433CF4 24050001 */  li    $a1, 1
/* 00433CF8 0320F809 */  jalr  $t9
/* 00433CFC 00000000 */   nop   
/* 00433D00 8FAB0048 */  lw    $t3, 0x48($sp)
/* 00433D04 A3A2005C */  sb    $v0, 0x5c($sp)
/* 00433D08 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433D0C 8D660030 */  lw    $a2, 0x30($t3)
/* 00433D10 2404014C */  li    $a0, 332
/* 00433D14 8F9981F8 */  lw    $t9, %call16(emit_rii)($gp)
/* 00433D18 AFA60008 */  sw    $a2, 8($sp)
/* 00433D1C 8D670034 */  lw    $a3, 0x34($t3)
/* 00433D20 304500FF */  andi  $a1, $v0, 0xff
/* 00433D24 0320F809 */  jalr  $t9
/* 00433D28 AFA7000C */   sw    $a3, 0xc($sp)
/* 00433D2C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433D30 8FA40048 */  lw    $a0, 0x48($sp)
/* 00433D34 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00433D38 0320F809 */  jalr  $t9
/* 00433D3C 00000000 */   nop   
/* 00433D40 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433D44 93A60067 */  lbu   $a2, 0x67($sp)
/* 00433D48 24040040 */  li    $a0, 64
/* 00433D4C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00433D50 93A7005C */  lbu   $a3, 0x5c($sp)
/* 00433D54 00C02825 */  move  $a1, $a2
/* 00433D58 0320F809 */  jalr  $t9
/* 00433D5C 00000000 */   nop   
/* 00433D60 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433D64 93A4005C */  lbu   $a0, 0x5c($sp)
/* 00433D68 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00433D6C 0320F809 */  jalr  $t9
/* 00433D70 00000000 */   nop   
/* 00433D74 1000001D */  b     .L00433DEC
/* 00433D78 8FBC0030 */   lw    $gp, 0x30($sp)
.L00433D7C:
/* 00433D7C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433D80 24040061 */  li    $a0, 97
/* 00433D84 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433D88 0320F809 */  jalr  $t9
/* 00433D8C 93A6005B */   lbu   $a2, 0x5b($sp)
/* 00433D90 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433D94 24040029 */  li    $a0, 41
/* 00433D98 24050001 */  li    $a1, 1
/* 00433D9C 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00433DA0 3C068000 */  lui   $a2, 0x8000
/* 00433DA4 00003825 */  move  $a3, $zero
/* 00433DA8 0320F809 */  jalr  $t9
/* 00433DAC 00000000 */   nop   
/* 00433DB0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433DB4 93A60067 */  lbu   $a2, 0x67($sp)
/* 00433DB8 24040040 */  li    $a0, 64
/* 00433DBC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00433DC0 24070001 */  li    $a3, 1
/* 00433DC4 00C02825 */  move  $a1, $a2
/* 00433DC8 0320F809 */  jalr  $t9
/* 00433DCC 00000000 */   nop   
/* 00433DD0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433DD4 24040020 */  li    $a0, 32
/* 00433DD8 24050005 */  li    $a1, 5
/* 00433DDC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00433DE0 0320F809 */  jalr  $t9
/* 00433DE4 00000000 */   nop   
/* 00433DE8 8FBC0030 */  lw    $gp, 0x30($sp)
.L00433DEC:
/* 00433DEC 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 00433DF0 24040004 */  li    $a0, 4
/* 00433DF4 8FA5004C */  lw    $a1, 0x4c($sp)
/* 00433DF8 0320F809 */  jalr  $t9
/* 00433DFC 00000000 */   nop   
/* 00433E00 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433E04 8FA40050 */  lw    $a0, 0x50($sp)
/* 00433E08 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00433E0C 0320F809 */  jalr  $t9
/* 00433E10 00000000 */   nop   
/* 00433E14 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433E18 24010001 */  li    $at, 1
/* 00433E1C 8FAD0060 */  lw    $t5, 0x60($sp)
/* 00433E20 8F9889D8 */  lw     $t8, %got(opcode_arch)($gp)
/* 00433E24 2406FFFF */  li    $a2, -1
/* 00433E28 24040029 */  li    $a0, 41
/* 00433E2C 93180000 */  lbu   $t8, ($t8)
/* 00433E30 17010017 */  bne   $t8, $at, .L00433E90
/* 00433E34 00000000 */   nop   
/* 00433E38 8F998688 */  lw    $t9, %call16(dwvalue)($gp)
/* 00433E3C 91A40021 */  lbu   $a0, 0x21($t5)
/* 00433E40 2407FFFF */  li    $a3, -1
/* 00433E44 0320F809 */  jalr  $t9
/* 00433E48 3084001F */   andi  $a0, $a0, 0x1f
/* 00433E4C AFA20048 */  sw    $v0, 0x48($sp)
/* 00433E50 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433E54 8C460030 */  lw    $a2, 0x30($v0)
/* 00433E58 2404014C */  li    $a0, 332
/* 00433E5C 8F9981F8 */  lw    $t9, %call16(emit_rii)($gp)
/* 00433E60 AFA60008 */  sw    $a2, 8($sp)
/* 00433E64 8C470034 */  lw    $a3, 0x34($v0)
/* 00433E68 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433E6C 0320F809 */  jalr  $t9
/* 00433E70 AFA7000C */   sw    $a3, 0xc($sp)
/* 00433E74 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433E78 8FA40048 */  lw    $a0, 0x48($sp)
/* 00433E7C 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00433E80 0320F809 */  jalr  $t9
/* 00433E84 00000000 */   nop   
/* 00433E88 10000007 */  b     .L00433EA8
/* 00433E8C 8FBC0030 */   lw    $gp, 0x30($sp)
.L00433E90:
/* 00433E90 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00433E94 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433E98 2406FFFF */  li    $a2, -1
/* 00433E9C 0320F809 */  jalr  $t9
/* 00433EA0 00003825 */   move  $a3, $zero
/* 00433EA4 8FBC0030 */  lw    $gp, 0x30($sp)
.L00433EA8:
/* 00433EA8 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 00433EAC 24040004 */  li    $a0, 4
/* 00433EB0 8FA5004C */  lw    $a1, 0x4c($sp)
/* 00433EB4 0320F809 */  jalr  $t9
/* 00433EB8 00000000 */   nop   
/* 00433EBC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433EC0 8FA40054 */  lw    $a0, 0x54($sp)
/* 00433EC4 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00433EC8 0320F809 */  jalr  $t9
/* 00433ECC 00000000 */   nop   
/* 00433ED0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433ED4 24010001 */  li    $at, 1
/* 00433ED8 8F8A89D8 */  lw     $t2, %got(opcode_arch)($gp)
/* 00433EDC 914A0000 */  lbu   $t2, ($t2)
/* 00433EE0 15410008 */  bne   $t2, $at, .L00433F04
/* 00433EE4 00000000 */   nop   
/* 00433EE8 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433EEC 24040147 */  li    $a0, 327
/* 00433EF0 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433EF4 0320F809 */  jalr  $t9
/* 00433EF8 93A6005B */   lbu   $a2, 0x5b($sp)
/* 00433EFC 10000007 */  b     .L00433F1C
/* 00433F00 8FBC0030 */   lw    $gp, 0x30($sp)
.L00433F04:
/* 00433F04 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433F08 24040061 */  li    $a0, 97
/* 00433F0C 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433F10 0320F809 */  jalr  $t9
/* 00433F14 93A6005B */   lbu   $a2, 0x5b($sp)
/* 00433F18 8FBC0030 */  lw    $gp, 0x30($sp)
.L00433F1C:
/* 00433F1C 8FB90060 */  lw    $t9, 0x60($sp)
/* 00433F20 8FAB0050 */  lw    $t3, 0x50($sp)
/* 00433F24 24040017 */  li    $a0, 23
/* 00433F28 AFB90014 */  sw    $t9, 0x14($sp)
/* 00433F2C 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 00433F30 93A50067 */  lbu   $a1, 0x67($sp)
/* 00433F34 00003025 */  move  $a2, $zero
/* 00433F38 00003825 */  move  $a3, $zero
/* 00433F3C 0320F809 */  jalr  $t9
/* 00433F40 AFAB0010 */   sw    $t3, 0x10($sp)
/* 00433F44 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433F48 8FA4004C */  lw    $a0, 0x4c($sp)
/* 00433F4C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00433F50 0320F809 */  jalr  $t9
/* 00433F54 00000000 */   nop   
/* 00433F58 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433F5C 240400E2 */  li    $a0, 226
/* 00433F60 93A5005D */  lbu   $a1, 0x5d($sp)
/* 00433F64 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00433F68 2406001F */  li    $a2, 31
/* 00433F6C 0320F809 */  jalr  $t9
/* 00433F70 00000000 */   nop   
/* 00433F74 8FBC0030 */  lw    $gp, 0x30($sp)
.L00433F78:
/* 00433F78 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 00433F7C 8FA80038 */  lw    $t0, 0x38($sp)
/* 00433F80 93A4005B */  lbu   $a0, 0x5b($sp)
/* 00433F84 0320F809 */  jalr  $t9
/* 00433F88 91050000 */   lbu   $a1, ($t0)
/* 00433F8C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433F90 93A4005D */  lbu   $a0, 0x5d($sp)
/* 00433F94 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00433F98 0320F809 */  jalr  $t9
/* 00433F9C 00000000 */   nop   
/* 00433FA0 10000048 */  b     .L004340C4
/* 00433FA4 8FBC0030 */   lw    $gp, 0x30($sp)
.L00433FA8:
/* 00433FA8 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 00433FAC 00002025 */  move  $a0, $zero
/* 00433FB0 24050001 */  li    $a1, 1
/* 00433FB4 0320F809 */  jalr  $t9
/* 00433FB8 00000000 */   nop   
/* 00433FBC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433FC0 8FAC0060 */  lw    $t4, 0x60($sp)
/* 00433FC4 A3A2005D */  sb    $v0, 0x5d($sp)
/* 00433FC8 8F988898 */  lw     $t8, %got(reg_kind_tab)($gp)
/* 00433FCC 918F0028 */  lbu   $t7, 0x28($t4)
/* 00433FD0 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 00433FD4 00002025 */  move  $a0, $zero
/* 00433FD8 01F86821 */  addu  $t5, $t7, $t8
/* 00433FDC 91A50000 */  lbu   $a1, ($t5)
/* 00433FE0 0320F809 */  jalr  $t9
/* 00433FE4 24060001 */   li    $a2, 1
/* 00433FE8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00433FEC A3A2005B */  sb    $v0, 0x5b($sp)
/* 00433FF0 97A4005E */  lhu   $a0, 0x5e($sp)
/* 00433FF4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00433FF8 304500FF */  andi  $a1, $v0, 0xff
/* 00433FFC 93A6005A */  lbu   $a2, 0x5a($sp)
/* 00434000 0320F809 */  jalr  $t9
/* 00434004 93A7005D */   lbu   $a3, 0x5d($sp)
/* 00434008 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043400C 93A4005D */  lbu   $a0, 0x5d($sp)
/* 00434010 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00434014 0320F809 */  jalr  $t9
/* 00434018 00000000 */   nop   
/* 0043401C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00434020 8FAE0060 */  lw    $t6, 0x60($sp)
/* 00434024 8FB80060 */  lw    $t8, 0x60($sp)
/* 00434028 8F8B88E0 */  lw     $t3, %got(move_cvt_flag)($gp)
/* 0043402C 8DC90010 */  lw    $t1, 0x10($t6)
/* 00434030 8D6B0000 */  lw    $t3, ($t3)
/* 00434034 00095202 */  srl   $t2, $t1, 8
/* 00434038 514B001A */  beql  $t2, $t3, .L004340A4
/* 0043403C 93020019 */   lbu   $v0, 0x19($t8)
/* 00434040 91D90028 */  lbu   $t9, 0x28($t6)
/* 00434044 8F888898 */  lw     $t0, %got(reg_kind_tab)($gp)
/* 00434048 93A4005B */  lbu   $a0, 0x5b($sp)
/* 0043404C 03286021 */  addu  $t4, $t9, $t0
/* 00434050 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 00434054 91850000 */  lbu   $a1, ($t4)
/* 00434058 0320F809 */  jalr  $t9
/* 0043405C 00000000 */   nop   
/* 00434060 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00434064 8FA40060 */  lw    $a0, 0x60($sp)
/* 00434068 93A50067 */  lbu   $a1, 0x67($sp)
/* 0043406C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00434070 0320F809 */  jalr  $t9
/* 00434074 00000000 */   nop   
/* 00434078 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043407C 8FAF0060 */  lw    $t7, 0x60($sp)
/* 00434080 304400FF */  andi  $a0, $v0, 0xff
/* 00434084 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00434088 91E60021 */  lbu   $a2, 0x21($t7)
/* 0043408C 93A5005B */  lbu   $a1, 0x5b($sp)
/* 00434090 0320F809 */  jalr  $t9
/* 00434094 30C6001F */   andi  $a2, $a2, 0x1f
/* 00434098 1000000A */  b     .L004340C4
/* 0043409C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 004340A0 93020019 */  lbu   $v0, 0x19($t8)
.L004340A4:
/* 004340A4 93AD005B */  lbu   $t5, 0x5b($sp)
/* 004340A8 00024E00 */  sll   $t1, $v0, 0x18
/* 004340AC 00095642 */  srl   $t2, $t1, 0x19
/* 004340B0 01AA5826 */  xor   $t3, $t5, $t2
/* 004340B4 000B7640 */  sll   $t6, $t3, 0x19
/* 004340B8 000ECE02 */  srl   $t9, $t6, 0x18
/* 004340BC 03224026 */  xor   $t0, $t9, $v0
/* 004340C0 A3080019 */  sb    $t0, 0x19($t8)
.L004340C4:
/* 004340C4 8FBF0034 */  lw    $ra, 0x34($sp)
/* 004340C8 27BD0060 */  addiu $sp, $sp, 0x60
/* 004340CC 03E00008 */  jr    $ra
/* 004340D0 00000000 */   nop   
    .type eval_flt_int_cvt, @function
    .size eval_flt_int_cvt, .-eval_flt_int_cvt
    .end eval_flt_int_cvt

    .type func_004340D4, @function
func_004340D4:
    # 004347BC eval_int_int_cvt
/* 004340D4 3C1C0FBF */  .cpload $t9
/* 004340D8 279CB97C */  
/* 004340DC 0399E021 */  
/* 004340E0 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 004340E4 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 004340E8 AFB00020 */  sw    $s0, 0x20($sp)
/* 004340EC 91CE0000 */  lbu   $t6, ($t6)
/* 004340F0 24010001 */  li    $at, 1
/* 004340F4 00808025 */  move  $s0, $a0
/* 004340F8 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004340FC AFBC0028 */  sw    $gp, 0x28($sp)
/* 00434100 AFB10024 */  sw    $s1, 0x24($sp)
/* 00434104 15C1005E */  bne   $t6, $at, .L00434280
/* 00434108 AFA50044 */   sw    $a1, 0x44($sp)
/* 0043410C 8C820000 */  lw    $v0, ($a0)
/* 00434110 24010052 */  li    $at, 82
/* 00434114 904F0020 */  lbu   $t7, 0x20($v0)
/* 00434118 15E10011 */  bne   $t7, $at, .L00434160
/* 0043411C 00000000 */   nop   
/* 00434120 8F998384 */  lw    $t9, %call16(ureg)($gp)
/* 00434124 24440020 */  addiu $a0, $v0, 0x20
/* 00434128 0320F809 */  jalr  $t9
/* 0043412C 00000000 */   nop   
/* 00434130 24010048 */  li    $at, 72
/* 00434134 1441000A */  bne   $v0, $at, .L00434160
/* 00434138 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0043413C 8E020000 */  lw    $v0, ($s0)
/* 00434140 92190021 */  lbu   $t9, 0x21($s0)
/* 00434144 90430021 */  lbu   $v1, 0x21($v0)
/* 00434148 000346C0 */  sll   $t0, $v1, 0x1b
/* 0043414C 00084EC2 */  srl   $t1, $t0, 0x1b
/* 00434150 03295026 */  xor   $t2, $t9, $t1
/* 00434154 314B001F */  andi  $t3, $t2, 0x1f
/* 00434158 01636026 */  xor   $t4, $t3, $v1
/* 0043415C A04C0021 */  sb    $t4, 0x21($v0)
.L00434160:
/* 00434160 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00434164 8E040000 */  lw    $a0, ($s0)
/* 00434168 24050048 */  li    $a1, 72
/* 0043416C 0320F809 */  jalr  $t9
/* 00434170 00000000 */   nop   
/* 00434174 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434178 8E040000 */  lw    $a0, ($s0)
/* 0043417C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00434180 0320F809 */  jalr  $t9
/* 00434184 00000000 */   nop   
/* 00434188 304D00FF */  andi  $t5, $v0, 0xff
/* 0043418C 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 00434190 000E7823 */  negu  $t7, $t6
/* 00434194 01AFC004 */  sllv  $t8, $t7, $t5
/* 00434198 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043419C 305100FF */  andi  $s1, $v0, 0xff
/* 004341A0 030002B0 */  tge   $t8, $zero, 0xa
/* 004341A4 8E080000 */  lw    $t0, ($s0)
/* 004341A8 920A0021 */  lbu   $t2, 0x21($s0)
/* 004341AC 2404013A */  li    $a0, 314
/* 004341B0 91190021 */  lbu   $t9, 0x21($t0)
/* 004341B4 314B001F */  andi  $t3, $t2, 0x1f
/* 004341B8 02202825 */  move  $a1, $s1
/* 004341BC 3329001F */  andi  $t1, $t9, 0x1f
/* 004341C0 112B0020 */  beq   $t1, $t3, .L00434244
/* 004341C4 00000000 */   nop   
/* 004341C8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004341CC 02203025 */  move  $a2, $s1
/* 004341D0 24070020 */  li    $a3, 32
/* 004341D4 0320F809 */  jalr  $t9
/* 004341D8 AFA00010 */   sw    $zero, 0x10($sp)
/* 004341DC 920C0021 */  lbu   $t4, 0x21($s0)
/* 004341E0 3C018601 */  lui   $at, 0x8601
/* 004341E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004341E8 318E001F */  andi  $t6, $t4, 0x1f
/* 004341EC 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 004341F0 000F6823 */  negu  $t5, $t7
/* 004341F4 01A1C024 */  and   $t8, $t5, $at
/* 004341F8 01D84004 */  sllv  $t0, $t8, $t6
/* 004341FC 0501000A */  bgez  $t0, .L00434228
/* 00434200 2404013B */   li    $a0, 315
/* 00434204 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00434208 2404013C */  li    $a0, 316
/* 0043420C 02202825 */  move  $a1, $s1
/* 00434210 02203025 */  move  $a2, $s1
/* 00434214 24070020 */  li    $a3, 32
/* 00434218 0320F809 */  jalr  $t9
/* 0043421C AFA00010 */   sw    $zero, 0x10($sp)
/* 00434220 10000008 */  b     .L00434244
/* 00434224 8FBC0028 */   lw    $gp, 0x28($sp)
.L00434228:
/* 00434228 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0043422C 02202825 */  move  $a1, $s1
/* 00434230 02203025 */  move  $a2, $s1
/* 00434234 24070020 */  li    $a3, 32
/* 00434238 0320F809 */  jalr  $t9
/* 0043423C AFA00010 */   sw    $zero, 0x10($sp)
/* 00434240 8FBC0028 */  lw    $gp, 0x28($sp)
.L00434244:
/* 00434244 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00434248 02002025 */  move  $a0, $s0
/* 0043424C 93A50047 */  lbu   $a1, 0x47($sp)
/* 00434250 0320F809 */  jalr  $t9
/* 00434254 00000000 */   nop   
/* 00434258 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043425C 92060021 */  lbu   $a2, 0x21($s0)
/* 00434260 304400FF */  andi  $a0, $v0, 0xff
/* 00434264 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00434268 02202825 */  move  $a1, $s1
/* 0043426C 30C6001F */  andi  $a2, $a2, 0x1f
/* 00434270 0320F809 */  jalr  $t9
/* 00434274 00000000 */   nop   
/* 00434278 10000039 */  b     .L00434360
/* 0043427C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00434280:
/* 00434280 96190022 */  lhu   $t9, 0x22($s0)
/* 00434284 332A0002 */  andi  $t2, $t9, 2
/* 00434288 014002B4 */  teq   $t2, $zero, 0xa
/* 0043428C 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00434290 8E040000 */  lw    $a0, ($s0)
/* 00434294 24050048 */  li    $a1, 72
/* 00434298 0320F809 */  jalr  $t9
/* 0043429C 00000000 */   nop   
/* 004342A0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004342A4 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 004342A8 0320F809 */  jalr  $t9
/* 004342AC 00000000 */   nop   
/* 004342B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004342B4 AFA20034 */  sw    $v0, 0x34($sp)
/* 004342B8 8E040000 */  lw    $a0, ($s0)
/* 004342BC 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 004342C0 0320F809 */  jalr  $t9
/* 004342C4 00000000 */   nop   
/* 004342C8 304500FF */  andi  $a1, $v0, 0xff
/* 004342CC 2CA90020 */  sltiu $t1, $a1, 0x20
/* 004342D0 00095823 */  negu  $t3, $t1
/* 004342D4 00AB6004 */  sllv  $t4, $t3, $a1
/* 004342D8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004342DC 305100FF */  andi  $s1, $v0, 0xff
/* 004342E0 018002B0 */  tge   $t4, $zero, 0xa
/* 004342E4 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 004342E8 2404000F */  li    $a0, 15
/* 004342EC 00003025 */  move  $a2, $zero
/* 004342F0 0320F809 */  jalr  $t9
/* 004342F4 8FA70034 */   lw    $a3, 0x34($sp)
/* 004342F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004342FC 2404001B */  li    $a0, 27
/* 00434300 24050006 */  li    $a1, 6
/* 00434304 8F99821C */  lw    $t9, %call16(emit_i)($gp)
/* 00434308 0320F809 */  jalr  $t9
/* 0043430C 00000000 */   nop   
/* 00434310 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434314 8FA40034 */  lw    $a0, 0x34($sp)
/* 00434318 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0043431C 0320F809 */  jalr  $t9
/* 00434320 00000000 */   nop   
/* 00434324 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434328 02002025 */  move  $a0, $s0
/* 0043432C 93A50047 */  lbu   $a1, 0x47($sp)
/* 00434330 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00434334 0320F809 */  jalr  $t9
/* 00434338 00000000 */   nop   
/* 0043433C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434340 92060021 */  lbu   $a2, 0x21($s0)
/* 00434344 304400FF */  andi  $a0, $v0, 0xff
/* 00434348 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 0043434C 02202825 */  move  $a1, $s1
/* 00434350 30C6001F */  andi  $a2, $a2, 0x1f
/* 00434354 0320F809 */  jalr  $t9
/* 00434358 00000000 */   nop   
/* 0043435C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00434360:
/* 00434360 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00434364 8FB00020 */  lw    $s0, 0x20($sp)
/* 00434368 8FB10024 */  lw    $s1, 0x24($sp)
/* 0043436C 03E00008 */  jr    $ra
/* 00434370 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_00434374, @function
func_00434374:
    # 00434500 func_00434500
/* 00434374 3C1C0FBF */  .cpload $t9
/* 00434378 279CB6DC */  
/* 0043437C 0399E021 */  
/* 00434380 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 00434384 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00434388 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043438C 91CE0000 */  lbu   $t6, ($t6)
/* 00434390 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00434394 AFA50024 */  sw    $a1, 0x24($sp)
/* 00434398 11C00011 */  beqz  $t6, .L004343E0
/* 0043439C 00803825 */   move  $a3, $a0
/* 004343A0 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 004343A4 90E60021 */  lbu   $a2, 0x21($a3)
/* 004343A8 93A40027 */  lbu   $a0, 0x27($sp)
/* 004343AC 9045FFFB */  lbu   $a1, -5($v0)
/* 004343B0 0320F809 */  jalr  $t9
/* 004343B4 30C6001F */   andi  $a2, $a2, 0x1f
/* 004343B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004343BC 93A50027 */  lbu   $a1, 0x27($sp)
/* 004343C0 24040029 */  li    $a0, 41
/* 004343C4 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 004343C8 00003025 */  move  $a2, $zero
/* 004343CC 00003825 */  move  $a3, $zero
/* 004343D0 0320F809 */  jalr  $t9
/* 004343D4 24A50001 */   addiu $a1, $a1, 1
/* 004343D8 10000011 */  b     .L00434420
/* 004343DC 8FBC0018 */   lw    $gp, 0x18($sp)
.L004343E0:
/* 004343E0 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 004343E4 93A40027 */  lbu   $a0, 0x27($sp)
/* 004343E8 90E60021 */  lbu   $a2, 0x21($a3)
/* 004343EC 9045FFFB */  lbu   $a1, -5($v0)
/* 004343F0 24840001 */  addiu $a0, $a0, 1
/* 004343F4 0320F809 */  jalr  $t9
/* 004343F8 30C6001F */   andi  $a2, $a2, 0x1f
/* 004343FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00434400 24040029 */  li    $a0, 41
/* 00434404 93A50027 */  lbu   $a1, 0x27($sp)
/* 00434408 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0043440C 00003025 */  move  $a2, $zero
/* 00434410 00003825 */  move  $a3, $zero
/* 00434414 0320F809 */  jalr  $t9
/* 00434418 00000000 */   nop   
/* 0043441C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00434420:
/* 00434420 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00434424 27BD0020 */  addiu $sp, $sp, 0x20
/* 00434428 03E00008 */  jr    $ra
/* 0043442C 00000000 */   nop   

    .type func_00434430, @function
func_00434430:
    # 00434500 func_00434500
/* 00434430 3C1C0FBF */  .cpload $t9
/* 00434434 279CB620 */  
/* 00434438 0399E021 */  
/* 0043443C 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 00434440 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00434444 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00434448 91CE0000 */  lbu   $t6, ($t6)
/* 0043444C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00434450 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00434454 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00434458 11C00013 */  beqz  $t6, .L004344A8
/* 0043445C 00803825 */   move  $a3, $a0
/* 00434460 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00434464 9050FFFB */  lbu   $s0, -5($v0)
/* 00434468 90E60021 */  lbu   $a2, 0x21($a3)
/* 0043446C 93A4002F */  lbu   $a0, 0x2f($sp)
/* 00434470 02002825 */  move  $a1, $s0
/* 00434474 0320F809 */  jalr  $t9
/* 00434478 30C6001F */   andi  $a2, $a2, 0x1f
/* 0043447C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00434480 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00434484 24040053 */  li    $a0, 83
/* 00434488 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0043448C 02003025 */  move  $a2, $s0
/* 00434490 2407001F */  li    $a3, 31
/* 00434494 AFA00010 */  sw    $zero, 0x10($sp)
/* 00434498 0320F809 */  jalr  $t9
/* 0043449C 24A50001 */   addiu $a1, $a1, 1
/* 004344A0 10000012 */  b     .L004344EC
/* 004344A4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004344A8:
/* 004344A8 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 004344AC 93A4002F */  lbu   $a0, 0x2f($sp)
/* 004344B0 9050FFFB */  lbu   $s0, -5($v0)
/* 004344B4 90E60021 */  lbu   $a2, 0x21($a3)
/* 004344B8 24840001 */  addiu $a0, $a0, 1
/* 004344BC 02002825 */  move  $a1, $s0
/* 004344C0 0320F809 */  jalr  $t9
/* 004344C4 30C6001F */   andi  $a2, $a2, 0x1f
/* 004344C8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004344CC 24040053 */  li    $a0, 83
/* 004344D0 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004344D4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004344D8 02003025 */  move  $a2, $s0
/* 004344DC 2407001F */  li    $a3, 31
/* 004344E0 0320F809 */  jalr  $t9
/* 004344E4 AFA00010 */   sw    $zero, 0x10($sp)
/* 004344E8 8FBC0020 */  lw    $gp, 0x20($sp)
.L004344EC:
/* 004344EC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 004344F0 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004344F4 27BD0028 */  addiu $sp, $sp, 0x28
/* 004344F8 03E00008 */  jr    $ra
/* 004344FC 00000000 */   nop   

    .type func_00434500, @function
func_00434500:
    # 004347BC eval_int_int_cvt
/* 00434500 3C1C0FBF */  .cpload $t9
/* 00434504 279CB550 */  
/* 00434508 0399E021 */  
/* 0043450C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00434510 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 00434514 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00434518 AFB00018 */  sw    $s0, 0x18($sp)
/* 0043451C 00808025 */  move  $s0, $a0
/* 00434520 30B100FF */  andi  $s1, $a1, 0xff
/* 00434524 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00434528 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0043452C AFA50034 */  sw    $a1, 0x34($sp)
/* 00434530 8C840000 */  lw    $a0, ($a0)
/* 00434534 0320F809 */  jalr  $t9
/* 00434538 24050048 */   li    $a1, 72
/* 0043453C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00434540 8E040000 */  lw    $a0, ($s0)
/* 00434544 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00434548 0320F809 */  jalr  $t9
/* 0043454C 00000000 */   nop   
/* 00434550 304E00FF */  andi  $t6, $v0, 0xff
/* 00434554 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00434558 000FC023 */  negu  $t8, $t7
/* 0043455C 01D8C804 */  sllv  $t9, $t8, $t6
/* 00434560 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00434564 A3A2002B */  sb    $v0, 0x2b($sp)
/* 00434568 032002B0 */  tge   $t9, $zero, 0xa
/* 0043456C 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00434570 02002025 */  move  $a0, $s0
/* 00434574 02202825 */  move  $a1, $s1
/* 00434578 0320F809 */  jalr  $t9
/* 0043457C 00000000 */   nop   
/* 00434580 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00434584 305100FF */  andi  $s1, $v0, 0xff
/* 00434588 02202025 */  move  $a0, $s1
/* 0043458C 8F8889D8 */  lw     $t0, %got(opcode_arch)($gp)
/* 00434590 91080000 */  lbu   $t0, ($t0)
/* 00434594 15000015 */  bnez  $t0, .L004345EC
/* 00434598 00000000 */   nop   
/* 0043459C 92090028 */  lbu   $t1, 0x28($s0)
/* 004345A0 24010008 */  li    $at, 8
/* 004345A4 15210009 */  bne   $t1, $at, .L004345CC
/* 004345A8 00000000 */   nop   
/* 004345AC 8F998020 */  lw    $t9, %got(func_00434374)($gp)
/* 004345B0 02002025 */  move  $a0, $s0
/* 004345B4 02202825 */  move  $a1, $s1
/* 004345B8 27394374 */  addiu $t9, %lo(func_00434374) # addiu $t9, $t9, 0x4374
/* 004345BC 0320F809 */  jalr  $t9
/* 004345C0 27A20030 */   addiu $v0, $sp, 0x30
/* 004345C4 1000000F */  b     .L00434604
/* 004345C8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004345CC:
/* 004345CC 8F998020 */  lw    $t9, %got(func_00434430)($gp)
/* 004345D0 02002025 */  move  $a0, $s0
/* 004345D4 02202825 */  move  $a1, $s1
/* 004345D8 27394430 */  addiu $t9, %lo(func_00434430) # addiu $t9, $t9, 0x4430
/* 004345DC 0320F809 */  jalr  $t9
/* 004345E0 27A20030 */   addiu $v0, $sp, 0x30
/* 004345E4 10000007 */  b     .L00434604
/* 004345E8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004345EC:
/* 004345EC 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 004345F0 92060021 */  lbu   $a2, 0x21($s0)
/* 004345F4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 004345F8 0320F809 */  jalr  $t9
/* 004345FC 30C6001F */   andi  $a2, $a2, 0x1f
/* 00434600 8FBC0020 */  lw    $gp, 0x20($sp)
.L00434604:
/* 00434604 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00434608 8FB00018 */  lw    $s0, 0x18($sp)
/* 0043460C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00434610 03E00008 */  jr    $ra
/* 00434614 27BD0030 */   addiu $sp, $sp, 0x30

    .type func_00434618, @function
func_00434618:
    # 004347BC eval_int_int_cvt
/* 00434618 3C1C0FBF */  .cpload $t9
/* 0043461C 279CB438 */  
/* 00434620 0399E021 */  
/* 00434624 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00434628 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0043462C AFB10024 */  sw    $s1, 0x24($sp)
/* 00434630 AFB00020 */  sw    $s0, 0x20($sp)
/* 00434634 30B000FF */  andi  $s0, $a1, 0xff
/* 00434638 00808825 */  move  $s1, $a0
/* 0043463C AFBF002C */  sw    $ra, 0x2c($sp)
/* 00434640 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00434644 AFA5003C */  sw    $a1, 0x3c($sp)
/* 00434648 8C840000 */  lw    $a0, ($a0)
/* 0043464C 0320F809 */  jalr  $t9
/* 00434650 24050048 */   li    $a1, 72
/* 00434654 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434658 8E240000 */  lw    $a0, ($s1)
/* 0043465C 8F998338 */  lw    $t9, %call16(reg)($gp)
/* 00434660 0320F809 */  jalr  $t9
/* 00434664 00000000 */   nop   
/* 00434668 304E00FF */  andi  $t6, $v0, 0xff
/* 0043466C 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00434670 000FC023 */  negu  $t8, $t7
/* 00434674 01D8C804 */  sllv  $t9, $t8, $t6
/* 00434678 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043467C 304700FF */  andi  $a3, $v0, 0xff
/* 00434680 032002B0 */  tge   $t9, $zero, 0xa
/* 00434684 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 00434688 02202025 */  move  $a0, $s1
/* 0043468C 02002825 */  move  $a1, $s0
/* 00434690 0320F809 */  jalr  $t9
/* 00434694 A3A70033 */   sb    $a3, 0x33($sp)
/* 00434698 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043469C 305000FF */  andi  $s0, $v0, 0xff
/* 004346A0 24010001 */  li    $at, 1
/* 004346A4 8F8889D8 */  lw     $t0, %got(opcode_arch)($gp)
/* 004346A8 93A70033 */  lbu   $a3, 0x33($sp)
/* 004346AC 02002025 */  move  $a0, $s0
/* 004346B0 91080000 */  lbu   $t0, ($t0)
/* 004346B4 15010029 */  bne   $t0, $at, .L0043475C
/* 004346B8 00000000 */   nop   
/* 004346BC 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 004346C0 92260021 */  lbu   $a2, 0x21($s1)
/* 004346C4 00E02825 */  move  $a1, $a3
/* 004346C8 0320F809 */  jalr  $t9
/* 004346CC 30C6001F */   andi  $a2, $a2, 0x1f
/* 004346D0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004346D4 2404013A */  li    $a0, 314
/* 004346D8 02002825 */  move  $a1, $s0
/* 004346DC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004346E0 02003025 */  move  $a2, $s0
/* 004346E4 24070020 */  li    $a3, 32
/* 004346E8 0320F809 */  jalr  $t9
/* 004346EC AFA00010 */   sw    $zero, 0x10($sp)
/* 004346F0 92290021 */  lbu   $t1, 0x21($s1)
/* 004346F4 3C010600 */  lui   $at, 0x600
/* 004346F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004346FC 312A001F */  andi  $t2, $t1, 0x1f
/* 00434700 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 00434704 000B6023 */  negu  $t4, $t3
/* 00434708 01816824 */  and   $t5, $t4, $at
/* 0043470C 014D7804 */  sllv  $t7, $t5, $t2
/* 00434710 05E1000A */  bgez  $t7, .L0043473C
/* 00434714 2404013B */   li    $a0, 315
/* 00434718 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0043471C 2404013C */  li    $a0, 316
/* 00434720 02002825 */  move  $a1, $s0
/* 00434724 02003025 */  move  $a2, $s0
/* 00434728 24070020 */  li    $a3, 32
/* 0043472C 0320F809 */  jalr  $t9
/* 00434730 AFA00010 */   sw    $zero, 0x10($sp)
/* 00434734 1000001C */  b     .L004347A8
/* 00434738 8FBC0028 */   lw    $gp, 0x28($sp)
.L0043473C:
/* 0043473C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00434740 02002825 */  move  $a1, $s0
/* 00434744 02003025 */  move  $a2, $s0
/* 00434748 24070020 */  li    $a3, 32
/* 0043474C 0320F809 */  jalr  $t9
/* 00434750 AFA00010 */   sw    $zero, 0x10($sp)
/* 00434754 10000014 */  b     .L004347A8
/* 00434758 8FBC0028 */   lw    $gp, 0x28($sp)
.L0043475C:
/* 0043475C 8F98898C */  lw     $t8, %got(lsb_first)($gp)
/* 00434760 00E02825 */  move  $a1, $a3
/* 00434764 02002025 */  move  $a0, $s0
/* 00434768 93180000 */  lbu   $t8, ($t8)
/* 0043476C 13000008 */  beqz  $t8, .L00434790
/* 00434770 00000000 */   nop   
/* 00434774 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00434778 92260021 */  lbu   $a2, 0x21($s1)
/* 0043477C 02002025 */  move  $a0, $s0
/* 00434780 0320F809 */  jalr  $t9
/* 00434784 30C6001F */   andi  $a2, $a2, 0x1f
/* 00434788 10000007 */  b     .L004347A8
/* 0043478C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00434790:
/* 00434790 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 00434794 92260021 */  lbu   $a2, 0x21($s1)
/* 00434798 24E50001 */  addiu $a1, $a3, 1
/* 0043479C 0320F809 */  jalr  $t9
/* 004347A0 30C6001F */   andi  $a2, $a2, 0x1f
/* 004347A4 8FBC0028 */  lw    $gp, 0x28($sp)
.L004347A8:
/* 004347A8 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004347AC 8FB00020 */  lw    $s0, 0x20($sp)
/* 004347B0 8FB10024 */  lw    $s1, 0x24($sp)
/* 004347B4 03E00008 */  jr    $ra
/* 004347B8 27BD0038 */   addiu $sp, $sp, 0x38

glabel eval_int_int_cvt
    .ent eval_int_int_cvt
    # 0042BDAC eval
/* 004347BC 3C1C0FBF */  .cpload $t9
/* 004347C0 279CB294 */  
/* 004347C4 0399E021 */  
/* 004347C8 908E0021 */  lbu   $t6, 0x21($a0)
/* 004347CC 3C010501 */  lui   $at, 0x501
/* 004347D0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004347D4 31CF001F */  andi  $t7, $t6, 0x1f
/* 004347D8 2DF80020 */  sltiu $t8, $t7, 0x20
/* 004347DC 0018C823 */  negu  $t9, $t8
/* 004347E0 03214024 */  and   $t0, $t9, $at
/* 004347E4 01E84804 */  sllv  $t1, $t0, $t7
/* 004347E8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004347EC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004347F0 05210008 */  bgez  $t1, .L00434814
/* 004347F4 AFA50024 */   sw    $a1, 0x24($sp)
/* 004347F8 8F998020 */  lw    $t9, %got(func_00434500)($gp)
/* 004347FC 27A20020 */  addiu $v0, $sp, 0x20
/* 00434800 27394500 */  addiu $t9, %lo(func_00434500) # addiu $t9, $t9, 0x4500
/* 00434804 0320F809 */  jalr  $t9
/* 00434808 00000000 */   nop   
/* 0043480C 10000016 */  b     .L00434868
/* 00434810 8FBC0018 */   lw    $gp, 0x18($sp)
.L00434814:
/* 00434814 908A0028 */  lbu   $t2, 0x28($a0)
/* 00434818 3C010501 */  lui   $at, 0x501
/* 0043481C 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 00434820 000B6023 */  negu  $t4, $t3
/* 00434824 01816824 */  and   $t5, $t4, $at
/* 00434828 014D7004 */  sllv  $t6, $t5, $t2
/* 0043482C 05C10008 */  bgez  $t6, .L00434850
/* 00434830 00000000 */   nop   
/* 00434834 8F998020 */  lw    $t9, %got(func_00434618)($gp)
/* 00434838 27A20020 */  addiu $v0, $sp, 0x20
/* 0043483C 27394618 */  addiu $t9, %lo(func_00434618) # addiu $t9, $t9, 0x4618
/* 00434840 0320F809 */  jalr  $t9
/* 00434844 00000000 */   nop   
/* 00434848 10000007 */  b     .L00434868
/* 0043484C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00434850:
/* 00434850 8F998020 */  lw    $t9, %got(func_004340D4)($gp)
/* 00434854 27A20020 */  addiu $v0, $sp, 0x20
/* 00434858 273940D4 */  addiu $t9, %lo(func_004340D4) # addiu $t9, $t9, 0x40d4
/* 0043485C 0320F809 */  jalr  $t9
/* 00434860 00000000 */   nop   
/* 00434864 8FBC0018 */  lw    $gp, 0x18($sp)
.L00434868:
/* 00434868 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043486C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00434870 03E00008 */  jr    $ra
/* 00434874 00000000 */   nop   
    .type eval_int_int_cvt, @function
    .size eval_int_int_cvt, .-eval_int_int_cvt
    .end eval_int_int_cvt

glabel eval_flt_flt_cvt
    .ent eval_flt_flt_cvt
    # 0042BDAC eval
/* 00434878 3C1C0FBF */  .cpload $t9
/* 0043487C 279CB1D8 */  
/* 00434880 0399E021 */  
/* 00434884 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00434888 8F9983D0 */  lw    $t9, %call16(eval)($gp)
/* 0043488C AFB00014 */  sw    $s0, 0x14($sp)
/* 00434890 00808025 */  move  $s0, $a0
/* 00434894 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00434898 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043489C AFA5002C */  sw    $a1, 0x2c($sp)
/* 004348A0 8C840000 */  lw    $a0, ($a0)
/* 004348A4 0320F809 */  jalr  $t9
/* 004348A8 24050048 */   li    $a1, 72
/* 004348AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004348B0 92050021 */  lbu   $a1, 0x21($s0)
/* 004348B4 92040028 */  lbu   $a0, 0x28($s0)
/* 004348B8 8F9983C8 */  lw    $t9, %call16(cvt_tab)($gp)
/* 004348BC 30A5001F */  andi  $a1, $a1, 0x1f
/* 004348C0 0320F809 */  jalr  $t9
/* 004348C4 00000000 */   nop   
/* 004348C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004348CC A7A20026 */  sh    $v0, 0x26($sp)
/* 004348D0 8E040000 */  lw    $a0, ($s0)
/* 004348D4 8F998340 */  lw    $t9, %call16(flt_reg)($gp)
/* 004348D8 0320F809 */  jalr  $t9
/* 004348DC 00000000 */   nop   
/* 004348E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004348E4 A3A20024 */  sb    $v0, 0x24($sp)
/* 004348E8 02002025 */  move  $a0, $s0
/* 004348EC 8F998348 */  lw    $t9, %call16(get_dest)($gp)
/* 004348F0 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004348F4 0320F809 */  jalr  $t9
/* 004348F8 00000000 */   nop   
/* 004348FC 304E00FF */  andi  $t6, $v0, 0xff
/* 00434900 25CFFFE0 */  addiu $t7, $t6, -0x20
/* 00434904 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00434908 0018C823 */  negu  $t9, $t8
/* 0043490C 01F94004 */  sllv  $t0, $t9, $t7
/* 00434910 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00434914 A3A2002F */  sb    $v0, 0x2f($sp)
/* 00434918 0500000C */  bltz  $t0, .L0043494C
/* 0043491C 304700FF */   andi  $a3, $v0, 0xff
/* 00434920 92090021 */  lbu   $t1, 0x21($s0)
/* 00434924 8F8B8898 */  lw     $t3, %got(reg_kind_tab)($gp)
/* 00434928 8F998500 */  lw    $t9, %call16(get_free_fp_reg)($gp)
/* 0043492C 312A001F */  andi  $t2, $t1, 0x1f
/* 00434930 014B6021 */  addu  $t4, $t2, $t3
/* 00434934 91850000 */  lbu   $a1, ($t4)
/* 00434938 00002025 */  move  $a0, $zero
/* 0043493C 0320F809 */  jalr  $t9
/* 00434940 24060001 */   li    $a2, 1
/* 00434944 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00434948 304700FF */  andi  $a3, $v0, 0xff
.L0043494C:
/* 0043494C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00434950 97A40026 */  lhu   $a0, 0x26($sp)
/* 00434954 00E02825 */  move  $a1, $a3
/* 00434958 93A60024 */  lbu   $a2, 0x24($sp)
/* 0043495C 0320F809 */  jalr  $t9
/* 00434960 A3A70025 */   sb    $a3, 0x25($sp)
/* 00434964 93A70025 */  lbu   $a3, 0x25($sp)
/* 00434968 93AD002F */  lbu   $t5, 0x2f($sp)
/* 0043496C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00434970 10ED000D */  beq   $a3, $t5, .L004349A8
/* 00434974 00000000 */   nop   
/* 00434978 920E0021 */  lbu   $t6, 0x21($s0)
/* 0043497C 8F998898 */  lw     $t9, %got(reg_kind_tab)($gp)
/* 00434980 00E02025 */  move  $a0, $a3
/* 00434984 31D8001F */  andi  $t8, $t6, 0x1f
/* 00434988 03197821 */  addu  $t7, $t8, $t9
/* 0043498C 8F998514 */  lw    $t9, %call16(free_fp_reg)($gp)
/* 00434990 91E50000 */  lbu   $a1, ($t7)
/* 00434994 A3A70025 */  sb    $a3, 0x25($sp)
/* 00434998 0320F809 */  jalr  $t9
/* 0043499C 00000000 */   nop   
/* 004349A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004349A4 93A70025 */  lbu   $a3, 0x25($sp)
.L004349A8:
/* 004349A8 8F99834C */  lw    $t9, %call16(move_to_dest)($gp)
/* 004349AC 92060021 */  lbu   $a2, 0x21($s0)
/* 004349B0 93A4002F */  lbu   $a0, 0x2f($sp)
/* 004349B4 00E02825 */  move  $a1, $a3
/* 004349B8 0320F809 */  jalr  $t9
/* 004349BC 30C6001F */   andi  $a2, $a2, 0x1f
/* 004349C0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004349C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004349C8 8FB00014 */  lw    $s0, 0x14($sp)
/* 004349CC 03E00008 */  jr    $ra
/* 004349D0 27BD0028 */   addiu $sp, $sp, 0x28
    .type eval_flt_flt_cvt, @function
    .size eval_flt_flt_cvt, .-eval_flt_flt_cvt
    .end eval_flt_flt_cvt
)"");
