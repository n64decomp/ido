__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000FA40:
    # 004957A0 writeln
    .asciz "writeln called on file not open for writing.\n"

RO_1000FA70:
    # 00495BB8 write_enum
    .asciz "Enumerated value '%d' not within type.\n"

RO_1000FA98:
    # 00495CCC write_integer
    .asciz "illegal radix specified for integer write: %d\n"

RO_1000FAC8:
    # 00495E20 write_cardinal
    .asciz "illegal radix specified for cardinal write: %d\n"

RO_1000FAF8:
    # 00495F50 write_real
    .asciz " 0."

RO_1000FAFC:
    # 00495F50 write_real
    .asciz "e+000"

RO_1000FB04:
    # 00496AE0 write_double
    .asciz " 0."

RO_1000FB08:
    # 00496AE0 write_double
    .asciz "e+000"

RO_1000FB10:
    # 00497700 write_boolean
    .asciz "true"

RO_1000FB18:
    # 00497700 write_boolean
    .asciz "false"

RO_1000FB20:
    # 00497824 write_card64
    .asciz "illegal radix specified for cardinal64 write: %d\n"

RO_1000FB54:
    # 004979D4 write_int64
    .asciz "illegal radix specified for integer64 write: %d\n"

.data
D_10011BF0:
    # 00495CCC write_integer
    # 00495E20 write_cardinal
    # 00497824 write_card64
    # 004979D4 write_int64
    .ascii "0123456789abcdefghijklmnopqrstuvwxyz\x00"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

    .type func_004954D0, @function
func_004954D0:
    # 00495AE8 write_string
    # 00495CCC write_integer
    # 00495E20 write_cardinal
    # 00495F50 write_real
    # 00496AE0 write_double
    # 00497700 write_boolean
    # 00497824 write_card64
    # 004979D4 write_int64
/* 004954D0 3C1C0FB8 */  .cpload $t9
/* 004954D4 279C4DC0 */  
/* 004954D8 0399E021 */  
/* 004954DC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004954E0 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004954E4 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004954E8 AFB30024 */  sw    $s3, 0x24($sp)
/* 004954EC AFB20020 */  sw    $s2, 0x20($sp)
/* 004954F0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004954F4 AFB00018 */  sw    $s0, 0x18($sp)
/* 004954F8 908E000C */  lbu   $t6, 0xc($a0)
/* 004954FC 00A08025 */  move  $s0, $a1
/* 00495500 00808825 */  move  $s1, $a0
/* 00495504 31CF0002 */  andi  $t7, $t6, 2
/* 00495508 11E0004A */  beqz  $t7, .L00495634
/* 0049550C 00C09025 */   move  $s2, $a2
/* 00495510 8C980000 */  lw    $t8, ($a0)
/* 00495514 2413FFFF */  li    $s3, -1
/* 00495518 0306C823 */  subu  $t9, $t8, $a2
/* 0049551C AC990000 */  sw    $t9, ($a0)
/* 00495520 0721002B */  bgez  $t9, .L004955D0
/* 00495524 03201825 */   move  $v1, $t9
.L00495528:
/* 00495528 00724021 */  addu  $t0, $v1, $s2
/* 0049552C 1900001B */  blez  $t0, .L0049559C
/* 00495530 AE280000 */   sw    $t0, ($s1)
/* 00495534 01102021 */  addu  $a0, $t0, $s0
/* 00495538 00902823 */  subu  $a1, $a0, $s0
/* 0049553C 30A50003 */  andi  $a1, $a1, 3
/* 00495540 02489023 */  subu  $s2, $s2, $t0
/* 00495544 10A00009 */  beqz  $a1, .L0049556C
/* 00495548 8E220004 */   lw    $v0, 4($s1)
/* 0049554C 00B01821 */  addu  $v1, $a1, $s0
.L00495550:
/* 00495550 92090000 */  lbu   $t1, ($s0)
/* 00495554 26100001 */  addiu $s0, $s0, 1
/* 00495558 24420001 */  addiu $v0, $v0, 1
/* 0049555C 1470FFFC */  bne   $v1, $s0, .L00495550
/* 00495560 A049FFFF */   sb    $t1, -1($v0)
/* 00495564 5204000D */  beql  $s0, $a0, .L0049559C
/* 00495568 AE220004 */   sw    $v0, 4($s1)
.L0049556C:
/* 0049556C 920A0000 */  lbu   $t2, ($s0)
/* 00495570 26100004 */  addiu $s0, $s0, 4
/* 00495574 24420004 */  addiu $v0, $v0, 4
/* 00495578 A04AFFFC */  sb    $t2, -4($v0)
/* 0049557C 920BFFFD */  lbu   $t3, -3($s0)
/* 00495580 A04BFFFD */  sb    $t3, -3($v0)
/* 00495584 920CFFFE */  lbu   $t4, -2($s0)
/* 00495588 A04CFFFE */  sb    $t4, -2($v0)
/* 0049558C 920DFFFF */  lbu   $t5, -1($s0)
/* 00495590 1604FFF6 */  bne   $s0, $a0, .L0049556C
/* 00495594 A04DFFFF */   sb    $t5, -1($v0)
/* 00495598 AE220004 */  sw    $v0, 4($s1)
.L0049559C:
/* 0049559C AE330000 */  sw    $s3, ($s1)
/* 004955A0 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004955A4 92040000 */  lbu   $a0, ($s0)
/* 004955A8 02202825 */  move  $a1, $s1
/* 004955AC 0320F809 */  jalr  $t9
/* 004955B0 26100001 */   addiu $s0, $s0, 1
/* 004955B4 2652FFFF */  addiu $s2, $s2, -1
/* 004955B8 1240001E */  beqz  $s2, .L00495634
/* 004955BC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004955C0 8E2E0000 */  lw    $t6, ($s1)
/* 004955C4 01D21823 */  subu  $v1, $t6, $s2
/* 004955C8 0460FFD7 */  bltz  $v1, .L00495528
/* 004955CC AE230000 */   sw    $v1, ($s1)
.L004955D0:
/* 004955D0 02122021 */  addu  $a0, $s0, $s2
/* 004955D4 00903023 */  subu  $a2, $a0, $s0
/* 004955D8 30C60003 */  andi  $a2, $a2, 3
/* 004955DC 10C00009 */  beqz  $a2, .L00495604
/* 004955E0 8E220004 */   lw    $v0, 4($s1)
/* 004955E4 00D01821 */  addu  $v1, $a2, $s0
.L004955E8:
/* 004955E8 92180000 */  lbu   $t8, ($s0)
/* 004955EC 26100001 */  addiu $s0, $s0, 1
/* 004955F0 24420001 */  addiu $v0, $v0, 1
/* 004955F4 1470FFFC */  bne   $v1, $s0, .L004955E8
/* 004955F8 A058FFFF */   sb    $t8, -1($v0)
/* 004955FC 5204000D */  beql  $s0, $a0, .L00495634
/* 00495600 AE220004 */   sw    $v0, 4($s1)
.L00495604:
/* 00495604 92190000 */  lbu   $t9, ($s0)
/* 00495608 26100004 */  addiu $s0, $s0, 4
/* 0049560C 24420004 */  addiu $v0, $v0, 4
/* 00495610 A059FFFC */  sb    $t9, -4($v0)
/* 00495614 9208FFFD */  lbu   $t0, -3($s0)
/* 00495618 A048FFFD */  sb    $t0, -3($v0)
/* 0049561C 9209FFFE */  lbu   $t1, -2($s0)
/* 00495620 A049FFFE */  sb    $t1, -2($v0)
/* 00495624 920AFFFF */  lbu   $t2, -1($s0)
/* 00495628 1604FFF6 */  bne   $s0, $a0, .L00495604
/* 0049562C A04AFFFF */   sb    $t2, -1($v0)
/* 00495630 AE220004 */  sw    $v0, 4($s1)
.L00495634:
/* 00495634 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00495638 8FB00018 */  lw    $s0, 0x18($sp)
/* 0049563C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00495640 8FB20020 */  lw    $s2, 0x20($sp)
/* 00495644 8FB30024 */  lw    $s3, 0x24($sp)
/* 00495648 03E00008 */  jr    $ra
/* 0049564C 27BD0030 */   addiu $sp, $sp, 0x30

    .type func_00495650, @function
func_00495650:
    # 004958F8 write_char
    # 00495AE8 write_string
    # 00495CCC write_integer
    # 00495E20 write_cardinal
    # 00495F50 write_real
    # 00496AE0 write_double
    # 00497700 write_boolean
    # 00497824 write_card64
    # 004979D4 write_int64
/* 00495650 3C1C0FB8 */  .cpload $t9
/* 00495654 279C4C40 */  
/* 00495658 0399E021 */  
/* 0049565C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00495660 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00495664 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00495668 AFB30024 */  sw    $s3, 0x24($sp)
/* 0049566C AFB20020 */  sw    $s2, 0x20($sp)
/* 00495670 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00495674 AFB00018 */  sw    $s0, 0x18($sp)
/* 00495678 908E000C */  lbu   $t6, 0xc($a0)
/* 0049567C 00A08025 */  move  $s0, $a1
/* 00495680 00C08825 */  move  $s1, $a2
/* 00495684 31CF0002 */  andi  $t7, $t6, 2
/* 00495688 11E0003E */  beqz  $t7, .L00495784
/* 0049568C 00809025 */   move  $s2, $a0
/* 00495690 58C0003D */  blezl $a2, .L00495788
/* 00495694 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00495698 8C980000 */  lw    $t8, ($a0)
/* 0049569C 2413FFFF */  li    $s3, -1
/* 004956A0 0306C823 */  subu  $t9, $t8, $a2
/* 004956A4 AC990000 */  sw    $t9, ($a0)
/* 004956A8 07210024 */  bgez  $t9, .L0049573C
/* 004956AC 03201825 */   move  $v1, $t9
.L004956B0:
/* 004956B0 00714021 */  addu  $t0, $v1, $s1
/* 004956B4 19000014 */  blez  $t0, .L00495708
/* 004956B8 AE480000 */   sw    $t0, ($s2)
/* 004956BC 8E420004 */  lw    $v0, 4($s2)
/* 004956C0 02288823 */  subu  $s1, $s1, $t0
/* 004956C4 01022021 */  addu  $a0, $t0, $v0
/* 004956C8 00822823 */  subu  $a1, $a0, $v0
/* 004956CC 30A50003 */  andi  $a1, $a1, 3
/* 004956D0 10A00006 */  beqz  $a1, .L004956EC
/* 004956D4 00A21821 */   addu  $v1, $a1, $v0
.L004956D8:
/* 004956D8 24420001 */  addiu $v0, $v0, 1
/* 004956DC 1462FFFE */  bne   $v1, $v0, .L004956D8
/* 004956E0 A050FFFF */   sb    $s0, -1($v0)
/* 004956E4 50440008 */  beql  $v0, $a0, .L00495708
/* 004956E8 AE420004 */   sw    $v0, 4($s2)
.L004956EC:
/* 004956EC 24420004 */  addiu $v0, $v0, 4
/* 004956F0 A050FFFC */  sb    $s0, -4($v0)
/* 004956F4 A050FFFD */  sb    $s0, -3($v0)
/* 004956F8 A050FFFE */  sb    $s0, -2($v0)
/* 004956FC 1444FFFB */  bne   $v0, $a0, .L004956EC
/* 00495700 A050FFFF */   sb    $s0, -1($v0)
/* 00495704 AE420004 */  sw    $v0, 4($s2)
.L00495708:
/* 00495708 AE530000 */  sw    $s3, ($s2)
/* 0049570C 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00495710 02002025 */  move  $a0, $s0
/* 00495714 02402825 */  move  $a1, $s2
/* 00495718 0320F809 */  jalr  $t9
/* 0049571C 00000000 */   nop   
/* 00495720 2631FFFF */  addiu $s1, $s1, -1
/* 00495724 12200017 */  beqz  $s1, .L00495784
/* 00495728 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0049572C 8E490000 */  lw    $t1, ($s2)
/* 00495730 01311823 */  subu  $v1, $t1, $s1
/* 00495734 0460FFDE */  bltz  $v1, .L004956B0
/* 00495738 AE430000 */   sw    $v1, ($s2)
.L0049573C:
/* 0049573C 8E420004 */  lw    $v0, 4($s2)
/* 00495740 00512021 */  addu  $a0, $v0, $s1
/* 00495744 00823023 */  subu  $a2, $a0, $v0
/* 00495748 30C60003 */  andi  $a2, $a2, 3
/* 0049574C 10C00006 */  beqz  $a2, .L00495768
/* 00495750 00C21821 */   addu  $v1, $a2, $v0
.L00495754:
/* 00495754 24420001 */  addiu $v0, $v0, 1
/* 00495758 1462FFFE */  bne   $v1, $v0, .L00495754
/* 0049575C A050FFFF */   sb    $s0, -1($v0)
/* 00495760 50440008 */  beql  $v0, $a0, .L00495784
/* 00495764 AE420004 */   sw    $v0, 4($s2)
.L00495768:
/* 00495768 24420004 */  addiu $v0, $v0, 4
/* 0049576C A050FFFC */  sb    $s0, -4($v0)
/* 00495770 A050FFFD */  sb    $s0, -3($v0)
/* 00495774 A050FFFE */  sb    $s0, -2($v0)
/* 00495778 1444FFFB */  bne   $v0, $a0, .L00495768
/* 0049577C A050FFFF */   sb    $s0, -1($v0)
/* 00495780 AE420004 */  sw    $v0, 4($s2)
.L00495784:
/* 00495784 8FBF002C */  lw    $ra, 0x2c($sp)
.L00495788:
/* 00495788 8FB00018 */  lw    $s0, 0x18($sp)
/* 0049578C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00495790 8FB20020 */  lw    $s2, 0x20($sp)
/* 00495794 8FB30024 */  lw    $s3, 0x24($sp)
/* 00495798 03E00008 */  jr    $ra
/* 0049579C 27BD0030 */   addiu $sp, $sp, 0x30

glabel writeln
    .ent writeln
    # 004175BC copypropagate
    # 0041A410 printitab
    # 0041AC2C printtab
    # 0041B580 printbv
    # 0041B8C8 printlinfo
    # 0041BC58 printhoist
    # 0041BEF4 printprecm
    # 0041C1B0 printcm
    # 0041C688 printscm
    # 0041C914 printregs
    # 0041D560 printinterproc
    # 0041D758 printsav
    # 0041DDD4 printstat
    # 0041EA88 print_loop_relations
    # 004205F8 genrlodrstr
    # 0042BF08 reemit
    # 0042EB10 incorp_feedback
    # 0042EF10 func_0042EF10
    # 0042F6CC controlflow
    # 00434720 processargs
    # 0043A0CC copyline
    # 00444A84 isearchloop
    # 00455518 func_00455518
    # 00456A2C oneproc
    # 0045806C main
    # 00458678 mtagwarning
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    # 0045C150 prepass
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
    # 0047B320 stackerror
    # 0047B3F8 boundswarning
    # 0047B51C ovfwwarning
    # 0047BDF8 dbgerror
    # 0047FF7C skipproc
/* 004957A0 3C1C0FB8 */  .cpload $t9
/* 004957A4 279C4AF0 */  
/* 004957A8 0399E021 */  
/* 004957AC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004957B0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004957B4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004957B8 908E000C */  lbu   $t6, 0xc($a0)
/* 004957BC 00802825 */  move  $a1, $a0
/* 004957C0 31CF0002 */  andi  $t7, $t6, 2
/* 004957C4 15E00009 */  bnez  $t7, .L004957EC
/* 004957C8 00000000 */   nop   
/* 004957CC 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004957D0 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004957D4 8F858044 */  lw    $a1, %got(RO_1000FA40)($gp)
/* 004957D8 24840020 */  addiu $a0, $a0, 0x20
/* 004957DC 0320F809 */  jalr  $t9
/* 004957E0 24A5FA40 */   addiu $a1, %lo(RO_1000FA40) # addiu $a1, $a1, -0x5c0
/* 004957E4 1000001B */  b     .L00495854
/* 004957E8 8FBC0018 */   lw    $gp, 0x18($sp)
.L004957EC:
/* 004957EC 8F988064 */  lw     $t8, %got(__us_rsthread_stdio)($gp)
/* 004957F0 8F180000 */  lw    $t8, ($t8)
/* 004957F4 53000008 */  beql  $t8, $zero, .L00495818
/* 004957F8 8CB90000 */   lw    $t9, ($a1)
/* 004957FC 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00495800 2404000A */  li    $a0, 10
/* 00495804 0320F809 */  jalr  $t9
/* 00495808 00000000 */   nop   
/* 0049580C 10000011 */  b     .L00495854
/* 00495810 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00495814 8CB90000 */  lw    $t9, ($a1)
.L00495818:
/* 00495818 2728FFFF */  addiu $t0, $t9, -1
/* 0049581C 05010007 */  bgez  $t0, .L0049583C
/* 00495820 ACA80000 */   sw    $t0, ($a1)
/* 00495824 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00495828 2404000A */  li    $a0, 10
/* 0049582C 0320F809 */  jalr  $t9
/* 00495830 00000000 */   nop   
/* 00495834 10000007 */  b     .L00495854
/* 00495838 8FBC0018 */   lw    $gp, 0x18($sp)
.L0049583C:
/* 0049583C 8CAB0004 */  lw    $t3, 4($a1)
/* 00495840 240A000A */  li    $t2, 10
/* 00495844 A16A0000 */  sb    $t2, ($t3)
/* 00495848 8CAC0004 */  lw    $t4, 4($a1)
/* 0049584C 258D0001 */  addiu $t5, $t4, 1
/* 00495850 ACAD0004 */  sw    $t5, 4($a1)
.L00495854:
/* 00495854 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00495858 27BD0020 */  addiu $sp, $sp, 0x20
/* 0049585C 03E00008 */  jr    $ra
/* 00495860 00000000 */   nop   
    .type writeln, @function
    .size writeln, .-writeln
    .end writeln

glabel page
    .ent page
/* 00495864 3C1C0FB8 */  .cpload $t9
/* 00495868 279C4A2C */  
/* 0049586C 0399E021 */  
/* 00495870 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00495874 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00495878 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0049587C 8DCE0000 */  lw    $t6, ($t6)
/* 00495880 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00495884 00802825 */  move  $a1, $a0
/* 00495888 51C00008 */  beql  $t6, $zero, .L004958AC
/* 0049588C 8CAF0000 */   lw    $t7, ($a1)
/* 00495890 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00495894 2404000C */  li    $a0, 12
/* 00495898 0320F809 */  jalr  $t9
/* 0049589C 00000000 */   nop   
/* 004958A0 10000011 */  b     .L004958E8
/* 004958A4 8FBC0018 */   lw    $gp, 0x18($sp)
/* 004958A8 8CAF0000 */  lw    $t7, ($a1)
.L004958AC:
/* 004958AC 25F9FFFF */  addiu $t9, $t7, -1
/* 004958B0 07210007 */  bgez  $t9, .L004958D0
/* 004958B4 ACB90000 */   sw    $t9, ($a1)
/* 004958B8 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004958BC 2404000C */  li    $a0, 12
/* 004958C0 0320F809 */  jalr  $t9
/* 004958C4 00000000 */   nop   
/* 004958C8 10000007 */  b     .L004958E8
/* 004958CC 8FBC0018 */   lw    $gp, 0x18($sp)
.L004958D0:
/* 004958D0 8CA90004 */  lw    $t1, 4($a1)
/* 004958D4 2408000C */  li    $t0, 12
/* 004958D8 A1280000 */  sb    $t0, ($t1)
/* 004958DC 8CAA0004 */  lw    $t2, 4($a1)
/* 004958E0 254B0001 */  addiu $t3, $t2, 1
/* 004958E4 ACAB0004 */  sw    $t3, 4($a1)
.L004958E8:
/* 004958E8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004958EC 27BD0020 */  addiu $sp, $sp, 0x20
/* 004958F0 03E00008 */  jr    $ra
/* 004958F4 00000000 */   nop   
    .type page, @function
    .size page, .-page
    .end page

