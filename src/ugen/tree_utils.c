__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000E300:
    # 00449F9C new_tree
    .ascii "BPT here"

    .balign 4
jtbl_1000E308:
    # 0044A28C build_1op
    .gpword .L0044A2D0
    .gpword .L0044A2D0
    .gpword .L0044A380
    .gpword .L0044A380
    .gpword .L0044A380
    .gpword .L0044A380
    .gpword .L0044A2D0
    .gpword .L0044A2D0
    .gpword .L0044A2D0
    .gpword .L0044A380
    .gpword .L0044A380
    .gpword .L0044A380
    .gpword .L0044A2D0
    .gpword .L0044A2D0
    .gpword .L0044A380
    .gpword .L0044A380
    .gpword .L0044A2D0
    .gpword .L0044A380
    .gpword .L0044A2D0

    .balign 4
jtbl_1000E354:
    # 0044A3D4 build_2op
    .gpword .L0044A424
    .gpword .L0044A424
    .gpword .L0044A4D0
    .gpword .L0044A4D0
    .gpword .L0044A4D0
    .gpword .L0044A4D0
    .gpword .L0044A424
    .gpword .L0044A424
    .gpword .L0044A424
    .gpword .L0044A4D0
    .gpword .L0044A4D0
    .gpword .L0044A4D0
    .gpword .L0044A424
    .gpword .L0044A424
    .gpword .L0044A4D0
    .gpword .L0044A4D0
    .gpword .L0044A424
    .gpword .L0044A4D0
    .gpword .L0044A424

RO_1000E3A0:
    # 0044A740 dup_tree
    .ascii "ref_count overflow                                                              "

RO_1000E3F0:
    # 0044A740 dup_tree
    .ascii "tree_utils.p                                                                    "

RO_1000E440:
    # 0044AA84 rvalue
    .ascii "Insufficiant memory                                                             "

RO_1000E490:
    # 0044AA84 rvalue
    .ascii "tree_utils.p                                                                    "

    .balign 4
jtbl_1000E4E0:
    # 0044ADF4 result_type
    .gpword .L0044AE14
    .gpword .L0044AE14
    .gpword .L0044AE1C
    .gpword .L0044AE1C
    .gpword .L0044AE1C
    .gpword .L0044AE1C
    .gpword .L0044AE14
    .gpword .L0044AE14
    .gpword .L0044AE14
    .gpword .L0044AE1C
    .gpword .L0044AE1C
    .gpword .L0044AE1C
    .gpword .L0044AE14
    .gpword .L0044AE14
    .gpword .L0044AE1C
    .gpword .L0044AE1C
    .gpword .L0044AE14
    .gpword .L0044AE1C
    .gpword .L0044AE14

    .balign 4
jtbl_1000E52C:
    # 0044ADF4 result_type
    .gpword .L0044AE08
    .gpword .L0044AE08
    .gpword .L0044AE1C
    .gpword .L0044AE1C
    .gpword .L0044AE1C
    .gpword .L0044AE08
    .gpword .L0044AE1C
    .gpword .L0044AE14
    .gpword .L0044AE14
    .gpword .L0044AE1C
    .gpword .L0044AE14

    .balign 4
jtbl_1000E558:
    # 0044ADF4 result_type
    .gpword .L0044AE14
    .gpword .L0044AE1C
    .gpword .L0044AE1C
    .gpword .L0044AE14

.data
# 10016F60
glabel tree_break
    # 00449F9C new_tree
    .byte 0x00,0x00,0x00,0x00
    .type tree_break, @object
    .size tree_break, .-tree_break # 4

D_10016F64:
    # 0044A538 free_tree
    .byte 0x10,0x10,0x40,0x00,0x42,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00,0x01,0x00,0x88,0x00,0x00

D_10016F78:
    # 0044A538 free_tree
    .byte 0x10,0x10,0x40,0x00,0x40,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00,0x00

D_10016F88:
    # 0044A64C delete_statement
    .byte 0x10,0x10,0x40,0x00,0x42,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00,0x01,0x00,0x88,0x00,0x00

D_10016F9C:
    # 0044A64C delete_statement
    .byte 0x10,0x10,0x40,0x00,0x40,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00



.bss
    .balign 4
# 1002142C
glabel tree_mark
    # 00449F50 initialize_tree
    # 00449F9C new_tree
    # 0044A8FC next_mark
    .space 4
    .size tree_mark, 4
    .type tree_mark, @object

    .balign 4
# 10021430
glabel tree_counter
    # 00449F50 initialize_tree
    # 00449F9C new_tree
    .space 4
    .size tree_counter, 4
    .type tree_counter, @object

    .balign 4
# 10021434
glabel label_id_counter
    # 00449F50 initialize_tree
    # 00449F7C gen_label_id
    .space 4
    .size label_id_counter, 4
    .type label_id_counter, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel initialize_tree
    .ent initialize_tree
    # 0044BF18 main
/* 00449F50 3C1C0FBD */  .cpload $t9
/* 00449F54 279C5B00 */  
/* 00449F58 0399E021 */  
/* 00449F5C 8F818B44 */  lw     $at, %got(tree_mark)($gp)
/* 00449F60 240E001F */  li    $t6, 31
/* 00449F64 AC200000 */  sw    $zero, ($at)
/* 00449F68 8F818B48 */  lw     $at, %got(tree_counter)($gp)
/* 00449F6C AC200000 */  sw    $zero, ($at)
/* 00449F70 8F818B4C */  lw     $at, %got(label_id_counter)($gp)
/* 00449F74 03E00008 */  jr    $ra
/* 00449F78 AC2E0000 */   sw    $t6, ($at)
    .type initialize_tree, @function
    .size initialize_tree, .-initialize_tree
    .end initialize_tree

glabel gen_label_id
    .ent gen_label_id
    # 0041AFE4 func_0041AFE4
    # 0041B07C func_0041B07C
    # 0041B1BC func_0041B1BC
    # 0041B2FC func_0041B2FC
    # 0041B43C func_0041B43C
    # 0041B57C func_0041B57C
    # 0041B6BC func_0041B6BC
    # 0041B7FC func_0041B7FC
    # 0041B93C func_0041B93C
    # 0041BD30 func_0041BD30
    # 0041BDC8 func_0041BDC8
    # 0041BE80 func_0041BE80
    # 0041BF38 func_0041BF38
    # 0041BFF0 func_0041BFF0
    # 0041C0A8 func_0041C0A8
    # 0041C160 func_0041C160
    # 0041C218 func_0041C218
    # 0041C2D0 func_0041C2D0
    # 0041C710 func_0041C710
    # 0041C7AC func_0041C7AC
    # 0041C86C func_0041C86C
    # 0041C92C func_0041C92C
    # 0041C9EC func_0041C9EC
    # 0041CCD0 func_0041CCD0
    # 0041CD64 func_0041CD64
    # 0041CE18 func_0041CE18
    # 0041CECC func_0041CECC
    # 0041CF80 func_0041CF80
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041DF18 func_0041DF18
    # 0041E05C func_0041E05C
    # 0041E1C0 func_0041E1C0
    # 0041E304 func_0041E304
    # 0041EE78 func_0041EE78
    # 0041F368 func_0041F368
    # 0041F4F0 func_0041F4F0
    # 0041F678 func_0041F678
    # 0041F800 func_0041F800
    # 0041F988 func_0041F988
    # 0041FB10 func_0041FB10
    # 00420590 func_00420590
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 00424240 trap
    # 004285F0 eval_fp_cond
    # 004287AC eval_fp_min_max
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 004340D4 func_004340D4
    # 00436F74 make_new_label
    # 0044B2EC func_0044B2EC
/* 00449F7C 3C1C0FBD */  .cpload $t9
/* 00449F80 279C5AD4 */  
/* 00449F84 0399E021 */  
/* 00449F88 8F848B4C */  lw     $a0, %got(label_id_counter)($gp)
/* 00449F8C 8C8E0000 */  lw    $t6, ($a0)
/* 00449F90 25C20001 */  addiu $v0, $t6, 1
/* 00449F94 03E00008 */  jr    $ra
/* 00449F98 AC820000 */   sw    $v0, ($a0)
    .type gen_label_id, @function
    .size gen_label_id, .-gen_label_id
    .end gen_label_id

glabel new_tree
    .ent new_tree
    # 0040EFBC func_0040EFBC
    # 0040F4C8 build_tree
    # 0044A0B4 build_u
    # 0044A130 build_u1
    # 0044A1B8 build_u2
    # 0044A24C build_op
    # 0044A28C build_1op
    # 0044A3D4 build_2op
    # 0044A920 ivalue
    # 0044A9D0 dwvalue
    # 0044AA84 rvalue
/* 00449F9C 3C1C0FBD */  .cpload $t9
/* 00449FA0 279C5AB4 */  
/* 00449FA4 0399E021 */  
/* 00449FA8 8F99881C */  lw    $t9, %call16(alloc_new)($gp)
/* 00449FAC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00449FB0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00449FB4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00449FB8 24040040 */  li    $a0, 64
/* 00449FBC 0320F809 */  jalr  $t9
/* 00449FC0 8F858A58 */   lw     $a1, %got(tree_heap)($gp)
/* 00449FC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00449FC8 AFA20020 */  sw    $v0, 0x20($sp)
/* 00449FCC 240B0001 */  li    $t3, 1
/* 00449FD0 8F848B48 */  lw     $a0, %got(tree_counter)($gp)
/* 00449FD4 2401FFFE */  li    $at, -2
/* 00449FD8 24060008 */  li    $a2, 8
/* 00449FDC 8C8E0000 */  lw    $t6, ($a0)
/* 00449FE0 25CF0001 */  addiu $t7, $t6, 1
/* 00449FE4 AC8F0000 */  sw    $t7, ($a0)
/* 00449FE8 8C430010 */  lw    $v1, 0x10($v0)
/* 00449FEC 904C0019 */  lbu   $t4, 0x19($v0)
/* 00449FF0 AC400008 */  sw    $zero, 8($v0)
/* 00449FF4 0003CA02 */  srl   $t9, $v1, 8
/* 00449FF8 01F94026 */  xor   $t0, $t7, $t9
/* 00449FFC 8F8F8B44 */  lw     $t7, %got(tree_mark)($gp)
/* 0044A000 00084A00 */  sll   $t1, $t0, 8
/* 0044A004 318DFF01 */  andi  $t5, $t4, 0xff01
/* 0044A008 35AE0090 */  ori   $t6, $t5, 0x90
/* 0044A00C 01235026 */  xor   $t2, $t1, $v1
/* 0044A010 AC4A0010 */  sw    $t2, 0x10($v0)
/* 0044A014 AC40000C */  sw    $zero, 0xc($v0)
/* 0044A018 AC400000 */  sw    $zero, ($v0)
/* 0044A01C AC400004 */  sw    $zero, 4($v0)
/* 0044A020 A44B0014 */  sh    $t3, 0x14($v0)
/* 0044A024 A040001A */  sb    $zero, 0x1a($v0)
/* 0044A028 A04E0019 */  sb    $t6, 0x19($v0)
/* 0044A02C A0400018 */  sb    $zero, 0x18($v0)
/* 0044A030 A0400016 */  sb    $zero, 0x16($v0)
/* 0044A034 8DEF0000 */  lw    $t7, ($t7)
/* 0044A038 8F898930 */  lw     $t1, %got(tree_break)($gp)
/* 0044A03C 31D800FF */  andi  $t8, $t6, 0xff
/* 0044A040 0301C824 */  and   $t9, $t8, $at
/* 0044A044 24080060 */  li    $t0, 96
/* 0044A048 A0590019 */  sb    $t9, 0x19($v0)
/* 0044A04C A0480020 */  sb    $t0, 0x20($v0)
/* 0044A050 A4400022 */  sh    $zero, 0x22($v0)
/* 0044A054 AC400030 */  sw    $zero, 0x30($v0)
/* 0044A058 A04F0017 */  sb    $t7, 0x17($v0)
/* 0044A05C 8D290000 */  lw    $t1, ($t1)
/* 0044A060 000A5A02 */  srl   $t3, $t2, 8
/* 0044A064 552B000F */  bnel  $t1, $t3, .L0044A0A4
/* 0044A068 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0044A06C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044A070 8F848950 */  lw     $a0, %got(err)($gp)
/* 0044A074 8F858038 */  lw    $a1, %got(RO_1000E300)($gp)
/* 0044A078 24070008 */  li    $a3, 8
/* 0044A07C 8C840000 */  lw    $a0, ($a0)
/* 0044A080 0320F809 */  jalr  $t9
/* 0044A084 24A5E300 */   addiu $a1, %lo(RO_1000E300) # addiu $a1, $a1, -0x1d00
/* 0044A088 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A08C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0044A090 8F848950 */  lw     $a0, %got(err)($gp)
/* 0044A094 0320F809 */  jalr  $t9
/* 0044A098 8C840000 */   lw    $a0, ($a0)
/* 0044A09C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A0A0 8FBF001C */  lw    $ra, 0x1c($sp)
.L0044A0A4:
/* 0044A0A4 8FA20020 */  lw    $v0, 0x20($sp)
/* 0044A0A8 27BD0028 */  addiu $sp, $sp, 0x28
/* 0044A0AC 03E00008 */  jr    $ra
/* 0044A0B0 00000000 */   nop   
    .type new_tree, @function
    .size new_tree, .-new_tree
    .end new_tree

