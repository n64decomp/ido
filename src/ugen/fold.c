__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel add_overflow
    .ent add_overflow
    # 0040F4C8 build_tree
/* 004349E0 24010006 */  li    $at, 6
/* 004349E4 1481000B */  bne   $a0, $at, .L00434A14
/* 004349E8 AFA40000 */   sw    $a0, ($sp)
/* 004349EC 00A61826 */  xor   $v1, $a1, $a2
/* 004349F0 28630000 */  slti  $v1, $v1, 0
/* 004349F4 38620001 */  xori  $v0, $v1, 1
/* 004349F8 10400003 */  beqz  $v0, .L00434A08
/* 004349FC 00A67021 */   addu  $t6, $a1, $a2
/* 00434A00 00AE1026 */  xor   $v0, $a1, $t6
/* 00434A04 28420000 */  slti  $v0, $v0, 0
.L00434A08:
/* 00434A08 304300FF */  andi  $v1, $v0, 0xff
/* 00434A0C 03E00008 */  jr    $ra
/* 00434A10 00601025 */   move  $v0, $v1

.L00434A14:
/* 00434A14 00A07827 */  not   $t7, $a1
/* 00434A18 01E6182B */  sltu  $v1, $t7, $a2
/* 00434A1C 306300FF */  andi  $v1, $v1, 0xff
/* 00434A20 03E00008 */  jr    $ra
/* 00434A24 00601025 */   move  $v0, $v1
    .type add_overflow, @function
    .size add_overflow, .-add_overflow
    .end add_overflow

glabel sub_overflow
    .ent sub_overflow
    # 0040F4C8 build_tree
/* 00434A28 24010006 */  li    $at, 6
/* 00434A2C 1481000A */  bne   $a0, $at, .L00434A58
/* 00434A30 AFA40000 */   sw    $a0, ($sp)
/* 00434A34 00A61826 */  xor   $v1, $a1, $a2
/* 00434A38 28620000 */  slti  $v0, $v1, 0
/* 00434A3C 10400003 */  beqz  $v0, .L00434A4C
/* 00434A40 00A67023 */   subu  $t6, $a1, $a2
/* 00434A44 00AE1026 */  xor   $v0, $a1, $t6
/* 00434A48 28420000 */  slti  $v0, $v0, 0
.L00434A4C:
/* 00434A4C 304300FF */  andi  $v1, $v0, 0xff
/* 00434A50 03E00008 */  jr    $ra
/* 00434A54 00601025 */   move  $v0, $v1

.L00434A58:
/* 00434A58 00A6182B */  sltu  $v1, $a1, $a2
/* 00434A5C 306300FF */  andi  $v1, $v1, 0xff
/* 00434A60 03E00008 */  jr    $ra
/* 00434A64 00601025 */   move  $v0, $v1
    .type sub_overflow, @function
    .size sub_overflow, .-sub_overflow
    .end sub_overflow

glabel is_constant
    .ent is_constant
    # 0040F4C8 build_tree
    # 00428D14 eval_mov
    # 0042BDAC eval
    # 00434E4C fold1
    # 004432FC translate
    # 004488F4 translate_cvtl
    # 00448E08 need_check_hl
    # 0044A740 dup_tree
    # 0044AD80 is_ivalue
/* 00434A68 90830020 */  lbu   $v1, 0x20($a0)
/* 00434A6C 38630049 */  xori  $v1, $v1, 0x49
/* 00434A70 2C630001 */  sltiu $v1, $v1, 1
/* 00434A74 10600009 */  beqz  $v1, .L00434A9C
/* 00434A78 00000000 */   nop   
/* 00434A7C 908E0021 */  lbu   $t6, 0x21($a0)
/* 00434A80 3C018F81 */  lui   $at, 0x8f81
/* 00434A84 31CF001F */  andi  $t7, $t6, 0x1f
/* 00434A88 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00434A8C 0018C823 */  negu  $t9, $t8
/* 00434A90 03214024 */  and   $t0, $t9, $at
/* 00434A94 01E81804 */  sllv  $v1, $t0, $t7
/* 00434A98 28630000 */  slti  $v1, $v1, 0
.L00434A9C:
/* 00434A9C 03E00008 */  jr    $ra
/* 00434AA0 00601025 */   move  $v0, $v1
    .type is_constant, @function
    .size is_constant, .-is_constant
    .end is_constant

