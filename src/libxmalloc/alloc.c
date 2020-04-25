__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm



.bss
    .balign 4
# 1001C698
glabel malloc_scb
    # 00498760 xrealloc
    # 00498798 xfree
    # 00498A50 xmalloc
    .space 4
    .size malloc_scb, 4
    .type malloc_scb, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel xrealloc
    .ent xrealloc
/* 00498760 3C1C0FB8 */  .cpload $t9
/* 00498764 279C1B30 */  
/* 00498768 0399E021 */  
/* 0049876C 8F9988D4 */  lw    $t9, %call16(alloc_resize)($gp)
/* 00498770 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00498774 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00498778 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0049877C 0320F809 */  jalr  $t9
/* 00498780 8F868CC8 */   lw     $a2, %got(malloc_scb)($gp)
/* 00498784 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00498788 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0049878C 27BD0028 */  addiu $sp, $sp, 0x28
/* 00498790 03E00008 */  jr    $ra
/* 00498794 00000000 */   nop   
    .type xrealloc, @function
    .size xrealloc, .-xrealloc
    .end xrealloc

glabel xfree
    .ent xfree
    # 0042EB10 incorp_feedback
    # 00497C54 dispose
/* 00498798 3C1C0FB8 */  .cpload $t9
/* 0049879C 279C1AF8 */  
/* 004987A0 0399E021 */  
/* 004987A4 8F858CC8 */  lw     $a1, %got(malloc_scb)($gp)
    .type xfree, @function
    .size xfree, .-xfree
    .end xfree

glabel alloc_dispose
    .ent alloc_dispose
    # 0047F26C alloc_realloc
    # 00499018 alloc_resize
