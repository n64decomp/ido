__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000C4F0:
    # 0043D690 report_error
    .ascii "                "

RO_1000C500:
    # 0043D690 report_error
    .ascii ", line "

RO_1000C507:
    # 0043D690 report_error
    .ascii " :  (ugen internal file "

RO_1000C51F:
    # 0043D690 report_error
    .ascii ": at your source line "

RO_1000C535:
    # 0043D690 report_error
    .ascii "ugen: "

RO_1000C53B:
    # 0043D968 assertion_error
    .ascii "Assertion failed                                                                "

RO_1000C58B:
    # 0043D968 assertion_error
    .asciz "report.p                                                                        "

.data
# 10016730
glabel err_tab
    # 0043D690 report_error
    .ascii "fix       info      warning   error     internal  \x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    .type err_tab, @object
    .size err_tab, .-err_tab # 64



.bss
    .balign 16
# 100214D0
glabel errors
    # 0043D650 reset_errors
    # 0043D690 report_error
    # 0043D8F4 has_errors
    .space 20
    .size errors, 20
    .type errors, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel reset_errors
    .ent reset_errors
/* 0043D650 3C1C0FBE */  .cpload $t9
/* 0043D654 279C2400 */  
/* 0043D658 0399E021 */  
/* 0043D65C 8F818968 */  lw     $at, %got(current_line)($gp)
/* 0043D660 8F8F8B9C */  lw     $t7, %got(errors)($gp)
/* 0043D664 24020001 */  li    $v0, 1
/* 0043D668 AC200000 */  sw    $zero, ($at)
/* 0043D66C 8F818B9C */  lw     $at, %got(errors)($gp)
/* 0043D670 00027080 */  sll   $t6, $v0, 2
/* 0043D674 01CF1821 */  addu  $v1, $t6, $t7
/* 0043D678 AC200000 */  sw    $zero, ($at)
/* 0043D67C AC60000C */  sw    $zero, 0xc($v1)
/* 0043D680 AC600008 */  sw    $zero, 8($v1)
/* 0043D684 AC600004 */  sw    $zero, 4($v1)
/* 0043D688 03E00008 */  jr    $ra
/* 0043D68C AC600000 */   sw    $zero, ($v1)
    .type reset_errors, @function
    .size reset_errors, .-reset_errors
    .end reset_errors

glabel report_error
    .ent report_error
    # 0040C210 write_instruction
    # 0040CF50 print_source
    # 0040F4C8 build_tree
    # 00414040 init_ibuffer
    # 004141CC grow_ibuffer
    # 0041462C create_local_label
    # 00420810 gen_entry_exit
    # 00422DB8 emit_file
    # 004235C4 fasm
    # 00423828 fop
    # 00424934 restore_from_temp
    # 00424F70 reg
    # 00425140 binary_regs
    # 00425AA0 move_to_dest
    # 00425D78 lsopc
    # 0042670C loadstore
    # 00428D14 eval_mov
    # 00429EE0 get_ops
    # 0042BDAC eval
    # 004357C4 func_004357C4
    # 0043698C new_lit
    # 00436D00 add_to_pool
    # 00437010 cmp_tree
    # 00437D40 cmp_tree_again
    # 00439910 find_non_special_reg
    # 0043A5E8 spill
    # 0043A888 spill_reg
    # 0043AB48 get_one_reg
    # 0043B0F8 get_fp_reg
    # 0043B478 spill_two_regs
    # 0043BC80 content_of
    # 0043BE04 dec_usage
    # 0043C098 free_reg
    # 0043C410 free_fp_reg
    # 0043C674 add_to_free_list
    # 0043C804 add_to_fp_free_list
    # 0043C994 remove_from_free_list
    # 0043CCA0 remove_from_fp_free_list
    # 0043CE54 check_no_used
    # 0043D1A4 get_free_fp_reg_special
    # 0043D3F8 get_free_reg_special
    # 0043D968 assertion_error
    # 0043DA98 get_data_area
    # 0043DD04 make_new_sym
    # 0043DFB0 gen_sym
    # 0043EA6C complex_insert_init
    # 0043F460 append_init
    # 0043FBF8 emit_init
    # 00440398 emit_symbol
    # 00440800 output_entry_point
    # 004409C0 change_label_number
    # 00440C8C make_new_temp
    # 00440EA0 gen_store
    # 004413F8 free_temp
    # 00441538 temp_offset
    # 00441680 temp_usage_count
    # 0044202C set_rewrite
    # 00442968 set_rewrite_indexed
    # 004432FC translate
    # 00446368 cse_equ
    # 00447150 check_vreg
    # 0044747C find_vreg_mtag
    # 00447884 assign_vreg
    # 004481CC uses
    # 0044A740 dup_tree
    # 0044AA84 rvalue
    # 0044B384 func_0044B384
    # 0044B640 func_0044B640
    # 0044BC78 func_0044BC78
    # 0044BF18 main
    # 0044EC1C emit_val
    # 0044F160 find_val_type
