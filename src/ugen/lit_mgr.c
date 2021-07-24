__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000B170:
    # 0043698C new_lit
    .ascii "Insufficiant memory                                                             "

RO_1000B1C0:
    # 0043698C new_lit
    .ascii "lit_mgr.p                                                                       "

RO_1000B210:
    # 00436D00 add_to_pool
    .ascii "illegal data type                                                               "

RO_1000B260:
    # 00436D00 add_to_pool
    .ascii "lit_mgr.p                                                                       "

    .balign 4
jtbl_1000B2B0:
    # 00436D00 add_to_pool
    .gpword .L00436D78
    .gpword .L00436E28
    .gpword .L00436E28
    .gpword .L00436DD4
    .gpword .L00436DF0
    .gpword .L00436E0C



.bss
    .balign 4
# 100213B4
glabel small_strings
    # 004366B0 reset_pool
    # 004367DC output_pool
    # 00436D00 add_to_pool
    .space 4
    .size small_strings, 4
    .type small_strings, @object

    .balign 4
# 100213B8
glabel large_strings
    # 004366B0 reset_pool
    # 004367DC output_pool
    # 00436D00 add_to_pool
    .space 4
    .size large_strings, 4
    .type large_strings, @object

    .balign 4
# 100213BC
glabel floats
    # 004366B0 reset_pool
    # 004367DC output_pool
    # 00436D00 add_to_pool
    .space 4
    .size floats, 4
    .type floats, @object

    .balign 4
# 100213C0
glabel doubles
    # 004366B0 reset_pool
    # 004367DC output_pool
    # 00436D00 add_to_pool
    .space 4
    .size doubles, 4
    .type doubles, @object

    .balign 4
# 100213C4
glabel sets
    # 004366B0 reset_pool
    # 004367DC output_pool
    # 00436D00 add_to_pool
    .space 4
    .size sets, 4
    .type sets, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel reset_pool
    .ent reset_pool
    # 0042BDAC eval
/* 004366B0 3C1C0FBF */  .cpload $t9
/* 004366B4 279C93A0 */  
/* 004366B8 0399E021 */  
/* 004366BC 8F818AD8 */  lw     $at, %got(small_strings)($gp)
/* 004366C0 AC200000 */  sw    $zero, ($at)
/* 004366C4 8F818ADC */  lw     $at, %got(large_strings)($gp)
/* 004366C8 AC200000 */  sw    $zero, ($at)
/* 004366CC 8F818AE0 */  lw     $at, %got(floats)($gp)
/* 004366D0 AC200000 */  sw    $zero, ($at)
/* 004366D4 8F818AE4 */  lw     $at, %got(doubles)($gp)
/* 004366D8 AC200000 */  sw    $zero, ($at)
/* 004366DC 8F818AE8 */  lw     $at, %got(sets)($gp)
/* 004366E0 03E00008 */  jr    $ra
/* 004366E4 AC200000 */   sw    $zero, ($at)
    .type reset_pool, @function
    .size reset_pool, .-reset_pool
    .end reset_pool

glabel select_data_section
    .ent select_data_section
    # 004367DC output_pool
/* 004366E8 3C1C0FBF */  .cpload $t9
/* 004366EC 279C9368 */  
/* 004366F0 0399E021 */  
/* 004366F4 8F8E8990 */  lw     $t6, %got(sdata_max)($gp)
/* 004366F8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004366FC AFBF001C */  sw    $ra, 0x1c($sp)
/* 00436700 8DCE0000 */  lw    $t6, ($t6)
/* 00436704 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00436708 01C4082A */  slt   $at, $t6, $a0
/* 0043670C 14200008 */  bnez  $at, .L00436730
/* 00436710 00000000 */   nop   
/* 00436714 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00436718 24040019 */  li    $a0, 25
/* 0043671C 00002825 */  move  $a1, $zero
/* 00436720 0320F809 */  jalr  $t9
/* 00436724 00000000 */   nop   
/* 00436728 10000007 */  b     .L00436748
/* 0043672C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00436730:
/* 00436730 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00436734 2404000A */  li    $a0, 10
/* 00436738 00002825 */  move  $a1, $zero
/* 0043673C 0320F809 */  jalr  $t9
/* 00436740 00000000 */   nop   
/* 00436744 8FBC0018 */  lw    $gp, 0x18($sp)
.L00436748:
/* 00436748 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043674C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00436750 03E00008 */  jr    $ra
/* 00436754 00000000 */   nop   
    .type select_data_section, @function
    .size select_data_section, .-select_data_section
    .end select_data_section

glabel emit_list
    .ent emit_list
    # 004367DC output_pool
