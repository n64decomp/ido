__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000F4A0:
    # 00492770 read_char_range
    .asciz "Exceeds range in read_char; input is '%c'.\n"

RO_1000F4CC:
    # 00492864 readln
    .asciz "Warning: readln attempted from unopened file.\n"

RO_1000F4FC:
    # 004929C8 read_string
    .asciz "Warning: read of a string attempted from unopened file.\n"

RO_1000F538:
    # 00492B98 read_boolean
    .asciz "Warning: read of a boolean attempted from unopened file.\n"

RO_1000F574:
    # 00492B98 read_boolean
    .asciz "false"

RO_1000F57C:
    # 00492B98 read_boolean
    .asciz "true"

RO_1000F584:
    # 00492B98 read_boolean
    .asciz "Illegal boolean value '%s'.\n"

RO_1000F5A4:
    # 00492E6C read_enum
    .asciz "Warning: read of enumerated type attempted from unopened file.\n"

RO_1000F5E4:
    # 00492E6C read_enum
    .asciz "Enumerated value '%s' not within type.\n"

RO_1000F60C:
    # 004931EC read_integer
    .asciz "Warning: read of integer attempted from unopened file.\n"

RO_1000F644:
    # 004931EC read_integer
    .asciz "Digit expected in read_integer; input is '%c'.\n"

RO_1000F674:
    # 004931EC read_integer
    .asciz "Digit expected in read_integer; input is '%c'.\n"

RO_1000F6A4:
    # 004931EC read_integer
    .asciz "Overflow in read_integer.\n"

RO_1000F6C0:
    # 00493734 read_integer_range
    .asciz "Exceeds range in read_integer; input is '%d'.\n"

RO_1000F6F0:
    # 004937BC read_cardinal
    .asciz "Warning: read of cardinal attempted from unopened file.\n"

RO_1000F72C:
    # 004937BC read_cardinal
    .asciz "Digit expected in read_cardinal; input is '%c'.\n"

RO_1000F760:
    # 004937BC read_cardinal
    .asciz "Digit expected in read_cardinal; input is '%c'.\n"

RO_1000F794:
    # 004937BC read_cardinal
    .asciz "Overflow in read_cardinal.\n"

RO_1000F7B0:
    # 00493C50 read_double
    .asciz "Warning: read of double attempted from unopened file.\n"

RO_1000F7E8:
    # 00493C50 read_double
    .asciz "Digit expected in read_double; input is '%c'.\n"

RO_1000F818:
    # 00493C50 read_double
    .asciz "Digit expected in read_double; input is '%c'.\n"

RO_1000F848:
    # 00493C50 read_double
    .asciz "Digit expected in exponent in read_double; input is '%c'.\n"

RO_1000F884:
    # 0049462C read_int64
    .asciz "Warning: read of int64 attempted from unopened file.\n"

RO_1000F8BC:
    # 0049462C read_int64
    .asciz "Digit expected in read_integer64; input is '%c'.\n"

RO_1000F8F0:
    # 0049462C read_int64
    .asciz "Digit expected in read_integer64; input is '%c'.\n"

RO_1000F924:
    # 0049462C read_int64
    .asciz "Overflow in read_integer64.\n"

RO_1000F944:
    # 00494D90 read_int64_range
    .asciz "Exceeds range in read_integer64; input is '%d'.\n"

RO_1000F978:
    # 00494E5C read_card64
    .asciz "Warning: read of cardinal attempted from unopened file.\n"

RO_1000F9B4:
    # 00494E5C read_card64
    .asciz "Digit expected in read_cardinal64; input is '%c'.\n"

RO_1000F9E8:
    # 00494E5C read_card64
    .asciz "Digit expected in read_cardinal64; input is '%c'.\n"

RO_1000FA1C:
    # 00494E5C read_card64
    .asciz "Overflow in read_cardinal64.\n"

.data
D_10011B70:
    # 004931EC read_integer
    # 004937BC read_cardinal
    # 00493C50 read_double
    # 0049462C read_int64
    # 00494E5C read_card64
    .byte 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1a,0x1b,0x1c,0x1d,0x1e,0x1f,0x20,0x21,0x22,0x23,0xff,0xff,0xff,0xff,0xff,0xff,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1a,0x1b,0x1c,0x1d,0x1e,0x1f,0x20,0x21,0x22,0x23,0xff,0xff,0xff,0xff,0xff


.bss
B_1001C2C0:
    # 00492410 eof
    # 004924BC eoln
    # 00492588 peek_char
    # 004931EC read_integer
    # 004937BC read_cardinal
    # 00493C50 read_double
    # 0049462C read_int64
    # 00494E5C read_card64
    .space 32


.bss
    .balign 4
# 1001C690
glabel _libp_pascal_file_counter
    # 00497C90 rewrite
    # 00498034 reset
    # 00498640 exit
    .space 4
    .size _libp_pascal_file_counter, 4
    .type _libp_pascal_file_counter, @object

    .balign 4
# 1001C694
glabel _libp_ansi_pascal
    # 004931EC read_integer
    # 004937BC read_cardinal
    # 00493C50 read_double
    # 0049462C read_int64
    # 00494E5C read_card64
    .space 4
    .size _libp_ansi_pascal, 4
    .type _libp_ansi_pascal, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel eof
    .ent eof
    # 00434434 func_00434434
/* 00492410 3C1C0FB8 */  .cpload $t9
/* 00492414 279C7E80 */  
/* 00492418 0399E021 */  
/* 0049241C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00492420 2C830001 */  sltiu $v1, $a0, 1
/* 00492424 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00492428 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0049242C 1460001E */  bnez  $v1, .L004924A8
/* 00492430 00802825 */   move  $a1, $a0
/* 00492434 9083000C */  lbu   $v1, 0xc($a0)
/* 00492438 30630002 */  andi  $v1, $v1, 2
/* 0049243C 0003182B */  sltu  $v1, $zero, $v1
/* 00492440 5460001A */  bnezl $v1, .L004924AC
/* 00492444 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00492448 8C830000 */  lw    $v1, ($a0)
/* 0049244C 28630001 */  slti  $v1, $v1, 1
/* 00492450 50600016 */  beql  $v1, $zero, .L004924AC
/* 00492454 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00492458 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049245C AFA50020 */  sw    $a1, 0x20($sp)
/* 00492460 0320F809 */  jalr  $t9
/* 00492464 00000000 */   nop   
/* 00492468 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0049246C 2401FFFF */  li    $at, -1
/* 00492470 8FA50020 */  lw    $a1, 0x20($sp)
/* 00492474 8F838048 */  lw    $v1, %got(B_1001C2C0)($gp)
/* 00492478 00402025 */  move  $a0, $v0
/* 0049247C 2463C2C0 */  addiu $v1, %lo(B_1001C2C0) # addiu $v1, $v1, -0x3d40
/* 00492480 14410003 */  bne   $v0, $at, .L00492490
/* 00492484 AC620000 */   sw    $v0, ($v1)
/* 00492488 10000006 */  b     .L004924A4
/* 0049248C 24040001 */   li    $a0, 1
.L00492490:
/* 00492490 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00492494 0320F809 */  jalr  $t9
/* 00492498 00000000 */   nop   
/* 0049249C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004924A0 00002025 */  move  $a0, $zero
.L004924A4:
/* 004924A4 0004182B */  sltu  $v1, $zero, $a0
.L004924A8:
/* 004924A8 8FBF001C */  lw    $ra, 0x1c($sp)
.L004924AC:
/* 004924AC 27BD0020 */  addiu $sp, $sp, 0x20
/* 004924B0 00601025 */  move  $v0, $v1
/* 004924B4 03E00008 */  jr    $ra
/* 004924B8 00000000 */   nop   
    .type eof, @function
    .size eof, .-eof
    .end eof

glabel eoln
    .ent eoln
    # 0041FD3C genloadnum
    # 0042BF08 reemit
/* 004924BC 3C1C0FB8 */  .cpload $t9
/* 004924C0 279C7DD4 */  
/* 004924C4 0399E021 */  
/* 004924C8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004924CC 2C830001 */  sltiu $v1, $a0, 1
/* 004924D0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004924D4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004924D8 14600026 */  bnez  $v1, .L00492574
/* 004924DC 00802825 */   move  $a1, $a0
/* 004924E0 9083000C */  lbu   $v1, 0xc($a0)
/* 004924E4 30630002 */  andi  $v1, $v1, 2
/* 004924E8 0003182B */  sltu  $v1, $zero, $v1
/* 004924EC 54600022 */  bnezl $v1, .L00492578
/* 004924F0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004924F4 8C830000 */  lw    $v1, ($a0)
/* 004924F8 28630001 */  slti  $v1, $v1, 1
/* 004924FC 5060001A */  beql  $v1, $zero, .L00492568
/* 00492500 8CAE0004 */   lw    $t6, 4($a1)
/* 00492504 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492508 AFA50020 */  sw    $a1, 0x20($sp)
/* 0049250C 0320F809 */  jalr  $t9
/* 00492510 00000000 */   nop   
/* 00492514 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00492518 2401FFFF */  li    $at, -1
/* 0049251C 8FA50020 */  lw    $a1, 0x20($sp)
/* 00492520 8F838048 */  lw    $v1, %got(B_1001C2C0)($gp)
/* 00492524 00402025 */  move  $a0, $v0
/* 00492528 2463C2C0 */  addiu $v1, %lo(B_1001C2C0) # addiu $v1, $v1, -0x3d40
/* 0049252C 14410003 */  bne   $v0, $at, .L0049253C
/* 00492530 AC620000 */   sw    $v0, ($v1)
/* 00492534 10000008 */  b     .L00492558
/* 00492538 24040001 */   li    $a0, 1
.L0049253C:
/* 0049253C 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00492540 AFA50020 */  sw    $a1, 0x20($sp)
/* 00492544 0320F809 */  jalr  $t9
/* 00492548 00000000 */   nop   
/* 0049254C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00492550 8FA50020 */  lw    $a1, 0x20($sp)
/* 00492554 00002025 */  move  $a0, $zero
.L00492558:
/* 00492558 0004182B */  sltu  $v1, $zero, $a0
/* 0049255C 54600006 */  bnezl $v1, .L00492578
/* 00492560 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00492564 8CAE0004 */  lw    $t6, 4($a1)
.L00492568:
/* 00492568 91C30000 */  lbu   $v1, ($t6)
/* 0049256C 3863000A */  xori  $v1, $v1, 0xa
/* 00492570 2C630001 */  sltiu $v1, $v1, 1
.L00492574:
/* 00492574 8FBF001C */  lw    $ra, 0x1c($sp)
.L00492578:
/* 00492578 27BD0020 */  addiu $sp, $sp, 0x20
/* 0049257C 00601025 */  move  $v0, $v1
/* 00492580 03E00008 */  jr    $ra
/* 00492584 00000000 */   nop   
    .type eoln, @function
    .size eoln, .-eoln
    .end eoln

glabel peek_char
    .ent peek_char
    # 0041FD3C genloadnum
    # 00480818 eopage
/* 00492588 3C1C0FB8 */  .cpload $t9
/* 0049258C 279C7D08 */  
/* 00492590 0399E021 */  
/* 00492594 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00492598 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0049259C AFBC0018 */  sw    $gp, 0x18($sp)
/* 004925A0 1080001B */  beqz  $a0, .L00492610
/* 004925A4 00802825 */   move  $a1, $a0
/* 004925A8 8C8E0000 */  lw    $t6, ($a0)
/* 004925AC 5DC0001B */  bgtzl $t6, .L0049261C
/* 004925B0 8CAF0004 */   lw    $t7, 4($a1)
/* 004925B4 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004925B8 AFA50020 */  sw    $a1, 0x20($sp)
/* 004925BC 0320F809 */  jalr  $t9
/* 004925C0 00000000 */   nop   
/* 004925C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004925C8 2401FFFF */  li    $at, -1
/* 004925CC 8FA50020 */  lw    $a1, 0x20($sp)
/* 004925D0 8F838048 */  lw    $v1, %got(B_1001C2C0)($gp)
/* 004925D4 00402025 */  move  $a0, $v0
/* 004925D8 2463C2C0 */  addiu $v1, %lo(B_1001C2C0) # addiu $v1, $v1, -0x3d40
/* 004925DC 14410003 */  bne   $v0, $at, .L004925EC
/* 004925E0 AC620000 */   sw    $v0, ($v1)
/* 004925E4 10000008 */  b     .L00492608
/* 004925E8 24030001 */   li    $v1, 1
.L004925EC:
/* 004925EC 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 004925F0 AFA50020 */  sw    $a1, 0x20($sp)
/* 004925F4 0320F809 */  jalr  $t9
/* 004925F8 00000000 */   nop   
/* 004925FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00492600 8FA50020 */  lw    $a1, 0x20($sp)
/* 00492604 00001825 */  move  $v1, $zero
.L00492608:
/* 00492608 50600004 */  beql  $v1, $zero, .L0049261C
/* 0049260C 8CAF0004 */   lw    $t7, 4($a1)
.L00492610:
/* 00492610 10000008 */  b     .L00492634
/* 00492614 24020020 */   li    $v0, 32
/* 00492618 8CAF0004 */  lw    $t7, 4($a1)
.L0049261C:
/* 0049261C 2401000A */  li    $at, 10
/* 00492620 91E30000 */  lbu   $v1, ($t7)
/* 00492624 54610003 */  bnel  $v1, $at, .L00492634
/* 00492628 00601025 */   move  $v0, $v1
/* 0049262C 24030020 */  li    $v1, 32
/* 00492630 00601025 */  move  $v0, $v1
.L00492634:
/* 00492634 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00492638 27BD0020 */  addiu $sp, $sp, 0x20
/* 0049263C 03E00008 */  jr    $ra
/* 00492640 00000000 */   nop   
    .type peek_char, @function
    .size peek_char, .-peek_char
    .end peek_char

glabel next_char
    .ent next_char
    # 0041FD3C genloadnum
    # 0042BF08 reemit
    # 00480854 readpage
/* 00492644 3C1C0FB8 */  .cpload $t9
/* 00492648 279C7C4C */  
/* 0049264C 0399E021 */  
/* 00492650 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00492654 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00492658 10800016 */  beqz  $a0, .L004926B4
/* 0049265C AFBC0018 */   sw    $gp, 0x18($sp)
/* 00492660 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00492664 8DCE0000 */  lw    $t6, ($t6)
/* 00492668 51C00007 */  beql  $t6, $zero, .L00492688
/* 0049266C 8C8F0000 */   lw    $t7, ($a0)
/* 00492670 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00492674 0320F809 */  jalr  $t9
/* 00492678 00000000 */   nop   
/* 0049267C 1000000D */  b     .L004926B4
/* 00492680 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00492684 8C8F0000 */  lw    $t7, ($a0)
.L00492688:
/* 00492688 25F9FFFF */  addiu $t9, $t7, -1
/* 0049268C 07210006 */  bgez  $t9, .L004926A8
/* 00492690 AC990000 */   sw    $t9, ($a0)
/* 00492694 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492698 0320F809 */  jalr  $t9
/* 0049269C 00000000 */   nop   
/* 004926A0 10000004 */  b     .L004926B4
/* 004926A4 8FBC0018 */   lw    $gp, 0x18($sp)
.L004926A8:
/* 004926A8 8C880004 */  lw    $t0, 4($a0)
/* 004926AC 25090001 */  addiu $t1, $t0, 1
/* 004926B0 AC890004 */  sw    $t1, 4($a0)
.L004926B4:
/* 004926B4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004926B8 27BD0020 */  addiu $sp, $sp, 0x20
/* 004926BC 03E00008 */  jr    $ra
/* 004926C0 00000000 */   nop   
    .type next_char, @function
    .size next_char, .-next_char
    .end next_char

glabel read_char
    .ent read_char
    # 0041FD3C genloadnum
    # 0042BF08 reemit
/* 004926C4 3C1C0FB8 */  .cpload $t9
/* 004926C8 279C7BCC */  
/* 004926CC 0399E021 */  
/* 004926D0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004926D4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004926D8 1080001F */  beqz  $a0, .L00492758
/* 004926DC AFBC0018 */   sw    $gp, 0x18($sp)
/* 004926E0 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 004926E4 8DCE0000 */  lw    $t6, ($t6)
/* 004926E8 51C00008 */  beql  $t6, $zero, .L0049270C
/* 004926EC 8C8F0000 */   lw    $t7, ($a0)
/* 004926F0 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004926F4 0320F809 */  jalr  $t9
/* 004926F8 00000000 */   nop   
/* 004926FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00492700 10000010 */  b     .L00492744
/* 00492704 00401825 */   move  $v1, $v0
/* 00492708 8C8F0000 */  lw    $t7, ($a0)
.L0049270C:
/* 0049270C 25F9FFFF */  addiu $t9, $t7, -1
/* 00492710 07210007 */  bgez  $t9, .L00492730
/* 00492714 AC990000 */   sw    $t9, ($a0)
/* 00492718 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049271C 0320F809 */  jalr  $t9
/* 00492720 00000000 */   nop   
/* 00492724 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00492728 10000005 */  b     .L00492740
/* 0049272C 00402825 */   move  $a1, $v0
.L00492730:
/* 00492730 8C820004 */  lw    $v0, 4($a0)
/* 00492734 90450000 */  lbu   $a1, ($v0)
/* 00492738 24480001 */  addiu $t0, $v0, 1
/* 0049273C AC880004 */  sw    $t0, 4($a0)
.L00492740:
/* 00492740 00A01825 */  move  $v1, $a1
.L00492744:
/* 00492744 2401000A */  li    $at, 10
/* 00492748 10610003 */  beq   $v1, $at, .L00492758
/* 0049274C 2401FFFF */   li    $at, -1
/* 00492750 54610003 */  bnel  $v1, $at, .L00492760
/* 00492754 8FBF001C */   lw    $ra, 0x1c($sp)
.L00492758:
/* 00492758 24030020 */  li    $v1, 32
/* 0049275C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00492760:
/* 00492760 27BD0020 */  addiu $sp, $sp, 0x20
/* 00492764 00601025 */  move  $v0, $v1
/* 00492768 03E00008 */  jr    $ra
/* 0049276C 00000000 */   nop   
    .type read_char, @function
    .size read_char, .-read_char
    .end read_char

glabel read_char_range
    .ent read_char_range
/* 00492770 3C1C0FB8 */  .cpload $t9
/* 00492774 279C7B20 */  
/* 00492778 0399E021 */  
/* 0049277C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00492780 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00492784 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00492788 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0049278C 1080001F */  beqz  $a0, .L0049280C
/* 00492790 AFA60030 */   sw    $a2, 0x30($sp)
/* 00492794 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00492798 8DCE0000 */  lw    $t6, ($t6)
/* 0049279C 51C00008 */  beql  $t6, $zero, .L004927C0
/* 004927A0 8C8F0000 */   lw    $t7, ($a0)
/* 004927A4 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004927A8 0320F809 */  jalr  $t9
/* 004927AC 00000000 */   nop   
/* 004927B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004927B4 10000010 */  b     .L004927F8
/* 004927B8 00403025 */   move  $a2, $v0
/* 004927BC 8C8F0000 */  lw    $t7, ($a0)
.L004927C0:
/* 004927C0 25F9FFFF */  addiu $t9, $t7, -1
/* 004927C4 07210007 */  bgez  $t9, .L004927E4
/* 004927C8 AC990000 */   sw    $t9, ($a0)
/* 004927CC 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004927D0 0320F809 */  jalr  $t9
/* 004927D4 00000000 */   nop   
/* 004927D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004927DC 10000005 */  b     .L004927F4
/* 004927E0 00401825 */   move  $v1, $v0
.L004927E4:
/* 004927E4 8C820004 */  lw    $v0, 4($a0)
/* 004927E8 90430000 */  lbu   $v1, ($v0)
/* 004927EC 24480001 */  addiu $t0, $v0, 1
/* 004927F0 AC880004 */  sw    $t0, 4($a0)
.L004927F4:
/* 004927F4 00603025 */  move  $a2, $v1
.L004927F8:
/* 004927F8 2401000A */  li    $at, 10
/* 004927FC 10C10003 */  beq   $a2, $at, .L0049280C
/* 00492800 2401FFFF */   li    $at, -1
/* 00492804 54C10003 */  bnel  $a2, $at, .L00492814
/* 00492808 8FA9002C */   lw    $t1, 0x2c($sp)
.L0049280C:
/* 0049280C 24060020 */  li    $a2, 32
/* 00492810 8FA9002C */  lw    $t1, 0x2c($sp)
.L00492814:
/* 00492814 8FAA0030 */  lw    $t2, 0x30($sp)
/* 00492818 00C9082B */  sltu  $at, $a2, $t1
/* 0049281C 14200003 */  bnez  $at, .L0049282C
/* 00492820 0146082B */   sltu  $at, $t2, $a2
/* 00492824 5020000B */  beql  $at, $zero, .L00492854
/* 00492828 8FBF001C */   lw    $ra, 0x1c($sp)
.L0049282C:
/* 0049282C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00492830 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00492834 8F858044 */  lw    $a1, %got(RO_1000F4A0)($gp)
/* 00492838 AFA60024 */  sw    $a2, 0x24($sp)
/* 0049283C 24840020 */  addiu $a0, $a0, 0x20
/* 00492840 0320F809 */  jalr  $t9
/* 00492844 24A5F4A0 */   addiu $a1, %lo(RO_1000F4A0) # addiu $a1, $a1, -0xb60
/* 00492848 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0049284C 8FA60024 */  lw    $a2, 0x24($sp)
/* 00492850 8FBF001C */  lw    $ra, 0x1c($sp)
.L00492854:
/* 00492854 27BD0028 */  addiu $sp, $sp, 0x28
/* 00492858 00C01025 */  move  $v0, $a2
/* 0049285C 03E00008 */  jr    $ra
/* 00492860 00000000 */   nop   
    .type read_char_range, @function
    .size read_char_range, .-read_char_range
    .end read_char_range

glabel readln
    .ent readln
    # 0041FD3C genloadnum
    # 0042BF08 reemit
    # 00434434 func_00434434
/* 00492864 3C1C0FB8 */  .cpload $t9
/* 00492868 279C7A2C */  
/* 0049286C 0399E021 */  
/* 00492870 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00492874 AFB00018 */  sw    $s0, 0x18($sp)
/* 00492878 00808025 */  move  $s0, $a0
/* 0049287C AFBF002C */  sw    $ra, 0x2c($sp)
/* 00492880 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00492884 AFB30024 */  sw    $s3, 0x24($sp)
/* 00492888 AFB20020 */  sw    $s2, 0x20($sp)
/* 0049288C 14800009 */  bnez  $a0, .L004928B4
/* 00492890 AFB1001C */   sw    $s1, 0x1c($sp)
/* 00492894 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00492898 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 0049289C 8F858044 */  lw    $a1, %got(RO_1000F4CC)($gp)
/* 004928A0 24840020 */  addiu $a0, $a0, 0x20
/* 004928A4 0320F809 */  jalr  $t9
/* 004928A8 24A5F4CC */   addiu $a1, %lo(RO_1000F4CC) # addiu $a1, $a1, -0xb34
/* 004928AC 1000003F */  b     .L004929AC
/* 004928B0 8FBC0028 */   lw    $gp, 0x28($sp)
.L004928B4:
/* 004928B4 8F938064 */  lw     $s3, %got(__us_rsthread_stdio)($gp)
/* 004928B8 8E6E0000 */  lw    $t6, ($s3)
/* 004928BC 51C00009 */  beql  $t6, $zero, .L004928E4
/* 004928C0 8E0F0000 */   lw    $t7, ($s0)
/* 004928C4 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004928C8 02002025 */  move  $a0, $s0
/* 004928CC 0320F809 */  jalr  $t9
/* 004928D0 00000000 */   nop   
/* 004928D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004928D8 10000011 */  b     .L00492920
/* 004928DC 00401825 */   move  $v1, $v0
/* 004928E0 8E0F0000 */  lw    $t7, ($s0)
.L004928E4:
/* 004928E4 25F9FFFF */  addiu $t9, $t7, -1
/* 004928E8 07210008 */  bgez  $t9, .L0049290C
/* 004928EC AE190000 */   sw    $t9, ($s0)
/* 004928F0 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004928F4 02002025 */  move  $a0, $s0
/* 004928F8 0320F809 */  jalr  $t9
/* 004928FC 00000000 */   nop   
/* 00492900 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00492904 10000005 */  b     .L0049291C
/* 00492908 00402025 */   move  $a0, $v0
.L0049290C:
/* 0049290C 8E020004 */  lw    $v0, 4($s0)
/* 00492910 90440000 */  lbu   $a0, ($v0)
/* 00492914 24480001 */  addiu $t0, $v0, 1
/* 00492918 AE080004 */  sw    $t0, 4($s0)
.L0049291C:
/* 0049291C 00801825 */  move  $v1, $a0
.L00492920:
/* 00492920 2411000A */  li    $s1, 10
/* 00492924 10710021 */  beq   $v1, $s1, .L004929AC
/* 00492928 2412FFFF */   li    $s2, -1
/* 0049292C 50720020 */  beql  $v1, $s2, .L004929B0
/* 00492930 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00492934 8E690000 */  lw    $t1, ($s3)
.L00492938:
/* 00492938 51200009 */  beql  $t1, $zero, .L00492960
/* 0049293C 8E0A0000 */   lw    $t2, ($s0)
/* 00492940 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00492944 02002025 */  move  $a0, $s0
/* 00492948 0320F809 */  jalr  $t9
/* 0049294C 00000000 */   nop   
/* 00492950 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00492954 10000011 */  b     .L0049299C
/* 00492958 00401825 */   move  $v1, $v0
/* 0049295C 8E0A0000 */  lw    $t2, ($s0)
.L00492960:
/* 00492960 254BFFFF */  addiu $t3, $t2, -1
/* 00492964 05610008 */  bgez  $t3, .L00492988
/* 00492968 AE0B0000 */   sw    $t3, ($s0)
/* 0049296C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492970 02002025 */  move  $a0, $s0
/* 00492974 0320F809 */  jalr  $t9
/* 00492978 00000000 */   nop   
/* 0049297C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00492980 10000005 */  b     .L00492998
/* 00492984 00402025 */   move  $a0, $v0
.L00492988:
/* 00492988 8E020004 */  lw    $v0, 4($s0)
/* 0049298C 90440000 */  lbu   $a0, ($v0)
/* 00492990 244D0001 */  addiu $t5, $v0, 1
/* 00492994 AE0D0004 */  sw    $t5, 4($s0)
.L00492998:
/* 00492998 00801825 */  move  $v1, $a0
.L0049299C:
/* 0049299C 50710004 */  beql  $v1, $s1, .L004929B0
/* 004929A0 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004929A4 5472FFE4 */  bnel  $v1, $s2, .L00492938
/* 004929A8 8E690000 */   lw    $t1, ($s3)
.L004929AC:
/* 004929AC 8FBF002C */  lw    $ra, 0x2c($sp)
.L004929B0:
/* 004929B0 8FB00018 */  lw    $s0, 0x18($sp)
/* 004929B4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004929B8 8FB20020 */  lw    $s2, 0x20($sp)
/* 004929BC 8FB30024 */  lw    $s3, 0x24($sp)
/* 004929C0 03E00008 */  jr    $ra
/* 004929C4 27BD0030 */   addiu $sp, $sp, 0x30
    .type readln, @function
    .size readln, .-readln
    .end readln