/* 0043D690 3C1C0FBE */  .cpload $t9
/* 0043D694 279C23C0 */  
/* 0043D698 0399E021 */  
/* 0043D69C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0043D6A0 AFA40028 */  sw    $a0, 0x28($sp)
/* 0043D6A4 93AE002B */  lbu   $t6, 0x2b($sp)
/* 0043D6A8 8F988B9C */  lw     $t8, %got(errors)($gp)
/* 0043D6AC 93A9002B */  lbu   $t1, 0x2b($sp)
/* 0043D6B0 000E7880 */  sll   $t7, $t6, 2
/* 0043D6B4 01F81021 */  addu  $v0, $t7, $t8
/* 0043D6B8 8C590000 */  lw    $t9, ($v0)
/* 0043D6BC 24010002 */  li    $at, 2
/* 0043D6C0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043D6C4 27280001 */  addiu $t0, $t9, 1
/* 0043D6C8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043D6CC AFB00014 */  sw    $s0, 0x14($sp)
/* 0043D6D0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0043D6D4 AFA60030 */  sw    $a2, 0x30($sp)
/* 0043D6D8 AFA70034 */  sw    $a3, 0x34($sp)
/* 0043D6DC 15210005 */  bne   $t1, $at, .L0043D6F4
/* 0043D6E0 AC480000 */   sw    $t0, ($v0)
/* 0043D6E4 8F8A8964 */  lw     $t2, %got(print_warnings)($gp)
/* 0043D6E8 914A0000 */  lbu   $t2, ($t2)
/* 0043D6EC 1140006F */  beqz  $t2, .L0043D8AC
/* 0043D6F0 00000000 */   nop   
.L0043D6F4:
/* 0043D6F4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043D6F8 8F908950 */  lw     $s0, %got(err)($gp)
/* 0043D6FC 8F858038 */  lw    $a1, %got(RO_1000C535)($gp)
/* 0043D700 24060006 */  li    $a2, 6
/* 0043D704 24070006 */  li    $a3, 6
/* 0043D708 AFA20024 */  sw    $v0, 0x24($sp)
/* 0043D70C 8E040000 */  lw    $a0, ($s0)
/* 0043D710 0320F809 */  jalr  $t9
/* 0043D714 24A5C535 */   addiu $a1, %lo(RO_1000C535) # addiu $a1, $a1, -0x3acb
/* 0043D718 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D71C 93AB002B */  lbu   $t3, 0x2b($sp)
/* 0043D720 8E040000 */  lw    $a0, ($s0)
/* 0043D724 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043D728 000B6080 */  sll   $t4, $t3, 2
/* 0043D72C 8F8D8900 */  lw     $t5, %got(err_tab)($gp)
/* 0043D730 018B6021 */  addu  $t4, $t4, $t3
/* 0043D734 000C6040 */  sll   $t4, $t4, 1
/* 0043D738 2406000A */  li    $a2, 10
/* 0043D73C 2407000A */  li    $a3, 10
/* 0043D740 0320F809 */  jalr  $t9
/* 0043D744 018D2821 */   addu  $a1, $t4, $t5
/* 0043D748 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D74C 8E040000 */  lw    $a0, ($s0)
/* 0043D750 24060016 */  li    $a2, 22
/* 0043D754 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043D758 8F858038 */  lw    $a1, %got(RO_1000C51F)($gp)
/* 0043D75C 24070016 */  li    $a3, 22
/* 0043D760 0320F809 */  jalr  $t9
/* 0043D764 24A5C51F */   addiu $a1, %lo(RO_1000C51F) # addiu $a1, $a1, -0x3ae1
/* 0043D768 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D76C 8E040000 */  lw    $a0, ($s0)
/* 0043D770 00003025 */  move  $a2, $zero
/* 0043D774 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0043D778 8F858968 */  lw     $a1, %got(current_line)($gp)
/* 0043D77C 2407000A */  li    $a3, 10
/* 0043D780 0320F809 */  jalr  $t9
/* 0043D784 8CA50000 */   lw    $a1, ($a1)
/* 0043D788 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D78C 8E040000 */  lw    $a0, ($s0)
/* 0043D790 24060018 */  li    $a2, 24
/* 0043D794 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043D798 8F858038 */  lw    $a1, %got(RO_1000C507)($gp)
/* 0043D79C 24070018 */  li    $a3, 24
/* 0043D7A0 0320F809 */  jalr  $t9
/* 0043D7A4 24A5C507 */   addiu $a1, %lo(RO_1000C507) # addiu $a1, $a1, -0x3af9
/* 0043D7A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D7AC 8E040000 */  lw    $a0, ($s0)
/* 0043D7B0 27A50030 */  addiu $a1, $sp, 0x30
/* 0043D7B4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043D7B8 24060050 */  li    $a2, 80
/* 0043D7BC 00003825 */  move  $a3, $zero
/* 0043D7C0 0320F809 */  jalr  $t9
/* 0043D7C4 00000000 */   nop   
/* 0043D7C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D7CC 8E040000 */  lw    $a0, ($s0)
/* 0043D7D0 24060007 */  li    $a2, 7
/* 0043D7D4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043D7D8 8F858038 */  lw    $a1, %got(RO_1000C500)($gp)
/* 0043D7DC 24070007 */  li    $a3, 7
/* 0043D7E0 0320F809 */  jalr  $t9
/* 0043D7E4 24A5C500 */   addiu $a1, %lo(RO_1000C500) # addiu $a1, $a1, -0x3b00
/* 0043D7E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D7EC 8E040000 */  lw    $a0, ($s0)
/* 0043D7F0 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0043D7F4 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0043D7F8 00003025 */  move  $a2, $zero
/* 0043D7FC 2407000A */  li    $a3, 10
/* 0043D800 0320F809 */  jalr  $t9
/* 0043D804 00000000 */   nop   
/* 0043D808 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D80C 8E040000 */  lw    $a0, ($s0)
/* 0043D810 24050029 */  li    $a1, 41
/* 0043D814 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0043D818 24060001 */  li    $a2, 1
/* 0043D81C 2407000A */  li    $a3, 10
/* 0043D820 0320F809 */  jalr  $t9
/* 0043D824 AFA40020 */   sw    $a0, 0x20($sp)
/* 0043D828 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D82C 8FA40020 */  lw    $a0, 0x20($sp)
/* 0043D830 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0043D834 0320F809 */  jalr  $t9
/* 0043D838 00000000 */   nop   
/* 0043D83C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D840 8E040000 */  lw    $a0, ($s0)
/* 0043D844 24060010 */  li    $a2, 16
/* 0043D848 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043D84C 8F858038 */  lw    $a1, %got(RO_1000C4F0)($gp)
/* 0043D850 24070010 */  li    $a3, 16
/* 0043D854 0320F809 */  jalr  $t9
/* 0043D858 24A5C4F0 */   addiu $a1, %lo(RO_1000C4F0) # addiu $a1, $a1, -0x3b10
/* 0043D85C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D860 8E040000 */  lw    $a0, ($s0)
/* 0043D864 27A50080 */  addiu $a1, $sp, 0x80
/* 0043D868 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0043D86C 24060050 */  li    $a2, 80
/* 0043D870 00003825 */  move  $a3, $zero
/* 0043D874 0320F809 */  jalr  $t9
/* 0043D878 00000000 */   nop   
/* 0043D87C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D880 8E040000 */  lw    $a0, ($s0)
/* 0043D884 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0043D888 0320F809 */  jalr  $t9
/* 0043D88C 00000000 */   nop   
/* 0043D890 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D894 8E040000 */  lw    $a0, ($s0)
/* 0043D898 8F998084 */  lw    $t9, %call16(fflush)($gp)
/* 0043D89C 0320F809 */  jalr  $t9
/* 0043D8A0 00000000 */   nop   
/* 0043D8A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D8A8 8FA20024 */  lw    $v0, 0x24($sp)
.L0043D8AC:
/* 0043D8AC 8F8E8B9C */  lw     $t6, %got(errors)($gp)
/* 0043D8B0 25CE0010 */  addiu $t6, $t6, 0x10
/* 0043D8B4 544E000B */  bnel  $v0, $t6, .L0043D8E4
/* 0043D8B8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0043D8BC 8F8F89E0 */  lw     $t7, %got(debug_ugen)($gp)
/* 0043D8C0 91EF0000 */  lbu   $t7, ($t7)
/* 0043D8C4 55E00007 */  bnel  $t7, $zero, .L0043D8E4
/* 0043D8C8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0043D8CC 8F99880C */  lw    $t9, %call16(exit)($gp)
/* 0043D8D0 24040001 */  li    $a0, 1
/* 0043D8D4 0320F809 */  jalr  $t9
/* 0043D8D8 00000000 */   nop   
/* 0043D8DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043D8E0 8FBF001C */  lw    $ra, 0x1c($sp)
.L0043D8E4:
/* 0043D8E4 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043D8E8 27BD0028 */  addiu $sp, $sp, 0x28
/* 0043D8EC 03E00008 */  jr    $ra
/* 0043D8F0 00000000 */   nop   
    .type report_error, @function
    .size report_error, .-report_error
    .end report_error