glabel write_char
    .ent write_char
    # 004175BC copypropagate
    # 0041A2A0 printmtyp
    # 0041A410 printitab
    # 0041AC2C printtab
    # 0041B580 printbv
    # 0041C914 printregs
    # 0041EA88 print_loop_relations
    # 00434720 processargs
    # 0043CFCC readnxtinst
    # 00456A2C oneproc
    # 0045806C main
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    # 004713E8 loopunroll
    # 0047FF7C skipproc
/* 004958F8 3C1C0FB8 */  .cpload $t9
/* 004958FC 279C4998 */  
/* 00495900 0399E021 */  
/* 00495904 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00495908 AFB00014 */  sw    $s0, 0x14($sp)
/* 0049590C 28C10002 */  slti  $at, $a2, 2
/* 00495910 30B000FF */  andi  $s0, $a1, 0xff
/* 00495914 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00495918 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0049591C AFA50024 */  sw    $a1, 0x24($sp)
/* 00495920 AFA60028 */  sw    $a2, 0x28($sp)
/* 00495924 14200025 */  bnez  $at, .L004959BC
/* 00495928 00803825 */   move  $a3, $a0
/* 0049592C 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00495930 24050020 */  li    $a1, 32
/* 00495934 24C6FFFF */  addiu $a2, $a2, -1
/* 00495938 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 0049593C 0320F809 */  jalr  $t9
/* 00495940 AFA70020 */   sw    $a3, 0x20($sp)
/* 00495944 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00495948 8FA70020 */  lw    $a3, 0x20($sp)
/* 0049594C 8F8F8064 */  lw     $t7, %got(__us_rsthread_stdio)($gp)
/* 00495950 8DEF0000 */  lw    $t7, ($t7)
/* 00495954 51E00009 */  beql  $t7, $zero, .L0049597C
/* 00495958 8CF80000 */   lw    $t8, ($a3)
/* 0049595C 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00495960 02002025 */  move  $a0, $s0
/* 00495964 00E02825 */  move  $a1, $a3
/* 00495968 0320F809 */  jalr  $t9
/* 0049596C 00000000 */   nop   
/* 00495970 10000058 */  b     .L00495AD4
/* 00495974 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00495978 8CF80000 */  lw    $t8, ($a3)
.L0049597C:
/* 0049597C 2719FFFF */  addiu $t9, $t8, -1
/* 00495980 07210008 */  bgez  $t9, .L004959A4
/* 00495984 ACF90000 */   sw    $t9, ($a3)
/* 00495988 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 0049598C 02002025 */  move  $a0, $s0
/* 00495990 00E02825 */  move  $a1, $a3
/* 00495994 0320F809 */  jalr  $t9
/* 00495998 00000000 */   nop   
/* 0049599C 1000004D */  b     .L00495AD4
/* 004959A0 8FBC0018 */   lw    $gp, 0x18($sp)
.L004959A4:
/* 004959A4 8CE90004 */  lw    $t1, 4($a3)
/* 004959A8 A1300000 */  sb    $s0, ($t1)
/* 004959AC 8CEA0004 */  lw    $t2, 4($a3)
/* 004959B0 254B0001 */  addiu $t3, $t2, 1
/* 004959B4 10000047 */  b     .L00495AD4
/* 004959B8 ACEB0004 */   sw    $t3, 4($a3)
.L004959BC:
/* 004959BC 8FAC0028 */  lw    $t4, 0x28($sp)
/* 004959C0 2981FFFF */  slti  $at, $t4, -1
/* 004959C4 10200028 */  beqz  $at, .L00495A68
/* 004959C8 00000000 */   nop   
/* 004959CC 8F8D8064 */  lw     $t5, %got(__us_rsthread_stdio)($gp)
/* 004959D0 8DAD0000 */  lw    $t5, ($t5)
/* 004959D4 51A0000A */  beql  $t5, $zero, .L00495A00
/* 004959D8 8CEE0000 */   lw    $t6, ($a3)
/* 004959DC 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004959E0 02002025 */  move  $a0, $s0
/* 004959E4 00E02825 */  move  $a1, $a3
/* 004959E8 0320F809 */  jalr  $t9
/* 004959EC AFA70020 */   sw    $a3, 0x20($sp)
/* 004959F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004959F4 10000012 */  b     .L00495A40
/* 004959F8 8FA70020 */   lw    $a3, 0x20($sp)
/* 004959FC 8CEE0000 */  lw    $t6, ($a3)
.L00495A00:
/* 00495A00 25CFFFFF */  addiu $t7, $t6, -1
/* 00495A04 05E10009 */  bgez  $t7, .L00495A2C
/* 00495A08 ACEF0000 */   sw    $t7, ($a3)
/* 00495A0C 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00495A10 02002025 */  move  $a0, $s0
/* 00495A14 00E02825 */  move  $a1, $a3
/* 00495A18 0320F809 */  jalr  $t9
/* 00495A1C AFA70020 */   sw    $a3, 0x20($sp)
/* 00495A20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00495A24 10000006 */  b     .L00495A40
/* 00495A28 8FA70020 */   lw    $a3, 0x20($sp)
.L00495A2C:
/* 00495A2C 8CF90004 */  lw    $t9, 4($a3)
/* 00495A30 A3300000 */  sb    $s0, ($t9)
/* 00495A34 8CE80004 */  lw    $t0, 4($a3)
/* 00495A38 25090001 */  addiu $t1, $t0, 1
/* 00495A3C ACE90004 */  sw    $t1, 4($a3)
.L00495A40:
/* 00495A40 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00495A44 8FAA0028 */  lw    $t2, 0x28($sp)
/* 00495A48 240BFFFF */  li    $t3, -1
/* 00495A4C 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00495A50 00E02025 */  move  $a0, $a3
/* 00495A54 24050020 */  li    $a1, 32
/* 00495A58 0320F809 */  jalr  $t9
/* 00495A5C 016A3023 */   subu  $a2, $t3, $t2
/* 00495A60 1000001C */  b     .L00495AD4
/* 00495A64 8FBC0018 */   lw    $gp, 0x18($sp)
.L00495A68:
/* 00495A68 8F8C8064 */  lw     $t4, %got(__us_rsthread_stdio)($gp)
/* 00495A6C 8D8C0000 */  lw    $t4, ($t4)
/* 00495A70 51800009 */  beql  $t4, $zero, .L00495A98
/* 00495A74 8CED0000 */   lw    $t5, ($a3)
/* 00495A78 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00495A7C 02002025 */  move  $a0, $s0
/* 00495A80 00E02825 */  move  $a1, $a3
/* 00495A84 0320F809 */  jalr  $t9
/* 00495A88 00000000 */   nop   
/* 00495A8C 10000011 */  b     .L00495AD4
/* 00495A90 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00495A94 8CED0000 */  lw    $t5, ($a3)
.L00495A98:
/* 00495A98 25AEFFFF */  addiu $t6, $t5, -1
/* 00495A9C 05C10008 */  bgez  $t6, .L00495AC0
/* 00495AA0 ACEE0000 */   sw    $t6, ($a3)
/* 00495AA4 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00495AA8 02002025 */  move  $a0, $s0
/* 00495AAC 00E02825 */  move  $a1, $a3
/* 00495AB0 0320F809 */  jalr  $t9
/* 00495AB4 00000000 */   nop   
/* 00495AB8 10000006 */  b     .L00495AD4
/* 00495ABC 8FBC0018 */   lw    $gp, 0x18($sp)
.L00495AC0:
/* 00495AC0 8CF80004 */  lw    $t8, 4($a3)
/* 00495AC4 A3100000 */  sb    $s0, ($t8)
/* 00495AC8 8CF90004 */  lw    $t9, 4($a3)
/* 00495ACC 27280001 */  addiu $t0, $t9, 1
/* 00495AD0 ACE80004 */  sw    $t0, 4($a3)
.L00495AD4:
/* 00495AD4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00495AD8 8FB00014 */  lw    $s0, 0x14($sp)
/* 00495ADC 27BD0020 */  addiu $sp, $sp, 0x20
/* 00495AE0 03E00008 */  jr    $ra
/* 00495AE4 00000000 */   nop   
    .type write_char, @function
    .size write_char, .-write_char
    .end write_char

glabel write_string
    .ent write_string
    # 004175BC copypropagate
    # 0041A410 printitab
    # 0041AC2C printtab
    # 0041B580 printbv
    # 0041B8C8 printlinfo
    # 0041BC58 printhoist
    # 0041BEF4 printprecm
    # 0041C1B0 printcm
    # 0041C688 printscm
    # 0041C914 printregs
    # 0041D560 printinterproc
    # 0041D758 printsav
    # 0041DDD4 printstat
    # 004205F8 genrlodrstr
    # 0042BF08 reemit
    # 0042EB10 incorp_feedback
    # 0042EF10 func_0042EF10
    # 0042F6CC controlflow
    # 00434720 processargs
    # 0043771C optinit
    # 0043A0CC copyline
    # 00444A84 isearchloop
    # 00455518 func_00455518
    # 00456A2C oneproc
    # 0045806C main
    # 00458678 mtagwarning
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    # 0045C150 prepass
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
    # 0047B320 stackerror
    # 0047B3F8 boundswarning
    # 0047B51C ovfwwarning
    # 0047BDF8 dbgerror
    # 0047FF7C skipproc
    # 00495BB8 write_enum
/* 00495AE8 3C1C0FB8 */  .cpload $t9
/* 00495AEC 279C47A8 */  
/* 00495AF0 0399E021 */  
/* 00495AF4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00495AF8 AFB00014 */  sw    $s0, 0x14($sp)
/* 00495AFC 00A08025 */  move  $s0, $a1
/* 00495B00 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00495B04 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00495B08 AFA40020 */  sw    $a0, 0x20($sp)
/* 00495B0C 14E00010 */  bnez  $a3, .L00495B50
/* 00495B10 AFA60028 */   sw    $a2, 0x28($sp)
/* 00495B14 00A62021 */  addu  $a0, $a1, $a2
/* 00495B18 10A4000B */  beq   $a1, $a0, .L00495B48
/* 00495B1C 00801025 */   move  $v0, $a0
/* 00495B20 908FFFFF */  lbu   $t7, -1($a0)
/* 00495B24 24030020 */  li    $v1, 32
/* 00495B28 146F0007 */  bne   $v1, $t7, .L00495B48
/* 00495B2C 00000000 */   nop   
/* 00495B30 2442FFFF */  addiu $v0, $v0, -1
.L00495B34:
/* 00495B34 10500004 */  beq   $v0, $s0, .L00495B48
/* 00495B38 00000000 */   nop   
/* 00495B3C 9058FFFF */  lbu   $t8, -1($v0)
/* 00495B40 5078FFFC */  beql  $v1, $t8, .L00495B34
/* 00495B44 2442FFFF */   addiu $v0, $v0, -1
.L00495B48:
/* 00495B48 1000000D */  b     .L00495B80
/* 00495B4C 00503823 */   subu  $a3, $v0, $s0
.L00495B50:
/* 00495B50 8FB90028 */  lw    $t9, 0x28($sp)
/* 00495B54 0327082B */  sltu  $at, $t9, $a3
/* 00495B58 10200009 */  beqz  $at, .L00495B80
/* 00495B5C 00F93023 */   subu  $a2, $a3, $t9
/* 00495B60 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00495B64 8FA40020 */  lw    $a0, 0x20($sp)
/* 00495B68 24050020 */  li    $a1, 32
/* 00495B6C 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00495B70 0320F809 */  jalr  $t9
/* 00495B74 00000000 */   nop   
/* 00495B78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00495B7C 8FA70028 */  lw    $a3, 0x28($sp)
.L00495B80:
/* 00495B80 58E00009 */  blezl $a3, .L00495BA8
/* 00495B84 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00495B88 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00495B8C 8FA40020 */  lw    $a0, 0x20($sp)
/* 00495B90 02002825 */  move  $a1, $s0
/* 00495B94 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00495B98 0320F809 */  jalr  $t9
/* 00495B9C 00E03025 */   move  $a2, $a3
/* 00495BA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00495BA4 8FBF001C */  lw    $ra, 0x1c($sp)
.L00495BA8:
/* 00495BA8 8FB00014 */  lw    $s0, 0x14($sp)
/* 00495BAC 27BD0020 */  addiu $sp, $sp, 0x20
/* 00495BB0 03E00008 */  jr    $ra
/* 00495BB4 00000000 */   nop   
    .type write_string, @function
    .size write_string, .-write_string
    .end write_string

glabel write_enum
    .ent write_enum
    # 0041A410 printitab
    # 0041AC2C printtab
    # 0041C914 printregs
    # 0047B51C ovfwwarning
/* 00495BB8 3C1C0FB8 */  .cpload $t9
/* 00495BBC 279C46D8 */  
/* 00495BC0 0399E021 */  
/* 00495BC4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00495BC8 AFB00014 */  sw    $s0, 0x14($sp)
/* 00495BCC 00C08025 */  move  $s0, $a2
/* 00495BD0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00495BD4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00495BD8 AFA40028 */  sw    $a0, 0x28($sp)
/* 00495BDC AFA70034 */  sw    $a3, 0x34($sp)
/* 00495BE0 10A00019 */  beqz  $a1, .L00495C48
/* 00495BE4 AFA50024 */   sw    $a1, 0x24($sp)
/* 00495BE8 90C30000 */  lbu   $v1, ($a2)
/* 00495BEC 0003102B */  sltu  $v0, $zero, $v1
.L00495BF0:
/* 00495BF0 10400006 */  beqz  $v0, .L00495C0C
/* 00495BF4 26100001 */   addiu $s0, $s0, 1
/* 00495BF8 92020000 */  lbu   $v0, ($s0)
.L00495BFC:
/* 00495BFC 26100001 */  addiu $s0, $s0, 1
/* 00495C00 0002102B */  sltu  $v0, $zero, $v0
/* 00495C04 5440FFFD */  bnezl $v0, .L00495BFC
/* 00495C08 92020000 */   lbu   $v0, ($s0)
.L00495C0C:
/* 00495C0C 92030000 */  lbu   $v1, ($s0)
/* 00495C10 24A5FFFF */  addiu $a1, $a1, -1
/* 00495C14 1460000A */  bnez  $v1, .L00495C40
/* 00495C18 00000000 */   nop   
/* 00495C1C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00495C20 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00495C24 8F858044 */  lw    $a1, %got(RO_1000FA70)($gp)
/* 00495C28 8FA60024 */  lw    $a2, 0x24($sp)
/* 00495C2C 24840020 */  addiu $a0, $a0, 0x20
/* 00495C30 0320F809 */  jalr  $t9
/* 00495C34 24A5FA70 */   addiu $a1, %lo(RO_1000FA70) # addiu $a1, $a1, -0x590
/* 00495C38 1000001F */  b     .L00495CB8
/* 00495C3C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00495C40:
/* 00495C40 54A0FFEB */  bnezl $a1, .L00495BF0
/* 00495C44 0003102B */   sltu  $v0, $zero, $v1
.L00495C48:
/* 00495C48 920E0000 */  lbu   $t6, ($s0)
/* 00495C4C 24030020 */  li    $v1, 32
/* 00495C50 006E2026 */  xor   $a0, $v1, $t6
/* 00495C54 2C840001 */  sltiu $a0, $a0, 1
/* 00495C58 1080000A */  beqz  $a0, .L00495C84
/* 00495C5C 00000000 */   nop   
/* 00495C60 10800007 */  beqz  $a0, .L00495C80
/* 00495C64 26100001 */   addiu $s0, $s0, 1
/* 00495C68 920F0000 */  lbu   $t7, ($s0)
.L00495C6C:
/* 00495C6C 26100001 */  addiu $s0, $s0, 1
/* 00495C70 006F1026 */  xor   $v0, $v1, $t7
/* 00495C74 2C420001 */  sltiu $v0, $v0, 1
/* 00495C78 5440FFFC */  bnezl $v0, .L00495C6C
/* 00495C7C 920F0000 */   lbu   $t7, ($s0)
.L00495C80:
/* 00495C80 2610FFFF */  addiu $s0, $s0, -1
.L00495C84:
/* 00495C84 8F9980C0 */  lw    $t9, %call16(strlen)($gp)
/* 00495C88 02002025 */  move  $a0, $s0
/* 00495C8C 0320F809 */  jalr  $t9
/* 00495C90 00000000 */   nop   
/* 00495C94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00495C98 8FA40028 */  lw    $a0, 0x28($sp)
/* 00495C9C 02002825 */  move  $a1, $s0
/* 00495CA0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00495CA4 00403025 */  move  $a2, $v0
/* 00495CA8 8FA70034 */  lw    $a3, 0x34($sp)
/* 00495CAC 0320F809 */  jalr  $t9
/* 00495CB0 00000000 */   nop   
/* 00495CB4 8FBC0018 */  lw    $gp, 0x18($sp)
.L00495CB8:
/* 00495CB8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00495CBC 8FB00014 */  lw    $s0, 0x14($sp)
/* 00495CC0 27BD0028 */  addiu $sp, $sp, 0x28
/* 00495CC4 03E00008 */  jr    $ra
/* 00495CC8 00000000 */   nop   
    .type write_enum, @function
    .size write_enum, .-write_enum
    .end write_enum

glabel write_integer
    .ent write_integer
    # 004175BC copypropagate
    # 0041A410 printitab
    # 0041AC2C printtab
    # 0041B580 printbv
    # 0041B8C8 printlinfo
    # 0041BC58 printhoist
    # 0041BEF4 printprecm
    # 0041C1B0 printcm
    # 0041C688 printscm
    # 0041C914 printregs
    # 0041D560 printinterproc
    # 0041D758 printsav
    # 0041DDD4 printstat
    # 0041EA88 print_loop_relations
    # 0042BF08 reemit
    # 0042EB10 incorp_feedback
    # 0042EF10 func_0042EF10
    # 00455518 func_00455518
    # 00456A2C oneproc
    # 0045806C main
    # 00458678 mtagwarning
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
    # 0047B3F8 boundswarning
    # 0047B51C ovfwwarning
    # 0047BDF8 dbgerror
    # 0047FF7C skipproc
