__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000B2D0:
    # 00437010 cmp_tree
    .ascii "unknown u-code                                                                  "

RO_1000B320:
    # 00437010 cmp_tree
    .ascii "loop_header.p                                                                   "

    .balign 4
jtbl_1000B370:
    # 00437010 cmp_tree
    .gpword .L004378A0
    .gpword .L004378E4
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L004378E4

    .balign 4
jtbl_1000B384:
    # 00437010 cmp_tree
    .gpword .L004378E4
    .gpword .L004374CC
    .gpword .L004379D0
    .gpword .L004379D0
    .gpword .L004379B0
    .gpword .L004379B0
    .gpword .L00437AAC
    .gpword .L00437AAC

    .balign 4
jtbl_1000B3A4:
    # 00437010 cmp_tree
    .gpword .L004372C8
    .gpword .L00437954

    .balign 4
jtbl_1000B3AC:
    # 00437010 cmp_tree
    .gpword .L004378E4
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L0043746C
    .gpword .L00437BCC
    .gpword .L004378E4
    .gpword .L004378E4
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L004373E0
    .gpword .L00437BCC
    .gpword .L00437A2C
    .gpword .L00437A2C
    .gpword .L00437A2C
    .gpword .L004374AC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437A2C
    .gpword .L00437A2C
    .gpword .L00437520
    .gpword .L00437BCC
    .gpword .L00437A2C
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L004378E4
    .gpword .L00437664
    .gpword .L00437724
    .gpword .L004375AC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437AB4
    .gpword .L00437BCC
    .gpword .L00437D18
    .gpword .L00437BCC
    .gpword .L00437898
    .gpword .L00437810
    .gpword .L00437BCC
    .gpword .L004374EC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L004378E4
    .gpword .L004378E4
    .gpword .L00437BCC
    .gpword .L004378A0
    .gpword .L00437BCC
    .gpword .L0043707C
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L004378E4
    .gpword .L004378E4
    .gpword .L004378E4
    .gpword .L00437A2C
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L004378E4
    .gpword .L004372B0
    .gpword .L00437BCC
    .gpword .L004378A0
    .gpword .L004378E4
    .gpword .L00437AAC
    .gpword .L004378A0
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437208
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L004378E4
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437954
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L004378E4
    .gpword .L004378E4

    .balign 4
jtbl_1000B4F4:
    # 00437010 cmp_tree
    .gpword .L0043712C
    .gpword .L00437BCC
    .gpword .L004378E4
    .gpword .L00437BCC
    .gpword .L0043746C

    .balign 4
jtbl_1000B508:
    # 00437010 cmp_tree
    .gpword .L00437954
    .gpword .L00437BCC
    .gpword .L0043748C
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437BCC
    .gpword .L00437AAC
    .gpword .L004378E4

RO_1000B528:
    # 00437D40 cmp_tree_again
    .ascii "unknown u-code                                                                  "

RO_1000B578:
    # 00437D40 cmp_tree_again
    .ascii "loop_header.p                                                                   "

    .balign 4
jtbl_1000B5C8:
    # 00437D40 cmp_tree_again
    .gpword .L00437DD8
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E10

    .balign 4
jtbl_1000B5DC:
    # 00437D40 cmp_tree_again
    .gpword .L00437E10
    .gpword .L00437DD8
    .gpword .L00437DD8
    .gpword .L00437DD8
    .gpword .L00437DD8
    .gpword .L00437DD8

    .balign 4
jtbl_1000B5F4:
    # 00437D40 cmp_tree_again
    .gpword .L00437DD0
    .gpword .L00437DD8

    .balign 4
jtbl_1000B5FC:
    # 00437D40 cmp_tree_again
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437DD8
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E10
    .gpword .L00437E10
    .gpword .L00437DD8
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E10
    .gpword .L00437DD8
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437DD8
    .gpword .L00437E10
    .gpword .L00437E10

    .balign 4
jtbl_1000B670:
    # 00437D40 cmp_tree_again
    .gpword .L00437DD0
    .gpword .L00437DD0
    .gpword .L00437E48
    .gpword .L00437DD0
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437DD8
    .gpword .L00437E48
    .gpword .L00437DD0
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E10
    .gpword .L00437E10
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437DD0
    .gpword .L00437E48
    .gpword .L00437DD8
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437DD8
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437DD8
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437DD8
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E10

    .balign 4
jtbl_1000B72C:
    # 00437D40 cmp_tree_again
    .gpword .L00437DD8
    .gpword .L00437E48
    .gpword .L00437E10
    .gpword .L00437E48
    .gpword .L00437E10

    .balign 4
jtbl_1000B740:
    # 00437D40 cmp_tree_again
    .gpword .L00437DD8
    .gpword .L00437E48
    .gpword .L00437DF4

.data
# 100161F0
glabel stop_ops
    # 00438320 match_uconds
    # 004387D8 match_conds
    .byte 0x10,0x00,0x40,0x10,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x80,0x00,0x00,0x00,0x18,0x00,0x00
    .type stop_ops, @object
    .size stop_ops, .-stop_ops # 20

# 10016204
glabel not_real_stms
    # 0043813C get_prior_stm
    # 004381B4 get_prior_stm1
    # 00438244 find_br
    .byte 0x00,0x80,0x10,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    .type not_real_stms, @object
    .size not_real_stms, .-not_real_stms # 20

# 10016218
glabel inverse
    # 00438620 cmp_br
    .ascii "```````````````````````````````````_````NM```````````````````````````````````)(````````````````#````````````````````````````````````````````````````````````"
    .type inverse, @object
    .size inverse, .-inverse # 156

D_100162B4:
    # 00438244 find_br
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_100162C0:
    # 00438620 cmp_br
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00



.bss
    .balign 4
# 100213C8
glabel pay
    # 00437010 cmp_tree
    # 004387D8 match_conds
    .space 4
    .size pay, 4
    .type pay, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel insert
    .ent insert
    # 004380EC move_label
/* 00436F40 AC850008 */  sw    $a1, 8($a0)
/* 00436F44 8CAE000C */  lw    $t6, 0xc($a1)
/* 00436F48 AC8E000C */  sw    $t6, 0xc($a0)
/* 00436F4C ADC40008 */  sw    $a0, 8($t6)
/* 00436F50 03E00008 */  jr    $ra
/* 00436F54 ACA4000C */   sw    $a0, 0xc($a1)
    .type insert, @function
    .size insert, .-insert
    .end insert

glabel append
    .ent append
    # 00438320 match_uconds
    # 004387D8 match_conds
/* 00436F58 AC85000C */  sw    $a1, 0xc($a0)
/* 00436F5C 8CAE0008 */  lw    $t6, 8($a1)
/* 00436F60 AC8E0008 */  sw    $t6, 8($a0)
/* 00436F64 ACA40008 */  sw    $a0, 8($a1)
/* 00436F68 8C8F0008 */  lw    $t7, 8($a0)
/* 00436F6C 03E00008 */  jr    $ra
/* 00436F70 ADE4000C */   sw    $a0, 0xc($t7)
    .type append, @function
    .size append, .-append
    .end append

glabel make_new_label
    .ent make_new_label
    # 00438320 match_uconds
    # 004387D8 match_conds
/* 00436F74 3C1C0FBF */  .cpload $t9
/* 00436F78 279C8ADC */  
/* 00436F7C 0399E021 */  
/* 00436F80 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 00436F84 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00436F88 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00436F8C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00436F90 0320F809 */  jalr  $t9
/* 00436F94 24040042 */   li    $a0, 66
/* 00436F98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00436F9C AFA20020 */  sw    $v0, 0x20($sp)
/* 00436FA0 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00436FA4 0320F809 */  jalr  $t9
/* 00436FA8 00000000 */   nop   
/* 00436FAC 8FA30020 */  lw    $v1, 0x20($sp)
/* 00436FB0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00436FB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00436FB8 AC620024 */  sw    $v0, 0x24($v1)
/* 00436FBC 27BD0028 */  addiu $sp, $sp, 0x28
/* 00436FC0 A4600022 */  sh    $zero, 0x22($v1)
/* 00436FC4 AC600028 */  sw    $zero, 0x28($v1)
/* 00436FC8 03E00008 */  jr    $ra
/* 00436FCC 00601025 */   move  $v0, $v1
    .type make_new_label, @function
    .size make_new_label, .-make_new_label
    .end make_new_label

glabel make_new_jump
    .ent make_new_jump
    # 00438320 match_uconds
    # 004387D8 match_conds
/* 00436FD0 3C1C0FBF */  .cpload $t9
/* 00436FD4 279C8A80 */  
/* 00436FD8 0399E021 */  
/* 00436FDC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00436FE0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00436FE4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00436FE8 00803025 */  move  $a2, $a0
/* 00436FEC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00436FF0 24040088 */  li    $a0, 136
/* 00436FF4 0320F809 */  jalr  $t9
/* 00436FF8 00002825 */   move  $a1, $zero
/* 00436FFC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00437000 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00437004 27BD0020 */  addiu $sp, $sp, 0x20
/* 00437008 03E00008 */  jr    $ra
/* 0043700C 00000000 */   nop   
    .type make_new_jump, @function
    .size make_new_jump, .-make_new_jump
    .end make_new_jump

glabel cmp_tree
    .ent cmp_tree
    # 00437010 cmp_tree
    # 00438320 match_uconds
    # 00438620 cmp_br
    # 004387D8 match_conds
