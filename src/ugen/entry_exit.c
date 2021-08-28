__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_10009830:
    # 00420810 gen_entry_exit
    .ascii "stack limit block number not found                                              "

RO_10009880:
    # 00420810 gen_entry_exit
    .ascii "entry_exit.p                                                                    "

RO_100098D0:
    # 00422DB8 emit_file
    .ascii "                "

RO_100098E0:
    # 00422DB8 emit_file
    .ascii "file number missing                                                             "

RO_10009930:
    # 00422DB8 emit_file
    .ascii "entry_exit.p                                                                    "

.data
# 10013640
glabel get_filename
    .byte 0x00
    .type get_filename, @object
    .size get_filename, .-get_filename # 1




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel gen_entry_exit
    .ent gen_entry_exit
    # 0042BDAC eval
/* 00420810 3C1C0FC0 */  .cpload $t9
/* 00420814 279CF240 */  
/* 00420818 0399E021 */  
/* 0042081C 27BDFF38 */  addiu $sp, $sp, -0xc8
/* 00420820 8FAE0108 */  lw    $t6, 0x108($sp)
/* 00420824 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00420828 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0042082C AFA400C8 */  sw    $a0, 0xc8($sp)
/* 00420830 AFA500CC */  sw    $a1, 0xcc($sp)
/* 00420834 AFA600D0 */  sw    $a2, 0xd0($sp)
/* 00420838 11C00007 */  beqz  $t6, .L00420858
/* 0042083C AFA700D4 */   sw    $a3, 0xd4($sp)
/* 00420840 8F998238 */  lw    $t9, %call16(demit_itext)($gp)
/* 00420844 27A40108 */  addiu $a0, $sp, 0x108
/* 00420848 0320F809 */  jalr  $t9
/* 0042084C 00000000 */   nop   
/* 00420850 10000007 */  b     .L00420870
/* 00420854 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00420858:
/* 00420858 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0042085C 24040015 */  li    $a0, 21
/* 00420860 00002825 */  move  $a1, $zero
/* 00420864 0320F809 */  jalr  $t9
/* 00420868 00000000 */   nop   
/* 0042086C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00420870:
/* 00420870 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 00420874 24040004 */  li    $a0, 4
/* 00420878 00002825 */  move  $a1, $zero
/* 0042087C 0320F809 */  jalr  $t9
/* 00420880 24060002 */   li    $a2, 2
/* 00420884 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420888 8F8F8994 */  lw     $t7, %got(ascii_out)($gp)
/* 0042088C 91EF0000 */  lbu   $t7, ($t7)
/* 00420890 51E00008 */  beql  $t7, $zero, .L004208B4
/* 00420894 93B800CF */   lbu   $t8, 0xcf($sp)
/* 00420898 8F998300 */  lw    $t9, %call16(emit_file)($gp)
/* 0042089C 8FA400E0 */  lw    $a0, 0xe0($sp)
/* 004208A0 24050001 */  li    $a1, 1
/* 004208A4 0320F809 */  jalr  $t9
/* 004208A8 00000000 */   nop   
/* 004208AC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004208B0 93B800CF */  lbu   $t8, 0xcf($sp)
.L004208B4:
/* 004208B4 13000007 */  beqz  $t8, .L004208D4
/* 004208B8 00000000 */   nop   
/* 004208BC 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 004208C0 24040002 */  li    $a0, 2
/* 004208C4 8FA500C8 */  lw    $a1, 0xc8($sp)
/* 004208C8 0320F809 */  jalr  $t9
/* 004208CC 00000000 */   nop   
/* 004208D0 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L004208D4:
/* 004208D4 8F998288 */  lw    $t9, %call16(demit_dir2)($gp)
/* 004208D8 2404001C */  li    $a0, 28
/* 004208DC 00002825 */  move  $a1, $zero
/* 004208E0 8FA600E0 */  lw    $a2, 0xe0($sp)
/* 004208E4 0320F809 */  jalr  $t9
/* 004208E8 8FA700E4 */   lw    $a3, 0xe4($sp)
/* 004208EC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004208F0 2404001B */  li    $a0, 27
/* 004208F4 8FA500C8 */  lw    $a1, 0xc8($sp)
/* 004208F8 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 004208FC 8FA600D0 */  lw    $a2, 0xd0($sp)
/* 00420900 0320F809 */  jalr  $t9
/* 00420904 00000000 */   nop   
/* 00420908 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0042090C 8FA400C8 */  lw    $a0, 0xc8($sp)
/* 00420910 8F998594 */  lw    $t9, %call16(output_entry_point)($gp)
/* 00420914 0320F809 */  jalr  $t9
/* 00420918 00000000 */   nop   
/* 0042091C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420920 8F998304 */  lw    $t9, %call16(emit_optimize_level)($gp)
/* 00420924 8F848A48 */  lw     $a0, %got(olevel)($gp)
/* 00420928 0320F809 */  jalr  $t9
/* 0042092C 90840000 */   lbu   $a0, ($a0)
/* 00420930 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420934 24010001 */  li    $at, 1
/* 00420938 8F8289E4 */  lw     $v0, %got(pic_level)($gp)
/* 0042093C 8C420000 */  lw    $v0, ($v0)
/* 00420940 10410013 */  beq   $v0, $at, .L00420990
/* 00420944 24010002 */   li    $at, 2
/* 00420948 14410018 */  bne   $v0, $at, .L004209AC
/* 0042094C 93B900DF */   lbu   $t9, 0xdf($sp)
/* 00420950 1320000F */  beqz  $t9, .L00420990
/* 00420954 00000000 */   nop   
/* 00420958 8F888A48 */  lw     $t0, %got(olevel)($gp)
/* 0042095C 91080000 */  lbu   $t0, ($t0)
/* 00420960 2D010002 */  sltiu $at, $t0, 2
/* 00420964 1420000A */  bnez  $at, .L00420990
/* 00420968 00000000 */   nop   
/* 0042096C 8F898A90 */  lw     $t1, %got(uses_gp)($gp)
/* 00420970 91290000 */  lbu   $t1, ($t1)
/* 00420974 15200006 */  bnez  $t1, .L00420990
/* 00420978 00000000 */   nop   
/* 0042097C 8F8A897C */  lw     $t2, %got(i_ptr)($gp)
/* 00420980 8D4A0000 */  lw    $t2, ($t2)
/* 00420984 2D4103E8 */  sltiu $at, $t2, 0x3e8
/* 00420988 54200009 */  bnel  $at, $zero, .L004209B0
/* 0042098C 8FAB00D4 */   lw    $t3, 0xd4($sp)
.L00420990:
/* 00420990 8F998294 */  lw    $t9, %call16(emit_cpload)($gp)
/* 00420994 24040019 */  li    $a0, 25
/* 00420998 00002825 */  move  $a1, $zero
/* 0042099C 8FA600C8 */  lw    $a2, 0xc8($sp)
/* 004209A0 0320F809 */  jalr  $t9
/* 004209A4 00003825 */   move  $a3, $zero
/* 004209A8 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L004209AC:
/* 004209AC 8FAB00D4 */  lw    $t3, 0xd4($sp)
.L004209B0:
/* 004209B0 15600002 */  bnez  $t3, .L004209BC
/* 004209B4 00000000 */   nop   
/* 004209B8 AFA00100 */  sw    $zero, 0x100($sp)
.L004209BC:
/* 004209BC 8F8C8A88 */  lw     $t4, %got(init_dynmem)($gp)
/* 004209C0 918C0000 */  lbu   $t4, ($t4)
/* 004209C4 51800022 */  beql  $t4, $zero, .L00420A50
/* 004209C8 8FAE00D4 */   lw    $t6, 0xd4($sp)
/* 004209CC 8FAD00D4 */  lw    $t5, 0xd4($sp)
/* 004209D0 51A0001F */  beql  $t5, $zero, .L00420A50
/* 004209D4 8FAE00D4 */   lw    $t6, 0xd4($sp)
/* 004209D8 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 004209DC 00002025 */  move  $a0, $zero
/* 004209E0 24050001 */  li    $a1, 1
/* 004209E4 0320F809 */  jalr  $t9
/* 004209E8 00000000 */   nop   
/* 004209EC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004209F0 A3A200C2 */  sb    $v0, 0xc2($sp)
/* 004209F4 00002025 */  move  $a0, $zero
/* 004209F8 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 004209FC 24050001 */  li    $a1, 1
/* 00420A00 0320F809 */  jalr  $t9
/* 00420A04 00000000 */   nop   
/* 00420A08 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420A0C 3C06FFFA */  lui   $a2, 0xfffa
/* 00420A10 A3A200C1 */  sb    $v0, 0xc1($sp)
/* 00420A14 8F99825C */  lw    $t9, %call16(demit_ri)($gp)
/* 00420A18 34C65A5A */  ori   $a2, $a2, 0x5a5a
/* 00420A1C 24040029 */  li    $a0, 41
/* 00420A20 93A500C2 */  lbu   $a1, 0xc2($sp)
/* 00420A24 0320F809 */  jalr  $t9
/* 00420A28 00003825 */   move  $a3, $zero
/* 00420A2C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420A30 24040031 */  li    $a0, 49
/* 00420A34 93A500C1 */  lbu   $a1, 0xc1($sp)
/* 00420A38 8F998260 */  lw    $t9, %call16(demit_rr)($gp)
/* 00420A3C 2406001D */  li    $a2, 29
/* 00420A40 0320F809 */  jalr  $t9
/* 00420A44 00000000 */   nop   
/* 00420A48 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420A4C 8FAE00D4 */  lw    $t6, 0xd4($sp)
.L00420A50:
/* 00420A50 51C00064 */  beql  $t6, $zero, .L00420BE4
/* 00420A54 93A800F3 */   lbu   $t0, 0xf3($sp)
/* 00420A58 8F828A8C */  lw     $v0, %got(max_stack)($gp)
/* 00420A5C 2401FFFF */  li    $at, -1
/* 00420A60 8FAF00D4 */  lw    $t7, 0xd4($sp)
/* 00420A64 8C420000 */  lw    $v0, ($v0)
/* 00420A68 1041004A */  beq   $v0, $at, .L00420B94
/* 00420A6C 01E2082A */   slt   $at, $t7, $v0
/* 00420A70 14200039 */  bnez  $at, .L00420B58
/* 00420A74 24040056 */   li    $a0, 86
/* 00420A78 8F9984D8 */  lw    $t9, %call16(get_reg)($gp)
/* 00420A7C 24040018 */  li    $a0, 24
/* 00420A80 00002825 */  move  $a1, $zero
/* 00420A84 0320F809 */  jalr  $t9
/* 00420A88 24060001 */   li    $a2, 1
/* 00420A8C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420A90 24040031 */  li    $a0, 49
/* 00420A94 24050019 */  li    $a1, 25
/* 00420A98 8F998260 */  lw    $t9, %call16(demit_rr)($gp)
/* 00420A9C 2406001F */  li    $a2, 31
/* 00420AA0 0320F809 */  jalr  $t9
/* 00420AA4 00000000 */   nop   
/* 00420AA8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420AAC 24040029 */  li    $a0, 41
/* 00420AB0 24050018 */  li    $a1, 24
/* 00420AB4 8F99825C */  lw    $t9, %call16(demit_ri)($gp)
/* 00420AB8 8FA600D4 */  lw    $a2, 0xd4($sp)
/* 00420ABC 00003825 */  move  $a3, $zero
/* 00420AC0 0320F809 */  jalr  $t9
/* 00420AC4 00000000 */   nop   
/* 00420AC8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420ACC 24040035 */  li    $a0, 53
/* 00420AD0 240500C0 */  li    $a1, 192
/* 00420AD4 8F998268 */  lw    $t9, %call16(demit_regmask)($gp)
/* 00420AD8 00003025 */  move  $a2, $zero
/* 00420ADC 0320F809 */  jalr  $t9
/* 00420AE0 00000000 */   nop   
/* 00420AE4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420AE8 24040023 */  li    $a0, 35
/* 00420AEC 00003025 */  move  $a2, $zero
/* 00420AF0 8F998264 */  lw    $t9, %call16(demit_a)($gp)
/* 00420AF4 8F8589D4 */  lw     $a1, %got(stack_limit_bn)($gp)
/* 00420AF8 0320F809 */  jalr  $t9
/* 00420AFC 8CA50000 */   lw    $a1, ($a1)
/* 00420B00 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420B04 24040056 */  li    $a0, 86
/* 00420B08 2405001D */  li    $a1, 29
/* 00420B0C 8F99826C */  lw    $t9, %call16(demit_rrr)($gp)
/* 00420B10 2406001D */  li    $a2, 29
/* 00420B14 24070018 */  li    $a3, 24
/* 00420B18 0320F809 */  jalr  $t9
/* 00420B1C 00000000 */   nop   
/* 00420B20 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420B24 24040018 */  li    $a0, 24
/* 00420B28 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00420B2C 0320F809 */  jalr  $t9
/* 00420B30 00000000 */   nop   
/* 00420B34 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420B38 24040031 */  li    $a0, 49
/* 00420B3C 2405001F */  li    $a1, 31
/* 00420B40 8F998260 */  lw    $t9, %call16(demit_rr)($gp)
/* 00420B44 24060019 */  li    $a2, 25
/* 00420B48 0320F809 */  jalr  $t9
/* 00420B4C 00000000 */   nop   
/* 00420B50 10000023 */  b     .L00420BE0
/* 00420B54 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00420B58:
/* 00420B58 8F99825C */  lw    $t9, %call16(demit_ri)($gp)
/* 00420B5C 2405001D */  li    $a1, 29
/* 00420B60 8FA600D4 */  lw    $a2, 0xd4($sp)
/* 00420B64 0320F809 */  jalr  $t9
/* 00420B68 00003825 */   move  $a3, $zero
/* 00420B6C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420B70 24040057 */  li    $a0, 87
/* 00420B74 00002825 */  move  $a1, $zero
/* 00420B78 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00420B7C 00003025 */  move  $a2, $zero
/* 00420B80 2407001D */  li    $a3, 29
/* 00420B84 0320F809 */  jalr  $t9
/* 00420B88 AFA00010 */   sw    $zero, 0x10($sp)
/* 00420B8C 10000014 */  b     .L00420BE0
/* 00420B90 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00420B94:
/* 00420B94 8F988A74 */  lw     $t8, %got(reversed_stack)($gp)
/* 00420B98 2405001D */  li    $a1, 29
/* 00420B9C 24040056 */  li    $a0, 86
/* 00420BA0 93180000 */  lbu   $t8, ($t8)
/* 00420BA4 13000008 */  beqz  $t8, .L00420BC8
/* 00420BA8 00000000 */   nop   
/* 00420BAC 8F99825C */  lw    $t9, %call16(demit_ri)($gp)
/* 00420BB0 24040002 */  li    $a0, 2
/* 00420BB4 8FA600D4 */  lw    $a2, 0xd4($sp)
/* 00420BB8 0320F809 */  jalr  $t9
/* 00420BBC 00003825 */   move  $a3, $zero
/* 00420BC0 10000007 */  b     .L00420BE0
/* 00420BC4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00420BC8:
/* 00420BC8 8F99825C */  lw    $t9, %call16(demit_ri)($gp)
/* 00420BCC 2405001D */  li    $a1, 29
/* 00420BD0 8FA600D4 */  lw    $a2, 0xd4($sp)
/* 00420BD4 0320F809 */  jalr  $t9
/* 00420BD8 00003825 */   move  $a3, $zero
/* 00420BDC 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00420BE0:
/* 00420BE0 93A800F3 */  lbu   $t0, 0xf3($sp)
.L00420BE4:
/* 00420BE4 24190017 */  li    $t9, 23
/* 00420BE8 A3B900BB */  sb    $t9, 0xbb($sp)
/* 00420BEC 5100004D */  beql  $t0, $zero, .L00420D24
/* 00420BF0 8FA900D4 */   lw    $t1, 0xd4($sp)
/* 00420BF4 8F8689D4 */  lw     $a2, %got(stack_limit_bn)($gp)
/* 00420BF8 240500C1 */  li    $a1, 193
/* 00420BFC 240D0008 */  li    $t5, 8
/* 00420C00 8CC60000 */  lw    $a2, ($a2)
/* 00420C04 2404002A */  li    $a0, 42
/* 00420C08 14C0003F */  bnez  $a2, .L00420D08
/* 00420C0C 00000000 */   nop   
/* 00420C10 8F898038 */  lw    $t1, %got(RO_10009880)($gp)
/* 00420C14 24040004 */  li    $a0, 4
/* 00420C18 03A06025 */  move  $t4, $sp
/* 00420C1C 25299880 */  addiu $t1, %lo(RO_10009880) # addiu $t1, $t1, -0x6780
/* 00420C20 252D0048 */  addiu $t5, $t1, 0x48
.L00420C24:
/* 00420C24 892B0000 */  lwl   $t3, ($t1)
/* 00420C28 992B0003 */  lwr   $t3, 3($t1)
/* 00420C2C 2529000C */  addiu $t1, $t1, 0xc
/* 00420C30 258C000C */  addiu $t4, $t4, 0xc
/* 00420C34 A98BFFFC */  swl   $t3, -4($t4)
/* 00420C38 B98BFFFF */  swr   $t3, -1($t4)
/* 00420C3C 892AFFF8 */  lwl   $t2, -8($t1)
/* 00420C40 992AFFFB */  lwr   $t2, -5($t1)
/* 00420C44 A98A0000 */  swl   $t2, ($t4)
/* 00420C48 B98A0003 */  swr   $t2, 3($t4)
/* 00420C4C 892BFFFC */  lwl   $t3, -4($t1)
/* 00420C50 992BFFFF */  lwr   $t3, -1($t1)
/* 00420C54 A98B0004 */  swl   $t3, 4($t4)
/* 00420C58 152DFFF2 */  bne   $t1, $t5, .L00420C24
/* 00420C5C B98B0007 */   swr   $t3, 7($t4)
/* 00420C60 892B0000 */  lwl   $t3, ($t1)
/* 00420C64 992B0003 */  lwr   $t3, 3($t1)
/* 00420C68 8F8E8038 */  lw    $t6, %got(RO_10009830)($gp)
/* 00420C6C 03A0C825 */  move  $t9, $sp
/* 00420C70 A98B0008 */  swl   $t3, 8($t4)
/* 00420C74 B98B000B */  swr   $t3, 0xb($t4)
/* 00420C78 892A0004 */  lwl   $t2, 4($t1)
/* 00420C7C 992A0007 */  lwr   $t2, 7($t1)
/* 00420C80 25CE9830 */  addiu $t6, %lo(RO_10009830) # addiu $t6, $t6, -0x67d0
/* 00420C84 25C80048 */  addiu $t0, $t6, 0x48
/* 00420C88 A98A000C */  swl   $t2, 0xc($t4)
/* 00420C8C B98A000F */  swr   $t2, 0xf($t4)
.L00420C90:
/* 00420C90 89D80000 */  lwl   $t8, ($t6)
/* 00420C94 99D80003 */  lwr   $t8, 3($t6)
/* 00420C98 25CE000C */  addiu $t6, $t6, 0xc
/* 00420C9C 2739000C */  addiu $t9, $t9, 0xc
/* 00420CA0 AB38004C */  swl   $t8, 0x4c($t9)
/* 00420CA4 BB38004F */  swr   $t8, 0x4f($t9)
/* 00420CA8 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00420CAC 99CFFFFB */  lwr   $t7, -5($t6)
/* 00420CB0 AB2F0050 */  swl   $t7, 0x50($t9)
/* 00420CB4 BB2F0053 */  swr   $t7, 0x53($t9)
/* 00420CB8 89D8FFFC */  lwl   $t8, -4($t6)
/* 00420CBC 99D8FFFF */  lwr   $t8, -1($t6)
/* 00420CC0 AB380054 */  swl   $t8, 0x54($t9)
/* 00420CC4 15C8FFF2 */  bne   $t6, $t0, .L00420C90
/* 00420CC8 BB380057 */   swr   $t8, 0x57($t9)
/* 00420CCC 89D80000 */  lwl   $t8, ($t6)
/* 00420CD0 99D80003 */  lwr   $t8, 3($t6)
/* 00420CD4 AB380058 */  swl   $t8, 0x58($t9)
/* 00420CD8 BB38005B */  swr   $t8, 0x5b($t9)
/* 00420CDC 89CF0004 */  lwl   $t7, 4($t6)
/* 00420CE0 99CF0007 */  lwr   $t7, 7($t6)
/* 00420CE4 AB2F005C */  swl   $t7, 0x5c($t9)
/* 00420CE8 BB2F005F */  swr   $t7, 0x5f($t9)
/* 00420CEC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00420CF0 8FA7000C */  lw    $a3, 0xc($sp)
/* 00420CF4 8FA60008 */  lw    $a2, 8($sp)
/* 00420CF8 0320F809 */  jalr  $t9
/* 00420CFC 00000000 */   nop   
/* 00420D00 10000007 */  b     .L00420D20
/* 00420D04 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00420D08:
/* 00420D08 8F99827C */  lw    $t9, %call16(demit_ra)($gp)
/* 00420D0C A3AD00BB */  sb    $t5, 0xbb($sp)
/* 00420D10 24050008 */  li    $a1, 8
/* 00420D14 0320F809 */  jalr  $t9
/* 00420D18 00003825 */   move  $a3, $zero
/* 00420D1C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00420D20:
/* 00420D20 8FA900D4 */  lw    $t1, 0xd4($sp)
.L00420D24:
/* 00420D24 93AC00EF */  lbu   $t4, 0xef($sp)
/* 00420D28 1120003F */  beqz  $t1, .L00420E28
/* 00420D2C 00000000 */   nop   
/* 00420D30 1180003D */  beqz  $t4, .L00420E28
/* 00420D34 00000000 */   nop   
/* 00420D38 8F8A89B8 */  lw     $t2, %got(isa)($gp)
/* 00420D3C 24010001 */  li    $at, 1
/* 00420D40 914A0000 */  lbu   $t2, ($t2)
/* 00420D44 15410015 */  bne   $t2, $at, .L00420D9C
/* 00420D48 00000000 */   nop   
/* 00420D4C 8F8B8A74 */  lw     $t3, %got(reversed_stack)($gp)
/* 00420D50 93A500BB */  lbu   $a1, 0xbb($sp)
/* 00420D54 24040100 */  li    $a0, 256
/* 00420D58 916B0000 */  lbu   $t3, ($t3)
/* 00420D5C 11600008 */  beqz  $t3, .L00420D80
/* 00420D60 00000000 */   nop   
/* 00420D64 8F998270 */  lw    $t9, %call16(demit_rri)($gp)
/* 00420D68 24040100 */  li    $a0, 256
/* 00420D6C 2406001D */  li    $a2, 29
/* 00420D70 0320F809 */  jalr  $t9
/* 00420D74 24070009 */   li    $a3, 9
/* 00420D78 1000002B */  b     .L00420E28
/* 00420D7C 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00420D80:
/* 00420D80 8F998270 */  lw    $t9, %call16(demit_rri)($gp)
/* 00420D84 2405001D */  li    $a1, 29
/* 00420D88 93A600BB */  lbu   $a2, 0xbb($sp)
/* 00420D8C 0320F809 */  jalr  $t9
/* 00420D90 24070009 */   li    $a3, 9
/* 00420D94 10000024 */  b     .L00420E28
/* 00420D98 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00420D9C:
/* 00420D9C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00420DA0 0320F809 */  jalr  $t9
/* 00420DA4 00000000 */   nop   
/* 00420DA8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420DAC 00403825 */  move  $a3, $v0
/* 00420DB0 2405001D */  li    $a1, 29
/* 00420DB4 8F888A74 */  lw     $t0, %got(reversed_stack)($gp)
/* 00420DB8 2404000F */  li    $a0, 15
/* 00420DBC 91080000 */  lbu   $t0, ($t0)
/* 00420DC0 11000008 */  beqz  $t0, .L00420DE4
/* 00420DC4 00000000 */   nop   
/* 00420DC8 8F998274 */  lw    $t9, %call16(demit_rrll)($gp)
/* 00420DCC 24040015 */  li    $a0, 21
/* 00420DD0 93A600BB */  lbu   $a2, 0xbb($sp)
/* 00420DD4 0320F809 */  jalr  $t9
/* 00420DD8 AFA200BC */   sw    $v0, 0xbc($sp)
/* 00420DDC 10000007 */  b     .L00420DFC
/* 00420DE0 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00420DE4:
/* 00420DE4 8F998274 */  lw    $t9, %call16(demit_rrll)($gp)
/* 00420DE8 2405001D */  li    $a1, 29
/* 00420DEC 93A600BB */  lbu   $a2, 0xbb($sp)
/* 00420DF0 0320F809 */  jalr  $t9
/* 00420DF4 AFA700BC */   sw    $a3, 0xbc($sp)
/* 00420DF8 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00420DFC:
/* 00420DFC 8F998278 */  lw    $t9, %call16(demit_i)($gp)
/* 00420E00 2404001B */  li    $a0, 27
/* 00420E04 24050009 */  li    $a1, 9
/* 00420E08 0320F809 */  jalr  $t9
/* 00420E0C 00000000 */   nop   
/* 00420E10 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420E14 8FA400BC */  lw    $a0, 0xbc($sp)
/* 00420E18 8F998298 */  lw    $t9, %call16(ddefine_label)($gp)
/* 00420E1C 0320F809 */  jalr  $t9
/* 00420E20 00000000 */   nop   
/* 00420E24 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00420E28:
/* 00420E28 8F8E8A88 */  lw     $t6, %got(init_dynmem)($gp)
/* 00420E2C 8FB900D4 */  lw    $t9, 0xd4($sp)
/* 00420E30 91CE0000 */  lbu   $t6, ($t6)
/* 00420E34 11C00052 */  beqz  $t6, .L00420F80
/* 00420E38 00000000 */   nop   
/* 00420E3C 13200050 */  beqz  $t9, .L00420F80
/* 00420E40 00000000 */   nop   
/* 00420E44 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00420E48 0320F809 */  jalr  $t9
/* 00420E4C 00000000 */   nop   
/* 00420E50 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420E54 AFA200BC */  sw    $v0, 0xbc($sp)
/* 00420E58 00402025 */  move  $a0, $v0
/* 00420E5C 8F998298 */  lw    $t9, %call16(ddefine_label)($gp)
/* 00420E60 0320F809 */  jalr  $t9
/* 00420E64 00000000 */   nop   
/* 00420E68 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420E6C 93A500C2 */  lbu   $a1, 0xc2($sp)
/* 00420E70 00003025 */  move  $a2, $zero
/* 00420E74 8F8F8A74 */  lw     $t7, %got(reversed_stack)($gp)
/* 00420E78 24040056 */  li    $a0, 86
/* 00420E7C 91EF0000 */  lbu   $t7, ($t7)
/* 00420E80 11E00018 */  beqz  $t7, .L00420EE4
/* 00420E84 00000000 */   nop   
/* 00420E88 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00420E8C 24040057 */  li    $a0, 87
/* 00420E90 93A700C1 */  lbu   $a3, 0xc1($sp)
/* 00420E94 0320F809 */  jalr  $t9
/* 00420E98 AFA00010 */   sw    $zero, 0x10($sp)
/* 00420E9C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420EA0 24040057 */  li    $a0, 87
/* 00420EA4 93A500C2 */  lbu   $a1, 0xc2($sp)
/* 00420EA8 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00420EAC 24060004 */  li    $a2, 4
/* 00420EB0 93A700C1 */  lbu   $a3, 0xc1($sp)
/* 00420EB4 0320F809 */  jalr  $t9
/* 00420EB8 AFA00010 */   sw    $zero, 0x10($sp)
/* 00420EBC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420EC0 24040002 */  li    $a0, 2
/* 00420EC4 93A500C1 */  lbu   $a1, 0xc1($sp)
/* 00420EC8 8F99825C */  lw    $t9, %call16(demit_ri)($gp)
/* 00420ECC 24060008 */  li    $a2, 8
/* 00420ED0 00003825 */  move  $a3, $zero
/* 00420ED4 0320F809 */  jalr  $t9
/* 00420ED8 00000000 */   nop   
/* 00420EDC 10000017 */  b     .L00420F3C
/* 00420EE0 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00420EE4:
/* 00420EE4 8F99825C */  lw    $t9, %call16(demit_ri)($gp)
/* 00420EE8 93A500C1 */  lbu   $a1, 0xc1($sp)
/* 00420EEC 24060008 */  li    $a2, 8
/* 00420EF0 0320F809 */  jalr  $t9
/* 00420EF4 00003825 */   move  $a3, $zero
/* 00420EF8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420EFC 24040057 */  li    $a0, 87
/* 00420F00 93A500C2 */  lbu   $a1, 0xc2($sp)
/* 00420F04 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00420F08 00003025 */  move  $a2, $zero
/* 00420F0C 93A700C1 */  lbu   $a3, 0xc1($sp)
/* 00420F10 0320F809 */  jalr  $t9
/* 00420F14 AFA00010 */   sw    $zero, 0x10($sp)
/* 00420F18 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420F1C 24040057 */  li    $a0, 87
/* 00420F20 93A500C2 */  lbu   $a1, 0xc2($sp)
/* 00420F24 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00420F28 24060004 */  li    $a2, 4
/* 00420F2C 93A700C1 */  lbu   $a3, 0xc1($sp)
/* 00420F30 0320F809 */  jalr  $t9
/* 00420F34 AFA00010 */   sw    $zero, 0x10($sp)
/* 00420F38 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00420F3C:
/* 00420F3C 8F998274 */  lw    $t9, %call16(demit_rrll)($gp)
/* 00420F40 2404001A */  li    $a0, 26
/* 00420F44 93A500C1 */  lbu   $a1, 0xc1($sp)
/* 00420F48 2406001D */  li    $a2, 29
/* 00420F4C 0320F809 */  jalr  $t9
/* 00420F50 8FA700BC */   lw    $a3, 0xbc($sp)
/* 00420F54 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420F58 93A400C2 */  lbu   $a0, 0xc2($sp)
/* 00420F5C 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00420F60 0320F809 */  jalr  $t9
/* 00420F64 00000000 */   nop   
/* 00420F68 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420F6C 93A400C1 */  lbu   $a0, 0xc1($sp)
/* 00420F70 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00420F74 0320F809 */  jalr  $t9
/* 00420F78 00000000 */   nop   
/* 00420F7C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00420F80:
/* 00420F80 8F9982F0 */  lw    $t9, %call16(gen_reg_save_restore)($gp)
/* 00420F84 93B800EB */  lbu   $t8, 0xeb($sp)
/* 00420F88 8FAD0114 */  lw    $t5, 0x114($sp)
/* 00420F8C 8FA90118 */  lw    $t1, 0x118($sp)
/* 00420F90 8FA400D4 */  lw    $a0, 0xd4($sp)
/* 00420F94 8FA500D8 */  lw    $a1, 0xd8($sp)
/* 00420F98 8FA600F8 */  lw    $a2, 0xf8($sp)
/* 00420F9C 8FA70100 */  lw    $a3, 0x100($sp)
/* 00420FA0 AFB80010 */  sw    $t8, 0x10($sp)
/* 00420FA4 AFAD0014 */  sw    $t5, 0x14($sp)
/* 00420FA8 0320F809 */  jalr  $t9
/* 00420FAC AFA90018 */   sw    $t1, 0x18($sp)
/* 00420FB0 93AC00F3 */  lbu   $t4, 0xf3($sp)
/* 00420FB4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420FB8 51800008 */  beql  $t4, $zero, .L00420FDC
/* 00420FBC 8FAA00D4 */   lw    $t2, 0xd4($sp)
/* 00420FC0 8F998260 */  lw    $t9, %call16(demit_rr)($gp)
/* 00420FC4 24040031 */  li    $a0, 49
/* 00420FC8 24050017 */  li    $a1, 23
/* 00420FCC 0320F809 */  jalr  $t9
/* 00420FD0 93A600BB */   lbu   $a2, 0xbb($sp)
/* 00420FD4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00420FD8 8FAA00D4 */  lw    $t2, 0xd4($sp)
.L00420FDC:
/* 00420FDC 93AB00EB */  lbu   $t3, 0xeb($sp)
/* 00420FE0 51400024 */  beql  $t2, $zero, .L00421074
/* 00420FE4 8FB90110 */   lw    $t9, 0x110($sp)
/* 00420FE8 55600022 */  bnel  $t3, $zero, .L00421074
/* 00420FEC 8FB90110 */   lw    $t9, 0x110($sp)
/* 00420FF0 8F88896C */  lw     $t0, %got(excpt)($gp)
/* 00420FF4 91080000 */  lbu   $t0, ($t0)
/* 00420FF8 1100000A */  beqz  $t0, .L00421024
/* 00420FFC 00000000 */   nop   
/* 00421000 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00421004 0320F809 */  jalr  $t9
/* 00421008 00000000 */   nop   
/* 0042100C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00421010 00402025 */  move  $a0, $v0
/* 00421014 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00421018 0320F809 */  jalr  $t9
/* 0042101C 00000000 */   nop   
/* 00421020 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00421024:
/* 00421024 8F8E8A74 */  lw     $t6, %got(reversed_stack)($gp)
/* 00421028 2405001D */  li    $a1, 29
/* 0042102C 24040002 */  li    $a0, 2
/* 00421030 91CE0000 */  lbu   $t6, ($t6)
/* 00421034 11C00008 */  beqz  $t6, .L00421058
/* 00421038 00000000 */   nop   
/* 0042103C 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00421040 24040056 */  li    $a0, 86
/* 00421044 8FA600D4 */  lw    $a2, 0xd4($sp)
/* 00421048 0320F809 */  jalr  $t9
/* 0042104C 00003825 */   move  $a3, $zero
/* 00421050 10000007 */  b     .L00421070
/* 00421054 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00421058:
/* 00421058 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042105C 2405001D */  li    $a1, 29
/* 00421060 8FA600D4 */  lw    $a2, 0xd4($sp)
/* 00421064 0320F809 */  jalr  $t9
/* 00421068 00003825 */   move  $a3, $zero
/* 0042106C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00421070:
/* 00421070 8FB90110 */  lw    $t9, 0x110($sp)
.L00421074:
/* 00421074 2401FFFF */  li    $at, -1
/* 00421078 17210007 */  bne   $t9, $at, .L00421098
/* 0042107C 00000000 */   nop   
/* 00421080 8F998218 */  lw    $t9, %call16(emit_r)($gp)
/* 00421084 24040022 */  li    $a0, 34
/* 00421088 2405001F */  li    $a1, 31
/* 0042108C 0320F809 */  jalr  $t9
/* 00421090 00000000 */   nop   
/* 00421094 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00421098:
/* 00421098 8F9982FC */  lw    $t9, %call16(demit_frame)($gp)
/* 0042109C 8F858A60 */  lw     $a1, %got(frame_pointer)($gp)
/* 004210A0 8FA400D4 */  lw    $a0, 0xd4($sp)
/* 004210A4 2406001F */  li    $a2, 31
/* 004210A8 0320F809 */  jalr  $t9
/* 004210AC 90A50000 */   lbu   $a1, ($a1)
/* 004210B0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004210B4 8F8F89F4 */  lw     $t7, %got(framesz_relocatable)($gp)
/* 004210B8 91EF0000 */  lbu   $t7, ($t7)
/* 004210BC 11E00014 */  beqz  $t7, .L00421110
/* 004210C0 00000000 */   nop   
/* 004210C4 8F988A74 */  lw     $t8, %got(reversed_stack)($gp)
/* 004210C8 2405001D */  li    $a1, 29
/* 004210CC 24040056 */  li    $a0, 86
/* 004210D0 93180000 */  lbu   $t8, ($t8)
/* 004210D4 13000008 */  beqz  $t8, .L004210F8
/* 004210D8 00000000 */   nop   
/* 004210DC 8F99825C */  lw    $t9, %call16(demit_ri)($gp)
/* 004210E0 24040002 */  li    $a0, 2
/* 004210E4 8FA600F4 */  lw    $a2, 0xf4($sp)
/* 004210E8 0320F809 */  jalr  $t9
/* 004210EC 24070006 */   li    $a3, 6
/* 004210F0 10000007 */  b     .L00421110
/* 004210F4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004210F8:
/* 004210F8 8F99825C */  lw    $t9, %call16(demit_ri)($gp)
/* 004210FC 2405001D */  li    $a1, 29
/* 00421100 8FA600F4 */  lw    $a2, 0xf4($sp)
/* 00421104 0320F809 */  jalr  $t9
/* 00421108 24070006 */   li    $a3, 6
/* 0042110C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00421110:
/* 00421110 8F8D896C */  lw     $t5, %got(excpt)($gp)
/* 00421114 93A900FF */  lbu   $t1, 0xff($sp)
/* 00421118 91AD0000 */  lbu   $t5, ($t5)
/* 0042111C 51A00011 */  beql  $t5, $zero, .L00421164
/* 00421120 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 00421124 11200008 */  beqz  $t1, .L00421148
/* 00421128 00000000 */   nop   
/* 0042112C 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 00421130 2404003C */  li    $a0, 60
/* 00421134 00002825 */  move  $a1, $zero
/* 00421138 0320F809 */  jalr  $t9
/* 0042113C 24060001 */   li    $a2, 1
/* 00421140 10000007 */  b     .L00421160
/* 00421144 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00421148:
/* 00421148 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 0042114C 2404003C */  li    $a0, 60
/* 00421150 00002825 */  move  $a1, $zero
/* 00421154 0320F809 */  jalr  $t9
/* 00421158 00003025 */   move  $a2, $zero
/* 0042115C 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L00421160:
/* 00421160 8FBF00B4 */  lw    $ra, 0xb4($sp)
.L00421164:
/* 00421164 27BD00C8 */  addiu $sp, $sp, 0xc8
/* 00421168 03E00008 */  jr    $ra
/* 0042116C 00000000 */   nop   
    .type gen_entry_exit, @function
    .size gen_entry_exit, .-gen_entry_exit
    .end gen_entry_exit