glabel build_u
    .ent build_u
    # 0040EED4 func_0040EED4
    # 0040F328 func_0040F328
    # 0040F4C8 build_tree
    # 0044202C set_rewrite
    # 004488F4 translate_cvtl
/* 0044A0B4 3C1C0FBD */  .cpload $t9
/* 0044A0B8 279C599C */  
/* 0044A0BC 0399E021 */  
/* 0044A0C0 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0044A0C4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044A0C8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044A0CC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044A0D0 0320F809 */  jalr  $t9
/* 0044A0D4 AFA40020 */   sw    $a0, 0x20($sp)
/* 0044A0D8 8FAE0020 */  lw    $t6, 0x20($sp)
/* 0044A0DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A0E0 8DD80000 */  lw    $t8, ($t6)
/* 0044A0E4 AC580020 */  sw    $t8, 0x20($v0)
/* 0044A0E8 8DCF0004 */  lw    $t7, 4($t6)
/* 0044A0EC AC4F0024 */  sw    $t7, 0x24($v0)
/* 0044A0F0 8DD80008 */  lw    $t8, 8($t6)
/* 0044A0F4 AC580028 */  sw    $t8, 0x28($v0)
/* 0044A0F8 8DCF000C */  lw    $t7, 0xc($t6)
/* 0044A0FC AC4F002C */  sw    $t7, 0x2c($v0)
/* 0044A100 8DD80010 */  lw    $t8, 0x10($t6)
/* 0044A104 AC580030 */  sw    $t8, 0x30($v0)
/* 0044A108 8DCF0014 */  lw    $t7, 0x14($t6)
/* 0044A10C AC4F0034 */  sw    $t7, 0x34($v0)
/* 0044A110 8DD80018 */  lw    $t8, 0x18($t6)
/* 0044A114 AC580038 */  sw    $t8, 0x38($v0)
/* 0044A118 8DCF001C */  lw    $t7, 0x1c($t6)
/* 0044A11C AC4F003C */  sw    $t7, 0x3c($v0)
/* 0044A120 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044A124 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044A128 03E00008 */  jr    $ra
/* 0044A12C 00000000 */   nop   
    .type build_u, @function
    .size build_u, .-build_u
    .end build_u

glabel build_u1
    .ent build_u1
    # 0040F328 func_0040F328
    # 0040F4C8 build_tree
/* 0044A130 3C1C0FBD */  .cpload $t9
/* 0044A134 279C5920 */  
/* 0044A138 0399E021 */  
/* 0044A13C 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0044A140 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044A144 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044A148 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044A14C AFA40020 */  sw    $a0, 0x20($sp)
/* 0044A150 0320F809 */  jalr  $t9
/* 0044A154 AFA50024 */   sw    $a1, 0x24($sp)
/* 0044A158 8FAE0020 */  lw    $t6, 0x20($sp)
/* 0044A15C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A160 8DD80000 */  lw    $t8, ($t6)
/* 0044A164 AC580020 */  sw    $t8, 0x20($v0)
/* 0044A168 8DCF0004 */  lw    $t7, 4($t6)
/* 0044A16C AC4F0024 */  sw    $t7, 0x24($v0)
/* 0044A170 8DD80008 */  lw    $t8, 8($t6)
/* 0044A174 AC580028 */  sw    $t8, 0x28($v0)
/* 0044A178 8DCF000C */  lw    $t7, 0xc($t6)
/* 0044A17C AC4F002C */  sw    $t7, 0x2c($v0)
/* 0044A180 8DD80010 */  lw    $t8, 0x10($t6)
/* 0044A184 AC580030 */  sw    $t8, 0x30($v0)
/* 0044A188 8DCF0014 */  lw    $t7, 0x14($t6)
/* 0044A18C AC4F0034 */  sw    $t7, 0x34($v0)
/* 0044A190 8DD80018 */  lw    $t8, 0x18($t6)
/* 0044A194 AC580038 */  sw    $t8, 0x38($v0)
/* 0044A198 8DCF001C */  lw    $t7, 0x1c($t6)
/* 0044A19C AC4F003C */  sw    $t7, 0x3c($v0)
/* 0044A1A0 8FB90024 */  lw    $t9, 0x24($sp)
/* 0044A1A4 AC590000 */  sw    $t9, ($v0)
/* 0044A1A8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044A1AC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044A1B0 03E00008 */  jr    $ra
/* 0044A1B4 00000000 */   nop   
    .type build_u1, @function
    .size build_u1, .-build_u1
    .end build_u1

glabel build_u2
    .ent build_u2
    # 0040F4C8 build_tree
/* 0044A1B8 3C1C0FBD */  .cpload $t9
/* 0044A1BC 279C5898 */  
/* 0044A1C0 0399E021 */  
/* 0044A1C4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044A1C8 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0044A1CC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044A1D0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044A1D4 AFA40020 */  sw    $a0, 0x20($sp)
/* 0044A1D8 AFA50024 */  sw    $a1, 0x24($sp)
/* 0044A1DC 0320F809 */  jalr  $t9
/* 0044A1E0 AFA60028 */   sw    $a2, 0x28($sp)
/* 0044A1E4 8FAE0020 */  lw    $t6, 0x20($sp)
/* 0044A1E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A1EC 8DD80000 */  lw    $t8, ($t6)
/* 0044A1F0 AC580020 */  sw    $t8, 0x20($v0)
/* 0044A1F4 8DCF0004 */  lw    $t7, 4($t6)
/* 0044A1F8 AC4F0024 */  sw    $t7, 0x24($v0)
/* 0044A1FC 8DD80008 */  lw    $t8, 8($t6)
/* 0044A200 AC580028 */  sw    $t8, 0x28($v0)
/* 0044A204 8DCF000C */  lw    $t7, 0xc($t6)
/* 0044A208 AC4F002C */  sw    $t7, 0x2c($v0)
/* 0044A20C 8DD80010 */  lw    $t8, 0x10($t6)
/* 0044A210 AC580030 */  sw    $t8, 0x30($v0)
/* 0044A214 8DCF0014 */  lw    $t7, 0x14($t6)
/* 0044A218 AC4F0034 */  sw    $t7, 0x34($v0)
/* 0044A21C 8DD80018 */  lw    $t8, 0x18($t6)
/* 0044A220 AC580038 */  sw    $t8, 0x38($v0)
/* 0044A224 8DCF001C */  lw    $t7, 0x1c($t6)
/* 0044A228 AC4F003C */  sw    $t7, 0x3c($v0)
/* 0044A22C 8FB90024 */  lw    $t9, 0x24($sp)
/* 0044A230 AC590000 */  sw    $t9, ($v0)
/* 0044A234 8FA80028 */  lw    $t0, 0x28($sp)
/* 0044A238 AC480004 */  sw    $t0, 4($v0)
/* 0044A23C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044A240 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044A244 03E00008 */  jr    $ra
/* 0044A248 00000000 */   nop   
    .type build_u2, @function
    .size build_u2, .-build_u2
    .end build_u2

glabel build_op
    .ent build_op
    # 0040E144 find_label
    # 0040F1BC func_0040F1BC
    # 0040F4C8 build_tree
    # 00436F74 make_new_label
    # 004395DC fix_amt_ref
/* 0044A24C 3C1C0FBD */  .cpload $t9
/* 0044A250 279C5804 */  
/* 0044A254 0399E021 */  
/* 0044A258 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0044A25C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044A260 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044A264 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044A268 0320F809 */  jalr  $t9
/* 0044A26C AFA40020 */   sw    $a0, 0x20($sp)
/* 0044A270 93AE0023 */  lbu   $t6, 0x23($sp)
/* 0044A274 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A278 A04E0020 */  sb    $t6, 0x20($v0)
/* 0044A27C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044A280 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044A284 03E00008 */  jr    $ra
/* 0044A288 00000000 */   nop   
    .type build_op, @function
    .size build_op, .-build_op
    .end build_op

glabel build_1op
    .ent build_1op
    # 0040F4C8 build_tree
    # 004395DC fix_amt_ref
    # 00441ABC gen_set_str
    # 0044202C set_rewrite
    # 00442968 set_rewrite_indexed
    # 004432FC translate
    # 00447E14 load_cse