/* 00437010 3C1C0FBF */  .cpload $t9
/* 00437014 279C8A40 */  
/* 00437018 0399E021 */  
/* 0043701C 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00437020 240E0001 */  li    $t6, 1
/* 00437024 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00437028 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043702C AFAE00B8 */  sw    $t6, 0xb8($sp)
/* 00437030 908F001A */  lbu   $t7, 0x1a($a0)
/* 00437034 00803025 */  move  $a2, $a0
/* 00437038 00A03825 */  move  $a3, $a1
/* 0043703C 25F80001 */  addiu $t8, $t7, 1
/* 00437040 A098001A */  sb    $t8, 0x1a($a0)
/* 00437044 90B9001A */  lbu   $t9, 0x1a($a1)
/* 00437048 27280001 */  addiu $t0, $t9, 1
/* 0043704C 14850003 */  bne   $a0, $a1, .L0043705C
/* 00437050 A0A8001A */   sb    $t0, 0x1a($a1)
/* 00437054 10000336 */  b     .L00437D30
/* 00437058 24020001 */   li    $v0, 1
.L0043705C:
/* 0043705C 90C30020 */  lbu   $v1, 0x20($a2)
/* 00437060 90E90020 */  lbu   $t1, 0x20($a3)
/* 00437064 11230003 */  beq   $t1, $v1, .L00437074
/* 00437068 00000000 */   nop   
/* 0043706C 10000330 */  b     .L00437D30
/* 00437070 00001025 */   move  $v0, $zero
.L00437074:
/* 00437074 10000292 */  b     .L00437AC0
/* 00437078 306200FF */   andi  $v0, $v1, 0xff
.L0043707C:
/* 0043707C 90E20021 */  lbu   $v0, 0x21($a3)
/* 00437080 90C40021 */  lbu   $a0, 0x21($a2)
/* 00437084 24010003 */  li    $at, 3
/* 00437088 304A001F */  andi  $t2, $v0, 0x1f
/* 0043708C 308B001F */  andi  $t3, $a0, 0x1f
/* 00437090 014B1826 */  xor   $v1, $t2, $t3
/* 00437094 2C630001 */  sltiu $v1, $v1, 1
/* 00437098 1060001E */  beqz  $v1, .L00437114
/* 0043709C 00026600 */   sll   $t4, $v0, 0x18
/* 004370A0 00047600 */  sll   $t6, $a0, 0x18
/* 004370A4 000E7F42 */  srl   $t7, $t6, 0x1d
/* 004370A8 000C6F42 */  srl   $t5, $t4, 0x1d
/* 004370AC 01AF1826 */  xor   $v1, $t5, $t7
/* 004370B0 2C630001 */  sltiu $v1, $v1, 1
/* 004370B4 50600018 */  beql  $v1, $zero, .L00437118
/* 004370B8 00046E00 */   sll   $t5, $a0, 0x18
/* 004370BC 8CF80024 */  lw    $t8, 0x24($a3)
/* 004370C0 8CD90024 */  lw    $t9, 0x24($a2)
/* 004370C4 03191826 */  xor   $v1, $t8, $t9
/* 004370C8 2C630001 */  sltiu $v1, $v1, 1
/* 004370CC 50600012 */  beql  $v1, $zero, .L00437118
/* 004370D0 00046E00 */   sll   $t5, $a0, 0x18
/* 004370D4 8CE8002C */  lw    $t0, 0x2c($a3)
/* 004370D8 8CC9002C */  lw    $t1, 0x2c($a2)
/* 004370DC 01091826 */  xor   $v1, $t0, $t1
/* 004370E0 2C630001 */  sltiu $v1, $v1, 1
/* 004370E4 5060000C */  beql  $v1, $zero, .L00437118
/* 004370E8 00046E00 */   sll   $t5, $a0, 0x18
/* 004370EC 8CEA0028 */  lw    $t2, 0x28($a3)
/* 004370F0 8CCB0028 */  lw    $t3, 0x28($a2)
/* 004370F4 014B1826 */  xor   $v1, $t2, $t3
/* 004370F8 2C630001 */  sltiu $v1, $v1, 1
/* 004370FC 50600006 */  beql  $v1, $zero, .L00437118
/* 00437100 00046E00 */   sll   $t5, $a0, 0x18
/* 00437104 94EC0022 */  lhu   $t4, 0x22($a3)
/* 00437108 94CE0022 */  lhu   $t6, 0x22($a2)
/* 0043710C 018E1826 */  xor   $v1, $t4, $t6
/* 00437110 2C630001 */  sltiu $v1, $v1, 1
.L00437114:
/* 00437114 00046E00 */  sll   $t5, $a0, 0x18
.L00437118:
/* 00437118 000D7F42 */  srl   $t7, $t5, 0x1d
/* 0043711C 15E102FE */  bne   $t7, $at, .L00437D18
/* 00437120 A3A300BF */   sb    $v1, 0xbf($sp)
/* 00437124 100002FC */  b     .L00437D18
/* 00437128 AFA000B8 */   sw    $zero, 0xb8($sp)
.L0043712C:
/* 0043712C 90E20021 */  lbu   $v0, 0x21($a3)
/* 00437130 90C40021 */  lbu   $a0, 0x21($a2)
/* 00437134 3058001F */  andi  $t8, $v0, 0x1f
/* 00437138 3099001F */  andi  $t9, $a0, 0x1f
/* 0043713C 03191826 */  xor   $v1, $t8, $t9
/* 00437140 2C630001 */  sltiu $v1, $v1, 1
/* 00437144 10600029 */  beqz  $v1, .L004371EC
/* 00437148 00024600 */   sll   $t0, $v0, 0x18
/* 0043714C 00045600 */  sll   $t2, $a0, 0x18
/* 00437150 000A5F42 */  srl   $t3, $t2, 0x1d
/* 00437154 00084F42 */  srl   $t1, $t0, 0x1d
/* 00437158 012B1826 */  xor   $v1, $t1, $t3
/* 0043715C 2C630001 */  sltiu $v1, $v1, 1
/* 00437160 50600023 */  beql  $v1, $zero, .L004371F0
/* 00437164 00044E00 */   sll   $t1, $a0, 0x18
/* 00437168 8CEC0024 */  lw    $t4, 0x24($a3)
/* 0043716C 8CCE0024 */  lw    $t6, 0x24($a2)
/* 00437170 018E1826 */  xor   $v1, $t4, $t6
/* 00437174 2C630001 */  sltiu $v1, $v1, 1
/* 00437178 5060001D */  beql  $v1, $zero, .L004371F0
/* 0043717C 00044E00 */   sll   $t1, $a0, 0x18
/* 00437180 8CED002C */  lw    $t5, 0x2c($a3)
/* 00437184 8CCF002C */  lw    $t7, 0x2c($a2)
/* 00437188 01AF1826 */  xor   $v1, $t5, $t7
/* 0043718C 2C630001 */  sltiu $v1, $v1, 1
/* 00437190 50600017 */  beql  $v1, $zero, .L004371F0
/* 00437194 00044E00 */   sll   $t1, $a0, 0x18
/* 00437198 8CF80028 */  lw    $t8, 0x28($a3)
/* 0043719C 8CD90028 */  lw    $t9, 0x28($a2)
/* 004371A0 03191826 */  xor   $v1, $t8, $t9
/* 004371A4 2C630001 */  sltiu $v1, $v1, 1
/* 004371A8 50600011 */  beql  $v1, $zero, .L004371F0
/* 004371AC 00044E00 */   sll   $t1, $a0, 0x18
/* 004371B0 94E80022 */  lhu   $t0, 0x22($a3)
/* 004371B4 94CA0022 */  lhu   $t2, 0x22($a2)
/* 004371B8 010A1826 */  xor   $v1, $t0, $t2
/* 004371BC 2C630001 */  sltiu $v1, $v1, 1
/* 004371C0 5060000B */  beql  $v1, $zero, .L004371F0
/* 004371C4 00044E00 */   sll   $t1, $a0, 0x18
/* 004371C8 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 004371CC 8CC40000 */  lw    $a0, ($a2)
/* 004371D0 8CE50000 */  lw    $a1, ($a3)
/* 004371D4 0320F809 */  jalr  $t9
/* 004371D8 AFA600C0 */   sw    $a2, 0xc0($sp)
/* 004371DC 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 004371E0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004371E4 00401825 */  move  $v1, $v0
/* 004371E8 90C40021 */  lbu   $a0, 0x21($a2)
.L004371EC:
/* 004371EC 00044E00 */  sll   $t1, $a0, 0x18
.L004371F0:
/* 004371F0 00095F42 */  srl   $t3, $t1, 0x1d
/* 004371F4 24010003 */  li    $at, 3
/* 004371F8 156102C7 */  bne   $t3, $at, .L00437D18
/* 004371FC A3A300BF */   sb    $v1, 0xbf($sp)
/* 00437200 100002C5 */  b     .L00437D18
/* 00437204 AFA000B8 */   sw    $zero, 0xb8($sp)
.L00437208:
/* 00437208 90E20021 */  lbu   $v0, 0x21($a3)
/* 0043720C 90C40021 */  lbu   $a0, 0x21($a2)
/* 00437210 304C001F */  andi  $t4, $v0, 0x1f
/* 00437214 308E001F */  andi  $t6, $a0, 0x1f
/* 00437218 018E1826 */  xor   $v1, $t4, $t6
/* 0043721C 2C630001 */  sltiu $v1, $v1, 1
/* 00437220 10600021 */  beqz  $v1, .L004372A8
/* 00437224 00026E00 */   sll   $t5, $v0, 0x18
/* 00437228 0004C600 */  sll   $t8, $a0, 0x18
/* 0043722C 0018CF42 */  srl   $t9, $t8, 0x1d
/* 00437230 000D7F42 */  srl   $t7, $t5, 0x1d
/* 00437234 01F91826 */  xor   $v1, $t7, $t9
/* 00437238 2C630001 */  sltiu $v1, $v1, 1
/* 0043723C 1060001A */  beqz  $v1, .L004372A8
/* 00437240 00000000 */   nop   
/* 00437244 8CE80024 */  lw    $t0, 0x24($a3)
/* 00437248 8CCA0024 */  lw    $t2, 0x24($a2)
/* 0043724C 010A1826 */  xor   $v1, $t0, $t2
/* 00437250 2C630001 */  sltiu $v1, $v1, 1
/* 00437254 10600014 */  beqz  $v1, .L004372A8
/* 00437258 00000000 */   nop   
/* 0043725C 8CE9002C */  lw    $t1, 0x2c($a3)
/* 00437260 8CCB002C */  lw    $t3, 0x2c($a2)
/* 00437264 012B1826 */  xor   $v1, $t1, $t3
/* 00437268 2C630001 */  sltiu $v1, $v1, 1
/* 0043726C 1060000E */  beqz  $v1, .L004372A8
/* 00437270 00000000 */   nop   
/* 00437274 8CEC0028 */  lw    $t4, 0x28($a3)
/* 00437278 8CCE0028 */  lw    $t6, 0x28($a2)
/* 0043727C 018E1826 */  xor   $v1, $t4, $t6
/* 00437280 2C630001 */  sltiu $v1, $v1, 1
/* 00437284 10600008 */  beqz  $v1, .L004372A8
/* 00437288 00000000 */   nop   
/* 0043728C 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437290 8CC40000 */  lw    $a0, ($a2)
/* 00437294 8CE50000 */  lw    $a1, ($a3)
/* 00437298 0320F809 */  jalr  $t9
/* 0043729C 00000000 */   nop   
/* 004372A0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004372A4 00401825 */  move  $v1, $v0
.L004372A8:
/* 004372A8 1000029B */  b     .L00437D18
/* 004372AC A3A300BF */   sb    $v1, 0xbf($sp)
.L004372B0:
/* 004372B0 94ED0022 */  lhu   $t5, 0x22($a3)
/* 004372B4 94D80022 */  lhu   $t8, 0x22($a2)
/* 004372B8 01B87826 */  xor   $t7, $t5, $t8
/* 004372BC 2DEF0001 */  sltiu $t7, $t7, 1
/* 004372C0 10000295 */  b     .L00437D18
/* 004372C4 A3AF00BF */   sb    $t7, 0xbf($sp)
.L004372C8:
/* 004372C8 90F90021 */  lbu   $t9, 0x21($a3)
/* 004372CC 90CA0021 */  lbu   $t2, 0x21($a2)
/* 004372D0 3328001F */  andi  $t0, $t9, 0x1f
/* 004372D4 3149001F */  andi  $t1, $t2, 0x1f
/* 004372D8 01091826 */  xor   $v1, $t0, $t1
/* 004372DC 2C630001 */  sltiu $v1, $v1, 1
/* 004372E0 1060001D */  beqz  $v1, .L00437358
/* 004372E4 00000000 */   nop   
/* 004372E8 94EB0022 */  lhu   $t3, 0x22($a3)
/* 004372EC 94CC0022 */  lhu   $t4, 0x22($a2)
/* 004372F0 016C1826 */  xor   $v1, $t3, $t4
/* 004372F4 2C630001 */  sltiu $v1, $v1, 1
/* 004372F8 10600017 */  beqz  $v1, .L00437358
/* 004372FC 00000000 */   nop   
/* 00437300 8CEE0024 */  lw    $t6, 0x24($a3)
/* 00437304 8CCD0024 */  lw    $t5, 0x24($a2)
/* 00437308 01CD1826 */  xor   $v1, $t6, $t5
/* 0043730C 2C630001 */  sltiu $v1, $v1, 1
/* 00437310 10600011 */  beqz  $v1, .L00437358
/* 00437314 00000000 */   nop   
/* 00437318 90F80028 */  lbu   $t8, 0x28($a3)
/* 0043731C 90CF0028 */  lbu   $t7, 0x28($a2)
/* 00437320 030F1826 */  xor   $v1, $t8, $t7
/* 00437324 2C630001 */  sltiu $v1, $v1, 1
/* 00437328 1060000B */  beqz  $v1, .L00437358
/* 0043732C 00000000 */   nop   
/* 00437330 90F90029 */  lbu   $t9, 0x29($a3)
/* 00437334 90CA0029 */  lbu   $t2, 0x29($a2)
/* 00437338 032A1826 */  xor   $v1, $t9, $t2
/* 0043733C 2C630001 */  sltiu $v1, $v1, 1
/* 00437340 10600005 */  beqz  $v1, .L00437358
/* 00437344 00000000 */   nop   
/* 00437348 8CE8002C */  lw    $t0, 0x2c($a3)
/* 0043734C 8CC9002C */  lw    $t1, 0x2c($a2)
/* 00437350 01091826 */  xor   $v1, $t0, $t1
/* 00437354 2C630001 */  sltiu $v1, $v1, 1
.L00437358:
/* 00437358 1000026F */  b     .L00437D18
/* 0043735C A3A300BF */   sb    $v1, 0xbf($sp)
/* 00437360 90EB0021 */  lbu   $t3, 0x21($a3)
.L00437364:
/* 00437364 90CE0021 */  lbu   $t6, 0x21($a2)
/* 00437368 316C001F */  andi  $t4, $t3, 0x1f
/* 0043736C 31CD001F */  andi  $t5, $t6, 0x1f
/* 00437370 018D1826 */  xor   $v1, $t4, $t5
/* 00437374 2C630001 */  sltiu $v1, $v1, 1
/* 00437378 10600017 */  beqz  $v1, .L004373D8
/* 0043737C 00000000 */   nop   
/* 00437380 8CF80024 */  lw    $t8, 0x24($a3)
/* 00437384 8CCF0024 */  lw    $t7, 0x24($a2)
/* 00437388 030F1826 */  xor   $v1, $t8, $t7
/* 0043738C 2C630001 */  sltiu $v1, $v1, 1
/* 00437390 10600011 */  beqz  $v1, .L004373D8
/* 00437394 00000000 */   nop   
/* 00437398 90F90028 */  lbu   $t9, 0x28($a3)
/* 0043739C 90CA0028 */  lbu   $t2, 0x28($a2)
/* 004373A0 032A1826 */  xor   $v1, $t9, $t2
/* 004373A4 2C630001 */  sltiu $v1, $v1, 1
/* 004373A8 1060000B */  beqz  $v1, .L004373D8
/* 004373AC 00000000 */   nop   
/* 004373B0 90E80029 */  lbu   $t0, 0x29($a3)
/* 004373B4 90C90029 */  lbu   $t1, 0x29($a2)
/* 004373B8 01091826 */  xor   $v1, $t0, $t1
/* 004373BC 2C630001 */  sltiu $v1, $v1, 1
/* 004373C0 10600005 */  beqz  $v1, .L004373D8
/* 004373C4 00000000 */   nop   
/* 004373C8 8CEB002C */  lw    $t3, 0x2c($a3)
/* 004373CC 8CCE002C */  lw    $t6, 0x2c($a2)
/* 004373D0 016E1826 */  xor   $v1, $t3, $t6
/* 004373D4 2C630001 */  sltiu $v1, $v1, 1
.L004373D8:
/* 004373D8 1000024F */  b     .L00437D18
/* 004373DC A3A300BF */   sb    $v1, 0xbf($sp)
.L004373E0:
/* 004373E0 90EC0021 */  lbu   $t4, 0x21($a3)
/* 004373E4 90D80021 */  lbu   $t8, 0x21($a2)
/* 004373E8 318D001F */  andi  $t5, $t4, 0x1f
/* 004373EC 330F001F */  andi  $t7, $t8, 0x1f
/* 004373F0 01AF1826 */  xor   $v1, $t5, $t7
/* 004373F4 2C630001 */  sltiu $v1, $v1, 1
/* 004373F8 1060001A */  beqz  $v1, .L00437464
/* 004373FC 00000000 */   nop   
/* 00437400 90F90028 */  lbu   $t9, 0x28($a3)
/* 00437404 90CA0028 */  lbu   $t2, 0x28($a2)
/* 00437408 032A1826 */  xor   $v1, $t9, $t2
/* 0043740C 2C630001 */  sltiu $v1, $v1, 1
/* 00437410 10600014 */  beqz  $v1, .L00437464
/* 00437414 00000000 */   nop   
/* 00437418 90E80029 */  lbu   $t0, 0x29($a3)
/* 0043741C 90C90029 */  lbu   $t1, 0x29($a2)
/* 00437420 01091826 */  xor   $v1, $t0, $t1
/* 00437424 2C630001 */  sltiu $v1, $v1, 1
/* 00437428 1060000E */  beqz  $v1, .L00437464
/* 0043742C 00000000 */   nop   
/* 00437430 8CEB002C */  lw    $t3, 0x2c($a3)
/* 00437434 8CCE002C */  lw    $t6, 0x2c($a2)
/* 00437438 016E1826 */  xor   $v1, $t3, $t6
/* 0043743C 2C630001 */  sltiu $v1, $v1, 1
/* 00437440 10600008 */  beqz  $v1, .L00437464
/* 00437444 00000000 */   nop   
/* 00437448 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 0043744C 8CC40000 */  lw    $a0, ($a2)
/* 00437450 8CE50000 */  lw    $a1, ($a3)
/* 00437454 0320F809 */  jalr  $t9
/* 00437458 00000000 */   nop   
/* 0043745C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437460 00401825 */  move  $v1, $v0
.L00437464:
/* 00437464 1000022C */  b     .L00437D18
/* 00437468 A3A300BF */   sb    $v1, 0xbf($sp)
.L0043746C:
/* 0043746C 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437470 8CC40000 */  lw    $a0, ($a2)
/* 00437474 8CE50000 */  lw    $a1, ($a3)
/* 00437478 0320F809 */  jalr  $t9
/* 0043747C 00000000 */   nop   
/* 00437480 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437484 10000224 */  b     .L00437D18
/* 00437488 A3A200BF */   sb    $v0, 0xbf($sp)
.L0043748C:
/* 0043748C 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437490 8CC40004 */  lw    $a0, 4($a2)
/* 00437494 8CE50004 */  lw    $a1, 4($a3)
/* 00437498 0320F809 */  jalr  $t9
/* 0043749C 00000000 */   nop   
/* 004374A0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004374A4 1000021C */  b     .L00437D18
/* 004374A8 A3A200BF */   sb    $v0, 0xbf($sp)
.L004374AC:
/* 004374AC 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 004374B0 8CC40000 */  lw    $a0, ($a2)
/* 004374B4 8CE50000 */  lw    $a1, ($a3)
/* 004374B8 0320F809 */  jalr  $t9
/* 004374BC 00000000 */   nop   
/* 004374C0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004374C4 10000214 */  b     .L00437D18
/* 004374C8 A3A200BF */   sb    $v0, 0xbf($sp)
.L004374CC:
/* 004374CC 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 004374D0 8CC40000 */  lw    $a0, ($a2)
/* 004374D4 8CE50000 */  lw    $a1, ($a3)
/* 004374D8 0320F809 */  jalr  $t9
/* 004374DC 00000000 */   nop   
/* 004374E0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004374E4 1000020C */  b     .L00437D18
/* 004374E8 A3A200BF */   sb    $v0, 0xbf($sp)
.L004374EC:
/* 004374EC 8F998698 */  lw    $t9, %call16(const_equal)($gp)
/* 004374F0 00C02025 */  move  $a0, $a2
/* 004374F4 00E02825 */  move  $a1, $a3
/* 004374F8 0320F809 */  jalr  $t9
/* 004374FC AFA600C0 */   sw    $a2, 0xc0($sp)
/* 00437500 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 00437504 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437508 A3A200BF */  sb    $v0, 0xbf($sp)
/* 0043750C 8CCC0030 */  lw    $t4, 0x30($a2)
/* 00437510 15800201 */  bnez  $t4, .L00437D18
/* 00437514 00000000 */   nop   
/* 00437518 100001FF */  b     .L00437D18
/* 0043751C AFA000B8 */   sw    $zero, 0xb8($sp)
.L00437520:
/* 00437520 90F80021 */  lbu   $t8, 0x21($a3)
/* 00437524 90CF0021 */  lbu   $t7, 0x21($a2)
/* 00437528 330D001F */  andi  $t5, $t8, 0x1f
/* 0043752C 31F9001F */  andi  $t9, $t7, 0x1f
/* 00437530 01B91826 */  xor   $v1, $t5, $t9
/* 00437534 2C630001 */  sltiu $v1, $v1, 1
/* 00437538 1060001A */  beqz  $v1, .L004375A4
/* 0043753C 00000000 */   nop   
/* 00437540 8CEA002C */  lw    $t2, 0x2c($a3)
/* 00437544 8CC8002C */  lw    $t0, 0x2c($a2)
/* 00437548 01481826 */  xor   $v1, $t2, $t0
/* 0043754C 2C630001 */  sltiu $v1, $v1, 1
/* 00437550 10600014 */  beqz  $v1, .L004375A4
/* 00437554 00000000 */   nop   
/* 00437558 8CE90028 */  lw    $t1, 0x28($a3)
/* 0043755C 8CCB0028 */  lw    $t3, 0x28($a2)
/* 00437560 012B1826 */  xor   $v1, $t1, $t3
/* 00437564 2C630001 */  sltiu $v1, $v1, 1
/* 00437568 1060000E */  beqz  $v1, .L004375A4
/* 0043756C 00000000 */   nop   
/* 00437570 94EE0022 */  lhu   $t6, 0x22($a3)
/* 00437574 94CC0022 */  lhu   $t4, 0x22($a2)
/* 00437578 01CC1826 */  xor   $v1, $t6, $t4
/* 0043757C 2C630001 */  sltiu $v1, $v1, 1
/* 00437580 10600008 */  beqz  $v1, .L004375A4
/* 00437584 00000000 */   nop   
/* 00437588 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 0043758C 8CC40000 */  lw    $a0, ($a2)
/* 00437590 8CE50000 */  lw    $a1, ($a3)
/* 00437594 0320F809 */  jalr  $t9
/* 00437598 00000000 */   nop   
/* 0043759C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004375A0 00401825 */  move  $v1, $v0
.L004375A4:
/* 004375A4 100001DC */  b     .L00437D18
/* 004375A8 A3A300BF */   sb    $v1, 0xbf($sp)
.L004375AC:
/* 004375AC 90F80021 */  lbu   $t8, 0x21($a3)
/* 004375B0 90CD0021 */  lbu   $t5, 0x21($a2)
/* 004375B4 330F001F */  andi  $t7, $t8, 0x1f
/* 004375B8 31B9001F */  andi  $t9, $t5, 0x1f
/* 004375BC 01F91826 */  xor   $v1, $t7, $t9
/* 004375C0 2C630001 */  sltiu $v1, $v1, 1
/* 004375C4 10600025 */  beqz  $v1, .L0043765C
/* 004375C8 00000000 */   nop   
/* 004375CC 8CEA002C */  lw    $t2, 0x2c($a3)
/* 004375D0 8CC8002C */  lw    $t0, 0x2c($a2)
/* 004375D4 01481826 */  xor   $v1, $t2, $t0
/* 004375D8 2C630001 */  sltiu $v1, $v1, 1
/* 004375DC 1060001F */  beqz  $v1, .L0043765C
/* 004375E0 00000000 */   nop   
/* 004375E4 8CE90028 */  lw    $t1, 0x28($a3)
/* 004375E8 8CCB0028 */  lw    $t3, 0x28($a2)
/* 004375EC 012B1826 */  xor   $v1, $t1, $t3
/* 004375F0 2C630001 */  sltiu $v1, $v1, 1
/* 004375F4 10600019 */  beqz  $v1, .L0043765C
/* 004375F8 00000000 */   nop   
/* 004375FC 94EE0022 */  lhu   $t6, 0x22($a3)
/* 00437600 94CC0022 */  lhu   $t4, 0x22($a2)
/* 00437604 01CC1826 */  xor   $v1, $t6, $t4
/* 00437608 2C630001 */  sltiu $v1, $v1, 1
/* 0043760C 10600013 */  beqz  $v1, .L0043765C
/* 00437610 00000000 */   nop   
/* 00437614 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437618 8CC40000 */  lw    $a0, ($a2)
/* 0043761C 8CE50000 */  lw    $a1, ($a3)
/* 00437620 AFA600C0 */  sw    $a2, 0xc0($sp)
/* 00437624 0320F809 */  jalr  $t9
/* 00437628 AFA700C4 */   sw    $a3, 0xc4($sp)
/* 0043762C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437630 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 00437634 8FA700C4 */  lw    $a3, 0xc4($sp)
/* 00437638 10400008 */  beqz  $v0, .L0043765C
/* 0043763C 00401825 */   move  $v1, $v0
/* 00437640 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437644 8CC40004 */  lw    $a0, 4($a2)
/* 00437648 8CE50004 */  lw    $a1, 4($a3)
/* 0043764C 0320F809 */  jalr  $t9
/* 00437650 00000000 */   nop   
/* 00437654 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437658 00401825 */  move  $v1, $v0
.L0043765C:
/* 0043765C 100001AE */  b     .L00437D18
/* 00437660 A3A300BF */   sb    $v1, 0xbf($sp)
.L00437664:
/* 00437664 90E20021 */  lbu   $v0, 0x21($a3)
/* 00437668 90C40021 */  lbu   $a0, 0x21($a2)
/* 0043766C 3058001F */  andi  $t8, $v0, 0x1f
/* 00437670 308D001F */  andi  $t5, $a0, 0x1f
/* 00437674 030D1826 */  xor   $v1, $t8, $t5
/* 00437678 2C630001 */  sltiu $v1, $v1, 1
/* 0043767C 10600027 */  beqz  $v1, .L0043771C
/* 00437680 00027E00 */   sll   $t7, $v0, 0x18
/* 00437684 00045600 */  sll   $t2, $a0, 0x18
/* 00437688 000A4742 */  srl   $t0, $t2, 0x1d
/* 0043768C 000FCF42 */  srl   $t9, $t7, 0x1d
/* 00437690 03281826 */  xor   $v1, $t9, $t0
/* 00437694 2C630001 */  sltiu $v1, $v1, 1
/* 00437698 10600020 */  beqz  $v1, .L0043771C
/* 0043769C 00000000 */   nop   
/* 004376A0 8CE90024 */  lw    $t1, 0x24($a3)
/* 004376A4 8CCB0024 */  lw    $t3, 0x24($a2)
/* 004376A8 012B1826 */  xor   $v1, $t1, $t3
/* 004376AC 2C630001 */  sltiu $v1, $v1, 1
/* 004376B0 1060001A */  beqz  $v1, .L0043771C
/* 004376B4 00000000 */   nop   
/* 004376B8 8CEE002C */  lw    $t6, 0x2c($a3)
/* 004376BC 8CCC002C */  lw    $t4, 0x2c($a2)
/* 004376C0 01CC1826 */  xor   $v1, $t6, $t4
/* 004376C4 2C630001 */  sltiu $v1, $v1, 1
/* 004376C8 10600014 */  beqz  $v1, .L0043771C
/* 004376CC 00000000 */   nop   
/* 004376D0 8CF80028 */  lw    $t8, 0x28($a3)
/* 004376D4 8CCD0028 */  lw    $t5, 0x28($a2)
/* 004376D8 030D1826 */  xor   $v1, $t8, $t5
/* 004376DC 2C630001 */  sltiu $v1, $v1, 1
/* 004376E0 1060000E */  beqz  $v1, .L0043771C
/* 004376E4 00000000 */   nop   
/* 004376E8 94EF0022 */  lhu   $t7, 0x22($a3)
/* 004376EC 94CA0022 */  lhu   $t2, 0x22($a2)
/* 004376F0 01EA1826 */  xor   $v1, $t7, $t2
/* 004376F4 2C630001 */  sltiu $v1, $v1, 1
/* 004376F8 10600008 */  beqz  $v1, .L0043771C
/* 004376FC 00000000 */   nop   
/* 00437700 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437704 8CC40000 */  lw    $a0, ($a2)
/* 00437708 8CE50000 */  lw    $a1, ($a3)
/* 0043770C 0320F809 */  jalr  $t9
/* 00437710 00000000 */   nop   
/* 00437714 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437718 00401825 */  move  $v1, $v0
.L0043771C:
/* 0043771C 1000017E */  b     .L00437D18
/* 00437720 A3A300BF */   sb    $v1, 0xbf($sp)
.L00437724:
/* 00437724 90E20021 */  lbu   $v0, 0x21($a3)
/* 00437728 90C40021 */  lbu   $a0, 0x21($a2)
/* 0043772C 3059001F */  andi  $t9, $v0, 0x1f
/* 00437730 3088001F */  andi  $t0, $a0, 0x1f
/* 00437734 03281826 */  xor   $v1, $t9, $t0
/* 00437738 2C630001 */  sltiu $v1, $v1, 1
/* 0043773C 10600032 */  beqz  $v1, .L00437808
/* 00437740 00024E00 */   sll   $t1, $v0, 0x18
/* 00437744 00047600 */  sll   $t6, $a0, 0x18
/* 00437748 000E6742 */  srl   $t4, $t6, 0x1d
/* 0043774C 00095F42 */  srl   $t3, $t1, 0x1d
/* 00437750 016C1826 */  xor   $v1, $t3, $t4
/* 00437754 2C630001 */  sltiu $v1, $v1, 1
/* 00437758 1060002B */  beqz  $v1, .L00437808
/* 0043775C 00000000 */   nop   
/* 00437760 8CF80024 */  lw    $t8, 0x24($a3)
/* 00437764 8CCD0024 */  lw    $t5, 0x24($a2)
/* 00437768 030D1826 */  xor   $v1, $t8, $t5
/* 0043776C 2C630001 */  sltiu $v1, $v1, 1
/* 00437770 10600025 */  beqz  $v1, .L00437808
/* 00437774 00000000 */   nop   
/* 00437778 8CEF002C */  lw    $t7, 0x2c($a3)
/* 0043777C 8CCA002C */  lw    $t2, 0x2c($a2)
/* 00437780 01EA1826 */  xor   $v1, $t7, $t2
/* 00437784 2C630001 */  sltiu $v1, $v1, 1
/* 00437788 1060001F */  beqz  $v1, .L00437808
/* 0043778C 00000000 */   nop   
/* 00437790 8CF90028 */  lw    $t9, 0x28($a3)
/* 00437794 8CC80028 */  lw    $t0, 0x28($a2)
/* 00437798 03281826 */  xor   $v1, $t9, $t0
/* 0043779C 2C630001 */  sltiu $v1, $v1, 1
/* 004377A0 10600019 */  beqz  $v1, .L00437808
/* 004377A4 00000000 */   nop   
/* 004377A8 94E90022 */  lhu   $t1, 0x22($a3)
/* 004377AC 94CE0022 */  lhu   $t6, 0x22($a2)
/* 004377B0 012E1826 */  xor   $v1, $t1, $t6
/* 004377B4 2C630001 */  sltiu $v1, $v1, 1
/* 004377B8 10600013 */  beqz  $v1, .L00437808
/* 004377BC 00000000 */   nop   
/* 004377C0 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 004377C4 8CC40000 */  lw    $a0, ($a2)
/* 004377C8 8CE50000 */  lw    $a1, ($a3)
/* 004377CC AFA600C0 */  sw    $a2, 0xc0($sp)
/* 004377D0 0320F809 */  jalr  $t9
/* 004377D4 AFA700C4 */   sw    $a3, 0xc4($sp)
/* 004377D8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004377DC 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 004377E0 8FA700C4 */  lw    $a3, 0xc4($sp)
/* 004377E4 10400008 */  beqz  $v0, .L00437808
/* 004377E8 00401825 */   move  $v1, $v0
/* 004377EC 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 004377F0 8CC40004 */  lw    $a0, 4($a2)
/* 004377F4 8CE50004 */  lw    $a1, 4($a3)
/* 004377F8 0320F809 */  jalr  $t9
/* 004377FC 00000000 */   nop   
/* 00437800 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437804 00401825 */  move  $v1, $v0
.L00437808:
/* 00437808 10000143 */  b     .L00437D18
/* 0043780C A3A300BF */   sb    $v1, 0xbf($sp)
.L00437810:
/* 00437810 90EB0021 */  lbu   $t3, 0x21($a3)
/* 00437814 90CD0021 */  lbu   $t5, 0x21($a2)
/* 00437818 000B6600 */  sll   $t4, $t3, 0x18
/* 0043781C 000D7E00 */  sll   $t7, $t5, 0x18
/* 00437820 000F5742 */  srl   $t2, $t7, 0x1d
/* 00437824 000CC742 */  srl   $t8, $t4, 0x1d
/* 00437828 030A1826 */  xor   $v1, $t8, $t2
/* 0043782C 2C630001 */  sltiu $v1, $v1, 1
/* 00437830 10600017 */  beqz  $v1, .L00437890
/* 00437834 00000000 */   nop   
/* 00437838 8CF90024 */  lw    $t9, 0x24($a3)
/* 0043783C 8CC80024 */  lw    $t0, 0x24($a2)
/* 00437840 03281826 */  xor   $v1, $t9, $t0
/* 00437844 2C630001 */  sltiu $v1, $v1, 1
/* 00437848 10600011 */  beqz  $v1, .L00437890
/* 0043784C 00000000 */   nop   
/* 00437850 8CE9002C */  lw    $t1, 0x2c($a3)
/* 00437854 8CCE002C */  lw    $t6, 0x2c($a2)
/* 00437858 012E1826 */  xor   $v1, $t1, $t6
/* 0043785C 2C630001 */  sltiu $v1, $v1, 1
/* 00437860 1060000B */  beqz  $v1, .L00437890
/* 00437864 00000000 */   nop   
/* 00437868 8CEB0028 */  lw    $t3, 0x28($a3)
/* 0043786C 8CCC0028 */  lw    $t4, 0x28($a2)
/* 00437870 016C1826 */  xor   $v1, $t3, $t4
/* 00437874 2C630001 */  sltiu $v1, $v1, 1
/* 00437878 10600005 */  beqz  $v1, .L00437890
/* 0043787C 00000000 */   nop   
/* 00437880 8CED0030 */  lw    $t5, 0x30($a3)
/* 00437884 8CCF0030 */  lw    $t7, 0x30($a2)
/* 00437888 01AF1826 */  xor   $v1, $t5, $t7
/* 0043788C 2C630001 */  sltiu $v1, $v1, 1
.L00437890:
/* 00437890 10000121 */  b     .L00437D18
/* 00437894 A3A300BF */   sb    $v1, 0xbf($sp)
.L00437898:
/* 00437898 1000011F */  b     .L00437D18
/* 0043789C A3A000BF */   sb    $zero, 0xbf($sp)
.L004378A0:
/* 004378A0 90F80021 */  lbu   $t8, 0x21($a3)
/* 004378A4 90D90021 */  lbu   $t9, 0x21($a2)
/* 004378A8 330A001F */  andi  $t2, $t8, 0x1f
/* 004378AC 3328001F */  andi  $t0, $t9, 0x1f
/* 004378B0 01481826 */  xor   $v1, $t2, $t0
/* 004378B4 2C630001 */  sltiu $v1, $v1, 1
/* 004378B8 10600008 */  beqz  $v1, .L004378DC
/* 004378BC 00000000 */   nop   
/* 004378C0 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 004378C4 8CC40000 */  lw    $a0, ($a2)
/* 004378C8 8CE50000 */  lw    $a1, ($a3)
/* 004378CC 0320F809 */  jalr  $t9
/* 004378D0 00000000 */   nop   
/* 004378D4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004378D8 00401825 */  move  $v1, $v0
.L004378DC:
/* 004378DC 1000010E */  b     .L00437D18
/* 004378E0 A3A300BF */   sb    $v1, 0xbf($sp)
.L004378E4:
/* 004378E4 90E90021 */  lbu   $t1, 0x21($a3)
.L004378E8:
/* 004378E8 90CB0021 */  lbu   $t3, 0x21($a2)
/* 004378EC 312E001F */  andi  $t6, $t1, 0x1f
/* 004378F0 316C001F */  andi  $t4, $t3, 0x1f
/* 004378F4 01CC1826 */  xor   $v1, $t6, $t4
/* 004378F8 2C630001 */  sltiu $v1, $v1, 1
/* 004378FC 10600013 */  beqz  $v1, .L0043794C
/* 00437900 00000000 */   nop   
/* 00437904 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437908 8CC40000 */  lw    $a0, ($a2)
/* 0043790C 8CE50000 */  lw    $a1, ($a3)
/* 00437910 AFA600C0 */  sw    $a2, 0xc0($sp)
/* 00437914 0320F809 */  jalr  $t9
/* 00437918 AFA700C4 */   sw    $a3, 0xc4($sp)
/* 0043791C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437920 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 00437924 8FA700C4 */  lw    $a3, 0xc4($sp)
/* 00437928 10400008 */  beqz  $v0, .L0043794C
/* 0043792C 00401825 */   move  $v1, $v0
/* 00437930 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437934 8CC40004 */  lw    $a0, 4($a2)
/* 00437938 8CE50004 */  lw    $a1, 4($a3)
/* 0043793C 0320F809 */  jalr  $t9
/* 00437940 00000000 */   nop   
/* 00437944 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437948 00401825 */  move  $v1, $v0
.L0043794C:
/* 0043794C 100000F2 */  b     .L00437D18
/* 00437950 A3A300BF */   sb    $v1, 0xbf($sp)
.L00437954:
/* 00437954 90ED0021 */  lbu   $t5, 0x21($a3)
/* 00437958 90D80021 */  lbu   $t8, 0x21($a2)
/* 0043795C 31AF001F */  andi  $t7, $t5, 0x1f
/* 00437960 3319001F */  andi  $t9, $t8, 0x1f
/* 00437964 01F91826 */  xor   $v1, $t7, $t9
/* 00437968 2C630001 */  sltiu $v1, $v1, 1
/* 0043796C 1060000E */  beqz  $v1, .L004379A8
/* 00437970 00000000 */   nop   
/* 00437974 90EA0028 */  lbu   $t2, 0x28($a3)
/* 00437978 90C80028 */  lbu   $t0, 0x28($a2)
/* 0043797C 01481826 */  xor   $v1, $t2, $t0
/* 00437980 2C630001 */  sltiu $v1, $v1, 1
/* 00437984 10600008 */  beqz  $v1, .L004379A8
/* 00437988 00000000 */   nop   
/* 0043798C 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437990 8CC40000 */  lw    $a0, ($a2)
/* 00437994 8CE50004 */  lw    $a1, 4($a3)
/* 00437998 0320F809 */  jalr  $t9
/* 0043799C 00000000 */   nop   
/* 004379A0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004379A4 00401825 */  move  $v1, $v0
.L004379A8:
/* 004379A8 100000DB */  b     .L00437D18
/* 004379AC A3A300BF */   sb    $v1, 0xbf($sp)
.L004379B0:
/* 004379B0 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 004379B4 8CC40000 */  lw    $a0, ($a2)
/* 004379B8 8CE50000 */  lw    $a1, ($a3)
/* 004379BC 0320F809 */  jalr  $t9
/* 004379C0 00000000 */   nop   
/* 004379C4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004379C8 100000D3 */  b     .L00437D18
/* 004379CC A3A200BF */   sb    $v0, 0xbf($sp)
.L004379D0:
/* 004379D0 90E90021 */  lbu   $t1, 0x21($a3)
/* 004379D4 90CE0021 */  lbu   $t6, 0x21($a2)
/* 004379D8 312B001F */  andi  $t3, $t1, 0x1f
/* 004379DC 31CC001F */  andi  $t4, $t6, 0x1f
/* 004379E0 016C1826 */  xor   $v1, $t3, $t4
/* 004379E4 2C630001 */  sltiu $v1, $v1, 1
/* 004379E8 1060000E */  beqz  $v1, .L00437A24
/* 004379EC 00000000 */   nop   
/* 004379F0 8CED0028 */  lw    $t5, 0x28($a3)
/* 004379F4 8CD80028 */  lw    $t8, 0x28($a2)
/* 004379F8 01B81826 */  xor   $v1, $t5, $t8
/* 004379FC 2C630001 */  sltiu $v1, $v1, 1
/* 00437A00 10600008 */  beqz  $v1, .L00437A24
/* 00437A04 00000000 */   nop   
/* 00437A08 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437A0C 8CC40000 */  lw    $a0, ($a2)
/* 00437A10 8CE50000 */  lw    $a1, ($a3)
/* 00437A14 0320F809 */  jalr  $t9
/* 00437A18 00000000 */   nop   
/* 00437A1C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437A20 00401825 */  move  $v1, $v0
.L00437A24:
/* 00437A24 100000BC */  b     .L00437D18
/* 00437A28 A3A300BF */   sb    $v1, 0xbf($sp)
.L00437A2C:
/* 00437A2C 8CEF0024 */  lw    $t7, 0x24($a3)
/* 00437A30 8CD90024 */  lw    $t9, 0x24($a2)
/* 00437A34 01F91826 */  xor   $v1, $t7, $t9
/* 00437A38 2C630001 */  sltiu $v1, $v1, 1
/* 00437A3C 10600019 */  beqz  $v1, .L00437AA4
/* 00437A40 00000000 */   nop   
/* 00437A44 8CEA0028 */  lw    $t2, 0x28($a3)
/* 00437A48 8CC80028 */  lw    $t0, 0x28($a2)
/* 00437A4C 01481826 */  xor   $v1, $t2, $t0
/* 00437A50 2C630001 */  sltiu $v1, $v1, 1
/* 00437A54 10600013 */  beqz  $v1, .L00437AA4
/* 00437A58 00000000 */   nop   
/* 00437A5C 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437A60 8CC40000 */  lw    $a0, ($a2)
/* 00437A64 8CE50000 */  lw    $a1, ($a3)
/* 00437A68 AFA600C0 */  sw    $a2, 0xc0($sp)
/* 00437A6C 0320F809 */  jalr  $t9
/* 00437A70 AFA700C4 */   sw    $a3, 0xc4($sp)
/* 00437A74 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437A78 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 00437A7C 8FA700C4 */  lw    $a3, 0xc4($sp)
/* 00437A80 10400008 */  beqz  $v0, .L00437AA4
/* 00437A84 00401825 */   move  $v1, $v0
/* 00437A88 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00437A8C 8CC40004 */  lw    $a0, 4($a2)
/* 00437A90 8CE50004 */  lw    $a1, 4($a3)
/* 00437A94 0320F809 */  jalr  $t9
/* 00437A98 00000000 */   nop   
/* 00437A9C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00437AA0 00401825 */  move  $v1, $v0
.L00437AA4:
/* 00437AA4 1000009C */  b     .L00437D18
/* 00437AA8 A3A300BF */   sb    $v1, 0xbf($sp)
.L00437AAC:
/* 00437AAC 1000009A */  b     .L00437D18
/* 00437AB0 A3A000BF */   sb    $zero, 0xbf($sp)
.L00437AB4:
/* 00437AB4 24090001 */  li    $t1, 1
/* 00437AB8 10000097 */  b     .L00437D18
/* 00437ABC A3A900BF */   sb    $t1, 0xbf($sp)
.L00437AC0:
/* 00437AC0 2C41001E */  sltiu $at, $v0, 0x1e
/* 00437AC4 14200018 */  bnez  $at, .L00437B28
/* 00437AC8 2C410080 */   sltiu $at, $v0, 0x80
/* 00437ACC 14200008 */  bnez  $at, .L00437AF0
/* 00437AD0 2C41008E */   sltiu $at, $v0, 0x8e
/* 00437AD4 14200086 */  bnez  $at, .L00437CF0
/* 00437AD8 2458FF7A */   addiu $t8, $v0, -0x86
/* 00437ADC 24010097 */  li    $at, 151
/* 00437AE0 5041FE20 */  beql  $v0, $at, .L00437364
/* 00437AE4 90EB0021 */   lbu   $t3, 0x21($a3)
/* 00437AE8 10000038 */  b     .L00437BCC
/* 00437AEC 00000000 */   nop   
.L00437AF0:
/* 00437AF0 2C410075 */  sltiu $at, $v0, 0x75
/* 00437AF4 10200074 */  beqz  $at, .L00437CC8
/* 00437AF8 2448FF85 */   addiu $t0, $v0, -0x7b
/* 00437AFC 244EFFDD */  addiu $t6, $v0, -0x23
/* 00437B00 2DC10052 */  sltiu $at, $t6, 0x52
/* 00437B04 10200031 */  beqz  $at, .L00437BCC
/* 00437B08 00000000 */   nop   
/* 00437B0C 8F818038 */  lw    $at, %got(jtbl_1000B3AC)($gp)
/* 00437B10 000E7080 */  sll   $t6, $t6, 2
/* 00437B14 002E0821 */  addu  $at, $at, $t6
/* 00437B18 8C2EB3AC */  lw    $t6, %lo(jtbl_1000B3AC)($at)
/* 00437B1C 01DC7021 */  addu  $t6, $t6, $gp
/* 00437B20 01C00008 */  jr    $t6
/* 00437B24 00000000 */   nop   
.L00437B28:
/* 00437B28 2C410012 */  sltiu $at, $v0, 0x12
/* 00437B2C 1420000D */  bnez  $at, .L00437B64
/* 00437B30 2C410019 */   sltiu $at, $v0, 0x19
/* 00437B34 10200022 */  beqz  $at, .L00437BC0
/* 00437B38 244BFFE9 */   addiu $t3, $v0, -0x17
/* 00437B3C 2D610002 */  sltiu $at, $t3, 2
/* 00437B40 10200022 */  beqz  $at, .L00437BCC
/* 00437B44 00000000 */   nop   
/* 00437B48 8F818038 */  lw    $at, %got(jtbl_1000B3A4)($gp)
/* 00437B4C 000B5880 */  sll   $t3, $t3, 2
/* 00437B50 002B0821 */  addu  $at, $at, $t3
/* 00437B54 8C2BB3A4 */  lw    $t3, %lo(jtbl_1000B3A4)($at)
/* 00437B58 017C5821 */  addu  $t3, $t3, $gp
/* 00437B5C 01600008 */  jr    $t3
/* 00437B60 00000000 */   nop   
.L00437B64:
/* 00437B64 2C410005 */  sltiu $at, $v0, 5
/* 00437B68 1020000B */  beqz  $at, .L00437B98
/* 00437B6C 244DFFF6 */   addiu $t5, $v0, -0xa
/* 00437B70 2C410005 */  sltiu $at, $v0, 5
/* 00437B74 10200015 */  beqz  $at, .L00437BCC
/* 00437B78 00000000 */   nop   
/* 00437B7C 8F818038 */  lw    $at, %got(jtbl_1000B370)($gp)
/* 00437B80 00026080 */  sll   $t4, $v0, 2
/* 00437B84 002C0821 */  addu  $at, $at, $t4
/* 00437B88 8C2CB370 */  lw    $t4, %lo(jtbl_1000B370)($at)
/* 00437B8C 019C6021 */  addu  $t4, $t4, $gp
/* 00437B90 01800008 */  jr    $t4
/* 00437B94 00000000 */   nop   
.L00437B98:
/* 00437B98 2DA10008 */  sltiu $at, $t5, 8
/* 00437B9C 1020000B */  beqz  $at, .L00437BCC
/* 00437BA0 00000000 */   nop   
/* 00437BA4 8F818038 */  lw    $at, %got(jtbl_1000B384)($gp)
/* 00437BA8 000D6880 */  sll   $t5, $t5, 2
/* 00437BAC 002D0821 */  addu  $at, $at, $t5
/* 00437BB0 8C2DB384 */  lw    $t5, %lo(jtbl_1000B384)($at)
/* 00437BB4 01BC6821 */  addu  $t5, $t5, $gp
/* 00437BB8 01A00008 */  jr    $t5
/* 00437BBC 00000000 */   nop   
.L00437BC0:
/* 00437BC0 2401001D */  li    $at, 29
/* 00437BC4 5041FF48 */  beql  $v0, $at, .L004378E8
/* 00437BC8 90E90021 */   lbu   $t1, 0x21($a3)
.L00437BCC:
/* 00437BCC 8F988038 */  lw    $t8, %got(RO_1000B320)($gp)
/* 00437BD0 24040004 */  li    $a0, 4
/* 00437BD4 240500F7 */  li    $a1, 247
/* 00437BD8 2718B320 */  addiu $t8, %lo(RO_1000B320) # addiu $t8, $t8, -0x4ce0
/* 00437BDC 27080048 */  addiu $t0, $t8, 0x48
/* 00437BE0 03A05025 */  move  $t2, $sp
.L00437BE4:
/* 00437BE4 8B190000 */  lwl   $t9, ($t8)
/* 00437BE8 9B190003 */  lwr   $t9, 3($t8)
/* 00437BEC 2718000C */  addiu $t8, $t8, 0xc
/* 00437BF0 254A000C */  addiu $t2, $t2, 0xc
/* 00437BF4 A959FFFC */  swl   $t9, -4($t2)
/* 00437BF8 B959FFFF */  swr   $t9, -1($t2)
/* 00437BFC 8B0FFFF8 */  lwl   $t7, -8($t8)
/* 00437C00 9B0FFFFB */  lwr   $t7, -5($t8)
/* 00437C04 A94F0000 */  swl   $t7, ($t2)
/* 00437C08 B94F0003 */  swr   $t7, 3($t2)
/* 00437C0C 8B19FFFC */  lwl   $t9, -4($t8)
/* 00437C10 9B19FFFF */  lwr   $t9, -1($t8)
/* 00437C14 A9590004 */  swl   $t9, 4($t2)
/* 00437C18 1708FFF2 */  bne   $t8, $t0, .L00437BE4
/* 00437C1C B9590007 */   swr   $t9, 7($t2)
/* 00437C20 8B190000 */  lwl   $t9, ($t8)
/* 00437C24 9B190003 */  lwr   $t9, 3($t8)
/* 00437C28 8F898038 */  lw    $t1, %got(RO_1000B2D0)($gp)
/* 00437C2C 03A06025 */  move  $t4, $sp
/* 00437C30 A9590008 */  swl   $t9, 8($t2)
/* 00437C34 B959000B */  swr   $t9, 0xb($t2)
/* 00437C38 8B0F0004 */  lwl   $t7, 4($t8)
/* 00437C3C 9B0F0007 */  lwr   $t7, 7($t8)
/* 00437C40 2529B2D0 */  addiu $t1, %lo(RO_1000B2D0) # addiu $t1, $t1, -0x4d30
/* 00437C44 252D0048 */  addiu $t5, $t1, 0x48
/* 00437C48 A94F000C */  swl   $t7, 0xc($t2)
/* 00437C4C B94F000F */  swr   $t7, 0xf($t2)
.L00437C50:
/* 00437C50 892B0000 */  lwl   $t3, ($t1)
/* 00437C54 992B0003 */  lwr   $t3, 3($t1)
/* 00437C58 2529000C */  addiu $t1, $t1, 0xc
/* 00437C5C 258C000C */  addiu $t4, $t4, 0xc
/* 00437C60 A98B004C */  swl   $t3, 0x4c($t4)
/* 00437C64 B98B004F */  swr   $t3, 0x4f($t4)
/* 00437C68 892EFFF8 */  lwl   $t6, -8($t1)
/* 00437C6C 992EFFFB */  lwr   $t6, -5($t1)
/* 00437C70 A98E0050 */  swl   $t6, 0x50($t4)
/* 00437C74 B98E0053 */  swr   $t6, 0x53($t4)
/* 00437C78 892BFFFC */  lwl   $t3, -4($t1)
/* 00437C7C 992BFFFF */  lwr   $t3, -1($t1)
/* 00437C80 A98B0054 */  swl   $t3, 0x54($t4)
/* 00437C84 152DFFF2 */  bne   $t1, $t5, .L00437C50
/* 00437C88 B98B0057 */   swr   $t3, 0x57($t4)
/* 00437C8C 892B0000 */  lwl   $t3, ($t1)
/* 00437C90 992B0003 */  lwr   $t3, 3($t1)
/* 00437C94 A98B0058 */  swl   $t3, 0x58($t4)
/* 00437C98 B98B005B */  swr   $t3, 0x5b($t4)
/* 00437C9C 892E0004 */  lwl   $t6, 4($t1)
/* 00437CA0 992E0007 */  lwr   $t6, 7($t1)
/* 00437CA4 A98E005C */  swl   $t6, 0x5c($t4)
/* 00437CA8 B98E005F */  swr   $t6, 0x5f($t4)
/* 00437CAC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00437CB0 8FA7000C */  lw    $a3, 0xc($sp)
/* 00437CB4 8FA60008 */  lw    $a2, 8($sp)
/* 00437CB8 0320F809 */  jalr  $t9
/* 00437CBC 00000000 */   nop   
/* 00437CC0 10000015 */  b     .L00437D18
/* 00437CC4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00437CC8:
/* 00437CC8 2D010005 */  sltiu $at, $t0, 5
/* 00437CCC 1020FFBF */  beqz  $at, .L00437BCC
/* 00437CD0 00000000 */   nop   
/* 00437CD4 8F818038 */  lw    $at, %got(jtbl_1000B4F4)($gp)
/* 00437CD8 00084080 */  sll   $t0, $t0, 2
/* 00437CDC 00280821 */  addu  $at, $at, $t0
/* 00437CE0 8C28B4F4 */  lw    $t0, %lo(jtbl_1000B4F4)($at)
/* 00437CE4 011C4021 */  addu  $t0, $t0, $gp
/* 00437CE8 01000008 */  jr    $t0
/* 00437CEC 00000000 */   nop   
.L00437CF0:
/* 00437CF0 2F010008 */  sltiu $at, $t8, 8
/* 00437CF4 1020FFB5 */  beqz  $at, .L00437BCC
/* 00437CF8 00000000 */   nop   
/* 00437CFC 8F818038 */  lw    $at, %got(jtbl_1000B508)($gp)
/* 00437D00 0018C080 */  sll   $t8, $t8, 2
/* 00437D04 00380821 */  addu  $at, $at, $t8
/* 00437D08 8C38B508 */  lw    $t8, %lo(jtbl_1000B508)($at)
/* 00437D0C 031CC021 */  addu  $t8, $t8, $gp
/* 00437D10 03000008 */  jr    $t8
/* 00437D14 00000000 */   nop   
.L00437D18:
/* 00437D18 8F838AEC */  lw     $v1, %got(pay)($gp)
/* 00437D1C 8FAF00B8 */  lw    $t7, 0xb8($sp)
/* 00437D20 93A200BF */  lbu   $v0, 0xbf($sp)
/* 00437D24 8C6A0000 */  lw    $t2, ($v1)
/* 00437D28 014FC821 */  addu  $t9, $t2, $t7
/* 00437D2C AC790000 */  sw    $t9, ($v1)
.L00437D30:
/* 00437D30 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00437D34 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 00437D38 03E00008 */  jr    $ra
/* 00437D3C 00000000 */   nop   
    .type cmp_tree, @function
    .size cmp_tree, .-cmp_tree
    .end cmp_tree