glabel gen_entry
    .ent gen_entry
    # 0042BDAC eval
/* 00421170 3C1C0FC0 */  .cpload $t9
/* 00421174 279CE8E0 */  
/* 00421178 0399E021 */  
/* 0042117C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00421180 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00421184 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00421188 AFA40030 */  sw    $a0, 0x30($sp)
/* 0042118C AFA50034 */  sw    $a1, 0x34($sp)
/* 00421190 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00421194 AFA60038 */  sw    $a2, 0x38($sp)
/* 00421198 AFA7003C */  sw    $a3, 0x3c($sp)
/* 0042119C 8FA50030 */  lw    $a1, 0x30($sp)
/* 004211A0 0320F809 */  jalr  $t9
/* 004211A4 24040002 */   li    $a0, 2
/* 004211A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004211AC 2404002E */  li    $a0, 46
/* 004211B0 8FA50030 */  lw    $a1, 0x30($sp)
/* 004211B4 8F998240 */  lw    $t9, %call16(emit_dir1)($gp)
/* 004211B8 8FA60034 */  lw    $a2, 0x34($sp)
/* 004211BC 0320F809 */  jalr  $t9
/* 004211C0 00000000 */   nop   
/* 004211C4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004211C8 00002025 */  move  $a0, $zero
/* 004211CC 8FA50030 */  lw    $a1, 0x30($sp)
/* 004211D0 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 004211D4 0320F809 */  jalr  $t9
/* 004211D8 00000000 */   nop   
/* 004211DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004211E0 24040019 */  li    $a0, 25
/* 004211E4 8F8E89E4 */  lw     $t6, %got(pic_level)($gp)
/* 004211E8 8DCE0000 */  lw    $t6, ($t6)
/* 004211EC 59C00008 */  blezl $t6, .L00421210
/* 004211F0 8FAF0038 */   lw    $t7, 0x38($sp)
/* 004211F4 8F998294 */  lw    $t9, %call16(emit_cpload)($gp)
/* 004211F8 00002825 */  move  $a1, $zero
/* 004211FC 8FA60030 */  lw    $a2, 0x30($sp)
/* 00421200 0320F809 */  jalr  $t9
/* 00421204 24070001 */   li    $a3, 1
/* 00421208 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042120C 8FAF0038 */  lw    $t7, 0x38($sp)
.L00421210:
/* 00421210 15E00002 */  bnez  $t7, .L0042121C
/* 00421214 00000000 */   nop   
/* 00421218 AFA00044 */  sw    $zero, 0x44($sp)
.L0042121C:
/* 0042121C 8F988A88 */  lw     $t8, %got(init_dynmem)($gp)
/* 00421220 8FB90038 */  lw    $t9, 0x38($sp)
/* 00421224 93180000 */  lbu   $t8, ($t8)
/* 00421228 53000021 */  beql  $t8, $zero, .L004212B0
/* 0042122C 8FA80038 */   lw    $t0, 0x38($sp)
/* 00421230 5320001F */  beql  $t9, $zero, .L004212B0
/* 00421234 8FA80038 */   lw    $t0, 0x38($sp)
/* 00421238 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042123C 00002025 */  move  $a0, $zero
/* 00421240 24050001 */  li    $a1, 1
/* 00421244 0320F809 */  jalr  $t9
/* 00421248 00000000 */   nop   
/* 0042124C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00421250 A3A2002B */  sb    $v0, 0x2b($sp)
/* 00421254 00002025 */  move  $a0, $zero
/* 00421258 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0042125C 24050001 */  li    $a1, 1
/* 00421260 0320F809 */  jalr  $t9
/* 00421264 00000000 */   nop   
/* 00421268 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042126C 3C06FFFA */  lui   $a2, 0xfffa
/* 00421270 A3A2002A */  sb    $v0, 0x2a($sp)
/* 00421274 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00421278 34C65A5A */  ori   $a2, $a2, 0x5a5a
/* 0042127C 24040029 */  li    $a0, 41
/* 00421280 93A5002B */  lbu   $a1, 0x2b($sp)
/* 00421284 0320F809 */  jalr  $t9
/* 00421288 00003825 */   move  $a3, $zero
/* 0042128C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00421290 24040031 */  li    $a0, 49
/* 00421294 93A5002A */  lbu   $a1, 0x2a($sp)
/* 00421298 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042129C 2406001D */  li    $a2, 29
/* 004212A0 0320F809 */  jalr  $t9
/* 004212A4 00000000 */   nop   
/* 004212A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004212AC 8FA80038 */  lw    $t0, 0x38($sp)
.L004212B0:
/* 004212B0 1100001F */  beqz  $t0, .L00421330
/* 004212B4 00000000 */   nop   
/* 004212B8 8F898A74 */  lw     $t1, %got(reversed_stack)($gp)
/* 004212BC 24040056 */  li    $a0, 86
/* 004212C0 91290000 */  lbu   $t1, ($t1)
/* 004212C4 11200014 */  beqz  $t1, .L00421318
/* 004212C8 00000000 */   nop   
/* 004212CC 8F858A60 */  lw     $a1, %got(frame_pointer)($gp)
/* 004212D0 2401001D */  li    $at, 29
/* 004212D4 90A50000 */  lbu   $a1, ($a1)
/* 004212D8 10A10007 */  beq   $a1, $at, .L004212F8
/* 004212DC 00000000 */   nop   
/* 004212E0 8F998260 */  lw    $t9, %call16(demit_rr)($gp)
/* 004212E4 24040031 */  li    $a0, 49
/* 004212E8 2406001D */  li    $a2, 29
/* 004212EC 0320F809 */  jalr  $t9
/* 004212F0 00000000 */   nop   
/* 004212F4 8FBC0020 */  lw    $gp, 0x20($sp)
.L004212F8:
/* 004212F8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 004212FC 24040002 */  li    $a0, 2
/* 00421300 2405001D */  li    $a1, 29
/* 00421304 8FA60038 */  lw    $a2, 0x38($sp)
/* 00421308 0320F809 */  jalr  $t9
/* 0042130C 00003825 */   move  $a3, $zero
/* 00421310 10000007 */  b     .L00421330
/* 00421314 8FBC0020 */   lw    $gp, 0x20($sp)
.L00421318:
/* 00421318 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0042131C 2405001D */  li    $a1, 29
/* 00421320 8FA60038 */  lw    $a2, 0x38($sp)
/* 00421324 0320F809 */  jalr  $t9
/* 00421328 00003825 */   move  $a3, $zero
/* 0042132C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00421330:
/* 00421330 8F8A8A88 */  lw     $t2, %got(init_dynmem)($gp)
/* 00421334 8FAB0038 */  lw    $t3, 0x38($sp)
/* 00421338 914A0000 */  lbu   $t2, ($t2)
/* 0042133C 11400052 */  beqz  $t2, .L00421488
/* 00421340 00000000 */   nop   
/* 00421344 11600050 */  beqz  $t3, .L00421488
/* 00421348 00000000 */   nop   
/* 0042134C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 00421350 0320F809 */  jalr  $t9
/* 00421354 00000000 */   nop   
/* 00421358 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042135C AFA2002C */  sw    $v0, 0x2c($sp)
/* 00421360 00402025 */  move  $a0, $v0
/* 00421364 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00421368 0320F809 */  jalr  $t9
/* 0042136C 00000000 */   nop   
/* 00421370 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00421374 93A5002B */  lbu   $a1, 0x2b($sp)
/* 00421378 00003025 */  move  $a2, $zero
/* 0042137C 8F8C8A74 */  lw     $t4, %got(reversed_stack)($gp)
/* 00421380 24040056 */  li    $a0, 86
/* 00421384 918C0000 */  lbu   $t4, ($t4)
/* 00421388 11800018 */  beqz  $t4, .L004213EC
/* 0042138C 00000000 */   nop   
/* 00421390 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00421394 24040057 */  li    $a0, 87
/* 00421398 93A7002A */  lbu   $a3, 0x2a($sp)
/* 0042139C 0320F809 */  jalr  $t9
/* 004213A0 AFA00010 */   sw    $zero, 0x10($sp)
/* 004213A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004213A8 24040057 */  li    $a0, 87
/* 004213AC 93A5002B */  lbu   $a1, 0x2b($sp)
/* 004213B0 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004213B4 24060004 */  li    $a2, 4
/* 004213B8 93A7002A */  lbu   $a3, 0x2a($sp)
/* 004213BC 0320F809 */  jalr  $t9
/* 004213C0 AFA00010 */   sw    $zero, 0x10($sp)
/* 004213C4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004213C8 24040002 */  li    $a0, 2
/* 004213CC 93A5002A */  lbu   $a1, 0x2a($sp)
/* 004213D0 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 004213D4 24060008 */  li    $a2, 8
/* 004213D8 00003825 */  move  $a3, $zero
/* 004213DC 0320F809 */  jalr  $t9
/* 004213E0 00000000 */   nop   
/* 004213E4 10000017 */  b     .L00421444
/* 004213E8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004213EC:
/* 004213EC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 004213F0 93A5002A */  lbu   $a1, 0x2a($sp)
/* 004213F4 24060008 */  li    $a2, 8
/* 004213F8 0320F809 */  jalr  $t9
/* 004213FC 00003825 */   move  $a3, $zero
/* 00421400 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00421404 24040057 */  li    $a0, 87
/* 00421408 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0042140C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00421410 00003025 */  move  $a2, $zero
/* 00421414 93A7002A */  lbu   $a3, 0x2a($sp)
/* 00421418 0320F809 */  jalr  $t9
/* 0042141C AFA00010 */   sw    $zero, 0x10($sp)
/* 00421420 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00421424 24040057 */  li    $a0, 87
/* 00421428 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0042142C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00421430 24060004 */  li    $a2, 4
/* 00421434 93A7002A */  lbu   $a3, 0x2a($sp)
/* 00421438 0320F809 */  jalr  $t9
/* 0042143C AFA00010 */   sw    $zero, 0x10($sp)
/* 00421440 8FBC0020 */  lw    $gp, 0x20($sp)
.L00421444:
/* 00421444 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 00421448 2404001A */  li    $a0, 26
/* 0042144C 93A5002A */  lbu   $a1, 0x2a($sp)
/* 00421450 2406001D */  li    $a2, 29
/* 00421454 0320F809 */  jalr  $t9
/* 00421458 8FA7002C */   lw    $a3, 0x2c($sp)
/* 0042145C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00421460 93A4002B */  lbu   $a0, 0x2b($sp)
/* 00421464 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 00421468 0320F809 */  jalr  $t9
/* 0042146C 00000000 */   nop   
/* 00421470 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00421474 93A4002A */  lbu   $a0, 0x2a($sp)
/* 00421478 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0042147C 0320F809 */  jalr  $t9
/* 00421480 00000000 */   nop   
/* 00421484 8FBC0020 */  lw    $gp, 0x20($sp)
.L00421488:
/* 00421488 8F9982F4 */  lw    $t9, %call16(gen_reg_save)($gp)
/* 0042148C 8FA40038 */  lw    $a0, 0x38($sp)
/* 00421490 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00421494 8FA60044 */  lw    $a2, 0x44($sp)
/* 00421498 0320F809 */  jalr  $t9
/* 0042149C 8FA70040 */   lw    $a3, 0x40($sp)
/* 004214A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004214A4 2404006D */  li    $a0, 109
/* 004214A8 24050004 */  li    $a1, 4
/* 004214AC 8F8D8A70 */  lw     $t5, %got(home_vararg_reg)($gp)
/* 004214B0 91AD0000 */  lbu   $t5, ($t5)
/* 004214B4 51A00011 */  beql  $t5, $zero, .L004214FC
/* 004214B8 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004214BC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004214C0 8FA60038 */  lw    $a2, 0x38($sp)
/* 004214C4 2407001D */  li    $a3, 29
/* 004214C8 0320F809 */  jalr  $t9
/* 004214CC AFA00010 */   sw    $zero, 0x10($sp)
/* 004214D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004214D4 8FA60038 */  lw    $a2, 0x38($sp)
/* 004214D8 2404006D */  li    $a0, 109
/* 004214DC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004214E0 24050006 */  li    $a1, 6
/* 004214E4 2407001D */  li    $a3, 29
/* 004214E8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004214EC 0320F809 */  jalr  $t9
/* 004214F0 24C60008 */   addiu $a2, $a2, 8
/* 004214F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004214F8 8FBF0024 */  lw    $ra, 0x24($sp)
.L004214FC:
/* 004214FC 27BD0030 */  addiu $sp, $sp, 0x30
/* 00421500 03E00008 */  jr    $ra
/* 00421504 00000000 */   nop   
    .type gen_entry, @function
    .size gen_entry, .-gen_entry
    .end gen_entry