/* 0044A28C 3C1C0FBD */  .cpload $t9
/* 0044A290 279C57C4 */  
/* 0044A294 0399E021 */  
/* 0044A298 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0044A29C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044A2A0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044A2A4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044A2A8 AFA40020 */  sw    $a0, 0x20($sp)
/* 0044A2AC 0320F809 */  jalr  $t9
/* 0044A2B0 AFA50024 */   sw    $a1, 0x24($sp)
/* 0044A2B4 93AE0023 */  lbu   $t6, 0x23($sp)
/* 0044A2B8 8FA50024 */  lw    $a1, 0x24($sp)
/* 0044A2BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A2C0 A04E0020 */  sb    $t6, 0x20($v0)
/* 0044A2C4 00402025 */  move  $a0, $v0
/* 0044A2C8 10000011 */  b     .L0044A310
/* 0044A2CC 90A30020 */   lbu   $v1, 0x20($a1)
.L0044A2D0:
/* 0044A2D0 904F0021 */  lbu   $t7, 0x21($v0)
.L0044A2D4:
/* 0044A2D4 2401FFE0 */  li    $at, -32
/* 0044A2D8 01E1C024 */  and   $t8, $t7, $at
/* 0044A2DC 37190008 */  ori   $t9, $t8, 8
/* 0044A2E0 10000035 */  b     .L0044A3B8
/* 0044A2E4 A0590021 */   sb    $t9, 0x21($v0)
.L0044A2E8:
/* 0044A2E8 8F888A28 */  lw     $t0, %got(addr_dtype)($gp)
/* 0044A2EC 90430021 */  lbu   $v1, 0x21($v0)
/* 0044A2F0 91080000 */  lbu   $t0, ($t0)
/* 0044A2F4 00034EC0 */  sll   $t1, $v1, 0x1b
/* 0044A2F8 000956C2 */  srl   $t2, $t1, 0x1b
/* 0044A2FC 010A5826 */  xor   $t3, $t0, $t2
/* 0044A300 316C001F */  andi  $t4, $t3, 0x1f
/* 0044A304 01836826 */  xor   $t5, $t4, $v1
/* 0044A308 1000002B */  b     .L0044A3B8
/* 0044A30C A04D0021 */   sb    $t5, 0x21($v0)
.L0044A310:
/* 0044A310 2C610048 */  sltiu $at, $v1, 0x48
/* 0044A314 14200007 */  bnez  $at, .L0044A334
/* 0044A318 2C61004F */   sltiu $at, $v1, 0x4f
/* 0044A31C 14200021 */  bnez  $at, .L0044A3A4
/* 0044A320 2401005F */   li    $at, 95
/* 0044A324 5061FFEB */  beql  $v1, $at, .L0044A2D4
/* 0044A328 904F0021 */   lbu   $t7, 0x21($v0)
/* 0044A32C 10000015 */  b     .L0044A384
/* 0044A330 90430021 */   lbu   $v1, 0x21($v0)
.L0044A334:
/* 0044A334 24010023 */  li    $at, 35
/* 0044A338 5061FFE6 */  beql  $v1, $at, .L0044A2D4
/* 0044A33C 904F0021 */   lbu   $t7, 0x21($v0)
/* 0044A340 2C61003B */  sltiu $at, $v1, 0x3b
/* 0044A344 1020000B */  beqz  $at, .L0044A374
/* 0044A348 246EFFD8 */   addiu $t6, $v1, -0x28
/* 0044A34C 2DC10013 */  sltiu $at, $t6, 0x13
/* 0044A350 5020000C */  beql  $at, $zero, .L0044A384
/* 0044A354 90430021 */   lbu   $v1, 0x21($v0)
/* 0044A358 8F818038 */  lw    $at, %got(jtbl_1000E308)($gp)
/* 0044A35C 000E7080 */  sll   $t6, $t6, 2
/* 0044A360 002E0821 */  addu  $at, $at, $t6
/* 0044A364 8C2EE308 */  lw    $t6, %lo(jtbl_1000E308)($at)
/* 0044A368 01DC7021 */  addu  $t6, $t6, $gp
/* 0044A36C 01C00008 */  jr    $t6
/* 0044A370 00000000 */   nop   
.L0044A374:
/* 0044A374 24010047 */  li    $at, 71
/* 0044A378 1061FFDB */  beq   $v1, $at, .L0044A2E8
/* 0044A37C 00000000 */   nop   
.L0044A380:
/* 0044A380 90430021 */  lbu   $v1, 0x21($v0)
.L0044A384:
/* 0044A384 90B80021 */  lbu   $t8, 0x21($a1)
/* 0044A388 0003CEC0 */  sll   $t9, $v1, 0x1b
/* 0044A38C 00194EC2 */  srl   $t1, $t9, 0x1b
/* 0044A390 03094026 */  xor   $t0, $t8, $t1
/* 0044A394 310A001F */  andi  $t2, $t0, 0x1f
/* 0044A398 01435826 */  xor   $t3, $t2, $v1
/* 0044A39C 10000006 */  b     .L0044A3B8
/* 0044A3A0 A04B0021 */   sb    $t3, 0x21($v0)
.L0044A3A4:
/* 0044A3A4 2C61004D */  sltiu $at, $v1, 0x4d
/* 0044A3A8 5020FFCA */  beql  $at, $zero, .L0044A2D4
/* 0044A3AC 904F0021 */   lbu   $t7, 0x21($v0)
/* 0044A3B0 1000FFF4 */  b     .L0044A384
/* 0044A3B4 90430021 */   lbu   $v1, 0x21($v0)
.L0044A3B8:
/* 0044A3B8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044A3BC AC850000 */  sw    $a1, ($a0)
/* 0044A3C0 8CAC0028 */  lw    $t4, 0x28($a1)
/* 0044A3C4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044A3C8 00801025 */  move  $v0, $a0
/* 0044A3CC 03E00008 */  jr    $ra
/* 0044A3D0 AC8C0028 */   sw    $t4, 0x28($a0)
    .type build_1op, @function
    .size build_1op, .-build_1op
    .end build_1op

glabel build_2op
    .ent build_2op
    # 0040E2AC func_0040E2AC
    # 0040F4C8 build_tree
    # 00436FD0 make_new_jump
    # 00441C78 gen_set_istr
    # 00441E4C gen_set_equ
    # 0044202C set_rewrite
    # 00442968 set_rewrite_indexed
    # 004432FC translate
    # 004488F4 translate_cvtl
    # 00448EC8 build_ucond0
/* 0044A3D4 3C1C0FBD */  .cpload $t9
/* 0044A3D8 279C567C */  
/* 0044A3DC 0399E021 */  
/* 0044A3E0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044A3E4 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0044A3E8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044A3EC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044A3F0 AFA40020 */  sw    $a0, 0x20($sp)
/* 0044A3F4 AFA60028 */  sw    $a2, 0x28($sp)
/* 0044A3F8 0320F809 */  jalr  $t9
/* 0044A3FC AFA50024 */   sw    $a1, 0x24($sp)
/* 0044A400 93A30023 */  lbu   $v1, 0x23($sp)
/* 0044A404 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A408 8FA50024 */  lw    $a1, 0x24($sp)
/* 0044A40C 24010088 */  li    $at, 136
/* 0044A410 00402025 */  move  $a0, $v0
/* 0044A414 1061003F */  beq   $v1, $at, .L0044A514
/* 0044A418 A0430020 */   sb    $v1, 0x20($v0)
/* 0044A41C 10000010 */  b     .L0044A460
/* 0044A420 90A30020 */   lbu   $v1, 0x20($a1)
.L0044A424:
/* 0044A424 904E0021 */  lbu   $t6, 0x21($v0)
.L0044A428:
/* 0044A428 31CFFFE0 */  andi  $t7, $t6, 0xffe0
/* 0044A42C 35F80008 */  ori   $t8, $t7, 8
/* 0044A430 10000036 */  b     .L0044A50C
/* 0044A434 A0580021 */   sb    $t8, 0x21($v0)
.L0044A438:
/* 0044A438 8F998A28 */  lw     $t9, %got(addr_dtype)($gp)
/* 0044A43C 90430021 */  lbu   $v1, 0x21($v0)
/* 0044A440 93390000 */  lbu   $t9, ($t9)
/* 0044A444 000346C0 */  sll   $t0, $v1, 0x1b
/* 0044A448 00084EC2 */  srl   $t1, $t0, 0x1b
/* 0044A44C 03295026 */  xor   $t2, $t9, $t1
/* 0044A450 314B001F */  andi  $t3, $t2, 0x1f
/* 0044A454 01636026 */  xor   $t4, $t3, $v1
/* 0044A458 1000002C */  b     .L0044A50C
/* 0044A45C A04C0021 */   sb    $t4, 0x21($v0)
.L0044A460:
/* 0044A460 2C610048 */  sltiu $at, $v1, 0x48
/* 0044A464 14200007 */  bnez  $at, .L0044A484
/* 0044A468 2C61004F */   sltiu $at, $v1, 0x4f
/* 0044A46C 14200022 */  bnez  $at, .L0044A4F8
/* 0044A470 2401005F */   li    $at, 95
/* 0044A474 5061FFEC */  beql  $v1, $at, .L0044A428
/* 0044A478 904E0021 */   lbu   $t6, 0x21($v0)
/* 0044A47C 10000015 */  b     .L0044A4D4
/* 0044A480 90430021 */   lbu   $v1, 0x21($v0)
.L0044A484:
/* 0044A484 24010023 */  li    $at, 35
/* 0044A488 5061FFE7 */  beql  $v1, $at, .L0044A428
/* 0044A48C 904E0021 */   lbu   $t6, 0x21($v0)
/* 0044A490 2C61003B */  sltiu $at, $v1, 0x3b
/* 0044A494 1020000B */  beqz  $at, .L0044A4C4
/* 0044A498 246DFFD8 */   addiu $t5, $v1, -0x28
/* 0044A49C 2DA10013 */  sltiu $at, $t5, 0x13
/* 0044A4A0 5020000C */  beql  $at, $zero, .L0044A4D4
/* 0044A4A4 90430021 */   lbu   $v1, 0x21($v0)
/* 0044A4A8 8F818038 */  lw    $at, %got(jtbl_1000E354)($gp)
/* 0044A4AC 000D6880 */  sll   $t5, $t5, 2
/* 0044A4B0 002D0821 */  addu  $at, $at, $t5
/* 0044A4B4 8C2DE354 */  lw    $t5, %lo(jtbl_1000E354)($at)
/* 0044A4B8 01BC6821 */  addu  $t5, $t5, $gp
/* 0044A4BC 01A00008 */  jr    $t5
/* 0044A4C0 00000000 */   nop   
.L0044A4C4:
/* 0044A4C4 24010047 */  li    $at, 71
/* 0044A4C8 1061FFDB */  beq   $v1, $at, .L0044A438
/* 0044A4CC 00000000 */   nop   
.L0044A4D0:
/* 0044A4D0 90430021 */  lbu   $v1, 0x21($v0)
.L0044A4D4:
/* 0044A4D4 90AE0021 */  lbu   $t6, 0x21($a1)
/* 0044A4D8 0003C6C0 */  sll   $t8, $v1, 0x1b
/* 0044A4DC 001846C2 */  srl   $t0, $t8, 0x1b
/* 0044A4E0 31CF001F */  andi  $t7, $t6, 0x1f
/* 0044A4E4 01E8C826 */  xor   $t9, $t7, $t0
/* 0044A4E8 3329001F */  andi  $t1, $t9, 0x1f
/* 0044A4EC 01235026 */  xor   $t2, $t1, $v1
/* 0044A4F0 10000006 */  b     .L0044A50C
/* 0044A4F4 A04A0021 */   sb    $t2, 0x21($v0)
.L0044A4F8:
/* 0044A4F8 2C61004D */  sltiu $at, $v1, 0x4d
/* 0044A4FC 5020FFCA */  beql  $at, $zero, .L0044A428
/* 0044A500 904E0021 */   lbu   $t6, 0x21($v0)
/* 0044A504 1000FFF3 */  b     .L0044A4D4
/* 0044A508 90430021 */   lbu   $v1, 0x21($v0)
.L0044A50C:
/* 0044A50C 8CAB0028 */  lw    $t3, 0x28($a1)
/* 0044A510 AC4B0028 */  sw    $t3, 0x28($v0)
.L0044A514:
/* 0044A514 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044A518 8FAC0028 */  lw    $t4, 0x28($sp)
/* 0044A51C AC850000 */  sw    $a1, ($a0)
/* 0044A520 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044A524 00801025 */  move  $v0, $a0
/* 0044A528 03E00008 */  jr    $ra
/* 0044A52C AC8C0004 */   sw    $t4, 4($a0)
    .type build_2op, @function
    .size build_2op, .-build_2op
    .end build_2op

glabel free_node
    .ent free_node
    # 00446E94 free_tree_and_cse
    # 0044A538 free_tree
/* 0044A530 03E00008 */  jr    $ra
/* 0044A534 AFA40000 */   sw    $a0, ($sp)
    .type free_node, @function
    .size free_node, .-free_node
    .end free_node