glabel read_string
    .ent read_string
    # 00434434 func_00434434
/* 004929C8 3C1C0FB8 */  .cpload $t9
/* 004929CC 279C78C8 */  
/* 004929D0 0399E021 */  
/* 004929D4 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004929D8 AFB20020 */  sw    $s2, 0x20($sp)
/* 004929DC AFB1001C */  sw    $s1, 0x1c($sp)
/* 004929E0 AFB00018 */  sw    $s0, 0x18($sp)
/* 004929E4 00808025 */  move  $s0, $a0
/* 004929E8 00C08825 */  move  $s1, $a2
/* 004929EC 00A09025 */  move  $s2, $a1
/* 004929F0 AFBF0034 */  sw    $ra, 0x34($sp)
/* 004929F4 AFBC0030 */  sw    $gp, 0x30($sp)
/* 004929F8 AFB5002C */  sw    $s5, 0x2c($sp)
/* 004929FC AFB40028 */  sw    $s4, 0x28($sp)
/* 00492A00 1480000A */  bnez  $a0, .L00492A2C
/* 00492A04 AFB30024 */   sw    $s3, 0x24($sp)
/* 00492A08 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00492A0C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00492A10 8F858044 */  lw    $a1, %got(RO_1000F4FC)($gp)
/* 00492A14 24840020 */  addiu $a0, $a0, 0x20
/* 00492A18 0320F809 */  jalr  $t9
/* 00492A1C 24A5F4FC */   addiu $a1, %lo(RO_1000F4FC) # addiu $a1, $a1, -0xb04
/* 00492A20 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492A24 10000053 */  b     .L00492B74
/* 00492A28 A2400000 */   sb    $zero, ($s2)
.L00492A2C:
/* 00492A2C 8F958064 */  lw     $s5, %got(__us_rsthread_stdio)($gp)
/* 00492A30 8EAE0000 */  lw    $t6, ($s5)
/* 00492A34 51C00009 */  beql  $t6, $zero, .L00492A5C
/* 00492A38 8E0F0000 */   lw    $t7, ($s0)
/* 00492A3C 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00492A40 02002025 */  move  $a0, $s0
/* 00492A44 0320F809 */  jalr  $t9
/* 00492A48 00000000 */   nop   
/* 00492A4C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492A50 10000011 */  b     .L00492A98
/* 00492A54 00402025 */   move  $a0, $v0
/* 00492A58 8E0F0000 */  lw    $t7, ($s0)
.L00492A5C:
/* 00492A5C 25F9FFFF */  addiu $t9, $t7, -1
/* 00492A60 07210008 */  bgez  $t9, .L00492A84
/* 00492A64 AE190000 */   sw    $t9, ($s0)
/* 00492A68 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492A6C 02002025 */  move  $a0, $s0
/* 00492A70 0320F809 */  jalr  $t9
/* 00492A74 00000000 */   nop   
/* 00492A78 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492A7C 10000005 */  b     .L00492A94
/* 00492A80 00401825 */   move  $v1, $v0
.L00492A84:
/* 00492A84 8E020004 */  lw    $v0, 4($s0)
/* 00492A88 90430000 */  lbu   $v1, ($v0)
/* 00492A8C 24480001 */  addiu $t0, $v0, 1
/* 00492A90 AE080004 */  sw    $t0, 4($s0)
.L00492A94:
/* 00492A94 00602025 */  move  $a0, $v1
.L00492A98:
/* 00492A98 2413000A */  li    $s3, 10
/* 00492A9C 10930028 */  beq   $a0, $s3, .L00492B40
/* 00492AA0 2414FFFF */   li    $s4, -1
/* 00492AA4 10940026 */  beq   $a0, $s4, .L00492B40
/* 00492AA8 00000000 */   nop   
/* 00492AAC 1A200024 */  blez  $s1, .L00492B40
/* 00492AB0 00000000 */   nop   
/* 00492AB4 A2440000 */  sb    $a0, ($s2)
.L00492AB8:
/* 00492AB8 8EA90000 */  lw    $t1, ($s5)
/* 00492ABC 26520001 */  addiu $s2, $s2, 1
/* 00492AC0 2631FFFF */  addiu $s1, $s1, -1
/* 00492AC4 51200009 */  beql  $t1, $zero, .L00492AEC
/* 00492AC8 8E0A0000 */   lw    $t2, ($s0)
/* 00492ACC 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00492AD0 02002025 */  move  $a0, $s0
/* 00492AD4 0320F809 */  jalr  $t9
/* 00492AD8 00000000 */   nop   
/* 00492ADC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492AE0 10000011 */  b     .L00492B28
/* 00492AE4 00402025 */   move  $a0, $v0
/* 00492AE8 8E0A0000 */  lw    $t2, ($s0)
.L00492AEC:
/* 00492AEC 254BFFFF */  addiu $t3, $t2, -1
/* 00492AF0 05610008 */  bgez  $t3, .L00492B14
/* 00492AF4 AE0B0000 */   sw    $t3, ($s0)
/* 00492AF8 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492AFC 02002025 */  move  $a0, $s0
/* 00492B00 0320F809 */  jalr  $t9
/* 00492B04 00000000 */   nop   
/* 00492B08 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492B0C 10000005 */  b     .L00492B24
/* 00492B10 00401825 */   move  $v1, $v0
.L00492B14:
/* 00492B14 8E020004 */  lw    $v0, 4($s0)
/* 00492B18 90430000 */  lbu   $v1, ($v0)
/* 00492B1C 244D0001 */  addiu $t5, $v0, 1
/* 00492B20 AE0D0004 */  sw    $t5, 4($s0)
.L00492B24:
/* 00492B24 00602025 */  move  $a0, $v1
.L00492B28:
/* 00492B28 10930005 */  beq   $a0, $s3, .L00492B40
/* 00492B2C 00000000 */   nop   
/* 00492B30 10940003 */  beq   $a0, $s4, .L00492B40
/* 00492B34 00000000 */   nop   
/* 00492B38 5E20FFDF */  bgtzl $s1, .L00492AB8
/* 00492B3C A2440000 */   sb    $a0, ($s2)
.L00492B40:
/* 00492B40 14930006 */  bne   $a0, $s3, .L00492B5C
/* 00492B44 00000000 */   nop   
/* 00492B48 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00492B4C 02002825 */  move  $a1, $s0
/* 00492B50 0320F809 */  jalr  $t9
/* 00492B54 00000000 */   nop   
/* 00492B58 8FBC0030 */  lw    $gp, 0x30($sp)
.L00492B5C:
/* 00492B5C 1A200005 */  blez  $s1, .L00492B74
/* 00492B60 24020020 */   li    $v0, 32
.L00492B64:
/* 00492B64 2631FFFF */  addiu $s1, $s1, -1
/* 00492B68 A2420000 */  sb    $v0, ($s2)
/* 00492B6C 1E20FFFD */  bgtz  $s1, .L00492B64
/* 00492B70 26520001 */   addiu $s2, $s2, 1
.L00492B74:
/* 00492B74 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00492B78 8FB00018 */  lw    $s0, 0x18($sp)
/* 00492B7C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00492B80 8FB20020 */  lw    $s2, 0x20($sp)
/* 00492B84 8FB30024 */  lw    $s3, 0x24($sp)
/* 00492B88 8FB40028 */  lw    $s4, 0x28($sp)
/* 00492B8C 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00492B90 03E00008 */  jr    $ra
/* 00492B94 27BD0038 */   addiu $sp, $sp, 0x38
    .type read_string, @function
    .size read_string, .-read_string
    .end read_string

glabel read_boolean
    .ent read_boolean
/* 00492B98 3C1C0FB8 */  .cpload $t9
/* 00492B9C 279C76F8 */  
/* 00492BA0 0399E021 */  
/* 00492BA4 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00492BA8 AFB00014 */  sw    $s0, 0x14($sp)
/* 00492BAC 00808025 */  move  $s0, $a0
/* 00492BB0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00492BB4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00492BB8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00492BBC 1480000A */  bnez  $a0, .L00492BE8
/* 00492BC0 AFB10018 */   sw    $s1, 0x18($sp)
/* 00492BC4 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00492BC8 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00492BCC 8F858044 */  lw    $a1, %got(RO_1000F538)($gp)
/* 00492BD0 24840020 */  addiu $a0, $a0, 0x20
/* 00492BD4 0320F809 */  jalr  $t9
/* 00492BD8 24A5F538 */   addiu $a1, %lo(RO_1000F538) # addiu $a1, $a1, -0xac8
/* 00492BDC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492BE0 1000009C */  b     .L00492E54
/* 00492BE4 00001025 */   move  $v0, $zero
.L00492BE8:
/* 00492BE8 8F928064 */  lw     $s2, %got(__us_rsthread_stdio)($gp)
/* 00492BEC 8E4E0000 */  lw    $t6, ($s2)
/* 00492BF0 51C00009 */  beql  $t6, $zero, .L00492C18
/* 00492BF4 8E0F0000 */   lw    $t7, ($s0)
/* 00492BF8 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00492BFC 02002025 */  move  $a0, $s0
/* 00492C00 0320F809 */  jalr  $t9
/* 00492C04 00000000 */   nop   
/* 00492C08 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492C0C 10000011 */  b     .L00492C54
/* 00492C10 00402025 */   move  $a0, $v0
/* 00492C14 8E0F0000 */  lw    $t7, ($s0)
.L00492C18:
/* 00492C18 25F8FFFF */  addiu $t8, $t7, -1
/* 00492C1C 07010008 */  bgez  $t8, .L00492C40
/* 00492C20 AE180000 */   sw    $t8, ($s0)
/* 00492C24 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492C28 02002025 */  move  $a0, $s0
/* 00492C2C 0320F809 */  jalr  $t9
/* 00492C30 00000000 */   nop   
/* 00492C34 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492C38 10000005 */  b     .L00492C50
/* 00492C3C 00401825 */   move  $v1, $v0
.L00492C40:
/* 00492C40 8E020004 */  lw    $v0, 4($s0)
/* 00492C44 90430000 */  lbu   $v1, ($v0)
/* 00492C48 24480001 */  addiu $t0, $v0, 1
/* 00492C4C AE080004 */  sw    $t0, 4($s0)
.L00492C50:
/* 00492C50 00602025 */  move  $a0, $v1
.L00492C54:
/* 00492C54 24010020 */  li    $at, 32
/* 00492C58 10810005 */  beq   $a0, $at, .L00492C70
/* 00492C5C 24010009 */   li    $at, 9
/* 00492C60 10810003 */  beq   $a0, $at, .L00492C70
/* 00492C64 2411000A */   li    $s1, 10
/* 00492C68 54910025 */  bnel  $a0, $s1, .L00492D00
/* 00492C6C 2C810061 */   sltiu $at, $a0, 0x61
.L00492C70:
/* 00492C70 8E490000 */  lw    $t1, ($s2)
.L00492C74:
/* 00492C74 2411000A */  li    $s1, 10
/* 00492C78 51200009 */  beql  $t1, $zero, .L00492CA0
/* 00492C7C 8E0A0000 */   lw    $t2, ($s0)
/* 00492C80 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00492C84 02002025 */  move  $a0, $s0
/* 00492C88 0320F809 */  jalr  $t9
/* 00492C8C 00000000 */   nop   
/* 00492C90 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492C94 10000011 */  b     .L00492CDC
/* 00492C98 00402025 */   move  $a0, $v0
/* 00492C9C 8E0A0000 */  lw    $t2, ($s0)
.L00492CA0:
/* 00492CA0 254BFFFF */  addiu $t3, $t2, -1
/* 00492CA4 05610008 */  bgez  $t3, .L00492CC8
/* 00492CA8 AE0B0000 */   sw    $t3, ($s0)
/* 00492CAC 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492CB0 02002025 */  move  $a0, $s0
/* 00492CB4 0320F809 */  jalr  $t9
/* 00492CB8 00000000 */   nop   
/* 00492CBC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492CC0 10000005 */  b     .L00492CD8
/* 00492CC4 00401825 */   move  $v1, $v0
.L00492CC8:
/* 00492CC8 8E020004 */  lw    $v0, 4($s0)
/* 00492CCC 90430000 */  lbu   $v1, ($v0)
/* 00492CD0 244D0001 */  addiu $t5, $v0, 1
/* 00492CD4 AE0D0004 */  sw    $t5, 4($s0)
.L00492CD8:
/* 00492CD8 00602025 */  move  $a0, $v1
.L00492CDC:
/* 00492CDC 24010020 */  li    $at, 32
/* 00492CE0 5081FFE4 */  beql  $a0, $at, .L00492C74
/* 00492CE4 8E490000 */   lw    $t1, ($s2)
/* 00492CE8 24010009 */  li    $at, 9
/* 00492CEC 5081FFE1 */  beql  $a0, $at, .L00492C74
/* 00492CF0 8E490000 */   lw    $t1, ($s2)
/* 00492CF4 5091FFDF */  beql  $a0, $s1, .L00492C74
/* 00492CF8 8E490000 */   lw    $t1, ($s2)
/* 00492CFC 2C810061 */  sltiu $at, $a0, 0x61
.L00492D00:
/* 00492D00 14200003 */  bnez  $at, .L00492D10
/* 00492D04 27B10038 */   addiu $s1, $sp, 0x38
/* 00492D08 2C81007B */  sltiu $at, $a0, 0x7b
/* 00492D0C 14200004 */  bnez  $at, .L00492D20
.L00492D10:
/* 00492D10 2C810041 */   sltiu $at, $a0, 0x41
/* 00492D14 1420002E */  bnez  $at, .L00492DD0
/* 00492D18 2C81005B */   sltiu $at, $a0, 0x5b
/* 00492D1C 1020002C */  beqz  $at, .L00492DD0
.L00492D20:
/* 00492D20 2C810041 */   sltiu $at, $a0, 0x41
.L00492D24:
/* 00492D24 14200004 */  bnez  $at, .L00492D38
/* 00492D28 2C81005B */   sltiu $at, $a0, 0x5b
/* 00492D2C 50200003 */  beql  $at, $zero, .L00492D3C
/* 00492D30 A2240000 */   sb    $a0, ($s1)
/* 00492D34 24840020 */  addiu $a0, $a0, 0x20
.L00492D38:
/* 00492D38 A2240000 */  sb    $a0, ($s1)
.L00492D3C:
/* 00492D3C 8E4E0000 */  lw    $t6, ($s2)
/* 00492D40 26310001 */  addiu $s1, $s1, 1
/* 00492D44 51C00009 */  beql  $t6, $zero, .L00492D6C
/* 00492D48 8E0F0000 */   lw    $t7, ($s0)
/* 00492D4C 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00492D50 02002025 */  move  $a0, $s0
/* 00492D54 0320F809 */  jalr  $t9
/* 00492D58 00000000 */   nop   
/* 00492D5C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492D60 10000011 */  b     .L00492DA8
/* 00492D64 00402025 */   move  $a0, $v0
/* 00492D68 8E0F0000 */  lw    $t7, ($s0)
.L00492D6C:
/* 00492D6C 25F8FFFF */  addiu $t8, $t7, -1
/* 00492D70 07010008 */  bgez  $t8, .L00492D94
/* 00492D74 AE180000 */   sw    $t8, ($s0)
/* 00492D78 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492D7C 02002025 */  move  $a0, $s0
/* 00492D80 0320F809 */  jalr  $t9
/* 00492D84 00000000 */   nop   
/* 00492D88 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492D8C 10000005 */  b     .L00492DA4
/* 00492D90 00401825 */   move  $v1, $v0
.L00492D94:
/* 00492D94 8E020004 */  lw    $v0, 4($s0)
/* 00492D98 90430000 */  lbu   $v1, ($v0)
/* 00492D9C 24480001 */  addiu $t0, $v0, 1
/* 00492DA0 AE080004 */  sw    $t0, 4($s0)
.L00492DA4:
/* 00492DA4 00602025 */  move  $a0, $v1
.L00492DA8:
/* 00492DA8 2C810061 */  sltiu $at, $a0, 0x61
/* 00492DAC 14200003 */  bnez  $at, .L00492DBC
/* 00492DB0 2C81007B */   sltiu $at, $a0, 0x7b
/* 00492DB4 5420FFDB */  bnezl $at, .L00492D24
/* 00492DB8 2C810041 */   sltiu $at, $a0, 0x41
.L00492DBC:
/* 00492DBC 2C810041 */  sltiu $at, $a0, 0x41
/* 00492DC0 14200003 */  bnez  $at, .L00492DD0
/* 00492DC4 2C81005B */   sltiu $at, $a0, 0x5b
/* 00492DC8 5420FFD6 */  bnezl $at, .L00492D24
/* 00492DCC 2C810041 */   sltiu $at, $a0, 0x41
.L00492DD0:
/* 00492DD0 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00492DD4 02002825 */  move  $a1, $s0
/* 00492DD8 0320F809 */  jalr  $t9
/* 00492DDC 00000000 */   nop   
/* 00492DE0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492DE4 A2200000 */  sb    $zero, ($s1)
/* 00492DE8 27A40038 */  addiu $a0, $sp, 0x38
/* 00492DEC 8F99809C */  lw    $t9, %call16(strcmp)($gp)
/* 00492DF0 8F858044 */  lw    $a1, %got(RO_1000F574)($gp)
/* 00492DF4 0320F809 */  jalr  $t9
/* 00492DF8 24A5F574 */   addiu $a1, %lo(RO_1000F574) # addiu $a1, $a1, -0xa8c
/* 00492DFC 14400003 */  bnez  $v0, .L00492E0C
/* 00492E00 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00492E04 10000013 */  b     .L00492E54
/* 00492E08 00001025 */   move  $v0, $zero
.L00492E0C:
/* 00492E0C 8F99809C */  lw    $t9, %call16(strcmp)($gp)
/* 00492E10 8F858044 */  lw    $a1, %got(RO_1000F57C)($gp)
/* 00492E14 27A40038 */  addiu $a0, $sp, 0x38
/* 00492E18 0320F809 */  jalr  $t9
/* 00492E1C 24A5F57C */   addiu $a1, %lo(RO_1000F57C) # addiu $a1, $a1, -0xa84
/* 00492E20 14400003 */  bnez  $v0, .L00492E30
/* 00492E24 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00492E28 1000000A */  b     .L00492E54
/* 00492E2C 24020001 */   li    $v0, 1
.L00492E30:
/* 00492E30 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00492E34 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00492E38 8F858044 */  lw    $a1, %got(RO_1000F584)($gp)
/* 00492E3C 27A60038 */  addiu $a2, $sp, 0x38
/* 00492E40 24840020 */  addiu $a0, $a0, 0x20
/* 00492E44 0320F809 */  jalr  $t9
/* 00492E48 24A5F584 */   addiu $a1, %lo(RO_1000F584) # addiu $a1, $a1, -0xa7c
/* 00492E4C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00492E50 00001025 */  move  $v0, $zero
.L00492E54:
/* 00492E54 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00492E58 8FB00014 */  lw    $s0, 0x14($sp)
/* 00492E5C 8FB10018 */  lw    $s1, 0x18($sp)
/* 00492E60 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00492E64 03E00008 */  jr    $ra
/* 00492E68 27BD00C0 */   addiu $sp, $sp, 0xc0
    .type read_boolean, @function
    .size read_boolean, .-read_boolean
    .end read_boolean

glabel read_enum
    .ent read_enum