glabel clear_saved_regs
    .ent clear_saved_regs
    # 0042BDAC eval
/* 00421508 3C1C0FC0 */  .cpload $t9
/* 0042150C 279CE548 */  
/* 00421510 0399E021 */  
/* 00421514 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 00421518 AC200000 */  sw    $zero, ($at)
/* 0042151C 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 00421520 AC200004 */  sw    $zero, 4($at)
/* 00421524 8F818B90 */  lw     $at, %got(saved_regs)($gp)
/* 00421528 03E00008 */  jr    $ra
/* 0042152C AC200008 */   sw    $zero, 8($at)
    .type clear_saved_regs, @function
    .size clear_saved_regs, .-clear_saved_regs
    .end clear_saved_regs

glabel is_empty_saved_regs
    .ent is_empty_saved_regs
    # 0042BDAC eval
/* 00421530 3C1C0FC0 */  .cpload $t9
/* 00421534 279CE520 */  
/* 00421538 0399E021 */  
/* 0042153C 8F8E8B90 */  lw     $t6, %got(saved_regs)($gp)
/* 00421540 8F8F8B90 */  lw     $t7, %got(saved_regs)($gp)
/* 00421544 8F998B90 */  lw     $t9, %got(saved_regs)($gp)
/* 00421548 8DCE0008 */  lw    $t6, 8($t6)
/* 0042154C 8DEF0004 */  lw    $t7, 4($t7)
/* 00421550 8F390000 */  lw    $t9, ($t9)
/* 00421554 01CFC025 */  or    $t8, $t6, $t7
/* 00421558 03191025 */  or    $v0, $t8, $t9
/* 0042155C 03E00008 */  jr    $ra
/* 00421560 2C420001 */   sltiu $v0, $v0, 1
    .type is_empty_saved_regs, @function
    .size is_empty_saved_regs, .-is_empty_saved_regs
    .end is_empty_saved_regs

glabel home_parameters
    .ent home_parameters
    # 004219E8 gen_reg_save_restore
/* 00421564 3C1C0FC0 */  .cpload $t9
/* 00421568 279CE4EC */  
/* 0042156C 0399E021 */  
/* 00421570 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 00421574 8F8289FC */  lw     $v0, %got(n_parm_regs)($gp)
/* 00421578 AFB60034 */  sw    $s6, 0x34($sp)
/* 0042157C AFB4002C */  sw    $s4, 0x2c($sp)
/* 00421580 8C420000 */  lw    $v0, ($v0)
/* 00421584 AFB20024 */  sw    $s2, 0x24($sp)
/* 00421588 0080B025 */  move  $s6, $a0
/* 0042158C AFBF0044 */  sw    $ra, 0x44($sp)
/* 00421590 AFBE0040 */  sw    $fp, 0x40($sp)
/* 00421594 AFBC003C */  sw    $gp, 0x3c($sp)
/* 00421598 AFB70038 */  sw    $s7, 0x38($sp)
/* 0042159C AFB50030 */  sw    $s5, 0x30($sp)
/* 004215A0 AFB30028 */  sw    $s3, 0x28($sp)
/* 004215A4 AFB10020 */  sw    $s1, 0x20($sp)
/* 004215A8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004215AC AFA5004C */  sw    $a1, 0x4c($sp)
/* 004215B0 24120004 */  li    $s2, 4
/* 004215B4 1040005D */  beqz  $v0, .L0042172C
/* 004215B8 0000A025 */   move  $s4, $zero
/* 004215BC 8F9E8A74 */  lw     $fp, %got(reversed_stack)($gp)
/* 004215C0 8F958B90 */  lw     $s5, %got(saved_regs)($gp)
/* 004215C4 8F9389DC */  lw     $s3, %got(basicint)($gp)
/* 004215C8 8F918A70 */  lw     $s1, %got(home_vararg_reg)($gp)
.L004215CC:
/* 004215CC 926E0000 */  lbu   $t6, ($s3)
/* 004215D0 2E4F0060 */  sltiu $t7, $s2, 0x60
/* 004215D4 55C00029 */  bnel  $t6, $zero, .L0042167C
/* 004215D8 2E590060 */   sltiu $t9, $s2, 0x60
/* 004215DC 11E00006 */  beqz  $t7, .L004215F8
/* 004215E0 0012C143 */   sra   $t8, $s2, 5
/* 004215E4 0018C880 */  sll   $t9, $t8, 2
/* 004215E8 02B94021 */  addu  $t0, $s5, $t9
/* 004215EC 8D090000 */  lw    $t1, ($t0)
/* 004215F0 02495004 */  sllv  $t2, $t1, $s2
/* 004215F4 294F0000 */  slti  $t7, $t2, 0
.L004215F8:
/* 004215F8 55E00005 */  bnel  $t7, $zero, .L00421610
/* 004215FC 93CE0000 */   lbu   $t6, ($fp)
/* 00421600 922C0000 */  lbu   $t4, ($s1)
/* 00421604 51800045 */  beql  $t4, $zero, .L0042171C
/* 00421608 26940001 */   addiu $s4, $s4, 1
/* 0042160C 93CE0000 */  lbu   $t6, ($fp)
.L00421610:
/* 00421610 00146880 */  sll   $t5, $s4, 2
/* 00421614 02CD8021 */  addu  $s0, $s6, $t5
/* 00421618 11C0000D */  beqz  $t6, .L00421650
/* 0042161C 24040057 */   li    $a0, 87
/* 00421620 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421624 2418FFFC */  li    $t8, -4
/* 00421628 03103023 */  subu  $a2, $t8, $s0
/* 0042162C 24040057 */  li    $a0, 87
/* 00421630 02402825 */  move  $a1, $s2
/* 00421634 2407001D */  li    $a3, 29
/* 00421638 0320F809 */  jalr  $t9
/* 0042163C AFA00010 */   sw    $zero, 0x10($sp)
/* 00421640 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00421644 8F8289FC */  lw     $v0, %got(n_parm_regs)($gp)
/* 00421648 10000033 */  b     .L00421718
/* 0042164C 8C420000 */   lw    $v0, ($v0)
.L00421650:
/* 00421650 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421654 02402825 */  move  $a1, $s2
/* 00421658 02003025 */  move  $a2, $s0
/* 0042165C 2407001D */  li    $a3, 29
/* 00421660 0320F809 */  jalr  $t9
/* 00421664 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421668 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0042166C 8F8289FC */  lw     $v0, %got(n_parm_regs)($gp)
/* 00421670 10000029 */  b     .L00421718
/* 00421674 8C420000 */   lw    $v0, ($v0)
/* 00421678 2E590060 */  sltiu $t9, $s2, 0x60
.L0042167C:
/* 0042167C 13200006 */  beqz  $t9, .L00421698
/* 00421680 00124143 */   sra   $t0, $s2, 5
/* 00421684 00084880 */  sll   $t1, $t0, 2
/* 00421688 02A95021 */  addu  $t2, $s5, $t1
/* 0042168C 8D4B0000 */  lw    $t3, ($t2)
/* 00421690 024B7804 */  sllv  $t7, $t3, $s2
/* 00421694 29F90000 */  slti  $t9, $t7, 0
.L00421698:
/* 00421698 57200005 */  bnel  $t9, $zero, .L004216B0
/* 0042169C 93CE0000 */   lbu   $t6, ($fp)
/* 004216A0 922D0000 */  lbu   $t5, ($s1)
/* 004216A4 51A0001D */  beql  $t5, $zero, .L0042171C
/* 004216A8 26940001 */   addiu $s4, $s4, 1
/* 004216AC 93CE0000 */  lbu   $t6, ($fp)
.L004216B0:
/* 004216B0 2404006D */  li    $a0, 109
/* 004216B4 02402825 */  move  $a1, $s2
/* 004216B8 11C0000F */  beqz  $t6, .L004216F8
/* 004216BC 00145080 */   sll   $t2, $s4, 2
/* 004216C0 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 004216C4 0014C0C0 */  sll   $t8, $s4, 3
/* 004216C8 02D84021 */  addu  $t0, $s6, $t8
/* 004216CC 2409FFF8 */  li    $t1, -8
/* 004216D0 01283023 */  subu  $a2, $t1, $t0
/* 004216D4 2404006D */  li    $a0, 109
/* 004216D8 02402825 */  move  $a1, $s2
/* 004216DC 2407001D */  li    $a3, 29
/* 004216E0 0320F809 */  jalr  $t9
/* 004216E4 AFA00010 */   sw    $zero, 0x10($sp)
/* 004216E8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004216EC 8F8289FC */  lw     $v0, %got(n_parm_regs)($gp)
/* 004216F0 10000009 */  b     .L00421718
/* 004216F4 8C420000 */   lw    $v0, ($v0)
.L004216F8:
/* 004216F8 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 004216FC 02CA3021 */  addu  $a2, $s6, $t2
/* 00421700 2407001D */  li    $a3, 29
/* 00421704 0320F809 */  jalr  $t9
/* 00421708 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042170C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00421710 8F8289FC */  lw     $v0, %got(n_parm_regs)($gp)
/* 00421714 8C420000 */  lw    $v0, ($v0)
.L00421718:
/* 00421718 26940001 */  addiu $s4, $s4, 1
.L0042171C:
/* 0042171C 26520001 */  addiu $s2, $s2, 1
/* 00421720 1682FFAA */  bne   $s4, $v0, .L004215CC
/* 00421724 325200FF */   andi  $s2, $s2, 0xff
/* 00421728 0000A025 */  move  $s4, $zero
.L0042172C:
/* 0042172C 8F828A00 */  lw     $v0, %got(n_fp_parm_regs)($gp)
/* 00421730 8F958B90 */  lw     $s5, %got(saved_regs)($gp)
/* 00421734 8F9E8A74 */  lw     $fp, %got(reversed_stack)($gp)
/* 00421738 8C420000 */  lw    $v0, ($v0)
/* 0042173C 2412002C */  li    $s2, 44
/* 00421740 00008025 */  move  $s0, $zero
/* 00421744 10400057 */  beqz  $v0, .L004218A4
/* 00421748 2403003E */   li    $v1, 62
/* 0042174C 2417007A */  li    $s7, 122
.L00421750:
/* 00421750 2E4B0060 */  sltiu $t3, $s2, 0x60
/* 00421754 11600007 */  beqz  $t3, .L00421774
/* 00421758 24130079 */   li    $s3, 121
/* 0042175C 00127943 */  sra   $t7, $s2, 5
/* 00421760 000F6080 */  sll   $t4, $t7, 2
/* 00421764 02ACC821 */  addu  $t9, $s5, $t4
/* 00421768 8F2D0000 */  lw    $t5, ($t9)
/* 0042176C 024D7004 */  sllv  $t6, $t5, $s2
/* 00421770 29CB0000 */  slti  $t3, $t6, 0
.L00421774:
/* 00421774 51600043 */  beql  $t3, $zero, .L00421884
/* 00421778 26520002 */   addiu $s2, $s2, 2
/* 0042177C 93C90000 */  lbu   $t1, ($fp)
/* 00421780 26580001 */  addiu $t8, $s2, 1
/* 00421784 2F0B0060 */  sltiu $t3, $t8, 0x60
/* 00421788 11200020 */  beqz  $t1, .L0042180C
/* 0042178C 02402825 */   move  $a1, $s2
/* 00421790 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421794 02D08821 */  addu  $s1, $s6, $s0
/* 00421798 00118823 */  negu  $s1, $s1
/* 0042179C 2626FFFC */  addiu $a2, $s1, -4
/* 004217A0 24040079 */  li    $a0, 121
/* 004217A4 02402825 */  move  $a1, $s2
/* 004217A8 2407001D */  li    $a3, 29
/* 004217AC 0320F809 */  jalr  $t9
/* 004217B0 AFA00010 */   sw    $zero, 0x10($sp)
/* 004217B4 26450001 */  addiu $a1, $s2, 1
/* 004217B8 2CA80060 */  sltiu $t0, $a1, 0x60
/* 004217BC 11000007 */  beqz  $t0, .L004217DC
/* 004217C0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004217C4 00055143 */  sra   $t2, $a1, 5
/* 004217C8 000A7880 */  sll   $t7, $t2, 2
/* 004217CC 02AF6021 */  addu  $t4, $s5, $t7
/* 004217D0 8D990000 */  lw    $t9, ($t4)
/* 004217D4 00B96804 */  sllv  $t5, $t9, $a1
/* 004217D8 29A80000 */  slti  $t0, $t5, 0
.L004217DC:
/* 004217DC 11000008 */  beqz  $t0, .L00421800
/* 004217E0 24040079 */   li    $a0, 121
/* 004217E4 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 004217E8 2626FFF8 */  addiu $a2, $s1, -8
/* 004217EC 2407001D */  li    $a3, 29
/* 004217F0 0320F809 */  jalr  $t9
/* 004217F4 AFA00010 */   sw    $zero, 0x10($sp)
/* 004217F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004217FC 26100004 */  addiu $s0, $s0, 4
.L00421800:
/* 00421800 8F828A00 */  lw     $v0, %got(n_fp_parm_regs)($gp)
/* 00421804 1000001E */  b     .L00421880
/* 00421808 8C420000 */   lw    $v0, ($v0)
.L0042180C:
/* 0042180C 11600007 */  beqz  $t3, .L0042182C
/* 00421810 2407001D */   li    $a3, 29
/* 00421814 00184943 */  sra   $t1, $t8, 5
/* 00421818 00095080 */  sll   $t2, $t1, 2
/* 0042181C 02AA7821 */  addu  $t7, $s5, $t2
/* 00421820 8DEC0000 */  lw    $t4, ($t7)
/* 00421824 030CC804 */  sllv  $t9, $t4, $t8
/* 00421828 2B2B0000 */  slti  $t3, $t9, 0
.L0042182C:
/* 0042182C 11600002 */  beqz  $t3, .L00421838
/* 00421830 24010079 */   li    $at, 121
/* 00421834 32F3FFFF */  andi  $s3, $s7, 0xffff
.L00421838:
/* 00421838 16770009 */  bne   $s3, $s7, .L00421860
/* 0042183C 00000000 */   nop   
/* 00421840 14610007 */  bne   $v1, $at, .L00421860
/* 00421844 00000000 */   nop   
/* 00421848 26100007 */  addiu $s0, $s0, 7
/* 0042184C 06010002 */  bgez  $s0, .L00421858
/* 00421850 02000821 */   move  $at, $s0
/* 00421854 26010007 */  addiu $at, $s0, 7
.L00421858:
/* 00421858 000180C3 */  sra   $s0, $at, 3
/* 0042185C 001080C0 */  sll   $s0, $s0, 3
.L00421860:
/* 00421860 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421864 02602025 */  move  $a0, $s3
/* 00421868 02D03021 */  addu  $a2, $s6, $s0
/* 0042186C 0320F809 */  jalr  $t9
/* 00421870 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421874 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00421878 8F828A00 */  lw     $v0, %got(n_fp_parm_regs)($gp)
/* 0042187C 8C420000 */  lw    $v0, ($v0)
.L00421880:
/* 00421880 26520002 */  addiu $s2, $s2, 2
.L00421884:
/* 00421884 26940001 */  addiu $s4, $s4, 1
/* 00421888 16770003 */  bne   $s3, $s7, .L00421898
/* 0042188C 325200FF */   andi  $s2, $s2, 0xff
/* 00421890 10000002 */  b     .L0042189C
/* 00421894 26100008 */   addiu $s0, $s0, 8
.L00421898:
/* 00421898 26100004 */  addiu $s0, $s0, 4
.L0042189C:
/* 0042189C 1682FFAC */  bne   $s4, $v0, .L00421750
/* 004218A0 3263FFFF */   andi  $v1, $s3, 0xffff
.L004218A4:
/* 004218A4 8FAE004C */  lw    $t6, 0x4c($sp)
/* 004218A8 2401FFFF */  li    $at, -1
/* 004218AC 11C10042 */  beq   $t6, $at, .L004219B8
/* 004218B0 3C01FFFF */   lui   $at, 0xffff
/* 004218B4 01C18024 */  and   $s0, $t6, $at
/* 004218B8 00108402 */  srl   $s0, $s0, 0x10
/* 004218BC 1200003E */  beqz  $s0, .L004219B8
/* 004218C0 31C8FFFF */   andi  $t0, $t6, 0xffff
/* 004218C4 5500001F */  bnel  $t0, $zero, .L00421944
/* 004218C8 93CA0000 */   lbu   $t2, ($fp)
/* 004218CC 93C90000 */  lbu   $t1, ($fp)
/* 004218D0 02D08823 */  subu  $s1, $s6, $s0
/* 004218D4 2404007A */  li    $a0, 122
/* 004218D8 11200013 */  beqz  $t1, .L00421928
/* 004218DC 2405002C */   li    $a1, 44
/* 004218E0 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 004218E4 00118823 */  negu  $s1, $s1
/* 004218E8 2626FFFC */  addiu $a2, $s1, -4
/* 004218EC 24040079 */  li    $a0, 121
/* 004218F0 2405002C */  li    $a1, 44
/* 004218F4 2407001D */  li    $a3, 29
/* 004218F8 0320F809 */  jalr  $t9
/* 004218FC AFA00010 */   sw    $zero, 0x10($sp)
/* 00421900 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00421904 24040079 */  li    $a0, 121
/* 00421908 2405002D */  li    $a1, 45
/* 0042190C 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421910 2626FFF8 */  addiu $a2, $s1, -8
/* 00421914 2407001D */  li    $a3, 29
/* 00421918 0320F809 */  jalr  $t9
/* 0042191C AFA00010 */   sw    $zero, 0x10($sp)
/* 00421920 10000007 */  b     .L00421940
/* 00421924 8FBC003C */   lw    $gp, 0x3c($sp)
.L00421928:
/* 00421928 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 0042192C 02D03023 */  subu  $a2, $s6, $s0
/* 00421930 2407001D */  li    $a3, 29
/* 00421934 0320F809 */  jalr  $t9
/* 00421938 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042193C 8FBC003C */  lw    $gp, 0x3c($sp)
.L00421940:
/* 00421940 93CA0000 */  lbu   $t2, ($fp)
.L00421944:
/* 00421944 26020008 */  addiu $v0, $s0, 8
/* 00421948 2404007A */  li    $a0, 122
/* 0042194C 11400014 */  beqz  $t2, .L004219A0
/* 00421950 2405002E */   li    $a1, 46
/* 00421954 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421958 02C28023 */  subu  $s0, $s6, $v0
/* 0042195C 00108023 */  negu  $s0, $s0
/* 00421960 2606FFFC */  addiu $a2, $s0, -4
/* 00421964 24040079 */  li    $a0, 121
/* 00421968 2405002E */  li    $a1, 46
/* 0042196C 2407001D */  li    $a3, 29
/* 00421970 0320F809 */  jalr  $t9
/* 00421974 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421978 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0042197C 24040079 */  li    $a0, 121
/* 00421980 2405002F */  li    $a1, 47
/* 00421984 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421988 2606FFF8 */  addiu $a2, $s0, -8
/* 0042198C 2407001D */  li    $a3, 29
/* 00421990 0320F809 */  jalr  $t9
/* 00421994 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421998 10000007 */  b     .L004219B8
/* 0042199C 8FBC003C */   lw    $gp, 0x3c($sp)
.L004219A0:
/* 004219A0 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 004219A4 02C23023 */  subu  $a2, $s6, $v0
/* 004219A8 2407001D */  li    $a3, 29
/* 004219AC 0320F809 */  jalr  $t9
/* 004219B0 AFA00010 */   sw    $zero, 0x10($sp)
/* 004219B4 8FBC003C */  lw    $gp, 0x3c($sp)
.L004219B8:
/* 004219B8 8FBF0044 */  lw    $ra, 0x44($sp)
/* 004219BC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004219C0 8FB10020 */  lw    $s1, 0x20($sp)
/* 004219C4 8FB20024 */  lw    $s2, 0x24($sp)
/* 004219C8 8FB30028 */  lw    $s3, 0x28($sp)
/* 004219CC 8FB4002C */  lw    $s4, 0x2c($sp)
/* 004219D0 8FB50030 */  lw    $s5, 0x30($sp)
/* 004219D4 8FB60034 */  lw    $s6, 0x34($sp)
/* 004219D8 8FB70038 */  lw    $s7, 0x38($sp)
/* 004219DC 8FBE0040 */  lw    $fp, 0x40($sp)
/* 004219E0 03E00008 */  jr    $ra
/* 004219E4 27BD0048 */   addiu $sp, $sp, 0x48
    .type home_parameters, @function
    .size home_parameters, .-home_parameters
    .end home_parameters