glabel has_errors
    .ent has_errors
    # 0044BF18 main
/* 0043D8F4 3C1C0FBE */  .cpload $t9
/* 0043D8F8 279C215C */  
/* 0043D8FC 0399E021 */  
/* 0043D900 2C810002 */  sltiu $at, $a0, 2
/* 0043D904 1420000E */  bnez  $at, .L0043D940
/* 0043D908 00000000 */   nop   
/* 0043D90C 8F828B9C */  lw     $v0, %got(errors)($gp)
/* 0043D910 8C430010 */  lw    $v1, 0x10($v0)
/* 0043D914 0003182B */  sltu  $v1, $zero, $v1
/* 0043D918 10600007 */  beqz  $v1, .L0043D938
/* 0043D91C 00000000 */   nop   
/* 0043D920 8C430008 */  lw    $v1, 8($v0)
/* 0043D924 0003182B */  sltu  $v1, $zero, $v1
/* 0043D928 10600003 */  beqz  $v1, .L0043D938
/* 0043D92C 00000000 */   nop   
/* 0043D930 8C43000C */  lw    $v1, 0xc($v0)
/* 0043D934 0003182B */  sltu  $v1, $zero, $v1
.L0043D938:
/* 0043D938 03E00008 */  jr    $ra
/* 0043D93C 00601025 */   move  $v0, $v1