/* 00492E6C 3C1C0FB8 */  .cpload $t9
/* 00492E70 279C7424 */  
/* 00492E74 0399E021 */  
/* 00492E78 27BDFF30 */  addiu $sp, $sp, -0xd0
/* 00492E7C AFB40028 */  sw    $s4, 0x28($sp)
/* 00492E80 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00492E84 AFB00018 */  sw    $s0, 0x18($sp)
/* 00492E88 00E08025 */  move  $s0, $a3
/* 00492E8C 00808825 */  move  $s1, $a0
/* 00492E90 00C0A025 */  move  $s4, $a2
/* 00492E94 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00492E98 AFBC0030 */  sw    $gp, 0x30($sp)
/* 00492E9C AFB5002C */  sw    $s5, 0x2c($sp)
/* 00492EA0 AFB30024 */  sw    $s3, 0x24($sp)
/* 00492EA4 AFB20020 */  sw    $s2, 0x20($sp)
/* 00492EA8 AFA500D4 */  sw    $a1, 0xd4($sp)
/* 00492EAC 1480000A */  bnez  $a0, .L00492ED8
/* 00492EB0 A3A60043 */   sb    $a2, 0x43($sp)
/* 00492EB4 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00492EB8 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00492EBC 8F858044 */  lw    $a1, %got(RO_1000F5A4)($gp)
/* 00492EC0 24840020 */  addiu $a0, $a0, 0x20
/* 00492EC4 0320F809 */  jalr  $t9
/* 00492EC8 24A5F5A4 */   addiu $a1, %lo(RO_1000F5A4) # addiu $a1, $a1, -0xa5c
/* 00492ECC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492ED0 100000BD */  b     .L004931C8
/* 00492ED4 00001025 */   move  $v0, $zero
.L00492ED8:
/* 00492ED8 8F958064 */  lw     $s5, %got(__us_rsthread_stdio)($gp)
/* 00492EDC 8EAE0000 */  lw    $t6, ($s5)
/* 00492EE0 51C00009 */  beql  $t6, $zero, .L00492F08
/* 00492EE4 8E2F0000 */   lw    $t7, ($s1)
/* 00492EE8 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00492EEC 02202025 */  move  $a0, $s1
/* 00492EF0 0320F809 */  jalr  $t9
/* 00492EF4 00000000 */   nop   
/* 00492EF8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492EFC 10000011 */  b     .L00492F44
/* 00492F00 00402025 */   move  $a0, $v0
/* 00492F04 8E2F0000 */  lw    $t7, ($s1)
.L00492F08:
/* 00492F08 25F8FFFF */  addiu $t8, $t7, -1
/* 00492F0C 07010008 */  bgez  $t8, .L00492F30
/* 00492F10 AE380000 */   sw    $t8, ($s1)
/* 00492F14 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492F18 02202025 */  move  $a0, $s1
/* 00492F1C 0320F809 */  jalr  $t9
/* 00492F20 00000000 */   nop   
/* 00492F24 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492F28 10000005 */  b     .L00492F40
/* 00492F2C 00401825 */   move  $v1, $v0
.L00492F30:
/* 00492F30 8E220004 */  lw    $v0, 4($s1)
/* 00492F34 90430000 */  lbu   $v1, ($v0)
/* 00492F38 24480001 */  addiu $t0, $v0, 1
/* 00492F3C AE280004 */  sw    $t0, 4($s1)
.L00492F40:
/* 00492F40 00602025 */  move  $a0, $v1
.L00492F44:
/* 00492F44 24120020 */  li    $s2, 32
/* 00492F48 10920005 */  beq   $a0, $s2, .L00492F60
/* 00492F4C 24010009 */   li    $at, 9
/* 00492F50 10810003 */  beq   $a0, $at, .L00492F60
/* 00492F54 2413000A */   li    $s3, 10
/* 00492F58 54930024 */  bnel  $a0, $s3, .L00492FEC
/* 00492F5C 2C810061 */   sltiu $at, $a0, 0x61
.L00492F60:
/* 00492F60 8EA90000 */  lw    $t1, ($s5)
.L00492F64:
/* 00492F64 2413000A */  li    $s3, 10
/* 00492F68 51200009 */  beql  $t1, $zero, .L00492F90
/* 00492F6C 8E2A0000 */   lw    $t2, ($s1)
/* 00492F70 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00492F74 02202025 */  move  $a0, $s1
/* 00492F78 0320F809 */  jalr  $t9
/* 00492F7C 00000000 */   nop   
/* 00492F80 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492F84 10000011 */  b     .L00492FCC
/* 00492F88 00402025 */   move  $a0, $v0
/* 00492F8C 8E2A0000 */  lw    $t2, ($s1)
.L00492F90:
/* 00492F90 254BFFFF */  addiu $t3, $t2, -1
/* 00492F94 05610008 */  bgez  $t3, .L00492FB8
/* 00492F98 AE2B0000 */   sw    $t3, ($s1)
/* 00492F9C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00492FA0 02202025 */  move  $a0, $s1
/* 00492FA4 0320F809 */  jalr  $t9
/* 00492FA8 00000000 */   nop   
/* 00492FAC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00492FB0 10000005 */  b     .L00492FC8
/* 00492FB4 00401825 */   move  $v1, $v0
.L00492FB8:
/* 00492FB8 8E220004 */  lw    $v0, 4($s1)
/* 00492FBC 90430000 */  lbu   $v1, ($v0)
/* 00492FC0 244D0001 */  addiu $t5, $v0, 1
/* 00492FC4 AE2D0004 */  sw    $t5, 4($s1)
.L00492FC8:
/* 00492FC8 00602025 */  move  $a0, $v1
.L00492FCC:
/* 00492FCC 5092FFE5 */  beql  $a0, $s2, .L00492F64
/* 00492FD0 8EA90000 */   lw    $t1, ($s5)
/* 00492FD4 24010009 */  li    $at, 9
/* 00492FD8 5081FFE2 */  beql  $a0, $at, .L00492F64
/* 00492FDC 8EA90000 */   lw    $t1, ($s5)
/* 00492FE0 5093FFE0 */  beql  $a0, $s3, .L00492F64
/* 00492FE4 8EA90000 */   lw    $t1, ($s5)
/* 00492FE8 2C810061 */  sltiu $at, $a0, 0x61
.L00492FEC:
/* 00492FEC 14200003 */  bnez  $at, .L00492FFC
/* 00492FF0 27B30048 */   addiu $s3, $sp, 0x48
/* 00492FF4 2C81007B */  sltiu $at, $a0, 0x7b
/* 00492FF8 1420000D */  bnez  $at, .L00493030
.L00492FFC:
/* 00492FFC 2C810041 */   sltiu $at, $a0, 0x41
/* 00493000 14200002 */  bnez  $at, .L0049300C
/* 00493004 2C81005B */   sltiu $at, $a0, 0x5b
/* 00493008 14200009 */  bnez  $at, .L00493030
.L0049300C:
/* 0049300C 2C810030 */   sltiu $at, $a0, 0x30
/* 00493010 14200002 */  bnez  $at, .L0049301C
/* 00493014 2C81003A */   sltiu $at, $a0, 0x3a
/* 00493018 14200005 */  bnez  $at, .L00493030
.L0049301C:
/* 0049301C 24010024 */   li    $at, 36
/* 00493020 10810003 */  beq   $a0, $at, .L00493030
/* 00493024 2401005F */   li    $at, 95
/* 00493028 14810032 */  bne   $a0, $at, .L004930F4
/* 0049302C 00000000 */   nop   
.L00493030:
/* 00493030 A2640000 */  sb    $a0, ($s3)
.L00493034:
/* 00493034 8EAE0000 */  lw    $t6, ($s5)
/* 00493038 26730001 */  addiu $s3, $s3, 1
/* 0049303C 51C00009 */  beql  $t6, $zero, .L00493064
/* 00493040 8E2F0000 */   lw    $t7, ($s1)
/* 00493044 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493048 02202025 */  move  $a0, $s1
/* 0049304C 0320F809 */  jalr  $t9
/* 00493050 00000000 */   nop   
/* 00493054 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493058 10000011 */  b     .L004930A0
/* 0049305C 00402025 */   move  $a0, $v0
/* 00493060 8E2F0000 */  lw    $t7, ($s1)
.L00493064:
/* 00493064 25F8FFFF */  addiu $t8, $t7, -1
/* 00493068 07010008 */  bgez  $t8, .L0049308C
/* 0049306C AE380000 */   sw    $t8, ($s1)
/* 00493070 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493074 02202025 */  move  $a0, $s1
/* 00493078 0320F809 */  jalr  $t9
/* 0049307C 00000000 */   nop   
/* 00493080 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493084 10000005 */  b     .L0049309C
/* 00493088 00401825 */   move  $v1, $v0
.L0049308C:
/* 0049308C 8E220004 */  lw    $v0, 4($s1)
/* 00493090 90430000 */  lbu   $v1, ($v0)
/* 00493094 24480001 */  addiu $t0, $v0, 1
/* 00493098 AE280004 */  sw    $t0, 4($s1)
.L0049309C:
/* 0049309C 00602025 */  move  $a0, $v1
.L004930A0:
/* 004930A0 2C810061 */  sltiu $at, $a0, 0x61
/* 004930A4 14200003 */  bnez  $at, .L004930B4
/* 004930A8 2C81007B */   sltiu $at, $a0, 0x7b
/* 004930AC 5420FFE1 */  bnezl $at, .L00493034
/* 004930B0 A2640000 */   sb    $a0, ($s3)
.L004930B4:
/* 004930B4 2C810041 */  sltiu $at, $a0, 0x41
/* 004930B8 14200003 */  bnez  $at, .L004930C8
/* 004930BC 2C81005B */   sltiu $at, $a0, 0x5b
/* 004930C0 5420FFDC */  bnezl $at, .L00493034
/* 004930C4 A2640000 */   sb    $a0, ($s3)
.L004930C8:
/* 004930C8 2C810030 */  sltiu $at, $a0, 0x30
/* 004930CC 14200003 */  bnez  $at, .L004930DC
/* 004930D0 2C81003A */   sltiu $at, $a0, 0x3a
/* 004930D4 5420FFD7 */  bnezl $at, .L00493034
/* 004930D8 A2640000 */   sb    $a0, ($s3)
.L004930DC:
/* 004930DC 24010024 */  li    $at, 36
/* 004930E0 5081FFD4 */  beql  $a0, $at, .L00493034
/* 004930E4 A2640000 */   sb    $a0, ($s3)
/* 004930E8 2401005F */  li    $at, 95
/* 004930EC 5081FFD1 */  beql  $a0, $at, .L00493034
/* 004930F0 A2640000 */   sb    $a0, ($s3)
.L004930F4:
/* 004930F4 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 004930F8 02202825 */  move  $a1, $s1
/* 004930FC 0320F809 */  jalr  $t9
/* 00493100 00000000 */   nop   
/* 00493104 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493108 06800026 */  bltz  $s4, .L004931A4
/* 0049310C A2600000 */   sb    $zero, ($s3)
.L00493110:
/* 00493110 8F99809C */  lw    $t9, %call16(strcmp)($gp)
/* 00493114 02002025 */  move  $a0, $s0
/* 00493118 27A50048 */  addiu $a1, $sp, 0x48
/* 0049311C 0320F809 */  jalr  $t9
/* 00493120 00000000 */   nop   
/* 00493124 14400004 */  bnez  $v0, .L00493138
/* 00493128 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0049312C 93A90043 */  lbu   $t1, 0x43($sp)
/* 00493130 10000025 */  b     .L004931C8
/* 00493134 01341023 */   subu  $v0, $t1, $s4
.L00493138:
/* 00493138 92030000 */  lbu   $v1, ($s0)
/* 0049313C 26100001 */  addiu $s0, $s0, 1
/* 00493140 2694FFFF */  addiu $s4, $s4, -1
/* 00493144 0003182B */  sltu  $v1, $zero, $v1
/* 00493148 50600007 */  beql  $v1, $zero, .L00493168
/* 0049314C 920A0000 */   lbu   $t2, ($s0)
/* 00493150 92030000 */  lbu   $v1, ($s0)
.L00493154:
/* 00493154 26100001 */  addiu $s0, $s0, 1
/* 00493158 0003182B */  sltu  $v1, $zero, $v1
/* 0049315C 5460FFFD */  bnezl $v1, .L00493154
/* 00493160 92030000 */   lbu   $v1, ($s0)
/* 00493164 920A0000 */  lbu   $t2, ($s0)
.L00493168:
/* 00493168 024A1026 */  xor   $v0, $s2, $t2
/* 0049316C 2C420001 */  sltiu $v0, $v0, 1
/* 00493170 1040000A */  beqz  $v0, .L0049319C
/* 00493174 00000000 */   nop   
/* 00493178 10400007 */  beqz  $v0, .L00493198
/* 0049317C 26100001 */   addiu $s0, $s0, 1
/* 00493180 920B0000 */  lbu   $t3, ($s0)
.L00493184:
/* 00493184 26100001 */  addiu $s0, $s0, 1
/* 00493188 024B1826 */  xor   $v1, $s2, $t3
/* 0049318C 2C630001 */  sltiu $v1, $v1, 1
/* 00493190 5460FFFC */  bnezl $v1, .L00493184
/* 00493194 920B0000 */   lbu   $t3, ($s0)
.L00493198:
/* 00493198 2610FFFF */  addiu $s0, $s0, -1
.L0049319C:
/* 0049319C 0681FFDC */  bgez  $s4, .L00493110
/* 004931A0 00000000 */   nop   
.L004931A4:
/* 004931A4 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004931A8 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004931AC 8F858044 */  lw    $a1, %got(RO_1000F5E4)($gp)
/* 004931B0 27A60048 */  addiu $a2, $sp, 0x48
/* 004931B4 24840020 */  addiu $a0, $a0, 0x20
/* 004931B8 0320F809 */  jalr  $t9
/* 004931BC 24A5F5E4 */   addiu $a1, %lo(RO_1000F5E4) # addiu $a1, $a1, -0xa1c
/* 004931C0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004931C4 00001025 */  move  $v0, $zero
.L004931C8:
/* 004931C8 8FBF0034 */  lw    $ra, 0x34($sp)
/* 004931CC 8FB00018 */  lw    $s0, 0x18($sp)
/* 004931D0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004931D4 8FB20020 */  lw    $s2, 0x20($sp)
/* 004931D8 8FB30024 */  lw    $s3, 0x24($sp)
/* 004931DC 8FB40028 */  lw    $s4, 0x28($sp)
/* 004931E0 8FB5002C */  lw    $s5, 0x2c($sp)
/* 004931E4 03E00008 */  jr    $ra
/* 004931E8 27BD00D0 */   addiu $sp, $sp, 0xd0
    .type read_enum, @function
    .size read_enum, .-read_enum
    .end read_enum

glabel read_integer
    .ent read_integer
    # 00493734 read_integer_range
    # 00494D90 read_int64_range
/* 004931EC 3C1C0FB8 */  .cpload $t9
/* 004931F0 279C70A4 */  
/* 004931F4 0399E021 */  
/* 004931F8 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 004931FC AFB1001C */  sw    $s1, 0x1c($sp)
/* 00493200 00808825 */  move  $s1, $a0
/* 00493204 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00493208 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0049320C AFB30024 */  sw    $s3, 0x24($sp)
/* 00493210 AFB20020 */  sw    $s2, 0x20($sp)
/* 00493214 AFB00018 */  sw    $s0, 0x18($sp)
/* 00493218 1480000A */  bnez  $a0, .L00493244
/* 0049321C AFA5004C */   sw    $a1, 0x4c($sp)
/* 00493220 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00493224 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493228 8F858044 */  lw    $a1, %got(RO_1000F60C)($gp)
/* 0049322C 24840020 */  addiu $a0, $a0, 0x20
/* 00493230 0320F809 */  jalr  $t9
/* 00493234 24A5F60C */   addiu $a1, %lo(RO_1000F60C) # addiu $a1, $a1, -0x9f4
/* 00493238 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049323C 10000136 */  b     .L00493718
/* 00493240 00001025 */   move  $v0, $zero
.L00493244:
/* 00493244 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00493248 8DCE0000 */  lw    $t6, ($t6)
/* 0049324C 51C00009 */  beql  $t6, $zero, .L00493274
/* 00493250 8E2F0000 */   lw    $t7, ($s1)
/* 00493254 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493258 02202025 */  move  $a0, $s1
/* 0049325C 0320F809 */  jalr  $t9
/* 00493260 00000000 */   nop   
/* 00493264 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00493268 10000011 */  b     .L004932B0
/* 0049326C 00403825 */   move  $a3, $v0
/* 00493270 8E2F0000 */  lw    $t7, ($s1)
.L00493274:
/* 00493274 25F8FFFF */  addiu $t8, $t7, -1
/* 00493278 07010008 */  bgez  $t8, .L0049329C
/* 0049327C AE380000 */   sw    $t8, ($s1)
/* 00493280 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493284 02202025 */  move  $a0, $s1
/* 00493288 0320F809 */  jalr  $t9
/* 0049328C 00000000 */   nop   
/* 00493290 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00493294 10000005 */  b     .L004932AC
/* 00493298 00408025 */   move  $s0, $v0
.L0049329C:
/* 0049329C 8E220004 */  lw    $v0, 4($s1)
/* 004932A0 90500000 */  lbu   $s0, ($v0)
/* 004932A4 24480001 */  addiu $t0, $v0, 1
/* 004932A8 AE280004 */  sw    $t0, 4($s1)
.L004932AC:
/* 004932AC 02003825 */  move  $a3, $s0
.L004932B0:
/* 004932B0 24120020 */  li    $s2, 32
/* 004932B4 10F20005 */  beq   $a3, $s2, .L004932CC
/* 004932B8 24130009 */   li    $s3, 9
/* 004932BC 10F30003 */  beq   $a3, $s3, .L004932CC
/* 004932C0 2401000A */   li    $at, 10
/* 004932C4 54E10025 */  bnel  $a3, $at, .L0049335C
/* 004932C8 2401002D */   li    $at, 45
.L004932CC:
/* 004932CC 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 004932D0 24130009 */  li    $s3, 9
/* 004932D4 8D290000 */  lw    $t1, ($t1)
/* 004932D8 51200009 */  beql  $t1, $zero, .L00493300
/* 004932DC 8E2A0000 */   lw    $t2, ($s1)
/* 004932E0 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004932E4 02202025 */  move  $a0, $s1
/* 004932E8 0320F809 */  jalr  $t9
/* 004932EC 00000000 */   nop   
/* 004932F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004932F4 10000011 */  b     .L0049333C
/* 004932F8 00403825 */   move  $a3, $v0
/* 004932FC 8E2A0000 */  lw    $t2, ($s1)
.L00493300:
/* 00493300 254BFFFF */  addiu $t3, $t2, -1
/* 00493304 05610008 */  bgez  $t3, .L00493328
/* 00493308 AE2B0000 */   sw    $t3, ($s1)
/* 0049330C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493310 02202025 */  move  $a0, $s1
/* 00493314 0320F809 */  jalr  $t9
/* 00493318 00000000 */   nop   
/* 0049331C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00493320 10000005 */  b     .L00493338
/* 00493324 00408025 */   move  $s0, $v0
.L00493328:
/* 00493328 8E220004 */  lw    $v0, 4($s1)
/* 0049332C 90500000 */  lbu   $s0, ($v0)
/* 00493330 244D0001 */  addiu $t5, $v0, 1
/* 00493334 AE2D0004 */  sw    $t5, 4($s1)
.L00493338:
/* 00493338 02003825 */  move  $a3, $s0
.L0049333C:
/* 0049333C 10F2FFE3 */  beq   $a3, $s2, .L004932CC
/* 00493340 00000000 */   nop   
/* 00493344 10F3FFE1 */  beq   $a3, $s3, .L004932CC
/* 00493348 00000000 */   nop   
/* 0049334C 2401000A */  li    $at, 10
/* 00493350 10E1FFDE */  beq   $a3, $at, .L004932CC
/* 00493354 00000000 */   nop   
/* 00493358 2401002D */  li    $at, 45
.L0049335C:
/* 0049335C 10E10004 */  beq   $a3, $at, .L00493370
/* 00493360 AFA70040 */   sw    $a3, 0x40($sp)
/* 00493364 2401002B */  li    $at, 43
/* 00493368 54E1001D */  bnel  $a3, $at, .L004933E0
/* 0049336C 8FA9004C */   lw    $t1, 0x4c($sp)
.L00493370:
/* 00493370 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00493374 8DCE0000 */  lw    $t6, ($t6)
/* 00493378 51C00009 */  beql  $t6, $zero, .L004933A0
/* 0049337C 8E2F0000 */   lw    $t7, ($s1)
/* 00493380 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493384 02202025 */  move  $a0, $s1
/* 00493388 0320F809 */  jalr  $t9
/* 0049338C 00000000 */   nop   
/* 00493390 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00493394 10000011 */  b     .L004933DC
/* 00493398 00403825 */   move  $a3, $v0
/* 0049339C 8E2F0000 */  lw    $t7, ($s1)
.L004933A0:
/* 004933A0 25F8FFFF */  addiu $t8, $t7, -1
/* 004933A4 07010008 */  bgez  $t8, .L004933C8
/* 004933A8 AE380000 */   sw    $t8, ($s1)
/* 004933AC 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004933B0 02202025 */  move  $a0, $s1
/* 004933B4 0320F809 */  jalr  $t9
/* 004933B8 00000000 */   nop   
/* 004933BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004933C0 10000005 */  b     .L004933D8
/* 004933C4 00408025 */   move  $s0, $v0
.L004933C8:
/* 004933C8 8E220004 */  lw    $v0, 4($s1)
/* 004933CC 90500000 */  lbu   $s0, ($v0)
/* 004933D0 24480001 */  addiu $t0, $v0, 1
/* 004933D4 AE280004 */  sw    $t0, 4($s1)
.L004933D8:
/* 004933D8 02003825 */  move  $a3, $s0
.L004933DC:
/* 004933DC 8FA9004C */  lw    $t1, 0x4c($sp)
.L004933E0:
/* 004933E0 2401000A */  li    $at, 10
/* 004933E4 AFA00034 */  sw    $zero, 0x34($sp)
/* 004933E8 15210074 */  bne   $t1, $at, .L004935BC
/* 004933EC 00000000 */   nop   
/* 004933F0 24E7FFD0 */  addiu $a3, $a3, -0x30
/* 004933F4 2CE1000A */  sltiu $at, $a3, 0xa
/* 004933F8 1420000B */  bnez  $at, .L00493428
/* 004933FC 00000000 */   nop   
/* 00493400 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00493404 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493408 8F858044 */  lw    $a1, %got(RO_1000F644)($gp)
/* 0049340C 24E60030 */  addiu $a2, $a3, 0x30
/* 00493410 24840020 */  addiu $a0, $a0, 0x20
/* 00493414 0320F809 */  jalr  $t9
/* 00493418 24A5F644 */   addiu $a1, %lo(RO_1000F644) # addiu $a1, $a1, -0x9bc
/* 0049341C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00493420 100000BD */  b     .L00493718
/* 00493424 00001025 */   move  $v0, $zero
.L00493428:
/* 00493428 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 0049342C 00E09025 */  move  $s2, $a3
/* 00493430 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
.L00493434:
/* 00493434 8E2A0000 */  lw    $t2, ($s1)
/* 00493438 5D400018 */  bgtzl $t2, .L0049349C
/* 0049343C 8E220004 */   lw    $v0, 4($s1)
/* 00493440 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493444 02202025 */  move  $a0, $s1
/* 00493448 AFA70044 */  sw    $a3, 0x44($sp)
/* 0049344C 0320F809 */  jalr  $t9
/* 00493450 00000000 */   nop   
/* 00493454 2401FFFF */  li    $at, -1
/* 00493458 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049345C 8FA70044 */  lw    $a3, 0x44($sp)
/* 00493460 AE620000 */  sw    $v0, ($s3)
/* 00493464 14410003 */  bne   $v0, $at, .L00493474
/* 00493468 00402025 */   move  $a0, $v0
/* 0049346C 10000008 */  b     .L00493490
/* 00493470 24100001 */   li    $s0, 1
.L00493474:
/* 00493474 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00493478 02202825 */  move  $a1, $s1
/* 0049347C 00008025 */  move  $s0, $zero
/* 00493480 0320F809 */  jalr  $t9
/* 00493484 AFA70044 */   sw    $a3, 0x44($sp)
/* 00493488 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049348C 8FA70044 */  lw    $a3, 0x44($sp)
.L00493490:
/* 00493490 5600001E */  bnezl $s0, .L0049350C
/* 00493494 2401FFF3 */   li    $at, -13
/* 00493498 8E220004 */  lw    $v0, 4($s1)
.L0049349C:
/* 0049349C 00126080 */  sll   $t4, $s2, 2
/* 004934A0 01926021 */  addu  $t4, $t4, $s2
/* 004934A4 90470000 */  lbu   $a3, ($v0)
/* 004934A8 000C6040 */  sll   $t4, $t4, 1
/* 004934AC 244E0001 */  addiu $t6, $v0, 1
/* 004934B0 24E7FFD0 */  addiu $a3, $a3, -0x30
/* 004934B4 2CE1000A */  sltiu $at, $a3, 0xa
/* 004934B8 10200013 */  beqz  $at, .L00493508
/* 004934BC 3C01F333 */   lui   $at, 0xf333
/* 004934C0 34213334 */  ori   $at, $at, 0x3334
/* 004934C4 0241082B */  sltu  $at, $s2, $at
/* 004934C8 1420000A */  bnez  $at, .L004934F4
/* 004934CC 8E230000 */   lw    $v1, ($s1)
/* 004934D0 3C01F333 */  lui   $at, 0xf333
/* 004934D4 34213335 */  ori   $at, $at, 0x3335
/* 004934D8 0241082B */  sltu  $at, $s2, $at
/* 004934DC 10200004 */  beqz  $at, .L004934F0
/* 004934E0 240B0001 */   li    $t3, 1
/* 004934E4 2CE1FFF9 */  sltiu $at, $a3, -7
/* 004934E8 54200003 */  bnezl $at, .L004934F8
/* 004934EC 246DFFFF */   addiu $t5, $v1, -1
.L004934F0:
/* 004934F0 AFAB0034 */  sw    $t3, 0x34($sp)
.L004934F4:
/* 004934F4 246DFFFF */  addiu $t5, $v1, -1
.L004934F8:
/* 004934F8 01879021 */  addu  $s2, $t4, $a3
/* 004934FC AE2D0000 */  sw    $t5, ($s1)
/* 00493500 1000FFCC */  b     .L00493434
/* 00493504 AE2E0004 */   sw    $t6, 4($s1)
.L00493508:
/* 00493508 2401FFF3 */  li    $at, -13
.L0049350C:
/* 0049350C 14E1006B */  bne   $a3, $at, .L004936BC
/* 00493510 2E410002 */   sltiu $at, $s2, 2
/* 00493514 14200069 */  bnez  $at, .L004936BC
/* 00493518 2E410024 */   sltiu $at, $s2, 0x24
/* 0049351C 50200068 */  beql  $at, $zero, .L004936C0
/* 00493520 8FB90034 */   lw    $t9, 0x34($sp)
/* 00493524 8F8F8CC4 */  lw     $t7, %got(_libp_ansi_pascal)($gp)
/* 00493528 8DEF0000 */  lw    $t7, ($t7)
/* 0049352C 55E00064 */  bnezl $t7, .L004936C0
/* 00493530 8FB90034 */   lw    $t9, 0x34($sp)
/* 00493534 AFB2004C */  sw    $s2, 0x4c($sp)
/* 00493538 8E380000 */  lw    $t8, ($s1)
/* 0049353C 8E280004 */  lw    $t0, 4($s1)
/* 00493540 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 00493544 2719FFFF */  addiu $t9, $t8, -1
/* 00493548 25090001 */  addiu $t1, $t0, 1
/* 0049354C AE390000 */  sw    $t9, ($s1)
/* 00493550 AE290004 */  sw    $t1, 4($s1)
/* 00493554 8D4A0000 */  lw    $t2, ($t2)
/* 00493558 51400009 */  beql  $t2, $zero, .L00493580
/* 0049355C 8E2B0000 */   lw    $t3, ($s1)
/* 00493560 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493564 02202025 */  move  $a0, $s1
/* 00493568 0320F809 */  jalr  $t9
/* 0049356C 00000000 */   nop   
/* 00493570 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00493574 10000011 */  b     .L004935BC
/* 00493578 00403825 */   move  $a3, $v0
/* 0049357C 8E2B0000 */  lw    $t3, ($s1)
.L00493580:
/* 00493580 256CFFFF */  addiu $t4, $t3, -1
/* 00493584 05810008 */  bgez  $t4, .L004935A8
/* 00493588 AE2C0000 */   sw    $t4, ($s1)
/* 0049358C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493590 02202025 */  move  $a0, $s1
/* 00493594 0320F809 */  jalr  $t9
/* 00493598 00000000 */   nop   
/* 0049359C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004935A0 10000005 */  b     .L004935B8
/* 004935A4 00408025 */   move  $s0, $v0
.L004935A8:
/* 004935A8 8E220004 */  lw    $v0, 4($s1)
/* 004935AC 90500000 */  lbu   $s0, ($v0)
/* 004935B0 244E0001 */  addiu $t6, $v0, 1
/* 004935B4 AE2E0004 */  sw    $t6, 4($s1)
.L004935B8:
/* 004935B8 02003825 */  move  $a3, $s0
.L004935BC:
/* 004935BC 8F8F8044 */  lw    $t7, %got(D_10011B70)($gp)
/* 004935C0 8FB9004C */  lw    $t9, 0x4c($sp)
/* 004935C4 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 004935C8 25EF1B70 */  addiu $t7, %lo(D_10011B70) # addiu $t7, $t7, 0x1b70
/* 004935CC 00EFC021 */  addu  $t8, $a3, $t7
/* 004935D0 93030000 */  lbu   $v1, ($t8)
/* 004935D4 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
/* 004935D8 0079082B */  sltu  $at, $v1, $t9
/* 004935DC 1420000B */  bnez  $at, .L0049360C
/* 004935E0 00609025 */   move  $s2, $v1
/* 004935E4 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004935E8 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004935EC 8F858044 */  lw    $a1, %got(RO_1000F674)($gp)
/* 004935F0 00E03025 */  move  $a2, $a3
/* 004935F4 24840020 */  addiu $a0, $a0, 0x20
/* 004935F8 0320F809 */  jalr  $t9
/* 004935FC 24A5F674 */   addiu $a1, %lo(RO_1000F674) # addiu $a1, $a1, -0x98c
/* 00493600 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00493604 10000044 */  b     .L00493718
/* 00493608 00001025 */   move  $v0, $zero
.L0049360C:
/* 0049360C 8E280000 */  lw    $t0, ($s1)
.L00493610:
/* 00493610 5D000015 */  bgtzl $t0, .L00493668
/* 00493614 8E220004 */   lw    $v0, 4($s1)
/* 00493618 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049361C 02202025 */  move  $a0, $s1
/* 00493620 0320F809 */  jalr  $t9
/* 00493624 00000000 */   nop   
/* 00493628 2401FFFF */  li    $at, -1
/* 0049362C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00493630 AE620000 */  sw    $v0, ($s3)
/* 00493634 14410003 */  bne   $v0, $at, .L00493644
/* 00493638 00402025 */   move  $a0, $v0
/* 0049363C 10000007 */  b     .L0049365C
/* 00493640 24100001 */   li    $s0, 1
.L00493644:
/* 00493644 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00493648 02202825 */  move  $a1, $s1
/* 0049364C 00008025 */  move  $s0, $zero
/* 00493650 0320F809 */  jalr  $t9
/* 00493654 00000000 */   nop   
/* 00493658 8FBC0028 */  lw    $gp, 0x28($sp)
.L0049365C:
/* 0049365C 56000018 */  bnezl $s0, .L004936C0
/* 00493660 8FB90034 */   lw    $t9, 0x34($sp)
/* 00493664 8E220004 */  lw    $v0, 4($s1)
.L00493668:
/* 00493668 8F898044 */  lw    $t1, %got(D_10011B70)($gp)
/* 0049366C 8FAB004C */  lw    $t3, 0x4c($sp)
/* 00493670 90470000 */  lbu   $a3, ($v0)
/* 00493674 25291B70 */  addiu $t1, %lo(D_10011B70) # addiu $t1, $t1, 0x1b70
/* 00493678 8FAC004C */  lw    $t4, 0x4c($sp)
/* 0049367C 30E7007F */  andi  $a3, $a3, 0x7f
/* 00493680 00E95021 */  addu  $t2, $a3, $t1
/* 00493684 91430000 */  lbu   $v1, ($t2)
/* 00493688 006B082B */  sltu  $at, $v1, $t3
/* 0049368C 5020000C */  beql  $at, $zero, .L004936C0
/* 00493690 8FB90034 */   lw    $t9, 0x34($sp)
/* 00493694 024C0019 */  multu $s2, $t4
/* 00493698 8E2E0000 */  lw    $t6, ($s1)
/* 0049369C 24580001 */  addiu $t8, $v0, 1
/* 004936A0 AE380004 */  sw    $t8, 4($s1)
/* 004936A4 25CFFFFF */  addiu $t7, $t6, -1
/* 004936A8 AE2F0000 */  sw    $t7, ($s1)
/* 004936AC 00006812 */  mflo  $t5
/* 004936B0 01A39021 */  addu  $s2, $t5, $v1
/* 004936B4 1000FFD6 */  b     .L00493610
/* 004936B8 8E280000 */   lw    $t0, ($s1)
.L004936BC:
/* 004936BC 8FB90034 */  lw    $t9, 0x34($sp)
.L004936C0:
/* 004936C0 3C018000 */  lui   $at, 0x8000
/* 004936C4 17200006 */  bnez  $t9, .L004936E0
/* 004936C8 00000000 */   nop   
/* 004936CC 1641000B */  bne   $s2, $at, .L004936FC
/* 004936D0 8FA80040 */   lw    $t0, 0x40($sp)
/* 004936D4 2401002D */  li    $at, 45
/* 004936D8 51010009 */  beql  $t0, $at, .L00493700
/* 004936DC 8FA90040 */   lw    $t1, 0x40($sp)
.L004936E0:
/* 004936E0 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004936E4 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004936E8 8F858044 */  lw    $a1, %got(RO_1000F6A4)($gp)
/* 004936EC 24840020 */  addiu $a0, $a0, 0x20
/* 004936F0 0320F809 */  jalr  $t9
/* 004936F4 24A5F6A4 */   addiu $a1, %lo(RO_1000F6A4) # addiu $a1, $a1, -0x95c
/* 004936F8 8FBC0028 */  lw    $gp, 0x28($sp)
.L004936FC:
/* 004936FC 8FA90040 */  lw    $t1, 0x40($sp)
.L00493700:
/* 00493700 2401002D */  li    $at, 45
/* 00493704 02401025 */  move  $v0, $s2
/* 00493708 15210003 */  bne   $t1, $at, .L00493718
/* 0049370C 00000000 */   nop   
/* 00493710 10000001 */  b     .L00493718
/* 00493714 00121023 */   negu  $v0, $s2
.L00493718:
/* 00493718 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0049371C 8FB00018 */  lw    $s0, 0x18($sp)
/* 00493720 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00493724 8FB20020 */  lw    $s2, 0x20($sp)
/* 00493728 8FB30024 */  lw    $s3, 0x24($sp)
/* 0049372C 03E00008 */  jr    $ra
/* 00493730 27BD0048 */   addiu $sp, $sp, 0x48
    .type read_integer, @function
    .size read_integer, .-read_integer
    .end read_integer