glabel gen_reg_save_restore
    .ent gen_reg_save_restore
    # 00420810 gen_entry_exit
/* 004219E8 3C1C0FC0 */  .cpload $t9
/* 004219EC 279CE068 */  
/* 004219F0 0399E021 */  
/* 004219F4 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 004219F8 AFB4002C */  sw    $s4, 0x2c($sp)
/* 004219FC 8F948A74 */  lw     $s4, %got(reversed_stack)($gp)
/* 00421A00 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00421A04 AFBC0030 */  sw    $gp, 0x30($sp)
/* 00421A08 92830000 */  lbu   $v1, ($s4)
/* 00421A0C AFB30028 */  sw    $s3, 0x28($sp)
/* 00421A10 AFB20024 */  sw    $s2, 0x24($sp)
/* 00421A14 AFB10020 */  sw    $s1, 0x20($sp)
/* 00421A18 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00421A1C AFA40058 */  sw    $a0, 0x58($sp)
/* 00421A20 10600007 */  beqz  $v1, .L00421A40
/* 00421A24 AFA00048 */   sw    $zero, 0x48($sp)
/* 00421A28 00A67021 */  addu  $t6, $a1, $a2
/* 00421A2C 01C71021 */  addu  $v0, $t6, $a3
/* 00421A30 2458FFFC */  addiu $t8, $v0, -4
/* 00421A34 00828823 */  subu  $s1, $a0, $v0
/* 00421A38 10000007 */  b     .L00421A58
/* 00421A3C AFB80040 */   sw    $t8, 0x40($sp)
.L00421A40:
/* 00421A40 8FB90058 */  lw    $t9, 0x58($sp)
/* 00421A44 00A61021 */  addu  $v0, $a1, $a2
/* 00421A48 2408FFFC */  li    $t0, -4
/* 00421A4C 01024823 */  subu  $t1, $t0, $v0
/* 00421A50 AFA90040 */  sw    $t1, 0x40($sp)
/* 00421A54 03228823 */  subu  $s1, $t9, $v0
.L00421A58:
/* 00421A58 8FAA0070 */  lw    $t2, 0x70($sp)
/* 00421A5C 2401FFFF */  li    $at, -1
/* 00421A60 AFA00044 */  sw    $zero, 0x44($sp)
/* 00421A64 1141001D */  beq   $t2, $at, .L00421ADC
/* 00421A68 00000000 */   nop   
/* 00421A6C 8F8C89DC */  lw     $t4, %got(basicint)($gp)
/* 00421A70 3C0B8000 */  lui   $t3, 0x8000
/* 00421A74 AFAB0048 */  sw    $t3, 0x48($sp)
/* 00421A78 918C0000 */  lbu   $t4, ($t4)
/* 00421A7C AFAA0040 */  sw    $t2, 0x40($sp)
/* 00421A80 2404006D */  li    $a0, 109
/* 00421A84 1580000B */  bnez  $t4, .L00421AB4
/* 00421A88 2405001F */   li    $a1, 31
/* 00421A8C 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421A90 8FAD0058 */  lw    $t5, 0x58($sp)
/* 00421A94 24040057 */  li    $a0, 87
/* 00421A98 2405001F */  li    $a1, 31
/* 00421A9C 2407001D */  li    $a3, 29
/* 00421AA0 AFA00010 */  sw    $zero, 0x10($sp)
/* 00421AA4 0320F809 */  jalr  $t9
/* 00421AA8 01AA3021 */   addu  $a2, $t5, $t2
/* 00421AAC 10000009 */  b     .L00421AD4
/* 00421AB0 8FBC0030 */   lw    $gp, 0x30($sp)
.L00421AB4:
/* 00421AB4 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421AB8 8FAE0058 */  lw    $t6, 0x58($sp)
/* 00421ABC 8FAF0070 */  lw    $t7, 0x70($sp)
/* 00421AC0 2407001D */  li    $a3, 29
/* 00421AC4 AFA00010 */  sw    $zero, 0x10($sp)
/* 00421AC8 0320F809 */  jalr  $t9
/* 00421ACC 01CF3021 */   addu  $a2, $t6, $t7
/* 00421AD0 8FBC0030 */  lw    $gp, 0x30($sp)
.L00421AD4:
/* 00421AD4 10000038 */  b     .L00421BB8
/* 00421AD8 8F938B90 */   lw     $s3, %got(saved_regs)($gp)
.L00421ADC:
/* 00421ADC 8F938B90 */  lw     $s3, %got(saved_regs)($gp)
/* 00421AE0 3C088000 */  lui   $t0, 0x8000
/* 00421AE4 8E780000 */  lw    $t8, ($s3)
/* 00421AE8 0018CFC0 */  sll   $t9, $t8, 0x1f
/* 00421AEC 07230033 */  bgezl $t9, .L00421BBC
/* 00421AF0 8E6C0000 */   lw    $t4, ($s3)
/* 00421AF4 10600019 */  beqz  $v1, .L00421B5C
/* 00421AF8 AFA80048 */   sw    $t0, 0x48($sp)
/* 00421AFC 8F8989DC */  lw     $t1, %got(basicint)($gp)
/* 00421B00 2404006D */  li    $a0, 109
/* 00421B04 2405001F */  li    $a1, 31
/* 00421B08 91290000 */  lbu   $t1, ($t1)
/* 00421B0C 2407001D */  li    $a3, 29
/* 00421B10 1520000B */  bnez  $t1, .L00421B40
/* 00421B14 00000000 */   nop   
/* 00421B18 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421B1C 26310004 */  addiu $s1, $s1, 4
/* 00421B20 00113023 */  negu  $a2, $s1
/* 00421B24 24040057 */  li    $a0, 87
/* 00421B28 2405001F */  li    $a1, 31
/* 00421B2C 2407001D */  li    $a3, 29
/* 00421B30 0320F809 */  jalr  $t9
/* 00421B34 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421B38 1000001F */  b     .L00421BB8
/* 00421B3C 8FBC0030 */   lw    $gp, 0x30($sp)
.L00421B40:
/* 00421B40 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421B44 26310008 */  addiu $s1, $s1, 8
/* 00421B48 00113023 */  negu  $a2, $s1
/* 00421B4C 0320F809 */  jalr  $t9
/* 00421B50 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421B54 10000018 */  b     .L00421BB8
/* 00421B58 8FBC0030 */   lw    $gp, 0x30($sp)
.L00421B5C:
/* 00421B5C 8F8B89DC */  lw     $t3, %got(basicint)($gp)
/* 00421B60 2404006D */  li    $a0, 109
/* 00421B64 2405001F */  li    $a1, 31
/* 00421B68 916B0000 */  lbu   $t3, ($t3)
/* 00421B6C 2407001D */  li    $a3, 29
/* 00421B70 1560000B */  bnez  $t3, .L00421BA0
/* 00421B74 00000000 */   nop   
/* 00421B78 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421B7C 2631FFFC */  addiu $s1, $s1, -4
/* 00421B80 02203025 */  move  $a2, $s1
/* 00421B84 24040057 */  li    $a0, 87
/* 00421B88 2405001F */  li    $a1, 31
/* 00421B8C 2407001D */  li    $a3, 29
/* 00421B90 0320F809 */  jalr  $t9
/* 00421B94 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421B98 10000007 */  b     .L00421BB8
/* 00421B9C 8FBC0030 */   lw    $gp, 0x30($sp)
.L00421BA0:
/* 00421BA0 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421BA4 2631FFF8 */  addiu $s1, $s1, -8
/* 00421BA8 02203025 */  move  $a2, $s1
/* 00421BAC 0320F809 */  jalr  $t9
/* 00421BB0 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421BB4 8FBC0030 */  lw    $gp, 0x30($sp)
.L00421BB8:
/* 00421BB8 8E6C0000 */  lw    $t4, ($s3)
.L00421BBC:
/* 00421BBC 000C6F80 */  sll   $t5, $t4, 0x1e
/* 00421BC0 05A10037 */  bgez  $t5, .L00421CA0
/* 00421BC4 00000000 */   nop   
/* 00421BC8 928A0000 */  lbu   $t2, ($s4)
/* 00421BCC 11400019 */  beqz  $t2, .L00421C34
/* 00421BD0 00000000 */   nop   
/* 00421BD4 8F8E89DC */  lw     $t6, %got(basicint)($gp)
/* 00421BD8 2404006D */  li    $a0, 109
/* 00421BDC 2405001E */  li    $a1, 30
/* 00421BE0 91CE0000 */  lbu   $t6, ($t6)
/* 00421BE4 2407001D */  li    $a3, 29
/* 00421BE8 15C0000B */  bnez  $t6, .L00421C18
/* 00421BEC 00000000 */   nop   
/* 00421BF0 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421BF4 26310004 */  addiu $s1, $s1, 4
/* 00421BF8 00113023 */  negu  $a2, $s1
/* 00421BFC 24040057 */  li    $a0, 87
/* 00421C00 2405001E */  li    $a1, 30
/* 00421C04 2407001D */  li    $a3, 29
/* 00421C08 0320F809 */  jalr  $t9
/* 00421C0C AFA00010 */   sw    $zero, 0x10($sp)
/* 00421C10 1000001F */  b     .L00421C90
/* 00421C14 8FBC0030 */   lw    $gp, 0x30($sp)
.L00421C18:
/* 00421C18 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421C1C 26310008 */  addiu $s1, $s1, 8
/* 00421C20 00113023 */  negu  $a2, $s1
/* 00421C24 0320F809 */  jalr  $t9
/* 00421C28 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421C2C 10000018 */  b     .L00421C90
/* 00421C30 8FBC0030 */   lw    $gp, 0x30($sp)
.L00421C34:
/* 00421C34 8F8F89DC */  lw     $t7, %got(basicint)($gp)
/* 00421C38 2404006D */  li    $a0, 109
/* 00421C3C 2405001E */  li    $a1, 30
/* 00421C40 91EF0000 */  lbu   $t7, ($t7)
/* 00421C44 2407001D */  li    $a3, 29
/* 00421C48 15E0000B */  bnez  $t7, .L00421C78
/* 00421C4C 00000000 */   nop   
/* 00421C50 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421C54 2631FFFC */  addiu $s1, $s1, -4
/* 00421C58 02203025 */  move  $a2, $s1
/* 00421C5C 24040057 */  li    $a0, 87
/* 00421C60 2405001E */  li    $a1, 30
/* 00421C64 2407001D */  li    $a3, 29
/* 00421C68 0320F809 */  jalr  $t9
/* 00421C6C AFA00010 */   sw    $zero, 0x10($sp)
/* 00421C70 10000007 */  b     .L00421C90
/* 00421C74 8FBC0030 */   lw    $gp, 0x30($sp)
.L00421C78:
/* 00421C78 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421C7C 2631FFF8 */  addiu $s1, $s1, -8
/* 00421C80 02203025 */  move  $a2, $s1
/* 00421C84 0320F809 */  jalr  $t9
/* 00421C88 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421C8C 8FBC0030 */  lw    $gp, 0x30($sp)
.L00421C90:
/* 00421C90 8FB80048 */  lw    $t8, 0x48($sp)
/* 00421C94 3C014000 */  lui   $at, 0x4000
/* 00421C98 0301C825 */  or    $t9, $t8, $at
/* 00421C9C AFB90048 */  sw    $t9, 0x48($sp)
.L00421CA0:
/* 00421CA0 8F8889E4 */  lw     $t0, %got(pic_level)($gp)
/* 00421CA4 8D080000 */  lw    $t0, ($t0)
/* 00421CA8 19000049 */  blez  $t0, .L00421DD0
/* 00421CAC 00000000 */   nop   
/* 00421CB0 8E690000 */  lw    $t1, ($s3)
/* 00421CB4 00095F00 */  sll   $t3, $t1, 0x1c
/* 00421CB8 0561003C */  bgez  $t3, .L00421DAC
/* 00421CBC 00000000 */   nop   
/* 00421CC0 928C0000 */  lbu   $t4, ($s4)
/* 00421CC4 2404000F */  li    $a0, 15
/* 00421CC8 1180001B */  beqz  $t4, .L00421D38
/* 00421CCC 00000000 */   nop   
/* 00421CD0 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00421CD4 26310004 */  addiu $s1, $s1, 4
/* 00421CD8 00118023 */  negu  $s0, $s1
/* 00421CDC 0320F809 */  jalr  $t9
/* 00421CE0 02002825 */   move  $a1, $s0
/* 00421CE4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00421CE8 8F838A98 */  lw     $v1, %got(num_i_ptr_indexes)($gp)
/* 00421CEC 8C620000 */  lw    $v0, ($v1)
/* 00421CF0 5040002A */  beql  $v0, $zero, .L00421D9C
/* 00421CF4 8FAE0048 */   lw    $t6, 0x48($sp)
/* 00421CF8 8F848978 */  lw     $a0, %got(ibuffer)($gp)
/* 00421CFC 8F858BB8 */  lw     $a1, %got(i_ptrs_for_gp_offset)($gp)
/* 00421D00 8C840000 */  lw    $a0, ($a0)
/* 00421D04 24A5FFFC */  addiu $a1, $a1, -4
.L00421D08:
/* 00421D08 00026880 */  sll   $t5, $v0, 2
/* 00421D0C 00AD5021 */  addu  $t2, $a1, $t5
/* 00421D10 8D4E0000 */  lw    $t6, ($t2)
/* 00421D14 2459FFFF */  addiu $t9, $v0, -1
/* 00421D18 03201025 */  move  $v0, $t9
/* 00421D1C 000E7900 */  sll   $t7, $t6, 4
/* 00421D20 008FC021 */  addu  $t8, $a0, $t7
/* 00421D24 AF10FFFC */  sw    $s0, -4($t8)
/* 00421D28 1720FFF7 */  bnez  $t9, .L00421D08
/* 00421D2C AC790000 */   sw    $t9, ($v1)
/* 00421D30 1000001A */  b     .L00421D9C
/* 00421D34 8FAE0048 */   lw    $t6, 0x48($sp)
.L00421D38:
/* 00421D38 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00421D3C 2631FFFC */  addiu $s1, $s1, -4
/* 00421D40 02202825 */  move  $a1, $s1
/* 00421D44 0320F809 */  jalr  $t9
/* 00421D48 2404000F */   li    $a0, 15
/* 00421D4C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00421D50 8F838A98 */  lw     $v1, %got(num_i_ptr_indexes)($gp)
/* 00421D54 8C620000 */  lw    $v0, ($v1)
/* 00421D58 50400010 */  beql  $v0, $zero, .L00421D9C
/* 00421D5C 8FAE0048 */   lw    $t6, 0x48($sp)
/* 00421D60 8F848978 */  lw     $a0, %got(ibuffer)($gp)
/* 00421D64 8F858BB8 */  lw     $a1, %got(i_ptrs_for_gp_offset)($gp)
/* 00421D68 8C840000 */  lw    $a0, ($a0)
/* 00421D6C 24A5FFFC */  addiu $a1, $a1, -4
.L00421D70:
/* 00421D70 00024080 */  sll   $t0, $v0, 2
/* 00421D74 00A84821 */  addu  $t1, $a1, $t0
/* 00421D78 8D2B0000 */  lw    $t3, ($t1)
/* 00421D7C 244AFFFF */  addiu $t2, $v0, -1
/* 00421D80 01401025 */  move  $v0, $t2
/* 00421D84 000B6100 */  sll   $t4, $t3, 4
/* 00421D88 008C6821 */  addu  $t5, $a0, $t4
/* 00421D8C ADB1FFFC */  sw    $s1, -4($t5)
/* 00421D90 1540FFF7 */  bnez  $t2, .L00421D70
/* 00421D94 AC6A0000 */   sw    $t2, ($v1)
/* 00421D98 8FAE0048 */  lw    $t6, 0x48($sp)
.L00421D9C:
/* 00421D9C 3C011000 */  lui   $at, 0x1000
/* 00421DA0 01C17825 */  or    $t7, $t6, $at
/* 00421DA4 1000000A */  b     .L00421DD0
/* 00421DA8 AFAF0048 */   sw    $t7, 0x48($sp)
.L00421DAC:
/* 00421DAC 8F9889F0 */  lw     $t8, %got(use_cpalias)($gp)
/* 00421DB0 93180000 */  lbu   $t8, ($t8)
/* 00421DB4 13000006 */  beqz  $t8, .L00421DD0
/* 00421DB8 00000000 */   nop   
/* 00421DBC 8F9982B4 */  lw    $t9, %call16(demit_cpalias)($gp)
/* 00421DC0 2404001E */  li    $a0, 30
/* 00421DC4 0320F809 */  jalr  $t9
/* 00421DC8 00000000 */   nop   
/* 00421DCC 8FBC0030 */  lw    $gp, 0x30($sp)
.L00421DD0:
/* 00421DD0 8F9982EC */  lw    $t9, %call16(home_parameters)($gp)
/* 00421DD4 8FA40058 */  lw    $a0, 0x58($sp)
/* 00421DD8 8FA5006C */  lw    $a1, 0x6c($sp)
/* 00421DDC 0320F809 */  jalr  $t9
/* 00421DE0 00000000 */   nop   
/* 00421DE4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00421DE8 00009025 */  move  $s2, $zero
/* 00421DEC 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00421DF0 8C420000 */  lw    $v0, ($v0)
/* 00421DF4 2450000F */  addiu $s0, $v0, 0xf
/* 00421DF8 1040004B */  beqz  $v0, .L00421F28
/* 00421DFC 321000FF */   andi  $s0, $s0, 0xff
.L00421E00:
/* 00421E00 2E190060 */  sltiu $t9, $s0, 0x60
/* 00421E04 13200006 */  beqz  $t9, .L00421E20
/* 00421E08 00104143 */   sra   $t0, $s0, 5
/* 00421E0C 00084880 */  sll   $t1, $t0, 2
/* 00421E10 02695821 */  addu  $t3, $s3, $t1
/* 00421E14 8D6C0000 */  lw    $t4, ($t3)
/* 00421E18 020C6804 */  sllv  $t5, $t4, $s0
/* 00421E1C 29B90000 */  slti  $t9, $t5, 0
.L00421E20:
/* 00421E20 1320003C */  beqz  $t9, .L00421F14
/* 00421E24 8FAE0048 */   lw    $t6, 0x48($sp)
/* 00421E28 92890000 */  lbu   $t1, ($s4)
/* 00421E2C 240F0001 */  li    $t7, 1
/* 00421E30 020FC004 */  sllv  $t8, $t7, $s0
/* 00421E34 01D84025 */  or    $t0, $t6, $t8
/* 00421E38 1120001B */  beqz  $t1, .L00421EA8
/* 00421E3C AFA80048 */   sw    $t0, 0x48($sp)
/* 00421E40 8F8B89DC */  lw     $t3, %got(basicint)($gp)
/* 00421E44 2404006D */  li    $a0, 109
/* 00421E48 02002825 */  move  $a1, $s0
/* 00421E4C 916B0000 */  lbu   $t3, ($t3)
/* 00421E50 2407001D */  li    $a3, 29
/* 00421E54 1560000B */  bnez  $t3, .L00421E84
/* 00421E58 00000000 */   nop   
/* 00421E5C 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421E60 26310004 */  addiu $s1, $s1, 4
/* 00421E64 00113023 */  negu  $a2, $s1
/* 00421E68 24040057 */  li    $a0, 87
/* 00421E6C 02002825 */  move  $a1, $s0
/* 00421E70 2407001D */  li    $a3, 29
/* 00421E74 0320F809 */  jalr  $t9
/* 00421E78 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421E7C 10000007 */  b     .L00421E9C
/* 00421E80 8FBC0030 */   lw    $gp, 0x30($sp)
.L00421E84:
/* 00421E84 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421E88 26310008 */  addiu $s1, $s1, 8
/* 00421E8C 00113023 */  negu  $a2, $s1
/* 00421E90 0320F809 */  jalr  $t9
/* 00421E94 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421E98 8FBC0030 */  lw    $gp, 0x30($sp)
.L00421E9C:
/* 00421E9C 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00421EA0 1000001C */  b     .L00421F14
/* 00421EA4 8C420000 */   lw    $v0, ($v0)
.L00421EA8:
/* 00421EA8 8F8C89DC */  lw     $t4, %got(basicint)($gp)
/* 00421EAC 2404006D */  li    $a0, 109
/* 00421EB0 02002825 */  move  $a1, $s0
/* 00421EB4 918C0000 */  lbu   $t4, ($t4)
/* 00421EB8 2407001D */  li    $a3, 29
/* 00421EBC 1580000D */  bnez  $t4, .L00421EF4
/* 00421EC0 00000000 */   nop   
/* 00421EC4 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421EC8 2631FFFC */  addiu $s1, $s1, -4
/* 00421ECC 02203025 */  move  $a2, $s1
/* 00421ED0 24040057 */  li    $a0, 87
/* 00421ED4 02002825 */  move  $a1, $s0
/* 00421ED8 2407001D */  li    $a3, 29
/* 00421EDC 0320F809 */  jalr  $t9
/* 00421EE0 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421EE4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00421EE8 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00421EEC 10000009 */  b     .L00421F14
/* 00421EF0 8C420000 */   lw    $v0, ($v0)
.L00421EF4:
/* 00421EF4 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421EF8 2631FFF8 */  addiu $s1, $s1, -8
/* 00421EFC 02203025 */  move  $a2, $s1
/* 00421F00 0320F809 */  jalr  $t9
/* 00421F04 AFA00010 */   sw    $zero, 0x10($sp)
/* 00421F08 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00421F0C 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00421F10 8C420000 */  lw    $v0, ($v0)
.L00421F14:
/* 00421F14 26520001 */  addiu $s2, $s2, 1
/* 00421F18 2610FFFF */  addiu $s0, $s0, -1
/* 00421F1C 1642FFB8 */  bne   $s2, $v0, .L00421E00
/* 00421F20 321000FF */   andi  $s0, $s0, 0xff
/* 00421F24 00009025 */  move  $s2, $zero
.L00421F28:
/* 00421F28 8F828A08 */  lw     $v0, %got(n_saved_fp_regs)($gp)
/* 00421F2C 24030001 */  li    $v1, 1
/* 00421F30 A3A0003A */  sb    $zero, 0x3a($sp)
/* 00421F34 8C420000 */  lw    $v0, ($v0)
/* 00421F38 00028040 */  sll   $s0, $v0, 1
/* 00421F3C 26100032 */  addiu $s0, $s0, 0x32
/* 00421F40 321000FF */  andi  $s0, $s0, 0xff
/* 00421F44 06210003 */  bgez  $s1, .L00421F54
/* 00421F48 00116883 */   sra   $t5, $s1, 2
/* 00421F4C 26210003 */  addiu $at, $s1, 3
/* 00421F50 00016883 */  sra   $t5, $at, 2
.L00421F54:
/* 00421F54 31AA0001 */  andi  $t2, $t5, 1
/* 00421F58 11400003 */  beqz  $t2, .L00421F68
/* 00421F5C 24190001 */   li    $t9, 1
/* 00421F60 2631FFFC */  addiu $s1, $s1, -4
/* 00421F64 A3B9003A */  sb    $t9, 0x3a($sp)
.L00421F68:
/* 00421F68 10400039 */  beqz  $v0, .L00422050
/* 00421F6C 2E0F0060 */   sltiu $t7, $s0, 0x60
.L00421F70:
/* 00421F70 11E00006 */  beqz  $t7, .L00421F8C
/* 00421F74 00107143 */   sra   $t6, $s0, 5
/* 00421F78 000EC080 */  sll   $t8, $t6, 2
/* 00421F7C 02784021 */  addu  $t0, $s3, $t8
/* 00421F80 8D090000 */  lw    $t1, ($t0)
/* 00421F84 02095804 */  sllv  $t3, $t1, $s0
/* 00421F88 296F0000 */  slti  $t7, $t3, 0
.L00421F8C:
/* 00421F8C 11E00028 */  beqz  $t7, .L00422030
/* 00421F90 8FAD0044 */   lw    $t5, 0x44($sp)
/* 00421F94 92980000 */  lbu   $t8, ($s4)
/* 00421F98 240A0003 */  li    $t2, 3
/* 00421F9C 020AC804 */  sllv  $t9, $t2, $s0
/* 00421FA0 01B97025 */  or    $t6, $t5, $t9
/* 00421FA4 13000012 */  beqz  $t8, .L00421FF0
/* 00421FA8 AFAE0044 */   sw    $t6, 0x44($sp)
/* 00421FAC 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421FB0 26310008 */  addiu $s1, $s1, 8
/* 00421FB4 00113023 */  negu  $a2, $s1
/* 00421FB8 2404007A */  li    $a0, 122
/* 00421FBC 02002825 */  move  $a1, $s0
/* 00421FC0 2407001D */  li    $a3, 29
/* 00421FC4 AFA00010 */  sw    $zero, 0x10($sp)
/* 00421FC8 0320F809 */  jalr  $t9
/* 00421FCC A3A3003B */   sb    $v1, 0x3b($sp)
/* 00421FD0 93A3003B */  lbu   $v1, 0x3b($sp)
/* 00421FD4 8FA80058 */  lw    $t0, 0x58($sp)
/* 00421FD8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00421FDC 10600014 */  beqz  $v1, .L00422030
/* 00421FE0 01114823 */   subu  $t1, $t0, $s1
/* 00421FE4 AFA9003C */  sw    $t1, 0x3c($sp)
/* 00421FE8 10000011 */  b     .L00422030
/* 00421FEC 00001825 */   move  $v1, $zero
.L00421FF0:
/* 00421FF0 8F998258 */  lw    $t9, %call16(demit_rob_)($gp)
/* 00421FF4 2631FFF8 */  addiu $s1, $s1, -8
/* 00421FF8 02203025 */  move  $a2, $s1
/* 00421FFC 2404007A */  li    $a0, 122
/* 00422000 02002825 */  move  $a1, $s0
/* 00422004 2407001D */  li    $a3, 29
/* 00422008 AFA00010 */  sw    $zero, 0x10($sp)
/* 0042200C 0320F809 */  jalr  $t9
/* 00422010 A3A3003B */   sb    $v1, 0x3b($sp)
/* 00422014 93A3003B */  lbu   $v1, 0x3b($sp)
/* 00422018 8FAB0058 */  lw    $t3, 0x58($sp)
/* 0042201C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422020 10600003 */  beqz  $v1, .L00422030
/* 00422024 022B6023 */   subu  $t4, $s1, $t3
/* 00422028 AFAC003C */  sw    $t4, 0x3c($sp)
/* 0042202C 00001825 */  move  $v1, $zero
.L00422030:
/* 00422030 8F8F8A08 */  lw     $t7, %got(n_saved_fp_regs)($gp)
/* 00422034 26520001 */  addiu $s2, $s2, 1
/* 00422038 2610FFFE */  addiu $s0, $s0, -2
/* 0042203C 8DEF0000 */  lw    $t7, ($t7)
/* 00422040 321000FF */  andi  $s0, $s0, 0xff
/* 00422044 564FFFCA */  bnel  $s2, $t7, .L00421F70
/* 00422048 2E0F0060 */   sltiu $t7, $s0, 0x60
/* 0042204C 00009025 */  move  $s2, $zero
.L00422050:
/* 00422050 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00422054 2401001D */  li    $at, 29
/* 00422058 90E70000 */  lbu   $a3, ($a3)
/* 0042205C 10E10014 */  beq   $a3, $at, .L004220B0
/* 00422060 00000000 */   nop   
/* 00422064 928A0000 */  lbu   $t2, ($s4)
/* 00422068 55400008 */  bnel  $t2, $zero, .L0042208C
/* 0042206C 93AD006B */   lbu   $t5, 0x6b($sp)
/* 00422070 8F998260 */  lw    $t9, %call16(demit_rr)($gp)
/* 00422074 24040031 */  li    $a0, 49
/* 00422078 00E02825 */  move  $a1, $a3
/* 0042207C 0320F809 */  jalr  $t9
/* 00422080 2406001D */   li    $a2, 29
/* 00422084 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422088 93AD006B */  lbu   $t5, 0x6b($sp)
.L0042208C:
/* 0042208C 24040031 */  li    $a0, 49
/* 00422090 15A00007 */  bnez  $t5, .L004220B0
/* 00422094 00000000 */   nop   
/* 00422098 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042209C 8F868A60 */  lw     $a2, %got(frame_pointer)($gp)
/* 004220A0 2405001D */  li    $a1, 29
/* 004220A4 0320F809 */  jalr  $t9
/* 004220A8 90C60000 */   lbu   $a2, ($a2)
/* 004220AC 8FBC0030 */  lw    $gp, 0x30($sp)
.L004220B0:
/* 004220B0 8F828A08 */  lw     $v0, %got(n_saved_fp_regs)($gp)
/* 004220B4 24100034 */  li    $s0, 52
/* 004220B8 8C420000 */  lw    $v0, ($v0)
/* 004220BC 10400028 */  beqz  $v0, .L00422160
.L004220C0:
/* 004220C0 2E190060 */   sltiu $t9, $s0, 0x60
/* 004220C4 13200006 */  beqz  $t9, .L004220E0
/* 004220C8 00107143 */   sra   $t6, $s0, 5
/* 004220CC 000EC080 */  sll   $t8, $t6, 2
/* 004220D0 02784021 */  addu  $t0, $s3, $t8
/* 004220D4 8D090000 */  lw    $t1, ($t0)
/* 004220D8 02095804 */  sllv  $t3, $t1, $s0
/* 004220DC 29790000 */  slti  $t9, $t3, 0
.L004220E0:
/* 004220E0 5320001B */  beql  $t9, $zero, .L00422150
/* 004220E4 26520001 */   addiu $s2, $s2, 1
/* 004220E8 928F0000 */  lbu   $t7, ($s4)
/* 004220EC 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004220F0 24040077 */  li    $a0, 119
/* 004220F4 11E0000C */  beqz  $t7, .L00422128
/* 004220F8 90E70000 */   lbu   $a3, ($a3)
/* 004220FC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422100 24040077 */  li    $a0, 119
/* 00422104 02002825 */  move  $a1, $s0
/* 00422108 00113023 */  negu  $a2, $s1
/* 0042210C 0320F809 */  jalr  $t9
/* 00422110 AFA00010 */   sw    $zero, 0x10($sp)
/* 00422114 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422118 2631FFF8 */  addiu $s1, $s1, -8
/* 0042211C 8F828A08 */  lw     $v0, %got(n_saved_fp_regs)($gp)
/* 00422120 1000000A */  b     .L0042214C
/* 00422124 8C420000 */   lw    $v0, ($v0)
.L00422128:
/* 00422128 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042212C 02002825 */  move  $a1, $s0
/* 00422130 02203025 */  move  $a2, $s1
/* 00422134 0320F809 */  jalr  $t9
/* 00422138 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042213C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422140 26310008 */  addiu $s1, $s1, 8
/* 00422144 8F828A08 */  lw     $v0, %got(n_saved_fp_regs)($gp)
/* 00422148 8C420000 */  lw    $v0, ($v0)
.L0042214C:
/* 0042214C 26520001 */  addiu $s2, $s2, 1
.L00422150:
/* 00422150 26100002 */  addiu $s0, $s0, 2
/* 00422154 1642FFDA */  bne   $s2, $v0, .L004220C0
/* 00422158 321000FF */   andi  $s0, $s0, 0xff
/* 0042215C 00009025 */  move  $s2, $zero
.L00422160:
/* 00422160 93AA003A */  lbu   $t2, 0x3a($sp)
/* 00422164 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00422168 11400002 */  beqz  $t2, .L00422174
/* 0042216C 8C420000 */   lw    $v0, ($v0)
/* 00422170 26310004 */  addiu $s1, $s1, 4
.L00422174:
/* 00422174 10400050 */  beqz  $v0, .L004222B8
/* 00422178 24100010 */   li    $s0, 16
.L0042217C:
/* 0042217C 8F8D89DC */  lw     $t5, %got(basicint)($gp)
/* 00422180 2E0E0060 */  sltiu $t6, $s0, 0x60
/* 00422184 2E0A0060 */  sltiu $t2, $s0, 0x60
/* 00422188 91AD0000 */  lbu   $t5, ($t5)
/* 0042218C 15A00024 */  bnez  $t5, .L00422220
/* 00422190 00000000 */   nop   
/* 00422194 11C00006 */  beqz  $t6, .L004221B0
/* 00422198 0010C143 */   sra   $t8, $s0, 5
/* 0042219C 00184080 */  sll   $t0, $t8, 2
/* 004221A0 02684821 */  addu  $t1, $s3, $t0
/* 004221A4 8D2B0000 */  lw    $t3, ($t1)
/* 004221A8 020B6004 */  sllv  $t4, $t3, $s0
/* 004221AC 298E0000 */  slti  $t6, $t4, 0
.L004221B0:
/* 004221B0 51C0003E */  beql  $t6, $zero, .L004222AC
/* 004221B4 26520001 */   addiu $s2, $s2, 1
/* 004221B8 928F0000 */  lbu   $t7, ($s4)
/* 004221BC 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004221C0 2404002A */  li    $a0, 42
/* 004221C4 11E0000C */  beqz  $t7, .L004221F8
/* 004221C8 90E70000 */   lbu   $a3, ($a3)
/* 004221CC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004221D0 2404002A */  li    $a0, 42
/* 004221D4 02002825 */  move  $a1, $s0
/* 004221D8 00113023 */  negu  $a2, $s1
/* 004221DC 0320F809 */  jalr  $t9
/* 004221E0 AFA00010 */   sw    $zero, 0x10($sp)
/* 004221E4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004221E8 2631FFFC */  addiu $s1, $s1, -4
/* 004221EC 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 004221F0 1000002D */  b     .L004222A8
/* 004221F4 8C420000 */   lw    $v0, ($v0)
.L004221F8:
/* 004221F8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004221FC 02002825 */  move  $a1, $s0
/* 00422200 02203025 */  move  $a2, $s1
/* 00422204 0320F809 */  jalr  $t9
/* 00422208 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042220C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422210 26310004 */  addiu $s1, $s1, 4
/* 00422214 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00422218 10000023 */  b     .L004222A8
/* 0042221C 8C420000 */   lw    $v0, ($v0)
.L00422220:
/* 00422220 11400006 */  beqz  $t2, .L0042223C
/* 00422224 00106943 */   sra   $t5, $s0, 5
/* 00422228 000DC080 */  sll   $t8, $t5, 2
/* 0042222C 02784021 */  addu  $t0, $s3, $t8
/* 00422230 8D090000 */  lw    $t1, ($t0)
/* 00422234 02095804 */  sllv  $t3, $t1, $s0
/* 00422238 296A0000 */  slti  $t2, $t3, 0
.L0042223C:
/* 0042223C 5140001B */  beql  $t2, $zero, .L004222AC
/* 00422240 26520001 */   addiu $s2, $s2, 1
/* 00422244 92990000 */  lbu   $t9, ($s4)
/* 00422248 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 0042224C 2404006C */  li    $a0, 108
/* 00422250 1320000C */  beqz  $t9, .L00422284
/* 00422254 90E70000 */   lbu   $a3, ($a3)
/* 00422258 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042225C 2404006C */  li    $a0, 108
/* 00422260 02002825 */  move  $a1, $s0
/* 00422264 00113023 */  negu  $a2, $s1
/* 00422268 0320F809 */  jalr  $t9
/* 0042226C AFA00010 */   sw    $zero, 0x10($sp)
/* 00422270 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422274 2631FFF8 */  addiu $s1, $s1, -8
/* 00422278 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 0042227C 1000000A */  b     .L004222A8
/* 00422280 8C420000 */   lw    $v0, ($v0)
.L00422284:
/* 00422284 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422288 02002825 */  move  $a1, $s0
/* 0042228C 02203025 */  move  $a2, $s1
/* 00422290 0320F809 */  jalr  $t9
/* 00422294 AFA00010 */   sw    $zero, 0x10($sp)
/* 00422298 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0042229C 26310008 */  addiu $s1, $s1, 8
/* 004222A0 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 004222A4 8C420000 */  lw    $v0, ($v0)
.L004222A8:
/* 004222A8 26520001 */  addiu $s2, $s2, 1
.L004222AC:
/* 004222AC 26100001 */  addiu $s0, $s0, 1
/* 004222B0 1642FFB2 */  bne   $s2, $v0, .L0042217C
/* 004222B4 321000FF */   andi  $s0, $s0, 0xff
.L004222B8:
/* 004222B8 8F8E89E4 */  lw     $t6, %got(pic_level)($gp)
/* 004222BC 8FA80070 */  lw    $t0, 0x70($sp)
/* 004222C0 2401FFFF */  li    $at, -1
/* 004222C4 8DCE0000 */  lw    $t6, ($t6)
/* 004222C8 8FA90048 */  lw    $t1, 0x48($sp)
/* 004222CC 19C0000B */  blez  $t6, .L004222FC
/* 004222D0 00000000 */   nop   
/* 004222D4 8E6F0000 */  lw    $t7, ($s3)
/* 004222D8 000F6F00 */  sll   $t5, $t7, 0x1c
/* 004222DC 05A10007 */  bgez  $t5, .L004222FC
/* 004222E0 00000000 */   nop   
/* 004222E4 92980000 */  lbu   $t8, ($s4)
/* 004222E8 53000004 */  beql  $t8, $zero, .L004222FC
/* 004222EC 26310004 */   addiu $s1, $s1, 4
/* 004222F0 10000002 */  b     .L004222FC
/* 004222F4 2631FFFC */   addiu $s1, $s1, -4
/* 004222F8 26310004 */  addiu $s1, $s1, 4
.L004222FC:
/* 004222FC 51010051 */  beql  $t0, $at, .L00422444
/* 00422300 92890000 */   lbu   $t1, ($s4)
/* 00422304 8F8A89DC */  lw     $t2, %got(basicint)($gp)
/* 00422308 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0042230C 3C018000 */  lui   $at, 0x8000
/* 00422310 914A0000 */  lbu   $t2, ($t2)
/* 00422314 01215825 */  or    $t3, $t1, $at
/* 00422318 AFAB0048 */  sw    $t3, 0x48($sp)
/* 0042231C 15400009 */  bnez  $t2, .L00422344
/* 00422320 01883021 */   addu  $a2, $t4, $t0
/* 00422324 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422328 2404002A */  li    $a0, 42
/* 0042232C 2405001F */  li    $a1, 31
/* 00422330 2407001D */  li    $a3, 29
/* 00422334 0320F809 */  jalr  $t9
/* 00422338 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042233C 10000008 */  b     .L00422360
/* 00422340 8FBC0030 */   lw    $gp, 0x30($sp)
.L00422344:
/* 00422344 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422348 2404006C */  li    $a0, 108
/* 0042234C 2405001F */  li    $a1, 31
/* 00422350 2407001D */  li    $a3, 29
/* 00422354 0320F809 */  jalr  $t9
/* 00422358 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042235C 8FBC0030 */  lw    $gp, 0x30($sp)
.L00422360:
/* 00422360 8E790000 */  lw    $t9, ($s3)
/* 00422364 00197780 */  sll   $t6, $t9, 0x1e
/* 00422368 05C100E9 */  bgez  $t6, .L00422710
/* 0042236C 00000000 */   nop   
/* 00422370 928F0000 */  lbu   $t7, ($s4)
/* 00422374 11E0001A */  beqz  $t7, .L004223E0
/* 00422378 00000000 */   nop   
/* 0042237C 8F8D89DC */  lw     $t5, %got(basicint)($gp)
/* 00422380 00118023 */  negu  $s0, $s1
/* 00422384 02003025 */  move  $a2, $s0
/* 00422388 91AD0000 */  lbu   $t5, ($t5)
/* 0042238C 2404006C */  li    $a0, 108
/* 00422390 2405001E */  li    $a1, 30
/* 00422394 15A0000B */  bnez  $t5, .L004223C4
/* 00422398 00000000 */   nop   
/* 0042239C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004223A0 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004223A4 2404002A */  li    $a0, 42
/* 004223A8 2405001E */  li    $a1, 30
/* 004223AC 02003025 */  move  $a2, $s0
/* 004223B0 AFA00010 */  sw    $zero, 0x10($sp)
/* 004223B4 0320F809 */  jalr  $t9
/* 004223B8 90E70000 */   lbu   $a3, ($a3)
/* 004223BC 100000D4 */  b     .L00422710
/* 004223C0 8FBC0030 */   lw    $gp, 0x30($sp)
.L004223C4:
/* 004223C4 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004223C8 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004223CC AFA00010 */  sw    $zero, 0x10($sp)
/* 004223D0 0320F809 */  jalr  $t9
/* 004223D4 90E70000 */   lbu   $a3, ($a3)
/* 004223D8 100000CD */  b     .L00422710
/* 004223DC 8FBC0030 */   lw    $gp, 0x30($sp)
.L004223E0:
/* 004223E0 8F9889DC */  lw     $t8, %got(basicint)($gp)
/* 004223E4 2404006C */  li    $a0, 108
/* 004223E8 2405001E */  li    $a1, 30
/* 004223EC 93180000 */  lbu   $t8, ($t8)
/* 004223F0 02203025 */  move  $a2, $s1
/* 004223F4 1700000B */  bnez  $t8, .L00422424
/* 004223F8 00000000 */   nop   
/* 004223FC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422400 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00422404 2404002A */  li    $a0, 42
/* 00422408 2405001E */  li    $a1, 30
/* 0042240C 02203025 */  move  $a2, $s1
/* 00422410 AFA00010 */  sw    $zero, 0x10($sp)
/* 00422414 0320F809 */  jalr  $t9
/* 00422418 90E70000 */   lbu   $a3, ($a3)
/* 0042241C 100000BC */  b     .L00422710
/* 00422420 8FBC0030 */   lw    $gp, 0x30($sp)
.L00422424:
/* 00422424 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422428 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 0042242C AFA00010 */  sw    $zero, 0x10($sp)
/* 00422430 0320F809 */  jalr  $t9
/* 00422434 90E70000 */   lbu   $a3, ($a3)
/* 00422438 100000B5 */  b     .L00422710
/* 0042243C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00422440 92890000 */  lbu   $t1, ($s4)
.L00422444:
/* 00422444 5120005C */  beql  $t1, $zero, .L004225B8
/* 00422448 8E6D0000 */   lw    $t5, ($s3)
/* 0042244C 8E6B0000 */  lw    $t3, ($s3)
/* 00422450 00118023 */  negu  $s0, $s1
/* 00422454 000B67C0 */  sll   $t4, $t3, 0x1f
/* 00422458 0583003D */  bgezl $t4, .L00422550
/* 0042245C 8E790000 */   lw    $t9, ($s3)
/* 00422460 8E680000 */  lw    $t0, ($s3)
/* 00422464 8F8289DC */  lw     $v0, %got(basicint)($gp)
/* 00422468 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 0042246C 00085780 */  sll   $t2, $t0, 0x1e
/* 00422470 90420000 */  lbu   $v0, ($v0)
/* 00422474 05410024 */  bgez  $t2, .L00422508
/* 00422478 90E70000 */   lbu   $a3, ($a3)
/* 0042247C 14400012 */  bnez  $v0, .L004224C8
/* 00422480 2404006C */   li    $a0, 108
/* 00422484 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422488 2404002A */  li    $a0, 42
/* 0042248C 2405001F */  li    $a1, 31
/* 00422490 26060004 */  addiu $a2, $s0, 4
/* 00422494 0320F809 */  jalr  $t9
/* 00422498 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042249C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004224A0 2404002A */  li    $a0, 42
/* 004224A4 2405001E */  li    $a1, 30
/* 004224A8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004224AC 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004224B0 02003025 */  move  $a2, $s0
/* 004224B4 AFA00010 */  sw    $zero, 0x10($sp)
/* 004224B8 0320F809 */  jalr  $t9
/* 004224BC 90E70000 */   lbu   $a3, ($a3)
/* 004224C0 10000093 */  b     .L00422710
/* 004224C4 8FBC0030 */   lw    $gp, 0x30($sp)
.L004224C8:
/* 004224C8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004224CC 2405001F */  li    $a1, 31
/* 004224D0 26060008 */  addiu $a2, $s0, 8
/* 004224D4 0320F809 */  jalr  $t9
/* 004224D8 AFA00010 */   sw    $zero, 0x10($sp)
/* 004224DC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004224E0 2404006C */  li    $a0, 108
/* 004224E4 2405001E */  li    $a1, 30
/* 004224E8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004224EC 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004224F0 02003025 */  move  $a2, $s0
/* 004224F4 AFA00010 */  sw    $zero, 0x10($sp)
/* 004224F8 0320F809 */  jalr  $t9
/* 004224FC 90E70000 */   lbu   $a3, ($a3)
/* 00422500 10000083 */  b     .L00422710
/* 00422504 8FBC0030 */   lw    $gp, 0x30($sp)
.L00422508:
/* 00422508 14400009 */  bnez  $v0, .L00422530
/* 0042250C 2404006C */   li    $a0, 108
/* 00422510 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422514 2404002A */  li    $a0, 42
/* 00422518 2405001F */  li    $a1, 31
/* 0042251C 02003025 */  move  $a2, $s0
/* 00422520 0320F809 */  jalr  $t9
/* 00422524 AFA00010 */   sw    $zero, 0x10($sp)
/* 00422528 10000079 */  b     .L00422710
/* 0042252C 8FBC0030 */   lw    $gp, 0x30($sp)
.L00422530:
/* 00422530 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422534 2405001F */  li    $a1, 31
/* 00422538 02003025 */  move  $a2, $s0
/* 0042253C 0320F809 */  jalr  $t9
/* 00422540 AFA00010 */   sw    $zero, 0x10($sp)
/* 00422544 10000072 */  b     .L00422710
/* 00422548 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0042254C 8E790000 */  lw    $t9, ($s3)
.L00422550:
/* 00422550 00197780 */  sll   $t6, $t9, 0x1e
/* 00422554 05C1006E */  bgez  $t6, .L00422710
/* 00422558 00000000 */   nop   
/* 0042255C 8F8F89DC */  lw     $t7, %got(basicint)($gp)
/* 00422560 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00422564 00118023 */  negu  $s0, $s1
/* 00422568 91EF0000 */  lbu   $t7, ($t7)
/* 0042256C 2405001E */  li    $a1, 30
/* 00422570 2404006C */  li    $a0, 108
/* 00422574 15E00008 */  bnez  $t7, .L00422598
/* 00422578 90E70000 */   lbu   $a3, ($a3)
/* 0042257C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422580 2404002A */  li    $a0, 42
/* 00422584 02003025 */  move  $a2, $s0
/* 00422588 0320F809 */  jalr  $t9
/* 0042258C AFA00010 */   sw    $zero, 0x10($sp)
/* 00422590 1000005F */  b     .L00422710
/* 00422594 8FBC0030 */   lw    $gp, 0x30($sp)
.L00422598:
/* 00422598 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042259C 2405001E */  li    $a1, 30
/* 004225A0 02003025 */  move  $a2, $s0
/* 004225A4 0320F809 */  jalr  $t9
/* 004225A8 AFA00010 */   sw    $zero, 0x10($sp)
/* 004225AC 10000058 */  b     .L00422710
/* 004225B0 8FBC0030 */   lw    $gp, 0x30($sp)
/* 004225B4 8E6D0000 */  lw    $t5, ($s3)
.L004225B8:
/* 004225B8 000DC7C0 */  sll   $t8, $t5, 0x1f
/* 004225BC 0703003C */  bgezl $t8, .L004226B0
/* 004225C0 8E6C0000 */   lw    $t4, ($s3)
/* 004225C4 8F8289DC */  lw     $v0, %got(basicint)($gp)
/* 004225C8 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004225CC 000D5F80 */  sll   $t3, $t5, 0x1e
/* 004225D0 90420000 */  lbu   $v0, ($v0)
/* 004225D4 05610024 */  bgez  $t3, .L00422668
/* 004225D8 90E70000 */   lbu   $a3, ($a3)
/* 004225DC 14400012 */  bnez  $v0, .L00422628
/* 004225E0 2404006C */   li    $a0, 108
/* 004225E4 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004225E8 2404002A */  li    $a0, 42
/* 004225EC 2405001F */  li    $a1, 31
/* 004225F0 26260004 */  addiu $a2, $s1, 4
/* 004225F4 0320F809 */  jalr  $t9
/* 004225F8 AFA00010 */   sw    $zero, 0x10($sp)
/* 004225FC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422600 2404002A */  li    $a0, 42
/* 00422604 2405001E */  li    $a1, 30
/* 00422608 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042260C 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00422610 02203025 */  move  $a2, $s1
/* 00422614 AFA00010 */  sw    $zero, 0x10($sp)
/* 00422618 0320F809 */  jalr  $t9
/* 0042261C 90E70000 */   lbu   $a3, ($a3)
/* 00422620 1000003B */  b     .L00422710
/* 00422624 8FBC0030 */   lw    $gp, 0x30($sp)
.L00422628:
/* 00422628 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042262C 2405001F */  li    $a1, 31
/* 00422630 26260008 */  addiu $a2, $s1, 8
/* 00422634 0320F809 */  jalr  $t9
/* 00422638 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042263C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422640 2404006C */  li    $a0, 108
/* 00422644 2405001E */  li    $a1, 30
/* 00422648 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042264C 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00422650 02203025 */  move  $a2, $s1
/* 00422654 AFA00010 */  sw    $zero, 0x10($sp)
/* 00422658 0320F809 */  jalr  $t9
/* 0042265C 90E70000 */   lbu   $a3, ($a3)
/* 00422660 1000002B */  b     .L00422710
/* 00422664 8FBC0030 */   lw    $gp, 0x30($sp)
.L00422668:
/* 00422668 14400009 */  bnez  $v0, .L00422690
/* 0042266C 2404006C */   li    $a0, 108
/* 00422670 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422674 2404002A */  li    $a0, 42
/* 00422678 2405001F */  li    $a1, 31
/* 0042267C 02203025 */  move  $a2, $s1
/* 00422680 0320F809 */  jalr  $t9
/* 00422684 AFA00010 */   sw    $zero, 0x10($sp)
/* 00422688 10000021 */  b     .L00422710
/* 0042268C 8FBC0030 */   lw    $gp, 0x30($sp)
.L00422690:
/* 00422690 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422694 2405001F */  li    $a1, 31
/* 00422698 02203025 */  move  $a2, $s1
/* 0042269C 0320F809 */  jalr  $t9
/* 004226A0 AFA00010 */   sw    $zero, 0x10($sp)
/* 004226A4 1000001A */  b     .L00422710
/* 004226A8 8FBC0030 */   lw    $gp, 0x30($sp)
/* 004226AC 8E6C0000 */  lw    $t4, ($s3)
.L004226B0:
/* 004226B0 000C4780 */  sll   $t0, $t4, 0x1e
/* 004226B4 05010016 */  bgez  $t0, .L00422710
/* 004226B8 00000000 */   nop   
/* 004226BC 8F8A89DC */  lw     $t2, %got(basicint)($gp)
/* 004226C0 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004226C4 2405001E */  li    $a1, 30
/* 004226C8 914A0000 */  lbu   $t2, ($t2)
/* 004226CC 2404006C */  li    $a0, 108
/* 004226D0 90E70000 */  lbu   $a3, ($a3)
/* 004226D4 15400008 */  bnez  $t2, .L004226F8
/* 004226D8 00000000 */   nop   
/* 004226DC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004226E0 2404002A */  li    $a0, 42
/* 004226E4 02203025 */  move  $a2, $s1
/* 004226E8 0320F809 */  jalr  $t9
/* 004226EC AFA00010 */   sw    $zero, 0x10($sp)
/* 004226F0 10000007 */  b     .L00422710
/* 004226F4 8FBC0030 */   lw    $gp, 0x30($sp)
.L004226F8:
/* 004226F8 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004226FC 2405001E */  li    $a1, 30
/* 00422700 02203025 */  move  $a2, $s1
/* 00422704 0320F809 */  jalr  $t9
/* 00422708 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042270C 8FBC0030 */  lw    $gp, 0x30($sp)
.L00422710:
/* 00422710 8F9982F8 */  lw    $t9, %call16(demit_mask)($gp)
/* 00422714 24040026 */  li    $a0, 38
/* 00422718 8FA50048 */  lw    $a1, 0x48($sp)
/* 0042271C 0320F809 */  jalr  $t9
/* 00422720 8FA60040 */   lw    $a2, 0x40($sp)
/* 00422724 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422728 24040027 */  li    $a0, 39
/* 0042272C 8FA50044 */  lw    $a1, 0x44($sp)
/* 00422730 8F9982F8 */  lw    $t9, %call16(demit_mask)($gp)
/* 00422734 8FA6003C */  lw    $a2, 0x3c($sp)
/* 00422738 0320F809 */  jalr  $t9
/* 0042273C 00000000 */   nop   
/* 00422740 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00422744 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00422748 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0042274C 8FB10020 */  lw    $s1, 0x20($sp)
/* 00422750 8FB20024 */  lw    $s2, 0x24($sp)
/* 00422754 8FB30028 */  lw    $s3, 0x28($sp)
/* 00422758 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0042275C 03E00008 */  jr    $ra
/* 00422760 27BD0058 */   addiu $sp, $sp, 0x58
    .type gen_reg_save_restore, @function
    .size gen_reg_save_restore, .-gen_reg_save_restore
    .end gen_reg_save_restore