glabel cmp_tree_again
    .ent cmp_tree_again
    # 00437D40 cmp_tree_again
    # 00438320 match_uconds
    # 004387D8 match_conds
/* 00437D40 3C1C0FBE */  .cpload $t9
/* 00437D44 279C7D10 */  
/* 00437D48 0399E021 */  
/* 00437D4C 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00437D50 AFB100B4 */  sw    $s1, 0xb4($sp)
/* 00437D54 AFB000B0 */  sw    $s0, 0xb0($sp)
/* 00437D58 00A08025 */  move  $s0, $a1
/* 00437D5C 00808825 */  move  $s1, $a0
/* 00437D60 AFBF00BC */  sw    $ra, 0xbc($sp)
/* 00437D64 AFBC00B8 */  sw    $gp, 0xb8($sp)
/* 00437D68 24060042 */  li    $a2, 66
.L00437D6C:
/* 00437D6C 92230020 */  lbu   $v1, 0x20($s1)
/* 00437D70 54C30010 */  bnel  $a2, $v1, .L00437DB4
/* 00437D74 96180014 */   lhu   $t8, 0x14($s0)
/* 00437D78 920E0020 */  lbu   $t6, 0x20($s0)
/* 00437D7C 02001025 */  move  $v0, $s0
/* 00437D80 14CE0009 */  bne   $a2, $t6, .L00437DA8
/* 00437D84 00000000 */   nop   
.L00437D88:
/* 00437D88 54510004 */  bnel  $v0, $s1, .L00437D9C
/* 00437D8C 8C42000C */   lw    $v0, 0xc($v0)
/* 00437D90 100000D1 */  b     .L004380D8
/* 00437D94 24020001 */   li    $v0, 1
/* 00437D98 8C42000C */  lw    $v0, 0xc($v0)
.L00437D9C:
/* 00437D9C 904F0020 */  lbu   $t7, 0x20($v0)
/* 00437DA0 10CFFFF9 */  beq   $a2, $t7, .L00437D88
/* 00437DA4 00000000 */   nop   
.L00437DA8:
/* 00437DA8 100000CB */  b     .L004380D8
/* 00437DAC 00001025 */   move  $v0, $zero
/* 00437DB0 96180014 */  lhu   $t8, 0x14($s0)
.L00437DB4:
/* 00437DB4 9219001A */  lbu   $t9, 0x1a($s0)
/* 00437DB8 13190003 */  beq   $t8, $t9, .L00437DC8
/* 00437DBC 00000000 */   nop   
/* 00437DC0 100000C5 */  b     .L004380D8
/* 00437DC4 00001025 */   move  $v0, $zero
.L00437DC8:
/* 00437DC8 1000005F */  b     .L00437F48
/* 00437DCC 306200FF */   andi  $v0, $v1, 0xff
.L00437DD0:
/* 00437DD0 100000C1 */  b     .L004380D8
/* 00437DD4 24020001 */   li    $v0, 1
.L00437DD8:
/* 00437DD8 8F998454 */  lw    $t9, %call16(cmp_tree_again)($gp)
/* 00437DDC 8E240000 */  lw    $a0, ($s1)
/* 00437DE0 8E050000 */  lw    $a1, ($s0)
/* 00437DE4 0320F809 */  jalr  $t9
/* 00437DE8 00000000 */   nop   
/* 00437DEC 100000BA */  b     .L004380D8
/* 00437DF0 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L00437DF4:
/* 00437DF4 8F998454 */  lw    $t9, %call16(cmp_tree_again)($gp)
/* 00437DF8 8E240004 */  lw    $a0, 4($s1)
/* 00437DFC 8E050004 */  lw    $a1, 4($s0)
/* 00437E00 0320F809 */  jalr  $t9
/* 00437E04 00000000 */   nop   
/* 00437E08 100000B3 */  b     .L004380D8
/* 00437E0C 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L00437E10:
/* 00437E10 8F998454 */  lw    $t9, %call16(cmp_tree_again)($gp)
/* 00437E14 8E240000 */  lw    $a0, ($s1)
/* 00437E18 8E050000 */  lw    $a1, ($s0)
/* 00437E1C 0320F809 */  jalr  $t9
/* 00437E20 00000000 */   nop   
/* 00437E24 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00437E28 24060042 */  li    $a2, 66
/* 00437E2C 10400004 */  beqz  $v0, .L00437E40
/* 00437E30 00401825 */   move  $v1, $v0
/* 00437E34 8E310004 */  lw    $s1, 4($s1)
/* 00437E38 1000FFCC */  b     .L00437D6C
/* 00437E3C 8E100004 */   lw    $s0, 4($s0)
.L00437E40:
/* 00437E40 100000A5 */  b     .L004380D8
/* 00437E44 00601025 */   move  $v0, $v1
.L00437E48:
/* 00437E48 8F888038 */  lw    $t0, %got(RO_1000B578)($gp)
/* 00437E4C 24040004 */  li    $a0, 4
/* 00437E50 2405012B */  li    $a1, 299
/* 00437E54 2508B578 */  addiu $t0, %lo(RO_1000B578) # addiu $t0, $t0, -0x4a88
/* 00437E58 250C0048 */  addiu $t4, $t0, 0x48
/* 00437E5C 03A05825 */  move  $t3, $sp
.L00437E60:
/* 00437E60 890A0000 */  lwl   $t2, ($t0)
/* 00437E64 990A0003 */  lwr   $t2, 3($t0)
/* 00437E68 2508000C */  addiu $t0, $t0, 0xc
/* 00437E6C 256B000C */  addiu $t3, $t3, 0xc
/* 00437E70 A96AFFFC */  swl   $t2, -4($t3)
/* 00437E74 B96AFFFF */  swr   $t2, -1($t3)
/* 00437E78 8909FFF8 */  lwl   $t1, -8($t0)
/* 00437E7C 9909FFFB */  lwr   $t1, -5($t0)
/* 00437E80 A9690000 */  swl   $t1, ($t3)
/* 00437E84 B9690003 */  swr   $t1, 3($t3)
/* 00437E88 890AFFFC */  lwl   $t2, -4($t0)
/* 00437E8C 990AFFFF */  lwr   $t2, -1($t0)
/* 00437E90 A96A0004 */  swl   $t2, 4($t3)
/* 00437E94 150CFFF2 */  bne   $t0, $t4, .L00437E60
/* 00437E98 B96A0007 */   swr   $t2, 7($t3)
/* 00437E9C 890A0000 */  lwl   $t2, ($t0)
/* 00437EA0 990A0003 */  lwr   $t2, 3($t0)
/* 00437EA4 8F8D8038 */  lw    $t5, %got(RO_1000B528)($gp)
/* 00437EA8 03A0C025 */  move  $t8, $sp
/* 00437EAC A96A0008 */  swl   $t2, 8($t3)
/* 00437EB0 B96A000B */  swr   $t2, 0xb($t3)
/* 00437EB4 89090004 */  lwl   $t1, 4($t0)
/* 00437EB8 99090007 */  lwr   $t1, 7($t0)
/* 00437EBC 25ADB528 */  addiu $t5, %lo(RO_1000B528) # addiu $t5, $t5, -0x4ad8
/* 00437EC0 25B90048 */  addiu $t9, $t5, 0x48
/* 00437EC4 A969000C */  swl   $t1, 0xc($t3)
/* 00437EC8 B969000F */  swr   $t1, 0xf($t3)
.L00437ECC:
/* 00437ECC 89AF0000 */  lwl   $t7, ($t5)
/* 00437ED0 99AF0003 */  lwr   $t7, 3($t5)
/* 00437ED4 25AD000C */  addiu $t5, $t5, 0xc
/* 00437ED8 2718000C */  addiu $t8, $t8, 0xc
/* 00437EDC AB0F004C */  swl   $t7, 0x4c($t8)
/* 00437EE0 BB0F004F */  swr   $t7, 0x4f($t8)
/* 00437EE4 89AEFFF8 */  lwl   $t6, -8($t5)
/* 00437EE8 99AEFFFB */  lwr   $t6, -5($t5)
/* 00437EEC AB0E0050 */  swl   $t6, 0x50($t8)
/* 00437EF0 BB0E0053 */  swr   $t6, 0x53($t8)
/* 00437EF4 89AFFFFC */  lwl   $t7, -4($t5)
/* 00437EF8 99AFFFFF */  lwr   $t7, -1($t5)
/* 00437EFC AB0F0054 */  swl   $t7, 0x54($t8)
/* 00437F00 15B9FFF2 */  bne   $t5, $t9, .L00437ECC
/* 00437F04 BB0F0057 */   swr   $t7, 0x57($t8)
/* 00437F08 89AF0000 */  lwl   $t7, ($t5)
/* 00437F0C 99AF0003 */  lwr   $t7, 3($t5)
/* 00437F10 AB0F0058 */  swl   $t7, 0x58($t8)
/* 00437F14 BB0F005B */  swr   $t7, 0x5b($t8)
/* 00437F18 89AE0004 */  lwl   $t6, 4($t5)
/* 00437F1C 99AE0007 */  lwr   $t6, 7($t5)
/* 00437F20 AB0E005C */  swl   $t6, 0x5c($t8)
/* 00437F24 BB0E005F */  swr   $t6, 0x5f($t8)
/* 00437F28 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00437F2C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00437F30 8FA60008 */  lw    $a2, 8($sp)
/* 00437F34 0320F809 */  jalr  $t9
/* 00437F38 00000000 */   nop   
/* 00437F3C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00437F40 10000065 */  b     .L004380D8
/* 00437F44 00001025 */   move  $v0, $zero
.L00437F48:
/* 00437F48 2C410040 */  sltiu $at, $v0, 0x40
/* 00437F4C 1420001A */  bnez  $at, .L00437FB8
/* 00437F50 2C410089 */   sltiu $at, $v0, 0x89
/* 00437F54 14200008 */  bnez  $at, .L00437F78
/* 00437F58 2401008D */   li    $at, 141
/* 00437F5C 1041FFAC */  beq   $v0, $at, .L00437E10
/* 00437F60 00000000 */   nop   
/* 00437F64 24010097 */  li    $at, 151
/* 00437F68 1041FF99 */  beq   $v0, $at, .L00437DD0
/* 00437F6C 00000000 */   nop   
/* 00437F70 1000FFB5 */  b     .L00437E48
/* 00437F74 00000000 */   nop   
.L00437F78:
/* 00437F78 2C410075 */  sltiu $at, $v0, 0x75
/* 00437F7C 14200041 */  bnez  $at, .L00438084
/* 00437F80 2C410080 */   sltiu $at, $v0, 0x80
/* 00437F84 1020004A */  beqz  $at, .L004380B0
/* 00437F88 244DFF7A */   addiu $t5, $v0, -0x86
/* 00437F8C 244CFF85 */  addiu $t4, $v0, -0x7b
/* 00437F90 2D810005 */  sltiu $at, $t4, 5
/* 00437F94 1020FFAC */  beqz  $at, .L00437E48
/* 00437F98 00000000 */   nop   
/* 00437F9C 8F818038 */  lw    $at, %got(jtbl_1000B72C)($gp)
/* 00437FA0 000C6080 */  sll   $t4, $t4, 2
/* 00437FA4 002C0821 */  addu  $at, $at, $t4
/* 00437FA8 8C2CB72C */  lw    $t4, %lo(jtbl_1000B72C)($at)
/* 00437FAC 019C6021 */  addu  $t4, $t4, $gp
/* 00437FB0 01800008 */  jr    $t4
/* 00437FB4 00000000 */   nop   
.L00437FB8:
/* 00437FB8 2C410010 */  sltiu $at, $v0, 0x10
/* 00437FBC 14200010 */  bnez  $at, .L00438000
/* 00437FC0 2C410019 */   sltiu $at, $v0, 0x19
/* 00437FC4 14200025 */  bnez  $at, .L0043805C
/* 00437FC8 244AFFE9 */   addiu $t2, $v0, -0x17
/* 00437FCC 2401001D */  li    $at, 29
/* 00437FD0 1041FF8F */  beq   $v0, $at, .L00437E10
/* 00437FD4 2448FFDD */   addiu $t0, $v0, -0x23
/* 00437FD8 2D01001D */  sltiu $at, $t0, 0x1d
/* 00437FDC 1020FF9A */  beqz  $at, .L00437E48
/* 00437FE0 00000000 */   nop   
/* 00437FE4 8F818038 */  lw    $at, %got(jtbl_1000B5FC)($gp)
/* 00437FE8 00084080 */  sll   $t0, $t0, 2
/* 00437FEC 00280821 */  addu  $at, $at, $t0
/* 00437FF0 8C28B5FC */  lw    $t0, %lo(jtbl_1000B5FC)($at)
/* 00437FF4 011C4021 */  addu  $t0, $t0, $gp
/* 00437FF8 01000008 */  jr    $t0
/* 00437FFC 00000000 */   nop   
.L00438000:
/* 00438000 2C410005 */  sltiu $at, $v0, 5
/* 00438004 1020000B */  beqz  $at, .L00438034
/* 00438008 2449FFF6 */   addiu $t1, $v0, -0xa
/* 0043800C 2C410005 */  sltiu $at, $v0, 5
/* 00438010 1020FF8D */  beqz  $at, .L00437E48
/* 00438014 00000000 */   nop   
/* 00438018 8F818038 */  lw    $at, %got(jtbl_1000B5C8)($gp)
/* 0043801C 00025880 */  sll   $t3, $v0, 2
/* 00438020 002B0821 */  addu  $at, $at, $t3
/* 00438024 8C2BB5C8 */  lw    $t3, %lo(jtbl_1000B5C8)($at)
/* 00438028 017C5821 */  addu  $t3, $t3, $gp
/* 0043802C 01600008 */  jr    $t3
/* 00438030 00000000 */   nop   
.L00438034:
/* 00438034 2D210006 */  sltiu $at, $t1, 6
/* 00438038 1020FF83 */  beqz  $at, .L00437E48
/* 0043803C 00000000 */   nop   
/* 00438040 8F818038 */  lw    $at, %got(jtbl_1000B5DC)($gp)
/* 00438044 00094880 */  sll   $t1, $t1, 2
/* 00438048 00290821 */  addu  $at, $at, $t1
/* 0043804C 8C29B5DC */  lw    $t1, %lo(jtbl_1000B5DC)($at)
/* 00438050 013C4821 */  addu  $t1, $t1, $gp
/* 00438054 01200008 */  jr    $t1
/* 00438058 00000000 */   nop   
.L0043805C:
/* 0043805C 2D410002 */  sltiu $at, $t2, 2
/* 00438060 1020FF79 */  beqz  $at, .L00437E48
/* 00438064 00000000 */   nop   
/* 00438068 8F818038 */  lw    $at, %got(jtbl_1000B5F4)($gp)
/* 0043806C 000A5080 */  sll   $t2, $t2, 2
/* 00438070 002A0821 */  addu  $at, $at, $t2
/* 00438074 8C2AB5F4 */  lw    $t2, %lo(jtbl_1000B5F4)($at)
/* 00438078 015C5021 */  addu  $t2, $t2, $gp
/* 0043807C 01400008 */  jr    $t2
/* 00438080 00000000 */   nop   
.L00438084:
/* 00438084 2459FFBA */  addiu $t9, $v0, -0x46
/* 00438088 2F21002F */  sltiu $at, $t9, 0x2f
/* 0043808C 1020FF6E */  beqz  $at, .L00437E48
/* 00438090 00000000 */   nop   
/* 00438094 8F818038 */  lw    $at, %got(jtbl_1000B670)($gp)
/* 00438098 0019C880 */  sll   $t9, $t9, 2
/* 0043809C 00390821 */  addu  $at, $at, $t9
/* 004380A0 8C39B670 */  lw    $t9, %lo(jtbl_1000B670)($at)
/* 004380A4 033CC821 */  addu  $t9, $t9, $gp
/* 004380A8 03200008 */  jr    $t9
/* 004380AC 00000000 */   nop   
.L004380B0:
/* 004380B0 2DA10003 */  sltiu $at, $t5, 3
/* 004380B4 1020FF64 */  beqz  $at, .L00437E48
/* 004380B8 00000000 */   nop   
/* 004380BC 8F818038 */  lw    $at, %got(jtbl_1000B740)($gp)
/* 004380C0 000D6880 */  sll   $t5, $t5, 2
/* 004380C4 002D0821 */  addu  $at, $at, $t5
/* 004380C8 8C2DB740 */  lw    $t5, %lo(jtbl_1000B740)($at)
/* 004380CC 01BC6821 */  addu  $t5, $t5, $gp
/* 004380D0 01A00008 */  jr    $t5
/* 004380D4 00000000 */   nop   
.L004380D8:
/* 004380D8 8FBF00BC */  lw    $ra, 0xbc($sp)
/* 004380DC 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 004380E0 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 004380E4 03E00008 */  jr    $ra
/* 004380E8 27BD00C0 */   addiu $sp, $sp, 0xc0
    .type cmp_tree_again, @function
    .size cmp_tree_again, .-cmp_tree_again
    .end cmp_tree_again