/* 00495CCC 3C1C0FB8 */  .cpload $t9
/* 00495CD0 279C45C4 */  
/* 00495CD4 0399E021 */  
/* 00495CD8 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 00495CDC AFB00014 */  sw    $s0, 0x14($sp)
/* 00495CE0 2CE10002 */  sltiu $at, $a3, 2
/* 00495CE4 00E08025 */  move  $s0, $a3
/* 00495CE8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00495CEC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00495CF0 AFA40058 */  sw    $a0, 0x58($sp)
/* 00495CF4 1020000A */  beqz  $at, .L00495D20
/* 00495CF8 AFA60060 */   sw    $a2, 0x60($sp)
/* 00495CFC 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00495D00 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00495D04 8F858044 */  lw    $a1, %got(RO_1000FA98)($gp)
/* 00495D08 00E03025 */  move  $a2, $a3
/* 00495D0C 24840020 */  addiu $a0, $a0, 0x20
/* 00495D10 0320F809 */  jalr  $t9
/* 00495D14 24A5FA98 */   addiu $a1, %lo(RO_1000FA98) # addiu $a1, $a1, -0x568
/* 00495D18 1000003C */  b     .L00495E0C
/* 00495D1C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00495D20:
/* 00495D20 04A10003 */  bgez  $a1, .L00495D30
/* 00495D24 27A80034 */   addiu $t0, $sp, 0x34
/* 00495D28 10000002 */  b     .L00495D34
/* 00495D2C 00051023 */   negu  $v0, $a1
.L00495D30:
/* 00495D30 00A01025 */  move  $v0, $a1
.L00495D34:
/* 00495D34 8F838044 */  lw    $v1, %got(D_10011BF0)($gp)
/* 00495D38 27A70055 */  addiu $a3, $sp, 0x55
/* 00495D3C 2419002D */  li    $t9, 45
/* 00495D40 24631BF0 */  addiu $v1, %lo(D_10011BF0) # addiu $v1, $v1, 0x1bf0
.L00495D44:
/* 00495D44 0050001B */  divu  $zero, $v0, $s0
/* 00495D48 00007010 */  mfhi  $t6
/* 00495D4C 006E7821 */  addu  $t7, $v1, $t6
/* 00495D50 91F80000 */  lbu   $t8, ($t7)
/* 00495D54 00001012 */  mflo  $v0
/* 00495D58 24E7FFFF */  addiu $a3, $a3, -1
/* 00495D5C 16000002 */  bnez  $s0, .L00495D68
/* 00495D60 00000000 */   nop   
/* 00495D64 0007000D */  break 7
.L00495D68:
/* 00495D68 A0F80000 */  sb    $t8, ($a3)
/* 00495D6C 1440FFF5 */  bnez  $v0, .L00495D44
/* 00495D70 00000000 */   nop   
/* 00495D74 04A30004 */  bgezl $a1, .L00495D88
/* 00495D78 8FA90060 */   lw    $t1, 0x60($sp)
/* 00495D7C 24E7FFFF */  addiu $a3, $a3, -1
/* 00495D80 A0F90000 */  sb    $t9, ($a3)
/* 00495D84 8FA90060 */  lw    $t1, 0x60($sp)
.L00495D88:
/* 00495D88 01078023 */  subu  $s0, $t0, $a3
/* 00495D8C 26100021 */  addiu $s0, $s0, 0x21
/* 00495D90 0209082A */  slt   $at, $s0, $t1
/* 00495D94 1020000A */  beqz  $at, .L00495DC0
/* 00495D98 8FA40058 */   lw    $a0, 0x58($sp)
/* 00495D9C 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00495DA0 8FAA0060 */  lw    $t2, 0x60($sp)
/* 00495DA4 24050020 */  li    $a1, 32
/* 00495DA8 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00495DAC AFA70030 */  sw    $a3, 0x30($sp)
/* 00495DB0 0320F809 */  jalr  $t9
/* 00495DB4 01503023 */   subu  $a2, $t2, $s0
/* 00495DB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00495DBC 8FA70030 */  lw    $a3, 0x30($sp)
.L00495DC0:
/* 00495DC0 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00495DC4 8FA40058 */  lw    $a0, 0x58($sp)
/* 00495DC8 00E02825 */  move  $a1, $a3
/* 00495DCC 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00495DD0 0320F809 */  jalr  $t9
/* 00495DD4 02003025 */   move  $a2, $s0
/* 00495DD8 8FA20060 */  lw    $v0, 0x60($sp)
/* 00495DDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00495DE0 00021023 */  negu  $v0, $v0
/* 00495DE4 0202082A */  slt   $at, $s0, $v0
/* 00495DE8 50200009 */  beql  $at, $zero, .L00495E10
/* 00495DEC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00495DF0 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00495DF4 8FA40058 */  lw    $a0, 0x58($sp)
/* 00495DF8 24050020 */  li    $a1, 32
/* 00495DFC 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00495E00 0320F809 */  jalr  $t9
/* 00495E04 00503023 */   subu  $a2, $v0, $s0
/* 00495E08 8FBC0018 */  lw    $gp, 0x18($sp)
.L00495E0C:
/* 00495E0C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00495E10:
/* 00495E10 8FB00014 */  lw    $s0, 0x14($sp)
/* 00495E14 27BD0058 */  addiu $sp, $sp, 0x58
/* 00495E18 03E00008 */  jr    $ra
/* 00495E1C 00000000 */   nop   
    .type write_integer, @function
    .size write_integer, .-write_integer
    .end write_integer

glabel write_cardinal
    .ent write_cardinal
    # 0041EA88 print_loop_relations
    # 0042F6CC controlflow
    # 00456A2C oneproc
    # 004713E8 loopunroll
/* 00495E20 3C1C0FB8 */  .cpload $t9
/* 00495E24 279C4470 */  
/* 00495E28 0399E021 */  
/* 00495E2C 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 00495E30 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00495E34 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00495E38 AFB00014 */  sw    $s0, 0x14($sp)
/* 00495E3C AFA40050 */  sw    $a0, 0x50($sp)
/* 00495E40 14E0000A */  bnez  $a3, .L00495E6C
/* 00495E44 AFA60058 */   sw    $a2, 0x58($sp)
/* 00495E48 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00495E4C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00495E50 8F858044 */  lw    $a1, %got(RO_1000FAC8)($gp)
/* 00495E54 00E03025 */  move  $a2, $a3
/* 00495E58 24840020 */  addiu $a0, $a0, 0x20
/* 00495E5C 0320F809 */  jalr  $t9
/* 00495E60 24A5FAC8 */   addiu $a1, %lo(RO_1000FAC8) # addiu $a1, $a1, -0x538
/* 00495E64 10000035 */  b     .L00495F3C
/* 00495E68 8FBC0018 */   lw    $gp, 0x18($sp)
.L00495E6C:
/* 00495E6C 8F828044 */  lw    $v0, %got(D_10011BF0)($gp)
/* 00495E70 27B00050 */  addiu $s0, $sp, 0x50
/* 00495E74 27B90030 */  addiu $t9, $sp, 0x30
/* 00495E78 24421BF0 */  addiu $v0, %lo(D_10011BF0) # addiu $v0, $v0, 0x1bf0
.L00495E7C:
/* 00495E7C 00A7001B */  divu  $zero, $a1, $a3
/* 00495E80 00007010 */  mfhi  $t6
/* 00495E84 004E7821 */  addu  $t7, $v0, $t6
/* 00495E88 91F80000 */  lbu   $t8, ($t7)
/* 00495E8C 00002812 */  mflo  $a1
/* 00495E90 2610FFFF */  addiu $s0, $s0, -1
/* 00495E94 14E00002 */  bnez  $a3, .L00495EA0
/* 00495E98 00000000 */   nop   
/* 00495E9C 0007000D */  break 7
.L00495EA0:
/* 00495EA0 A2180000 */  sb    $t8, ($s0)
/* 00495EA4 14A0FFF5 */  bnez  $a1, .L00495E7C
/* 00495EA8 00000000 */   nop   
/* 00495EAC 8FA80058 */  lw    $t0, 0x58($sp)
/* 00495EB0 03303823 */  subu  $a3, $t9, $s0
/* 00495EB4 24E70020 */  addiu $a3, $a3, 0x20
/* 00495EB8 00E8082A */  slt   $at, $a3, $t0
/* 00495EBC 1020000A */  beqz  $at, .L00495EE8
/* 00495EC0 8FA40050 */   lw    $a0, 0x50($sp)
/* 00495EC4 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00495EC8 8FA90058 */  lw    $t1, 0x58($sp)
/* 00495ECC 24050020 */  li    $a1, 32
/* 00495ED0 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00495ED4 AFA70028 */  sw    $a3, 0x28($sp)
/* 00495ED8 0320F809 */  jalr  $t9
/* 00495EDC 01273023 */   subu  $a2, $t1, $a3
/* 00495EE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00495EE4 8FA70028 */  lw    $a3, 0x28($sp)
.L00495EE8:
/* 00495EE8 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00495EEC 8FA40050 */  lw    $a0, 0x50($sp)
/* 00495EF0 02002825 */  move  $a1, $s0
/* 00495EF4 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00495EF8 00E03025 */  move  $a2, $a3
/* 00495EFC 0320F809 */  jalr  $t9
/* 00495F00 AFA70028 */   sw    $a3, 0x28($sp)
/* 00495F04 8FA20058 */  lw    $v0, 0x58($sp)
/* 00495F08 8FA70028 */  lw    $a3, 0x28($sp)
/* 00495F0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00495F10 00021023 */  negu  $v0, $v0
/* 00495F14 00E2082A */  slt   $at, $a3, $v0
/* 00495F18 50200009 */  beql  $at, $zero, .L00495F40
/* 00495F1C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00495F20 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00495F24 8FA40050 */  lw    $a0, 0x50($sp)
/* 00495F28 24050020 */  li    $a1, 32
/* 00495F2C 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00495F30 0320F809 */  jalr  $t9
/* 00495F34 00473023 */   subu  $a2, $v0, $a3
/* 00495F38 8FBC0018 */  lw    $gp, 0x18($sp)
.L00495F3C:
/* 00495F3C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00495F40:
/* 00495F40 8FB00014 */  lw    $s0, 0x14($sp)
/* 00495F44 27BD0050 */  addiu $sp, $sp, 0x50
/* 00495F48 03E00008 */  jr    $ra
/* 00495F4C 00000000 */   nop   
    .type write_cardinal, @function
    .size write_cardinal, .-write_cardinal
    .end write_cardinal

glabel write_real
    .ent write_real
    # 0041C914 printregs
    # 0041DDD4 printstat