/* 00436758 3C1C0FBF */  .cpload $t9
/* 0043675C 279C92F8 */  
/* 00436760 0399E021 */  
/* 00436764 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00436768 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0043676C AFB00018 */  sw    $s0, 0x18($sp)
/* 00436770 00808025 */  move  $s0, $a0
/* 00436774 30B100FF */  andi  $s1, $a1, 0xff
/* 00436778 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0043677C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00436780 10800011 */  beqz  $a0, .L004367C8
/* 00436784 AFA5002C */   sw    $a1, 0x2c($sp)
.L00436788:
/* 00436788 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 0043678C 8E040000 */  lw    $a0, ($s0)
/* 00436790 0320F809 */  jalr  $t9
/* 00436794 00000000 */   nop   
/* 00436798 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043679C 00402025 */  move  $a0, $v0
/* 004367A0 02202825 */  move  $a1, $s1
/* 004367A4 8F9986A8 */  lw    $t9, %call16(emit_val)($gp)
/* 004367A8 26060008 */  addiu $a2, $s0, 8
/* 004367AC 24070001 */  li    $a3, 1
/* 004367B0 0320F809 */  jalr  $t9
/* 004367B4 00000000 */   nop   
/* 004367B8 8E100010 */  lw    $s0, 0x10($s0)
/* 004367BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004367C0 1600FFF1 */  bnez  $s0, .L00436788
/* 004367C4 00000000 */   nop   
.L004367C8:
/* 004367C8 8FBF0024 */  lw    $ra, 0x24($sp)
/* 004367CC 8FB00018 */  lw    $s0, 0x18($sp)
/* 004367D0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004367D4 03E00008 */  jr    $ra
/* 004367D8 27BD0028 */   addiu $sp, $sp, 0x28
    .type emit_list, @function
    .size emit_list, .-emit_list
    .end emit_list

glabel output_pool
    .ent output_pool
    # 0042BDAC eval
/* 004367DC 3C1C0FBF */  .cpload $t9
/* 004367E0 279C9274 */  
/* 004367E4 0399E021 */  
/* 004367E8 8F8E8AE0 */  lw     $t6, %got(floats)($gp)
/* 004367EC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004367F0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004367F4 8DCE0000 */  lw    $t6, ($t6)
/* 004367F8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004367FC 11C00013 */  beqz  $t6, .L0043684C
/* 00436800 00000000 */   nop   
/* 00436804 8F998420 */  lw    $t9, %call16(select_data_section)($gp)
/* 00436808 24040004 */  li    $a0, 4
/* 0043680C 0320F809 */  jalr  $t9
/* 00436810 00000000 */   nop   
/* 00436814 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00436818 24040004 */  li    $a0, 4
/* 0043681C 00002825 */  move  $a1, $zero
/* 00436820 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 00436824 24060002 */  li    $a2, 2
/* 00436828 0320F809 */  jalr  $t9
/* 0043682C 00000000 */   nop   
/* 00436830 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00436834 24050005 */  li    $a1, 5
/* 00436838 8F998424 */  lw    $t9, %call16(emit_list)($gp)
/* 0043683C 8F848AE0 */  lw     $a0, %got(floats)($gp)
/* 00436840 0320F809 */  jalr  $t9
/* 00436844 8C840000 */   lw    $a0, ($a0)
/* 00436848 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043684C:
/* 0043684C 8F8F8AE4 */  lw     $t7, %got(doubles)($gp)
/* 00436850 8DEF0000 */  lw    $t7, ($t7)
/* 00436854 11E00013 */  beqz  $t7, .L004368A4
/* 00436858 00000000 */   nop   
/* 0043685C 8F998420 */  lw    $t9, %call16(select_data_section)($gp)
/* 00436860 24040008 */  li    $a0, 8
/* 00436864 0320F809 */  jalr  $t9
/* 00436868 00000000 */   nop   
/* 0043686C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00436870 24040004 */  li    $a0, 4
/* 00436874 00002825 */  move  $a1, $zero
/* 00436878 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 0043687C 24060003 */  li    $a2, 3
/* 00436880 0320F809 */  jalr  $t9
/* 00436884 00000000 */   nop   
/* 00436888 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043688C 24050006 */  li    $a1, 6
/* 00436890 8F998424 */  lw    $t9, %call16(emit_list)($gp)
/* 00436894 8F848AE4 */  lw     $a0, %got(doubles)($gp)
/* 00436898 0320F809 */  jalr  $t9
/* 0043689C 8C840000 */   lw    $a0, ($a0)
/* 004368A0 8FBC0018 */  lw    $gp, 0x18($sp)
.L004368A4:
/* 004368A4 8F988AE8 */  lw     $t8, %got(sets)($gp)
/* 004368A8 8F180000 */  lw    $t8, ($t8)
/* 004368AC 13000013 */  beqz  $t8, .L004368FC
/* 004368B0 00000000 */   nop   
/* 004368B4 8F998420 */  lw    $t9, %call16(select_data_section)($gp)
/* 004368B8 24040008 */  li    $a0, 8
/* 004368BC 0320F809 */  jalr  $t9
/* 004368C0 00000000 */   nop   
/* 004368C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004368C8 24040004 */  li    $a0, 4
/* 004368CC 00002825 */  move  $a1, $zero
/* 004368D0 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 004368D4 24060002 */  li    $a2, 2
/* 004368D8 0320F809 */  jalr  $t9
/* 004368DC 00000000 */   nop   
/* 004368E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004368E4 24050009 */  li    $a1, 9
/* 004368E8 8F998424 */  lw    $t9, %call16(emit_list)($gp)
/* 004368EC 8F848AE8 */  lw     $a0, %got(sets)($gp)
/* 004368F0 0320F809 */  jalr  $t9
/* 004368F4 8C840000 */   lw    $a0, ($a0)
/* 004368F8 8FBC0018 */  lw    $gp, 0x18($sp)
.L004368FC:
/* 004368FC 8F998AD8 */  lw     $t9, %got(small_strings)($gp)
/* 00436900 8F390000 */  lw    $t9, ($t9)
/* 00436904 1320000D */  beqz  $t9, .L0043693C
/* 00436908 00000000 */   nop   
/* 0043690C 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00436910 24040019 */  li    $a0, 25
/* 00436914 00002825 */  move  $a1, $zero
/* 00436918 0320F809 */  jalr  $t9
/* 0043691C 00000000 */   nop   
/* 00436920 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00436924 24050007 */  li    $a1, 7
/* 00436928 8F998424 */  lw    $t9, %call16(emit_list)($gp)
/* 0043692C 8F848AD8 */  lw     $a0, %got(small_strings)($gp)
/* 00436930 0320F809 */  jalr  $t9
/* 00436934 8C840000 */   lw    $a0, ($a0)
/* 00436938 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043693C:
/* 0043693C 8F888ADC */  lw     $t0, %got(large_strings)($gp)
/* 00436940 8D080000 */  lw    $t0, ($t0)
/* 00436944 5100000E */  beql  $t0, $zero, .L00436980
/* 00436948 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0043694C 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00436950 2404001A */  li    $a0, 26
/* 00436954 00002825 */  move  $a1, $zero
/* 00436958 0320F809 */  jalr  $t9
/* 0043695C 00000000 */   nop   
/* 00436960 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00436964 24050007 */  li    $a1, 7
/* 00436968 8F998424 */  lw    $t9, %call16(emit_list)($gp)
/* 0043696C 8F848ADC */  lw     $a0, %got(large_strings)($gp)
/* 00436970 0320F809 */  jalr  $t9
/* 00436974 8C840000 */   lw    $a0, ($a0)
/* 00436978 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043697C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00436980:
/* 00436980 27BD0020 */  addiu $sp, $sp, 0x20
/* 00436984 03E00008 */  jr    $ra
/* 00436988 00000000 */   nop   
    .type output_pool, @function
    .size output_pool, .-output_pool
    .end output_pool