glabel move_label
    .ent move_label
    # 00438320 match_uconds
    # 004387D8 match_conds
/* 004380EC 3C1C0FBE */  .cpload $t9
/* 004380F0 279C7964 */  
/* 004380F4 0399E021 */  
/* 004380F8 8C8E0008 */  lw    $t6, 8($a0)
/* 004380FC 8C8F000C */  lw    $t7, 0xc($a0)
/* 00438100 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00438104 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00438108 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043810C ADEE0008 */  sw    $t6, 8($t7)
/* 00438110 8C990008 */  lw    $t9, 8($a0)
/* 00438114 8C98000C */  lw    $t8, 0xc($a0)
/* 00438118 AF38000C */  sw    $t8, 0xc($t9)
/* 0043811C 8F998440 */  lw    $t9, %call16(insert)($gp)
/* 00438120 0320F809 */  jalr  $t9
/* 00438124 00000000 */   nop   
/* 00438128 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043812C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00438130 27BD0020 */  addiu $sp, $sp, 0x20
/* 00438134 03E00008 */  jr    $ra
/* 00438138 00000000 */   nop   
    .type move_label, @function
    .size move_label, .-move_label
    .end move_label

glabel get_prior_stm
    .ent get_prior_stm
    # 00438320 match_uconds
    # 004387D8 match_conds