/* 00495F50 3C1C0FB8 */  .cpload $t9
/* 00495F54 279C4340 */  
/* 00495F58 0399E021 */  
/* 00495F5C 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 00495F60 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00495F64 AFA5005C */  sw    $a1, 0x5c($sp)
/* 00495F68 00E02825 */  move  $a1, $a3
/* 00495F6C 00808025 */  move  $s0, $a0
/* 00495F70 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00495F74 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00495F78 1CE00162 */  bgtz  $a3, .L00496504
/* 00495F7C AFA60060 */   sw    $a2, 0x60($sp)
/* 00495F80 24C2FFFA */  addiu $v0, $a2, -6
/* 00495F84 28410003 */  slti  $at, $v0, 3
/* 00495F88 14200003 */  bnez  $at, .L00495F98
/* 00495F8C 240E0002 */   li    $t6, 2
/* 00495F90 10000002 */  b     .L00495F9C
/* 00495F94 AFA2004C */   sw    $v0, 0x4c($sp)
.L00495F98:
/* 00495F98 AFAE004C */  sw    $t6, 0x4c($sp)
.L00495F9C:
/* 00495F9C C7A4005C */  lwc1  $f4, 0x5c($sp)
/* 00495FA0 44803800 */  mtc1  $zero, $f7
/* 00495FA4 44803000 */  mtc1  $zero, $f6
/* 00495FA8 46002321 */  cvt.d.s $f12, $f4
/* 00495FAC 02002025 */  move  $a0, $s0
/* 00495FB0 462C3032 */  c.eq.d $f6, $f12
/* 00495FB4 8FA6004C */  lw    $a2, 0x4c($sp)
/* 00495FB8 4500001A */  bc1f  .L00496024
/* 00495FBC 00000000 */   nop   
/* 00495FC0 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00495FC4 8F858044 */  lw    $a1, %got(RO_1000FAF8)($gp)
/* 00495FC8 24060003 */  li    $a2, 3
/* 00495FCC 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00495FD0 0320F809 */  jalr  $t9
/* 00495FD4 24A5FAF8 */   addiu $a1, %lo(RO_1000FAF8) # addiu $a1, $a1, -0x508
/* 00495FD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00495FDC 8FA6004C */  lw    $a2, 0x4c($sp)
/* 00495FE0 02002025 */  move  $a0, $s0
/* 00495FE4 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00495FE8 24050030 */  li    $a1, 48
/* 00495FEC 24C6FFFF */  addiu $a2, $a2, -1
/* 00495FF0 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00495FF4 0320F809 */  jalr  $t9
/* 00495FF8 00000000 */   nop   
/* 00495FFC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496000 02002025 */  move  $a0, $s0
/* 00496004 24060004 */  li    $a2, 4
/* 00496008 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 0049600C 8F858044 */  lw    $a1, %got(RO_1000FAFC)($gp)
/* 00496010 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496014 0320F809 */  jalr  $t9
/* 00496018 24A5FAFC */   addiu $a1, %lo(RO_1000FAFC) # addiu $a1, $a1, -0x504
/* 0049601C 100002AB */  b     .L00496ACC
/* 00496020 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496024:
/* 00496024 8F998130 */  lw    $t9, %call16(ecvt)($gp)
/* 00496028 27AF0050 */  addiu $t7, $sp, 0x50
/* 0049602C AFAF0010 */  sw    $t7, 0x10($sp)
/* 00496030 0320F809 */  jalr  $t9
/* 00496034 27A70054 */   addiu $a3, $sp, 0x54
/* 00496038 AFA20048 */  sw    $v0, 0x48($sp)
/* 0049603C 90430000 */  lbu   $v1, ($v0)
/* 00496040 24010049 */  li    $at, 73
/* 00496044 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496048 10610007 */  beq   $v1, $at, .L00496068
/* 0049604C 2401004E */   li    $at, 78
/* 00496050 10610005 */  beq   $v1, $at, .L00496068
/* 00496054 24010069 */   li    $at, 105
/* 00496058 10610003 */  beq   $v1, $at, .L00496068
/* 0049605C 2401006E */   li    $at, 110
/* 00496060 14610018 */  bne   $v1, $at, .L004960C4
/* 00496064 00000000 */   nop   
.L00496068:
/* 00496068 8F9980C0 */  lw    $t9, %call16(strlen)($gp)
/* 0049606C 8FA40048 */  lw    $a0, 0x48($sp)
/* 00496070 0320F809 */  jalr  $t9
/* 00496074 00000000 */   nop   
/* 00496078 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0049607C 8FB80060 */  lw    $t8, 0x60($sp)
/* 00496080 AFA2004C */  sw    $v0, 0x4c($sp)
/* 00496084 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00496088 02002025 */  move  $a0, $s0
/* 0049608C 24050020 */  li    $a1, 32
/* 00496090 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00496094 0320F809 */  jalr  $t9
/* 00496098 03023023 */   subu  $a2, $t8, $v0
/* 0049609C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004960A0 02002025 */  move  $a0, $s0
/* 004960A4 8FA50048 */  lw    $a1, 0x48($sp)
/* 004960A8 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 004960AC 8FA6004C */  lw    $a2, 0x4c($sp)
/* 004960B0 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 004960B4 0320F809 */  jalr  $t9
/* 004960B8 00000000 */   nop   
/* 004960BC 10000283 */  b     .L00496ACC
/* 004960C0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004960C4:
/* 004960C4 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 004960C8 8FB90054 */  lw    $t9, 0x54($sp)
/* 004960CC 8FA30050 */  lw    $v1, 0x50($sp)
/* 004960D0 8D290000 */  lw    $t1, ($t1)
/* 004960D4 2728FFFF */  addiu $t0, $t9, -1
/* 004960D8 AFA80054 */  sw    $t0, 0x54($sp)
/* 004960DC 5120000C */  beql  $t1, $zero, .L00496110
/* 004960E0 8E0A0000 */   lw    $t2, ($s0)
/* 004960E4 10600003 */  beqz  $v1, .L004960F4
/* 004960E8 24040020 */   li    $a0, 32
/* 004960EC 10000001 */  b     .L004960F4
/* 004960F0 2404002D */   li    $a0, 45
.L004960F4:
/* 004960F4 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004960F8 02002825 */  move  $a1, $s0
/* 004960FC 0320F809 */  jalr  $t9
/* 00496100 00000000 */   nop   
/* 00496104 1000001E */  b     .L00496180
/* 00496108 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0049610C 8E0A0000 */  lw    $t2, ($s0)
.L00496110:
/* 00496110 254BFFFF */  addiu $t3, $t2, -1
/* 00496114 0561000D */  bgez  $t3, .L0049614C
/* 00496118 AE0B0000 */   sw    $t3, ($s0)
/* 0049611C 8FA30050 */  lw    $v1, 0x50($sp)
/* 00496120 24040020 */  li    $a0, 32
/* 00496124 10600003 */  beqz  $v1, .L00496134
/* 00496128 00000000 */   nop   
/* 0049612C 10000001 */  b     .L00496134
/* 00496130 2404002D */   li    $a0, 45
.L00496134:
/* 00496134 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496138 02002825 */  move  $a1, $s0
/* 0049613C 0320F809 */  jalr  $t9
/* 00496140 00000000 */   nop   
/* 00496144 1000000E */  b     .L00496180
/* 00496148 8FBC0020 */   lw    $gp, 0x20($sp)
.L0049614C:
/* 0049614C 8FA30050 */  lw    $v1, 0x50($sp)
/* 00496150 50600006 */  beql  $v1, $zero, .L0049616C
/* 00496154 8E180004 */   lw    $t8, 4($s0)
/* 00496158 8E0E0004 */  lw    $t6, 4($s0)
/* 0049615C 240D002D */  li    $t5, 45
/* 00496160 10000004 */  b     .L00496174
/* 00496164 A1CD0000 */   sb    $t5, ($t6)
/* 00496168 8E180004 */  lw    $t8, 4($s0)
.L0049616C:
/* 0049616C 240F0020 */  li    $t7, 32
/* 00496170 A30F0000 */  sb    $t7, ($t8)
.L00496174:
/* 00496174 8E190004 */  lw    $t9, 4($s0)
/* 00496178 27280001 */  addiu $t0, $t9, 1
/* 0049617C AE080004 */  sw    $t0, 4($s0)
.L00496180:
/* 00496180 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 00496184 8FAA0048 */  lw    $t2, 0x48($sp)
/* 00496188 02002825 */  move  $a1, $s0
/* 0049618C 8D290000 */  lw    $t1, ($t1)
/* 00496190 51200009 */  beql  $t1, $zero, .L004961B8
/* 00496194 8E0C0000 */   lw    $t4, ($s0)
/* 00496198 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 0049619C 91440000 */  lbu   $a0, ($t2)
/* 004961A0 254B0001 */  addiu $t3, $t2, 1
/* 004961A4 0320F809 */  jalr  $t9
/* 004961A8 AFAB0048 */   sw    $t3, 0x48($sp)
/* 004961AC 10000018 */  b     .L00496210
/* 004961B0 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004961B4 8E0C0000 */  lw    $t4, ($s0)
.L004961B8:
/* 004961B8 258DFFFF */  addiu $t5, $t4, -1
/* 004961BC 05A1000A */  bgez  $t5, .L004961E8
/* 004961C0 AE0D0000 */   sw    $t5, ($s0)
/* 004961C4 8FAF0048 */  lw    $t7, 0x48($sp)
/* 004961C8 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004961CC 02002825 */  move  $a1, $s0
/* 004961D0 91E40000 */  lbu   $a0, ($t7)
/* 004961D4 25F80001 */  addiu $t8, $t7, 1
/* 004961D8 0320F809 */  jalr  $t9
/* 004961DC AFB80048 */   sw    $t8, 0x48($sp)
/* 004961E0 1000000B */  b     .L00496210
/* 004961E4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004961E8:
/* 004961E8 8FB90048 */  lw    $t9, 0x48($sp)
/* 004961EC 8E090004 */  lw    $t1, 4($s0)
/* 004961F0 93280000 */  lbu   $t0, ($t9)
/* 004961F4 A1280000 */  sb    $t0, ($t1)
/* 004961F8 8E0A0004 */  lw    $t2, 4($s0)
/* 004961FC 254B0001 */  addiu $t3, $t2, 1
/* 00496200 AE0B0004 */  sw    $t3, 4($s0)
/* 00496204 8FAC0048 */  lw    $t4, 0x48($sp)
/* 00496208 258D0001 */  addiu $t5, $t4, 1
/* 0049620C AFAD0048 */  sw    $t5, 0x48($sp)
.L00496210:
/* 00496210 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00496214 8DCE0000 */  lw    $t6, ($t6)
/* 00496218 51C00009 */  beql  $t6, $zero, .L00496240
/* 0049621C 8E0F0000 */   lw    $t7, ($s0)
/* 00496220 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496224 2404002E */  li    $a0, 46
/* 00496228 02002825 */  move  $a1, $s0
/* 0049622C 0320F809 */  jalr  $t9
/* 00496230 00000000 */   nop   
/* 00496234 10000012 */  b     .L00496280
/* 00496238 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0049623C 8E0F0000 */  lw    $t7, ($s0)
.L00496240:
/* 00496240 25F8FFFF */  addiu $t8, $t7, -1
/* 00496244 07010008 */  bgez  $t8, .L00496268
/* 00496248 AE180000 */   sw    $t8, ($s0)
/* 0049624C 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496250 2404002E */  li    $a0, 46
/* 00496254 02002825 */  move  $a1, $s0
/* 00496258 0320F809 */  jalr  $t9
/* 0049625C 00000000 */   nop   
/* 00496260 10000007 */  b     .L00496280
/* 00496264 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496268:
/* 00496268 8E090004 */  lw    $t1, 4($s0)
/* 0049626C 2408002E */  li    $t0, 46
/* 00496270 A1280000 */  sb    $t0, ($t1)
/* 00496274 8E0A0004 */  lw    $t2, 4($s0)
/* 00496278 254B0001 */  addiu $t3, $t2, 1
/* 0049627C AE0B0004 */  sw    $t3, 4($s0)
.L00496280:
/* 00496280 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00496284 8FA6004C */  lw    $a2, 0x4c($sp)
/* 00496288 02002025 */  move  $a0, $s0
/* 0049628C 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496290 8FA50048 */  lw    $a1, 0x48($sp)
/* 00496294 0320F809 */  jalr  $t9
/* 00496298 24C6FFFF */   addiu $a2, $a2, -1
/* 0049629C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004962A0 8F8C8064 */  lw     $t4, %got(__us_rsthread_stdio)($gp)
/* 004962A4 8D8C0000 */  lw    $t4, ($t4)
/* 004962A8 51800009 */  beql  $t4, $zero, .L004962D0
/* 004962AC 8E0D0000 */   lw    $t5, ($s0)
/* 004962B0 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004962B4 24040065 */  li    $a0, 101
/* 004962B8 02002825 */  move  $a1, $s0
/* 004962BC 0320F809 */  jalr  $t9
/* 004962C0 00000000 */   nop   
/* 004962C4 10000012 */  b     .L00496310
/* 004962C8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004962CC 8E0D0000 */  lw    $t5, ($s0)
.L004962D0:
/* 004962D0 25AEFFFF */  addiu $t6, $t5, -1
/* 004962D4 05C10008 */  bgez  $t6, .L004962F8
/* 004962D8 AE0E0000 */   sw    $t6, ($s0)
/* 004962DC 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004962E0 24040065 */  li    $a0, 101
/* 004962E4 02002825 */  move  $a1, $s0
/* 004962E8 0320F809 */  jalr  $t9
/* 004962EC 00000000 */   nop   
/* 004962F0 10000007 */  b     .L00496310
/* 004962F4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004962F8:
/* 004962F8 8E190004 */  lw    $t9, 4($s0)
/* 004962FC 24180065 */  li    $t8, 101
/* 00496300 A3380000 */  sb    $t8, ($t9)
/* 00496304 8E080004 */  lw    $t0, 4($s0)
/* 00496308 25090001 */  addiu $t1, $t0, 1
/* 0049630C AE090004 */  sw    $t1, 4($s0)
.L00496310:
/* 00496310 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 00496314 8FAB0054 */  lw    $t3, 0x54($sp)
/* 00496318 8D4A0000 */  lw    $t2, ($t2)
/* 0049631C 5140000E */  beql  $t2, $zero, .L00496358
/* 00496320 8E0D0000 */   lw    $t5, ($s0)
/* 00496324 05610005 */  bgez  $t3, .L0049633C
/* 00496328 2404002B */   li    $a0, 43
/* 0049632C 000B6023 */  negu  $t4, $t3
/* 00496330 AFAC0054 */  sw    $t4, 0x54($sp)
/* 00496334 10000001 */  b     .L0049633C
/* 00496338 2404002D */   li    $a0, 45
.L0049633C:
/* 0049633C 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496340 02002825 */  move  $a1, $s0
/* 00496344 0320F809 */  jalr  $t9
/* 00496348 00000000 */   nop   
/* 0049634C 10000020 */  b     .L004963D0
/* 00496350 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496354 8E0D0000 */  lw    $t5, ($s0)
.L00496358:
/* 00496358 25AEFFFF */  addiu $t6, $t5, -1
/* 0049635C 05C1000E */  bgez  $t6, .L00496398
/* 00496360 AE0E0000 */   sw    $t6, ($s0)
/* 00496364 8FB80054 */  lw    $t8, 0x54($sp)
/* 00496368 2404002B */  li    $a0, 43
/* 0049636C 07010004 */  bgez  $t8, .L00496380
/* 00496370 0018C823 */   negu  $t9, $t8
/* 00496374 AFB90054 */  sw    $t9, 0x54($sp)
/* 00496378 10000001 */  b     .L00496380
/* 0049637C 2404002D */   li    $a0, 45
.L00496380:
/* 00496380 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496384 02002825 */  move  $a1, $s0
/* 00496388 0320F809 */  jalr  $t9
/* 0049638C 00000000 */   nop   
/* 00496390 1000000F */  b     .L004963D0
/* 00496394 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496398:
/* 00496398 8FA80054 */  lw    $t0, 0x54($sp)
/* 0049639C 05010006 */  bgez  $t0, .L004963B8
/* 004963A0 00084823 */   negu  $t1, $t0
/* 004963A4 AFA90054 */  sw    $t1, 0x54($sp)
/* 004963A8 8E0B0004 */  lw    $t3, 4($s0)
/* 004963AC 240A002D */  li    $t2, 45
/* 004963B0 10000004 */  b     .L004963C4
/* 004963B4 A16A0000 */   sb    $t2, ($t3)
.L004963B8:
/* 004963B8 8E0D0004 */  lw    $t5, 4($s0)
/* 004963BC 240C002B */  li    $t4, 43
/* 004963C0 A1AC0000 */  sb    $t4, ($t5)
.L004963C4:
/* 004963C4 8E0E0004 */  lw    $t6, 4($s0)
/* 004963C8 25CF0001 */  addiu $t7, $t6, 1
/* 004963CC AE0F0004 */  sw    $t7, 4($s0)
.L004963D0:
/* 004963D0 8F988064 */  lw     $t8, %got(__us_rsthread_stdio)($gp)
/* 004963D4 8FA40054 */  lw    $a0, 0x54($sp)
/* 004963D8 2401000A */  li    $at, 10
/* 004963DC 8F180000 */  lw    $t8, ($t8)
/* 004963E0 5300000A */  beql  $t8, $zero, .L0049640C
/* 004963E4 8E190000 */   lw    $t9, ($s0)
/* 004963E8 0081001A */  div   $zero, $a0, $at
/* 004963EC 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004963F0 00002012 */  mflo  $a0
/* 004963F4 24840030 */  addiu $a0, $a0, 0x30
/* 004963F8 0320F809 */  jalr  $t9
/* 004963FC 02002825 */   move  $a1, $s0
/* 00496400 10000019 */  b     .L00496468
/* 00496404 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496408 8E190000 */  lw    $t9, ($s0)
.L0049640C:
/* 0049640C 2728FFFF */  addiu $t0, $t9, -1
/* 00496410 0501000B */  bgez  $t0, .L00496440
/* 00496414 AE080000 */   sw    $t0, ($s0)
/* 00496418 8FA40054 */  lw    $a0, 0x54($sp)
/* 0049641C 2401000A */  li    $at, 10
/* 00496420 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496424 0081001A */  div   $zero, $a0, $at
/* 00496428 00002012 */  mflo  $a0
/* 0049642C 24840030 */  addiu $a0, $a0, 0x30
/* 00496430 0320F809 */  jalr  $t9
/* 00496434 02002825 */   move  $a1, $s0
/* 00496438 1000000B */  b     .L00496468
/* 0049643C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496440:
/* 00496440 8FAA0054 */  lw    $t2, 0x54($sp)
/* 00496444 2401000A */  li    $at, 10
/* 00496448 8E0D0004 */  lw    $t5, 4($s0)
/* 0049644C 0141001A */  div   $zero, $t2, $at
/* 00496450 00005812 */  mflo  $t3
/* 00496454 256C0030 */  addiu $t4, $t3, 0x30
/* 00496458 A1AC0000 */  sb    $t4, ($t5)
/* 0049645C 8E0E0004 */  lw    $t6, 4($s0)
/* 00496460 25CF0001 */  addiu $t7, $t6, 1
/* 00496464 AE0F0004 */  sw    $t7, 4($s0)
.L00496468:
/* 00496468 8F988064 */  lw     $t8, %got(__us_rsthread_stdio)($gp)
/* 0049646C 8FA40054 */  lw    $a0, 0x54($sp)
/* 00496470 2401000A */  li    $at, 10
/* 00496474 8F180000 */  lw    $t8, ($t8)
/* 00496478 5300000A */  beql  $t8, $zero, .L004964A4
/* 0049647C 8E190000 */   lw    $t9, ($s0)
/* 00496480 0081001A */  div   $zero, $a0, $at
/* 00496484 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496488 00002010 */  mfhi  $a0
/* 0049648C 24840030 */  addiu $a0, $a0, 0x30
/* 00496490 0320F809 */  jalr  $t9
/* 00496494 02002825 */   move  $a1, $s0
/* 00496498 1000018C */  b     .L00496ACC
/* 0049649C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004964A0 8E190000 */  lw    $t9, ($s0)
.L004964A4:
/* 004964A4 2728FFFF */  addiu $t0, $t9, -1
/* 004964A8 0501000B */  bgez  $t0, .L004964D8
/* 004964AC AE080000 */   sw    $t0, ($s0)
/* 004964B0 8FA40054 */  lw    $a0, 0x54($sp)
/* 004964B4 2401000A */  li    $at, 10
/* 004964B8 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004964BC 0081001A */  div   $zero, $a0, $at
/* 004964C0 00002010 */  mfhi  $a0
/* 004964C4 24840030 */  addiu $a0, $a0, 0x30
/* 004964C8 0320F809 */  jalr  $t9
/* 004964CC 02002825 */   move  $a1, $s0
/* 004964D0 1000017E */  b     .L00496ACC
/* 004964D4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004964D8:
/* 004964D8 8FAA0054 */  lw    $t2, 0x54($sp)
/* 004964DC 2401000A */  li    $at, 10
/* 004964E0 8E0D0004 */  lw    $t5, 4($s0)
/* 004964E4 0141001A */  div   $zero, $t2, $at
/* 004964E8 00005810 */  mfhi  $t3
/* 004964EC 256C0030 */  addiu $t4, $t3, 0x30
/* 004964F0 A1AC0000 */  sb    $t4, ($t5)
/* 004964F4 8E0E0004 */  lw    $t6, 4($s0)
/* 004964F8 25CF0001 */  addiu $t7, $t6, 1
/* 004964FC 10000173 */  b     .L00496ACC
/* 00496500 AE0F0004 */   sw    $t7, 4($s0)
.L00496504:
/* 00496504 8F998134 */  lw    $t9, %call16(fcvt)($gp)
/* 00496508 C7A8005C */  lwc1  $f8, 0x5c($sp)
/* 0049650C 27B80050 */  addiu $t8, $sp, 0x50
/* 00496510 AFB80010 */  sw    $t8, 0x10($sp)
/* 00496514 00A03025 */  move  $a2, $a1
/* 00496518 27A70054 */  addiu $a3, $sp, 0x54
/* 0049651C AFA50064 */  sw    $a1, 0x64($sp)
/* 00496520 0320F809 */  jalr  $t9
/* 00496524 46004321 */   cvt.d.s $f12, $f8
/* 00496528 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0049652C AFA20048 */  sw    $v0, 0x48($sp)
/* 00496530 00402025 */  move  $a0, $v0
/* 00496534 8F9980C0 */  lw    $t9, %call16(strlen)($gp)
/* 00496538 0320F809 */  jalr  $t9
/* 0049653C 00000000 */   nop   
/* 00496540 8FB90054 */  lw    $t9, 0x54($sp)
/* 00496544 8FA30050 */  lw    $v1, 0x50($sp)
/* 00496548 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0049654C AFA2004C */  sw    $v0, 0x4c($sp)
/* 00496550 1F20009D */  bgtz  $t9, .L004967C8
/* 00496554 0003182B */   sltu  $v1, $zero, $v1
/* 00496558 8FA80060 */  lw    $t0, 0x60($sp)
/* 0049655C 8FAA0064 */  lw    $t2, 0x64($sp)
/* 00496560 AFA30050 */  sw    $v1, 0x50($sp)
/* 00496564 01034823 */  subu  $t1, $t0, $v1
/* 00496568 012A3023 */  subu  $a2, $t1, $t2
/* 0049656C 24C6FFFE */  addiu $a2, $a2, -2
/* 00496570 58C00009 */  blezl $a2, .L00496598
/* 00496574 8FA30050 */   lw    $v1, 0x50($sp)
/* 00496578 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 0049657C 02002025 */  move  $a0, $s0
/* 00496580 24050020 */  li    $a1, 32
/* 00496584 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00496588 0320F809 */  jalr  $t9
/* 0049658C 00000000 */   nop   
/* 00496590 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496594 8FA30050 */  lw    $v1, 0x50($sp)
.L00496598:
/* 00496598 1060001D */  beqz  $v1, .L00496610
/* 0049659C 00000000 */   nop   
/* 004965A0 8F8B8064 */  lw     $t3, %got(__us_rsthread_stdio)($gp)
/* 004965A4 8D6B0000 */  lw    $t3, ($t3)
/* 004965A8 51600009 */  beql  $t3, $zero, .L004965D0
/* 004965AC 8E0C0000 */   lw    $t4, ($s0)
/* 004965B0 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004965B4 2404002D */  li    $a0, 45
/* 004965B8 02002825 */  move  $a1, $s0
/* 004965BC 0320F809 */  jalr  $t9
/* 004965C0 00000000 */   nop   
/* 004965C4 10000012 */  b     .L00496610
/* 004965C8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004965CC 8E0C0000 */  lw    $t4, ($s0)
.L004965D0:
/* 004965D0 258DFFFF */  addiu $t5, $t4, -1
/* 004965D4 05A10008 */  bgez  $t5, .L004965F8
/* 004965D8 AE0D0000 */   sw    $t5, ($s0)
/* 004965DC 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004965E0 2404002D */  li    $a0, 45
/* 004965E4 02002825 */  move  $a1, $s0
/* 004965E8 0320F809 */  jalr  $t9
/* 004965EC 00000000 */   nop   
/* 004965F0 10000007 */  b     .L00496610
/* 004965F4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004965F8:
/* 004965F8 8E180004 */  lw    $t8, 4($s0)
/* 004965FC 240F002D */  li    $t7, 45
/* 00496600 A30F0000 */  sb    $t7, ($t8)
/* 00496604 8E190004 */  lw    $t9, 4($s0)
/* 00496608 27280001 */  addiu $t0, $t9, 1
/* 0049660C AE080004 */  sw    $t0, 4($s0)
.L00496610:
/* 00496610 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 00496614 8D290000 */  lw    $t1, ($t1)
/* 00496618 51200009 */  beql  $t1, $zero, .L00496640
/* 0049661C 8E0A0000 */   lw    $t2, ($s0)
/* 00496620 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496624 24040030 */  li    $a0, 48
/* 00496628 02002825 */  move  $a1, $s0
/* 0049662C 0320F809 */  jalr  $t9
/* 00496630 00000000 */   nop   
/* 00496634 10000012 */  b     .L00496680
/* 00496638 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0049663C 8E0A0000 */  lw    $t2, ($s0)
.L00496640:
/* 00496640 254BFFFF */  addiu $t3, $t2, -1
/* 00496644 05610008 */  bgez  $t3, .L00496668
/* 00496648 AE0B0000 */   sw    $t3, ($s0)
/* 0049664C 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496650 24040030 */  li    $a0, 48
/* 00496654 02002825 */  move  $a1, $s0
/* 00496658 0320F809 */  jalr  $t9
/* 0049665C 00000000 */   nop   
/* 00496660 10000007 */  b     .L00496680
/* 00496664 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496668:
/* 00496668 8E0E0004 */  lw    $t6, 4($s0)
/* 0049666C 240D0030 */  li    $t5, 48
/* 00496670 A1CD0000 */  sb    $t5, ($t6)
/* 00496674 8E0F0004 */  lw    $t7, 4($s0)
/* 00496678 25F80001 */  addiu $t8, $t7, 1
/* 0049667C AE180004 */  sw    $t8, 4($s0)
.L00496680:
/* 00496680 8F998064 */  lw     $t9, %got(__us_rsthread_stdio)($gp)
/* 00496684 8F390000 */  lw    $t9, ($t9)
/* 00496688 53200009 */  beql  $t9, $zero, .L004966B0
/* 0049668C 8E080000 */   lw    $t0, ($s0)
/* 00496690 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496694 2404002E */  li    $a0, 46
/* 00496698 02002825 */  move  $a1, $s0
/* 0049669C 0320F809 */  jalr  $t9
/* 004966A0 00000000 */   nop   
/* 004966A4 10000012 */  b     .L004966F0
/* 004966A8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004966AC 8E080000 */  lw    $t0, ($s0)
.L004966B0:
/* 004966B0 2509FFFF */  addiu $t1, $t0, -1
/* 004966B4 05210008 */  bgez  $t1, .L004966D8
/* 004966B8 AE090000 */   sw    $t1, ($s0)
/* 004966BC 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004966C0 2404002E */  li    $a0, 46
/* 004966C4 02002825 */  move  $a1, $s0
/* 004966C8 0320F809 */  jalr  $t9
/* 004966CC 00000000 */   nop   
/* 004966D0 10000007 */  b     .L004966F0
/* 004966D4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004966D8:
/* 004966D8 8E0C0004 */  lw    $t4, 4($s0)
/* 004966DC 240B002E */  li    $t3, 46
/* 004966E0 A18B0000 */  sb    $t3, ($t4)
/* 004966E4 8E0D0004 */  lw    $t5, 4($s0)
/* 004966E8 25AE0001 */  addiu $t6, $t5, 1
/* 004966EC AE0E0004 */  sw    $t6, 4($s0)
.L004966F0:
/* 004966F0 8FAF0054 */  lw    $t7, 0x54($sp)
/* 004966F4 8FA70064 */  lw    $a3, 0x64($sp)
/* 004966F8 000FC023 */  negu  $t8, $t7
/* 004966FC 0307082A */  slt   $at, $t8, $a3
/* 00496700 1020001A */  beqz  $at, .L0049676C
/* 00496704 AFB80054 */   sw    $t8, 0x54($sp)
/* 00496708 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 0049670C 02002025 */  move  $a0, $s0
/* 00496710 24050030 */  li    $a1, 48
/* 00496714 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00496718 0320F809 */  jalr  $t9
/* 0049671C 03003025 */   move  $a2, $t8
/* 00496720 8FA80064 */  lw    $t0, 0x64($sp)
/* 00496724 8FA90054 */  lw    $t1, 0x54($sp)
/* 00496728 8FAA004C */  lw    $t2, 0x4c($sp)
/* 0049672C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496730 01093823 */  subu  $a3, $t0, $t1
/* 00496734 00EA082B */  sltu  $at, $a3, $t2
/* 00496738 10200002 */  beqz  $at, .L00496744
/* 0049673C 02002025 */   move  $a0, $s0
/* 00496740 AFA7004C */  sw    $a3, 0x4c($sp)
.L00496744:
/* 00496744 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00496748 8FA50048 */  lw    $a1, 0x48($sp)
/* 0049674C 8FA6004C */  lw    $a2, 0x4c($sp)
/* 00496750 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496754 0320F809 */  jalr  $t9
/* 00496758 AFA70040 */   sw    $a3, 0x40($sp)
/* 0049675C 8FA70040 */  lw    $a3, 0x40($sp)
/* 00496760 8FAB004C */  lw    $t3, 0x4c($sp)
/* 00496764 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496768 00EB3823 */  subu  $a3, $a3, $t3
.L0049676C:
/* 0049676C 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00496770 02002025 */  move  $a0, $s0
/* 00496774 24050030 */  li    $a1, 48
/* 00496778 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 0049677C 0320F809 */  jalr  $t9
/* 00496780 00E03025 */   move  $a2, $a3
/* 00496784 8FAC0060 */  lw    $t4, 0x60($sp)
/* 00496788 8FA30050 */  lw    $v1, 0x50($sp)
/* 0049678C 8FAF0064 */  lw    $t7, 0x64($sp)
/* 00496790 000C6823 */  negu  $t5, $t4
/* 00496794 01A37023 */  subu  $t6, $t5, $v1
/* 00496798 01CF3023 */  subu  $a2, $t6, $t7
/* 0049679C 24C6FFFE */  addiu $a2, $a2, -2
/* 004967A0 18C000CA */  blez  $a2, .L00496ACC
/* 004967A4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004967A8 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004967AC 02002025 */  move  $a0, $s0
/* 004967B0 24050020 */  li    $a1, 32
/* 004967B4 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004967B8 0320F809 */  jalr  $t9
/* 004967BC 00000000 */   nop   
/* 004967C0 100000C2 */  b     .L00496ACC
/* 004967C4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004967C8:
/* 004967C8 8FB90060 */  lw    $t9, 0x60($sp)
/* 004967CC 8FA80054 */  lw    $t0, 0x54($sp)
/* 004967D0 8FAA0064 */  lw    $t2, 0x64($sp)
/* 004967D4 0323C023 */  subu  $t8, $t9, $v1
/* 004967D8 03084823 */  subu  $t1, $t8, $t0
/* 004967DC 012A3023 */  subu  $a2, $t1, $t2
/* 004967E0 24C6FFFF */  addiu $a2, $a2, -1
/* 004967E4 18C00008 */  blez  $a2, .L00496808
/* 004967E8 AFA30050 */   sw    $v1, 0x50($sp)
/* 004967EC 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004967F0 02002025 */  move  $a0, $s0
/* 004967F4 24050020 */  li    $a1, 32
/* 004967F8 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004967FC 0320F809 */  jalr  $t9
/* 00496800 00000000 */   nop   
/* 00496804 8FBC0020 */  lw    $gp, 0x20($sp)
.L00496808:
/* 00496808 8FA30050 */  lw    $v1, 0x50($sp)
/* 0049680C 5060001E */  beql  $v1, $zero, .L00496888
/* 00496810 8FA90054 */   lw    $t1, 0x54($sp)
/* 00496814 8F8B8064 */  lw     $t3, %got(__us_rsthread_stdio)($gp)
/* 00496818 8D6B0000 */  lw    $t3, ($t3)
/* 0049681C 51600009 */  beql  $t3, $zero, .L00496844
/* 00496820 8E0C0000 */   lw    $t4, ($s0)
/* 00496824 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496828 2404002D */  li    $a0, 45
/* 0049682C 02002825 */  move  $a1, $s0
/* 00496830 0320F809 */  jalr  $t9
/* 00496834 00000000 */   nop   
/* 00496838 10000012 */  b     .L00496884
/* 0049683C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496840 8E0C0000 */  lw    $t4, ($s0)
.L00496844:
/* 00496844 258DFFFF */  addiu $t5, $t4, -1
/* 00496848 05A10008 */  bgez  $t5, .L0049686C
/* 0049684C AE0D0000 */   sw    $t5, ($s0)
/* 00496850 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496854 2404002D */  li    $a0, 45
/* 00496858 02002825 */  move  $a1, $s0
/* 0049685C 0320F809 */  jalr  $t9
/* 00496860 00000000 */   nop   
/* 00496864 10000007 */  b     .L00496884
/* 00496868 8FBC0020 */   lw    $gp, 0x20($sp)
.L0049686C:
/* 0049686C 8E190004 */  lw    $t9, 4($s0)
/* 00496870 240F002D */  li    $t7, 45
/* 00496874 A32F0000 */  sb    $t7, ($t9)
/* 00496878 8E180004 */  lw    $t8, 4($s0)
/* 0049687C 27080001 */  addiu $t0, $t8, 1
/* 00496880 AE080004 */  sw    $t0, 4($s0)
.L00496884:
/* 00496884 8FA90054 */  lw    $t1, 0x54($sp)
.L00496888:
/* 00496888 8FAA004C */  lw    $t2, 0x4c($sp)
/* 0049688C 012A082A */  slt   $at, $t1, $t2
/* 00496890 14200035 */  bnez  $at, .L00496968
/* 00496894 00000000 */   nop   
/* 00496898 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 0049689C 02002025 */  move  $a0, $s0
/* 004968A0 8FA50048 */  lw    $a1, 0x48($sp)
/* 004968A4 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 004968A8 0320F809 */  jalr  $t9
/* 004968AC 01403025 */   move  $a2, $t2
/* 004968B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004968B4 8FAB0054 */  lw    $t3, 0x54($sp)
/* 004968B8 8FAC004C */  lw    $t4, 0x4c($sp)
/* 004968BC 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004968C0 02002025 */  move  $a0, $s0
/* 004968C4 24050030 */  li    $a1, 48
/* 004968C8 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004968CC 0320F809 */  jalr  $t9
/* 004968D0 016C3023 */   subu  $a2, $t3, $t4
/* 004968D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004968D8 8F8D8064 */  lw     $t5, %got(__us_rsthread_stdio)($gp)
/* 004968DC 8DAD0000 */  lw    $t5, ($t5)
/* 004968E0 51A00009 */  beql  $t5, $zero, .L00496908
/* 004968E4 8E0E0000 */   lw    $t6, ($s0)
/* 004968E8 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004968EC 2404002E */  li    $a0, 46
/* 004968F0 02002825 */  move  $a1, $s0
/* 004968F4 0320F809 */  jalr  $t9
/* 004968F8 00000000 */   nop   
/* 004968FC 10000012 */  b     .L00496948
/* 00496900 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496904 8E0E0000 */  lw    $t6, ($s0)
.L00496908:
/* 00496908 25CFFFFF */  addiu $t7, $t6, -1
/* 0049690C 05E10008 */  bgez  $t7, .L00496930
/* 00496910 AE0F0000 */   sw    $t7, ($s0)
/* 00496914 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496918 2404002E */  li    $a0, 46
/* 0049691C 02002825 */  move  $a1, $s0
/* 00496920 0320F809 */  jalr  $t9
/* 00496924 00000000 */   nop   
/* 00496928 10000007 */  b     .L00496948
/* 0049692C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496930:
/* 00496930 8E080004 */  lw    $t0, 4($s0)
/* 00496934 2418002E */  li    $t8, 46
/* 00496938 A1180000 */  sb    $t8, ($t0)
/* 0049693C 8E090004 */  lw    $t1, 4($s0)
/* 00496940 252A0001 */  addiu $t2, $t1, 1
/* 00496944 AE0A0004 */  sw    $t2, 4($s0)
.L00496948:
/* 00496948 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 0049694C 02002025 */  move  $a0, $s0
/* 00496950 24050030 */  li    $a1, 48
/* 00496954 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00496958 0320F809 */  jalr  $t9
/* 0049695C 8FA60064 */   lw    $a2, 0x64($sp)
/* 00496960 10000048 */  b     .L00496A84
/* 00496964 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496968:
/* 00496968 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 0049696C 02002025 */  move  $a0, $s0
/* 00496970 8FA50048 */  lw    $a1, 0x48($sp)
/* 00496974 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496978 0320F809 */  jalr  $t9
/* 0049697C 8FA60054 */   lw    $a2, 0x54($sp)
/* 00496980 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496984 8FAC0054 */  lw    $t4, 0x54($sp)
/* 00496988 8FAB0048 */  lw    $t3, 0x48($sp)
/* 0049698C 8F998064 */  lw     $t9, %got(__us_rsthread_stdio)($gp)
/* 00496990 8FAE004C */  lw    $t6, 0x4c($sp)
/* 00496994 016C6821 */  addu  $t5, $t3, $t4
/* 00496998 8F390000 */  lw    $t9, ($t9)
/* 0049699C 01CC7823 */  subu  $t7, $t6, $t4
/* 004969A0 AFAD0048 */  sw    $t5, 0x48($sp)
/* 004969A4 13200008 */  beqz  $t9, .L004969C8
/* 004969A8 AFAF004C */   sw    $t7, 0x4c($sp)
/* 004969AC 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004969B0 2404002E */  li    $a0, 46
/* 004969B4 02002825 */  move  $a1, $s0
/* 004969B8 0320F809 */  jalr  $t9
/* 004969BC 00000000 */   nop   
/* 004969C0 10000012 */  b     .L00496A0C
/* 004969C4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004969C8:
/* 004969C8 8E180000 */  lw    $t8, ($s0)
/* 004969CC 2708FFFF */  addiu $t0, $t8, -1
/* 004969D0 05010008 */  bgez  $t0, .L004969F4
/* 004969D4 AE080000 */   sw    $t0, ($s0)
/* 004969D8 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004969DC 2404002E */  li    $a0, 46
/* 004969E0 02002825 */  move  $a1, $s0
/* 004969E4 0320F809 */  jalr  $t9
/* 004969E8 00000000 */   nop   
/* 004969EC 10000007 */  b     .L00496A0C
/* 004969F0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004969F4:
/* 004969F4 8E0B0004 */  lw    $t3, 4($s0)
/* 004969F8 240A002E */  li    $t2, 46
/* 004969FC A16A0000 */  sb    $t2, ($t3)
/* 00496A00 8E0D0004 */  lw    $t5, 4($s0)
/* 00496A04 25AE0001 */  addiu $t6, $t5, 1
/* 00496A08 AE0E0004 */  sw    $t6, 4($s0)
.L00496A0C:
/* 00496A0C 8FAC004C */  lw    $t4, 0x4c($sp)
/* 00496A10 8FAF0064 */  lw    $t7, 0x64($sp)
/* 00496A14 018F082A */  slt   $at, $t4, $t7
/* 00496A18 14200009 */  bnez  $at, .L00496A40
/* 00496A1C 00000000 */   nop   
/* 00496A20 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00496A24 02002025 */  move  $a0, $s0
/* 00496A28 8FA50048 */  lw    $a1, 0x48($sp)
/* 00496A2C 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496A30 0320F809 */  jalr  $t9
/* 00496A34 01E03025 */   move  $a2, $t7
/* 00496A38 10000012 */  b     .L00496A84
/* 00496A3C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496A40:
/* 00496A40 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00496A44 02002025 */  move  $a0, $s0
/* 00496A48 8FA50048 */  lw    $a1, 0x48($sp)
/* 00496A4C 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496A50 0320F809 */  jalr  $t9
/* 00496A54 8FA6004C */   lw    $a2, 0x4c($sp)
/* 00496A58 8FB90064 */  lw    $t9, 0x64($sp)
/* 00496A5C 8FB8004C */  lw    $t8, 0x4c($sp)
/* 00496A60 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496A64 02002025 */  move  $a0, $s0
/* 00496A68 03383023 */  subu  $a2, $t9, $t8
/* 00496A6C 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00496A70 24050030 */  li    $a1, 48
/* 00496A74 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00496A78 0320F809 */  jalr  $t9
/* 00496A7C 00000000 */   nop   
/* 00496A80 8FBC0020 */  lw    $gp, 0x20($sp)
.L00496A84:
/* 00496A84 8FA80060 */  lw    $t0, 0x60($sp)
/* 00496A88 8FA30050 */  lw    $v1, 0x50($sp)
/* 00496A8C 8FAB0054 */  lw    $t3, 0x54($sp)
/* 00496A90 8FAE0064 */  lw    $t6, 0x64($sp)
/* 00496A94 00084823 */  negu  $t1, $t0
/* 00496A98 01235023 */  subu  $t2, $t1, $v1
/* 00496A9C 014B6823 */  subu  $t5, $t2, $t3
/* 00496AA0 01AE3023 */  subu  $a2, $t5, $t6
/* 00496AA4 24C6FFFF */  addiu $a2, $a2, -1
/* 00496AA8 58C00009 */  blezl $a2, .L00496AD0
/* 00496AAC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00496AB0 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00496AB4 02002025 */  move  $a0, $s0
/* 00496AB8 24050020 */  li    $a1, 32
/* 00496ABC 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00496AC0 0320F809 */  jalr  $t9
/* 00496AC4 00000000 */   nop   
/* 00496AC8 8FBC0020 */  lw    $gp, 0x20($sp)
.L00496ACC:
/* 00496ACC 8FBF0024 */  lw    $ra, 0x24($sp)
.L00496AD0:
/* 00496AD0 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00496AD4 27BD0058 */  addiu $sp, $sp, 0x58
/* 00496AD8 03E00008 */  jr    $ra
/* 00496ADC 00000000 */   nop   
    .type write_real, @function
    .size write_real, .-write_real
    .end write_real