glabel read_integer_range
    .ent read_integer_range
/* 00493734 3C1C0FB8 */  .cpload $t9
/* 00493738 279C6B5C */  
/* 0049373C 0399E021 */  
/* 00493740 8F99885C */  lw    $t9, %call16(read_integer)($gp)
/* 00493744 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00493748 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0049374C AFA5002C */  sw    $a1, 0x2c($sp)
/* 00493750 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00493754 AFA60030 */  sw    $a2, 0x30($sp)
/* 00493758 0320F809 */  jalr  $t9
/* 0049375C 00E02825 */   move  $a1, $a3
/* 00493760 8FAE002C */  lw    $t6, 0x2c($sp)
/* 00493764 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00493768 00403025 */  move  $a2, $v0
/* 0049376C 004E082A */  slt   $at, $v0, $t6
/* 00493770 14200004 */  bnez  $at, .L00493784
/* 00493774 8FAF0030 */   lw    $t7, 0x30($sp)
/* 00493778 01E2082A */  slt   $at, $t7, $v0
/* 0049377C 5020000B */  beql  $at, $zero, .L004937AC
/* 00493780 8FBF001C */   lw    $ra, 0x1c($sp)
.L00493784:
/* 00493784 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00493788 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 0049378C 8F858044 */  lw    $a1, %got(RO_1000F6C0)($gp)
/* 00493790 AFA60024 */  sw    $a2, 0x24($sp)
/* 00493794 24840020 */  addiu $a0, $a0, 0x20
/* 00493798 0320F809 */  jalr  $t9
/* 0049379C 24A5F6C0 */   addiu $a1, %lo(RO_1000F6C0) # addiu $a1, $a1, -0x940
/* 004937A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004937A4 8FA60024 */  lw    $a2, 0x24($sp)
/* 004937A8 8FBF001C */  lw    $ra, 0x1c($sp)
.L004937AC:
/* 004937AC 27BD0028 */  addiu $sp, $sp, 0x28
/* 004937B0 00C01025 */  move  $v0, $a2
/* 004937B4 03E00008 */  jr    $ra
/* 004937B8 00000000 */   nop   
    .type read_integer_range, @function
    .size read_integer_range, .-read_integer_range
    .end read_integer_range

glabel read_cardinal
    .ent read_cardinal
/* 004937BC 3C1C0FB8 */  .cpload $t9
/* 004937C0 279C6AD4 */  
/* 004937C4 0399E021 */  
/* 004937C8 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 004937CC AFB5002C */  sw    $s5, 0x2c($sp)
/* 004937D0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004937D4 00808825 */  move  $s1, $a0
/* 004937D8 00A0A825 */  move  $s5, $a1
/* 004937DC AFBF0034 */  sw    $ra, 0x34($sp)
/* 004937E0 AFBC0030 */  sw    $gp, 0x30($sp)
/* 004937E4 AFB40028 */  sw    $s4, 0x28($sp)
/* 004937E8 AFB30024 */  sw    $s3, 0x24($sp)
/* 004937EC AFB20020 */  sw    $s2, 0x20($sp)
/* 004937F0 1480000A */  bnez  $a0, .L0049381C
/* 004937F4 AFB00018 */   sw    $s0, 0x18($sp)
/* 004937F8 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004937FC 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493800 8F858044 */  lw    $a1, %got(RO_1000F6F0)($gp)
/* 00493804 24840020 */  addiu $a0, $a0, 0x20
/* 00493808 0320F809 */  jalr  $t9
/* 0049380C 24A5F6F0 */   addiu $a1, %lo(RO_1000F6F0) # addiu $a1, $a1, -0x910
/* 00493810 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493814 10000105 */  b     .L00493C2C
/* 00493818 00001025 */   move  $v0, $zero
.L0049381C:
/* 0049381C 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00493820 8DCE0000 */  lw    $t6, ($t6)
/* 00493824 51C00009 */  beql  $t6, $zero, .L0049384C
/* 00493828 8E2F0000 */   lw    $t7, ($s1)
/* 0049382C 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493830 02202025 */  move  $a0, $s1
/* 00493834 0320F809 */  jalr  $t9
/* 00493838 00000000 */   nop   
/* 0049383C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493840 10000011 */  b     .L00493888
/* 00493844 00403825 */   move  $a3, $v0
/* 00493848 8E2F0000 */  lw    $t7, ($s1)
.L0049384C:
/* 0049384C 25F9FFFF */  addiu $t9, $t7, -1
/* 00493850 07210008 */  bgez  $t9, .L00493874
/* 00493854 AE390000 */   sw    $t9, ($s1)
/* 00493858 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049385C 02202025 */  move  $a0, $s1
/* 00493860 0320F809 */  jalr  $t9
/* 00493864 00000000 */   nop   
/* 00493868 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0049386C 10000005 */  b     .L00493884
/* 00493870 00408025 */   move  $s0, $v0
.L00493874:
/* 00493874 8E220004 */  lw    $v0, 4($s1)
/* 00493878 90500000 */  lbu   $s0, ($v0)
/* 0049387C 24480001 */  addiu $t0, $v0, 1
/* 00493880 AE280004 */  sw    $t0, 4($s1)
.L00493884:
/* 00493884 02003825 */  move  $a3, $s0
.L00493888:
/* 00493888 24120020 */  li    $s2, 32
/* 0049388C 10F20005 */  beq   $a3, $s2, .L004938A4
/* 00493890 24130009 */   li    $s3, 9
/* 00493894 10F30003 */  beq   $a3, $s3, .L004938A4
/* 00493898 2414000A */   li    $s4, 10
/* 0049389C 14F40024 */  bne   $a3, $s4, .L00493930
/* 004938A0 00000000 */   nop   
.L004938A4:
/* 004938A4 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 004938A8 24130009 */  li    $s3, 9
/* 004938AC 2414000A */  li    $s4, 10
/* 004938B0 8D290000 */  lw    $t1, ($t1)
/* 004938B4 51200009 */  beql  $t1, $zero, .L004938DC
/* 004938B8 8E2A0000 */   lw    $t2, ($s1)
/* 004938BC 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004938C0 02202025 */  move  $a0, $s1
/* 004938C4 0320F809 */  jalr  $t9
/* 004938C8 00000000 */   nop   
/* 004938CC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004938D0 10000011 */  b     .L00493918
/* 004938D4 00403825 */   move  $a3, $v0
/* 004938D8 8E2A0000 */  lw    $t2, ($s1)
.L004938DC:
/* 004938DC 254BFFFF */  addiu $t3, $t2, -1
/* 004938E0 05610008 */  bgez  $t3, .L00493904
/* 004938E4 AE2B0000 */   sw    $t3, ($s1)
/* 004938E8 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004938EC 02202025 */  move  $a0, $s1
/* 004938F0 0320F809 */  jalr  $t9
/* 004938F4 00000000 */   nop   
/* 004938F8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004938FC 10000005 */  b     .L00493914
/* 00493900 00408025 */   move  $s0, $v0
.L00493904:
/* 00493904 8E220004 */  lw    $v0, 4($s1)
/* 00493908 90500000 */  lbu   $s0, ($v0)
/* 0049390C 244D0001 */  addiu $t5, $v0, 1
/* 00493910 AE2D0004 */  sw    $t5, 4($s1)
.L00493914:
/* 00493914 02003825 */  move  $a3, $s0
.L00493918:
/* 00493918 10F2FFE2 */  beq   $a3, $s2, .L004938A4
/* 0049391C 00000000 */   nop   
/* 00493920 10F3FFE0 */  beq   $a3, $s3, .L004938A4
/* 00493924 00000000 */   nop   
/* 00493928 10F4FFDE */  beq   $a3, $s4, .L004938A4
/* 0049392C 00000000 */   nop   
.L00493930:
/* 00493930 16B40076 */  bne   $s5, $s4, .L00493B0C
/* 00493934 AFA00038 */   sw    $zero, 0x38($sp)
/* 00493938 24E7FFD0 */  addiu $a3, $a3, -0x30
/* 0049393C 2CE1000A */  sltiu $at, $a3, 0xa
/* 00493940 1420000B */  bnez  $at, .L00493970
/* 00493944 00000000 */   nop   
/* 00493948 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 0049394C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493950 8F858044 */  lw    $a1, %got(RO_1000F72C)($gp)
/* 00493954 24E60030 */  addiu $a2, $a3, 0x30
/* 00493958 24840020 */  addiu $a0, $a0, 0x20
/* 0049395C 0320F809 */  jalr  $t9
/* 00493960 24A5F72C */   addiu $a1, %lo(RO_1000F72C) # addiu $a1, $a1, -0x8d4
/* 00493964 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493968 100000B0 */  b     .L00493C2C
/* 0049396C 00001025 */   move  $v0, $zero
.L00493970:
/* 00493970 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 00493974 00E09025 */  move  $s2, $a3
/* 00493978 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
/* 0049397C 8E2E0000 */  lw    $t6, ($s1)
.L00493980:
/* 00493980 5DC00018 */  bgtzl $t6, .L004939E4
/* 00493984 8E220004 */   lw    $v0, 4($s1)
/* 00493988 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049398C 02202025 */  move  $a0, $s1
/* 00493990 AFA70044 */  sw    $a3, 0x44($sp)
/* 00493994 0320F809 */  jalr  $t9
/* 00493998 00000000 */   nop   
/* 0049399C 2401FFFF */  li    $at, -1
/* 004939A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004939A4 8FA70044 */  lw    $a3, 0x44($sp)
/* 004939A8 AE620000 */  sw    $v0, ($s3)
/* 004939AC 14410003 */  bne   $v0, $at, .L004939BC
/* 004939B0 00402025 */   move  $a0, $v0
/* 004939B4 10000008 */  b     .L004939D8
/* 004939B8 24100001 */   li    $s0, 1
.L004939BC:
/* 004939BC 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 004939C0 02202825 */  move  $a1, $s1
/* 004939C4 00008025 */  move  $s0, $zero
/* 004939C8 0320F809 */  jalr  $t9
/* 004939CC AFA70044 */   sw    $a3, 0x44($sp)
/* 004939D0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004939D4 8FA70044 */  lw    $a3, 0x44($sp)
.L004939D8:
/* 004939D8 5600001E */  bnezl $s0, .L00493A54
/* 004939DC 2401FFF3 */   li    $at, -13
/* 004939E0 8E220004 */  lw    $v0, 4($s1)
.L004939E4:
/* 004939E4 90470000 */  lbu   $a3, ($v0)
/* 004939E8 24E7FFD0 */  addiu $a3, $a3, -0x30
/* 004939EC 2CE1000A */  sltiu $at, $a3, 0xa
/* 004939F0 10200017 */  beqz  $at, .L00493A50
/* 004939F4 3C011999 */   lui   $at, 0x1999
/* 004939F8 34219999 */  ori   $at, $at, 0x9999
/* 004939FC 0241082B */  sltu  $at, $s2, $at
/* 00493A00 1420000A */  bnez  $at, .L00493A2C
/* 00493A04 8E230000 */   lw    $v1, ($s1)
/* 00493A08 3C011999 */  lui   $at, 0x1999
/* 00493A0C 3421999A */  ori   $at, $at, 0x999a
/* 00493A10 0241082B */  sltu  $at, $s2, $at
/* 00493A14 10200004 */  beqz  $at, .L00493A28
/* 00493A18 240F0001 */   li    $t7, 1
/* 00493A1C 2CE10006 */  sltiu $at, $a3, 6
/* 00493A20 14200002 */  bnez  $at, .L00493A2C
/* 00493A24 00000000 */   nop   
.L00493A28:
/* 00493A28 AFAF0038 */  sw    $t7, 0x38($sp)
.L00493A2C:
/* 00493A2C 02540019 */  multu $s2, $s4
/* 00493A30 2479FFFF */  addiu $t9, $v1, -1
/* 00493A34 24480001 */  addiu $t0, $v0, 1
/* 00493A38 AE390000 */  sw    $t9, ($s1)
/* 00493A3C AE280004 */  sw    $t0, 4($s1)
/* 00493A40 0000C012 */  mflo  $t8
/* 00493A44 03079021 */  addu  $s2, $t8, $a3
/* 00493A48 1000FFCD */  b     .L00493980
/* 00493A4C 8E2E0000 */   lw    $t6, ($s1)
.L00493A50:
/* 00493A50 2401FFF3 */  li    $at, -13
.L00493A54:
/* 00493A54 14E10009 */  bne   $a3, $at, .L00493A7C
/* 00493A58 2E410002 */   sltiu $at, $s2, 2
/* 00493A5C 14200007 */  bnez  $at, .L00493A7C
/* 00493A60 2E410024 */   sltiu $at, $s2, 0x24
/* 00493A64 10200005 */  beqz  $at, .L00493A7C
/* 00493A68 00000000 */   nop   
/* 00493A6C 8F898CC4 */  lw     $t1, %got(_libp_ansi_pascal)($gp)
/* 00493A70 8D290000 */  lw    $t1, ($t1)
/* 00493A74 51200004 */  beql  $t1, $zero, .L00493A88
/* 00493A78 8E2A0000 */   lw    $t2, ($s1)
.L00493A7C:
/* 00493A7C 1000006B */  b     .L00493C2C
/* 00493A80 02401025 */   move  $v0, $s2
/* 00493A84 8E2A0000 */  lw    $t2, ($s1)
.L00493A88:
/* 00493A88 8E2C0004 */  lw    $t4, 4($s1)
/* 00493A8C 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00493A90 254BFFFF */  addiu $t3, $t2, -1
/* 00493A94 258D0001 */  addiu $t5, $t4, 1
/* 00493A98 AE2B0000 */  sw    $t3, ($s1)
/* 00493A9C AE2D0004 */  sw    $t5, 4($s1)
/* 00493AA0 8DCE0000 */  lw    $t6, ($t6)
/* 00493AA4 0240A825 */  move  $s5, $s2
/* 00493AA8 51C00009 */  beql  $t6, $zero, .L00493AD0
/* 00493AAC 8E2F0000 */   lw    $t7, ($s1)
/* 00493AB0 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493AB4 02202025 */  move  $a0, $s1
/* 00493AB8 0320F809 */  jalr  $t9
/* 00493ABC 00000000 */   nop   
/* 00493AC0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493AC4 10000011 */  b     .L00493B0C
/* 00493AC8 00403825 */   move  $a3, $v0
/* 00493ACC 8E2F0000 */  lw    $t7, ($s1)
.L00493AD0:
/* 00493AD0 25F9FFFF */  addiu $t9, $t7, -1
/* 00493AD4 07210008 */  bgez  $t9, .L00493AF8
/* 00493AD8 AE390000 */   sw    $t9, ($s1)
/* 00493ADC 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493AE0 02202025 */  move  $a0, $s1
/* 00493AE4 0320F809 */  jalr  $t9
/* 00493AE8 00000000 */   nop   
/* 00493AEC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493AF0 10000005 */  b     .L00493B08
/* 00493AF4 00408025 */   move  $s0, $v0
.L00493AF8:
/* 00493AF8 8E220004 */  lw    $v0, 4($s1)
/* 00493AFC 90500000 */  lbu   $s0, ($v0)
/* 00493B00 24480001 */  addiu $t0, $v0, 1
/* 00493B04 AE280004 */  sw    $t0, 4($s1)
.L00493B08:
/* 00493B08 02003825 */  move  $a3, $s0
.L00493B0C:
/* 00493B0C 8F898044 */  lw    $t1, %got(D_10011B70)($gp)
/* 00493B10 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 00493B14 25291B70 */  addiu $t1, %lo(D_10011B70) # addiu $t1, $t1, 0x1b70
/* 00493B18 00E95021 */  addu  $t2, $a3, $t1
/* 00493B1C 91430000 */  lbu   $v1, ($t2)
/* 00493B20 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
/* 00493B24 0075082B */  sltu  $at, $v1, $s5
/* 00493B28 1420000B */  bnez  $at, .L00493B58
/* 00493B2C 00609025 */   move  $s2, $v1
/* 00493B30 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00493B34 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493B38 8F858044 */  lw    $a1, %got(RO_1000F760)($gp)
/* 00493B3C 00E03025 */  move  $a2, $a3
/* 00493B40 24840020 */  addiu $a0, $a0, 0x20
/* 00493B44 0320F809 */  jalr  $t9
/* 00493B48 24A5F760 */   addiu $a1, %lo(RO_1000F760) # addiu $a1, $a1, -0x8a0
/* 00493B4C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493B50 10000036 */  b     .L00493C2C
/* 00493B54 00001025 */   move  $v0, $zero
.L00493B58:
/* 00493B58 8E2B0000 */  lw    $t3, ($s1)
.L00493B5C:
/* 00493B5C 5D600015 */  bgtzl $t3, .L00493BB4
/* 00493B60 8E220004 */   lw    $v0, 4($s1)
/* 00493B64 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493B68 02202025 */  move  $a0, $s1
/* 00493B6C 0320F809 */  jalr  $t9
/* 00493B70 00000000 */   nop   
/* 00493B74 2401FFFF */  li    $at, -1
/* 00493B78 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493B7C AE620000 */  sw    $v0, ($s3)
/* 00493B80 14410003 */  bne   $v0, $at, .L00493B90
/* 00493B84 00402025 */   move  $a0, $v0
/* 00493B88 10000007 */  b     .L00493BA8
/* 00493B8C 24100001 */   li    $s0, 1
.L00493B90:
/* 00493B90 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00493B94 02202825 */  move  $a1, $s1
/* 00493B98 00008025 */  move  $s0, $zero
/* 00493B9C 0320F809 */  jalr  $t9
/* 00493BA0 00000000 */   nop   
/* 00493BA4 8FBC0030 */  lw    $gp, 0x30($sp)
.L00493BA8:
/* 00493BA8 56000016 */  bnezl $s0, .L00493C04
/* 00493BAC 8FA80038 */   lw    $t0, 0x38($sp)
/* 00493BB0 8E220004 */  lw    $v0, 4($s1)
.L00493BB4:
/* 00493BB4 8F8C8044 */  lw    $t4, %got(D_10011B70)($gp)
/* 00493BB8 90470000 */  lbu   $a3, ($v0)
/* 00493BBC 258C1B70 */  addiu $t4, %lo(D_10011B70) # addiu $t4, $t4, 0x1b70
/* 00493BC0 30E7007F */  andi  $a3, $a3, 0x7f
/* 00493BC4 00EC6821 */  addu  $t5, $a3, $t4
/* 00493BC8 91A30000 */  lbu   $v1, ($t5)
/* 00493BCC 0075082B */  sltu  $at, $v1, $s5
/* 00493BD0 5020000C */  beql  $at, $zero, .L00493C04
/* 00493BD4 8FA80038 */   lw    $t0, 0x38($sp)
/* 00493BD8 02550019 */  multu $s2, $s5
/* 00493BDC 8E2F0000 */  lw    $t7, ($s1)
/* 00493BE0 24590001 */  addiu $t9, $v0, 1
/* 00493BE4 AE390004 */  sw    $t9, 4($s1)
/* 00493BE8 25F8FFFF */  addiu $t8, $t7, -1
/* 00493BEC AE380000 */  sw    $t8, ($s1)
/* 00493BF0 00007012 */  mflo  $t6
/* 00493BF4 01C39021 */  addu  $s2, $t6, $v1
/* 00493BF8 1000FFD8 */  b     .L00493B5C
/* 00493BFC 8E2B0000 */   lw    $t3, ($s1)
/* 00493C00 8FA80038 */  lw    $t0, 0x38($sp)
.L00493C04:
/* 00493C04 51000009 */  beql  $t0, $zero, .L00493C2C
/* 00493C08 02401025 */   move  $v0, $s2
/* 00493C0C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00493C10 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493C14 8F858044 */  lw    $a1, %got(RO_1000F794)($gp)
/* 00493C18 24840020 */  addiu $a0, $a0, 0x20
/* 00493C1C 0320F809 */  jalr  $t9
/* 00493C20 24A5F794 */   addiu $a1, %lo(RO_1000F794) # addiu $a1, $a1, -0x86c
/* 00493C24 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00493C28 02401025 */  move  $v0, $s2
.L00493C2C:
/* 00493C2C 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00493C30 8FB00018 */  lw    $s0, 0x18($sp)
/* 00493C34 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00493C38 8FB20020 */  lw    $s2, 0x20($sp)
/* 00493C3C 8FB30024 */  lw    $s3, 0x24($sp)
/* 00493C40 8FB40028 */  lw    $s4, 0x28($sp)
/* 00493C44 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00493C48 03E00008 */  jr    $ra
/* 00493C4C 27BD0048 */   addiu $sp, $sp, 0x48
    .type read_cardinal, @function
    .size read_cardinal, .-read_cardinal
    .end read_cardinal