/* 0043813C 3C1C0FBE */  .cpload $t9
/* 00438140 279C7914 */  
/* 00438144 0399E021 */  
/* 00438148 8C84000C */  lw    $a0, 0xc($a0)
/* 0043814C 8F8288E8 */  lw     $v0, %got(not_real_stms)($gp)
/* 00438150 908E0020 */  lbu   $t6, 0x20($a0)
/* 00438154 2DCF00A0 */  sltiu $t7, $t6, 0xa0
/* 00438158 11E00006 */  beqz  $t7, .L00438174
/* 0043815C 000EC143 */   sra   $t8, $t6, 5
/* 00438160 0018C880 */  sll   $t9, $t8, 2
/* 00438164 00594021 */  addu  $t0, $v0, $t9
/* 00438168 8D090000 */  lw    $t1, ($t0)
/* 0043816C 01C95004 */  sllv  $t2, $t1, $t6
/* 00438170 294F0000 */  slti  $t7, $t2, 0
.L00438174:
/* 00438174 11E0000D */  beqz  $t7, .L004381AC
/* 00438178 00000000 */   nop   
/* 0043817C 8C84000C */  lw    $a0, 0xc($a0)
.L00438180:
/* 00438180 908C0020 */  lbu   $t4, 0x20($a0)
/* 00438184 2D8D00A0 */  sltiu $t5, $t4, 0xa0
/* 00438188 11A00006 */  beqz  $t5, .L004381A4
/* 0043818C 000CC143 */   sra   $t8, $t4, 5
/* 00438190 0018C880 */  sll   $t9, $t8, 2
/* 00438194 00594021 */  addu  $t0, $v0, $t9
/* 00438198 8D090000 */  lw    $t1, ($t0)
/* 0043819C 01897004 */  sllv  $t6, $t1, $t4
/* 004381A0 29CD0000 */  slti  $t5, $t6, 0
.L004381A4:
/* 004381A4 55A0FFF6 */  bnel  $t5, $zero, .L00438180
/* 004381A8 8C84000C */   lw    $a0, 0xc($a0)
.L004381AC:
/* 004381AC 03E00008 */  jr    $ra
/* 004381B0 00801025 */   move  $v0, $a0
    .type get_prior_stm, @function
    .size get_prior_stm, .-get_prior_stm
    .end get_prior_stm