glabel llconst
    .ent llconst
    # 00434B28 fold
/* 00434AA4 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 00434AA8 000E7823 */  negu  $t7, $t6
/* 00434AAC 3C010501 */  lui   $at, 0x501
/* 00434AB0 01E1C024 */  and   $t8, $t7, $at
/* 00434AB4 27BDFFF8 */  addiu $sp, $sp, -8
/* 00434AB8 00B8C804 */  sllv  $t9, $t8, $a1
/* 00434ABC 07210006 */  bgez  $t9, .L00434AD8
/* 00434AC0 AFA5000C */   sw    $a1, 0xc($sp)
/* 00434AC4 8C880030 */  lw    $t0, 0x30($a0)
/* 00434AC8 8C890034 */  lw    $t1, 0x34($a0)
/* 00434ACC AFA80000 */  sw    $t0, ($sp)
/* 00434AD0 10000011 */  b     .L00434B18
/* 00434AD4 AFA90004 */   sw    $t1, 4($sp)
.L00434AD8:
/* 00434AD8 2CAA0020 */  sltiu $t2, $a1, 0x20
/* 00434ADC 000A5823 */  negu  $t3, $t2
/* 00434AE0 3C010600 */  lui   $at, 0x600
/* 00434AE4 01616024 */  and   $t4, $t3, $at
/* 00434AE8 00AC6804 */  sllv  $t5, $t4, $a1
/* 00434AEC 05A30007 */  bgezl $t5, .L00434B0C
/* 00434AF0 8C8F0030 */   lw    $t7, 0x30($a0)
/* 00434AF4 8C990030 */  lw    $t9, 0x30($a0)
/* 00434AF8 0019C7C3 */  sra   $t8, $t9, 0x1f
/* 00434AFC AFB80000 */  sw    $t8, ($sp)
/* 00434B00 10000005 */  b     .L00434B18
/* 00434B04 AFB90004 */   sw    $t9, 4($sp)
/* 00434B08 8C8F0030 */  lw    $t7, 0x30($a0)
.L00434B0C:
/* 00434B0C 24080000 */  li    $t0, 0
/* 00434B10 AFA80000 */  sw    $t0, ($sp)
/* 00434B14 AFAF0004 */  sw    $t7, 4($sp)
.L00434B18:
/* 00434B18 8FA20000 */  lw    $v0, ($sp)
/* 00434B1C 8FA30004 */  lw    $v1, 4($sp)
/* 00434B20 03E00008 */  jr    $ra
/* 00434B24 27BD0008 */   addiu $sp, $sp, 8
    .type llconst, @function
    .size llconst, .-llconst
    .end llconst

glabel fold
    .ent fold
    # 004432FC translate
    # 004488F4 translate_cvtl