glabel free_tree
    .ent free_tree
    # 0040F4C8 build_tree
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 00434B28 fold
    # 00434E4C fold1
    # 00441ABC gen_set_str
    # 00441C78 gen_set_istr
    # 00441E4C gen_set_equ
    # 00442968 set_rewrite_indexed
    # 00447E14 load_cse
    # 004488F4 translate_cvtl
    # 0044A538 free_tree
    # 0044A64C delete_statement
/* 0044A538 3C1C0FBD */  .cpload $t9
/* 0044A53C 279C5518 */  
/* 0044A540 0399E021 */  
/* 0044A544 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0044A548 AFB00018 */  sw    $s0, 0x18($sp)
/* 0044A54C 00808025 */  move  $s0, $a0
/* 0044A550 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0044A554 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0044A558 AFB1001C */  sw    $s1, 0x1c($sp)
.L0044A55C:
/* 0044A55C 960E0014 */  lhu   $t6, 0x14($s0)
/* 0044A560 25CFFFFF */  addiu $t7, $t6, -1
/* 0044A564 31F8FFFF */  andi  $t8, $t7, 0xffff
/* 0044A568 17000033 */  bnez  $t8, .L0044A638
/* 0044A56C A60F0014 */   sh    $t7, 0x14($s0)
/* 0044A570 8E040000 */  lw    $a0, ($s0)
/* 0044A574 50800014 */  beql  $a0, $zero, .L0044A5C8
/* 0044A578 8E040004 */   lw    $a0, 4($s0)
/* 0044A57C 92190020 */  lbu   $t9, 0x20($s0)
/* 0044A580 2F280080 */  sltiu $t0, $t9, 0x80
/* 0044A584 11000009 */  beqz  $t0, .L0044A5AC
/* 0044A588 00000000 */   nop   
/* 0044A58C 8F8B8038 */  lw    $t3, %got(D_10016F78)($gp)
/* 0044A590 00194943 */  sra   $t1, $t9, 5
/* 0044A594 00095080 */  sll   $t2, $t1, 2
/* 0044A598 256B6F78 */  addiu $t3, %lo(D_10016F78) # addiu $t3, $t3, 0x6f78
/* 0044A59C 016A6021 */  addu  $t4, $t3, $t2
/* 0044A5A0 8D8D0000 */  lw    $t5, ($t4)
/* 0044A5A4 032D7004 */  sllv  $t6, $t5, $t9
/* 0044A5A8 29C80000 */  slti  $t0, $t6, 0
.L0044A5AC:
/* 0044A5AC 55000006 */  bnel  $t0, $zero, .L0044A5C8
/* 0044A5B0 8E040004 */   lw    $a0, 4($s0)
/* 0044A5B4 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 0044A5B8 0320F809 */  jalr  $t9
/* 0044A5BC 00000000 */   nop   
/* 0044A5C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0044A5C4 8E040004 */  lw    $a0, 4($s0)
.L0044A5C8:
/* 0044A5C8 10800013 */  beqz  $a0, .L0044A618
/* 0044A5CC 00000000 */   nop   
/* 0044A5D0 92180020 */  lbu   $t8, 0x20($s0)
/* 0044A5D4 2F0900A0 */  sltiu $t1, $t8, 0xa0
/* 0044A5D8 11200009 */  beqz  $t1, .L0044A600
/* 0044A5DC 00000000 */   nop   
/* 0044A5E0 8F8C8038 */  lw    $t4, %got(D_10016F64)($gp)
/* 0044A5E4 00185943 */  sra   $t3, $t8, 5
/* 0044A5E8 000B5080 */  sll   $t2, $t3, 2
/* 0044A5EC 258C6F64 */  addiu $t4, %lo(D_10016F64) # addiu $t4, $t4, 0x6f64
/* 0044A5F0 018A6821 */  addu  $t5, $t4, $t2
/* 0044A5F4 8DB90000 */  lw    $t9, ($t5)
/* 0044A5F8 03197004 */  sllv  $t6, $t9, $t8
/* 0044A5FC 29C90000 */  slti  $t1, $t6, 0
.L0044A600:
/* 0044A600 15200005 */  bnez  $t1, .L0044A618
/* 0044A604 00000000 */   nop   
/* 0044A608 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 0044A60C 0320F809 */  jalr  $t9
/* 0044A610 00000000 */   nop   
/* 0044A614 8FBC0020 */  lw    $gp, 0x20($sp)
.L0044A618:
/* 0044A618 8F998670 */  lw    $t9, %call16(free_node)($gp)
/* 0044A61C 8E110008 */  lw    $s1, 8($s0)
/* 0044A620 02002025 */  move  $a0, $s0
/* 0044A624 0320F809 */  jalr  $t9
/* 0044A628 00000000 */   nop   
/* 0044A62C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0044A630 1620FFCA */  bnez  $s1, .L0044A55C
/* 0044A634 02208025 */   move  $s0, $s1
.L0044A638:
/* 0044A638 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0044A63C 8FB00018 */  lw    $s0, 0x18($sp)
/* 0044A640 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0044A644 03E00008 */  jr    $ra
/* 0044A648 27BD0028 */   addiu $sp, $sp, 0x28
    .type free_tree, @function
    .size free_tree, .-free_tree
    .end free_tree

glabel delete_statement
    .ent delete_statement
    # 004351C0 func_004351C0
    # 004352AC func_004352AC
    # 0043595C func_0043595C
    # 00436148 func_00436148
    # 00438320 match_uconds
    # 004387D8 match_conds
    # 004432FC translate
/* 0044A64C 3C1C0FBD */  .cpload $t9
/* 0044A650 279C5404 */  
/* 0044A654 0399E021 */  
/* 0044A658 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044A65C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044A660 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044A664 8C860000 */  lw    $a2, ($a0)
/* 0044A668 00802825 */  move  $a1, $a0
/* 0044A66C 50C00017 */  beql  $a2, $zero, .L0044A6CC
/* 0044A670 8CA40004 */   lw    $a0, 4($a1)
/* 0044A674 908E0020 */  lbu   $t6, 0x20($a0)
/* 0044A678 2DCF0080 */  sltiu $t7, $t6, 0x80
/* 0044A67C 11E00009 */  beqz  $t7, .L0044A6A4
/* 0044A680 00000000 */   nop   
/* 0044A684 8F888038 */  lw    $t0, %got(D_10016F9C)($gp)
/* 0044A688 000EC143 */  sra   $t8, $t6, 5
/* 0044A68C 0018C880 */  sll   $t9, $t8, 2
/* 0044A690 25086F9C */  addiu $t0, %lo(D_10016F9C) # addiu $t0, $t0, 0x6f9c
/* 0044A694 01194821 */  addu  $t1, $t0, $t9
/* 0044A698 8D2A0000 */  lw    $t2, ($t1)
/* 0044A69C 01CA5804 */  sllv  $t3, $t2, $t6
/* 0044A6A0 296F0000 */  slti  $t7, $t3, 0
.L0044A6A4:
/* 0044A6A4 55E00009 */  bnel  $t7, $zero, .L0044A6CC
/* 0044A6A8 8CA40004 */   lw    $a0, 4($a1)
/* 0044A6AC 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 0044A6B0 00C02025 */  move  $a0, $a2
/* 0044A6B4 AFA50020 */  sw    $a1, 0x20($sp)
/* 0044A6B8 0320F809 */  jalr  $t9
/* 0044A6BC 00000000 */   nop   
/* 0044A6C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A6C4 8FA50020 */  lw    $a1, 0x20($sp)
/* 0044A6C8 8CA40004 */  lw    $a0, 4($a1)
.L0044A6CC:
/* 0044A6CC 50800016 */  beql  $a0, $zero, .L0044A728
/* 0044A6D0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0044A6D4 90AD0020 */  lbu   $t5, 0x20($a1)
/* 0044A6D8 2DB800A0 */  sltiu $t8, $t5, 0xa0
/* 0044A6DC 13000009 */  beqz  $t8, .L0044A704
/* 0044A6E0 00000000 */   nop   
/* 0044A6E4 8F898038 */  lw    $t1, %got(D_10016F88)($gp)
/* 0044A6E8 000D4143 */  sra   $t0, $t5, 5
/* 0044A6EC 0008C880 */  sll   $t9, $t0, 2
/* 0044A6F0 25296F88 */  addiu $t1, %lo(D_10016F88) # addiu $t1, $t1, 0x6f88
/* 0044A6F4 01395021 */  addu  $t2, $t1, $t9
/* 0044A6F8 8D4E0000 */  lw    $t6, ($t2)
/* 0044A6FC 01AE5804 */  sllv  $t3, $t6, $t5
/* 0044A700 29780000 */  slti  $t8, $t3, 0
.L0044A704:
/* 0044A704 57000008 */  bnel  $t8, $zero, .L0044A728
/* 0044A708 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0044A70C 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 0044A710 AFA50020 */  sw    $a1, 0x20($sp)
/* 0044A714 0320F809 */  jalr  $t9
/* 0044A718 00000000 */   nop   
/* 0044A71C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A720 8FA50020 */  lw    $a1, 0x20($sp)
/* 0044A724 8FBF001C */  lw    $ra, 0x1c($sp)
.L0044A728:
/* 0044A728 240F0060 */  li    $t7, 96
/* 0044A72C ACA00000 */  sw    $zero, ($a1)
/* 0044A730 ACA00004 */  sw    $zero, 4($a1)
/* 0044A734 A0AF0020 */  sb    $t7, 0x20($a1)
/* 0044A738 03E00008 */  jr    $ra
/* 0044A73C 27BD0020 */   addiu $sp, $sp, 0x20
    .type delete_statement, @function
    .size delete_statement, .-delete_statement
    .end delete_statement

glabel dup_tree
    .ent dup_tree
    # 0040F4C8 build_tree
    # 00434E4C fold1
    # 00441C78 gen_set_istr
    # 0044202C set_rewrite
    # 00442968 set_rewrite_indexed
    # 004432FC translate
    # 00446C08 cse
    # 00447E14 load_cse
    # 004488F4 translate_cvtl
    # 00448EC8 build_ucond0