glabel read_double
    .ent read_double
    # 004945F8 read_real
/* 00493C50 3C1C0FB8 */  .cpload $t9
/* 00493C54 279C6640 */  
/* 00493C58 0399E021 */  
/* 00493C5C 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 00493C60 AFB10028 */  sw    $s1, 0x28($sp)
/* 00493C64 00808825 */  move  $s1, $a0
/* 00493C68 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00493C6C AFBC0038 */  sw    $gp, 0x38($sp)
/* 00493C70 AFB40034 */  sw    $s4, 0x34($sp)
/* 00493C74 AFB30030 */  sw    $s3, 0x30($sp)
/* 00493C78 AFB2002C */  sw    $s2, 0x2c($sp)
/* 00493C7C AFB00024 */  sw    $s0, 0x24($sp)
/* 00493C80 F7B60018 */  sdc1  $f22, 0x18($sp)
/* 00493C84 1480000B */  bnez  $a0, .L00493CB4
/* 00493C88 F7B40010 */   sdc1  $f20, 0x10($sp)
/* 00493C8C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00493C90 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493C94 8F858044 */  lw    $a1, %got(RO_1000F7B0)($gp)
/* 00493C98 24840020 */  addiu $a0, $a0, 0x20
/* 00493C9C 0320F809 */  jalr  $t9
/* 00493CA0 24A5F7B0 */   addiu $a1, %lo(RO_1000F7B0) # addiu $a1, $a1, -0x850
/* 00493CA4 44800800 */  mtc1  $zero, $f1
/* 00493CA8 44800000 */  mtc1  $zero, $f0
/* 00493CAC 10000248 */  b     .L004945D0
/* 00493CB0 8FBC0038 */   lw    $gp, 0x38($sp)
.L00493CB4:
/* 00493CB4 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00493CB8 8DCE0000 */  lw    $t6, ($t6)
/* 00493CBC 51C00009 */  beql  $t6, $zero, .L00493CE4
/* 00493CC0 8E2F0000 */   lw    $t7, ($s1)
/* 00493CC4 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493CC8 02202025 */  move  $a0, $s1
/* 00493CCC 0320F809 */  jalr  $t9
/* 00493CD0 00000000 */   nop   
/* 00493CD4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493CD8 10000011 */  b     .L00493D20
/* 00493CDC 00403825 */   move  $a3, $v0
/* 00493CE0 8E2F0000 */  lw    $t7, ($s1)
.L00493CE4:
/* 00493CE4 25F8FFFF */  addiu $t8, $t7, -1
/* 00493CE8 07010008 */  bgez  $t8, .L00493D0C
/* 00493CEC AE380000 */   sw    $t8, ($s1)
/* 00493CF0 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493CF4 02202025 */  move  $a0, $s1
/* 00493CF8 0320F809 */  jalr  $t9
/* 00493CFC 00000000 */   nop   
/* 00493D00 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493D04 10000005 */  b     .L00493D1C
/* 00493D08 00408025 */   move  $s0, $v0
.L00493D0C:
/* 00493D0C 8E230004 */  lw    $v1, 4($s1)
/* 00493D10 90700000 */  lbu   $s0, ($v1)
/* 00493D14 24680001 */  addiu $t0, $v1, 1
/* 00493D18 AE280004 */  sw    $t0, 4($s1)
.L00493D1C:
/* 00493D1C 02003825 */  move  $a3, $s0
.L00493D20:
/* 00493D20 24120020 */  li    $s2, 32
/* 00493D24 10F20005 */  beq   $a3, $s2, .L00493D3C
/* 00493D28 24130009 */   li    $s3, 9
/* 00493D2C 10F30003 */  beq   $a3, $s3, .L00493D3C
/* 00493D30 2401000A */   li    $at, 10
/* 00493D34 54E10025 */  bnel  $a3, $at, .L00493DCC
/* 00493D38 2401002D */   li    $at, 45
.L00493D3C:
/* 00493D3C 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 00493D40 24130009 */  li    $s3, 9
/* 00493D44 8D290000 */  lw    $t1, ($t1)
/* 00493D48 51200009 */  beql  $t1, $zero, .L00493D70
/* 00493D4C 8E2A0000 */   lw    $t2, ($s1)
/* 00493D50 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493D54 02202025 */  move  $a0, $s1
/* 00493D58 0320F809 */  jalr  $t9
/* 00493D5C 00000000 */   nop   
/* 00493D60 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493D64 10000011 */  b     .L00493DAC
/* 00493D68 00403825 */   move  $a3, $v0
/* 00493D6C 8E2A0000 */  lw    $t2, ($s1)
.L00493D70:
/* 00493D70 254BFFFF */  addiu $t3, $t2, -1
/* 00493D74 05610008 */  bgez  $t3, .L00493D98
/* 00493D78 AE2B0000 */   sw    $t3, ($s1)
/* 00493D7C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493D80 02202025 */  move  $a0, $s1
/* 00493D84 0320F809 */  jalr  $t9
/* 00493D88 00000000 */   nop   
/* 00493D8C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493D90 10000005 */  b     .L00493DA8
/* 00493D94 00408025 */   move  $s0, $v0
.L00493D98:
/* 00493D98 8E230004 */  lw    $v1, 4($s1)
/* 00493D9C 90700000 */  lbu   $s0, ($v1)
/* 00493DA0 246D0001 */  addiu $t5, $v1, 1
/* 00493DA4 AE2D0004 */  sw    $t5, 4($s1)
.L00493DA8:
/* 00493DA8 02003825 */  move  $a3, $s0
.L00493DAC:
/* 00493DAC 10F2FFE3 */  beq   $a3, $s2, .L00493D3C
/* 00493DB0 00000000 */   nop   
/* 00493DB4 10F3FFE1 */  beq   $a3, $s3, .L00493D3C
/* 00493DB8 00000000 */   nop   
/* 00493DBC 2401000A */  li    $at, 10
/* 00493DC0 10E1FFDE */  beq   $a3, $at, .L00493D3C
/* 00493DC4 00000000 */   nop   
/* 00493DC8 2401002D */  li    $at, 45
.L00493DCC:
/* 00493DCC 10E10004 */  beq   $a3, $at, .L00493DE0
/* 00493DD0 AFA700B0 */   sw    $a3, 0xb0($sp)
/* 00493DD4 2401002B */  li    $at, 43
/* 00493DD8 54E1001D */  bnel  $a3, $at, .L00493E50
/* 00493DDC 24E7FFD0 */   addiu $a3, $a3, -0x30
.L00493DE0:
/* 00493DE0 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00493DE4 8DCE0000 */  lw    $t6, ($t6)
/* 00493DE8 51C00009 */  beql  $t6, $zero, .L00493E10
/* 00493DEC 8E2F0000 */   lw    $t7, ($s1)
/* 00493DF0 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493DF4 02202025 */  move  $a0, $s1
/* 00493DF8 0320F809 */  jalr  $t9
/* 00493DFC 00000000 */   nop   
/* 00493E00 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493E04 10000011 */  b     .L00493E4C
/* 00493E08 00403825 */   move  $a3, $v0
/* 00493E0C 8E2F0000 */  lw    $t7, ($s1)
.L00493E10:
/* 00493E10 25F8FFFF */  addiu $t8, $t7, -1
/* 00493E14 07010008 */  bgez  $t8, .L00493E38
/* 00493E18 AE380000 */   sw    $t8, ($s1)
/* 00493E1C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493E20 02202025 */  move  $a0, $s1
/* 00493E24 0320F809 */  jalr  $t9
/* 00493E28 00000000 */   nop   
/* 00493E2C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493E30 10000005 */  b     .L00493E48
/* 00493E34 00408025 */   move  $s0, $v0
.L00493E38:
/* 00493E38 8E230004 */  lw    $v1, 4($s1)
/* 00493E3C 90700000 */  lbu   $s0, ($v1)
/* 00493E40 24680001 */  addiu $t0, $v1, 1
/* 00493E44 AE280004 */  sw    $t0, 4($s1)
.L00493E48:
/* 00493E48 02003825 */  move  $a3, $s0
.L00493E4C:
/* 00493E4C 24E7FFD0 */  addiu $a3, $a3, -0x30
.L00493E50:
/* 00493E50 2CE1000A */  sltiu $at, $a3, 0xa
/* 00493E54 1420000C */  bnez  $at, .L00493E88
/* 00493E58 00003025 */   move  $a2, $zero
/* 00493E5C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00493E60 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493E64 8F858044 */  lw    $a1, %got(RO_1000F7E8)($gp)
/* 00493E68 24E60030 */  addiu $a2, $a3, 0x30
/* 00493E6C 24840020 */  addiu $a0, $a0, 0x20
/* 00493E70 0320F809 */  jalr  $t9
/* 00493E74 24A5F7E8 */   addiu $a1, %lo(RO_1000F7E8) # addiu $a1, $a1, -0x818
/* 00493E78 44800800 */  mtc1  $zero, $f1
/* 00493E7C 44800000 */  mtc1  $zero, $f0
/* 00493E80 100001D3 */  b     .L004945D0
/* 00493E84 8FBC0038 */   lw    $gp, 0x38($sp)
.L00493E88:
/* 00493E88 10E00003 */  beqz  $a3, .L00493E98
/* 00493E8C 27B40074 */   addiu $s4, $sp, 0x74
/* 00493E90 A3A70074 */  sb    $a3, 0x74($sp)
/* 00493E94 27B40075 */  addiu $s4, $sp, 0x75
.L00493E98:
/* 00493E98 8F928048 */  lw    $s2, %got(B_1001C2C0)($gp)
/* 00493E9C AFA700AC */  sw    $a3, 0xac($sp)
/* 00493EA0 00009825 */  move  $s3, $zero
/* 00493EA4 2652C2C0 */  addiu $s2, %lo(B_1001C2C0) # addiu $s2, $s2, -0x3d40
.L00493EA8:
/* 00493EA8 8E290000 */  lw    $t1, ($s1)
/* 00493EAC 5D20001B */  bgtzl $t1, .L00493F1C
/* 00493EB0 8E230004 */   lw    $v1, 4($s1)
/* 00493EB4 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493EB8 02202025 */  move  $a0, $s1
/* 00493EBC AFA60094 */  sw    $a2, 0x94($sp)
/* 00493EC0 0320F809 */  jalr  $t9
/* 00493EC4 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 00493EC8 2401FFFF */  li    $at, -1
/* 00493ECC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493ED0 8FA60094 */  lw    $a2, 0x94($sp)
/* 00493ED4 8FA700B4 */  lw    $a3, 0xb4($sp)
/* 00493ED8 AE420000 */  sw    $v0, ($s2)
/* 00493EDC 14410003 */  bne   $v0, $at, .L00493EEC
/* 00493EE0 00402025 */   move  $a0, $v0
/* 00493EE4 1000000A */  b     .L00493F10
/* 00493EE8 24100001 */   li    $s0, 1
.L00493EEC:
/* 00493EEC 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00493EF0 02202825 */  move  $a1, $s1
/* 00493EF4 00008025 */  move  $s0, $zero
/* 00493EF8 AFA60094 */  sw    $a2, 0x94($sp)
/* 00493EFC 0320F809 */  jalr  $t9
/* 00493F00 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 00493F04 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493F08 8FA60094 */  lw    $a2, 0x94($sp)
/* 00493F0C 8FA700B4 */  lw    $a3, 0xb4($sp)
.L00493F10:
/* 00493F10 5600002C */  bnezl $s0, .L00493FC4
/* 00493F14 24080001 */   li    $t0, 1
/* 00493F18 8E230004 */  lw    $v1, 4($s1)
.L00493F1C:
/* 00493F1C 2401002E */  li    $at, 46
/* 00493F20 27AB0085 */  addiu $t3, $sp, 0x85
/* 00493F24 90670000 */  lbu   $a3, ($v1)
/* 00493F28 54E10007 */  bnel  $a3, $at, .L00493F48
/* 00493F2C 24E7FFD0 */   addiu $a3, $a3, -0x30
/* 00493F30 54C00005 */  bnezl $a2, .L00493F48
/* 00493F34 24E7FFD0 */   addiu $a3, $a3, -0x30
/* 00493F38 24060001 */  li    $a2, 1
/* 00493F3C 1000001B */  b     .L00493FAC
/* 00493F40 8E240000 */   lw    $a0, ($s1)
/* 00493F44 24E7FFD0 */  addiu $a3, $a3, -0x30
.L00493F48:
/* 00493F48 2CE1000A */  sltiu $at, $a3, 0xa
/* 00493F4C 1020001C */  beqz  $at, .L00493FC0
/* 00493F50 27AC0074 */   addiu $t4, $sp, 0x74
/* 00493F54 168B0005 */  bne   $s4, $t3, .L00493F6C
/* 00493F58 00000000 */   nop   
/* 00493F5C 14C0000D */  bnez  $a2, .L00493F94
/* 00493F60 8E240000 */   lw    $a0, ($s1)
/* 00493F64 1000000B */  b     .L00493F94
/* 00493F68 26730001 */   addiu $s3, $s3, 1
.L00493F6C:
/* 00493F6C 168C0005 */  bne   $s4, $t4, .L00493F84
/* 00493F70 02669823 */   subu  $s3, $s3, $a2
/* 00493F74 54E00004 */  bnezl $a3, .L00493F88
/* 00493F78 A2870000 */   sb    $a3, ($s4)
/* 00493F7C 10000005 */  b     .L00493F94
/* 00493F80 8E240000 */   lw    $a0, ($s1)
.L00493F84:
/* 00493F84 A2870000 */  sb    $a3, ($s4)
.L00493F88:
/* 00493F88 8E230004 */  lw    $v1, 4($s1)
/* 00493F8C 8E240000 */  lw    $a0, ($s1)
/* 00493F90 26940001 */  addiu $s4, $s4, 1
.L00493F94:
/* 00493F94 8FAD00AC */  lw    $t5, 0xac($sp)
/* 00493F98 000D7080 */  sll   $t6, $t5, 2
/* 00493F9C 01CD7021 */  addu  $t6, $t6, $t5
/* 00493FA0 000E7040 */  sll   $t6, $t6, 1
/* 00493FA4 01C77821 */  addu  $t7, $t6, $a3
/* 00493FA8 AFAF00AC */  sw    $t7, 0xac($sp)
.L00493FAC:
/* 00493FAC 2498FFFF */  addiu $t8, $a0, -1
/* 00493FB0 24790001 */  addiu $t9, $v1, 1
/* 00493FB4 AE380000 */  sw    $t8, ($s1)
/* 00493FB8 1000FFBB */  b     .L00493EA8
/* 00493FBC AE390004 */   sw    $t9, 4($s1)
.L00493FC0:
/* 00493FC0 24080001 */  li    $t0, 1
.L00493FC4:
/* 00493FC4 2401FFF3 */  li    $at, -13
/* 00493FC8 14E100B6 */  bne   $a3, $at, .L004942A4
/* 00493FCC AFA80090 */   sw    $t0, 0x90($sp)
/* 00493FD0 14C000B4 */  bnez  $a2, .L004942A4
/* 00493FD4 8FA900AC */   lw    $t1, 0xac($sp)
/* 00493FD8 2D210002 */  sltiu $at, $t1, 2
/* 00493FDC 142000B1 */  bnez  $at, .L004942A4
/* 00493FE0 2D210024 */   sltiu $at, $t1, 0x24
/* 00493FE4 502000B0 */  beql  $at, $zero, .L004942A8
/* 00493FE8 24010035 */   li    $at, 53
/* 00493FEC 8F8A8CC4 */  lw     $t2, %got(_libp_ansi_pascal)($gp)
/* 00493FF0 D7B400A0 */  ldc1  $f20, 0xa0($sp)
/* 00493FF4 8D4A0000 */  lw    $t2, ($t2)
/* 00493FF8 554000AB */  bnezl $t2, .L004942A8
/* 00493FFC 24010035 */   li    $at, 53
/* 00494000 8E2B0000 */  lw    $t3, ($s1)
/* 00494004 8E2D0004 */  lw    $t5, 4($s1)
/* 00494008 8F8F8064 */  lw     $t7, %got(__us_rsthread_stdio)($gp)
/* 0049400C 256CFFFF */  addiu $t4, $t3, -1
/* 00494010 25AE0001 */  addiu $t6, $t5, 1
/* 00494014 AE2C0000 */  sw    $t4, ($s1)
/* 00494018 AE2E0004 */  sw    $t6, 4($s1)
/* 0049401C 8DEF0000 */  lw    $t7, ($t7)
/* 00494020 51E0000B */  beql  $t7, $zero, .L00494050
/* 00494024 8E380000 */   lw    $t8, ($s1)
/* 00494028 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 0049402C 02202025 */  move  $a0, $s1
/* 00494030 AFA60094 */  sw    $a2, 0x94($sp)
/* 00494034 0320F809 */  jalr  $t9
/* 00494038 00000000 */   nop   
/* 0049403C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494040 8FA60094 */  lw    $a2, 0x94($sp)
/* 00494044 10000013 */  b     .L00494094
/* 00494048 00408025 */   move  $s0, $v0
/* 0049404C 8E380000 */  lw    $t8, ($s1)
.L00494050:
/* 00494050 2719FFFF */  addiu $t9, $t8, -1
/* 00494054 0721000A */  bgez  $t9, .L00494080
/* 00494058 AE390000 */   sw    $t9, ($s1)
/* 0049405C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494060 02202025 */  move  $a0, $s1
/* 00494064 AFA60094 */  sw    $a2, 0x94($sp)
/* 00494068 0320F809 */  jalr  $t9
/* 0049406C 00000000 */   nop   
/* 00494070 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494074 8FA60094 */  lw    $a2, 0x94($sp)
/* 00494078 10000005 */  b     .L00494090
/* 0049407C 00402025 */   move  $a0, $v0
.L00494080:
/* 00494080 8E230004 */  lw    $v1, 4($s1)
/* 00494084 90640000 */  lbu   $a0, ($v1)
/* 00494088 24690001 */  addiu $t1, $v1, 1
/* 0049408C AE290004 */  sw    $t1, 4($s1)
.L00494090:
/* 00494090 00808025 */  move  $s0, $a0
.L00494094:
/* 00494094 8F8C8044 */  lw    $t4, %got(D_10011B70)($gp)
/* 00494098 320A007F */  andi  $t2, $s0, 0x7f
/* 0049409C AFAA0044 */  sw    $t2, 0x44($sp)
/* 004940A0 258C1B70 */  addiu $t4, %lo(D_10011B70) # addiu $t4, $t4, 0x1b70
/* 004940A4 014C6821 */  addu  $t5, $t2, $t4
/* 004940A8 91A20000 */  lbu   $v0, ($t5)
/* 004940AC 8FAE00AC */  lw    $t6, 0xac($sp)
/* 004940B0 01403825 */  move  $a3, $t2
/* 004940B4 004E082B */  sltu  $at, $v0, $t6
/* 004940B8 5420000D */  bnezl $at, .L004940F0
/* 004940BC 44822000 */   mtc1  $v0, $f4
/* 004940C0 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004940C4 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004940C8 8F858044 */  lw    $a1, %got(RO_1000F818)($gp)
/* 004940CC 01403025 */  move  $a2, $t2
/* 004940D0 24840020 */  addiu $a0, $a0, 0x20
/* 004940D4 0320F809 */  jalr  $t9
/* 004940D8 24A5F818 */   addiu $a1, %lo(RO_1000F818) # addiu $a1, $a1, -0x7e8
/* 004940DC 44800800 */  mtc1  $zero, $f1
/* 004940E0 44800000 */  mtc1  $zero, $f0
/* 004940E4 1000013A */  b     .L004945D0
/* 004940E8 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004940EC 44822000 */  mtc1  $v0, $f4
.L004940F0:
/* 004940F0 3C0141F0 */  li    $at, 0x41F00000 # 30.000000
/* 004940F4 04410005 */  bgez  $v0, .L0049410C
/* 004940F8 468025A1 */   cvt.d.w $f22, $f4
/* 004940FC 44813800 */  mtc1  $at, $f7
/* 00494100 44803000 */  mtc1  $zero, $f6
/* 00494104 00000000 */  nop   
/* 00494108 4626B580 */  add.d $f22, $f22, $f6
.L0049410C:
/* 0049410C 8E2F0000 */  lw    $t7, ($s1)
/* 00494110 5DE0001B */  bgtzl $t7, .L00494180
/* 00494114 8E230004 */   lw    $v1, 4($s1)
/* 00494118 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049411C 02202025 */  move  $a0, $s1
/* 00494120 AFA60094 */  sw    $a2, 0x94($sp)
/* 00494124 0320F809 */  jalr  $t9
/* 00494128 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 0049412C 2401FFFF */  li    $at, -1
/* 00494130 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494134 8FA60094 */  lw    $a2, 0x94($sp)
/* 00494138 8FA700B4 */  lw    $a3, 0xb4($sp)
/* 0049413C AE420000 */  sw    $v0, ($s2)
/* 00494140 14410003 */  bne   $v0, $at, .L00494150
/* 00494144 00402025 */   move  $a0, $v0
/* 00494148 1000000A */  b     .L00494174
/* 0049414C 24100001 */   li    $s0, 1
.L00494150:
/* 00494150 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00494154 02202825 */  move  $a1, $s1
/* 00494158 00008025 */  move  $s0, $zero
/* 0049415C AFA60094 */  sw    $a2, 0x94($sp)
/* 00494160 0320F809 */  jalr  $t9
/* 00494164 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 00494168 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0049416C 8FA60094 */  lw    $a2, 0x94($sp)
/* 00494170 8FA700B4 */  lw    $a3, 0xb4($sp)
.L00494174:
/* 00494174 56000026 */  bnezl $s0, .L00494210
/* 00494178 24010023 */   li    $at, 35
/* 0049417C 8E230004 */  lw    $v1, 4($s1)
.L00494180:
/* 00494180 8F988044 */  lw    $t8, %got(D_10011B70)($gp)
/* 00494184 8FA800AC */  lw    $t0, 0xac($sp)
/* 00494188 90670000 */  lbu   $a3, ($v1)
/* 0049418C 27181B70 */  addiu $t8, %lo(D_10011B70) # addiu $t8, $t8, 0x1b70
/* 00494190 246A0001 */  addiu $t2, $v1, 1
/* 00494194 30E7007F */  andi  $a3, $a3, 0x7f
/* 00494198 00F8C821 */  addu  $t9, $a3, $t8
/* 0049419C 93220000 */  lbu   $v0, ($t9)
/* 004941A0 0048082B */  sltu  $at, $v0, $t0
/* 004941A4 50200010 */  beql  $at, $zero, .L004941E8
/* 004941A8 2401002E */   li    $at, 46
/* 004941AC 44825000 */  mtc1  $v0, $f10
/* 004941B0 4634B202 */  mul.d $f8, $f22, $f20
/* 004941B4 3C0141F0 */  li    $at, 0x41F00000 # 30.000000
/* 004941B8 04410005 */  bgez  $v0, .L004941D0
/* 004941BC 46805421 */   cvt.d.w $f16, $f10
/* 004941C0 44819800 */  mtc1  $at, $f19
/* 004941C4 44809000 */  mtc1  $zero, $f18
/* 004941C8 00000000 */  nop   
/* 004941CC 46328400 */  add.d $f16, $f16, $f18
.L004941D0:
/* 004941D0 46304580 */  add.d $f22, $f8, $f16
/* 004941D4 10C00009 */  beqz  $a2, .L004941FC
/* 004941D8 8E240000 */   lw    $a0, ($s1)
/* 004941DC 10000007 */  b     .L004941FC
/* 004941E0 2673FFFF */   addiu $s3, $s3, -1
/* 004941E4 2401002E */  li    $at, 46
.L004941E8:
/* 004941E8 54E10009 */  bnel  $a3, $at, .L00494210
/* 004941EC 24010023 */   li    $at, 35
/* 004941F0 14C00006 */  bnez  $a2, .L0049420C
/* 004941F4 24060001 */   li    $a2, 1
/* 004941F8 8E240000 */  lw    $a0, ($s1)
.L004941FC:
/* 004941FC 2489FFFF */  addiu $t1, $a0, -1
/* 00494200 AE290000 */  sw    $t1, ($s1)
/* 00494204 1000FFC1 */  b     .L0049410C
/* 00494208 AE2A0004 */   sw    $t2, 4($s1)
.L0049420C:
/* 0049420C 24010023 */  li    $at, 35
.L00494210:
/* 00494210 54E10021 */  bnel  $a3, $at, .L00494298
/* 00494214 24E7FFD0 */   addiu $a3, $a3, -0x30
/* 00494218 8E2C0000 */  lw    $t4, ($s1)
/* 0049421C 8E2E0004 */  lw    $t6, 4($s1)
/* 00494220 258DFFFF */  addiu $t5, $t4, -1
/* 00494224 25CB0001 */  addiu $t3, $t6, 1
/* 00494228 AE2D0000 */  sw    $t5, ($s1)
/* 0049422C 1DA00017 */  bgtz  $t5, .L0049428C
/* 00494230 AE2B0004 */   sw    $t3, 4($s1)
/* 00494234 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494238 02202025 */  move  $a0, $s1
/* 0049423C AFA700B4 */  sw    $a3, 0xb4($sp)
/* 00494240 0320F809 */  jalr  $t9
/* 00494244 00000000 */   nop   
/* 00494248 2401FFFF */  li    $at, -1
/* 0049424C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494250 8FA700B4 */  lw    $a3, 0xb4($sp)
/* 00494254 AE420000 */  sw    $v0, ($s2)
/* 00494258 14410003 */  bne   $v0, $at, .L00494268
/* 0049425C 00402025 */   move  $a0, $v0
/* 00494260 10000008 */  b     .L00494284
/* 00494264 24100001 */   li    $s0, 1
.L00494268:
/* 00494268 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 0049426C 02202825 */  move  $a1, $s1
/* 00494270 00008025 */  move  $s0, $zero
/* 00494274 0320F809 */  jalr  $t9
/* 00494278 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 0049427C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494280 8FA700B4 */  lw    $a3, 0xb4($sp)
.L00494284:
/* 00494284 56000004 */  bnezl $s0, .L00494298
/* 00494288 24E7FFD0 */   addiu $a3, $a3, -0x30
.L0049428C:
/* 0049428C 8E380004 */  lw    $t8, 4($s1)
/* 00494290 93070000 */  lbu   $a3, ($t8)
/* 00494294 24E7FFD0 */  addiu $a3, $a3, -0x30
.L00494298:
/* 00494298 AFA00090 */  sw    $zero, 0x90($sp)
/* 0049429C F7B40098 */  sdc1  $f20, 0x98($sp)
/* 004942A0 F7B600A0 */  sdc1  $f22, 0xa0($sp)
.L004942A4:
/* 004942A4 24010035 */  li    $at, 53
.L004942A8:
/* 004942A8 D7B40098 */  ldc1  $f20, 0x98($sp)
/* 004942AC 10E10004 */  beq   $a3, $at, .L004942C0
/* 004942B0 D7B600A0 */   ldc1  $f22, 0xa0($sp)
/* 004942B4 24010015 */  li    $at, 21
/* 004942B8 54E10083 */  bnel  $a3, $at, .L004944C8
/* 004942BC 8FB90090 */   lw    $t9, 0x90($sp)
.L004942C0:
/* 004942C0 8E390000 */  lw    $t9, ($s1)
/* 004942C4 8E290004 */  lw    $t1, 4($s1)
/* 004942C8 8F8C8064 */  lw     $t4, %got(__us_rsthread_stdio)($gp)
/* 004942CC 2728FFFF */  addiu $t0, $t9, -1
/* 004942D0 252A0001 */  addiu $t2, $t1, 1
/* 004942D4 AE280000 */  sw    $t0, ($s1)
/* 004942D8 AE2A0004 */  sw    $t2, 4($s1)
/* 004942DC 8D8C0000 */  lw    $t4, ($t4)
/* 004942E0 51800009 */  beql  $t4, $zero, .L00494308
/* 004942E4 8E2D0000 */   lw    $t5, ($s1)
/* 004942E8 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004942EC 02202025 */  move  $a0, $s1
/* 004942F0 0320F809 */  jalr  $t9
/* 004942F4 00000000 */   nop   
/* 004942F8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004942FC 10000011 */  b     .L00494344
/* 00494300 00403825 */   move  $a3, $v0
/* 00494304 8E2D0000 */  lw    $t5, ($s1)
.L00494308:
/* 00494308 25AEFFFF */  addiu $t6, $t5, -1
/* 0049430C 05C10008 */  bgez  $t6, .L00494330
/* 00494310 AE2E0000 */   sw    $t6, ($s1)
/* 00494314 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494318 02202025 */  move  $a0, $s1
/* 0049431C 0320F809 */  jalr  $t9
/* 00494320 00000000 */   nop   
/* 00494324 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494328 10000005 */  b     .L00494340
/* 0049432C 00408025 */   move  $s0, $v0
.L00494330:
/* 00494330 8E230004 */  lw    $v1, 4($s1)
/* 00494334 90700000 */  lbu   $s0, ($v1)
/* 00494338 246F0001 */  addiu $t7, $v1, 1
/* 0049433C AE2F0004 */  sw    $t7, 4($s1)
.L00494340:
/* 00494340 02003825 */  move  $a3, $s0
.L00494344:
/* 00494344 2401002D */  li    $at, 45
/* 00494348 10E10004 */  beq   $a3, $at, .L0049435C
/* 0049434C AFA70068 */   sw    $a3, 0x68($sp)
/* 00494350 2401002B */  li    $at, 43
/* 00494354 54E1001D */  bnel  $a3, $at, .L004943CC
/* 00494358 24E7FFD0 */   addiu $a3, $a3, -0x30
.L0049435C:
/* 0049435C 8F988064 */  lw     $t8, %got(__us_rsthread_stdio)($gp)
/* 00494360 8F180000 */  lw    $t8, ($t8)
/* 00494364 53000009 */  beql  $t8, $zero, .L0049438C
/* 00494368 8E390000 */   lw    $t9, ($s1)
/* 0049436C 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00494370 02202025 */  move  $a0, $s1
/* 00494374 0320F809 */  jalr  $t9
/* 00494378 00000000 */   nop   
/* 0049437C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494380 10000011 */  b     .L004943C8
/* 00494384 00403825 */   move  $a3, $v0
/* 00494388 8E390000 */  lw    $t9, ($s1)
.L0049438C:
/* 0049438C 2728FFFF */  addiu $t0, $t9, -1
/* 00494390 05010008 */  bgez  $t0, .L004943B4
/* 00494394 AE280000 */   sw    $t0, ($s1)
/* 00494398 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049439C 02202025 */  move  $a0, $s1
/* 004943A0 0320F809 */  jalr  $t9
/* 004943A4 00000000 */   nop   
/* 004943A8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004943AC 10000005 */  b     .L004943C4
/* 004943B0 00408025 */   move  $s0, $v0
.L004943B4:
/* 004943B4 8E230004 */  lw    $v1, 4($s1)
/* 004943B8 90700000 */  lbu   $s0, ($v1)
/* 004943BC 246A0001 */  addiu $t2, $v1, 1
/* 004943C0 AE2A0004 */  sw    $t2, 4($s1)
.L004943C4:
/* 004943C4 02003825 */  move  $a3, $s0
.L004943C8:
/* 004943C8 24E7FFD0 */  addiu $a3, $a3, -0x30
.L004943CC:
/* 004943CC 2CE1000A */  sltiu $at, $a3, 0xa
/* 004943D0 1420000C */  bnez  $at, .L00494404
/* 004943D4 00E03025 */   move  $a2, $a3
/* 004943D8 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004943DC 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004943E0 8F858044 */  lw    $a1, %got(RO_1000F848)($gp)
/* 004943E4 24E60030 */  addiu $a2, $a3, 0x30
/* 004943E8 24840020 */  addiu $a0, $a0, 0x20
/* 004943EC 0320F809 */  jalr  $t9
/* 004943F0 24A5F848 */   addiu $a1, %lo(RO_1000F848) # addiu $a1, $a1, -0x7b8
/* 004943F4 44800800 */  mtc1  $zero, $f1
/* 004943F8 44800000 */  mtc1  $zero, $f0
/* 004943FC 10000074 */  b     .L004945D0
/* 00494400 8FBC0038 */   lw    $gp, 0x38($sp)
.L00494404:
/* 00494404 8E2C0000 */  lw    $t4, ($s1)
/* 00494408 5D800018 */  bgtzl $t4, .L0049446C
/* 0049440C 8E230004 */   lw    $v1, 4($s1)
/* 00494410 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494414 02202025 */  move  $a0, $s1
/* 00494418 AFA60064 */  sw    $a2, 0x64($sp)
/* 0049441C 0320F809 */  jalr  $t9
/* 00494420 00000000 */   nop   
/* 00494424 2401FFFF */  li    $at, -1
/* 00494428 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0049442C 8FA60064 */  lw    $a2, 0x64($sp)
/* 00494430 AE420000 */  sw    $v0, ($s2)
/* 00494434 14410003 */  bne   $v0, $at, .L00494444
/* 00494438 00402025 */   move  $a0, $v0
/* 0049443C 10000008 */  b     .L00494460
/* 00494440 24100001 */   li    $s0, 1
.L00494444:
/* 00494444 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00494448 02202825 */  move  $a1, $s1
/* 0049444C 00008025 */  move  $s0, $zero
/* 00494450 0320F809 */  jalr  $t9
/* 00494454 AFA60064 */   sw    $a2, 0x64($sp)
/* 00494458 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0049445C 8FA60064 */  lw    $a2, 0x64($sp)
.L00494460:
/* 00494460 56000012 */  bnezl $s0, .L004944AC
/* 00494464 8FB80068 */   lw    $t8, 0x68($sp)
/* 00494468 8E230004 */  lw    $v1, 4($s1)
.L0049446C:
/* 0049446C 00066880 */  sll   $t5, $a2, 2
/* 00494470 01A66821 */  addu  $t5, $t5, $a2
/* 00494474 90670000 */  lbu   $a3, ($v1)
/* 00494478 000D6840 */  sll   $t5, $t5, 1
/* 0049447C 246F0001 */  addiu $t7, $v1, 1
/* 00494480 24E7FFD0 */  addiu $a3, $a3, -0x30
/* 00494484 2CE1000A */  sltiu $at, $a3, 0xa
/* 00494488 50200008 */  beql  $at, $zero, .L004944AC
/* 0049448C 8FB80068 */   lw    $t8, 0x68($sp)
/* 00494490 8E2E0000 */  lw    $t6, ($s1)
/* 00494494 01A73021 */  addu  $a2, $t5, $a3
/* 00494498 AE2F0004 */  sw    $t7, 4($s1)
/* 0049449C 25CBFFFF */  addiu $t3, $t6, -1
/* 004944A0 1000FFD8 */  b     .L00494404
/* 004944A4 AE2B0000 */   sw    $t3, ($s1)
/* 004944A8 8FB80068 */  lw    $t8, 0x68($sp)
.L004944AC:
/* 004944AC 2401002D */  li    $at, 45
/* 004944B0 57010004 */  bnel  $t8, $at, .L004944C4
/* 004944B4 02669821 */   addu  $s3, $s3, $a2
/* 004944B8 10000002 */  b     .L004944C4
/* 004944BC 02669823 */   subu  $s3, $s3, $a2
/* 004944C0 02669821 */  addu  $s3, $s3, $a2
.L004944C4:
/* 004944C4 8FB90090 */  lw    $t9, 0x90($sp)
.L004944C8:
/* 004944C8 27A80074 */  addiu $t0, $sp, 0x74
/* 004944CC 13200018 */  beqz  $t9, .L00494530
/* 004944D0 00000000 */   nop   
/* 004944D4 12880003 */  beq   $s4, $t0, .L004944E4
/* 004944D8 2A61FEAC */   slti  $at, $s3, -0x154
/* 004944DC 50200006 */  beql  $at, $zero, .L004944F8
/* 004944E0 2A610135 */   slti  $at, $s3, 0x135
.L004944E4:
/* 004944E4 4480B800 */  mtc1  $zero, $f23
/* 004944E8 4480B000 */  mtc1  $zero, $f22
/* 004944EC 10000031 */  b     .L004945B4
/* 004944F0 8FAC00B0 */   lw    $t4, 0xb0($sp)
/* 004944F4 2A610135 */  slti  $at, $s3, 0x135
.L004944F8:
/* 004944F8 14200005 */  bnez  $at, .L00494510
/* 004944FC 3C017FF0 */   li    $at, 0x7FF00000 # nan
/* 00494500 4481B800 */  mtc1  $at, $f23
/* 00494504 4480B000 */  mtc1  $zero, $f22
/* 00494508 1000002A */  b     .L004945B4
/* 0049450C 8FAC00B0 */   lw    $t4, 0xb0($sp)
.L00494510:
/* 00494510 8F998114 */  lw    $t9, %call16(_atod)($gp)
/* 00494514 27A40074 */  addiu $a0, $sp, 0x74
/* 00494518 02842823 */  subu  $a1, $s4, $a0
/* 0049451C 0320F809 */  jalr  $t9
/* 00494520 02603025 */   move  $a2, $s3
/* 00494524 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494528 10000021 */  b     .L004945B0
/* 0049452C 46200586 */   mov.d $f22, $f0
.L00494530:
/* 00494530 1260001F */  beqz  $s3, .L004945B0
/* 00494534 3C013FF0 */   li    $at, 0x3FF00000 # 1.875000
/* 00494538 06610003 */  bgez  $s3, .L00494548
/* 0049453C 02601025 */   move  $v0, $s3
/* 00494540 10000001 */  b     .L00494548
/* 00494544 00131023 */   negu  $v0, $s3
.L00494548:
/* 00494548 44810800 */  mtc1  $at, $f1
/* 0049454C 3C014030 */  li    $at, 0x40300000 # 2.750000
/* 00494550 44812800 */  mtc1  $at, $f5
/* 00494554 44802000 */  mtc1  $zero, $f4
/* 00494558 44800000 */  mtc1  $zero, $f0
/* 0049455C 4624A503 */  div.d $f20, $f20, $f4
.L00494560:
/* 00494560 304A0001 */  andi  $t2, $v0, 1
/* 00494564 11400002 */  beqz  $t2, .L00494570
/* 00494568 00021042 */   srl   $v0, $v0, 1
/* 0049456C 46340002 */  mul.d $f0, $f0, $f20
.L00494570:
/* 00494570 10400003 */  beqz  $v0, .L00494580
/* 00494574 00000000 */   nop   
/* 00494578 1000FFF9 */  b     .L00494560
/* 0049457C 4634A502 */   mul.d $f20, $f20, $f20
.L00494580:
/* 00494580 06630004 */  bgezl $s3, .L00494594
/* 00494584 4620B582 */   mul.d $f22, $f22, $f0
/* 00494588 10000002 */  b     .L00494594
/* 0049458C 4620B583 */   div.d $f22, $f22, $f0
/* 00494590 4620B582 */  mul.d $f22, $f22, $f0
.L00494594:
/* 00494594 8F998118 */  lw    $t9, %call16(ldexp)($gp)
/* 00494598 4620B306 */  mov.d $f12, $f22
/* 0049459C 00133080 */  sll   $a2, $s3, 2
/* 004945A0 0320F809 */  jalr  $t9
/* 004945A4 00000000 */   nop   
/* 004945A8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004945AC 46200586 */  mov.d $f22, $f0
.L004945B0:
/* 004945B0 8FAC00B0 */  lw    $t4, 0xb0($sp)
.L004945B4:
/* 004945B4 2401002D */  li    $at, 45
/* 004945B8 55810004 */  bnel  $t4, $at, .L004945CC
/* 004945BC 4620B086 */   mov.d $f2, $f22
/* 004945C0 10000002 */  b     .L004945CC
/* 004945C4 4620B087 */   neg.d $f2, $f22
/* 004945C8 4620B086 */  mov.d $f2, $f22
.L004945CC:
/* 004945CC 46201006 */  mov.d $f0, $f2
.L004945D0:
/* 004945D0 8FBF003C */  lw    $ra, 0x3c($sp)
/* 004945D4 D7B40010 */  ldc1  $f20, 0x10($sp)
/* 004945D8 D7B60018 */  ldc1  $f22, 0x18($sp)
/* 004945DC 8FB00024 */  lw    $s0, 0x24($sp)
/* 004945E0 8FB10028 */  lw    $s1, 0x28($sp)
/* 004945E4 8FB2002C */  lw    $s2, 0x2c($sp)
/* 004945E8 8FB30030 */  lw    $s3, 0x30($sp)
/* 004945EC 8FB40034 */  lw    $s4, 0x34($sp)
/* 004945F0 03E00008 */  jr    $ra
/* 004945F4 27BD00B8 */   addiu $sp, $sp, 0xb8
    .type read_double, @function
    .size read_double, .-read_double
    .end read_double