glabel write_double
    .ent write_double
/* 00496AE0 3C1C0FB8 */  .cpload $t9
/* 00496AE4 279C37B0 */  
/* 00496AE8 0399E021 */  
/* 00496AEC 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 00496AF0 44866800 */  mtc1  $a2, $f13
/* 00496AF4 8FA60064 */  lw    $a2, 0x64($sp)
/* 00496AF8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00496AFC 44876000 */  mtc1  $a3, $f12
/* 00496B00 00808025 */  move  $s0, $a0
/* 00496B04 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00496B08 1CC0018A */  bgtz  $a2, .L00497134
/* 00496B0C AFBC0020 */   sw    $gp, 0x20($sp)
/* 00496B10 8FA20060 */  lw    $v0, 0x60($sp)
/* 00496B14 44802800 */  mtc1  $zero, $f5
/* 00496B18 44802000 */  mtc1  $zero, $f4
/* 00496B1C 2442FFF9 */  addiu $v0, $v0, -7
/* 00496B20 28410003 */  slti  $at, $v0, 3
/* 00496B24 14200003 */  bnez  $at, .L00496B34
/* 00496B28 240E0002 */   li    $t6, 2
/* 00496B2C 10000002 */  b     .L00496B38
/* 00496B30 AFA20044 */   sw    $v0, 0x44($sp)
.L00496B34:
/* 00496B34 AFAE0044 */  sw    $t6, 0x44($sp)
.L00496B38:
/* 00496B38 46246032 */  c.eq.d $f12, $f4
/* 00496B3C 02002025 */  move  $a0, $s0
/* 00496B40 8FA60044 */  lw    $a2, 0x44($sp)
/* 00496B44 4500001A */  bc1f  .L00496BB0
/* 00496B48 00000000 */   nop   
/* 00496B4C 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00496B50 8F858044 */  lw    $a1, %got(RO_1000FB04)($gp)
/* 00496B54 24060003 */  li    $a2, 3
/* 00496B58 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496B5C 0320F809 */  jalr  $t9
/* 00496B60 24A5FB04 */   addiu $a1, %lo(RO_1000FB04) # addiu $a1, $a1, -0x4fc
/* 00496B64 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496B68 8FA60044 */  lw    $a2, 0x44($sp)
/* 00496B6C 02002025 */  move  $a0, $s0
/* 00496B70 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00496B74 24050030 */  li    $a1, 48
/* 00496B78 24C6FFFF */  addiu $a2, $a2, -1
/* 00496B7C 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00496B80 0320F809 */  jalr  $t9
/* 00496B84 00000000 */   nop   
/* 00496B88 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496B8C 02002025 */  move  $a0, $s0
/* 00496B90 24060005 */  li    $a2, 5
/* 00496B94 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00496B98 8F858044 */  lw    $a1, %got(RO_1000FB08)($gp)
/* 00496B9C 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496BA0 0320F809 */  jalr  $t9
/* 00496BA4 24A5FB08 */   addiu $a1, %lo(RO_1000FB08) # addiu $a1, $a1, -0x4f8
/* 00496BA8 100002D0 */  b     .L004976EC
/* 00496BAC 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496BB0:
/* 00496BB0 8F998130 */  lw    $t9, %call16(ecvt)($gp)
/* 00496BB4 27AF0048 */  addiu $t7, $sp, 0x48
/* 00496BB8 AFAF0010 */  sw    $t7, 0x10($sp)
/* 00496BBC 0320F809 */  jalr  $t9
/* 00496BC0 27A7004C */   addiu $a3, $sp, 0x4c
/* 00496BC4 AFA20040 */  sw    $v0, 0x40($sp)
/* 00496BC8 90430000 */  lbu   $v1, ($v0)
/* 00496BCC 24010049 */  li    $at, 73
/* 00496BD0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496BD4 10610007 */  beq   $v1, $at, .L00496BF4
/* 00496BD8 2401004E */   li    $at, 78
/* 00496BDC 10610005 */  beq   $v1, $at, .L00496BF4
/* 00496BE0 24010069 */   li    $at, 105
/* 00496BE4 10610003 */  beq   $v1, $at, .L00496BF4
/* 00496BE8 2401006E */   li    $at, 110
/* 00496BEC 14610018 */  bne   $v1, $at, .L00496C50
/* 00496BF0 00000000 */   nop   
.L00496BF4:
/* 00496BF4 8F9980C0 */  lw    $t9, %call16(strlen)($gp)
/* 00496BF8 8FA40040 */  lw    $a0, 0x40($sp)
/* 00496BFC 0320F809 */  jalr  $t9
/* 00496C00 00000000 */   nop   
/* 00496C04 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496C08 8FB80060 */  lw    $t8, 0x60($sp)
/* 00496C0C AFA20044 */  sw    $v0, 0x44($sp)
/* 00496C10 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00496C14 02002025 */  move  $a0, $s0
/* 00496C18 24050020 */  li    $a1, 32
/* 00496C1C 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00496C20 0320F809 */  jalr  $t9
/* 00496C24 03023023 */   subu  $a2, $t8, $v0
/* 00496C28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496C2C 02002025 */  move  $a0, $s0
/* 00496C30 8FA50040 */  lw    $a1, 0x40($sp)
/* 00496C34 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00496C38 8FA60044 */  lw    $a2, 0x44($sp)
/* 00496C3C 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496C40 0320F809 */  jalr  $t9
/* 00496C44 00000000 */   nop   
/* 00496C48 100002A8 */  b     .L004976EC
/* 00496C4C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496C50:
/* 00496C50 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 00496C54 8FB9004C */  lw    $t9, 0x4c($sp)
/* 00496C58 8FA30048 */  lw    $v1, 0x48($sp)
/* 00496C5C 8D290000 */  lw    $t1, ($t1)
/* 00496C60 2728FFFF */  addiu $t0, $t9, -1
/* 00496C64 AFA8004C */  sw    $t0, 0x4c($sp)
/* 00496C68 5120000C */  beql  $t1, $zero, .L00496C9C
/* 00496C6C 8E0A0000 */   lw    $t2, ($s0)
/* 00496C70 10600003 */  beqz  $v1, .L00496C80
/* 00496C74 24040020 */   li    $a0, 32
/* 00496C78 10000001 */  b     .L00496C80
/* 00496C7C 2404002D */   li    $a0, 45
.L00496C80:
/* 00496C80 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496C84 02002825 */  move  $a1, $s0
/* 00496C88 0320F809 */  jalr  $t9
/* 00496C8C 00000000 */   nop   
/* 00496C90 1000001E */  b     .L00496D0C
/* 00496C94 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496C98 8E0A0000 */  lw    $t2, ($s0)
.L00496C9C:
/* 00496C9C 254BFFFF */  addiu $t3, $t2, -1
/* 00496CA0 0561000D */  bgez  $t3, .L00496CD8
/* 00496CA4 AE0B0000 */   sw    $t3, ($s0)
/* 00496CA8 8FA30048 */  lw    $v1, 0x48($sp)
/* 00496CAC 24040020 */  li    $a0, 32
/* 00496CB0 10600003 */  beqz  $v1, .L00496CC0
/* 00496CB4 00000000 */   nop   
/* 00496CB8 10000001 */  b     .L00496CC0
/* 00496CBC 2404002D */   li    $a0, 45
.L00496CC0:
/* 00496CC0 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496CC4 02002825 */  move  $a1, $s0
/* 00496CC8 0320F809 */  jalr  $t9
/* 00496CCC 00000000 */   nop   
/* 00496CD0 1000000E */  b     .L00496D0C
/* 00496CD4 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496CD8:
/* 00496CD8 8FA30048 */  lw    $v1, 0x48($sp)
/* 00496CDC 50600006 */  beql  $v1, $zero, .L00496CF8
/* 00496CE0 8E180004 */   lw    $t8, 4($s0)
/* 00496CE4 8E0E0004 */  lw    $t6, 4($s0)
/* 00496CE8 240D002D */  li    $t5, 45
/* 00496CEC 10000004 */  b     .L00496D00
/* 00496CF0 A1CD0000 */   sb    $t5, ($t6)
/* 00496CF4 8E180004 */  lw    $t8, 4($s0)
.L00496CF8:
/* 00496CF8 240F0020 */  li    $t7, 32
/* 00496CFC A30F0000 */  sb    $t7, ($t8)
.L00496D00:
/* 00496D00 8E190004 */  lw    $t9, 4($s0)
/* 00496D04 27280001 */  addiu $t0, $t9, 1
/* 00496D08 AE080004 */  sw    $t0, 4($s0)
.L00496D0C:
/* 00496D0C 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 00496D10 8FAA0040 */  lw    $t2, 0x40($sp)
/* 00496D14 02002825 */  move  $a1, $s0
/* 00496D18 8D290000 */  lw    $t1, ($t1)
/* 00496D1C 51200009 */  beql  $t1, $zero, .L00496D44
/* 00496D20 8E0C0000 */   lw    $t4, ($s0)
/* 00496D24 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496D28 91440000 */  lbu   $a0, ($t2)
/* 00496D2C 254B0001 */  addiu $t3, $t2, 1
/* 00496D30 0320F809 */  jalr  $t9
/* 00496D34 AFAB0040 */   sw    $t3, 0x40($sp)
/* 00496D38 10000018 */  b     .L00496D9C
/* 00496D3C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496D40 8E0C0000 */  lw    $t4, ($s0)
.L00496D44:
/* 00496D44 258DFFFF */  addiu $t5, $t4, -1
/* 00496D48 05A1000A */  bgez  $t5, .L00496D74
/* 00496D4C AE0D0000 */   sw    $t5, ($s0)
/* 00496D50 8FAF0040 */  lw    $t7, 0x40($sp)
/* 00496D54 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496D58 02002825 */  move  $a1, $s0
/* 00496D5C 91E40000 */  lbu   $a0, ($t7)
/* 00496D60 25F80001 */  addiu $t8, $t7, 1
/* 00496D64 0320F809 */  jalr  $t9
/* 00496D68 AFB80040 */   sw    $t8, 0x40($sp)
/* 00496D6C 1000000B */  b     .L00496D9C
/* 00496D70 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496D74:
/* 00496D74 8FB90040 */  lw    $t9, 0x40($sp)
/* 00496D78 8E090004 */  lw    $t1, 4($s0)
/* 00496D7C 93280000 */  lbu   $t0, ($t9)
/* 00496D80 A1280000 */  sb    $t0, ($t1)
/* 00496D84 8E0A0004 */  lw    $t2, 4($s0)
/* 00496D88 254B0001 */  addiu $t3, $t2, 1
/* 00496D8C AE0B0004 */  sw    $t3, 4($s0)
/* 00496D90 8FAC0040 */  lw    $t4, 0x40($sp)
/* 00496D94 258D0001 */  addiu $t5, $t4, 1
/* 00496D98 AFAD0040 */  sw    $t5, 0x40($sp)
.L00496D9C:
/* 00496D9C 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00496DA0 8DCE0000 */  lw    $t6, ($t6)
/* 00496DA4 51C00009 */  beql  $t6, $zero, .L00496DCC
/* 00496DA8 8E0F0000 */   lw    $t7, ($s0)
/* 00496DAC 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496DB0 2404002E */  li    $a0, 46
/* 00496DB4 02002825 */  move  $a1, $s0
/* 00496DB8 0320F809 */  jalr  $t9
/* 00496DBC 00000000 */   nop   
/* 00496DC0 10000012 */  b     .L00496E0C
/* 00496DC4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496DC8 8E0F0000 */  lw    $t7, ($s0)
.L00496DCC:
/* 00496DCC 25F8FFFF */  addiu $t8, $t7, -1
/* 00496DD0 07010008 */  bgez  $t8, .L00496DF4
/* 00496DD4 AE180000 */   sw    $t8, ($s0)
/* 00496DD8 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496DDC 2404002E */  li    $a0, 46
/* 00496DE0 02002825 */  move  $a1, $s0
/* 00496DE4 0320F809 */  jalr  $t9
/* 00496DE8 00000000 */   nop   
/* 00496DEC 10000007 */  b     .L00496E0C
/* 00496DF0 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496DF4:
/* 00496DF4 8E090004 */  lw    $t1, 4($s0)
/* 00496DF8 2408002E */  li    $t0, 46
/* 00496DFC A1280000 */  sb    $t0, ($t1)
/* 00496E00 8E0A0004 */  lw    $t2, 4($s0)
/* 00496E04 254B0001 */  addiu $t3, $t2, 1
/* 00496E08 AE0B0004 */  sw    $t3, 4($s0)
.L00496E0C:
/* 00496E0C 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00496E10 8FA60044 */  lw    $a2, 0x44($sp)
/* 00496E14 02002025 */  move  $a0, $s0
/* 00496E18 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00496E1C 8FA50040 */  lw    $a1, 0x40($sp)
/* 00496E20 0320F809 */  jalr  $t9
/* 00496E24 24C6FFFF */   addiu $a2, $a2, -1
/* 00496E28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00496E2C 8F8C8064 */  lw     $t4, %got(__us_rsthread_stdio)($gp)
/* 00496E30 8D8C0000 */  lw    $t4, ($t4)
/* 00496E34 51800009 */  beql  $t4, $zero, .L00496E5C
/* 00496E38 8E0D0000 */   lw    $t5, ($s0)
/* 00496E3C 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496E40 24040065 */  li    $a0, 101
/* 00496E44 02002825 */  move  $a1, $s0
/* 00496E48 0320F809 */  jalr  $t9
/* 00496E4C 00000000 */   nop   
/* 00496E50 10000012 */  b     .L00496E9C
/* 00496E54 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496E58 8E0D0000 */  lw    $t5, ($s0)
.L00496E5C:
/* 00496E5C 25AEFFFF */  addiu $t6, $t5, -1
/* 00496E60 05C10008 */  bgez  $t6, .L00496E84
/* 00496E64 AE0E0000 */   sw    $t6, ($s0)
/* 00496E68 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496E6C 24040065 */  li    $a0, 101
/* 00496E70 02002825 */  move  $a1, $s0
/* 00496E74 0320F809 */  jalr  $t9
/* 00496E78 00000000 */   nop   
/* 00496E7C 10000007 */  b     .L00496E9C
/* 00496E80 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496E84:
/* 00496E84 8E190004 */  lw    $t9, 4($s0)
/* 00496E88 24180065 */  li    $t8, 101
/* 00496E8C A3380000 */  sb    $t8, ($t9)
/* 00496E90 8E080004 */  lw    $t0, 4($s0)
/* 00496E94 25090001 */  addiu $t1, $t0, 1
/* 00496E98 AE090004 */  sw    $t1, 4($s0)
.L00496E9C:
/* 00496E9C 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 00496EA0 8FAB004C */  lw    $t3, 0x4c($sp)
/* 00496EA4 8D4A0000 */  lw    $t2, ($t2)
/* 00496EA8 5140000E */  beql  $t2, $zero, .L00496EE4
/* 00496EAC 8E0D0000 */   lw    $t5, ($s0)
/* 00496EB0 05610005 */  bgez  $t3, .L00496EC8
/* 00496EB4 2404002B */   li    $a0, 43
/* 00496EB8 000B6023 */  negu  $t4, $t3
/* 00496EBC AFAC004C */  sw    $t4, 0x4c($sp)
/* 00496EC0 10000001 */  b     .L00496EC8
/* 00496EC4 2404002D */   li    $a0, 45
.L00496EC8:
/* 00496EC8 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496ECC 02002825 */  move  $a1, $s0
/* 00496ED0 0320F809 */  jalr  $t9
/* 00496ED4 00000000 */   nop   
/* 00496ED8 10000020 */  b     .L00496F5C
/* 00496EDC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496EE0 8E0D0000 */  lw    $t5, ($s0)
.L00496EE4:
/* 00496EE4 25AEFFFF */  addiu $t6, $t5, -1
/* 00496EE8 05C1000E */  bgez  $t6, .L00496F24
/* 00496EEC AE0E0000 */   sw    $t6, ($s0)
/* 00496EF0 8FB8004C */  lw    $t8, 0x4c($sp)
/* 00496EF4 2404002B */  li    $a0, 43
/* 00496EF8 07010004 */  bgez  $t8, .L00496F0C
/* 00496EFC 0018C823 */   negu  $t9, $t8
/* 00496F00 AFB9004C */  sw    $t9, 0x4c($sp)
/* 00496F04 10000001 */  b     .L00496F0C
/* 00496F08 2404002D */   li    $a0, 45
.L00496F0C:
/* 00496F0C 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496F10 02002825 */  move  $a1, $s0
/* 00496F14 0320F809 */  jalr  $t9
/* 00496F18 00000000 */   nop   
/* 00496F1C 1000000F */  b     .L00496F5C
/* 00496F20 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496F24:
/* 00496F24 8FA8004C */  lw    $t0, 0x4c($sp)
/* 00496F28 05010006 */  bgez  $t0, .L00496F44
/* 00496F2C 00084823 */   negu  $t1, $t0
/* 00496F30 AFA9004C */  sw    $t1, 0x4c($sp)
/* 00496F34 8E0B0004 */  lw    $t3, 4($s0)
/* 00496F38 240A002D */  li    $t2, 45
/* 00496F3C 10000004 */  b     .L00496F50
/* 00496F40 A16A0000 */   sb    $t2, ($t3)
.L00496F44:
/* 00496F44 8E0D0004 */  lw    $t5, 4($s0)
/* 00496F48 240C002B */  li    $t4, 43
/* 00496F4C A1AC0000 */  sb    $t4, ($t5)
.L00496F50:
/* 00496F50 8E0E0004 */  lw    $t6, 4($s0)
/* 00496F54 25CF0001 */  addiu $t7, $t6, 1
/* 00496F58 AE0F0004 */  sw    $t7, 4($s0)
.L00496F5C:
/* 00496F5C 8F988064 */  lw     $t8, %got(__us_rsthread_stdio)($gp)
/* 00496F60 8FA4004C */  lw    $a0, 0x4c($sp)
/* 00496F64 24010064 */  li    $at, 100
/* 00496F68 8F180000 */  lw    $t8, ($t8)
/* 00496F6C 5300000A */  beql  $t8, $zero, .L00496F98
/* 00496F70 8E190000 */   lw    $t9, ($s0)
/* 00496F74 0081001A */  div   $zero, $a0, $at
/* 00496F78 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00496F7C 00002012 */  mflo  $a0
/* 00496F80 24840030 */  addiu $a0, $a0, 0x30
/* 00496F84 0320F809 */  jalr  $t9
/* 00496F88 02002825 */   move  $a1, $s0
/* 00496F8C 10000019 */  b     .L00496FF4
/* 00496F90 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00496F94 8E190000 */  lw    $t9, ($s0)
.L00496F98:
/* 00496F98 2728FFFF */  addiu $t0, $t9, -1
/* 00496F9C 0501000B */  bgez  $t0, .L00496FCC
/* 00496FA0 AE080000 */   sw    $t0, ($s0)
/* 00496FA4 8FA4004C */  lw    $a0, 0x4c($sp)
/* 00496FA8 24010064 */  li    $at, 100
/* 00496FAC 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00496FB0 0081001A */  div   $zero, $a0, $at
/* 00496FB4 00002012 */  mflo  $a0
/* 00496FB8 24840030 */  addiu $a0, $a0, 0x30
/* 00496FBC 0320F809 */  jalr  $t9
/* 00496FC0 02002825 */   move  $a1, $s0
/* 00496FC4 1000000B */  b     .L00496FF4
/* 00496FC8 8FBC0020 */   lw    $gp, 0x20($sp)
.L00496FCC:
/* 00496FCC 8FAA004C */  lw    $t2, 0x4c($sp)
/* 00496FD0 24010064 */  li    $at, 100
/* 00496FD4 8E0D0004 */  lw    $t5, 4($s0)
/* 00496FD8 0141001A */  div   $zero, $t2, $at
/* 00496FDC 00005812 */  mflo  $t3
/* 00496FE0 256C0030 */  addiu $t4, $t3, 0x30
/* 00496FE4 A1AC0000 */  sb    $t4, ($t5)
/* 00496FE8 8E0E0004 */  lw    $t6, 4($s0)
/* 00496FEC 25CF0001 */  addiu $t7, $t6, 1
/* 00496FF0 AE0F0004 */  sw    $t7, 4($s0)
.L00496FF4:
/* 00496FF4 8FB8004C */  lw    $t8, 0x4c($sp)
/* 00496FF8 24010064 */  li    $at, 100
/* 00496FFC 8F888064 */  lw     $t0, %got(__us_rsthread_stdio)($gp)
/* 00497000 0301001A */  div   $zero, $t8, $at
/* 00497004 8D080000 */  lw    $t0, ($t0)
/* 00497008 0000C810 */  mfhi  $t9
/* 0049700C AFB9004C */  sw    $t9, 0x4c($sp)
/* 00497010 11000009 */  beqz  $t0, .L00497038
/* 00497014 2401000A */   li    $at, 10
/* 00497018 0321001A */  div   $zero, $t9, $at
/* 0049701C 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00497020 00002012 */  mflo  $a0
/* 00497024 24840030 */  addiu $a0, $a0, 0x30
/* 00497028 0320F809 */  jalr  $t9
/* 0049702C 02002825 */   move  $a1, $s0
/* 00497030 10000019 */  b     .L00497098
/* 00497034 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497038:
/* 00497038 8E090000 */  lw    $t1, ($s0)
/* 0049703C 252AFFFF */  addiu $t2, $t1, -1
/* 00497040 0541000B */  bgez  $t2, .L00497070
/* 00497044 AE0A0000 */   sw    $t2, ($s0)
/* 00497048 8FA4004C */  lw    $a0, 0x4c($sp)
/* 0049704C 2401000A */  li    $at, 10
/* 00497050 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00497054 0081001A */  div   $zero, $a0, $at
/* 00497058 00002012 */  mflo  $a0
/* 0049705C 24840030 */  addiu $a0, $a0, 0x30
/* 00497060 0320F809 */  jalr  $t9
/* 00497064 02002825 */   move  $a1, $s0
/* 00497068 1000000B */  b     .L00497098
/* 0049706C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497070:
/* 00497070 8FAC004C */  lw    $t4, 0x4c($sp)
/* 00497074 2401000A */  li    $at, 10
/* 00497078 8E0F0004 */  lw    $t7, 4($s0)
/* 0049707C 0181001A */  div   $zero, $t4, $at
/* 00497080 00006812 */  mflo  $t5
/* 00497084 25AE0030 */  addiu $t6, $t5, 0x30
/* 00497088 A1EE0000 */  sb    $t6, ($t7)
/* 0049708C 8E180004 */  lw    $t8, 4($s0)
/* 00497090 27080001 */  addiu $t0, $t8, 1
/* 00497094 AE080004 */  sw    $t0, 4($s0)
.L00497098:
/* 00497098 8F998064 */  lw     $t9, %got(__us_rsthread_stdio)($gp)
/* 0049709C 8FA4004C */  lw    $a0, 0x4c($sp)
/* 004970A0 2401000A */  li    $at, 10
/* 004970A4 8F390000 */  lw    $t9, ($t9)
/* 004970A8 5320000A */  beql  $t9, $zero, .L004970D4
/* 004970AC 8E090000 */   lw    $t1, ($s0)
/* 004970B0 0081001A */  div   $zero, $a0, $at
/* 004970B4 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004970B8 00002010 */  mfhi  $a0
/* 004970BC 24840030 */  addiu $a0, $a0, 0x30
/* 004970C0 0320F809 */  jalr  $t9
/* 004970C4 02002825 */   move  $a1, $s0
/* 004970C8 10000188 */  b     .L004976EC
/* 004970CC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004970D0 8E090000 */  lw    $t1, ($s0)
.L004970D4:
/* 004970D4 252AFFFF */  addiu $t2, $t1, -1
/* 004970D8 0541000B */  bgez  $t2, .L00497108
/* 004970DC AE0A0000 */   sw    $t2, ($s0)
/* 004970E0 8FA4004C */  lw    $a0, 0x4c($sp)
/* 004970E4 2401000A */  li    $at, 10
/* 004970E8 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004970EC 0081001A */  div   $zero, $a0, $at
/* 004970F0 00002010 */  mfhi  $a0
/* 004970F4 24840030 */  addiu $a0, $a0, 0x30
/* 004970F8 0320F809 */  jalr  $t9
/* 004970FC 02002825 */   move  $a1, $s0
/* 00497100 1000017A */  b     .L004976EC
/* 00497104 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497108:
/* 00497108 8FAC004C */  lw    $t4, 0x4c($sp)
/* 0049710C 2401000A */  li    $at, 10
/* 00497110 8E0F0004 */  lw    $t7, 4($s0)
/* 00497114 0181001A */  div   $zero, $t4, $at
/* 00497118 00006810 */  mfhi  $t5
/* 0049711C 25AE0030 */  addiu $t6, $t5, 0x30
/* 00497120 A1EE0000 */  sb    $t6, ($t7)
/* 00497124 8E180004 */  lw    $t8, 4($s0)
/* 00497128 27080001 */  addiu $t0, $t8, 1
/* 0049712C 1000016F */  b     .L004976EC
/* 00497130 AE080004 */   sw    $t0, 4($s0)
.L00497134:
/* 00497134 27B90048 */  addiu $t9, $sp, 0x48
/* 00497138 AFB90010 */  sw    $t9, 0x10($sp)
/* 0049713C 8F998134 */  lw    $t9, %call16(fcvt)($gp)
/* 00497140 27A7004C */  addiu $a3, $sp, 0x4c
/* 00497144 0320F809 */  jalr  $t9
/* 00497148 00000000 */   nop   
/* 0049714C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497150 AFA20040 */  sw    $v0, 0x40($sp)
/* 00497154 00402025 */  move  $a0, $v0
/* 00497158 8F9980C0 */  lw    $t9, %call16(strlen)($gp)
/* 0049715C 0320F809 */  jalr  $t9
/* 00497160 00000000 */   nop   
/* 00497164 8FA9004C */  lw    $t1, 0x4c($sp)
/* 00497168 8FA30048 */  lw    $v1, 0x48($sp)
/* 0049716C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497170 AFA20044 */  sw    $v0, 0x44($sp)
/* 00497174 1D20009E */  bgtz  $t1, .L004973F0
/* 00497178 0003182B */   sltu  $v1, $zero, $v1
/* 0049717C 8FAA0060 */  lw    $t2, 0x60($sp)
/* 00497180 8FAC0064 */  lw    $t4, 0x64($sp)
/* 00497184 AFA30048 */  sw    $v1, 0x48($sp)
/* 00497188 01435823 */  subu  $t3, $t2, $v1
/* 0049718C 016C3023 */  subu  $a2, $t3, $t4
/* 00497190 24C6FFFE */  addiu $a2, $a2, -2
/* 00497194 58C00009 */  blezl $a2, .L004971BC
/* 00497198 8FA30048 */   lw    $v1, 0x48($sp)
/* 0049719C 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004971A0 02002025 */  move  $a0, $s0
/* 004971A4 24050020 */  li    $a1, 32
/* 004971A8 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004971AC 0320F809 */  jalr  $t9
/* 004971B0 00000000 */   nop   
/* 004971B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004971B8 8FA30048 */  lw    $v1, 0x48($sp)
.L004971BC:
/* 004971BC 1060001D */  beqz  $v1, .L00497234
/* 004971C0 00000000 */   nop   
/* 004971C4 8F8D8064 */  lw     $t5, %got(__us_rsthread_stdio)($gp)
/* 004971C8 8DAD0000 */  lw    $t5, ($t5)
/* 004971CC 51A00009 */  beql  $t5, $zero, .L004971F4
/* 004971D0 8E0E0000 */   lw    $t6, ($s0)
/* 004971D4 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004971D8 2404002D */  li    $a0, 45
/* 004971DC 02002825 */  move  $a1, $s0
/* 004971E0 0320F809 */  jalr  $t9
/* 004971E4 00000000 */   nop   
/* 004971E8 10000012 */  b     .L00497234
/* 004971EC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004971F0 8E0E0000 */  lw    $t6, ($s0)
.L004971F4:
/* 004971F4 25CFFFFF */  addiu $t7, $t6, -1
/* 004971F8 05E10008 */  bgez  $t7, .L0049721C
/* 004971FC AE0F0000 */   sw    $t7, ($s0)
/* 00497200 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00497204 2404002D */  li    $a0, 45
/* 00497208 02002825 */  move  $a1, $s0
/* 0049720C 0320F809 */  jalr  $t9
/* 00497210 00000000 */   nop   
/* 00497214 10000007 */  b     .L00497234
/* 00497218 8FBC0020 */   lw    $gp, 0x20($sp)
.L0049721C:
/* 0049721C 8E190004 */  lw    $t9, 4($s0)
/* 00497220 2408002D */  li    $t0, 45
/* 00497224 A3280000 */  sb    $t0, ($t9)
/* 00497228 8E090004 */  lw    $t1, 4($s0)
/* 0049722C 252A0001 */  addiu $t2, $t1, 1
/* 00497230 AE0A0004 */  sw    $t2, 4($s0)
.L00497234:
/* 00497234 8F8B8064 */  lw     $t3, %got(__us_rsthread_stdio)($gp)
/* 00497238 8D6B0000 */  lw    $t3, ($t3)
/* 0049723C 51600009 */  beql  $t3, $zero, .L00497264
/* 00497240 8E0C0000 */   lw    $t4, ($s0)
/* 00497244 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00497248 24040030 */  li    $a0, 48
/* 0049724C 02002825 */  move  $a1, $s0
/* 00497250 0320F809 */  jalr  $t9
/* 00497254 00000000 */   nop   
/* 00497258 10000012 */  b     .L004972A4
/* 0049725C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00497260 8E0C0000 */  lw    $t4, ($s0)
.L00497264:
/* 00497264 258DFFFF */  addiu $t5, $t4, -1
/* 00497268 05A10008 */  bgez  $t5, .L0049728C
/* 0049726C AE0D0000 */   sw    $t5, ($s0)
/* 00497270 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00497274 24040030 */  li    $a0, 48
/* 00497278 02002825 */  move  $a1, $s0
/* 0049727C 0320F809 */  jalr  $t9
/* 00497280 00000000 */   nop   
/* 00497284 10000007 */  b     .L004972A4
/* 00497288 8FBC0020 */   lw    $gp, 0x20($sp)
.L0049728C:
/* 0049728C 8E180004 */  lw    $t8, 4($s0)
/* 00497290 240F0030 */  li    $t7, 48
/* 00497294 A30F0000 */  sb    $t7, ($t8)
/* 00497298 8E080004 */  lw    $t0, 4($s0)
/* 0049729C 25190001 */  addiu $t9, $t0, 1
/* 004972A0 AE190004 */  sw    $t9, 4($s0)
.L004972A4:
/* 004972A4 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 004972A8 8D290000 */  lw    $t1, ($t1)
/* 004972AC 51200009 */  beql  $t1, $zero, .L004972D4
/* 004972B0 8E0A0000 */   lw    $t2, ($s0)
/* 004972B4 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004972B8 2404002E */  li    $a0, 46
/* 004972BC 02002825 */  move  $a1, $s0
/* 004972C0 0320F809 */  jalr  $t9
/* 004972C4 00000000 */   nop   
/* 004972C8 10000012 */  b     .L00497314
/* 004972CC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004972D0 8E0A0000 */  lw    $t2, ($s0)
.L004972D4:
/* 004972D4 254BFFFF */  addiu $t3, $t2, -1
/* 004972D8 05610008 */  bgez  $t3, .L004972FC
/* 004972DC AE0B0000 */   sw    $t3, ($s0)
/* 004972E0 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004972E4 2404002E */  li    $a0, 46
/* 004972E8 02002825 */  move  $a1, $s0
/* 004972EC 0320F809 */  jalr  $t9
/* 004972F0 00000000 */   nop   
/* 004972F4 10000007 */  b     .L00497314
/* 004972F8 8FBC0020 */   lw    $gp, 0x20($sp)
.L004972FC:
/* 004972FC 8E0E0004 */  lw    $t6, 4($s0)
/* 00497300 240D002E */  li    $t5, 46
/* 00497304 A1CD0000 */  sb    $t5, ($t6)
/* 00497308 8E0F0004 */  lw    $t7, 4($s0)
/* 0049730C 25F80001 */  addiu $t8, $t7, 1
/* 00497310 AE180004 */  sw    $t8, 4($s0)
.L00497314:
/* 00497314 8FA8004C */  lw    $t0, 0x4c($sp)
/* 00497318 8FA70064 */  lw    $a3, 0x64($sp)
/* 0049731C 0008C823 */  negu  $t9, $t0
/* 00497320 0327082A */  slt   $at, $t9, $a3
/* 00497324 1020001B */  beqz  $at, .L00497394
/* 00497328 AFB9004C */   sw    $t9, 0x4c($sp)
/* 0049732C 03203025 */  move  $a2, $t9
/* 00497330 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00497334 02002025 */  move  $a0, $s0
/* 00497338 24050030 */  li    $a1, 48
/* 0049733C 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00497340 0320F809 */  jalr  $t9
/* 00497344 00000000 */   nop   
/* 00497348 8FAA0064 */  lw    $t2, 0x64($sp)
/* 0049734C 8FAB004C */  lw    $t3, 0x4c($sp)
/* 00497350 8FAC0044 */  lw    $t4, 0x44($sp)
/* 00497354 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497358 014B3823 */  subu  $a3, $t2, $t3
/* 0049735C 00EC082B */  sltu  $at, $a3, $t4
/* 00497360 10200002 */  beqz  $at, .L0049736C
/* 00497364 02002025 */   move  $a0, $s0
/* 00497368 AFA70044 */  sw    $a3, 0x44($sp)
.L0049736C:
/* 0049736C 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00497370 8FA50040 */  lw    $a1, 0x40($sp)
/* 00497374 8FA60044 */  lw    $a2, 0x44($sp)
/* 00497378 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 0049737C 0320F809 */  jalr  $t9
/* 00497380 AFA70038 */   sw    $a3, 0x38($sp)
/* 00497384 8FA70038 */  lw    $a3, 0x38($sp)
/* 00497388 8FAD0044 */  lw    $t5, 0x44($sp)
/* 0049738C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497390 00ED3823 */  subu  $a3, $a3, $t5
.L00497394:
/* 00497394 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00497398 02002025 */  move  $a0, $s0
/* 0049739C 24050030 */  li    $a1, 48
/* 004973A0 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004973A4 0320F809 */  jalr  $t9
/* 004973A8 00E03025 */   move  $a2, $a3
/* 004973AC 8FAE0060 */  lw    $t6, 0x60($sp)
/* 004973B0 8FA30048 */  lw    $v1, 0x48($sp)
/* 004973B4 8FA80064 */  lw    $t0, 0x64($sp)
/* 004973B8 000E7823 */  negu  $t7, $t6
/* 004973BC 01E3C023 */  subu  $t8, $t7, $v1
/* 004973C0 03083023 */  subu  $a2, $t8, $t0
/* 004973C4 24C6FFFE */  addiu $a2, $a2, -2
/* 004973C8 18C000C8 */  blez  $a2, .L004976EC
/* 004973CC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004973D0 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004973D4 02002025 */  move  $a0, $s0
/* 004973D8 24050020 */  li    $a1, 32
/* 004973DC 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004973E0 0320F809 */  jalr  $t9
/* 004973E4 00000000 */   nop   
/* 004973E8 100000C0 */  b     .L004976EC
/* 004973EC 8FBC0020 */   lw    $gp, 0x20($sp)
.L004973F0:
/* 004973F0 8FA90060 */  lw    $t1, 0x60($sp)
/* 004973F4 8FAA004C */  lw    $t2, 0x4c($sp)
/* 004973F8 8FAC0064 */  lw    $t4, 0x64($sp)
/* 004973FC 0123C823 */  subu  $t9, $t1, $v1
/* 00497400 032A5823 */  subu  $t3, $t9, $t2
/* 00497404 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00497408 016C3023 */  subu  $a2, $t3, $t4
/* 0049740C 24C6FFFF */  addiu $a2, $a2, -1
/* 00497410 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00497414 02002025 */  move  $a0, $s0
/* 00497418 24050020 */  li    $a1, 32
/* 0049741C 0320F809 */  jalr  $t9
/* 00497420 AFA30048 */   sw    $v1, 0x48($sp)
/* 00497424 8FA30048 */  lw    $v1, 0x48($sp)
/* 00497428 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0049742C 5060001E */  beql  $v1, $zero, .L004974A8
/* 00497430 8FAB004C */   lw    $t3, 0x4c($sp)
/* 00497434 8F8D8064 */  lw     $t5, %got(__us_rsthread_stdio)($gp)
/* 00497438 8DAD0000 */  lw    $t5, ($t5)
/* 0049743C 51A00009 */  beql  $t5, $zero, .L00497464
/* 00497440 8E0E0000 */   lw    $t6, ($s0)
/* 00497444 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 00497448 2404002D */  li    $a0, 45
/* 0049744C 02002825 */  move  $a1, $s0
/* 00497450 0320F809 */  jalr  $t9
/* 00497454 00000000 */   nop   
/* 00497458 10000012 */  b     .L004974A4
/* 0049745C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00497460 8E0E0000 */  lw    $t6, ($s0)
.L00497464:
/* 00497464 25CFFFFF */  addiu $t7, $t6, -1
/* 00497468 05E10008 */  bgez  $t7, .L0049748C
/* 0049746C AE0F0000 */   sw    $t7, ($s0)
/* 00497470 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00497474 2404002D */  li    $a0, 45
/* 00497478 02002825 */  move  $a1, $s0
/* 0049747C 0320F809 */  jalr  $t9
/* 00497480 00000000 */   nop   
/* 00497484 10000007 */  b     .L004974A4
/* 00497488 8FBC0020 */   lw    $gp, 0x20($sp)
.L0049748C:
/* 0049748C 8E090004 */  lw    $t1, 4($s0)
/* 00497490 2408002D */  li    $t0, 45
/* 00497494 A1280000 */  sb    $t0, ($t1)
/* 00497498 8E190004 */  lw    $t9, 4($s0)
/* 0049749C 272A0001 */  addiu $t2, $t9, 1
/* 004974A0 AE0A0004 */  sw    $t2, 4($s0)
.L004974A4:
/* 004974A4 8FAB004C */  lw    $t3, 0x4c($sp)
.L004974A8:
/* 004974A8 8FAC0044 */  lw    $t4, 0x44($sp)
/* 004974AC 016C082A */  slt   $at, $t3, $t4
/* 004974B0 14200035 */  bnez  $at, .L00497588
/* 004974B4 00000000 */   nop   
/* 004974B8 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 004974BC 02002025 */  move  $a0, $s0
/* 004974C0 8FA50040 */  lw    $a1, 0x40($sp)
/* 004974C4 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 004974C8 0320F809 */  jalr  $t9
/* 004974CC 01803025 */   move  $a2, $t4
/* 004974D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004974D4 8FAD004C */  lw    $t5, 0x4c($sp)
/* 004974D8 8FAE0044 */  lw    $t6, 0x44($sp)
/* 004974DC 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004974E0 02002025 */  move  $a0, $s0
/* 004974E4 24050030 */  li    $a1, 48
/* 004974E8 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004974EC 0320F809 */  jalr  $t9
/* 004974F0 01AE3023 */   subu  $a2, $t5, $t6
/* 004974F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004974F8 8F8F8064 */  lw     $t7, %got(__us_rsthread_stdio)($gp)
/* 004974FC 8DEF0000 */  lw    $t7, ($t7)
/* 00497500 51E00009 */  beql  $t7, $zero, .L00497528
/* 00497504 8E180000 */   lw    $t8, ($s0)
/* 00497508 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 0049750C 2404002E */  li    $a0, 46
/* 00497510 02002825 */  move  $a1, $s0
/* 00497514 0320F809 */  jalr  $t9
/* 00497518 00000000 */   nop   
/* 0049751C 10000012 */  b     .L00497568
/* 00497520 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00497524 8E180000 */  lw    $t8, ($s0)
.L00497528:
/* 00497528 2708FFFF */  addiu $t0, $t8, -1
/* 0049752C 05010008 */  bgez  $t0, .L00497550
/* 00497530 AE080000 */   sw    $t0, ($s0)
/* 00497534 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 00497538 2404002E */  li    $a0, 46
/* 0049753C 02002825 */  move  $a1, $s0
/* 00497540 0320F809 */  jalr  $t9
/* 00497544 00000000 */   nop   
/* 00497548 10000007 */  b     .L00497568
/* 0049754C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497550:
/* 00497550 8E0A0004 */  lw    $t2, 4($s0)
/* 00497554 2419002E */  li    $t9, 46
/* 00497558 A1590000 */  sb    $t9, ($t2)
/* 0049755C 8E0B0004 */  lw    $t3, 4($s0)
/* 00497560 256C0001 */  addiu $t4, $t3, 1
/* 00497564 AE0C0004 */  sw    $t4, 4($s0)
.L00497568:
/* 00497568 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 0049756C 02002025 */  move  $a0, $s0
/* 00497570 24050030 */  li    $a1, 48
/* 00497574 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00497578 0320F809 */  jalr  $t9
/* 0049757C 8FA60064 */   lw    $a2, 0x64($sp)
/* 00497580 10000048 */  b     .L004976A4
/* 00497584 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497588:
/* 00497588 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 0049758C 02002025 */  move  $a0, $s0
/* 00497590 8FA50040 */  lw    $a1, 0x40($sp)
/* 00497594 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00497598 0320F809 */  jalr  $t9
/* 0049759C 8FA6004C */   lw    $a2, 0x4c($sp)
/* 004975A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004975A4 8FAE004C */  lw    $t6, 0x4c($sp)
/* 004975A8 8FAD0040 */  lw    $t5, 0x40($sp)
/* 004975AC 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 004975B0 8FB80044 */  lw    $t8, 0x44($sp)
/* 004975B4 01AE7821 */  addu  $t7, $t5, $t6
/* 004975B8 8D290000 */  lw    $t1, ($t1)
/* 004975BC 030E4023 */  subu  $t0, $t8, $t6
/* 004975C0 AFAF0040 */  sw    $t7, 0x40($sp)
/* 004975C4 11200008 */  beqz  $t1, .L004975E8
/* 004975C8 AFA80044 */   sw    $t0, 0x44($sp)
/* 004975CC 8F998084 */  lw    $t9, %call16(__semputc)($gp)
/* 004975D0 2404002E */  li    $a0, 46
/* 004975D4 02002825 */  move  $a1, $s0
/* 004975D8 0320F809 */  jalr  $t9
/* 004975DC 00000000 */   nop   
/* 004975E0 10000012 */  b     .L0049762C
/* 004975E4 8FBC0020 */   lw    $gp, 0x20($sp)
.L004975E8:
/* 004975E8 8E190000 */  lw    $t9, ($s0)
/* 004975EC 272AFFFF */  addiu $t2, $t9, -1
/* 004975F0 05410008 */  bgez  $t2, .L00497614
/* 004975F4 AE0A0000 */   sw    $t2, ($s0)
/* 004975F8 8F998088 */  lw    $t9, %call16(__flsbuf)($gp)
/* 004975FC 2404002E */  li    $a0, 46
/* 00497600 02002825 */  move  $a1, $s0
/* 00497604 0320F809 */  jalr  $t9
/* 00497608 00000000 */   nop   
/* 0049760C 10000007 */  b     .L0049762C
/* 00497610 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497614:
/* 00497614 8E0D0004 */  lw    $t5, 4($s0)
/* 00497618 240C002E */  li    $t4, 46
/* 0049761C A1AC0000 */  sb    $t4, ($t5)
/* 00497620 8E0F0004 */  lw    $t7, 4($s0)
/* 00497624 25F80001 */  addiu $t8, $t7, 1
/* 00497628 AE180004 */  sw    $t8, 4($s0)
.L0049762C:
/* 0049762C 8FAE0044 */  lw    $t6, 0x44($sp)
/* 00497630 8FA80064 */  lw    $t0, 0x64($sp)
/* 00497634 01C8082A */  slt   $at, $t6, $t0
/* 00497638 14200009 */  bnez  $at, .L00497660
/* 0049763C 00000000 */   nop   
/* 00497640 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00497644 02002025 */  move  $a0, $s0
/* 00497648 8FA50040 */  lw    $a1, 0x40($sp)
/* 0049764C 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00497650 0320F809 */  jalr  $t9
/* 00497654 01003025 */   move  $a2, $t0
/* 00497658 10000012 */  b     .L004976A4
/* 0049765C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497660:
/* 00497660 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00497664 02002025 */  move  $a0, $s0
/* 00497668 8FA50040 */  lw    $a1, 0x40($sp)
/* 0049766C 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00497670 0320F809 */  jalr  $t9
/* 00497674 8FA60044 */   lw    $a2, 0x44($sp)
/* 00497678 8FA90064 */  lw    $t1, 0x64($sp)
/* 0049767C 8FB90044 */  lw    $t9, 0x44($sp)
/* 00497680 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497684 02002025 */  move  $a0, $s0
/* 00497688 01393023 */  subu  $a2, $t1, $t9
/* 0049768C 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00497690 24050030 */  li    $a1, 48
/* 00497694 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00497698 0320F809 */  jalr  $t9
/* 0049769C 00000000 */   nop   
/* 004976A0 8FBC0020 */  lw    $gp, 0x20($sp)
.L004976A4:
/* 004976A4 8FAA0060 */  lw    $t2, 0x60($sp)
/* 004976A8 8FA30048 */  lw    $v1, 0x48($sp)
/* 004976AC 8FAD004C */  lw    $t5, 0x4c($sp)
/* 004976B0 8FB80064 */  lw    $t8, 0x64($sp)
/* 004976B4 000A5823 */  negu  $t3, $t2
/* 004976B8 01636023 */  subu  $t4, $t3, $v1
/* 004976BC 018D7823 */  subu  $t7, $t4, $t5
/* 004976C0 01F83023 */  subu  $a2, $t7, $t8
/* 004976C4 24C6FFFF */  addiu $a2, $a2, -1
/* 004976C8 58C00009 */  blezl $a2, .L004976F0
/* 004976CC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004976D0 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004976D4 02002025 */  move  $a0, $s0
/* 004976D8 24050020 */  li    $a1, 32
/* 004976DC 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004976E0 0320F809 */  jalr  $t9
/* 004976E4 00000000 */   nop   
/* 004976E8 8FBC0020 */  lw    $gp, 0x20($sp)
.L004976EC:
/* 004976EC 8FBF0024 */  lw    $ra, 0x24($sp)
.L004976F0:
/* 004976F0 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004976F4 27BD0050 */  addiu $sp, $sp, 0x50
/* 004976F8 03E00008 */  jr    $ra
/* 004976FC 00000000 */   nop   
    .type write_double, @function
    .size write_double, .-write_double
    .end write_double