glabel new_lit
    .ent new_lit
    # 00436AF8 add_to_list_no_check
    # 00436C4C add_to_list
/* 0043698C 3C1C0FBF */  .cpload $t9
/* 00436990 279C90C4 */  
/* 00436994 0399E021 */  
/* 00436998 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043699C 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 004369A0 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 004369A4 AFA400C0 */  sw    $a0, 0xc0($sp)
/* 004369A8 AFA500C4 */  sw    $a1, 0xc4($sp)
/* 004369AC AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 004369B0 24050001 */  li    $a1, 1
/* 004369B4 0320F809 */  jalr  $t9
/* 004369B8 24040018 */   li    $a0, 24
/* 004369BC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004369C0 14400041 */  bnez  $v0, .L00436AC8
/* 004369C4 00401825 */   move  $v1, $v0
/* 004369C8 8F8E8038 */  lw    $t6, %got(RO_1000B1C0)($gp)
/* 004369CC 24040004 */  li    $a0, 4
/* 004369D0 2405006A */  li    $a1, 106
/* 004369D4 25CEB1C0 */  addiu $t6, %lo(RO_1000B1C0) # addiu $t6, $t6, -0x4e40
/* 004369D8 25C80048 */  addiu $t0, $t6, 0x48
/* 004369DC 03A0C825 */  move  $t9, $sp
.L004369E0:
/* 004369E0 89D80000 */  lwl   $t8, ($t6)
/* 004369E4 99D80003 */  lwr   $t8, 3($t6)
/* 004369E8 25CE000C */  addiu $t6, $t6, 0xc
/* 004369EC 2739000C */  addiu $t9, $t9, 0xc
/* 004369F0 AB38FFFC */  swl   $t8, -4($t9)
/* 004369F4 BB38FFFF */  swr   $t8, -1($t9)
/* 004369F8 89CFFFF8 */  lwl   $t7, -8($t6)
/* 004369FC 99CFFFFB */  lwr   $t7, -5($t6)
/* 00436A00 AB2F0000 */  swl   $t7, ($t9)
/* 00436A04 BB2F0003 */  swr   $t7, 3($t9)
/* 00436A08 89D8FFFC */  lwl   $t8, -4($t6)
/* 00436A0C 99D8FFFF */  lwr   $t8, -1($t6)
/* 00436A10 AB380004 */  swl   $t8, 4($t9)
/* 00436A14 15C8FFF2 */  bne   $t6, $t0, .L004369E0
/* 00436A18 BB380007 */   swr   $t8, 7($t9)
/* 00436A1C 89D80000 */  lwl   $t8, ($t6)
/* 00436A20 99D80003 */  lwr   $t8, 3($t6)
/* 00436A24 8F898038 */  lw    $t1, %got(RO_1000B170)($gp)
/* 00436A28 03A06025 */  move  $t4, $sp
/* 00436A2C AB380008 */  swl   $t8, 8($t9)
/* 00436A30 BB38000B */  swr   $t8, 0xb($t9)
/* 00436A34 89CF0004 */  lwl   $t7, 4($t6)
/* 00436A38 99CF0007 */  lwr   $t7, 7($t6)
/* 00436A3C 2529B170 */  addiu $t1, %lo(RO_1000B170) # addiu $t1, $t1, -0x4e90
/* 00436A40 252D0048 */  addiu $t5, $t1, 0x48
/* 00436A44 AB2F000C */  swl   $t7, 0xc($t9)
/* 00436A48 BB2F000F */  swr   $t7, 0xf($t9)
.L00436A4C:
/* 00436A4C 892B0000 */  lwl   $t3, ($t1)
/* 00436A50 992B0003 */  lwr   $t3, 3($t1)
/* 00436A54 2529000C */  addiu $t1, $t1, 0xc
/* 00436A58 258C000C */  addiu $t4, $t4, 0xc
/* 00436A5C A98B004C */  swl   $t3, 0x4c($t4)
/* 00436A60 B98B004F */  swr   $t3, 0x4f($t4)
/* 00436A64 892AFFF8 */  lwl   $t2, -8($t1)
/* 00436A68 992AFFFB */  lwr   $t2, -5($t1)
/* 00436A6C A98A0050 */  swl   $t2, 0x50($t4)
/* 00436A70 B98A0053 */  swr   $t2, 0x53($t4)
/* 00436A74 892BFFFC */  lwl   $t3, -4($t1)
/* 00436A78 992BFFFF */  lwr   $t3, -1($t1)
/* 00436A7C A98B0054 */  swl   $t3, 0x54($t4)
/* 00436A80 152DFFF2 */  bne   $t1, $t5, .L00436A4C
/* 00436A84 B98B0057 */   swr   $t3, 0x57($t4)
/* 00436A88 892B0000 */  lwl   $t3, ($t1)
/* 00436A8C 992B0003 */  lwr   $t3, 3($t1)
/* 00436A90 A98B0058 */  swl   $t3, 0x58($t4)
/* 00436A94 B98B005B */  swr   $t3, 0x5b($t4)
/* 00436A98 892A0004 */  lwl   $t2, 4($t1)
/* 00436A9C 992A0007 */  lwr   $t2, 7($t1)
/* 00436AA0 A98A005C */  swl   $t2, 0x5c($t4)
/* 00436AA4 B98A005F */  swr   $t2, 0x5f($t4)
/* 00436AA8 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00436AAC 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436AB0 8FA60008 */  lw    $a2, 8($sp)
/* 00436AB4 0320F809 */  jalr  $t9
/* 00436AB8 AFA300B8 */   sw    $v1, 0xb8($sp)
/* 00436ABC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00436AC0 10000009 */  b     .L00436AE8
/* 00436AC4 8FA200B8 */   lw    $v0, 0xb8($sp)
.L00436AC8:
/* 00436AC8 8FA800C4 */  lw    $t0, 0xc4($sp)
/* 00436ACC 8FAE00C0 */  lw    $t6, 0xc0($sp)
/* 00436AD0 00601025 */  move  $v0, $v1
/* 00436AD4 AC680000 */  sw    $t0, ($v1)
/* 00436AD8 8DCF0000 */  lw    $t7, ($t6)
/* 00436ADC AC6F0008 */  sw    $t7, 8($v1)
/* 00436AE0 8DD90004 */  lw    $t9, 4($t6)
/* 00436AE4 AC79000C */  sw    $t9, 0xc($v1)
.L00436AE8:
/* 00436AE8 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00436AEC 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 00436AF0 03E00008 */  jr    $ra
/* 00436AF4 00000000 */   nop   
    .type new_lit, @function
    .size new_lit, .-new_lit
    .end new_lit