/* 00434B28 3C1C0FBF */  .cpload $t9
/* 00434B2C 279CAF28 */  
/* 00434B30 0399E021 */  
/* 00434B34 27BDFF80 */  addiu $sp, $sp, -0x80
/* 00434B38 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00434B3C AFBC0030 */  sw    $gp, 0x30($sp)
/* 00434B40 AFB0002C */  sw    $s0, 0x2c($sp)
/* 00434B44 908E0020 */  lbu   $t6, 0x20($a0)
/* 00434B48 24010018 */  li    $at, 24
/* 00434B4C 00808025 */  move  $s0, $a0
/* 00434B50 15C1004A */  bne   $t6, $at, .L00434C7C
/* 00434B54 00000000 */   nop   
/* 00434B58 948F0022 */  lhu   $t7, 0x22($a0)
/* 00434B5C 31F80002 */  andi  $t8, $t7, 2
/* 00434B60 53000004 */  beql  $t8, $zero, .L00434B74
/* 00434B64 92050021 */   lbu   $a1, 0x21($s0)
/* 00434B68 100000B3 */  b     .L00434E38
/* 00434B6C 00801025 */   move  $v0, $a0
/* 00434B70 92050021 */  lbu   $a1, 0x21($s0)
.L00434B74:
/* 00434B74 3C01000C */  lui   $at, 0xc
/* 00434B78 34218000 */  ori   $at, $at, 0x8000
/* 00434B7C 30A5001F */  andi  $a1, $a1, 0x1f
/* 00434B80 2CB90020 */  sltiu $t9, $a1, 0x20
/* 00434B84 00194023 */  negu  $t0, $t9
/* 00434B88 01014824 */  and   $t1, $t0, $at
/* 00434B8C 00A95004 */  sllv  $t2, $t1, $a1
/* 00434B90 05410003 */  bgez  $t2, .L00434BA0
/* 00434B94 2CAB0020 */   sltiu $t3, $a1, 0x20
/* 00434B98 100000A7 */  b     .L00434E38
/* 00434B9C 02001025 */   move  $v0, $s0
.L00434BA0:
/* 00434BA0 000B6023 */  negu  $t4, $t3
/* 00434BA4 3C010501 */  lui   $at, 0x501
/* 00434BA8 01816824 */  and   $t5, $t4, $at
/* 00434BAC 00AD1004 */  sllv  $v0, $t5, $a1
/* 00434BB0 28420000 */  slti  $v0, $v0, 0
/* 00434BB4 10400018 */  beqz  $v0, .L00434C18
/* 00434BB8 00000000 */   nop   
/* 00434BBC 8E060000 */  lw    $a2, ($s0)
/* 00434BC0 3C010501 */  lui   $at, 0x501
/* 00434BC4 90C70021 */  lbu   $a3, 0x21($a2)
/* 00434BC8 30E7001F */  andi  $a3, $a3, 0x1f
/* 00434BCC 2CEE0020 */  sltiu $t6, $a3, 0x20
/* 00434BD0 000E7823 */  negu  $t7, $t6
/* 00434BD4 01E1C024 */  and   $t8, $t7, $at
/* 00434BD8 00F8C804 */  sllv  $t9, $t8, $a3
/* 00434BDC 0720000E */  bltz  $t9, .L00434C18
/* 00434BE0 00000000 */   nop   
/* 00434BE4 8F9983F8 */  lw    $t9, %call16(llconst)($gp)
/* 00434BE8 00C02025 */  move  $a0, $a2
/* 00434BEC 00E02825 */  move  $a1, $a3
/* 00434BF0 0320F809 */  jalr  $t9
/* 00434BF4 00000000 */   nop   
/* 00434BF8 8E080000 */  lw    $t0, ($s0)
/* 00434BFC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00434C00 AD030034 */  sw    $v1, 0x34($t0)
/* 00434C04 AD020030 */  sw    $v0, 0x30($t0)
/* 00434C08 92050021 */  lbu   $a1, 0x21($s0)
/* 00434C0C 8E060000 */  lw    $a2, ($s0)
/* 00434C10 10000011 */  b     .L00434C58
/* 00434C14 30A5001F */   andi  $a1, $a1, 0x1f
.L00434C18:
/* 00434C18 1440000F */  bnez  $v0, .L00434C58
/* 00434C1C 8E060000 */   lw    $a2, ($s0)
/* 00434C20 90C90021 */  lbu   $t1, 0x21($a2)
/* 00434C24 3C010501 */  lui   $at, 0x501
/* 00434C28 312A001F */  andi  $t2, $t1, 0x1f
/* 00434C2C 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 00434C30 000B6023 */  negu  $t4, $t3
/* 00434C34 01816824 */  and   $t5, $t4, $at
/* 00434C38 014D7004 */  sllv  $t6, $t5, $t2
/* 00434C3C 05C30007 */  bgezl $t6, .L00434C5C
/* 00434C40 90C70021 */   lbu   $a3, 0x21($a2)
/* 00434C44 8CD90034 */  lw    $t9, 0x34($a2)
/* 00434C48 ACD90030 */  sw    $t9, 0x30($a2)
/* 00434C4C 92050021 */  lbu   $a1, 0x21($s0)
/* 00434C50 8E060000 */  lw    $a2, ($s0)
/* 00434C54 30A5001F */  andi  $a1, $a1, 0x1f
.L00434C58:
/* 00434C58 90C70021 */  lbu   $a3, 0x21($a2)
.L00434C5C:
/* 00434C5C 00C01025 */  move  $v0, $a2
/* 00434C60 000746C0 */  sll   $t0, $a3, 0x1b
/* 00434C64 00084EC2 */  srl   $t1, $t0, 0x1b
/* 00434C68 00A95826 */  xor   $t3, $a1, $t1
/* 00434C6C 316C001F */  andi  $t4, $t3, 0x1f
/* 00434C70 01876826 */  xor   $t5, $t4, $a3
/* 00434C74 10000070 */  b     .L00434E38
/* 00434C78 A0CD0021 */   sb    $t5, 0x21($a2)
.L00434C7C:
/* 00434C7C 8F9983F8 */  lw    $t9, %call16(llconst)($gp)
/* 00434C80 92050021 */  lbu   $a1, 0x21($s0)
/* 00434C84 8E040000 */  lw    $a0, ($s0)
/* 00434C88 0320F809 */  jalr  $t9
/* 00434C8C 30A5001F */   andi  $a1, $a1, 0x1f
/* 00434C90 8E060004 */  lw    $a2, 4($s0)
/* 00434C94 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00434C98 AFA20068 */  sw    $v0, 0x68($sp)
/* 00434C9C 10C0000B */  beqz  $a2, .L00434CCC
/* 00434CA0 AFA3006C */   sw    $v1, 0x6c($sp)
/* 00434CA4 8F9983F8 */  lw    $t9, %call16(llconst)($gp)
/* 00434CA8 92050021 */  lbu   $a1, 0x21($s0)
/* 00434CAC 00C02025 */  move  $a0, $a2
/* 00434CB0 0320F809 */  jalr  $t9
/* 00434CB4 30A5001F */   andi  $a1, $a1, 0x1f
/* 00434CB8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00434CBC AFA20060 */  sw    $v0, 0x60($sp)
/* 00434CC0 AFA30064 */  sw    $v1, 0x64($sp)
/* 00434CC4 10000009 */  b     .L00434CEC
/* 00434CC8 92040020 */   lbu   $a0, 0x20($s0)
.L00434CCC:
/* 00434CCC 92040020 */  lbu   $a0, 0x20($s0)
/* 00434CD0 24010019 */  li    $at, 25
/* 00434CD4 54810006 */  bnel  $a0, $at, .L00434CF0
/* 00434CD8 92050021 */   lbu   $a1, 0x21($s0)
/* 00434CDC 8E0A0024 */  lw    $t2, 0x24($s0)
/* 00434CE0 000A77C3 */  sra   $t6, $t2, 0x1f
/* 00434CE4 AFAE0060 */  sw    $t6, 0x60($sp)
/* 00434CE8 AFAA0064 */  sw    $t2, 0x64($sp)
.L00434CEC:
/* 00434CEC 92050021 */  lbu   $a1, 0x21($s0)
.L00434CF0:
/* 00434CF0 8FB80060 */  lw    $t8, 0x60($sp)
/* 00434CF4 3C010600 */  lui   $at, 0x600
/* 00434CF8 30A5001F */  andi  $a1, $a1, 0x1f
/* 00434CFC 2CA80020 */  sltiu $t0, $a1, 0x20
/* 00434D00 00084823 */  negu  $t1, $t0
/* 00434D04 8FB90064 */  lw    $t9, 0x64($sp)
/* 00434D08 01215824 */  and   $t3, $t1, $at
/* 00434D0C 2CAA0020 */  sltiu $t2, $a1, 0x20
/* 00434D10 000A7023 */  negu  $t6, $t2
/* 00434D14 3C010501 */  lui   $at, 0x501
/* 00434D18 01C17824 */  and   $t7, $t6, $at
/* 00434D1C AFB80010 */  sw    $t8, 0x10($sp)
/* 00434D20 00AFC004 */  sllv  $t8, $t7, $a1
/* 00434D24 AFB90014 */  sw    $t9, 0x14($sp)
/* 00434D28 96090022 */  lhu   $t1, 0x22($s0)
/* 00434D2C 2B190000 */  slti  $t9, $t8, 0
/* 00434D30 00AB6004 */  sllv  $t4, $t3, $a1
/* 00434D34 298D0000 */  slti  $t5, $t4, 0
/* 00434D38 2F280001 */  sltiu $t0, $t9, 1
/* 00434D3C 8F998178 */  lw    $t9, %call16(fold_constant)($gp)
/* 00434D40 AFAD0018 */  sw    $t5, 0x18($sp)
/* 00434D44 312B0002 */  andi  $t3, $t1, 2
/* 00434D48 000B602B */  sltu  $t4, $zero, $t3
/* 00434D4C 27AD0070 */  addiu $t5, $sp, 0x70
/* 00434D50 AFAD0024 */  sw    $t5, 0x24($sp)
/* 00434D54 AFAC0020 */  sw    $t4, 0x20($sp)
/* 00434D58 AFA8001C */  sw    $t0, 0x1c($sp)
/* 00434D5C 8FA60068 */  lw    $a2, 0x68($sp)
/* 00434D60 0320F809 */  jalr  $t9
/* 00434D64 8FA7006C */   lw    $a3, 0x6c($sp)
/* 00434D68 10400030 */  beqz  $v0, .L00434E2C
/* 00434D6C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00434D70 8E040000 */  lw    $a0, ($s0)
/* 00434D74 920A0019 */  lbu   $t2, 0x19($s0)
/* 00434D78 8E060004 */  lw    $a2, 4($s0)
/* 00434D7C 908F0019 */  lbu   $t7, 0x19($a0)
/* 00434D80 314EFFFE */  andi  $t6, $t2, 0xfffe
/* 00434D84 2402FFFE */  li    $v0, -2
/* 00434D88 31F8FFFE */  andi  $t8, $t7, 0xfffe
/* 00434D8C A20E0019 */  sb    $t6, 0x19($s0)
/* 00434D90 10C00004 */  beqz  $a2, .L00434DA4
/* 00434D94 A0980019 */   sb    $t8, 0x19($a0)
/* 00434D98 90D90019 */  lbu   $t9, 0x19($a2)
/* 00434D9C 03224024 */  and   $t0, $t9, $v0
/* 00434DA0 A0C80019 */  sb    $t0, 0x19($a2)
.L00434DA4:
/* 00434DA4 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00434DA8 02002025 */  move  $a0, $s0
/* 00434DAC 0320F809 */  jalr  $t9
/* 00434DB0 00000000 */   nop   
/* 00434DB4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00434DB8 02002025 */  move  $a0, $s0
/* 00434DBC 8F998694 */  lw    $t9, %call16(result_type)($gp)
/* 00434DC0 0320F809 */  jalr  $t9
/* 00434DC4 00000000 */   nop   
/* 00434DC8 304900FF */  andi  $t1, $v0, 0xff
/* 00434DCC 2D2B0020 */  sltiu $t3, $t1, 0x20
/* 00434DD0 000B6023 */  negu  $t4, $t3
/* 00434DD4 3C010501 */  lui   $at, 0x501
/* 00434DD8 01816824 */  and   $t5, $t4, $at
/* 00434DDC 012D5004 */  sllv  $t2, $t5, $t1
/* 00434DE0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00434DE4 05410009 */  bgez  $t2, .L00434E0C
/* 00434DE8 304400FF */   andi  $a0, $v0, 0xff
/* 00434DEC 8F998688 */  lw    $t9, %call16(dwvalue)($gp)
/* 00434DF0 8FA60070 */  lw    $a2, 0x70($sp)
/* 00434DF4 8FA70074 */  lw    $a3, 0x74($sp)
/* 00434DF8 0320F809 */  jalr  $t9
/* 00434DFC 00000000 */   nop   
/* 00434E00 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00434E04 1000000B */  b     .L00434E34
/* 00434E08 00402025 */   move  $a0, $v0
.L00434E0C:
/* 00434E0C 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00434E10 00002825 */  move  $a1, $zero
/* 00434E14 8FA60074 */  lw    $a2, 0x74($sp)
/* 00434E18 0320F809 */  jalr  $t9
/* 00434E1C 00000000 */   nop   
/* 00434E20 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00434E24 10000003 */  b     .L00434E34
/* 00434E28 00402025 */   move  $a0, $v0
.L00434E2C:
/* 00434E2C 10000002 */  b     .L00434E38
/* 00434E30 02001025 */   move  $v0, $s0
.L00434E34:
/* 00434E34 00801025 */  move  $v0, $a0
.L00434E38:
/* 00434E38 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00434E3C 8FB0002C */  lw    $s0, 0x2c($sp)
/* 00434E40 27BD0080 */  addiu $sp, $sp, 0x80
/* 00434E44 03E00008 */  jr    $ra
/* 00434E48 00000000 */   nop   
    .type fold, @function
    .size fold, .-fold
    .end fold