glabel gen_reg_save
    .ent gen_reg_save
    # 00421170 gen_entry
/* 00422764 3C1C0FC0 */  .cpload $t9
/* 00422768 279CD2EC */  
/* 0042276C 0399E021 */  
/* 00422770 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00422774 AFB50034 */  sw    $s5, 0x34($sp)
/* 00422778 8F958A74 */  lw     $s5, %got(reversed_stack)($gp)
/* 0042277C AFBF003C */  sw    $ra, 0x3c($sp)
/* 00422780 AFBC0038 */  sw    $gp, 0x38($sp)
/* 00422784 92A20000 */  lbu   $v0, ($s5)
/* 00422788 AFB40030 */  sw    $s4, 0x30($sp)
/* 0042278C AFB3002C */  sw    $s3, 0x2c($sp)
/* 00422790 AFB20028 */  sw    $s2, 0x28($sp)
/* 00422794 AFB10024 */  sw    $s1, 0x24($sp)
/* 00422798 10400005 */  beqz  $v0, .L004227B0
/* 0042279C AFB00020 */   sw    $s0, 0x20($sp)
/* 004227A0 00857023 */  subu  $t6, $a0, $a1
/* 004227A4 01C77823 */  subu  $t7, $t6, $a3
/* 004227A8 10000003 */  b     .L004227B8
/* 004227AC 01E68823 */   subu  $s1, $t7, $a2
.L004227B0:
/* 004227B0 0085C023 */  subu  $t8, $a0, $a1
/* 004227B4 03078823 */  subu  $s1, $t8, $a3
.L004227B8:
/* 004227B8 8F948B90 */  lw     $s4, %got(saved_regs)($gp)
/* 004227BC 8E990000 */  lw    $t9, ($s4)
/* 004227C0 001947C0 */  sll   $t0, $t9, 0x1f
/* 004227C4 05030033 */  bgezl $t0, .L00422894
/* 004227C8 8E8B0000 */   lw    $t3, ($s4)
/* 004227CC 10400019 */  beqz  $v0, .L00422834
/* 004227D0 00000000 */   nop   
/* 004227D4 8F9389DC */  lw     $s3, %got(basicint)($gp)
/* 004227D8 2404006D */  li    $a0, 109
/* 004227DC 2405001F */  li    $a1, 31
/* 004227E0 92690000 */  lbu   $t1, ($s3)
/* 004227E4 2407001D */  li    $a3, 29
/* 004227E8 1520000B */  bnez  $t1, .L00422818
/* 004227EC 00000000 */   nop   
/* 004227F0 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004227F4 26310004 */  addiu $s1, $s1, 4
/* 004227F8 00113023 */  negu  $a2, $s1
/* 004227FC 24040057 */  li    $a0, 87
/* 00422800 2405001F */  li    $a1, 31
/* 00422804 2407001D */  li    $a3, 29
/* 00422808 0320F809 */  jalr  $t9
/* 0042280C AFA00010 */   sw    $zero, 0x10($sp)
/* 00422810 1000001F */  b     .L00422890
/* 00422814 8FBC0038 */   lw    $gp, 0x38($sp)
.L00422818:
/* 00422818 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042281C 26310008 */  addiu $s1, $s1, 8
/* 00422820 00113023 */  negu  $a2, $s1
/* 00422824 0320F809 */  jalr  $t9
/* 00422828 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042282C 10000018 */  b     .L00422890
/* 00422830 8FBC0038 */   lw    $gp, 0x38($sp)
.L00422834:
/* 00422834 8F9389DC */  lw     $s3, %got(basicint)($gp)
/* 00422838 2404006D */  li    $a0, 109
/* 0042283C 2405001F */  li    $a1, 31
/* 00422840 926A0000 */  lbu   $t2, ($s3)
/* 00422844 2407001D */  li    $a3, 29
/* 00422848 1540000B */  bnez  $t2, .L00422878
/* 0042284C 00000000 */   nop   
/* 00422850 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422854 2631FFFC */  addiu $s1, $s1, -4
/* 00422858 02203025 */  move  $a2, $s1
/* 0042285C 24040057 */  li    $a0, 87
/* 00422860 2405001F */  li    $a1, 31
/* 00422864 2407001D */  li    $a3, 29
/* 00422868 0320F809 */  jalr  $t9
/* 0042286C AFA00010 */   sw    $zero, 0x10($sp)
/* 00422870 10000007 */  b     .L00422890
/* 00422874 8FBC0038 */   lw    $gp, 0x38($sp)
.L00422878:
/* 00422878 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 0042287C 2631FFF8 */  addiu $s1, $s1, -8
/* 00422880 02203025 */  move  $a2, $s1
/* 00422884 0320F809 */  jalr  $t9
/* 00422888 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042288C 8FBC0038 */  lw    $gp, 0x38($sp)
.L00422890:
/* 00422890 8E8B0000 */  lw    $t3, ($s4)
.L00422894:
/* 00422894 8F9389DC */  lw     $s3, %got(basicint)($gp)
/* 00422898 000B6780 */  sll   $t4, $t3, 0x1e
/* 0042289C 0581002F */  bgez  $t4, .L0042295C
/* 004228A0 00000000 */   nop   
/* 004228A4 92AD0000 */  lbu   $t5, ($s5)
/* 004228A8 51A00018 */  beql  $t5, $zero, .L0042290C
/* 004228AC 926F0000 */   lbu   $t7, ($s3)
/* 004228B0 926E0000 */  lbu   $t6, ($s3)
/* 004228B4 2404006D */  li    $a0, 109
/* 004228B8 2405001E */  li    $a1, 30
/* 004228BC 15C0000B */  bnez  $t6, .L004228EC
/* 004228C0 2407001D */   li    $a3, 29
/* 004228C4 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004228C8 26310004 */  addiu $s1, $s1, 4
/* 004228CC 00113023 */  negu  $a2, $s1
/* 004228D0 24040057 */  li    $a0, 87
/* 004228D4 2405001E */  li    $a1, 30
/* 004228D8 2407001D */  li    $a3, 29
/* 004228DC 0320F809 */  jalr  $t9
/* 004228E0 AFA00010 */   sw    $zero, 0x10($sp)
/* 004228E4 1000001D */  b     .L0042295C
/* 004228E8 8FBC0038 */   lw    $gp, 0x38($sp)
.L004228EC:
/* 004228EC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004228F0 26310008 */  addiu $s1, $s1, 8
/* 004228F4 00113023 */  negu  $a2, $s1
/* 004228F8 0320F809 */  jalr  $t9
/* 004228FC AFA00010 */   sw    $zero, 0x10($sp)
/* 00422900 10000016 */  b     .L0042295C
/* 00422904 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00422908 926F0000 */  lbu   $t7, ($s3)
.L0042290C:
/* 0042290C 2404006D */  li    $a0, 109
/* 00422910 2405001E */  li    $a1, 30
/* 00422914 15E0000B */  bnez  $t7, .L00422944
/* 00422918 2407001D */   li    $a3, 29
/* 0042291C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422920 2631FFFC */  addiu $s1, $s1, -4
/* 00422924 02203025 */  move  $a2, $s1
/* 00422928 24040057 */  li    $a0, 87
/* 0042292C 2405001E */  li    $a1, 30
/* 00422930 2407001D */  li    $a3, 29
/* 00422934 0320F809 */  jalr  $t9
/* 00422938 AFA00010 */   sw    $zero, 0x10($sp)
/* 0042293C 10000007 */  b     .L0042295C
/* 00422940 8FBC0038 */   lw    $gp, 0x38($sp)
.L00422944:
/* 00422944 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422948 2631FFF8 */  addiu $s1, $s1, -8
/* 0042294C 02203025 */  move  $a2, $s1
/* 00422950 0320F809 */  jalr  $t9
/* 00422954 AFA00010 */   sw    $zero, 0x10($sp)
/* 00422958 8FBC0038 */  lw    $gp, 0x38($sp)
.L0042295C:
/* 0042295C 8F9889E4 */  lw     $t8, %got(pic_level)($gp)
/* 00422960 8F180000 */  lw    $t8, ($t8)
/* 00422964 1B00003D */  blez  $t8, .L00422A5C
/* 00422968 00000000 */   nop   
/* 0042296C 8E990000 */  lw    $t9, ($s4)
/* 00422970 00194700 */  sll   $t0, $t9, 0x1c
/* 00422974 05010039 */  bgez  $t0, .L00422A5C
/* 00422978 00000000 */   nop   
/* 0042297C 92A90000 */  lbu   $t1, ($s5)
/* 00422980 2404000F */  li    $a0, 15
/* 00422984 1120001B */  beqz  $t1, .L004229F4
/* 00422988 00000000 */   nop   
/* 0042298C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00422990 26310004 */  addiu $s1, $s1, 4
/* 00422994 00118023 */  negu  $s0, $s1
/* 00422998 0320F809 */  jalr  $t9
/* 0042299C 02002825 */   move  $a1, $s0
/* 004229A0 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004229A4 8F838A98 */  lw     $v1, %got(num_i_ptr_indexes)($gp)
/* 004229A8 8C620000 */  lw    $v0, ($v1)
/* 004229AC 10400034 */  beqz  $v0, .L00422A80
/* 004229B0 00000000 */   nop   
/* 004229B4 8F848978 */  lw     $a0, %got(ibuffer)($gp)
/* 004229B8 8F858BB8 */  lw     $a1, %got(i_ptrs_for_gp_offset)($gp)
/* 004229BC 8C840000 */  lw    $a0, ($a0)
/* 004229C0 24A5FFFC */  addiu $a1, $a1, -4
.L004229C4:
/* 004229C4 00025080 */  sll   $t2, $v0, 2
/* 004229C8 00AA5821 */  addu  $t3, $a1, $t2
/* 004229CC 8D6C0000 */  lw    $t4, ($t3)
/* 004229D0 244FFFFF */  addiu $t7, $v0, -1
/* 004229D4 01E01025 */  move  $v0, $t7
/* 004229D8 000C6900 */  sll   $t5, $t4, 4
/* 004229DC 008D7021 */  addu  $t6, $a0, $t5
/* 004229E0 ADD0FFFC */  sw    $s0, -4($t6)
/* 004229E4 15E0FFF7 */  bnez  $t7, .L004229C4
/* 004229E8 AC6F0000 */   sw    $t7, ($v1)
/* 004229EC 10000024 */  b     .L00422A80
/* 004229F0 00000000 */   nop   
.L004229F4:
/* 004229F4 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 004229F8 2631FFFC */  addiu $s1, $s1, -4
/* 004229FC 02202825 */  move  $a1, $s1
/* 00422A00 0320F809 */  jalr  $t9
/* 00422A04 2404000F */   li    $a0, 15
/* 00422A08 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00422A0C 8F838A98 */  lw     $v1, %got(num_i_ptr_indexes)($gp)
/* 00422A10 8C620000 */  lw    $v0, ($v1)
/* 00422A14 1040001A */  beqz  $v0, .L00422A80
/* 00422A18 00000000 */   nop   
/* 00422A1C 8F848978 */  lw     $a0, %got(ibuffer)($gp)
/* 00422A20 8F858BB8 */  lw     $a1, %got(i_ptrs_for_gp_offset)($gp)
/* 00422A24 8C840000 */  lw    $a0, ($a0)
/* 00422A28 24A5FFFC */  addiu $a1, $a1, -4
.L00422A2C:
/* 00422A2C 0002C080 */  sll   $t8, $v0, 2
/* 00422A30 00B8C821 */  addu  $t9, $a1, $t8
/* 00422A34 8F280000 */  lw    $t0, ($t9)
/* 00422A38 244BFFFF */  addiu $t3, $v0, -1
/* 00422A3C 01601025 */  move  $v0, $t3
/* 00422A40 00084900 */  sll   $t1, $t0, 4
/* 00422A44 00895021 */  addu  $t2, $a0, $t1
/* 00422A48 AD51FFFC */  sw    $s1, -4($t2)
/* 00422A4C 1560FFF7 */  bnez  $t3, .L00422A2C
/* 00422A50 AC6B0000 */   sw    $t3, ($v1)
/* 00422A54 1000000A */  b     .L00422A80
/* 00422A58 00000000 */   nop   
.L00422A5C:
/* 00422A5C 8F8C89F0 */  lw     $t4, %got(use_cpalias)($gp)
/* 00422A60 918C0000 */  lbu   $t4, ($t4)
/* 00422A64 11800006 */  beqz  $t4, .L00422A80
/* 00422A68 00000000 */   nop   
/* 00422A6C 8F9982B8 */  lw    $t9, %call16(emit_cpalias)($gp)
/* 00422A70 2404001E */  li    $a0, 30
/* 00422A74 0320F809 */  jalr  $t9
/* 00422A78 00000000 */   nop   
/* 00422A7C 8FBC0038 */  lw    $gp, 0x38($sp)
.L00422A80:
/* 00422A80 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00422A84 00009025 */  move  $s2, $zero
/* 00422A88 8C420000 */  lw    $v0, ($v0)
/* 00422A8C 2450000F */  addiu $s0, $v0, 0xf
/* 00422A90 10400044 */  beqz  $v0, .L00422BA4
/* 00422A94 321000FF */   andi  $s0, $s0, 0xff
.L00422A98:
/* 00422A98 2E0D0060 */  sltiu $t5, $s0, 0x60
/* 00422A9C 11A00006 */  beqz  $t5, .L00422AB8
/* 00422AA0 00107143 */   sra   $t6, $s0, 5
/* 00422AA4 000E7880 */  sll   $t7, $t6, 2
/* 00422AA8 028FC021 */  addu  $t8, $s4, $t7
/* 00422AAC 8F190000 */  lw    $t9, ($t8)
/* 00422AB0 02194004 */  sllv  $t0, $t9, $s0
/* 00422AB4 290D0000 */  slti  $t5, $t0, 0
.L00422AB8:
/* 00422AB8 51A00036 */  beql  $t5, $zero, .L00422B94
/* 00422ABC 26520001 */   addiu $s2, $s2, 1
/* 00422AC0 92AA0000 */  lbu   $t2, ($s5)
/* 00422AC4 5140001A */  beql  $t2, $zero, .L00422B30
/* 00422AC8 926C0000 */   lbu   $t4, ($s3)
/* 00422ACC 926B0000 */  lbu   $t3, ($s3)
/* 00422AD0 2404006D */  li    $a0, 109
/* 00422AD4 02002825 */  move  $a1, $s0
/* 00422AD8 1560000B */  bnez  $t3, .L00422B08
/* 00422ADC 2407001D */   li    $a3, 29
/* 00422AE0 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422AE4 26310004 */  addiu $s1, $s1, 4
/* 00422AE8 00113023 */  negu  $a2, $s1
/* 00422AEC 24040057 */  li    $a0, 87
/* 00422AF0 02002825 */  move  $a1, $s0
/* 00422AF4 2407001D */  li    $a3, 29
/* 00422AF8 0320F809 */  jalr  $t9
/* 00422AFC AFA00010 */   sw    $zero, 0x10($sp)
/* 00422B00 10000007 */  b     .L00422B20
/* 00422B04 8FBC0038 */   lw    $gp, 0x38($sp)
.L00422B08:
/* 00422B08 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422B0C 26310008 */  addiu $s1, $s1, 8
/* 00422B10 00113023 */  negu  $a2, $s1
/* 00422B14 0320F809 */  jalr  $t9
/* 00422B18 AFA00010 */   sw    $zero, 0x10($sp)
/* 00422B1C 8FBC0038 */  lw    $gp, 0x38($sp)
.L00422B20:
/* 00422B20 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00422B24 1000001A */  b     .L00422B90
/* 00422B28 8C420000 */   lw    $v0, ($v0)
/* 00422B2C 926C0000 */  lbu   $t4, ($s3)
.L00422B30:
/* 00422B30 2404006D */  li    $a0, 109
/* 00422B34 02002825 */  move  $a1, $s0
/* 00422B38 1580000D */  bnez  $t4, .L00422B70
/* 00422B3C 2407001D */   li    $a3, 29
/* 00422B40 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422B44 2631FFFC */  addiu $s1, $s1, -4
/* 00422B48 02203025 */  move  $a2, $s1
/* 00422B4C 24040057 */  li    $a0, 87
/* 00422B50 02002825 */  move  $a1, $s0
/* 00422B54 2407001D */  li    $a3, 29
/* 00422B58 0320F809 */  jalr  $t9
/* 00422B5C AFA00010 */   sw    $zero, 0x10($sp)
/* 00422B60 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00422B64 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00422B68 10000009 */  b     .L00422B90
/* 00422B6C 8C420000 */   lw    $v0, ($v0)
.L00422B70:
/* 00422B70 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422B74 2631FFF8 */  addiu $s1, $s1, -8
/* 00422B78 02203025 */  move  $a2, $s1
/* 00422B7C 0320F809 */  jalr  $t9
/* 00422B80 AFA00010 */   sw    $zero, 0x10($sp)
/* 00422B84 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00422B88 8F828A04 */  lw     $v0, %got(n_saved_regs)($gp)
/* 00422B8C 8C420000 */  lw    $v0, ($v0)
.L00422B90:
/* 00422B90 26520001 */  addiu $s2, $s2, 1
.L00422B94:
/* 00422B94 2610FFFF */  addiu $s0, $s0, -1
/* 00422B98 1642FFBF */  bne   $s2, $v0, .L00422A98
/* 00422B9C 321000FF */   andi  $s0, $s0, 0xff
/* 00422BA0 00009025 */  move  $s2, $zero
.L00422BA4:
/* 00422BA4 8F828A08 */  lw     $v0, %got(n_saved_fp_regs)($gp)
/* 00422BA8 8C420000 */  lw    $v0, ($v0)
/* 00422BAC 00028040 */  sll   $s0, $v0, 1
/* 00422BB0 26100032 */  addiu $s0, $s0, 0x32
/* 00422BB4 321000FF */  andi  $s0, $s0, 0xff
/* 00422BB8 06210003 */  bgez  $s1, .L00422BC8
/* 00422BBC 00117083 */   sra   $t6, $s1, 2
/* 00422BC0 26210003 */  addiu $at, $s1, 3
/* 00422BC4 00017083 */  sra   $t6, $at, 2
.L00422BC8:
/* 00422BC8 31CF0001 */  andi  $t7, $t6, 1
/* 00422BCC 11E00002 */  beqz  $t7, .L00422BD8
/* 00422BD0 00000000 */   nop   
/* 00422BD4 2631FFFC */  addiu $s1, $s1, -4
.L00422BD8:
/* 00422BD8 10400028 */  beqz  $v0, .L00422C7C
.L00422BDC:
/* 00422BDC 2E180060 */   sltiu $t8, $s0, 0x60
/* 00422BE0 13000007 */  beqz  $t8, .L00422C00
/* 00422BE4 00000000 */   nop   
/* 00422BE8 0010C943 */  sra   $t9, $s0, 5
/* 00422BEC 00194080 */  sll   $t0, $t9, 2
/* 00422BF0 02884821 */  addu  $t1, $s4, $t0
/* 00422BF4 8D2D0000 */  lw    $t5, ($t1)
/* 00422BF8 020D5004 */  sllv  $t2, $t5, $s0
/* 00422BFC 29580000 */  slti  $t8, $t2, 0
.L00422C00:
/* 00422C00 5300001B */  beql  $t8, $zero, .L00422C70
/* 00422C04 26520001 */   addiu $s2, $s2, 1
/* 00422C08 92AC0000 */  lbu   $t4, ($s5)
/* 00422C0C 2404007A */  li    $a0, 122
/* 00422C10 02002825 */  move  $a1, $s0
/* 00422C14 1180000D */  beqz  $t4, .L00422C4C
/* 00422C18 2407001D */   li    $a3, 29
/* 00422C1C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422C20 26310008 */  addiu $s1, $s1, 8
/* 00422C24 00113023 */  negu  $a2, $s1
/* 00422C28 2404007A */  li    $a0, 122
/* 00422C2C 02002825 */  move  $a1, $s0
/* 00422C30 2407001D */  li    $a3, 29
/* 00422C34 0320F809 */  jalr  $t9
/* 00422C38 AFA00010 */   sw    $zero, 0x10($sp)
/* 00422C3C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00422C40 8F828A08 */  lw     $v0, %got(n_saved_fp_regs)($gp)
/* 00422C44 10000009 */  b     .L00422C6C
/* 00422C48 8C420000 */   lw    $v0, ($v0)
.L00422C4C:
/* 00422C4C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00422C50 2631FFF8 */  addiu $s1, $s1, -8
/* 00422C54 02203025 */  move  $a2, $s1
/* 00422C58 0320F809 */  jalr  $t9
/* 00422C5C AFA00010 */   sw    $zero, 0x10($sp)
/* 00422C60 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00422C64 8F828A08 */  lw     $v0, %got(n_saved_fp_regs)($gp)
/* 00422C68 8C420000 */  lw    $v0, ($v0)
.L00422C6C:
/* 00422C6C 26520001 */  addiu $s2, $s2, 1
.L00422C70:
/* 00422C70 2610FFFE */  addiu $s0, $s0, -2
/* 00422C74 1642FFD9 */  bne   $s2, $v0, .L00422BDC
/* 00422C78 321000FF */   andi  $s0, $s0, 0xff
.L00422C7C:
/* 00422C7C 8F858A60 */  lw     $a1, %got(frame_pointer)($gp)
/* 00422C80 2401001D */  li    $at, 29
/* 00422C84 90A50000 */  lbu   $a1, ($a1)
/* 00422C88 50A10008 */  beql  $a1, $at, .L00422CAC
/* 00422C8C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00422C90 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00422C94 24040031 */  li    $a0, 49
/* 00422C98 2406001D */  li    $a2, 29
/* 00422C9C 0320F809 */  jalr  $t9
/* 00422CA0 00000000 */   nop   
/* 00422CA4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00422CA8 8FBF003C */  lw    $ra, 0x3c($sp)
.L00422CAC:
/* 00422CAC 8FB00020 */  lw    $s0, 0x20($sp)
/* 00422CB0 8FB10024 */  lw    $s1, 0x24($sp)
/* 00422CB4 8FB20028 */  lw    $s2, 0x28($sp)
/* 00422CB8 8FB3002C */  lw    $s3, 0x2c($sp)
/* 00422CBC 8FB40030 */  lw    $s4, 0x30($sp)
/* 00422CC0 8FB50034 */  lw    $s5, 0x34($sp)
/* 00422CC4 03E00008 */  jr    $ra
/* 00422CC8 27BD0040 */   addiu $sp, $sp, 0x40
    .type gen_reg_save, @function
    .size gen_reg_save, .-gen_reg_save
    .end gen_reg_save