glabel read_real
    .ent read_real
/* 004945F8 3C1C0FB8 */  .cpload $t9
/* 004945FC 279C5C98 */  
/* 00494600 0399E021 */  
/* 00494604 8F998860 */  lw    $t9, %call16(read_double)($gp)
/* 00494608 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0049460C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00494610 0320F809 */  jalr  $t9
/* 00494614 AFBC0018 */   sw    $gp, 0x18($sp)
/* 00494618 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0049461C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00494620 27BD0020 */  addiu $sp, $sp, 0x20
/* 00494624 03E00008 */  jr    $ra
/* 00494628 46200020 */   cvt.s.d $f0, $f0
    .type read_real, @function
    .size read_real, .-read_real
    .end read_real

glabel read_int64
    .ent read_int64
/* 0049462C 3C1C0FB8 */  .cpload $t9
/* 00494630 279C5C64 */  
/* 00494634 0399E021 */  
/* 00494638 27BDFF80 */  addiu $sp, $sp, -0x80
/* 0049463C 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494640 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00494644 AFA50084 */  sw    $a1, 0x84($sp)
/* 00494648 00808825 */  move  $s1, $a0
/* 0049464C AFBF002C */  sw    $ra, 0x2c($sp)
/* 00494650 3C057FFF */  lui   $a1, 0x7fff
/* 00494654 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00494658 AFB30024 */  sw    $s3, 0x24($sp)
/* 0049465C AFB20020 */  sw    $s2, 0x20($sp)
/* 00494660 AFB00018 */  sw    $s0, 0x18($sp)
/* 00494664 34A5FFFF */  ori   $a1, $a1, 0xffff
/* 00494668 24040000 */  li    $a0, 0
/* 0049466C 24060000 */  li    $a2, 0
/* 00494670 0320F809 */  jalr  $t9
/* 00494674 24070002 */   li    $a3, 2
/* 00494678 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049467C 246F0001 */  addiu $t7, $v1, 1
/* 00494680 2DE10001 */  sltiu $at, $t7, 1
/* 00494684 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494688 00417021 */  addu  $t6, $v0, $at
/* 0049468C 3C057FFF */  lui   $a1, 0x7fff
/* 00494690 AFAE0048 */  sw    $t6, 0x48($sp)
/* 00494694 AFAF004C */  sw    $t7, 0x4c($sp)
/* 00494698 34A5FFFF */  ori   $a1, $a1, 0xffff
/* 0049469C 24040000 */  li    $a0, 0
/* 004946A0 24060000 */  li    $a2, 0
/* 004946A4 0320F809 */  jalr  $t9
/* 004946A8 24070002 */   li    $a3, 2
/* 004946AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004946B0 00402025 */  move  $a0, $v0
/* 004946B4 00602825 */  move  $a1, $v1
/* 004946B8 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 004946BC 24060000 */  li    $a2, 0
/* 004946C0 3C078000 */  lui   $a3, 0x8000
/* 004946C4 0320F809 */  jalr  $t9
/* 004946C8 00000000 */   nop   
/* 004946CC 8FB9004C */  lw    $t9, 0x4c($sp)
/* 004946D0 8FB80048 */  lw    $t8, 0x48($sp)
/* 004946D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004946D8 00794821 */  addu  $t1, $v1, $t9
/* 004946DC 0139082B */  sltu  $at, $t1, $t9
/* 004946E0 00224021 */  addu  $t0, $at, $v0
/* 004946E4 01184021 */  addu  $t0, $t0, $t8
/* 004946E8 AFA80058 */  sw    $t0, 0x58($sp)
/* 004946EC 1620000B */  bnez  $s1, .L0049471C
/* 004946F0 AFA9005C */   sw    $t1, 0x5c($sp)
/* 004946F4 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004946F8 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004946FC 8F858044 */  lw    $a1, %got(RO_1000F884)($gp)
/* 00494700 24840020 */  addiu $a0, $a0, 0x20
/* 00494704 0320F809 */  jalr  $t9
/* 00494708 24A5F884 */   addiu $a1, %lo(RO_1000F884) # addiu $a1, $a1, -0x77c
/* 0049470C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494710 24020000 */  li    $v0, 0
/* 00494714 10000197 */  b     .L00494D74
/* 00494718 24030000 */   li    $v1, 0
.L0049471C:
/* 0049471C 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 00494720 8D4A0000 */  lw    $t2, ($t2)
/* 00494724 51400009 */  beql  $t2, $zero, .L0049474C
/* 00494728 8E2B0000 */   lw    $t3, ($s1)
/* 0049472C 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00494730 02202025 */  move  $a0, $s1
/* 00494734 0320F809 */  jalr  $t9
/* 00494738 00000000 */   nop   
/* 0049473C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494740 10000011 */  b     .L00494788
/* 00494744 00409025 */   move  $s2, $v0
/* 00494748 8E2B0000 */  lw    $t3, ($s1)
.L0049474C:
/* 0049474C 256CFFFF */  addiu $t4, $t3, -1
/* 00494750 05810008 */  bgez  $t4, .L00494774
/* 00494754 AE2C0000 */   sw    $t4, ($s1)
/* 00494758 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049475C 02202025 */  move  $a0, $s1
/* 00494760 0320F809 */  jalr  $t9
/* 00494764 00000000 */   nop   
/* 00494768 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049476C 10000005 */  b     .L00494784
/* 00494770 00408025 */   move  $s0, $v0
.L00494774:
/* 00494774 8E220004 */  lw    $v0, 4($s1)
/* 00494778 90500000 */  lbu   $s0, ($v0)
/* 0049477C 244E0001 */  addiu $t6, $v0, 1
/* 00494780 AE2E0004 */  sw    $t6, 4($s1)
.L00494784:
/* 00494784 02009025 */  move  $s2, $s0
.L00494788:
/* 00494788 24130020 */  li    $s3, 32
/* 0049478C 12530005 */  beq   $s2, $s3, .L004947A4
/* 00494790 24010009 */   li    $at, 9
/* 00494794 12410003 */  beq   $s2, $at, .L004947A4
/* 00494798 2401000A */   li    $at, 10
/* 0049479C 56410025 */  bnel  $s2, $at, .L00494834
/* 004947A0 2401002D */   li    $at, 45
.L004947A4:
/* 004947A4 8F8F8064 */  lw     $t7, %got(__us_rsthread_stdio)($gp)
/* 004947A8 8DEF0000 */  lw    $t7, ($t7)
/* 004947AC 51E00009 */  beql  $t7, $zero, .L004947D4
/* 004947B0 8E380000 */   lw    $t8, ($s1)
/* 004947B4 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004947B8 02202025 */  move  $a0, $s1
/* 004947BC 0320F809 */  jalr  $t9
/* 004947C0 00000000 */   nop   
/* 004947C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004947C8 10000011 */  b     .L00494810
/* 004947CC 00409025 */   move  $s2, $v0
/* 004947D0 8E380000 */  lw    $t8, ($s1)
.L004947D4:
/* 004947D4 2719FFFF */  addiu $t9, $t8, -1
/* 004947D8 07210008 */  bgez  $t9, .L004947FC
/* 004947DC AE390000 */   sw    $t9, ($s1)
/* 004947E0 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004947E4 02202025 */  move  $a0, $s1
/* 004947E8 0320F809 */  jalr  $t9
/* 004947EC 00000000 */   nop   
/* 004947F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004947F4 10000005 */  b     .L0049480C
/* 004947F8 00408025 */   move  $s0, $v0
.L004947FC:
/* 004947FC 8E220004 */  lw    $v0, 4($s1)
/* 00494800 90500000 */  lbu   $s0, ($v0)
/* 00494804 24490001 */  addiu $t1, $v0, 1
/* 00494808 AE290004 */  sw    $t1, 4($s1)
.L0049480C:
/* 0049480C 02009025 */  move  $s2, $s0
.L00494810:
/* 00494810 1253FFE4 */  beq   $s2, $s3, .L004947A4
/* 00494814 00000000 */   nop   
/* 00494818 24010009 */  li    $at, 9
/* 0049481C 1241FFE1 */  beq   $s2, $at, .L004947A4
/* 00494820 00000000 */   nop   
/* 00494824 2401000A */  li    $at, 10
/* 00494828 1241FFDE */  beq   $s2, $at, .L004947A4
/* 0049482C 00000000 */   nop   
/* 00494830 2401002D */  li    $at, 45
.L00494834:
/* 00494834 12410004 */  beq   $s2, $at, .L00494848
/* 00494838 AFB20078 */   sw    $s2, 0x78($sp)
/* 0049483C 2401002B */  li    $at, 43
/* 00494840 5641001D */  bnel  $s2, $at, .L004948B8
/* 00494844 8FAF0084 */   lw    $t7, 0x84($sp)
.L00494848:
/* 00494848 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 0049484C 8D4A0000 */  lw    $t2, ($t2)
/* 00494850 51400009 */  beql  $t2, $zero, .L00494878
/* 00494854 8E2B0000 */   lw    $t3, ($s1)
/* 00494858 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 0049485C 02202025 */  move  $a0, $s1
/* 00494860 0320F809 */  jalr  $t9
/* 00494864 00000000 */   nop   
/* 00494868 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049486C 10000011 */  b     .L004948B4
/* 00494870 00409025 */   move  $s2, $v0
/* 00494874 8E2B0000 */  lw    $t3, ($s1)
.L00494878:
/* 00494878 256CFFFF */  addiu $t4, $t3, -1
/* 0049487C 05810008 */  bgez  $t4, .L004948A0
/* 00494880 AE2C0000 */   sw    $t4, ($s1)
/* 00494884 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494888 02202025 */  move  $a0, $s1
/* 0049488C 0320F809 */  jalr  $t9
/* 00494890 00000000 */   nop   
/* 00494894 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494898 10000005 */  b     .L004948B0
/* 0049489C 00408025 */   move  $s0, $v0
.L004948A0:
/* 004948A0 8E220004 */  lw    $v0, 4($s1)
/* 004948A4 90500000 */  lbu   $s0, ($v0)
/* 004948A8 244E0001 */  addiu $t6, $v0, 1
/* 004948AC AE2E0004 */  sw    $t6, 4($s1)
.L004948B0:
/* 004948B0 02009025 */  move  $s2, $s0
.L004948B4:
/* 004948B4 8FAF0084 */  lw    $t7, 0x84($sp)
.L004948B8:
/* 004948B8 2401000A */  li    $at, 10
/* 004948BC AFA00064 */  sw    $zero, 0x64($sp)
/* 004948C0 15E100AA */  bne   $t7, $at, .L00494B6C
/* 004948C4 00000000 */   nop   
/* 004948C8 2652FFD0 */  addiu $s2, $s2, -0x30
/* 004948CC 2E41000A */  sltiu $at, $s2, 0xa
/* 004948D0 1420000C */  bnez  $at, .L00494904
/* 004948D4 0240C825 */   move  $t9, $s2
/* 004948D8 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004948DC 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004948E0 8F858044 */  lw    $a1, %got(RO_1000F8BC)($gp)
/* 004948E4 26460030 */  addiu $a2, $s2, 0x30
/* 004948E8 24840020 */  addiu $a0, $a0, 0x20
/* 004948EC 0320F809 */  jalr  $t9
/* 004948F0 24A5F8BC */   addiu $a1, %lo(RO_1000F8BC) # addiu $a1, $a1, -0x744
/* 004948F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004948F8 24020000 */  li    $v0, 0
/* 004948FC 1000011D */  b     .L00494D74
/* 00494900 24030000 */   li    $v1, 0
.L00494904:
/* 00494904 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 00494908 24180000 */  li    $t8, 0
/* 0049490C AFB80070 */  sw    $t8, 0x70($sp)
/* 00494910 AFB20074 */  sw    $s2, 0x74($sp)
/* 00494914 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
.L00494918:
/* 00494918 8E280000 */  lw    $t0, ($s1)
/* 0049491C 5D000015 */  bgtzl $t0, .L00494974
/* 00494920 8E290004 */   lw    $t1, 4($s1)
/* 00494924 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494928 02202025 */  move  $a0, $s1
/* 0049492C 0320F809 */  jalr  $t9
/* 00494930 00000000 */   nop   
/* 00494934 2401FFFF */  li    $at, -1
/* 00494938 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049493C AE620000 */  sw    $v0, ($s3)
/* 00494940 14410003 */  bne   $v0, $at, .L00494950
/* 00494944 00402025 */   move  $a0, $v0
/* 00494948 10000007 */  b     .L00494968
/* 0049494C 24100001 */   li    $s0, 1
.L00494950:
/* 00494950 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00494954 02202825 */  move  $a1, $s1
/* 00494958 00008025 */  move  $s0, $zero
/* 0049495C 0320F809 */  jalr  $t9
/* 00494960 00000000 */   nop   
/* 00494964 8FBC0028 */  lw    $gp, 0x28($sp)
.L00494968:
/* 00494968 5600004E */  bnezl $s0, .L00494AA4
/* 0049496C 2401FFF3 */   li    $at, -13
/* 00494970 8E290004 */  lw    $t1, 4($s1)
.L00494974:
/* 00494974 8FA40058 */  lw    $a0, 0x58($sp)
/* 00494978 91320000 */  lbu   $s2, ($t1)
/* 0049497C 2652FFD0 */  addiu $s2, $s2, -0x30
/* 00494980 2E41000A */  sltiu $at, $s2, 0xa
/* 00494984 50200047 */  beql  $at, $zero, .L00494AA4
/* 00494988 2401FFF3 */   li    $at, -13
/* 0049498C 8F99811C */  lw    $t9, %call16(__ll_div)($gp)
/* 00494990 8FA5005C */  lw    $a1, 0x5c($sp)
/* 00494994 24060000 */  li    $a2, 0
/* 00494998 0320F809 */  jalr  $t9
/* 0049499C 2407000A */   li    $a3, 10
/* 004949A0 8FAA0070 */  lw    $t2, 0x70($sp)
/* 004949A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004949A8 8FAB0074 */  lw    $t3, 0x74($sp)
/* 004949AC 0142082B */  sltu  $at, $t2, $v0
/* 004949B0 14200026 */  bnez  $at, .L00494A4C
/* 004949B4 004A082B */   sltu  $at, $v0, $t2
/* 004949B8 14200004 */  bnez  $at, .L004949CC
/* 004949BC 8FA40058 */   lw    $a0, 0x58($sp)
/* 004949C0 0163082B */  sltu  $at, $t3, $v1
/* 004949C4 14200021 */  bnez  $at, .L00494A4C
/* 004949C8 00000000 */   nop   
.L004949CC:
/* 004949CC 8F99811C */  lw    $t9, %call16(__ll_div)($gp)
/* 004949D0 8FA5005C */  lw    $a1, 0x5c($sp)
/* 004949D4 24060000 */  li    $a2, 0
/* 004949D8 0320F809 */  jalr  $t9
/* 004949DC 2407000A */   li    $a3, 10
/* 004949E0 8FAC0070 */  lw    $t4, 0x70($sp)
/* 004949E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004949E8 8FAD0074 */  lw    $t5, 0x74($sp)
/* 004949EC 004C082B */  sltu  $at, $v0, $t4
/* 004949F0 14200014 */  bnez  $at, .L00494A44
/* 004949F4 0182082B */   sltu  $at, $t4, $v0
/* 004949F8 14200004 */  bnez  $at, .L00494A0C
/* 004949FC 8FA40058 */   lw    $a0, 0x58($sp)
/* 00494A00 006D082B */  sltu  $at, $v1, $t5
/* 00494A04 54200010 */  bnezl $at, .L00494A48
/* 00494A08 24180001 */   li    $t8, 1
.L00494A0C:
/* 00494A0C 8F998120 */  lw    $t9, %call16(__ll_rem)($gp)
/* 00494A10 8FA5005C */  lw    $a1, 0x5c($sp)
/* 00494A14 24060000 */  li    $a2, 0
/* 00494A18 0320F809 */  jalr  $t9
/* 00494A1C 2407000A */   li    $a3, 10
/* 00494A20 240E0000 */  li    $t6, 0
/* 00494A24 01C2082A */  slt   $at, $t6, $v0
/* 00494A28 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494A2C 14200007 */  bnez  $at, .L00494A4C
/* 00494A30 02407825 */   move  $t7, $s2
/* 00494A34 004E082A */  slt   $at, $v0, $t6
/* 00494A38 14200002 */  bnez  $at, .L00494A44
/* 00494A3C 006F082B */   sltu  $at, $v1, $t7
/* 00494A40 10200002 */  beqz  $at, .L00494A4C
.L00494A44:
/* 00494A44 24180001 */   li    $t8, 1
.L00494A48:
/* 00494A48 AFB80064 */  sw    $t8, 0x64($sp)
.L00494A4C:
/* 00494A4C 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494A50 8FA40070 */  lw    $a0, 0x70($sp)
/* 00494A54 8FA50074 */  lw    $a1, 0x74($sp)
/* 00494A58 24060000 */  li    $a2, 0
/* 00494A5C 0320F809 */  jalr  $t9
/* 00494A60 2407000A */   li    $a3, 10
/* 00494A64 00725821 */  addu  $t3, $v1, $s2
/* 00494A68 0172082B */  sltu  $at, $t3, $s2
/* 00494A6C 00225021 */  addu  $t2, $at, $v0
/* 00494A70 24080000 */  li    $t0, 0
/* 00494A74 01485021 */  addu  $t2, $t2, $t0
/* 00494A78 AFAA0070 */  sw    $t2, 0x70($sp)
/* 00494A7C AFAB0074 */  sw    $t3, 0x74($sp)
/* 00494A80 8E390000 */  lw    $t9, ($s1)
/* 00494A84 8E2D0004 */  lw    $t5, 4($s1)
/* 00494A88 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494A8C 272CFFFF */  addiu $t4, $t9, -1
/* 00494A90 25AE0001 */  addiu $t6, $t5, 1
/* 00494A94 AE2C0000 */  sw    $t4, ($s1)
/* 00494A98 1000FF9F */  b     .L00494918
/* 00494A9C AE2E0004 */   sw    $t6, 4($s1)
/* 00494AA0 2401FFF3 */  li    $at, -13
.L00494AA4:
/* 00494AA4 16410094 */  bne   $s2, $at, .L00494CF8
/* 00494AA8 8FB80070 */   lw    $t8, 0x70($sp)
/* 00494AAC 8FB90074 */  lw    $t9, 0x74($sp)
/* 00494AB0 17000003 */  bnez  $t8, .L00494AC0
/* 00494AB4 2F210002 */   sltiu $at, $t9, 2
/* 00494AB8 54200090 */  bnezl $at, .L00494CFC
/* 00494ABC 8FAC0064 */   lw    $t4, 0x64($sp)
.L00494AC0:
/* 00494AC0 1700008D */  bnez  $t8, .L00494CF8
/* 00494AC4 2F210024 */   sltiu $at, $t9, 0x24
/* 00494AC8 5020008C */  beql  $at, $zero, .L00494CFC
/* 00494ACC 8FAC0064 */   lw    $t4, 0x64($sp)
/* 00494AD0 8F8F8CC4 */  lw     $t7, %got(_libp_ansi_pascal)($gp)
/* 00494AD4 8FA90074 */  lw    $t1, 0x74($sp)
/* 00494AD8 8DEF0000 */  lw    $t7, ($t7)
/* 00494ADC 55E00087 */  bnezl $t7, .L00494CFC
/* 00494AE0 8FAC0064 */   lw    $t4, 0x64($sp)
/* 00494AE4 AFA90084 */  sw    $t1, 0x84($sp)
/* 00494AE8 8E2B0000 */  lw    $t3, ($s1)
/* 00494AEC 8E2D0004 */  lw    $t5, 4($s1)
/* 00494AF0 8F988064 */  lw     $t8, %got(__us_rsthread_stdio)($gp)
/* 00494AF4 256CFFFF */  addiu $t4, $t3, -1
/* 00494AF8 25AE0001 */  addiu $t6, $t5, 1
/* 00494AFC AE2C0000 */  sw    $t4, ($s1)
/* 00494B00 AE2E0004 */  sw    $t6, 4($s1)
/* 00494B04 8F180000 */  lw    $t8, ($t8)
/* 00494B08 53000009 */  beql  $t8, $zero, .L00494B30
/* 00494B0C 8E390000 */   lw    $t9, ($s1)
/* 00494B10 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00494B14 02202025 */  move  $a0, $s1
/* 00494B18 0320F809 */  jalr  $t9
/* 00494B1C 00000000 */   nop   
/* 00494B20 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494B24 10000011 */  b     .L00494B6C
/* 00494B28 00409025 */   move  $s2, $v0
/* 00494B2C 8E390000 */  lw    $t9, ($s1)
.L00494B30:
/* 00494B30 272FFFFF */  addiu $t7, $t9, -1
/* 00494B34 05E10008 */  bgez  $t7, .L00494B58
/* 00494B38 AE2F0000 */   sw    $t7, ($s1)
/* 00494B3C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494B40 02202025 */  move  $a0, $s1
/* 00494B44 0320F809 */  jalr  $t9
/* 00494B48 00000000 */   nop   
/* 00494B4C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494B50 10000005 */  b     .L00494B68
/* 00494B54 00408025 */   move  $s0, $v0
.L00494B58:
/* 00494B58 8E220004 */  lw    $v0, 4($s1)
/* 00494B5C 90500000 */  lbu   $s0, ($v0)
/* 00494B60 24490001 */  addiu $t1, $v0, 1
/* 00494B64 AE290004 */  sw    $t1, 4($s1)
.L00494B68:
/* 00494B68 02009025 */  move  $s2, $s0
.L00494B6C:
/* 00494B6C 8F8A8044 */  lw    $t2, %got(D_10011B70)($gp)
/* 00494B70 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 00494B74 8FAD0084 */  lw    $t5, 0x84($sp)
/* 00494B78 254A1B70 */  addiu $t2, %lo(D_10011B70) # addiu $t2, $t2, 0x1b70
/* 00494B7C 024A5821 */  addu  $t3, $s2, $t2
/* 00494B80 916C0000 */  lbu   $t4, ($t3)
/* 00494B84 240E0000 */  li    $t6, 0
/* 00494B88 24180000 */  li    $t8, 0
/* 00494B8C 01D8082B */  sltu  $at, $t6, $t8
/* 00494B90 AFAE0068 */  sw    $t6, 0x68($sp)
/* 00494B94 AFB80030 */  sw    $t8, 0x30($sp)
/* 00494B98 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
/* 00494B9C AFAD0034 */  sw    $t5, 0x34($sp)
/* 00494BA0 14200011 */  bnez  $at, .L00494BE8
/* 00494BA4 AFAC006C */   sw    $t4, 0x6c($sp)
/* 00494BA8 030E082B */  sltu  $at, $t8, $t6
/* 00494BAC 14200003 */  bnez  $at, .L00494BBC
/* 00494BB0 018D082B */   sltu  $at, $t4, $t5
/* 00494BB4 5420000D */  bnezl $at, .L00494BEC
/* 00494BB8 8FAA0068 */   lw    $t2, 0x68($sp)
.L00494BBC:
/* 00494BBC 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00494BC0 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00494BC4 8F858044 */  lw    $a1, %got(RO_1000F8F0)($gp)
/* 00494BC8 02403025 */  move  $a2, $s2
/* 00494BCC 24840020 */  addiu $a0, $a0, 0x20
/* 00494BD0 0320F809 */  jalr  $t9
/* 00494BD4 24A5F8F0 */   addiu $a1, %lo(RO_1000F8F0) # addiu $a1, $a1, -0x710
/* 00494BD8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494BDC 24020000 */  li    $v0, 0
/* 00494BE0 10000064 */  b     .L00494D74
/* 00494BE4 24030000 */   li    $v1, 0
.L00494BE8:
/* 00494BE8 8FAA0068 */  lw    $t2, 0x68($sp)
.L00494BEC:
/* 00494BEC 8FAB006C */  lw    $t3, 0x6c($sp)
/* 00494BF0 AFAA0070 */  sw    $t2, 0x70($sp)
/* 00494BF4 AFAB0074 */  sw    $t3, 0x74($sp)
.L00494BF8:
/* 00494BF8 8E2C0000 */  lw    $t4, ($s1)
/* 00494BFC 5D800015 */  bgtzl $t4, .L00494C54
/* 00494C00 8E2E0004 */   lw    $t6, 4($s1)
/* 00494C04 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494C08 02202025 */  move  $a0, $s1
/* 00494C0C 0320F809 */  jalr  $t9
/* 00494C10 00000000 */   nop   
/* 00494C14 2401FFFF */  li    $at, -1
/* 00494C18 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494C1C AE620000 */  sw    $v0, ($s3)
/* 00494C20 14410003 */  bne   $v0, $at, .L00494C30
/* 00494C24 00402025 */   move  $a0, $v0
/* 00494C28 10000007 */  b     .L00494C48
/* 00494C2C 24100001 */   li    $s0, 1
.L00494C30:
/* 00494C30 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00494C34 02202825 */  move  $a1, $s1
/* 00494C38 00008025 */  move  $s0, $zero
/* 00494C3C 0320F809 */  jalr  $t9
/* 00494C40 00000000 */   nop   
/* 00494C44 8FBC0028 */  lw    $gp, 0x28($sp)
.L00494C48:
/* 00494C48 5600002C */  bnezl $s0, .L00494CFC
/* 00494C4C 8FAC0064 */   lw    $t4, 0x64($sp)
/* 00494C50 8E2E0004 */  lw    $t6, 4($s1)
.L00494C54:
/* 00494C54 8F8F8044 */  lw    $t7, %got(D_10011B70)($gp)
/* 00494C58 8FAC0030 */  lw    $t4, 0x30($sp)
/* 00494C5C 91D20000 */  lbu   $s2, ($t6)
/* 00494C60 25EF1B70 */  addiu $t7, %lo(D_10011B70) # addiu $t7, $t7, 0x1b70
/* 00494C64 24180000 */  li    $t8, 0
/* 00494C68 3252007F */  andi  $s2, $s2, 0x7f
/* 00494C6C 024F6821 */  addu  $t5, $s2, $t7
/* 00494C70 91A80000 */  lbu   $t0, ($t5)
/* 00494C74 0198082B */  sltu  $at, $t4, $t8
/* 00494C78 AFB80068 */  sw    $t8, 0x68($sp)
/* 00494C7C 8FAD0034 */  lw    $t5, 0x34($sp)
/* 00494C80 0100C825 */  move  $t9, $t0
/* 00494C84 1420001C */  bnez  $at, .L00494CF8
/* 00494C88 AFA8006C */   sw    $t0, 0x6c($sp)
/* 00494C8C 030C082B */  sltu  $at, $t8, $t4
/* 00494C90 14200004 */  bnez  $at, .L00494CA4
/* 00494C94 8FA40070 */   lw    $a0, 0x70($sp)
/* 00494C98 010D082B */  sltu  $at, $t0, $t5
/* 00494C9C 50200017 */  beql  $at, $zero, .L00494CFC
/* 00494CA0 8FAC0064 */   lw    $t4, 0x64($sp)
.L00494CA4:
/* 00494CA4 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494CA8 8FA50074 */  lw    $a1, 0x74($sp)
/* 00494CAC 8FA60030 */  lw    $a2, 0x30($sp)
/* 00494CB0 0320F809 */  jalr  $t9
/* 00494CB4 8FA70034 */   lw    $a3, 0x34($sp)
/* 00494CB8 8FAF006C */  lw    $t7, 0x6c($sp)
/* 00494CBC 8FAE0068 */  lw    $t6, 0x68($sp)
/* 00494CC0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494CC4 006F4821 */  addu  $t1, $v1, $t7
/* 00494CC8 012F082B */  sltu  $at, $t1, $t7
/* 00494CCC 00224021 */  addu  $t0, $at, $v0
/* 00494CD0 010E4021 */  addu  $t0, $t0, $t6
/* 00494CD4 AFA80070 */  sw    $t0, 0x70($sp)
/* 00494CD8 AFA90074 */  sw    $t1, 0x74($sp)
/* 00494CDC 8E380000 */  lw    $t8, ($s1)
/* 00494CE0 8E2A0004 */  lw    $t2, 4($s1)
/* 00494CE4 2719FFFF */  addiu $t9, $t8, -1
/* 00494CE8 254B0001 */  addiu $t3, $t2, 1
/* 00494CEC AE390000 */  sw    $t9, ($s1)
/* 00494CF0 1000FFC1 */  b     .L00494BF8
/* 00494CF4 AE2B0004 */   sw    $t3, 4($s1)
.L00494CF8:
/* 00494CF8 8FAC0064 */  lw    $t4, 0x64($sp)
.L00494CFC:
/* 00494CFC 8FAE0058 */  lw    $t6, 0x58($sp)
/* 00494D00 8FA80070 */  lw    $t0, 0x70($sp)
/* 00494D04 15800008 */  bnez  $t4, .L00494D28
/* 00494D08 8FA90074 */   lw    $t1, 0x74($sp)
/* 00494D0C 15C8000D */  bne   $t6, $t0, .L00494D44
/* 00494D10 8FAF005C */   lw    $t7, 0x5c($sp)
/* 00494D14 15E9000B */  bne   $t7, $t1, .L00494D44
/* 00494D18 8FAD0078 */   lw    $t5, 0x78($sp)
/* 00494D1C 2401002D */  li    $at, 45
/* 00494D20 51A10009 */  beql  $t5, $at, .L00494D48
/* 00494D24 8FB80078 */   lw    $t8, 0x78($sp)
.L00494D28:
/* 00494D28 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00494D2C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00494D30 8F858044 */  lw    $a1, %got(RO_1000F924)($gp)
/* 00494D34 24840020 */  addiu $a0, $a0, 0x20
/* 00494D38 0320F809 */  jalr  $t9
/* 00494D3C 24A5F924 */   addiu $a1, %lo(RO_1000F924) # addiu $a1, $a1, -0x6dc
/* 00494D40 8FBC0028 */  lw    $gp, 0x28($sp)
.L00494D44:
/* 00494D44 8FB80078 */  lw    $t8, 0x78($sp)
.L00494D48:
/* 00494D48 2401002D */  li    $at, 45
/* 00494D4C 8FA20070 */  lw    $v0, 0x70($sp)
/* 00494D50 17010008 */  bne   $t8, $at, .L00494D74
/* 00494D54 8FA30074 */   lw    $v1, 0x74($sp)
/* 00494D58 8FA20070 */  lw    $v0, 0x70($sp)
/* 00494D5C 8FA30074 */  lw    $v1, 0x74($sp)
/* 00494D60 00401027 */  not   $v0, $v0
/* 00494D64 2C610001 */  sltiu $at, $v1, 1
/* 00494D68 00411021 */  addu  $v0, $v0, $at
/* 00494D6C 10000001 */  b     .L00494D74
/* 00494D70 00031823 */   negu  $v1, $v1
.L00494D74:
/* 00494D74 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00494D78 8FB00018 */  lw    $s0, 0x18($sp)
/* 00494D7C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00494D80 8FB20020 */  lw    $s2, 0x20($sp)
/* 00494D84 8FB30024 */  lw    $s3, 0x24($sp)
/* 00494D88 03E00008 */  jr    $ra
/* 00494D8C 27BD0080 */   addiu $sp, $sp, 0x80
    .type read_int64, @function
    .size read_int64, .-read_int64
    .end read_int64