glabel get_prior_stm1
    .ent get_prior_stm1
    # 00438320 match_uconds
    # 004387D8 match_conds
/* 004381B4 3C1C0FBE */  .cpload $t9
/* 004381B8 279C789C */  
/* 004381BC 0399E021 */  
/* 004381C0 8C84000C */  lw    $a0, 0xc($a0)
/* 004381C4 8F8388E8 */  lw     $v1, %got(not_real_stms)($gp)
/* 004381C8 24050042 */  li    $a1, 66
/* 004381CC 90820020 */  lbu   $v0, 0x20($a0)
/* 004381D0 2C4E00A0 */  sltiu $t6, $v0, 0xa0
/* 004381D4 11C00006 */  beqz  $t6, .L004381F0
/* 004381D8 00027943 */   sra   $t7, $v0, 5
/* 004381DC 000FC080 */  sll   $t8, $t7, 2
/* 004381E0 0078C821 */  addu  $t9, $v1, $t8
/* 004381E4 8F280000 */  lw    $t0, ($t9)
/* 004381E8 00484804 */  sllv  $t1, $t0, $v0
/* 004381EC 292E0000 */  slti  $t6, $t1, 0
.L004381F0:
/* 004381F0 55C00004 */  bnel  $t6, $zero, .L00438204
/* 004381F4 8C84000C */   lw    $a0, 0xc($a0)
/* 004381F8 14A20010 */  bne   $a1, $v0, .L0043823C
/* 004381FC 00000000 */   nop   
/* 00438200 8C84000C */  lw    $a0, 0xc($a0)
.L00438204:
/* 00438204 24050042 */  li    $a1, 66
/* 00438208 90820020 */  lbu   $v0, 0x20($a0)
/* 0043820C 2C4B00A0 */  sltiu $t3, $v0, 0xa0
/* 00438210 11600006 */  beqz  $t3, .L0043822C
/* 00438214 00026143 */   sra   $t4, $v0, 5
/* 00438218 000C6880 */  sll   $t5, $t4, 2
/* 0043821C 006D7821 */  addu  $t7, $v1, $t5
/* 00438220 8DF80000 */  lw    $t8, ($t7)
/* 00438224 0058C804 */  sllv  $t9, $t8, $v0
/* 00438228 2B2B0000 */  slti  $t3, $t9, 0
.L0043822C:
/* 0043822C 5560FFF5 */  bnel  $t3, $zero, .L00438204
/* 00438230 8C84000C */   lw    $a0, 0xc($a0)
/* 00438234 50A2FFF3 */  beql  $a1, $v0, .L00438204
/* 00438238 8C84000C */   lw    $a0, 0xc($a0)
.L0043823C:
/* 0043823C 03E00008 */  jr    $ra
/* 00438240 00801025 */   move  $v0, $a0
    .type get_prior_stm1, @function
    .size get_prior_stm1, .-get_prior_stm1
    .end get_prior_stm1

glabel find_br
    .ent find_br
    # 004387D8 match_conds
/* 00438244 3C1C0FBE */  .cpload $t9
/* 00438248 279C780C */  
/* 0043824C 0399E021 */  
/* 00438250 8C830004 */  lw    $v1, 4($a0)
/* 00438254 24060042 */  li    $a2, 66
/* 00438258 90620020 */  lbu   $v0, 0x20($v1)
/* 0043825C 244EFFE0 */  addiu $t6, $v0, -0x20
/* 00438260 2DCF0060 */  sltiu $t7, $t6, 0x60
/* 00438264 11E00009 */  beqz  $t7, .L0043828C
/* 00438268 00000000 */   nop   
/* 0043826C 8F888038 */  lw    $t0, %got(D_100162B4)($gp)
/* 00438270 000EC143 */  sra   $t8, $t6, 5
/* 00438274 0018C880 */  sll   $t9, $t8, 2
/* 00438278 250862B4 */  addiu $t0, %lo(D_100162B4) # addiu $t0, $t0, 0x62b4
/* 0043827C 01194821 */  addu  $t1, $t0, $t9
/* 00438280 8D2A0000 */  lw    $t2, ($t1)
/* 00438284 01CA5804 */  sllv  $t3, $t2, $t6
/* 00438288 296F0000 */  slti  $t7, $t3, 0
.L0043828C:
/* 0043828C 55E00022 */  bnel  $t7, $zero, .L00438318
/* 00438290 00601025 */   move  $v0, $v1
/* 00438294 8F8588E8 */  lw     $a1, %got(not_real_stms)($gp)
.L00438298:
/* 00438298 1064000C */  beq   $v1, $a0, .L004382CC
/* 0043829C 2C4D00A0 */   sltiu $t5, $v0, 0xa0
/* 004382A0 11A00006 */  beqz  $t5, .L004382BC
/* 004382A4 0002C143 */   sra   $t8, $v0, 5
/* 004382A8 00184080 */  sll   $t0, $t8, 2
/* 004382AC 00A8C821 */  addu  $t9, $a1, $t0
/* 004382B0 8F290000 */  lw    $t1, ($t9)
/* 004382B4 00495004 */  sllv  $t2, $t1, $v0
/* 004382B8 294D0000 */  slti  $t5, $t2, 0
.L004382BC:
/* 004382BC 55A00006 */  bnel  $t5, $zero, .L004382D8
/* 004382C0 8C63000C */   lw    $v1, 0xc($v1)
/* 004382C4 50C20004 */  beql  $a2, $v0, .L004382D8
/* 004382C8 8C63000C */   lw    $v1, 0xc($v1)
.L004382CC:
/* 004382CC 03E00008 */  jr    $ra
/* 004382D0 00001025 */   move  $v0, $zero

/* 004382D4 8C63000C */  lw    $v1, 0xc($v1)
.L004382D8:
/* 004382D8 90620020 */  lbu   $v0, 0x20($v1)
/* 004382DC 244BFFE0 */  addiu $t3, $v0, -0x20
/* 004382E0 2D6C0060 */  sltiu $t4, $t3, 0x60
/* 004382E4 11800009 */  beqz  $t4, .L0043830C
/* 004382E8 00000000 */   nop   
/* 004382EC 8F888038 */  lw    $t0, %got(D_100162B4)($gp)
/* 004382F0 000B7943 */  sra   $t7, $t3, 5
/* 004382F4 000FC080 */  sll   $t8, $t7, 2
/* 004382F8 250862B4 */  addiu $t0, %lo(D_100162B4) # addiu $t0, $t0, 0x62b4
/* 004382FC 0118C821 */  addu  $t9, $t0, $t8
/* 00438300 8F290000 */  lw    $t1, ($t9)
/* 00438304 01695004 */  sllv  $t2, $t1, $t3
/* 00438308 294C0000 */  slti  $t4, $t2, 0
.L0043830C:
/* 0043830C 1180FFE2 */  beqz  $t4, .L00438298
/* 00438310 00000000 */   nop   
/* 00438314 00601025 */  move  $v0, $v1
.L00438318:
/* 00438318 03E00008 */  jr    $ra
/* 0043831C 00000000 */   nop   
    .type find_br, @function
    .size find_br, .-find_br
    .end find_br

glabel match_uconds
    .ent match_uconds
    # 00438AE0 cross_jump