glabel add_to_list_no_check
    .ent add_to_list_no_check
    # 00436D00 add_to_pool
/* 00436AF8 3C1C0FBF */  .cpload $t9
/* 00436AFC 279C8F58 */  
/* 00436B00 0399E021 */  
/* 00436B04 8F99842C */  lw    $t9, %call16(new_lit)($gp)
/* 00436B08 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00436B0C AFA40020 */  sw    $a0, 0x20($sp)
/* 00436B10 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00436B14 00A02025 */  move  $a0, $a1
/* 00436B18 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00436B1C 0320F809 */  jalr  $t9
/* 00436B20 00C02825 */   move  $a1, $a2
/* 00436B24 8FA30020 */  lw    $v1, 0x20($sp)
/* 00436B28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00436B2C 8C6E0000 */  lw    $t6, ($v1)
/* 00436B30 AC4E0010 */  sw    $t6, 0x10($v0)
/* 00436B34 AC620000 */  sw    $v0, ($v1)
/* 00436B38 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00436B3C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00436B40 03E00008 */  jr    $ra
/* 00436B44 00000000 */   nop   
    .type add_to_list_no_check, @function
    .size add_to_list_no_check, .-add_to_list_no_check
    .end add_to_list_no_check

glabel valu_equ
    .ent valu_equ
    # 00436C4C add_to_list