/* 0044A740 3C1C0FBD */  .cpload $t9
/* 0044A744 279C5310 */  
/* 0044A748 0399E021 */  
/* 0044A74C 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 0044A750 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 0044A754 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0044A758 AFB000AC */  sw    $s0, 0xac($sp)
/* 0044A75C 00808025 */  move  $s0, $a0
/* 0044A760 0320F809 */  jalr  $t9
/* 0044A764 AFBC00B0 */   sw    $gp, 0xb0($sp)
/* 0044A768 1040001A */  beqz  $v0, .L0044A7D4
/* 0044A76C 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0044A770 92040021 */  lbu   $a0, 0x21($s0)
/* 0044A774 3C010501 */  lui   $at, 0x501
/* 0044A778 3084001F */  andi  $a0, $a0, 0x1f
/* 0044A77C 2C8E0020 */  sltiu $t6, $a0, 0x20
/* 0044A780 000E7823 */  negu  $t7, $t6
/* 0044A784 01E1C024 */  and   $t8, $t7, $at
/* 0044A788 0098C804 */  sllv  $t9, $t8, $a0
/* 0044A78C 07210009 */  bgez  $t9, .L0044A7B4
/* 0044A790 00000000 */   nop   
/* 0044A794 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0044A798 8E050030 */  lw    $a1, 0x30($s0)
/* 0044A79C 8E060034 */  lw    $a2, 0x34($s0)
/* 0044A7A0 0320F809 */  jalr  $t9
/* 0044A7A4 00000000 */   nop   
/* 0044A7A8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044A7AC 1000004E */  b     .L0044A8E8
/* 0044A7B0 00401825 */   move  $v1, $v0
.L0044A7B4:
/* 0044A7B4 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0044A7B8 00002825 */  move  $a1, $zero
/* 0044A7BC 8E060030 */  lw    $a2, 0x30($s0)
/* 0044A7C0 0320F809 */  jalr  $t9
/* 0044A7C4 00000000 */   nop   
/* 0044A7C8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044A7CC 10000046 */  b     .L0044A8E8
/* 0044A7D0 00401825 */   move  $v1, $v0
.L0044A7D4:
/* 0044A7D4 96020014 */  lhu   $v0, 0x14($s0)
/* 0044A7D8 3401FFFF */  li    $at, 65535
/* 0044A7DC 24040004 */  li    $a0, 4
/* 0044A7E0 1441003F */  bne   $v0, $at, .L0044A8E0
/* 0044A7E4 244C0001 */   addiu $t4, $v0, 1
/* 0044A7E8 8F888038 */  lw    $t0, %got(RO_1000E3F0)($gp)
/* 0044A7EC 2405012C */  li    $a1, 300
/* 0044A7F0 03A05825 */  move  $t3, $sp
/* 0044A7F4 2508E3F0 */  addiu $t0, %lo(RO_1000E3F0) # addiu $t0, $t0, -0x1c10
/* 0044A7F8 250C0048 */  addiu $t4, $t0, 0x48
.L0044A7FC:
/* 0044A7FC 890A0000 */  lwl   $t2, ($t0)
/* 0044A800 990A0003 */  lwr   $t2, 3($t0)
/* 0044A804 2508000C */  addiu $t0, $t0, 0xc
/* 0044A808 256B000C */  addiu $t3, $t3, 0xc
/* 0044A80C A96AFFFC */  swl   $t2, -4($t3)
/* 0044A810 B96AFFFF */  swr   $t2, -1($t3)
/* 0044A814 8909FFF8 */  lwl   $t1, -8($t0)
/* 0044A818 9909FFFB */  lwr   $t1, -5($t0)
/* 0044A81C A9690000 */  swl   $t1, ($t3)
/* 0044A820 B9690003 */  swr   $t1, 3($t3)
/* 0044A824 890AFFFC */  lwl   $t2, -4($t0)
/* 0044A828 990AFFFF */  lwr   $t2, -1($t0)
/* 0044A82C A96A0004 */  swl   $t2, 4($t3)
/* 0044A830 150CFFF2 */  bne   $t0, $t4, .L0044A7FC
/* 0044A834 B96A0007 */   swr   $t2, 7($t3)
/* 0044A838 890A0000 */  lwl   $t2, ($t0)
/* 0044A83C 990A0003 */  lwr   $t2, 3($t0)
/* 0044A840 8F8D8038 */  lw    $t5, %got(RO_1000E3A0)($gp)
/* 0044A844 03A0C025 */  move  $t8, $sp
/* 0044A848 A96A0008 */  swl   $t2, 8($t3)
/* 0044A84C B96A000B */  swr   $t2, 0xb($t3)
/* 0044A850 89090004 */  lwl   $t1, 4($t0)
/* 0044A854 99090007 */  lwr   $t1, 7($t0)
/* 0044A858 25ADE3A0 */  addiu $t5, %lo(RO_1000E3A0) # addiu $t5, $t5, -0x1c60
/* 0044A85C 25B90048 */  addiu $t9, $t5, 0x48
/* 0044A860 A969000C */  swl   $t1, 0xc($t3)
/* 0044A864 B969000F */  swr   $t1, 0xf($t3)
.L0044A868:
/* 0044A868 89AF0000 */  lwl   $t7, ($t5)
/* 0044A86C 99AF0003 */  lwr   $t7, 3($t5)
/* 0044A870 25AD000C */  addiu $t5, $t5, 0xc
/* 0044A874 2718000C */  addiu $t8, $t8, 0xc
/* 0044A878 AB0F004C */  swl   $t7, 0x4c($t8)
/* 0044A87C BB0F004F */  swr   $t7, 0x4f($t8)
/* 0044A880 89AEFFF8 */  lwl   $t6, -8($t5)
/* 0044A884 99AEFFFB */  lwr   $t6, -5($t5)
/* 0044A888 AB0E0050 */  swl   $t6, 0x50($t8)
/* 0044A88C BB0E0053 */  swr   $t6, 0x53($t8)
/* 0044A890 89AFFFFC */  lwl   $t7, -4($t5)
/* 0044A894 99AFFFFF */  lwr   $t7, -1($t5)
/* 0044A898 AB0F0054 */  swl   $t7, 0x54($t8)
/* 0044A89C 15B9FFF2 */  bne   $t5, $t9, .L0044A868
/* 0044A8A0 BB0F0057 */   swr   $t7, 0x57($t8)
/* 0044A8A4 89AF0000 */  lwl   $t7, ($t5)
/* 0044A8A8 99AF0003 */  lwr   $t7, 3($t5)
/* 0044A8AC AB0F0058 */  swl   $t7, 0x58($t8)
/* 0044A8B0 BB0F005B */  swr   $t7, 0x5b($t8)
/* 0044A8B4 89AE0004 */  lwl   $t6, 4($t5)
/* 0044A8B8 99AE0007 */  lwr   $t6, 7($t5)
/* 0044A8BC AB0E005C */  swl   $t6, 0x5c($t8)
/* 0044A8C0 BB0E005F */  swr   $t6, 0x5f($t8)
/* 0044A8C4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044A8C8 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044A8CC 8FA60008 */  lw    $a2, 8($sp)
/* 0044A8D0 0320F809 */  jalr  $t9
/* 0044A8D4 00000000 */   nop   
/* 0044A8D8 10000002 */  b     .L0044A8E4
/* 0044A8DC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0044A8E0:
/* 0044A8E0 A60C0014 */  sh    $t4, 0x14($s0)
.L0044A8E4:
/* 0044A8E4 02001825 */  move  $v1, $s0
.L0044A8E8:
/* 0044A8E8 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0044A8EC 8FB000AC */  lw    $s0, 0xac($sp)
/* 0044A8F0 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 0044A8F4 03E00008 */  jr    $ra
/* 0044A8F8 00601025 */   move  $v0, $v1
    .type dup_tree, @function
    .size dup_tree, .-dup_tree
    .end dup_tree

glabel next_mark
    .ent next_mark
    # 004362FC labelopt
    # 00449E98 print_tree
/* 0044A8FC 3C1C0FBD */  .cpload $t9
/* 0044A900 279C5154 */  
/* 0044A904 0399E021 */  
/* 0044A908 8F848B44 */  lw     $a0, %got(tree_mark)($gp)
/* 0044A90C 8C8E0000 */  lw    $t6, ($a0)
/* 0044A910 25CF0001 */  addiu $t7, $t6, 1
/* 0044A914 31E200FF */  andi  $v0, $t7, 0xff
/* 0044A918 03E00008 */  jr    $ra
/* 0044A91C AC820000 */   sw    $v0, ($a0)
    .type next_mark, @function
    .size next_mark, .-next_mark
    .end next_mark

glabel ivalue
    .ent ivalue
    # 0040E2AC func_0040E2AC
    # 0040F4C8 build_tree
    # 00424240 trap
    # 00434B28 fold
    # 00434E4C fold1
    # 00441E4C gen_set_equ
    # 0044202C set_rewrite
    # 00442968 set_rewrite_indexed
    # 004432FC translate
    # 004488F4 translate_cvtl
    # 00448EC8 build_ucond0
    # 0044A740 dup_tree
/* 0044A920 3C1C0FBD */  .cpload $t9
/* 0044A924 279C5130 */  
/* 0044A928 0399E021 */  
/* 0044A92C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044A930 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0044A934 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044A938 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044A93C AFA40020 */  sw    $a0, 0x20($sp)
/* 0044A940 AFA50024 */  sw    $a1, 0x24($sp)
/* 0044A944 0320F809 */  jalr  $t9
/* 0044A948 AFA60028 */   sw    $a2, 0x28($sp)
/* 0044A94C 90430021 */  lbu   $v1, 0x21($v0)
/* 0044A950 93A50023 */  lbu   $a1, 0x23($sp)
/* 0044A954 3C010501 */  lui   $at, 0x501
/* 0044A958 00037EC0 */  sll   $t7, $v1, 0x1b
/* 0044A95C 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0044A960 2CAA0020 */  sltiu $t2, $a1, 0x20
/* 0044A964 000A5823 */  negu  $t3, $t2
/* 0044A968 00B8C826 */  xor   $t9, $a1, $t8
/* 0044A96C 3328001F */  andi  $t0, $t9, 0x1f
/* 0044A970 01616024 */  and   $t4, $t3, $at
/* 0044A974 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044A978 8FA60028 */  lw    $a2, 0x28($sp)
/* 0044A97C 240E0049 */  li    $t6, 73
/* 0044A980 01034826 */  xor   $t1, $t0, $v1
/* 0044A984 00AC6804 */  sllv  $t5, $t4, $a1
/* 0044A988 00402025 */  move  $a0, $v0
/* 0044A98C A04E0020 */  sb    $t6, 0x20($v0)
/* 0044A990 05A10007 */  bgez  $t5, .L0044A9B0
/* 0044A994 A0490021 */   sb    $t1, 0x21($v0)
/* 0044A998 AC460034 */  sw    $a2, 0x34($v0)
/* 0044A99C 8FAE0024 */  lw    $t6, 0x24($sp)
/* 0044A9A0 240F0008 */  li    $t7, 8
/* 0044A9A4 AC4F0028 */  sw    $t7, 0x28($v0)
/* 0044A9A8 10000004 */  b     .L0044A9BC
/* 0044A9AC AC4E0030 */   sw    $t6, 0x30($v0)
.L0044A9B0:
/* 0044A9B0 24180004 */  li    $t8, 4
/* 0044A9B4 AC460030 */  sw    $a2, 0x30($v0)
/* 0044A9B8 AC580028 */  sw    $t8, 0x28($v0)
.L0044A9BC:
/* 0044A9BC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044A9C0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044A9C4 00801025 */  move  $v0, $a0
/* 0044A9C8 03E00008 */  jr    $ra
/* 0044A9CC 00000000 */   nop   
    .type ivalue, @function
    .size ivalue, .-ivalue
    .end ivalue

glabel dwvalue
    .ent dwvalue
    # 0040F4C8 build_tree
    # 00433494 eval_flt_int_cvt
    # 00434B28 fold
    # 00434E4C fold1