glabel fold1
    .ent fold1
    # 004432FC translate
/* 00434E4C 3C1C0FBF */  .cpload $t9
/* 00434E50 279CAC04 */  
/* 00434E54 0399E021 */  
/* 00434E58 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 00434E5C AFBF002C */  sw    $ra, 0x2c($sp)
/* 00434E60 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00434E64 AFB10024 */  sw    $s1, 0x24($sp)
/* 00434E68 AFB00020 */  sw    $s0, 0x20($sp)
/* 00434E6C 8C820000 */  lw    $v0, ($a0)
/* 00434E70 3C010501 */  lui   $at, 0x501
/* 00434E74 00808825 */  move  $s1, $a0
/* 00434E78 904E0021 */  lbu   $t6, 0x21($v0)
/* 00434E7C 31CF001F */  andi  $t7, $t6, 0x1f
/* 00434E80 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00434E84 0018C823 */  negu  $t9, $t8
/* 00434E88 03214024 */  and   $t0, $t9, $at
/* 00434E8C 01E84804 */  sllv  $t1, $t0, $t7
/* 00434E90 05210016 */  bgez  $t1, .L00434EEC
/* 00434E94 00000000 */   nop   
/* 00434E98 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00434E9C 8C440000 */  lw    $a0, ($v0)
/* 00434EA0 0320F809 */  jalr  $t9
/* 00434EA4 00000000 */   nop   
/* 00434EA8 10400009 */  beqz  $v0, .L00434ED0
/* 00434EAC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00434EB0 8E220000 */  lw    $v0, ($s1)
/* 00434EB4 8C4A0000 */  lw    $t2, ($v0)
/* 00434EB8 8C440004 */  lw    $a0, 4($v0)
/* 00434EBC 8D4C0030 */  lw    $t4, 0x30($t2)
/* 00434EC0 8D4D0034 */  lw    $t5, 0x34($t2)
/* 00434EC4 AFAC0050 */  sw    $t4, 0x50($sp)
/* 00434EC8 1000001C */  b     .L00434F3C
/* 00434ECC AFAD0054 */   sw    $t5, 0x54($sp)
.L00434ED0:
/* 00434ED0 8E2B0000 */  lw    $t3, ($s1)
/* 00434ED4 8D640004 */  lw    $a0, 4($t3)
/* 00434ED8 8C8E0030 */  lw    $t6, 0x30($a0)
/* 00434EDC 8C8F0034 */  lw    $t7, 0x34($a0)
/* 00434EE0 AFAE0050 */  sw    $t6, 0x50($sp)
/* 00434EE4 10000015 */  b     .L00434F3C
/* 00434EE8 AFAF0054 */   sw    $t7, 0x54($sp)
.L00434EEC:
/* 00434EEC 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00434EF0 8C440000 */  lw    $a0, ($v0)
/* 00434EF4 0320F809 */  jalr  $t9
/* 00434EF8 00000000 */   nop   
/* 00434EFC 10400009 */  beqz  $v0, .L00434F24
/* 00434F00 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00434F04 8E220000 */  lw    $v0, ($s1)
/* 00434F08 8C580000 */  lw    $t8, ($v0)
/* 00434F0C 8C440004 */  lw    $a0, 4($v0)
/* 00434F10 8F190030 */  lw    $t9, 0x30($t8)
/* 00434F14 001947C3 */  sra   $t0, $t9, 0x1f
/* 00434F18 AFA80050 */  sw    $t0, 0x50($sp)
/* 00434F1C 10000007 */  b     .L00434F3C
/* 00434F20 AFB90054 */   sw    $t9, 0x54($sp)
.L00434F24:
/* 00434F24 8E2A0000 */  lw    $t2, ($s1)
/* 00434F28 8D440004 */  lw    $a0, 4($t2)
/* 00434F2C 8C8C0030 */  lw    $t4, 0x30($a0)
/* 00434F30 000C77C3 */  sra   $t6, $t4, 0x1f
/* 00434F34 AFAE0050 */  sw    $t6, 0x50($sp)
/* 00434F38 AFAC0054 */  sw    $t4, 0x54($sp)
.L00434F3C:
/* 00434F3C 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00434F40 0320F809 */  jalr  $t9
/* 00434F44 00000000 */   nop   
/* 00434F48 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434F4C 8E2D0000 */  lw    $t5, ($s1)
/* 00434F50 8FA60050 */  lw    $a2, 0x50($sp)
/* 00434F54 8F99817C */  lw    $t9, %call16(fold_identities)($gp)
/* 00434F58 91A40020 */  lbu   $a0, 0x20($t5)
/* 00434F5C AFA20010 */  sw    $v0, 0x10($sp)
/* 00434F60 0320F809 */  jalr  $t9
/* 00434F64 8FA70054 */   lw    $a3, 0x54($sp)
/* 00434F68 1040001E */  beqz  $v0, .L00434FE4
/* 00434F6C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00434F70 8E300000 */  lw    $s0, ($s1)
/* 00434F74 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00434F78 920B0019 */  lbu   $t3, 0x19($s0)
/* 00434F7C 8E040000 */  lw    $a0, ($s0)
/* 00434F80 3178FFFE */  andi  $t8, $t3, 0xfffe
/* 00434F84 0320F809 */  jalr  $t9
/* 00434F88 A2180019 */   sb    $t8, 0x19($s0)
/* 00434F8C 10400008 */  beqz  $v0, .L00434FB0
/* 00434F90 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00434F94 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00434F98 8E040004 */  lw    $a0, 4($s0)
/* 00434F9C 0320F809 */  jalr  $t9
/* 00434FA0 00000000 */   nop   
/* 00434FA4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434FA8 10000007 */  b     .L00434FC8
/* 00434FAC AE220000 */   sw    $v0, ($s1)
.L00434FB0:
/* 00434FB0 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00434FB4 8E040000 */  lw    $a0, ($s0)
/* 00434FB8 0320F809 */  jalr  $t9
/* 00434FBC 00000000 */   nop   
/* 00434FC0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434FC4 AE220000 */  sw    $v0, ($s1)
.L00434FC8:
/* 00434FC8 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00434FCC 02002025 */  move  $a0, $s0
/* 00434FD0 0320F809 */  jalr  $t9
/* 00434FD4 00000000 */   nop   
/* 00434FD8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434FDC 10000038 */  b     .L004350C0
/* 00434FE0 24020001 */   li    $v0, 1
.L00434FE4:
/* 00434FE4 8E390000 */  lw    $t9, ($s1)
/* 00434FE8 8F240004 */  lw    $a0, 4($t9)
/* 00434FEC 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 00434FF0 0320F809 */  jalr  $t9
/* 00434FF4 00000000 */   nop   
/* 00434FF8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434FFC 8E280000 */  lw    $t0, ($s1)
/* 00435000 27A90048 */  addiu $t1, $sp, 0x48
/* 00435004 8F998180 */  lw    $t9, %call16(fold_idempotents)($gp)
/* 00435008 91040020 */  lbu   $a0, 0x20($t0)
/* 0043500C AFA90014 */  sw    $t1, 0x14($sp)
/* 00435010 AFA20010 */  sw    $v0, 0x10($sp)
/* 00435014 8FA60050 */  lw    $a2, 0x50($sp)
/* 00435018 0320F809 */  jalr  $t9
/* 0043501C 8FA70054 */   lw    $a3, 0x54($sp)
/* 00435020 10400026 */  beqz  $v0, .L004350BC
/* 00435024 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00435028 8E220000 */  lw    $v0, ($s1)
/* 0043502C 3C010501 */  lui   $at, 0x501
/* 00435030 8FA60048 */  lw    $a2, 0x48($sp)
/* 00435034 904A0021 */  lbu   $t2, 0x21($v0)
/* 00435038 00002825 */  move  $a1, $zero
/* 0043503C 00408025 */  move  $s0, $v0
/* 00435040 314C001F */  andi  $t4, $t2, 0x1f
/* 00435044 2D8E0020 */  sltiu $t6, $t4, 0x20
/* 00435048 000E7823 */  negu  $t7, $t6
/* 0043504C 01E16824 */  and   $t5, $t7, $at
/* 00435050 018D5804 */  sllv  $t3, $t5, $t4
/* 00435054 05610009 */  bgez  $t3, .L0043507C
/* 00435058 00000000 */   nop   
/* 0043505C 8F998688 */  lw    $t9, %call16(dwvalue)($gp)
/* 00435060 90440021 */  lbu   $a0, 0x21($v0)
/* 00435064 8FA7004C */  lw    $a3, 0x4c($sp)
/* 00435068 0320F809 */  jalr  $t9
/* 0043506C 3084001F */   andi  $a0, $a0, 0x1f
/* 00435070 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00435074 10000008 */  b     .L00435098
/* 00435078 AE220000 */   sw    $v0, ($s1)
.L0043507C:
/* 0043507C 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00435080 92040021 */  lbu   $a0, 0x21($s0)
/* 00435084 8FA6004C */  lw    $a2, 0x4c($sp)
/* 00435088 0320F809 */  jalr  $t9
/* 0043508C 3084001F */   andi  $a0, $a0, 0x1f
/* 00435090 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00435094 AE220000 */  sw    $v0, ($s1)
.L00435098:
/* 00435098 92080019 */  lbu   $t0, 0x19($s0)
/* 0043509C 8F998604 */  lw    $t9, %call16(free_tree_and_cse)($gp)
/* 004350A0 02002025 */  move  $a0, $s0
/* 004350A4 3109FFFE */  andi  $t1, $t0, 0xfffe
/* 004350A8 0320F809 */  jalr  $t9
/* 004350AC A2090019 */   sb    $t1, 0x19($s0)
/* 004350B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004350B4 10000002 */  b     .L004350C0
/* 004350B8 24020001 */   li    $v0, 1
.L004350BC:
/* 004350BC 00001025 */  move  $v0, $zero
.L004350C0:
/* 004350C0 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004350C4 8FB00020 */  lw    $s0, 0x20($sp)
/* 004350C8 8FB10024 */  lw    $s1, 0x24($sp)
/* 004350CC 03E00008 */  jr    $ra
/* 004350D0 27BD0060 */   addiu $sp, $sp, 0x60
    .type fold1, @function
    .size fold1, .-fold1
    .end fold1
)"");