/* 004987A8 8CA80000 */  lw    $t0, ($a1)
/* 004987AC 2486FFF8 */  addiu $a2, $a0, -8
/* 004987B0 8D020000 */  lw    $v0, ($t0)
/* 004987B4 01003825 */  move  $a3, $t0
/* 004987B8 50400040 */  beql  $v0, $zero, .L004988BC
/* 004987BC 8CC40004 */   lw    $a0, 4($a2)
/* 004987C0 10E00018 */  beqz  $a3, .L00498824
/* 004987C4 00C7082A */   slt   $at, $a2, $a3
/* 004987C8 5420000A */  bnezl $at, .L004987F4
/* 004987CC 8CE70004 */   lw    $a3, 4($a3)
/* 004987D0 8CE3000C */  lw    $v1, 0xc($a3)
/* 004987D4 04610002 */  bgez  $v1, .L004987E0
/* 004987D8 0060C021 */   move  $t8, $v1
/* 004987DC 0003C022 */  neg   $t8, $v1
.L004987E0:
/* 004987E0 00F8C821 */  addu  $t9, $a3, $t8
/* 004987E4 0326082A */  slt   $at, $t9, $a2
/* 004987E8 1020000E */  beqz  $at, .L00498824
/* 004987EC 00000000 */   nop   
/* 004987F0 8CE70004 */  lw    $a3, 4($a3)
.L004987F4:
/* 004987F4 10E0000B */  beqz  $a3, .L00498824
/* 004987F8 00C7082A */   slt   $at, $a2, $a3
/* 004987FC 5420FFFD */  bnezl $at, .L004987F4
/* 00498800 8CE70004 */   lw    $a3, 4($a3)
/* 00498804 8CEE000C */  lw    $t6, 0xc($a3)
/* 00498808 05C10002 */  bgez  $t6, .L00498814
/* 0049880C 01C07821 */   move  $t7, $t6
/* 00498810 000E7822 */  neg   $t7, $t6
.L00498814:
/* 00498814 00EF1021 */  addu  $v0, $a3, $t7
/* 00498818 0046082A */  slt   $at, $v0, $a2
/* 0049881C 5420FFF5 */  bnezl $at, .L004987F4
/* 00498820 8CE70004 */   lw    $a3, 4($a3)
.L00498824:
/* 00498824 54E0001E */  bnezl $a3, .L004988A0
/* 00498828 8CE3000C */   lw    $v1, 0xc($a3)
/* 0049882C 01003825 */  move  $a3, $t0
/* 00498830 10E00018 */  beqz  $a3, .L00498894
/* 00498834 00C7082A */   slt   $at, $a2, $a3
/* 00498838 5420000A */  bnezl $at, .L00498864
/* 0049883C 8CE70000 */   lw    $a3, ($a3)
/* 00498840 8CE3000C */  lw    $v1, 0xc($a3)
/* 00498844 04610002 */  bgez  $v1, .L00498850
/* 00498848 0060C021 */   move  $t8, $v1
/* 0049884C 0003C022 */  neg   $t8, $v1
.L00498850:
/* 00498850 00F8C821 */  addu  $t9, $a3, $t8
/* 00498854 0326082A */  slt   $at, $t9, $a2
/* 00498858 1020000E */  beqz  $at, .L00498894
/* 0049885C 00000000 */   nop   
/* 00498860 8CE70000 */  lw    $a3, ($a3)
.L00498864:
/* 00498864 10E0000B */  beqz  $a3, .L00498894
/* 00498868 00C7082A */   slt   $at, $a2, $a3
/* 0049886C 5420FFFD */  bnezl $at, .L00498864
/* 00498870 8CE70000 */   lw    $a3, ($a3)
/* 00498874 8CEE000C */  lw    $t6, 0xc($a3)
/* 00498878 05C10002 */  bgez  $t6, .L00498884
/* 0049887C 01C07821 */   move  $t7, $t6
/* 00498880 000E7822 */  neg   $t7, $t6
.L00498884:
/* 00498884 00EF1021 */  addu  $v0, $a3, $t7
/* 00498888 0046082A */  slt   $at, $v0, $a2
/* 0049888C 5420FFF5 */  bnezl $at, .L00498864
/* 00498890 8CE70000 */   lw    $a3, ($a3)
.L00498894:
/* 00498894 10E0006C */  beqz  $a3, .L00498A48
/* 00498898 00000000 */   nop   
/* 0049889C 8CE3000C */  lw    $v1, 0xc($a3)
.L004988A0:
/* 004988A0 04630006 */  bgezl $v1, .L004988BC
/* 004988A4 8CC40004 */   lw    $a0, 4($a2)
/* 004988A8 8CE70000 */  lw    $a3, ($a3)
.L004988AC:
/* 004988AC 8CF8000C */  lw    $t8, 0xc($a3)
/* 004988B0 0702FFFE */  bltzl $t8, .L004988AC
/* 004988B4 8CE70000 */   lw    $a3, ($a3)
/* 004988B8 8CC40004 */  lw    $a0, 4($a2)
.L004988BC:
/* 004988BC 240CFFFC */  li    $t4, -4
/* 004988C0 008C2824 */  and   $a1, $a0, $t4
/* 004988C4 00C54821 */  addu  $t1, $a2, $a1
/* 004988C8 01204025 */  move  $t0, $t1
/* 004988CC 8D0A0004 */  lw    $t2, 4($t0)
/* 004988D0 30990002 */  andi  $t9, $a0, 2
/* 004988D4 17200033 */  bnez  $t9, .L004989A4
/* 004988D8 014C5824 */   and   $t3, $t2, $t4
/* 004988DC 8CC90000 */  lw    $t1, ($a2)
/* 004988E0 314E0001 */  andi  $t6, $t2, 1
/* 004988E4 01202025 */  move  $a0, $t1
/* 004988E8 15C0001B */  bnez  $t6, .L00498958
/* 004988EC 00C46023 */   subu  $t4, $a2, $a0
/* 004988F0 00857821 */  addu  $t7, $a0, $a1
/* 004988F4 01EB2021 */  addu  $a0, $t7, $t3
/* 004988F8 28810100 */  slti  $at, $a0, 0x100
/* 004988FC 14200009 */  bnez  $at, .L00498924
/* 00498900 8CEA0008 */   lw    $t2, 8($a3)
/* 00498904 29210100 */  slti  $at, $t1, 0x100
/* 00498908 50200007 */  beql  $at, $zero, .L00498928
/* 0049890C 24820002 */   addiu $v0, $a0, 2
/* 00498910 8D4D0008 */  lw    $t5, 8($t2)
/* 00498914 AD8A000C */  sw    $t2, 0xc($t4)
/* 00498918 AD8D0008 */  sw    $t5, 8($t4)
/* 0049891C ADAC000C */  sw    $t4, 0xc($t5)
/* 00498920 AD4C0008 */  sw    $t4, 8($t2)
.L00498924:
/* 00498924 24820002 */  addiu $v0, $a0, 2
.L00498928:
/* 00498928 AD820004 */  sw    $v0, 4($t4)
/* 0049892C 01842821 */  addu  $a1, $t4, $a0
/* 00498930 29610100 */  slti  $at, $t3, 0x100
/* 00498934 14200044 */  bnez  $at, .L00498A48
/* 00498938 ACA40000 */   sw    $a0, ($a1)
/* 0049893C 8D0D000C */  lw    $t5, 0xc($t0)
/* 00498940 8D040008 */  lw    $a0, 8($t0)
/* 00498944 AC8D000C */  sw    $t5, 0xc($a0)
/* 00498948 1548003F */  bne   $t2, $t0, .L00498A48
/* 0049894C ADA40008 */   sw    $a0, 8($t5)
/* 00498950 1000003D */  b     .L00498A48
/* 00498954 ACED0008 */   sw    $t5, 8($a3)
.L00498958:
/* 00498958 00852021 */  addu  $a0, $a0, $a1
/* 0049895C 28810100 */  slti  $at, $a0, 0x100
/* 00498960 14200009 */  bnez  $at, .L00498988
/* 00498964 29210100 */   slti  $at, $t1, 0x100
/* 00498968 50200008 */  beql  $at, $zero, .L0049898C
/* 0049896C 24830002 */   addiu $v1, $a0, 2
/* 00498970 8CEA0008 */  lw    $t2, 8($a3)
/* 00498974 8D4D0008 */  lw    $t5, 8($t2)
/* 00498978 AD8A000C */  sw    $t2, 0xc($t4)
/* 0049897C AD8D0008 */  sw    $t5, 8($t4)
/* 00498980 ADAC000C */  sw    $t4, 0xc($t5)
/* 00498984 AD4C0008 */  sw    $t4, 8($t2)
.L00498988:
/* 00498988 24830002 */  addiu $v1, $a0, 2
.L0049898C:
/* 0049898C AD830004 */  sw    $v1, 4($t4)
/* 00498990 25780001 */  addiu $t8, $t3, 1
/* 00498994 AD180004 */  sw    $t8, 4($t0)
/* 00498998 01844021 */  addu  $t0, $t4, $a0
/* 0049899C 1000002A */  b     .L00498A48
/* 004989A0 AD040000 */   sw    $a0, ($t0)
.L004989A4:
/* 004989A4 31590001 */  andi  $t9, $t2, 1
/* 004989A8 57200018 */  bnezl $t9, .L00498A0C
/* 004989AC 28A10100 */   slti  $at, $a1, 0x100
/* 004989B0 00AB2821 */  addu  $a1, $a1, $t3
/* 004989B4 28A10100 */  slti  $at, $a1, 0x100
/* 004989B8 14200006 */  bnez  $at, .L004989D4
/* 004989BC 8CEA0008 */   lw    $t2, 8($a3)
/* 004989C0 8D4D0008 */  lw    $t5, 8($t2)
/* 004989C4 ACCA000C */  sw    $t2, 0xc($a2)
/* 004989C8 ACCD0008 */  sw    $t5, 8($a2)
/* 004989CC ADA6000C */  sw    $a2, 0xc($t5)
/* 004989D0 AD460008 */  sw    $a2, 8($t2)
.L004989D4:
/* 004989D4 00C56021 */  addu  $t4, $a2, $a1
/* 004989D8 AD850000 */  sw    $a1, ($t4)
/* 004989DC 24AE0002 */  addiu $t6, $a1, 2
/* 004989E0 29610100 */  slti  $at, $t3, 0x100
/* 004989E4 14200018 */  bnez  $at, .L00498A48
/* 004989E8 ACCE0004 */   sw    $t6, 4($a2)
/* 004989EC 8D0D000C */  lw    $t5, 0xc($t0)
/* 004989F0 8D040008 */  lw    $a0, 8($t0)
/* 004989F4 AC8D000C */  sw    $t5, 0xc($a0)
/* 004989F8 15480013 */  bne   $t2, $t0, .L00498A48
/* 004989FC ADA40008 */   sw    $a0, 8($t5)
/* 00498A00 10000011 */  b     .L00498A48
/* 00498A04 ACED0008 */   sw    $t5, 8($a3)
/* 00498A08 28A10100 */  slti  $at, $a1, 0x100
.L00498A0C:
/* 00498A0C 54200008 */  bnezl $at, .L00498A30
/* 00498A10 01206025 */   move  $t4, $t1
/* 00498A14 8CEA0008 */  lw    $t2, 8($a3)
/* 00498A18 8D4D0008 */  lw    $t5, 8($t2)
/* 00498A1C ACCA000C */  sw    $t2, 0xc($a2)
/* 00498A20 ACCD0008 */  sw    $t5, 8($a2)
/* 00498A24 ADA6000C */  sw    $a2, 0xc($t5)
/* 00498A28 AD460008 */  sw    $a2, 8($t2)
/* 00498A2C 01206025 */  move  $t4, $t1
.L00498A30:
/* 00498A30 AD850000 */  sw    $a1, ($t4)
/* 00498A34 24AF0002 */  addiu $t7, $a1, 2
/* 00498A38 ACCF0004 */  sw    $t7, 4($a2)
/* 00498A3C 25620001 */  addiu $v0, $t3, 1
/* 00498A40 03E00008 */  jr    $ra
/* 00498A44 AD020004 */   sw    $v0, 4($t0)