/* 0044A9D0 3C1C0FBD */  .cpload $t9
/* 0044A9D4 279C5080 */  
/* 0044A9D8 0399E021 */  
/* 0044A9DC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044A9E0 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0044A9E4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044A9E8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044A9EC AFA40020 */  sw    $a0, 0x20($sp)
/* 0044A9F0 AFA60028 */  sw    $a2, 0x28($sp)
/* 0044A9F4 0320F809 */  jalr  $t9
/* 0044A9F8 AFA7002C */   sw    $a3, 0x2c($sp)
/* 0044A9FC 90430021 */  lbu   $v1, 0x21($v0)
/* 0044AA00 93A50023 */  lbu   $a1, 0x23($sp)
/* 0044AA04 3C010501 */  lui   $at, 0x501
/* 0044AA08 00037EC0 */  sll   $t7, $v1, 0x1b
/* 0044AA0C 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0044AA10 2CAA0020 */  sltiu $t2, $a1, 0x20
/* 0044AA14 000A5823 */  negu  $t3, $t2
/* 0044AA18 00B8C826 */  xor   $t9, $a1, $t8
/* 0044AA1C 3328001F */  andi  $t0, $t9, 0x1f
/* 0044AA20 01616024 */  and   $t4, $t3, $at
/* 0044AA24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044AA28 240E0049 */  li    $t6, 73
/* 0044AA2C 01034826 */  xor   $t1, $t0, $v1
/* 0044AA30 00AC6804 */  sllv  $t5, $t4, $a1
/* 0044AA34 00402025 */  move  $a0, $v0
/* 0044AA38 A04E0020 */  sb    $t6, 0x20($v0)
/* 0044AA3C 05A10008 */  bgez  $t5, .L0044AA60
/* 0044AA40 A0490021 */   sb    $t1, 0x21($v0)
/* 0044AA44 8FAE0028 */  lw    $t6, 0x28($sp)
/* 0044AA48 8FAF002C */  lw    $t7, 0x2c($sp)
/* 0044AA4C 24180008 */  li    $t8, 8
/* 0044AA50 AC580028 */  sw    $t8, 0x28($v0)
/* 0044AA54 AC4E0030 */  sw    $t6, 0x30($v0)
/* 0044AA58 10000005 */  b     .L0044AA70
/* 0044AA5C AC4F0034 */   sw    $t7, 0x34($v0)
.L0044AA60:
/* 0044AA60 8FB9002C */  lw    $t9, 0x2c($sp)
/* 0044AA64 240A0004 */  li    $t2, 4
/* 0044AA68 AC4A0028 */  sw    $t2, 0x28($v0)
/* 0044AA6C AC590030 */  sw    $t9, 0x30($v0)
.L0044AA70:
/* 0044AA70 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044AA74 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044AA78 00801025 */  move  $v0, $a0
/* 0044AA7C 03E00008 */  jr    $ra
/* 0044AA80 00000000 */   nop   
    .type dwvalue, @function
    .size dwvalue, .-dwvalue
    .end dwvalue

glabel rvalue
    .ent rvalue
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
/* 0044AA84 3C1C0FBD */  .cpload $t9
/* 0044AA88 279C4FCC */  
/* 0044AA8C 0399E021 */  
/* 0044AA90 27BDFF28 */  addiu $sp, $sp, -0xd8
/* 0044AA94 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0044AA98 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0044AA9C AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0044AAA0 AFA400D8 */  sw    $a0, 0xd8($sp)
/* 0044AAA4 AFA500DC */  sw    $a1, 0xdc($sp)
/* 0044AAA8 AFA600E0 */  sw    $a2, 0xe0($sp)
/* 0044AAAC 0320F809 */  jalr  $t9
/* 0044AAB0 AFA700E4 */   sw    $a3, 0xe4($sp)
/* 0044AAB4 90430021 */  lbu   $v1, 0x21($v0)
/* 0044AAB8 93A400DB */  lbu   $a0, 0xdb($sp)
/* 0044AABC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044AAC0 00037EC0 */  sll   $t7, $v1, 0x1b
/* 0044AAC4 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0044AAC8 0098C826 */  xor   $t9, $a0, $t8
/* 0044AACC 3329001F */  andi  $t1, $t9, 0x1f
/* 0044AAD0 240E0049 */  li    $t6, 73
/* 0044AAD4 240B0004 */  li    $t3, 4
/* 0044AAD8 2401000C */  li    $at, 12
/* 0044AADC 01235026 */  xor   $t2, $t1, $v1
/* 0044AAE0 00404025 */  move  $t0, $v0
/* 0044AAE4 A04E0020 */  sb    $t6, 0x20($v0)
/* 0044AAE8 A04A0021 */  sb    $t2, 0x21($v0)
/* 0044AAEC 14810003 */  bne   $a0, $at, .L0044AAFC
/* 0044AAF0 AC4B0028 */   sw    $t3, 0x28($v0)
/* 0044AAF4 240C0008 */  li    $t4, 8
/* 0044AAF8 AC4C0028 */  sw    $t4, 0x28($v0)
.L0044AAFC:
/* 0044AAFC 93AD00DC */  lbu   $t5, 0xdc($sp)
/* 0044AB00 24040020 */  li    $a0, 32
/* 0044AB04 24030001 */  li    $v1, 1
/* 0044AB08 108D0007 */  beq   $a0, $t5, .L0044AB28
/* 0044AB0C 00002825 */   move  $a1, $zero
/* 0044AB10 27A200DC */  addiu $v0, $sp, 0xdc
/* 0044AB14 904E0001 */  lbu   $t6, 1($v0)
.L0044AB18:
/* 0044AB18 24630001 */  addiu $v1, $v1, 1
/* 0044AB1C 24420001 */  addiu $v0, $v0, 1
/* 0044AB20 548EFFFD */  bnel  $a0, $t6, .L0044AB18
/* 0044AB24 904E0001 */   lbu   $t6, 1($v0)
.L0044AB28:
/* 0044AB28 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0044AB2C 2466FFFF */  addiu $a2, $v1, -1
/* 0044AB30 AD060030 */  sw    $a2, 0x30($t0)
/* 0044AB34 AFA600B8 */  sw    $a2, 0xb8($sp)
/* 0044AB38 24040400 */  li    $a0, 1024
/* 0044AB3C 0320F809 */  jalr  $t9
/* 0044AB40 AFA800D0 */   sw    $t0, 0xd0($sp)
/* 0044AB44 8FA800D0 */  lw    $t0, 0xd0($sp)
/* 0044AB48 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044AB4C 8FA600B8 */  lw    $a2, 0xb8($sp)
/* 0044AB50 14400041 */  bnez  $v0, .L0044AC58
/* 0044AB54 AD020034 */   sw    $v0, 0x34($t0)
/* 0044AB58 8F8F8038 */  lw    $t7, %got(RO_1000E490)($gp)
/* 0044AB5C 24040004 */  li    $a0, 4
/* 0044AB60 24050179 */  li    $a1, 377
/* 0044AB64 25EFE490 */  addiu $t7, %lo(RO_1000E490) # addiu $t7, $t7, -0x1b70
/* 0044AB68 25EA0048 */  addiu $t2, $t7, 0x48
/* 0044AB6C 03A04825 */  move  $t1, $sp
.L0044AB70:
/* 0044AB70 89F90000 */  lwl   $t9, ($t7)
/* 0044AB74 99F90003 */  lwr   $t9, 3($t7)
/* 0044AB78 25EF000C */  addiu $t7, $t7, 0xc
/* 0044AB7C 2529000C */  addiu $t1, $t1, 0xc
/* 0044AB80 A939FFFC */  swl   $t9, -4($t1)
/* 0044AB84 B939FFFF */  swr   $t9, -1($t1)
/* 0044AB88 89F8FFF8 */  lwl   $t8, -8($t7)
/* 0044AB8C 99F8FFFB */  lwr   $t8, -5($t7)
/* 0044AB90 A9380000 */  swl   $t8, ($t1)
/* 0044AB94 B9380003 */  swr   $t8, 3($t1)
/* 0044AB98 89F9FFFC */  lwl   $t9, -4($t7)
/* 0044AB9C 99F9FFFF */  lwr   $t9, -1($t7)
/* 0044ABA0 A9390004 */  swl   $t9, 4($t1)
/* 0044ABA4 15EAFFF2 */  bne   $t7, $t2, .L0044AB70
/* 0044ABA8 B9390007 */   swr   $t9, 7($t1)
/* 0044ABAC 89F90000 */  lwl   $t9, ($t7)
/* 0044ABB0 99F90003 */  lwr   $t9, 3($t7)
/* 0044ABB4 8F8B8038 */  lw    $t3, %got(RO_1000E440)($gp)
/* 0044ABB8 03A07025 */  move  $t6, $sp
/* 0044ABBC A9390008 */  swl   $t9, 8($t1)
/* 0044ABC0 B939000B */  swr   $t9, 0xb($t1)
/* 0044ABC4 89F80004 */  lwl   $t8, 4($t7)
/* 0044ABC8 99F80007 */  lwr   $t8, 7($t7)
/* 0044ABCC 256BE440 */  addiu $t3, %lo(RO_1000E440) # addiu $t3, $t3, -0x1bc0
/* 0044ABD0 256A0048 */  addiu $t2, $t3, 0x48
/* 0044ABD4 A938000C */  swl   $t8, 0xc($t1)
/* 0044ABD8 B938000F */  swr   $t8, 0xf($t1)
.L0044ABDC:
/* 0044ABDC 896D0000 */  lwl   $t5, ($t3)
/* 0044ABE0 996D0003 */  lwr   $t5, 3($t3)
/* 0044ABE4 256B000C */  addiu $t3, $t3, 0xc
/* 0044ABE8 25CE000C */  addiu $t6, $t6, 0xc
/* 0044ABEC A9CD004C */  swl   $t5, 0x4c($t6)
/* 0044ABF0 B9CD004F */  swr   $t5, 0x4f($t6)
/* 0044ABF4 896CFFF8 */  lwl   $t4, -8($t3)
/* 0044ABF8 996CFFFB */  lwr   $t4, -5($t3)
/* 0044ABFC A9CC0050 */  swl   $t4, 0x50($t6)
/* 0044AC00 B9CC0053 */  swr   $t4, 0x53($t6)
/* 0044AC04 896DFFFC */  lwl   $t5, -4($t3)
/* 0044AC08 996DFFFF */  lwr   $t5, -1($t3)
/* 0044AC0C A9CD0054 */  swl   $t5, 0x54($t6)
/* 0044AC10 156AFFF2 */  bne   $t3, $t2, .L0044ABDC
/* 0044AC14 B9CD0057 */   swr   $t5, 0x57($t6)
/* 0044AC18 896D0000 */  lwl   $t5, ($t3)
/* 0044AC1C 996D0003 */  lwr   $t5, 3($t3)
/* 0044AC20 A9CD0058 */  swl   $t5, 0x58($t6)
/* 0044AC24 B9CD005B */  swr   $t5, 0x5b($t6)
/* 0044AC28 896C0004 */  lwl   $t4, 4($t3)
/* 0044AC2C 996C0007 */  lwr   $t4, 7($t3)
/* 0044AC30 A9CC005C */  swl   $t4, 0x5c($t6)
/* 0044AC34 B9CC005F */  swr   $t4, 0x5f($t6)
/* 0044AC38 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044AC3C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044AC40 8FA60008 */  lw    $a2, 8($sp)
/* 0044AC44 0320F809 */  jalr  $t9
/* 0044AC48 AFA800D0 */   sw    $t0, 0xd0($sp)
/* 0044AC4C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044AC50 10000027 */  b     .L0044ACF0
/* 0044AC54 8FA800D0 */   lw    $t0, 0xd0($sp)
.L0044AC58:
/* 0044AC58 10C00025 */  beqz  $a2, .L0044ACF0
/* 0044AC5C 24C50001 */   addiu $a1, $a2, 1
/* 0044AC60 24A6FFFF */  addiu $a2, $a1, -1
/* 0044AC64 30C60003 */  andi  $a2, $a2, 3
/* 0044AC68 10C0000C */  beqz  $a2, .L0044AC9C
/* 0044AC6C 24030001 */   li    $v1, 1
/* 0044AC70 27AF00DB */  addiu $t7, $sp, 0xdb
/* 0044AC74 006F1021 */  addu  $v0, $v1, $t7
/* 0044AC78 24C40001 */  addiu $a0, $a2, 1
.L0044AC7C:
/* 0044AC7C 8D180034 */  lw    $t8, 0x34($t0)
/* 0044AC80 90490000 */  lbu   $t1, ($v0)
/* 0044AC84 24420001 */  addiu $v0, $v0, 1
/* 0044AC88 0303C821 */  addu  $t9, $t8, $v1
/* 0044AC8C 24630001 */  addiu $v1, $v1, 1
/* 0044AC90 1483FFFA */  bne   $a0, $v1, .L0044AC7C
/* 0044AC94 A329FFFF */   sb    $t1, -1($t9)
/* 0044AC98 10650015 */  beq   $v1, $a1, .L0044ACF0
.L0044AC9C:
/* 0044AC9C 27AA00DB */   addiu $t2, $sp, 0xdb
/* 0044ACA0 006A1021 */  addu  $v0, $v1, $t2
.L0044ACA4:
/* 0044ACA4 8D0E0034 */  lw    $t6, 0x34($t0)
/* 0044ACA8 904B0000 */  lbu   $t3, ($v0)
/* 0044ACAC 24420004 */  addiu $v0, $v0, 4
/* 0044ACB0 01C36021 */  addu  $t4, $t6, $v1
/* 0044ACB4 A18BFFFF */  sb    $t3, -1($t4)
/* 0044ACB8 8D0F0034 */  lw    $t7, 0x34($t0)
/* 0044ACBC 904DFFFD */  lbu   $t5, -3($v0)
/* 0044ACC0 01E3C021 */  addu  $t8, $t7, $v1
/* 0044ACC4 A30D0000 */  sb    $t5, ($t8)
/* 0044ACC8 8D190034 */  lw    $t9, 0x34($t0)
/* 0044ACCC 9049FFFE */  lbu   $t1, -2($v0)
/* 0044ACD0 03235021 */  addu  $t2, $t9, $v1
/* 0044ACD4 A1490001 */  sb    $t1, 1($t2)
/* 0044ACD8 8D0B0034 */  lw    $t3, 0x34($t0)
/* 0044ACDC 904EFFFF */  lbu   $t6, -1($v0)
/* 0044ACE0 01636021 */  addu  $t4, $t3, $v1
/* 0044ACE4 24630004 */  addiu $v1, $v1, 4
/* 0044ACE8 1465FFEE */  bne   $v1, $a1, .L0044ACA4
/* 0044ACEC A18E0002 */   sb    $t6, 2($t4)
.L0044ACF0:
/* 0044ACF0 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0044ACF4 27BD00D8 */  addiu $sp, $sp, 0xd8
/* 0044ACF8 01001025 */  move  $v0, $t0
/* 0044ACFC 03E00008 */  jr    $ra
/* 0044AD00 00000000 */   nop   
    .type rvalue, @function
    .size rvalue, .-rvalue
    .end rvalue