/* 00436B48 8C820000 */  lw    $v0, ($a0)
/* 00436B4C 8CAE0000 */  lw    $t6, ($a1)
/* 00436B50 11C20003 */  beq   $t6, $v0, .L00436B60
/* 00436B54 00000000 */   nop   
/* 00436B58 03E00008 */  jr    $ra
/* 00436B5C 00001025 */   move  $v0, $zero

.L00436B60:
/* 00436B60 10400037 */  beqz  $v0, .L00436C40
/* 00436B64 00401825 */   move  $v1, $v0
/* 00436B68 24630001 */  addiu $v1, $v1, 1
/* 00436B6C 2469FFFF */  addiu $t1, $v1, -1
/* 00436B70 31290003 */  andi  $t1, $t1, 3
/* 00436B74 11200012 */  beqz  $t1, .L00436BC0
/* 00436B78 24020001 */   li    $v0, 1
/* 00436B7C 8CAF0004 */  lw    $t7, 4($a1)
/* 00436B80 8C980004 */  lw    $t8, 4($a0)
/* 00436B84 25280001 */  addiu $t0, $t1, 1
/* 00436B88 01E23021 */  addu  $a2, $t7, $v0
/* 00436B8C 03023821 */  addu  $a3, $t8, $v0
.L00436B90:
/* 00436B90 90D9FFFF */  lbu   $t9, -1($a2)
/* 00436B94 90EAFFFF */  lbu   $t2, -1($a3)
/* 00436B98 24420001 */  addiu $v0, $v0, 1
/* 00436B9C 24C60001 */  addiu $a2, $a2, 1
/* 00436BA0 132A0003 */  beq   $t9, $t2, .L00436BB0
/* 00436BA4 00000000 */   nop   
/* 00436BA8 03E00008 */  jr    $ra
/* 00436BAC 00001025 */   move  $v0, $zero

.L00436BB0:
/* 00436BB0 1502FFF7 */  bne   $t0, $v0, .L00436B90
/* 00436BB4 24E70001 */   addiu $a3, $a3, 1
/* 00436BB8 50430022 */  beql  $v0, $v1, .L00436C44
/* 00436BBC 24020001 */   li    $v0, 1
.L00436BC0:
/* 00436BC0 8CAB0004 */  lw    $t3, 4($a1)
/* 00436BC4 8C8C0004 */  lw    $t4, 4($a0)
/* 00436BC8 01623021 */  addu  $a2, $t3, $v0
/* 00436BCC 01823821 */  addu  $a3, $t4, $v0
.L00436BD0:
/* 00436BD0 90CDFFFF */  lbu   $t5, -1($a2)
/* 00436BD4 90EEFFFF */  lbu   $t6, -1($a3)
/* 00436BD8 24420004 */  addiu $v0, $v0, 4
/* 00436BDC 51AE0004 */  beql  $t5, $t6, .L00436BF0
/* 00436BE0 90CF0000 */   lbu   $t7, ($a2)
/* 00436BE4 03E00008 */  jr    $ra
/* 00436BE8 00001025 */   move  $v0, $zero

/* 00436BEC 90CF0000 */  lbu   $t7, ($a2)
.L00436BF0:
/* 00436BF0 90F80000 */  lbu   $t8, ($a3)
/* 00436BF4 51F80004 */  beql  $t7, $t8, .L00436C08
/* 00436BF8 90D90001 */   lbu   $t9, 1($a2)
/* 00436BFC 03E00008 */  jr    $ra
/* 00436C00 00001025 */   move  $v0, $zero