.L00498A48:
/* 00498A48 03E00008 */  jr    $ra
/* 00498A4C 00000000 */   nop   

    .type alloc_dispose, @function
    .size alloc_dispose, .-alloc_dispose
    .end alloc_dispose

glabel xmalloc
    .ent xmalloc
    # 0040B930 read_feedback_file
    # 0042EB10 incorp_feedback
    # 00497BE0 new
/* 00498A50 3C1C0FB8 */  .cpload $t9
/* 00498A54 279C1840 */  
/* 00498A58 0399E021 */  
/* 00498A5C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00498A60 AFBF0020 */  sw    $ra, 0x20($sp)
/* 00498A64 10000006 */  b     .L00498A80
/* 00498A68 8F858CC8 */   lw     $a1, %got(malloc_scb)($gp)
    .type xmalloc, @function
    .size xmalloc, .-xmalloc
    .end xmalloc

glabel alloc_new
    .ent alloc_new
    # 0040F610 formbvlivran
    # 00414108 func_00414108
    # 0042020C gen_static_link
    # 00425618 func_00425618
    # 0042EB10 incorp_feedback
    # 0042F424 appendgraph
    # 0042F6CC controlflow
    # 00430680 func_00430680
    # 00434434 func_00434434
    # 0043771C optinit
    # 00439188 procinit
    # 0043A88C insert_outparlist
    # 0043AA18 appendstorelist
    # 0043AAF4 appendbbvarlst
    # 0043B15C func_0043B15C
    # 0043B2B8 func_0043B2B8
    # 0043C248 func_0043C248
    # 0043C56C func_0043C56C
    # 0043CA8C func_0043CA8C
    # 0043CFCC readnxtinst
    # 00444984 appendichain
    # 00445AEC trep_image
    # 0044EDF8 ilodfold
    # 00453430 func_00453430
    # 00453B04 func_00453B04
    # 00455D38 analoop
    # 00456310 func_00456310
    # 0045877C searchmtag_parm
    # 00458998 func_00458998
    # 00458B88 assign_mtag
    # 004590C8 searchproc
    # 00459360 insertijplab
    # 00459400 updatelab
    # 00459828 insertvar
    # 00459C9C enterfsymtab
    # 00459E84 enter_gp_rel_tab
    # 00459FB0 insertlda
    # 0045A25C insertcallee
    # 0045B978 mergecallees
    # 0045BCA8 func_0045BCA8
    # 0045C150 prepass
    # 0045DA18 formlivbb
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 0046123C func_0046123C
    # 00464AD4 alloc_livbb
    # 00464BFC localcolor
    # 00465CB8 insintf
    # 00465E50 spilltemps
    # 00467F04 split
    # 00469198 put_in_fallthru_bb
    # 0046920C put_in_jump_bb
    # 00469280 globalcolor
    # 0046F994 create_edge
    # 0046FA20 new_header_node
    # 0046FB40 record_labels
    # 004713E8 loopunroll
    # 00474FC8 func_00474FC8
    # 00475680 getexpsources
    # 0047606C func_0047606C
    # 004761D0 tail_recursion
    # 00476CA0 gettemp
    # 00477E20 func_00477E20
    # 0047BEF4 appendchain
    # 0047CDA4 extendstat
    # 0047F26C alloc_realloc
    # 00499018 alloc_resize