glabel is_zero
    .ent is_zero
    # 0040F4C8 build_tree
    # 0042BDAC eval
    # 004432FC translate
/* 0044AD04 908E0021 */  lbu   $t6, 0x21($a0)
/* 0044AD08 3C010501 */  lui   $at, 0x501
/* 0044AD0C 31CF001F */  andi  $t7, $t6, 0x1f
/* 0044AD10 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0044AD14 0018C823 */  negu  $t9, $t8
/* 0044AD18 03214024 */  and   $t0, $t9, $at
/* 0044AD1C 01E84804 */  sllv  $t1, $t0, $t7
/* 0044AD20 0523000F */  bgezl $t1, .L0044AD60
/* 0044AD24 90830020 */   lbu   $v1, 0x20($a0)
/* 0044AD28 90830020 */  lbu   $v1, 0x20($a0)
/* 0044AD2C 38630049 */  xori  $v1, $v1, 0x49
/* 0044AD30 2C630001 */  sltiu $v1, $v1, 1
/* 0044AD34 10600010 */  beqz  $v1, .L0044AD78
/* 0044AD38 00000000 */   nop   
/* 0044AD3C 8C830030 */  lw    $v1, 0x30($a0)
/* 0044AD40 2C630001 */  sltiu $v1, $v1, 1
/* 0044AD44 1060000C */  beqz  $v1, .L0044AD78
/* 0044AD48 00000000 */   nop   
/* 0044AD4C 8C830034 */  lw    $v1, 0x34($a0)
/* 0044AD50 2C630001 */  sltiu $v1, $v1, 1
/* 0044AD54 03E00008 */  jr    $ra
/* 0044AD58 306200FF */   andi  $v0, $v1, 0xff

/* 0044AD5C 90830020 */  lbu   $v1, 0x20($a0)
.L0044AD60:
/* 0044AD60 38630049 */  xori  $v1, $v1, 0x49
/* 0044AD64 2C630001 */  sltiu $v1, $v1, 1
/* 0044AD68 10600003 */  beqz  $v1, .L0044AD78
/* 0044AD6C 00000000 */   nop   
/* 0044AD70 8C830030 */  lw    $v1, 0x30($a0)
/* 0044AD74 2C630001 */  sltiu $v1, $v1, 1
.L0044AD78:
/* 0044AD78 03E00008 */  jr    $ra
/* 0044AD7C 306200FF */   andi  $v0, $v1, 0xff
    .type is_zero, @function
    .size is_zero, .-is_zero
    .end is_zero

glabel is_ivalue
    .ent is_ivalue
/* 0044AD80 3C1C0FBD */  .cpload $t9
/* 0044AD84 279C4CD0 */  
/* 0044AD88 0399E021 */  
/* 0044AD8C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0044AD90 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 0044AD94 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044AD98 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0044AD9C AFA40020 */  sw    $a0, 0x20($sp)
/* 0044ADA0 AFA50024 */  sw    $a1, 0x24($sp)
/* 0044ADA4 0320F809 */  jalr  $t9
/* 0044ADA8 AFA60028 */   sw    $a2, 0x28($sp)
/* 0044ADAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044ADB0 1040000B */  beqz  $v0, .L0044ADE0
/* 0044ADB4 00401825 */   move  $v1, $v0
/* 0044ADB8 8FAE0020 */  lw    $t6, 0x20($sp)
/* 0044ADBC 8FAF0024 */  lw    $t7, 0x24($sp)
/* 0044ADC0 8FB80028 */  lw    $t8, 0x28($sp)
/* 0044ADC4 8DC20030 */  lw    $v0, 0x30($t6)
/* 0044ADC8 004F182A */  slt   $v1, $v0, $t7
/* 0044ADCC 38630001 */  xori  $v1, $v1, 1
/* 0044ADD0 50600004 */  beql  $v1, $zero, .L0044ADE4
/* 0044ADD4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0044ADD8 0302182A */  slt   $v1, $t8, $v0
/* 0044ADDC 38630001 */  xori  $v1, $v1, 1
.L0044ADE0:
/* 0044ADE0 8FBF001C */  lw    $ra, 0x1c($sp)
.L0044ADE4:
/* 0044ADE4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0044ADE8 00601025 */  move  $v0, $v1
/* 0044ADEC 03E00008 */  jr    $ra
/* 0044ADF0 00000000 */   nop   
    .type is_ivalue, @function
    .size is_ivalue, .-is_ivalue
    .end is_ivalue

glabel result_type
    .ent result_type
    # 00423D28 jump
    # 00424934 restore_from_temp
    # 004254B8 flt_reg
    # 0042567C func_0042567C
    # 004258CC get_dest
    # 0042BDAC eval
    # 00434B28 fold
/* 0044ADF4 3C1C0FBD */  .cpload $t9
/* 0044ADF8 279C4C5C */  
/* 0044ADFC 0399E021 */  
/* 0044AE00 1000000A */  b     .L0044AE2C
/* 0044AE04 90820020 */   lbu   $v0, 0x20($a0)
.L0044AE08:
/* 0044AE08 8F838A28 */  lw     $v1, %got(addr_dtype)($gp)
/* 0044AE0C 03E00008 */  jr    $ra
/* 0044AE10 90620000 */   lbu   $v0, ($v1)

.L0044AE14:
/* 0044AE14 03E00008 */  jr    $ra
/* 0044AE18 24020008 */   li    $v0, 8

.L0044AE1C:
/* 0044AE1C 90830021 */  lbu   $v1, 0x21($a0)
.L0044AE20:
/* 0044AE20 3063001F */  andi  $v1, $v1, 0x1f
/* 0044AE24 03E00008 */  jr    $ra
/* 0044AE28 306200FF */   andi  $v0, $v1, 0xff

.L0044AE2C:
/* 0044AE2C 2C41003B */  sltiu $at, $v0, 0x3b
/* 0044AE30 1420000E */  bnez  $at, .L0044AE6C
/* 0044AE34 2C410051 */   sltiu $at, $v0, 0x51
/* 0044AE38 14200019 */  bnez  $at, .L0044AEA0
/* 0044AE3C 2458FFBA */   addiu $t8, $v0, -0x46
/* 0044AE40 244EFFA1 */  addiu $t6, $v0, -0x5f
/* 0044AE44 2DC10004 */  sltiu $at, $t6, 4
/* 0044AE48 5020FFF5 */  beql  $at, $zero, .L0044AE20
/* 0044AE4C 90830021 */   lbu   $v1, 0x21($a0)
/* 0044AE50 8F818038 */  lw    $at, %got(jtbl_1000E558)($gp)
/* 0044AE54 000E7080 */  sll   $t6, $t6, 2
/* 0044AE58 002E0821 */  addu  $at, $at, $t6
/* 0044AE5C 8C2EE558 */  lw    $t6, %lo(jtbl_1000E558)($at)
/* 0044AE60 01DC7021 */  addu  $t6, $t6, $gp
/* 0044AE64 01C00008 */  jr    $t6
/* 0044AE68 00000000 */   nop   
.L0044AE6C:
/* 0044AE6C 24010023 */  li    $at, 35
/* 0044AE70 1041FFE8 */  beq   $v0, $at, .L0044AE14
/* 0044AE74 244FFFD8 */   addiu $t7, $v0, -0x28
/* 0044AE78 2DE10013 */  sltiu $at, $t7, 0x13
/* 0044AE7C 5020FFE8 */  beql  $at, $zero, .L0044AE20
/* 0044AE80 90830021 */   lbu   $v1, 0x21($a0)
/* 0044AE84 8F818038 */  lw    $at, %got(jtbl_1000E4E0)($gp)
/* 0044AE88 000F7880 */  sll   $t7, $t7, 2
/* 0044AE8C 002F0821 */  addu  $at, $at, $t7
/* 0044AE90 8C2FE4E0 */  lw    $t7, %lo(jtbl_1000E4E0)($at)
/* 0044AE94 01FC7821 */  addu  $t7, $t7, $gp
/* 0044AE98 01E00008 */  jr    $t7
/* 0044AE9C 00000000 */   nop   
.L0044AEA0:
/* 0044AEA0 2F01000B */  sltiu $at, $t8, 0xb
/* 0044AEA4 5020FFDE */  beql  $at, $zero, .L0044AE20
/* 0044AEA8 90830021 */   lbu   $v1, 0x21($a0)
/* 0044AEAC 8F818038 */  lw    $at, %got(jtbl_1000E52C)($gp)
/* 0044AEB0 0018C080 */  sll   $t8, $t8, 2
/* 0044AEB4 00380821 */  addu  $at, $at, $t8
/* 0044AEB8 8C38E52C */  lw    $t8, %lo(jtbl_1000E52C)($at)
/* 0044AEBC 031CC021 */  addu  $t8, $t8, $gp
/* 0044AEC0 03000008 */  jr    $t8
/* 0044AEC4 00000000 */   nop   
/* 0044AEC8 03E00008 */  jr    $ra
/* 0044AECC 00601025 */   move  $v0, $v1
    .type result_type, @function
    .size result_type, .-result_type
    .end result_type

    .type func_0044AED0, @function