glabel write_boolean
    .ent write_boolean
    # 0041C914 printregs
/* 00497700 3C1C0FB8 */  .cpload $t9
/* 00497704 279C2B90 */  
/* 00497708 0399E021 */  
/* 0049770C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00497710 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00497714 AFB00018 */  sw    $s0, 0x18($sp)
/* 00497718 00C08025 */  move  $s0, $a2
/* 0049771C 00808825 */  move  $s1, $a0
/* 00497720 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00497724 10A0001E */  beqz  $a1, .L004977A0
/* 00497728 AFBC0020 */   sw    $gp, 0x20($sp)
/* 0049772C 28C10005 */  slti  $at, $a2, 5
/* 00497730 14200008 */  bnez  $at, .L00497754
/* 00497734 00000000 */   nop   
/* 00497738 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 0049773C 24050020 */  li    $a1, 32
/* 00497740 24C6FFFC */  addiu $a2, $a2, -4
/* 00497744 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00497748 0320F809 */  jalr  $t9
/* 0049774C 00000000 */   nop   
/* 00497750 8FBC0020 */  lw    $gp, 0x20($sp)
.L00497754:
/* 00497754 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00497758 8F858044 */  lw    $a1, %got(RO_1000FB10)($gp)
/* 0049775C 02202025 */  move  $a0, $s1
/* 00497760 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00497764 24060004 */  li    $a2, 4
/* 00497768 0320F809 */  jalr  $t9
/* 0049776C 24A5FB10 */   addiu $a1, %lo(RO_1000FB10) # addiu $a1, $a1, -0x4f0
/* 00497770 00101023 */  negu  $v0, $s0
/* 00497774 28410005 */  slti  $at, $v0, 5
/* 00497778 14200025 */  bnez  $at, .L00497810
/* 0049777C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00497780 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00497784 02202025 */  move  $a0, $s1
/* 00497788 24050020 */  li    $a1, 32
/* 0049778C 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00497790 0320F809 */  jalr  $t9
/* 00497794 2446FFFC */   addiu $a2, $v0, -4
/* 00497798 1000001D */  b     .L00497810
/* 0049779C 8FBC0020 */   lw    $gp, 0x20($sp)
.L004977A0:
/* 004977A0 2A010006 */  slti  $at, $s0, 6
/* 004977A4 14200008 */  bnez  $at, .L004977C8
/* 004977A8 00000000 */   nop   
/* 004977AC 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004977B0 02202025 */  move  $a0, $s1
/* 004977B4 24050020 */  li    $a1, 32
/* 004977B8 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004977BC 0320F809 */  jalr  $t9
/* 004977C0 2606FFFB */   addiu $a2, $s0, -5
/* 004977C4 8FBC0020 */  lw    $gp, 0x20($sp)
.L004977C8:
/* 004977C8 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 004977CC 8F858044 */  lw    $a1, %got(RO_1000FB18)($gp)
/* 004977D0 02202025 */  move  $a0, $s1
/* 004977D4 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 004977D8 24060005 */  li    $a2, 5
/* 004977DC 0320F809 */  jalr  $t9
/* 004977E0 24A5FB18 */   addiu $a1, %lo(RO_1000FB18) # addiu $a1, $a1, -0x4e8
/* 004977E4 00101023 */  negu  $v0, $s0
/* 004977E8 28410006 */  slti  $at, $v0, 6
/* 004977EC 14200008 */  bnez  $at, .L00497810
/* 004977F0 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004977F4 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004977F8 02202025 */  move  $a0, $s1
/* 004977FC 24050020 */  li    $a1, 32
/* 00497800 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00497804 0320F809 */  jalr  $t9
/* 00497808 2446FFFB */   addiu $a2, $v0, -5
/* 0049780C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00497810:
/* 00497810 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00497814 8FB00018 */  lw    $s0, 0x18($sp)
/* 00497818 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0049781C 03E00008 */  jr    $ra
/* 00497820 27BD0028 */   addiu $sp, $sp, 0x28
    .type write_boolean, @function
    .size write_boolean, .-write_boolean
    .end write_boolean