glabel demit_mask
    .ent demit_mask
    # 004219E8 gen_reg_save_restore
/* 00422CCC 3C1C0FC0 */  .cpload $t9
/* 00422CD0 279CCD84 */  
/* 00422CD4 0399E021 */  
/* 00422CD8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00422CDC AFBF001C */  sw    $ra, 0x1c($sp)
/* 00422CE0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00422CE4 AFA40030 */  sw    $a0, 0x30($sp)
/* 00422CE8 AFA00024 */  sw    $zero, 0x24($sp)
/* 00422CEC 10A0000F */  beqz  $a1, .L00422D2C
/* 00422CF0 308700FF */   andi  $a3, $a0, 0xff
/* 00422CF4 93AE0025 */  lbu   $t6, 0x25($sp)
/* 00422CF8 AFA00020 */  sw    $zero, 0x20($sp)
/* 00422CFC AFA50028 */  sw    $a1, 0x28($sp)
/* 00422D00 000E7E80 */  sll   $t7, $t6, 0x1a
/* 00422D04 000FC682 */  srl   $t8, $t7, 0x1a
/* 00422D08 00F8C826 */  xor   $t9, $a3, $t8
/* 00422D0C 3328003F */  andi  $t0, $t9, 0x3f
/* 00422D10 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 00422D14 010E4826 */  xor   $t1, $t0, $t6
/* 00422D18 A3A90025 */  sb    $t1, 0x25($sp)
/* 00422D1C AFA6002C */  sw    $a2, 0x2c($sp)
/* 00422D20 0320F809 */  jalr  $t9
/* 00422D24 27A40020 */   addiu $a0, $sp, 0x20
/* 00422D28 8FBC0018 */  lw    $gp, 0x18($sp)
.L00422D2C:
/* 00422D2C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00422D30 27BD0030 */  addiu $sp, $sp, 0x30
/* 00422D34 03E00008 */  jr    $ra
/* 00422D38 00000000 */   nop   
    .type demit_mask, @function
    .size demit_mask, .-demit_mask
    .end demit_mask