func_0044AED0:
    # 0044AFC8 const_equal
/* 0044AED0 8C440000 */  lw    $a0, ($v0)
/* 0044AED4 8C830030 */  lw    $v1, 0x30($a0)
/* 0044AED8 10600038 */  beqz  $v1, .L0044AFBC
/* 0044AEDC 24630001 */   addiu $v1, $v1, 1
/* 0044AEE0 2469FFFF */  addiu $t1, $v1, -1
/* 0044AEE4 31290003 */  andi  $t1, $t1, 3
/* 0044AEE8 11200013 */  beqz  $t1, .L0044AF38
/* 0044AEEC 24050001 */   li    $a1, 1
/* 0044AEF0 8C4E0004 */  lw    $t6, 4($v0)
/* 0044AEF4 8C980034 */  lw    $t8, 0x34($a0)
/* 0044AEF8 25280001 */  addiu $t0, $t1, 1
/* 0044AEFC 8DCF0034 */  lw    $t7, 0x34($t6)
/* 0044AF00 03053821 */  addu  $a3, $t8, $a1
/* 0044AF04 01E53021 */  addu  $a2, $t7, $a1
.L0044AF08:
/* 0044AF08 90D9FFFF */  lbu   $t9, -1($a2)
/* 0044AF0C 90EAFFFF */  lbu   $t2, -1($a3)
/* 0044AF10 24A50001 */  addiu $a1, $a1, 1
/* 0044AF14 24C60001 */  addiu $a2, $a2, 1
/* 0044AF18 132A0003 */  beq   $t9, $t2, .L0044AF28
/* 0044AF1C 00000000 */   nop   
/* 0044AF20 03E00008 */  jr    $ra
/* 0044AF24 00001025 */   move  $v0, $zero

.L0044AF28:
/* 0044AF28 1505FFF7 */  bne   $t0, $a1, .L0044AF08
/* 0044AF2C 24E70001 */   addiu $a3, $a3, 1
/* 0044AF30 50A30023 */  beql  $a1, $v1, .L0044AFC0
/* 0044AF34 24020001 */   li    $v0, 1
.L0044AF38:
/* 0044AF38 8C4B0004 */  lw    $t3, 4($v0)
/* 0044AF3C 8C8D0034 */  lw    $t5, 0x34($a0)
/* 0044AF40 8D6C0034 */  lw    $t4, 0x34($t3)
/* 0044AF44 01A53821 */  addu  $a3, $t5, $a1
/* 0044AF48 01853021 */  addu  $a2, $t4, $a1
.L0044AF4C:
/* 0044AF4C 90CEFFFF */  lbu   $t6, -1($a2)
/* 0044AF50 90EFFFFF */  lbu   $t7, -1($a3)
/* 0044AF54 24A50004 */  addiu $a1, $a1, 4
/* 0044AF58 51CF0004 */  beql  $t6, $t7, .L0044AF6C
/* 0044AF5C 90D80000 */   lbu   $t8, ($a2)
/* 0044AF60 03E00008 */  jr    $ra
/* 0044AF64 00001025 */   move  $v0, $zero

/* 0044AF68 90D80000 */  lbu   $t8, ($a2)
.L0044AF6C:
/* 0044AF6C 90F90000 */  lbu   $t9, ($a3)
/* 0044AF70 53190004 */  beql  $t8, $t9, .L0044AF84
/* 0044AF74 90CA0001 */   lbu   $t2, 1($a2)
/* 0044AF78 03E00008 */  jr    $ra
/* 0044AF7C 00001025 */   move  $v0, $zero

/* 0044AF80 90CA0001 */  lbu   $t2, 1($a2)
.L0044AF84:
/* 0044AF84 90EB0001 */  lbu   $t3, 1($a3)
/* 0044AF88 514B0004 */  beql  $t2, $t3, .L0044AF9C
/* 0044AF8C 90CC0002 */   lbu   $t4, 2($a2)
/* 0044AF90 03E00008 */  jr    $ra
/* 0044AF94 00001025 */   move  $v0, $zero

/* 0044AF98 90CC0002 */  lbu   $t4, 2($a2)
.L0044AF9C:
/* 0044AF9C 90ED0002 */  lbu   $t5, 2($a3)
/* 0044AFA0 24C60004 */  addiu $a2, $a2, 4
/* 0044AFA4 118D0003 */  beq   $t4, $t5, .L0044AFB4
/* 0044AFA8 00000000 */   nop   
/* 0044AFAC 03E00008 */  jr    $ra
/* 0044AFB0 00001025 */   move  $v0, $zero

.L0044AFB4:
/* 0044AFB4 14A3FFE5 */  bne   $a1, $v1, .L0044AF4C
/* 0044AFB8 24E70004 */   addiu $a3, $a3, 4
.L0044AFBC:
/* 0044AFBC 24020001 */  li    $v0, 1
.L0044AFC0:
/* 0044AFC0 03E00008 */  jr    $ra
/* 0044AFC4 00000000 */   nop   

glabel const_equal
    .ent const_equal
    # 00437010 cmp_tree
    # 00446368 cse_equ
/* 0044AFC8 3C1C0FBD */  .cpload $t9
/* 0044AFCC 279C4A88 */  
/* 0044AFD0 0399E021 */  
/* 0044AFD4 908E0020 */  lbu   $t6, 0x20($a0)
/* 0044AFD8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0044AFDC 24020049 */  li    $v0, 73
/* 0044AFE0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044AFE4 144E0004 */  bne   $v0, $t6, .L0044AFF8
/* 0044AFE8 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0044AFEC 90AF0020 */  lbu   $t7, 0x20($a1)
/* 0044AFF0 504F0004 */  beql  $v0, $t7, .L0044B004
/* 0044AFF4 90820021 */   lbu   $v0, 0x21($a0)
.L0044AFF8:
/* 0044AFF8 10000043 */  b     .L0044B108
/* 0044AFFC 00001025 */   move  $v0, $zero
/* 0044B000 90820021 */  lbu   $v0, 0x21($a0)
.L0044B004:
/* 0044B004 3C010501 */  lui   $at, 0x501
/* 0044B008 3042001F */  andi  $v0, $v0, 0x1f
/* 0044B00C 2C580020 */  sltiu $t8, $v0, 0x20
/* 0044B010 0018C823 */  negu  $t9, $t8
/* 0044B014 03214024 */  and   $t0, $t9, $at
/* 0044B018 00484804 */  sllv  $t1, $t0, $v0
/* 0044B01C 0521000F */  bgez  $t1, .L0044B05C
/* 0044B020 2C580020 */   sltiu $t8, $v0, 0x20
/* 0044B024 90AA0021 */  lbu   $t2, 0x21($a1)
/* 0044B028 314B001F */  andi  $t3, $t2, 0x1f
/* 0044B02C 544B000C */  bnel  $v0, $t3, .L0044B060
/* 0044B030 0018C823 */   negu  $t9, $t8
/* 0044B034 8CAC0030 */  lw    $t4, 0x30($a1)
/* 0044B038 8C8E0030 */  lw    $t6, 0x30($a0)
/* 0044B03C 8CAD0034 */  lw    $t5, 0x34($a1)
/* 0044B040 8C8F0034 */  lw    $t7, 0x34($a0)
/* 0044B044 558E0006 */  bnel  $t4, $t6, .L0044B060
/* 0044B048 0018C823 */   negu  $t9, $t8
/* 0044B04C 55AF0004 */  bnel  $t5, $t7, .L0044B060
/* 0044B050 0018C823 */   negu  $t9, $t8
/* 0044B054 1000002C */  b     .L0044B108
/* 0044B058 24020001 */   li    $v0, 1
.L0044B05C:
/* 0044B05C 0018C823 */  negu  $t9, $t8
.L0044B060:
/* 0044B060 3C018A80 */  lui   $at, 0x8a80
/* 0044B064 03214024 */  and   $t0, $t9, $at
/* 0044B068 00484804 */  sllv  $t1, $t0, $v0
/* 0044B06C 0521000B */  bgez  $t1, .L0044B09C
/* 0044B070 2C4E0020 */   sltiu $t6, $v0, 0x20
/* 0044B074 90AA0021 */  lbu   $t2, 0x21($a1)
/* 0044B078 314B001F */  andi  $t3, $t2, 0x1f
/* 0044B07C 544B0008 */  bnel  $v0, $t3, .L0044B0A0
/* 0044B080 3C01000C */   lui   $at, 0xc
/* 0044B084 8CAC0030 */  lw    $t4, 0x30($a1)
/* 0044B088 8C8D0030 */  lw    $t5, 0x30($a0)
/* 0044B08C 558D0004 */  bnel  $t4, $t5, .L0044B0A0
/* 0044B090 3C01000C */   lui   $at, 0xc
/* 0044B094 1000001C */  b     .L0044B108
/* 0044B098 24020001 */   li    $v0, 1
.L0044B09C:
/* 0044B09C 3C01000C */  lui   $at, 0xc
.L0044B0A0:
/* 0044B0A0 34218000 */  ori   $at, $at, 0x8000
/* 0044B0A4 000E7823 */  negu  $t7, $t6
/* 0044B0A8 01E1C024 */  and   $t8, $t7, $at
/* 0044B0AC 0058C804 */  sllv  $t9, $t8, $v0
/* 0044B0B0 07230015 */  bgezl $t9, .L0044B108
/* 0044B0B4 00001025 */   move  $v0, $zero
/* 0044B0B8 90A80021 */  lbu   $t0, 0x21($a1)
/* 0044B0BC 3109001F */  andi  $t1, $t0, 0x1f
/* 0044B0C0 54490011 */  bnel  $v0, $t1, .L0044B108
/* 0044B0C4 00001025 */   move  $v0, $zero
/* 0044B0C8 8CAA0030 */  lw    $t2, 0x30($a1)
/* 0044B0CC 8C8B0030 */  lw    $t3, 0x30($a0)
/* 0044B0D0 AFA40028 */  sw    $a0, 0x28($sp)
/* 0044B0D4 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0044B0D8 554B000B */  bnel  $t2, $t3, .L0044B108
/* 0044B0DC 00001025 */   move  $v0, $zero
/* 0044B0E0 8F998028 */  lw    $t9, %got(func_0044AED0)($gp)
/* 0044B0E4 27A20028 */  addiu $v0, $sp, 0x28
/* 0044B0E8 2739AED0 */  addiu $t9, %lo(func_0044AED0) # addiu $t9, $t9, -0x5130
/* 0044B0EC 0320F809 */  jalr  $t9
/* 0044B0F0 00000000 */   nop   
/* 0044B0F4 10400003 */  beqz  $v0, .L0044B104
/* 0044B0F8 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0044B0FC 10000002 */  b     .L0044B108
/* 0044B100 24020001 */   li    $v0, 1
.L0044B104:
/* 0044B104 00001025 */  move  $v0, $zero
.L0044B108:
/* 0044B108 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0044B10C 27BD0028 */  addiu $sp, $sp, 0x28
/* 0044B110 03E00008 */  jr    $ra
/* 0044B114 00000000 */   nop   
    .type const_equal, @function
    .size const_equal, .-const_equal
    .end const_equal
)"");