glabel write_card64
    .ent write_card64
/* 00497824 3C1C0FB8 */  .cpload $t9
/* 00497828 279C2A6C */  
/* 0049782C 0399E021 */  
/* 00497830 27BDFF68 */  addiu $sp, $sp, -0x98
/* 00497834 AFA600A0 */  sw    $a2, 0xa0($sp)
/* 00497838 8FA600AC */  lw    $a2, 0xac($sp)
/* 0049783C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00497840 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00497844 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00497848 AFB00018 */  sw    $s0, 0x18($sp)
/* 0049784C AFA40098 */  sw    $a0, 0x98($sp)
/* 00497850 14C00009 */  bnez  $a2, .L00497878
/* 00497854 AFA700A4 */   sw    $a3, 0xa4($sp)
/* 00497858 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 0049785C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00497860 8F858044 */  lw    $a1, %got(RO_1000FB20)($gp)
/* 00497864 24840020 */  addiu $a0, $a0, 0x20
/* 00497868 0320F809 */  jalr  $t9
/* 0049786C 24A5FB20 */   addiu $a1, %lo(RO_1000FB20) # addiu $a1, $a1, -0x4e0
/* 00497870 10000053 */  b     .L004979C0
/* 00497874 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497878:
/* 00497878 8FAE00A0 */  lw    $t6, 0xa0($sp)
/* 0049787C 8FAF00A4 */  lw    $t7, 0xa4($sp)
/* 00497880 8F918044 */  lw    $s1, %got(D_10011BF0)($gp)
/* 00497884 24180000 */  li    $t8, 0
/* 00497888 27B00098 */  addiu $s0, $sp, 0x98
/* 0049788C AFB80038 */  sw    $t8, 0x38($sp)
/* 00497890 AFA6003C */  sw    $a2, 0x3c($sp)
/* 00497894 AFAE0050 */  sw    $t6, 0x50($sp)
/* 00497898 AFAF0054 */  sw    $t7, 0x54($sp)
/* 0049789C 26311BF0 */  addiu $s1, %lo(D_10011BF0) # addiu $s1, $s1, 0x1bf0
.L004978A0:
/* 004978A0 8F998128 */  lw    $t9, %call16(__ull_rem)($gp)
/* 004978A4 2610FFFF */  addiu $s0, $s0, -1
/* 004978A8 8FA40050 */  lw    $a0, 0x50($sp)
/* 004978AC 8FA50054 */  lw    $a1, 0x54($sp)
/* 004978B0 8FA60038 */  lw    $a2, 0x38($sp)
/* 004978B4 0320F809 */  jalr  $t9
/* 004978B8 8FA7003C */   lw    $a3, 0x3c($sp)
/* 004978BC 02234821 */  addu  $t1, $s1, $v1
/* 004978C0 912A0000 */  lbu   $t2, ($t1)
/* 004978C4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004978C8 A20A0000 */  sb    $t2, ($s0)
/* 004978CC 8F998124 */  lw    $t9, %call16(__ull_div)($gp)
/* 004978D0 8FA7003C */  lw    $a3, 0x3c($sp)
/* 004978D4 8FA60038 */  lw    $a2, 0x38($sp)
/* 004978D8 8FA50054 */  lw    $a1, 0x54($sp)
/* 004978DC 0320F809 */  jalr  $t9
/* 004978E0 8FA40050 */   lw    $a0, 0x50($sp)
/* 004978E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004978E8 AFA20050 */  sw    $v0, 0x50($sp)
/* 004978EC 1440FFEC */  bnez  $v0, .L004978A0
/* 004978F0 AFA30054 */   sw    $v1, 0x54($sp)
/* 004978F4 1460FFEA */  bnez  $v1, .L004978A0
/* 004978F8 00000000 */   nop   
/* 004978FC 8FB800A8 */  lw    $t8, 0xa8($sp)
/* 00497900 27AB0058 */  addiu $t3, $sp, 0x58
/* 00497904 01706023 */  subu  $t4, $t3, $s0
/* 00497908 258D0040 */  addiu $t5, $t4, 0x40
/* 0049790C 000D77C3 */  sra   $t6, $t5, 0x1f
/* 00497910 001847C3 */  sra   $t0, $t8, 0x1f
/* 00497914 010E082B */  sltu  $at, $t0, $t6
/* 00497918 AFA80030 */  sw    $t0, 0x30($sp)
/* 0049791C AFAE0038 */  sw    $t6, 0x38($sp)
/* 00497920 01A07825 */  move  $t7, $t5
/* 00497924 AFAD003C */  sw    $t5, 0x3c($sp)
/* 00497928 03004825 */  move  $t1, $t8
/* 0049792C 14200010 */  bnez  $at, .L00497970
/* 00497930 AFB80034 */   sw    $t8, 0x34($sp)
/* 00497934 01C8082B */  sltu  $at, $t6, $t0
/* 00497938 14200004 */  bnez  $at, .L0049794C
/* 0049793C 8FA40098 */   lw    $a0, 0x98($sp)
/* 00497940 01B8082B */  sltu  $at, $t5, $t8
/* 00497944 1020000A */  beqz  $at, .L00497970
/* 00497948 00000000 */   nop   
.L0049794C:
/* 0049794C 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00497950 012F082B */  sltu  $at, $t1, $t7
/* 00497954 010E3023 */  subu  $a2, $t0, $t6
/* 00497958 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 0049795C 00C13023 */  subu  $a2, $a2, $at
/* 00497960 24050020 */  li    $a1, 32
/* 00497964 0320F809 */  jalr  $t9
/* 00497968 012F3823 */   subu  $a3, $t1, $t7
/* 0049796C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00497970:
/* 00497970 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00497974 8FA6003C */  lw    $a2, 0x3c($sp)
/* 00497978 8FA40098 */  lw    $a0, 0x98($sp)
/* 0049797C 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00497980 02002825 */  move  $a1, $s0
/* 00497984 0320F809 */  jalr  $t9
/* 00497988 00C08825 */   move  $s1, $a2
/* 0049798C 8FA200A8 */  lw    $v0, 0xa8($sp)
/* 00497990 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497994 00021023 */  negu  $v0, $v0
/* 00497998 0222082A */  slt   $at, $s1, $v0
/* 0049799C 50200009 */  beql  $at, $zero, .L004979C4
/* 004979A0 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004979A4 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 004979A8 8FA40098 */  lw    $a0, 0x98($sp)
/* 004979AC 24050020 */  li    $a1, 32
/* 004979B0 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 004979B4 0320F809 */  jalr  $t9
/* 004979B8 00513023 */   subu  $a2, $v0, $s1
/* 004979BC 8FBC0020 */  lw    $gp, 0x20($sp)
.L004979C0:
/* 004979C0 8FBF0024 */  lw    $ra, 0x24($sp)
.L004979C4:
/* 004979C4 8FB00018 */  lw    $s0, 0x18($sp)
/* 004979C8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004979CC 03E00008 */  jr    $ra
/* 004979D0 27BD0098 */   addiu $sp, $sp, 0x98
    .type write_card64, @function
    .size write_card64, .-write_card64
    .end write_card64