/* 00436C04 90D90001 */  lbu   $t9, 1($a2)
.L00436C08:
/* 00436C08 90EA0001 */  lbu   $t2, 1($a3)
/* 00436C0C 532A0004 */  beql  $t9, $t2, .L00436C20
/* 00436C10 90CB0002 */   lbu   $t3, 2($a2)
/* 00436C14 03E00008 */  jr    $ra
/* 00436C18 00001025 */   move  $v0, $zero

/* 00436C1C 90CB0002 */  lbu   $t3, 2($a2)
.L00436C20:
/* 00436C20 90EC0002 */  lbu   $t4, 2($a3)
/* 00436C24 24C60004 */  addiu $a2, $a2, 4
/* 00436C28 116C0003 */  beq   $t3, $t4, .L00436C38
/* 00436C2C 00000000 */   nop   
/* 00436C30 03E00008 */  jr    $ra
/* 00436C34 00001025 */   move  $v0, $zero

.L00436C38:
/* 00436C38 1443FFE5 */  bne   $v0, $v1, .L00436BD0
/* 00436C3C 24E70004 */   addiu $a3, $a3, 4
.L00436C40:
/* 00436C40 24020001 */  li    $v0, 1
.L00436C44:
/* 00436C44 03E00008 */  jr    $ra
/* 00436C48 00000000 */   nop   
    .type valu_equ, @function
    .size valu_equ, .-valu_equ
    .end valu_equ

glabel add_to_list
    .ent add_to_list
    # 00436D00 add_to_pool
/* 00436C4C 3C1C0FBF */  .cpload $t9
/* 00436C50 279C8E04 */  
/* 00436C54 0399E021 */  
/* 00436C58 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00436C5C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00436C60 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00436C64 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00436C68 AFB00018 */  sw    $s0, 0x18($sp)
/* 00436C6C AFA40028 */  sw    $a0, 0x28($sp)
/* 00436C70 AFA60030 */  sw    $a2, 0x30($sp)
/* 00436C74 8C820000 */  lw    $v0, ($a0)
/* 00436C78 00A08825 */  move  $s1, $a1
/* 00436C7C 1040000F */  beqz  $v0, .L00436CBC
/* 00436C80 00000000 */   nop   
/* 00436C84 1040000D */  beqz  $v0, .L00436CBC
/* 00436C88 00408025 */   move  $s0, $v0
.L00436C8C:
/* 00436C8C 8F998434 */  lw    $t9, %call16(valu_equ)($gp)
/* 00436C90 02202025 */  move  $a0, $s1
/* 00436C94 26050008 */  addiu $a1, $s0, 8
/* 00436C98 0320F809 */  jalr  $t9
/* 00436C9C 00000000 */   nop   
/* 00436CA0 10400003 */  beqz  $v0, .L00436CB0
/* 00436CA4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00436CA8 10000010 */  b     .L00436CEC
/* 00436CAC 8E020000 */   lw    $v0, ($s0)
.L00436CB0:
/* 00436CB0 8E100010 */  lw    $s0, 0x10($s0)
/* 00436CB4 1600FFF5 */  bnez  $s0, .L00436C8C
/* 00436CB8 00000000 */   nop   
.L00436CBC:
/* 00436CBC 8F99842C */  lw    $t9, %call16(new_lit)($gp)
/* 00436CC0 02202025 */  move  $a0, $s1
/* 00436CC4 8FA50030 */  lw    $a1, 0x30($sp)
/* 00436CC8 0320F809 */  jalr  $t9
/* 00436CCC 00000000 */   nop   
/* 00436CD0 8FAF0028 */  lw    $t7, 0x28($sp)
/* 00436CD4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00436CD8 8DF80000 */  lw    $t8, ($t7)
/* 00436CDC AC580010 */  sw    $t8, 0x10($v0)
/* 00436CE0 8FB90028 */  lw    $t9, 0x28($sp)
/* 00436CE4 AF220000 */  sw    $v0, ($t9)
/* 00436CE8 8FA20030 */  lw    $v0, 0x30($sp)
.L00436CEC:
/* 00436CEC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00436CF0 8FB00018 */  lw    $s0, 0x18($sp)
/* 00436CF4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00436CF8 03E00008 */  jr    $ra
/* 00436CFC 27BD0028 */   addiu $sp, $sp, 0x28
    .type add_to_list, @function
    .size add_to_list, .-add_to_list
    .end add_to_list

glabel add_to_pool
    .ent add_to_pool
    # 0042BDAC eval