glabel read_int64_range
    .ent read_int64_range
/* 00494D90 3C1C0FB8 */  .cpload $t9
/* 00494D94 279C5500 */  
/* 00494D98 0399E021 */  
/* 00494D9C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00494DA0 8F99885C */  lw    $t9, %call16(read_integer)($gp)
/* 00494DA4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00494DA8 AFA60038 */  sw    $a2, 0x38($sp)
/* 00494DAC AFA7003C */  sw    $a3, 0x3c($sp)
/* 00494DB0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00494DB4 8FA7004C */  lw    $a3, 0x4c($sp)
/* 00494DB8 0320F809 */  jalr  $t9
/* 00494DBC 8FA60048 */   lw    $a2, 0x48($sp)
/* 00494DC0 8FA80038 */  lw    $t0, 0x38($sp)
/* 00494DC4 000277C3 */  sra   $t6, $v0, 0x1f
/* 00494DC8 AFAE0020 */  sw    $t6, 0x20($sp)
/* 00494DCC 01C8082A */  slt   $at, $t6, $t0
/* 00494DD0 01C0C025 */  move  $t8, $t6
/* 00494DD4 AFAE0028 */  sw    $t6, 0x28($sp)
/* 00494DD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00494DDC AFA20024 */  sw    $v0, 0x24($sp)
/* 00494DE0 0040C825 */  move  $t9, $v0
/* 00494DE4 AFA2002C */  sw    $v0, 0x2c($sp)
/* 00494DE8 1420000E */  bnez  $at, .L00494E24
/* 00494DEC 8FA9003C */   lw    $t1, 0x3c($sp)
/* 00494DF0 010E082A */  slt   $at, $t0, $t6
/* 00494DF4 14200003 */  bnez  $at, .L00494E04
/* 00494DF8 8FAA0040 */   lw    $t2, 0x40($sp)
/* 00494DFC 0049082B */  sltu  $at, $v0, $t1
/* 00494E00 14200008 */  bnez  $at, .L00494E24
.L00494E04:
/* 00494E04 030A082A */   slt   $at, $t8, $t2
/* 00494E08 1420000F */  bnez  $at, .L00494E48
/* 00494E0C 8FAB0044 */   lw    $t3, 0x44($sp)
/* 00494E10 0158082A */  slt   $at, $t2, $t8
/* 00494E14 14200003 */  bnez  $at, .L00494E24
/* 00494E18 0179082B */   sltu  $at, $t3, $t9
/* 00494E1C 5020000B */  beql  $at, $zero, .L00494E4C
/* 00494E20 8FBF001C */   lw    $ra, 0x1c($sp)
.L00494E24:
/* 00494E24 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00494E28 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00494E2C 8F858044 */  lw    $a1, %got(RO_1000F944)($gp)
/* 00494E30 8FA60028 */  lw    $a2, 0x28($sp)
/* 00494E34 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00494E38 24840020 */  addiu $a0, $a0, 0x20
/* 00494E3C 0320F809 */  jalr  $t9
/* 00494E40 24A5F944 */   addiu $a1, %lo(RO_1000F944) # addiu $a1, $a1, -0x6bc
/* 00494E44 8FBC0018 */  lw    $gp, 0x18($sp)
.L00494E48:
/* 00494E48 8FBF001C */  lw    $ra, 0x1c($sp)
.L00494E4C:
/* 00494E4C 8FA20028 */  lw    $v0, 0x28($sp)
/* 00494E50 8FA3002C */  lw    $v1, 0x2c($sp)
/* 00494E54 03E00008 */  jr    $ra
/* 00494E58 27BD0030 */   addiu $sp, $sp, 0x30
    .type read_int64_range, @function
    .size read_int64_range, .-read_int64_range
    .end read_int64_range

glabel read_card64
    .ent read_card64