glabel write_int64
    .ent write_int64
/* 004979D4 3C1C0FB8 */  .cpload $t9
/* 004979D8 279C28BC */  
/* 004979DC 0399E021 */  
/* 004979E0 27BDFF60 */  addiu $sp, $sp, -0xa0
/* 004979E4 AFA600A8 */  sw    $a2, 0xa8($sp)
/* 004979E8 8FA600B4 */  lw    $a2, 0xb4($sp)
/* 004979EC AFBF0024 */  sw    $ra, 0x24($sp)
/* 004979F0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004979F4 2CC10002 */  sltiu $at, $a2, 2
/* 004979F8 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004979FC AFB00018 */  sw    $s0, 0x18($sp)
/* 00497A00 AFA400A0 */  sw    $a0, 0xa0($sp)
/* 00497A04 10200009 */  beqz  $at, .L00497A2C
/* 00497A08 AFA700AC */   sw    $a3, 0xac($sp)
/* 00497A0C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00497A10 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00497A14 8F858044 */  lw    $a1, %got(RO_1000FB54)($gp)
/* 00497A18 24840020 */  addiu $a0, $a0, 0x20
/* 00497A1C 0320F809 */  jalr  $t9
/* 00497A20 24A5FB54 */   addiu $a1, %lo(RO_1000FB54) # addiu $a1, $a1, -0x4ac
/* 00497A24 10000069 */  b     .L00497BCC
/* 00497A28 8FBC0020 */   lw    $gp, 0x20($sp)
.L00497A2C:
/* 00497A2C 8FAE00A8 */  lw    $t6, 0xa8($sp)
/* 00497A30 8FAF00AC */  lw    $t7, 0xac($sp)
/* 00497A34 27B0009D */  addiu $s0, $sp, 0x9d
/* 00497A38 1DC0000B */  bgtz  $t6, .L00497A68
/* 00497A3C 240A0000 */   li    $t2, 0
/* 00497A40 05C00003 */  bltz  $t6, .L00497A50
/* 00497A44 2DE10001 */   sltiu $at, $t7, 1
/* 00497A48 10000008 */  b     .L00497A6C
/* 00497A4C 8FA800A8 */   lw    $t0, 0xa8($sp)
.L00497A50:
/* 00497A50 01C0C027 */  not   $t8, $t6
/* 00497A54 0301C021 */  addu  $t8, $t8, $at
/* 00497A58 000FC823 */  negu  $t9, $t7
/* 00497A5C AFB90054 */  sw    $t9, 0x54($sp)
/* 00497A60 10000005 */  b     .L00497A78
/* 00497A64 AFB80050 */   sw    $t8, 0x50($sp)
.L00497A68:
/* 00497A68 8FA800A8 */  lw    $t0, 0xa8($sp)
.L00497A6C:
/* 00497A6C 8FA900AC */  lw    $t1, 0xac($sp)
/* 00497A70 AFA80050 */  sw    $t0, 0x50($sp)
/* 00497A74 AFA90054 */  sw    $t1, 0x54($sp)
.L00497A78:
/* 00497A78 8F918044 */  lw    $s1, %got(D_10011BF0)($gp)
/* 00497A7C AFAA0038 */  sw    $t2, 0x38($sp)
/* 00497A80 AFA6003C */  sw    $a2, 0x3c($sp)
/* 00497A84 26311BF0 */  addiu $s1, %lo(D_10011BF0) # addiu $s1, $s1, 0x1bf0
.L00497A88:
/* 00497A88 8F998128 */  lw    $t9, %call16(__ull_rem)($gp)
/* 00497A8C 2610FFFF */  addiu $s0, $s0, -1
/* 00497A90 8FA40050 */  lw    $a0, 0x50($sp)
/* 00497A94 8FA50054 */  lw    $a1, 0x54($sp)
/* 00497A98 8FA60038 */  lw    $a2, 0x38($sp)
/* 00497A9C 0320F809 */  jalr  $t9
/* 00497AA0 8FA7003C */   lw    $a3, 0x3c($sp)
/* 00497AA4 02236821 */  addu  $t5, $s1, $v1
/* 00497AA8 91AE0000 */  lbu   $t6, ($t5)
/* 00497AAC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497AB0 A20E0000 */  sb    $t6, ($s0)
/* 00497AB4 8F998124 */  lw    $t9, %call16(__ull_div)($gp)
/* 00497AB8 8FA7003C */  lw    $a3, 0x3c($sp)
/* 00497ABC 8FA60038 */  lw    $a2, 0x38($sp)
/* 00497AC0 8FA50054 */  lw    $a1, 0x54($sp)
/* 00497AC4 0320F809 */  jalr  $t9
/* 00497AC8 8FA40050 */   lw    $a0, 0x50($sp)
/* 00497ACC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497AD0 AFA20050 */  sw    $v0, 0x50($sp)
/* 00497AD4 1440FFEC */  bnez  $v0, .L00497A88
/* 00497AD8 AFA30054 */   sw    $v1, 0x54($sp)
/* 00497ADC 1460FFEA */  bnez  $v1, .L00497A88
/* 00497AE0 00000000 */   nop   
/* 00497AE4 8FB800A8 */  lw    $t8, 0xa8($sp)
/* 00497AE8 27A8005C */  addiu $t0, $sp, 0x5c
/* 00497AEC 5F000008 */  bgtzl $t8, .L00497B10
/* 00497AF0 8FAB00B0 */   lw    $t3, 0xb0($sp)
/* 00497AF4 07000003 */  bltz  $t8, .L00497B04
/* 00497AF8 240F002D */   li    $t7, 45
/* 00497AFC 10000004 */  b     .L00497B10
/* 00497B00 8FAB00B0 */   lw    $t3, 0xb0($sp)
.L00497B04:
/* 00497B04 2610FFFF */  addiu $s0, $s0, -1
/* 00497B08 A20F0000 */  sb    $t7, ($s0)
/* 00497B0C 8FAB00B0 */  lw    $t3, 0xb0($sp)
.L00497B10:
/* 00497B10 01104823 */  subu  $t1, $t0, $s0
/* 00497B14 252A0041 */  addiu $t2, $t1, 0x41
/* 00497B18 000A67C3 */  sra   $t4, $t2, 0x1f
/* 00497B1C 000B77C3 */  sra   $t6, $t3, 0x1f
/* 00497B20 01CC082B */  sltu  $at, $t6, $t4
/* 00497B24 AFAE0030 */  sw    $t6, 0x30($sp)
/* 00497B28 AFAC0038 */  sw    $t4, 0x38($sp)
/* 00497B2C 01406825 */  move  $t5, $t2
/* 00497B30 AFAA003C */  sw    $t2, 0x3c($sp)
/* 00497B34 01607825 */  move  $t7, $t3
/* 00497B38 14200010 */  bnez  $at, .L00497B7C
/* 00497B3C AFAB0034 */   sw    $t3, 0x34($sp)
/* 00497B40 018E082B */  sltu  $at, $t4, $t6
/* 00497B44 14200004 */  bnez  $at, .L00497B58
/* 00497B48 8FA400A0 */   lw    $a0, 0xa0($sp)
/* 00497B4C 014B082B */  sltu  $at, $t2, $t3
/* 00497B50 1020000A */  beqz  $at, .L00497B7C
/* 00497B54 00000000 */   nop   
.L00497B58:
/* 00497B58 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00497B5C 01ED082B */  sltu  $at, $t7, $t5
/* 00497B60 01CC3023 */  subu  $a2, $t6, $t4
/* 00497B64 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00497B68 00C13023 */  subu  $a2, $a2, $at
/* 00497B6C 24050020 */  li    $a1, 32
/* 00497B70 0320F809 */  jalr  $t9
/* 00497B74 01ED3823 */   subu  $a3, $t7, $t5
/* 00497B78 8FBC0020 */  lw    $gp, 0x20($sp)
.L00497B7C:
/* 00497B7C 8F998038 */  lw    $t9, %got(func_004954D0)($gp)
/* 00497B80 8FA6003C */  lw    $a2, 0x3c($sp)
/* 00497B84 8FA400A0 */  lw    $a0, 0xa0($sp)
/* 00497B88 273954D0 */  addiu $t9, %lo(func_004954D0) # addiu $t9, $t9, 0x54d0
/* 00497B8C 02002825 */  move  $a1, $s0
/* 00497B90 0320F809 */  jalr  $t9
/* 00497B94 00C08825 */   move  $s1, $a2
/* 00497B98 8FA200B0 */  lw    $v0, 0xb0($sp)
/* 00497B9C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00497BA0 00021023 */  negu  $v0, $v0
/* 00497BA4 0222082B */  sltu  $at, $s1, $v0
/* 00497BA8 50200009 */  beql  $at, $zero, .L00497BD0
/* 00497BAC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00497BB0 8F998038 */  lw    $t9, %got(func_00495650)($gp)
/* 00497BB4 8FA400A0 */  lw    $a0, 0xa0($sp)
/* 00497BB8 24050020 */  li    $a1, 32
/* 00497BBC 27395650 */  addiu $t9, %lo(func_00495650) # addiu $t9, $t9, 0x5650
/* 00497BC0 0320F809 */  jalr  $t9
/* 00497BC4 00513023 */   subu  $a2, $v0, $s1
/* 00497BC8 8FBC0020 */  lw    $gp, 0x20($sp)
.L00497BCC:
/* 00497BCC 8FBF0024 */  lw    $ra, 0x24($sp)
.L00497BD0:
/* 00497BD0 8FB00018 */  lw    $s0, 0x18($sp)
/* 00497BD4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00497BD8 03E00008 */  jr    $ra
/* 00497BDC 27BD00A0 */   addiu $sp, $sp, 0xa0
    .type write_int64, @function
    .size write_int64, .-write_int64
    .end write_int64
)"");