/* 00498A6C 3C1C0FB8 */  .cpload $t9
/* 00498A70 279C1824 */  
/* 00498A74 0399E021 */  
/* 00498A78 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00498A7C AFBF0020 */  sw    $ra, 0x20($sp)
.L00498A80:
/* 00498A80 AFBC001C */  sw    $gp, 0x1c($sp)
/* 00498A84 8CA80000 */  lw    $t0, ($a1)
/* 00498A88 2484000F */  addiu $a0, $a0, 0xf
/* 00498A8C 11000043 */  beqz  $t0, .L00498B9C
/* 00498A90 240DFFF8 */   li    $t5, -8
.L00498A94:
/* 00498A94 8D090008 */  lw    $t1, 8($t0)
/* 00498A98 008D2024 */  and   $a0, $a0, $t5
/* 00498A9C 8D2A0004 */  lw    $t2, 4($t1)
/* 00498AA0 28810010 */  slti  $at, $a0, 0x10
/* 00498AA4 10200002 */  beqz  $at, .L00498AB0
/* 00498AA8 00000000 */   nop   
/* 00498AAC 24040010 */  li    $a0, 16
.L00498AB0:
/* 00498AB0 0144082A */  slt   $at, $t2, $a0
/* 00498AB4 10200009 */  beqz  $at, .L00498ADC
/* 00498AB8 014D5024 */   and   $t2, $t2, $t5
/* 00498ABC 01205825 */  move  $t3, $t1
.L00498AC0:
/* 00498AC0 8D29000C */  lw    $t1, 0xc($t1)
/* 00498AC4 00000000 */  nop   
/* 00498AC8 8D2A0004 */  lw    $t2, 4($t1)
/* 00498ACC 112B0022 */  beq   $t1, $t3, .L00498B58
/* 00498AD0 0144602A */   slt   $t4, $t2, $a0
/* 00498AD4 1580FFFA */  bnez  $t4, .L00498AC0
/* 00498AD8 014D5024 */   and   $t2, $t2, $t5
.L00498ADC:
/* 00498ADC 254BFF00 */  addiu $t3, $t2, -0x100
/* 00498AE0 008B082A */  slt   $at, $a0, $t3
/* 00498AE4 1020000E */  beqz  $at, .L00498B20
/* 00498AE8 012A5821 */   addu  $t3, $t1, $t2
/* 00498AEC 8D6C0004 */  lw    $t4, 4($t3)
/* 00498AF0 AD640000 */  sw    $a0, ($t3)
/* 00498AF4 358C0002 */  ori   $t4, $t4, 2
/* 00498AF8 AD6C0004 */  sw    $t4, 4($t3)
/* 00498AFC 01645823 */  subu  $t3, $t3, $a0
/* 00498B00 348C0001 */  ori   $t4, $a0, 1
/* 00498B04 AD6C0004 */  sw    $t4, 4($t3)
/* 00498B08 01445023 */  subu  $t2, $t2, $a0
/* 00498B0C AD6A0000 */  sw    $t2, ($t3)
/* 00498B10 354A0002 */  ori   $t2, $t2, 2
/* 00498B14 AD2A0004 */  sw    $t2, 4($t1)
/* 00498B18 1000002D */  b     .L00498BD0
/* 00498B1C 25620008 */   addiu $v0, $t3, 8
.L00498B20:
/* 00498B20 8D2B0008 */  lw    $t3, 8($t1)
/* 00498B24 8D2C000C */  lw    $t4, 0xc($t1)
/* 00498B28 8D2D0004 */  lw    $t5, 4($t1)
/* 00498B2C AD6C000C */  sw    $t4, 0xc($t3)
/* 00498B30 AD8B0008 */  sw    $t3, 8($t4)
/* 00498B34 AD0B0008 */  sw    $t3, 8($t0)
/* 00498B38 35AD0001 */  ori   $t5, $t5, 1
/* 00498B3C 012A5821 */  addu  $t3, $t1, $t2
/* 00498B40 8D6C0004 */  lw    $t4, 4($t3)
/* 00498B44 AD2D0004 */  sw    $t5, 4($t1)
/* 00498B48 358C0002 */  ori   $t4, $t4, 2
/* 00498B4C AD6C0004 */  sw    $t4, 4($t3)
/* 00498B50 1000001F */  b     .L00498BD0
/* 00498B54 25220008 */   addiu $v0, $t1, 8
.L00498B58:
/* 00498B58 AFA40028 */  sw    $a0, 0x28($sp)
/* 00498B5C AFA80024 */  sw    $t0, 0x24($sp)
/* 00498B60 8F9988D0 */  lw    $t9, %call16(alloc_next_scb)($gp)
/* 00498B64 00000000 */  nop   
/* 00498B68 0320F809 */  jalr  $t9
/* 00498B6C 2484FFFC */   addiu $a0, $a0, -4
/* 00498B70 8FBC001C */  lw    $gp, 0x1c($sp)
/* 00498B74 8FA80024 */  lw    $t0, 0x24($sp)
/* 00498B78 10400006 */  beqz  $v0, .L00498B94
/* 00498B7C 8FA40028 */   lw    $a0, 0x28($sp)
/* 00498B80 8D090008 */  lw    $t1, 8($t0)
/* 00498B84 240DFFF8 */  li    $t5, -8
/* 00498B88 8D2A0004 */  lw    $t2, 4($t1)
/* 00498B8C 1000FFD3 */  b     .L00498ADC
/* 00498B90 014D5024 */   and   $t2, $t2, $t5
.L00498B94:
/* 00498B94 1000000E */  b     .L00498BD0
/* 00498B98 00000000 */   nop   
.L00498B9C:
/* 00498B9C AFA40028 */  sw    $a0, 0x28($sp)
/* 00498BA0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00498BA4 8F9988C8 */  lw    $t9, %call16(alloc_mark)($gp)
/* 00498BA8 00000000 */  nop   
/* 00498BAC 0320F809 */  jalr  $t9
/* 00498BB0 00A02025 */   move  $a0, $a1
/* 00498BB4 8FBC001C */  lw    $gp, 0x1c($sp)
/* 00498BB8 8FA40028 */  lw    $a0, 0x28($sp)
/* 00498BBC 8FA5002C */  lw    $a1, 0x2c($sp)
/* 00498BC0 1040FFF4 */  beqz  $v0, .L00498B94
/* 00498BC4 8CA80000 */   lw    $t0, ($a1)
/* 00498BC8 1000FFB2 */  b     .L00498A94
/* 00498BCC 240DFFF8 */   li    $t5, -8
.L00498BD0:
/* 00498BD0 8FBF0020 */  lw    $ra, 0x20($sp)
/* 00498BD4 27BD0028 */  addiu $sp, $sp, 0x28
/* 00498BD8 03E00008 */  jr    $ra
/* 00498BDC 00000000 */   nop   
    .type alloc_new, @function
    .size alloc_new, .-alloc_new
    .end alloc_new
)"");