glabel demit_frame
    .ent demit_frame
    # 00420810 gen_entry_exit
/* 00422D3C 3C1C0FC0 */  .cpload $t9
/* 00422D40 279CCD14 */  
/* 00422D44 0399E021 */  
/* 00422D48 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00422D4C 00051640 */  sll   $v0, $a1, 0x19
/* 00422D50 AFA00024 */  sw    $zero, 0x24($sp)
/* 00422D54 0002C9C0 */  sll   $t9, $v0, 7
/* 00422D58 93AE0025 */  lbu   $t6, 0x25($sp)
/* 00422D5C 00194642 */  srl   $t0, $t9, 0x19
/* 00422D60 00C84826 */  xor   $t1, $a2, $t0
/* 00422D64 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 00422D68 00095640 */  sll   $t2, $t1, 0x19
/* 00422D6C 000A59C2 */  srl   $t3, $t2, 7
/* 00422D70 31CFFFC0 */  andi  $t7, $t6, 0xffc0
/* 00422D74 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00422D78 35F8002B */  ori   $t8, $t7, 0x2b
/* 00422D7C AFA40028 */  sw    $a0, 0x28($sp)
/* 00422D80 01621026 */  xor   $v0, $t3, $v0
/* 00422D84 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00422D88 AFA50034 */  sw    $a1, 0x34($sp)
/* 00422D8C AFA60038 */  sw    $a2, 0x38($sp)
/* 00422D90 A3B80025 */  sb    $t8, 0x25($sp)
/* 00422D94 AFA00020 */  sw    $zero, 0x20($sp)
/* 00422D98 AFA2002C */  sw    $v0, 0x2c($sp)
/* 00422D9C 0320F809 */  jalr  $t9
/* 00422DA0 27A40020 */   addiu $a0, $sp, 0x20
/* 00422DA4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00422DA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00422DAC 27BD0030 */  addiu $sp, $sp, 0x30
/* 00422DB0 03E00008 */  jr    $ra
/* 00422DB4 00000000 */   nop   
    .type demit_frame, @function
    .size demit_frame, .-demit_frame
    .end demit_frame