/* 00436D00 3C1C0FBF */  .cpload $t9
/* 00436D04 279C8D50 */  
/* 00436D08 0399E021 */  
/* 00436D0C 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 00436D10 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00436D14 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00436D18 90830000 */  lbu   $v1, ($a0)
/* 00436D1C 00803825 */  move  $a3, $a0
/* 00436D20 00A03025 */  move  $a2, $a1
/* 00436D24 38620049 */  xori  $v0, $v1, 0x49
/* 00436D28 2C420001 */  sltiu $v0, $v0, 1
/* 00436D2C 54400004 */  bnel  $v0, $zero, .L00436D40
/* 00436D30 004002B4 */   teq   $v0, $zero, 0xa
/* 00436D34 38620046 */  xori  $v0, $v1, 0x46
/* 00436D38 2C420001 */  sltiu $v0, $v0, 1
/* 00436D3C 004002B4 */  teq   $v0, $zero, 0xa
.L00436D40:
/* 00436D40 90E30001 */  lbu   $v1, 1($a3)
/* 00436D44 3063001F */  andi  $v1, $v1, 0x1f
/* 00436D48 306300FF */  andi  $v1, $v1, 0xff
/* 00436D4C 246EFFF7 */  addiu $t6, $v1, -9
/* 00436D50 2DC10006 */  sltiu $at, $t6, 6
/* 00436D54 10200034 */  beqz  $at, .L00436E28
/* 00436D58 00000000 */   nop   
/* 00436D5C 8F818038 */  lw    $at, %got(jtbl_1000B2B0)($gp)
/* 00436D60 000E7080 */  sll   $t6, $t6, 2
/* 00436D64 002E0821 */  addu  $at, $at, $t6
/* 00436D68 8C2EB2B0 */  lw    $t6, %lo(jtbl_1000B2B0)($at)
/* 00436D6C 01DC7021 */  addu  $t6, $t6, $gp
/* 00436D70 01C00008 */  jr    $t6
/* 00436D74 00000000 */   nop   
.L00436D78:
/* 00436D78 8F8F8990 */  lw     $t7, %got(sdata_max)($gp)
/* 00436D7C 8CF80010 */  lw    $t8, 0x10($a3)
/* 00436D80 8DEF0000 */  lw    $t7, ($t7)
/* 00436D84 01F8082A */  slt   $at, $t7, $t8
/* 00436D88 10200009 */  beqz  $at, .L00436DB0
/* 00436D8C 00000000 */   nop   
/* 00436D90 8F998430 */  lw    $t9, %call16(add_to_list_no_check)($gp)
/* 00436D94 8F848ADC */  lw     $a0, %got(large_strings)($gp)
/* 00436D98 24E50010 */  addiu $a1, $a3, 0x10
/* 00436D9C 0320F809 */  jalr  $t9
/* 00436DA0 AFA600BC */   sw    $a2, 0xbc($sp)
/* 00436DA4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00436DA8 1000005E */  b     .L00436F24
/* 00436DAC 8FA200BC */   lw    $v0, 0xbc($sp)
.L00436DB0:
/* 00436DB0 8F998430 */  lw    $t9, %call16(add_to_list_no_check)($gp)
/* 00436DB4 8F848AD8 */  lw     $a0, %got(small_strings)($gp)
/* 00436DB8 24E50010 */  addiu $a1, $a3, 0x10
/* 00436DBC 0320F809 */  jalr  $t9
/* 00436DC0 AFA600BC */   sw    $a2, 0xbc($sp)
/* 00436DC4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00436DC8 8FA600BC */  lw    $a2, 0xbc($sp)
/* 00436DCC 10000055 */  b     .L00436F24
/* 00436DD0 00C01025 */   move  $v0, $a2
.L00436DD4:
/* 00436DD4 8F998438 */  lw    $t9, %call16(add_to_list)($gp)
/* 00436DD8 8F848AE4 */  lw     $a0, %got(doubles)($gp)
/* 00436DDC 24E50010 */  addiu $a1, $a3, 0x10
/* 00436DE0 0320F809 */  jalr  $t9
/* 00436DE4 00000000 */   nop   
/* 00436DE8 1000004E */  b     .L00436F24
/* 00436DEC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00436DF0:
/* 00436DF0 8F998438 */  lw    $t9, %call16(add_to_list)($gp)
/* 00436DF4 8F848AE0 */  lw     $a0, %got(floats)($gp)
/* 00436DF8 24E50010 */  addiu $a1, $a3, 0x10
/* 00436DFC 0320F809 */  jalr  $t9
/* 00436E00 00000000 */   nop   
/* 00436E04 10000047 */  b     .L00436F24
/* 00436E08 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00436E0C:
/* 00436E0C 8F998438 */  lw    $t9, %call16(add_to_list)($gp)
/* 00436E10 8F848AE8 */  lw     $a0, %got(sets)($gp)
/* 00436E14 24E50010 */  addiu $a1, $a3, 0x10
/* 00436E18 0320F809 */  jalr  $t9
/* 00436E1C 00000000 */   nop   
/* 00436E20 10000040 */  b     .L00436F24
/* 00436E24 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00436E28:
/* 00436E28 8F998038 */  lw    $t9, %got(RO_1000B260)($gp)
/* 00436E2C 24040004 */  li    $a0, 4
/* 00436E30 240500BA */  li    $a1, 186
/* 00436E34 2739B260 */  addiu $t9, %lo(RO_1000B260) # addiu $t9, $t9, -0x4da0
/* 00436E38 272B0048 */  addiu $t3, $t9, 0x48
/* 00436E3C 03A05025 */  move  $t2, $sp
.L00436E40:
/* 00436E40 8B290000 */  lwl   $t1, ($t9)
/* 00436E44 9B290003 */  lwr   $t1, 3($t9)
/* 00436E48 2739000C */  addiu $t9, $t9, 0xc
/* 00436E4C 254A000C */  addiu $t2, $t2, 0xc
/* 00436E50 A949FFFC */  swl   $t1, -4($t2)
/* 00436E54 B949FFFF */  swr   $t1, -1($t2)
/* 00436E58 8B28FFF8 */  lwl   $t0, -8($t9)
/* 00436E5C 9B28FFFB */  lwr   $t0, -5($t9)
/* 00436E60 A9480000 */  swl   $t0, ($t2)
/* 00436E64 B9480003 */  swr   $t0, 3($t2)
/* 00436E68 8B29FFFC */  lwl   $t1, -4($t9)
/* 00436E6C 9B29FFFF */  lwr   $t1, -1($t9)
/* 00436E70 A9490004 */  swl   $t1, 4($t2)
/* 00436E74 172BFFF2 */  bne   $t9, $t3, .L00436E40
/* 00436E78 B9490007 */   swr   $t1, 7($t2)
/* 00436E7C 8B290000 */  lwl   $t1, ($t9)
/* 00436E80 9B290003 */  lwr   $t1, 3($t9)
/* 00436E84 8F8C8038 */  lw    $t4, %got(RO_1000B210)($gp)
/* 00436E88 03A07825 */  move  $t7, $sp
/* 00436E8C A9490008 */  swl   $t1, 8($t2)
/* 00436E90 B949000B */  swr   $t1, 0xb($t2)
/* 00436E94 8B280004 */  lwl   $t0, 4($t9)
/* 00436E98 9B280007 */  lwr   $t0, 7($t9)
/* 00436E9C 258CB210 */  addiu $t4, %lo(RO_1000B210) # addiu $t4, $t4, -0x4df0
/* 00436EA0 25980048 */  addiu $t8, $t4, 0x48
/* 00436EA4 A948000C */  swl   $t0, 0xc($t2)
/* 00436EA8 B948000F */  swr   $t0, 0xf($t2)
.L00436EAC:
/* 00436EAC 898E0000 */  lwl   $t6, ($t4)
/* 00436EB0 998E0003 */  lwr   $t6, 3($t4)
/* 00436EB4 258C000C */  addiu $t4, $t4, 0xc
/* 00436EB8 25EF000C */  addiu $t7, $t7, 0xc
/* 00436EBC A9EE004C */  swl   $t6, 0x4c($t7)
/* 00436EC0 B9EE004F */  swr   $t6, 0x4f($t7)
/* 00436EC4 898DFFF8 */  lwl   $t5, -8($t4)
/* 00436EC8 998DFFFB */  lwr   $t5, -5($t4)
/* 00436ECC A9ED0050 */  swl   $t5, 0x50($t7)
/* 00436ED0 B9ED0053 */  swr   $t5, 0x53($t7)
/* 00436ED4 898EFFFC */  lwl   $t6, -4($t4)
/* 00436ED8 998EFFFF */  lwr   $t6, -1($t4)
/* 00436EDC A9EE0054 */  swl   $t6, 0x54($t7)
/* 00436EE0 1598FFF2 */  bne   $t4, $t8, .L00436EAC
/* 00436EE4 B9EE0057 */   swr   $t6, 0x57($t7)
/* 00436EE8 898E0000 */  lwl   $t6, ($t4)
/* 00436EEC 998E0003 */  lwr   $t6, 3($t4)
/* 00436EF0 A9EE0058 */  swl   $t6, 0x58($t7)
/* 00436EF4 B9EE005B */  swr   $t6, 0x5b($t7)
/* 00436EF8 898D0004 */  lwl   $t5, 4($t4)
/* 00436EFC 998D0007 */  lwr   $t5, 7($t4)
/* 00436F00 A9ED005C */  swl   $t5, 0x5c($t7)
/* 00436F04 B9ED005F */  swr   $t5, 0x5f($t7)
/* 00436F08 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00436F0C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436F10 8FA60008 */  lw    $a2, 8($sp)
/* 00436F14 0320F809 */  jalr  $t9
/* 00436F18 00000000 */   nop   
/* 00436F1C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00436F20 00001025 */  move  $v0, $zero
.L00436F24:
/* 00436F24 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00436F28 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 00436F2C 03E00008 */  jr    $ra
/* 00436F30 00000000 */   nop   
    .type add_to_pool, @function
    .size add_to_pool, .-add_to_pool
    .end add_to_pool
)"");
