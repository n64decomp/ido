__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000D750:
    # 0046C710 unroll_searchloop
    .ascii "uoptroll.p"

RO_1000D75A:
    # 0046C710 unroll_searchloop
    .ascii "uoptroll.p"

    .balign 4
jtbl_1000D764:
    # 0046C710 unroll_searchloop
    .gpword .L0046CB20
    .gpword .L0046C998
    .gpword .L0046CBDC
    .gpword .L0046CE98
    .gpword .L0046C998
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CA30
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CB54
    .gpword .L0046CB54
    .gpword .L0046CC10

    .balign 4
jtbl_1000D7A0:
    # 0046C710 unroll_searchloop
    .gpword .L0046CB98
    .gpword .L0046CB54
    .gpword .L0046CB54
    .gpword .L0046CE98
    .gpword .L0046CA30
    .gpword .L0046CA30

    .balign 4
jtbl_1000D7B8:
    # 0046C710 unroll_searchloop
    .gpword .L0046CA70
    .gpword .L0046CA70
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CCA0
    .gpword .L0046CCF8
    .gpword .L0046CCF8
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CC7C
    .gpword .L0046CCF8
    .gpword .L0046CCF8
    .gpword .L0046CC24
    .gpword .L0046CB54
    .gpword .L0046CCA0
    .gpword .L0046CE98
    .gpword .L0046CAA0
    .gpword .L0046C998
    .gpword .L0046C998

    .balign 4
jtbl_1000D80C:
    # 0046C710 unroll_searchloop
    .gpword .L0046CA70
    .gpword .L0046CA70
    .gpword .L0046CE98
    .gpword .L0046CB20
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CA30
    .gpword .L0046CA30
    .gpword .L0046CA30
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046C998
    .gpword .L0046CE98
    .gpword .L0046CA30
    .gpword .L0046CB20
    .gpword .L0046C9EC
    .gpword .L0046CE98
    .gpword .L0046CB20
    .gpword .L0046CB20

    .balign 4
jtbl_1000D864:
    # 0046C710 unroll_searchloop
    .gpword .L0046CB98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CB20
    .gpword .L0046CA30
    .gpword .L0046CA30
    .gpword .L0046CA30
    .gpword .L0046CB20
    .gpword .L0046CB20

    .balign 4
jtbl_1000D88C:
    # 0046C710 unroll_searchloop
    .gpword .L0046CB98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046C998
    .gpword .L0046CE98
    .gpword .L0046CE98
    .gpword .L0046C998

    .balign 4
jtbl_1000D8AC:
    # 0046C710 unroll_searchloop
    .gpword .L0046C8BC
    .gpword .L0046C974
    .gpword .L0046C848
    .gpword .L0046C8BC

RO_1000D8BC:
    # 0046D428 oneloopblockexpr
    .ascii "uoptroll.p"

RO_1000D8C6:
    # 0046D428 oneloopblockexpr
    .ascii "uoptroll.p"

    .balign 4
jtbl_1000D8D0:
    # 0046D428 oneloopblockexpr
    .gpword .L0046DD6C
    .gpword .L0046D7FC
    .gpword .L0046DF14
    .gpword .L0046E570
    .gpword .L0046D7FC
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046D7FC
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046DD6C
    .gpword .L0046DD6C
    .gpword .L0046DD6C

    .balign 4
jtbl_1000D90C:
    # 0046D428 oneloopblockexpr
    .gpword .L0046DD6C
    .gpword .L0046DD6C
    .gpword .L0046DD6C
    .gpword .L0046E570
    .gpword .L0046D7FC
    .gpword .L0046D7FC

    .balign 4
jtbl_1000D924:
    # 0046D428 oneloopblockexpr
    .gpword .L0046D7FC
    .gpword .L0046D7FC
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E3BC
    .gpword .L0046E3BC
    .gpword .L0046E3BC
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046DFD4
    .gpword .L0046E3BC
    .gpword .L0046E3BC
    .gpword .L0046DFD4
    .gpword .L0046DD6C
    .gpword .L0046E3BC
    .gpword .L0046E570
    .gpword .L0046D7FC
    .gpword .L0046D7FC
    .gpword .L0046D7FC

    .balign 4
jtbl_1000D978:
    # 0046D428 oneloopblockexpr
    .gpword .L0046D7FC
    .gpword .L0046D7FC
    .gpword .L0046E570
    .gpword .L0046DD6C
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046D7FC
    .gpword .L0046D7FC
    .gpword .L0046D7FC
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046D7FC
    .gpword .L0046E570
    .gpword .L0046D7FC
    .gpword .L0046DD6C
    .gpword .L0046D7FC
    .gpword .L0046E570
    .gpword .L0046DD6C
    .gpword .L0046DD6C

    .balign 4
jtbl_1000D9D0:
    # 0046D428 oneloopblockexpr
    .gpword .L0046DD6C
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046DD6C
    .gpword .L0046D7FC
    .gpword .L0046D7FC
    .gpword .L0046D7FC
    .gpword .L0046DD6C
    .gpword .L0046DD6C

    .balign 4
jtbl_1000D9F8:
    # 0046D428 oneloopblockexpr
    .gpword .L0046DD6C
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046D7FC
    .gpword .L0046E570
    .gpword .L0046E570
    .gpword .L0046D7FC

    .balign 4
jtbl_1000DA18:
    # 0046D428 oneloopblockexpr
    .gpword .L0046D7E0
    .gpword .L0046D7E0
    .gpword .L0046D47C
    .gpword .L0046D7F0
    .gpword .L0046D728
    .gpword .L0046D47C
    .gpword .L0046E744
    .gpword .L0046D7E0

RO_1000DA38:
    # 0046E77C oneloopblockstmt
    .ascii "uoptroll.p"

RO_1000DA42:
    # 0046E77C oneloopblockstmt
    .ascii "uoptroll.p"

    .balign 4
jtbl_1000DA4C:
    # 0046E77C oneloopblockstmt
    .gpword .L0046F414
    .gpword .L0046F498
    .gpword .L0046F448

    .balign 4
jtbl_1000DA58:
    # 0046E77C oneloopblockstmt
    .gpword .L0046EC84
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F518

    .balign 4
jtbl_1000DA68:
    # 0046E77C oneloopblockstmt
    .gpword .L0046EC38
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F744
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F760
    .gpword .L0046F744

    .balign 4
jtbl_1000DA88:
    # 0046E77C oneloopblockstmt
    .gpword .L0046E800
    .gpword .L0046ECF0
    .gpword .L0046ECF0
    .gpword .L0046F888
    .gpword .L0046ECCC
    .gpword .L0046F888
    .gpword .L0046F97C
    .gpword .L0046F97C

    .balign 4
jtbl_1000DAA8:
    # 0046E77C oneloopblockstmt
    .gpword .L0046F4FC
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F97C
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F10C
    .gpword .L0046F10C

    .balign 4
jtbl_1000DACC:
    # 0046E77C oneloopblockstmt
    .gpword .L0046F52C
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F97C

    .balign 4
jtbl_1000DADC:
    # 0046E77C oneloopblockstmt
    .gpword .L0046F744
    .gpword .L0046F888
    .gpword .L0046E800
    .gpword .L0046F2A4
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F5A8
    .gpword .L0046F2F0
    .gpword .L0046F2F0
    .gpword .L0046F2F0
    .gpword .L0046F2F0
    .gpword .L0046F2F0
    .gpword .L0046F2F0
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F594
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F888
    .gpword .L0046F680

RO_1000DB2C:
    # 0046FCD4 link_jump_in_loop
    .ascii "uoptroll.p"

RO_1000DB36:
    # 00470570 expr_instr
    .ascii "uoptroll.p"

    .balign 4
jtbl_1000DB40:
    # 00470570 expr_instr
    .gpword .L004705BC
    .gpword .L004705BC
    .gpword .L004705BC
    .gpword .L004705FC
    .gpword .L004705E0
    .gpword .L004705C4
    .gpword .L00470664
    .gpword .L004705BC

RO_1000DB60:
    # 004712A4 reset_images
    .asciz "uoptroll.p"

    .balign 4
jtbl_1000DB6C:
    # 004712A4 reset_images
    .gpword .L004713C8
    .gpword .L004713C8
    .gpword .L00471360
    .gpword .L00471370
    .gpword .L00471358
    .gpword .L00471360
    .gpword .L004713A8
    .gpword .L004713C8

RO_1000DB8C:
    # 004713E8 loopunroll
    .ascii "suc::::"

RO_1000DB93:
    # 004713E8 loopunroll
    .ascii "pre::::"

RO_1000DB9A:
    # 004713E8 loopunroll
    .ascii "   flow graph for "

RO_1000DBAC:
    # 004713E8 loopunroll
    .ascii " times to BB:"

RO_1000DBB9:
    # 004713E8 loopunroll
    .ascii "UNROLLING at BB:"

RO_1000DBC9:
    # 004736E0 func_004736E0
    .asciz "uoptroll.p"

    .balign 4
jtbl_1000DBD4:
    # 004736E0 func_004736E0
    .gpword .L0047376C
    .gpword .L00473790
    .gpword .L00473798

.data
D_10010FC0:
    # 0046C710 unroll_searchloop
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10010FD0:
    # 0046D428 oneloopblockexpr
    .byte 0x00,0x0c,0x00,0x60,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00

D_10010FE0:
    # 0046D428 oneloopblockexpr
    .byte 0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00

D_10010FF4:
    # 0046D428 oneloopblockexpr
    .byte 0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x00

D_10010FFC:
    # 0046D428 oneloopblockexpr
    .byte 0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00

D_10011010:
    # 0046D428 oneloopblockexpr
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_10011018:
    # 0046D428 oneloopblockexpr
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10011028:
    # 0046E77C oneloopblockstmt
    .byte 0x00,0x00,0x00,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xfc,0x00,0x08,0x10

D_10011038:
    # 0046FCD4 link_jump_in_loop
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x80,0x00,0x00

D_10011048:
    # 00470048 pre_loopblock
    .byte 0x02,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x20,0x00,0x01,0x00,0x80,0x00,0x00

D_10011058:
    # 00470048 pre_loopblock
    .byte 0x04,0x01,0x00,0x00,0x02,0x00,0x00,0x03,0xa0,0x00,0x00,0xc0,0x01,0x20,0x00,0x19,0xfc,0x88,0x08,0x10

D_1001106C:
    # 00470248 post_loopblock
    .byte 0x02,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x20,0x00,0x01,0x00,0x80,0x00,0x00

D_1001107C:
    # 00470248 post_loopblock
    .byte 0x04,0x01,0x00,0x00,0x02,0x00,0x40,0x03,0xa0,0x00,0x00,0xc0,0x01,0x20,0x00,0x19,0xfc,0x88,0x08,0x10

D_10011090:
    # 00470698 estimate_instr
    .byte 0x00,0x00,0x00,0x03,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10

D_100110A0:
    # 00470698 estimate_instr
    .byte 0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00

D_100110A8:
    # 00470698 estimate_instr
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_100110B4:
    # 00470698 estimate_instr
    .byte 0x04,0x01,0x00,0x00,0x02,0x00,0x00,0x03,0x80,0x00,0x00,0xc0,0x01,0x20,0x00,0x19,0xfc,0x80,0x08,0x10

D_100110C8:
    # 004713E8 loopunroll
    .byte 0x10,0x80,0xe7,0x10,0x80,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x40,0x00,0x82,0x00,0x00

D_100110DC:
    # 004713E8 loopunroll
    .byte 0x10,0x80,0xe7,0x12,0x80,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x40,0x00,0x82,0x00,0x00

D_100110F0:
    # 004713E8 loopunroll
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10

D_10011100:
    # 004713E8 loopunroll
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_1001110C:
    # 004713E8 loopunroll
    .byte 0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x00,0x00

D_1001111C:
    # 004713E8 loopunroll
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x80,0x00,0x00

D_1001112C:
    # 004713E8 loopunroll
    .byte 0x00,0x80,0x00,0x00,0x00,0x02,0x00,0x00

D_10011134:
    # 004713E8 loopunroll
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01



.bss
    .balign 4
# 1001C648
glabel i_var_inx
    # 0046D428 oneloopblockexpr
    # 004713E8 loopunroll
    .space 4
    .size i_var_inx, 4
    .type i_var_inx, @object

    .balign 4
# 1001C64C
glabel incr_stat
    # 00470048 pre_loopblock
    # 00470248 post_loopblock
    # 004713E8 loopunroll
    .space 4
    .size incr_stat, 4
    .type incr_stat, @object

    .balign 4
# 1001C650
glabel incr_amount
    # 0046D428 oneloopblockexpr
    # 004713E8 loopunroll
    .space 4
    .size incr_amount, 4
    .type incr_amount, @object

    .balign 4
# 1001C654
glabel loopbody
    # 0046FA20 new_header_node
    # 0046FB40 record_labels
    # 0046FCD4 link_jump_in_loop
    # 00470048 pre_loopblock
    # 00470248 post_loopblock
    # 004713E8 loopunroll
    .space 4
    .size loopbody, 4
    .type loopbody, @object

    .balign 4
# 1001C658
glabel loopbodyend
    # 0046FB40 record_labels
    # 0046FCD4 link_jump_in_loop
    # 00470248 post_loopblock
    # 004713E8 loopunroll
    .space 4
    .size loopbodyend, 4
    .type loopbodyend, @object

    .balign 4
# 1001C65C
glabel loopheader
    # 0046FA20 new_header_node
    # 004713E8 loopunroll
    .space 4
    .size loopheader, 4
    .type loopheader, @object

    .balign 4
# 1001C660
glabel i_var_size
    # 004713E8 loopunroll
    .space 4
    .size i_var_size, 4
    .type i_var_size, @object

    .balign 4
# 1001C664
glabel looplab
    # 0046FB40 record_labels
    # 00470048 pre_loopblock
    # 004713E8 loopunroll
    .space 4
    .size looplab, 4
    .type looplab, @object

    .balign 4
# 1001C668
glabel iter_start_bb
    # 0046FC38 new_set_of_labels
    # 0046FCD4 link_jump_in_loop
    .space 4
    .size iter_start_bb, 4
    .type iter_start_bb, @object

    .balign 4
# 1001C66C
glabel labelmap_head
    # 0046FC38 new_set_of_labels
    # 0046FC9C get_labelmap
    # 004713E8 loopunroll
    .space 4
    .size labelmap_head, 4
    .type labelmap_head, @object

    .balign 4
# 1001C670
glabel labelmap_unused
    # 0046FB40 record_labels
    # 0046FC38 new_set_of_labels
    # 004713E8 loopunroll
    .space 4
    .size labelmap_unused, 4
    .type labelmap_unused, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel change_to_const_eq
    .ent change_to_const_eq
    # 004713E8 loopunroll
/* 0046BA10 3C1C0FBB */  .cpload $t9
/* 0046BA14 279CE880 */  
/* 0046BA18 0399E021 */  
/* 0046BA1C 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0046BA20 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046BA24 00A08825 */  move  $s1, $a1
/* 0046BA28 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0046BA2C AFBC0028 */  sw    $gp, 0x28($sp)
/* 0046BA30 AFB30024 */  sw    $s3, 0x24($sp)
/* 0046BA34 AFB20020 */  sw    $s2, 0x20($sp)
/* 0046BA38 AFB00018 */  sw    $s0, 0x18($sp)
/* 0046BA3C AFA40050 */  sw    $a0, 0x50($sp)
/* 0046BA40 AFA60058 */  sw    $a2, 0x58($sp)
/* 0046BA44 14800003 */  bnez  $a0, .L0046BA54
/* 0046BA48 AFA7005C */   sw    $a3, 0x5c($sp)
/* 0046BA4C 10000002 */  b     .L0046BA58
/* 0046BA50 24130023 */   li    $s3, 35
.L0046BA54:
/* 0046BA54 2413005F */  li    $s3, 95
.L0046BA58:
/* 0046BA58 8E220024 */  lw    $v0, 0x24($s1)
/* 0046BA5C 8FB8005C */  lw    $t8, 0x5c($sp)
/* 0046BA60 944E0006 */  lhu   $t6, 6($v0)
/* 0046BA64 25CF0001 */  addiu $t7, $t6, 1
/* 0046BA68 17000003 */  bnez  $t8, .L0046BA78
/* 0046BA6C A44F0006 */   sh    $t7, 6($v0)
/* 0046BA70 1000001A */  b     .L0046BADC
/* 0046BA74 8E320028 */   lw    $s2, 0x28($s1)
.L0046BA78:
/* 0046BA78 8E270028 */  lw    $a3, 0x28($s1)
/* 0046BA7C 24010002 */  li    $at, 2
/* 0046BA80 8FA9005C */  lw    $t1, 0x5c($sp)
/* 0046BA84 90F90000 */  lbu   $t9, ($a3)
/* 0046BA88 8FA60058 */  lw    $a2, 0x58($sp)
/* 0046BA8C 8FAB005C */  lw    $t3, 0x5c($sp)
/* 0046BA90 1721000A */  bne   $t9, $at, .L0046BABC
/* 0046BA94 00E02825 */   move  $a1, $a3
/* 0046BA98 8CE80020 */  lw    $t0, 0x20($a3)
/* 0046BA9C 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0046BAA0 92250001 */  lbu   $a1, 1($s1)
/* 0046BAA4 01092021 */  addu  $a0, $t0, $t1
/* 0046BAA8 0320F809 */  jalr  $t9
/* 0046BAAC AFA40030 */   sw    $a0, 0x30($sp)
/* 0046BAB0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BAB4 10000009 */  b     .L0046BADC
/* 0046BAB8 00409025 */   move  $s2, $v0
.L0046BABC:
/* 0046BABC 8CEA0020 */  lw    $t2, 0x20($a3)
/* 0046BAC0 8F9986B4 */  lw    $t9, %call16(enter_lda)($gp)
/* 0046BAC4 8FA60058 */  lw    $a2, 0x58($sp)
/* 0046BAC8 014B2021 */  addu  $a0, $t2, $t3
/* 0046BACC 0320F809 */  jalr  $t9
/* 0046BAD0 AFA40030 */   sw    $a0, 0x30($sp)
/* 0046BAD4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BAD8 00409025 */  move  $s2, $v0
.L0046BADC:
/* 0046BADC 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0046BAE0 02602025 */  move  $a0, $s3
/* 0046BAE4 8E250024 */  lw    $a1, 0x24($s1)
/* 0046BAE8 0320F809 */  jalr  $t9
/* 0046BAEC 02403025 */   move  $a2, $s2
/* 0046BAF0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BAF4 304CFFFF */  andi  $t4, $v0, 0xffff
/* 0046BAF8 000C6880 */  sll   $t5, $t4, 2
/* 0046BAFC 8F8E8DF8 */  lw     $t6, %got(table)($gp)
/* 0046BB00 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046BB04 00001825 */  move  $v1, $zero
/* 0046BB08 01AE7821 */  addu  $t7, $t5, $t6
/* 0046BB0C 8DF00000 */  lw    $s0, ($t7)
/* 0046BB10 24050004 */  li    $a1, 4
/* 0046BB14 12000019 */  beqz  $s0, .L0046BB7C
/* 0046BB18 00000000 */   nop   
/* 0046BB1C 92180000 */  lbu   $t8, ($s0)
.L0046BB20:
/* 0046BB20 54B80012 */  bnel  $a1, $t8, .L0046BB6C
/* 0046BB24 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046BB28 92190020 */  lbu   $t9, 0x20($s0)
/* 0046BB2C 5679000F */  bnel  $s3, $t9, .L0046BB6C
/* 0046BB30 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046BB34 92280001 */  lbu   $t0, 1($s1)
/* 0046BB38 92090001 */  lbu   $t1, 1($s0)
/* 0046BB3C 5509000B */  bnel  $t0, $t1, .L0046BB6C
/* 0046BB40 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046BB44 8E0A0024 */  lw    $t2, 0x24($s0)
/* 0046BB48 8E2B0024 */  lw    $t3, 0x24($s1)
/* 0046BB4C 554B0007 */  bnel  $t2, $t3, .L0046BB6C
/* 0046BB50 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046BB54 8E0C0028 */  lw    $t4, 0x28($s0)
/* 0046BB58 564C0004 */  bnel  $s2, $t4, .L0046BB6C
/* 0046BB5C 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046BB60 10000002 */  b     .L0046BB6C
/* 0046BB64 24030001 */   li    $v1, 1
/* 0046BB68 8E10001C */  lw    $s0, 0x1c($s0)
.L0046BB6C:
/* 0046BB6C 14600003 */  bnez  $v1, .L0046BB7C
/* 0046BB70 00000000 */   nop   
/* 0046BB74 5600FFEA */  bnezl $s0, .L0046BB20
/* 0046BB78 92180000 */   lbu   $t8, ($s0)
.L0046BB7C:
/* 0046BB7C 14600021 */  bnez  $v1, .L0046BC04
/* 0046BB80 00000000 */   nop   
/* 0046BB84 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0046BB88 0320F809 */  jalr  $t9
/* 0046BB8C 00000000 */   nop   
/* 0046BB90 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BB94 24050004 */  li    $a1, 4
/* 0046BB98 A0450000 */  sb    $a1, ($v0)
/* 0046BB9C A0530020 */  sb    $s3, 0x20($v0)
/* 0046BBA0 922D0001 */  lbu   $t5, 1($s1)
/* 0046BBA4 24190001 */  li    $t9, 1
/* 0046BBA8 00408025 */  move  $s0, $v0
/* 0046BBAC A04D0001 */  sb    $t5, 1($v0)
/* 0046BBB0 922E0023 */  lbu   $t6, 0x23($s1)
/* 0046BBB4 A04E0023 */  sb    $t6, 0x23($v0)
/* 0046BBB8 8E2F0024 */  lw    $t7, 0x24($s1)
/* 0046BBBC AC520028 */  sw    $s2, 0x28($v0)
/* 0046BBC0 AC4F0024 */  sw    $t7, 0x24($v0)
/* 0046BBC4 8FB80058 */  lw    $t8, 0x58($sp)
/* 0046BBC8 A4590006 */  sh    $t9, 6($v0)
/* 0046BBCC A040003E */  sb    $zero, 0x3e($v0)
/* 0046BBD0 AC400030 */  sw    $zero, 0x30($v0)
/* 0046BBD4 A0400005 */  sb    $zero, 5($v0)
/* 0046BBD8 A0400004 */  sb    $zero, 4($v0)
/* 0046BBDC AC580010 */  sw    $t8, 0x10($v0)
/* 0046BBE0 8E280038 */  lw    $t0, 0x38($s1)
/* 0046BBE4 AC480038 */  sw    $t0, 0x38($v0)
/* 0046BBE8 8E29003C */  lw    $t1, 0x3c($s1)
/* 0046BBEC AC49003C */  sw    $t1, 0x3c($v0)
/* 0046BBF0 922A0022 */  lbu   $t2, 0x22($s1)
/* 0046BBF4 A04A0022 */  sb    $t2, 0x22($v0)
/* 0046BBF8 922B0021 */  lbu   $t3, 0x21($s1)
/* 0046BBFC 10000006 */  b     .L0046BC18
/* 0046BC00 A04B0021 */   sb    $t3, 0x21($v0)
.L0046BC04:
/* 0046BC04 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0046BC08 02002025 */  move  $a0, $s0
/* 0046BC0C 0320F809 */  jalr  $t9
/* 0046BC10 00000000 */   nop   
/* 0046BC14 8FBC0028 */  lw    $gp, 0x28($sp)
.L0046BC18:
/* 0046BC18 8FAC005C */  lw    $t4, 0x5c($sp)
/* 0046BC1C 55800004 */  bnezl $t4, .L0046BC30
/* 0046BC20 924D0000 */   lbu   $t5, ($s2)
/* 0046BC24 1000001C */  b     .L0046BC98
/* 0046BC28 8E470014 */   lw    $a3, 0x14($s2)
/* 0046BC2C 924D0000 */  lbu   $t5, ($s2)
.L0046BC30:
/* 0046BC30 24010002 */  li    $at, 2
/* 0046BC34 15A10008 */  bne   $t5, $at, .L0046BC58
/* 0046BC38 00000000 */   nop   
/* 0046BC3C 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 0046BC40 8FA40030 */  lw    $a0, 0x30($sp)
/* 0046BC44 0320F809 */  jalr  $t9
/* 0046BC48 00000000 */   nop   
/* 0046BC4C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BC50 1000000A */  b     .L0046BC7C
/* 0046BC54 3044FFFF */   andi  $a0, $v0, 0xffff
.L0046BC58:
/* 0046BC58 8F99833C */  lw    $t9, %call16(isldaihash)($gp)
/* 0046BC5C 8E44002C */  lw    $a0, 0x2c($s2)
/* 0046BC60 8E450030 */  lw    $a1, 0x30($s2)
/* 0046BC64 8FA60030 */  lw    $a2, 0x30($sp)
/* 0046BC68 AFA40000 */  sw    $a0, ($sp)
/* 0046BC6C 0320F809 */  jalr  $t9
/* 0046BC70 AFA50004 */   sw    $a1, 4($sp)
/* 0046BC74 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BC78 3044FFFF */  andi  $a0, $v0, 0xffff
.L0046BC7C:
/* 0046BC7C 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 0046BC80 02402825 */  move  $a1, $s2
/* 0046BC84 00003025 */  move  $a2, $zero
/* 0046BC88 0320F809 */  jalr  $t9
/* 0046BC8C 00003825 */   move  $a3, $zero
/* 0046BC90 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BC94 00403825 */  move  $a3, $v0
.L0046BC98:
/* 0046BC98 8E380014 */  lw    $t8, 0x14($s1)
/* 0046BC9C 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 0046BCA0 02602025 */  move  $a0, $s3
/* 0046BCA4 8F050014 */  lw    $a1, 0x14($t8)
/* 0046BCA8 AFA70034 */  sw    $a3, 0x34($sp)
/* 0046BCAC 0320F809 */  jalr  $t9
/* 0046BCB0 00E03025 */   move  $a2, $a3
/* 0046BCB4 8E390014 */  lw    $t9, 0x14($s1)
/* 0046BCB8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BCBC 8FA70034 */  lw    $a3, 0x34($sp)
/* 0046BCC0 8F260014 */  lw    $a2, 0x14($t9)
/* 0046BCC4 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 0046BCC8 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046BCCC 02002825 */  move  $a1, $s0
/* 0046BCD0 0320F809 */  jalr  $t9
/* 0046BCD4 00000000 */   nop   
/* 0046BCD8 92080021 */  lbu   $t0, 0x21($s0)
/* 0046BCDC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BCE0 00408825 */  move  $s1, $v0
/* 0046BCE4 51000008 */  beql  $t0, $zero, .L0046BD08
/* 0046BCE8 92090022 */   lbu   $t1, 0x22($s0)
/* 0046BCEC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046BCF0 8FA40058 */  lw    $a0, 0x58($sp)
/* 0046BCF4 94450002 */  lhu   $a1, 2($v0)
/* 0046BCF8 0320F809 */  jalr  $t9
/* 0046BCFC 24840104 */   addiu $a0, $a0, 0x104
/* 0046BD00 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BD04 92090022 */  lbu   $t1, 0x22($s0)
.L0046BD08:
/* 0046BD08 51200008 */  beql  $t1, $zero, .L0046BD2C
/* 0046BD0C 920A0021 */   lbu   $t2, 0x21($s0)
/* 0046BD10 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046BD14 8FA40058 */  lw    $a0, 0x58($sp)
/* 0046BD18 96250002 */  lhu   $a1, 2($s1)
/* 0046BD1C 0320F809 */  jalr  $t9
/* 0046BD20 24840114 */   addiu $a0, $a0, 0x114
/* 0046BD24 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BD28 920A0021 */  lbu   $t2, 0x21($s0)
.L0046BD2C:
/* 0046BD2C 11400004 */  beqz  $t2, .L0046BD40
/* 0046BD30 00000000 */   nop   
/* 0046BD34 920B0022 */  lbu   $t3, 0x22($s0)
/* 0046BD38 11600007 */  beqz  $t3, .L0046BD58
/* 0046BD3C 00000000 */   nop   
.L0046BD40:
/* 0046BD40 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046BD44 8FA40058 */  lw    $a0, 0x58($sp)
/* 0046BD48 96250002 */  lhu   $a1, 2($s1)
/* 0046BD4C 0320F809 */  jalr  $t9
/* 0046BD50 2484010C */   addiu $a0, $a0, 0x10c
/* 0046BD54 8FBC0028 */  lw    $gp, 0x28($sp)
.L0046BD58:
/* 0046BD58 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046BD5C 8FA40058 */  lw    $a0, 0x58($sp)
/* 0046BD60 96250002 */  lhu   $a1, 2($s1)
/* 0046BD64 0320F809 */  jalr  $t9
/* 0046BD68 2484012C */   addiu $a0, $a0, 0x12c
/* 0046BD6C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0046BD70 02001025 */  move  $v0, $s0
/* 0046BD74 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046BD78 8FB00018 */  lw    $s0, 0x18($sp)
/* 0046BD7C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0046BD80 8FB20020 */  lw    $s2, 0x20($sp)
/* 0046BD84 8FB30024 */  lw    $s3, 0x24($sp)
/* 0046BD88 03E00008 */  jr    $ra
/* 0046BD8C 27BD0050 */   addiu $sp, $sp, 0x50
    .type change_to_const_eq, @function
    .size change_to_const_eq, .-change_to_const_eq
    .end change_to_const_eq

glabel change_to_var_eq
    .ent change_to_var_eq
    # 004713E8 loopunroll
/* 0046BD90 3C1C0FBB */  .cpload $t9
/* 0046BD94 279CE500 */  
/* 0046BD98 0399E021 */  
/* 0046BD9C 27BDFF80 */  addiu $sp, $sp, -0x80
/* 0046BDA0 AFA40080 */  sw    $a0, 0x80($sp)
/* 0046BDA4 93AE0083 */  lbu   $t6, 0x83($sp)
/* 0046BDA8 AFB20028 */  sw    $s2, 0x28($sp)
/* 0046BDAC 00C09025 */  move  $s2, $a2
/* 0046BDB0 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0046BDB4 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0046BDB8 AFB3002C */  sw    $s3, 0x2c($sp)
/* 0046BDBC AFB10024 */  sw    $s1, 0x24($sp)
/* 0046BDC0 AFB00020 */  sw    $s0, 0x20($sp)
/* 0046BDC4 AFA50084 */  sw    $a1, 0x84($sp)
/* 0046BDC8 15C00004 */  bnez  $t6, .L0046BDDC
/* 0046BDCC AFA7008C */   sw    $a3, 0x8c($sp)
/* 0046BDD0 240F0023 */  li    $t7, 35
/* 0046BDD4 10000003 */  b     .L0046BDE4
/* 0046BDD8 A3AF0057 */   sb    $t7, 0x57($sp)
.L0046BDDC:
/* 0046BDDC 2418005F */  li    $t8, 95
/* 0046BDE0 A3B80057 */  sb    $t8, 0x57($sp)
.L0046BDE4:
/* 0046BDE4 93B90087 */  lbu   $t9, 0x87($sp)
/* 0046BDE8 53200004 */  beql  $t9, $zero, .L0046BDFC
/* 0046BDEC 8E530024 */   lw    $s3, 0x24($s2)
/* 0046BDF0 10000002 */  b     .L0046BDFC
/* 0046BDF4 8E530028 */   lw    $s3, 0x28($s2)
/* 0046BDF8 8E530024 */  lw    $s3, 0x24($s2)
.L0046BDFC:
/* 0046BDFC 966A0006 */  lhu   $t2, 6($s3)
/* 0046BE00 2401004E */  li    $at, 78
/* 0046BE04 254B0001 */  addiu $t3, $t2, 1
/* 0046BE08 A66B0006 */  sh    $t3, 6($s3)
/* 0046BE0C 92420020 */  lbu   $v0, 0x20($s2)
/* 0046BE10 93AC0083 */  lbu   $t4, 0x83($sp)
/* 0046BE14 54410003 */  bnel  $v0, $at, .L0046BE24
/* 0046BE18 24010028 */   li    $at, 40
/* 0046BE1C 15800004 */  bnez  $t4, .L0046BE30
/* 0046BE20 24010028 */   li    $at, 40
.L0046BE24:
/* 0046BE24 14410005 */  bne   $v0, $at, .L0046BE3C
/* 0046BE28 93AD0083 */   lbu   $t5, 0x83($sp)
/* 0046BE2C 15A00003 */  bnez  $t5, .L0046BE3C
.L0046BE30:
/* 0046BE30 02608825 */   move  $s1, $s3
/* 0046BE34 10000067 */  b     .L0046BFD4
/* 0046BE38 00001825 */   move  $v1, $zero
.L0046BE3C:
/* 0046BE3C 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0046BE40 8FA40090 */  lw    $a0, 0x90($sp)
/* 0046BE44 92650001 */  lbu   $a1, 1($s3)
/* 0046BE48 0320F809 */  jalr  $t9
/* 0046BE4C 8FA6008C */   lw    $a2, 0x8c($sp)
/* 0046BE50 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046BE54 AFA20078 */  sw    $v0, 0x78($sp)
/* 0046BE58 24040001 */  li    $a0, 1
/* 0046BE5C 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0046BE60 02602825 */  move  $a1, $s3
/* 0046BE64 00403025 */  move  $a2, $v0
/* 0046BE68 0320F809 */  jalr  $t9
/* 0046BE6C 00000000 */   nop   
/* 0046BE70 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046BE74 304EFFFF */  andi  $t6, $v0, 0xffff
/* 0046BE78 000E7880 */  sll   $t7, $t6, 2
/* 0046BE7C 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 0046BE80 8FA80078 */  lw    $t0, 0x78($sp)
/* 0046BE84 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046BE88 01F8C821 */  addu  $t9, $t7, $t8
/* 0046BE8C 8F310000 */  lw    $s1, ($t9)
/* 0046BE90 00001825 */  move  $v1, $zero
/* 0046BE94 24090001 */  li    $t1, 1
/* 0046BE98 12200020 */  beqz  $s1, .L0046BF1C
/* 0046BE9C 24070004 */   li    $a3, 4
/* 0046BEA0 922A0000 */  lbu   $t2, ($s1)
.L0046BEA4:
/* 0046BEA4 54EA0019 */  bnel  $a3, $t2, .L0046BF0C
/* 0046BEA8 8E31001C */   lw    $s1, 0x1c($s1)
/* 0046BEAC 922B0020 */  lbu   $t3, 0x20($s1)
/* 0046BEB0 552B0016 */  bnel  $t1, $t3, .L0046BF0C
/* 0046BEB4 8E31001C */   lw    $s1, 0x1c($s1)
/* 0046BEB8 926C0001 */  lbu   $t4, 1($s3)
/* 0046BEBC 922D0001 */  lbu   $t5, 1($s1)
/* 0046BEC0 558D0012 */  bnel  $t4, $t5, .L0046BF0C
/* 0046BEC4 8E31001C */   lw    $s1, 0x1c($s1)
/* 0046BEC8 8E220024 */  lw    $v0, 0x24($s1)
/* 0046BECC 16620004 */  bne   $s3, $v0, .L0046BEE0
/* 0046BED0 00000000 */   nop   
/* 0046BED4 8E2E0028 */  lw    $t6, 0x28($s1)
/* 0046BED8 510E0007 */  beql  $t0, $t6, .L0046BEF8
/* 0046BEDC 9238003E */   lbu   $t8, 0x3e($s1)
.L0046BEE0:
/* 0046BEE0 5502000A */  bnel  $t0, $v0, .L0046BF0C
/* 0046BEE4 8E31001C */   lw    $s1, 0x1c($s1)
/* 0046BEE8 8E2F0028 */  lw    $t7, 0x28($s1)
/* 0046BEEC 566F0007 */  bnel  $s3, $t7, .L0046BF0C
/* 0046BEF0 8E31001C */   lw    $s1, 0x1c($s1)
/* 0046BEF4 9238003E */  lbu   $t8, 0x3e($s1)
.L0046BEF8:
/* 0046BEF8 57000004 */  bnezl $t8, .L0046BF0C
/* 0046BEFC 8E31001C */   lw    $s1, 0x1c($s1)
/* 0046BF00 10000002 */  b     .L0046BF0C
/* 0046BF04 312300FF */   andi  $v1, $t1, 0xff
/* 0046BF08 8E31001C */  lw    $s1, 0x1c($s1)
.L0046BF0C:
/* 0046BF0C 54600004 */  bnezl $v1, .L0046BF20
/* 0046BF10 0003102B */   sltu  $v0, $zero, $v1
/* 0046BF14 5620FFE3 */  bnezl $s1, .L0046BEA4
/* 0046BF18 922A0000 */   lbu   $t2, ($s1)
.L0046BF1C:
/* 0046BF1C 0003102B */  sltu  $v0, $zero, $v1
.L0046BF20:
/* 0046BF20 14400025 */  bnez  $v0, .L0046BFB8
/* 0046BF24 00001825 */   move  $v1, $zero
/* 0046BF28 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0046BF2C A3A00067 */  sb    $zero, 0x67($sp)
/* 0046BF30 0320F809 */  jalr  $t9
/* 0046BF34 00000000 */   nop   
/* 0046BF38 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046BF3C 93A30067 */  lbu   $v1, 0x67($sp)
/* 0046BF40 24070004 */  li    $a3, 4
/* 0046BF44 8FA80078 */  lw    $t0, 0x78($sp)
/* 0046BF48 A0470000 */  sb    $a3, ($v0)
/* 0046BF4C 92790001 */  lbu   $t9, 1($s3)
/* 0046BF50 24090001 */  li    $t1, 1
/* 0046BF54 00408825 */  move  $s1, $v0
/* 0046BF58 A0590001 */  sb    $t9, 1($v0)
/* 0046BF5C 926A0000 */  lbu   $t2, ($s3)
/* 0046BF60 50EA0004 */  beql  $a3, $t2, .L0046BF74
/* 0046BF64 926C0023 */   lbu   $t4, 0x23($s3)
/* 0046BF68 10000003 */  b     .L0046BF78
/* 0046BF6C A0590023 */   sb    $t9, 0x23($v0)
/* 0046BF70 926C0023 */  lbu   $t4, 0x23($s3)
.L0046BF74:
/* 0046BF74 A04C0023 */  sb    $t4, 0x23($v0)
.L0046BF78:
/* 0046BF78 A0490020 */  sb    $t1, 0x20($v0)
/* 0046BF7C AC530024 */  sw    $s3, 0x24($v0)
/* 0046BF80 AC480028 */  sw    $t0, 0x28($v0)
/* 0046BF84 A4490006 */  sh    $t1, 6($v0)
/* 0046BF88 A040003E */  sb    $zero, 0x3e($v0)
/* 0046BF8C AC400030 */  sw    $zero, 0x30($v0)
/* 0046BF90 A0400005 */  sb    $zero, 5($v0)
/* 0046BF94 A0400004 */  sb    $zero, 4($v0)
/* 0046BF98 8FAD008C */  lw    $t5, 0x8c($sp)
/* 0046BF9C AC4D0010 */  sw    $t5, 0x10($v0)
/* 0046BFA0 926E0002 */  lbu   $t6, 2($s3)
/* 0046BFA4 2DCF0001 */  sltiu $t7, $t6, 1
/* 0046BFA8 A04F0022 */  sb    $t7, 0x22($v0)
/* 0046BFAC 92780003 */  lbu   $t8, 3($s3)
/* 0046BFB0 10000008 */  b     .L0046BFD4
/* 0046BFB4 A0580021 */   sb    $t8, 0x21($v0)
.L0046BFB8:
/* 0046BFB8 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0046BFBC 02202025 */  move  $a0, $s1
/* 0046BFC0 A3A30067 */  sb    $v1, 0x67($sp)
/* 0046BFC4 0320F809 */  jalr  $t9
/* 0046BFC8 00000000 */   nop   
/* 0046BFCC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046BFD0 93A30067 */  lbu   $v1, 0x67($sp)
.L0046BFD4:
/* 0046BFD4 93B90087 */  lbu   $t9, 0x87($sp)
/* 0046BFD8 53200032 */  beql  $t9, $zero, .L0046C0A4
/* 0046BFDC 8E420028 */   lw    $v0, 0x28($s2)
/* 0046BFE0 8E420024 */  lw    $v0, 0x24($s2)
/* 0046BFE4 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0046BFE8 93A40057 */  lbu   $a0, 0x57($sp)
/* 0046BFEC 944A0006 */  lhu   $t2, 6($v0)
/* 0046BFF0 02203025 */  move  $a2, $s1
/* 0046BFF4 A3A30067 */  sb    $v1, 0x67($sp)
/* 0046BFF8 254B0001 */  addiu $t3, $t2, 1
/* 0046BFFC A44B0006 */  sh    $t3, 6($v0)
/* 0046C000 0320F809 */  jalr  $t9
/* 0046C004 8E450024 */   lw    $a1, 0x24($s2)
/* 0046C008 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C00C 304CFFFF */  andi  $t4, $v0, 0xffff
/* 0046C010 000C6880 */  sll   $t5, $t4, 2
/* 0046C014 8F8E8DF8 */  lw     $t6, %got(table)($gp)
/* 0046C018 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046C01C 93A30067 */  lbu   $v1, 0x67($sp)
/* 0046C020 01AE7821 */  addu  $t7, $t5, $t6
/* 0046C024 8DF00000 */  lw    $s0, ($t7)
/* 0046C028 24070004 */  li    $a3, 4
/* 0046C02C 24090001 */  li    $t1, 1
/* 0046C030 12000019 */  beqz  $s0, .L0046C098
/* 0046C034 93A20057 */   lbu   $v0, 0x57($sp)
/* 0046C038 92180000 */  lbu   $t8, ($s0)
.L0046C03C:
/* 0046C03C 54F80012 */  bnel  $a3, $t8, .L0046C088
/* 0046C040 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C044 92190020 */  lbu   $t9, 0x20($s0)
/* 0046C048 5459000F */  bnel  $v0, $t9, .L0046C088
/* 0046C04C 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C050 924A0001 */  lbu   $t2, 1($s2)
/* 0046C054 920B0001 */  lbu   $t3, 1($s0)
/* 0046C058 554B000B */  bnel  $t2, $t3, .L0046C088
/* 0046C05C 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C060 8E0C0024 */  lw    $t4, 0x24($s0)
/* 0046C064 8E4D0024 */  lw    $t5, 0x24($s2)
/* 0046C068 558D0007 */  bnel  $t4, $t5, .L0046C088
/* 0046C06C 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C070 8E0E0028 */  lw    $t6, 0x28($s0)
/* 0046C074 562E0004 */  bnel  $s1, $t6, .L0046C088
/* 0046C078 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C07C 10000002 */  b     .L0046C088
/* 0046C080 312300FF */   andi  $v1, $t1, 0xff
/* 0046C084 8E10001C */  lw    $s0, 0x1c($s0)
.L0046C088:
/* 0046C088 14600003 */  bnez  $v1, .L0046C098
/* 0046C08C 00000000 */   nop   
/* 0046C090 5600FFEA */  bnezl $s0, .L0046C03C
/* 0046C094 92180000 */   lbu   $t8, ($s0)
.L0046C098:
/* 0046C098 10000030 */  b     .L0046C15C
/* 0046C09C 00000000 */   nop   
/* 0046C0A0 8E420028 */  lw    $v0, 0x28($s2)
.L0046C0A4:
/* 0046C0A4 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0046C0A8 93A40057 */  lbu   $a0, 0x57($sp)
/* 0046C0AC 944F0006 */  lhu   $t7, 6($v0)
/* 0046C0B0 02202825 */  move  $a1, $s1
/* 0046C0B4 A3A30067 */  sb    $v1, 0x67($sp)
/* 0046C0B8 25F80001 */  addiu $t8, $t7, 1
/* 0046C0BC A4580006 */  sh    $t8, 6($v0)
/* 0046C0C0 0320F809 */  jalr  $t9
/* 0046C0C4 8E460028 */   lw    $a2, 0x28($s2)
/* 0046C0C8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C0CC 3059FFFF */  andi  $t9, $v0, 0xffff
/* 0046C0D0 00195080 */  sll   $t2, $t9, 2
/* 0046C0D4 8F8B8DF8 */  lw     $t3, %got(table)($gp)
/* 0046C0D8 93A30067 */  lbu   $v1, 0x67($sp)
/* 0046C0DC 24070004 */  li    $a3, 4
/* 0046C0E0 014B6021 */  addu  $t4, $t2, $t3
/* 0046C0E4 8D900000 */  lw    $s0, ($t4)
/* 0046C0E8 24090001 */  li    $t1, 1
/* 0046C0EC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046C0F0 1200001A */  beqz  $s0, .L0046C15C
/* 0046C0F4 00000000 */   nop   
/* 0046C0F8 93A20057 */  lbu   $v0, 0x57($sp)
/* 0046C0FC 920D0000 */  lbu   $t5, ($s0)
.L0046C100:
/* 0046C100 54ED0012 */  bnel  $a3, $t5, .L0046C14C
/* 0046C104 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C108 920E0020 */  lbu   $t6, 0x20($s0)
/* 0046C10C 544E000F */  bnel  $v0, $t6, .L0046C14C
/* 0046C110 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C114 924F0001 */  lbu   $t7, 1($s2)
/* 0046C118 92180001 */  lbu   $t8, 1($s0)
/* 0046C11C 55F8000B */  bnel  $t7, $t8, .L0046C14C
/* 0046C120 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C124 8E190024 */  lw    $t9, 0x24($s0)
/* 0046C128 56390008 */  bnel  $s1, $t9, .L0046C14C
/* 0046C12C 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C130 8E0A0028 */  lw    $t2, 0x28($s0)
/* 0046C134 8E4B0028 */  lw    $t3, 0x28($s2)
/* 0046C138 554B0004 */  bnel  $t2, $t3, .L0046C14C
/* 0046C13C 8E10001C */   lw    $s0, 0x1c($s0)
/* 0046C140 10000002 */  b     .L0046C14C
/* 0046C144 312300FF */   andi  $v1, $t1, 0xff
/* 0046C148 8E10001C */  lw    $s0, 0x1c($s0)
.L0046C14C:
/* 0046C14C 14600003 */  bnez  $v1, .L0046C15C
/* 0046C150 00000000 */   nop   
/* 0046C154 5600FFEA */  bnezl $s0, .L0046C100
/* 0046C158 920D0000 */   lbu   $t5, ($s0)
.L0046C15C:
/* 0046C15C 14600084 */  bnez  $v1, .L0046C370
/* 0046C160 00000000 */   nop   
/* 0046C164 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0046C168 0320F809 */  jalr  $t9
/* 0046C16C 00000000 */   nop   
/* 0046C170 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C174 24070004 */  li    $a3, 4
/* 0046C178 AFA20048 */  sw    $v0, 0x48($sp)
/* 0046C17C A0470000 */  sb    $a3, ($v0)
/* 0046C180 93AC0057 */  lbu   $t4, 0x57($sp)
/* 0046C184 24090001 */  li    $t1, 1
/* 0046C188 00408025 */  move  $s0, $v0
/* 0046C18C A04C0020 */  sb    $t4, 0x20($v0)
/* 0046C190 924D0001 */  lbu   $t5, 1($s2)
/* 0046C194 A04D0001 */  sb    $t5, 1($v0)
/* 0046C198 924E0023 */  lbu   $t6, 0x23($s2)
/* 0046C19C A04E0023 */  sb    $t6, 0x23($v0)
/* 0046C1A0 93AF0087 */  lbu   $t7, 0x87($sp)
/* 0046C1A4 51E00006 */  beql  $t7, $zero, .L0046C1C0
/* 0046C1A8 AC510024 */   sw    $s1, 0x24($v0)
/* 0046C1AC 8E580024 */  lw    $t8, 0x24($s2)
/* 0046C1B0 AC510028 */  sw    $s1, 0x28($v0)
/* 0046C1B4 10000004 */  b     .L0046C1C8
/* 0046C1B8 AC580024 */   sw    $t8, 0x24($v0)
/* 0046C1BC AC510024 */  sw    $s1, 0x24($v0)
.L0046C1C0:
/* 0046C1C0 8E590028 */  lw    $t9, 0x28($s2)
/* 0046C1C4 AC590028 */  sw    $t9, 0x28($v0)
.L0046C1C8:
/* 0046C1C8 8FAA008C */  lw    $t2, 0x8c($sp)
/* 0046C1CC A040003E */  sb    $zero, 0x3e($v0)
/* 0046C1D0 A4490006 */  sh    $t1, 6($v0)
/* 0046C1D4 AC400030 */  sw    $zero, 0x30($v0)
/* 0046C1D8 A0400005 */  sb    $zero, 5($v0)
/* 0046C1DC A0400004 */  sb    $zero, 4($v0)
/* 0046C1E0 AC400038 */  sw    $zero, 0x38($v0)
/* 0046C1E4 AC40003C */  sw    $zero, 0x3c($v0)
/* 0046C1E8 AC4A0010 */  sw    $t2, 0x10($v0)
/* 0046C1EC 8E4B0038 */  lw    $t3, 0x38($s2)
/* 0046C1F0 8FA5008C */  lw    $a1, 0x8c($sp)
/* 0046C1F4 8D630000 */  lw    $v1, ($t3)
/* 0046C1F8 5060002A */  beql  $v1, $zero, .L0046C2A4
/* 0046C1FC 8E4C003C */   lw    $t4, 0x3c($s2)
/* 0046C200 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046C204 24A50104 */  addiu $a1, $a1, 0x104
/* 0046C208 AFA50040 */  sw    $a1, 0x40($sp)
/* 0046C20C 0320F809 */  jalr  $t9
/* 0046C210 94640002 */   lhu   $a0, 2($v1)
/* 0046C214 8E4C0038 */  lw    $t4, 0x38($s2)
/* 0046C218 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C21C A3A20056 */  sb    $v0, 0x56($sp)
/* 0046C220 8FA5008C */  lw    $a1, 0x8c($sp)
/* 0046C224 8D8D0000 */  lw    $t5, ($t4)
/* 0046C228 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046C22C 24A50114 */  addiu $a1, $a1, 0x114
/* 0046C230 95A40002 */  lhu   $a0, 2($t5)
/* 0046C234 0320F809 */  jalr  $t9
/* 0046C238 AFA50044 */   sw    $a1, 0x44($sp)
/* 0046C23C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C240 8E4E0038 */  lw    $t6, 0x38($s2)
/* 0046C244 A3A20055 */  sb    $v0, 0x55($sp)
/* 0046C248 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046C24C 8FA4008C */  lw    $a0, 0x8c($sp)
/* 0046C250 8DCF0000 */  lw    $t7, ($t6)
/* 0046C254 2484012C */  addiu $a0, $a0, 0x12c
/* 0046C258 0320F809 */  jalr  $t9
/* 0046C25C 95E50002 */   lhu   $a1, 2($t7)
/* 0046C260 8E580038 */  lw    $t8, 0x38($s2)
/* 0046C264 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C268 8FA40040 */  lw    $a0, 0x40($sp)
/* 0046C26C 8F190000 */  lw    $t9, ($t8)
/* 0046C270 97250002 */  lhu   $a1, 2($t9)
/* 0046C274 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046C278 0320F809 */  jalr  $t9
/* 0046C27C 00000000 */   nop   
/* 0046C280 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C284 8E4A0038 */  lw    $t2, 0x38($s2)
/* 0046C288 8FA40044 */  lw    $a0, 0x44($sp)
/* 0046C28C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046C290 8D4B0000 */  lw    $t3, ($t2)
/* 0046C294 0320F809 */  jalr  $t9
/* 0046C298 95650002 */   lhu   $a1, 2($t3)
/* 0046C29C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C2A0 8E4C003C */  lw    $t4, 0x3c($s2)
.L0046C2A4:
/* 0046C2A4 8FAD008C */  lw    $t5, 0x8c($sp)
/* 0046C2A8 8D820000 */  lw    $v0, ($t4)
/* 0046C2AC 25AE012C */  addiu $t6, $t5, 0x12c
/* 0046C2B0 AFAE003C */  sw    $t6, 0x3c($sp)
/* 0046C2B4 10400027 */  beqz  $v0, .L0046C354
/* 0046C2B8 25A50104 */   addiu $a1, $t5, 0x104
/* 0046C2BC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046C2C0 25AF0114 */  addiu $t7, $t5, 0x114
/* 0046C2C4 AFAF0044 */  sw    $t7, 0x44($sp)
/* 0046C2C8 94440002 */  lhu   $a0, 2($v0)
/* 0046C2CC 0320F809 */  jalr  $t9
/* 0046C2D0 AFA50040 */   sw    $a1, 0x40($sp)
/* 0046C2D4 8E58003C */  lw    $t8, 0x3c($s2)
/* 0046C2D8 A3A20054 */  sb    $v0, 0x54($sp)
/* 0046C2DC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C2E0 8F190000 */  lw    $t9, ($t8)
/* 0046C2E4 8FA50044 */  lw    $a1, 0x44($sp)
/* 0046C2E8 97240002 */  lhu   $a0, 2($t9)
/* 0046C2EC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046C2F0 0320F809 */  jalr  $t9
/* 0046C2F4 00000000 */   nop   
/* 0046C2F8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C2FC 8E4A003C */  lw    $t2, 0x3c($s2)
/* 0046C300 A3A20053 */  sb    $v0, 0x53($sp)
/* 0046C304 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046C308 8D4B0000 */  lw    $t3, ($t2)
/* 0046C30C 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0046C310 0320F809 */  jalr  $t9
/* 0046C314 95650002 */   lhu   $a1, 2($t3)
/* 0046C318 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C31C 8E4C003C */  lw    $t4, 0x3c($s2)
/* 0046C320 8FA40040 */  lw    $a0, 0x40($sp)
/* 0046C324 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046C328 8D8E0000 */  lw    $t6, ($t4)
/* 0046C32C 0320F809 */  jalr  $t9
/* 0046C330 95C50002 */   lhu   $a1, 2($t6)
/* 0046C334 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C338 8E4D003C */  lw    $t5, 0x3c($s2)
/* 0046C33C 8FA40044 */  lw    $a0, 0x44($sp)
/* 0046C340 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046C344 8DAF0000 */  lw    $t7, ($t5)
/* 0046C348 0320F809 */  jalr  $t9
/* 0046C34C 95E50002 */   lhu   $a1, 2($t7)
/* 0046C350 8FBC0030 */  lw    $gp, 0x30($sp)
.L0046C354:
/* 0046C354 92580022 */  lbu   $t8, 0x22($s2)
/* 0046C358 8FB90048 */  lw    $t9, 0x48($sp)
/* 0046C35C A3380022 */  sb    $t8, 0x22($t9)
/* 0046C360 8FAB0048 */  lw    $t3, 0x48($sp)
/* 0046C364 924A0021 */  lbu   $t2, 0x21($s2)
/* 0046C368 10000009 */  b     .L0046C390
/* 0046C36C A16A0021 */   sb    $t2, 0x21($t3)
.L0046C370:
/* 0046C370 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0046C374 02002025 */  move  $a0, $s0
/* 0046C378 0320F809 */  jalr  $t9
/* 0046C37C 00000000 */   nop   
/* 0046C380 8FAC008C */  lw    $t4, 0x8c($sp)
/* 0046C384 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C388 258E012C */  addiu $t6, $t4, 0x12c
/* 0046C38C AFAE003C */  sw    $t6, 0x3c($sp)
.L0046C390:
/* 0046C390 92420020 */  lbu   $v0, 0x20($s2)
/* 0046C394 2401004E */  li    $at, 78
/* 0046C398 93AD0083 */  lbu   $t5, 0x83($sp)
/* 0046C39C 54410003 */  bnel  $v0, $at, .L0046C3AC
/* 0046C3A0 24010028 */   li    $at, 40
/* 0046C3A4 15A00005 */  bnez  $t5, .L0046C3BC
/* 0046C3A8 24010028 */   li    $at, 40
.L0046C3AC:
/* 0046C3AC 14410005 */  bne   $v0, $at, .L0046C3C4
/* 0046C3B0 93AF0083 */   lbu   $t7, 0x83($sp)
/* 0046C3B4 15E00003 */  bnez  $t7, .L0046C3C4
/* 0046C3B8 00000000 */   nop   
.L0046C3BC:
/* 0046C3BC 10000043 */  b     .L0046C4CC
/* 0046C3C0 8E330014 */   lw    $s3, 0x14($s1)
.L0046C3C4:
/* 0046C3C4 8F998330 */  lw    $t9, %call16(isconstihash)($gp)
/* 0046C3C8 8FA40090 */  lw    $a0, 0x90($sp)
/* 0046C3CC 0320F809 */  jalr  $t9
/* 0046C3D0 00000000 */   nop   
/* 0046C3D4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C3D8 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046C3DC 8FA50078 */  lw    $a1, 0x78($sp)
/* 0046C3E0 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 0046C3E4 00003025 */  move  $a2, $zero
/* 0046C3E8 00003825 */  move  $a3, $zero
/* 0046C3EC 0320F809 */  jalr  $t9
/* 0046C3F0 00000000 */   nop   
/* 0046C3F4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C3F8 AFA20058 */  sw    $v0, 0x58($sp)
/* 0046C3FC 24040001 */  li    $a0, 1
/* 0046C400 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 0046C404 8E650014 */  lw    $a1, 0x14($s3)
/* 0046C408 00403025 */  move  $a2, $v0
/* 0046C40C 0320F809 */  jalr  $t9
/* 0046C410 00000000 */   nop   
/* 0046C414 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C418 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046C41C 02202825 */  move  $a1, $s1
/* 0046C420 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 0046C424 8E660014 */  lw    $a2, 0x14($s3)
/* 0046C428 8FA70058 */  lw    $a3, 0x58($sp)
/* 0046C42C 0320F809 */  jalr  $t9
/* 0046C430 00000000 */   nop   
/* 0046C434 92380021 */  lbu   $t8, 0x21($s1)
/* 0046C438 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C43C 00409825 */  move  $s3, $v0
/* 0046C440 53000008 */  beql  $t8, $zero, .L0046C464
/* 0046C444 92390022 */   lbu   $t9, 0x22($s1)
/* 0046C448 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046C44C 8FA4008C */  lw    $a0, 0x8c($sp)
/* 0046C450 94450002 */  lhu   $a1, 2($v0)
/* 0046C454 0320F809 */  jalr  $t9
/* 0046C458 24840104 */   addiu $a0, $a0, 0x104
/* 0046C45C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C460 92390022 */  lbu   $t9, 0x22($s1)
.L0046C464:
/* 0046C464 53200008 */  beql  $t9, $zero, .L0046C488
/* 0046C468 922A0021 */   lbu   $t2, 0x21($s1)
/* 0046C46C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046C470 8FA4008C */  lw    $a0, 0x8c($sp)
/* 0046C474 96650002 */  lhu   $a1, 2($s3)
/* 0046C478 0320F809 */  jalr  $t9
/* 0046C47C 24840114 */   addiu $a0, $a0, 0x114
/* 0046C480 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C484 922A0021 */  lbu   $t2, 0x21($s1)
.L0046C488:
/* 0046C488 11400004 */  beqz  $t2, .L0046C49C
/* 0046C48C 00000000 */   nop   
/* 0046C490 922B0022 */  lbu   $t3, 0x22($s1)
/* 0046C494 11600007 */  beqz  $t3, .L0046C4B4
/* 0046C498 00000000 */   nop   
.L0046C49C:
/* 0046C49C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046C4A0 8FA4008C */  lw    $a0, 0x8c($sp)
/* 0046C4A4 96650002 */  lhu   $a1, 2($s3)
/* 0046C4A8 0320F809 */  jalr  $t9
/* 0046C4AC 2484010C */   addiu $a0, $a0, 0x10c
/* 0046C4B0 8FBC0030 */  lw    $gp, 0x30($sp)
.L0046C4B4:
/* 0046C4B4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046C4B8 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0046C4BC 96650002 */  lhu   $a1, 2($s3)
/* 0046C4C0 0320F809 */  jalr  $t9
/* 0046C4C4 00000000 */   nop   
/* 0046C4C8 8FBC0030 */  lw    $gp, 0x30($sp)
.L0046C4CC:
/* 0046C4CC 93AC0087 */  lbu   $t4, 0x87($sp)
/* 0046C4D0 02603025 */  move  $a2, $s3
/* 0046C4D4 93A40057 */  lbu   $a0, 0x57($sp)
/* 0046C4D8 11800011 */  beqz  $t4, .L0046C520
/* 0046C4DC 00000000 */   nop   
/* 0046C4E0 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 0046C4E4 8E4E0014 */  lw    $t6, 0x14($s2)
/* 0046C4E8 93A40057 */  lbu   $a0, 0x57($sp)
/* 0046C4EC 0320F809 */  jalr  $t9
/* 0046C4F0 8DC50014 */   lw    $a1, 0x14($t6)
/* 0046C4F4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C4F8 8E4D0014 */  lw    $t5, 0x14($s2)
/* 0046C4FC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046C500 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 0046C504 02002825 */  move  $a1, $s0
/* 0046C508 02603825 */  move  $a3, $s3
/* 0046C50C 0320F809 */  jalr  $t9
/* 0046C510 8DA60014 */   lw    $a2, 0x14($t5)
/* 0046C514 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C518 10000010 */  b     .L0046C55C
/* 0046C51C 00408825 */   move  $s1, $v0
.L0046C520:
/* 0046C520 8F998340 */  lw    $t9, %call16(isopihash)($gp)
/* 0046C524 8E4F0014 */  lw    $t7, 0x14($s2)
/* 0046C528 02602825 */  move  $a1, $s3
/* 0046C52C 0320F809 */  jalr  $t9
/* 0046C530 8DE60018 */   lw    $a2, 0x18($t7)
/* 0046C534 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C538 8E580014 */  lw    $t8, 0x14($s2)
/* 0046C53C 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046C540 8F99834C */  lw    $t9, %call16(isearchloop)($gp)
/* 0046C544 02002825 */  move  $a1, $s0
/* 0046C548 02603025 */  move  $a2, $s3
/* 0046C54C 0320F809 */  jalr  $t9
/* 0046C550 8F070018 */   lw    $a3, 0x18($t8)
/* 0046C554 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C558 00408825 */  move  $s1, $v0
.L0046C55C:
/* 0046C55C 92190021 */  lbu   $t9, 0x21($s0)
/* 0046C560 53200008 */  beql  $t9, $zero, .L0046C584
/* 0046C564 920A0022 */   lbu   $t2, 0x22($s0)
/* 0046C568 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046C56C 8FA4008C */  lw    $a0, 0x8c($sp)
/* 0046C570 96250002 */  lhu   $a1, 2($s1)
/* 0046C574 0320F809 */  jalr  $t9
/* 0046C578 24840104 */   addiu $a0, $a0, 0x104
/* 0046C57C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C580 920A0022 */  lbu   $t2, 0x22($s0)
.L0046C584:
/* 0046C584 51400008 */  beql  $t2, $zero, .L0046C5A8
/* 0046C588 920B0021 */   lbu   $t3, 0x21($s0)
/* 0046C58C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046C590 8FA4008C */  lw    $a0, 0x8c($sp)
/* 0046C594 96250002 */  lhu   $a1, 2($s1)
/* 0046C598 0320F809 */  jalr  $t9
/* 0046C59C 24840114 */   addiu $a0, $a0, 0x114
/* 0046C5A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C5A4 920B0021 */  lbu   $t3, 0x21($s0)
.L0046C5A8:
/* 0046C5A8 11600004 */  beqz  $t3, .L0046C5BC
/* 0046C5AC 00000000 */   nop   
/* 0046C5B0 920C0022 */  lbu   $t4, 0x22($s0)
/* 0046C5B4 11800007 */  beqz  $t4, .L0046C5D4
/* 0046C5B8 00000000 */   nop   
.L0046C5BC:
/* 0046C5BC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046C5C0 8FA4008C */  lw    $a0, 0x8c($sp)
/* 0046C5C4 96250002 */  lhu   $a1, 2($s1)
/* 0046C5C8 0320F809 */  jalr  $t9
/* 0046C5CC 2484010C */   addiu $a0, $a0, 0x10c
/* 0046C5D0 8FBC0030 */  lw    $gp, 0x30($sp)
.L0046C5D4:
/* 0046C5D4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046C5D8 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0046C5DC 96250002 */  lhu   $a1, 2($s1)
/* 0046C5E0 0320F809 */  jalr  $t9
/* 0046C5E4 00000000 */   nop   
/* 0046C5E8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C5EC 240E0001 */  li    $t6, 1
/* 0046C5F0 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0046C5F4 8F998350 */  lw    $t9, %call16(trep_image)($gp)
/* 0046C5F8 02002025 */  move  $a0, $s0
/* 0046C5FC 24050001 */  li    $a1, 1
/* 0046C600 93A60056 */  lbu   $a2, 0x56($sp)
/* 0046C604 0320F809 */  jalr  $t9
/* 0046C608 93A70055 */   lbu   $a3, 0x55($sp)
/* 0046C60C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C610 240D0001 */  li    $t5, 1
/* 0046C614 AFAD0010 */  sw    $t5, 0x10($sp)
/* 0046C618 8F998350 */  lw    $t9, %call16(trep_image)($gp)
/* 0046C61C 02002025 */  move  $a0, $s0
/* 0046C620 00002825 */  move  $a1, $zero
/* 0046C624 93A60054 */  lbu   $a2, 0x54($sp)
/* 0046C628 0320F809 */  jalr  $t9
/* 0046C62C 93A70053 */   lbu   $a3, 0x53($sp)
/* 0046C630 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0046C634 02001025 */  move  $v0, $s0
/* 0046C638 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046C63C 8FB00020 */  lw    $s0, 0x20($sp)
/* 0046C640 8FB10024 */  lw    $s1, 0x24($sp)
/* 0046C644 8FB20028 */  lw    $s2, 0x28($sp)
/* 0046C648 8FB3002C */  lw    $s3, 0x2c($sp)
/* 0046C64C 03E00008 */  jr    $ra
/* 0046C650 27BD0080 */   addiu $sp, $sp, 0x80
    .type change_to_var_eq, @function
    .size change_to_var_eq, .-change_to_var_eq
    .end change_to_var_eq

glabel del_orig_cond
    .ent del_orig_cond
    # 004713E8 loopunroll
/* 0046C654 3C1C0FBB */  .cpload $t9
/* 0046C658 279CDC3C */  
/* 0046C65C 0399E021 */  
/* 0046C660 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0046C664 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0046C668 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0046C66C AFB00014 */  sw    $s0, 0x14($sp)
/* 0046C670 AFA50024 */  sw    $a1, 0x24($sp)
/* 0046C674 948E0006 */  lhu   $t6, 6($a0)
/* 0046C678 24010001 */  li    $at, 1
/* 0046C67C 00808025 */  move  $s0, $a0
/* 0046C680 15C1001A */  bne   $t6, $at, .L0046C6EC
/* 0046C684 00000000 */   nop   
/* 0046C688 908F0021 */  lbu   $t7, 0x21($a0)
/* 0046C68C 51E00008 */  beql  $t7, $zero, .L0046C6B0
/* 0046C690 92190022 */   lbu   $t9, 0x22($s0)
/* 0046C694 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046C698 8E180014 */  lw    $t8, 0x14($s0)
/* 0046C69C 24A40104 */  addiu $a0, $a1, 0x104
/* 0046C6A0 0320F809 */  jalr  $t9
/* 0046C6A4 97050002 */   lhu   $a1, 2($t8)
/* 0046C6A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046C6AC 92190022 */  lbu   $t9, 0x22($s0)
.L0046C6B0:
/* 0046C6B0 8FA40024 */  lw    $a0, 0x24($sp)
/* 0046C6B4 13200007 */  beqz  $t9, .L0046C6D4
/* 0046C6B8 00000000 */   nop   
/* 0046C6BC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046C6C0 8E080014 */  lw    $t0, 0x14($s0)
/* 0046C6C4 24840114 */  addiu $a0, $a0, 0x114
/* 0046C6C8 0320F809 */  jalr  $t9
/* 0046C6CC 95050002 */   lhu   $a1, 2($t0)
/* 0046C6D0 8FBC0018 */  lw    $gp, 0x18($sp)
.L0046C6D4:
/* 0046C6D4 8F998218 */  lw    $t9, %call16(checkexpoccur)($gp)
/* 0046C6D8 8E040014 */  lw    $a0, 0x14($s0)
/* 0046C6DC 8FA50024 */  lw    $a1, 0x24($sp)
/* 0046C6E0 0320F809 */  jalr  $t9
/* 0046C6E4 00000000 */   nop   
/* 0046C6E8 8FBC0018 */  lw    $gp, 0x18($sp)
.L0046C6EC:
/* 0046C6EC 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046C6F0 02002025 */  move  $a0, $s0
/* 0046C6F4 0320F809 */  jalr  $t9
/* 0046C6F8 00000000 */   nop   
/* 0046C6FC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0046C700 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046C704 8FB00014 */  lw    $s0, 0x14($sp)
/* 0046C708 03E00008 */  jr    $ra
/* 0046C70C 27BD0020 */   addiu $sp, $sp, 0x20
    .type del_orig_cond, @function
    .size del_orig_cond, .-del_orig_cond
    .end del_orig_cond

glabel unroll_searchloop
    .ent unroll_searchloop
    # 0046D428 oneloopblockexpr
    # 0046E77C oneloopblockstmt
/* 0046C710 3C1C0FBB */  .cpload $t9
/* 0046C714 279CDB80 */  
/* 0046C718 0399E021 */  
/* 0046C71C 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0046C720 AFA40038 */  sw    $a0, 0x38($sp)
/* 0046C724 97AE003A */  lhu   $t6, 0x3a($sp)
/* 0046C728 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 0046C72C AFBF002C */  sw    $ra, 0x2c($sp)
/* 0046C730 000E7880 */  sll   $t7, $t6, 2
/* 0046C734 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0046C738 AFB30024 */  sw    $s3, 0x24($sp)
/* 0046C73C AFB20020 */  sw    $s2, 0x20($sp)
/* 0046C740 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046C744 AFB00018 */  sw    $s0, 0x18($sp)
/* 0046C748 01F8C821 */  addu  $t9, $t7, $t8
/* 0046C74C 8F300000 */  lw    $s0, ($t9)
/* 0046C750 A3A00031 */  sb    $zero, 0x31($sp)
/* 0046C754 A3A00030 */  sb    $zero, 0x30($sp)
/* 0046C758 90AA0001 */  lbu   $t2, 1($a1)
/* 0046C75C 2401000E */  li    $at, 14
/* 0046C760 00A08825 */  move  $s1, $a1
/* 0046C764 00C09025 */  move  $s2, $a2
/* 0046C768 00E09825 */  move  $s3, $a3
/* 0046C76C 00004025 */  move  $t0, $zero
/* 0046C770 15410015 */  bne   $t2, $at, .L0046C7C8
/* 0046C774 00004825 */   move  $t1, $zero
/* 0046C778 90A40000 */  lbu   $a0, ($a1)
/* 0046C77C 24010002 */  li    $at, 2
/* 0046C780 10810011 */  beq   $a0, $at, .L0046C7C8
/* 0046C784 2C8B0020 */   sltiu $t3, $a0, 0x20
/* 0046C788 000B6023 */  negu  $t4, $t3
/* 0046C78C 3C011200 */  lui   $at, 0x1200
/* 0046C790 01816824 */  and   $t5, $t4, $at
/* 0046C794 008D7004 */  sllv  $t6, $t5, $a0
/* 0046C798 05C00003 */  bltz  $t6, .L0046C7A8
/* 0046C79C 00000000 */   nop   
/* 0046C7A0 10000009 */  b     .L0046C7C8
/* 0046C7A4 00008025 */   move  $s0, $zero
.L0046C7A8:
/* 0046C7A8 8F8F8B34 */  lw     $t7, %got(int_reg_size)($gp)
/* 0046C7AC 92380020 */  lbu   $t8, 0x20($s1)
/* 0046C7B0 8DEF0000 */  lw    $t7, ($t7)
/* 0046C7B4 01F8082A */  slt   $at, $t7, $t8
/* 0046C7B8 50200004 */  beql  $at, $zero, .L0046C7CC
/* 0046C7BC 93AA0030 */   lbu   $t2, 0x30($sp)
/* 0046C7C0 24190001 */  li    $t9, 1
/* 0046C7C4 A3B90030 */  sb    $t9, 0x30($sp)
.L0046C7C8:
/* 0046C7C8 93AA0030 */  lbu   $t2, 0x30($sp)
.L0046C7CC:
/* 0046C7CC 154001E6 */  bnez  $t2, .L0046CF68
/* 0046C7D0 00000000 */   nop   
/* 0046C7D4 120001E4 */  beqz  $s0, .L0046CF68
/* 0046C7D8 00000000 */   nop   
/* 0046C7DC 92030000 */  lbu   $v1, ($s0)
.L0046C7E0:
/* 0046C7E0 3C010C00 */  lui   $at, 0xc00
/* 0046C7E4 2C6B0020 */  sltiu $t3, $v1, 0x20
/* 0046C7E8 000B6023 */  negu  $t4, $t3
/* 0046C7EC 01816824 */  and   $t5, $t4, $at
/* 0046C7F0 006D7004 */  sllv  $t6, $t5, $v1
/* 0046C7F4 05C30007 */  bgezl $t6, .L0046C814
/* 0046C7F8 92240000 */   lbu   $a0, ($s1)
/* 0046C7FC 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 0046C800 8E180010 */  lw    $t8, 0x10($s0)
/* 0046C804 8DEF0000 */  lw    $t7, ($t7)
/* 0046C808 15F801CE */  bne   $t7, $t8, .L0046CF44
/* 0046C80C 00000000 */   nop   
/* 0046C810 92240000 */  lbu   $a0, ($s1)
.L0046C814:
/* 0046C814 24050186 */  li    $a1, 390
/* 0046C818 2407000A */  li    $a3, 10
/* 0046C81C 2499FFFD */  addiu $t9, $a0, -3
/* 0046C820 2F210004 */  sltiu $at, $t9, 4
/* 0046C824 102001BD */  beqz  $at, .L0046CF1C
/* 0046C828 00000000 */   nop   
/* 0046C82C 8F818044 */  lw    $at, %got(jtbl_1000D8AC)($gp)
/* 0046C830 0019C880 */  sll   $t9, $t9, 2
/* 0046C834 00390821 */  addu  $at, $at, $t9
/* 0046C838 8C39D8AC */  lw    $t9, %lo(jtbl_1000D8AC)($at)
/* 0046C83C 033CC821 */  addu  $t9, $t9, $gp
/* 0046C840 03200008 */  jr    $t9
/* 0046C844 00000000 */   nop   
.L0046C848:
/* 0046C848 24010005 */  li    $at, 5
/* 0046C84C 146101BD */  bne   $v1, $at, .L0046CF44
/* 0046C850 00000000 */   nop   
/* 0046C854 8E2A0020 */  lw    $t2, 0x20($s1)
/* 0046C858 8E0B0020 */  lw    $t3, 0x20($s0)
/* 0046C85C 154B01B9 */  bne   $t2, $t3, .L0046CF44
/* 0046C860 00000000 */   nop   
/* 0046C864 8E2C0024 */  lw    $t4, 0x24($s1)
/* 0046C868 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0046C86C 158D01B5 */  bne   $t4, $t5, .L0046CF44
/* 0046C870 00000000 */   nop   
/* 0046C874 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0046C878 8E04002C */  lw    $a0, 0x2c($s0)
/* 0046C87C 8E050030 */  lw    $a1, 0x30($s0)
/* 0046C880 8E26002C */  lw    $a2, 0x2c($s1)
/* 0046C884 8E270030 */  lw    $a3, 0x30($s1)
/* 0046C888 A3A80033 */  sb    $t0, 0x33($sp)
/* 0046C88C A3A90032 */  sb    $t1, 0x32($sp)
/* 0046C890 AFA40000 */  sw    $a0, ($sp)
/* 0046C894 AFA50004 */  sw    $a1, 4($sp)
/* 0046C898 AFA60008 */  sw    $a2, 8($sp)
/* 0046C89C 0320F809 */  jalr  $t9
/* 0046C8A0 AFA7000C */   sw    $a3, 0xc($sp)
/* 0046C8A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046C8A8 93A80033 */  lbu   $t0, 0x33($sp)
/* 0046C8AC 104001A5 */  beqz  $v0, .L0046CF44
/* 0046C8B0 93A90032 */   lbu   $t1, 0x32($sp)
/* 0046C8B4 100001A3 */  b     .L0046CF44
/* 0046C8B8 24080001 */   li    $t0, 1
.L0046C8BC:
/* 0046C8BC 148301A1 */  bne   $a0, $v1, .L0046CF44
/* 0046C8C0 00000000 */   nop   
/* 0046C8C4 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0046C8C8 8E040028 */  lw    $a0, 0x28($s0)
/* 0046C8CC 8E05002C */  lw    $a1, 0x2c($s0)
/* 0046C8D0 8E260028 */  lw    $a2, 0x28($s1)
/* 0046C8D4 8E27002C */  lw    $a3, 0x2c($s1)
/* 0046C8D8 A3A80033 */  sb    $t0, 0x33($sp)
/* 0046C8DC A3A90032 */  sb    $t1, 0x32($sp)
/* 0046C8E0 AFA40000 */  sw    $a0, ($sp)
/* 0046C8E4 AFA50004 */  sw    $a1, 4($sp)
/* 0046C8E8 AFA60008 */  sw    $a2, 8($sp)
/* 0046C8EC 0320F809 */  jalr  $t9
/* 0046C8F0 AFA7000C */   sw    $a3, 0xc($sp)
/* 0046C8F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046C8F8 93A80033 */  lbu   $t0, 0x33($sp)
/* 0046C8FC 10400191 */  beqz  $v0, .L0046CF44
/* 0046C900 93A90032 */   lbu   $t1, 0x32($sp)
/* 0046C904 920E0021 */  lbu   $t6, 0x21($s0)
/* 0046C908 240F0001 */  li    $t7, 1
/* 0046C90C 11C00003 */  beqz  $t6, .L0046C91C
/* 0046C910 00000000 */   nop   
/* 0046C914 1000018B */  b     .L0046CF44
/* 0046C918 A3AF0030 */   sb    $t7, 0x30($sp)
.L0046C91C:
/* 0046C91C 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 0046C920 8E190010 */  lw    $t9, 0x10($s0)
/* 0046C924 240B0001 */  li    $t3, 1
/* 0046C928 8F180000 */  lw    $t8, ($t8)
/* 0046C92C 03191826 */  xor   $v1, $t8, $t9
/* 0046C930 2C630001 */  sltiu $v1, $v1, 1
/* 0046C934 10600003 */  beqz  $v1, .L0046C944
/* 0046C938 00601025 */   move  $v0, $v1
/* 0046C93C 92020002 */  lbu   $v0, 2($s0)
/* 0046C940 2C420001 */  sltiu $v0, $v0, 1
.L0046C944:
/* 0046C944 920A0022 */  lbu   $t2, 0x22($s0)
/* 0046C948 304800FF */  andi  $t0, $v0, 0xff
/* 0046C94C 304C00FF */  andi  $t4, $v0, 0xff
/* 0046C950 11400002 */  beqz  $t2, .L0046C95C
/* 0046C954 00000000 */   nop   
/* 0046C958 A3AB0031 */  sb    $t3, 0x31($sp)
.L0046C95C:
/* 0046C95C 15800179 */  bnez  $t4, .L0046CF44
/* 0046C960 00000000 */   nop   
/* 0046C964 10600177 */  beqz  $v1, .L0046CF44
/* 0046C968 00000000 */   nop   
/* 0046C96C 10000175 */  b     .L0046CF44
/* 0046C970 24090001 */   li    $t1, 1
.L0046C974:
/* 0046C974 24010004 */  li    $at, 4
/* 0046C978 14610172 */  bne   $v1, $at, .L0046CF44
/* 0046C97C 00000000 */   nop   
/* 0046C980 92230020 */  lbu   $v1, 0x20($s1)
/* 0046C984 920D0020 */  lbu   $t5, 0x20($s0)
/* 0046C988 146D016E */  bne   $v1, $t5, .L0046CF44
/* 0046C98C 00000000 */   nop   
/* 0046C990 100000EA */  b     .L0046CD3C
/* 0046C994 306200FF */   andi  $v0, $v1, 0xff
.L0046C998:
/* 0046C998 922E0001 */  lbu   $t6, 1($s1)
/* 0046C99C 920F0001 */  lbu   $t7, 1($s0)
/* 0046C9A0 15CF0168 */  bne   $t6, $t7, .L0046CF44
/* 0046C9A4 00000000 */   nop   
/* 0046C9A8 8E020024 */  lw    $v0, 0x24($s0)
/* 0046C9AC 16420004 */  bne   $s2, $v0, .L0046C9C0
/* 0046C9B0 00000000 */   nop   
/* 0046C9B4 8E180028 */  lw    $t8, 0x28($s0)
/* 0046C9B8 52780007 */  beql  $s3, $t8, .L0046C9D8
/* 0046C9BC 922A003E */   lbu   $t2, 0x3e($s1)
.L0046C9C0:
/* 0046C9C0 16620160 */  bne   $s3, $v0, .L0046CF44
/* 0046C9C4 00000000 */   nop   
/* 0046C9C8 8E190028 */  lw    $t9, 0x28($s0)
/* 0046C9CC 1659015D */  bne   $s2, $t9, .L0046CF44
/* 0046C9D0 00000000 */   nop   
/* 0046C9D4 922A003E */  lbu   $t2, 0x3e($s1)
.L0046C9D8:
/* 0046C9D8 920B003E */  lbu   $t3, 0x3e($s0)
/* 0046C9DC 154B0159 */  bne   $t2, $t3, .L0046CF44
/* 0046C9E0 00000000 */   nop   
/* 0046C9E4 10000157 */  b     .L0046CF44
/* 0046C9E8 24080001 */   li    $t0, 1
.L0046C9EC:
/* 0046C9EC 922C0001 */  lbu   $t4, 1($s1)
.L0046C9F0:
/* 0046C9F0 920D0001 */  lbu   $t5, 1($s0)
/* 0046C9F4 158D0153 */  bne   $t4, $t5, .L0046CF44
/* 0046C9F8 00000000 */   nop   
/* 0046C9FC 8E020024 */  lw    $v0, 0x24($s0)
/* 0046CA00 16420004 */  bne   $s2, $v0, .L0046CA14
/* 0046CA04 00000000 */   nop   
/* 0046CA08 8E0E0028 */  lw    $t6, 0x28($s0)
/* 0046CA0C 126E0006 */  beq   $s3, $t6, .L0046CA28
/* 0046CA10 00000000 */   nop   
.L0046CA14:
/* 0046CA14 1662014B */  bne   $s3, $v0, .L0046CF44
/* 0046CA18 00000000 */   nop   
/* 0046CA1C 8E0F0028 */  lw    $t7, 0x28($s0)
/* 0046CA20 164F0148 */  bne   $s2, $t7, .L0046CF44
/* 0046CA24 00000000 */   nop   
.L0046CA28:
/* 0046CA28 10000146 */  b     .L0046CF44
/* 0046CA2C 24080001 */   li    $t0, 1
.L0046CA30:
/* 0046CA30 92380001 */  lbu   $t8, 1($s1)
.L0046CA34:
/* 0046CA34 92190001 */  lbu   $t9, 1($s0)
/* 0046CA38 17190142 */  bne   $t8, $t9, .L0046CF44
/* 0046CA3C 00000000 */   nop   
/* 0046CA40 8E0A0024 */  lw    $t2, 0x24($s0)
/* 0046CA44 164A013F */  bne   $s2, $t2, .L0046CF44
/* 0046CA48 00000000 */   nop   
/* 0046CA4C 8E0B0028 */  lw    $t3, 0x28($s0)
/* 0046CA50 166B013C */  bne   $s3, $t3, .L0046CF44
/* 0046CA54 00000000 */   nop   
/* 0046CA58 922C003E */  lbu   $t4, 0x3e($s1)
/* 0046CA5C 920D003E */  lbu   $t5, 0x3e($s0)
/* 0046CA60 158D0138 */  bne   $t4, $t5, .L0046CF44
/* 0046CA64 00000000 */   nop   
/* 0046CA68 10000136 */  b     .L0046CF44
/* 0046CA6C 24080001 */   li    $t0, 1
.L0046CA70:
/* 0046CA70 922E0001 */  lbu   $t6, 1($s1)
/* 0046CA74 920F0001 */  lbu   $t7, 1($s0)
/* 0046CA78 15CF0132 */  bne   $t6, $t7, .L0046CF44
/* 0046CA7C 00000000 */   nop   
/* 0046CA80 8E180024 */  lw    $t8, 0x24($s0)
/* 0046CA84 1658012F */  bne   $s2, $t8, .L0046CF44
/* 0046CA88 00000000 */   nop   
/* 0046CA8C 8E190028 */  lw    $t9, 0x28($s0)
/* 0046CA90 1679012C */  bne   $s3, $t9, .L0046CF44
/* 0046CA94 00000000 */   nop   
/* 0046CA98 1000012A */  b     .L0046CF44
/* 0046CA9C 24080001 */   li    $t0, 1
.L0046CAA0:
/* 0046CAA0 922A0001 */  lbu   $t2, 1($s1)
/* 0046CAA4 920B0001 */  lbu   $t3, 1($s0)
/* 0046CAA8 154B0126 */  bne   $t2, $t3, .L0046CF44
/* 0046CAAC 00000000 */   nop   
/* 0046CAB0 8E0C0024 */  lw    $t4, 0x24($s0)
/* 0046CAB4 164C0123 */  bne   $s2, $t4, .L0046CF44
/* 0046CAB8 00000000 */   nop   
/* 0046CABC 8E0D0028 */  lw    $t5, 0x28($s0)
/* 0046CAC0 166D0120 */  bne   $s3, $t5, .L0046CF44
/* 0046CAC4 00000000 */   nop   
/* 0046CAC8 962E003C */  lhu   $t6, 0x3c($s1)
/* 0046CACC 960F003C */  lhu   $t7, 0x3c($s0)
/* 0046CAD0 15CF011C */  bne   $t6, $t7, .L0046CF44
/* 0046CAD4 00000000 */   nop   
/* 0046CAD8 1000011A */  b     .L0046CF44
/* 0046CADC 24080001 */   li    $t0, 1
.L0046CAE0:
/* 0046CAE0 92380001 */  lbu   $t8, 1($s1)
/* 0046CAE4 92190001 */  lbu   $t9, 1($s0)
/* 0046CAE8 17190116 */  bne   $t8, $t9, .L0046CF44
/* 0046CAEC 00000000 */   nop   
/* 0046CAF0 8E0A0024 */  lw    $t2, 0x24($s0)
/* 0046CAF4 164A0113 */  bne   $s2, $t2, .L0046CF44
/* 0046CAF8 00000000 */   nop   
/* 0046CAFC 8E0B0028 */  lw    $t3, 0x28($s0)
/* 0046CB00 166B0110 */  bne   $s3, $t3, .L0046CF44
/* 0046CB04 00000000 */   nop   
/* 0046CB08 8E2C002C */  lw    $t4, 0x2c($s1)
/* 0046CB0C 8E0D002C */  lw    $t5, 0x2c($s0)
/* 0046CB10 158D010C */  bne   $t4, $t5, .L0046CF44
/* 0046CB14 00000000 */   nop   
/* 0046CB18 1000010A */  b     .L0046CF44
/* 0046CB1C 24080001 */   li    $t0, 1
.L0046CB20:
/* 0046CB20 922E0001 */  lbu   $t6, 1($s1)
/* 0046CB24 920F0001 */  lbu   $t7, 1($s0)
/* 0046CB28 15CF0106 */  bne   $t6, $t7, .L0046CF44
/* 0046CB2C 00000000 */   nop   
/* 0046CB30 8E180024 */  lw    $t8, 0x24($s0)
/* 0046CB34 16580103 */  bne   $s2, $t8, .L0046CF44
/* 0046CB38 00000000 */   nop   
/* 0046CB3C 9239003E */  lbu   $t9, 0x3e($s1)
/* 0046CB40 920A003E */  lbu   $t2, 0x3e($s0)
/* 0046CB44 172A00FF */  bne   $t9, $t2, .L0046CF44
/* 0046CB48 00000000 */   nop   
/* 0046CB4C 100000FD */  b     .L0046CF44
/* 0046CB50 24080001 */   li    $t0, 1
.L0046CB54:
/* 0046CB54 922B0001 */  lbu   $t3, 1($s1)
/* 0046CB58 920C0001 */  lbu   $t4, 1($s0)
/* 0046CB5C 156C00F9 */  bne   $t3, $t4, .L0046CF44
/* 0046CB60 00000000 */   nop   
/* 0046CB64 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0046CB68 164D00F6 */  bne   $s2, $t5, .L0046CF44
/* 0046CB6C 00000000 */   nop   
/* 0046CB70 8E2E002C */  lw    $t6, 0x2c($s1)
/* 0046CB74 8E0F002C */  lw    $t7, 0x2c($s0)
/* 0046CB78 15CF00F2 */  bne   $t6, $t7, .L0046CF44
/* 0046CB7C 00000000 */   nop   
/* 0046CB80 9238003E */  lbu   $t8, 0x3e($s1)
/* 0046CB84 9219003E */  lbu   $t9, 0x3e($s0)
/* 0046CB88 171900EE */  bne   $t8, $t9, .L0046CF44
/* 0046CB8C 00000000 */   nop   
/* 0046CB90 100000EC */  b     .L0046CF44
/* 0046CB94 24080001 */   li    $t0, 1
.L0046CB98:
/* 0046CB98 922A0001 */  lbu   $t2, 1($s1)
/* 0046CB9C 920B0001 */  lbu   $t3, 1($s0)
/* 0046CBA0 154B00E8 */  bne   $t2, $t3, .L0046CF44
/* 0046CBA4 00000000 */   nop   
/* 0046CBA8 922C0038 */  lbu   $t4, 0x38($s1)
/* 0046CBAC 920D0038 */  lbu   $t5, 0x38($s0)
/* 0046CBB0 158D00E4 */  bne   $t4, $t5, .L0046CF44
/* 0046CBB4 00000000 */   nop   
/* 0046CBB8 8E0E0024 */  lw    $t6, 0x24($s0)
/* 0046CBBC 164E00E1 */  bne   $s2, $t6, .L0046CF44
/* 0046CBC0 00000000 */   nop   
/* 0046CBC4 922F003E */  lbu   $t7, 0x3e($s1)
/* 0046CBC8 9218003E */  lbu   $t8, 0x3e($s0)
/* 0046CBCC 15F800DD */  bne   $t7, $t8, .L0046CF44
/* 0046CBD0 00000000 */   nop   
/* 0046CBD4 100000DB */  b     .L0046CF44
/* 0046CBD8 24080001 */   li    $t0, 1
.L0046CBDC:
/* 0046CBDC 8E39002C */  lw    $t9, 0x2c($s1)
/* 0046CBE0 8E0A002C */  lw    $t2, 0x2c($s0)
/* 0046CBE4 172A00D7 */  bne   $t9, $t2, .L0046CF44
/* 0046CBE8 00000000 */   nop   
/* 0046CBEC 962B003C */  lhu   $t3, 0x3c($s1)
/* 0046CBF0 960C003C */  lhu   $t4, 0x3c($s0)
/* 0046CBF4 156C00D3 */  bne   $t3, $t4, .L0046CF44
/* 0046CBF8 00000000 */   nop   
/* 0046CBFC 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0046CC00 164D00D0 */  bne   $s2, $t5, .L0046CF44
/* 0046CC04 00000000 */   nop   
/* 0046CC08 100000CE */  b     .L0046CF44
/* 0046CC0C 24080001 */   li    $t0, 1
.L0046CC10:
/* 0046CC10 8E0E0024 */  lw    $t6, 0x24($s0)
/* 0046CC14 164E00CB */  bne   $s2, $t6, .L0046CF44
/* 0046CC18 00000000 */   nop   
/* 0046CC1C 100000C9 */  b     .L0046CF44
/* 0046CC20 24080001 */   li    $t0, 1
.L0046CC24:
/* 0046CC24 922F0001 */  lbu   $t7, 1($s1)
.L0046CC28:
/* 0046CC28 92180001 */  lbu   $t8, 1($s0)
/* 0046CC2C 15F800C5 */  bne   $t7, $t8, .L0046CF44
/* 0046CC30 00000000 */   nop   
/* 0046CC34 8E190024 */  lw    $t9, 0x24($s0)
/* 0046CC38 165900C2 */  bne   $s2, $t9, .L0046CF44
/* 0046CC3C 00000000 */   nop   
/* 0046CC40 8E2A002C */  lw    $t2, 0x2c($s1)
/* 0046CC44 8E0B002C */  lw    $t3, 0x2c($s0)
/* 0046CC48 154B00BE */  bne   $t2, $t3, .L0046CF44
/* 0046CC4C 00000000 */   nop   
/* 0046CC50 962C003C */  lhu   $t4, 0x3c($s1)
/* 0046CC54 960D003C */  lhu   $t5, 0x3c($s0)
/* 0046CC58 158D00BA */  bne   $t4, $t5, .L0046CF44
/* 0046CC5C 00000000 */   nop   
/* 0046CC60 92080002 */  lbu   $t0, 2($s0)
/* 0046CC64 2D080001 */  sltiu $t0, $t0, 1
/* 0046CC68 310800FF */  andi  $t0, $t0, 0xff
/* 0046CC6C 150000B5 */  bnez  $t0, .L0046CF44
/* 0046CC70 00000000 */   nop   
/* 0046CC74 100000B3 */  b     .L0046CF44
/* 0046CC78 24090001 */   li    $t1, 1
.L0046CC7C:
/* 0046CC7C 8E02001C */  lw    $v0, 0x1c($s0)
.L0046CC80:
/* 0046CC80 104000B0 */  beqz  $v0, .L0046CF44
/* 0046CC84 00000000 */   nop   
/* 0046CC88 00408025 */  move  $s0, $v0
.L0046CC8C:
/* 0046CC8C 8C42001C */  lw    $v0, 0x1c($v0)
/* 0046CC90 5440FFFE */  bnezl $v0, .L0046CC8C
/* 0046CC94 00408025 */   move  $s0, $v0
/* 0046CC98 100000AA */  b     .L0046CF44
/* 0046CC9C 00000000 */   nop   
.L0046CCA0:
/* 0046CCA0 8E020024 */  lw    $v0, 0x24($s0)
/* 0046CCA4 16420004 */  bne   $s2, $v0, .L0046CCB8
/* 0046CCA8 00000000 */   nop   
/* 0046CCAC 8E0E0028 */  lw    $t6, 0x28($s0)
/* 0046CCB0 526E0007 */  beql  $s3, $t6, .L0046CCD0
/* 0046CCB4 8E38002C */   lw    $t8, 0x2c($s1)
.L0046CCB8:
/* 0046CCB8 166200A2 */  bne   $s3, $v0, .L0046CF44
/* 0046CCBC 00000000 */   nop   
/* 0046CCC0 8E0F0028 */  lw    $t7, 0x28($s0)
/* 0046CCC4 164F009F */  bne   $s2, $t7, .L0046CF44
/* 0046CCC8 00000000 */   nop   
/* 0046CCCC 8E38002C */  lw    $t8, 0x2c($s1)
.L0046CCD0:
/* 0046CCD0 8E19002C */  lw    $t9, 0x2c($s0)
/* 0046CCD4 1719009B */  bne   $t8, $t9, .L0046CF44
/* 0046CCD8 00000000 */   nop   
/* 0046CCDC 92080002 */  lbu   $t0, 2($s0)
/* 0046CCE0 2D080001 */  sltiu $t0, $t0, 1
/* 0046CCE4 310800FF */  andi  $t0, $t0, 0xff
/* 0046CCE8 15000096 */  bnez  $t0, .L0046CF44
/* 0046CCEC 00000000 */   nop   
/* 0046CCF0 10000094 */  b     .L0046CF44
/* 0046CCF4 24090001 */   li    $t1, 1
.L0046CCF8:
/* 0046CCF8 8E0A0024 */  lw    $t2, 0x24($s0)
/* 0046CCFC 164A0091 */  bne   $s2, $t2, .L0046CF44
/* 0046CD00 00000000 */   nop   
/* 0046CD04 8E0B0028 */  lw    $t3, 0x28($s0)
/* 0046CD08 166B008E */  bne   $s3, $t3, .L0046CF44
/* 0046CD0C 00000000 */   nop   
/* 0046CD10 8E2C002C */  lw    $t4, 0x2c($s1)
/* 0046CD14 8E0D002C */  lw    $t5, 0x2c($s0)
/* 0046CD18 158D008A */  bne   $t4, $t5, .L0046CF44
/* 0046CD1C 00000000 */   nop   
/* 0046CD20 92080002 */  lbu   $t0, 2($s0)
/* 0046CD24 2D080001 */  sltiu $t0, $t0, 1
/* 0046CD28 310800FF */  andi  $t0, $t0, 0xff
/* 0046CD2C 15000085 */  bnez  $t0, .L0046CF44
/* 0046CD30 00000000 */   nop   
/* 0046CD34 10000083 */  b     .L0046CF44
/* 0046CD38 24090001 */   li    $t1, 1
.L0046CD3C:
/* 0046CD3C 2C410063 */  sltiu $at, $v0, 0x63
/* 0046CD40 14200026 */  bnez  $at, .L0046CDDC
/* 0046CD44 2C41007E */   sltiu $at, $v0, 0x7e
/* 0046CD48 14200015 */  bnez  $at, .L0046CDA0
/* 0046CD4C 244FFF92 */   addiu $t7, $v0, -0x6e
/* 0046CD50 2C410094 */  sltiu $at, $v0, 0x94
/* 0046CD54 14200006 */  bnez  $at, .L0046CD70
/* 0046CD58 244EFF7A */   addiu $t6, $v0, -0x86
/* 0046CD5C 2401009A */  li    $at, 154
/* 0046CD60 5041FFC7 */  beql  $v0, $at, .L0046CC80
/* 0046CD64 8E02001C */   lw    $v0, 0x1c($s0)
/* 0046CD68 1000004B */  b     .L0046CE98
/* 0046CD6C 00000000 */   nop   
.L0046CD70:
/* 0046CD70 2C41008E */  sltiu $at, $v0, 0x8e
/* 0046CD74 10200064 */  beqz  $at, .L0046CF08
/* 0046CD78 2DC10008 */   sltiu $at, $t6, 8
/* 0046CD7C 10200046 */  beqz  $at, .L0046CE98
/* 0046CD80 00000000 */   nop   
/* 0046CD84 8F818044 */  lw    $at, %got(jtbl_1000D88C)($gp)
/* 0046CD88 000E7080 */  sll   $t6, $t6, 2
/* 0046CD8C 002E0821 */  addu  $at, $at, $t6
/* 0046CD90 8C2ED88C */  lw    $t6, %lo(jtbl_1000D88C)($at)
/* 0046CD94 01DC7021 */  addu  $t6, $t6, $gp
/* 0046CD98 01C00008 */  jr    $t6
/* 0046CD9C 00000000 */   nop   
.L0046CDA0:
/* 0046CDA0 24010069 */  li    $at, 105
/* 0046CDA4 5041FF23 */  beql  $v0, $at, .L0046CA34
/* 0046CDA8 92380001 */   lbu   $t8, 1($s1)
/* 0046CDAC 2C410078 */  sltiu $at, $v0, 0x78
/* 0046CDB0 10200050 */  beqz  $at, .L0046CEF4
/* 0046CDB4 2DE1000A */   sltiu $at, $t7, 0xa
/* 0046CDB8 10200037 */  beqz  $at, .L0046CE98
/* 0046CDBC 00000000 */   nop   
/* 0046CDC0 8F818044 */  lw    $at, %got(jtbl_1000D864)($gp)
/* 0046CDC4 000F7880 */  sll   $t7, $t7, 2
/* 0046CDC8 002F0821 */  addu  $at, $at, $t7
/* 0046CDCC 8C2FD864 */  lw    $t7, %lo(jtbl_1000D864)($at)
/* 0046CDD0 01FC7821 */  addu  $t7, $t7, $gp
/* 0046CDD4 01E00008 */  jr    $t7
/* 0046CDD8 00000000 */   nop   
.L0046CDDC:
/* 0046CDDC 2C410024 */  sltiu $at, $v0, 0x24
/* 0046CDE0 14200010 */  bnez  $at, .L0046CE24
/* 0046CDE4 2C41003D */   sltiu $at, $v0, 0x3d
/* 0046CDE8 14200038 */  bnez  $at, .L0046CECC
/* 0046CDEC 244BFFD8 */   addiu $t3, $v0, -0x28
/* 0046CDF0 24010041 */  li    $at, 65
/* 0046CDF4 1041FF3A */  beq   $v0, $at, .L0046CAE0
/* 0046CDF8 2458FFB3 */   addiu $t8, $v0, -0x4d
/* 0046CDFC 2F010016 */  sltiu $at, $t8, 0x16
/* 0046CE00 10200025 */  beqz  $at, .L0046CE98
/* 0046CE04 00000000 */   nop   
/* 0046CE08 8F818044 */  lw    $at, %got(jtbl_1000D80C)($gp)
/* 0046CE0C 0018C080 */  sll   $t8, $t8, 2
/* 0046CE10 00380821 */  addu  $at, $at, $t8
/* 0046CE14 8C38D80C */  lw    $t8, %lo(jtbl_1000D80C)($at)
/* 0046CE18 031CC021 */  addu  $t8, $t8, $gp
/* 0046CE1C 03000008 */  jr    $t8
/* 0046CE20 00000000 */   nop   
.L0046CE24:
/* 0046CE24 2C41000F */  sltiu $at, $v0, 0xf
/* 0046CE28 1420000E */  bnez  $at, .L0046CE64
/* 0046CE2C 2C41001E */   sltiu $at, $v0, 0x1e
/* 0046CE30 50200017 */  beql  $at, $zero, .L0046CE90
/* 0046CE34 24010023 */   li    $at, 35
/* 0046CE38 2459FFE8 */  addiu $t9, $v0, -0x18
/* 0046CE3C 2F210006 */  sltiu $at, $t9, 6
/* 0046CE40 10200015 */  beqz  $at, .L0046CE98
/* 0046CE44 00000000 */   nop   
/* 0046CE48 8F818044 */  lw    $at, %got(jtbl_1000D7A0)($gp)
/* 0046CE4C 0019C880 */  sll   $t9, $t9, 2
/* 0046CE50 00390821 */  addu  $at, $at, $t9
/* 0046CE54 8C39D7A0 */  lw    $t9, %lo(jtbl_1000D7A0)($at)
/* 0046CE58 033CC821 */  addu  $t9, $t9, $gp
/* 0046CE5C 03200008 */  jr    $t9
/* 0046CE60 00000000 */   nop   
.L0046CE64:
/* 0046CE64 2C41000F */  sltiu $at, $v0, 0xf
/* 0046CE68 1020000B */  beqz  $at, .L0046CE98
/* 0046CE6C 00000000 */   nop   
/* 0046CE70 8F818044 */  lw    $at, %got(jtbl_1000D764)($gp)
/* 0046CE74 00025080 */  sll   $t2, $v0, 2
/* 0046CE78 002A0821 */  addu  $at, $at, $t2
/* 0046CE7C 8C2AD764 */  lw    $t2, %lo(jtbl_1000D764)($at)
/* 0046CE80 015C5021 */  addu  $t2, $t2, $gp
/* 0046CE84 01400008 */  jr    $t2
/* 0046CE88 00000000 */   nop   
/* 0046CE8C 24010023 */  li    $at, 35
.L0046CE90:
/* 0046CE90 5041FED7 */  beql  $v0, $at, .L0046C9F0
/* 0046CE94 922C0001 */   lbu   $t4, 1($s1)
.L0046CE98:
/* 0046CE98 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0046CE9C 8F868044 */  lw    $a2, %got(RO_1000D75A)($gp)
/* 0046CEA0 24040001 */  li    $a0, 1
/* 0046CEA4 24050197 */  li    $a1, 407
/* 0046CEA8 2407000A */  li    $a3, 10
/* 0046CEAC A3A80033 */  sb    $t0, 0x33($sp)
/* 0046CEB0 A3A90032 */  sb    $t1, 0x32($sp)
/* 0046CEB4 0320F809 */  jalr  $t9
/* 0046CEB8 24C6D75A */   addiu $a2, %lo(RO_1000D75A) # addiu $a2, $a2, -0x28a6
/* 0046CEBC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046CEC0 93A80033 */  lbu   $t0, 0x33($sp)
/* 0046CEC4 1000001F */  b     .L0046CF44
/* 0046CEC8 93A90032 */   lbu   $t1, 0x32($sp)
.L0046CECC:
/* 0046CECC 2D610015 */  sltiu $at, $t3, 0x15
/* 0046CED0 1020FFF1 */  beqz  $at, .L0046CE98
/* 0046CED4 00000000 */   nop   
/* 0046CED8 8F818044 */  lw    $at, %got(jtbl_1000D7B8)($gp)
/* 0046CEDC 000B5880 */  sll   $t3, $t3, 2
/* 0046CEE0 002B0821 */  addu  $at, $at, $t3
/* 0046CEE4 8C2BD7B8 */  lw    $t3, %lo(jtbl_1000D7B8)($at)
/* 0046CEE8 017C5821 */  addu  $t3, $t3, $gp
/* 0046CEEC 01600008 */  jr    $t3
/* 0046CEF0 00000000 */   nop   
.L0046CEF4:
/* 0046CEF4 2401007D */  li    $at, 125
/* 0046CEF8 5041FECE */  beql  $v0, $at, .L0046CA34
/* 0046CEFC 92380001 */   lbu   $t8, 1($s1)
/* 0046CF00 1000FFE5 */  b     .L0046CE98
/* 0046CF04 00000000 */   nop   
.L0046CF08:
/* 0046CF08 24010093 */  li    $at, 147
/* 0046CF0C 5041FF46 */  beql  $v0, $at, .L0046CC28
/* 0046CF10 922F0001 */   lbu   $t7, 1($s1)
/* 0046CF14 1000FFE0 */  b     .L0046CE98
/* 0046CF18 00000000 */   nop   
.L0046CF1C:
/* 0046CF1C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0046CF20 8F868044 */  lw    $a2, %got(RO_1000D750)($gp)
/* 0046CF24 24040001 */  li    $a0, 1
/* 0046CF28 A3A80033 */  sb    $t0, 0x33($sp)
/* 0046CF2C A3A90032 */  sb    $t1, 0x32($sp)
/* 0046CF30 0320F809 */  jalr  $t9
/* 0046CF34 24C6D750 */   addiu $a2, %lo(RO_1000D750) # addiu $a2, $a2, -0x28b0
/* 0046CF38 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046CF3C 93A80033 */  lbu   $t0, 0x33($sp)
/* 0046CF40 93A90032 */  lbu   $t1, 0x32($sp)
.L0046CF44:
/* 0046CF44 15000002 */  bnez  $t0, .L0046CF50
/* 0046CF48 93AC0030 */   lbu   $t4, 0x30($sp)
/* 0046CF4C 8E10001C */  lw    $s0, 0x1c($s0)
.L0046CF50:
/* 0046CF50 15000005 */  bnez  $t0, .L0046CF68
/* 0046CF54 00000000 */   nop   
/* 0046CF58 15800003 */  bnez  $t4, .L0046CF68
/* 0046CF5C 00000000 */   nop   
/* 0046CF60 5600FE1F */  bnezl $s0, .L0046C7E0
/* 0046CF64 92030000 */   lbu   $v1, ($s0)
.L0046CF68:
/* 0046CF68 11000003 */  beqz  $t0, .L0046CF78
/* 0046CF6C 93AD0030 */   lbu   $t5, 0x30($sp)
/* 0046CF70 51A0003B */  beql  $t5, $zero, .L0046D060
/* 0046CF74 8FBF002C */   lw    $ra, 0x2c($sp)
.L0046CF78:
/* 0046CF78 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0046CF7C 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0046CF80 A3A90032 */  sb    $t1, 0x32($sp)
/* 0046CF84 0320F809 */  jalr  $t9
/* 0046CF88 00000000 */   nop   
/* 0046CF8C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046CF90 93A90032 */  lbu   $t1, 0x32($sp)
/* 0046CF94 3C011200 */  lui   $at, 0x1200
/* 0046CF98 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0046CF9C 00408025 */  move  $s0, $v0
/* 0046CFA0 8DCE0000 */  lw    $t6, ($t6)
/* 0046CFA4 AC4E0010 */  sw    $t6, 0x10($v0)
/* 0046CFA8 922F0000 */  lbu   $t7, ($s1)
/* 0046CFAC 93AC0030 */  lbu   $t4, 0x30($sp)
/* 0046CFB0 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0046CFB4 0018C823 */  negu  $t9, $t8
/* 0046CFB8 03215024 */  and   $t2, $t9, $at
/* 0046CFBC 01EA5804 */  sllv  $t3, $t2, $t7
/* 0046CFC0 05610007 */  bgez  $t3, .L0046CFE0
/* 0046CFC4 318D00FF */   andi  $t5, $t4, 0xff
/* 0046CFC8 15A00004 */  bnez  $t5, .L0046CFDC
/* 0046CFCC A04C0021 */   sb    $t4, 0x21($v0)
/* 0046CFD0 93AE0031 */  lbu   $t6, 0x31($sp)
/* 0046CFD4 10000002 */  b     .L0046CFE0
/* 0046CFD8 A04E0022 */   sb    $t6, 0x22($v0)
.L0046CFDC:
/* 0046CFDC A0400022 */  sb    $zero, 0x22($v0)
.L0046CFE0:
/* 0046CFE0 51200004 */  beql  $t1, $zero, .L0046CFF4
/* 0046CFE4 92240000 */   lbu   $a0, ($s1)
/* 0046CFE8 1000001C */  b     .L0046D05C
/* 0046CFEC A0400003 */   sb    $zero, 3($v0)
/* 0046CFF0 92240000 */  lbu   $a0, ($s1)
.L0046CFF4:
/* 0046CFF4 3C011200 */  lui   $at, 0x1200
/* 0046CFF8 2C980020 */  sltiu $t8, $a0, 0x20
/* 0046CFFC 0018C823 */  negu  $t9, $t8
/* 0046D000 03215024 */  and   $t2, $t9, $at
/* 0046D004 008A7804 */  sllv  $t7, $t2, $a0
/* 0046D008 05E00012 */  bltz  $t7, .L0046D054
/* 0046D00C 24010004 */   li    $at, 4
/* 0046D010 54810013 */  bnel  $a0, $at, .L0046D060
/* 0046D014 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0046D018 922B0020 */  lbu   $t3, 0x20($s1)
/* 0046D01C 256CFFE0 */  addiu $t4, $t3, -0x20
/* 0046D020 2D8D0080 */  sltiu $t5, $t4, 0x80
/* 0046D024 11A00009 */  beqz  $t5, .L0046D04C
/* 0046D028 00000000 */   nop   
/* 0046D02C 8F998044 */  lw    $t9, %got(D_10010FC0)($gp)
/* 0046D030 000C7143 */  sra   $t6, $t4, 5
/* 0046D034 000EC080 */  sll   $t8, $t6, 2
/* 0046D038 27390FC0 */  addiu $t9, %lo(D_10010FC0) # addiu $t9, $t9, 0xfc0
/* 0046D03C 03385021 */  addu  $t2, $t9, $t8
/* 0046D040 8D4F0000 */  lw    $t7, ($t2)
/* 0046D044 018F5804 */  sllv  $t3, $t7, $t4
/* 0046D048 296D0000 */  slti  $t5, $t3, 0
.L0046D04C:
/* 0046D04C 51A00004 */  beql  $t5, $zero, .L0046D060
/* 0046D050 8FBF002C */   lw    $ra, 0x2c($sp)
.L0046D054:
/* 0046D054 24190001 */  li    $t9, 1
/* 0046D058 A0590003 */  sb    $t9, 3($v0)
.L0046D05C:
/* 0046D05C 8FBF002C */  lw    $ra, 0x2c($sp)
.L0046D060:
/* 0046D060 02001025 */  move  $v0, $s0
/* 0046D064 8FB00018 */  lw    $s0, 0x18($sp)
/* 0046D068 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0046D06C 8FB20020 */  lw    $s2, 0x20($sp)
/* 0046D070 8FB30024 */  lw    $s3, 0x24($sp)
/* 0046D074 03E00008 */  jr    $ra
/* 0046D078 27BD0038 */   addiu $sp, $sp, 0x38
    .type unroll_searchloop, @function
    .size unroll_searchloop, .-unroll_searchloop
    .end unroll_searchloop

glabel unroll_resetincr
    .ent unroll_resetincr
    # 0046D428 oneloopblockexpr
    # 0046E77C oneloopblockstmt
    # 004704B0 termination_test
    # 004713E8 loopunroll
    # 004737E0 par_to_str
    # 00473F04 pmov_to_mov
/* 0046D07C 3C1C0FBB */  .cpload $t9
/* 0046D080 279CD214 */  
/* 0046D084 0399E021 */  
/* 0046D088 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0046D08C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0046D090 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0046D094 00803825 */  move  $a3, $a0
/* 0046D098 10A00009 */  beqz  $a1, .L0046D0C0
/* 0046D09C 00A03025 */   move  $a2, $a1
/* 0046D0A0 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0046D0A4 24040001 */  li    $a0, 1
/* 0046D0A8 00E02825 */  move  $a1, $a3
/* 0046D0AC 0320F809 */  jalr  $t9
/* 0046D0B0 00000000 */   nop   
/* 0046D0B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046D0B8 10000002 */  b     .L0046D0C4
/* 0046D0BC 00401825 */   move  $v1, $v0
.L0046D0C0:
/* 0046D0C0 00E01825 */  move  $v1, $a3
.L0046D0C4:
/* 0046D0C4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0046D0C8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0046D0CC 00601025 */  move  $v0, $v1
/* 0046D0D0 03E00008 */  jr    $ra
/* 0046D0D4 00000000 */   nop   
    .type unroll_resetincr, @function
    .size unroll_resetincr, .-unroll_resetincr
    .end unroll_resetincr

glabel unroll_resetincr_mod
    .ent unroll_resetincr_mod
    # 0046D428 oneloopblockexpr
    # 0046E77C oneloopblockstmt
/* 0046D0D8 3C1C0FBB */  .cpload $t9
/* 0046D0DC 279CD1B8 */  
/* 0046D0E0 0399E021 */  
/* 0046D0E4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0046D0E8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0046D0EC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0046D0F0 AFA40020 */  sw    $a0, 0x20($sp)
/* 0046D0F4 8CA20000 */  lw    $v0, ($a1)
/* 0046D0F8 00A03825 */  move  $a3, $a1
/* 0046D0FC 28418000 */  slti  $at, $v0, -0x8000
/* 0046D100 14200005 */  bnez  $at, .L0046D118
/* 0046D104 000233C3 */   sra   $a2, $v0, 0xf
/* 0046D108 34018000 */  li    $at, 32768
/* 0046D10C 0041082A */  slt   $at, $v0, $at
/* 0046D110 1420000C */  bnez  $at, .L0046D144
/* 0046D114 8FA30020 */   lw    $v1, 0x20($sp)
.L0046D118:
/* 0046D118 000633C0 */  sll   $a2, $a2, 0xf
/* 0046D11C 00467023 */  subu  $t6, $v0, $a2
/* 0046D120 ACEE0000 */  sw    $t6, ($a3)
/* 0046D124 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0046D128 8FA50020 */  lw    $a1, 0x20($sp)
/* 0046D12C 24040001 */  li    $a0, 1
/* 0046D130 0320F809 */  jalr  $t9
/* 0046D134 00000000 */   nop   
/* 0046D138 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046D13C 10000001 */  b     .L0046D144
/* 0046D140 00401825 */   move  $v1, $v0
.L0046D144:
/* 0046D144 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0046D148 27BD0020 */  addiu $sp, $sp, 0x20
/* 0046D14C 00601025 */  move  $v0, $v1
/* 0046D150 03E00008 */  jr    $ra
/* 0046D154 00000000 */   nop   
    .type unroll_resetincr_mod, @function
    .size unroll_resetincr_mod, .-unroll_resetincr_mod
    .end unroll_resetincr_mod

glabel unroll_check_istr_propcopy
    .ent unroll_check_istr_propcopy
    # 0046D428 oneloopblockexpr
/* 0046D158 3C1C0FBB */  .cpload $t9
/* 0046D15C 279CD138 */  
/* 0046D160 0399E021 */  
/* 0046D164 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0046D168 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0046D16C AFBF0034 */  sw    $ra, 0x34($sp)
/* 0046D170 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0046D174 8DCE0000 */  lw    $t6, ($t6)
/* 0046D178 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0046D17C AFB50028 */  sw    $s5, 0x28($sp)
/* 0046D180 AFB40024 */  sw    $s4, 0x24($sp)
/* 0046D184 AFB30020 */  sw    $s3, 0x20($sp)
/* 0046D188 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0046D18C AFB10018 */  sw    $s1, 0x18($sp)
/* 0046D190 AFB00014 */  sw    $s0, 0x14($sp)
/* 0046D194 AFA60040 */  sw    $a2, 0x40($sp)
/* 0046D198 8DD00028 */  lw    $s0, 0x28($t6)
/* 0046D19C 00808825 */  move  $s1, $a0
/* 0046D1A0 00A09025 */  move  $s2, $a1
/* 0046D1A4 30D300FF */  andi  $s3, $a2, 0xff
/* 0046D1A8 1200003A */  beqz  $s0, .L0046D294
/* 0046D1AC 00E0A025 */   move  $s4, $a3
/* 0046D1B0 2416003F */  li    $s6, 63
/* 0046D1B4 24150001 */  li    $s5, 1
/* 0046D1B8 920F0009 */  lbu   $t7, 9($s0)
.L0046D1BC:
/* 0046D1BC 56AF0033 */  bnel  $s5, $t7, .L0046D28C
/* 0046D1C0 8E100000 */   lw    $s0, ($s0)
/* 0046D1C4 8E02000C */  lw    $v0, 0xc($s0)
/* 0046D1C8 90580000 */  lbu   $t8, ($v0)
/* 0046D1CC 56D8002F */  bnel  $s6, $t8, .L0046D28C
/* 0046D1D0 8E100000 */   lw    $s0, ($s0)
/* 0046D1D4 8C590004 */  lw    $t9, 4($v0)
/* 0046D1D8 5639002C */  bnel  $s1, $t9, .L0046D28C
/* 0046D1DC 8E100000 */   lw    $s0, ($s0)
/* 0046D1E0 8C480030 */  lw    $t0, 0x30($v0)
/* 0046D1E4 56480029 */  bnel  $s2, $t0, .L0046D28C
/* 0046D1E8 8E100000 */   lw    $s0, ($s0)
/* 0046D1EC 9049001F */  lbu   $t1, 0x1f($v0)
/* 0046D1F0 51200026 */  beql  $t1, $zero, .L0046D28C
/* 0046D1F4 8E100000 */   lw    $s0, ($s0)
/* 0046D1F8 904A002C */  lbu   $t2, 0x2c($v0)
/* 0046D1FC 566A0023 */  bnel  $s3, $t2, .L0046D28C
/* 0046D200 8E100000 */   lw    $s0, ($s0)
/* 0046D204 8C4B0020 */  lw    $t3, 0x20($v0)
/* 0046D208 568B0020 */  bnel  $s4, $t3, .L0046D28C
/* 0046D20C 8E100000 */   lw    $s0, ($s0)
/* 0046D210 8F998328 */  lw    $t9, %call16(treekilled)($gp)
/* 0046D214 8C440014 */  lw    $a0, 0x14($v0)
/* 0046D218 0320F809 */  jalr  $t9
/* 0046D21C 00000000 */   nop   
/* 0046D220 14400019 */  bnez  $v0, .L0046D288
/* 0046D224 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0046D228 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046D22C 02202025 */  move  $a0, $s1
/* 0046D230 0320F809 */  jalr  $t9
/* 0046D234 00000000 */   nop   
/* 0046D238 8E0C000C */  lw    $t4, 0xc($s0)
/* 0046D23C 3C011E00 */  lui   $at, 0x1e00
/* 0046D240 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046D244 8D830014 */  lw    $v1, 0x14($t4)
/* 0046D248 906D0000 */  lbu   $t5, ($v1)
/* 0046D24C 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0046D250 000E7823 */  negu  $t7, $t6
/* 0046D254 01E1C024 */  and   $t8, $t7, $at
/* 0046D258 01B8C804 */  sllv  $t9, $t8, $t5
/* 0046D25C 07230007 */  bgezl $t9, .L0046D27C
/* 0046D260 8FAB0048 */   lw    $t3, 0x48($sp)
/* 0046D264 94680006 */  lhu   $t0, 6($v1)
/* 0046D268 25090001 */  addiu $t1, $t0, 1
/* 0046D26C A4690006 */  sh    $t1, 6($v1)
/* 0046D270 8E0A000C */  lw    $t2, 0xc($s0)
/* 0046D274 8D430014 */  lw    $v1, 0x14($t2)
/* 0046D278 8FAB0048 */  lw    $t3, 0x48($sp)
.L0046D27C:
/* 0046D27C 24020001 */  li    $v0, 1
/* 0046D280 10000005 */  b     .L0046D298
/* 0046D284 AD630000 */   sw    $v1, ($t3)
.L0046D288:
/* 0046D288 8E100000 */  lw    $s0, ($s0)
.L0046D28C:
/* 0046D28C 5600FFCB */  bnezl $s0, .L0046D1BC
/* 0046D290 920F0009 */   lbu   $t7, 9($s0)
.L0046D294:
/* 0046D294 00001025 */  move  $v0, $zero
.L0046D298:
/* 0046D298 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0046D29C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0046D2A0 8FB10018 */  lw    $s1, 0x18($sp)
/* 0046D2A4 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0046D2A8 8FB30020 */  lw    $s3, 0x20($sp)
/* 0046D2AC 8FB40024 */  lw    $s4, 0x24($sp)
/* 0046D2B0 8FB50028 */  lw    $s5, 0x28($sp)
/* 0046D2B4 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0046D2B8 03E00008 */  jr    $ra
/* 0046D2BC 27BD0038 */   addiu $sp, $sp, 0x38
    .type unroll_check_istr_propcopy, @function
    .size unroll_check_istr_propcopy, .-unroll_check_istr_propcopy
    .end unroll_check_istr_propcopy

glabel unroll_check_irst_propcopy
    .ent unroll_check_irst_propcopy
/* 0046D2C0 3C1C0FBB */  .cpload $t9
/* 0046D2C4 279CCFD0 */  
/* 0046D2C8 0399E021 */  
/* 0046D2CC 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0046D2D0 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0046D2D4 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0046D2D8 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0046D2DC 8DCE0000 */  lw    $t6, ($t6)
/* 0046D2E0 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0046D2E4 AFB50028 */  sw    $s5, 0x28($sp)
/* 0046D2E8 AFB40024 */  sw    $s4, 0x24($sp)
/* 0046D2EC AFB30020 */  sw    $s3, 0x20($sp)
/* 0046D2F0 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0046D2F4 AFB10018 */  sw    $s1, 0x18($sp)
/* 0046D2F8 AFB00014 */  sw    $s0, 0x14($sp)
/* 0046D2FC AFA60040 */  sw    $a2, 0x40($sp)
/* 0046D300 8DD00028 */  lw    $s0, 0x28($t6)
/* 0046D304 00808825 */  move  $s1, $a0
/* 0046D308 00A09025 */  move  $s2, $a1
/* 0046D30C 30D300FF */  andi  $s3, $a2, 0xff
/* 0046D310 1200003A */  beqz  $s0, .L0046D3FC
/* 0046D314 00E0A025 */   move  $s4, $a3
/* 0046D318 24160094 */  li    $s6, 148
/* 0046D31C 24150001 */  li    $s5, 1
/* 0046D320 920F0009 */  lbu   $t7, 9($s0)
.L0046D324:
/* 0046D324 56AF0033 */  bnel  $s5, $t7, .L0046D3F4
/* 0046D328 8E100000 */   lw    $s0, ($s0)
/* 0046D32C 8E02000C */  lw    $v0, 0xc($s0)
/* 0046D330 90580000 */  lbu   $t8, ($v0)
/* 0046D334 56D8002F */  bnel  $s6, $t8, .L0046D3F4
/* 0046D338 8E100000 */   lw    $s0, ($s0)
/* 0046D33C 8C590004 */  lw    $t9, 4($v0)
/* 0046D340 5639002C */  bnel  $s1, $t9, .L0046D3F4
/* 0046D344 8E100000 */   lw    $s0, ($s0)
/* 0046D348 8C480030 */  lw    $t0, 0x30($v0)
/* 0046D34C 56480029 */  bnel  $s2, $t0, .L0046D3F4
/* 0046D350 8E100000 */   lw    $s0, ($s0)
/* 0046D354 9049001F */  lbu   $t1, 0x1f($v0)
/* 0046D358 51200026 */  beql  $t1, $zero, .L0046D3F4
/* 0046D35C 8E100000 */   lw    $s0, ($s0)
/* 0046D360 904A002C */  lbu   $t2, 0x2c($v0)
/* 0046D364 566A0023 */  bnel  $s3, $t2, .L0046D3F4
/* 0046D368 8E100000 */   lw    $s0, ($s0)
/* 0046D36C 8C4B0020 */  lw    $t3, 0x20($v0)
/* 0046D370 568B0020 */  bnel  $s4, $t3, .L0046D3F4
/* 0046D374 8E100000 */   lw    $s0, ($s0)
/* 0046D378 8F998328 */  lw    $t9, %call16(treekilled)($gp)
/* 0046D37C 8C440014 */  lw    $a0, 0x14($v0)
/* 0046D380 0320F809 */  jalr  $t9
/* 0046D384 00000000 */   nop   
/* 0046D388 14400019 */  bnez  $v0, .L0046D3F0
/* 0046D38C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0046D390 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046D394 02202025 */  move  $a0, $s1
/* 0046D398 0320F809 */  jalr  $t9
/* 0046D39C 00000000 */   nop   
/* 0046D3A0 8E0C000C */  lw    $t4, 0xc($s0)
/* 0046D3A4 3C011E00 */  lui   $at, 0x1e00
/* 0046D3A8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0046D3AC 8D830014 */  lw    $v1, 0x14($t4)
/* 0046D3B0 906D0000 */  lbu   $t5, ($v1)
/* 0046D3B4 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0046D3B8 000E7823 */  negu  $t7, $t6
/* 0046D3BC 01E1C024 */  and   $t8, $t7, $at
/* 0046D3C0 01B8C804 */  sllv  $t9, $t8, $t5
/* 0046D3C4 07230007 */  bgezl $t9, .L0046D3E4
/* 0046D3C8 8FAB0048 */   lw    $t3, 0x48($sp)
/* 0046D3CC 94680006 */  lhu   $t0, 6($v1)
/* 0046D3D0 25090001 */  addiu $t1, $t0, 1
/* 0046D3D4 A4690006 */  sh    $t1, 6($v1)
/* 0046D3D8 8E0A000C */  lw    $t2, 0xc($s0)
/* 0046D3DC 8D430014 */  lw    $v1, 0x14($t2)
/* 0046D3E0 8FAB0048 */  lw    $t3, 0x48($sp)
.L0046D3E4:
/* 0046D3E4 24020001 */  li    $v0, 1
/* 0046D3E8 10000005 */  b     .L0046D400
/* 0046D3EC AD630000 */   sw    $v1, ($t3)
.L0046D3F0:
/* 0046D3F0 8E100000 */  lw    $s0, ($s0)
.L0046D3F4:
/* 0046D3F4 5600FFCB */  bnezl $s0, .L0046D324
/* 0046D3F8 920F0009 */   lbu   $t7, 9($s0)
.L0046D3FC:
/* 0046D3FC 00001025 */  move  $v0, $zero
.L0046D400:
/* 0046D400 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0046D404 8FB00014 */  lw    $s0, 0x14($sp)
/* 0046D408 8FB10018 */  lw    $s1, 0x18($sp)
/* 0046D40C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0046D410 8FB30020 */  lw    $s3, 0x20($sp)
/* 0046D414 8FB40024 */  lw    $s4, 0x24($sp)
/* 0046D418 8FB50028 */  lw    $s5, 0x28($sp)
/* 0046D41C 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0046D420 03E00008 */  jr    $ra
/* 0046D424 27BD0038 */   addiu $sp, $sp, 0x38
    .type unroll_check_irst_propcopy, @function
    .size unroll_check_irst_propcopy, .-unroll_check_irst_propcopy
    .end unroll_check_irst_propcopy

glabel oneloopblockexpr
    .ent oneloopblockexpr
    # 0046D428 oneloopblockexpr
    # 0046E77C oneloopblockstmt
    # 004704B0 termination_test
    # 004713E8 loopunroll
    # 004737E0 par_to_str
    # 00473F04 pmov_to_mov
/* 0046D428 3C1C0FBB */  .cpload $t9
/* 0046D42C 279CCE68 */  
/* 0046D430 0399E021 */  
/* 0046D434 27BDFF98 */  addiu $sp, $sp, -0x68
/* 0046D438 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0046D43C AFBC0020 */  sw    $gp, 0x20($sp)
/* 0046D440 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0046D444 AFA5006C */  sw    $a1, 0x6c($sp)
/* 0046D448 90830000 */  lbu   $v1, ($a0)
/* 0046D44C 00808025 */  move  $s0, $a0
/* 0046D450 246EFFFF */  addiu $t6, $v1, -1
/* 0046D454 2DC10008 */  sltiu $at, $t6, 8
/* 0046D458 102004BA */  beqz  $at, .L0046E744
/* 0046D45C 00000000 */   nop   
/* 0046D460 8F818044 */  lw    $at, %got(jtbl_1000DA18)($gp)
/* 0046D464 000E7080 */  sll   $t6, $t6, 2
/* 0046D468 002E0821 */  addu  $at, $at, $t6
/* 0046D46C 8C2EDA18 */  lw    $t6, %lo(jtbl_1000DA18)($at)
/* 0046D470 01DC7021 */  addu  $t6, $t6, $gp
/* 0046D474 01C00008 */  jr    $t6
/* 0046D478 00000000 */   nop   
.L0046D47C:
/* 0046D47C 24010006 */  li    $at, 6
/* 0046D480 14610008 */  bne   $v1, $at, .L0046D4A4
/* 0046D484 00000000 */   nop   
/* 0046D488 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046D48C 8E040024 */  lw    $a0, 0x24($s0)
/* 0046D490 27A50054 */  addiu $a1, $sp, 0x54
/* 0046D494 0320F809 */  jalr  $t9
/* 0046D498 00000000 */   nop   
/* 0046D49C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D4A0 AFA2005C */  sw    $v0, 0x5c($sp)
.L0046D4A4:
/* 0046D4A4 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046D4A8 96040008 */  lhu   $a0, 8($s0)
/* 0046D4AC 02002825 */  move  $a1, $s0
/* 0046D4B0 00003025 */  move  $a2, $zero
/* 0046D4B4 0320F809 */  jalr  $t9
/* 0046D4B8 00003825 */   move  $a3, $zero
/* 0046D4BC AFA20060 */  sw    $v0, 0x60($sp)
/* 0046D4C0 904F0000 */  lbu   $t7, ($v0)
/* 0046D4C4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D4C8 55E00037 */  bnezl $t7, .L0046D5A8
/* 0046D4CC 8FAD0060 */   lw    $t5, 0x60($sp)
/* 0046D4D0 92180000 */  lbu   $t8, ($s0)
/* 0046D4D4 24010006 */  li    $at, 6
/* 0046D4D8 A0580000 */  sb    $t8, ($v0)
/* 0046D4DC 8E080028 */  lw    $t0, 0x28($s0)
/* 0046D4E0 330C00FF */  andi  $t4, $t8, 0xff
/* 0046D4E4 AC480028 */  sw    $t0, 0x28($v0)
/* 0046D4E8 8E19002C */  lw    $t9, 0x2c($s0)
/* 0046D4EC AC400038 */  sw    $zero, 0x38($v0)
/* 0046D4F0 AC59002C */  sw    $t9, 0x2c($v0)
/* 0046D4F4 92090001 */  lbu   $t1, 1($s0)
/* 0046D4F8 A0490001 */  sb    $t1, 1($v0)
/* 0046D4FC 920A0020 */  lbu   $t2, 0x20($s0)
/* 0046D500 A04A0020 */  sb    $t2, 0x20($v0)
/* 0046D504 920B002F */  lbu   $t3, 0x2f($s0)
/* 0046D508 A4400006 */  sh    $zero, 6($v0)
/* 0046D50C AC400030 */  sw    $zero, 0x30($v0)
/* 0046D510 15810007 */  bne   $t4, $at, .L0046D530
/* 0046D514 A04B002F */   sb    $t3, 0x2f($v0)
/* 0046D518 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0046D51C AC40003C */  sw    $zero, 0x3c($v0)
/* 0046D520 A0400004 */  sb    $zero, 4($v0)
/* 0046D524 A0400005 */  sb    $zero, 5($v0)
/* 0046D528 10000002 */  b     .L0046D534
/* 0046D52C AC4D0024 */   sw    $t5, 0x24($v0)
.L0046D530:
/* 0046D530 AC400024 */  sw    $zero, 0x24($v0)
.L0046D534:
/* 0046D534 904E0021 */  lbu   $t6, 0x21($v0)
/* 0046D538 240A0001 */  li    $t2, 1
/* 0046D53C 55C00015 */  bnezl $t6, .L0046D594
/* 0046D540 A04A0002 */   sb    $t2, 2($v0)
/* 0046D544 904F0003 */  lbu   $t7, 3($v0)
/* 0046D548 A0400002 */  sb    $zero, 2($v0)
/* 0046D54C 51E00013 */  beql  $t7, $zero, .L0046D59C
/* 0046D550 920B0023 */   lbu   $t3, 0x23($s0)
/* 0046D554 90580022 */  lbu   $t8, 0x22($v0)
/* 0046D558 57000010 */  bnezl $t8, .L0046D59C
/* 0046D55C 920B0023 */   lbu   $t3, 0x23($s0)
/* 0046D560 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 0046D564 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046D568 8F390000 */  lw    $t9, ($t9)
/* 0046D56C 8F250024 */  lw    $a1, 0x24($t9)
/* 0046D570 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 0046D574 0320F809 */  jalr  $t9
/* 0046D578 00000000 */   nop   
/* 0046D57C 8FA90060 */  lw    $t1, 0x60($sp)
/* 0046D580 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D584 2C480001 */  sltiu $t0, $v0, 1
/* 0046D588 10000003 */  b     .L0046D598
/* 0046D58C A1280003 */   sb    $t0, 3($t1)
/* 0046D590 A04A0002 */  sb    $t2, 2($v0)
.L0046D594:
/* 0046D594 A0400003 */  sb    $zero, 3($v0)
.L0046D598:
/* 0046D598 920B0023 */  lbu   $t3, 0x23($s0)
.L0046D59C:
/* 0046D59C 8FAC0060 */  lw    $t4, 0x60($sp)
/* 0046D5A0 A18B0023 */  sb    $t3, 0x23($t4)
/* 0046D5A4 8FAD0060 */  lw    $t5, 0x60($sp)
.L0046D5A8:
/* 0046D5A8 8DA20038 */  lw    $v0, 0x38($t5)
/* 0046D5AC 10400004 */  beqz  $v0, .L0046D5C0
/* 0046D5B0 00000000 */   nop   
/* 0046D5B4 904E001F */  lbu   $t6, 0x1f($v0)
/* 0046D5B8 55C00029 */  bnezl $t6, .L0046D660
/* 0046D5BC 8FAF0060 */   lw    $t7, 0x60($sp)
.L0046D5C0:
/* 0046D5C0 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0046D5C4 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046D5C8 0320F809 */  jalr  $t9
/* 0046D5CC 00000000 */   nop   
/* 0046D5D0 8FAF0060 */  lw    $t7, 0x60($sp)
/* 0046D5D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D5D8 91F80022 */  lbu   $t8, 0x22($t7)
/* 0046D5DC 57000007 */  bnezl $t8, .L0046D5FC
/* 0046D5E0 8FB90060 */   lw    $t9, 0x60($sp)
/* 0046D5E4 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 0046D5E8 01E02025 */  move  $a0, $t7
/* 0046D5EC 0320F809 */  jalr  $t9
/* 0046D5F0 00000000 */   nop   
/* 0046D5F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D5F8 8FB90060 */  lw    $t9, 0x60($sp)
.L0046D5FC:
/* 0046D5FC 24010001 */  li    $at, 1
/* 0046D600 97280006 */  lhu   $t0, 6($t9)
/* 0046D604 1501003B */  bne   $t0, $at, .L0046D6F4
/* 0046D608 00000000 */   nop   
/* 0046D60C 9329002E */  lbu   $t1, 0x2e($t9)
/* 0046D610 24010005 */  li    $at, 5
/* 0046D614 03202025 */  move  $a0, $t9
/* 0046D618 312A0007 */  andi  $t2, $t1, 7
/* 0046D61C 11410035 */  beq   $t2, $at, .L0046D6F4
/* 0046D620 00000000 */   nop   
/* 0046D624 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0046D628 0320F809 */  jalr  $t9
/* 0046D62C 00000000 */   nop   
/* 0046D630 8FAB0060 */  lw    $t3, 0x60($sp)
/* 0046D634 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D638 916C0022 */  lbu   $t4, 0x22($t3)
/* 0046D63C 1180002D */  beqz  $t4, .L0046D6F4
/* 0046D640 00000000 */   nop   
/* 0046D644 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0046D648 240D0001 */  li    $t5, 1
/* 0046D64C 8DCE0000 */  lw    $t6, ($t6)
/* 0046D650 8DD80028 */  lw    $t8, 0x28($t6)
/* 0046D654 10000027 */  b     .L0046D6F4
/* 0046D658 A30D0008 */   sb    $t5, 8($t8)
/* 0046D65C 8FAF0060 */  lw    $t7, 0x60($sp)
.L0046D660:
/* 0046D660 A040001D */  sb    $zero, 0x1d($v0)
/* 0046D664 95E80006 */  lhu   $t0, 6($t7)
/* 0046D668 1500001D */  bnez  $t0, .L0046D6E0
/* 0046D66C 00000000 */   nop   
/* 0046D670 91E90022 */  lbu   $t1, 0x22($t7)
/* 0046D674 55200007 */  bnezl $t1, .L0046D694
/* 0046D678 8FAA0060 */   lw    $t2, 0x60($sp)
/* 0046D67C 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 0046D680 01E02025 */  move  $a0, $t7
/* 0046D684 0320F809 */  jalr  $t9
/* 0046D688 00000000 */   nop   
/* 0046D68C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D690 8FAA0060 */  lw    $t2, 0x60($sp)
.L0046D694:
/* 0046D694 24010005 */  li    $at, 5
/* 0046D698 9159002E */  lbu   $t9, 0x2e($t2)
/* 0046D69C 332B0007 */  andi  $t3, $t9, 7
/* 0046D6A0 1161000F */  beq   $t3, $at, .L0046D6E0
/* 0046D6A4 00000000 */   nop   
/* 0046D6A8 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0046D6AC 01402025 */  move  $a0, $t2
/* 0046D6B0 0320F809 */  jalr  $t9
/* 0046D6B4 00000000 */   nop   
/* 0046D6B8 8FAC0060 */  lw    $t4, 0x60($sp)
/* 0046D6BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D6C0 918E0022 */  lbu   $t6, 0x22($t4)
/* 0046D6C4 11C00006 */  beqz  $t6, .L0046D6E0
/* 0046D6C8 00000000 */   nop   
/* 0046D6CC 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 0046D6D0 240D0001 */  li    $t5, 1
/* 0046D6D4 8F180000 */  lw    $t8, ($t8)
/* 0046D6D8 8F080028 */  lw    $t0, 0x28($t8)
/* 0046D6DC A10D0008 */  sb    $t5, 8($t0)
.L0046D6E0:
/* 0046D6E0 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0046D6E4 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046D6E8 0320F809 */  jalr  $t9
/* 0046D6EC 00000000 */   nop   
/* 0046D6F0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0046D6F4:
/* 0046D6F4 8F898C78 */  lw     $t1, %got(i_var_inx)($gp)
/* 0046D6F8 8E0F0014 */  lw    $t7, 0x14($s0)
/* 0046D6FC 8FAA006C */  lw    $t2, 0x6c($sp)
/* 0046D700 8D290000 */  lw    $t1, ($t1)
/* 0046D704 152F0006 */  bne   $t1, $t7, .L0046D720
/* 0046D708 00000000 */   nop   
/* 0046D70C 8F998C80 */  lw     $t9, %got(incr_amount)($gp)
/* 0046D710 8FAB006C */  lw    $t3, 0x6c($sp)
/* 0046D714 8F390000 */  lw    $t9, ($t9)
/* 0046D718 10000412 */  b     .L0046E764
/* 0046D71C AD790000 */   sw    $t9, ($t3)
.L0046D720:
/* 0046D720 10000410 */  b     .L0046E764
/* 0046D724 AD400000 */   sw    $zero, ($t2)
.L0046D728:
/* 0046D728 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046D72C 8E040034 */  lw    $a0, 0x34($s0)
/* 0046D730 27A50054 */  addiu $a1, $sp, 0x54
/* 0046D734 0320F809 */  jalr  $t9
/* 0046D738 00000000 */   nop   
/* 0046D73C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D740 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046D744 96040008 */  lhu   $a0, 8($s0)
/* 0046D748 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046D74C 02002825 */  move  $a1, $s0
/* 0046D750 00403025 */  move  $a2, $v0
/* 0046D754 0320F809 */  jalr  $t9
/* 0046D758 00003825 */   move  $a3, $zero
/* 0046D75C AFA20060 */  sw    $v0, 0x60($sp)
/* 0046D760 904C0000 */  lbu   $t4, ($v0)
/* 0046D764 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D768 240E0005 */  li    $t6, 5
/* 0046D76C 15800014 */  bnez  $t4, .L0046D7C0
/* 0046D770 00000000 */   nop   
/* 0046D774 A04E0000 */  sb    $t6, ($v0)
/* 0046D778 A0400001 */  sb    $zero, 1($v0)
/* 0046D77C 8E0D002C */  lw    $t5, 0x2c($s0)
/* 0046D780 24190001 */  li    $t9, 1
/* 0046D784 AC4D002C */  sw    $t5, 0x2c($v0)
/* 0046D788 8E180030 */  lw    $t8, 0x30($s0)
/* 0046D78C AC580030 */  sw    $t8, 0x30($v0)
/* 0046D790 8E080024 */  lw    $t0, 0x24($s0)
/* 0046D794 AC480024 */  sw    $t0, 0x24($v0)
/* 0046D798 8E090020 */  lw    $t1, 0x20($s0)
/* 0046D79C AC400018 */  sw    $zero, 0x18($v0)
/* 0046D7A0 AC490020 */  sw    $t1, 0x20($v0)
/* 0046D7A4 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0046D7A8 A4590006 */  sh    $t9, 6($v0)
/* 0046D7AC A0400004 */  sb    $zero, 4($v0)
/* 0046D7B0 AC400038 */  sw    $zero, 0x38($v0)
/* 0046D7B4 A0400005 */  sb    $zero, 5($v0)
/* 0046D7B8 10000006 */  b     .L0046D7D4
/* 0046D7BC AC4F0034 */   sw    $t7, 0x34($v0)
.L0046D7C0:
/* 0046D7C0 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0046D7C4 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046D7C8 0320F809 */  jalr  $t9
/* 0046D7CC 00000000 */   nop   
/* 0046D7D0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0046D7D4:
/* 0046D7D4 8FAB006C */  lw    $t3, 0x6c($sp)
/* 0046D7D8 100003E2 */  b     .L0046E764
/* 0046D7DC AD600000 */   sw    $zero, ($t3)
.L0046D7E0:
/* 0046D7E0 8FAA006C */  lw    $t2, 0x6c($sp)
/* 0046D7E4 02001025 */  move  $v0, $s0
/* 0046D7E8 100003DF */  b     .L0046E768
/* 0046D7EC AD400000 */   sw    $zero, ($t2)
.L0046D7F0:
/* 0046D7F0 92070020 */  lbu   $a3, 0x20($s0)
/* 0046D7F4 10000367 */  b     .L0046E594
/* 0046D7F8 00E01025 */   move  $v0, $a3
.L0046D7FC:
/* 0046D7FC 2CEC0080 */  sltiu $t4, $a3, 0x80
.L0046D800:
/* 0046D800 11800009 */  beqz  $t4, .L0046D828
/* 0046D804 00000000 */   nop   
/* 0046D808 8F8D8044 */  lw    $t5, %got(D_10011018)($gp)
/* 0046D80C 00077143 */  sra   $t6, $a3, 5
/* 0046D810 000EC080 */  sll   $t8, $t6, 2
/* 0046D814 25AD1018 */  addiu $t5, %lo(D_10011018) # addiu $t5, $t5, 0x1018
/* 0046D818 01B84021 */  addu  $t0, $t5, $t8
/* 0046D81C 8D090000 */  lw    $t1, ($t0)
/* 0046D820 00E97804 */  sllv  $t7, $t1, $a3
/* 0046D824 29EC0000 */  slti  $t4, $t7, 0
.L0046D828:
/* 0046D828 11800056 */  beqz  $t4, .L0046D984
/* 0046D82C 00000000 */   nop   
/* 0046D830 920B0001 */  lbu   $t3, 1($s0)
/* 0046D834 3C018A80 */  lui   $at, 0x8a80
/* 0046D838 2D6A0020 */  sltiu $t2, $t3, 0x20
/* 0046D83C 000A7023 */  negu  $t6, $t2
/* 0046D840 01C16824 */  and   $t5, $t6, $at
/* 0046D844 016DC004 */  sllv  $t8, $t5, $t3
/* 0046D848 0701004E */  bgez  $t8, .L0046D984
/* 0046D84C 00000000 */   nop   
/* 0046D850 8E040024 */  lw    $a0, 0x24($s0)
/* 0046D854 24020002 */  li    $v0, 2
/* 0046D858 24010001 */  li    $at, 1
/* 0046D85C 90880000 */  lbu   $t0, ($a0)
/* 0046D860 54480011 */  bnel  $v0, $t0, .L0046D8A8
/* 0046D864 8E0E0028 */   lw    $t6, 0x28($s0)
/* 0046D868 54E1000F */  bnel  $a3, $at, .L0046D8A8
/* 0046D86C 8E0E0028 */   lw    $t6, 0x28($s0)
/* 0046D870 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046D874 8E040028 */  lw    $a0, 0x28($s0)
/* 0046D878 27A50050 */  addiu $a1, $sp, 0x50
/* 0046D87C 0320F809 */  jalr  $t9
/* 0046D880 00000000 */   nop   
/* 0046D884 8E090024 */  lw    $t1, 0x24($s0)
/* 0046D888 8FB90050 */  lw    $t9, 0x50($sp)
/* 0046D88C 8FAA006C */  lw    $t2, 0x6c($sp)
/* 0046D890 8D2F0020 */  lw    $t7, 0x20($t1)
/* 0046D894 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D898 01F96021 */  addu  $t4, $t7, $t9
/* 0046D89C 100003B2 */  b     .L0046E768
/* 0046D8A0 AD4C0000 */   sw    $t4, ($t2)
/* 0046D8A4 8E0E0028 */  lw    $t6, 0x28($s0)
.L0046D8A8:
/* 0046D8A8 91CD0000 */  lbu   $t5, ($t6)
/* 0046D8AC 144D0019 */  bne   $v0, $t5, .L0046D914
/* 0046D8B0 00000000 */   nop   
/* 0046D8B4 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046D8B8 27A50054 */  addiu $a1, $sp, 0x54
/* 0046D8BC 0320F809 */  jalr  $t9
/* 0046D8C0 00000000 */   nop   
/* 0046D8C4 920B0020 */  lbu   $t3, 0x20($s0)
/* 0046D8C8 24010001 */  li    $at, 1
/* 0046D8CC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D8D0 15610008 */  bne   $t3, $at, .L0046D8F4
/* 0046D8D4 00401825 */   move  $v1, $v0
/* 0046D8D8 8E180028 */  lw    $t8, 0x28($s0)
/* 0046D8DC 8FA90054 */  lw    $t1, 0x54($sp)
/* 0046D8E0 8FB9006C */  lw    $t9, 0x6c($sp)
/* 0046D8E4 8F080020 */  lw    $t0, 0x20($t8)
/* 0046D8E8 01097821 */  addu  $t7, $t0, $t1
/* 0046D8EC 1000039E */  b     .L0046E768
/* 0046D8F0 AF2F0000 */   sw    $t7, ($t9)
.L0046D8F4:
/* 0046D8F4 8E0A0028 */  lw    $t2, 0x28($s0)
/* 0046D8F8 8FAC0054 */  lw    $t4, 0x54($sp)
/* 0046D8FC 8FAB006C */  lw    $t3, 0x6c($sp)
/* 0046D900 8D4E0020 */  lw    $t6, 0x20($t2)
/* 0046D904 018E6823 */  subu  $t5, $t4, $t6
/* 0046D908 AD6D0000 */  sw    $t5, ($t3)
/* 0046D90C 10000396 */  b     .L0046E768
/* 0046D910 00601025 */   move  $v0, $v1
.L0046D914:
/* 0046D914 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046D918 27A50054 */  addiu $a1, $sp, 0x54
/* 0046D91C 0320F809 */  jalr  $t9
/* 0046D920 00000000 */   nop   
/* 0046D924 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D928 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046D92C 8E040028 */  lw    $a0, 0x28($s0)
/* 0046D930 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046D934 27A50050 */  addiu $a1, $sp, 0x50
/* 0046D938 0320F809 */  jalr  $t9
/* 0046D93C 00000000 */   nop   
/* 0046D940 92070020 */  lbu   $a3, 0x20($s0)
/* 0046D944 24010001 */  li    $at, 1
/* 0046D948 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D94C 14E10007 */  bne   $a3, $at, .L0046D96C
/* 0046D950 AFA20058 */   sw    $v0, 0x58($sp)
/* 0046D954 8FB80054 */  lw    $t8, 0x54($sp)
/* 0046D958 8FA80050 */  lw    $t0, 0x50($sp)
/* 0046D95C 8FAF006C */  lw    $t7, 0x6c($sp)
/* 0046D960 03084821 */  addu  $t1, $t8, $t0
/* 0046D964 1000006E */  b     .L0046DB20
/* 0046D968 ADE90000 */   sw    $t1, ($t7)
.L0046D96C:
/* 0046D96C 8FB90054 */  lw    $t9, 0x54($sp)
/* 0046D970 8FAA0050 */  lw    $t2, 0x50($sp)
/* 0046D974 8FAE006C */  lw    $t6, 0x6c($sp)
/* 0046D978 032A6023 */  subu  $t4, $t9, $t2
/* 0046D97C 10000068 */  b     .L0046DB20
/* 0046D980 ADCC0000 */   sw    $t4, ($t6)
.L0046D984:
/* 0046D984 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046D988 8E040024 */  lw    $a0, 0x24($s0)
/* 0046D98C 27A50054 */  addiu $a1, $sp, 0x54
/* 0046D990 0320F809 */  jalr  $t9
/* 0046D994 00000000 */   nop   
/* 0046D998 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D99C AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046D9A0 8E040028 */  lw    $a0, 0x28($s0)
/* 0046D9A4 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046D9A8 27A50050 */  addiu $a1, $sp, 0x50
/* 0046D9AC 0320F809 */  jalr  $t9
/* 0046D9B0 00000000 */   nop   
/* 0046D9B4 92070020 */  lbu   $a3, 0x20($s0)
/* 0046D9B8 2401005B */  li    $at, 91
/* 0046D9BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046D9C0 14E1002B */  bne   $a3, $at, .L0046DA70
/* 0046D9C4 AFA20058 */   sw    $v0, 0x58($sp)
/* 0046D9C8 920D0001 */  lbu   $t5, 1($s0)
/* 0046D9CC 3C010280 */  lui   $at, 0x280
/* 0046D9D0 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0046D9D4 2DAB0020 */  sltiu $t3, $t5, 0x20
/* 0046D9D8 000BC023 */  negu  $t8, $t3
/* 0046D9DC 03014024 */  and   $t0, $t8, $at
/* 0046D9E0 01A84804 */  sllv  $t1, $t0, $t5
/* 0046D9E4 05230023 */  bgezl $t1, .L0046DA74
/* 0046D9E8 24E8FFE0 */   addiu $t0, $a3, -0x20
/* 0046D9EC 11E00006 */  beqz  $t7, .L0046DA08
/* 0046D9F0 8FAC0050 */   lw    $t4, 0x50($sp)
/* 0046D9F4 8E190028 */  lw    $t9, 0x28($s0)
/* 0046D9F8 24020002 */  li    $v0, 2
/* 0046D9FC 932A0000 */  lbu   $t2, ($t9)
/* 0046DA00 504A0008 */  beql  $v0, $t2, .L0046DA24
/* 0046DA04 8FB80054 */   lw    $t8, 0x54($sp)
.L0046DA08:
/* 0046DA08 11800019 */  beqz  $t4, .L0046DA70
/* 0046DA0C 24020002 */   li    $v0, 2
/* 0046DA10 8E0E0024 */  lw    $t6, 0x24($s0)
/* 0046DA14 91CB0000 */  lbu   $t3, ($t6)
/* 0046DA18 544B0016 */  bnel  $v0, $t3, .L0046DA74
/* 0046DA1C 24E8FFE0 */   addiu $t0, $a3, -0x20
/* 0046DA20 8FB80054 */  lw    $t8, 0x54($sp)
.L0046DA24:
/* 0046DA24 5300000A */  beql  $t8, $zero, .L0046DA50
/* 0046DA28 8E0A0024 */   lw    $t2, 0x24($s0)
/* 0046DA2C 8E080028 */  lw    $t0, 0x28($s0)
/* 0046DA30 8FAF006C */  lw    $t7, 0x6c($sp)
/* 0046DA34 8D0D0020 */  lw    $t5, 0x20($t0)
/* 0046DA38 030D0019 */  multu $t8, $t5
/* 0046DA3C 00004812 */  mflo  $t1
/* 0046DA40 ADE90000 */  sw    $t1, ($t7)
/* 0046DA44 10000036 */  b     .L0046DB20
/* 0046DA48 00000000 */   nop   
/* 0046DA4C 8E0A0024 */  lw    $t2, 0x24($s0)
.L0046DA50:
/* 0046DA50 8FB90050 */  lw    $t9, 0x50($sp)
/* 0046DA54 8FAB006C */  lw    $t3, 0x6c($sp)
/* 0046DA58 8D4C0020 */  lw    $t4, 0x20($t2)
/* 0046DA5C 032C0019 */  multu $t9, $t4
/* 0046DA60 00007012 */  mflo  $t6
/* 0046DA64 AD6E0000 */  sw    $t6, ($t3)
/* 0046DA68 1000002D */  b     .L0046DB20
/* 0046DA6C 00000000 */   nop   
.L0046DA70:
/* 0046DA70 24E8FFE0 */  addiu $t0, $a3, -0x20
.L0046DA74:
/* 0046DA74 2D180040 */  sltiu $t8, $t0, 0x40
/* 0046DA78 13000009 */  beqz  $t8, .L0046DAA0
/* 0046DA7C 00000000 */   nop   
/* 0046DA80 8F8F8044 */  lw    $t7, %got(D_10011010)($gp)
/* 0046DA84 00086943 */  sra   $t5, $t0, 5
/* 0046DA88 000D4880 */  sll   $t1, $t5, 2
/* 0046DA8C 25EF1010 */  addiu $t7, %lo(D_10011010) # addiu $t7, $t7, 0x1010
/* 0046DA90 01E95021 */  addu  $t2, $t7, $t1
/* 0046DA94 8D590000 */  lw    $t9, ($t2)
/* 0046DA98 01196004 */  sllv  $t4, $t9, $t0
/* 0046DA9C 29980000 */  slti  $t8, $t4, 0
.L0046DAA0:
/* 0046DAA0 1300000E */  beqz  $t8, .L0046DADC
/* 0046DAA4 00000000 */   nop   
/* 0046DAA8 920B0001 */  lbu   $t3, 1($s0)
/* 0046DAAC 24010006 */  li    $at, 6
/* 0046DAB0 8FAD0050 */  lw    $t5, 0x50($sp)
/* 0046DAB4 15610009 */  bne   $t3, $at, .L0046DADC
/* 0046DAB8 00000000 */   nop   
/* 0046DABC 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046DAC0 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0046DAC4 8FA40058 */  lw    $a0, 0x58($sp)
/* 0046DAC8 0320F809 */  jalr  $t9
/* 0046DACC 01AF2823 */   subu  $a1, $t5, $t7
/* 0046DAD0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DAD4 1000000F */  b     .L0046DB14
/* 0046DAD8 AFA20058 */   sw    $v0, 0x58($sp)
.L0046DADC:
/* 0046DADC 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046DAE0 8FA4005C */  lw    $a0, 0x5c($sp)
/* 0046DAE4 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046DAE8 0320F809 */  jalr  $t9
/* 0046DAEC 00000000 */   nop   
/* 0046DAF0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DAF4 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046DAF8 8FA40058 */  lw    $a0, 0x58($sp)
/* 0046DAFC 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046DB00 8FA50050 */  lw    $a1, 0x50($sp)
/* 0046DB04 0320F809 */  jalr  $t9
/* 0046DB08 00000000 */   nop   
/* 0046DB0C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DB10 AFA20058 */  sw    $v0, 0x58($sp)
.L0046DB14:
/* 0046DB14 8FA9006C */  lw    $t1, 0x6c($sp)
/* 0046DB18 AD200000 */  sw    $zero, ($t1)
/* 0046DB1C 92070020 */  lbu   $a3, 0x20($s0)
.L0046DB20:
/* 0046DB20 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0046DB24 00E02025 */  move  $a0, $a3
/* 0046DB28 8FA5005C */  lw    $a1, 0x5c($sp)
/* 0046DB2C 0320F809 */  jalr  $t9
/* 0046DB30 8FA60058 */   lw    $a2, 0x58($sp)
/* 0046DB34 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DB38 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046DB3C 02002825 */  move  $a1, $s0
/* 0046DB40 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046DB44 8FA6005C */  lw    $a2, 0x5c($sp)
/* 0046DB48 8FA70058 */  lw    $a3, 0x58($sp)
/* 0046DB4C 0320F809 */  jalr  $t9
/* 0046DB50 00000000 */   nop   
/* 0046DB54 AFA20060 */  sw    $v0, 0x60($sp)
/* 0046DB58 904A0000 */  lbu   $t2, ($v0)
/* 0046DB5C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DB60 24190004 */  li    $t9, 4
/* 0046DB64 15400037 */  bnez  $t2, .L0046DC44
/* 0046DB68 2401003A */   li    $at, 58
/* 0046DB6C A0590000 */  sb    $t9, ($v0)
/* 0046DB70 92080001 */  lbu   $t0, 1($s0)
/* 0046DB74 A0480001 */  sb    $t0, 1($v0)
/* 0046DB78 920C0023 */  lbu   $t4, 0x23($s0)
/* 0046DB7C A04C0023 */  sb    $t4, 0x23($v0)
/* 0046DB80 920E0020 */  lbu   $t6, 0x20($s0)
/* 0046DB84 A04E0020 */  sb    $t6, 0x20($v0)
/* 0046DB88 8FB8005C */  lw    $t8, 0x5c($sp)
/* 0046DB8C 31C300FF */  andi  $v1, $t6, 0xff
/* 0046DB90 2C6D00A0 */  sltiu $t5, $v1, 0xa0
/* 0046DB94 AC580024 */  sw    $t8, 0x24($v0)
/* 0046DB98 8FAB0058 */  lw    $t3, 0x58($sp)
/* 0046DB9C 11A00009 */  beqz  $t5, .L0046DBC4
/* 0046DBA0 AC4B0028 */   sw    $t3, 0x28($v0)
/* 0046DBA4 8F8A8044 */  lw    $t2, %got(D_10010FFC)($gp)
/* 0046DBA8 00037943 */  sra   $t7, $v1, 5
/* 0046DBAC 000F4880 */  sll   $t1, $t7, 2
/* 0046DBB0 254A0FFC */  addiu $t2, %lo(D_10010FFC) # addiu $t2, $t2, 0xffc
/* 0046DBB4 0149C821 */  addu  $t9, $t2, $t1
/* 0046DBB8 8F280000 */  lw    $t0, ($t9)
/* 0046DBBC 00686004 */  sllv  $t4, $t0, $v1
/* 0046DBC0 298D0000 */  slti  $t5, $t4, 0
.L0046DBC4:
/* 0046DBC4 11A00004 */  beqz  $t5, .L0046DBD8
/* 0046DBC8 240A0001 */   li    $t2, 1
/* 0046DBCC 8E18002C */  lw    $t8, 0x2c($s0)
/* 0046DBD0 90430020 */  lbu   $v1, 0x20($v0)
/* 0046DBD4 AC58002C */  sw    $t8, 0x2c($v0)
.L0046DBD8:
/* 0046DBD8 54610005 */  bnel  $v1, $at, .L0046DBF0
/* 0046DBDC 920F003E */   lbu   $t7, 0x3e($s0)
/* 0046DBE0 960B003C */  lhu   $t3, 0x3c($s0)
/* 0046DBE4 90430020 */  lbu   $v1, 0x20($v0)
/* 0046DBE8 A44B003C */  sh    $t3, 0x3c($v0)
/* 0046DBEC 920F003E */  lbu   $t7, 0x3e($s0)
.L0046DBF0:
/* 0046DBF0 2469FFE0 */  addiu $t1, $v1, -0x20
/* 0046DBF4 2D390040 */  sltiu $t9, $t1, 0x40
/* 0046DBF8 A44A0006 */  sh    $t2, 6($v0)
/* 0046DBFC AC400030 */  sw    $zero, 0x30($v0)
/* 0046DC00 A0400005 */  sb    $zero, 5($v0)
/* 0046DC04 A0400004 */  sb    $zero, 4($v0)
/* 0046DC08 13200009 */  beqz  $t9, .L0046DC30
/* 0046DC0C A04F003E */   sb    $t7, 0x3e($v0)
/* 0046DC10 8F8E8044 */  lw    $t6, %got(D_10011010)($gp)
/* 0046DC14 00094143 */  sra   $t0, $t1, 5
/* 0046DC18 00086080 */  sll   $t4, $t0, 2
/* 0046DC1C 25CE1010 */  addiu $t6, %lo(D_10011010) # addiu $t6, $t6, 0x1010
/* 0046DC20 01CC6821 */  addu  $t5, $t6, $t4
/* 0046DC24 8DB80000 */  lw    $t8, ($t5)
/* 0046DC28 01385804 */  sllv  $t3, $t8, $t1
/* 0046DC2C 29790000 */  slti  $t9, $t3, 0
.L0046DC30:
/* 0046DC30 532002CD */  beql  $t9, $zero, .L0046E768
/* 0046DC34 8FA20060 */   lw    $v0, 0x60($sp)
/* 0046DC38 AC400038 */  sw    $zero, 0x38($v0)
/* 0046DC3C 100002C9 */  b     .L0046E764
/* 0046DC40 AC40003C */   sw    $zero, 0x3c($v0)
.L0046DC44:
/* 0046DC44 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0046DC48 27A40060 */  addiu $a0, $sp, 0x60
/* 0046DC4C 0320F809 */  jalr  $t9
/* 0046DC50 00000000 */   nop   
/* 0046DC54 100002C3 */  b     .L0046E764
/* 0046DC58 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046DC5C:
/* 0046DC5C 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046DC60 8E040024 */  lw    $a0, 0x24($s0)
/* 0046DC64 27A50054 */  addiu $a1, $sp, 0x54
/* 0046DC68 0320F809 */  jalr  $t9
/* 0046DC6C 00000000 */   nop   
/* 0046DC70 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DC74 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046DC78 8E040028 */  lw    $a0, 0x28($s0)
/* 0046DC7C 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046DC80 27A50050 */  addiu $a1, $sp, 0x50
/* 0046DC84 0320F809 */  jalr  $t9
/* 0046DC88 00000000 */   nop   
/* 0046DC8C 8FAA0050 */  lw    $t2, 0x50($sp)
/* 0046DC90 8E08002C */  lw    $t0, 0x2c($s0)
/* 0046DC94 8FAC0054 */  lw    $t4, 0x54($sp)
/* 0046DC98 8FB8006C */  lw    $t8, 0x6c($sp)
/* 0046DC9C 01480019 */  multu $t2, $t0
/* 0046DCA0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DCA4 AFA20058 */  sw    $v0, 0x58($sp)
/* 0046DCA8 24040041 */  li    $a0, 65
/* 0046DCAC 00403025 */  move  $a2, $v0
/* 0046DCB0 00007012 */  mflo  $t6
/* 0046DCB4 018E6821 */  addu  $t5, $t4, $t6
/* 0046DCB8 AF0D0000 */  sw    $t5, ($t8)
/* 0046DCBC 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0046DCC0 8FA5005C */  lw    $a1, 0x5c($sp)
/* 0046DCC4 0320F809 */  jalr  $t9
/* 0046DCC8 00000000 */   nop   
/* 0046DCCC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DCD0 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046DCD4 02002825 */  move  $a1, $s0
/* 0046DCD8 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046DCDC 8FA6005C */  lw    $a2, 0x5c($sp)
/* 0046DCE0 8FA70058 */  lw    $a3, 0x58($sp)
/* 0046DCE4 0320F809 */  jalr  $t9
/* 0046DCE8 00000000 */   nop   
/* 0046DCEC AFA20060 */  sw    $v0, 0x60($sp)
/* 0046DCF0 90490000 */  lbu   $t1, ($v0)
/* 0046DCF4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DCF8 240B0004 */  li    $t3, 4
/* 0046DCFC 15200015 */  bnez  $t1, .L0046DD54
/* 0046DD00 00000000 */   nop   
/* 0046DD04 A04B0000 */  sb    $t3, ($v0)
/* 0046DD08 920F0001 */  lbu   $t7, 1($s0)
/* 0046DD0C 240E0001 */  li    $t6, 1
/* 0046DD10 A04F0001 */  sb    $t7, 1($v0)
/* 0046DD14 92190023 */  lbu   $t9, 0x23($s0)
/* 0046DD18 A0590023 */  sb    $t9, 0x23($v0)
/* 0046DD1C 920A0020 */  lbu   $t2, 0x20($s0)
/* 0046DD20 A04A0020 */  sb    $t2, 0x20($v0)
/* 0046DD24 8FA8005C */  lw    $t0, 0x5c($sp)
/* 0046DD28 AC480024 */  sw    $t0, 0x24($v0)
/* 0046DD2C 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0046DD30 A44E0006 */  sh    $t6, 6($v0)
/* 0046DD34 A040003E */  sb    $zero, 0x3e($v0)
/* 0046DD38 AC4C0028 */  sw    $t4, 0x28($v0)
/* 0046DD3C 8E0D002C */  lw    $t5, 0x2c($s0)
/* 0046DD40 AC400030 */  sw    $zero, 0x30($v0)
/* 0046DD44 A0400005 */  sb    $zero, 5($v0)
/* 0046DD48 A0400004 */  sb    $zero, 4($v0)
/* 0046DD4C 10000285 */  b     .L0046E764
/* 0046DD50 AC4D002C */   sw    $t5, 0x2c($v0)
.L0046DD54:
/* 0046DD54 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0046DD58 27A40060 */  addiu $a0, $sp, 0x60
/* 0046DD5C 0320F809 */  jalr  $t9
/* 0046DD60 00000000 */   nop   
/* 0046DD64 1000027F */  b     .L0046E764
/* 0046DD68 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046DD6C:
/* 0046DD6C 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046DD70 8E040024 */  lw    $a0, 0x24($s0)
/* 0046DD74 27A50054 */  addiu $a1, $sp, 0x54
/* 0046DD78 0320F809 */  jalr  $t9
/* 0046DD7C 00000000 */   nop   
/* 0046DD80 92070020 */  lbu   $a3, 0x20($s0)
/* 0046DD84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DD88 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046DD8C 2CF80040 */  sltiu $t8, $a3, 0x40
/* 0046DD90 13000009 */  beqz  $t8, .L0046DDB8
/* 0046DD94 24010037 */   li    $at, 55
/* 0046DD98 8F8F8044 */  lw    $t7, %got(D_10010FF4)($gp)
/* 0046DD9C 00074943 */  sra   $t1, $a3, 5
/* 0046DDA0 00095880 */  sll   $t3, $t1, 2
/* 0046DDA4 25EF0FF4 */  addiu $t7, %lo(D_10010FF4) # addiu $t7, $t7, 0xff4
/* 0046DDA8 01EBC821 */  addu  $t9, $t7, $t3
/* 0046DDAC 8F2A0000 */  lw    $t2, ($t9)
/* 0046DDB0 00EA4004 */  sllv  $t0, $t2, $a3
/* 0046DDB4 29180000 */  slti  $t8, $t0, 0
.L0046DDB8:
/* 0046DDB8 1700000B */  bnez  $t8, .L0046DDE8
/* 0046DDBC 00000000 */   nop   
/* 0046DDC0 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046DDC4 8FA4005C */  lw    $a0, 0x5c($sp)
/* 0046DDC8 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046DDCC 0320F809 */  jalr  $t9
/* 0046DDD0 00000000 */   nop   
/* 0046DDD4 8FAE006C */  lw    $t6, 0x6c($sp)
/* 0046DDD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DDDC AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046DDE0 1000000A */  b     .L0046DE0C
/* 0046DDE4 ADC00000 */   sw    $zero, ($t6)
.L0046DDE8:
/* 0046DDE8 14E10005 */  bne   $a3, $at, .L0046DE00
/* 0046DDEC 8FAF0054 */   lw    $t7, 0x54($sp)
/* 0046DDF0 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0046DDF4 8FA9006C */  lw    $t1, 0x6c($sp)
/* 0046DDF8 10000004 */  b     .L0046DE0C
/* 0046DDFC AD2D0000 */   sw    $t5, ($t1)
.L0046DE00:
/* 0046DE00 8FB9006C */  lw    $t9, 0x6c($sp)
/* 0046DE04 000F5823 */  negu  $t3, $t7
/* 0046DE08 AF2B0000 */  sw    $t3, ($t9)
.L0046DE0C:
/* 0046DE0C 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046DE10 96040008 */  lhu   $a0, 8($s0)
/* 0046DE14 02002825 */  move  $a1, $s0
/* 0046DE18 8FA6005C */  lw    $a2, 0x5c($sp)
/* 0046DE1C 0320F809 */  jalr  $t9
/* 0046DE20 00003825 */   move  $a3, $zero
/* 0046DE24 AFA20060 */  sw    $v0, 0x60($sp)
/* 0046DE28 904A0000 */  lbu   $t2, ($v0)
/* 0046DE2C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DE30 24080004 */  li    $t0, 4
/* 0046DE34 15400031 */  bnez  $t2, .L0046DEFC
/* 0046DE38 00000000 */   nop   
/* 0046DE3C A0480000 */  sb    $t0, ($v0)
/* 0046DE40 920C0001 */  lbu   $t4, 1($s0)
/* 0046DE44 A04C0001 */  sb    $t4, 1($v0)
/* 0046DE48 92180023 */  lbu   $t8, 0x23($s0)
/* 0046DE4C A0580023 */  sb    $t8, 0x23($v0)
/* 0046DE50 92070020 */  lbu   $a3, 0x20($s0)
/* 0046DE54 2CEE00A0 */  sltiu $t6, $a3, 0xa0
/* 0046DE58 11C00009 */  beqz  $t6, .L0046DE80
/* 0046DE5C 00000000 */   nop   
/* 0046DE60 8F8F8044 */  lw    $t7, %got(D_10010FE0)($gp)
/* 0046DE64 00076943 */  sra   $t5, $a3, 5
/* 0046DE68 000D4880 */  sll   $t1, $t5, 2
/* 0046DE6C 25EF0FE0 */  addiu $t7, %lo(D_10010FE0) # addiu $t7, $t7, 0xfe0
/* 0046DE70 01E95821 */  addu  $t3, $t7, $t1
/* 0046DE74 8D790000 */  lw    $t9, ($t3)
/* 0046DE78 00F95004 */  sllv  $t2, $t9, $a3
/* 0046DE7C 294E0000 */  slti  $t6, $t2, 0
.L0046DE80:
/* 0046DE80 11C00004 */  beqz  $t6, .L0046DE94
/* 0046DE84 240D0001 */   li    $t5, 1
/* 0046DE88 920C0038 */  lbu   $t4, 0x38($s0)
/* 0046DE8C A04C0038 */  sb    $t4, 0x38($v0)
/* 0046DE90 92070020 */  lbu   $a3, 0x20($s0)
.L0046DE94:
/* 0046DE94 A0470020 */  sb    $a3, 0x20($v0)
/* 0046DE98 8FB8005C */  lw    $t8, 0x5c($sp)
/* 0046DE9C 30EF00FF */  andi  $t7, $a3, 0xff
/* 0046DEA0 2DE90080 */  sltiu $t1, $t7, 0x80
/* 0046DEA4 AC400028 */  sw    $zero, 0x28($v0)
/* 0046DEA8 A44D0006 */  sh    $t5, 6($v0)
/* 0046DEAC 11200009 */  beqz  $t1, .L0046DED4
/* 0046DEB0 AC580024 */   sw    $t8, 0x24($v0)
/* 0046DEB4 8F8A8044 */  lw    $t2, %got(D_10010FD0)($gp)
/* 0046DEB8 000F5943 */  sra   $t3, $t7, 5
/* 0046DEBC 000BC880 */  sll   $t9, $t3, 2
/* 0046DEC0 254A0FD0 */  addiu $t2, %lo(D_10010FD0) # addiu $t2, $t2, 0xfd0
/* 0046DEC4 01594021 */  addu  $t0, $t2, $t9
/* 0046DEC8 8D0E0000 */  lw    $t6, ($t0)
/* 0046DECC 01EE6004 */  sllv  $t4, $t6, $t7
/* 0046DED0 29890000 */  slti  $t1, $t4, 0
.L0046DED4:
/* 0046DED4 51200004 */  beql  $t1, $zero, .L0046DEE8
/* 0046DED8 920B003E */   lbu   $t3, 0x3e($s0)
/* 0046DEDC 8E0D002C */  lw    $t5, 0x2c($s0)
/* 0046DEE0 AC4D002C */  sw    $t5, 0x2c($v0)
/* 0046DEE4 920B003E */  lbu   $t3, 0x3e($s0)
.L0046DEE8:
/* 0046DEE8 AC400030 */  sw    $zero, 0x30($v0)
/* 0046DEEC A0400005 */  sb    $zero, 5($v0)
/* 0046DEF0 A0400004 */  sb    $zero, 4($v0)
/* 0046DEF4 1000021B */  b     .L0046E764
/* 0046DEF8 A04B003E */   sb    $t3, 0x3e($v0)
.L0046DEFC:
/* 0046DEFC 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0046DF00 27A40060 */  addiu $a0, $sp, 0x60
/* 0046DF04 0320F809 */  jalr  $t9
/* 0046DF08 00000000 */   nop   
/* 0046DF0C 10000215 */  b     .L0046E764
/* 0046DF10 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046DF14:
/* 0046DF14 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046DF18 8E040024 */  lw    $a0, 0x24($s0)
/* 0046DF1C 27A50054 */  addiu $a1, $sp, 0x54
/* 0046DF20 0320F809 */  jalr  $t9
/* 0046DF24 00000000 */   nop   
/* 0046DF28 8FAA006C */  lw    $t2, 0x6c($sp)
/* 0046DF2C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DF30 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046DF34 AD400000 */  sw    $zero, ($t2)
/* 0046DF38 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046DF3C 96040008 */  lhu   $a0, 8($s0)
/* 0046DF40 02002825 */  move  $a1, $s0
/* 0046DF44 00403025 */  move  $a2, $v0
/* 0046DF48 0320F809 */  jalr  $t9
/* 0046DF4C 00003825 */   move  $a3, $zero
/* 0046DF50 AFA20060 */  sw    $v0, 0x60($sp)
/* 0046DF54 90590000 */  lbu   $t9, ($v0)
/* 0046DF58 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DF5C 24080004 */  li    $t0, 4
/* 0046DF60 17200016 */  bnez  $t9, .L0046DFBC
/* 0046DF64 00000000 */   nop   
/* 0046DF68 A0480000 */  sb    $t0, ($v0)
/* 0046DF6C 920E0001 */  lbu   $t6, 1($s0)
/* 0046DF70 240B0001 */  li    $t3, 1
/* 0046DF74 A04E0001 */  sb    $t6, 1($v0)
/* 0046DF78 920F0023 */  lbu   $t7, 0x23($s0)
/* 0046DF7C A04F0023 */  sb    $t7, 0x23($v0)
/* 0046DF80 920C0020 */  lbu   $t4, 0x20($s0)
/* 0046DF84 A04C0020 */  sb    $t4, 0x20($v0)
/* 0046DF88 8FB8005C */  lw    $t8, 0x5c($sp)
/* 0046DF8C AC400028 */  sw    $zero, 0x28($v0)
/* 0046DF90 AC580024 */  sw    $t8, 0x24($v0)
/* 0046DF94 8E09002C */  lw    $t1, 0x2c($s0)
/* 0046DF98 AC49002C */  sw    $t1, 0x2c($v0)
/* 0046DF9C 960D003C */  lhu   $t5, 0x3c($s0)
/* 0046DFA0 A44B0006 */  sh    $t3, 6($v0)
/* 0046DFA4 A040003E */  sb    $zero, 0x3e($v0)
/* 0046DFA8 AC400030 */  sw    $zero, 0x30($v0)
/* 0046DFAC A0400005 */  sb    $zero, 5($v0)
/* 0046DFB0 A0400004 */  sb    $zero, 4($v0)
/* 0046DFB4 100001EB */  b     .L0046E764
/* 0046DFB8 A44D003C */   sh    $t5, 0x3c($v0)
.L0046DFBC:
/* 0046DFBC 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0046DFC0 27A40060 */  addiu $a0, $sp, 0x60
/* 0046DFC4 0320F809 */  jalr  $t9
/* 0046DFC8 00000000 */   nop   
/* 0046DFCC 100001E5 */  b     .L0046E764
/* 0046DFD0 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046DFD4:
/* 0046DFD4 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046DFD8 8E040024 */  lw    $a0, 0x24($s0)
/* 0046DFDC 27A50054 */  addiu $a1, $sp, 0x54
/* 0046DFE0 0320F809 */  jalr  $t9
/* 0046DFE4 00000000 */   nop   
/* 0046DFE8 8FAA0054 */  lw    $t2, 0x54($sp)
/* 0046DFEC 8E19002C */  lw    $t9, 0x2c($s0)
/* 0046DFF0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046DFF4 00402025 */  move  $a0, $v0
/* 0046DFF8 01594021 */  addu  $t0, $t2, $t9
/* 0046DFFC 8F998574 */  lw    $t9, %call16(unroll_resetincr_mod)($gp)
/* 0046E000 AFA80054 */  sw    $t0, 0x54($sp)
/* 0046E004 27A50054 */  addiu $a1, $sp, 0x54
/* 0046E008 0320F809 */  jalr  $t9
/* 0046E00C 00000000 */   nop   
/* 0046E010 8FAE006C */  lw    $t6, 0x6c($sp)
/* 0046E014 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E018 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046E01C ADC00000 */  sw    $zero, ($t6)
/* 0046E020 920F0020 */  lbu   $t7, 0x20($s0)
/* 0046E024 24010036 */  li    $at, 54
/* 0046E028 15E10012 */  bne   $t7, $at, .L0046E074
/* 0046E02C 00000000 */   nop   
/* 0046E030 944C0006 */  lhu   $t4, 6($v0)
/* 0046E034 2D810002 */  sltiu $at, $t4, 2
/* 0046E038 1420000E */  bnez  $at, .L0046E074
/* 0046E03C 00000000 */   nop   
/* 0046E040 9607003C */  lhu   $a3, 0x3c($s0)
/* 0046E044 8FA4005C */  lw    $a0, 0x5c($sp)
/* 0046E048 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046E04C 28E10004 */  slti  $at, $a3, 4
/* 0046E050 14200008 */  bnez  $at, .L0046E074
/* 0046E054 00000000 */   nop   
/* 0046E058 8F998578 */  lw    $t9, %call16(unroll_check_istr_propcopy)($gp)
/* 0046E05C 27B80060 */  addiu $t8, $sp, 0x60
/* 0046E060 AFB80010 */  sw    $t8, 0x10($sp)
/* 0046E064 0320F809 */  jalr  $t9
/* 0046E068 92060001 */   lbu   $a2, 1($s0)
/* 0046E06C 144001BD */  bnez  $v0, .L0046E764
/* 0046E070 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046E074:
/* 0046E074 8F998654 */  lw    $t9, %call16(opvalhash)($gp)
/* 0046E078 8E09002C */  lw    $t1, 0x2c($s0)
/* 0046E07C 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0046E080 92040020 */  lbu   $a0, 0x20($s0)
/* 0046E084 8FA5005C */  lw    $a1, 0x5c($sp)
/* 0046E088 8FA60054 */  lw    $a2, 0x54($sp)
/* 0046E08C AFA9004C */  sw    $t1, 0x4c($sp)
/* 0046E090 0320F809 */  jalr  $t9
/* 0046E094 AE0D002C */   sw    $t5, 0x2c($s0)
/* 0046E098 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E09C 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046E0A0 02002825 */  move  $a1, $s0
/* 0046E0A4 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046E0A8 8FA6005C */  lw    $a2, 0x5c($sp)
/* 0046E0AC 00003825 */  move  $a3, $zero
/* 0046E0B0 0320F809 */  jalr  $t9
/* 0046E0B4 00000000 */   nop   
/* 0046E0B8 8FAB004C */  lw    $t3, 0x4c($sp)
/* 0046E0BC AFA20060 */  sw    $v0, 0x60($sp)
/* 0046E0C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E0C4 AE0B002C */  sw    $t3, 0x2c($s0)
/* 0046E0C8 904A0000 */  lbu   $t2, ($v0)
/* 0046E0CC 24190004 */  li    $t9, 4
/* 0046E0D0 15400047 */  bnez  $t2, .L0046E1F0
/* 0046E0D4 00000000 */   nop   
/* 0046E0D8 A0590000 */  sb    $t9, ($v0)
/* 0046E0DC 92080001 */  lbu   $t0, 1($s0)
/* 0046E0E0 24180001 */  li    $t8, 1
/* 0046E0E4 A0480001 */  sb    $t0, 1($v0)
/* 0046E0E8 920E0023 */  lbu   $t6, 0x23($s0)
/* 0046E0EC A04E0023 */  sb    $t6, 0x23($v0)
/* 0046E0F0 920F0020 */  lbu   $t7, 0x20($s0)
/* 0046E0F4 A04F0020 */  sb    $t7, 0x20($v0)
/* 0046E0F8 8FAC005C */  lw    $t4, 0x5c($sp)
/* 0046E0FC AC400028 */  sw    $zero, 0x28($v0)
/* 0046E100 A4580006 */  sh    $t8, 6($v0)
/* 0046E104 A040003E */  sb    $zero, 0x3e($v0)
/* 0046E108 AC4C0024 */  sw    $t4, 0x24($v0)
/* 0046E10C 8FA90054 */  lw    $t1, 0x54($sp)
/* 0046E110 AC49002C */  sw    $t1, 0x2c($v0)
/* 0046E114 960D003C */  lhu   $t5, 0x3c($s0)
/* 0046E118 A44D003C */  sh    $t5, 0x3c($v0)
/* 0046E11C 920B003F */  lbu   $t3, 0x3f($s0)
/* 0046E120 A04B003F */  sb    $t3, 0x3f($v0)
/* 0046E124 8E0A0038 */  lw    $t2, 0x38($s0)
/* 0046E128 AC400030 */  sw    $zero, 0x30($v0)
/* 0046E12C A0400005 */  sb    $zero, 5($v0)
/* 0046E130 A0400004 */  sb    $zero, 4($v0)
/* 0046E134 AC4A0038 */  sw    $t2, 0x38($v0)
/* 0046E138 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0046E13C AFA20040 */  sw    $v0, 0x40($sp)
/* 0046E140 8FA4005C */  lw    $a0, 0x5c($sp)
/* 0046E144 0320F809 */  jalr  $t9
/* 0046E148 00000000 */   nop   
/* 0046E14C 8FA30040 */  lw    $v1, 0x40($sp)
/* 0046E150 2401000E */  li    $at, 14
/* 0046E154 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E158 90790001 */  lbu   $t9, 1($v1)
/* 0046E15C 24180001 */  li    $t8, 1
/* 0046E160 AC620034 */  sw    $v0, 0x34($v1)
/* 0046E164 53210016 */  beql  $t9, $at, .L0046E1C0
/* 0046E168 A0780002 */   sb    $t8, 2($v1)
/* 0046E16C 90680020 */  lbu   $t0, 0x20($v1)
/* 0046E170 24010033 */  li    $at, 51
/* 0046E174 51010012 */  beql  $t0, $at, .L0046E1C0
/* 0046E178 A0780002 */   sb    $t8, 2($v1)
/* 0046E17C 906E0003 */  lbu   $t6, 3($v1)
/* 0046E180 A0600002 */  sb    $zero, 2($v1)
/* 0046E184 11C0000F */  beqz  $t6, .L0046E1C4
/* 0046E188 00000000 */   nop   
/* 0046E18C 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 0046E190 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 0046E194 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046E198 8DEF0000 */  lw    $t7, ($t7)
/* 0046E19C 8DE50024 */  lw    $a1, 0x24($t7)
/* 0046E1A0 0320F809 */  jalr  $t9
/* 0046E1A4 AFA30040 */   sw    $v1, 0x40($sp)
/* 0046E1A8 8FA30040 */  lw    $v1, 0x40($sp)
/* 0046E1AC 2C4C0001 */  sltiu $t4, $v0, 1
/* 0046E1B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E1B4 10000003 */  b     .L0046E1C4
/* 0046E1B8 A06C0003 */   sb    $t4, 3($v1)
/* 0046E1BC A0780002 */  sb    $t8, 2($v1)
.L0046E1C0:
/* 0046E1C0 A0600003 */  sb    $zero, 3($v1)
.L0046E1C4:
/* 0046E1C4 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0046E1C8 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046E1CC 0320F809 */  jalr  $t9
/* 0046E1D0 00000000 */   nop   
/* 0046E1D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E1D8 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046E1DC 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 0046E1E0 0320F809 */  jalr  $t9
/* 0046E1E4 00000000 */   nop   
/* 0046E1E8 1000015E */  b     .L0046E764
/* 0046E1EC 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046E1F0:
/* 0046E1F0 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0046E1F4 27A40060 */  addiu $a0, $sp, 0x60
/* 0046E1F8 0320F809 */  jalr  $t9
/* 0046E1FC 00000000 */   nop   
/* 0046E200 10000158 */  b     .L0046E764
/* 0046E204 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046E208:
/* 0046E208 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046E20C 8E040024 */  lw    $a0, 0x24($s0)
/* 0046E210 27A50054 */  addiu $a1, $sp, 0x54
/* 0046E214 0320F809 */  jalr  $t9
/* 0046E218 00000000 */   nop   
/* 0046E21C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E220 00402025 */  move  $a0, $v0
/* 0046E224 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046E228 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046E22C 0320F809 */  jalr  $t9
/* 0046E230 00000000 */   nop   
/* 0046E234 8FA9006C */  lw    $t1, 0x6c($sp)
/* 0046E238 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E23C AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046E240 AD200000 */  sw    $zero, ($t1)
/* 0046E244 8F998654 */  lw    $t9, %call16(opvalhash)($gp)
/* 0046E248 8E06002C */  lw    $a2, 0x2c($s0)
/* 0046E24C 92040020 */  lbu   $a0, 0x20($s0)
/* 0046E250 0320F809 */  jalr  $t9
/* 0046E254 00402825 */   move  $a1, $v0
/* 0046E258 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E25C 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0046E260 02002825 */  move  $a1, $s0
/* 0046E264 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046E268 8FA6005C */  lw    $a2, 0x5c($sp)
/* 0046E26C 00003825 */  move  $a3, $zero
/* 0046E270 0320F809 */  jalr  $t9
/* 0046E274 00000000 */   nop   
/* 0046E278 AFA20060 */  sw    $v0, 0x60($sp)
/* 0046E27C 904D0000 */  lbu   $t5, ($v0)
/* 0046E280 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E284 8FA4005C */  lw    $a0, 0x5c($sp)
/* 0046E288 15A00046 */  bnez  $t5, .L0046E3A4
/* 0046E28C 240B0004 */   li    $t3, 4
/* 0046E290 A04B0000 */  sb    $t3, ($v0)
/* 0046E294 920A0001 */  lbu   $t2, 1($s0)
/* 0046E298 240E0001 */  li    $t6, 1
/* 0046E29C A04A0001 */  sb    $t2, 1($v0)
/* 0046E2A0 92190023 */  lbu   $t9, 0x23($s0)
/* 0046E2A4 A0590023 */  sb    $t9, 0x23($v0)
/* 0046E2A8 92080020 */  lbu   $t0, 0x20($s0)
/* 0046E2AC AC440024 */  sw    $a0, 0x24($v0)
/* 0046E2B0 AC400028 */  sw    $zero, 0x28($v0)
/* 0046E2B4 A44E0006 */  sh    $t6, 6($v0)
/* 0046E2B8 A040003E */  sb    $zero, 0x3e($v0)
/* 0046E2BC A0480020 */  sb    $t0, 0x20($v0)
/* 0046E2C0 8E0F002C */  lw    $t7, 0x2c($s0)
/* 0046E2C4 AC4F002C */  sw    $t7, 0x2c($v0)
/* 0046E2C8 960C003C */  lhu   $t4, 0x3c($s0)
/* 0046E2CC A44C003C */  sh    $t4, 0x3c($v0)
/* 0046E2D0 9218003F */  lbu   $t8, 0x3f($s0)
/* 0046E2D4 A058003F */  sb    $t8, 0x3f($v0)
/* 0046E2D8 8E090038 */  lw    $t1, 0x38($s0)
/* 0046E2DC AC400030 */  sw    $zero, 0x30($v0)
/* 0046E2E0 A0400005 */  sb    $zero, 5($v0)
/* 0046E2E4 A0400004 */  sb    $zero, 4($v0)
/* 0046E2E8 AC490038 */  sw    $t1, 0x38($v0)
/* 0046E2EC 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0046E2F0 AFA20040 */  sw    $v0, 0x40($sp)
/* 0046E2F4 0320F809 */  jalr  $t9
/* 0046E2F8 00000000 */   nop   
/* 0046E2FC 8FA30040 */  lw    $v1, 0x40($sp)
/* 0046E300 2401000E */  li    $at, 14
/* 0046E304 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E308 906D0001 */  lbu   $t5, 1($v1)
/* 0046E30C 240E0001 */  li    $t6, 1
/* 0046E310 AC620034 */  sw    $v0, 0x34($v1)
/* 0046E314 51A10017 */  beql  $t5, $at, .L0046E374
/* 0046E318 A06E0002 */   sb    $t6, 2($v1)
/* 0046E31C 906B0020 */  lbu   $t3, 0x20($v1)
/* 0046E320 24010033 */  li    $at, 51
/* 0046E324 51610013 */  beql  $t3, $at, .L0046E374
/* 0046E328 A06E0002 */   sb    $t6, 2($v1)
/* 0046E32C 906A0003 */  lbu   $t2, 3($v1)
/* 0046E330 A0600002 */  sb    $zero, 2($v1)
/* 0046E334 11400010 */  beqz  $t2, .L0046E378
/* 0046E338 00000000 */   nop   
/* 0046E33C 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 0046E340 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046E344 8F390000 */  lw    $t9, ($t9)
/* 0046E348 8F250024 */  lw    $a1, 0x24($t9)
/* 0046E34C 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 0046E350 AFA30040 */  sw    $v1, 0x40($sp)
/* 0046E354 0320F809 */  jalr  $t9
/* 0046E358 00000000 */   nop   
/* 0046E35C 8FA30040 */  lw    $v1, 0x40($sp)
/* 0046E360 2C480001 */  sltiu $t0, $v0, 1
/* 0046E364 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E368 10000003 */  b     .L0046E378
/* 0046E36C A0680003 */   sb    $t0, 3($v1)
/* 0046E370 A06E0002 */  sb    $t6, 2($v1)
.L0046E374:
/* 0046E374 A0600003 */  sb    $zero, 3($v1)
.L0046E378:
/* 0046E378 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0046E37C 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046E380 0320F809 */  jalr  $t9
/* 0046E384 00000000 */   nop   
/* 0046E388 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E38C 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046E390 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 0046E394 0320F809 */  jalr  $t9
/* 0046E398 00000000 */   nop   
/* 0046E39C 100000F1 */  b     .L0046E764
/* 0046E3A0 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046E3A4:
/* 0046E3A4 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0046E3A8 27A40060 */  addiu $a0, $sp, 0x60
/* 0046E3AC 0320F809 */  jalr  $t9
/* 0046E3B0 00000000 */   nop   
/* 0046E3B4 100000EB */  b     .L0046E764
/* 0046E3B8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046E3BC:
/* 0046E3BC 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046E3C0 8E040024 */  lw    $a0, 0x24($s0)
/* 0046E3C4 27A50054 */  addiu $a1, $sp, 0x54
/* 0046E3C8 0320F809 */  jalr  $t9
/* 0046E3CC 00000000 */   nop   
/* 0046E3D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E3D4 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046E3D8 8E040028 */  lw    $a0, 0x28($s0)
/* 0046E3DC 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046E3E0 27A50050 */  addiu $a1, $sp, 0x50
/* 0046E3E4 0320F809 */  jalr  $t9
/* 0046E3E8 00000000 */   nop   
/* 0046E3EC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E3F0 AFA20058 */  sw    $v0, 0x58($sp)
/* 0046E3F4 8FA4005C */  lw    $a0, 0x5c($sp)
/* 0046E3F8 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046E3FC 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046E400 0320F809 */  jalr  $t9
/* 0046E404 00000000 */   nop   
/* 0046E408 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E40C AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046E410 8FA40058 */  lw    $a0, 0x58($sp)
/* 0046E414 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046E418 8FA50050 */  lw    $a1, 0x50($sp)
/* 0046E41C 0320F809 */  jalr  $t9
/* 0046E420 00000000 */   nop   
/* 0046E424 8FAF006C */  lw    $t7, 0x6c($sp)
/* 0046E428 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E42C AFA20058 */  sw    $v0, 0x58($sp)
/* 0046E430 ADE00000 */  sw    $zero, ($t7)
/* 0046E434 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046E438 8FA6005C */  lw    $a2, 0x5c($sp)
/* 0046E43C 96040008 */  lhu   $a0, 8($s0)
/* 0046E440 02002825 */  move  $a1, $s0
/* 0046E444 0320F809 */  jalr  $t9
/* 0046E448 00403825 */   move  $a3, $v0
/* 0046E44C AFA20060 */  sw    $v0, 0x60($sp)
/* 0046E450 904C0000 */  lbu   $t4, ($v0)
/* 0046E454 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E458 24180004 */  li    $t8, 4
/* 0046E45C 1580003E */  bnez  $t4, .L0046E558
/* 0046E460 24090009 */   li    $t1, 9
/* 0046E464 240D0006 */  li    $t5, 6
/* 0046E468 A0580000 */  sb    $t8, ($v0)
/* 0046E46C A0490001 */  sb    $t1, 1($v0)
/* 0046E470 A04D0023 */  sb    $t5, 0x23($v0)
/* 0046E474 920B0020 */  lbu   $t3, 0x20($s0)
/* 0046E478 24080001 */  li    $t0, 1
/* 0046E47C A04B0020 */  sb    $t3, 0x20($v0)
/* 0046E480 8FAA005C */  lw    $t2, 0x5c($sp)
/* 0046E484 AC4A0024 */  sw    $t2, 0x24($v0)
/* 0046E488 8FB90058 */  lw    $t9, 0x58($sp)
/* 0046E48C A4480006 */  sh    $t0, 6($v0)
/* 0046E490 A040003E */  sb    $zero, 0x3e($v0)
/* 0046E494 AC590028 */  sw    $t9, 0x28($v0)
/* 0046E498 8E0E002C */  lw    $t6, 0x2c($s0)
/* 0046E49C AC4E002C */  sw    $t6, 0x2c($v0)
/* 0046E4A0 960F003C */  lhu   $t7, 0x3c($s0)
/* 0046E4A4 A0400002 */  sb    $zero, 2($v0)
/* 0046E4A8 AC400030 */  sw    $zero, 0x30($v0)
/* 0046E4AC A0400005 */  sb    $zero, 5($v0)
/* 0046E4B0 A0400004 */  sb    $zero, 4($v0)
/* 0046E4B4 A44F003C */  sh    $t7, 0x3c($v0)
/* 0046E4B8 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0046E4BC AFA20040 */  sw    $v0, 0x40($sp)
/* 0046E4C0 8FA4005C */  lw    $a0, 0x5c($sp)
/* 0046E4C4 0320F809 */  jalr  $t9
/* 0046E4C8 00000000 */   nop   
/* 0046E4CC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E4D0 8FA30040 */  lw    $v1, 0x40($sp)
/* 0046E4D4 8FA40058 */  lw    $a0, 0x58($sp)
/* 0046E4D8 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0046E4DC AC620034 */  sw    $v0, 0x34($v1)
/* 0046E4E0 0320F809 */  jalr  $t9
/* 0046E4E4 00000000 */   nop   
/* 0046E4E8 8FA30040 */  lw    $v1, 0x40($sp)
/* 0046E4EC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E4F0 906C0003 */  lbu   $t4, 3($v1)
/* 0046E4F4 AC620038 */  sw    $v0, 0x38($v1)
/* 0046E4F8 1180000C */  beqz  $t4, .L0046E52C
/* 0046E4FC 00000000 */   nop   
/* 0046E500 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 0046E504 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 0046E508 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046E50C 8F180000 */  lw    $t8, ($t8)
/* 0046E510 8F050024 */  lw    $a1, 0x24($t8)
/* 0046E514 0320F809 */  jalr  $t9
/* 0046E518 AFA30040 */   sw    $v1, 0x40($sp)
/* 0046E51C 8FA30040 */  lw    $v1, 0x40($sp)
/* 0046E520 2C490001 */  sltiu $t1, $v0, 1
/* 0046E524 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E528 A0690003 */  sb    $t1, 3($v1)
.L0046E52C:
/* 0046E52C 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0046E530 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046E534 0320F809 */  jalr  $t9
/* 0046E538 00000000 */   nop   
/* 0046E53C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E540 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046E544 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 0046E548 0320F809 */  jalr  $t9
/* 0046E54C 00000000 */   nop   
/* 0046E550 10000084 */  b     .L0046E764
/* 0046E554 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046E558:
/* 0046E558 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0046E55C 27A40060 */  addiu $a0, $sp, 0x60
/* 0046E560 0320F809 */  jalr  $t9
/* 0046E564 00000000 */   nop   
/* 0046E568 1000007E */  b     .L0046E764
/* 0046E56C 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046E570:
/* 0046E570 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0046E574 8F868044 */  lw    $a2, %got(RO_1000D8C6)($gp)
/* 0046E578 24040001 */  li    $a0, 1
/* 0046E57C 2405028E */  li    $a1, 654
/* 0046E580 2407000A */  li    $a3, 10
/* 0046E584 0320F809 */  jalr  $t9
/* 0046E588 24C6D8C6 */   addiu $a2, %lo(RO_1000D8C6) # addiu $a2, $a2, -0x273a
/* 0046E58C 10000075 */  b     .L0046E764
/* 0046E590 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046E594:
/* 0046E594 2C410063 */  sltiu $at, $v0, 0x63
/* 0046E598 14200026 */  bnez  $at, .L0046E634
/* 0046E59C 2C41007E */   sltiu $at, $v0, 0x7e
/* 0046E5A0 14200015 */  bnez  $at, .L0046E5F8
/* 0046E5A4 244BFF92 */   addiu $t3, $v0, -0x6e
/* 0046E5A8 2C410094 */  sltiu $at, $v0, 0x94
/* 0046E5AC 14200006 */  bnez  $at, .L0046E5C8
/* 0046E5B0 244DFF7A */   addiu $t5, $v0, -0x86
/* 0046E5B4 2401009A */  li    $at, 154
/* 0046E5B8 1041FF13 */  beq   $v0, $at, .L0046E208
/* 0046E5BC 00000000 */   nop   
/* 0046E5C0 1000FFEB */  b     .L0046E570
/* 0046E5C4 00000000 */   nop   
.L0046E5C8:
/* 0046E5C8 2C41008E */  sltiu $at, $v0, 0x8e
/* 0046E5CC 10200058 */  beqz  $at, .L0046E730
/* 0046E5D0 2DA10008 */   sltiu $at, $t5, 8
/* 0046E5D4 1020FFE6 */  beqz  $at, .L0046E570
/* 0046E5D8 00000000 */   nop   
/* 0046E5DC 8F818044 */  lw    $at, %got(jtbl_1000D9F8)($gp)
/* 0046E5E0 000D6880 */  sll   $t5, $t5, 2
/* 0046E5E4 002D0821 */  addu  $at, $at, $t5
/* 0046E5E8 8C2DD9F8 */  lw    $t5, %lo(jtbl_1000D9F8)($at)
/* 0046E5EC 01BC6821 */  addu  $t5, $t5, $gp
/* 0046E5F0 01A00008 */  jr    $t5
/* 0046E5F4 00000000 */   nop   
.L0046E5F8:
/* 0046E5F8 24010069 */  li    $at, 105
/* 0046E5FC 5041FC80 */  beql  $v0, $at, .L0046D800
/* 0046E600 2CEC0080 */   sltiu $t4, $a3, 0x80
/* 0046E604 2C410078 */  sltiu $at, $v0, 0x78
/* 0046E608 10200044 */  beqz  $at, .L0046E71C
/* 0046E60C 2D61000A */   sltiu $at, $t3, 0xa
/* 0046E610 1020FFD7 */  beqz  $at, .L0046E570
/* 0046E614 00000000 */   nop   
/* 0046E618 8F818044 */  lw    $at, %got(jtbl_1000D9D0)($gp)
/* 0046E61C 000B5880 */  sll   $t3, $t3, 2
/* 0046E620 002B0821 */  addu  $at, $at, $t3
/* 0046E624 8C2BD9D0 */  lw    $t3, %lo(jtbl_1000D9D0)($at)
/* 0046E628 017C5821 */  addu  $t3, $t3, $gp
/* 0046E62C 01600008 */  jr    $t3
/* 0046E630 00000000 */   nop   
.L0046E634:
/* 0046E634 2C410024 */  sltiu $at, $v0, 0x24
/* 0046E638 14200010 */  bnez  $at, .L0046E67C
/* 0046E63C 2C41003D */   sltiu $at, $v0, 0x3d
/* 0046E640 1420002C */  bnez  $at, .L0046E6F4
/* 0046E644 244EFFD8 */   addiu $t6, $v0, -0x28
/* 0046E648 24010041 */  li    $at, 65
/* 0046E64C 1041FD83 */  beq   $v0, $at, .L0046DC5C
/* 0046E650 244AFFB3 */   addiu $t2, $v0, -0x4d
/* 0046E654 2D410016 */  sltiu $at, $t2, 0x16
/* 0046E658 1020FFC5 */  beqz  $at, .L0046E570
/* 0046E65C 00000000 */   nop   
/* 0046E660 8F818044 */  lw    $at, %got(jtbl_1000D978)($gp)
/* 0046E664 000A5080 */  sll   $t2, $t2, 2
/* 0046E668 002A0821 */  addu  $at, $at, $t2
/* 0046E66C 8C2AD978 */  lw    $t2, %lo(jtbl_1000D978)($at)
/* 0046E670 015C5021 */  addu  $t2, $t2, $gp
/* 0046E674 01400008 */  jr    $t2
/* 0046E678 00000000 */   nop   
.L0046E67C:
/* 0046E67C 2C41000F */  sltiu $at, $v0, 0xf
/* 0046E680 1420000D */  bnez  $at, .L0046E6B8
/* 0046E684 2C41001E */   sltiu $at, $v0, 0x1e
/* 0046E688 10200015 */  beqz  $at, .L0046E6E0
/* 0046E68C 2459FFE8 */   addiu $t9, $v0, -0x18
/* 0046E690 2F210006 */  sltiu $at, $t9, 6
/* 0046E694 1020FFB6 */  beqz  $at, .L0046E570
/* 0046E698 00000000 */   nop   
/* 0046E69C 8F818044 */  lw    $at, %got(jtbl_1000D90C)($gp)
/* 0046E6A0 0019C880 */  sll   $t9, $t9, 2
/* 0046E6A4 00390821 */  addu  $at, $at, $t9
/* 0046E6A8 8C39D90C */  lw    $t9, %lo(jtbl_1000D90C)($at)
/* 0046E6AC 033CC821 */  addu  $t9, $t9, $gp
/* 0046E6B0 03200008 */  jr    $t9
/* 0046E6B4 00000000 */   nop   
.L0046E6B8:
/* 0046E6B8 2C41000F */  sltiu $at, $v0, 0xf
/* 0046E6BC 1020FFAC */  beqz  $at, .L0046E570
/* 0046E6C0 00000000 */   nop   
/* 0046E6C4 8F818044 */  lw    $at, %got(jtbl_1000D8D0)($gp)
/* 0046E6C8 00024080 */  sll   $t0, $v0, 2
/* 0046E6CC 00280821 */  addu  $at, $at, $t0
/* 0046E6D0 8C28D8D0 */  lw    $t0, %lo(jtbl_1000D8D0)($at)
/* 0046E6D4 011C4021 */  addu  $t0, $t0, $gp
/* 0046E6D8 01000008 */  jr    $t0
/* 0046E6DC 00000000 */   nop   
.L0046E6E0:
/* 0046E6E0 24010023 */  li    $at, 35
/* 0046E6E4 5041FC46 */  beql  $v0, $at, .L0046D800
/* 0046E6E8 2CEC0080 */   sltiu $t4, $a3, 0x80
/* 0046E6EC 1000FFA0 */  b     .L0046E570
/* 0046E6F0 00000000 */   nop   
.L0046E6F4:
/* 0046E6F4 2DC10015 */  sltiu $at, $t6, 0x15
/* 0046E6F8 1020FF9D */  beqz  $at, .L0046E570
/* 0046E6FC 00000000 */   nop   
/* 0046E700 8F818044 */  lw    $at, %got(jtbl_1000D924)($gp)
/* 0046E704 000E7080 */  sll   $t6, $t6, 2
/* 0046E708 002E0821 */  addu  $at, $at, $t6
/* 0046E70C 8C2ED924 */  lw    $t6, %lo(jtbl_1000D924)($at)
/* 0046E710 01DC7021 */  addu  $t6, $t6, $gp
/* 0046E714 01C00008 */  jr    $t6
/* 0046E718 00000000 */   nop   
.L0046E71C:
/* 0046E71C 2401007D */  li    $at, 125
/* 0046E720 5041FC37 */  beql  $v0, $at, .L0046D800
/* 0046E724 2CEC0080 */   sltiu $t4, $a3, 0x80
/* 0046E728 1000FF91 */  b     .L0046E570
/* 0046E72C 00000000 */   nop   
.L0046E730:
/* 0046E730 24010093 */  li    $at, 147
/* 0046E734 1041FEB4 */  beq   $v0, $at, .L0046E208
/* 0046E738 00000000 */   nop   
/* 0046E73C 1000FF8C */  b     .L0046E570
/* 0046E740 00000000 */   nop   
.L0046E744:
/* 0046E744 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0046E748 8F868044 */  lw    $a2, %got(RO_1000D8BC)($gp)
/* 0046E74C 24040001 */  li    $a0, 1
/* 0046E750 24050237 */  li    $a1, 567
/* 0046E754 2407000A */  li    $a3, 10
/* 0046E758 0320F809 */  jalr  $t9
/* 0046E75C 24C6D8BC */   addiu $a2, %lo(RO_1000D8BC) # addiu $a2, $a2, -0x2744
/* 0046E760 8FBC0020 */  lw    $gp, 0x20($sp)
.L0046E764:
/* 0046E764 8FA20060 */  lw    $v0, 0x60($sp)
.L0046E768:
/* 0046E768 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0046E76C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0046E770 27BD0068 */  addiu $sp, $sp, 0x68
/* 0046E774 03E00008 */  jr    $ra
/* 0046E778 00000000 */   nop   
    .type oneloopblockexpr, @function
    .size oneloopblockexpr, .-oneloopblockexpr
    .end oneloopblockexpr

glabel oneloopblockstmt
    .ent oneloopblockstmt
    # 00470048 pre_loopblock
    # 00470248 post_loopblock
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
/* 0046E77C 3C1C0FBB */  .cpload $t9
/* 0046E780 279CBB14 */  
/* 0046E784 0399E021 */  
/* 0046E788 27BDFF98 */  addiu $sp, $sp, -0x68
/* 0046E78C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0046E790 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0046E794 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0046E798 AFB10018 */  sw    $s1, 0x18($sp)
/* 0046E79C AFB00014 */  sw    $s0, 0x14($sp)
/* 0046E7A0 90900000 */  lbu   $s0, ($a0)
/* 0046E7A4 00809025 */  move  $s2, $a0
/* 0046E7A8 260EFFE0 */  addiu $t6, $s0, -0x20
/* 0046E7AC 2DCF0080 */  sltiu $t7, $t6, 0x80
/* 0046E7B0 11E00009 */  beqz  $t7, .L0046E7D8
/* 0046E7B4 00000000 */   nop   
/* 0046E7B8 8F888044 */  lw    $t0, %got(D_10011028)($gp)
/* 0046E7BC 000EC143 */  sra   $t8, $t6, 5
/* 0046E7C0 0018C880 */  sll   $t9, $t8, 2
/* 0046E7C4 25081028 */  addiu $t0, %lo(D_10011028) # addiu $t0, $t0, 0x1028
/* 0046E7C8 01194821 */  addu  $t1, $t0, $t9
/* 0046E7CC 8D2A0000 */  lw    $t2, ($t1)
/* 0046E7D0 01CA5804 */  sllv  $t3, $t2, $t6
/* 0046E7D4 296F0000 */  slti  $t7, $t3, 0
.L0046E7D8:
/* 0046E7D8 15E00007 */  bnez  $t7, .L0046E7F8
/* 0046E7DC 00000000 */   nop   
/* 0046E7E0 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 0046E7E4 02002025 */  move  $a0, $s0
/* 0046E7E8 0320F809 */  jalr  $t9
/* 0046E7EC 00000000 */   nop   
/* 0046E7F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E7F4 92500000 */  lbu   $s0, ($s2)
.L0046E7F8:
/* 0046E7F8 100003E4 */  b     .L0046F78C
/* 0046E7FC 320200FF */   andi  $v0, $s0, 0xff
.L0046E800:
/* 0046E800 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046E804 8E4D0004 */  lw    $t5, 4($s2)
/* 0046E808 27A50054 */  addiu $a1, $sp, 0x54
/* 0046E80C 0320F809 */  jalr  $t9
/* 0046E810 8DA40034 */   lw    $a0, 0x34($t5)
/* 0046E814 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E818 00402025 */  move  $a0, $v0
/* 0046E81C 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046E820 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046E824 0320F809 */  jalr  $t9
/* 0046E828 00000000 */   nop   
/* 0046E82C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E830 8E450004 */  lw    $a1, 4($s2)
/* 0046E834 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0046E838 8F99856C */  lw    $t9, %call16(unroll_searchloop)($gp)
/* 0046E83C 00003025 */  move  $a2, $zero
/* 0046E840 00003825 */  move  $a3, $zero
/* 0046E844 0320F809 */  jalr  $t9
/* 0046E848 94A40008 */   lhu   $a0, 8($a1)
/* 0046E84C 90580000 */  lbu   $t8, ($v0)
/* 0046E850 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E854 00408825 */  move  $s1, $v0
/* 0046E858 1300005C */  beqz  $t8, .L0046E9CC
/* 0046E85C 24030001 */   li    $v1, 1
/* 0046E860 8C440038 */  lw    $a0, 0x38($v0)
/* 0046E864 24080001 */  li    $t0, 1
/* 0046E868 54800016 */  bnezl $a0, .L0046E8C4
/* 0046E86C 8C430034 */   lw    $v1, 0x34($v0)
/* 0046E870 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0046E874 A2280002 */  sb    $t0, 2($s1)
/* 0046E878 AFB10060 */  sw    $s1, 0x60($sp)
/* 0046E87C 0320F809 */  jalr  $t9
/* 0046E880 96240008 */   lhu   $a0, 8($s1)
/* 0046E884 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E888 00408825 */  move  $s1, $v0
/* 0046E88C 00001825 */  move  $v1, $zero
/* 0046E890 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 0046E894 24060001 */  li    $a2, 1
/* 0046E898 8F390000 */  lw    $t9, ($t9)
/* 0046E89C AC590010 */  sw    $t9, 0x10($v0)
/* 0046E8A0 8FA90060 */  lw    $t1, 0x60($sp)
/* 0046E8A4 912A0022 */  lbu   $t2, 0x22($t1)
/* 0046E8A8 A04A0022 */  sb    $t2, 0x22($v0)
/* 0046E8AC 8FAE0060 */  lw    $t6, 0x60($sp)
/* 0046E8B0 91CB0021 */  lbu   $t3, 0x21($t6)
/* 0046E8B4 A0400003 */  sb    $zero, 3($v0)
/* 0046E8B8 10000045 */  b     .L0046E9D0
/* 0046E8BC A04B0021 */   sb    $t3, 0x21($v0)
/* 0046E8C0 8C430034 */  lw    $v1, 0x34($v0)
.L0046E8C4:
/* 0046E8C4 50600021 */  beql  $v1, $zero, .L0046E94C
/* 0046E8C8 8FA5005C */   lw    $a1, 0x5c($sp)
/* 0046E8CC 908C001D */  lbu   $t4, 0x1d($a0)
/* 0046E8D0 5180001E */  beql  $t4, $zero, .L0046E94C
/* 0046E8D4 8FA5005C */   lw    $a1, 0x5c($sp)
/* 0046E8D8 8E300038 */  lw    $s0, 0x38($s1)
/* 0046E8DC 8E0F0018 */  lw    $t7, 0x18($s0)
/* 0046E8E0 A1E00009 */  sb    $zero, 9($t7)
/* 0046E8E4 8F9986DC */  lw    $t9, %call16(has_volt_ovfw)($gp)
/* 0046E8E8 8E0D0004 */  lw    $t5, 4($s0)
/* 0046E8EC 0320F809 */  jalr  $t9
/* 0046E8F0 8DA40034 */   lw    $a0, 0x34($t5)
/* 0046E8F4 1040000A */  beqz  $v0, .L0046E920
/* 0046E8F8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0046E8FC 24180067 */  li    $t8, 103
/* 0046E900 A2180000 */  sb    $t8, ($s0)
/* 0046E904 92280001 */  lbu   $t0, 1($s1)
/* 0046E908 8E190004 */  lw    $t9, 4($s0)
/* 0046E90C A2080014 */  sb    $t0, 0x14($s0)
/* 0046E910 8F290034 */  lw    $t1, 0x34($t9)
/* 0046E914 A2000015 */  sb    $zero, 0x15($s0)
/* 0046E918 10000008 */  b     .L0046E93C
/* 0046E91C AE090004 */   sw    $t1, 4($s0)
.L0046E920:
/* 0046E920 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046E924 8E0A0004 */  lw    $t2, 4($s0)
/* 0046E928 0320F809 */  jalr  $t9
/* 0046E92C 8D440034 */   lw    $a0, 0x34($t2)
/* 0046E930 240E0060 */  li    $t6, 96
/* 0046E934 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E938 A20E0000 */  sb    $t6, ($s0)
.L0046E93C:
/* 0046E93C 9203001C */  lbu   $v1, 0x1c($s0)
/* 0046E940 10000023 */  b     .L0046E9D0
/* 0046E944 9206001E */   lbu   $a2, 0x1e($s0)
/* 0046E948 8FA5005C */  lw    $a1, 0x5c($sp)
.L0046E94C:
/* 0046E94C 54A30008 */  bnel  $a1, $v1, .L0046E970
/* 0046E950 8E2C0038 */   lw    $t4, 0x38($s1)
/* 0046E954 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046E958 00A02025 */  move  $a0, $a1
/* 0046E95C 0320F809 */  jalr  $t9
/* 0046E960 00000000 */   nop   
/* 0046E964 10000405 */  b     .L0046F97C
/* 0046E968 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0046E96C 8E2C0038 */  lw    $t4, 0x38($s1)
.L0046E970:
/* 0046E970 240B0001 */  li    $t3, 1
/* 0046E974 A22B0002 */  sb    $t3, 2($s1)
/* 0046E978 A180001F */  sb    $zero, 0x1f($t4)
/* 0046E97C 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0046E980 AFB10060 */  sw    $s1, 0x60($sp)
/* 0046E984 96240008 */  lhu   $a0, 8($s1)
/* 0046E988 0320F809 */  jalr  $t9
/* 0046E98C 00000000 */   nop   
/* 0046E990 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046E994 00408825 */  move  $s1, $v0
/* 0046E998 00001825 */  move  $v1, $zero
/* 0046E99C 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 0046E9A0 00003025 */  move  $a2, $zero
/* 0046E9A4 8DEF0000 */  lw    $t7, ($t7)
/* 0046E9A8 AC4F0010 */  sw    $t7, 0x10($v0)
/* 0046E9AC 8FAD0060 */  lw    $t5, 0x60($sp)
/* 0046E9B0 91B80022 */  lbu   $t8, 0x22($t5)
/* 0046E9B4 A0580022 */  sb    $t8, 0x22($v0)
/* 0046E9B8 8FA80060 */  lw    $t0, 0x60($sp)
/* 0046E9BC 91190021 */  lbu   $t9, 0x21($t0)
/* 0046E9C0 A0400003 */  sb    $zero, 3($v0)
/* 0046E9C4 10000002 */  b     .L0046E9D0
/* 0046E9C8 A0590021 */   sb    $t9, 0x21($v0)
.L0046E9CC:
/* 0046E9CC 24060001 */  li    $a2, 1
.L0046E9D0:
/* 0046E9D0 92290000 */  lbu   $t1, ($s1)
/* 0046E9D4 55200032 */  bnezl $t1, .L0046EAA0
/* 0046E9D8 92380021 */   lbu   $t8, 0x21($s1)
/* 0046E9DC 8E4A0004 */  lw    $t2, 4($s2)
/* 0046E9E0 24010006 */  li    $at, 6
/* 0046E9E4 27A50054 */  addiu $a1, $sp, 0x54
/* 0046E9E8 914E0000 */  lbu   $t6, ($t2)
/* 0046E9EC A22E0000 */  sb    $t6, ($s1)
/* 0046E9F0 8E4B0004 */  lw    $t3, 4($s2)
/* 0046E9F4 31CE00FF */  andi  $t6, $t6, 0xff
/* 0046E9F8 8D6F0028 */  lw    $t7, 0x28($t3)
/* 0046E9FC AE2F0028 */  sw    $t7, 0x28($s1)
/* 0046EA00 8D6C002C */  lw    $t4, 0x2c($t3)
/* 0046EA04 AE2C002C */  sw    $t4, 0x2c($s1)
/* 0046EA08 8E4D0004 */  lw    $t5, 4($s2)
/* 0046EA0C 91B80001 */  lbu   $t8, 1($t5)
/* 0046EA10 A2380001 */  sb    $t8, 1($s1)
/* 0046EA14 8E480004 */  lw    $t0, 4($s2)
/* 0046EA18 91190020 */  lbu   $t9, 0x20($t0)
/* 0046EA1C A2390020 */  sb    $t9, 0x20($s1)
/* 0046EA20 8E490004 */  lw    $t1, 4($s2)
/* 0046EA24 912A002F */  lbu   $t2, 0x2f($t1)
/* 0046EA28 A2200003 */  sb    $zero, 3($s1)
/* 0046EA2C A6200006 */  sh    $zero, 6($s1)
/* 0046EA30 AE200030 */  sw    $zero, 0x30($s1)
/* 0046EA34 15C1000E */  bne   $t6, $at, .L0046EA70
/* 0046EA38 A22A002F */   sb    $t2, 0x2f($s1)
/* 0046EA3C 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046EA40 8E440014 */  lw    $a0, 0x14($s2)
/* 0046EA44 A3A3005B */  sb    $v1, 0x5b($sp)
/* 0046EA48 0320F809 */  jalr  $t9
/* 0046EA4C A3A6005A */   sb    $a2, 0x5a($sp)
/* 0046EA50 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EA54 93A3005B */  lbu   $v1, 0x5b($sp)
/* 0046EA58 93A6005A */  lbu   $a2, 0x5a($sp)
/* 0046EA5C AE220024 */  sw    $v0, 0x24($s1)
/* 0046EA60 AE20003C */  sw    $zero, 0x3c($s1)
/* 0046EA64 A2200004 */  sb    $zero, 4($s1)
/* 0046EA68 10000002 */  b     .L0046EA74
/* 0046EA6C A2200005 */   sb    $zero, 5($s1)
.L0046EA70:
/* 0046EA70 AE200024 */  sw    $zero, 0x24($s1)
.L0046EA74:
/* 0046EA74 922B0021 */  lbu   $t3, 0x21($s1)
/* 0046EA78 240C0001 */  li    $t4, 1
/* 0046EA7C 55600004 */  bnezl $t3, .L0046EA90
/* 0046EA80 A22C0002 */   sb    $t4, 2($s1)
/* 0046EA84 10000002 */  b     .L0046EA90
/* 0046EA88 A2200002 */   sb    $zero, 2($s1)
/* 0046EA8C A22C0002 */  sb    $t4, 2($s1)
.L0046EA90:
/* 0046EA90 8E4F0004 */  lw    $t7, 4($s2)
/* 0046EA94 91ED0023 */  lbu   $t5, 0x23($t7)
/* 0046EA98 A22D0023 */  sb    $t5, 0x23($s1)
/* 0046EA9C 92380021 */  lbu   $t8, 0x21($s1)
.L0046EAA0:
/* 0046EAA0 13000003 */  beqz  $t8, .L0046EAB0
/* 0046EAA4 00000000 */   nop   
/* 0046EAA8 00001825 */  move  $v1, $zero
/* 0046EAAC 00003025 */  move  $a2, $zero
.L0046EAB0:
/* 0046EAB0 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 0046EAB4 92440000 */  lbu   $a0, ($s2)
/* 0046EAB8 A3A3005B */  sb    $v1, 0x5b($sp)
/* 0046EABC 0320F809 */  jalr  $t9
/* 0046EAC0 A3A6005A */   sb    $a2, 0x5a($sp)
/* 0046EAC4 8FA8005C */  lw    $t0, 0x5c($sp)
/* 0046EAC8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EACC 93A3005B */  lbu   $v1, 0x5b($sp)
/* 0046EAD0 AE280034 */  sw    $t0, 0x34($s1)
/* 0046EAD4 92590003 */  lbu   $t9, 3($s2)
/* 0046EAD8 93A6005A */  lbu   $a2, 0x5a($sp)
/* 0046EADC 032002B6 */  tne   $t9, $zero, 0xa
/* 0046EAE0 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046EAE4 2401003E */  li    $at, 62
/* 0046EAE8 8E100000 */  lw    $s0, ($s0)
/* 0046EAEC 92090000 */  lbu   $t1, ($s0)
/* 0046EAF0 A2000003 */  sb    $zero, 3($s0)
/* 0046EAF4 55210004 */  bnel  $t1, $at, .L0046EB08
/* 0046EAF8 AE110004 */   sw    $s1, 4($s0)
/* 0046EAFC 8E2A0024 */  lw    $t2, 0x24($s1)
/* 0046EB00 AE0A0014 */  sw    $t2, 0x14($s0)
/* 0046EB04 AE110004 */  sw    $s1, 4($s0)
.L0046EB08:
/* 0046EB08 AE300038 */  sw    $s0, 0x38($s1)
/* 0046EB0C 920E0003 */  lbu   $t6, 3($s0)
/* 0046EB10 55C0002D */  bnezl $t6, .L0046EBC8
/* 0046EB14 A200001C */   sb    $zero, 0x1c($s0)
/* 0046EB18 A203001C */  sb    $v1, 0x1c($s0)
/* 0046EB1C 922B0022 */  lbu   $t3, 0x22($s1)
/* 0046EB20 55600011 */  bnezl $t3, .L0046EB68
/* 0046EB24 A206001E */   sb    $a2, 0x1e($s0)
/* 0046EB28 5060000F */  beql  $v1, $zero, .L0046EB68
/* 0046EB2C A206001E */   sb    $a2, 0x1e($s0)
/* 0046EB30 8F8C89B4 */  lw     $t4, %got(curgraphnode)($gp)
/* 0046EB34 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 0046EB38 02002025 */  move  $a0, $s0
/* 0046EB3C 8D8C0000 */  lw    $t4, ($t4)
/* 0046EB40 8D850024 */  lw    $a1, 0x24($t4)
/* 0046EB44 0320F809 */  jalr  $t9
/* 0046EB48 A3A6005A */   sb    $a2, 0x5a($sp)
/* 0046EB4C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EB50 2C4F0001 */  sltiu $t7, $v0, 1
/* 0046EB54 93A6005A */  lbu   $a2, 0x5a($sp)
/* 0046EB58 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046EB5C 8E100000 */  lw    $s0, ($s0)
/* 0046EB60 A20F001C */  sb    $t7, 0x1c($s0)
/* 0046EB64 A206001E */  sb    $a2, 0x1e($s0)
.L0046EB68:
/* 0046EB68 922D0022 */  lbu   $t5, 0x22($s1)
/* 0046EB6C 55A0000F */  bnezl $t5, .L0046EBAC
/* 0046EB70 92390021 */   lbu   $t9, 0x21($s1)
/* 0046EB74 50C0000D */  beql  $a2, $zero, .L0046EBAC
/* 0046EB78 92390021 */   lbu   $t9, 0x21($s1)
/* 0046EB7C 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 0046EB80 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 0046EB84 02002025 */  move  $a0, $s0
/* 0046EB88 8F180000 */  lw    $t8, ($t8)
/* 0046EB8C 0320F809 */  jalr  $t9
/* 0046EB90 8F050024 */   lw    $a1, 0x24($t8)
/* 0046EB94 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EB98 2C480001 */  sltiu $t0, $v0, 1
/* 0046EB9C 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046EBA0 8E100000 */  lw    $s0, ($s0)
/* 0046EBA4 A208001E */  sb    $t0, 0x1e($s0)
/* 0046EBA8 92390021 */  lbu   $t9, 0x21($s1)
.L0046EBAC:
/* 0046EBAC 2F2A0001 */  sltiu $t2, $t9, 1
/* 0046EBB0 A20A001D */  sb    $t2, 0x1d($s0)
/* 0046EBB4 A20A001F */  sb    $t2, 0x1f($s0)
/* 0046EBB8 924E0001 */  lbu   $t6, 1($s2)
/* 0046EBBC 10000006 */  b     .L0046EBD8
/* 0046EBC0 A20E0001 */   sb    $t6, 1($s0)
/* 0046EBC4 A200001C */  sb    $zero, 0x1c($s0)
.L0046EBC8:
/* 0046EBC8 A200001E */  sb    $zero, 0x1e($s0)
/* 0046EBCC A200001D */  sb    $zero, 0x1d($s0)
/* 0046EBD0 A200001F */  sb    $zero, 0x1f($s0)
/* 0046EBD4 A2000001 */  sb    $zero, 1($s0)
.L0046EBD8:
/* 0046EBD8 AE00002C */  sw    $zero, 0x2c($s0)
/* 0046EBDC AE000030 */  sw    $zero, 0x30($s0)
/* 0046EBE0 A2000002 */  sb    $zero, 2($s0)
/* 0046EBE4 922B0022 */  lbu   $t3, 0x22($s1)
/* 0046EBE8 15600006 */  bnez  $t3, .L0046EC04
/* 0046EBEC 00000000 */   nop   
/* 0046EBF0 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 0046EBF4 02002025 */  move  $a0, $s0
/* 0046EBF8 0320F809 */  jalr  $t9
/* 0046EBFC 00000000 */   nop   
/* 0046EC00 8FBC0020 */  lw    $gp, 0x20($sp)
.L0046EC04:
/* 0046EC04 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 0046EC08 0320F809 */  jalr  $t9
/* 0046EC0C 00000000 */   nop   
/* 0046EC10 922C0022 */  lbu   $t4, 0x22($s1)
/* 0046EC14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EC18 51800359 */  beql  $t4, $zero, .L0046F980
/* 0046EC1C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0046EC20 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 0046EC24 240F0001 */  li    $t7, 1
/* 0046EC28 8DAD0000 */  lw    $t5, ($t5)
/* 0046EC2C 8DB80028 */  lw    $t8, 0x28($t5)
/* 0046EC30 10000352 */  b     .L0046F97C
/* 0046EC34 A30F0008 */   sb    $t7, 8($t8)
.L0046EC38:
/* 0046EC38 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046EC3C 8E440004 */  lw    $a0, 4($s2)
/* 0046EC40 27A50054 */  addiu $a1, $sp, 0x54
/* 0046EC44 0320F809 */  jalr  $t9
/* 0046EC48 00000000 */   nop   
/* 0046EC4C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EC50 00402025 */  move  $a0, $v0
/* 0046EC54 8F9189C4 */  lw     $s1, %got(stattail)($gp)
/* 0046EC58 8E280000 */  lw    $t0, ($s1)
/* 0046EC5C AD020004 */  sw    $v0, 4($t0)
/* 0046EC60 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046EC64 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046EC68 0320F809 */  jalr  $t9
/* 0046EC6C 00000000 */   nop   
/* 0046EC70 8E300000 */  lw    $s0, ($s1)
/* 0046EC74 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EC78 AE020004 */  sw    $v0, 4($s0)
/* 0046EC7C 1000033F */  b     .L0046F97C
/* 0046EC80 AE000018 */   sw    $zero, 0x18($s0)
.L0046EC84:
/* 0046EC84 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046EC88 8E440004 */  lw    $a0, 4($s2)
/* 0046EC8C 27A50054 */  addiu $a1, $sp, 0x54
/* 0046EC90 0320F809 */  jalr  $t9
/* 0046EC94 00000000 */   nop   
/* 0046EC98 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EC9C 00402025 */  move  $a0, $v0
/* 0046ECA0 8F9189C4 */  lw     $s1, %got(stattail)($gp)
/* 0046ECA4 8E390000 */  lw    $t9, ($s1)
/* 0046ECA8 AF220004 */  sw    $v0, 4($t9)
/* 0046ECAC 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046ECB0 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046ECB4 0320F809 */  jalr  $t9
/* 0046ECB8 00000000 */   nop   
/* 0046ECBC 8E290000 */  lw    $t1, ($s1)
/* 0046ECC0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046ECC4 1000032D */  b     .L0046F97C
/* 0046ECC8 AD220004 */   sw    $v0, 4($t1)
.L0046ECCC:
/* 0046ECCC 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046ECD0 924A0024 */  lbu   $t2, 0x24($s2)
/* 0046ECD4 8E100000 */  lw    $s0, ($s0)
/* 0046ECD8 A20A0024 */  sb    $t2, 0x24($s0)
/* 0046ECDC 8E4E0018 */  lw    $t6, 0x18($s2)
/* 0046ECE0 AE0E0018 */  sw    $t6, 0x18($s0)
/* 0046ECE4 8E4B0014 */  lw    $t3, 0x14($s2)
/* 0046ECE8 10000324 */  b     .L0046F97C
/* 0046ECEC AE0B0014 */   sw    $t3, 0x14($s0)
.L0046ECF0:
/* 0046ECF0 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046ECF4 8E440014 */  lw    $a0, 0x14($s2)
/* 0046ECF8 27A50054 */  addiu $a1, $sp, 0x54
/* 0046ECFC 0320F809 */  jalr  $t9
/* 0046ED00 00000000 */   nop   
/* 0046ED04 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046ED08 00402025 */  move  $a0, $v0
/* 0046ED0C 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046ED10 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046ED14 0320F809 */  jalr  $t9
/* 0046ED18 00000000 */   nop   
/* 0046ED1C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046ED20 AFA20060 */  sw    $v0, 0x60($sp)
/* 0046ED24 8E440004 */  lw    $a0, 4($s2)
/* 0046ED28 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046ED2C 27A50054 */  addiu $a1, $sp, 0x54
/* 0046ED30 0320F809 */  jalr  $t9
/* 0046ED34 00000000 */   nop   
/* 0046ED38 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046ED3C 8FAC0054 */  lw    $t4, 0x54($sp)
/* 0046ED40 8E4D0030 */  lw    $t5, 0x30($s2)
/* 0046ED44 8F998574 */  lw    $t9, %call16(unroll_resetincr_mod)($gp)
/* 0046ED48 00402025 */  move  $a0, $v0
/* 0046ED4C 018D7821 */  addu  $t7, $t4, $t5
/* 0046ED50 AFAF0054 */  sw    $t7, 0x54($sp)
/* 0046ED54 0320F809 */  jalr  $t9
/* 0046ED58 27A50054 */   addiu $a1, $sp, 0x54
/* 0046ED5C 92580000 */  lbu   $t8, ($s2)
/* 0046ED60 2401003F */  li    $at, 63
/* 0046ED64 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046ED68 00408825 */  move  $s1, $v0
/* 0046ED6C 1701003E */  bne   $t8, $at, .L0046EE68
/* 0046ED70 A3A00059 */   sb    $zero, 0x59($sp)
/* 0046ED74 8F8889B4 */  lw     $t0, %got(curgraphnode)($gp)
/* 0046ED78 8D080000 */  lw    $t0, ($t0)
/* 0046ED7C 8D10001C */  lw    $s0, 0x1c($t0)
/* 0046ED80 5200003A */  beql  $s0, $zero, .L0046EE6C
/* 0046ED84 93AE0059 */   lbu   $t6, 0x59($sp)
/* 0046ED88 92190000 */  lbu   $t9, ($s0)
.L0046ED8C:
/* 0046ED8C 2401003F */  li    $at, 63
/* 0046ED90 57210030 */  bnel  $t9, $at, .L0046EE54
/* 0046ED94 8E100008 */   lw    $s0, 8($s0)
/* 0046ED98 8E040004 */  lw    $a0, 4($s0)
/* 0046ED9C 8FA90054 */  lw    $t1, 0x54($sp)
/* 0046EDA0 5624002C */  bnel  $s1, $a0, .L0046EE54
/* 0046EDA4 8E100008 */   lw    $s0, 8($s0)
/* 0046EDA8 8E0A0030 */  lw    $t2, 0x30($s0)
/* 0046EDAC 552A0029 */  bnel  $t1, $t2, .L0046EE54
/* 0046EDB0 8E100008 */   lw    $s0, 8($s0)
/* 0046EDB4 8E4E0020 */  lw    $t6, 0x20($s2)
/* 0046EDB8 8E0B0020 */  lw    $t3, 0x20($s0)
/* 0046EDBC 55CB0025 */  bnel  $t6, $t3, .L0046EE54
/* 0046EDC0 8E100008 */   lw    $s0, 8($s0)
/* 0046EDC4 920C001D */  lbu   $t4, 0x1d($s0)
/* 0046EDC8 51800010 */  beql  $t4, $zero, .L0046EE0C
/* 0046EDCC 9218001F */   lbu   $t8, 0x1f($s0)
/* 0046EDD0 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046EDD4 0320F809 */  jalr  $t9
/* 0046EDD8 00000000 */   nop   
/* 0046EDDC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EDE0 8E040014 */  lw    $a0, 0x14($s0)
/* 0046EDE4 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046EDE8 0320F809 */  jalr  $t9
/* 0046EDEC 00000000 */   nop   
/* 0046EDF0 8E0F0018 */  lw    $t7, 0x18($s0)
/* 0046EDF4 240D0060 */  li    $t5, 96
/* 0046EDF8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EDFC A20D0000 */  sb    $t5, ($s0)
/* 0046EE00 10000013 */  b     .L0046EE50
/* 0046EE04 A1E00009 */   sb    $zero, 9($t7)
/* 0046EE08 9218001F */  lbu   $t8, 0x1f($s0)
.L0046EE0C:
/* 0046EE0C 8FA80060 */  lw    $t0, 0x60($sp)
/* 0046EE10 53000010 */  beql  $t8, $zero, .L0046EE54
/* 0046EE14 8E100008 */   lw    $s0, 8($s0)
/* 0046EE18 8E190014 */  lw    $t9, 0x14($s0)
/* 0046EE1C 5519000D */  bnel  $t0, $t9, .L0046EE54
/* 0046EE20 8E100008 */   lw    $s0, 8($s0)
/* 0046EE24 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046EE28 24090001 */  li    $t1, 1
/* 0046EE2C A3A90059 */  sb    $t1, 0x59($sp)
/* 0046EE30 0320F809 */  jalr  $t9
/* 0046EE34 02202025 */   move  $a0, $s1
/* 0046EE38 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EE3C 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046EE40 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046EE44 0320F809 */  jalr  $t9
/* 0046EE48 00000000 */   nop   
/* 0046EE4C 8FBC0020 */  lw    $gp, 0x20($sp)
.L0046EE50:
/* 0046EE50 8E100008 */  lw    $s0, 8($s0)
.L0046EE54:
/* 0046EE54 93AA0059 */  lbu   $t2, 0x59($sp)
/* 0046EE58 52000004 */  beql  $s0, $zero, .L0046EE6C
/* 0046EE5C 93AE0059 */   lbu   $t6, 0x59($sp)
/* 0046EE60 5140FFCA */  beql  $t2, $zero, .L0046ED8C
/* 0046EE64 92190000 */   lbu   $t9, ($s0)
.L0046EE68:
/* 0046EE68 93AE0059 */  lbu   $t6, 0x59($sp)
.L0046EE6C:
/* 0046EE6C 55C002C4 */  bnezl $t6, .L0046F980
/* 0046EE70 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0046EE74 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 0046EE78 92440000 */  lbu   $a0, ($s2)
/* 0046EE7C 0320F809 */  jalr  $t9
/* 0046EE80 00000000 */   nop   
/* 0046EE84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EE88 8FAB0060 */  lw    $t3, 0x60($sp)
/* 0046EE8C 8FB80054 */  lw    $t8, 0x54($sp)
/* 0046EE90 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046EE94 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0046EE98 02202025 */  move  $a0, $s1
/* 0046EE9C 8E100000 */  lw    $s0, ($s0)
/* 0046EEA0 AE110004 */  sw    $s1, 4($s0)
/* 0046EEA4 AE0B0014 */  sw    $t3, 0x14($s0)
/* 0046EEA8 924C002C */  lbu   $t4, 0x2c($s2)
/* 0046EEAC A20C002C */  sb    $t4, 0x2c($s0)
/* 0046EEB0 924D002D */  lbu   $t5, 0x2d($s2)
/* 0046EEB4 A20D002D */  sb    $t5, 0x2d($s0)
/* 0046EEB8 964F002E */  lhu   $t7, 0x2e($s2)
/* 0046EEBC AE180030 */  sw    $t8, 0x30($s0)
/* 0046EEC0 A60F002E */  sh    $t7, 0x2e($s0)
/* 0046EEC4 8E480020 */  lw    $t0, 0x20($s2)
/* 0046EEC8 0320F809 */  jalr  $t9
/* 0046EECC AE080020 */   sw    $t0, 0x20($s0)
/* 0046EED0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EED4 2401003F */  li    $at, 63
/* 0046EED8 8F9189C4 */  lw     $s1, %got(stattail)($gp)
/* 0046EEDC 8E300000 */  lw    $s0, ($s1)
/* 0046EEE0 AE020024 */  sw    $v0, 0x24($s0)
/* 0046EEE4 92590000 */  lbu   $t9, ($s2)
/* 0046EEE8 5721001A */  bnel  $t9, $at, .L0046EF54
/* 0046EEEC A200001C */   sb    $zero, 0x1c($s0)
/* 0046EEF0 8F8989B4 */  lw     $t1, %got(curgraphnode)($gp)
/* 0046EEF4 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 0046EEF8 02002025 */  move  $a0, $s0
/* 0046EEFC 8D290000 */  lw    $t1, ($t1)
/* 0046EF00 0320F809 */  jalr  $t9
/* 0046EF04 8D250024 */   lw    $a1, 0x24($t1)
/* 0046EF08 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EF0C 8E240000 */  lw    $a0, ($s1)
/* 0046EF10 2C4A0001 */  sltiu $t2, $v0, 1
/* 0046EF14 8F8B89B4 */  lw     $t3, %got(curgraphnode)($gp)
/* 0046EF18 240E0001 */  li    $t6, 1
/* 0046EF1C A08A001C */  sb    $t2, 0x1c($a0)
/* 0046EF20 A08E001D */  sb    $t6, 0x1d($a0)
/* 0046EF24 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 0046EF28 8D6B0000 */  lw    $t3, ($t3)
/* 0046EF2C 0320F809 */  jalr  $t9
/* 0046EF30 8D650024 */   lw    $a1, 0x24($t3)
/* 0046EF34 8E300000 */  lw    $s0, ($s1)
/* 0046EF38 2C4C0001 */  sltiu $t4, $v0, 1
/* 0046EF3C 240D0001 */  li    $t5, 1
/* 0046EF40 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EF44 A20C001E */  sb    $t4, 0x1e($s0)
/* 0046EF48 10000005 */  b     .L0046EF60
/* 0046EF4C A20D001F */   sb    $t5, 0x1f($s0)
/* 0046EF50 A200001C */  sb    $zero, 0x1c($s0)
.L0046EF54:
/* 0046EF54 A200001D */  sb    $zero, 0x1d($s0)
/* 0046EF58 A200001E */  sb    $zero, 0x1e($s0)
/* 0046EF5C A200001F */  sb    $zero, 0x1f($s0)
.L0046EF60:
/* 0046EF60 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 0046EF64 02002025 */  move  $a0, $s0
/* 0046EF68 0320F809 */  jalr  $t9
/* 0046EF6C 00000000 */   nop   
/* 0046EF70 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EF74 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 0046EF78 0320F809 */  jalr  $t9
/* 0046EF7C 00000000 */   nop   
/* 0046EF80 1000027E */  b     .L0046F97C
/* 0046EF84 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046EF88:
/* 0046EF88 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046EF8C 8E440014 */  lw    $a0, 0x14($s2)
/* 0046EF90 27A50054 */  addiu $a1, $sp, 0x54
/* 0046EF94 0320F809 */  jalr  $t9
/* 0046EF98 00000000 */   nop   
/* 0046EF9C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EFA0 00402025 */  move  $a0, $v0
/* 0046EFA4 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046EFA8 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046EFAC 0320F809 */  jalr  $t9
/* 0046EFB0 00000000 */   nop   
/* 0046EFB4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EFB8 AFA20060 */  sw    $v0, 0x60($sp)
/* 0046EFBC 8E440004 */  lw    $a0, 4($s2)
/* 0046EFC0 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046EFC4 27A50054 */  addiu $a1, $sp, 0x54
/* 0046EFC8 0320F809 */  jalr  $t9
/* 0046EFCC 00000000 */   nop   
/* 0046EFD0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EFD4 00402025 */  move  $a0, $v0
/* 0046EFD8 27A50054 */  addiu $a1, $sp, 0x54
/* 0046EFDC 8F998574 */  lw    $t9, %call16(unroll_resetincr_mod)($gp)
/* 0046EFE0 0320F809 */  jalr  $t9
/* 0046EFE4 00000000 */   nop   
/* 0046EFE8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046EFEC 00408825 */  move  $s1, $v0
/* 0046EFF0 92440000 */  lbu   $a0, ($s2)
/* 0046EFF4 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 0046EFF8 0320F809 */  jalr  $t9
/* 0046EFFC 00000000 */   nop   
/* 0046F000 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F004 8FAF0060 */  lw    $t7, 0x60($sp)
/* 0046F008 8FA90054 */  lw    $t1, 0x54($sp)
/* 0046F00C 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F010 02202025 */  move  $a0, $s1
/* 0046F014 8E100000 */  lw    $s0, ($s0)
/* 0046F018 AE110004 */  sw    $s1, 4($s0)
/* 0046F01C AE0F0014 */  sw    $t7, 0x14($s0)
/* 0046F020 9258002C */  lbu   $t8, 0x2c($s2)
/* 0046F024 A218002C */  sb    $t8, 0x2c($s0)
/* 0046F028 9248002D */  lbu   $t0, 0x2d($s2)
/* 0046F02C A208002D */  sb    $t0, 0x2d($s0)
/* 0046F030 9659002E */  lhu   $t9, 0x2e($s2)
/* 0046F034 AE090030 */  sw    $t1, 0x30($s0)
/* 0046F038 A619002E */  sh    $t9, 0x2e($s0)
/* 0046F03C 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0046F040 8E4A0020 */  lw    $t2, 0x20($s2)
/* 0046F044 0320F809 */  jalr  $t9
/* 0046F048 AE0A0020 */   sw    $t2, 0x20($s0)
/* 0046F04C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F050 24010094 */  li    $at, 148
/* 0046F054 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F058 8E100000 */  lw    $s0, ($s0)
/* 0046F05C AE020024 */  sw    $v0, 0x24($s0)
/* 0046F060 924E0000 */  lbu   $t6, ($s2)
/* 0046F064 55C1001C */  bnel  $t6, $at, .L0046F0D8
/* 0046F068 A200001C */   sb    $zero, 0x1c($s0)
/* 0046F06C 8F8B89B4 */  lw     $t3, %got(curgraphnode)($gp)
/* 0046F070 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 0046F074 02002025 */  move  $a0, $s0
/* 0046F078 8D6B0000 */  lw    $t3, ($t3)
/* 0046F07C 0320F809 */  jalr  $t9
/* 0046F080 8D650024 */   lw    $a1, 0x24($t3)
/* 0046F084 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F088 2C4C0001 */  sltiu $t4, $v0, 1
/* 0046F08C 240D0001 */  li    $t5, 1
/* 0046F090 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F094 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 0046F098 8E040000 */  lw    $a0, ($s0)
/* 0046F09C A08C001C */  sb    $t4, 0x1c($a0)
/* 0046F0A0 A08D001D */  sb    $t5, 0x1d($a0)
/* 0046F0A4 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 0046F0A8 8DEF0000 */  lw    $t7, ($t7)
/* 0046F0AC 0320F809 */  jalr  $t9
/* 0046F0B0 8DE50024 */   lw    $a1, 0x24($t7)
/* 0046F0B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F0B8 2C580001 */  sltiu $t8, $v0, 1
/* 0046F0BC 24080001 */  li    $t0, 1
/* 0046F0C0 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F0C4 8E100000 */  lw    $s0, ($s0)
/* 0046F0C8 A218001E */  sb    $t8, 0x1e($s0)
/* 0046F0CC 10000005 */  b     .L0046F0E4
/* 0046F0D0 A208001F */   sb    $t0, 0x1f($s0)
/* 0046F0D4 A200001C */  sb    $zero, 0x1c($s0)
.L0046F0D8:
/* 0046F0D8 A200001D */  sb    $zero, 0x1d($s0)
/* 0046F0DC A200001E */  sb    $zero, 0x1e($s0)
/* 0046F0E0 A200001F */  sb    $zero, 0x1f($s0)
.L0046F0E4:
/* 0046F0E4 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 0046F0E8 02002025 */  move  $a0, $s0
/* 0046F0EC 0320F809 */  jalr  $t9
/* 0046F0F0 00000000 */   nop   
/* 0046F0F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F0F8 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 0046F0FC 0320F809 */  jalr  $t9
/* 0046F100 00000000 */   nop   
/* 0046F104 1000021D */  b     .L0046F97C
/* 0046F108 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046F10C:
/* 0046F10C 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046F110 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F114 8E440004 */  lw    $a0, 4($s2)
/* 0046F118 27A50054 */  addiu $a1, $sp, 0x54
/* 0046F11C 0320F809 */  jalr  $t9
/* 0046F120 8E100000 */   lw    $s0, ($s0)
/* 0046F124 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F128 AE020004 */  sw    $v0, 4($s0)
/* 0046F12C 00402025 */  move  $a0, $v0
/* 0046F130 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F134 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046F138 0320F809 */  jalr  $t9
/* 0046F13C 00000000 */   nop   
/* 0046F140 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F144 AE020004 */  sw    $v0, 4($s0)
/* 0046F148 8E440014 */  lw    $a0, 0x14($s2)
/* 0046F14C 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046F150 27A50054 */  addiu $a1, $sp, 0x54
/* 0046F154 0320F809 */  jalr  $t9
/* 0046F158 00000000 */   nop   
/* 0046F15C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F160 AE020014 */  sw    $v0, 0x14($s0)
/* 0046F164 00402025 */  move  $a0, $v0
/* 0046F168 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F16C 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046F170 0320F809 */  jalr  $t9
/* 0046F174 00000000 */   nop   
/* 0046F178 AE020014 */  sw    $v0, 0x14($s0)
/* 0046F17C 8E590020 */  lw    $t9, 0x20($s2)
/* 0046F180 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F184 00402025 */  move  $a0, $v0
/* 0046F188 AE190020 */  sw    $t9, 0x20($s0)
/* 0046F18C 92490032 */  lbu   $t1, 0x32($s2)
/* 0046F190 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0046F194 A2090032 */  sb    $t1, 0x32($s0)
/* 0046F198 924A0033 */  lbu   $t2, 0x33($s2)
/* 0046F19C 0320F809 */  jalr  $t9
/* 0046F1A0 A20A0033 */   sb    $t2, 0x33($s0)
/* 0046F1A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F1A8 AE02002C */  sw    $v0, 0x2c($s0)
/* 0046F1AC 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 0046F1B0 0320F809 */  jalr  $t9
/* 0046F1B4 00000000 */   nop   
/* 0046F1B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F1BC 8E0B0018 */  lw    $t3, 0x18($s0)
/* 0046F1C0 240E0003 */  li    $t6, 3
/* 0046F1C4 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 0046F1C8 A16E0009 */  sb    $t6, 9($t3)
/* 0046F1CC 8F998398 */  lw    $t9, %call16(movkillprev)($gp)
/* 0046F1D0 8C840000 */  lw    $a0, ($a0)
/* 0046F1D4 0320F809 */  jalr  $t9
/* 0046F1D8 00000000 */   nop   
/* 0046F1DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F1E0 8E040004 */  lw    $a0, 4($s0)
/* 0046F1E4 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0046F1E8 0320F809 */  jalr  $t9
/* 0046F1EC 00000000 */   nop   
/* 0046F1F0 AE020024 */  sw    $v0, 0x24($s0)
/* 0046F1F4 924C0000 */  lbu   $t4, ($s2)
/* 0046F1F8 24010058 */  li    $at, 88
/* 0046F1FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F200 5581001B */  bnel  $t4, $at, .L0046F270
/* 0046F204 A200001C */   sb    $zero, 0x1c($s0)
/* 0046F208 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 0046F20C 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 0046F210 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 0046F214 8DAD0000 */  lw    $t5, ($t5)
/* 0046F218 8C840000 */  lw    $a0, ($a0)
/* 0046F21C 0320F809 */  jalr  $t9
/* 0046F220 8DA50024 */   lw    $a1, 0x24($t5)
/* 0046F224 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F228 2C4F0001 */  sltiu $t7, $v0, 1
/* 0046F22C A20F001C */  sb    $t7, 0x1c($s0)
/* 0046F230 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 0046F234 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 0046F238 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 0046F23C 8F180000 */  lw    $t8, ($t8)
/* 0046F240 8C840000 */  lw    $a0, ($a0)
/* 0046F244 0320F809 */  jalr  $t9
/* 0046F248 8F050024 */   lw    $a1, 0x24($t8)
/* 0046F24C 2C480001 */  sltiu $t0, $v0, 1
/* 0046F250 24190001 */  li    $t9, 1
/* 0046F254 24090001 */  li    $t1, 1
/* 0046F258 A208001E */  sb    $t0, 0x1e($s0)
/* 0046F25C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F260 A219001D */  sb    $t9, 0x1d($s0)
/* 0046F264 10000005 */  b     .L0046F27C
/* 0046F268 A209001F */   sb    $t1, 0x1f($s0)
/* 0046F26C A200001C */  sb    $zero, 0x1c($s0)
.L0046F270:
/* 0046F270 A200001D */  sb    $zero, 0x1d($s0)
/* 0046F274 A200001E */  sb    $zero, 0x1e($s0)
/* 0046F278 A200001F */  sb    $zero, 0x1f($s0)
.L0046F27C:
/* 0046F27C 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 0046F280 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 0046F284 0320F809 */  jalr  $t9
/* 0046F288 8C840000 */   lw    $a0, ($a0)
/* 0046F28C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F290 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 0046F294 0320F809 */  jalr  $t9
/* 0046F298 00000000 */   nop   
/* 0046F29C 100001B7 */  b     .L0046F97C
/* 0046F2A0 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046F2A4:
/* 0046F2A4 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046F2A8 8E440004 */  lw    $a0, 4($s2)
/* 0046F2AC 27A50054 */  addiu $a1, $sp, 0x54
/* 0046F2B0 0320F809 */  jalr  $t9
/* 0046F2B4 00000000 */   nop   
/* 0046F2B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F2BC 00402025 */  move  $a0, $v0
/* 0046F2C0 8F8A89C4 */  lw     $t2, %got(stattail)($gp)
/* 0046F2C4 8D4A0000 */  lw    $t2, ($t2)
/* 0046F2C8 AD420004 */  sw    $v0, 4($t2)
/* 0046F2CC 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F2D0 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046F2D4 0320F809 */  jalr  $t9
/* 0046F2D8 00000000 */   nop   
/* 0046F2DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F2E0 8F8E89C4 */  lw     $t6, %got(stattail)($gp)
/* 0046F2E4 8DCE0000 */  lw    $t6, ($t6)
/* 0046F2E8 100001A4 */  b     .L0046F97C
/* 0046F2EC ADC20004 */   sw    $v0, 4($t6)
.L0046F2F0:
/* 0046F2F0 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046F2F4 8E440004 */  lw    $a0, 4($s2)
/* 0046F2F8 27A50054 */  addiu $a1, $sp, 0x54
/* 0046F2FC 0320F809 */  jalr  $t9
/* 0046F300 00000000 */   nop   
/* 0046F304 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F308 00408825 */  move  $s1, $v0
/* 0046F30C 8E440014 */  lw    $a0, 0x14($s2)
/* 0046F310 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046F314 27A50050 */  addiu $a1, $sp, 0x50
/* 0046F318 0320F809 */  jalr  $t9
/* 0046F31C 00000000 */   nop   
/* 0046F320 9243002C */  lbu   $v1, 0x2c($s2)
/* 0046F324 24010006 */  li    $at, 6
/* 0046F328 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F32C 10610008 */  beq   $v1, $at, .L0046F350
/* 0046F330 00403025 */   move  $a2, $v0
/* 0046F334 24010008 */  li    $at, 8
/* 0046F338 1461000E */  bne   $v1, $at, .L0046F374
/* 0046F33C 8FAB0054 */   lw    $t3, 0x54($sp)
/* 0046F340 8FAC0050 */  lw    $t4, 0x50($sp)
/* 0046F344 016C082B */  sltu  $at, $t3, $t4
/* 0046F348 1020000A */  beqz  $at, .L0046F374
/* 0046F34C 00000000 */   nop   
.L0046F350:
/* 0046F350 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F354 8FAD0050 */  lw    $t5, 0x50($sp)
/* 0046F358 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0046F35C 00C02025 */  move  $a0, $a2
/* 0046F360 0320F809 */  jalr  $t9
/* 0046F364 01AF2823 */   subu  $a1, $t5, $t7
/* 0046F368 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F36C 1000000F */  b     .L0046F3AC
/* 0046F370 AFA20060 */   sw    $v0, 0x60($sp)
.L0046F374:
/* 0046F374 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F378 02202025 */  move  $a0, $s1
/* 0046F37C 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046F380 0320F809 */  jalr  $t9
/* 0046F384 AFA60060 */   sw    $a2, 0x60($sp)
/* 0046F388 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F38C 00408825 */  move  $s1, $v0
/* 0046F390 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046F394 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F398 8FA50050 */  lw    $a1, 0x50($sp)
/* 0046F39C 0320F809 */  jalr  $t9
/* 0046F3A0 00000000 */   nop   
/* 0046F3A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F3A8 AFA20060 */  sw    $v0, 0x60($sp)
.L0046F3AC:
/* 0046F3AC 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 0046F3B0 A3A00059 */  sb    $zero, 0x59($sp)
/* 0046F3B4 8F180000 */  lw    $t8, ($t8)
/* 0046F3B8 8F10001C */  lw    $s0, 0x1c($t8)
/* 0046F3BC 5200003D */  beql  $s0, $zero, .L0046F4B4
/* 0046F3C0 93AC0059 */   lbu   $t4, 0x59($sp)
/* 0046F3C4 92480000 */  lbu   $t0, ($s2)
.L0046F3C8:
/* 0046F3C8 92190000 */  lbu   $t9, ($s0)
/* 0046F3CC 55190033 */  bnel  $t0, $t9, .L0046F49C
/* 0046F3D0 8E100008 */   lw    $s0, 8($s0)
/* 0046F3D4 8F9986F4 */  lw    $t9, %call16(trapstat_imply)($gp)
/* 0046F3D8 02002025 */  move  $a0, $s0
/* 0046F3DC 02202825 */  move  $a1, $s1
/* 0046F3E0 0320F809 */  jalr  $t9
/* 0046F3E4 8FA60060 */   lw    $a2, 0x60($sp)
/* 0046F3E8 24490001 */  addiu $t1, $v0, 1
/* 0046F3EC 2D210003 */  sltiu $at, $t1, 3
/* 0046F3F0 10200021 */  beqz  $at, .L0046F478
/* 0046F3F4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0046F3F8 8F818044 */  lw    $at, %got(jtbl_1000DA4C)($gp)
/* 0046F3FC 00094880 */  sll   $t1, $t1, 2
/* 0046F400 00290821 */  addu  $at, $at, $t1
/* 0046F404 8C29DA4C */  lw    $t1, %lo(jtbl_1000DA4C)($at)
/* 0046F408 013C4821 */  addu  $t1, $t1, $gp
/* 0046F40C 01200008 */  jr    $t1
/* 0046F410 00000000 */   nop   
.L0046F414:
/* 0046F414 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046F418 8E040004 */  lw    $a0, 4($s0)
/* 0046F41C 0320F809 */  jalr  $t9
/* 0046F420 00000000 */   nop   
/* 0046F424 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F428 8E040014 */  lw    $a0, 0x14($s0)
/* 0046F42C 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046F430 0320F809 */  jalr  $t9
/* 0046F434 00000000 */   nop   
/* 0046F438 240A0060 */  li    $t2, 96
/* 0046F43C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F440 10000015 */  b     .L0046F498
/* 0046F444 A20A0000 */   sb    $t2, ($s0)
.L0046F448:
/* 0046F448 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046F44C 240E0001 */  li    $t6, 1
/* 0046F450 A3AE0059 */  sb    $t6, 0x59($sp)
/* 0046F454 0320F809 */  jalr  $t9
/* 0046F458 02202025 */   move  $a0, $s1
/* 0046F45C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F460 8FA40060 */  lw    $a0, 0x60($sp)
/* 0046F464 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0046F468 0320F809 */  jalr  $t9
/* 0046F46C 00000000 */   nop   
/* 0046F470 10000009 */  b     .L0046F498
/* 0046F474 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046F478:
/* 0046F478 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0046F47C 8F868044 */  lw    $a2, %got(RO_1000DA42)($gp)
/* 0046F480 24040001 */  li    $a0, 1
/* 0046F484 240504E2 */  li    $a1, 1250
/* 0046F488 2407000A */  li    $a3, 10
/* 0046F48C 0320F809 */  jalr  $t9
/* 0046F490 24C6DA42 */   addiu $a2, %lo(RO_1000DA42) # addiu $a2, $a2, -0x25be
/* 0046F494 8FBC0020 */  lw    $gp, 0x20($sp)
.L0046F498:
/* 0046F498 8E100008 */  lw    $s0, 8($s0)
.L0046F49C:
/* 0046F49C 93AB0059 */  lbu   $t3, 0x59($sp)
/* 0046F4A0 52000004 */  beql  $s0, $zero, .L0046F4B4
/* 0046F4A4 93AC0059 */   lbu   $t4, 0x59($sp)
/* 0046F4A8 5160FFC7 */  beql  $t3, $zero, .L0046F3C8
/* 0046F4AC 92480000 */   lbu   $t0, ($s2)
/* 0046F4B0 93AC0059 */  lbu   $t4, 0x59($sp)
.L0046F4B4:
/* 0046F4B4 55800132 */  bnezl $t4, .L0046F980
/* 0046F4B8 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0046F4BC 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 0046F4C0 92440000 */  lbu   $a0, ($s2)
/* 0046F4C4 0320F809 */  jalr  $t9
/* 0046F4C8 00000000 */   nop   
/* 0046F4CC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F4D0 8FAD0060 */  lw    $t5, 0x60($sp)
/* 0046F4D4 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F4D8 8E100000 */  lw    $s0, ($s0)
/* 0046F4DC AE110004 */  sw    $s1, 4($s0)
/* 0046F4E0 AE0D0014 */  sw    $t5, 0x14($s0)
/* 0046F4E4 8E4F0030 */  lw    $t7, 0x30($s2)
/* 0046F4E8 AE0F0030 */  sw    $t7, 0x30($s0)
/* 0046F4EC 9258002C */  lbu   $t8, 0x2c($s2)
/* 0046F4F0 AE000018 */  sw    $zero, 0x18($s0)
/* 0046F4F4 10000121 */  b     .L0046F97C
/* 0046F4F8 A218002C */   sb    $t8, 0x2c($s0)
.L0046F4FC:
/* 0046F4FC 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F500 8E480014 */  lw    $t0, 0x14($s2)
/* 0046F504 8E100000 */  lw    $s0, ($s0)
/* 0046F508 AE080014 */  sw    $t0, 0x14($s0)
/* 0046F50C 8E590018 */  lw    $t9, 0x18($s2)
/* 0046F510 1000011A */  b     .L0046F97C
/* 0046F514 AE190018 */   sw    $t9, 0x18($s0)
.L0046F518:
/* 0046F518 8F9189C4 */  lw     $s1, %got(stattail)($gp)
/* 0046F51C 8E490014 */  lw    $t1, 0x14($s2)
/* 0046F520 8E2A0000 */  lw    $t2, ($s1)
/* 0046F524 10000115 */  b     .L0046F97C
/* 0046F528 AD490014 */   sw    $t1, 0x14($t2)
.L0046F52C:
/* 0046F52C 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046F530 8E440004 */  lw    $a0, 4($s2)
/* 0046F534 27A50054 */  addiu $a1, $sp, 0x54
/* 0046F538 0320F809 */  jalr  $t9
/* 0046F53C 00000000 */   nop   
/* 0046F540 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F544 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F548 8E100000 */  lw    $s0, ($s0)
/* 0046F54C AE020004 */  sw    $v0, 4($s0)
/* 0046F550 924E0015 */  lbu   $t6, 0x15($s2)
/* 0046F554 51C0000B */  beql  $t6, $zero, .L0046F584
/* 0046F558 924B0014 */   lbu   $t3, 0x14($s2)
/* 0046F55C 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F560 00402025 */  move  $a0, $v0
/* 0046F564 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046F568 0320F809 */  jalr  $t9
/* 0046F56C 00000000 */   nop   
/* 0046F570 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F574 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F578 8E100000 */  lw    $s0, ($s0)
/* 0046F57C AE020004 */  sw    $v0, 4($s0)
/* 0046F580 924B0014 */  lbu   $t3, 0x14($s2)
.L0046F584:
/* 0046F584 A20B0014 */  sb    $t3, 0x14($s0)
/* 0046F588 924C0015 */  lbu   $t4, 0x15($s2)
/* 0046F58C 100000FB */  b     .L0046F97C
/* 0046F590 A20C0015 */   sb    $t4, 0x15($s0)
.L0046F594:
/* 0046F594 8F8F89C4 */  lw     $t7, %got(stattail)($gp)
/* 0046F598 8E4D0014 */  lw    $t5, 0x14($s2)
/* 0046F59C 8DEF0000 */  lw    $t7, ($t7)
/* 0046F5A0 100000F6 */  b     .L0046F97C
/* 0046F5A4 ADED0014 */   sw    $t5, 0x14($t7)
.L0046F5A8:
/* 0046F5A8 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046F5AC 8E440004 */  lw    $a0, 4($s2)
/* 0046F5B0 27A50054 */  addiu $a1, $sp, 0x54
/* 0046F5B4 0320F809 */  jalr  $t9
/* 0046F5B8 00000000 */   nop   
/* 0046F5BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F5C0 24010003 */  li    $at, 3
/* 0046F5C4 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F5C8 8E100000 */  lw    $s0, ($s0)
/* 0046F5CC AE020004 */  sw    $v0, 4($s0)
/* 0046F5D0 90580000 */  lbu   $t8, ($v0)
/* 0046F5D4 1701000B */  bne   $t8, $at, .L0046F604
/* 0046F5D8 00000000 */   nop   
/* 0046F5DC 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0046F5E0 24040001 */  li    $a0, 1
/* 0046F5E4 00402825 */  move  $a1, $v0
/* 0046F5E8 0320F809 */  jalr  $t9
/* 0046F5EC 8FA60054 */   lw    $a2, 0x54($sp)
/* 0046F5F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F5F4 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F5F8 8E100000 */  lw    $s0, ($s0)
/* 0046F5FC 1000000A */  b     .L0046F628
/* 0046F600 AE020004 */   sw    $v0, 4($s0)
.L0046F604:
/* 0046F604 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F608 8E040004 */  lw    $a0, 4($s0)
/* 0046F60C 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046F610 0320F809 */  jalr  $t9
/* 0046F614 00000000 */   nop   
/* 0046F618 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F61C 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F620 8E100000 */  lw    $s0, ($s0)
/* 0046F624 AE020004 */  sw    $v0, 4($s0)
.L0046F628:
/* 0046F628 8E480014 */  lw    $t0, 0x14($s2)
/* 0046F62C AE00001C */  sw    $zero, 0x1c($s0)
/* 0046F630 100000D2 */  b     .L0046F97C
/* 0046F634 AE080014 */   sw    $t0, 0x14($s0)
.L0046F638:
/* 0046F638 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046F63C 8E440004 */  lw    $a0, 4($s2)
/* 0046F640 27A50054 */  addiu $a1, $sp, 0x54
/* 0046F644 0320F809 */  jalr  $t9
/* 0046F648 00000000 */   nop   
/* 0046F64C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F650 00402025 */  move  $a0, $v0
/* 0046F654 8F9189C4 */  lw     $s1, %got(stattail)($gp)
/* 0046F658 8E390000 */  lw    $t9, ($s1)
/* 0046F65C AF220004 */  sw    $v0, 4($t9)
/* 0046F660 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F664 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046F668 0320F809 */  jalr  $t9
/* 0046F66C 00000000 */   nop   
/* 0046F670 8E290000 */  lw    $t1, ($s1)
/* 0046F674 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F678 100000C0 */  b     .L0046F97C
/* 0046F67C AD220004 */   sw    $v0, 4($t1)
.L0046F680:
/* 0046F680 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 0046F684 8E440004 */  lw    $a0, 4($s2)
/* 0046F688 27A50054 */  addiu $a1, $sp, 0x54
/* 0046F68C 0320F809 */  jalr  $t9
/* 0046F690 00000000 */   nop   
/* 0046F694 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F698 24010003 */  li    $at, 3
/* 0046F69C 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F6A0 8E100000 */  lw    $s0, ($s0)
/* 0046F6A4 AE020004 */  sw    $v0, 4($s0)
/* 0046F6A8 904A0000 */  lbu   $t2, ($v0)
/* 0046F6AC 1541000B */  bne   $t2, $at, .L0046F6DC
/* 0046F6B0 00000000 */   nop   
/* 0046F6B4 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0046F6B8 24040001 */  li    $a0, 1
/* 0046F6BC 00402825 */  move  $a1, $v0
/* 0046F6C0 0320F809 */  jalr  $t9
/* 0046F6C4 8FA60054 */   lw    $a2, 0x54($sp)
/* 0046F6C8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F6CC 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F6D0 8E100000 */  lw    $s0, ($s0)
/* 0046F6D4 1000000A */  b     .L0046F700
/* 0046F6D8 AE020004 */   sw    $v0, 4($s0)
.L0046F6DC:
/* 0046F6DC 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 0046F6E0 8E040004 */  lw    $a0, 4($s0)
/* 0046F6E4 8FA50054 */  lw    $a1, 0x54($sp)
/* 0046F6E8 0320F809 */  jalr  $t9
/* 0046F6EC 00000000 */   nop   
/* 0046F6F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046F6F4 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F6F8 8E100000 */  lw    $s0, ($s0)
/* 0046F6FC AE020004 */  sw    $v0, 4($s0)
.L0046F700:
/* 0046F700 924E0014 */  lbu   $t6, 0x14($s2)
/* 0046F704 A20E0014 */  sb    $t6, 0x14($s0)
/* 0046F708 8E4B0018 */  lw    $t3, 0x18($s2)
/* 0046F70C AE0B0018 */  sw    $t3, 0x18($s0)
/* 0046F710 8E4C001C */  lw    $t4, 0x1c($s2)
/* 0046F714 AE0C001C */  sw    $t4, 0x1c($s0)
/* 0046F718 8E4D0028 */  lw    $t5, 0x28($s2)
/* 0046F71C AE0D0028 */  sw    $t5, 0x28($s0)
/* 0046F720 8E4F0024 */  lw    $t7, 0x24($s2)
/* 0046F724 AE0F0024 */  sw    $t7, 0x24($s0)
/* 0046F728 8E580030 */  lw    $t8, 0x30($s2)
/* 0046F72C AE180030 */  sw    $t8, 0x30($s0)
/* 0046F730 8E48002C */  lw    $t0, 0x2c($s2)
/* 0046F734 AE08002C */  sw    $t0, 0x2c($s0)
/* 0046F738 8E590020 */  lw    $t9, 0x20($s2)
/* 0046F73C 1000008F */  b     .L0046F97C
/* 0046F740 AE190020 */   sw    $t9, 0x20($s0)
.L0046F744:
/* 0046F744 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0046F748 92490014 */  lbu   $t1, 0x14($s2)
/* 0046F74C 8E100000 */  lw    $s0, ($s0)
/* 0046F750 A2090014 */  sb    $t1, 0x14($s0)
/* 0046F754 8E4A0018 */  lw    $t2, 0x18($s2)
/* 0046F758 10000088 */  b     .L0046F97C
/* 0046F75C AE0A0018 */   sw    $t2, 0x18($s0)
.L0046F760:
/* 0046F760 8F9189C4 */  lw     $s1, %got(stattail)($gp)
/* 0046F764 924E0014 */  lbu   $t6, 0x14($s2)
/* 0046F768 8E300000 */  lw    $s0, ($s1)
/* 0046F76C A20E0014 */  sb    $t6, 0x14($s0)
/* 0046F770 924B0015 */  lbu   $t3, 0x15($s2)
/* 0046F774 A20B0015 */  sb    $t3, 0x15($s0)
/* 0046F778 8E4D0018 */  lw    $t5, 0x18($s2)
/* 0046F77C AE0D0018 */  sw    $t5, 0x18($s0)
/* 0046F780 8E4C001C */  lw    $t4, 0x1c($s2)
/* 0046F784 1000007D */  b     .L0046F97C
/* 0046F788 AE0C001C */   sw    $t4, 0x1c($s0)
.L0046F78C:
/* 0046F78C 2C41004D */  sltiu $at, $v0, 0x4d
/* 0046F790 14200026 */  bnez  $at, .L0046F82C
/* 0046F794 2C41006B */   sltiu $at, $v0, 0x6b
/* 0046F798 14200014 */  bnez  $at, .L0046F7EC
/* 0046F79C 2C410095 */   sltiu $at, $v0, 0x95
/* 0046F7A0 14200005 */  bnez  $at, .L0046F7B8
/* 0046F7A4 2401009B */   li    $at, 155
/* 0046F7A8 1041FDF7 */  beq   $v0, $at, .L0046EF88
/* 0046F7AC 00000000 */   nop   
/* 0046F7B0 10000035 */  b     .L0046F888
/* 0046F7B4 00000000 */   nop   
.L0046F7B8:
/* 0046F7B8 2C41008D */  sltiu $at, $v0, 0x8d
/* 0046F7BC 1020006A */  beqz  $at, .L0046F968
/* 0046F7C0 244FFF87 */   addiu $t7, $v0, -0x79
/* 0046F7C4 2DE10014 */  sltiu $at, $t7, 0x14
/* 0046F7C8 1020002F */  beqz  $at, .L0046F888
/* 0046F7CC 00000000 */   nop   
/* 0046F7D0 8F818044 */  lw    $at, %got(jtbl_1000DADC)($gp)
/* 0046F7D4 000F7880 */  sll   $t7, $t7, 2
/* 0046F7D8 002F0821 */  addu  $at, $at, $t7
/* 0046F7DC 8C2FDADC */  lw    $t7, %lo(jtbl_1000DADC)($at)
/* 0046F7E0 01FC7821 */  addu  $t7, $t7, $gp
/* 0046F7E4 01E00008 */  jr    $t7
/* 0046F7E8 00000000 */   nop   
.L0046F7EC:
/* 0046F7EC 2C41005A */  sltiu $at, $v0, 0x5a
/* 0046F7F0 14200053 */  bnez  $at, .L0046F940
/* 0046F7F4 244AFFAF */   addiu $t2, $v0, -0x51
/* 0046F7F8 24010060 */  li    $at, 96
/* 0046F7FC 1041005F */  beq   $v0, $at, .L0046F97C
/* 0046F800 2458FF99 */   addiu $t8, $v0, -0x67
/* 0046F804 2F010004 */  sltiu $at, $t8, 4
/* 0046F808 1020001F */  beqz  $at, .L0046F888
/* 0046F80C 00000000 */   nop   
/* 0046F810 8F818044 */  lw    $at, %got(jtbl_1000DACC)($gp)
/* 0046F814 0018C080 */  sll   $t8, $t8, 2
/* 0046F818 00380821 */  addu  $at, $at, $t8
/* 0046F81C 8C38DACC */  lw    $t8, %lo(jtbl_1000DACC)($at)
/* 0046F820 031CC021 */  addu  $t8, $t8, $gp
/* 0046F824 03000008 */  jr    $t8
/* 0046F828 00000000 */   nop   
.L0046F82C:
/* 0046F82C 2C410021 */  sltiu $at, $v0, 0x21
/* 0046F830 1420001E */  bnez  $at, .L0046F8AC
/* 0046F834 2C410032 */   sltiu $at, $v0, 0x32
/* 0046F838 1420000D */  bnez  $at, .L0046F870
/* 0046F83C 2C410046 */   sltiu $at, $v0, 0x46
/* 0046F840 1020003A */  beqz  $at, .L0046F92C
/* 0046F844 2448FFC2 */   addiu $t0, $v0, -0x3e
/* 0046F848 2D010008 */  sltiu $at, $t0, 8
/* 0046F84C 1020000E */  beqz  $at, .L0046F888
/* 0046F850 00000000 */   nop   
/* 0046F854 8F818044 */  lw    $at, %got(jtbl_1000DA88)($gp)
/* 0046F858 00084080 */  sll   $t0, $t0, 2
/* 0046F85C 00280821 */  addu  $at, $at, $t0
/* 0046F860 8C28DA88 */  lw    $t0, %lo(jtbl_1000DA88)($at)
/* 0046F864 011C4021 */  addu  $t0, $t0, $gp
/* 0046F868 01000008 */  jr    $t0
/* 0046F86C 00000000 */   nop   
.L0046F870:
/* 0046F870 24010026 */  li    $at, 38
/* 0046F874 1041FF4C */  beq   $v0, $at, .L0046F5A8
/* 0046F878 00000000 */   nop   
/* 0046F87C 24010031 */  li    $at, 49
/* 0046F880 1041FF6D */  beq   $v0, $at, .L0046F638
/* 0046F884 00000000 */   nop   
.L0046F888:
/* 0046F888 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0046F88C 8F868044 */  lw    $a2, %got(RO_1000DA38)($gp)
/* 0046F890 24040001 */  li    $a0, 1
/* 0046F894 240503D8 */  li    $a1, 984
/* 0046F898 2407000A */  li    $a3, 10
/* 0046F89C 0320F809 */  jalr  $t9
/* 0046F8A0 24C6DA38 */   addiu $a2, %lo(RO_1000DA38) # addiu $a2, $a2, -0x25c8
/* 0046F8A4 10000035 */  b     .L0046F97C
/* 0046F8A8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0046F8AC:
/* 0046F8AC 2C410009 */  sltiu $at, $v0, 9
/* 0046F8B0 1420000F */  bnez  $at, .L0046F8F0
/* 0046F8B4 2449FFFB */   addiu $t1, $v0, -5
/* 0046F8B8 2C410017 */  sltiu $at, $v0, 0x17
/* 0046F8BC 50200017 */  beql  $at, $zero, .L0046F91C
/* 0046F8C0 24010020 */   li    $at, 32
/* 0046F8C4 2459FFF1 */  addiu $t9, $v0, -0xf
/* 0046F8C8 2F210008 */  sltiu $at, $t9, 8
/* 0046F8CC 1020FFEE */  beqz  $at, .L0046F888
/* 0046F8D0 00000000 */   nop   
/* 0046F8D4 8F818044 */  lw    $at, %got(jtbl_1000DA68)($gp)
/* 0046F8D8 0019C880 */  sll   $t9, $t9, 2
/* 0046F8DC 00390821 */  addu  $at, $at, $t9
/* 0046F8E0 8C39DA68 */  lw    $t9, %lo(jtbl_1000DA68)($at)
/* 0046F8E4 033CC821 */  addu  $t9, $t9, $gp
/* 0046F8E8 03200008 */  jr    $t9
/* 0046F8EC 00000000 */   nop   
.L0046F8F0:
/* 0046F8F0 2D210004 */  sltiu $at, $t1, 4
/* 0046F8F4 1020FFE4 */  beqz  $at, .L0046F888
/* 0046F8F8 00000000 */   nop   
/* 0046F8FC 8F818044 */  lw    $at, %got(jtbl_1000DA58)($gp)
/* 0046F900 00094880 */  sll   $t1, $t1, 2
/* 0046F904 00290821 */  addu  $at, $at, $t1
/* 0046F908 8C29DA58 */  lw    $t1, %lo(jtbl_1000DA58)($at)
/* 0046F90C 013C4821 */  addu  $t1, $t1, $gp
/* 0046F910 01200008 */  jr    $t1
/* 0046F914 00000000 */   nop   
/* 0046F918 24010020 */  li    $at, 32
.L0046F91C:
/* 0046F91C 1041FEFE */  beq   $v0, $at, .L0046F518
/* 0046F920 00000000 */   nop   
/* 0046F924 1000FFD8 */  b     .L0046F888
/* 0046F928 00000000 */   nop   
.L0046F92C:
/* 0046F92C 2401004C */  li    $at, 76
/* 0046F930 50410013 */  beql  $v0, $at, .L0046F980
/* 0046F934 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0046F938 1000FFD3 */  b     .L0046F888
/* 0046F93C 00000000 */   nop   
.L0046F940:
/* 0046F940 2D410009 */  sltiu $at, $t2, 9
/* 0046F944 1020FFD0 */  beqz  $at, .L0046F888
/* 0046F948 00000000 */   nop   
/* 0046F94C 8F818044 */  lw    $at, %got(jtbl_1000DAA8)($gp)
/* 0046F950 000A5080 */  sll   $t2, $t2, 2
/* 0046F954 002A0821 */  addu  $at, $at, $t2
/* 0046F958 8C2ADAA8 */  lw    $t2, %lo(jtbl_1000DAA8)($at)
/* 0046F95C 015C5021 */  addu  $t2, $t2, $gp
/* 0046F960 01400008 */  jr    $t2
/* 0046F964 00000000 */   nop   
.L0046F968:
/* 0046F968 24010094 */  li    $at, 148
/* 0046F96C 1041FD86 */  beq   $v0, $at, .L0046EF88
/* 0046F970 00000000 */   nop   
/* 0046F974 1000FFC4 */  b     .L0046F888
/* 0046F978 00000000 */   nop   
.L0046F97C:
/* 0046F97C 8FBF0024 */  lw    $ra, 0x24($sp)
.L0046F980:
/* 0046F980 8FB00014 */  lw    $s0, 0x14($sp)
/* 0046F984 8FB10018 */  lw    $s1, 0x18($sp)
/* 0046F988 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0046F98C 03E00008 */  jr    $ra
/* 0046F990 27BD0068 */   addiu $sp, $sp, 0x68
    .type oneloopblockstmt, @function
    .size oneloopblockstmt, .-oneloopblockstmt
    .end oneloopblockstmt

glabel create_edge
    .ent create_edge
    # 0046FA20 new_header_node
    # 0046FCD4 link_jump_in_loop
    # 004713E8 loopunroll
/* 0046F994 3C1C0FBB */  .cpload $t9
/* 0046F998 279CA8FC */  
/* 0046F99C 0399E021 */  
/* 0046F9A0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0046F9A4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0046F9A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0046F9AC AFA40020 */  sw    $a0, 0x20($sp)
/* 0046F9B0 AFA50024 */  sw    $a1, 0x24($sp)
/* 0046F9B4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0046F9B8 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0046F9BC 0320F809 */  jalr  $t9
/* 0046F9C0 24040008 */   li    $a0, 8
/* 0046F9C4 8FAE0024 */  lw    $t6, 0x24($sp)
/* 0046F9C8 8FA30020 */  lw    $v1, 0x20($sp)
/* 0046F9CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046F9D0 AC4E0000 */  sw    $t6, ($v0)
/* 0046F9D4 8C6F0018 */  lw    $t7, 0x18($v1)
/* 0046F9D8 24040008 */  li    $a0, 8
/* 0046F9DC 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0046F9E0 AC4F0004 */  sw    $t7, 4($v0)
/* 0046F9E4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0046F9E8 AC620018 */  sw    $v0, 0x18($v1)
/* 0046F9EC 0320F809 */  jalr  $t9
/* 0046F9F0 00000000 */   nop   
/* 0046F9F4 8FB80020 */  lw    $t8, 0x20($sp)
/* 0046F9F8 8FA30024 */  lw    $v1, 0x24($sp)
/* 0046F9FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046FA00 AC580000 */  sw    $t8, ($v0)
/* 0046FA04 8C790014 */  lw    $t9, 0x14($v1)
/* 0046FA08 AC590004 */  sw    $t9, 4($v0)
/* 0046FA0C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0046FA10 27BD0020 */  addiu $sp, $sp, 0x20
/* 0046FA14 AC620014 */  sw    $v0, 0x14($v1)
/* 0046FA18 03E00008 */  jr    $ra
/* 0046FA1C 00000000 */   nop   
    .type create_edge, @function
    .size create_edge, .-create_edge
    .end create_edge

glabel new_header_node
    .ent new_header_node
    # 0046FCD4 link_jump_in_loop
    # 00470048 pre_loopblock
    # 00470248 post_loopblock
    # 004713E8 loopunroll
/* 0046FA20 3C1C0FBB */  .cpload $t9
/* 0046FA24 279CA870 */  
/* 0046FA28 0399E021 */  
/* 0046FA2C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0046FA30 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0046FA34 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0046FA38 AFA40020 */  sw    $a0, 0x20($sp)
/* 0046FA3C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0046FA40 24040174 */  li    $a0, 372
/* 0046FA44 0320F809 */  jalr  $t9
/* 0046FA48 8F858954 */   lw     $a1, %got(perm_heap)($gp)
/* 0046FA4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046FA50 00402025 */  move  $a0, $v0
/* 0046FA54 8F8389B4 */  lw     $v1, %got(curgraphnode)($gp)
/* 0046FA58 AC620000 */  sw    $v0, ($v1)
/* 0046FA5C 8F9982C8 */  lw    $t9, %call16(init_graphnode)($gp)
/* 0046FA60 0320F809 */  jalr  $t9
/* 0046FA64 00000000 */   nop   
/* 0046FA68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046FA6C 240E0001 */  li    $t6, 1
/* 0046FA70 240F0002 */  li    $t7, 2
/* 0046FA74 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 0046FA78 8F8789B8 */  lw     $a3, %got(curstaticno)($gp)
/* 0046FA7C 8F848C8C */  lw     $a0, %got(loopheader)($gp)
/* 0046FA80 8CA50000 */  lw    $a1, ($a1)
/* 0046FA84 8CE30000 */  lw    $v1, ($a3)
/* 0046FA88 8F828C84 */  lw     $v0, %got(loopbody)($gp)
/* 0046FA8C A0AE0006 */  sb    $t6, 6($a1)
/* 0046FA90 A0AF0007 */  sb    $t7, 7($a1)
/* 0046FA94 A4A30008 */  sh    $v1, 8($a1)
/* 0046FA98 8C840000 */  lw    $a0, ($a0)
/* 0046FA9C 90A6000B */  lbu   $a2, 0xb($a1)
/* 0046FAA0 24780001 */  addiu $t8, $v1, 1
/* 0046FAA4 9099000A */  lbu   $t9, 0xa($a0)
/* 0046FAA8 00065E00 */  sll   $t3, $a2, 0x18
/* 0046FAAC 000B67C2 */  srl   $t4, $t3, 0x1f
/* 0046FAB0 A0B9000A */  sb    $t9, 0xa($a1)
/* 0046FAB4 9088000B */  lbu   $t0, 0xb($a0)
/* 0046FAB8 ACF80000 */  sw    $t8, ($a3)
/* 0046FABC 00084E00 */  sll   $t1, $t0, 0x18
/* 0046FAC0 000957C2 */  srl   $t2, $t1, 0x1f
/* 0046FAC4 014C6826 */  xor   $t5, $t2, $t4
/* 0046FAC8 000D77C0 */  sll   $t6, $t5, 0x1f
/* 0046FACC 000E7E02 */  srl   $t7, $t6, 0x18
/* 0046FAD0 01E6C026 */  xor   $t8, $t7, $a2
/* 0046FAD4 A0B8000B */  sb    $t8, 0xb($a1)
/* 0046FAD8 8C99002C */  lw    $t9, 0x2c($a0)
/* 0046FADC ACB9002C */  sw    $t9, 0x2c($a1)
/* 0046FAE0 8C880134 */  lw    $t0, 0x134($a0)
/* 0046FAE4 ACA80134 */  sw    $t0, 0x134($a1)
/* 0046FAE8 8C420000 */  lw    $v0, ($v0)
/* 0046FAEC ACA2000C */  sw    $v0, 0xc($a1)
/* 0046FAF0 8C490010 */  lw    $t1, 0x10($v0)
/* 0046FAF4 ACA90010 */  sw    $t1, 0x10($a1)
/* 0046FAF8 8C4B0010 */  lw    $t3, 0x10($v0)
/* 0046FAFC AD65000C */  sw    $a1, 0xc($t3)
/* 0046FB00 93AA0023 */  lbu   $t2, 0x23($sp)
/* 0046FB04 AC450010 */  sw    $a1, 0x10($v0)
/* 0046FB08 ACA00014 */  sw    $zero, 0x14($a1)
/* 0046FB0C 11400007 */  beqz  $t2, .L0046FB2C
/* 0046FB10 ACA00018 */   sw    $zero, 0x18($a1)
/* 0046FB14 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 0046FB18 0320F809 */  jalr  $t9
/* 0046FB1C 00000000 */   nop   
/* 0046FB20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046FB24 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 0046FB28 8CA50000 */  lw    $a1, ($a1)
.L0046FB2C:
/* 0046FB2C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0046FB30 8F818C8C */  lw     $at, %got(loopheader)($gp)
/* 0046FB34 27BD0020 */  addiu $sp, $sp, 0x20
/* 0046FB38 03E00008 */  jr    $ra
/* 0046FB3C AC250000 */   sw    $a1, ($at)
    .type new_header_node, @function
    .size new_header_node, .-new_header_node
    .end new_header_node

glabel record_labels
    .ent record_labels
    # 004713E8 loopunroll
/* 0046FB40 3C1C0FBB */  .cpload $t9
/* 0046FB44 279CA750 */  
/* 0046FB48 0399E021 */  
/* 0046FB4C 8F858C88 */  lw     $a1, %got(loopbodyend)($gp)
/* 0046FB50 8F828C84 */  lw     $v0, %got(loopbody)($gp)
/* 0046FB54 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0046FB58 8CA50000 */  lw    $a1, ($a1)
/* 0046FB5C 8C420000 */  lw    $v0, ($v0)
/* 0046FB60 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0046FB64 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0046FB68 AFB30024 */  sw    $s3, 0x24($sp)
/* 0046FB6C AFB20020 */  sw    $s2, 0x20($sp)
/* 0046FB70 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046FB74 10A20029 */  beq   $a1, $v0, .L0046FC1C
/* 0046FB78 AFB00018 */   sw    $s0, 0x18($sp)
/* 0046FB7C 00408025 */  move  $s0, $v0
/* 0046FB80 8F938954 */  lw     $s3, %got(perm_heap)($gp)
/* 0046FB84 8F928C94 */  lw     $s2, %got(looplab)($gp)
/* 0046FB88 8F918CA0 */  lw     $s1, %got(labelmap_unused)($gp)
/* 0046FB8C 8E0E0020 */  lw    $t6, 0x20($s0)
.L0046FB90:
/* 0046FB90 8DC20008 */  lw    $v0, 8($t6)
/* 0046FB94 8C430010 */  lw    $v1, 0x10($v0)
/* 0046FB98 52030004 */  beql  $s0, $v1, .L0046FBAC
/* 0046FB9C 8C4F0008 */   lw    $t7, 8($v0)
/* 0046FBA0 10000003 */  b     .L0046FBB0
/* 0046FBA4 00608025 */   move  $s0, $v1
/* 0046FBA8 8C4F0008 */  lw    $t7, 8($v0)
.L0046FBAC:
/* 0046FBAC 8DF00010 */  lw    $s0, 0x10($t7)
.L0046FBB0:
/* 0046FBB0 8E030000 */  lw    $v1, ($s0)
/* 0046FBB4 10600017 */  beqz  $v1, .L0046FC14
/* 0046FBB8 00000000 */   nop   
/* 0046FBBC 8E580000 */  lw    $t8, ($s2)
/* 0046FBC0 13030014 */  beq   $t8, $v1, .L0046FC14
/* 0046FBC4 00000000 */   nop   
/* 0046FBC8 8E220000 */  lw    $v0, ($s1)
/* 0046FBCC 8C44000C */  lw    $a0, 0xc($v0)
/* 0046FBD0 AC430000 */  sw    $v1, ($v0)
/* 0046FBD4 10800003 */  beqz  $a0, .L0046FBE4
/* 0046FBD8 00000000 */   nop   
/* 0046FBDC 1000000D */  b     .L0046FC14
/* 0046FBE0 AE240000 */   sw    $a0, ($s1)
.L0046FBE4:
/* 0046FBE4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0046FBE8 24040010 */  li    $a0, 16
/* 0046FBEC 02602825 */  move  $a1, $s3
/* 0046FBF0 0320F809 */  jalr  $t9
/* 0046FBF4 00000000 */   nop   
/* 0046FBF8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046FBFC 8E390000 */  lw    $t9, ($s1)
/* 0046FC00 8F858C88 */  lw     $a1, %got(loopbodyend)($gp)
/* 0046FC04 AF22000C */  sw    $v0, 0xc($t9)
/* 0046FC08 AE220000 */  sw    $v0, ($s1)
/* 0046FC0C AC40000C */  sw    $zero, 0xc($v0)
/* 0046FC10 8CA50000 */  lw    $a1, ($a1)
.L0046FC14:
/* 0046FC14 5605FFDE */  bnel  $s0, $a1, .L0046FB90
/* 0046FC18 8E0E0020 */   lw    $t6, 0x20($s0)
.L0046FC1C:
/* 0046FC1C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0046FC20 8FB00018 */  lw    $s0, 0x18($sp)
/* 0046FC24 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0046FC28 8FB20020 */  lw    $s2, 0x20($sp)
/* 0046FC2C 8FB30024 */  lw    $s3, 0x24($sp)
/* 0046FC30 03E00008 */  jr    $ra
/* 0046FC34 27BD0030 */   addiu $sp, $sp, 0x30
    .type record_labels, @function
    .size record_labels, .-record_labels
    .end record_labels

glabel new_set_of_labels
    .ent new_set_of_labels
    # 004713E8 loopunroll
/* 0046FC38 3C1C0FBB */  .cpload $t9
/* 0046FC3C 279CA658 */  
/* 0046FC40 0399E021 */  
/* 0046FC44 8F828C9C */  lw     $v0, %got(labelmap_head)($gp)
/* 0046FC48 8F838CA0 */  lw     $v1, %got(labelmap_unused)($gp)
/* 0046FC4C 8C420000 */  lw    $v0, ($v0)
/* 0046FC50 8C630000 */  lw    $v1, ($v1)
/* 0046FC54 1043000C */  beq   $v0, $v1, .L0046FC88
/* 0046FC58 00000000 */   nop   
/* 0046FC5C 8F8489D8 */  lw     $a0, %got(maxlabnam)($gp)
/* 0046FC60 8F8589D8 */  lw     $a1, %got(maxlabnam)($gp)
/* 0046FC64 8C840000 */  lw    $a0, ($a0)
/* 0046FC68 248E0001 */  addiu $t6, $a0, 1
.L0046FC6C:
/* 0046FC6C AC4E0004 */  sw    $t6, 4($v0)
/* 0046FC70 AC400008 */  sw    $zero, 8($v0)
/* 0046FC74 8C42000C */  lw    $v0, 0xc($v0)
/* 0046FC78 ACAE0000 */  sw    $t6, ($a1)
/* 0046FC7C 01C02025 */  move  $a0, $t6
/* 0046FC80 5443FFFA */  bnel  $v0, $v1, .L0046FC6C
/* 0046FC84 248E0001 */   addiu $t6, $a0, 1
.L0046FC88:
/* 0046FC88 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 0046FC8C 8F818C98 */  lw     $at, %got(iter_start_bb)($gp)
/* 0046FC90 8DEF0000 */  lw    $t7, ($t7)
/* 0046FC94 03E00008 */  jr    $ra
/* 0046FC98 AC2F0000 */   sw    $t7, ($at)
    .type new_set_of_labels, @function
    .size new_set_of_labels, .-new_set_of_labels
    .end new_set_of_labels

glabel get_labelmap
    .ent get_labelmap
    # 0046FCD4 link_jump_in_loop
/* 0046FC9C 3C1C0FBB */  .cpload $t9
/* 0046FCA0 279CA5F4 */  
/* 0046FCA4 0399E021 */  
/* 0046FCA8 8F838C9C */  lw     $v1, %got(labelmap_head)($gp)
/* 0046FCAC 8C630000 */  lw    $v1, ($v1)
.L0046FCB0:
/* 0046FCB0 8C6E0000 */  lw    $t6, ($v1)
/* 0046FCB4 148E0003 */  bne   $a0, $t6, .L0046FCC4
/* 0046FCB8 00000000 */   nop   
/* 0046FCBC 03E00008 */  jr    $ra
/* 0046FCC0 00601025 */   move  $v0, $v1

.L0046FCC4:
/* 0046FCC4 1000FFFA */  b     .L0046FCB0
/* 0046FCC8 8C63000C */   lw    $v1, 0xc($v1)
/* 0046FCCC 03E00008 */  jr    $ra
/* 0046FCD0 00000000 */   nop   
    .type get_labelmap, @function
    .size get_labelmap, .-get_labelmap
    .end get_labelmap

glabel link_jump_in_loop
    .ent link_jump_in_loop
    # 00470048 pre_loopblock
    # 00470248 post_loopblock
/* 0046FCD4 3C1C0FBB */  .cpload $t9
/* 0046FCD8 279CA5BC */  
/* 0046FCDC 0399E021 */  
/* 0046FCE0 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0046FCE4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0046FCE8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0046FCEC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046FCF0 AFB00018 */  sw    $s0, 0x18($sp)
/* 0046FCF4 AFA50034 */  sw    $a1, 0x34($sp)
/* 0046FCF8 00803825 */  move  $a3, $a0
/* 0046FCFC 100000B2 */  b     .L0046FFC8
/* 0046FD00 90820000 */   lbu   $v0, ($a0)
/* 0046FD04 8CEE0010 */  lw    $t6, 0x10($a3)
.L0046FD08:
/* 0046FD08 8CE30014 */  lw    $v1, 0x14($a3)
/* 0046FD0C 8DC20018 */  lw    $v0, 0x18($t6)
/* 0046FD10 8C500000 */  lw    $s0, ($v0)
/* 0046FD14 8E0F0000 */  lw    $t7, ($s0)
/* 0046FD18 106F0003 */  beq   $v1, $t7, .L0046FD28
/* 0046FD1C 00000000 */   nop   
/* 0046FD20 8C580004 */  lw    $t8, 4($v0)
/* 0046FD24 8F100000 */  lw    $s0, ($t8)
.L0046FD28:
/* 0046FD28 8F998C84 */  lw     $t9, %got(loopbody)($gp)
/* 0046FD2C 96020008 */  lhu   $v0, 8($s0)
/* 0046FD30 02002825 */  move  $a1, $s0
/* 0046FD34 8F390000 */  lw    $t9, ($t9)
/* 0046FD38 97280008 */  lhu   $t0, 8($t9)
/* 0046FD3C 0048082B */  sltu  $at, $v0, $t0
/* 0046FD40 14200007 */  bnez  $at, .L0046FD60
/* 0046FD44 00000000 */   nop   
/* 0046FD48 8F898C88 */  lw     $t1, %got(loopbodyend)($gp)
/* 0046FD4C 8D290000 */  lw    $t1, ($t1)
/* 0046FD50 952A0008 */  lhu   $t2, 8($t1)
/* 0046FD54 0142082B */  sltu  $at, $t2, $v0
/* 0046FD58 1020000B */  beqz  $at, .L0046FD88
/* 0046FD5C 00000000 */   nop   
.L0046FD60:
/* 0046FD60 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 0046FD64 8F9189B4 */  lw     $s1, %got(curgraphnode)($gp)
/* 0046FD68 AFA70030 */  sw    $a3, 0x30($sp)
/* 0046FD6C 0320F809 */  jalr  $t9
/* 0046FD70 8E240000 */   lw    $a0, ($s1)
/* 0046FD74 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046FD78 8FA70030 */  lw    $a3, 0x30($sp)
/* 0046FD7C 8F8589C4 */  lw     $a1, %got(stattail)($gp)
/* 0046FD80 10000019 */  b     .L0046FDE8
/* 0046FD84 8CA50000 */   lw    $a1, ($a1)
.L0046FD88:
/* 0046FD88 8F998594 */  lw    $t9, %call16(get_labelmap)($gp)
/* 0046FD8C 00602025 */  move  $a0, $v1
/* 0046FD90 AFA70030 */  sw    $a3, 0x30($sp)
/* 0046FD94 0320F809 */  jalr  $t9
/* 0046FD98 00000000 */   nop   
/* 0046FD9C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046FDA0 8C4B0004 */  lw    $t3, 4($v0)
/* 0046FDA4 8FA70030 */  lw    $a3, 0x30($sp)
/* 0046FDA8 8F8589C4 */  lw     $a1, %got(stattail)($gp)
/* 0046FDAC 8CA50000 */  lw    $a1, ($a1)
/* 0046FDB0 ACAB0014 */  sw    $t3, 0x14($a1)
/* 0046FDB4 8C4C0008 */  lw    $t4, 8($v0)
/* 0046FDB8 1180000B */  beqz  $t4, .L0046FDE8
/* 0046FDBC 00000000 */   nop   
/* 0046FDC0 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 0046FDC4 8F9189B4 */  lw     $s1, %got(curgraphnode)($gp)
/* 0046FDC8 8C450008 */  lw    $a1, 8($v0)
/* 0046FDCC AFA70030 */  sw    $a3, 0x30($sp)
/* 0046FDD0 0320F809 */  jalr  $t9
/* 0046FDD4 8E240000 */   lw    $a0, ($s1)
/* 0046FDD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046FDDC 8FA70030 */  lw    $a3, 0x30($sp)
/* 0046FDE0 8F8589C4 */  lw     $a1, %got(stattail)($gp)
/* 0046FDE4 8CA50000 */  lw    $a1, ($a1)
.L0046FDE8:
/* 0046FDE8 8F9189B4 */  lw     $s1, %got(curgraphnode)($gp)
/* 0046FDEC 8E2D0000 */  lw    $t5, ($s1)
/* 0046FDF0 ADA50020 */  sw    $a1, 0x20($t5)
/* 0046FDF4 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 0046FDF8 AFA70030 */  sw    $a3, 0x30($sp)
/* 0046FDFC 0320F809 */  jalr  $t9
/* 0046FE00 00000000 */   nop   
/* 0046FE04 8FA70030 */  lw    $a3, 0x30($sp)
/* 0046FE08 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046FE0C 90E40000 */  lbu   $a0, ($a3)
/* 0046FE10 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 0046FE14 38840088 */  xori  $a0, $a0, 0x88
/* 0046FE18 0320F809 */  jalr  $t9
/* 0046FE1C 0004202B */   sltu  $a0, $zero, $a0
/* 0046FE20 93AE0037 */  lbu   $t6, 0x37($sp)
/* 0046FE24 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046FE28 11C00007 */  beqz  $t6, .L0046FE48
/* 0046FE2C 00000000 */   nop   
/* 0046FE30 8F8F8C84 */  lw     $t7, %got(loopbody)($gp)
/* 0046FE34 8E390000 */  lw    $t9, ($s1)
/* 0046FE38 8DEF0000 */  lw    $t7, ($t7)
/* 0046FE3C 8DF800E8 */  lw    $t8, 0xe8($t7)
/* 0046FE40 1000007C */  b     .L00470034
/* 0046FE44 AF3800E8 */   sw    $t8, 0xe8($t9)
.L0046FE48:
/* 0046FE48 8F888C84 */  lw     $t0, %got(loopbody)($gp)
/* 0046FE4C 8E2B0000 */  lw    $t3, ($s1)
/* 0046FE50 8D080000 */  lw    $t0, ($t0)
/* 0046FE54 8D0900E8 */  lw    $t1, 0xe8($t0)
/* 0046FE58 8D2A0010 */  lw    $t2, 0x10($t1)
/* 0046FE5C 10000075 */  b     .L00470034
/* 0046FE60 AD6A00E8 */   sw    $t2, 0xe8($t3)
.L0046FE64:
/* 0046FE64 8F9189B4 */  lw     $s1, %got(curgraphnode)($gp)
/* 0046FE68 8F8C89C4 */  lw     $t4, %got(stattail)($gp)
/* 0046FE6C 8E2D0000 */  lw    $t5, ($s1)
/* 0046FE70 8D8C0000 */  lw    $t4, ($t4)
/* 0046FE74 ADAC0020 */  sw    $t4, 0x20($t5)
/* 0046FE78 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 0046FE7C 0320F809 */  jalr  $t9
/* 0046FE80 00000000 */   nop   
/* 0046FE84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046FE88 00002025 */  move  $a0, $zero
/* 0046FE8C 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 0046FE90 0320F809 */  jalr  $t9
/* 0046FE94 00000000 */   nop   
/* 0046FE98 93AE0037 */  lbu   $t6, 0x37($sp)
/* 0046FE9C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046FEA0 11C00007 */  beqz  $t6, .L0046FEC0
/* 0046FEA4 00000000 */   nop   
/* 0046FEA8 8F8F8C84 */  lw     $t7, %got(loopbody)($gp)
/* 0046FEAC 8E390000 */  lw    $t9, ($s1)
/* 0046FEB0 8DEF0000 */  lw    $t7, ($t7)
/* 0046FEB4 8DF800E8 */  lw    $t8, 0xe8($t7)
/* 0046FEB8 1000005E */  b     .L00470034
/* 0046FEBC AF3800E8 */   sw    $t8, 0xe8($t9)
.L0046FEC0:
/* 0046FEC0 8F888C84 */  lw     $t0, %got(loopbody)($gp)
/* 0046FEC4 8E2B0000 */  lw    $t3, ($s1)
/* 0046FEC8 8D080000 */  lw    $t0, ($t0)
/* 0046FECC 8D0900E8 */  lw    $t1, 0xe8($t0)
/* 0046FED0 8D2A0010 */  lw    $t2, 0x10($t1)
/* 0046FED4 10000057 */  b     .L00470034
/* 0046FED8 AD6A00E8 */   sw    $t2, 0xe8($t3)
.L0046FEDC:
/* 0046FEDC 8F998594 */  lw    $t9, %call16(get_labelmap)($gp)
/* 0046FEE0 8CE40014 */  lw    $a0, 0x14($a3)
/* 0046FEE4 0320F809 */  jalr  $t9
/* 0046FEE8 00000000 */   nop   
/* 0046FEEC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046FEF0 8C4C0004 */  lw    $t4, 4($v0)
/* 0046FEF4 00403025 */  move  $a2, $v0
/* 0046FEF8 8F8589C4 */  lw     $a1, %got(stattail)($gp)
/* 0046FEFC 8F9189B4 */  lw     $s1, %got(curgraphnode)($gp)
/* 0046FF00 8CA50000 */  lw    $a1, ($a1)
/* 0046FF04 8E240000 */  lw    $a0, ($s1)
/* 0046FF08 ACAC0014 */  sw    $t4, 0x14($a1)
/* 0046FF0C ACA00018 */  sw    $zero, 0x18($a1)
/* 0046FF10 8C4D0004 */  lw    $t5, 4($v0)
/* 0046FF14 AC8D0000 */  sw    $t5, ($a0)
/* 0046FF18 8C4E0008 */  lw    $t6, 8($v0)
/* 0046FF1C 01C002B6 */  tne   $t6, $zero, 0xa
/* 0046FF20 8F838C98 */  lw     $v1, %got(iter_start_bb)($gp)
/* 0046FF24 AC440008 */  sw    $a0, 8($v0)
/* 0046FF28 00808025 */  move  $s0, $a0
/* 0046FF2C 8C630000 */  lw    $v1, ($v1)
/* 0046FF30 50640041 */  beql  $v1, $a0, .L00470038
/* 0046FF34 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0046FF38 8E0F001C */  lw    $t7, 0x1c($s0)
.L0046FF3C:
/* 0046FF3C 8DF8000C */  lw    $t8, 0xc($t7)
/* 0046FF40 8F100010 */  lw    $s0, 0x10($t8)
/* 0046FF44 8E020020 */  lw    $v0, 0x20($s0)
/* 0046FF48 90590000 */  lbu   $t9, ($v0)
/* 0046FF4C 2728FFE0 */  addiu $t0, $t9, -0x20
/* 0046FF50 2D090080 */  sltiu $t1, $t0, 0x80
/* 0046FF54 11200009 */  beqz  $t1, .L0046FF7C
/* 0046FF58 00000000 */   nop   
/* 0046FF5C 8F8C8044 */  lw    $t4, %got(D_10011038)($gp)
/* 0046FF60 00085143 */  sra   $t2, $t0, 5
/* 0046FF64 000A5880 */  sll   $t3, $t2, 2
/* 0046FF68 258C1038 */  addiu $t4, %lo(D_10011038) # addiu $t4, $t4, 0x1038
/* 0046FF6C 018B6821 */  addu  $t5, $t4, $t3
/* 0046FF70 8DAE0000 */  lw    $t6, ($t5)
/* 0046FF74 010E7804 */  sllv  $t7, $t6, $t0
/* 0046FF78 29E90000 */  slti  $t1, $t7, 0
.L0046FF7C:
/* 0046FF7C 1120000E */  beqz  $t1, .L0046FFB8
/* 0046FF80 00000000 */   nop   
/* 0046FF84 8CD90004 */  lw    $t9, 4($a2)
/* 0046FF88 8C4A0014 */  lw    $t2, 0x14($v0)
/* 0046FF8C 172A000A */  bne   $t9, $t2, .L0046FFB8
/* 0046FF90 00000000 */   nop   
/* 0046FF94 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 0046FF98 02002025 */  move  $a0, $s0
/* 0046FF9C 8E250000 */  lw    $a1, ($s1)
/* 0046FFA0 0320F809 */  jalr  $t9
/* 0046FFA4 AFA60028 */   sw    $a2, 0x28($sp)
/* 0046FFA8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0046FFAC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0046FFB0 8F838C98 */  lw     $v1, %got(iter_start_bb)($gp)
/* 0046FFB4 8C630000 */  lw    $v1, ($v1)
.L0046FFB8:
/* 0046FFB8 5603FFE0 */  bnel  $s0, $v1, .L0046FF3C
/* 0046FFBC 8E0F001C */   lw    $t7, 0x1c($s0)
/* 0046FFC0 1000001D */  b     .L00470038
/* 0046FFC4 8FBF0024 */   lw    $ra, 0x24($sp)
.L0046FFC8:
/* 0046FFC8 2C41006B */  sltiu $at, $v0, 0x6b
/* 0046FFCC 14200008 */  bnez  $at, .L0046FFF0
/* 0046FFD0 2401007F */   li    $at, 127
/* 0046FFD4 5041FF4C */  beql  $v0, $at, .L0046FD08
/* 0046FFD8 8CEE0010 */   lw    $t6, 0x10($a3)
/* 0046FFDC 24010088 */  li    $at, 136
/* 0046FFE0 5041FF49 */  beql  $v0, $at, .L0046FD08
/* 0046FFE4 8CEE0010 */   lw    $t6, 0x10($a3)
/* 0046FFE8 1000000A */  b     .L00470014
/* 0046FFEC 00000000 */   nop   
.L0046FFF0:
/* 0046FFF0 24010026 */  li    $at, 38
/* 0046FFF4 5041FF44 */  beql  $v0, $at, .L0046FD08
/* 0046FFF8 8CEE0010 */   lw    $t6, 0x10($a3)
/* 0046FFFC 24010042 */  li    $at, 66
/* 00470000 1041FFB6 */  beq   $v0, $at, .L0046FEDC
/* 00470004 00000000 */   nop   
/* 00470008 2401006A */  li    $at, 106
/* 0047000C 1041FF95 */  beq   $v0, $at, .L0046FE64
/* 00470010 00000000 */   nop   
.L00470014:
/* 00470014 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00470018 8F868044 */  lw    $a2, %got(RO_1000DB2C)($gp)
/* 0047001C 24040001 */  li    $a0, 1
/* 00470020 24050599 */  li    $a1, 1433
/* 00470024 2407000A */  li    $a3, 10
/* 00470028 0320F809 */  jalr  $t9
/* 0047002C 24C6DB2C */   addiu $a2, %lo(RO_1000DB2C) # addiu $a2, $a2, -0x24d4
/* 00470030 8FBC0020 */  lw    $gp, 0x20($sp)
.L00470034:
/* 00470034 8FBF0024 */  lw    $ra, 0x24($sp)
.L00470038:
/* 00470038 8FB00018 */  lw    $s0, 0x18($sp)
/* 0047003C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00470040 03E00008 */  jr    $ra
/* 00470044 27BD0030 */   addiu $sp, $sp, 0x30
    .type link_jump_in_loop, @function
    .size link_jump_in_loop, .-link_jump_in_loop
    .end link_jump_in_loop

glabel pre_loopblock
    .ent pre_loopblock
    # 004713E8 loopunroll
/* 00470048 3C1C0FBB */  .cpload $t9
/* 0047004C 279CA248 */  
/* 00470050 0399E021 */  
/* 00470054 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00470058 AFB40024 */  sw    $s4, 0x24($sp)
/* 0047005C 8F948C84 */  lw     $s4, %got(loopbody)($gp)
/* 00470060 AFBE0038 */  sw    $fp, 0x38($sp)
/* 00470064 8F9E8C7C */  lw     $fp, %got(incr_stat)($gp)
/* 00470068 8E8E0000 */  lw    $t6, ($s4)
/* 0047006C AFBF003C */  sw    $ra, 0x3c($sp)
/* 00470070 AFBC0034 */  sw    $gp, 0x34($sp)
/* 00470074 AFB70030 */  sw    $s7, 0x30($sp)
/* 00470078 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0047007C AFB50028 */  sw    $s5, 0x28($sp)
/* 00470080 AFB30020 */  sw    $s3, 0x20($sp)
/* 00470084 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00470088 AFB10018 */  sw    $s1, 0x18($sp)
/* 0047008C AFB00014 */  sw    $s0, 0x14($sp)
/* 00470090 AFA40040 */  sw    $a0, 0x40($sp)
/* 00470094 AFA50044 */  sw    $a1, 0x44($sp)
/* 00470098 8FCF0000 */  lw    $t7, ($fp)
/* 0047009C 8DD0001C */  lw    $s0, 0x1c($t6)
/* 004700A0 30B300FF */  andi  $s3, $a1, 0xff
/* 004700A4 309700FF */  andi  $s7, $a0, 0xff
/* 004700A8 120F005B */  beq   $s0, $t7, .L00470218
/* 004700AC 24120042 */   li    $s2, 66
/* 004700B0 8F9689C4 */  lw     $s6, %got(stattail)($gp)
/* 004700B4 8F958C94 */  lw     $s5, %got(looplab)($gp)
/* 004700B8 8F9189B4 */  lw     $s1, %got(curgraphnode)($gp)
/* 004700BC 92020000 */  lbu   $v0, ($s0)
.L004700C0:
/* 004700C0 16420005 */  bne   $s2, $v0, .L004700D8
/* 004700C4 00000000 */   nop   
/* 004700C8 8EB80000 */  lw    $t8, ($s5)
/* 004700CC 8E190014 */  lw    $t9, 0x14($s0)
/* 004700D0 5319004E */  beql  $t8, $t9, .L0047020C
/* 004700D4 8E100008 */   lw    $s0, 8($s0)
.L004700D8:
/* 004700D8 1642001A */  bne   $s2, $v0, .L00470144
/* 004700DC 00000000 */   nop   
/* 004700E0 8E220000 */  lw    $v0, ($s1)
/* 004700E4 8C48001C */  lw    $t0, 0x1c($v0)
/* 004700E8 11000016 */  beqz  $t0, .L00470144
/* 004700EC 00000000 */   nop   
/* 004700F0 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 004700F4 8EC90000 */  lw    $t1, ($s6)
/* 004700F8 0320F809 */  jalr  $t9
/* 004700FC AC490020 */   sw    $t1, 0x20($v0)
/* 00470100 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00470104 24040001 */  li    $a0, 1
/* 00470108 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 0047010C 0320F809 */  jalr  $t9
/* 00470110 00000000 */   nop   
/* 00470114 12600006 */  beqz  $s3, .L00470130
/* 00470118 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0047011C 8E8A0000 */  lw    $t2, ($s4)
/* 00470120 8E2C0000 */  lw    $t4, ($s1)
/* 00470124 8D4B00E8 */  lw    $t3, 0xe8($t2)
/* 00470128 10000006 */  b     .L00470144
/* 0047012C AD8B00E8 */   sw    $t3, 0xe8($t4)
.L00470130:
/* 00470130 8E8D0000 */  lw    $t5, ($s4)
/* 00470134 8E380000 */  lw    $t8, ($s1)
/* 00470138 8DAE00E8 */  lw    $t6, 0xe8($t5)
/* 0047013C 8DCF0010 */  lw    $t7, 0x10($t6)
/* 00470140 AF0F00E8 */  sw    $t7, 0xe8($t8)
.L00470144:
/* 00470144 52E00009 */  beql  $s7, $zero, .L0047016C
/* 00470148 92020000 */   lbu   $v0, ($s0)
/* 0047014C 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 00470150 02002025 */  move  $a0, $s0
/* 00470154 0320F809 */  jalr  $t9
/* 00470158 00000000 */   nop   
/* 0047015C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00470160 10000015 */  b     .L004701B8
/* 00470164 92020000 */   lbu   $v0, ($s0)
/* 00470168 92020000 */  lbu   $v0, ($s0)
.L0047016C:
/* 0047016C 2C5900A0 */  sltiu $t9, $v0, 0xa0
/* 00470170 13200009 */  beqz  $t9, .L00470198
/* 00470174 00000000 */   nop   
/* 00470178 8F8A8044 */  lw    $t2, %got(D_10011058)($gp)
/* 0047017C 00024143 */  sra   $t0, $v0, 5
/* 00470180 00084880 */  sll   $t1, $t0, 2
/* 00470184 254A1058 */  addiu $t2, %lo(D_10011058) # addiu $t2, $t2, 0x1058
/* 00470188 01495821 */  addu  $t3, $t2, $t1
/* 0047018C 8D6C0000 */  lw    $t4, ($t3)
/* 00470190 004C6804 */  sllv  $t5, $t4, $v0
/* 00470194 29B90000 */  slti  $t9, $t5, 0
.L00470198:
/* 00470198 53200008 */  beql  $t9, $zero, .L004701BC
/* 0047019C 244FFFE0 */   addiu $t7, $v0, -0x20
/* 004701A0 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 004701A4 02002025 */  move  $a0, $s0
/* 004701A8 0320F809 */  jalr  $t9
/* 004701AC 00000000 */   nop   
/* 004701B0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004701B4 92020000 */  lbu   $v0, ($s0)
.L004701B8:
/* 004701B8 244FFFE0 */  addiu $t7, $v0, -0x20
.L004701BC:
/* 004701BC 2DF80080 */  sltiu $t8, $t7, 0x80
/* 004701C0 13000009 */  beqz  $t8, .L004701E8
/* 004701C4 00000000 */   nop   
/* 004701C8 8F898044 */  lw    $t1, %got(D_10011048)($gp)
/* 004701CC 000F4143 */  sra   $t0, $t7, 5
/* 004701D0 00085080 */  sll   $t2, $t0, 2
/* 004701D4 25291048 */  addiu $t1, %lo(D_10011048) # addiu $t1, $t1, 0x1048
/* 004701D8 012A5821 */  addu  $t3, $t1, $t2
/* 004701DC 8D6C0000 */  lw    $t4, ($t3)
/* 004701E0 01EC6804 */  sllv  $t5, $t4, $t7
/* 004701E4 29B80000 */  slti  $t8, $t5, 0
.L004701E8:
/* 004701E8 53000008 */  beql  $t8, $zero, .L0047020C
/* 004701EC 8E100008 */   lw    $s0, 8($s0)
/* 004701F0 8F998598 */  lw    $t9, %call16(link_jump_in_loop)($gp)
/* 004701F4 02002025 */  move  $a0, $s0
/* 004701F8 02602825 */  move  $a1, $s3
/* 004701FC 0320F809 */  jalr  $t9
/* 00470200 00000000 */   nop   
/* 00470204 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00470208 8E100008 */  lw    $s0, 8($s0)
.L0047020C:
/* 0047020C 8FD90000 */  lw    $t9, ($fp)
/* 00470210 5619FFAB */  bnel  $s0, $t9, .L004700C0
/* 00470214 92020000 */   lbu   $v0, ($s0)
.L00470218:
/* 00470218 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0047021C 8FB00014 */  lw    $s0, 0x14($sp)
/* 00470220 8FB10018 */  lw    $s1, 0x18($sp)
/* 00470224 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00470228 8FB30020 */  lw    $s3, 0x20($sp)
/* 0047022C 8FB40024 */  lw    $s4, 0x24($sp)
/* 00470230 8FB50028 */  lw    $s5, 0x28($sp)
/* 00470234 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00470238 8FB70030 */  lw    $s7, 0x30($sp)
/* 0047023C 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00470240 03E00008 */  jr    $ra
/* 00470244 27BD0040 */   addiu $sp, $sp, 0x40
    .type pre_loopblock, @function
    .size pre_loopblock, .-pre_loopblock
    .end pre_loopblock

glabel post_loopblock
    .ent post_loopblock
    # 004713E8 loopunroll
/* 00470248 3C1C0FBB */  .cpload $t9
/* 0047024C 279CA048 */  
/* 00470250 0399E021 */  
/* 00470254 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00470258 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0047025C 8F968C88 */  lw     $s6, %got(loopbodyend)($gp)
/* 00470260 8F8E8C7C */  lw     $t6, %got(incr_stat)($gp)
/* 00470264 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00470268 8ECF0000 */  lw    $t7, ($s6)
/* 0047026C 8DCE0000 */  lw    $t6, ($t6)
/* 00470270 AFBE0038 */  sw    $fp, 0x38($sp)
/* 00470274 AFBC0034 */  sw    $gp, 0x34($sp)
/* 00470278 AFB70030 */  sw    $s7, 0x30($sp)
/* 0047027C AFB50028 */  sw    $s5, 0x28($sp)
/* 00470280 AFB40024 */  sw    $s4, 0x24($sp)
/* 00470284 AFB30020 */  sw    $s3, 0x20($sp)
/* 00470288 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0047028C AFB10018 */  sw    $s1, 0x18($sp)
/* 00470290 AFB00014 */  sw    $s0, 0x14($sp)
/* 00470294 AFA40040 */  sw    $a0, 0x40($sp)
/* 00470298 AFA50044 */  sw    $a1, 0x44($sp)
/* 0047029C AFA60048 */  sw    $a2, 0x48($sp)
/* 004702A0 8DF80020 */  lw    $t8, 0x20($t7)
/* 004702A4 8DD00008 */  lw    $s0, 8($t6)
/* 004702A8 30B200FF */  andi  $s2, $a1, 0xff
/* 004702AC 30D300FF */  andi  $s3, $a2, 0xff
/* 004702B0 12180073 */  beq   $s0, $t8, .L00470480
/* 004702B4 309500FF */   andi  $s5, $a0, 0xff
/* 004702B8 241E0042 */  li    $fp, 66
/* 004702BC 24170011 */  li    $s7, 17
/* 004702C0 8F948C84 */  lw     $s4, %got(loopbody)($gp)
/* 004702C4 8F9189B4 */  lw     $s1, %got(curgraphnode)($gp)
/* 004702C8 92020000 */  lbu   $v0, ($s0)
.L004702CC:
/* 004702CC 16E20016 */  bne   $s7, $v0, .L00470328
/* 004702D0 00000000 */   nop   
/* 004702D4 8E040018 */  lw    $a0, 0x18($s0)
/* 004702D8 18800064 */  blez  $a0, .L0047046C
/* 004702DC 24840001 */   addiu $a0, $a0, 1
/* 004702E0 2485FFFF */  addiu $a1, $a0, -1
/* 004702E4 30A50003 */  andi  $a1, $a1, 3
/* 004702E8 10A00007 */  beqz  $a1, .L00470308
/* 004702EC 24020001 */   li    $v0, 1
/* 004702F0 24A30001 */  addiu $v1, $a1, 1
.L004702F4:
/* 004702F4 24420001 */  addiu $v0, $v0, 1
/* 004702F8 1462FFFE */  bne   $v1, $v0, .L004702F4
/* 004702FC 8E100008 */   lw    $s0, 8($s0)
/* 00470300 5044005B */  beql  $v0, $a0, .L00470470
/* 00470304 8ECF0000 */   lw    $t7, ($s6)
.L00470308:
/* 00470308 8E100008 */  lw    $s0, 8($s0)
/* 0047030C 24420004 */  addiu $v0, $v0, 4
/* 00470310 8E100008 */  lw    $s0, 8($s0)
/* 00470314 8E100008 */  lw    $s0, 8($s0)
/* 00470318 1444FFFB */  bne   $v0, $a0, .L00470308
/* 0047031C 8E100008 */   lw    $s0, 8($s0)
/* 00470320 10000053 */  b     .L00470470
/* 00470324 8ECF0000 */   lw    $t7, ($s6)
.L00470328:
/* 00470328 1240001D */  beqz  $s2, .L004703A0
/* 0047032C 00000000 */   nop   
/* 00470330 17C2001B */  bne   $fp, $v0, .L004703A0
/* 00470334 00000000 */   nop   
/* 00470338 8E220000 */  lw    $v0, ($s1)
/* 0047033C 8C59001C */  lw    $t9, 0x1c($v0)
/* 00470340 13200017 */  beqz  $t9, .L004703A0
/* 00470344 00000000 */   nop   
/* 00470348 8F8889C4 */  lw     $t0, %got(stattail)($gp)
/* 0047034C 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 00470350 8D080000 */  lw    $t0, ($t0)
/* 00470354 0320F809 */  jalr  $t9
/* 00470358 AC480020 */   sw    $t0, 0x20($v0)
/* 0047035C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00470360 24040001 */  li    $a0, 1
/* 00470364 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 00470368 0320F809 */  jalr  $t9
/* 0047036C 00000000 */   nop   
/* 00470370 12600006 */  beqz  $s3, .L0047038C
/* 00470374 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00470378 8E890000 */  lw    $t1, ($s4)
/* 0047037C 8E2B0000 */  lw    $t3, ($s1)
/* 00470380 8D2A00E8 */  lw    $t2, 0xe8($t1)
/* 00470384 10000006 */  b     .L004703A0
/* 00470388 AD6A00E8 */   sw    $t2, 0xe8($t3)
.L0047038C:
/* 0047038C 8E8C0000 */  lw    $t4, ($s4)
/* 00470390 8E2F0000 */  lw    $t7, ($s1)
/* 00470394 8D8D00E8 */  lw    $t5, 0xe8($t4)
/* 00470398 8DAE0010 */  lw    $t6, 0x10($t5)
/* 0047039C ADEE00E8 */  sw    $t6, 0xe8($t7)
.L004703A0:
/* 004703A0 52A00008 */  beql  $s5, $zero, .L004703C4
/* 004703A4 92180000 */   lbu   $t8, ($s0)
/* 004703A8 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 004703AC 02002025 */  move  $a0, $s0
/* 004703B0 0320F809 */  jalr  $t9
/* 004703B4 00000000 */   nop   
/* 004703B8 10000014 */  b     .L0047040C
/* 004703BC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004703C0 92180000 */  lbu   $t8, ($s0)
.L004703C4:
/* 004703C4 2F1900A0 */  sltiu $t9, $t8, 0xa0
/* 004703C8 13200009 */  beqz  $t9, .L004703F0
/* 004703CC 00000000 */   nop   
/* 004703D0 8F8A8044 */  lw    $t2, %got(D_1001107C)($gp)
/* 004703D4 00184143 */  sra   $t0, $t8, 5
/* 004703D8 00084880 */  sll   $t1, $t0, 2
/* 004703DC 254A107C */  addiu $t2, %lo(D_1001107C) # addiu $t2, $t2, 0x107c
/* 004703E0 01495821 */  addu  $t3, $t2, $t1
/* 004703E4 8D6C0000 */  lw    $t4, ($t3)
/* 004703E8 030C6804 */  sllv  $t5, $t4, $t8
/* 004703EC 29B90000 */  slti  $t9, $t5, 0
.L004703F0:
/* 004703F0 13200006 */  beqz  $t9, .L0047040C
/* 004703F4 00000000 */   nop   
/* 004703F8 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 004703FC 02002025 */  move  $a0, $s0
/* 00470400 0320F809 */  jalr  $t9
/* 00470404 00000000 */   nop   
/* 00470408 8FBC0034 */  lw    $gp, 0x34($sp)
.L0047040C:
/* 0047040C 52400018 */  beql  $s2, $zero, .L00470470
/* 00470410 8ECF0000 */   lw    $t7, ($s6)
/* 00470414 920F0000 */  lbu   $t7, ($s0)
/* 00470418 25E8FFE0 */  addiu $t0, $t7, -0x20
/* 0047041C 2D0A0080 */  sltiu $t2, $t0, 0x80
/* 00470420 1140000A */  beqz  $t2, .L0047044C
/* 00470424 00000000 */   nop   
/* 00470428 8F8C8044 */  lw    $t4, %got(D_1001106C)($gp)
/* 0047042C 00084943 */  sra   $t1, $t0, 5
/* 00470430 00095880 */  sll   $t3, $t1, 2
/* 00470434 258C106C */  addiu $t4, %lo(D_1001106C) # addiu $t4, $t4, 0x106c
/* 00470438 018BC021 */  addu  $t8, $t4, $t3
/* 0047043C 8F0D0000 */  lw    $t5, ($t8)
/* 00470440 010D7004 */  sllv  $t6, $t5, $t0
/* 00470444 29D90000 */  slti  $t9, $t6, 0
/* 00470448 03205025 */  move  $t2, $t9
.L0047044C:
/* 0047044C 51400008 */  beql  $t2, $zero, .L00470470
/* 00470450 8ECF0000 */   lw    $t7, ($s6)
/* 00470454 8F998598 */  lw    $t9, %call16(link_jump_in_loop)($gp)
/* 00470458 02002025 */  move  $a0, $s0
/* 0047045C 02602825 */  move  $a1, $s3
/* 00470460 0320F809 */  jalr  $t9
/* 00470464 00000000 */   nop   
/* 00470468 8FBC0034 */  lw    $gp, 0x34($sp)
.L0047046C:
/* 0047046C 8ECF0000 */  lw    $t7, ($s6)
.L00470470:
/* 00470470 8E100008 */  lw    $s0, 8($s0)
/* 00470474 8DE90020 */  lw    $t1, 0x20($t7)
/* 00470478 5609FF94 */  bnel  $s0, $t1, .L004702CC
/* 0047047C 92020000 */   lbu   $v0, ($s0)
.L00470480:
/* 00470480 8FBF003C */  lw    $ra, 0x3c($sp)
/* 00470484 8FB00014 */  lw    $s0, 0x14($sp)
/* 00470488 8FB10018 */  lw    $s1, 0x18($sp)
/* 0047048C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00470490 8FB30020 */  lw    $s3, 0x20($sp)
/* 00470494 8FB40024 */  lw    $s4, 0x24($sp)
/* 00470498 8FB50028 */  lw    $s5, 0x28($sp)
/* 0047049C 8FB6002C */  lw    $s6, 0x2c($sp)
/* 004704A0 8FB70030 */  lw    $s7, 0x30($sp)
/* 004704A4 8FBE0038 */  lw    $fp, 0x38($sp)
/* 004704A8 03E00008 */  jr    $ra
/* 004704AC 27BD0040 */   addiu $sp, $sp, 0x40
    .type post_loopblock, @function
    .size post_loopblock, .-post_loopblock
    .end post_loopblock

glabel termination_test
    .ent termination_test
    # 004713E8 loopunroll
/* 004704B0 3C1C0FBB */  .cpload $t9
/* 004704B4 279C9DE0 */  
/* 004704B8 0399E021 */  
/* 004704BC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004704C0 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 004704C4 AFB00014 */  sw    $s0, 0x14($sp)
/* 004704C8 00808025 */  move  $s0, $a0
/* 004704CC AFBF001C */  sw    $ra, 0x1c($sp)
/* 004704D0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004704D4 AFA5002C */  sw    $a1, 0x2c($sp)
/* 004704D8 0320F809 */  jalr  $t9
/* 004704DC 90840000 */   lbu   $a0, ($a0)
/* 004704E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004704E4 8E040004 */  lw    $a0, 4($s0)
/* 004704E8 27A50024 */  addiu $a1, $sp, 0x24
/* 004704EC 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 004704F0 0320F809 */  jalr  $t9
/* 004704F4 00000000 */   nop   
/* 004704F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004704FC 00402025 */  move  $a0, $v0
/* 00470500 8F8E89C4 */  lw     $t6, %got(stattail)($gp)
/* 00470504 8DCE0000 */  lw    $t6, ($t6)
/* 00470508 ADC20004 */  sw    $v0, 4($t6)
/* 0047050C 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 00470510 8FA50024 */  lw    $a1, 0x24($sp)
/* 00470514 0320F809 */  jalr  $t9
/* 00470518 00000000 */   nop   
/* 0047051C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470520 8FB8002C */  lw    $t8, 0x2c($sp)
/* 00470524 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00470528 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 0047052C 8C630000 */  lw    $v1, ($v1)
/* 00470530 AC620004 */  sw    $v0, 4($v1)
/* 00470534 8E0F001C */  lw    $t7, 0x1c($s0)
/* 00470538 01F80019 */  multu $t7, $t8
/* 0047053C 0000C812 */  mflo  $t9
/* 00470540 AC79001C */  sw    $t9, 0x1c($v1)
/* 00470544 8E080020 */  lw    $t0, 0x20($s0)
/* 00470548 AC680020 */  sw    $t0, 0x20($v1)
/* 0047054C 92090027 */  lbu   $t1, 0x27($s0)
/* 00470550 A0690027 */  sb    $t1, 0x27($v1)
/* 00470554 920A0025 */  lbu   $t2, 0x25($s0)
/* 00470558 A06A0025 */  sb    $t2, 0x25($v1)
/* 0047055C 8E0B0014 */  lw    $t3, 0x14($s0)
/* 00470560 8FB00014 */  lw    $s0, 0x14($sp)
/* 00470564 27BD0028 */  addiu $sp, $sp, 0x28
/* 00470568 03E00008 */  jr    $ra
/* 0047056C AC6B0014 */   sw    $t3, 0x14($v1)
    .type termination_test, @function
    .size termination_test, .-termination_test
    .end termination_test

glabel expr_instr
    .ent expr_instr
    # 00470570 expr_instr
    # 00470698 estimate_instr
/* 00470570 3C1C0FBB */  .cpload $t9
/* 00470574 279C9D20 */  
/* 00470578 0399E021 */  
/* 0047057C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00470580 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00470584 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00470588 90820000 */  lbu   $v0, ($a0)
/* 0047058C 00802825 */  move  $a1, $a0
/* 00470590 244EFFFF */  addiu $t6, $v0, -1
/* 00470594 2DC10008 */  sltiu $at, $t6, 8
/* 00470598 10200032 */  beqz  $at, .L00470664
/* 0047059C 00000000 */   nop   
/* 004705A0 8F818044 */  lw    $at, %got(jtbl_1000DB40)($gp)
/* 004705A4 000E7080 */  sll   $t6, $t6, 2
/* 004705A8 002E0821 */  addu  $at, $at, $t6
/* 004705AC 8C2EDB40 */  lw    $t6, %lo(jtbl_1000DB40)($at)
/* 004705B0 01DC7021 */  addu  $t6, $t6, $gp
/* 004705B4 01C00008 */  jr    $t6
/* 004705B8 00000000 */   nop   
.L004705BC:
/* 004705BC 10000032 */  b     .L00470688
/* 004705C0 00001025 */   move  $v0, $zero
.L004705C4:
/* 004705C4 8F9985A8 */  lw    $t9, %call16(expr_instr)($gp)
/* 004705C8 8CA40024 */  lw    $a0, 0x24($a1)
/* 004705CC 0320F809 */  jalr  $t9
/* 004705D0 00000000 */   nop   
/* 004705D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004705D8 1000002B */  b     .L00470688
/* 004705DC 24420001 */   addiu $v0, $v0, 1
.L004705E0:
/* 004705E0 8F9985A8 */  lw    $t9, %call16(expr_instr)($gp)
/* 004705E4 8CA40034 */  lw    $a0, 0x34($a1)
/* 004705E8 0320F809 */  jalr  $t9
/* 004705EC 00000000 */   nop   
/* 004705F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004705F4 10000024 */  b     .L00470688
/* 004705F8 24420001 */   addiu $v0, $v0, 1
.L004705FC:
/* 004705FC 8F9985A8 */  lw    $t9, %call16(expr_instr)($gp)
/* 00470600 8CA40024 */  lw    $a0, 0x24($a1)
/* 00470604 AFA50028 */  sw    $a1, 0x28($sp)
/* 00470608 0320F809 */  jalr  $t9
/* 0047060C 00000000 */   nop   
/* 00470610 8FA50028 */  lw    $a1, 0x28($sp)
/* 00470614 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470618 24430001 */  addiu $v1, $v0, 1
/* 0047061C 90AF0020 */  lbu   $t7, 0x20($a1)
/* 00470620 8F998DBC */  lw     $t9, %got(optab)($gp)
/* 00470624 000FC080 */  sll   $t8, $t7, 2
/* 00470628 030FC023 */  subu  $t8, $t8, $t7
/* 0047062C 03194021 */  addu  $t0, $t8, $t9
/* 00470630 91090002 */  lbu   $t1, 2($t0)
/* 00470634 11200009 */  beqz  $t1, .L0047065C
/* 00470638 00000000 */   nop   
/* 0047063C 8F9985A8 */  lw    $t9, %call16(expr_instr)($gp)
/* 00470640 8CA40028 */  lw    $a0, 0x28($a1)
/* 00470644 AFA30020 */  sw    $v1, 0x20($sp)
/* 00470648 0320F809 */  jalr  $t9
/* 0047064C 00000000 */   nop   
/* 00470650 8FA30020 */  lw    $v1, 0x20($sp)
/* 00470654 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470658 00621821 */  addu  $v1, $v1, $v0
.L0047065C:
/* 0047065C 1000000A */  b     .L00470688
/* 00470660 00601025 */   move  $v0, $v1
.L00470664:
/* 00470664 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00470668 8F868044 */  lw    $a2, %got(RO_1000DB36)($gp)
/* 0047066C 24040001 */  li    $a0, 1
/* 00470670 2405062A */  li    $a1, 1578
/* 00470674 2407000A */  li    $a3, 10
/* 00470678 0320F809 */  jalr  $t9
/* 0047067C 24C6DB36 */   addiu $a2, %lo(RO_1000DB36) # addiu $a2, $a2, -0x24ca
/* 00470680 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470684 8FA20024 */  lw    $v0, 0x24($sp)
.L00470688:
/* 00470688 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047068C 27BD0028 */  addiu $sp, $sp, 0x28
/* 00470690 03E00008 */  jr    $ra
/* 00470694 00000000 */   nop   
    .type expr_instr, @function
    .size expr_instr, .-expr_instr
    .end expr_instr

glabel estimate_instr
    .ent estimate_instr
    # 004713E8 loopunroll
/* 00470698 3C1C0FBB */  .cpload $t9
/* 0047069C 279C9BF8 */  
/* 004706A0 0399E021 */  
/* 004706A4 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004706A8 AFB00014 */  sw    $s0, 0x14($sp)
/* 004706AC AFBF002C */  sw    $ra, 0x2c($sp)
/* 004706B0 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004706B4 AFB40024 */  sw    $s4, 0x24($sp)
/* 004706B8 AFB30020 */  sw    $s3, 0x20($sp)
/* 004706BC AFB2001C */  sw    $s2, 0x1c($sp)
/* 004706C0 AFB10018 */  sw    $s1, 0x18($sp)
/* 004706C4 8C90001C */  lw    $s0, 0x1c($a0)
/* 004706C8 8CAE0020 */  lw    $t6, 0x20($a1)
/* 004706CC 00A09025 */  move  $s2, $a1
/* 004706D0 00008825 */  move  $s1, $zero
/* 004706D4 120E0066 */  beq   $s0, $t6, .L00470870
/* 004706D8 24140067 */   li    $s4, 103
/* 004706DC 2413007B */  li    $s3, 123
/* 004706E0 92040000 */  lbu   $a0, ($s0)
.L004706E4:
/* 004706E4 2C8F00A0 */  sltiu $t7, $a0, 0xa0
/* 004706E8 11E00009 */  beqz  $t7, .L00470710
/* 004706EC 2483FFE0 */   addiu $v1, $a0, -0x20
/* 004706F0 8F888044 */  lw    $t0, %got(D_100110B4)($gp)
/* 004706F4 0004C143 */  sra   $t8, $a0, 5
/* 004706F8 0018C880 */  sll   $t9, $t8, 2
/* 004706FC 250810B4 */  addiu $t0, %lo(D_100110B4) # addiu $t0, $t0, 0x10b4
/* 00470700 01194821 */  addu  $t1, $t0, $t9
/* 00470704 8D2A0000 */  lw    $t2, ($t1)
/* 00470708 008A5804 */  sllv  $t3, $t2, $a0
/* 0047070C 296F0000 */  slti  $t7, $t3, 0
.L00470710:
/* 00470710 11E00053 */  beqz  $t7, .L00470860
/* 00470714 2C6D0060 */   sltiu $t5, $v1, 0x60
/* 00470718 10000005 */  b     .L00470730
/* 0047071C 308200FF */   andi  $v0, $a0, 0xff
.L00470720:
/* 00470720 10000013 */  b     .L00470770
/* 00470724 26310010 */   addiu $s1, $s1, 0x10
.L00470728:
/* 00470728 10000011 */  b     .L00470770
/* 0047072C 26310001 */   addiu $s1, $s1, 1
.L00470730:
/* 00470730 2C410068 */  sltiu $at, $v0, 0x68
/* 00470734 14200005 */  bnez  $at, .L0047074C
/* 00470738 248FFFA0 */   addiu $t7, $a0, -0x60
/* 0047073C 1053000C */  beq   $v0, $s3, .L00470770
/* 00470740 00000000 */   nop   
/* 00470744 1000000A */  b     .L00470770
/* 00470748 26310001 */   addiu $s1, $s1, 1
.L0047074C:
/* 0047074C 2C41005A */  sltiu $at, $v0, 0x5a
/* 00470750 10200005 */  beqz  $at, .L00470768
/* 00470754 2C410058 */   sltiu $at, $v0, 0x58
/* 00470758 1020FFF1 */  beqz  $at, .L00470720
/* 0047075C 00000000 */   nop   
/* 00470760 10000003 */  b     .L00470770
/* 00470764 26310001 */   addiu $s1, $s1, 1
.L00470768:
/* 00470768 1454FFEF */  bne   $v0, $s4, .L00470728
/* 0047076C 00000000 */   nop   
.L00470770:
/* 00470770 11A00009 */  beqz  $t5, .L00470798
/* 00470774 00000000 */   nop   
/* 00470778 8F888044 */  lw    $t0, %got(D_100110A8)($gp)
/* 0047077C 00037143 */  sra   $t6, $v1, 5
/* 00470780 000EC080 */  sll   $t8, $t6, 2
/* 00470784 250810A8 */  addiu $t0, %lo(D_100110A8) # addiu $t0, $t0, 0x10a8
/* 00470788 0118C821 */  addu  $t9, $t0, $t8
/* 0047078C 8F290000 */  lw    $t1, ($t9)
/* 00470790 00695004 */  sllv  $t2, $t1, $v1
/* 00470794 294D0000 */  slti  $t5, $t2, 0
.L00470798:
/* 00470798 11A0000A */  beqz  $t5, .L004707C4
/* 0047079C 2DEE0040 */   sltiu $t6, $t7, 0x40
/* 004707A0 8F9985A8 */  lw    $t9, %call16(expr_instr)($gp)
/* 004707A4 8E0C0004 */  lw    $t4, 4($s0)
/* 004707A8 0320F809 */  jalr  $t9
/* 004707AC 8D840034 */   lw    $a0, 0x34($t4)
/* 004707B0 92030000 */  lbu   $v1, ($s0)
/* 004707B4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004707B8 02228821 */  addu  $s1, $s1, $v0
/* 004707BC 10000015 */  b     .L00470814
/* 004707C0 2463FFE0 */   addiu $v1, $v1, -0x20
.L004707C4:
/* 004707C4 11C00009 */  beqz  $t6, .L004707EC
/* 004707C8 00000000 */   nop   
/* 004707CC 8F998044 */  lw    $t9, %got(D_100110A0)($gp)
/* 004707D0 000F4143 */  sra   $t0, $t7, 5
/* 004707D4 0008C080 */  sll   $t8, $t0, 2
/* 004707D8 273910A0 */  addiu $t9, %lo(D_100110A0) # addiu $t9, $t9, 0x10a0
/* 004707DC 03384821 */  addu  $t1, $t9, $t8
/* 004707E0 8D2A0000 */  lw    $t2, ($t1)
/* 004707E4 01EA5804 */  sllv  $t3, $t2, $t7
/* 004707E8 296E0000 */  slti  $t6, $t3, 0
.L004707EC:
/* 004707EC 55C0000A */  bnezl $t6, .L00470818
/* 004707F0 2C6C0080 */   sltiu $t4, $v1, 0x80
/* 004707F4 8F9985A8 */  lw    $t9, %call16(expr_instr)($gp)
/* 004707F8 8E040004 */  lw    $a0, 4($s0)
/* 004707FC 0320F809 */  jalr  $t9
/* 00470800 00000000 */   nop   
/* 00470804 92030000 */  lbu   $v1, ($s0)
/* 00470808 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0047080C 02228821 */  addu  $s1, $s1, $v0
/* 00470810 2463FFE0 */  addiu $v1, $v1, -0x20
.L00470814:
/* 00470814 2C6C0080 */  sltiu $t4, $v1, 0x80
.L00470818:
/* 00470818 11800009 */  beqz  $t4, .L00470840
/* 0047081C 00000000 */   nop   
/* 00470820 8F988044 */  lw    $t8, %got(D_10011090)($gp)
/* 00470824 00034143 */  sra   $t0, $v1, 5
/* 00470828 0008C880 */  sll   $t9, $t0, 2
/* 0047082C 27181090 */  addiu $t8, %lo(D_10011090) # addiu $t8, $t8, 0x1090
/* 00470830 03194821 */  addu  $t1, $t8, $t9
/* 00470834 8D2A0000 */  lw    $t2, ($t1)
/* 00470838 006A7804 */  sllv  $t7, $t2, $v1
/* 0047083C 29EC0000 */  slti  $t4, $t7, 0
.L00470840:
/* 00470840 51800008 */  beql  $t4, $zero, .L00470864
/* 00470844 8E100008 */   lw    $s0, 8($s0)
/* 00470848 8F9985A8 */  lw    $t9, %call16(expr_instr)($gp)
/* 0047084C 8E040014 */  lw    $a0, 0x14($s0)
/* 00470850 0320F809 */  jalr  $t9
/* 00470854 00000000 */   nop   
/* 00470858 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0047085C 02228821 */  addu  $s1, $s1, $v0
.L00470860:
/* 00470860 8E100008 */  lw    $s0, 8($s0)
.L00470864:
/* 00470864 8E4D0020 */  lw    $t5, 0x20($s2)
/* 00470868 560DFF9E */  bnel  $s0, $t5, .L004706E4
/* 0047086C 92040000 */   lbu   $a0, ($s0)
.L00470870:
/* 00470870 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00470874 02201025 */  move  $v0, $s1
/* 00470878 8FB10018 */  lw    $s1, 0x18($sp)
/* 0047087C 8FB00014 */  lw    $s0, 0x14($sp)
/* 00470880 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00470884 8FB30020 */  lw    $s3, 0x20($sp)
/* 00470888 8FB40024 */  lw    $s4, 0x24($sp)
/* 0047088C 03E00008 */  jr    $ra
/* 00470890 27BD0030 */   addiu $sp, $sp, 0x30
    .type estimate_instr, @function
    .size estimate_instr, .-estimate_instr
    .end estimate_instr

glabel change_adj_node
    .ent change_adj_node
.L00470894:
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
/* 00470894 8C8E0000 */  lw    $t6, ($a0)
/* 00470898 14AE0003 */  bne   $a1, $t6, .L004708A8
/* 0047089C 00000000 */   nop   
/* 004708A0 03E00008 */  jr    $ra
/* 004708A4 AC860000 */   sw    $a2, ($a0)

.L004708A8:
/* 004708A8 1000FFFA */  b     .L00470894
/* 004708AC 8C840004 */   lw    $a0, 4($a0)
/* 004708B0 03E00008 */  jr    $ra
/* 004708B4 00000000 */   nop   
    .type change_adj_node, @function
    .size change_adj_node, .-change_adj_node
    .end change_adj_node

glabel del_adj_node
    .ent del_adj_node
    # 004713E8 loopunroll
/* 004708B8 8C820000 */  lw    $v0, ($a0)
/* 004708BC 8C4E0000 */  lw    $t6, ($v0)
/* 004708C0 54AE0005 */  bnel  $a1, $t6, .L004708D8
/* 004708C4 8C440004 */   lw    $a0, 4($v0)
/* 004708C8 8C4F0004 */  lw    $t7, 4($v0)
/* 004708CC 03E00008 */  jr    $ra
/* 004708D0 AC8F0000 */   sw    $t7, ($a0)

/* 004708D4 8C440004 */  lw    $a0, 4($v0)
.L004708D8:
/* 004708D8 00401825 */  move  $v1, $v0
/* 004708DC 8C980000 */  lw    $t8, ($a0)
/* 004708E0 50B80007 */  beql  $a1, $t8, .L00470900
/* 004708E4 8C880004 */   lw    $t0, 4($a0)
/* 004708E8 00801825 */  move  $v1, $a0
.L004708EC:
/* 004708EC 8C840004 */  lw    $a0, 4($a0)
/* 004708F0 8C990000 */  lw    $t9, ($a0)
/* 004708F4 54B9FFFD */  bnel  $a1, $t9, .L004708EC
/* 004708F8 00801825 */   move  $v1, $a0
/* 004708FC 8C880004 */  lw    $t0, 4($a0)
.L00470900:
/* 00470900 AC680004 */  sw    $t0, 4($v1)
/* 00470904 03E00008 */  jr    $ra
/* 00470908 00000000 */   nop   
    .type del_adj_node, @function
    .size del_adj_node, .-del_adj_node
    .end del_adj_node

glabel form_bop
    .ent form_bop
    # 004713E8 loopunroll
/* 0047090C 3C1C0FBB */  .cpload $t9
/* 00470910 279C9984 */  
/* 00470914 0399E021 */  
/* 00470918 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0047091C 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 00470920 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00470924 AFB00014 */  sw    $s0, 0x14($sp)
/* 00470928 AFA40030 */  sw    $a0, 0x30($sp)
/* 0047092C 308700FF */  andi  $a3, $a0, 0xff
/* 00470930 00C08025 */  move  $s0, $a2
/* 00470934 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00470938 00E02025 */  move  $a0, $a3
/* 0047093C A3A70033 */  sb    $a3, 0x33($sp)
/* 00470940 0320F809 */  jalr  $t9
/* 00470944 AFA50034 */   sw    $a1, 0x34($sp)
/* 00470948 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047094C 304EFFFF */  andi  $t6, $v0, 0xffff
/* 00470950 000E7880 */  sll   $t7, $t6, 2
/* 00470954 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 00470958 A7A20028 */  sh    $v0, 0x28($sp)
/* 0047095C 8FA50034 */  lw    $a1, 0x34($sp)
/* 00470960 01F8C821 */  addu  $t9, $t7, $t8
/* 00470964 8F240000 */  lw    $a0, ($t9)
/* 00470968 93A70033 */  lbu   $a3, 0x33($sp)
/* 0047096C 00001825 */  move  $v1, $zero
/* 00470970 1080001B */  beqz  $a0, .L004709E0
/* 00470974 24060004 */   li    $a2, 4
/* 00470978 90880000 */  lbu   $t0, ($a0)
.L0047097C:
/* 0047097C 54C80014 */  bnel  $a2, $t0, .L004709D0
/* 00470980 8C84001C */   lw    $a0, 0x1c($a0)
/* 00470984 90890020 */  lbu   $t1, 0x20($a0)
/* 00470988 54E90011 */  bnel  $a3, $t1, .L004709D0
/* 0047098C 8C84001C */   lw    $a0, 0x1c($a0)
/* 00470990 90AA0001 */  lbu   $t2, 1($a1)
/* 00470994 908B0001 */  lbu   $t3, 1($a0)
/* 00470998 554B000D */  bnel  $t2, $t3, .L004709D0
/* 0047099C 8C84001C */   lw    $a0, 0x1c($a0)
/* 004709A0 8C8C0024 */  lw    $t4, 0x24($a0)
/* 004709A4 54AC000A */  bnel  $a1, $t4, .L004709D0
/* 004709A8 8C84001C */   lw    $a0, 0x1c($a0)
/* 004709AC 8C8D0028 */  lw    $t5, 0x28($a0)
/* 004709B0 560D0007 */  bnel  $s0, $t5, .L004709D0
/* 004709B4 8C84001C */   lw    $a0, 0x1c($a0)
/* 004709B8 908E003E */  lbu   $t6, 0x3e($a0)
/* 004709BC 55C00004 */  bnezl $t6, .L004709D0
/* 004709C0 8C84001C */   lw    $a0, 0x1c($a0)
/* 004709C4 10000002 */  b     .L004709D0
/* 004709C8 24030001 */   li    $v1, 1
/* 004709CC 8C84001C */  lw    $a0, 0x1c($a0)
.L004709D0:
/* 004709D0 14600003 */  bnez  $v1, .L004709E0
/* 004709D4 00000000 */   nop   
/* 004709D8 5480FFE8 */  bnezl $a0, .L0047097C
/* 004709DC 90880000 */   lbu   $t0, ($a0)
.L004709E0:
/* 004709E0 14600027 */  bnez  $v1, .L00470A80
/* 004709E4 00000000 */   nop   
/* 004709E8 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 004709EC 97A40028 */  lhu   $a0, 0x28($sp)
/* 004709F0 AFA50034 */  sw    $a1, 0x34($sp)
/* 004709F4 0320F809 */  jalr  $t9
/* 004709F8 A3A70033 */   sb    $a3, 0x33($sp)
/* 004709FC 8FA50034 */  lw    $a1, 0x34($sp)
/* 00470A00 93A70033 */  lbu   $a3, 0x33($sp)
/* 00470A04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470A08 24060004 */  li    $a2, 4
/* 00470A0C A0460000 */  sb    $a2, ($v0)
/* 00470A10 A0470020 */  sb    $a3, 0x20($v0)
/* 00470A14 90AF0001 */  lbu   $t7, 1($a1)
/* 00470A18 00402025 */  move  $a0, $v0
/* 00470A1C 240A0001 */  li    $t2, 1
/* 00470A20 A04F0001 */  sb    $t7, 1($v0)
/* 00470A24 90B80000 */  lbu   $t8, ($a1)
/* 00470A28 2401005F */  li    $at, 95
/* 00470A2C 50D80005 */  beql  $a2, $t8, .L00470A44
/* 00470A30 90A80023 */   lbu   $t0, 0x23($a1)
/* 00470A34 31F900FF */  andi  $t9, $t7, 0xff
/* 00470A38 10000003 */  b     .L00470A48
/* 00470A3C A0590023 */   sb    $t9, 0x23($v0)
/* 00470A40 90A80023 */  lbu   $t0, 0x23($a1)
.L00470A44:
/* 00470A44 A0480023 */  sb    $t0, 0x23($v0)
.L00470A48:
/* 00470A48 8F8989B4 */  lw     $t1, %got(curgraphnode)($gp)
/* 00470A4C AC450024 */  sw    $a1, 0x24($v0)
/* 00470A50 AC500028 */  sw    $s0, 0x28($v0)
/* 00470A54 8D290000 */  lw    $t1, ($t1)
/* 00470A58 A44A0006 */  sh    $t2, 6($v0)
/* 00470A5C A040003E */  sb    $zero, 0x3e($v0)
/* 00470A60 AC400030 */  sw    $zero, 0x30($v0)
/* 00470A64 A0400005 */  sb    $zero, 5($v0)
/* 00470A68 A0400004 */  sb    $zero, 4($v0)
/* 00470A6C 14E1000A */  bne   $a3, $at, .L00470A98
/* 00470A70 AC490010 */   sw    $t1, 0x10($v0)
/* 00470A74 AC400038 */  sw    $zero, 0x38($v0)
/* 00470A78 10000007 */  b     .L00470A98
/* 00470A7C AC40003C */   sw    $zero, 0x3c($v0)
.L00470A80:
/* 00470A80 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 00470A84 AFA40024 */  sw    $a0, 0x24($sp)
/* 00470A88 0320F809 */  jalr  $t9
/* 00470A8C 00000000 */   nop   
/* 00470A90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470A94 8FA40024 */  lw    $a0, 0x24($sp)
.L00470A98:
/* 00470A98 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00470A9C 8FB00014 */  lw    $s0, 0x14($sp)
/* 00470AA0 27BD0030 */  addiu $sp, $sp, 0x30
/* 00470AA4 03E00008 */  jr    $ra
/* 00470AA8 00801025 */   move  $v0, $a0
    .type form_bop, @function
    .size form_bop, .-form_bop
    .end form_bop

glabel form_rem
    .ent form_rem
    # 004713E8 loopunroll
/* 00470AAC 3C1C0FBB */  .cpload $t9
/* 00470AB0 279C97E4 */  
/* 00470AB4 0399E021 */  
/* 00470AB8 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00470ABC 8F9986F8 */  lw    $t9, %call16(is_power2)($gp)
/* 00470AC0 AFB00018 */  sw    $s0, 0x18($sp)
/* 00470AC4 00808025 */  move  $s0, $a0
/* 00470AC8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00470ACC AFBC0020 */  sw    $gp, 0x20($sp)
/* 00470AD0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00470AD4 00A02025 */  move  $a0, $a1
/* 00470AD8 0320F809 */  jalr  $t9
/* 00470ADC AFA50044 */   sw    $a1, 0x44($sp)
/* 00470AE0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00470AE4 10400004 */  beqz  $v0, .L00470AF8
/* 00470AE8 8FA70044 */   lw    $a3, 0x44($sp)
/* 00470AEC 24110004 */  li    $s1, 4
/* 00470AF0 10000002 */  b     .L00470AFC
/* 00470AF4 24E7FFFF */   addiu $a3, $a3, -1
.L00470AF8:
/* 00470AF8 24110069 */  li    $s1, 105
.L00470AFC:
/* 00470AFC 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 00470B00 8F8689B4 */  lw     $a2, %got(curgraphnode)($gp)
/* 00470B04 00E02025 */  move  $a0, $a3
/* 00470B08 92050001 */  lbu   $a1, 1($s0)
/* 00470B0C 0320F809 */  jalr  $t9
/* 00470B10 8CC60000 */   lw    $a2, ($a2)
/* 00470B14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00470B18 02202025 */  move  $a0, $s1
/* 00470B1C 02002825 */  move  $a1, $s0
/* 00470B20 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 00470B24 00403025 */  move  $a2, $v0
/* 00470B28 AFA20030 */  sw    $v0, 0x30($sp)
/* 00470B2C 0320F809 */  jalr  $t9
/* 00470B30 00000000 */   nop   
/* 00470B34 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00470B38 304EFFFF */  andi  $t6, $v0, 0xffff
/* 00470B3C 000E7880 */  sll   $t7, $t6, 2
/* 00470B40 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 00470B44 8FA70030 */  lw    $a3, 0x30($sp)
/* 00470B48 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00470B4C 01F8C821 */  addu  $t9, $t7, $t8
/* 00470B50 8F250000 */  lw    $a1, ($t9)
/* 00470B54 00001825 */  move  $v1, $zero
/* 00470B58 24080004 */  li    $t0, 4
/* 00470B5C 10A00018 */  beqz  $a1, .L00470BC0
/* 00470B60 00000000 */   nop   
/* 00470B64 90AA0000 */  lbu   $t2, ($a1)
.L00470B68:
/* 00470B68 550A0011 */  bnel  $t0, $t2, .L00470BB0
/* 00470B6C 8CA5001C */   lw    $a1, 0x1c($a1)
/* 00470B70 90AB0020 */  lbu   $t3, 0x20($a1)
/* 00470B74 562B000E */  bnel  $s1, $t3, .L00470BB0
/* 00470B78 8CA5001C */   lw    $a1, 0x1c($a1)
/* 00470B7C 920C0001 */  lbu   $t4, 1($s0)
/* 00470B80 90AD0001 */  lbu   $t5, 1($a1)
/* 00470B84 558D000A */  bnel  $t4, $t5, .L00470BB0
/* 00470B88 8CA5001C */   lw    $a1, 0x1c($a1)
/* 00470B8C 8CAE0024 */  lw    $t6, 0x24($a1)
/* 00470B90 560E0007 */  bnel  $s0, $t6, .L00470BB0
/* 00470B94 8CA5001C */   lw    $a1, 0x1c($a1)
/* 00470B98 8CAF0028 */  lw    $t7, 0x28($a1)
/* 00470B9C 54EF0004 */  bnel  $a3, $t7, .L00470BB0
/* 00470BA0 8CA5001C */   lw    $a1, 0x1c($a1)
/* 00470BA4 10000002 */  b     .L00470BB0
/* 00470BA8 24030001 */   li    $v1, 1
/* 00470BAC 8CA5001C */  lw    $a1, 0x1c($a1)
.L00470BB0:
/* 00470BB0 14600003 */  bnez  $v1, .L00470BC0
/* 00470BB4 00000000 */   nop   
/* 00470BB8 54A0FFEB */  bnezl $a1, .L00470B68
/* 00470BBC 90AA0000 */   lbu   $t2, ($a1)
.L00470BC0:
/* 00470BC0 14600020 */  bnez  $v1, .L00470C44
/* 00470BC4 00000000 */   nop   
/* 00470BC8 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00470BCC AFA70030 */  sw    $a3, 0x30($sp)
/* 00470BD0 0320F809 */  jalr  $t9
/* 00470BD4 00000000 */   nop   
/* 00470BD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00470BDC 8FA70030 */  lw    $a3, 0x30($sp)
/* 00470BE0 24080004 */  li    $t0, 4
/* 00470BE4 A0480000 */  sb    $t0, ($v0)
/* 00470BE8 A0510020 */  sb    $s1, 0x20($v0)
/* 00470BEC 92180001 */  lbu   $t8, 1($s0)
/* 00470BF0 00402825 */  move  $a1, $v0
/* 00470BF4 240D0001 */  li    $t5, 1
/* 00470BF8 A0580001 */  sb    $t8, 1($v0)
/* 00470BFC 92190000 */  lbu   $t9, ($s0)
/* 00470C00 51190004 */  beql  $t0, $t9, .L00470C14
/* 00470C04 920B0023 */   lbu   $t3, 0x23($s0)
/* 00470C08 10000003 */  b     .L00470C18
/* 00470C0C A0580023 */   sb    $t8, 0x23($v0)
/* 00470C10 920B0023 */  lbu   $t3, 0x23($s0)
.L00470C14:
/* 00470C14 A04B0023 */  sb    $t3, 0x23($v0)
.L00470C18:
/* 00470C18 8F8C89B4 */  lw     $t4, %got(curgraphnode)($gp)
/* 00470C1C AC500024 */  sw    $s0, 0x24($v0)
/* 00470C20 AC470028 */  sw    $a3, 0x28($v0)
/* 00470C24 8D8C0000 */  lw    $t4, ($t4)
/* 00470C28 A44D0006 */  sh    $t5, 6($v0)
/* 00470C2C A040003E */  sb    $zero, 0x3e($v0)
/* 00470C30 AC400030 */  sw    $zero, 0x30($v0)
/* 00470C34 A0400005 */  sb    $zero, 5($v0)
/* 00470C38 A0400004 */  sb    $zero, 4($v0)
/* 00470C3C 10000008 */  b     .L00470C60
/* 00470C40 AC4C0010 */   sw    $t4, 0x10($v0)
.L00470C44:
/* 00470C44 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 00470C48 00A02025 */  move  $a0, $a1
/* 00470C4C AFA50034 */  sw    $a1, 0x34($sp)
/* 00470C50 0320F809 */  jalr  $t9
/* 00470C54 00000000 */   nop   
/* 00470C58 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00470C5C 8FA50034 */  lw    $a1, 0x34($sp)
.L00470C60:
/* 00470C60 90AE0001 */  lbu   $t6, 1($a1)
/* 00470C64 24090008 */  li    $t1, 8
/* 00470C68 24010069 */  li    $at, 105
/* 00470C6C 112E0003 */  beq   $t1, $t6, .L00470C7C
/* 00470C70 00000000 */   nop   
/* 00470C74 12210003 */  beq   $s1, $at, .L00470C84
/* 00470C78 24040018 */   li    $a0, 24
.L00470C7C:
/* 00470C7C 10000050 */  b     .L00470DC0
/* 00470C80 00A01825 */   move  $v1, $a1
.L00470C84:
/* 00470C84 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 00470C88 00003025 */  move  $a2, $zero
/* 00470C8C 00001825 */  move  $v1, $zero
/* 00470C90 A3A0002F */  sb    $zero, 0x2f($sp)
/* 00470C94 0320F809 */  jalr  $t9
/* 00470C98 AFA50034 */   sw    $a1, 0x34($sp)
/* 00470C9C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00470CA0 304FFFFF */  andi  $t7, $v0, 0xffff
/* 00470CA4 000FC080 */  sll   $t8, $t7, 2
/* 00470CA8 8F998DF8 */  lw     $t9, %got(table)($gp)
/* 00470CAC 93A3002F */  lbu   $v1, 0x2f($sp)
/* 00470CB0 8FA50034 */  lw    $a1, 0x34($sp)
/* 00470CB4 03195021 */  addu  $t2, $t8, $t9
/* 00470CB8 8D470000 */  lw    $a3, ($t2)
/* 00470CBC 24080004 */  li    $t0, 4
/* 00470CC0 24090008 */  li    $t1, 8
/* 00470CC4 10E00019 */  beqz  $a3, .L00470D2C
/* 00470CC8 3044FFFF */   andi  $a0, $v0, 0xffff
/* 00470CCC 24100018 */  li    $s0, 24
/* 00470CD0 90EB0000 */  lbu   $t3, ($a3)
.L00470CD4:
/* 00470CD4 550B0011 */  bnel  $t0, $t3, .L00470D1C
/* 00470CD8 8CE7001C */   lw    $a3, 0x1c($a3)
/* 00470CDC 90EC0020 */  lbu   $t4, 0x20($a3)
/* 00470CE0 560C000E */  bnel  $s0, $t4, .L00470D1C
/* 00470CE4 8CE7001C */   lw    $a3, 0x1c($a3)
/* 00470CE8 90ED0001 */  lbu   $t5, 1($a3)
/* 00470CEC 552D000B */  bnel  $t1, $t5, .L00470D1C
/* 00470CF0 8CE7001C */   lw    $a3, 0x1c($a3)
/* 00470CF4 90AE0001 */  lbu   $t6, 1($a1)
/* 00470CF8 90EF0038 */  lbu   $t7, 0x38($a3)
/* 00470CFC 55CF0007 */  bnel  $t6, $t7, .L00470D1C
/* 00470D00 8CE7001C */   lw    $a3, 0x1c($a3)
/* 00470D04 8CF80024 */  lw    $t8, 0x24($a3)
/* 00470D08 54B80004 */  bnel  $a1, $t8, .L00470D1C
/* 00470D0C 8CE7001C */   lw    $a3, 0x1c($a3)
/* 00470D10 10000002 */  b     .L00470D1C
/* 00470D14 24030001 */   li    $v1, 1
/* 00470D18 8CE7001C */  lw    $a3, 0x1c($a3)
.L00470D1C:
/* 00470D1C 14600003 */  bnez  $v1, .L00470D2C
/* 00470D20 00000000 */   nop   
/* 00470D24 54E0FFEB */  bnezl $a3, .L00470CD4
/* 00470D28 90EB0000 */   lbu   $t3, ($a3)
.L00470D2C:
/* 00470D2C 1460001C */  bnez  $v1, .L00470DA0
/* 00470D30 24100018 */   li    $s0, 24
/* 00470D34 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00470D38 AFA50034 */  sw    $a1, 0x34($sp)
/* 00470D3C 0320F809 */  jalr  $t9
/* 00470D40 00000000 */   nop   
/* 00470D44 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00470D48 8FA50034 */  lw    $a1, 0x34($sp)
/* 00470D4C 24090008 */  li    $t1, 8
/* 00470D50 24080004 */  li    $t0, 4
/* 00470D54 A0480000 */  sb    $t0, ($v0)
/* 00470D58 A0500020 */  sb    $s0, 0x20($v0)
/* 00470D5C A0490001 */  sb    $t1, 1($v0)
/* 00470D60 A0490023 */  sb    $t1, 0x23($v0)
/* 00470D64 90B90001 */  lbu   $t9, 1($a1)
/* 00470D68 8F8A89B4 */  lw     $t2, %got(curgraphnode)($gp)
/* 00470D6C AC400028 */  sw    $zero, 0x28($v0)
/* 00470D70 AC450024 */  sw    $a1, 0x24($v0)
/* 00470D74 A0590038 */  sb    $t9, 0x38($v0)
/* 00470D78 8D4A0000 */  lw    $t2, ($t2)
/* 00470D7C 240B0001 */  li    $t3, 1
/* 00470D80 00403825 */  move  $a3, $v0
/* 00470D84 A44B0006 */  sh    $t3, 6($v0)
/* 00470D88 A040003E */  sb    $zero, 0x3e($v0)
/* 00470D8C AC400030 */  sw    $zero, 0x30($v0)
/* 00470D90 A0400005 */  sb    $zero, 5($v0)
/* 00470D94 A0400004 */  sb    $zero, 4($v0)
/* 00470D98 10000008 */  b     .L00470DBC
/* 00470D9C AC4A0010 */   sw    $t2, 0x10($v0)
.L00470DA0:
/* 00470DA0 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 00470DA4 00E02025 */  move  $a0, $a3
/* 00470DA8 AFA70030 */  sw    $a3, 0x30($sp)
/* 00470DAC 0320F809 */  jalr  $t9
/* 00470DB0 00000000 */   nop   
/* 00470DB4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00470DB8 8FA70030 */  lw    $a3, 0x30($sp)
.L00470DBC:
/* 00470DBC 00E01825 */  move  $v1, $a3
.L00470DC0:
/* 00470DC0 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00470DC4 8FB00018 */  lw    $s0, 0x18($sp)
/* 00470DC8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00470DCC 27BD0040 */  addiu $sp, $sp, 0x40
/* 00470DD0 03E00008 */  jr    $ra
/* 00470DD4 00601025 */   move  $v0, $v1
    .type form_rem, @function
    .size form_rem, .-form_rem
    .end form_rem

glabel form_neq0
    .ent form_neq0
    # 004713E8 loopunroll
/* 00470DD8 3C1C0FBB */  .cpload $t9
/* 00470DDC 279C94B8 */  
/* 00470DE0 0399E021 */  
/* 00470DE4 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 00470DE8 8F8689B4 */  lw     $a2, %got(curgraphnode)($gp)
/* 00470DEC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00470DF0 00803825 */  move  $a3, $a0
/* 00470DF4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00470DF8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00470DFC 90E50001 */  lbu   $a1, 1($a3)
/* 00470E00 AFA70030 */  sw    $a3, 0x30($sp)
/* 00470E04 00002025 */  move  $a0, $zero
/* 00470E08 0320F809 */  jalr  $t9
/* 00470E0C 8CC60000 */   lw    $a2, ($a2)
/* 00470E10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470E14 8FA50030 */  lw    $a1, 0x30($sp)
/* 00470E18 2404005F */  li    $a0, 95
/* 00470E1C 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 00470E20 00403025 */  move  $a2, $v0
/* 00470E24 AFA20020 */  sw    $v0, 0x20($sp)
/* 00470E28 0320F809 */  jalr  $t9
/* 00470E2C 00000000 */   nop   
/* 00470E30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470E34 304EFFFF */  andi  $t6, $v0, 0xffff
/* 00470E38 000E7880 */  sll   $t7, $t6, 2
/* 00470E3C 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 00470E40 A7A20028 */  sh    $v0, 0x28($sp)
/* 00470E44 8FA70030 */  lw    $a3, 0x30($sp)
/* 00470E48 01F8C821 */  addu  $t9, $t7, $t8
/* 00470E4C 8F240000 */  lw    $a0, ($t9)
/* 00470E50 8FA80020 */  lw    $t0, 0x20($sp)
/* 00470E54 00001825 */  move  $v1, $zero
/* 00470E58 10800019 */  beqz  $a0, .L00470EC0
/* 00470E5C 2406005F */   li    $a2, 95
/* 00470E60 24050004 */  li    $a1, 4
/* 00470E64 90890000 */  lbu   $t1, ($a0)
.L00470E68:
/* 00470E68 54A90011 */  bnel  $a1, $t1, .L00470EB0
/* 00470E6C 8C84001C */   lw    $a0, 0x1c($a0)
/* 00470E70 908A0020 */  lbu   $t2, 0x20($a0)
/* 00470E74 54CA000E */  bnel  $a2, $t2, .L00470EB0
/* 00470E78 8C84001C */   lw    $a0, 0x1c($a0)
/* 00470E7C 90EB0001 */  lbu   $t3, 1($a3)
/* 00470E80 908C0001 */  lbu   $t4, 1($a0)
/* 00470E84 556C000A */  bnel  $t3, $t4, .L00470EB0
/* 00470E88 8C84001C */   lw    $a0, 0x1c($a0)
/* 00470E8C 8C8D0024 */  lw    $t5, 0x24($a0)
/* 00470E90 54ED0007 */  bnel  $a3, $t5, .L00470EB0
/* 00470E94 8C84001C */   lw    $a0, 0x1c($a0)
/* 00470E98 8C8E0028 */  lw    $t6, 0x28($a0)
/* 00470E9C 550E0004 */  bnel  $t0, $t6, .L00470EB0
/* 00470EA0 8C84001C */   lw    $a0, 0x1c($a0)
/* 00470EA4 10000002 */  b     .L00470EB0
/* 00470EA8 24030001 */   li    $v1, 1
/* 00470EAC 8C84001C */  lw    $a0, 0x1c($a0)
.L00470EB0:
/* 00470EB0 14600003 */  bnez  $v1, .L00470EC0
/* 00470EB4 00000000 */   nop   
/* 00470EB8 5480FFEB */  bnezl $a0, .L00470E68
/* 00470EBC 90890000 */   lbu   $t1, ($a0)
.L00470EC0:
/* 00470EC0 14600026 */  bnez  $v1, .L00470F5C
/* 00470EC4 00000000 */   nop   
/* 00470EC8 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00470ECC 97A40028 */  lhu   $a0, 0x28($sp)
/* 00470ED0 AFA70030 */  sw    $a3, 0x30($sp)
/* 00470ED4 0320F809 */  jalr  $t9
/* 00470ED8 AFA80020 */   sw    $t0, 0x20($sp)
/* 00470EDC 8FA70030 */  lw    $a3, 0x30($sp)
/* 00470EE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470EE4 8FA80020 */  lw    $t0, 0x20($sp)
/* 00470EE8 24050004 */  li    $a1, 4
/* 00470EEC 2406005F */  li    $a2, 95
/* 00470EF0 A0450000 */  sb    $a1, ($v0)
/* 00470EF4 A0460020 */  sb    $a2, 0x20($v0)
/* 00470EF8 90EF0001 */  lbu   $t7, 1($a3)
/* 00470EFC 00402025 */  move  $a0, $v0
/* 00470F00 240B0001 */  li    $t3, 1
/* 00470F04 A04F0001 */  sb    $t7, 1($v0)
/* 00470F08 90F80000 */  lbu   $t8, ($a3)
/* 00470F0C 50B80005 */  beql  $a1, $t8, .L00470F24
/* 00470F10 90E90023 */   lbu   $t1, 0x23($a3)
/* 00470F14 31F900FF */  andi  $t9, $t7, 0xff
/* 00470F18 10000003 */  b     .L00470F28
/* 00470F1C A0590023 */   sb    $t9, 0x23($v0)
/* 00470F20 90E90023 */  lbu   $t1, 0x23($a3)
.L00470F24:
/* 00470F24 A0490023 */  sb    $t1, 0x23($v0)
.L00470F28:
/* 00470F28 8F8A89B4 */  lw     $t2, %got(curgraphnode)($gp)
/* 00470F2C AC470024 */  sw    $a3, 0x24($v0)
/* 00470F30 AC480028 */  sw    $t0, 0x28($v0)
/* 00470F34 8D4A0000 */  lw    $t2, ($t2)
/* 00470F38 A040003E */  sb    $zero, 0x3e($v0)
/* 00470F3C A44B0006 */  sh    $t3, 6($v0)
/* 00470F40 AC400030 */  sw    $zero, 0x30($v0)
/* 00470F44 A0400005 */  sb    $zero, 5($v0)
/* 00470F48 A0400004 */  sb    $zero, 4($v0)
/* 00470F4C AC400038 */  sw    $zero, 0x38($v0)
/* 00470F50 AC40003C */  sw    $zero, 0x3c($v0)
/* 00470F54 10000007 */  b     .L00470F74
/* 00470F58 AC4A0010 */   sw    $t2, 0x10($v0)
.L00470F5C:
/* 00470F5C 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 00470F60 AFA40024 */  sw    $a0, 0x24($sp)
/* 00470F64 0320F809 */  jalr  $t9
/* 00470F68 00000000 */   nop   
/* 00470F6C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470F70 8FA40024 */  lw    $a0, 0x24($sp)
.L00470F74:
/* 00470F74 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00470F78 27BD0030 */  addiu $sp, $sp, 0x30
/* 00470F7C 00801025 */  move  $v0, $a0
/* 00470F80 03E00008 */  jr    $ra
/* 00470F84 00000000 */   nop   
    .type form_neq0, @function
    .size form_neq0, .-form_neq0
    .end form_neq0

glabel form_neg
    .ent form_neg
    # 004713E8 loopunroll
/* 00470F88 3C1C0FBB */  .cpload $t9
/* 00470F8C 279C9308 */  
/* 00470F90 0399E021 */  
/* 00470F94 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 00470F98 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00470F9C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00470FA0 00802825 */  move  $a1, $a0
/* 00470FA4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00470FA8 AFA50030 */  sw    $a1, 0x30($sp)
/* 00470FAC 2404005E */  li    $a0, 94
/* 00470FB0 0320F809 */  jalr  $t9
/* 00470FB4 00003025 */   move  $a2, $zero
/* 00470FB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00470FBC 304EFFFF */  andi  $t6, $v0, 0xffff
/* 00470FC0 000E7880 */  sll   $t7, $t6, 2
/* 00470FC4 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 00470FC8 A7A20028 */  sh    $v0, 0x28($sp)
/* 00470FCC 8FA50030 */  lw    $a1, 0x30($sp)
/* 00470FD0 01F8C821 */  addu  $t9, $t7, $t8
/* 00470FD4 8F240000 */  lw    $a0, ($t9)
/* 00470FD8 00001825 */  move  $v1, $zero
/* 00470FDC 2407005E */  li    $a3, 94
/* 00470FE0 10800015 */  beqz  $a0, .L00471038
/* 00470FE4 24060004 */   li    $a2, 4
/* 00470FE8 90880000 */  lbu   $t0, ($a0)
.L00470FEC:
/* 00470FEC 54C8000E */  bnel  $a2, $t0, .L00471028
/* 00470FF0 8C84001C */   lw    $a0, 0x1c($a0)
/* 00470FF4 90890020 */  lbu   $t1, 0x20($a0)
/* 00470FF8 54E9000B */  bnel  $a3, $t1, .L00471028
/* 00470FFC 8C84001C */   lw    $a0, 0x1c($a0)
/* 00471000 90AA0001 */  lbu   $t2, 1($a1)
/* 00471004 908B0001 */  lbu   $t3, 1($a0)
/* 00471008 554B0007 */  bnel  $t2, $t3, .L00471028
/* 0047100C 8C84001C */   lw    $a0, 0x1c($a0)
/* 00471010 8C8C0024 */  lw    $t4, 0x24($a0)
/* 00471014 54AC0004 */  bnel  $a1, $t4, .L00471028
/* 00471018 8C84001C */   lw    $a0, 0x1c($a0)
/* 0047101C 10000002 */  b     .L00471028
/* 00471020 24030001 */   li    $v1, 1
/* 00471024 8C84001C */  lw    $a0, 0x1c($a0)
.L00471028:
/* 00471028 14600003 */  bnez  $v1, .L00471038
/* 0047102C 00000000 */   nop   
/* 00471030 5480FFEE */  bnezl $a0, .L00470FEC
/* 00471034 90880000 */   lbu   $t0, ($a0)
.L00471038:
/* 00471038 14600022 */  bnez  $v1, .L004710C4
/* 0047103C 00000000 */   nop   
/* 00471040 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00471044 97A40028 */  lhu   $a0, 0x28($sp)
/* 00471048 AFA50030 */  sw    $a1, 0x30($sp)
/* 0047104C 0320F809 */  jalr  $t9
/* 00471050 00000000 */   nop   
/* 00471054 8FA50030 */  lw    $a1, 0x30($sp)
/* 00471058 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047105C 24060004 */  li    $a2, 4
/* 00471060 2407005E */  li    $a3, 94
/* 00471064 A0460000 */  sb    $a2, ($v0)
/* 00471068 A0470020 */  sb    $a3, 0x20($v0)
/* 0047106C 90AD0001 */  lbu   $t5, 1($a1)
/* 00471070 00402025 */  move  $a0, $v0
/* 00471074 24080001 */  li    $t0, 1
/* 00471078 A04D0001 */  sb    $t5, 1($v0)
/* 0047107C 90AE0000 */  lbu   $t6, ($a1)
/* 00471080 50CE0004 */  beql  $a2, $t6, .L00471094
/* 00471084 90B80023 */   lbu   $t8, 0x23($a1)
/* 00471088 10000003 */  b     .L00471098
/* 0047108C A04D0023 */   sb    $t5, 0x23($v0)
/* 00471090 90B80023 */  lbu   $t8, 0x23($a1)
.L00471094:
/* 00471094 A0580023 */  sb    $t8, 0x23($v0)
.L00471098:
/* 00471098 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 0047109C AC450024 */  sw    $a1, 0x24($v0)
/* 004710A0 AC400028 */  sw    $zero, 0x28($v0)
/* 004710A4 8F390000 */  lw    $t9, ($t9)
/* 004710A8 A4480006 */  sh    $t0, 6($v0)
/* 004710AC A040003E */  sb    $zero, 0x3e($v0)
/* 004710B0 AC400030 */  sw    $zero, 0x30($v0)
/* 004710B4 A0400005 */  sb    $zero, 5($v0)
/* 004710B8 A0400004 */  sb    $zero, 4($v0)
/* 004710BC 10000007 */  b     .L004710DC
/* 004710C0 AC590010 */   sw    $t9, 0x10($v0)
.L004710C4:
/* 004710C4 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 004710C8 AFA40024 */  sw    $a0, 0x24($sp)
/* 004710CC 0320F809 */  jalr  $t9
/* 004710D0 00000000 */   nop   
/* 004710D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004710D8 8FA40024 */  lw    $a0, 0x24($sp)
.L004710DC:
/* 004710DC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004710E0 27BD0030 */  addiu $sp, $sp, 0x30
/* 004710E4 00801025 */  move  $v0, $a0
/* 004710E8 03E00008 */  jr    $ra
/* 004710EC 00000000 */   nop   
    .type form_neg, @function
    .size form_neg, .-form_neg
    .end form_neg

glabel str_to_temporary
    .ent str_to_temporary
    # 004713E8 loopunroll
/* 004710F0 3C1C0FBB */  .cpload $t9
/* 004710F4 279C91A0 */  
/* 004710F8 0399E021 */  
/* 004710FC 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00471100 93AE0032 */  lbu   $t6, 0x32($sp)
/* 00471104 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 00471108 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047110C 31CFFFF8 */  andi  $t7, $t6, 0xfff8
/* 00471110 35F80001 */  ori   $t8, $t7, 1
/* 00471114 A3B80032 */  sb    $t8, 0x32($sp)
/* 00471118 8FA80030 */  lw    $t0, 0x30($sp)
/* 0047111C 8F390000 */  lw    $t9, ($t9)
/* 00471120 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00471124 00084AC2 */  srl   $t1, $t0, 0xb
/* 00471128 03295026 */  xor   $t2, $t9, $t1
/* 0047112C 000A5AC0 */  sll   $t3, $t2, 0xb
/* 00471130 01686026 */  xor   $t4, $t3, $t0
/* 00471134 AFA50044 */  sw    $a1, 0x44($sp)
/* 00471138 AFAC0030 */  sw    $t4, 0x30($sp)
/* 0047113C AFA4002C */  sw    $a0, 0x2c($sp)
/* 00471140 27AD002C */  addiu $t5, $sp, 0x2c
/* 00471144 8DA40000 */  lw    $a0, ($t5)
/* 00471148 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0047114C AFA40000 */  sw    $a0, ($sp)
/* 00471150 8DA50004 */  lw    $a1, 4($t5)
/* 00471154 0320F809 */  jalr  $t9
/* 00471158 AFA50004 */   sw    $a1, 4($sp)
/* 0047115C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00471160 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00471164 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00471168 0320F809 */  jalr  $t9
/* 0047116C 00000000 */   nop   
/* 00471170 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00471174 8FA70044 */  lw    $a3, 0x44($sp)
/* 00471178 24060001 */  li    $a2, 1
/* 0047117C 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 00471180 24190003 */  li    $t9, 3
/* 00471184 27A9002C */  addiu $t1, $sp, 0x2c
/* 00471188 8F180000 */  lw    $t8, ($t8)
/* 0047118C A0400021 */  sb    $zero, 0x21($v0)
/* 00471190 A0460022 */  sb    $a2, 0x22($v0)
/* 00471194 A0400003 */  sb    $zero, 3($v0)
/* 00471198 A0590000 */  sb    $t9, ($v0)
/* 0047119C AC580010 */  sw    $t8, 0x10($v0)
/* 004711A0 8D2B0000 */  lw    $t3, ($t1)
/* 004711A4 24010004 */  li    $at, 4
/* 004711A8 00402825 */  move  $a1, $v0
/* 004711AC AC4B0028 */  sw    $t3, 0x28($v0)
/* 004711B0 8D2A0004 */  lw    $t2, 4($t1)
/* 004711B4 00401825 */  move  $v1, $v0
/* 004711B8 AC4A002C */  sw    $t2, 0x2c($v0)
/* 004711BC 90E80000 */  lbu   $t0, ($a3)
/* 004711C0 55010005 */  bnel  $t0, $at, .L004711D8
/* 004711C4 90ED0001 */   lbu   $t5, 1($a3)
/* 004711C8 90EC0023 */  lbu   $t4, 0x23($a3)
/* 004711CC 10000003 */  b     .L004711DC
/* 004711D0 A04C0001 */   sb    $t4, 1($v0)
/* 004711D4 90ED0001 */  lbu   $t5, 1($a3)
.L004711D8:
/* 004711D8 A04D0001 */  sb    $t5, 1($v0)
.L004711DC:
/* 004711DC 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 004711E0 90640001 */  lbu   $a0, 1($v1)
/* 004711E4 AFA30024 */  sw    $v1, 0x24($sp)
/* 004711E8 0320F809 */  jalr  $t9
/* 004711EC AFA50034 */   sw    $a1, 0x34($sp)
/* 004711F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004711F4 8FA30024 */  lw    $v1, 0x24($sp)
/* 004711F8 2404007B */  li    $a0, 123
/* 004711FC 8F8E897C */  lw     $t6, %got(curlevel)($gp)
/* 00471200 A0620020 */  sb    $v0, 0x20($v1)
/* 00471204 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00471208 8DCE0000 */  lw    $t6, ($t6)
/* 0047120C A4600006 */  sh    $zero, 6($v1)
/* 00471210 AC600030 */  sw    $zero, 0x30($v1)
/* 00471214 AC600024 */  sw    $zero, 0x24($v1)
/* 00471218 A0600002 */  sb    $zero, 2($v1)
/* 0047121C A0600023 */  sb    $zero, 0x23($v1)
/* 00471220 0320F809 */  jalr  $t9
/* 00471224 A06E002F */   sb    $t6, 0x2f($v1)
/* 00471228 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047122C 8FA50034 */  lw    $a1, 0x34($sp)
/* 00471230 8FAF0044 */  lw    $t7, 0x44($sp)
/* 00471234 8F8289C4 */  lw     $v0, %got(stattail)($gp)
/* 00471238 24060001 */  li    $a2, 1
/* 0047123C ACAF0034 */  sw    $t7, 0x34($a1)
/* 00471240 8C420000 */  lw    $v0, ($v0)
/* 00471244 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 00471248 A0400003 */  sb    $zero, 3($v0)
/* 0047124C AC450004 */  sw    $a1, 4($v0)
/* 00471250 A046001C */  sb    $a2, 0x1c($v0)
/* 00471254 A046001E */  sb    $a2, 0x1e($v0)
/* 00471258 A046001D */  sb    $a2, 0x1d($v0)
/* 0047125C A046001F */  sb    $a2, 0x1f($v0)
/* 00471260 A0400001 */  sb    $zero, 1($v0)
/* 00471264 AC40002C */  sw    $zero, 0x2c($v0)
/* 00471268 AC400030 */  sw    $zero, 0x30($v0)
/* 0047126C A0400002 */  sb    $zero, 2($v0)
/* 00471270 0320F809 */  jalr  $t9
/* 00471274 ACA20038 */   sw    $v0, 0x38($a1)
/* 00471278 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047127C 8FA20034 */  lw    $v0, 0x34($sp)
/* 00471280 24060001 */  li    $a2, 1
/* 00471284 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 00471288 8F180000 */  lw    $t8, ($t8)
/* 0047128C 8F190028 */  lw    $t9, 0x28($t8)
/* 00471290 A3260008 */  sb    $a2, 8($t9)
/* 00471294 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00471298 27BD0040 */  addiu $sp, $sp, 0x40
/* 0047129C 03E00008 */  jr    $ra
/* 004712A0 00000000 */   nop   
    .type str_to_temporary, @function
    .size str_to_temporary, .-str_to_temporary
    .end str_to_temporary

glabel reset_images
    .ent reset_images
    # 004712A4 reset_images
    # 004713E8 loopunroll
/* 004712A4 3C1C0FBB */  .cpload $t9
/* 004712A8 279C8FEC */  
/* 004712AC 0399E021 */  
/* 004712B0 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004712B4 AFB40024 */  sw    $s4, 0x24($sp)
/* 004712B8 AFB30020 */  sw    $s3, 0x20($sp)
/* 004712BC AFB2001C */  sw    $s2, 0x1c($sp)
/* 004712C0 AFB00014 */  sw    $s0, 0x14($sp)
/* 004712C4 00808025 */  move  $s0, $a0
/* 004712C8 24120006 */  li    $s2, 6
/* 004712CC 8F938DBC */  lw     $s3, %got(optab)($gp)
/* 004712D0 24140003 */  li    $s4, 3
/* 004712D4 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004712D8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004712DC AFB10018 */  sw    $s1, 0x18($sp)
.L004712E0:
/* 004712E0 92020000 */  lbu   $v0, ($s0)
/* 004712E4 3C016080 */  lui   $at, 0x6080
/* 004712E8 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 004712EC 000E7823 */  negu  $t7, $t6
/* 004712F0 01E1C024 */  and   $t8, $t7, $at
/* 004712F4 0058C804 */  sllv  $t9, $t8, $v0
/* 004712F8 07220034 */  bltzl $t9, .L004713CC
/* 004712FC 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00471300 8E080014 */  lw    $t0, 0x14($s0)
/* 00471304 51000009 */  beql  $t0, $zero, .L0047132C
/* 00471308 304300FF */   andi  $v1, $v0, 0xff
/* 0047130C 8F998634 */  lw    $t9, %call16(fixcorr)($gp)
/* 00471310 02002025 */  move  $a0, $s0
/* 00471314 0320F809 */  jalr  $t9
/* 00471318 00000000 */   nop   
/* 0047131C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00471320 AE000014 */  sw    $zero, 0x14($s0)
/* 00471324 92020000 */  lbu   $v0, ($s0)
/* 00471328 304300FF */  andi  $v1, $v0, 0xff
.L0047132C:
/* 0047132C 2469FFFF */  addiu $t1, $v1, -1
/* 00471330 2D210008 */  sltiu $at, $t1, 8
/* 00471334 1020001C */  beqz  $at, .L004713A8
/* 00471338 02008825 */   move  $s1, $s0
/* 0047133C 8F818044 */  lw    $at, %got(jtbl_1000DB6C)($gp)
/* 00471340 00094880 */  sll   $t1, $t1, 2
/* 00471344 00290821 */  addu  $at, $at, $t1
/* 00471348 8C29DB6C */  lw    $t1, %lo(jtbl_1000DB6C)($at)
/* 0047134C 013C4821 */  addu  $t1, $t1, $gp
/* 00471350 01200008 */  jr    $t1
/* 00471354 00000000 */   nop   
.L00471358:
/* 00471358 1000FFE1 */  b     .L004712E0
/* 0047135C 8E300034 */   lw    $s0, 0x34($s1)
.L00471360:
/* 00471360 5642001A */  bnel  $s2, $v0, .L004713CC
/* 00471364 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00471368 1000FFDD */  b     .L004712E0
/* 0047136C 8E300024 */   lw    $s0, 0x24($s1)
.L00471370:
/* 00471370 8F9985CC */  lw    $t9, %call16(reset_images)($gp)
/* 00471374 8E040024 */  lw    $a0, 0x24($s0)
/* 00471378 0320F809 */  jalr  $t9
/* 0047137C 00000000 */   nop   
/* 00471380 920A0020 */  lbu   $t2, 0x20($s0)
/* 00471384 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00471388 01540019 */  multu $t2, $s4
/* 0047138C 00005812 */  mflo  $t3
/* 00471390 026B6021 */  addu  $t4, $s3, $t3
/* 00471394 918D0002 */  lbu   $t5, 2($t4)
/* 00471398 51A0000C */  beql  $t5, $zero, .L004713CC
/* 0047139C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004713A0 1000FFCF */  b     .L004712E0
/* 004713A4 8E300028 */   lw    $s0, 0x28($s1)
.L004713A8:
/* 004713A8 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004713AC 8F868044 */  lw    $a2, %got(RO_1000DB60)($gp)
/* 004713B0 24040001 */  li    $a0, 1
/* 004713B4 24050776 */  li    $a1, 1910
/* 004713B8 2407000A */  li    $a3, 10
/* 004713BC 0320F809 */  jalr  $t9
/* 004713C0 24C6DB60 */   addiu $a2, %lo(RO_1000DB60) # addiu $a2, $a2, -0x24a0
/* 004713C4 8FBC0028 */  lw    $gp, 0x28($sp)
.L004713C8:
/* 004713C8 8FBF002C */  lw    $ra, 0x2c($sp)
.L004713CC:
/* 004713CC 8FB00014 */  lw    $s0, 0x14($sp)
/* 004713D0 8FB10018 */  lw    $s1, 0x18($sp)
/* 004713D4 8FB2001C */  lw    $s2, 0x1c($sp)
/* 004713D8 8FB30020 */  lw    $s3, 0x20($sp)
/* 004713DC 8FB40024 */  lw    $s4, 0x24($sp)
/* 004713E0 03E00008 */  jr    $ra
/* 004713E4 27BD0030 */   addiu $sp, $sp, 0x30
    .type reset_images, @function
    .size reset_images, .-reset_images
    .end reset_images

glabel loopunroll
    .ent loopunroll
    # 00456A2C oneproc
/* 004713E8 3C1C0FBB */  .cpload $t9
/* 004713EC 279C8EA8 */  
/* 004713F0 0399E021 */  
/* 004713F4 27BDFF10 */  addiu $sp, $sp, -0xf0
/* 004713F8 8F8E89AC */  lw     $t6, %got(graphhead)($gp)
/* 004713FC AFB50030 */  sw    $s5, 0x30($sp)
/* 00471400 AFB20024 */  sw    $s2, 0x24($sp)
/* 00471404 8F958C84 */  lw     $s5, %got(loopbody)($gp)
/* 00471408 8DD20000 */  lw    $s2, ($t6)
/* 0047140C AFBE0040 */  sw    $fp, 0x40($sp)
/* 00471410 AFB70038 */  sw    $s7, 0x38($sp)
/* 00471414 AFB60034 */  sw    $s6, 0x34($sp)
/* 00471418 AFBF0044 */  sw    $ra, 0x44($sp)
/* 0047141C AFBC003C */  sw    $gp, 0x3c($sp)
/* 00471420 AFB4002C */  sw    $s4, 0x2c($sp)
/* 00471424 AFB30028 */  sw    $s3, 0x28($sp)
/* 00471428 AFB10020 */  sw    $s1, 0x20($sp)
/* 0047142C AFB0001C */  sw    $s0, 0x1c($sp)
/* 00471430 24160011 */  li    $s6, 17
/* 00471434 2417003E */  li    $s7, 62
/* 00471438 8F9E89B4 */  lw     $fp, %got(curgraphnode)($gp)
/* 0047143C AEB20000 */  sw    $s2, ($s5)
.L00471440:
/* 00471440 8E440020 */  lw    $a0, 0x20($s2)
/* 00471444 90850000 */  lbu   $a1, ($a0)
/* 00471448 24A6FFE0 */  addiu $a2, $a1, -0x20
/* 0047144C 2CCF0060 */  sltiu $t7, $a2, 0x60
/* 00471450 11E00009 */  beqz  $t7, .L00471478
/* 00471454 00000000 */   nop   
/* 00471458 8F898044 */  lw    $t1, %got(D_10011134)($gp)
/* 0047145C 0006C143 */  sra   $t8, $a2, 5
/* 00471460 0018C880 */  sll   $t9, $t8, 2
/* 00471464 25291134 */  addiu $t1, %lo(D_10011134) # addiu $t1, $t1, 0x1134
/* 00471468 01395021 */  addu  $t2, $t1, $t9
/* 0047146C 8D4B0000 */  lw    $t3, ($t2)
/* 00471470 00CB6004 */  sllv  $t4, $t3, $a2
/* 00471474 298F0000 */  slti  $t7, $t4, 0
.L00471478:
/* 00471478 51E000E8 */  beql  $t7, $zero, .L0047181C
/* 0047147C 2CCE0080 */   sltiu $t6, $a2, 0x80
/* 00471480 8C8E001C */  lw    $t6, 0x1c($a0)
/* 00471484 51C000E5 */  beql  $t6, $zero, .L0047181C
/* 00471488 2CCE0080 */   sltiu $t6, $a2, 0x80
/* 0047148C 8C820004 */  lw    $v0, 4($a0)
/* 00471490 24010004 */  li    $at, 4
/* 00471494 90580000 */  lbu   $t8, ($v0)
/* 00471498 570100E0 */  bnel  $t8, $at, .L0047181C
/* 0047149C 2CCE0080 */   sltiu $t6, $a2, 0x80
/* 004714A0 90490020 */  lbu   $t1, 0x20($v0)
/* 004714A4 2539FFE0 */  addiu $t9, $t1, -0x20
/* 004714A8 2F2A0040 */  sltiu $t2, $t9, 0x40
/* 004714AC 1140000A */  beqz  $t2, .L004714D8
/* 004714B0 00000000 */   nop   
/* 004714B4 8F8D8044 */  lw    $t5, %got(D_1001112C)($gp)
/* 004714B8 00195943 */  sra   $t3, $t9, 5
/* 004714BC 000B6080 */  sll   $t4, $t3, 2
/* 004714C0 25AD112C */  addiu $t5, %lo(D_1001112C) # addiu $t5, $t5, 0x112c
/* 004714C4 01AC7821 */  addu  $t7, $t5, $t4
/* 004714C8 8DEE0000 */  lw    $t6, ($t7)
/* 004714CC 032EC004 */  sllv  $t8, $t6, $t9
/* 004714D0 2B090000 */  slti  $t1, $t8, 0
/* 004714D4 01205025 */  move  $t2, $t1
.L004714D8:
/* 004714D8 514000D0 */  beql  $t2, $zero, .L0047181C
/* 004714DC 2CCE0080 */   sltiu $t6, $a2, 0x80
/* 004714E0 908D0027 */  lbu   $t5, 0x27($a0)
/* 004714E4 8C8B0004 */  lw    $t3, 4($a0)
/* 004714E8 00809825 */  move  $s3, $a0
/* 004714EC 15A0000B */  bnez  $t5, .L0047151C
/* 004714F0 AFAB00EC */   sw    $t3, 0xec($sp)
/* 004714F4 8D6F0028 */  lw    $t7, 0x28($t3)
/* 004714F8 3C016400 */  lui   $at, 0x6400
/* 004714FC 01606025 */  move  $t4, $t3
/* 00471500 91EE0000 */  lbu   $t6, ($t7)
/* 00471504 2DD90020 */  sltiu $t9, $t6, 0x20
/* 00471508 0019C023 */  negu  $t8, $t9
/* 0047150C 03014824 */  and   $t1, $t8, $at
/* 00471510 01C95004 */  sllv  $t2, $t1, $t6
/* 00471514 054100AC */  bgez  $t2, .L004717C8
/* 00471518 00000000 */   nop   
.L0047151C:
/* 0047151C 8FAB00EC */  lw    $t3, 0xec($sp)
/* 00471520 24010001 */  li    $at, 1
/* 00471524 8D630028 */  lw    $v1, 0x28($t3)
/* 00471528 90620000 */  lbu   $v0, ($v1)
/* 0047152C 50410005 */  beql  $v0, $at, .L00471544
/* 00471530 92640025 */   lbu   $a0, 0x25($s3)
/* 00471534 8C6D0020 */  lw    $t5, 0x20($v1)
/* 00471538 51A00092 */  beql  $t5, $zero, .L00471784
/* 0047153C 8E420018 */   lw    $v0, 0x18($s2)
/* 00471540 92640025 */  lbu   $a0, 0x25($s3)
.L00471544:
/* 00471544 8C680020 */  lw    $t0, 0x20($v1)
/* 00471548 8FA500EC */  lw    $a1, 0xec($sp)
/* 0047154C 10800005 */  beqz  $a0, .L00471564
/* 00471550 00000000 */   nop   
/* 00471554 90AC0020 */  lbu   $t4, 0x20($a1)
/* 00471558 2401004E */  li    $at, 78
/* 0047155C 51810007 */  beql  $t4, $at, .L0047157C
/* 00471560 24010002 */   li    $at, 2
.L00471564:
/* 00471564 14800041 */  bnez  $a0, .L0047166C
/* 00471568 8FA500EC */   lw    $a1, 0xec($sp)
/* 0047156C 90AF0020 */  lbu   $t7, 0x20($a1)
/* 00471570 24010028 */  li    $at, 40
/* 00471574 15E1003D */  bne   $t7, $at, .L0047166C
/* 00471578 24010002 */   li    $at, 2
.L0047157C:
/* 0047157C 5441001F */  bnel  $v0, $at, .L004715FC
/* 00471580 8E6D0020 */   lw    $t5, 0x20($s3)
/* 00471584 8E790020 */  lw    $t9, 0x20($s3)
/* 00471588 8E62001C */  lw    $v0, 0x1c($s3)
/* 0047158C 02403025 */  move  $a2, $s2
/* 00471590 8F380020 */  lw    $t8, 0x20($t9)
/* 00471594 01184823 */  subu  $t1, $t0, $t8
/* 00471598 252EFFFF */  addiu $t6, $t1, -1
/* 0047159C 01C2001A */  div   $zero, $t6, $v0
/* 004715A0 00005010 */  mfhi  $t2
/* 004715A4 01425826 */  xor   $t3, $t2, $v0
/* 004715A8 14400002 */  bnez  $v0, .L004715B4
/* 004715AC 00000000 */   nop   
/* 004715B0 0007000D */  break 7
.L004715B4:
/* 004715B4 2401FFFF */  li    $at, -1
/* 004715B8 14410004 */  bne   $v0, $at, .L004715CC
/* 004715BC 3C018000 */   lui   $at, 0x8000
/* 004715C0 15C10002 */  bne   $t6, $at, .L004715CC
/* 004715C4 00000000 */   nop   
/* 004715C8 0006000D */  break 6
.L004715CC:
/* 004715CC 05610002 */  bgez  $t3, .L004715D8
/* 004715D0 00000000 */   nop   
/* 004715D4 01425021 */  addu  $t2, $t2, $v0
.L004715D8:
/* 004715D8 8F998560 */  lw    $t9, %call16(change_to_const_eq)($gp)
/* 004715DC 004A3823 */  subu  $a3, $v0, $t2
/* 004715E0 24E7FFFF */  addiu $a3, $a3, -1
/* 004715E4 0320F809 */  jalr  $t9
/* 004715E8 00000000 */   nop   
/* 004715EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004715F0 10000058 */  b     .L00471754
/* 004715F4 AE620004 */   sw    $v0, 4($s3)
/* 004715F8 8E6D0020 */  lw    $t5, 0x20($s3)
.L004715FC:
/* 004715FC 8E62001C */  lw    $v0, 0x1c($s3)
/* 00471600 02403025 */  move  $a2, $s2
/* 00471604 8DAC0020 */  lw    $t4, 0x20($t5)
/* 00471608 010C7823 */  subu  $t7, $t0, $t4
/* 0047160C 25F9FFFF */  addiu $t9, $t7, -1
/* 00471610 0322001A */  div   $zero, $t9, $v0
/* 00471614 0000C010 */  mfhi  $t8
/* 00471618 03024826 */  xor   $t1, $t8, $v0
/* 0047161C 14400002 */  bnez  $v0, .L00471628
/* 00471620 00000000 */   nop   
/* 00471624 0007000D */  break 7
.L00471628:
/* 00471628 2401FFFF */  li    $at, -1
/* 0047162C 14410004 */  bne   $v0, $at, .L00471640
/* 00471630 3C018000 */   lui   $at, 0x8000
/* 00471634 17210002 */  bne   $t9, $at, .L00471640
/* 00471638 00000000 */   nop   
/* 0047163C 0006000D */  break 6
.L00471640:
/* 00471640 05210002 */  bgez  $t1, .L0047164C
/* 00471644 00000000 */   nop   
/* 00471648 0302C021 */  addu  $t8, $t8, $v0
.L0047164C:
/* 0047164C 8F998560 */  lw    $t9, %call16(change_to_const_eq)($gp)
/* 00471650 00583823 */  subu  $a3, $v0, $t8
/* 00471654 24E7FFFF */  addiu $a3, $a3, -1
/* 00471658 0320F809 */  jalr  $t9
/* 0047165C 00000000 */   nop   
/* 00471660 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471664 1000003B */  b     .L00471754
/* 00471668 AE620004 */   sw    $v0, 4($s3)
.L0047166C:
/* 0047166C 24010002 */  li    $at, 2
/* 00471670 5441001E */  bnel  $v0, $at, .L004716EC
/* 00471674 8E62001C */   lw    $v0, 0x1c($s3)
/* 00471678 8E62001C */  lw    $v0, 0x1c($s3)
/* 0047167C 8E6E0020 */  lw    $t6, 0x20($s3)
/* 00471680 02403025 */  move  $a2, $s2
/* 00471684 00026823 */  negu  $t5, $v0
/* 00471688 8DCB0020 */  lw    $t3, 0x20($t6)
/* 0047168C 01685023 */  subu  $t2, $t3, $t0
/* 00471690 014D001A */  div   $zero, $t2, $t5
/* 00471694 00006010 */  mfhi  $t4
/* 00471698 018D7826 */  xor   $t7, $t4, $t5
/* 0047169C 15A00002 */  bnez  $t5, .L004716A8
/* 004716A0 00000000 */   nop   
/* 004716A4 0007000D */  break 7
.L004716A8:
/* 004716A8 2401FFFF */  li    $at, -1
/* 004716AC 15A10004 */  bne   $t5, $at, .L004716C0
/* 004716B0 3C018000 */   lui   $at, 0x8000
/* 004716B4 15410002 */  bne   $t2, $at, .L004716C0
/* 004716B8 00000000 */   nop   
/* 004716BC 0006000D */  break 6
.L004716C0:
/* 004716C0 05E10002 */  bgez  $t7, .L004716CC
/* 004716C4 00000000 */   nop   
/* 004716C8 018D6021 */  addu  $t4, $t4, $t5
.L004716CC:
/* 004716CC 8F998560 */  lw    $t9, %call16(change_to_const_eq)($gp)
/* 004716D0 004C3821 */  addu  $a3, $v0, $t4
/* 004716D4 0320F809 */  jalr  $t9
/* 004716D8 00000000 */   nop   
/* 004716DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004716E0 1000001C */  b     .L00471754
/* 004716E4 AE620004 */   sw    $v0, 4($s3)
/* 004716E8 8E62001C */  lw    $v0, 0x1c($s3)
.L004716EC:
/* 004716EC 8E790020 */  lw    $t9, 0x20($s3)
/* 004716F0 02403025 */  move  $a2, $s2
/* 004716F4 00027023 */  negu  $t6, $v0
/* 004716F8 8F290020 */  lw    $t1, 0x20($t9)
/* 004716FC 0128C023 */  subu  $t8, $t1, $t0
/* 00471700 030E001A */  div   $zero, $t8, $t6
/* 00471704 00005810 */  mfhi  $t3
/* 00471708 016E5026 */  xor   $t2, $t3, $t6
/* 0047170C 15C00002 */  bnez  $t6, .L00471718
/* 00471710 00000000 */   nop   
/* 00471714 0007000D */  break 7
.L00471718:
/* 00471718 2401FFFF */  li    $at, -1
/* 0047171C 15C10004 */  bne   $t6, $at, .L00471730
/* 00471720 3C018000 */   lui   $at, 0x8000
/* 00471724 17010002 */  bne   $t8, $at, .L00471730
/* 00471728 00000000 */   nop   
/* 0047172C 0006000D */  break 6
.L00471730:
/* 00471730 05410002 */  bgez  $t2, .L0047173C
/* 00471734 00000000 */   nop   
/* 00471738 016E5821 */  addu  $t3, $t3, $t6
.L0047173C:
/* 0047173C 8F998560 */  lw    $t9, %call16(change_to_const_eq)($gp)
/* 00471740 004B3821 */  addu  $a3, $v0, $t3
/* 00471744 0320F809 */  jalr  $t9
/* 00471748 00000000 */   nop   
/* 0047174C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471750 AE620004 */  sw    $v0, 4($s3)
.L00471754:
/* 00471754 8F998568 */  lw    $t9, %call16(del_orig_cond)($gp)
/* 00471758 8FA400EC */  lw    $a0, 0xec($sp)
/* 0047175C 8EA50000 */  lw    $a1, ($s5)
/* 00471760 0320F809 */  jalr  $t9
/* 00471764 00000000 */   nop   
/* 00471768 8EB20000 */  lw    $s2, ($s5)
/* 0047176C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471770 8E440020 */  lw    $a0, 0x20($s2)
/* 00471774 90850000 */  lbu   $a1, ($a0)
/* 00471778 10000027 */  b     .L00471818
/* 0047177C 24A6FFE0 */   addiu $a2, $a1, -0x20
/* 00471780 8E420018 */  lw    $v0, 0x18($s2)
.L00471784:
/* 00471784 924D000A */  lbu   $t5, 0xa($s2)
/* 00471788 24090001 */  li    $t1, 1
/* 0047178C 8C510000 */  lw    $s1, ($v0)
/* 00471790 922F000A */  lbu   $t7, 0xa($s1)
/* 00471794 51AF0004 */  beql  $t5, $t7, .L004717A8
/* 00471798 92390005 */   lbu   $t9, 5($s1)
/* 0047179C 8C4C0004 */  lw    $t4, 4($v0)
/* 004717A0 8D910000 */  lw    $s1, ($t4)
/* 004717A4 92390005 */  lbu   $t9, 5($s1)
.L004717A8:
/* 004717A8 24010002 */  li    $at, 2
/* 004717AC 5721001B */  bnel  $t9, $at, .L0047181C
/* 004717B0 2CCE0080 */   sltiu $t6, $a2, 0x80
/* 004717B4 A2290005 */  sb    $t1, 5($s1)
/* 004717B8 8E440020 */  lw    $a0, 0x20($s2)
/* 004717BC 90850000 */  lbu   $a1, ($a0)
/* 004717C0 10000015 */  b     .L00471818
/* 004717C4 24A6FFE0 */   addiu $a2, $a1, -0x20
.L004717C8:
/* 004717C8 8F998564 */  lw    $t9, %call16(change_to_var_eq)($gp)
/* 004717CC 8E78001C */  lw    $t8, 0x1c($s3)
/* 004717D0 92640025 */  lbu   $a0, 0x25($s3)
/* 004717D4 92650026 */  lbu   $a1, 0x26($s3)
/* 004717D8 8FA600EC */  lw    $a2, 0xec($sp)
/* 004717DC 02403825 */  move  $a3, $s2
/* 004717E0 0320F809 */  jalr  $t9
/* 004717E4 AFB80010 */   sw    $t8, 0x10($sp)
/* 004717E8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004717EC AE620004 */  sw    $v0, 4($s3)
/* 004717F0 8FA400EC */  lw    $a0, 0xec($sp)
/* 004717F4 8F998568 */  lw    $t9, %call16(del_orig_cond)($gp)
/* 004717F8 8EA50000 */  lw    $a1, ($s5)
/* 004717FC 0320F809 */  jalr  $t9
/* 00471800 00000000 */   nop   
/* 00471804 8EB20000 */  lw    $s2, ($s5)
/* 00471808 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047180C 8E440020 */  lw    $a0, 0x20($s2)
/* 00471810 90850000 */  lbu   $a1, ($a0)
/* 00471814 24A6FFE0 */  addiu $a2, $a1, -0x20
.L00471818:
/* 00471818 2CCE0080 */  sltiu $t6, $a2, 0x80
.L0047181C:
/* 0047181C 11C00009 */  beqz  $t6, .L00471844
/* 00471820 00000000 */   nop   
/* 00471824 8F8D8044 */  lw    $t5, %got(D_1001111C)($gp)
/* 00471828 00065143 */  sra   $t2, $a2, 5
/* 0047182C 000A5880 */  sll   $t3, $t2, 2
/* 00471830 25AD111C */  addiu $t5, %lo(D_1001111C) # addiu $t5, $t5, 0x111c
/* 00471834 01AB7821 */  addu  $t7, $t5, $t3
/* 00471838 8DEC0000 */  lw    $t4, ($t7)
/* 0047183C 00CCC804 */  sllv  $t9, $t4, $a2
/* 00471840 2B2E0000 */  slti  $t6, $t9, 0
.L00471844:
/* 00471844 51C0001D */  beql  $t6, $zero, .L004718BC
/* 00471848 24010088 */   li    $at, 136
/* 0047184C 8C820008 */  lw    $v0, 8($a0)
/* 00471850 5040001A */  beql  $v0, $zero, .L004718BC
/* 00471854 24010088 */   li    $at, 136
/* 00471858 90580000 */  lbu   $t8, ($v0)
/* 0047185C 24010042 */  li    $at, 66
/* 00471860 57010016 */  bnel  $t8, $at, .L004718BC
/* 00471864 24010088 */   li    $at, 136
/* 00471868 8C8A0014 */  lw    $t2, 0x14($a0)
/* 0047186C 8C4D0014 */  lw    $t5, 0x14($v0)
/* 00471870 554D0012 */  bnel  $t2, $t5, .L004718BC
/* 00471874 24010088 */   li    $at, 136
/* 00471878 908B0000 */  lbu   $t3, ($a0)
/* 0047187C 24010088 */  li    $at, 136
/* 00471880 00808025 */  move  $s0, $a0
/* 00471884 51610009 */  beql  $t3, $at, .L004718AC
/* 00471888 240F0060 */   li    $t7, 96
/* 0047188C 8F998568 */  lw    $t9, %call16(del_orig_cond)($gp)
/* 00471890 8C840004 */  lw    $a0, 4($a0)
/* 00471894 02402825 */  move  $a1, $s2
/* 00471898 0320F809 */  jalr  $t9
/* 0047189C 00000000 */   nop   
/* 004718A0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004718A4 8EB20000 */  lw    $s2, ($s5)
/* 004718A8 240F0060 */  li    $t7, 96
.L004718AC:
/* 004718AC A20F0000 */  sb    $t7, ($s0)
/* 004718B0 8E440020 */  lw    $a0, 0x20($s2)
/* 004718B4 90850000 */  lbu   $a1, ($a0)
/* 004718B8 24010088 */  li    $at, 136
.L004718BC:
/* 004718BC 54A1017B */  bnel  $a1, $at, .L00471EAC
/* 004718C0 8E4A000C */   lw    $t2, 0xc($s2)
/* 004718C4 8E4C0018 */  lw    $t4, 0x18($s2)
/* 004718C8 8D820000 */  lw    $v0, ($t4)
/* 004718CC 8C590014 */  lw    $t9, 0x14($v0)
/* 004718D0 8F290004 */  lw    $t1, 4($t9)
/* 004718D4 55200175 */  bnezl $t1, .L00471EAC
/* 004718D8 8E4A000C */   lw    $t2, 0xc($s2)
/* 004718DC 8C4E0020 */  lw    $t6, 0x20($v0)
/* 004718E0 91D80000 */  lbu   $t8, ($t6)
/* 004718E4 270AFFE0 */  addiu $t2, $t8, -0x20
/* 004718E8 2D4D0080 */  sltiu $t5, $t2, 0x80
/* 004718EC 11A00009 */  beqz  $t5, .L00471914
/* 004718F0 00000000 */   nop   
/* 004718F4 8F8C8044 */  lw    $t4, %got(D_1001110C)($gp)
/* 004718F8 000A5943 */  sra   $t3, $t2, 5
/* 004718FC 000B7880 */  sll   $t7, $t3, 2
/* 00471900 258C110C */  addiu $t4, %lo(D_1001110C) # addiu $t4, $t4, 0x110c
/* 00471904 018FC821 */  addu  $t9, $t4, $t7
/* 00471908 8F290000 */  lw    $t1, ($t9)
/* 0047190C 01497004 */  sllv  $t6, $t1, $t2
/* 00471910 29CD0000 */  slti  $t5, $t6, 0
.L00471914:
/* 00471914 51A00165 */  beql  $t5, $zero, .L00471EAC
/* 00471918 8E4A000C */   lw    $t2, 0xc($s2)
/* 0047191C 8E53001C */  lw    $s3, 0x1c($s2)
.L00471920:
/* 00471920 0000A025 */  move  $s4, $zero
/* 00471924 12640054 */  beq   $s3, $a0, .L00471A78
/* 00471928 00000000 */   nop   
/* 0047192C 92620000 */  lbu   $v0, ($s3)
.L00471930:
/* 00471930 2443FFE0 */  addiu $v1, $v0, -0x20
/* 00471934 2C6B0060 */  sltiu $t3, $v1, 0x60
/* 00471938 11600009 */  beqz  $t3, .L00471960
/* 0047193C 00000000 */   nop   
/* 00471940 8F998044 */  lw    $t9, %got(D_10011100)($gp)
/* 00471944 00036143 */  sra   $t4, $v1, 5
/* 00471948 000C7880 */  sll   $t7, $t4, 2
/* 0047194C 27391100 */  addiu $t9, %lo(D_10011100) # addiu $t9, $t9, 0x1100
/* 00471950 032F4821 */  addu  $t1, $t9, $t7
/* 00471954 8D2A0000 */  lw    $t2, ($t1)
/* 00471958 006A7004 */  sllv  $t6, $t2, $v1
/* 0047195C 29CB0000 */  slti  $t3, $t6, 0
.L00471960:
/* 00471960 11600016 */  beqz  $t3, .L004719BC
/* 00471964 2C790080 */   sltiu $t9, $v1, 0x80
/* 00471968 8F9985CC */  lw    $t9, %call16(reset_images)($gp)
/* 0047196C 8E6D0004 */  lw    $t5, 4($s3)
/* 00471970 0320F809 */  jalr  $t9
/* 00471974 8DA40034 */   lw    $a0, 0x34($t5)
/* 00471978 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047197C 8E640004 */  lw    $a0, 4($s3)
/* 00471980 8F9985CC */  lw    $t9, %call16(reset_images)($gp)
/* 00471984 0320F809 */  jalr  $t9
/* 00471988 00000000 */   nop   
/* 0047198C 926C0000 */  lbu   $t4, ($s3)
/* 00471990 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471994 56EC0007 */  bnel  $s7, $t4, .L004719B4
/* 00471998 8EB20000 */   lw    $s2, ($s5)
/* 0047199C 8F9985CC */  lw    $t9, %call16(reset_images)($gp)
/* 004719A0 8E640014 */  lw    $a0, 0x14($s3)
/* 004719A4 0320F809 */  jalr  $t9
/* 004719A8 00000000 */   nop   
/* 004719AC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004719B0 8EB20000 */  lw    $s2, ($s5)
.L004719B4:
/* 004719B4 1000002D */  b     .L00471A6C
/* 004719B8 8E440020 */   lw    $a0, 0x20($s2)
.L004719BC:
/* 004719BC 13200009 */  beqz  $t9, .L004719E4
/* 004719C0 2C4C00A0 */   sltiu $t4, $v0, 0xa0
/* 004719C4 8F8A8044 */  lw    $t2, %got(D_100110F0)($gp)
/* 004719C8 00037943 */  sra   $t7, $v1, 5
/* 004719CC 000F4880 */  sll   $t1, $t7, 2
/* 004719D0 254A10F0 */  addiu $t2, %lo(D_100110F0) # addiu $t2, $t2, 0x10f0
/* 004719D4 01497021 */  addu  $t6, $t2, $t1
/* 004719D8 8DD80000 */  lw    $t8, ($t6)
/* 004719DC 00785804 */  sllv  $t3, $t8, $v1
/* 004719E0 29790000 */  slti  $t9, $t3, 0
.L004719E4:
/* 004719E4 1320000E */  beqz  $t9, .L00471A20
/* 004719E8 00000000 */   nop   
/* 004719EC 8F9985CC */  lw    $t9, %call16(reset_images)($gp)
/* 004719F0 8E640004 */  lw    $a0, 4($s3)
/* 004719F4 0320F809 */  jalr  $t9
/* 004719F8 00000000 */   nop   
/* 004719FC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471A00 8E640014 */  lw    $a0, 0x14($s3)
/* 00471A04 8F9985CC */  lw    $t9, %call16(reset_images)($gp)
/* 00471A08 0320F809 */  jalr  $t9
/* 00471A0C 00000000 */   nop   
/* 00471A10 8EB20000 */  lw    $s2, ($s5)
/* 00471A14 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471A18 10000014 */  b     .L00471A6C
/* 00471A1C 8E440020 */   lw    $a0, 0x20($s2)
.L00471A20:
/* 00471A20 11800009 */  beqz  $t4, .L00471A48
/* 00471A24 00000000 */   nop   
/* 00471A28 8F898044 */  lw    $t1, %got(D_100110DC)($gp)
/* 00471A2C 00027943 */  sra   $t7, $v0, 5
/* 00471A30 000F5080 */  sll   $t2, $t7, 2
/* 00471A34 252910DC */  addiu $t1, %lo(D_100110DC) # addiu $t1, $t1, 0x10dc
/* 00471A38 012A7021 */  addu  $t6, $t1, $t2
/* 00471A3C 8DD80000 */  lw    $t8, ($t6)
/* 00471A40 00585804 */  sllv  $t3, $t8, $v0
/* 00471A44 296C0000 */  slti  $t4, $t3, 0
.L00471A48:
/* 00471A48 55800009 */  bnezl $t4, .L00471A70
/* 00471A4C 8E730008 */   lw    $s3, 8($s3)
/* 00471A50 8F9985CC */  lw    $t9, %call16(reset_images)($gp)
/* 00471A54 8E640004 */  lw    $a0, 4($s3)
/* 00471A58 0320F809 */  jalr  $t9
/* 00471A5C 00000000 */   nop   
/* 00471A60 8EB20000 */  lw    $s2, ($s5)
/* 00471A64 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471A68 8E440020 */  lw    $a0, 0x20($s2)
.L00471A6C:
/* 00471A6C 8E730008 */  lw    $s3, 8($s3)
.L00471A70:
/* 00471A70 5664FFAF */  bnel  $s3, $a0, .L00471930
/* 00471A74 92620000 */   lbu   $v0, ($s3)
.L00471A78:
/* 00471A78 8F8589C4 */  lw     $a1, %got(stattail)($gp)
/* 00471A7C 240F0060 */  li    $t7, 96
/* 00471A80 8F8289B0 */  lw     $v0, %got(graphtail)($gp)
/* 00471A84 8CB90000 */  lw    $t9, ($a1)
/* 00471A88 ACA40000 */  sw    $a0, ($a1)
/* 00471A8C AFB900DC */  sw    $t9, 0xdc($sp)
/* 00471A90 8C930008 */  lw    $s3, 8($a0)
/* 00471A94 A08F0000 */  sb    $t7, ($a0)
/* 00471A98 AC800008 */  sw    $zero, 8($a0)
/* 00471A9C 8E490018 */  lw    $t1, 0x18($s2)
/* 00471AA0 AFD20000 */  sw    $s2, ($fp)
/* 00471AA4 8D2A0000 */  lw    $t2, ($t1)
/* 00471AA8 AEAA0000 */  sw    $t2, ($s5)
/* 00471AAC 8D580010 */  lw    $t8, 0x10($t2)
/* 00471AB0 8D4E000C */  lw    $t6, 0xc($t2)
/* 00471AB4 01409025 */  move  $s2, $t2
/* 00471AB8 AF0E000C */  sw    $t6, 0xc($t8)
/* 00471ABC 8C4B0000 */  lw    $t3, ($v0)
/* 00471AC0 516A0006 */  beql  $t3, $t2, .L00471ADC
/* 00471AC4 8E590010 */   lw    $t9, 0x10($s2)
/* 00471AC8 8D4D0010 */  lw    $t5, 0x10($t2)
/* 00471ACC 8D4C000C */  lw    $t4, 0xc($t2)
/* 00471AD0 10000003 */  b     .L00471AE0
/* 00471AD4 AD8D0010 */   sw    $t5, 0x10($t4)
/* 00471AD8 8E590010 */  lw    $t9, 0x10($s2)
.L00471ADC:
/* 00471ADC AC590000 */  sw    $t9, ($v0)
.L00471AE0:
/* 00471AE0 8E4200E8 */  lw    $v0, 0xe8($s2)
/* 00471AE4 50400007 */  beql  $v0, $zero, .L00471B04
/* 00471AE8 8E500018 */   lw    $s0, 0x18($s2)
/* 00471AEC 8C4F0008 */  lw    $t7, 8($v0)
/* 00471AF0 564F0004 */  bnel  $s2, $t7, .L00471B04
/* 00471AF4 8E500018 */   lw    $s0, 0x18($s2)
/* 00471AF8 8FC90000 */  lw    $t1, ($fp)
/* 00471AFC AC490008 */  sw    $t1, 8($v0)
/* 00471B00 8E500018 */  lw    $s0, 0x18($s2)
.L00471B04:
/* 00471B04 8F9985B0 */  lw    $t9, %call16(change_adj_node)($gp)
/* 00471B08 8E0A0000 */  lw    $t2, ($s0)
/* 00471B0C 8EA50000 */  lw    $a1, ($s5)
/* 00471B10 8FC60000 */  lw    $a2, ($fp)
/* 00471B14 0320F809 */  jalr  $t9
/* 00471B18 8D440014 */   lw    $a0, 0x14($t2)
/* 00471B1C 8E100004 */  lw    $s0, 4($s0)
/* 00471B20 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471B24 1600FFF7 */  bnez  $s0, .L00471B04
/* 00471B28 00000000 */   nop   
/* 00471B2C 8EB20000 */  lw    $s2, ($s5)
/* 00471B30 8FD80000 */  lw    $t8, ($fp)
/* 00471B34 8F818C80 */  lw     $at, %got(incr_amount)($gp)
/* 00471B38 8E4E0018 */  lw    $t6, 0x18($s2)
/* 00471B3C 00002025 */  move  $a0, $zero
/* 00471B40 00002825 */  move  $a1, $zero
/* 00471B44 AF0E0018 */  sw    $t6, 0x18($t8)
/* 00471B48 AC200000 */  sw    $zero, ($at)
/* 00471B4C 8F818C7C */  lw     $at, %got(incr_stat)($gp)
/* 00471B50 8E4B001C */  lw    $t3, 0x1c($s2)
/* 00471B54 8F9985A0 */  lw    $t9, %call16(post_loopblock)($gp)
/* 00471B58 24060001 */  li    $a2, 1
/* 00471B5C AC2B0000 */  sw    $t3, ($at)
/* 00471B60 8F818C88 */  lw     $at, %got(loopbodyend)($gp)
/* 00471B64 0320F809 */  jalr  $t9
/* 00471B68 AC320000 */   sw    $s2, ($at)
/* 00471B6C 8EAD0000 */  lw    $t5, ($s5)
/* 00471B70 24010088 */  li    $at, 136
/* 00471B74 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471B78 8DA40020 */  lw    $a0, 0x20($t5)
/* 00471B7C 908C0000 */  lbu   $t4, ($a0)
/* 00471B80 1581000B */  bne   $t4, $at, .L00471BB0
/* 00471B84 00000000 */   nop   
/* 00471B88 12600009 */  beqz  $s3, .L00471BB0
/* 00471B8C 00000000 */   nop   
/* 00471B90 92790000 */  lbu   $t9, ($s3)
/* 00471B94 24010042 */  li    $at, 66
/* 00471B98 17210005 */  bne   $t9, $at, .L00471BB0
/* 00471B9C 00000000 */   nop   
/* 00471BA0 8C8F0014 */  lw    $t7, 0x14($a0)
/* 00471BA4 8E690014 */  lw    $t1, 0x14($s3)
/* 00471BA8 11E90005 */  beq   $t7, $t1, .L00471BC0
/* 00471BAC 00000000 */   nop   
.L00471BB0:
/* 00471BB0 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 00471BB4 0320F809 */  jalr  $t9
/* 00471BB8 00000000 */   nop   
/* 00471BBC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00471BC0:
/* 00471BC0 8F8A89C4 */  lw     $t2, %got(stattail)($gp)
/* 00471BC4 8FCE0000 */  lw    $t6, ($fp)
/* 00471BC8 8D4A0000 */  lw    $t2, ($t2)
/* 00471BCC ADCA0020 */  sw    $t2, 0x20($t6)
/* 00471BD0 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 00471BD4 0320F809 */  jalr  $t9
/* 00471BD8 00000000 */   nop   
/* 00471BDC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471BE0 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 00471BE4 8C630000 */  lw    $v1, ($v1)
/* 00471BE8 12600002 */  beqz  $s3, .L00471BF4
/* 00471BEC AC730008 */   sw    $s3, 8($v1)
/* 00471BF0 AE63000C */  sw    $v1, 0xc($s3)
.L00471BF4:
/* 00471BF4 8FB800DC */  lw    $t8, 0xdc($sp)
/* 00471BF8 8F8189C4 */  lw     $at, %got(stattail)($gp)
/* 00471BFC AC380000 */  sw    $t8, ($at)
/* 00471C00 8EAB0000 */  lw    $t3, ($s5)
/* 00471C04 8D6D001C */  lw    $t5, 0x1c($t3)
/* 00471C08 8DB1000C */  lw    $s1, 0xc($t5)
/* 00471C0C 8E300008 */  lw    $s0, 8($s1)
/* 00471C10 92020000 */  lbu   $v0, ($s0)
.L00471C14:
/* 00471C14 2C4C0020 */  sltiu $t4, $v0, 0x20
/* 00471C18 000CC823 */  negu  $t9, $t4
/* 00471C1C 332F4010 */  andi  $t7, $t9, 0x4010
/* 00471C20 004F4804 */  sllv  $t1, $t7, $v0
/* 00471C24 05220056 */  bltzl $t1, .L00471D80
/* 00471C28 8E290010 */   lw    $t1, 0x10($s1)
/* 00471C2C 8E0A0008 */  lw    $t2, 8($s0)
/* 00471C30 AE2A0008 */  sw    $t2, 8($s1)
/* 00471C34 8E020008 */  lw    $v0, 8($s0)
/* 00471C38 50400003 */  beql  $v0, $zero, .L00471C48
/* 00471C3C 92020000 */   lbu   $v0, ($s0)
/* 00471C40 AC51000C */  sw    $s1, 0xc($v0)
/* 00471C44 92020000 */  lbu   $v0, ($s0)
.L00471C48:
/* 00471C48 244EFFE0 */  addiu $t6, $v0, -0x20
/* 00471C4C 2DD80060 */  sltiu $t8, $t6, 0x60
/* 00471C50 13000009 */  beqz  $t8, .L00471C78
/* 00471C54 00000000 */   nop   
/* 00471C58 8F8C8044 */  lw    $t4, %got(D_10011100)($gp)
/* 00471C5C 000E5943 */  sra   $t3, $t6, 5
/* 00471C60 000B6880 */  sll   $t5, $t3, 2
/* 00471C64 258C1100 */  addiu $t4, %lo(D_10011100) # addiu $t4, $t4, 0x1100
/* 00471C68 018DC821 */  addu  $t9, $t4, $t5
/* 00471C6C 8F2F0000 */  lw    $t7, ($t9)
/* 00471C70 01CF4804 */  sllv  $t1, $t7, $t6
/* 00471C74 29380000 */  slti  $t8, $t1, 0
.L00471C78:
/* 00471C78 13000019 */  beqz  $t8, .L00471CE0
/* 00471C7C 2C4F00A0 */   sltiu $t7, $v0, 0xa0
/* 00471C80 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00471C84 8E0B0004 */  lw    $t3, 4($s0)
/* 00471C88 0320F809 */  jalr  $t9
/* 00471C8C 8D640034 */   lw    $a0, 0x34($t3)
/* 00471C90 8E040004 */  lw    $a0, 4($s0)
/* 00471C94 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471C98 8C8C0014 */  lw    $t4, 0x14($a0)
/* 00471C9C 51800008 */  beql  $t4, $zero, .L00471CC0
/* 00471CA0 92190000 */   lbu   $t9, ($s0)
/* 00471CA4 8F998634 */  lw    $t9, %call16(fixcorr)($gp)
/* 00471CA8 0320F809 */  jalr  $t9
/* 00471CAC 00000000 */   nop   
/* 00471CB0 8E0D0004 */  lw    $t5, 4($s0)
/* 00471CB4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471CB8 ADA00014 */  sw    $zero, 0x14($t5)
/* 00471CBC 92190000 */  lbu   $t9, ($s0)
.L00471CC0:
/* 00471CC0 16F9002C */  bne   $s7, $t9, .L00471D74
/* 00471CC4 00000000 */   nop   
/* 00471CC8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00471CCC 8E040014 */  lw    $a0, 0x14($s0)
/* 00471CD0 0320F809 */  jalr  $t9
/* 00471CD4 00000000 */   nop   
/* 00471CD8 10000026 */  b     .L00471D74
/* 00471CDC 8FBC003C */   lw    $gp, 0x3c($sp)
.L00471CE0:
/* 00471CE0 11E00009 */  beqz  $t7, .L00471D08
/* 00471CE4 00000000 */   nop   
/* 00471CE8 8F8A8044 */  lw    $t2, %got(D_100110C8)($gp)
/* 00471CEC 00027143 */  sra   $t6, $v0, 5
/* 00471CF0 000E4880 */  sll   $t1, $t6, 2
/* 00471CF4 254A10C8 */  addiu $t2, %lo(D_100110C8) # addiu $t2, $t2, 0x10c8
/* 00471CF8 0149C021 */  addu  $t8, $t2, $t1
/* 00471CFC 8F0B0000 */  lw    $t3, ($t8)
/* 00471D00 004B6004 */  sllv  $t4, $t3, $v0
/* 00471D04 298F0000 */  slti  $t7, $t4, 0
.L00471D08:
/* 00471D08 15E0001A */  bnez  $t7, .L00471D74
/* 00471D0C 00000000 */   nop   
/* 00471D10 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00471D14 8E040004 */  lw    $a0, 4($s0)
/* 00471D18 0320F809 */  jalr  $t9
/* 00471D1C 00000000 */   nop   
/* 00471D20 92190000 */  lbu   $t9, ($s0)
/* 00471D24 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471D28 272EFFE0 */  addiu $t6, $t9, -0x20
/* 00471D2C 2DCA0080 */  sltiu $t2, $t6, 0x80
/* 00471D30 11400009 */  beqz  $t2, .L00471D58
/* 00471D34 00000000 */   nop   
/* 00471D38 8F8B8044 */  lw    $t3, %got(D_100110F0)($gp)
/* 00471D3C 000E4943 */  sra   $t1, $t6, 5
/* 00471D40 0009C080 */  sll   $t8, $t1, 2
/* 00471D44 256B10F0 */  addiu $t3, %lo(D_100110F0) # addiu $t3, $t3, 0x10f0
/* 00471D48 01786021 */  addu  $t4, $t3, $t8
/* 00471D4C 8D8D0000 */  lw    $t5, ($t4)
/* 00471D50 01CD7804 */  sllv  $t7, $t5, $t6
/* 00471D54 29EA0000 */  slti  $t2, $t7, 0
.L00471D58:
/* 00471D58 11400006 */  beqz  $t2, .L00471D74
/* 00471D5C 00000000 */   nop   
/* 00471D60 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00471D64 8E040014 */  lw    $a0, 0x14($s0)
/* 00471D68 0320F809 */  jalr  $t9
/* 00471D6C 00000000 */   nop   
/* 00471D70 8FBC003C */  lw    $gp, 0x3c($sp)
.L00471D74:
/* 00471D74 10000023 */  b     .L00471E04
/* 00471D78 8E020008 */   lw    $v0, 8($s0)
/* 00471D7C 8E290010 */  lw    $t1, 0x10($s1)
.L00471D80:
/* 00471D80 16C2001E */  bne   $s6, $v0, .L00471DFC
/* 00471D84 AE090010 */   sw    $t1, 0x10($s0)
/* 00471D88 8E120018 */  lw    $s2, 0x18($s0)
/* 00471D8C 1A40001B */  blez  $s2, .L00471DFC
/* 00471D90 26520001 */   addiu $s2, $s2, 1
/* 00471D94 2644FFFF */  addiu $a0, $s2, -1
/* 00471D98 30840003 */  andi  $a0, $a0, 3
/* 00471D9C 10800009 */  beqz  $a0, .L00471DC4
/* 00471DA0 24020001 */   li    $v0, 1
/* 00471DA4 24830001 */  addiu $v1, $a0, 1
.L00471DA8:
/* 00471DA8 8E100008 */  lw    $s0, 8($s0)
/* 00471DAC 8E2B0010 */  lw    $t3, 0x10($s1)
/* 00471DB0 24420001 */  addiu $v0, $v0, 1
/* 00471DB4 1462FFFC */  bne   $v1, $v0, .L00471DA8
/* 00471DB8 AE0B0010 */   sw    $t3, 0x10($s0)
/* 00471DBC 50520010 */  beql  $v0, $s2, .L00471E00
/* 00471DC0 02008825 */   move  $s1, $s0
.L00471DC4:
/* 00471DC4 8E100008 */  lw    $s0, 8($s0)
/* 00471DC8 8E380010 */  lw    $t8, 0x10($s1)
/* 00471DCC 24420004 */  addiu $v0, $v0, 4
/* 00471DD0 AE180010 */  sw    $t8, 0x10($s0)
/* 00471DD4 8E2C0010 */  lw    $t4, 0x10($s1)
/* 00471DD8 8E100008 */  lw    $s0, 8($s0)
/* 00471DDC AE0C0010 */  sw    $t4, 0x10($s0)
/* 00471DE0 8E2D0010 */  lw    $t5, 0x10($s1)
/* 00471DE4 8E100008 */  lw    $s0, 8($s0)
/* 00471DE8 AE0D0010 */  sw    $t5, 0x10($s0)
/* 00471DEC 8E2E0010 */  lw    $t6, 0x10($s1)
/* 00471DF0 8E100008 */  lw    $s0, 8($s0)
/* 00471DF4 1452FFF3 */  bne   $v0, $s2, .L00471DC4
/* 00471DF8 AE0E0010 */   sw    $t6, 0x10($s0)
.L00471DFC:
/* 00471DFC 02008825 */  move  $s1, $s0
.L00471E00:
/* 00471E00 8E020008 */  lw    $v0, 8($s0)
.L00471E04:
/* 00471E04 10400006 */  beqz  $v0, .L00471E20
/* 00471E08 00000000 */   nop   
/* 00471E0C 8EAF0000 */  lw    $t7, ($s5)
/* 00471E10 8C590010 */  lw    $t9, 0x10($v0)
/* 00471E14 01F9A026 */  xor   $s4, $t7, $t9
/* 00471E18 0014A02B */  sltu  $s4, $zero, $s4
/* 00471E1C 329400FF */  andi  $s4, $s4, 0xff
.L00471E20:
/* 00471E20 10400003 */  beqz  $v0, .L00471E30
/* 00471E24 00408025 */   move  $s0, $v0
/* 00471E28 5280FF7A */  beql  $s4, $zero, .L00471C14
/* 00471E2C 92020000 */   lbu   $v0, ($s0)
.L00471E30:
/* 00471E30 8FCA0000 */  lw    $t2, ($fp)
/* 00471E34 24010088 */  li    $at, 136
/* 00471E38 AEAA0000 */  sw    $t2, ($s5)
/* 00471E3C 8D440020 */  lw    $a0, 0x20($t2)
/* 00471E40 01409025 */  move  $s2, $t2
/* 00471E44 90890000 */  lbu   $t1, ($a0)
/* 00471E48 55210018 */  bnel  $t1, $at, .L00471EAC
/* 00471E4C 8E4A000C */   lw    $t2, 0xc($s2)
/* 00471E50 8D4B0018 */  lw    $t3, 0x18($t2)
/* 00471E54 8D620000 */  lw    $v0, ($t3)
/* 00471E58 8C580014 */  lw    $t8, 0x14($v0)
/* 00471E5C 8F0C0004 */  lw    $t4, 4($t8)
/* 00471E60 55800012 */  bnezl $t4, .L00471EAC
/* 00471E64 8E4A000C */   lw    $t2, 0xc($s2)
/* 00471E68 8C4D0020 */  lw    $t5, 0x20($v0)
/* 00471E6C 91AE0000 */  lbu   $t6, ($t5)
/* 00471E70 25CFFFE0 */  addiu $t7, $t6, -0x20
/* 00471E74 2DF90080 */  sltiu $t9, $t7, 0x80
/* 00471E78 13200009 */  beqz  $t9, .L00471EA0
/* 00471E7C 00000000 */   nop   
/* 00471E80 8F8B8044 */  lw    $t3, %got(D_1001110C)($gp)
/* 00471E84 000F5143 */  sra   $t2, $t7, 5
/* 00471E88 000A4880 */  sll   $t1, $t2, 2
/* 00471E8C 256B110C */  addiu $t3, %lo(D_1001110C) # addiu $t3, $t3, 0x110c
/* 00471E90 0169C021 */  addu  $t8, $t3, $t1
/* 00471E94 8F0C0000 */  lw    $t4, ($t8)
/* 00471E98 01EC6804 */  sllv  $t5, $t4, $t7
/* 00471E9C 29B90000 */  slti  $t9, $t5, 0
.L00471EA0:
/* 00471EA0 5720FE9F */  bnezl $t9, .L00471920
/* 00471EA4 8E53001C */   lw    $s3, 0x1c($s2)
/* 00471EA8 8E4A000C */  lw    $t2, 0xc($s2)
.L00471EAC:
/* 00471EAC AEAA0000 */  sw    $t2, ($s5)
/* 00471EB0 1540FD63 */  bnez  $t2, .L00471440
/* 00471EB4 01409025 */   move  $s2, $t2
/* 00471EB8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00471EBC 24040010 */  li    $a0, 16
/* 00471EC0 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00471EC4 0320F809 */  jalr  $t9
/* 00471EC8 00000000 */   nop   
/* 00471ECC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471ED0 8F848C9C */  lw     $a0, %got(labelmap_head)($gp)
/* 00471ED4 8F8B89AC */  lw     $t3, %got(graphhead)($gp)
/* 00471ED8 8F818CA0 */  lw     $at, %got(labelmap_unused)($gp)
/* 00471EDC AC820000 */  sw    $v0, ($a0)
/* 00471EE0 AC40000C */  sw    $zero, 0xc($v0)
/* 00471EE4 8D6B0000 */  lw    $t3, ($t3)
/* 00471EE8 8F898B60 */  lw     $t1, %got(unroll_times)($gp)
/* 00471EEC AC220000 */  sw    $v0, ($at)
/* 00471EF0 AEAB0000 */  sw    $t3, ($s5)
/* 00471EF4 8D290000 */  lw    $t1, ($t1)
/* 00471EF8 29210002 */  slti  $at, $t1, 2
/* 00471EFC 142004E4 */  bnez  $at, .L00473290
/* 00471F00 01609025 */   move  $s2, $t3
/* 00471F04 8F968CCC */  lw     $s6, %got(list)($gp)
/* 00471F08 92580005 */  lbu   $t8, 5($s2)
.L00471F0C:
/* 00471F0C 24010002 */  li    $at, 2
/* 00471F10 570104DA */  bnel  $t8, $at, .L0047327C
/* 00471F14 8EA90000 */   lw    $t1, ($s5)
/* 00471F18 8E420014 */  lw    $v0, 0x14($s2)
/* 00471F1C 8F848C88 */  lw     $a0, %got(loopbodyend)($gp)
/* 00471F20 924F000A */  lbu   $t7, 0xa($s2)
/* 00471F24 8C470000 */  lw    $a3, ($v0)
/* 00471F28 8F838B54 */  lw     $v1, %got(multibbunroll)($gp)
/* 00471F2C 90ED000A */  lbu   $t5, 0xa($a3)
/* 00471F30 AC870000 */  sw    $a3, ($a0)
/* 00471F34 90630000 */  lbu   $v1, ($v1)
/* 00471F38 11ED0007 */  beq   $t7, $t5, .L00471F58
/* 00471F3C 00000000 */   nop   
/* 00471F40 8C4E0004 */  lw    $t6, 4($v0)
/* 00471F44 8F818C88 */  lw     $at, %got(loopbodyend)($gp)
/* 00471F48 8F878C88 */  lw     $a3, %got(loopbodyend)($gp)
/* 00471F4C 8DD90000 */  lw    $t9, ($t6)
/* 00471F50 AC390000 */  sw    $t9, ($at)
/* 00471F54 8CE70000 */  lw    $a3, ($a3)
.L00471F58:
/* 00471F58 14600006 */  bnez  $v1, .L00471F74
/* 00471F5C 00000000 */   nop   
/* 00471F60 10F20004 */  beq   $a3, $s2, .L00471F74
/* 00471F64 00000000 */   nop   
/* 00471F68 8E4A000C */  lw    $t2, 0xc($s2)
/* 00471F6C 100004C5 */  b     .L00473284
/* 00471F70 AEAA0000 */   sw    $t2, ($s5)
.L00471F74:
/* 00471F74 10F20008 */  beq   $a3, $s2, .L00471F98
/* 00471F78 00000000 */   nop   
/* 00471F7C 8F908B64 */  lw     $s0, %got(unroll_limit)($gp)
/* 00471F80 24010003 */  li    $at, 3
/* 00471F84 8E100000 */  lw    $s0, ($s0)
/* 00471F88 0201001A */  div   $zero, $s0, $at
/* 00471F8C 00008012 */  mflo  $s0
/* 00471F90 10000004 */  b     .L00471FA4
/* 00471F94 8CF30020 */   lw    $s3, 0x20($a3)
.L00471F98:
/* 00471F98 8F908B64 */  lw     $s0, %got(unroll_limit)($gp)
/* 00471F9C 8E100000 */  lw    $s0, ($s0)
/* 00471FA0 8CF30020 */  lw    $s3, 0x20($a3)
.L00471FA4:
/* 00471FA4 8F9985AC */  lw    $t9, %call16(estimate_instr)($gp)
/* 00471FA8 02402025 */  move  $a0, $s2
/* 00471FAC 8E6B0004 */  lw    $t3, 4($s3)
/* 00471FB0 00E02825 */  move  $a1, $a3
/* 00471FB4 0320F809 */  jalr  $t9
/* 00471FB8 AFAB00EC */   sw    $t3, 0xec($sp)
/* 00471FBC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00471FC0 14400002 */  bnez  $v0, .L00471FCC
/* 00471FC4 00401825 */   move  $v1, $v0
/* 00471FC8 24030001 */  li    $v1, 1
.L00471FCC:
/* 00471FCC 00034840 */  sll   $t1, $v1, 1
/* 00471FD0 0209082B */  sltu  $at, $s0, $t1
/* 00471FD4 142004A8 */  bnez  $at, .L00473278
/* 00471FD8 00608825 */   move  $s1, $v1
/* 00471FDC 92630027 */  lbu   $v1, 0x27($s3)
/* 00471FE0 50600019 */  beql  $v1, $zero, .L00472048
/* 00471FE4 8EB20000 */   lw    $s2, ($s5)
/* 00471FE8 8FB800EC */  lw    $t8, 0xec($sp)
/* 00471FEC 8E6D0020 */  lw    $t5, 0x20($s3)
/* 00471FF0 8E6A001C */  lw    $t2, 0x1c($s3)
/* 00471FF4 8F0C0028 */  lw    $t4, 0x28($t8)
/* 00471FF8 8DAE0020 */  lw    $t6, 0x20($t5)
/* 00471FFC 8F898B60 */  lw     $t1, %got(unroll_times)($gp)
/* 00472000 8D8F0020 */  lw    $t7, 0x20($t4)
/* 00472004 8D290000 */  lw    $t1, ($t1)
/* 00472008 01EEC823 */  subu  $t9, $t7, $t6
/* 0047200C 032A001A */  div   $zero, $t9, $t2
/* 00472010 15400002 */  bnez  $t2, .L0047201C
/* 00472014 00000000 */   nop   
/* 00472018 0007000D */  break 7
.L0047201C:
/* 0047201C 2401FFFF */  li    $at, -1
/* 00472020 15410004 */  bne   $t2, $at, .L00472034
/* 00472024 3C018000 */   lui   $at, 0x8000
/* 00472028 17210002 */  bne   $t9, $at, .L00472034
/* 0047202C 00000000 */   nop   
/* 00472030 0006000D */  break 6
.L00472034:
/* 00472034 00005812 */  mflo  $t3
/* 00472038 0169082A */  slt   $at, $t3, $t1
/* 0047203C 5420048F */  bnezl $at, .L0047327C
/* 00472040 8EA90000 */   lw    $t1, ($s5)
/* 00472044 8EB20000 */  lw    $s2, ($s5)
.L00472048:
/* 00472048 8F848C8C */  lw     $a0, %got(loopheader)($gp)
/* 0047204C 8F8C8C88 */  lw     $t4, %got(loopbodyend)($gp)
/* 00472050 8E420014 */  lw    $v0, 0x14($s2)
/* 00472054 0000A025 */  move  $s4, $zero
/* 00472058 8C580000 */  lw    $t8, ($v0)
/* 0047205C AC980000 */  sw    $t8, ($a0)
/* 00472060 8D8C0000 */  lw    $t4, ($t4)
/* 00472064 55980006 */  bnel  $t4, $t8, .L00472080
/* 00472068 8E59001C */   lw    $t9, 0x1c($s2)
/* 0047206C 8C4F0004 */  lw    $t7, 4($v0)
/* 00472070 8F818C8C */  lw     $at, %got(loopheader)($gp)
/* 00472074 8DEE0000 */  lw    $t6, ($t7)
/* 00472078 AC2E0000 */  sw    $t6, ($at)
/* 0047207C 8E59001C */  lw    $t9, 0x1c($s2)
.L00472080:
/* 00472080 8F818C94 */  lw     $at, %got(looplab)($gp)
/* 00472084 8FAB00EC */  lw    $t3, 0xec($sp)
/* 00472088 8F2A0014 */  lw    $t2, 0x14($t9)
/* 0047208C 10600006 */  beqz  $v1, .L004720A8
/* 00472090 AC2A0000 */   sw    $t2, ($at)
/* 00472094 8D690024 */  lw    $t1, 0x24($t3)
/* 00472098 8F818C78 */  lw     $at, %got(i_var_inx)($gp)
/* 0047209C 8D380014 */  lw    $t8, 0x14($t1)
/* 004720A0 10000013 */  b     .L004720F0
/* 004720A4 AC380000 */   sw    $t8, ($at)
.L004720A8:
/* 004720A8 926D0026 */  lbu   $t5, 0x26($s3)
/* 004720AC 8FAC00EC */  lw    $t4, 0xec($sp)
/* 004720B0 11A00008 */  beqz  $t5, .L004720D4
/* 004720B4 8D830028 */   lw    $v1, 0x28($t4)
/* 004720B8 AFA300AC */  sw    $v1, 0xac($sp)
/* 004720BC 8D820024 */  lw    $v0, 0x24($t4)
/* 004720C0 8F818C78 */  lw     $at, %got(i_var_inx)($gp)
/* 004720C4 8C4F0014 */  lw    $t7, 0x14($v0)
/* 004720C8 AFA200A8 */  sw    $v0, 0xa8($sp)
/* 004720CC 10000008 */  b     .L004720F0
/* 004720D0 AC2F0000 */   sw    $t7, ($at)
.L004720D4:
/* 004720D4 8FAE00EC */  lw    $t6, 0xec($sp)
/* 004720D8 8C6A0014 */  lw    $t2, 0x14($v1)
/* 004720DC 8F818C78 */  lw     $at, %got(i_var_inx)($gp)
/* 004720E0 8DD90024 */  lw    $t9, 0x24($t6)
/* 004720E4 AFA300A8 */  sw    $v1, 0xa8($sp)
/* 004720E8 AC2A0000 */  sw    $t2, ($at)
/* 004720EC AFB900AC */  sw    $t9, 0xac($sp)
.L004720F0:
/* 004720F0 8F8B8C78 */  lw     $t3, %got(i_var_inx)($gp)
/* 004720F4 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 004720F8 8D6B0000 */  lw    $t3, ($t3)
/* 004720FC 0320F809 */  jalr  $t9
/* 00472100 91640001 */   lbu   $a0, 1($t3)
/* 00472104 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472108 28410004 */  slti  $at, $v0, 4
/* 0047210C 00404825 */  move  $t1, $v0
/* 00472110 10200002 */  beqz  $at, .L0047211C
/* 00472114 8F848C7C */   lw     $a0, %got(incr_stat)($gp)
/* 00472118 24090004 */  li    $t1, 4
.L0047211C:
/* 0047211C 8F818C90 */  lw     $at, %got(i_var_size)($gp)
/* 00472120 AC290000 */  sw    $t1, ($at)
/* 00472124 8EB80000 */  lw    $t8, ($s5)
/* 00472128 8F0D001C */  lw    $t5, 0x1c($t8)
/* 0047212C AC8D0000 */  sw    $t5, ($a0)
/* 00472130 91AC0000 */  lbu   $t4, ($t5)
/* 00472134 01A01825 */  move  $v1, $t5
/* 00472138 258FFFE0 */  addiu $t7, $t4, -0x20
/* 0047213C 2DEE0060 */  sltiu $t6, $t7, 0x60
/* 00472140 11C0000A */  beqz  $t6, .L0047216C
/* 00472144 00000000 */   nop   
/* 00472148 8F8B8044 */  lw    $t3, %got(D_10011100)($gp)
/* 0047214C 000FC943 */  sra   $t9, $t7, 5
/* 00472150 00195080 */  sll   $t2, $t9, 2
/* 00472154 256B1100 */  addiu $t3, %lo(D_10011100) # addiu $t3, $t3, 0x1100
/* 00472158 016A4821 */  addu  $t1, $t3, $t2
/* 0047215C 8D380000 */  lw    $t8, ($t1)
/* 00472160 01F86804 */  sllv  $t5, $t8, $t7
/* 00472164 29AC0000 */  slti  $t4, $t5, 0
/* 00472168 01807025 */  move  $t6, $t4
.L0047216C:
/* 0047216C 11C0000A */  beqz  $t6, .L00472198
/* 00472170 00000000 */   nop   
/* 00472174 90790001 */  lbu   $t9, 1($v1)
/* 00472178 13200007 */  beqz  $t9, .L00472198
/* 0047217C 00000000 */   nop   
/* 00472180 8F8B8C78 */  lw     $t3, %got(i_var_inx)($gp)
/* 00472184 8C6A0004 */  lw    $t2, 4($v1)
/* 00472188 8D6B0000 */  lw    $t3, ($t3)
/* 0047218C 8D490014 */  lw    $t1, 0x14($t2)
/* 00472190 1169001E */  beq   $t3, $t1, .L0047220C
/* 00472194 00000000 */   nop   
.L00472198:
/* 00472198 8F828C7C */  lw     $v0, %got(incr_stat)($gp)
/* 0047219C 8C780008 */  lw    $t8, 8($v1)
/* 004721A0 AC580000 */  sw    $t8, ($v0)
/* 004721A4 930F0000 */  lbu   $t7, ($t8)
/* 004721A8 03001825 */  move  $v1, $t8
/* 004721AC 25EDFFE0 */  addiu $t5, $t7, -0x20
/* 004721B0 2DAC0060 */  sltiu $t4, $t5, 0x60
/* 004721B4 1180000A */  beqz  $t4, .L004721E0
/* 004721B8 00000000 */   nop   
/* 004721BC 8F8A8044 */  lw    $t2, %got(D_10011100)($gp)
/* 004721C0 000D7143 */  sra   $t6, $t5, 5
/* 004721C4 000EC880 */  sll   $t9, $t6, 2
/* 004721C8 254A1100 */  addiu $t2, %lo(D_10011100) # addiu $t2, $t2, 0x1100
/* 004721CC 01595821 */  addu  $t3, $t2, $t9
/* 004721D0 8D690000 */  lw    $t1, ($t3)
/* 004721D4 01A9C004 */  sllv  $t8, $t1, $t5
/* 004721D8 2B0F0000 */  slti  $t7, $t8, 0
/* 004721DC 01E06025 */  move  $t4, $t7
.L004721E0:
/* 004721E0 1180FFED */  beqz  $t4, .L00472198
/* 004721E4 00000000 */   nop   
/* 004721E8 906E0001 */  lbu   $t6, 1($v1)
/* 004721EC 11C0FFEA */  beqz  $t6, .L00472198
/* 004721F0 00000000 */   nop   
/* 004721F4 8F8A8C78 */  lw     $t2, %got(i_var_inx)($gp)
/* 004721F8 8C790004 */  lw    $t9, 4($v1)
/* 004721FC 8D4A0000 */  lw    $t2, ($t2)
/* 00472200 8F2B0014 */  lw    $t3, 0x14($t9)
/* 00472204 154BFFE4 */  bne   $t2, $t3, .L00472198
/* 00472208 00000000 */   nop   
.L0047220C:
/* 0047220C 0211001B */  divu  $zero, $s0, $s1
/* 00472210 8F898B60 */  lw     $t1, %got(unroll_times)($gp)
/* 00472214 00006812 */  mflo  $t5
/* 00472218 01A01025 */  move  $v0, $t5
/* 0047221C 8D290000 */  lw    $t1, ($t1)
/* 00472220 16200002 */  bnez  $s1, .L0047222C
/* 00472224 00000000 */   nop   
/* 00472228 0007000D */  break 7
.L0047222C:
/* 0047222C 012D082A */  slt   $at, $t1, $t5
/* 00472230 10200002 */  beqz  $at, .L0047223C
/* 00472234 24180002 */   li    $t8, 2
/* 00472238 01201025 */  move  $v0, $t1
.L0047223C:
/* 0047223C 24010003 */  li    $at, 3
/* 00472240 14410002 */  bne   $v0, $at, .L0047224C
/* 00472244 AFA200C4 */   sw    $v0, 0xc4($sp)
/* 00472248 AFB800C4 */  sw    $t8, 0xc4($sp)
.L0047224C:
/* 0047224C 8F99858C */  lw    $t9, %call16(record_labels)($gp)
/* 00472250 0320F809 */  jalr  $t9
/* 00472254 00000000 */   nop   
/* 00472258 926F0027 */  lbu   $t7, 0x27($s3)
/* 0047225C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472260 11E00077 */  beqz  $t7, .L00472440
/* 00472264 00000000 */   nop   
/* 00472268 8F8C89C4 */  lw     $t4, %got(stattail)($gp)
/* 0047226C 8EAE0000 */  lw    $t6, ($s5)
/* 00472270 8F8189C4 */  lw     $at, %got(stattail)($gp)
/* 00472274 8D8C0000 */  lw    $t4, ($t4)
/* 00472278 8F8B89C4 */  lw     $t3, %got(stattail)($gp)
/* 0047227C AFAC00DC */  sw    $t4, 0xdc($sp)
/* 00472280 8DD9001C */  lw    $t9, 0x1c($t6)
/* 00472284 8F2A000C */  lw    $t2, 0xc($t9)
/* 00472288 AC2A0000 */  sw    $t2, ($at)
/* 0047228C 8D6B0000 */  lw    $t3, ($t3)
/* 00472290 AD600008 */  sw    $zero, 8($t3)
/* 00472294 8FA900EC */  lw    $t1, 0xec($sp)
/* 00472298 8E6F0020 */  lw    $t7, 0x20($s3)
/* 0047229C 8E79001C */  lw    $t9, 0x1c($s3)
/* 004722A0 8D2D0028 */  lw    $t5, 0x28($t1)
/* 004722A4 8DEC0020 */  lw    $t4, 0x20($t7)
/* 004722A8 8FAA00C4 */  lw    $t2, 0xc4($sp)
/* 004722AC 8DB80020 */  lw    $t8, 0x20($t5)
/* 004722B0 030C7023 */  subu  $t6, $t8, $t4
/* 004722B4 01D9001A */  div   $zero, $t6, $t9
/* 004722B8 00001012 */  mflo  $v0
/* 004722BC 17200002 */  bnez  $t9, .L004722C8
/* 004722C0 00000000 */   nop   
/* 004722C4 0007000D */  break 7
.L004722C8:
/* 004722C8 2401FFFF */  li    $at, -1
/* 004722CC 17210004 */  bne   $t9, $at, .L004722E0
/* 004722D0 3C018000 */   lui   $at, 0x8000
/* 004722D4 15C10002 */  bne   $t6, $at, .L004722E0
/* 004722D8 00000000 */   nop   
/* 004722DC 0006000D */  break 6
.L004722E0:
/* 004722E0 004A001A */  div   $zero, $v0, $t2
/* 004722E4 00008010 */  mfhi  $s0
/* 004722E8 020A5826 */  xor   $t3, $s0, $t2
/* 004722EC 15400002 */  bnez  $t2, .L004722F8
/* 004722F0 00000000 */   nop   
/* 004722F4 0007000D */  break 7
.L004722F8:
/* 004722F8 2401FFFF */  li    $at, -1
/* 004722FC 15410004 */  bne   $t2, $at, .L00472310
/* 00472300 3C018000 */   lui   $at, 0x8000
/* 00472304 14410002 */  bne   $v0, $at, .L00472310
/* 00472308 00000000 */   nop   
/* 0047230C 0006000D */  break 6
.L00472310:
/* 00472310 05610002 */  bgez  $t3, .L0047231C
/* 00472314 00000000 */   nop   
/* 00472318 020A8021 */  addu  $s0, $s0, $t2
.L0047231C:
/* 0047231C 12000264 */  beqz  $s0, .L00472CB0
/* 00472320 00000000 */   nop   
/* 00472324 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 00472328 24040001 */  li    $a0, 1
/* 0047232C 0320F809 */  jalr  $t9
/* 00472330 00000000 */   nop   
/* 00472334 8EA90000 */  lw    $t1, ($s5)
/* 00472338 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047233C 8FCF0000 */  lw    $t7, ($fp)
/* 00472340 8D2D00E8 */  lw    $t5, 0xe8($t1)
/* 00472344 8F818C80 */  lw     $at, %got(incr_amount)($gp)
/* 00472348 2602FFFF */  addiu $v0, $s0, -1
/* 0047234C ADED00E8 */  sw    $t5, 0xe8($t7)
/* 00472350 1840001B */  blez  $v0, .L004723C0
/* 00472354 AC200000 */   sw    $zero, ($at)
/* 00472358 24100001 */  li    $s0, 1
/* 0047235C 24520001 */  addiu $s2, $v0, 1
.L00472360:
/* 00472360 8F998590 */  lw    $t9, %call16(new_set_of_labels)($gp)
/* 00472364 0320F809 */  jalr  $t9
/* 00472368 00000000 */   nop   
/* 0047236C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472370 00002025 */  move  $a0, $zero
/* 00472374 24050001 */  li    $a1, 1
/* 00472378 8F99859C */  lw    $t9, %call16(pre_loopblock)($gp)
/* 0047237C 0320F809 */  jalr  $t9
/* 00472380 00000000 */   nop   
/* 00472384 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472388 8E6C001C */  lw    $t4, 0x1c($s3)
/* 0047238C 00002025 */  move  $a0, $zero
/* 00472390 8F828C80 */  lw     $v0, %got(incr_amount)($gp)
/* 00472394 24050001 */  li    $a1, 1
/* 00472398 24060001 */  li    $a2, 1
/* 0047239C 8C580000 */  lw    $t8, ($v0)
/* 004723A0 030C7021 */  addu  $t6, $t8, $t4
/* 004723A4 AC4E0000 */  sw    $t6, ($v0)
/* 004723A8 8F9985A0 */  lw    $t9, %call16(post_loopblock)($gp)
/* 004723AC 0320F809 */  jalr  $t9
/* 004723B0 00000000 */   nop   
/* 004723B4 26100001 */  addiu $s0, $s0, 1
/* 004723B8 1612FFE9 */  bne   $s0, $s2, .L00472360
/* 004723BC 8FBC003C */   lw    $gp, 0x3c($sp)
.L004723C0:
/* 004723C0 8F998590 */  lw    $t9, %call16(new_set_of_labels)($gp)
/* 004723C4 0320F809 */  jalr  $t9
/* 004723C8 00000000 */   nop   
/* 004723CC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004723D0 00002025 */  move  $a0, $zero
/* 004723D4 24050001 */  li    $a1, 1
/* 004723D8 8F99859C */  lw    $t9, %call16(pre_loopblock)($gp)
/* 004723DC 0320F809 */  jalr  $t9
/* 004723E0 00000000 */   nop   
/* 004723E4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004723E8 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 004723EC 8F848C7C */  lw     $a0, %got(incr_stat)($gp)
/* 004723F0 0320F809 */  jalr  $t9
/* 004723F4 8C840000 */   lw    $a0, ($a0)
/* 004723F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004723FC 00002025 */  move  $a0, $zero
/* 00472400 24050001 */  li    $a1, 1
/* 00472404 8F9985A0 */  lw    $t9, %call16(post_loopblock)($gp)
/* 00472408 8F818C80 */  lw     $at, %got(incr_amount)($gp)
/* 0047240C 24060001 */  li    $a2, 1
/* 00472410 0320F809 */  jalr  $t9
/* 00472414 AC200000 */   sw    $zero, ($at)
/* 00472418 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047241C 8FCA0000 */  lw    $t2, ($fp)
/* 00472420 8F9989C4 */  lw     $t9, %got(stattail)($gp)
/* 00472424 8F390000 */  lw    $t9, ($t9)
/* 00472428 AD590020 */  sw    $t9, 0x20($t2)
/* 0047242C 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 00472430 0320F809 */  jalr  $t9
/* 00472434 00000000 */   nop   
/* 00472438 1000021D */  b     .L00472CB0
/* 0047243C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00472440:
/* 00472440 8F878C88 */  lw     $a3, %got(loopbodyend)($gp)
/* 00472444 8F8B89C4 */  lw     $t3, %got(stattail)($gp)
/* 00472448 8EA90000 */  lw    $t1, ($s5)
/* 0047244C 8CE70000 */  lw    $a3, ($a3)
/* 00472450 8D6B0000 */  lw    $t3, ($t3)
/* 00472454 8CE20018 */  lw    $v0, 0x18($a3)
/* 00472458 AFAB00DC */  sw    $t3, 0xdc($sp)
/* 0047245C 8C510000 */  lw    $s1, ($v0)
/* 00472460 56290004 */  bnel  $s1, $t1, .L00472474
/* 00472464 8CEF000C */   lw    $t7, 0xc($a3)
/* 00472468 8C4D0004 */  lw    $t5, 4($v0)
/* 0047246C 8DB10000 */  lw    $s1, ($t5)
/* 00472470 8CEF000C */  lw    $t7, 0xc($a3)
.L00472474:
/* 00472474 8F8389D8 */  lw     $v1, %got(maxlabnam)($gp)
/* 00472478 022F02B6 */  tne   $s1, $t7, 0xa
/* 0047247C 8E380000 */  lw    $t8, ($s1)
/* 00472480 030002B6 */  tne   $t8, $zero, 0xa
/* 00472484 8C6C0000 */  lw    $t4, ($v1)
/* 00472488 24040174 */  li    $a0, 372
/* 0047248C 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00472490 258E0001 */  addiu $t6, $t4, 1
/* 00472494 AC6E0000 */  sw    $t6, ($v1)
/* 00472498 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0047249C AE2E0000 */  sw    $t6, ($s1)
/* 004724A0 AFAE00B8 */  sw    $t6, 0xb8($sp)
/* 004724A4 0320F809 */  jalr  $t9
/* 004724A8 00000000 */   nop   
/* 004724AC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004724B0 AFC20000 */  sw    $v0, ($fp)
/* 004724B4 00402025 */  move  $a0, $v0
/* 004724B8 8F9982C8 */  lw    $t9, %call16(init_graphnode)($gp)
/* 004724BC 0320F809 */  jalr  $t9
/* 004724C0 00000000 */   nop   
/* 004724C4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004724C8 8FC60000 */  lw    $a2, ($fp)
/* 004724CC 24190001 */  li    $t9, 1
/* 004724D0 8F8389B8 */  lw     $v1, %got(curstaticno)($gp)
/* 004724D4 240A0002 */  li    $t2, 2
/* 004724D8 A0D90006 */  sb    $t9, 6($a2)
/* 004724DC 8C620000 */  lw    $v0, ($v1)
/* 004724E0 A0CA0007 */  sb    $t2, 7($a2)
/* 004724E4 8F878C88 */  lw     $a3, %got(loopbodyend)($gp)
/* 004724E8 A4C20008 */  sh    $v0, 8($a2)
/* 004724EC 9229000A */  lbu   $t1, 0xa($s1)
/* 004724F0 244B0001 */  addiu $t3, $v0, 1
/* 004724F4 AC6B0000 */  sw    $t3, ($v1)
/* 004724F8 A0C9000A */  sb    $t1, 0xa($a2)
/* 004724FC 8E2D002C */  lw    $t5, 0x2c($s1)
/* 00472500 8F9985B0 */  lw    $t9, %call16(change_adj_node)($gp)
/* 00472504 02202825 */  move  $a1, $s1
/* 00472508 ACCD002C */  sw    $t5, 0x2c($a2)
/* 0047250C 8E2F0134 */  lw    $t7, 0x134($s1)
/* 00472510 ACCF0134 */  sw    $t7, 0x134($a2)
/* 00472514 8E3800E8 */  lw    $t8, 0xe8($s1)
/* 00472518 ACD800E8 */  sw    $t8, 0xe8($a2)
/* 0047251C 8CE70000 */  lw    $a3, ($a3)
/* 00472520 ACD1000C */  sw    $s1, 0xc($a2)
/* 00472524 ACC70010 */  sw    $a3, 0x10($a2)
/* 00472528 ACE6000C */  sw    $a2, 0xc($a3)
/* 0047252C 8E2C0014 */  lw    $t4, 0x14($s1)
/* 00472530 AE260010 */  sw    $a2, 0x10($s1)
/* 00472534 ACCC0014 */  sw    $t4, 0x14($a2)
/* 00472538 0320F809 */  jalr  $t9
/* 0047253C 8CE40018 */   lw    $a0, 0x18($a3)
/* 00472540 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472544 AE200014 */  sw    $zero, 0x14($s1)
/* 00472548 8FC40000 */  lw    $a0, ($fp)
/* 0047254C 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 00472550 02202825 */  move  $a1, $s1
/* 00472554 0320F809 */  jalr  $t9
/* 00472558 00000000 */   nop   
/* 0047255C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472560 24040060 */  li    $a0, 96
/* 00472564 8F8E8C88 */  lw     $t6, %got(loopbodyend)($gp)
/* 00472568 8F8189C4 */  lw     $at, %got(stattail)($gp)
/* 0047256C 8DCE0000 */  lw    $t6, ($t6)
/* 00472570 8DD90020 */  lw    $t9, 0x20($t6)
/* 00472574 AC390000 */  sw    $t9, ($at)
/* 00472578 AF200008 */  sw    $zero, 8($t9)
/* 0047257C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00472580 0320F809 */  jalr  $t9
/* 00472584 00000000 */   nop   
/* 00472588 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047258C 8FC40000 */  lw    $a0, ($fp)
/* 00472590 8F8A89C4 */  lw     $t2, %got(stattail)($gp)
/* 00472594 8D4A0000 */  lw    $t2, ($t2)
/* 00472598 AC8A0020 */  sw    $t2, 0x20($a0)
/* 0047259C 8F9982CC */  lw    $t9, %call16(init_node_vectors)($gp)
/* 004725A0 0320F809 */  jalr  $t9
/* 004725A4 00000000 */   nop   
/* 004725A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004725AC 24040042 */  li    $a0, 66
/* 004725B0 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 004725B4 0320F809 */  jalr  $t9
/* 004725B8 00000000 */   nop   
/* 004725BC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004725C0 8FAB00B8 */  lw    $t3, 0xb8($sp)
/* 004725C4 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 004725C8 8F8189C4 */  lw     $at, %got(stattail)($gp)
/* 004725CC 8F8E89C4 */  lw     $t6, %got(stattail)($gp)
/* 004725D0 8C630000 */  lw    $v1, ($v1)
/* 004725D4 8F848C90 */  lw     $a0, %got(i_var_size)($gp)
/* 004725D8 8F828970 */  lw     $v0, %got(tempdisp)($gp)
/* 004725DC A0600024 */  sb    $zero, 0x24($v1)
/* 004725E0 AC600018 */  sw    $zero, 0x18($v1)
/* 004725E4 AC6B0014 */  sw    $t3, 0x14($v1)
/* 004725E8 AC710010 */  sw    $s1, 0x10($v1)
/* 004725EC 8E29001C */  lw    $t1, 0x1c($s1)
/* 004725F0 AC690008 */  sw    $t1, 8($v1)
/* 004725F4 8E2D001C */  lw    $t5, 0x1c($s1)
/* 004725F8 ADA3000C */  sw    $v1, 0xc($t5)
/* 004725FC 8EAF0000 */  lw    $t7, ($s5)
/* 00472600 AE23001C */  sw    $v1, 0x1c($s1)
/* 00472604 8DF8001C */  lw    $t8, 0x1c($t7)
/* 00472608 8F0C000C */  lw    $t4, 0xc($t8)
/* 0047260C AC2C0000 */  sw    $t4, ($at)
/* 00472610 8DCE0000 */  lw    $t6, ($t6)
/* 00472614 ADC00008 */  sw    $zero, 8($t6)
/* 00472618 8C840000 */  lw    $a0, ($a0)
/* 0047261C 8C420000 */  lw    $v0, ($v0)
/* 00472620 0044001A */  div   $zero, $v0, $a0
/* 00472624 00002810 */  mfhi  $a1
/* 00472628 00A4C826 */  xor   $t9, $a1, $a0
/* 0047262C 14800002 */  bnez  $a0, .L00472638
/* 00472630 00000000 */   nop   
/* 00472634 0007000D */  break 7
.L00472638:
/* 00472638 2401FFFF */  li    $at, -1
/* 0047263C 14810004 */  bne   $a0, $at, .L00472650
/* 00472640 3C018000 */   lui   $at, 0x8000
/* 00472644 14410002 */  bne   $v0, $at, .L00472650
/* 00472648 00000000 */   nop   
/* 0047264C 0006000D */  break 6
.L00472650:
/* 00472650 07210002 */  bgez  $t9, .L0047265C
/* 00472654 00000000 */   nop   
/* 00472658 00A42821 */  addu  $a1, $a1, $a0
.L0047265C:
/* 0047265C 10A00005 */  beqz  $a1, .L00472674
/* 00472660 00000000 */   nop   
/* 00472664 8F818970 */  lw     $at, %got(tempdisp)($gp)
/* 00472668 00445021 */  addu  $t2, $v0, $a0
/* 0047266C 01451023 */  subu  $v0, $t2, $a1
/* 00472670 AC220000 */  sw    $v0, ($at)
.L00472674:
/* 00472674 8F898B48 */  lw     $t1, %got(stack_reversed)($gp)
/* 00472678 00446821 */  addu  $t5, $v0, $a0
/* 0047267C 91290000 */  lbu   $t1, ($t1)
/* 00472680 15200005 */  bnez  $t1, .L00472698
/* 00472684 00000000 */   nop   
/* 00472688 8F838970 */  lw     $v1, %got(tempdisp)($gp)
/* 0047268C 000D9023 */  negu  $s2, $t5
/* 00472690 10000005 */  b     .L004726A8
/* 00472694 AC6D0000 */   sw    $t5, ($v1)
.L00472698:
/* 00472698 8F818970 */  lw     $at, %got(tempdisp)($gp)
/* 0047269C 00447821 */  addu  $t7, $v0, $a0
/* 004726A0 00409025 */  move  $s2, $v0
/* 004726A4 AC2F0000 */  sw    $t7, ($at)
.L004726A8:
/* 004726A8 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 004726AC 24040001 */  li    $a0, 1
/* 004726B0 0320F809 */  jalr  $t9
/* 004726B4 00000000 */   nop   
/* 004726B8 8EB80000 */  lw    $t8, ($s5)
/* 004726BC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004726C0 8FD90000 */  lw    $t9, ($fp)
/* 004726C4 8F0C00E8 */  lw    $t4, 0xe8($t8)
/* 004726C8 8F818C80 */  lw     $at, %got(incr_amount)($gp)
/* 004726CC 27A500CC */  addiu $a1, $sp, 0xcc
/* 004726D0 8D8E0010 */  lw    $t6, 0x10($t4)
/* 004726D4 AF2E00E8 */  sw    $t6, 0xe8($t9)
/* 004726D8 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 004726DC 8FA400AC */  lw    $a0, 0xac($sp)
/* 004726E0 AC200000 */  sw    $zero, ($at)
/* 004726E4 0320F809 */  jalr  $t9
/* 004726E8 00000000 */   nop   
/* 004726EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004726F0 00408025 */  move  $s0, $v0
/* 004726F4 8FA400A8 */  lw    $a0, 0xa8($sp)
/* 004726F8 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 004726FC 27A500C8 */  addiu $a1, $sp, 0xc8
/* 00472700 0320F809 */  jalr  $t9
/* 00472704 00000000 */   nop   
/* 00472708 8E6A001C */  lw    $t2, 0x1c($s3)
/* 0047270C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472710 00403825 */  move  $a3, $v0
/* 00472714 19400020 */  blez  $t2, .L00472798
/* 00472718 00000000 */   nop   
/* 0047271C 8F9985B8 */  lw    $t9, %call16(form_bop)($gp)
/* 00472720 2404007D */  li    $a0, 125
/* 00472724 02002825 */  move  $a1, $s0
/* 00472728 0320F809 */  jalr  $t9
/* 0047272C 00403025 */   move  $a2, $v0
/* 00472730 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472734 8FAB00CC */  lw    $t3, 0xcc($sp)
/* 00472738 8FA900C8 */  lw    $t1, 0xc8($sp)
/* 0047273C 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 00472740 00402025 */  move  $a0, $v0
/* 00472744 01692823 */  subu  $a1, $t3, $t1
/* 00472748 0320F809 */  jalr  $t9
/* 0047274C 00000000 */   nop   
/* 00472750 8FAD00C4 */  lw    $t5, 0xc4($sp)
/* 00472754 8E6F001C */  lw    $t7, 0x1c($s3)
/* 00472758 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047275C 00402025 */  move  $a0, $v0
/* 00472760 01AF0019 */  multu $t5, $t7
/* 00472764 8F9985BC */  lw    $t9, %call16(form_rem)($gp)
/* 00472768 00002812 */  mflo  $a1
/* 0047276C 0320F809 */  jalr  $t9
/* 00472770 00000000 */   nop   
/* 00472774 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472778 02402025 */  move  $a0, $s2
/* 0047277C 00402825 */  move  $a1, $v0
/* 00472780 8F9985C8 */  lw    $t9, %call16(str_to_temporary)($gp)
/* 00472784 0320F809 */  jalr  $t9
/* 00472788 00000000 */   nop   
/* 0047278C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472790 10000025 */  b     .L00472828
/* 00472794 00408025 */   move  $s0, $v0
.L00472798:
/* 00472798 8F9985B8 */  lw    $t9, %call16(form_bop)($gp)
/* 0047279C 2404007D */  li    $a0, 125
/* 004727A0 00E02825 */  move  $a1, $a3
/* 004727A4 0320F809 */  jalr  $t9
/* 004727A8 02003025 */   move  $a2, $s0
/* 004727AC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004727B0 8FB800C8 */  lw    $t8, 0xc8($sp)
/* 004727B4 8FAC00CC */  lw    $t4, 0xcc($sp)
/* 004727B8 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 004727BC 00402025 */  move  $a0, $v0
/* 004727C0 030C2823 */  subu  $a1, $t8, $t4
/* 004727C4 0320F809 */  jalr  $t9
/* 004727C8 00000000 */   nop   
/* 004727CC 8E79001C */  lw    $t9, 0x1c($s3)
/* 004727D0 8FAE00C4 */  lw    $t6, 0xc4($sp)
/* 004727D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004727D8 00195023 */  negu  $t2, $t9
/* 004727DC 01CA0019 */  multu $t6, $t2
/* 004727E0 8F9985BC */  lw    $t9, %call16(form_rem)($gp)
/* 004727E4 00402025 */  move  $a0, $v0
/* 004727E8 00002812 */  mflo  $a1
/* 004727EC 0320F809 */  jalr  $t9
/* 004727F0 00000000 */   nop   
/* 004727F4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004727F8 00402025 */  move  $a0, $v0
/* 004727FC 8F9985C4 */  lw    $t9, %call16(form_neg)($gp)
/* 00472800 0320F809 */  jalr  $t9
/* 00472804 00000000 */   nop   
/* 00472808 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047280C 02402025 */  move  $a0, $s2
/* 00472810 00402825 */  move  $a1, $v0
/* 00472814 8F9985C8 */  lw    $t9, %call16(str_to_temporary)($gp)
/* 00472818 0320F809 */  jalr  $t9
/* 0047281C 00000000 */   nop   
/* 00472820 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472824 00408025 */  move  $s0, $v0
.L00472828:
/* 00472828 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 0047282C 24040026 */  li    $a0, 38
/* 00472830 0320F809 */  jalr  $t9
/* 00472834 00000000 */   nop   
/* 00472838 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047283C 02002025 */  move  $a0, $s0
/* 00472840 27A500CC */  addiu $a1, $sp, 0xcc
/* 00472844 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 00472848 0320F809 */  jalr  $t9
/* 0047284C 00000000 */   nop   
/* 00472850 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472854 00402025 */  move  $a0, $v0
/* 00472858 8F9985C0 */  lw    $t9, %call16(form_neq0)($gp)
/* 0047285C 0320F809 */  jalr  $t9
/* 00472860 00000000 */   nop   
/* 00472864 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472868 8FC60000 */  lw    $a2, ($fp)
/* 0047286C 8F8589D8 */  lw     $a1, %got(maxlabnam)($gp)
/* 00472870 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 00472874 AFA600C0 */  sw    $a2, 0xc0($sp)
/* 00472878 8CAB0000 */  lw    $t3, ($a1)
/* 0047287C 8C630000 */  lw    $v1, ($v1)
/* 00472880 25690001 */  addiu $t1, $t3, 1
/* 00472884 ACA90000 */  sw    $t1, ($a1)
/* 00472888 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 0047288C AC620004 */  sw    $v0, 4($v1)
/* 00472890 AC60001C */  sw    $zero, 0x1c($v1)
/* 00472894 AC690014 */  sw    $t1, 0x14($v1)
/* 00472898 AFA900B4 */  sw    $t1, 0xb4($sp)
/* 0047289C 0320F809 */  jalr  $t9
/* 004728A0 ACC30020 */   sw    $v1, 0x20($a2)
/* 004728A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004728A8 24040001 */  li    $a0, 1
/* 004728AC 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 004728B0 0320F809 */  jalr  $t9
/* 004728B4 00000000 */   nop   
/* 004728B8 8EAD0000 */  lw    $t5, ($s5)
/* 004728BC 8FCC0000 */  lw    $t4, ($fp)
/* 004728C0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004728C4 8DAF00E8 */  lw    $t7, 0xe8($t5)
/* 004728C8 02002025 */  move  $a0, $s0
/* 004728CC 27A500CC */  addiu $a1, $sp, 0xcc
/* 004728D0 8DF80010 */  lw    $t8, 0x10($t7)
/* 004728D4 AD9800E8 */  sw    $t8, 0xe8($t4)
/* 004728D8 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 004728DC 0320F809 */  jalr  $t9
/* 004728E0 00000000 */   nop   
/* 004728E4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004728E8 00408025 */  move  $s0, $v0
/* 004728EC 8FA400A8 */  lw    $a0, 0xa8($sp)
/* 004728F0 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 004728F4 27A500C8 */  addiu $a1, $sp, 0xc8
/* 004728F8 0320F809 */  jalr  $t9
/* 004728FC 00000000 */   nop   
/* 00472900 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472904 24040001 */  li    $a0, 1
/* 00472908 02002825 */  move  $a1, $s0
/* 0047290C 8F9985B8 */  lw    $t9, %call16(form_bop)($gp)
/* 00472910 00403025 */  move  $a2, $v0
/* 00472914 0320F809 */  jalr  $t9
/* 00472918 00000000 */   nop   
/* 0047291C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472920 02402025 */  move  $a0, $s2
/* 00472924 00402825 */  move  $a1, $v0
/* 00472928 8F9985C8 */  lw    $t9, %call16(str_to_temporary)($gp)
/* 0047292C 0320F809 */  jalr  $t9
/* 00472930 00000000 */   nop   
/* 00472934 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472938 8FCE0000 */  lw    $t6, ($fp)
/* 0047293C 00408025 */  move  $s0, $v0
/* 00472940 8F9989C4 */  lw     $t9, %got(stattail)($gp)
/* 00472944 8F390000 */  lw    $t9, ($t9)
/* 00472948 ADD90020 */  sw    $t9, 0x20($t6)
/* 0047294C 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 00472950 0320F809 */  jalr  $t9
/* 00472954 00000000 */   nop   
/* 00472958 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047295C 24040001 */  li    $a0, 1
/* 00472960 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 00472964 0320F809 */  jalr  $t9
/* 00472968 00000000 */   nop   
/* 0047296C 8EB20000 */  lw    $s2, ($s5)
/* 00472970 8FC60000 */  lw    $a2, ($fp)
/* 00472974 8FAE00C4 */  lw    $t6, 0xc4($sp)
/* 00472978 8E4A00E8 */  lw    $t2, 0xe8($s2)
/* 0047297C 90CC000B */  lbu   $t4, 0xb($a2)
/* 00472980 24180001 */  li    $t8, 1
/* 00472984 8D4B0010 */  lw    $t3, 0x10($t2)
/* 00472988 24010002 */  li    $at, 2
/* 0047298C 35990080 */  ori   $t9, $t4, 0x80
/* 00472990 ACCB00E8 */  sw    $t3, 0xe8($a2)
/* 00472994 9249000A */  lbu   $t1, 0xa($s2)
/* 00472998 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047299C AFA60088 */  sw    $a2, 0x88($sp)
/* 004729A0 A0C9000A */  sb    $t1, 0xa($a2)
/* 004729A4 8E4D002C */  lw    $t5, 0x2c($s2)
/* 004729A8 ACCD002C */  sw    $t5, 0x2c($a2)
/* 004729AC 8E4F0134 */  lw    $t7, 0x134($s2)
/* 004729B0 A0D80005 */  sb    $t8, 5($a2)
/* 004729B4 A0D9000B */  sb    $t9, 0xb($a2)
/* 004729B8 11C10012 */  beq   $t6, $at, .L00472A04
/* 004729BC ACCF0134 */   sw    $t7, 0x134($a2)
/* 004729C0 8F8389D8 */  lw     $v1, %got(maxlabnam)($gp)
/* 004729C4 24040042 */  li    $a0, 66
/* 004729C8 8C6A0000 */  lw    $t2, ($v1)
/* 004729CC 254B0001 */  addiu $t3, $t2, 1
/* 004729D0 AC6B0000 */  sw    $t3, ($v1)
/* 004729D4 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 004729D8 ACCB0000 */  sw    $t3, ($a2)
/* 004729DC AFAB00B0 */  sw    $t3, 0xb0($sp)
/* 004729E0 0320F809 */  jalr  $t9
/* 004729E4 00000000 */   nop   
/* 004729E8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004729EC 8FA900B0 */  lw    $t1, 0xb0($sp)
/* 004729F0 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 004729F4 8C630000 */  lw    $v1, ($v1)
/* 004729F8 A0600024 */  sb    $zero, 0x24($v1)
/* 004729FC AC600018 */  sw    $zero, 0x18($v1)
/* 00472A00 AC690014 */  sw    $t1, 0x14($v1)
.L00472A04:
/* 00472A04 8F998590 */  lw    $t9, %call16(new_set_of_labels)($gp)
/* 00472A08 0320F809 */  jalr  $t9
/* 00472A0C 00000000 */   nop   
/* 00472A10 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472A14 00002025 */  move  $a0, $zero
/* 00472A18 00002825 */  move  $a1, $zero
/* 00472A1C 8F99859C */  lw    $t9, %call16(pre_loopblock)($gp)
/* 00472A20 0320F809 */  jalr  $t9
/* 00472A24 00000000 */   nop   
/* 00472A28 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472A2C 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 00472A30 8F848C7C */  lw     $a0, %got(incr_stat)($gp)
/* 00472A34 0320F809 */  jalr  $t9
/* 00472A38 8C840000 */   lw    $a0, ($a0)
/* 00472A3C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472A40 00002025 */  move  $a0, $zero
/* 00472A44 24050001 */  li    $a1, 1
/* 00472A48 8F9985A0 */  lw    $t9, %call16(post_loopblock)($gp)
/* 00472A4C 00003025 */  move  $a2, $zero
/* 00472A50 0320F809 */  jalr  $t9
/* 00472A54 00000000 */   nop   
/* 00472A58 8FAD00C4 */  lw    $t5, 0xc4($sp)
/* 00472A5C 24010002 */  li    $at, 2
/* 00472A60 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472A64 11A10025 */  beq   $t5, $at, .L00472AFC
/* 00472A68 00000000 */   nop   
/* 00472A6C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00472A70 2404007F */  li    $a0, 127
/* 00472A74 0320F809 */  jalr  $t9
/* 00472A78 00000000 */   nop   
/* 00472A7C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472A80 02002025 */  move  $a0, $s0
/* 00472A84 27A500CC */  addiu $a1, $sp, 0xcc
/* 00472A88 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 00472A8C 0320F809 */  jalr  $t9
/* 00472A90 00000000 */   nop   
/* 00472A94 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472A98 00408025 */  move  $s0, $v0
/* 00472A9C 8FA400A8 */  lw    $a0, 0xa8($sp)
/* 00472AA0 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 00472AA4 27A500C8 */  addiu $a1, $sp, 0xc8
/* 00472AA8 0320F809 */  jalr  $t9
/* 00472AAC 00000000 */   nop   
/* 00472AB0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472AB4 2404005F */  li    $a0, 95
/* 00472AB8 02002825 */  move  $a1, $s0
/* 00472ABC 8F9985B8 */  lw    $t9, %call16(form_bop)($gp)
/* 00472AC0 00403025 */  move  $a2, $v0
/* 00472AC4 0320F809 */  jalr  $t9
/* 00472AC8 00000000 */   nop   
/* 00472ACC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472AD0 8FAF00B0 */  lw    $t7, 0xb0($sp)
/* 00472AD4 8FC40000 */  lw    $a0, ($fp)
/* 00472AD8 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 00472ADC 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 00472AE0 8FA50088 */  lw    $a1, 0x88($sp)
/* 00472AE4 8C630000 */  lw    $v1, ($v1)
/* 00472AE8 AC620004 */  sw    $v0, 4($v1)
/* 00472AEC AC60001C */  sw    $zero, 0x1c($v1)
/* 00472AF0 0320F809 */  jalr  $t9
/* 00472AF4 AC6F0014 */   sw    $t7, 0x14($v1)
/* 00472AF8 8FBC003C */  lw    $gp, 0x3c($sp)
.L00472AFC:
/* 00472AFC 8F9889C4 */  lw     $t8, %got(stattail)($gp)
/* 00472B00 8FCC0000 */  lw    $t4, ($fp)
/* 00472B04 8F180000 */  lw    $t8, ($t8)
/* 00472B08 AD980020 */  sw    $t8, 0x20($t4)
/* 00472B0C 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 00472B10 0320F809 */  jalr  $t9
/* 00472B14 00000000 */   nop   
/* 00472B18 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472B1C 24040001 */  li    $a0, 1
/* 00472B20 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 00472B24 0320F809 */  jalr  $t9
/* 00472B28 00000000 */   nop   
/* 00472B2C 8EB90000 */  lw    $t9, ($s5)
/* 00472B30 8FC60000 */  lw    $a2, ($fp)
/* 00472B34 24010026 */  li    $at, 38
/* 00472B38 8F2E00E8 */  lw    $t6, 0xe8($t9)
/* 00472B3C 90C9000B */  lbu   $t1, 0xb($a2)
/* 00472B40 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472B44 8DCA0010 */  lw    $t2, 0x10($t6)
/* 00472B48 312DFF7F */  andi  $t5, $t1, 0xff7f
/* 00472B4C ACCA00E8 */  sw    $t2, 0xe8($a2)
/* 00472B50 8E2B002C */  lw    $t3, 0x2c($s1)
/* 00472B54 A0CD000B */  sb    $t5, 0xb($a2)
/* 00472B58 ACCB002C */  sw    $t3, 0x2c($a2)
/* 00472B5C 926F0000 */  lbu   $t7, ($s3)
/* 00472B60 15E10007 */  bne   $t7, $at, .L00472B80
/* 00472B64 00000000 */   nop   
/* 00472B68 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00472B6C 2404007F */  li    $a0, 127
/* 00472B70 0320F809 */  jalr  $t9
/* 00472B74 00000000 */   nop   
/* 00472B78 10000006 */  b     .L00472B94
/* 00472B7C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00472B80:
/* 00472B80 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00472B84 24040026 */  li    $a0, 38
/* 00472B88 0320F809 */  jalr  $t9
/* 00472B8C 00000000 */   nop   
/* 00472B90 8FBC003C */  lw    $gp, 0x3c($sp)
.L00472B94:
/* 00472B94 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 00472B98 8E640004 */  lw    $a0, 4($s3)
/* 00472B9C 27A500CC */  addiu $a1, $sp, 0xcc
/* 00472BA0 0320F809 */  jalr  $t9
/* 00472BA4 00000000 */   nop   
/* 00472BA8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472BAC 00402025 */  move  $a0, $v0
/* 00472BB0 8F9889C4 */  lw     $t8, %got(stattail)($gp)
/* 00472BB4 8F180000 */  lw    $t8, ($t8)
/* 00472BB8 AF020004 */  sw    $v0, 4($t8)
/* 00472BBC 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 00472BC0 8FA500CC */  lw    $a1, 0xcc($sp)
/* 00472BC4 0320F809 */  jalr  $t9
/* 00472BC8 00000000 */   nop   
/* 00472BCC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472BD0 8FAC00B8 */  lw    $t4, 0xb8($sp)
/* 00472BD4 8FC40000 */  lw    $a0, ($fp)
/* 00472BD8 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 00472BDC 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 00472BE0 02202825 */  move  $a1, $s1
/* 00472BE4 8C630000 */  lw    $v1, ($v1)
/* 00472BE8 AC620004 */  sw    $v0, 4($v1)
/* 00472BEC AC60001C */  sw    $zero, 0x1c($v1)
/* 00472BF0 0320F809 */  jalr  $t9
/* 00472BF4 AC6C0014 */   sw    $t4, 0x14($v1)
/* 00472BF8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472BFC 8FCE0000 */  lw    $t6, ($fp)
/* 00472C00 8F9989C4 */  lw     $t9, %got(stattail)($gp)
/* 00472C04 8F390000 */  lw    $t9, ($t9)
/* 00472C08 ADD90020 */  sw    $t9, 0x20($t6)
/* 00472C0C 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 00472C10 0320F809 */  jalr  $t9
/* 00472C14 00000000 */   nop   
/* 00472C18 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472C1C 24040001 */  li    $a0, 1
/* 00472C20 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 00472C24 0320F809 */  jalr  $t9
/* 00472C28 00000000 */   nop   
/* 00472C2C 8EAA0000 */  lw    $t2, ($s5)
/* 00472C30 8FC60000 */  lw    $a2, ($fp)
/* 00472C34 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472C38 8D4B00E8 */  lw    $t3, 0xe8($t2)
/* 00472C3C 8FAD00B4 */  lw    $t5, 0xb4($sp)
/* 00472C40 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00472C44 8D690010 */  lw    $t1, 0x10($t3)
/* 00472C48 ACCD0000 */  sw    $t5, ($a2)
/* 00472C4C 24040042 */  li    $a0, 66
/* 00472C50 ACC900E8 */  sw    $t1, 0xe8($a2)
/* 00472C54 8E2F002C */  lw    $t7, 0x2c($s1)
/* 00472C58 0320F809 */  jalr  $t9
/* 00472C5C ACCF002C */   sw    $t7, 0x2c($a2)
/* 00472C60 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472C64 8FB800B4 */  lw    $t8, 0xb4($sp)
/* 00472C68 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 00472C6C 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 00472C70 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 00472C74 8FC50000 */  lw    $a1, ($fp)
/* 00472C78 8C630000 */  lw    $v1, ($v1)
/* 00472C7C A0600024 */  sb    $zero, 0x24($v1)
/* 00472C80 AC600018 */  sw    $zero, 0x18($v1)
/* 00472C84 0320F809 */  jalr  $t9
/* 00472C88 AC780014 */   sw    $t8, 0x14($v1)
/* 00472C8C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472C90 8FC40000 */  lw    $a0, ($fp)
/* 00472C94 8F8C89C4 */  lw     $t4, %got(stattail)($gp)
/* 00472C98 8D8C0000 */  lw    $t4, ($t4)
/* 00472C9C AC8C0020 */  sw    $t4, 0x20($a0)
/* 00472CA0 8F9982CC */  lw    $t9, %call16(init_node_vectors)($gp)
/* 00472CA4 0320F809 */  jalr  $t9
/* 00472CA8 00000000 */   nop   
/* 00472CAC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00472CB0:
/* 00472CB0 8F998588 */  lw    $t9, %call16(new_header_node)($gp)
/* 00472CB4 24040001 */  li    $a0, 1
/* 00472CB8 0320F809 */  jalr  $t9
/* 00472CBC 00000000 */   nop   
/* 00472CC0 8EB20000 */  lw    $s2, ($s5)
/* 00472CC4 8FC60000 */  lw    $a2, ($fp)
/* 00472CC8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472CCC 8E5900E8 */  lw    $t9, 0xe8($s2)
/* 00472CD0 24090002 */  li    $t1, 2
/* 00472CD4 24040042 */  li    $a0, 66
/* 00472CD8 ACD900E8 */  sw    $t9, 0xe8($a2)
/* 00472CDC 924E000A */  lbu   $t6, 0xa($s2)
/* 00472CE0 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00472CE4 AFA60088 */  sw    $a2, 0x88($sp)
/* 00472CE8 A0CE000A */  sb    $t6, 0xa($a2)
/* 00472CEC 8E4A002C */  lw    $t2, 0x2c($s2)
/* 00472CF0 ACCA002C */  sw    $t2, 0x2c($a2)
/* 00472CF4 8E4B0134 */  lw    $t3, 0x134($s2)
/* 00472CF8 A0C90005 */  sb    $t1, 5($a2)
/* 00472CFC 0320F809 */  jalr  $t9
/* 00472D00 ACCB0134 */   sw    $t3, 0x134($a2)
/* 00472D04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472D08 8EB20000 */  lw    $s2, ($s5)
/* 00472D0C 8FD90000 */  lw    $t9, ($fp)
/* 00472D10 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 00472D14 8E4D001C */  lw    $t5, 0x1c($s2)
/* 00472D18 8F828C94 */  lw     $v0, %got(looplab)($gp)
/* 00472D1C 8C630000 */  lw    $v1, ($v1)
/* 00472D20 91AF0024 */  lbu   $t7, 0x24($t5)
/* 00472D24 8F8E8A64 */  lw     $t6, %got(listwritten)($gp)
/* 00472D28 A06F0024 */  sb    $t7, 0x24($v1)
/* 00472D2C 8E58001C */  lw    $t8, 0x1c($s2)
/* 00472D30 8F0C0018 */  lw    $t4, 0x18($t8)
/* 00472D34 AC6C0018 */  sw    $t4, 0x18($v1)
/* 00472D38 8C420000 */  lw    $v0, ($v0)
/* 00472D3C AC620014 */  sw    $v0, 0x14($v1)
/* 00472D40 AF220000 */  sw    $v0, ($t9)
/* 00472D44 91CE0000 */  lbu   $t6, ($t6)
/* 00472D48 11C0002E */  beqz  $t6, .L00472E04
/* 00472D4C 00000000 */   nop   
/* 00472D50 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00472D54 8F858044 */  lw    $a1, %got(RO_1000DBB9)($gp)
/* 00472D58 8EC40000 */  lw    $a0, ($s6)
/* 00472D5C 24060010 */  li    $a2, 16
/* 00472D60 24070010 */  li    $a3, 16
/* 00472D64 0320F809 */  jalr  $t9
/* 00472D68 24A5DBB9 */   addiu $a1, %lo(RO_1000DBB9) # addiu $a1, $a1, -0x2447
/* 00472D6C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472D70 8EAA0000 */  lw    $t2, ($s5)
/* 00472D74 8EC40000 */  lw    $a0, ($s6)
/* 00472D78 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00472D7C 2406000C */  li    $a2, 12
/* 00472D80 2407000A */  li    $a3, 10
/* 00472D84 0320F809 */  jalr  $t9
/* 00472D88 95450008 */   lhu   $a1, 8($t2)
/* 00472D8C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472D90 8EC40000 */  lw    $a0, ($s6)
/* 00472D94 8FA500C4 */  lw    $a1, 0xc4($sp)
/* 00472D98 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00472D9C 2406000C */  li    $a2, 12
/* 00472DA0 2407000A */  li    $a3, 10
/* 00472DA4 0320F809 */  jalr  $t9
/* 00472DA8 00000000 */   nop   
/* 00472DAC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472DB0 8EC40000 */  lw    $a0, ($s6)
/* 00472DB4 2406000D */  li    $a2, 13
/* 00472DB8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00472DBC 8F858044 */  lw    $a1, %got(RO_1000DBAC)($gp)
/* 00472DC0 2407000D */  li    $a3, 13
/* 00472DC4 0320F809 */  jalr  $t9
/* 00472DC8 24A5DBAC */   addiu $a1, %lo(RO_1000DBAC) # addiu $a1, $a1, -0x2454
/* 00472DCC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472DD0 8FCB0000 */  lw    $t3, ($fp)
/* 00472DD4 8EC40000 */  lw    $a0, ($s6)
/* 00472DD8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00472DDC 2406000C */  li    $a2, 12
/* 00472DE0 2407000A */  li    $a3, 10
/* 00472DE4 0320F809 */  jalr  $t9
/* 00472DE8 95650008 */   lhu   $a1, 8($t3)
/* 00472DEC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472DF0 8EC40000 */  lw    $a0, ($s6)
/* 00472DF4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00472DF8 0320F809 */  jalr  $t9
/* 00472DFC 00000000 */   nop   
/* 00472E00 8FBC003C */  lw    $gp, 0x3c($sp)
.L00472E04:
/* 00472E04 8F998590 */  lw    $t9, %call16(new_set_of_labels)($gp)
/* 00472E08 0320F809 */  jalr  $t9
/* 00472E0C 00000000 */   nop   
/* 00472E10 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472E14 24040001 */  li    $a0, 1
/* 00472E18 24050001 */  li    $a1, 1
/* 00472E1C 8F99859C */  lw    $t9, %call16(pre_loopblock)($gp)
/* 00472E20 8F818C80 */  lw     $at, %got(incr_amount)($gp)
/* 00472E24 0320F809 */  jalr  $t9
/* 00472E28 AC200000 */   sw    $zero, ($at)
/* 00472E2C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472E30 8E69001C */  lw    $t1, 0x1c($s3)
/* 00472E34 24040001 */  li    $a0, 1
/* 00472E38 8F9985A0 */  lw    $t9, %call16(post_loopblock)($gp)
/* 00472E3C 8F818C80 */  lw     $at, %got(incr_amount)($gp)
/* 00472E40 24050001 */  li    $a1, 1
/* 00472E44 24060001 */  li    $a2, 1
/* 00472E48 0320F809 */  jalr  $t9
/* 00472E4C AC290000 */   sw    $t1, ($at)
/* 00472E50 8FA200C4 */  lw    $v0, 0xc4($sp)
/* 00472E54 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472E58 2442FFFF */  addiu $v0, $v0, -1
/* 00472E5C 28410002 */  slti  $at, $v0, 2
/* 00472E60 1420001B */  bnez  $at, .L00472ED0
/* 00472E64 00000000 */   nop   
/* 00472E68 24100002 */  li    $s0, 2
/* 00472E6C 24520001 */  addiu $s2, $v0, 1
.L00472E70:
/* 00472E70 8F998590 */  lw    $t9, %call16(new_set_of_labels)($gp)
/* 00472E74 0320F809 */  jalr  $t9
/* 00472E78 00000000 */   nop   
/* 00472E7C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472E80 00002025 */  move  $a0, $zero
/* 00472E84 24050001 */  li    $a1, 1
/* 00472E88 8F99859C */  lw    $t9, %call16(pre_loopblock)($gp)
/* 00472E8C 0320F809 */  jalr  $t9
/* 00472E90 00000000 */   nop   
/* 00472E94 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472E98 8E6F001C */  lw    $t7, 0x1c($s3)
/* 00472E9C 00002025 */  move  $a0, $zero
/* 00472EA0 8F8D8C80 */  lw     $t5, %got(incr_amount)($gp)
/* 00472EA4 8F9985A0 */  lw    $t9, %call16(post_loopblock)($gp)
/* 00472EA8 8F818C80 */  lw     $at, %got(incr_amount)($gp)
/* 00472EAC 8DAD0000 */  lw    $t5, ($t5)
/* 00472EB0 24050001 */  li    $a1, 1
/* 00472EB4 24060001 */  li    $a2, 1
/* 00472EB8 01AFC021 */  addu  $t8, $t5, $t7
/* 00472EBC 0320F809 */  jalr  $t9
/* 00472EC0 AC380000 */   sw    $t8, ($at)
/* 00472EC4 26100001 */  addiu $s0, $s0, 1
/* 00472EC8 1612FFE9 */  bne   $s0, $s2, .L00472E70
/* 00472ECC 8FBC003C */   lw    $gp, 0x3c($sp)
.L00472ED0:
/* 00472ED0 8F998590 */  lw    $t9, %call16(new_set_of_labels)($gp)
/* 00472ED4 0320F809 */  jalr  $t9
/* 00472ED8 00000000 */   nop   
/* 00472EDC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472EE0 00002025 */  move  $a0, $zero
/* 00472EE4 24050001 */  li    $a1, 1
/* 00472EE8 8F99859C */  lw    $t9, %call16(pre_loopblock)($gp)
/* 00472EEC 0320F809 */  jalr  $t9
/* 00472EF0 00000000 */   nop   
/* 00472EF4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472EF8 8F998580 */  lw    $t9, %call16(oneloopblockstmt)($gp)
/* 00472EFC 8F848C7C */  lw     $a0, %got(incr_stat)($gp)
/* 00472F00 0320F809 */  jalr  $t9
/* 00472F04 8C840000 */   lw    $a0, ($a0)
/* 00472F08 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472F0C 00002025 */  move  $a0, $zero
/* 00472F10 24050001 */  li    $a1, 1
/* 00472F14 8F9985A0 */  lw    $t9, %call16(post_loopblock)($gp)
/* 00472F18 8F818C80 */  lw     $at, %got(incr_amount)($gp)
/* 00472F1C 24060001 */  li    $a2, 1
/* 00472F20 0320F809 */  jalr  $t9
/* 00472F24 AC200000 */   sw    $zero, ($at)
/* 00472F28 926C0027 */  lbu   $t4, 0x27($s3)
/* 00472F2C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472F30 8FB900EC */  lw    $t9, 0xec($sp)
/* 00472F34 11800017 */  beqz  $t4, .L00472F94
/* 00472F38 00000000 */   nop   
/* 00472F3C 8F2E0028 */  lw    $t6, 0x28($t9)
/* 00472F40 8E6B0020 */  lw    $t3, 0x20($s3)
/* 00472F44 8E6F001C */  lw    $t7, 0x1c($s3)
/* 00472F48 8DCA0020 */  lw    $t2, 0x20($t6)
/* 00472F4C 8D690020 */  lw    $t1, 0x20($t3)
/* 00472F50 8FAC00C4 */  lw    $t4, 0xc4($sp)
/* 00472F54 01496823 */  subu  $t5, $t2, $t1
/* 00472F58 01AF001A */  div   $zero, $t5, $t7
/* 00472F5C 15E00002 */  bnez  $t7, .L00472F68
/* 00472F60 00000000 */   nop   
/* 00472F64 0007000D */  break 7
.L00472F68:
/* 00472F68 2401FFFF */  li    $at, -1
/* 00472F6C 15E10004 */  bne   $t7, $at, .L00472F80
/* 00472F70 3C018000 */   lui   $at, 0x8000
/* 00472F74 15A10002 */  bne   $t5, $at, .L00472F80
/* 00472F78 00000000 */   nop   
/* 00472F7C 0006000D */  break 6
.L00472F80:
/* 00472F80 0000C012 */  mflo  $t8
/* 00472F84 000CC840 */  sll   $t9, $t4, 1
/* 00472F88 0319082A */  slt   $at, $t8, $t9
/* 00472F8C 1420000D */  bnez  $at, .L00472FC4
/* 00472F90 00000000 */   nop   
.L00472F94:
/* 00472F94 8F9985A4 */  lw    $t9, %call16(termination_test)($gp)
/* 00472F98 02602025 */  move  $a0, $s3
/* 00472F9C 8FA500C4 */  lw    $a1, 0xc4($sp)
/* 00472FA0 0320F809 */  jalr  $t9
/* 00472FA4 00000000 */   nop   
/* 00472FA8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00472FAC 8FC40000 */  lw    $a0, ($fp)
/* 00472FB0 8FA50088 */  lw    $a1, 0x88($sp)
/* 00472FB4 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 00472FB8 0320F809 */  jalr  $t9
/* 00472FBC 00000000 */   nop   
/* 00472FC0 8FBC003C */  lw    $gp, 0x3c($sp)
.L00472FC4:
/* 00472FC4 8F8E8C88 */  lw     $t6, %got(loopbodyend)($gp)
/* 00472FC8 8EAB0000 */  lw    $t3, ($s5)
/* 00472FCC 8DCE0000 */  lw    $t6, ($t6)
/* 00472FD0 8DC20018 */  lw    $v0, 0x18($t6)
/* 00472FD4 8C510000 */  lw    $s1, ($v0)
/* 00472FD8 162B0003 */  bne   $s1, $t3, .L00472FE8
/* 00472FDC 00000000 */   nop   
/* 00472FE0 8C4A0004 */  lw    $t2, 4($v0)
/* 00472FE4 8D510000 */  lw    $s1, ($t2)
.L00472FE8:
/* 00472FE8 8F998584 */  lw    $t9, %call16(create_edge)($gp)
/* 00472FEC 8FC40000 */  lw    $a0, ($fp)
/* 00472FF0 02202825 */  move  $a1, $s1
/* 00472FF4 0320F809 */  jalr  $t9
/* 00472FF8 00000000 */   nop   
/* 00472FFC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00473000 8FCD0000 */  lw    $t5, ($fp)
/* 00473004 8F8989C4 */  lw     $t1, %got(stattail)($gp)
/* 00473008 8D290000 */  lw    $t1, ($t1)
/* 0047300C ADA90020 */  sw    $t1, 0x20($t5)
/* 00473010 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 00473014 0320F809 */  jalr  $t9
/* 00473018 00000000 */   nop   
/* 0047301C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00473020 8F8F8C88 */  lw     $t7, %got(loopbodyend)($gp)
/* 00473024 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 00473028 8F8189C4 */  lw     $at, %got(stattail)($gp)
/* 0047302C 8DEF0000 */  lw    $t7, ($t7)
/* 00473030 8C630000 */  lw    $v1, ($v1)
/* 00473034 8DEC0020 */  lw    $t4, 0x20($t7)
/* 00473038 8D980008 */  lw    $t8, 8($t4)
/* 0047303C AC780008 */  sw    $t8, 8($v1)
/* 00473040 AF03000C */  sw    $v1, 0xc($t8)
/* 00473044 8FAE00DC */  lw    $t6, 0xdc($sp)
/* 00473048 AC2E0000 */  sw    $t6, ($at)
/* 0047304C 8EAB0000 */  lw    $t3, ($s5)
/* 00473050 8D73001C */  lw    $s3, 0x1c($t3)
/* 00473054 92620000 */  lbu   $v0, ($s3)
.L00473058:
/* 00473058 244AFFE0 */  addiu $t2, $v0, -0x20
/* 0047305C 2D490060 */  sltiu $t1, $t2, 0x60
/* 00473060 11200009 */  beqz  $t1, .L00473088
/* 00473064 00000000 */   nop   
/* 00473068 8F8C8044 */  lw    $t4, %got(D_10011100)($gp)
/* 0047306C 000A6943 */  sra   $t5, $t2, 5
/* 00473070 000D7880 */  sll   $t7, $t5, 2
/* 00473074 258C1100 */  addiu $t4, %lo(D_10011100) # addiu $t4, $t4, 0x1100
/* 00473078 018FC021 */  addu  $t8, $t4, $t7
/* 0047307C 8F190000 */  lw    $t9, ($t8)
/* 00473080 01597004 */  sllv  $t6, $t9, $t2
/* 00473084 29C90000 */  slti  $t1, $t6, 0
.L00473088:
/* 00473088 1120000F */  beqz  $t1, .L004730C8
/* 0047308C 2C4F00A0 */   sltiu $t7, $v0, 0xa0
/* 00473090 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00473094 8E6D0004 */  lw    $t5, 4($s3)
/* 00473098 0320F809 */  jalr  $t9
/* 0047309C 8DA40034 */   lw    $a0, 0x34($t5)
/* 004730A0 926C0000 */  lbu   $t4, ($s3)
/* 004730A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004730A8 16EC002C */  bne   $s7, $t4, .L0047315C
/* 004730AC 00000000 */   nop   
/* 004730B0 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 004730B4 8E640014 */  lw    $a0, 0x14($s3)
/* 004730B8 0320F809 */  jalr  $t9
/* 004730BC 00000000 */   nop   
/* 004730C0 10000026 */  b     .L0047315C
/* 004730C4 8FBC003C */   lw    $gp, 0x3c($sp)
.L004730C8:
/* 004730C8 11E00009 */  beqz  $t7, .L004730F0
/* 004730CC 00000000 */   nop   
/* 004730D0 8F8A8044 */  lw    $t2, %got(D_100110C8)($gp)
/* 004730D4 0002C143 */  sra   $t8, $v0, 5
/* 004730D8 0018C880 */  sll   $t9, $t8, 2
/* 004730DC 254A10C8 */  addiu $t2, %lo(D_100110C8) # addiu $t2, $t2, 0x10c8
/* 004730E0 01597021 */  addu  $t6, $t2, $t9
/* 004730E4 8DCB0000 */  lw    $t3, ($t6)
/* 004730E8 004B4804 */  sllv  $t1, $t3, $v0
/* 004730EC 292F0000 */  slti  $t7, $t1, 0
.L004730F0:
/* 004730F0 15E0001A */  bnez  $t7, .L0047315C
/* 004730F4 00000000 */   nop   
/* 004730F8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 004730FC 8E640004 */  lw    $a0, 4($s3)
/* 00473100 0320F809 */  jalr  $t9
/* 00473104 00000000 */   nop   
/* 00473108 926C0000 */  lbu   $t4, ($s3)
/* 0047310C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00473110 2598FFE0 */  addiu $t8, $t4, -0x20
/* 00473114 2F0A0080 */  sltiu $t2, $t8, 0x80
/* 00473118 11400009 */  beqz  $t2, .L00473140
/* 0047311C 00000000 */   nop   
/* 00473120 8F8B8044 */  lw    $t3, %got(D_100110F0)($gp)
/* 00473124 0018C943 */  sra   $t9, $t8, 5
/* 00473128 00197080 */  sll   $t6, $t9, 2
/* 0047312C 256B10F0 */  addiu $t3, %lo(D_100110F0) # addiu $t3, $t3, 0x10f0
/* 00473130 016E4821 */  addu  $t1, $t3, $t6
/* 00473134 8D2D0000 */  lw    $t5, ($t1)
/* 00473138 030D7804 */  sllv  $t7, $t5, $t8
/* 0047313C 29EA0000 */  slti  $t2, $t7, 0
.L00473140:
/* 00473140 11400006 */  beqz  $t2, .L0047315C
/* 00473144 00000000 */   nop   
/* 00473148 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047314C 8E640014 */  lw    $a0, 0x14($s3)
/* 00473150 0320F809 */  jalr  $t9
/* 00473154 00000000 */   nop   
/* 00473158 8FBC003C */  lw    $gp, 0x3c($sp)
.L0047315C:
/* 0047315C 8F998C88 */  lw     $t9, %got(loopbodyend)($gp)
/* 00473160 8E730008 */  lw    $s3, 8($s3)
/* 00473164 8F390000 */  lw    $t9, ($t9)
/* 00473168 8F2B0020 */  lw    $t3, 0x20($t9)
/* 0047316C 566BFFBA */  bnel  $s3, $t3, .L00473058
/* 00473170 92620000 */   lbu   $v0, ($s3)
/* 00473174 8EB10000 */  lw    $s1, ($s5)
/* 00473178 8FAE0088 */  lw    $t6, 0x88($sp)
/* 0047317C 8E2900E8 */  lw    $t1, 0xe8($s1)
/* 00473180 AD2E0008 */  sw    $t6, 8($t1)
/* 00473184 8E300014 */  lw    $s0, 0x14($s1)
.L00473188:
/* 00473188 5200000E */  beql  $s0, $zero, .L004731C4
/* 0047318C 8E300018 */   lw    $s0, 0x18($s1)
/* 00473190 8E020000 */  lw    $v0, ($s0)
.L00473194:
/* 00473194 52220008 */  beql  $s1, $v0, .L004731B8
/* 00473198 8E100004 */   lw    $s0, 4($s0)
/* 0047319C 8F9985B4 */  lw    $t9, %call16(del_adj_node)($gp)
/* 004731A0 24440018 */  addiu $a0, $v0, 0x18
/* 004731A4 02202825 */  move  $a1, $s1
/* 004731A8 0320F809 */  jalr  $t9
/* 004731AC 00000000 */   nop   
/* 004731B0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004731B4 8E100004 */  lw    $s0, 4($s0)
.L004731B8:
/* 004731B8 5600FFF6 */  bnezl $s0, .L00473194
/* 004731BC 8E020000 */   lw    $v0, ($s0)
/* 004731C0 8E300018 */  lw    $s0, 0x18($s1)
.L004731C4:
/* 004731C4 5200000E */  beql  $s0, $zero, .L00473200
/* 004731C8 8E2D000C */   lw    $t5, 0xc($s1)
/* 004731CC 8E020000 */  lw    $v0, ($s0)
.L004731D0:
/* 004731D0 52220008 */  beql  $s1, $v0, .L004731F4
/* 004731D4 8E100004 */   lw    $s0, 4($s0)
/* 004731D8 8F9985B4 */  lw    $t9, %call16(del_adj_node)($gp)
/* 004731DC 24440014 */  addiu $a0, $v0, 0x14
/* 004731E0 02202825 */  move  $a1, $s1
/* 004731E4 0320F809 */  jalr  $t9
/* 004731E8 00000000 */   nop   
/* 004731EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004731F0 8E100004 */  lw    $s0, 4($s0)
.L004731F4:
/* 004731F4 5600FFF6 */  bnezl $s0, .L004731D0
/* 004731F8 8E020000 */   lw    $v0, ($s0)
/* 004731FC 8E2D000C */  lw    $t5, 0xc($s1)
.L00473200:
/* 00473200 8E380010 */  lw    $t8, 0x10($s1)
/* 00473204 8F8F89B0 */  lw     $t7, %got(graphtail)($gp)
/* 00473208 8F878C88 */  lw     $a3, %got(loopbodyend)($gp)
/* 0047320C AF0D000C */  sw    $t5, 0xc($t8)
/* 00473210 8DEF0000 */  lw    $t7, ($t7)
/* 00473214 8CE70000 */  lw    $a3, ($a3)
/* 00473218 562F0006 */  bnel  $s1, $t7, .L00473234
/* 0047321C 8E2A0010 */   lw    $t2, 0x10($s1)
/* 00473220 8E2C0010 */  lw    $t4, 0x10($s1)
/* 00473224 8F8189B0 */  lw     $at, %got(graphtail)($gp)
/* 00473228 10000004 */  b     .L0047323C
/* 0047322C AC2C0000 */   sw    $t4, ($at)
/* 00473230 8E2A0010 */  lw    $t2, 0x10($s1)
.L00473234:
/* 00473234 8E39000C */  lw    $t9, 0xc($s1)
/* 00473238 AF2A0010 */  sw    $t2, 0x10($t9)
.L0047323C:
/* 0047323C 56270004 */  bnel  $s1, $a3, .L00473250
/* 00473240 8E2B0020 */   lw    $t3, 0x20($s1)
/* 00473244 1000000A */  b     .L00473270
/* 00473248 24140001 */   li    $s4, 1
/* 0047324C 8E2B0020 */  lw    $t3, 0x20($s1)
.L00473250:
/* 00473250 8D730008 */  lw    $s3, 8($t3)
/* 00473254 8E620010 */  lw    $v0, 0x10($s3)
/* 00473258 52220004 */  beql  $s1, $v0, .L0047326C
/* 0047325C 8E6E0008 */   lw    $t6, 8($s3)
/* 00473260 10000003 */  b     .L00473270
/* 00473264 00408825 */   move  $s1, $v0
/* 00473268 8E6E0008 */  lw    $t6, 8($s3)
.L0047326C:
/* 0047326C 8DD10010 */  lw    $s1, 0x10($t6)
.L00473270:
/* 00473270 5280FFC5 */  beql  $s4, $zero, .L00473188
/* 00473274 8E300014 */   lw    $s0, 0x14($s1)
.L00473278:
/* 00473278 8EA90000 */  lw    $t1, ($s5)
.L0047327C:
/* 0047327C 8D2D000C */  lw    $t5, 0xc($t1)
/* 00473280 AEAD0000 */  sw    $t5, ($s5)
.L00473284:
/* 00473284 8EB20000 */  lw    $s2, ($s5)
/* 00473288 5640FB20 */  bnezl $s2, .L00471F0C
/* 0047328C 92580005 */   lbu   $t8, 5($s2)
.L00473290:
/* 00473290 8F988A94 */  lw     $t8, %got(dbugno)($gp)
/* 00473294 8F968CCC */  lw     $s6, %got(list)($gp)
/* 00473298 8F180000 */  lw    $t8, ($t8)
/* 0047329C 5300008E */  beql  $t8, $zero, .L004734D8
/* 004732A0 8FBF0044 */   lw    $ra, 0x44($sp)
/* 004732A4 8F8F8DE8 */  lw     $t7, %got(proc_to_print)($gp)
/* 004732A8 24010020 */  li    $at, 32
/* 004732AC 91EF0000 */  lbu   $t7, ($t7)
/* 004732B0 11E10005 */  beq   $t7, $at, .L004732C8
/* 004732B4 00000000 */   nop   
/* 004732B8 8F8C8A8C */  lw     $t4, %got(at_proc_to_print)($gp)
/* 004732BC 918C0000 */  lbu   $t4, ($t4)
/* 004732C0 51800085 */  beql  $t4, $zero, .L004734D8
/* 004732C4 8FBF0044 */   lw    $ra, 0x44($sp)
.L004732C8:
/* 004732C8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004732CC 8F858044 */  lw    $a1, %got(RO_1000DB9A)($gp)
/* 004732D0 8EC40000 */  lw    $a0, ($s6)
/* 004732D4 24060012 */  li    $a2, 18
/* 004732D8 24070012 */  li    $a3, 18
/* 004732DC 0320F809 */  jalr  $t9
/* 004732E0 24A5DB9A */   addiu $a1, %lo(RO_1000DB9A) # addiu $a1, $a1, -0x2466
/* 004732E4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004732E8 8EC40000 */  lw    $a0, ($s6)
/* 004732EC 24060400 */  li    $a2, 1024
/* 004732F0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004732F4 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 004732F8 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 004732FC 0320F809 */  jalr  $t9
/* 00473300 8CE70000 */   lw    $a3, ($a3)
/* 00473304 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00473308 8ED00000 */  lw    $s0, ($s6)
/* 0047330C 2405003A */  li    $a1, 58
/* 00473310 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00473314 24060001 */  li    $a2, 1
/* 00473318 2407000A */  li    $a3, 10
/* 0047331C 0320F809 */  jalr  $t9
/* 00473320 02002025 */   move  $a0, $s0
/* 00473324 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00473328 02002025 */  move  $a0, $s0
/* 0047332C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00473330 0320F809 */  jalr  $t9
/* 00473334 00000000 */   nop   
/* 00473338 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047333C 8F8A89AC */  lw     $t2, %got(graphhead)($gp)
/* 00473340 8D520000 */  lw    $s2, ($t2)
/* 00473344 12400063 */  beqz  $s2, .L004734D4
/* 00473348 AEB20000 */   sw    $s2, ($s5)
.L0047334C:
/* 0047334C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00473350 8EC40000 */  lw    $a0, ($s6)
/* 00473354 96450008 */  lhu   $a1, 8($s2)
/* 00473358 2406000C */  li    $a2, 12
/* 0047335C 0320F809 */  jalr  $t9
/* 00473360 2407000A */   li    $a3, 10
/* 00473364 8EB90000 */  lw    $t9, ($s5)
/* 00473368 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047336C 8EC40000 */  lw    $a0, ($s6)
/* 00473370 8F250000 */  lw    $a1, ($t9)
/* 00473374 8F998878 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00473378 2406000C */  li    $a2, 12
/* 0047337C 2407000A */  li    $a3, 10
/* 00473380 0320F809 */  jalr  $t9
/* 00473384 00000000 */   nop   
/* 00473388 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0047338C 8EC40000 */  lw    $a0, ($s6)
/* 00473390 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00473394 0320F809 */  jalr  $t9
/* 00473398 00000000 */   nop   
/* 0047339C 8EB20000 */  lw    $s2, ($s5)
/* 004733A0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004733A4 8E500014 */  lw    $s0, 0x14($s2)
/* 004733A8 52000023 */  beql  $s0, $zero, .L00473438
/* 004733AC 8E500018 */   lw    $s0, 0x18($s2)
.L004733B0:
/* 004733B0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004733B4 8F858044 */  lw    $a1, %got(RO_1000DB93)($gp)
/* 004733B8 8EC40000 */  lw    $a0, ($s6)
/* 004733BC 24060007 */  li    $a2, 7
/* 004733C0 24070007 */  li    $a3, 7
/* 004733C4 0320F809 */  jalr  $t9
/* 004733C8 24A5DB93 */   addiu $a1, %lo(RO_1000DB93) # addiu $a1, $a1, -0x246d
/* 004733CC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004733D0 8E0B0000 */  lw    $t3, ($s0)
/* 004733D4 8EC40000 */  lw    $a0, ($s6)
/* 004733D8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 004733DC 2406000C */  li    $a2, 12
/* 004733E0 2407000A */  li    $a3, 10
/* 004733E4 0320F809 */  jalr  $t9
/* 004733E8 95650008 */   lhu   $a1, 8($t3)
/* 004733EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004733F0 8E0E0000 */  lw    $t6, ($s0)
/* 004733F4 8EC40000 */  lw    $a0, ($s6)
/* 004733F8 8F998878 */  lw    $t9, %call16(write_cardinal)($gp)
/* 004733FC 2406000C */  li    $a2, 12
/* 00473400 2407000A */  li    $a3, 10
/* 00473404 0320F809 */  jalr  $t9
/* 00473408 8DC50000 */   lw    $a1, ($t6)
/* 0047340C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00473410 8EC40000 */  lw    $a0, ($s6)
/* 00473414 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00473418 0320F809 */  jalr  $t9
/* 0047341C 00000000 */   nop   
/* 00473420 8E100004 */  lw    $s0, 4($s0)
/* 00473424 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00473428 1600FFE1 */  bnez  $s0, .L004733B0
/* 0047342C 00000000 */   nop   
/* 00473430 8EB20000 */  lw    $s2, ($s5)
/* 00473434 8E500018 */  lw    $s0, 0x18($s2)
.L00473438:
/* 00473438 52000023 */  beql  $s0, $zero, .L004734C8
/* 0047343C 8E58000C */   lw    $t8, 0xc($s2)
.L00473440:
/* 00473440 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00473444 8F858044 */  lw    $a1, %got(RO_1000DB8C)($gp)
/* 00473448 8EC40000 */  lw    $a0, ($s6)
/* 0047344C 24060007 */  li    $a2, 7
/* 00473450 24070007 */  li    $a3, 7
/* 00473454 0320F809 */  jalr  $t9
/* 00473458 24A5DB8C */   addiu $a1, %lo(RO_1000DB8C) # addiu $a1, $a1, -0x2474
/* 0047345C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00473460 8E090000 */  lw    $t1, ($s0)
/* 00473464 8EC40000 */  lw    $a0, ($s6)
/* 00473468 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0047346C 2406000C */  li    $a2, 12
/* 00473470 2407000A */  li    $a3, 10
/* 00473474 0320F809 */  jalr  $t9
/* 00473478 95250008 */   lhu   $a1, 8($t1)
/* 0047347C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00473480 8E0D0000 */  lw    $t5, ($s0)
/* 00473484 8EC40000 */  lw    $a0, ($s6)
/* 00473488 8F998878 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0047348C 2406000C */  li    $a2, 12
/* 00473490 2407000A */  li    $a3, 10
/* 00473494 0320F809 */  jalr  $t9
/* 00473498 8DA50000 */   lw    $a1, ($t5)
/* 0047349C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004734A0 8EC40000 */  lw    $a0, ($s6)
/* 004734A4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004734A8 0320F809 */  jalr  $t9
/* 004734AC 00000000 */   nop   
/* 004734B0 8E100004 */  lw    $s0, 4($s0)
/* 004734B4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004734B8 1600FFE1 */  bnez  $s0, .L00473440
/* 004734BC 00000000 */   nop   
/* 004734C0 8EB20000 */  lw    $s2, ($s5)
/* 004734C4 8E58000C */  lw    $t8, 0xc($s2)
.L004734C8:
/* 004734C8 AEB80000 */  sw    $t8, ($s5)
/* 004734CC 1700FF9F */  bnez  $t8, .L0047334C
/* 004734D0 03009025 */   move  $s2, $t8
.L004734D4:
/* 004734D4 8FBF0044 */  lw    $ra, 0x44($sp)
.L004734D8:
/* 004734D8 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004734DC 8FB10020 */  lw    $s1, 0x20($sp)
/* 004734E0 8FB20024 */  lw    $s2, 0x24($sp)
/* 004734E4 8FB30028 */  lw    $s3, 0x28($sp)
/* 004734E8 8FB4002C */  lw    $s4, 0x2c($sp)
/* 004734EC 8FB50030 */  lw    $s5, 0x30($sp)
/* 004734F0 8FB60034 */  lw    $s6, 0x34($sp)
/* 004734F4 8FB70038 */  lw    $s7, 0x38($sp)
/* 004734F8 8FBE0040 */  lw    $fp, 0x40($sp)
/* 004734FC 03E00008 */  jr    $ra
/* 00473500 27BD00F0 */   addiu $sp, $sp, 0xf0
    .type loopunroll, @function
    .size loopunroll, .-loopunroll
    .end loopunroll

    .type func_00473504, @function
func_00473504:
    # 004737E0 par_to_str
/* 00473504 3C1C0FBA */  .cpload $t9
/* 00473508 279C6D8C */  
/* 0047350C 0399E021 */  
/* 00473510 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00473514 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00473518 AFBC0038 */  sw    $gp, 0x38($sp)
/* 0047351C AFB70034 */  sw    $s7, 0x34($sp)
/* 00473520 AFB60030 */  sw    $s6, 0x30($sp)
/* 00473524 AFB5002C */  sw    $s5, 0x2c($sp)
/* 00473528 AFB40028 */  sw    $s4, 0x28($sp)
/* 0047352C AFB30024 */  sw    $s3, 0x24($sp)
/* 00473530 AFB20020 */  sw    $s2, 0x20($sp)
/* 00473534 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00473538 AFB00018 */  sw    $s0, 0x18($sp)
/* 0047353C AFA40040 */  sw    $a0, 0x40($sp)
/* 00473540 8C430000 */  lw    $v1, ($v0)
/* 00473544 944EFFE0 */  lhu   $t6, -0x20($v0)
/* 00473548 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 0047354C 90680014 */  lbu   $t0, 0x14($v1)
/* 00473550 000E7880 */  sll   $t7, $t6, 2
/* 00473554 2401000E */  li    $at, 14
/* 00473558 01F8C821 */  addu  $t9, $t7, $t8
/* 0047355C 0040A025 */  move  $s4, $v0
/* 00473560 8F300000 */  lw    $s0, ($t9)
/* 00473564 00008825 */  move  $s1, $zero
/* 00473568 0000B025 */  move  $s6, $zero
/* 0047356C 0000B825 */  move  $s7, $zero
/* 00473570 15010008 */  bne   $t0, $at, .L00473594
/* 00473574 00009025 */   move  $s2, $zero
/* 00473578 8F898B34 */  lw     $t1, %got(int_reg_size)($gp)
/* 0047357C 906A0015 */  lbu   $t2, 0x15($v1)
/* 00473580 8D290000 */  lw    $t1, ($t1)
/* 00473584 012A082A */  slt   $at, $t1, $t2
/* 00473588 10200002 */  beqz  $at, .L00473594
/* 0047358C 00000000 */   nop   
/* 00473590 24120001 */  li    $s2, 1
.L00473594:
/* 00473594 16400034 */  bnez  $s2, .L00473668
/* 00473598 00000000 */   nop   
/* 0047359C 12000032 */  beqz  $s0, .L00473668
/* 004735A0 24130003 */   li    $s3, 3
/* 004735A4 8F9589B4 */  lw     $s5, %got(curgraphnode)($gp)
/* 004735A8 920B0000 */  lbu   $t3, ($s0)
.L004735AC:
/* 004735AC 166B0025 */  bne   $s3, $t3, .L00473644
/* 004735B0 00000000 */   nop   
/* 004735B4 8E040028 */  lw    $a0, 0x28($s0)
/* 004735B8 8E05002C */  lw    $a1, 0x2c($s0)
/* 004735BC 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 004735C0 AFA40000 */  sw    $a0, ($sp)
/* 004735C4 AFA50004 */  sw    $a1, 4($sp)
/* 004735C8 8E86FFE4 */  lw    $a2, -0x1c($s4)
/* 004735CC AFA60008 */  sw    $a2, 8($sp)
/* 004735D0 8E87FFE8 */  lw    $a3, -0x18($s4)
/* 004735D4 0320F809 */  jalr  $t9
/* 004735D8 AFA7000C */   sw    $a3, 0xc($sp)
/* 004735DC 10400019 */  beqz  $v0, .L00473644
/* 004735E0 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004735E4 92180021 */  lbu   $t8, 0x21($s0)
/* 004735E8 53000004 */  beql  $t8, $zero, .L004735FC
/* 004735EC 8EB90000 */   lw    $t9, ($s5)
/* 004735F0 10000014 */  b     .L00473644
/* 004735F4 24120001 */   li    $s2, 1
/* 004735F8 8EB90000 */  lw    $t9, ($s5)
.L004735FC:
/* 004735FC 8E080010 */  lw    $t0, 0x10($s0)
/* 00473600 03281826 */  xor   $v1, $t9, $t0
/* 00473604 2C630001 */  sltiu $v1, $v1, 1
/* 00473608 10600003 */  beqz  $v1, .L00473618
/* 0047360C 00601025 */   move  $v0, $v1
/* 00473610 92020002 */  lbu   $v0, 2($s0)
/* 00473614 2C420001 */  sltiu $v0, $v0, 1
.L00473618:
/* 00473618 92090022 */  lbu   $t1, 0x22($s0)
/* 0047361C 305100FF */  andi  $s1, $v0, 0xff
/* 00473620 304A00FF */  andi  $t2, $v0, 0xff
/* 00473624 11200002 */  beqz  $t1, .L00473630
/* 00473628 00000000 */   nop   
/* 0047362C 24170001 */  li    $s7, 1
.L00473630:
/* 00473630 15400004 */  bnez  $t2, .L00473644
/* 00473634 00000000 */   nop   
/* 00473638 10600002 */  beqz  $v1, .L00473644
/* 0047363C 00000000 */   nop   
/* 00473640 24160001 */  li    $s6, 1
.L00473644:
/* 00473644 16200002 */  bnez  $s1, .L00473650
/* 00473648 00000000 */   nop   
/* 0047364C 8E10001C */  lw    $s0, 0x1c($s0)
.L00473650:
/* 00473650 16200005 */  bnez  $s1, .L00473668
/* 00473654 00000000 */   nop   
/* 00473658 16400003 */  bnez  $s2, .L00473668
/* 0047365C 00000000 */   nop   
/* 00473660 5600FFD2 */  bnezl $s0, .L004735AC
/* 00473664 920B0000 */   lbu   $t3, ($s0)
.L00473668:
/* 00473668 12200003 */  beqz  $s1, .L00473678
/* 0047366C 8F9589B4 */   lw     $s5, %got(curgraphnode)($gp)
/* 00473670 52400010 */  beql  $s2, $zero, .L004736B4
/* 00473674 8FBF003C */   lw    $ra, 0x3c($sp)
.L00473678:
/* 00473678 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0047367C 97A40042 */  lhu   $a0, 0x42($sp)
/* 00473680 0320F809 */  jalr  $t9
/* 00473684 00000000 */   nop   
/* 00473688 8EAB0000 */  lw    $t3, ($s5)
/* 0047368C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00473690 324C00FF */  andi  $t4, $s2, 0xff
/* 00473694 00408025 */  move  $s0, $v0
/* 00473698 A0520021 */  sb    $s2, 0x21($v0)
/* 0047369C 15800002 */  bnez  $t4, .L004736A8
/* 004736A0 AC4B0010 */   sw    $t3, 0x10($v0)
/* 004736A4 A0570022 */  sb    $s7, 0x22($v0)
.L004736A8:
/* 004736A8 2ECD0001 */  sltiu $t5, $s6, 1
/* 004736AC A04D0003 */  sb    $t5, 3($v0)
/* 004736B0 8FBF003C */  lw    $ra, 0x3c($sp)
.L004736B4:
/* 004736B4 02001025 */  move  $v0, $s0
/* 004736B8 8FB00018 */  lw    $s0, 0x18($sp)
/* 004736BC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004736C0 8FB20020 */  lw    $s2, 0x20($sp)
/* 004736C4 8FB30024 */  lw    $s3, 0x24($sp)
/* 004736C8 8FB40028 */  lw    $s4, 0x28($sp)
/* 004736CC 8FB5002C */  lw    $s5, 0x2c($sp)
/* 004736D0 8FB60030 */  lw    $s6, 0x30($sp)
/* 004736D4 8FB70034 */  lw    $s7, 0x34($sp)
/* 004736D8 03E00008 */  jr    $ra
/* 004736DC 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_004736E0, @function
func_004736E0:
    # 004737E0 par_to_str
/* 004736E0 3C1C0FBA */  .cpload $t9
/* 004736E4 279C6BB0 */  
/* 004736E8 0399E021 */  
/* 004736EC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004736F0 AFB00018 */  sw    $s0, 0x18($sp)
/* 004736F4 00C08025 */  move  $s0, $a2
/* 004736F8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004736FC AFBC0020 */  sw    $gp, 0x20($sp)
/* 00473700 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00473704 AFA40030 */  sw    $a0, 0x30($sp)
/* 00473708 AFA50034 */  sw    $a1, 0x34($sp)
/* 0047370C 10C0002E */  beqz  $a2, .L004737C8
/* 00473710 AFA2002C */   sw    $v0, 0x2c($sp)
/* 00473714 27B10030 */  addiu $s1, $sp, 0x30
/* 00473718 8E240000 */  lw    $a0, ($s1)
.L0047371C:
/* 0047371C 8F998430 */  lw    $t9, %call16(compareaddr)($gp)
/* 00473720 AFA40000 */  sw    $a0, ($sp)
/* 00473724 8E250004 */  lw    $a1, 4($s1)
/* 00473728 AFA50004 */  sw    $a1, 4($sp)
/* 0047372C 8E060004 */  lw    $a2, 4($s0)
/* 00473730 AFA60008 */  sw    $a2, 8($sp)
/* 00473734 8E070008 */  lw    $a3, 8($s0)
/* 00473738 0320F809 */  jalr  $t9
/* 0047373C AFA7000C */   sw    $a3, 0xc($sp)
/* 00473740 304300FF */  andi  $v1, $v0, 0xff
/* 00473744 2C610003 */  sltiu $at, $v1, 3
/* 00473748 10200015 */  beqz  $at, .L004737A0
/* 0047374C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00473750 8F818044 */  lw    $at, %got(jtbl_1000DBD4)($gp)
/* 00473754 00034080 */  sll   $t0, $v1, 2
/* 00473758 00280821 */  addu  $at, $at, $t0
/* 0047375C 8C28DBD4 */  lw    $t0, %lo(jtbl_1000DBD4)($at)
/* 00473760 011C4021 */  addu  $t0, $t0, $gp
/* 00473764 01000008 */  jr    $t0
/* 00473768 00000000 */   nop   
.L0047376C:
/* 0047376C 92090001 */  lbu   $t1, 1($s0)
/* 00473770 55200004 */  bnezl $t1, .L00473784
/* 00473774 8FAA002C */   lw    $t2, 0x2c($sp)
/* 00473778 10000014 */  b     .L004737CC
/* 0047377C 8E02000C */   lw    $v0, 0xc($s0)
/* 00473780 8FAA002C */  lw    $t2, 0x2c($sp)
.L00473784:
/* 00473784 8D4B0000 */  lw    $t3, ($t2)
/* 00473788 10000010 */  b     .L004737CC
/* 0047378C 91620015 */   lbu   $v0, 0x15($t3)
.L00473790:
/* 00473790 1000000B */  b     .L004737C0
/* 00473794 8E100010 */   lw    $s0, 0x10($s0)
.L00473798:
/* 00473798 10000009 */  b     .L004737C0
/* 0047379C 8E100014 */   lw    $s0, 0x14($s0)
.L004737A0:
/* 004737A0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004737A4 8F868044 */  lw    $a2, %got(RO_1000DBC9)($gp)
/* 004737A8 24040001 */  li    $a0, 1
/* 004737AC 24050AB8 */  li    $a1, 2744
/* 004737B0 2407000A */  li    $a3, 10
/* 004737B4 0320F809 */  jalr  $t9
/* 004737B8 24C6DBC9 */   addiu $a2, %lo(RO_1000DBC9) # addiu $a2, $a2, -0x2437
/* 004737BC 8FBC0020 */  lw    $gp, 0x20($sp)
.L004737C0:
/* 004737C0 5600FFD6 */  bnezl $s0, .L0047371C
/* 004737C4 8E240000 */   lw    $a0, ($s1)
.L004737C8:
/* 004737C8 00001025 */  move  $v0, $zero
.L004737CC:
/* 004737CC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 004737D0 8FB00018 */  lw    $s0, 0x18($sp)
/* 004737D4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004737D8 03E00008 */  jr    $ra
/* 004737DC 27BD0030 */   addiu $sp, $sp, 0x30

glabel par_to_str
    .ent par_to_str
    # 004761D0 tail_recursion
/* 004737E0 3C1C0FBA */  .cpload $t9
/* 004737E4 279C6AB0 */  
/* 004737E8 0399E021 */  
/* 004737EC 8F8E8980 */  lw     $t6, %got(curblk)($gp)
/* 004737F0 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 004737F4 8FAF0048 */  lw    $t7, 0x48($sp)
/* 004737F8 8DCE0000 */  lw    $t6, ($t6)
/* 004737FC AFBF001C */  sw    $ra, 0x1c($sp)
/* 00473800 000FC2C2 */  srl   $t8, $t7, 0xb
/* 00473804 01D8C826 */  xor   $t9, $t6, $t8
/* 00473808 001942C0 */  sll   $t0, $t9, 0xb
/* 0047380C 010F4826 */  xor   $t1, $t0, $t7
/* 00473810 AFA90048 */  sw    $t1, 0x48($sp)
/* 00473814 93AA004A */  lbu   $t2, 0x4a($sp)
/* 00473818 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047381C AFA40060 */  sw    $a0, 0x60($sp)
/* 00473820 314BFFF8 */  andi  $t3, $t2, 0xfff8
/* 00473824 356C0002 */  ori   $t4, $t3, 2
/* 00473828 AFA50064 */  sw    $a1, 0x64($sp)
/* 0047382C AFA60068 */  sw    $a2, 0x68($sp)
/* 00473830 A3AC004A */  sb    $t4, 0x4a($sp)
/* 00473834 8C8E001C */  lw    $t6, 0x1c($a0)
/* 00473838 27B80044 */  addiu $t8, $sp, 0x44
/* 0047383C 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 00473840 AFAE0044 */  sw    $t6, 0x44($sp)
/* 00473844 8F040000 */  lw    $a0, ($t8)
/* 00473848 8F998030 */  lw    $t9, %got(func_004736E0)($gp)
/* 0047384C 8DEF0000 */  lw    $t7, ($t7)
/* 00473850 AFA40000 */  sw    $a0, ($sp)
/* 00473854 8F050004 */  lw    $a1, 4($t8)
/* 00473858 273936E0 */  addiu $t9, %lo(func_004736E0) # addiu $t9, $t9, 0x36e0
/* 0047385C 27A20060 */  addiu $v0, $sp, 0x60
/* 00473860 AFA50004 */  sw    $a1, 4($sp)
/* 00473864 0320F809 */  jalr  $t9
/* 00473868 8DE60004 */   lw    $a2, 4($t7)
/* 0047386C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473870 AFA2003C */  sw    $v0, 0x3c($sp)
/* 00473874 1440002E */  bnez  $v0, .L00473930
/* 00473878 00001825 */   move  $v1, $zero
/* 0047387C 8F898AF4 */  lw     $t1, %got(bigendian)($gp)
/* 00473880 8FAA0044 */  lw    $t2, 0x44($sp)
/* 00473884 24030002 */  li    $v1, 2
/* 00473888 91290000 */  lbu   $t1, ($t1)
/* 0047388C 27AC0044 */  addiu $t4, $sp, 0x44
/* 00473890 27A20060 */  addiu $v0, $sp, 0x60
/* 00473894 11200137 */  beqz  $t1, .L00473D74
/* 00473898 254B0002 */   addiu $t3, $t2, 2
/* 0047389C AFAB0044 */  sw    $t3, 0x44($sp)
/* 004738A0 8D840000 */  lw    $a0, ($t4)
/* 004738A4 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 004738A8 8F998030 */  lw    $t9, %got(func_004736E0)($gp)
/* 004738AC AFA40000 */  sw    $a0, ($sp)
/* 004738B0 8D850004 */  lw    $a1, 4($t4)
/* 004738B4 8F180000 */  lw    $t8, ($t8)
/* 004738B8 273936E0 */  addiu $t9, %lo(func_004736E0) # addiu $t9, $t9, 0x36e0
/* 004738BC AFA50004 */  sw    $a1, 4($sp)
/* 004738C0 8F060004 */  lw    $a2, 4($t8)
/* 004738C4 0320F809 */  jalr  $t9
/* 004738C8 AFA30038 */   sw    $v1, 0x38($sp)
/* 004738CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004738D0 8FA30038 */  lw    $v1, 0x38($sp)
/* 004738D4 14400016 */  bnez  $v0, .L00473930
/* 004738D8 AFA2003C */   sw    $v0, 0x3c($sp)
/* 004738DC 8FB90044 */  lw    $t9, 0x44($sp)
/* 004738E0 27AF0044 */  addiu $t7, $sp, 0x44
/* 004738E4 8F8B8B6C */  lw     $t3, %got(curproc)($gp)
/* 004738E8 27280001 */  addiu $t0, $t9, 1
/* 004738EC AFA80044 */  sw    $t0, 0x44($sp)
/* 004738F0 8DE40000 */  lw    $a0, ($t7)
/* 004738F4 8F998030 */  lw    $t9, %got(func_004736E0)($gp)
/* 004738F8 8D6B0000 */  lw    $t3, ($t3)
/* 004738FC AFA40000 */  sw    $a0, ($sp)
/* 00473900 8DE50004 */  lw    $a1, 4($t7)
/* 00473904 24630001 */  addiu $v1, $v1, 1
/* 00473908 273936E0 */  addiu $t9, %lo(func_004736E0) # addiu $t9, $t9, 0x36e0
/* 0047390C AFA50004 */  sw    $a1, 4($sp)
/* 00473910 8D660004 */  lw    $a2, 4($t3)
/* 00473914 AFA30038 */  sw    $v1, 0x38($sp)
/* 00473918 0320F809 */  jalr  $t9
/* 0047391C 27A20060 */   addiu $v0, $sp, 0x60
/* 00473920 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473924 8FA30038 */  lw    $v1, 0x38($sp)
/* 00473928 10400112 */  beqz  $v0, .L00473D74
/* 0047392C AFA2003C */   sw    $v0, 0x3c($sp)
.L00473930:
/* 00473930 93AC0067 */  lbu   $t4, 0x67($sp)
/* 00473934 93AD004A */  lbu   $t5, 0x4a($sp)
/* 00473938 11800006 */  beqz  $t4, .L00473954
/* 0047393C 31AEFFF8 */   andi  $t6, $t5, 0xfff8
/* 00473940 8FB90068 */  lw    $t9, 0x68($sp)
/* 00473944 35D80001 */  ori   $t8, $t6, 1
/* 00473948 A3B8004A */  sb    $t8, 0x4a($sp)
/* 0047394C 03234021 */  addu  $t0, $t9, $v1
/* 00473950 AFA80044 */  sw    $t0, 0x44($sp)
.L00473954:
/* 00473954 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 00473958 8FA20060 */  lw    $v0, 0x60($sp)
/* 0047395C 27A5004C */  addiu $a1, $sp, 0x4c
/* 00473960 0320F809 */  jalr  $t9
/* 00473964 8C440004 */   lw    $a0, 4($v0)
/* 00473968 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047396C 00402025 */  move  $a0, $v0
/* 00473970 8FA5004C */  lw    $a1, 0x4c($sp)
/* 00473974 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 00473978 0320F809 */  jalr  $t9
/* 0047397C 00000000 */   nop   
/* 00473980 AFA20054 */  sw    $v0, 0x54($sp)
/* 00473984 27AF0044 */  addiu $t7, $sp, 0x44
/* 00473988 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047398C 8DE40000 */  lw    $a0, ($t7)
/* 00473990 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 00473994 AFA40000 */  sw    $a0, ($sp)
/* 00473998 8DE50004 */  lw    $a1, 4($t7)
/* 0047399C 0320F809 */  jalr  $t9
/* 004739A0 AFA50004 */   sw    $a1, 4($sp)
/* 004739A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004739A8 A7A20040 */  sh    $v0, 0x40($sp)
/* 004739AC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004739B0 8F998030 */  lw    $t9, %got(func_00473504)($gp)
/* 004739B4 27A20060 */  addiu $v0, $sp, 0x60
/* 004739B8 27393504 */  addiu $t9, %lo(func_00473504) # addiu $t9, $t9, 0x3504
/* 004739BC 0320F809 */  jalr  $t9
/* 004739C0 00000000 */   nop   
/* 004739C4 904B0000 */  lbu   $t3, ($v0)
/* 004739C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004739CC 00403025 */  move  $a2, $v0
/* 004739D0 11600062 */  beqz  $t3, .L00473B5C
/* 004739D4 24050001 */   li    $a1, 1
/* 004739D8 8C440038 */  lw    $a0, 0x38($v0)
/* 004739DC 240C0001 */  li    $t4, 1
/* 004739E0 54800015 */  bnezl $a0, .L00473A38
/* 004739E4 8C430034 */   lw    $v1, 0x34($v0)
/* 004739E8 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 004739EC A0CC0002 */  sb    $t4, 2($a2)
/* 004739F0 94C40008 */  lhu   $a0, 8($a2)
/* 004739F4 0320F809 */  jalr  $t9
/* 004739F8 AFA60058 */   sw    $a2, 0x58($sp)
/* 004739FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473A00 8FA30058 */  lw    $v1, 0x58($sp)
/* 00473A04 00403025 */  move  $a2, $v0
/* 00473A08 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 00473A0C 00002825 */  move  $a1, $zero
/* 00473A10 24070001 */  li    $a3, 1
/* 00473A14 8DAD0000 */  lw    $t5, ($t5)
/* 00473A18 AC4D0010 */  sw    $t5, 0x10($v0)
/* 00473A1C 906E0022 */  lbu   $t6, 0x22($v1)
/* 00473A20 A04E0022 */  sb    $t6, 0x22($v0)
/* 00473A24 90780021 */  lbu   $t8, 0x21($v1)
/* 00473A28 A0400003 */  sb    $zero, 3($v0)
/* 00473A2C 1000004C */  b     .L00473B60
/* 00473A30 A0580021 */   sb    $t8, 0x21($v0)
/* 00473A34 8C430034 */  lw    $v1, 0x34($v0)
.L00473A38:
/* 00473A38 50600029 */  beql  $v1, $zero, .L00473AE0
/* 00473A3C 8FA50054 */   lw    $a1, 0x54($sp)
/* 00473A40 9099001D */  lbu   $t9, 0x1d($a0)
/* 00473A44 53200026 */  beql  $t9, $zero, .L00473AE0
/* 00473A48 8FA50054 */   lw    $a1, 0x54($sp)
/* 00473A4C 8CC30038 */  lw    $v1, 0x38($a2)
/* 00473A50 8C680018 */  lw    $t0, 0x18($v1)
/* 00473A54 A1000009 */  sb    $zero, 9($t0)
/* 00473A58 8C6F0004 */  lw    $t7, 4($v1)
/* 00473A5C 8F9986DC */  lw    $t9, %call16(has_volt_ovfw)($gp)
/* 00473A60 8DE40034 */  lw    $a0, 0x34($t7)
/* 00473A64 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473A68 0320F809 */  jalr  $t9
/* 00473A6C AFA30030 */   sw    $v1, 0x30($sp)
/* 00473A70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473A74 8FA30030 */  lw    $v1, 0x30($sp)
/* 00473A78 1040000A */  beqz  $v0, .L00473AA4
/* 00473A7C 8FA6005C */   lw    $a2, 0x5c($sp)
/* 00473A80 24090067 */  li    $t1, 103
/* 00473A84 A0690000 */  sb    $t1, ($v1)
/* 00473A88 90CA0001 */  lbu   $t2, 1($a2)
/* 00473A8C 8C6B0004 */  lw    $t3, 4($v1)
/* 00473A90 A06A0014 */  sb    $t2, 0x14($v1)
/* 00473A94 8D6C0034 */  lw    $t4, 0x34($t3)
/* 00473A98 A0600015 */  sb    $zero, 0x15($v1)
/* 00473A9C 1000000C */  b     .L00473AD0
/* 00473AA0 AC6C0004 */   sw    $t4, 4($v1)
.L00473AA4:
/* 00473AA4 8C6D0004 */  lw    $t5, 4($v1)
/* 00473AA8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00473AAC 8DA40034 */  lw    $a0, 0x34($t5)
/* 00473AB0 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473AB4 0320F809 */  jalr  $t9
/* 00473AB8 AFA30030 */   sw    $v1, 0x30($sp)
/* 00473ABC 8FA30030 */  lw    $v1, 0x30($sp)
/* 00473AC0 240E0060 */  li    $t6, 96
/* 00473AC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473AC8 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473ACC A06E0000 */  sb    $t6, ($v1)
.L00473AD0:
/* 00473AD0 9065001C */  lbu   $a1, 0x1c($v1)
/* 00473AD4 10000022 */  b     .L00473B60
/* 00473AD8 9067001E */   lbu   $a3, 0x1e($v1)
/* 00473ADC 8FA50054 */  lw    $a1, 0x54($sp)
.L00473AE0:
/* 00473AE0 54A30008 */  bnel  $a1, $v1, .L00473B04
/* 00473AE4 8CD90038 */   lw    $t9, 0x38($a2)
/* 00473AE8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00473AEC 00A02025 */  move  $a0, $a1
/* 00473AF0 0320F809 */  jalr  $t9
/* 00473AF4 00000000 */   nop   
/* 00473AF8 1000009E */  b     .L00473D74
/* 00473AFC 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00473B00 8CD90038 */  lw    $t9, 0x38($a2)
.L00473B04:
/* 00473B04 24180001 */  li    $t8, 1
/* 00473B08 A0D80002 */  sb    $t8, 2($a2)
/* 00473B0C A320001F */  sb    $zero, 0x1f($t9)
/* 00473B10 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00473B14 AFA60058 */  sw    $a2, 0x58($sp)
/* 00473B18 94C40008 */  lhu   $a0, 8($a2)
/* 00473B1C 0320F809 */  jalr  $t9
/* 00473B20 00000000 */   nop   
/* 00473B24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473B28 8FA30058 */  lw    $v1, 0x58($sp)
/* 00473B2C 00403025 */  move  $a2, $v0
/* 00473B30 8F8889B4 */  lw     $t0, %got(curgraphnode)($gp)
/* 00473B34 00002825 */  move  $a1, $zero
/* 00473B38 00003825 */  move  $a3, $zero
/* 00473B3C 8D080000 */  lw    $t0, ($t0)
/* 00473B40 AC480010 */  sw    $t0, 0x10($v0)
/* 00473B44 906F0022 */  lbu   $t7, 0x22($v1)
/* 00473B48 A04F0022 */  sb    $t7, 0x22($v0)
/* 00473B4C 90690021 */  lbu   $t1, 0x21($v1)
/* 00473B50 A0400003 */  sb    $zero, 3($v0)
/* 00473B54 10000002 */  b     .L00473B60
/* 00473B58 A0490021 */   sb    $t1, 0x21($v0)
.L00473B5C:
/* 00473B5C 24070001 */  li    $a3, 1
.L00473B60:
/* 00473B60 90CA0000 */  lbu   $t2, ($a2)
/* 00473B64 15400027 */  bnez  $t2, .L00473C04
/* 00473B68 240B0003 */   li    $t3, 3
/* 00473B6C A0CB0000 */  sb    $t3, ($a2)
/* 00473B70 27AC0044 */  addiu $t4, $sp, 0x44
/* 00473B74 8D8E0000 */  lw    $t6, ($t4)
/* 00473B78 8FA20060 */  lw    $v0, 0x60($sp)
/* 00473B7C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00473B80 ACCE0028 */  sw    $t6, 0x28($a2)
/* 00473B84 8D8D0004 */  lw    $t5, 4($t4)
/* 00473B88 A3A70052 */  sb    $a3, 0x52($sp)
/* 00473B8C AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473B90 ACCD002C */  sw    $t5, 0x2c($a2)
/* 00473B94 90580014 */  lbu   $t8, 0x14($v0)
/* 00473B98 A3A50053 */  sb    $a1, 0x53($sp)
/* 00473B9C A0D80001 */  sb    $t8, 1($a2)
/* 00473BA0 0320F809 */  jalr  $t9
/* 00473BA4 90440014 */   lbu   $a0, 0x14($v0)
/* 00473BA8 8FB9003C */  lw    $t9, 0x3c($sp)
/* 00473BAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473BB0 93A50053 */  lbu   $a1, 0x53($sp)
/* 00473BB4 0059082A */  slt   $at, $v0, $t9
/* 00473BB8 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473BBC 10200002 */  beqz  $at, .L00473BC8
/* 00473BC0 93A70052 */   lbu   $a3, 0x52($sp)
/* 00473BC4 0040C825 */  move  $t9, $v0
.L00473BC8:
/* 00473BC8 8F88897C */  lw     $t0, %got(curlevel)($gp)
/* 00473BCC A0D90020 */  sb    $t9, 0x20($a2)
/* 00473BD0 90CF0021 */  lbu   $t7, 0x21($a2)
/* 00473BD4 8D080000 */  lw    $t0, ($t0)
/* 00473BD8 A0C00003 */  sb    $zero, 3($a2)
/* 00473BDC A4C00006 */  sh    $zero, 6($a2)
/* 00473BE0 ACC00030 */  sw    $zero, 0x30($a2)
/* 00473BE4 ACC00024 */  sw    $zero, 0x24($a2)
/* 00473BE8 15E00003 */  bnez  $t7, .L00473BF8
/* 00473BEC A0C8002F */   sb    $t0, 0x2f($a2)
/* 00473BF0 10000003 */  b     .L00473C00
/* 00473BF4 A0C00002 */   sb    $zero, 2($a2)
.L00473BF8:
/* 00473BF8 24090001 */  li    $t1, 1
/* 00473BFC A0C90002 */  sb    $t1, 2($a2)
.L00473C00:
/* 00473C00 A0C00023 */  sb    $zero, 0x23($a2)
.L00473C04:
/* 00473C04 90CA0021 */  lbu   $t2, 0x21($a2)
/* 00473C08 2404007B */  li    $a0, 123
/* 00473C0C 11400003 */  beqz  $t2, .L00473C1C
/* 00473C10 00000000 */   nop   
/* 00473C14 00002825 */  move  $a1, $zero
/* 00473C18 00003825 */  move  $a3, $zero
.L00473C1C:
/* 00473C1C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00473C20 A3A50053 */  sb    $a1, 0x53($sp)
/* 00473C24 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473C28 0320F809 */  jalr  $t9
/* 00473C2C A3A70052 */   sb    $a3, 0x52($sp)
/* 00473C30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473C34 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473C38 8FAB0054 */  lw    $t3, 0x54($sp)
/* 00473C3C 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00473C40 93A50053 */  lbu   $a1, 0x53($sp)
/* 00473C44 ACCB0034 */  sw    $t3, 0x34($a2)
/* 00473C48 8C840000 */  lw    $a0, ($a0)
/* 00473C4C 93A70052 */  lbu   $a3, 0x52($sp)
/* 00473C50 A0800003 */  sb    $zero, 3($a0)
/* 00473C54 AC860004 */  sw    $a2, 4($a0)
/* 00473C58 A085001C */  sb    $a1, 0x1c($a0)
/* 00473C5C 90CC0022 */  lbu   $t4, 0x22($a2)
/* 00473C60 55800012 */  bnezl $t4, .L00473CAC
/* 00473C64 A087001E */   sb    $a3, 0x1e($a0)
/* 00473C68 50A00010 */  beql  $a1, $zero, .L00473CAC
/* 00473C6C A087001E */   sb    $a3, 0x1e($a0)
/* 00473C70 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 00473C74 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 00473C78 8DAD0000 */  lw    $t5, ($t5)
/* 00473C7C 8DA50024 */  lw    $a1, 0x24($t5)
/* 00473C80 A3A70052 */  sb    $a3, 0x52($sp)
/* 00473C84 0320F809 */  jalr  $t9
/* 00473C88 AFA6005C */   sw    $a2, 0x5c($sp)
/* 00473C8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473C90 2C4E0001 */  sltiu $t6, $v0, 1
/* 00473C94 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473C98 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00473C9C 93A70052 */  lbu   $a3, 0x52($sp)
/* 00473CA0 8C840000 */  lw    $a0, ($a0)
/* 00473CA4 A08E001C */  sb    $t6, 0x1c($a0)
/* 00473CA8 A087001E */  sb    $a3, 0x1e($a0)
.L00473CAC:
/* 00473CAC 90D80022 */  lbu   $t8, 0x22($a2)
/* 00473CB0 57000011 */  bnezl $t8, .L00473CF8
/* 00473CB4 90CF0021 */   lbu   $t7, 0x21($a2)
/* 00473CB8 50E0000F */  beql  $a3, $zero, .L00473CF8
/* 00473CBC 90CF0021 */   lbu   $t7, 0x21($a2)
/* 00473CC0 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 00473CC4 8F390000 */  lw    $t9, ($t9)
/* 00473CC8 8F250024 */  lw    $a1, 0x24($t9)
/* 00473CCC 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 00473CD0 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473CD4 0320F809 */  jalr  $t9
/* 00473CD8 00000000 */   nop   
/* 00473CDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473CE0 2C480001 */  sltiu $t0, $v0, 1
/* 00473CE4 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473CE8 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00473CEC 8C840000 */  lw    $a0, ($a0)
/* 00473CF0 A088001E */  sb    $t0, 0x1e($a0)
/* 00473CF4 90CF0021 */  lbu   $t7, 0x21($a2)
.L00473CF8:
/* 00473CF8 A0800001 */  sb    $zero, 1($a0)
/* 00473CFC AC80002C */  sw    $zero, 0x2c($a0)
/* 00473D00 2DEA0001 */  sltiu $t2, $t7, 1
/* 00473D04 A08A001D */  sb    $t2, 0x1d($a0)
/* 00473D08 A08A001F */  sb    $t2, 0x1f($a0)
/* 00473D0C AC800030 */  sw    $zero, 0x30($a0)
/* 00473D10 A0800002 */  sb    $zero, 2($a0)
/* 00473D14 90CB0022 */  lbu   $t3, 0x22($a2)
/* 00473D18 ACC40038 */  sw    $a0, 0x38($a2)
/* 00473D1C 15600007 */  bnez  $t3, .L00473D3C
/* 00473D20 00000000 */   nop   
/* 00473D24 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 00473D28 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473D2C 0320F809 */  jalr  $t9
/* 00473D30 00000000 */   nop   
/* 00473D34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473D38 8FA6005C */  lw    $a2, 0x5c($sp)
.L00473D3C:
/* 00473D3C 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 00473D40 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473D44 0320F809 */  jalr  $t9
/* 00473D48 00000000 */   nop   
/* 00473D4C 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473D50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473D54 90CC0022 */  lbu   $t4, 0x22($a2)
/* 00473D58 51800007 */  beql  $t4, $zero, .L00473D78
/* 00473D5C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00473D60 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 00473D64 240D0001 */  li    $t5, 1
/* 00473D68 8DCE0000 */  lw    $t6, ($t6)
/* 00473D6C 8DD80028 */  lw    $t8, 0x28($t6)
/* 00473D70 A30D0008 */  sb    $t5, 8($t8)
.L00473D74:
/* 00473D74 8FBF001C */  lw    $ra, 0x1c($sp)
.L00473D78:
/* 00473D78 27BD0060 */  addiu $sp, $sp, 0x60
/* 00473D7C 03E00008 */  jr    $ra
/* 00473D80 00000000 */   nop   
    .type par_to_str, @function
    .size par_to_str, .-par_to_str
    .end par_to_str

    .type func_00473D84, @function
func_00473D84:
    # 00473F04 pmov_to_mov
/* 00473D84 3C1C0FBA */  .cpload $t9
/* 00473D88 279C650C */  
/* 00473D8C 0399E021 */  
/* 00473D90 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 00473D94 AFA40050 */  sw    $a0, 0x50($sp)
/* 00473D98 97AE0052 */  lhu   $t6, 0x52($sp)
/* 00473D9C 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 00473DA0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00473DA4 000E7880 */  sll   $t7, $t6, 2
/* 00473DA8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00473DAC AFB2001C */  sw    $s2, 0x1c($sp)
/* 00473DB0 AFB10018 */  sw    $s1, 0x18($sp)
/* 00473DB4 AFB00014 */  sw    $s0, 0x14($sp)
/* 00473DB8 01F8C821 */  addu  $t9, $t7, $t8
/* 00473DBC 8F300000 */  lw    $s0, ($t9)
/* 00473DC0 00408825 */  move  $s1, $v0
/* 00473DC4 00002825 */  move  $a1, $zero
/* 00473DC8 12000026 */  beqz  $s0, .L00473E64
/* 00473DCC 24120001 */   li    $s2, 1
/* 00473DD0 92080000 */  lbu   $t0, ($s0)
.L00473DD4:
/* 00473DD4 02481826 */  xor   $v1, $s2, $t0
/* 00473DD8 2C630001 */  sltiu $v1, $v1, 1
/* 00473DDC 5060001A */  beql  $v1, $zero, .L00473E48
/* 00473DE0 306200FF */   andi  $v0, $v1, 0xff
/* 00473DE4 8E04002C */  lw    $a0, 0x2c($s0)
/* 00473DE8 8E050030 */  lw    $a1, 0x30($s0)
/* 00473DEC 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00473DF0 AFA40000 */  sw    $a0, ($sp)
/* 00473DF4 AFA50004 */  sw    $a1, 4($sp)
/* 00473DF8 8E26FFF4 */  lw    $a2, -0xc($s1)
/* 00473DFC AFA60008 */  sw    $a2, 8($sp)
/* 00473E00 8E27FFF8 */  lw    $a3, -8($s1)
/* 00473E04 0320F809 */  jalr  $t9
/* 00473E08 AFA7000C */   sw    $a3, 0xc($sp)
/* 00473E0C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00473E10 1040000C */  beqz  $v0, .L00473E44
/* 00473E14 00401825 */   move  $v1, $v0
/* 00473E18 8E2DFFF4 */  lw    $t5, -0xc($s1)
/* 00473E1C 8E0E0020 */  lw    $t6, 0x20($s0)
/* 00473E20 01AE1826 */  xor   $v1, $t5, $t6
/* 00473E24 2C630001 */  sltiu $v1, $v1, 1
/* 00473E28 50600007 */  beql  $v1, $zero, .L00473E48
/* 00473E2C 306200FF */   andi  $v0, $v1, 0xff
/* 00473E30 8E2F0000 */  lw    $t7, ($s1)
/* 00473E34 8E190024 */  lw    $t9, 0x24($s0)
/* 00473E38 8DF80020 */  lw    $t8, 0x20($t7)
/* 00473E3C 03191826 */  xor   $v1, $t8, $t9
/* 00473E40 2C630001 */  sltiu $v1, $v1, 1
.L00473E44:
/* 00473E44 306200FF */  andi  $v0, $v1, 0xff
.L00473E48:
/* 00473E48 14400002 */  bnez  $v0, .L00473E54
/* 00473E4C 306500FF */   andi  $a1, $v1, 0xff
/* 00473E50 8E10001C */  lw    $s0, 0x1c($s0)
.L00473E54:
/* 00473E54 14400003 */  bnez  $v0, .L00473E64
/* 00473E58 00000000 */   nop   
/* 00473E5C 5600FFDD */  bnezl $s0, .L00473DD4
/* 00473E60 92080000 */   lbu   $t0, ($s0)
.L00473E64:
/* 00473E64 14A00020 */  bnez  $a1, .L00473EE8
/* 00473E68 24120001 */   li    $s2, 1
/* 00473E6C 2628FFF4 */  addiu $t0, $s1, -0xc
/* 00473E70 AFA80034 */  sw    $t0, 0x34($sp)
/* 00473E74 8E29FFF4 */  lw    $t1, -0xc($s1)
/* 00473E78 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00473E7C 97A40052 */  lhu   $a0, 0x52($sp)
/* 00473E80 AFA90030 */  sw    $t1, 0x30($sp)
/* 00473E84 8E2A0000 */  lw    $t2, ($s1)
/* 00473E88 0320F809 */  jalr  $t9
/* 00473E8C AFAA002C */   sw    $t2, 0x2c($sp)
/* 00473E90 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00473E94 A0520000 */  sb    $s2, ($v0)
/* 00473E98 00408025 */  move  $s0, $v0
/* 00473E9C 8F8B89B4 */  lw     $t3, %got(curgraphnode)($gp)
/* 00473EA0 8F99897C */  lw     $t9, %got(curlevel)($gp)
/* 00473EA4 8D6B0000 */  lw    $t3, ($t3)
/* 00473EA8 A0400001 */  sb    $zero, 1($v0)
/* 00473EAC AC4B0010 */  sw    $t3, 0x10($v0)
/* 00473EB0 8FAC0034 */  lw    $t4, 0x34($sp)
/* 00473EB4 8D8E0000 */  lw    $t6, ($t4)
/* 00473EB8 AC4E002C */  sw    $t6, 0x2c($v0)
/* 00473EBC 8D8D0004 */  lw    $t5, 4($t4)
/* 00473EC0 AC4D0030 */  sw    $t5, 0x30($v0)
/* 00473EC4 8FAF002C */  lw    $t7, 0x2c($sp)
/* 00473EC8 8DF80020 */  lw    $t8, 0x20($t7)
/* 00473ECC AC580024 */  sw    $t8, 0x24($v0)
/* 00473ED0 8F390000 */  lw    $t9, ($t9)
/* 00473ED4 AC590028 */  sw    $t9, 0x28($v0)
/* 00473ED8 8FA80030 */  lw    $t0, 0x30($sp)
/* 00473EDC AC400018 */  sw    $zero, 0x18($v0)
/* 00473EE0 AC400034 */  sw    $zero, 0x34($v0)
/* 00473EE4 AC480020 */  sw    $t0, 0x20($v0)
.L00473EE8:
/* 00473EE8 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00473EEC 02001025 */  move  $v0, $s0
/* 00473EF0 8FB00014 */  lw    $s0, 0x14($sp)
/* 00473EF4 8FB10018 */  lw    $s1, 0x18($sp)
/* 00473EF8 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00473EFC 03E00008 */  jr    $ra
/* 00473F00 27BD0050 */   addiu $sp, $sp, 0x50

glabel pmov_to_mov
    .ent pmov_to_mov
    # 004761D0 tail_recursion
/* 00473F04 3C1C0FBA */  .cpload $t9
/* 00473F08 279C638C */  
/* 00473F0C 0399E021 */  
/* 00473F10 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00473F14 93AE003A */  lbu   $t6, 0x3a($sp)
/* 00473F18 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 00473F1C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00473F20 31CFFFF8 */  andi  $t7, $t6, 0xfff8
/* 00473F24 35F80002 */  ori   $t8, $t7, 2
/* 00473F28 A3B8003A */  sb    $t8, 0x3a($sp)
/* 00473F2C 8FA80038 */  lw    $t0, 0x38($sp)
/* 00473F30 8F390000 */  lw    $t9, ($t9)
/* 00473F34 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00473F38 00084AC2 */  srl   $t1, $t0, 0xb
/* 00473F3C 03295026 */  xor   $t2, $t9, $t1
/* 00473F40 000A5AC0 */  sll   $t3, $t2, 0xb
/* 00473F44 01686026 */  xor   $t4, $t3, $t0
/* 00473F48 AFB00014 */  sw    $s0, 0x14($sp)
/* 00473F4C AFAC0038 */  sw    $t4, 0x38($sp)
/* 00473F50 948D0030 */  lhu   $t5, 0x30($a0)
/* 00473F54 27AE0034 */  addiu $t6, $sp, 0x34
/* 00473F58 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 00473F5C AFAD0034 */  sw    $t5, 0x34($sp)
/* 00473F60 8DD80000 */  lw    $t8, ($t6)
/* 00473F64 AFB80000 */  sw    $t8, ($sp)
/* 00473F68 8DC50004 */  lw    $a1, 4($t6)
/* 00473F6C AFA40040 */  sw    $a0, 0x40($sp)
/* 00473F70 03002025 */  move  $a0, $t8
/* 00473F74 0320F809 */  jalr  $t9
/* 00473F78 AFA50004 */   sw    $a1, 4($sp)
/* 00473F7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473F80 A7A20030 */  sh    $v0, 0x30($sp)
/* 00473F84 24040058 */  li    $a0, 88
/* 00473F88 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00473F8C 0320F809 */  jalr  $t9
/* 00473F90 00000000 */   nop   
/* 00473F94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473F98 97A40030 */  lhu   $a0, 0x30($sp)
/* 00473F9C 27A20040 */  addiu $v0, $sp, 0x40
/* 00473FA0 8F998030 */  lw    $t9, %got(func_00473D84)($gp)
/* 00473FA4 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 00473FA8 27393D84 */  addiu $t9, %lo(func_00473D84) # addiu $t9, $t9, 0x3d84
/* 00473FAC 0320F809 */  jalr  $t9
/* 00473FB0 8E100000 */   lw    $s0, ($s0)
/* 00473FB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473FB8 8FA60040 */  lw    $a2, 0x40($sp)
/* 00473FBC AE020004 */  sw    $v0, 4($s0)
/* 00473FC0 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 00473FC4 27A5003C */  addiu $a1, $sp, 0x3c
/* 00473FC8 8CC40004 */  lw    $a0, 4($a2)
/* 00473FCC 0320F809 */  jalr  $t9
/* 00473FD0 00000000 */   nop   
/* 00473FD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473FD8 AE020014 */  sw    $v0, 0x14($s0)
/* 00473FDC 00402025 */  move  $a0, $v0
/* 00473FE0 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 00473FE4 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00473FE8 0320F809 */  jalr  $t9
/* 00473FEC 00000000 */   nop   
/* 00473FF0 8FA60040 */  lw    $a2, 0x40($sp)
/* 00473FF4 AE020014 */  sw    $v0, 0x14($s0)
/* 00473FF8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473FFC 8CD90020 */  lw    $t9, 0x20($a2)
/* 00474000 AE190020 */  sw    $t9, 0x20($s0)
/* 00474004 90C90032 */  lbu   $t1, 0x32($a2)
/* 00474008 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0047400C A2090032 */  sb    $t1, 0x32($s0)
/* 00474010 90CA0032 */  lbu   $t2, 0x32($a2)
/* 00474014 A20A0033 */  sb    $t2, 0x33($s0)
/* 00474018 0320F809 */  jalr  $t9
/* 0047401C 8CC40004 */   lw    $a0, 4($a2)
/* 00474020 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00474024 AE02002C */  sw    $v0, 0x2c($s0)
/* 00474028 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 0047402C 0320F809 */  jalr  $t9
/* 00474030 00000000 */   nop   
/* 00474034 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00474038 8E080018 */  lw    $t0, 0x18($s0)
/* 0047403C 240B0003 */  li    $t3, 3
/* 00474040 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00474044 A10B0009 */  sb    $t3, 9($t0)
/* 00474048 8F998398 */  lw    $t9, %call16(movkillprev)($gp)
/* 0047404C 8C840000 */  lw    $a0, ($a0)
/* 00474050 0320F809 */  jalr  $t9
/* 00474054 00000000 */   nop   
/* 00474058 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047405C 8E040004 */  lw    $a0, 4($s0)
/* 00474060 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 00474064 0320F809 */  jalr  $t9
/* 00474068 00000000 */   nop   
/* 0047406C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00474070 AE020024 */  sw    $v0, 0x24($s0)
/* 00474074 8F8C89B4 */  lw     $t4, %got(curgraphnode)($gp)
/* 00474078 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 0047407C 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00474080 8D8C0000 */  lw    $t4, ($t4)
/* 00474084 8C840000 */  lw    $a0, ($a0)
/* 00474088 0320F809 */  jalr  $t9
/* 0047408C 8D850024 */   lw    $a1, 0x24($t4)
/* 00474090 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00474094 2C4D0001 */  sltiu $t5, $v0, 1
/* 00474098 A20D001C */  sb    $t5, 0x1c($s0)
/* 0047409C 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 004740A0 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 004740A4 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 004740A8 8DCE0000 */  lw    $t6, ($t6)
/* 004740AC 8C840000 */  lw    $a0, ($a0)
/* 004740B0 0320F809 */  jalr  $t9
/* 004740B4 8DC50024 */   lw    $a1, 0x24($t6)
/* 004740B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004740BC 24030001 */  li    $v1, 1
/* 004740C0 2C4F0001 */  sltiu $t7, $v0, 1
/* 004740C4 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 004740C8 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 004740CC A20F001E */  sb    $t7, 0x1e($s0)
/* 004740D0 A203001D */  sb    $v1, 0x1d($s0)
/* 004740D4 A203001F */  sb    $v1, 0x1f($s0)
/* 004740D8 0320F809 */  jalr  $t9
/* 004740DC 8C840000 */   lw    $a0, ($a0)
/* 004740E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004740E4 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 004740E8 0320F809 */  jalr  $t9
/* 004740EC 00000000 */   nop   
/* 004740F0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004740F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004740F8 8FB00014 */  lw    $s0, 0x14($sp)
/* 004740FC 03E00008 */  jr    $ra
/* 00474100 27BD0040 */   addiu $sp, $sp, 0x40
    .type pmov_to_mov, @function
    .size pmov_to_mov, .-pmov_to_mov
    .end pmov_to_mov
)"");