glabel emit_file
    .ent emit_file
    # 00420810 gen_entry_exit
    # 0042BDAC eval
/* 00422DB8 3C1C0FC0 */  .cpload $t9
/* 00422DBC 279CCC98 */  
/* 00422DC0 0399E021 */  
/* 00422DC4 27BDFAF8 */  addiu $sp, $sp, -0x508
/* 00422DC8 AFB600C4 */  sw    $s6, 0xc4($sp)
/* 00422DCC 30B600FF */  andi  $s6, $a1, 0xff
/* 00422DD0 AFBF00CC */  sw    $ra, 0xcc($sp)
/* 00422DD4 AFBC00C8 */  sw    $gp, 0xc8($sp)
/* 00422DD8 AFB500C0 */  sw    $s5, 0xc0($sp)
/* 00422DDC AFB400BC */  sw    $s4, 0xbc($sp)
/* 00422DE0 AFB300B8 */  sw    $s3, 0xb8($sp)
/* 00422DE4 AFB200B4 */  sw    $s2, 0xb4($sp)
/* 00422DE8 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 00422DEC AFB000AC */  sw    $s0, 0xac($sp)
/* 00422DF0 AFA5050C */  sw    $a1, 0x50c($sp)
/* 00422DF4 AFA000E8 */  sw    $zero, 0xe8($sp)
/* 00422DF8 14800044 */  bnez  $a0, .L00422F0C
/* 00422DFC AFA000F0 */   sw    $zero, 0xf0($sp)
/* 00422E00 8F8E89D0 */  lw     $t6, %got(mscoff)($gp)
/* 00422E04 24040002 */  li    $a0, 2
/* 00422E08 91CE0000 */  lbu   $t6, ($t6)
/* 00422E0C 55C000AA */  bnel  $t6, $zero, .L004230B8
/* 00422E10 8FBF00CC */   lw    $ra, 0xcc($sp)
/* 00422E14 8F8F8038 */  lw    $t7, %got(RO_10009930)($gp)
/* 00422E18 2405041F */  li    $a1, 1055
/* 00422E1C 03A04025 */  move  $t0, $sp
/* 00422E20 25EF9930 */  addiu $t7, %lo(RO_10009930) # addiu $t7, $t7, -0x66d0
/* 00422E24 25E90048 */  addiu $t1, $t7, 0x48
.L00422E28:
/* 00422E28 89F90000 */  lwl   $t9, ($t7)
/* 00422E2C 99F90003 */  lwr   $t9, 3($t7)
/* 00422E30 25EF000C */  addiu $t7, $t7, 0xc
/* 00422E34 2508000C */  addiu $t0, $t0, 0xc
/* 00422E38 A919FFFC */  swl   $t9, -4($t0)
/* 00422E3C B919FFFF */  swr   $t9, -1($t0)
/* 00422E40 89F8FFF8 */  lwl   $t8, -8($t7)
/* 00422E44 99F8FFFB */  lwr   $t8, -5($t7)
/* 00422E48 A9180000 */  swl   $t8, ($t0)
/* 00422E4C B9180003 */  swr   $t8, 3($t0)
/* 00422E50 89F9FFFC */  lwl   $t9, -4($t7)
/* 00422E54 99F9FFFF */  lwr   $t9, -1($t7)
/* 00422E58 A9190004 */  swl   $t9, 4($t0)
/* 00422E5C 15E9FFF2 */  bne   $t7, $t1, .L00422E28
/* 00422E60 B9190007 */   swr   $t9, 7($t0)
/* 00422E64 89F90000 */  lwl   $t9, ($t7)
/* 00422E68 99F90003 */  lwr   $t9, 3($t7)
/* 00422E6C 8F8A8038 */  lw    $t2, %got(RO_100098E0)($gp)
/* 00422E70 03A06825 */  move  $t5, $sp
/* 00422E74 A9190008 */  swl   $t9, 8($t0)
/* 00422E78 B919000B */  swr   $t9, 0xb($t0)
/* 00422E7C 89F80004 */  lwl   $t8, 4($t7)
/* 00422E80 99F80007 */  lwr   $t8, 7($t7)
/* 00422E84 254A98E0 */  addiu $t2, %lo(RO_100098E0) # addiu $t2, $t2, -0x6720
/* 00422E88 254E0048 */  addiu $t6, $t2, 0x48
/* 00422E8C A918000C */  swl   $t8, 0xc($t0)
/* 00422E90 B918000F */  swr   $t8, 0xf($t0)
.L00422E94:
/* 00422E94 894C0000 */  lwl   $t4, ($t2)
/* 00422E98 994C0003 */  lwr   $t4, 3($t2)
/* 00422E9C 254A000C */  addiu $t2, $t2, 0xc
/* 00422EA0 25AD000C */  addiu $t5, $t5, 0xc
/* 00422EA4 A9AC004C */  swl   $t4, 0x4c($t5)
/* 00422EA8 B9AC004F */  swr   $t4, 0x4f($t5)
/* 00422EAC 894BFFF8 */  lwl   $t3, -8($t2)
/* 00422EB0 994BFFFB */  lwr   $t3, -5($t2)
/* 00422EB4 A9AB0050 */  swl   $t3, 0x50($t5)
/* 00422EB8 B9AB0053 */  swr   $t3, 0x53($t5)
/* 00422EBC 894CFFFC */  lwl   $t4, -4($t2)
/* 00422EC0 994CFFFF */  lwr   $t4, -1($t2)
/* 00422EC4 A9AC0054 */  swl   $t4, 0x54($t5)
/* 00422EC8 154EFFF2 */  bne   $t2, $t6, .L00422E94
/* 00422ECC B9AC0057 */   swr   $t4, 0x57($t5)
/* 00422ED0 894C0000 */  lwl   $t4, ($t2)
/* 00422ED4 994C0003 */  lwr   $t4, 3($t2)
/* 00422ED8 A9AC0058 */  swl   $t4, 0x58($t5)
/* 00422EDC B9AC005B */  swr   $t4, 0x5b($t5)
/* 00422EE0 894B0004 */  lwl   $t3, 4($t2)
/* 00422EE4 994B0007 */  lwr   $t3, 7($t2)
/* 00422EE8 A9AB005C */  swl   $t3, 0x5c($t5)
/* 00422EEC B9AB005F */  swr   $t3, 0x5f($t5)
/* 00422EF0 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00422EF4 8FA7000C */  lw    $a3, 0xc($sp)
/* 00422EF8 8FA60008 */  lw    $a2, 8($sp)
/* 00422EFC 0320F809 */  jalr  $t9
/* 00422F00 00000000 */   nop   
/* 00422F04 1000006B */  b     .L004230B4
/* 00422F08 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L00422F0C:
/* 00422F0C 93A900E9 */  lbu   $t1, 0xe9($sp)
/* 00422F10 AFA400E4 */  sw    $a0, 0xe4($sp)
/* 00422F14 312FFFC0 */  andi  $t7, $t1, 0xffc0
/* 00422F18 35E8000C */  ori   $t0, $t7, 0xc
/* 00422F1C 14800002 */  bnez  $a0, .L00422F28
/* 00422F20 A3A800E9 */   sb    $t0, 0xe9($sp)
/* 00422F24 24040002 */  li    $a0, 2
.L00422F28:
/* 00422F28 8F9986F0 */  lw    $t9, %call16(st_str_idn)($gp)
/* 00422F2C 0320F809 */  jalr  $t9
/* 00422F30 00000000 */   nop   
/* 00422F34 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 00422F38 27A30108 */  addiu $v1, $sp, 0x108
/* 00422F3C 27A50508 */  addiu $a1, $sp, 0x508
/* 00422F40 24040020 */  li    $a0, 32
.L00422F44:
/* 00422F44 24630001 */  addiu $v1, $v1, 1
/* 00422F48 1465FFFE */  bne   $v1, $a1, .L00422F44
/* 00422F4C A064FFFF */   sb    $a0, -1($v1)
/* 00422F50 90580000 */  lbu   $t8, ($v0)
/* 00422F54 24060001 */  li    $a2, 1
/* 00422F58 27A30108 */  addiu $v1, $sp, 0x108
/* 00422F5C 13000008 */  beqz  $t8, .L00422F80
/* 00422F60 24440001 */   addiu $a0, $v0, 1
/* 00422F64 9085FFFF */  lbu   $a1, -1($a0)
.L00422F68:
/* 00422F68 A0650000 */  sb    $a1, ($v1)
/* 00422F6C 90850000 */  lbu   $a1, ($a0)
/* 00422F70 24C60001 */  addiu $a2, $a2, 1
/* 00422F74 24630001 */  addiu $v1, $v1, 1
/* 00422F78 14A0FFFB */  bnez  $a1, .L00422F68
/* 00422F7C 24840001 */   addiu $a0, $a0, 1
.L00422F80:
/* 00422F80 24D9FFFF */  addiu $t9, $a2, -1
/* 00422F84 12C00008 */  beqz  $s6, .L00422FA8
/* 00422F88 AFB900EC */   sw    $t9, 0xec($sp)
/* 00422F8C 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 00422F90 27B400E4 */  addiu $s4, $sp, 0xe4
/* 00422F94 02802025 */  move  $a0, $s4
/* 00422F98 0320F809 */  jalr  $t9
/* 00422F9C 00000000 */   nop   
/* 00422FA0 10000007 */  b     .L00422FC0
/* 00422FA4 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L00422FA8:
/* 00422FA8 8F9982A0 */  lw    $t9, %call16(append_i)($gp)
/* 00422FAC 27B400E4 */  addiu $s4, $sp, 0xe4
/* 00422FB0 02802025 */  move  $a0, $s4
/* 00422FB4 0320F809 */  jalr  $t9
/* 00422FB8 00000000 */   nop   
/* 00422FBC 8FBC00C8 */  lw    $gp, 0xc8($sp)
.L00422FC0:
/* 00422FC0 8FAE00EC */  lw    $t6, 0xec($sp)
/* 00422FC4 11C0003B */  beqz  $t6, .L004230B4
/* 00422FC8 25C2FFFF */   addiu $v0, $t6, -1
/* 00422FCC 04410002 */  bgez  $v0, .L00422FD8
/* 00422FD0 00400821 */   move  $at, $v0
/* 00422FD4 2441000F */  addiu $at, $v0, 0xf
.L00422FD8:
/* 00422FD8 00011103 */  sra   $v0, $at, 4
/* 00422FDC 24420001 */  addiu $v0, $v0, 1
/* 00422FE0 10400034 */  beqz  $v0, .L004230B4
/* 00422FE4 24130001 */   li    $s3, 1
/* 00422FE8 24550001 */  addiu $s5, $v0, 1
/* 00422FEC 24120011 */  li    $s2, 17
/* 00422FF0 27B10107 */  addiu $s1, $sp, 0x107
/* 00422FF4 27B000E3 */  addiu $s0, $sp, 0xe3
.L00422FF8:
/* 00422FF8 8F8A8038 */  lw    $t2, %got(RO_100098D0)($gp)
/* 00422FFC 00132100 */  sll   $a0, $s3, 4
/* 00423000 2484FFF0 */  addiu $a0, $a0, -0x10
/* 00423004 254A98D0 */  addiu $t2, %lo(RO_100098D0) # addiu $t2, $t2, -0x6730
/* 00423008 894B0000 */  lwl   $t3, ($t2)
/* 0042300C 994B0003 */  lwr   $t3, 3($t2)
/* 00423010 24020001 */  li    $v0, 1
/* 00423014 AA8B0000 */  swl   $t3, ($s4)
/* 00423018 BA8B0003 */  swr   $t3, 3($s4)
/* 0042301C 894D0004 */  lwl   $t5, 4($t2)
/* 00423020 994D0007 */  lwr   $t5, 7($t2)
/* 00423024 AA8D0004 */  swl   $t5, 4($s4)
/* 00423028 BA8D0007 */  swr   $t5, 7($s4)
/* 0042302C 894B0008 */  lwl   $t3, 8($t2)
/* 00423030 994B000B */  lwr   $t3, 0xb($t2)
/* 00423034 AA8B0008 */  swl   $t3, 8($s4)
/* 00423038 BA8B000B */  swr   $t3, 0xb($s4)
/* 0042303C 894D000C */  lwl   $t5, 0xc($t2)
/* 00423040 994D000F */  lwr   $t5, 0xf($t2)
/* 00423044 AA8D000C */  swl   $t5, 0xc($s4)
/* 00423048 BA8D000F */  swr   $t5, 0xf($s4)
.L0042304C:
/* 0042304C 8FAC00EC */  lw    $t4, 0xec($sp)
/* 00423050 00821821 */  addu  $v1, $a0, $v0
/* 00423054 02234821 */  addu  $t1, $s1, $v1
/* 00423058 0183082A */  slt   $at, $t4, $v1
/* 0042305C 14200005 */  bnez  $at, .L00423074
/* 00423060 02024021 */   addu  $t0, $s0, $v0
/* 00423064 912F0000 */  lbu   $t7, ($t1)
/* 00423068 24420001 */  addiu $v0, $v0, 1
/* 0042306C 1452FFF7 */  bne   $v0, $s2, .L0042304C
/* 00423070 A10F0000 */   sb    $t7, ($t0)
.L00423074:
/* 00423074 12C00007 */  beqz  $s6, .L00423094
/* 00423078 00000000 */   nop   
/* 0042307C 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 00423080 02802025 */  move  $a0, $s4
/* 00423084 0320F809 */  jalr  $t9
/* 00423088 00000000 */   nop   
/* 0042308C 10000006 */  b     .L004230A8
/* 00423090 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L00423094:
/* 00423094 8F9982A0 */  lw    $t9, %call16(append_i)($gp)
/* 00423098 02802025 */  move  $a0, $s4
/* 0042309C 0320F809 */  jalr  $t9
/* 004230A0 00000000 */   nop   
/* 004230A4 8FBC00C8 */  lw    $gp, 0xc8($sp)
.L004230A8:
/* 004230A8 26730001 */  addiu $s3, $s3, 1
/* 004230AC 1675FFD2 */  bne   $s3, $s5, .L00422FF8
/* 004230B0 00000000 */   nop   
.L004230B4:
/* 004230B4 8FBF00CC */  lw    $ra, 0xcc($sp)
.L004230B8:
/* 004230B8 8FB000AC */  lw    $s0, 0xac($sp)
/* 004230BC 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 004230C0 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 004230C4 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 004230C8 8FB400BC */  lw    $s4, 0xbc($sp)
/* 004230CC 8FB500C0 */  lw    $s5, 0xc0($sp)
/* 004230D0 8FB600C4 */  lw    $s6, 0xc4($sp)
/* 004230D4 03E00008 */  jr    $ra
/* 004230D8 27BD0508 */   addiu $sp, $sp, 0x508
    .type emit_file, @function
    .size emit_file, .-emit_file
    .end emit_file

glabel emit_optimize_level
    .ent emit_optimize_level
    # 00420810 gen_entry_exit
/* 004230DC 3C1C0FC0 */  .cpload $t9
/* 004230E0 279CC974 */  
/* 004230E4 0399E021 */  
/* 004230E8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004230EC AFA00024 */  sw    $zero, 0x24($sp)
/* 004230F0 93AE0025 */  lbu   $t6, 0x25($sp)
/* 004230F4 3C01FFFF */  lui   $at, 0xffff
/* 004230F8 34213FFF */  ori   $at, $at, 0x3fff
/* 004230FC 31CFFFC0 */  andi  $t7, $t6, 0xffc0
/* 00423100 35F8002F */  ori   $t8, $t7, 0x2f
/* 00423104 A3B80025 */  sb    $t8, 0x25($sp)
/* 00423108 8FB90024 */  lw    $t9, 0x24($sp)
/* 0042310C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00423110 AFA4002C */  sw    $a0, 0x2c($sp)
/* 00423114 03214024 */  and   $t0, $t9, $at
/* 00423118 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0042311C 35094000 */  ori   $t1, $t0, 0x4000
/* 00423120 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00423124 AFA00028 */  sw    $zero, 0x28($sp)
/* 00423128 AFA00020 */  sw    $zero, 0x20($sp)
/* 0042312C AFA90024 */  sw    $t1, 0x24($sp)
/* 00423130 0320F809 */  jalr  $t9
/* 00423134 27A40020 */   addiu $a0, $sp, 0x20
/* 00423138 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0042313C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00423140 27BD0030 */  addiu $sp, $sp, 0x30
/* 00423144 03E00008 */  jr    $ra
/* 00423148 00000000 */   nop   
    .type emit_optimize_level, @function
    .size emit_optimize_level, .-emit_optimize_level
    .end emit_optimize_level
)"");