/* 00438320 3C1C0FBE */  .cpload $t9
/* 00438324 279C7730 */  
/* 00438328 0399E021 */  
/* 0043832C 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00438330 AFB70034 */  sw    $s7, 0x34($sp)
/* 00438334 AFB5002C */  sw    $s5, 0x2c($sp)
/* 00438338 AFB40028 */  sw    $s4, 0x28($sp)
/* 0043833C AFB1001C */  sw    $s1, 0x1c($sp)
/* 00438340 AFB00018 */  sw    $s0, 0x18($sp)
/* 00438344 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00438348 AFBC0038 */  sw    $gp, 0x38($sp)
/* 0043834C AFB60030 */  sw    $s6, 0x30($sp)
/* 00438350 AFB30024 */  sw    $s3, 0x24($sp)
/* 00438354 AFB20020 */  sw    $s2, 0x20($sp)
/* 00438358 0080A825 */  move  $s5, $a0
/* 0043835C 00808025 */  move  $s0, $a0
/* 00438360 8C960004 */  lw    $s6, 4($a0)
/* 00438364 0000B825 */  move  $s7, $zero
/* 00438368 8F9188E4 */  lw     $s1, %got(stop_ops)($gp)
/* 0043836C 24140042 */  li    $s4, 66
.L00438370:
/* 00438370 8F998460 */  lw    $t9, %call16(get_prior_stm1)($gp)
/* 00438374 02C02025 */  move  $a0, $s6
/* 00438378 0320F809 */  jalr  $t9
/* 0043837C 00000000 */   nop   
/* 00438380 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00438384 0040B025 */  move  $s6, $v0
/* 00438388 02002025 */  move  $a0, $s0
/* 0043838C 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 00438390 0320F809 */  jalr  $t9
/* 00438394 00000000 */   nop   
/* 00438398 90430020 */  lbu   $v1, 0x20($v0)
/* 0043839C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004383A0 00408025 */  move  $s0, $v0
/* 004383A4 1683000D */  bne   $s4, $v1, .L004383DC
/* 004383A8 00000000 */   nop   
/* 004383AC 8EAE0004 */  lw    $t6, 4($s5)
.L004383B0:
/* 004383B0 104E002B */  beq   $v0, $t6, .L00438460
/* 004383B4 00000000 */   nop   
/* 004383B8 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 004383BC 02002025 */  move  $a0, $s0
/* 004383C0 0320F809 */  jalr  $t9
/* 004383C4 00000000 */   nop   
/* 004383C8 90430020 */  lbu   $v1, 0x20($v0)
/* 004383CC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004383D0 00408025 */  move  $s0, $v0
/* 004383D4 5283FFF6 */  beql  $s4, $v1, .L004383B0
/* 004383D8 8EAE0004 */   lw    $t6, 4($s5)
.L004383DC:
/* 004383DC 12D50020 */  beq   $s6, $s5, .L00438460
/* 004383E0 2C6D00A0 */   sltiu $t5, $v1, 0xa0
/* 004383E4 92CF0020 */  lbu   $t7, 0x20($s6)
/* 004383E8 00037143 */  sra   $t6, $v1, 5
/* 004383EC 2DF800A0 */  sltiu $t8, $t7, 0xa0
/* 004383F0 13000007 */  beqz  $t8, .L00438410
/* 004383F4 00000000 */   nop   
/* 004383F8 000FC943 */  sra   $t9, $t7, 5
/* 004383FC 00194080 */  sll   $t0, $t9, 2
/* 00438400 02284821 */  addu  $t1, $s1, $t0
/* 00438404 8D2A0000 */  lw    $t2, ($t1)
/* 00438408 01EA5804 */  sllv  $t3, $t2, $t7
/* 0043840C 29780000 */  slti  $t8, $t3, 0
.L00438410:
/* 00438410 17000013 */  bnez  $t8, .L00438460
/* 00438414 00000000 */   nop   
/* 00438418 11A00006 */  beqz  $t5, .L00438434
/* 0043841C 00000000 */   nop   
/* 00438420 000EC880 */  sll   $t9, $t6, 2
/* 00438424 02394021 */  addu  $t0, $s1, $t9
/* 00438428 8D090000 */  lw    $t1, ($t0)
/* 0043842C 00695004 */  sllv  $t2, $t1, $v1
/* 00438430 294D0000 */  slti  $t5, $t2, 0
.L00438434:
/* 00438434 15A0000A */  bnez  $t5, .L00438460
/* 00438438 00000000 */   nop   
/* 0043843C 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00438440 02002025 */  move  $a0, $s0
/* 00438444 02C02825 */  move  $a1, $s6
/* 00438448 0320F809 */  jalr  $t9
/* 0043844C 00000000 */   nop   
/* 00438450 10400003 */  beqz  $v0, .L00438460
/* 00438454 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00438458 1000FFC5 */  b     .L00438370
/* 0043845C 24170001 */   li    $s7, 1
.L00438460:
/* 00438460 52E00065 */  beql  $s7, $zero, .L004385F8
/* 00438464 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00438468 8EB30004 */  lw    $s3, 4($s5)
/* 0043846C 02A09025 */  move  $s2, $s5
/* 00438470 0000B825 */  move  $s7, $zero
/* 00438474 12760039 */  beq   $s3, $s6, .L0043855C
/* 00438478 00000000 */   nop   
.L0043847C:
/* 0043847C 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 00438480 02608825 */  move  $s1, $s3
/* 00438484 02602025 */  move  $a0, $s3
/* 00438488 0320F809 */  jalr  $t9
/* 0043848C 00000000 */   nop   
/* 00438490 904B0020 */  lbu   $t3, 0x20($v0)
/* 00438494 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00438498 00409825 */  move  $s3, $v0
/* 0043849C 168B000B */  bne   $s4, $t3, .L004384CC
/* 004384A0 00000000 */   nop   
.L004384A4:
/* 004384A4 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 004384A8 02608825 */  move  $s1, $s3
/* 004384AC 02602025 */  move  $a0, $s3
/* 004384B0 0320F809 */  jalr  $t9
/* 004384B4 00000000 */   nop   
/* 004384B8 904C0020 */  lbu   $t4, 0x20($v0)
/* 004384BC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004384C0 00409825 */  move  $s3, $v0
/* 004384C4 128CFFF7 */  beq   $s4, $t4, .L004384A4
/* 004384C8 00000000 */   nop   
.L004384CC:
/* 004384CC 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 004384D0 02402025 */  move  $a0, $s2
/* 004384D4 0320F809 */  jalr  $t9
/* 004384D8 00000000 */   nop   
/* 004384DC 90580020 */  lbu   $t8, 0x20($v0)
/* 004384E0 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004384E4 00409025 */  move  $s2, $v0
/* 004384E8 16980011 */  bne   $s4, $t8, .L00438530
/* 004384EC 00000000 */   nop   
.L004384F0:
/* 004384F0 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 004384F4 02408025 */  move  $s0, $s2
/* 004384F8 02402025 */  move  $a0, $s2
/* 004384FC 0320F809 */  jalr  $t9
/* 00438500 00000000 */   nop   
/* 00438504 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00438508 00409025 */  move  $s2, $v0
/* 0043850C 02002025 */  move  $a0, $s0
/* 00438510 8F998458 */  lw    $t9, %call16(move_label)($gp)
/* 00438514 02202825 */  move  $a1, $s1
/* 00438518 0320F809 */  jalr  $t9
/* 0043851C 00000000 */   nop   
/* 00438520 924E0020 */  lbu   $t6, 0x20($s2)
/* 00438524 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00438528 128EFFF1 */  beq   $s4, $t6, .L004384F0
/* 0043852C 00000000 */   nop   
.L00438530:
/* 00438530 1276000A */  beq   $s3, $s6, .L0043855C
/* 00438534 00000000 */   nop   
/* 00438538 8F998454 */  lw    $t9, %call16(cmp_tree_again)($gp)
/* 0043853C 02402025 */  move  $a0, $s2
/* 00438540 02602825 */  move  $a1, $s3
/* 00438544 0320F809 */  jalr  $t9
/* 00438548 00000000 */   nop   
/* 0043854C 10400003 */  beqz  $v0, .L0043855C
/* 00438550 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00438554 1676FFC9 */  bne   $s3, $s6, .L0043847C
/* 00438558 24170001 */   li    $s7, 1
.L0043855C:
/* 0043855C 52E00026 */  beql  $s7, $zero, .L004385F8
/* 00438560 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00438564 12B2000D */  beq   $s5, $s2, .L0043859C
/* 00438568 02A08025 */   move  $s0, $s5
.L0043856C:
/* 0043856C 8F998678 */  lw    $t9, %call16(delete_statement)($gp)
/* 00438570 02002025 */  move  $a0, $s0
/* 00438574 0320F809 */  jalr  $t9
/* 00438578 00000000 */   nop   
/* 0043857C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00438580 02002025 */  move  $a0, $s0
/* 00438584 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 00438588 0320F809 */  jalr  $t9
/* 0043858C 00000000 */   nop   
/* 00438590 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00438594 1452FFF5 */  bne   $v0, $s2, .L0043856C
/* 00438598 00408025 */   move  $s0, $v0
.L0043859C:
/* 0043859C 8F998448 */  lw    $t9, %call16(make_new_label)($gp)
/* 004385A0 0320F809 */  jalr  $t9
/* 004385A4 00000000 */   nop   
/* 004385A8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004385AC 0040B025 */  move  $s6, $v0
/* 004385B0 00402025 */  move  $a0, $v0
/* 004385B4 8F99844C */  lw    $t9, %call16(make_new_jump)($gp)
/* 004385B8 0320F809 */  jalr  $t9
/* 004385BC 00000000 */   nop   
/* 004385C0 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004385C4 00402025 */  move  $a0, $v0
/* 004385C8 02402825 */  move  $a1, $s2
/* 004385CC 8F998444 */  lw    $t9, %call16(append)($gp)
/* 004385D0 0320F809 */  jalr  $t9
/* 004385D4 00000000 */   nop   
/* 004385D8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004385DC 02C02025 */  move  $a0, $s6
/* 004385E0 02602825 */  move  $a1, $s3
/* 004385E4 8F998444 */  lw    $t9, %call16(append)($gp)
/* 004385E8 0320F809 */  jalr  $t9
/* 004385EC 00000000 */   nop   
/* 004385F0 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004385F4 8FBF003C */  lw    $ra, 0x3c($sp)
.L004385F8:
/* 004385F8 8FB00018 */  lw    $s0, 0x18($sp)
/* 004385FC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00438600 8FB20020 */  lw    $s2, 0x20($sp)
/* 00438604 8FB30024 */  lw    $s3, 0x24($sp)
/* 00438608 8FB40028 */  lw    $s4, 0x28($sp)
/* 0043860C 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00438610 8FB60030 */  lw    $s6, 0x30($sp)
/* 00438614 8FB70034 */  lw    $s7, 0x34($sp)
/* 00438618 03E00008 */  jr    $ra
/* 0043861C 27BD0040 */   addiu $sp, $sp, 0x40
    .type match_uconds, @function
    .size match_uconds, .-match_uconds
    .end match_uconds

glabel cmp_br
    .ent cmp_br
    # 004387D8 match_conds
/* 00438620 3C1C0FBE */  .cpload $t9
/* 00438624 279C7430 */  
/* 00438628 0399E021 */  
/* 0043862C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00438630 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00438634 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00438638 AFB00014 */  sw    $s0, 0x14($sp)
/* 0043863C 908E001A */  lbu   $t6, 0x1a($a0)
/* 00438640 00803825 */  move  $a3, $a0
/* 00438644 00A03025 */  move  $a2, $a1
/* 00438648 25CF0001 */  addiu $t7, $t6, 1
/* 0043864C A08F001A */  sb    $t7, 0x1a($a0)
/* 00438650 90B8001A */  lbu   $t8, 0x1a($a1)
/* 00438654 27190001 */  addiu $t9, $t8, 1
/* 00438658 A0B9001A */  sb    $t9, 0x1a($a1)
/* 0043865C 8C900000 */  lw    $s0, ($a0)
/* 00438660 9209001A */  lbu   $t1, 0x1a($s0)
/* 00438664 252A0001 */  addiu $t2, $t1, 1
/* 00438668 A20A001A */  sb    $t2, 0x1a($s0)
/* 0043866C 8CA20000 */  lw    $v0, ($a1)
/* 00438670 904B001A */  lbu   $t3, 0x1a($v0)
/* 00438674 256C0001 */  addiu $t4, $t3, 1
/* 00438678 A04C001A */  sb    $t4, 0x1a($v0)
/* 0043867C 8C900000 */  lw    $s0, ($a0)
/* 00438680 92080020 */  lbu   $t0, 0x20($s0)
/* 00438684 250DFFE0 */  addiu $t5, $t0, -0x20
/* 00438688 2DAE0040 */  sltiu $t6, $t5, 0x40
/* 0043868C 11C00009 */  beqz  $t6, .L004386B4
/* 00438690 00000000 */   nop   
/* 00438694 8F998038 */  lw    $t9, %got(D_100162C0)($gp)
/* 00438698 000D7943 */  sra   $t7, $t5, 5
/* 0043869C 000FC080 */  sll   $t8, $t7, 2
/* 004386A0 273962C0 */  addiu $t9, %lo(D_100162C0) # addiu $t9, $t9, 0x62c0
/* 004386A4 03384821 */  addu  $t1, $t9, $t8
/* 004386A8 8D2A0000 */  lw    $t2, ($t1)
/* 004386AC 01AA5804 */  sllv  $t3, $t2, $t5
/* 004386B0 296E0000 */  slti  $t6, $t3, 0
.L004386B4:
/* 004386B4 51C00034 */  beql  $t6, $zero, .L00438788
/* 004386B8 90CF0020 */   lbu   $t7, 0x20($a2)
/* 004386BC 8CC20000 */  lw    $v0, ($a2)
/* 004386C0 90450020 */  lbu   $a1, 0x20($v0)
/* 004386C4 24AFFFE0 */  addiu $t7, $a1, -0x20
/* 004386C8 2DF90040 */  sltiu $t9, $t7, 0x40
/* 004386CC 13200009 */  beqz  $t9, .L004386F4
/* 004386D0 00000000 */   nop   
/* 004386D4 8F8A8038 */  lw    $t2, %got(D_100162C0)($gp)
/* 004386D8 000FC143 */  sra   $t8, $t7, 5
/* 004386DC 00184880 */  sll   $t1, $t8, 2
/* 004386E0 254A62C0 */  addiu $t2, %lo(D_100162C0) # addiu $t2, $t2, 0x62c0
/* 004386E4 01496821 */  addu  $t5, $t2, $t1
/* 004386E8 8DAB0000 */  lw    $t3, ($t5)
/* 004386EC 01EB6004 */  sllv  $t4, $t3, $t7
/* 004386F0 29990000 */  slti  $t9, $t4, 0
.L004386F4:
/* 004386F4 53200024 */  beql  $t9, $zero, .L00438788
/* 004386F8 90CF0020 */   lbu   $t7, 0x20($a2)
/* 004386FC 90C30020 */  lbu   $v1, 0x20($a2)
/* 00438700 90E40020 */  lbu   $a0, 0x20($a3)
/* 00438704 14640006 */  bne   $v1, $a0, .L00438720
/* 00438708 00000000 */   nop   
/* 0043870C 8F9888EC */  lw     $t8, %got(inverse)($gp)
/* 00438710 00B85021 */  addu  $t2, $a1, $t8
/* 00438714 91490000 */  lbu   $t1, ($t2)
/* 00438718 11280005 */  beq   $t1, $t0, .L00438730
/* 0043871C 00000000 */   nop   
.L00438720:
/* 00438720 50640028 */  beql  $v1, $a0, .L004387C4
/* 00438724 00001025 */   move  $v0, $zero
/* 00438728 54A80026 */  bnel  $a1, $t0, .L004387C4
/* 0043872C 00001025 */   move  $v0, $zero
.L00438730:
/* 00438730 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00438734 8E040000 */  lw    $a0, ($s0)
/* 00438738 8C450000 */  lw    $a1, ($v0)
/* 0043873C AFA60024 */  sw    $a2, 0x24($sp)
/* 00438740 0320F809 */  jalr  $t9
/* 00438744 AFA70020 */   sw    $a3, 0x20($sp)
/* 00438748 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043874C 8FA60024 */  lw    $a2, 0x24($sp)
/* 00438750 8FA70020 */  lw    $a3, 0x20($sp)
/* 00438754 10400009 */  beqz  $v0, .L0043877C
/* 00438758 00401825 */   move  $v1, $v0
/* 0043875C 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 00438760 8CED0000 */  lw    $t5, ($a3)
/* 00438764 8CCB0000 */  lw    $t3, ($a2)
/* 00438768 8DA40004 */  lw    $a0, 4($t5)
/* 0043876C 0320F809 */  jalr  $t9
/* 00438770 8D650004 */   lw    $a1, 4($t3)
/* 00438774 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00438778 00401825 */  move  $v1, $v0
.L0043877C:
/* 0043877C 10000011 */  b     .L004387C4
/* 00438780 00601025 */   move  $v0, $v1
/* 00438784 90CF0020 */  lbu   $t7, 0x20($a2)
.L00438788:
/* 00438788 90EC0020 */  lbu   $t4, 0x20($a3)
/* 0043878C 01EC1826 */  xor   $v1, $t7, $t4
/* 00438790 0003182B */  sltu  $v1, $zero, $v1
/* 00438794 10600008 */  beqz  $v1, .L004387B8
/* 00438798 00000000 */   nop   
/* 0043879C 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 004387A0 02002025 */  move  $a0, $s0
/* 004387A4 8CC50000 */  lw    $a1, ($a2)
/* 004387A8 0320F809 */  jalr  $t9
/* 004387AC 00000000 */   nop   
/* 004387B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004387B4 00401825 */  move  $v1, $v0
.L004387B8:
/* 004387B8 10000002 */  b     .L004387C4
/* 004387BC 00601025 */   move  $v0, $v1
/* 004387C0 00001025 */  move  $v0, $zero
.L004387C4:
/* 004387C4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004387C8 8FB00014 */  lw    $s0, 0x14($sp)
/* 004387CC 27BD0020 */  addiu $sp, $sp, 0x20
/* 004387D0 03E00008 */  jr    $ra
/* 004387D4 00000000 */   nop   
    .type cmp_br, @function
    .size cmp_br, .-cmp_br
    .end cmp_br

glabel match_conds
    .ent match_conds
    # 00438AE0 cross_jump