/* 00494E5C 3C1C0FB8 */  .cpload $t9
/* 00494E60 279C5434 */  
/* 00494E64 0399E021 */  
/* 00494E68 27BDFF80 */  addiu $sp, $sp, -0x80
/* 00494E6C 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494E70 AFB40024 */  sw    $s4, 0x24($sp)
/* 00494E74 00A0A025 */  move  $s4, $a1
/* 00494E78 AFB10018 */  sw    $s1, 0x18($sp)
/* 00494E7C 00808825 */  move  $s1, $a0
/* 00494E80 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00494E84 3C057FFF */  lui   $a1, 0x7fff
/* 00494E88 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00494E8C AFB30020 */  sw    $s3, 0x20($sp)
/* 00494E90 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00494E94 AFB00014 */  sw    $s0, 0x14($sp)
/* 00494E98 34A5FFFF */  ori   $a1, $a1, 0xffff
/* 00494E9C 24040000 */  li    $a0, 0
/* 00494EA0 24060000 */  li    $a2, 0
/* 00494EA4 0320F809 */  jalr  $t9
/* 00494EA8 24070002 */   li    $a3, 2
/* 00494EAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494EB0 246F0001 */  addiu $t7, $v1, 1
/* 00494EB4 2DE10001 */  sltiu $at, $t7, 1
/* 00494EB8 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494EBC 00417021 */  addu  $t6, $v0, $at
/* 00494EC0 3C057FFF */  lui   $a1, 0x7fff
/* 00494EC4 AFAE0048 */  sw    $t6, 0x48($sp)
/* 00494EC8 AFAF004C */  sw    $t7, 0x4c($sp)
/* 00494ECC 34A5FFFF */  ori   $a1, $a1, 0xffff
/* 00494ED0 24040000 */  li    $a0, 0
/* 00494ED4 24060000 */  li    $a2, 0
/* 00494ED8 0320F809 */  jalr  $t9
/* 00494EDC 24070002 */   li    $a3, 2
/* 00494EE0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494EE4 8FA7005C */  lw    $a3, 0x5c($sp)
/* 00494EE8 8FA60058 */  lw    $a2, 0x58($sp)
/* 00494EEC 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494EF0 24E70001 */  addiu $a3, $a3, 1
/* 00494EF4 2CE10001 */  sltiu $at, $a3, 1
/* 00494EF8 00402025 */  move  $a0, $v0
/* 00494EFC 00602825 */  move  $a1, $v1
/* 00494F00 0320F809 */  jalr  $t9
/* 00494F04 00C13021 */   addu  $a2, $a2, $at
/* 00494F08 8FB9004C */  lw    $t9, 0x4c($sp)
/* 00494F0C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494F10 8FB80048 */  lw    $t8, 0x48($sp)
/* 00494F14 00792821 */  addu  $a1, $v1, $t9
/* 00494F18 00B9082B */  sltu  $at, $a1, $t9
/* 00494F1C 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494F20 00222021 */  addu  $a0, $at, $v0
/* 00494F24 24060000 */  li    $a2, 0
/* 00494F28 24070002 */  li    $a3, 2
/* 00494F2C 0320F809 */  jalr  $t9
/* 00494F30 00982021 */   addu  $a0, $a0, $t8
/* 00494F34 24690001 */  addiu $t1, $v1, 1
/* 00494F38 2D210001 */  sltiu $at, $t1, 1
/* 00494F3C 00414021 */  addu  $t0, $v0, $at
/* 00494F40 AFA80060 */  sw    $t0, 0x60($sp)
/* 00494F44 AFA90064 */  sw    $t1, 0x64($sp)
/* 00494F48 1620000B */  bnez  $s1, .L00494F78
/* 00494F4C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00494F50 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00494F54 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00494F58 8F858044 */  lw    $a1, %got(RO_1000F978)($gp)
/* 00494F5C 24840020 */  addiu $a0, $a0, 0x20
/* 00494F60 0320F809 */  jalr  $t9
/* 00494F64 24A5F978 */   addiu $a1, %lo(RO_1000F978) # addiu $a1, $a1, -0x688
/* 00494F68 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494F6C 24020000 */  li    $v0, 0
/* 00494F70 1000014F */  b     .L004954B0
/* 00494F74 24030000 */   li    $v1, 0
.L00494F78:
/* 00494F78 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 00494F7C 8D4A0000 */  lw    $t2, ($t2)
/* 00494F80 51400009 */  beql  $t2, $zero, .L00494FA8
/* 00494F84 8E2B0000 */   lw    $t3, ($s1)
/* 00494F88 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00494F8C 02202025 */  move  $a0, $s1
/* 00494F90 0320F809 */  jalr  $t9
/* 00494F94 00000000 */   nop   
/* 00494F98 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494F9C 10000011 */  b     .L00494FE4
/* 00494FA0 00409025 */   move  $s2, $v0
/* 00494FA4 8E2B0000 */  lw    $t3, ($s1)
.L00494FA8:
/* 00494FA8 256CFFFF */  addiu $t4, $t3, -1
/* 00494FAC 05810008 */  bgez  $t4, .L00494FD0
/* 00494FB0 AE2C0000 */   sw    $t4, ($s1)
/* 00494FB4 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494FB8 02202025 */  move  $a0, $s1
/* 00494FBC 0320F809 */  jalr  $t9
/* 00494FC0 00000000 */   nop   
/* 00494FC4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494FC8 10000005 */  b     .L00494FE0
/* 00494FCC 00408025 */   move  $s0, $v0
.L00494FD0:
/* 00494FD0 8E220004 */  lw    $v0, 4($s1)
/* 00494FD4 90500000 */  lbu   $s0, ($v0)
/* 00494FD8 244E0001 */  addiu $t6, $v0, 1
/* 00494FDC AE2E0004 */  sw    $t6, 4($s1)
.L00494FE0:
/* 00494FE0 02009025 */  move  $s2, $s0
.L00494FE4:
/* 00494FE4 24010020 */  li    $at, 32
/* 00494FE8 12410005 */  beq   $s2, $at, .L00495000
/* 00494FEC 24010009 */   li    $at, 9
/* 00494FF0 12410003 */  beq   $s2, $at, .L00495000
/* 00494FF4 2413000A */   li    $s3, 10
/* 00494FF8 16530025 */  bne   $s2, $s3, .L00495090
/* 00494FFC 00000000 */   nop   
.L00495000:
/* 00495000 8F8F8064 */  lw     $t7, %got(__us_rsthread_stdio)($gp)
/* 00495004 2413000A */  li    $s3, 10
/* 00495008 8DEF0000 */  lw    $t7, ($t7)
/* 0049500C 51E00009 */  beql  $t7, $zero, .L00495034
/* 00495010 8E380000 */   lw    $t8, ($s1)
/* 00495014 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00495018 02202025 */  move  $a0, $s1
/* 0049501C 0320F809 */  jalr  $t9
/* 00495020 00000000 */   nop   
/* 00495024 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495028 10000011 */  b     .L00495070
/* 0049502C 00409025 */   move  $s2, $v0
/* 00495030 8E380000 */  lw    $t8, ($s1)
.L00495034:
/* 00495034 2719FFFF */  addiu $t9, $t8, -1
/* 00495038 07210008 */  bgez  $t9, .L0049505C
/* 0049503C AE390000 */   sw    $t9, ($s1)
/* 00495040 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00495044 02202025 */  move  $a0, $s1
/* 00495048 0320F809 */  jalr  $t9
/* 0049504C 00000000 */   nop   
/* 00495050 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495054 10000005 */  b     .L0049506C
/* 00495058 00408025 */   move  $s0, $v0
.L0049505C:
/* 0049505C 8E220004 */  lw    $v0, 4($s1)
/* 00495060 90500000 */  lbu   $s0, ($v0)
/* 00495064 24490001 */  addiu $t1, $v0, 1
/* 00495068 AE290004 */  sw    $t1, 4($s1)
.L0049506C:
/* 0049506C 02009025 */  move  $s2, $s0
.L00495070:
/* 00495070 24010020 */  li    $at, 32
/* 00495074 1241FFE2 */  beq   $s2, $at, .L00495000
/* 00495078 00000000 */   nop   
/* 0049507C 24010009 */  li    $at, 9
/* 00495080 1241FFDF */  beq   $s2, $at, .L00495000
/* 00495084 00000000 */   nop   
/* 00495088 1253FFDD */  beq   $s2, $s3, .L00495000
/* 0049508C 00000000 */   nop   
.L00495090:
/* 00495090 169300AF */  bne   $s4, $s3, .L00495350
/* 00495094 AFA0006C */   sw    $zero, 0x6c($sp)
/* 00495098 2652FFD0 */  addiu $s2, $s2, -0x30
/* 0049509C 2E41000A */  sltiu $at, $s2, 0xa
/* 004950A0 1420000C */  bnez  $at, .L004950D4
/* 004950A4 240A0000 */   li    $t2, 0
/* 004950A8 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004950AC 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004950B0 8F858044 */  lw    $a1, %got(RO_1000F9B4)($gp)
/* 004950B4 26460030 */  addiu $a2, $s2, 0x30
/* 004950B8 24840020 */  addiu $a0, $a0, 0x20
/* 004950BC 0320F809 */  jalr  $t9
/* 004950C0 24A5F9B4 */   addiu $a1, %lo(RO_1000F9B4) # addiu $a1, $a1, -0x64c
/* 004950C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004950C8 24020000 */  li    $v0, 0
/* 004950CC 100000F8 */  b     .L004954B0
/* 004950D0 24030000 */   li    $v1, 0
.L004950D4:
/* 004950D4 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 004950D8 AFAA0070 */  sw    $t2, 0x70($sp)
/* 004950DC AFB20074 */  sw    $s2, 0x74($sp)
/* 004950E0 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
.L004950E4:
/* 004950E4 8E2C0000 */  lw    $t4, ($s1)
/* 004950E8 5D800015 */  bgtzl $t4, .L00495140
/* 004950EC 8E2D0004 */   lw    $t5, 4($s1)
/* 004950F0 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004950F4 02202025 */  move  $a0, $s1
/* 004950F8 0320F809 */  jalr  $t9
/* 004950FC 00000000 */   nop   
/* 00495100 2401FFFF */  li    $at, -1
/* 00495104 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495108 AE620000 */  sw    $v0, ($s3)
/* 0049510C 14410003 */  bne   $v0, $at, .L0049511C
/* 00495110 00402025 */   move  $a0, $v0
/* 00495114 10000007 */  b     .L00495134
/* 00495118 24100001 */   li    $s0, 1
.L0049511C:
/* 0049511C 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00495120 02202825 */  move  $a1, $s1
/* 00495124 00008025 */  move  $s0, $zero
/* 00495128 0320F809 */  jalr  $t9
/* 0049512C 00000000 */   nop   
/* 00495130 8FBC0028 */  lw    $gp, 0x28($sp)
.L00495134:
/* 00495134 56000052 */  bnezl $s0, .L00495280
/* 00495138 2401FFF3 */   li    $at, -13
/* 0049513C 8E2D0004 */  lw    $t5, 4($s1)
.L00495140:
/* 00495140 8FA40060 */  lw    $a0, 0x60($sp)
/* 00495144 91B20000 */  lbu   $s2, ($t5)
/* 00495148 2652FFD0 */  addiu $s2, $s2, -0x30
/* 0049514C 2E41000A */  sltiu $at, $s2, 0xa
/* 00495150 5020004B */  beql  $at, $zero, .L00495280
/* 00495154 2401FFF3 */   li    $at, -13
/* 00495158 8F998124 */  lw    $t9, %call16(__ull_div)($gp)
/* 0049515C 8FA50064 */  lw    $a1, 0x64($sp)
/* 00495160 24060000 */  li    $a2, 0
/* 00495164 0320F809 */  jalr  $t9
/* 00495168 2407000A */   li    $a3, 10
/* 0049516C 8FAE0070 */  lw    $t6, 0x70($sp)
/* 00495170 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495174 8FAF0074 */  lw    $t7, 0x74($sp)
/* 00495178 01C2082B */  sltu  $at, $t6, $v0
/* 0049517C 14200026 */  bnez  $at, .L00495218
/* 00495180 004E082B */   sltu  $at, $v0, $t6
/* 00495184 14200004 */  bnez  $at, .L00495198
/* 00495188 8FA40060 */   lw    $a0, 0x60($sp)
/* 0049518C 01E3082B */  sltu  $at, $t7, $v1
/* 00495190 14200021 */  bnez  $at, .L00495218
/* 00495194 00000000 */   nop   
.L00495198:
/* 00495198 8F998124 */  lw    $t9, %call16(__ull_div)($gp)
/* 0049519C 8FA50064 */  lw    $a1, 0x64($sp)
/* 004951A0 24060000 */  li    $a2, 0
/* 004951A4 0320F809 */  jalr  $t9
/* 004951A8 2407000A */   li    $a3, 10
/* 004951AC 8FB80070 */  lw    $t8, 0x70($sp)
/* 004951B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004951B4 8FB90074 */  lw    $t9, 0x74($sp)
/* 004951B8 0058082B */  sltu  $at, $v0, $t8
/* 004951BC 14200014 */  bnez  $at, .L00495210
/* 004951C0 0302082B */   sltu  $at, $t8, $v0
/* 004951C4 14200004 */  bnez  $at, .L004951D8
/* 004951C8 8FA40060 */   lw    $a0, 0x60($sp)
/* 004951CC 0079082B */  sltu  $at, $v1, $t9
/* 004951D0 54200010 */  bnezl $at, .L00495214
/* 004951D4 240A0001 */   li    $t2, 1
.L004951D8:
/* 004951D8 8F998128 */  lw    $t9, %call16(__ull_rem)($gp)
/* 004951DC 8FA50064 */  lw    $a1, 0x64($sp)
/* 004951E0 24060000 */  li    $a2, 0
/* 004951E4 0320F809 */  jalr  $t9
/* 004951E8 2407000A */   li    $a3, 10
/* 004951EC 24080000 */  li    $t0, 0
/* 004951F0 0102082B */  sltu  $at, $t0, $v0
/* 004951F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004951F8 14200007 */  bnez  $at, .L00495218
/* 004951FC 02404825 */   move  $t1, $s2
/* 00495200 0048082B */  sltu  $at, $v0, $t0
/* 00495204 14200002 */  bnez  $at, .L00495210
/* 00495208 0069082B */   sltu  $at, $v1, $t1
/* 0049520C 10200002 */  beqz  $at, .L00495218
.L00495210:
/* 00495210 240A0001 */   li    $t2, 1
.L00495214:
/* 00495214 AFAA006C */  sw    $t2, 0x6c($sp)
.L00495218:
/* 00495218 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 0049521C 240C0000 */  li    $t4, 0
/* 00495220 AFAC0030 */  sw    $t4, 0x30($sp)
/* 00495224 8FA40070 */  lw    $a0, 0x70($sp)
/* 00495228 8FA50074 */  lw    $a1, 0x74($sp)
/* 0049522C 24060000 */  li    $a2, 0
/* 00495230 2407000A */  li    $a3, 10
/* 00495234 0320F809 */  jalr  $t9
/* 00495238 AFB20034 */   sw    $s2, 0x34($sp)
/* 0049523C 8FAF0034 */  lw    $t7, 0x34($sp)
/* 00495240 8FAE0030 */  lw    $t6, 0x30($sp)
/* 00495244 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495248 006FC821 */  addu  $t9, $v1, $t7
/* 0049524C 032F082B */  sltu  $at, $t9, $t7
/* 00495250 0022C021 */  addu  $t8, $at, $v0
/* 00495254 030EC021 */  addu  $t8, $t8, $t6
/* 00495258 AFB80070 */  sw    $t8, 0x70($sp)
/* 0049525C AFB90074 */  sw    $t9, 0x74($sp)
/* 00495260 8E2B0000 */  lw    $t3, ($s1)
/* 00495264 8E290004 */  lw    $t1, 4($s1)
/* 00495268 2568FFFF */  addiu $t0, $t3, -1
/* 0049526C 252A0001 */  addiu $t2, $t1, 1
/* 00495270 AE280000 */  sw    $t0, ($s1)
/* 00495274 1000FF9B */  b     .L004950E4
/* 00495278 AE2A0004 */   sw    $t2, 4($s1)
/* 0049527C 2401FFF3 */  li    $at, -13
.L00495280:
/* 00495280 1641000F */  bne   $s2, $at, .L004952C0
/* 00495284 8FAC0070 */   lw    $t4, 0x70($sp)
/* 00495288 8FAD0074 */  lw    $t5, 0x74($sp)
/* 0049528C 15800003 */  bnez  $t4, .L0049529C
/* 00495290 2DA10002 */   sltiu $at, $t5, 2
/* 00495294 5420000B */  bnezl $at, .L004952C4
/* 00495298 8FA20070 */   lw    $v0, 0x70($sp)
.L0049529C:
/* 0049529C 15800008 */  bnez  $t4, .L004952C0
/* 004952A0 2DA10024 */   sltiu $at, $t5, 0x24
/* 004952A4 50200007 */  beql  $at, $zero, .L004952C4
/* 004952A8 8FA20070 */   lw    $v0, 0x70($sp)
/* 004952AC 8F8E8CC4 */  lw     $t6, %got(_libp_ansi_pascal)($gp)
/* 004952B0 8FB40074 */  lw    $s4, 0x74($sp)
/* 004952B4 8DCE0000 */  lw    $t6, ($t6)
/* 004952B8 51C00005 */  beql  $t6, $zero, .L004952D0
/* 004952BC 8E2F0000 */   lw    $t7, ($s1)
.L004952C0:
/* 004952C0 8FA20070 */  lw    $v0, 0x70($sp)
.L004952C4:
/* 004952C4 1000007A */  b     .L004954B0
/* 004952C8 8FA30074 */   lw    $v1, 0x74($sp)
/* 004952CC 8E2F0000 */  lw    $t7, ($s1)
.L004952D0:
/* 004952D0 8E280004 */  lw    $t0, 4($s1)
/* 004952D4 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 004952D8 25EBFFFF */  addiu $t3, $t7, -1
/* 004952DC 25090001 */  addiu $t1, $t0, 1
/* 004952E0 AE2B0000 */  sw    $t3, ($s1)
/* 004952E4 AE290004 */  sw    $t1, 4($s1)
/* 004952E8 8D4A0000 */  lw    $t2, ($t2)
/* 004952EC 51400009 */  beql  $t2, $zero, .L00495314
/* 004952F0 8E2C0000 */   lw    $t4, ($s1)
/* 004952F4 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004952F8 02202025 */  move  $a0, $s1
/* 004952FC 0320F809 */  jalr  $t9
/* 00495300 00000000 */   nop   
/* 00495304 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495308 10000011 */  b     .L00495350
/* 0049530C 00409025 */   move  $s2, $v0
/* 00495310 8E2C0000 */  lw    $t4, ($s1)
.L00495314:
/* 00495314 258DFFFF */  addiu $t5, $t4, -1
/* 00495318 05A10008 */  bgez  $t5, .L0049533C
/* 0049531C AE2D0000 */   sw    $t5, ($s1)
/* 00495320 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00495324 02202025 */  move  $a0, $s1
/* 00495328 0320F809 */  jalr  $t9
/* 0049532C 00000000 */   nop   
/* 00495330 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495334 10000005 */  b     .L0049534C
/* 00495338 00408025 */   move  $s0, $v0
.L0049533C:
/* 0049533C 8E220004 */  lw    $v0, 4($s1)
/* 00495340 90500000 */  lbu   $s0, ($v0)
/* 00495344 24580001 */  addiu $t8, $v0, 1
/* 00495348 AE380004 */  sw    $t8, 4($s1)
.L0049534C:
/* 0049534C 02009025 */  move  $s2, $s0
.L00495350:
/* 00495350 8F998044 */  lw    $t9, %got(D_10011B70)($gp)
/* 00495354 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 00495358 24080000 */  li    $t0, 0
/* 0049535C 27391B70 */  addiu $t9, %lo(D_10011B70) # addiu $t9, $t9, 0x1b70
/* 00495360 02597821 */  addu  $t7, $s2, $t9
/* 00495364 91F00000 */  lbu   $s0, ($t7)
/* 00495368 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
/* 0049536C 0214082B */  sltu  $at, $s0, $s4
/* 00495370 5420000D */  bnezl $at, .L004953A8
/* 00495374 AFA80070 */   sw    $t0, 0x70($sp)
/* 00495378 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 0049537C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00495380 8F858044 */  lw    $a1, %got(RO_1000F9E8)($gp)
/* 00495384 02403025 */  move  $a2, $s2
/* 00495388 24840020 */  addiu $a0, $a0, 0x20
/* 0049538C 0320F809 */  jalr  $t9
/* 00495390 24A5F9E8 */   addiu $a1, %lo(RO_1000F9E8) # addiu $a1, $a1, -0x618
/* 00495394 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495398 24020000 */  li    $v0, 0
/* 0049539C 10000044 */  b     .L004954B0
/* 004953A0 24030000 */   li    $v1, 0
/* 004953A4 AFA80070 */  sw    $t0, 0x70($sp)
.L004953A8:
/* 004953A8 AFB00074 */  sw    $s0, 0x74($sp)
.L004953AC:
/* 004953AC 8E2B0000 */  lw    $t3, ($s1)
/* 004953B0 5D600015 */  bgtzl $t3, .L00495408
/* 004953B4 8E2A0004 */   lw    $t2, 4($s1)
/* 004953B8 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004953BC 02202025 */  move  $a0, $s1
/* 004953C0 0320F809 */  jalr  $t9
/* 004953C4 00000000 */   nop   
/* 004953C8 2401FFFF */  li    $at, -1
/* 004953CC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004953D0 AE620000 */  sw    $v0, ($s3)
/* 004953D4 14410003 */  bne   $v0, $at, .L004953E4
/* 004953D8 00402025 */   move  $a0, $v0
/* 004953DC 10000007 */  b     .L004953FC
/* 004953E0 24100001 */   li    $s0, 1
.L004953E4:
/* 004953E4 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 004953E8 02202825 */  move  $a1, $s1
/* 004953EC 00008025 */  move  $s0, $zero
/* 004953F0 0320F809 */  jalr  $t9
/* 004953F4 00000000 */   nop   
/* 004953F8 8FBC0028 */  lw    $gp, 0x28($sp)
.L004953FC:
/* 004953FC 56000021 */  bnezl $s0, .L00495484
/* 00495400 8FAC006C */   lw    $t4, 0x6c($sp)
/* 00495404 8E2A0004 */  lw    $t2, 4($s1)
.L00495408:
/* 00495408 8F8C8044 */  lw    $t4, %got(D_10011B70)($gp)
/* 0049540C 8FA40070 */  lw    $a0, 0x70($sp)
/* 00495410 91520000 */  lbu   $s2, ($t2)
/* 00495414 258C1B70 */  addiu $t4, %lo(D_10011B70) # addiu $t4, $t4, 0x1b70
/* 00495418 3252007F */  andi  $s2, $s2, 0x7f
/* 0049541C 024C6821 */  addu  $t5, $s2, $t4
/* 00495420 91B00000 */  lbu   $s0, ($t5)
/* 00495424 0214082B */  sltu  $at, $s0, $s4
/* 00495428 50200016 */  beql  $at, $zero, .L00495484
/* 0049542C 8FAC006C */   lw    $t4, 0x6c($sp)
/* 00495430 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00495434 8FA50074 */  lw    $a1, 0x74($sp)
/* 00495438 02803825 */  move  $a3, $s4
/* 0049543C 0320F809 */  jalr  $t9
/* 00495440 24060000 */   li    $a2, 0
/* 00495444 0070C821 */  addu  $t9, $v1, $s0
/* 00495448 0330082B */  sltu  $at, $t9, $s0
/* 0049544C 0022C021 */  addu  $t8, $at, $v0
/* 00495450 240E0000 */  li    $t6, 0
/* 00495454 030EC021 */  addu  $t8, $t8, $t6
/* 00495458 AFB80070 */  sw    $t8, 0x70($sp)
/* 0049545C AFB90074 */  sw    $t9, 0x74($sp)
/* 00495460 8E280000 */  lw    $t0, ($s1)
/* 00495464 8E2B0004 */  lw    $t3, 4($s1)
/* 00495468 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049546C 2509FFFF */  addiu $t1, $t0, -1
/* 00495470 256A0001 */  addiu $t2, $t3, 1
/* 00495474 AE290000 */  sw    $t1, ($s1)
/* 00495478 1000FFCC */  b     .L004953AC
/* 0049547C AE2A0004 */   sw    $t2, 4($s1)
/* 00495480 8FAC006C */  lw    $t4, 0x6c($sp)
.L00495484:
/* 00495484 51800009 */  beql  $t4, $zero, .L004954AC
/* 00495488 8FA20070 */   lw    $v0, 0x70($sp)
/* 0049548C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00495490 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00495494 8F858044 */  lw    $a1, %got(RO_1000FA1C)($gp)
/* 00495498 24840020 */  addiu $a0, $a0, 0x20
/* 0049549C 0320F809 */  jalr  $t9
/* 004954A0 24A5FA1C */   addiu $a1, %lo(RO_1000FA1C) # addiu $a1, $a1, -0x5e4
/* 004954A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004954A8 8FA20070 */  lw    $v0, 0x70($sp)
.L004954AC:
/* 004954AC 8FA30074 */  lw    $v1, 0x74($sp)
.L004954B0:
/* 004954B0 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004954B4 8FB00014 */  lw    $s0, 0x14($sp)
/* 004954B8 8FB10018 */  lw    $s1, 0x18($sp)
/* 004954BC 8FB2001C */  lw    $s2, 0x1c($sp)
/* 004954C0 8FB30020 */  lw    $s3, 0x20($sp)
/* 004954C4 8FB40024 */  lw    $s4, 0x24($sp)
/* 004954C8 03E00008 */  jr    $ra
/* 004954CC 27BD0080 */   addiu $sp, $sp, 0x80
    .type read_card64, @function
    .size read_card64, .-read_card64
    .end read_card64
)"");