.L0043D940:
/* 0043D940 8F828B9C */  lw     $v0, %got(errors)($gp)
/* 0043D944 8C430010 */  lw    $v1, 0x10($v0)
/* 0043D948 0003182B */  sltu  $v1, $zero, $v1
/* 0043D94C 50600004 */  beql  $v1, $zero, .L0043D960
/* 0043D950 00601025 */   move  $v0, $v1
/* 0043D954 8C43000C */  lw    $v1, 0xc($v0)
/* 0043D958 0003182B */  sltu  $v1, $zero, $v1
/* 0043D95C 00601025 */  move  $v0, $v1
.L0043D960:
/* 0043D960 03E00008 */  jr    $ra
/* 0043D964 00000000 */   nop   
    .type has_errors, @function
    .size has_errors, .-has_errors
    .end has_errors

glabel assertion_error
    .ent assertion_error
/* 0043D968 3C1C0FBE */  .cpload $t9
/* 0043D96C 279C20E8 */  
/* 0043D970 0399E021 */  
/* 0043D974 8F8E8038 */  lw    $t6, %got(RO_1000C58B)($gp)
/* 0043D978 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 0043D97C AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043D980 25CEC58B */  addiu $t6, %lo(RO_1000C58B) # addiu $t6, $t6, -0x3a75
/* 0043D984 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043D988 25C80048 */  addiu $t0, $t6, 0x48
/* 0043D98C 03A0C825 */  move  $t9, $sp
/* 0043D990 24040004 */  li    $a0, 4
/* 0043D994 2405004F */  li    $a1, 79
.L0043D998:
/* 0043D998 89D80000 */  lwl   $t8, ($t6)
/* 0043D99C 99D80003 */  lwr   $t8, 3($t6)
/* 0043D9A0 25CE000C */  addiu $t6, $t6, 0xc
/* 0043D9A4 2739000C */  addiu $t9, $t9, 0xc
/* 0043D9A8 AB38FFFC */  swl   $t8, -4($t9)
/* 0043D9AC BB38FFFF */  swr   $t8, -1($t9)
/* 0043D9B0 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0043D9B4 99CFFFFB */  lwr   $t7, -5($t6)
/* 0043D9B8 AB2F0000 */  swl   $t7, ($t9)
/* 0043D9BC BB2F0003 */  swr   $t7, 3($t9)
/* 0043D9C0 89D8FFFC */  lwl   $t8, -4($t6)
/* 0043D9C4 99D8FFFF */  lwr   $t8, -1($t6)
/* 0043D9C8 AB380004 */  swl   $t8, 4($t9)
/* 0043D9CC 15C8FFF2 */  bne   $t6, $t0, .L0043D998
/* 0043D9D0 BB380007 */   swr   $t8, 7($t9)
/* 0043D9D4 89D80000 */  lwl   $t8, ($t6)
/* 0043D9D8 99D80003 */  lwr   $t8, 3($t6)
/* 0043D9DC 8F898038 */  lw    $t1, %got(RO_1000C53B)($gp)
/* 0043D9E0 03A06025 */  move  $t4, $sp
/* 0043D9E4 AB380008 */  swl   $t8, 8($t9)
/* 0043D9E8 BB38000B */  swr   $t8, 0xb($t9)
/* 0043D9EC 89CF0004 */  lwl   $t7, 4($t6)
/* 0043D9F0 99CF0007 */  lwr   $t7, 7($t6)
/* 0043D9F4 2529C53B */  addiu $t1, %lo(RO_1000C53B) # addiu $t1, $t1, -0x3ac5
/* 0043D9F8 252D0048 */  addiu $t5, $t1, 0x48
/* 0043D9FC AB2F000C */  swl   $t7, 0xc($t9)
/* 0043DA00 BB2F000F */  swr   $t7, 0xf($t9)
.L0043DA04:
/* 0043DA04 892B0000 */  lwl   $t3, ($t1)
/* 0043DA08 992B0003 */  lwr   $t3, 3($t1)
/* 0043DA0C 2529000C */  addiu $t1, $t1, 0xc
/* 0043DA10 258C000C */  addiu $t4, $t4, 0xc
/* 0043DA14 A98B004C */  swl   $t3, 0x4c($t4)
/* 0043DA18 B98B004F */  swr   $t3, 0x4f($t4)
/* 0043DA1C 892AFFF8 */  lwl   $t2, -8($t1)
/* 0043DA20 992AFFFB */  lwr   $t2, -5($t1)
/* 0043DA24 A98A0050 */  swl   $t2, 0x50($t4)
/* 0043DA28 B98A0053 */  swr   $t2, 0x53($t4)
/* 0043DA2C 892BFFFC */  lwl   $t3, -4($t1)
/* 0043DA30 992BFFFF */  lwr   $t3, -1($t1)
/* 0043DA34 A98B0054 */  swl   $t3, 0x54($t4)
/* 0043DA38 152DFFF2 */  bne   $t1, $t5, .L0043DA04
/* 0043DA3C B98B0057 */   swr   $t3, 0x57($t4)
/* 0043DA40 892B0000 */  lwl   $t3, ($t1)
/* 0043DA44 992B0003 */  lwr   $t3, 3($t1)
/* 0043DA48 A98B0058 */  swl   $t3, 0x58($t4)
/* 0043DA4C B98B005B */  swr   $t3, 0x5b($t4)
/* 0043DA50 892A0004 */  lwl   $t2, 4($t1)
/* 0043DA54 992A0007 */  lwr   $t2, 7($t1)
/* 0043DA58 A98A005C */  swl   $t2, 0x5c($t4)
/* 0043DA5C B98A005F */  swr   $t2, 0x5f($t4)
/* 0043DA60 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043DA64 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043DA68 8FA60008 */  lw    $a2, 8($sp)
/* 0043DA6C 0320F809 */  jalr  $t9
/* 0043DA70 00000000 */   nop   
/* 0043DA74 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043DA78 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043DA7C 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 0043DA80 03E00008 */  jr    $ra
/* 0043DA84 00000000 */   nop   
    .type assertion_error, @function
    .size assertion_error, .-assertion_error
    .end assertion_error
)"");