/* 004387D8 3C1C0FBE */  .cpload $t9
/* 004387DC 279C7278 */  
/* 004387E0 0399E021 */  
/* 004387E4 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004387E8 8F998464 */  lw    $t9, %call16(find_br)($gp)
/* 004387EC AFBF0034 */  sw    $ra, 0x34($sp)
/* 004387F0 AFBC0030 */  sw    $gp, 0x30($sp)
/* 004387F4 AFB5002C */  sw    $s5, 0x2c($sp)
/* 004387F8 AFB40028 */  sw    $s4, 0x28($sp)
/* 004387FC AFB30024 */  sw    $s3, 0x24($sp)
/* 00438800 AFB20020 */  sw    $s2, 0x20($sp)
/* 00438804 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00438808 AFB00018 */  sw    $s0, 0x18($sp)
/* 0043880C 0320F809 */  jalr  $t9
/* 00438810 AFA40038 */   sw    $a0, 0x38($sp)
/* 00438814 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00438818 00409825 */  move  $s3, $v0
/* 0043881C 8F928AEC */  lw     $s2, %got(pay)($gp)
/* 00438820 104000A6 */  beqz  $v0, .L00438ABC
/* 00438824 AE400000 */   sw    $zero, ($s2)
/* 00438828 8F998464 */  lw    $t9, %call16(find_br)($gp)
/* 0043882C 00402025 */  move  $a0, $v0
/* 00438830 0320F809 */  jalr  $t9
/* 00438834 00000000 */   nop   
/* 00438838 8FA40038 */  lw    $a0, 0x38($sp)
/* 0043883C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00438840 5444009F */  bnel  $v0, $a0, .L00438AC0
/* 00438844 8FBF0034 */   lw    $ra, 0x34($sp)
/* 00438848 8F99846C */  lw    $t9, %call16(cmp_br)($gp)
/* 0043884C 02602825 */  move  $a1, $s3
/* 00438850 0320F809 */  jalr  $t9
/* 00438854 00000000 */   nop   
/* 00438858 10400098 */  beqz  $v0, .L00438ABC
/* 0043885C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00438860 8FB00038 */  lw    $s0, 0x38($sp)
/* 00438864 0260A825 */  move  $s5, $s3
/* 00438868 8F9188E4 */  lw     $s1, %got(stop_ops)($gp)
.L0043886C:
/* 0043886C 8F998460 */  lw    $t9, %call16(get_prior_stm1)($gp)
/* 00438870 02A02025 */  move  $a0, $s5
/* 00438874 0320F809 */  jalr  $t9
/* 00438878 00000000 */   nop   
/* 0043887C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00438880 0040A825 */  move  $s5, $v0
/* 00438884 02002025 */  move  $a0, $s0
/* 00438888 8F998460 */  lw    $t9, %call16(get_prior_stm1)($gp)
/* 0043888C 0320F809 */  jalr  $t9
/* 00438890 00000000 */   nop   
/* 00438894 92AE0020 */  lbu   $t6, 0x20($s5)
/* 00438898 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043889C 00408025 */  move  $s0, $v0
/* 004388A0 2DCF00A0 */  sltiu $t7, $t6, 0xa0
/* 004388A4 11E00006 */  beqz  $t7, .L004388C0
/* 004388A8 000EC143 */   sra   $t8, $t6, 5
/* 004388AC 0018C880 */  sll   $t9, $t8, 2
/* 004388B0 02394021 */  addu  $t0, $s1, $t9
/* 004388B4 8D090000 */  lw    $t1, ($t0)
/* 004388B8 01C95004 */  sllv  $t2, $t1, $t6
/* 004388BC 294F0000 */  slti  $t7, $t2, 0
.L004388C0:
/* 004388C0 55E00014 */  bnel  $t7, $zero, .L00438914
/* 004388C4 8E4B0000 */   lw    $t3, ($s2)
/* 004388C8 904C0020 */  lbu   $t4, 0x20($v0)
/* 004388CC 2D8D00A0 */  sltiu $t5, $t4, 0xa0
/* 004388D0 11A00006 */  beqz  $t5, .L004388EC
/* 004388D4 000CC143 */   sra   $t8, $t4, 5
/* 004388D8 0018C880 */  sll   $t9, $t8, 2
/* 004388DC 02394021 */  addu  $t0, $s1, $t9
/* 004388E0 8D090000 */  lw    $t1, ($t0)
/* 004388E4 01897004 */  sllv  $t6, $t1, $t4
/* 004388E8 29CD0000 */  slti  $t5, $t6, 0
.L004388EC:
/* 004388EC 55A00009 */  bnel  $t5, $zero, .L00438914
/* 004388F0 8E4B0000 */   lw    $t3, ($s2)
/* 004388F4 8F998450 */  lw    $t9, %call16(cmp_tree)($gp)
/* 004388F8 02002025 */  move  $a0, $s0
/* 004388FC 02A02825 */  move  $a1, $s5
/* 00438900 0320F809 */  jalr  $t9
/* 00438904 00000000 */   nop   
/* 00438908 1440FFD8 */  bnez  $v0, .L0043886C
/* 0043890C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00438910 8E4B0000 */  lw    $t3, ($s2)
.L00438914:
/* 00438914 8FB20038 */  lw    $s2, 0x38($sp)
/* 00438918 2D610003 */  sltiu $at, $t3, 3
/* 0043891C 54200068 */  bnel  $at, $zero, .L00438AC0
/* 00438920 8FBF0034 */   lw    $ra, 0x34($sp)
/* 00438924 8F998454 */  lw    $t9, %call16(cmp_tree_again)($gp)
/* 00438928 0260A025 */  move  $s4, $s3
/* 0043892C 8E440000 */  lw    $a0, ($s2)
/* 00438930 0320F809 */  jalr  $t9
/* 00438934 8E650000 */   lw    $a1, ($s3)
/* 00438938 10400060 */  beqz  $v0, .L00438ABC
/* 0043893C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00438940 12750039 */  beq   $s3, $s5, .L00438A28
/* 00438944 24130042 */   li    $s3, 66
.L00438948:
/* 00438948 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 0043894C 02808825 */  move  $s1, $s4
/* 00438950 02802025 */  move  $a0, $s4
/* 00438954 0320F809 */  jalr  $t9
/* 00438958 00000000 */   nop   
/* 0043895C 90580020 */  lbu   $t8, 0x20($v0)
/* 00438960 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00438964 0040A025 */  move  $s4, $v0
/* 00438968 1678000B */  bne   $s3, $t8, .L00438998
/* 0043896C 00000000 */   nop   
.L00438970:
/* 00438970 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 00438974 02808825 */  move  $s1, $s4
/* 00438978 02802025 */  move  $a0, $s4
/* 0043897C 0320F809 */  jalr  $t9
/* 00438980 00000000 */   nop   
/* 00438984 90590020 */  lbu   $t9, 0x20($v0)
/* 00438988 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043898C 0040A025 */  move  $s4, $v0
/* 00438990 1279FFF7 */  beq   $s3, $t9, .L00438970
/* 00438994 00000000 */   nop   
.L00438998:
/* 00438998 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 0043899C 02402025 */  move  $a0, $s2
/* 004389A0 0320F809 */  jalr  $t9
/* 004389A4 00000000 */   nop   
/* 004389A8 90480020 */  lbu   $t0, 0x20($v0)
/* 004389AC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004389B0 00409025 */  move  $s2, $v0
/* 004389B4 16680011 */  bne   $s3, $t0, .L004389FC
/* 004389B8 00000000 */   nop   
.L004389BC:
/* 004389BC 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 004389C0 02408025 */  move  $s0, $s2
/* 004389C4 02402025 */  move  $a0, $s2
/* 004389C8 0320F809 */  jalr  $t9
/* 004389CC 00000000 */   nop   
/* 004389D0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004389D4 00409025 */  move  $s2, $v0
/* 004389D8 02002025 */  move  $a0, $s0
/* 004389DC 8F998458 */  lw    $t9, %call16(move_label)($gp)
/* 004389E0 02202825 */  move  $a1, $s1
/* 004389E4 0320F809 */  jalr  $t9
/* 004389E8 00000000 */   nop   
/* 004389EC 92490020 */  lbu   $t1, 0x20($s2)
/* 004389F0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004389F4 1269FFF1 */  beq   $s3, $t1, .L004389BC
/* 004389F8 00000000 */   nop   
.L004389FC:
/* 004389FC 5295000B */  beql  $s4, $s5, .L00438A2C
/* 00438A00 8FB00038 */   lw    $s0, 0x38($sp)
/* 00438A04 8F998454 */  lw    $t9, %call16(cmp_tree_again)($gp)
/* 00438A08 02402025 */  move  $a0, $s2
/* 00438A0C 02802825 */  move  $a1, $s4
/* 00438A10 0320F809 */  jalr  $t9
/* 00438A14 00000000 */   nop   
/* 00438A18 10400003 */  beqz  $v0, .L00438A28
/* 00438A1C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00438A20 1695FFC9 */  bne   $s4, $s5, .L00438948
/* 00438A24 00000000 */   nop   
.L00438A28:
/* 00438A28 8FB00038 */  lw    $s0, 0x38($sp)
.L00438A2C:
/* 00438A2C 1212000D */  beq   $s0, $s2, .L00438A64
/* 00438A30 00000000 */   nop   
.L00438A34:
/* 00438A34 8F998678 */  lw    $t9, %call16(delete_statement)($gp)
/* 00438A38 02002025 */  move  $a0, $s0
/* 00438A3C 0320F809 */  jalr  $t9
/* 00438A40 00000000 */   nop   
/* 00438A44 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00438A48 02002025 */  move  $a0, $s0
/* 00438A4C 8F99845C */  lw    $t9, %call16(get_prior_stm)($gp)
/* 00438A50 0320F809 */  jalr  $t9
/* 00438A54 00000000 */   nop   
/* 00438A58 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00438A5C 1452FFF5 */  bne   $v0, $s2, .L00438A34
/* 00438A60 00408025 */   move  $s0, $v0
.L00438A64:
/* 00438A64 8F998448 */  lw    $t9, %call16(make_new_label)($gp)
/* 00438A68 0320F809 */  jalr  $t9
/* 00438A6C 00000000 */   nop   
/* 00438A70 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00438A74 0040A825 */  move  $s5, $v0
/* 00438A78 00402025 */  move  $a0, $v0
/* 00438A7C 8F99844C */  lw    $t9, %call16(make_new_jump)($gp)
/* 00438A80 0320F809 */  jalr  $t9
/* 00438A84 00000000 */   nop   
/* 00438A88 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00438A8C 00402025 */  move  $a0, $v0
/* 00438A90 02402825 */  move  $a1, $s2
/* 00438A94 8F998444 */  lw    $t9, %call16(append)($gp)
/* 00438A98 0320F809 */  jalr  $t9
/* 00438A9C 00000000 */   nop   
/* 00438AA0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00438AA4 02A02025 */  move  $a0, $s5
/* 00438AA8 02802825 */  move  $a1, $s4
/* 00438AAC 8F998444 */  lw    $t9, %call16(append)($gp)
/* 00438AB0 0320F809 */  jalr  $t9
/* 00438AB4 00000000 */   nop   
/* 00438AB8 8FBC0030 */  lw    $gp, 0x30($sp)
.L00438ABC:
/* 00438ABC 8FBF0034 */  lw    $ra, 0x34($sp)
.L00438AC0:
/* 00438AC0 8FB00018 */  lw    $s0, 0x18($sp)
/* 00438AC4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00438AC8 8FB20020 */  lw    $s2, 0x20($sp)
/* 00438ACC 8FB30024 */  lw    $s3, 0x24($sp)
/* 00438AD0 8FB40028 */  lw    $s4, 0x28($sp)
/* 00438AD4 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00438AD8 03E00008 */  jr    $ra
/* 00438ADC 27BD0038 */   addiu $sp, $sp, 0x38
    .type match_conds, @function
    .size match_conds, .-match_conds
    .end match_conds

glabel cross_jump
    .ent cross_jump
    # 004362FC labelopt
/* 00438AE0 3C1C0FBE */  .cpload $t9
/* 00438AE4 279C6F70 */  
/* 00438AE8 0399E021 */  
/* 00438AEC 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00438AF0 AFB00014 */  sw    $s0, 0x14($sp)
/* 00438AF4 00808025 */  move  $s0, $a0
/* 00438AF8 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00438AFC AFBC0030 */  sw    $gp, 0x30($sp)
/* 00438B00 AFB6002C */  sw    $s6, 0x2c($sp)
/* 00438B04 AFB50028 */  sw    $s5, 0x28($sp)
/* 00438B08 AFB40024 */  sw    $s4, 0x24($sp)
/* 00438B0C AFB30020 */  sw    $s3, 0x20($sp)
/* 00438B10 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00438B14 1080003F */  beqz  $a0, .L00438C14
/* 00438B18 AFB10018 */   sw    $s1, 0x18($sp)
/* 00438B1C 8F968968 */  lw     $s6, %got(current_line)($gp)
/* 00438B20 24150051 */  li    $s5, 81
/* 00438B24 24140026 */  li    $s4, 38
/* 00438B28 24130011 */  li    $s3, 17
/* 00438B2C 24120088 */  li    $s2, 136
/* 00438B30 2411007F */  li    $s1, 127
.L00438B34:
/* 00438B34 10000025 */  b     .L00438BCC
/* 00438B38 92020020 */   lbu   $v0, 0x20($s0)
/* 00438B3C 8E0E0028 */  lw    $t6, 0x28($s0)
.L00438B40:
/* 00438B40 10000031 */  b     .L00438C08
/* 00438B44 AECE0000 */   sw    $t6, ($s6)
/* 00438B48 8E040028 */  lw    $a0, 0x28($s0)
.L00438B4C:
/* 00438B4C 1080002E */  beqz  $a0, .L00438C08
/* 00438B50 24840001 */   addiu $a0, $a0, 1
/* 00438B54 2485FFFF */  addiu $a1, $a0, -1
/* 00438B58 30A50003 */  andi  $a1, $a1, 3
/* 00438B5C 10A00007 */  beqz  $a1, .L00438B7C
/* 00438B60 24020001 */   li    $v0, 1
/* 00438B64 24A30001 */  addiu $v1, $a1, 1
.L00438B68:
/* 00438B68 24420001 */  addiu $v0, $v0, 1
/* 00438B6C 1462FFFE */  bne   $v1, $v0, .L00438B68
/* 00438B70 8E100008 */   lw    $s0, 8($s0)
/* 00438B74 50440025 */  beql  $v0, $a0, .L00438C0C
/* 00438B78 8E100008 */   lw    $s0, 8($s0)
.L00438B7C:
/* 00438B7C 8E100008 */  lw    $s0, 8($s0)
/* 00438B80 24420004 */  addiu $v0, $v0, 4
/* 00438B84 8E100008 */  lw    $s0, 8($s0)
/* 00438B88 8E100008 */  lw    $s0, 8($s0)
/* 00438B8C 1444FFFB */  bne   $v0, $a0, .L00438B7C
/* 00438B90 8E100008 */   lw    $s0, 8($s0)
/* 00438B94 1000001D */  b     .L00438C0C
/* 00438B98 8E100008 */   lw    $s0, 8($s0)
.L00438B9C:
/* 00438B9C 8F998468 */  lw    $t9, %call16(match_uconds)($gp)
/* 00438BA0 02002025 */  move  $a0, $s0
/* 00438BA4 0320F809 */  jalr  $t9
/* 00438BA8 00000000 */   nop   
/* 00438BAC 10000016 */  b     .L00438C08
/* 00438BB0 8FBC0030 */   lw    $gp, 0x30($sp)
.L00438BB4:
/* 00438BB4 8F998470 */  lw    $t9, %call16(match_conds)($gp)
/* 00438BB8 02002025 */  move  $a0, $s0
/* 00438BBC 0320F809 */  jalr  $t9
/* 00438BC0 00000000 */   nop   
/* 00438BC4 10000010 */  b     .L00438C08
/* 00438BC8 8FBC0030 */   lw    $gp, 0x30($sp)
.L00438BCC:
/* 00438BCC 2C410052 */  sltiu $at, $v0, 0x52
/* 00438BD0 14200007 */  bnez  $at, .L00438BF0
/* 00438BD4 00000000 */   nop   
/* 00438BD8 1051FFF6 */  beq   $v0, $s1, .L00438BB4
/* 00438BDC 00000000 */   nop   
/* 00438BE0 1052FFEE */  beq   $v0, $s2, .L00438B9C
/* 00438BE4 00000000 */   nop   
/* 00438BE8 10000008 */  b     .L00438C0C
/* 00438BEC 8E100008 */   lw    $s0, 8($s0)
.L00438BF0:
/* 00438BF0 5053FFD6 */  beql  $v0, $s3, .L00438B4C
/* 00438BF4 8E040028 */   lw    $a0, 0x28($s0)
/* 00438BF8 1054FFEE */  beq   $v0, $s4, .L00438BB4
/* 00438BFC 00000000 */   nop   
/* 00438C00 5055FFCF */  beql  $v0, $s5, .L00438B40
/* 00438C04 8E0E0028 */   lw    $t6, 0x28($s0)
.L00438C08:
/* 00438C08 8E100008 */  lw    $s0, 8($s0)
.L00438C0C:
/* 00438C0C 1600FFC9 */  bnez  $s0, .L00438B34
/* 00438C10 00000000 */   nop   
.L00438C14:
/* 00438C14 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00438C18 8FB00014 */  lw    $s0, 0x14($sp)
/* 00438C1C 8FB10018 */  lw    $s1, 0x18($sp)
/* 00438C20 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00438C24 8FB30020 */  lw    $s3, 0x20($sp)
/* 00438C28 8FB40024 */  lw    $s4, 0x24($sp)
/* 00438C2C 8FB50028 */  lw    $s5, 0x28($sp)
/* 00438C30 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00438C34 03E00008 */  jr    $ra
/* 00438C38 27BD0038 */   addiu $sp, $sp, 0x38
    .type cross_jump, @function
    .size cross_jump, .-cross_jump
    .end cross_jump
)"");
